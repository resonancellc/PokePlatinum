//----- (022561C0) --------------------------------------------------------
int __fastcall Function_22561c0(int a1, int *a2)
{
  int *v2;
  int result;

  v2 = a2;
  result = a2[5];
  if ( *(uint *)(a2[3] + 128) )
  {
    switch ( (uchar)*a2 )
    {
      case 0u:
        Function_2256508(result);
        Function_2256294(v2);
        Function_2017dd4(4, 8);
        Function_225710c(v2);
        Function_225717c(v2, 1);
        result = *v2 + 1;
        *v2 = result;
        break;
      case 1u:
        Function_2256634(a2);
        Function_2256704(v2);
        Function_2002bec(1);
        Function_22562ec(v2[5], v2 + 114);
        Function_201ff74(0x10u, 1);
        Function_201ff74(1u, 1);
        Function_201ff74(2u, 1);
        Function_201ff74(4u, 1);
        Function_201ff74(8u, 1);
        Function_2257100(v2);
        result = *v2 + 1;
        *v2 = result;
        break;
      case 2u:
        Function_225712c(a2);
        Function_2257098(v2);
        Function_22569e0(v2);
        Function_2256d04(v2);
        Function_22568e0(v2);
        Function_22571d0(v2);
        result = Function_20219f8(v2[10]);
        break;
      default:
        return result;
    }
  }
  return result;
}

//----- (02256294) --------------------------------------------------------
int __fastcall Function_2256294(int a1)
{
  uint *v1;
  int result;

  v1 = (uint *)a1;
  *(uint *)(a1 + 644) = 0;
  *(ushort *)(a1 + 628) = 0;
  *(ushort *)(a1 + 630) = 0;
  *(ushort *)(a1 + 632) = 0;
  *(ushort *)(a1 + 634) = 0;
  *(uint *)(a1 + 24) = Function_200b358(4u);
  v1[7] = LoadFromMsgNARC(0, 26, 635, 4u);
  result = Function_2006f6c(74, 3, 1, v1 + 9, 4);
  v1[8] = result;
  return result;
}

//----- (022562EC) --------------------------------------------------------
int __fastcall Function_22562ec(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  char v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a1;
  v13 = 160;
  v12 = 208;
  v11 = 3;
  v3 = a2;
  v4 = 0;
  v5 = 1;
  v10 = 613;
  do
  {
    Function_201a7e8(v2, v3, (v4 + 4) & 0xFF, 1, v5, 8u, 2u, 12, v13);
    Function_201ada4_ClearTextBox(v3, 0);
    Function_201a954(v3, v6);
    Function_201a7e8(v2, v3 + 16, (v4 + 4) & 0xFF, 2, v11, 0x1Bu, 5u, 12, v12);
    Function_201ada4_ClearTextBox(v3 + 16, 0);
    Function_201a954(v3 + 16, v7);
    Function_201a7e8(v2, v3 + 32, (v4 + 4) & 0xFF, 12, v5, 0xFu, 2u, 12, v10);
    Function_201ada4_ClearTextBox(v3 + 32, 0);
    Function_201a954(v3 + 32, v8);
    ++v4;
    v13 += 16;
    v5 += 8;
    v12 += 135;
    v3 += 56;
    v11 += 8;
    result = v10 + 30;
    v10 += 30;
  }
  while ( v4 < 3 );
  return result;
}

//----- (022563E8) --------------------------------------------------------
uint __fastcall Function_22563e8(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_201a8fc(v1 + 16);
    Function_201a8fc(v1);
    result = Function_201a8fc(v1 + 32);
    ++v2;
    v1 += 56;
  }
  while ( v2 < 3 );
  return result;
}

//----- (02256410) --------------------------------------------------------
uint *__fastcall Function_56_2256410(uint *a1)
{
  uint *v1;
  uint *v2;
  uint *v3;
  uint *v4;
  uint *v5;

  v1 = a1;
  v2 = Function_200679c((int)Function_22561c0, 664, 4u, 4u);
  v3 = v2;
  v4 = (uint *)Function_201ced0((int)v2);
  v5 = v4;
  v4[3] = v1;
  v4[5] = v1[2];
  v4[1] = v1[32];
  v4[2] = v1[31];
  v4[4] = LoadTrainerDataAdress(v1[3]);
  *v5 = 0;
  v5[165] = v3;
  v5[156] = *(uint *)(v1[32] + 1244);
  return v5;
}

//----- (02256468) --------------------------------------------------------
int __fastcall Function_56_2256468(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int v4;
  int v6;

  v1 = a1;
  if ( *a1 != 2 )
    return ErrorHandler();
  v6 = a1[5];
  *a1 = 3;
  Function_2002c28(1);
  Function_200a4e4((int *)v1[89]);
  Function_200a6dc((int *)v1[90]);
  v2 = 0;
  v3 = v1;
  do
  {
    Function_2009754((int *)v3[85]);
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  Function_2021964((int *)v1[10]);
  Function_200b190((ushort *)v1[7]);
  Function_200b3f0((uint *)v1[6], v4);
  Function_22563e8((int)(v1 + 114));
  Function_22564e4(v6);
  free(v1[8]);
  return Function_20067d0(v1[165]);
}

//----- (022564E4) --------------------------------------------------------
int __fastcall Function_22564e4(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 4);
  Function_2019044(v1, 5);
  Function_2019044(v1, 6);
  return Function_2019044(v1, 7);
}

//----- (02256508) --------------------------------------------------------
int __fastcall Function_2256508(int a1, int a2, int a3, int a4)
{
  uint *v4;
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

  v34 = a4;
  v4 = (uint *)a1;
  Function_22564e4(a1);
  v27 = 0;
  v28 = 0;
  v29 = 2048;
  v30 = 0;
  v31 = 786433;
  v32 = 256;
  v33 = 0;
  Function_20183c4(v4, 4u, &v27, 0);
  Function_2019ebc(v4, 4u);
  Function_201ff74(1u, 0);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 851969;
  v25 = 512;
  v26 = 0;
  Function_20183c4(v4, 5u, &v20, 0);
  Function_2019ebc(v4, 5u);
  Function_201ff74(2u, 0);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 917505;
  v18 = 512;
  v19 = 0;
  Function_20183c4(v4, 6u, &v13, 0);
  Function_2019ebc(v4, 6u);
  Function_201ff74(4u, 0);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 983041;
  v11 = 512;
  v12 = 0;
  Function_20183c4(v4, 7u, &v6, 0);
  Function_201ff74(8u, 0);
  Call_LoadFromNARC_RLCN(74, 0, 4u, 0, 96, 4);
  LoadFromNARC_RGCN(74, 2, v4, 7u, 0, 5120, 1, 4);
  LoadFromNARC_RCSN(74, 4, v4, 7u, 0, 1536, 1, 4);
  return Function_205d8cc(4u, 0);
}

//----- (02256634) --------------------------------------------------------
int __fastcall Function_2256634(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;

  v4 = a1;
  *(uint *)(a1 + 40) = Function_20095c4(10, a1 + 44, 4, a4);
  v5 = 0;
  v6 = v4;
  do
  {
    *(uint *)(v6 + 340) = Function_2009714(1, v5, 4u);
    v5 = (int *)((char *)v5 + 1);
    v6 += 4;
  }
  while ( (int)v5 < 4 );
  *(uint *)(v4 + 356) = Function_200985c(*(uint *)(v4 + 340), 74, 5, 1, 999, 2, 4);
  *(uint *)(v4 + 360) = Function_20098b8(*(uint *)(v4 + 344), 74, 1, 0, 999, 2, 1, 4);
  *(uint *)(v4 + 364) = Function_2009918(*(uint *)(v4 + 348), 74, 6, 1, 999, 2u, 4);
  *(uint *)(v4 + 368) = Function_2009918(*(uint *)(v4 + 352), 74, 7, 1, 999, 3u, 4);
  Function_200a3dc(*(int **)(v4 + 356));
  return Function_200a640(*(int **)(v4 + 360));
}

//----- (02256704) --------------------------------------------------------
int __fastcall Function_2256704(int *a1)
{
  int *v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int *v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  short v17;
  int v18;
  int v19;
  int v20;

  v1 = a1;
  Function_20093b4((int)(a1 + 93), 999, 999, 999, 999, -1, -1, 0, 0, a1[85], a1[86], a1[87], a1[88], 0, 0);
  v2 = 0;
  v9 = v1[10];
  v10 = v1 + 93;
  v13 = 0;
  v14 = 4096;
  v15 = 4096;
  v16 = 4096;
  v17 = 0;
  v19 = 2;
  v3 = &dword_2257238;
  v18 = 0;
  v20 = 4;
  do
  {
    v11 = 950272;
    v4 = *v3;
    if ( *v3 <= 0 )
    {
      v7 = fflt(v4 << 12);
      v6 = fsub(v7, 1056964608);
    }
    else
    {
      v5 = fflt(v4 << 12);
      v6 = fadd(0x3F000000u, v5);
    }
    v12 = ffix(v6) + 786432;
    v1[102] = Function_2021aa0((uint **)&v9);
    Function_2021cc8(v1[102], 1);
    result = Function_2021d6c(v1[102], v2++);
    ++v3;
    ++v1;
  }
  while ( v2 < 3 );
  return result;
}

//----- (022567E4) --------------------------------------------------------
int __fastcall Function_22567e4(int a1, int a2)
{
  int v2;

  v2 = a2 + 1;
  if ( v2 == 30 )
    v2 = 0;
  return v2;
}

//----- (022567F0) --------------------------------------------------------
int __fastcall Function_22567f0(int a1, int a2)
{
  int result;

  result = a1 + a2;
  if ( result >= 30 )
    result -= 30;
  return result;
}

//----- (022567FC) --------------------------------------------------------
int __fastcall Function_22567fc(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v3 = a1;
  v4 = 56 * a2;
  v5 = a3;
  *(uint *)(a1 + 504 + 56 * a2) = a3[4];
  Function_20198e8(
    *(uint *)(a1 + 20),
    7,
    0,
    8 * a2 & 0xFF,
    0x20u,
    8u,
    *(uint *)(a1 + 36) + 12,
    0,
    24 * *(uchar *)(a1 + 504 + 56 * a2),
    0x20u,
    0x30u);
  v6 = v3 + 456;
  Function_201ada4_ClearTextBox(v3 + 456 + v4, 0);
  v7 = v3 + 472;
  Function_201ada4_ClearTextBox(v3 + 472 + v4, 0);
  v8 = v3 + 488;
  Function_201ada4_ClearTextBox(v8 + v4, 0);
  v9 = *v5;
  Function_201d78c(v6 + v4, 1);
  v10 = v5[1];
  Function_201d78c(v7 + v4, 1);
  Function_201a9a4(v6 + v4);
  Function_201a9a4(v7 + v4);
  if ( v5[2] )
    Function_201d78c(v8 + v4, 1);
  return Function_201a9a4(v8 + v4);
}

//----- (022568E0) --------------------------------------------------------
int __fastcall Function_22568e0(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int i;
  int v6;
  int *v7;

  v1 = a1;
  v2 = Function_22567f0(*(uint *)(*(uint *)(a1 + 624) + 844), *(ushort *)(a1 + 632));
  v3 = *(uint *)(*(uint *)(v1 + 624) + 840);
  if ( v3 > 3 )
    v3 = 3;
  if ( *(ushort *)(v1 + 632) != *(uint *)(v1 + 636) )
  {
    Function_2257100(v1);
    *(uint *)(v1 + 636) = *(ushort *)(v1 + 632);
  }
  result = *(uint *)(v1 + 644);
  if ( result == 1 )
  {
    for ( i = 0; i < v3; v2 = Function_22567e4(*(uint *)(v1 + 624), v2) )
      Function_22567fc(v1, i++, (int *)(*(uint *)(v1 + 624) + 28 * v2));
    v6 = Function_2019fe4(*(uint *)(v1 + 20), 7);
    DC_FlushRange(v6, 1536);
    v7 = (int *)Function_2019fe4(*(uint *)(v1 + 20), 7);
    Function_2019460(*(uint **)(v1 + 20), 7u, v7, 1536, 0);
    result = 644;
    *(uint *)(v1 + 644) = 0;
  }
  return result;
}

//----- (02256994) --------------------------------------------------------
int __fastcall Function_2256994(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v9;
  uint v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v9 = 950272;
  if ( a2 <= 0 )
  {
    v7 = fflt(a2 << 12);
    v6 = fsub(v7, 1056964608);
  }
  else
  {
    v5 = fflt(a2 << 12);
    v6 = fadd(0x3F000000u, v5);
  }
  v10 = ffix(v6) + 786432;
  v11 = 0;
  return Function_2021c50(v4, &v9);
}

//----- (022569E0) --------------------------------------------------------
int __fastcall Function_22569e0(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  *(ushort *)(a1 + 628) = *(uint *)(*(uint *)(a1 + 624) + 840);
  if ( *(ushort *)(a1 + 628) > 3u && *(ushort *)(a1 + 630) <= 3u )
  {
    *(ushort *)(a1 + 634) = 1;
    *(ushort *)(a1 + 632) = *(ushort *)(a1 + 628) - 3;
  }
  Function_2021cac(*(uint *)(a1 + 416), *(ushort *)(a1 + 634));
  if ( *(ushort *)(v1 + 634) && Function_2257184(v1) == 1 )
  {
    v2 = s32_div_f(96 * *(ushort *)(v1 + 632), *(ushort *)(v1 + 628) - 3);
    Function_2256994(*(uint **)(v1 + 416), v2 + 48, v3, v4);
  }
  result = 630;
  *(ushort *)(v1 + 630) = *(ushort *)(v1 + 628);
  return result;
}

//----- (02256A68) --------------------------------------------------------
int __fastcall Function_2256a68(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int v9;
  int v11;

  v1 = a1;
  v2 = Function_2022644((uchar *)dword_2257264);
  v3 = Function_2257174(v1);
  if ( v2 != -1 )
  {
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        Function_225718c(v1, 1);
        if ( v3 == 1 )
        {
          if ( *(ushort *)(v1 + 632) < *(ushort *)(v1 + 628) - 3 )
          {
            Function_2005748(0x5E5u);
            ++*(ushort *)(v1 + 632);
          }
          *(uint *)(v1 + 452) = -1;
        }
      }
      else if ( v2 == 5 )
      {
        *(uint *)(v1 + 452) = 3;
      }
      else if ( word_21BF6DC )
      {
        v4 = *(uint *)(v1 + 624);
        if ( *(uint *)(v4 + 840) >= v2 - 1 )
        {
          v5 = 0;
          v6 = 0;
          v11 = 28 * Function_22567f0(*(uint *)(v4 + 844), *(ushort *)(v1 + 632) + v2 - 2);
          while ( 1 )
          {
            v7 = Function_2033f3c(v5);
            if ( v7 )
            {
              v8 = (uint *)(v7 + 80);
              if ( *(uchar *)(*(uint *)(v1 + 4) + v6 + 13) == 2
                && *v8 == *(uint *)(v11 + *(uint *)(v1 + 624) + 12) )
              {
                break;
              }
            }
            ++v5;
            v6 += 24;
            if ( v5 >= 10 )
              goto LABEL_24;
          }
          Function_2005748(0x5E5u);
          *(uchar *)(*(uint *)(v1 + 4) + 24 * v5 + 15) = 1;
LABEL_24:
          v9 = Function_2033f9c();
          if ( *(uint *)(*(uint *)(v1 + 624) + v11 + 12) == GetTrainerID(v9) )
          {
            Function_2005748(0x5E5u);
            *(uchar *)(*(uint *)(v1 + 4) + 1215) = 1;
          }
        }
        *(uint *)(v1 + 452) = v2 - 2;
      }
    }
    else
    {
      Function_225718c(v1, 0);
      if ( v3 == 1 )
      {
        if ( *(ushort *)(v1 + 632) )
        {
          Function_2005748(0x5E5u);
          --*(ushort *)(v1 + 632);
        }
        *(uint *)(v1 + 452) = -2;
      }
    }
  }
  return v2;
}

//----- (02256BC0) --------------------------------------------------------
int __fastcall Function_2256bc0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  uint v15;
  char v16;

  v1 = a1;
  v2 = Function_2022644((uchar *)dword_2257250);
  v14 = v2;
  if ( v2 == -1 )
  {
    Function_225717c(v1, 1);
  }
  else if ( v2 )
  {
    if ( *(uint *)(*(uint *)(v1 + 624) + 840) >= v2 )
    {
      v11 = v2 - 1;
      if ( *(uint *)(v1 + 452) == v2 - 1 )
      {
        v12 = *(uint *)(v1 + 508 + 56 * v11);
        if ( v12 < 5 )
          *(uint *)(v1 + 508 + 56 * v11) = v12 + 1;
      }
    }
  }
  else
  {
    Function_225717c(v1, 0);
    Function_20227a4(&v16, &v15);
    Function_2256994(*(uint **)(v1 + 416), v15, v3, v4);
    v5 = *(ushort *)(v1 + 628);
    if ( v5 > 3 )
    {
      v6 = v5 - 2;
      v7 = s32_div_f(0x60u, v5 - 2);
      v8 = 0;
      if ( v6 > 0 )
      {
        v9 = 0;
        v10 = 0;
        while ( v15 < v9 + 48 || v15 >= v10 + v7 + 48 )
        {
          ++v8;
          v9 += v7;
          v10 += v7;
          if ( v8 >= v6 )
            return v14;
        }
        *(ushort *)(v1 + 632) = v8;
      }
    }
  }
  return v14;
}

//----- (02256C84) --------------------------------------------------------
int __fastcall Function_2256c84(int result)
{
  int v1;
  int v2;

  v1 = result;
  if ( dword_21BF6C0 & 0x200 )
  {
    Function_225718c(result, 0);
    result = dword_21BF6C8;
    if ( dword_21BF6C8 & 0x200 )
    {
      result = *(ushort *)(v1 + 632);
      if ( *(ushort *)(v1 + 632) )
      {
        --*(ushort *)(v1 + 632);
        result = Function_2005748(0x5E5u);
      }
    }
  }
  else if ( dword_21BF6C0 & 0x100 )
  {
    Function_225718c(result, 1);
    result = 256;
    if ( dword_21BF6C8 & 0x100 )
    {
      result = 632;
      v2 = *(ushort *)(v1 + 632);
      if ( v2 < *(ushort *)(v1 + 628) - 3 )
      {
        *(ushort *)(v1 + 632) = v2 + 1;
        result = Function_2005748(0x5E5u);
      }
    }
  }
  return result;
}

//----- (02256D04) --------------------------------------------------------
int __fastcall Function_2256d04(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = -1;
  if ( !Function_20509a4(a1[3]) )
  {
    v3 = Function_2256a68((int)v1);
    v2 = Function_2256bc0((int)v1);
    if ( v3 == -1 && v2 == -1 )
      Function_2256c84((int)v1);
  }
  return Function_2256d64(v1[5], v1[9], v1 + 114, v2 - 1, *(uint *)(v1[156] + 840), v1 + 160);
}

//----- (02256D64) --------------------------------------------------------
int __fastcall Function_2256d64(uint *a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v6;
  int v7;
  int i;
  int v9;
  int result;
  int v11;
  uchar v12;
  int v13;
  int v14;
  int *v15;
  uint *v16;
  int v17;
  int v18;

  v16 = a1;
  v17 = a2;
  v6 = a3;
  v7 = 0;
  if ( a5 > 3 )
    a5 = 3;
  for ( i = 0; i < a5; a3 += 56 )
  {
    if ( a4 != i )
    {
      v9 = *(uint *)(a3 + 52);
      if ( v9 )
        *(uint *)(a3 + 52) = v9 - 1;
    }
    ++i;
    v7 += *(uint *)(a3 + 52);
  }
  if ( v7 || (result = *a6) != 0 )
  {
    *a6 = v7;
    v11 = 0;
    if ( a5 > 0 )
    {
      v12 = 0;
      v18 = v17 + 12;
      do
      {
        v13 = *(uint *)(v6 + 52) / 2;
        Function_20198e8((int)v16, 7, 0, v12, 0x20u, 8u, v18, 0, 8 * v13 + 24 * *(uchar *)(v6 + 48), 0x20u, 0x30u);
        Function_2019184((int)v16, (v11++ + 4) & 0xFF, 3u, dword_2257244[v13]);
        v6 += 56;
        v12 += 8;
      }
      while ( v11 < a5 );
    }
    v14 = Function_2019fe4((int)v16, 7);
    DC_FlushRange(v14, 1536);
    v15 = (int *)Function_2019fe4((int)v16, 7);
    result = Function_2019460(v16, 7u, v15, 1536, 0);
  }
  else
  {
    *a6 = 0;
  }
  return result;
}

//----- (02256E5C) --------------------------------------------------------
ushort *__fastcall Function_2256e5c(int a1, int a2, int *a3, ushort **a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  ushort *v10;
  ushort *v11;
  int v12;
  ushort **v14;
  ushort *v15;

  v5 = a1;
  v6 = 0;
  v7 = a2;
  v8 = a3;
  v14 = a4;
  v15 = 0;
  if ( a2 != GetTrainerID(a5) )
    v6 = Function_20280e0(v5, v7);
  if ( v6 > 0 )
  {
    if ( v6 == 1 )
    {
      Function_200b498((int)v8, 0);
    }
    else if ( v6 >= 2 )
    {
      v9 = v6 - 2;
      v10 = (ushort *)Function_2023790(10, 0x59u);
      v11 = (ushort *)Function_2027fbc(v5, v9);
      Function_2023d28(v10, v11);
      Function_2027fc4(v5, v9);
      Function_200b48c(v8, 0, (int)v10);
      Function_20237bc_FreeMsg((int)v10, v12);
    }
    v15 = Function_200b29c((uint *)v8, v14, 0xD0u, 0x59u);
  }
  return v15;
}

//----- (02256EE8) --------------------------------------------------------
int __fastcall Function_2256ee8(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  ushort *v12;
  ushort *v13;
  int result;
  int v15;
  int v16;
  int v17;

  v4 = a1;
  v5 = a3;
  v15 = a2;
  v17 = *(uint *)(*(uint *)(a1 + 4) + 1240);
  v6 = *(uint *)(a1 + 624);
  v16 = a4;
  if ( *(uint *)(v6 + 840) == 30 )
    v7 = 844;
  else
    v7 = 840;
  v8 = (int *)(v6 + v7);
  v9 = *(uint *)(v6 + v7);
  v10 = *(uint *)(v6 + 28 * v9 + 4);
  if ( v10 )
    Function_20237bc_FreeMsg(v10, v9);
  v11 = *(uint *)(v6 + 28 * *v8 + 8);
  if ( v11 )
    Function_20237bc_FreeMsg(v11, *v8);
  Function_2025ef0_Dummy();
  Function_2023d28(*(ushort **)(v6 + 28 * *v8), v12);
  v13 = (ushort *)(v6 + 28 * *v8);
  v13[10] = *v5;
  v13[11] = v5[1];
  v13[12] = v5[2];
  v13[13] = v5[3];
  *(uint *)(v6 + 28 * *v8 + 12) = v15;
  *(uint *)(v6 + 28 * *v8 + 16) = GetGender(v16);
  *(uint *)(v6 + 28 * *v8 + 4) = Function_2014b34(v5, 0x59u);
  *(uint *)(v6 + 28 * (*v8)++ + 8) = Function_2256e5c(
                                         v17,
                                         v15,
                                         *(int **)(v4 + 24),
                                         *(ushort ***)(v4 + 28),
                                         *(uint *)(v4 + 16));
  result = 844;
  if ( *(uint *)(v6 + 844) == 30 )
    *(uint *)(v6 + 844) = 0;
  return result;
}

//----- (02256FC8) --------------------------------------------------------
int __fastcall Function_2256fc8(int a1, ushort *a2, int a3)
{
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  ushort *v12;

  v3 = a1;
  v12 = a2;
  v4 = a3;
  if ( !Function_2014bbc(a2) )
    return 0;
  v6 = *(uint *)(v3 + 624);
  v7 = 0;
  if ( *(uint *)(v6 + 840) > 0 )
  {
    v8 = 0;
    do
    {
      if ( v4 == *(uint *)(v6 + v8 + 12) && Function_2014c88(v12, (ushort *)(v6 + v8 + 20)) )
        break;
      v6 = *(uint *)(v3 + 624);
      ++v7;
      v8 += 28;
    }
    while ( v7 < *(uint *)(v6 + 840) );
  }
  v9 = *(uint *)(v3 + 624);
  v10 = *(uint *)(v9 + 840);
  if ( v7 != v10 && v10 )
    return 0;
  v11 = v9 + 28 * v7;
  if ( v4 != *(uint *)(v11 + 12) )
    Function_2014c88(v12, (ushort *)(v11 + 20));
  return 1;
}

//----- (02257048) --------------------------------------------------------
int __fastcall Function_2257048(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;

  v4 = a1;
  v5 = 0;
  if ( *(ushort *)(a1 + 632) == *(ushort *)(a1 + 628) - 3 )
    v5 = 1;
  Function_2256ee8(a1, a4, a3, a2);
  if ( *(ushort *)(v4 + 634) && v5 )
    *(ushort *)(v4 + 632) = *(ushort *)(*(uint *)(v4 + 624) + 840) - 3;
  return Function_2257100(v4);
}

//----- (02257098) --------------------------------------------------------
ushort *__fastcall Function_2257098(int a1)
{
  int v1;
  ushort *result;
  int v3;
  int v4;
  int *v5;
  ushort *v6;
  int v7;
  ushort *v8;
  int v9;

  v1 = a1;
  result = (ushort *)Function_20509a4(*(uint *)(a1 + 12));
  if ( !result )
  {
    v3 = 0;
    do
    {
      v4 = Function_2033f3c(v3);
      if ( v4 )
      {
        v5 = (int *)(v4 + 80);
        v6 = (ushort *)(v4 + 88);
        if ( Function_2256fc8(v1, (ushort *)(v4 + 88), *(uint *)(v4 + 80)) )
        {
          v7 = Function_2033fb0(v3);
          Function_2257048(v1, v7, v6, *v5);
        }
      }
      ++v3;
    }
    while ( v3 < 16 );
    result = (ushort *)Function_205c028(*(uint *)(v1 + 8));
    v8 = result;
    if ( result )
    {
      v9 = GetTrainerID(*(uint *)(v1 + 16));
      result = (ushort *)Function_2257048(v1, *(uint *)(v1 + 16), v8, v9);
    }
  }
  return result;
}

//----- (02257100) --------------------------------------------------------
int __fastcall Function_2257100(int result)
{
  *(uint *)(result + 644) = 1;
  return result;
}

//----- (0225710C) --------------------------------------------------------
uchar *__fastcall Function_225710c(uchar *result)
{
  result[648] = 0;
  result[650] = 8;
  result[651] = 4;
  result[649] = result[650];
  return result;
}

//----- (0225712C) --------------------------------------------------------
uchar *__fastcall Function_225712c(uchar *result)
{
  result[648] = 0;
  if ( word_21BF6DC )
  {
    result[648] = 1;
  }
  else if ( word_21BF6DE )
  {
    if ( (char)--result[649] < 0 )
    {
      result[648] = 1;
      result[649] = result[651];
    }
  }
  else
  {
    result[649] = result[650];
  }
  return result;
}

//----- (02257174) --------------------------------------------------------
int __fastcall Function_2257174(int a1)
{
  return *(uchar *)(a1 + 648);
}

//----- (0225717C) --------------------------------------------------------
int __fastcall Function_225717c(int result, int a2)
{
  *(uint *)(result + 652) = a2;
  return result;
}

//----- (02257184) --------------------------------------------------------
int __fastcall Function_2257184(int a1)
{
  return *(uint *)(a1 + 652);
}

//----- (0225718C) --------------------------------------------------------
int __fastcall Function_225718c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = a1 + 408;
  v5 = 4 * a2;
  v6 = Function_2021e74(*(uint *)(a1 + 408 + 4 * a2));
  v7 = (ushort)Function_2021e24(*(uint *)(v4 + v5));
  if ( v6 > 1 || v7 != v3 + 4 )
    Function_2021d6c(*(uint *)(v4 + v5), v3 + 4);
  result = 656;
  *(ushort *)(v2 + 2 * v3 + 656) = 1;
  return result;
}

//----- (022571D0) --------------------------------------------------------
int __fastcall Function_22571d0(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    v4 = Function_2021e74(*(uint *)(v1 + 408));
    if ( *(ushort *)(v3 + 656) == 1 )
    {
      if ( v4 >= 1 )
        Function_2021cc8(*(uint *)(v1 + 408), 0);
      result = 656;
      *(ushort *)(v3 + 656) = 0;
    }
    else
    {
      result = Function_2021d3c(*(uint *)(v1 + 408));
      if ( !result )
      {
        Function_2021cc8(*(uint *)(v1 + 408), 1);
        result = Function_2021e50(*(uint *)(v1 + 408), 2u);
      }
    }
    ++v2;
    v1 += 4;
    v3 += 2;
  }
  while ( v2 < 2 );
  return result;
}

