//----- (0225C700) --------------------------------------------------------
int __fastcall Function_225c700(short *a1, uint *a2)
{
  int result;

  *a2 = *a1 << 12;
  result = a1[1] << 12;
  a2[2] = result;
  a2[1] = 0;
  return result;
}

//----- (0225C714) --------------------------------------------------------
int __fastcall Function_225c714(uint *a1, ushort *a2)
{
  int result;

  *a2 = *a1 / 4096;
  result = a1[2] / 4096;
  a2[1] = result;
  return result;
}

//----- (0225C730) --------------------------------------------------------
uint __fastcall Function_225c730(int *a1, int a2, uint a3, int a4)
{
  int *v4;
  uint v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uchar *v11;
  int v12;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = a4;
  v6 = Function_200723c(a2, a3, 0, a4, 1);
  v7 = Function_20b3c1c_GetTexOffsets((int)v6);
  Function_201cbcc(v7);
  Function_20ae9b8(v7, &v15, &v14);
  v8 = Function_20aea70(v7);
  v9 = Call_Function_2023084_GetTexDataOffset((int)v6);
  v10 = v9;
  v11 = (uchar *)malloc(v5, v9);
  *v4 = (int)v11;
  memcpy(v11, (char *)v6, v10);
  v12 = Function_20b3c1c_GetTexOffsets(*v4);
  Function_20ae8ec(v12, v15, v14);
  Function_20aea18(v12, v8);
  return free((int)v6);
}

//----- (0225C7A0) --------------------------------------------------------
int __fastcall Function_225c7a0(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13[9];
  int v14[9];
  int v15;
  char v16;
  char v17;
  int v18;
  char v19;
  char v20;
  int v21;

  v21 = a4;
  v4 = a2;
  v5 = a1;
  Function_2017358(a2, &v18, &v19, &v20);
  Function_2017374(v4, &v15, &v16, &v17);
  v6 = Function_2017394((int)v4, 0);
  v7 = Function_2017394((int)v4, 1);
  v8 = Function_2017394((int)v4, 2);
  MTX_Identity33_(v14);
  MTX_RotX33_(v13, SLOWORD(Unknown_20f983c[v6 >> 4]), *((short *)Unknown_20f983c + 2 * (v6 >> 4) + 1));
  MTX_Concat33(v13, v14, v14, v9);
  MTX_RotZ33_(v13, SLOWORD(Unknown_20f983c[v8 >> 4]), *((short *)Unknown_20f983c + 2 * (v8 >> 4) + 1));
  MTX_Concat33(v13, v14, v14, v10);
  MTX_RotY33_(v13, SLOWORD(Unknown_20f983c[v7 >> 4]), *((short *)Unknown_20f983c + 2 * (v7 >> 4) + 1));
  MTX_Concat33(v13, v14, v14, v11);
  return Function_201ced8(*(uint *)(v5 + 8), &v18, v14, &v15);
}

//----- (0225C858) --------------------------------------------------------
uint *__fastcall Function_225c858(uint a1)
{
  int v1;
  uint *v2;
  uint *v3;

  v1 = a1;
  v2 = (uint *)malloc(a1, 4);
  *v2 = ((int (__fastcall *)(int, int, int))dword_222BCE8[0])(35, 42, v1);
  v3 = Function_2006fe8_LoadFromNARC_UncompressLZ8(174, 0, 0, v1, 1);
  ((void (__fastcall *)(uint, uint *))dword_222BD50[0])(*v2, v3);
  free((int)v3);
  return v2;
}

//----- (0225C894) --------------------------------------------------------
uint __fastcall Function_225c894(uint *a1)
{
  int v1;

  v1 = (int)a1;
  ((void (__fastcall *)(uint))dword_222BD30[0])(*a1);
  return free(v1);
}

//----- (0225C8A8) --------------------------------------------------------
int Function_225c8a8()
{
  return 35;
}

//----- (0225C8AC) --------------------------------------------------------
void __fastcall Function_225c8ac(int *a1)
{
  int v1;

  v1 = *a1;
  JUMPOUT(&byte_222BDAC);
}

//----- (0225C8B8) --------------------------------------------------------
uint __fastcall Function_225c8b8(uint *a1)
{
  return (uint)((int (__fastcall *)(uint))dword_222BDE4[0])(*a1) >> 15;
}

//----- (0225C8C4) --------------------------------------------------------
int __fastcall Function_225c8c4(uint *a1)
{
  return ((int (__fastcall *)(uint))dword_222BDE4[0])(*a1) & 0x7FFF;
}

//----- (0225C8D8) --------------------------------------------------------
int __fastcall __spoils<R0,R2,R3,R12> Function_225c8d8(uint *a1, int a2, ushort *a3, ushort *a4, uint a5)
{
  uint v5;
  int v6;
  uint *v8;
  int v9;
  ushort *v10;
  ushort *v11;
  int v12;

  v5 = 0;
  v8 = a1;
  v10 = a3;
  v11 = a4;
  v12 = 0;
  do
  {
    v6 = 0;
    do
    {
      if ( Function_225c8b8(v8) == v9 )
      {
        if ( v5 >= a5 )
        {
          *v10 = v6;
          *v11 = v12;
          return 1;
        }
        ++v5;
      }
      ++v6;
    }
    while ( v6 < 35 );
    ++v12;
  }
  while ( v12 < 42 );
  return 0;
}

//----- (0225C930) --------------------------------------------------------
int __fastcall Function_225c930(int a1)
{
  char *v1;
  uint v2;

  v1 = &byte_226D4DC;
  v2 = 0;
  do
  {
    if ( a1 == (uchar)*v1 )
      return 1;
    ++v2;
    ++v1;
  }
  while ( v2 < 0x20 );
  return 0;
}

//----- (0225C950) --------------------------------------------------------
int __fastcall Function_225c950(int a1)
{
  char *v1;
  uint v2;

  v1 = &byte_226D4CC;
  v2 = 0;
  do
  {
    if ( a1 == (uchar)*v1 )
      return 1;
    ++v2;
    ++v1;
  }
  while ( v2 < 3 );
  return 0;
}

//----- (0225C970) --------------------------------------------------------
int __fastcall Function_225c970(int a1)
{
  const char *v1;
  uint v2;

  v1 = "$%&'()+";
  v2 = 0;
  do
  {
    if ( a1 == *(uchar *)v1 )
      return 1;
    ++v2;
    ++v1;
  }
  while ( v2 < 7 );
  return 0;
}

//----- (0225C990) --------------------------------------------------------
int __fastcall Function_225c990(int a1)
{
  char *v1;
  uint v2;

  v1 = &byte_226D4D0;
  v2 = 0;
  do
  {
    if ( a1 == (uchar)*v1 )
      return 1;
    ++v2;
    ++v1;
  }
  while ( v2 < 4 );
  return 0;
}

//----- (0225C9B0) --------------------------------------------------------
int __fastcall Function_225c9b0(int a1)
{
  return *(uint *)a1;
}

//----- (0225C9B4) --------------------------------------------------------
int __fastcall Function_225c9b4(int a1, int a2, int a3, uint a4, int a5)
{
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int *v10;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = malloc(a4, 40);
  Call_FillMemWithValue((int *)v9, 0, 0x28u);
  *(uint *)v9 = ((int (__fastcall *)(int, uint))dword_222BE18[0])(v5, v8);
  *(uint *)(v9 + 4) = ((int (__fastcall *)(int, int, uint, int))dword_22343A8[0])(v5, v6, v8, a5);
  *(uint *)(v9 + 16) = ((int (__fastcall *)(int, uint))dword_222D848[0])(32, v8);
  *(ushort *)(v9 + 12) = v5;
  v10 = (int *)malloc(v8, 40 * v5);
  *(uint *)(v9 + 8) = v10;
  Call_FillMemWithValue(v10, 0, 40 * v5);
  *(uint *)(v9 + 20) = v7;
  *(ushort *)(v9 + 14) = v6;
  Function_225d0d8(v9);
  return v9;
}

//----- (0225CA20) --------------------------------------------------------
uint __fastcall Function_225ca20(uint *a1)
{
  uint *v1;

  v1 = a1;
  free(a1[2]);
  ((void (__fastcall *)(uint))dword_222D880[0])(v1[4]);
  ((void (__fastcall *)(uint))dword_2234548[0])(v1[1]);
  ((void (__fastcall *)(uint))dword_222BE58[0])(*v1);
  return free((int)v1);
}

//----- (0225CA44) --------------------------------------------------------
int __fastcall Function_225ca44(uint *a1)
{
  uint *v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_222BE84[0])(*a1);
  return Function_225d954(v1 + 6, v1[1]);
}

//----- (0225CA5C) --------------------------------------------------------
int __fastcall Function_225ca5c(int a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  char v6;
  char v7;

  v1 = (uint *)a1;
  v2 = 0;
  if ( (int)*(ushort *)(a1 + 12) > 0 )
  {
    v3 = 0;
    do
    {
      if ( !Function_225d2fc(v1[2] + v3) )
        (*(void (**)(void))(v1[2] + v3 + 36))();
      ++v2;
      v3 += 40;
    }
    while ( v2 < *((ushort *)v1 + 6) );
  }
  v4 = Function_225c9b0(v1[5]);
  while ( ((int (__fastcall *)(uint, char *))dword_222D8D0[0])(v1[4], &v7) == 1 )
  {
    if ( ((int (__fastcall *)(int, uint, char *, char *))dword_222CA88[0])(v4, *v1, &v7, &v6) == 1 )
      ((void (__fastcall *)(uint, char *))dword_222BE70[0])(*v1, &v6);
  }
  return ((int (__fastcall *)(uint))dword_2234590[0])(v1[1]);
}

//----- (0225CAD4) --------------------------------------------------------
void __fastcall Function_225cad4(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 4);
  JUMPOUT(&byte_22345C4);
}

//----- (0225CAE0) --------------------------------------------------------
void __fastcall Function_225cae0(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 4);
  JUMPOUT(&byte_2234604);
}

//----- (0225CAEC) --------------------------------------------------------
void __fastcall Function_225caec(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *(uint *)(a1 + 4);
  v4 = dword_226D518[v2];
  JUMPOUT(&Function_225d920);
}

//----- (0225CB08) --------------------------------------------------------
int __fastcall Function_225cb08(int a1, int a2)
{
  return Function_225d93c(a1 + 24, dword_226D518[a2]);
}

//----- (0225CB1C) --------------------------------------------------------
void __fastcall Function_225cb1c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 16);
  JUMPOUT(&byte_222D894);
}

//----- (0225CB28) --------------------------------------------------------
int __fastcall Function_225cb28(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  ushort v7[2];
  ushort v8[2];
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a2;
  if ( !Function_225c8d8(*(uint **)(a1 + 20), 3, v8, v7, 0) )
    ErrorHandler();
  return Function_225cb5c(v4, v5, v8[0], v7[0]);
}

//----- (0225CB5C) --------------------------------------------------------
uint *__fastcall Function_225cb5c(int a1, short a2, short a3, int a4)
{
  short v4;
  int v5;
  short v6;
  short v7;
  uint *v8;
  short v10;
  short v11;
  short v12;
  short v13;
  short v14;
  short v15;
  int v16;

  v16 = a4;
  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = (uint *)Function_225d2c0();
  v10 = 16 * v4;
  v11 = 16 * v7;
  v12 = v6;
  v13 = 0;
  v14 = 0;
  if ( *(ushort *)(v5 + 14) )
    v15 = 97;
  else
    v15 = 0;
  *v8 = ((int (__fastcall *)(uint, short *))dword_222BEC0[0])(*(uint *)v5, &v10);
  v8[1] = ((int (__fastcall *)(uint, uint))dword_223461C[0])(*(uint *)(v5 + 4), *v8);
  *(uint *)(v5 + 32) = v8;
  Function_225cdec(v5, v8, 0);
  return v8;
}

//----- (0225CBB8) --------------------------------------------------------
uint *__fastcall Function_225cbb8(int a1, int a2, short a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  short v8;
  uint *v9;
  char v10;
  short v11;
  short v12;
  short v13;
  short v14;
  short v15;
  short v16;
  short v17;

  v3 = a1;
  v4 = a2;
  v8 = a3;
  v5 = 0;
  v9 = (uint *)Function_225d2c0();
  v6 = 0;
  do
  {
    if ( !Function_225c8d8(*(uint **)(v3 + 20), v4 + 4, &v11, &v10, v6) )
      return 0;
    if ( Function_225ccac(v3, v4 + 4) )
    {
      if ( !Function_225cedc() )
        v5 = 1;
    }
    else
    {
      v5 = 1;
    }
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( !v5 );
  v12 = 16 * v11;
  v13 = 16 * *(ushort *)&v10;
  v14 = v4;
  v15 = 0;
  v16 = 1;
  v17 = v8;
  *v9 = ((int (__fastcall *)(uint, short *))dword_222BEC0[0])(*(uint *)v3, &v12);
  v9[1] = ((int (__fastcall *)(uint, uint))dword_223461C[0])(*(uint *)(v3 + 4), *v9);
  Function_225cdec(v3, v9, 0);
  return v9;
}

//----- (0225CC54) --------------------------------------------------------
int *__fastcall Function_225cc54(int *a1)
{
  int *v1;

  v1 = a1;
  ((void (__fastcall *)(int))dword_2234798[0])(a1[1]);
  ((void (__fastcall *)(int))dword_222BF08[0])(*v1);
  return Call_FillMemWithValue(v1, 0, 0x28u);
}

//----- (0225CC70) --------------------------------------------------------
int __fastcall Function_225cc70(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  if ( (int)*(ushort *)(a1 + 12) <= 0 )
    return 0;
  v5 = 0;
  while ( !*(uint *)(*(uint *)(v2 + 8) + v5) || ((int (*)(void))dword_222BF90[0])() != v3 )
  {
    ++v4;
    v5 += 40;
    if ( v4 >= *(ushort *)(v2 + 12) )
      return 0;
  }
  return *(uint *)(v2 + 8) + 40 * v4;
}

//----- (0225CCAC) --------------------------------------------------------
int __fastcall Function_225ccac(int a1)
{
  return *(uint *)(a1 + 32);
}

//----- (0225CCB0) --------------------------------------------------------
int __fastcall Function_225ccb0(int a1)
{
  return *(uint *)(a1 + 36);
}

//----- (0225CCB4) --------------------------------------------------------
int Function_225ccb4()
{
  return Function_225ccb6();
}

//----- (0225CCB6) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0225CD04) --------------------------------------------------------
int Function_225cd04()
{
  return Function_225cd06();
}

//----- (0225CD06) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (0225CD34) --------------------------------------------------------
int __fastcall Function_225cd34(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !*a1 )
    ErrorHandler();
  return ((int (__fastcall *)(uint))dword_222C0FC[0])(*v1);
}

//----- (0225CD60) --------------------------------------------------------
int __fastcall Function_225cd60(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !*a1 )
    ErrorHandler();
  return ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v2, v3);
}

//----- (0225CD7C) --------------------------------------------------------
int __fastcall Function_225cd7c(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  if ( ((int (__fastcall *)(uint, int))dword_222BF90[0])(*a2, 5) )
    ErrorHandler();
  v8 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v4, 4);
  return Function_225d17c(v5, v6, v7, v8);
}

//----- (0225CDAC) --------------------------------------------------------
int __fastcall Function_225cdac(uint *a1, uint *a2, short a3, char a4)
{
  uint *v4;
  uint *v5;
  short v6;
  char v7;
  int v9;
  short v10;
  char v11;
  char v12;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v9 = ((int (__fastcall *)(uint))dword_222C0E4[0])(*a2);
  v10 = v6;
  v11 = v7;
  v12 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v4, 4);
  return ((int (__fastcall *)(uint, int *))dword_222BE70[0])(*v5, &v9);
}

//----- (0225CDEC) --------------------------------------------------------
int __fastcall Function_225cdec(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  void (__fastcall *v6)(int, int);
  uchar *v7;
  int v8;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 >= 10 )
    ErrorHandler();
  v6 = (void (__fastcall *)(int, int))dword_226D530[*(uchar *)(v5 + 11)];
  if ( v6 )
    v6(v5, v4);
  *(ushort *)(v5 + 8) = 0;
  *(uchar *)(v5 + 10) = 0;
  *(uchar *)(v5 + 11) = v3;
  v7 = (uchar *)(v5 + 12);
  v8 = 24;
  do
  {
    *v7++ = 0;
    --v8;
  }
  while ( v8 );
  result = (int)*(&off_226D558 + v3);
  *(uint *)(v5 + 36) = result;
  return result;
}

//----- (0225CE38) --------------------------------------------------------
int __fastcall Function_225ce38(int a1)
{
  return *(uchar *)(a1 + 10);
}

//----- (0225CE3C) --------------------------------------------------------
int __fastcall Function_225ce3c(int a1)
{
  return *(uchar *)(a1 + 11);
}

//----- (0225CE40) --------------------------------------------------------
int __fastcall Function_225ce40(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*a2, 6);
  if ( !((int (__fastcall *)(uint, uint, int))dword_222C1C4[0])(*v2, *v3, v4) )
    return 0;
  v6 = ((int (*)(void))dword_222BF90[0])();
  return Function_225cc70((int)v3, v6);
}

//----- (0225CE70) --------------------------------------------------------
void __fastcall Function_225ce70(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 4);
  JUMPOUT(&byte_22347CC);
}

//----- (0225CE7C) --------------------------------------------------------
int __fastcall Function_225ce7c(uint *a1, short a2, short a3, int a4)
{
  uint *v4;
  int v5;
  short *v6;
  int v7;
  int result;
  int v9;
  uint *v10;
  short v11;
  short v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v11 = 16 * a2;
  v12 = 16 * a3;
  v5 = *a1;
  v6 = &v11 - 2;
  *v6 = 16 * a2;
  v6[1] = v12;
  v7 = ((int (__fastcall *)(int, uint))dword_222C2AC[0])(v5, *((uint *)&v11 - 1));
  if ( !v7 )
    return 0;
  v9 = 0;
  if ( (int)*((ushort *)v4 + 6) <= 0 )
  {
LABEL_8:
    ErrorHandler();
    result = 0;
  }
  else
  {
    v10 = (uint *)v4[2];
    while ( *v10 != v7 )
    {
      ++v9;
      v10 += 10;
      if ( v9 >= *((ushort *)v4 + 6) )
        goto LABEL_8;
    }
    result = v4[2] + 40 * v9;
  }
  return result;
}

//----- (0225CEDC) --------------------------------------------------------
int __fastcall Function_225cedc(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v8 = ((int (__fastcall *)(uint))dword_222C0E4[0])(*a1);
  v10 = v8;
  v7 = ((int (__fastcall *)(uint))dword_222C0F0[0])(*v3);
  v9 = v7;
  if ( (short)v10 == 16 * v4 && SHIWORD(v10) == 16 * v5 )
    return 1;
  if ( (short)v9 != 16 * v4 || SHIWORD(v9) != 16 * v5 )
    return 0;
  return 1;
}

//----- (0225CF4C) --------------------------------------------------------
int __fastcall Function_225cf4c(int *a1, int *a2, uint *a3, ushort *a4)
{
  int *v4;
  int v5;
  char *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  ushort *v11;
  uint *v13;
  ushort *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  short v23;
  short v24;

  v4 = a1;
  v5 = *a2;
  v13 = a3;
  v14 = a4;
  v21 = ((int (__fastcall *)(int))dword_222C0E4[0])(v5);
  v6 = byte_226D504;
  v23 = v21;
  v7 = (int *)(&v13 - 1);
  v24 = HIWORD(v21);
  v17 = 0;
  v18 = (ushort)v21;
  v19 = HIWORD(v21);
  do
  {
    *(ushort *)v7 = v18;
    *((ushort *)&v13 - 1) = v19;
    v20 = ((int (__fastcall *)(int, uint))dword_222C078[0])(*v7, (uchar)*v6);
    v22 = v20;
    v16 = SHIWORD(v20) / 16;
    v15 = (short)v20 / 16;
    Function_225c8ac((int *)v4[5]);
    if ( v8 != 1 )
    {
      v9 = Function_225c8c4((uint *)v4[5]);
      if ( !v9 || v9 == 42 )
      {
        v10 = *v4;
        *(ushort *)v7 = v22;
        *((ushort *)&v13 - 1) = HIWORD(v22);
        if ( !((int (__fastcall *)(int, int))dword_222C2AC[0])(v10, *v7) )
        {
          *v13 = (uchar)byte_226D504[v17];
          v11 = v14;
          *v14 = v22;
          v11[1] = HIWORD(v22);
          return 1;
        }
      }
    }
    ++v6;
    ++v17;
  }
  while ( v17 < 4 );
  return 0;
}

//----- (0225D054) --------------------------------------------------------
void __fastcall Function_225d054(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 4);
  JUMPOUT(&byte_223481C);
}

//----- (0225D06C) --------------------------------------------------------
int __fastcall Function_225d06c(int a1, int a2)
{
  int v2;
  int result;

  v2 = *(uint *)(a1 + 4);
  if ( a2 )
    result = ((int (__fastcall *)(int, int))dword_2234850[0])(v2, 1);
  else
    result = ((int (__fastcall *)(int))dword_223487C[0])(v2);
  return result;
}

//----- (0225D084) --------------------------------------------------------
int __fastcall Function_225d084(int a1, int a2)
{
  int v2;
  int result;

  v2 = *(uint *)(a1 + 4);
  if ( a2 )
    result = ((int (__fastcall *)(int, uint))dword_2234850[0])(v2, 0);
  else
    result = ((int (__fastcall *)(int))dword_223487C[0])(v2);
  return result;
}

//----- (0225D09C) --------------------------------------------------------
int __fastcall Function_225d09c(int a1, int a2)
{
  int v2;
  int result;

  v2 = *(uint *)(a1 + 4);
  if ( a2 )
    result = ((int (__fastcall *)(int, int))dword_2234850[0])(v2, 2);
  else
    result = ((int (__fastcall *)(int))dword_223487C[0])(v2);
  return result;
}

//----- (0225D0D8) --------------------------------------------------------
uint __fastcall Function_225d0d8(int a1)
{
  int v1;
  char *v2;
  uint *v3;
  uint result;
  int i;
  uint v6;
  char v7;
  short v8;
  short v9;
  short v10;
  short v11;
  short v12;
  short v13;
  short v14;

  v1 = a1;
  v2 = &byte_226D508;
  v6 = 0;
  do
  {
    for ( i = 0; Function_225c8d8(*(uint **)(v1 + 20), (uchar)*v2, &v8, &v7, i) == 1; i = (i + 1) & 0xFFFF )
    {
      v3 = (uint *)Function_225d2c0(v1);
      v9 = 16 * v8;
      v10 = 16 * *(ushort *)&v7;
      v11 = (uchar)v2[3];
      v12 = 0;
      v13 = (uchar)v2[1];
      v14 = (uchar)v2[2];
      *v3 = ((int (__fastcall *)(uint, short *))dword_222BEC0[0])(*(uint *)v1, &v9);
      v3[1] = ((int (__fastcall *)(uint))dword_223461C[0])(*(uint *)(v1 + 4));
      Function_225cdec(v1, (int)v3, 0);
      if ( *v2 == 97 )
        *(uint *)(v1 + 36) = v3;
    }
    v2 += 4;
    result = v6 + 1;
    v6 = result;
  }
  while ( result < 4 );
  return result;
}

//----- (0225D17C) --------------------------------------------------------
void __fastcall Function_225d17c(int a1)
{
  Function_225cb1c(a1);
}

//----- (0225D194) --------------------------------------------------------
int __fastcall Function_225d194(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  v4 = Function_201d35c();
  u32_div_f(v4, v2);
  return *(uchar *)(v3 + v5);
}

//----- (0225D1A8) --------------------------------------------------------
BOOL __fastcall Function_225d1a8(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = ((int (__fastcall *)(uint))dword_222C0E4[0])(*a2);
  v12 = v7;
  v8 = &v11 - 1;
  v14 = v7;
  *(ushort *)v8 = v7;
  *((ushort *)v8 + 1) = HIWORD(v14);
  v9 = ((int (__fastcall *)(uint, int))dword_222C078[0])(*(&v11 - 1), v5);
  v11 = v9;
  v13 = v9;
  return Function_225c8b8(*(uint **)(v4 + 20)) == v6;
}

//----- (0225D220) --------------------------------------------------------
uint *__fastcall Function_225d220(uint *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a2;
  result[2] = a3 - a2;
  result[3] = a4;
  return result;
}

//----- (0225D22C) --------------------------------------------------------
BOOL __fastcall Function_225d22c(uint *a1, uint a2)
{
  uint *v2;
  uint v3;
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

  v2 = a1;
  v3 = a2;
  v4 = a1[2];
  if ( a2 )
  {
    v5 = ffltu(a2 << 12);
    v6 = fadd(0x3F000000u, v5);
  }
  else
  {
    v7 = ffltu(0);
    v6 = fsub(v7, 1056964608);
  }
  v8 = ffix(v6);
  v9 = (ll_mul(v4, v8) + 2048) >> 12;
  v10 = v2[3];
  if ( v10 )
  {
    v11 = ffltu(v10 << 12);
    v12 = fadd(0x3F000000u, v11);
  }
  else
  {
    v13 = ffltu(0);
    v12 = fsub(v13, 1056964608);
  }
  v14 = ffix(v12);
  *v2 = FX_Div(v9, v14) + v2[1];
  return v3 >= v2[3];
}

//----- (0225D2BC) --------------------------------------------------------
int __fastcall Function_225d2bc(int a1)
{
  return *(uint *)a1;
}

//----- (0225D2C0) --------------------------------------------------------
int __fastcall Function_225d2c0(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 0;
  if ( (int)*(ushort *)(a1 + 12) <= 0 )
  {
LABEL_6:
    ErrorHandler();
    result = *(uint *)(v1 + 8) + 40 * v2;
  }
  else
  {
    v3 = 0;
    while ( !Function_225d2fc(*(uint *)(v1 + 8) + v3) )
    {
      ++v2;
      v3 += 40;
      if ( v2 >= *(ushort *)(v1 + 12) )
        goto LABEL_6;
    }
    result = *(uint *)(v1 + 8) + 40 * v2;
  }
  return result;
}

//----- (0225D2FC) --------------------------------------------------------
BOOL __fastcall Function_225d2fc(uint *a1)
{
  return *a1 == 0;
}

//----- (0225D30C) --------------------------------------------------------
void Function_225d30c()
{
  ;
}

//----- (0225D310) --------------------------------------------------------
void __fastcall Function_225d310(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  ((void (__fastcall *)(uint, int))dword_222BF90[0])(*a1, 6);
  ((void (__fastcall *)(uint, int))dword_222BF90[0])(*v2, 4);
  if ( !((int (__fastcall *)(uint, int))dword_222BF90[0])(*v2, 5) )
  {
    if ( dword_21BF6C0 & 0x40 )
    {
      Function_225d17c(v3);
    }
    else if ( dword_21BF6C0 & 0x80 )
    {
      Function_225d17c(v3);
    }
    else if ( dword_21BF6C0 & 0x20 )
    {
      Function_225d17c(v3);
    }
    else if ( dword_21BF6C0 & 0x10 )
    {
      Function_225d17c(v3);
    }
  }
}

//----- (0225D3D8) --------------------------------------------------------
int __fastcall Function_225d3d8(int a1, int a2)
{
  uint *v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = (uint *)a1;
  result = *(ushort *)(a1 + 8);
  v4 = a2;
  switch ( (uchar)result )
  {
    case 0:
      *((ushort *)v2 + 6) = Function_225d194((int)&dword_226D500, 4);
      result = *((ushort *)v2 + 4) + 1;
      *((ushort *)v2 + 4) = result;
      break;
    case 1:
      result = (short)--*((ushort *)v2 + 6);
      if ( !*((ushort *)v2 + 6) )
      {
        result = *((ushort *)v2 + 4) + 1;
        *((ushort *)v2 + 4) = result;
      }
      break;
    case 2:
      v5 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v2, 4);
      v6 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v2, 6);
      *((ushort *)v2 + 7) = Function_225d194((int)&dword_226D4FC, 4);
      if ( Function_225d1a8(v4, v2, *((short *)v2 + 7), v5 + 4) == 1 )
      {
        v7 = *((short *)v2 + 7);
        if ( v6 == v7 )
        {
          Function_225cd7c(v4, v2, 2, v7);
          result = 4;
          *((ushort *)v2 + 4) = 4;
        }
        else
        {
          Function_225cd7c(v4, v2, 1, v7);
          result = 3;
          *((ushort *)v2 + 4) = 3;
        }
      }
      else
      {
        Function_225cd7c(v4, v2, 1, *((short *)v2 + 7));
        result = 4;
        *((ushort *)v2 + 4) = 4;
      }
      break;
    case 3:
      result = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v2, 5);
      if ( !result )
      {
        Function_225cd7c(v4, v2, 2, *((short *)v2 + 7));
        result = *((ushort *)v2 + 4) + 1;
        *((ushort *)v2 + 4) = result;
      }
      break;
    case 4:
      result = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v2, 5);
      if ( !result )
      {
        result = 0;
        *((ushort *)v2 + 4) = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0225D4CC) --------------------------------------------------------
int __fastcall Function_225d4cc(int a1)
{
  int v1;
  int result;
  BOOL v3;
  int v4;
  int v5;

  v1 = a1;
  result = *(ushort *)(a1 + 8);
  switch ( (uchar)result )
  {
    case 0:
      ((void (__fastcall *)(uint, uint))byte_22347B0)(*(uint *)(v1 + 4), 0);
      ((void (__fastcall *)(uint, uint))dword_2234850[0])(*(uint *)(v1 + 4), 0);
      Function_225d220((uint *)(v1 + 12), 0, 2048000, 24);
      *(uint *)(v1 + 28) = 32;
      ++*(ushort *)(v1 + 8);
      goto LABEL_3;
    case 1:
LABEL_3:
      result = *(uint *)(v1 + 28) - 1;
      *(uint *)(v1 + 28) = result;
      if ( !result )
      {
        ++*(ushort *)(v1 + 8);
        *(uint *)(v1 + 28) = 0;
        result = Function_2005748(0x64Fu);
      }
      break;
    case 2:
      v3 = Function_225d22c((uint *)(v1 + 12), *(uint *)(v1 + 28));
      ++*(uint *)(v1 + 28);
      ((void (__fastcall *)(uint, int *))byte_223481C)(*(uint *)(v1 + 4), &v4);
      v5 = Function_225d2bc(v1 + 12);
      result = ((int (__fastcall *)(uint, int *))byte_22347F8)(*(uint *)(v1 + 4), &v4);
      if ( v3 == 1 )
      {
        ++*(ushort *)(v1 + 8);
        ((void (__fastcall *)(uint))dword_223487C[0])(*(uint *)(v1 + 4));
        result = 1;
        *(uchar *)(v1 + 10) = 1;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0225D57C) --------------------------------------------------------
int __fastcall Function_225d57c(int a1)
{
  int v1;
  int result;
  BOOL v3;
  char v4;
  int v5;

  v1 = a1;
  result = *(ushort *)(a1 + 8);
  switch ( (uchar)result )
  {
    case 0:
      ((void (__fastcall *)(uint, uint))byte_22347B0)(*(uint *)(v1 + 4), 0);
      ((void (__fastcall *)(uint, uint))dword_2234850[0])(*(uint *)(v1 + 4), 0);
      Function_225d220((uint *)(v1 + 12), 2048000, 0, 24);
      *(uint *)(v1 + 28) = 0;
      ++*(ushort *)(v1 + 8);
      Function_2005748(0x64Fu);
      goto LABEL_3;
    case 1:
LABEL_3:
      v3 = Function_225d22c((uint *)(v1 + 12), *(uint *)(v1 + 28));
      ++*(uint *)(v1 + 28);
      ((void (__fastcall *)(uint, char *))byte_223481C)(*(uint *)(v1 + 4), &v4);
      v5 = Function_225d2bc(v1 + 12);
      result = ((int (__fastcall *)(uint, char *))byte_22347F8)(*(uint *)(v1 + 4), &v4);
      if ( v3 == 1 )
      {
        *(uint *)(v1 + 28) = 32;
        result = *(ushort *)(v1 + 8) + 1;
        *(ushort *)(v1 + 8) = result;
      }
      break;
    case 2:
      result = *(uint *)(v1 + 28) - 1;
      *(uint *)(v1 + 28) = result;
      if ( !result )
      {
        ++*(ushort *)(v1 + 8);
        ((void (__fastcall *)(uint))dword_223487C[0])(*(uint *)(v1 + 4));
        ((void (__fastcall *)(uint, int))byte_22347B0)(*(uint *)(v1 + 4), 1);
        result = 1;
        *(uchar *)(v1 + 10) = 1;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0225D634) --------------------------------------------------------
int __fastcall Function_225d634(short a1, short a2)
{
  return Function_225d664(a1, a2, 2, (uint)Function_225d664);
}

//----- (0225D640) --------------------------------------------------------
int __fastcall Function_225d640(short a1, short a2)
{
  return Function_225d664(a1, a2, 3, (uint)Function_225d664);
}

//----- (0225D64C) --------------------------------------------------------
int __fastcall Function_225d64c(short a1, short a2)
{
  return Function_225d664(a1, a2, 0, (uint)Function_225d664);
}

//----- (0225D658) --------------------------------------------------------
int __fastcall Function_225d658(short a1, short a2)
{
  return Function_225d664(a1, a2, 1, (uint)Function_225d664);
}

//----- (0225D664) --------------------------------------------------------
uint __fastcall Function_225d664(int a1, int a2, int a3)
{
  int v3;
  uint result;
  int v5;
  BOOL v6;
  char v7;
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

  v3 = a1;
  result = *(ushort *)(a1 + 8);
  v5 = a3;
  if ( result <= 3 )
    JUMPOUT(__CS__, *((short *)&off_225D680 + result) + 36034178);
  switch ( (uchar)result )
  {
    case 0:
      ((void (__fastcall *)(uint, uint))byte_22347B0)(*(uint *)(v3 + 4), 0);
      ((void (__fastcall *)(uint, uint))dword_2234850[0])(*(uint *)(v3 + 4), 0);
      ((void (__fastcall *)(uint, int))dword_223487C[3])(*(uint *)(v3 + 4), 2);
      Function_225d220((uint *)(v3 + 12), 0, 0x10000, 4);
      switch ( (uchar)((int (__fastcall *)(uint, int *))byte_223481C)(*(uint *)(v3 + 4), &v17) )
      {
        case 0u:
        case 1u:
          *(uint *)(v3 + 32) = v18;
          break;
        case 2u:
        case 3u:
          *(uint *)(v3 + 32) = v17;
          break;
        default:
          break;
      }
      *(uint *)(v3 + 28) = 0;
      ++*(ushort *)(v3 + 8);
      goto LABEL_8;
    case 1:
LABEL_8:
      v6 = Function_225d22c((uint *)(v3 + 12), *(uint *)(v3 + 28));
      ++*(uint *)(v3 + 28);
      switch ( (uchar)((int (__fastcall *)(uint, int *))byte_223481C)(*(uint *)(v3 + 4), &v15) )
      {
        case 0u:
          v16 = *(uint *)(v3 + 32) - Function_225d2bc(v3 + 12);
          break;
        case 1u:
          v16 = *(uint *)(v3 + 32) + Function_225d2bc(v3 + 12);
          break;
        case 2u:
          v15 = *(uint *)(v3 + 32) - Function_225d2bc(v3 + 12);
          break;
        case 3u:
          v15 = *(uint *)(v3 + 32) + Function_225d2bc(v3 + 12);
          break;
        default:
          break;
      }
      result = ((int (__fastcall *)(uint, int *))byte_22347F8)(*(uint *)(v3 + 4), &v15);
      if ( v6 == 1 )
      {
        v7 = ((int (__fastcall *)(int))dword_222C0AC[0])(v5);
        *(uint *)(v3 + 28) = 4;
        switch ( v7 )
        {
          case 0:
            goto LABEL_16;
          case 2:
            goto LABEL_17;
          case 3:
            *(uint *)(v3 + 28) += 2;
LABEL_16:
            *(uint *)(v3 + 28) += 2;
LABEL_17:
            *(uint *)(v3 + 28) += 2;
            break;
          default:
            break;
        }
        result = *(ushort *)(v3 + 8) + 1;
        *(ushort *)(v3 + 8) = result;
      }
      break;
    case 2:
      result = *(uint *)(v3 + 28) - 1;
      *(uint *)(v3 + 28) = result;
      if ( !result )
      {
        ++*(ushort *)(v3 + 8);
        v8 = ((int (__fastcall *)(uint))dword_222C0E4[0])(*(uint *)v3);
        v12 = v8;
        v14 = v8;
        v9 = ((int (__fastcall *)(int, int))dword_222C078[0])(v8, v5);
        v11 = v9;
        v13 = v9;
        ((void (__fastcall *)(int))dword_222C0AC[0])(v5);
        v10 = v13;
        Function_225cd04();
        ((void (__fastcall *)(uint))dword_223487C[0])(*(uint *)(v3 + 4));
        ((void (__fastcall *)(uint, int))byte_22347B0)(*(uint *)(v3 + 4), 1);
        result = 1;
        *(uchar *)(v3 + 10) = 1;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0225D81C) --------------------------------------------------------
int __fastcall Function_225d81c(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  short v9;
  ushort v10;
  ushort v11;
  int v12;
  long long v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  result = *(ushort *)(a1 + 8);
  if ( result )
  {
    if ( result == 1 )
    {
      v6 = *(uint *)(v4 + 12) - 1;
      *(uint *)(v4 + 12) = v6;
      if ( v6 < 0 )
        *(uint *)(v4 + 12) = 28;
      v7 = *(uint *)(v4 + 20);
      v15 = *(uint *)(v4 + 16);
      v16 = v7;
      v17 = *(uint *)(v4 + 24);
      v8 = (short)(*(ushort *)(v4 + 12) - 16);
      if ( v8 > 0 )
      {
        s32_div_f(v8, 6);
        v10 = s32_div_f(180 * v9, 6);
        v11 = v10;
        v12 = Function_201d15c(v10);
        v13 = ll_mul(v12, -8192LL);
        v17 += (v13 + 2048) >> 12;
        v14 = Function_201d15c(v11);
        v16 += (ll_mul(v14, 40960LL) + 2048) >> 12;
      }
      ((void (__fastcall *)(uint, int *))byte_22347F8)(*(uint *)(v4 + 4), &v15);
      result = ((int (__fastcall *)(uint, int))byte_2234834)(*(uint *)(v4 + 4), 1);
    }
  }
  else
  {
    ((void (__fastcall *)(uint, uint))byte_22347B0)(*(uint *)(v4 + 4), 0);
    ((void (__fastcall *)(uint, int))byte_223481C)(*(uint *)(v4 + 4), v4 + 16);
    *(uint *)(v4 + 12) = 28;
    result = *(ushort *)(v4 + 8) + 1;
    *(ushort *)(v4 + 8) = result;
  }
  return result;
}

//----- (0225D8F8) --------------------------------------------------------
int __fastcall Function_225d8f8(int a1, int a2, int a3, int a4)
{
  int v4;
  char v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  ((void (__fastcall *)(uint, int))byte_22347B0)(*(uint *)(a1 + 4), 1);
  ((void (__fastcall *)(uint, char *))byte_223481C)(*(uint *)(v4 + 4), &v6);
  v7 = 0;
  return ((int (__fastcall *)(uint, char *))byte_22347F8)(*(uint *)(v4 + 4), &v6);
}

//----- (0225D93C) --------------------------------------------------------
int __fastcall Function_225d93c(int result, char a2)
{
  *(uchar *)result = 1;
  *(uchar *)(result + 2) = *(uchar *)(result + 1);
  *(uchar *)(result + 3) = a2 - *(uchar *)(result + 1);
  *(ushort *)(result + 4) = 0;
  *(ushort *)(result + 6) = 60;
  return result;
}

//----- (0225D954) --------------------------------------------------------
int __fastcall Function_225d954(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !*(uchar *)a1 )
    return 1;
  if ( ++*(ushort *)(a1 + 4) >= *(ushort *)(a1 + 6) )
    *(uchar *)a1 = 0;
  *(uchar *)(a1 + 1) = s32_div_f(*(char *)(a1 + 3) * *(short *)(a1 + 4), *(short *)(a1 + 6));
  *(uchar *)(v2 + 1) += *(uchar *)(v2 + 2);
  ((void (__fastcall *)(int, uint))byte_2234610)(v3, *(uchar *)(v2 + 1));
  return 0;
}

//----- (0225D9A4) --------------------------------------------------------
int __fastcall Function_225d9a4(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = (int *)LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 112, 237568);
  Function_2017fc8(3, 113, 249856);
  v3 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 1016, 0x70u);
  Call_FillMemWithValue((int *)v3, 0, 0x3F8u);
  *(uint *)(v3 + 56) = v2 + 3;
  *(uint *)(v3 + 52) = v2[7];
  *(uchar *)(v3 + 2) = ((int (*)(void))dword_222E338[0])();
  if ( ((int (__fastcall *)(uint))dword_222E338[0])(*(uint *)(v3 + 52)) == -1 )
    ErrorHandler();
  Function_2002ac8(1);
  Function_2002ae4(0);
  Function_2002b20(0);
  *(uint *)(v3 + 1012) = LoadTrainerDataAdress(*v2);
  Function_225e4ec(v3 + 60, *v2, 112);
  *(uint *)(v3 + 1000) = Function_225c858(0x70u);
  v4 = GetGender(*(uint *)(v3 + 1012));
  *(uint *)(v3 + 992) = Function_225c9b4(24, v4, *(uint *)(v3 + 1000), 0x70u, 113);
  *(uint *)(v3 + 996) = Function_2261e10(v2[1], v2[2], *(uint *)(v3 + 1000), 112, 113);
  *(uint *)(v3 + 1004) = Function_2260a70(112);
  Function_225e9c8(v3 + 760, v3 + 60, *v2, 112);
  Function_225eba8(v3 + 792, v3 + 60, *v2, 112);
  Function_225ec20(v3 + 824, v3 + 60, 112);
  Function_225f114(v3 + 912, v3 + 60, 112);
  Function_225efd4(v3 + 964, v3 + 60, 112);
  Function_225f208(v3 + 732, 112);
  Function_225f098(v3 + 928, v3 + 732, 112);
  Function_225f350(v3 + 388, *(uint *)(v3 + 56), v3 + 60, *(uint *)(v3 + 1012), 112);
  v5 = ((int (__fastcall *)(uint))dword_222E3BC[0])(*(uint *)(v3 + 52));
  if ( ((int (*)(void))dword_222E8D8[0])() == 1 )
    Function_225f8ac(v3 + 388, v3 + 60, v3 + 732, 112, v5);
  *(uint *)(v3 + 1008) = Function_2262da8(v3, 112);
  Function_22630a4(v3);
  Function_22630ec(v3);
  *(uint *)(v3 + 980) = Function_2269190(
                            *(uint *)(v3 + 52),
                            *(uint *)(v3 + 1000),
                            *(uint *)(v3 + 1004),
                            *(uint *)(v3 + 992),
                            112,
                            113);
  *(uint *)(v3 + 988) = Function_226c60c(112, v3);
  SetMainLoopFunctionCall((int)Function_225e4c8, v3);
  Function_20177a4();
  return 1;
}

//----- (0225DB90) --------------------------------------------------------
int __fastcall Function_225db90(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  LoadPtrToOverWorldDataIn18(v2);
  switch ( (uchar)*v3 )
  {
    case 0u:
      Function_200f174(0, 1, 1, 0, 6, 1, 112);
      *(uchar *)(v4 + 3) = 1;
      ++*v3;
      goto LABEL_39;
    case 1u:
      if ( Function_200f2ac() == 1 )
      {
        *(uchar *)(v4 + 3) = 0;
        ++*v3;
      }
      goto LABEL_39;
    case 2u:
      if ( (*(uchar *)(v4 + 4) & 0xF) == 1
        && (((int (*)(void))dword_2231760[0])() == 1
         || ((int (__fastcall *)(uint))dword_222DFF8[0])(*(uint *)(v4 + 52))) )
      {
        *(uchar *)(v4 + 4) = *(uchar *)(v4 + 4) & 0xF | 0x10;
      }
      if ( !*(uchar *)(v4 + 7) && ((int (__fastcall *)(uint))dword_222E138[0])(*(uint *)(v4 + 52)) == 1 )
      {
        *(uchar *)(v4 + 6) = 1;
        Function_225df38(v4, 8);
      }
      if ( *(uchar *)v4 == 1 || (uint)*(uchar *)(v4 + 4) << 24 >> 28 == 1 || *(uchar *)(v4 + 6) == 1 )
      {
        if ( (uint)*(uchar *)(v4 + 4) << 24 >> 28 )
        {
          *v3 = 3;
        }
        else if ( *(uchar *)(v4 + 6) == 1 )
        {
          *v3 = 5;
        }
        else
        {
          *v3 = 7;
        }
      }
      goto LABEL_39;
    case 3u:
      Function_225eb74(v4 + 760);
      Function_225ef14(v4 + 824);
      Function_225f024(v4 + 964);
      Function_225f100(v4 + 928);
      if ( Function_20383e8() )
      {
        Function_225f184(v4 + 912, v4 + 732);
      }
      else if ( Function_203881c() )
      {
        v5 = ((int (*)(void))dword_22326DC[0])();
        Function_225f1c0(v4 + 912, v4 + 732, v5);
      }
      else
      {
        v6 = ((int (__fastcall *)(uint))dword_222DFF8[0])(*(uint *)(v4 + 52));
        Function_225f1f0(v4 + 912, v4 + 732, v6);
      }
      *v3 = 4;
      goto LABEL_39;
    case 4u:
      if ( dword_21BF6C4 & 1 )
        *v3 = 7;
      goto LABEL_39;
    case 5u:
      Function_225eb74(v4 + 760);
      Function_225ef14(v4 + 824);
      Function_225f024(v4 + 964);
      Function_225f100(v4 + 928);
      v7 = Function_225f288(v4 + 732, 1, 70);
      Function_225ea44(v4 + 760, v7);
      *v3 = 6;
      *(uint *)(v4 + 8) = 60;
      goto LABEL_39;
    case 6u:
      if ( Function_225eb5c(v4 + 760) )
      {
        v8 = *(uint *)(v4 + 8) - 1;
        *(uint *)(v4 + 8) = v8;
        if ( v8 <= 0 )
          *v3 = 7;
      }
      goto LABEL_39;
    case 7u:
      v9 = Function_225f798(v4 + 388);
      if ( v9 == 5 )
      {
        Function_200f174(0, 0, 0, 0, 6, 1, 112);
        *(uchar *)(v4 + 3) = 1;
        ++*v3;
      }
      else if ( !v9 )
      {
        Function_200f174(0, 0, 0, 0, 6, 1, 112);
        *(uchar *)(v4 + 3) = 1;
        ++*v3;
      }
      goto LABEL_39;
    case 8u:
      if ( Function_200f2ac() != 1 )
        goto LABEL_39;
      *(uchar *)(v4 + 3) = 0;
      result = 1;
      break;
    default:
LABEL_39:
      Function_225e88c(v4);
      Function_225e92c(v4);
      result = 0;
      break;
  }
  return result;
}

//----- (0225DDF8) --------------------------------------------------------
int __fastcall Function_225ddf8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  *(uint *)(LoadPtrToOverWorldDataIn18(v1) + 24) = *(uchar *)(v2 + 1);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_226c6f8(*(uint *)(v2 + 988));
  Function_2269204(*(uint *)(v2 + 980));
  Function_2262df4(*(uint *)(v2 + 1008));
  Function_225f3e4(v2 + 388, v2 + 792, v2 + 60);
  Function_225f25c(v2 + 732);
  Function_225ea14(v2 + 760);
  Function_225ebbc(v2 + 792);
  Function_225ed4c(v2 + 824, v2 + 60);
  Function_225f144(v2 + 912);
  Function_225f100(v2 + 928);
  Function_225efd8(v2 + 964);
  Function_2260ad4(*(uint *)(v2 + 1004));
  Function_22621ac(*(uint *)(v2 + 996));
  Function_225ca20(*(uint **)(v2 + 992));
  Function_225c894(*(uint **)(v2 + 1000));
  Function_225e6d0(v2 + 60);
  free(v2);
  Function_201807c(112);
  Function_201807c(113);
  Function_20057bc();
  Function_200592c(0);
  return 1;
}

//----- (0225DEE8) --------------------------------------------------------
int __fastcall Function_225dee8(int a1)
{
  return *(uint *)(a1 + 52);
}

//----- (0225DEEC) --------------------------------------------------------
int __fastcall Function_225deec(int a1)
{
  return *(uint *)(a1 + 56);
}

//----- (0225DEF0) --------------------------------------------------------
int __fastcall Function_225def0(int a1)
{
  return *(uint *)(a1 + 992);
}

//----- (0225DEF8) --------------------------------------------------------
int __fastcall Function_225def8(int a1)
{
  return *(uint *)(a1 + 996);
}

//----- (0225DF00) --------------------------------------------------------
int __fastcall Function_225df00(int a1)
{
  return *(uint *)(a1 + 1000);
}

//----- (0225DF08) --------------------------------------------------------
int __fastcall Function_225df08(int a1)
{
  return *(uint *)(a1 + 1004);
}

//----- (0225DF10) --------------------------------------------------------
int __fastcall Function_225df10(int a1)
{
  return *(uint *)(a1 + 1008);
}

//----- (0225DF18) --------------------------------------------------------
int __fastcall Function_225df18(int result, char a2)
{
  *(uchar *)(result + 4) = a2 & 0xF | *(uchar *)(result + 4) & 0xF0;
  return result;
}

//----- (0225DF2C) --------------------------------------------------------
int __fastcall Function_225df2c(int a1)
{
  return *(uchar *)(a1 + 2);
}

//----- (0225DF30) --------------------------------------------------------
int __fastcall Function_225df30(int a1)
{
  return *(uchar *)(a1 + 3);
}

//----- (0225DF34) --------------------------------------------------------
uchar *__fastcall Function_225df34(uchar *result, char a2)
{
  *result = a2;
  return result;
}

//----- (0225DF38) --------------------------------------------------------
int __fastcall Function_225df38(int result, char a2)
{
  *(uchar *)(result + 1) = a2;
  return result;
}

//----- (0225DF3C) --------------------------------------------------------
int __fastcall Function_225df3c(int result, char a2)
{
  *(uchar *)(result + 5) = a2;
  return result;
}

//----- (0225DF40) --------------------------------------------------------
int __fastcall Function_225df40(int a1)
{
  return *(uchar *)(a1 + 5);
}

//----- (0225DF44) --------------------------------------------------------
int __fastcall Function_225df44(int result)
{
  *(uchar *)(result + 7) = 1;
  return result;
}

//----- (0225DF4C) --------------------------------------------------------
int __fastcall Function_225df4c(int a1, uint a2, char a3)
{
  uint v3;
  int v4;
  char v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 0x14 )
    ErrorHandler();
  result = v4 + v3;
  *(uchar *)(v4 + v3 + 12) = v5;
  return result;
}

//----- (0225DF64) --------------------------------------------------------
int __fastcall Function_225df64(int a1, int a2)
{
  return *(uchar *)(a1 + a2 + 12);
}

//----- (0225DF6C) --------------------------------------------------------
uchar *__fastcall Function_225df6c(int a1, uint a2, char a3)
{
  uint v3;
  int v4;
  char v5;
  uchar *result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 0x14 )
    ErrorHandler();
  result = (uchar *)(v4 + v3 + 32);
  *result = v5;
  return result;
}

//----- (0225DF84) --------------------------------------------------------
int __fastcall Function_225df84(int a1, int a2)
{
  return *(uchar *)(a1 + a2 + 32);
}

//----- (0225DF8C) --------------------------------------------------------
int __fastcall Function_225df8c(int a1, int a2)
{
  return Function_225ea44(a1 + 760, a2);
}

//----- (0225DF9C) --------------------------------------------------------
int __fastcall Function_225df9c(int a1)
{
  return Function_225eaa4(a1 + 760);
}

//----- (0225DFAC) --------------------------------------------------------
int __fastcall Function_225dfac(int a1)
{
  return Function_225eb5c(a1 + 760);
}

//----- (0225DFBC) --------------------------------------------------------
int __fastcall Function_225dfbc(int a1)
{
  return Function_225eb08(a1 + 760);
}

//----- (0225DFCC) --------------------------------------------------------
int __fastcall Function_225dfcc(int a1)
{
  return Function_225eb24(a1 + 760);
}

//----- (0225DFDC) --------------------------------------------------------
int __fastcall Function_225dfdc(int a1)
{
  return Function_225eb4c(a1 + 760);
}

//----- (0225DFEC) --------------------------------------------------------
int __fastcall Function_225dfec(int a1)
{
  return Function_225eb74(a1 + 760);
}

//----- (0225DFFC) --------------------------------------------------------
int __fastcall Function_225dffc(int a1)
{
  return Function_225ebc4(a1 + 792);
}

//----- (0225E00C) --------------------------------------------------------
int __fastcall Function_225e00c(int a1, int a2)
{
  return Function_225eda8(a1 + 824, a2, 113, 0);
}

//----- (0225E020) --------------------------------------------------------
int __fastcall Function_225e020(int a1, int a2, int a3)
{
  return Function_225eda8(a1 + 824, a2, 113, a3);
}

//----- (0225E034) --------------------------------------------------------
int __fastcall Function_225e034(int a1)
{
  return Function_225ede0(a1 + 824);
}

//----- (0225E044) --------------------------------------------------------
int __fastcall Function_225e044(int a1)
{
  return Function_225edf8(a1 + 824);
}

//----- (0225E054) --------------------------------------------------------
int __fastcall Function_225e054(int a1)
{
  return Function_225ee04(a1 + 824);
}

//----- (0225E064) --------------------------------------------------------
int __fastcall Function_225e064(int a1)
{
  return Function_225ee08(a1 + 824);
}

//----- (0225E074) --------------------------------------------------------
int __fastcall Function_225e074(int a1, int a2, int a3, int a4)
{
  return Function_225ee30(a1 + 824, a2, a1 + 60, a3, a4, 112, 16, 3, 15);
}

//----- (0225E0A4) --------------------------------------------------------
int __fastcall Function_225e0a4(int a1, int a2, int a3, int a4, uchar a5, uchar a6, uchar a7)
{
  return Function_225ee30(a1 + 824, a2, a1 + 60, a3, a4, 112, a5, a6, a7);
}

//----- (0225E0D4) --------------------------------------------------------
int __fastcall Function_225e0d4(int a1)
{
  return Function_225eed8(a1 + 824);
}

//----- (0225E0E4) --------------------------------------------------------
int __fastcall Function_225e0e4(int a1)
{
  return Function_225ef14(a1 + 824);
}

//----- (0225E0F4) --------------------------------------------------------
int __fastcall Function_225e0f4(int a1)
{
  return Function_225ef6c(a1 + 824);
}

//----- (0225E104) --------------------------------------------------------
int __fastcall Function_225e104(int a1, int a2, int a3, int a4, uchar a5)
{
  return Function_225efe0(a1 + 964, a1 + 60, 112, a2, a3, a4, a5);
}

//----- (0225E12C) --------------------------------------------------------
int __fastcall Function_225e12c(int a1)
{
  return Function_225f024(a1 + 964);
}

//----- (0225E13C) --------------------------------------------------------
int __fastcall Function_225e13c(int a1)
{
  return Function_225f048(a1 + 964);
}

//----- (0225E14C) --------------------------------------------------------
int __fastcall Function_225e14c(int a1)
{
  return Function_225f078(a1 + 964);
}

//----- (0225E164) --------------------------------------------------------
int __fastcall Function_225e164(int a1)
{
  return Function_225ee30(a1 + 824, a1 + 932, a1 + 60, 0, 0, 112, 25, 13, 6);
}

//----- (0225E194) --------------------------------------------------------
int __fastcall Function_225e194(int a1)
{
  return Function_225ee30(a1 + 824, a1 + 932, a1 + 60, 0, 1, 112, 25, 13, 6);
}

//----- (0225E1C4) --------------------------------------------------------
int __fastcall Function_225e1c4(int a1)
{
  int v1;

  v1 = Function_225eed8(a1 + 824);
  switch ( v1 )
  {
    case 0:
      return 0;
    case 1:
      return 1;
    case -2:
      Function_2005748(0x5DCu);
      return 1;
  }
  return 2;
}

//----- (0225E1F8) --------------------------------------------------------
int __fastcall Function_225e1f8(int a1)
{
  return Function_225ef14(a1 + 824);
}

//----- (0225E20C) --------------------------------------------------------
int __fastcall Function_225e20c(int a1, int a2, int a3)
{
  return Function_225f288(a1 + 732, a2, a3);
}

//----- (0225E21C) --------------------------------------------------------
int __fastcall Function_225e21c(int a1)
{
  return Function_225f2a8(a1 + 732);
}

//----- (0225E234) --------------------------------------------------------
uint __fastcall Function_225e234(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;
  bool v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = AllocTrainerData(0x70u);
  v7 = v4 == ((int (__fastcall *)(uint))dword_222E338[0])(*(uint *)(v3 + 52));
  v8 = *(uint *)(v3 + 52);
  if ( v7 )
    v9 = ((int (__fastcall *)(int))dword_222E3BC[0])(v8);
  else
    v9 = ((int (__fastcall *)(int, int))dword_222E374[0])(v8, v4);
  ((void (__fastcall *)(int, int *, int))dword_222E63C[1])(v9, v6, 112);
  Function_225f2c8(v3 + 732, v6, v5);
  return free((int)v6);
}

//----- (0225E27C) --------------------------------------------------------
int __fastcall Function_225e27c(int a1)
{
  return Function_225f2d8(a1 + 732);
}

//----- (0225E28C) --------------------------------------------------------
int __fastcall Function_225e28c(int a1)
{
  return Function_225f2e8(a1 + 732);
}

//----- (0225E29C) --------------------------------------------------------
int __fastcall Function_225e29c(int a1)
{
  return Function_225f2f8(a1 + 732);
}

//----- (0225E2AC) --------------------------------------------------------
ushort *__fastcall Function_225e2ac(int a1, uint a2, uint a3)
{
  return Function_200c158(*(uint *)(a1 + 732), a2, a3);
}

//----- (0225E2BC) --------------------------------------------------------
ushort *__fastcall Function_225e2bc(int a1, uint a2, uint a3)
{
  return Function_200c190(*(uint *)(a1 + 732), a2, a3);
}

//----- (0225E2CC) --------------------------------------------------------
ushort *__fastcall Function_225e2cc(int a1, uint a2, uint a3)
{
  return Function_200c1c8(*(uint *)(a1 + 732), a2, a3);
}

//----- (0225E2DC) --------------------------------------------------------
ushort *__fastcall Function_225e2dc(int a1, uint a2, uint a3)
{
  return Function_200c200(*(uint *)(a1 + 732), a2, a3);
}

//----- (0225E2EC) --------------------------------------------------------
ushort *__fastcall Function_225e2ec(int a1, uint a2, uint a3)
{
  return Function_200c238(*(uint *)(a1 + 732), a2, a3);
}

//----- (0225E2FC) --------------------------------------------------------
ushort *__fastcall Function_225e2fc(int a1, uint a2, uint a3)
{
  return Function_200c270(*(uint *)(a1 + 732), a2, a3);
}

//----- (0225E30C) --------------------------------------------------------
ushort *__fastcall Function_225e30c(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  uint v5;

  v3 = a1;
  v4 = a2;
  v5 = ((int (__fastcall *)(int))dword_22316A0[18])(a3);
  return Function_200b7ec(*(uint *)(v3 + 732), v4, v5);
}

//----- (0225E328) --------------------------------------------------------
int __fastcall Function_225e328(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a2 != Function_225f7f8(a1 + 388)
    || Function_225f7fc(v3 + 388) != 1
    || Function_225f834(v3 + 388)
    || (result = Function_225f828(v3 + 388), v5 != result) )
  {
    result = Function_225f79c(v3 + 388, v4, v5);
  }
  return result;
}

//----- (0225E378) --------------------------------------------------------
int __fastcall Function_225e378(int a1, int a2)
{
  return Function_225f7a8(a1 + 388, a1 + 60, a2, 112);
}

//----- (0225E390) --------------------------------------------------------
int __fastcall Function_225e390(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = Function_225f7fc(a1 + 388);
  if ( result )
  {
    v3 = Function_225f7f8(v1 + 388);
    v4 = ((int (__fastcall *)(uint, int))dword_222E374[0])(*(uint *)(v1 + 52), v3);
    result = Function_225fda0(v1 + 388, v1 + 396, v1 + 60, 112, v4);
  }
  return result;
}

//----- (0225E3D0) --------------------------------------------------------
int __fastcall Function_225e3d0(int a1)
{
  return Function_225f7e0(a1 + 388);
}

//----- (0225E3E0) --------------------------------------------------------
int __fastcall Function_225e3e0(int a1)
{
  return Function_225f7f8(a1 + 388);
}

//----- (0225E3F0) --------------------------------------------------------
int __fastcall Function_225e3f0(int a1)
{
  return Function_225f7fc(a1 + 388);
}

//----- (0225E400) --------------------------------------------------------
int __fastcall Function_225e400(int a1)
{
  return Function_225f814(a1 + 388);
}

//----- (0225E410) --------------------------------------------------------
int __fastcall Function_225e410(int a1)
{
  return Function_225f7ec(a1 + 388);
}

//----- (0225E420) --------------------------------------------------------
int __fastcall Function_225e420(int a1, int a2)
{
  return Function_226c810(*(uint *)(a1 + 988), a2, 1);
}

//----- (0225E430) --------------------------------------------------------
int __fastcall Function_225e430(int result)
{
  *(ushort *)(result + 394) = 1;
  return result;
}

//----- (0225E43C) --------------------------------------------------------
int __fastcall Function_225e43c(int a1)
{
  return Function_225f934(a1 + 388);
}

//----- (0225E44C) --------------------------------------------------------
int __fastcall Function_225e44c(int a1)
{
  return Function_2260a68(a1 + 664);
}

//----- (0225E45C) --------------------------------------------------------
int __fastcall Function_225e45c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 984);
  *(uint *)(a1 + 984) = 0;
  return v1;
}

//----- (0225E46C) --------------------------------------------------------
int __fastcall Function_225e46c(int a1, uint a2)
{
  uint v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  v4 = ((int (__fastcall *)(uint, uint))dword_222E374[0])(*(uint *)(v3 + 52), v2);
  v5 = ((int (__fastcall *)(int))dword_222E8C4)(v4);
  Function_2269268(*(uint *)(v3 + 980), v2, v5);
  result = ((int (__fastcall *)(uint))dword_222E338[0])(*(uint *)(v3 + 52));
  if ( v2 == result )
    result = ((int (__fastcall *)(uint, int))dword_222EB6C[0])(*(uint *)(v3 + 52), v5);
  return result;
}

//----- (0225E4AC) --------------------------------------------------------
int __fastcall Function_225e4ac(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x14 )
    ErrorHandler();
  return Function_2269298(*(uint *)(v3 + 980), v2);
}

//----- (0225E4C8) --------------------------------------------------------
int __fastcall Function_225e4c8(int a1)
{
  int v1;

  v1 = a1;
  Function_22622a4(*(uint *)(a1 + 996));
  Function_225cae0(*(uint *)(v1 + 992));
  return Function_225e740(v1 + 60);
}

//----- (0225E4EC) --------------------------------------------------------
int __fastcall Function_225e4ec(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int *v5;
  int *v6;
  ushort *v7;
  uchar v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int result;
  int v16;
  int v17;

  v3 = a1;
  v16 = a2;
  REG_BLDCNT = 0;
  v4 = a3;
  REG_BLDCNT_SUB = 0;
  Function_201dbec(32, a3);
  GX_SetBanks(dword_226D664);
  byte_21BF6E1 = 0;
  Function_201ffe8();
  Function_201975c(0, 0);
  SetGraphicsModes(dword_226D5BC);
  *(uint *)v3 = Function_2018340(v4);
  v5 = dword_226D6B4;
  v6 = &dword_226D5CC;
  v17 = 0;
  do
  {
    Function_20183c4(*(uint **)v3, *v6 & 0xFF, v5, 0);
    Function_2019690(*v6 & 0xFF, 32, 0, v4);
    Function_2019ebc(*(uint **)v3, *v6 & 0xFF);
    v5 += 7;
    ++v6;
    ++v17;
  }
  while ( v17 < 4 );
  v7 = (ushort *)LoadPlayerDataAdress(v16);
  v8 = Function_2027b50(v7);
  LoadFromNARC_PlFont1(0, 160, v4);
  LoadFromNARC_PlFont2(0, 128, v4);
  Function_200daa4(*(uint **)v3, 1u, 85, 3, 0, v4);
  Function_200dd0c(*(uint **)v3, 1u, 1, 1, v8, v4);
  Function_200e2a4(*(uint **)v3, 1u, 31, 2, 3u, 0, v4);
  Call_LoadFromNARC_RLCN(186, 90, 0, 64, 32, v4);
  Function_20a7944();
  Function_200a784(0, 126, 0, 31, 0, 0x7Eu, 0, 0x1Fu, v4);
  Function_201e88c(dword_226D5DC, 16, 1048592);
  Function_201f834(24, v4);
  Function_201e994();
  Function_201f8e4();
  Function_200966c(1, 16, v9, v10);
  Function_2009704(1);
  Function_2039734();
  *(uint *)(v3 + 4) = Function_20095c4(24, v3 + 8, v4, v11);
  Function_200964c(v3 + 8, 0, 0x100000, v12);
  v13 = 0;
  v14 = v3;
  do
  {
    *(uint *)(v14 + 304) = Function_2009714(24, v13, v4);
    v13 = (int *)((char *)v13 + 1);
    v14 += 4;
  }
  while ( (int)v13 < 4 );
  *(uint *)(v3 + 320) = Function_201dcc8(24, v4);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  result = Function_2024220(v4, 0, 2, 0, 4, (void (*)(void))Function_225e754);
  *(uint *)(v3 + 324) = result;
  return result;
}

//----- (0225E6C0) --------------------------------------------------------
uint __fastcall Function_225e6c0(int a1)
{
  Function_20219f8(*(uint *)(a1 + 4));
  return Function_201dce8();
}

//----- (0225E6D0) --------------------------------------------------------
uint __fastcall Function_225e6d0(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  Function_201dc3c();
  v2 = &dword_226D5CC;
  v3 = 0;
  do
  {
    Function_2019044(*(uint *)v1, *v2 & 0xFF);
    ++v3;
    ++v2;
  }
  while ( v3 < 4 );
  free(*(uint *)v1);
  Call_free4(*(uint *)(v1 + 320));
  v4 = 0;
  *(uint *)(v1 + 320) = 0;
  v5 = v1;
  do
  {
    Function_2009754(*(int **)(v5 + 304));
    ++v4;
    v5 += 4;
  }
  while ( v4 < 4 );
  Function_2021964(*(int **)(v1 + 4));
  Function_201e958();
  Function_201f8b4();
  Function_200a878();
  return Function_20242c4(*(uint *)(v1 + 324));
}

//----- (0225E740) --------------------------------------------------------
int __fastcall Function_225e740(int *a1)
{
  Function_201c2b8(*a1);
  Function_200a858();
  return Function_201dcac();
}

//----- (0225E754) --------------------------------------------------------
int __fastcall Function_225e754(int a1, int a2, int a3, int a4)
{
  short v4;
  int v5;
  short v7;
  short v8;
  short v9;
  int v10;

  v10 = a4;
  Function_201ff0c(1u, 1);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  v4 = GFX_CONTROL & 0xCFFF;
  v5 = (GFX_CONTROL & 0xCFFF | 8) & 0xCFFF;
  GFX_CONTROL = v5 | 0x20;
  SetEdgeTable((int)dword_226D5EC, v5 | 0x20, v5, v4);
  G3X_SetFog(0, 0, 0, 0);
  G3X_SetClearColor(27482, 0, 0x7FFF, 63, 0);
  GFX_VIEWPORT = -1073807360;
  Function_20af51c(0, -2043, -3548, 110);
  v7 = 0;
  v8 = 0;
  v9 = 4096;
  VEC_Fx16Normalize(&v7, &v7);
  Function_20af51c(1, v7, v8, v9);
  v7 = 0;
  v8 = 0;
  v9 = 4096;
  VEC_Fx16Normalize(&v7, &v7);
  Function_20af51c(2, v7, v8, v9);
  Function_20af558(2, 0x7FFF);
  v7 = 0;
  v8 = 0;
  v9 = 4096;
  VEC_Fx16Normalize(&v7, &v7);
  Function_20af51c(3, v7, v8, v9);
  return Function_20af558(3, 0x7FFF);
}

//----- (0225E88C) --------------------------------------------------------
int __fastcall Function_225e88c(int a1)
{
  int v1;
  BOOL v2;

  v1 = a1;
  Function_225ca44(*(uint **)(a1 + 992));
  if ( !((uint)*(uchar *)(v1 + 4) << 24 >> 28) && !*(uchar *)(v1 + 6) )
    Function_2262e20(*(uint *)(v1 + 1008));
  Function_2262210(*(uint *)(v1 + 996));
  if ( !((uint)*(uchar *)(v1 + 4) << 24 >> 28) && !*(uchar *)(v1 + 6) )
  {
    Function_225ca5c(*(uint *)(v1 + 992));
    Function_2262e2c(*(uint *)(v1 + 1008));
    Function_226c718(*(uint *)(v1 + 988));
  }
  Function_225e970(v1);
  if ( !*(uchar *)(v1 + 3) )
  {
    v2 = (uint)*(uchar *)(v1 + 4) << 24 >> 28 == 1 || *(uchar *)(v1 + 6) == 1 || *(uchar *)v1 == 1;
    Function_225f418(v1 + 388, v1, v2, 112);
  }
  return Function_2269220(*(uint *)(v1 + 980));
}

//----- (0225E92C) --------------------------------------------------------
uint __fastcall Function_225e92c(uint *a1)
{
  uint *v1;

  v1 = a1;
  Call_G3X_Reset();
  Function_2260aec(v1[251]);
  Function_2262298(v1[249]);
  Function_225cad4(v1[248]);
  Function_2269240(v1[245]);
  Function_20241bc(0, 0);
  return Function_225e6c0((int)(v1 + 15));
}

//----- (0225E970) --------------------------------------------------------
int __fastcall Function_225e970(int a1)
{
  int v1;
  int v2;
  int v3;
  BOOL v4;
  int v5;
  int result;
  int v7;

  v1 = a1;
  v7 = ((int (__fastcall *)(uint))dword_222E190[0])(*(uint *)(a1 + 52));
  v2 = 0;
  do
  {
    v3 = ((int (__fastcall *)(int))dword_2233184[0])(v2);
    if ( v3 == 1 )
      v4 = ((int (__fastcall *)(int))dword_22331A4[0])(v2) == 0;
    else
      v4 = 0;
    v5 = ((int (__fastcall *)(int))dword_2233224[0])(v2);
    result = Function_22627bc(*(uint *)(v1 + 996), v2++, v5, v3, v4, v7);
  }
  while ( v2 < 3 );
  return result;
}

//----- (0225E9C8) --------------------------------------------------------
int __fastcall Function_225e9c8(int a1, uint **a2, int a3, uint a4)
{
  int v4;
  int v5;
  uint v6;
  ushort *v7;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  Function_201a7e8(*a2, a1, 1, 2, 19, 0x1Bu, 4u, 4, 94);
  Function_201ada4_ClearTextBox(v4, 15);
  *(uint *)(v4 + 24) = Function_2023790(384, v6);
  v7 = (ushort *)LoadPlayerDataAdress(v5);
  result = Function_2027ac0(v7);
  *(uint *)(v4 + 20) = result;
  return result;
}

//----- (0225EA14) --------------------------------------------------------
uint __fastcall Function_225ea14(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( Function_201d724(*(uint *)(a1 + 16) & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v1 + 16) & 0xFF);
  Function_225eb38(v1);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 24), v2);
  return Function_201a8fc(v1);
}

//----- (0225EA44) --------------------------------------------------------
uint __fastcall Function_225ea44(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(*(uint *)(a1 + 16) & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v2 + 16) & 0xFF);
  Function_201ada4_ClearTextBox(v2, 15);
  Function_2023810(*(ushort **)(v2 + 24), v3);
  v4 = *(uint *)(v2 + 20);
  v5 = *(uint *)(v2 + 24);
  *(uint *)(v2 + 16) = Function_201d78c(v2, 1);
  return Function_200e060(v2, 1, 1, 1u);
}

//----- (0225EAA4) --------------------------------------------------------
int __fastcall Function_225eaa4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(*(uint *)(a1 + 16) & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v2 + 16) & 0xFF);
  Function_201ada4_ClearTextBox(v2, 15);
  Function_2023810(*(ushort **)(v2 + 24), v3);
  v4 = *(uint *)(v2 + 24);
  Function_201d78c(v2, 1);
  Function_200e060(v2, 1, 1, 1u);
  return Function_201a9a4(v2);
}

//----- (0225EB08) --------------------------------------------------------
int __fastcall Function_225eb08(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  if ( a1[7] )
    ErrorHandler();
  result = Function_200e7fc(v1, 1);
  v1[7] = result;
  return result;
}

//----- (0225EB24) --------------------------------------------------------
int __fastcall Function_225eb24(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 28);
  if ( result )
  {
    Function_200eba0(result);
    result = 0;
    *(uint *)(v1 + 28) = 0;
  }
  return result;
}

//----- (0225EB38) --------------------------------------------------------
int __fastcall Function_225eb38(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 28);
  if ( result )
  {
    Function_200ebc8(result);
    result = 0;
    *(uint *)(v1 + 28) = 0;
  }
  return result;
}

//----- (0225EB4C) --------------------------------------------------------
BOOL __fastcall Function_225eb4c(int a1)
{
  return *(uint *)(a1 + 28) != 0;
}

//----- (0225EB5C) --------------------------------------------------------
BOOL __fastcall Function_225eb5c(int a1)
{
  return Function_201d724(*(uint *)(a1 + 16) & 0xFF) == 0;
}

//----- (0225EB74) --------------------------------------------------------
int __fastcall Function_225eb74(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201d724(*(uint *)(a1 + 16) & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v1 + 16) & 0xFF);
  Function_225eb38(v1);
  Function_200e084(v1, 1);
  return Function_201ad10(v1);
}

//----- (0225EBA8) --------------------------------------------------------
int __fastcall Function_225eba8(int a1, uint **a2, int a3, uint a4)
{
  int v4;

  v4 = a1;
  Function_225e9c8(a1, a2, a3, a4);
  return Function_201c2b4(v4, 2);
}

//----- (0225EBBC) --------------------------------------------------------
uint __fastcall Function_225ebbc(int a1)
{
  return Function_225ea14(a1);
}

//----- (0225EBC4) --------------------------------------------------------
uint __fastcall Function_225ebc4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(*(uint *)(a1 + 16) & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v2 + 16) & 0xFF);
  Function_201ada4_ClearTextBox(v2, 15);
  Function_2023810(*(ushort **)(v2 + 24), v3);
  v4 = *(uint *)(v2 + 20);
  v5 = *(uint *)(v2 + 24);
  *(uint *)(v2 + 16) = Function_201d738_CallInitTextInterpreter(v2, 1);
  return Function_200e69c(v2, 1, 31, 2u, 3u);
}

//----- (0225EC20) --------------------------------------------------------
int __fastcall Function_225ec20(int a1, uint *a2, uint a3, int a4)
{
  uint v4;
  int v5;
  uint *v6;
  int *v7;
  int v8;
  char *v9;
  int v10;
  int v11;
  int result;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint v19;
  char v20;
  int v21;

  v21 = a4;
  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = LoadFromNARC_8(62, a3, a3, a4);
  *(uint *)(v5 + 64) = Function_2009a4c(v6[76], (int)v7, 4u, 0, 5000, 1, v4);
  *(uint *)(v5 + 68) = Function_2009b04(v6[77], (int)v7, 0xAu, 0, 5000, 1, 1, v4);
  *(uint *)(v5 + 72) = Function_2009bc4(v6[78], (int)v7, 5u, 0, 5000, 2u, v4);
  *(uint *)(v5 + 76) = Function_2009bc4(v6[79], (int)v7, 6u, 0, 5000, 3u, v4);
  Call_FS_CloseFile(v7);
  Function_200a3dc(*(int **)(v5 + 64));
  Function_200a640(*(int **)(v5 + 68));
  Function_20093b4((int)&v20, 5000, 5000, 5000, 5000, -1, -1, 0, 0, v6[76], v6[77], v6[78], v6[79], 0, 0);
  v8 = 0;
  v13 = v6[1];
  v14 = &v20;
  v18 = 1;
  v19 = v4;
  v9 = &byte_226D580;
  v17 = 0;
  v15 = 786432;
  v10 = v5;
  do
  {
    v16 = (uchar)*v9 << 12;
    v11 = Function_2021b90(&v13);
    *(uint *)(v10 + 80) = v11;
    Function_2021d6c(v11, v8);
    Function_2021cc8(*(uint *)(v10 + 80), 1);
    Function_2021cac(*(uint *)(v10 + 80), 0);
    ++v8;
    ++v9;
    v10 += 4;
  }
  while ( v8 < 2 );
  result = 0;
  *(uint *)(v5 + 60) = 0;
  return result;
}

//----- (0225ED4C) --------------------------------------------------------
int __fastcall Function_225ed4c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a1;
  v3 = a2;
  if ( *(uint *)(a1 + 52) )
    Function_225ede0(a1);
  if ( *(uint *)(v2 + 48) )
    Function_225ef14(v2);
  v4 = 0;
  v5 = v2;
  do
  {
    Function_2021bd4(*(uint *)(v5 + 80));
    *(uint *)(v5 + 80) = 0;
    ++v4;
    v5 += 4;
  }
  while ( v4 < 2 );
  Function_200a4e4(*(int **)(v2 + 64));
  Function_200a6dc(*(int **)(v2 + 68));
  v6 = 0;
  do
  {
    result = Function_2009d68(*(int **)(v3 + 304), *(uint ***)(v2 + 64));
    ++v6;
    v2 += 4;
    v3 += 4;
  }
  while ( v6 < 4 );
  return result;
}

//----- (0225EDA8) --------------------------------------------------------
uint *__fastcall Function_225eda8(int a1, uint a2, uint a3, int a4)
{
  int v4;
  uint v5;
  uint v6;
  int v7;
  uint *result;
  uint v9;
  int v10;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( *(uint *)(a1 + 52) )
    ErrorHandler();
  result = Function_2013a04(v5, v6);
  *(uint *)(v4 + 52) = result;
  v9 = 0;
  *(ushort *)(v4 + 56) = v5;
  if ( v5 )
  {
    v10 = 0;
    do
    {
      ++v9;
      result = (uint *)(*(uint *)(v4 + 52) + v10);
      result[1] = v7;
      v10 += 8;
    }
    while ( v9 < v5 );
  }
  return result;
}

//----- (0225EDE0) --------------------------------------------------------
int *__fastcall Function_225ede0(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = *(int **)(a1 + 52);
  if ( result )
  {
    Function_2013a3c(result);
    result = 0;
    *(uint *)(v1 + 52) = 0;
    *(ushort *)(v1 + 56) = 0;
  }
  return result;
}

//----- (0225EDF8) --------------------------------------------------------
uint *__fastcall Function_225edf8(int a1, int a2, int a3)
{
  return Function_2013a6c(*(uint **)(a1 + 52), a2, a3, (int)Function_2013a6c);
}

//----- (0225EE04) --------------------------------------------------------
int __fastcall Function_225ee04(int a1)
{
  return *(uint *)(a1 + 52);
}

//----- (0225EE08) --------------------------------------------------------
int __fastcall Function_225ee08(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 0;
  if ( (int)*(ushort *)(a1 + 56) <= 0 )
    return 0;
  v3 = *(uint *)(a1 + 52);
  while ( a2 != *(uint *)(v3 + 4) )
  {
    ++v2;
    v3 += 8;
    if ( v2 >= *(ushort *)(a1 + 56) )
      return 0;
  }
  return 1;
}

//----- (0225EE30) --------------------------------------------------------
int __fastcall Function_225ee30(int a1, int a2, uint **a3, short a4, short a5, uchar a6, char a7, char a8, uchar a9)
{
  int v9;
  int v10;
  uint **v11;
  short v12;
  int v13;
  uint *v14;
  int v15;
  uint *v16;
  int v17;
  uint *v18;
  int v19;

  v9 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  if ( *(uint *)(a1 + 48) )
    ErrorHandler();
  if ( 2 * *(ushort *)(v10 + 18) >= 18 )
    ErrorHandler();
  v13 = *(uint *)(v10 + 4);
  *(uint *)v9 = *(uint *)v10;
  *(uint *)(v9 + 4) = v13;
  v14 = (uint *)(v9 + 8);
  v15 = *(uint *)(v10 + 12);
  *v14 = *(uint *)(v10 + 8);
  v14[1] = v15;
  v16 = (uint *)(v9 + 16);
  v17 = *(uint *)(v10 + 20);
  *v16 = *(uint *)(v10 + 16);
  v16[1] = v17;
  v18 = (uint *)(v9 + 24);
  v19 = *(uint *)(v10 + 28);
  *v18 = *(uint *)(v10 + 24);
  v18[1] = v19;
  *(uint *)(v9 + 12) = v9 + 32;
  *(ushort *)(v9 + 58) = *(ushort *)(v10 + 16);
  *(uint *)(v9 + 4) = Function_225ef58;
  Function_201a7e8(*v11, v9 + 32, 1, a7, a8, a9, 2 * *(ushort *)(v10 + 18), 5, 202);
  Function_201ada4_ClearTextBox(v9 + 32, 15);
  Function_200dc48(v9 + 32, 1, 85, 3u);
  *(uint *)(v9 + 48) = Function_200112c((uint *)v9, v12, a5, a6);
  return Function_201a9a4(v9 + 32);
}

//----- (0225EED8) --------------------------------------------------------
int __fastcall Function_225eed8(int a1)
{
  int v1;
  int v2;
  int v4;

  v1 = a1;
  v2 = *(uint *)(a1 + 48);
  if ( !v2 )
    return -2;
  v4 = Function_2001288(v2);
  if ( v4 != -2 && v4 != -1 )
    Function_2005748(0x5DCu);
  else
    Function_225ef70(v1);
  return v4;
}

//----- (0225EF14) --------------------------------------------------------
int __fastcall Function_225ef14(uint *a1, ushort *a2, ushort *a3)
{
  uint *v3;
  int result;
  int v5;

  v3 = a1;
  result = a1[12];
  if ( result )
  {
    Function_2001384(result, a2, a3);
    v3[12] = 0;
    Function_200dc9c((int)(v3 + 8), 1);
    Function_201ad10((int)(v3 + 8));
    Function_201a8fc((int)(v3 + 8));
    v5 = 0;
    v3[15] = 0;
    do
    {
      result = Function_2021cac(v3[20], 0);
      ++v5;
      ++v3;
    }
    while ( v5 < 2 );
  }
  return result;
}

//----- (0225EF58) --------------------------------------------------------
int __fastcall Function_225ef58(int a1, int a2, int a3)
{
  int result;

  if ( !a3 )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (0225EF6C) --------------------------------------------------------
int __fastcall Function_225ef6c(int result, int a2)
{
  *(uint *)(result + 60) = a2;
  return result;
}

//----- (0225EF70) --------------------------------------------------------
uint __fastcall Function_225ef70(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint result;
  uint v6;
  int v7;
  bool v8;
  uchar v9;
  uint v10;
  ushort v11;
  int v12;

  v12 = a4;
  v4 = a1;
  if ( a1[15] )
  {
    Function_20014dc(a1[12], &v11, 0);
    v6 = v4[20];
    if ( v11 )
      Function_2021cac(v6, 1);
    else
      Function_2021cac(v6, 0);
    v7 = *((ushort *)v4 + 29) - 7;
    v9 = __OFSUB__(v11, v7);
    v8 = v11 - v7 < 0;
    v10 = v4[21];
    if ( v8 ^ v9 )
      result = Function_2021cac(v10, 1);
    else
      result = Function_2021cac(v10, 0);
  }
  else
  {
    Function_2021cac(a1[20], 0);
    result = Function_2021cac(v4[21], 0);
  }
  return result;
}

//----- (0225EFD4) --------------------------------------------------------
void Function_225efd4()
{
  ;
}

//----- (0225EFD8) --------------------------------------------------------
int __fastcall Function_225efd8(int a1)
{
  return Function_225f024(a1);
}

//----- (0225EFE0) --------------------------------------------------------
int __fastcall Function_225efe0(int a1, uint **a2, int a3, char a4, char a5, uchar a6, uchar a7)
{
  int v7;

  v7 = a1;
  Function_201a7e8(*a2, a1, 1, a4, a5, a6, a7, 5, 202);
  Function_200dc48(v7, 1, 85, 3u);
  Function_201ada4_ClearTextBox(v7, 15);
  return Function_201a9a4(v7);
}

//----- (0225F024) --------------------------------------------------------
uint __fastcall Function_225f024(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  result = Function_201a7cc(a1);
  if ( result == 1 )
  {
    Function_200dc9c(v1, 1);
    Function_201ad10(v1);
    result = Function_201a8fc(v1);
  }
  return result;
}

//----- (0225F048) --------------------------------------------------------
int __fastcall Function_225f048(int a1)
{
  int v1;

  v1 = a1;
  Function_201d78c(a1, 0);
  return Function_201a9a4(v1);
}

//----- (0225F078) --------------------------------------------------------
int __fastcall Function_225f078(int a1, int a2, int a3, ushort a4, ushort a5)
{
  return Function_201ae78(a1, 15, a2, a3, a4, a5);
}

//----- (0225F098) --------------------------------------------------------
int __fastcall Function_225f098(uint *a1, int a2, uint a3)
{
  uint **v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  uint *v11;
  uint *v12;
  uint *v13;
  int result;

  v3 = (uint **)a1;
  v4 = a2;
  v5 = a3;
  if ( *a1 )
    ErrorHandler();
  *v3 = Function_2013a04(2u, v5);
  v6 = Function_225f288(v4, 1, 67);
  Function_2013a6c(*v3, v6, 0, v7);
  v8 = Function_225f288(v4, 1, 66);
  Function_2013a6c(*v3, v8, 1, v9);
  v10 = v3 + 1;
  *v10 = 0;
  v10[1] = 0;
  v11 = v3 + 3;
  *v11 = 0;
  v11[1] = 0;
  v12 = v3 + 5;
  *v12 = 0x20000;
  v12[1] = 268437504;
  v13 = v3 + 7;
  *v13 = 47;
  v13[1] = 0;
  *((ushort *)v3 + 10) = 2;
  result = (int)*v3;
  v3[1] = *v3;
  return result;
}

//----- (0225F100) --------------------------------------------------------
int *__fastcall Function_225f100(int **a1)
{
  int **v1;
  int *result;

  v1 = a1;
  result = *a1;
  if ( result )
  {
    Function_2013a3c(result);
    result = 0;
    *v1 = 0;
  }
  return result;
}

//----- (0225F114) --------------------------------------------------------
int __fastcall Function_225f114(int a1, uint **a2)
{
  int v2;

  v2 = a1;
  Function_201a7e8(*a2, a1, 1, 4, 4, 0x17u, 0x10u, 5, 94);
  return Function_201ada4_ClearTextBox(v2, 15);
}

//----- (0225F144) --------------------------------------------------------
uint __fastcall Function_225f144(int a1)
{
  return Function_201a8fc(a1);
}

//----- (0225F14C) --------------------------------------------------------
int __fastcall Function_225f14c(int a1)
{
  int v1;

  v1 = a1;
  Function_201d78c(a1, 0);
  Function_200dc48(v1, 1, 85, 3u);
  return Function_201a9a4(v1);
}

//----- (0225F184) --------------------------------------------------------
int __fastcall Function_225f184(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)Function_20382f8();
  v5 = ((int (__fastcall *)(uint, uint))dword_22316F4[0])(*v4, v4[1]);
  v6 = *v4;
  Function_225f2a8(v3);
  Function_225f288(v3, 2, v5);
  return Function_225f14c(v2);
}

//----- (0225F1C0) --------------------------------------------------------
int __fastcall Function_225f1c0(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a2;
  ((void (__fastcall *)(int))dword_223270C[0])(a3);
  Function_225f2a8(v4);
  Function_225f288(v4, 2, 32);
  return Function_225f14c(v3);
}

//----- (0225F1F0) --------------------------------------------------------
int __fastcall Function_225f1f0(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_225f288(a2, 2, 14);
  return Function_225f14c(v2);
}

//----- (0225F208) --------------------------------------------------------
int __fastcall Function_225f208(uint **a1, uint a2)
{
  uint v2;
  int *v3;
  int v4;
  uint **v5;
  int result;
  uint **v7;

  v2 = a2;
  v7 = a1;
  v3 = &dword_226D5AC;
  *a1 = Function_200b368(8u, 64, a2);
  v4 = 0;
  v5 = v7;
  do
  {
    v5[1] = (uint *)LoadFromMsgNARC(1, 26, *v3, v2);
    ++v4;
    ++v3;
    ++v5;
  }
  while ( v4 < 4 );
  v7[5] = (uint *)Function_2023790(480, v2);
  result = Function_2023790(480, v2);
  v7[6] = (uint *)result;
  return result;
}

//----- (0225F25C) --------------------------------------------------------
uint __fastcall Function_225f25c(uint **a1, int a2)
{
  uint **v2;
  int v3;
  uint **v4;
  int v5;
  int v6;

  v2 = a1;
  Function_200b3f0(*a1, a2);
  v3 = 0;
  v4 = v2;
  do
  {
    Function_200b190((ushort *)v4[1]);
    ++v3;
    ++v4;
  }
  while ( v3 < 4 );
  Function_20237bc_FreeMsg((int)v2[5], v5);
  return Function_20237bc_FreeMsg((int)v2[6], v6);
}

//----- (0225F288) --------------------------------------------------------
int __fastcall Function_225f288(int a1, int a2, uint a3)
{
  int v3;

  v3 = a1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 4 * a2 + 4), a3, *(ushort **)(a1 + 24));
  Function_200c388(*(uint **)v3, *(uint *)(v3 + 20), *(uint *)(v3 + 24));
  return *(uint *)(v3 + 20);
}

//----- (0225F2A8) --------------------------------------------------------
uint __fastcall Function_225f2a8(int *a1, int a2, int a3, uint a4, int a5)
{
  return Function_200b60c(*a1, a4, a2, a3, a5, 1);
}

//----- (0225F2C8) --------------------------------------------------------
uint __fastcall Function_225f2c8(int *a1, int a2, uint a3)
{
  return Function_200b498(*a1, a3);
}

//----- (0225F2D8) --------------------------------------------------------
ushort *__fastcall Function_225f2d8(int *a1, uint a2, uint a3)
{
  return Function_200c0b0(*a1, a3, a2);
}

//----- (0225F2E8) --------------------------------------------------------
ushort *__fastcall Function_225f2e8(int *a1, uint a2, uint a3)
{
  return Function_200c0e8(*a1, a3, a2);
}

//----- (0225F2F8) --------------------------------------------------------
ushort *__fastcall Function_225f2f8(int *a1, uint a2, uint a3)
{
  return Function_200c120(*a1, a3, a2);
}

//----- (0225F308) --------------------------------------------------------
ushort *__fastcall Function_225f308(int *a1, uint a2, uint a3)
{
  return Function_200bdd0(*a1, a3, a2);
}

//----- (0225F318) --------------------------------------------------------
ushort *__fastcall Function_225f318(int *a1, int a2, uint a3, uint a4)
{
  return Function_200be08(*a1, a4, a2, a3);
}

//----- (0225F32C) --------------------------------------------------------
uint __fastcall Function_225f32c(int **a1, uint a2, int a3)
{
  return Function_200be48(*a1, a2, a3, (int)Function_200be48);
}

//----- (0225F338) --------------------------------------------------------
uint __fastcall Function_225f338(uint **a1, int a2)
{
  return Function_200c41c(*a1, a2);
}

//----- (0225F344) --------------------------------------------------------
int __fastcall Function_225f344(int result)
{
  *(uint *)(result + 984) = 1;
  return result;
}

//----- (0225F350) --------------------------------------------------------
uint __fastcall Function_225f350(int a1, int a2, int a3, int a4, uint a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint result;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = GetGender(a4);
  *(uint *)(v5 + 332) = LoadFromNARC_8(186, a5, v9, v10);
  Function_225f9bc(v5, v7, *(uint *)(v5 + 332), v8, a5);
  Function_225fa84(v5 + 8, v7, *(uint *)(v5 + 332), a5);
  Function_2260744(v5 + 276, v7, *(uint *)(v5 + 332), a5);
  *(uchar *)(v5 + 2) = 0;
  *(uchar *)(v5 + 1) = 0;
  if ( *(ushort *)(v6 + 6) )
  {
    result = 5;
    *(uchar *)v5 = 5;
  }
  else
  {
    *(uchar *)v5 = 0;
    Function_201975c(4u);
    Function_201ff74(1u, 0);
    Function_201ff74(2u, 0);
    Function_201ff74(4u, 0);
    result = Function_201ff74(8u, 0);
  }
  return result;
}

//----- (0225F3E4) --------------------------------------------------------
uint __fastcall Function_225f3e4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_22607a8(a1 + 276);
  Function_225faa8(v3 + 8, v4, v5);
  Function_225fa10(v3, v5);
  return Call_FS_CloseFile(*(int **)(v3 + 332));
}

//----- (0225F418) --------------------------------------------------------
int __fastcall Function_225f418(uchar *a1, int a2, int a3, int a4)
{
  int v4;
  uchar *v5;
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
  uchar v27;
  short v28;
  int v29;

  v29 = a4;
  v4 = a2;
  v5 = a1;
  v24 = a2 + 60;
  result = 732;
  v7 = *v5;
  v8 = a4;
  v9 = *(uint *)(v4 + 52);
  switch ( -36 )
  {
    case 0:
      result = *((ushort *)v5 + 3);
      if ( result == 1 )
      {
        result = v7 + 1;
        *v5 = v7 + 1;
      }
      return result;
    case 1:
      Function_200f174(4u, 0, 0, 0x7FFF, 4, 1, a4);
      result = *v5 + 1;
      *v5 = result;
      return result;
    case 2:
      result = Function_200f2ac();
      if ( result == 1 )
      {
        v10 = ((int (__fastcall *)(int))dword_222E3BC[0])(v9);
        Function_225f8ac(v5, v24, v4 + 732, v8, v10);
        v5[1] = 4;
        Function_201ff74(1u, 1);
        Function_201ff74(2u, 1);
        Function_201ff74(4u, 1);
        Function_201ff74(0x10u, 1);
        result = *v5 + 1;
        *v5 = result;
      }
      return result;
    case 3:
      Function_200f174(4u, 1, 1, 0x7FFF, 6, 1, a4);
      result = *v5 + 1;
      *v5 = result;
      return result;
    case 4:
      result = Function_200f2ac();
      if ( result == 1 )
      {
        result = *v5 + 1;
        *v5 = result;
      }
      return result;
    case 5:
      if ( a3 != 1 )
      {
        switch ( v5[1] )
        {
          case 1u:
            if ( Function_22607d4(v5 + 276, v24, *((uint *)v5 + 83), a4) == 1 )
              Function_225f344(v4);
            break;
          case 2u:
            Function_225facc(v5 + 8, v4 + 792);
            break;
          case 3u:
            if ( v5[339] && !Function_226c810(*(uint *)(v4 + 988), *((ushort *)v5 + 168), v5[338]) )
            {
              v5[339] = 0;
              Function_2260a68(v5 + 276);
            }
            if ( Function_22607d4(v5 + 276, v24, *((uint *)v5 + 83), v8) == 1 )
            {
              v11 = ((int (__fastcall *)(int))dword_222E338[0])(v9);
              ((void (__fastcall *)(int, int))dword_222EBD4[0])(v9, v11);
              ((void (__fastcall *)(int))dword_222EC50[0])(v9);
              v12 = ((int (__fastcall *)(int))dword_222E338[0])(v9);
              v13 = ((int (__fastcall *)(int, int))dword_222EBA4[0])(v9, v12);
              ((void (__fastcall *)(int, short *, uchar *))dword_222EC04[0])(v13, &v28, &v27);
              v5[339] = 1;
              *((ushort *)v5 + 168) = v28;
              v5[338] = v27;
            }
            break;
          default:
            break;
        }
        result = v5[2];
        if ( v5[2] )
        {
          result = *v5 + 1;
          *v5 = result;
        }
      }
      return result;
    case 6:
      Function_200f174(4u, 1, 0, 0, 3, 1, a4);
      result = *v5 + 1;
      *v5 = result;
      return result;
    case 7:
      result = Function_200f2ac();
      if ( result == 1 )
      {
        switch ( v5[1] )
        {
          case 1u:
          case 3u:
          case 4u:
            Function_225f920(v5, v24);
            break;
          case 2u:
            Function_225f89c(v5, v4 + 792, v24);
            break;
          default:
            break;
        }
        result = *v5 + 1;
        *v5 = result;
      }
      return result;
    case 8:
      switch ( v5[2] )
      {
        case 1u:
        case 4u:
          v14 = ((int (__fastcall *)(int))dword_222E3BC[0])(v9);
          Function_225f8ac(v5, v24, v4 + 732, v8, v14);
          goto LABEL_44;
        case 2u:
          v20 = ((int (__fastcall *)(int))dword_222E3BC[0])(v9);
          v15 = v5[3];
          if ( v15 == ((int (__fastcall *)(int))dword_222E338[0])(v9) )
          {
            v19 = ((int (__fastcall *)(int))dword_222E3BC[0])(v9);
            v21 = 1;
          }
          else
          {
            v19 = ((int (__fastcall *)(int))dword_222E374[0])(v9);
            v21 = 0;
          }
          v23 = ((int (__fastcall *)(int, uint))dword_222E924[0])(v9, v5[3]);
          if ( *((ushort *)v5 + 2) == 1 )
          {
            v22 = ((int (__fastcall *)(int, uint))dword_222E944[0])(v9, v5[3]);
            v16 = ((int (__fastcall *)(int, uint))dword_222E954[0])(v9, v5[3]);
            if ( !v16 )
            {
              Function_225f844(v5, v4 + 792, v24, v4 + 732, v21, v8, v19, v20, v23, 0, 0, 1);
              goto LABEL_44;
            }
          }
          else
          {
            v16 = 0;
            v22 = 0;
          }
          Function_225f844(v5, v4 + 792, v24, v4 + 732, v21, v8, v19, v20, v23, v22, v16, 1);
LABEL_44:
          v5[2] = 0;
          result = *v5 + 1;
          *v5 = result;
          return result;
        case 3u:
          v17 = ((int (__fastcall *)(int))dword_222E338[0])(v9);
          v18 = ((int (__fastcall *)(int, int))dword_222EBA4[0])(v9, v17);
          if ( v18 == -1 )
          {
            ErrorHandler();
            v18 = 0;
          }
          ((void (__fastcall *)(int, int *, int *))dword_222EC04[0])(v18, &v26, &v25);
          Function_225f8f0(v5, v24, v8, v25);
          goto LABEL_44;
        default:
          goto LABEL_44;
      }
    case 9:
      Function_200f174(4u, 1, 1, 0, 3, 1, a4);
      if ( v5[1] == 2 )
        Function_225facc(v5 + 8, v4 + 792);
      result = *v5 + 1;
      *v5 = result;
      return result;
    case 10:
      result = Function_200f2ac();
      if ( result == 1 )
      {
        result = 5;
        *v5 = 5;
      }
      return result;
    default:
      return result;
  }
}

//----- (0225F798) --------------------------------------------------------
int __fastcall Function_225f798(uchar *a1)
{
  return *a1;
}

//----- (0225F79C) --------------------------------------------------------
int __fastcall Function_225f79c(int result, char a2, short a3)
{
  *(uchar *)(result + 2) = 2;
  *(uchar *)(result + 3) = a2;
  *(ushort *)(result + 4) = a3;
  return result;
}

//----- (0225F7A8) --------------------------------------------------------
int __fastcall Function_225f7a8(int a1, int a2, uint a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  if ( a3 >= 0x1B )
    ErrorHandler();
  if ( *(uchar *)(v4 + 1) != 2 )
    ErrorHandler();
  result = *(uchar *)(v4 + 1);
  if ( result == 2 )
    result = Function_225fec4(v4 + 8, v5, *(uint *)(v4 + 332), v6);
  return result;
}

//----- (0225F7E0) --------------------------------------------------------
int __fastcall Function_225f7e0(int result)
{
  if ( *(uchar *)(result + 1) != 1 )
    *(uchar *)(result + 2) = 1;
  return result;
}

//----- (0225F7EC) --------------------------------------------------------
int __fastcall Function_225f7ec(int result)
{
  if ( *(uchar *)(result + 1) != 3 )
    *(uchar *)(result + 2) = 3;
  return result;
}

//----- (0225F7F8) --------------------------------------------------------
int __fastcall Function_225f7f8(int a1)
{
  return *(uchar *)(a1 + 3);
}

//----- (0225F7FC) --------------------------------------------------------
BOOL __fastcall Function_225f7fc(int a1)
{
  BOOL result;

  if ( *(uchar *)(a1 + 2) == 2 )
    result = 1;
  else
    result = *(uchar *)(a1 + 1) == 2;
  return result;
}

//----- (0225F814) --------------------------------------------------------
BOOL __fastcall Function_225f814(int a1)
{
  return !*(uchar *)(a1 + 2) && *(uchar *)(a1 + 1) == 2;
}

//----- (0225F828) --------------------------------------------------------
int __fastcall Function_225f828(int a1)
{
  return Function_225feec(a1 + 8);
}

//----- (0225F834) --------------------------------------------------------
BOOL __fastcall Function_225f834(int a1)
{
  return *(uchar *)(a1 + 2) != 0;
}

//----- (0225F844) --------------------------------------------------------
int __fastcall Function_225f844(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  int v12;
  int v13;
  int v14;
  int v15;
  int result;

  v12 = a1;
  v13 = a4;
  v14 = a2;
  v15 = a3;
  if ( *(uchar *)(a1 + 1) == 2 )
    Function_225f89c(a1, a2, a3);
  Function_225fad0(v12, v14, v12 + 8, v15, v13, a5, *(uint *)(v12 + 332), a6, a7, a8, a9, a10, a11, a12);
  result = 2;
  *(uchar *)(v12 + 1) = 2;
  return result;
}

//----- (0225F89C) --------------------------------------------------------
int __fastcall Function_225f89c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_225fe80(a1 + 8);
  result = 0;
  *(uchar *)(v1 + 1) = 0;
  return result;
}

//----- (0225F8AC) --------------------------------------------------------
int __fastcall Function_225f8ac(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v5 = a1;
  v6 = *(uchar *)(a1 + 1);
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( v6 == 1 || ((v6 + 253) & 0xFFu) <= 1 )
    Function_225f920(v5, a2);
  Function_2260870(v5 + 276, v7, v8, a5, *(uint *)(v5 + 332), v9);
  result = 1;
  *(uchar *)(v5 + 1) = 1;
  return result;
}

//----- (0225F8F0) --------------------------------------------------------
int __fastcall Function_225f8f0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  if ( *(uchar *)(a1 + 1) == 3 )
    Function_225f920(a1, a2);
  Function_2260930(v4 + 276, v5, v6, *(uint *)(v4 + 332));
  result = 3;
  *(uchar *)(v4 + 1) = 3;
  return result;
}

//----- (0225F920) --------------------------------------------------------
int __fastcall Function_225f920(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_22609a8(a1 + 276);
  result = 0;
  *(uchar *)(v1 + 1) = 0;
  return result;
}

//----- (0225F934) --------------------------------------------------------
int __fastcall Function_225f934(int result, short a2)
{
  *(ushort *)(result + 282) = a2;
  return result;
}

//----- (0225F940) --------------------------------------------------------
uint *__fastcall Function_225f940(int a1, int a2, short a3, short a4)
{
  *(ushort *)(a1 + 340) = a3;
  *(ushort *)(a1 + 342) = a4;
  return AddTaskToTaskList3((int)Function_225f95c, a1, 0);
}

//----- (0225F95C) --------------------------------------------------------
int __fastcall Function_225f95c(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  Function_2007130(*(uint *)(a2 + 332), *(ushort *)(a2 + 340), 4u, 0, 0, *(ushort *)(a2 + 342));
  LoadFromNARC_PlFont1(4u, 160, *(ushort *)(v2 + 342));
  v4 = Function_207c944();
  v5 = Function_207c920();
  Call_LoadFromNARC_RLCN(v4, v5, 4u, 352, 96, *(ushort *)(v2 + 342));
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (0225F9BC) --------------------------------------------------------
int __fastcall Function_225f9bc(int a1, uint **a2, int a3, int a4, int a5)
{
  uint **v5;
  int v6;

  v5 = a2;
  v6 = a3;
  if ( a4 )
    Function_2007130(a3, 0x57u, 4u, 0, 0, a5);
  else
    Function_2007130(a3, 0x56u, 4u, 0, 0, a5);
  Function_20070e8(v6, 0x36u, *v5, 4u, 0, 0, 0, a5);
  return LoadFromNARC_PlFont1(4u, 160, a5);
}

//----- (0225FA10) --------------------------------------------------------
void Function_225fa10()
{
  ;
}

//----- (0225FA14) --------------------------------------------------------
uint __fastcall Function_225fa14(int *a1, int a2, uint a3, int a4, short a5, int a6)
{
  int *v6;
  uchar v7;
  int v8;
  ushort *v9;
  int v10;
  int i;
  ushort *v13;
  int v14;

  v14 = a4;
  v6 = a1;
  v7 = a4;
  v8 = Function_20071d0(a2, a3, 0, &v13, a6);
  v9 = v13 + 6;
  v10 = *((uint *)v13 + 2) >> 1;
  for ( i = 0; i < v10; ++v9 )
  {
    ++i;
    *v9 += a5;
  }
  Function_20198c0(*v6, v7, (int)(v13 + 6), 0, 0, (uint)*v13 << 21 >> 24, (uint)v13[1] << 21 >> 24);
  Function_201c3c0(*v6, v7);
  return free(v8);
}

//----- (0225FA84) --------------------------------------------------------
int __fastcall Function_225fa84(int a1, uint **a2)
{
  uchar *v2;
  uint **v3;
  int v4;
  int v5;
  int result;

  v2 = (uchar *)dword_226D68C;
  v3 = a2;
  v4 = 0;
  v5 = a1 + 4;
  do
  {
    result = Function_201a8d4(*v3, v5, v2);
    ++v4;
    v2 += 8;
    v5 += 16;
  }
  while ( v4 < 5 );
  return result;
}

//----- (0225FAA8) --------------------------------------------------------
uint __fastcall Function_225faa8(int a1)
{
  int v1;
  int v2;
  int v3;
  uint result;

  v1 = a1;
  if ( *(uint *)(a1 + 84) )
    Function_225fe80(a1);
  v2 = 0;
  v3 = v1 + 4;
  do
  {
    result = Function_201a8fc(v3);
    ++v2;
    v3 += 16;
  }
  while ( v2 < 5 );
  return result;
}

//----- (0225FACC) --------------------------------------------------------
void Function_225facc()
{
  ;
}

//----- (0225FAD0) --------------------------------------------------------
uint __fastcall Function_225fad0(int a1, int a2, uint *a3, int *a4, uint **a5, int a6, int a7, uint a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
  uint *v14;
  int *v15;
  int v16;
  int v17;
  int v18;
  int v20;
  int *v21;

  v20 = a1;
  v14 = a3;
  v15 = a4;
  Function_225f338(a5, a2);
  if ( ((int (__fastcall *)(int))dword_222E7C8[0])(a9) )
  {
    if ( a11 )
      Function_225f940(v20, (int)v15, 88, a8);
    else
      Function_225f940(v20, (int)v15, 87, a8);
  }
  else if ( a11 )
  {
    Function_225f940(v20, (int)v15, 88, a8);
  }
  else
  {
    Function_225f940(v20, (int)v15, 86, a8);
  }
  Function_2019f04(*v15, 4, 0);
  Function_2019f04(*v15, 5, 0);
  Function_2019f04(*v15, 6, 0);
  Function_22602c0(v14);
  Function_225fa14(v15, a7, 0x5Cu, 4, 0, a8);
  v21 = AllocTrainerData(a8);
  ((void (__fastcall *)(int, int *, uint))dword_222E63C[1])(a9, v21, a8);
  Function_22602dc(v14, a5);
  v16 = GetSecretTrainerID((int)v21);
  Function_225f2a8((int *)a5, v16, 5, 0, 2);
  Function_2260314(v14, a5);
  Function_22602dc(v14, a5);
  Function_2260370(v14, a5, v21);
  Function_2260314(v14, a5);
  Function_2260360(v14, 0);
  Function_22602dc(v14, a5);
  if ( ((int (__fastcall *)(int))dword_222E880[0])(a9) )
    Function_2260380(v14, a5, a9);
  Function_22602dc(v14, a5);
  Function_2260360(v14, 1);
  if ( a12 )
  {
    *v14 = 1;
    Function_2260370(v14, a5, v21);
    Function_22602dc(v14, a5);
    Function_22603b0(v14, a5, a13);
    Function_22602dc(v14, a5);
    Function_22602dc(v14, a5);
    Function_22602dc(v14, a5);
    Function_22602dc(v14, a5);
    Function_2260360(v14, 4);
  }
  else
  {
    *v14 = 0;
    Function_22602dc(v14, a5);
    Function_2260360(v14, 4);
    Function_22603cc(v14, v15, a7, a8, a9, a10);
  }
  v17 = ((int (__fastcall *)(int))dword_222E8C4)(a9);
  Function_225fef0(v14, v15, a7, a8, v17, a14);
  if ( a6 == 1 )
  {
    if ( ((int (__fastcall *)(int))dword_222E7C8[0])(a9) == 1 )
      v18 = 97;
    else
      v18 = 0;
  }
  else
  {
    v18 = ((int (__fastcall *)(int))dword_222E858[0])(a9);
  }
  Function_2260080(v14, v15, a7, a8, v18);
  Function_225fda0(v20, v14, v15, a8, a9);
  return free((int)v21);
}

//----- (0225FDA0) --------------------------------------------------------
int __fastcall Function_225fda0(int a1, int a2, uint **a3, int a4, int a5)
{
  int *v5;
  uint **v6;
  uchar v7;
  uint v8;
  int v9;
  int v10;
  uint *v11;
  char v12;
  int result;
  int v14;
  int *v15;
  int v16;
  int v17;

  v5 = dword_226D624;
  v16 = 0;
  v6 = a3;
  v14 = a4;
  v15 = &dword_226D590;
  v7 = 2;
  do
  {
    if ( ((int (__fastcall *)(int, int))dword_222E8E8[0])(a5, v16) & 0xFFFF )
    {
      v8 = ((ushort (*)(void))dword_22316A0[18])();
      v9 = Function_207c944();
      v10 = Function_207c908(v8);
      v11 = Function_2006fe8_LoadFromNARC_UncompressLZ8(v9, v10, 1, v14, 1);
      NNS_G2dGetUnpackedPaletteData((int)v11, &v17);
      Function_201958c(*v6, 6u, *(int **)(v17 + 20), 256, *(ushort *)v15);
      free((int)v11);
      Function_20198e8((int)*v6, 6, 26, v7, 4u, 2u, (int)v5, 0, 0, 4u, 2u);
      v12 = Function_207c92c(v8);
      Function_2019e2c((int)*v6, 6, 0x1Au, v7, 4u, 2u, v12 + 11);
      Function_201c3c0((int)*v6, 6);
    }
    v5 += 4;
    v15 = (int *)((char *)v15 + 2);
    v7 += 2;
    result = v16 + 1;
    v16 = result;
  }
  while ( result < 2 );
  return result;
}

//----- (0225FE80) --------------------------------------------------------
int __fastcall Function_225fe80(uint *a1, int a2, uint **a3)
{
  uint *v3;
  uint **v4;

  v3 = a1;
  v4 = a3;
  if ( *a1 == 1 )
    *a1 = 0;
  else
    Function_226068c();
  Function_2260048(v3, v4);
  Function_2260228(v3, v4);
  Function_2019ebc(*v4, 4u);
  Function_2019ebc(*v4, 5u);
  return Function_2019ebc(*v4, 6u);
}

//----- (0225FEC4) --------------------------------------------------------
int __fastcall Function_225fec4(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  Function_2260048(a1, a2);
  return Function_225fef0(v5, v6, v7, v8, a5, 1);
}

//----- (0225FEEC) --------------------------------------------------------
int __fastcall Function_225feec(int a1)
{
  return *(uint *)a1;
}

//----- (0225FEF0) --------------------------------------------------------
uint __fastcall Function_225fef0(int a1, uint *a2, int a3, uint a4, uint a5, int a6)
{
  int v6;
  uint *v7;
  uint v8;
  int v9;
  uint v10;
  int *v11;
  int *v12;
  int v13;
  int v15;
  uint v16;
  int v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint v24;
  char v25;

  v6 = a1;
  v7 = a2;
  v8 = a4;
  v15 = a3;
  if ( a5 >= 0x1B )
    ErrorHandler();
  if ( *(uint *)(v6 + 84) )
    ErrorHandler();
  v9 = u32_div_f(a5, 3);
  u32_div_f(a5, 3);
  v16 = v10;
  v11 = Function_2009a4c(v7[76], v15, 3 * v9 + 61, 0, 100, 2, v8);
  *(uint *)(v6 + 88) = v11;
  if ( !Function_200a3dc(v11) )
    ErrorHandler();
  Function_2009d4c(*(int **)(v6 + 88));
  v12 = Function_2009b04(v7[77], v15, 0x59u, 0, 100, 2, 3, v8);
  *(uint *)(v6 + 92) = v12;
  if ( !Function_200a640(v12) )
    ErrorHandler();
  Function_2009d4c(*(int **)(v6 + 92));
  *(uint *)(v6 + 96) = Function_2009bc4(v7[78], v15, 3 * v9 + 60, 0, 100, 2u, v8);
  *(uint *)(v6 + 100) = Function_2009bc4(v7[79], v15, 3 * v9 + 59, 0, 100, 3u, v8);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  Function_20093b4((int)&v25, 100, 100, 100, 100, -1, -1, 0, 0, v7[76], v7[77], v7[78], v7[79], 0, 0);
  v17 = v7[1];
  v18 = &v25;
  v22 = 16;
  v23 = 2;
  v19 = 851968;
  v20 = 1671168;
  v24 = v8;
  v13 = Function_2021b90(&v17);
  *(uint *)(v6 + 84) = v13;
  Function_2021d6c(v13, v16);
  return Function_2021cac(*(uint *)(v6 + 84), a6);
}

//----- (02260048) --------------------------------------------------------
int __fastcall Function_2260048(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  Function_2021bd4(*(uint *)(a1 + 84));
  *(uint *)(v2 + 84) = 0;
  Function_200a4e4(*(int **)(v2 + 88));
  Function_200a6dc(*(int **)(v2 + 92));
  v4 = 0;
  do
  {
    result = Function_2009d68(*(int **)(v3 + 304), *(uint ***)(v2 + 88));
    ++v4;
    v2 += 4;
    v3 += 4;
  }
  while ( v4 < 4 );
  return result;
}

//----- (02260080) --------------------------------------------------------
int __fastcall Function_2260080(int a1, uint *a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  uint *v7;
  ushort *v8;
  uint v9;
  int *v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int result;
  int v20;
  int v21;
  int v22;
  int v23;
  char *v24;
  uint v25;
  uint v26;
  int v27;
  int v28;
  int v29;
  int v30;
  char v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;

  v6 = a1;
  v7 = a2;
  v20 = a4;
  if ( *(uint *)(a1 + 104) )
    ErrorHandler();
  v8 = (ushort *)&word_226D724;
  v9 = 0;
  do
  {
    if ( a5 == *v8 )
    {
      v22 = v8[1];
      v21 = v8[2];
      v5 = v8[3];
    }
    ++v9;
    v8 += 4;
  }
  while ( v9 < 0x12 );
  Function_2076aac(v22, 2, &v32);
  v10 = Function_200985c(v7[76], v32, v33, 0, 101, 2, v20);
  *(uint *)(v6 + 108) = v10;
  if ( !Function_200a3dc(v10) )
    ErrorHandler();
  v11 = Function_20098b8(v7[77], v32, v34, 0, 101, 2, 1, v20);
  *(uint *)(v6 + 112) = v11;
  v12 = Function_2009e34((int)v11);
  Function_2260268(v12);
  if ( !Function_200a640(*(int **)(v6 + 112)) )
    ErrorHandler();
  Function_2009d4c(*(int **)(v6 + 112));
  *(uint *)(v6 + 116) = Function_2009918(v7[78], v32, v35, 0, 101, 2u, v20);
  *(uint *)(v6 + 120) = Function_2009918(v7[79], v32, v36, 0, 101, 3u, v20);
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  Function_20093b4((int)&v31, 101, 101, 101, 101, -1, -1, 1, 3, v7[76], v7[77], v7[78], v7[79], 0, 0);
  v23 = v7[1];
  v24 = &v31;
  v28 = 32;
  v29 = 2;
  v30 = v20;
  if ( v21 )
  {
    v13 = fflt(v21 << 12);
    v14 = fadd(0x3F000000u, v13);
  }
  else
  {
    v15 = fflt(0);
    v14 = fsub(v15, 1056964608);
  }
  v25 = ffix(v14);
  if ( v5 )
  {
    v16 = fflt(v5 << 12);
    v17 = fadd(0x3F000000u, v16);
  }
  else
  {
    v18 = fflt(0);
    v17 = fsub(v18, 1056964608);
  }
  v26 = ffix(v17) + 0x100000;
  result = Function_2021b90(&v23);
  *(uint *)(v6 + 104) = result;
  return result;
}

//----- (02260228) --------------------------------------------------------
int __fastcall Function_2260228(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = Function_2021f98(*(uint *)(a1 + 104));
  Function_201ed1c(v4);
  Function_2021bd4(*(uint *)(v2 + 104));
  *(uint *)(v2 + 104) = 0;
  Function_200a4e4(*(int **)(v2 + 108));
  Function_200a6dc(*(int **)(v2 + 112));
  v5 = 0;
  do
  {
    result = Function_2009d68(*(int **)(v3 + 304), *(uint ***)(v2 + 108));
    ++v5;
    v2 += 4;
    v3 += 4;
  }
  while ( v5 < 4 );
  return result;
}

//----- (02260268) --------------------------------------------------------
int __fastcall Function_2260268(int result)
{
  ushort *v1;
  int v2;
  int i;
  int v4;

  v1 = *(ushort **)(result + 12);
  v2 = *(uint *)(result + 8) >> 1;
  for ( i = 0; i < v2; ++v1 )
  {
    ++i;
    v4 = (29 * (((int)(ushort)*v1 >> 10) & 0x1F)
        + 76 * (*v1 & 0x1F)
        + 151 * (((int)(ushort)*v1 >> 5) & 0x1F)) >> 8;
    result = (v4 << 7 >> 8 << 10) | 32 * (200 * v4 >> 8) | (v4 << 8 >> 8);
    *v1 = result;
  }
  return result;
}

//----- (022602C0) --------------------------------------------------------
int __fastcall Function_22602c0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1 + 4;
  do
  {
    result = Function_201ada4_ClearTextBox(v2, 0);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 5 );
  return result;
}

//----- (022602DC) --------------------------------------------------------
int __fastcall Function_22602dc(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;

  v4 = a1;
  v5 = a3;
  Function_225f288(a2, 1, a4);
  return Function_201d78c(v4 + 4 + 16 * v5, 0);
}

//----- (02260314) --------------------------------------------------------
int __fastcall Function_2260314(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = a3;
  v6 = Function_225f288(a2, 1, a4);
  Function_2002d7c(0, v6, 0);
  return Function_201d78c(v4 + 4 + 16 * v5, 0);
}

//----- (02260360) --------------------------------------------------------
int __fastcall Function_2260360(int a1, int a2)
{
  return Function_201a9a4(a1 + 4 + 16 * a2);
}

//----- (02260370) --------------------------------------------------------
uint __fastcall Function_2260370(int a1, int *a2, int a3)
{
  return Function_225f2c8(a2, a3, 0);
}

//----- (02260380) --------------------------------------------------------
ushort *__fastcall Function_2260380(int a1, int *a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  uint v6;

  v3 = a3;
  v4 = a2;
  v5 = ((int (__fastcall *)(int))dword_222E880[0])(a3);
  v6 = ((int (__fastcall *)(int))dword_222E8A4[0])(v3);
  Function_225f308(v4, v5, 0);
  return Function_225f318(v4, v5, v6, 1u);
}

//----- (022603B0) --------------------------------------------------------
uint __fastcall Function_22603b0(int a1, int **a2, ushort *a3)
{
  int **v3;
  ushort *v4;
  int v5;
  uint result;

  v3 = a2;
  v4 = a3;
  v5 = 0;
  do
  {
    result = Function_225f32c(v3, v5++, *v4);
    ++v4;
  }
  while ( v5 < 4 );
  return result;
}

//----- (022603CC) --------------------------------------------------------
uint __fastcall Function_22603cc(int a1, uint *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  uint *v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  uchar *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint v26;
  int v27;
  int v29;
  uint v30;
  int v31;
  int *v32;
  int *v33;
  int *v34;
  int v35;
  int *v36;
  int v37;
  int *v38;
  char v39;
  int v40;
  char *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  uint v47;
  int v48;

  v48 = a4;
  v6 = a1;
  v7 = a2;
  v29 = a3;
  v30 = a4;
  v38 = LoadFromNARC_8(192, a4, a3, a4);
  v35 = ((int (__fastcall *)(int))dword_222E798[0])(a6);
  v37 = ((int (__fastcall *)(int))dword_222E7C8[0])(a6);
  v8 = 0;
  v34 = dword_226D60C;
  v9 = v6;
  v33 = dword_226D59C;
  v32 = dword_226D594;
  do
  {
    if ( v8 == 2 )
    {
      if ( v37 == 1 )
      {
        *(uint *)(v9 + 172) = 0;
        *(uint *)(v9 + 236) = 0;
        *(uint *)(v9 + 252) = 0;
        goto LABEL_14;
      }
    }
    else if ( v8 == 3 && !v37 )
    {
      *(uint *)(v9 + 172) = 0;
      *(uint *)(v9 + 236) = 0;
      *(uint *)(v9 + 252) = 0;
      goto LABEL_14;
    }
    if ( *(ushort *)v34 == 192 )
    {
      v31 = (int)v38;
      v10 = Function_2009b04(
              v7[77],
              (int)v38,
              *((ushort *)v34 + 1),
              0,
              v8 + 150,
              2,
              *((ushort *)v34 + 2),
              v30);
    }
    else
    {
      v31 = v29;
      v10 = Function_2009b04(
              v7[77],
              v29,
              *((ushort *)v34 + 1),
              0,
              v8 + 150,
              2,
              *((ushort *)v34 + 2),
              v30);
    }
    *(uint *)(v9 + 172) = v10;
    if ( !Function_200a640(*(int **)(v9 + 172)) )
      ErrorHandler();
    Function_2009d4c(*(int **)(v9 + 172));
    *(uint *)(v9 + 236) = Function_2009bc4(v7[78], v31, *(ushort *)v33, 0, v8 + 150, 2u, v30);
    *(uint *)(v9 + 252) = Function_2009bc4(v7[79], v31, *(ushort *)v32, 0, v8 + 150, 3u, v30);
LABEL_14:
    ++v8;
    v34 = (int *)((char *)v34 + 6);
    v9 += 4;
    v33 = (int *)((char *)v33 + 2);
    v32 = (int *)((char *)v32 + 2);
  }
  while ( v8 < 4 );
  v11 = 0;
  v36 = dword_226D7B4;
  do
  {
    v12 = ((int (__fastcall *)(int, int))dword_222E728[0])(a5, v11);
    v13 = ((int (__fastcall *)(int, int))dword_222E760[0])(a5, v11);
    if ( v12 == 24 )
    {
      *(uint *)(v6 + 188) = 0;
      *(uint *)(v6 + 124) = 0;
    }
    else
    {
      v14 = (uchar *)Function_2260728(v12, v13, v35, v37);
      if ( *v14 == 1 )
        v15 = v29;
      else
        v15 = (int)v38;
      *(uint *)(v6 + 188) = Function_2009a4c(v7[76], v15, *((ushort *)v14 + 1), 0, v11 + 150, 2, v30);
      if ( !Function_200a3dc(*(int **)(v6 + 188)) )
        ErrorHandler();
      Function_2009d4c(*(int **)(v6 + 188));
      Function_20093b4(
        (int)&v39,
        v11 + 150,
        *v14 + 150,
        *v14 + 150,
        *v14 + 150,
        -1,
        -1,
        0,
        0,
        v7[76],
        v7[77],
        v7[78],
        v7[79],
        0,
        0);
      v40 = v7[1];
      v41 = &v39;
      v45 = 0;
      v46 = 2;
      v47 = v30;
      v16 = v36[1];
      v42 = *v36;
      v43 = v16;
      v44 = v36[2];
      v17 = *((short *)v14 + 2);
      if ( v17 <= 0 )
      {
        v20 = fflt(v17 << 12);
        v19 = fsub(v20, 1056964608);
      }
      else
      {
        v18 = fflt(v17 << 12);
        v19 = fadd(0x3F000000u, v18);
      }
      v21 = ffix(v19);
      v42 += v21;
      v22 = *((short *)v14 + 3);
      if ( v22 <= 0 )
      {
        v25 = fflt(v22 << 12);
        v24 = fsub(v25, 1056964608);
      }
      else
      {
        v23 = fflt(v22 << 12);
        v24 = fadd(0x3F000000u, v23);
      }
      v26 = ffix(v24);
      v43 += v26;
      v27 = Function_2021b90(&v40);
      *(uint *)(v6 + 124) = v27;
      Function_2021f24(v27, v14[1]);
    }
    ++v11;
    v6 += 4;
    v36 += 3;
  }
  while ( v11 < 12 );
  return Call_FS_CloseFile(v38);
}

//----- (0226068C) --------------------------------------------------------
int *__fastcall Function_226068c(int a1, int **a2)
{
  int v2;
  int **v3;
  int v4;
  int v5;
  int v6;
  int *result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    if ( *(uint *)(v5 + 188) )
    {
      Function_2021bd4(*(uint *)(v5 + 124));
      *(uint *)(v5 + 124) = 0;
      Function_200a4e4(*(int **)(v5 + 188));
      Function_2009d68(v3[76], *(uint ***)(v5 + 188));
      *(uint *)(v5 + 188) = 0;
    }
    ++v4;
    v5 += 4;
  }
  while ( v4 < 12 );
  v6 = 0;
  do
  {
    result = *(int **)(v2 + 172);
    if ( result )
    {
      Function_200a6dc(result);
      Function_2009d68(v3[77], *(uint ***)(v2 + 172));
      Function_2009d68(v3[78], *(uint ***)(v2 + 236));
      Function_2009d68(v3[79], *(uint ***)(v2 + 252));
      result = (int *)(v2 + 172);
      *(uint *)(v2 + 172) = 0;
    }
    ++v6;
    v2 += 4;
  }
  while ( v6 < 4 );
  return result;
}

//----- (02260728) --------------------------------------------------------
int *__fastcall Function_2260728(int a1, int a2, int a3, int a4)
{
  int *result;

  if ( a2 == a3 )
    result = &dword_226D5FC[2 * a4];
  else
    result = &dword_226D844[2 * a1];
  return result;
}

//----- (02260744) --------------------------------------------------------
int __fastcall Function_2260744(int a1, uint **a2, int a3, uint a4)
{
  uint v4;
  int v5;
  int v6;
  uint *v7;
  int result;
  int v9;
  int v10;

  v9 = a1;
  v10 = a3;
  v4 = a4;
  Function_201a8d4(*a2, a1 + 12, (uchar *)dword_226D5A4);
  v5 = v9;
  v6 = 0;
  v7 = (uint *)(v9 + 44);
  do
  {
    *(uint *)(v5 + 32) = Function_20071d0(v10, v6++ + 56, 0, v7, v4);
    ++v7;
    v5 += 4;
  }
  while ( v6 < 3 );
  *(uint *)(v9 + 28) = Function_2023fcc((int)&dword_226D58C, 1u, (int)Function_2260a50, v9, v4);
  result = v9;
  *(ushort *)(v9 + 6) = 1;
  return result;
}

//----- (022607A8) --------------------------------------------------------
int __fastcall Function_22607a8(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  Function_2024034(*(uint *)(a1 + 28));
  Function_201a8fc(v1 + 12);
  v2 = 0;
  v3 = v1;
  do
  {
    free(*(uint *)(v3 + 32));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 3 );
  result = 0;
  *(uchar *)(v1 + 2) = 0;
  return result;
}

//----- (022607D4) --------------------------------------------------------
int __fastcall Function_22607d4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v2 = a1;
  v6 = 0;
  v3 = a2;
  if ( *(ushort *)(a1 + 6) )
    *(uchar *)(a1 + 3) = 1;
  else
    Function_202404c(*(int **)(a1 + 28));
  if ( *(uchar *)(v2 + 2) == 1 && !*(ushort *)v2 )
  {
    *(uchar *)(v2 + 2) = 0;
    Function_22609d4(v2, v3);
  }
  v4 = *(uchar *)(v2 + 3);
  if ( v4 != *(ushort *)(v2 + 4) )
  {
    *(ushort *)(v2 + 4) = v4;
    Function_22609d4(v2, v3);
    if ( !*(uchar *)(v2 + 2) && *(uchar *)(v2 + 3) == 2 )
    {
      *(uchar *)(v2 + 2) = 1;
      v6 = 1;
      *(ushort *)v2 = 1;
    }
  }
  return v6;
}

//----- (02260870) --------------------------------------------------------
int __fastcall Function_2260870(int a1, uint **a2, int a3, int a4, int a5, int a6)
{
  int v6;
  uint **v7;
  int v8;
  int v9;

  v6 = a1;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  Function_200710c(a5, 0x37u, *a2, 4u, 0, 0, 0, a6);
  *(ushort *)(v6 + 8) = 0;
  *(ushort *)(v6 + 10) = ((int (__fastcall *)(int))dword_222E8C4)(v8);
  Function_20070e8(a5, *(ushort *)(v6 + 10), *v7, 6u, 320, 0, 0, a6);
  Function_225fa14((int *)v7, a5, *(ushort *)(v6 + 10) + 27, 6, 320, a6);
  Function_225f288(v9, 1, 0x3Fu);
  Function_201ada4_ClearTextBox(v6 + 12, 0);
  Function_201d78c(v6 + 12, 0);
  return Function_22609d4(v6, v7);
}

//----- (02260930) --------------------------------------------------------
int __fastcall Function_2260930(int a1, uint **a2, uint a3, int a4, int a5)
{
  short v5;
  int v6;
  uint **v7;
  int v9;

  v5 = a3;
  v6 = a1;
  v7 = a2;
  v9 = a4;
  if ( a3 >= 3 )
    ErrorHandler();
  Function_200710c(v9, 0x37u, *v7, 4u, 0, 0, 0, a5);
  *(ushort *)(v6 + 8) = 1;
  *(ushort *)(v6 + 10) = v5;
  Function_20070e8(v9, *(ushort *)(v6 + 10) + 93, *v7, 6u, 320, 0, 0, a5);
  return Function_22609d4(v6, v7);
}

//----- (022609A8) --------------------------------------------------------
void __fastcall Function_22609a8(int a1, uint **a2)
{
  uint **v2;

  v2 = a2;
  Function_2019ebc(*a2, 4u);
  Function_2019ebc(*v2, 5u);
  Function_2019ebc(*v2, 6u);
  Function_2019184((int)*v2, 6u, 3u, 0);
}

//----- (022609D4) --------------------------------------------------------
int __fastcall Function_22609d4(int a1, int *a2, int a3, int a4, int a5)
{
  int v5;
  int *v6;
  int v7;
  int v8;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  Function_20198e8(*a2, 5, 0, 3, 0x20u, 0x15u, *(uint *)(a1 + 4 * a3 + 44) + 12, 0, 3u, 0x20u, 0x20u);
  Function_201c3c0(*v6, 5);
  if ( *(ushort *)(v5 + 8) == 1 )
    Function_225fa14(
      v6,
      v8,
      *((uchar *)&dword_226D584 + v7) + 2 * *(ushort *)(v5 + 10) + 96,
      6,
      320,
      a5);
  return Function_201c63c(*v6, 6, 3u, *((char *)&dword_226D588 + v7));
}

//----- (02260A50) --------------------------------------------------------
int __fastcall Function_2260a50(int a1, char a2, int a3)
{
  int result;

  *(uchar *)(a3 + 3) = a2;
  result = *(uchar *)(a3 + 3);
  if ( *(uchar *)(a3 + 3) )
  {
    if ( result == 3 )
    {
      result = 1;
      *(uchar *)(a3 + 3) = 1;
    }
  }
  else
  {
    result = 2;
    *(uchar *)(a3 + 3) = 2;
  }
  return result;
}

//----- (02260A68) --------------------------------------------------------
ushort *__fastcall Function_2260a68(ushort *result)
{
  *result = 0;
  return result;
}

//----- (02260A70) --------------------------------------------------------
int *__fastcall Function_2260a70(uint a1)
{
  uint v1;
  int *v2;
  int *v3;
  int v4;

  v1 = a1;
  v2 = (int *)malloc(a1, 20);
  v3 = v2;
  v4 = 20;
  do
  {
    *(uchar *)v3 = 0;
    v3 = (int *)((char *)v3 + 1);
    --v4;
  }
  while ( v4 );
  *v2 = Function_20203ac(v1);
  Function_20206d0(v2 + 2, 2731713, dword_226D904, 1473, 0, 1, *v2);
  Function_20203d4(*v2);
  Function_20206bc(614400, 3686400, *v2);
  return v2;
}

//----- (02260AD4) --------------------------------------------------------
uint __fastcall Function_2260ad4(int *a1)
{
  int *v1;

  v1 = a1;
  Function_20203e0();
  Call_free5(*v1);
  return free((int)v1);
}

//----- (02260AEC) --------------------------------------------------------
int *__fastcall Function_2260aec(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 4);
  if ( v2 )
  {
    Function_225d054(v2);
    *(uint *)(v1 + 8) += 0x8000;
    *(uint *)(v1 + 16) -= 0x20000;
  }
  return Function_20203ec();
}

//----- (02260B18) --------------------------------------------------------
uint *__fastcall Function_2260b18(uint *result, int a2, int a3, int a4)
{
  result[2] = a2;
  result[3] = a3;
  result[4] = a4;
  return result;
}

//----- (02260B20) --------------------------------------------------------
uint *__fastcall Function_2260b20(uint *result, int a2, int a3, int a4)
{
  result[2] = a2 + 0x8000;
  result[3] = a3;
  result[4] = a4 - 0x20000;
  return result;
}

//----- (02260B38) --------------------------------------------------------
int __fastcall Function_2260b38(int result, int a2)
{
  *(uint *)(result + 4) = a2;
  return result;
}

//----- (02260B3C) --------------------------------------------------------
int __fastcall Function_2260b3c(int result)
{
  *(uint *)(result + 4) = 0;
  return result;
}

//----- (02260B44) --------------------------------------------------------
int __fastcall Function_2260b44(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = malloc(a3, 1188);
  Call_FillMemWithValue((int *)v6, 0, 0x4A4u);
  *(uint *)(v6 + 284) = malloc(v5, 180 * v4);
  *(uint *)(v6 + 288) = malloc(v5, 228 * v3);
  Call_FillMemWithValue(*(int **)(v6 + 284), 0, 180 * v4);
  Call_FillMemWithValue(*(int **)(v6 + 288), 0, 228 * v3);
  *(uchar *)(v6 + 292) = v4;
  *(uchar *)(v6 + 293) = v3;
  return v6;
}

//----- (02260BB8) --------------------------------------------------------
uint __fastcall Function_2260bb8(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 296) )
    Function_2260d80();
  free(*(uint *)(v1 + 284));
  free(*(uint *)(v1 + 288));
  return free(v1);
}

//----- (02260BE8) --------------------------------------------------------
int __fastcall Function_2260be8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v1 = a1;
  Function_22616b0();
  v2 = 0;
  if ( (int)*(uchar *)(v1 + 292) > 0 )
  {
    v3 = 0;
    do
    {
      Function_2261968(*(uint *)(v1 + 284) + v3, v1 + 452);
      ++v2;
      v3 += 180;
    }
    while ( v2 < *(uchar *)(v1 + 292) );
  }
  v4 = 0;
  result = *(uchar *)(v1 + 293);
  if ( result > 0 )
  {
    v6 = 0;
    do
    {
      Function_2261c60(v1, *(uint *)(v1 + 288) + v6);
      result = *(uchar *)(v1 + 293);
      ++v4;
      v6 += 228;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (02260C50) --------------------------------------------------------
int __fastcall Function_2260c50(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  if ( !*(uint *)(v1 + 288) )
    ErrorHandler();
  if ( !*(uint *)(v1 + 284) )
    ErrorHandler();
  Function_22616fc(v1, v1 + 300);
  v2 = 0;
  if ( (int)*(uchar *)(v1 + 293) > 0 )
  {
    v3 = 0;
    do
    {
      Function_2261c04(v1 + 668, *(uint *)(v1 + 288) + v3);
      ++v2;
      v3 += 228;
    }
    while ( v2 < *(uchar *)(v1 + 293) );
  }
  result = *(uchar *)(v1 + 292);
  v5 = 0;
  if ( result > 0 )
  {
    v6 = 0;
    do
    {
      Function_22619f4(*(uint *)(v1 + 284) + v6, v1 + 452);
      result = *(uchar *)(v1 + 292);
      ++v5;
      v6 += 180;
    }
    while ( v5 < result );
  }
  return result;
}

//----- (02260CE0) --------------------------------------------------------
void Function_2260ce0()
{
  ;
}

//----- (02260CE4) --------------------------------------------------------
int __fastcall Function_2260ce4(int a1, int a2, int a3, uint a4, uint a5)
{
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int result;

  v5 = a1;
  v6 = a4;
  *(uchar *)(a1 + 295) = a3;
  *(uchar *)(a1 + 294) = a2;
  v7 = Function_22613f4(a2, a3, a4);
  v10 = LoadFromNARC_8(175, v6, v8, v9);
  Function_20182cc((uint *)(v5 + 1172), a5, 4);
  Function_22614f4(v5 + 300, v10, v7, a5, v5 + 1172);
  Function_2261b24(v5 + 668, v10, v5 + 1172, v7, a5);
  Function_226174c(v5 + 452, v10, v5 + 1172, v7);
  Call_FS_CloseFile(v10);
  Function_2261418(v7);
  Function_22615e8(v5, v5 + 300);
  result = 296;
  *(uint *)(v5 + 296) = 1;
  return result;
}

//----- (02260D80) --------------------------------------------------------
int __fastcall Function_2260d80(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2261664();
  Function_22615a4(v1 + 300, v1 + 1172);
  Function_2261bb4(v1 + 668, v1 + 1172);
  Function_22618c8(v1 + 452, v1 + 1172);
  result = 296;
  *(uint *)(v1 + 296) = 0;
  return result;
}

//----- (02260DC8) --------------------------------------------------------
uint __fastcall Function_2260dc8(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  result = *(uint *)(a1 + 448);
  if ( result == 1 )
  {
    result = *(uint *)(v1 + 260);
    if ( !result )
    {
      *(uint *)(v1 + 260) = 1;
      result = Function_201727c(v1 + 4, v1 + 412);
    }
  }
  return result;
}

//----- (02260DF4) --------------------------------------------------------
int __fastcall Function_2260df4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 448);
  if ( result == 1 )
  {
    result = *(uint *)(v1 + 260);
    if ( result == 1 )
    {
      Function_2017288((int *)(v1 + 4), v1 + 412);
      result = 260;
      *(uint *)(v1 + 260) = 0;
    }
  }
  return result;
}

//----- (02260E20) --------------------------------------------------------
int __fastcall Function_2260e20(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  v9 = a4;
  if ( a2 > 2 )
    ErrorHandler();
  if ( v6 > 3 )
    ErrorHandler();
  v7 = Function_2261718(v5);
  Function_2017258((int *)(v7 + 4), v5 + 452 + 16 * v4);
  Function_2017348(v7 + 4, 1);
  Function_2260ea0(v7, v9);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  Function_2260ee4(v7);
  *(uchar *)(v7 + 1) = v6;
  *(uchar *)(v7 + 2) = v4;
  *(uchar *)v7 = 1;
  *(uint *)(v7 + 124) = 1;
  *(uint *)(v7 + 132) = 1;
  return v7;
}

//----- (02260E8C) --------------------------------------------------------
int __fastcall Function_2260e8c(uchar *a1)
{
  uchar *v1;
  int result;

  v1 = a1;
  Function_2017348((int)(a1 + 4), 0);
  result = 0;
  *v1 = 0;
  return result;
}

//----- (02260EA0) --------------------------------------------------------
uint *__fastcall Function_2260ea0(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = a1;
  v5 = *a2;
  v6 = a2[1];
  v4 += 39;
  *v4 = v5;
  v4[1] = v6;
  v4[2] = v3[2];
  return Function_2017350(v2 + 1, v2[39] + v2[42], v2[40] + v2[43], v2[41] + v2[44]);
}

//----- (02260EE4) --------------------------------------------------------
uint *__fastcall Function_2260ee4(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = a1;
  v5 = *a2;
  v6 = a2[1];
  v4 += 42;
  *v4 = v5;
  v4[1] = v6;
  v4[2] = v3[2];
  return Function_2017350(v2 + 1, v2[39] + v2[42], v2[40] + v2[43], v2[41] + v2[44]);
}

//----- (02260F28) --------------------------------------------------------
int __fastcall Function_2260f28(int a1, uint *a2)
{
  return Function_2017358((uint *)(a1 + 4), a2, a2 + 1, a2 + 2);
}

//----- (02260F38) --------------------------------------------------------
int __fastcall Function_2260f38(int a1, int a2)
{
  return Function_2017348(a1 + 4, a2);
}

//----- (02260F44) --------------------------------------------------------
int __fastcall Function_2260f44(int a1)
{
  if ( *(uint *)(a1 + 128) )
    return 0;
  *(uint *)(a1 + 128) = 1;
  return 1;
}

//----- (02260F5C) --------------------------------------------------------
int __fastcall Function_2260f5c(int a1)
{
  if ( *(uint *)(a1 + 136) )
    return 0;
  *(uint *)(a1 + 136) = 1;
  return 1;
}

//----- (02260F74) --------------------------------------------------------
short *__fastcall Function_2260f74(int a1, short a2)
{
  return Function_2017388(a1 + 4, a2, 0);
}

//----- (02260F80) --------------------------------------------------------
int __fastcall Function_2260f80(int a1)
{
  return *(uint *)(a1 + 128);
}

//----- (02260F88) --------------------------------------------------------
int __fastcall Function_2260f88(int a1)
{
  return *(uint *)(a1 + 136);
}

//----- (02260F90) --------------------------------------------------------
int __fastcall Function_2260f90(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  short v12;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  short v20;
  short v21;

  v4 = a1;
  v14 = a2;
  v15 = a3;
  v16 = a4;
  v17 = Function_2261af0();
  Function_2017258((int *)(v17 + 4), v4 + 668 + 16 * v14);
  v18 = v4 + 668;
  v5 = 0;
  v6 = v4 + 12 * v14;
  v7 = (int *)(v17 + 124);
  v19 = 16 * v14;
  do
  {
    v8 = *(uint *)(v6 + 956);
    if ( v8 )
      Function_2017190(v7, v18 + v19, v8, (int (***)(void))(v4 + 1172));
    ++v5;
    v6 += 4;
    v7 += 5;
  }
  while ( v5 < 3 );
  Function_2017348(v17 + 4, 1);
  v20 = 16 * v15;
  v21 = 16 * v16;
  v9 = &v14 - 1;
  v10 = v17;
  *(ushort *)v9 = 16 * v15;
  *((ushort *)v9 + 1) = v21;
  Function_22610bc(v10, *(&v14 - 1));
  v11 = v17;
  v12 = v14;
  *(ushort *)v17 = 1;
  *(ushort *)(v11 + 2) = v12;
  *(uchar *)(v11 + 204) = 20;
  *(uint *)(v17 + 220) = 4096;
  *(uchar *)(v17 + 224) = 0;
  *(uchar *)(v17 + 225) = 31;
  *(uchar *)(v17 + 226) = 31;
  return v17;
}

//----- (02261058) --------------------------------------------------------
ushort *__fastcall Function_2261058(int a1, ushort *a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  ushort *result;
  ushort *v9;

  v2 = a1;
  v9 = a2;
  Function_2017348((int)(a2 + 2), 0);
  v3 = 0;
  v4 = 0;
  v5 = (int *)(v9 + 62);
  do
  {
    v6 = (ushort)v9[1];
    v7 = *(uint *)(v4 + v2 + 12 * v6 + 956);
    if ( v7 )
      Function_2017190(v5, v2 + 668 + 16 * v6, v7, (int (***)(void))(v2 + 1172));
    ++v3;
    v4 += 4;
    v5 += 5;
  }
  while ( v3 < 3 );
  result = v9;
  *v9 = 0;
  return result;
}

//----- (022610B8) --------------------------------------------------------
int __fastcall Function_22610b8(int a1)
{
  return *(ushort *)(a1 + 2);
}

//----- (022610BC) --------------------------------------------------------
int Function_22610bc()
{
  return Function_22610be();
}

//----- (022610BE) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022610E4) --------------------------------------------------------
int __fastcall Function_22610e4(int a1, int a2, int a3, int a4)
{
  ushort v5;
  ushort v6;
  char v7;
  char v8;
  char v9;
  int v10;

  v10 = a4;
  Function_2017358((uint *)(a1 + 4), &v7, &v8, &v9);
  Function_225c714(&v7, &v5);
  return v5 | (v6 << 16);
}

//----- (0226110C) --------------------------------------------------------
int __fastcall Function_226110c(int a1)
{
  return Function_226111c(a1);
}

//----- (0226111C) --------------------------------------------------------
int *__fastcall Function_226111c(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int *result;
  int v10;
  char v11;
  int v12;
  char v13;
  int v14;
  int v15;

  v5 = a3;
  v14 = a1;
  v6 = a2;
  v7 = a4;
  if ( a3 >= 3 )
    ErrorHandler();
  if ( v7 >= 7 )
    ErrorHandler();
  if ( *(ushort *)(v6 + 2) >= 0x12u )
    ErrorHandler();
  v8 = 4 * v5;
  result = *(int **)(v14 + 12 * *(ushort *)(v6 + 2) + 4 * v5 + 956);
  if ( result )
  {
    if ( !*(uchar *)(v6 + 184 + v5) )
      Function_201727c(v6 + 4, v6 + 124 + 20 * v5);
    *(uchar *)(v6 + 184 + v5) = 1;
    *(uchar *)(v6 + v5 + 188) = v7;
    *(uint *)(v6 + v8 + 208) = a5;
    v15 = v6 + 205;
    *(uchar *)(v6 + 205 + v5) = 0;
    switch ( (uchar)v6 )
    {
      case 0x33:
      case 0x34:
      case 0x35:
        *(uint *)(v6 + v8 + 192) = 0;
        break;
      case 0x36:
      case 0x37:
        *(uint *)(v6 + v8 + 192) = Function_201724c(v6 + 124 + 20 * v5);
        break;
      case 0x38:
        *(uint *)(v6 + v8 + 192) = 0;
        v10 = Function_201d35c();
        u32_div_f(v10, *(uchar *)(v6 + 204));
        *(uchar *)(v15 + v5) = v11;
        break;
      case 0x39:
        *(uint *)(v6 + v8 + 192) = 0;
        v12 = Function_201d35c();
        u32_div_f(v12, *(uchar *)(v6 + 204));
        *(uchar *)(v15 + v5) = v13;
        break;
      default:
        break;
    }
    result = Function_2017240(v6 + 124 + 20 * v5, *(uint *)(v6 + v8 + 192));
  }
  return result;
}

//----- (02261220) --------------------------------------------------------
int __fastcall Function_2261220(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 >= 3 )
    ErrorHandler();
  if ( *(ushort *)(v5 + 2) >= 0x12u )
    ErrorHandler();
  result = *(uint *)(v4 + 12 * *(ushort *)(v5 + 2) + 4 * v3 + 956);
  if ( result )
  {
    result = *(uchar *)(v5 + 184 + v3);
    if ( result == 1 )
    {
      Function_2017288((int *)(v5 + 4), v5 + 124 + 20 * v3);
      result = 0;
      *(uchar *)(v5 + 184 + v3) = 0;
      *(uint *)(v5 + 4 * v3 + 192) = 0;
      *(uchar *)(v5 + v3 + 188) = 0;
      *(uchar *)(v5 + v3 + 205) = 0;
      *(uint *)(v5 + 4 * v3 + 208) = 0;
    }
  }
  return result;
}

//----- (0226128C) --------------------------------------------------------
int __fastcall Function_226128c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = Function_2261348(v3, v4);
    if ( result == 1 )
      result = Function_2261220(v2, v3, v4);
    ++v4;
  }
  while ( v4 < 3 );
  return result;
}

//----- (022612B4) --------------------------------------------------------
int __fastcall Function_22612b4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 >= 3 )
    ErrorHandler();
  if ( *(ushort *)(v5 + 2) >= 0x12u )
    ErrorHandler();
  if ( *(uint *)(v4 + 12 * *(ushort *)(v5 + 2) + 4 * v3 + 956) )
    result = *(uchar *)(v5 + v3 + 184);
  else
    result = 0;
  return result;
}

//----- (022612F0) --------------------------------------------------------
int *__fastcall Function_22612f0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int *result;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  if ( a3 >= 3 )
    ErrorHandler();
  if ( *(ushort *)(v6 + 2) >= 0x12u )
    ErrorHandler();
  if ( !*(uint *)(v5 + 12 * *(ushort *)(v6 + 2) + 4 * v4 + 956) )
    ErrorHandler();
  result = (int *)*(uchar *)(v6 + v4 + 188);
  if ( result == (int *)2 )
  {
    *(uint *)(v6 + 192 + 4 * v4) = v7;
    result = Function_2017240(v6 + 124 + 20 * v4, *(uint *)(v6 + 192 + 4 * v4));
  }
  return result;
}

//----- (02261348) --------------------------------------------------------
int __fastcall Function_2261348(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 3 )
    ErrorHandler();
  if ( *(ushort *)(v3 + 2) >= 0x12u )
    ErrorHandler();
  return *(uchar *)(v3 + v2 + 184);
}

//----- (02261368) --------------------------------------------------------
int __fastcall Function_2261368(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 3 )
    ErrorHandler();
  if ( *(ushort *)(v3 + 2) >= 0x12u )
    ErrorHandler();
  return *(uint *)(v3 + 4 * v2 + 192);
}

//----- (0226138C) --------------------------------------------------------
int __fastcall Function_226138c(int a1, int a2)
{
  return Function_2017348(a1 + 4, a2);
}

//----- (02261398) --------------------------------------------------------
uint __fastcall Function_2261398(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  if ( *(ushort *)(a2 + 2) >= 0x12u )
    ErrorHandler();
  return Function_20b3664(*(uint *)(v5 + 16 * *(ushort *)(v4 + 2) + 676), v6, a3, a4);
}

//----- (022613C0) --------------------------------------------------------
uint *__fastcall Function_22613c0(int a1, int a2)
{
  uint *result;

  result = (uint *)(a1 + 220);
  *result = a2;
  return result;
}

//----- (022613C8) --------------------------------------------------------
uchar *__fastcall Function_22613c8(uchar *a1, char a2, char a3)
{
  uchar *result;

  a1[224] = 1;
  a1[225] = a2;
  result = a1 + 226;
  *result = a3;
  return result;
}

//----- (022613E0) --------------------------------------------------------
uchar *__fastcall Function_22613e0(int a1)
{
  uchar *result;

  result = (uchar *)(a1 + 224);
  *result = 0;
  return result;
}

//----- (022613E8) --------------------------------------------------------
uint *__fastcall Function_22613e8(int a1, int a2, int a3, int a4)
{
  return Function_201736c((uint *)(a1 + 4), a2, a3, a4);
}

//----- (022613F4) --------------------------------------------------------
uint *__fastcall Function_22613f4(int a1, int a2, int a3)
{
  int v3;
  uint v4;

  v3 = a3;
  v4 = a1 + 5 * a2;
  if ( v4 >= 0x19 )
    ErrorHandler();
  return Function_2006fe8_LoadFromNARC_UncompressLZ8(174, v4 + 1, 0, v3, 1);
}

//----- (02261418) --------------------------------------------------------
uint __fastcall Function_2261418(int a1)
{
  return free(a1);
}

//----- (02261420) --------------------------------------------------------
int __fastcall Function_2261420(int *a1, int a2, uint a3, int a4)
{
  int *v4;
  int v5;
  uint *v6;
  int v7;

  v4 = a1;
  Function_225c730(a1, a2, a3, a4);
  v5 = Function_20b3c0c_GetAdrOfDataPart(*v4);
  v4[1] = v5;
  if ( v5
    && (v5 == -8 || !*(uchar *)(v5 + 9) ? (v6 = 0) : (v6 = (uint *)(v5 + 8 + *(ushort *)(v5 + 14) + 4)), v6) )
  {
    v7 = v5 + *v6;
  }
  else
  {
    v7 = 0;
  }
  v4[2] = v7;
  v4[3] = Function_20b3c1c_GetTexOffsets(*v4);
  return Function_201cbb0(*v4, v4[3]);
}

//----- (0226146C) --------------------------------------------------------
int __fastcall Function_226146c(int *a1)
{
  return Function_2017110(a1);
}

//----- (02261474) --------------------------------------------------------
int __fastcall Function_2261474(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int result;
  int v7;

  v3 = a1;
  v4 = a3;
  v5 = Function_201724c(a2);
  result = *v3 + v4;
  if ( result >= v5 )
  {
    result = s32_div_f(result, v5);
    *v3 = v7;
  }
  else
  {
    *v3 = result;
  }
  return result;
}

//----- (02261498) --------------------------------------------------------
int __fastcall Function_2261498(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = Function_201724c(a2);
  v6 = *v3 + v4;
  if ( v6 >= v5 )
  {
    *v3 = v5 - 2048;
    result = 1;
  }
  else
  {
    *v3 = v6;
    result = 0;
  }
  return result;
}

//----- (022614C0) --------------------------------------------------------
int __fastcall Function_22614c0(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int result;
  int v6;

  v3 = a1;
  v4 = a3;
  result = Function_201724c(a2);
  v6 = *v3 - v4;
  if ( v6 < 0 )
  {
    result += v6;
    *v3 = result;
  }
  else
  {
    *v3 = v6;
  }
  return result;
}

//----- (022614DC) --------------------------------------------------------
int __fastcall Function_22614dc(uint *a1, int a2, int a3)
{
  int result;

  if ( *a1 - a3 <= 0 )
  {
    *a1 = 0;
    result = 1;
  }
  else
  {
    *a1 -= a3;
    result = 0;
  }
  return result;
}

//----- (022614F4) --------------------------------------------------------
int __fastcall Function_22614f4(int *a1, int a2, int a3, int a4, int (***a5)(void))
{
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int result;
  int v13;
  int v14;
  int v15;
  int v16;

  v13 = (int)a1;
  v5 = a1;
  v14 = a2;
  v15 = a3;
  v16 = a4;
  v6 = 0;
  v7 = a3;
  do
  {
    Function_2261420(v5, v14, *(uint *)(v7 + 384), v16);
    ((void (__fastcall *)(int))dword_223113C[331])(*v5);
    ++v6;
    v7 += 4;
    v5 += 4;
  }
  while ( v6 < 2 );
  v8 = v13;
  v9 = v15;
  v10 = 0;
  v11 = (int *)(v13 + 32);
  do
  {
    if ( *(uint *)(v15 + 384) == *(uint *)(v9 + 396) )
    {
      result = 0;
      *(uint *)(v8 + 132) = 0;
    }
    else
    {
      *(uint *)(v8 + 132) = 1;
      if ( v10 == 3 )
        result = Function_2017164(v11, v13 + 16, v14, *(uint *)(v9 + 396), v16, a5);
      else
        result = Function_2017164(v11, v13, v14, *(uint *)(v9 + 396), v16, a5);
    }
    ++v10;
    v9 += 4;
    v8 += 4;
    v11 += 5;
  }
  while ( v10 < 5 );
  return result;
}

//----- (022615A4) --------------------------------------------------------
int __fastcall Function_22615a4(int *a1, int a2)
{
  int *v2;
  int v3;
  int *v4;
  int *v5;
  int v6;
  int result;
  int v8;

  v2 = a1;
  v8 = a2;
  v3 = 0;
  v4 = a1;
  v5 = a1 + 8;
  do
  {
    if ( v4[33] )
    {
      Function_20171a0(v5, v8);
      v4[33] = 0;
    }
    ++v3;
    ++v4;
    v5 += 5;
  }
  while ( v3 < 5 );
  v6 = 0;
  do
  {
    result = Function_226146c(v2);
    ++v6;
    v2 += 4;
  }
  while ( v6 < 2 );
  return result;
}

//----- (022615E8) --------------------------------------------------------
uint __fastcall Function_22615e8(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  uint result;
  int v9;
  uint v10;
  uint v11;

  v2 = a1;
  v3 = a2;
  *a1 = 1;
  v9 = 0;
  v4 = a2;
  v5 = a1 + 1;
  do
  {
    Function_2017258(v5, v4);
    Function_2017348((int)v5, 1);
    v4 += 16;
    v5 += 30;
    ++v9;
  }
  while ( v9 < 2 );
  v11 = (uint)(v2 + 31);
  v6 = 0;
  v7 = v3 + 32;
  v10 = (uint)(v2 + 1);
  do
  {
    result = *(uint *)(v3 + 132);
    if ( result == 1 )
    {
      v2[61] = 1;
      if ( v6 == 3 )
        result = Function_201727c(v11, v7);
      else
        result = Function_201727c(v10, v7);
    }
    ++v6;
    v3 += 4;
    ++v2;
    v7 += 20;
  }
  while ( v6 < 4 );
  return result;
}

//----- (02261664) --------------------------------------------------------
int __fastcall Function_2261664(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint *v4;
  int v5;
  int result;
  int *v7;

  v2 = a1;
  v3 = 0;
  v4 = a1;
  v5 = a2 + 32;
  v7 = a1 + 31;
  do
  {
    if ( v4[61] == 1 )
    {
      v4[61] = 0;
      if ( v3 == 3 )
        Function_2017288(v7, v5);
      else
        Function_2017288(v2 + 1, v5);
    }
    ++v3;
    ++v4;
    v5 += 20;
  }
  while ( v3 < 4 );
  result = 0;
  *v2 = 0;
  return result;
}

//----- (022616B0) --------------------------------------------------------
int __fastcall Function_22616b0(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v7 = 0;
  v3 = a2 + 32;
  v4 = (int *)(a1 + 264);
  v5 = a2 + 32;
  do
  {
    if ( *(uint *)(v2 + 244) )
    {
      Function_2261474(v4, v3, 4096);
      Function_2017240(v5, *(uint *)(v2 + 264));
    }
    v2 += 4;
    result = v7 + 1;
    v3 += 20;
    ++v4;
    v5 += 20;
    v7 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (022616FC) --------------------------------------------------------
int *__fastcall Function_22616fc(int *result)
{
  int v1;
  int v2;

  if ( *result )
  {
    v1 = 0;
    v2 = (int)(result + 1);
    do
    {
      result = Function_2017294(v2);
      ++v1;
      v2 += 120;
    }
    while ( v1 < 2 );
  }
  return result;
}

//----- (02261718) --------------------------------------------------------
int __fastcall Function_2261718(int a1)
{
  int v1;
  int v2;
  uchar *v3;
  int result;

  v1 = *(uchar *)(a1 + 292);
  v2 = 0;
  if ( v1 <= 0 )
  {
LABEL_6:
    ErrorHandler();
    result = 0;
  }
  else
  {
    v3 = *(uchar **)(a1 + 284);
    while ( *v3 )
    {
      ++v2;
      v3 += 180;
      if ( v2 >= v1 )
        goto LABEL_6;
    }
    result = *(uint *)(a1 + 284) + 180 * v2;
  }
  return result;
}

//----- (0226174C) --------------------------------------------------------
int __fastcall Function_226174c(int a1, int a2, int (***a3)(void), int a4, int a5)
{
  int v5;
  int *v6;
  int v7;
  uint **v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  uint *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint v19;
  uint v20;
  int result;
  int v22;
  int v23;
  int (***v24)(void);
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;

  v22 = a1;
  v36 = 0;
  v29 = a4;
  v23 = a2;
  v24 = a3;
  v25 = a4;
  v28 = a1 + 32;
  do
  {
    v5 = v29;
    v6 = (int *)v28;
    v7 = 0;
    do
    {
      Function_225c730(v6, v23, *(uint *)(v5 + 296), a5);
      ++v7;
      v5 += 4;
      ++v6;
    }
    while ( v7 < 3 );
    v29 += 12;
    v28 += 12;
    ++v36;
  }
  while ( v36 < 2 );
  v8 = (uint **)v22;
  v9 = v25;
  v10 = 0;
  v11 = v22;
  do
  {
    v12 = Function_200723c(v23, *(uint *)(v9 + 288), 0, a5, 0);
    *v8 = v12;
    v13 = Function_20b3c0c_GetAdrOfDataPart((int)v12);
    v8[1] = (uint *)v13;
    if ( v13
      && (v13 == -8 || !*(uchar *)(v13 + 9) ? (v14 = 0) : (v14 = (uint *)(v13 + 8 + *(ushort *)(v13 + 14) + 4)),
          v14) )
    {
      v15 = v13 + *v14;
    }
    else
    {
      v15 = 0;
    }
    v8[2] = (uint *)v15;
    v8[3] = (uint *)Function_20b3c1c_GetTexOffsets(*(uint *)(v11 + 32));
    ++v10;
    v9 += 4;
    v8 += 4;
    v11 += 12;
  }
  while ( v10 < 2 );
  v27 = 0;
  v16 = v25;
  v35 = v25;
  v34 = v22 + 56;
  v33 = v25;
  v32 = v22;
  do
  {
    v26 = 0;
    v17 = v33;
    v31 = v35;
    v18 = v32;
    v30 = (int *)v34;
    do
    {
      v19 = *(uint *)(v31 + 320);
      if ( *(uint *)(v25 + 288) != v19 )
      {
        Function_2017164(v30, v22, v23, v19, a5, v24);
        if ( v26 >= 1 )
        {
          v20 = 0;
          if ( *(uint *)(v16 + 352) )
          {
            do
            {
              if ( v20 != *(uint *)(v17 + 356) )
                Function_20ae5cc(*(uint *)(v18 + 64), v20);
              ++v20;
            }
            while ( v20 < *(uint *)(v16 + 352) );
          }
        }
      }
      v17 += 4;
      v31 += 4;
      v18 += 20;
      v30 += 5;
      ++v26;
    }
    while ( v26 < 4 );
    v16 += 4;
    v35 += 16;
    v22 += 16;
    v34 += 80;
    v33 += 12;
    v32 += 80;
    result = v27 + 1;
    v27 = result;
  }
  while ( result < 2 );
  return result;
}

//----- (022618C8) --------------------------------------------------------
int __fastcall Function_22618c8(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int *v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int result;
  int *v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v12 = a1;
  v2 = a2;
  v14 = 0;
  v3 = (int)(a1 + 14);
  do
  {
    v4 = 0;
    v5 = (int *)v3;
    do
    {
      Function_20171a0(v5, v2);
      ++v4;
      v5 += 5;
    }
    while ( v4 < 4 );
    v3 += 80;
    ++v14;
  }
  while ( v14 < 2 );
  v6 = v12;
  v7 = 0;
  do
  {
    free(*v6);
    ++v7;
    v6 += 4;
  }
  while ( v7 < 2 );
  v13 = 0;
  do
  {
    v8 = v12;
    v9 = 0;
    do
    {
      v10 = Function_20b3c1c_GetTexOffsets(v8[8]);
      Function_20ae9b8(v10, &v16, &v15);
      Function_20a5a34();
      Function_20a5a34();
      Function_20aea70(v10);
      Function_20a5a44();
      free(v8[8]);
      ++v9;
      ++v8;
    }
    while ( v9 < 3 );
    v12 += 3;
    result = v13 + 1;
    v13 = result;
  }
  while ( result < 2 );
  return result;
}

//----- (02261968) --------------------------------------------------------
uint __fastcall Function_2261968(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  uint result;
  int v7;
  int v8;

  v2 = 0;
  v7 = a1;
  v3 = a1;
  v4 = 0;
  v5 = (int *)(a1 + 140);
  v8 = a2 + 56;
  do
  {
    result = *(uint *)(v3 + 124);
    if ( result )
    {
      switch ( (uchar)result )
      {
        case 0:
        case 2:
          result = Function_2261474(v5, v8 + 80 * *(uchar *)(v7 + 2) + v4, 4096);
          break;
        case 1:
        case 3:
          result = Function_2261498(v5, v8 + 80 * *(uchar *)(v7 + 2) + v4, 4096);
          if ( result == 1 )
          {
            result = 0;
            *(uint *)(v3 + 124) = 0;
            *(uint *)(v3 + 140) = 0;
          }
          break;
        default:
          result = ErrorHandler();
          break;
      }
    }
    ++v2;
    v3 += 4;
    v4 += 20;
    ++v5;
  }
  while ( v2 < 4 );
  return result;
}

//----- (022619F4) --------------------------------------------------------
uint __fastcall Function_22619f4(uchar *a1, int a2, int a3, int a4)
{
  uchar *v4;
  uint result;
  int v6;
  uchar *v7;
  int v8;
  int v9;
  int v10;
  uchar *v11;
  int v12;
  int v13;
  int v14;

  v4 = a1;
  result = *a1;
  v13 = a2;
  if ( result )
  {
    result = Function_225c7a0(a2 + 16 * v4[2], (uint *)v4 + 1, a3, a4);
    if ( result )
    {
      if ( v4[1] >= 3u )
        ErrorHandler();
      if ( v4[2] >= 2u )
        ErrorHandler();
      *(uint *)(v13 + 16 * v4[2] + 12) = Function_20b3c1c_GetTexOffsets(*(uint *)(v13 + 12 * v4[2] + 4 * v4[1] + 32));
      v6 = v13 + 16 * v4[2];
      if ( !Function_20af1e8(*(uint *)(v6 + 4), *(uint *)(v6 + 12)) )
        ErrorHandler();
      v14 = 0;
      v7 = v4;
      v8 = 0;
      v9 = v13 + 56;
      do
      {
        if ( *((uint *)v7 + 31) )
        {
          Function_201727c((uint)(v4 + 4), v9 + 80 * v4[2] + v8);
          Function_2017240(v9 + 80 * v4[2] + v8, *((uint *)v7 + 35));
        }
        v7 += 4;
        v8 += 20;
        ++v14;
      }
      while ( v14 < 4 );
      Function_2017294((int)(v4 + 4));
      v10 = 0;
      v11 = v4;
      v12 = 0;
      do
      {
        if ( *((uint *)v11 + 31) )
          Function_2017288((int *)v4 + 1, v13 + 56 + 80 * v4[2] + v12);
        ++v10;
        v11 += 4;
        v12 += 20;
      }
      while ( v10 < 4 );
      result = Function_20af298(*(uint *)(v13 + 16 * v4[2] + 4), (uint *)(16 * v4[2]));
    }
  }
  return result;
}

//----- (02261AF0) --------------------------------------------------------
int __fastcall Function_2261af0(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int result;

  v1 = 0;
  v2 = *(uchar *)(a1 + 293);
  if ( v2 <= 0 )
  {
LABEL_6:
    ErrorHandler();
    result = 0;
  }
  else
  {
    v3 = *(ushort **)(a1 + 288);
    while ( *v3 )
    {
      ++v1;
      v3 += 114;
      if ( v1 >= v2 )
        goto LABEL_6;
    }
    result = *(uint *)(a1 + 288) + 228 * v1;
  }
  return result;
}

//----- (02261B24) --------------------------------------------------------
int __fastcall Function_2261b24(int *a1, int a2, int a3, uint *a4, int a5)
{
  uint *v5;
  uint *v6;
  int *v7;
  int v8;
  uint v9;
  int result;
  int *v11;
  int v12;
  int *v13;
  uint *v14;
  int v15;

  v11 = a1;
  v5 = a4;
  v15 = 0;
  v12 = a2;
  v14 = a4;
  v13 = a1;
  do
  {
    Function_2261420(v11, v12, *v5, a5);
    if ( v15 != 11 && v15 != 12 )
      ((void (__fastcall *)(int))dword_223113C[331])(*v11);
    v6 = v14;
    v7 = v13;
    v8 = 0;
    do
    {
      v9 = v6[18];
      if ( *v5 == v9 )
        v7[72] = 0;
      else
        v7[72] = (int)Function_200723c(v12, v9, 0, a5, 0);
      ++v8;
      ++v6;
      ++v7;
    }
    while ( v8 < 3 );
    ++v5;
    v11 += 4;
    v14 += 3;
    v13 += 3;
    result = v15 + 1;
    v15 = result;
  }
  while ( result < 18 );
  return result;
}

//----- (02261BB4) --------------------------------------------------------
int __fastcall Function_2261bb4(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int result;
  int *v5;
  int *v6;
  int v7;

  v5 = a1;
  v7 = 0;
  v6 = a1;
  do
  {
    v1 = v5;
    v2 = 0;
    do
    {
      v3 = v1[72];
      if ( v3 )
      {
        free(v3);
        v1[72] = 0;
      }
      ++v2;
      ++v1;
    }
    while ( v2 < 3 );
    Function_226146c(v6);
    v5 += 3;
    v6 += 4;
    result = v7 + 1;
    v7 = result;
  }
  while ( result < 18 );
  return result;
}

//----- (02261C04) --------------------------------------------------------
uint __fastcall Function_2261c04(int a1, ushort *a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  uint result;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = a2;
  v5 = a1;
  result = *a2;
  if ( *a2 )
  {
    result = Function_225c7a0(v5 + 16 * a2[1], (uint *)a2 + 1, a3, a4);
    if ( result )
    {
      if ( *((uchar *)v4 + 224) == 1 )
        Function_20b3764(*(uint *)(v5 + 16 * v4[1] + 8), *((uchar *)v4 + 225), v7, v8);
      Function_2017294((int)(v4 + 2));
      result = *((uchar *)v4 + 224);
      if ( result == 1 )
        result = Function_20b3764(*(uint *)(v5 + 16 * v4[1] + 8), *((uchar *)v4 + 226), v9, v10);
    }
  }
  return result;
}

//----- (02261C60) --------------------------------------------------------
int __fastcall Function_2261c60(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;
  int result;
  int v11;
  void (__fastcall *v12)(int, int);
  int v13;
  int v14;
  void (__fastcall *v15)(int, int);

  v2 = a2;
  v11 = a1;
  v3 = 0;
  v14 = a2 + 124;
  v4 = (int *)(a2 + 192);
  v5 = a2;
  v13 = a2 + 124;
  do
  {
    if ( *(uchar *)(v2 + v3 + 184) )
    {
      switch ( *(uchar *)(v2 + v3 + 188) )
      {
        case 0:
          Function_2261474(v4, v14, *(uint *)(v2 + 220));
          Function_2017240(v13, *(uint *)(v5 + 192));
          break;
        case 1:
          v6 = Function_2261498(v4, v14, *(uint *)(v2 + 220));
          Function_2017240(v13, *(uint *)(v5 + 192));
          if ( v6 == 1 )
          {
            v15 = *(void (__fastcall **)(int, int))(v5 + 208);
            Function_2261220(v11, v2, v3);
            if ( v15 )
              v15(v11, v2);
          }
          break;
        case 2:
          break;
        case 3:
          Function_22614c0(v4, v14, *(uint *)(v2 + 220));
          Function_2017240(v13, *(uint *)(v5 + 192));
          break;
        case 4:
          v7 = Function_22614dc(v4, v14, *(uint *)(v2 + 220));
          Function_2017240(v13, *(uint *)(v5 + 192));
          if ( v7 == 1 )
          {
            v12 = *(void (__fastcall **)(int, int))(v5 + 208);
            Function_2261220(v11, v2, v3);
            if ( v12 )
              v12(v11, v2);
          }
          break;
        case 5:
          if ( *(uchar *)(v2 + v3 + 205) )
          {
            --*(uchar *)(v2 + v3 + 205);
          }
          else
          {
            if ( Function_2261498(v4, v14, *(uint *)(v2 + 220)) == 1 )
            {
              v8 = Function_201d35c();
              u32_div_f(v8, *(uchar *)(v2 + 204));
              *(uchar *)(v2 + v3 + 205) = v9;
              *(uint *)(v5 + 192) = 0;
            }
            Function_2017240(v13, *(uint *)(v5 + 192));
          }
          break;
        case 6:
          if ( *(uchar *)(v2 + v3 + 205) )
          {
            --*(uchar *)(v2 + v3 + 205);
          }
          else
          {
            Function_2261474(v4, v14, *(uint *)(v2 + 220));
            Function_2017240(v13, *(uint *)(v5 + 192));
          }
          break;
      }
    }
    ++v3;
    v14 += 20;
    ++v4;
    result = v13 + 20;
    v5 += 4;
    v13 += 20;
  }
  while ( v3 < 3 );
  return result;
}

//----- (02261E10) --------------------------------------------------------
int *__fastcall Function_2261e10(int a1, int a2, uint *a3, uint a4, uint a5)
{
  int v5;
  int v6;
  uint *v7;
  uint v8;
  int *v9;
  short *v10;
  uint v11;
  uint *v12;
  uint *v13;
  uint *v14;
  uint *v15;
  uint *v16;
  uint *v17;
  int v18;
  int v19;
  int v20;
  uint *v21;
  int v22;
  short *v23;
  int *v24;
  uint i;
  uint v27;
  ushort v28[2];
  ushort v29;
  int v30;
  short v31;
  short v32;
  int v33;
  int v34;
  int v35;

  v5 = a2;
  v6 = a1;
  v7 = a3;
  v8 = a4;
  v9 = (int *)malloc(a4, 1556);
  Call_FillMemWithValue(v9, 0, 0x614u);
  *v9 = (int)v7;
  *((uchar *)v9 + 1552) = v6;
  *((uchar *)v9 + 1553) = v5;
  v9[1] = Function_2260b44(9, 128, v8);
  Function_2260ce4(v9[1], v5, v6, v8, a5);
  v10 = &word_226D944;
  v27 = 0;
  do
  {
    for ( i = 0; Function_225c8d8((uint *)*v9, (ushort)*v10, &v29, v28, i) == 1; ++i )
    {
      v9[*((uchar *)v9 + 1554) + 2] = Function_2260f90(v9[1], (ushort)v10[1], v29, v28[0]);
      v11 = (ushort)v10[1];
      if ( v11 <= 0x10 )
        JUMPOUT(__CS__, *((short *)&off_2261EBE + v11) + 36052672);
      switch ( (uchar)v11 )
      {
        case 0:
          v13 = (uint *)v9[*((uchar *)v9 + 1554) + 2];
          Function_226110c(v9[1]);
          v14 = (uint *)v9[*((uchar *)v9 + 1554) + 2];
          Function_226110c(v9[1]);
          v15 = (uint *)v9[*((uchar *)v9 + 1554) + 2];
          Function_226110c(v9[1]);
          break;
        case 6:
        case 7:
        case 8:
          v12 = (uint *)v9[*((uchar *)v9 + 1554) + 2];
          Function_226110c(v9[1]);
          v9[(ushort)v10[1] + 133] = v9[*((uchar *)v9 + 1554) + 2];
          break;
        case 0xA:
          v16 = (uint *)v9[*((uchar *)v9 + 1554) + 2];
          Function_226110c(v9[1]);
          v9[(ushort)*v10 + 69] = v9[*((uchar *)v9 + 1554) + 2];
          break;
        case 0xB:
        case 0xC:
          v17 = (uint *)v9[*((uchar *)v9 + 1554) + 2];
          Function_226110c(v9[1]);
          break;
        case 0xD:
          Function_22629fc(&v9[3 * *((uchar *)v9 + 1544) + 146], v9[*((uchar *)v9 + 1554) + 2]);
          if ( (uchar)++*((uchar *)v9 + 1544) > 0x18u )
            ErrorHandler();
          Function_226138c(v9[*((uchar *)v9 + 1554) + 2], 0);
          if ( (((ushort)*v10 + 65444) & 0xFFFFu) <= 1 )
            Function_2262d48(v9[*((uchar *)v9 + 1554) + 2]);
          break;
        case 0xE:
          Function_22629fc(&v9[3 * *((uchar *)v9 + 1545) + 218], v9[*((uchar *)v9 + 1554) + 2]);
          ++*((uchar *)v9 + 1545);
          if ( *((uchar *)v9 + 1544) > 0x18u )
            ErrorHandler();
          Function_226138c(v9[*((uchar *)v9 + 1554) + 2], 0);
          if ( (((ushort)*v10 + 65444) & 0xFFFFu) <= 1 )
            Function_2262d48(v9[*((uchar *)v9 + 1554) + 2]);
          break;
        case 0xF:
          v9[(uchar)(*((uchar *)v9 + 1546))++ + 290] = v9[*((uchar *)v9 + 1554) + 2];
          if ( *((uchar *)v9 + 1546) > 0x18u )
            ErrorHandler();
          Function_226138c(v9[*((uchar *)v9 + 1554) + 2], 0);
          break;
        case 0x10:
          Function_22629fc(&v9[3 * *((uchar *)v9 + 1547) + 314], v9[*((uchar *)v9 + 1554) + 2]);
          if ( (uchar)++*((uchar *)v9 + 1547) > 0x18u )
            ErrorHandler();
          Function_226138c(v9[*((uchar *)v9 + 1554) + 2], 0);
          v30 = Function_22610e4(v9[*((uchar *)v9 + 1554) + 2], v18, v19, v20);
          v31 = v30 + 8;
          v32 = HIWORD(v30) + 20;
          v21 = (uint *)v9[*((uchar *)v9 + 1554) + 2];
          Function_22610bc();
          break;
        default:
          break;
      }
      ++*((uchar *)v9 + 1554);
    }
    v10 += 2;
    ++v27;
  }
  while ( v27 < 0x23 );
  v22 = 0;
  v23 = &word_226D920;
  v33 = 0;
  v35 = 163840;
  v34 = 0;
  v24 = v9;
  do
  {
    v24[130] = Function_2260e20(v9[1], (ushort)*v23, (ushort)v23[1], (int)&v33);
    Function_2260f38(v24[130], 0);
    ++v22;
    v23 += 2;
    ++v24;
  }
  while ( v22 < 9 );
  *((uchar *)v9 + 1555) = 9;
  return v9;
}

//----- (022621AC) --------------------------------------------------------
uint __fastcall Function_22621ac(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = 0;
  if ( (int)*(uchar *)(a1 + 1555) > 0 )
  {
    v3 = a1;
    do
    {
      Function_2260e8c(*(uchar **)(v3 + 520));
      ++v2;
      v3 += 4;
    }
    while ( v2 < *(uchar *)(v1 + 1555) );
  }
  v4 = 0;
  if ( (int)*(uchar *)(v1 + 1554) > 0 )
  {
    v5 = v1;
    do
    {
      Function_2261058(*(uint *)(v1 + 4), *(ushort **)(v5 + 8));
      ++v4;
      v5 += 4;
    }
    while ( v4 < *(uchar *)(v1 + 1554) );
  }
  Function_2260d80(*(uint *)(v1 + 4));
  Function_2260bb8(*(uint *)(v1 + 4));
  return free(v1);
}

//----- (02262210) --------------------------------------------------------
int __fastcall Function_2262210(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = 0;
  if ( (int)*(uchar *)(a1 + 1544) > 0 )
  {
    v3 = a1 + 584;
    do
    {
      Function_2262a04(v3, *(uint *)(v1 + 4));
      ++v2;
      v3 += 12;
    }
    while ( v2 < *(uchar *)(v1 + 1544) );
  }
  v4 = 0;
  if ( (int)*(uchar *)(v1 + 1545) > 0 )
  {
    v5 = v1 + 872;
    do
    {
      Function_2262bec(v5, *(uint *)(v1 + 4));
      ++v4;
      v5 += 12;
    }
    while ( v4 < *(uchar *)(v1 + 1545) );
  }
  v6 = 0;
  if ( (int)*(uchar *)(v1 + 1547) > 0 )
  {
    v7 = v1 + 1256;
    do
    {
      Function_2262c94(v7, *(uint *)(v1 + 4));
      ++v6;
      v7 += 12;
    }
    while ( v6 < *(uchar *)(v1 + 1547) );
  }
  return Function_2260be8(*(uint *)(v1 + 4));
}

//----- (02262298) --------------------------------------------------------
int __fastcall Function_2262298(int a1)
{
  return Function_2260c50(*(uint *)(a1 + 4));
}

//----- (022622A4) --------------------------------------------------------
void __fastcall Function_22622a4(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 4);
  Function_2260ce0();
}

//----- (022622B0) --------------------------------------------------------
uint *__fastcall Function_22622b0(int a1, uint a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( *(uchar *)(a1 + 1555) <= a2 )
    ErrorHandler();
  v10 = 163840;
  v9 = 0;
  v8 = v6;
  return Function_2260ea0(*(uint **)(v4 + 4 * v5 + 520), &v8);
}

//----- (022622EC) --------------------------------------------------------
uint *__fastcall Function_22622ec(int a1, uint a2, uint *a3)
{
  int v3;
  uint v4;
  uint *v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *(uchar *)(a1 + 1555) <= a2 )
    ErrorHandler();
  return Function_2260ee4(*(uint **)(v3 + 4 * v4 + 520), v5);
}

//----- (02262318) --------------------------------------------------------
int __fastcall Function_2262318(int a1, uint a2, uint a3, uint *a4)
{
  int v4;
  uint v5;
  uint v6;
  uint *v7;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( *(uchar *)(a1 + 1555) <= a2 )
    ErrorHandler();
  if ( v6 >= 3 )
    ErrorHandler();
  Function_2260f28(*(uint *)(v4 + 4 * v5 + 520), v7);
  *v7 += SLOWORD(dword_226D914[v6]) << 12;
  v7[2] += SHIWORD(dword_226D914[v6]) << 12;
  result = 163840;
  v7[1] = 163840;
  return result;
}

//----- (02262374) --------------------------------------------------------
int __fastcall Function_2262374(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  if ( *(uchar *)(a1 + 1555) <= a2 )
    ErrorHandler();
  return Function_2260f44(*(uint *)(v2 + 4 * v3 + 520));
}

//----- (0226239C) --------------------------------------------------------
int __fastcall Function_226239c(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  if ( *(uchar *)(a1 + 1555) <= a2 )
    ErrorHandler();
  return Function_2260f5c(*(uint *)(v2 + 4 * v3 + 520));
}

//----- (022623C4) --------------------------------------------------------
int __fastcall Function_22623c4(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *(uchar *)(a1 + 1555) <= a2 )
    ErrorHandler();
  return Function_2260f38(*(uint *)(v3 + 4 * v4 + 520), v5);
}

//----- (022623F0) --------------------------------------------------------
short *__fastcall Function_22623f0(int a1, uint a2, short a3)
{
  int v3;
  uint v4;
  short v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *(uchar *)(a1 + 1555) <= a2 )
    ErrorHandler();
  return Function_2260f74(*(uint *)(v3 + 4 * v4 + 520), v5);
}

//----- (0226241C) --------------------------------------------------------
int __fastcall Function_226241c(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  if ( *(uchar *)(a1 + 1555) <= a2 )
    ErrorHandler();
  return Function_2260f80(*(uint *)(v2 + 4 * v3 + 520));
}

//----- (02262444) --------------------------------------------------------
int __fastcall Function_2262444(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  if ( *(uchar *)(a1 + 1555) <= a2 )
    ErrorHandler();
  return Function_2260f88(*(uint *)(v2 + 4 * v3 + 520));
}

//----- (0226246C) --------------------------------------------------------
uint __fastcall Function_226246c(int a1)
{
  return Function_2260dc8(*(uint *)(a1 + 4));
}

//----- (02262478) --------------------------------------------------------
int __fastcall Function_2262478(int a1)
{
  return Function_2260df4(*(uint *)(a1 + 4));
}

//----- (02262484) --------------------------------------------------------
int __fastcall Function_2262484(int a1, int a2, int a3)
{
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v3 = a1;
  v10 = a2;
  result = *(uchar *)(a1 + 1554);
  v5 = 0;
  if ( result > 0 )
  {
    v6 = v3;
    v11 = (a2 - 1) & 0xFF;
    v7 = (a3 - 1) & 0xFF;
    do
    {
      v8 = Function_22628c8(*(uint *)(v6 + 8), v11, v7);
      v9 = Function_22628c8(*(uint *)(v6 + 8), v10, v7);
      if ( v8 == 1 || v9 == 1 )
      {
        switch ( (uchar)Function_22610b8(*(uint *)(v6 + 8)) )
        {
          case 1u:
          case 2u:
          case 3u:
          case 4u:
            if ( *(uchar *)(v3 + 1553) == 4 )
              Function_22629ac(v3, *(uint *)(v6 + 8));
            else
              Function_2262968(v3, *(uint *)(v6 + 8));
            break;
          default:
            break;
        }
      }
      ++v5;
      result = *(uchar *)(v3 + 1554);
      v6 += 4;
    }
    while ( v5 < result );
  }
  return result;
}

//----- (0226251C) --------------------------------------------------------
int __fastcall Function_226251c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  int v12;

  v2 = a1;
  v3 = a2;
  result = *(uchar *)(a1 + 1554);
  v5 = 0;
  if ( result > 0 )
  {
    v6 = v2;
    do
    {
      v7 = Function_22610b8(*(uint *)(v6 + 8));
      switch ( v9 )
      {
        case 0:
          break;
        case 1:
        case 2:
        case 3:
        case 4:
          if ( v3 == 1 )
            Function_2261398(*(uint *)(v2 + 4), *(uint *)(v6 + 8), 1, v8);
          break;
        default:
          if ( v7 == 15 )
          {
            if ( v3 == 1 )
            {
              Function_22613c0(*(uint *)(v6 + 8), 2048);
              v10 = *(uint *)(v6 + 8);
              Function_226110c(*(uint *)(v2 + 4));
              v11 = *(uint *)(v6 + 8);
              Function_226110c(*(uint *)(v2 + 4));
              v12 = *(uint *)(v6 + 8);
              Function_226110c(*(uint *)(v2 + 4));
              Function_226138c(*(uint *)(v6 + 8), 1);
            }
            else
            {
              Function_2261220(*(uint *)(v2 + 4), *(uint *)(v6 + 8), 0);
              Function_2261220(*(uint *)(v2 + 4), *(uint *)(v6 + 8), 1);
              Function_2261220(*(uint *)(v2 + 4), *(uint *)(v6 + 8), 2);
              Function_226138c(*(uint *)(v6 + 8), 0);
            }
          }
          break;
      }
      ++v5;
      result = *(uchar *)(v2 + 1554);
      v6 += 4;
    }
    while ( v5 < result );
  }
  return result;
}

//----- (022625D8) --------------------------------------------------------
int __fastcall Function_22625d8(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  result = *(uchar *)(a1 + 1547);
  v5 = 0;
  if ( result > 0 )
  {
    v6 = v2 + 1256;
    do
    {
      Function_2262bd0(v6, v3);
      ++v5;
      result = *(uchar *)(v2 + 1547);
      v6 += 12;
    }
    while ( v5 < result );
  }
  return result;
}

//----- (0226260C) --------------------------------------------------------
int __fastcall Function_226260c(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;

  v1 = a1;
  v2 = 0;
  result = *(uchar *)(a1 + 1554);
  if ( result > 0 )
  {
    v4 = v1;
    do
    {
      switch ( (uchar)Function_22610b8(*(uint *)(v4 + 8)) )
      {
        case 1u:
        case 2u:
        case 3u:
        case 4u:
          Function_2261398(*(uint *)(v1 + 4), *(uint *)(v4 + 8), 1, v5);
          break;
        default:
          break;
      }
      result = *(uchar *)(v1 + 1554);
      ++v2;
      v4 += 4;
    }
    while ( v2 < result );
  }
  return result;
}

//----- (02262658) --------------------------------------------------------
int __fastcall Function_2262658(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  result = *(uchar *)(a1 + 1554);
  v3 = 0;
  if ( result > 0 )
  {
    v4 = v1;
    do
    {
      v5 = Function_22610b8(*(uint *)(v4 + 8));
      if ( v5 == 11 || v5 == 12 )
      {
        switch ( (uchar)v5 )
        {
          case 0:
            v6 = *(uint *)(v4 + 8);
            Function_226110c(*(uint *)(v1 + 4));
            *(uint *)(v1 + 580) = 0;
            break;
          case 1:
            Function_226111c(*(uint *)(v1 + 4), *(uint *)(v4 + 8), 0, 1, (int)Function_2262908);
            *(uint *)(v1 + 580) = 1;
            break;
          case 2:
            Function_226111c(*(uint *)(v1 + 4), *(uint *)(v4 + 8), 0, 4, (int)Function_2262938);
            Function_2261220(*(uint *)(v1 + 4), *(uint *)(v4 + 8), 1);
            *(uint *)(v1 + 580) = 0;
            break;
          case 3:
            v7 = *(uint *)(v4 + 8);
            Function_226110c(*(uint *)(v1 + 4));
            Function_2261220(*(uint *)(v1 + 4), *(uint *)(v4 + 8), 0);
            *(uint *)(v1 + 580) = 1;
            break;
          default:
            break;
        }
      }
      ++v3;
      result = *(uchar *)(v1 + 1554);
      v4 += 4;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (0226271C) --------------------------------------------------------
int __fastcall Function_226271c(int a1)
{
  return *(uint *)(a1 + 580);
}

//----- (02262724) --------------------------------------------------------
int __fastcall Function_2262724(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  int i;

  v3 = a1;
  v4 = a2;
  result = *(uchar *)(a1 + 1544);
  v6 = a3;
  for ( i = 0; i < result; result = *(uchar *)(v3 + 1544) )
    Function_2262754(v3, i++, v4, v6);
  return result;
}

//----- (02262754) --------------------------------------------------------
int __fastcall Function_2262754(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1;
  if ( a2 >= *(uchar *)(a1 + 1544) )
    return 0;
  v5 = a1 + 584;
  v6 = 12 * a2;
  if ( a3 )
    Function_2262a50(v5 + v6, *(uint *)(v4 + 4), a4);
  else
    Function_2262a80(v5 + v6);
  return 1;
}

//----- (0226278C) --------------------------------------------------------
int __fastcall Function_226278c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  result = *(uchar *)(a1 + 1545);
  v5 = 0;
  if ( result > 0 )
  {
    v6 = v2 + 872;
    do
    {
      Function_2262bd0(v6, v3);
      ++v5;
      result = *(uchar *)(v2 + 1545);
      v6 += 12;
    }
    while ( v5 < result );
  }
  return result;
}

//----- (022627BC) --------------------------------------------------------
uint __fastcall Function_22627bc(int a1, int a2, int a3, int a4, int a5, int a6)
{
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
  uint result;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v6 = a1;
  v7 = a1 + 4 * a2;
  v8 = *(uint *)(v7 + 556);
  v9 = *(uint *)(v7 + 568);
  v10 = a3;
  if ( a5 != 1 && a4 != 1 )
  {
    v22 = *(uint *)(a1 + 4);
    if ( a6 )
    {
      Function_226128c(v22, *(uint *)(v7 + 556));
      Function_226128c(*(uint *)(v6 + 4), v9);
      result = Function_2261398(*(uint *)(v6 + 4), v8, 1, v23);
    }
    else
    {
      Function_2261220(v22, v8, 1);
      result = (uint)Function_22612f0(*(uint *)(v6 + 4), v9, 0, 0);
    }
  }
  else
  {
    if ( !Function_2261348(*(uint *)(v7 + 556), 1) )
      Function_226110c(*(uint *)(v6 + 4));
    if ( a5 == 1 )
    {
      v11 = v10 + 4;
      if ( 4 * (v10 + 4) )
      {
        v12 = ffltu(v11 << 14);
        v13 = fadd(0x3F000000u, v12);
      }
      else
      {
        v14 = ffltu(v11 << 14);
        v13 = fsub(v14, 1056964608);
      }
      v15 = ffix(v13);
      result = (uint)Function_22612f0(*(uint *)(v6 + 4), v9, 0, v15);
    }
    else
    {
      u32_div_f(*(uint *)(v6 + 1548) + 1, 28);
      *(uint *)(v6 + 1548) = v17;
      if ( *(uint *)(v6 + 1548) >= 0xEu )
      {
        result = (uint)Function_22612f0(*(uint *)(v6 + 4), v9, 0, 0);
      }
      else
      {
        if ( 4 * v10 )
        {
          v18 = ffltu(v10 << 14);
          v19 = fadd(0x3F000000u, v18);
        }
        else
        {
          v20 = ffltu(v10 << 14);
          v19 = fsub(v20, 1056964608);
        }
        v21 = ffix(v19);
        result = (uint)Function_22612f0(*(uint *)(v6 + 4), v9, 0, v21);
      }
    }
  }
  return result;
}

//----- (022628C8) --------------------------------------------------------
BOOL __fastcall Function_22628c8(int a1, short a2, int a3, int a4)
{
  short v4;
  int v5;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = (short)(16 * a3);
  v7 = Function_22610e4(a1, a3 << 20, a3, a4);
  v8 = v7;
  return (short)v7 == (short)(16 * v4) && SHIWORD(v8) == v5;
}

//----- (02262908) --------------------------------------------------------
uint __fastcall Function_2262908(int a1, int a2)
{
  int v2;
  uint result;
  uint v4;

  v2 = a1;
  result = Function_22610b8(a2);
  v4 = result;
  if ( result != 11 && result != 12 )
    result = ErrorHandler();
  if ( v4 - 11 <= 1 )
    result = Function_226110c(v2);
  return result;
}

//----- (02262938) --------------------------------------------------------
uint __fastcall Function_2262938(int a1, int a2)
{
  int v2;
  uint result;
  uint v4;

  v2 = a1;
  result = Function_22610b8(a2);
  v4 = result;
  if ( result != 11 && result != 12 )
    result = ErrorHandler();
  if ( v4 - 11 <= 1 )
    result = Function_226110c(v2);
  return result;
}

//----- (02262968) --------------------------------------------------------
int __fastcall Function_2262968(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = 0;
  v4 = a2;
  result = Function_22612b4(*(uint *)(a1 + 4), a2, 0);
  if ( result )
  {
    result = Function_2261368(v4, 0);
    if ( result > 0x2000 )
      v3 = 1;
  }
  else
  {
    v3 = 1;
  }
  if ( v3 == 1 )
  {
    Function_22629dc(v2, v4);
    result = Function_2005748(0x5A5u);
  }
  return result;
}

//----- (022629AC) --------------------------------------------------------
int __fastcall Function_22629ac(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = 0;
  v4 = a2;
  result = Function_22612b4(*(uint *)(a1 + 4), a2, 0);
  if ( !result )
    v3 = 1;
  if ( v3 == 1 )
  {
    Function_22629dc(v2, v4);
    result = Function_2005748(0x5A9u);
  }
  return result;
}

//----- (022629DC) --------------------------------------------------------
int __fastcall Function_22629dc(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Function_226110c(*(uint *)(v1 + 4));
    ++v2;
  }
  while ( v2 < 3 );
  return result;
}

//----- (022629FC) --------------------------------------------------------
int __fastcall Function_22629fc(int result, int a2)
{
  *(uint *)result = a2;
  *(ushort *)(result + 4) = 0;
  return result;
}

//----- (02262A04) --------------------------------------------------------
int __fastcall Function_2262a04(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = result;
  v5 = *(ushort *)(result + 4);
  v6 = a2;
  switch ( (uchar)v5 )
  {
    case 1:
      Function_2262aa4();
      result = 2;
      *(ushort *)(v4 + 4) = 2;
      break;
    case 3:
      Function_2262b24(result, a2, v5, a4);
      result = 4;
      *(ushort *)(v4 + 4) = 4;
      break;
    case 4:
      result = Function_2262b2c();
      if ( result == 1 )
      {
        Function_2262ae0(v4, v6);
        result = 0;
        *(ushort *)(v4 + 4) = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02262A50) --------------------------------------------------------
int __fastcall Function_2262a50(int result, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = result;
  v4 = a3;
  v5 = *(ushort *)(result + 4);
  if ( ((v5 + 0xFFFF) & 0xFFFFu) > 1 )
  {
    if ( ((v5 + 65533) & 0xFFFFu) <= 1 )
      Function_2262ae0(result, a2);
    result = 1;
    *(ushort *)(v3 + 4) = 1;
    *(uint *)(v3 + 8) = v4;
  }
  return result;
}

//----- (02262A80) --------------------------------------------------------
int __fastcall Function_2262a80(int result)
{
  uint v1;

  v1 = *(ushort *)(result + 4);
  if ( ((v1 + 65533) & 0xFFFF) > 1 )
  {
    if ( v1 > 1 )
      *(ushort *)(result + 4) = 3;
    else
      *(ushort *)(result + 4) = 0;
  }
  return result;
}

//----- (02262AA4) --------------------------------------------------------
int __fastcall Function_2262aa4(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  Function_22613c0(*a1, a1[2]);
  v4 = *v2;
  Function_226110c(v3);
  v5 = *v2;
  Function_226110c(v3);
  v6 = *v2;
  Function_226110c(v3);
  return Function_226138c(*v2, 1);
}

//----- (02262AE0) --------------------------------------------------------
uint *__fastcall Function_2262ae0(int *a1, int a2)
{
  int *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2261220(a2, *a1, 0);
  Function_2261220(v3, *v2, 1);
  Function_2261220(v3, *v2, 2);
  Function_226138c(*v2, 0);
  Function_22613e0(*v2);
  return Function_22613e8(*v2, 4096, 4096, 4096);
}

//----- (02262B24) --------------------------------------------------------
int __fastcall Function_2262b24(int result)
{
  *(ushort *)(result + 6) = 0;
  return result;
}

//----- (02262B2C) --------------------------------------------------------
int __fastcall Function_2262b2c(int a1)
{
  int *v1;
  int v2;
  long long v3;
  int v4;
  char v5;
  long long v6;
  int v7;

  v1 = (int *)a1;
  v2 = *(short *)(a1 + 6);
  if ( v2 >= 10 )
    return 1;
  *(ushort *)(a1 + 6) = v2 + 1;
  v3 = ll_mul((int)*(short *)(a1 + 6) << 12, *(int *)(a1 + 8));
  v4 = FX_Div((v3 + 2048) >> 12, 40960);
  Function_22613c0(*v1, v4 + v1[2]);
  v5 = s32_div_f(31 * *((short *)v1 + 3), 10);
  Function_22613c8((uchar *)*v1, 31 - v5, 31);
  v6 = ll_mul((int)*((short *)v1 + 3) << 12, 737LL);
  v7 = FX_Div((v6 + 2048) >> 12, 40960);
  Function_22613e8(*v1, v7 + 4096, v7 + 4096, v7 + 4096);
  return 0;
}

//----- (02262BD0) --------------------------------------------------------
int __fastcall Function_2262bd0(int result, int a2)
{
  if ( ((*(ushort *)(result + 4) + 0xFFFF) & 0xFFFFu) > 1 )
  {
    *(ushort *)(result + 4) = 1;
    *(uint *)(result + 8) = a2;
  }
  return result;
}

//----- (02262BEC) --------------------------------------------------------
int __fastcall Function_2262bec(int result, int a2)
{
  int v2;

  v2 = result;
  switch ( (uchar)*(ushort *)(result + 4) )
  {
    case 0u:
      return result;
    case 1u:
      Function_2262c64();
      result = 2;
      *(ushort *)(v2 + 4) = 2;
      break;
    case 2u:
      result = Function_22612b4(a2, *(uint *)result, 0);
      if ( !result )
      {
        result = 3;
        *(ushort *)(v2 + 4) = 3;
      }
      break;
    case 3u:
      Function_2262b24(result);
      result = 4;
      *(ushort *)(v2 + 4) = 4;
      break;
    case 4u:
      result = Function_2262b2c(result);
      if ( result == 1 )
      {
        Function_226138c(*(uint *)v2, 0);
        Function_22613e0(*(uint *)v2);
        Function_22613e8(*(uint *)v2, 4096, 4096, 4096);
        result = 0;
        *(ushort *)(v2 + 4) = 0;
      }
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (02262C64) --------------------------------------------------------
int __fastcall Function_2262c64(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  Function_22613c0(*a1, a1[2]);
  v4 = *v2;
  Function_226110c(v3);
  v5 = *v2;
  Function_226110c(v3);
  return Function_226138c(*v2, 1);
}

//----- (02262C94) --------------------------------------------------------
int __fastcall Function_2262c94(int result, int a2)
{
  int v2;

  v2 = result;
  switch ( (uchar)*(ushort *)(result + 4) )
  {
    case 0u:
      return result;
    case 1u:
      Function_2262d0c();
      result = 2;
      *(ushort *)(v2 + 4) = 2;
      break;
    case 2u:
      result = Function_22612b4(a2, *(uint *)result, 0);
      if ( !result )
      {
        result = 3;
        *(ushort *)(v2 + 4) = 3;
      }
      break;
    case 3u:
      Function_2262b24(result);
      result = 4;
      *(ushort *)(v2 + 4) = 4;
      break;
    case 4u:
      result = Function_2262b2c(result);
      if ( result == 1 )
      {
        Function_226138c(*(uint *)v2, 0);
        Function_22613e0(*(uint *)v2);
        Function_22613e8(*(uint *)v2, 4096, 4096, 4096);
        result = 0;
        *(ushort *)(v2 + 4) = 0;
      }
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (02262D0C) --------------------------------------------------------
int __fastcall Function_2262d0c(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  Function_22613c0(*a1, a1[2]);
  v4 = *v2;
  Function_226110c(v3);
  v5 = *v2;
  Function_226110c(v3);
  v6 = *v2;
  Function_226110c(v3);
  return Function_226138c(*v2, 1);
}

//----- (02262D48) --------------------------------------------------------
int __fastcall Function_2262d48(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v5 = a1;
  if ( a2 != 92 && a2 != 93 )
    ErrorHandler();
  v6 = Function_22610e4(v5, a2, a3, a4);
  v9 = v6;
  v10 = v6;
  LOWORD(v10) = v6 + dword_226D90C[v4 - 92];
  HIWORD(v10) = HIWORD(v6) - 10;
  *(&v9 - 1) = v10;
  v7 = *(&v9 - 1);
  return Function_22610bc();
}

//----- (02262DA8) --------------------------------------------------------
int *__fastcall Function_2262da8(int a1, uint a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = (int *)malloc(a2, 764);
  Call_FillMemWithValue(v4, 0, 0x2FCu);
  *v4 = v2;
  v4[1] = v3;
  v5 = 0;
  v6 = (int)(v4 + 2);
  do
  {
    Function_2262f64(v6, v5++, v2);
    v6 += 36;
  }
  while ( v5 < 20 );
  Function_2262f64(v4 + 182, 0, v2);
  return v4;
}

//----- (02262DF4) --------------------------------------------------------
uint __fastcall Function_2262df4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 8;
  do
  {
    Function_2262f70(v3);
    ++v2;
    v3 += 36;
  }
  while ( v2 < 20 );
  Function_2262f70(v1 + 728);
  return free(v1);
}

//----- (02262E20) --------------------------------------------------------
int __fastcall Function_2262e20(int a1)
{
  return Function_2262f14(a1, 0);
}

//----- (02262E2C) --------------------------------------------------------
int __fastcall Function_2262e2c(int a1)
{
  return Function_2262f14(a1, 1);
}

//----- (02262E38) --------------------------------------------------------
int __fastcall Function_2262e38(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (02262E3C) --------------------------------------------------------
int __fastcall Function_2262e3c(ushort *a1, uint a2)
{
  ushort *v2;
  uint v3;
  int *v4;

  v2 = a1;
  v3 = a2;
  if ( *((uint *)a1 + 2) )
    ErrorHandler();
  v4 = (int *)malloc(*v2, v3);
  *((uint *)v2 + 2) = v4;
  Call_FillMemWithValue(v4, 0, v3);
  return *((uint *)v2 + 2);
}

//----- (02262E64) --------------------------------------------------------
int __fastcall Function_2262e64(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !*(uint *)(a1 + 8) )
    ErrorHandler();
  free(*(uint *)(v1 + 8));
  result = 0;
  *(uint *)(v1 + 8) = 0;
  return result;
}

//----- (02262E80) --------------------------------------------------------
int __fastcall Function_2262e80(int a1)
{
  return *(uint *)(a1 + 8);
}

//----- (02262E84) --------------------------------------------------------
int __fastcall Function_2262e84(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (02262E88) --------------------------------------------------------
int __fastcall Function_2262e88(int result, int a2)
{
  *(uint *)(result + 16) = a2;
  return result;
}

//----- (02262E8C) --------------------------------------------------------
int __fastcall Function_2262e8c(int result)
{
  ++*(uint *)(result + 16);
  return result;
}

//----- (02262E94) --------------------------------------------------------
int __fastcall Function_2262e94(int a1, uint a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    ErrorHandler();
  if ( v5 >= 0x14 )
    ErrorHandler();
  return Function_2262fd4(v4 + 8 + 36 * v5, v6, v7);
}

//----- (02262EC0) --------------------------------------------------------
int __fastcall Function_2262ec0(int a1, uint a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    ErrorHandler();
  if ( v5 >= 0x14 )
    ErrorHandler();
  return Function_226300c(v4 + 8 + 36 * v5, v6, v7);
}

//----- (02262EEC) --------------------------------------------------------
int __fastcall Function_2262eec(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a1 )
    ErrorHandler();
  if ( v4 >= 0x14 )
    ErrorHandler();
  return Function_2263008(v3 + 8 + 36 * v4, v5);
}

//----- (02262F14) --------------------------------------------------------
int __fastcall Function_2262f14(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v7 = a2;
  if ( Function_226307c(a1 + 728) == 1 )
    return Function_2262f94(v2 + 728, v2, v7, 0);
  v4 = v2 + 8;
  v5 = 0;
  v6 = v2 + 8;
  do
  {
    result = Function_226307c(v4);
    if ( result == 1 )
      result = Function_2262f94(v6, v2, v7, v5);
    ++v5;
    v4 += 36;
    v6 += 36;
  }
  while ( v5 < 20 );
  return result;
}

//----- (02262F64) --------------------------------------------------------
int __fastcall Function_2262f64(int result, char a2, short a3)
{
  *(ushort *)result = a3;
  *(uchar *)(result + 2) = 1;
  *(uchar *)(result + 3) = a2;
  return result;
}

//----- (02262F70) --------------------------------------------------------
int *__fastcall Function_2262f70(int *a1)
{
  int *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = a1[2];
  if ( v2 )
    free(v2);
  v3 = v1[6];
  if ( v3 )
    free(v3);
  return Call_FillMemWithValue(v1, 0, 0x24u);
}

//----- (02262F94) --------------------------------------------------------
uint __fastcall Function_2262f94(int a1, int a2, int a3, int a4)
{
  int (__fastcall *v4)(int, uint, int);
  int v5;
  uint result;
  int v7;
  int v8;

  v5 = a1;
  result = *(uchar *)(a1 + 2);
  v7 = a2;
  v8 = a4;
  if ( result )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        result = *(uint *)(v5 + 4);
        v4 = *(int (__fastcall **)(int, uint, int))(result + 4);
      }
      else
      {
        result = ErrorHandler();
      }
    }
    else
    {
      result = *(uint *)(v5 + 4);
      v4 = *(int (__fastcall **)(int, uint, int))result;
    }
    if ( v4 )
    {
      result = v4(v5, *(uint *)(v7 + 4), v8);
      if ( result == 1 )
        result = Function_2263044(v5);
    }
  }
  return result;
}

//----- (02262FD4) --------------------------------------------------------
int __fastcall Function_2262fd4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( Function_226306c() != 1 )
    ErrorHandler();
  if ( *(uint *)(v3 + 8) )
    ErrorHandler();
  return Function_226308c(v3 + 4, v4, v5);
}

//----- (02263008) --------------------------------------------------------
int __fastcall Function_2263008(int result, char a2)
{
  *(uchar *)(result + 2) = a2;
  return result;
}

//----- (0226300C) --------------------------------------------------------
int __fastcall Function_226300c(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  uint *v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( Function_226306c() != 1 )
    ErrorHandler();
  v6 = v3 + 5;
  v7 = v3[2];
  *v6 = v3[1];
  v6[1] = v7;
  v8 = v3 + 7;
  v9 = v3[4];
  *v8 = v3[3];
  v8[1] = v9;
  return Function_226308c(v3 + 1, v4, v5);
}

//----- (02263044) --------------------------------------------------------
int __fastcall Function_2263044(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  uint *v4;
  int v5;

  v1 = a1;
  if ( a1[2] )
    ErrorHandler();
  v2 = v1 + 1;
  v3 = v1[6];
  *v2 = v1[5];
  v2[1] = v3;
  v4 = v1 + 3;
  v5 = v1[8];
  *v4 = v1[7];
  v4[1] = v5;
  return Function_2263098(v1 + 5);
}

//----- (0226306C) --------------------------------------------------------
BOOL __fastcall Function_226306c(int a1)
{
  return *(uint *)(a1 + 20) == 0;
}

//----- (0226307C) --------------------------------------------------------
BOOL __fastcall Function_226307c(int a1)
{
  return *(uint *)(a1 + 4) != 0;
}

//----- (0226308C) --------------------------------------------------------
uint *__fastcall Function_226308c(uint *result, int a2, int a3, int a4, int a5)
{
  *result = a2;
  result[3] = a4;
  result[1] = a5;
  result[2] = a3;
  return result;
}

//----- (02263098) --------------------------------------------------------
uint *__fastcall Function_2263098(uint *result)
{
  *result = 0;
  result[3] = 0;
  result[1] = 0;
  result[2] = 0;
  return result;
}

//----- (022630A4) --------------------------------------------------------
int __fastcall Function_22630a4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_225deec(a1);
  v3 = Function_225df10(v1);
  v4 = Function_225df2c(v1);
  v5 = Function_225dee8(v1);
  ((void (__fastcall *)(int, int))dword_222E3E4[0])(v5, 1);
  if ( *(ushort *)(v2 + 6) >= 4u )
    ErrorHandler();
  return Function_2262e94(v3, v4, (int)(&off_226DA78 + 2 * *(ushort *)(v2 + 6)), 0);
}

//----- (022630EC) --------------------------------------------------------
int __fastcall Function_22630ec(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_225df2c(a1);
  result = Function_225df10(v1);
  v4 = result;
  v5 = 0;
  do
  {
    if ( v2 != v5 )
      result = Function_2262e94(v4, v5, (int)&off_226DA10, 0);
    ++v5;
  }
  while ( v5 < 20 );
  return result;
}

//----- (02263120) --------------------------------------------------------
BOOL __fastcall Function_2263120(char a1, int a2)
{
  switch ( a1 )
  {
    case 0:
      a2 = 64;
      break;
    case 1:
      a2 = 128;
      break;
    case 2:
      a2 = 32;
      break;
    case 3:
      a2 = 16;
      break;
    default:
      return (dword_21BF6C0 & a2) != 0;
  }
  return (dword_21BF6C0 & a2) != 0;
}

//----- (0226315C) --------------------------------------------------------
int __fastcall Function_226315c(int a1, int a2, uint a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int result;
  void (__fastcall *v14)(int, int, uint, uint);
  int v15;
  uint v16;
  int v17;
  int v18;

  v15 = a2;
  v5 = a1;
  v16 = a3;
  v6 = a4;
  v18 = Function_2262e80(a1);
  v17 = Function_225df10(v15);
  v7 = 0;
  if ( *(uint *)(v6 + 8) != 3 )
  {
    v8 = v6;
    while ( 2 )
    {
      v9 = 0;
      do
      {
        v10 = *(uchar *)(v8 + v9);
        if ( v10 == 255 )
          break;
        if ( a5 == v10 )
        {
          v11 = 24 * v7;
          v12 = v6 + 24 * v7;
          result = *(uint *)(v12 + 8);
          if ( result )
          {
            if ( result == 1 )
            {
              v14 = *(void (__fastcall **)(int, int, uint, uint))(v12 + 20);
              if ( v14 )
                v14(v18, v15, v16, *(uchar *)(v9 + v12));
              result = Function_2262ec0(v17, v16, v6 + v11 + 12, 0);
            }
          }
          else
          {
            Function_2262e64(v5);
            result = Function_2262e94(v17, v16, v12 + 12, 0);
          }
          return result;
        }
        ++v9;
      }
      while ( v9 < 8 );
      v8 += 24;
      ++v7;
      if ( *(uint *)(v8 + 8) != 3 )
        continue;
      break;
    }
  }
  return ErrorHandler();
}

//----- (022631F8) --------------------------------------------------------
int __fastcall Function_22631f8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int v10;
  int v11;
  int v12;

  v2 = a2;
  v3 = a1;
  v4 = Function_225def0(a1);
  v7 = Function_225cb28(v4, v2, v5, v6);
  v8 = (uint *)Function_225df08(v3);
  Function_225d054(v7);
  Function_2260b20(v8, v10, v11, v12);
  return v7;
}

//----- (02263230) --------------------------------------------------------
int __fastcall Function_2263230(int a1, short a2, short a3, int a4, int a5)
{
  int v5;
  short v6;
  short v7;
  int v8;
  int v9;
  int v10;
  uint *v11;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = Function_225def0(a1);
  v10 = Function_225df08(v5);
  v11 = Function_225cb5c(v9, v6, v7, v8);
  Function_225cd7c(v9, v11, 0, a5);
  return Function_2260b38(v10, (int)v11);
}

//----- (02263270) --------------------------------------------------------
int __fastcall Function_2263270(int a1)
{
  int v1;
  int result;

  v1 = a1;
  *(uint *)a1 = 0;
  *(uchar *)(a1 + 4) = 0;
  *(uchar *)(a1 + 5) = 1;
  *(uchar *)(a1 + 6) = Function_201d35c() & 3;
  result = 1;
  *(uchar *)(v1 + 7) = 1;
  return result;
}

//----- (02263290) --------------------------------------------------------
int __fastcall Function_2263290(uchar *a1)
{
  uchar *v1;
  int v2;

  v1 = a1;
  v2 = (uchar)a1[5];
  switch ( v2 )
  {
    case 0:
      return 0;
    case 1:
      if ( (uchar)v1[6] - 1 <= 0 )
        v1[5] = 2;
      else
        --v1[6];
      break;
    case 2:
      ++v1[4];
      *(uint *)v1 = (ll_mul(
                         SLOWORD(Unknown_20f983c[(int)((0x7FFF * (char)v1[4]
                                                             + ((uint)(0x7FFF * (char)v1[4] >> 1) >> 30)) << 14) >> 20]),
                         24576LL)
                     + 2048) >> 12;
      if ( (char)v1[4] >= 4 )
      {
        if ( v1[7] == 1 )
        {
          v1[4] = 0;
          v1[5] = 1;
          v1[6] = Function_201d35c() & 3;
        }
        else
        {
          v1[5] = 0;
        }
      }
      break;
  }
  return *(uint *)v1;
}

//----- (0226332C) --------------------------------------------------------
int __fastcall Function_226332c(int result)
{
  *(uchar *)(result + 7) = 0;
  return result;
}

//----- (02263334) --------------------------------------------------------
BOOL __fastcall Function_2263334(int a1)
{
  return *(uchar *)(a1 + 5) != 0;
}

//----- (02263344) --------------------------------------------------------
int __fastcall Function_2263344(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int v9;
  int v10;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_225def0(a2);
  v9 = Function_225cc70(v6, v5);
  v10 = Function_225dee8(v3);
  v7 = Function_2262e84(v4);
  if ( !v7 )
  {
    Function_225e46c(v3, v5);
    Function_2262e88(v4, 1);
    if ( v5 == ((int (__fastcall *)(int))dword_222E338[0])(v10) )
      Function_225e43c(v3);
    return 0;
  }
  if ( v7 == 1 )
  {
    if ( Function_225e4ac(v3, v5) == 1 )
      Function_2262e88(v4, 2);
    return 0;
  }
  if ( v7 != 2 )
    return 0;
  if ( v5 == ((int (__fastcall *)(int))dword_222E338[0])(v10) )
  {
    Function_225cdec(v6, v9, 1);
  }
  else
  {
    if ( Function_225e3f0(v3) == 1 )
    {
      if ( v5 != Function_225e3e0(v3) )
        Function_225cdec(v6, v9, 2);
    }
    else
    {
      Function_225cdec(v6, v9, 2);
    }
    Function_225df4c(v3, (uchar)v5, 0);
  }
  Function_225e44c(v3);
  return 1;
}

//----- (02263414) --------------------------------------------------------
int __fastcall Function_2263414(ushort *a1, int a2, int a3)
{
  int v3;
  ushort *v4;
  uint *v5;
  ushort *v6;
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
  int v27;
  int v28;
  int v29;

  v3 = a2;
  v4 = a1;
  v27 = a3;
  v28 = Function_225dee8(a2);
  v29 = Function_225def0(v3);
  v5 = (uint *)Function_225ccac(v29);
  v6 = (ushort *)Function_2262e80((int)v4);
  switch ( (uchar)Function_2262e84((int)v4) )
  {
    case 0u:
      v7 = Function_2262e3c(v4, 0x2Cu);
      Function_22653dc();
      ((void (__fastcall *)(int))dword_222E2CC[0])(v28);
      *(ushort *)(v7 + 2) = ((int (__fastcall *)(int))dword_222F0DC[0])(v28);
      ((void (__fastcall *)(int, uint))dword_222E528[0])(v28, *(ushort *)(v7 + 2));
      v8 = Function_22631f8(v3, v27);
      Function_225cdec(v29, v8, 4);
      Function_2262e8c((int)v4);
      return 0;
    case 1u:
      if ( !Function_225df30(v3) && Function_225ce38((int)v5) == 1 )
      {
        Function_225cdec(v29, (int)v5, 0);
        v9 = Function_225df08(v3);
        Function_2260b38(v9, (int)v5);
        *((uint *)v6 + 1) = 16;
        Function_2262e8c((int)v4);
      }
      return 0;
    case 2u:
      v10 = *((uint *)v6 + 1) - 1;
      *((uint *)v6 + 1) = v10;
      if ( !v10 )
      {
        Function_225df18(v3, 1);
        Function_2262e8c((int)v4);
      }
      return 0;
    case 3u:
      Function_225cd7c(v29, v5, 2, 0);
      *v6 = 4;
      Function_2262e88((int)v4, 7);
      return 0;
    case 4u:
      Function_225cd7c(v29, v5, 2, 0);
      *v6 = 5;
      Function_2262e88((int)v4, 7);
      return 0;
    case 5u:
      Function_225cd7c(v29, v5, 1, 3);
      *v6 = 6;
      Function_2262e88((int)v4, 7);
      return 0;
    case 6u:
      Function_225cd7c(v29, v5, 2, 3);
      *v6 = 8;
      Function_2262e88((int)v4, 7);
      return 0;
    case 7u:
      if ( !Function_225cd60(v5, 5) )
        Function_2262e88((int)v4, *v6);
      return 0;
    case 8u:
      v11 = Function_225e20c(v3, 1, 0);
      Function_225df8c(v3, v11);
      *v6 = 16;
      Function_2262e88((int)v4, 21);
      return 0;
    case 9u:
      Function_225e20c(v3, 1, 5);
      Function_225df9c(v3);
      Function_225e074(v3, (int)(v6 + 4), 0, 0);
      Function_225e0f4(v3);
      Function_2262e88((int)v4, 10);
      return 0;
    case 0xAu:
      v12 = 0;
      v13 = Function_225e0d4(v3);
      if ( !v13 )
        goto LABEL_22;
      if ( v13 == -2 )
      {
        Function_2005748(0x5DCu);
LABEL_22:
        v6[20] = 0;
        v12 = 1;
      }
      else if ( v13 != -1 )
      {
        v6[20] = v13;
        v12 = 1;
        Function_225e30c(v3, 0, v13);
      }
      if ( v12 == 1 )
      {
        Function_225e0e4(v3);
        if ( v6[20] )
        {
          Function_225e20c(v3, 1, 8);
          Function_225df9c(v3);
          Function_225e164(v3);
          Function_2262e88((int)v4, 11);
        }
        else
        {
          Function_2262e88((int)v4, 17);
        }
      }
      return 0;
    case 0xBu:
      v14 = Function_225e1c4(v3);
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          Function_225e1f8(v3);
          Function_2262e88((int)v4, 9);
        }
      }
      else
      {
        Function_225e1f8(v3);
        Function_2262e88((int)v4, 12);
        ((void (__fastcall *)(int, uint, uint))dword_222E56C[0])(v28, v6[20], v6[21]);
        Function_225e390(v3);
        Function_2005748(0x5E5u);
      }
      return 0;
    case 0xCu:
      Function_225e20c(v3, 1, 10);
      Function_225df9c(v3);
      Function_225e074(v3, (int)(v6 + 4), 0, 0);
      Function_225e0f4(v3);
      Function_2262e88((int)v4, 13);
      return 0;
    case 0xDu:
      v15 = 0;
      v16 = Function_225e0d4(v3);
      if ( !v16 )
        goto LABEL_38;
      if ( v16 == -2 )
      {
        Function_2005748(0x5DCu);
LABEL_38:
        v6[21] = 0;
        v15 = 1;
      }
      else if ( v16 != -1 )
      {
        v6[21] = v16;
        v15 = 1;
        Function_225e30c(v3, 0, v16);
      }
      if ( v15 == 1 )
      {
        Function_225e0e4(v3);
        if ( v6[21] )
        {
          Function_225e20c(v3, 1, 8);
          Function_225df9c(v3);
          Function_225e164(v3);
          Function_2262e88((int)v4, 15);
        }
        else
        {
          Function_2262e88((int)v4, 19);
        }
      }
      break;
    case 0xEu:
      return 0;
    case 0xFu:
      v17 = Function_225e1c4(v3);
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          Function_225e1f8(v3);
          Function_2262e88((int)v4, 12);
        }
      }
      else
      {
        Function_225e1f8(v3);
        Function_2262e88((int)v4, 20);
        ((void (__fastcall *)(int, uint, uint))dword_222E56C[0])(v28, v6[20], v6[21]);
        Function_225e390(v3);
        Function_2005748(0x5E5u);
      }
      break;
    case 0x10u:
      Function_2005748(0x5A8u);
      Function_225e430(v3);
      Function_225e234(v3, v27, 0);
      v18 = v6[1];
      Function_225e29c(v3);
      if ( ((int (__fastcall *)(int, int))dword_222E924[0])(v28, v27) )
        v19 = Function_225e20c(v3, 1, 124);
      else
        v19 = Function_225e20c(v3, 1, 1);
      Function_225df8c(v3, v19);
      *v6 = 18;
      Function_2262e88((int)v4, 21);
      break;
    case 0x11u:
      v20 = Function_225e20c(v3, 1, 2);
      Function_225df8c(v3, v20);
      *v6 = 22;
      Function_2262e88((int)v4, 21);
      break;
    case 0x12u:
      if ( !Function_20057d4(0x5A8u) && dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        v21 = Function_225e20c(v3, 1, 4);
        Function_225df8c(v3, v21);
        *v6 = 9;
        Function_2262e88((int)v4, 21);
        ((void (__fastcall *)(int, uint, uint))dword_222E56C[0])(v28, v6[20], v6[21]);
        Function_225e328(v3, v27, 0);
      }
      break;
    case 0x13u:
      Function_225e30c(v3, 0, v6[20]);
      v22 = Function_225e20c(v3, 1, 12);
      Function_225df8c(v3, v22);
      *v6 = 17;
      Function_2262e88((int)v4, 21);
      break;
    case 0x14u:
      Function_225e30c(v3, 0, v6[20]);
      Function_225e30c(v3, 1u, v6[21]);
      v23 = Function_225e20c(v3, 1, 11);
      Function_225df8c(v3, v23);
      *v6 = 17;
      Function_2262e88((int)v4, 21);
      break;
    case 0x15u:
      if ( Function_225dfac(v3) == 1 )
        Function_2262e88((int)v4, *v6);
      break;
    case 0x16u:
      Function_225cdec(v29, (int)v5, 1);
      Function_225dfec(v3);
      Function_2265450(v6, v3);
      Function_2262e64((int)v4);
      v24 = Function_225df10(v3);
      v25 = Function_225df2c(v3);
      Function_2262e94(v24, v25, (int)&off_226D9D0, 0);
      break;
  }
  return 0;
}

//----- (02263910) --------------------------------------------------------
int __fastcall Function_2263910(int a1, int a2, short a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  short v15;
  int v16;
  uint *v17;

  v3 = a2;
  v4 = a1;
  v15 = a3;
  v16 = Function_225dee8(a2);
  v5 = Function_225deec(v3);
  v17 = (uint *)Function_225def0(v3);
  v6 = (uint *)Function_225ccac((int)v17);
  v7 = Function_2262e84(v4);
  if ( v7 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_2263950 + v7) + 36059474);
  switch ( (uchar)v7 )
  {
    case 0:
      v8 = Function_2263230(v3, v15, *(ushort *)v5, *(ushort *)(v5 + 2), 1);
      if ( !((int (__fastcall *)(int))dword_2231760[0])(v8) )
        ((void (*)(void))dword_2232AA4[0])();
      ((void (__fastcall *)(int, uint))dword_222E31C[0])(v16, 0);
      Function_2262e8c(v4);
      break;
    case 1:
      if ( ((int (*)(void))dword_2231760[0])() || ((int (*)(void))dword_2232AD4[0])() )
      {
        v9 = Function_225deec(v3);
        if ( !Function_225df30(v3) )
        {
          Function_2262e8c(v4);
          Function_225cdac(v17, v6, 2, *(ushort *)(v9 + 4));
        }
      }
      break;
    case 2:
      if ( !Function_225cd60(v6, 5) )
      {
        Function_225df18(v3, 1);
        if ( ((int (__fastcall *)(int))dword_222E2B4[0])(v16) == 1 )
          Function_2262e8c(v4);
        else
          Function_2262e88(v4, 5);
      }
      break;
    case 3:
      v10 = *(ushort *)(v5 + 8);
      Function_225e27c(v3);
      v11 = Function_225e20c(v3, 0, 21);
      Function_225df8c(v3, v11);
      Function_2262e8c(v4);
      break;
    case 4:
      if ( Function_225dfac(v3) == 1 )
      {
        Function_225dfec(v3);
        Function_2262e8c(v4);
      }
      break;
    case 5:
      Function_225cdec((int)v17, (int)v6, 1);
      v12 = Function_225df10(v3);
      v13 = Function_225df2c(v3);
      Function_2262e94(v12, v13, (int)&off_226D9D0, 0);
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02263A58) --------------------------------------------------------
int __fastcall Function_2263a58(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v14;
  int v15;
  uint *v16;
  int v17;

  v3 = a2;
  v4 = a1;
  v14 = a3;
  v15 = Function_225df10(a2);
  v16 = (uint *)Function_225def0(v3);
  v5 = (uint *)Function_225ccac((int)v16);
  v17 = Function_225dee8(v3);
  v6 = Function_225deec(v3);
  v7 = Function_2262e84(v4);
  if ( v7 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_2263AA0 + v7) + 36059810);
  switch ( (uchar)v7 )
  {
    case 0:
      Function_2263230(v3, v14, *(ushort *)v6, *(ushort *)(v6 + 2), 1);
      Function_2262e8c(v4);
      Function_2262ec0(v15, v14, (int)&off_226DA00, 0);
      ((void (__fastcall *)(int, uint))dword_222E2C4[0])(v17, 0);
      ((void (__fastcall *)(int))dword_222E2CC[0])(v17);
      break;
    case 1:
      v8 = Function_225deec(v3);
      if ( !Function_225df30(v3) )
      {
        Function_2262e8c(v4);
        Function_225cdac(v16, v5, 2, *(ushort *)(v8 + 4));
      }
      break;
    case 2:
      if ( !Function_225cd60(v5, 5) )
      {
        Function_225df18(v3, 1);
        if ( ((int (__fastcall *)(int))dword_222E220[0])(v17) == 1 )
          Function_2262e88(v4, 3);
        else
          Function_2262e88(v4, 5);
      }
      break;
    case 3:
      v9 = *(ushort *)(v6 + 8);
      Function_225e27c(v3);
      v10 = Function_225e20c(v3, 0, 8);
      Function_225df8c(v3, v10);
      Function_2262e8c(v4);
      break;
    case 4:
      if ( Function_225dfac(v3) == 1 )
      {
        Function_225dfec(v3);
        Function_2262e8c(v4);
      }
      break;
    case 5:
      Function_225cdec((int)v16, (int)v5, 1);
      v11 = Function_225df10(v3);
      v12 = Function_225df2c(v3);
      Function_2262e94(v11, v12, (int)&off_226D9D0, 0);
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02263BA4) --------------------------------------------------------
int __fastcall Function_2263ba4(int a1, int a2, short a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  short v12;
  int v13;
  uint *v14;

  v3 = a2;
  v4 = a1;
  v12 = a3;
  v5 = Function_225dee8(a2);
  v13 = Function_225deec(v3);
  v14 = (uint *)Function_225def0(v3);
  v6 = (uint *)Function_225ccac((int)v14);
  switch ( (uchar)Function_2262e84(v4) )
  {
    case 0u:
      Function_2263230(v3, v12, *(ushort *)v13, *(ushort *)(v13 + 2), 1);
      ((void (__fastcall *)(int, uint))dword_222E31C[0])(v5, 0);
      Function_2262e8c(v4);
      break;
    case 1u:
      v7 = Function_225deec(v3);
      if ( !Function_225df30(v3) )
      {
        Function_2262e8c(v4);
        Function_225cdac(v14, v6, 2, *(ushort *)(v7 + 4));
      }
      break;
    case 2u:
      if ( !Function_225cd60(v6, 5) )
      {
        Function_225df18(v3, 1);
        if ( ((int (__fastcall *)(int))dword_222E2B4[0])(v5) == 1 )
          Function_2262e8c(v4);
        else
          Function_2262e88(v4, 5);
      }
      break;
    case 3u:
      v8 = Function_225e20c(v3, 1, 91);
      Function_225df8c(v3, v8);
      Function_2262e8c(v4);
      break;
    case 4u:
      if ( Function_225dfac(v3) == 1 )
      {
        Function_225dfec(v3);
        Function_2262e8c(v4);
      }
      break;
    case 5u:
      Function_225cdec((int)v14, (int)v6, 1);
      v9 = Function_225df10(v3);
      v10 = Function_225df2c(v3);
      Function_2262e94(v9, v10, (int)&off_226D9D0, 0);
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02263CC8) --------------------------------------------------------
int __fastcall Function_2263cc8(ushort *a1, int a2, uint a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v19;
  uint *v20;
  int v21;
  int v22;
  uint *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  ushort *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint *v34;
  int v35;
  int v36;
  uint *v37;
  int v38;
  int *v39;
  uint *v40;
  int v41;
  uint *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;

  v47 = a4;
  v28 = a1;
  v4 = a2;
  v5 = a3;
  v39 = (int *)Function_2262e80((int)a1);
  v6 = Function_2262e84((int)v28);
  if ( !v6 )
  {
    Function_2262e3c(v28, 4u);
    Function_2262e8c((int)v28);
    return 0;
  }
  if ( v6 != 1 )
    return 0;
  Function_225e43c(v4);
  v32 = Function_225df10(v4);
  v33 = Function_225dee8(v4);
  v7 = (uint *)Function_225def0(v4);
  v34 = (uint *)Function_225df00(v4);
  v35 = Function_225def8(v4);
  v8 = Function_225ccb0((int)v7);
  if ( v8 )
  {
    if ( ((int (__fastcall *)(int))dword_222E12C[0])(v33)
      || ((int (__fastcall *)(int))dword_222E19C[0])(v33) != 1
      || ((int (__fastcall *)(int))dword_222E0F4[0])(v33) )
    {
      if ( Function_225ce3c(v8) )
        Function_225cdec((int)v7, v8, 0);
    }
    else if ( Function_225ce3c(v8) != 9 )
    {
      Function_225cdec((int)v7, v8, 9);
    }
  }
  v37 = (uint *)Function_225ccac((int)v7);
  v38 = Function_225cd60(v37, 5);
  v29 = Function_225cd60(v37, 6);
  v9 = Function_225cd34(v37);
  v44 = v9;
  v10 = &v27 - 1;
  v46 = v9;
  *(ushort *)v10 = v9;
  v11 = v29;
  *((ushort *)v10 + 1) = HIWORD(v46);
  v12 = ((int (__fastcall *)(uint, int))dword_222C078[0])(*(&v27 - 1), v11);
  v43 = v12;
  v45 = v12;
  v36 = Function_225c8c4(v34);
  v31 = SHIWORD(v45) / 16;
  v30 = (short)v45 / 16;
  v13 = Function_225c8c4(v34);
  v14 = Function_225e3e0(v4);
  if ( v14 != v5 && Function_225df84(v4, (uchar)v14) )
    Function_225e3d0(v4);
  if ( v38 )
  {
    if ( Function_225e400(v4) == 1 && (uint)(v38 - 1) <= 2 )
    {
      v15 = Function_225e3e0(v4);
      if ( v15 != v5 )
      {
        v16 = Function_225cc70((int)v7, v15);
        v17 = v16;
        if ( v16 )
        {
          if ( !Function_225ce3c(v16) )
            Function_225cdec((int)v7, v17, *v39);
        }
      }
      Function_225e3d0(v4);
    }
    return 0;
  }
  Function_225e43c(v4);
  if ( Function_225c930(v36) == 1 )
  {
    Function_226315c((int)v28, v4, v5, (int)dword_226DBB8, v36);
    Function_225cdec((int)v7, (int)v37, 0);
    Function_225df3c(v4, v36);
    Function_225e43c(v4);
    return 0;
  }
  if ( Function_225e45c(v4) == 1 )
  {
    Function_225cdec((int)v7, (int)v37, 0);
    Function_2262ec0(v32, v5, (int)&off_226DA18, 0);
    Function_225e43c(v4);
    return 0;
  }
  if ( ((int (__fastcall *)(int))dword_222EE08[0])(v33) )
  {
    Function_2262ec0(v32, v5, (int)&off_226DA08, 0);
    Function_225cdec((int)v7, (int)v37, 0);
    Function_225e43c(v4);
    return 0;
  }
  v19 = dword_21BF6C4;
  if ( dword_21BF6C4 & 1 )
  {
    v20 = (uint *)Function_225ce40(v7, v37);
    v40 = v20;
    if ( v20 )
    {
      v41 = Function_225cd60(v20, 5);
      v21 = Function_225cd60(v40, 4);
      if ( v21 != 254 )
      {
        v22 = Function_225df64(v4, (uchar)v21);
        if ( !v41 && !v22 )
        {
          Function_2262ec0(v32, v5, (int)&off_226D9F8, 0);
          Function_225cdec((int)v7, (int)v37, 0);
          Function_225cdec((int)v7, (int)v40, 0);
          Function_225e43c(v4);
          return 0;
        }
      }
    }
    if ( Function_225c990(v13) == 1 && !Function_225cd60(v37, 6) )
    {
      Function_2262484(v35, (uchar)v30, (uchar)v31);
      Function_225df3c(v4, v13);
      Function_225e43c(v4);
      return 0;
    }
    if ( Function_225c970(v13) == 1 )
    {
      Function_226315c((int)v28, v4, v5, (int)dword_226DB28, v13);
      Function_225cdec((int)v7, (int)v37, 0);
      Function_225df3c(v4, v13);
      Function_225e43c(v4);
      return 0;
    }
  }
  if ( Function_2263120(v29, v19) == 1 )
  {
    if ( !v29 && Function_225c950(v13) == 1 )
    {
      Function_226315c((int)v28, v4, v5, (int)dword_226DAF8, v13);
      Function_225cdec((int)v7, (int)v37, 0);
      Function_225df3c(v4, v13);
      Function_225e43c(v4);
      return 0;
    }
    v23 = (uint *)Function_225ce40(v7, v37);
    v42 = v23;
    if ( v23 )
    {
      v24 = Function_225cd60(v23, 4);
      if ( v24 != 254 && !Function_225e3f0(v4) && !Function_225df84(v4, (uchar)v24) )
      {
        Function_225e328(v4, v24, 1);
        v25 = Function_225ce3c((int)v42);
        *v39 = v25;
        Function_225cdec((int)v7, (int)v42, 0);
        return 0;
      }
    }
  }
  if ( !(dword_21BF6C4 & 0x400) )
    return 0;
  if ( Function_225e3f0(v4) )
  {
    if ( Function_225e3e0(v4) == v5 )
    {
      Function_225e3d0(v4);
      Function_2005748(0x5DCu);
    }
  }
  else
  {
    v26 = ((int (__fastcall *)(int))dword_222E338[0])(v33);
    Function_225e328(v4, v26, 0);
    Function_2005748(0x5DCu);
  }
  return 0;
}

//----- (0226412C) --------------------------------------------------------
int __fastcall Function_226412c(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;

  v2 = a2;
  v3 = Function_225def0(a2);
  v4 = (uint *)Function_225ccac(v3);
  if ( Function_225cd60(v4, 5) )
    Function_225e43c(v2);
  return 0;
}

//----- (02264150) --------------------------------------------------------
int __fastcall Function_2264150(int a1, uchar *a2, uint a3)
{
  int v3;
  uchar *v4;
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
  int v18;
  int v19;
  int v21;
  uint *v22;
  uint *v23;
  int v24;
  int v25;
  int v26;
  uint *v27;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  switch ( (uchar)Function_2262e84(a1) )
  {
    case 0u:
      v6 = Function_225def0((int)v4);
      v7 = v6;
      v8 = Function_225ccac(v6);
      Function_225cdec(v7, v8, 0);
      v9 = Function_225dee8((int)v4);
      ((void (__fastcall *)(int, int))dword_222E3E4[0])(v9, 11);
      Function_2005748(0x5DDu);
      v10 = Function_225e20c((int)v4, 1, 65);
      Function_225df8c((int)v4, v10);
      Function_2262e8c(v3);
      return 0;
    case 1u:
      if ( Function_225dfac((int)v4) == 1 )
        Function_2262e8c(v3);
      return 0;
    case 2u:
      v11 = Function_225e20c((int)v4, 2, 25);
      Function_225df8c((int)v4, v11);
      Function_2262e8c(v3);
      return 0;
    case 3u:
      if ( Function_225dfac((int)v4) == 1 )
        Function_2262e8c(v3);
      return 0;
    case 4u:
      Function_225e194((int)v4);
      Function_2262e8c(v3);
      return 0;
    case 5u:
      v12 = 0;
      v13 = Function_225e1c4((int)v4);
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          Function_2262e88(v3, 8);
          v12 = 1;
        }
      }
      else
      {
        Function_2262e88(v3, 6);
        v12 = 1;
      }
      if ( v12 == 1 )
      {
        Function_225e1f8((int)v4);
        Function_225dfec((int)v4);
      }
      return 0;
    case 6u:
      Function_225df18((int)v4, 0);
      v14 = Function_225def0((int)v4);
      v15 = Function_225ccac(v14);
      v16 = Function_225df08((int)v4);
      Function_2260b3c(v16);
      Function_225cdec(v14, v15, 3);
      Function_2262e88(v3, 7);
      return 0;
    case 7u:
      v17 = Function_225def0((int)v4);
      v18 = Function_225ccac(v17);
      if ( Function_225ce38(v18) != 1 )
        return 0;
      Function_225df34(v4, 1);
      Function_225df38((int)v4, 0);
      v19 = Function_225dee8((int)v4);
      ((void (__fastcall *)(int, int))dword_222E3E4[0])(v19, 11);
      return 1;
    case 8u:
      v21 = Function_225def0((int)v4);
      v22 = (uint *)v21;
      v23 = (uint *)Function_225ccac(v21);
      Function_225cdac(v22, v23, 2, 0);
      Function_2262e8c(v3);
      break;
    case 9u:
      v24 = Function_225dee8((int)v4);
      ((void (__fastcall *)(int, int))dword_222E3E4[0])(v24, 1);
      v25 = Function_225def0((int)v4);
      v26 = Function_225df10((int)v4);
      v27 = (uint *)Function_225ccac(v25);
      if ( !Function_225cd60(v27, 5) )
      {
        Function_225cdec(v25, (int)v27, 1);
        Function_2262e94(v26, v5, (int)&off_226D9D0, 0);
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02264324) --------------------------------------------------------
int __fastcall Function_2264324(ushort *a1, int a2, uint a3)
{
  uchar *v3;
  ushort *v4;
  uint *v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  char v15;
  int v16;
  int v17;
  int v18;
  short v19;
  ushort *v20;
  int v21;
  uchar v23;
  char v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint *v34;
  uchar v35;
  uchar v36;
  uchar v37;
  uchar v38;

  v3 = (uchar *)a2;
  v4 = a1;
  v29 = a3;
  v34 = (uint *)Function_225def0(a2);
  v5 = (uint *)Function_225cc70((int)v34, v29);
  v32 = Function_225df40((int)v3);
  v6 = Function_2262e80((int)v4);
  v33 = Function_225dee8((int)v3);
  v7 = Function_2262e84((int)v4);
  if ( v7 <= 8 )
    JUMPOUT(__CS__, *((short *)&off_226436E + v7) + 36062064);
  switch ( (uchar)v7 )
  {
    case 0:
      v8 = Function_2262e3c(v4, 0xCu);
      switch ( (uchar)Function_2264b64(v32) )
      {
        case 0u:
          *(uint *)(v8 + 8) = 3;
          break;
        case 1u:
          *(uint *)(v8 + 8) = 4;
          break;
        case 2u:
          *(uint *)(v8 + 8) = 5;
          break;
        case 3u:
          *(uint *)(v8 + 8) = 6;
          break;
        default:
          ErrorHandler();
          *(uint *)(v8 + 8) = 5;
          break;
      }
      if ( ((int (__fastcall *)(int))dword_222E12C[0])(v33) == 1 )
      {
        *(ushort *)(v8 + 4) = 22;
        *(ushort *)(v8 + 6) = 0;
        Function_2262e88((int)v4, 5);
      }
      else if ( ((int (__fastcall *)(int))dword_222DFF8[3])(v33) == 1 )
      {
        *(ushort *)(v8 + 4) = 72;
        *(ushort *)(v8 + 6) = 1;
        Function_2262e88((int)v4, 5);
      }
      else
      {
        v9 = (uchar)Function_2264b64(v32);
        if ( ((int (__fastcall *)(int))dword_2232B00[0])(v9) )
        {
          if ( !((int (__fastcall *)(int))dword_2232A48[0])(v9) )
            ErrorHandler();
          Function_2262e8c((int)v4);
        }
        else
        {
          *(ushort *)(v8 + 4) = 20;
          *(ushort *)(v8 + 6) = 0;
          Function_2262e88((int)v4, 3);
        }
      }
      return 0;
    case 1:
      v10 = ((int (*)(void))dword_2232A84[0])();
      if ( v10 == 1 )
      {
        Function_2262e88((int)v4, 2);
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        v11 = Function_225dee8((int)v3);
        v31 = ((int (*)(void))dword_222E964[0])() & 0xFF;
        if ( (uint)(*(uint *)(v6 + 8) - 5) > 1 )
        {
          v35 = v29;
        }
        else
        {
          v12 = 0;
          v13 = 0;
          do
          {
            v14 = ((int (__fastcall *)(int, int))dword_222E974[0])(v11, v13);
            if ( v14 != -1 )
            {
              if ( v12 < 4 )
                *(&v35 + v12) = v14;
              v12 = (v12 + 1) & 0xFF;
            }
            ++v13;
          }
          while ( v13 < 4 );
        }
        ((void (__fastcall *)(int, uint, int, uint, uint, uint, uint, uint))dword_222EA10[0])(
          v11,
          *(uint *)(v6 + 8),
          v31,
          v35,
          v36,
          v37,
          v38,
          0);
      }
      else if ( v10 == 2 )
      {
        *(ushort *)(v6 + 4) = 20;
        *(ushort *)(v6 + 6) = 0;
        Function_2262e88((int)v4, 3);
      }
      return 0;
    case 2:
      v15 = Function_2264bcc(v32);
      v16 = Function_2264c34(v32);
      Function_225df34(v3, 1);
      Function_225df38((int)v3, v15);
      v17 = Function_225dee8((int)v3);
      ((void (__fastcall *)(int, int))dword_222E3E4[0])(v17, v16);
      ((void (__fastcall *)(int, uint))dword_222EF94[0])(v33, *(uint *)(v6 + 8));
      switch ( (uchar)*(uint *)(v6 + 8) )
      {
        case 3u:
        case 4u:
          ((void (__fastcall *)(int, int))dword_222F040[0])(v33, 5);
          break;
        case 5u:
          ((void (__fastcall *)(int, int))dword_222F040[0])(v33, 3);
          break;
        case 6u:
          ((void (__fastcall *)(int, int))dword_222F040[0])(v33, 4);
          break;
        default:
          ErrorHandler();
          ((void (__fastcall *)(int))dword_222F040[0])(v33);
          break;
      }
      v18 = Function_225cd60(v5, 6);
      v19 = ((int (__fastcall *)(int))dword_222C0AC[0])(v18);
      v20 = (ushort *)Function_225deec((int)v3);
      v21 = Function_225cd34(v5);
      v20[3] = 1;
      *v20 = (short)v21 / 16;
      v20[1] = SHIWORD(v21) / 16;
      v20[2] = v19;
      v20[4] = *(uint *)(v6 + 8);
      Function_2262e64((int)v4);
      return 1;
    case 3:
      switch ( (uchar)Function_225cd60(v5, 6) )
      {
        case 0u:
          Function_225cdec((int)v34, (int)v5, 6);
          break;
        case 1u:
          Function_225cdec((int)v34, (int)v5, 5);
          break;
        case 2u:
          Function_225cdec((int)v34, (int)v5, 8);
          break;
        case 3u:
          Function_225cdec((int)v34, (int)v5, 7);
          break;
        default:
          ErrorHandler();
          Function_225cdec((int)v34, (int)v5, v30);
          break;
      }
      Function_2262e8c((int)v4);
      break;
    case 4:
      if ( Function_225ce38((int)v5) == 1 )
      {
        *(uint *)v6 = 8;
        Function_2262e88((int)v4, 7);
      }
      break;
    case 5:
      v23 = Function_225cd60(v5, 6);
      v24 = ((int (__fastcall *)(uint))dword_222C0AC[0])(v23);
      Function_225cdac(v34, v5, 2, v24);
      Function_2262e8c((int)v4);
      break;
    case 6:
      if ( !Function_225cd60(v5, 5) )
      {
        *(uint *)v6 = 8;
        Function_2262e88((int)v4, 7);
      }
      break;
    case 7:
      v25 = *(uint *)v6 - 1;
      *(uint *)v6 = v25;
      if ( v25 <= 0 )
      {
        v26 = *(uint *)(v6 + 8);
        Function_225e27c((int)v3);
        v27 = Function_225e20c((int)v3, *(ushort *)(v6 + 6), *(ushort *)(v6 + 4));
        Function_225df8c((int)v3, v27);
        Function_2262e8c((int)v4);
      }
      break;
    case 8:
      if ( Function_225dfac((int)v3) )
      {
        Function_2262e64((int)v4);
        Function_225cdec((int)v34, (int)v5, 1);
        Function_225dfec((int)v3);
        v28 = Function_225df10((int)v3);
        Function_2262e94(v28, v29, (int)&off_226D9D0, 0);
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (022646C8) --------------------------------------------------------
int __fastcall Function_22646c8(int a1, uchar *a2, uint a3)
{
  char v3;
  uchar *v4;
  ushort *v5;
  uchar *v6;
  uint v7;
  uchar *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  short v13;
  ushort *v14;
  int v15;
  int v16;
  int v18;
  char v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint *v25;
  uint v26;
  int v27;
  int v28;
  int v29;
  uint *v30;
  int v31;
  uint *v32;

  v4 = a2;
  v5 = (ushort *)a1;
  v26 = a3;
  v6 = (uchar *)Function_2262e80(a1);
  v31 = Function_225df10((int)v4);
  v32 = (uint *)Function_225def0((int)v4);
  v30 = (uint *)Function_225ccac((int)v32);
  v29 = Function_225dee8((int)v4);
  v7 = Function_2262e84((int)v5);
  if ( v7 <= 7 )
    JUMPOUT(__CS__, *((short *)&off_226470E + v7) + 36062992);
  switch ( (uchar)v7 )
  {
    case 0:
      v8 = (uchar *)Function_2262e3c(v5, 4u);
      Function_225cdec((int)v32, (int)v30, 0);
      Function_2262e8c((int)v5);
      *v8 = 0;
      v9 = Function_225df40((int)v4);
      switch ( v9 )
      {
        case 30:
          v8[1] = 0;
          v8[2] = 0;
          v8[3] = 2;
          break;
        case 31:
          v8[1] = 1;
          v8[2] = 1;
          v8[3] = 3;
          break;
        case 32:
          v8[1] = 2;
          v8[2] = 2;
          v8[3] = 4;
          break;
        default:
          ErrorHandler();
          break;
      }
      v10 = Function_225dee8((int)v4);
      ((void (__fastcall *)(int, int))dword_222E3E4[0])(v10, 12);
      Function_2262ec0(v31, v26, (int)&off_226DA20, (int)v8);
      return 0;
    case 1:
      if ( *v6 == 8 )
        Function_2262e88((int)v5, 2);
      else
        Function_2262e88((int)v5, 3);
      return 0;
    case 2:
      v11 = Function_225df40((int)v4);
      switch ( v11 )
      {
        case 30:
          v3 = 3;
          v28 = 0;
          break;
        case 31:
          v3 = 4;
          v28 = 1;
          break;
        case 32:
          v3 = 5;
          v28 = 2;
          break;
      }
      Function_225df34(v4, 1);
      Function_225df38((int)v4, v3);
      ((void (__fastcall *)(int, uint))dword_222EF94[0])(v29, (uchar)v6[2]);
      ((void (__fastcall *)(int))dword_222EF94[39])(v29);
      ((void (__fastcall *)(int, int))dword_222F040[0])(v29, v28);
      v12 = Function_225cd60(v30, 6);
      v13 = ((int (__fastcall *)(int))dword_222C0AC[0])(v12);
      v14 = (ushort *)Function_225deec((int)v4);
      v15 = Function_225cd34(v30);
      v14[3] = 2;
      *v14 = (short)v15 / 16;
      v14[1] = SHIWORD(v15) / 16;
      v14[2] = v13;
      v14[4] = (uchar)v6[2];
      v16 = Function_225dee8((int)v4);
      ((void (__fastcall *)(int, int))dword_222E2C4[0])(v16, 1);
      Function_2262e64((int)v5);
      return 1;
    case 3:
      v18 = Function_225cd60(v25, 6);
      v19 = ((int (__fastcall *)(int))dword_222C0AC[0])(v18);
      Function_225cdac(v32, v30, 2, v19);
      Function_2262e8c((int)v5);
      break;
    case 4:
      if ( !Function_225cd60(v30, 5) )
        Function_2262e8c((int)v5);
      break;
    case 5:
      v27 = 1;
      switch ( *v6 )
      {
        case 0:
          v20 = (uchar)v6[2];
          Function_225e27c((int)v4);
          v3 = 4;
          break;
        case 1:
          v3 = 5;
          break;
        case 2:
          v21 = (uchar)v6[2];
          Function_225e27c((int)v4);
          v3 = 6;
          break;
        case 3:
          v3 = 19;
          break;
        case 4:
          v3 = 17;
          break;
        case 6:
          v3 = 29;
          break;
        case 7:
          v3 = 7;
          break;
        default:
          v27 = 0;
          break;
      }
      if ( v27 )
      {
        v22 = Function_225e20c((int)v4, 0, v3);
        Function_225df8c((int)v4, v22);
        Function_2262e8c((int)v5);
      }
      else
      {
        Function_2262e88((int)v5, 7);
      }
      break;
    case 6:
      if ( Function_225dfac((int)v4) == 1 )
      {
        Function_225dfec((int)v4);
        Function_2262e8c((int)v5);
      }
      break;
    case 7:
      Function_2262e64((int)v5);
      v23 = Function_225dee8((int)v4);
      ((void (__fastcall *)(int, int))dword_222E3E4[0])(v23, 1);
      Function_225cdec((int)v32, (int)v30, 1);
      v24 = Function_225df10((int)v4);
      Function_2262e94(v24, v26, (int)&off_226D9D0, 0);
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02264974) --------------------------------------------------------
int __fastcall Function_2264974(int a1, uchar *a2, uint a3)
{
  uchar *v3;
  ushort *v4;
  uint *v5;
  int v6;
  uint v7;
  ushort *v8;
  int v9;
  int v10;
  short v11;
  ushort *v12;
  int v13;
  int v15;
  char v16;
  int v17;
  int v18;
  int v19;
  uint v20;
  char v21;
  ushort *v22;
  uint *v23;

  v3 = a2;
  v4 = (ushort *)a1;
  v20 = a3;
  v22 = (ushort *)Function_2262e80(a1);
  Function_225df10((int)v3);
  v23 = (uint *)Function_225def0((int)v3);
  v5 = (uint *)Function_225ccac((int)v23);
  v6 = Function_225dee8((int)v3);
  v7 = Function_2262e84((int)v4);
  if ( v7 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_22649B8 + v7) + 36063674);
  switch ( (uchar)v7 )
  {
    case 0:
      v8 = (ushort *)Function_2262e3c(v4, 0xCu);
      v9 = Function_225dee8((int)v3);
      ((void (__fastcall *)(int, int))dword_222E3E4[0])(v9, 13);
      if ( ((int (__fastcall *)(int))dword_222E12C[0])(v6) == 1 )
      {
        *v8 = 122;
        Function_2262e88((int)v4, 2);
        return 0;
      }
      if ( ((int (__fastcall *)(int))dword_222E19C[0])(v6) == 1 )
      {
        v8[1] = 10;
      }
      else
      {
        if ( ((int (__fastcall *)(int))dword_222E0DC[0])(v6) == 1 )
        {
          *v8 = 98;
          Function_2262e88((int)v4, 2);
          return 0;
        }
        v8[1] = 9;
      }
      Function_2262e88((int)v4, 1);
      return 0;
    case 1:
      if ( v22[1] == 9 )
      {
        v21 = 9;
      }
      else
      {
        v21 = 10;
        ((void (__fastcall *)(int))dword_222E10C[0])(v6);
      }
      Function_225df34(v3, 1);
      Function_225df38((int)v3, v21);
      ((void (__fastcall *)(int))dword_222E3E4[71])(v6);
      v10 = Function_225cd60(v5, 6);
      v11 = ((int (__fastcall *)(int))dword_222C0AC[0])(v10);
      v12 = (ushort *)Function_225deec((int)v3);
      v13 = Function_225cd34(v5);
      v12[3] = 3;
      *v12 = (short)v13 / 16;
      v12[1] = SHIWORD(v13) / 16;
      v12[2] = v11;
      v12[4] = 0;
      Function_2262e64((int)v4);
      return 1;
    case 2:
      v15 = Function_225cd60(v5, 6);
      v16 = ((int (__fastcall *)(int))dword_222C0AC[0])(v15);
      Function_225cdac(v23, v5, 2, v16);
      Function_2262e8c((int)v4);
      break;
    case 3:
      if ( !Function_225cd60(v5, 5) )
        Function_2262e8c((int)v4);
      break;
    case 4:
      v17 = Function_225e20c((int)v3, 1, *v22);
      Function_225df8c((int)v3, v17);
      Function_2262e8c((int)v4);
      break;
    case 5:
      if ( Function_225dfac((int)v3) == 1 )
      {
        Function_225dfec((int)v3);
        Function_2262e8c((int)v4);
      }
      break;
    case 6:
      Function_2262e64((int)v4);
      v18 = Function_225dee8((int)v3);
      ((void (__fastcall *)(int, int))dword_222E3E4[0])(v18, 1);
      Function_225cdec((int)v23, (int)v5, 1);
      v19 = Function_225df10((int)v3);
      Function_2262e94(v19, v20, (int)&off_226D9D0, 0);
      break;
    default:
      ErrorHandler();
      break;
  }
  return 0;
}

//----- (02264B64) --------------------------------------------------------
int __fastcall Function_2264b64(char a1)
{
  int result;

  switch ( a1 )
  {
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      result = 0;
      break;
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
      result = 1;
      break;
    case 22:
    case 23:
    case 24:
    case 25:
      result = 2;
      break;
    case 26:
    case 27:
    case 28:
    case 29:
      result = 3;
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (02264BCC) --------------------------------------------------------
int __fastcall Function_2264bcc(char a1)
{
  int result;

  switch ( a1 )
  {
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      result = 6;
      break;
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
      result = 7;
      break;
    case 22:
    case 23:
    case 24:
    case 25:
      result = 1;
      break;
    case 26:
    case 27:
    case 28:
    case 29:
      result = 2;
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (02264C34) --------------------------------------------------------
int __fastcall Function_2264c34(char a1)
{
  int result;

  switch ( a1 )
  {
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      result = 5;
      break;
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
      result = 6;
      break;
    case 22:
    case 23:
    case 24:
    case 25:
      result = 7;
      break;
    case 26:
    case 27:
    case 28:
    case 29:
      result = 8;
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (02264C9C) --------------------------------------------------------
int __fastcall Function_2264c9c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  v4 = Function_2262e84(a1);
  if ( v4 )
  {
    if ( v4 == 1 && Function_225dfac(v3) )
    {
      Function_225dfec(v3);
      v7 = Function_225def0(v3);
      v8 = v7;
      v9 = Function_225ccac(v7);
      Function_225cdec(v8, v9, 1);
      return 1;
    }
  }
  else
  {
    v5 = Function_225dee8(v3);
    if ( ((int (*)(void))dword_222E12C[0])() == 1 )
    {
      v6 = Function_225e20c(v3, 1, 3);
    }
    else if ( ((int (__fastcall *)(int))dword_222E170[0])(v5) == 1 )
    {
      v6 = Function_225e20c(v3, 1, 78);
    }
    else
    {
      v6 = Function_225e20c(v3, 1, 2);
    }
    Function_225df8c(v3, v6);
    Function_2005748(0x5DCu);
    Function_2262e8c(v2);
  }
  return 0;
}

//----- (02264D38) --------------------------------------------------------
int __fastcall Function_2264d38(ushort *a1, int a2, uint a3)
{
  uchar *v3;
  ushort *v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint v18;
  int v19;
  uint *v20;
  int v21;
  int v22;

  v3 = (uchar *)a2;
  v4 = a1;
  v18 = a3;
  v20 = (uint *)Function_225def0(a2);
  v5 = Function_225def8((int)v3);
  v21 = Function_225df08((int)v3);
  v19 = Function_225dee8((int)v3);
  v6 = Function_2262e80((int)v4);
  v7 = Function_2262e84((int)v4);
  if ( v7 <= 0xF )
    JUMPOUT(__CS__, *((short *)&off_2264D82 + v7) + 36064644);
  switch ( (uchar)v7 )
  {
    case 0:
      v8 = Function_2262e3c(v4, 0x18u);
      *(uint *)(v8 + 12) = Function_225cc70((int)v20, v18);
      v9 = Function_225df40((int)v3);
      switch ( v9 )
      {
        case 33:
          *(ushort *)(v8 + 6) = 2;
          break;
        case 34:
          *(ushort *)(v8 + 6) = 1;
          break;
        case 35:
          *(ushort *)(v8 + 6) = 0;
          break;
        default:
          ErrorHandler();
          break;
      }
      Function_2262e88((int)v4, 1);
      break;
    case 1:
      if ( ((int (__fastcall *)(int))dword_222E170[0])(v19) )
      {
        if ( ((int (__fastcall *)(int))dword_222E12C[0])(v19) == 1 )
        {
          *(ushort *)(v6 + 4) = 10;
          Function_2262e88((int)v4, 6);
        }
        else
        {
          v10 = ((int (__fastcall *)(int, uint, uint))dword_222EBB4[0])(
                  v19,
                  v18,
                  *(ushort *)(v6 + 6));
          *(uint *)v6 = v10;
          if ( v10 == -1 )
          {
            *(ushort *)(v6 + 4) = 9;
            Function_2262e88((int)v4, 6);
          }
          else
          {
            Function_2262e88((int)v4, 2);
            Function_225e20c((int)v3, 0, 31);
            Function_225df9c((int)v3);
            Function_225dfbc((int)v3);
          }
        }
      }
      else
      {
        *(ushort *)(v6 + 4) = 8;
        Function_2262e88((int)v4, 6);
      }
      break;
    case 2:
      if ( dword_21BF6C4 & 2 || dword_21BF6C4 & 0x80 )
      {
        ((void (__fastcall *)(int, uint))dword_222EBC4[0])(v19, v18);
        Function_225dfcc((int)v3);
        *(uchar *)(v6 + 10) = 6;
        *(ushort *)(v6 + 4) = 15;
        Function_2262e88((int)v4, 12);
      }
      else if ( Function_2265104(v6, v5) == 1 )
      {
        Function_225dfcc((int)v3);
        ((void (__fastcall *)(int))dword_222EC40[0])(v19);
        *(ushort *)(v6 + 8) = 0;
        v11 = Function_225dee8((int)v3);
        ((void (__fastcall *)(int, int))dword_222E3E4[0])(v11, 10);
        Function_225df44((int)v3);
        Function_2260b3c(v21);
        ((void (__fastcall *)(uint, uint))Function_225d030[0])(*(uint *)(v6 + 12), 0);
        Function_225d06c(*(uint *)(v6 + 12), 1);
        Function_2005748(0x5AAu);
        Function_225e410((int)v3);
        *(uchar *)(v6 + 10) = 3;
        Function_2262e88((int)v4, 12);
        ((void (__fastcall *)(int))dword_222EF94[27])(v19);
      }
      break;
    case 3:
      if ( Function_2265144(v6, v5, v21) == 1 )
      {
        Function_225d06c(*(uint *)(v6 + 12), 0);
        ((void (__fastcall *)(uint, int))Function_225d060[0])(*(uint *)(v6 + 12), 2);
        ((void (__fastcall *)(uint, int))Function_225d0b4[0])(*(uint *)(v6 + 12), 8);
        Function_2262e88((int)v4, 4);
        *(ushort *)(v6 + 8) = 0;
      }
      break;
    case 4:
      Function_2265344(v6, v5, v3);
      Function_22650e4(v6, v21);
      if ( Function_22652bc(v6, v5) == 1 )
      {
        Function_2262e88((int)v4, 5);
        Function_225e43c((int)v3);
      }
      break;
    case 5:
      Function_2265344(v6, v5, v3);
      Function_22650e4(v6, v21);
      Function_225d054(*(uint *)(v6 + 12));
      Function_2265370(v6, v5, v3);
      if ( v22 < 393216 )
      {
        *(uchar *)(v6 + 11) = 0;
        Function_2262e88((int)v4, 13);
      }
      break;
    case 6:
      Function_225cdac(v20, *(uint **)(v6 + 12), 2, 1);
      Function_2262e88((int)v4, 7);
      break;
    case 7:
      if ( !Function_225cd60(*(uint **)(v6 + 12), 5) )
        Function_2262e88((int)v4, *(ushort *)(v6 + 4));
      break;
    case 8:
      v12 = Function_225e20c((int)v3, 0, 30);
      Function_225df8c((int)v3, v12);
      *(ushort *)(v6 + 4) = 15;
      Function_2262e88((int)v4, 11);
      break;
    case 9:
      v13 = Function_225e20c((int)v3, 0, 32);
      Function_225df8c((int)v3, v13);
      *(ushort *)(v6 + 4) = 15;
      Function_2262e88((int)v4, 11);
      break;
    case 0xA:
      v14 = Function_225e20c((int)v3, 0, 33);
      Function_225df8c((int)v3, v14);
      *(ushort *)(v6 + 4) = 15;
      Function_2262e88((int)v4, 11);
      break;
    case 0xB:
      if ( Function_225dfac((int)v3) == 1 )
        Function_2262e88((int)v4, *(ushort *)(v6 + 4));
      break;
    case 0xC:
      Function_225dfec((int)v3);
      Function_2262e88((int)v4, *(uchar *)(v6 + 10));
      break;
    case 0xD:
      Function_2265344(v6, v5, v3);
      Function_2265370(v6, v5, v3);
      if ( (uchar)++*(uchar *)(v6 + 11) > 0x78u )
      {
        Function_225df34(v3, 1);
        Function_225df38((int)v3, 0);
        Function_225dfec((int)v3);
        v15 = Function_225dee8((int)v3);
        ((void (__fastcall *)(int, int))dword_222E3E4[0])(v15, 11);
        Function_2262e88((int)v4, 14);
      }
      break;
    case 0xE:
      Function_2265344(v6, v5, v3);
      Function_2265370(v6, v5, v3);
      break;
    case 0xF:
      v16 = Function_225df10((int)v3);
      Function_225dfec((int)v3);
      Function_225cdec((int)v20, *(uint *)(v6 + 12), 1);
      Function_2262e64((int)v4);
      Function_2262e94(v16, v18, (int)&off_226D9D0, 0);
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (022650E4) --------------------------------------------------------
uint *__fastcall Function_22650e4(int a1, uint *a2)
{
  uint *v2;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  Function_225d054(*(uint *)(a1 + 12));
  return Function_2260b18(v2, v4, v5, v6);
}

//----- (02265104) --------------------------------------------------------
BOOL __fastcall Function_2265104(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint v7;
  uint v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a2;
  ((void (__fastcall *)(uint, uint *, uint *))dword_222EC04[0])(*a1, &v8, &v7);
  Function_2262318(v5, v8, v7, &v9);
  Function_225d054(v4[3]);
  return v10 + 0x10000 >= v9;
}

//----- (02265144) --------------------------------------------------------
int __fastcall Function_2265144(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  long long v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  long long v21;
  int v23;
  uint v24;
  uint v25;
  int v26;
  int v27;
  int v28;
  char v29;
  int v30;
  int v31;
  char v32;
  int v33;
  int v34;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( (short)++*(ushort *)(a1 + 8) >= 24 )
  {
    *(ushort *)(a1 + 8) = 24;
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  ((void (__fastcall *)(uint, uint *, uint *))dword_222EC04[0])(*(uint *)a1, &v25, &v24);
  Function_2262318(v4, v25, v24, &v29);
  v23 = Function_225cd34(*(uint **)(v3 + 12));
  Function_225c700((short *)&v23, &v32);
  v26 = 0;
  v7 = v30 - v33;
  v8 = *(short *)(v3 + 8);
  if ( v8 <= 0 )
  {
    v11 = fflt(v8 << 12);
    v10 = fsub(v11, 1056964608);
  }
  else
  {
    v9 = fflt(v8 << 12);
    v10 = fadd(0x3F000000u, v9);
  }
  v12 = ffix(v10);
  v13 = ll_mul(v12, v7);
  v27 = FX_Div((v13 + 2048) >> 12, 98304);
  v14 = *(short *)(v3 + 8);
  if ( v14 < 4 )
  {
    v28 = 0;
  }
  else
  {
    v15 = v31 - v34;
    v16 = v14 - 4;
    if ( v14 - 4 <= 0 )
    {
      v19 = fflt(v16 << 12);
      v18 = fsub(v19, 1056964608);
    }
    else
    {
      v17 = fflt(v16 << 12);
      v18 = fadd(0x3F000000u, v17);
    }
    v20 = ffix(v18);
    v21 = ll_mul(v20, v15);
    v28 = FX_Div((v21 + 2048) >> 12, 81920);
  }
  VEC_Add(&v26, &v32, &v26);
  Function_2260b18(v5, v26, v27, v28);
  v27 += (((ll)SLOWORD(Unknown_20f983c[(int)(ushort)s32_div_f(
                                                                                   0x7FFF * *(short *)(v3 + 8),
                                                                                   24) >> 4]) << 16)
        + 2048) >> 12;
  ((void (__fastcall *)(uint, int *))Function_225d048[0])(*(uint *)(v3 + 12), &v26);
  return v6;
}

//----- (022652BC) --------------------------------------------------------
int __fastcall Function_22652bc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  long long v6;
  int v7;
  int v8;
  char v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  if ( (short)++*(ushort *)(a1 + 8) >= 16 )
  {
    *(ushort *)(a1 + 8) = 16;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v6 = 0x7FFF
     * (((uint)*(short *)(a1 + 8) >> 31)
      + __ROR4__((*(short *)(a1 + 8) << 29) - ((uint)*(short *)(a1 + 8) >> 31), 29));
  v7 = SLOWORD(Unknown_20f983c[(int)(((uint)v6 + ((uint)((int)v6 >> 2) >> 29)) << 13) >> 20]);
  LODWORD(v6) = 12288;
  v8 = (ll_mul(v7, v6) + 2048) >> 12;
  Function_225d054(*(uint *)(v4 + 12));
  v11 += v8;
  ((void (__fastcall *)(uint, char *))Function_225d048[0])(*(uint *)(v4 + 12), &v10);
  return v5;
}

//----- (02265344) --------------------------------------------------------
int __fastcall Function_2265344(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint v5;
  uint v6;
  char v7;

  v2 = a1;
  v3 = a2;
  ((void (__fastcall *)(uint, uint *, uint *))dword_222EC04[0])(*a1, &v5, &v6);
  Function_2262318(v3, v5, v6, &v7);
  return ((int (__fastcall *)(uint, char *))Function_225d048[0])(v2[3], &v7);
}

//----- (02265370) --------------------------------------------------------
int __fastcall Function_2265370(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  char v7;
  int v8;
  char v9;
  int v10;

  v3 = a1;
  v4 = a3;
  ((void (__fastcall *)(uint, int *, char *))dword_222EC04[0])(*a1, &v8, &v7);
  if ( Function_225e420(v4, v8) == 1 )
  {
    if ( !Function_2263334((int)(v3 + 4)) )
      Function_2263270((int)(v3 + 4));
  }
  else if ( Function_2263334((int)(v3 + 4)) == 1 )
  {
    Function_226332c((int)(v3 + 4));
  }
  v5 = Function_2263290((uchar *)v3 + 16);
  Function_225d054(v3[3]);
  v10 += v5;
  return ((int (__fastcall *)(uint, char *))Function_225d048[0])(v3[3], &v9);
}

//----- (022653DC) --------------------------------------------------------
int __fastcall Function_22653dc(uint *a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint *v5;
  uint *v6;
  uint *v7;
  int result;
  uint *v9;

  v2 = a2;
  v9 = a1;
  Function_225e00c(a2, 18);
  v3 = 1;
  do
  {
    Function_225e30c(v2, 0, v3);
    Function_225e20c(v2, 1, 6);
    Function_225e044(v2);
    ++v3;
  }
  while ( v3 < 18 );
  Function_225e20c(v2, 1, 7);
  Function_225e044(v2);
  v4 = v9 + 2;
  *v4 = 0;
  v4[1] = 0;
  v5 = v9 + 4;
  *v5 = 0;
  v5[1] = 0;
  v6 = v9 + 6;
  *v6 = 458770;
  v6[1] = 268437504;
  v7 = v9 + 8;
  *v7 = 8388655;
  v7[1] = 0;
  result = Function_225e054(v2);
  v9[2] = result;
  return result;
}

//----- (02265450) --------------------------------------------------------
int __fastcall Function_2265450(int a1, int a2)
{
  return Function_225e034(a2);
}

//----- (0226545C) --------------------------------------------------------
int __fastcall Function_226545c(ushort *a1, int a2, uint a3)
{
  int v3;
  ushort *v4;
  uint v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  short v10;
  uchar v11;
  int v13;
  int v14;
  int v15;
  int v16;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v13 = Function_225dee8(a2);
  v14 = Function_225def0(v3);
  v6 = (int *)Function_225cc70(v14, v5);
  v15 = Function_2262e80((int)v4);
  v16 = Function_225df10(v3);
  switch ( (uchar)Function_2262e84((int)v4) )
  {
    case 0u:
      Function_2262e3c(v4, 8u);
      Function_2262e88((int)v4, 1);
      goto LABEL_3;
    case 1u:
LABEL_3:
      v7 = ((int (__fastcall *)(int, uint))dword_222DFF8[13])(v13, v5);
      v8 = ((int (__fastcall *)(int, uint))dword_222E34C[0])(v13, v5);
      if ( v7 == 1 || v8 == 1 )
        Function_2262e88((int)v4, 2);
      break;
    case 2u:
      v9 = ((int (__fastcall *)(int, uint))dword_222E374[0])(v13, v5);
      if ( v9 )
      {
        if ( ((int (*)(void))dword_222E8D8[0])() == 1 )
        {
          v10 = ((int (__fastcall *)(int))dword_222E858[0])(v9);
          if ( Function_225cbb8(v14, v5, v10) )
          {
            ((void (*)(void))Function_225d0c0[0])();
            Function_2262e88((int)v4, 3);
          }
        }
      }
      else
      {
        Function_2262e88((int)v4, 1);
      }
      break;
    case 3u:
      if ( ((int (__fastcall *)(int, uint))dword_222E374[0])(v13, v5) )
      {
        v11 = ((int (*)(void))dword_222E71C[0])();
        if ( Function_2265ccc(v15, v13, v3, v6, v11, 1) )
        {
          Function_2262e88((int)v4, 5);
          Function_225cdec(v14, (int)v6, 0);
          Function_225df6c(v3, (uchar)v5, 1);
          Function_225df4c(v3, (uchar)v5, 1);
          ((void (__fastcall *)(int *, uint))Function_225d030[0])(v6, 0);
          Function_2262ec0(v16, v5, (int)&off_226D9F0, v15);
        }
        else
        {
          Function_225cdec(v14, (int)v6, 4);
          Function_2262e88((int)v4, 4);
          Function_225df4c(v3, (uchar)v5, 1);
          Function_225df6c(v3, (uchar)v5, 1);
          ((void (__fastcall *)(int *, int))Function_225d0c0[0])(v6, 1);
        }
      }
      else
      {
        if ( v6 )
          Function_225cc54(v6);
        Function_2262e88((int)v4, 1);
      }
      break;
    case 4u:
      if ( Function_225ce38((int)v6) == 1 )
        Function_2262e8c((int)v4);
      break;
    case 5u:
      Function_2262e64((int)v4);
      Function_225cdec(v14, (int)v6, 2);
      Function_2262e94(v16, v5, (int)&off_226D9D8, 0);
      Function_225df4c(v3, (uchar)v5, 0);
      Function_225df6c(v3, (uchar)v5, 0);
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02265630) --------------------------------------------------------
int __fastcall Function_2265630(ushort *a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uchar v9;
  ushort *v11;
  int v12;
  int v13;
  int v14;

  v3 = a2;
  v11 = a1;
  v4 = a3;
  v5 = Function_225dee8(a2);
  v13 = Function_225def0(v3);
  v12 = Function_225df10(v3);
  v6 = Function_225cc70(v13, v4);
  Function_225ccac(v13);
  v14 = Function_2262e80((int)v11);
  v7 = Function_2262e84((int)v11);
  if ( v7 )
  {
    if ( v7 != 1 )
      return 0;
  }
  else
  {
    v14 = Function_2262e3c(v11, 8u);
    Function_2262e88((int)v11, 1);
  }
  if ( ((int (__fastcall *)(int, uint))dword_222DFF8[24])(v5, v4) )
  {
    Function_2262e64((int)v11);
    Function_225cdec(v13, v6, 0);
    Function_225df6c(v3, (uchar)v4, 1);
    Function_225df4c(v3, (uchar)v4, 1);
    Function_2262e94(v12, v4, (int)&off_226D9E0, 0);
  }
  else
  {
    ((void (__fastcall *)(int, uint))dword_222E09C[0])(v5, v4);
    if ( ((int (__fastcall *)(int))dword_222E170[0])(v5) != 1
      || ((int (__fastcall *)(int, uint))dword_222EBA4[0])(v5, v4) == -1 )
    {
      v8 = ((int (__fastcall *)(int, uint))dword_222E374[0])(v5, v4);
      v9 = ((int (__fastcall *)(int))dword_222E71C[0])(v8);
      if ( Function_2265ccc(v14, v5, v3, v6, v9, 0) )
      {
        Function_225cdec(v13, v6, 0);
        Function_225df6c(v3, (uchar)v4, 1);
        Function_225df4c(v3, (uchar)v4, 1);
        ((void (__fastcall *)(int, uint))Function_225d030[0])(v6, 0);
        Function_2262ec0(v12, v4, (int)&off_226D9F0, v14);
      }
      else if ( ((int (__fastcall *)(int, uint))dword_222EB38[7])(v5, v4) == 1 )
      {
        Function_225cdec(v13, v6, 0);
        Function_225df4c(v3, (uchar)v4, 1);
        Function_2262ec0(v12, v4, (int)&off_226DA18, 0);
      }
    }
    else
    {
      Function_225cdec(v13, v6, 0);
      Function_225df6c(v3, (uchar)v4, 1);
      Function_225df4c(v3, (uchar)v4, 1);
      ((void (__fastcall *)(int, uint))Function_225d030[0])(v6, 0);
      Function_2262e64((int)v11);
      Function_2262e94(v12, v4, (int)&off_226D9E8, v14);
    }
  }
  return 0;
}

//----- (022657D0) --------------------------------------------------------
int __fastcall Function_22657d0(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  uint v10;

  v3 = a2;
  v4 = a1;
  v10 = a3;
  v5 = Function_225def0(a2);
  v6 = (int *)Function_225cc70(v5, v10);
  v7 = Function_2262e84(v4);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      if ( Function_225ce38((int)v6) )
        Function_2262e8c(v4);
    }
    else if ( v7 == 2 )
    {
      Function_225cc54(v6);
      v8 = Function_225df10(v3);
      Function_2262e94(v8, v10, (int)&off_226DA10, 0);
    }
  }
  else
  {
    Function_225cdec(v5, (int)v6, 3);
    Function_2262e8c(v4);
  }
  return 0;
}

//----- (02265840) --------------------------------------------------------
int __fastcall Function_2265840(ushort *a1, int a2, uint a3, int a4)
{
  int v4;
  ushort *v5;
  uint v6;
  int *v7;
  int *v8;
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
  long long v19;
  int v20;
  int v21;
  int v23;
  int v24;
  int v25;
  char v26;
  int v27;
  int v28;
  int v29;
  int v30;
  char v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;

  v36 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  v23 = Function_225dee8(a2);
  v25 = Function_225def0(v4);
  v24 = Function_225def8(v4);
  v7 = (int *)Function_2262e80((int)v5);
  switch ( (uchar)Function_2262e84((int)v5) )
  {
    case 0u:
      v8 = (int *)Function_2262e3c(v5, 0x20u);
      *v8 = Function_225cc70(v25, v6);
      v9 = ((int (__fastcall *)(int, uint))dword_222EBA4[0])(v23, v6);
      v8[1] = v9;
      if ( v9 == -1 )
        ErrorHandler();
      ((void (__fastcall *)(int, int *, int *))dword_222EC04[0])(v8[1], v8 + 1, v8 + 2);
      Function_225cdec(v25, *v8, 3);
      Function_2262e88((int)v5, 1);
      break;
    case 1u:
      if ( Function_225ce38(*v7) )
      {
        Function_2262318(v24, v7[1], v7[2], &v34);
        v7[4] = v34 - 0x10000;
        Function_225d054(*v7);
        v7[3] = v35;
        v7[5] = 0;
        v10 = *v7;
        Function_225ccb4();
        Function_2005748(0x64Fu);
        Function_225d084(*v7, 1);
        Function_2262e88((int)v5, 2);
      }
      break;
    case 2u:
      v11 = 0;
      v12 = v7[5] + 1;
      v7[5] = v12;
      if ( v12 >= 24 )
      {
        v7[5] = 24;
        v11 = 1;
      }
      Function_2262318(v24, v7[1], v7[2], &v31);
      v30 = v33;
      v28 = v7[4];
      v13 = v32 - v7[3];
      v14 = v7[5];
      if ( v14 <= 0 )
      {
        v17 = fflt(v14 << 12);
        v16 = fsub(v17, 1056964608);
      }
      else
      {
        v15 = fflt(v14 << 12);
        v16 = fadd(0x3F000000u, v15);
      }
      v18 = ffix(v16);
      v19 = ll_mul(v18, v13);
      v29 = FX_Div((v19 + 2048) >> 12, 98304);
      v29 += v7[3];
      ((void (__fastcall *)(int, int *))Function_225d048[0])(*v7, &v28);
      if ( v11 == 1 )
      {
        Function_225d084(*v7, 0);
        ((void (__fastcall *)(int, int))Function_225d0b4[0])(*v7, 8);
        ((void (__fastcall *)(int, int))Function_225d060[0])(*v7, 2);
        Function_2262e88((int)v5, 3);
      }
      break;
    case 3u:
      if ( Function_225e420(v4, v7[1]) == 1 )
      {
        if ( !Function_2263334((int)(v7 + 6)) )
          Function_2263270((int)(v7 + 6));
      }
      else if ( Function_2263334((int)(v7 + 6)) == 1 )
      {
        Function_226332c((int)(v7 + 6));
      }
      v20 = Function_2263290((uchar *)v7 + 24);
      Function_2262318(v24, v7[1], v7[2], &v26);
      v27 += v20;
      ((void (__fastcall *)(int, char *))Function_225d048[0])(*v7, &v26);
      if ( ((int (__fastcall *)(int, int))dword_222EB7C[0])(v23, v7[1]) == 2 )
        Function_2262e88((int)v5, 4);
      break;
    case 4u:
      Function_225cc54((int *)*v7);
      Function_2262e64((int)v5);
      v21 = Function_225df10(v4);
      Function_2262e94(v21, v6, (int)&off_226DA10, 0);
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02265A84) --------------------------------------------------------
int __fastcall Function_2265a84(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uchar *v6;
  uint *v7;
  int v8;
  int v9;
  char v10;
  int v11;
  uint *v12;
  int result;
  int v14;
  int v15;
  int v16;
  uint *v17;
  uint *v18;
  int v19;
  short v20;
  short v21;
  int v22;
  int v23;

  v23 = a4;
  v14 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (uchar *)Function_2262e38(a1);
  v16 = Function_225dee8(v14);
  v17 = (uint *)Function_225def0(v14);
  v7 = (uint *)Function_225cc70((int)v17, v5);
  v18 = (uint *)Function_225ccac((int)v17);
  switch ( (uchar)Function_2262e84(v4) )
  {
    case 0u:
      if ( v6[4] )
        Function_2262e88(v4, 3);
      else
        Function_2262e8c(v4);
      goto LABEL_32;
    case 1u:
      Function_225cdec((int)v17, (int)v7, 3);
      Function_2262e8c(v4);
      goto LABEL_32;
    case 2u:
    case 7u:
    case 9u:
      if ( Function_225ce38((int)v7) == 1 )
        Function_2262e8c(v4);
      goto LABEL_32;
    case 3u:
      v19 = Function_225cd34(v7);
      v22 = v19;
      ((void (__fastcall *)(uint *, int *))Function_225d03c[0])(v7, &v22);
      if ( !((int (__fastcall *)(uint *))Function_225d0cc[0])(v7) )
        ((void (__fastcall *)(uint *, int))Function_225d0c0[0])(v7, 1);
      Function_225cdec((int)v17, (int)v7, 4);
      Function_2262e8c(v4);
      goto LABEL_32;
    case 4u:
      if ( Function_225ce38((int)v7) == 1 )
      {
        Function_2262e8c(v4);
        Function_225cdec((int)v17, (int)v7, 0);
        Function_225df4c(v14, (uchar)v5, 0);
        Function_225df6c(v14, (uchar)v5, 0);
      }
      goto LABEL_32;
    case 5u:
      v15 = 0;
      if ( v6[3] == 1 && !((int (__fastcall *)(int))dword_222EEAC[0])(v16) )
      {
        v8 = ((int (__fastcall *)(int))dword_222E3BC[0])(v16);
        if ( ((int (__fastcall *)(int))dword_222E71C[0])(v8) == 9 )
        {
          ((void (__fastcall *)(int))dword_222EEA0[0])(v16);
          v9 = Function_225cd60(v7, 6);
          v10 = ((int (__fastcall *)(int))dword_222C0AC[0])(v9);
          Function_225cdac(v17, v18, 0, v10);
        }
      }
      v11 = ((int (__fastcall *)(int, int))dword_222E374[0])(v16, v5);
      if ( v11 )
      {
        if ( v6[3] != 1 || ((int (__fastcall *)(int))dword_222EDF4[0])(v16) )
        {
          if ( ((int (__fastcall *)(int, int))dword_222E09C[0])(v16, v5)
            && ((int (__fastcall *)(int))dword_222E71C[0])(v11) != v6[2] )
          {
            v15 = 1;
          }
        }
        else
        {
          v15 = 1;
        }
      }
      else
      {
        v15 = 1;
      }
      if ( v15 == 1 )
      {
        Function_2262e8c(v4);
        Function_225df4c(v14, (uchar)v5, 1);
        Function_225df6c(v14, (uchar)v5, 1);
      }
      goto LABEL_32;
    case 6u:
      Function_225cdec((int)v17, (int)v7, 3);
      Function_2262e8c(v4);
      goto LABEL_32;
    case 8u:
      v12 = (uint *)Function_225ccac((int)v17);
      if ( !Function_225cedc(v12, *v6, v6[1]) )
      {
        v20 = 16 * *v6;
        v21 = 16 * v6[1];
        Function_225ccb4();
        ((void (__fastcall *)(uint *, short *))Function_225d03c[0])(v7, &v20);
        Function_225cdec((int)v17, (int)v7, 4);
        Function_2262e8c(v4);
      }
      goto LABEL_32;
    case 0xAu:
      Function_225cdec((int)v17, (int)v7, 2);
      Function_225df4c(v14, (uchar)v5, 0);
      Function_225df6c(v14, (uchar)v5, 0);
      result = 1;
      break;
    default:
LABEL_32:
      result = 0;
      break;
  }
  return result;
}

//----- (02265CCC) --------------------------------------------------------
int __fastcall Function_2265ccc(uchar *a1, int a2, int a3, uint *a4, char a5, char a6)
{
  int v6;
  uchar *v7;
  char v8;
  int *v9;
  int v10;
  int result;
  int v12;
  int v13;
  uint *v14;
  int *v15;
  int v16;
  int v17;
  int v18;
  char v19;
  int v20;

  v6 = a3;
  v7 = a1;
  v13 = a2;
  v14 = a4;
  v8 = 0;
  v9 = (int *)Function_225def0(a3);
  v15 = (int *)Function_225ccac((int)v9);
  v10 = Function_225df00(v6);
  v16 = Function_225cd60(v14, 4);
  v20 = 1;
  switch ( a5 )
  {
    case 0:
    case 1:
    case 11:
    case 12:
    case 13:
    case 14:
      result = 0;
      break;
    case 2:
      if ( Function_2265ed0(v10, v9, dword_226DA28, 4, &v19) )
        goto LABEL_27;
      result = 0;
      break;
    case 3:
      if ( Function_2265ed0(v10, v9, dword_226DA58, 4, &v14) )
        goto LABEL_27;
      result = 0;
      break;
    case 4:
      if ( Function_2265ed0(v10, v9, dword_226DA38, 4, &v19) )
        goto LABEL_27;
      result = 0;
      break;
    case 5:
      v20 = 0;
      if ( Function_2265ed0(v10, v9, dword_226DAB8, 8, &v19) )
        goto LABEL_27;
      result = 0;
      break;
    case 6:
      v20 = 0;
      if ( Function_2265ed0(v10, v9, dword_226DAD8, 8, &v19) )
        goto LABEL_27;
      result = 0;
      break;
    case 7:
      v20 = 3;
      if ( Function_2265ed0(v10, v9, dword_226DA48, 4, &v19) )
        goto LABEL_27;
      result = 0;
      break;
    case 8:
      v20 = 0;
      if ( Function_2265ed0(v10, v9, dword_226DA68, 4, &v19) )
        goto LABEL_27;
      result = 0;
      break;
    case 9:
      if ( ((int (__fastcall *)(int))dword_222EDF4[0])(v13) )
      {
        if ( ((int (__fastcall *)(int))dword_222EE08[0])(v13) )
        {
          if ( v16 == ((int (__fastcall *)(int))dword_222EE1C[0])(v13) )
          {
            if ( Function_225cf4c(v9, v15, &v20, &v19) != 1 )
              ErrorHandler();
            v20 = ((int (__fastcall *)(int))dword_222C0AC[0])(v20);
            v8 = 1;
            goto LABEL_27;
          }
          result = 0;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
      break;
    case 10:
      result = 0;
      break;
    default:
LABEL_27:
      v12 = Function_225cd34(v14);
      v17 = v12;
      v18 = v12;
      Function_225cd04();
      *v7 = (short)v18 / 16;
      v7[1] = SHIWORD(v18) / 16;
      v7[2] = a5;
      v7[3] = v8;
      v7[4] = a6;
      result = 1;
      break;
  }
  return result;
}

//----- (02265ED0) --------------------------------------------------------
int __fastcall Function_2265ed0(uint *a1, uint *a2, int *a3, uint a4, ushort *a5)
{
  uint *v5;
  int *v6;
  uint v7;
  uint v8;
  int v9;
  uint *v11;
  short v12[12];
  short v13;

  v5 = a1;
  v6 = a3;
  v11 = a2;
  v7 = a4;
  v8 = 0;
  if ( !a4 )
    return 0;
  while ( Function_225c8d8(v5, *v6, &v13, v12, 0) != 1 || Function_225ce7c(v11, v13, v12[0], v9) )
  {
    ++v8;
    ++v6;
    if ( v8 >= v7 )
      return 0;
  }
  *a5 = 16 * v13;
  a5[1] = 16 * v12[0];
  return 1;
}

//----- (02265F38) --------------------------------------------------------
int __fastcall Function_2265f38(int a1, int a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  uchar *v6;
  short *v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
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
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int i;
  uint v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int j;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
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
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  uint *v91;
  uchar v92;
  uchar v93;
  uchar v94;
  uchar v95;
  int v96;

  v96 = a4;
  v4 = (ushort *)a1;
  v5 = a2;
  v81 = a3;
  v6 = (uchar *)Function_2262e38(a1);
  v7 = (short *)Function_2262e80((int)v4);
  v90 = Function_225dee8(v5);
  switch ( (uchar)Function_2262e84((int)v4) )
  {
    case 7u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
      goto LABEL_13;
    case 8u:
      goto LABEL_8;
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0x1Au:
    case 0x1Bu:
      if ( (ushort)v7[4] <= (uint)((int (__fastcall *)(uint))dword_2233224[0])((uchar)v6[1]) )
      {
        if ( (ushort)v7[4] <= Function_2035e18() )
        {
          if ( Function_20388ac() )
          {
LABEL_8:
            if ( ((int (*)(void))dword_2233374[0])() != 1
              || (uint)((int (__fastcall *)(uint))dword_2233224[0])((uchar)v6[1]) > 1 )
            {
              v8 = *((uint *)v7 + 4) - 1;
              *((uint *)v7 + 4) = v8;
              if ( v8 >= 0 )
              {
LABEL_13:
                switch ( (uchar)Function_20380e4() )
                {
                  case 2u:
                  case 3u:
                  case 4u:
                  case 5u:
                    *v6 = 4;
                    Function_2262e88((int)v4, 23);
                    break;
                  default:
                    goto LABEL_15;
                }
              }
              else
              {
                *v6 = 4;
                Function_2262e88((int)v4, 23);
              }
            }
            else
            {
              *v6 = 4;
              Function_2262e88((int)v4, 23);
            }
          }
          else
          {
            *v6 = 4;
            Function_2262e88((int)v4, 23);
          }
        }
        else
        {
          *v6 = 4;
          Function_2262e88((int)v4, 23);
        }
      }
      else
      {
        *v6 = 4;
        Function_2262e88((int)v4, 23);
      }
      break;
    default:
      break;
  }
LABEL_15:
  v9 = Function_2262e84((int)v4);
  switch ( (uchar)v9 )
  {
    case 0:
      Function_2262e3c(v4, 0x44u);
      v10 = Function_2262e8c((int)v4);
      return Function_22669ac(v10);
    case 1:
      if ( ((int (__fastcall *)(int))dword_222E210[0])(v90) )
      {
        *v6 = 7;
        v12 = Function_2262e88((int)v4, 28);
        result = Function_22669ac(v12);
      }
      else
      {
        if ( ((int (__fastcall *)(int))dword_222E190[0])(v90) )
        {
          *v6 = 2;
          v13 = Function_2262e88((int)v4, 28);
        }
        else
        {
          Function_2005748(0x5DDu);
          v13 = Function_2262e8c((int)v4);
        }
        result = Function_22669ac(v13);
      }
      return result;
    case 2:
      v14 = (uchar)v6[2];
      Function_225e27c(v5);
      v15 = Function_2266af0(v7, v4, v5, 0, 3);
      return Function_22669ac(v15);
    case 3:
      Function_2266b30(v7, v5, 3, 1);
      Function_225e074(v5, (int)(v7 + 12), 0, 0);
      v16 = Function_2262e88((int)v4, 4);
      return Function_22669ac(v16);
    case 4:
      v89 = 0;
      v17 = Function_225e0d4(v5);
      if ( v17 > 2 )
      {
        if ( v17 != -2 )
          goto LABEL_35;
        goto LABEL_32;
      }
      if ( v17 )
      {
        if ( v17 != 1 )
        {
          if ( v17 != 2 )
            goto LABEL_35;
LABEL_32:
          *v6 = 5;
          Function_2262e88((int)v4, 28);
          v89 = 1;
          goto LABEL_35;
        }
        Function_2262e88((int)v4, 5);
        v89 = 1;
      }
      else
      {
        Function_2262e88((int)v4, 6);
        v89 = 1;
      }
LABEL_35:
      v18 = v89;
      if ( v89 == 1 )
      {
        Function_225e0e4(v5);
        v18 = Function_2266ba0(v7, v5);
      }
      return Function_22669ac(v18);
    case 5:
      v19 = (uchar)v6[2];
      Function_225e27c(v5);
      v20 = Function_2266af0(v7, v4, v5, (uchar)v6[2] + 34, 2);
      return Function_22669ac(v20);
    case 6:
      if ( ((int (__fastcall *)(int))dword_222E190[0])(v90) )
      {
        *v6 = 2;
        v21 = Function_2262e88((int)v4, 28);
        return Function_22669ac(v21);
      }
      if ( ((int (__fastcall *)(uint))dword_2233184[0])((uchar)v6[1]) != 1 )
        goto LABEL_47;
      if ( ((int (__fastcall *)(uint))dword_22331E4[0])((uchar)v6[1])
        && ((int (__fastcall *)(uint))dword_22331A4[0])((uchar)v6[1]) )
      {
        if ( ((int (__fastcall *)(uint))dword_22332F8[0])((uchar)v6[1]) )
        {
LABEL_47:
          *v7 = ((int (__fastcall *)(uint))dword_22332F8[0])((uchar)v6[1]);
          *((uint *)v7 + 4) = 900;
          if ( *v7 <= 330 )
          {
            *((uint *)v7 + 5) = 1;
            Function_225e20c(v5, 0, 11);
          }
          else
          {
            Function_225e20c(v5, 0, 10);
          }
          Function_225df9c(v5);
          Function_225dfbc(v5);
          v24 = Function_203883c((uchar)v6[1]);
          if ( ((int (__fastcall *)(int))dword_2233374[0])(v24) == 1 )
          {
            ((void (__fastcall *)(int, uint, int, int, uint, uint, uint, uint))dword_222EA10[0])(
              v90,
              (uchar)v6[2],
              1,
              v81,
              0,
              0,
              0,
              0);
            *((uchar *)v7 + 7) = 1;
          }
          Function_2266c68(v7 + 30, v5, (uchar)v6[2], 1, *v7);
          Function_2266cfc(v7 + 30, v5, 1);
          v25 = Function_2262e88((int)v4, 7);
          result = Function_22669ac(v25);
        }
        else
        {
          *v6 = 7;
          v23 = Function_2262e88((int)v4, 28);
          result = Function_22669ac(v23);
        }
      }
      else
      {
        *v6 = 1;
        v22 = Function_2262e88((int)v4, 28);
        result = Function_22669ac(v22);
      }
      return result;
    case 7:
      v88 = Function_20388ac();
      v87 = ((int (__fastcall *)(uint))dword_2233224[0])((uchar)v6[1]);
      *v7 = ((int (__fastcall *)(uint))dword_22332F8[0])((uchar)v6[1]);
      Function_2266ccc(v7 + 30, *v7);
      if ( *v7 <= 330 && !*((uint *)v7 + 5) )
      {
        Function_225dfcc(v5);
        *((uint *)v7 + 5) = 1;
        Function_225e20c(v5, 0, 11);
        Function_225df9c(v5);
        Function_225dfbc(v5);
      }
      Function_2266cf0(v7 + 30, v5, 0);
      if ( !v88 )
      {
        *v6 = 4;
        v26 = Function_2262e88((int)v4, 23);
        return Function_22669ac(v26);
      }
      if ( v88 == 2 )
      {
        *v6 = 8;
        if ( v87 == 4 )
          v27 = 16;
        else
          v27 = 18;
        Function_225dfcc(v5);
        Function_225e20c(v5, 0, v27);
        Function_225df9c(v5);
        Function_225dfbc(v5);
        Function_2262e88((int)v4, 9);
        v7[4] = v87;
        Function_2266ccc(v7 + 30, 0);
        v28 = Function_2266cf0(v7 + 30, v5, 0);
        return Function_22669ac(v28);
      }
      if ( !*((uint *)v7 + 5) && dword_21BF6C4 & 2 )
      {
        v29 = Function_2005748(0x5DCu);
        if ( ((int (__fastcall *)(int))dword_2233374[0])(v29) )
        {
          *v6 = 6;
          Function_225dfcc(v5);
          v30 = Function_2262e88((int)v4, 16);
        }
        else
        {
          *v6 = 6;
          Function_225dfcc(v5);
          v30 = Function_2262e88((int)v4, 23);
        }
        return Function_22669ac(v30);
      }
      if ( ((int (*)(void))dword_2233374[0])() == 1 )
      {
        if ( *((uchar *)v7 + 7) != v87 )
        {
          *((uchar *)v7 + 7) = v87;
          if ( v87 != 4 )
            ((void (__fastcall *)(int, uint, int, int, uint, uint, uint, uint))dword_222EA10[0])(
              v90,
              (uchar)v6[2],
              v87,
              v81,
              0,
              0,
              0,
              0);
        }
        if ( !*v7 && (uint)((int (__fastcall *)(uint))dword_2233224[0])((uchar)v6[1]) <= 1 )
        {
          *v6 = 3;
          v31 = Function_2262e88((int)v4, 23);
          return Function_22669ac(v31);
        }
      }
      if ( ((int (__fastcall *)(uint))dword_2233184[0])((uchar)v6[1]) == 1
        && !((int (__fastcall *)(uint))dword_22331A4[0])((uchar)v6[1]) )
      {
        *v6 = 0;
        v32 = Function_2262e88((int)v4, 23);
        return Function_22669ac(v32);
      }
      v33 = *v7;
      if ( !*v7 )
      {
        Function_2262e88((int)v4, 8);
        Function_225dfcc(v5);
        Function_225e20c(v5, 0, 18);
        Function_225df9c(v5);
        v34 = Function_225dfbc(v5);
        return Function_22669ac(v34);
      }
      goto LABEL_90;
    case 8:
      Function_2266ccc(v7 + 30, 0);
      Function_2266cf0(v7 + 30, v5, 0);
      v35 = Function_20388ac();
      v86 = ((int (__fastcall *)(uint))dword_2233224[0])((uchar)v6[1]);
      v36 = Function_20380e4();
      if ( v36 == 3 || v36 == 4 )
      {
        *v6 = 4;
        Function_2262e88((int)v4, 23);
      }
      if ( v35 )
      {
        if ( v35 == 2 )
        {
          *v6 = 8;
          Function_2262e88((int)v4, 9);
          v7[4] = v86;
          result = Function_22669ac(v86);
        }
        else
        {
          v33 = ((int (__fastcall *)(uint))dword_2233184[0])((uchar)v6[1]);
          if ( v33 != 1 || (v33 = ((int (__fastcall *)(uint))dword_22331A4[0])((uchar)v6[1])) != 0 )
          {
LABEL_90:
            result = Function_22669ac(v33);
          }
          else
          {
            *v6 = 0;
            v38 = Function_2262e88((int)v4, 23);
            result = Function_22669ac(v38);
          }
        }
      }
      else
      {
        *v6 = 4;
        v37 = Function_2262e88((int)v4, 23);
        result = Function_22669ac(v37);
      }
      return result;
    case 9:
      Function_2266ccc(v7 + 30, 0);
      Function_2266cf0(v7 + 30, v5, 0);
      v39 = Function_225dee8(v5);
      v40 = ((int (__fastcall *)(int, uint))dword_222E3E4[0])(v39, (uchar)v6[3]);
      ((void (__fastcall *)(int))Function_2038b40[0])(v40);
      v41 = Function_225dee8(v5);
      v42 = ((int (__fastcall *)(int))dword_222E0C4[0])(v41);
      Function_20329e0(v42, 0);
      v43 = ((int (__fastcall *)(int))dword_222E918[0])(v90);
      Function_20331f4(v43);
      Function_203632c(0);
      v44 = Function_2266b18(v7, v4, 10, 17);
      return Function_22669ac(v44);
    case 0xA:
      Function_2266ccc(v7 + 30, 0);
      Function_2266cf0(v7 + 30, v5, 0);
      Function_2032ac0();
      v45 = Function_203608c();
      Function_2032e1c(v45);
      v46 = Function_2262e88((int)v4, 11);
      return Function_22669ac(v46);
    case 0xB:
      Function_2266ccc(v7 + 30, 0);
      Function_2266cf0(v7 + 30, v5, 0);
      for ( i = Function_2032e44(); i != 255; i = Function_2032e44() )
        Function_2032e1c(i);
      v48 = Function_2032e64();
      if ( v48 < ((int (__fastcall *)(uint))dword_2233224[0])((uchar)v6[1]) )
      {
        v49 = ((int (*)(void))dword_2233128[0])();
        if ( v49 == 1 )
        {
          *v6 = 4;
          v51 = Function_2262e88((int)v4, 23);
          return Function_22669ac(v51);
        }
      }
      else
      {
        if ( ((int (*)(void))dword_2233374[0])() == 1 && !v7[1] )
        {
          ((void (*)(void))dword_22330CC[0])();
          v7[1] = 1;
        }
        v49 = ((int (*)(void))dword_2233128[0])();
        if ( v49 == 1 )
        {
          v50 = Function_2262e88((int)v4, 12);
          return Function_22669ac(v50);
        }
      }
      return Function_22669ac(v49);
    case 0xC:
      Function_2266ccc(v7 + 30, 0);
      Function_2266cf0(v7 + 30, v5, 0);
      Function_20365f4();
      ((void (__fastcall *)(int))dword_222E238[0])(v90);
      v52 = Function_2266b18(v7, v4, 13, 14);
      return Function_22669ac(v52);
    case 0xD:
      Function_2266ccc(v7 + 30, 0);
      Function_2266cf0(v7 + 30, v5, 0);
      *((uint *)v7 + 3) = ((int (__fastcall *)(int))dword_222E344[0])(v90);
      v53 = Function_203608c();
      v49 = Function_2036614(v53, (int)(v7 + 6));
      if ( v49 != 1 )
        return Function_22669ac(v49);
      v54 = Function_2262e88((int)v4, 14);
      return Function_22669ac(v54);
    case 0xE:
      Function_2266ccc(v7 + 30, 0);
      Function_2266cf0(v7 + 30, v5, 0);
      v85 = Function_2032e64();
      v55 = 0;
      v84 = Function_203608c();
      v83 = 0;
      v82 = ((int (*)(void))dword_22332F8[18])();
      for ( j = 0; j < v85; ++j )
      {
        if ( v84 == j )
        {
          v57 = ((int (__fastcall *)(int, int))dword_222E27C[0])(v90, j);
          if ( ((int (__fastcall *)(int))dword_2233374[0])(v57) == 1 )
            v83 = 1;
          ++v55;
        }
        else
        {
          v91 = (uint *)Function_203664c(j);
          if ( v91 )
          {
            ((void (__fastcall *)(int, uint, int))dword_222E24C[0])(v90, *v91, j);
            if ( *v91 == v82 )
              v83 = 1;
            ++v55;
          }
        }
      }
      v58 = v85;
      if ( v55 != v85 )
        goto LABEL_134;
      if ( v83 == 1 )
      {
        v59 = Function_2262e88((int)v4, 15);
      }
      else
      {
        *v6 = 4;
        v59 = Function_2262e88((int)v4, 23);
      }
      return Function_22669ac(v59);
    case 0xF:
      v60 = Function_20388f4(0, 1);
      if ( ((int (__fastcall *)(int))dword_2233374[0])(v60) == 1 )
      {
        ((void (__fastcall *)(int, uchar *))dword_222E294[0])(v90, &v92);
        v61 = ((int (__fastcall *)(uint))dword_2233224[0])((uchar)v6[1]);
        ((void (__fastcall *)(int, uint, int, uint, uint, uint, uint, int))dword_222EA10[0])(
          v90,
          (uchar)v6[2],
          v61,
          v92,
          v93,
          v94,
          v95,
          1);
      }
      Function_225dfcc(v5);
      v62 = Function_2266b18(v7, v4, 28, 18);
      return Function_22669ac(v62);
    case 0x10:
      v63 = Function_225e20c(v5, 0, 26);
      Function_225df8c(v5, v63);
      Function_2262e88((int)v4, 17);
      v64 = Function_2266cb0(v7 + 30, v5);
      return Function_22669ac(v64);
    case 0x11:
      v58 = Function_2266bac(v7, v5, v6, v4, v81);
      if ( v58 )
        goto LABEL_134;
      v58 = Function_225dfac(v5);
      if ( v58 != 1 )
        goto LABEL_134;
      v65 = Function_2262e88((int)v4, 18);
      return Function_22669ac(v65);
    case 0x12:
      Function_225e194(v5);
      v66 = Function_2262e88((int)v4, 19);
      return Function_22669ac(v66);
    case 0x13:
      v58 = Function_225e1c4(v5);
      if ( v58 )
      {
        if ( v58 == 1 )
        {
          Function_225e1f8(v5);
          v68 = Function_2262e88((int)v4, 20);
          result = Function_22669ac(v68);
        }
        else if ( v58 == 2 )
        {
          v69 = Function_2266bac(v7, v5, v6, v4, v81);
          if ( v69 == 1 )
            v69 = Function_225e1f8(v5);
          result = Function_22669ac(v69);
        }
        else
        {
LABEL_134:
          result = Function_22669ac(v58);
        }
      }
      else
      {
        Function_225e1f8(v5);
        Function_2262e88((int)v4, 23);
        v67 = ((int (__fastcall *)(int))dword_222E200[0])(v90);
        result = Function_22669ac(v67);
      }
      return result;
    case 0x14:
      *v7 = ((int (__fastcall *)(uint))dword_22332F8[0])((uchar)v6[1]);
      Function_2266c68(v7 + 30, v5, (uchar)v6[2], 1, *v7);
      Function_2266cfc(v7 + 30, v5, 1);
      if ( *v7 <= 330 )
      {
        *((uint *)v7 + 5) = 1;
        Function_225e20c(v5, 0, 11);
      }
      else
      {
        Function_225e20c(v5, 0, 10);
      }
      Function_225df9c(v5);
      Function_225dfbc(v5);
      v70 = Function_2262e88((int)v4, 7);
      return Function_22669ac(v70);
    case 0x15:
      v71 = ((int (__fastcall *)(uint))dword_2233224[0])((uchar)v6[1]);
      *v6 = 8;
      if ( v71 == 4 )
        v72 = 16;
      else
        v72 = 18;
      Function_225e20c(v5, 0, v72);
      Function_225df9c(v5);
      Function_225dfbc(v5);
      Function_2262e88((int)v4, 9);
      Function_2266c68(v7 + 30, v5, (uchar)v6[2], 1, 0);
      v73 = Function_2266cfc(v7 + 30, v5, 1);
      return Function_22669ac(v73);
    case 0x16:
      Function_225e20c(v5, 0, 18);
      Function_225df9c(v5);
      Function_225dfbc(v5);
      Function_2266c68(v7 + 30, v5, (uchar)v6[2], 1, 0);
      Function_2266ccc(v7 + 30, 0);
      Function_2266cf0(v7 + 30, v5, 1);
      v74 = Function_2262e88((int)v4, 8);
      return Function_22669ac(v74);
    case 0x17:
      Function_2032a70();
      Function_203888c();
      v75 = Function_2262e88((int)v4, 24);
      return Function_22669ac(v75);
    case 0x18:
      v76 = Function_20388ac();
      if ( !v76 )
        v76 = Function_2262e88((int)v4, 28);
      return Function_22669ac(v76);
    case 0x19:
      v77 = Function_225dfac(v5);
      if ( v77 == 1 )
        v77 = Function_2262e88((int)v4, *((uchar *)v7 + 4));
      return Function_22669ac(v77);
    case 0x1A:
      v78 = *((char *)v7 + 5);
      if ( v78 > 0 )
        *((uchar *)v7 + 5) = v78 - 1;
      v79 = *((char *)v7 + 5);
      if ( !*((uchar *)v7 + 5) )
      {
        Function_20364f0(*((uchar *)v7 + 6));
        v79 = Function_2262e88((int)v4, 27);
      }
      return Function_22669ac(v79);
    case 0x1B:
      if ( (ushort)++v7[5] >= 0x96u )
      {
        Function_20364f0(*((uchar *)v7 + 6));
        v7[5] = 0;
      }
      if ( !Function_2036540(*((uchar *)v7 + 6)) )
        return Function_22669ac(0);
      v80 = Function_2262e88((int)v4, *((uchar *)v7 + 4));
      return Function_22669ac(v80);
    case 0x1C:
      Function_225dfec(v5);
      Function_2266ba0(v7, v5);
      Function_2266cb0(v7 + 30, v5);
      Function_2262e64((int)v4);
      return 1;
    default:
      JUMPOUT(__CS__, *((short *)&off_226606A + v9) + 36069484);
      return result;
  }
}

//----- (022669AC) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (022669B8) --------------------------------------------------------
int __fastcall Function_22669b8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2262e84(a1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_20382c0() == 1 )
      return 1;
  }
  else
  {
    Function_20388f4(0, 0);
    if ( !Function_20382c0() )
    {
      Function_2032a70();
      Function_203888c();
    }
    Function_2262e88(v1, 1);
  }
  return 0;
}

//----- (022669FC) --------------------------------------------------------
int __fastcall Function_22669fc(int a1, int a2)
{
  ushort *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = (ushort *)a1;
  v3 = a2;
  v4 = Function_2262e80(a1);
  v5 = Function_2262e84((int)v2);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( dword_21BF6C4 & 1 || dword_21BF6C4 & 0x10 || dword_21BF6C4 & 0x20 || dword_21BF6C4 & 0x80 )
      {
        Function_2266cb0(v4, v3);
        Function_225dfec(v3);
        v10 = Function_225def0(v3);
        v11 = v10;
        v12 = Function_225ccac(v10);
        Function_225cdec(v11, v12, 1);
        Function_2262e64((int)v2);
        return 1;
      }
      Function_2266cfc(v4, v3, 0);
    }
  }
  else
  {
    v13 = Function_2262e3c(v2, 8u);
    v6 = Function_225df40(v3);
    switch ( v6 )
    {
      case 39:
        v7 = 42;
        v8 = 0;
        break;
      case 40:
        v7 = 41;
        v8 = 1;
        break;
      case 41:
        v7 = 43;
        v8 = 2;
        break;
      default:
        ErrorHandler();
        return 1;
    }
    Function_225e27c(v3);
    Function_225e20c(v3, 1, v7);
    Function_225dffc(v3);
    Function_2266c68(v13, v3, v8, 0, 0);
    Function_2266cfc(v13, v3, 1);
    Function_2262e8c((int)v2);
  }
  return 0;
}

//----- (02266AF0) --------------------------------------------------------
int __fastcall Function_2266af0(int a1, int a2, int a3, int a4, char a5)
{
  int v5;
  int v6;
  int v7;
  int v8;

  v5 = a3;
  v6 = a1;
  v7 = a2;
  v8 = Function_225e20c(a3, 0, a4);
  Function_225df8c(v5, v8);
  *(uchar *)(v6 + 4) = a5;
  return Function_2262e88(v7, 25);
}

//----- (02266B18) --------------------------------------------------------
int __fastcall Function_2266b18(int a1, int a2, char a3, char a4)
{
  *(uchar *)(a1 + 4) = a3;
  *(uchar *)(a1 + 6) = a4;
  *(uchar *)(a1 + 5) = 0;
  *(ushort *)(a1 + 10) = 0;
  return Function_2262e88(a2, 26);
}

//----- (02266B30) --------------------------------------------------------
int __fastcall Function_2266b30(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  uint v7;
  uint *v8;
  uint *v9;
  uint *v10;
  uint *v11;
  uint v12;
  int result;
  int v14;

  v4 = a2;
  v5 = a3;
  v14 = a1;
  v6 = a4;
  Function_225e00c(a2, a3);
  v7 = 0;
  *(uint *)(v14 + 56) = v5;
  if ( v5 )
  {
    do
    {
      Function_225e20c(v4, 0, v6 + v7);
      Function_225e044(v4);
      ++v7;
    }
    while ( v7 < v5 );
  }
  v8 = (uint *)(v14 + 24);
  *v8 = 0;
  v8[1] = 0;
  v9 = (uint *)(v14 + 32);
  *v9 = 0;
  v9[1] = 0;
  v10 = (uint *)(v14 + 40);
  *v10 = 196608;
  v10[1] = 268437504;
  v11 = (uint *)(v14 + 48);
  *v11 = 47;
  v11[1] = 0;
  *(ushort *)(v14 + 40) = *(uint *)(v14 + 56);
  v12 = *(uint *)(v14 + 56);
  if ( *(ushort *)(v14 + 42) > v12 )
    *(ushort *)(v14 + 42) = v12;
  result = Function_225e054(v4);
  *(uint *)(v14 + 24) = result;
  return result;
}

//----- (02266BA0) --------------------------------------------------------
int __fastcall Function_2266ba0(int a1, int a2)
{
  return Function_225e034(a2);
}

//----- (02266BAC) --------------------------------------------------------
int __fastcall Function_2266bac(short *a1, int a2, uchar *a3, int a4)
{
  short *v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v10 = Function_225dee8(a2);
  v7 = Function_20388ac();
  v8 = ((int (__fastcall *)(uint))dword_2233224[0])((uchar)v5[1]);
  if ( v7 )
  {
    if ( v7 == 2 )
    {
      v4[4] = v8;
      Function_2262e88(v6, 21);
      result = 1;
    }
    else
    {
      if ( *((uchar *)v4 + 7) != v8 )
      {
        *((uchar *)v4 + 7) = v8;
        if ( v8 != 4 )
          ((void (__fastcall *)(int, uint))dword_222EA10[0])(v10, (uchar)v5[2]);
      }
      *v4 = ((int (__fastcall *)(uint))dword_22332F8[0])((uchar)v5[1]);
      result = 0;
      if ( *v4 )
      {
        if ( *v4 <= 330 )
        {
          Function_2262e88(v6, 20);
          result = 1;
        }
      }
      else
      {
        if ( (uint)((int (__fastcall *)(uint))dword_2233224[0])((uchar)v5[1]) > 1 )
        {
          Function_2262e88(v6, 22);
        }
        else
        {
          *v5 = 3;
          Function_2262e88(v6, 23);
        }
        result = 1;
      }
    }
  }
  else
  {
    *v5 = 4;
    Function_2262e88(v6, 23);
    result = 1;
  }
  return result;
}

//----- (02266C68) --------------------------------------------------------
int __fastcall Function_2266c68(uchar *a1, int a2, char a3, uint a4, int a5)
{
  uint v5;
  uchar *v6;
  int v7;
  char v8;

  v5 = a4;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  if ( a4 >= 2 )
    ErrorHandler();
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v6[6] = v5;
  v6[3] = v8;
  Function_2266ccc(v6, a5);
  return Function_225e104(v7, 18, 3, 13, *((uchar *)&dword_226DC90 + v5));
}

//----- (02266CB0) --------------------------------------------------------
int __fastcall Function_2266cb0(uchar *a1, int a2)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  return Function_225e12c(a2);
}

//----- (02266CCC) --------------------------------------------------------
int __fastcall Function_2266ccc(int a1, uint a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a1;
  v3 = (short)s32_div_f(a2, 30);
  result = *(short *)(v2 + 4);
  if ( v3 != result )
  {
    *(ushort *)(v2 + 4) = v3;
    v5 = *(uchar *)(v2 + 7);
    result = v5 | 8;
    *(uchar *)(v2 + 7) = v5 | 8;
  }
  return result;
}

//----- (02266CF0) --------------------------------------------------------
int __fastcall Function_2266cf0(int a1, int a2, int a3)
{
  return Function_2266d08(a1, a2, a3, 0);
}

//----- (02266CFC) --------------------------------------------------------
int __fastcall Function_2266cfc(int a1, int a2, int a3)
{
  return Function_2266d08(a1, a2, a3, 1);
}

//----- (02266D08) --------------------------------------------------------
int __fastcall Function_2266d08(uchar *a1, int a2, int a3, int a4)
{
  uchar *v4;
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
  int result;
  int v16;

  v4 = a1;
  v5 = a2;
  v16 = a4;
  if ( a3 )
    a1[7] = -1;
  v6 = a1[3];
  if ( v4[3] )
  {
    if ( v6 == 1 )
    {
      v7 = 1;
    }
    else
    {
      if ( v6 != 2 )
        ErrorHandler();
      v7 = 2;
    }
  }
  else
  {
    v7 = 0;
  }
  v8 = ((int (__fastcall *)(int))dword_2233184[0])(v7);
  if ( *v4 != v8 )
    v4[7] |= 4u;
  *v4 = v8;
  v9 = ((int (__fastcall *)(int))dword_22331A4[0])(v7);
  if ( v4[2] != v9 )
    v4[7] |= 4u;
  v4[2] = v9;
  if ( v8 == 1 )
    v10 = ((int (__fastcall *)(int))dword_22331E4[0])(v7);
  else
    v10 = 4;
  if ( v4[1] != v10 )
    v4[7] |= 2u;
  v4[1] = v10;
  if ( v4[7] & 1 )
  {
    Function_225e14c(v5);
    v11 = v4[3];
    Function_225e27c(v5);
    Function_225e20c(v5, 1, 54);
    Function_225e13c(v5);
  }
  if ( v4[7] & 4 )
  {
    Function_225e14c(v5);
    if ( v16 == 1 && !v4[2] && *v4 == 1 )
    {
      Function_225e20c(v5, 1, 69);
      Function_225e13c(v5);
    }
  }
  if ( v4[7] & 2 )
  {
    Function_225e14c(v5);
    v12 = v4[1];
    Function_225e21c(v5);
    v13 = v4[1];
    Function_225e21c(v5);
    Function_225e20c(v5, 1, 68);
    Function_225e13c(v5);
  }
  if ( v4[6] == 1 && v4[7] & 8 )
  {
    Function_225e14c(v5);
    v14 = *((short *)v4 + 2);
    Function_225e21c(v5);
    Function_225e20c(v5, 0, 15);
    Function_225e13c(v5);
  }
  result = 0;
  v4[7] = 0;
  return result;
}

//----- (02266E9C) --------------------------------------------------------
int __fastcall Function_2266e9c(ushort *a1, int a2, int a3)
{
  int v3;
  ushort *v4;
  int v5;
  uchar *v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  uint *v11;
  uint *v12;
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
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int result;
  int v48;
  int v49;
  int v50;
  int v51;
  uint v52;
  char v53;
  int v54;
  uint *v55;
  uint *v56;
  int v57;
  uchar v58;
  char v59;

  v3 = a2;
  v4 = a1;
  v48 = a3;
  v5 = Function_225dee8(a2);
  v54 = Function_225df10(v3);
  v6 = (uchar *)Function_2262e80((int)v4);
  v53 = ((int (__fastcall *)(int))dword_222EE30[0])(v5);
  v52 = ((int (__fastcall *)(int))dword_222EE3C[0])(v5);
  if ( ((int (__fastcall *)(int))dword_222EE68[0])(v5) && v6 && *((ushort *)v6 + 5) )
  {
    Function_2262e88((int)v4, 32);
    Function_225dfcc(v3);
    *((ushort *)v6 + 5) = 0;
  }
  if ( v6 )
  {
    v51 = ((int (__fastcall *)(int))dword_222E3BC[0])(v5);
    if ( *((uint *)v6 + 4) )
      v50 = ((int (__fastcall *)(int, uint))dword_222E374[0])(v5, v6[3]);
    else
      v50 = 0;
  }
  if ( Function_2262e84((int)v4) && *((ushort *)v6 + 5) && !v50 )
  {
    Function_2262e88((int)v4, 32);
    Function_225dfcc(v3);
    *((ushort *)v6 + 5) = 0;
  }
  v7 = Function_2262e84((int)v4);
  switch ( (uchar)v7 )
  {
    case 0:
      v8 = Function_2262e3c(v4, 0x50u);
      v6 = (uchar *)v8;
      *(ushort *)(v8 + 68) = 0;
      *(ushort *)(v8 + 70) = 0;
      *(uint *)(v8 + 72) = 0;
      Function_2269114(v8 + 56);
      v9 = Function_225def0(v3);
      v10 = (uint *)v9;
      v11 = (uint *)Function_225ccac(v9);
      v55 = v11;
      v12 = (uint *)Function_225ce40(v10, v11);
      v56 = v12;
      if ( v12 )
      {
        v57 = Function_225cd60(v12, 4);
        v13 = Function_225cd60(v55, 6);
        v14 = ((int (__fastcall *)(int))dword_222C0AC[0])(v13);
        ((void (__fastcall *)(int))dword_222EC60[0])(v5);
        v15 = Function_2268b50(v6, v5, v57);
        *((uint *)v6 + 4) = v56;
        ((void (*)(void))Function_225d030[0])();
        ((void (__fastcall *)(uint *, int))Function_225d060[0])(v56, v14);
        Function_2262eec(v54, v57, 0);
        Function_2005748(0x5E4u);
        ((void (__fastcall *)(int, int))dword_222E3E4[0])(v5, 9);
        if ( v15 == 1 )
        {
          Function_225e328(v3, v57, 0);
          Function_2262e88((int)v4, 1);
        }
        else
        {
          Function_2262e88((int)v4, 34);
        }
      }
      else
      {
        *((ushort *)v6 + 5) = 0;
        Function_2262e88((int)v4, 38);
      }
      goto Function_2267a2e;
    case 1:
      if ( ((int (__fastcall *)(int, uint))dword_222EC70[0])(v5, v6[3]) == 1 )
        Function_2262e88((int)v4, 2);
      else
        Function_2262e88((int)v4, 34);
      goto Function_2267a2e;
    case 2:
      switch ( v53 )
      {
        case 0:
          Function_2262e88((int)v4, 34);
          break;
        case 1:
          goto Function_2267a2e;
        case 2:
          ((void (__fastcall *)(int, uint))dword_222EEE4[0])(v5, v6[3]);
          Function_2262e88((int)v4, 3);
          break;
        default:
          Function_2262e88((int)v4, 32);
          break;
      }
      goto Function_2267a2e;
    case 3:
      ((void (__fastcall *)(int, uint))dword_222EEF4[0])(v5, v6[3]);
      ((void (__fastcall *)(int))dword_222EF94[35])(v5);
      ((void (__fastcall *)(int, int))dword_222F040[0])(v5, 7);
      Function_2268bf4(v6, v5, v3, v6[4], v51, v50);
      Function_2268ba4(v6, 128, 4, v4, 37);
      goto Function_2267a2e;
    case 4:
      Function_2268bf4(v6, v5, v3, v6[5], v50, v51);
      Function_2268ba4(v6, 128, 5, v4, 37);
      ((void (__fastcall *)(int, uint))dword_222ECD4[0])(v5, 0);
      goto Function_2267a2e;
    case 5:
      switch ( v53 )
      {
        case 2:
          Function_225dfcc(v3);
          if ( ((int (__fastcall *)(int))dword_222EE24[0])(v5) )
            Function_2262e88((int)v4, 6);
          else
            Function_2262e88((int)v4, 8);
          break;
        case 3:
          if ( !Function_225dfdc(v3) )
            Function_225dfbc(v3);
          Function_2268d70(v6, v3);
          break;
        default:
          Function_2262e88((int)v4, 32);
          Function_225dfcc(v3);
          break;
      }
      goto Function_2267a2e;
    case 6:
      if ( Function_2268cc8(v6, v5, v3) == 1 )
        Function_2268ba4(v6, 128, 7, v4, 37);
      else
        Function_2262e88((int)v4, 7);
      goto Function_2267a2e;
    case 7:
      Function_225e234(v3, v6[3], 0);
      v16 = Function_2268aac(v3, v6[3], 40);
      Function_225df8c(v3, v16);
      Function_2268ba4(v6, 128, 9, v4, 37);
      goto Function_2267a2e;
    case 8:
      Function_225e234(v3, v6[3], 0);
      Function_225e234(v3, *((ushort *)v6 + 4), 1);
      v17 = Function_2268af8(v3, v6[3], *((ushort *)v6 + 4));
      Function_225df8c(v3, v17);
      Function_2268ba4(v6, 128, 9, v4, 37);
      goto Function_2267a2e;
    case 9:
      Function_225e234(v3, v6[3], 0);
      v18 = Function_2268aac(v3, v6[3], 46);
      Function_225df8c(v3, v18);
      Function_2268ba4(v6, 128, 11, v4, 37);
      goto Function_2267a2e;
    case 0xA:
      Function_225e234(v3, v6[3], 0);
      v19 = Function_2268aac(v3, v6[3], 54);
      Function_225df8c(v3, v19);
      Function_2268ba4(v6, 128, 11, v4, 37);
      goto Function_2267a2e;
    case 0xB:
      Function_2268e44(v6 + 20, v3, 3, 515, 0);
      Function_225e074(v3, (int)(v6 + 20), 0, 0);
      Function_2268db8(v6);
      Function_2262e88((int)v4, 12);
      goto Function_2267a2e;
    case 0xC:
      v20 = Function_225e0d4(v3);
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          Function_2262e88((int)v4, 19);
          v21 = Function_225cd60(*((uint **)v6 + 4), 4);
          ((void (__fastcall *)(int, int, int))dword_222E990[0])(v5, v48, v21);
          v22 = 1;
        }
        else if ( v20 == 2 )
        {
          ((void (__fastcall *)(int))dword_222ED7C[0])(v5);
          Function_2262e88((int)v4, 33);
          v22 = 1;
        }
        else
        {
          Function_2268dcc(v6, v3);
          v22 = 0;
        }
      }
      else
      {
        Function_2262e88((int)v4, 13);
        v22 = 1;
      }
      if ( v22 == 1 )
      {
        Function_225e0e4(v3);
        Function_2269108(v6 + 20, v3);
        Function_2268dc4(v6);
      }
      goto Function_2267a2e;
    case 0xD:
      v23 = ((int (__fastcall *)(int))dword_222E8C4)(v51);
      if ( v23 == ((int (__fastcall *)(int))dword_222E8C4)(v50) )
      {
        v6[12] = 1;
        Function_225e234(v3, v6[3], 0);
        Function_2268d38(v6, v5, v3, 1, 0);
        v24 = Function_2268aac(v3, v6[3], 507);
        Function_225df8c(v3, v24);
        Function_2268ba4(v6, 128, 18, v4, 37);
        ((void (__fastcall *)(int, int))dword_222ECD4[0])(v5, 4);
      }
      else
      {
        v6[12] = 0;
        Function_225e234(v3, v6[3], 0);
        Function_2268d38(v6, v5, v3, 1, 1);
        Function_2268d38(v6, v5, v3, 2, 0);
        v25 = Function_2268aac(v3, v6[3], 508);
        Function_225df8c(v3, v25);
        Function_2268ba4(v6, 128, 14, v4, 37);
      }
      goto Function_2267a2e;
    case 0xE:
      Function_2268e44(v6 + 20, v3, 2, 518, 1);
      Function_225e074(v3, (int)(v6 + 20), 0, 0);
      Function_2268db8(v6);
      Function_2262e88((int)v4, 15);
      goto Function_2267a2e;
    case 0xF:
      v26 = Function_225e0d4(v3);
      if ( v26 )
      {
        if ( v26 == 1 )
        {
          Function_2262e88((int)v4, 10);
          v29 = 1;
        }
        else
        {
          Function_2268dcc(v6, v3);
          v29 = 0;
        }
      }
      else
      {
        ((void (__fastcall *)(int, int))dword_222ECD4[0])(v5, 3);
        Function_2262e88((int)v4, 16);
        ((void (__fastcall *)(int, uint))dword_222EF44[0])(v5, v6[3]);
        v27 = Function_225cd60(*((uint **)v6 + 4), 4);
        v28 = ((int (__fastcall *)(int))dword_222E8C4)(v50);
        ((void (__fastcall *)(int, int, int, int))dword_222E9CC[0])(v5, v48, v27, v28);
        v29 = 1;
      }
      if ( v29 == 1 )
      {
        Function_225e0e4(v3);
        Function_2269108(v6 + 20, v3);
        Function_2268dc4(v6);
      }
      goto Function_2267a2e;
    case 0x10:
      Function_225e234(v3, v6[3], 0);
      Function_2268d38(v6, v5, v3, 1, 0);
      v30 = Function_2268aac(v3, v6[3], 510);
      Function_225df8c(v3, v30);
      Function_2268ba4(v6, 128, 17, v4, 37);
      v31 = ((int (__fastcall *)(int))dword_222E8C4)(v50);
      ((void (__fastcall *)(int, int))dword_222E528[0])(v5, v31);
      goto Function_2267a2e;
    case 0x11:
      Function_2005748(0x5A8u);
      Function_2262e88((int)v4, 18);
      goto Function_2267a2e;
    case 0x12:
      switch ( v53 )
      {
        case 2:
          Function_2268e20(v6, v50);
          if ( v6[12] == 1 )
            Function_2262e88((int)v4, 33);
          else
            Function_2262e88((int)v4, 10);
          Function_225dfcc(v3);
          break;
        case 3:
          if ( !Function_225dfdc(v3) )
            Function_225dfbc(v3);
          Function_2268d70(v6, v3);
          break;
        default:
          Function_2262e88((int)v4, 32);
          Function_225dfcc(v3);
          break;
      }
      goto Function_2267a2e;
    case 0x13:
      ((void (__fastcall *)(int, int))dword_222ECD4[0])(v5, 5);
      Function_2262e88((int)v4, 20);
      goto Function_2267a2e;
    case 0x14:
      Function_2268eec(v6 + 20, v3, 30, 4, 519, 0);
      Function_225e0a4(v3, (int)(v6 + 20), 0, 0, 8u, 3u, 0x17u);
      Function_2262e88((int)v4, 21);
      Function_2268db8(v6);
      goto Function_2267a2e;
    case 0x15:
      v32 = Function_225e0d4(v3);
      v58 = v32;
      if ( v32 != -2 && v32 != -1 )
      {
        Function_225e0e4(v3);
        Function_2269108(v6 + 20, v3);
        *v6 = v58;
        Function_2262e88((int)v4, 22);
      }
      else
      {
        Function_2268dcc(v6, v3);
      }
      goto Function_2267a2e;
    case 0x16:
      Function_225e234(v3, v6[3], 0);
      v33 = Function_2268aac(v3, v6[3], *v6 + 477);
      Function_225df8c(v3, v33);
      Function_2268ba4(v6, 128, 23, v4, 37);
      goto Function_2267a2e;
    case 0x17:
      Function_2268e44(v6 + 20, v3, 4, 4 * *v6 + 115, 0);
      Function_225e074(v3, (int)(v6 + 20), 0, 0);
      Function_2262e88((int)v4, 24);
      goto Function_2267a2e;
    case 0x18:
      v59 = Function_225e0d4(v3);
      switch ( v59 )
      {
        case 0:
        case 1:
        case 2:
        case 3:
          Function_225e0e4(v3);
          Function_2269108(v6 + 20, v3);
          Function_2268dc4(v6);
          v6[1] = v59 + 4 * *v6;
          Function_2262e88((int)v4, 25);
          break;
        default:
          Function_2268dcc(v6, v3);
          break;
      }
      goto Function_2267a2e;
    case 0x19:
      Function_226911c(v6 + 56, v5, (v6[1] + 6) & 0xFFFF, 2);
      Function_225e234(v3, v6[3], 0);
      v34 = Function_2268aac(v3, v6[3], v6[1] + 357);
      Function_225df8c(v3, v34);
      Function_2268ba4(v6, 128, 26, v4, 37);
      goto Function_2267a2e;
    case 0x1A:
      Function_225e234(v3, v6[3], 0);
      v35 = Function_2268aac(v3, v6[3], *v6 + 85);
      Function_225df8c(v3, v35);
      Function_2268ba4(v6, 128, 27, v4, 37);
      goto Function_2267a2e;
    case 0x1B:
      if ( Function_2269178(v6 + 56) == 1 )
      {
        if ( Function_2269188(v6 + 56) == 2 )
        {
          Function_2262e88((int)v4, 28);
        }
        else
        {
          Function_2262e88((int)v4, 32);
          Function_225dfcc(v3);
        }
      }
      else if ( !Function_225dfdc(v3) )
      {
        Function_225dfbc(v3);
      }
      goto Function_2267a2e;
    case 0x1C:
      switch ( v53 )
      {
        case 2:
          Function_2268e20(v6, v50);
          Function_2262e88((int)v4, 29);
          Function_225dfcc(v3);
          break;
        case 3:
          if ( !Function_225dfdc(v3) )
            Function_225dfbc(v3);
          Function_2268d70(v6, v3);
          break;
        default:
          Function_2262e88((int)v4, 32);
          Function_225dfcc(v3);
          break;
      }
      goto Function_2267a2e;
    case 0x1D:
      v49 = (v52 - 6) & 0xFFFF;
      if ( v52 < 0x7E && v52 >= 6 )
      {
        Function_225e234(v3, v6[3], 0);
        v36 = Function_2268aac(v3, v6[3], v49 + 236);
        Function_225df8c(v3, v36);
        if ( v49 == v6[1] )
          Function_2268ba4(v6, 128, 30, v4, 37);
        else
          Function_2268ba4(v6, 128, 31, v4, 37);
      }
      else
      {
        Function_2262e88((int)v4, 35);
      }
      goto Function_2267a2e;
    case 0x1E:
      Function_225e234(v3, v6[3], 0);
      v37 = Function_2268aac(v3, v6[3], 51);
      Function_225df8c(v3, v37);
      Function_2268ba4(v6, 128, 10, v4, 37);
      goto Function_2267a2e;
    case 0x1F:
      Function_225e234(v3, v6[3], 0);
      v38 = Function_2268aac(v3, v6[3], 50);
      Function_225df8c(v3, v38);
      Function_2268ba4(v6, 128, 10, v4, 37);
      goto Function_2267a2e;
    case 0x20:
      Function_225e0e4(v3);
      Function_2269108(v6 + 20, v3);
      v39 = Function_2268aac(v3, v6[3], 45);
      Function_225df8c(v3, v39);
      *((ushort *)v6 + 5) = 0;
      Function_2268ba4(v6, 128, 38, v4, 36);
      ((void (__fastcall *)(int))dword_222EDC0[0])(v5);
      goto Function_2267a2e;
    case 0x21:
      Function_225e234(v3, v6[3], 0);
      v40 = Function_2268aac(v3, v6[3], 43);
      Function_225df8c(v3, v40);
      *((ushort *)v6 + 5) = 0;
      Function_2268ba4(v6, 128, 38, v4, 36);
      goto Function_2267a2e;
    case 0x22:
      v41 = Function_2268aac(v3, v6[3], 42);
      Function_225df8c(v3, v41);
      *((ushort *)v6 + 5) = 0;
      Function_2268ba4(v6, 128, 38, v4, 36);
      goto Function_2267a2e;
    case 0x23:
      Function_225e234(v3, v6[3], 0);
      v42 = Function_2268aac(v3, v6[3], 356);
      Function_225df8c(v3, v42);
      *((ushort *)v6 + 5) = 0;
      Function_2268ba4(v6, 128, 38, v4, 36);
      goto Function_2267a2e;
    case 0x24:
      Function_2268bbc(v6, v4);
      goto Function_2267a2e;
    case 0x25:
      Function_2268bd8(v6, v4, v3);
Function_2267a2e:
      Function_2268e08(v6);
      Function_2269144(v6 + 56, v5);
      result = 0;
      break;
    case 0x26:
      if ( *((ushort *)v6 + 34) == 1 )
        ((void (__fastcall *)(int, uint, uint))dword_222E3E4[71])(
          v5,
          *((ushort *)v6 + 35),
          *((uint *)v6 + 18));
      ((void (__fastcall *)(int))dword_222EC60[0])(v5);
      Function_225dfec(v3);
      ((void (__fastcall *)(int, int))dword_222E3E4[0])(v5, 1);
      v43 = Function_225def0(v3);
      v44 = v43;
      v45 = Function_225ccac(v43);
      Function_225cdec(v44, v45, 1);
      if ( *((uint *)v6 + 4) )
      {
        ((void (*)(void))Function_225d030[0])();
        v46 = Function_225cd60(*((uint **)v6 + 4), 4);
        Function_2262eec(v54, v46, 1);
        Function_225e3d0(v3);
      }
      Function_2268ba0(v6);
      Function_2262e64((int)v4);
      result = 1;
      break;
    default:
      JUMPOUT(__CS__, *((short *)&off_2266F58 + v7) + 36073306);
      return result;
  }
  return result;
}

//----- (02267A44) --------------------------------------------------------
int __fastcall Function_2267a44(ushort *a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;
  uchar *v5;
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
  char v23;
  char v24;
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
  int result;
  int v36;
  int v37;
  uint v38;
  char v39;
  int v40;

  v2 = a2;
  v3 = a1;
  v4 = Function_225dee8(a2);
  v5 = (uchar *)Function_2262e80((int)v3);
  v39 = ((int (__fastcall *)(int))dword_222EE30[0])(v4);
  v38 = ((int (__fastcall *)(int))dword_222EE3C[0])(v4);
  if ( ((int (__fastcall *)(int))dword_222EE68[0])(v4) && v5 && *((ushort *)v5 + 5) == 1 )
  {
    Function_2262e88((int)v3, 26);
    Function_225dfcc(v2);
    *((ushort *)v5 + 5) = 0;
  }
  if ( v5 )
  {
    v37 = ((int (__fastcall *)(int))dword_222E3BC[0])(v4);
    v36 = ((int (__fastcall *)(int, uint))dword_222E374[0])(v4, v5[3]);
  }
  if ( Function_2262e84((int)v3) && *((ushort *)v5 + 5) == 1 && !v36 )
  {
    Function_2262e88((int)v3, 26);
    Function_225dfcc(v2);
    *((ushort *)v5 + 5) = 0;
  }
  switch ( (uchar)Function_2262e84((int)v3) )
  {
    case 0u:
      v5 = (uchar *)Function_2262e3c(v3, 0x50u);
      *((ushort *)v5 + 34) = 0;
      *((ushort *)v5 + 35) = 0;
      *((uint *)v5 + 18) = 0;
      v40 = ((int (__fastcall *)(int))dword_222EE1C[0])(v4);
      v6 = Function_2268b50(v5, v4, v40);
      Function_2005748(0x5E4u);
      ((void (__fastcall *)(int, int))dword_222E3E4[0])(v4, 9);
      if ( v6 == 1 )
      {
        Function_225e328(v2, v40, 0);
        ((void (__fastcall *)(int, int))dword_222EEE4[0])(v4, v40);
        Function_2262e88((int)v3, 1);
      }
      else
      {
        Function_2262e88((int)v3, 26);
      }
      goto LABEL_88;
    case 1u:
      if ( ((int (__fastcall *)(int))dword_222EEAC[0])(v4) )
      {
        Function_2268bf4(v5, v4, v2, v5[5], v36, v37);
        Function_2268ba4(v5, 128, 2, v3, 30);
      }
      goto LABEL_88;
    case 2u:
      ((void (__fastcall *)(int, uint))dword_222EEF4[0])(v4, v5[3]);
      ((void (__fastcall *)(int))dword_222EF94[35])(v4);
      ((void (__fastcall *)(int, int))dword_222F040[0])(v4, 7);
      Function_2268bf4(v5, v4, v2, v5[4], v37, v36);
      Function_2268ba4(v5, 128, 3, v3, 30);
      goto LABEL_88;
    case 3u:
      switch ( v39 )
      {
        case 2:
          if ( !Function_225dfdc(v2) )
            Function_225dfbc(v2);
          Function_2268d70(v5, v2);
          break;
        case 3:
          Function_225dfcc(v2);
          ((void (__fastcall *)(int, uint))dword_222ECD4[0])(v4, 0);
          if ( ((int (__fastcall *)(int))dword_222EE24[0])(v4) )
            Function_2262e88((int)v3, 4);
          else
            Function_2262e88((int)v3, 6);
          break;
        default:
          Function_2262e88((int)v3, 26);
          Function_225dfcc(v2);
          break;
      }
      goto LABEL_88;
    case 4u:
      if ( Function_2268cc8(v5, v4, v2) == 1 )
        Function_2268ba4(v5, 128, 5, v3, 30);
      else
        Function_2262e88((int)v3, 5);
      goto LABEL_88;
    case 5u:
      Function_225e234(v2, v5[3], 0);
      v7 = Function_2268aac(v2, v5[3], 40);
      Function_225df8c(v2, v7);
      Function_2268ba4(v5, 128, 7, v3, 30);
      goto LABEL_88;
    case 6u:
      Function_225e234(v2, v5[3], 0);
      Function_225e234(v2, *((ushort *)v5 + 4), 1);
      v8 = Function_2268af8(v2, v5[3], *((ushort *)v5 + 4));
      Function_225df8c(v2, v8);
      Function_2268ba4(v5, 128, 7, v3, 30);
      goto LABEL_88;
    case 7u:
      Function_225e234(v2, v5[3], 0);
      v9 = Function_2268aac(v2, v5[3], 47);
      Function_225df8c(v2, v9);
      Function_2268ba4(v5, 128, 9, v3, 30);
      goto LABEL_88;
    case 8u:
      Function_225e234(v2, v5[3], 0);
      v10 = Function_2268aac(v2, v5[3], 53);
      Function_225df8c(v2, v10);
      Function_2268ba4(v5, 128, 9, v3, 30);
      goto LABEL_88;
    case 9u:
      switch ( v39 )
      {
        case 0:
          Function_2262e88((int)v3, 27);
          Function_225dfcc(v2);
          break;
        case 2:
          if ( !Function_225dfdc(v2) )
            Function_225dfbc(v2);
          Function_2268d70(v5, v2);
          break;
        case 3:
          switch ( v38 )
          {
            case 3u:
              Function_2262e88((int)v3, 10);
              ((void (__fastcall *)(int))dword_222EEAC[3])(v4);
              *((uint *)v5 + 19) = 1;
              Function_2268e20(v5, v36);
              break;
            case 4u:
              Function_2262e88((int)v3, 14);
              ((void (__fastcall *)(int))dword_222EEAC[3])(v4);
              *((uint *)v5 + 19) = 1;
              Function_2268e20(v5, v36);
              break;
            case 5u:
              ((void (__fastcall *)(int, int))dword_222ECD4[0])(v4, 1);
              Function_2262e88((int)v3, 15);
              break;
            default:
              Function_2262e88((int)v3, 26);
              Function_225dfcc(v2);
              break;
          }
          Function_225dfcc(v2);
          break;
        default:
          Function_2262e88((int)v3, 26);
          Function_225dfcc(v2);
          break;
      }
      goto LABEL_88;
    case 0xAu:
      Function_225e234(v2, v5[3], 0);
      Function_2268d38(v5, v4, v2, 1, 1);
      v11 = Function_2268aac(v2, v5[3], 511);
      Function_225df8c(v2, v11);
      Function_2268ba4(v5, 128, 11, v3, 30);
      goto LABEL_88;
    case 0xBu:
      Function_225e234(v2, v5[3], 0);
      Function_2268d38(v5, v4, v2, 1, 1);
      v12 = Function_2268aac(v2, v5[3], 512);
      Function_225df8c(v2, v12);
      Function_2268ba4(v5, 128, 12, v3, 30);
      goto LABEL_88;
    case 0xCu:
      Function_225e234(v2, v5[3], 0);
      Function_2268d38(v5, v4, v2, 1, 1);
      v13 = Function_2268aac(v2, v5[3], 513);
      Function_225df8c(v2, v13);
      Function_2268ba4(v5, 128, 13, v3, 30);
      goto LABEL_88;
    case 0xDu:
      Function_2005748(0x5A8u);
      Function_225e234(v2, v5[3], 0);
      v14 = Function_2268aac(v2, v5[3], 514);
      Function_225df8c(v2, v14);
      Function_2268ba4(v5, 128, 8, v3, 30);
      ((void (__fastcall *)(int, int))dword_222ECD4[0])(v4, 2);
      v15 = ((int (__fastcall *)(int))dword_222E3BC[0])(v4);
      v16 = ((int (__fastcall *)(int))dword_222E8C4)(v15);
      Function_225e378(v2, v16);
      goto LABEL_88;
    case 0xEu:
      Function_225e234(v2, v5[3], 0);
      Function_2268d38(v5, v4, v2, 1, 1);
      v17 = Function_2268aac(v2, v5[3], 507);
      Function_225df8c(v2, v17);
      Function_2268ba4(v5, 128, 27, v3, 30);
      ((void (__fastcall *)(int, int))dword_222ECD4[0])(v4, 2);
      goto LABEL_88;
    case 0xFu:
      Function_225e234(v2, v5[3], 0);
      v18 = Function_2268aac(v2, v5[3], 687);
      Function_225df8c(v2, v18);
      Function_2268ba4(v5, 128, 16, v3, 30);
      goto LABEL_88;
    case 0x10u:
      switch ( v39 )
      {
        case 2:
          if ( !Function_225dfdc(v2) )
            Function_225dfbc(v2);
          Function_2268d70(v5, v2);
          break;
        case 3:
          Function_2262e88((int)v3, 17);
          Function_225dfcc(v2);
          ((void (__fastcall *)(int))dword_222EEAC[3])(v4);
          *((uint *)v5 + 19) = 1;
          break;
        default:
          Function_2262e88((int)v3, 26);
          Function_225dfcc(v2);
          break;
      }
      goto LABEL_88;
    case 0x11u:
      if ( v38 >= 6 && v38 < 0x7E )
      {
        v5[2] = v38 - 6;
        *v5 = v5[2] >> 2;
        Function_225e234(v2, v5[3], 0);
        v19 = Function_2268aac(v2, v5[3], *v5 + 55);
        Function_225df8c(v2, v19);
        Function_2268ba4(v5, 128, 18, v3, 30);
      }
      else
      {
        Function_2262e88((int)v3, 26);
      }
      goto LABEL_88;
    case 0x12u:
      Function_225e234(v2, v5[3], 0);
      v20 = Function_2268aac(v2, v5[3], *v5 + 85);
      Function_225df8c(v2, v20);
      Function_2268ba4(v5, 128, 19, v3, 30);
      goto LABEL_88;
    case 0x13u:
      Function_225e234(v2, v5[3], 0);
      v21 = Function_2268aac(v2, v5[3], v5[2] + 236);
      Function_225df8c(v2, v21);
      Function_2268ba4(v5, 128, 20, v3, 30);
      goto LABEL_88;
    case 0x14u:
      Function_225e234(v2, v5[3], 0);
      v22 = Function_2268aac(v2, v5[3], *v5 + 477);
      Function_225df8c(v2, v22);
      Function_2268ba4(v5, 128, 21, v3, 30);
      goto LABEL_88;
    case 0x15u:
      Function_2268e44(v5 + 20, v2, 5, 4 * *v5 + 115, 2);
      Function_225e074(v2, (int)(v5 + 20), 0, 0);
      Function_2268db8(v5);
      Function_2262e88((int)v3, 22);
      goto LABEL_88;
    case 0x16u:
      v23 = Function_225e0d4(v2);
      switch ( v24 )
      {
        case 0:
        case 1:
        case 2:
        case 3:
          v5[1] = v23 + 4 * *v5;
          ((void (__fastcall *)(int, int))dword_222ECD4[0])(v4, (v5[1] + 6) & 0xFFFF);
          Function_2262e88((int)v3, 23);
          v25 = 1;
          break;
        case 4:
          v5[1] = 126;
          ((void (__fastcall *)(int, uint))dword_222ECD4[0])(v4, v5[1]);
          Function_2262e88((int)v3, 28);
          v25 = 1;
          break;
        default:
          Function_2268dcc(v5, v2);
          v25 = 0;
          break;
      }
      if ( v25 )
      {
        Function_225e0e4(v2);
        Function_2269108(v5 + 20, v2);
        Function_2268dc4(v5);
        Function_2268e20(v5, v36);
      }
      goto LABEL_88;
    case 0x17u:
      Function_225e234(v2, v5[3], 0);
      v26 = Function_2268aac(v2, v5[3], v5[1] + 357);
      Function_225df8c(v2, v26);
      if ( v5[2] == v5[1] )
        Function_2268ba4(v5, 128, 24, v3, 30);
      else
        Function_2268ba4(v5, 128, 25, v3, 30);
      goto LABEL_88;
    case 0x18u:
      Function_225e234(v2, v5[3], 0);
      v27 = Function_2268aac(v2, v5[3], 51);
      Function_225df8c(v2, v27);
      Function_2268ba4(v5, 128, 25, v3, 30);
      goto LABEL_88;
    case 0x19u:
      Function_225e234(v2, v5[3], 0);
      v28 = Function_2268aac(v2, v5[3], 52);
      Function_225df8c(v2, v28);
      Function_2268ba4(v5, 128, 8, v3, 30);
      goto LABEL_88;
    case 0x1Au:
      Function_225e0e4(v2);
      Function_2269108(v5 + 20, v2);
      v29 = Function_2268aac(v2, v5[3], 45);
      Function_225df8c(v2, v29);
      *((ushort *)v5 + 5) = 0;
      Function_2268ba4(v5, 128, 31, v3, 29);
      ((void (__fastcall *)(int))dword_222EDC0[0])(v4);
      goto LABEL_88;
    case 0x1Bu:
      Function_225e234(v2, v5[3], 0);
      v30 = Function_2268aac(v2, v5[3], 43);
      Function_225df8c(v2, v30);
      *((ushort *)v5 + 5) = 0;
      Function_2268ba4(v5, 128, 31, v3, 29);
      goto LABEL_88;
    case 0x1Cu:
      Function_225e234(v2, v5[3], 0);
      v31 = Function_2268aac(v2, v5[3], 49);
      Function_225df8c(v2, v31);
      Function_2268ba4(v5, 128, 27, v3, 30);
      goto LABEL_88;
    case 0x1Du:
      Function_2268bbc(v5, v3);
      goto LABEL_88;
    case 0x1Eu:
      Function_2268bd8(v5, v3, v2);
      goto LABEL_88;
    case 0x1Fu:
      if ( *((ushort *)v5 + 34) == 1 )
        ((void (__fastcall *)(int, uint, uint))dword_222E3E4[71])(
          v4,
          *((ushort *)v5 + 35),
          *((uint *)v5 + 18));
      if ( !*((uint *)v5 + 19) )
        ((void (__fastcall *)(int, uint))dword_222EEAC[10])(v4, v5[3]);
      ((void (__fastcall *)(int))dword_222EC60[0])(v4);
      Function_225dfec(v2);
      Function_2268ba0(v5);
      Function_2262e64((int)v3);
      ((void (__fastcall *)(int, int))dword_222E3E4[0])(v4, 1);
      v32 = Function_225def0(v2);
      v33 = v32;
      v34 = Function_225ccac(v32);
      Function_225cdec(v33, v34, 1);
      Function_225e3d0(v2);
      result = 1;
      break;
    default:
LABEL_88:
      Function_2268e08(v5);
      result = 0;
      break;
  }
  return result;
}

//----- (02268390) --------------------------------------------------------
int __fastcall Function_2268390(int a1, int a2)
{
  int v2;
  ushort *v3;
  int *v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13;
  int v14;
  int v15;
  int v16;
  char v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  char v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int result;

  v2 = a2;
  v3 = (ushort *)a1;
  v4 = (int *)Function_2262e80(a1);
  v5 = Function_225dee8(v2);
  v6 = Function_2262e84((int)v3);
  if ( v6 <= 0x18 )
    JUMPOUT(__CS__, *((short *)&off_22683BE + v6) + 36078528);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_2262e3c(v3, 0x28u);
      Function_2005748(0x5DCu);
      if ( ((int (__fastcall *)(int))dword_222E12C[0])(v5) == 1 )
      {
        Function_2262e88((int)v3, 2);
      }
      else if ( ((int (__fastcall *)(int))dword_222E170[0])(v5) == 1 )
      {
        Function_2262e88((int)v3, 1);
      }
      else
      {
        Function_2262e88((int)v3, 3);
      }
      goto LABEL_66;
    case 1:
      v7 = Function_225e20c(v2, 1, 78);
      Function_225df8c(v2, v7);
      *v4 = 24;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 2:
      v8 = Function_225e20c(v2, 1, 3);
      Function_225df8c(v2, v8);
      *v4 = 24;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 3:
      v9 = Function_225e20c(v2, 1, 15);
      Function_225df8c(v2, v9);
      *v4 = 4;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 4:
      v10 = Function_225e20c(v2, 1, 16);
      Function_225df8c(v2, v10);
      *v4 = 5;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 5:
      Function_2268fb8(v4 + 1, v2);
      Function_225e0a4(v2, (int)(v4 + 1), 0, 0, 0x10u, 1u, 0xFu);
      Function_2262e88((int)v3, 6);
      goto LABEL_66;
    case 6:
      v11 = 0;
      v12 = Function_225e0d4(v2);
      switch ( v13 )
      {
        case 0:
          Function_2262e88((int)v3, 7);
          v11 = 1;
          break;
        case 1:
          Function_2262e88((int)v3, 8);
          v11 = 1;
          break;
        case 2:
          Function_2262e88((int)v3, 13);
          v11 = 1;
          break;
        case 3:
          Function_2262e88((int)v3, 14);
          v11 = 1;
          break;
        case 4:
          Function_2262e88((int)v3, 15);
          v11 = 1;
          break;
        case 5:
          Function_2262e88((int)v3, 21);
          v11 = 1;
          break;
        case 6:
          Function_2262e88((int)v3, 16);
          v11 = 1;
          break;
        case 7:
          goto LABEL_25;
        default:
          if ( v12 == -2 )
          {
            Function_2005748(0x5DCu);
LABEL_25:
            Function_2262e88((int)v3, 22);
            v11 = 1;
          }
          break;
      }
      if ( v11 == 1 )
      {
        Function_225e0e4(v2);
        Function_2269108(v4 + 1, v2);
      }
      goto LABEL_66;
    case 7:
      v14 = Function_225e20c(v2, 1, 23);
      Function_225df8c(v2, v14);
      *v4 = 4;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 8:
      Function_2269090(v4 + 1, v2);
      Function_225e074(v2, (int)(v4 + 1), 0, 0);
      Function_2262e88((int)v3, 9);
      goto LABEL_66;
    case 9:
      v15 = 0;
      v16 = Function_225e0d4(v2);
      switch ( v17 )
      {
        case 0:
          Function_2262e88((int)v3, 10);
          v15 = 1;
          break;
        case 1:
          Function_2262e88((int)v3, 11);
          v15 = 1;
          break;
        case 2:
          Function_2262e88((int)v3, 12);
          v15 = 1;
          break;
        case 3:
          goto LABEL_37;
        default:
          if ( v16 == -2 )
          {
            Function_2005748(0x5DCu);
LABEL_37:
            Function_2262e88((int)v3, 4);
            v15 = 1;
          }
          break;
      }
      if ( v15 == 1 )
      {
        Function_225e0e4(v2);
        Function_2269108(v4 + 1, v2);
      }
      goto LABEL_66;
    case 0xA:
      Function_225e27c(v2);
      v18 = Function_225e20c(v2, 1, 24);
      Function_225df8c(v2, v18);
      *v4 = 4;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 0xB:
      Function_225e27c(v2);
      v19 = Function_225e20c(v2, 1, 25);
      Function_225df8c(v2, v19);
      *v4 = 4;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 0xC:
      Function_225e27c(v2);
      v20 = Function_225e20c(v2, 1, 26);
      Function_225df8c(v2, v20);
      *v4 = 4;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 0xD:
      v21 = Function_225e20c(v2, 1, 18);
      Function_225df8c(v2, v21);
      *v4 = 4;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 0xE:
      v22 = Function_225e20c(v2, 1, 19);
      Function_225df8c(v2, v22);
      *v4 = 4;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 0xF:
      v23 = Function_225e20c(v2, 1, 20);
      Function_225df8c(v2, v23);
      *v4 = 4;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 0x10:
      Function_2269018(v4 + 1, v2);
      Function_225e074(v2, (int)(v4 + 1), 0, 0);
      Function_2262e88((int)v3, 17);
      goto LABEL_66;
    case 0x11:
      v24 = 0;
      v25 = Function_225e0d4(v2);
      switch ( v26 )
      {
        case 0:
          Function_2262e88((int)v3, 18);
          v24 = 1;
          break;
        case 1:
          Function_2262e88((int)v3, 19);
          v24 = 1;
          break;
        case 2:
          Function_2262e88((int)v3, 20);
          v24 = 1;
          break;
        case 3:
          goto LABEL_55;
        default:
          if ( v25 == -2 )
          {
            Function_2005748(0x5DCu);
LABEL_55:
            Function_2262e88((int)v3, 4);
            v24 = 1;
          }
          break;
      }
      if ( v24 == 1 )
      {
        Function_225e0e4(v2);
        Function_2269108(v4 + 1, v2);
      }
      goto LABEL_66;
    case 0x12:
      v27 = Function_225e20c(v2, 1, 27);
      Function_225df8c(v2, v27);
      *v4 = 4;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 0x13:
      v28 = Function_225e20c(v2, 1, 28);
      Function_225df8c(v2, v28);
      *v4 = 4;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 0x14:
      v29 = Function_225e20c(v2, 1, 29);
      Function_225df8c(v2, v29);
      *v4 = 4;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 0x15:
      v30 = Function_225e20c(v2, 1, 30);
      Function_225df8c(v2, v30);
      *v4 = 4;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 0x16:
      v31 = Function_225e20c(v2, 1, 22);
      Function_225df8c(v2, v31);
      *v4 = 24;
      Function_2262e88((int)v3, 23);
      goto LABEL_66;
    case 0x17:
      if ( Function_225dfac(v2) )
        Function_2262e88((int)v3, *v4);
      goto LABEL_66;
    case 0x18:
      Function_2262e64((int)v3);
      Function_225dfec(v2);
      v32 = Function_225def0(v2);
      v33 = v32;
      v34 = Function_225ccac(v32);
      Function_225cdec(v33, v34, 1);
      result = 1;
      break;
    default:
LABEL_66:
      result = 0;
      break;
  }
  return result;
}

//----- (0226889C) --------------------------------------------------------
int __fastcall Function_226889c(int a1, int a2)
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

  v2 = a2;
  v3 = a1;
  Function_2262e80(a1);
  v4 = Function_225dee8(v2);
  v5 = Function_2262e84(v3);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( Function_225dfac(v2) )
        Function_2262e88(v3, 2);
    }
    else if ( v5 == 2 )
    {
      Function_225dfec(v2);
      v9 = Function_225def0(v2);
      v10 = v9;
      v11 = Function_225ccac(v9);
      Function_225cdec(v10, v11, 1);
      return 1;
    }
  }
  else
  {
    Function_2005748(0x5DCu);
    if ( ((int (__fastcall *)(int))dword_222E12C[0])(v4) )
    {
      v7 = Function_225e20c(v2, 1, 3);
      Function_225df8c(v2, v7);
      Function_2262e88(v3, 1);
    }
    else if ( ((int (__fastcall *)(int))dword_222E170[0])(v4) == 1 )
    {
      v6 = Function_225e20c(v2, 1, 78);
      Function_225df8c(v2, v6);
      Function_2262e88(v3, 1);
    }
    else
    {
      switch ( ((uchar (__fastcall *)(int))dword_222F040[7])(v4) )
      {
        case 0u:
          Function_225e27c(v2);
          v8 = Function_225e20c(v2, 1, 73);
          break;
        case 1u:
          Function_225e27c(v2);
          v8 = Function_225e20c(v2, 1, 73);
          break;
        case 2u:
          Function_225e27c(v2);
          v8 = Function_225e20c(v2, 1, 73);
          break;
        case 3u:
          Function_225e27c(v2);
          v8 = Function_225e20c(v2, 1, 77);
          break;
        case 4u:
          Function_225e27c(v2);
          v8 = Function_225e20c(v2, 1, 77);
          break;
        case 5u:
          v8 = Function_225e20c(v2, 1, 74);
          break;
        case 6u:
          v8 = Function_225e20c(v2, 1, 79);
          break;
        case 7u:
          v8 = Function_225e20c(v2, 1, 75);
          break;
        default:
          v8 = Function_225e20c(v2, 1, 76);
          break;
      }
      Function_225df8c(v2, v8);
      Function_2262e88(v3, 1);
    }
  }
  return 0;
}

//----- (02268A3C) --------------------------------------------------------
int Function_2268a3c()
{
  int result;

  switch ( (uchar)((int (*)(void))dword_222E7C4)() )
  {
    case 0u:
    case 1u:
    case 2u:
    case 3u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
      result = 2;
      break;
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
      result = 0;
      break;
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
      result = 1;
      break;
    default:
      ErrorHandler();
      result = 1;
      break;
  }
  return result;
}

//----- (02268AAC) --------------------------------------------------------
int __fastcall Function_2268aac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  short *v7;
  uint v8;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_225dee8(a1);
  if ( ((int (__fastcall *)(int, int))dword_222E924[0])(v6, v3) == 1 )
  {
    v7 = &word_226DD5C;
    v8 = 0;
    while ( v5 != (ushort)*v7 )
    {
      ++v8;
      v7 += 2;
      if ( v8 >= 0x163 )
        return Function_225e20c(v4, 3, v5);
    }
    v5 = (ushort)word_226DD5E[2 * v8];
  }
  return Function_225e20c(v4, 3, v5);
}

//----- (02268AF8) --------------------------------------------------------
int __fastcall Function_2268af8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a3;
  v5 = Function_225dee8(a1);
  v6 = ((int (*)(void))dword_222E924[0])();
  v7 = ((int (__fastcall *)(int, int))dword_222E924[0])(v5, v4);
  v8 = 41;
  if ( v6 != 1 || v7 != 1 )
  {
    if ( v6 != 1 || v7 )
    {
      if ( !v6 && v7 == 1 )
        v8 = 681;
    }
    else
    {
      v8 = 550;
    }
  }
  else
  {
    v8 = 682;
  }
  return Function_225e20c(v3, 3, v8);
}

//----- (02268B50) --------------------------------------------------------
int __fastcall Function_2268b50(int a1, int a2, int a3)
{
  int v3;
  char v4;
  int v5;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( a3 == -1 )
    ErrorHandler();
  *(uchar *)(v3 + 3) = v4;
  *(ushort *)(v3 + 8) = ((int (__fastcall *)(int))dword_222E338[0])(v5);
  *(ushort *)(v3 + 10) = 1;
  ((void (__fastcall *)(int))dword_222E3BC[0])(v5);
  if ( !((int (__fastcall *)(int, uint))dword_222E374[0])(v5, *(uchar *)(v3 + 3)) )
    return 0;
  *(uchar *)(v3 + 4) = Function_2268a3c();
  *(uchar *)(v3 + 5) = Function_2268a3c();
  return 1;
}

//----- (02268BA0) --------------------------------------------------------
void Function_2268ba0()
{
  ;
}

//----- (02268BA4) --------------------------------------------------------
int __fastcall Function_2268ba4(int a1, char a2, char a3, int a4, uchar a5)
{
  *(uchar *)(a1 + 6) = a2;
  *(uchar *)(a1 + 7) = a3;
  return Function_2262e88(a4, a5);
}

//----- (02268BBC) --------------------------------------------------------
int __fastcall Function_2268bbc(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = *(uchar *)(a1 + 6);
  if ( !v3 )
    return Function_2262e88(a2, *(uchar *)(v2 + 7));
  result = v3 - 1;
  *(uchar *)(v2 + 6) = result;
  return result;
}

//----- (02268BD8) --------------------------------------------------------
int __fastcall Function_2268bd8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1;
  v4 = a2;
  result = Function_225dfac(a3);
  if ( result )
    result = Function_2262e88(v4, *(uchar *)(v3 + 7));
  return result;
}

//----- (02268BF4) --------------------------------------------------------
int __fastcall Function_2268bf4(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v6 = a3;
  v7 = a4;
  Function_2268c44(a3, 0, a4, a5);
  Function_2268c44(v6, 1, v7, a6);
  v8 = ((int (__fastcall *)(int))dword_222E80C[0])(a5);
  v9 = ((int (__fastcall *)(int))dword_222E80C[0])(a6);
  v10 = Function_225e20c(v6, 3, *((ushort *)&dword_226DCDC[4 * v8] + v9));
  return Function_225df8c(v6, v10);
}

//----- (02268C44) --------------------------------------------------------
ushort *__fastcall Function_2268c44(int a1, uint a2, uint a3, int a4)
{
  int v4;
  uint v5;
  uint v6;
  ushort *result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  switch ( ((uchar (__fastcall *)(int))dword_222E80C[0])(a4) )
  {
    case 1u:
      result = Function_225e2ac(v4, v5, v6);
      break;
    case 2u:
      result = Function_225e2bc(v4, v5, v6);
      break;
    case 3u:
      result = Function_225e2cc(v4, v5, v6);
      break;
    case 4u:
      result = Function_225e2dc(v4, v5, v6);
      break;
    case 5u:
      result = Function_225e2ec(v4, v5, v6);
      break;
    case 7u:
      result = Function_225e2fc(v4, v5, v6);
      break;
    default:
      result = Function_225e2bc(v4, v5, v6);
      break;
  }
  return result;
}

//----- (02268CC8) --------------------------------------------------------
int __fastcall Function_2268cc8(uchar *a1, int a2, int a3)
{
  int v3;
  int v4;
  uchar *v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = ((int (__fastcall *)(int))dword_222E3BC[0])(a2);
  v8 = ((int (__fastcall *)(int, uint))dword_222E374[0])(v4, v5[3]);
  if ( !((int (__fastcall *)(int))dword_222E824[0])(v7) )
    return 0;
  if ( !((int (__fastcall *)(int))dword_222E824[0])(v8) )
    return 0;
  v10 = v5[5];
  if ( v5[4] == v10 )
    return 0;
  if ( v5[5] )
  {
    if ( v10 == 1 )
    {
      v3 = 37;
    }
    else if ( v10 == 2 )
    {
      v3 = 38;
    }
  }
  else
  {
    v3 = 39;
  }
  v11 = Function_225e20c(v6, 3, v3);
  Function_225df8c(v6, v11);
  return 1;
}

//----- (02268D38) --------------------------------------------------------
int __fastcall Function_2268d38(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;

  v5 = a2;
  v6 = a1;
  v7 = a3;
  v10 = ((int (__fastcall *)(int))dword_222E3BC[0])(a2);
  v8 = ((int (__fastcall *)(int, uint))dword_222E374[0])(v5, *(uchar *)(v6 + 3));
  if ( a5 )
    ((void (__fastcall *)(int))dword_222E8C4)(v10);
  else
    ((void (__fastcall *)(int))dword_222E8C4)(v8);
  return Function_225e29c(v7);
}

//----- (02268D70) --------------------------------------------------------
int __fastcall Function_2268d70(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = Function_225dee8(a2);
  result = ((int (__fastcall *)(int))dword_222EE90[0])(v4);
  if ( result == 450 )
  {
    Function_225dfcc(v2);
    Function_225e234(v2, *(uchar *)(v3 + 3), 0);
    v6 = Function_2268aac(v2, *(uchar *)(v3 + 3), 684);
    Function_225df8c(v2, v6);
    result = Function_225dfbc(v2);
  }
  return result;
}

//----- (02268DB8) --------------------------------------------------------
int __fastcall Function_2268db8(int result)
{
  *(ushort *)(result + 14) = 0;
  *(uchar *)(result + 13) = 1;
  return result;
}

//----- (02268DC4) --------------------------------------------------------
int __fastcall Function_2268dc4(int result)
{
  *(ushort *)(result + 14) = 0;
  *(uchar *)(result + 13) = 0;
  return result;
}

//----- (02268DCC) --------------------------------------------------------
int __fastcall Function_2268dcc(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  v2 = a1;
  result = *(uchar *)(a1 + 13);
  v4 = a2;
  if ( result == 1 )
  {
    result = 450;
    if ( *(ushort *)(v2 + 14) == 450 )
    {
      Function_225e234(a2, *(uchar *)(v2 + 3), 0);
      v5 = Function_2268aac(v4, *(uchar *)(v2 + 3), 683);
      result = Function_225df8c(v4, v5);
    }
  }
  return result;
}

//----- (02268E08) --------------------------------------------------------
int __fastcall Function_2268e08(int result)
{
  int v1;

  if ( *(uchar *)(result + 13) == 1 )
  {
    v1 = *(short *)(result + 14);
    if ( v1 <= 900 )
      *(ushort *)(result + 14) = v1 + 1;
  }
  return result;
}

//----- (02268E20) --------------------------------------------------------
int __fastcall Function_2268e20(int a1, int a2)
{
  int v2;
  int v3;
  short v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = ((int (__fastcall *)(int))dword_222E7A0[0])(a2);
  *(ushort *)(v3 + 68) = 1;
  *(ushort *)(v3 + 70) = v4;
  result = ((int (__fastcall *)(int))dword_222E798[0])(v2);
  *(uint *)(v3 + 72) = result;
  return result;
}

//----- (02268E44) --------------------------------------------------------
int __fastcall Function_2268e44(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  uint v6;
  uint v7;
  uint *v8;
  uint *v9;
  uint *v10;
  uint v11;
  int result;
  int v13;
  int v14;

  v5 = a2;
  v6 = a3;
  v13 = a1;
  v14 = a4;
  Function_225e00c(a2, a3);
  v7 = 0;
  *(uint *)(v13 + 32) = v6;
  if ( v6 )
  {
    do
    {
      if ( a5 && v7 == v6 - 1 )
      {
        if ( a5 == 1 )
          Function_225e20c(v5, 3, 517);
        else
          Function_225e20c(v5, 3, 235);
      }
      else
      {
        Function_225e20c(v5, 3, v14 + v7);
      }
      Function_225e044(v5);
      ++v7;
    }
    while ( v7 < v6 );
  }
  *(uint *)v13 = *(uint *)"";
  *(uint *)(v13 + 4) = 0;
  v8 = (uint *)(v13 + 8);
  *v8 = 0;
  v8[1] = 0;
  v9 = (uint *)(v13 + 16);
  *v9 = 393216;
  v9[1] = 268437504;
  v10 = (uint *)(v13 + 24);
  *v10 = 47;
  v10[1] = 0;
  *(ushort *)(v13 + 16) = *(uint *)(v13 + 32);
  v11 = *(uint *)(v13 + 32);
  if ( *(ushort *)(v13 + 18) > v11 )
    *(ushort *)(v13 + 18) = v11;
  result = Function_225e054(v5);
  *(uint *)v13 = result;
  return result;
}

//----- (02268EEC) --------------------------------------------------------
int __fastcall Function_2268eec(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  uint *v13;
  uint *v14;
  uint v15;
  int result;
  int v17;
  uint v18;

  v17 = a1;
  v6 = a2;
  v18 = a4;
  v7 = a3;
  Function_225e020(a2, a4, a3);
  v8 = 0;
  *(uint *)(v17 + 32) = v18;
  if ( v18 )
  {
    do
    {
      if ( a6 && v8 == v18 - 1 )
      {
        if ( a6 == 1 )
          Function_225e20c(v6, 3, 517);
        else
          Function_225e20c(v6, 3, 235);
      }
      else
      {
        do
        {
          v9 = Function_201d35c();
          u32_div_f(v9, v7);
          v11 = v10;
        }
        while ( Function_225e064(v6) == 1 );
        Function_225e20c(v6, 3, a5 + v11);
      }
      Function_225e044(v6);
      ++v8;
    }
    while ( v8 < v18 );
  }
  *(uint *)v17 = *(uint *)"";
  *(uint *)(v17 + 4) = 0;
  v12 = (uint *)(v17 + 8);
  *v12 = 0;
  v12[1] = 0;
  v13 = (uint *)(v17 + 16);
  *v13 = 393216;
  v13[1] = 268437504;
  v14 = (uint *)(v17 + 24);
  *v14 = 47;
  v14[1] = 0;
  *(ushort *)(v17 + 16) = *(uint *)(v17 + 32);
  v15 = *(uint *)(v17 + 32);
  if ( *(ushort *)(v17 + 18) > v15 )
    *(ushort *)(v17 + 18) = v15;
  result = Function_225e054(v6);
  *(uint *)v17 = result;
  return result;
}

//----- (02268FB8) --------------------------------------------------------
int __fastcall Function_2268fb8(int a1, int a2)
{
  int v2;
  int v3;
  char *v4;
  int v5;
  uint *v6;
  uint *v7;
  uint *v8;
  int result;

  v2 = a2;
  v3 = a1;
  Function_225e00c(a2, 8);
  v4 = &byte_226DCB4;
  *(uint *)(v3 + 32) = 8;
  v5 = 0;
  do
  {
    Function_225e20c(v2, 1, (uchar)*v4);
    Function_225e044(v2);
    ++v5;
    ++v4;
  }
  while ( v5 < 8 );
  *(uint *)v3 = *(uint *)"";
  *(uint *)(v3 + 4) = 0;
  v6 = (uint *)(v3 + 8);
  *v6 = 0;
  v6[1] = 0;
  v7 = (uint *)(v3 + 16);
  *v7 = 393216;
  v7[1] = 268437504;
  v8 = (uint *)(v3 + 24);
  *v8 = 47;
  v8[1] = 0;
  *(ushort *)(v3 + 16) = *(uint *)(v3 + 32);
  *(ushort *)(v3 + 18) = *(uint *)(v3 + 32);
  result = Function_225e054(v2);
  *(uint *)v3 = result;
  return result;
}

//----- (02269018) --------------------------------------------------------
int __fastcall Function_2269018(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *v5;
  uint *v6;
  uint *v7;
  int result;

  v2 = a2;
  v3 = a1;
  Function_225e00c(a2, 4);
  v4 = 0;
  *(uint *)(v3 + 32) = 4;
  do
  {
    Function_225e28c(v2);
    Function_225e20c(v2, 1, 39);
    Function_225e044(v2);
    ++v4;
  }
  while ( v4 < 3 );
  Function_225e20c(v2, 1, 37);
  Function_225e044(v2);
  *(uint *)v3 = *(uint *)"";
  *(uint *)(v3 + 4) = 0;
  v5 = (uint *)(v3 + 8);
  *v5 = 0;
  v5[1] = 0;
  v6 = (uint *)(v3 + 16);
  *v6 = 393216;
  v6[1] = 268437504;
  v7 = (uint *)(v3 + 24);
  *v7 = 47;
  v7[1] = 0;
  *(ushort *)(v3 + 16) = *(uint *)(v3 + 32);
  *(ushort *)(v3 + 18) = *(uint *)(v3 + 32);
  result = Function_225e054(v2);
  *(uint *)v3 = result;
  return result;
}

//----- (02269090) --------------------------------------------------------
int __fastcall Function_2269090(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *v5;
  uint *v6;
  uint *v7;
  int result;

  v2 = a2;
  v3 = a1;
  Function_225e00c(a2, 4);
  v4 = 0;
  *(uint *)(v3 + 32) = 4;
  do
  {
    Function_225e27c(v2);
    Function_225e20c(v2, 1, 38);
    Function_225e044(v2);
    ++v4;
  }
  while ( v4 < 3 );
  Function_225e20c(v2, 1, 37);
  Function_225e044(v2);
  *(uint *)v3 = *(uint *)"";
  *(uint *)(v3 + 4) = 0;
  v5 = (uint *)(v3 + 8);
  *v5 = 0;
  v5[1] = 0;
  v6 = (uint *)(v3 + 16);
  *v6 = 393216;
  v6[1] = 268437504;
  v7 = (uint *)(v3 + 24);
  *v7 = 47;
  v7[1] = 0;
  *(ushort *)(v3 + 16) = *(uint *)(v3 + 32);
  *(ushort *)(v3 + 18) = *(uint *)(v3 + 32);
  result = Function_225e054(v2);
  *(uint *)v3 = result;
  return result;
}

//----- (02269108) --------------------------------------------------------
int __fastcall Function_2269108(int a1, int a2)
{
  return Function_225e034(a2);
}

//----- (02269114) --------------------------------------------------------
ushort *__fastcall Function_2269114(ushort *result)
{
  *result = 0;
  return result;
}

//----- (0226911C) --------------------------------------------------------
int __fastcall Function_226911c(ushort *a1, int a2, short a3, short a4)
{
  ushort *v4;
  int v5;
  short v6;
  short v7;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( *a1 )
    ErrorHandler();
  *v4 = 1;
  v4[1] = v6;
  v4[2] = v7;
  result = ((int (__fastcall *)(int))dword_222EE30[0])(v5);
  v4[3] = result;
  return result;
}

//----- (02269144) --------------------------------------------------------
int __fastcall Function_2269144(ushort *a1, int a2)
{
  ushort *v2;
  int result;
  int v4;

  v2 = a1;
  result = *a1;
  v4 = a2;
  if ( result )
  {
    result = ((int (__fastcall *)(int))dword_222EE30[0])(a2);
    *((uint *)v2 + 2) = result;
    if ( result == v2[2] )
    {
      ((void (__fastcall *)(int, uint))dword_222ECD4[0])(v4, v2[1]);
      result = 0;
      *v2 = 0;
    }
    else if ( result != v2[3] )
    {
      result = 0;
      *v2 = 0;
    }
  }
  return result;
}

//----- (02269178) --------------------------------------------------------
BOOL __fastcall Function_2269178(ushort *a1)
{
  return *a1 != 1;
}

//----- (02269188) --------------------------------------------------------
int __fastcall Function_2269188(int a1)
{
  return *(uint *)(a1 + 8) & 0xFFFF;
}

//----- (02269190) --------------------------------------------------------
int *__fastcall Function_2269190(int a1, int a2, int a3, int a4, uint a5, uint a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int *v13;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = (int *)malloc(a5, 67628);
  Call_FillMemWithValue(v10, 0, 0x1082Cu);
  *v10 = v6;
  v10[1] = v9;
  v10[2] = v8;
  v10[3] = v7;
  v13 = LoadFromNARC_8(186, a5, v11, v12);
  Function_20182cc(v10 + 16903, a6, 4);
  Function_2269540(v10, v13, a6);
  Function_22695e0(v10, v13, a6);
  Function_226965c(v10, v13, a6);
  Call_FS_CloseFile(v13);
  return v10;
}

//----- (02269204) --------------------------------------------------------
uint __fastcall Function_2269204(int a1)
{
  int v1;

  v1 = a1;
  Function_22695c4();
  Function_2269608(v1);
  Function_2269700(v1);
  return free(v1);
}

//----- (02269220) --------------------------------------------------------
int __fastcall Function_2269220(int a1)
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
    result = Function_226978c(v1, v3);
    ++v2;
    v3 += 3344;
  }
  while ( v2 < 20 );
  return result;
}

//----- (02269240) --------------------------------------------------------
int __fastcall Function_2269240(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  Function_225ccac(*(uint *)(a1 + 4));
  v2 = 0;
  v3 = v1 + 16;
  do
  {
    result = Function_22697c8(v1, v3);
    ++v2;
    v3 += 3344;
  }
  while ( v2 < 20 );
  return result;
}

//----- (02269268) --------------------------------------------------------
int __fastcall Function_2269268(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 0x14 )
    ErrorHandler();
  result = Function_225cc70(*(uint *)(v4 + 4), v3);
  if ( result )
    result = Function_2269738(v4, v4 + 16 + 3344 * v3, result, v5);
  return result;
}

//----- (02269298) --------------------------------------------------------
BOOL __fastcall Function_2269298(int a1, int a2)
{
  return Function_2269800(a1 + 16 + 3344 * a2) != 1;
}

//----- (022692B4) --------------------------------------------------------
uint *__fastcall Function_22692b4(uint *result, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  *result = a8;
  result[1] = a2;
  result[4] = a3 - a2;
  result[5] = a2;
  result[2] = a4;
  result[6] = a5 - a4;
  result[7] = a4;
  result[3] = a6;
  result[8] = a7 - a6;
  result[9] = a6;
  return result;
}

//----- (022692DC) --------------------------------------------------------
int __fastcall Function_22692dc(int *a1, int a2)
{
  int *v2;
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
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v36;
  int v37;
  int v38;

  v2 = a1;
  v3 = *a1;
  v4 = a2;
  v5 = 0;
  if ( a2 > v3 )
  {
    v4 = v3;
    v5 = 1;
  }
  v6 = v2[4];
  if ( v6 )
  {
    if ( v3 <= 0 )
    {
      v8 = fflt(v3 << 12);
      v38 = fsub(v8, 1056964608);
    }
    else
    {
      v7 = fflt(v3 << 12);
      v38 = fadd(0x3F000000u, v7);
    }
    if ( v4 <= 0 )
    {
      v11 = fflt(v4 << 12);
      v10 = fsub(v11, 1056964608);
    }
    else
    {
      v9 = fflt(v4 << 12);
      v10 = fadd(0x3F000000u, v9);
    }
    v12 = ffix(v10);
    v13 = (ll_mul(v12, v6) + 2048) >> 12;
    v14 = ffix(v38);
    v2[1] = v2[5] + FX_Div(v13, v14);
  }
  v15 = v2[6];
  if ( v15 )
  {
    v16 = *v2;
    if ( *v2 <= 0 )
    {
      v18 = fflt(v16 << 12);
      v37 = fsub(v18, 1056964608);
    }
    else
    {
      v17 = fflt(v16 << 12);
      v37 = fadd(0x3F000000u, v17);
    }
    if ( v4 <= 0 )
    {
      v21 = fflt(v4 << 12);
      v20 = fsub(v21, 1056964608);
    }
    else
    {
      v19 = fflt(v4 << 12);
      v20 = fadd(0x3F000000u, v19);
    }
    v22 = ffix(v20);
    v23 = (ll_mul(v22, v15) + 2048) >> 12;
    v24 = ffix(v37);
    v2[2] = v2[7] + FX_Div(v23, v24);
  }
  v25 = v2[8];
  if ( v25 )
  {
    v26 = *v2;
    if ( *v2 <= 0 )
    {
      v28 = fflt(v26 << 12);
      v36 = fsub(v28, 1056964608);
    }
    else
    {
      v27 = fflt(v26 << 12);
      v36 = fadd(0x3F000000u, v27);
    }
    if ( v4 <= 0 )
    {
      v31 = fflt(v4 << 12);
      v30 = fsub(v31, 1056964608);
    }
    else
    {
      v29 = fflt(v4 << 12);
      v30 = fadd(0x3F000000u, v29);
    }
    v32 = ffix(v30);
    v33 = (ll_mul(v32, v25) + 2048) >> 12;
    v34 = ffix(v36);
    v2[3] = v2[9] + FX_Div(v33, v34);
  }
  return v5;
}

//----- (02269488) --------------------------------------------------------
int __fastcall Function_2269488(uint *a1, uint *a2, uint *a3, uint *a4)
{
  int result;

  *a2 = a1[1];
  *a3 = a1[2];
  result = a1[3];
  *a4 = result;
  return result;
}

//----- (0226949C) --------------------------------------------------------
int __fastcall Function_226949c(ushort *a1, int a2, short a3, int a4)
{
  ushort *v4;
  int v5;
  long long v6;
  long long v7;
  int result;

  v4 = a1;
  *a1 = a2;
  a1[1] = a3;
  v5 = SLOWORD(Unknown_20f983c[a2 >> 4]);
  LODWORD(v6) = a4;
  *((uint *)v4 + 1) = a4;
  HIDWORD(v6) = a4 >> 31;
  v7 = ll_mul(v5, v6) + 2048;
  result = HIDWORD(v7) << 20;
  *((uint *)v4 + 2) = v7 >> 12;
  return result;
}

//----- (022694D0) --------------------------------------------------------
int __fastcall Function_22694d0(ushort *a1)
{
  ushort *v1;
  long long v2;
  int result;

  v1 = a1;
  *a1 += a1[1];
  v2 = ll_mul(SLOWORD(Unknown_20f983c[(int)*a1 >> 4]), *((int *)a1 + 1)) + 2048;
  result = HIDWORD(v2) << 20;
  *((uint *)v1 + 2) = v2 >> 12;
  return result;
}

//----- (02269508) --------------------------------------------------------
int __fastcall Function_2269508(int a1, uint *a2)
{
  int result;

  result = *(uint *)(a1 + 8);
  *a2 = result;
  return result;
}

//----- (02269510) --------------------------------------------------------
void __fastcall Function_2269510(int a1, int a2, ushort a3)
{
  int v3;
  ushort v4;
  int v5;

  v3 = *(uint *)(a2 + 8);
  v4 = a3;
  if ( v3 == Function_225ccac(*(uint *)(a1 + 4)) )
  {
    Function_2005770(v4, 5u);
  }
  else
  {
    Function_225ce70(v3);
    if ( !v5 )
      Function_2005748(v4);
  }
}

//----- (02269540) --------------------------------------------------------
uint __fastcall Function_2269540(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  int v11;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  do
  {
    v3[16724] = (int)Function_200723c(v4, v6 + 129, 0, v5, 0);
    v3[16725] = Function_20b3c0c_GetAdrOfDataPart(v3[16724]);
    v9 = v3[16725];
    if ( v9
      && (v9 == -8 || (v7 = *(uchar *)(v9 + 9), !*(uchar *)(v9 + 9)) ? (v10 = 0) : (v7 = *(ushort *)(v9 + 14),
                                                                                              v10 = (uint *)(v9 + 8 + v7 + 4)),
          v10) )
    {
      v11 = v9 + *v10;
    }
    else
    {
      v11 = 0;
    }
    v3[16726] = v11;
    v3[16727] = 0;
    result = Function_20b3624(v3[16726], 0x7FFF, v7, v8);
    ++v6;
    v3 += 4;
  }
  while ( v6 < 15 );
  return result;
}

//----- (022695C4) --------------------------------------------------------
uint __fastcall Function_22695c4(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = free(*(uint *)(v1 + 66896));
    ++v2;
    v1 += 16;
  }
  while ( v2 < 15 );
  return result;
}

//----- (022695E0) --------------------------------------------------------
uint __fastcall Function_22695e0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;
  uint result;

  v3 = a2;
  v4 = a3;
  v5 = 0;
  v6 = (int *)(a1 + 67136);
  do
  {
    result = Function_225c730(v6, v3, v5++ + 144, v4);
    ++v6;
  }
  while ( v5 < 39 );
  return result;
}

//----- (02269608) --------------------------------------------------------
uint __fastcall Function_2269608(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint result;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = 0;
  do
  {
    v6 = Function_20b3c1c_GetTexOffsets(*(uint *)(v4 + 67136));
    Function_20ae9b8(v6, &v9, &v8);
    Function_20a5a34();
    Function_20a5a34();
    Function_20aea70(v6);
    Function_20a5a44();
    result = free(*(uint *)(v4 + 67136));
    ++v5;
    v4 += 4;
  }
  while ( v5 < 39 );
  return result;
}

//----- (0226965C) --------------------------------------------------------
int __fastcall Function_226965c(int a1, int a2, int a3)
{
  int v3;
  char *v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;

  v3 = a1;
  v4 = &byte_226E5A4;
  v8 = a2;
  v9 = a3;
  v10 = 0;
  do
  {
    v5 = 0;
    do
    {
      v6 = (uchar)v4[v5 + 2];
      if ( v6 != 17 && !*(uint *)(v3 + 20 * v6 + 67292) )
      {
        *(uint *)(v3 + 16 * (uchar)*v4 + 66908) = Function_20b3c1c_GetTexOffsets(*(uint *)(v3 + 4 * (uchar)v4[1] + 67136));
        Function_2017164(
          (int *)(v3 + 67292 + 20 * (uchar)v4[v5 + 2]),
          v3 + 66896 + 16 * (uchar)*v4,
          v8,
          (uchar)v4[v5 + 2] + 183,
          v9,
          (int (***)(void))(v3 + 67612));
      }
      ++v5;
    }
    while ( v5 < 2 );
    v4 += 4;
    result = v10 + 1;
    v10 = result;
  }
  while ( result < 39 );
  return result;
}

//----- (02269700) --------------------------------------------------------
int __fastcall Function_2269700(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = (int *)(a1 + 67292);
  v4 = a1 + 67612;
  do
  {
    result = *(uint *)(v1 + 67292);
    if ( result )
    {
      Function_20171a0(v3, v4);
      result = 67292;
      *(uint *)(v1 + 67292) = 0;
    }
    ++v2;
    v1 += 20;
    v3 += 5;
  }
  while ( v2 < 16 );
  return result;
}

//----- (02269738) --------------------------------------------------------
void __fastcall Function_2269738(int a1, uchar *a2, uint *a3, uint a4)
{
  uchar v4;
  int v5;
  uchar *v6;
  uint *v7;

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  if ( a4 >= 0x1B )
    ErrorHandler();
  Function_22697f0(v5, v6);
  *((uint *)v6 + 2) = v7;
  *v6 = v4;
  *((uint *)v6 + 1) = Function_225cd60(v7, 5) + 40;
  ((void (__fastcall *)(int, uchar *))*(&off_226E43C + *v6))(v5, v6);
  Function_2269510(v5, (int)v6, dword_226E4A8[*v6]);
}

//----- (0226978C) --------------------------------------------------------
int __fastcall Function_226978c(int a1, uchar *a2)
{
  uchar *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = Function_2269800(a2);
  if ( result )
  {
    if ( *v2 >= 0x1Bu )
      ErrorHandler();
    result = ((int (__fastcall *)(int, uchar *))*(&off_226E3D0 + *v2))(v3, v2);
    if ( result == 1 )
      result = Function_22697f0(v3, v2);
  }
  return result;
}

//----- (022697C8) --------------------------------------------------------
int __fastcall Function_22697c8(int a1, uchar *a2)
{
  uchar *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( !Function_2269800(a2) )
    return 0;
  if ( *v2 >= 0x1Bu )
    ErrorHandler();
  return Function_226a998(v3, v2);
}

//----- (022697F0) --------------------------------------------------------
int *__fastcall Function_22697f0(int a1, int *a2)
{
  return Call_FillMemWithValue(a2, 0, 0xD10u);
}

//----- (02269800) --------------------------------------------------------
BOOL __fastcall Function_2269800(int a1)
{
  return *(uint *)(a1 + 8) != 0;
}

//----- (02269810) --------------------------------------------------------
BOOL __fastcall Function_2269810(int a1, int a2)
{
  return *(uint *)(a1 + 4 * a2 + 2172) != 0;
}

//----- (02269828) --------------------------------------------------------
int __fastcall Function_2269828(int a1, int a2, uint a3, uchar *a4)
{
  uint v4;
  int v5;
  uchar *v6;
  int v8;

  v4 = a3;
  v8 = a1;
  v5 = a2;
  v6 = a4;
  if ( a3 >= 0x12 )
    ErrorHandler();
  if ( *(uint *)(v5 + 2172 + 4 * v4) )
    ErrorHandler();
  *(uint *)(v5 + 2172 + 4 * v4) = v6;
  return Function_2017258((int *)(v5 + 12 + 120 * v4), v8 + 66896 + 16 * *v6);
}

//----- (02269878) --------------------------------------------------------
int __fastcall Function_2269878(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  uchar *v7;
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

  v3 = a3;
  v18 = a1;
  v4 = 4 * a3;
  v19 = a2;
  if ( !*(uint *)(a2 + 4 * a3 + 2172) )
    ErrorHandler();
  v5 = 120 * v3;
  result = Function_201734c(v19 + 12 + 120 * v3);
  if ( result )
  {
    v7 = *(uchar **)(v19 + v4 + 2172);
    v22 = v18 + 66896 + 16 * *v7;
    *(uint *)(v22 + 12) = Function_20b3c1c_GetTexOffsets(*(uint *)(v18 + 4 * v7[1] + 67136));
    if ( !Function_20aed78(*(uint *)(v22 + 8), *(uint *)(v22 + 12), 0, 0) )
      ErrorHandler();
    if ( !Function_20af09c(*(uint *)(v22 + 8), *(uint *)(v22 + 12), 0, 0) )
      ErrorHandler();
    v10 = v19 + 8 * v3;
    v21 = v19 + v4;
    v11 = 0;
    v12 = v18 + 67292;
    do
    {
      v13 = *(uchar *)(*(uint *)(v21 + 2172) + v11 + 2);
      if ( v13 == 17 )
        break;
      v14 = 20 * v13;
      Function_201727c(v19 + 12 + v5, v12 + 20 * v13);
      Function_2017240(v12 + v14, *(uint *)(v10 + 2244));
      ++v11;
      v10 += 4;
    }
    while ( v11 < 2 );
    Function_20b3724(*(uint *)(v22 + 8), *(uint *)(v19 + 4), v8, v9);
    v20 = v19 + 12;
    Function_2017294(v20 + v5);
    v15 = 0;
    do
    {
      v16 = *(uchar *)(*(uint *)(v21 + 2172) + v15 + 2);
      if ( v16 == 17 )
        break;
      Function_2017288((int *)(v20 + v5), v18 + 67292 + 20 * v16);
      ++v15;
    }
    while ( v15 < 2 );
    Function_20aee28(*(uint *)(v22 + 8), v16);
    Function_20af164(*(uint *)(v22 + 8), v17);
    result = v22;
    *(uint *)(v22 + 12) = 0;
  }
  return result;
}

//----- (022699BC) --------------------------------------------------------
int __fastcall Function_22699bc(int a1)
{
  return Function_22699e4(a1);
}

//----- (022699D0) --------------------------------------------------------
int __fastcall Function_22699d0(int a1)
{
  return Function_2269a3c(a1);
}

//----- (022699E4) --------------------------------------------------------
uint __fastcall Function_22699e4(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint result;
  int v13;

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = Function_201724c(a1 + 67292 + 20 * *(uchar *)(*(uint *)(a2 + 4 * a3 + 2172) + a4 + 2));
  v9 = v5 + 2244 + 8 * v6;
  v10 = 4 * v7;
  v11 = *(uint *)(v9 + v10);
  result = a5 + v11;
  if ( a5 + v11 >= v8 )
  {
    result = s32_div_f(v11 + 0x2000, v8);
    *(uint *)(v9 + v10) = v13;
  }
  else
  {
    *(uint *)(v9 + v10) = result;
  }
  return result;
}

//----- (02269A3C) --------------------------------------------------------
int __fastcall Function_2269a3c(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = Function_201724c(a1 + 67292 + 20 * *(uchar *)(*(uint *)(a2 + 4 * a3 + 2172) + a4 + 2));
  v9 = v5 + 2244 + 8 * v6;
  v10 = 4 * v7;
  v11 = a5 + *(uint *)(v9 + 4 * v7);
  if ( v11 >= v8 )
  {
    *(uint *)(v9 + v10) = v8 - 2048;
    result = 1;
  }
  else
  {
    *(uint *)(v9 + v10) = v11;
    result = 0;
  }
  return result;
}

//----- (02269A90) --------------------------------------------------------
int __fastcall Function_2269a90(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = Function_201724c(a1 + 67292 + 20 * *(uchar *)(*(uint *)(a2 + 4 * a3 + 2172) + a4 + 2));
  if ( v8 >= a5 )
  {
    result = 2244;
    *(uint *)(v5 + 8 * v6 + 4 * v7 + 2244) = a5;
  }
  else
  {
    result = v8 - 2048;
    *(uint *)(v5 + 8 * v6 + 4 * v7 + 2244) = result;
  }
  return result;
}

//----- (02269AE8) --------------------------------------------------------
int __fastcall Function_2269ae8(int a1, int a2, int a3, int a4)
{
  return Function_2017248(a1 + 67292 + 20 * *(uchar *)(*(uint *)(a2 + 4 * a3 + 2172) + a4 + 2));
}

//----- (02269B10) --------------------------------------------------------
int __fastcall Function_2269b10(int a1, int a2)
{
  return Function_226b92c(a1, a2, 1);
}

//----- (02269B1C) --------------------------------------------------------
int __fastcall Function_2269b1c(int a1, int a2)
{
  return Function_226b92c(a1, a2, 2);
}

//----- (02269B28) --------------------------------------------------------
int __fastcall Function_2269b28(int a1, int a2)
{
  return Function_226b92c(a1, a2, 3);
}

//----- (02269B34) --------------------------------------------------------
int __fastcall Function_2269b34(int a1, int a2)
{
  return Function_226bac8(a1, a2, 1);
}

//----- (02269B40) --------------------------------------------------------
int __fastcall Function_2269b40(int a1, int a2)
{
  return Function_226bac8(a1, a2, 2);
}

//----- (02269B4C) --------------------------------------------------------
int __fastcall Function_2269b4c(int a1, int a2)
{
  return Function_226bac8(a1, a2, 3);
}

//----- (02269B58) --------------------------------------------------------
int __fastcall Function_2269b58(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v6 = a1;
  v3 = 0;
  v4 = (uint *)(a2 + 12);
  do
  {
    Function_2269828(v6, v2, v3, (uchar *)&byte_226E5A4[4 * (v3 + 3)]);
    Function_225d054(*(uint *)(v2 + 8));
    v8 += 0x8000;
    Function_2017350(v4, v7, v8, v9);
    Function_2017348((int)v4, 0);
    ++v3;
    v4 += 30;
  }
  while ( v3 < 3 );
  result = 2388;
  *(uint *)(v2 + 2388) = 255;
  return result;
}

//----- (02269BB8) --------------------------------------------------------
uint *__fastcall Function_2269bb8(int a1, int a2)
{
  int v2;
  int *v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a1;
  v3 = (int *)a2;
  Function_2269828(a1, a2, 1u, (uchar *)&dword_226E5C8);
  Function_2269828(v2, (int)v3, 0, (uchar *)dword_226E5D4);
  Function_2017348((int)(v3 + 33), 0);
  Function_225d054(v3[2]);
  v10 = v9 + 0x10000;
  v8 = v7 + 0x8000;
  v5 = v8;
  v6 = v11;
  v3[598] = 8;
  switch ( (uchar)Function_225cd60((uint *)v3[2], 6) )
  {
    case 0u:
      v11 -= 114688;
      v6 -= 57344;
      Function_2017388((int)(v3 + 33), 49151, 1);
      break;
    case 1u:
      v11 += 98304;
      v6 += 45056;
      Function_2017388((int)(v3 + 33), 0x3FFF, 1);
      break;
    case 2u:
      v8 -= 94208;
      v5 -= 28672;
      v6 = v11 + 0x8000;
      Function_2017388((int)(v3 + 33), 0, 1);
      break;
    case 3u:
      v8 += 94208;
      v5 += 28672;
      v6 = v11 + 0x8000;
      Function_2017388((int)(v3 + 33), 0x7FFF, 1);
      break;
    default:
      break;
  }
  Function_2017350(v3 + 33, v8, v10, v11);
  return Function_2017350(v3 + 3, v5, v10 + 0x10000, v6);
}

//----- (02269CFC) --------------------------------------------------------
uint *__fastcall Function_2269cfc(int a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v2 = a1;
  v3 = (int *)a2;
  Function_2269828(a1, a2, 1u, (uchar *)&dword_226E5C8);
  Function_2269828(v2, (int)v3, 0, (uchar *)dword_226E5D4);
  Function_2269828(v2, (int)v3, 2u, (uchar *)&dword_226E5CC);
  Function_2017348((int)(v3 + 33), 0);
  Function_225d054(v3[2]);
  v15 = v14 + 0x10000;
  v13 = v12 + 0x8000;
  v10 = v13;
  v11 = v16;
  v3[598] = 8;
  v3[599] = 8;
  v4 = Function_225cd60((uint *)v3[2], 6);
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_2269D7E + v4) + 36085120);
  switch ( (uchar)v4 )
  {
    case 0:
      v5 = v16 - 114688;
      v11 -= 57344;
      Function_2017388((int)(v3 + 33), 41869, 1);
      Function_2017388((int)(v3 + 63), 56432, 1);
      Function_2017350(v3 + 33, v13 + 0x8000, v15, v5);
      Function_2017350(v3 + 63, v13 - 0x8000, v15, v5);
      break;
    case 1:
      v6 = v16 + 98304;
      v11 += 45056;
      Function_2017388((int)(v3 + 33), 9102, 1);
      Function_2017388((int)(v3 + 63), 23665, 1);
      Function_2017350(v3 + 33, v13 - 0x8000, v15, v6);
      Function_2017350(v3 + 63, v13 + 0x8000, v15, v6);
      break;
    case 2:
      v7 = v13 - 94208;
      v10 -= 28672;
      v11 = v16 + 0x8000;
      Function_2017388((int)(v3 + 33), 58255, 1);
      Function_2017388((int)(v3 + 63), 7281, 1);
      Function_2017350(v3 + 33, v7, v15, v16 - 0x8000);
      Function_2017350(v3 + 63, v7, v15, v16 + 0x8000);
      break;
    case 3:
      v8 = v13 + 94208;
      v10 += 28672;
      v11 = v16 + 0x8000;
      Function_2017388((int)(v3 + 33), 25485, 1);
      Function_2017388((int)(v3 + 63), 40049, 1);
      Function_2017350(v3 + 33, v8, v15, v16 + 0x8000);
      Function_2017350(v3 + 63, v8, v15, v16 - 0x8000);
      break;
    default:
      return Function_2017350(v3 + 3, v10, v15 + 0x10000, v11);
  }
  return Function_2017350(v3 + 3, v10, v15 + 0x10000, v11);
}

//----- (02269F30) --------------------------------------------------------
uint *__fastcall Function_2269f30(int a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v2 = a1;
  v3 = (int *)a2;
  Function_2269828(a1, a2, 1u, (uchar *)&dword_226E5C8);
  Function_2269828(v2, (int)v3, 0, (uchar *)dword_226E5D4);
  Function_2269828(v2, (int)v3, 2u, (uchar *)&dword_226E5CC);
  Function_2269828(v2, (int)v3, 3u, (uchar *)&dword_226E5D0);
  Function_2017348((int)(v3 + 33), 0);
  v3[598] = 8;
  v3[599] = 8;
  v3[600] = 8;
  Function_225d054(v3[2]);
  v15 = v14 + 0x10000;
  v13 = v12 + 0x8000;
  v10 = v13;
  v11 = v16;
  v4 = Function_225cd60((uint *)v3[2], 6);
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_2269FC2 + v4) + 36085700);
  switch ( (uchar)v4 )
  {
    case 0:
      v5 = v16 - 114688;
      v11 -= 57344;
      Function_2017388((int)(v3 + 33), 41869, 1);
      Function_2017388((int)(v3 + 63), 56432, 1);
      Function_2017388((int)(v3 + 93), 49151, 1);
      Function_2017350(v3 + 33, v13 + 0x8000, v15, v5);
      Function_2017350(v3 + 63, v13 - 0x8000, v15, v5);
      Function_2017350(v3 + 93, v13, v15, v5);
      break;
    case 1:
      v6 = v16 + 98304;
      v11 += 45056;
      Function_2017388((int)(v3 + 33), 9102, 1);
      Function_2017388((int)(v3 + 63), 23665, 1);
      Function_2017388((int)(v3 + 93), 0x3FFF, 1);
      Function_2017350(v3 + 33, v13 - 0x8000, v15, v6);
      Function_2017350(v3 + 63, v13 + 0x8000, v15, v6);
      Function_2017350(v3 + 93, v13, v15, v6);
      break;
    case 2:
      v7 = v13 - 94208;
      v10 -= 28672;
      v11 = v16 + 0x8000;
      Function_2017388((int)(v3 + 33), 58255, 1);
      Function_2017388((int)(v3 + 63), 7281, 1);
      Function_2017388((int)(v3 + 93), 0, 1);
      Function_2017350(v3 + 33, v7, v15, v16 - 0x8000);
      Function_2017350(v3 + 63, v7, v15, v16 + 0x8000);
      Function_2017350(v3 + 93, v7, v15, v16);
      break;
    case 3:
      v8 = v13 + 94208;
      v10 += 28672;
      v11 = v16 + 0x8000;
      Function_2017388((int)(v3 + 33), 25485, 1);
      Function_2017388((int)(v3 + 63), 40049, 1);
      Function_2017388((int)(v3 + 93), 0x7FFF, 1);
      Function_2017350(v3 + 33, v8, v15, v16 + 0x8000);
      Function_2017350(v3 + 63, v8, v15, v16 - 0x8000);
      Function_2017350(v3 + 93, v8, v15, v16);
      break;
    default:
      return Function_2017350(v3 + 3, v10, v15 + 0x10000, v11);
  }
  return Function_2017350(v3 + 3, v10, v15 + 0x10000, v11);
}

//----- (0226A1FC) --------------------------------------------------------
int __fastcall Function_226a1fc(int a1, int a2)
{
  return Function_226a9d0(a1, a2, 1);
}

//----- (0226A208) --------------------------------------------------------
int __fastcall Function_226a208(int a1, int a2)
{
  return Function_226a9d0(a1, a2, 2);
}

//----- (0226A214) --------------------------------------------------------
int __fastcall Function_226a214(int a1, int a2)
{
  return Function_226a9d0(a1, a2, 3);
}

//----- (0226A220) --------------------------------------------------------
int __fastcall Function_226a220(int a1, int a2)
{
  return Function_226b7b0(a1, a2, 1);
}

//----- (0226A22C) --------------------------------------------------------
int __fastcall Function_226a22c(int a1, int a2)
{
  return Function_226b7b0(a1, a2, 2);
}

//----- (0226A238) --------------------------------------------------------
int __fastcall Function_226a238(int a1, int a2)
{
  return Function_226b7b0(a1, a2, 4);
}

//----- (0226A244) --------------------------------------------------------
int __fastcall Function_226a244(int a1, int a2)
{
  char *v2;
  int v3;
  int v4;
  int v6;

  v2 = &byte_226E640;
  v6 = a1;
  v3 = a2;
  v4 = 0;
  do
    Function_2269828(v6, v3, v4++, (uchar *)&byte_226E5A4[4 * (uchar)*v2++]);
  while ( v4 < 16 );
  return Function_226bc40(v3 + 2388, &off_226E2EC, 2, 33, 0, v3);
}

//----- (0226A294) --------------------------------------------------------
int __fastcall Function_226a294(int a1, int a2)
{
  char *v2;
  int v3;
  int v4;
  int v6;

  v2 = &byte_226E650;
  v6 = a1;
  v3 = a2;
  v4 = 0;
  do
    Function_2269828(v6, v3, v4++, (uchar *)&byte_226E5A4[4 * (uchar)*v2++]);
  while ( v4 < 16 );
  return Function_226bc40(v3 + 2388, dword_226E304, 2, 33, 0, v3);
}

//----- (0226A2E4) --------------------------------------------------------
int __fastcall Function_226a2e4(int a1, int a2)
{
  char *v2;
  int v3;
  int v4;
  int v6;

  v2 = &byte_226E660;
  v6 = a1;
  v3 = a2;
  v4 = 0;
  do
    Function_2269828(v6, v3, v4++, (uchar *)&byte_226E5A4[4 * (uchar)*v2++]);
  while ( v4 < 16 );
  return Function_226bc40(v3 + 2388, &off_226E34C, 3, 33, 0, v3);
}

//----- (0226A334) --------------------------------------------------------
int __fastcall Function_226a334(int a1, int a2)
{
  char *v2;
  int v3;
  int v4;
  int v6;

  v2 = &byte_226E640;
  v6 = a1;
  v3 = a2;
  v4 = 0;
  do
    Function_2269828(v6, v3, v4++, (uchar *)&byte_226E5A4[4 * (uchar)*v2++]);
  while ( v4 < 16 );
  return Function_226bc40(v3 + 2388, &off_226E2FC, 2, 33, 1, v3);
}

//----- (0226A384) --------------------------------------------------------
int __fastcall Function_226a384(int a1, int a2)
{
  char *v2;
  int v3;
  int v4;
  int v6;

  v2 = &byte_226E650;
  v6 = a1;
  v3 = a2;
  v4 = 0;
  do
    Function_2269828(v6, v3, v4++, (uchar *)&byte_226E5A4[4 * (uchar)*v2++]);
  while ( v4 < 16 );
  return Function_226bc40(v3 + 2388, dword_226E334, 3, 41, 1, v3);
}

//----- (0226A3D4) --------------------------------------------------------
int __fastcall Function_226a3d4(int a1, int a2)
{
  char *v2;
  int v3;
  int v4;
  int v6;

  v2 = &byte_226E660;
  v6 = a1;
  v3 = a2;
  v4 = 0;
  do
    Function_2269828(v6, v3, v4++, (uchar *)&byte_226E5A4[4 * (uchar)*v2++]);
  while ( v4 < 16 );
  return Function_226bc40(v3 + 2388, &off_226E358, 3, 33, 1, v3);
}

//----- (0226A424) --------------------------------------------------------
int __fastcall Function_226a424(int a1, int a2)
{
  char *v2;
  int v3;
  int v4;
  int v6;

  v2 = &byte_226E640;
  v6 = a1;
  v3 = a2;
  v4 = 0;
  do
    Function_2269828(v6, v3, v4++, (uchar *)&byte_226E5A4[4 * (uchar)*v2++]);
  while ( v4 < 16 );
  Function_226bc40(v3 + 2388, &off_226E314, 2, 33, 2, v3);
  return Function_226bb34(v6, v3);
}

//----- (0226A478) --------------------------------------------------------
int __fastcall Function_226a478(int a1, int a2)
{
  char *v2;
  int v3;
  int v4;
  int v6;

  v2 = &byte_226E650;
  v6 = a1;
  v3 = a2;
  v4 = 0;
  do
    Function_2269828(v6, v3, v4++, (uchar *)&byte_226E5A4[4 * (uchar)*v2++]);
  while ( v4 < 16 );
  Function_226bc40(v3 + 2388, &off_226E2F4, 2, 33, 2, v3);
  return Function_226bb34(v6, v3);
}

//----- (0226A4CC) --------------------------------------------------------
int __fastcall Function_226a4cc(int a1, int a2)
{
  char *v2;
  int v3;
  int v4;
  int v6;

  v2 = &byte_226E660;
  v6 = a1;
  v3 = a2;
  v4 = 0;
  do
    Function_2269828(v6, v3, v4++, (uchar *)&byte_226E5A4[4 * (uchar)*v2++]);
  while ( v4 < 16 );
  Function_226bc40(v3 + 2388, &off_226E30C, 2, 33, 2, v3);
  return Function_226bb34(v6, v3);
}

//----- (0226A520) --------------------------------------------------------
BOOL __fastcall Function_226a520(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  uint i;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;

  v11 = a1;
  v2 = a2;
  v3 = *(short *)(a2 + 2) + 1;
  if ( v3 <= 54 )
    *(ushort *)(a2 + 2) = v3;
  v4 = s32_div_f(6 * *(short *)(a2 + 2), 54);
  for ( i = *(char *)(v2 + 2389); i < v4; ++i )
  {
    s32_div_f(i, 3);
    if ( v6 < *(char *)(v2 + 2388) )
      Function_2017348(v2 + 12 + 120 * v6, 1);
  }
  v12 = 1;
  *(uchar *)(v2 + 2389) = v4;
  v7 = 0;
  if ( *(char *)(v2 + 2388) > 0 )
  {
    v8 = v2 + 12;
    v9 = v2 + 12;
    do
    {
      if ( Function_201734c(v8) == 1 )
      {
        v12 = Function_22699d0(v11);
        if ( v12 )
        {
          Function_2017348(v9, 0);
          Function_2269a90(v11, v2, v7, 0, 0);
        }
      }
      ++v7;
      v8 += 120;
      v9 += 120;
    }
    while ( v7 < *(char *)(v2 + 2388) );
  }
  return *(char *)(v2 + 2389) >= 6 && v12 == 1;
}

//----- (0226A5F0) --------------------------------------------------------
int __fastcall Function_226a5f0(int a1, int a2)
{
  return Function_226b998(a1, a2, 0);
}

//----- (0226A5FC) --------------------------------------------------------
int __fastcall Function_226a5fc(int a1, int a2)
{
  return Function_226b998(a1, a2, 1);
}

//----- (0226A608) --------------------------------------------------------
int __fastcall Function_226a608(int a1, int a2)
{
  return Function_226b998(a1, a2, 2);
}

//----- (0226A614) --------------------------------------------------------
int __fastcall Function_226a614(int a1, short *a2)
{
  int v2;
  short *v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v2 = a1;
  v3 = a2;
  v4 = 3 * a2[1] / 32;
  if ( v4 != a2[1194] )
  {
    a2[1194] = v4;
    if ( a2[1195] > v4 )
    {
      if ( v4 )
        Function_2017348((int)&a2[60 * (v4 - 1) + 6], 0);
      Function_2017348((int)&v3[60 * v4 + 6], 1);
    }
  }
  v5 = v3[1];
  if ( v5 < 32 )
    v3[1] = v5 + 1;
  v6 = 0;
  v9 = 0;
  if ( v3[1195] > 0 )
  {
    v7 = (int)(v3 + 6);
    do
    {
      if ( Function_201734c(v7) )
      {
        if ( v6 == v3[1195] - 1 )
          v9 = Function_22699d0(v2);
        else
          Function_22699bc(v2);
      }
      ++v6;
      v7 += 120;
    }
    while ( v6 < v3[1195] );
  }
  return v9;
}

//----- (0226A6C8) --------------------------------------------------------
int __fastcall Function_226a6c8(int a1, int a2)
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
  int v13;
  int v14;

  v13 = a1;
  v2 = a2;
  if ( *(uchar *)(*(uint *)(a2 + 2172) + 2) == 17 )
    ErrorHandler();
  v3 = *(uint *)(v2 + 2388);
  if ( v3 <= 0 )
  {
    v4 = *(short *)(v2 + 2);
    if ( v4 < 3 && Function_2269810(v2, v4 + 1) == 1 )
    {
      Function_2017348(v2 + 12, 1);
      if ( Function_22699d0(v13) == 1 )
      {
        ++*(ushort *)(v2 + 2);
        *(uint *)(v2 + 2388) = 3;
        if ( *(short *)(v2 + 2) >= 3 )
          Function_2017348(v2 + 12, 0);
        else
          Function_2269a90(v13, v2, 0, 0, 0);
      }
    }
  }
  else
  {
    *(uint *)(v2 + 2388) = v3 - 1;
    Function_2017348(v2 + 12, 0);
  }
  v5 = 1;
  v14 = 1;
  v6 = v2 + 132;
  v7 = v2 + 4;
  do
  {
    if ( Function_2269810(v2, v5) == 1 )
    {
      if ( *(short *)(v2 + 2) <= v5 - 1 )
      {
        v14 = 0;
      }
      else
      {
        Function_2017348(v6, 1);
        if ( Function_2269a3c(v13, v2, v5, 0, 10240) )
        {
          v9 = v2 + 4 * (v5 - 1);
          if ( *(uint *)(v9 + 2392) )
          {
            --*(uint *)(v9 + 2392);
            Function_20b3764(
              *(uint *)(v13 + 16 * **(uchar **)(v7 + 2172) + 66904),
              20 * *(uint *)(v9 + 2392) / 8,
              20 * *(uint *)(v9 + 2392),
              v8);
            v14 = 0;
          }
          else
          {
            Function_2017348(v6, 0);
            Function_20b3764(*(uint *)(v13 + 16 * **(uchar **)(v7 + 2172) + 66904), 31, v10, v11);
          }
        }
        else
        {
          v14 = 0;
        }
      }
    }
    ++v5;
    v6 += 120;
    v7 += 4;
  }
  while ( v5 <= 3 );
  return v14;
}

//----- (0226A820) --------------------------------------------------------
int __fastcall Function_226a820(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)(a2 + 1) )
  {
    if ( *(uchar *)(a2 + 1) == 1 && Function_226af60() )
      return 1;
  }
  else if ( Function_226ac08() )
  {
    *(uchar *)(v2 + 1) = 1;
    Function_226ada0(v3, v2);
  }
  return 0;
}

//----- (0226A858) --------------------------------------------------------
BOOL __fastcall Function_226a858(int a1, uchar *a2)
{
  uchar *v2;
  uint v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v2 = a2;
  v10 = a1;
  if ( (char)a2[2389] < (int)(uchar)a2[2390] )
  {
    if ( (char)++a2[2388] >= 8 )
    {
      a2[2388] = 0;
      ++a2[2389];
    }
    v3 = (uchar)a2[2391];
    v4 = 4 * (char)a2[2388] / 8 + 4 * (char)a2[2389];
    if ( v3 < v4 )
    {
      v5 = (int)&a2[120 * v3 + 12];
      do
      {
        Function_2017348(v5, 1);
        ++v3;
        v5 += 120;
      }
      while ( v3 < v4 );
    }
    v2[2391] = v4;
  }
  v6 = 0;
  if ( (int)(uchar)v2[2391] > 0 )
  {
    v7 = (int)(v2 + 12);
    v8 = (int)(v2 + 12);
    do
    {
      if ( Function_201734c(v7) == 1 )
      {
        v11 = Function_226b8c4(v10, v2, v6);
        if ( v11 == 1 )
          Function_2017348(v8, 0);
      }
      ++v6;
      v7 += 120;
      v8 += 120;
    }
    while ( v6 < (uchar)v2[2391] );
  }
  return (char)v2[2389] == (uchar)v2[2390] && v11 == 1;
}

//----- (0226A930) --------------------------------------------------------
BOOL __fastcall Function_226a930(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_226bcc0(a2 + 2388, *(short *)(a2 + 2));
  ++*(ushort *)(v2 + 2);
  return v3 == 2;
}

//----- (0226A958) --------------------------------------------------------
BOOL __fastcall Function_226a958(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = Function_226bcc0(a2 + 2388, *(short *)(a2 + 2));
  ++*(ushort *)(v2 + 2);
  if ( v4 == 1 )
    Function_226bba8(v3, v2);
  Function_226bbdc(v3, v2);
  return v4 == 2;
}

//----- (0226A998) --------------------------------------------------------
int __fastcall Function_226a998(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v2 = a2;
  v3 = a1;
  Function_225ce70(*(uint *)(a2 + 8));
  if ( v4 == 1 )
    return 0;
  v6 = 0;
  do
  {
    if ( Function_2269810(v2, v6) == 1 )
      Function_2269878(v3, v2, v6);
    ++v6;
  }
  while ( v6 < 18 );
  return 1;
}

//----- (0226A9D0) --------------------------------------------------------
int __fastcall Function_226a9d0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *(uint *)(a2 + 8) == Function_225ccac(*(uint *)(a1 + 4)) )
    Function_2260b3c(*(uint *)(v3 + 8));
  Function_225cd34(*(uint **)(v4 + 8));
  *(uchar *)(v4 + 2405) = Function_225c8c4(*(uint **)(v3 + 12)) == 42;
  if ( v5 == 1 )
  {
    Function_2269828(v3, v4, 0, (uchar *)&dword_226E5E4);
    Function_226b714(v3, v4);
  }
  else
  {
    if ( v5 == 2 )
    {
      Function_2269828(v3, v4, 0, (uchar *)&dword_226E5E4);
      Function_2269828(v3, v4, 1u, (uchar *)&dword_226E5E8);
    }
    else
    {
      Function_2269828(v3, v4, 0, (uchar *)&dword_226E5E4);
      Function_2269828(v3, v4, 1u, (uchar *)&dword_226E5E8);
      Function_2269828(v3, v4, 2u, (uchar *)dword_226E5EC);
      Function_226b714(v3, v4);
    }
    Function_226b714(v3, v4);
    Function_226b714(v3, v4);
  }
  *(uchar *)(v4 + 2389) = v5;
  ((void (__fastcall *)(uint, uint))Function_225d030[0])(*(uint *)(v4 + 8), 0);
  if ( *(uchar *)(v4 + 2405) )
    result = Function_226abac(v3, v4);
  else
    result = Function_226ab14(v3, v4);
  return result;
}

//----- (0226AB14) --------------------------------------------------------
int __fastcall Function_226ab14(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int result;
  int v10;
  int v11;
  int v12;

  v2 = a2;
  Function_225d054(*(uint *)(a2 + 8));
  v3 = *(char *)(v2 + 2389) - 1;
  v4 = *((uchar *)&dword_226E2E8 + v3);
  if ( *((uchar *)&dword_226E2E8 + v3) )
  {
    v5 = fflt(v4 << 12);
    v6 = fadd(0x3F000000u, v5);
  }
  else
  {
    v7 = fflt(v4 << 12);
    v6 = fsub(v7, 1056964608);
  }
  v8 = ffix(v6);
  Function_22692b4((uint *)(v2 + 2564), v10, v10, v11, v11 + v8, v12, v12, 108);
  Function_226949c((ushort *)(v2 + 2604), 0, 1820, 0x8000);
  Function_226b324(v2);
  result = 2390;
  *(ushort *)(v2 + 2390) = 0;
  return result;
}

//----- (0226ABAC) --------------------------------------------------------
int __fastcall Function_226abac(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  Function_225d054(*(uint *)(a2 + 8));
  Function_22692b4((uint *)(v2 + 2564), v4, v4, v5, v5 + 0x2000, v6, v6, 2);
  Function_226949c((ushort *)(v2 + 2604), 0, 1820, 0);
  Function_226b51c(v2);
  result = 2390;
  *(ushort *)(v2 + 2390) = 0;
  return result;
}

//----- (0226AC08) --------------------------------------------------------
int __fastcall Function_226ac08(int a1, int a2)
{
  int result;

  if ( *(uchar *)(a2 + 2405) )
    result = Function_226ad20();
  else
    result = Function_226ac24();
  return result;
}

//----- (0226AC24) --------------------------------------------------------
int __fastcall Function_226ac24(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int i;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;
  int v15;
  char v16;
  char v17;
  int v18;

  v18 = a4;
  v4 = a2;
  v5 = a1;
  v12 = Function_22692dc((int *)(a2 + 2564), *(short *)(a2 + 2390));
  Function_22694d0((ushort *)(v4 + 2604));
  ++*(ushort *)(v4 + 2390);
  Function_225d054(*(uint *)(v4 + 8));
  Function_2269488((uint *)(v4 + 2564), &v15, &v16, &v17);
  Function_2269508(v4 + 2604, &v14);
  if ( !v12 )
    v15 += v14;
  ((void (__fastcall *)(uint, int *))Function_225d048[0])(*(uint *)(v4 + 8), &v15);
  Function_226b324(v4);
  for ( i = 0; i < *(char *)(v4 + 2389); ++i )
    Function_226b744(v5, v4, i);
  v7 = *(uint *)(v4 + 8);
  if ( v7 == Function_225ccac(*(uint *)(v5 + 4)) )
  {
    v8 = 4;
    if ( dword_21BF6C4 & 0x40 )
      v8 = 0;
    if ( dword_21BF6C4 & 0x80 )
      v8 = 1;
    if ( dword_21BF6C4 & 0x10 )
      v8 = 3;
    if ( dword_21BF6C4 & 0x20 )
      v8 = 2;
    if ( v8 != 4 )
    {
      ((void (__fastcall *)(int, int))Function_225d060[0])(v7, v8);
      v13 = Function_225cd34(*(uint **)(v4 + 8));
      v9 = *(uint *)(v4 + 8);
      *(&v12 - 1) = v13;
      v10 = *(&v12 - 1);
      Function_225cd04();
    }
  }
  return v12;
}

//----- (0226AD20) --------------------------------------------------------
int __fastcall Function_226ad20(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int i;
  int v8;
  char v9;
  char v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = a2;
  v5 = a1;
  v8 = Function_22692dc((int *)(a2 + 2564), *(short *)(a2 + 2390));
  Function_22694d0((ushort *)(v4 + 2604));
  ++*(ushort *)(v4 + 2390);
  Function_225d054(*(uint *)(v4 + 8));
  Function_2269488((uint *)(v4 + 2564), &v9, &v10, &v11);
  ((void (__fastcall *)(uint, char *))Function_225d048[0])(*(uint *)(v4 + 8), &v9);
  Function_226b51c(v4);
  for ( i = 0; i < *(char *)(v4 + 2389); ++i )
    Function_226b744(v5, v4, i);
  return v8;
}

//----- (0226ADA0) --------------------------------------------------------
int __fastcall Function_226ada0(int a1, int a2)
{
  int result;

  if ( *(uchar *)(a2 + 2405) )
    result = Function_226af1c();
  else
    result = Function_226adbc();
  return result;
}

//----- (0226ADBC) --------------------------------------------------------
int __fastcall Function_226adbc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  uint *v12;
  ushort *v13;
  int v14;
  int result;
  int v16;
  uint *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v24 = a4;
  v4 = a2;
  v16 = a1;
  Function_225d054(*(uint *)(a2 + 8));
  v5 = *(char *)(v4 + 2389) - 1;
  v6 = *((uchar *)&dword_226E2E8 + v5);
  if ( *((uchar *)&dword_226E2E8 + v5) )
  {
    v7 = fflt(v6 << 12);
    v8 = fadd(0x3F000000u, v7);
  }
  else
  {
    v9 = fflt(v6 << 12);
    v8 = fsub(v9, 1056964608);
  }
  v10 = ffix(v8);
  Function_22692b4((uint *)(v4 + 2564), v21, v21, v22, v22 - v10, v23, v23, 10);
  v11 = 0;
  *(ushort *)(v4 + 2390) = 0;
  *(uchar *)(v4 + 2388) = 0;
  if ( *(char *)(v4 + 2389) > 0 )
  {
    v17 = (uint *)(v4 + 12);
    v12 = (uint *)(v4 + 2444);
    v13 = (ushort *)(v4 + 2408);
    do
    {
      Function_2017358(v17, &v21, &v22, &v23);
      v14 = *(uchar *)(v4 + v11 + 2400);
      if ( *(uchar *)(v4 + v11 + 2400) )
      {
        if ( v14 == 1 )
        {
          v20 = v21 + 0x40000;
          v19 = v22 + 0x40000;
          v18 = v23;
          Function_22692b4(v12, v21, v21 + 0x40000, v22, v22 + 0x40000, v23, v23, 26);
        }
        else
        {
          if ( v14 == 2 )
          {
            v20 = v21 - 0x40000;
            v19 = v22 + 0x40000;
            v18 = v23;
          }
          Function_22692b4(v12, v21, v20, v22, v19, v23, v18, 26);
        }
      }
      else
      {
        v20 = v21;
        v19 = v22 + 0x40000;
        v18 = v23 - 0x40000;
        Function_22692b4(v12, v21, v21, v22, v22 + 0x40000, v23, v23 - 0x40000, 26);
      }
      Function_226949c(v13, 0, 2730, 24576);
      Function_226b714(v16, v4);
      ++v11;
      v17 += 30;
      v12 += 10;
      v13 += 6;
    }
    while ( v11 < *(char *)(v4 + 2389) );
  }
  result = 2404;
  *(uchar *)(v4 + 2404) = 0;
  return result;
}

//----- (0226AF1C) --------------------------------------------------------
int __fastcall Function_226af1c(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  Function_225d054(*(uint *)(a2 + 8));
  Function_22692b4((uint *)(v2 + 2564), v4, v4, v5, v5 - 0x2000, v6, v6, 1);
  *(ushort *)(v2 + 2390) = 0;
  result = 2388;
  *(uchar *)(v2 + 2388) = 0;
  return result;
}

//----- (0226AF60) --------------------------------------------------------
int __fastcall Function_226af60(int a1, int a2)
{
  int result;

  if ( *(uchar *)(a2 + 2405) )
    result = Function_226b1d0();
  else
    result = Function_226af7c();
  return result;
}

//----- (0226AF7C) --------------------------------------------------------
int __fastcall Function_226af7c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  ushort v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int result;
  int v12;
  int *v13;
  uint *v14;
  int v15;
  uint *v16;
  uint *v17;
  ushort *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char v23;
  uint v24;
  char v25;
  int v26;
  char v27;

  v2 = a2;
  v3 = a1;
  switch ( *(uchar *)(a2 + 2388) )
  {
    case 0:
      if ( (short)++*(ushort *)(a2 + 2390) >= 8 )
        *(uchar *)(a2 + 2388) = 1;
      goto LABEL_14;
    case 1:
      Function_225d09c(*(uint *)(a2 + 8), 1);
      *(ushort *)(v2 + 2390) = 16;
      *(uchar *)(v2 + 2388) = 2;
      goto LABEL_14;
    case 2:
      if ( (short)--*(ushort *)(a2 + 2390) <= 0 )
      {
        Function_225d09c(*(uint *)(a2 + 8), 0);
        *(uchar *)(v2 + 2388) = 3;
        *(ushort *)(v2 + 2390) = 0;
        v4 = Function_225cd60(*(uint **)(v2 + 8), 6);
        ((void (__fastcall *)(uint, int))Function_225d060[0])(*(uint *)(v2 + 8), v4);
      }
      goto LABEL_14;
    case 3:
      v5 = Function_22692dc((int *)(a2 + 2564), *(short *)(a2 + 2390));
      ++*(ushort *)(v2 + 2390);
      Function_225d054(*(uint *)(v2 + 8));
      Function_2269488((uint *)(v2 + 2564), &v25, &v26, &v27);
      ((void (__fastcall *)(uint, char *))Function_225d048[0])(*(uint *)(v2 + 8), &v25);
      if ( v5 == 1 )
      {
        *(uchar *)(v2 + 2388) = 4;
        *(ushort *)(v2 + 2390) = 0;
        *(uint *)(v2 + 2392) = v26;
        Function_2269510(v3, v2, 0x5ABu);
      }
      goto LABEL_14;
    case 4:
      v6 = s32_div_f(0x7FFF * *(short *)(a2 + 2390), 10);
      v7 = SLOWORD(Unknown_20f983c[(int)v6 >> 4]);
      v8 = ((uint)((v7 << 15) + 2048) >> 12) | ((__CFADD__(v7 << 15, 2048)
                                                       + (uint)((ull)SLOWORD(Unknown_20f983c[(int)v6 >> 4]) >> 17)) << 20);
      Function_225d054(*(uint *)(v2 + 8));
      v24 = *(uint *)(v2 + 2392) + v8;
      ((void (__fastcall *)(uint, char *))Function_225d048[0])(*(uint *)(v2 + 8), &v23);
      v9 = *(short *)(v2 + 2390) + 1;
      if ( v9 <= 10 )
      {
        *(ushort *)(v2 + 2390) = v9;
LABEL_14:
        v12 = 0;
        ++*(uchar *)(v2 + 2404);
        if ( *(char *)(v2 + 2389) > 0 )
        {
          v13 = (int *)(v2 + 2444);
          v18 = (ushort *)(v2 + 2408);
          v17 = (uint *)(v2 + 12);
          v16 = (uint *)(v2 + 2444);
          v15 = v2 + 2408;
          v14 = (uint *)(v2 + 12);
          do
          {
            if ( Function_22692dc(v13, *(uchar *)(v2 + 2404)) )
            {
              if ( Function_226b714(v3, v2) == 1 )
                Function_2269510(v3, v2, 0x591u);
            }
            else
            {
              Function_22694d0(v18);
              Function_2017358(v17, &v20, &v21, &v22);
              Function_2269488(v16, &v20, &v21, &v22);
              Function_2269508(v15, &v19);
              v20 += v19;
              Function_2017350(v14, v20, v21, v22);
            }
            Function_226b744(v3, v2, v12++);
            v18 += 6;
            v13 += 10;
            v17 += 30;
            v16 += 10;
            v15 += 12;
            v14 += 30;
          }
          while ( v12 < *(char *)(v2 + 2389) );
        }
        result = 0;
      }
      else
      {
        ((void (__fastcall *)(uint, int))Function_225d030[0])(*(uint *)(v2 + 8), 1);
        v10 = *(uint *)(v2 + 8);
        if ( v10 == Function_225ccac(*(uint *)(v3 + 4)) )
          Function_2260b38(*(uint *)(v3 + 8), v10);
        result = 1;
      }
      return result;
    default:
      goto LABEL_14;
  }
}

//----- (0226B1D0) --------------------------------------------------------
int __fastcall Function_226b1d0(int a1, int a2)
{
  int v2;
  int v3;
  int i;
  uint v5;
  int j;
  int v7;
  int v8;
  int v9;
  int result;
  char v11;
  int v12;
  char v13;

  v2 = a1;
  v3 = a2;
  for ( i = 0; i < *(char *)(v3 + 2389); ++i )
    Function_226b744(v2, v3, i);
  v5 = *(char *)(v3 + 2388);
  if ( v5 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_226B20C + v5) + 36090382);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_2269510(v2, v3, 0x591u);
      for ( j = 0; j < *(char *)(v3 + 2389); ++j )
        Function_226b714(v2, v3);
      *(uchar *)(v3 + 2388) = 1;
      goto LABEL_16;
    case 1:
      Function_225d09c(*(uint *)(v3 + 8), 1);
      *(ushort *)(v3 + 2390) = 8;
      *(uchar *)(v3 + 2388) = 2;
      goto LABEL_16;
    case 2:
      if ( (short)--*(ushort *)(v3 + 2390) <= 0 )
      {
        Function_225d09c(*(uint *)(v3 + 8), 0);
        *(uchar *)(v3 + 2388) = 3;
        *(ushort *)(v3 + 2390) = 0;
        v7 = Function_225cd60(*(uint **)(v3 + 8), 6);
        ((void (__fastcall *)(uint, int))Function_225d060[0])(*(uint *)(v3 + 8), v7);
      }
      goto LABEL_16;
    case 3:
      v8 = Function_22692dc((int *)(v3 + 2564), *(short *)(v3 + 2390));
      ++*(ushort *)(v3 + 2390);
      Function_225d054(*(uint *)(v3 + 8));
      Function_2269488((uint *)(v3 + 2564), &v11, &v12, &v13);
      ((void (__fastcall *)(uint, char *))Function_225d048[0])(*(uint *)(v3 + 8), &v11);
      if ( v8 != 1 )
        goto LABEL_16;
      *(ushort *)(v3 + 2390) = 0;
      *(uint *)(v3 + 2392) = v12;
      Function_2269510(v2, v3, 0x5ABu);
      ((void (__fastcall *)(uint, int))Function_225d030[0])(*(uint *)(v3 + 8), 1);
      v9 = *(uint *)(v3 + 8);
      if ( v9 == Function_225ccac(*(uint *)(v2 + 4)) )
        Function_2260b38(*(uint *)(v2 + 8), v9);
      result = 1;
      break;
    default:
LABEL_16:
      result = 0;
      break;
  }
  return result;
}

//----- (0226B324) --------------------------------------------------------
uint *__fastcall Function_226b324(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  uint v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint v19;
  uint v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint v25;
  uint v26;
  int v27;
  int v28;
  int v29;
  int v30;
  uint v31;
  uint v32;
  int v33;
  int v34;
  int v35;
  int v36;
  uint v37;
  uint v38;
  uint *result;
  int v40;
  int v41;
  int v42;

  v1 = a1;
  Function_225d054(*(uint *)(a1 + 8));
  v2 = *(char *)(v1 + 2389);
  if ( v2 == 1 )
  {
    v3 = fflt(245760);
    v4 = fadd(0x3F000000u, v3);
    v5 = fflt(0x8000);
    v6 = fadd(0x3F000000u, v5);
    v7 = ffix(v6);
    v8 = ffix(v4);
    result = Function_2017350((uint *)(v1 + 12), v40 + v7, v41 + v8, v42 + 4096);
  }
  else if ( v2 == 2 )
  {
    v9 = fflt(229376);
    v10 = fadd(0x3F000000u, v9);
    v11 = fflt(0x2000);
    v12 = fadd(0x3F000000u, v11);
    v13 = ffix(v12);
    v14 = ffix(v10);
    Function_2017350((uint *)(v1 + 12), v40 + v13, v41 + v14, v42 + 4096);
    v15 = fflt(229376);
    v16 = fadd(0x3F000000u, v15);
    v17 = fflt(57344);
    v18 = fadd(0x3F000000u, v17);
    v19 = ffix(v18);
    v20 = ffix(v16);
    result = Function_2017350((uint *)(v1 + 132), v40 + v19, v41 + v20, v42 + 4096);
  }
  else
  {
    v21 = fflt(245760);
    v22 = fadd(0x3F000000u, v21);
    v23 = fflt(0x8000);
    v24 = fadd(0x3F000000u, v23);
    v25 = ffix(v24);
    v26 = ffix(v22);
    Function_2017350((uint *)(v1 + 12), v40 + v25, v41 + v26, v42 + 4096);
    v27 = fflt(229376);
    v28 = fadd(0x3F000000u, v27);
    v29 = fflt(0x2000);
    v30 = fadd(0x3F000000u, v29);
    v31 = ffix(v30);
    v32 = ffix(v28);
    Function_2017350((uint *)(v1 + 132), v40 + v31, v41 + v32, v42 + 4096);
    v33 = fflt(229376);
    v34 = fadd(0x3F000000u, v33);
    v35 = fflt(57344);
    v36 = fadd(0x3F000000u, v35);
    v37 = ffix(v36);
    v38 = ffix(v34);
    result = Function_2017350((uint *)(v1 + 252), v40 + v37, v41 + v38, v42 + 4096);
  }
  return result;
}

//----- (0226B51C) --------------------------------------------------------
uint *__fastcall Function_226b51c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  uint v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint v19;
  uint v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint v25;
  uint v26;
  int v27;
  int v28;
  int v29;
  int v30;
  uint v31;
  uint v32;
  int v33;
  int v34;
  int v35;
  int v36;
  uint v37;
  uint v38;
  uint *result;
  int v40;
  int v41;
  int v42;

  v1 = a1;
  Function_225d054(*(uint *)(a1 + 8));
  v2 = *(char *)(v1 + 2389);
  if ( v2 == 1 )
  {
    v3 = fflt(196608);
    v4 = fadd(0x3F000000u, v3);
    v5 = fflt(0x8000);
    v6 = fadd(0x3F000000u, v5);
    v7 = ffix(v6);
    v8 = ffix(v4);
    result = Function_2017350((uint *)(v1 + 12), v40 + v7, v41 + v8, v42 - 0x8000);
  }
  else if ( v2 == 2 )
  {
    v9 = fflt(180224);
    v10 = fadd(0x3F000000u, v9);
    v11 = fflt(0x2000);
    v12 = fadd(0x3F000000u, v11);
    v13 = ffix(v12);
    v14 = ffix(v10);
    Function_2017350((uint *)(v1 + 12), v40 + v13, v41 + v14, v42 - 0x8000);
    v15 = fflt(180224);
    v16 = fadd(0x3F000000u, v15);
    v17 = fflt(57344);
    v18 = fadd(0x3F000000u, v17);
    v19 = ffix(v18);
    v20 = ffix(v16);
    result = Function_2017350((uint *)(v1 + 132), v40 + v19, v41 + v20, v42 - 0x8000);
  }
  else
  {
    v21 = fflt(196608);
    v22 = fadd(0x3F000000u, v21);
    v23 = fflt(0x8000);
    v24 = fadd(0x3F000000u, v23);
    v25 = ffix(v24);
    v26 = ffix(v22);
    Function_2017350((uint *)(v1 + 12), v40 + v25, v41 + v26, v42 - 0x8000);
    v27 = fflt(180224);
    v28 = fadd(0x3F000000u, v27);
    v29 = fflt(0x2000);
    v30 = fadd(0x3F000000u, v29);
    v31 = ffix(v30);
    v32 = ffix(v28);
    Function_2017350((uint *)(v1 + 132), v40 + v31, v41 + v32, v42 - 0x8000);
    v33 = fflt(180224);
    v34 = fadd(0x3F000000u, v33);
    v35 = fflt(57344);
    v36 = fadd(0x3F000000u, v35);
    v37 = ffix(v36);
    v38 = ffix(v34);
    result = Function_2017350((uint *)(v1 + 252), v40 + v37, v41 + v38, v42 - 0x8000);
  }
  return result;
}

//----- (0226B714) --------------------------------------------------------
int __fastcall Function_226b714(int a1, int a2, int a3, int a4)
{
  if ( a4 == *(uchar *)(a2 + 2400 + a3) )
    return 0;
  *(uchar *)(a2 + 2400 + a3) = a4;
  *(uchar *)(a2 + a3 + 2396) = 0;
  Function_2269a90(a1, a2, a3, 0, a4 << 13);
  return 1;
}

//----- (0226B744) --------------------------------------------------------
int __fastcall Function_226b744(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;

  v3 = a2;
  v4 = a3;
  v5 = *(uchar *)(a2 + a3 + 2400);
  v6 = a2 + 2396;
  v8 = a1;
  if ( !*(uchar *)(a2 + 2396 + a3) )
  {
    v9 = Function_2269ae8(a1, a2, a3, 0);
    if ( v9 == v5 << 13 )
    {
      Function_2269a90(v8, v3, v4, 0, (v5 << 13) + 4096);
    }
    else if ( v5 == 4 )
    {
      Function_2017348(v3 + 12 + 120 * v4, 0);
      Function_2269a90(v8, v3, v4, 0, v9);
    }
    else
    {
      Function_2269a90(v8, v3, v4, 0, v5 << 13);
    }
    *(uchar *)(v6 + v4) = 8;
  }
  result = *(uchar *)(v6 + v4) - 1;
  *(uchar *)(v6 + v4) = result;
  return result;
}

//----- (0226B7B0) --------------------------------------------------------
int __fastcall Function_226b7b0(int a1, int a2, uint a3)
{
  int v3;
  int *v4;
  int v5;
  int result;
  int v7;
  uchar *v8;
  uint v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char v21;

  v7 = a1;
  v8 = (uchar *)a2;
  v9 = a3;
  Function_225d054(*(uint *)(a2 + 8));
  v11 = 0;
  if ( v9 )
  {
    v10 = 0;
    do
    {
      v3 = v11 + 13;
      if ( v11 + 13 > 0xF )
        v3 = 15;
      v4 = &dword_226E3A0;
      v14 = dword_226E370;
      v12 = 4 * v3;
      v13 = (int)(v8 + 12);
      v5 = 0;
      do
      {
        Function_2269828(v7, (int)v8, v5 + v10, (uchar *)&byte_226E5A4[v12]);
        VEC_Add(&v21, v14, &v18);
        VEC_Add(&v18, v4, &v15);
        Function_2017350((uint *)(v13 + 120 * (v5 + v10)), v18, v19, v20);
        Function_2017348(v13 + 120 * (v5 + v10), 0);
        v8[v5 + 2392 + v10] = 0;
        Function_22692b4(&v8[40 * (v5++ + v10) + 2408], v18, v15, v19, v16, v20, v17, 14);
        v4 += 3;
        v14 += 3;
      }
      while ( v5 < 4 );
      v10 += 4;
      ++v11;
    }
    while ( v11 < v9 );
  }
  v8[2390] = v9;
  result = 0;
  v8[2389] = 0;
  v8[2388] = 0;
  v8[2391] = 0;
  return result;
}

//----- (0226B8C4) --------------------------------------------------------
int __fastcall Function_226b8c4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a3;
  v5 = a2;
  v6 = a2 + 2392;
  v7 = a1;
  ++*(uchar *)(v6 + v4);
  v8 = 40 * a3;
  v9 = Function_22692dc((int *)(v5 + 2408 + 40 * a3), *(char *)(v6 + a3));
  Function_2269488((uint *)(v5 + 2408 + v8), &v11, &v12, &v13);
  Function_2017350((uint *)(v5 + 12 + 120 * v4), v11, v12, v13);
  Function_22699bc(v7);
  return v9;
}

//----- (0226B92C) --------------------------------------------------------
uint __fastcall Function_226b92c(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  uchar *v5;
  uint *v6;
  uint result;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;

  v8 = a1;
  v3 = a2;
  v4 = 0;
  v9 = a3;
  if ( a3 )
  {
    v5 = (uchar *)byte_226E5A4;
    v6 = (uint *)(a2 + 12);
    do
    {
      Function_2269828(v8, v3, v4, v5);
      Function_225d054(*(uint *)(v3 + 8));
      v11 += 0x8000;
      v12 += 24576;
      Function_2017350(v6, v10, v11, v12);
      Function_2017348((int)v6, 0);
      ++v4;
      v5 += 4;
      v6 += 30;
    }
    while ( v4 < v9 );
  }
  result = v9;
  *(uchar *)(v3 + 2388) = v9;
  return result;
}

//----- (0226B998) --------------------------------------------------------
BOOL __fastcall Function_226b998(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint v5;
  int *v6;
  short v7;
  int *v8;
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
  int v20;
  ushort v21;
  ushort v22;

  v20 = a1;
  v3 = a2;
  v4 = a3;
  v5 = s32_div_f(12 * *(short *)(a2 + 2), 48);
  if ( v5 != *(uint *)(v3 + 2388) )
  {
    *(uint *)(v3 + 2388) = v5;
    if ( v5 )
    {
      v6 = &dword_226E510[12 * v4];
      v7 = HIWORD(v6[v5]);
      Function_2017348(v3 + 12 + 120 * LOWORD(v6[v5]), 0);
    }
    v8 = &dword_226E514[12 * v4 + v5];
    v21 = *(ushort *)v8;
    v22 = *((ushort *)v8 + 1);
    if ( v22 )
    {
      if ( v22 )
      {
        v9 = v22 << 12;
        v10 = fflt(v22 << 12);
        v11 = fadd(0x3F000000u, v10);
      }
      else
      {
        v9 = 0;
        v12 = fflt(0);
        v11 = fsub(v12, 1056964608);
      }
      v13 = ffix(v11);
      Function_2269a90(v20, v3, v21, 0, v13);
      if ( v22 )
      {
        v14 = fflt(v9);
        v15 = fadd(0x3F000000u, v14);
      }
      else
      {
        v16 = fflt(v9);
        v15 = fsub(v16, 1056964608);
      }
      v17 = ffix(v15);
      Function_2269a90(v20, v3, v21, 1, v17);
      Function_2017348(v3 + 12 + 120 * v21, 1);
    }
    else
    {
      Function_2017348(v3 + 12 + 120 * v21, 0);
    }
  }
  v18 = *(short *)(v3 + 2);
  if ( v18 < 48 )
    *(ushort *)(v3 + 2) = v18 + 1;
  return *(short *)(v3 + 2) >= 48;
}

//----- (0226BAC8) --------------------------------------------------------
uint __fastcall Function_226bac8(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  uint *v5;
  uint result;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;

  v7 = a1;
  v3 = a2;
  v4 = 0;
  v8 = a3;
  if ( a3 )
  {
    v5 = (uint *)(a2 + 12);
    do
    {
      Function_2269828(v7, v3, v4, (uchar *)&byte_226E5A4[4 * (v4 + 6)]);
      Function_225d054(*(uint *)(v3 + 8));
      v10 += 0x8000;
      Function_2017350(v5, v9, v10, v11);
      Function_2017348((int)v5, 0);
      ++v4;
      v5 += 30;
    }
    while ( v4 < v8 );
  }
  *(ushort *)(v3 + 2388) = 255;
  result = v8;
  *(ushort *)(v3 + 2390) = v8;
  return result;
}

//----- (0226BB34) --------------------------------------------------------
int __fastcall Function_226bb34(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v5 = a1;
  v6 = a2;
  Function_225d054(*(uint *)(a2 + 8));
  v2 = 0;
  v12 = v11 - 40960;
  v8 = v7 - 0x4000;
  v10 = v9 + 0x10000;
  v3 = 0;
  do
  {
    Function_2269828(v5, v6, v2 + 16, (uchar *)&byte_226E5A4[4 * (v2 + 37)]);
    Function_2017350((uint *)(v6 + 12 + 120 * (v2 + 16)), v8 + v3, v10, v12);
    result = 98304;
    ++v2;
    v3 += 98304;
  }
  while ( v2 < 2 );
  return result;
}

//----- (0226BBA8) --------------------------------------------------------
int __fastcall Function_226bba8(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  *(ushort *)(a2 + 3340) = 1;
  v2 = 0;
  *(ushort *)(a2 + 3342) = 0;
  v3 = a2 + 12;
  do
    result = Function_2017348(v3 + 120 * (v2++ + 16), 1);
  while ( v2 < 2 );
  return result;
}

//----- (0226BBDC) --------------------------------------------------------
int __fastcall Function_226bbdc(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a2;
  v3 = a1;
  result = *(ushort *)(a2 + 3340);
  if ( *(ushort *)(a2 + 3340) )
  {
    if ( *(ushort *)(a2 + 3342) >= 0xDu )
      *(ushort *)(a2 + 3340) = 0;
    else
      ++*(ushort *)(a2 + 3342);
    v5 = 0;
    do
    {
      if ( *(ushort *)(v2 + 3342) >= 0xDu )
        result = Function_2017348(v2 + 12 + 120 * (v5 + 16), 0);
      else
        result = Function_22699bc(v3);
      ++v5;
    }
    while ( v5 < 2 );
  }
  return result;
}

//----- (0226BC40) --------------------------------------------------------
int __fastcall Function_226bc40(int a1, int a2, short a3, short a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;

  v6 = a1;
  v7 = 2;
  v8 = 1;
  *(uint *)(a1 + 944) = a2;
  *(ushort *)(a1 + 948) = a3;
  *(ushort *)(a1 + 950) = a4;
  v12 = 0;
  v11 = 3;
  v10 = 0;
  do
  {
    Function_226bd64(
      v6,
      a6 + 12 + 120 * v10,
      a6 + 12 + 120 * v8,
      a6 + 12 + 120 * v7,
      a6 + 12 + 120 * v11,
      *(uint *)(a6 + 8),
      a5);
    v7 += 4;
    v11 += 4;
    v8 += 4;
    v10 += 4;
    v6 += 236;
    result = v12 + 1;
    v12 = result;
  }
  while ( result < 4 );
  return result;
}

//----- (0226BCC0) --------------------------------------------------------
int __fastcall Function_226bcc0(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint v9;
  int v10;
  int v11;
  short v12;

  v2 = a1;
  v10 = 0;
  v11 = 0;
  v9 = a2;
  if ( (int)*(ushort *)(a1 + 948) > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *(uint *)(v2 + 944);
      v12 = *(ushort *)(v4 + v3 + 2);
      if ( *(ushort *)(v4 + v3) == v9 )
      {
        if ( (uchar)v12 >= 4u )
          ErrorHandler();
        if ( HIBYTE(v12) > 4u )
          ErrorHandler();
        Function_226bda0(v2 + 236 * (uchar)v12, HIBYTE(v12));
        v10 = 1;
      }
      v3 += 4;
      ++v11;
    }
    while ( v11 < *(ushort *)(v2 + 948) );
  }
  v5 = 1;
  v6 = 0;
  v7 = v2;
  do
  {
    if ( !Function_226bde8(v7) )
      v5 = 0;
    ++v6;
    v7 += 236;
  }
  while ( v6 < 4 );
  if ( *(ushort *)(v2 + 950) <= v9 && v5 == 1 )
    v10 = 2;
  return v10;
}

//----- (0226BD64) --------------------------------------------------------
uint __fastcall Function_226bd64(int a1, int a2, int a3, int a4, int a5, int a6, uint a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  uint result;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  if ( a7 >= 3 )
    ErrorHandler();
  *(uint *)(v7 + 216) = v8;
  *(uint *)(v7 + 220) = v9;
  *(uint *)(v7 + 224) = v10;
  *(uint *)(v7 + 228) = a5;
  *(uint *)(v7 + 232) = a6;
  result = a7;
  *(ushort *)(v7 + 2) = a7;
  return result;
}

//----- (0226BDA0) --------------------------------------------------------
int __fastcall Function_226bda0(int a1, uint a2)
{
  int v2;
  uint v3;
  uint v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  if ( a2 )
  {
    v5 = a1;
    do
    {
      Function_2017348(*(uint *)(v5 + 216), 1);
      ++v4;
      v5 += 4;
    }
    while ( v4 < v3 );
  }
  *(ushort *)v2 = 0;
  *(uchar *)(v2 + 6) = 1;
  *(ushort *)(v2 + 4) = v3;
  return ((int (__fastcall *)(int, uint))*(&off_226E364 + *(ushort *)(v2 + 2)))(v2, *(uint *)(v2 + 232));
}

//----- (0226BDE8) --------------------------------------------------------
int __fastcall Function_226bde8(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  if ( !*(uchar *)(a1 + 6) )
    return 1;
  v3 = 0;
  v5 = ((int (*)(void))*(&off_226E31C + *(ushort *)(a1 + 2)))();
  ++*(ushort *)v1;
  if ( v5 == 1 )
  {
    if ( (int)*(ushort *)(v1 + 4) > 0 )
    {
      v4 = v1;
      do
      {
        Function_2017348(*(uint *)(v4 + 216), 0);
        ++v3;
        v4 += 4;
      }
      while ( v3 < *(ushort *)(v1 + 4) );
    }
    *(uchar *)(v1 + 6) = 0;
  }
  return v5;
}

//----- (0226BE3C) --------------------------------------------------------
int __fastcall Function_226be3c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  ushort *v9;
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v7 = a1;
  Function_225d054(a2);
  v13 = v12 + 0x8000;
  v15 = v14 + 0x10000;
  v5 = 0;
  v17 = v16 - 0x8000;
  result = *(ushort *)(v7 + 4);
  if ( result > 0 )
  {
    v10 = (uint *)(v7 + 8);
    v9 = (ushort *)(v7 + 168);
    LOBYTE(result) = v7;
    v8 = v7;
    do
    {
      switch ( (uchar)result )
      {
        case 0:
          v4 = v13 - 49152;
          v3 = v15 + 0x10000;
          v2 = v17;
          v11 = 0;
          break;
        case 1:
          v4 = v13 + 49152;
          v3 = v15 + 0x10000;
          v2 = v17;
          v11 = 0x7FFF;
          break;
        case 2:
          v4 = v13 - 0x8000;
          v3 = v15 + 0x10000;
          v2 = v17 - 24576;
          v11 = 0x7FFF;
          break;
        case 3:
          v4 = v13 + 0x8000;
          v3 = v15 + 0x10000;
          v2 = v17 - 24576;
          v11 = 0;
          break;
        default:
          break;
      }
      Function_22692b4(v10, v13, v4, v15, v3, v17, v2, 18);
      Function_226949c(v9, v11, 3276, 24576);
      Function_2017350(*(uint **)(v8 + 216), v13, v15, v17);
      ++v5;
      v10 += 10;
      v9 += 6;
      v8 += 4;
      result = *(ushort *)(v7 + 4);
    }
    while ( v5 < result );
  }
  return result;
}

//----- (0226BF5C) --------------------------------------------------------
int __fastcall Function_226bf5c(short *a1, int a2, int a3, int a4)
{
  int *v4;
  short *v5;
  int v6;
  uint *v7;
  short *v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v9 = a1;
  v12 = 0;
  if ( (int)(ushort)a1[2] > 0 )
  {
    v4 = (int *)(a1 + 4);
    v5 = a1;
    v10 = (ushort *)(a1 + 84);
    v6 = (int)(a1 + 84);
    v7 = a1 + 4;
    do
    {
      Function_22694d0(v10);
      v11 = Function_22692dc(v4, *v9);
      Function_2269508(v6, &v13);
      Function_2269488(v7, &v14, &v15, &v16);
      v14 += v13;
      Function_2017350(*((uint **)v5 + 54), v14, v15, v16);
      v4 += 10;
      v10 += 6;
      v6 += 12;
      ++v12;
      v7 += 10;
      v5 += 2;
    }
    while ( v12 < (ushort)v9[2] );
  }
  return v11;
}

//----- (0226BFE4) --------------------------------------------------------
int __fastcall Function_226bfe4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  char v7;
  int v9;
  ushort *v10;
  uint *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v9 = a1;
  Function_225d054(a2);
  v13 = v12 + 0x8000;
  v5 = 0;
  v15 = v14 + 0x8000;
  v17 = v16 - 0x8000;
  v6 = *(ushort *)(v9 + 4);
  if ( v6 > 0 )
  {
    v11 = (uint *)(v9 + 8);
    v7 = v9 - 88;
    v10 = (ushort *)(v9 + 168);
    do
    {
      switch ( v7 )
      {
        case 0:
          v4 = v13 - 0x10000;
          v3 = v15;
          v2 = v17 + 0x10000;
          break;
        case 1:
          v4 = v13 + 0x10000;
          v3 = v15;
          v2 = v17 + 0x10000;
          break;
        case 2:
          if ( v6 == 3 )
          {
            v4 = v13;
            v3 = v15;
            v2 = v17 - 0x20000;
          }
          else
          {
            v4 = v13 - 0x10000;
            v3 = v15;
            v2 = v17 - 0x10000;
          }
          break;
        case 3:
          v4 = v13 + 0x10000;
          v3 = v15;
          v2 = v17 - 0x10000;
          break;
        default:
          break;
      }
      Function_22692b4(v11, v13, v4, v15, v3, v17, v2, 19);
      Function_226949c(v10, 5461, 1820, 0x20000);
      ++v5;
      v11 += 10;
      v10 += 6;
      v6 = *(ushort *)(v9 + 4);
    }
    while ( v5 < v6 );
  }
  return Function_226c0d8(v9);
}

//----- (0226C0D8) --------------------------------------------------------
int __fastcall Function_226c0d8(short *a1)
{
  short *v1;
  ushort *v2;
  uint *v3;
  short *v4;
  int result;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  v8 = 0;
  if ( (int)(ushort)a1[2] > 0 )
  {
    v2 = (ushort *)(a1 + 84);
    v7 = (int *)(a1 + 4);
    v6 = (int)(a1 + 84);
    v3 = a1 + 4;
    v4 = a1;
    do
    {
      if ( *v1 == 14 )
        Function_226949c(v2, 0, 3640, 49152);
      else
        Function_22694d0(v2);
      Function_22692dc(v7, *v1);
      Function_2269508(v6, &v9);
      Function_2269488(v3, &v10, &v11, &v12);
      v11 += v9;
      Function_2017350(*((uint **)v4 + 54), v10, v11, v12);
      v7 += 10;
      v2 += 6;
      v6 += 12;
      v3 += 10;
      v4 += 2;
      ++v8;
    }
    while ( v8 < (ushort)v1[2] );
  }
  result = 0;
  if ( *v1 >= 22 )
    result = 1;
  return result;
}

//----- (0226C17C) --------------------------------------------------------
int __fastcall Function_226c17c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  Function_225d054(a2);
  v5 += 0x8000;
  v6 += 81920;
  v3 = 0;
  v7 -= 0x8000;
  result = *(ushort *)(v2 + 4);
  if ( result > 0 )
  {
    do
    {
      Function_226c2a4(v2, v3, &v5, 53248, 20480, 28672, 57344, 8, v5, v6, v7);
      result = *(ushort *)(v2 + 4);
      ++v3;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (0226C1DC) --------------------------------------------------------
int __fastcall Function_226c1dc(short *a1)
{
  short *v1;
  int v2;
  uint *v3;
  short *v4;
  int v5;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  v2 = 0;
  if ( (int)(ushort)a1[2] > 0 )
  {
    v3 = a1 + 4;
    v7 = (int *)(a1 + 4);
    v4 = a1;
    do
    {
      v8 = Function_22692dc(v7, *v1);
      Function_2269488(v3, &v9, &v10, &v11);
      Function_2017350(*((uint **)v4 + 54), v9, v10, v11);
      if ( v8 == 1 )
      {
        if ( *((uchar *)v1 + 7) )
          Function_226c2a4(v1, v2, &v9, 40960, 20480, 24576, 40960, 4, v7, 1, v9);
        else
          Function_226c2a4(v1, v2, &v9, -12288, 0x4000, -12288, 12288, 3, v7, 1, v9);
      }
      ++v2;
      v7 += 10;
      v3 += 10;
      v4 += 2;
    }
    while ( v2 < (ushort)v1[2] );
  }
  if ( v8 == 1 )
  {
    v5 = *((uchar *)v1 + 7) + 1;
    if ( v5 >= 3 )
      return 1;
    *((uchar *)v1 + 7) = v5;
    *v1 = 0;
  }
  return 0;
}

//----- (0226C2A4) --------------------------------------------------------
uint *__fastcall Function_226c2a4(int a1, int a2, int *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;

  v8 = a2;
  v9 = a1;
  v10 = a3;
  switch ( (uchar)a4 )
  {
    case 0:
      v11 = a3[1];
      a3 = (int *)(*a3 - a4);
      a1 = v11 + a5;
      a2 = v10[2];
      break;
    case 1:
      v12 = a3[1];
      a3 = (int *)(*a3 + a4);
      a1 = v12 + a5;
      a2 = v10[2];
      break;
    case 2:
      a3 = (int *)(*a3 - a6);
      a1 = v10[1] + a7;
      a2 = v10[2];
      break;
    case 3:
      a3 = (int *)(*a3 + a6);
      a1 = v10[1] + a7;
      a2 = v10[2];
      break;
    default:
      break;
  }
  Function_22692b4((uint *)(v9 + 8 + 40 * v8), *v10, (int)a3, v10[1], a1, v10[2], a2, a8);
  return Function_2017350(*(uint **)(v9 + 4 * v8 + 216), *v10, v10[1], v10[2]);
}

//----- (0226C338) --------------------------------------------------------
int *__fastcall Function_226c338(uint a1, int a2, int a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;
  int v8;
  int *v9;

  v3 = a2;
  v4 = a3;
  v5 = (int *)malloc(a1, 96);
  Call_FillMemWithValue(v5, 0, 0x60u);
  Function_226c568(v5, (char *)dword_226E678 + 10 * v3);
  Function_226c58c(v5, (char *)dword_226E670 + 2 * v4);
  v6 = 0;
  v7 = v5;
  do
  {
    ++v6;
    v7[18] = 60;
    ++v7;
  }
  while ( v6 < 2 );
  v8 = 0;
  v9 = v5;
  do
  {
    ++v8;
    v9[20] = 60;
    ++v9;
  }
  while ( v8 < 4 );
  Function_226c598(v5, v9);
  return v5;
}

//----- (0226C39C) --------------------------------------------------------
uint __fastcall Function_226c39c(int a1)
{
  return free(a1);
}

//----- (0226C3A4) --------------------------------------------------------
int __fastcall Function_226c3a4(int a1)
{
  int v1;
  int result;
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

  v13 = a1;
  v1 = a1;
  result = 0;
  v3 = 0;
  v4 = v1 + 48;
  v5 = v1 + 24;
  do
  {
    v6 = *(uint *)(v1 + 72) + 1;
    if ( v6 <= 60 )
    {
      *(uint *)(v1 + 72) = v6;
      Function_226c50c(v5, v4, v1, *(uint *)(v1 + 72), 60);
      result = 1;
    }
    ++v3;
    v1 += 4;
    v4 += 4;
    v5 += 4;
  }
  while ( v3 < 2 );
  v7 = v13;
  v14 = 0;
  v8 = v13 + 8;
  v9 = v13 + 56;
  v10 = v13 + 32;
  do
  {
    v11 = *(uint *)(v7 + 80) + 1;
    if ( v11 <= 60 )
    {
      *(uint *)(v7 + 80) = v11;
      Function_226c50c(v10, v9, v8, *(uint *)(v7 + 80), 60);
      result = 1;
    }
    v7 += 4;
    v12 = v14 + 1;
    v8 += 4;
    v9 += 4;
    v10 += 4;
    v14 = v12;
  }
  while ( v12 < 4 );
  if ( result )
    result = Function_226c598(v13, v12);
  return result;
}

//----- (0226C430) --------------------------------------------------------
int __fastcall Function_226c430(int a1, int a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a1;
  *(uchar *)(a1 + 24) = *(uchar *)a1;
  *(uchar *)(a1 + 25) = *(uchar *)(a1 + 1);
  *(uchar *)(a1 + 26) = *(uchar *)(a1 + 2);
  *(uchar *)(a1 + 27) = *(uchar *)(a1 + 3);
  *(uint *)(a1 + 72) = 0;
  v3 = (char *)dword_226E678 + 10 * a2;
  Function_226c4e8(a1 + 48, (char *)dword_226E678 + 10 * a2);
  v4 = (int)(v3 + 2);
  v5 = 0;
  v6 = v2 + 56;
  do
  {
    *(uchar *)(v2 + 32) = *(uchar *)(v2 + 8);
    *(uchar *)(v2 + 33) = *(uchar *)(v2 + 9);
    *(uchar *)(v2 + 34) = *(uchar *)(v2 + 10);
    *(uchar *)(v2 + 35) = *(uchar *)(v2 + 11);
    *(uint *)(v2 + 80) = 0;
    result = Function_226c4e8(v6, v4);
    ++v5;
    v2 += 4;
    v4 += 2;
    v6 += 4;
  }
  while ( v5 < 4 );
  return result;
}

//----- (0226C4A0) --------------------------------------------------------
int __fastcall Function_226c4a0(int a1, int a2)
{
  *(uchar *)(a1 + 28) = *(uchar *)(a1 + 4);
  *(uchar *)(a1 + 29) = *(uchar *)(a1 + 5);
  *(uchar *)(a1 + 30) = *(uchar *)(a1 + 6);
  *(uchar *)(a1 + 31) = *(uchar *)(a1 + 7);
  *(uint *)(a1 + 76) = 0;
  return Function_226c4e8(a1 + 52, (char *)dword_226E670 + 2 * a2);
}

//----- (0226C4C8) --------------------------------------------------------
void Function_226c4c8()
{
  ;
}

//----- (0226C4CC) --------------------------------------------------------
int __fastcall Function_226c4cc(char *a1, ushort *a2)
{
  int result;

  result = 32 * a1[1] | *a1 | (a1[2] << 10);
  *a2 = result;
  return result;
}

//----- (0226C4E8) --------------------------------------------------------
uchar *__fastcall Function_226c4e8(uchar *result, ushort *a2)
{
  *result = *a2 & 0x1F;
  result[1] = (*a2 & 0x3E0) >> 5;
  result[2] = (*a2 & 0x7C00) >> 10;
  return result;
}

//----- (0226C50C) --------------------------------------------------------
uint __fastcall Function_226c50c(char *a1, char *a2, uchar *a3, int a4, int a5)
{
  char *v5;
  uchar *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint result;

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = a2[1] - a1[1];
  v9 = a2[2] - a1[2];
  v10 = *a1;
  *a3 = v10 + s32_div_f((*a2 - v10) * a4, a5);
  v6[1] = v5[1] + s32_div_f(v8 * v7, a5);
  result = v5[2] + s32_div_f(v9 * v7, a5);
  v6[2] = result;
  return result;
}

//----- (0226C568) --------------------------------------------------------
uchar *__fastcall Function_226c568(uchar *a1, ushort *a2)
{
  uchar *v2;
  ushort *v3;
  int v4;
  ushort *v5;
  uchar *v6;
  uchar *result;

  v2 = a1;
  v3 = a2;
  Function_226c4e8(a1, a2);
  v4 = 0;
  v5 = v3 + 1;
  v6 = v2 + 8;
  do
  {
    result = Function_226c4e8(v6, v5);
    ++v4;
    ++v5;
    v6 += 4;
  }
  while ( v4 < 4 );
  return result;
}

//----- (0226C58C) --------------------------------------------------------
uchar *__fastcall Function_226c58c(int a1, ushort *a2)
{
  return Function_226c4e8((uchar *)(a1 + 4), a2);
}

//----- (0226C598) --------------------------------------------------------
int *__fastcall Function_226c598(char *a1, int a2, int a3, int a4)
{
  int v4;
  char *v5;
  char *v7;
  ushort v8[2];
  ushort _6[2];
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v7 = a1;
  v4 = 0;
  v5 = a1;
  do
  {
    Function_226c4cc(v5, _6);
    Function_20af558(v4++, _6[0]);
    v5 += 4;
  }
  while ( v4 < 2 );
  Function_226c4cc(v7 + 8, _6);
  Function_226c4cc(v7 + 12, v8);
  Function_20af56c(_6[0], v8[0], 0);
  Function_226c4cc(v7 + 16, _6);
  Function_226c4cc(v7 + 20, v8);
  return Function_20af590(_6[0], v8[0], 0);
}

//----- (0226C60C) --------------------------------------------------------
int *__fastcall Function_226c60c(uint a1, int a2)
{
  int v2;
  uint v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;

  v2 = a2;
  v3 = a1;
  v4 = (int *)malloc(a1, 28);
  v5 = v4;
  v6 = 28;
  do
  {
    *(uchar *)v5 = 0;
    v5 = (int *)((char *)v5 + 1);
    --v6;
  }
  while ( v6 );
  *v4 = v2;
  v4[1] = Function_225dee8(v2);
  v4[2] = Function_225def8(v2);
  v4[3] = Function_225def0(v2);
  v7 = ((int (__fastcall *)(int))dword_222E1B8[0])(v4[1]);
  v8 = Function_226c81c(v7);
  v9 = ((int (__fastcall *)(int))dword_222E1D0[0])(v4[1]);
  v10 = Function_226c848(v9);
  v11 = ((int (__fastcall *)(int))dword_222E1E8[0])(v4[1]);
  Function_226c87c(v11);
  v4[4] = (int)Function_226c338(v3, v8, v10);
  v4[5] = Function_226ce54(v2, v3);
  v4[6] = Function_226c8b4(v4[1], v4[2], v3);
  Function_225caec(v4[3], v8);
  v12 = ((int (__fastcall *)(int))dword_222E158[0])(v4[1]);
  ((void (__fastcall *)(int))dword_222E120[0])(v4[1]);
  v16 = ((int (__fastcall *)(int))dword_222E170[0])(v4[1]);
  v13 = ((int (__fastcall *)(int))dword_222E19C[0])(v4[1]);
  v14 = ((int (__fastcall *)(int))dword_222E12C[0])(v4[1]);
  ((void (__fastcall *)(int))dword_222E190[0])(v4[1]);
  if ( v12 == 2 )
    Function_226260c(v4[2]);
  if ( v12 != 1 && !v12 && v13 == 1 )
    Function_2262658(v4[2]);
  if ( v16 == 1 )
    Function_226246c(v4[2]);
  if ( v14 == 1 )
    Function_226c8a8(v4);
  return v4;
}

//----- (0226C6F8) --------------------------------------------------------
uint __fastcall Function_226c6f8(int a1)
{
  int v1;

  v1 = a1;
  Function_226c914(*(uint *)(a1 + 24));
  Function_226cf38(*(uint *)(v1 + 20));
  Function_226c39c(*(uint *)(v1 + 16));
  return free(v1);
}

//----- (0226C718) --------------------------------------------------------
int __fastcall Function_226c718(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  if ( ((int (__fastcall *)(uint, int))dword_222E084[0])(a1[1], 1) )
  {
    v2 = ((int (__fastcall *)(uint))dword_222E1B8[0])(v1[1]);
    v3 = Function_226c81c(v2);
    Function_226c430(v1[4], v3);
    Function_225cb08(v1[3], v3);
  }
  if ( ((int (__fastcall *)(uint, int))dword_222E084[0])(v1[1], 2) )
  {
    v4 = ((int (__fastcall *)(uint))dword_222E1D0[0])(v1[1]);
    v5 = Function_226c848(v4);
    Function_226c4a0(v1[4], v5);
  }
  if ( ((int (__fastcall *)(uint, int))dword_222E084[0])(v1[1], 3) )
  {
    v6 = ((int (__fastcall *)(uint))dword_222E1E8[0])(v1[1]);
    Function_226c87c(v6);
    v7 = v1[4];
    Function_226c4c8();
  }
  if ( ((int (__fastcall *)(uint))dword_222E19C[0])(v1[1]) == 1
    && !((int (__fastcall *)(uint))dword_222E158[0])(v1[1])
    && !Function_226271c(v1[2]) )
  {
    Function_2262658(v1[2]);
  }
  if ( ((int (__fastcall *)(uint, int))dword_222E084[0])(v1[1], 5)
    && ((int (__fastcall *)(uint))dword_222E158[0])(v1[1]) == 1 )
  {
    Function_226260c(v1[2]);
    Function_2262658(v1[2]);
  }
  if ( ((int (__fastcall *)(uint, int))dword_222E084[0])(v1[1], 6)
    && ((int (__fastcall *)(uint))dword_222E170[0])(v1[1]) == 1 )
  {
    Function_226246c(v1[2]);
  }
  if ( ((int (__fastcall *)(uint))dword_222E12C[0])(v1[1]) == 1 )
  {
    Function_2262478(v1[2]);
    Function_226c8a8(v1);
  }
  Function_226c3a4(v1[4]);
  Function_226cf40(v1[5]);
  return Function_226c924(v1[6]);
}

//----- (0226C810) --------------------------------------------------------
int __fastcall Function_226c810(int a1)
{
  return Function_226cffc(*(uint *)(a1 + 20));
}

//----- (0226C81C) --------------------------------------------------------
int __fastcall Function_226c81c(int a1, char a2)
{
  int result;

  switch ( a2 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      result = a1 - 1;
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (0226C848) --------------------------------------------------------
int __fastcall Function_226c848(int a1, char a2)
{
  int result;

  switch ( a2 )
  {
    case 7:
    case 8:
    case 9:
    case 10:
      result = a1 - 7;
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (0226C87C) --------------------------------------------------------
int __fastcall Function_226c87c(int a1)
{
  int result;

  switch ( (uchar)a1 )
  {
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
      result = a1 - 11;
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (0226C8A8) --------------------------------------------------------
int Function_226c8a8()
{
  return Function_20af558(2, 0);
}

//----- (0226C8B4) --------------------------------------------------------
int __fastcall Function_226c8b4(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  int v5;
  uchar *v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = malloc(a3, 16);
  v6 = (uchar *)v5;
  v7 = 16;
  do
  {
    *v6++ = 0;
    --v7;
  }
  while ( v7 );
  *(uint *)v5 = v3;
  *(uint *)(v5 + 4) = v4;
  v8 = ((int (__fastcall *)(int))dword_222F104[0])(v3);
  *(ushort *)(v5 + 10) = ((int (__fastcall *)(int))dword_222E158[0])(v3);
  if ( *(ushort *)(v5 + 10) && v8 )
  {
    Function_226251c(v4, 1);
    Function_226cc3c(v5);
    v9 = ((int (__fastcall *)(int))dword_222F114[0])(v3);
    Function_226cb1c(v5, v8, v9);
  }
  return v5;
}

//----- (0226C914) --------------------------------------------------------
uint __fastcall Function_226c914(int a1)
{
  int v1;

  v1 = a1;
  Function_226cc58();
  return free(v1);
}

//----- (0226C924) --------------------------------------------------------
int __fastcall Function_226c924(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint))dword_222F104[0])(*a1);
  v3 = ((int (__fastcall *)(uint))dword_222F114[0])(*v1);
  v4 = ((int (__fastcall *)(uint))dword_222E158[0])(*v1);
  result = *((ushort *)v1 + 5);
  if ( result != v4 )
  {
    *((ushort *)v1 + 5) = v4;
    if ( v4 == 1 )
    {
      Function_226251c(v1[1], 1);
      Function_226cb1c(v1, v2, v3);
      result = Function_226cc3c(v1);
    }
  }
  if ( v4 )
  {
    if ( *((uchar *)v1 + 8) != v2 )
      Function_226cb1c(v1, v2, v3);
    result = Function_226c984(v1, v2, v3);
  }
  return result;
}

//----- (0226C984) --------------------------------------------------------
uint __fastcall Function_226c984(uint result, uint a2, int a3)
{
  uint v3;
  uint v4;
  int v5;

  v3 = a2;
  v4 = result;
  v5 = a3;
  if ( a2 >= 6 )
    result = ErrorHandler();
  if ( v3 < 6 )
    result = ((int (__fastcall *)(uint, int))*(&off_226E6E4 + v3))(v4, v5);
  return result;
}

//----- (0226C9AC) --------------------------------------------------------
void Function_226c9ac()
{
  ;
}

//----- (0226C9B0) --------------------------------------------------------
void Function_226c9b0()
{
  ;
}

//----- (0226C9B4) --------------------------------------------------------
int __fastcall Function_226c9b4(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  char *v7;
  uint v8;
  int v9;
  int *v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  result = u32_div_f(a2, 14);
  if ( !v6 )
  {
    v7 = &byte_226E74C;
    v8 = 0;
    do
    {
      v9 = 0;
      v10 = &dword_226E72C[2 * *(uint *)(v4 + 12)];
      if ( (v8 & 3) == *v10 )
      {
        v12 = 1;
        v9 = 1;
      }
      else if ( (v8 & 3) == v10[1] )
      {
        v12 = 0;
        v9 = 1;
      }
      if ( v9 == 1 )
      {
        if ( v8 >= 0x11 )
        {
          v11 = 0;
        }
        else
        {
          v11 = Function_2262754(*(uint *)(v4 + 4), (uchar)*v7, v12, 4096);
          if ( v11 != 1 )
            ErrorHandler();
        }
      }
      else
      {
        v11 = 1;
      }
      ++v7;
      ++v8;
    }
    while ( v11 == 1 );
    result = (*(uint *)(v4 + 12) + 1) & 3;
    *(uint *)(v4 + 12) = result;
  }
  return result;
}

//----- (0226CA38) --------------------------------------------------------
int __fastcall Function_226ca38(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  uint v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  uint v11;

  v2 = a1;
  result = u32_div_f(a2, 6);
  if ( !v4 )
  {
    v5 = *(uint *)(v2 + 12);
    v9 = *((uchar *)dword_226E6D4 + 2 * v5);
    Function_226cbb4(*((uchar *)dword_226E6D4 + 2 * v5 + 1), &v10);
    v6 = 0;
    if ( v11 )
    {
      do
      {
        if ( Function_2262754(*(uint *)(v2 + 4), *(uchar *)(v10 + v6), 0, 4096) != 1 )
          ErrorHandler();
        ++v6;
      }
      while ( v6 < v11 );
    }
    Function_226cbb4(v9, &v10);
    v7 = 0;
    if ( v11 )
    {
      do
      {
        if ( Function_2262754(*(uint *)(v2 + 4), *(uchar *)(v10 + v7), 1, 4096) != 1 )
          ErrorHandler();
        ++v7;
      }
      while ( v7 < v11 );
    }
    result = u32_div_f(*(uint *)(v2 + 12) + 1, 7);
    *(uint *)(v2 + 12) = v8;
  }
  return result;
}

//----- (0226CAD4) --------------------------------------------------------
uint __fastcall Function_226cad4(int a1, uint a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a1;
  result = *(uint *)(a1 + 12);
  if ( result < 3 )
  {
    v4 = 2 * result;
    result = dword_226E6FC[2 * result];
    if ( result < a2 )
    {
      Function_226278c(*(uint *)(v2 + 4), dword_226E700[v4]);
      Function_22625d8(*(uint *)(v2 + 4), dword_226E700[2 * *(uint *)(v2 + 12)]);
      Function_2005748(0x59Du);
      result = *(uint *)(v2 + 12) + 1;
      *(uint *)(v2 + 12) = result;
    }
  }
  return result;
}

//----- (0226CB1C) --------------------------------------------------------
uint __fastcall Function_226cb1c(uint result, uint a2, int a3)
{
  uint v3;
  uint v4;
  int v5;
  uchar *v6;

  v3 = a2;
  v4 = result;
  v5 = a3;
  if ( a2 >= 6 )
    result = ErrorHandler();
  if ( v3 < 6 )
  {
    v6 = (uchar *)(v4 + 12);
    *(uchar *)(v4 + 12) = 0;
    v6[1] = 0;
    v6[2] = 0;
    v6[3] = 0;
    result = ((int (__fastcall *)(uint, int))*(&off_226E714 + v3))(v4, v5);
    *(uchar *)(v4 + 8) = v3;
  }
  return result;
}

//----- (0226CB54) --------------------------------------------------------
int __fastcall Function_226cb54(int a1)
{
  return Function_2262724(*(uint *)(a1 + 4), 0, 4096);
}

//----- (0226CB64) --------------------------------------------------------
int __fastcall Function_226cb64(int a1)
{
  return Function_2262724(*(uint *)(a1 + 4), 1, 4096);
}

//----- (0226CB74) --------------------------------------------------------
int __fastcall Function_226cb74(int a1)
{
  return Function_2262724(*(uint *)(a1 + 4), 0, 4096);
}

//----- (0226CB84) --------------------------------------------------------
int __fastcall Function_226cb84(int a1)
{
  return Function_2262724(*(uint *)(a1 + 4), 0, 4096);
}

//----- (0226CB94) --------------------------------------------------------
int __fastcall Function_226cb94(int a1)
{
  int v1;

  v1 = a1;
  Function_226cc58();
  Function_2262724(*(uint *)(v1 + 4), 0, 4096);
  return Function_226251c(*(uint *)(v1 + 4), 0);
}

//----- (0226CBB4) --------------------------------------------------------
int *__fastcall Function_226cbb4(char a1, uint *a2)
{
  int *result;

  switch ( a1 )
  {
    case 0:
      a2[1] = 6;
      result = dword_226E6CC;
      *a2 = dword_226E6CC;
      break;
    case 1:
      a2[1] = 2;
      result = &dword_226E6C4;
      *a2 = &dword_226E6C4;
      break;
    case 2:
      a2[1] = 2;
      result = &dword_226E6BC;
      *a2 = &dword_226E6BC;
      break;
    case 3:
      a2[1] = 1;
      result = &dword_226E6B4;
      *a2 = &dword_226E6B4;
      break;
    case 4:
      a2[1] = 1;
      result = &dword_226E6B8;
      *a2 = &dword_226E6B8;
      break;
    case 5:
      a2[1] = 2;
      result = &dword_226E6C0;
      *a2 = &dword_226E6C0;
      break;
    case 6:
      a2[1] = 3;
      result = &dword_226E6C8;
      *a2 = &dword_226E6C8;
      break;
    default:
      result = (int *)ErrorHandler();
      break;
  }
  return result;
}

//----- (0226CC3C) --------------------------------------------------------
int __fastcall Function_226cc3c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uchar *)(a1 + 9);
  if ( !result )
  {
    Function_2005748(0x59Eu);
    result = 1;
    *(uchar *)(v1 + 9) = 1;
  }
  return result;
}

//----- (0226CC58) --------------------------------------------------------
int __fastcall Function_226cc58(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uchar *)(a1 + 9);
  if ( result )
  {
    Function_20057a4(1438, 0);
    result = 0;
    *(uchar *)(v1 + 9) = 0;
  }
  return result;
}

//----- (0226CC74) --------------------------------------------------------
int __fastcall Function_226cc74(int a1, int a2)
{
  int v2;
  ushort *v3;
  int *v4;
  uint *v5;
  uint v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  uint *v17;
  uint *v18;

  v2 = a2;
  v3 = (ushort *)a1;
  v4 = (int *)Function_2262e80(a1);
  v16 = Function_225dee8(v2);
  v17 = (uint *)Function_225def0(v2);
  v5 = (uint *)Function_225ccb0((int)v17);
  v18 = (uint *)Function_225ccac((int)v17);
  v6 = Function_2262e84((int)v3);
  if ( v6 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_226CCB8 + v6) + 36097210);
  switch ( (uchar)v6 )
  {
    case 0:
      v7 = (uint *)Function_2262e3c(v3, 4u);
      Function_2005748(0x5DCu);
      v8 = Function_225cd60(v18, 6);
      v9 = ((int (__fastcall *)(int))dword_222C0AC[0])(v8);
      Function_225cdec((int)v17, (int)v5, 0);
      ((void (__fastcall *)(uint *, uint))Function_225d030[0])(v5, 0);
      ((void (__fastcall *)(uint *, int))Function_225d060[0])(v5, v9);
      if ( ((int (__fastcall *)(int))dword_222E12C[0])(v16) )
      {
        v10 = Function_225e20c(v2, 1, 3);
        *v7 = 4;
        Function_225df8c(v2, v10);
        Function_2262e88((int)v3, 5);
      }
      else if ( ((int (__fastcall *)(int))dword_222E19C[0])(v16) == 1 )
      {
        v11 = Function_225e20c(v2, 1, 88);
        *v7 = 4;
        Function_225df8c(v2, v11);
        Function_2262e88((int)v3, 5);
      }
      else
      {
        if ( ((int (__fastcall *)(int))dword_222E0DC[0])(v16) == 1 )
        {
          v12 = Function_225e20c(v2, 1, 87);
          *v7 = 4;
        }
        else
        {
          v12 = Function_225e20c(v2, 1, 81);
          *v7 = 1;
        }
        Function_225df8c(v2, v12);
        Function_2262e88((int)v3, 5);
      }
      return 0;
    case 1:
      Function_225e164(v2);
      Function_2262e88((int)v3, 2);
      return 0;
    case 2:
      v13 = Function_225e1c4(v2);
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          Function_2262e88((int)v3, 4);
          Function_225e1f8(v2);
        }
      }
      else
      {
        Function_2262e88((int)v3, 3);
        Function_225e1f8(v2);
      }
      return 0;
    case 3:
      v14 = Function_225e20c(v2, 1, 85);
      *v4 = 4;
      Function_225df8c(v2, v14);
      Function_2262e88((int)v3, 5);
      return 0;
    case 4:
      Function_225dfec(v2);
      Function_225e1f8(v2);
      Function_225cdec((int)v17, (int)v18, 1);
      Function_2262e64((int)v3);
      ((void (__fastcall *)(uint *, int))Function_225d030[0])(v5, 1);
      Function_225cdac(v17, v5, 0, 1);
      return 1;
    case 5:
      if ( Function_225dfac(v2) == 1 )
        Function_2262e88((int)v3, *v4);
      break;
    default:
      ErrorHandler();
      break;
  }
  return 0;
}

//----- (0226CE54) --------------------------------------------------------
int *__fastcall Function_226ce54(int a1, uint a2, int a3, int a4)
{
  int v4;
  int *v5;
  char *v6;
  int v7;
  int *v8;
  int v9;
  ushort *v10;
  int v11;
  char v13;
  short v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = (int *)malloc(a2, 196);
  Call_FillMemWithValue(v5, 0, 0xC4u);
  *v5 = v4;
  v5[1] = Function_225dee8(v4);
  v5[2] = Function_225def8(v4);
  v5[3] = Function_225df00(v4);
  v5[47] = Function_225c8a8() + 6;
  v5[48] = -8 - v5[47];
  v6 = &byte_226E760;
  v5[47] <<= 16;
  v7 = 0;
  v5[48] <<= 16;
  v8 = v5;
  do
  {
    Function_225c8d8((uint *)v5[3], (uchar)*v6, &v14, &v13, 0);
    ++v7;
    ++v6;
    *((ushort *)v8 + 85) = 16 * v14;
    v10 = v8 + 43;
    ++v8;
    *v10 = 16 * *(ushort *)&v13;
  }
  while ( v7 < 3 );
  v11 = 0;
  do
  {
    Function_22622b0(v5[2], v11, v5[47], v9);
    if ( ((int (__fastcall *)(int, int))dword_222EB7C[0])(v5[1], v11) == 1 )
    {
      Function_226d020(v5, v11);
      Function_226d46c(v5, v11);
    }
    ++v11;
  }
  while ( v11 < 9 );
  return v5;
}

//----- (0226CF38) --------------------------------------------------------
uint __fastcall Function_226cf38(int a1)
{
  return free(a1);
}

//----- (0226CF40) --------------------------------------------------------
int __fastcall Function_226cf40(int a1)
{
  BOOL v1;
  int v2;
  int v3;
  int v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  uchar *v9;
  int v10;
  int result;
  int v12;
  int v13;

  v2 = a1;
  v3 = ((int (__fastcall *)(uint))dword_222E338[0])(*(uint *)(a1 + 4));
  v13 = ((int (__fastcall *)(uint, int))dword_222EBA4[0])(*(uint *)(v2 + 4), v3);
  if ( v13 == -1 )
  {
    v4 = 0;
  }
  else
  {
    ((void (*)(void))dword_222EC04[0])();
    v4 = 1;
  }
  v5 = 0;
  do
  {
    v6 = ((int (__fastcall *)(uint, int))dword_222EB7C[0])(*(uint *)(v2 + 4), v5) == 1;
    v7 = *(uint *)(v2 + 8);
    if ( v6 )
    {
      Function_22623c4(v7, v5, 1);
      Function_226d020(v2, v5);
      Function_226d46c(v2, v5);
      if ( v4 )
        v1 = v13 == v5;
      Function_226d0e8(v2, v5, v4, v1, v12);
    }
    else
    {
      Function_22623c4(v7, v5, 0);
    }
    ++v5;
  }
  while ( v5 < 9 );
  v8 = 0;
  v9 = (uchar *)v2;
  v10 = v2 + 44;
  do
  {
    v9[16] = Function_226241c(*(uint *)(v2 + 8), v8);
    v9[17] = Function_226d2d8(v10, *(uint *)(v2 + 8), v8);
    result = Function_2262444(*(uint *)(v2 + 8), v8);
    v9[18] = result;
    ++v8;
    v9 += 3;
    v10 += 14;
  }
  while ( v8 < 9 );
  return result;
}

//----- (0226CFFC) --------------------------------------------------------
int __fastcall Function_226cffc(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 9 )
    ErrorHandler();
  if ( v5 >= 3 )
    ErrorHandler();
  return *(uchar *)(v4 + 3 * v3 + v5 + 16);
}

//----- (0226D020) --------------------------------------------------------
uint *__fastcall Function_226d020(uint *a1, uint a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint v18;

  v2 = a1;
  v18 = a2;
  v3 = ((int (__fastcall *)(uint))dword_222EB8C[0])(a1[1]);
  v4 = ((int (__fastcall *)(uint))dword_222EB9C[0])(v2[1]);
  v5 = FX_Div(v2[48], 0x2000);
  if ( v4 <= 0 )
  {
    v8 = fflt(v4 << 12);
    v7 = fsub(v8, 1056964608);
  }
  else
  {
    v6 = fflt(v4 << 12);
    v7 = fadd(0x3F000000u, v6);
  }
  v9 = v7;
  if ( v3 <= 0 )
  {
    v12 = fflt(v3 << 12);
    v11 = fsub(v12, 1056964608);
  }
  else
  {
    v10 = fflt(v3 << 12);
    v11 = fadd(0x3F000000u, v10);
  }
  v13 = ffix(v11);
  v14 = (ll_mul(v13, v5) + 2048) >> 12;
  v15 = ffix(v9);
  v16 = FX_Div(v14, v15);
  return Function_22622b0(
           v2[2],
           v18,
           (ull)((((ll)v16 << 13) + 2048) >> 12) + v2[47],
           (((ll)v16 << 13) + 2048) >> 12);
}

//----- (0226D0E8) --------------------------------------------------------
int __fastcall Function_226d0e8(int a1, uint a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  ushort *v17;
  int v18;

  v5 = a1;
  v14 = a2;
  v15 = a3;
  v6 = a4;
  v7 = ((int (__fastcall *)(uint))dword_222EB38[0])(*(uint *)(a1 + 4));
  ((void (__fastcall *)(uint))dword_222EB28[0])(*(uint *)(v5 + 4));
  v8 = 0;
  v18 = 3 * v14;
  u32_div_f(v14, 3);
  v16 = v9;
  v17 = (ushort *)&dword_226E774[3 * v7];
  do
  {
    result = ((int (__fastcall *)(uint, int))dword_222EBE4[0])(*(uint *)(v5 + 4), v8 + v18);
    v11 = 0;
    if ( v6 == 1 && v8 == a5 )
      v11 = 1;
    if ( result == 1 )
    {
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          result = Function_226d2a0(v5 + 44 + 14 * v14, v16 == 2, *(uint *)(v5 + 8), v14);
          if ( result == 1 )
          {
            ((void (__fastcall *)(uint, int))dword_222EBF4[0])(*(uint *)(v5 + 4), v18 + 1);
            result = Function_226d24c(v15, v6, v11);
          }
        }
        else if ( v8 == 2 )
        {
          result = Function_226239c(*(uint *)(v5 + 8), v14);
          if ( result == 1 )
          {
            ((void (__fastcall *)(uint, int))dword_222EBF4[0])(*(uint *)(v5 + 4), v18 + 2);
            if ( v16 == 2 )
              v12 = v17[5];
            else
              v13 = v17[3];
            result = Function_226d24c(v15, v6, v11);
          }
        }
      }
      else
      {
        result = Function_2262374(*(uint *)(v5 + 8), v14);
        if ( result == 1 )
        {
          if ( v16 == 2 )
          {
            Function_226d27c(v15, v6, v11, v17[1]);
            if ( v17[4] != 65534 )
              Function_226d24c(v15, v6, v11);
          }
          else
          {
            Function_226d27c(v15, v6, v11, *v17);
            if ( v17[2] != 65534 )
              Function_226d24c(v15, v6, v11);
          }
          result = ((int (__fastcall *)(uint, int))dword_222EBF4[0])(*(uint *)(v5 + 4), v18);
        }
      }
    }
    ++v8;
  }
  while ( v8 < 3 );
  return result;
}

//----- (0226D24C) --------------------------------------------------------
int __fastcall Function_226d24c(int result, int a2, int a3, ushort a4)
{
  if ( !result )
    return Function_2005748(a4);
  if ( a2 )
  {
    if ( a3 )
      result = Function_2005770(a4, 5u);
    else
      result = Function_2005748(a4);
  }
  return result;
}

//----- (0226D27C) --------------------------------------------------------
int __fastcall Function_226d27c(int result, int a2, int a3, ushort a4)
{
  if ( !result )
    return Function_2005844(a4, 0);
  if ( a2 )
    result = Function_2005844(a4, 0);
  return result;
}

//----- (0226D2A0) --------------------------------------------------------
int __fastcall Function_226d2a0(ushort *a1, uint a2, int a3, int a4)
{
  uint v4;
  ushort *v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  if ( a2 >= 2 )
    ErrorHandler();
  if ( *v5 == 1 )
    return 0;
  v5[1] = v4;
  *v5 = 1;
  ((void (__fastcall *)(ushort *, int, int))*(&off_226E76C + v4))(v5, v6, v7);
  return 1;
}

//----- (0226D2D8) --------------------------------------------------------
int __fastcall Function_226d2d8(ushort *a1)
{
  uchar *v1;

  v1 = a1;
  if ( !*a1 )
    return 0;
  if ( ((int (*)(void))*(&off_226E764 + (ushort)a1[1]))() == 1 )
  {
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
    v1[12] = 0;
    v1[13] = 0;
  }
  return 1;
}

//----- (0226D31C) --------------------------------------------------------
int __fastcall Function_226d31c(ushort *a1)
{
  ushort *v1;
  int result;

  v1 = a1;
  a1[2] = 0;
  a1[3] = 8;
  a1[4] = Function_201d2a4(5u);
  v1[5] = 2;
  result = 4;
  v1[6] = 4;
  return result;
}

//----- (0226D33C) --------------------------------------------------------
int __fastcall Function_226d33c(ushort *a1)
{
  ushort *v1;
  int result;

  v1 = a1;
  a1[2] = 0;
  a1[3] = 16;
  a1[4] = Function_201d2a4(0xAu);
  v1[5] = 4;
  result = 2;
  v1[6] = 2;
  return result;
}

//----- (0226D35C) --------------------------------------------------------
int __fastcall Function_226d35c(short *a1, int a2, uint a3, int a4)
{
  short *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v20;
  uint v21;
  long long v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v26 = a4;
  v4 = a1;
  v5 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v20 = a2;
  v21 = a3;
  v6 = a1[2] + 1;
  if ( v6 >= a1[3] )
  {
    a1[2] = 0;
    if ( a1[6] - 1 <= 0 )
      v5 = 1;
    else
      --a1[6];
  }
  else
  {
    a1[2] = v6;
  }
  v7 = (ushort)s32_div_f(0xFFFF * a1[2], a1[3]);
  v8 = (ushort)v4[4];
  if ( v4[4] )
  {
    v9 = fflt(v8 << 12);
    v10 = fadd(0x3F000000u, v9);
  }
  else
  {
    v11 = fflt(v8 << 12);
    v10 = fsub(v11, 1056964608);
  }
  v12 = ffix(v10);
  v22 = SLOWORD(Unknown_20f983c[v7 >> 4]);
  v13 = 16 * (uint)((ll_mul(v22, v12) + 2048) >> 12) >> 16;
  v14 = v4[5];
  if ( v14 <= 0 )
  {
    v17 = fflt(v14 << 12);
    v16 = fsub(v17, 1056964608);
  }
  else
  {
    v15 = fflt(v14 << 12);
    v16 = fadd(0x3F000000u, v15);
  }
  v18 = ffix(v16);
  v24 = (ll_mul(v22, v18) + 2048) >> 12;
  Function_22623f0(v20, v21, v13);
  Function_22622ec(v20, v21, &v23);
  return v5;
}

//----- (0226D46C) --------------------------------------------------------
int __fastcall Function_226d46c(int a1, uint a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  uint v7;
  int v8;
  int v9;

  v2 = a1;
  v7 = a2;
  v3 = 0;
  v8 = 3 * a2;
  do
  {
    v4 = ((int (__fastcall *)(uint, int))dword_222EC30[0])(*(uint *)(v2 + 4), v3 + v8);
    result = Function_2262318(*(uint *)(v2 + 8), v7, v3, &v9);
    if ( v4 < 3 )
    {
      v6 = v2 + 4 * v4;
      do
      {
        result = v9;
        if ( (*(short *)(v6 + 170) + 16) << 12 > v9 )
          result = ((int (__fastcall *)(uint, int, int))dword_222EC20[0])(*(uint *)(v2 + 4), v3 + v8, v4);
        ++v4;
        v6 += 4;
      }
      while ( v4 < 3 );
    }
    ++v3;
  }
  while ( v3 < 3 );
  return result;
}

