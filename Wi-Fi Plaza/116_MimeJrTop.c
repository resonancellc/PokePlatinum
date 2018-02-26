//----- (02260440) --------------------------------------------------------
int __fastcall Function_2260440(int a1, int a2, uint *a3, int a4)
{
  int v4;
  int v5;

  v4 = a3[1];
  v5 = a4;
  *(uint *)(a4 + 20) = *a3;
  *(uint *)(a4 + 24) = v4;
  SetPRNGSeed(v4);
  return Function_22617d4(v5);
}

//----- (02260458) --------------------------------------------------------
int __fastcall Function_2260458(int a1, int a2, int a3, int a4)
{
  return Function_22617dc(a4);
}

//----- (02260464) --------------------------------------------------------
int __fastcall Function_2260464(int a1, int a2, uint *a3, int a4)
{
  int v4;
  int result;

  v4 = *(uint *)(a4 + 4) + 4 * a1;
  result = 11164;
  *(uint *)(v4 + 11164) = *a3;
  return result;
}

//----- (02260478) --------------------------------------------------------
int __fastcall Function_2260478(int a1, int a2, uint *a3, int a4)
{
  int result;

  result = a4 + 8 * a1;
  *(uint *)(result + 36) = *a3;
  return result;
}

//----- (02260484) --------------------------------------------------------
void Function_2260484()
{
  ;
}

//----- (02260488) --------------------------------------------------------
int Function_2260488()
{
  return 0;
}

//----- (0226048C) --------------------------------------------------------
int Function_226048c()
{
  return 8;
}

//----- (02260490) --------------------------------------------------------
int Function_2260490()
{
  return 4;
}

//----- (02260494) --------------------------------------------------------
int Function_2260494()
{
  return 8;
}

//----- (02260498) --------------------------------------------------------
int Function_2260498()
{
  return 32;
}

//----- (0226049C) --------------------------------------------------------
void **Function_226049c()
{
  return &off_2267740;
}

//----- (022604A4) --------------------------------------------------------
int Function_22604a4()
{
  return 5;
}

//----- (022604A8) --------------------------------------------------------
int __fastcall Function_22604a8(int a1)
{
  int v1;
  void **v2;
  int v3;

  v1 = a1;
  v2 = Function_226049c();
  v3 = Function_22604a4();
  return Function_2032798((int)v2, v3, v1);
}

//----- (022604C4) --------------------------------------------------------
int __fastcall Function_22604c4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19;
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
  int v39;
  int v40;
  int *v41;
  int v42;
  int v43;
  int v44;
  int result;
  char *v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  char v53;
  int v54;

  v54 = a4;
  v4 = a1;
  *(uint *)(a1 + 128) = GetPRNGSeed();
  Function_22612cc(v4);
  SetMainLoopFunctionCall((int)Function_2261794, v4);
  Function_20177a4();
  Function_201dbec(32, 0x6Au);
  Function_200966c(1, 2097168, v5, v6);
  Function_2009704(1);
  Function_2039734();
  v7 = Function_20394a8(0x6Au);
  Function_20a71b0(v7, &v48);
  Function_2002fbc(*(uint *)(v4 + 92), *(uint *)(v48 + 12), 2, 224, 0x20u);
  free(v7);
  v8 = Function_2032e64();
  *(uint *)(v4 + 68) = Function_203608c();
  Function_22604a8(v4);
  if ( Function_22617c4(v4) == 1 )
    *(uint *)v4 = Function_2262a44(v8, v4 + 72);
  v9 = Function_2262a8c(v8, *(uint *)(v4 + 68), v4 + 72);
  *(uint *)(v4 + 4) = v9;
  *(uint *)(v9 + 11188) = *(uchar *)(v4 + 20);
  *(uint *)(*(uint *)(v4 + 4) + 11184) = *(uint *)(v4 + 128);
  Function_201e3d8();
  Function_201e450(4u);
  Function_22628b8(v4);
  Function_22622c8(v4);
  Function_22625a8(v4, *(uint *)(v4 + 4));
  Function_2261d70(*(uint *)(v4 + 4));
  Function_2261d08(*(uint *)(v4 + 4));
  Function_2262724(*(uint *)(v4 + 4));
  Function_2262840(*(uint *)(v4 + 4));
  v10 = Function_2264680(v4, *(uint *)(v4 + 68));
  Function_2262034(v4, v10);
  v11 = dword_2267918;
  v12 = &v53;
  v13 = 16;
  do
  {
    v14 = *v11;
    v15 = v11[1];
    v11 += 2;
    *(uint *)v12 = v14;
    *((uint *)v12 + 1) = v15;
    v12 += 8;
    --v13;
  }
  while ( v13 );
  v47 = 0;
  v16 = 0;
  v46 = &v53;
  v17 = 0;
  v18 = 0;
  do
  {
    Function_22618a8(*(uint *)(v4 + 4) + 2896 + v16, *(uint *)(v4 + 72), *(uint *)v46, v12);
    Function_22618b4(*(uint *)(v4 + 4) + 2896 + v16, *(uchar *)(v4 + 20));
    Function_2017164(
      (int *)(*(uint *)(v4 + 4) + 3032 + v16),
      *(uint *)(v4 + 4) + 3016 + v16,
      *(uint *)(v4 + 72),
      *((uint *)v46 + 1),
      106,
      (int (***)(void))(v4 + 108));
    Function_201727c(*(uint *)(v4 + 4) + 2896 + v16, *(uint *)(v4 + 4) + 3032 + v16);
    Function_2017240(*(uint *)(v4 + 4) + 3032 + v16, 0);
    Function_2017348(*(uint *)(v4 + 4) + 2896 + v16, 0);
    v19 = *(uchar *)(v4 + 20);
    if ( ((uint)v47 >> 31) + __ROR4__((v47 << 31) - ((uint)v47 >> 31), 31) )
    {
      if ( v17 <= 0 )
      {
        v22 = fflt(v18);
        v21 = fsub(v22, 1056964608);
      }
      else
      {
        v20 = fflt(v18);
        v21 = fadd(0x3F000000u, v20);
      }
      v23 = *(uint *)(v4 + 4) + v16;
      *(uint *)(v23 + 3376) += ffix(v21);
    }
    else
    {
      if ( v17 <= 0 )
      {
        v26 = fflt(v18);
        v25 = fsub(v26, 1056964608);
      }
      else
      {
        v24 = fflt(v18);
        v25 = fadd(0x3F000000u, v24);
      }
      v27 = *(uint *)(v4 + 4) + v16;
      *(uint *)(v27 + 3376) -= ffix(v25);
    }
    if ( v47 >= 8 )
    {
      if ( v17 <= 0 )
      {
        v34 = fflt(v18);
        v33 = fsub(v34, 1056964608);
      }
      else
      {
        v32 = fflt(v18);
        v33 = fadd(0x3F000000u, v32);
      }
      v35 = *(uint *)(v4 + 4) + v16;
      *(uint *)(v35 + 3384) -= ffix(v33);
    }
    else
    {
      if ( 5 * (v47 + 1) <= 0 )
      {
        v30 = fflt(20480 * (v47 + 1));
        v29 = fsub(v30, 1056964608);
      }
      else
      {
        v28 = fflt(20480 * (v47 + 1));
        v29 = fadd(0x3F000000u, v28);
      }
      v31 = *(uint *)(v4 + 4) + v16;
      *(uint *)(v31 + 3384) += ffix(v29);
    }
    v17 += 5;
    v46 += 8;
    v16 += 524;
    v18 += 20480;
    ++v47;
  }
  while ( v47 < 8 );
  Function_22618a8(*(uint *)(v4 + 4) + 2372, *(uint *)(v4 + 72), 71, v12);
  Function_22618b4(*(uint *)(v4 + 4) + 2372, *(uchar *)(v4 + 20));
  Function_2017348(*(uint *)(v4 + 4) + 2372, 0);
  v49 = 3;
  v50 = 1;
  v51 = 4;
  v52 = 2;
  v36 = Function_2264680(v4, *(uint *)(v4 + 68));
  Function_22618a8(*(uint *)(v4 + 4) + 276, *(uint *)(v4 + 72), *(&v49 + v36), v37);
  Function_22618b4(*(uint *)(v4 + 4) + 276, *(uchar *)(v4 + 20));
  Function_22618a8(*(uint *)(v4 + 4) + 800, *(uint *)(v4 + 72), 51, v38);
  Function_22618a8(*(uint *)(v4 + 4) + 1324, *(uint *)(v4 + 72), 57, v39);
  Function_22618a8(*(uint *)(v4 + 4) + 1848, *(uint *)(v4 + 72), 55, v40);
  Function_22618b4(*(uint *)(v4 + 4) + 800, *(uchar *)(v4 + 20));
  Function_22618b4(*(uint *)(v4 + 4) + 1324, *(uchar *)(v4 + 20));
  Function_22618b4(*(uint *)(v4 + 4) + 1848, *(uchar *)(v4 + 20));
  v41 = *(int **)(v4 + 4);
  Function_2017164(v41 + 234, (int)(v41 + 230), *(uint *)(v4 + 72), 0x35u, 106, (int (***)(void))(v4 + 108));
  Function_201727c((uint)(v41 + 200), (int)(v41 + 234));
  Function_2017240((int)(v41 + 234), 0);
  Function_2017164(v41 + 239, (int)(v41 + 230), *(uint *)(v4 + 72), 0x34u, 106, (int (***)(void))(v4 + 108));
  Function_2017240((int)(v41 + 239), 0);
  Function_2017164(v41 + 244, (int)(v41 + 230), *(uint *)(v4 + 72), 0x3Au, 106, (int (***)(void))(v4 + 108));
  Function_2017240((int)(v41 + 244), 0);
  v42 = *(uint *)(v4 + 4);
  Function_2017164((int *)(v42 + 1460), v42 + 1444, *(uint *)(v4 + 72), 0x38u, 106, (int (***)(void))(v4 + 108));
  Function_201727c(v42 + 1324, v42 + 1460);
  Function_2017240(v42 + 1460, 0);
  v43 = *(uint *)(v4 + 4);
  Function_2017164((int *)(v43 + 1984), v43 + 1968, *(uint *)(v4 + 72), 0x36u, 106, (int (***)(void))(v4 + 108));
  Function_201727c(v43 + 1848, v43 + 1984);
  Function_2017240(v43 + 1984, 0);
  if ( *(uchar *)(v4 + 20) )
  {
    *(uint *)(*(uint *)(v4 + 4) + 760) = -32768;
    *(uint *)(*(uint *)(v4 + 4) + 1284) = -32768;
    *(uint *)(*(uint *)(v4 + 4) + 1808) = -32768;
    *(uint *)(*(uint *)(v4 + 4) + 2332) = -32768;
  }
  v44 = Function_200d9b0(*(uint *)(v4 + 84));
  *(uint *)(v4 + 132) = ((int (__fastcall *)(int, int))dword_225CAD4[0])(v44, 106);
  GetPaletteAdresses(*(uint *)(v4 + 92), 2u, 0, 512);
  result = *(uint *)(*(uint *)(v4 + 136) + 60);
  if ( result )
    result = ((int (__fastcall *)(int))dword_21D1E74[0])(106);
  return result;
}

//----- (022609B4) --------------------------------------------------------
int __fastcall Function_116_22609b4(int a1)
{
  int v1;
  int *v2;
  int v3;
  int *v4;
  uint *v5;
  int v6;
  int v7;
  int *v9;

  v1 = a1;
  Function_2017fc8(3, 106, 413696);
  v9 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 208, 0x6Au);
  Call_FillMemWithValue(v9, 0, 0xD0u);
  v2 = v9;
  v9[34] = LoadPtrToOverWorldDataIn18(v1);
  v3 = 0;
  v4 = v9;
  do
  {
    v2[47] = 255;
    if ( Function_2032ee8(v3) )
    {
      v4[47] = v3;
      ++v4;
    }
    ++v3;
    ++v2;
  }
  while ( v3 < 4 );
  v5 = (uint *)v9[34];
  v6 = v5[13];
  v7 = v5[15];
  ((void (__cdecl *)(int *, uint))dword_225C700[0])(v9 + 35, v5[14]);
  return 1;
}

//----- (02260A2C) --------------------------------------------------------
int __fastcall Function_2260a2c(int *a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 || a3 )
  {
    v7 = s32_div_f(100 - (a1[2035] >> 12), 40);
    fflt(v7);
    if ( !v4[2037] )
    {
      v4[2037] = v3;
      v4[2038] = v5;
    }
    Function_226432c(v4 + 69, v3, v5, v4[2037], v4[2038], 0x40000000, 1);
    v8 = 0;
    v9 = 409600;
    v10 = 0;
    MTX_MultVec43(&v8, v4 + 308, v4 + 2034);
    if ( !Function_20057d4(0x572u) )
      Function_2005748(0x572u);
    v4[2037] = v3;
    result = 8152;
    v4[2038] = v5;
  }
  else
  {
    a1[2037] = 0;
    a1[2038] = 0;
    if ( a1[195] )
    {
      Function_226452c(a1 + 69, 1065353216);
      v11 = 0;
      v12 = 409600;
      v13 = 0;
      result = MTX_MultVec43(&v11, v4 + 308, v4 + 2034);
    }
    else
    {
      a1[196] = 0;
      a1[197] = 0;
      Function_226432c(a1 + 69, a1[2037], a1[2038], a1[2037], a1[2038], 1072735191, 0);
      result = Function_226432c(v4 + 200, v4[2037], v4[2038], v4[2037], v4[2038], 1046562734, 0);
    }
  }
  return result;
}

//----- (02260B6C) --------------------------------------------------------
int __fastcall Function_2260b6c(int a1)
{
  short *v1;
  int v2;
  char *v3;
  int v4;
  short v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int result;
  char v11;
  short v12;

  v1 = &word_2267998;
  v2 = a1;
  v3 = &v11;
  v4 = 96;
  do
  {
    v5 = *v1;
    ++v1;
    *(ushort *)v3 = v5;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  v6 = Function_200d3e0(*(int **)(v2 + 240));
  v7 = 4 * (v6 + 12 * *(uint *)(v2 + 12));
  v8 = *(short *)(&v11 + v7);
  v9 = *(short *)((char *)&v12 + v7);
  if ( *(ushort *)(&v11 + v7) || *(short *)((char *)&v12 + v7) )
  {
    Function_2260a2c((int *)v2, v8 + 128, v9 + 128);
    if ( v8 )
      Function_226493c(v2, (short)(v8 + 88), (short)(v9 + 128));
    else
      Function_226493c(v2, 128, (short)(v9 + 128));
  }
  else
  {
    Function_2260a2c((int *)v2, 0, 0);
  }
  if ( !v6 && *(uint *)(v2 + 8) )
    ++*(uint *)(v2 + 12);
  *(uint *)(v2 + 8) = v6;
  if ( *(uint *)(v2 + 12) == 2 && Function_200d37c(*(int **)(v2 + 240)) != 2 )
  {
    Function_200d4c4(*(int **)(v2 + 240), 128, 100);
    Function_200d370(*(int **)(v2 + 240), 2u);
    Function_2266fec(v2 + 676);
    Function_2266fec(v2 + 692);
    Function_226432c(v2 + 276, 0, 0, 5, 5, 1061997773, 0);
    Function_226432c(v2 + 276, 0, 0, -5, -5, 1061997773, 0);
  }
  if ( *(uint *)(v2 + 12) != 3 || v6 != 11 )
  {
    Function_200d33c(*(int **)(v2 + 240));
    result = 0;
  }
  else
  {
    *(uint *)(v2 + 8) = 0;
    *(uint *)(v2 + 12) = 0;
    Function_200d3f4(*(uint **)(v2 + 240), 0);
    Function_2266fec(v2 + 676);
    Function_2266fec(v2 + 692);
    Function_226432c(v2 + 276, 0, 0, 5, 5, 1061997773, 0);
    Function_226432c(v2 + 276, 0, 0, -5, -5, 1061997773, 0);
    result = 1;
  }
  return result;
}

//----- (02260CF4) --------------------------------------------------------
BOOL __fastcall Function_116_2260cf4(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  BOOL result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  BOOL v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  BOOL v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = Function_22617e4();
  switch ( v4 )
  {
    case 0:
      break;
    case 1:
      return 0;
    case 2:
      return 1;
  }
  v6 = *v2;
  if ( (uint)*v2 <= 0x14 )
    JUMPOUT(__CS__, *((short *)&off_2260D2C + v6) + 36048174);
  switch ( (uchar)v6 )
  {
    case 0:
      *(uint *)(v3 + 156) = ((int (__fastcall *)(int, int))dword_225C820[0])(v3 + 140, 106);
      Function_226178c(v3, 1, 1, v2);
      goto LABEL_67;
    case 1:
      v7 = ((int (__fastcall *)(uint))dword_225C8BC[0])(*(uint *)(v3 + 156));
      Function_226178c(v3, v7, 2, v2);
      goto LABEL_67;
    case 2:
      *(uchar *)(v3 + 20) = ((int (__fastcall *)(uint))dword_225C8CC[0])(*(uint *)(v3 + 156));
      ((void (__fastcall *)(uint))dword_225C838[0])(*(uint *)(v3 + 156));
      *(uint *)(v3 + 156) = 0;
      Function_22604c4(v3, 0, v8, v9);
      Function_226178c(v3, 1, 3, v2);
      goto LABEL_67;
    case 3:
      v10 = Function_2261768(27);
      Function_22620ac(v3, *(uint *)(v3 + 4));
      Function_226178c(v3, v10, 4, v2);
      goto LABEL_67;
    case 4:
      v11 = Function_200f2ac();
      Function_226178c(v3, v11, 5, v2);
      goto LABEL_67;
    case 5:
      Function_2261f70(*(uint *)(v3 + 4));
      Function_2265470(*(uint *)(v3 + 4));
      Function_2265a1c(*(uint *)(v3 + 4));
      Function_226178c(v3, 1, 6, v2);
      goto LABEL_67;
    case 6:
      v12 = Function_2260b6c(*(uint *)(v3 + 4));
      if ( v12 && Function_22617c4(v3) == 1 )
      {
        *(uint *)(v3 + 24) = *(uint *)(v3 + 128);
        Function_20359dc(22, v3 + 20, 8);
      }
      Function_226178c(v3, v12, 7, v2);
      goto LABEL_67;
    case 7:
      Function_226178c(v3, *(uint *)(v3 + 8), 8, v2);
      goto LABEL_67;
    case 8:
      ((void (__fastcall *)(uint))dword_225CB8C[0])(*(uint *)(v3 + 132));
      Function_226178c(v3, 1, 9, v2);
      goto LABEL_67;
    case 9:
      v13 = ((int (__fastcall *)(uint))dword_225CBE0[0])(*(uint *)(v3 + 132));
      if ( v13 )
      {
        Function_2262264(*(uint *)(v3 + 4));
        Function_2262004(*(uint *)(v3 + 4));
      }
      Function_226178c(v3, v13, 10, v2);
      goto LABEL_67;
    case 0xA:
      v14 = *(uint *)(v3 + 12);
      if ( v14 && *(uint *)(*(uint *)(v3 + 4) + 10980) < 1200 )
        v14 = 0;
      if ( !v14 )
      {
        if ( Function_22617c4(v3) == 1 && !Function_2262a74(*(uint *)v3) )
        {
          Function_20057a4(1393, 0);
          Function_20359dc(23, 0, 0);
        }
        Function_2263b30(*(uint *)(v3 + 4));
      }
      Function_226178c(v3, v14, 11, v2);
      goto LABEL_67;
    case 0xB:
      Function_20057a4(1395, 0);
      Function_20057a4(1393, 0);
      ((void (__fastcall *)(uint))dword_225CBB0[0])(*(uint *)(v3 + 132));
      Function_226178c(v3, 1, 12, v2);
      goto LABEL_67;
    case 0xC:
      v15 = ((int (__fastcall *)(uint))dword_225CBE0[0])(*(uint *)(v3 + 132));
      Function_226178c(v3, v15, 13, v2);
      goto LABEL_67;
    case 0xD:
      v16 = s32_div_f(*(uint *)(*(uint *)(v3 + 4) + 10992), 10);
      *(uint *)(v3 + 28) = 100 * v16;
      if ( 100 * v16 >= 0x186A0 )
        *(uint *)(v3 + 28) = 100000;
      if ( !*(uint *)(*(uint *)(v3 + 4) + 11156) )
        *(uint *)(v3 + 28) = 1;
      Function_20359dc(25, v3 + 28, 8);
      Function_226178c(v3, 1, 14, v2);
      goto LABEL_67;
    case 0xE:
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = v3;
      do
      {
        if ( *(uint *)(v20 + 36) )
          ++v18;
        ++v19;
        v20 += 8;
      }
      while ( v19 < 4 );
      if ( v18 == *(uint *)(*(uint *)(v3 + 4) + 4) )
        v17 = 1;
      Function_226178c(v3, v17, 15, v2);
      goto LABEL_67;
    case 0xF:
      v21 = Function_2261768(26);
      Function_226178c(v3, v21, 16, v2);
      goto LABEL_67;
    case 0x10:
      v22 = Function_200f2ac();
      if ( v22 )
        Function_22610fc(v3);
      Function_226178c(v3, v22, 17, v2);
      goto LABEL_67;
    case 0x11:
      v23 = 0;
      v24 = v3;
      do
      {
        v25 = Function_2264680(v3, v23);
        if ( v25 != 255 )
        {
          v26 = 4 * v25;
          *(uint *)(v3 + v26 + 160) = *(uint *)(v24 + 36);
          if ( *(uint *)(v3 + v26 + 160) <= 1u )
            *(uint *)(v3 + v26 + 160) = 0;
        }
        ++v23;
        v24 += 8;
      }
      while ( v23 < 4 );
      ((void (__fastcall *)(int, uint))dword_225C9A8[0])(v3 + 160, *(uchar *)(v3 + 148));
      *(uint *)(v3 + 184) = ((int (__fastcall *)(int, int, int))dword_225C8EC[0])(v3 + 140, v3 + 160, 106);
      Function_226178c(v3, 1, 18, v2);
      goto LABEL_67;
    case 0x12:
      v27 = ((int (__fastcall *)(uint))dword_225C9A0)(*(uint *)(v3 + 184));
      if ( v27
        && (v28 = ((int (__fastcall *)(uint))dword_225C9A4)(*(uint *)(v3 + 184)),
            ((void (__fastcall *)(uint))dword_225C904[0])(*(uint *)(v3 + 184)),
            *(uint *)(v3 + 184) = 0,
            v28) )
      {
        *(uint *)(v3 + 204) = 1;
        Function_2261244(v3);
        Function_226178c(v3, v27, 0, v2);
        if ( *(uint *)(*(uint *)(v3 + 136) + 60) )
          ((void (*)(void))dword_21D1F18[0])();
      }
      else
      {
        Function_226178c(v3, v27, 19, v2);
      }
      goto LABEL_67;
    case 0x13:
      Function_20364f0(27);
      if ( *(uint *)(*(uint *)(v3 + 136) + 60) )
        ((void (*)(void))dword_21D1F18[0])();
      Function_226178c(v3, 1, 20, v2);
LABEL_67:
      if ( *v2 >= 3 && *v2 < 16 )
      {
        Function_2261f08(*(uint *)(v3 + 4));
        Function_2261940(v3);
      }
      result = 0;
      break;
    default:
      result = Function_2036540(27) == 1;
      break;
  }
  return result;
}

//----- (022610FC) --------------------------------------------------------
int __fastcall Function_22610fc(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201dc3c();
  Function_201e530();
  SetPRNGSeed(v1[32]);
  Function_2261f3c(v1[1]);
  Function_2261df0(v1[1]);
  Function_2261e40(v1[1]);
  Function_226281c(v1[1]);
  Function_22628ac(v1[1]);
  Function_226192c(v1[1] + 276);
  Function_226192c(v1[1] + 800);
  Function_226192c(v1[1] + 1324);
  Function_226192c(v1[1] + 1848);
  Function_226192c(v1[1] + 2372);
  Function_20171a0((int *)(v1[1] + 936), (int)(v1 + 27));
  Function_20171a0((int *)(v1[1] + 956), (int)(v1 + 27));
  Function_20171a0((int *)(v1[1] + 976), (int)(v1 + 27));
  Function_20171a0((int *)(v1[1] + 1460), (int)(v1 + 27));
  Function_20171a0((int *)(v1[1] + 1984), (int)(v1 + 27));
  v2 = 0;
  v3 = 0;
  do
  {
    Function_226192c(v1[1] + 2896 + v3);
    Function_20171a0((int *)(v1[1] + 3032 + v3), (int)(v1 + 27));
    Function_20171a0((int *)(v1[1] + 3052 + v3), (int)(v1 + 27));
    ++v2;
    v3 += 524;
  }
  while ( v2 < 8 );
  ((void (__fastcall *)(uint))dword_225CB38[0])(v1[33]);
  Function_226139c(v1);
  if ( Function_22617c4(v1) == 1 )
    Function_2262a6c(*v1);
  Function_2262c64(v1[1]);
  result = 0;
  *v1 = 0;
  v1[1] = 0;
  return result;
}

//----- (02261244) --------------------------------------------------------
int *__fastcall Function_2261244(int a1)
{
  uchar *v1;

  *(uint *)(a1 + 12) = 0;
  *(uint *)(a1 + 8) = 0;
  *(uint *)(a1 + 16) = 0;
  *(uchar *)(a1 + 28) = 0;
  v1 = (uchar *)(a1 + 28);
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  v1[4] = 0;
  v1[5] = 0;
  v1[6] = 0;
  v1[7] = 0;
  return Call_FillMemWithValue((int *)(a1 + 36), 0, 0x20u);
}

//----- (0226126C) --------------------------------------------------------
int __fastcall Function_116_226126c(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v7;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
  {
    if ( Function_2036540(231) == 1 )
      return 1;
    v7 = Function_2035e18();
    if ( v7 < Function_2032e64() )
      return 1;
  }
  else
  {
    v4 = LoadOverlayData1c(a1);
    v5 = Function_22617e4(v4);
    FreeSomeDataAndStore0InOverlayData1c(v3);
    Function_201807c(106);
    Function_20388f4(0, 1);
    if ( v5 )
      return 1;
    Function_20364f0(231);
    ++*v2;
  }
  return 0;
}

//----- (022612CC) --------------------------------------------------------
uint __fastcall Function_22612cc(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  short v7;
  int v8;

  v4 = a1;
  a1[18] = LoadFromNARC_8(164, 0x6Au, a3, a4);
  v4[19] = LoadFromNARC_8(158, 0x6Au, v5, v6);
  v4[22] = Function_2018340(0x6Au);
  v4[23] = MallocFill120(0x6Au);
  v4[24] = Function_2024220(0x6Au, 0, 1, 0, 4, 0);
  v4[25] = Function_20203ac(0x6Au);
  Function_2261c88(v4);
  Function_2003858(v4[23], 1);
  Function_2002f70(v4[23], 0, 512, 0x6Au);
  Function_2002f70(v4[23], 1, 512, 0x6Au);
  Function_2002f70(v4[23], 2, 512, 0x6Au);
  Function_2002f70(v4[23], 3, 512, 0x6Au);
  Function_2261494(v4[22]);
  Function_22616cc(v4);
  v7 = GFX_CONTROL & 0xCFFF;
  v8 = (GFX_CONTROL & 0xCFFF | 8) & 0xCFFF;
  GFX_CONTROL = v8 | 0x20;
  SetEdgeTable((int)&dword_22677AC[2], v8 | 0x20, v8, v7);
  return Function_20182cc(v4 + 27, 0x6Au, 32);
}

//----- (0226139C) --------------------------------------------------------
int __fastcall Function_226139c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_201ff0c(4u, 0);
  Function_201ff0c(8u, 0);
  Function_201ff74(1u, 0);
  Function_201ff74(2u, 0);
  Function_201ff74(4u, 0);
  Function_201ff74(8u, 0);
  Function_2019044(*(uint *)(v1 + 88), 0);
  Function_2019044(*(uint *)(v1 + 88), 1);
  Function_2019044(*(uint *)(v1 + 88), 2);
  Function_2019044(*(uint *)(v1 + 88), 3);
  Function_2019044(*(uint *)(v1 + 88), 4);
  Function_2019044(*(uint *)(v1 + 88), 5);
  Function_2019044(*(uint *)(v1 + 88), 6);
  Function_2019044(*(uint *)(v1 + 88), 7);
  free(*(uint *)(v1 + 88));
  Function_2002fa0(*(uint *)(v1 + 92), 0);
  Function_2002fa0(*(uint *)(v1 + 92), 1);
  Function_2002fa0(*(uint *)(v1 + 92), 2);
  Function_2002fa0(*(uint *)(v1 + 92), 3);
  Call_free1(*(uint *)(v1 + 92));
  Call_FS_CloseFile(*(int **)(v1 + 72));
  Call_FS_CloseFile(*(int **)(v1 + 76));
  Function_20242c4(*(uint *)(v1 + 96));
  Call_free5(*(uint *)(v1 + 100));
  Function_200d0b0(*(uint *)(v1 + 80), *(int ***)(v1 + 84));
  Function_200c8d4(*(uint *)(v1 + 80));
  byte_21BF6E1 = 0;
  Function_201ffe8();
  result = GFX_CONTROL & 0xCFF7;
  GFX_CONTROL &= 0xCFF7u;
  return result;
}

//----- (02261494) --------------------------------------------------------
int *__fastcall Function_2261494(uint *a1)
{
  uint *v1;
  int *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  char v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;
  char v30;

  v1 = a1;
  Function_201ff00();
  v19 = 1;
  v20 = 0;
  v21 = 0;
  v22 = 1;
  SetGraphicsModes(&v19);
  v2 = dword_2267810;
  v3 = &v18;
  v4 = 5;
  do
  {
    v5 = *v2;
    v6 = v2[1];
    v2 += 2;
    *(uint *)v3 = v5;
    *((uint *)v3 + 1) = v6;
    v3 += 8;
    --v4;
  }
  while ( v4 );
  GX_SetBanks((int *)&v18);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v7 = dword_2267838;
  v8 = &v27;
  v9 = 14;
  do
  {
    v10 = *v7;
    v11 = v7[1];
    v7 += 2;
    *(uint *)v8 = v10;
    *((uint *)v8 + 1) = v11;
    v8 += 8;
    --v9;
  }
  while ( v9 );
  Function_2019690(1u, 32, 0, 0x6Au);
  Function_2019690(2u, 32, 0, 0x6Au);
  Function_2019690(3u, 32, 0, 0x6Au);
  Function_20183c4(v1, 1u, (int *)&v28, 0);
  Function_20183c4(v1, 2u, (int *)&v29, 0);
  Function_20183c4(v1, 3u, (int *)&v30, 0);
  Function_2019ebc(v1, 0);
  Function_2019ebc(v1, 1u);
  Function_2019ebc(v1, 2u);
  Function_2019ebc(v1, 3u);
  v12 = dword_22678A8;
  v13 = &v23;
  v14 = 14;
  do
  {
    v15 = *v12;
    v16 = v12[1];
    v12 += 2;
    *(uint *)v13 = v15;
    *((uint *)v13 + 1) = v16;
    v13 += 8;
    --v14;
  }
  while ( v14 );
  Function_2019690(4u, 32, 0, 0x6Au);
  Function_2019690(5u, 32, 0, 0x6Au);
  Function_2019690(6u, 32, 0, 0x6Au);
  Function_2019690(7u, 32, 0, 0x6Au);
  Function_20183c4(v1, 4u, (int *)&v23, 0);
  Function_20183c4(v1, 5u, (int *)&v24, 0);
  Function_20183c4(v1, 6u, (int *)&v25, 0);
  Function_20183c4(v1, 7u, (int *)&v26, 0);
  Function_2019ebc(v1, 4u);
  Function_2019ebc(v1, 5u);
  Function_2019ebc(v1, 6u);
  Function_2019ebc(v1, 7u);
  Function_2019690(4u, 32, 0, 0x6Au);
  Function_2019690(5u, 32, 0, 0x6Au);
  Function_2019690(6u, 32, 0, 0x6Au);
  Function_2019690(7u, 32, 0, 0x6Au);
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 1);
  Function_201ff0c(4u, 1);
  Function_201ff0c(8u, 1);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(1u, 1);
  Function_201ff74(2u, 1);
  Function_201ff74(4u, 1);
  Function_201ff74(8u, 1);
  Function_201ff74(0x10u, 1);
  byte_21BF6E1 = 1;
  Function_201ffe8();
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 30, 7, 10);
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 0, 17, 7, 10);
}

//----- (022616CC) --------------------------------------------------------
int __fastcall Function_22616cc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
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

  v27 = a4;
  v4 = a1;
  *(uint *)(a1 + 80) = Function_200c6e4(0x6Au);
  v19 = 0;
  v20 = 128;
  v21 = 0;
  v22 = 32;
  v23 = 0;
  v24 = 128;
  v25 = 0;
  v26 = 32;
  v14 = 128;
  v15 = 0x10000;
  v16 = 0x4000;
  v17 = 2097168;
  v18 = 16;
  Function_200c73c(*(uint **)(v4 + 80), &v19, &v14, 32);
  v8 = 128;
  v9 = 32;
  v10 = 128;
  v11 = 128;
  v12 = 16;
  v13 = 16;
  *(uint *)(v4 + 84) = Function_200c704(*(uint **)(v4 + 80));
  if ( !Function_200c7c0(*(int **)(v4 + 80), *(int ***)(v4 + 84), 255) )
    ErrorHandler();
  if ( !Function_200cb30(*(uint **)(v4 + 80), *(uint *)(v4 + 84), &v8) )
    ErrorHandler();
  v5 = Function_200c738(*(uint *)(v4 + 80));
  return Function_200964c(v5, 0, 0x100000, v6);
}

//----- (02261768) --------------------------------------------------------
int __fastcall Function_2261768(int a1)
{
  Function_200f174(0, a1, a1, 0, 6, 1, 106);
  return 1;
}

//----- (0226178C) --------------------------------------------------------
void __fastcall Function_226178c(int a1, int a2, int a3, uint *a4)
{
  if ( a2 )
    *a4 = a3;
}

//----- (02261794) --------------------------------------------------------
int __fastcall Function_2261794(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201dcac();
  Function_200c800();
  Function_2003694(*(uint *)(v1 + 92));
  Function_201c2b8(*(uint *)(v1 + 88));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (022617C4) --------------------------------------------------------
BOOL __fastcall Function_22617c4(int a1)
{
  return *(uint *)(a1 + 68) == 0;
}

//----- (022617D4) --------------------------------------------------------
int __fastcall Function_22617d4(int result)
{
  *(uint *)(result + 8) = 1;
  return result;
}

//----- (022617DC) --------------------------------------------------------
int __fastcall Function_22617dc(int result)
{
  *(uint *)(result + 12) = 1;
  return result;
}

//----- (022617E4) --------------------------------------------------------
int __fastcall Function_22617e4(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  if ( ((int (__fastcall *)(int))dword_225CA54[0])(a1 + 140) != 1 )
    return 0;
  if ( *(uchar *)(v1 + 124) )
  {
    if ( ((int (__fastcall *)(int))dword_225CA98[0])(v1 + 140) )
    {
      v3 = *(uint *)(v1 + 4);
      if ( v3 )
      {
        Function_2262264(v3);
        Function_2262004(*(uint *)(v1 + 4));
        Function_22610fc((uint *)v1);
      }
      if ( *(uint *)(v1 + 184) )
      {
        ((void (*)(void))dword_225C904[0])();
        *(uint *)(v1 + 184) = 0;
      }
      if ( *(uint *)(v1 + 156) )
      {
        ((void (*)(void))dword_225C838[0])();
        *(uint *)(v1 + 156) = 0;
      }
      result = 2;
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    if ( Function_200f2ac() == 1 )
      Function_200f2c0();
    SetBrightnessOfBothScreens(0);
    result = 1;
    *(uchar *)(v1 + 124) = 1;
  }
  return result;
}

//----- (02261870) --------------------------------------------------------
int *__fastcall Function_2261870(int a1, int a2, int a3)
{
  uint *v3;
  int *result;
  int v5;
  int v6;

  v3 = (uint *)a1;
  result = *(int **)(a1 + 108);
  v5 = a2;
  v6 = a3;
  if ( result )
  {
    Function_20af480();
    Function_20b275c(28, v6, 3);
    Function_20b275c(25, v5, 12);
    Function_20af4ec(v3 + 24);
    result = Function_20afefc(v3);
  }
  return result;
}

//----- (022618A8) --------------------------------------------------------
uint *__fastcall Function_22618a8(int a1, int a2, uint a3)
{
  return Function_20170d8((int *)(a1 + 120), a2, a3, 106);
}

//----- (022618B4) --------------------------------------------------------
int __fastcall Function_22618b4(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_2017258(a1, (int)(a1 + 30));
  Function_2017350(v2, 0, -81920, 0);
  if ( v3 )
    Function_201736c(v2, 6144, 6144, 6144);
  else
    Function_201736c(v2, 4096, 4096, 4096);
  Function_2017348((int)v2, 1);
  v2[120] = 0;
  v2[121] = -81920;
  v2[122] = 0;
  v2[127] = 0;
  v2[128] = 0;
  v2[123] = 0;
  result = 1;
  v2[124] = 1;
  return result;
}

//----- (0226192C) --------------------------------------------------------
int __fastcall Function_226192c(int a1)
{
  *(uint *)(a1 + 496) = 0;
  return Function_2017110((int *)(a1 + 120));
}

//----- (02261940) --------------------------------------------------------
int __fastcall Function_2261940(int a1)
{
  int v1;
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
  int v19;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;

  v1 = a1;
  Call_G3X_Reset();
  Function_20203ec();
  v27 = 0;
  v28 = -4096;
  v29 = -4096;
  VEC_Normalize(&v27, &v27);
  Function_20af51c(0, (short)v27, (short)v28, (short)v29);
  Function_20af558(0, 0x7FFF);
  Function_20af56c(0x7FFF, 0x7FFF, 0);
  Function_20af590(0x7FFF, 0x7FFF, 0);
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = *(uint *)(v1 + 4) + 2896 + v3;
    Function_20b275c(17, 0, 0);
    Function_2261870(v4, v4 + 432, v4 + 480);
    v26 = 1;
    Function_20b275c(18, (int)&v26, 1);
    Function_20171cc(*(uint *)(v1 + 4) + 3032 + v3, 4096);
    ++v2;
    v3 += 524;
  }
  while ( v2 < 8 );
  v5 = *(uint *)(v1 + 4);
  v6 = *(uint *)(v5 + 272);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      Function_2017348(v5 + 800, 0);
      Function_2017348(*(uint *)(v1 + 4) + 1324, 1);
      Function_2017348(*(uint *)(v1 + 4) + 1848, 0);
      Function_2017204(*(uint *)(v1 + 4) + 1460, 4096);
    }
    else if ( v6 == 2 )
    {
      Function_2017348(v5 + 800, 0);
      Function_2017348(*(uint *)(v1 + 4) + 1324, 0);
      Function_2017348(*(uint *)(v1 + 4) + 1848, 1);
      Function_2017204(*(uint *)(v1 + 4) + 1984, 4096);
    }
  }
  else
  {
    Function_2017348(v5 + 800, 1);
    Function_2017348(*(uint *)(v1 + 4) + 1324, 0);
    Function_2017348(*(uint *)(v1 + 4) + 1848, 0);
    Function_20171cc(*(uint *)(v1 + 4) + 936 + 20 * *(uint *)(*(uint *)(v1 + 4) + 1300), 4096);
  }
  v7 = *(uint *)(v1 + 4);
  v8 = v7 + 800;
  v9 = 524 * *(uint *)(v7 + 272);
  Function_20b275c(17, 0, 0);
  Function_2261870(v8 + v9, v8 + 432, v8 + 480);
  v25 = 1;
  Function_20b275c(18, (int)&v25, 1);
  v10 = *(uint *)(v1 + 4) + 276;
  Function_20b275c(17, 0, 0);
  Function_2261870(v10, v10 + 432, v10 + 480);
  v24 = 1;
  Function_20b275c(18, (int)&v24, 1);
  v11 = *(uint *)(v1 + 4) + 2372;
  Function_20b275c(17, 0, 0);
  Function_2261870(v11, v11 + 432, v11 + 480);
  v23 = 1;
  Function_20b275c(18, (int)&v23, 1);
  v12 = *(uint *)(v1 + 4);
  if ( *(uint *)(v12 + 8108) )
  {
    v13 = v12 + 7612;
    Function_20b275c(17, 0, 0);
    Function_2261870(v13, v13 + 432, v13 + 480);
    v22 = 1;
    Function_20b275c(18, (int)&v22, 1);
    v14 = *(uint *)(v1 + 4);
    if ( *(uint *)(v14 + 8104) )
    {
      v15 = Function_2017204(v14 + 7748, 4096);
      v16 = Function_2017204(*(uint *)(v1 + 4) + 7768, 4096);
      if ( v15 )
      {
        if ( v16 )
          *(uint *)(*(uint *)(v1 + 4) + 8104) = 0;
      }
    }
  }
  v17 = *(uint *)(v1 + 4);
  if ( *(uint *)(v17 + 7584) )
  {
    v18 = v17 + 7088;
    Function_20b275c(17, 0, 0);
    Function_2261870(v18, v18 + 432, v18 + 480);
    v21 = 1;
    Function_20b275c(18, (int)&v21, 1);
    v19 = *(uint *)(v1 + 4);
    if ( *(uint *)(v19 + 7580) )
      Function_20171cc(v19 + 7244, 4096);
  }
  Function_20241bc(0, 1);
  return Function_200c7ec(*(int **)(v1 + 84));
}

//----- (02261C48) --------------------------------------------------------
uint __fastcall Function_2261c48(int a1, int a2)
{
  int v2;
  uint result;
  int v4;
  int v5;

  v2 = a1;
  result = 1300;
  v4 = a2;
  v5 = *(uint *)(v2 + 1300);
  if ( v4 != v5 )
  {
    Function_2017288((int *)(v2 + 800), v2 + 936 + 20 * v5);
    *(uint *)(v2 + 1300) = v4;
    result = Function_201727c(v2 + 800, v2 + 936 + 20 * v4);
  }
  return result;
}

//----- (02261C88) --------------------------------------------------------
int __fastcall Function_2261c88(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v4 = a1;
  v6 = 0;
  v7 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v8 = 655360;
  Function_2020784(&v9, &v6, 2912, 0, 0, *(uint *)(a1 + 100));
  Function_20206bc(-4096000, 4096000, *(uint *)(v4 + 100));
  return Function_20203d4(*(uint *)(v4 + 100));
}

//----- (02261CD8) --------------------------------------------------------
int __fastcall Function_2261cd8(int result, short a2, short a3, int a4, int a5, int a6)
{
  *(ushort *)result = a2;
  *(ushort *)(result + 2) = a3;
  *(ushort *)(result + 4) = 0;
  *(ushort *)(result + 6) = 0;
  *(uint *)(result + 8) = 0;
  *(uint *)(result + 16) = a4;
  *(uint *)(result + 44) = 2;
  *(uint *)(result + 48) = 0;
  *(uint *)(result + 12) = a5;
  *(uint *)(result + 20) = a6;
  *(uint *)(result + 24) = a6;
  *(uint *)(result + 28) = a6;
  *(uint *)(result + 32) = a6;
  *(uint *)(result + 36) = -1;
  *(uint *)(result + 40) = -1;
  return result;
}

//----- (02261D08) --------------------------------------------------------
int __fastcall Function_2261d08(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  short v5;
  int *v6;
  int v7;
  int v9;
  uint *v10;
  char v11;

  v1 = *(uint *)(a1 + 20);
  v9 = a1;
  v2 = 0;
  v3 = *(uint *)(v1 + 12);
  v4 = a1;
  v10 = *(uint **)(v1 + 8);
  v5 = 0;
  do
  {
    Function_2261cd8((int)&v11, v5, 20, 1, 3, 9006);
    v6 = Function_200ce6c(v10, v3, (short *)&v11);
    *(uint *)(v4 + 64) = v6;
    Function_200d430(v6, 3);
    s32_div_f(v2, 11);
    Function_200d364(*(int **)(v4 + 64), v7 + 1);
    ++v2;
    v5 += 8;
    v4 += 4;
  }
  while ( v2 < 36 );
  return Function_2261e0c(v9);
}

//----- (02261D70) --------------------------------------------------------
int __fastcall Function_2261d70(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  short *v6;
  int v7;
  int v8;
  int result;
  uint *v10;
  char v11;
  short v12;
  short v13;
  short v14;
  char v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 20);
  v6 = (short *)&v11;
  v7 = *(uint *)(v5 + 12);
  v10 = *(uint **)(v5 + 8);
  v8 = 0;
  *(ushort *)&v11 = 72;
  v12 = 180;
  v13 = 24;
  v14 = 232;
  do
  {
    Function_2261cd8((int)&v15, *v6, 224, 1, 1, 9004);
    v17 = 0;
    v16 = 1;
    *(uint *)(v4 + 208) = Function_200ce6c(v10, v7, (short *)&v15);
    Function_200d33c(*(int **)(v4 + 208));
    result = Function_200d430(*(int **)(v4 + 208), 1);
    ++v8;
    ++v6;
    v4 += 4;
  }
  while ( v8 < 4 );
  return result;
}

//----- (02261DF0) --------------------------------------------------------
uint __fastcall Function_2261df0(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_200d0f4(*(uint *)(v1 + 208));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  return result;
}

//----- (02261E0C) --------------------------------------------------------
uint __fastcall Function_2261e0c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_200d3f4(*(uint **)(v2 + 64), v3);
    ++v4;
    v2 += 4;
  }
  while ( v4 < 36 );
  return result;
}

//----- (02261E28) --------------------------------------------------------
uint __fastcall Function_2261e28(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_200d33c(*(int **)(v1 + 64));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 36 );
  return result;
}

//----- (02261E40) --------------------------------------------------------
uint __fastcall Function_2261e40(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_200d0f4(*(uint *)(v1 + 64));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 36 );
  return result;
}

//----- (02261E58) --------------------------------------------------------
int __fastcall Function_2261e58(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
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
  v4 = a1;
  v8 = 0;
  v9 = 2;
  v10 = 0;
  v11 = 3;
  v12 = 0;
  v13 = 4;
  v14 = 1;
  v15 = 2;
  v5 = 8 * a3;
  v6 = 4 * *(ushort *)(a1 + 2 * a2 + 244);
  Function_200d364(*(int **)(a1 + v6 + 28), *(&v8 + 2 * a3));
  return Function_200d364(*(int **)(v4 + v6 + 40), *(int *)((char *)&v9 + v5));
}

//----- (02261EA4) --------------------------------------------------------
int __fastcall Function_2261ea4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v2 = a1;
  v9 = 0;
  v10 = 2;
  v11 = 0;
  v12 = 3;
  v13 = 0;
  v14 = 4;
  v15 = 1;
  v16 = 2;
  v3 = 4 * *(ushort *)(a1 + 2 * a2 + 244);
  v4 = Function_200d37c(*(int **)(a1 + v3 + 28));
  v5 = Function_200d37c(*(int **)(v2 + v3 + 40));
  v6 = 0;
  v7 = &v9;
  do
  {
    if ( v4 == *v7 && v5 == v7[1] )
      return v6;
    ++v6;
    v7 += 2;
  }
  while ( v6 < 4 );
  ErrorHandler();
  return 0;
}

//----- (02261F08) --------------------------------------------------------
int *__fastcall Function_2261f08(int **a1)
{
  int **v1;
  int *result;
  int *v3;
  int **v4;

  v1 = a1;
  result = a1[1];
  v3 = 0;
  if ( (int)result > 0 )
  {
    v4 = v1;
    do
    {
      if ( v3 != *v1 )
      {
        Function_200d33c(v4[7]);
        Function_200d33c(v4[10]);
        Function_200d33c(v4[13]);
        ++v4;
      }
      result = v1[1];
      v3 = (int *)((char *)v3 + 1);
    }
    while ( (int)v3 < (int)result );
  }
  return result;
}

//----- (02261F3C) --------------------------------------------------------
int __fastcall Function_2261f3c(int *a1)
{
  int *v1;
  int result;
  int v3;
  int *v4;

  v1 = a1;
  result = a1[1];
  v3 = 0;
  if ( result > 0 )
  {
    v4 = v1;
    do
    {
      if ( v3 != *v1 )
      {
        Function_200d0f4(v4[7]);
        Function_200d0f4(v4[10]);
        Function_200d0f4(v4[13]);
        ++v4;
      }
      result = v1[1];
      ++v3;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (02261F70) --------------------------------------------------------
int __fastcall Function_2261f70(int a1)
{
  int v1;
  ushort **v2;
  ushort *v3;
  int v4;
  int v5;

  v1 = a1;
  Function_201a7a0(a1 + 8160);
  Function_201a7e8(*(uint **)(*(uint *)(v1 + 20) + 16), v1 + 8160, 7, 2, 19, 0x1Cu, 4u, 14, 304);
  Function_201ada4_ClearTextBox(v1 + 8160, 255);
  v2 = (ushort **)LoadFromMsgNARC(0, 26, 410, 0x6Au);
  v3 = Function_200b1ec_CallMsgDecrypt(v2, 0);
  Function_201d738_CallInitTextInterpreter(v1 + 8160, 0);
  Function_20237bc_FreeMsg((int)v3, v4);
  Function_200b190((ushort *)v2);
  Function_200dc48(v1 + 8160, 0, 180, 0xDu);
  return Function_201a954(v1 + 8160, v5);
}

//----- (02262004) --------------------------------------------------------
uint __fastcall Function_2262004(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  result = Function_201a7cc(a1 + 8160);
  if ( result == 1 )
  {
    Function_200dc9c(v1 + 8160, 1);
    Function_201acf4(v1 + 8160);
    result = Function_201a8fc(v1 + 8160);
  }
  return result;
}

//----- (02262034) --------------------------------------------------------
uint __fastcall Function_2262034(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  uint result;
  int v7;

  v2 = a1;
  v3 = 0;
  v7 = *(uint *)(a1 + 92);
  v4 = 0;
  v5 = &dword_2267F20[5 * a2];
  do
  {
    result = Function_2002fec(
               v7,
               164,
               73,
               106,
               1,
               32,
               16 * (v3++ + 1),
               16 * LOWORD(v5[20 * *(uint *)(*(uint *)(v2 + 4) + 4) - 19 + v4]));
    ++v4;
  }
  while ( v3 < 4 );
  return result;
}

//----- (0226208C) --------------------------------------------------------
int __fastcall Function_226208c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = Function_2002d7c(0, a2, 0);
  return (8 * Function_201c294(v2) - v3) / 2;
}

//----- (022620AC) --------------------------------------------------------
int __fastcall Function_22620ac(int a1, int a2)
{
  int v2;
  short *v3;
  char *v4;
  int v5;
  short v6;
  int v7;
  int result;
  int v9;
  int v10;
  char *v11;
  short v12;
  ushort *v13;
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
  ushort *v26;
  int v27;
  char v28;

  v21 = a1;
  v2 = a2;
  v3 = &word_2267AF0;
  v24 = 256;
  v4 = &v28;
  v5 = 36;
  do
  {
    v6 = *v3;
    ++v3;
    *(ushort *)v4 = v6;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v7 = *(uint *)(v2 + 4);
  switch ( v7 )
  {
    case 2:
      Function_200710c(**(uint **)(v2 + 20), 0x4Fu, *(uint **)(*(uint *)(v2 + 20) + 16), 7u, 0, 0, 0, 106);
      break;
    case 3:
      Function_200710c(**(uint **)(v2 + 20), 0x50u, *(uint **)(*(uint *)(v2 + 20) + 16), 7u, 0, 0, 0, 106);
      break;
    case 4:
      Function_200710c(**(uint **)(v2 + 20), 0x51u, *(uint **)(*(uint *)(v2 + 20) + 16), 7u, 0, 0, 0, 106);
      break;
    default:
      ErrorHandler();
      break;
  }
  result = *(uint *)(v2 + 4);
  v9 = 0;
  if ( result > 0 )
  {
    v22 = 0;
    v10 = v2 + 8176;
    v21 += 140;
    do
    {
      if ( v9 != *(uint *)v2 )
      {
        v25 = ((int (__fastcall *)(int, int))dword_225C7A4[0])(v21, v9);
        v26 = (ushort *)((int (__fastcall *)(int, int))dword_225C7CC[0])(v21, v9);
        Function_201a7a0(v10);
        v11 = &v28 + 24 * *(uint *)(v2 + 4) + v22;
        v23 = *((short *)v11 - 22);
        v27 = *((short *)v11 - 21);
        v12 = *((ushort *)v11 - 23) & 0xFF;
        v16 = (uchar)v23;
        v17 = (uchar)v27;
        v18 = 14;
        v19 = (ushort)v24;
        Function_201a7e8(
          *(uint **)(*(uint *)(v2 + 20) + 16),
          v10,
          7,
          *((ushort *)v11 - 24),
          v12,
          v23,
          v27,
          14,
          v24);
        v24 += v23 * v27;
        Function_201ada4_ClearTextBox(v10, 255);
        v13 = Function_2025f04(v26, 0x6Au);
        Function_226208c(v10, (int)v13);
        if ( v25 )
        {
          v16 = 0;
          v17 = 329231;
        }
        else
        {
          v16 = 0;
          v17 = 66063;
        }
        v18 = 0;
        v19 = 0;
        v20 = 0;
        Function_201d7e0(v10, 0);
        Function_20237bc_FreeMsg((int)v13, v14);
        Function_201a954(v10, v15);
        v10 += 16;
        v22 += 8;
      }
      result = *(uint *)(v2 + 4);
      ++v9;
    }
    while ( v9 < result );
  }
  return result;
}

//----- (02262264) --------------------------------------------------------
int __fastcall Function_2262264(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 4) > 0 )
  {
    v3 = a1 + 8176;
    do
    {
      if ( v2 != *(uint *)v1 )
      {
        if ( Function_201a7cc(v3) == 1 )
        {
          Function_200dc9c(v3, 1);
          Function_201acf4(v3);
          Function_201a8fc(v3);
        }
        v3 += 16;
      }
      ++v2;
    }
    while ( v2 < *(uint *)(v1 + 4) );
  }
  return Function_200710c(
           **(uint **)(v1 + 20),
           0x4Eu,
           *(uint **)(*(uint *)(v1 + 20) + 16),
           7u,
           0,
           0,
           0,
           106);
}

//----- (022622C8) --------------------------------------------------------
uint __fastcall Function_22622c8(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int *v7;

  v1 = *(uint *)(a1 + 72);
  v2 = *(uint *)(a1 + 84);
  v3 = *(uint **)(a1 + 80);
  v4 = *(uint *)(a1 + 92);
  Function_200cc3c(*(uint **)(a1 + 80), *(uint *)(a1 + 84), v1, 0x54u, 0, 2, 9000);
  Function_200ce24(v3, v2, v1, 0x53u, 0, 9000);
  Function_200ce54(v3, v2, v1, 0x52u, 0, 9000);
  Function_200cdc4(v4, 3u, v3, v2, v1, 0x55u, 0, 13, 2, 9000);
  Function_200cc3c(v3, v2, v1, 0x1Du, 0, 1, 9003);
  Function_200ce24(v3, v2, v1, 0x1Cu, 0, 9003);
  Function_200ce54(v3, v2, v1, 0x1Bu, 0, 9003);
  Function_200cdc4(v4, 2u, v3, v2, v1, 0x1Eu, 0, 1, 1, 9003);
  Function_200cc3c(v3, v2, v1, 0xDu, 0, 1, 9004);
  Function_200ce24(v3, v2, v1, 0xCu, 0, 9004);
  Function_200ce54(v3, v2, v1, 0xBu, 0, 9004);
  Function_200cdc4(v4, 2u, v3, v2, v1, 0xEu, 0, 1, 1, 9004);
  Function_200cc3c(v3, v2, v1, 0x15u, 0, 1, 9005);
  Function_200ce24(v3, v2, v1, 0x14u, 0, 9005);
  Function_200ce54(v3, v2, v1, 0x13u, 0, 9005);
  Function_200cdc4(v4, 2u, v3, v2, v1, 0x16u, 0, 1, 1, 9005);
  Function_200cc3c(v3, v2, v1, 0x11u, 0, 1, 9006);
  Function_200ce24(v3, v2, v1, 0x10u, 0, 9006);
  Function_200ce54(v3, v2, v1, 0xFu, 0, 9006);
  Function_200cdc4(v4, 2u, v3, v2, v1, 0x12u, 0, 1, 1, 9006);
  Function_200cc3c(v3, v2, v1, 0x19u, 0, 1, 9002);
  Function_200ce24(v3, v2, v1, 0x18u, 0, 9002);
  Function_200ce54(v3, v2, v1, 0x17u, 0, 9002);
  Function_200cdc4(v4, 2u, v3, v2, v1, 0x1Au, 0, 3, 1, 9002);
  v7 = LoadFromNARC_8(171, 0x6Au, v5, v6);
  Function_200cc3c(v3, v2, (int)v7, 0x15u, 0, 1, 9007);
  Function_200ce24(v3, v2, (int)v7, 0x16u, 0, 9007);
  Function_200ce54(v3, v2, (int)v7, 0x17u, 0, 9007);
  Function_200cdc4(v4, 2u, v3, v2, (int)v7, 0x14u, 0, 2, 1, 9007);
  return Call_FS_CloseFile(v7);
}

//----- (022625A8) --------------------------------------------------------
int __fastcall Function_22625a8(int a1, int **a2, int a3, int a4)
{
  int **v4;
  int *v5;
  int v6;
  int result;
  int v8;
  int **v9;
  char v10;
  char v11;
  int v12;
  int v13;
  int **v14;
  int v15;
  int v16;
  uint *v17;
  char v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a2;
  v5 = a2[5];
  v13 = a1;
  v6 = 0;
  v17 = (uint *)v5[2];
  v15 = 0;
  v16 = v5[3];
  result = (int)v4[1];
  if ( result > 0 )
  {
    v14 = v4;
    v8 = 0;
    v9 = v4;
    do
    {
      *((ushort *)v14 + 122) = 255;
      if ( (int *)v6 != *v4 )
      {
        *((ushort *)v14 + 122) = v15;
        Function_2261cd8((int)&v18, *(ushort *)((char *)&dword_2267A78 + 6 * (uint)v4[1] + v8 - 6), 240, 2, 0, 9000);
        v19 = 1;
        v9[7] = Function_200ce6c(v17, v16, (short *)&v18);
        Function_2261cd8((int)&v18, *(ushort *)((char *)&dword_2267A78 + 6 * (uint)v4[1] + v8 - 6), 240, 2, 0, 9000);
        v19 = 2;
        v9[10] = Function_200ce6c(v17, v16, (short *)&v18);
        v10 = Function_2264680(v13, v6);
        Function_200d430(v9[10], v10);
        Function_2261cd8((int)&v18, *(ushort *)((char *)&dword_2267A78 + 6 * (uint)v4[1] + v8 - 6), 240, 2, 0, 9000);
        v19 = 3;
        v9[13] = Function_200ce6c(v17, v16, (short *)&v18);
        v11 = Function_2264680(v13, v6);
        Function_200d430(v9[13], v11);
        Function_200d364(v9[13], 5u);
        Function_200d33c(v9[7]);
        Function_200d33c(v9[10]);
        Function_200d33c(v9[13]);
        Function_2261e58((int)v4, v6, 0, v12);
        v8 += 2;
        ++v9;
        ++v15;
      }
      ++v6;
      v14 = (int **)((char *)v14 + 2);
      result = (int)v4[1];
    }
    while ( v6 < result );
  }
  return result;
}

//----- (022626E8) --------------------------------------------------------
int *__fastcall Function_22626e8(int a1, short a2, short a3)
{
  int v3;
  uint *v4;
  int v5;
  int *v6;
  char v8;
  int v9;
  int v10;

  v3 = *(uint *)(a1 + 20);
  v4 = *(uint **)(v3 + 8);
  v5 = *(uint *)(v3 + 12);
  Function_2261cd8((int)&v8, a2, a3, 1, 0, 9003);
  v10 = 0;
  v9 = 0;
  v6 = Function_200ce6c(v4, v5, (short *)&v8);
  Function_200d33c(v6);
  return v6;
}

//----- (02262724) --------------------------------------------------------
int __fastcall Function_2262724(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 20);
  v6 = *(uint **)(v5 + 8);
  v7 = *(uint *)(v5 + 12);
  v9 = 0;
  do
  {
    Function_2261cd8((int)&v10, 0, 0, 1, 4, 9002);
    v12 = 2;
    v11 = 20;
    *(uint *)(v4 + 232) = Function_200ce6c(v6, v7, (short *)&v10);
    Function_200d364(*(int **)(v4 + 232), 0);
    Function_200d330(*(int **)(v4 + 232));
    Function_200d430(*(int **)(v4 + 232), 4);
    Function_200d810(*(int **)(v4 + 232), 1);
    Function_200d3f4(*(uint **)(v4 + 232), 0);
    Function_2261cd8((int)&v10, 0, 0, 2, 0, 9000);
    v12 = 2;
    v11 = 20;
    *(uint *)(v4 + 224) = Function_200ce6c(v6, v7, (short *)&v10);
    Function_200d364(*(int **)(v4 + 224), 6u);
    Function_200d330(*(int **)(v4 + 224));
    Function_200d430(*(int **)(v4 + 224), 0);
    Function_200d810(*(int **)(v4 + 224), 1);
    Function_200d3f4(*(uint **)(v4 + 224), 0);
    v4 += 4;
    result = v9 + 1;
    v9 = result;
  }
  while ( result < 2 );
  return result;
}

//----- (0226281C) --------------------------------------------------------
uint __fastcall Function_226281c(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_200d0f4(*(uint *)(v1 + 232));
    result = Function_200d0f4(*(uint *)(v1 + 224));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 2 );
  return result;
}

//----- (02262840) --------------------------------------------------------
int __fastcall Function_2262840(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  char v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 20);
  v6 = *(uint **)(v5 + 8);
  v7 = *(uint *)(v5 + 12);
  Function_2261cd8((int)&v9, 128, 128, 1, 7, 9007);
  v11 = 0;
  v10 = 0;
  *(uint *)(v4 + 240) = Function_200ce6c(v6, v7, (short *)&v9);
  Function_200d364(*(int **)(v4 + 240), 1u);
  Function_200d3f4(*(uint **)(v4 + 240), 1);
  Function_200d330(*(int **)(v4 + 240));
  return Function_200d430(*(int **)(v4 + 240), 7);
}

//----- (022628AC) --------------------------------------------------------
uint __fastcall Function_22628ac(int a1)
{
  return Function_200d0f4(*(uint *)(a1 + 240));
}

//----- (022628B8) --------------------------------------------------------
int __fastcall Function_22628b8(int *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;

  v1 = (uint *)a1[22];
  v2 = a1[18];
  v3 = a1[23];
  Function_20070e8(a1[18], 0x48u, v1, 4u, 0, 0, 0, 106);
  Function_20070e8(v2, 0x4Bu, v1, 5u, 0, 0, 0, 106);
  Function_200710c(v2, 0x4Au, v1, 4u, 0, 0, 0, 106);
  Function_200710c(v2, 0x4Cu, v1, 5u, 0, 0, 0, 106);
  Function_200710c(v2, 0x4Du, v1, 6u, 0, 0, 0, 106);
  Function_200710c(v2, 0x4Eu, v1, 7u, 0, 0, 0, 106);
  Function_2003050(v3, 164, 73, 106, 1, 160, 0);
  Function_20070e8(v2, 5u, v1, 3u, 0, 0, 0, 106);
  Function_20070e8(v2, 8u, v1, 1u, 0, 0, 0, 106);
  Function_200710c(v2, 7u, v1, 3u, 0, 0, 0, 106);
  Function_200710c(v2, 9u, v1, 1u, 0, 0, 0, 106);
  Function_200710c(v2, 0xAu, v1, 2u, 0, 0, 0, 106);
  Function_2003050(v3, 164, 6, 106, 0, 32, 0);
  Function_2003050(v3, 14, 7, 106, 1, 32, 0xE0u);
  v4 = Function_200daa0();
  Function_2003050(v3, 38, v4, 106, 1, 32, 0xD0u);
  return Function_200daa4(v1, 7u, 180, 13, 0, 106);
}

//----- (02262A44) --------------------------------------------------------
int __fastcall Function_2262a44(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  uchar *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  result = malloc(0x6Au, 16);
  v5 = (uchar *)result;
  v6 = 16;
  do
  {
    *v5++ = 0;
    --v6;
  }
  while ( v6 );
  *(uint *)(result + 4) = v2;
  *(ushort *)(result + 8) = 1200;
  *(uint *)(result + 12) = v3;
  return result;
}

//----- (02262A6C) --------------------------------------------------------
uint __fastcall Function_2262a6c(int a1)
{
  return free(a1);
}

//----- (02262A74) --------------------------------------------------------
BOOL __fastcall Function_2262a74(int a1)
{
  return (short)--*(ushort *)(a1 + 8) > 0;
}

//----- (02262A8C) --------------------------------------------------------
int *__fastcall Function_2262a8c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (int *)malloc(0x6Au, 11196);
  Call_FillMemWithValue(v6, 0, 0x2BBCu);
  v6[1] = v4;
  *v6 = v3;
  v6[2] = 0;
  v6[3] = 0;
  v6[5] = v5;
  v6[2798] = 0;
  v6[2186] = v6[2747];
  v6[2187] = (int)(v6 + 2747);
  v6[2789] = 0;
  Function_2262ae4(v6);
  return v6;
}

//----- (02262AE4) --------------------------------------------------------
int __fastcall Function_2262ae4(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v6;

  v1 = a1;
  a1[2034] = 0;
  a1[2035] = 409600;
  a1[2036] = 0;
  a1[327] = 0;
  a1[328] = 0;
  a1[196] = 0;
  a1[197] = 0;
  a1[326] = 0;
  a1[195] = 0;
  Function_2266fec(a1 + 169);
  Function_2266fec(v1 + 173);
  Function_2266fec(v1 + 300);
  Function_2266fec(v1 + 304);
  Function_2266fec(v1 + 693);
  Function_2266fec(v1 + 697);
  v6 = 0;
  v2 = (int)(v1 + 824);
  v3 = (int)(v1 + 828);
  v4 = (int)(v1 + 724);
  do
  {
    Function_2266fec(v2);
    Function_2266fec(v3);
    Function_226432c(v4, 0, 0, 5, 5, 1061997773, 0);
    Function_226432c(v4, 0, 0, -5, -5, 1061997773, 0);
    v2 += 524;
    v3 += 524;
    v4 += 524;
    ++v6;
  }
  while ( v6 < 8 );
  Function_226432c(v1 + 69, 0, 0, 5, 5, 1072735191, 0);
  Function_226432c(v1 + 69, 0, 0, -5, -5, 1072735191, 0);
  Function_226432c(v1 + 200, 0, 0, 5, 5, 1061997773, 0);
  Function_226432c(v1 + 200, 0, 0, -5, -5, 1061997773, 0);
  Function_226432c(v1 + 593, 0, 0, 5, 5, 1072735191, 0);
  return Function_226432c(v1 + 593, 0, 0, -5, -5, 1061997773, 0);
}

//----- (02262C64) --------------------------------------------------------
uint __fastcall Function_2262c64(int a1)
{
  return free(a1);
}

//----- (02262C6C) --------------------------------------------------------
BOOL __fastcall Function_2262c6c(int a1)
{
  return *(uint *)(a1 + 8140) >> 12 <= 45;
}

//----- (02262C84) --------------------------------------------------------
uint __fastcall Function_2262c84(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 8140) >> 12;
  if ( v1 < 75 && v1 > 61 )
    return Function_2261c48(a1, 1);
  if ( v1 >= 60 || v1 <= 46 )
    return Function_2261c48(a1, 0);
  return Function_2261c48(a1, 2);
}

//----- (02262CB8) --------------------------------------------------------
uint *__fastcall Function_2262cb8(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;

  v2 = a1;
  v3 = a2;
  v4 = (int *)malloc(0x6Au, 48);
  Call_FillMemWithValue(v4, 0, 0x30u);
  v4[3] = *(uint *)(v2 + 4 * *(ushort *)(v2 + 244 + 2 * v3) + 28);
  v4[4] = *(uint *)(v2 + 4 * *(ushort *)(v2 + 244 + 2 * v3) + 40);
  *v4 = 0;
  v4[1] = 0;
  v4[11] = *(uint *)(v2 + 20);
  return AddTaskToTaskList1((int)Function_2263158, (int)v4, 0x1000u);
}

//----- (02262D08) --------------------------------------------------------
uint *__fastcall Function_2262d08(uint *result, int a2)
{
  uint *v2;
  uint *v3;

  v2 = &result[17 * a2 + 2676];
  if ( v2[12] != 1 )
  {
    v2[16] = result[2797];
    v2[12] = 1;
    v3 = &result[a2 + 2754];
    v2[11] = v3;
    v2[10] = *v3;
    v2[3] = result[*((ushort *)result + a2 + 122) + 13];
    *v2 = 0;
    v2[1] = 0;
    v2[15] = result[5];
    result = AddTaskToTaskList1((int)Function_226323c, (int)v2, 0x1000u);
  }
  return result;
}

//----- (02262D64) --------------------------------------------------------
uint *__fastcall Function_2262d64(uint *result, int a2)
{
  uint *v2;

  v2 = &result[17 * a2 + 2676];
  if ( v2[12] != 1 )
  {
    v2[16] = result[2797];
    v2[12] = 1;
    v2[11] = result + 2747;
    v2[10] = result[2747];
    v2[13] = result + 1772;
    v2[14] = result + 1903;
    *v2 = 0;
    v2[1] = 0;
    v2[15] = result[5];
    result = AddTaskToTaskList1((int)Function_2263434, (int)v2, 0x1000u);
  }
  return result;
}

//----- (02262DC0) --------------------------------------------------------
uint *__fastcall Function_2262dc0(uint *a1)
{
  uint *v1;
  int *v2;
  uint *v3;
  int v4;

  v1 = a1;
  v2 = (int *)malloc(0x6Au, 124);
  Call_FillMemWithValue(v2, 0, 0x7Cu);
  v2[3] = (int)(v1 + 68);
  v2[4] = (int)(v1 + 200);
  v2[5] = (int)(v1 + 69);
  v3 = v2 + 8;
  v4 = v1[2035];
  *v3 = v1[2034];
  v3[1] = v4;
  v2[10] = v1[2036];
  v2[29] = v1[2797];
  v2[30] = v1[5];
  Function_2261c48((int)v1, 0);
  Function_2017240((int)(v1 + 234), 0);
  Function_2017240((int)(v1 + 365), 0);
  Function_2017240((int)(v1 + 496), 0);
  return AddTaskToTaskList1((int)Function_2262e50, (int)v2, 0x1000u);
}

//----- (02262E50) --------------------------------------------------------
int __fastcall Function_2262e50(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  char v5;
  int result;
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

  v2 = a2;
  v3 = a1;
  v4 = 16 * *(uint *)(a2 + 40) >> 16;
  if ( Function_200f2ac() && *(uchar *)(*(uint *)(v2 + 120) + 52) != 1 )
  {
    v7 = *(uint *)v2;
    if ( *(uint *)v2 <= 3u )
      JUMPOUT(__CS__, (char *)&off_2262E94 + *((short *)&off_2262E94 + v7) + 2);
    switch ( v5 )
    {
      case 0:
        v8 = *(uint *)(*(uint *)(v2 + 16) + 484);
        Function_2264764(v2 + 68);
        v9 = *(uint *)(*(uint *)(v2 + 16) + 488);
        Function_2264764(v2 + 92);
        Function_2005748(0x60Bu);
        *(uint *)(v2 + 8) = 0;
        result = *(uint *)v2 + 1;
        *(uint *)v2 = result;
        break;
      case 1:
        v10 = Function_2264774(v2 + 68);
        v11 = Function_2264774(v2 + 92);
        result = 484;
        *(uint *)(*(uint *)(v2 + 16) + 484) = *(uint *)(v2 + 68);
        *(uint *)(*(uint *)(v2 + 16) + 488) = *(uint *)(v2 + 92);
        if ( v10 && v11 )
        {
          if ( !*(uint *)(v2 + 4) )
          {
            **(uint **)(v2 + 12) = 1;
            Function_2266fec(*(uint *)(v2 + 16) + 400);
            Function_2266fec(*(uint *)(v2 + 16) + 416);
            Function_226432c(*(uint *)(v2 + 16), 0, 0, 5, 5, 1061997773, 0);
            Function_226432c(*(uint *)(v2 + 16), 0, 0, -5, -5, 1061997773, 0);
          }
          v12 = *(uint *)(*(uint *)(v2 + 16) + 484);
          Function_2264764(v2 + 68);
          v13 = *(uint *)(*(uint *)(v2 + 16) + 488);
          Function_2264764(v2 + 92);
          result = *(uint *)v2 + 1;
          *(uint *)v2 = result;
        }
        break;
      case 2:
        v14 = Function_2264774(v2 + 68);
        result = Function_2264774(v2 + 92);
        *(uint *)(*(uint *)(v2 + 16) + 484) = *(uint *)(v2 + 68);
        *(uint *)(*(uint *)(v2 + 16) + 488) = *(uint *)(v2 + 92);
        if ( v14 && result )
        {
          if ( !*(uint *)(v2 + 4) )
            Function_2005748(0x631u);
          result = *(uint *)v2 + 1;
          *(uint *)v2 = result;
        }
        break;
      case 3:
        if ( *(uint *)(v2 + 4) )
        {
          result = v7 + 1;
          *(uint *)v2 = result;
        }
        else
        {
          if ( *(uint *)(v2 + 8) == 8 )
            Function_2005748(0x575u);
          result = *(uint *)(v2 + 8) + 1;
          *(uint *)(v2 + 8) = result;
          if ( result >= 40 )
          {
            **(uint **)(v2 + 12) = 2;
            result = *(uint *)v2 + 1;
            *(uint *)v2 = result;
          }
        }
        break;
      default:
        v15 = *(uint *)(v2 + 8);
        if ( *(uint *)(v2 + 4) )
        {
          result = v15 + 1;
          *(uint *)(v2 + 8) = result;
          if ( result >= 10 )
          {
            if ( *(uint *)(v2 + 116) )
              v16 = -32768;
            else
              v16 = -81920;
            *(uint *)(*(uint *)(v2 + 16) + 484) = v16;
            *(uint *)(*(uint *)(v2 + 16) + 488) = 0;
            Call_RemoveTaskFromTaskList(v3);
            result = free(v2);
          }
        }
        else
        {
          result = v15 + 1;
          *(uint *)(v2 + 8) = result;
          if ( result >= 45 )
          {
            **(uint **)(v2 + 12) = 0;
            Function_2005748(0x60Bu);
            *(uint *)v2 = 0;
            result = *(uint *)(v2 + 4) + 1;
            *(uint *)(v2 + 4) = result;
          }
        }
        break;
    }
  }
  else
  {
    Call_RemoveTaskFromTaskList(v3);
    result = free(v2);
  }
  return result;
}

//----- (02263158) --------------------------------------------------------
int __fastcall Function_2263158(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int result;
  int v7;
  int v8;
  int v9;
  char v10;
  int v11;
  int v12;
  char v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  Function_200d3e0(*(int **)(a2 + 12));
  if ( Function_200f2ac() && *(uchar *)(*(uint *)(v4 + 44) + 52) != 1 )
  {
    if ( *(uint *)v4 )
    {
      if ( *(uint *)v4 == 1 )
      {
        v7 = Function_2264774(v4 + 20);
        Function_200d638(*(int **)(v4 + 12), &v11, &v10);
        result = Function_200d614(*(uint **)(v4 + 12), v11, *(uint *)(v4 + 20), v8);
        if ( v7 )
        {
          result = *(uint *)v4 + 1;
          *(uint *)v4 = result;
        }
      }
      else
      {
        v9 = *(uint *)(v4 + 8);
        if ( *(uint *)(v4 + 4) )
        {
          result = v9 + 1;
          *(uint *)(v4 + 8) = result;
          if ( result >= 10 )
          {
            Call_RemoveTaskFromTaskList(v5);
            result = free(v4);
          }
        }
        else
        {
          result = v9 + 1;
          *(uint *)(v4 + 8) = result;
          if ( result >= 35 )
          {
            ++*(uint *)(v4 + 4);
            result = 0;
            *(uint *)v4 = 0;
          }
        }
      }
    }
    else
    {
      *(uint *)(v4 + 8) = 0;
      Function_200d638(*(int **)(v4 + 12), &v13, &v12);
      Function_2264764(v4 + 20);
      result = *(uint *)v4 + 1;
      *(uint *)v4 = result;
    }
  }
  else
  {
    Call_RemoveTaskFromTaskList(v5);
    result = free(v4);
  }
  return result;
}

//----- (0226323C) --------------------------------------------------------
int __fastcall Function_226323c(int *a1, int *a2, int a3, int a4)
{
  int *v4;
  int *v5;
  int result;
  uint v7;
  uchar v8;
  char v9;
  int v10;
  uint v11;
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
  uint v22;
  char v23;
  int v24;

  v24 = a4;
  v4 = a1;
  v5 = a2;
  if ( Function_200f2ac() && *(uchar *)(v5[15] + 52) != 1 )
  {
    v7 = *v5;
    if ( (uint)*v5 <= 5 )
      JUMPOUT(__CS__, *((short *)&off_2263278 + v7) + 36057722);
    switch ( (uchar)v7 )
    {
      case 0:
        Function_200d364((int *)v5[3], 7u);
        Function_200d474((int *)v5[3], 0);
        Function_200d6a4((uint *)v5[3], 2);
        Function_200d788((int *)v5[3], (uint *)&v23, &v22);
        Function_20e1108(v22, 0);
        if ( !v9 & v8 )
        {
          v10 = fmul(0x45800000u, v22);
          v12 = fadd(0x3F000000u, v10);
        }
        else
        {
          v11 = fmul(0x45800000u, v22);
          v12 = fsub(v11, 1056964608);
        }
        ffix(v12);
        Function_2264764(v5 + 4);
        Function_200d430((int *)v5[3], *(uint *)v5[11] - 1);
        ++*v5;
        goto LABEL_11;
      case 1:
LABEL_11:
        v13 = Function_2264774(v5 + 4);
        v14 = fflt(v5[4]);
        v15 = f_div(v14, 0x45800000u);
        result = Function_200d6e8((int *)v5[3], 0x3F800000u, v15);
        if ( v13 )
        {
          result = *v5 + 1;
          *v5 = result;
        }
        return result;
      case 2:
        Function_2264764(v5 + 4);
        ++*v5;
        goto LABEL_14;
      case 3:
LABEL_14:
        v16 = Function_2264774(v5 + 4);
        v17 = fflt(v5[4]);
        v18 = f_div(v17, 0x45800000u);
        result = Function_200d6e8((int *)v5[3], 0x3F800000u, v18);
        if ( v16 )
        {
          result = *v5 + 1;
          *v5 = result;
        }
        break;
      case 4:
        if ( v5[10] == *(uint *)v5[11] )
        {
          Function_2264764(v5 + 4);
          ++*v5;
        }
        else
        {
          *v5 = 0;
        }
        v5[10] = *(uint *)v5[11];
        result = *(uint *)v5[11];
        if ( !result )
        {
          result = 255;
          *v5 = 255;
        }
        break;
      case 5:
        v19 = Function_2264774(v5 + 4);
        v20 = fflt(v5[4]);
        v21 = f_div(v20, 0x45800000u);
        result = Function_200d6e8((int *)v5[3], 0x3F800000u, v21);
        if ( v19 )
        {
          *v5 = 4;
          result = v5[1] ^ 1;
          v5[1] = result;
        }
        break;
      default:
        Function_200d6e8((int *)v5[3], 0x3F800000u, 0x3F800000u);
        Function_200d364((int *)v5[3], 5u);
        Function_200d474((int *)v5[3], 2);
        Function_200d6a4((uint *)v5[3], 0);
        v5[12] = 0;
        result = Call_RemoveTaskFromTaskList(v4);
        break;
    }
  }
  else
  {
    v5[12] = 0;
    result = Call_RemoveTaskFromTaskList(v4);
  }
  return result;
}

//----- (02263434) --------------------------------------------------------
int __fastcall Function_2263434(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int *v4;
  int *v5;
  int v6;
  int result;
  int v8;
  int v9;
  uint v10;

  v2 = a2;
  v3 = a1;
  v4 = (int *)a2[13];
  v5 = (int *)a2[14];
  if ( Function_200f2ac() && (v6 = v2[15], *(uchar *)(v2[15] + 52) != 1) )
  {
    v8 = *(uint *)v2[11];
    v9 = v8 - 1;
    if ( v8 - 1 < 0 || v9 > 4 )
      v9 = 0;
    v10 = *v2;
    if ( (uint)*v2 <= 5 )
      JUMPOUT(__CS__, *((short *)&off_22634C0 + v10) + 36058306);
    switch ( (uchar)v10 )
    {
      case 0:
        Function_22618a8((int)v4, *(uint *)v6, dword_2267BD4[2 * v9]);
        Function_22618b4(v4, v2[16]);
        result = *v2 + 1;
        *v2 = result;
        break;
      case 1:
        Function_2017164(v4 + 34, (int)(v4 + 30), *(uint *)v6, 0x27u, 106, (int (***)(void))(v6 + 36));
        Function_2017164(v4 + 39, (int)(v4 + 30), *(uint *)v2[15], 0x28u, 106, (int (***)(void))(v2[15] + 36));
        Function_201727c((uint)v4, (int)(v4 + 34));
        Function_201727c((uint)v4, (int)(v4 + 39));
        Function_2017240((int)(v4 + 34), 0);
        Function_2017240((int)(v4 + 39), 0);
        Function_2017348((int)v4, 0);
        v4[123] = 0;
        Function_2266fec(v4 + 100);
        Function_2266fec(v4 + 104);
        Function_226432c(v4, 0, 0, 5, 5, 1061997773, 0);
        Function_226432c(v4, 0, 0, -5, -5, 1061997773, 0);
        result = *v2 + 1;
        *v2 = result;
        break;
      case 2:
        Function_22618a8((int)v5, *(uint *)v6, dword_2267BD8[2 * v9]);
        Function_22618b4(v5, v2[16]);
        result = *v2 + 1;
        *v2 = result;
        break;
      case 3:
        Function_2017164(v5 + 34, (int)(v5 + 30), *(uint *)v6, 0x29u, 106, (int (***)(void))(v6 + 36));
        Function_2017164(v5 + 39, (int)(v5 + 30), *(uint *)v2[15], 0x2Au, 106, (int (***)(void))(v2[15] + 36));
        Function_201727c((uint)v5, (int)(v5 + 34));
        Function_201727c((uint)v5, (int)(v5 + 39));
        Function_2017240((int)(v5 + 34), 0);
        Function_2017240((int)(v5 + 39), 0);
        Function_2017348((int)v5, 1);
        v5[123] = 1;
        Function_2266fec(v5 + 100);
        Function_2266fec(v5 + 104);
        Function_226432c(v5, 0, 0, 5, 5, 1061997773, 0);
        Function_226432c(v5, 0, 0, -5, -5, 1061997773, 0);
        if ( v2[16] )
        {
          Function_2017350(v4, 0, -32768, 0);
          Function_2017350(v5, 0, -32768, 0);
          v4[121] = -32768;
          v5[121] = -32768;
        }
        result = *v2 + 1;
        *v2 = result;
        break;
      case 4:
        result = v5[123];
        if ( !result )
        {
          Function_2017348((int)v4, 1);
          Function_2017348((int)v5, 0);
          v4[123] = 1;
          result = *v2 + 1;
          *v2 = result;
        }
        break;
      case 5:
        if ( v8 )
        {
          if ( v2[10] != v8 )
          {
            Function_226192c((int)v4);
            Function_226192c((int)v5);
            Function_20171a0(v4 + 34, v2[15] + 36);
            Function_20171a0(v4 + 39, v2[15] + 36);
            Function_20171a0(v5 + 34, v2[15] + 36);
            Function_20171a0(v5 + 39, v2[15] + 36);
            *v2 = 0;
          }
        }
        else
        {
          *v2 = 255;
        }
        result = *(uint *)v2[11];
        v2[10] = result;
        break;
      default:
        Function_226192c((int)v4);
        Function_226192c((int)v5);
        Function_20171a0(v4 + 34, v2[15] + 36);
        Function_20171a0(v4 + 39, v2[15] + 36);
        Function_20171a0(v5 + 34, v2[15] + 36);
        Function_20171a0(v5 + 39, v2[15] + 36);
        v2[12] = 0;
        result = Call_RemoveTaskFromTaskList(v3);
        break;
    }
  }
  else
  {
    Function_226192c((int)v4);
    Function_226192c((int)v5);
    Function_20171a0(v4 + 34, v2[15] + 36);
    Function_20171a0(v4 + 39, v2[15] + 36);
    Function_20171a0(v5 + 34, v2[15] + 36);
    Function_20171a0(v5 + 39, v2[15] + 36);
    v2[12] = 0;
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0226377C) --------------------------------------------------------
int __fastcall Function_226377c(int result, int a2, int a3, int a4)
{
  short v4;
  short v5;
  short v6;
  short v7;
  int v8;

  v8 = a4;
  v4 = 1;
  v5 = 2;
  v6 = 3;
  v7 = 4;
  *(uint *)(result + 10992) += (ushort)*(&v4 + *(uint *)(result + 10988));
  return result;
}

//----- (022637B4) --------------------------------------------------------
int __fastcall Function_22637b4(int result, int a2, int a3, int a4)
{
  short v4;
  short v5;
  short v6;
  short v7;
  int v8;

  v8 = a4;
  v4 = 700;
  v5 = 1400;
  v6 = 2100;
  v7 = 2800;
  *(uint *)(result + 10992) += (ushort)*(&v4 + *(uint *)(result + 10988) - 1);
  return result;
}

//----- (022637F0) --------------------------------------------------------
int __fastcall Function_22637f0(int a1)
{
  int v1;
  int v2;

  v1 = *(uint *)(a1 + 11032);
  if ( v1 > 269 )
  {
    if ( v1 > 569 )
    {
      if ( v1 == 719 )
        *(uint *)(a1 + 10984) = 5;
    }
    else if ( v1 < 569 )
    {
      if ( v1 == 419 )
        *(uint *)(a1 + 10984) = 3;
    }
    else
    {
      *(uint *)(a1 + 10984) = 4;
    }
  }
  else if ( v1 < 269 )
  {
    if ( v1 > 0 )
    {
      if ( v1 == 119 )
        *(uint *)(a1 + 10984) = 1;
    }
    else if ( !v1 )
    {
      *(uint *)(a1 + 10984) = 0;
    }
  }
  else
  {
    *(uint *)(a1 + 10984) = 2;
  }
  v2 = *(uint *)(a1 + 11032);
  return Function_226386c();
}

//----- (0226386C) --------------------------------------------------------
int __fastcall Function_226386c(int a1, int a2, uint *a3)
{
  int result;

  if ( a2 > 599 )
  {
    if ( a2 > 899 )
    {
      if ( a2 == 1199 )
      {
        *a3 = 4;
        return 1;
      }
    }
    else if ( a2 == 899 )
    {
      *a3 = 3;
      return 1;
    }
  }
  else
  {
    if ( a2 >= 599 )
    {
      *a3 = 2;
      return 1;
    }
    if ( a2 > 0 )
    {
      if ( a2 == 299 )
      {
        result = 1;
        *a3 = 1;
        return result;
      }
    }
    else if ( !a2 )
    {
      *a3 = 0;
    }
  }
  return 0;
}

//----- (022638C8) --------------------------------------------------------
int __fastcall Function_22638c8(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int v10;

  v1 = a1;
  result = *(uint *)(a1 + 4);
  v3 = 0;
  v10 = result;
  if ( result > 0 )
  {
    v4 = v1;
    v9 = (uint *)(v1 + 11016);
    v5 = v1;
    do
    {
      if ( v3 != *(uint *)v1 )
      {
        v6 = *(uint *)(v4 + 11164);
        if ( v6 )
        {
          if ( v6 == 1 )
          {
            *(ushort *)(v1 + 11006) = 0;
            *(ushort *)(v5 + 11008) = 0;
            *(uint *)(v4 + 11016) = 0;
            *(uint *)(v1 + 8612) = 0;
            if ( Function_2261ea4(v1, v3) != 3 && !*(uint *)(v1 + 11192) )
            {
              Function_2261e58(v1, v3, 3, v8);
              Function_2262cb8(v1, v3);
              *(uint *)(v1 + 11192) = 1;
            }
          }
          else if ( v6 == 2 )
          {
            *(uint *)(v1 + 11192) = 0;
            *(ushort *)(v1 + 11006) = 0;
            *(ushort *)(v5 + 11008) = 0;
            *(uint *)(v4 + 11016) = 0;
            *(uint *)(v4 + 11164) = 0;
          }
        }
        else
        {
          if ( Function_2261ea4(v1, v3) != 1 )
            Function_2261e58(v1, v3, 1, v7);
          if ( Function_226386c(v1, *(short *)(v5 + 11008), v9) )
            Function_2262d08((uint *)v1, v3);
          ++*(ushort *)(v5 + 11008);
        }
      }
      ++v3;
      ++v9;
      result = v10;
      v4 += 4;
      v5 += 2;
    }
    while ( v3 < v10 );
  }
  return result;
}

//----- (022639BC) --------------------------------------------------------
int __fastcall Function_22639bc(int result)
{
  int v1;
  int v2;
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = result;
  v2 = result + 11164;
  v3 = 4 * *(uint *)result;
  v4 = *(uint *)(result + 11164 + v3);
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_22639DC + v4) + 36059614);
  switch ( (uchar)v4 )
  {
    case 0:
      if ( Function_2262c6c(result) )
      {
        *(ushort *)(v1 + 11004) = 0;
        Function_2262dc0((uint *)v1);
        Function_2263db8(v1);
        *(uint *)(v1 + 4 * *(uint *)v1 + 11164) = 1;
        Function_20359dc(24, v1 + 11164 + 4 * *(uint *)v1, 4);
        *(uint *)(v1 + 11032) = 0;
        *(ushort *)(v1 + 11006) = 0;
        result = 8612;
        *(uint *)(v1 + 8612) = 0;
      }
      else
      {
        Function_2262c84(v1);
        Function_2263ba0(v1);
        Function_2263e20(v1);
        Function_226377c(v1, v5, v6, v7);
        v8 = 2 * *(uint *)v1;
        result = *(short *)(v1 + 11008 + v8) + 1;
        *(ushort *)(v1 + 11008 + v8) = result;
      }
      break;
    case 1:
      if ( (short)++*(ushort *)(result + 11004) >= 90 )
        *(uint *)(result + 4 * *(uint *)result + 11164) = 2;
      *(uint *)(result + 11032) = 0;
      *(ushort *)(result + 11006) = 0;
      result += 2 * *(uint *)result;
      *(ushort *)(result + 11008) = 0;
      break;
    case 2:
      if ( *(ushort *)(result + 11004) )
      {
        *(uint *)(result + 11032) = 0;
        *(ushort *)(result + 11006) = 0;
        *(ushort *)(result + 11004) = 0;
        *(ushort *)(result + 2 * *(uint *)result + 11008) = 0;
        v9 = *(uint *)(result + 11000);
        if ( v9 != *(uint *)(result + 10996) )
          *(uint *)(result + 10996) = v9;
        Function_2262ae4((uint *)result);
        result = Function_20359dc(24, v1 + 11164 + 4 * *(uint *)v1, 4);
      }
      else
      {
        result = 0;
        *(uint *)(v2 + v3) = 0;
      }
      break;
    case 3:
      if ( (uint)(short)++*(ushort *)(result + 11004) >= 0x1D )
      {
        *(ushort *)(result + 11004) = 0;
        Function_2262ae4((uint *)result);
        result = 11164;
        *(uint *)(v1 + 4 * *(uint *)v1 + 11164) = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02263B30) --------------------------------------------------------
int __fastcall Function_2263b30(int result)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = result;
  if ( *(uint *)(result + 10980) < 1200 )
  {
    Function_22639bc(result);
    Function_22638c8(v1);
    if ( Function_22637f0(v1) == 1 )
    {
      Function_2262d64((uint *)v1, *(uint *)v1);
      Function_22637b4(v1, v2, v3, v4);
      Function_2005748(0x574u);
    }
    Function_2263de8(v1);
    ++*(uint *)(v1 + 11032);
    ++*(uint *)(v1 + 10980);
    result = *(short *)(v1 + 11006) + 1;
    *(ushort *)(v1 + 11006) = result;
  }
  return result;
}

//----- (02263BA0) --------------------------------------------------------
int __fastcall Function_2263ba0(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  ull v10;
  char v11;
  long long v12;
  int v13;
  uint v14;
  uint v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v24 = a4;
  v4 = a1;
  Function_20227a4(&v17, &v16);
  v4[2785] = 0;
  if ( v4[2797] )
    v5 = Function_20227dc((uchar *)dword_2267B40, v17, v16);
  else
    v5 = Function_20227dc((uchar *)dword_2267B38, v17, v16);
  if ( v5 == -1 )
  {
    v4[2037] = 0;
    v4[2038] = 0;
    if ( v4[195] )
    {
      Function_226452c(v4 + 69, 1065353216);
      Function_226452c(v4 + 200, 1056964608);
      v21 = 0;
      v22 = 409600;
      v23 = 0;
      MTX_MultVec43(&v21, v4 + 308, v4 + 2034);
      result = 11140;
      v4[2785] = 1;
    }
    else
    {
      v4[196] = 0;
      v4[197] = 0;
      Function_226432c(v4 + 69, v4[2037], v4[2038], v4[2037], v4[2038], 1072735191, 0);
      result = Function_226432c(v4 + 200, v4[2037], v4[2038], v4[2037], v4[2038], 1046562734, 0);
    }
  }
  else
  {
    v7 = v4[2035] >> 12;
    v8 = s32_div_f(100 - v7, 40);
    v9 = fflt(v8);
    if ( v7 >= 95 )
      v9 = 1036831949;
    LODWORD(v10) = f2d(v9);
    Function_20e0d24(v10, 0x3FCC28F5C28F5C29uLL);
    if ( v11 )
    {
      v15 = 1046562734;
    }
    else
    {
      LODWORD(v12) = f2d(v9);
      v13 = dsub(4597094355634707497LL, v12);
      v15 = d2f(v13, v14);
    }
    if ( !v4[2037] )
    {
      v4[2037] = v17;
      v4[2038] = v16;
    }
    Function_226432c(v4 + 69, v17, v16, v4[2037], v4[2038], 0x40000000, 1);
    Function_226432c(v4 + 200, v17, v16, v4[2037], v4[2038], v15, 1);
    v18 = 0;
    v19 = 409600;
    v20 = 0;
    MTX_MultVec43(&v18, v4 + 308, v4 + 2034);
    v4[2785] = 1;
    if ( !v4[2789] )
      v4[2789] = 1;
    if ( v17 )
    {
      if ( !Function_20057d4(0x572u) )
        Function_2005748(0x572u);
      Function_226493c(v4, (short)v17, (short)v16);
    }
    v4[2037] = v17;
    result = 8152;
    v4[2038] = v16;
  }
  return result;
}

//----- (02263DB8) --------------------------------------------------------
int __fastcall Function_2263db8(int result)
{
  *(ushort *)(result + 11040) = 0;
  *(uint *)(result + 10976) = 0;
  *(uint *)(result + 11140) = 0;
  *(uint *)(result + 11144) = 0;
  *(uint *)(result + 11148) = 0;
  *(uint *)(result + 11152) = 0;
  *(uint *)(result + 10988) = 0;
  return result;
}

//----- (02263DE8) --------------------------------------------------------
int __fastcall Function_2263de8(int result)
{
  int v1;

  if ( *(short *)(result + 11006) >= 149 )
  {
    v1 = *(uint *)(result + 10996);
    if ( v1 != 8 )
    {
      *(uint *)(result + 11000) = v1;
      ++*(uint *)(result + 10996);
      *(ushort *)(result + 11006) = 0;
      *(uint *)(result + 8612) = 1;
    }
  }
  return result;
}

//----- (02263E20) --------------------------------------------------------
int __fastcall Function_2263e20(int a1)
{
  int v1;
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
  int result;
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
  uint v30;
  int v31;
  short v32;
  uint v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  short v52;
  short v53;
  short v54;
  short v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;

  v1 = a1;
  v52 = 120;
  v53 = 90;
  v54 = 60;
  v55 = 45;
  ++*(uint *)(v1 + 10976);
  if ( !*(ushort *)(a1 + 11040) )
  {
    s32_div_f(*(uint *)(a1 + 10976), *(&v52 + *(uint *)(a1 + 10988)));
    if ( !v13 )
    {
      *(uint *)(v1 + 10976) = 0;
      *(uint *)(v1 + 11148) = 1;
    }
    v14 = *(uint *)(v1 + 11140);
    if ( v14 || *(uint *)(v1 + 11144) != 1 )
    {
      if ( v14 == 1 && *(uint *)(v1 + 11144) == 1 )
      {
        v17 = 16 * *(uint *)(v1 + 11068) >> 16;
        v18 = 16 * *(uint *)(v1 + 11044) >> 16;
        Function_226432c(v1 + 276, 0, 0, v18, v17, 1072735191, 0);
        if ( Function_226432c(v1 + 800, 0, 0, v18, v17, 1061997773, 0) )
        {
          v56 = 0;
          v57 = 409600;
          v58 = 0;
          MTX_MultVec43(&v56, (int *)(v1 + 1232), (uint *)(v1 + 8136));
        }
      }
    }
    else
    {
      v15 = 16 * *(uint *)(v1 + 11068) >> 16;
      v16 = 16 * *(uint *)(v1 + 11044) >> 16;
      Function_226432c(v1 + 276, 0, 0, v16, v15, 1072735191, 0);
      if ( Function_226432c(v1 + 800, 0, 0, v16, v15, 1061997773, 0) )
      {
        v59 = 0;
        v60 = 409600;
        v61 = 0;
        MTX_MultVec43(&v59, (int *)(v1 + 1232), (uint *)(v1 + 8136));
      }
    }
    if ( !*(uint *)(v1 + 11152)
      || (result = *(uint *)(v1 + 11148), result == 1) && (result = *(uint *)(v1 + 11144), result == 1) )
    {
      v19 = GetPRNGSeed();
      v20 = PRNG();
      SetPRNGSeed(v19);
      u32_div_f(v20, 100);
      v22 = v21;
      v23 = 0;
      v24 = 8 * *(uint *)(v1 + 10988);
      v25 = 0;
      v26 = dword_2267C8C[v24];
      do
      {
        if ( v22 < v26 )
          break;
        ++v23;
        v26 += dword_2267C88[v24 + 3 + v25];
        v25 += 2;
      }
      while ( v23 < 3 );
      v27 = dword_2267C88[2 * v23 + v24];
      v28 = *(uint *)(v1 + 8144);
      v29 = 16 * *(uint *)(v1 + 8136) >> 16;
      if ( v28 )
      {
        if ( 16 * v28 >> 16 < 0 )
          v32 = -1;
        else
          v32 = 1;
        v31 = -v32;
      }
      else
      {
        v30 = PRNG();
        if ( (v30 >> 31) + __ROR4__((v30 << 31) - (v30 >> 31), 31) )
          v31 = 1;
        else
          v31 = -1;
      }
      if ( *(uint *)(v1 + 8136) )
      {
        if ( v29 < 0 )
          LOWORD(v34) = -1;
        else
          LOWORD(v34) = 1;
        if ( v31 < 0 )
          v34 = -(short)v34;
      }
      else
      {
        v33 = PRNG();
        if ( (v33 >> 31) + __ROR4__((v33 << 31) - (v33 >> 31), 31) )
          LOWORD(v34) = 1;
        else
          LOWORD(v34) = -1;
      }
      if ( !*(uint *)(v1 + 10988) )
        LOWORD(v34) = 0;
      v35 = (short)(v27 * v34);
      v36 = (short)(v27 * v31);
      v37 = (short)(20 * v31);
      *(ushort *)(v1 + 11160) = v35;
      v38 = (short)(20 * v34);
      *(ushort *)(v1 + 11162) = v36;
      if ( v38 <= 0 )
      {
        v41 = fflt(v38 << 12);
        v40 = fsub(v41, 1056964608);
      }
      else
      {
        v39 = fflt(v38 << 12);
        v40 = fadd(0x3F000000u, v39);
      }
      ffix(v40);
      Function_226469c(v1 + 11092);
      if ( v37 <= 0 )
      {
        v44 = fflt(v37 << 12);
        v43 = fsub(v44, 1056964608);
      }
      else
      {
        v42 = fflt(v37 << 12);
        v43 = fadd(0x3F000000u, v42);
      }
      ffix(v43);
      Function_226469c(v1 + 11116);
      if ( v35 <= 0 )
      {
        v47 = fflt(v35 << 12);
        v46 = fsub(v47, 1056964608);
      }
      else
      {
        v45 = fflt(v35 << 12);
        v46 = fadd(0x3F000000u, v45);
      }
      ffix(v46);
      Function_226469c(v1 + 11044);
      if ( v36 <= 0 )
      {
        v50 = fflt(v36 << 12);
        v49 = fsub(v50, 1056964608);
      }
      else
      {
        v48 = fflt(v36 << 12);
        v49 = fadd(0x3F000000u, v48);
      }
      ffix(v49);
      Function_226469c(v1 + 11068);
      *(ushort *)(v1 + 11040) = 22;
      *(ushort *)(v1 + 11042) = 0;
      *(ushort *)(v1 + 11036) = v35;
      *(ushort *)(v1 + 11038) = v36;
      *(uint *)(v1 + 11140) = 0;
      *(uint *)(v1 + 11148) = 0;
      *(uint *)(v1 + 11144) = 0;
      result = 11152;
      *(uint *)(v1 + 11152) = 1;
    }
    return result;
  }
  v2 = *(short *)(a1 + 11042);
  if ( v2 >= 9 )
  {
    v8 = *(uint *)(v1 + 11044);
    v9 = *(uint *)(v1 + 11068);
    v10 = Function_22646fc(v1 + 11044);
    v11 = Function_22646fc(v1 + 11068);
    v51 = 16 * (*(uint *)(v1 + 11044) - v8) >> 16;
    v7 = 16 * (*(uint *)(v1 + 11068) - v9) >> 16;
    if ( (v10 == 1 || v11 == 1) && !*(uint *)(v1 + 11144) )
    {
      *(uint *)(v1 + 11144) = 1;
      *(uint *)(v1 + 11044) -= v8;
      *(uint *)(v1 + 11068) -= v9;
    }
    goto LABEL_13;
  }
  if ( v2 <= 8 )
  {
    v3 = *(uint *)(v1 + 11092);
    v4 = *(uint *)(v1 + 11116);
    v5 = Function_22646fc(v1 + 11092);
    v6 = Function_22646fc(v1 + 11116);
    v51 = 16 * (*(uint *)(v1 + 11092) - v3) >> 16;
    v7 = 16 * (*(uint *)(v1 + 11116) - v4) >> 16;
    if ( v5 == 1 || v6 == 1 )
    {
      *(uint *)(v1 + 11092) -= v3;
      *(uint *)(v1 + 11116) -= v4;
    }
LABEL_13:
    Function_226432c(v1 + 276, 0, 0, v51, v7, 1072735191, 0);
    goto LABEL_14;
  }
  v51 = 16 * *(uint *)(v1 + 11092) >> 16;
  v7 = 16 * *(uint *)(v1 + 11116) >> 16;
  Function_226432c(v1 + 276, 0, 0, v51, v7, 1072735191, 0);
LABEL_14:
  if ( Function_226432c(v1 + 800, 0, 0, v51, v7, 1061997773, 0) )
  {
    v62 = 0;
    v63 = 409600;
    v64 = 0;
    MTX_MultVec43(&v62, (int *)(v1 + 1232), (uint *)(v1 + 8136));
  }
  ++*(ushort *)(v1 + 11042);
  result = 11040;
  --*(ushort *)(v1 + 11040);
  return result;
}

//----- (0226432C) --------------------------------------------------------
int __fastcall Function_226432c(uint *a1, int a2, int a3, int a4, int a5, uint a6, int a7)
{
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  uint v13;
  long long v14;
  long long v15;
  int v16;
  uint v17;
  uint v18;
  int v19;
  uint v20;
  uint v21;
  long long v22;
  long long v23;
  int v24;
  uint v25;
  uint v26;
  int v27;
  int v28;
  uint v29;
  int v30;
  uint v31;
  uchar v32;
  char v33;
  int v34;
  uint v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  long long v42;
  long long v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  uint v50;
  int v51;
  uint v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  uint v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  uint v65;
  uint v66;
  int v67;

  v7 = a1;
  v8 = a2;
  v9 = a4;
  v10 = a3;
  v11 = f2d(a6);
  v13 = v12;
  LODWORD(v14) = dflt(v8 - v9);
  LODWORD(v15) = dmul(4572639809658085704LL, v14);
  v16 = dmul(__PAIR__(v13, v11), v15);
  v18 = d2f(v16, v17);
  v19 = f2d(a6);
  v21 = v20;
  LODWORD(v22) = dflt(v10 - a5);
  LODWORD(v23) = dmul(4572654821656843605LL, v22);
  v24 = dmul(__PAIR__(v21, v19), v23);
  v26 = d2f(v24, v25);
  if ( a7 )
  {
    v7[127] = v18;
    v7[128] = v26;
    v7[126] = 8;
    v27 = fflt(v7[126]);
    v7[129] = f_div(v7[127], v27);
    v28 = fflt(v7[126]);
    v7[130] = f_div(v7[128], v28);
  }
  v29 = fmul(v18, v18);
  v30 = fmul(v26, v26);
  v31 = fadd(v29, v30);
  Function_20e1108(v31, 0);
  if ( !v33 & v32 )
  {
    v34 = fmul(0x45800000u, v31);
    v36 = fadd(0x3F000000u, v34);
  }
  else
  {
    v35 = fmul(0x45800000u, v31);
    v36 = fsub(v35, 1056964608);
  }
  v37 = ffix(v36);
  v38 = FX_Sqrt(v37);
  v39 = v38;
  v40 = fflt(v38);
  v41 = f_div(v40, 0x45800000u);
  v59 = v41;
  LODWORD(v42) = f2d(v41);
  v43 = v42;
  LODWORD(v42) = 0;
  dneq(v42, v43);
  if ( v33 )
    return 0;
  v44 = Function_20bd838(v39);
  v46 = v45;
  v47 = Function_20bd8d0(v39);
  v49 = v48;
  v50 = ll_sto_f(v44, v46);
  v51 = f_div(v50, 0x4F800000u);
  v52 = ll_sto_f(v47, v49);
  v53 = f_div(v52, 0x4F800000u);
  v54 = f_div(v51, v59);
  v64 = v53;
  v65 = fmul(v26, v54);
  v66 = fmul(v18, v54);
  v67 = 0;
  Function_226700c(v7 + 100, &v64, v7 + 104);
  Function_22671ec(v7 + 84, v7 + 100);
  Function_2266ffc(v7 + 104, v7 + 100);
  Function_2267728(v7 + 84, v7 + 108);
  v55 = Function_2267160(v7 + 100);
  v56 = v7[101];
  v60 = v7[100];
  v61 = v56;
  v57 = v7[103];
  v62 = v7[102];
  v63 = v57;
  Function_22671b8(v7 + 100, &v60, v55, &v64);
  return 1;
}

//----- (0226452C) --------------------------------------------------------
int __fastcall Function_226452c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint v5;
  uint v6;
  int v7;
  uint v8;
  uchar v9;
  char v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  long long v19;
  long long v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  uint v27;
  int v28;
  uint v29;
  int v30;
  int v31;
  uint v33;
  uint v34;
  int v35;
  uint v36;
  uint v37;
  int v38;
  int v39;

  v39 = a4;
  v4 = a1;
  v5 = a1[127];
  v33 = a1[128];
  a1[127] = fsub(a1[127], a1[129]);
  v4[128] = fsub(v4[128], v4[130]);
  --v4[126];
  v6 = fmul(v5, v5);
  v7 = fmul(v33, v33);
  v8 = fadd(v6, v7);
  Function_20e1108(v8, 0);
  if ( !v10 & v9 )
  {
    v11 = fmul(0x45800000u, v8);
    v13 = fadd(0x3F000000u, v11);
  }
  else
  {
    v12 = fmul(0x45800000u, v8);
    v13 = fsub(v12, 1056964608);
  }
  v14 = ffix(v13);
  v15 = FX_Sqrt(v14);
  v16 = v15;
  v17 = fflt(v15);
  v18 = f_div(v17, 0x45800000u);
  v34 = v18;
  LODWORD(v19) = f2d(v18);
  v20 = v19;
  LODWORD(v19) = 0;
  dneq(v19, v20);
  if ( v10 )
    return 0;
  v21 = Function_20bd838(v16);
  v23 = v22;
  v24 = Function_20bd8d0(v16);
  v26 = v25;
  v27 = ll_sto_f(v21, v23);
  v28 = f_div(v27, 0x4F800000u);
  v29 = ll_sto_f(v24, v26);
  v30 = f_div(v29, 0x4F800000u);
  v31 = f_div(v28, v34);
  v35 = v30;
  v36 = fmul(v33, v31);
  v37 = fmul(v5, v31);
  v38 = 0;
  Function_226700c(v4 + 100, &v35, v4 + 104);
  Function_22671ec(v4 + 84, v4 + 100);
  Function_2266ffc(v4 + 104, v4 + 100);
  Function_2267728(v4 + 84, v4 + 108);
  return 1;
}

//----- (02264680) --------------------------------------------------------
int __fastcall Function_2264680(int a1, int a2)
{
  int v2;

  v2 = 0;
  do
  {
    if ( a2 == *(uint *)(a1 + 188) )
      return v2;
    ++v2;
    a1 += 4;
  }
  while ( v2 < 4 );
  return 255;
}

//----- (0226469C) --------------------------------------------------------
int __fastcall Function_226469c(uint *a1, int a2, int a3, int a4, int a5)
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

//----- (022646FC) --------------------------------------------------------
int __fastcall Function_22646fc(uint *a1)
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

//----- (02264764) --------------------------------------------------------
uint *__fastcall Function_2264764(uint *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a2;
  result[3] = a3 - a2;
  result[4] = 0;
  result[5] = a4;
  return result;
}

//----- (02264774) --------------------------------------------------------
int __fastcall Function_2264774(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  long long v5;

  v1 = a1;
  v2 = a1[5];
  v3 = a1[4];
  if ( v3 < v2 )
  {
    v2 = v3;
    v1[4] = v3 + 1;
    v4 = 0;
  }
  else
  {
    v4 = 1;
  }
  v5 = ll_mul((int)v1[3], v2 << 12);
  *v1 = FX_Div((v5 + 2048) >> 12, v1[5] << 12) + v1[1];
  return v4;
}

//----- (022647BC) --------------------------------------------------------
int __fastcall Function_22647bc(int *a1, uint *a2)
{
  int *v2;
  uint *v3;
  int v4;
  int result;
  int v6;
  int *v7;
  uint *v8;
  int *v9;
  uint *v10;
  uint *v11;
  char *v12;
  uint *v13;
  uint *v14;
  int v15;
  uint *v16;
  int v17;
  uint *v18;
  int v19;
  int v20;
  uint *v21;
  uint *v22;
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
  char v38;

  v2 = a1;
  v18 = a2;
  v23 = 1;
  v32 = -20480;
  v33 = 12288;
  v34 = 0x4000;
  v35 = -12288;
  v36 = 12288;
  v37 = -8192;
  v26 = 0x4000;
  v27 = 20480;
  v28 = -16384;
  v29 = -20480;
  v30 = -12288;
  v31 = 0x2000;
  if ( Function_200f2ac() && *(uchar *)(v18[41] + 52) != 1 )
  {
    v6 = v18[1];
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v20 = 0;
        v11 = v18;
        v22 = v18 + 5;
        v12 = &v38;
        v13 = v18 + 11;
        v14 = v18;
        do
        {
          *(uint *)v12 = Function_22646fc(v22);
          *((uint *)v12 + 1) = Function_22646fc(v13);
          Function_200d614((uint *)v14[2], v11[5], v11[11], v15);
          if ( !*(uint *)v12 || !*((uint *)v12 + 1) )
            v23 = 0;
          Function_200d330((int *)v14[2]);
          v12 += 8;
          v22 += 12;
          v13 += 12;
          v11 += 12;
          ++v14;
          ++v20;
        }
        while ( v20 < 3 );
        result = v23;
        if ( v23 )
        {
          result = (int)v18;
          ++v18[1];
        }
      }
      else
      {
        v16 = v18;
        v17 = 0;
        do
        {
          Function_200d0f4(v16[2]);
          ++v17;
          ++v16;
        }
        while ( v17 < 3 );
        *v18 = 0;
        result = Call_RemoveTaskFromTaskList(v2);
      }
    }
    else
    {
      v19 = 0;
      v7 = &v32;
      v21 = v18;
      v8 = v18 + 5;
      v9 = &v26;
      v10 = v18 + 11;
      do
      {
        Function_200d638((int *)v21[2], &v25, &v24);
        Function_226469c(v8, v25, v25 + *v7, 1229, 8);
        Function_226469c(v10, v24, v24 + *v9, 819, 8);
        ++v7;
        ++v21;
        v8 += 12;
        ++v9;
        v10 += 12;
        ++v19;
      }
      while ( v19 < 3 );
      result = (int)v18;
      ++v18[1];
    }
  }
  else
  {
    v3 = v18;
    v4 = 0;
    do
    {
      Function_200d0f4(v3[2]);
      ++v4;
      ++v3;
    }
    while ( v4 < 3 );
    *v18 = 0;
    result = Call_RemoveTaskFromTaskList(v2);
  }
  return result;
}

//----- (0226493C) --------------------------------------------------------
int __fastcall Function_226493c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  short v11;
  int v12;
  int v13;

  v10 = a1;
  v11 = a2;
  v3 = a1;
  v4 = a3;
  result = 0;
  while ( *(uint *)(v3 + 9360) == 1 )
  {
    ++result;
    v3 += 168;
    if ( result >= 8 )
      return result;
  }
  v13 = 168 * result;
  v6 = 0;
  v7 = 0;
  v8 = v10 + 168 * result;
  *(uint *)(v8 + 9524) = *(uint *)(v10 + 20);
  *(uint *)(v8 + 9364) = 0;
  *(uint *)(v10 + 9360 + 168 * result) = 1;
  v12 = (result + 1) * a2;
  do
  {
    *(uint *)(v8 + 9368) = Function_22626e8(v10, v11, v4);
    s32_div_f(v12 + v7 + v4, 3);
    Function_200d364(*(int **)(v8 + 9368), v9);
    ++v6;
    v8 += 4;
    v7 += v4;
  }
  while ( v6 < 3 );
  return (int)AddTaskToTaskList1((int)Function_22647bc, v10 + 9360 + v13, 0x1000u);
}

//----- (022649E4) --------------------------------------------------------
uint __fastcall Function_22649e4(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v7;
  short *v8;
  char *v9;
  int v10;
  short v11;
  int v12;
  int v13;
  int v14;
  short v15;
  short v16;
  uint v17;
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
  int v39;
  int v40;
  int v41;
  uint v42;
  int v43;
  uint v44;
  int v45;
  int v46;
  int v47;
  int v48;
  uint v49;
  int v50;
  char v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  short v60;
  short v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  uint v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  char v86[20];
  char v87[20];
  int v88;

  v88 = a4;
  v4 = a1;
  v79 = a2;
  v5 = *(uint *)(*(uint *)a2 + 20);
  if ( !Function_200f2ac() || *(uchar *)(v5 + 52) == 1 )
  {
    **(uint **)(v79 + 16) = 0;
    Call_RemoveTaskFromTaskList(v4);
    return free(v79);
  }
  v7 = *(uint *)(v79 + 4);
  switch ( v7 )
  {
    case 0:
      *(uint *)(v79 + 12) = 0;
      ++*(uint *)(v79 + 4);
      goto LABEL_9;
    case 1:
LABEL_9:
      v8 = &word_2267D60;
      v9 = v86;
      v10 = 10;
      do
      {
        v11 = *v8;
        ++v8;
        *(ushort *)v9 = v11;
        v9 += 2;
        --v10;
      }
      while ( v10 );
      v12 = 0;
      v13 = 4 * *(uint *)(v79 + 12);
      v82 = 0;
      v85 = *(short *)&v86[v13];
      v84 = *(short *)&v87[v13];
      *(uint *)(v79 + 8) = 0;
      v14 = v79;
      v81 = v85 << 12;
      v80 = v84 << 12;
      do
      {
        *(uchar *)(v14 + 58) = (v12 < 0) + __ROR4__((v12 << 31) - ((uint)v12 >> 31), 31);
        s32_div_f(v12, 3);
        v16 = v15;
        v15 = 6 - v15;
        *(ushort *)(v14 + 66) = v15;
        *(ushort *)(v14 + 68) = v15;
        *(uint *)(v14 + 20) = *(uint *)(*(uint *)v79 + v82 + 64);
        v17 = s32_div_f(v12, 3);
        *(uint *)(v14 + 60) = 30 * v17;
        s32_div_f(30 * v17, 360);
        *(uint *)(v14 + 60) = v18;
        *(ushort *)(v14 + 64) = 0;
        *(ushort *)(v14 + 70) = -2 * v16;
        if ( v85 )
        {
          v19 = ffltu(v81);
          v20 = fadd(0x3F000000u, v19);
        }
        else
        {
          v21 = ffltu(v81);
          v20 = fsub(v21, 1056964608);
        }
        *(uint *)(v14 + 32) = ffix(v20);
        if ( v84 )
        {
          v22 = ffltu(v80);
          v23 = fadd(0x3F000000u, v22);
        }
        else
        {
          v24 = ffltu(v80);
          v23 = fsub(v24, 1056964608);
        }
        *(uint *)(v14 + 36) = ffix(v23);
        *(uint *)(v14 + 48) = 0;
        *(uint *)(v14 + 52) = 0;
        *(uint *)(v14 + 24) = 0;
        *(uint *)(v14 + 28) = 0;
        *(uint *)(v14 + 40) = 0;
        *(uint *)(v14 + 44) = 0;
        *(uchar *)(v14 + 56) = 0;
        *(uchar *)(v14 + 57) = 1;
        *(uchar *)(v14 + 59) = 0;
        if ( *(uint *)(v14 + 60) == 180 )
          *(uchar *)(v14 + 56) = 2;
        v25 = *(uint *)(v14 + 60);
        if ( v25 >= 270 && v25 <= 90 )
          *(uchar *)(v14 + 56) = 1;
        v26 = *(short *)(v14 + 66);
        if ( v26 <= 0 )
        {
          v29 = fflt(v26 << 12);
          v28 = fsub(v29, 1056964608);
        }
        else
        {
          v27 = fflt(v26 << 12);
          v28 = fadd(0x3F000000u, v27);
        }
        v30 = ffix(v28);
        v31 = Function_201d250(*(uint *)(v14 + 60) & 0xFFFF);
        *(uint *)(v14 + 48) = (ll_mul(v31, v30) + 2048) >> 12;
        v32 = *(short *)(v14 + 68);
        if ( v32 <= 0 )
        {
          v35 = fflt(v32 << 12);
          v34 = fsub(v35, 1056964608);
        }
        else
        {
          v33 = fflt(v32 << 12);
          v34 = fadd(0x3F000000u, v33);
        }
        v36 = ffix(v34);
        v37 = Function_201d264(*(uint *)(v14 + 60) & 0xFFFF);
        *(uint *)(v14 + 52) = (ll_mul(v37, v36) + 2048) >> 12;
        v38 = *(short *)(v14 + 64);
        if ( v38 <= 0 )
        {
          v41 = fflt(v38 << 12);
          v40 = fsub(v41, 1056964608);
        }
        else
        {
          v39 = fflt(v38 << 12);
          v40 = fadd(0x3F000000u, v39);
        }
        v42 = *(uint *)(v14 + 28) + ffix(v40);
        *(uint *)(v14 + 28) = v42;
        Function_200d650(
          *(int **)(v14 + 20),
          *(uint *)(v14 + 24) + *(uint *)(v14 + 48) + *(uint *)(v14 + 40) + *(uint *)(v14 + 32),
          v42 + *(uint *)(v14 + 52) + *(uint *)(v14 + 44) + *(uint *)(v14 + 36),
          917504);
        ++v12;
        v14 += 52;
        v82 += 4;
      }
      while ( v12 < 36 );
      ++*(uint *)(v79 + 4);
      return Function_2261e28(*(uint *)v79);
    case 2:
      if ( !*(uint *)(v79 + 8) )
      {
        *(uint *)(v79 + 8) = 1;
        Function_2261e0c(*(uint *)v79, 1);
        Function_2005748(0x573u);
      }
      v43 = *(uint *)(v79 + 8);
      if ( v43 <= 30 )
      {
        *(uint *)(v79 + 8) = v43 + 1;
        v46 = v79;
        v83 = 0;
        do
        {
          v47 = (short)++*(ushort *)(v46 + 70);
          if ( v47 >= 0 )
          {
            v48 = *(uchar *)(v46 + 58) + 10;
            if ( v47 >= v48 )
            {
              if ( v47 == v48 )
                Function_200d364(*(int **)(v46 + 20), 0);
              v49 = *(short *)(v46 + 70);
              if ( v49 == *(uchar *)(v46 + 58) + 18 )
              {
                *(uchar *)(v46 + 57) = 0;
              }
              else if ( (v49 >> 31) + __ROR4__((v49 << 31) - (v49 >> 31), 31) )
              {
                *(uchar *)(v46 + 57) ^= 1u;
              }
              Function_200d3f4(*(uint **)(v46 + 20), *(uchar *)(v46 + 57));
              v50 = *(uchar *)(v46 + 59);
              if ( *(uchar *)(v46 + 59) )
              {
                if ( v50 == 1 )
                {
                  *(uint *)(v46 + 40) = 0;
                }
                else if ( v50 == 2 )
                {
                  *(uint *)(v46 + 40) = 4096;
                }
              }
              else
              {
                *(uint *)(v46 + 40) = -4096;
              }
              s32_div_f((uchar)++*(uchar *)(v46 + 59), 3);
              *(uchar *)(v46 + 59) = v51;
            }
            v52 = *(short *)(v46 + 70);
            if ( v52 > 5 )
            {
              v53 = *(uchar *)(v46 + 56);
              if ( *(uchar *)(v46 + 56) )
              {
                if ( v53 == 1 )
                {
                  *(ushort *)(v46 + 64) = s32_div_f(v52 + 5, 6);
                }
                else if ( v53 == 2 )
                {
                  *(ushort *)(v46 + 64) = s32_div_f(v52 + 5, 6);
                }
              }
              else
              {
                *(ushort *)(v46 + 64) = s32_div_f(v52 + 5, 7);
              }
            }
            v54 = *(uchar *)(v46 + 56);
            if ( *(uchar *)(v46 + 56) )
            {
              if ( v54 == 1 || v54 != 2 )
              {
                v58 = *(short *)(v46 + 70);
                v56 = (int)((25 - v58 + ((uint)((25 - v58) >> 2) >> 29)) << 13) >> 16;
                v57 = (int)((24 - v58 + ((uint)((24 - v58) >> 2) >> 29)) << 13) >> 16;
              }
              else
              {
                v55 = *(short *)(v46 + 70);
                v56 = (int)((25 - v55 + ((uint)((25 - v55) >> 2) >> 29)) << 13) >> 16;
                v57 = (int)((23 - v55 + ((uint)((23 - v55) >> 2) >> 29)) << 13) >> 16;
              }
            }
            else
            {
              v59 = *(short *)(v46 + 70);
              v56 = (int)((25 - v59 + ((uint)((25 - v59) >> 2) >> 29)) << 13) >> 16;
              v57 = (int)((26 - v59 + ((uint)((26 - v59) >> 2) >> 29)) << 13) >> 16;
            }
            if ( v56 <= 0 )
              v60 = *(ushort *)(v46 + 66) + 1;
            else
              v60 = *(ushort *)(v46 + 66) + v56;
            *(ushort *)(v46 + 66) = v60;
            if ( v57 <= 0 )
              v61 = *(ushort *)(v46 + 68) + 1;
            else
              v61 = *(ushort *)(v46 + 68) + v57;
            *(ushort *)(v46 + 68) = v61;
            v62 = *(short *)(v46 + 66);
            if ( v62 <= 0 )
            {
              v65 = fflt(v62 << 12);
              v64 = fsub(v65, 1056964608);
            }
            else
            {
              v63 = fflt(v62 << 12);
              v64 = fadd(0x3F000000u, v63);
            }
            v66 = ffix(v64);
            v67 = Function_201d250(*(uint *)(v46 + 60) & 0xFFFF);
            *(uint *)(v46 + 48) = (ll_mul(v67, v66) + 2048) >> 12;
            v68 = *(short *)(v46 + 68);
            if ( v68 <= 0 )
            {
              v71 = fflt(v68 << 12);
              v70 = fsub(v71, 1056964608);
            }
            else
            {
              v69 = fflt(v68 << 12);
              v70 = fadd(0x3F000000u, v69);
            }
            v72 = ffix(v70);
            v73 = Function_201d264(*(uint *)(v46 + 60) & 0xFFFF);
            *(uint *)(v46 + 52) = (ll_mul(v73, v72) + 2048) >> 12;
            v74 = *(short *)(v46 + 64);
            if ( v74 <= 0 )
            {
              v77 = fflt(v74 << 12);
              v76 = fsub(v77, 1056964608);
            }
            else
            {
              v75 = fflt(v74 << 12);
              v76 = fadd(0x3F000000u, v75);
            }
            v78 = *(uint *)(v46 + 28) + ffix(v76);
            *(uint *)(v46 + 28) = v78;
            Function_200d650(
              *(int **)(v46 + 20),
              *(uint *)(v46 + 24) + *(uint *)(v46 + 48) + *(uint *)(v46 + 40) + *(uint *)(v46 + 32),
              v78 + *(uint *)(v46 + 52) + *(uint *)(v46 + 44) + *(uint *)(v46 + 36),
              917504);
          }
          v46 += 52;
          ++v83;
        }
        while ( v83 < 36 );
      }
      else
      {
        *(uint *)(v79 + 4) = 1;
        v44 = *(uint *)(v79 + 12) + 1;
        *(uint *)(v79 + 12) = v44;
        s32_div_f(v44, 5);
        *(uint *)(v79 + 12) = v45;
        Function_2261e0c(*(uint *)v79, 0);
      }
      if ( **(uint **)(v79 + 16) )
        ++*(uint *)(v79 + 4);
      break;
    default:
      Function_2261e0c(*(uint *)v79, 0);
      free(v79);
      Call_RemoveTaskFromTaskList(v4);
      break;
  }
  return Function_2261e28(*(uint *)v79);
}

//----- (02264FEC) --------------------------------------------------------
uint *__fastcall Function_2264fec(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;

  v2 = a2;
  v3 = a1;
  v4 = (uint *)malloc(0x6Au, 1892);
  *v4 = v3;
  v4[1] = 0;
  v4[2] = 0;
  v4[4] = v2;
  return AddTaskToTaskList1((int)Function_22649e4, (int)v4, 0x1000u);
}

//----- (0226501C) --------------------------------------------------------
int __fastcall Function_226501c(int *a1)
{
  int *v1;
  int v2;
  int result;
  uint *v4;
  uchar *v5;
  int v6;

  v1 = a1;
  v2 = a1[1];
  result = a1[2];
  v4 = (uint *)v1[3];
  v5 = (uchar *)v1[5];
  v6 = v1[4];
  if ( v2 )
  {
    switch ( (uchar)*v1 )
    {
      case 0u:
        if ( *v4 >= 4 )
        {
          *v4 = 4;
          ++*v1;
        }
        else
        {
          ++*v4;
        }
        Function_2003a2c(v6, 0, 1u, *(uchar *)v4 + *v5, 0);
        result = Function_2003a2c(v6, 1, 1u, *(uchar *)v4 + *v5, 0);
        break;
      case 1u:
        Function_2017348(result, 1);
        v1[10] = 0;
        result = *v1 + 1;
        *v1 = result;
        break;
      case 2u:
        result = v1[20];
        if ( result == 1 )
        {
          result = v1[10] + 1;
          v1[10] = result;
          if ( result >= 15 )
          {
            result = *v1 + 1;
            *v1 = result;
          }
        }
        break;
      case 3u:
        if ( *v4 <= 0 )
        {
          *v4 = 0;
          ++*v1;
        }
        else
        {
          --*v4;
        }
        Function_2003a2c(v6, 0, 1u, *(uchar *)v4 + *v5, 0);
        result = Function_2003a2c(v6, 1, 1u, *(uchar *)v4 + *v5, 0);
        break;
      default:
        v1[20] = 0;
        v1[1] = 0;
        *v1 = 0;
        result = Function_2017348(result, 0);
        break;
    }
  }
  return result;
}

//----- (0226510C) --------------------------------------------------------
int *__fastcall Function_226510c(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  short *v6;
  int *result;
  int v8;
  int *v9;
  short v10;
  int v11;
  uint *v12;
  int *v13;
  short v14;
  int v15;
  int *v16;
  int v17;
  uint *v18;
  int *v19;
  int v20;
  short v21[2];
  int v22;
  short v23;
  short v24;
  short v25;
  short v26;
  int v27;
  int v28;
  int v29;
  int v30;
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v4 = (uint *)a1;
  v23 = 188;
  v5 = &v27;
  v6 = &v23;
  v24 = 188;
  v25 = 180;
  v26 = 180;
  v27 = 1;
  v28 = 1;
  v29 = 1;
  v30 = 1;
  result = *(int **)(a1 + 4);
  if ( result )
  {
    v8 = *v4;
    if ( *v4 )
    {
      if ( v8 == 1 )
      {
        if ( v4[20] == 1 )
        {
          v11 = v4[10] + 1;
          v4[10] = v11;
          if ( v11 >= 15 )
            ++*v4;
        }
      }
      else if ( v8 == 2 )
      {
        v17 = 0;
        v12 = v4;
        do
        {
          v13 = (int *)v12[2];
          v16 = v13;
          if ( v13 )
          {
            Function_200d550(v13, &v22, v21);
            v14 = v21[0];
            if ( v21[0] < 224 )
            {
              v21[0] += 6;
              Function_200d4c4(v16, (short)v22, (short)(v14 + 6));
              *v5 = 0;
            }
          }
          ++v12;
          ++v5;
          ++v17;
        }
        while ( v17 < 4 );
        if ( v27 && v28 && v29 )
          ++*v4;
      }
      else
      {
        v4[20] = 0;
        v4[1] = 0;
        *v4 = 0;
      }
    }
    else
    {
      v20 = 0;
      v18 = v4;
      do
      {
        v9 = (int *)v18[2];
        v19 = v9;
        if ( v9 )
        {
          Function_200d550(v9, &v22, v21);
          v10 = v21[0];
          if ( v21[0] > *v6 )
          {
            v21[0] -= 6;
            Function_200d4c4(v19, (short)v22, (short)(v10 - 6));
            *v5 = 0;
          }
        }
        ++v6;
        ++v18;
        ++v5;
        ++v20;
      }
      while ( v20 < 4 );
      if ( v27 && v28 && v29 )
      {
        v4[10] = 0;
        v4[20] = 0;
        ++*v4;
      }
    }
    v15 = 0;
    do
    {
      result = (int *)v4[2];
      if ( result )
        result = (int *)Function_200d33c(result);
      ++v15;
      ++v4;
    }
    while ( v15 < 4 );
  }
  return result;
}

//----- (02265260) --------------------------------------------------------
uint *__fastcall Function_2265260(uint *a1)
{
  uint *result;
  int v2;
  uint *v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  bool v8;
  int v9;
  uint *v10;
  uint *v11;

  v11 = a1;
  result = (uint *)a1[1];
  if ( result )
  {
    if ( *v11 )
    {
      if ( *v11 == 1 )
      {
        result = (uint *)v11[20];
        if ( result == (uint *)1 )
        {
          v7 = v11[19] + 1;
          result = v11;
          v8 = v11[19] - 14 < 0;
          v11[19] = v7;
          if ( !(v8 ^ __OFSUB__(v7, 15)) )
          {
            result = v11;
            ++*v11;
          }
        }
      }
      else
      {
        v9 = 0;
        v10 = v11;
        do
        {
          Function_2017348(v10[2], 0);
          ++v9;
          ++v10;
        }
        while ( v9 < 8 );
        result = v11;
        v11[20] = 0;
        v11[1] = 0;
        *v11 = 0;
      }
    }
    else
    {
      v2 = 0;
      v3 = v11;
      v4 = 0;
      do
      {
        v5 = v3[2];
        s32_div_f(v4, 40);
        Function_2017240(v5 + 136, v6);
        Function_2017348(v5, 1);
        ++v2;
        ++v3;
        v4 += 20;
      }
      while ( v2 < 8 );
      v11[19] = 0;
      result = v11;
      ++*v11;
    }
  }
  return result;
}

//----- (022652F4) --------------------------------------------------------
int __fastcall Function_22652f4(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  result = a1[1];
  if ( result )
  {
    if ( *v1 )
    {
      if ( *v1 == 1 )
      {
        result = v1[20];
        if ( result == 1 )
        {
          result = v1[10] + 1;
          v1[10] = result;
          if ( result >= 15 )
          {
            v1[21] = 1;
            result = *v1 + 1;
            *v1 = result;
          }
        }
      }
      else
      {
        result = v1[21];
        if ( !result )
        {
          result = 0;
          v1[20] = 0;
          v1[1] = 0;
          *v1 = 0;
        }
      }
    }
    else
    {
      Function_2264fec(v1[2], (int)(v1 + 21));
      v1[10] = 0;
      result = *v1 + 1;
      *v1 = result;
    }
  }
  return result;
}

//----- (0226534C) --------------------------------------------------------
int __fastcall Function_226534c(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  char v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a2 + 612);
  if ( !Function_200f2ac() || *(uchar *)(v4 + 52) == 1 )
    return Call_RemoveTaskFromTaskList(v2);
  switch ( v5 )
  {
    case 1:
      goto LABEL_13;
    case 2:
      goto LABEL_11;
    case 3:
      goto LABEL_9;
    case 4:
      goto LABEL_7;
    case 5:
      if ( !*(uint *)(v3 + 492) )
      {
        *(uint *)(v3 + 492) = 1;
        *(uint *)(v3 + 568) = 0;
      }
LABEL_7:
      if ( !*(uint *)(v3 + 372) )
      {
        Function_2005748(0x60Fu);
        *(uint *)(v3 + 372) = 1;
        *(uint *)(v3 + 448) = 0;
      }
LABEL_9:
      if ( !*(uint *)(v3 + 252) )
      {
        *(uint *)(v3 + 252) = 1;
        *(uint *)(v3 + 328) = 0;
      }
LABEL_11:
      if ( !*(uint *)(v3 + 132) )
      {
        Function_2005748(0x571u);
        *(uint *)(v3 + 132) = 1;
        *(uint *)(v3 + 208) = 0;
      }
LABEL_13:
      if ( !*(uint *)(v3 + 12) )
      {
        *(uint *)(v3 + 12) = 1;
        *(uint *)(v3 + 88) = 0;
      }
      break;
    default:
      if ( **(uint **)(v3 + 4) != *(uint *)v3 )
      {
        *(uint *)(v3 + 88) = 1;
        *(uint *)(v3 + 208) = 1;
        *(uint *)(v3 + 328) = 1;
        *(uint *)(v3 + 448) = 1;
        *(uint *)(v3 + 568) = 1;
        Function_20057a4(1393, 0);
      }
      break;
  }
  Function_226501c((int *)(v3 + 8));
  Function_226510c(v3 + 128, v7, v8, v9);
  Function_2265260((uint *)(v3 + 248));
  Function_226510c(v3 + 368, v10, v11, v12);
  Function_22652f4((int *)(v3 + 488));
  result = **(uint **)(v3 + 4);
  *(uint *)v3 = result;
  return result;
}

//----- (02265470) --------------------------------------------------------
uint *__fastcall Function_2265470(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint *v4;
  int v5;
  int v6;
  uint *v7;
  uint *result;
  char v9;
  int v10;
  char v11;
  int v12;

  v1 = a1;
  v2 = 0;
  a1[2339] = a1[5];
  a1[2187] = a1 + 2746;
  v3 = *(uint *)a1[2187];
  LOBYTE(a1) = 48;
  v1[2186] = v3;
  v4 = v1 + 2188;
  do
  {
    v5 = 0;
    *v4 = 0;
    v4[1] = 0;
    switch ( (uchar)a1 )
    {
      case 0:
        v4[2] = v1 + 593;
        v4[3] = v1 + 66;
        v4[5] = v1 + 67;
        a1 = *(uint **)(v1[5] + 20);
        v4[4] = a1;
        break;
      case 1:
        v4[2] = v1[52];
        v4[3] = v1[53];
        v4[4] = 0;
        v4[5] = 0;
        Function_200d550((int *)v1[52], &v12, &v11);
        Function_200d4c4((int *)v1[52], (short)v12, 224);
        Function_200d550((int *)v1[53], &v12, &v11);
        LOBYTE(a1) = Function_200d4c4((int *)v1[53], (short)v12, 224);
        break;
      case 2:
        v6 = (int)(v1 + 724);
        v7 = v4;
        LOBYTE(a1) = 12;
        do
        {
          ++v5;
          v7[2] = v6;
          v6 += 524;
          ++v7;
        }
        while ( v5 < 8 );
        break;
      case 3:
        v4[2] = 0;
        v4[3] = 0;
        v4[4] = v1[54];
        v4[5] = v1[55];
        Function_200d550((int *)v1[54], &v10, &v9);
        Function_200d4c4((int *)v1[54], (short)v10, 224);
        Function_200d550((int *)v1[55], &v10, &v9);
        LOBYTE(a1) = Function_200d4c4((int *)v1[55], (short)v10, 224);
        break;
      case 4:
        v4[2] = v1;
        break;
      default:
        break;
    }
    ++v2;
    v4 += 30;
  }
  while ( v2 < 5 );
  result = AddTaskToTaskList1((int)Function_226534c, (int)(v1 + 2186), 0x1000u);
  v1[2338] = result;
  return result;
}

//----- (022655DC) --------------------------------------------------------
uint __fastcall Function_22655dc(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  uint *v7;
  int *v8;
  int v9;
  int v10;
  int *v11;
  int *v13;
  uchar *v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  v14 = (uchar *)a1[87];
  v13 = (int *)a1[88];
  v5 = a1[92];
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = 0;
      v7 = v4 + 96;
      v8 = &v15;
      do
      {
        v9 = Function_2264774(v7);
        ++v6;
        v7 += 6;
        *v8 = v9;
        ++v8;
      }
      while ( v6 < 3 );
      Function_201c63c(*(uint *)(v4[95] + 16), 7, 3u, v4[96] >> 12);
      Function_201c63c(*(uint *)(v4[95] + 16), 5, 0, v4[102] >> 12);
      Function_201c63c(*(uint *)(v4[95] + 16), 6, 0, v4[108] >> 12);
      Function_201c63c(*(uint *)(v4[95] + 16), 1, 0, v4[102] >> 12);
      Function_201c63c(*(uint *)(v4[95] + 16), 2, 0, v4[108] >> 12);
      if ( v15 && v16 && v17 )
        ++v4[92];
    }
    else if ( v5 == 2 )
    {
      v4[94] = 1;
      v4[92] = 0;
    }
  }
  else
  {
    Function_2264764(v4 + 96, 0, 163840, 10);
    Function_2264764(v4 + 102, 0, 327680, 10);
    Function_2264764(v4 + 108, 0, -327680, 10);
    ++v4[92];
  }
  if ( *v13 >= 6 )
  {
    v11 = v13;
    v10 = 6;
  }
  else
  {
    v10 = *v13 + 1;
    v11 = v13;
  }
  *v11 = v10;
  Function_2003a2c(*(uint *)(v4[95] + 20), 0, 1u, *v14 + *(uchar *)v13, 0);
  return Function_2003a2c(*(uint *)(v4[95] + 20), 1, 1u, *v14 + *(uchar *)v13, 0);
}

//----- (02265754) --------------------------------------------------------
uint __fastcall Function_2265754(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  uint *v7;
  int *v8;
  int v9;
  int v10;
  int *v11;
  int *v13;
  uchar *v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  v14 = (uchar *)a1[87];
  v13 = (int *)a1[88];
  v5 = a1[92];
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = 0;
      v7 = v4 + 96;
      v8 = &v15;
      do
      {
        v9 = Function_2264774(v7);
        ++v6;
        v7 += 6;
        *v8 = v9;
        ++v8;
      }
      while ( v6 < 3 );
      Function_201c63c(*(uint *)(v4[95] + 16), 7, 3u, v4[96] >> 12);
      Function_201c63c(*(uint *)(v4[95] + 16), 5, 0, v4[102] >> 12);
      Function_201c63c(*(uint *)(v4[95] + 16), 6, 0, v4[108] >> 12);
      Function_201c63c(*(uint *)(v4[95] + 16), 1, 0, v4[102] >> 12);
      Function_201c63c(*(uint *)(v4[95] + 16), 2, 0, v4[108] >> 12);
      if ( v15 && v16 && v17 )
        ++v4[92];
    }
    else if ( v5 == 2 )
    {
      v4[94] = 0;
      v4[92] = 0;
    }
  }
  else
  {
    Function_2264764(v4 + 96, 163840, 0, 10);
    Function_2264764(v4 + 102, 327680, 0, 10);
    Function_2264764(v4 + 108, -327680, 0, 10);
    ++v4[92];
  }
  if ( *v13 <= 4 )
  {
    v11 = v13;
    v10 = 0;
  }
  else
  {
    v10 = *v13 - 1;
    v11 = v13;
  }
  *v11 = v10;
  Function_2003a2c(*(uint *)(v4[95] + 20), 0, 1u, *v14 + *(uchar *)v13, 0);
  return Function_2003a2c(*(uint *)(v4[95] + 20), 1, 1u, *v14 + *(uchar *)v13, 0);
}

//----- (022658C8) --------------------------------------------------------
int __fastcall Function_22658c8(char a1)
{
  int result;

  switch ( a1 )
  {
    case 1:
      result = 28;
      break;
    case 2:
      result = 14;
      break;
    case 3:
      result = 12;
      break;
    case 4:
      result = 10;
      break;
    case 5:
      result = 9;
      break;
    case 6:
      result = 32;
      break;
    case 7:
      result = 14;
      break;
    case 8:
      result = 12;
      break;
    case 9:
      result = 11;
      break;
    case 10:
      result = 11;
      break;
    default:
      result = 9;
      break;
  }
  return result;
}

//----- (0226591C) --------------------------------------------------------
int __fastcall Function_226591c(int *a1, int **a2)
{
  int *v2;
  int **v3;
  int v4;
  int v5;
  int v6;
  int result;
  int *v8;
  int v9;
  int **v10;
  int v11;
  int *v12;
  int *v13;
  int v14;

  v2 = a1;
  v3 = a2;
  v4 = *a2[86];
  if ( !Function_200f2ac() || *((uchar *)v3[95] + 52) == 1 )
    return Call_RemoveTaskFromTaskList(v2);
  v8 = v3[93];
  if ( v8 )
  {
    if ( !v3[94] )
      Function_22655dc(v3, 380, v5, v6);
    if ( !v3[89] && v4 && v4 < 8 )
    {
      v14 = 10 * v4;
      v9 = 0;
      v3[89] = (int *)dword_2267DA4[10 * v4];
      v3[90] = 0;
      v10 = v3;
      v3[80] = (int *)(dword_2267DA8[10 * v4] - 1);
      v11 = dword_2267DAC[10 * v4];
      v3[81] = (int *)v11;
      v3[82] = (int *)(v11 + 5);
      v12 = &dword_2267DA4[10 * v4];
      do
      {
        Function_200d430(*v10, v12[3] + 4);
        Function_200d430(v10[40], v12[6]);
        ++v9;
        ++v12;
        v10 += 20;
      }
      while ( v9 < 2 );
      AddTaskToTaskList1(dword_2267DC8[v14], (int)v3, 0x1001u);
    }
  }
  else if ( !v3[89] && v3[94] == (int *)1 )
  {
    Function_2265754(v3, 380, v5, v6);
  }
  result = 356;
  v13 = v3[89];
  if ( v13 )
    v3[89] = (int *)((char *)v13 - 1);
  return result;
}

//----- (02265A1C) --------------------------------------------------------
uint *__fastcall Function_2265a1c(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  uint *v4;
  int v5;
  uint *result;

  v1 = a1;
  a1[2146] = a1 + 2749;
  v1[2147] = v1 + 66;
  v1[2148] = v1 + 67;
  v1[2155] = v1[5];
  v2 = 0;
  a1[2149] = 0;
  a1[2152] = 0;
  a1[2153] = 0;
  v3 = a1;
  v4 = a1;
  do
  {
    ++v2;
    v4[2060] = v3[58];
    v5 = v3[56];
    ++v3;
    v4[2100] = v5;
    v4 += 20;
  }
  while ( v2 < 2 );
  result = AddTaskToTaskList1((int)Function_226591c, (int)(a1 + 2060), 0x1000u);
  v1[2145] = result;
  return result;
}

//----- (02265AA4) --------------------------------------------------------
int __fastcall Function_2265aa4(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;
  uint v5;
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
  char v18;
  char v19;

  v2 = a1;
  v3 = a2;
  if ( !Function_200f2ac() || *(uchar *)(*(uint *)(v3 + 380) + 52) == 1 )
    return Call_RemoveTaskFromTaskList(v2);
  v5 = *(uint *)(v3 + 360);
  if ( v5 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2265AE4 + v5) + 36068070);
  switch ( (uchar)v5 )
  {
    case 0:
      *(ushort *)(v3 + 8) = 0;
      *(ushort *)(v3 + 20) = 128;
      *(ushort *)(v3 + 22) = 160;
      *(uint *)(v3 + 24) = 64;
      *(uint *)(v3 + 28) = 24;
      Function_200d3f4(*(uint **)v3, 1);
      *(ushort *)(v3 + 168) = 0;
      *(ushort *)(v3 + 180) = 128;
      *(ushort *)(v3 + 182) = 160;
      *(uint *)(v3 + 184) = 64;
      *(uint *)(v3 + 188) = 24;
      Function_200d3f4(*(uint **)(v3 + 160), 1);
      Function_200d67c(*(int **)v3, &v19, (int *)&v18, 0x100000);
      v6 = (*(short *)(v3 + 20) << 12) + Function_201d250(*(ushort *)(v3 + 8)) * *(uint *)(v3 + 24);
      v7 = (*(short *)(v3 + 22) << 12) + Function_201d264(*(ushort *)(v3 + 8)) * *(uint *)(v3 + 28);
      Function_200d650(*(int **)v3, v6, v7, 0x100000);
      v8 = Function_22658c8(*(uint *)(v3 + 328));
      Function_2264764((uint *)(v3 + 32), v6, v6 + 737280, v8);
      v9 = Function_22658c8(*(uint *)(v3 + 328));
      Function_2264764((uint *)(v3 + 56), v7, v7 - 98304, v9);
      Function_200d67c(*(int **)(v3 + 160), &v19, (int *)&v18, 0x100000);
      v10 = (*(short *)(v3 + 180) << 12)
          + Function_201d250(*(ushort *)(v3 + 168)) * *(uint *)(v3 + 184);
      v11 = (*(short *)(v3 + 182) << 12)
          - Function_201d264(*(ushort *)(v3 + 168)) * *(uint *)(v3 + 188);
      Function_200d650(*(int **)(v3 + 160), v10, v11, 0x100000);
      v12 = Function_22658c8(*(uint *)(v3 + 324));
      Function_2264764((uint *)(v3 + 192), v10, v10 - 737280, v12);
      v13 = Function_22658c8(*(uint *)(v3 + 324));
      Function_2264764((uint *)(v3 + 216), v11, v11 + 98304, v13);
      Function_2265d84(v3 + 160);
      Function_2265d84(v3);
      ++*(uint *)(v3 + 360);
      goto LABEL_8;
    case 1:
LABEL_8:
      v14 = Function_2265fd4(v3 + 160, *(uint *)(v3 + 324), 0, 1);
      result = Function_2265f1c(v3, *(uint *)(v3 + 328), 1, 3);
      if ( v14 )
      {
        if ( result )
        {
          Function_2265d84(v3 + 160);
          Function_2265d84(v3);
          result = 360;
          ++*(uint *)(v3 + 360);
        }
      }
      break;
    case 2:
      v15 = Function_2265d8c(v3 + 160, *(uint *)(v3 + 324), 0, 3);
      result = Function_2265d8c(v3, *(uint *)(v3 + 328), 1, 2);
      if ( v15 && result )
      {
        Function_2265d84(v3 + 160);
        Function_2265d84(v3);
        result = 360;
        ++*(uint *)(v3 + 360);
      }
      break;
    case 3:
      v16 = Function_2265e64(v3 + 160, *(uint *)(v3 + 324), 0, 2);
      result = Function_2265f1c(v3, *(uint *)(v3 + 328), 1, 3);
      if ( v16 && result )
      {
        Function_2265d84(v3 + 160);
        Function_2265d84(v3);
        result = 360;
        ++*(uint *)(v3 + 360);
      }
      break;
    case 4:
      v17 = Function_2265fd4(v3 + 160, *(uint *)(v3 + 324), 0, 1);
      result = Function_2265d8c(v3, *(uint *)(v3 + 328), 1, 2);
      if ( v17 && result )
      {
        Function_2265d84(v3 + 160);
        Function_2265d84(v3);
        result = 360;
        ++*(uint *)(v3 + 360);
      }
      break;
    default:
      result = Call_RemoveTaskFromTaskList(v2);
      break;
  }
  return result;
}

//----- (02265D84) --------------------------------------------------------
int __fastcall Function_2265d84(int result)
{
  *(uint *)(result + 4) = 0;
  return result;
}

//----- (02265D8C) --------------------------------------------------------
BOOL __fastcall Function_2265d8c(int a1, char a2, int a3, int a4)
{
  int v4;
  int v5;
  char v6;
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
  int v19;
  int v20;
  int v21;

  v21 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 4);
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 1;
  }
  else
  {
    Function_200d67c(*(int **)v4, &v20, &v19, 0x100000);
    if ( v7 )
    {
      v11 = v20;
      v12 = Function_22658c8(v6);
      Function_2264764((uint *)(v4 + 32), v11, v11 + 737280, v12);
    }
    else
    {
      v9 = v20;
      v10 = Function_22658c8(v6);
      Function_2264764((uint *)(v4 + 32), v9, v9 - 737280, v10);
    }
    if ( v8 == 2 )
    {
      v13 = v19;
      v14 = Function_22658c8(v6);
      Function_2264764((uint *)(v4 + 56), v13, v13 - 98304, v14);
    }
    else
    {
      v15 = v19;
      v16 = Function_22658c8(v6);
      Function_2264764((uint *)(v4 + 56), v15, v15 + 98304, v16);
    }
    ++*(uint *)(v4 + 4);
  }
  v17 = Function_2264774((uint *)(v4 + 32));
  Function_2264774((uint *)(v4 + 56));
  Function_200d650(*(int **)v4, *(uint *)(v4 + 32), *(uint *)(v4 + 56), 0x100000);
  return v17 != 0;
}

//----- (02265E64) --------------------------------------------------------
BOOL __fastcall Function_2265e64(int a1, char a2, int a3, int a4)
{
  int v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v4 = a1;
  v5 = *(uint *)(a1 + 4);
  v6 = a2;
  v7 = a4;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 1;
  }
  else
  {
    if ( a3 )
    {
      v9 = Function_22658c8(a2);
      Function_2264764((uint *)(v4 + 32), -253952, 0x80000, v9);
    }
    else
    {
      v8 = Function_22658c8(a2);
      Function_2264764((uint *)(v4 + 32), 1261568, 0x80000, v8);
    }
    if ( v7 == 2 )
    {
      v10 = Function_22658c8(v6);
      Function_2264764((uint *)(v4 + 56), 655360, 557056, v10);
    }
    else
    {
      v11 = Function_22658c8(v6);
      Function_2264764((uint *)(v4 + 56), 655360, 753664, v11);
    }
    ++*(uint *)(v4 + 4);
  }
  v12 = Function_2264774((uint *)(v4 + 32));
  Function_2264774((uint *)(v4 + 56));
  Function_200d650(*(int **)v4, *(uint *)(v4 + 32), *(uint *)(v4 + 56), 0x100000);
  return v12 != 0;
}

//----- (02265F1C) --------------------------------------------------------
BOOL __fastcall Function_2265f1c(int a1, char a2, int a3, int a4)
{
  int v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v4 = a1;
  v5 = *(uint *)(a1 + 4);
  v6 = a2;
  v7 = a4;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 1;
  }
  else
  {
    if ( a3 )
    {
      v9 = Function_22658c8(a2);
      Function_2264764((uint *)(v4 + 32), -253952, 0x80000, v9);
    }
    else
    {
      v8 = Function_22658c8(a2);
      Function_2264764((uint *)(v4 + 32), 1261568, 0x80000, v8);
    }
    if ( v7 == 2 )
    {
      v10 = Function_22658c8(v6);
      Function_2264764((uint *)(v4 + 56), 393216, 294912, v10);
    }
    else
    {
      v11 = Function_22658c8(v6);
      Function_2264764((uint *)(v4 + 56), 393216, 491520, v11);
    }
    ++*(uint *)(v4 + 4);
  }
  v12 = Function_2264774((uint *)(v4 + 32));
  Function_2264774((uint *)(v4 + 56));
  Function_200d650(*(int **)v4, *(uint *)(v4 + 32), *(uint *)(v4 + 56), 0x100000);
  return v12 != 0;
}

//----- (02265FD4) --------------------------------------------------------
int __fastcall Function_2265fd4(int a1, char a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  uint v11;
  int v12;
  char v14;
  char v15;

  v4 = a1;
  v5 = *(uint *)(a1 + 4);
  v6 = a3;
  v7 = a4;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 1;
  }
  else
  {
    *(uint *)(v4 + 16) = 0;
    *(ushort *)(v4 + 8) = 0;
    ++*(uint *)(v4 + 4);
  }
  v8 = Function_22658c8(a2);
  *(ushort *)(v4 + 8) += s32_div_f(0x168u, v8);
  if ( *(short *)(v4 + 8) >= 360 )
    *(ushort *)(v4 + 8) = 0;
  Function_200d67c(*(int **)v4, &v15, (int *)&v14, 0x100000);
  v9 = *(ushort *)(v4 + 8);
  if ( v6 )
    v10 = (*(short *)(v4 + 20) << 12) + Function_201d250(v9) * *(uint *)(v4 + 24);
  else
    v10 = (*(short *)(v4 + 20) << 12) - Function_201d250(v9) * *(uint *)(v4 + 24);
  v11 = Function_201d264(*(ushort *)(v4 + 8));
  Function_200d650(*(int **)v4, v10, (*(short *)(v4 + 22) << 12) - v11 * *(uint *)(v4 + 28), 0x100000);
  if ( !*(ushort *)(v4 + 8) )
  {
    v12 = *(uint *)(v4 + 16) + 1;
    *(uint *)(v4 + 16) = v12;
    if ( v12 >= v7 )
    {
      ++*(uint *)(v4 + 4);
      return 1;
    }
    *(uint *)(v4 + 4) = 1;
  }
  return 0;
}

//----- (022660A8) --------------------------------------------------------
int __fastcall Function_22660a8(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;
  uint v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  uint v10;
  uint v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  char v17;
  char v18;
  int v19;
  int v20;
  BOOL v21;
  int v22;

  v2 = a1;
  v3 = a2;
  v19 = 1;
  v20 = 1;
  v21 = 1;
  v22 = 1;
  if ( !Function_200f2ac() || *(uchar *)(*(uint *)(v3 + 380) + 52) == 1 )
    return Call_RemoveTaskFromTaskList(v2);
  v5 = *(uint *)(v3 + 360);
  if ( v5 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_22660F4 + v5) + 36069622);
  switch ( (uchar)v5 )
  {
    case 0:
      v16 = 0;
      if ( *(uint *)(v3 + 320) > 0 )
      {
        v6 = v3;
        do
        {
          *(ushort *)(v6 + 8) = 0;
          *(ushort *)(v6 + 20) = 128;
          *(ushort *)(v6 + 22) = 160;
          *(uint *)(v6 + 24) = 64;
          *(uint *)(v6 + 28) = 24;
          Function_200d3f4(*(uint **)v6, 1);
          *(ushort *)(v6 + 168) = 0;
          *(ushort *)(v6 + 180) = 128;
          *(ushort *)(v6 + 182) = 160;
          *(uint *)(v6 + 184) = 64;
          *(uint *)(v6 + 188) = 24;
          Function_200d3f4(*(uint **)(v6 + 160), 1);
          Function_200d67c(*(int **)v6, &v18, (int *)&v17, 0x100000);
          v7 = Function_201d250(*(ushort *)(v6 + 8));
          v8 = *(short *)(v6 + 20) << 12;
          v9 = *(uint *)(v6 + 24) * v7;
          v10 = Function_201d264(*(ushort *)(v6 + 8));
          Function_200d650(
            *(int **)v6,
            v8 + v9,
            (*(short *)(v6 + 22) << 12) + *(uint *)(v6 + 28) * v10,
            0x100000);
          Function_200d67c(*(int **)(v6 + 160), &v18, (int *)&v17, 0x100000);
          v11 = Function_201d250(*(ushort *)(v6 + 168));
          v12 = *(short *)(v6 + 180) << 12;
          v13 = *(uint *)(v6 + 184) * v11;
          v14 = Function_201d264(*(ushort *)(v6 + 168));
          Function_200d650(
            *(int **)(v6 + 160),
            v12 + v13,
            (*(short *)(v6 + 182) << 12) - v14 * *(uint *)(v6 + 188),
            0x100000);
          v6 += 80;
          ++v16;
        }
        while ( v16 < *(uint *)(v3 + 320) );
      }
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      Function_200d3f4(*(uint **)(v3 + 80), 0);
      ++*(uint *)(v3 + 360);
      goto LABEL_11;
    case 1:
LABEL_11:
      v19 = Function_2265d8c(v3 + 160, *(uint *)(v3 + 324), 0, 3);
      v20 = Function_2265e64(v3 + 240, *(uint *)(v3 + 324), 0, 2);
      result = Function_2265f1c(v3, *(uint *)(v3 + 328), 1, 3);
      v21 = result;
      v22 = 1;
      if ( !v19 || !v20 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      Function_200d3f4(*(uint **)(v3 + 80), 1);
      ++*(uint *)(v3 + 360);
      goto LABEL_15;
    case 2:
LABEL_15:
      v19 = 1;
      v20 = Function_2265fd4(v3 + 240, *(uint *)(v3 + 324), 0, 1);
      v21 = Function_2265d8c(v3, *(uint *)(v3 + 328), 1, 2);
      result = Function_2265f1c(v3 + 80, *(uint *)(v3 + 328), 1, 3);
      v22 = result;
      if ( !v19 || !v20 || !v21 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      ++*(uint *)(v3 + 360);
      goto LABEL_21;
    case 3:
LABEL_21:
      v19 = Function_2265e64(v3 + 160, *(uint *)(v3 + 324), 0, 2);
      v20 = Function_2265d8c(v3 + 240, *(uint *)(v3 + 324), 0, 3);
      v21 = 1;
      result = Function_2265d8c(v3 + 80, *(uint *)(v3 + 328), 1, 2);
      v22 = result;
      if ( !v19 || !v20 || !v21 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      ++*(uint *)(v3 + 360);
      goto LABEL_26;
    case 4:
LABEL_26:
      v19 = Function_2265fd4(v3 + 160, *(uint *)(v3 + 324), 0, 1);
      v20 = 1;
      v21 = 1;
      result = Function_2265d8c(v3 + 80, *(uint *)(v3 + 328), 1, 2);
      v22 = result;
      if ( v19 && v20 && v21 && result )
      {
        Function_2265d84(v3 + 160);
        Function_2265d84(v3 + 240);
        Function_2265d84(v3);
        Function_2265d84(v3 + 80);
        v15 = *(uint *)(v3 + 332);
        if ( v15 == 1 )
        {
          *(uint *)(v3 + 332) = 0;
          result = *(uint *)(v3 + 360) + 1;
          *(uint *)(v3 + 360) = result;
        }
        else
        {
          *(uint *)(v3 + 332) = v15 + 1;
          result = 1;
          *(uint *)(v3 + 360) = 1;
        }
      }
      break;
    default:
      result = Call_RemoveTaskFromTaskList(v2);
      break;
  }
  return result;
}

//----- (0226644C) --------------------------------------------------------
int __fastcall Function_226644c(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;
  uint v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  uint v10;
  uint v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  char v17;
  char v18;
  int v19;
  int v20;
  BOOL v21;
  int v22;

  v2 = a1;
  v3 = a2;
  v19 = 1;
  v20 = 1;
  v21 = 1;
  v22 = 1;
  if ( !Function_200f2ac() || *(uchar *)(*(uint *)(v3 + 380) + 52) == 1 )
    return Call_RemoveTaskFromTaskList(v2);
  v5 = *(uint *)(v3 + 360);
  if ( v5 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2266498 + v5) + 36070554);
  switch ( (uchar)v5 )
  {
    case 0:
      v16 = 0;
      if ( *(uint *)(v3 + 320) > 0 )
      {
        v6 = v3;
        do
        {
          *(ushort *)(v6 + 8) = 0;
          *(ushort *)(v6 + 20) = 128;
          *(ushort *)(v6 + 22) = 160;
          *(uint *)(v6 + 24) = 64;
          *(uint *)(v6 + 28) = 24;
          Function_200d3f4(*(uint **)v6, 1);
          *(ushort *)(v6 + 168) = 0;
          *(ushort *)(v6 + 180) = 128;
          *(ushort *)(v6 + 182) = 160;
          *(uint *)(v6 + 184) = 64;
          *(uint *)(v6 + 188) = 24;
          Function_200d3f4(*(uint **)(v6 + 160), 1);
          Function_200d67c(*(int **)v6, &v18, (int *)&v17, 0x100000);
          v7 = Function_201d250(*(ushort *)(v6 + 8));
          v8 = *(short *)(v6 + 20) << 12;
          v9 = *(uint *)(v6 + 24) * v7;
          v10 = Function_201d264(*(ushort *)(v6 + 8));
          Function_200d650(
            *(int **)v6,
            v8 + v9,
            (*(short *)(v6 + 22) << 12) + *(uint *)(v6 + 28) * v10,
            0x100000);
          Function_200d67c(*(int **)(v6 + 160), &v18, (int *)&v17, 0x100000);
          v11 = Function_201d250(*(ushort *)(v6 + 168));
          v12 = *(short *)(v6 + 180) << 12;
          v13 = *(uint *)(v6 + 184) * v11;
          v14 = Function_201d264(*(ushort *)(v6 + 168));
          Function_200d650(
            *(int **)(v6 + 160),
            v12 + v13,
            (*(short *)(v6 + 182) << 12) - v14 * *(uint *)(v6 + 188),
            0x100000);
          v6 += 80;
          ++v16;
        }
        while ( v16 < *(uint *)(v3 + 320) );
      }
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      Function_200d3f4(*(uint **)(v3 + 80), 0);
      ++*(uint *)(v3 + 360);
      goto LABEL_11;
    case 1:
LABEL_11:
      v19 = Function_2265d8c(v3 + 160, *(uint *)(v3 + 324), 0, 3);
      v20 = Function_2265e64(v3 + 240, *(uint *)(v3 + 324), 0, 2);
      result = Function_2265f1c(v3, *(uint *)(v3 + 328), 1, 3);
      v21 = result;
      v22 = 1;
      if ( !v19 || !v20 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      Function_200d3f4(*(uint **)(v3 + 80), 1);
      ++*(uint *)(v3 + 360);
      goto LABEL_15;
    case 2:
LABEL_15:
      v19 = 1;
      v20 = Function_2265fd4(v3 + 240, *(uint *)(v3 + 324), 0, 2);
      v21 = Function_2265d8c(v3, *(uint *)(v3 + 328), 1, 2);
      result = Function_2265f1c(v3 + 80, *(uint *)(v3 + 328), 1, 3);
      v22 = result;
      if ( !v19 || !v20 || !v21 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      ++*(uint *)(v3 + 360);
      goto LABEL_21;
    case 3:
LABEL_21:
      v19 = Function_2265e64(v3 + 160, *(uint *)(v3 + 324), 0, 2);
      v20 = Function_2265d8c(v3 + 240, *(uint *)(v3 + 324), 0, 3);
      v21 = 1;
      result = Function_2265d8c(v3 + 80, *(uint *)(v3 + 328), 1, 2);
      v22 = result;
      if ( !v19 || !v20 || !v21 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      ++*(uint *)(v3 + 360);
      goto LABEL_26;
    case 4:
LABEL_26:
      v19 = Function_2265fd4(v3 + 160, *(uint *)(v3 + 324), 0, 2);
      v20 = 1;
      v21 = 1;
      result = Function_2265d8c(v3 + 80, *(uint *)(v3 + 328), 1, 2);
      v22 = result;
      if ( v19 && v20 && v21 && result )
      {
        Function_2265d84(v3 + 160);
        Function_2265d84(v3 + 240);
        Function_2265d84(v3);
        Function_2265d84(v3 + 80);
        v15 = *(uint *)(v3 + 332);
        if ( v15 == 1 )
        {
          *(uint *)(v3 + 332) = 0;
          result = *(uint *)(v3 + 360) + 1;
          *(uint *)(v3 + 360) = result;
        }
        else
        {
          *(uint *)(v3 + 332) = v15 + 1;
          result = 1;
          *(uint *)(v3 + 360) = 1;
        }
      }
      break;
    default:
      result = Call_RemoveTaskFromTaskList(v2);
      break;
  }
  return result;
}

//----- (022667F4) --------------------------------------------------------
int __fastcall Function_22667f4(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;
  uint v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  uint v10;
  uint v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  char v17;
  char v18;
  int v19;
  int v20;
  BOOL v21;
  int v22;

  v2 = a1;
  v3 = a2;
  v19 = 1;
  v20 = 1;
  v21 = 1;
  v22 = 1;
  if ( !Function_200f2ac() || *(uchar *)(*(uint *)(v3 + 380) + 52) == 1 )
    return Call_RemoveTaskFromTaskList(v2);
  v5 = *(uint *)(v3 + 360);
  if ( v5 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_2266840 + v5) + 36071490);
  switch ( (uchar)v5 )
  {
    case 0:
      v16 = 0;
      if ( *(uint *)(v3 + 320) > 0 )
      {
        v6 = v3;
        do
        {
          *(ushort *)(v6 + 8) = 0;
          *(ushort *)(v6 + 20) = 128;
          *(ushort *)(v6 + 22) = 160;
          *(uint *)(v6 + 24) = 64;
          *(uint *)(v6 + 28) = 24;
          Function_200d3f4(*(uint **)v6, 1);
          *(ushort *)(v6 + 168) = 0;
          *(ushort *)(v6 + 180) = 128;
          *(ushort *)(v6 + 182) = 160;
          *(uint *)(v6 + 184) = 64;
          *(uint *)(v6 + 188) = 24;
          Function_200d3f4(*(uint **)(v6 + 160), 1);
          Function_200d67c(*(int **)v6, &v18, (int *)&v17, 0x100000);
          v7 = Function_201d250(*(ushort *)(v6 + 8));
          v8 = *(short *)(v6 + 20) << 12;
          v9 = *(uint *)(v6 + 24) * v7;
          v10 = Function_201d264(*(ushort *)(v6 + 8));
          Function_200d650(
            *(int **)v6,
            v8 + v9,
            (*(short *)(v6 + 22) << 12) + *(uint *)(v6 + 28) * v10,
            0x100000);
          Function_200d67c(*(int **)(v6 + 160), &v18, (int *)&v17, 0x100000);
          v11 = Function_201d250(*(ushort *)(v6 + 168));
          v12 = *(short *)(v6 + 180) << 12;
          v13 = *(uint *)(v6 + 184) * v11;
          v14 = Function_201d264(*(ushort *)(v6 + 168));
          Function_200d650(
            *(int **)(v6 + 160),
            v12 + v13,
            (*(short *)(v6 + 182) << 12) - v14 * *(uint *)(v6 + 188),
            0x100000);
          v6 += 80;
          ++v16;
        }
        while ( v16 < *(uint *)(v3 + 320) );
      }
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      Function_200d3f4(*(uint **)(v3 + 80), 0);
      ++*(uint *)(v3 + 360);
      goto LABEL_11;
    case 1:
LABEL_11:
      v19 = Function_2265d8c(v3 + 160, *(uint *)(v3 + 324), 0, 3);
      v20 = Function_2265e64(v3 + 240, *(uint *)(v3 + 324), 0, 2);
      result = Function_2265f1c(v3, *(uint *)(v3 + 328), 1, 3);
      v21 = result;
      v22 = 1;
      if ( !v19 || !v20 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      Function_200d3f4(*(uint **)(v3 + 80), 1);
      ++*(uint *)(v3 + 360);
      goto LABEL_15;
    case 2:
LABEL_15:
      v19 = 1;
      v20 = Function_2265fd4(v3 + 240, *(uint *)(v3 + 324), 0, 1);
      v21 = Function_2265d8c(v3, *(uint *)(v3 + 328), 1, 2);
      result = Function_2265f1c(v3 + 80, *(uint *)(v3 + 328), 1, 3);
      v22 = result;
      if ( !v19 || !v20 || !v21 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      ++*(uint *)(v3 + 360);
      goto LABEL_20;
    case 3:
LABEL_20:
      result = Function_2265fd4(v3 + 240, *(uint *)(v3 + 324), 1, 1);
      v20 = result;
      if ( !result )
        return result;
      Function_2265d84(v3 + 240);
      ++*(uint *)(v3 + 360);
      goto LABEL_23;
    case 4:
LABEL_23:
      v19 = Function_2265e64(v3 + 160, *(uint *)(v3 + 324), 0, 2);
      v20 = Function_2265d8c(v3 + 240, *(uint *)(v3 + 324), 0, 3);
      v21 = 1;
      result = Function_2265d8c(v3 + 80, *(uint *)(v3 + 328), 1, 2);
      v22 = result;
      if ( !v19 || !v20 || !v21 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      ++*(uint *)(v3 + 360);
      goto LABEL_28;
    case 5:
LABEL_28:
      v19 = Function_2265fd4(v3 + 160, *(uint *)(v3 + 324), 0, 1);
      v20 = 1;
      v21 = 1;
      result = Function_2265d8c(v3 + 80, *(uint *)(v3 + 328), 1, 2);
      v22 = result;
      if ( !v19 || !v20 || !v21 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      ++*(uint *)(v3 + 360);
      goto LABEL_33;
    case 6:
LABEL_33:
      result = Function_2265fd4(v3 + 160, *(uint *)(v3 + 324), 1, 1);
      v19 = result;
      if ( result )
      {
        Function_2265d84(v3 + 160);
        v15 = *(uint *)(v3 + 332);
        if ( v15 == 1 )
        {
          *(uint *)(v3 + 332) = 0;
          result = *(uint *)(v3 + 360) + 1;
          *(uint *)(v3 + 360) = result;
        }
        else
        {
          *(uint *)(v3 + 332) = v15 + 1;
          result = 1;
          *(uint *)(v3 + 360) = 1;
        }
      }
      break;
    default:
      result = Call_RemoveTaskFromTaskList(v2);
      break;
  }
  return result;
}

//----- (02266BF0) --------------------------------------------------------
int __fastcall Function_2266bf0(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;
  uint v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  uint v10;
  uint v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  char v17;
  char v18;
  int v19;
  int v20;
  BOOL v21;
  int v22;

  v2 = a1;
  v3 = a2;
  v19 = 1;
  v20 = 1;
  v21 = 1;
  v22 = 1;
  if ( !Function_200f2ac() || *(uchar *)(*(uint *)(v3 + 380) + 52) == 1 )
    return Call_RemoveTaskFromTaskList(v2);
  v5 = *(uint *)(v3 + 360);
  if ( v5 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_2266C3C + v5) + 36072510);
  switch ( (uchar)v5 )
  {
    case 0:
      v16 = 0;
      if ( *(uint *)(v3 + 320) > 0 )
      {
        v6 = v3;
        do
        {
          *(ushort *)(v6 + 8) = 0;
          *(ushort *)(v6 + 20) = 128;
          *(ushort *)(v6 + 22) = 160;
          *(uint *)(v6 + 24) = 64;
          *(uint *)(v6 + 28) = 24;
          Function_200d3f4(*(uint **)v6, 1);
          *(ushort *)(v6 + 168) = 0;
          *(ushort *)(v6 + 180) = 128;
          *(ushort *)(v6 + 182) = 160;
          *(uint *)(v6 + 184) = 64;
          *(uint *)(v6 + 188) = 24;
          Function_200d3f4(*(uint **)(v6 + 160), 1);
          Function_200d67c(*(int **)v6, &v18, (int *)&v17, 0x100000);
          v7 = Function_201d250(*(ushort *)(v6 + 8));
          v8 = *(short *)(v6 + 20) << 12;
          v9 = *(uint *)(v6 + 24) * v7;
          v10 = Function_201d264(*(ushort *)(v6 + 8));
          Function_200d650(
            *(int **)v6,
            v8 + v9,
            (*(short *)(v6 + 22) << 12) + *(uint *)(v6 + 28) * v10,
            0x100000);
          Function_200d67c(*(int **)(v6 + 160), &v18, (int *)&v17, 0x100000);
          v11 = Function_201d250(*(ushort *)(v6 + 168));
          v12 = *(short *)(v6 + 180) << 12;
          v13 = *(uint *)(v6 + 184) * v11;
          v14 = Function_201d264(*(ushort *)(v6 + 168));
          Function_200d650(
            *(int **)(v6 + 160),
            v12 + v13,
            (*(short *)(v6 + 182) << 12) - v14 * *(uint *)(v6 + 188),
            0x100000);
          v6 += 80;
          ++v16;
        }
        while ( v16 < *(uint *)(v3 + 320) );
      }
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      Function_200d3f4(*(uint **)(v3 + 80), 0);
      ++*(uint *)(v3 + 360);
      goto LABEL_11;
    case 1:
LABEL_11:
      v19 = Function_2265d8c(v3 + 160, *(uint *)(v3 + 324), 0, 3);
      v20 = Function_2265e64(v3 + 240, *(uint *)(v3 + 324), 0, 2);
      result = Function_2265f1c(v3, *(uint *)(v3 + 328), 1, 3);
      v21 = result;
      v22 = 1;
      if ( !v19 || !v20 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      Function_200d3f4(*(uint **)(v3 + 80), 1);
      ++*(uint *)(v3 + 360);
      goto LABEL_15;
    case 2:
LABEL_15:
      v19 = 1;
      v20 = Function_2265fd4(v3 + 240, *(uint *)(v3 + 324), 0, 1);
      v21 = Function_2265d8c(v3, *(uint *)(v3 + 328), 1, 2);
      result = Function_2265f1c(v3 + 80, *(uint *)(v3 + 328), 1, 3);
      v22 = result;
      if ( !v19 || !v20 || !v21 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      ++*(uint *)(v3 + 360);
      goto LABEL_20;
    case 3:
LABEL_20:
      result = Function_2265fd4(v3 + 240, *(uint *)(v3 + 324), 1, 1);
      v20 = result;
      if ( !result )
        return result;
      Function_2265d84(v3 + 240);
      ++*(uint *)(v3 + 360);
      goto LABEL_23;
    case 4:
LABEL_23:
      v19 = Function_2265e64(v3 + 160, *(uint *)(v3 + 324), 0, 2);
      v20 = Function_2265d8c(v3 + 240, *(uint *)(v3 + 324), 0, 3);
      v21 = 1;
      result = Function_2265d8c(v3 + 80, *(uint *)(v3 + 328), 1, 2);
      v22 = result;
      if ( !v19 || !v20 || !v21 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      ++*(uint *)(v3 + 360);
      goto LABEL_28;
    case 5:
LABEL_28:
      v19 = Function_2265fd4(v3 + 160, *(uint *)(v3 + 324), 0, 1);
      v20 = 1;
      v21 = 1;
      result = Function_2265d8c(v3 + 80, *(uint *)(v3 + 328), 1, 2);
      v22 = result;
      if ( !v19 || !v20 || !v21 || !result )
        return result;
      Function_2265d84(v3 + 160);
      Function_2265d84(v3 + 240);
      Function_2265d84(v3);
      Function_2265d84(v3 + 80);
      ++*(uint *)(v3 + 360);
      goto LABEL_33;
    case 6:
LABEL_33:
      result = Function_2265fd4(v3 + 160, *(uint *)(v3 + 324), 1, 1);
      v19 = result;
      if ( result )
      {
        Function_2265d84(v3 + 160);
        v15 = *(uint *)(v3 + 332);
        if ( v15 == 8 )
        {
          *(uint *)(v3 + 332) = 0;
          result = *(uint *)(v3 + 360) + 1;
          *(uint *)(v3 + 360) = result;
        }
        else
        {
          *(uint *)(v3 + 332) = v15 + 1;
          result = 1;
          *(uint *)(v3 + 360) = 1;
        }
      }
      break;
    default:
      result = Call_RemoveTaskFromTaskList(v2);
      break;
  }
  return result;
}

//----- (02266FEC) --------------------------------------------------------
uint *__fastcall Function_2266fec(uint *result)
{
  *result = 1065353216;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  return result;
}

//----- (02266FFC) --------------------------------------------------------
int __fastcall Function_2266ffc(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = *a2;
  v5 = a2[1];
  v3 += 2;
  *v2 = v4;
  v2[1] = v5;
  v2 += 2;
  result = *v3;
  v7 = v3[1];
  *v2 = *v3;
  v2[1] = v7;
  return result;
}

//----- (0226700C) --------------------------------------------------------
uint __fastcall Function_226700c(int *a1, uint *a2, uint *a3)
{
  uint *v3;
  uint *v4;
  int *v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  uint v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  uint v18;
  uint v19;
  uint v20;
  int v21;
  int v22;
  int v23;
  uint v24;
  uint v25;
  int v26;
  uint v27;
  int v28;
  int v29;
  uint result;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = fmul(*a2, *a3);
  v7 = fmul(v3[1], v4[1]);
  v8 = fsub(v6, v7);
  v9 = fmul(v3[2], v4[2]);
  v10 = fsub(v8, v9);
  v11 = fmul(v3[3], v4[3]);
  *v5 = fsub(v10, v11);
  v12 = fmul(v3[2], v4[3]);
  v13 = fmul(*v3, v4[1]);
  v14 = fmul(v3[1], *v4);
  v15 = fadd(v13, v14);
  v16 = fadd(v12, v15);
  v17 = fmul(v3[3], v4[2]);
  v5[1] = fsub(v16, v17);
  v18 = fmul(v3[3], v4[1]);
  v19 = fmul(v3[2], *v4);
  v20 = fmul(*v3, v4[2]);
  v21 = fmul(v3[1], v4[3]);
  v22 = fsub(v20, v21);
  v23 = fadd(v19, v22);
  v5[2] = fadd(v18, v23);
  v24 = fmul(v3[3], *v4);
  v25 = fmul(*v3, v4[3]);
  v26 = fmul(v3[1], v4[2]);
  v27 = fadd(v25, v26);
  v28 = fmul(v3[2], v4[1]);
  v29 = fsub(v27, v28);
  result = fadd(v24, v29);
  v5[3] = result;
  return result;
}

//----- (0226711C) --------------------------------------------------------
uint __fastcall Function_226711c(uint *a1)
{
  uint *v1;
  uint v2;
  uint v3;
  uint v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = fadd(a1[3], a1[3]);
  v3 = fadd(v1[2], v1[2]);
  v4 = fmul(*v1, *v1);
  v5 = fadd(v1[1], v1[1]);
  v6 = fadd(v4, v5);
  v7 = fadd(v3, v6);
  return fadd(v2, v7);
}

//----- (02267160) --------------------------------------------------------
int __fastcall Function_2267160(uint *a1)
{
  uint *v1;
  int v2;
  uchar v3;
  char v4;
  uint v5;
  int v6;
  uint v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  v2 = Function_226711c(a1);
  Function_20e1108(v2, 0);
  if ( !v4 & v3 )
  {
    v5 = Function_226711c(v1);
    v6 = fmul(0x45800000u, v5);
    v9 = fadd(0x3F000000u, v6);
  }
  else
  {
    v7 = Function_226711c(v1);
    v8 = fmul(0x45800000u, v7);
    v9 = fsub(v8, 1056964608);
  }
  v10 = ffix(v9);
  v11 = FX_Sqrt(v10);
  v12 = fflt(v11);
  return f_div(v12, 0x45800000u);
}

//----- (022671B8) --------------------------------------------------------
int __fastcall Function_22671b8(int *a1, uint *a2, uint a3)
{
  uint *v3;
  int *v4;
  uint v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  *a1 = f_div(*a2, a3);
  v4[1] = f_div(v3[1], v5);
  v4[2] = f_div(v3[2], v5);
  result = f_div(v3[3], v5);
  v4[3] = result;
  return result;
}

//----- (022671EC) --------------------------------------------------------
int __fastcall Function_22671ec(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint v4;
  long long v5;
  int v6;
  uint v7;
  uint v8;
  uint v9;
  long long v10;
  int v11;
  uint v12;
  uint v13;
  uint v14;
  long long v15;
  int v16;
  uint v17;
  uint v18;
  uint v19;
  long long v20;
  int v21;
  uint v22;
  uint v23;
  uint v24;
  long long v25;
  int v26;
  uint v27;
  uint v28;
  uint v29;
  long long v30;
  int v31;
  uint v32;
  uint v33;
  uint v34;
  long long v35;
  int v36;
  uint v37;
  int v38;
  uint v39;
  long long v40;
  int v41;
  uint v42;
  int v43;
  uint v44;
  long long v45;
  int v46;
  uint v47;
  int v48;
  long long v49;
  int v50;
  uint v51;
  uint v52;
  long long v53;
  int v54;
  uint v55;
  long long v56;
  int v57;
  uint v58;
  uint v59;
  long long v60;
  int v61;
  uint v62;
  long long v63;
  int v64;
  uint v65;
  uint v66;
  long long v67;
  int v68;
  uint v69;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = fmul(a2[1], a2[1]);
  LODWORD(v5) = f2d(v4);
  v6 = dmul(0x4000000000000000LL, v5);
  v8 = d2f(v6, v7);
  v9 = fmul(v2[2], v2[2]);
  LODWORD(v10) = f2d(v9);
  v11 = dmul(0x4000000000000000LL, v10);
  v13 = d2f(v11, v12);
  v14 = fmul(v2[3], v2[3]);
  LODWORD(v15) = f2d(v14);
  v16 = dmul(0x4000000000000000LL, v15);
  v18 = d2f(v16, v17);
  v19 = fmul(v2[1], v2[2]);
  LODWORD(v20) = f2d(v19);
  v21 = dmul(0x4000000000000000LL, v20);
  v23 = d2f(v21, v22);
  v24 = fmul(v2[2], v2[3]);
  LODWORD(v25) = f2d(v24);
  v26 = dmul(0x4000000000000000LL, v25);
  v28 = d2f(v26, v27);
  v29 = fmul(v2[3], v2[1]);
  LODWORD(v30) = f2d(v29);
  v31 = dmul(0x4000000000000000LL, v30);
  v33 = d2f(v31, v32);
  v34 = fmul(v2[1], *v2);
  LODWORD(v35) = f2d(v34);
  v36 = dmul(0x4000000000000000LL, v35);
  v38 = d2f(v36, v37);
  v39 = fmul(v2[2], *v2);
  LODWORD(v40) = f2d(v39);
  v41 = dmul(0x4000000000000000LL, v40);
  v43 = d2f(v41, v42);
  v44 = fmul(v2[3], *v2);
  LODWORD(v45) = f2d(v44);
  v46 = dmul(0x4000000000000000LL, v45);
  v48 = d2f(v46, v47);
  LODWORD(v49) = f2d(v13);
  v50 = dsub(4607182418800017408LL, v49);
  v52 = v51;
  LODWORD(v53) = f2d(v18);
  v54 = dsub(__PAIR__(v52, v50), v53);
  *v3 = d2f(v54, v55);
  v3[1] = fadd(v23, v48);
  v3[2] = fsub(v33, v43);
  v3[3] = 0;
  v3[4] = fsub(v23, v48);
  LODWORD(v56) = f2d(v18);
  v57 = dsub(4607182418800017408LL, v56);
  v59 = v58;
  LODWORD(v60) = f2d(v8);
  v61 = dsub(__PAIR__(v59, v57), v60);
  v3[5] = d2f(v61, v62);
  v3[6] = fadd(v28, v38);
  v3[7] = 0;
  v3[8] = fadd(v33, v43);
  v3[9] = fsub(v28, v38);
  LODWORD(v63) = f2d(v8);
  v64 = dsub(4607182418800017408LL, v63);
  v66 = v65;
  LODWORD(v67) = f2d(v13);
  v68 = dsub(__PAIR__(v66, v64), v67);
  v3[10] = d2f(v68, v69);
  v3[11] = 0;
  v3[12] = 0;
  v3[13] = 0;
  v3[14] = 0;
  result = 1065353216;
  v3[15] = 1065353216;
  return result;
}

//----- (022673FC) --------------------------------------------------------
uint __fastcall Function_22673fc(int *a1, uint *a2)
{
  int *v2;
  uint *v3;
  uchar v4;
  char v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  uint v19;
  int v20;
  int v21;
  uint v22;
  int v23;
  int v24;
  uint v25;
  int v26;
  int v27;
  uint v28;
  int v29;
  int v30;
  uint v31;
  int v32;
  int v33;
  uint v34;
  int v35;
  int v36;
  uint v37;
  int v38;
  int v39;
  uint v40;
  int v41;
  int v42;
  uint v43;
  int v44;
  int v45;
  uint v46;
  int v47;
  int v48;
  uint v49;
  int v50;
  int v51;
  uint v52;
  int v53;
  uint result;

  v2 = a1;
  v3 = a2;
  Function_20e1108(*a1, 0);
  if ( !v5 & v4 )
  {
    v6 = fmul(0x45800000u, *v2);
    v8 = fadd(0x3F000000u, v6);
  }
  else
  {
    v7 = fmul(0x45800000u, *v2);
    v8 = fsub(v7, 1056964608);
  }
  *v3 = ffix(v8);
  Function_20e1108(v2[1], 0);
  if ( !v5 & v4 )
  {
    v9 = fmul(0x45800000u, v2[1]);
    v11 = fadd(0x3F000000u, v9);
  }
  else
  {
    v10 = fmul(0x45800000u, v2[1]);
    v11 = fsub(v10, 1056964608);
  }
  v3[1] = ffix(v11);
  Function_20e1108(v2[2], 0);
  if ( !v5 & v4 )
  {
    v12 = fmul(0x45800000u, v2[2]);
    v14 = fadd(0x3F000000u, v12);
  }
  else
  {
    v13 = fmul(0x45800000u, v2[2]);
    v14 = fsub(v13, 1056964608);
  }
  v3[2] = ffix(v14);
  Function_20e1108(v2[3], 0);
  if ( !v5 & v4 )
  {
    v15 = fmul(0x45800000u, v2[3]);
    v17 = fadd(0x3F000000u, v15);
  }
  else
  {
    v16 = fmul(0x45800000u, v2[3]);
    v17 = fsub(v16, 1056964608);
  }
  v3[3] = ffix(v17);
  Function_20e1108(v2[4], 0);
  if ( !v5 & v4 )
  {
    v18 = fmul(0x45800000u, v2[4]);
    v20 = fadd(0x3F000000u, v18);
  }
  else
  {
    v19 = fmul(0x45800000u, v2[4]);
    v20 = fsub(v19, 1056964608);
  }
  v3[4] = ffix(v20);
  Function_20e1108(v2[5], 0);
  if ( !v5 & v4 )
  {
    v21 = fmul(0x45800000u, v2[5]);
    v23 = fadd(0x3F000000u, v21);
  }
  else
  {
    v22 = fmul(0x45800000u, v2[5]);
    v23 = fsub(v22, 1056964608);
  }
  v3[5] = ffix(v23);
  Function_20e1108(v2[6], 0);
  if ( !v5 & v4 )
  {
    v24 = fmul(0x45800000u, v2[6]);
    v26 = fadd(0x3F000000u, v24);
  }
  else
  {
    v25 = fmul(0x45800000u, v2[6]);
    v26 = fsub(v25, 1056964608);
  }
  v3[6] = ffix(v26);
  Function_20e1108(v2[7], 0);
  if ( !v5 & v4 )
  {
    v27 = fmul(0x45800000u, v2[7]);
    v29 = fadd(0x3F000000u, v27);
  }
  else
  {
    v28 = fmul(0x45800000u, v2[7]);
    v29 = fsub(v28, 1056964608);
  }
  v3[7] = ffix(v29);
  Function_20e1108(v2[8], 0);
  if ( !v5 & v4 )
  {
    v30 = fmul(0x45800000u, v2[8]);
    v32 = fadd(0x3F000000u, v30);
  }
  else
  {
    v31 = fmul(0x45800000u, v2[8]);
    v32 = fsub(v31, 1056964608);
  }
  v3[8] = ffix(v32);
  Function_20e1108(v2[9], 0);
  if ( !v5 & v4 )
  {
    v33 = fmul(0x45800000u, v2[9]);
    v35 = fadd(0x3F000000u, v33);
  }
  else
  {
    v34 = fmul(0x45800000u, v2[9]);
    v35 = fsub(v34, 1056964608);
  }
  v3[9] = ffix(v35);
  Function_20e1108(v2[10], 0);
  if ( !v5 & v4 )
  {
    v36 = fmul(0x45800000u, v2[10]);
    v38 = fadd(0x3F000000u, v36);
  }
  else
  {
    v37 = fmul(0x45800000u, v2[10]);
    v38 = fsub(v37, 1056964608);
  }
  v3[10] = ffix(v38);
  Function_20e1108(v2[11], 0);
  if ( !v5 & v4 )
  {
    v39 = fmul(0x45800000u, v2[11]);
    v41 = fadd(0x3F000000u, v39);
  }
  else
  {
    v40 = fmul(0x45800000u, v2[11]);
    v41 = fsub(v40, 1056964608);
  }
  v3[11] = ffix(v41);
  Function_20e1108(v2[12], 0);
  if ( !v5 & v4 )
  {
    v42 = fmul(0x45800000u, v2[12]);
    v44 = fadd(0x3F000000u, v42);
  }
  else
  {
    v43 = fmul(0x45800000u, v2[12]);
    v44 = fsub(v43, 1056964608);
  }
  v3[12] = ffix(v44);
  Function_20e1108(v2[13], 0);
  if ( !v5 & v4 )
  {
    v45 = fmul(0x45800000u, v2[13]);
    v47 = fadd(0x3F000000u, v45);
  }
  else
  {
    v46 = fmul(0x45800000u, v2[13]);
    v47 = fsub(v46, 1056964608);
  }
  v3[13] = ffix(v47);
  Function_20e1108(v2[14], 0);
  if ( !v5 & v4 )
  {
    v48 = fmul(0x45800000u, v2[14]);
    v50 = fadd(0x3F000000u, v48);
  }
  else
  {
    v49 = fmul(0x45800000u, v2[14]);
    v50 = fsub(v49, 1056964608);
  }
  v3[14] = ffix(v50);
  Function_20e1108(v2[15], 0);
  if ( !v5 & v4 )
  {
    v51 = fmul(0x45800000u, v2[15]);
    v53 = fadd(0x3F000000u, v51);
  }
  else
  {
    v52 = fmul(0x45800000u, v2[15]);
    v53 = fsub(v52, 1056964608);
  }
  result = ffix(v53);
  v3[15] = result;
  return result;
}

//----- (02267728) --------------------------------------------------------
int *__fastcall Function_2267728(int *a1, uint *a2)
{
  uint *v2;
  char v4;

  v2 = a2;
  Function_22673fc(a1, (uint *)&v4);
  return MTX_Copy44To43_((int *)&v4, v2);
}

