//----- (02254DE0) --------------------------------------------------------
int **__fastcall Function_2254de0(int *a1, uint a2)
{
  uint v2;
  int *v3;
  int **v4;
  int *v5;

  v2 = a2;
  v3 = a1;
  v4 = (int **)malloc(a2, 8);
  v5 = (int *)malloc(v2, 8 * (uint)v3);
  *v4 = v5;
  Call_FillMemWithValue(v5, 0, 8 * (uint)v3);
  v4[1] = v3;
  return v4;
}

//----- (02254E0C) --------------------------------------------------------
uint __fastcall Function_2254e0c(int *a1)
{
  int v1;

  v1 = (int)a1;
  free(*a1);
  return free(v1);
}

//----- (02254E20) --------------------------------------------------------
uint *__fastcall Function_2254e20(uint *a1)
{
  uint *v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)Function_2254fe0(*a1);
  if ( !v2 )
    ErrorHandler();
  *v2 = v1[6];
  v2[1] = Function_225500c(v1);
  return v2;
}

//----- (02254E44) --------------------------------------------------------
BOOL __fastcall Function_2254e44(int a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  Function_2255040(a1, &v5);
  return Function_2022734((uchar *)&v5);
}

//----- (02254E54) --------------------------------------------------------
int __fastcall Function_2254e54(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;

  v4 = a1;
  v5 = (uint *)a2;
  v11 = (int *)a3;
  v6 = a4;
  if ( !Function_2254e44(a1, a2, a3, a4) )
    return 0;
  Function_2254f00(v4, &v13, &v12);
  *v5 = (ushort)word_21BF6D8 - v13;
  v8 = (ushort)word_21BF6DA - v12;
  v9 = v8 - 4;
  *v11 = v8;
  if ( !(__OFSUB__(v8 - 4, v8 + 4) ^ 1) )
    return 0;
  while ( 1 )
  {
    if ( v9 >= 0 )
    {
      v10 = *v5 - 4;
      if ( v10 < *v5 + 4 )
        break;
    }
LABEL_11:
    if ( ++v9 >= *v11 + 4 )
      return 0;
  }
  while ( v10 < 0 || Function_2255420(v6, v10, v9, 0) )
  {
    if ( ++v10 >= *v5 + 4 )
      goto LABEL_11;
  }
  return 1;
}

//----- (02254EDC) --------------------------------------------------------
BOOL __fastcall Function_2254edc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;

  v7 = a4;
  v4 = a2;
  v5 = a3;
  Function_2255040(a1, &v7);
  return Function_2022830((uchar *)&v7, v4, v5);
}

//----- (02254EF4) --------------------------------------------------------
ushort *__fastcall Function_2254ef4(int a1, short a2, short a3)
{
  return Function_2015254(*(ushort **)(a1 + 4), a2, a3);
}

//----- (02254F00) --------------------------------------------------------
int __fastcall Function_2254f00(int a1, uint *a2, uint *a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int result;
  short v8;
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = a3;
  v6 = Function_201525c(*(ushort **)(a1 + 4));
  v8 = HIWORD(v6);
  *v4 = (short)v6;
  result = v8;
  *v5 = v8;
  return result;
}

//----- (02254F30) --------------------------------------------------------
int __fastcall Function_2254f30(int a1, uint *a2, uint *a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int result;
  short v8;
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = a3;
  v6 = Function_2015280(*(uint *)(a1 + 4));
  v8 = HIWORD(v6);
  *v4 = (short)v6;
  result = v8;
  *v5 = v8;
  return result;
}

//----- (02254F60) --------------------------------------------------------
uint __fastcall Function_2254f60(int a1, int a2)
{
  return Function_2015240(*(uint *)(a1 + 4), a2);
}

//----- (02254F6C) --------------------------------------------------------
int __fastcall Function_2254f6c(int a1, int a2)
{
  return Function_201528c(*(uint *)(a1 + 4), a2);
}

//----- (02254F78) --------------------------------------------------------
int __fastcall Function_2254f78(int a1)
{
  return Function_2015290(*(uint *)(a1 + 4));
}

//----- (02254F84) --------------------------------------------------------
int __fastcall Function_2254f84(int a1, uint *a2, uint *a3, int a4)
{
  uint *v4;
  uint *v5;
  int result;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = a3;
  Function_2254f30(a1, &v8, &v7, a4);
  switch ( v8 )
  {
    case 16:
      *v4 = 0;
      break;
    case 32:
      *v4 = 10;
      break;
    case 64:
      *v4 = 20;
      break;
  }
  result = v7;
  switch ( v7 )
  {
    case 16:
      result = 0;
      *v5 = 0;
      break;
    case 32:
      result = 10;
      *v5 = 10;
      break;
    case 64:
      result = 20;
      *v5 = 20;
      break;
  }
  return result;
}

//----- (02254FE0) --------------------------------------------------------
int __fastcall Function_2254fe0(int *a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1[1];
  v2 = 0;
  if ( v1 <= 0 )
    return 0;
  v3 = *a1;
  while ( *(uint *)(v3 + 4) )
  {
    ++v2;
    v3 += 8;
    if ( v2 >= v1 )
      return 0;
  }
  return *a1 + 8 * v2;
}

//----- (0225500C) --------------------------------------------------------
int __fastcall Function_225500c(uint *a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;
  short v8;
  short v9;
  short v10;
  int v11;
  int v12;
  short v13;
  int v14;

  v14 = a4;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[3];
  v8 = a1[4];
  v9 = a1[5];
  v10 = 0;
  v11 = 31;
  v12 = 0;
  v13 = a1[7];
  return Function_2015214((int **)&v5);
}

//----- (02255040) --------------------------------------------------------
int __fastcall Function_2255040(int a1, uchar *a2, int a3, int a4)
{
  int v4;
  uchar *v5;
  uint v6;
  char v7;
  int v8;
  int result;
  short v10;
  short v11;
  int v12;
  short v13;
  short v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = a2;
  v6 = Function_201525c(*(ushort **)(a1 + 4));
  v10 = v6;
  v6 >>= 16;
  v11 = v6;
  v13 = v10;
  v14 = v6;
  v12 = Function_2015280(*(uint *)(v4 + 4));
  v7 = v14;
  *v5 = v14;
  v5[1] = v7 + BYTE2(v12);
  v8 = v13;
  v5[2] = v13;
  result = v8 + (short)v12;
  v5[3] = result;
  return result;
}

//----- (02255094) --------------------------------------------------------
uint Function_2255094()
{
  int v0;
  int v1;

  v0 = Function_2255634();
  v1 = Function_2255654(v0);
  Function_22556dc(v1);
  byte_21BF6E1 = 1;
  return Function_201ffe8();
}

//----- (022550B4) --------------------------------------------------------
char *Function_22550b4()
{
  uint v0;
  int v1;

  byte_21BF6E1 = 0;
  v0 = Function_201ffe8();
  v1 = Function_2255738(v0);
  Function_225572c(v1);
  return Function_20bed0c();
}

//----- (022550D4) --------------------------------------------------------
int __fastcall Function_22550d4(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v3 = 718;
  v4 = 118;
  v5 = 19;
  v6 = 14;
  *(uint *)(a1 + 384) = LoadFromNARC_8(25, 0xEu, (int)&v7, (int)dword_225BDA8);
  Function_2255748(v1, &v3);
  Function_2255c24(v1, 14, 10240, 32, v3, v4, v5, v6);
  Function_22559b4(v1);
  Function_2255bf4(v1, 13);
  Function_22559f8(v1);
  *(uint *)(v1 + 64) = Function_2018340(0xEu);
  return Function_2255860(v1);
}

//----- (02255134) --------------------------------------------------------
int __fastcall Function_2255134(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2255c14();
  Function_2255784(v1);
  Function_2255984(v1);
  free(*(uint *)(v1 + 64));
  Function_2255c90(v1);
  Function_2255a98(v1);
  Function_22559e0(v1);
  Call_FS_CloseFile(*(int **)(v1 + 384));
  free(*(uint *)(v1 + 4));
  *(uint *)(v1 + 4) = 0;
  free(*(uint *)(v1 + 16));
  result = 0;
  *(uint *)(v1 + 16) = 0;
  return result;
}

//----- (02255180) --------------------------------------------------------
int __fastcall Function_2255180(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = Call_G3X_Reset();
  Function_20a73c0(v2, v3, v4, v5);
  if ( v1[7] )
    Function_2255794(v1);
  if ( v1[11] )
    Function_2007768(v1[8]);
  Function_20241bc(0, 0);
  return Function_2255ac0(v1);
}

//----- (022551B4) --------------------------------------------------------
int __fastcall Function_22551b4(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = *a2;
  v4 = v2[1];
  v5 = a1;
  Function_22557a0();
  return Function_2255800(v5, v2[2], v2[3]);
}

//----- (022551D0) --------------------------------------------------------
int __fastcall Function_22551d0(int *a1)
{
  int *v1;

  v1 = a1;
  Function_201517c(*a1);
  return Function_20151ec(*v1);
}

//----- (022551E4) --------------------------------------------------------
int __fastcall Function_22551e4(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v6;
  int v7;
  int v8;
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;

  v6 = a1;
  v7 = a3;
  v8 = a4;
  Function_20093b4((int)&v18, a2, a2, a2, a2, -1, -1, 0, 0, a1[18], a1[19], a1[20], a1[21], 0, 0);
  v10 = v6[17];
  v11 = &v18;
  v12 = v7 << 12;
  v13 = v8 << 12;
  v14 = 0;
  v15 = a5;
  v16 = a6;
  v17 = 14;
  return Function_2021b90(&v10);
}

//----- (02255248) --------------------------------------------------------
int __fastcall Function_2255248(int a1, int a2, uint a3, int a4, int a5, int a6)
{
  int *v6;

  v6 = Function_2009a4c(*(uint *)(a1 + 72), a2, a3, a4, a6, a5, 0xEu);
  return Function_200a3dc(v6);
}

//----- (02255268) --------------------------------------------------------
int __fastcall Function_2255268(int a1, int a2, uint a3, int a4, int a5, int a6, int a7)
{
  int *v7;

  v7 = Function_2009b04(*(uint *)(a1 + 76), a2, a3, a4, a7, a5, a6, 0xEu);
  return Function_200a640(v7);
}

//----- (0225528C) --------------------------------------------------------
int *__fastcall Function_225528c(int a1, int a2, uint a3, int a4, int a5)
{
  return Function_2009bc4(*(uint *)(a1 + 80), a2, a3, a4, a5, 2u, 0xEu);
}

//----- (022552A8) --------------------------------------------------------
int *__fastcall Function_22552a8(int a1, int a2, uint a3, int a4, int a5)
{
  return Function_2009bc4(*(uint *)(a1 + 84), a2, a3, a4, a5, 3u, 0xEu);
}

//----- (022552C4) --------------------------------------------------------
int __fastcall Function_22552c4(int a1, int a2)
{
  int v2;
  uint **v3;

  v2 = a1;
  v3 = (uint **)Function_2009dc8(*(uint *)(a1 + 72), a2);
  return Function_2009d68(*(int **)(v2 + 72), v3);
}

//----- (022552D8) --------------------------------------------------------
int __fastcall Function_22552d8(int a1, int a2)
{
  int v2;
  uint **v3;

  v2 = a1;
  v3 = (uint **)Function_2009dc8(*(uint *)(a1 + 76), a2);
  return Function_2009d68(*(int **)(v2 + 76), v3);
}

//----- (022552EC) --------------------------------------------------------
int __fastcall Function_22552ec(int a1, int a2)
{
  int v2;
  uint **v3;

  v2 = a1;
  v3 = (uint **)Function_2009dc8(*(uint *)(a1 + 80), a2);
  return Function_2009d68(*(int **)(v2 + 80), v3);
}

//----- (02255300) --------------------------------------------------------
int __fastcall Function_2255300(int a1, int a2)
{
  int v2;
  uint **v3;

  v2 = a1;
  v3 = (uint **)Function_2009dc8(*(uint *)(a1 + 84), a2);
  return Function_2009d68(*(int **)(v2 + 84), v3);
}

//----- (02255314) --------------------------------------------------------
int __fastcall Function_2255314(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_2255cb8(a2, 118, 19, 14);
  Function_2255acc(v3, v2);
  return Function_2255b50(v3, v2);
}

//----- (02255338) --------------------------------------------------------
int Function_2255338()
{
  return Function_2255d0c();
}

//----- (02255340) --------------------------------------------------------
int __fastcall Function_2255340(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_2022a1c(*(uint **)(a1 + 52), a2, a3);
  v5 *= 4;
  NNS_G2dGetUnpackedPaletteData(v4, (uint *)(*(uint *)(v3 + 56) + v5));
  return *(uint *)(*(uint *)(v3 + 56) + v5);
}

//----- (02255360) --------------------------------------------------------
int Function_2255360()
{
  int result;

  REG_DISPCNT &= 0xFFFF1FFF;
  result = 67108874;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  REG_BG1CNT &= 0xFFFCu;
  return result;
}

//----- (02255390) --------------------------------------------------------
int Function_2255390()
{
  int result;

  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
  WIN_IN = WIN_IN & 0xFFC0 | 0x1F;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x12;
  WIN0_X1 = 2806;
  WIN0_Y1 = 4751;
  result = 67108874;
  REG_BG0CNT &= 0xFFFCu;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 1;
  return result;
}

//----- (022553F8) --------------------------------------------------------
int __fastcall Function_22553f8(int a1)
{
  int v1;

  v1 = a1;
  Function_201c2b8(*(uint *)(a1 + 64));
  Function_2008a94(*(uint *)(v1 + 32));
  return Function_200a858();
}

//----- (02255410) --------------------------------------------------------
int __fastcall Function_2255410(int a1, int a2)
{
  return Function_2255cb8(a1, 118, 19, a2);
}

//----- (02255420) --------------------------------------------------------
int __fastcall Function_2255420(ushort *a1, int a2, int a3, int a4)
{
  int v4;
  uint v6;
  int v7;

  v4 = 8 * a1[1];
  if ( a2 < 0 || a3 < 0 || a2 >= v4 || a3 >= 8 * *a1 )
    return 2;
  v6 = a2 + a3 * v4;
  v7 = 4 * ((v6 >> 31) + __ROR4__((v6 << 29) - (v6 >> 31), 29));
  return a4 << v7 == ((15 << v7) & *(uint *)(*((uint *)a1 + 5) + 4 * ((int)v6 / 8)));
}

//----- (0225547C) --------------------------------------------------------
int __fastcall Function_225547c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a4;
  v5 = a1;
  v6 = a3;
  Function_2255748(a1, a2);
  Function_2255c24(v5, v6, 10240, 32, v4);
  Function_2008b2c(*(uint *)(v5 + 32), 1);
  return Function_2255bf4(v5, v6);
}

//----- (022554A8) --------------------------------------------------------
int __fastcall Function_22554a8(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v3 = a1;
  *(uint *)(a1 + 64) = a2;
  v4 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 18743297;
  v11 = 512;
  v12 = 0;
  Function_2019044(*(uint *)(a1 + 64), 2);
  Function_20183c4(*(uint **)(v3 + 64), 2u, &v6, 0);
  Function_2019690(2u, 32, 0, v4);
  return Function_2019ebc(*(uint **)(v3 + 64), 2u);
}

//----- (022554F8) --------------------------------------------------------
int __fastcall Function_22554f8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2255c14();
  Function_2255784(v1);
  Function_2255c90(v1);
  free(*(uint *)(v1 + 4));
  *(uint *)(v1 + 4) = 0;
  free(*(uint *)(v1 + 16));
  result = 0;
  *(uint *)(v1 + 16) = 0;
  return result;
}

//----- (02255524) --------------------------------------------------------
int __fastcall Function_2255524(int a1)
{
  return Function_2019044(*(uint *)(a1 + 64), 2);
}

//----- (02255530) --------------------------------------------------------
int __fastcall Function_2255530(int a1)
{
  return Function_2008a94(*(uint *)(a1 + 32));
}

//----- (0225553C) --------------------------------------------------------
int *__fastcall Function_225553c(uint *a1, int a2, int a3, int a4, int *a5)
{
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *result;

  v5 = a1;
  v6 = a4;
  MATRIX_IDENTITY = 0;
  MATRIX_PUSH = 0;
  Function_20a73c0((int)&MATRIX_PUSH, 0, a3, a4);
  MATRIX_TRANSLATE = 0;
  v7 = SLOWORD(Unknown_20f983c[v6 >> 4]);
  v8 = *((short *)Unknown_20f983c + 2 * (v6 >> 4) + 1);
  G3_RotZ();
  v9 = a5[1];
  v10 = *a5;
  MATRIX_SCALE = a5[2];
  MATRIX_TRANSLATE = 0;
  MATRIX_PUSH = 0;
  if ( v5[7] )
    Function_2255794(v5);
  if ( v5[11] )
    Function_2007768(v5[8]);
  result = &MATRIX_POP;
  MATRIX_POP = 1;
  return result;
}

//----- (022555D4) --------------------------------------------------------
int __fastcall Function_22555d4(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  *(uint *)(a1 + 384) = LoadFromNARC_8(25, 0xEu, a3, a4);
  Function_22559f8(v4);
  *(uint *)(v4 + 64) = Function_2018340(0xEu);
  return Function_2255860(v4);
}

//----- (022555FC) --------------------------------------------------------
int __fastcall Function_22555fc(int a1)
{
  int v1;

  v1 = a1;
  Function_2255984(a1);
  free(*(uint *)(v1 + 64));
  Call_FS_CloseFile(*(int **)(v1 + 384));
  return Function_2255a98(v1);
}

//----- (0225561C) --------------------------------------------------------
int __fastcall Function_225561c(int a1)
{
  Function_201c2b8(*(uint *)(a1 + 64));
  return Function_200a858();
}

//----- (0225562C) --------------------------------------------------------
int __fastcall Function_225562c(int a1)
{
  return Function_2255ac0(a1);
}

//----- (02255634) --------------------------------------------------------
char *Function_2255634()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_225BE50;
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

//----- (02255654) --------------------------------------------------------
int *Function_2255654()
{
  Function_20b28cc();
  G3X_InitMtxStack();
  Function_201ff0c(1u, 1);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  G3X_SetClearColor(0, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  GFX_VIEWPORT = -1073807360;
  Function_20a5a94(2u, 1);
  return Function_20a5d88(0x4000, 1);
}

//----- (022556DC) --------------------------------------------------------
uint Function_22556dc()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 1;
  v2 = 0;
  v3 = 0;
  v4 = 1;
  SetGraphicsModes(&v1);
  REG_DISPCNT = REG_DISPCNT & 0xFFCFFFEF | 0x10;
  Function_20a7944();
  Function_201ff00();
  Function_201ff68();
  Function_201ff0c(0x1Fu, 1);
  return Function_201ff74(0x13u, 1);
}

//----- (0225572C) --------------------------------------------------------
int *Function_225572c()
{
  Function_20a5b1c();
  return Function_20a5f50();
}

//----- (02255738) --------------------------------------------------------
int Function_2255738()
{
  Function_201ff00();
  Function_201ff68();
  return Function_20a7944();
}

//----- (02255748) --------------------------------------------------------
int __fastcall Function_2255748(int **a1, int a2)
{
  int v2;
  int **v3;
  int result;

  v2 = a2;
  v3 = a1;
  *a1 = Function_2015064(a2);
  v3[1] = (int *)malloc(*(uint *)(v2 + 12), 472);
  v3[2] = (int *)118;
  v3[3] = 0;
  v3[4] = (int *)malloc(*(uint *)(v2 + 12), 76);
  v3[5] = (int *)19;
  v3[6] = 0;
  result = 1;
  v3[7] = (int *)1;
  return result;
}

//----- (02255784) --------------------------------------------------------
int __fastcall Function_2255784(int **a1)
{
  int **v1;
  int result;

  v1 = a1;
  Function_20150a8(*a1);
  result = 0;
  *v1 = 0;
  return result;
}

//----- (02255794) --------------------------------------------------------
int *__fastcall Function_2255794(uint **a1)
{
  return Function_20150ec(*a1);
}

//----- (022557A0) --------------------------------------------------------
int __fastcall Function_22557a0(uint *a1, int *a2, int a3)
{
  uint *v3;
  int result;
  int *v5;
  int *v6;
  int v7;
  int v8;

  v3 = a1;
  v8 = 0;
  result = a3;
  v5 = a2;
  v7 = a3;
  if ( a3 > 0 )
  {
    v6 = a2;
    do
    {
      if ( v3[3] >= v3[2] )
        ErrorHandler();
      if ( v5[1] )
        *(uint *)(v3[1] + 4 * v3[3]) = Function_2015128(v6);
      else
        *(uint *)(v3[1] + 4 * v3[3]) = 0;
      v5 += 2;
      ++v3[3];
      v6 += 2;
      result = v7;
      ++v8;
    }
    while ( v8 < v7 );
  }
  return result;
}

//----- (02255800) --------------------------------------------------------
int __fastcall Function_2255800(uint *a1, int *a2, int a3)
{
  uint *v3;
  int result;
  int *v5;
  int *v6;
  int v7;
  int v8;

  v3 = a1;
  v8 = 0;
  result = a3;
  v5 = a2;
  v7 = a3;
  if ( a3 > 0 )
  {
    v6 = a2;
    do
    {
      if ( v3[6] >= v3[5] )
        ErrorHandler();
      if ( v5[1] )
        *(uint *)(v3[4] + 4 * v3[6]) = Function_20151a4(v6);
      else
        *(uint *)(v3[4] + 4 * v3[6]) = 0;
      v5 += 3;
      ++v3[6];
      v6 += 3;
      result = v7;
      ++v8;
    }
    while ( v8 < v7 );
  }
  return result;
}

//----- (02255860) --------------------------------------------------------
int __fastcall Function_2255860(int a1)
{
  int v1;
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
  int v35;
  int v36;
  int v37;

  v1 = a1;
  v31 = 0;
  v32 = 0;
  v33 = 2048;
  v34 = 0;
  v35 = 2031617;
  v36 = 0;
  v37 = 0;
  Function_20183c4(*(uint **)(a1 + 64), 1u, &v31, 0);
  Function_2019690(1u, 32, 0, 0xEu);
  Function_2019ebc(*(uint **)(v1 + 64), 1u);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 18743297;
  v29 = 512;
  v30 = 0;
  Function_20183c4(*(uint **)(v1 + 64), 2u, &v24, 0);
  Function_2019690(2u, 32, 0, 0xEu);
  Function_2019ebc(*(uint **)(v1 + 64), 2u);
  v17 = 0;
  v18 = -145;
  v19 = 2048;
  v20 = 0;
  v21 = 35454977;
  v22 = 768;
  v23 = 0;
  Function_20183c4(*(uint **)(v1 + 64), 3u, &v17, 0);
  Function_2019690(3u, 32, 0, 0xEu);
  Function_2019ebc(*(uint **)(v1 + 64), 3u);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 983041;
  v15 = 256;
  v16 = 0;
  Function_20183c4(*(uint **)(v1 + 64), 4u, &v10, 0);
  Function_2019690(4u, 32, 0, 0xEu);
  Function_2019ebc(*(uint **)(v1 + 64), 4u);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 17694721;
  v8 = 0;
  v9 = 0;
  Function_20183c4(*(uint **)(v1 + 64), 5u, &v3, 0);
  Function_2019690(5u, 32, 0, 0xEu);
  return Function_2019ebc(*(uint **)(v1 + 64), 5u);
}

//----- (02255984) --------------------------------------------------------
int __fastcall Function_2255984(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(*(uint *)(a1 + 64), 1);
  Function_2019044(*(uint *)(v1 + 64), 2);
  Function_2019044(*(uint *)(v1 + 64), 3);
  Function_2019044(*(uint *)(v1 + 64), 4);
  return Function_2019044(*(uint *)(v1 + 64), 5);
}

//----- (022559B4) --------------------------------------------------------
int __fastcall Function_22559b4(int a1)
{
  int v1;
  int *v2;
  int result;

  v1 = a1;
  *(uint *)(a1 + 52) = Function_202298c(119, 0xEu);
  v2 = (int *)malloc(0xEu, 476);
  *(uint *)(v1 + 56) = v2;
  Call_FillMemWithValue(v2, 0, 0x1DCu);
  result = 119;
  *(uint *)(v1 + 60) = 119;
  return result;
}

//----- (022559E0) --------------------------------------------------------
int __fastcall Function_22559e0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(a1 + 56));
  Function_20229d8(*(int **)(v1 + 52));
  result = 0;
  *(uint *)(v1 + 60) = 0;
  return result;
}

//----- (022559F8) --------------------------------------------------------
int **__fastcall Function_22559f8(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int **result;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v5 = 8;
  v6 = 0x8000;
  v7 = 0x4000;
  v8 = 14;
  Function_201e88c(&v5, 16, 16);
  Function_201f834(5, 0xEu);
  Function_201e994();
  Function_201f8e4();
  Function_20a7944();
  Function_200a784(0, 124, 0, 31, 0, 0x7Cu, 0, 0x1Fu, 0xEu);
  v1[17] = Function_20095c4(48, (int)(v1 + 22), 14, v2);
  Function_200964c((int)(v1 + 22), 0, 0x200000, v3);
  v1[18] = Function_2009714(8, 0, 0xEu);
  v1[19] = Function_2009714(5, (int *)1, 0xEu);
  v1[20] = Function_2009714(48, (int *)2, 0xEu);
  result = Function_2009714(48, (int *)3, 0xEu);
  v1[21] = result;
  return result;
}

//----- (02255A98) --------------------------------------------------------
int *__fastcall Function_2255a98(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_2021964(*(int **)(a1 + 68));
  v2 = 0;
  do
  {
    Function_2009754(*(int **)(v1 + 72));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  Function_201e958();
  Function_201f8b4();
  return Function_200a878();
}

//----- (02255AC0) --------------------------------------------------------
int __fastcall Function_2255ac0(int a1)
{
  return Function_20219f8(*(uint *)(a1 + 68));
}

//----- (02255ACC) --------------------------------------------------------
int __fastcall Function_2255acc(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  int result;
  uint *v9;

  v2 = 0;
  v3 = a1;
  v4 = a2;
  v5 = 0;
  do
  {
    v9 = Function_200723c(v3[96], v2 + 1, 0, 14, 1);
    if ( !v9 )
      ErrorHandler();
    v6 = Function_2255340((int)v3, (int)v9, v2++);
    *(uint *)(*(uint *)v4 + v5 + 4) = v6;
    *(uint *)(*(uint *)v4 + v5) = *v3;
    v5 += 8;
  }
  while ( v2 < 100 );
  v7 = Function_200723c(v3[96], 0, 0, 14, 1);
  Function_2022a1c(*(uint **)(v4 + 20), (int)v7, 0);
  Function_20a71b0((int)v7, (uint *)(*(uint *)(v4 + 8) + 4));
  **(uint **)(v4 + 8) = *v3;
  result = *(uint *)(v4 + 8);
  *(uint *)(result + 8) = 3;
  return result;
}

//----- (02255B50) --------------------------------------------------------
int __fastcall Function_2255b50(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  uint *v7;
  int v8;
  int result;
  uint v10;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v10 = 135;
  do
  {
    v5 = Function_200723c(v2[96], v4 + 206, 0, 14, 1);
    v6 = 8 * (v4 + 100);
    *(uint *)(*(uint *)v3 + v6 + 4) = Function_2255340((int)v2, (int)v5, v4 + 100);
    *(uint *)(*(uint *)v3 + v6) = *v2;
    v7 = Function_200723c(v2[96], v10, 0, 14, 1);
    Function_2022a1c(*(uint **)(v3 + 20), (int)v7, v4 + 1);
    v8 = 12 * (v4 + 1);
    Function_20a71b0((int)v7, (uint *)(*(uint *)(v3 + 8) + v8 + 4));
    if ( !*(uint *)(*(uint *)(v3 + 8) + v8 + 4) )
      ErrorHandler();
    ++v4;
    *(uint *)(*(uint *)(v3 + 8) + v8) = *v2;
    *(uint *)(*(uint *)(v3 + 8) + v8 + 8) = 1;
    result = v10 + 4;
    v10 += 4;
  }
  while ( v4 < 18 );
  return result;
}

//----- (02255BF4) --------------------------------------------------------
uint *__fastcall Function_2255bf4(int a1, int a2)
{
  int v2;
  uint *result;

  v2 = a1;
  result = Function_200723c(*(uint *)(a1 + 384), 0xEBu, 0, a2, 0);
  *(uint *)(v2 + 48) = result;
  return result;
}

//----- (02255C14) --------------------------------------------------------
int __fastcall Function_2255c14(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(a1 + 48));
  result = 0;
  *(uint *)(v1 + 48) = 0;
  return result;
}

//----- (02255C24) --------------------------------------------------------
int __fastcall Function_2255c24(int a1, int a2, int a3, int a4, int a5)
{
  int *v5;
  int result;

  v5 = (int *)a1;
  *(uint *)(a1 + 32) = Function_200762c(a2, a2, a3, a4);
  v5[9] = Function_20a5a2c();
  v5[10] = Function_20a5a3c();
  Function_2008a78(v5[8], 8 * v5[9] & 0x7FFFF, 16 * ((v5[9] & 0x7FFF0000u) >> 16));
  Function_2008a84(v5[8], 8 * v5[10] & 0x7FFFF, 8 * ((v5[10] & 0xFFFF0000) >> 16));
  result = 1;
  v5[11] = 1;
  return result;
}

//----- (02255C90) --------------------------------------------------------
int __fastcall Function_2255c90(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  Function_2007b6c(a1[8]);
  v2 = v1[9];
  Function_20a5a34();
  v3 = v1[10];
  Function_20a5a44();
  result = 0;
  v1[11] = 0;
  return result;
}

//----- (02255CB8) --------------------------------------------------------
int *__fastcall Function_2255cb8(int **a1, int a2, int a3, uint a4)
{
  int v4;
  int **v5;
  uint v6;
  uint v7;
  int v8;
  int *v9;
  int *v10;
  int *result;

  v4 = a2;
  v5 = a1;
  v6 = 8 * a2;
  v7 = a4;
  v8 = a3;
  v9 = (int *)malloc(a4, 8 * a2);
  *v5 = v9;
  Call_FillMemWithValue(v9, 0, v6);
  v5[4] = Function_202298c(v4, v7);
  v5[1] = (int *)v4;
  v10 = (int *)malloc(v7, 12 * v8);
  v5[2] = v10;
  Call_FillMemWithValue(v10, 0, 12 * v8);
  result = Function_202298c(v8, v7);
  v5[5] = result;
  v5[3] = (int *)v8;
  return result;
}

//----- (02255D0C) --------------------------------------------------------
int __fastcall Function_2255d0c(int a1)
{
  int *v1;
  int *v2;
  int *v3;
  int result;

  v1 = (int *)a1;
  v2 = *(int **)(a1 + 16);
  if ( v2 )
  {
    Function_20229d8(v2);
    v1[4] = 0;
  }
  v3 = (int *)v1[5];
  if ( v3 )
  {
    Function_20229d8(v3);
    v1[5] = 0;
  }
  free(*v1);
  *v1 = 0;
  free(v1[2]);
  result = 0;
  v1[2] = 0;
  return result;
}

//----- (02255D44) --------------------------------------------------------
int __fastcall Function_22_2255d44(int a1)
{
  int v1;
  int *v2;
  int v3;
  uint *v4;

  v1 = a1;
  Function_2017fc8(3, 13, 0x20000);
  Function_2017fc8(3, 14, 0x40000);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 1764, 0xDu);
  Call_FillMemWithValue(v2, 0, 0x6E4u);
  SetMainLoopFunctionCall((int)Function_2256940, (int)v2);
  Function_20177a4();
  v3 = LoadPtrToOverWorldDataIn18(v1);
  v4 = (uint *)v3;
  v2[437] = *(uint *)(v3 + 12);
  Function_201e3d8();
  Function_201e450(4u);
  Function_225894c(v4[2], v2 + 97);
  Function_22566c0(v2);
  Function_2259484(v2 + 215, 719, 13);
  v2[217] = (int)Function_2254de0((int *)0x2BC, 0xDu);
  Function_2256708(v2, *v4, 10, 0);
  Function_22567fc(v2);
  Function_2256948(v2, 0);
  Function_225699c(v2);
  Function_2256bac(v2, v4[3]);
  Function_22589e0(v2 + 294, v2 + 253, v2 + 218, v2, v2 + 344, 1);
  v2[428] = (int)Function_2015920(0xDu);
  v2[429] = Function_201a778(0xDu, 1);
  v2[426] = 0;
  Function_2004550(0x35u, 0);
  return 1;
}

//----- (02255E50) --------------------------------------------------------
int __fastcall Function_22_2255e50(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)LoadOverlayData1c(a1);
  v5 = 0;
  v6 = LoadPtrToOverWorldDataIn18(v2);
  switch ( (uchar)*v3 )
  {
    case 0u:
    case 1u:
      Function_200f174(1u, 5, 5, 0, 6, 1, 13);
      *v3 = 2;
      break;
    case 2u:
      if ( Function_200f2ac() )
        ++*v3;
      break;
    case 3u:
      if ( *(uint *)(v6 + 28) == 1 )
      {
        Function_2002b20(1u);
        v4[438] = Function_225a660(v4 + 344, 26, 385, 47);
        ++*v3;
      }
      else
      {
        *v3 = 6;
      }
      break;
    case 4u:
      if ( !Function_201d724(v4[438] & 0xFF) )
      {
        Function_225a6a0(v4 + 344);
        ++*v3;
      }
      break;
    case 5u:
      if ( (ushort)word_21BF6DC | dword_21BF6C4 & 3 )
      {
        Function_225a628(v4 + 344, 26, 385, 48);
        Function_2002b20(0);
        ++*v3;
      }
      break;
    case 6u:
      if ( v4[426] == 3 )
      {
        Function_2256c48(v4, v4 + 427);
        *v3 = 7;
      }
      Function_225890c(v4 + 294);
      Function_2257564(v4);
      Function_225a610(v4 + 344);
      Function_2256ac4(v4);
      break;
    case 7u:
      if ( v4[427] )
      {
        v4[427] = 0;
        *v3 = 8;
        v4[426] = 4;
        Function_225af44(v4 + 287, v4 + 253, 14);
      }
      break;
    case 8u:
      v7 = v4[426];
      if ( v7 == 9 )
      {
        Function_2256db8(v4, v4 + 427);
        *v3 = 10;
      }
      else if ( v7 == 8 )
      {
        *v3 = 9;
        v4[426] = 5;
        Function_22575b4(v4);
      }
      else
      {
        v4[426] = Function_2257278(v4);
        Function_225af68(v4 + 287);
      }
      break;
    case 9u:
      v8 = v4[426];
      if ( v8 == 6 )
      {
        v4[430] = 1;
        *v3 = 11;
      }
      else if ( v8 == 7 )
      {
        v4[430] = 0;
        *v3 = 11;
      }
      else
      {
        v4[426] = Function_2257624(v4);
        Function_225af68(v4 + 287);
      }
      break;
    case 0xAu:
      if ( v4[427] )
      {
        v4[427] = 0;
        *v3 = 6;
        v4[426] = 0;
        Function_225af74(v4 + 287);
      }
      break;
    case 0xBu:
      Function_200f174(1u, 0, 0, 0, 6, 1, 13);
      ++*v3;
      break;
    case 0xCu:
      if ( Function_200f2ac() )
      {
        *v3 = 0;
        v4[426] = 10;
        v5 = 1;
        Function_225af74(v4 + 287);
      }
      break;
    default:
      break;
  }
  Function_22566ec(v4);
  return v5;
}

//----- (02256098) --------------------------------------------------------
int __fastcall Function_22_2256098(int a1)
{
  int v1;
  int v2;
  uint *v3;
  uint *v4;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = (uint *)LoadPtrToOverWorldDataIn18(v1);
  if ( *(uint *)(v2 + 1720) == 1 )
  {
    Function_202cfec(v3[4], 7);
    Function_2256f38(v3[1], v2 + 1012, v3[5]);
  }
  v4 = (uint *)v3[6];
  if ( v4 )
    *v4 = *(uint *)(v2 + 1720) == 1;
  Function_2015938(*(uint *)(v2 + 1712));
  Function_201a928(*(uint *)(v2 + 1716), 1);
  Function_2256c38(v2);
  Function_2258a34(v2 + 1176);
  Function_2256ab4(v2);
  Function_225698c(v2);
  Function_22567d8(v2);
  Function_22568b8(v2);
  Function_2254e0c(*(int **)(v2 + 868));
  *(uint *)(v2 + 868) = 0;
  Function_22594ac(v2 + 860);
  Function_22566f4(v2);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  if ( Function_201e530() != 1 )
    ErrorHandler();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(13);
  Function_201807c(14);
  return 1;
}

//----- (02256174) --------------------------------------------------------
int __fastcall Function_22_2256174(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;
  int v5;

  v1 = a1;
  Function_2017fc8(3, 13, 0x20000);
  Function_2017fc8(3, 14, 0x40000);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 1764, 0xDu);
  Call_FillMemWithValue((int *)v2, 0, 0x6E4u);
  SetMainLoopFunctionCall((int)Function_2256940, v2);
  Function_20177a4();
  v3 = (uint *)LoadPtrToOverWorldDataIn18(v1);
  *(uint *)(v2 + 1728) = v3[3];
  *(uint *)(v2 + 1732) = v3[4];
  *(uint *)(v2 + 1736) = v3[5];
  *(uint *)(v2 + 1740) = v3[2];
  *(uint *)(v2 + 1744) = v3[7];
  Function_201e3d8();
  Function_201e450(4u);
  Function_225894c(v3[6], v2 + 388);
  Function_22566c0(v2);
  Function_20219a4(*(uint **)(v2 + 68), 0);
  Function_2039734();
  Function_200966c(1, 16, v4, v5);
  Function_2009704(1);
  Function_2259484(v2 + 860, 719, 13);
  *(uint *)(v2 + 868) = Function_2254de0((int *)0x2BC, 0xDu);
  *(uint *)(v2 + 1748) = v3[8];
  if ( *(uchar *)(*(uint *)(v2 + 1744) + 22) )
    *(uint *)(v2 + 1724) = 20;
  else
    *(uint *)(v2 + 1724) = Function_2257580(v3[3]);
  Function_2256790(v2, *v3, *(uint *)(v2 + 1724));
  Function_22567fc(v2);
  Function_2256948(v2, 0);
  Function_2256a28(v2);
  Function_2256bf4(v2, *(uint *)(v2 + 1724), v3[2], v3[7], v3[8]);
  Function_22589e0(v2 + 1176, v2 + 1012, v2 + 872, v2, v2 + 1376, 0);
  *(uint *)(v2 + 1712) = Function_2015920(0xDu);
  *(uint *)(v2 + 1716) = Function_201a778(0xDu, 1);
  *(uint *)(v2 + 1704) = 0;
  Function_20959f4(*(uchar *)(*(uint *)(v2 + 1744) + 22));
  return 1;
}

//----- (022562EC) --------------------------------------------------------
int __fastcall Function_22_22562ec(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  int v5;
  char v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = (uint *)LoadOverlayData1c(a1);
  v4 = v3;
  v5 = 0;
  switch ( v6 )
  {
    case 0:
      Function_200564c(42, 30);
      ++*v2;
      break;
    case 1:
      if ( !Function_2005684() )
        ++*v2;
      break;
    case 2:
      Function_2257104();
      Function_2257524(v4, 0, v4[431]);
      if ( v4[433] == 3 )
        v7 = Function_225751c(v4, 28);
      else
        v7 = Function_225751c(v4, 26);
      v4[438] = v7;
      ++*v2;
      break;
    case 3:
      if ( !Function_201d724(v3[438] & 0xFF) )
      {
        Function_2257540(v4);
        ++*v2;
      }
      break;
    case 4:
      v8 = v3[435];
      v3[438] = ((int (*)(void))Function_225751c)();
      ++*v2;
      break;
    case 5:
      if ( !Function_201d724(v3[438] & 0xFF) )
      {
        Function_2257540(v4);
        ++*v2;
      }
      break;
    case 6:
      v3[438] = ((int (*)(void))Function_225751c)();
      ++*v2;
      break;
    case 7:
      if ( !Function_201d724(v3[438] & 0xFF) )
      {
        Function_2257540(v4);
        ++*v2;
      }
      break;
    case 8:
      if ( *(uchar *)(v3[436] + 22) )
        Function_20364f0(2);
      ++*v2;
      break;
    case 9:
      if ( *(uchar *)(v3[436] + 22) )
      {
        if ( Function_2036540(2) )
          ++*v2;
      }
      else
      {
        ++*v2;
      }
      break;
    case 10:
      Function_225718c();
      Function_2005748(0x643u);
      ++*v2;
      break;
    case 11:
      Function_200f174(1u, 17, 19, 0, 6, 1, 13);
      ++*v2;
      break;
    case 12:
      if ( Function_200f2ac() )
      {
        Function_2004550(7u, 0x491u);
        ++*v2;
      }
      break;
    case 13:
      if ( v3[426] == 3 )
      {
        Function_2095ca8((uchar *)v3[436], 1);
        if ( *(uchar *)(v4[436] + 22) )
          Function_225a628(v4 + 344, 26, 385, 46);
        *v2 = 14;
      }
      else
      {
        if ( !Function_225a6c4(v3 + 344) )
        {
          *v2 = 15;
          Function_2005748(0x680u);
        }
        Function_225890c(v4 + 294);
        Function_2257564(v4);
        Function_225a610(v4 + 344);
        Function_2256ac4(v4);
      }
      break;
    case 14:
      if ( !Function_225a6c4(v3 + 344) )
      {
        *v2 = 15;
        Function_2005748(0x680u);
      }
      Function_2257564(v4);
      Function_225a610(v4 + 344);
      Function_22577a0(v4);
      break;
    case 15:
      Function_225a610(v3 + 344);
      if ( Function_225a6d4(v4 + 344) )
        *v2 = 19;
      break;
    case 16:
    case 17:
    case 18:
      break;
    case 19:
      if ( Function_20057d4(0x680u) != 1 )
      {
        Function_200f174(1u, 26, 26, 0, 6, 1, 13);
        Function_2005748(0x684u);
        ++*v2;
      }
      break;
    case 20:
      if ( Function_200f2ac() )
      {
        *v2 = 0;
        v4[426] = 10;
        v5 = 1;
        REG_DISPCNT &= 0xFFFF1FFF;
        Function_2257ab0(v4 + 253, -64, 40);
      }
      break;
  }
  Function_22566ec(v4);
  return v5;
}

//----- (02256600) --------------------------------------------------------
int __fastcall Function_22_2256600(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = LoadPtrToOverWorldDataIn18(v1);
  Function_2256fd8(*(uint *)(v3 + 4), v2 + 1012, *(uint *)(v2 + 1728), *(uint *)(v3 + 36));
  Function_2015938(*(uint *)(v2 + 1712));
  Function_201a928(*(uint *)(v2 + 1716), 1);
  Function_2256c38(v2);
  Function_2258a34(v2 + 1176);
  Function_2256ab4(v2);
  Function_225698c(v2);
  Function_22567d8(v2);
  Function_22568b8(v2);
  Function_2254e0c(*(int **)(v2 + 868));
  *(uint *)(v2 + 868) = 0;
  Function_22594ac(v2 + 860);
  Function_22566f4(v2);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  if ( Function_201e530() != 1 )
    ErrorHandler();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(13);
  Function_201807c(14);
  Function_2095a24();
  Function_2039794();
  return 1;
}

//----- (022566C0) --------------------------------------------------------
int __fastcall Function_22566c0(int a1)
{
  int v1;
  char v3;

  v1 = a1;
  Function_2255094();
  Function_22550d4(v1);
  Function_2255314(v1, (int)&v3);
  Function_22551b4(v1, &v3);
  return Function_2255338();
}

//----- (022566EC) --------------------------------------------------------
int __fastcall Function_22566ec(uint *a1)
{
  return Function_2255180(a1);
}

//----- (022566F4) --------------------------------------------------------
char *__fastcall Function_22566f4(int *a1)
{
  int v1;

  v1 = (int)a1;
  Function_22551d0(a1);
  Function_2255134(v1);
  return Function_22550b4();
}

//----- (02256708) --------------------------------------------------------
int __fastcall Function_2256708(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  char v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;

  v19 = a4;
  v4 = a1;
  v5 = a2;
  v10 = *a1;
  v11 = a1[1];
  v12 = a1[4];
  v6 = a4;
  v13 = a1[12];
  v14 = a1[8];
  v7 = a1[16];
  v18 = a3;
  v15 = v7;
  v16 = v4[217];
  v17 = v4 + 215;
  Function_22578f4(v4 + 253, &v10);
  if ( v6 )
    Function_22579b4(v4 + 253, v5, &v9, 14);
  else
    Function_2257998(v4 + 253, v5, &v9, 14);
  Function_2259098(v4, &v9);
  Function_2257b10(v4 + 253);
  return Function_2257c88(v4 + 253, 0, 14);
}

//----- (02256790) --------------------------------------------------------
int __fastcall Function_2256790(int *a1, int a2, int a3, int a4)
{
  int *v4;
  char v6;
  uchar v7;
  int v8;
  char v9;
  int v10;

  v10 = a4;
  v4 = a1;
  Function_2256708(a1, a2, a3, 1);
  Function_2259270(v4 + 283, &v9, &v8);
  Function_2259358(v4 + 283, &v6);
  return Function_22591ec(v4 + 283, 192, 141 - (v8 / 2 - v7));
}

//----- (022567D8) --------------------------------------------------------
int __fastcall Function_22567d8(int a1)
{
  int v1;

  v1 = a1;
  Function_2257cd4(a1 + 1012);
  Function_2257a98(v1 + 1012);
  return Function_2257948(v1 + 1012);
}

//----- (022567FC) --------------------------------------------------------
int __fastcall Function_22567fc(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int i;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int *v18;

  v1 = a1;
  v8 = *a1;
  v9 = a1[1];
  v10 = a1[4];
  v11 = a1[12];
  v12 = a1[16];
  v18 = a1 + 97;
  v13 = a1[217];
  v14 = a1 + 215;
  v15 = 14;
  v16 = 2;
  v17 = 1;
  Function_2257f50(a1 + 218, &v8);
  Function_22582c0(v1 + 218);
  v2 = 0;
  do
  {
    v3 = Function_225899c(v1 + 97, v2);
    for ( i = 0; i < v3; ++i )
      Function_22580a4(v1 + 218, 0, v2);
    ++v2;
  }
  while ( v2 < 100 );
  v5 = 0;
  do
  {
    v6 = Function_22589b0(v1 + 97, v5);
    if ( v6 < 18 )
      Function_22580a4(v1 + 218, 1, v6);
    ++v5;
  }
  while ( v5 < 18 );
  return Function_22581ec(v1 + 218);
}

//----- (022568B8) --------------------------------------------------------
int __fastcall Function_22568b8(int a1)
{
  int v1;

  v1 = a1;
  Function_2258408(a1 + 872);
  Function_22581c0(v1 + 872);
  return Function_2257f88(v1 + 872);
}

//----- (022568DC) --------------------------------------------------------
int __fastcall Function_22568dc(int a1)
{
  int v1;

  v1 = a1;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  REG_BG1CNT &= 0xFFFCu;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 2;
  REG_BG3CNT = REG_BG3CNT & 0xFFFC | 3;
  Function_2019184(*(uint *)(a1 + 64), 3u, 3u, -16);
  Function_2258354(v1 + 872, 0);
  return Function_22583a0(v1 + 872);
}

//----- (02256940) --------------------------------------------------------
int __fastcall Function_2256940(int a1)
{
  return Function_22553f8(a1);
}

//----- (02256948) --------------------------------------------------------
int __fastcall Function_2256948(int a1, int a2, int a3, int a4)
{
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

  v17 = a4;
  v5 = *(uint *)(a1 + 64);
  v6 = 25;
  v7 = 2 * a2 + 121;
  v8 = 133;
  v9 = 2 * a2 + 122;
  v12 = 1;
  v13 = 1;
  v14 = 2;
  v16 = 14;
  v10 = 0;
  v11 = 0;
  v15 = 0;
  return Function_22597bc(a1 + 1204, &v5);
}

//----- (0225698C) --------------------------------------------------------
int __fastcall Function_225698c(int a1)
{
  return Function_2259804(a1 + 1204);
}

//----- (0225699C) --------------------------------------------------------
int __fastcall Function_225699c(int a1)
{
  int v1;

  v1 = a1;
  Function_2259dbc(a1 + 1248, a1);
  Function_2259ff4(v1 + 1248);
  Function_2259ff4(v1 + 1248);
  Function_2259ff4(v1 + 1248);
  Function_2259ff4(v1 + 1248);
  return Function_2259ff4(v1 + 1248);
}

//----- (02256A28) --------------------------------------------------------
int __fastcall Function_2256a28(int a1)
{
  int v1;

  v1 = a1;
  Function_2259dbc(a1 + 1248, a1);
  Function_2259ff4(v1 + 1248);
  Function_2259ff4(v1 + 1248);
  Function_2259ff4(v1 + 1248);
  Function_2259ff4(v1 + 1248);
  return Function_2259ff4(v1 + 1248);
}

//----- (02256AB4) --------------------------------------------------------
int __fastcall Function_2256ab4(int a1)
{
  return Function_2259f24(a1 + 1248);
}

//----- (02256AC4) --------------------------------------------------------
int __fastcall Function_2256ac4(int a1)
{
  return Function_2259f88(a1 + 1248);
}

//----- (02256AD4) --------------------------------------------------------
int __fastcall Function_2256ad4(int a1)
{
  return Function_2259fa0(a1 + 1248);
}

//----- (02256AE4) --------------------------------------------------------
int __fastcall Function_2256ae4(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = Function_2258460(a2 + 872);
  if ( result )
  {
    result = 1704;
    *(uint *)(v2 + 1704) = 3;
  }
  return result;
}

//----- (02256B04) --------------------------------------------------------
int __fastcall Function_2256b04(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_2258414(a2 + 872);
  return Function_2258258(v2 + 872, v3, 0);
}

//----- (02256B24) --------------------------------------------------------
int __fastcall Function_2256b24(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_2258414(a2 + 872);
  return Function_2258258(v2 + 872, v3, 1);
}

//----- (02256B44) --------------------------------------------------------
int __fastcall Function_2256b44(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 1704);
  if ( result )
  {
    Function_2258424(a2 + 872, 0);
    Function_22582c0(v2 + 872);
    result = 1704;
    *(uint *)(v2 + 1704) = 0;
  }
  return result;
}

//----- (02256B78) --------------------------------------------------------
int __fastcall Function_2256b78(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 1704);
  if ( result != 1 )
  {
    Function_2258424(a2 + 872, 1);
    Function_22582c0(v2 + 872);
    result = 1704;
    *(uint *)(v2 + 1704) = 1;
  }
  return result;
}

//----- (02256BAC) --------------------------------------------------------
int __fastcall Function_2256bac(uint *a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v5 = a1[16];
  v6 = a1[17];
  v7 = a1 + 18;
  v9 = 10;
  v8 = a2;
  v14 = a1[96];
  return Function_225a428(a1 + 344, &v5, 15);
}

//----- (02256BF4) --------------------------------------------------------
int __fastcall Function_2256bf4(uint *a1, int a2, int a3, int a4, int a5)
{
  int v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v6 = a1[16];
  v7 = a1[17];
  v10 = a2;
  v12 = a3 + 7;
  v8 = a1 + 18;
  v13 = 60;
  v11 = 385;
  v9 = a5;
  v14 = a4;
  v15 = a1[96];
  return Function_225a428(a1 + 344, &v6, 63);
}

//----- (02256C38) --------------------------------------------------------
int __fastcall Function_2256c38(int a1)
{
  return Function_225a560(a1 + 1376);
}

//----- (02256C48) --------------------------------------------------------
uint *__fastcall Function_2256c48(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = Function_200679c((int)Function_2256c70, 16, 0xAu, 0xDu);
  result = (uint *)Function_201ced0((int)v4);
  *result = v2;
  result[1] = v3;
  result[2] = 0;
  result[3] = 0;
  return result;
}

//----- (02256C70) --------------------------------------------------------
int __fastcall Function_2256c70(int result, int *a2, int a3, int a4)
{
  int *v4;
  uint v5;

  v4 = a2;
  v5 = a2[3];
  if ( v5 <= 9 )
    JUMPOUT(__CS__, *((short *)&off_2256C8A + v5) + 36007052);
  switch ( (uchar)v5 )
  {
    case 0:
      if ( !Function_2258218(*v4 + 872, 3, 0) )
        ErrorHandler();
      result = v4[3] + 1;
      v4[3] = result;
      break;
    case 1:
      result = Function_2258460(*v4 + 872);
      if ( result )
      {
        result = v4[3] + 1;
        v4[3] = result;
      }
      break;
    case 2:
      Function_200aae0(8, -16, 0, 10, 1);
      result = v4[3] + 1;
      v4[3] = result;
      break;
    case 3:
      result = Function_200ac1c(1);
      if ( result )
      {
        result = v4[3] + 1;
        v4[3] = result;
      }
      break;
    case 4:
      Function_2259fc4(*v4 + 1248, 0, 8);
      result = v4[2] + 1;
      v4[2] = result;
      if ( result >= 8 )
      {
        v4[2] = 0;
        result = v4[3] + 1;
        v4[3] = result;
      }
      break;
    case 5:
      result = Function_2257098(v4, -8, 5, 8);
      if ( result )
      {
        v4[2] = 0;
        result = v4[3] + 1;
        v4[3] = result;
      }
      break;
    case 6:
      Function_2256948(*v4, 1, a3, a4);
      Function_201c63c(*(uint *)(*v4 + 64), 1, 3u, 0);
      Function_22571d4(*v4);
      result = v4[3] + 1;
      v4[3] = result;
      break;
    case 7:
      Function_200aae0(8, 0, -16, 10, 1);
      result = v4[3] + 1;
      v4[3] = result;
      break;
    case 8:
      result = Function_200ac1c(1);
      if ( result )
      {
        result = v4[3] + 1;
        v4[3] = result;
      }
      break;
    case 9:
      *(uint *)v4[1] = 1;
      result = Function_20067d0(result);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02256DB8) --------------------------------------------------------
uint *__fastcall Function_2256db8(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = Function_200679c((int)Function_2256de0, 16, 0xAu, 0xDu);
  result = (uint *)Function_201ced0((int)v4);
  *result = v2;
  result[1] = v3;
  result[2] = 0;
  result[3] = 0;
  return result;
}

//----- (02256DE0) --------------------------------------------------------
int __fastcall Function_2256de0(int result, int *a2)
{
  int *v2;
  uint v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a2[3];
  if ( v3 <= 9 )
    JUMPOUT(__CS__, *((short *)&off_2256DFA + v3) + 36007420);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_200aae0(8, -16, 0, 10, 1);
      result = v2[3] + 1;
      v2[3] = result;
      break;
    case 1:
      result = Function_200ac1c(1);
      if ( result )
      {
        result = v2[3] + 1;
        v2[3] = result;
      }
      break;
    case 2:
      Function_2257258(*v2);
      Function_22568dc(*v2);
      Function_2256ad4(*v2);
      Function_2256948(*v2, 0, v4, v5);
      Function_201c63c(*(uint *)(*v2 + 64), 1, 3u, -40);
      result = v2[3] + 1;
      v2[3] = result;
      break;
    case 3:
      result = Function_2257098(v2, 8, -5, 8);
      if ( result )
      {
        v2[2] = 0;
        result = v2[3] + 1;
        v2[3] = result;
      }
      break;
    case 4:
      Function_2259fc4(*v2 + 1248, 0, -8);
      result = v2[2] + 1;
      v2[2] = result;
      if ( result >= 8 )
      {
        v2[2] = 0;
        result = v2[3] + 1;
        v2[3] = result;
      }
      break;
    case 5:
      Function_200aae0(8, 0, -16, 10, 1);
      result = v2[3] + 1;
      v2[3] = result;
      break;
    case 6:
      result = Function_200ac1c(1);
      if ( result )
      {
        result = v2[3] + 1;
        v2[3] = result;
      }
      break;
    case 7:
      if ( !Function_2258218(*v2 + 872, 0, 0) )
        ErrorHandler();
      result = v2[3] + 1;
      v2[3] = result;
      break;
    case 8:
      result = Function_2258460(*v2 + 872);
      if ( result )
      {
        result = v2[3] + 1;
        v2[3] = result;
      }
      break;
    case 9:
      *(uint *)v2[1] = 1;
      result = Function_20067d0(result);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02256F38) --------------------------------------------------------
int __fastcall Function_2256f38(int *a1, int a2, ushort *a3)
{
  int *v3;
  ushort *v4;
  ushort *v5;
  char v6;
  int v7;
  int v8;
  int *i;
  int *j;
  int v12;

  v12 = a2;
  v3 = a1;
  v4 = a3;
  Function_2029f84(a1);
  Function_2029fac(v3, *(int **)(v12 + 132), v12 + 120);
  if ( v4 )
  {
    v5 = Function_2025f04(v4, 0xDu);
    v6 = GetGender((int)v4);
    Function_202a0ec(v3, (int)v5, v6);
    Function_20237bc_FreeMsg((int)v5, v7);
  }
  v8 = 0;
  for ( i = *(int **)(v12 + 28); i != (int *)(v12 + 20); i = (int *)i[2] )
  {
    if ( !i[1] )
      Function_2029fd0(v3, *i, v8++);
  }
  for ( j = *(int **)(v12 + 12); j != (int *)(v12 + 4); j = (int *)j[2] )
  {
    if ( !j[1] )
      Function_2029fd0(v3, *j, v8++);
  }
  Function_202a084(v3, *(uint *)(v12 + 116));
  return Function_2029f5c(v3);
}

//----- (02256FD8) --------------------------------------------------------
uint __fastcall Function_2256fd8(int *a1, int a2, int a3, ushort *a4)
{
  int *v4;
  ushort *v5;
  int v6;
  ushort *v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v14;
  int v15;

  v4 = a1;
  v14 = a2;
  v15 = a3;
  v5 = a4;
  v6 = malloc(0xDu, 172);
  Function_225764c();
  Function_202a284(v4, *(int **)(v14 + 132), v14 + 120);
  if ( v5 )
  {
    v7 = Function_2025f04(v5, 0xDu);
    v8 = GetGender((int)v5);
    Function_202a4b4(v4, (int)v7, v8);
    Function_20237bc_FreeMsg((int)v7, v9);
  }
  Function_2257778(v6, v14 + 20, 1);
  Function_2257778(v6, v14 + 4, 0);
  Function_225768c(v6);
  v10 = 0;
  v11 = 0;
  do
  {
    if ( Function_22576fc(v6, v11) == 1 )
    {
      v12 = (int *)Function_22576e8(v6, v11);
      Function_202a2a8(v4, *v12, v10++);
    }
    ++v11;
  }
  while ( v11 < 21 );
  Function_202a35c(v4, *(uint *)(v14 + 116));
  Function_202a378(v4, v15);
  Function_202a240(v4);
  return free(v6);
}

//----- (02257098) --------------------------------------------------------
BOOL __fastcall Function_2257098(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a1[2] < 8 )
    Function_2257ab0(*a1 + 1012, a2, a3);
  if ( v4[2] >= 1 )
  {
    Function_201c63c(*(uint *)(*v4 + 64), 2, 2u, v5);
    Function_201c63c(*(uint *)(*v4 + 64), 1, 2u, v5);
    Function_201c63c(*(uint *)(*v4 + 64), 2, 5u, v6);
    Function_201c63c(*(uint *)(*v4 + 64), 1, 5u, v6);
  }
  v8 = v4[2] + 1;
  v4[2] = v8;
  return v8 > v7;
}

//----- (02257104) --------------------------------------------------------
ushort *__fastcall Function_2257104(int a1)
{
  int v1;

  v1 = a1;
  Function_2019ebc(*(uint **)(a1 + 64), 3u);
  Function_2019184(*(uint *)(v1 + 64), 3u, 0, 0);
  Function_2019184(*(uint *)(v1 + 64), 3u, 3u, 0);
  Function_22574f4(v1, 0);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 1;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  REG_BG3CNT &= 0xFFFCu;
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_201ff0c(4u, 0);
  Function_201ff0c(8u, 1);
  Function_201ff0c(0x10u, 1);
  return Function_200f338(0);
}

//----- (0225718C) --------------------------------------------------------
uint __fastcall Function_225718c(int a1)
{
  int v1;

  v1 = a1;
  Function_2257548();
  Function_2019ebc(*(uint **)(v1 + 64), 3u);
  Function_22568dc(v1);
  SetBrightnessWithValue(0, 0);
  Function_20219a4(*(uint **)(v1 + 68), 1);
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 1);
  Function_201ff0c(4u, 1);
  return Function_201ff0c(0x10u, 1);
}

//----- (022571D4) --------------------------------------------------------
short *__fastcall Function_22571d4(int a1, int a2, int a3, int a4)
{
  int v4;
  short *result;
  int v6;
  int v7;
  int v8;
  int v9;
  char v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  Function_2019ebc(*(uint **)(a1 + 64), 3u);
  Function_2019184(*(uint *)(v4 + 64), 3u, 0, 0);
  Function_2019184(*(uint *)(v4 + 64), 3u, 3u, 0);
  v6 = *(uint *)(v4 + 64);
  v7 = 3;
  v8 = 0;
  v9 = 5;
  v10 = 25;
  v11 = 4;
  Function_2015958(*(uint *)(v4 + 1712), (int)&v6);
  Function_22574cc(v4, 1);
  result = &REG_BG0CNT;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 1;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  REG_BG3CNT &= 0xFFFCu;
  return result;
}

//----- (02257258) --------------------------------------------------------
int __fastcall Function_2257258(int a1)
{
  int v1;

  v1 = a1;
  Function_2015a54(*(int **)(a1 + 1712));
  Function_22574ec(v1);
  return Function_2019ebc(*(uint **)(v1 + 64), 3u);
}

//----- (02257278) --------------------------------------------------------
int __fastcall Function_2257278(int a1)
{
  int result;

  result = Function_20159fc(*(uint *)(a1 + 1712));
  switch ( result )
  {
    case 0:
      return 4;
    case 1:
      return 8;
    case 2:
      result = 9;
      break;
  }
  return result;
}

//----- (022572A0) --------------------------------------------------------
int __fastcall Function_22572a0(int a1, uint a2, char a3, char a4, uchar a5, uchar a6)
{
  int v6;
  uint v7;
  char v8;
  char v9;
  uchar v10;
  ushort **v11;
  ushort *v12;
  int v13;
  int v14;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = Function_2027b50(*(ushort **)(a1 + 1748));
  LoadFromNARC_PlFont2(0, 224, 14);
  Function_201a7e8(*(uint **)(v6 + 64), *(uint *)(v6 + 1716), 3, v8, v9, a5, a6, 7, 146);
  Function_201ada4_ClearTextBox(*(uint *)(v6 + 1716), 15);
  Function_200dd0c(*(uint **)(v6 + 64), 3u, 116, 8, v10, 14);
  Function_200e060(*(uint *)(v6 + 1716), 0, 116, 8u);
  v11 = (ushort **)LoadFromMsgNARC(0, 26, 385, 0xDu);
  v12 = Function_200b1ec_CallMsgDecrypt(v11, v7);
  Function_201d78c(*(uint *)(v6 + 1716), 1);
  Function_20237bc_FreeMsg((int)v12, v13);
  Function_200b190((ushort *)v11);
  return Function_201a954(*(uint *)(v6 + 1716), v14);
}

//----- (02257368) --------------------------------------------------------
int __fastcall Function_2257368(int a1, uint a2)
{
  int v2;
  uint v3;
  ushort **v4;
  ushort *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  Function_201ada4_ClearTextBox(*(uint *)(a1 + 1716), 15);
  v4 = (ushort **)LoadFromMsgNARC(0, 26, 385, 0xDu);
  v5 = Function_200b1ec_CallMsgDecrypt(v4, v3);
  v6 = Function_2023790(256, 0xDu);
  Function_200c388(*(uint **)(v2 + 1760), v6, (int)v5);
  Function_201d78c(*(uint *)(v2 + 1716), 1);
  Function_20237bc_FreeMsg(v6, v7);
  Function_20237bc_FreeMsg((int)v5, v8);
  Function_200b190((ushort *)v4);
  return Function_201a954(*(uint *)(v2 + 1716), v9);
}

//----- (022573EC) --------------------------------------------------------
int __fastcall Function_22573ec(int a1, uint a2)
{
  int v2;
  uint v3;
  ushort **v4;
  ushort *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  if ( *(uint *)(a1 + 1756) )
    ErrorHandler();
  Function_201ada4_ClearTextBox(*(uint *)(v2 + 1716), 15);
  v4 = (ushort **)LoadFromMsgNARC(0, 26, 385, 0xDu);
  v5 = Function_200b1ec_CallMsgDecrypt(v4, v3);
  *(uint *)(v2 + 1756) = Function_2023790(256, 0xDu);
  Function_200c388(*(uint **)(v2 + 1760), *(uint *)(v2 + 1756), (int)v5);
  if ( !*(uchar *)(*(uint *)(v2 + 1744) + 22) )
    Function_2027ac0(*(ushort **)(v2 + 1748));
  v6 = *(uint *)(v2 + 1756);
  v7 = Function_201d78c(*(uint *)(v2 + 1716), 1);
  Function_20237bc_FreeMsg((int)v5, v8);
  Function_200b190((ushort *)v4);
  Function_201a954(*(uint *)(v2 + 1716), v9);
  return v7;
}

//----- (02257498) --------------------------------------------------------
int __fastcall Function_2257498(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 1756), a2);
  result = 1756;
  *(uint *)(v2 + 1756) = 0;
  return result;
}

//----- (022574B0) --------------------------------------------------------
uint __fastcall Function_22574b0(int a1)
{
  int v1;

  v1 = a1;
  Function_201acf4(*(uint *)(a1 + 1716));
  return Function_201a8fc(*(uint *)(v1 + 1716));
}

//----- (022574CC) --------------------------------------------------------
int __fastcall Function_22574cc(int a1, uint a2)
{
  return Function_22572a0(a1, a2, 2, 1, 0x1Bu, 2u);
}

//----- (022574E4) --------------------------------------------------------
int __fastcall Function_22574e4(int a1, uint a2)
{
  return Function_2257368(a1, a2);
}

//----- (022574EC) --------------------------------------------------------
uint __fastcall Function_22574ec(int a1)
{
  return Function_22574b0(a1);
}

//----- (022574F4) --------------------------------------------------------
uint *__fastcall Function_22574f4(int a1, uint a2)
{
  int v2;
  uint *result;

  v2 = a1;
  Function_22572a0(a1, a2, 2, 19, 0x1Bu, 4u);
  result = Function_200b358(0xDu);
  *(uint *)(v2 + 1760) = result;
  return result;
}

//----- (0225751C) --------------------------------------------------------
int __fastcall Function_225751c(int a1, uint a2)
{
  return Function_22573ec(a1, a2);
}

//----- (02257524) --------------------------------------------------------
uint __fastcall Function_2257524(int a1, uint a2, int a3)
{
  return Function_200b60c(*(uint *)(a1 + 1760), a2, a3, 2, 0, 1);
}

//----- (02257540) --------------------------------------------------------
int __fastcall Function_2257540(int a1, int a2)
{
  return Function_2257498(a1, a2);
}

//----- (02257548) --------------------------------------------------------
int __fastcall Function_2257548(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_22574b0(a1);
  Function_200b3f0(*(uint **)(v1 + 1760), v2);
  result = 1760;
  *(uint *)(v1 + 1760) = 0;
  return result;
}

//----- (02257564) --------------------------------------------------------
int __fastcall Function_2257564(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2257d00(a1 + 1012);
  return Function_225a6b8(v1 + 1376, v2);
}

//----- (02257580) --------------------------------------------------------
int __fastcall Function_2257580(char a1)
{
  int v1;

  switch ( a1 )
  {
    case 0:
      v1 = 5;
      break;
    case 1:
      v1 = 10;
      break;
    case 2:
      v1 = 15;
      break;
    case 3:
      v1 = 20;
      break;
    default:
      ErrorHandler();
      break;
  }
  return v1;
}

//----- (022575B4) --------------------------------------------------------
short *__fastcall Function_22575b4(int a1, int a2, int a3, int a4)
{
  int v4;
  short *result;
  int v6;
  int v7;
  int v8;
  int v9;
  char v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v6 = *(uint *)(a1 + 64);
  v7 = 3;
  v8 = 0;
  v9 = 5;
  v10 = 25;
  v11 = 4;
  Function_2015a54(*(int **)(a1 + 1712));
  Function_2015958(*(uint *)(v4 + 1712), (int)&v6);
  Function_22574e4(v4, 2u);
  result = &REG_BG0CNT;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 1;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  REG_BG3CNT &= 0xFFFCu;
  return result;
}

//----- (02257624) --------------------------------------------------------
int __fastcall Function_2257624(int a1)
{
  int result;

  result = Function_20159fc(*(uint *)(a1 + 1712));
  switch ( result )
  {
    case 0:
      return 5;
    case 1:
      return 6;
    case 2:
      result = 7;
      break;
  }
  return result;
}

//----- (0225764C) --------------------------------------------------------
int *__fastcall Function_225764c(int *a1)
{
  return Call_FillMemWithValue(a1, 0, 0xACu);
}

//----- (02257658) --------------------------------------------------------
int __fastcall Function_2257658(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( !a2 )
    ErrorHandler();
  *(uint *)(v4 + 8 * *(uint *)(v4 + 168)) = v3;
  *(uint *)(v4 + 8 * *(uint *)(v4 + 168) + 4) = v5;
  result = *(uint *)(v4 + 168) + 1;
  *(uint *)(v4 + 168) = result;
  return result;
}

//----- (0225768C) --------------------------------------------------------
int *__fastcall Function_225768c(int a1)
{
  int v1;
  int *result;
  int v3;
  int i;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  result = (int *)(a1 + 168);
  v3 = *result;
  for ( i = 0; i < v3; v3 = *(uint *)(v1 + 168) )
  {
    v5 = v1 + 8 * i;
    if ( *(uint *)(v5 + 4) == 1 )
    {
      v6 = 0;
      if ( v3 > 0 )
      {
        v7 = v1;
        do
        {
          if ( !*(uint *)(v7 + 4) && Function_225771c(v5, v7) == 1 )
            *(uint *)(v7 + 4) = 1;
          ++v6;
          v7 += 8;
        }
        while ( v6 < *(uint *)(v1 + 168) );
      }
      *(uint *)(v5 + 4) = 2;
      i = 0;
    }
    else
    {
      ++i;
    }
    result = (int *)(v1 + 168);
  }
  return result;
}

//----- (022576E8) --------------------------------------------------------
int __fastcall Function_22576e8(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x15 )
    ErrorHandler();
  return *(uint *)(v3 + 8 * v2);
}

//----- (022576FC) --------------------------------------------------------
BOOL __fastcall Function_22576fc(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x15 )
    ErrorHandler();
  return *(uint *)(v3 + 8 * v2 + 4) != 0;
}

//----- (0225771C) --------------------------------------------------------
int __fastcall Function_225771c(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12;
  char v13;

  v2 = a1;
  v3 = a2;
  Function_2259780(*a1, &v13, &v12);
  Function_2259724(*v2, &v8, &v9, &v10, &v11);
  v4 = 0;
  do
  {
    Function_22577ec(v8, v9, v10, v11, v4, &v7, &v6);
    if ( Function_2259578(*v3, v7, v6) == 1 )
      return 1;
    ++v4;
  }
  while ( v4 < 16 );
  return 0;
}

//----- (02257778) --------------------------------------------------------
int __fastcall Function_2257778(int result, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = *(uint *)(a2 + 8);
  v5 = result;
  v6 = a3;
  if ( v4 != a2 )
  {
    do
    {
      result = *(uint *)(v4 + 4);
      if ( !result )
        result = Function_2257658(v5, v4, v6);
      v4 = *(uint *)(v4 + 8);
    }
    while ( v4 != v3 );
  }
  return result;
}

//----- (022577A0) --------------------------------------------------------
int __fastcall Function_22577a0(int result)
{
  uchar *v1;
  int v2;
  int v3;
  int v4;

  v1 = *(uchar **)(result + 1744);
  v2 = 0;
  if ( !v1[22] )
    return Function_225a6cc(result + 1376, 0);
  if ( v1[20] == v1[21] )
  {
    v3 = 0;
    v4 = *(uint *)(result + 1744);
    do
    {
      if ( *(uchar *)(v4 + 16) == 1 )
        ++v2;
      ++v3;
      ++v4;
    }
    while ( v3 < 4 );
    if ( v1[23] <= v2 )
      result = Function_225a6cc(result + 1376, 0);
  }
  return result;
}

//----- (022577EC) --------------------------------------------------------
int __fastcall Function_22577ec(int a1, int a2, int a3, int a4, char a5, int *a6, int *a7)
{
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

  v7 = a1;
  v13 = a2;
  v8 = a3;
  v14 = a4;
  v9 = u32_div_f(a4 - a3, 3);
  v15 = v8 + 2 * v9;
  v16 = v8 + v9;
  v10 = u32_div_f(v13 - v7, 3);
  v11 = v7 + v10;
  result = v7 + 2 * v10;
  switch ( a5 )
  {
    case 0:
      *a6 = v8;
      *a7 = v7;
      break;
    case 1:
      *a6 = v8;
      *a7 = v11;
      break;
    case 2:
      *a6 = v8;
      *a7 = result;
      break;
    case 3:
      result = v13;
      *a6 = v8;
      *a7 = v13;
      break;
    case 4:
      result = v16;
      *a6 = v16;
      *a7 = v7;
      break;
    case 5:
      result = v16;
      *a6 = v16;
      *a7 = v11;
      break;
    case 6:
      *a6 = v16;
      *a7 = result;
      break;
    case 7:
      *a6 = v16;
      result = v13;
      *a7 = v13;
      break;
    case 8:
      result = v15;
      *a6 = v15;
      *a7 = v7;
      break;
    case 9:
      result = v15;
      *a6 = v15;
      *a7 = v11;
      break;
    case 10:
      *a6 = v15;
      *a7 = result;
      break;
    case 11:
      *a6 = v15;
      result = v13;
      *a7 = v13;
      break;
    case 12:
      result = v14;
      *a6 = v14;
      *a7 = v7;
      break;
    case 13:
      result = v14;
      *a6 = v14;
      *a7 = v11;
      break;
    case 14:
      *a6 = v14;
      *a7 = result;
      break;
    case 15:
      *a6 = v14;
      result = v13;
      *a7 = v13;
      break;
    default:
      return result;
  }
  return result;
}

//----- (022578F4) --------------------------------------------------------
int __fastcall Function_22578f4(uint *a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  a1[11] = *a2;
  a1[12] = a2[1];
  a1[13] = a2[2];
  a1[14] = a2[3];
  a1[15] = a2[4];
  a1[16] = a2[5];
  a1[17] = a2[6];
  a1[29] = 0;
  *a1 = a2[7];
  v3 = (int)(a1 + 1);
  v2[3] = v3;
  v2[4] = v3;
  v2[7] = v2 + 5;
  v2[8] = v2 + 5;
  v2[9] = 0;
  v2[10] = a2[8];
  v4 = Function_22594c0(*v2, v2 + 30, 3);
  return Function_2259520(v4, v2 + 5);
}

//----- (02257948) --------------------------------------------------------
int *__fastcall Function_2257948(int *a1)
{
  int *v1;

  v1 = a1;
  Function_22579f0();
  Function_2257a98(v1);
  return Call_FillMemWithValue(v1, 0, 0x88u);
}

//----- (02257964) --------------------------------------------------------
int __fastcall Function_2257964(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;

  v6 = a1;
  v7 = a4;
  Function_22590c0(a1 + 120, *(uint *)(a1 + 60), a2, a3);
  Function_22591d0(v6 + 120, a6);
  return Function_22591ec(v6 + 120, v7, a5);
}

//----- (02257998) --------------------------------------------------------
int __fastcall Function_2257998(int a1, int a2, int a3)
{
  return Function_22590c0(a1 + 120, *(uint *)(a1 + 60), a2, a3);
}

//----- (022579B4) --------------------------------------------------------
int __fastcall Function_22579b4(int a1, int a2, int a3, int a4)
{
  return Function_22590d4(a1 + 120, *(uint *)(a1 + 60), a2, a3, a4, 1);
}

//----- (022579D8) --------------------------------------------------------
int __fastcall Function_22579d8(int a1, int a2)
{
  return Function_2259520(a2, *(uint *)(a1 + 32));
}

//----- (022579E8) --------------------------------------------------------
int Function_22579e8()
{
  return Function_2259530();
}

//----- (022579F0) --------------------------------------------------------
int __fastcall Function_22579f0(int a1)
{
  return Function_22591b8(a1 + 120);
}

//----- (022579FC) --------------------------------------------------------
int __fastcall Function_22579fc(int a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int v6;
  uint *v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v5 = (uint *)a1;
  if ( *(uint *)(a1 + 36) >= *(uint *)(a1 + 40) )
    return 0;
  v10 = *(uint *)(a1 + 68);
  v11 = *(uint *)(a1 + 44);
  v12 = *(uint *)(*(uint *)(a1 + 48) + 4 * a2);
  v6 = **(uint **)(a1 + 52);
  v14 = a3;
  v15 = a4;
  v16 = a2;
  v13 = v6;
  v17 = *(uchar *)(v5[14] + a2);
  v7 = Function_2254e20(&v10);
  Function_2254f6c((int)v7, a5);
  v8 = Function_22594c0(*v5, v7, 0);
  Function_2259520(v8, v5 + 1);
  ++v5[9];
  return 1;
}

//----- (02257A5C) --------------------------------------------------------
int __fastcall Function_2257a5c(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 36) >= *(uint *)(a1 + 40) )
    return 0;
  Function_2257dec();
  ++*(uint *)(v1 + 36);
  return 1;
}

//----- (02257A80) --------------------------------------------------------
int __fastcall Function_2257a80(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  Function_2259530(a2);
  result = *(uint *)(v2 + 36) - 1;
  *(uint *)(v2 + 36) = result;
  if ( result < 0 )
    result = ErrorHandler();
  return result;
}

//----- (02257A98) --------------------------------------------------------
int __fastcall Function_2257a98(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2259540(a1 + 4);
  Function_2259540(v1 + 20);
  result = 0;
  *(uint *)(v1 + 36) = 0;
  return result;
}

//----- (02257AB0) --------------------------------------------------------
int __fastcall Function_2257ab0(int a1)
{
  int v1;

  v1 = a1;
  Function_22596ec(a1 + 4);
  return Function_22596ec(v1 + 20);
}

//----- (02257ACC) --------------------------------------------------------
int __fastcall Function_2257acc(int a1)
{
  return Function_22596ec(a1 + 20);
}

//----- (02257AD8) --------------------------------------------------------
int __fastcall Function_2257ad8(int a1)
{
  int v1;

  v1 = a1;
  Function_22596ec(a1 + 4);
  Function_22596ec(v1 + 4);
  Function_22596ec(v1 + 20);
  return Function_22596ec(v1 + 20);
}

//----- (02257B10) --------------------------------------------------------
int __fastcall Function_2257b10(int a1)
{
  return Function_2257b1c(a1, -1);
}

//----- (02257B1C) --------------------------------------------------------
int __fastcall Function_2257b1c(int result, int a2)
{
  int v2;
  int *v3;
  int v4;
  int i;
  int v6;
  int *v7;
  int j;
  int v9;

  v2 = result;
  v3 = *(int **)(result + 28);
  v4 = result + 20;
  for ( i = a2; v3 != (int *)v4; --i )
  {
    v6 = *v3;
    if ( v3[1] )
      result = Function_22591d0(v6, i);
    else
      result = Function_2254f6c(v6, i);
    v3 = (int *)v3[2];
  }
  v7 = *(int **)(v2 + 12);
  for ( j = i - 8; v7 != (int *)(v2 + 4); --j )
  {
    v9 = *v7;
    if ( v7[1] )
      result = Function_22591d0(v9, j);
    else
      result = Function_2254f6c(v9, j);
    v7 = (int *)v7[2];
  }
  return result;
}

//----- (02257B74) --------------------------------------------------------
int __fastcall Function_2257b74(int result, int a2)
{
  int v2;
  int *v3;
  int v4;
  int i;
  int v6;
  int v7;
  int v8;
  int *j;
  int v10;
  int v11;
  int v12;

  v2 = result;
  v3 = *(int **)(result + 28);
  v4 = result + 20;
  for ( i = a2; v3 != (int *)v4; v3 = (int *)v3[2] )
  {
    v6 = *v3;
    if ( v3[1] )
    {
      v8 = Function_22_22591e0(v6);
      result = Function_22591d0(*v3, v8 + i);
    }
    else
    {
      v7 = Function_2254f78(v6);
      result = Function_2254f6c(*v3, v7 + i);
    }
  }
  for ( j = *(int **)(v2 + 12); j != (int *)(v2 + 4); j = (int *)j[2] )
  {
    v10 = *j;
    if ( j[1] )
    {
      v12 = Function_22_22591e0(v10);
      result = Function_22591d0(*j, v12 + i);
    }
    else
    {
      v11 = Function_2254f78(v10);
      result = Function_2254f6c(*j, v11 + i);
    }
  }
  return result;
}

//----- (02257BE8) --------------------------------------------------------
BOOL Function_2257be8()
{
  char v1;
  char v2;
  char v3;
  char v4;

  v1 = 18;
  v2 = -113;
  v3 = -118;
  v4 = -10;
  return Function_2022734((uchar *)&v1);
}

//----- (02257C04) --------------------------------------------------------
BOOL __fastcall Function_2257c04(int a1, int a2, int a3)
{
  char v4;
  char v5;
  char v6;
  char v7;

  v4 = 18;
  v5 = -113;
  v6 = -118;
  v7 = -10;
  return Function_2022830((uchar *)&v4, a2, a3);
}

//----- (02257C20) --------------------------------------------------------
int __fastcall Function_2257c20(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;

  v4 = *(uint *)(a1 + 28);
  v10 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v11 = a1 + 20;
  if ( v4 == a1 + 20 )
  {
LABEL_5:
    v9 = *(uint *)(v10 + 12);
    if ( v9 == v10 + 4 )
    {
LABEL_9:
      result = 0;
    }
    else
    {
      while ( Function_22595ac(v9, v5, v6, v7) != 1 )
      {
        v9 = *(uint *)(v9 + 8);
        if ( v9 == v10 + 4 )
          goto LABEL_9;
      }
      result = v9;
    }
  }
  else
  {
    while ( Function_22595ac(v4, v5, v6, v7) != 1 )
    {
      v4 = *(uint *)(v4 + 8);
      if ( v4 == v11 )
        goto LABEL_5;
    }
    result = v4;
  }
  return result;
}

//----- (02257C88) --------------------------------------------------------
int __fastcall Function_2257c88(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
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

  v20 = a4;
  v4 = a1;
  v5 = a2;
  v8 = *(uint *)(a1 + 64);
  v6 = 4 * a2;
  v9 = 25;
  v10 = v6 + 134;
  v11 = v6 + 135;
  v13 = 136;
  v14 = 16;
  v15 = 2;
  v16 = 1;
  v17 = 13;
  v18 = 0;
  v12 = v6 + 136;
  v19 = a3;
  result = Function_22597bc(a1 + 72, &v8);
  *(uint *)(v4 + 116) = v5;
  return result;
}

//----- (02257CD4) --------------------------------------------------------
int __fastcall Function_2257cd4(int a1)
{
  return Function_2259804(a1 + 72);
}

//----- (02257CE0) --------------------------------------------------------
int __fastcall Function_2257ce0(int a1, int *a2, int *a3)
{
  int v3;
  int *v4;
  int result;

  v3 = a1;
  v4 = a3;
  *a2 = Function_20080c0(*(uint *)(a1 + 120), 0);
  result = Function_20080c0(*(uint *)(v3 + 120), 1u);
  *v4 = result;
  return result;
}

//----- (02257D00) --------------------------------------------------------
int __fastcall Function_2257d00(int a1)
{
  return *(uint *)(a1 + 36);
}

//----- (02257D04) --------------------------------------------------------
int *__fastcall Function_2257d04(int a1, int *a2, int *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int i;
  int v8;
  int v9;
  int v10;
  int v11;
  int *result;
  int *v13;
  int *v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = *(uint *)(a1 + 28);
  v5 = 0;
  v6 = a1 + 20;
  v13 = a2;
  v14 = a3;
  for ( i = 0; v4 != v6; v4 = *(uint *)(v4 + 8) )
  {
    Function_2257ec8(v4, &v16, &v15);
    if ( v5 >= 0 )
      v8 = v5;
    else
      v8 = -v5;
    if ( v16 >= 0 )
      v9 = v16;
    else
      v9 = -v16;
    if ( v9 > v8 )
      v5 = v16;
    if ( i >= 0 )
      v10 = i;
    else
      v10 = -i;
    if ( v15 >= 0 )
      v11 = v15;
    else
      v11 = -v15;
    if ( v11 > v10 )
      i = v15;
  }
  *v13 = v5;
  result = v14;
  *v14 = i;
  return result;
}

//----- (02257D70) --------------------------------------------------------
int __fastcall Function_2257d70(int a1, int a2)
{
  int v2;
  int v3;
  int i;
  int *v5;
  int result;
  uint *j;
  int v8;

  v2 = *(uint *)(a1 + 28);
  v3 = a1 + 20;
  v8 = a1;
  for ( i = a2; v2 != v3; v2 = *(uint *)(v2 + 8) )
  {
    if ( *(uint *)(v2 + 4) )
    {
      v5 = *(int **)v2;
      Function_2007dec(**(uint **)v2, 0x18u, (i >> 10) & 0x1F);
      Function_2007dec(*v5, 0x19u, (i >> 5) & 0x1F);
      Function_2007dec(*v5, 0x1Au, i & 0x1F);
    }
    else
    {
      Function_201529c(*(uint *)(*(uint *)v2 + 4), i);
    }
  }
  result = v8;
  for ( j = *(uint **)(v8 + 12); j != (uint *)(v8 + 4); j = (uint *)j[2] )
    result = Function_201529c(*(uint *)(*j + 4), i);
  return result;
}

//----- (02257DEC) --------------------------------------------------------
int __fastcall Function_2257dec(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
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

  v28 = a4;
  v10 = a1;
  v12 = a3;
  v11 = a2;
  v4 = a4;
  Function_2259648(a2, &v27, &v26);
  Function_2259698(v11, &v25, &v24);
  Function_22596b0(v11, &v23, &v19, &v22, &v18);
  v5 = 0;
  v15 = *(uint *)(v4 + 472);
  v6 = v27;
  v7 = v23;
  v8 = 0;
  v14 = v27 + v25 - v19;
  v16 = v26;
  v13 = v26 + v24 - v18;
  v17 = v22;
  do
  {
    Function_22577ec(v16 + v17, v13, v6 + v7, v14, v8++, &v21, &v20);
    v5 |= Function_22592f0(v10 + 120, v21, v20, v15);
  }
  while ( v8 < 16 );
  if ( v5 )
  {
    if ( v12 )
      result = Function_2259520(v11, v10 + 20);
    else
      result = Function_2259520(v11, *(uint *)(v10 + 32));
  }
  else if ( v12 )
  {
    result = Function_2259520(v11, v10 + 4);
  }
  else
  {
    result = Function_2259520(v11, *(uint *)(v10 + 16));
  }
  return result;
}

//----- (02257EC8) --------------------------------------------------------
int __fastcall Function_2257ec8(int a1, uint *a2, int *a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  int v7;
  int result;
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

  v18 = a4;
  v4 = a2;
  v5 = a3;
  v6 = a1;
  Function_2259698(a1, &v17, &v16);
  Function_2259648(v6, &v15, &v14);
  Function_22596b0(v6, &v13, &v11, &v12, &v10);
  v7 = 18 - (v14 + v12);
  result = v10;
  v9 = v14 + v16 - v10 - 143;
  if ( 138 - (v15 + v13) <= 0 )
  {
    if ( v15 + v17 - v11 - 246 <= 0 )
    {
      result = 0;
      *v4 = 0;
    }
    else
    {
      result = 246 - (v15 + v17 - v11);
      *v4 = 246 - (v15 + v17 - v11);
    }
  }
  else
  {
    *v4 = 138 - (v15 + v13);
  }
  if ( v7 <= 0 )
  {
    if ( v9 <= 0 )
    {
      result = 0;
      *v5 = 0;
    }
    else
    {
      result = -v9;
      *v5 = -v9;
    }
  }
  else
  {
    *v5 = v7;
  }
  return result;
}

//----- (02257F50) --------------------------------------------------------
int __fastcall Function_2257f50(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;

  v2 = a2;
  v3 = a1;
  a1[17] = *a2;
  a1[18] = a2[1];
  a1[19] = a2[2];
  a1[20] = a2[3];
  a1[21] = a2[4];
  a1[22] = a2[5];
  a1[2] = a2[6];
  a1[1] = a2[10];
  Function_2258354(a1, 0);
  return Function_2258470(v3, v2);
}

//----- (02257F88) --------------------------------------------------------
int *__fastcall Function_2257f88(int *a1)
{
  int *v1;
  int v2;
  int v3;

  v1 = a1;
  Function_22581c0(a1);
  v2 = 0;
  v3 = (int)(v1 + 3);
  do
  {
    Function_2258534(v3);
    ++v2;
    v3 += 12;
  }
  while ( v2 < 4 );
  return Call_FillMemWithValue(v1, 0, 0x8Cu);
}

//----- (02257FB0) --------------------------------------------------------
uint __fastcall Function_2257fb0(uint result, int a2, int a3)
{
  uint v3;
  uint v4;

  if ( result )
  {
    if ( result == 1 )
    {
      v3 = Function_22589bc(a3);
      result = s32_div_f(v3, 9);
    }
    else if ( result == 2 )
    {
      v4 = Function_22589bc(a3);
      result = s32_div_f(v4, 9);
    }
  }
  else if ( a2 > 5 )
  {
    if ( a2 > 11 )
    {
      if ( a2 > 17 )
      {
        if ( a2 > 21 )
        {
          if ( a2 > 28 )
          {
            if ( a2 > 33 )
            {
              if ( a2 > 38 )
              {
                if ( a2 > 42 )
                {
                  if ( a2 > 49 )
                  {
                    if ( a2 > 55 )
                    {
                      if ( a2 > 60 )
                      {
                        if ( a2 > 71 )
                        {
                          if ( a2 > 91 )
                          {
                            if ( a2 <= 99 )
                              result = 13;
                          }
                          else
                          {
                            result = 12;
                          }
                        }
                        else
                        {
                          result = 11;
                        }
                      }
                      else
                      {
                        result = 10;
                      }
                    }
                    else
                    {
                      result = 9;
                    }
                  }
                  else
                  {
                    result = 8;
                  }
                }
                else
                {
                  result = 7;
                }
              }
              else
              {
                result = 6;
              }
            }
            else
            {
              result = 5;
            }
          }
          else
          {
            result = 4;
          }
        }
        else
        {
          result = 3;
        }
      }
      else
      {
        result = 2;
      }
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (0225804C) --------------------------------------------------------
int __fastcall Function_225804c(int result, int a2, uint *a3, int *a4, int a5, int a6, int a7)
{
  uint *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v7 = a3;
  v8 = a4;
  if ( result )
  {
    if ( result == 1 || result == 2 )
    {
      v13 = Function_22589bc(a7);
      result = Function_2258610(v13, v7, v8);
    }
  }
  else
  {
    *a3 = 10;
    *a4 = 18;
    v9 = Function_201d35c();
    u32_div_f(v9, 108 - a5);
    *v7 += v10;
    v11 = Function_201d35c();
    u32_div_f(v11, 125 - a6);
    result = *v8 + v12;
    *v8 = result;
  }
  return result;
}

//----- (022580A4) --------------------------------------------------------
int __fastcall Function_22580a4(int *a1, uint a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  uint v8;
  uint v9;
  uint *v10;
  int v11;
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

  v26 = a4;
  v5 = a1;
  v6 = a1[22];
  v7 = a3;
  v24 = a3;
  v18 = v6;
  v8 = a2;
  v19 = v5[17];
  v22 = 0;
  v23 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v13 = a3 + 100;
      v4 = a3 + 1;
      v25 = 0;
    }
    else if ( a2 == 2 )
    {
      v13 = a3 + 100;
      v4 = a3 + 1;
      v25 = 0;
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    v13 = a3;
    v4 = 0;
    v25 = *(uchar *)(v5[20] + a3);
  }
  v20 = *(uint *)(v5[18] + 4 * v13);
  v21 = *(uint *)(v5[19] + 4 * v4);
  if ( !v20 )
    ErrorHandler();
  if ( !v21 )
    ErrorHandler();
  v9 = Function_2257fb0(v8, v7, v5[1]);
  v10 = Function_2254e20(&v18);
  v11 = Function_22594c0(v5[2], v10, v8);
  Function_2259520(v11, *(uint *)(v5[3 * v8 + 3] + 16 * v9 + 12));
  Function_2259698(v11, &v15, &v14);
  Function_225804c(v8, v7, &v17, &v16, v15, v14, v5[1]);
  Function_22595f8(v11, v17, v16);
  return Function_22585e8(v5, v10, v8, v9);
}

//----- (0225818C) --------------------------------------------------------
int __fastcall Function_225818c(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  Function_2259520(a4, *(uint *)(a1 + 12 * a2 + 12) + 16 * a3);
  return Function_22585e8(v5, *v6, v4, v7);
}

//----- (022581B8) --------------------------------------------------------
int __fastcall Function_22581b8(int a1)
{
  return Function_2259530(a1);
}

//----- (022581C0) --------------------------------------------------------
int __fastcall Function_22581c0(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;

  v1 = a1;
  v2 = 0;
  do
  {
    result = *(uint *)(v1 + 16);
    v4 = 0;
    if ( result > 0 )
    {
      v5 = 0;
      do
      {
        Function_2259540(*(uint *)(v1 + 12) + v5);
        result = *(uint *)(v1 + 16);
        ++v4;
        v5 += 16;
      }
      while ( v4 < result );
    }
    ++v2;
    v1 += 12;
  }
  while ( v2 < 3 );
  return result;
}

//----- (022581EC) --------------------------------------------------------
uint Function_22581ec()
{
  int v0;
  uint result;
  int *v2;
  int *v3;

  v0 = -1;
  result = Function_225855c();
  v2 = (int *)result;
  v3 = *(int **)(result + 8);
  if ( v3 != (int *)result )
  {
    do
    {
      result = v3[1];
      if ( result <= 2 )
        result = Function_2254f6c(*v3, v0);
      v3 = (int *)v3[2];
      --v0;
    }
    while ( v3 != v2 );
  }
  return result;
}

//----- (02258218) --------------------------------------------------------
int __fastcall Function_2258218(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a1[15] )
    return 0;
  v6 = a1[3 * *a1 + 5];
  Function_225864c(a1);
  *v3 = v4;
  v3[3 * v4 + 5] = v5;
  Function_22581ec();
  return 1;
}

//----- (02258258) --------------------------------------------------------
int __fastcall Function_2258258(uint *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v10;
  int v11;
  int v12;

  v11 = a2;
  v10 = a1;
  v12 = a3;
  v3 = Function_2258424(a1, a2);
  v4 = 1;
  v5 = (int)&v10[3 * v11];
  if ( *(uint *)(v5 + 16) <= 1 )
    return 0;
  while ( 1 )
  {
    if ( v12 )
    {
      v7 = v3 - v4;
      if ( v3 - v4 < 0 )
        v7 += *(uint *)(v5 + 16);
    }
    else
    {
      s32_div_f(v4 + v3, *(uint *)(v5 + 16));
      v7 = v6;
    }
    v8 = Function_2258584(v10, v11, v7);
    if ( *(uint *)(v8 + 8) != v8 )
      break;
    if ( ++v4 >= *(uint *)(v5 + 16) )
      return 0;
  }
  return Function_2258218(v10, v11, v7);
}

//----- (022582C0) --------------------------------------------------------
uint __fastcall Function_22582c0(uint *a1, int a2, int a3)
{
  int v3;
  uint *v4;
  int v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  ((void (*)(void))Function_22584e0)();
  *v4 = v3;
  v4[3 * v3 + 5] = v5;
  Function_22584e0(v4, 1);
  return Function_22581ec();
}

//----- (022582E8) --------------------------------------------------------
BOOL Function_22582e8()
{
  char v1;
  char v2;
  char v3;
  char v4;

  v1 = 18;
  v2 = -113;
  v3 = 10;
  v4 = 118;
  return Function_2022734((uchar *)&v1);
}

//----- (02258304) --------------------------------------------------------
BOOL __fastcall Function_2258304(int a1, int a2, int a3)
{
  char v4;
  char v5;
  char v6;
  char v7;

  v4 = 18;
  v5 = -113;
  v6 = 10;
  v7 = 118;
  return Function_2022830((uchar *)&v4, a2, a3);
}

//----- (02258320) --------------------------------------------------------
int __fastcall Function_2258320(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v4 = a2;
  v5 = a3;
  v9 = a4;
  v6 = Function_225855c();
  v7 = *(uint *)(v6 + 8);
  if ( v7 == v6 )
    return 0;
  while ( Function_22595ac(v7, v4, v5, v9) != 1 )
  {
    v7 = *(uint *)(v7 + 8);
    if ( v7 == v6 )
      return 0;
  }
  return v7;
}

//----- (02258354) --------------------------------------------------------
int __fastcall Function_2258354(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
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

  v20 = a4;
  v4 = a1;
  v5 = a2;
  v8 = *(uint *)(a1 + 84);
  v6 = 2 * a2;
  v9 = 25;
  v10 = v6 + 129;
  v11 = 133;
  v13 = 8;
  v14 = 129;
  v15 = 3;
  v16 = 1;
  v17 = 2;
  v18 = 0;
  v19 = 14;
  v12 = v6 + 130;
  result = Function_22597bc(a1 + 92, &v8);
  *(uint *)(v4 + 64) = v5;
  return result;
}

//----- (022583A0) --------------------------------------------------------
int __fastcall Function_22583a0(int a1, int a2, char a3, int a4, int a5)
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

  v23 = a4;
  v5 = a1;
  v6 = a2;
  v11 = *(uint *)(a1 + 84);
  v7 = 2 * a2;
  v12 = 25;
  v13 = v7 + 129;
  v14 = 133;
  v16 = 8;
  v15 = v7 + 130;
  v17 = 129;
  v18 = 3;
  v20 = 2;
  v8 = 0;
  v19 = 1;
  v21 = 0;
  v22 = 14;
  if ( a3 & 1 )
    v8 = 112;
  if ( a3 & 2 )
    v9 = 129;
  else
    v9 = 0;
  result = Function_22598f4(
             a1 + 92,
             &v11,
             v8,
             v9,
             a4,
             a5,
             v11,
             v12,
             v13,
             v14,
             v15,
             v16,
             v17,
             v18,
             v19,
             v20,
             v21,
             v22,
             v23);
  *(uint *)(v5 + 64) = v6;
  return result;
}

//----- (02258408) --------------------------------------------------------
int __fastcall Function_2258408(int a1)
{
  return Function_2259804(a1 + 92);
}

//----- (02258414) --------------------------------------------------------
int __fastcall Function_2258414(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)v1;
}

//----- (02258424) --------------------------------------------------------
int __fastcall Function_2258424(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    ErrorHandler();
  v4 = *(uint *)(v2 + 12 * v3 + 16);
  return *(uint *)(v2 + 12 * v3 + 20);
}

//----- (0225844C) --------------------------------------------------------
int __fastcall Function_225844c(int a1, int a2, int a3)
{
  int v3;

  v3 = Function_2258584(a1, a2, a3);
  return Function_22596ec(v3);
}

//----- (02258460) --------------------------------------------------------
BOOL __fastcall Function_2258460(int a1)
{
  return *(uint *)(a1 + 60) == 0;
}

//----- (02258470) --------------------------------------------------------
int __fastcall Function_2258470(uint *a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = a1;
  Function_22584f0(a1 + 3, *(uint *)(a2 + 28));
  *v3 = 0;
  Function_22584ac(v3[3], 1);
  Function_22584f0(v3 + 6, *(uint *)(v2 + 32));
  Function_22584f0(v3 + 9, *(uint *)(v2 + 36));
  return Function_22584f0(v3 + 12, 1);
}

//----- (022584AC) --------------------------------------------------------
uint __fastcall Function_22584ac(uint result, int a2)
{
  int *v2;
  int *v3;
  int v4;

  v2 = (int *)result;
  v3 = *(int **)(result + 8);
  v4 = a2;
  if ( v3 != (int *)result )
  {
    do
    {
      result = v3[1];
      if ( result <= 2 )
        result = Function_2254f60(*v3, v4);
      v3 = (int *)v3[2];
    }
    while ( v3 != v2 );
  }
  return result;
}

//----- (022584D0) --------------------------------------------------------
uint __fastcall Function_22584d0(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;

  v4 = a4;
  v5 = Function_2258584(a1, a2, a3);
  return Function_22584ac(v5, v4);
}

//----- (022584E0) --------------------------------------------------------
uint __fastcall Function_22584e0(int a1, int a2)
{
  int v2;
  uint v3;

  v2 = a2;
  v3 = Function_225855c();
  return Function_22584ac(v3, v2);
}

//----- (022584F0) --------------------------------------------------------
int __fastcall Function_22584f0(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int result;
  int v6;

  v2 = a2;
  v3 = a1;
  *a1 = malloc(0xEu, 16 * a2);
  v3[1] = v2;
  v4 = 0;
  v3[2] = 0;
  result = v3[1];
  if ( result > 0 )
  {
    v6 = 0;
    do
    {
      *(uint *)(*v3 + v6 + 8) = *v3 + v6;
      *(uint *)(*v3 + v6 + 12) = *v3 + v6;
      Function_22584ac(*v3 + v6, 0);
      result = v3[1];
      ++v4;
      v6 += 16;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (02258534) --------------------------------------------------------
int __fastcall Function_2258534(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  free(*a1);
  result = 0;
  *v1 = 0;
  *(uchar *)v1 = 0;
  *((uchar *)v1 + 1) = 0;
  *((uchar *)v1 + 2) = 0;
  *((uchar *)v1 + 3) = 0;
  *((uchar *)v1 + 4) = 0;
  *((uchar *)v1 + 5) = 0;
  *((uchar *)v1 + 6) = 0;
  *((uchar *)v1 + 7) = 0;
  *((uchar *)v1 + 8) = 0;
  *((uchar *)v1 + 9) = 0;
  *((uchar *)v1 + 10) = 0;
  *((uchar *)v1 + 11) = 0;
  return result;
}

//----- (0225855C) --------------------------------------------------------
int __fastcall Function_225855c(uint *a1)
{
  return a1[3 * *a1 + 3] + 16 * a1[3 * *a1 + 5];
}

//----- (02258584) --------------------------------------------------------
int __fastcall Function_2258584(int a1, int a2, int a3)
{
  int v3;

  v3 = *(uint *)(a1 + 12 * a2 + 20);
  return *(uint *)(a1 + 12 * a2 + 12) + 16 * a3;
}

//----- (022585A8) --------------------------------------------------------
int __fastcall Function_22585a8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int i;

  v3 = 0;
  v4 = Function_2258584(a1, a2, a3);
  for ( i = *(uint *)(v4 + 8); i != v4; ++v3 )
    i = *(uint *)(i + 8);
  return v3;
}

//----- (022585C4) --------------------------------------------------------
int __fastcall Function_22585c4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a4;
  v5 = 0;
  v6 = Function_2258584(a1, a2, a3);
  v7 = *(uint *)(v6 + 8);
  if ( v7 == v6 )
    return 0;
  while ( v5 != v4 )
  {
    v7 = *(uint *)(v7 + 8);
    ++v5;
    if ( v7 == v6 )
      return 0;
  }
  return v7;
}

//----- (022585E8) --------------------------------------------------------
uint __fastcall Function_22585e8(uint *a1, int a2, int a3, int a4)
{
  uint result;

  if ( *a1 == a3 && a4 == a1[3 * a3 + 5] )
    result = Function_2254f60(a2, 1);
  else
    result = Function_2254f60(a2, 0);
  return result;
}

//----- (02258610) --------------------------------------------------------
int __fastcall Function_2258610(uint a1, int *a2, uint *a3)
{
  int *v3;
  uint *v4;
  uint v5;
  uint v6;
  uint v7;
  int v8;
  int result;

  v3 = a2;
  v4 = a3;
  s32_div_f(a1, 9);
  v6 = v5;
  v7 = s32_div_f(v5, 3);
  s32_div_f(v6, 3);
  *v4 = 8 * (v7 + 1) + 32 * v7 + 16;
  result = 8 * (v8 + 1) + 24 * v8 + 8;
  *v3 = result;
  return result;
}

//----- (0225864C) --------------------------------------------------------
int __fastcall Function_225864c(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int result;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = Function_200679c((int)Function_22586c4, 48, 0, 0xDu);
  v10 = Function_201ced0((int)v9);
  *(uint *)v10 = v5;
  *(uint *)(v10 + 4) = v6;
  *(uint *)(v10 + 8) = v7;
  *(uint *)(v10 + 12) = v8;
  *(uint *)(v10 + 16) = a5;
  *(uint *)(v10 + 28) = 0;
  *(uint *)(v10 + 32) = Function_22585a8(v5, v6, v7);
  v11 = Function_22585a8(v5, v8, a5);
  *(uint *)(v10 + 36) = v11;
  v12 = *(uint *)(v10 + 32) + v11;
  *(uint *)(v10 + 44) = v12;
  v13 = malloc(0xDu, 12 * v12);
  *(uint *)(v10 + 40) = v13;
  if ( !v13 )
    ErrorHandler();
  Call_FillMemWithValue(*(int **)(v10 + 40), 0, 12 * *(uint *)(v10 + 44));
  result = 1;
  *(uint *)(v5 + 60) = 1;
  return result;
}

//----- (022586C4) --------------------------------------------------------
int __fastcall Function_22586c4(int a1, int *a2)
{
  int *v2;
  int v3;
  uint v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = a2[7];
  if ( v4 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_22586E0 + v4) + 36013794);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_225844c(*a2, a2[3], a2[4]);
      Function_22584d0(*v2, v2[3], v2[4], 1);
      v2[5] = 0;
      Function_22583a0(
        *v2,
        ((uint)(*(uint *)(*v2 + 64) + 1) >> 31)
      + __ROR4__(((*(uint *)(*v2 + 64) + 1) << 31) - ((uint)(*(uint *)(*v2 + 64) + 1) >> 31), 31),
        2,
        5,
        (int)(v2 + 5));
      v2[6] = Function_22588d8(v2[8], 1);
      ++v2[7];
      goto LABEL_24;
    case 1:
      v5 = 0;
      if ( a2[6] > 0 )
      {
        v6 = a2 + 8;
        do
        {
          if ( v2[8] - 1 >= 0 )
          {
            --*v6;
            v7 = Function_22585c4(*v2, v2[1], v2[2], v2[8]);
            Function_225882c(v7, v2[10], v2[11]);
          }
          ++v5;
        }
        while ( v5 < v2[6] );
      }
      if ( !v2[8] )
      {
        v2[6] = Function_22588d8(v2[9], 2);
        ++v2[7];
      }
      goto LABEL_24;
    case 2:
      v8 = 0;
      if ( a2[6] > 0 )
      {
        v9 = a2 + 9;
        do
        {
          if ( v2[9] - 1 >= 0 )
          {
            --*v9;
            v10 = Function_22585c4(*v2, v2[3], v2[4], v2[9]);
            Function_225882c(v10, v2[10], v2[11]);
          }
          ++v8;
        }
        while ( v8 < v2[6] );
      }
      if ( !v2[9] )
      {
        ++v2[7];
        v2[6] = 0;
      }
      goto LABEL_24;
    case 3:
      v11 = a2[6] + 1;
      a2[6] = v11;
      if ( v11 > 3 && a2[5] )
        ++a2[7];
      goto LABEL_24;
    case 4:
      Function_22584d0(*a2, a2[1], a2[2], 0);
      Function_225844c(*v2, v2[1], v2[2]);
      *(uint *)(*v2 + 60) = 0;
      free(v2[10]);
      result = Function_20067d0(v3);
      break;
    default:
      ErrorHandler();
LABEL_24:
      result = Function_225886c(v2[10], v2[11]);
      break;
  }
  return result;
}

//----- (0225882C) --------------------------------------------------------
uint *__fastcall Function_225882c(int a1, int a2, int a3)
{
  int v3;
  uint *result;

  v3 = a1;
  result = (uint *)Function_2258844(a2, a3);
  *result = v3;
  result[1] = 3;
  result[2] = 44;
  return result;
}

//----- (02258844) --------------------------------------------------------
int __fastcall Function_2258844(uint *a1, int a2)
{
  int v2;
  uint *v3;

  v2 = 0;
  if ( a2 <= 0 )
    return 0;
  v3 = a1;
  while ( *v3 )
  {
    ++v2;
    v3 += 3;
    if ( v2 >= a2 )
      return 0;
  }
  return (int)&a1[3 * v2];
}

//----- (0225886C) --------------------------------------------------------
int __fastcall Function_225886c(int result, int a2)
{
  int v2;
  int *v3;
  int i;

  v2 = a2;
  v3 = (int *)result;
  for ( i = 0; i < v2; v3 += 3 )
  {
    result = *v3;
    if ( *v3 )
      result = Function_2258890(v3);
    ++i;
  }
  return result;
}

//----- (02258890) --------------------------------------------------------
int __fastcall Function_2258890(uint *a1)
{
  uint *v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  Function_2259648(*a1, &v4, &v3);
  v3 += v1[2];
  Function_22595f8(*v1, v4, v3);
  result = v1[1] - 1;
  v1[1] = result;
  if ( result <= 0 )
  {
    result = 0;
    *(uchar *)v1 = 0;
    *((uchar *)v1 + 1) = 0;
    *((uchar *)v1 + 2) = 0;
    *((uchar *)v1 + 3) = 0;
    *((uchar *)v1 + 4) = 0;
    *((uchar *)v1 + 5) = 0;
    *((uchar *)v1 + 6) = 0;
    *((uchar *)v1 + 7) = 0;
    *((uchar *)v1 + 8) = 0;
    *((uchar *)v1 + 9) = 0;
    *((uchar *)v1 + 10) = 0;
    *((uchar *)v1 + 11) = 0;
  }
  return result;
}

//----- (022588D8) --------------------------------------------------------
uint __fastcall Function_22588d8(uint a1, int a2)
{
  int v2;
  uint v3;
  int v4;

  v2 = a2;
  v3 = a1;
  s32_div_f(a1, a2);
  return s32_div_f(v3 + v2 - v4, v2);
}

//----- (022588F0) --------------------------------------------------------
uint *__fastcall Function_22588f0(uint *result)
{
  uchar *v1;
  int v2;

  v1 = result;
  v2 = 28;
  do
  {
    *v1++ = 0;
    --v2;
  }
  while ( v2 );
  result[1] = Function_2258948;
  result[2] = Function_2258948;
  result[3] = Function_2258948;
  return result;
}

//----- (0225890C) --------------------------------------------------------
int __fastcall Function_225890c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( word_21BF6DC )
  {
    (*(void (**)(void))(a1 + 4))();
  }
  else if ( word_21BF6DE )
  {
    (*(void (**)(void))(a1 + 12))();
  }
  else if ( *(uchar *)(a1 + 24) )
  {
    (*(void (**)(void))(a1 + 8))();
  }
  *(ushort *)(v1 + 20) = word_21BF6D8;
  *(ushort *)(v1 + 22) = word_21BF6DA;
  result = (ushort)word_21BF6DE;
  *(uchar *)(v1 + 24) = word_21BF6DE;
  return result;
}

//----- (02258948) --------------------------------------------------------
void Function_2258948()
{
  ;
}

//----- (0225894C) --------------------------------------------------------
int __fastcall Function_225894c(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = a2;
  do
  {
    v6 = Function_2029d94(v3, v4++);
    *v5 = v6;
    ++v5;
  }
  while ( v4 < 100 );
  v7 = 0;
  v8 = v2;
  do
  {
    ++v7;
    v8[100] = 18;
    ++v8;
  }
  while ( v7 < 18 );
  v9 = 0;
  do
  {
    result = Function_2029dd4(v3, v9);
    if ( result != 18 )
    {
      result = (int)&v2[result];
      *(uint *)(result + 400) = v9;
    }
    ++v9;
  }
  while ( v9 < 18 );
  return result;
}

//----- (0225899C) --------------------------------------------------------
int __fastcall Function_225899c(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x64 )
    ErrorHandler();
  return *(uint *)(v3 + 4 * v2);
}

//----- (022589B0) --------------------------------------------------------
int __fastcall Function_22589b0(int a1, int a2)
{
  return *(uint *)(a1 + 4 * a2 + 400);
}

//----- (022589BC) --------------------------------------------------------
int __fastcall Function_22589bc(int a1, int a2)
{
  int v2;

  v2 = 0;
  do
  {
    if ( a2 == *(uint *)(a1 + 400) )
      return v2;
    ++v2;
    a1 += 4;
  }
  while ( v2 < 18 );
  return v2;
}

//----- (022589E0) --------------------------------------------------------
int (__fastcall *__fastcall Function_22589e0(int **a1, int a2, int a3, int a4, int a5, int a6))(uint)
{
  int **v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int *v11;
  int (__fastcall *result)(uint);

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  Function_22588f0(a1);
  v10 = (int *)malloc(0xDu, 52);
  *v6 = v10;
  Call_FillMemWithValue(v10, 0, 0x34u);
  v11 = *v6;
  v11[1] = v7;
  v11[2] = v8;
  *v11 = v9;
  v11[3] = a5;
  v11[11] = a6;
  v6[1] = (int *)Function_2258a48;
  v6[2] = (int *)Function_2258bb8;
  v6[3] = (int *)Function_2258d4c;
  result = Function_2258a34;
  v6[4] = (int *)Function_2258a34;
  return result;
}

//----- (02258A34) --------------------------------------------------------
uint *__fastcall Function_2258a34(int *a1)
{
  int *v1;

  v1 = a1;
  free(*a1);
  return Function_22588f0(v1);
}

//----- (02258A48) --------------------------------------------------------
int __fastcall Function_2258a48(int **a1, int a2, int a3, int a4)
{
  int **v4;
  int *v5;
  int v6;
  int result;
  uint *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  ushort v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = *a1;
  v6 = (*a1)[1];
  if ( Function_2257be8() )
  {
    result = Function_2257c20(v5[1], (int)&v16, (int)&v15, *(uint *)(*v5 + 56));
    v8 = (uint *)result;
    if ( result )
    {
      result = *(uint *)(result + 4);
      if ( result == 3 )
      {
        result = v5[11];
        if ( !result )
          v8 = 0;
      }
    }
    if ( v8 )
    {
      if ( v8[1] )
      {
        Function_22579e8();
        Function_22_22591e0(*v8);
        Function_2259648(v8, v5 + 9, v5 + 10);
      }
      else
      {
        Function_2257a80(v5[1], (int)v8);
      }
      Function_2257b10(v5[1]);
      Function_2258e88(v5, v8);
      result = Function_2255390();
    }
  }
  else
  {
    v9 = v5[2];
    result = Function_22582e8();
    if ( result )
    {
      result = Function_2258320(v5[2], (int)&v16, (int)&v15, *(uint *)(*v5 + 56));
      v10 = result;
      if ( result )
      {
        Function_22581b8(result);
        v11 = v5[2];
        Function_22581ec();
        Function_2258e88(v5, v10);
        result = Function_2255390();
      }
    }
  }
  v12 = v5[4];
  if ( v12 )
  {
    v13 = *(uint *)(v12 + 4);
    v14 = 1515;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        v4[2] = (int *)Function_2258b78;
        v4[3] = (int *)Function_2258b74;
        Function_2258e5c(v4);
        v14 = 1662;
      }
      else if ( v13 == 3 )
      {
        v4[2] = (int *)Function_2258d7c;
        v4[3] = (int *)Function_2258dac;
      }
    }
    else
    {
      v4[2] = (int *)Function_2258bb8;
      v4[3] = (int *)Function_2258d4c;
    }
    Function_2005748(v14);
    result = Function_2259040(v5);
  }
  return result;
}

//----- (02258B74) --------------------------------------------------------
void Function_2258b74()
{
  ;
}

//----- (02258B78) --------------------------------------------------------
int __fastcall Function_2258b78(int *a1)
{
  int v1;
  int result;

  v1 = *a1;
  result = *(uint *)(*a1 + 16);
  if ( result )
  {
    if ( *(uint *)(result + 4) != 1 )
      ErrorHandler();
    Function_2258f4c(
      v1,
      4,
      *(short *)(v1 + 28),
      *(short *)(v1 + 30),
      *(uint *)(*(uint *)(v1 + 16) + 4),
      *(uchar *)(v1 + 33));
    result = Function_2258ee4(v1);
  }
  return result;
}

//----- (02258BB8) --------------------------------------------------------
int __fastcall Function_2258bb8(int result)
{
  int v1;
  int v2;
  BOOL v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  BOOL v9;
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

  v1 = result;
  v2 = *(uint *)result;
  if ( *(uint *)(*(uint *)result + 16) )
  {
    Function_2258f38(result);
    v3 = Function_2257c04(*(uint *)(v2 + 4), v19, v21);
    v4 = v3 + Function_2257c04(*(uint *)(v2 + 4), v18, v21);
    v5 = v4 + Function_2257c04(*(uint *)(v2 + 4), v19, v20);
    if ( v5 + Function_2257c04(*(uint *)(v2 + 4), v18, v20) < 4 )
    {
      v8 = **(int ***)(v2 + 16);
      Function_2258ef8(v1, &v21, &v20, &v19, &v18);
      v9 = Function_2258304(*(uint *)(v2 + 8), v19, v21);
      if ( v9 + Function_2258304(*(uint *)(v2 + 8), v18, v20) >= 2 )
      {
        Function_2259648(*(uint *)(v2 + 16), &v15, &v14);
        Function_2005748(0x5EBu);
      }
      else
      {
        if ( *(uchar *)(v2 + 32) == 1 )
        {
          Function_2259698(*(uint *)(v2 + 16), &v17, &v16);
          v10 = Function_201d35c();
          u32_div_f(v10, 108 - v17);
          v15 = v11 + 10;
          v12 = Function_201d35c();
          u32_div_f(v12, 125 - v16);
          v14 = v13 + 18;
        }
        else
        {
          v15 = *(short *)(v2 + 28);
          v14 = *(short *)(v2 + 30);
        }
        Function_2005748(0x683u);
      }
      if ( *(uchar *)(v2 + 32) == 1 )
        *(uchar *)(v2 + 33) = Function_2257fb0(
                                *(uint *)(*(uint *)(v2 + 16) + 4),
                                *v8,
                                *(uint *)(*(uint *)(v2 + 8) + 4));
      Function_2258f4c(v2, 4, v15, v14, *(uint *)(*(uint *)(v2 + 16) + 4), *(uchar *)(v2 + 33));
    }
    else
    {
      v6 = *(uint *)(v2 + 16);
      v7 = *(uint *)(*(uint *)v2 + 56);
      if ( Function_2257a5c(*(uint *)(v2 + 4)) )
      {
        Function_2257b10(*(uint *)(v2 + 4));
        Function_2255360();
        *(uint *)(v2 + 48) = 0;
        Function_2005748(0x5EAu);
      }
      else
      {
        v15 = *(short *)(v2 + 28);
        v14 = *(short *)(v2 + 30);
        Function_2005748(0x683u);
        Function_225a628(*(uint *)(v2 + 12), 26, 385, 3);
        Function_2258f4c(v2, 4, v15, v14, *(uint *)(*(uint *)(v2 + 16) + 4), *(uchar *)(v2 + 33));
      }
    }
    result = Function_2258ee4(v2);
  }
  return result;
}

//----- (02258D4C) --------------------------------------------------------
int __fastcall Function_2258d4c(int *a1)
{
  int v1;
  int result;

  v1 = *a1;
  result = *(uint *)(*a1 + 16);
  if ( result )
  {
    if ( (ushort)word_21BF6D8 != 0xFFFF )
      result = Function_22595f8(
                 result,
                 (ushort)word_21BF6D8 - *(uint *)(v1 + 20),
                 (ushort)word_21BF6DA - *(uint *)(v1 + 24));
  }
  return result;
}

//----- (02258D7C) --------------------------------------------------------
int __fastcall Function_2258d7c(int result)
{
  int v1;
  int v2;

  v1 = *(uint *)result;
  v2 = *(uint *)(*(uint *)result + 16);
  if ( v2 )
  {
    Function_22579d8(*(uint *)(v1 + 4), v2);
    Function_2257b10(*(uint *)(v1 + 4));
    Function_2255360();
    *(uint *)(v1 + 48) = 0;
    Function_2005748(0x5EBu);
    result = Function_2258ee4(v1);
  }
  return result;
}

//----- (02258DAC) --------------------------------------------------------
int __fastcall Function_2258dac(int **a1, int a2, int a3, int a4)
{
  int *v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int **v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = *a1;
  v10 = a1;
  result = (*a1)[4];
  if ( result && (ushort)word_21BF6D8 != 0xFFFF )
  {
    Function_22596b0(result, &v14, &v12, &v13, &v11);
    Function_2259698(v4[4], &v16, &v15);
    v6 = (ushort)word_21BF6D8 - v4[5];
    v7 = (ushort)word_21BF6DA - v4[6];
    v8 = v16 - v12;
    v15 -= v11;
    v16 -= v12;
    if ( v6 + v14 > 138 )
    {
      if ( v6 + v8 >= 246 )
        v6 = 246 - v8;
    }
    else
    {
      v6 = 138 - v14;
    }
    if ( v7 + v13 > 18 )
    {
      if ( v7 + v15 >= 143 )
        v7 = 143 - v15;
    }
    else
    {
      v7 = 18 - v13;
    }
    Function_2259074(v10, v6, v7);
    Function_2257d04(v4[1], &v14, &v13, v9);
    result = Function_2259074(v10, v6 + v14, v7 + v13);
  }
  return result;
}

//----- (02258E5C) --------------------------------------------------------
int __fastcall Function_2258e5c(int *a1)
{
  int v1;
  int result;
  int *v3;
  int v4;

  v1 = *a1;
  result = *(uint *)(*a1 + 16);
  if ( result )
  {
    if ( *(uint *)(result + 4) != 1 )
      ErrorHandler();
    v3 = **(int ***)(v1 + 16);
    Function_2257cd4(*(uint *)(v1 + 4));
    result = Function_2257c88(*(uint *)(v1 + 4), *v3, 14, v4);
  }
  return result;
}

//----- (02258E88) --------------------------------------------------------
int __fastcall Function_2258e88(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v6 = a2;
  v7 = a1;
  v8 = a3;
  v9 = a4;
  Function_2259648(a2, &v12, &v11);
  *(uint *)(v7 + 16) = v6;
  *(ushort *)(v7 + 28) = v12;
  *(ushort *)(v7 + 30) = v11;
  *(uchar *)(v7 + 32) = v8;
  *(uint *)(v7 + 20) = v9;
  *(uint *)(v7 + 24) = a5;
  if ( v8 )
    *(uchar *)(v7 + 33) = 0;
  else
    *(uchar *)(v7 + 33) = Function_2258424(*(uint *)(v7 + 8), *(uint *)(*(uint *)(v7 + 16) + 4));
  *(uint *)(v7 + 48) = 1;
  return Function_2259560(v6, a6);
}

//----- (02258EE4) --------------------------------------------------------
uchar *__fastcall Function_2258ee4(int a1)
{
  uchar *result;

  *(uint *)(a1 + 16) = 0;
  *(ushort *)(a1 + 28) = 0;
  *(ushort *)(a1 + 30) = 0;
  *(uchar *)(a1 + 32) = 0;
  result = (uchar *)(a1 + 33);
  *result = 0;
  return result;
}

//----- (02258EF8) --------------------------------------------------------
uint *__fastcall Function_2258ef8(int *a1, uint *a2, uint *a3, int a4, uint *a5)
{
  int v5;
  uint *v6;
  uint *v7;
  uint *v8;
  uint *result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v5 = *a1;
  v6 = a2;
  v7 = a3;
  v8 = (uint *)a4;
  Function_2259698(*(uint *)(*a1 + 16), &v13, &v12);
  Function_2259648(*(uint *)(v5 + 16), &v11, &v10);
  *v6 = v10;
  *v7 = v10 + v12;
  *v8 = v11;
  result = a5;
  *a5 = v11 + v13;
  return result;
}

//----- (02258F38) --------------------------------------------------------
int __fastcall Function_2258f38(int a1, int a2, int a3, int a4, int a5)
{
  return Function_2259724(*(uint *)(*(uint *)a1 + 16), a2, a3, a4, a5);
}

//----- (02258F4C) --------------------------------------------------------
int __fastcall Function_2258f4c(uint *a1, int a2, int a3, int a4, int a5, int a6)
{
  uint *v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  uint *v11;
  uint *v12;
  int result;
  int v14;
  int v15;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = Function_200679c((int)Function_2258fc0, 44, 0, 0xDu);
  v11 = (uint *)Function_201ced0((int)v10);
  v12 = v11;
  *v11 = v6[2];
  v11[1] = v6[4];
  v11[8] = v7;
  v11[4] = v8;
  v11[5] = v9;
  v11[6] = a5;
  v11[7] = a6;
  v11[9] = v6[2] + 60;
  v11[10] = v6 + 12;
  Function_2259648(v6[4], &v15, &v14);
  v12[2] = s32_div_f(v12[4] - v15, v7);
  v12[3] = s32_div_f(v12[5] - v14, v7);
  result = 0;
  v6[12] = 0;
  return result;
}

//----- (02258FC0) --------------------------------------------------------
int __fastcall Function_2258fc0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v5 = a1;
  result = **(uint **)(a2 + 36);
  if ( result != 1 )
  {
    Function_2259648(*(uint *)(a2 + 4), &v10, &v9);
    v10 += *(uint *)(v4 + 8);
    v9 += *(uint *)(v4 + 12);
    v7 = *(uint *)(v4 + 32) - 1;
    *(uint *)(v4 + 32) = v7;
    if ( v7 >= 0 && (*(uint *)(v4 + 8) || *(uint *)(v4 + 12)) )
    {
      result = Function_22595f8(*(uint *)(v4 + 4), v10, v9);
    }
    else
    {
      Function_22595f8(*(uint *)(v4 + 4), *(uint *)(v4 + 16), *(uint *)(v4 + 20));
      Function_225818c(*(uint *)v4, *(uint *)(v4 + 24), *(uint *)(v4 + 28), *(uint **)(v4 + 4));
      v8 = *(uint *)v4;
      Function_22581ec();
      if ( !**(uint **)(v4 + 40) )
        Function_2255360();
      result = Function_20067d0(v5);
    }
  }
  return result;
}

//----- (02259040) --------------------------------------------------------
int __fastcall Function_2259040(int result)
{
  uint **v1;
  uint *v2;

  v1 = *(uint ***)(result + 16);
  v2 = v1[1];
  if ( !v2 )
    return Function_225a628(*(uint *)(result + 12), 26, 386, **v1);
  if ( v2 == (uint *)1 )
    result = Function_225a628(*(uint *)(result + 12), 26, 388, **v1);
  return result;
}

//----- (02259074) --------------------------------------------------------
int __fastcall Function_2259074(int **a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v3 = *a1;
  v4 = a2;
  v5 = a3;
  Function_22595f8((*a1)[4], a2, a3);
  v6 = v3[10];
  v7 = v4 - v3[9];
  result = Function_2257acc(v3[1]);
  v3[9] = v4;
  v3[10] = v5;
  return result;
}

//----- (02259098) --------------------------------------------------------
int __fastcall Function_2259098(int a1, ushort *a2)
{
  ushort *v2;
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = a1;
  v4 = Function_2006fe8_LoadFromNARC_UncompressLZ8(*a2, a2[1], 0, 14, 0);
  v5 = Function_2255340(v3, (int)v4, 118);
  return Call_PokegraDecrypt_ReverseForward(*(ushort **)(v5 + 20), *v2, v6, v7);
}

//----- (022590C0) --------------------------------------------------------
int __fastcall Function_22590c0(int a1, int a2, int a3, int a4, int a5)
{
  return Function_22590d4(a1, a2, a3, a4, a5, 0);
}

//----- (022590D4) --------------------------------------------------------
uint __fastcall Function_22590d4(int a1, uint *a2, int *a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  uint *v8;
  ushort *v9;
  char v10;
  int v11;
  int v12;
  uint result;
  uint *v14;
  ushort **v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v6 = (int)a3;
  v7 = a1;
  v8 = a2;
  v9 = (ushort *)a4;
  GetPkmnData(a3, 5u, 0);
  Function_2075f00((int)v9, v6, 2u);
  *(uint *)v7 = Function_2007c34(v8, v9, 192, 56, 0, 0, 0, 0);
  Function_2259270(v7, &v17, &v16);
  v17 /= 2;
  v16 /= 2;
  *(uchar *)(v7 + 4) = 56 - v16;
  *(uchar *)(v7 + 5) = v16 + 56;
  *(uchar *)(v7 + 6) = -64 - v17;
  *(uchar *)(v7 + 7) = v17 - 64;
  Function_2259448(v7 + 4);
  v10 = Function_20765b8(v6, 2u);
  v14 = Function_2006fe8_LoadFromNARC_UncompressLZ8(*v9, v9[1], 0, a5, 0);
  NNS_G2dGetUnpackedPaletteData((int)v14, &v15);
  Call_PokegraDecrypt_ReverseForward(v15[5], *v9, v11, v12);
  if ( a6 )
  {
    *(uchar *)(v7 + 8) = Function_225936c(v15[5], 8 * *((ushort *)v15 + 1));
    *(uchar *)(v7 + 9) = *(uchar *)(v7 + 8);
    *(uchar *)(v7 + 11) = v10;
    *(uchar *)(v7 + 10) = v10;
  }
  else
  {
    Function_22593b8(v15[5], 8 * *((ushort *)v15 + 1), 8 * *(ushort *)v15, v7 + 8);
  }
  result = free((int)v14);
  *(uint *)(v7 + 12) = v6;
  return result;
}

//----- (022591B8) --------------------------------------------------------
int __fastcall Function_22591b8(uint **a1)
{
  uchar *v1;
  int v2;
  int result;

  v1 = a1;
  Function_2007dc8(*a1);
  v2 = 16;
  result = 0;
  do
  {
    *v1++ = 0;
    --v2;
  }
  while ( v2 );
  return result;
}

//----- (022591D0) --------------------------------------------------------
int __fastcall Function_22591d0(int *a1, int a2)
{
  return Function_2007dec(*a1, 2u, a2);
}

//----- (022591E0) --------------------------------------------------------
int __fastcall Function_22_22591e0(int *a1)
{
  return Function_20080c0(*a1, 2u);
}

//----- (022591EC) --------------------------------------------------------
int __fastcall Function_22591ec(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a2;
  v5 = a3;
  v6 = a1;
  Function_2259270(a1, &v9, &v8);
  Function_2007dec(*v6, 0, v4);
  Function_2007dec(*v6, 1u, v5);
  v8 /= 2;
  v9 /= 2;
  return Function_2259448(v6 + 1);
}

//----- (02259238) --------------------------------------------------------
BOOL __fastcall Function_2259238(int a1)
{
  return Function_2022734((uchar *)(a1 + 4));
}

//----- (02259244) --------------------------------------------------------
BOOL __fastcall Function_2259244(int a1, int a2, int a3)
{
  return Function_2022830((uchar *)(a1 + 4), a2, a3);
}

//----- (02259250) --------------------------------------------------------
int __fastcall Function_22_2259250(int *a1, int *a2, int *a3)
{
  int *v3;
  int *v4;
  int result;

  v3 = a1;
  v4 = a3;
  *a2 = Function_20080c0(*a1, 0);
  result = Function_20080c0(*v3, 1u);
  *v4 = result;
  return result;
}

//----- (02259270) --------------------------------------------------------
int __fastcall Function_2259270(int a1, uint *a2, uint *a3)
{
  int result;

  result = 80;
  *a2 = 80;
  *a3 = 80;
  return result;
}

//----- (02259278) --------------------------------------------------------
BOOL __fastcall Function_2259278(int a1, int *a2, int *a3, int a4)
{
  int *v4;
  int *v5;
  int *v6;
  ushort *v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = (int *)a1;
  v5 = a2;
  v6 = a3;
  v7 = (ushort *)a4;
  if ( !Function_2259238(a1) )
    return 0;
  Function_22_2259250(v4, &v11, &v10);
  Function_2259270((int)v4, &v13, &v12);
  v10 -= v12 / 2;
  v11 -= v13 / 2;
  *v5 = (ushort)word_21BF6D8 - v11;
  v9 = (ushort)word_21BF6DA - v10;
  *v6 = v9;
  return Function_2255420(v7, *v5, v9, 0) == 0;
}

//----- (022592F0) --------------------------------------------------------
BOOL __fastcall Function_22592f0(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  ushort *v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = (int *)a1;
  v5 = a2;
  v6 = a3;
  v7 = (ushort *)a4;
  if ( !Function_2259244(a1, a2, a3) )
    return 0;
  Function_22_2259250(v4, &v10, &v9);
  Function_2259270((int)v4, &v12, &v11);
  return Function_2255420(v7, v5 - (v10 - v12 / 2), v6 - (v9 - v11 / 2), 0) == 0;
}

//----- (02259358) --------------------------------------------------------
int __fastcall Function_2259358(uchar *a1, uchar *a2)
{
  int result;

  *a2 = a1[8];
  a2[1] = a1[9];
  a2[2] = a1[10];
  result = (uchar)a1[11];
  a2[3] = result;
  return result;
}

//----- (0225936C) --------------------------------------------------------
int __fastcall Function_225936c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = 0;
  do
  {
    v3 = 0;
    v4 = 0;
    do
    {
      if ( *(char *)(a1 + (v2 + v4) / 2) & (15 << 4
                                                * ((v2 + v4 < 0)
                                                 + __ROR4__(((v2 + v4) << 31) - ((uint)(v2 + v4) >> 31), 31))) & 0xFF )
        return v2;
      ++v3;
      v4 += a2;
    }
    while ( v3 < 80 );
    ++v2;
  }
  while ( v2 < 80 );
  return 80;
}

//----- (022593B8) --------------------------------------------------------
int __fastcall Function_22593b8(int a1, int a2, int a3, uchar *a4)
{
  int v4;
  int result;
  int v6;
  int v7;

  v7 = a1;
  *a4 = 40;
  a4[1] = 40;
  a4[2] = 40;
  a4[3] = 40;
  v4 = 0;
  do
  {
    result = 0;
    v6 = 0;
    do
    {
      if ( *(char *)(v7 + (v4 + v6) / 2) & (15 << 4
                                                * ((v4 + v6 < 0)
                                                 + __ROR4__(((v4 + v6) << 31) - ((uint)(v4 + v6) >> 31), 31))) & 0xFF )
      {
        if ( *a4 > v4 )
          *a4 = v4;
        if ( a4[1] > 80 - v4 )
          a4[1] = 80 - v4;
        if ( a4[2] > result )
          a4[2] = result;
        if ( a4[3] > 80 - result )
          a4[3] = 80 - result;
      }
      ++result;
      v6 += a2;
    }
    while ( result < 80 );
    ++v4;
  }
  while ( v4 < 80 );
  return result;
}

//----- (02259448) --------------------------------------------------------
uchar *__fastcall Function_2259448(uchar *result, int a2, int a3, int a4, int a5)
{
  char v5;
  int v6;
  char v7;
  int v8;

  v5 = a3 - a5;
  if ( a3 - a5 < 0 )
    v5 = 0;
  *result = v5;
  v6 = a3 + a5;
  if ( v6 > 191 )
    LOBYTE(v6) = -65;
  result[1] = v6;
  v7 = a2 - a4;
  if ( a2 - a4 < 0 )
    v7 = 0;
  v8 = a2 + a4;
  result[2] = v7;
  if ( v8 > 255 )
    result[3] = -1;
  else
    result[3] = v8;
  return result;
}

//----- (02259484) --------------------------------------------------------
int *__fastcall Function_2259484(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  int *result;

  v3 = a2;
  v4 = 16 * a2;
  v5 = a1;
  v6 = malloc(a3, 16 * a2);
  *(uint *)v5 = v6;
  if ( !v6 )
    ErrorHandler();
  result = Call_FillMemWithValue(*(int **)v5, 0, v4);
  *(uint *)(v5 + 4) = v3;
  return result;
}

//----- (022594AC) --------------------------------------------------------
int __fastcall Function_22594ac(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  free(*a1);
  result = 0;
  *v1 = 0;
  v1[1] = 0;
  return result;
}

//----- (022594C0) --------------------------------------------------------
int __fastcall Function_22594c0(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !*a1 )
    ErrorHandler();
  if ( !v3[1] )
    ErrorHandler();
  v6 = v3[1];
  v7 = 0;
  if ( v6 > 0 )
  {
    v8 = (uint *)*v3;
    do
    {
      if ( !*v8 )
        break;
      ++v7;
      v8 += 4;
    }
    while ( v7 < v6 );
  }
  if ( v6 <= v7 )
    ErrorHandler();
  *(uint *)(*v3 + 16 * v7) = v4;
  *(uint *)(*v3 + 16 * v7 + 4) = v5;
  return *v3 + 16 * v7;
}

//----- (02259510) --------------------------------------------------------
uchar *__fastcall Function_2259510(uchar *result)
{
  int v1;

  v1 = 16;
  do
  {
    *result++ = 0;
    --v1;
  }
  while ( v1 );
  return result;
}

//----- (02259520) --------------------------------------------------------
int __fastcall Function_2259520(int result, int a2)
{
  *(uint *)(result + 8) = *(uint *)(a2 + 8);
  *(uint *)(*(uint *)(a2 + 8) + 12) = result;
  *(uint *)(result + 12) = a2;
  *(uint *)(a2 + 8) = result;
  return result;
}

//----- (02259530) --------------------------------------------------------
int __fastcall Function_2259530(int a1)
{
  int v1;
  int result;

  *(uint *)(*(uint *)(a1 + 12) + 8) = *(uint *)(a1 + 8);
  v1 = *(uint *)(a1 + 12);
  result = *(uint *)(a1 + 8);
  *(uint *)(result + 12) = v1;
  return result;
}

//----- (02259540) --------------------------------------------------------
uchar *__fastcall Function_2259540(uchar *result)
{
  uchar *v1;
  int v2;
  int v3;

  v1 = result;
  v2 = *((uint *)result + 2);
  if ( (uchar *)v2 != result )
  {
    do
    {
      v3 = *(uint *)(v2 + 8);
      Function_2259530(v2);
      result = Function_2259510((uchar *)v2);
      v2 = v3;
    }
    while ( (uchar *)v3 != v1 );
  }
  return result;
}

//----- (02259560) --------------------------------------------------------
int __fastcall Function_2259560(int a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = *(uint *)(a1 + 4);
  v3 = *(int **)a1;
  if ( v2 >= 3 )
    result = Function_22591d0(v3, a2);
  else
    result = Function_2254f6c((int)v3, a2);
  return result;
}

//----- (02259578) --------------------------------------------------------
BOOL __fastcall Function_2259578(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  BOOL result;

  v3 = a1[1];
  v4 = *a1;
  if ( v3 >= 3 )
  {
    if ( a2 == -1 )
      result = Function_2259238(v4);
    else
      result = Function_2259244(v4, a2, a3);
  }
  else if ( a2 == -1 )
  {
    result = Function_2254e44(v4, -1, a3, -1);
  }
  else
  {
    result = Function_2254edc(v4, a2, a3, -1);
  }
  return result;
}

//----- (022595AC) --------------------------------------------------------
int __fastcall Function_22595ac(int *a1, int *a2, int *a3, int a4)
{
  int v4;
  int result;
  uint *v6;

  v4 = a1[1];
  if ( !v4 )
    return Function_2254e54(*a1, (int)a2, (int)a3, *(uint *)(a4 + 4 * *(uint *)*a1));
  if ( v4 == 1 )
    return Function_2254e54(*a1, (int)a2, (int)a3, *(uint *)(a4 + 4 * (*(uint *)*a1 + 100)));
  v6 = (uint *)*a1;
  if ( v4 == 2 )
    result = Function_2254e54((int)v6, (int)a2, (int)a3, *(uint *)(a4 + 4 * (*v6 + 100)));
  else
    result = Function_2259278((int)v6, a2, a3, *(uint *)(a4 + 472));
  return result;
}

//----- (022595F8) --------------------------------------------------------
ushort *__fastcall Function_22595f8(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int *v6;
  int v7;
  int v8;
  int v9;

  v3 = a2;
  v4 = a3;
  if ( a1[1] < 3 )
    return Function_2254ef4(*a1, a2, a3);
  v6 = (int *)*a1;
  Function_2259270(*a1, &v9, &v8);
  return (ushort *)Function_22591ec(v6, v3 + v9 / 2, v4 + v8 / 2, v7);
}

//----- (02259648) --------------------------------------------------------
int __fastcall Function_2259648(int *a1, uint *a2, int *a3)
{
  int v3;
  uint *v4;
  int *v5;
  int result;
  int v7;
  int v8;
  int v9;

  v3 = a1[1];
  v4 = a2;
  v5 = a3;
  if ( v3 < 3 )
    return Function_2254f00(*a1, a2, a3, v3);
  v7 = *a1;
  Function_22_2259250((int *)*a1, a2, a3);
  Function_2259270(v7, &v9, &v8);
  v9 /= 2;
  v8 /= 2;
  *v4 -= v9;
  result = *v5 - v8;
  *v5 = result;
  return result;
}

//----- (02259698) --------------------------------------------------------
int __fastcall Function_2259698(int *a1, uint *a2, uint *a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1[1];
  v4 = *a1;
  if ( v3 >= 3 )
    result = Function_2259270(v4, a2, a3);
  else
    result = Function_2254f30(v4, a2, a3, v3);
  return result;
}

//----- (022596B0) --------------------------------------------------------
int __fastcall Function_22596b0(int a1, uint *a2, uint *a3, uint *a4, int *a5)
{
  uint *v5;
  int v6;
  uint *v7;
  int *v8;
  uchar *v9;
  int result;
  uint *v11;

  v11 = a4;
  v5 = a3;
  v6 = *(uint *)(a1 + 4);
  v7 = a2;
  v8 = a4;
  v9 = *(uchar **)a1;
  if ( v6 >= 3 )
  {
    Function_2259358(v9, &v11);
    *v7 = (uchar)v11;
    *v5 = BYTE1(v11);
    *v8 = BYTE2(v11);
    result = HIBYTE(v11);
    *a5 = HIBYTE(v11);
  }
  else
  {
    Function_2254f84((int)v9, a2, a4, (int)a4);
    *v5 = *v7;
    result = *v8;
    *a5 = *v8;
  }
  return result;
}

//----- (022596EC) --------------------------------------------------------
int *__fastcall Function_22596ec(int *result, int a2, int a3, int a4)
{
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = result;
  v5 = (int *)result[2];
  v6 = a2;
  v7 = a3;
  if ( v5 != result )
  {
    do
    {
      Function_2259648(v5, &v9, &v8);
      v9 += v6;
      v8 += v7;
      result = (int *)Function_22595f8(v5, v9, v8);
      v5 = (int *)v5[2];
    }
    while ( v5 != v4 );
  }
  return result;
}

//----- (02259724) --------------------------------------------------------
uint *__fastcall Function_2259724(int *a1, uint *a2, uint *a3, uint *a4, uint *a5)
{
  uint *v5;
  uint *v6;
  int *v7;
  uint *v8;
  uint *result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v5 = a2;
  v6 = a3;
  v7 = a1;
  v8 = a4;
  Function_2259698(a1, &v17, &v16);
  Function_2259648(v7, &v15, &v14);
  Function_22596b0((int)v7, &v13, &v11, &v12, &v10);
  *v5 = v14 + v12;
  *v6 = v14 + v16 - v10;
  *v8 = v15 + v13;
  result = a5;
  *a5 = v15 + v17 - v11;
  return result;
}

//----- (02259780) --------------------------------------------------------
int __fastcall Function_2259780(int *a1, uint *a2, int *a3)
{
  uint *v3;
  int *v4;
  int *v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  Function_2259698(a1, &v10, &v9);
  Function_2259648(v5, &v8, &v7);
  *v3 = v8 + v10 / 2;
  result = v7 + v9 / 2;
  *v4 = result;
  return result;
}

//----- (022597BC) --------------------------------------------------------
int __fastcall Function_22597bc(uint *a1, uint *a2)
{
  *a1 = *a2;
  a1[3] = a2[5] / 8;
  a1[4] = a2[6] / 8;
  a1[7] = a2[7];
  a1[8] = a2[9];
  a1[9] = a2[8];
  a1[10] = a2[10];
  a1[1] = a2[1];
  a1[2] = a2[4];
  return Function_22599a0(a2, a1 + 5, a1 + 6);
}

//----- (02259804) --------------------------------------------------------
int *__fastcall Function_2259804(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2019ebc((uint *)*a1, a1[7] & 0xFF);
  return Call_FillMemWithValue(v1, 0, 0x2Cu);
}

//----- (02259820) --------------------------------------------------------
uint *__fastcall Function_2259820(uint *result, uint *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = 0;
  result[4] = 0;
  result[5] = a2[3];
  return result;
}

//----- (02259838) --------------------------------------------------------
int __fastcall Function_2259838(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a1[3] + a2;
  a1[3] = v5;
  result = a1[2];
  if ( v5 > result )
  {
    v4[3] = 0;
    if ( v4[4] )
    {
      v7 = *(uint *)(*v4 + 8);
      v4[4] = 0;
    }
    else
    {
      v7 = v4[1];
      v4[4] = 1;
    }
    v8 = Function_2006f6c(*(uint *)(*v4 + 4), v7, 0, &v9, v4[5]);
    Function_2259abc(
      *(uint *)*v4,
      *(uint *)(*v4 + 28),
      v9,
      *(uint *)(*v4 + 20),
      *(uint *)(*v4 + 24),
      *(uint *)(*v4 + 12),
      *(uint *)(*v4 + 16),
      *(uint *)(*v4 + 40),
      *(uint *)(*v4 + 32));
    result = free(v8);
  }
  return result;
}

//----- (022598A0) --------------------------------------------------------
int __fastcall Function_22598a0(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = Function_2006f6c(*(uint *)(*a1 + 4), *(uint *)(*a1 + 8), 0, &v8, a1[5]);
  Function_2259abc(
    *(uint *)*v4,
    *(uint *)(*v4 + 28),
    v8,
    *(uint *)(*v4 + 20),
    *(uint *)(*v4 + 24),
    *(uint *)(*v4 + 12),
    *(uint *)(*v4 + 16),
    *(uint *)(*v4 + 40),
    *(uint *)(*v4 + 32));
  free(v5);
  v6 = 24;
  result = 0;
  do
  {
    *(uchar *)v4 = 0;
    v4 = (int *)((char *)v4 + 1);
    --v6;
  }
  while ( v6 );
  return result;
}

//----- (022598F4) --------------------------------------------------------
int __fastcall Function_22598f4(int *a1, int *a2, uint a3, uint a4, int a5, int *a6)
{
  int *v6;
  int *v7;
  uint *v8;
  int **v9;
  int *v10;
  uint *v11;
  int v12;
  int v13;
  int v14;
  uint v16;
  uint v17;

  v6 = a1;
  v7 = a2;
  v16 = a3;
  v17 = a4;
  v8 = Function_200679c((int)Function_2259a4c, 76, 0, 0xDu);
  v9 = (int **)Function_201ced0((int)v8);
  *v9 = v6;
  v10 = v7;
  v11 = v9 + 1;
  v12 = 6;
  do
  {
    v13 = *v10;
    v14 = v10[1];
    v10 += 2;
    *v11 = v13;
    v11[1] = v14;
    v11 += 2;
    --v12;
  }
  while ( v12 );
  v9[13] = a6;
  v9[14] = (int *)a5;
  v9[15] = (int *)s32_div_f(v16, a5);
  v9[16] = (int *)s32_div_f(v17, a5);
  v9[17] = (int *)Function_20192ec(*v6, v6[7]);
  v9[18] = (int *)Function_20192f8(*v6, v6[7]);
  v7[10] = 128;
  v7[9] = 5;
  v7[5] -= v16;
  v7[6] -= v17;
  v7[11] = 14;
  return Function_22599a0(v7, 0, 0);
}

//----- (02259980) --------------------------------------------------------
ushort *__fastcall Function_2259980(int a1, short a2)
{
  uint v2;
  ushort *result;
  int i;

  v2 = *(uint *)(a1 + 8);
  result = (ushort *)(a1 + 12);
  for ( i = 0; i < (int)(v2 >> 1); ++result )
  {
    ++i;
    *result += a2;
  }
  return result;
}

//----- (022599A0) --------------------------------------------------------
uint __fastcall Function_22599a0(uint *a1, uint *a2, uint *a3, int a4)
{
  uint *v4;
  uint *v5;
  uint *v6;
  int v7;
  int v8;
  uint v9;
  uint result;
  int v11;
  int v12;
  uint v13;
  ushort *v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v12 = a1[5] / 8;
  v11 = a1[6] / 8;
  Function_2259b3c(a1[1], v4[2], *v4, v4[7], a1[10], a1[11]);
  if ( v4[7] >= 4 )
    v7 = 4;
  else
    v7 = 0;
  Function_2259b8c(v4[1], v4[3], v7, 32 * v4[9], 32 * v4[8], v4[11]);
  v8 = Function_2006f6c(v4[1], v4[4], 0, &v14, v4[11]);
  v9 = (uint)*v14 >> 3;
  v13 = (uint)v14[1] >> 3;
  Function_2259abc(*v4, v4[7], v14, v9, v13, v12, v11, v4[10], v4[9]);
  result = free(v8);
  if ( v5 )
    *v5 = v9;
  if ( v6 )
  {
    result = v13;
    *v6 = v13;
  }
  return result;
}

//----- (02259A4C) --------------------------------------------------------
int __fastcall Function_2259a4c(int a1, int a2)
{
  int **v2;
  int v3;
  int v4;
  int *v5;
  int result;
  int *v7;

  v2 = (int **)a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 56) - 1;
  *(uint *)(a2 + 56) = v4;
  v5 = *(int **)a2;
  if ( v4 < 0 )
  {
    Function_201c63c(*v5, v5[7] & 0xFF, 0, (int)v2[17]);
    Function_201c63c(**v2, (*v2)[7] & 0xFF, 3u, (int)v2[18]);
    Function_22597bc(*v2, v2 + 1);
    v7 = v2[13];
    if ( v7 )
      *v7 = 1;
    result = Function_20067d0(v3);
  }
  else
  {
    Function_201c63c(*v5, v5[7] & 0xFF, 2u, (int)v2[15]);
    result = Function_201c63c(**v2, (*v2)[7] & 0xFF, 5u, (int)v2[16]);
  }
  return result;
}

//----- (02259ABC) --------------------------------------------------------
int __fastcall Function_2259abc(int a1, uchar a2, int a3, uchar a4, uchar a5, uchar a6, uchar a7, short a8, uchar a9)
{
  uchar v9;
  int v10;
  int v11;
  uchar v12;

  v9 = a2;
  v10 = a3;
  v11 = a1;
  v12 = a4;
  Function_2259980(a3, a8);
  Function_20198e8(v11, v9, a6, a7, v12, a5, v10 + 12, 0, 0, v12, a5);
  Function_2019e2c(v11, v9, a6, a7, v12, a5, a9);
  return Function_201c3c0(v11, v9);
}

//----- (02259B3C) --------------------------------------------------------
uint *__fastcall Function_2259b3c(int a1, int a2, int a3, int a4, int a5, uint a6)
{
  int v6;
  int v7;
  int v8;
  uint *v9;
  uchar *v10;
  int v11;
  int v13;

  v6 = a1;
  v13 = a2;
  v7 = a3;
  v8 = a4;
  v9 = (uint *)malloc(a6, 20);
  v10 = v9;
  v11 = 20;
  do
  {
    *v10++ = 0;
    --v11;
  }
  while ( v11 );
  v9[2] = Function_2006f50(v6, v13, 0, v9 + 1, a6);
  *v9 = v7;
  v9[3] = v8;
  v9[4] = a5;
  return AddTaskToTaskList3((int)Function_2259bd4, (int)v9, 0x80u);
}

//----- (02259B8C) --------------------------------------------------------
uint *__fastcall Function_2259b8c(int a1, int a2, int a3, int a4, int a5, uint a6)
{
  int v6;
  int v7;
  int v8;
  uint *v9;
  uchar *v10;
  int v11;
  int v13;

  v6 = a1;
  v13 = a2;
  v7 = a3;
  v8 = a4;
  v9 = (uint *)malloc(a6, 20);
  v10 = v9;
  v11 = 20;
  do
  {
    *v10++ = 0;
    --v11;
  }
  while ( v11 );
  v9[1] = Function_2006f88(v6, v13, v9, a6);
  v9[2] = v7;
  v9[3] = v8;
  v9[4] = a5;
  return AddTaskToTaskList3((int)Function_2259c10, (int)v9, 0x80u);
}

//----- (02259BD4) --------------------------------------------------------
uint __fastcall Function_2259bd4(int *a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = a1;
  DC_FlushRange(*(uint *)(*(uint *)(a2 + 4) + 20), *(uint *)(*(uint *)(a2 + 4) + 16));
  Function_201958c(
    *(uint **)v2,
    *(uint *)(v2 + 12) & 0xFF,
    *(int **)(*(uint *)(v2 + 4) + 20),
    *(uint *)(*(uint *)(v2 + 4) + 16),
    *(uint *)(v2 + 16));
  Call_RemoveTaskFromTaskList(v3);
  free(*(uint *)(v2 + 8));
  return free(v2);
}

//----- (02259C10) --------------------------------------------------------
uint __fastcall Function_2259c10(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  DC_FlushRange(*(uint *)(*a2 + 12), a2[4]);
  v4 = v2[2];
  if ( v4 )
  {
    if ( v4 == 4 )
      GXS_LoadBGPltt(*(uint *)(*v2 + 12), v2[3], v2[4]);
  }
  else
  {
    GX_LoadBGPltt(*(uint *)(*v2 + 12), v2[3], v2[4]);
  }
  Call_RemoveTaskFromTaskList(v3);
  free(v2[1]);
  return free((int)v2);
}

//----- (02259C58) --------------------------------------------------------
int (*__fastcall Function_2259c58(int *a1, int a2))()
{
  int *v2;
  int v3;
  int v4;
  int (*result)();

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    ErrorHandler();
  if ( !v3 )
    ErrorHandler();
  v4 = Function_2021aa0(*(uint ***)v3);
  *v2 = v4;
  if ( !v4 )
    ErrorHandler();
  v2[1] = *(uint *)(v3 + 12);
  v2[2] = *(uint *)(v3 + 8);
  result = *(int (**)())(v3 + 4);
  if ( result )
  {
    v2[3] = (int)result;
  }
  else
  {
    result = Function_2259d94;
    v2[3] = (int)Function_2259d94;
  }
  return result;
}

//----- (02259C9C) --------------------------------------------------------
int *__fastcall Function_2259c9c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int *result;
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

  v19 = a4;
  v4 = a2;
  v5 = a1;
  Function_2259c58(a1, a2);
  v7 = *(uint *)(v4 + 20);
  v8 = *(uint *)(v4 + 16);
  v9 = **(uint **)v4;
  v10 = *(uint *)(v4 + 24);
  v11 = *v5;
  v12 = *(uint *)(v4 + 36);
  v13 = *(uint *)(v4 + 28);
  v14 = *(uint *)(v4 + 32);
  v15 = 0;
  v16 = 0;
  v17 = *(uint *)(*(uint *)v4 + 40);
  v18 = *(uint *)(*(uint *)v4 + 44);
  result = Function_20127e8(&v7);
  v5[4] = (int)result;
  return result;
}

//----- (02259CE8) --------------------------------------------------------
int __fastcall Function_2259ce8(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  Function_2021bd4(*a1);
  v2 = 16;
  result = 0;
  do
  {
    *(uchar *)v1 = 0;
    v1 = (int *)((char *)v1 + 1);
    --v2;
  }
  while ( v2 );
  return result;
}

//----- (02259D00) --------------------------------------------------------
int *__fastcall Function_2259d00(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2259ce8(a1);
  Function_2012870((int *)v1[4]);
  return Call_FillMemWithValue(v1, 0, 0x20u);
}

//----- (02259D1C) --------------------------------------------------------
int __fastcall Function_2259d1c(int result, int a2)
{
  int v2;

  if ( a2 == *(uint *)(result + 4) )
  {
    v2 = *(uint *)(result + 8);
    result = (*(int (**)(void))(result + 12))();
  }
  return result;
}

//----- (02259D2C) --------------------------------------------------------
int __fastcall Function_2259d2c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = 2;
  v6 = a1 + 32;
  while ( v5 == v3 )
  {
    if ( v4 )
    {
      if ( v4 == 2 )
        result = Function_2259d98(v6);
      else
        result = Function_2259db0(v6);
    }
    else
    {
      Function_2259db0(v6);
      result = Function_2005748(0x67Du);
    }
    ++v5;
    v6 += 16;
    if ( v5 > 3 )
      return result;
  }
  return Function_2259da4(v6);
}

//----- (02259D78) --------------------------------------------------------
uint __fastcall Function_2259d78(uint result, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;

  v4 = (uint *)result;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !result )
    result = ErrorHandler();
  v4[1] = v7;
  v4[2] = v6;
  v4[3] = v5;
  return result;
}

//----- (02259D94) --------------------------------------------------------
void Function_2259d94()
{
  ;
}

//----- (02259D98) --------------------------------------------------------
uint __fastcall Function_2259d98(int *a1)
{
  return Function_2021e50(*a1, 2u);
}

//----- (02259DA4) --------------------------------------------------------
uint __fastcall Function_2259da4(int *a1)
{
  return Function_2021e50(*a1, 0);
}

//----- (02259DB0) --------------------------------------------------------
uint __fastcall Function_2259db0(int *a1)
{
  return Function_2021e50(*a1, 1u);
}

//----- (02259DBC) --------------------------------------------------------
int __fastcall Function_2259dbc(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  a1[25] = Function_2012744(1, 0xDu);
  Function_225a218(v3);
  Function_225a0e4(v2, 0, v3, 48, 144, 40, 32);
  Function_225a200(v2 + 27, 0, 48, 152, 40, 24);
  Function_225a0e4(v2 + 4, 1, v3, 8, 144, 40, 32);
  Function_225a200(v2 + 27, 1, 8, 152, 40, 24);
  Function_225a0e4(v2 + 8, 2, v3, 96, 144, 40, 42);
  Function_225a200(v2 + 27, 2, 96, 156, 40, 34);
  Function_225a0e4(v2 + 12, 3, v3, 136, 144, 40, 42);
  Function_225a200(v2 + 27, 3, 136, 156, 40, 34);
  Function_2002bb8(2, 0xEu);
  v4 = Function_225a348(v3, 26, 385, 0, 9, 5);
  Function_225a154(v2 + 16, 4, v3, v2[25], v4, 184, 144, 72, 42);
  Function_225a200(v2 + 27, 4, 184, 156, 72, 34);
  Function_225a3d0(v4);
  Function_2002c60(2);
  v2[24] = 1;
  Function_225a2a8(v3);
  Function_2259d98(v2 + 8);
  result = Function_2023fcc((int)(v2 + 27), 5u, (int)Function_225a02c, (int)v2, 0xDu);
  v2[26] = result;
  return result;
}

//----- (02259F24) --------------------------------------------------------
int __fastcall Function_2259f24(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    Function_22552ec(v3, v4);
    Function_2255300(v3, v4);
    Function_201eb50(v4++);
  }
  while ( v4 < 5 );
  Function_201f9f0(0);
  Function_201f9f0(1);
  v5 = 0;
  v6 = v2;
  do
  {
    Function_2259ce8(v6);
    ++v5;
    v6 += 4;
  }
  while ( v5 < 4 );
  Function_201ee28((int)(v2 + 21));
  Function_2259d00(v2 + 16);
  Function_20127bc(v2[25]);
  Function_2024034(v2[26]);
  result = 0;
  v2[26] = 0;
  return result;
}

//----- (02259F88) --------------------------------------------------------
uint __fastcall Function_2259f88(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 104) )
    ErrorHandler();
  return Function_202404c(*(int **)(v1 + 104));
}

//----- (02259FA0) --------------------------------------------------------
int __fastcall Function_2259fa0(int a1)
{
  int v1;

  v1 = a1;
  Function_225a2d0(a1 + 64, 3);
  Function_225a2f4(v1 + 64, 3);
  return Function_2259d2c(v1, 2, 3);
}

//----- (02259FC4) --------------------------------------------------------
int __fastcall Function_2259fc4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a3;
  v5 = 0;
  v6 = a1;
  do
  {
    Function_225a3dc(v6, v3, v4);
    ++v5;
    v6 += 16;
  }
  while ( v5 < 4 );
  return Function_225a418();
}

//----- (02259FF4) --------------------------------------------------------
uint __fastcall Function_2259ff4(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  uint result;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( !a1 )
    ErrorHandler();
  if ( v6 >= 4 )
    result = Function_2259d78(v5 + 64, v7, v8, a5);
  else
    result = Function_2259d78(v5 + 16 * v6, v7, v8, a5);
  return result;
}

//----- (0225A02C) --------------------------------------------------------
uint __fastcall Function_225a02c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  switch ( (uchar)a1 )
  {
    case 0:
      Function_225a2d0(a3, a2);
      Function_225a338(v5, 1665, 0, v4);
      result = Function_2259d1c(v5, v4);
      break;
    case 1:
      Function_225a2d0(a3 + 16, a2);
      Function_225a338(v5 + 16, 1665, 0, v4);
      result = Function_2259d1c(v5 + 16, v4);
      break;
    case 2:
    case 3:
      Function_2259d2c(a3, a1, a2);
      result = Function_2259d1c(v5 + 16 * v3, v4);
      break;
    case 4:
      result = *(uint *)(a3 + 96);
      if ( result == 1 )
      {
        Function_225a2d0(a3 + 64, a2);
        Function_225a2f4(v5 + 64, v4);
        Function_225a338(v5 + 64, 1506, 0, v4);
        result = Function_2259d1c(v5 + 64, v4);
      }
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (0225A0E4) --------------------------------------------------------
int (*__fastcall Function_225a0e4(int *a1, int a2, uint *a3, int a4, int a5))()
{
  int *v5;
  uint *v6;
  int v7;
  int v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  int *v18;
  int v19;
  int v20;
  int v21;

  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_20093b4((int)&v17, a2, 0, a2, a2, -1, -1, 0, 0, v6[18], v6[19], v6[20], v6[21], 0, 0);
  v9 = v6[17];
  v10 = &v17;
  v11 = v7 << 12;
  v15 = 1;
  v12 = a5 << 12;
  v14 = 2;
  v16 = 14;
  v18 = &v9;
  v21 = 1;
  v13 = 0;
  v19 = 0;
  v20 = 0;
  return Function_2259c58(v5, (int)&v18);
}

//----- (0225A154) --------------------------------------------------------
int *__fastcall Function_225a154(int *a1, int a2, uint *a3, int a4, int a5, int a6, int a7)
{
  int *v7;
  uint *v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char v23;
  int *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  uchar *v30;
  int v31;
  int v32;
  int v33;

  v7 = a1;
  v8 = a3;
  v9 = a4;
  Function_20093b4((int)&v23, a2, 0, a2, a2, -1, -1, 0, 0, v8[18], v8[19], v8[20], v8[21], 0, 0);
  v15 = v8[17];
  v16 = &v23;
  v22 = 14;
  v17 = a6 << 12;
  v24 = &v15;
  v18 = a7 << 12;
  v20 = 2;
  v19 = 0;
  v21 = 1;
  v25 = 0;
  v26 = 0;
  v31 = 0;
  v27 = 1;
  v29 = v9;
  v28 = a5;
  v32 = 19;
  v10 = (int *)Function_2009dc8(v8[19], 1);
  v30 = Function_200a72c(v10, 0);
  v11 = Function_2012898(a5, 1, 0xDu);
  if ( !Function_201ed94(v11, 1, 1, (int)(v7 + 5)) )
    ErrorHandler();
  v33 = v7[6];
  return Function_2259c9c(v7, (int)&v24, v12, v13);
}

//----- (0225A200) --------------------------------------------------------
int __fastcall Function_225a200(int a1, int a2, int a3, char a4, int a5, char a6)
{
  int v6;
  uchar *v7;
  int result;

  v6 = 4 * a2;
  *(uchar *)(a1 + v6) = a4;
  v7 = (uchar *)(a1 + v6);
  v7[2] = a3;
  v7[1] = a4 + a6;
  result = a3 + a5;
  v7[3] = a3 + a5;
  return result;
}

//----- (0225A218) --------------------------------------------------------
int __fastcall Function_225a218(int a1)
{
  int v1;
  int v2;
  uint v3;
  uint v4;
  uint v6;

  v1 = a1;
  v2 = 0;
  v6 = 107;
  v3 = 106;
  v4 = 105;
  do
  {
    Function_2255248(v1, *(uint *)(v1 + 384), v6, 0, 1, v2);
    Function_225528c(v1, *(uint *)(v1 + 384), v3, 0, v2);
    Function_22552a8(v1, *(uint *)(v1 + 384), v4, 0, v2++);
    v6 += 3;
    v3 += 3;
    v4 += 3;
  }
  while ( v2 < 5 );
  Function_2255268(v1, *(uint *)(v1 + 384), 0x68u, 0, 1, 3, 0);
  return Function_2255268(v1, *(uint *)(v1 + 384), 0x78u, 0, 1, 2, 1);
}

//----- (0225A2A8) --------------------------------------------------------
int __fastcall Function_225a2a8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = 0;
  do
    Function_22552c4(v1, v2++);
  while ( v2 < 5 );
  Function_22552d8(v1, 0);
  return Function_22552d8(v1, 1);
}

//----- (0225A2D0) --------------------------------------------------------
int *__fastcall Function_225a2d0(int *result, int a2)
{
  switch ( a2 )
  {
    case 0:
      return (int *)Function_2259db0(result);
    case 2:
      return (int *)Function_2259d98(result);
    case 1:
    case 3:
      result = (int *)Function_2259da4(result);
      break;
  }
  return result;
}

//----- (0225A2F4) --------------------------------------------------------
int __fastcall Function_225a2f4(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = result;
  v5 = a2;
  if ( a2 )
  {
    if ( a2 == 1 )
      result = Function_20128c4(*(uint **)(result + 16), 0, 19, a4);
    if ( v5 == 3 )
    {
      Function_20128c4(*(uint **)(v4 + 16), 0, 19, a4);
      result = Function_2012a60(*(uint **)(v4 + 16), 3);
    }
  }
  else
  {
    Function_20128c4(*(uint **)(result + 16), 0, 15, a4);
    result = Function_2012a60(*(uint **)(v4 + 16), 4);
  }
  return result;
}

//----- (0225A338) --------------------------------------------------------
int __fastcall Function_225a338(int a1, ushort a2, int a3, int a4)
{
  int result;

  if ( a4 == a3 )
    result = Function_2005748(a2);
  return result;
}

//----- (0225A348) --------------------------------------------------------
int __fastcall Function_225a348(int a1, int a2, int a3, uint a4, int a5, uchar a6)
{
  int v6;
  uint v7;
  ushort **v8;
  ushort *v9;
  int v10;
  int v11;

  v6 = a1;
  v7 = a4;
  v8 = (ushort **)LoadFromMsgNARC(0, a2, a3, 0xDu);
  if ( !v8 )
    ErrorHandler();
  v9 = Function_200b1ec_CallMsgDecrypt(v8, v7);
  v10 = Function_201a778(0xEu, 1);
  Function_201a7a0(v10);
  Function_201a870(*(uint **)(v6 + 64), v10, (uchar)a5, a6, 0, 0);
  Function_2002eec(2, (int)v9, 0, 8 * a5);
  Function_201d78c(v10, 2);
  Function_20237bc_FreeMsg((int)v9, v11);
  Function_200b190((ushort *)v8);
  return v10;
}

//----- (0225A3D0) --------------------------------------------------------
uint __fastcall Function_225a3d0(int a1)
{
  return Function_201a928(a1, 1);
}

//----- (0225A3DC) --------------------------------------------------------
int __fastcall Function_225a3dc(uint *a1, int a2, int a3)
{
  uint **v3;
  uint *v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v10;
  int v11;
  int v12;

  v3 = (uint **)a1;
  v4 = (uint *)*a1;
  v5 = a2;
  v6 = a3;
  Function_2021d28();
  v8 = v7[1];
  v10 = *v7;
  v11 = v8;
  v12 = v7[2];
  v10 += v5 << 12;
  v11 = v8 + (v6 << 12);
  return Function_2021c50(*v3, &v10);
}

//----- (0225A418) --------------------------------------------------------
int __fastcall Function_225a418(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;

  v3 = a1;
  Function_225a3dc(a1, a2, a3);
  return Function_2012938((uint *)v3[4], v4, v5, v6);
}

//----- (0225A428) --------------------------------------------------------
int __fastcall Function_225a428(int *a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int *v5;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( a3 & 1 )
    Call_FillMemWithValue(a1, 0, 0x148u);
  if ( v4 & 2 )
    Function_225a6e0(v5, *v3);
  if ( v4 & 4 )
    Function_225a748(v5 + 11, *v3, 2, 19, 27, 4, 31, 1);
  if ( v4 & 8 )
    Function_225a914(v5 + 14, v3[1], v3[2], v3[4], v3[9]);
  if ( v4 & 0x10 )
    Function_225ab54(v5 + 40, v3[1], v3[2], v3[7], *v3, v3[8], v3[9]);
  if ( v4 & 0x20 )
  {
    Function_225a748(v5 + 77, *v3, 2, 1, 27, 2, 139, 1);
    Function_201ada4_ClearTextBox(v5[77], 15);
    Function_225a860(v5[77], 26, v3[5], 6, 0, 0, 66063, 255);
    Function_225a860(v5[77], 26, v3[5], v3[6], 72, 0, 66063, 255);
    Function_200e060(v5[77], 0, 1, 1u);
  }
  v5[12] = v3[1];
  v5[13] = v3[2];
  Function_225a718(*v3, v3[3]);
  v5[79] = Function_2027b50((ushort *)v3[3]);
  v5[80] = Function_2027ac0((ushort *)v3[3]);
  result = v5[78] | v4;
  v5[78] = result;
  return result;
}

//----- (0225A560) --------------------------------------------------------
int *__fastcall Function_225a560(int *a1)
{
  int *v1;

  v1 = a1;
  if ( a1[78] & 2 )
  {
    Function_225a7b8();
    v1[78] &= 0xFFFFFFFD;
  }
  if ( v1[78] & 4 )
  {
    Function_225a7c0(v1[11]);
    v1[78] &= 0xFFFFFFFB;
  }
  if ( v1[78] & 8 )
  {
    Function_225aa10(v1 + 14, v1[13]);
    v1[78] &= 0xFFFFFFF7;
  }
  if ( v1[78] & 0x10 )
  {
    Function_225ac58(v1 + 40, v1[13]);
    v1[78] &= 0xFFFFFFEF;
  }
  if ( v1[78] & 0x20 )
  {
    Function_225a7c0(v1[77]);
    v1[78] &= 0xFFFFFFDF;
  }
  return Call_FillMemWithValue(v1, 0, 0x148u);
}

//----- (0225A610) --------------------------------------------------------
int __fastcall Function_225a610(int result)
{
  if ( *(uint *)(result + 312) & 0x10 )
    result = Function_225ac8c(result + 160);
  return result;
}

//----- (0225A628) --------------------------------------------------------
int __fastcall Function_225a628(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !(*(uint *)(a1 + 312) & 4) )
    ErrorHandler();
  return Function_225a7cc(*(uint *)(v4 + 44), v5, v6, v7, 0, 0, 255);
}

//----- (0225A660) --------------------------------------------------------
int __fastcall Function_225a660(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !(*(uint *)(a1 + 312) & 4) )
    ErrorHandler();
  return Function_225a814(*(uint *)(v4 + 44), v5, v6, v7, 0, 0, *(uint *)(v4 + 320), v4 + 324);
}

//----- (0225A6A0) --------------------------------------------------------
int __fastcall Function_225a6a0(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 324), a2);
  result = 324;
  *(uint *)(v2 + 324) = 0;
  return result;
}

//----- (0225A6B8) --------------------------------------------------------
int __fastcall Function_225a6b8(int a1)
{
  return Function_225a9c8(a1 + 56);
}

//----- (0225A6C4) --------------------------------------------------------
int __fastcall Function_225a6c4(int a1)
{
  return *(uint *)(a1 + 188);
}

//----- (0225A6CC) --------------------------------------------------------
uint *__fastcall Function_225a6cc(int a1, int a2)
{
  uint *result;

  result = (uint *)(a1 + 192);
  *result = a2;
  return result;
}

//----- (0225A6D4) --------------------------------------------------------
int __fastcall Function_225a6d4(int a1)
{
  return Function_225af34(a1 + 208);
}

//----- (0225A6E0) --------------------------------------------------------
int __fastcall Function_225a6e0(uint *a1, int a2, int a3, int a4)
{
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

  v17 = a4;
  v5 = a2;
  v6 = 25;
  v7 = 224;
  v8 = 225;
  v9 = 226;
  v12 = 4;
  v13 = 1;
  v16 = 14;
  v10 = 0;
  v11 = 0;
  v14 = 0;
  v15 = 0;
  return Function_22597bc(a1, &v5);
}

//----- (0225A718) --------------------------------------------------------
int __fastcall Function_225a718(uint *a1, ushort *a2)
{
  uint *v2;
  uchar v3;

  v2 = a1;
  v3 = Function_2027b50(a2);
  Function_200dd0c(v2, 5u, 1, 1, v3, 14);
  return LoadFromNARC_PlFont2(4u, 64, 14);
}

//----- (0225A748) --------------------------------------------------------
int __fastcall Function_225a748(int *a1, uint *a2, char a3, char a4, uchar a5, uchar a6, short a7, int a8)
{
  int *v8;
  uint *v9;
  char v10;
  char v11;
  int v12;
  int v13;

  v8 = a1;
  v9 = a2;
  v10 = a4;
  v11 = a3;
  v12 = Function_201a778(0xEu, 1);
  *v8 = v12;
  Function_201a7a0(v12);
  Function_201a7e8(v9, *v8, 5, v11, v10, a5, a6, 2, a7);
  Function_201ada4_ClearTextBox(*v8, 15);
  if ( a8 )
    Function_200e060(*v8, 0, 1, 1u);
  return Function_201a954(*v8, v13);
}

//----- (0225A7B8) --------------------------------------------------------
int *__fastcall Function_225a7b8(int *a1)
{
  return Function_2259804(a1);
}

//----- (0225A7C0) --------------------------------------------------------
uint __fastcall Function_225a7c0(int a1)
{
  return Function_201a928(a1, 1);
}

//----- (0225A7CC) --------------------------------------------------------
int __fastcall Function_225a7cc(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v7 = a2;
  v8 = a1;
  v9 = a3;
  v10 = a4;
  Function_201ada4_ClearTextBox(a1, 15);
  v11 = Function_225a860(v8, v7, v9, v10, a5, a6, 66063, a7);
  Function_200e060(v8, 0, 1, 1u);
  return v11;
}

//----- (0225A814) --------------------------------------------------------
int __fastcall Function_225a814(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v8 = a2;
  v9 = a1;
  v10 = a3;
  v11 = a4;
  Function_201ada4_ClearTextBox(a1, 15);
  v12 = Function_225a8b4(v9, v8, v10, v11, a5, a6, 66063, a7, a8);
  Function_200e060(v9, 0, 1, 1u);
  return v12;
}

//----- (0225A860) --------------------------------------------------------
int __fastcall Function_225a860(int a1, int a2, int a3, uint a4)
{
  int v4;
  uint v5;
  ushort **v6;
  ushort *v7;
  int v8;
  int v9;

  v4 = a1;
  v5 = a4;
  v6 = (ushort **)LoadFromMsgNARC(0, a2, a3, 0xDu);
  if ( !v6 )
    ErrorHandler();
  v7 = Function_200b1ec_CallMsgDecrypt(v6, v5);
  v8 = Function_201d78c(v4, 1);
  Function_20237bc_FreeMsg((int)v7, v9);
  Function_200b190((ushort *)v6);
  return v8;
}

//----- (0225A8B4) --------------------------------------------------------
int __fastcall Function_225a8b4(int a1, int a2, int a3, uint a4, int a5, int a6, int a7, int a8, ushort **a9)
{
  int v9;
  int v10;
  int v11;
  ushort **v12;
  ushort *v13;
  int v14;
  uint v16;

  v9 = a1;
  v10 = a2;
  v11 = a3;
  v16 = a4;
  if ( *a9 )
    ErrorHandler();
  v12 = (ushort **)LoadFromMsgNARC(0, v10, v11, 0xDu);
  if ( !v12 )
    ErrorHandler();
  *a9 = Function_200b1ec_CallMsgDecrypt(v12, v16);
  v13 = *a9;
  v14 = Function_201d78c(v9, 1);
  Function_200b190((ushort *)v12);
  return v14;
}

//----- (0225A914) --------------------------------------------------------
int __fastcall Function_225a914(int a1, int a2, int a3, int a4, int a5)
{
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
  char *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char v24;

  v5 = a2;
  v6 = a3;
  v14 = a4;
  v13 = a1;
  Function_225aa34(a1, a3, 14, a5, 103, 225);
  Function_225aaf4(v13, v6, &v24, 0);
  v18 = &v24;
  v22 = 2;
  v16 = 0;
  v21 = 0;
  v23 = 14;
  v7 = 0;
  v17 = v5;
  v15 = 104;
  do
  {
    v8 = 0;
    v20 = (v15 << 12) + 0x200000;
    v9 = 38;
    v10 = v13 + 4 * v7;
    do
    {
      v19 = v9 << 12;
      v11 = Function_2021b90(&v17);
      *(uint *)(v10 + 16) = v11;
      Function_2021d6c(v11, 1u);
      if ( v8 + v7 >= v14 )
        Function_2021cac(*(uint *)(v10 + 16), 0);
      ++v8;
      v9 += 18;
      v10 += 4;
    }
    while ( v8 < 10 );
    v7 += 10;
    v15 += 18;
    result = v16 + 1;
    v16 = result;
  }
  while ( result < 2 );
  return result;
}

//----- (0225A9C8) --------------------------------------------------------
int __fastcall Function_225a9c8(int result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = result;
  v3 = *(uint *)(result + 96);
  v4 = a2;
  if ( v3 >= a2 )
  {
    if ( v3 > a2 )
    {
      v6 = v3 - 1;
      if ( v6 >= a2 )
      {
        v7 = result + 4 * v6;
        do
        {
          result = Function_2021d6c(*(uint *)(v7 + 16), 1u);
          --v6;
          v7 -= 4;
        }
        while ( v6 >= v4 );
      }
    }
  }
  else if ( v3 < a2 )
  {
    v5 = result + 4 * v3;
    do
    {
      result = Function_2021d6c(*(uint *)(v5 + 16), 0);
      ++v3;
      v5 += 4;
    }
    while ( v3 < v4 );
  }
  *(uint *)(v2 + 96) = v4;
  return result;
}

//----- (0225AA10) --------------------------------------------------------
int __fastcall Function_225aa10(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = a1;
  do
  {
    Function_2021bd4(*(uint *)(v5 + 16));
    ++v4;
    v5 += 4;
  }
  while ( v4 < 20 );
  return Function_225aac0(v2, v3);
}

//----- (0225AA34) --------------------------------------------------------
int *__fastcall Function_225aa34(int a1, int *a2, uint a3, int a4, uint a5, uint a6, uint a7, uint a8, int a9, int a10)
{
  uint v10;
  int v11;
  int *v12;
  int v13;
  int *v14;
  int *v15;
  int *result;

  v10 = a3;
  v11 = a1;
  v12 = a2;
  v13 = a4;
  v14 = Function_2009a4c(*a2, a4, a5, 0, a10 + a5, 2, a3);
  *(uint *)v11 = v14;
  Function_200a3dc(v14);
  Function_2009d4c(*(int **)v11);
  v15 = Function_2009b04(v12[1], v13, a6, 0, a10 + a6, 2, a9, v10);
  *(uint *)(v11 + 4) = v15;
  Function_200a640(v15);
  Function_2009d4c(*(int **)(v11 + 4));
  *(uint *)(v11 + 8) = Function_2009bc4(v12[2], v13, a7, 0, a10 + a7, 2u, v10);
  result = Function_2009bc4(v12[3], v13, a8, 0, a10 + a8, 3u, v10);
  *(uint *)(v11 + 12) = result;
  return result;
}

//----- (0225AAC0) --------------------------------------------------------
int __fastcall Function_225aac0(int **a1, int **a2)
{
  int **v2;
  int **v3;

  v2 = a1;
  v3 = a2;
  Function_200a4e4(*a1);
  Function_200a6dc(v2[1]);
  Function_2009d68(*v3, (uint **)*v2);
  Function_2009d68(v3[1], (uint **)v2[1]);
  Function_2009d68(v3[2], (uint **)v2[2]);
  return Function_2009d68(v3[3], (uint **)v2[3]);
}

//----- (0225AAF4) --------------------------------------------------------
int __fastcall Function_225aaf4(int **a1, int *a2, int a3, int a4)
{
  int **v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = Function_2009e08(*a1);
  v9 = Function_2009e08(v4[1]);
  v10 = Function_2009e08(v4[2]);
  v11 = Function_2009e08(v4[3]);
  return Function_20093b4(v6, v8, v9, v10, v11, -1, -1, 0, v7, *v5, v5[1], v5[2], v5[3], 0, 0);
}

//----- (0225AB54) --------------------------------------------------------
int __fastcall Function_225ab54(int a1, int a2, int *a3, int a4, uint *a5, int *a6, int a7)
{
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  char *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char v23;
  int v24;

  v24 = a4;
  v7 = a2;
  v8 = a3;
  v15 = a4;
  v9 = a1;
  Function_225aa34(a1, a3, 0xEu, a7, 0xE5u, 0xE6u, 0xE4u, 0xE3u, 2, 3000);
  Function_225aaf4((int **)v9, v8, (int)&v23, 0);
  v17 = &v23;
  v22 = 14;
  v10 = 0;
  v16 = v7;
  v21 = 2;
  v20 = 0;
  v19 = 2334720;
  v11 = 103;
  v12 = v9;
  do
  {
    v18 = v11 << 12;
    *(uint *)(v12 + 16) = Function_2021b90(&v16);
    ++v10;
    v11 += 24;
    v12 += 4;
  }
  while ( v10 < 2 );
  *(uint *)(v9 + 28) = v15;
  *(uint *)(v9 + 32) = 30 * v15;
  *(uint *)(v9 + 44) = a6;
  *a6 = v15;
  *(uint *)(*(uint *)(v9 + 44) + 8) = v15;
  *(uint *)(v9 + 144) = 0;
  Function_225ace4(v9);
  Function_225a748((int *)(v9 + 24), a5, 10, 8, 0xEu, 4u, 193, 0);
  Function_201ada4_ClearTextBox(*(uint *)(v9 + 24), 0);
  Function_225a860(*(uint *)(v9 + 24), 26, 385, 4u);
  Function_225a860(*(uint *)(v9 + 24), 26, 385, 5u);
  return Function_201a954(*(uint *)(v9 + 24), v13);
}

//----- (0225AC58) --------------------------------------------------------
int *__fastcall Function_225ac58(int a1, int **a2)
{
  int v2;
  int *v3;
  int **v4;
  int *v5;

  v2 = a1;
  v3 = *(int **)(a1 + 36);
  v4 = a2;
  if ( v3 )
    Call_RemoveTaskFromTaskList(v3);
  v5 = *(int **)(v2 + 40);
  if ( v5 )
    Call_RemoveTaskFromTaskList(v5);
  Function_225aac0((int **)v2, v4);
  Function_225a7c0(*(uint *)(v2 + 24));
  return Call_FillMemWithValue((int *)v2, 0, 0x94u);
}

//----- (0225AC8C) --------------------------------------------------------
int __fastcall Function_225ac8c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_225ad5c();
  v2 = s32_div_f(*(uint *)(v1 + 32), 30);
  Function_2095c60(*(uint *)(v1 + 44), v2);
  Function_225acbc(v1);
  Function_225ace4(v1);
  return Function_225ae9c(v1 + 48);
}

//----- (0225ACBC) --------------------------------------------------------
int __fastcall Function_225acbc(int result)
{
  int v1;

  v1 = **(uint **)(result + 44);
  if ( *(uint *)(result + 28) != v1 )
  {
    *(uint *)(result + 28) = v1;
    if ( v1 <= 10 )
    {
      Function_225adc0();
      result = Function_2005748(0x683u);
    }
  }
  return result;
}

//----- (0225ACE4) --------------------------------------------------------
int __fastcall Function_225ace4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  uint v6;
  int v7;

  v1 = a1;
  v6 = *(uint *)(a1 + 28);
  v2 = 10;
  v3 = 0;
  v4 = a1;
  do
  {
    v7 = s32_div_f(v6, v2);
    if ( v7 > 10 )
      ErrorHandler();
    Function_2021d6c(*(uint *)(v4 + 16), v7);
    v6 -= v7 * v2;
    v2 = s32_div_f(v2, 10);
    result = *(uint *)(v1 + 144);
    if ( !result )
    {
      result = *(uint *)(v1 + 28);
      if ( result <= 10 )
      {
        result = Function_2021ec4(*(uint *)(v4 + 16), 1);
        if ( v3 == 1 )
        {
          result = 1;
          *(uint *)(v1 + 144) = 1;
        }
      }
    }
    ++v3;
    v4 += 4;
  }
  while ( v3 < 2 );
  return result;
}

//----- (0225AD5C) --------------------------------------------------------
int __fastcall Function_225ad5c(int result)
{
  int v1;

  v1 = *(uint *)(result + 32) - 1;
  if ( v1 >= 0 )
    *(uint *)(result + 32) = v1;
  return result;
}

//----- (0225AD68) --------------------------------------------------------
uint *__fastcall Function_225ad68(uint *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a2;
  result[2] = a3 - a2;
  result[4] = a4;
  result[3] = 0;
  return result;
}

//----- (0225AD78) --------------------------------------------------------
int __fastcall Function_225ad78(uint *a1)
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

//----- (0225ADC0) --------------------------------------------------------
uint *__fastcall Function_225adc0(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  uint *result;
  int v11;
  uint *v12;
  uint *v13;
  int v14;

  v11 = a1;
  v12 = a2;
  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = 103;
  v13 = a2;
  do
  {
    v6 = *(uint *)(v3 + 16);
    v2[1] = v6;
    Function_2021cf8(v6, 2);
    v13 += 3;
    *v13 = v5 << 12;
    v13[1] = 2334720;
    ++v4;
    v13[2] = v14;
    v3 += 4;
    ++v2;
    v5 += 24;
  }
  while ( v4 < 2 );
  v7 = *(uint *)(v11 + 28);
  if ( 10 - v7 <= 0 )
    v8 = 4096;
  else
    v8 = (ull)((ll_mul((10 - v7) << 12, 614LL) + 2048) >> 12) + 4096;
  Function_225ad68(v12 + 9, v8, 4096, 16);
  v9 = (ull)((ll_mul(v8, 98304LL) + 2048) >> 12) - 98304;
  Function_225ad68(v12 + 14, v9, 0, 16);
  Function_225ad68(v12 + 19, v9, 0, 16);
  result = v12;
  *v12 = 1;
  return result;
}

//----- (0225AE9C) --------------------------------------------------------
int __fastcall Function_225ae9c(int *a1)
{
  int *v1;
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

  v1 = a1;
  result = *a1;
  if ( result )
  {
    v3 = Function_225ad78(v1 + 9);
    Function_225ad78(v1 + 14);
    Function_225ad78(v1 + 19);
    v9 = v1[9];
    v10 = v1[9];
    v11 = v1[9];
    Function_2021c70((uint *)v1[1], &v9);
    Function_2021c70((uint *)v1[2], &v9);
    v4 = v1[4];
    v6 = v1[3];
    v7 = v4;
    v8 = v1[5];
    v6 -= v1[14];
    v7 = v4 - v1[19];
    Function_2021c50((uint *)v1[1], &v6);
    v5 = v1[7];
    v6 = v1[6];
    v7 = v5;
    v8 = v1[8];
    v7 = v5 - v1[19];
    result = Function_2021c50((uint *)v1[2], &v6);
    if ( v3 )
    {
      result = 0;
      *v1 = 0;
    }
  }
  return result;
}

//----- (0225AF34) --------------------------------------------------------
BOOL __fastcall Function_225af34(uint *a1)
{
  return *a1 != 1;
}

//----- (0225AF44) --------------------------------------------------------
uint *__fastcall Function_225af44(uint *a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  *a1 = a2;
  v5 = a2 + 72;
  v6 = 4 * *(uint *)(a2 + 116) + 137;
  v7 = 16;
  v8 = a3;
  return Function_2259820(a1 + 1, &v5);
}

//----- (0225AF68) --------------------------------------------------------
int __fastcall Function_225af68(int a1, int a2, int a3)
{
  return Function_2259838((int *)(a1 + 4), 1, a3, (int)Function_2259838);
}

//----- (0225AF74) --------------------------------------------------------
int __fastcall Function_225af74(int a1, int a2, int a3, int a4)
{
  uchar *v4;
  int v5;
  int result;

  v4 = (uchar *)a1;
  Function_22598a0((int *)(a1 + 4), a2, a3, a4);
  v5 = 28;
  result = 0;
  do
  {
    *v4++ = 0;
    --v5;
  }
  while ( v5 );
  return result;
}

//----- (0225AF8C) --------------------------------------------------------
int __fastcall Function_225af8c(int a1, int a2, int a3, int a4)
{
  int v4;
  char v6;
  int v7;

  v7 = a4;
  v4 = a2;
  Function_225b4e4(&v6, a1);
  Function_225b4f8(&v6, v4);
  return Function_225b1bc(&v6);
}

//----- (0225AFB0) --------------------------------------------------------
int __fastcall Function_225afb0(int a1, int a2, int a3, int a4)
{
  int v4;
  char v6;
  int v7;

  v7 = a4;
  v4 = a2;
  Function_225b4e4(&v6, a1);
  Function_225b540(&v6, v4);
  return Function_225b1bc(&v6);
}

//----- (0225AFD4) --------------------------------------------------------
int __fastcall Function_225afd4(int a1, int a2, int a3, int a4)
{
  int v4;
  char v6;
  int v7;

  v7 = a4;
  v4 = a2;
  Function_225b4e4(&v6, a1);
  Function_225b540(&v6, v4);
  return Function_225b258(&v6);
}

//----- (0225AFF8) --------------------------------------------------------
int __fastcall Function_225aff8(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = a1;
  if ( *(uint *)(a1 + 608) == 1 )
    Function_225af68(a1 + 536, 1, a3);
  result = *(uint *)(v3 + 612);
  if ( result == 1 )
    result = Function_225b328(v3);
  return result;
}

//----- (0225B020) --------------------------------------------------------
uint __fastcall Function_225b020(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 608) )
    return Function_225b480();
  Function_225b464();
  Function_2254e0c(*(int **)(v1 + 396));
  *(uint *)(v1 + 396) = 0;
  Function_22594ac((int *)(v1 + 388));
  Function_225b35c(v1);
  free(*(uint *)(v1 + 564));
  return free(v1);
}

//----- (0225B06C) --------------------------------------------------------
int __fastcall Function_225b06c(int a1)
{
  return Function_2255530(a1);
}

//----- (0225B074) --------------------------------------------------------
int __fastcall Function_225b074(int result, int a2)
{
  *(uint *)(result + 612) = a2;
  return result;
}

//----- (0225B07C) --------------------------------------------------------
int __fastcall Function_225b07c(int result, int a2)
{
  *(uint *)(result + 28) = a2;
  return result;
}

//----- (0225B080) --------------------------------------------------------
int __fastcall Function_225b080(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int result;

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = a1[143];
  v7 = a1[144];
  Function_2257ad8((int)(a1 + 100));
  if ( v5[152] )
  {
    Function_2019184(v5[16], 2u, 0, 136 - v4);
    Function_2019184(v5[16], 2u, 3u, 16 - v3);
  }
  v5[143] = v4;
  result = 576;
  v5[144] = v3;
  return result;
}

//----- (0225B0D8) --------------------------------------------------------
int __fastcall Function_225b0d8(int result, int a2, int a3)
{
  *(uint *)(result + 580) = a2;
  *(uint *)(result + 584) = a3;
  return result;
}

//----- (0225B0E4) --------------------------------------------------------
int __fastcall Function_225b0e4(int result, short a2)
{
  *(ushort *)(result + 588) = a2;
  return result;
}

//----- (0225B0EC) --------------------------------------------------------
uint *__fastcall Function_225b0ec(uint *result, int a2, int a3, int a4)
{
  result[148] = a2;
  result[149] = a3;
  result[150] = a4;
  return result;
}

//----- (0225B100) --------------------------------------------------------
int __fastcall Function_225b100(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char v9;
  char v10;
  int v11;
  int v12;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_2259270((int)(a1 + 130), &v10, &v9);
  Function_2257ce0((int)(v3 + 100), &v12, &v11);
  v6 = v3[143] + v4 - v12;
  v7 = v3[144] + v5 - v11;
  Function_225b080(v3, v6, v7);
  return Function_225b0d8((int)v3, v4 - v6, v5 - v7);
}

//----- (0225B158) --------------------------------------------------------
int __fastcall Function_225b158(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  long long v7;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = ll_mul((40 - a4) << 12, a1[149]);
  return Function_225b100(v5, v6, v4 - ((int)((v7 + 2048) >> 12) >> 12));
}

//----- (0225B198) --------------------------------------------------------
int __fastcall Function_225b198(int a1, int a2)
{
  *(ushort *)(a1 + 604) = a2;
  return Function_2257d70(a1 + 400, a2);
}

//----- (0225B1AC) --------------------------------------------------------
int __fastcall Function_225b1ac(int a1, int a2)
{
  return Function_2257b74(a1 + 400, a2);
}

//----- (0225B1BC) --------------------------------------------------------
int __fastcall Function_225b1bc(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = malloc(*(uint *)(a1 + 104), 616);
  Call_FillMemWithValue((int *)v2, 0, 0x268u);
  *(uint *)(v2 + 568) = *(uint *)(v1 + 104);
  *(uint *)(v2 + 564) = AllocPkmnData(*(uint *)(v1 + 104));
  Function_202a61c(*(uint *)v1, *(int **)(v2 + 564));
  Function_225b2d4(v2, v1);
  Function_22554a8(v2, *(uint *)(v1 + 88), *(uint *)(v1 + 104));
  Function_2259484(v2 + 388, 21, *(uint *)(v1 + 104));
  *(uint *)(v2 + 396) = Function_2254de0((int *)0x14, *(uint *)(v1 + 104));
  Function_225b388(v2, v1);
  Function_225b450(v2, v1);
  Function_225af44((uint *)(v2 + 536), v2 + 400, *(uint *)(v1 + 104), v3);
  *(uint *)(v2 + 608) = 1;
  *(uint *)(v2 + 612) = 1;
  Function_225b490(v2, v1);
  return v2;
}

//----- (0225B258) --------------------------------------------------------
int __fastcall Function_225b258(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = malloc(*(uint *)(a1 + 104), 616);
  Call_FillMemWithValue((int *)v2, 0, 0x268u);
  *(uint *)(v2 + 568) = *(uint *)(v1 + 104);
  *(uint *)(v2 + 564) = AllocPkmnData(*(uint *)(v1 + 104));
  Function_202a61c(*(uint *)v1, *(int **)(v2 + 564));
  Function_225b2d4(v2, v1);
  Function_2259484(v2 + 388, 21, *(uint *)(v1 + 104));
  *(uint *)(v2 + 396) = Function_2254de0((int *)0x14, *(uint *)(v1 + 104));
  Function_225b388(v2, v1);
  *(uint *)(v2 + 608) = 0;
  *(uint *)(v2 + 612) = 1;
  Function_225b490(v2, v1);
  return v2;
}

//----- (0225B2D4) --------------------------------------------------------
int __fastcall Function_225b2d4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  *(uint *)(a1 + 384) = LoadFromNARC_8(25, *(uint *)(a2 + 104), a3, a4);
  v8 = 718;
  v9 = 118;
  v10 = 19;
  v11 = *(uint *)(v4 + 104);
  Function_225547c(v5, (int)&v8, *(uint *)(v4 + 104), v6);
  Function_225b588(v5, &v12, v4, *(uint *)(v4 + 104));
  Function_22551b4(v5, &v12);
  return Function_2255338();
}

//----- (0225B328) --------------------------------------------------------
int *__fastcall Function_225b328(int a1)
{
  return Function_225553c(
           (uint *)a1,
           *(uint *)(a1 + 572) + *(uint *)(a1 + 580),
           *(uint *)(a1 + 576) + *(uint *)(a1 + 584),
           *(ushort *)(a1 + 588),
           (int *)(a1 + 592));
}

//----- (0225B35C) --------------------------------------------------------
uint __fastcall Function_225b35c(int *a1)
{
  int v1;

  v1 = (int)a1;
  Function_22551d0(a1);
  Function_22554f8(v1);
  if ( *(uint *)(v1 + 608) )
    Function_2255524(v1);
  return Call_FS_CloseFile(*(int **)(v1 + 384));
}

//----- (0225B388) --------------------------------------------------------
int __fastcall Function_225b388(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int *v23;
  int v24;

  v2 = a1;
  v3 = a2;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v16 = *a1;
  v17 = a1[1];
  v18 = a1[4];
  v19 = a1[12];
  v20 = a1[8];
  v21 = a1[16];
  v22 = a1[99];
  v23 = a1 + 97;
  v24 = 21;
  Function_22578f4(a1 + 100, &v16);
  v4 = Function_202a60c(*v3);
  v5 = Function_202a614(*v3);
  v6 = Function_202a604(*v3);
  v7 = v3[26];
  Function_2257964((int)(v2 + 100), v2[141], (int)&v15, v4, v5, v6);
  result = v3[21];
  v9 = 0;
  if ( result > 0 )
  {
    v10 = v3;
    do
    {
      v11 = Function_202a624((uchar *)v10[1]);
      v12 = Function_202a628(v10[1]);
      v13 = Function_202a62c(v10[1]);
      v14 = Function_202a630(v10[1]);
      Function_22579fc((int)(v2 + 100), v11, v12, v13, v14);
      result = v3[21];
      ++v9;
      ++v10;
    }
    while ( v9 < result );
  }
  return result;
}

//----- (0225B450) --------------------------------------------------------
int __fastcall Function_225b450(int a1, int a2)
{
  return Function_2257c88(a1 + 400, *(uint *)(a2 + 92), *(uint *)(a2 + 104), (int)Function_2257c88);
}

//----- (0225B464) --------------------------------------------------------
int *__fastcall Function_225b464(int a1)
{
  int v1;

  v1 = a1;
  Function_2257a98(a1 + 400);
  return Function_2257948((int *)(v1 + 400));
}

//----- (0225B480) --------------------------------------------------------
int __fastcall Function_225b480(int a1)
{
  return Function_2257cd4(a1 + 400);
}

//----- (0225B490) --------------------------------------------------------
int __fastcall Function_225b490(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  *(uint *)(a1 + 572) = 72;
  *(uint *)(a1 + 576) = 56;
  *(uint *)(a1 + 580) = 56;
  *(uint *)(a1 + 584) = 64;
  *(uint *)(a1 + 592) = 4096;
  *(uint *)(a1 + 596) = 4096;
  *(uint *)(a1 + 600) = 4096;
  *(ushort *)(a1 + 588) = 0;
  Function_225b080((int *)a1, *(uint *)(a2 + 96), *(uint *)(a2 + 100));
  result = 604;
  *(ushort *)(v2 + 604) = 0x7FFF;
  return result;
}

//----- (0225B4E4) --------------------------------------------------------
uint *__fastcall Function_225b4e4(uint *result, uint *a2)
{
  result[22] = *a2;
  result[24] = a2[1];
  result[25] = a2[2];
  result[26] = a2[3];
  return result;
}

//----- (0225B4F8) --------------------------------------------------------
int __fastcall Function_225b4f8(int **a1, int *a2)
{
  int *v2;
  int **v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  *a1 = Function_202a138(a2);
  v4 = 0;
  v3[21] = 0;
  do
  {
    if ( Function_202a110(v2, v4) )
    {
      v3[(uint)v3[21] + 1] = Function_202a150(v2, v4);
      v3[21] = (int *)((char *)v3[21] + 1);
    }
    ++v4;
  }
  while ( v4 < 10 );
  result = Function_202a1dc(v2);
  v3[23] = (int *)result;
  return result;
}

//----- (0225B540) --------------------------------------------------------
int __fastcall Function_225b540(int **a1, int *a2)
{
  int *v2;
  int **v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  *a1 = Function_202a4d8(a2);
  v4 = 0;
  v3[21] = 0;
  do
  {
    if ( Function_202a488(v2, v4) )
    {
      v3[(uint)v3[21] + 1] = Function_202a4f0(v2, v4);
      v3[21] = (int *)((char *)v3[21] + 1);
    }
    ++v4;
  }
  while ( v4 < 20 );
  result = Function_202a5b8(v2);
  v3[23] = (int *)result;
  return result;
}

//----- (0225B588) --------------------------------------------------------
int __fastcall Function_225b588(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a4;
  v6 = a1;
  v7 = a3;
  Function_2255410(a2, a4);
  return Function_225b5a8(v6, v4, v7, v5);
}

//----- (0225B5A8) --------------------------------------------------------
int __fastcall Function_225b5a8(uint *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  uint *v9;
  int result;
  uint *v11;
  int v12;
  int v13;
  int v14;

  v11 = a1;
  v14 = 0;
  v4 = a2;
  v12 = a3;
  v13 = a4;
  if ( *(uint *)(a3 + 84) > 0 )
  {
    v5 = a3;
    do
    {
      v6 = Function_202a624(*(uchar **)(v5 + 4));
      if ( Function_20229f8(*(uint *)(v4 + 16), v6) == 1 )
      {
        v7 = Function_200723c(v11[96], v6 + 1, 0, v13, 1);
        Function_2022a1c(*(uint **)(v4 + 16), (int)v7, v6);
        v8 = 8 * v6;
        NNS_G2dGetUnpackedPaletteData((int)v7, (uint *)(*(uint *)v4 + v8 + 4));
        *(uint *)(*(uint *)v4 + v8) = *v11;
      }
      v5 += 4;
      ++v14;
    }
    while ( v14 < *(uint *)(v12 + 84) );
  }
  v9 = Function_200723c(v11[96], 0, 0, v13, 1);
  Function_2022a1c(*(uint **)(v4 + 20), (int)v9, 0);
  Function_20a71b0((int)v9, (uint *)(*(uint *)(v4 + 8) + 4));
  **(uint **)(v4 + 8) = *v11;
  result = *(uint *)(v4 + 8);
  *(uint *)(result + 8) = 3;
  return result;
}

//----- (0225B660) --------------------------------------------------------
int __fastcall Function_22_225b660(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int *v6;
  int *v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a1;
  Function_2017fc8(3, 13, 0x20000);
  Function_2017fc8(3, 14, 0x40000);
  v5 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v4, 416, 0xDu);
  Call_FillMemWithValue(v5, 0, 0x1A0u);
  SetMainLoopFunctionCall((int)Function_225b848, (int)v5);
  Function_20177a4();
  v6 = (int *)LoadPtrToOverWorldDataIn18(v4);
  v7 = v6;
  v8 = v6[2] == 0;
  v9 = *v6;
  if ( v8 )
    *v5 = Function_2029ca8(v9, v7[1]);
  else
    v5[1] = Function_2029cd0(v9, v7[1]);
  v5[2] = v7[1];
  v5[3] = v7[2];
  Function_2255094();
  byte_21BF6E1 = 0;
  Function_201ffe8();
  Function_22555d4((int)(v5 + 5), 14, v10, v11);
  v16 = v5[21];
  v17 = 72;
  v18 = 16;
  v19 = 14;
  if ( v5[3] )
    v14 = Function_225afb0((int)&v16, v5[1], v12, v13);
  else
    v14 = Function_225af8c((int)&v16, *v5, v12, v13);
  v5[4] = v14;
  Function_225b85c(v5);
  Function_225b910(v5);
  Function_225b964(v5);
  Function_225ba40(v5);
  Function_225bad0(v5);
  return 1;
}

//----- (0225B738) --------------------------------------------------------
int __fastcall Function_22_225b738(int a1, int *a2)
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
  char v11;
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = Call_G3X_Reset();
  Function_20a73c0(v4, v5, v6, v7);
  Function_225aff8(*(uint *)(v3 + 16), v8, v9);
  Function_20241bc(0, 0);
  Function_225562c(v3 + 20);
  v10 = *v2;
  switch ( v11 )
  {
    case 0:
      *v2 = v10 + 1;
      goto LABEL_11;
    case 1:
      Function_200f174(0, 5, 1, 0, 6, 1, 13);
      ++*v2;
      goto LABEL_11;
    case 2:
      if ( Function_200f2ac() )
        ++*v2;
      goto LABEL_11;
    case 3:
      if ( dword_21BF6C4 & 3 )
        *v2 = v10 + 1;
      goto LABEL_11;
    case 4:
      Function_200f174(0, 2, 0, 0, 6, 1, 13);
      ++*v2;
      goto LABEL_11;
    case 5:
      if ( !Function_200f2ac() )
        goto LABEL_11;
      result = 1;
      break;
    default:
LABEL_11:
      result = 0;
      break;
  }
  return result;
}

//----- (0225B7FC) --------------------------------------------------------
int __fastcall Function_22_225b7fc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_225b020(*(uint *)(v2 + 16));
  Function_225ba00(v2);
  Function_225baa8(v2);
  Function_22555fc(v2 + 20);
  Function_22550b4();
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(13);
  Function_201807c(14);
  return 1;
}

//----- (0225B848) --------------------------------------------------------
int __fastcall Function_225b848(int a1)
{
  int v1;

  v1 = a1;
  Function_225b06c(*(uint *)(a1 + 16));
  return Function_225561c(v1 + 20);
}

//----- (0225B85C) --------------------------------------------------------
int __fastcall Function_225b85c(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  uchar v6;
  int v7;
  ushort *v9;
  int v10;

  v10 = a4;
  v4 = a1;
  Function_2007130(*(uint *)(a1 + 404), 0x7Eu, 0, 96, 64, 14);
  Function_20070e8(*(uint *)(v4 + 404), 0x7Du, *(uint **)(v4 + 84), 1u, 0, 0, 0, 14);
  if ( *(uint *)(v4 + 12) )
  {
    v5 = 127;
    v6 = 3;
  }
  else
  {
    v5 = 128;
    v6 = 4;
  }
  v7 = Function_20071d0(*(uint *)(v4 + 404), v5, 0, &v9, 14);
  Function_20198c0(
    *(uint *)(v4 + 84),
    1,
    (int)(v9 + 6),
    0,
    0,
    (uint)*v9 << 21 >> 24,
    (uint)v9[1] << 21 >> 24);
  Function_2019e2c(*(uint *)(v4 + 84), 1, 0, 0, (uint)*v9 << 21 >> 24, (uint)v9[1] << 21 >> 24, v6);
  free(v7);
  return Function_201c3c0(*(uint *)(v4 + 84), 1);
}

//----- (0225B910) --------------------------------------------------------
int __fastcall Function_225b910(int a1)
{
  int v1;

  v1 = a1;
  Call_LoadFromNARC_RLCN(12, 12, 4u, 0, 32, 14);
  LoadFromNARC_RCSN(12, 11, *(uint **)(v1 + 84), 4u, 0, 0, 1, 14);
  return LoadFromNARC_RGCN(12, 10, *(uint **)(v1 + 84), 4u, 0, 0, 1, 14);
}

//----- (0225B964) --------------------------------------------------------
char *__fastcall Function_225b964(int *a1)
{
  int *v1;

  v1 = a1;
  Function_2255248((int)(a1 + 5), a1[101], 0xE9u, 0, 1, 1000);
  Function_2255268((int)(v1 + 5), v1[101], 0xEAu, 0, 1, 6, 1000);
  Function_225528c((int)(v1 + 5), v1[101], 0xE8u, 0, 1000);
  Function_22552a8((int)(v1 + 5), v1[101], 0xE7u, 0, 1000);
  v1[102] = Function_22551e4(v1 + 5, 1000, 0, 144, 100, 1);
  return Function_2021e80(v1[102], 1);
}

//----- (0225BA00) --------------------------------------------------------
int __fastcall Function_225ba00(int a1)
{
  int v1;

  v1 = a1;
  Function_22552c4(a1 + 20, 1000);
  Function_22552d8(v1 + 20, 1000);
  Function_22552ec(v1 + 20, 1000);
  Function_2255300(v1 + 20, 1000);
  return Function_2021bd4(*(uint *)(v1 + 408));
}

//----- (0225BA40) --------------------------------------------------------
void __fastcall Function_225ba40(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 412) = Function_201a778(0xEu, 1);
  Function_201a7e8(*(uint **)(v1 + 84), *(uint *)(v1 + 412), 3, 0, 18, 0x20u, 6u, 5, 1);
  LoadFromNARC_PlFont1(0, 160, 14);
  Function_2019060(3u, 0);
  Function_2019060(0, 2);
  Function_2019060(1u, 1);
  Function_2019184(*(uint *)(v1 + 84), 3u, 3u, 0);
}

//----- (0225BAA8) --------------------------------------------------------
uint __fastcall Function_225baa8(int a1)
{
  int v1;

  v1 = a1;
  Function_201acf4(*(uint *)(a1 + 412));
  Function_201a8fc(*(uint *)(v1 + 412));
  return Function_201a928(*(uint *)(v1 + 412), 1);
}

//----- (0225BAD0) --------------------------------------------------------
int __fastcall Function_225bad0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_201ada4_ClearTextBox(*(uint *)(a1 + 412), 0);
  if ( *(uint *)(v1 + 12) )
    Function_225bc18(v1);
  else
    Function_225bb00(v1);
  return Function_201a954(*(uint *)(v1 + 412), v2);
}

//----- (0225BB00) --------------------------------------------------------
uint __fastcall Function_225bb00(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  ushort *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  ushort **v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a1;
  v16 = (ushort **)LoadFromMsgNARC(0, 26, 385, 0xDu);
  if ( !v16 )
    ErrorHandler();
  v5 = (int *)Function_200b358(0xDu);
  Function_2021d6c(*(uint *)(v4 + 408), 5u);
  v17 = 196608;
  v18 = 589824;
  v19 = 0;
  Function_2021c50(*(uint **)(v4 + 408), &v17);
  v6 = (ushort *)Function_2023790(12, 0xDu);
  Function_202a1a0(*(int **)v4, v6);
  Function_2002d7c(0, (int)v6, 0);
  Function_201d78c(*(uint *)(v4 + 412), 0);
  Function_20237bc_FreeMsg((int)v6, v7);
  v8 = Function_202a1f4(*(uint *)v4);
  Function_200be48(v5, 0, v8, v9);
  v10 = Function_2023790(200, 0xDu);
  v11 = Function_200b1ec_CallMsgDecrypt(v16, 0x2Du);
  Function_200c388((uint *)v5, v10, (int)v11);
  Function_2002d7c(0, v10, 0);
  Function_201d78c(*(uint *)(v4 + 412), 0);
  Function_20237bc_FreeMsg(v10, v12);
  Function_20237bc_FreeMsg((int)v11, v13);
  Function_200b190((ushort *)v16);
  return Function_200b3f0((uint *)v5, v14);
}

//----- (0225BC18) --------------------------------------------------------
uint __fastcall Function_225bc18(int a1)
{
  int v1;
  int v2;
  int *v3;
  ushort *v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  ushort *v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  ushort **v16;

  v1 = a1;
  Function_2021d6c(*(uint *)(a1 + 408), *(uint *)(a1 + 8));
  v2 = Function_202a5d0(*(int **)(v1 + 4));
  v3 = (int *)Function_200b358(0xDu);
  v4 = (ushort *)Function_2023790(200, 0xDu);
  v5 = Function_20958b8(*(uint *)(v1 + 8));
  Function_200bbdc((int)v3, 0, v5);
  v6 = Function_2095888(v2);
  Function_200bba8((int)v3, 1u, v6);
  Function_202a544(*(int **)(v1 + 4));
  Function_202a524(*(int **)(v1 + 4), v4);
  Function_200b48c(v3, 3u, (int)v4);
  v7 = AllocPkmnData(0xDu);
  Function_202a560(*(int **)(v1 + 4), v7);
  Function_2076b10_Dummy();
  Function_200b5cc(v3, 4u, v8);
  free((int)v7);
  v16 = (ushort **)LoadFromMsgNARC(0, 26, 385, 0xDu);
  if ( !v16 )
    ErrorHandler();
  v9 = Function_200b1ec_CallMsgDecrypt(v16, 0x2Bu);
  Function_200c388((uint *)v3, (int)v4, (int)v9);
  Function_20237bc_FreeMsg((int)v9, v10);
  Function_2002d7c(0, (int)v4, 0);
  Function_201d78c(*(uint *)(v1 + 412), 0);
  v11 = Function_200b1ec_CallMsgDecrypt(v16, 0x2Cu);
  Function_200c388((uint *)v3, (int)v4, (int)v11);
  Function_20237bc_FreeMsg((int)v11, v12);
  Function_2002d7c(0, (int)v4, 0);
  Function_201d78c(*(uint *)(v1 + 412), 0);
  Function_20237bc_FreeMsg((int)v4, v13);
  Function_200b190((ushort *)v16);
  return Function_200b3f0((uint *)v3, v14);
}

