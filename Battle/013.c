//----- (0221FC20) --------------------------------------------------------
int __fastcall Function_221fc20(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 17) > 5u )
    *(uchar *)(a1 + 17) = 0;
  v2 = Function_200679c((int)Function_221fcac, 8336, 0, *(uint *)(a1 + 12));
  v3 = Function_201ced0((int)v2);
  Call_FillMemWithValue((int *)v3, 0, 0x2090u);
  *(uint *)v3 = v1;
  *(uint *)(v3 + 484) = ((int (__fastcall *)(uint))dword_223DF00[0])(*(uint *)(v1 + 8));
  *(uint *)(v3 + 488) = ((int (__fastcall *)(uint))dword_223E064[0])(*(uint *)(v1 + 8));
  *(uchar *)(v3 + 8312) = 0;
  *(uchar *)(v3 + 8310) = *(uchar *)(v1 + 17);
  *(uchar *)(v3 + 8311) = 16 * ((int (__fastcall *)(uint))dword_223F1F8[0])(*(uint *)(v1 + 8)) | *(uchar *)(v3 + 8311) & 0xF;
  result = ((int (__fastcall *)(uint, uint))dword_223E1F8[0])(*(uint *)(v1 + 8), *(uint *)(v1 + 40));
  *(uchar *)(v3 + 8335) = result;
  return result;
}

//----- (0221FCAC) --------------------------------------------------------
int __fastcall Function_221fcac(int a1, int a2)
{
  int v2;
  uint v3;
  int result;

  v2 = a2;
  v3 = *(uchar *)(a2 + 8312);
  if ( v3 <= 0x1A )
    JUMPOUT(__CS__, *((short *)&off_221FCC6 + v3) + 35781832);
  switch ( (uchar)v3 )
  {
    case 0:
      *(uchar *)(a2 + 8312) = Function_221fe5c(a2);
      goto LABEL_31;
    case 1:
      *(uchar *)(a2 + 8312) = Function_221ff60(a2);
      goto LABEL_31;
    case 2:
      *(uchar *)(a2 + 8312) = Function_222012c(a2);
      goto LABEL_31;
    case 3:
      *(uchar *)(a2 + 8312) = Function_22201dc(a2);
      goto LABEL_31;
    case 4:
      *(uchar *)(a2 + 8312) = Function_222029c(a2);
      goto LABEL_31;
    case 5:
      *(uchar *)(a2 + 8312) = Function_22203a0(a2);
      goto LABEL_31;
    case 6:
      *(uchar *)(a2 + 8312) = Function_222072c(a2);
      goto LABEL_31;
    case 7:
      *(uchar *)(a2 + 8312) = Function_2220738(a2);
      goto LABEL_31;
    case 8:
      *(uchar *)(a2 + 8312) = Function_2220744(a2);
      goto LABEL_31;
    case 9:
      *(uchar *)(a2 + 8312) = Function_2220750(a2);
      goto LABEL_31;
    case 0xA:
      *(uchar *)(a2 + 8312) = Function_222075c(a2);
      goto LABEL_31;
    case 0xB:
      *(uchar *)(a2 + 8312) = Function_2220768(a2);
      goto LABEL_31;
    case 0xC:
      *(uchar *)(a2 + 8312) = Function_222078c(a2);
      goto LABEL_31;
    case 0xD:
      *(uchar *)(a2 + 8312) = Function_22207b8(a2);
      goto LABEL_31;
    case 0xE:
      *(uchar *)(a2 + 8312) = Function_22207dc(a2);
      goto LABEL_31;
    case 0xF:
      *(uchar *)(a2 + 8312) = Function_222081c(a2);
      goto LABEL_31;
    case 0x10:
      *(uchar *)(a2 + 8312) = Function_2220834(a2);
      goto LABEL_31;
    case 0x11:
      *(uchar *)(a2 + 8312) = Function_2220848(a2);
      goto LABEL_31;
    case 0x12:
      *(uchar *)(a2 + 8312) = Function_2220864(a2);
      goto LABEL_31;
    case 0x13:
      *(uchar *)(a2 + 8312) = Function_2220418(a2);
      goto LABEL_31;
    case 0x14:
      *(uchar *)(a2 + 8312) = Function_222050c(a2);
      goto LABEL_31;
    case 0x15:
      *(uchar *)(a2 + 8312) = Function_2220628(a2);
      goto LABEL_31;
    case 0x16:
      *(uchar *)(a2 + 8312) = Function_222088c(a2);
      goto LABEL_31;
    case 0x17:
      *(uchar *)(a2 + 8312) = Function_22208a4(a2);
      goto LABEL_31;
    case 0x18:
      *(uchar *)(a2 + 8312) = Function_2220a4c(a2);
      goto LABEL_31;
    case 0x19:
      *(uchar *)(a2 + 8312) = Function_2220b78(a2);
      goto LABEL_31;
    case 0x1A:
      result = Function_2220ba4();
      if ( result != 1 )
        goto LABEL_31;
      break;
    default:
LABEL_31:
      Function_222537c(v2);
      Function_200c7ec(*(int **)(v2 + 8116));
      result = Function_222601c(v2);
      break;
  }
  return result;
}

//----- (0221FE5C) --------------------------------------------------------
int __fastcall Function_221fe5c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  REG_BLDCNT_SUB = 0;
  if ( *(uchar *)(*(uint *)a1 + 53) == 3 )
  {
    *(uchar *)(a1 + 8314) = 6;
    v2 = 19;
  }
  else
  {
    *(uchar *)(a1 + 8314) = 0;
    v2 = 1;
  }
  *(uint *)(a1 + 8328) = Function_2228a38(*(uint *)(*(uint *)a1 + 12));
  Function_2220f98(v1);
  Function_2220c0c(v1);
  Function_2220d4c(v1);
  Function_2220f08(v1);
  Function_2002bb8(2, *(uint *)(*(uint *)v1 + 12));
  Function_2221738(v1, *(uchar *)(v1 + 8314));
  Function_22260ec(v1, *(uchar *)(v1 + 8314));
  Function_2226444(v1, *(uchar *)(v1 + 8314));
  Function_2224500(v1);
  Function_2224b7c(v1, *(uchar *)(v1 + 8314));
  Function_2221a88(v1);
  Function_2221bf8(v1, *(uchar *)(v1 + 8314));
  if ( *(uchar *)(*(uint *)v1 + 50) )
    Function_2228a60(*(uint *)(v1 + 8328), 1);
  if ( !*(uchar *)(v1 + 8314) && Function_22219ac(v1, 0) == 1 )
    *(uchar *)(*(uint *)v1 + 17) = 1;
  Function_222563c(v1, *(uchar *)(v1 + 8314));
  Function_22214e0(v1, *(uchar *)(v1 + 8314));
  Function_2003178(*(uint *)(v1 + 488), 10, 0xFFFF, -8, 16, 0, 0);
  return v2;
}

//----- (0221FF60) --------------------------------------------------------
int __fastcall Function_221ff60(int a1)
{
  uchar *v1;

  v1 = (uchar *)a1;
  if ( Function_200384c(*(uint *)(a1 + 488)) )
    return 1;
  if ( Function_222124c(v1) != 1 )
    return 1;
  if ( *(uchar *)(*(uint *)v1 + 17) == 6 )
  {
    if ( *(uchar *)(*(uint *)v1 + 53) != 1 )
    {
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 6);
      return 25;
    }
    return 1;
  }
  Function_2005748(0x5DDu);
  Function_2225fcc(v1, *(uchar *)(*(uint *)v1 + 17));
  if ( *(uchar *)(*(uint *)v1 + 53) == 2 )
    return Function_221ffdc(v1);
  v1[8313] = 7;
  return 22;
}

//----- (0221FFDC) --------------------------------------------------------
int __fastcall Function_221ffdc(int *a1)
{
  int *v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  v2 = *a1;
  if ( !*(uchar *)(*a1 + 17) && *(uint *)(v2 + 24) || *(uchar *)(*a1 + 17) == 1 && *(uint *)(v2 + 28) )
  {
    Function_222449c(a1);
    Function_22240e0(v1);
    *(uchar *)(*v1 + 17) = 6;
    *((uchar *)v1 + 8313) = 25;
    result = 17;
  }
  else if ( !GetItemData(*(ushort *)(v2 + 34), 0x24u, *(uint *)(v2 + 12))
         || GetItemData(*(ushort *)(v2 + 34), 0x25u, *(uint *)(v2 + 12))
         || v1[20 * *(uchar *)(v2 + 17) + 6] & 0x80000000 )
  {
    v4 = *(ushort *)(v2 + 34);
    if ( ((int (__fastcall *)(uint, uint, uint, uint))dword_223E30C[0])(
           *(uint *)(v2 + 8),
           *(uint *)(v2 + 40),
           *(uchar *)(v2 + *(uchar *)(v2 + 17) + 44),
           0) == 1 )
    {
      if ( GetItemData(*(ushort *)(v2 + 34), 0x25u, *(uint *)(v2 + 12)) )
      {
        *((uchar *)v1 + 8313) = 13;
      }
      else if ( Function_22213f0(v1, *(uchar *)(v2 + 17)) != 1
             || GetItemData(*(ushort *)(v2 + 34), 0x17u, *(uint *)(v2 + 12)) )
      {
        *((uchar *)v1 + 8313) = 23;
      }
      else
      {
        Function_2221a54(
          *(uint *)(v2 + 8),
          *(ushort *)(v2 + 34),
          *(uchar *)(v2 + 51),
          *(uint *)(v2 + 12));
        v1[20 * *(uchar *)(v2 + 17) + 1] = ((int (__fastcall *)(uint, uint, uint))dword_223DFAC[0])(
                                                       *(uint *)(v2 + 8),
                                                       *(uint *)(v2 + 40),
                                                       *(uchar *)(v2 + *(uchar *)(v2 + 17) + 44));
        *(ushort *)(v2 + 32) = GetPkmnData((int *)v1[20 * *(uchar *)(v2 + 17) + 1], 0xA3u, 0);
        *(ushort *)(v2 + 32) -= LOWORD(v1[20 * *(uchar *)(v2 + 17) + 5]);
        *((uchar *)v1 + 8313) = 25;
      }
      *((uchar *)v1 + 8316) = 0;
      result = 22;
    }
    else
    {
      Function_200b1b8_CallMsgDecrypt((ushort **)v1[2026], 0x51u, (ushort *)v1[2028]);
      Function_22240e0(v1);
      *(uchar *)(*v1 + 17) = 6;
      *((uchar *)v1 + 8313) = 25;
      result = 17;
    }
  }
  else
  {
    *((uchar *)v1 + 8313) = 13;
    result = 22;
  }
  return result;
}

//----- (0222012C) --------------------------------------------------------
int __fastcall Function_222012c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  switch ( (uchar)Function_22212c4() )
  {
    case 0u:
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 7);
      if ( Function_22217a4(v1) == 1 )
      {
        result = 25;
      }
      else
      {
        *(uchar *)(v1 + 8313) = 15;
        result = 22;
      }
      break;
    case 1u:
      if ( Function_222194c(v1) == 1 )
        goto LABEL_11;
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 8);
      *(uchar *)(v1 + 8313) = 8;
      result = 22;
      break;
    case 2u:
      if ( Function_222194c(v1) == 1 )
        goto LABEL_11;
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 10);
      *(uchar *)(v1 + 8313) = 9;
      result = 22;
      break;
    case 3u:
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 6);
      *(uchar *)(v1 + 8313) = 6;
      result = 22;
      break;
    default:
LABEL_11:
      result = 2;
      break;
  }
  return result;
}

//----- (022201DC) --------------------------------------------------------
int __fastcall Function_22201dc(uchar *a1)
{
  uchar *v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  switch ( (uchar)Function_222130c() )
  {
    case 0u:
      v2 = Function_2221428(v1, *(uchar *)(*(uint *)v1 + 17), -1);
      if ( v2 == 255 )
        goto LABEL_8;
      *(uchar *)(*(uint *)v1 + 17) = v2;
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 12);
      v1[8313] = 14;
      result = 22;
      break;
    case 1u:
      v4 = Function_2221428(v1, *(uchar *)(*(uint *)v1 + 17), 1);
      if ( v4 == 255 )
        goto LABEL_8;
      *(uchar *)(*(uint *)v1 + 17) = v4;
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 13);
      v1[8313] = 14;
      result = 22;
      break;
    case 2u:
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 11);
      v1[8313] = 9;
      result = 22;
      break;
    case 3u:
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 6);
      v1[8332] = 1;
      v1[8313] = 7;
      result = 22;
      break;
    default:
LABEL_8:
      result = 3;
      break;
  }
  return result;
}

//----- (0222029C) --------------------------------------------------------
int __fastcall Function_222029c(uchar *a1)
{
  uchar *v1;
  int v2;
  int result;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_2221354();
  switch ( (uchar)v2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      if ( !*(ushort *)&v1[80 * *(uchar *)(*(uint *)v1 + 17) + 52 + 8 * v2] )
        goto LABEL_10;
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, (v2 + 14) & 0xFF);
      *(uchar *)(*(uint *)v1 + 52) = v2;
      v1[8313] = 10;
      result = 22;
      break;
    case 4:
      v4 = Function_2221428(v1, *(uchar *)(*(uint *)v1 + 17), -1);
      if ( v4 == 255 )
        goto LABEL_10;
      *(uchar *)(*(uint *)v1 + 17) = v4;
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 12);
      v1[8313] = 14;
      result = 22;
      break;
    case 5:
      v5 = Function_2221428(v1, *(uchar *)(*(uint *)v1 + 17), 1);
      if ( v5 == 255 )
        goto LABEL_10;
      *(uchar *)(*(uint *)v1 + 17) = v5;
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 13);
      v1[8313] = 14;
      result = 22;
      break;
    case 6:
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 9);
      v1[8313] = 8;
      result = 22;
      break;
    case 7:
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 6);
      v1[8332] = 2;
      v1[8313] = 7;
      result = 22;
      break;
    default:
LABEL_10:
      result = 4;
      break;
  }
  return result;
}

//----- (022203A0) --------------------------------------------------------
int __fastcall Function_22203a0(uchar *a1)
{
  uchar *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_222139c();
  switch ( (uchar)v2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      if ( *(uchar *)(*(uint *)v1 + 52) != v2
        && !*(ushort *)&v1[80 * *(uchar *)(*(uint *)v1 + 17) + 52 + 8 * v2] )
      {
        goto LABEL_6;
      }
      Function_2005748(0x5DDu);
      *(uchar *)(*(uint *)v1 + 52) = v2;
      result = 10;
      break;
    case 4:
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 6);
      v1[8313] = 9;
      result = 22;
      break;
    default:
LABEL_6:
      result = 5;
      break;
  }
  return result;
}

//----- (02220418) --------------------------------------------------------
int __fastcall Function_2220418(int a1)
{
  int v1;
  int v2;
  char v3;
  int result;
  int v5;

  v1 = a1;
  v2 = Function_22213e4();
  if ( v2 == -1 )
  {
    v2 = Function_2228b64(*(uint *)(v1 + 8328));
    v3 = -2;
    if ( v2 == -2 )
      v2 = 6;
  }
  else
  {
    v3 = Function_22256e8(v1);
  }
  switch ( v3 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      *(uchar *)(*(uint *)v1 + 52) = v2;
      *(uchar *)(v1 + 8333) = v2;
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, (v2 + 23) & 0xFF);
      *(uchar *)(v1 + 8313) = 12;
      result = 22;
      break;
    case 5:
      v5 = *(uchar *)(v1 + 8311);
      if ( !((uint)(v5 << 24) >> 28) )
        goto LABEL_10;
      *(uchar *)(v1 + 8311) = v5 & 0xF0 | (v5 & 0xF ^ 1) & 0xF;
      *(uchar *)(v1 + 8333) = v2;
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 18);
      *(uchar *)(v1 + 8313) = 11;
      result = 22;
      break;
    case 6:
      *(uchar *)(*(uint *)v1 + 52) = 4;
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 6);
      *(uchar *)(v1 + 8313) = 25;
      result = 22;
      break;
    default:
LABEL_10:
      result = 19;
      break;
  }
  return result;
}

//----- (0222050C) --------------------------------------------------------
int __fastcall Function_222050c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_22213e4();
  if ( v2 == -1 )
  {
    v2 = Function_2228b64(*(uint *)(v1 + 8328));
    if ( v2 == -2 )
      v2 = 2;
  }
  else
  {
    Function_22256e8(v1);
  }
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( (uint)*(uchar *)(v1 + 8311) << 24 >> 28 )
      {
        Function_2005748(0x5DDu);
        Function_2225fcc(v1, 18);
        *(uchar *)(v1 + 8311) = *(uchar *)(v1 + 8311) & 0xF0 | (*(uchar *)(v1 + 8311) & 0xF ^ 1) & 0xF;
        *(uchar *)(v1 + 8334) = 1;
        *(uchar *)(v1 + 8313) = 12;
        return 22;
      }
    }
    else if ( v2 == 2 )
    {
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 6);
      *(uchar *)(v1 + 8334) = 0;
      *(uchar *)(v1 + 8313) = 11;
      return 22;
    }
    result = 20;
  }
  else
  {
    Function_2005748(0x5DDu);
    if ( *(uchar *)(v1 + 8311) & 0xF )
      Function_2225fcc(v1, 29);
    else
      Function_2225fcc(v1, 28);
    if ( Function_22219dc(v1) == 1 )
    {
      Function_2223118(v1);
      if ( *(uchar *)(v1 + 8311) & 0xF )
        Function_2221a3c(v1);
      else
        Function_2221a04(v1);
      *(uchar *)(v1 + 8313) = 20;
    }
    else
    {
      *(uchar *)(v1 + 8313) = 25;
    }
    result = 22;
  }
  return result;
}

//----- (02220628) --------------------------------------------------------
int __fastcall Function_2220628(uint *a1)
{
  uchar *v1;
  int v2;
  int v3;
  char v4;
  int result;

  v1 = a1;
  v2 = *a1;
  v3 = Function_22213e4();
  if ( v3 == -1 )
  {
    v3 = Function_2228b64(*((uint *)v1 + 2082));
    v4 = -2;
    if ( v3 == -2 )
      v3 = 4;
  }
  else
  {
    v4 = Function_22256e8(v1);
  }
  switch ( v4 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      if ( !*(ushort *)&v1[80 * *(uchar *)(v2 + 17) + 52 + 8 * v3] )
        goto LABEL_12;
      *(uchar *)(*(uint *)v1 + 52) = v3;
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, (v3 + 19) & 0xFF);
      if ( ((int (__fastcall *)(uint, uint, uint, int, uint))dword_223E30C[0])(
             *(uint *)(v2 + 8),
             *(uint *)(v2 + 40),
             *(uchar *)(v2 + *(uchar *)(v2 + 17) + 44),
             v3,
             *(ushort *)(v2 + 34)) == 1 )
      {
        v1[8316] = 0;
        v1[8313] = 23;
        result = 22;
      }
      else
      {
        Function_200b1b8_CallMsgDecrypt(*((ushort ***)v1 + 2026), 0x51u, *((ushort **)v1 + 2028));
        Function_22240e0(v1);
        *(uchar *)(*(uint *)v1 + 17) = 6;
        v1[8313] = 25;
        result = 17;
      }
      break;
    case 4:
      Function_2005748(0x5DDu);
      Function_2225fcc(v1, 6);
      v1[8313] = 6;
      result = 22;
      break;
    default:
LABEL_12:
      result = 21;
      break;
  }
  return result;
}

//----- (0222072C) --------------------------------------------------------
int __fastcall Function_222072c(int a1)
{
  Function_22216c0(a1, 0);
  return 1;
}

//----- (02220738) --------------------------------------------------------
int __fastcall Function_2220738(int a1)
{
  Function_22216c0(a1, 1);
  return 2;
}

//----- (02220744) --------------------------------------------------------
int __fastcall Function_2220744(int a1)
{
  Function_22216c0(a1, 2);
  return 3;
}

//----- (02220750) --------------------------------------------------------
int __fastcall Function_2220750(int a1)
{
  Function_22216c0(a1, 3);
  return 4;
}

//----- (0222075C) --------------------------------------------------------
int __fastcall Function_222075c(int a1)
{
  Function_22216c0(a1, 4);
  return 5;
}

//----- (02220768) --------------------------------------------------------
int __fastcall Function_2220768(int a1)
{
  if ( *(uchar *)(a1 + 8311) & 0xF )
    Function_22216c0(a1, 8);
  else
    Function_22216c0(a1, 6);
  return 19;
}

//----- (0222078C) --------------------------------------------------------
int __fastcall Function_222078c(int a1)
{
  int v1;

  v1 = a1;
  Function_22252e8();
  if ( *(uchar *)(v1 + 8311) & 0xF )
    Function_22216c0(v1, 9);
  else
    Function_22216c0(v1, 7);
  return 20;
}

//----- (022207B8) --------------------------------------------------------
int __fastcall Function_22207b8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_22216c0(a1, 5);
  if ( GetItemData(*(ushort *)(*(uint *)v1 + 34), 0x25u, *(uint *)(*(uint *)v1 + 12)) )
    result = 24;
  else
    result = 21;
  return result;
}

//----- (022207DC) --------------------------------------------------------
int __fastcall Function_22207dc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2224b7c(a1, *(uchar *)(a1 + 8314));
  Function_2221bf8(v1, *(uchar *)(v1 + 8314));
  Function_22260ec(v1, *(uchar *)(v1 + 8314));
  Function_22214e0(v1, *(uchar *)(v1 + 8314));
  if ( *(uchar *)(v1 + 8314) == 2 )
    result = 3;
  else
    result = 4;
  return result;
}

//----- (0222081C) --------------------------------------------------------
int __fastcall Function_222081c(int a1)
{
  int v1;

  v1 = a1;
  Function_22240e0(a1);
  *(uchar *)(v1 + 8313) = 16;
  return 17;
}

//----- (02220834) --------------------------------------------------------
int __fastcall Function_2220834(int a1)
{
  Function_200e084(a1 + 8288, 0);
  return 2;
}

//----- (02220848) --------------------------------------------------------
int __fastcall Function_2220848(int a1)
{
  int result;

  if ( Function_201d724(*(uchar *)(a1 + 8315)) )
    result = 17;
  else
    result = 18;
  return result;
}

//----- (02220864) --------------------------------------------------------
int __fastcall Function_2220864(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( dword_21BF6C4 & 3 || Function_2022798() == 1 )
    result = *(uchar *)(v1 + 8313);
  else
    result = 18;
  return result;
}

//----- (0222088C) --------------------------------------------------------
int __fastcall Function_222088c(int a1)
{
  int result;

  if ( *(uchar *)(a1 + 8099) & 0x80 )
    result = 22;
  else
    result = *(uchar *)(a1 + 8313);
  return result;
}

//----- (022208A4) --------------------------------------------------------
int __fastcall Function_22208a4(int *a1)
{
  int *v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;

  v1 = a1;
  v2 = *((uchar *)a1 + 8316);
  v3 = *a1;
  if ( v2 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_22208C0 + v2) + 35784898);
  switch ( (uchar)v2 )
  {
    case 0:
      a1[20 * *(uchar *)(v3 + 17) + 1] = ((int (__fastcall *)(uint, uint, uint))dword_223DFAC[0])(
                                                     *(uint *)(v3 + 8),
                                                     *(uint *)(v3 + 40),
                                                     *(uchar *)(v3 + *(uchar *)(v3 + 17) + 44));
      Function_2224144(v1);
      v4 = *(uchar *)(v3 + 17);
      if ( *((uchar *)v1 + 8314) == 5 )
      {
        *((ushort *)v1 + 4160) = GetPkmnData((int *)v1[20 * v4 + 1], *(uchar *)(v3 + 52) + 58, 0);
        *((uchar *)v1 + 8316) = 2;
      }
      else
      {
        HIBYTE(v1[20 * *(uchar *)(v3 + 17) + 6]) = 8 * Function_208e9f0((int *)v1[20 * v4 + 1]) & 0x7F | HIBYTE(v1[20 * *(uchar *)(v3 + 17) + 6]) & 0x87;
        if ( (uint)HIBYTE(v1[20 * *(uchar *)(v3 + 17) + 6]) << 25 >> 28 == 7 )
        {
          Function_200d3f4((uint *)v1[*(uchar *)(v3 + 17) + 2043], 0);
          Function_22234a8(v1, *(uchar *)(v3 + 17));
        }
        *((ushort *)v1 + 4159) = GetPkmnData((int *)v1[20 * *(uchar *)(v3 + 17) + 1], 0xA3u, 0);
        *((uchar *)v1 + 8316) = 4;
      }
      Function_2005748(0x5ECu);
      return 23;
    case 1:
      v5 = 20 * *(uchar *)(v3 + 17);
      v6 = LOWORD(a1[v5 + 5]);
      if ( *((ushort *)a1 + 4159) == v6 )
      {
        *((uchar *)a1 + 8316) = 3;
      }
      else
      {
        LOWORD(a1[v5 + 5]) = v6 + 1;
        v7 = *(uchar *)(v3 + 17);
        Function_2223448();
      }
      return 23;
    case 2:
      v8 = (int)&a1[20 * *(uchar *)(v3 + 17) + 13] + 2;
      v9 = 8 * *(uchar *)(v3 + 52);
      v10 = *(uchar *)(v8 + v9);
      if ( *((ushort *)a1 + 4160) == v10 )
      {
        *((uchar *)a1 + 8316) = 3;
      }
      else
      {
        *(uchar *)(v8 + v9) = v10 + 1;
        v11 = *(uchar *)(v3 + 52);
        Function_2223f5c();
      }
      return 23;
    case 3:
      Function_2221a54(
        *(uint *)(v3 + 8),
        *(ushort *)(v3 + 34),
        *(uchar *)(v3 + 51),
        *(uint *)(v3 + 12));
      Function_22240e0(v1);
      *((uchar *)v1 + 8313) = 25;
      return 17;
    case 4:
      v13 = 20 * *(uchar *)(v3 + 17);
      v14 = LOWORD(a1[v13 + 5]);
      if ( *((ushort *)a1 + 4159) != v14 )
      {
        LOWORD(a1[v13 + 5]) = v14 + 1;
        v15 = *(uchar *)(v3 + 17);
        Function_2223448();
        Function_22264c4(v1);
      }
      *((uchar *)v1 + 8316) = 1;
      break;
    default:
      return 23;
  }
  return 23;
}

//----- (02220A4C) --------------------------------------------------------
int __fastcall Function_2220a4c(int *a1)
{
  int *v1;
  int v2;
  uint v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  uint v8;
  int *v9;
  int v10;
  int v12;
  int v13;

  v1 = a1;
  v13 = *a1;
  v2 = *((uchar *)a1 + 8316);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v7 = 0;
      v8 = 0;
      v12 = 0;
      v9 = v1;
      do
      {
        v10 = (int)&v1[20 * *(uchar *)(v13 + 17) + v12];
        if ( *(ushort *)(v10 + 52) )
        {
          if ( *((ushort *)v9 + 4160) == *(uchar *)(v10 + 54) )
          {
            ++v7;
          }
          else
          {
            ++*(uchar *)(v10 + 54);
            Function_2223f5c(v1, (v8 + 1) & 0xFFFF, (ushort)v8);
          }
        }
        else
        {
          ++v7;
        }
        ++v8;
        v9 = (int *)((char *)v9 + 2);
        v12 += 2;
      }
      while ( v8 < 4 );
      if ( v7 == 4 )
        *((uchar *)v1 + 8316) = 2;
    }
    else if ( v2 == 2 )
    {
      Function_2221a54(
        *(uint *)(v13 + 8),
        *(ushort *)(v13 + 34),
        *(uchar *)(v13 + 51),
        *(uint *)(v13 + 12));
      Function_22240e0(v1);
      *((uchar *)v1 + 8313) = 25;
      return 17;
    }
  }
  else
  {
    v3 = 0;
    v4 = 0;
    v1[20 * *(uchar *)(v13 + 17) + 1] = ((int (__fastcall *)(uint, uint, uint))dword_223DFAC[0])(
                                                    *(uint *)(v13 + 8),
                                                    *(uint *)(v13 + 40),
                                                    *(uchar *)(v13 + *(uchar *)(v13 + 17) + 44));
    v5 = v1;
    do
    {
      v6 = (int)&v1[20 * *(uchar *)(v13 + 17)];
      if ( *(ushort *)(v6 + v4 + 52) )
        *((ushort *)v5 + 4160) = GetPkmnData(*(int **)(v6 + 4), v3 + 58, 0);
      ++v3;
      v4 += 8;
      v5 = (int *)((char *)v5 + 2);
    }
    while ( v3 < 4 );
    Function_2224144(v1);
    Function_2005748(0x5ECu);
    *((uchar *)v1 + 8316) = 1;
  }
  return 24;
}

//----- (02220B78) --------------------------------------------------------
int __fastcall Function_2220b78(int a1)
{
  Function_2003178(*(uint *)(a1 + 488), 10, 0xFFFF, -8, 0, 16, 0);
  return 26;
}

//----- (02220BA4) --------------------------------------------------------
int __fastcall Function_2220ba4(int a1, uint *a2)
{
  int v2;
  uint *v3;

  v2 = a1;
  v3 = a2;
  if ( Function_200384c(a2[122]) )
    return 0;
  Function_2220f60(v3);
  Function_2224970(v3);
  Function_2221bc8(v3);
  Function_2220d1c(v3[121]);
  *(uchar *)(*v3 + 50) = Function_2228a5c(v3[2082]);
  Function_2228a50(v3[2082]);
  Function_2002c60(2);
  *(uchar *)(*v3 + 54) = 1;
  Function_20067d0(v2);
  return 1;
}

//----- (02220C0C) --------------------------------------------------------
int __fastcall Function_2220c0c(uint **a1, int a2, int a3, int a4)
{
  uint **v4;
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
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;

  v38 = a4;
  v4 = a1;
  v34 = 1;
  v35 = 0;
  v36 = 0;
  v37 = 1;
  Function_20183a0(&v34, 1);
  v27 = 0;
  v28 = 0;
  v29 = 2048;
  v30 = 0;
  v31 = 33554433;
  v32 = 769;
  v33 = 0;
  Function_20183c4(v4[121], 7u, &v27, 0);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 33619969;
  v25 = 513;
  v26 = 0;
  Function_20183c4(v4[121], 6u, &v20, 0);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 67239937;
  v18 = 256;
  v19 = 0;
  Function_20183c4(v4[121], 5u, &v13, 0);
  Function_2019ebc(v4[121], 5u);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 100859905;
  v11 = 0;
  v12 = 0;
  Function_20183c4(v4[121], 4u, &v6, 0);
  Function_2019ebc(v4[121], 4u);
  Function_2019690(5u, 32, 0, (*v4)[3]);
  Function_2019690(4u, 32, 0, (*v4)[3]);
  Function_201c3c0((int)v4[121], 5);
  return Function_201c3c0((int)v4[121], 4);
}

//----- (02220D1C) --------------------------------------------------------
int __fastcall Function_2220d1c(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff74(0x1Fu, 0);
  Function_2019044(v1, 4);
  Function_2019044(v1, 5);
  Function_2019044(v1, 6);
  return Function_2019044(v1, 7);
}

//----- (02220D4C) --------------------------------------------------------
uint __fastcall Function_2220d4c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uchar *v13;
  uchar *v14;
  uchar *v15;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  v5 = LoadFromNARC_8(72, *(uint *)(*(uint *)a1 + 12), a3, a4);
  Function_20070e8((int)v5, 0x16u, *(uint **)(v4 + 484), 7u, 0, 0, 0, *(uint *)(*(uint *)v4 + 12));
  v6 = Function_2006cb8_LoadFileInMemory((int)v5, 0x14u, *(uint *)(*(uint *)v4 + 12));
  Function_20a7248(v6, &v17);
  Function_2225710(v4, v17 + 12);
  free(v6);
  v7 = Function_2006cb8_LoadFileInMemory((int)v5, 0x15u, *(uint *)(*(uint *)v4 + 12));
  Function_20a7248(v7, &v17);
  Function_2225a3c(v4, v17 + 12);
  free(v7);
  Function_2003050(*(uint *)(v4 + 488), 72, 23, *(uint *)(*(uint *)v4 + 12), 1, 512, 0);
  Call_FS_CloseFile(v5);
  v8 = Function_2003164(*(uint *)(v4 + 488), 1);
  memcpy((uchar *)(v4 + 8032), (char *)(v8 + 384), 64);
  Function_2003050(*(uint *)(v4 + 488), 14, 6, *(uint *)(*(uint *)v4 + 12), 1, 32, 0xD0u);
  Function_2003050(*(uint *)(v4 + 488), 14, 7, *(uint *)(*(uint *)v4 + 12), 1, 32, 0xF0u);
  v9 = ((int (__fastcall *)(uint))dword_223EDE0[0])(*(uint *)(*(uint *)v4 + 8));
  v10 = v9;
  v11 = Function_200dd04(v9);
  LoadFromNARC_RGCN(38, v11, *(uint **)(v4 + 484), 4u, 1, 0, 0, *(uint *)(*(uint *)v4 + 12));
  v12 = Function_200dd08(v10);
  Function_2003050(*(uint *)(v4 + 488), 38, v12, *(uint *)(*(uint *)v4 + 12), 1, 32, 0xE0u);
  v13 = (uchar *)Function_2003164(*(uint *)(v4 + 488), 1);
  v14 = (uchar *)malloc(*(uint *)(*(uint *)v4 + 12), 32);
  memcpy(v14, v13 + 416, 32);
  v15 = v14 + 14;
  v14[14] = v13[308];
  v15[1] = v13[309];
  v15[2] = v13[310];
  v15[3] = v13[311];
  v14[6] = v13[312];
  v14[7] = v13[313];
  v14[8] = v13[314];
  v14[9] = v13[315];
  Function_2002fbc(*(uint *)(v4 + 488), (int)v14, 1, 208, 0x20u);
  return free((int)v14);
}

//----- (02220F08) --------------------------------------------------------
int __fastcall Function_2220f08(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  a1[2026] = LoadFromMsgNARC(0, 26, 3, *(uint *)(*a1 + 12));
  v1[2025] = Function_200c440(15, 14, 0, *(uint *)(*v1 + 12));
  v1[2027] = Function_200b358(*(uint *)(*v1 + 12));
  result = Function_2023790(512, *(uint *)(*v1 + 12));
  v1[2028] = result;
  return result;
}

//----- (02220F60) --------------------------------------------------------
uint __fastcall Function_2220f60(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_200b190(*(ushort **)(a1 + 8104));
  Function_200c560(*(int **)(v1 + 8100));
  Function_200b3f0(*(uint **)(v1 + 8108), v2);
  return Function_20237bc_FreeMsg(*(uint *)(v1 + 8112), v3);
}

//----- (02220F98) --------------------------------------------------------
int __fastcall Function_2220f98(int **a1)
{
  int result;
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  uchar *v17;
  int **v18;
  int v19;
  int v20;

  v18 = a1;
  v20 = 0;
  result = GetNrOfPkmnInParty(**a1);
  if ( result > 0 )
  {
    do
    {
      v19 = 20 * v20;
      v2 = (int)&v18[20 * v20];
      v3 = GetAdrOfPkmnInParty((uint *)**v18, v20);
      *(uint *)(v2 + 4) = v3;
      *(ushort *)(v2 + 8) = GetPkmnData(v3, 5u, 0);
      if ( *(ushort *)(v2 + 8) )
      {
        v4 = 20 * v20;
        v5 = (int)&v18[20 * v20];
        *(ushort *)(v5 + 10) = GetPkmnData(*(int **)(v5 + 4), 0xA5u, 0);
        *(ushort *)(v5 + 12) = GetPkmnData(*(int **)(v5 + 4), 0xA6u, 0);
        *(ushort *)(v5 + 14) = GetPkmnData(*(int **)(v5 + 4), 0xA7u, 0);
        *(ushort *)(v5 + 16) = GetPkmnData(*(int **)(v5 + 4), 0xA8u, 0);
        *(ushort *)(v5 + 18) = GetPkmnData(*(int **)(v5 + 4), 0xA9u, 0);
        *(ushort *)(v5 + 20) = GetPkmnData(*(int **)(v5 + 4), 0xA3u, 0);
        *(ushort *)(v5 + 22) = GetPkmnData(*(int **)(v5 + 4), 0xA4u, 0);
        *(uchar *)(v5 + 24) = GetPkmnData(*(int **)(v5 + 4), 0xB1u, 0);
        *(uchar *)(v5 + 25) = GetPkmnData(*(int **)(v5 + 4), 0xB2u, 0);
        v6 = (int)v18 + 26;
        *(uchar *)(v6 + v4 * 4) = GetPkmnData(*(int **)(v5 + 4), 0xA1u, 0) & 0x7F | *(uchar *)(v6 + v4 * 4) & 0x80;
        v7 = GetPkmnData(*(int **)(v5 + 4), 0xB0u, 0);
        v8 = BYTE2(v18[20 * v20 + 6]);
        if ( v7 == 1 )
          *(uchar *)(v6 + v4 * 4) = v8 & 0x7F;
        else
          *(uchar *)(v6 + v4 * 4) = v8 | 0x80;
        v9 = (int)&v18[v4];
        v10 = (int)v18 + 27;
        *(uchar *)(v10 + v4 * 4) = Call_DecidePkmnGender((int)v18[v4 + 1]) & 7 | *(uchar *)(v10 + v4 * 4) & 0xF8;
        *(uchar *)(v10 + v4 * 4) = 8 * Function_208e9f0(v18[v4 + 1]) & 0x7F | *(uchar *)(v10 + v4 * 4) & 0x87;
        *(uchar *)(v10 + v4 * 4) = ((uchar)GetPkmnData(v18[v4 + 1], 0x4Cu, 0) << 7) | *(uchar *)(v10 + v4 * 4) & 0x7F;
        *(ushort *)(v9 + 28) = GetPkmnData(v18[v4 + 1], 0xAu, 0);
        *(ushort *)(v9 + 30) = GetPkmnData(v18[v4 + 1], 6u, 0);
        *(uint *)(v9 + 32) = GetPkmnData(v18[v4 + 1], 8u, 0);
        *(uint *)(v9 + 36) = GetBaseExpPts(LOWORD(v18[v4 + 2]), BYTE2(v18[v4 + 6]) & 0x7F);
        v11 = BYTE2(v18[v4 + 6]) & 0x7F;
        if ( v11 == 100 )
        {
          v12 = (int)&v18[v4];
          v13 = (int)v18[v4 + 9];
        }
        else
        {
          v12 = (int)&v18[v4];
          v13 = GetBaseExpPts(LOWORD(v18[v4 + 2]), v11 + 1);
        }
        *(uint *)(v12 + 40) = v13;
        *(uchar *)(v12 + 44) = GetPkmnData(*(int **)(v12 + 4), 0x13u, 0);
        *(uchar *)(v12 + 45) = GetPkmnData(*(int **)(v12 + 4), 0x14u, 0);
        *(uchar *)(v12 + 46) = GetPkmnData(*(int **)(v12 + 4), 0x15u, 0);
        *(uchar *)(v12 + 47) = GetPkmnData(*(int **)(v12 + 4), 0x16u, 0);
        *(uchar *)(v12 + 48) = GetPkmnData(*(int **)(v12 + 4), 0x17u, 0);
        *(uchar *)(v12 + 49) = GetPkmnData(*(int **)(v12 + 4), 0xA2u, 0);
        *(uchar *)(v12 + 50) = GetPkmnData(*(int **)(v12 + 4), 0x70u, 0);
        v14 = (int)&v18[v19 + 13];
        v15 = 0;
        v16 = (int)&v18[v19];
        do
        {
          v17 = (uchar *)(v14 + 8 * v15);
          *(ushort *)(v14 + 8 * v15) = GetPkmnData(*(int **)(v16 + 4), v15 + 54, 0);
          if ( *(ushort *)(v14 + 8 * v15) )
          {
            v17[2] = GetPkmnData(*(int **)(v16 + 4), v15 + 58, 0);
            v17[3] = GetPkmnData(*(int **)(v16 + 4), v15 + 62, 0);
            v17[3] = CalcMovePP(*(ushort *)v17, (uchar)v17[3]);
            v17[4] = LoadMoveData(*(ushort *)v17, 3u);
            v17[5] = LoadMoveData(*(ushort *)v17, 1u);
            v17[6] = LoadMoveData(*(ushort *)v17, 4u);
            v17[7] = LoadMoveData(*(ushort *)v17, 2u);
          }
          v15 = (v15 + 1) & 0xFFFF;
        }
        while ( v15 < 4 );
      }
      v20 = (v20 + 1) & 0xFFFF;
      result = GetNrOfPkmnInParty(**v18);
    }
    while ( v20 < result );
  }
  return result;
}

//----- (0222124C) --------------------------------------------------------
int __fastcall Function_222124c(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_22213e4();
  if ( v2 == -1 )
  {
    v3 = Function_2228b64(v1[2082]);
    if ( v3 == -2 )
    {
      v3 = 6;
    }
    else if ( v3 == -1 )
    {
      return 0;
    }
    if ( v3 == 6 || Function_22213f0(v1, v3) )
    {
      *(uchar *)(*v1 + 17) = v3;
      return 1;
    }
  }
  else if ( v2 == 6 || Function_22213f0(v1, v2) )
  {
    *(uchar *)(*v1 + 17) = v2;
    Function_22256e8(v1);
    return 1;
  }
  return 0;
}

//----- (022212C4) --------------------------------------------------------
int __fastcall Function_22212c4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_22213e4();
  if ( v2 == -1 )
  {
    v2 = Function_2228b64(*(uint *)(v1 + 8328));
    if ( v2 == -2 )
    {
      LOBYTE(v2) = 3;
    }
    else if ( v2 == -1 )
    {
      return 255;
    }
  }
  else
  {
    Function_22256e8(v1);
  }
  return (uchar)v2;
}

//----- (0222130C) --------------------------------------------------------
int __fastcall Function_222130c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_22213e4();
  if ( v2 == -1 )
  {
    v2 = Function_2228b64(*(uint *)(v1 + 8328));
    if ( v2 == -2 )
    {
      LOBYTE(v2) = 3;
    }
    else if ( v2 == -1 )
    {
      return 255;
    }
  }
  else
  {
    Function_22256e8(v1);
  }
  return (uchar)v2;
}

//----- (02221354) --------------------------------------------------------
int __fastcall Function_2221354(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_22213e4();
  if ( v2 == -1 )
  {
    v2 = Function_2228b64(*(uint *)(v1 + 8328));
    if ( v2 == -2 )
    {
      LOBYTE(v2) = 7;
    }
    else if ( v2 == -1 )
    {
      return 255;
    }
  }
  else
  {
    Function_22256e8(v1);
  }
  return (uchar)v2;
}

//----- (0222139C) --------------------------------------------------------
int __fastcall Function_222139c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_22213e4();
  if ( v2 == -1 )
  {
    v2 = Function_2228b64(*(uint *)(v1 + 8328));
    if ( v2 == -2 )
    {
      LOBYTE(v2) = 4;
    }
    else if ( v2 == -1 )
    {
      return 255;
    }
  }
  else
  {
    Function_22256e8(v1);
  }
  return (uchar)v2;
}

//----- (022213E4) --------------------------------------------------------
int __fastcall Function_22213e4(int a1, uchar *a2)
{
  return Function_2022664(a2);
}

//----- (022213F0) --------------------------------------------------------
int __fastcall Function_22213f0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( !*(ushort *)(a1 + 80 * a2 + 8) )
    return 0;
  if ( !a2 || (Function_222196c() || Function_222198c(v3)) && v2 == 1 )
    return 1;
  return 2;
}

//----- (02221428) --------------------------------------------------------
int __fastcall Function_2221428(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  int v9;
  int v10;
  int result;
  char v12;
  char v13;
  char v14;
  char v15;
  char v16;
  char v17;
  int v18;

  v18 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a2;
  if ( Function_222198c(a1) == 1 )
  {
    v8 = &v12;
    v9 = 0;
    v12 = 0;
    v13 = 2;
    v14 = 4;
    v15 = 1;
    v16 = 3;
    v17 = 5;
    do
    {
      if ( v7 == (uchar)*v8 )
        break;
      ++v9;
      ++v8;
    }
    while ( v9 < 6 );
    while ( 1 )
    {
      v9 += v6;
      if ( v9 >= 0 )
      {
        if ( v9 >= 6 )
          v9 = 0;
      }
      else
      {
        v9 = 5;
      }
      v10 = (uchar)*(&v12 + v9);
      if ( v7 == v10 )
        break;
      if ( Function_22213f0(v5, v10) )
      {
        result = (uchar)*(&v12 + v9);
        if ( !(*(uchar *)(v5 + 80 * result + 27) & 0x80) )
          return result;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v4 += v6;
      if ( v4 >= 0 )
      {
        if ( v4 >= 6 )
          v4 = 0;
      }
      else
      {
        v4 = 5;
      }
      if ( v7 == v4 )
        break;
      if ( Function_22213f0(v5, v4) && !(*(uchar *)(v5 + 80 * v4 + 27) & 0x80) )
        return (uchar)v4;
    }
  }
  return 255;
}

//----- (022214E0) --------------------------------------------------------
int __fastcall Function_22214e0(int result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  uint v8;
  int v9;

  v2 = result;
  if ( a2 == 2 )
  {
    v3 = result + 4 + 80 * *(uchar *)(*(uint *)result + 17);
    if ( (*(uchar *)(v3 + 22) & 0x7Fu) >= 0x64 )
    {
      v5 = 0;
      v6 = 0;
    }
    else
    {
      v4 = *(uint *)(v3 + 32);
      v5 = *(uint *)(v3 + 36) - v4;
      v6 = *(uint *)(v3 + 28) - v4;
    }
    v7 = Function_208c0bc(v6, v5, 64);
    v8 = 0;
    do
    {
      if ( v7 < 8 )
        v9 = (v7 + 22) & 0xFFFF;
      else
        v9 = 30;
      Function_2221560(v2, v9, (v8 + 10) & 0xFFFF, 8);
      if ( v7 >= 8 )
        v7 = (v7 - 8) & 0xFF;
      else
        v7 = 0;
      v8 = (v8 + 1) & 0xFF;
    }
    while ( v8 < 8 );
    result = Function_201c3c0(*(uint *)(v2 + 484), 7);
  }
  return result;
}

//----- (02221560) --------------------------------------------------------
char *__fastcall Function_2221560(int a1, short a2, uchar a3, uchar a4)
{
  return Function_2019cb8(*(uint *)(a1 + 484), 7, a2, a3, a4, 1u, 1u, 0x10u);
}

//----- (02221590) --------------------------------------------------------
char *__fastcall Function_2221590(int a1, short a2, int a3)
{
  int v3;
  uchar v4;
  short v5;
  int v6;

  v3 = a1;
  v4 = 2 * a3;
  v5 = a2;
  v6 = 2 * a3 + 2;
  Function_2019cb8(*(uint *)(a1 + 484), 7, a2, (uchar)v6, 0xEu, 1u, 1u, 0x10u);
  v4 += 3;
  Function_2019cb8(*(uint *)(v3 + 484), 7, v5 + 1, v4, 0xEu, 1u, 1u, 0x10u);
  Function_2019cb8(*(uint *)(v3 + 484), 7, v5 + 32, (uchar)v6, 0xFu, 1u, 1u, 0x10u);
  return Function_2019cb8(*(uint *)(v3 + 484), 7, v5 + 33, v4, 0xFu, 1u, 1u, 0x10u);
}

//----- (02221630) --------------------------------------------------------
int __fastcall Function_2221630(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_2221590(v1, 293, (uchar)v2);
    result = (v2 + 1) << 16;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 < 6 );
  return result;
}

//----- (02221654) --------------------------------------------------------
int __fastcall Function_2221654(int result, int a2)
{
  int *v2;
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int i;

  v2 = (int *)result;
  if ( a2 == 9 )
  {
    Function_2221630(result);
    v3 = *v2;
    v4 = *(uchar *)(*v2 + 52);
    if ( v4 >= 4 )
      v5 = *(ushort *)(v3 + 36);
    else
      v5 = LOWORD(v2[20 * *(uchar *)(v3 + 17) + 13 + 2 * v4]);
    v6 = LoadMoveData(v5, 0xAu);
    v7 = Function_2095734(v6);
    v8 = (char)s32_div_f(v7, 10);
    for ( i = 0; i < v8; i = (i + 1) & 0xFFFF )
      Function_2221590((int)v2, 320, (uchar)i);
    result = Function_201c3c0(v2[121], 7);
  }
  return result;
}

//----- (022216C0) --------------------------------------------------------
int __fastcall Function_22216c0(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_2221738(a1, a2);
  Function_2019f04(*(uint *)(v2 + 484), 4, 0);
  Function_2019f04(*(uint *)(v2 + 484), 5, 0);
  Function_2224b7c(v2, v3);
  Function_2221bb0(v2);
  Function_2221ac4(v2, v3);
  Function_2221bf8(v2, v3);
  Function_22214e0(v2, v3);
  Function_2221654(v2, v3);
  Function_222563c(v2, v3);
  Function_22260ec(v2, v3);
  Function_2226444(v2, v3);
  result = 8314;
  *(uchar *)(v2 + 8314) = v3;
  return result;
}

//----- (02221738) --------------------------------------------------------
uint __fastcall Function_2221738(int *a1, int a2, int a3, int a4)
{
  int *v4;
  uint v5;
  int *v6;
  int v7;
  uint result;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = 0;
  v6 = &dword_2228E50[2 * a2];
  do
  {
    v7 = LoadFromNARC_2(72, *v6, *(uint *)(*v4 + 12));
    Function_20a7248(v7, &v9);
    Function_20198c0(v4[121], (v5 + 6) & 0xFF, v9 + 12, 0, 0, 0x20u, 0x18u);
    Function_201c3c0(v4[121], v5 + 6);
    result = free(v7);
    ++v5;
    ++v6;
  }
  while ( v5 < 2 );
  return result;
}

//----- (022217A4) --------------------------------------------------------
int __fastcall Function_22217a4(int *a1)
{
  int *v1;
  int v2;
  int v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int result;
  ushort *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  ushort *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  ushort *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  ushort *v26;
  int v27;
  int v28;
  int v29;

  v1 = a1;
  v2 = *(uchar *)(*a1 + 17);
  v3 = (int)&a1[20 * v2 + 1];
  if ( Function_22219ac(a1, v2) == 1 )
  {
    v4 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x50u);
    v5 = ((int (__fastcall *)(uint, uint))dword_223E258[0])(*(uint *)(*v1 + 8), *(uint *)(*v1 + 40));
    v6 = ((int (__fastcall *)(uint, int))dword_223E120[0])(*(uint *)(*v1 + 8), v5);
    Function_200ba74(v1[2027], 0, v6);
    Function_200c388((uint *)v1[2027], v1[2028], (int)v4);
    Function_20237bc_FreeMsg((int)v4, v7);
    result = 0;
  }
  else if ( *(ushort *)(v3 + 16) )
  {
    v13 = *(uchar *)(*v1 + *(uchar *)(*v1 + 17) + 44);
    if ( *(uchar *)(*v1 + 20) != v13 && *(uchar *)(*v1 + 21) != v13 )
    {
      if ( Function_222194c(v1) == 1 )
      {
        Function_200b1b8_CallMsgDecrypt((ushort **)v1[2026], 0x4Fu, (ushort *)v1[2028]);
        result = 0;
      }
      else
      {
        v18 = *v1;
        v19 = *(uchar *)(*v1 + 18);
        if ( v19 == 6 || (v20 = *(uchar *)(v18 + 17), v19 != *(uchar *)(v18 + v20 + 44)) )
        {
          if ( *(ushort *)(v18 + 36) )
          {
            v25 = 20 * *((uchar *)v1 + 8310);
            v26 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x4Eu);
            v27 = v1[v25 + 1];
            Function_2076b10_Dummy();
            Function_200b5cc((int *)v1[2027], 0, v28);
            Function_200c388((uint *)v1[2027], v1[2028], (int)v26);
            Function_20237bc_FreeMsg((int)v26, v29);
            result = 0;
          }
          else
          {
            result = 1;
          }
        }
        else
        {
          v21 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x5Du);
          v22 = v1[20 * v20 + 1];
          Function_2076b10_Dummy();
          Function_200b5cc((int *)v1[2027], 0, v23);
          Function_200c388((uint *)v1[2027], v1[2028], (int)v21);
          Function_20237bc_FreeMsg((int)v21, v24);
          result = 0;
        }
      }
    }
    else
    {
      v14 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x4Cu);
      v15 = *(uint *)v3;
      Function_2076b10_Dummy();
      Function_200b5cc((int *)v1[2027], 0, v16);
      Function_200c388((uint *)v1[2027], v1[2028], (int)v14);
      Function_20237bc_FreeMsg((int)v14, v17);
      result = 0;
    }
  }
  else
  {
    v9 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x4Du);
    v10 = *(uint *)v3;
    Function_2076b10_Dummy();
    Function_200b5cc((int *)v1[2027], 0, v11);
    Function_200c388((uint *)v1[2027], v1[2028], (int)v9);
    Function_20237bc_FreeMsg((int)v9, v12);
    result = 0;
  }
  return result;
}

//----- (0222194C) --------------------------------------------------------
BOOL __fastcall Function_222194c(int a1)
{
  return (uchar)(*(uchar *)(a1 + 80 * *(uchar *)(*(uint *)a1 + 17) + 27) & 0x80) != 0;
}

//----- (0222196C) --------------------------------------------------------
BOOL __fastcall Function_222196c(int a1)
{
  int v1;

  v1 = ((int (__fastcall *)(uint))dword_223DF0C)(*(uint *)(*(uint *)a1 + 8));
  return v1 != 74 && v1 != 75 && v1 & 0x12;
}

//----- (0222198C) --------------------------------------------------------
BOOL __fastcall Function_222198c(int a1)
{
  int v1;

  v1 = ((int (__fastcall *)(uint))dword_223DF0C)(*(uint *)(*(uint *)a1 + 8));
  return v1 != 74 && v1 != 75 && v1 & 8;
}

//----- (022219AC) --------------------------------------------------------
int __fastcall Function_22219ac(int a1, char a2)
{
  int v2;
  char v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( Function_222198c(a1) != 1 )
    return 0;
  if ( *(uchar *)(v2 + 8335) != 2 )
  {
    result = 1;
    if ( !(v3 & 1) )
      return result;
    return 0;
  }
  result = 1;
  if ( !(v3 & 1) )
    return 0;
  return result;
}

//----- (022219DC) --------------------------------------------------------
int __fastcall Function_22219dc(int *a1)
{
  int v1;
  int v2;
  int v3;

  v1 = *a1;
  v2 = *(uchar *)(*a1 + 52);
  if ( v2 == 4 )
    v3 = *(ushort *)(v1 + 36);
  else
    v3 = LOWORD(a1[20 * *(uchar *)(v1 + 17) + 13 + 2 * v2]);
  return Function_207d28c(v3);
}

//----- (02221A04) --------------------------------------------------------
int __fastcall Function_2221a04(int a1)
{
  int v1;

  v1 = a1;
  Function_200d3f4(*(uint **)(a1 + 8224), 0);
  Function_201ad10(*(uint *)(v1 + 8304) + 160);
  Function_201ad10(*(uint *)(v1 + 8304) + 96);
  return Function_201ad10(*(uint *)(v1 + 8304) + 112);
}

//----- (02221A3C) --------------------------------------------------------
int __fastcall Function_2221a3c(int a1)
{
  int v1;

  v1 = a1;
  Function_2221630(a1);
  return Function_201c3c0(*(uint *)(v1 + 484), 7);
}

//----- (02221A54) --------------------------------------------------------
int __fastcall Function_2221a54(int a1, uint a2, short a3, uint a4)
{
  uint v4;
  int v5;
  short v6;
  uint v7;
  int v8;
  int v9;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  if ( a2 != 65 && a2 != 67 && a2 != 66 )
  {
    v8 = ((int (*)(void))dword_223E1AC)();
    GiveItem(v8, v4, 1u, v7);
  }
  v9 = ((int (__fastcall *)(int))dword_223E1B0[0])(v5);
  return Function_207da1c(v9, v4, v6);
}

//----- (02221A88) --------------------------------------------------------
int __fastcall Function_2221a88(int a1)
{
  int v1;
  uchar *v2;
  uint v3;
  int v4;

  v1 = a1;
  v2 = (uchar *)dword_2228EA0;
  v3 = 0;
  v4 = a1 + 8272;
  do
  {
    Function_201a8d4(*(uint **)(v1 + 484), v4, v2);
    ++v3;
    v2 += 8;
    v4 += 16;
  }
  while ( v3 < 2 );
  return Function_2221ac4(v1, *(uchar *)(v1 + 8314));
}

//----- (02221AC4) --------------------------------------------------------
uint __fastcall Function_2221ac4(int a1)
{
  int *v1;
  int v2;
  uint v3;
  uint result;

  v2 = a1;
  switch ( (uchar)a1 )
  {
    case 0:
      v1 = dword_2228F54;
      *(uchar *)(a1 + 8308) = 6;
      break;
    case 1:
      v1 = dword_2228EDC;
      *(uchar *)(a1 + 8308) = 4;
      break;
    case 2:
      v1 = dword_22290FC;
      *(uchar *)(a1 + 8308) = 35;
      break;
    case 3:
      v1 = dword_2228FBC;
      *(uchar *)(a1 + 8308) = 11;
      break;
    case 4:
      v1 = dword_2229074;
      *(uchar *)(a1 + 8308) = 17;
      break;
    case 5:
      v1 = dword_2228EFC;
      *(uchar *)(a1 + 8308) = 5;
      break;
    case 6:
    case 8:
      v1 = dword_2228F24;
      *(uchar *)(a1 + 8308) = 6;
      break;
    case 7:
      v1 = dword_2229014;
      *(uchar *)(a1 + 8308) = 12;
      break;
    case 9:
      v1 = dword_2228F84;
      *(uchar *)(a1 + 8308) = 7;
      break;
    default:
      break;
  }
  v3 = 0;
  *(uint *)(a1 + 8304) = Function_201a778(*(uint *)(*(uint *)a1 + 12), *(uchar *)(a1 + 8308));
  result = *(uchar *)(v2 + 8308);
  if ( *(uchar *)(v2 + 8308) )
  {
    do
    {
      Function_201a8d4(*(uint **)(v2 + 484), *(uint *)(v2 + 8304) + 16 * v3, (uchar *)&v1[2 * v3]);
      v3 = (v3 + 1) & 0xFF;
      result = *(uchar *)(v2 + 8308);
    }
    while ( v3 < result );
  }
  return result;
}

//----- (02221BB0) --------------------------------------------------------
uint __fastcall Function_2221bb0(int a1)
{
  return Function_201a928(*(uint *)(a1 + 8304), *(uchar *)(a1 + 8308));
}

//----- (02221BC8) --------------------------------------------------------
uint __fastcall Function_2221bc8(int a1)
{
  int v1;
  uint v2;
  int v3;
  uint result;

  v1 = a1;
  Function_201a928(*(uint *)(a1 + 8304), *(uchar *)(a1 + 8308));
  v2 = 0;
  v3 = v1 + 8272;
  do
  {
    result = Function_201a8fc(v3);
    ++v2;
    v3 += 16;
  }
  while ( v2 < 2 );
  return result;
}

//----- (02221BF8) --------------------------------------------------------
int __fastcall Function_2221bf8(int result, char a2)
{
  switch ( a2 )
  {
    case 0:
      result = Function_222339c();
      break;
    case 1:
      result = Function_22234c8(result, a2);
      break;
    case 2:
      result = Function_22237f8();
      break;
    case 3:
      result = Function_22236b8();
      break;
    case 4:
      result = Function_2223a10();
      break;
    case 5:
      result = Function_2223e68();
      break;
    case 6:
    case 8:
      result = Function_2223b74();
      break;
    case 7:
      result = Function_2223c9c();
      break;
    case 9:
      result = Function_2223f7c();
      break;
    default:
      return result;
  }
  return result;
}

//----- (02221C54) --------------------------------------------------------
int __fastcall Function_2221c54(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  ushort *v14;
  int v15;
  ushort *v16;
  int v17;
  int v19;
  ushort *v20;
  int v21;
  int v22;

  v4 = a1;
  v5 = a4;
  v6 = a1[2076];
  v7 = 16 * a2;
  v8 = (int)(a1 + 1);
  v9 = 80 * a4;
  v22 = (int)&a1[20 * a4 + 1];
  v19 = a3;
  v21 = Function_2023790(12, *(uint *)(*a1 + 12));
  v20 = Function_200b1ec_CallMsgDecrypt((ushort **)v4[2026], dword_2228EC4[v5]);
  v10 = *(uint *)(v8 + v9);
  Function_2076b10_Dummy();
  Function_200b5cc((int *)v4[2027], 0, v11);
  Function_200c388((uint *)v4[2027], v21, (int)v20);
  if ( v19 )
    Function_201d78c(v6 + v7, v19);
  else
    Function_201d78c(v6 + v7, 0);
  Function_20237bc_FreeMsg((int)v20, v12);
  Function_20237bc_FreeMsg(v21, v13);
  if ( !(*(uchar *)(v22 + 22) & 0x80) && !(*(uchar *)(v22 + 23) & 0x80) )
  {
    if ( *(uchar *)(v22 + 23) & 7 )
    {
      if ( (*(uchar *)(v22 + 23) & 7) == 1 )
      {
        v16 = Function_200b1ec_CallMsgDecrypt((ushort **)v4[2026], 0x11u);
        Function_201c294(v6 + v7);
        Function_2002d7c(0, (int)v16, 0);
        Function_201d78c(v6 + v7, 0);
        Function_20237bc_FreeMsg((int)v16, v17);
      }
    }
    else
    {
      v14 = Function_200b1ec_CallMsgDecrypt((ushort **)v4[2026], 0x10u);
      Function_201c294(v6 + v7);
      Function_2002d7c(0, (int)v14, 0);
      Function_201d78c(v6 + v7, 0);
      Function_20237bc_FreeMsg((int)v14, v15);
    }
  }
  return Function_201a9a4(v6 + v7);
}

//----- (02221E08) --------------------------------------------------------
int __fastcall Function_2221e08(int a1, int a2, int a3, short a4, uchar a5)
{
  int v5;
  int v6;

  v5 = a1;
  v6 = 16 * a2;
  Function_200c648(
    *(uint *)(a1 + 8100),
    1,
    *(uchar *)(a1 + 80 * a3 + 26) & 0x7F,
    3,
    0,
    *(uint *)(a1 + 8304) + 16 * a2,
    a4 + 8,
    a5);
  return Function_201a9a4(*(uint *)(v5 + 8304) + v6);
}

//----- (02221E50) --------------------------------------------------------
int __fastcall Function_2221e50(int a1, int a2, int a3, ushort a4, uchar a5)
{
  int v5;
  ushort v6;
  int v7;
  int v8;

  v5 = a1;
  v6 = a4;
  v7 = a1 + 4 + 80 * a3;
  v8 = 16 * a2;
  Function_200c5bc(
    *(uint *)(a1 + 8100),
    *(ushort *)(v7 + 16),
    3,
    1,
    *(uint *)(a1 + 8304) + 16 * a2,
    a4,
    a5);
  Function_200c578(*(uint *)(v5 + 8100), 0, *(uint *)(v5 + 8304) + v8, v6 + 24, a5);
  Function_200c5bc(
    *(uint *)(v5 + 8100),
    *(ushort *)(v7 + 18),
    3,
    0,
    *(uint *)(v5 + 8304) + v8,
    v6 + 32,
    a5);
  return Function_201a9a4(*(uint *)(v5 + 8304) + v8);
}

//----- (02221ED0) --------------------------------------------------------
int __fastcall Function_2221ed0(int a1, int a2, int a3, int a4, uchar a5)
{
  int v5;
  int v6;
  char v7;
  int v9;
  int v10;
  ushort v11;

  v5 = a1;
  v9 = a2;
  v10 = a4;
  v6 = a1 + 4 + 80 * a3;
  v7 = 1;
  v11 = Function_208c0bc(*(ushort *)(v6 + 16), *(ushort *)(v6 + 18), 48);
  switch ( (uchar)Function_208c104(*(ushort *)(v6 + 16), *(ushort *)(v6 + 18), 48) )
  {
    case 0u:
      return Function_201a9a4(*(uint *)(v5 + 8304) + 16 * v9);
    case 1u:
      v7 = 5;
      break;
    case 2u:
      v7 = 3;
      break;
    case 3u:
    case 4u:
      break;
  }
  Function_201ae78(*(uint *)(v5 + 8304) + 16 * v9, v7 + 1, v10, (a5 + 1) & 0xFFFF, v11, 1u);
  Function_201ae78(*(uint *)(v5 + 8304) + 16 * v9, v7, v10, (a5 + 2) & 0xFFFF, v11, 2u);
  Function_201ae78(*(uint *)(v5 + 8304) + 16 * v9, v7 + 1, v10, (a5 + 4) & 0xFFFF, v11, 1u);
  return Function_201a9a4(*(uint *)(v5 + 8304) + 16 * v9);
}

//----- (02221FA8) --------------------------------------------------------
int __fastcall Function_2221fa8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2023790(16, *(uint *)(*(uint *)a1 + 12));
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 8104), 8u);
  Function_200b6a0(*(uint *)(v3 + 8108), 0, *(ushort *)(v3 + 80 * v5 + 28));
  Function_200c388(*(uint **)(v3 + 8108), v6, (int)v7);
  v4 *= 16;
  Function_201d78c(*(uint *)(v3 + 8304) + v4, 0);
  Function_20237bc_FreeMsg((int)v7, v8);
  Function_20237bc_FreeMsg(v6, v9);
  return Function_201a9a4(*(uint *)(v3 + 8304) + v4);
}

//----- (02222030) --------------------------------------------------------
int __fastcall Function_2222030(ushort ***a1, int a2, int a3)
{
  ushort ***v3;
  int v4;
  int v5;
  ushort *v6;
  ushort *v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = (int)&a1[20 * a3 + 1];
  if ( *(ushort *)(v5 + 26) )
  {
    v6 = (ushort *)Function_2023790(18, (uint)(*a1)[3]);
    v7 = Function_200b1ec_CallMsgDecrypt(v3[2026], 9u);
    Function_200b70c((int)v3[2027], 0, *(ushort *)(v5 + 26));
    Function_200c388((uint *)v3[2027], (int)v6, (int)v7);
    Function_20237bc_FreeMsg((int)v7, v8);
  }
  else
  {
    v6 = Function_200b1ec_CallMsgDecrypt(a1[2026], 0x14u);
  }
  Function_201d78c((int)&v3[2076][4 * v4], 0);
  Function_20237bc_FreeMsg((int)v6, v9);
  return Function_201a9a4((int)&v3[2076][4 * v4]);
}

//----- (022220CC) --------------------------------------------------------
int __fastcall Function_22220cc(uint *a1, uint a2, int a3, uint a4, ushort a5)
{
  uint *v5;
  uint v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  ushort *v14;

  v5 = a1;
  v6 = a2;
  v7 = a1[2076];
  v8 = a4;
  v9 = 16 * a3;
  v10 = Function_2023790(16, *(uint *)(*a1 + 12));
  v14 = Function_200b1ec_CallMsgDecrypt((ushort **)v5[2026], v8);
  Function_200b630(v5[2027], 0, v6);
  Function_200c388((uint *)v5[2027], v10, (int)v14);
  if ( a5 == 2 )
  {
    Function_201c294(v7 + v9);
    Function_2002d7c(a5, v10, 0);
  }
  Function_201d78c(v7 + v9, a5);
  Function_20237bc_FreeMsg((int)v14, v11);
  Function_20237bc_FreeMsg(v10, v12);
  return Function_201a9a4(v7 + v9);
}

//----- (02222170) --------------------------------------------------------
int __fastcall Function_2222170(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0xEu);
  v3 *= 16;
  Function_201d78c(*(uint *)(v2 + 8304) + v3, 0);
  Function_20237bc_FreeMsg((int)v4, v5);
  return Function_201a9a4(*(uint *)(v2 + 8304) + v3);
}

//----- (022221C8) --------------------------------------------------------
int __fastcall Function_22221c8(int a1, uint a2)
{
  int v2;
  uint v3;
  ushort *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  Function_200e060(a1 + 8272, 1, 1, 0xEu);
  Function_201ada4_ClearTextBox(v2 + 8272, 15);
  v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 8104), v3);
  Function_201d78c(v2 + 8272, 1);
  Function_20237bc_FreeMsg((int)v4, v5);
  return Function_201a9a4(v2 + 8272);
}

//----- (0222222C) --------------------------------------------------------
int __fastcall Function_222222c(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v3 = 16 * a2;
  v4 = *(uint *)(a1 + 8304);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), a3);
  Function_2002d7c(2, (int)v5, 0);
  Function_201c294(v4 + v3);
  Function_201d78c(v4 + v3, 2);
  Function_20237bc_FreeMsg((int)v5, v6);
  return Function_201a9a4(v4 + v3);
}

//----- (02222290) --------------------------------------------------------
int __fastcall Function_2222290(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  ushort *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v18;
  ushort *v19;

  v2 = a1;
  v3 = a1 + 4 + 80 * a2;
  v4 = 22 * *(uchar *)(a1 + 8309) & 0xFFFF;
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x17u);
  Function_201d78c(*(uint *)(v2 + 8304) + 304, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 8104), 0x18u);
  v8 = Function_2023790(8, *(uint *)(*(uint *)v2 + 12));
  Function_200b60c(*(uint *)(v2 + 8108), 0, *(uchar *)(v3 + 22) & 0x7F, 3, 0, 1);
  Function_200c388(*(uint **)(v2 + 8108), v8, (int)v7);
  v9 = 16 * (v4 + 11);
  Function_201d78c(*(uint *)(v2 + 8304) + v9, 0);
  Function_20237bc_FreeMsg((int)v7, v10);
  Function_20237bc_FreeMsg(v8, v11);
  v12 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 8104), 0x19u);
  Function_201d78c(*(uint *)(v2 + 8304) + 320, 0);
  Function_20237bc_FreeMsg((int)v12, v13);
  v19 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 8104), 0x1Au);
  v18 = Function_2023790(14, *(uint *)(*(uint *)v2 + 12));
  if ( (*(uchar *)(v3 + 22) & 0x7Fu) >= 0x64 )
    Function_200b60c(*(uint *)(v2 + 8108), 0, 0, 6, 1, 1);
  else
    Function_200b60c(*(uint *)(v2 + 8108), 0, *(uint *)(v3 + 36) - *(uint *)(v3 + 28), 6, 1, 1);
  Function_200c388(*(uint **)(v2 + 8108), v18, (int)v19);
  v14 = 16 * (v4 + 12);
  Function_201c294(*(uint *)(v2 + 8304) + v14);
  Function_2002d7c(0, v18, 0);
  Function_201d78c(*(uint *)(v2 + 8304) + v14, 0);
  Function_20237bc_FreeMsg((int)v19, v15);
  Function_20237bc_FreeMsg(v18, v16);
  Function_201a9a4(*(uint *)(v2 + 8304) + 304);
  Function_201a9a4(*(uint *)(v2 + 8304) + v9);
  Function_201a9a4(*(uint *)(v2 + 8304) + 320);
  return Function_201a9a4(*(uint *)(v2 + 8304) + v14);
}

//----- (02222464) --------------------------------------------------------
int __fastcall Function_2222464(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  v4 = 22 * *(uchar *)(a1 + 8309) & 0xFFFF;
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x20u);
  Function_201d78c(*(uint *)(v3 + 8304) + 224, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 8104), 0x21u);
  v8 = Function_2023790(8, *(uint *)(*(uint *)v3 + 12));
  Function_200b60c(*(uint *)(v3 + 8108), 0, *(ushort *)(v3 + 80 * v2 + 10), 3, 0, 1);
  Function_200c388(*(uint **)(v3 + 8108), v8, (int)v7);
  Function_2002d7c(0, v8, 0);
  v9 = 16 * (v4 + 5);
  Function_201c294(*(uint *)(v3 + 8304) + v9);
  Function_201d78c(*(uint *)(v3 + 8304) + v9, 0);
  Function_20237bc_FreeMsg((int)v7, v10);
  Function_20237bc_FreeMsg(v8, v11);
  Function_201a9a4(*(uint *)(v3 + 8304) + 224);
  return Function_201a9a4(*(uint *)(v3 + 8304) + v9);
}

//----- (02222560) --------------------------------------------------------
int __fastcall Function_2222560(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  v4 = 22 * *(uchar *)(a1 + 8309) & 0xFFFF;
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x22u);
  Function_201d78c(*(uint *)(v3 + 8304) + 240, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 8104), 0x23u);
  v8 = Function_2023790(8, *(uint *)(*(uint *)v3 + 12));
  Function_200b60c(*(uint *)(v3 + 8108), 0, *(ushort *)(v3 + 80 * v2 + 12), 3, 0, 1);
  Function_200c388(*(uint **)(v3 + 8108), v8, (int)v7);
  Function_2002d7c(0, v8, 0);
  v9 = 16 * (v4 + 6);
  Function_201c294(*(uint *)(v3 + 8304) + v9);
  Function_201d78c(*(uint *)(v3 + 8304) + v9, 0);
  Function_20237bc_FreeMsg((int)v7, v10);
  Function_20237bc_FreeMsg(v8, v11);
  Function_201a9a4(*(uint *)(v3 + 8304) + 240);
  return Function_201a9a4(*(uint *)(v3 + 8304) + v9);
}

//----- (0222265C) --------------------------------------------------------
int __fastcall Function_222265c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  v4 = 22 * *(uchar *)(a1 + 8309) & 0xFFFF;
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x28u);
  Function_201d78c(*(uint *)(v3 + 8304) + 256, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 8104), 0x29u);
  v8 = Function_2023790(8, *(uint *)(*(uint *)v3 + 12));
  Function_200b60c(*(uint *)(v3 + 8108), 0, *(ushort *)(v3 + 80 * v2 + 14), 3, 0, 1);
  Function_200c388(*(uint **)(v3 + 8108), v8, (int)v7);
  Function_2002d7c(0, v8, 0);
  v9 = 16 * (v4 + 7);
  Function_201c294(*(uint *)(v3 + 8304) + v9);
  Function_201d78c(*(uint *)(v3 + 8304) + v9, 0);
  Function_20237bc_FreeMsg((int)v7, v10);
  Function_20237bc_FreeMsg(v8, v11);
  Function_201a9a4(*(uint *)(v3 + 8304) + 256);
  return Function_201a9a4(*(uint *)(v3 + 8304) + v9);
}

//----- (0222275C) --------------------------------------------------------
int __fastcall Function_222275c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  v4 = 22 * *(uchar *)(a1 + 8309) & 0xFFFF;
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x24u);
  Function_201d78c(*(uint *)(v3 + 8304) + 272, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 8104), 0x25u);
  v8 = Function_2023790(8, *(uint *)(*(uint *)v3 + 12));
  Function_200b60c(*(uint *)(v3 + 8108), 0, *(ushort *)(v3 + 80 * v2 + 16), 3, 0, 1);
  Function_200c388(*(uint **)(v3 + 8108), v8, (int)v7);
  Function_2002d7c(0, v8, 0);
  v9 = 16 * (v4 + 8);
  Function_201c294(*(uint *)(v3 + 8304) + v9);
  Function_201d78c(*(uint *)(v3 + 8304) + v9, 0);
  Function_20237bc_FreeMsg((int)v7, v10);
  Function_20237bc_FreeMsg(v8, v11);
  Function_201a9a4(*(uint *)(v3 + 8304) + 272);
  return Function_201a9a4(*(uint *)(v3 + 8304) + v9);
}

//----- (0222285C) --------------------------------------------------------
int __fastcall Function_222285c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  v4 = 22 * *(uchar *)(a1 + 8309) & 0xFFFF;
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x26u);
  Function_201d78c(*(uint *)(v3 + 8304) + 288, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 8104), 0x27u);
  v8 = Function_2023790(8, *(uint *)(*(uint *)v3 + 12));
  Function_200b60c(*(uint *)(v3 + 8108), 0, *(ushort *)(v3 + 80 * v2 + 18), 3, 0, 1);
  Function_200c388(*(uint **)(v3 + 8108), v8, (int)v7);
  Function_2002d7c(0, v8, 0);
  v9 = 16 * (v4 + 9);
  Function_201c294(*(uint *)(v3 + 8304) + v9);
  Function_201d78c(*(uint *)(v3 + 8304) + v9, 0);
  Function_20237bc_FreeMsg((int)v7, v10);
  Function_20237bc_FreeMsg(v8, v11);
  Function_201a9a4(*(uint *)(v3 + 8304) + 288);
  return Function_201a9a4(*(uint *)(v3 + 8304) + v9);
}

//----- (0222295C) --------------------------------------------------------
int __fastcall Function_222295c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  ushort *v14;
  int v15;
  int v16;
  int v17;

  v2 = a1;
  v3 = a1 + 4 + 80 * a2;
  v4 = 22 * *(uchar *)(a1 + 8309) & 0xFFFF;
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x1Cu);
  Function_201d78c(*(uint *)(v2 + 8304) + 208, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 8104), 0x1Fu);
  Function_2002d7c(0, (int)v7, 0);
  Function_201c294(*(uint *)(v2 + 8304) + 64);
  v8 = 16 * (v4 + 4);
  Function_201d78c(*(uint *)(v2 + 8304) + v8, 0);
  Function_20237bc_FreeMsg((int)v7, v9);
  v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 8104), 0x1Du);
  v11 = Function_2023790(8, *(uint *)(*(uint *)v2 + 12));
  Function_200b60c(*(uint *)(v2 + 8108), 0, *(ushort *)(v3 + 16), 3, 0, 1);
  Function_200c388(*(uint **)(v2 + 8108), v11, (int)v10);
  Function_2002d7c(0, v11, 0);
  Function_201d78c(*(uint *)(v2 + 8304) + v8, 0);
  Function_20237bc_FreeMsg((int)v10, v12);
  Function_20237bc_FreeMsg(v11, v13);
  v14 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 8104), 0x1Eu);
  v15 = Function_2023790(8, *(uint *)(*(uint *)v2 + 12));
  Function_200b60c(*(uint *)(v2 + 8108), 0, *(ushort *)(v3 + 18), 3, 0, 1);
  Function_200c388(*(uint **)(v2 + 8108), v15, (int)v14);
  Function_201d78c(*(uint *)(v2 + 8304) + v8, 0);
  Function_20237bc_FreeMsg((int)v14, v16);
  Function_20237bc_FreeMsg(v15, v17);
  Function_201a9a4(*(uint *)(v2 + 8304) + 208);
  return Function_201a9a4(*(uint *)(v2 + 8304) + v8);
}

//----- (02222AF4) --------------------------------------------------------
int __fastcall Function_2222af4(uchar *a1, int a2)
{
  uchar *v2;
  int v3;
  int v4;
  ushort **v5;
  ushort *v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  v4 = 22 * a1[8309];
  v5 = (ushort **)LoadFromMsgNARC(1, 26, 612, *(uint *)(*(uint *)a1 + 12));
  v6 = Function_200b1ec_CallMsgDecrypt(v5, *(ushort *)&v2[80 * v3 + 28]);
  v7 = 16 * (v4 + 2);
  Function_201d78c(*((uint *)v2 + 2076) + v7, 0);
  Function_20237bc_FreeMsg((int)v6, v8);
  Function_200b190((ushort *)v5);
  return Function_201a9a4(*((uint *)v2 + 2076) + v7);
}

//----- (02222B6C) --------------------------------------------------------
int __fastcall Function_2222b6c(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;

  v2 = 16 * a2;
  v3 = *(uint *)(a1 + 8304);
  v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x33u);
  Function_201d78c(v3 + v2, 0);
  Function_20237bc_FreeMsg((int)v4, v5);
  return Function_201a9a4(v3 + v2);
}

//----- (02222BB4) --------------------------------------------------------
int __fastcall Function_2222bb4(int a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  ushort *v8;
  int v9;
  int v11;

  v11 = a3;
  v3 = (int *)a1;
  v4 = 16 * a2;
  v5 = *(uint *)(a1 + 8304);
  if ( a3 )
  {
    v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x34u);
    v6 = (ushort *)Function_2023790(8, *(uint *)(*v3 + 12));
    Function_200b60c(v3[2027], 0, v11, 3, 0, 1);
    Function_200c388((uint *)v3[2027], (int)v6, (int)v8);
    Function_2002d7c(0, (int)v6, 0);
    Function_201c294(v5 + v4);
    Function_201d78c(v5 + v4, 0);
    Function_20237bc_FreeMsg((int)v8, v9);
  }
  else
  {
    v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x32u);
    Function_2002d7c(0, (int)v6, 0);
    Function_201c294(v5 + v4);
    Function_201d78c(v5 + v4, 0);
  }
  Function_20237bc_FreeMsg((int)v6, v7);
  return Function_201a9a4(v5 + v4);
}

//----- (02222C9C) --------------------------------------------------------
int __fastcall Function_2222c9c(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;

  v2 = 16 * a2;
  v3 = *(uint *)(a1 + 8304);
  v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x30u);
  Function_201d78c(v3 + v2, 0);
  Function_20237bc_FreeMsg((int)v4, v5);
  return Function_201a9a4(v3 + v2);
}

//----- (02222CE4) --------------------------------------------------------
int __fastcall Function_2222ce4(int a1, int a2, uint a3)
{
  int *v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  ushort *v8;
  int v9;
  int v11;

  v11 = a3;
  v3 = (int *)a1;
  v4 = 16 * a2;
  v5 = *(uint *)(a1 + 8304);
  if ( a3 > 1 )
  {
    v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x31u);
    v6 = (ushort *)Function_2023790(8, *(uint *)(*v3 + 12));
    Function_200b60c(v3[2027], 0, v11, 3, 0, 1);
    Function_200c388((uint *)v3[2027], (int)v6, (int)v8);
    Function_2002d7c(0, (int)v6, 0);
    Function_201c294(v5 + v4);
    Function_201d78c(v5 + v4, 0);
    Function_20237bc_FreeMsg((int)v8, v9);
  }
  else
  {
    v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x32u);
    Function_2002d7c(0, (int)v6, 0);
    Function_201c294(v5 + v4);
    Function_201d78c(v5 + v4, 0);
  }
  Function_20237bc_FreeMsg((int)v6, v7);
  return Function_201a9a4(v5 + v4);
}

//----- (02222DCC) --------------------------------------------------------
int __fastcall Function_2222dcc(uint *a1, int a2, uint a3)
{
  uint v3;
  int v4;
  int v5;
  ushort **v6;
  ushort *v7;
  int v8;

  v3 = a3;
  v4 = a1[2076];
  v5 = 16 * a2;
  v6 = (ushort **)LoadFromMsgNARC(1, 26, 646, *(uint *)(*a1 + 12));
  v7 = Function_200b1ec_CallMsgDecrypt(v6, v3);
  Function_201d78c(v4 + v5, 0);
  Function_20237bc_FreeMsg((int)v7, v8);
  Function_200b190((ushort *)v6);
  return Function_201a9a4(v4 + v5);
}

//----- (02222E2C) --------------------------------------------------------
int __fastcall Function_2222e2c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  ushort **v8;
  ushort *v9;
  int v10;

  v3 = a1;
  v4 = 16 * a2;
  v5 = *(uint *)(a1 + 8304);
  v6 = LoadMoveData(a3, 0xAu);
  v7 = Function_209577c(v6);
  v8 = (ushort **)LoadFromMsgNARC(0, 26, 210, *(uint *)(*(uint *)v3 + 12));
  v9 = Function_200b1ec_CallMsgDecrypt(v8, v7);
  Function_201d78c(v5 + v4, 0);
  Function_20237bc_FreeMsg((int)v9, v10);
  Function_200b190((ushort *)v8);
  return Function_201a9a4(v5 + v4);
}

//----- (02222E94) --------------------------------------------------------
int __fastcall Function_2222e94(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;

  v2 = 16 * a2;
  v3 = *(uint *)(a1 + 8304);
  v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x35u);
  Function_2002d7c(0, (int)v4, 0);
  Function_201c294(v3 + v2);
  Function_201d78c(v3 + v2, 0);
  Function_20237bc_FreeMsg((int)v4, v5);
  return Function_201a9a4(v3 + v2);
}

//----- (02222EF8) --------------------------------------------------------
int __fastcall Function_2222ef8(int a1, int a2, int a3)
{
  ushort *v3;
  int v4;
  int v5;
  int v6;

  v4 = 16 * a2;
  v5 = *(uint *)(a1 + 8304);
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x38u);
    }
    else if ( a3 == 2 )
    {
      v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x37u);
    }
  }
  else
  {
    v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x36u);
  }
  Function_2002eec(0, (int)v3, 0, 0x38u);
  Function_201d78c(v5 + v4, 0);
  Function_20237bc_FreeMsg((int)v3, v6);
  return Function_201a9a4(v5 + v4);
}

//----- (02222F74) --------------------------------------------------------
int __fastcall Function_2222f74(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  ushort *v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  ushort *v15;
  int v16;
  int v17;
  int v18;

  v4 = a1;
  v5 = 16 * a2;
  v6 = *(uint *)(a1 + 8304);
  v7 = a3;
  v8 = a4;
  v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x2Eu);
  Function_2002d7c(0, (int)v9, 0);
  Function_201c294(v6 + v5);
  Function_201d78c(v6 + v5, 0);
  Function_20237bc_FreeMsg((int)v9, v10);
  v11 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 8104), 0x2Cu);
  v12 = Function_2023790(6, *(uint *)(*(uint *)v4 + 12));
  Function_200b60c(*(uint *)(v4 + 8108), 0, v7, 3, 0, 1);
  Function_200c388(*(uint **)(v4 + 8108), v12, (int)v11);
  Function_2002d7c(0, v12, 0);
  Function_201d78c(v6 + v5, 0);
  Function_20237bc_FreeMsg((int)v11, v13);
  Function_20237bc_FreeMsg(v12, v14);
  v15 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 8104), 0x2Du);
  v16 = Function_2023790(6, *(uint *)(*(uint *)v4 + 12));
  Function_200b60c(*(uint *)(v4 + 8108), 0, v8, 3, 0, 1);
  Function_200c388(*(uint **)(v4 + 8108), v16, (int)v15);
  Function_201d78c(v6 + v5, 0);
  Function_20237bc_FreeMsg((int)v15, v17);
  Function_20237bc_FreeMsg(v16, v18);
  return Function_201a9a4(v6 + v5);
}

//----- (022230A8) --------------------------------------------------------
int __fastcall Function_22230a8(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;
  int v6;

  v2 = 16 * a2;
  v3 = *(uint *)(a1 + 8304);
  if ( *(uchar *)(*(uint *)a1 + 52) == 4 )
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x3Bu);
  else
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 8104), 0x3Au);
  v5 = (int)v4;
  Function_2002d7c(2, (int)v4, 0);
  Function_201d78c(v3 + v2, 2);
  Function_20237bc_FreeMsg(v5, v6);
  return Function_201a9a4(v3 + v2);
}

//----- (02223118) --------------------------------------------------------
int __fastcall Function_2223118(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;

  v1 = a1;
  if ( *(uchar *)(a1 + 8314) == 7 )
    v2 = *(uint *)(a1 + 8304) + 128;
  else
    v2 = *(uint *)(a1 + 8304) + 80;
  Function_201ada4_ClearTextBox(v2, 0);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 8104), 0x3Cu);
  Function_201d78c(v2, 0);
  Function_20237bc_FreeMsg((int)v3, v4);
  return Function_201a9a4(v2);
}

//----- (0222317C) --------------------------------------------------------
int __fastcall Function_222317c(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  ushort *v10;
  int v11;
  ushort *v12;
  int v13;
  ushort *v14;
  int v15;
  int v16;

  v3 = a1;
  v4 = a2;
  v5 = a1[2076];
  v6 = 16 * a3;
  v7 = Function_2023790(6, *(uint *)(*a1 + 12));
  v8 = Function_200b1ec_CallMsgDecrypt((ushort **)v3[2026], 0x2Bu);
  Function_201d78c(v5 + v6, 0);
  Function_20237bc_FreeMsg((int)v8, v9);
  v10 = Function_200b1ec_CallMsgDecrypt((ushort **)v3[2026], 0x2Eu);
  Function_2002d7c(0, (int)v10, 0);
  Function_201d78c(v5 + v6, 0);
  Function_20237bc_FreeMsg((int)v10, v11);
  v12 = Function_200b1ec_CallMsgDecrypt((ushort **)v3[2026], 0x2Du);
  Function_200b60c(v3[2027], 0, *(uchar *)(v4 + 3), 2, 0, 1);
  Function_200c388((uint *)v3[2027], v7, (int)v12);
  Function_201d78c(v5 + v6, 0);
  Function_20237bc_FreeMsg((int)v12, v13);
  v14 = Function_200b1ec_CallMsgDecrypt((ushort **)v3[2026], 0x2Cu);
  Function_200b60c(v3[2027], 0, *(uchar *)(v4 + 2), 2, 0, 1);
  Function_200c388((uint *)v3[2027], v7, (int)v14);
  Function_2002d7c(0, v7, 0);
  Function_201d78c(v5 + v6, 0);
  Function_20237bc_FreeMsg((int)v14, v15);
  Function_20237bc_FreeMsg(v7, v16);
  return Function_201a9a4(v5 + v6);
}

//----- (022232C8) --------------------------------------------------------
int __fastcall Function_22232c8(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;

  v3 = a1;
  v4 = a2;
  v5 = a1[2076];
  v6 = 16 * a3;
  v7 = Function_2023790(6, *(uint *)(*a1 + 12));
  v8 = Function_200b1ec_CallMsgDecrypt((ushort **)v3[2026], 0x2Bu);
  v9 = Function_2002d7c(0, (int)v8, 0);
  Function_20237bc_FreeMsg((int)v8, v10);
  Function_201ae78(v5 + v6, 0, (v9 + 40) & 0xFFFF, 24, 40 - v9, 0x10u);
  v11 = Function_200b1ec_CallMsgDecrypt((ushort **)v3[2026], 0x2Cu);
  Function_200b60c(v3[2027], 0, *(uchar *)(v4 + 2), 2, 0, 1);
  Function_200c388((uint *)v3[2027], v7, (int)v11);
  Function_2002d7c(0, v7, 0);
  Function_201d78c(v5 + v6, 0);
  Function_20237bc_FreeMsg((int)v11, v12);
  Function_20237bc_FreeMsg(v7, v13);
  return Function_201a9a4(v5 + v6);
}

//----- (0222339C) --------------------------------------------------------
int __fastcall Function_222339c(int **a1)
{
  int **v1;
  int v2;
  int **v3;
  uchar *v4;
  int result;
  int v6;

  v1 = a1;
  v2 = 0;
  if ( GetNrOfPkmnInParty(**a1) > 0 )
  {
    v6 = 0;
    v3 = v1;
    v4 = (char *)v1 + 27;
    do
    {
      Function_201ada4_ClearTextBox((int)&v1[2076][v6], 0);
      if ( *((ushort *)v3 + 4) )
      {
        Function_2221c54(v1, v2, 2, (ushort)v2);
        if ( !(*v4 & 0x80) )
          Function_2223448(v1, (uchar)v2);
        if ( Function_208e9f0(v3[1]) == 7 )
          Function_22234a8(v1, (uchar)v2);
      }
      v3 += 20;
      v6 += 4;
      v4 += 80;
      ++v2;
    }
    while ( v2 < GetNrOfPkmnInParty(**v1) );
  }
  if ( *((uchar *)*v1 + 53) == 2 )
    result = Function_22221c8((int)v1, 7u);
  else
    result = Function_22221c8((int)v1, 6u);
  return result;
}

//----- (02223448) --------------------------------------------------------
int __fastcall Function_2223448(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = 16 * a2;
  Function_201ae78(*(uint *)(a1 + 8304) + 16 * a2, 0, 56, 32, 0x18u, 8u);
  Function_201ae78(*(uint *)(v2 + 8304) + v4, 0, 64, 24, 0x40u, 8u);
  Function_2221e50(v2, v3, v3, 0x38u, 0x20u);
  return Function_2221ed0(v2, v3, v3, 64, 0x18u);
}

//----- (022234A8) --------------------------------------------------------
int __fastcall Function_22234a8(int result, int a2)
{
  if ( !(*(uchar *)(result + 80 * a2 + 27) & 0x80) )
    result = Function_2221e08(result, a2, a2, 0, 0x20u);
  return result;
}

//----- (022234C8) --------------------------------------------------------
int __fastcall Function_22234c8(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1[2076], 0);
  Function_201ada4_ClearTextBox(v1[2076] + 16, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 32, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 48, 0);
  Function_2223550(v1, *(uchar *)(*v1 + 17));
  Function_222222c((int)v1, 1, 0xFu);
  if ( v1[20 * *(uchar *)(*v1 + 17) + 6] & 0x80000000 )
  {
    Function_201a9a4(v1[2076] + 32);
    result = Function_201a9a4(v1[2076] + 48);
  }
  else
  {
    Function_222222c((int)v1, 2, 0x12u);
    result = Function_222222c((int)v1, 3, 0x13u);
  }
  return result;
}

//----- (02223550) --------------------------------------------------------
int __fastcall Function_2223550(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  int v17;
  int v18;

  v2 = a1;
  v3 = a2;
  v18 = a1[2076];
  v4 = (int)(a1 + 1);
  v5 = 80 * a2;
  v17 = (int)&a1[20 * a2 + 1];
  v16 = Function_2023790(12, *(uint *)(*a1 + 12));
  v6 = Function_200b1ec_CallMsgDecrypt((ushort **)v2[2026], dword_2228EC4[v3]);
  v7 = *(uint *)(v4 + v5);
  Function_2076b10_Dummy();
  Function_200b5cc((int *)v2[2027], 0, v8);
  Function_200c388((uint *)v2[2027], v16, (int)v6);
  Function_20237bc_FreeMsg((int)v6, v9);
  v10 = 0;
  if ( !(*(uchar *)(v17 + 22) & 0x80) && !(*(uchar *)(v17 + 23) & 0x80) )
  {
    if ( *(uchar *)(v17 + 23) & 7 )
    {
      if ( (*(uchar *)(v17 + 23) & 7) == 1 )
        v10 = Function_200b1ec_CallMsgDecrypt((ushort **)v2[2026], 0x11u);
    }
    else
    {
      v10 = Function_200b1ec_CallMsgDecrypt((ushort **)v2[2026], 0x10u);
    }
  }
  v11 = (uchar)Function_2002d7c(2, v16, 0);
  if ( v10 )
    v12 = Function_2002d7c(0, (int)v10, 0) & 0xFF;
  Function_201c294(v18);
  Function_201d78c(v18, 2);
  Function_20237bc_FreeMsg(v16, v13);
  if ( v10 )
  {
    *(uchar *)(v17 + 23);
    Function_201d78c(v18, 0);
    Function_20237bc_FreeMsg((int)v10, v14);
  }
  return Function_201a9a4(v18);
}

//----- (022236B8) --------------------------------------------------------
int __fastcall Function_22236b8(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;

  v1 = a1;
  v2 = 6 * *(uchar *)(a1 + 8309) & 0xFFFF;
  Function_201ada4_ClearTextBox(*(uint *)(a1 + 8304) + 16 * v2, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 1), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 2), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 3), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 4), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 80, 0);
  Function_2221c54((uint *)v1, v2, 0, *(uchar *)(*(uint *)v1 + 17));
  v3 = 0;
  v4 = v2 + 1;
  v8 = v1 + 52;
  do
  {
    v5 = 80 * *(uchar *)(*(uint *)v1 + 17);
    v9 = v8 + v5;
    if ( *(ushort *)(v8 + v5 + 8 * v3) )
    {
      Function_22220cc((uint *)v1, *(ushort *)(v8 + v5 + 8 * v3), v4 + v3, dword_2228EB0[v3], 2u);
      Function_222317c((uint *)v1, v9 + 8 * v3, v4 + v3);
    }
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 < 4 );
  Function_222222c(v1, 5, 0x12u);
  Function_201a9a4(*(uint *)(v1 + 8304) + 16 * (v2 + 1));
  Function_201a9a4(*(uint *)(v1 + 8304) + 16 * (v2 + 2));
  Function_201a9a4(*(uint *)(v1 + 8304) + 16 * (v2 + 3));
  Function_201a9a4(*(uint *)(v1 + 8304) + 16 * (v2 + 4));
  v6 = *(uchar *)(v1 + 8309);
  result = v6 ^ 1;
  *(uchar *)(v1 + 8309) = v6 ^ 1;
  return result;
}

//----- (022237F8) --------------------------------------------------------
int __fastcall Function_22237f8(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 22 * *(uchar *)(a1 + 8309);
  Function_201ada4_ClearTextBox(*(uint *)(a1 + 8304) + 304, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 320, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 224, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 240, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 256, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 272, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 288, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 208, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 336, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * v2, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 10), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 11), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 12), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 5), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 6), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 7), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 8), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 9), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 4), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 1), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 2), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16 * (v2 + 3), 0);
  Function_2221c54((uint *)v1, v2, 0, *(uchar *)(*(uint *)v1 + 17));
  Function_222295c(v1, *(uchar *)(*(uint *)v1 + 17));
  Function_2221ed0(v1, v2 + 10, *(uchar *)(*(uint *)v1 + 17), 0, 0);
  Function_2222290(v1, *(uchar *)(*(uint *)v1 + 17));
  Function_2222464(v1, *(uchar *)(*(uint *)v1 + 17));
  Function_2222560(v1, *(uchar *)(*(uint *)v1 + 17));
  Function_222265c(v1, *(uchar *)(*(uint *)v1 + 17));
  Function_222275c(v1, *(uchar *)(*(uint *)v1 + 17));
  Function_222285c(v1, *(uchar *)(*(uint *)v1 + 17));
  Function_2221fa8(v1, v2 + 1, *(uchar *)(*(uint *)v1 + 17));
  Function_2222030((ushort ***)v1, v2 + 3, *(uchar *)(*(uint *)v1 + 17));
  Function_2222af4((uchar *)v1, *(uchar *)(*(uint *)v1 + 17));
  Function_222222c(v1, 21, 0x13u);
  v3 = *(uchar *)(v1 + 8309);
  result = v3 ^ 1;
  *(uchar *)(v1 + 8309) = v3 ^ 1;
  return result;
}

//----- (02223A10) --------------------------------------------------------
int __fastcall Function_2223a10(int a1)
{
  uint *v1;
  int v2;
  int v3;
  uchar *v4;
  int v5;
  int result;

  v1 = (uint *)a1;
  v2 = 11 * *(uchar *)(a1 + 8309);
  Function_201ada4_ClearTextBox(*(uint *)(a1 + 8304) + 96, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 112, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 128, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 144, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 160, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 16 * (v2 + 1), 0);
  Function_201ada4_ClearTextBox(v1[2076] + 16 * v2, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 16 * (v2 + 2), 0);
  Function_201ada4_ClearTextBox(v1[2076] + 16 * (v2 + 3), 0);
  Function_201ada4_ClearTextBox(v1[2076] + 16 * (v2 + 5), 0);
  Function_201ada4_ClearTextBox(v1[2076] + 16 * (v2 + 4), 0);
  v3 = *(uchar *)(*v1 + 17);
  v4 = (uchar *)&v1[20 * v3 + 13 + 2 * *(uchar *)(*v1 + 52)];
  Function_2221c54(v1, 6, 0, v3);
  Function_2222170((int)v1, 7);
  Function_22220cc(v1, *(ushort *)v4, v2, dword_2228EB0[*(uchar *)(*v1 + 52)], 0);
  Function_2222b6c((int)v1, 8);
  Function_2222bb4((int)v1, v2 + 2, v4[6]);
  Function_2222c9c((int)v1, 9);
  Function_2222ce4((int)v1, v2 + 3, v4[7]);
  Function_2222dcc(v1, v2 + 4, *(ushort *)v4);
  Function_2222e94((int)v1, 10);
  Function_2222ef8((int)v1, v2 + 5, v4[5]);
  Function_2222f74((int)v1, v2 + 1, v4[2], v4[3]);
  v5 = *((uchar *)v1 + 8309);
  result = v5 ^ 1;
  *((uchar *)v1 + 8309) = v5 ^ 1;
  return result;
}

//----- (02223B74) --------------------------------------------------------
int __fastcall Function_2223b74(uint *a1)
{
  uint *v1;
  uint v2;
  uint *v3;
  int v4;
  int v5;
  char v6;
  int v8;
  int v9;
  char v10;
  char v11;
  char v12;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1[2076], 0);
  Function_201ada4_ClearTextBox(v1[2076] + 16, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 32, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 48, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 64, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 80, 0);
  Function_2221c54(v1, 0, 0, *(uchar *)(*v1 + 17));
  v2 = 0;
  v3 = (uint *)dword_2228EB0;
  v4 = 0;
  v9 = (int)(v1 + 13);
  do
  {
    v5 = 80 * *(uchar *)(*v1 + 17);
    v8 = v9 + v5;
    if ( *(ushort *)(v9 + v5 + v4) )
    {
      Function_22220cc(v1, *(ushort *)(v9 + v5 + v4), v2 + 1, *v3, 2u);
      Function_222317c(v1, v8 + v4, v2 + 1);
    }
    ++v2;
    v4 += 8;
    ++v3;
  }
  while ( v2 < 4 );
  Function_22220cc(v1, *(ushort *)(*v1 + 36), 5, 0x49u, 2u);
  v6 = LoadMoveData(*(ushort *)(*v1 + 36), 5u);
  v11 = v6;
  v12 = v6;
  Function_222317c(v1, (int)&v10, 5);
  Function_201a9a4(v1[2076] + 16);
  Function_201a9a4(v1[2076] + 32);
  Function_201a9a4(v1[2076] + 48);
  Function_201a9a4(v1[2076] + 64);
  return Function_201a9a4(v1[2076] + 80);
}

//----- (02223C9C) --------------------------------------------------------
int __fastcall Function_2223c9c(uint *a1)
{
  uint *v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  uchar *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1[2076], 0);
  Function_201ada4_ClearTextBox(v1[2076] + 32, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 48, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 16, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 64, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 96, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 80, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 112, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 144, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 160, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 128, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 176, 0);
  Function_2221c54(v1, 0, 0, *(uchar *)(*v1 + 17));
  Function_2222170((int)v1, 2);
  Function_2222b6c((int)v1, 4);
  Function_2222c9c((int)v1, 5);
  Function_2222e94((int)v1, 9);
  v2 = *v1;
  v3 = *(uchar *)(*v1 + 52);
  if ( v3 >= 4 )
  {
    v7 = LoadMoveData(*(ushort *)(v2 + 36), 5u);
    Function_22220cc(v1, *(ushort *)(*v1 + 36), 1, 0x49u, 0);
    Function_2222dcc(v1, 8, *(ushort *)(*v1 + 36));
    v8 = LoadMoveData(*(ushort *)(*v1 + 36), 4u);
    Function_2222bb4((int)v1, 6, v8);
    v9 = LoadMoveData(*(ushort *)(*v1 + 36), 2u);
    Function_2222ce4((int)v1, 7, v9);
    v10 = LoadMoveData(*(ushort *)(*v1 + 36), 1u);
    Function_2222ef8((int)v1, 10, v10);
    Function_2222f74((int)v1, 3, v7, v7);
  }
  else
  {
    v4 = (int)&v1[20 * *(uchar *)(v2 + 17) + 13];
    v5 = 8 * v3;
    v6 = (uchar *)(v4 + 8 * v3);
    Function_22220cc(v1, *(ushort *)(v4 + 8 * v3), 1, dword_2228EB0[v3], 0);
    Function_2222bb4((int)v1, 6, v6[6]);
    Function_2222ce4((int)v1, 7, v6[7]);
    Function_2222dcc(v1, 8, *(ushort *)(v4 + v5));
    Function_2222ef8((int)v1, 10, v6[5]);
    Function_2222f74((int)v1, 3, v6[2], v6[3]);
  }
  return Function_22230a8((int)v1, 11);
}

//----- (02223E68) --------------------------------------------------------
int __fastcall Function_2223e68(uint *a1)
{
  uint *v1;
  uint v2;
  uint *v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1[2076], 0);
  Function_201ada4_ClearTextBox(v1[2076] + 16, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 32, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 48, 0);
  Function_201ada4_ClearTextBox(v1[2076] + 64, 0);
  Function_2221c54(v1, 0, 0, *(uchar *)(*v1 + 17));
  v2 = 0;
  v3 = (uint *)dword_2228EB0;
  v4 = 0;
  v8 = (int)(v1 + 13);
  do
  {
    v5 = 80 * *(uchar *)(*v1 + 17);
    v7 = v8 + v5;
    if ( *(ushort *)(v8 + v5 + v4) )
    {
      Function_22220cc(v1, *(ushort *)(v8 + v5 + v4), v2 + 1, *v3, 2u);
      Function_222317c(v1, v7 + v4, v2 + 1);
    }
    ++v2;
    v4 += 8;
    ++v3;
  }
  while ( v2 < 4 );
  if ( !GetItemData(*(ushort *)(*v1 + 34), 0x25u, *(uint *)(*v1 + 12)) )
    Function_22221c8((int)v1, 0x5Eu);
  Function_201a9a4(v1[2076] + 16);
  Function_201a9a4(v1[2076] + 32);
  Function_201a9a4(v1[2076] + 48);
  return Function_201a9a4(v1[2076] + 64);
}

//----- (02223F5C) --------------------------------------------------------
int __fastcall Function_2223f5c(uint *a1, int a2, int a3)
{
  return Function_22232c8(a1, (int)&a1[20 * *(uchar *)(*a1 + 17) + 13 + 2 * a3], a2);
}

//----- (02223F7C) --------------------------------------------------------
int __fastcall Function_2223f7c(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  Function_201ada4_ClearTextBox(*(uint *)(a1 + 8304), 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 32, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 48, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 16, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 64, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 80, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v1 + 8304) + 96, 0);
  Function_2221c54((uint *)v1, 0, 0, *(uchar *)(*(uint *)v1 + 17));
  Function_2222170(v1, 2);
  v2 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 8104), 0x39u);
  Function_2002eec(0, (int)v2, 0, 0x60u);
  Function_201d78c(*(uint *)(v1 + 8304) + 64, 0);
  Function_20237bc_FreeMsg((int)v2, v3);
  Function_201a9a4(*(uint *)(v1 + 8304) + 64);
  v4 = *(uint *)v1;
  v5 = *(uchar *)(*(uint *)v1 + 52);
  if ( v5 >= 4 )
  {
    v9 = LoadMoveData(*(ushort *)(v4 + 36), 5u);
    Function_22220cc((uint *)v1, *(ushort *)(*(uint *)v1 + 36), 1, 0x49u, 0);
    Function_2222e2c(v1, 5, *(ushort *)(*(uint *)v1 + 36));
    Function_2222f74(v1, 3, v9, v9);
  }
  else
  {
    v6 = v1 + 52 + 80 * *(uchar *)(v4 + 17);
    v7 = 8 * v5;
    v8 = v6 + 8 * v5;
    Function_22220cc((uint *)v1, *(ushort *)(v6 + 8 * v5), 1, dword_2228EB0[v5], 0);
    Function_2222e2c(v1, 5, *(ushort *)(v6 + v7));
    Function_2222f74(v1, 3, *(uchar *)(v8 + 2), *(uchar *)(v8 + 3));
  }
  return Function_22230a8(v1, 6);
}

//----- (022240E0) --------------------------------------------------------
int __fastcall Function_22240e0(int a1)
{
  int v1;

  v1 = a1;
  Function_200e060(a1 + 8288, 1, 1, 0xEu);
  Function_201ada4_ClearTextBox(v1 + 8288, 15);
  return Function_2224108(v1);
}

//----- (02224108) --------------------------------------------------------
int __fastcall Function_2224108(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_2002ac8(1);
  ((void (__fastcall *)(uint))dword_223EDF0[0])(*(uint *)(*(uint *)v1 + 8));
  v2 = *(uint *)(v1 + 8112);
  result = Function_201d738_CallInitTextInterpreter(v1 + 8288, 1);
  *(uchar *)(v1 + 8315) = result;
  return result;
}

//----- (02224144) --------------------------------------------------------
uint __fastcall Function_2224144(uint *a1)
{
  uint *v1;
  int v2;
  int *v3;
  int v4;
  char v5;
  char v6;
  int v7;
  char v8;
  int v9;
  char v10;
  int v11;
  char v12;
  int v13;
  char v14;
  int v15;
  char v16;
  int v17;
  char v18;
  int v19;
  int v20;
  ushort *v21;
  int v22;
  int v23;
  ushort *v24;
  int v25;
  int v26;
  char v27;
  int v28;
  int v29;
  ushort *v30;
  int v31;
  int v32;
  ushort *v33;
  int v34;
  int v35;
  ushort *v36;
  int v37;
  int v38;
  ushort *v39;
  int v40;
  int v41;
  ushort *v42;
  int v43;
  int v44;
  ushort *v45;
  int v46;
  int v47;
  ushort *v48;
  int v49;
  int v50;
  int v52;
  int v53;

  v1 = a1;
  v53 = *a1;
  v2 = LoadFromNARC_ItemData(*(ushort *)(v53 + 34), 0, *(uint *)(v53 + 12));
  v3 = (int *)((int (__fastcall *)(uint, uint, uint))dword_223DFAC[0])(
                *(uint *)(v53 + 8),
                *(uint *)(v53 + 40),
                *(uchar *)(v53 + *(uchar *)(v53 + 17) + 44));
  v52 = (ushort)GetPkmnData(v3, 0xA3u, 0);
  v4 = 0;
  ReadItemData1(v2, 0xFu, v5);
  if ( v7 )
    v4 = 1;
  ReadItemData1(v2, 0x10u, v6);
  if ( v9 )
    v4 = (v4 | 2) & 0xFF;
  ReadItemData1(v2, 0x11u, v8);
  if ( v11 )
    v4 = (v4 | 4) & 0xFF;
  ReadItemData1(v2, 0x12u, v10);
  if ( v13 )
    v4 = (v4 | 8) & 0xFF;
  ReadItemData1(v2, 0x13u, v12);
  if ( v15 )
    v4 = (v4 | 0x10) & 0xFF;
  ReadItemData1(v2, 0x14u, v14);
  if ( v17 )
    v4 = (v4 | 0x20) & 0xFF;
  ReadItemData1(v2, 0x15u, v16);
  if ( v19 )
    v4 = (v4 | 0x40) & 0xFF;
  v20 = (int)&v1[20 * *(uchar *)(v53 + 17)];
  if ( *(ushort *)(v20 + 20) || !v52 )
  {
    if ( v52 == *(ushort *)(v20 + 20) )
    {
      ReadItemData1(v2, 0x24u, v18);
      if ( v28 || (ReadItemData1(v2, 0x25u, v27), v29) )
      {
        Function_200b1b8_CallMsgDecrypt((ushort **)v1[2026], 0x57u, (ushort *)v1[2028]);
      }
      else if ( v4 == 1 )
      {
        v30 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x5Cu);
        Function_2076b10_Dummy();
        Function_200b5cc((int *)v1[2027], 0, v31);
        Function_200c388((uint *)v1[2027], v1[2028], (int)v30);
        Function_20237bc_FreeMsg((int)v30, v32);
      }
      else if ( v4 == 2 )
      {
        v33 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x53u);
        Function_2076b10_Dummy();
        Function_200b5cc((int *)v1[2027], 0, v34);
        Function_200c388((uint *)v1[2027], v1[2028], (int)v33);
        Function_20237bc_FreeMsg((int)v33, v35);
      }
      else if ( v4 == 4 )
      {
        v36 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x55u);
        Function_2076b10_Dummy();
        Function_200b5cc((int *)v1[2027], 0, v37);
        Function_200c388((uint *)v1[2027], v1[2028], (int)v36);
        Function_20237bc_FreeMsg((int)v36, v38);
      }
      else if ( v4 == 8 )
      {
        v39 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x56u);
        Function_2076b10_Dummy();
        Function_200b5cc((int *)v1[2027], 0, v40);
        Function_200c388((uint *)v1[2027], v1[2028], (int)v39);
        Function_20237bc_FreeMsg((int)v39, v41);
      }
      else if ( v4 == 16 )
      {
        v42 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x54u);
        Function_2076b10_Dummy();
        Function_200b5cc((int *)v1[2027], 0, v43);
        Function_200c388((uint *)v1[2027], v1[2028], (int)v42);
        Function_20237bc_FreeMsg((int)v42, v44);
      }
      else if ( v4 == 32 )
      {
        v45 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x5Au);
        Function_2076b10_Dummy();
        Function_200b5cc((int *)v1[2027], 0, v46);
        Function_200c388((uint *)v1[2027], v1[2028], (int)v45);
        Function_20237bc_FreeMsg((int)v45, v47);
      }
      else
      {
        if ( v4 == 64 )
          v48 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x5Bu);
        else
          v48 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x59u);
        Function_2076b10_Dummy();
        Function_200b5cc((int *)v1[2027], 0, v49);
        Function_200c388((uint *)v1[2027], v1[2028], (int)v48);
        Function_20237bc_FreeMsg((int)v48, v50);
      }
    }
    else
    {
      v24 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x52u);
      Function_2076b10_Dummy();
      Function_200b5cc((int *)v1[2027], 0, v25);
      Function_200b60c(v1[2027], 1u, v52 - LOWORD(v1[20 * *(uchar *)(v53 + 17) + 5]), 3, 0, 1);
      Function_200c388((uint *)v1[2027], v1[2028], (int)v24);
      Function_20237bc_FreeMsg((int)v24, v26);
    }
  }
  else
  {
    v21 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[2026], 0x58u);
    Function_2076b10_Dummy();
    Function_200b5cc((int *)v1[2027], 0, v22);
    Function_200c388((uint *)v1[2027], v1[2028], (int)v21);
    Function_20237bc_FreeMsg((int)v21, v23);
  }
  return free(v2);
}

//----- (0222449C) --------------------------------------------------------
uint __fastcall Function_222449c(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  int v4;

  v1 = a1;
  ((void (__fastcall *)(uint, uint, uint))dword_223DFAC[0])(
    *(uint *)(*(uint *)a1 + 8),
    *(uint *)(*(uint *)a1 + 40),
    *(uchar *)(*(uint *)a1 + *(uchar *)(*(uint *)a1 + 17) + 44));
  v2 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 8104), 0x5Fu);
  Function_2076b10_Dummy();
  Function_200b5cc(*(int **)(v1 + 8108), 0, v3);
  Function_200b630(*(uint *)(v1 + 8108), 1u, 0x175u);
  Function_200c388(*(uint **)(v1 + 8108), *(uint *)(v1 + 8112), (int)v2);
  return Function_20237bc_FreeMsg((int)v2, v4);
}

//----- (02224500) --------------------------------------------------------
uint __fastcall Function_2224500(int a1)
{
  int v1;

  v1 = a1;
  Function_222453c();
  Function_2224588(v1);
  Function_2224670(v1);
  Function_2224720(v1);
  Function_2224798(v1);
  Function_2224848(v1);
  Function_2224948(v1);
  Function_222554c(v1);
  return Function_201ff74(0x10u, 1);
}

//----- (0222453C) --------------------------------------------------------
int __fastcall Function_222453c(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v7 = 18;
  v8 = 6;
  v9 = 6;
  v10 = 6;
  v11 = 0;
  v12 = 0;
  v5 = (uint *)((int (__fastcall *)(uint))dword_223E010[0])(*(uint *)(*(uint *)a1 + 8));
  *(uint *)(v4 + 8116) = Function_200c704(v5);
  Function_200c7c0((int *)v5, *(int ***)(v4 + 8116), 43);
  return Function_200cb30(v5, *(uint *)(v4 + 8116), &v7);
}

//----- (02224588) --------------------------------------------------------
uint __fastcall Function_2224588(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int *v10;
  int v11;
  uint v12;
  uint *v14;

  v4 = a1;
  v5 = LoadFromNARC_8(19, *(uint *)(*a1 + 12), a3, a4);
  v14 = (uint *)((int (__fastcall *)(uint))dword_223E010[0])(*(uint *)(*v4 + 8));
  v6 = Function_2079fd0();
  Function_200cdc4(v4[122], 3u, v14, v4[2029], (int)v5, v6, 0, 3, 2, 45063);
  v7 = Function_2079fd8();
  Function_200ce24(v14, v4[2029], (int)v5, v7, 0, 45063);
  v8 = Function_2079fe4();
  Function_200ce54(v14, v4[2029], (int)v5, v8, 0, 45063);
  v9 = 0;
  v10 = v4;
  do
  {
    if ( *((ushort *)v10 + 4) )
    {
      v11 = v10[1];
      v12 = Function_2079d80();
    }
    else
    {
      v12 = Function_2079d8c(0, 0, 0);
    }
    Function_200cc3c(v14, v4[2029], (int)v5, v12, 0, 2, v9++ + 45063);
    v10 += 20;
  }
  while ( v9 < 6 );
  return Call_FS_CloseFile(v5);
}

//----- (02224670) --------------------------------------------------------
uint __fastcall Function_2224670(int *a1)
{
  int *v1;
  uint *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = (uint *)((int (__fastcall *)(uint))dword_223E010[0])(*(uint *)(*a1 + 8));
  v5 = LoadFromNARC_8(39, *(uint *)(*v1 + 12), v3, v4);
  v6 = Function_208e9e4();
  Function_200cdc4(v1[122], 3u, v2, v1[2029], (int)v5, v6, 0, 1, 2, 45064);
  v7 = Function_208e9e8();
  Function_200ce24(v2, v1[2029], (int)v5, v7, 0, 45064);
  v8 = Function_208e9ec();
  Function_200ce54(v2, v1[2029], (int)v5, v8, 0, 45064);
  v9 = Function_208e9e0();
  Function_200cc3c(v2, v1[2029], (int)v5, v9, 0, 2, 45069);
  return Call_FS_CloseFile(v5);
}

//----- (02224720) --------------------------------------------------------
BOOL __fastcall Function_2224720(int a1)
{
  int v1;
  int *v2;
  uint v3;

  v1 = a1;
  v2 = (int *)((int (__fastcall *)(uint))dword_223E010[0])(*(uint *)(*(uint *)a1 + 8));
  Function_207c9b0(*(uint *)(v1 + 488), 3u, v2, *(uint *)(v1 + 8116), 2, 45065);
  Function_207c9ec(v2, *(uint *)(v1 + 8116), 45065, 45065);
  v3 = 45070;
  do
    Function_207c948(v2, *(uint *)(v1 + 8116), 2, 0, v3++);
  while ( v3 <= 0xB014 );
  return Function_207cac4(v2, *(uint *)(v1 + 8116), 2, 0, 45077);
}

//----- (02224798) --------------------------------------------------------
uint __fastcall Function_2224798(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int *v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = a1;
  v5 = LoadFromNARC_8(20, *(uint *)(*a1 + 12), a3, a4);
  v6 = (uint *)((int (__fastcall *)(uint))dword_223E010[0])(*(uint *)(*v4 + 8));
  v7 = Function_2081934();
  Function_200cdc4(v4[122], 3u, v6, v4[2029], (int)v5, v7, 0, 1, 2, 45066);
  v8 = Function_2081938();
  Function_200ce24(v6, v4[2029], (int)v5, v8, 0, 45066);
  v9 = Function_208193c();
  Function_200ce54(v6, v4[2029], (int)v5, v9, 0, 45066);
  v10 = Function_2081930();
  Function_200cc3c(v6, v4[2029], (int)v5, v10, 0, 2, 45078);
  return Call_FS_CloseFile(v5);
}

//----- (02224848) --------------------------------------------------------
BOOL __fastcall Function_2224848(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)((int (__fastcall *)(uint))dword_223E010[0])(*(uint *)(*(uint *)a1 + 8));
  Function_200cd7c(*(uint *)(v1 + 488), 3u, v2, *(uint *)(v1 + 8116), 72, 27, 0, 1, 2, 45067);
  Function_200ce0c(v2, *(uint *)(v1 + 8116), 72, 25, 0, 45067);
  Function_200ce3c(v2, *(uint *)(v1 + 8116), 72, 24, 0, 45067);
  return Function_200cbdc(v2, *(uint *)(v1 + 8116), 72, 26, 0, 2, 45079);
}

//----- (022248D8) --------------------------------------------------------
int *__fastcall Function_22248d8(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;
  short v7;
  short v8;
  short v9;
  short v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)((int (__fastcall *)(uint))dword_223E010[0])(*(uint *)(*(uint *)a1 + 8));
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v5 = dword_2229524[5 * v3];
  v12 = 0;
  v11 = v5;
  v13 = 2;
  v19 = 0;
  v14 = dword_2229514[5 * v3];
  v15 = dword_2229518[5 * v3];
  v16 = dword_222951C[5 * v3];
  v17 = dword_2229520[5 * v3];
  v18 = 1;
  return Function_200ce6c(v4, *(uint *)(v2 + 8116), &v7);
}

//----- (02224948) --------------------------------------------------------
int __fastcall Function_2224948(int a1)
{
  int v1;
  uint v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    *(uint *)(v3 + 8120) = Function_22248d8(v1, v2++);
    v3 += 4;
  }
  while ( v2 < 0x26 );
  return Function_22249cc(v1);
}

//----- (02224970) --------------------------------------------------------
uint __fastcall Function_2224970(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v5;

  v1 = a1;
  v5 = ((int (__fastcall *)(uint))dword_223E010[0])(*(uint *)(*(uint *)a1 + 8));
  v2 = 0;
  v3 = v1;
  do
  {
    Function_200d0f4(*(uint *)(v3 + 8120));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 0x26 );
  Function_22255b8(v1);
  return Function_200d0b0(v5, *(int ***)(v1 + 8116));
}

//----- (022249AC) --------------------------------------------------------
int __fastcall Function_22249ac(uint *a1, short a2, short a3)
{
  short v3;
  short v4;
  int *v5;

  v3 = a2;
  v4 = a3;
  v5 = (int *)a1;
  Function_200d3f4(a1, 1);
  return Function_200d4c4(v5, v3, v4);
}

//----- (022249CC) --------------------------------------------------------
int __fastcall Function_22249cc(int a1)
{
  int v1;
  int v2;
  uchar *v3;
  int v4;
  int result;
  char v6;

  v1 = a1;
  v2 = 0;
  v3 = (uchar *)(a1 + 27);
  v4 = a1;
  do
  {
    result = *(ushort *)(v1 + 8);
    if ( *(ushort *)(v1 + 8) )
    {
      v6 = Function_2079edc(result, *(uchar *)(v1 + 50), (uint)*v3 << 24 >> 31);
      result = Function_200d41c(*(int **)(v4 + 8148), v6);
    }
    ++v2;
    v1 += 80;
    v3 += 80;
    v4 += 4;
  }
  while ( v2 < 6 );
  return result;
}

//----- (02224A0C) --------------------------------------------------------
int __fastcall Function_2224a0c(int a1, int *a2, int a3, uint a4)
{
  int v4;
  uint v5;
  int *v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  char v11;

  v4 = a1;
  v5 = a4;
  v6 = a2;
  v7 = a3;
  v8 = (int *)((int (__fastcall *)(uint))dword_223E010[0])(*(uint *)(*(uint *)a1 + 8));
  v9 = Function_207c944();
  v10 = Function_207c908(v5);
  Function_200d948(v8, *(uint *)(v4 + 8116), v9, v10, 1, v7);
  v11 = Function_207c92c(v5);
  return Function_200d41c(v6, v11 + 4);
}

//----- (02224A5C) --------------------------------------------------------
int __fastcall Function_2224a5c(int a1, int *a2, uint a3)
{
  int v3;
  uint v4;
  int *v5;
  int *v6;
  int v7;
  int v8;
  char v9;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (int *)((int (__fastcall *)(uint))dword_223E010[0])(*(uint *)(*(uint *)a1 + 8));
  v7 = Function_207cac0();
  v8 = Function_207ca90(v4);
  Function_200d948(v6, *(uint *)(v3 + 8116), v7, v8, 1, 45077);
  v9 = Function_207caa8(v4);
  return Function_200d41c(v5, v9 + 4);
}

//----- (02224AB0) --------------------------------------------------------
int __fastcall Function_2224ab0(int result, int *a2, short a3, short a4)
{
  uint *v4;
  short v5;
  short v6;

  v4 = (uint *)a2;
  v5 = a3;
  v6 = a4;
  if ( result != 7 )
  {
    Function_200d364(a2, result);
    result = Function_22249ac(v4, v5, v6);
  }
  return result;
}

//----- (02224AD4) --------------------------------------------------------
int __fastcall Function_2224ad4(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  uint v6;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_2224a0c(a1, *(int **)(a1 + 8196), 45070, *(uchar *)(a2 + 20));
  Function_22249ac(*(uint **)(v4 + 8196), *v5, v5[1]);
  v6 = *(uchar *)(v3 + 21);
  result = *(uchar *)(v3 + 20);
  if ( result != v6 )
  {
    Function_2224a0c(v4, *(int **)(v4 + 8200), 45071, v6);
    result = Function_22249ac(*(uint **)(v4 + 8200), v5[2], v5[3]);
  }
  return result;
}

//----- (02224B28) --------------------------------------------------------
int __fastcall Function_2224b28(int result, int *a2, short a3, short a4)
{
  int *v4;
  short v5;
  short v6;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  if ( result )
  {
    if ( Function_207d2d0(result) == 1 )
      Function_200d364(v4, 1u);
    else
      Function_200d364(v4, 0);
    result = Function_22249ac((uint *)v4, v5, v6);
  }
  return result;
}

//----- (02224B5C) --------------------------------------------------------
int __fastcall Function_2224b5c(int result, int *a2, short a3, short a4)
{
  uint *v4;
  short v5;
  short v6;

  v4 = (uint *)a2;
  v5 = a3;
  v6 = a4;
  if ( result )
  {
    Function_200d364(a2, 2u);
    result = Function_22249ac(v4, v5, v6);
  }
  return result;
}

//----- (02224B7C) --------------------------------------------------------
int __fastcall Function_2224b7c(int a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  int result;
  int v6;

  v2 = a1;
  v6 = a2;
  v3 = 0;
  v4 = a1;
  do
  {
    Function_200d3f4(*(uint **)(v4 + 8120), 0);
    ++v3;
    v4 += 4;
  }
  while ( v3 < 0x26 );
  result = v6;
  switch ( (uchar)v6 )
  {
    case 0:
      result = Function_2224c14(v2);
      break;
    case 1:
      result = Function_2224cb0(v2);
      break;
    case 2:
      result = Function_2224d08(v2);
      break;
    case 3:
      result = Function_2224da0(v2);
      break;
    case 4:
      result = Function_2224e78(v2);
      break;
    case 5:
      result = Function_222506c(v2);
      break;
    case 6:
      result = Function_2224f3c(v2);
      break;
    case 7:
      result = Function_2224fa8(v2);
      break;
    case 8:
      result = Function_2225150(v2);
      break;
    case 9:
      result = Function_22250d8(v2);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02224C14) --------------------------------------------------------
int __fastcall Function_2224c14(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  int result;
  uchar *v6;
  int v7;

  v1 = a1;
  v7 = 0;
  v2 = &dword_2229404;
  v3 = &dword_2229434;
  v4 = a1;
  v6 = (uchar *)(a1 + 27);
  do
  {
    if ( *(ushort *)(v1 + 8) )
    {
      Function_22249ac(*(uint **)(v4 + 8148), *v2, v2[1]);
      Function_2224ab0((uint)*v6 << 25 >> 28, *(int **)(v4 + 8172), *v3, v3[1]);
      Function_2224b28(*(ushort *)(v1 + 30), *(int **)(v4 + 8120), *(ushort *)v2 + 8, v2[1] + 8);
      Function_2224b5c(*(uchar *)(v1 + 49), *(int **)(v4 + 8248), *(ushort *)v2 + 16, v2[1] + 8);
    }
    v1 += 80;
    v6 += 80;
    v2 += 2;
    result = v7 + 1;
    v4 += 4;
    v3 += 2;
    v7 = result;
  }
  while ( result < 6 );
  return result;
}

//----- (02224CB0) --------------------------------------------------------
int __fastcall Function_2224cb0(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uchar *)(*(uint *)a1 + 17);
  v3 = a1 + 4 + 80 * v2;
  Function_22249ac(*(uint **)(a1 + 4 * (v2 + 7) + 8120), 128, 72);
  Function_2224b28(
    *(ushort *)(v3 + 26),
    *(int **)(v1 + 4 * *(uchar *)(*(uint *)v1 + 17) + 8120),
    136,
    80);
  return Function_2224b5c(
           *(uchar *)(v3 + 45),
           *(int **)(v1 + 4 * (*(uchar *)(*(uint *)v1 + 17) + 32) + 8120),
           144,
           80);
}

//----- (02224D08) --------------------------------------------------------
int __fastcall Function_2224d08(int **a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *((uchar *)*a1 + 17);
  v3 = (int)&a1[20 * v2 + 1];
  Function_22249ac((uint *)a1[v2 + 2037], 24, 12);
  Function_2224ab0(
    (uint)*(uchar *)(v3 + 23) << 25 >> 28,
    v1[*((uchar *)*v1 + 17) + 2043],
    198,
    20);
  Function_2224ad4((int)v1, v3, dword_22292C4);
  Function_2224b28(*(ushort *)(v3 + 26), v1[*((uchar *)*v1 + 17) + 2030], 32, 20);
  Function_2224b5c(*(uchar *)(v3 + 45), v1[*((uchar *)*v1 + 17) + 2062], 40, 20);
  return Function_2224b28(*(ushort *)(v3 + 26), v1[2036], 20, 132);
}

//----- (02224DA0) --------------------------------------------------------
int __fastcall Function_2224da0(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  uint v5;
  int result;
  int v7;

  v7 = a1;
  v1 = *(uchar *)(*(uint *)a1 + 17);
  v2 = a1 + 4 + 80 * v1;
  Function_22249ac(*(uint **)(a1 + 4 * (v1 + 7) + 8120), 24, 12);
  Function_2224ab0(
    (uint)*(uchar *)(v2 + 23) << 25 >> 28,
    *(int **)(v7 + 4 * (*(uchar *)(*(uint *)v7 + 17) + 13) + 8120),
    198,
    20);
  Function_2224ad4(v7, v2, dword_22292A4);
  Function_2224b28(
    *(ushort *)(v2 + 26),
    *(int **)(v7 + 4 * *(uchar *)(*(uint *)v7 + 17) + 8120),
    32,
    20);
  Function_2224b5c(
    *(uchar *)(v2 + 45),
    *(int **)(v7 + 4 * (*(uchar *)(*(uint *)v7 + 17) + 32) + 8120),
    40,
    20);
  v3 = v7;
  v4 = &dword_2229324;
  v5 = 0;
  do
  {
    result = *(ushort *)(v2 + 48);
    if ( *(ushort *)(v2 + 48) )
    {
      Function_2224a0c(v7, *(int **)(v3 + 8204), v5 + 45072, *(uchar *)(v2 + 52));
      result = Function_22249ac(*(uint **)(v3 + 8204), *v4, v4[1]);
    }
    ++v5;
    v2 += 8;
    v3 += 4;
    v4 += 2;
  }
  while ( v5 < 4 );
  return result;
}

//----- (02224E78) --------------------------------------------------------
int __fastcall Function_2224e78(int **a1)
{
  int **v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *((uchar *)*a1 + 17);
  v3 = (int)&a1[20 * v2 + 1];
  Function_22249ac((uint *)a1[v2 + 2037], 24, 12);
  Function_2224ab0(
    (uint)*(uchar *)(v3 + 23) << 25 >> 28,
    v1[*((uchar *)*v1 + 17) + 2043],
    198,
    20);
  Function_2224ad4((int)v1, v3, dword_22292B4);
  Function_22249ac((uint *)v1[*((uchar *)*v1 + 52) + 2051], 136, 48);
  Function_2224b28(*(ushort *)(v3 + 26), v1[*((uchar *)*v1 + 17) + 2030], 32, 20);
  Function_2224b5c(*(uchar *)(v3 + 45), v1[*((uchar *)*v1 + 17) + 2062], 40, 20);
  Function_2224a5c((int)v1, v1[2056], *(uchar *)(v3 + 8 * *((uchar *)*v1 + 52) + 53));
  return Function_22249ac((uint *)v1[2056], 24, 88);
}

//----- (02224F3C) --------------------------------------------------------
int __fastcall Function_2224f3c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uchar *)(*(uint *)a1 + 17);
  v3 = a1 + 4 + 80 * v2;
  Function_22249ac(*(uint **)(a1 + 4 * (v2 + 7) + 8120), 24, 12);
  Function_2224ad4(v1, v3, dword_2229294);
  Function_2224b28(
    *(ushort *)(v3 + 26),
    *(int **)(v1 + 4 * *(uchar *)(*(uint *)v1 + 17) + 8120),
    32,
    20);
  Function_2224b5c(
    *(uchar *)(v3 + 45),
    *(int **)(v1 + 4 * (*(uchar *)(*(uint *)v1 + 17) + 32) + 8120),
    40,
    20);
  return Function_22252e8(v1);
}

//----- (02224FA8) --------------------------------------------------------
int __fastcall Function_2224fa8(int **a1)
{
  int **v1;
  int v2;
  int v3;
  uint v4;
  int v5;

  v1 = a1;
  v2 = *((uchar *)*a1 + 17);
  v3 = (int)&a1[20 * v2 + 1];
  Function_22249ac((uint *)a1[v2 + 2037], 24, 12);
  Function_2224ad4((int)v1, v3, dword_2229284);
  Function_22249ac((uint *)v1[*((uchar *)*v1 + 52) + 2051], 136, 48);
  Function_2224b28(*(ushort *)(v3 + 26), v1[*((uchar *)*v1 + 17) + 2030], 32, 20);
  Function_2224b5c(*(uchar *)(v3 + 45), v1[*((uchar *)*v1 + 17) + 2062], 40, 20);
  v4 = *((uchar *)*v1 + 52);
  if ( v4 >= 4 )
  {
    v5 = LoadMoveData(*((ushort *)*v1 + 18), 1u);
    Function_2224a5c((int)v1, v1[2056], v5);
  }
  else
  {
    Function_2224a5c((int)v1, v1[2056], *(uchar *)(v3 + 8 * v4 + 53));
  }
  return Function_22249ac((uint *)v1[2056], 24, 88);
}

//----- (0222506C) --------------------------------------------------------
int __fastcall Function_222506c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uchar *)(*(uint *)a1 + 17);
  v3 = a1 + 4 + 80 * v2;
  Function_22249ac(*(uint **)(a1 + 4 * (v2 + 7) + 8120), 24, 12);
  Function_2224ad4(v1, v3, dword_2229294);
  Function_2224b28(
    *(ushort *)(v3 + 26),
    *(int **)(v1 + 4 * *(uchar *)(*(uint *)v1 + 17) + 8120),
    32,
    20);
  Function_2224b5c(
    *(uchar *)(v3 + 45),
    *(int **)(v1 + 4 * (*(uchar *)(*(uint *)v1 + 17) + 32) + 8120),
    40,
    20);
  return Function_22252e8(v1);
}

//----- (022250D8) --------------------------------------------------------
int __fastcall Function_22250d8(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uchar *)(*(uint *)a1 + 17);
  v3 = a1 + 4 + 80 * v2;
  Function_22249ac(*(uint **)(a1 + 4 * (v2 + 7) + 8120), 24, 12);
  Function_22249ac(*(uint **)(v1 + 4 * (*(uchar *)(*(uint *)v1 + 52) + 21) + 8120), 136, 72);
  Function_2224b28(
    *(ushort *)(v3 + 26),
    *(int **)(v1 + 4 * *(uchar *)(*(uint *)v1 + 17) + 8120),
    32,
    20);
  Function_2224b5c(
    *(uchar *)(v3 + 45),
    *(int **)(v1 + 4 * (*(uchar *)(*(uint *)v1 + 17) + 32) + 8120),
    40,
    20);
  return Function_2225420(v1);
}

//----- (02225150) --------------------------------------------------------
int __fastcall Function_2225150(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uchar *)(*(uint *)a1 + 17);
  v3 = a1 + 4 + 80 * v2;
  Function_22249ac(*(uint **)(a1 + 4 * (v2 + 7) + 8120), 24, 12);
  Function_2224b28(
    *(ushort *)(v3 + 26),
    *(int **)(v1 + 4 * *(uchar *)(*(uint *)v1 + 17) + 8120),
    32,
    20);
  Function_2224b5c(
    *(uchar *)(v3 + 45),
    *(int **)(v1 + 4 * (*(uchar *)(*(uint *)v1 + 17) + 32) + 8120),
    40,
    20);
  Function_22252e8(v1);
  return Function_2225420(v1);
}

//----- (022251B4) --------------------------------------------------------
int __fastcall Function_22251b4(int **a1)
{
  int **v1;
  uint v2;
  int v3;
  int v4;
  int result;
  uchar v6;
  int v7;

  v1 = a1;
  v2 = 0;
  v7 = (int)&a1[20 * *((uchar *)*a1 + 17) + 1];
  do
  {
    v3 = v7 + 8 * v2;
    if ( *(ushort *)(v3 + 48) )
    {
      v4 = (int)&v1[v2];
      Function_2224a0c((int)v1, *(int **)(v4 + 8204), v2 + 45072, *(uchar *)(v3 + 52));
      Function_22249ac(*(uint **)(v4 + 8204), dword_22293DC[2 * v2], dword_22293DC[2 * v2 + 1]);
    }
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 < 4 );
  result = *((ushort *)*v1 + 18);
  if ( *((ushort *)*v1 + 18) )
  {
    v6 = LoadMoveData(result, 3u);
    Function_2224a0c((int)v1, v1[2055], 45076, v6);
    result = Function_22249ac((uint *)v1[2055], 88, 176);
  }
  return result;
}

//----- (02225248) --------------------------------------------------------
int __fastcall Function_2225248(int **a1)
{
  int **v1;
  uint v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;

  v1 = a1;
  v2 = 0;
  v7 = (int)&a1[20 * *((uchar *)*a1 + 17) + 1];
  do
  {
    if ( *(ushort *)(v7 + 8 * v2 + 48) )
    {
      v3 = (int)&v1[v2];
      v4 = LoadMoveData(*(ushort *)(v7 + 8 * v2 + 48), 0xBu);
      Function_2224a0c((int)v1, *(int **)(v3 + 8204), v2 + 45072, (v4 + 18) & 0xFF);
      Function_22249ac(*(uint **)(v3 + 8204), dword_22293DC[2 * v2], dword_22293DC[2 * v2 + 1]);
    }
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 < 4 );
  result = *((ushort *)*v1 + 18);
  if ( *((ushort *)*v1 + 18) )
  {
    v6 = LoadMoveData(result, 0xBu);
    Function_2224a0c((int)v1, v1[2055], 45076, (v6 + 18) & 0xFF);
    result = Function_22249ac((uint *)v1[2055], 88, 176);
  }
  return result;
}

//----- (022252E8) --------------------------------------------------------
int __fastcall Function_22252e8(int a1)
{
  int result;

  if ( *(uchar *)(a1 + 8311) & 0xF )
    result = Function_2225248((int **)a1);
  else
    result = Function_22251b4((int **)a1);
  return result;
}

//----- (02225304) --------------------------------------------------------
int __fastcall Function_2225304(int *a1, uint a2)
{
  int *v2;
  uint v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_200d37c(a1);
  if ( v3 != result )
  {
    Function_200d3cc(v2, 0);
    result = Function_200d364(v2, v3);
  }
  return result;
}

//----- (02225324) --------------------------------------------------------
int __fastcall Function_2225324(int a1)
{
  int v1;
  int v2;
  int result;
  uint v4;

  v1 = a1;
  v2 = *(ushort *)(a1 + 16);
  if ( !v2 )
    return 0;
  v4 = (uint)*(uchar *)(v1 + 23) << 25 >> 28;
  if ( v4 != 7 && v4 != 6 )
    return 5;
  switch ( (uchar)Function_208c104(v2, *(ushort *)(v1 + 18), 48) )
  {
    case 1u:
      result = 4;
      break;
    case 2u:
      result = 3;
      break;
    case 3u:
      result = 2;
      break;
    case 4u:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0222537C) --------------------------------------------------------
int __fastcall Function_222537c(int **a1)
{
  int **v1;
  int v2;
  int result;
  uchar v4;
  int v5;

  v1 = a1;
  v2 = 0;
  result = GetNrOfPkmnInParty(**a1);
  if ( result > 0 )
  {
    do
    {
      if ( LOWORD(v1[20 * v2 + 2]) )
      {
        v4 = Function_2225324((int)&v1[20 * v2 + 1]);
        v5 = (int)&v1[v2];
        Function_2225304(*(int **)(v5 + 8148), v4);
        Function_200d34c(*(int **)(v5 + 8148), 4096);
      }
      v2 = (v2 + 1) & 0xFFFF;
      result = GetNrOfPkmnInParty(**v1);
    }
    while ( v2 < result );
  }
  return result;
}

//----- (022253DC) --------------------------------------------------------
int __fastcall Function_22253dc(int a1, int a2, int a3)
{
  int result;

  if ( a3 <= a2 )
    result = (short)(a3 + ((uint)u32_div_f((a2 - a3) * (a1 + 44) << 16, 300) >> 16));
  else
    result = (short)(a3 - ((uint)u32_div_f((a3 - a2) * (a1 + 44) << 16, 300) >> 16));
  return result;
}

//----- (02225420) --------------------------------------------------------
int __fastcall Function_2225420(int **a1)
{
  int **v1;
  int v2;
  int v3;
  short v4;
  short v5;
  short v6;
  short v7;
  short v8;
  short v9;
  short v10;
  short v11;
  short v12;
  short v13;

  v1 = a1;
  v2 = (int)(a1 + 1);
  v3 = 80 * *((uchar *)*a1 + 17);
  Function_2225304(a1[2057], 0);
  Function_2225304(v1[2058], 1u);
  Function_2225304(v1[2059], 3u);
  Function_2225304(v1[2060], 4u);
  Function_2225304(v1[2061], 2u);
  v4 = Function_22253dc(*(uchar *)(v2 + v3 + 40), 144, 144);
  v5 = Function_22253dc(*(uchar *)(v2 + v3 + 40), 2, 24);
  Function_22249ac((uint *)v1[2057], v4, v5);
  v6 = Function_22253dc(*(uchar *)(v2 + v3 + 41), 164, 144);
  v7 = Function_22253dc(*(uchar *)(v2 + v3 + 41), 16, 24);
  Function_22249ac((uint *)v1[2058], v6, v7);
  v8 = Function_22253dc(*(uchar *)(v2 + v3 + 42), 156, 144);
  v9 = Function_22253dc(*(uchar *)(v2 + v3 + 42), 41, 24);
  Function_22249ac((uint *)v1[2059], v8, v9);
  v10 = Function_22253dc(*(uchar *)(v2 + v3 + 43), 131, 143);
  v11 = Function_22253dc(*(uchar *)(v2 + v3 + 43), 41, 24);
  Function_22249ac((uint *)v1[2060], v10, v11);
  v12 = Function_22253dc(*(uchar *)(v2 + v3 + 44), 123, 143);
  v13 = Function_22253dc(*(uchar *)(v2 + v3 + 44), 16, 24);
  return Function_22249ac((uint *)v1[2061], v12, v13);
}

//----- (0222554C) --------------------------------------------------------
int __fastcall Function_222554c(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint))dword_223E010[0])(*(uint *)(*a1 + 8));
  ((void (__cdecl *)(int, uint, uint, uint))dword_226DB7C[0])(v2, v1[2029], v1[122], *(uint *)(*v1 + 12));
  v3 = ((int (__fastcall *)(int, uint, uint, int, int, int, int, uint, int))dword_226DC24[0])(
         v2,
         v1[2029],
         *(uint *)(*v1 + 12),
         45080,
         45068,
         45068,
         45068,
         0,
         1);
  return Function_2228a64(v1[2082], v3);
}

//----- (022255B8) --------------------------------------------------------
int __fastcall Function_22255b8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2228a58(*(uint *)(a1 + 8328));
  ((void (__fastcall *)(int))dword_226DCA8[0])(v2);
  return ((int (__fastcall *)(uint, int))dword_226DBFC[0])(*(uint *)(v1 + 8116), 45080);
}

//----- (022255EC) --------------------------------------------------------
int __fastcall Function_22255ec(int a1)
{
  int result;

  if ( (uint)*(uchar *)(a1 + 8311) << 24 >> 28 )
    result = Function_2228ac8(*(uint *)(a1 + 8328), 127);
  else
    result = Function_2228ac8(*(uint *)(a1 + 8328), 95);
  return result;
}

//----- (02225614) --------------------------------------------------------
int __fastcall Function_2225614(int a1)
{
  int result;

  if ( (uint)*(uchar *)(a1 + 8311) << 24 >> 28 )
    result = Function_2228ac8(*(uint *)(a1 + 8328), 7);
  else
    result = Function_2228ac8(*(uint *)(a1 + 8328), 5);
  return result;
}

//----- (0222563C) --------------------------------------------------------
uchar *__fastcall Function_222563c(int a1, int a2)
{
  int v2;
  uchar *result;

  v2 = a1;
  result = (uchar *)Function_2228a9c(*(uint *)(a1 + 8328), *(&off_222938C + a2));
  switch ( (uchar)result )
  {
    case 0:
      Function_2228a68(*(uint *)(v2 + 8328), *(uchar *)(*(uint *)v2 + 17));
      *(uchar *)(v2 + 8332) = 0;
      result = (uchar *)(*(uint *)v2 + 52);
      *result = 0;
      break;
    case 1:
      Function_2228a68(*(uint *)(v2 + 8328), *(uchar *)(v2 + 8332));
      result = (uchar *)(*(uint *)v2 + 52);
      *result = 0;
      break;
    case 3:
    case 4:
      result = (uchar *)Function_2228a68(*(uint *)(v2 + 8328), *(uchar *)(*(uint *)v2 + 52));
      break;
    case 6:
    case 8:
      Function_22255ec(v2);
      result = (uchar *)Function_2228a68(*(uint *)(v2 + 8328), *(uchar *)(v2 + 8333));
      break;
    case 7:
    case 9:
      Function_2225614(v2);
      result = (uchar *)Function_2228a68(*(uint *)(v2 + 8328), *(uchar *)(v2 + 8334));
      break;
    default:
      return result;
  }
  return result;
}

//----- (022256E8) --------------------------------------------------------
int __fastcall Function_22256e8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_2228a60(*(uint *)(a1 + 8328), 0);
  Function_2228a90(*(uint *)(v1 + 8328));
  v2 = Function_2228a58(*(uint *)(v1 + 8328));
  return ((int (__fastcall *)(int))dword_226DDE8[0])(v2);
}

//----- (02225710) --------------------------------------------------------
int __fastcall Function_2225710(int a1)
{
  int v1;

  v1 = a1;
  Function_2225af0(a1 + 492);
  Function_2225af0(v1 + 684);
  Function_2225af0(v1 + 876);
  Function_2225af0(v1 + 1068);
  Function_2225af0(v1 + 1260);
  Function_2225af0(v1 + 1452);
  Function_2225af0(v1 + 1644);
  Function_2225af0(v1 + 1836);
  Function_2225af0(v1 + 2028);
  Function_2225af0(v1 + 2158);
  Function_2225af0(v1 + 2288);
  Function_2225af0(v1 + 2418);
  Function_2225af0(v1 + 2548);
  Function_2225af0(v1 + 2598);
  Function_2225af0(v1 + 2648);
  Function_2225af0(v1 + 2698);
  Function_2225af0(v1 + 2748);
  Function_2225af0(v1 + 2798);
  Function_2225af0(v1 + 2848);
  Function_2225af0(v1 + 2898);
  Function_2225af0(v1 + 2948);
  Function_2225af0(v1 + 2998);
  Function_2225af0(v1 + 3048);
  Function_2225af0(v1 + 3098);
  Function_2225af0(v1 + 6976);
  Function_2225af0(v1 + 7236);
  Function_2225af0(v1 + 7496);
  Function_2225af0(v1 + 7756);
  Function_2225af0(v1 + 7828);
  Function_2225af0(v1 + 7900);
  Function_2225af0(v1 + 7972);
  Function_2225af0(v1 + 7992);
  return Function_2225af0(v1 + 8012);
}

//----- (02225A3C) --------------------------------------------------------
int __fastcall Function_2225a3c(int a1)
{
  int v1;

  v1 = a1;
  Function_2225af0(a1 + 3148);
  Function_2225af0(v1 + 4168);
  Function_2225af0(v1 + 5188);
  Function_2225af0(v1 + 6208);
  Function_2225af0(v1 + 6400);
  Function_2225af0(v1 + 6592);
  return Function_2225af0(v1 + 6784);
}

//----- (02225AF0) --------------------------------------------------------
char *__fastcall Function_2225af0(int a1, int a2, int a3, int a4, uchar a5, uchar a6)
{
  char *result;
  int v7;
  int v8;
  int i;
  int v10;
  char v11;

  v10 = a1;
  result = &v11;
  v7 = 0;
  if ( (int)a6 > 0 )
  {
    v8 = a2 + 2 * a3;
    do
    {
      for ( i = 0; i < a5; i = (i + 1) & 0xFFFF )
        *(ushort *)(v10 + 2 * v7 * a5 + 2 * i) = *(ushort *)(v8 + ((a4 + v7) << 6) + 2 * i);
      v7 = (v7 + 1) & 0xFFFF;
      result = (char *)a6;
    }
    while ( v7 < a6 );
  }
  return result;
}

//----- (02225B40) --------------------------------------------------------
int __fastcall Function_2225b40(int a1, char a2, int a3, int a4)
{
  int result;

  switch ( a2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      if ( a4 )
        result = a1 + 1260 + 192 * a3;
      else
        result = a1 + 492 + 192 * a3;
      break;
    case 6:
      result = a1 + 2948 + 50 * a3;
      break;
    case 7:
      result = a1 + 3148 + 1020 * a3;
      break;
    case 8:
    case 9:
    case 10:
    case 11:
      result = a1 + 2028 + 130 * a3;
      break;
    case 12:
      result = a1 + 2548 + 50 * a3;
      break;
    case 13:
      result = a1 + 2748 + 50 * a3;
      break;
    case 14:
    case 15:
    case 16:
    case 17:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
      result = a1 + 6208 + 192 * a3;
      break;
    case 18:
      result = a1 + 7756 + 72 * a3;
      break;
    case 28:
    case 29:
      result = a1 + 6976 + 260 * a3;
      break;
    case 30:
    case 31:
    case 32:
    case 33:
      result = a1 + 7972 + 20 * a3;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02225C4C) --------------------------------------------------------
uchar *__fastcall Function_2225c4c(int a1, uchar *a2, int a3, int a4, uchar a5)
{
  int v5;
  uchar *v6;
  char *v7;
  int v8;
  uchar *result;
  int i;

  v5 = a3;
  v6 = a2;
  v7 = (char *)Function_2225b40(a1, a3, a4, a5);
  v8 = BYTE2(dword_2229924[v5]) * HIBYTE(dword_2229924[v5]);
  result = memcpy(v6, v7, 2 * v8);
  if ( v5 > 5 )
  {
    if ( v5 == 27 )
    {
      for ( i = 0; i < v8; i = (i + 1) & 0xFF )
      {
        *(ushort *)&v6[2 * i] = *(ushort *)&v6[2 * i] & 0xFFF | 0xA000;
        result = (uchar *)((i + 1) << 24);
      }
    }
  }
  else if ( v5 >= 0 )
  {
    JUMPOUT(__CS__, (char *)&loc_2225C90 + *((short *)&off_2225C8E + v5));
  }
  return result;
}

//----- (02225D8C) --------------------------------------------------------
uint __fastcall Function_2225d8c(int a1, int a2, int a3, uchar a4)
{
  int v4;
  int v5;
  uchar v6;
  int v7;
  int v8;
  int v9;
  uchar v10;
  uchar *v11;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = a1;
  v8 = a2;
  v9 = HIBYTE(dword_2229924[a2]);
  v10 = BYTE2(dword_2229924[a2]);
  v11 = (uchar *)malloc(*(uint *)(*(uint *)a1 + 12), 2 * BYTE2(dword_2229924[a2]) * v9);
  Function_2225c4c(v7, v11, v4, v5, v6);
  Function_20198c0(*(uint *)(v7 + 484), 6, (int)v11, LOBYTE(dword_2229924[v8]), BYTE1(dword_2229924[v8]), v10, v9);
  Function_201c3c0(*(uint *)(v7 + 484), 6);
  return free((int)v11);
}

//----- (02225E08) --------------------------------------------------------
int __fastcall Function_2225e08(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int result;
  int v6;
  uint v7;
  int v8;
  int v9;

  v4 = a1;
  result = (int)&off_222989C;
  v6 = (int)*(&off_222989C + a2);
  if ( v6 )
  {
    if ( a2 > 5 )
    {
      result = *((uchar *)dword_222987C + a3);
      v9 = *((uchar *)dword_222987C + a3);
    }
    else
    {
      result = *((uchar *)&dword_222988C + a3);
      v9 = *((uchar *)&dword_222988C + a3);
    }
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v3 = 0;
      }
      else if ( a3 == 2 )
      {
        v3 = 1;
      }
    }
    else
    {
      v3 = 1;
    }
    if ( a2 < 0xE || a2 > 0x11 )
    {
      v7 = 0;
      do
      {
        v8 = *(uchar *)(v6 + v7);
        if ( v8 == 255 )
          break;
        Function_201c04c(*(uint *)(v4 + 8304) + 16 * v8, v3, v9, 0);
        Function_201a9a4(*(uint *)(v4 + 8304) + 16 * *(uchar *)(v6 + v7));
        result = (v7 + 1) << 16;
        v7 = (v7 + 1) & 0xFFFF;
      }
      while ( v7 < 8 );
    }
    else
    {
      Function_201c04c(
        *(uint *)(v4 + 8304) + 16 * *(uchar *)(v6 + *(uchar *)(v4 + 8309)),
        v3,
        v9,
        0);
      result = Function_201a9a4(*(uint *)(v4 + 8304) + 16 * *(uchar *)(v6 + *(uchar *)(v4 + 8309)));
    }
  }
  return result;
}

//----- (02225EB8) --------------------------------------------------------
int __fastcall Function_2225eb8(int result, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = result;
  switch ( (uchar)result )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      v5 = *((short *)&dword_2229890[1] + a3 + 1);
      Function_200d5dc(*(uint ***)(result + 4 * (a2 + 13) + 8120), 0, v5);
      Function_200d5dc(*(uint ***)(v4 + 4 * v3 + 8120), 0, v5);
      result = Function_200d5dc(*(uint ***)(v4 + 4 * (v3 + 7) + 8120), 0, v5);
      break;
    case 7:
      v6 = *((short *)dword_2229890 + a3);
      Function_200d5dc(*(uint ***)(result + 4 * *(uchar *)(*(uint *)result + 17) + 8120), 0, v6);
      result = Function_200d5dc(*(uint ***)(v4 + 4 * (*(uchar *)(*(uint *)v4 + 17) + 7) + 8120), 0, v6);
      break;
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
      result = Function_200d5dc(*(uint ***)(result + 4 * (a2 + 7) + 8120), 0, *((short *)dword_2229890 + a3));
      break;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
      result = Function_200d5dc(*(uint ***)(result + 4 * (a2 + 2) + 8120), 0, *((short *)dword_2229890 + a3));
      break;
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
      result = Function_200d5dc(*(uint ***)(result + 4 * (a2 - 2) + 8120), 0, *((short *)dword_2229890 + a3));
      break;
    default:
      return result;
  }
  return result;
}

//----- (02225FCC) --------------------------------------------------------
int __fastcall Function_2225fcc(int a1, uint a2)
{
  uchar *v2;
  char v3;
  int result;

  v2 = (uchar *)a1;
  v3 = a2;
  *(uchar *)(a1 + 8099) &= 0x8Fu;
  if ( a2 <= 5 && Function_22213f0(a1, a2) == 2 )
    v2[8099] = v2[8099] & 0x8F | 0x10;
  v2[8096] = 0;
  v2[8097] = 0;
  v2[8098] = v3;
  result = 8099;
  v2[8099] |= 0x80u;
  return result;
}

//----- (0222601C) --------------------------------------------------------
uchar *__fastcall Function_222601c(uchar *result)
{
  uchar *v1;
  int v2;

  v1 = result;
  if ( result[8099] & 0x80 )
  {
    v2 = result[8096];
    if ( result[8096] )
    {
      if ( v2 == 1 )
      {
        Function_2225d8c((int)result, result[8098], 2, (uint)result[8099] << 25 >> 29);
        Function_2225e08((int)v1, v1[8098], 2);
        Function_2225eb8((int)v1, v1[8098], 2);
        v1[8097] = 0;
        result = (uchar *)8096;
        v1[8096] = 2;
      }
      else if ( v2 == 2 )
      {
        Function_2225d8c((int)result, result[8098], 0, (uint)result[8099] << 25 >> 29);
        Function_2225e08((int)v1, v1[8098], 0);
        Function_2225eb8((int)v1, v1[8098], 0);
        v1[8097] = 0;
        result = (uchar *)8099;
        v1[8099] &= 0x7Fu;
      }
    }
    else
    {
      Function_2225d8c((int)result, result[8098], 1, (uint)result[8099] << 25 >> 29);
      Function_2225e08((int)v1, v1[8098], 1);
      Function_2225eb8((int)v1, v1[8098], 1);
      v1[8097] = 0;
      result = (uchar *)8096;
      v1[8096] = 1;
    }
  }
  return result;
}

//----- (022260EC) --------------------------------------------------------
int __fastcall Function_22260ec(int result, uint a2)
{
  uchar *v2;
  uint v3;
  int v4;
  uint v5;
  uint v6;
  uint v7;

  v2 = (uchar *)result;
  if ( a2 <= 9 )
    JUMPOUT(__CS__, *((short *)&off_2226102 + a2) + 35807492);
  switch ( (uchar)a2 )
  {
    case 0:
      v3 = 0;
      do
      {
        v4 = Function_22213f0((int)v2, v3);
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            Function_2225d8c((int)v2, (uchar)v3, 0, 0);
          }
          else if ( v4 == 2 )
          {
            Function_2225d8c((int)v2, (uchar)v3, 0, 1u);
          }
        }
        else
        {
          Function_2225d8c((int)v2, (uchar)v3, 3, 1u);
        }
        v3 = (v3 + 1) & 0xFFFF;
      }
      while ( v3 < 6 );
      if ( *(uchar *)(*(uint *)v2 + 53) == 1 )
        result = Function_2225d8c((int)v2, 6, 3, 0);
      else
        result = Function_2225d8c((int)v2, 6, 0, 0);
      break;
    case 1:
      Function_2225d8c(result, 6, 0, 0);
      Function_2225d8c((int)v2, 7, 0, 0);
      if ( v2[80 * *(uchar *)(*(uint *)v2 + 17) + 27] & 0x80 )
      {
        Function_2225d8c((int)v2, 8, 3, 0);
        result = Function_2225d8c((int)v2, 10, 3, 0);
      }
      else
      {
        Function_2225d8c((int)v2, 8, 0, 0);
        result = Function_2225d8c((int)v2, 10, 0, 0);
      }
      break;
    case 2:
      if ( Function_2226484() == 1 )
      {
        Function_2225d8c((int)v2, 12, 0, 0);
        Function_2225d8c((int)v2, 13, 0, 0);
      }
      else
      {
        Function_2225d8c((int)v2, 12, 3, 0);
        Function_2225d8c((int)v2, 13, 3, 0);
      }
      Function_2225d8c((int)v2, 11, 0, 0);
      result = Function_2225d8c((int)v2, 6, 0, 0);
      break;
    case 3:
      if ( Function_2226484() == 1 )
      {
        Function_2225d8c((int)v2, 12, 0, 0);
        Function_2225d8c((int)v2, 13, 0, 0);
      }
      else
      {
        Function_2225d8c((int)v2, 12, 3, 0);
        Function_2225d8c((int)v2, 13, 3, 0);
      }
      v5 = 0;
      do
      {
        if ( *(ushort *)&v2[80 * *(uchar *)(*(uint *)v2 + 17) + 52 + 8 * v5] )
          Function_2225d8c((int)v2, (v5 + 14) & 0xFF, 0, 0);
        else
          Function_2225d8c((int)v2, (v5 + 14) & 0xFF, 3, 0);
        v5 = (v5 + 1) & 0xFFFF;
      }
      while ( v5 < 4 );
      Function_2225d8c((int)v2, 9, 0, 0);
      result = Function_2225d8c((int)v2, 6, 0, 0);
      break;
    case 4:
      Function_2225d8c(result, 6, 0, 0);
      v6 = 0;
      do
      {
        if ( *(uchar *)(*(uint *)v2 + 52) == v6 )
          Function_2225d8c((int)v2, (v6 + 30) & 0xFF, 2, 0);
        else
          Function_2225d8c((int)v2, (v6 + 30) & 0xFF, 0, 0);
        result = (v6 + 1) << 16;
        v6 = (v6 + 1) & 0xFFFF;
      }
      while ( v6 < 4 );
      break;
    case 5:
      v7 = 0;
      do
      {
        if ( *(ushort *)&v2[80 * *(uchar *)(*(uint *)v2 + 17) + 52 + 8 * v7] )
          Function_2225d8c((int)v2, (v7 + 19) & 0xFF, 0, 0);
        else
          Function_2225d8c((int)v2, (v7 + 19) & 0xFF, 3, 0);
        v7 = (v7 + 1) & 0xFFFF;
      }
      while ( v7 < 4 );
      result = Function_2225d8c((int)v2, 6, 0, 0);
      break;
    case 6:
    case 8:
      Function_2225d8c(result, 23, 0, 0);
      Function_2225d8c((int)v2, 24, 0, 0);
      Function_2225d8c((int)v2, 25, 0, 0);
      Function_2225d8c((int)v2, 26, 0, 0);
      Function_2225d8c((int)v2, 27, 0, 0);
      Function_2225d8c((int)v2, 6, 0, 0);
      result = (uint)v2[8311] << 24 >> 28;
      if ( result == 1 )
        result = Function_2225d8c((int)v2, 18, 0, 0);
      break;
    case 7:
      Function_2225d8c(result, 28, 0, 0);
      Function_2225d8c((int)v2, 6, 0, 0);
      result = (uint)v2[8311] << 24 >> 28;
      if ( result == 1 )
        result = Function_2225d8c((int)v2, 18, 0, 0);
      break;
    case 9:
      Function_2225d8c(result, 29, 0, 0);
      Function_2225d8c((int)v2, 6, 0, 0);
      result = (uint)v2[8311] << 24 >> 28;
      if ( result == 1 )
        result = Function_2225d8c((int)v2, 18, 0, 0);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02226444) --------------------------------------------------------
int __fastcall Function_2226444(int a1, int a2)
{
  int result;

  if ( a2 == 3 )
    result = Function_2002fbc(*(uint *)(a1 + 488), a1 + 8064, 1, 192, 0x20u);
  else
    result = Function_2002fbc(*(uint *)(a1 + 488), a1 + 8032, 1, 192, 0x20u);
  return result;
}

//----- (02226484) --------------------------------------------------------
BOOL __fastcall Function_2226484(int a1)
{
  uint v1;
  uint v2;
  int v3;

  v1 = 0;
  v2 = 0;
  do
  {
    v3 = a1 + 80 * v2;
    if ( *(ushort *)(v3 + 8) && !(*(uchar *)(v3 + 27) & 0x80) )
      v1 = (v1 + 1) & 0xFFFF;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 < 6 );
  return v1 >= 2;
}

//----- (022264C4) --------------------------------------------------------
uint __fastcall Function_22264c4(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  if ( Function_22213f0(a1, *(uchar *)(*(uint *)a1 + 17)) == 2 )
    result = Function_2225d8c(v1, *(uchar *)(*(uint *)v1 + 17), 0, 1u);
  else
    result = Function_2225d8c(v1, *(uchar *)(*(uint *)v1 + 17), 0, 0);
  return result;
}

//----- (022264F4) --------------------------------------------------------
int __fastcall Function_22264f4(uint *a1)
{
  uint *v1;
  uint *v2;
  int *v3;
  int v4;
  uint v5;
  int result;

  v1 = a1;
  v2 = Function_200679c((int)Function_2226590, 4444, 0x64u, a1[3]);
  v3 = (int *)Function_201ced0((int)v2);
  Call_FillMemWithValue(v3, 0, 0x115Cu);
  *v3 = (int)v1;
  v3[1] = ((int (__fastcall *)(uint))dword_223DF00[0])(*v1);
  v3[2] = ((int (__fastcall *)(uint))dword_223E064[0])(*v1);
  *((uchar *)v3 + 4426) = 0;
  v4 = ((int (__fastcall *)(uint))dword_223E1B0[0])(*v1);
  v5 = 0;
  do
  {
    Function_207d9d8(v4, v5, (uchar *)(*v3 + 39 + v5), (uchar *)(*v3 + 44 + v5));
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 5 );
  *(ushort *)(*v3 + 32) = Function_207d9e4(v4);
  *(uchar *)(*v3 + 31) = Function_207d9e8(v4);
  Function_2227a4c(v3);
  result = ((int (__fastcall *)(uint))dword_223DF0C)(*(uint *)*v3);
  if ( result & 0x400 )
  {
    result = *v3;
    *(uint *)(*v3 + 20) = 1;
  }
  return result;
}

//----- (02226590) --------------------------------------------------------
int __fastcall Function_2226590(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  switch ( *(uchar *)(a2 + 4426) )
  {
    case 0:
      *(uchar *)(a2 + 4426) = Function_222668c(a2);
      goto LABEL_17;
    case 1:
      *(uchar *)(a2 + 4426) = Function_2226760(a2);
      goto LABEL_17;
    case 2:
      *(uchar *)(a2 + 4426) = Function_2226838(a2);
      goto LABEL_17;
    case 3:
      *(uchar *)(a2 + 4426) = Function_22269c0(a2);
      goto LABEL_17;
    case 4:
      *(uchar *)(a2 + 4426) = Function_2226c48(a2);
      goto LABEL_17;
    case 5:
      *(uchar *)(a2 + 4426) = Function_2226c54(a2);
      goto LABEL_17;
    case 6:
      *(uchar *)(a2 + 4426) = Function_2226c60(a2);
      goto LABEL_17;
    case 7:
      *(uchar *)(a2 + 4426) = Function_2226948(a2);
      goto LABEL_17;
    case 8:
      *(uchar *)(a2 + 4426) = Function_2226c6c(a2);
      goto LABEL_17;
    case 9:
      *(uchar *)(a2 + 4426) = Function_2226c7c(a2);
      goto LABEL_17;
    case 0xA:
      *(uchar *)(a2 + 4426) = Function_2226c94(a2);
      goto LABEL_17;
    case 0xB:
      *(uchar *)(a2 + 4426) = Function_2226cbc(a2);
      goto LABEL_17;
    case 0xC:
      *(uchar *)(a2 + 4426) = Function_2226d94(a2);
      goto LABEL_17;
    case 0xD:
      *(uchar *)(a2 + 4426) = Function_2226cd4(a2);
      goto LABEL_17;
    case 0xE:
      result = Function_2226cfc();
      if ( result != 1 )
        goto LABEL_17;
      break;
    default:
LABEL_17:
      Function_2228848(v2);
      result = Function_200c7ec(*(int **)(v2 + 780));
      break;
  }
  return result;
}

//----- (0222668C) --------------------------------------------------------
int __fastcall Function_222668c(uint *a1)
{
  uint *v1;
  int v2;
  int result;

  v1 = a1;
  REG_BLDCNT_SUB = 0;
  a1[13] = Function_2228a38(*(uint *)(*a1 + 12));
  Function_2226ed0(v1);
  Function_2226fc4(v1);
  Function_22270b8(v1);
  Function_2002bb8(2, *(uint *)(*v1 + 12));
  v2 = ((int (__fastcall *)(uint))dword_223E1B0[0])(*(uint *)*v1);
  *((uchar *)v1 + 4429) = Function_207d9ec(v2);
  Function_2227ac8(v1);
  Function_2228924(v1, *((uchar *)v1 + 4428));
  Function_2227288(v1);
  Function_2227350(v1, *((uchar *)v1 + 4428));
  Function_2227bdc(v1);
  Function_2227e68(v1, *((uchar *)v1 + 4428));
  if ( *(uchar *)(*v1 + 37) )
    Function_2228a60(v1[13], 1);
  Function_2228008(v1, *((uchar *)v1 + 4428));
  Function_22280f0(v1, *((uchar *)v1 + 4428));
  Function_2003178(v1[2], 10, 0xFFFF, -8, 16, 0, 0);
  if ( *(uint *)(*v1 + 20) == 1 )
    result = 12;
  else
    result = 1;
  return result;
}

//----- (02226760) --------------------------------------------------------
int __fastcall Function_2226760(int a1)
{
  uchar *v1;
  int result;
  int v3;
  char v4;

  v1 = (uchar *)a1;
  if ( Function_200384c(*(uint *)(a1 + 8)) )
    return 1;
  v3 = Function_2227238(v1, dword_2229A1C);
  if ( v3 == -1 )
  {
    v3 = Function_2228b64(*((uint *)v1 + 13));
    v4 = -2;
    if ( v3 == -2 )
      LOBYTE(v3) = 5;
  }
  else
  {
    v4 = Function_2228050(v1);
  }
  switch ( v4 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      Function_2005748(0x5DDu);
      v1[4429] = v3;
      v1[4427] = 5;
      Function_222880c(v1, (uchar)v3);
      result = 11;
      break;
    case 4:
      if ( !*(ushort *)(*(uint *)v1 + 32) )
        goto LABEL_12;
      Function_2005748(0x5DDu);
      v1[4429] = *(uchar *)(*(uint *)v1 + 31);
      v1[4427] = 6;
      Function_2227a7c(v1);
      Function_222880c(v1, 4);
      result = 11;
      break;
    case 5:
      Function_2005748(0x5DDu);
      *(ushort *)(*(uint *)v1 + 28) = 0;
      *(uchar *)(*(uint *)v1 + 30) = 4;
      Function_222880c(v1, 5);
      result = 13;
      break;
    default:
LABEL_12:
      result = 1;
      break;
  }
  return result;
}

//----- (02226838) --------------------------------------------------------
int __fastcall Function_2226838(int a1)
{
  int v1;
  int v2;
  char v3;
  int result;

  v1 = a1;
  v2 = Function_2227238(a1, dword_2229A38);
  if ( v2 == -1 )
  {
    v2 = Function_2228b64(*(uint *)(v1 + 52));
    v3 = -2;
    if ( v2 == -2 )
      v2 = 8;
  }
  else
  {
    v3 = Function_2228050(v1);
  }
  switch ( v3 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      if ( !Function_2227ba8(v1, v2) )
        goto LABEL_13;
      Function_2005748(0x5DDu);
      *(uchar *)(*(uint *)v1 + *(uchar *)(v1 + 4429) + 39) = v2;
      *(uchar *)(v1 + 4427) = 6;
      Function_222880c(v1, (v2 + 6) & 0xFF);
      result = 11;
      break;
    case 6:
      if ( !*(uchar *)(v1 + *(uchar *)(v1 + 4429) + 4436) )
        goto LABEL_13;
      Function_2005748(0x5DDu);
      *(uchar *)(v1 + 4427) = 7;
      *(uchar *)(v1 + 4430) = -1;
      Function_222880c(v1, 12);
      result = 11;
      break;
    case 7:
      if ( !*(uchar *)(v1 + *(uchar *)(v1 + 4429) + 4436) )
        goto LABEL_13;
      Function_2005748(0x5DDu);
      *(uchar *)(v1 + 4427) = 7;
      *(uchar *)(v1 + 4430) = 1;
      Function_222880c(v1, 13);
      result = 11;
      break;
    case 8:
      Function_2005748(0x5DDu);
      *(uchar *)(v1 + 4427) = 4;
      Function_222880c(v1, 14);
      result = 11;
      break;
    default:
LABEL_13:
      result = 2;
      break;
  }
  return result;
}

//----- (02226948) --------------------------------------------------------
int __fastcall Function_2226948(int *a1)
{
  int *v1;
  int v2;
  char v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = *v1 + *((uchar *)v1 + 4429);
  v3 = *(uchar *)(v2 + 44);
  *(uchar *)(v2 + 39) = 0;
  v4 = (char)(v3 + *((uchar *)a1 + 4430));
  v5 = *((uchar *)a1 + 4429);
  v6 = *((uchar *)a1 + v5 + 4436);
  if ( v4 <= v6 )
  {
    v7 = *a1;
    if ( v4 >= 0 )
      *(uchar *)(v7 + v5 + 44) = v4;
    else
      *(uchar *)(v7 + v5 + 44) = v6;
  }
  else
  {
    *(uchar *)(*a1 + v5 + 44) = 0;
  }
  Function_2227650(v1);
  Function_2227698(v1);
  Function_2227e68(v1, *((uchar *)v1 + 4428));
  Function_2228924(v1, *((uchar *)v1 + 4428));
  return 2;
}

//----- (022269C0) --------------------------------------------------------
int __fastcall Function_22269c0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_2227238(a1, dword_22299AC);
  if ( v2 == -1 )
  {
    v2 = Function_2228b64(*(uint *)(v1 + 52));
    if ( v2 == -2 )
      v2 = 1;
  }
  else
  {
    Function_2228050(v1);
  }
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_2005748(0x5DDu);
      *(uchar *)(v1 + 4427) = 5;
      Function_222880c(v1, 16);
      result = 11;
    }
    else
    {
      result = 3;
    }
  }
  else
  {
    Function_2005748(0x5DDu);
    *(ushort *)(*(uint *)v1 + 28) = Function_2227ba8(
                                       v1,
                                       *(uchar *)(*(uint *)v1 + *(uchar *)(v1 + 4429) + 39));
    *(uchar *)(*(uint *)v1 + 30) = *(uchar *)(v1 + 4429);
    Function_222880c(v1, 15);
    result = Function_2226a5c(v1);
  }
  return result;
}

//----- (02226A5C) --------------------------------------------------------
int __fastcall Function_2226a5c(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int result;
  int v10;
  ushort **v11;
  ushort *v12;
  int v13;
  int v14;
  int v15;
  uint *v16;

  v1 = a1;
  v2 = *(uchar *)(a1 + 4429);
  v3 = *(uint **)a1;
  if ( v2 == 3 )
  {
    v4 = Function_2227244();
    v5 = GetItemData(*((ushort *)v3 + 14), 7u, v3[3]);
    if ( v3[6] && *((ushort *)v3 + 14) != 55 && v5 != 3 )
    {
      ((void (__fastcall *)(uint, uint, int))dword_223DFAC[0])(*v3, v3[4], v4);
      v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 16), 0x2Eu);
      Function_2076b10_Dummy();
      Function_200b5cc(*(int **)(v1 + 20), 0, v7);
      Function_200b630(*(uint *)(v1 + 20), 1u, 0x175u);
      Function_200c388(*(uint **)(v1 + 20), *(uint *)(v1 + 24), (int)v6);
      Function_20237bc_FreeMsg((int)v6, v8);
      Function_22279f4(v1);
      *(uchar *)(v1 + 4427) = 8;
      result = 9;
    }
    else
    {
      v10 = *((ushort *)v3 + 14);
      if ( ((int (__fastcall *)(uint, uint, int, uint))dword_223E30C[0])(*v3, v3[4], v4, 0) == 1 )
      {
        Function_2227260(*v3, *((ushort *)v3 + 14), *(uchar *)(v1 + 4429), v3[3]);
        result = 13;
      }
      else if ( v5 == 3 )
      {
        if ( ((int (__fastcall *)(uint))dword_223DF0C)(*v3) & 1 )
        {
          v11 = (ushort **)LoadFromMsgNARC(1, 26, 213, v3[3]);
          v12 = Function_200b1ec_CallMsgDecrypt(v11, 0x24u);
          v13 = v3[1];
          Function_200b498(*(uint *)(v1 + 20), 0);
          Function_200c388(*(uint **)(v1 + 20), *(uint *)(v1 + 24), (int)v12);
          Function_20237bc_FreeMsg((int)v12, v14);
          Function_200b190((ushort *)v11);
          Function_22279f4(v1);
          *(uchar *)(v1 + 4427) = 8;
          result = 9;
        }
        else
        {
          Function_2227260(*v3, *((ushort *)v3 + 14), *(uchar *)(v1 + 4429), v3[3]);
          result = 13;
        }
      }
      else
      {
        Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 16), 0x22u, *(ushort **)(v1 + 24));
        Function_22279f4(v1);
        *(uchar *)(v1 + 4427) = 8;
        result = 9;
      }
    }
  }
  else
  {
    if ( v2 != 2 )
      goto LABEL_27;
    if ( *((uchar *)v3 + 34) == 1 )
    {
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 16), 0x2Cu, *(ushort **)(a1 + 24));
      Function_22279f4(v1);
      *(uchar *)(v1 + 4427) = 8;
      return 9;
    }
    if ( *((uchar *)v3 + 35) == 1 )
    {
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 16), 0x2Fu, *(ushort **)(a1 + 24));
      Function_22279f4(v1);
      *(uchar *)(v1 + 4427) = 8;
      return 9;
    }
    if ( *((uchar *)v3 + 36) == 1 )
    {
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 16), 0x30u, *(ushort **)(a1 + 24));
      Function_22279f4(v1);
      *(uchar *)(v1 + 4427) = 8;
      return 9;
    }
    v15 = ((int (__fastcall *)(uint, uint))dword_223DF20[0])(*v3, v3[4]);
    v16 = (uint *)((int (__fastcall *)(uint))dword_223E228[0])(*v3);
    if ( GetNrOfPkmnInParty(v15) != 6 || Function_20799a0(v16) != 18 )
    {
LABEL_27:
      result = 13;
    }
    else
    {
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 16), 0x2Du, *(ushort **)(v1 + 24));
      Function_22279f4(v1);
      *(uchar *)(v1 + 4427) = 8;
      result = 9;
    }
  }
  return result;
}

//----- (02226C48) --------------------------------------------------------
int __fastcall Function_2226c48(int a1)
{
  Function_22271d0(a1, 0);
  return 1;
}

//----- (02226C54) --------------------------------------------------------
int __fastcall Function_2226c54(int a1)
{
  Function_22271d0(a1, 1);
  return 2;
}

//----- (02226C60) --------------------------------------------------------
int __fastcall Function_2226c60(int a1)
{
  Function_22271d0(a1, 2);
  return 3;
}

//----- (02226C6C) --------------------------------------------------------
int __fastcall Function_2226c6c(int a1)
{
  Function_200e084(a1 + 28, 0);
  return 3;
}

//----- (02226C7C) --------------------------------------------------------
int __fastcall Function_2226c7c(int a1)
{
  int result;

  if ( Function_201d724(*(uchar *)(a1 + 50)) )
    result = 9;
  else
    result = 10;
  return result;
}

//----- (02226C94) --------------------------------------------------------
int __fastcall Function_2226c94(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( dword_21BF6C4 & 3 || Function_2022798() == 1 )
    result = *(uchar *)(v1 + 4427);
  else
    result = 10;
  return result;
}

//----- (02226CBC) --------------------------------------------------------
int __fastcall Function_2226cbc(int a1)
{
  int result;

  if ( *(uchar *)(a1 + 4414) == 2 )
    result = *(uchar *)(a1 + 4427);
  else
    result = 11;
  return result;
}

//----- (02226CD4) --------------------------------------------------------
int __fastcall Function_2226cd4(int a1)
{
  Function_2003178(*(uint *)(a1 + 8), 10, 0xFFFF, -8, 0, 16, 0);
  return 14;
}

//----- (02226CFC) --------------------------------------------------------
int __fastcall Function_2226cfc(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v5;
  uint v6;

  v2 = a2;
  v3 = a1;
  if ( Function_200384c(a2[2]) )
    return 0;
  Function_2227e08(v2);
  Function_2227334(v2);
  Function_22270f8(v2);
  Function_2226f9c(v2[1]);
  *(uchar *)(*v2 + 37) = Function_2228a5c(v2[13]);
  Function_2228a50(v2[13]);
  Function_2002c60(2);
  if ( *(ushort *)(*v2 + 28) )
  {
    v5 = ((int (__fastcall *)(uint))dword_223E1B0[0])(*(uint *)*v2);
    v6 = 0;
    do
    {
      Function_207d9f0(v5, v6, *(uchar *)(*v2 + v6 + 39), *(uchar *)(*v2 + v6 + 44));
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 < 5 );
    Function_207da24(v5, *((uchar *)v2 + 4429));
  }
  *(uchar *)(*v2 + 38) = 1;
  Function_20067d0(v3);
  return 1;
}

//----- (02226D94) --------------------------------------------------------
int __fastcall Function_2226d94(int a1)
{
  int v1;
  int result;
  uint v3;

  v1 = a1;
  if ( Function_200384c(*(uint *)(a1 + 8)) )
    return 12;
  v3 = *(uchar *)(v1 + 4441);
  if ( v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2226DBC + v3) + 35810750);
  switch ( (uchar)v3 )
  {
    case 0:
      if ( ((int (__fastcall *)(uint))dword_226DFD4[0])(*(uint *)(v1 + 56)) != 1 )
      {
        ++*(uchar *)(v1 + 4442);
        goto LABEL_17;
      }
      Function_2005748(0x5DDu);
      *(uchar *)(v1 + 4429) = 2;
      *(uchar *)(v1 + 4427) = 12;
      Function_222880c(v1, 2);
      *(uchar *)(v1 + 4442) = 0;
      ++*(uchar *)(v1 + 4441);
      return 11;
    case 1:
      Function_2226c54(v1);
      ++*(uchar *)(v1 + 4441);
      goto LABEL_17;
    case 2:
      if ( ((int (__fastcall *)(uint))dword_226DFD4[0])(*(uint *)(v1 + 56)) == 1 )
      {
        Function_2005748(0x5DDu);
        *(uchar *)(*(uint *)v1 + *(uchar *)(v1 + 4429) + 39) = 0;
        *(uchar *)(v1 + 4427) = 12;
        Function_222880c(v1, 6);
        *(uchar *)(v1 + 4442) = 0;
        ++*(uchar *)(v1 + 4441);
        return 11;
      }
      ++*(uchar *)(v1 + 4442);
      goto LABEL_17;
    case 3:
      Function_2226c60(v1);
      ++*(uchar *)(v1 + 4441);
      goto LABEL_17;
    case 4:
      if ( ((int (__fastcall *)(uint))dword_226DFD4[0])(*(uint *)(v1 + 56)) == 1 )
      {
        Function_2005748(0x5DDu);
        *(ushort *)(*(uint *)v1 + 28) = Function_2227ba8(
                                           v1,
                                           *(uchar *)(*(uint *)v1 + *(uchar *)(v1 + 4429) + 39));
        *(uchar *)(*(uint *)v1 + 30) = *(uchar *)(v1 + 4429);
        Function_222880c(v1, 15);
        result = Function_2226a5c(v1);
      }
      else
      {
        ++*(uchar *)(v1 + 4442);
LABEL_17:
        result = 12;
      }
      break;
    default:
      goto LABEL_17;
  }
  return result;
}

//----- (02226ED0) --------------------------------------------------------
int __fastcall Function_2226ed0(uint **a1)
{
  uint **v1;
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
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v1 = a1;
  v24 = 1;
  v25 = 0;
  v26 = 0;
  v27 = 1;
  Function_20183a0(&v24, 1);
  v17 = 0;
  v18 = 0;
  v19 = 0x2000;
  v20 = 0;
  v21 = 1703940;
  v22 = 769;
  v23 = 0;
  Function_20183c4(v1[1], 6u, &v17, 0);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 69140481;
  v15 = 256;
  v16 = 0;
  Function_20183c4(v1[1], 5u, &v10, 0);
  Function_2019ebc(v1[1], 5u);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 1966081;
  v8 = 0;
  v9 = 0;
  Function_20183c4(v1[1], 4u, &v3, 0);
  Function_2019ebc(v1[1], 4u);
  Function_2019690(5u, 32, 0, (*v1)[3]);
  Function_2019690(4u, 32, 0, (*v1)[3]);
  Function_201c3c0((int)v1[1], 5);
  return Function_201c3c0((int)v1[1], 4);
}

//----- (02226F9C) --------------------------------------------------------
int __fastcall Function_2226f9c(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff74(0x17u, 0);
  Function_2019044(v1, 4);
  Function_2019044(v1, 5);
  return Function_2019044(v1, 6);
}

//----- (02226FC4) --------------------------------------------------------
uint __fastcall Function_2226fc4(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = LoadFromNARC_8(77, *(uint *)(*(uint *)a1 + 12), a3, a4);
  Function_20070e8((int)v5, 2u, *(uint **)(v4 + 4), 6u, 0, 0, 0, *(uint *)(*(uint *)v4 + 12));
  Function_200710c((int)v5, 0, *(uint **)(v4 + 4), 6u, 0, 0, 0, *(uint *)(*(uint *)v4 + 12));
  v6 = Function_2006cb8_LoadFileInMemory((int)v5, 1u, *(uint *)(*(uint *)v4 + 12));
  Function_20a7248(v6, &v12);
  Function_2228128(v4, v12 + 12);
  free(v6);
  Call_FS_CloseFile(v5);
  Function_2003050(*(uint *)(v4 + 8), 77, 3, *(uint *)(*(uint *)v4 + 12), 1, 384, 0);
  Function_2003050(*(uint *)(v4 + 8), 14, 7, *(uint *)(*(uint *)v4 + 12), 1, 32, 0xF0u);
  v7 = ((int (__fastcall *)(uint))dword_223EDE0[0])(**(uint **)v4);
  v8 = v7;
  v9 = Function_200dd04(v7);
  LoadFromNARC_RGCN(38, v9, *(uint **)(v4 + 4), 4u, 994, 0, 0, *(uint *)(*(uint *)v4 + 12));
  v10 = Function_200dd08(v8);
  return Function_2003050(*(uint *)(v4 + 8), 38, v10, *(uint *)(*(uint *)v4 + 12), 1, 32, 0xE0u);
}

//----- (022270B8) --------------------------------------------------------
int __fastcall Function_22270b8(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  a1[4] = LoadFromMsgNARC(0, 26, 2, *(uint *)(*a1 + 12));
  v1[3] = Function_200c440(15, 14, 0, *(uint *)(*v1 + 12));
  v1[5] = Function_200b358(*(uint *)(*v1 + 12));
  result = Function_2023790(512, *(uint *)(*v1 + 12));
  v1[6] = result;
  return result;
}

//----- (022270F8) --------------------------------------------------------
uint __fastcall Function_22270f8(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_200b190(*(ushort **)(a1 + 16));
  Function_200c560(*(int **)(v1 + 12));
  Function_200b3f0(*(uint **)(v1 + 20), v2);
  return Function_20237bc_FreeMsg(*(uint *)(v1 + 24), v3);
}

//----- (02227118) --------------------------------------------------------
int __fastcall Function_2227118(int result, int a2)
{
  int v2;

  v2 = result;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      Function_201c63c(*(uint *)(result + 4), 6, 0, 256);
      result = Function_201c63c(*(uint *)(v2 + 4), 6, 3u, 0);
    }
    else if ( a2 == 2 )
    {
      Function_201c63c(*(uint *)(result + 4), 6, 0, 0);
      result = Function_201c63c(*(uint *)(v2 + 4), 6, 3u, 256);
    }
  }
  else
  {
    Function_201c63c(*(uint *)(result + 4), 6, 0, 0);
    result = Function_201c63c(*(uint *)(v2 + 4), 6, 3u, 0);
  }
  return result;
}

//----- (0222717C) --------------------------------------------------------
int __fastcall Function_222717c(int result, int a2)
{
  int v2;

  v2 = result;
  if ( a2 == 2 )
  {
    Function_2019e2c(*(uint *)(result + 4), 6, 2u, 35, 0x1Cu, 4u, *(uchar *)(result + 4429) + 8);
    result = Function_2019e2c(*(uint *)(v2 + 4), 6, 2u, 40, 0x1Cu, 8u, *(uchar *)(v2 + 4429) + 8);
  }
  return result;
}

//----- (022271D0) --------------------------------------------------------
int __fastcall Function_22271d0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_222717c(a1, a2);
  Function_2227118(v2, v3);
  Function_2019f04(*(uint *)(v2 + 4), 4, 0);
  Function_2019f04(*(uint *)(v2 + 4), 5, 0);
  Function_2227324(v2);
  Function_22272ac(v2, v3);
  Function_2227350(v2, v3);
  Function_2228924(v2, v3);
  Function_2228008(v2, v3);
  Function_22280f0(v2, v3);
  *(uchar *)(v2 + 4428) = v3;
  return Function_2227e68(v2, *(uchar *)(v2 + 4428));
}

//----- (02227238) --------------------------------------------------------
int __fastcall Function_2227238(int a1, uchar *a2)
{
  return Function_2022664(a2);
}

//----- (02227244) --------------------------------------------------------
int __fastcall Function_2227244(uint **a1)
{
  uint **v1;
  uint *v2;
  int v3;

  v1 = a1;
  v2 = *a1;
  v3 = ((int (__fastcall *)(uint))dword_223DF10[0])(**a1);
  return ((int (__fastcall *)(uint, int, int, uint))dword_225B45C[0])(**v1, v3, 2, v2[4]);
}

//----- (02227260) --------------------------------------------------------
int __fastcall Function_2227260(int a1, uint a2, short a3, uint a4)
{
  uint v4;
  uint v5;
  int v6;
  short v7;
  int v8;
  int v9;

  v4 = a2;
  v5 = a4;
  v6 = a1;
  v7 = a3;
  v8 = ((int (*)(void))dword_223E1AC)();
  GiveItem(v8, v4, 1u, v5);
  v9 = ((int (__fastcall *)(int))dword_223E1B0[0])(v6);
  return Function_207da1c(v9, v4, v7);
}

//----- (02227288) --------------------------------------------------------
int __fastcall Function_2227288(int a1)
{
  int v1;

  v1 = a1;
  Function_201a8d4(*(uint **)(a1 + 4), a1 + 28, (uchar *)dword_2229A60);
  return Function_22272ac(v1, *(uchar *)(v1 + 4428));
}

//----- (022272AC) --------------------------------------------------------
uint __fastcall Function_22272ac(int a1, int a2)
{
  int *v2;
  int v3;
  uint result;
  uint v5;

  v3 = a1;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v2 = dword_2229AE0;
      *(uchar *)(a1 + 48) = 26;
    }
    else if ( a2 == 2 )
    {
      v2 = dword_2229A68;
      *(uchar *)(a1 + 48) = 4;
    }
  }
  else
  {
    v2 = dword_2229A88;
    *(uchar *)(a1 + 48) = 5;
  }
  *(uint *)(a1 + 44) = Function_201a778(*(uint *)(*(uint *)a1 + 12), *(uchar *)(a1 + 48));
  result = *(uchar *)(v3 + 48);
  v5 = 0;
  if ( *(uchar *)(v3 + 48) )
  {
    do
    {
      Function_201a8d4(*(uint **)(v3 + 4), *(uint *)(v3 + 44) + 16 * v5, (uchar *)&v2[2 * v5]);
      v5 = (v5 + 1) & 0xFF;
      result = *(uchar *)(v3 + 48);
    }
    while ( v5 < result );
  }
  return result;
}

//----- (02227324) --------------------------------------------------------
uint __fastcall Function_2227324(int a1)
{
  return Function_201a928(*(uint *)(a1 + 44), *(uchar *)(a1 + 48));
}

//----- (02227334) --------------------------------------------------------
uint __fastcall Function_2227334(int a1)
{
  int v1;

  v1 = a1;
  Function_201a928(*(uint *)(a1 + 44), *(uchar *)(a1 + 48));
  return Function_201a8fc(v1 + 28);
}

//----- (02227350) --------------------------------------------------------
int __fastcall Function_2227350(int a1, int a2)
{
  int result;

  switch ( a2 )
  {
    case 0:
      return Function_22273cc();
    case 1:
      return Function_2227888();
    case 2:
      result = Function_2227974();
      break;
  }
  return result;
}

//----- (02227374) --------------------------------------------------------
int __fastcall Function_2227374(int a1, int a2, uint a3, int a4)
{
  int v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;

  v4 = *(uint *)(a1 + 44);
  v5 = 16 * a2;
  v6 = a4;
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 16), a3);
  Function_2002d7c(v6, (int)v7, 0);
  Function_201c294(v4 + v5);
  Function_201d78c(v4 + v5, v6);
  Function_20237bc_FreeMsg((int)v7, v8);
  return Function_201a9a4(v4 + v5);
}

//----- (022273CC) --------------------------------------------------------
int __fastcall Function_22273cc(int a1)
{
  uint v1;
  int v2;
  int v3;
  int result;
  ushort *v5;
  int v6;

  v1 = 0;
  v2 = a1;
  v3 = 0;
  do
  {
    Function_201ada4_ClearTextBox(*(uint *)(v2 + 44) + v3, 0);
    ++v1;
    v3 += 16;
  }
  while ( v1 < 5 );
  Function_2227374(v2, 0, 0, 2);
  Function_2227374(v2, 0, 1u, 2);
  Function_2227374(v2, 1, 2u, 2);
  Function_2227374(v2, 1, 3u, 2);
  Function_2227374(v2, 2, 7u, 2);
  Function_2227374(v2, 3, 6u, 2);
  result = *(ushort *)(*(uint *)v2 + 32);
  if ( *(ushort *)(*(uint *)v2 + 32) )
  {
    v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 16), 8u);
    Function_201d78c(*(uint *)(v2 + 44) + 64, 2);
    Function_20237bc_FreeMsg((int)v5, v6);
    result = Function_201a9a4(*(uint *)(v2 + 44) + 64);
  }
  return result;
}

//----- (022274A8) --------------------------------------------------------
int __fastcall Function_22274a8(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  ushort *v10;
  int v11;
  int v12;
  int v14;

  v5 = a1;
  v6 = *(uint *)(a1 + 44);
  v7 = 16 * a4;
  v8 = a2;
  v14 = a3;
  Function_201ada4_ClearTextBox(v6 + 16 * a4, 0);
  v9 = 4 * v8;
  if ( *(ushort *)(v5 + 144 * *(uchar *)(v5 + 4429) + v9 + 60) )
  {
    v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 16), dword_2229AB0[2 * v14]);
    Function_200b70c(
      *(uint *)(v5 + 20),
      0,
      *(ushort *)(v5 + 144 * *(uchar *)(v5 + 4429) + v9 + 60));
    Function_200c388(*(uint **)(v5 + 20), *(uint *)(v5 + 24), (int)v10);
    Function_2002d7c(a5, *(uint *)(v5 + 24), 0);
    Function_201c294(v6 + v7);
    v11 = *(uint *)(v5 + 24);
    Function_201d78c(v6 + v7, a5);
    Function_20237bc_FreeMsg((int)v10, v12);
  }
  return Function_201a9a4(v6 + v7);
}

//----- (0222754C) --------------------------------------------------------
int __fastcall Function_222754c(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  ushort *v10;
  int v11;
  int v12;
  int v14;

  v5 = a1;
  v6 = *(uint *)(a1 + 44);
  v7 = 16 * a4;
  v8 = a2;
  v14 = a3;
  Function_201ada4_ClearTextBox(v6 + 16 * a4, 0);
  v9 = 4 * v8;
  if ( *(ushort *)(v5 + 144 * *(uchar *)(v5 + 4429) + v9 + 62) )
  {
    v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 16), dword_2229AB4[2 * v14]);
    Function_200b60c(
      *(uint *)(v5 + 20),
      0,
      *(ushort *)(v5 + 144 * *(uchar *)(v5 + 4429) + v9 + 62),
      3,
      0,
      1);
    Function_200c388(*(uint **)(v5 + 20), *(uint *)(v5 + 24), (int)v10);
    v11 = *(uint *)(v5 + 24);
    Function_201d78c(v6 + v7, a5);
    Function_20237bc_FreeMsg((int)v10, v12);
  }
  return Function_201a9a4(v6 + v7);
}

//----- (022275E0) --------------------------------------------------------
int __fastcall Function_22275e0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;

  v2 = a1;
  v3 = a2;
  v7 = 6 * *(uchar *)(*(uint *)a1 + *(uchar *)(a1 + 4429) + 44);
  if ( *(uchar *)(a1 + 49) )
    v4 = 12;
  else
    v4 = 0;
  v5 = 2 * a2;
  Function_22274a8(a1, a2 + v7, a2, v4 + 2 * a2, 2);
  return Function_222754c(v2, v3 + v7, v3, v4 + 1 + v5, 0);
}

//----- (02227650) --------------------------------------------------------
int __fastcall Function_2227650(int a1)
{
  int v1;
  uint v2;
  int v3;
  int result;

  v1 = a1;
  Function_2019cb8(*(uint *)(a1 + 4), 5, 0, 0, 0, 0x20u, 0x13u, 0x11u);
  v2 = 0;
  do
  {
    Function_22275e0(v1, v2);
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 < 6 );
  v3 = *(uchar *)(v1 + 49);
  result = v3 ^ 1;
  *(uchar *)(v1 + 49) = v3 ^ 1;
  return result;
}

//----- (02227698) --------------------------------------------------------
int __fastcall Function_2227698(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  int v10;

  v1 = a1;
  Function_201ada4_ClearTextBox(*(uint *)(a1 + 44) + 400, 0);
  v2 = *(uint *)(v1 + 44);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 16), 0x1Cu);
  Function_2002d7c(0, (int)v3, 0);
  Function_201c294(v2 + 400);
  Function_201d78c(v2 + 400, 0);
  Function_20237bc_FreeMsg((int)v3, v4);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 16), 0x1Du);
  Function_200b60c(
    *(uint *)(v1 + 20),
    0,
    *(uchar *)(v1 + *(uchar *)(v1 + 4429) + 4436) + 1,
    2,
    0,
    1);
  Function_200c388(*(uint **)(v1 + 20), *(uint *)(v1 + 24), (int)v5);
  v6 = *(uint *)(v1 + 24);
  Function_201d78c(v2 + 400, 0);
  Function_20237bc_FreeMsg((int)v5, v7);
  v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 16), 0x1Eu);
  Function_200b60c(
    *(uint *)(v1 + 20),
    0,
    *(uchar *)(*(uint *)v1 + *(uchar *)(v1 + 4429) + 44) + 1,
    2,
    0,
    1);
  Function_200c388(*(uint **)(v1 + 20), *(uint *)(v1 + 24), (int)v8);
  Function_2002d7c(0, *(uint *)(v1 + 24), 0);
  v9 = *(uint *)(v1 + 24);
  Function_201d78c(v2 + 400, 0);
  Function_20237bc_FreeMsg((int)v8, v10);
  return Function_201a9a4(v2 + 400);
}

//----- (022277C8) --------------------------------------------------------
int __fastcall Function_22277c8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201ada4_ClearTextBox(*(uint *)(a1 + 44) + 384, 0);
  result = *(uchar *)(v1 + 4429);
  switch ( (uchar)result )
  {
    case 0:
      Function_2227374(v1, 24, 0x16u, 0);
      result = Function_2227374(v1, 24, 0x17u, 0);
      break;
    case 1:
      Function_2227374(v1, 24, 0x18u, 0);
      result = Function_2227374(v1, 24, 0x19u, 0);
      break;
    case 2:
      result = Function_2227374(v1, 24, 0x1Au, 0);
      break;
    case 3:
      result = Function_2227374(v1, 24, 0x1Bu, 0);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02227888) --------------------------------------------------------
int __fastcall Function_2227888(int a1)
{
  int v1;

  v1 = a1;
  Function_2227650(a1);
  Function_22277c8(v1);
  return Function_2227698(v1);
}

//----- (022278A0) --------------------------------------------------------
int __fastcall Function_22278a0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 44);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 16), 9u);
  Function_200b70c(
    *(uint *)(v2 + 20),
    0,
    *(ushort *)(v2 + 144 * *(uchar *)(v2 + 4429) + 4 * v3 + 60));
  Function_200c388(*(uint **)(v2 + 20), *(uint *)(v2 + 24), (int)v5);
  Function_201ada4_ClearTextBox(v4, 0);
  v6 = *(uint *)(v2 + 24);
  Function_201d78c(v4, 0);
  Function_20237bc_FreeMsg((int)v5, v7);
  return Function_201a9a4(v4);
}

//----- (02227910) --------------------------------------------------------
int __fastcall Function_2227910(uchar *a1, int a2)
{
  uchar *v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = *((uint *)a1 + 11) + 32;
  v5 = (ushort *)Function_2023790(130, *(uint *)(*(uint *)a1 + 12));
  Function_207cfc8(v5, *(ushort *)&v2[144 * v2[4429] + 60 + 4 * v3], *(uint *)(*(uint *)v2 + 12) & 0xFFFF);
  Function_201d78c(v4, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  return Function_201a9a4(v4);
}

//----- (02227974) --------------------------------------------------------
int __fastcall Function_2227974(int a1)
{
  uint v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = 0;
  v2 = a1;
  v3 = 0;
  do
  {
    Function_201ada4_ClearTextBox(*(uint *)(v2 + 44) + v3, 0);
    ++v1;
    v3 += 16;
  }
  while ( v1 < 4 );
  v4 = *(uchar *)(v2 + 4429);
  v5 = *(uchar *)(*(uint *)v2 + v4 + 39);
  v6 = 6 * *(uchar *)(*(uint *)v2 + v4 + 44);
  Function_22278a0(v2, v5 + v6);
  Function_222754c(v2, v5 + v6, 0, 1, 0);
  Function_2227910((uchar *)v2, v5 + v6);
  return Function_2227374(v2, 3, 0x1Fu, 2);
}

//----- (022279F4) --------------------------------------------------------
int __fastcall Function_22279f4(int a1)
{
  int v1;

  v1 = a1;
  Function_200e060(a1 + 28, 1, 994, 0xEu);
  Function_201ada4_ClearTextBox(v1 + 28, 15);
  return Function_2227a1c(v1);
}

//----- (02227A1C) --------------------------------------------------------
int __fastcall Function_2227a1c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_2002ac8(1);
  ((void (__fastcall *)(uint))dword_223EDF0[0])(**(uint **)v1);
  v2 = *(uint *)(v1 + 24);
  result = Function_201d738_CallInitTextInterpreter(v1 + 28, 1);
  *(uchar *)(v1 + 50) = result;
  return result;
}

//----- (02227A4C) --------------------------------------------------------
int __fastcall Function_2227a4c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !*(ushort *)(*(uint *)a1 + 32) )
    return 0;
  if ( CheckItem(
         *(uint *)(*(uint *)a1 + 8),
         *(ushort *)(*(uint *)a1 + 32),
         1u,
         *(uint *)(*(uint *)a1 + 12)) )
  {
    return 1;
  }
  result = 0;
  *(ushort *)(*(uint *)v1 + 32) = 0;
  *(uchar *)(*(uint *)v1 + 31) = 0;
  return result;
}

//----- (02227A7C) --------------------------------------------------------
int __fastcall Function_2227a7c(uchar *a1)
{
  uchar *v1;
  int v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  int result;
  char v8;

  v1 = a1;
  v2 = *(uint *)a1;
  v3 = a1[4429];
  v4 = *(ushort *)(*(uint *)a1 + 32);
  v5 = 0;
  v6 = (int)&a1[144 * v3];
  while ( 1 )
  {
    result = *(ushort *)(v6 + 60);
    if ( v4 == result )
      break;
    ++v5;
    v6 += 4;
    if ( v5 >= 0x24 )
      return result;
  }
  u32_div_f(v5, 6);
  *(uchar *)(v2 + v3 + 39) = v8;
  result = u32_div_f(v5, 6);
  *(uchar *)(*(uint *)v1 + v1[4429] + 44) = result;
  return result;
}

//----- (02227AC8) --------------------------------------------------------
uint __fastcall Function_2227ac8(int a1, int a2, int a3, uint a4)
{
  int v4;
  ushort *v5;
  ushort *v6;
  uint v7;
  int v8;
  char *v9;
  uint v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  uint result;
  ushort i;
  uint v17;

  v4 = a1;
  v17 = 0;
  do
  {
    for ( i = 0; ; ++i )
    {
      v5 = (ushort *)Function_207d910(*(uint *)(*(uint *)v4 + 8), (ushort)v17, i, a4);
      v6 = v5;
      if ( !v5 )
        break;
      v7 = *v5;
      if ( *v6 && v6[1] )
      {
        v8 = GetItemData(v7, 0xDu, *(uint *)(*(uint *)v4 + 12));
        v9 = &byte_2229BB0;
        v10 = 0;
        do
        {
          if ( (1 << v10) & v8 )
          {
            v11 = 4 * *(uchar *)(v4 + (uchar)*v9 + 4431) + v4 + 144 * (uchar)*v9;
            *(ushort *)(v11 + 60) = *v6;
            *(ushort *)(v11 + 62) = v6[1];
            v12 = v4 + (uchar)*v9;
            a4 = *(uchar *)(v12 + 4431) + 1;
            *(uchar *)(v12 + 4431) = a4;
          }
          ++v10;
          ++v9;
        }
        while ( v10 < 5 );
      }
    }
    ++v17;
  }
  while ( v17 < 8 );
  v13 = 0;
  do
  {
    v14 = v4 + v13;
    if ( *(uchar *)(v4 + v13 + 4431) )
      *(uchar *)(v14 + 4436) = s32_div_f(*(uchar *)(v4 + v13 + 4431) - 1, 6);
    else
      *(uchar *)(v14 + 4436) = 0;
    result = *(uchar *)(v14 + 4436);
    if ( result < *(uchar *)(*(uint *)v4 + v13 + 44) )
      *(uchar *)(*(uint *)v4 + v13 + 44) = result;
    ++v13;
  }
  while ( v13 < 5 );
  return result;
}

//----- (02227BA8) --------------------------------------------------------
int __fastcall Function_2227ba8(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1
     + 144 * *(uchar *)(a1 + 4429)
     + 4 * (a2 + 6 * *(uchar *)(*(uint *)a1 + *(uchar *)(a1 + 4429) + 44));
  result = *(ushort *)(v2 + 60);
  if ( !*(ushort *)(v2 + 60) || !*(ushort *)(v2 + 62) )
    result = 0;
  return result;
}

//----- (02227BDC) --------------------------------------------------------
uint __fastcall Function_2227bdc(int a1)
{
  int v1;

  v1 = a1;
  Function_2227c08();
  Function_2227c54(v1);
  Function_2227de8(v1);
  Function_2227f7c(v1);
  Function_2228070(v1);
  return Function_201ff74(0x10u, 1);
}

//----- (02227C08) --------------------------------------------------------
int __fastcall Function_2227c08(uint **a1, int a2, int a3, int a4)
{
  uint **v4;
  uint *v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v7 = 8;
  v8 = 8;
  v9 = 3;
  v10 = 3;
  v11 = 0;
  v12 = 0;
  v5 = (uint *)((int (__fastcall *)(uint))dword_223E010[0])(**a1);
  v4[195] = (uint *)Function_200c704(v5);
  Function_200c7c0((int *)v5, (int **)v4[195], 12);
  return Function_200cb30(v5, (int)v4[195], &v7);
}

//----- (02227C54) --------------------------------------------------------
uint __fastcall Function_2227c54(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint *v12;

  v4 = a1;
  v5 = LoadFromNARC_8(16, *(uint *)(*(uint *)a1 + 12), a3, a4);
  v12 = (uint *)((int (__fastcall *)(uint))dword_223E010[0])(**(uint **)v4);
  v6 = 0;
  do
  {
    v7 = Function_207ce78(1, 1u);
    Function_200cc3c(v12, *(uint *)(v4 + 780), (int)v5, v7, 0, 2, v6 + 46263);
    v8 = Function_207ce78(1, 2u);
    Function_200cdc4(*(uint *)(v4 + 8), 3u, v12, *(uint *)(v4 + 780), (int)v5, v8, 0, 1, 2, v6++ + 46263);
  }
  while ( v6 < 6 );
  v9 = Function_207cf40();
  Function_200ce24(v12, *(uint *)(v4 + 780), (int)v5, v9, 0, 46263);
  v10 = Function_207cf44();
  Function_200ce54(v12, *(uint *)(v4 + 780), (int)v5, v10, 0, 46263);
  return Call_FS_CloseFile(v5);
}

//----- (02227D10) --------------------------------------------------------
int __fastcall Function_2227d10(uint **a1, int a2, int a3)
{
  uint **v3;
  int v4;
  int v5;
  int *v6;
  int v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (int *)((int (__fastcall *)(uint))dword_223E010[0])(**a1);
  v7 = Function_207ce78(v4, 1u);
  return Function_200d948(v6, (int)v3[195], 16, v7, 0, v5);
}

//----- (02227D48) --------------------------------------------------------
uint __fastcall Function_2227d48(int *a1, int a2, short a3)
{
  int *v3;
  short v4;
  int v5;

  v3 = a1;
  v4 = a3;
  v5 = Function_207ce78(a2, 2u);
  return Function_2003050(v3[2], 16, v5, *(uint *)(*v3 + 12), 3, 32, 16 * v4);
}

//----- (02227D78) --------------------------------------------------------
int *__fastcall Function_2227d78(uint **a1, int a2)
{
  uint **v2;
  int v3;
  uint *v4;
  int v5;
  short v7;
  short v8;
  short v9;
  short v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)((int (__fastcall *)(uint))dword_223E010[0])(**a1);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v5 = dword_2229CCC[5 * v3];
  v12 = 0;
  v11 = v5;
  v13 = 2;
  v19 = 0;
  v14 = dword_2229CBC[5 * v3];
  v15 = dword_2229CC0[5 * v3];
  v16 = dword_2229CC4[5 * v3];
  v17 = dword_2229CC8[5 * v3];
  v18 = 1;
  return Function_200ce6c(v4, (int)v2[195], &v7);
}

//----- (02227DE8) --------------------------------------------------------
int *__fastcall Function_2227de8(uint **a1)
{
  uint **v1;
  uint v2;
  uint **v3;
  int *result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    result = Function_2227d78(v1, v2);
    v3[196] = result;
    ++v2;
    ++v3;
  }
  while ( v2 < 6 );
  return result;
}

//----- (02227E08) --------------------------------------------------------
uint __fastcall Function_2227e08(uint **a1)
{
  uint **v1;
  uint v2;
  uint **v3;
  int v5;

  v1 = a1;
  v5 = ((int (__fastcall *)(uint))dword_223E010[0])(**a1);
  v2 = 0;
  v3 = v1;
  do
  {
    Function_200d0f4((int)v3[196]);
    ++v2;
    ++v3;
  }
  while ( v2 < 6 );
  Function_2227fdc(v1);
  Function_22280c8(v1);
  return Function_200d0b0(v5, (int **)v1[195]);
}

//----- (02227E48) --------------------------------------------------------
int __fastcall Function_2227e48(uint *a1, short a2, short a3)
{
  short v3;
  short v4;
  int *v5;

  v3 = a2;
  v4 = a3;
  v5 = (int *)a1;
  Function_200d3f4(a1, 1);
  return Function_200d4c4(v5, v3, v4);
}

//----- (02227E68) --------------------------------------------------------
uint __fastcall Function_2227e68(int a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  uint result;
  int v6;

  v6 = a1;
  v2 = a2;
  v3 = 0;
  v4 = a1;
  do
  {
    result = Function_200d3f4(*(uint **)(v4 + 784), 0);
    ++v3;
    v4 += 4;
  }
  while ( v3 < 6 );
  switch ( v2 )
  {
    case 0:
      return Function_2227eac(v6);
    case 1:
      return Function_2227ee0(v6);
    case 2:
      result = Function_2227f38(v6);
      break;
  }
  return result;
}

//----- (02227EAC) --------------------------------------------------------
int *__fastcall Function_2227eac(int *result)
{
  int *v1;

  v1 = result;
  if ( *(ushort *)(*result + 32) )
  {
    Function_2227d10((uint **)result, *(ushort *)(*result + 32), 46263);
    Function_2227d48(v1, *(ushort *)(*v1 + 32), 0);
    result = (int *)Function_2227e48((uint *)v1[196], 24, 178);
  }
  return result;
}

//----- (02227EE0) --------------------------------------------------------
int __fastcall Function_2227ee0(int *a1)
{
  int *v1;
  int *v2;
  uint v3;
  int *v4;
  int result;
  int v6;

  v1 = a1;
  v2 = &dword_2229C44;
  v3 = 0;
  v4 = a1;
  do
  {
    result = Function_2227ba8((int)v1, v3);
    v6 = result;
    if ( result )
    {
      Function_2227d10((uint **)v1, result, v3 + 46263);
      Function_2227d48(v1, v6, v3);
      result = Function_2227e48((uint *)v4[196], *v2, v2[1]);
    }
    ++v3;
    v2 += 2;
    ++v4;
  }
  while ( v3 < 6 );
  return result;
}

//----- (02227F38) --------------------------------------------------------
int __fastcall Function_2227f38(int a1)
{
  int *v1;
  int v2;

  v1 = (int *)a1;
  v2 = Function_2227ba8(a1, *(uchar *)(*(uint *)a1 + *(uchar *)(a1 + 4429) + 39));
  Function_2227d10((uint **)v1, v2, 46263);
  Function_2227d48(v1, v2, 0);
  return Function_2227e48((uint *)v1[196], 40, 44);
}

//----- (02227F7C) --------------------------------------------------------
int __fastcall Function_2227f7c(uint **a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint))dword_223E010[0])(**a1);
  ((void (__cdecl *)(int, uint, uint, uint))dword_226DB7C[0])(v2, v1[195], v1[2], *(uint *)(*v1 + 12));
  v3 = ((int (__fastcall *)(int, uint, uint))dword_226DC24[0])(v2, v1[195], *(uint *)(*v1 + 12));
  return Function_2228a64(v1[13], v3);
}

//----- (02227FDC) --------------------------------------------------------
int __fastcall Function_2227fdc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2228a58(*(uint *)(a1 + 52));
  ((void (__fastcall *)(int))dword_226DCA8[0])(v2);
  return ((int (__fastcall *)(uint))dword_226DBFC[0])(*(uint *)(v1 + 780));
}

//----- (02228008) --------------------------------------------------------
int __fastcall Function_2228008(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = Function_2228a9c(*(uint *)(a1 + 52), *(&off_2229BC8 + a2));
  if ( !v2 )
    return Function_2228a68(*(uint *)(v3 + 52), *(uchar *)(v3 + 4429));
  if ( v2 == 1 )
    result = Function_2228a68(
               *(uint *)(v3 + 52),
               *(uchar *)(*(uint *)v3 + *(uchar *)(v3 + 4429) + 39));
  return result;
}

//----- (02228050) --------------------------------------------------------
int __fastcall Function_2228050(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_2228a60(*(uint *)(a1 + 52), 0);
  Function_2228a90(*(uint *)(v1 + 52));
  v2 = Function_2228a58(*(uint *)(v1 + 52));
  return ((int (__fastcall *)(int))dword_226DDE8[0])(v2);
}

//----- (02228070) --------------------------------------------------------
int __fastcall Function_2228070(uint **a1)
{
  uint *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint))dword_223E010[0])(**a1);
  ((void (__cdecl *)(int, uint, uint, uint))dword_226DE44[0])(v2, v1[195], *(uint *)(*v1 + 12), v1[2]);
  result = ((int (__fastcall *)(int, uint, uint))dword_226DEEC[0])(v2, v1[195], *(uint *)(*v1 + 12));
  v1[14] = result;
  return result;
}

//----- (022280C8) --------------------------------------------------------
int __fastcall Function_22280c8(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_226DF68[0])(*(uint *)(a1 + 56));
  return ((int (__fastcall *)(uint))dword_226DEC4[0])(*(uint *)(v1 + 780));
}

//----- (022280F0) --------------------------------------------------------
int __fastcall Function_22280f0(uint *a1, int a2)
{
  uint *v2;

  v2 = a1;
  if ( *(uint *)(*a1 + 20) != 1 )
    return ((int (__fastcall *)(uint))dword_226DFBC[0])(a1[14]);
  ((void (__fastcall *)(uint, int, int))dword_226DFB0[0])(a1[14], dword_2229BFC[2 * a2], dword_2229C00[2 * a2]);
  return ((int (__fastcall *)(uint, int))dword_226DFD0)(v2[14], 60);
}

//----- (02228128) --------------------------------------------------------
int __fastcall Function_2228128(int a1)
{
  int v1;

  v1 = a1;
  Function_2228460(a1 + 808);
  Function_2228460(v1 + 1096);
  Function_2228460(v1 + 1384);
  Function_2228460(v1 + 1672);
  Function_2228460(v1 + 1932);
  Function_2228460(v1 + 2192);
  Function_2228460(v1 + 2452);
  Function_2228460(v1 + 2712);
  Function_2228460(v1 + 2762);
  Function_2228460(v1 + 2812);
  Function_2228460(v1 + 2862);
  Function_2228460(v1 + 3054);
  Function_2228460(v1 + 3246);
  Function_2228460(v1 + 3438);
  Function_2228460(v1 + 3630);
  Function_2228460(v1 + 3680);
  Function_2228460(v1 + 3730);
  Function_2228460(v1 + 3780);
  Function_2228460(v1 + 3830);
  Function_2228460(v1 + 3880);
  Function_2228460(v1 + 3930);
  Function_2228460(v1 + 3980);
  Function_2228460(v1 + 4030);
  Function_2228460(v1 + 4062);
  Function_2228460(v1 + 4094);
  Function_2228460(v1 + 4126);
  Function_2228460(v1 + 4158);
  Function_2228460(v1 + 4190);
  Function_2228460(v1 + 4222);
  Function_2228460(v1 + 4254);
  Function_2228460(v1 + 4286);
  Function_2228460(v1 + 4318);
  Function_2228460(v1 + 4350);
  return Function_2228460(v1 + 4382);
}

//----- (02228460) --------------------------------------------------------
char *__fastcall Function_2228460(int a1, int a2, int a3, int a4, uchar a5, uchar a6)
{
  char *result;
  int v7;
  int v8;
  int i;
  int v10;
  char v11;

  v10 = a1;
  result = &v11;
  v7 = 0;
  if ( (int)a6 > 0 )
  {
    v8 = a2 + 2 * a3;
    do
    {
      for ( i = 0; i < a5; i = (i + 1) & 0xFFFF )
        *(ushort *)(v10 + 2 * v7 * a5 + 2 * i) = *(ushort *)(v8 + ((a4 + v7) << 6) + 2 * i);
      v7 = (v7 + 1) & 0xFFFF;
      result = (char *)a6;
    }
    while ( v7 < a6 );
  }
  return result;
}

//----- (022284B0) --------------------------------------------------------
int __fastcall Function_22284b0(int a1, char a2, int a3)
{
  int result;

  switch ( a2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      result = a1 + 808 + 288 * a3;
      break;
    case 4:
      result = a1 + 1672 + 260 * a3;
      break;
    case 5:
    case 14:
    case 16:
      result = a1 + 2712 + 50 * a3;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      result = a1 + 2862 + 192 * a3;
      break;
    case 12:
      result = a1 + 3630 + 50 * a3;
      break;
    case 13:
      result = a1 + 3830 + 50 * a3;
      break;
    case 15:
      result = a1 + 1672 + 260 * a3;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02228558) --------------------------------------------------------
int __fastcall Function_2228558(int a1, char a2, int a3, int a4)
{
  int result;

  if ( a3 == 3 )
    return 5;
  switch ( a2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      result = 0;
      break;
    case 4:
      result = 3;
      break;
    case 5:
    case 12:
    case 13:
    case 14:
    case 16:
      result = 2;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      result = (*(uchar *)(a1 + 4429) + 8) & 0xFFFF;
      break;
    case 15:
      if ( a4 == 2 )
        result = (*(uchar *)(a1 + 4429) + 8) & 0xFFFF;
      else
        result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (022285C8) --------------------------------------------------------
int __fastcall Function_22285c8(int result, int a2, int a3, int a4)
{
  uint v4;
  uint v5;
  short v6;
  int v7;

  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        result += 4126 + 32 * a4;
        break;
      case 2:
        result += 4222 + 32 * a4;
        break;
      case 3:
        result += 4318 + 32 * a4;
        break;
      default:
        return result;
    }
  }
  else
  {
    result += 4030 + 32 * a4;
  }
  v4 = 0;
  do
  {
    v5 = 0;
    do
    {
      v6 = *(ushort *)(result + 8 * v4 + 2 * v5);
      v7 = a2 + 32 * v4 + 2 * v5;
      v5 = (v5 + 1) & 0xFFFF;
      *(ushort *)(v7 + 12) = v6;
    }
    while ( v5 < 4 );
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 < 4 );
  return result;
}

//----- (0222863C) --------------------------------------------------------
int __fastcall Function_222863c(int a1, int a2, int a3, int a4, uchar a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;

  v11 = a3;
  v12 = a4;
  v5 = a2;
  v10 = a1;
  v6 = Function_22284b0(a1, a3, a4);
  v7 = (Function_2228558(v10, v11, v12, a5) << 12) & 0xFFFF;
  v8 = 0;
  if ( HIBYTE(dword_2229D7C[v11]) * BYTE2(dword_2229D7C[v11]) > 0 )
  {
    do
    {
      *(ushort *)(v5 + 2 * v8) = *(ushort *)(v6 + 2 * v8) & 0xFFF | v7;
      v8 = (v8 + 1) & 0xFFFF;
    }
    while ( v8 < HIBYTE(dword_2229D7C[v11]) * BYTE2(dword_2229D7C[v11]) );
  }
  return Function_22285c8(v10, v5, v11, v12);
}

//----- (022286B8) --------------------------------------------------------
uint __fastcall Function_22286b8(int a1, int a2, int a3, uchar a4)
{
  int v4;
  int v5;
  uchar v6;
  int v7;
  int v8;
  int v9;
  uchar v10;
  int v11;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = a1;
  v8 = a2;
  v9 = HIBYTE(dword_2229D7C[a2]);
  v10 = BYTE2(dword_2229D7C[a2]);
  v11 = malloc(*(uint *)(*(uint *)a1 + 12), 2 * BYTE2(dword_2229D7C[a2]) * v9);
  Function_222863c(v7, v11, v4, v5, v6);
  Function_20198c0(*(uint *)(v7 + 4), 6, v11, LOBYTE(dword_2229D7C[v8]), BYTE1(dword_2229D7C[v8]), v10, v9);
  Function_201c3c0(*(uint *)(v7 + 4), 6);
  return free(v11);
}

//----- (0222872C) --------------------------------------------------------
int __fastcall Function_222872c(int a1, uint a2, int a3, uint a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  uint v8;
  uint v9;

  v9 = a4;
  v5 = a1;
  if ( a2 < 6 || a2 > 0xB || *(uchar *)(a1 + 49) )
  {
    result = (int)&off_2229DC0;
    v7 = (int)*(&off_2229DC0 + a2);
  }
  else
  {
    result = (int)&off_2229DC0;
    v7 = (int)*(&off_2229DC0 + a2 + 11);
  }
  if ( v7 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v9 = 0;
        v4 = 4;
LABEL_12:
        v8 = 0;
        do
        {
          result = *(uchar *)(v7 + v8);
          if ( result == 255 )
            break;
          Function_201c04c(*(uint *)(v5 + 44) + 16 * result, v9, v4, 0);
          Function_201a9a4(*(uint *)(v5 + 44) + 16 * *(uchar *)(v7 + v8));
          result = (v8 + 1) << 16;
          v8 = (v8 + 1) & 0xFFFF;
        }
        while ( v8 < 8 );
        return result;
      }
      if ( a3 != 2 )
        goto LABEL_12;
    }
    v9 = 1;
    v4 = 2;
    goto LABEL_12;
  }
  return result;
}

//----- (022287A4) --------------------------------------------------------
int __fastcall Function_22287a4(int result, uint a2, int a3)
{
  int v3;
  uint **v4;
  uint v5;
  int v6;

  v3 = result;
  v6 = a3;
  if ( a2 < 6 || a2 > 0xB )
  {
    if ( a2 != 4 )
      return result;
    v5 = 0;
    do
    {
      v4 = *(uint ***)(v3 + 4 * v5 + 784);
      if ( Function_200d408(*(int **)(v3 + 4 * v5 + 784)) )
        break;
      v5 = (v5 + 1) & 0xFF;
    }
    while ( v5 < 6 );
  }
  else
  {
    v4 = *(uint ***)(result + 4 * (a2 - 6) + 784);
  }
  result = v6;
  if ( !v6 )
    return Function_200d5dc(v4, 0, 2);
  if ( v6 != 1 )
  {
    if ( v6 != 2 )
      return result;
    return Function_200d5dc(v4, 0, 2);
  }
  return Function_200d5dc(v4, 0, -4);
}

//----- (0222880C) --------------------------------------------------------
uchar *__fastcall Function_222880c(uchar *result, char a2, char a3)
{
  result[4414] = 0;
  result[4415] = 0;
  result[4416] = a2;
  result[4417] = result[4417] & 0xF | 16 * a3;
  result[4417] = result[4417] & 0xF0 | 1;
  return result;
}

//----- (02228848) --------------------------------------------------------
uchar *__fastcall Function_2228848(uchar *result)
{
  uchar *v1;
  int v2;
  uint v3;
  uint v4;
  uint v5;

  v1 = result;
  if ( result[4417] & 0xF )
  {
    v2 = result[4414];
    if ( result[4414] )
    {
      if ( v2 == 1 )
      {
        Function_22286b8((int)result, result[4416], 2, result[4428]);
        Function_222872c((int)v1, v1[4416], 2, v4);
        Function_22287a4((int)v1, v1[4416], 2);
        v1[4415] = 0;
        result = (uchar *)4414;
        v1[4414] = 2;
      }
      else if ( v2 == 2 )
      {
        Function_22286b8((int)result, result[4416], 0, result[4428]);
        Function_222872c((int)v1, v1[4416], 0, v5);
        Function_22287a4((int)v1, v1[4416], 0);
        v1[4415] = 0;
        v1[4414] = 0;
        result = (uchar *)4417;
        v1[4417] &= 0xF0u;
      }
    }
    else
    {
      Function_22286b8((int)result, result[4416], 1, result[4428]);
      Function_222872c((int)v1, v1[4416], 1, v3);
      Function_22287a4((int)v1, v1[4416], 1);
      v1[4415] = 0;
      result = (uchar *)4414;
      v1[4414] = 1;
    }
  }
  return result;
}

//----- (02228924) --------------------------------------------------------
int __fastcall Function_2228924(int result, int a2)
{
  uchar *v2;
  uchar v3;
  uint v4;

  v2 = (uchar *)result;
  v3 = a2;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = 0;
      do
      {
        if ( Function_2227ba8((int)v2, v4) )
          Function_22286b8((int)v2, (v4 + 6) & 0xFF, 0, 1u);
        else
          Function_22286b8((int)v2, (v4 + 6) & 0xFF, 3, 1u);
        ++v4;
      }
      while ( v4 < 6 );
      if ( v2[v2[4429] + 4436] )
      {
        Function_22286b8((int)v2, 12, 0, 1u);
        Function_22286b8((int)v2, 13, 0, 1u);
      }
      else
      {
        Function_22286b8((int)v2, 12, 3, 1u);
        Function_22286b8((int)v2, 13, 3, 1u);
      }
      result = Function_22286b8((int)v2, 14, 0, 1u);
    }
    else if ( a2 == 2 )
    {
      Function_22286b8(result, 15, 0, 2u);
      result = Function_22286b8((int)v2, 16, 0, 2u);
    }
  }
  else
  {
    Function_22286b8(result, 0, 0, 0);
    Function_22286b8((int)v2, 1, 0, v3);
    Function_22286b8((int)v2, 2, 0, v3);
    Function_22286b8((int)v2, 3, 0, v3);
    if ( *(ushort *)(*(uint *)v2 + 32) )
      Function_22286b8((int)v2, 4, 0, v3);
    else
      Function_22286b8((int)v2, 4, 3, v3);
    result = Function_22286b8((int)v2, 5, 0, v3);
  }
  return result;
}

//----- (02228A38) --------------------------------------------------------
long long __fastcall Function_2228a38(uint a1)
{
  long long result;
  uchar *v2;
  int v3;

  result = (uint)malloc(a1, 16);
  v2 = (uchar *)result;
  v3 = 16;
  do
  {
    *v2++ = 0;
    --v3;
  }
  while ( v3 );
  return result;
}

//----- (02228A50) --------------------------------------------------------
uint __fastcall Function_2228a50(int a1)
{
  return free(a1);
}

//----- (02228A58) --------------------------------------------------------
int __fastcall Function_2228a58(int a1)
{
  return *(uint *)a1;
}

//----- (02228A5C) --------------------------------------------------------
int __fastcall Function_2228a5c(int a1)
{
  return *(uchar *)(a1 + 8);
}

//----- (02228A60) --------------------------------------------------------
int __fastcall Function_2228a60(int result, char a2)
{
  *(uchar *)(result + 8) = a2;
  return result;
}

//----- (02228A64) --------------------------------------------------------
uint *__fastcall Function_2228a64(uint *result, int a2)
{
  *result = a2;
  return result;
}

//----- (02228A68) --------------------------------------------------------
int __fastcall Function_2228a68(int result, char a2)
{
  uchar *v2;

  *(uchar *)(result + 9) = a2;
  if ( *(uchar *)(result + 8) == 1 )
  {
    v2 = (uchar *)(*(uint *)(result + 4) + 8 * *(uchar *)(result + 9));
    result = ((int (__fastcall *)(uint, uint, uint, uint, uint))dword_226DD7C[0])(
               *(uint *)result,
               *v2,
               v2[2],
               v2[1],
               v2[3]);
  }
  return result;
}

//----- (02228A90) --------------------------------------------------------
int __fastcall Function_2228a90(int result)
{
  *(uchar *)(result + 9) = 0;
  *(uchar *)(result + 10) = -1;
  return result;
}

//----- (02228A9C) --------------------------------------------------------
int __fastcall Function_2228a9c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  uchar *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  Function_2228a90(a1);
  *(uint *)(v2 + 4) = v3;
  *(uint *)(v2 + 12) = -1;
  result = *(uchar *)(v2 + 8);
  if ( result == 1 )
  {
    v5 = *(uchar **)(v2 + 4);
    v6 = v5[3];
    result = ((int (__fastcall *)(uint, uint, uint, uint))dword_226DD7C[0])(*(uint *)v2, *v5, v5[2], v5[1]);
  }
  return result;
}

//----- (02228AC8) --------------------------------------------------------
int __fastcall Function_2228ac8(int result, int a2)
{
  *(uint *)(result + 12) = a2;
  return result;
}

//----- (02228ACC) --------------------------------------------------------
int __fastcall Function_2228acc(int a1)
{
  uchar *v2;

  if ( *(uchar *)(a1 + 8) == 1 )
    return 1;
  if ( dword_21BF6C4 & 0xF3 )
  {
    *(uchar *)(a1 + 8) = 1;
    v2 = (uchar *)(*(uint *)(a1 + 4) + 8 * *(uchar *)(a1 + 9));
    ((void (__fastcall *)(uint, uint, uint, uint, uint))dword_226DD7C[0])(
      *(uint *)a1,
      *v2,
      v2[2],
      v2[1],
      v2[3]);
    Function_2005748(0x5DCu);
  }
  return 0;
}

//----- (02228B18) --------------------------------------------------------
int __fastcall Function_2228b18(uchar *a1, char a2)
{
  int result;

  switch ( a2 )
  {
    case 0:
      if ( !(a1[5] & 0x80) )
        goto LABEL_10;
      result = 1;
      break;
    case 1:
      if ( !(a1[4] & 0x80) )
        goto LABEL_10;
      result = 1;
      break;
    case 2:
      if ( !(a1[7] & 0x80) )
        goto LABEL_10;
      result = 1;
      break;
    case 3:
      if ( !(a1[6] & 0x80) )
        goto LABEL_10;
      result = 1;
      break;
    default:
LABEL_10:
      result = 0;
      break;
  }
  return result;
}

//----- (02228B64) --------------------------------------------------------
int __fastcall Function_2228b64(int a1)
{
  char v1;
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  uchar v7;
  uchar v8[3];
  uchar v9;
  uchar v10;

  v2 = a1;
  if ( !Function_2228acc(a1) )
    return -1;
  if ( dword_21BF6C4 & 0x40 )
  {
    v4 = Function_201e028(*(uint *)(v2 + 4), 0, 0, 0, 0, *(uchar *)(v2 + 9), 0);
    v1 = 0;
  }
  else if ( dword_21BF6C4 & 0x80 )
  {
    v4 = Function_201e028(*(uint *)(v2 + 4), 0, 0, 0, 0, *(uchar *)(v2 + 9), 1u);
    v1 = 1;
  }
  else if ( dword_21BF6C4 & 0x20 )
  {
    v4 = Function_201e028(*(uint *)(v2 + 4), 0, 0, 0, 0, *(uchar *)(v2 + 9), 2u);
    v1 = 2;
  }
  else if ( dword_21BF6C4 & 0x10 )
  {
    v4 = Function_201e028(*(uint *)(v2 + 4), 0, 0, 0, 0, *(uchar *)(v2 + 9), 3u);
    v1 = 3;
  }
  else
  {
    v4 = 255;
  }
  if ( v4 == 255 )
  {
    if ( dword_21BF6C4 & 1 )
    {
      result = *(uchar *)(v2 + 9);
    }
    else if ( dword_21BF6C4 & 2 )
    {
      Function_2005748(0x5DDu);
      result = -2;
    }
    else
    {
      result = -1;
    }
  }
  else
  {
    v6 = 1;
    if ( v4 & 0x80 )
    {
      if ( *(uchar *)(v2 + 10) == 255 )
        v4 = (v4 ^ 0x80) & 0xFF;
      else
        v4 = *(uchar *)(v2 + 10);
    }
    while ( !((1 << v4) & *(uint *)(v2 + 12)) )
    {
      v6 = 0;
      v5 = Function_201e028(*(uint *)(v2 + 4), 0, 0, 0, 0, v4, v1) & 0x7F;
      if ( v5 == v4 || v5 == *(uchar *)(v2 + 9) )
      {
        v4 = *(uchar *)(v2 + 9);
        break;
      }
      v4 = v5;
    }
    if ( *(uchar *)(v2 + 9) != v4 )
    {
      Function_201e010((uchar *)(*(uint *)(v2 + 4) + 8 * v4), &v10, &v9);
      Function_201e01c(*(uint *)(v2 + 4) + 8 * v4, v8, &v7);
      if ( Function_2228b18((uchar *)(*(uint *)(v2 + 4) + 8 * v4), v1) == 1 && v6 )
        *(uchar *)(v2 + 10) = *(uchar *)(v2 + 9);
      else
        *(uchar *)(v2 + 10) = -1;
      *(uchar *)(v2 + 9) = v4;
      ((void (__fastcall *)(uint, uint, uint, uint, uint))dword_226DD7C[0])(*(uint *)v2, v10, v8[0], v9, v7);
      Function_2005748(0x5DCu);
    }
    result = -1;
  }
  return result;
}

