//----- (0221F800) --------------------------------------------------------
int __fastcall Function_18_221f800(uint a1)
{
  uint v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  Function_2033478();
  OS_InitTick();
  Function_20c39bc();
  v2 = OS_DisableInterrupts();
  ((void (__fastcall *)(int))dword_21D788C[40])(2);
  v3 = malloc(v1, 0x40000);
  Function_222f20c();
  free(v3);
  OS_RestoreInterrupts(v2);
  result = 1;
  LOWORD(REG_IME) = 1;
  return result;
}

//----- (0221F84C) --------------------------------------------------------
uint __fastcall Function_221f84c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = OS_DisableInterrupts();
  *(uint *)(dword_2250D18[5] + 5348) = v1;
  return OS_RestoreInterrupts(v2);
}

//----- (0221F874) --------------------------------------------------------
int __fastcall Function_221f874(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = OS_DisableInterrupts();
  if ( dword_2250D18[5] && Function_2220bf4(v1) )
  {
    MI_CpuCopy8(dword_2250D18[5] + 4928 + 22 * (v1 - 1), dword_2250D18[5] + 6002, 0x16u, dword_2250D18[5]);
    OS_RestoreInterrupts(v2);
    result = dword_2250D18[5] + 6002;
  }
  else
  {
    OS_RestoreInterrupts(v2);
    result = 0;
  }
  return result;
}

//----- (0221F8F8) --------------------------------------------------------
BOOL __fastcall Function_221f8f8(int a1)
{
  int v1;

  v1 = a1;
  return dword_2250D18[5] && Function_2220bf4(a1) && *(uint *)(dword_2250D18[5] + 4 * (v1 - 1) + 5352) == 7;
}

//----- (0221F94C) --------------------------------------------------------
int __fastcall Function_221f94c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  short v7;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = OS_DisableInterrupts();
  v5 = v4;
  switch ( v2 )
  {
    case 0:
      v6 = 10;
      v7 = 4;
      goto LABEL_7;
    case 1:
      v6 = 10;
      v7 = 3;
      goto LABEL_7;
    case 2:
      v6 = 14;
      v7 = 2;
      goto LABEL_7;
    case 3:
      v6 = 7;
      v7 = 5;
LABEL_7:
      if ( dword_2250D18[5] && Function_2220bf4(v3) && v6 == *(uint *)(dword_2250D18[5] + 4 * (v3 - 1) + 5352) )
      {
        *(ushort *)(dword_2250D18[5] + 2 * (v3 - 1) + 5972) = v7;
        OS_RestoreInterrupts(v5);
        result = 1;
      }
      else
      {
        OS_RestoreInterrupts(v5);
        result = 0;
      }
      break;
    default:
      OS_RestoreInterrupts(v4);
      result = 0;
      break;
  }
  return result;
}

//----- (0221FA2C) --------------------------------------------------------
int __fastcall Function_221fa2c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( Function_2220bf4(a1) )
    *(uint *)(dword_2250D18[5] + 4 * (v3 - 1) + 5352) = v4;
  return Function_221fa78(v3, v4, v5);
}

//----- (0221FA78) --------------------------------------------------------
int Function_221fa78()
{
  int (*v0)(void);
  int result;

  v0 = *(int (**)(void))(dword_2250D18[5] + 5348);
  if ( v0 )
    result = v0();
  return result;
}

//----- (0221FAA0) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x221FE3C for case 0"

//----- (0221FDEC) --------------------------------------------------------
void Function_221fdec()
{
  JUMPOUT(&loc_221FE3C);
}

//----- (0221FDF0) --------------------------------------------------------
void Function_221fdf0()
{
  JUMPOUT(&loc_221FE2C);
}

//----- (0221FDF4) --------------------------------------------------------
void Function_221fdf4()
{
  JUMPOUT(&loc_221FE3C);
}

//----- (0221FDF8) --------------------------------------------------------
void Function_221fdf8()
{
  JUMPOUT(&loc_221FE3C);
}

//----- (0221FDFC) --------------------------------------------------------
void Function_221fdfc()
{
  JUMPOUT(&loc_221FE2C);
}

//----- (0221FE00) --------------------------------------------------------
void Function_221fe00()
{
  JUMPOUT(&loc_221FE2C);
}

//----- (0221FE04) --------------------------------------------------------
void Function_221fe04()
{
  JUMPOUT(&loc_221FE2C);
}

//----- (0221FE08) --------------------------------------------------------
void Function_221fe08()
{
  JUMPOUT(&loc_221FE3C);
}

//----- (0221FE0C) --------------------------------------------------------
void Function_221fe0c()
{
  JUMPOUT(&loc_221FE2C);
}

//----- (0221FE10) --------------------------------------------------------
void Function_221fe10()
{
  JUMPOUT(&loc_221FE2C);
}

//----- (0221FE14) --------------------------------------------------------
void Function_221fe14()
{
  JUMPOUT(&loc_221FE3C);
}

//----- (0221FE18) --------------------------------------------------------
void Function_221fe18()
{
  JUMPOUT(&loc_221FE3C);
}

//----- (0221FE1C) --------------------------------------------------------
void Function_221fe1c()
{
  JUMPOUT(&loc_221FE3C);
}

//----- (0221FE20) --------------------------------------------------------
void Function_221fe20()
{
  JUMPOUT(&loc_221FE3C);
}

//----- (0221FE24) --------------------------------------------------------
void Function_221fe24()
{
  JUMPOUT(&loc_221FE3C);
}

//----- (0221FE28) --------------------------------------------------------
void Function_221fe28()
{
  Function_2220c10(0, 8);
  JUMPOUT(&loc_221FEF0);
}

//----- (0221FE5C) --------------------------------------------------------
void Function_221fe5c()
{
  JUMPOUT(&loc_221FED4);
}

//----- (0221FE60) --------------------------------------------------------
void Function_221fe60()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FE64) --------------------------------------------------------
void Function_221fe64()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FE68) --------------------------------------------------------
void Function_221fe68()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FE6C) --------------------------------------------------------
void Function_221fe6c()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FE70) --------------------------------------------------------
void Function_221fe70()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FE74) --------------------------------------------------------
void Function_221fe74()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FE78) --------------------------------------------------------
void Function_221fe78()
{
  JUMPOUT(&loc_221FED4);
}

//----- (0221FE7C) --------------------------------------------------------
void Function_221fe7c()
{
  JUMPOUT(&loc_221FED4);
}

//----- (0221FE80) --------------------------------------------------------
void Function_221fe80()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FE84) --------------------------------------------------------
void Function_221fe84()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FE88) --------------------------------------------------------
void Function_221fe88()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FE8C) --------------------------------------------------------
void Function_221fe8c()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FE90) --------------------------------------------------------
void Function_221fe90()
{
  JUMPOUT(&loc_221FED4);
}

//----- (0221FE94) --------------------------------------------------------
void Function_221fe94()
{
  JUMPOUT(&loc_221FED4);
}

//----- (0221FE98) --------------------------------------------------------
void Function_221fe98()
{
  JUMPOUT(&loc_221FED4);
}

//----- (0221FE9C) --------------------------------------------------------
void Function_221fe9c()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FEA0) --------------------------------------------------------
void Function_221fea0()
{
  JUMPOUT(&loc_221FED4);
}

//----- (0221FEA4) --------------------------------------------------------
void Function_221fea4()
{
  JUMPOUT(&loc_221FED4);
}

//----- (0221FEA8) --------------------------------------------------------
void Function_221fea8()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FEAC) --------------------------------------------------------
void Function_221feac()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FEB0) --------------------------------------------------------
void Function_221feb0()
{
  JUMPOUT(&loc_221FED4);
}

//----- (0221FEB4) --------------------------------------------------------
void Function_221feb4()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FEB8) --------------------------------------------------------
void Function_221feb8()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FEBC) --------------------------------------------------------
void Function_221febc()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FEC0) --------------------------------------------------------
void Function_221fec0()
{
  JUMPOUT(&loc_221FED4);
}

//----- (0221FEC4) --------------------------------------------------------
void Function_221fec4()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FEC8) --------------------------------------------------------
void Function_221fec8()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FECC) --------------------------------------------------------
void Function_221fecc()
{
  JUMPOUT(&loc_221FEE4);
}

//----- (0221FED0) --------------------------------------------------------
void Function_221fed0()
{
  int v0;
  void (*v1)(void);
  int v2;

  Function_2220c10(0, 9);
  if ( v0 != 17 )
    JUMPOUT(__CS__, v2);
  v1 = *(void (**)(void))(dword_2250D18[5] + 5348);
  MIi_CpuClearFast(0, (uint *)dword_2250D18[5], 0x7D00u);
  dword_2250D18[5] = 0;
  if ( !v1 )
    JUMPOUT(__CS__, v2);
  v1();
  JUMPOUT(__CS__, v2);
}

//----- (0221FF40) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2220410 for case 0"

//----- (0221FF9C) --------------------------------------------------------
void Function_221ff9c()
{
  JUMPOUT(&loc_2220410);
}

//----- (0221FFA0) --------------------------------------------------------
void Function_221ffa0()
{
  JUMPOUT(&loc_2220410);
}

//----- (0221FFA4) --------------------------------------------------------
void Function_221ffa4()
{
  JUMPOUT(&loc_2220410);
}

//----- (0221FFA8) --------------------------------------------------------
void Function_221ffa8()
{
  JUMPOUT(&loc_2220410);
}

//----- (0221FFAC) --------------------------------------------------------
void Function_221ffac()
{
  JUMPOUT(&loc_2220410);
}

//----- (0221FFB0) --------------------------------------------------------
void Function_221ffb0()
{
  JUMPOUT(&loc_2220410);
}

//----- (0221FFB4) --------------------------------------------------------
void Function_221ffb4()
{
  JUMPOUT(&loc_2220410);
}

//----- (0221FFB8) --------------------------------------------------------
void Function_221ffb8()
{
  JUMPOUT(&loc_221FFCC);
}

//----- (0221FFBC) --------------------------------------------------------
void Function_221ffbc()
{
  JUMPOUT(&loc_2220264);
}

//----- (0221FFC0) --------------------------------------------------------
void Function_221ffc0()
{
  JUMPOUT(&loc_222030C);
}

//----- (0221FFC4) --------------------------------------------------------
void Function_221ffc4()
{
  JUMPOUT(&loc_222037C);
}

//----- (0221FFC8) --------------------------------------------------------
void Function_221ffc8()
{
  int v0;

  JUMPOUT(__CS__, v0);
}

//----- (02220424) --------------------------------------------------------
int __fastcall Function_2220424(int a1)
{
  uint v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  ushort *v7;
  int v8;
  bool v9;
  int result;

  v1 = 0;
  v2 = &dword_2250D18[5];
  v3 = a1;
  v4 = 0;
  do
  {
    v5 = dword_2250D18[5] + 1492 * v1;
    if ( *(uchar *)(v5 + 7506) )
      *(ushort *)(v5 + 7498) = 0;
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 < 0x10 );
  dword_224B260[0] = 0;
  v6 = 1;
  do
  {
    v7 = (ushort *)WM_ReadMPData(v3, v6, (int)v2, v4);
    v9 = v7 == 0;
    if ( v7 )
    {
      v8 = *v7;
      v9 = v8 == 0xFFFF;
    }
    if ( !v9 )
      v9 = v8 == 0;
    if ( !v9 )
      Function_221ff40();
    result = (v6 + 1) << 16;
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( v6 <= 0xF );
  return result;
}

//----- (022204D0) --------------------------------------------------------
int __fastcall Function_22204d0(char a1, int a2)
{
  int v2;
  char v4;

  v2 = a2;
  v4 = a1;
  Function_2224444(&v4, dword_2250D18[5]);
  return Function_222190c(6, v2, dword_2250D18[5]);
}

//----- (02220510) --------------------------------------------------------
int __fastcall Function_2220510(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  uint v8;
  bool v9;
  uint v11;
  uint v12;
  char v13;
  short v14;
  char v15[18];
  int v16;

  v16 = a4;
  v4 = 0;
  v5 = -1;
  MI_CpuFill8(v15, 0, 0x10u);
  v6 = 1;
  do
  {
    if ( *(uint *)(dword_2250D18[5] + 4 * v6 + 5348) == 5 )
      ++v15[*(char *)(dword_2250D18[5] + v6 + 5413)];
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( v6 <= 0xF );
  v7 = 255;
  LOBYTE(v8) = 0;
  while ( 1 )
  {
    v7 = (uchar)((v7 + 1 < 0) + __ROR4__(((v7 + 1) << 28) - ((uint)(v7 + 1) >> 31), 28));
    v9 = *(uchar *)(dword_2250D18[5] + 1492 * v7 + 7506) == 0;
    if ( *(uchar *)(dword_2250D18[5] + 1492 * v7 + 7506) )
      v9 = v15[v7] == 0;
    if ( !v9 )
      break;
    v8 = (uchar)(v8 + 1);
    if ( v8 >= 0x10 )
      goto LABEL_11;
  }
  v5 = (char)v7;
LABEL_11:
  if ( v5 == -1 )
    return 21;
  v11 = 1;
  byte_2249760 = v5;
  do
  {
    if ( *(uint *)(dword_2250D18[5] + 4 * v11 + 5348) == 5 && v5 == *(char *)(dword_2250D18[5] + v11 + 5413) )
      v4 = (v4 | (1 << v11)) & 0xFFFF;
    v11 = (v11 + 1) & 0xFFFF;
  }
  while ( v11 <= 0xF );
  v13 = 3;
  v14 = v5;
  v12 = Function_2224444(&v13, dword_2250D18[5]);
  if ( v12 )
    MI_CpuCopy8(dword_2250D18[5] + 6024 + 1492 * v5, v12, 0xE4u, 0x5D4u);
  return Function_222190c(234, v4, dword_2250D18[5]);
}

//----- (022206A8) --------------------------------------------------------
int __fastcall Function_22206a8(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint *v6;
  int result;
  int v8[18];
  int v9;

  v9 = a4;
  v4 = *(uint *)(a1 + 20);
  v5 = *(int **)(a1 + 16);
  v6 = FS_FindArchive(v4 + 16, *(uint *)(v4 + 20));
  if ( !v6 )
    v6 = *(uint **)(v4 + 24);
  FS_InitFile(v8);
  if ( FS_OpenFileDirect(v8, (int)v6, *v5, *v5 + v5[1], -1) )
  {
    if ( v5[1] == FS_ReadFile(v8, v5[2], v5[1]) )
      v5[3] = 2;
    FS_CloseFile(v8);
  }
  result = v5[3];
  if ( result != 2 )
  {
    *v5 = 0;
    result = 2;
    v5[3] = 2;
  }
  return result;
}

//----- (0222074C) --------------------------------------------------------
int __fastcall Function_222074c(int a1, int a2, int a3, int a4)
{
  uint v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  uint *v14;
  int v15;
  int v16;
  char v17;
  short v18;
  short v19;
  char v20;
  int v21;
  int v22;
  uchar v23;
  int v24;

  v24 = a4;
  if ( !*(uchar *)(dword_2250D18[5] + 5412) )
    return 21;
  v5 = 0;
  do
  {
    *(uchar *)(dword_2250D18[5] + 5413) = (*(uchar *)(dword_2250D18[5] + 5413) + 1 < 0)
                                        + __ROR4__(
                                            ((*(uchar *)(dword_2250D18[5] + 5413) + 1) << 28)
                                          - (((uint)*(uchar *)(dword_2250D18[5] + 5413) + 1) >> 31),
                                            28);
    v6 = dword_2250D18[5] + 1492 * *(uchar *)(dword_2250D18[5] + 5413);
    v7 = *(uchar *)(v6 + 7506) == 0;
    if ( *(uchar *)(v6 + 7506) )
      v7 = *(ushort *)(v6 + 7500) == 0;
    if ( !v7 )
      break;
    v5 = (uchar)(v5 + 1);
  }
  while ( v5 < 0x10 );
  if ( v5 == 16 )
    return 21;
  Function_2220b68();
  if ( !Function_22216e0(
          &v20,
          dword_2250D18[5] + 7468 + 1492 * *(uchar *)(dword_2250D18[5] + 5413),
          *(ushort *)(dword_2250D18[5] + 1492 * *(uchar *)(dword_2250D18[5] + 5413) + 7496),
          dword_2250D18[5] + 6024 + 1492 * *(uchar *)(dword_2250D18[5] + 5413)) )
    return 21;
  v17 = 4;
  v18 = *(uchar *)(dword_2250D18[5] + 5413);
  v19 = *(ushort *)(dword_2250D18[5] + 1492 * *(uchar *)(dword_2250D18[5] + 5413) + 7496);
  v8 = Function_2224444(&v17, dword_2250D18[5]);
  v9 = dword_2250D18[5] + 1492 * *(uchar *)(dword_2250D18[5] + 5413);
  v10 = v9 + 4096;
  v11 = v22 - *(uint *)(v9 + 4 * v23 + 7468) + *(uint *)(*(uint *)(v9 + 7512) + 4 * v23);
  v12 = *(uint **)(v10 + 3412);
  if ( Function_2223f8c(v12, v11, v8, v21) )
    return Function_222190c(
             v21 + 6,
             *(ushort *)(dword_2250D18[5] + 1492 * *(uchar *)(dword_2250D18[5] + 5413) + 7500),
             dword_2250D18[5]);
  if ( !Function_22241ec(dword_2250D18[5] + 31968) )
  {
    if ( *v12 )
    {
      --*v12;
    }
    else
    {
      v13 = (int)(v12 + 12);
      v14 = 0;
      v15 = 0;
      v16 = (int)(v12 + 12);
      do
      {
        if ( *(uint *)(v13 + 16 * v15 + 12) == 2 && (!v14 || *v14 > *(uint *)(v13 + 16 * v15)) )
          v14 = (uint *)v16;
        ++v15;
        v16 += 16;
      }
      while ( v15 < 4 );
      if ( !v14 )
        OS_Panic();
      *v12 = 2;
      v14[3] = 1;
      *v14 = v11 & 0xFFFFFFE0;
      *(uint *)(dword_2250D18[5] + 31984) = v14;
      *(uint *)(dword_2250D18[5] + 31988) = v12;
      Function_2224204(dword_2250D18[5] + 31968, Function_22206a8, 0, 4);
    }
  }
  return 21;
}

//----- (022209E8) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2220AB4 for case 0"

//----- (02220A38) --------------------------------------------------------
void Function_2220a38()
{
  JUMPOUT(&loc_2220AB4);
}

//----- (02220A3C) --------------------------------------------------------
void Function_2220a3c()
{
  JUMPOUT(&loc_2220AB4);
}

//----- (02220A40) --------------------------------------------------------
void Function_2220a40()
{
  JUMPOUT(&loc_2220A68);
}

//----- (02220A44) --------------------------------------------------------
void Function_2220a44()
{
  JUMPOUT(&loc_2220AB4);
}

//----- (02220A48) --------------------------------------------------------
void Function_2220a48()
{
  JUMPOUT(&loc_2220A88);
}

//----- (02220A4C) --------------------------------------------------------
void Function_2220a4c()
{
  JUMPOUT(&loc_2220A78);
}

//----- (02220A50) --------------------------------------------------------
void Function_2220a50()
{
  JUMPOUT(&loc_2220AB4);
}

//----- (02220A54) --------------------------------------------------------
void Function_2220a54()
{
  JUMPOUT(&loc_2220AB4);
}

//----- (02220A58) --------------------------------------------------------
void Function_2220a58()
{
  JUMPOUT(&loc_2220A98);
}

//----- (02220A5C) --------------------------------------------------------
void Function_2220a5c()
{
  JUMPOUT(&loc_2220AB4);
}

//----- (02220A60) --------------------------------------------------------
void Function_2220a60()
{
  JUMPOUT(&loc_2220AB4);
}

//----- (02220A64) --------------------------------------------------------
void __fastcall Function_2220a64(int a1, int a2, int a3, int a4)
{
  short v4;
  uint v5;
  int v6;
  ushort v7;
  ushort v8;
  ushort v9;
  ushort v10;
  short v11;
  ushort v12;
  int v13;

  v12 = v11 | (v4 << a4);
  v5 = (a4 + 1) & 0xFFFF;
  if ( v5 <= 0xF )
    JUMPOUT(&loc_2220A20);
  if ( v10 )
  {
    v6 = Function_22204d0(5, v10);
  }
  else if ( v7 )
  {
    v6 = Function_22204d0(1, v7);
  }
  else if ( v12 )
  {
    v6 = Function_22204d0(6, v12);
  }
  else if ( v9 )
  {
    v6 = Function_22204d0(2, v9);
  }
  else if ( v8 )
  {
    v6 = Function_2220510(v8, v9, a3, v5);
  }
  else
  {
    v6 = Function_222074c(v8, v9, a3, v5);
  }
  if ( v6 != 21 )
    JUMPOUT(__CS__, v13);
  Function_22204d0(0, 0xFFFF);
  JUMPOUT(__CS__, v13);
}

//----- (02220B68) --------------------------------------------------------
int __fastcall Function_2220b68(int result)
{
  int v1;
  bool v2;
  int v3;
  uint v4;

  if ( dword_224B260[0] & (1 << result) )
  {
    v1 = dword_2250D18[5] + 1492 * result;
    result = *(uchar *)(v1 + 7506);
    v2 = result == 0;
    if ( *(uchar *)(v1 + 7506) )
    {
      result = v1 + 7424;
      v2 = *(ushort *)(v1 + 7500) == 0;
    }
    if ( !v2 )
    {
      v3 = *(ushort *)(result + 72);
      v4 = *(ushort *)(result + 74);
      if ( v4 > v3 || v3 > (int)(v4 + 2) )
      {
        result = v1 + 7424;
        *(ushort *)(v1 + 7496) = v4;
      }
      else
      {
        *(ushort *)(result + 72) = v3 + 1;
      }
    }
  }
  return result;
}

//----- (02220BE4) --------------------------------------------------------
uint __fastcall Function_2220be4(uint a1, uint a2)
{
  if ( a2 <= a1 )
    a2 = a1;
  return a2;
}

//----- (02220BF4) --------------------------------------------------------
BOOL __fastcall Function_2220bf4(uint a1)
{
  return a1 >= 1 && a1 <= 0xF;
}

//----- (02220C10) --------------------------------------------------------
int Function_2220c10()
{
  return Function_221fa78();
}

//----- (02220C28) --------------------------------------------------------
uint __fastcall Function_2220c28(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int *v5;
  uint v6;
  int v7;
  char v9;
  int v10;

  v10 = a4;
  v4 = 0;
  v5 = a1;
  v6 = 0;
  if ( a1 )
  {
    v7 = a1[11] - a1[9];
    if ( (uint)FS_ReadFile(a1, (int)&v9, 96) >= 0x60 )
      v4 = (int *)&v9;
    FS_SeekFile(v5, v7, 0);
  }
  else
  {
    v4 = dword_27FFE00;
  }
  if ( v4 )
  {
    v6 = v4[11] + 616 + v4[15];
    if ( v6 < 0x10000 )
      v6 = 0x10000;
  }
  return v6;
}

//----- (02220CA8) --------------------------------------------------------
int __fastcall Function_2220ca8(int *a1, int a2, uint a3)
{
  char *v3;
  uint *v4;
  uint *v5;
  uint *v6;
  uint *v7;
  uint v8;
  int v9;
  int v10;
  uint *v11;
  uint v12;
  uint v13;
  uint *v14;
  uint v15;
  uint v16;
  int v17;
  int i;
  uint v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int *v24;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34[9];
  int v35;
  int v36;

  v26 = a3;
  v3 = (char *)a1;
  v4 = (uint *)a2;
  v29 = 0;
  if ( a3 >= 0x164 )
  {
    v28 = 0;
    v5 = 0;
    v6 = 0;
    v7 = (uint *)(a2 + 352);
    v8 = a3 - 352;
    if ( a1 )
    {
      v27 = a1[11] - a1[9];
      v9 = FS_ReadFile(a1, a2, 352);
      v10 = v4[32];
      if ( v9 < 352 )
        v8 = 0;
      if ( !v10 )
        v10 = 0x1000000;
    }
    else
    {
      v10 = dword_27FFE64[7];
      if ( !dword_27FFE64[7] )
        v10 = 0x1000000;
      v28 = 1;
      FS_InitFile(v34);
      v11 = FS_FindArchive((int)&dword_2249768, 3);
      FS_OpenFileDirect(v34, (int)v11, 0, v10 + 136, -1);
      v27 = v36 - v35;
      v3 = (char *)v34;
      MI_CpuCopy8((int)dword_27FFE00, (uint)v4, 0x160u, v12);
      v4[24] |= 0x406000u;
    }
    if ( v8 >= 0x88 )
    {
      FS_SeekFile(v3, v27 + v10, 0);
      FS_ReadFile((int *)v3, (int)(v4 + 88), 136);
      v7 = v4 + 122;
      v13 = v8 - 136;
    }
    else
    {
      v13 = 0;
    }
    if ( v13 < 0x70 )
    {
      v15 = 0;
    }
    else
    {
      v5 = v7;
      Function_2223f10(v7);
      v14 = v7;
      v7 += 28;
      v15 = v13 - 112;
      Function_2223f24(v14, 0, 352, v4, 3);
      v17 = *((uint *)v3 + 2);
      for ( i = 0; i < 3 && *(uchar *)(v17 + i); ++i )
        ;
      MI_CpuCopy8(*((uint *)v3 + 2), (uint)(v5 + 4), i, v16);
      v5[5] = i;
      v5[6] = v17;
    }
    if ( v15 >= 0x10 )
    {
      *v7 = 0;
      v7[1] = v4[8] + v27 + *((uint *)v3 + 9);
      v6 = v7;
      v7[2] = v4[12] + v27 + *((uint *)v3 + 9);
      v7 += 4;
      v19 = v15 - 16;
    }
    else
    {
      v19 = 0;
    }
    if ( v19 < v4[11] + v4[15] )
    {
      if ( v19 >= 0xCC00 )
      {
        v22 = *((uint *)v3 + 9);
        v23 = v6[1];
        FS_SeekFile(v3, v23 - v22, 0);
        FS_ReadFile((int *)v3, (int)v7, 17408);
        Function_2223f24(v5, v23, 17408, v7, 3);
        FS_SeekFile(v3, v23 + 17408 - v22, 0);
        FS_ReadFile((int *)v3, (int)(v7 + 4352), 17408);
        Function_2223f24(v5, v23 + 17408, 17408, v7 + 4352, 2);
        FS_SeekFile(v3, v23 + 34816 - v22, 0);
        FS_ReadFile((int *)v3, (int)(v7 + 8704), 17408);
        Function_2223f24(v5, v23 + 34816, 17408, v7 + 8704, 2);
        v29 = 1;
      }
    }
    else
    {
      v20 = *((uint *)v3 + 9);
      FS_SeekFile(v3, v6[1] - v20, 0);
      FS_ReadFile((int *)v3, (int)v7, v4[11]);
      Function_2223f24(v5, v6[1], v4[11], v7, 3);
      v21 = v4[11];
      FS_SeekFile(v3, v6[2] - v20, 0);
      FS_ReadFile((int *)v3, (int)v7 + v21, v4[15]);
      Function_2223f24(v5, v6[2], v4[15], (char *)v7 + v21, 3);
      v29 = 1;
    }
    FS_SeekFile(v3, v27, 0);
    if ( v28 )
    {
      FS_CloseFile(v34);
      if ( v29 )
      {
        v30 = v4[8];
        v24 = &dword_2246440;
        v31 = v4[10] - v4[8];
        v32 = v5[18] - v4[8];
        v33 = v26;
        Function_2221120(&v30, 0x4000, 0x8000, 1);
        do
        {
          Function_2221120(&v30, *v24, *v24 + v24[1], 0);
          v24 += 2;
        }
        while ( v24[1] );
        *(uint *)(v5[18] + 33557164 - v4[10]) = -516948194;
      }
    }
    if ( v29 )
      DC_FlushRange((int)v4, v26);
  }
  return v29;
}

//----- (02221120) --------------------------------------------------------
uint *__fastcall Function_2221120(uint *result, uint a2, uint a3, int a4)
{
  uint v4;
  uint v5;

  v4 = a2;
  v5 = *result;
  if ( a2 < 0x4000 )
    v4 = 0x4000;
  if ( a3 > 0x8000 )
    a3 = 0x8000;
  if ( v4 < v5 )
    v4 = *result;
  if ( a3 > v5 + result[3] )
    a3 = v5 + result[3];
  if ( v4 < a3 )
  {
    if ( a4 )
      result = (uint *)MI_CpuFill8((ushort *)(result[2] + v4), 0, a3 - v4);
    else
      result = (uint *)MI_CpuCopy8(result[1] + v4, result[2] + v4, a3 - v4, result[1]);
  }
  return result;
}

//----- (02221198) --------------------------------------------------------
int __fastcall Function_2221198(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  uint v7;
  int v8;
  uint v9;

  v2 = a1;
  v3 = a2;
  v4 = 255;
  v5 = OS_DisableInterrupts();
  if ( Function_2223eb8() )
  {
    if ( *(uchar *)(dword_2250D18[5] + 5412) + 1 <= 16 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( *(uint *)(dword_2250D18[5] + 1492 * v7 + 7488) == v2 )
        {
          OS_RestoreInterrupts(v5);
          return 0;
        }
        if ( !*(uchar *)(dword_2250D18[5] + 1492 * v7 + 7506) )
          break;
        v7 = (v7 + 1) & 0xFF;
        if ( v7 >= 0x10 )
          goto LABEL_11;
      }
      v4 = v7;
LABEL_11:
      if ( v7 == 16 )
      {
        OS_RestoreInterrupts(v5);
        result = 0;
      }
      else
      {
        v8 = 1492 * v4;
        *(uint *)(dword_2250D18[5] + 1492 * v4 + 7488) = v2;
        Function_2221428(dword_2250D18[5] + 6024 + 1492 * v4, v3);
        MI_CpuCopy8(v2 + 28, dword_2250D18[5] + 6024 + 1492 * v4 + 196, 0x20u, v9);
        if ( Function_2221614(dword_2250D18[5] + 7468 + 1492 * v4, dword_2250D18[5] + 6024 + 1492 * v4) )
        {
          Function_2221990(dword_2250D18[5] + 6252 + v8, v2, dword_2250D18[5] + 4864);
          *(uchar *)(dword_2250D18[5] + v8 + 7457) = v4;
          Function_2221bb8(dword_2250D18[5] + 6252 + v8);
          *(uchar *)(dword_2250D18[5] + v8 + 7455) = dword_224B260[1];
          *(ushort *)(dword_2250D18[5] + v8 + 7502) = 1;
          *(uint *)(dword_2250D18[5] + v8 + 7492) = v3;
          *(uint *)(dword_2250D18[5] + v8 + 7508) = v3 + 488;
          *(uint *)(dword_2250D18[5] + v8 + 7512) = v3 + 600;
          ++LOBYTE(dword_224B260[1]);
          if ( *(uint *)(*(uint *)(dword_2250D18[5] + v8 + 7508) + 108) )
          {
            if ( !Function_22241bc() )
            {
              Function_22241d8(dword_2250D18[5] + 31968);
              Function_222413c(dword_2250D18[5] + 29920, 2048);
            }
          }
          *(uchar *)(dword_2250D18[5] + v8 + 7506) = 1;
          ++*(uchar *)(dword_2250D18[5] + 5412);
          OS_RestoreInterrupts(v5);
          result = 1;
        }
        else
        {
          OS_RestoreInterrupts(v5);
          result = 0;
        }
      }
    }
    else
    {
      OS_RestoreInterrupts(v5);
      result = 0;
    }
  }
  else
  {
    OS_RestoreInterrupts(v5);
    result = 0;
  }
  return result;
}

//----- (02221428) --------------------------------------------------------
int __fastcall Function_2221428(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int *v4;
  int v5;
  int v6;
  uint v7;
  int v9;

  v2 = a2;
  v3 = a1;
  v9 = 36438016;
  v4 = dword_2246434;
  *a1 = *(uint *)(a2 + 36);
  v5 = (int)(a1 + 3);
  a1[1] = *(uint *)(a2 + 52);
  v6 = 0;
  do
  {
    Function_222149c(v2, v4, v5, &v9, v9);
    ++v6;
    v5 += 16;
    ++v4;
  }
  while ( v6 < 3 );
  return MI_CpuCopy8(v2 + 352, (uint)(v3 + 15), 0x88u, v7);
}

//----- (0222149C) --------------------------------------------------------
uint *__fastcall Function_222149c(uint *result, int *a2, uint *a3, uint *a4)
{
  int v4;
  uint *v5;
  uint *v6;
  uint *v7;
  uint v8;
  int v9;
  int v10;
  uint v11;
  uint v12;
  int v13;
  int v14;
  uint v15;

  v4 = *a2;
  v5 = result;
  v6 = a3;
  v7 = a4;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v11 = result[14];
      v12 = result[15];
      v13 = 0;
      v14 = 0;
      v15 = v11 + v12;
      if ( v11 < 0x2000000 || v11 >= (uint)&dword_23E0000[31232] )
      {
        if ( v11 < (uint)&unk_37F8000 || result[14] >= (uint)&unk_380F000 )
        {
          v13 = 1;
        }
        else if ( v15 > (uint)&unk_380F000 )
        {
          v13 = 1;
        }
        else
        {
          v14 = 1;
        }
      }
      else if ( v15 > 0x2300000 )
      {
        if ( v15 >= (uint)&dword_23E0000[31232] || v12 > 0x40000 )
          v13 = 1;
        else
          v14 = 1;
      }
      if ( v13 == 1 )
        OS_Panic();
      v6[2] = result[15];
      v6[1] = result[14];
      if ( v14 )
      {
        *v6 = *v7;
        *v7 += v6[2];
      }
      else
      {
        *v6 = v6[1];
      }
      result = (uint *)(v6[3] & 0xFFFFFFFE | 1);
      v6[3] = result;
    }
    else if ( v4 == 2 )
    {
      a3[1] = dword_27FFE00;
      a3[2] = 352;
      *a3 = dword_27FFE00;
      result = (uint *)(a3[3] & 0xFFFFFFFE);
      a3[3] = result;
    }
  }
  else
  {
    v8 = result[10];
    if ( v8 < 0x2000000 || v8 >= 0x22C0000 || (v9 = v5[11], v8 + v9 > 0x22C0000) )
      OS_Panic();
    a3[2] = v9;
    v10 = v5[10];
    a3[1] = v10;
    *a3 = v10;
    result = (uint *)(a3[3] & 0xFFFFFFFE);
    a3[3] = result;
  }
  return result;
}

//----- (02221614) --------------------------------------------------------
int __fastcall Function_2221614(int a1, int a2)
{
  int v2;
  ushort *v3;
  int result;
  uint v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  ushort v11;
  int v12;
  int v13;
  bool v14;

  v2 = a1;
  v3 = (ushort *)(a1 + 12);
  result = 0;
  if ( a2 )
  {
    v5 = 0;
    do
    {
      *(uint *)(v2 + 4 * v5) = result;
      v6 = *(uint *)(a2 + 16 * v5 + 20);
      v5 = (uchar)(v5 + 1);
      result += v6;
    }
    while ( v5 < 3 );
    v7 = 0;
    *v3 = 0;
    v8 = a2 + 12;
    do
    {
      v9 = v8 + 16 * v7;
      v10 = *(uint *)(v9 + 8);
      v11 = u32_div_f(v10 + *(uint *)(dword_2250D18[5] + 4888) - 1, *(uint *)(dword_2250D18[5] + 4888));
      v12 = *(uint *)(v9 + 4);
      v13 = ((ushort)v3[v7] + v11) & 0xFFFF;
      if ( !Function_2221840(v7, v12, v10) )
        return 0;
      v14 = v7 >= 2;
      if ( v7 < 2 )
        v3[v7 + 1] = v13;
      v7 = (v7 + 1) & 0xFF;
      if ( v14 )
        *(ushort *)(v2 + 18) = v13;
    }
    while ( v7 < 3 );
    result = 1;
  }
  return result;
}

//----- (022216E0) --------------------------------------------------------
int __fastcall Function_22216e0(int a1, int a2, uint a3, int a4)
{
  int v5;
  int v6;
  uint *v7;
  uint v8;
  uint v9;

  if ( a3 >= *(ushort *)(a2 + 18) )
    return 0;
  v5 = 2;
  do
  {
    if ( a3 >= *(ushort *)(a2 + 2 * v5 + 12) )
      break;
    v5 = (char)(v5 - 1);
  }
  while ( v5 >= 0 );
  if ( v5 < 0 )
    return 0;
  v6 = (a3 - *(ushort *)(a2 + 2 * v5 + 12)) * *(uint *)(dword_2250D18[5] + 4888);
  v7 = (uint *)(a4 + 12 + 16 * v5);
  v8 = v7[2] - v6;
  *(uint *)(a1 + 4) = v8;
  v9 = *(uint *)(dword_2250D18[5] + 4888);
  if ( v8 > v9 )
    *(uint *)(a1 + 4) = v9;
  *(uint *)(a1 + 8) = v6 + *(uint *)(a2 + 4 * v5);
  *(uint *)a1 = v6 + *v7;
  *(uchar *)(a1 + 12) = v5;
  return 1;
}

//----- (02221794) --------------------------------------------------------
int __fastcall Function_2221794(int a1, uint a2, int a3)
{
  int v3;

  v3 = dword_2246434[a1];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( a2 >= 0x22C0000 && a2 + a3 <= 0x2300000 )
        return 1;
      if ( a2 >= 0x2000000 && a2 + a3 <= 0x2300000 )
        return 1;
    }
    else
    {
      if ( v3 != 2 )
        return 0;
      if ( a2 >= (uint)dword_27FFE00 && a2 + a3 <= (uint)&dword_27FFE64[63] )
        return 1;
    }
  }
  else if ( a2 >= 0x2000000 && a2 + a3 <= 0x22C0000 )
  {
    return 1;
  }
  return 0;
}

//----- (02221840) --------------------------------------------------------
int __fastcall Function_2221840(int a1, uint a2, uint a3)
{
  int v3;
  int result;
  bool v5;
  uint v6;

  v3 = dword_2246434[a1];
  switch ( v3 )
  {
    case 0:
      return Function_2221794(a1, a2, a3);
    case 1:
      if ( a2 < 0x2000000 || a2 >= (uint)&dword_23E0000[31232] )
      {
        if ( a2 < (uint)&unk_37F8000 || a2 >= (uint)&unk_380F000 )
          result = 0;
        else
          result = a2 + a3 <= (uint)&unk_380F000;
      }
      else
      {
        v5 = a2 >= 0x2300000;
        v6 = a2 + a3;
        if ( v5 || v6 <= 0x2300000 )
        {
          if ( v6 > 0x2300000 )
            result = v6 < (uint)&dword_23E0000[31232] && a3 <= 0x40000;
          else
            result = 1;
        }
        else
        {
          result = 0;
        }
      }
      break;
    case 2:
      return Function_2221794(a1, a2, a3);
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0222190C) --------------------------------------------------------
int __fastcall Function_222190c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  DC_FlushRange(a3, (a1 + 31) & 0xFFFFFFE0);
  DC_WaitWriteBufferEmpty();
  return Function_2223d50(v4, v3, v5);
}

//----- (02221944) --------------------------------------------------------
uint __fastcall Function_2221944(ushort *a1, int a2)
{
  int v2;
  uint i;
  int v4;

  v2 = a2 >> 1;
  for ( i = 0; v2 > 0; i += v4 )
  {
    v4 = *a1;
    ++a1;
    --v2;
  }
  return (((ushort)i + (i >> 16) + (((ushort)i + (i >> 16)) >> 16)) ^ 0xFFFF) & 0xFFFF;
}

//----- (02221990) --------------------------------------------------------
int __fastcall Function_2221990(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  int v9;
  short v10;
  short v11;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  MIi_CpuClear16(0, a1, 1216);
  *(uchar *)(v4 + 1202) = 0;
  v7 = Function_2221a80(*(uint *)(v5 + 12), v4, 1);
  if ( !v7 )
    v3 = 1;
  if ( v7 )
    v3 = 0;
  if ( v3 | (Function_2221a80(*(uint *)(v5 + 16), v4, 0) == 0) )
  {
    *(uchar *)(v4 + 1202) = 1;
    MIi_CpuClearFast(0, (uint *)v4, 0x220u);
  }
  *(uint *)(v4 + 1208) = *(uint *)(v5 + 20);
  if ( v6 )
    MIi_CpuCopy16(v6, v4 + 544, 22, v8);
  *(uchar *)(v4 + 566) = *(uchar *)(v5 + 24);
  v9 = Function_2221b90(*(uint *)(v5 + 4));
  MIi_CpuCopy16(*(uint *)(v5 + 4), v4 + 568, 2 * v9 & 0xFFFF, v10);
  MIi_CpuCopy16(*(uint *)(v5 + 8), v4 + 664, 192, v11);
  *(uchar *)(v4 + 856) = 1;
  *(ushort *)(v4 + 858) = 1;
  result = v4 + 1024;
  *(ushort *)(v4 + 1200) = 1;
  return result;
}

//----- (02221A80) --------------------------------------------------------
int __fastcall Function_2221a80(uchar *a1, int a2, int a3)
{
  int v3;
  uchar *v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9[9];
  int v10;
  int v11;

  if ( a3 )
    v3 = 512;
  else
    v3 = 32;
  v4 = a1;
  v5 = a2;
  if ( a3 )
    v5 = a2 + 32;
  if ( !a1 )
    return 0;
  FS_InitFile(v9);
  if ( !FS_OpenFile(v9, v4, v7, v8) )
    return 0;
  if ( v3 == v11 - v10 )
  {
    FS_ReadFile(v9, v5, v3);
    FS_CloseFile(v9);
    result = 1;
  }
  else
  {
    FS_CloseFile(v9);
    result = 0;
  }
  return result;
}

//----- (02221B20) --------------------------------------------------------
int __fastcall Function_2221b20(int a1, int a2, int a3, short a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  char v10;
  char v11;
  int v12;
  bool v13;
  int v14;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a1 + 94;
  v7 = a2;
  v8 = v6 + 768;
  v9 = a4;
  v10 = 1;
  v11 = MIi_CpuCopy16(v7, v8, 330, a4);
  v12 = 0;
  do
  {
    v13 = (v5 & (2 << v12)) == 0;
    if ( v5 & (2 << v12) )
      v11 = v10 + 1;
    ++v12;
    if ( !v13 )
      v10 = v11;
  }
  while ( v12 < 15 );
  *(uchar *)(v4 + 856) = v10;
  v14 = v4 + 768;
  *(ushort *)(v14 + 90) = v5 | 1;
  *(ushort *)(v14 + 92) = v9;
  result = *(uchar *)(v4 + 1204) + 1;
  *(uchar *)(v4 + 1204) = result;
  return result;
}

//----- (02221B90) --------------------------------------------------------
int __fastcall Function_2221b90(ushort *a1)
{
  ushort *v1;
  int v2;
  int v3;
  int v4;

  v2 = *a1;
  v1 = a1 + 1;
  v3 = 0;
  if ( v2 )
  {
    do
    {
      v4 = *v1;
      ++v1;
      ++v3;
    }
    while ( v4 );
  }
  return v3;
}

//----- (02221BB8) --------------------------------------------------------
int __fastcall Function_2221bb8(int result)
{
  int v1;
  int i;

  v1 = dword_224B260[14];
  if ( dword_224B260[14] )
  {
    for ( i = *(uint *)(dword_224B260[14] + 1212); i; i = *(uint *)(i + 1212) )
      v1 = i;
    *(uint *)(v1 + 1212) = result;
  }
  else
  {
    dword_224B260[14] = result;
  }
  *(uint *)(result + 1212) = 0;
  return result;
}

//----- (02221BFC) --------------------------------------------------------
int Function_2221bfc()
{
  dword_224B260[14] = 0;
  dword_224B260[15] = 0;
  LOBYTE(dword_224B260[17]) = 1;
  dword_224B260[13] = 0;
  return Function_2221c28();
}

//----- (02221C28) --------------------------------------------------------
int *Function_2221c28()
{
  int *result;

  result = &dword_224B260[8];
  *(ushort *)((char *)&dword_224B260[17] + 1) = 0;
  HIBYTE(dword_224B260[17]) = 0;
  LOWORD(dword_224B260[18]) = 0;
  return result;
}

//----- (02221C4C) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2221C8C for case 0"

//----- (02221C70) --------------------------------------------------------
void Function_2221c70()
{
  JUMPOUT(&loc_2221C8C);
}

//----- (02221C74) --------------------------------------------------------
void Function_2221c74()
{
  JUMPOUT(&loc_2221C8C);
}

//----- (02221C78) --------------------------------------------------------
void Function_2221c78()
{
  JUMPOUT(&loc_2221C9C);
}

//----- (02221C7C) --------------------------------------------------------
void Function_2221c7c()
{
  JUMPOUT(&loc_2221CA4);
}

//----- (02221C80) --------------------------------------------------------
void Function_2221c80()
{
  JUMPOUT(&loc_2221CB8);
}

//----- (02221C84) --------------------------------------------------------
void Function_2221c84()
{
  JUMPOUT(&loc_2221CC0);
}

//----- (02221C88) --------------------------------------------------------
void Function_2221c88()
{
  JUMPOUT(&loc_2221C60);
}

//----- (02221CD8) --------------------------------------------------------
int Function_2221cd8()
{
  int v0;
  int v1;
  ushort v2;
  int result;
  bool v4;

  v0 = dword_224B260[14];
  if ( dword_224B260[14] )
  {
    v4 = dword_224B260[15] == 0;
    if ( dword_224B260[15] )
    {
      v0 = *(uint *)(dword_224B260[15] + 1212);
      v4 = v0 == 0;
    }
    if ( v4 )
      v0 = dword_224B260[14];
    dword_224B260[15] = v0;
    Function_2221c28();
    result = 1;
    BYTE2(dword_224B260[17]) = *(uchar *)(dword_224B260[15] + 1204);
    LOBYTE(dword_224B260[17]) = 2;
  }
  else
  {
    v1 = Function_2223e30();
    v2 = Function_2223e44();
    WM_SetGameInfo(0, (int)&dword_224B260[24], 0x70u, v1, v2, 8u);
    result = 0;
  }
  return result;
}

//----- (02221D78) --------------------------------------------------------
int *Function_2221d78()
{
  int *result;

  result = &dword_224B260[8];
  if ( LOBYTE(dword_224B260[17]) == 2 )
  {
    if ( *(uchar *)(dword_224B260[15] + 1202) )
    {
      LOBYTE(dword_224B260[18]) = 4;
      dword_224B260[16] = dword_224B260[15] + 544;
    }
    else
    {
      LOBYTE(dword_224B260[18]) = 9;
      dword_224B260[16] = dword_224B260[15];
    }
    result = &dword_224B260[8];
    LOBYTE(dword_224B260[17]) = 3;
  }
  return result;
}

//----- (02221DCC) --------------------------------------------------------
int __fastcall Function_2221dcc(int a1, ushort a2, char a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  ushort v7;
  char v8;

  v3 = &dword_224B260[8];
  v4 = a1;
  v5 = dword_224B260[16];
  v6 = dword_224B260[15] + 856;
  if ( dword_224B260[16] + 98 <= (uint)(dword_224B260[15] + 856) )
    v5 = 98;
  v7 = a2;
  v8 = a3;
  if ( dword_224B260[16] + 98 > (uint)(dword_224B260[15] + 856) )
  {
    LOBYTE(dword_224B260[27]) = v6 - v5;
    MIi_CpuClear16(0, ((v6 - v5) & 0xFF) + 35959502, 98 - ((v6 - v5) & 0xFF));
  }
  else
  {
    LOBYTE(dword_224B260[27]) = v5;
  }
  MIi_CpuCopy16(dword_224B260[16], 35959502, LOBYTE(dword_224B260[27]), (short)v3);
  HIWORD(dword_224B260[26]) = *(ushort *)((char *)&dword_224B260[17] + 3);
  LOBYTE(dword_224B260[25]) = dword_224B260[25] & 0xFC | *(uchar *)(dword_224B260[15] + 1202) & 3;
  BYTE1(dword_224B260[25]) = *(uchar *)(dword_224B260[15] + 1203);
  BYTE2(dword_224B260[25]) = BYTE2(dword_224B260[17]);
  dword_224B260[24] = *(uint *)(dword_224B260[15] + 1208);
  LOBYTE(dword_224B260[25]) = dword_224B260[25] & 3 | 4 * *(uchar *)(dword_224B260[15] + 1205);
  HIBYTE(dword_224B260[25]) = ++BYTE1(dword_224B260[18]);
  LOWORD(dword_224B260[26]) = 0;
  LOWORD(dword_224B260[26]) = Function_2221944((ushort *)&dword_224B260[26], 104);
  if ( (uchar)(++HIBYTE(dword_224B260[17]) + 1) < (uint)LOBYTE(dword_224B260[18]) )
    dword_224B260[16] += 98;
  else
    LOBYTE(dword_224B260[17]) = 4;
  return WM_SetGameInfo(0, (int)&dword_224B260[24], 0x70u, v4, v7, v8 | 3);
}

//----- (02221F30) --------------------------------------------------------
int Function_2221f30()
{
  int result;

  *(ushort *)(dword_224B260[15] + 1200) = 1;
  result = *(uchar *)(dword_224B260[15] + 1204);
  BYTE2(dword_224B260[17]) = *(uchar *)(dword_224B260[15] + 1204);
  LOBYTE(dword_224B260[17]) = 5;
  return result;
}

//----- (02221F60) --------------------------------------------------------
int *__fastcall Function_2221f60(int a1, ushort a2, char a3)
{
  int i;
  short v4;
  uint v5;
  int v6;
  uint v7;
  int *result;
  int v9;
  ushort v10;
  char v11;

  v9 = a1;
  v10 = a2;
  v11 = a3;
  if ( BYTE2(dword_224B260[17]) != *(uchar *)(dword_224B260[15] + 1204) )
    Function_2221f30();
  LOBYTE(dword_224B260[25]) = dword_224B260[25] & 0xFC | 2;
  BYTE1(dword_224B260[25]) = *(uchar *)(dword_224B260[15] + 1203);
  BYTE2(dword_224B260[25]) = BYTE2(dword_224B260[17]);
  dword_224B260[24] = *(uint *)(dword_224B260[15] + 1208);
  LOBYTE(dword_224B260[25]) = dword_224B260[25] & 3 | 4 * *(uchar *)(dword_224B260[15] + 1205);
  HIBYTE(dword_224B260[25]) = ++BYTE1(dword_224B260[18]);
  BYTE2(dword_224B260[26]) = *(uchar *)(dword_224B260[15] + 856);
  dword_224B260[27] = *(uint *)(dword_224B260[15] + 858);
  if ( !dword_224B260[12] && dword_224B260[13] )
    ((void (__fastcall *)(uint))dword_224B260[13])(*(uint *)(dword_224B260[15] + 1208));
  for ( i = 0; i < 8; ++i )
    *((uchar *)&dword_224B260[50] + i) = *(uchar *)(dword_224B260[15] + i + 1192);
  MIi_CpuClear16(0, (int)&dword_224B260[28], 88);
  v5 = 0;
  v6 = 0;
  v7 = (*(ushort *)(dword_224B260[15] + 1200) ^ *(ushort *)(dword_224B260[15] + 858)) << 16;
  while ( v6 < 15 )
  {
    if ( (2 << v6) & (v7 >> 16) )
    {
      MIi_CpuCopy16(dword_224B260[15] + 862 + 22 * v6, (int)&dword_224B260[28] + 22 * v5++, 22, v4);
      *(ushort *)(dword_224B260[15] + 1200) |= 2 << v6;
      if ( v5 == 4 )
        break;
    }
    ++v6;
  }
  if ( v5 < 4 )
    *((uchar *)&dword_224B260[28] + 22 * v5) &= 0xFu;
  LOWORD(dword_224B260[26]) = 0;
  LOWORD(dword_224B260[26]) = Function_2221944((ushort *)&dword_224B260[26], 104);
  if ( *(ushort *)(dword_224B260[15] + 1200) == *(ushort *)(dword_224B260[15] + 858) )
    LOBYTE(dword_224B260[17]) = 1;
  WM_SetGameInfo(0, (int)&dword_224B260[24], 0x70u, v9, v10, v11 | 3);
  result = &dword_224B260[8];
  if ( dword_224B260[12] == 1 )
  {
    if ( dword_224B260[13] )
      result = (int *)((int (__fastcall *)(uint))dword_224B260[13])(*(uint *)(dword_224B260[15] + 1208));
  }
  return result;
}

//----- (022221CC) --------------------------------------------------------
int __fastcall Function_22221cc(int a1)
{
  int v1;
  int v2;
  uint v4;
  int v5;
  bool v6;
  ushort v7;

  v1 = a1;
  v2 = WM_GetAllowedChannel();
  if ( !v2 )
    return 0;
  v4 = 0;
  v5 = *(ushort *)(v1 + 4);
  while ( 1 )
  {
    v6 = (v2 & (1 << (v5 - 1))) == 0;
    if ( v2 & (1 << (v5 - 1)) )
      v6 = *(ushort *)(v1 + 4) == v5;
    if ( !v6 )
      break;
    v4 = (v4 + 1) & 0xFFFF;
    if ( v5 == 16 )
      v7 = 1;
    else
      v7 = v5 + 1;
    v5 = v7;
    if ( v4 >= 0x10 )
      return 1;
  }
  *(ushort *)(v1 + 4) = v5;
  return 1;
}

//----- (0222223C) --------------------------------------------------------
int Function_222223c()
{
  int result;
  int v1;
  int v2;
  int v3;
  bool v4;
  bool v5;

  result = 0;
  v1 = 0;
  v2 = *(ushort *)(dword_2250D18[4] + 1320);
  v3 = 0;
  v4 = v2 == 1;
  if ( v2 == 1 )
    v4 = *(uchar *)(dword_2250D18[4] + 1292) == 0;
  if ( v4 )
    v1 = 1;
  if ( v1 && !*(ushort *)(dword_2250D18[4] + 1318) )
    v3 = 1;
  v5 = v3 == 0;
  if ( v3 )
    v5 = *(ushort *)(dword_2250D18[4] + 1322) == 0;
  if ( !v5 )
    result = 1;
  return result;
}

//----- (0222229C) --------------------------------------------------------
int Function_222229c()
{
  int v0;
  int v1;

  v0 = WM_SetIndCallback((int)Function_2222330);
  Function_2223ed8(128, v0);
  v1 = WM_SetLifeTime((int)Function_2222330, 0xFFFF, 40, 5, 0x28u);
  return Function_2223ed8(29, v1);
}

//----- (022222EC) --------------------------------------------------------
int __fastcall Function_22222ec(int a1)
{
  int v1;
  int result;
  int (__fastcall *v3)(int, int);

  v1 = a1;
  *(uchar *)(dword_2250D18[4] + 1293) = 0;
  *(ushort *)(dword_2250D18[5] + 4886) = 0;
  result = dword_2250D18[4];
  v3 = *(int (__fastcall **)(int, int))(dword_2250D18[4] + 1308);
  if ( v3 )
    result = v3(17, v1);
  return result;
}

//----- (02222330) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x22223B4 for case 0"

//----- (02222358) --------------------------------------------------------
void Function_2222358()
{
  JUMPOUT(&loc_22223B4);
}

//----- (0222235C) --------------------------------------------------------
void Function_222235c()
{
  JUMPOUT(&loc_2222928);
}

//----- (02222360) --------------------------------------------------------
void Function_2222360()
{
  JUMPOUT(&loc_2222A18);
}

//----- (02222364) --------------------------------------------------------
void Function_2222364()
{
  JUMPOUT(&loc_2222B58);
}

//----- (02222368) --------------------------------------------------------
void Function_2222368()
{
  JUMPOUT(&loc_2222B58);
}

//----- (0222236C) --------------------------------------------------------
void Function_222236c()
{
  JUMPOUT(&loc_2222B58);
}

//----- (02222370) --------------------------------------------------------
void Function_2222370()
{
  JUMPOUT(&loc_2222B58);
}

//----- (02222374) --------------------------------------------------------
void Function_2222374()
{
  JUMPOUT(&loc_222243C);
}

//----- (02222378) --------------------------------------------------------
void Function_2222378()
{
  JUMPOUT(&loc_2222510);
}

//----- (0222237C) --------------------------------------------------------
void Function_222237c()
{
  JUMPOUT(&loc_2222B58);
}

//----- (02222380) --------------------------------------------------------
void Function_2222380()
{
  JUMPOUT(&loc_2222B58);
}

//----- (02222384) --------------------------------------------------------
void Function_2222384()
{
  JUMPOUT(&loc_2222B58);
}

//----- (02222388) --------------------------------------------------------
void Function_2222388()
{
  JUMPOUT(&loc_2222B58);
}

//----- (0222238C) --------------------------------------------------------
void Function_222238c()
{
  JUMPOUT(&loc_2222A60);
}

//----- (02222390) --------------------------------------------------------
void Function_2222390()
{
  JUMPOUT(&loc_2222764);
}

//----- (02222394) --------------------------------------------------------
void Function_2222394()
{
  int v0;
  int v1;
  uint v2;
  int v3;

  if ( *(uint *)(dword_2250D18[5] + 29896) )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      if ( *(uint *)(dword_2250D18[5] + 4 * v2 + 5352) )
      {
        if ( (uint)++v1 >= 2 )
          break;
      }
      ++v2;
    }
    while ( v2 < 0xF );
    if ( v1 == 1 )
      OS_SpinWait(0x32C8u);
  }
  *(uchar *)(dword_2250D18[4] + 1292) = 0;
  if ( !*(ushort *)(v0 + 2) )
  {
    (*(void (__fastcall **)(int, int))(dword_2250D18[4] + 1308))(2, v0);
    if ( *(ushort *)(dword_2250D18[4] + 1318) )
      JUMPOUT(__CS__, v3);
    (*(void (__fastcall **)(int, uint))(dword_2250D18[4] + 1308))(25, 0);
    JUMPOUT(__CS__, v3);
  }
  if ( *(ushort *)(v0 + 2) != 10 )
  {
    (*(void (__fastcall **)(int, int))(dword_2250D18[4] + 1308))(19, v0);
    if ( *(ushort *)(dword_2250D18[4] + 1318) )
      JUMPOUT(__CS__, v3);
    (*(void (__fastcall **)(int, uint))(dword_2250D18[4] + 1308))(25, 0);
    JUMPOUT(__CS__, v3);
  }
  (*(void (__fastcall **)(int, int))(dword_2250D18[4] + 1308))(42, v0);
  JUMPOUT(__CS__, v3);
}

//----- (02222AAC) --------------------------------------------------------
void Function_2222aac()
{
  JUMPOUT(&loc_2222ACC);
}

//----- (02222AB0) --------------------------------------------------------
void Function_2222ab0()
{
  JUMPOUT(&loc_2222AEC);
}

//----- (02222AB4) --------------------------------------------------------
void Function_2222ab4()
{
  JUMPOUT(&loc_2222B0C);
}

//----- (02222AB8) --------------------------------------------------------
void Function_2222ab8()
{
  JUMPOUT(&loc_2222B2C);
}

//----- (02222ABC) --------------------------------------------------------
void Function_2222abc()
{
  JUMPOUT(&loc_2222B70);
}

//----- (02222AC0) --------------------------------------------------------
void Function_2222ac0()
{
  JUMPOUT(&loc_2222B70);
}

//----- (02222AC4) --------------------------------------------------------
void __noreturn Function_2222ac4()
{
  JUMPOUT(&loc_2222B4C);
}

//----- (02222AC8) --------------------------------------------------------
void Function_2222ac8()
{
  int v0;

  JUMPOUT(__CS__, v0);
}

//----- (02222B88) --------------------------------------------------------
int __fastcall Function_2222b88(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(ushort *)(a1 + 2);
  if ( !result )
  {
    result = *(ushort *)(v1 + 4);
    if ( result <= 21 && result >= 21 )
      result = (*(int (__fastcall **)(int))(dword_2250D18[4] + 1308))(9);
  }
  return result;
}

//----- (02222BF8) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2222C90 for case 0"

//----- (02222C2C) --------------------------------------------------------
void Function_2222c2c()
{
  JUMPOUT(&loc_2222C90);
}

//----- (02222C30) --------------------------------------------------------
void Function_2222c30()
{
  JUMPOUT(&loc_2223310);
}

//----- (02222C34) --------------------------------------------------------
void Function_2222c34()
{
  JUMPOUT(&loc_2223370);
}

//----- (02222C38) --------------------------------------------------------
void Function_2222c38()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C3C) --------------------------------------------------------
void Function_2222c3c()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C40) --------------------------------------------------------
void Function_2222c40()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C44) --------------------------------------------------------
void Function_2222c44()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C48) --------------------------------------------------------
void Function_2222c48()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C4C) --------------------------------------------------------
void Function_2222c4c()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C50) --------------------------------------------------------
void Function_2222c50()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C54) --------------------------------------------------------
void Function_2222c54()
{
  JUMPOUT(&loc_2222D8C);
}

//----- (02222C58) --------------------------------------------------------
void Function_2222c58()
{
  JUMPOUT(&loc_2223054);
}

//----- (02222C5C) --------------------------------------------------------
void Function_2222c5c()
{
  JUMPOUT(&loc_22230A4);
}

//----- (02222C60) --------------------------------------------------------
void Function_2222c60()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C64) --------------------------------------------------------
void Function_2222c64()
{
  JUMPOUT(&loc_222321C);
}

//----- (02222C68) --------------------------------------------------------
void Function_2222c68()
{
  JUMPOUT(&loc_2223290);
}

//----- (02222C6C) --------------------------------------------------------
void Function_2222c6c()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C70) --------------------------------------------------------
void Function_2222c70()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C74) --------------------------------------------------------
void Function_2222c74()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C78) --------------------------------------------------------
void Function_2222c78()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C7C) --------------------------------------------------------
void Function_2222c7c()
{
  JUMPOUT(&loc_22233F8);
}

//----- (02222C80) --------------------------------------------------------
void Function_2222c80()
{
  JUMPOUT(&loc_22233AC);
}

//----- (02222CF0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02223424) --------------------------------------------------------
uint __fastcall Function_2223424(int a1, int a2, int a3, uint a4)
{
  int v4;
  char *v5;
  int v6;
  int v7;
  char v9;
  uint v10;

  v10 = a4;
  OS_GetMacAddress((uint)&v9, a2, a3, a4);
  v4 = 0;
  v5 = &v9;
  v6 = 0;
  do
  {
    v7 = (uchar)*v5++;
    ++v4;
    v6 += v7;
  }
  while ( v4 < 6 );
  return 7 * (v6 + RAM_27ffc3c) % 0x14u;
}

//----- (0222348C) --------------------------------------------------------
int __fastcall Function_222348c(int a1, int a2, int a3, int a4, short a5)
{
  int v5;
  int v6;
  int v7;
  short v8;
  uint v10;
  uint v11;
  uint v12;
  int v13;
  ushort *v14;
  int i;
  short v16;
  short *v17;
  int v18;
  short *v19;
  short v20;
  uint v21;
  uint v22;
  ushort *v23;

  v5 = a2;
  v6 = dword_2250D18[5];
  v7 = a3;
  if ( dword_2250D18[5] )
    v6 = *(ushort *)(dword_2250D18[5] + 4886);
  v8 = a4;
  if ( dword_2250D18[5] && v6 )
    return 2;
  v10 = (a1 + 31) & 0xFFFFFFE0;
  v11 = (v10 + 7711) & 0xFFFFFFE0;
  if ( a4 == 0x10000 )
    v8 = WM_GetNextTgid();
  v12 = OS_DisableInterrupts();
  word_2249772 = -1;
  word_224976C = 5;
  word_224976E = 40;
  v13 = v12;
  word_2249770 = 40;
  dword_2249778 = 1;
  LOWORD(dword_2250D18[2]) = a5;
  dword_2250D18[4] = v10;
  dword_2250D18[5] = (v10 + 7711) & 0xFFFFFFE0;
  MIi_CpuClear32(0, (uint *)v10, 7680);
  MIi_CpuClear16(0, (v10 + 7711) & 0xFFFFFFE0, 4928);
  v14 = (ushort *)(v10 + 1328);
  for ( i = 0; i < *(uchar *)(v5 + 1); ++v14 )
  {
    v16 = *(ushort *)(v5 + 2 * i++ + 2);
    *v14 = v16;
  }
  v17 = (short *)(v10 + 1336);
  v18 = 0;
  v19 = &word_224977C;
  do
  {
    v20 = *v19;
    if ( !*v19 )
      break;
    ++v19;
    ++v18;
    off_2249774 = v19;
    *v17 = v20;
    ++v17;
  }
  while ( v18 < 16 );
  MI_CpuCopy8(v5, v11 + 4864, 0x16u, (uint)v17);
  v22 = *(uchar *)(v5 + 1);
  if ( v22 < 0xA )
    *(ushort *)(((v10 + 7711) & 0xFFFFFFE0) + 2 * v22 + 0x1302) = 0;
  v23 = (ushort *)(v10 + 1280);
  *v23 = 256;
  v23[1] = 8;
  v23[12] = 0;
  v23[13] = 0;
  v23[22] = 1;
  *(uint *)(v10 + 1284) = v11 + 1024;
  *(ushort *)(v10 + 14) = 0;
  *(ushort *)(v10 + 18) = 0;
  *(ushort *)(v10 + 22) = 1;
  *(ushort *)(v10 + 20) = 0;
  *(uint *)(v10 + 8) = v7;
  *(ushort *)(v10 + 12) = v8;
  *(ushort *)(v10 + 24) = Function_2223424(v11 + 1024, 1, 0, v21) + 200;
  *(ushort *)(v10 + 16) = 15;
  *(uchar *)(v10 + 1292) = 0;
  *(uchar *)(v10 + 1293) = 0;
  *(ushort *)(((v10 + 7711) & 0xFFFFFFE0) + 0x1316) = 1;
  *(uint *)(((v10 + 7711) & 0xFFFFFFE0) + 0x131C) = 0;
  OS_RestoreInterrupts(v13);
  return 0;
}

//----- (02223670) --------------------------------------------------------
BOOL __fastcall Function_2223670(uint a1, uint a2, int a3)
{
  if ( a1 > 0x1FE || a1 < 0xE4 )
    return 0;
  if ( a2 <= 0x10 && a2 >= 8 )
    return (int)(4 * (a1 + 38) + 330 + a3 * (4 * (a2 + 32) + 112)) < 5600;
  return 0;
}

//----- (022236E0) --------------------------------------------------------
int __fastcall Function_22236e0(uint a1, int a2)
{
  uint v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = OS_DisableInterrupts();
  v5 = v4;
  if ( *(uchar *)(dword_2250D18[4] + 1293) )
  {
    OS_RestoreInterrupts(v4);
    result = 0;
  }
  else if ( Function_2223670(v2, 8u, v3) )
  {
    *(ushort *)(dword_2250D18[4] + 16) = v3;
    *(ushort *)(dword_2250D18[4] + 1280) = v2;
    *(ushort *)(dword_2250D18[4] + 1282) = 8;
    OS_RestoreInterrupts(v5);
    result = 1;
  }
  else
  {
    OS_RestoreInterrupts(v5);
    result = 0;
  }
  return result;
}

//----- (02223778) --------------------------------------------------------
int Function_2223778()
{
  int v0;
  int result;

  *(ushort *)(dword_2250D18[4] + 1320) = 0;
  *(ushort *)(dword_2250D18[4] + 1322) = 0;
  *(ushort *)(dword_2250D18[4] + 1318) = 0;
  *(ushort *)(dword_2250D18[4] + 1352) = 0;
  Function_2223cf4(10);
  if ( *(uint *)(dword_2250D18[5] + 4896) )
  {
    WM_SetIndCallback(*(uint *)(dword_2250D18[4] + 1288));
    *(uchar *)(dword_2250D18[4] + 1293) = 1;
    Function_222229c();
    result = 0;
  }
  else
  {
    do
      v0 = Function_20cecc8(dword_2250D18[3], *(uint *)(dword_2250D18[4] + 1288), LOWORD(dword_2250D18[2]));
    while ( v0 == 4 );
    if ( v0 == 2 )
    {
      WM_SetIndCallback(*(uint *)(dword_2250D18[4] + 1288));
      result = 0;
      *(uchar *)(dword_2250D18[4] + 1293) = 1;
    }
    else
    {
      result = 8;
    }
  }
  return result;
}

//----- (0222384C) --------------------------------------------------------
int __fastcall Function_222384c(short a1)
{
  short v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = OS_DisableInterrupts();
  *(ushort *)(dword_2250D18[4] + 50) = v1;
  dword_2250D18[3] = (dword_2250D18[5] + 32031) & 0xFFFFFFE0;
  v3 = *(uint *)(dword_2250D18[5] + 5348);
  MIi_CpuClear16(0, dword_2250D18[5] + 4928, 27072);
  Function_221f84c(v3);
  *(uint *)(dword_2250D18[5] + 4888) = *(ushort *)(dword_2250D18[4] + 1280) - 6;
  Function_22243b0(*(ushort *)(dword_2250D18[4] + 1282));
  Function_22243e0(dword_2250D18[5] + 5432);
  v4 = 0;
  do
  {
    *(uint *)(dword_2250D18[5] + 4 * v4 + 5352) = 0;
    v5 = dword_2250D18[5] + v4++ + 4096;
    *(uchar *)(v5 + 1318) = -1;
  }
  while ( v4 < 15 );
  *(uchar *)(dword_2250D18[5] + 5412) = 0;
  MIi_CpuClear16(0, dword_2250D18[5] + 6024, 23872);
  MI_CpuFill8((ushort *)(dword_2250D18[5] + 5972), 0, 0x1Eu);
  *(ushort *)(dword_2250D18[4] + 1316) = 1;
  *(uint *)(dword_2250D18[4] + 1308) = Function_221faa0;
  *(uint *)(dword_2250D18[4] + 1288) = Function_2222330;
  *(ushort *)(dword_2250D18[4] + 52) = *(ushort *)(dword_2250D18[4] + 1280);
  *(ushort *)(dword_2250D18[4] + 1304) = (*(ushort *)(dword_2250D18[4] + 52) + 35) & 0xFFE0;
  *(ushort *)(dword_2250D18[4] + 54) = *(ushort *)(dword_2250D18[4] + 1282);
  *(ushort *)(dword_2250D18[4] + 1306) = 2 * ((15 * (*(ushort *)(dword_2250D18[4] + 54) + 14) + 41) & 0xFFE0);
  Function_2221bfc();
  v6 = Function_2223778();
  OS_RestoreInterrupts(v2);
  *(uint *)(dword_2250D18[5] + 29896) = PXI_IsCallbackReady(15, 1);
  return v6;
}

//----- (02223A30) --------------------------------------------------------
int __fastcall Function_2223a30(short a1)
{
  *(uint *)(dword_2250D18[5] + 4896) = 1;
  return Function_222384c(a1);
}

//----- (02223A54) --------------------------------------------------------
int Function_2223a54()
{
  int v0;

  v0 = WM_Reset(*(uint *)(dword_2250D18[4] + 1288));
  Function_2223ed8(1, v0);
  if ( v0 == 2 )
    v0 = 0;
  return v0;
}

//----- (02223A8C) --------------------------------------------------------
int Function_2223a8c()
{
  return Function_2223a54();
}

//----- (02223A98) --------------------------------------------------------
int Function_2223a98()
{
  int v0;
  int v1;

  v0 = 1;
  v1 = OS_DisableInterrupts();
  if ( *(uchar *)(dword_2250D18[4] + 1293) )
  {
    if ( !*(ushort *)(dword_2250D18[4] + 1318) )
    {
      *(uint *)(dword_2250D18[4] + 1508) = 0;
      *(ushort *)(dword_2250D18[4] + 1318) = 1;
      if ( Function_22241bc() )
      {
        Function_2224368(Function_2223a8c);
        v0 = 0;
      }
      else
      {
        v0 = Function_2223a54();
      }
    }
  }
  else
  {
    Function_22222ec(0);
  }
  OS_RestoreInterrupts(v1);
  return v0;
}

//----- (02223B2C) --------------------------------------------------------
uint Function_2223b2c()
{
  int v0;

  v0 = OS_DisableInterrupts();
  if ( !*(uint *)(dword_2250D18[5] + 4896) )
    OS_Panic();
  Function_2223a98();
  return OS_RestoreInterrupts(v0);
}

//----- (02223B68) --------------------------------------------------------
int __fastcall Function_2223b68(uint a1)
{
  uint v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  result = WM_Disconnect((int)Function_2222330, a1);
  if ( v1 && v1 < 0x10 )
  {
    v3 = v1 - 1;
    *(ushort *)(dword_2250D18[5] + 2 * (v1 - 1) + 5258) = 0;
    MI_CpuFill8((ushort *)(dword_2250D18[5] + 5288 + 4 * (v1 - 1)), 0, 4u);
    MI_CpuFill8((ushort *)(dword_2250D18[5] + 4928 + 22 * (v1 - 1)), 0, 0x16u);
    Function_2224400(v1);
    *(ushort *)(dword_2250D18[5] + 2 * (v1 - 1) + 5972) = 0;
    v4 = *(char *)(dword_2250D18[5] + v1 - 1 + 5414);
    if ( v4 != -1 )
    {
      v5 = 1492 * (uchar)v4;
      v6 = ~(1 << v1);
      *(ushort *)(dword_2250D18[5] + v5 + 7502) &= v6;
      *(ushort *)(dword_2250D18[5] + v5 + 7504) |= 1 << v1;
      *(uchar *)(dword_2250D18[5] + v3 + 5414) = -1;
      *(ushort *)(dword_2250D18[5] + v5 + 7500) &= v6;
    }
    if ( *(ushort *)(dword_2250D18[5] + 5430) & (1 << v1) )
    {
      --*(uchar *)(dword_2250D18[5] + 5429);
      *(ushort *)(dword_2250D18[5] + 5430) &= ~(1 << v1);
    }
    result = dword_2250D18[5] + 4 * v3 + 4096;
    *(uint *)(dword_2250D18[5] + 4 * v3 + 5352) = 0;
  }
  return result;
}

//----- (02223CF4) --------------------------------------------------------
short __fastcall Function_2223cf4(short result)
{
  HIWORD(dword_2250D18[11]) = result;
  return result;
}

//----- (02223D04) --------------------------------------------------------
int __fastcall Function_2223d04(int a1, int a2, uint a3, int a4, ushort a5)
{
  int v5;

  v5 = WM_SetMPDataToPortEx(a1, 0, a2, a3, a5, 1u, 3u);
  Function_2223ed8(15, v5);
  return v5;
}

//----- (02223D50) --------------------------------------------------------
int __fastcall Function_2223d50(int a1, int a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  uint v6;
  bool v7;
  int result;
  int v9;
  ushort v10;

  v3 = a2 << 16;
  v4 = a3 << 16;
  v5 = a1;
  v6 = v3 >> 16;
  v7 = *(ushort *)(dword_2250D18[4] + 1320) == 0;
  if ( *(ushort *)(dword_2250D18[4] + 1320) )
    a1 = *(ushort *)(dword_2250D18[4] + 1318);
  if ( *(ushort *)(dword_2250D18[4] + 1320) )
    v7 = a1 == 1;
  if ( v7 )
    return 1;
  v9 = *(ushort *)(dword_2250D18[4] + 1316);
  if ( v9 == 1 )
  {
    if ( *(ushort *)(dword_2250D18[4] + 1324) )
      v10 = 0;
    else
      v10 = 1000;
    result = Function_2223d04(*(uint *)(dword_2250D18[4] + 1288), v5, v6, v10, HIWORD(v4));
    if ( result == 2 )
      *(uchar *)(dword_2250D18[4] + 1292) = 1;
    if ( result == 2 )
      result = 0;
  }
  else if ( v9 == 2 )
  {
    result = Function_2223d04((int)Function_2222bf8, v5, v6, 0, HIWORD(v4));
    if ( result == 2 )
      *(uchar *)(dword_2250D18[4] + 1292) = 1;
    if ( result == 2 )
      result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}

//----- (02223E30) --------------------------------------------------------
int Function_2223e30()
{
  return *(uint *)(dword_2250D18[4] + 8);
}

//----- (02223E44) --------------------------------------------------------
int Function_2223e44()
{
  return *(ushort *)(dword_2250D18[4] + 12);
}

//----- (02223E58) --------------------------------------------------------
int __fastcall Function_2223e58(int a1, int a2, int a3, char a4)
{
  char v4;
  char v5;
  char v6;

  v5 = dword_2250D18[4];
  if ( *(ushort *)(dword_2250D18[4] + 18) )
    v6 = 2;
  else
    v6 = 0;
  if ( *(ushort *)(dword_2250D18[4] + 14) )
    a4 = 1;
  if ( !*(ushort *)(dword_2250D18[4] + 14) )
    a4 = 0;
  if ( *(ushort *)(dword_2250D18[4] + 20) )
    v4 = 4;
  if ( !*(ushort *)(dword_2250D18[4] + 20) )
    v4 = 0;
  if ( *(ushort *)(dword_2250D18[4] + 22) )
    v5 = 8;
  if ( !*(ushort *)(dword_2250D18[4] + 22) )
    v5 = 0;
  return (uchar)v5 | (uchar)(v4 | a4 | v6);
}

//----- (02223EB8) --------------------------------------------------------
BOOL Function_2223eb8()
{
  return *(uchar *)(dword_2250D18[4] + 1293) == 1;
}

//----- (02223ED8) --------------------------------------------------------
int __fastcall Function_2223ed8(int result, int a2, int a3, int a4)
{
  bool v4;
  int v5;

  v5 = a4;
  v4 = a2 == 2;
  if ( a2 != 2 )
    v4 = a2 == 0;
  if ( !v4 )
  {
    LOWORD(v5) = result;
    HIWORD(v5) = a2;
    result = (*(int (__fastcall **)(int, int *))(dword_2250D18[4] + 1308))(255, &v5);
  }
  return result;
}

//----- (02223F10) --------------------------------------------------------
ushort *__fastcall Function_2223f10(ushort *a1)
{
  return MI_CpuFill8(a1, 0, 0x70u);
}

//----- (02223F24) --------------------------------------------------------
uint __fastcall Function_2223f24(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int v10;
  uint v11;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = (uint *)(a1 + 48);
  v10 = OS_DisableInterrupts();
  v11 = v5 + 112;
  while ( 1 )
  {
    if ( (uint)v9 >= v11 )
      OS_Panic();
    if ( !v9[3] )
      break;
    v9 += 4;
  }
  *v9 = v6;
  v9[1] = v7;
  v9[2] = v8;
  v9[3] = a5;
  return OS_RestoreInterrupts(v10);
}

//----- (02223F8C) --------------------------------------------------------
int __fastcall Function_2223f8c(uint *a1, int a2, uint a3, uint a4)
{
  uint *v4;
  int v5;
  uint v6;
  uint v7;
  int v8;
  uint v9;
  uint *v10;
  int v11;
  int v12;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = 0;
  v9 = OS_DisableInterrupts();
  v10 = v4 + 12;
  v11 = v9;
  if ( v4 + 12 < v4 + 28 )
  {
    while ( 1 )
    {
      if ( v10[3] >= 2u )
      {
        v12 = v5 - *v10;
        if ( v5 - *v10 >= 0 && v12 + v7 <= v10[1] )
          break;
      }
      v10 += 4;
      if ( v10 >= v4 + 28 )
        goto LABEL_7;
    }
    MI_CpuCopy8(v10[2] + v12, v6, v7, v10[2]);
    *v4 = 0;
    v8 = 1;
  }
LABEL_7:
  OS_RestoreInterrupts(v11);
  return v8;
}

//----- (02224024) --------------------------------------------------------
void __fastcall Function_2224024(int a1)
{
  int v1;
  int v2;
  uint *v3;
  void (__fastcall *v4)(uint *);
  int v5;
  void (__fastcall *v6)(uint *);
  uint v7;
  int v8;

  v1 = a1;
  while ( 1 )
  {
    v2 = OS_DisableInterrupts();
    while ( !*(uint *)(v1 + 192) )
    {
      OS_SetThreadPriority(v1, 0);
      OS_SleepThread(0);
    }
    v3 = *(uint **)(v1 + 192);
    *(uint *)(v1 + 192) = **(uint **)(v1 + 192);
    OS_SetThreadPriority(v1, v3[1] >> 1);
    OS_RestoreInterrupts(v2);
    v4 = (void (__fastcall *)(uint *))v3[2];
    if ( v4 )
      v4(v3);
    v5 = OS_DisableInterrupts();
    v6 = (void (__fastcall *)(uint *))v3[3];
    v7 = Function_20c249c(v1);
    if ( *(uint *)(v1 + 192) )
    {
      if ( v7 < *(uint *)(*(uint *)(v1 + 192) + 4) >> 1 )
        v8 = *(uint *)(*(uint *)(v1 + 192) + 4) >> 1;
      else
        v8 = v7;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 != v7 )
      OS_SetThreadPriority(v1, v8);
    *v3 = 0;
    v3[1] &= 0xFFFFFFFE;
    if ( v6 )
      v6(v3);
    if ( v3 == (uint *)(v1 + 196) )
      OS_ExitThread();
    OS_RestoreInterrupts(v5);
  }
}

//----- (0222413C) --------------------------------------------------------
uint __fastcall Function_222413c(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = OS_DisableInterrupts();
  if ( !dword_2250D18[18] )
  {
    dword_2250D18[18] = (int)v2;
    Function_22241d8(v2 + 49);
    v2[48] = 0;
    OS_CreateThread(
      v2,
      (int)Function_2224024,
      (int)v2,
      (int)v2 + ((v3 - 228) & 0xFFFFFFFC) + 228,
      (v3 - 228) & 0xFFFFFFFC,
      0);
    OS_WakeupThreadDirect((int)v2);
  }
  return OS_RestoreInterrupts(v4);
}

//----- (022241BC) --------------------------------------------------------
BOOL Function_22241bc()
{
  return dword_2250D18[18] != 0;
}

//----- (022241D8) --------------------------------------------------------
ushort *__fastcall Function_22241d8(ushort *a1)
{
  return MI_CpuFill8(a1, 0, 0x20u);
}

//----- (022241EC) --------------------------------------------------------
BOOL __fastcall Function_22241ec(int a1)
{
  return (*(uint *)(a1 + 4) & 1) != 0;
}

//----- (02224204) --------------------------------------------------------
uint __fastcall Function_2224204(uint *a1, int a2, int a3, uint a4)
{
  uint *v4;
  int v5;
  int v6;
  uint v7;
  uint result;
  uint v9;
  int v10;
  uint v11;
  int v12;
  uint *v13;
  uint *v14;
  uint *v15;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  result = Function_22241bc();
  if ( result )
  {
    result = v4[1] & 1;
    if ( !result )
    {
      if ( v7 > 0x1F )
      {
        v9 = Function_20c249c(dword_2250D18[18]);
        switch ( v7 )
        {
          case 0x20u:
            if ( v9 )
              v7 = v9 - 1;
            else
              v7 = 0;
            break;
          case 0x21u:
            if ( v9 >= 0x1F )
              v7 = 31;
            else
              v7 = v9 + 1;
            break;
          case 0x22u:
            v7 = v9;
            break;
          default:
            v7 = 31;
            break;
        }
      }
      v10 = OS_DisableInterrupts();
      v11 = v4[1] & 0xFFFFFFFE | 1;
      v4[1] = v11;
      v4[1] = v11 & 1 | 2 * v7;
      v4[2] = v5;
      v4[3] = v6;
      v12 = dword_2250D18[18] + 196;
      if ( *(uint *)(dword_2250D18[18] + 192) )
      {
        v13 = *(uint **)(dword_2250D18[18] + 192);
        if ( v4 == (uint *)v12 )
        {
          v14 = (uint *)*v13;
          if ( *v13 )
          {
            do
            {
              v13 = v14;
              v14 = (uint *)*v14;
            }
            while ( v14 );
          }
          *v13 = v4;
          dword_2250D18[18] = 0;
        }
        else if ( v7 >= v13[1] >> 1 )
        {
          while ( 1 )
          {
            v15 = (uint *)*v13;
            if ( !*v13 || v7 < v15[1] >> 1 )
              break;
            v13 = (uint *)*v13;
          }
          *v4 = v15;
          *v13 = v4;
        }
        else
        {
          *(uint *)(dword_2250D18[18] + 192) = v4;
          *v4 = v13;
        }
      }
      else
      {
        if ( v4 == (uint *)v12 )
          dword_2250D18[18] = 0;
        *(uint *)(dword_2250D18[18] + 192) = v4;
        OS_WakeupThreadDirect(dword_2250D18[18]);
      }
      result = OS_RestoreInterrupts(v10);
    }
  }
  return result;
}

//----- (02224368) --------------------------------------------------------
uint __fastcall Function_2224368(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = OS_DisableInterrupts();
  if ( Function_22241bc() )
    Function_2224204((uint *)(dword_2250D18[18] + 196), 0, v1, 0);
  return OS_RestoreInterrupts(v2);
}

//----- (022243B0) --------------------------------------------------------
uint __fastcall Function_22243b0(int a1)
{
  uint result;

  dword_2250D18[21] = a1 - 2;
  result = s32_div_f(0x1Eu, a1 - 2);
  dword_2250D18[22] = result;
  dword_2250D18[23] = 30;
  return result;
}

//----- (022243E0) --------------------------------------------------------
ushort *__fastcall Function_22243e0(ushort *a1)
{
  dword_2250D18[20] = (int)a1;
  return MI_CpuFill8(a1, 0, 0x21Cu);
}

//----- (02224400) --------------------------------------------------------
int __fastcall Function_2224400(int result)
{
  int v1;

  if ( dword_2250D18[20] )
  {
    v1 = result - 1;
    MI_CpuFill8((ushort *)(dword_2250D18[20] + 32 * (result - 1)), 0, 0x1Eu);
    result = dword_2250D18[20] + 4 * v1;
    *(uint *)(result + 480) = 0;
  }
  return result;
}

//----- (02224444) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x22244B8 for case 0"

//----- (02224464) --------------------------------------------------------
void Function_2224464()
{
  JUMPOUT(&loc_22244B8);
}

//----- (02224468) --------------------------------------------------------
void Function_2224468()
{
  JUMPOUT(&loc_22244C0);
}

//----- (0222446C) --------------------------------------------------------
void Function_222446c()
{
  JUMPOUT(&loc_22244C0);
}

//----- (02224470) --------------------------------------------------------
void Function_2224470()
{
  JUMPOUT(&loc_22244C0);
}

//----- (02224474) --------------------------------------------------------
void Function_2224474()
{
  JUMPOUT(&loc_2224480);
}

//----- (02224478) --------------------------------------------------------
void Function_2224478()
{
  JUMPOUT(&loc_22244C0);
}

//----- (0222447C) --------------------------------------------------------
int __fastcall Function_222447c(int a1, int a2, int a3, int a4)
{
  return a4;
}

//----- (022244C8) --------------------------------------------------------
int __fastcall Function_22244c8(uchar *a1, int a2, int a3)
{
  uchar *v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  uint v10;

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  *(uchar *)a2 = v4;
  switch ( v4 )
  {
    case 7:
      if ( Function_2224670(a3) )
        return dword_2250D18[20] + 32 * (v6 - 1);
      v8 = v3[1];
      *(uchar *)(v5 + 2) = v8;
      if ( v8 > dword_2250D18[22] )
        return 0;
      MI_CpuCopy8((int)(v3 + 2), v5 + 3, dword_2250D18[21], v7);
      v9 = Function_22245e4(v5, v6);
      break;
    case 8:
      v9 = (int)(v3 + 3);
      *(ushort *)(a2 + 2) = v3[1];
      *(ushort *)(a2 + 2) |= (v3[2] << 8) & 0xFF00;
      break;
    case 9:
      *(ushort *)(a2 + 2) = v3[1];
      v10 = *(ushort *)(a2 + 2);
      *(ushort *)(a2 + 2) = v10 | (v3[2] << 8) & 0xFF00;
      MI_CpuCopy8((int)(v3 + 3), a2 + 4, dword_2250D18[21], v10);
      v9 = (int)&v3[dword_2250D18[21] + 3];
      break;
    default:
      return 0;
  }
  return v9;
}

//----- (022245E4) --------------------------------------------------------
int __fastcall Function_22245e4(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  v2 = a2;
  if ( !dword_2250D18[20] )
    return 0;
  v4 = *(uchar *)(a1 + 2);
  if ( v4 > dword_2250D18[22] )
    return 0;
  v5 = a2 - 1;
  MI_CpuCopy8(a1 + 3, dword_2250D18[20] + 32 * (a2 - 1) + v4 * dword_2250D18[21], dword_2250D18[21], dword_2250D18[20]);
  *(uint *)(dword_2250D18[20] + 480 + 4 * v5) |= 1 << v4;
  if ( Function_2224670(v2) )
    result = dword_2250D18[20] + 32 * v5;
  else
    result = 0;
  return result;
}

//----- (02224670) --------------------------------------------------------
int __fastcall Function_2224670(int a1)
{
  int v1;
  bool v3;
  bool v4;
  uchar v5;

  v1 = 0;
  if ( dword_2250D18[22] <= 0 )
    return 1;
  while ( *(uint *)(dword_2250D18[20] + 4 * (a1 - 1) + 480) & (1 << v1) )
  {
    v5 = __OFSUB__(dword_2250D18[22], (v1 + 1) & 0xFFFF);
    v3 = dword_2250D18[22] == ((v1 + 1) & 0xFFFF);
    v4 = dword_2250D18[22] - ((v1 + 1) & 0xFFFF) < 0;
    v1 = (v1 + 1) & 0xFFFF;
    if ( (uchar)(v4 ^ v5) | v3 )
      return 1;
  }
  return 0;
}

//----- (022246C4) --------------------------------------------------------
int Function_22246c4()
{
  return ((int (*)(void))dword_22511A0[624])();
}

//----- (022246D4) --------------------------------------------------------
int Function_22246d4()
{
  return ((int (*)(void))dword_22511A0[627])();
}

//----- (022246E4) --------------------------------------------------------
int __fastcall Function_22246e4(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int result;
  int v6;
  int v7;

  v1 = a1;
  v2 = *(short *)(a1 + 262);
  if ( v2
    && v2 >= -1
    && *(short *)(v1 + 264) >= -1
    && *(ushort *)(v1 + 266)
    && *(short *)(v1 + 266) >= -1
    && *(short *)(v1 + 268) >= -1
    && *(short *)(v1 + 270) >= -1
    && (v3 = *(ushort *)(v1 + 4), *(ushort *)(v1 + 4))
    && v3 <= 0x100
    && !*(uchar *)(v1 + v3 - 1 + 6) )
  {
    v4 = 0;
  }
  else
  {
    v4 = -1;
  }
  if ( !dword_22511A0[624] || !dword_22511A0[627] )
    v4 = -1;
  if ( v4 == -1 )
  {
    *(uchar *)(v1 + 278) = 15;
    Function_2225204(278);
    result = -1;
  }
  else
  {
    dword_2250D18[29] = Function_22246c4();
    if ( dword_2250D18[29] )
    {
      Function_22255ac(-1);
      v6 = Function_22247d4(v1);
      v7 = Function_22246d4();
      Function_2225204(v7);
      result = v6;
    }
    else
    {
      *(uchar *)(v1 + 278) = 15;
      Function_2225204(278);
      result = -1;
    }
  }
  return result;
}

//----- (022247D4) --------------------------------------------------------
int __fastcall Function_22247d4(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int i;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  ushort v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char v30;
  int v31;
  uint v32;
  int v33;
  uint v34;
  int v35;
  int v36;
  int v37;
  int v38;
  char v39;
  char v40;
  short v41;
  int v42;
  uint v43;
  int v44;
  char v45;
  int v46;
  char v47;
  int v48;
  int v49;
  short v50;
  short v51;
  short v52;
  short v53;
  int v54;
  int v55;
  char v56;
  char v57;
  int v58;

  v58 = a4;
  v31 = a1;
  v52 = -1;
  v53 = -1;
  v50 = 0;
  v37 = 0;
  v51 = 0;
  v49 = 1;
  v48 = 0;
  v35 = 0;
  Function_2226754(&v57, 0, 24);
  v52 = *(ushort *)(v31 + 262);
  if ( v52 == -1 )
    v52 = 10;
  v50 = *(ushort *)(v31 + 266);
  if ( v50 == -1 )
    v50 = 10;
  v53 = *(ushort *)(v31 + 264);
  if ( v53 == -1 )
    v53 = 100;
  v51 = *(ushort *)(v31 + 268);
  if ( v51 == -1 )
    v51 = 100;
  v32 = *(short *)(v31 + 270);
  if ( v32 == -1 )
    v32 = 2000;
  Function_2225230(v31);
  if ( (dword_2250D18[35] & 1) != 1 )
  {
    Function_2225288(19);
    *(uchar *)(v31 + 278) = 15;
    Function_2225204(v31);
    return -1;
  }
  v5 = 0;
  Function_22255ac(0);
  v6 = v53;
  v7 = v52;
  while ( 1 )
  {
    if ( dword_2250D18[25] )
    {
      Function_22246d4();
      dword_2250D18[25] = 0;
    }
    if ( Function_2226b8c(&dword_2250D18[25]) == -1 )
    {
      *(uchar *)(v31 + 278) = 15;
      Function_2225204(v31);
      return -1;
    }
    v8 = Function_22254bc(dword_2250D18[25]);
    if ( v8 == 4 )
    {
      *(uchar *)(v31 + 278) = 2;
      Function_2225204(v31);
      return -1;
    }
    if ( !v8 )
      break;
    if ( v5 >= v7 )
    {
      *(uchar *)(v31 + 278) = 1;
      Function_2225204(v31);
      return -1;
    }
    Function_2226ed4(v6);
    v5 = (short)(v5 + 1);
  }
  Function_22255ac(1);
  Function_2226754(&v56, 0, 60);
  if ( Function_2225538(&v56) )
  {
    *(uchar *)(v31 + 278) = 15;
    Function_2225204(v31);
    return -1;
  }
  v9 = Function_22246c4();
  dword_2250D18[27] = v9;
  if ( !v9 )
  {
    *(uchar *)(v31 + 278) = 15;
    Function_2225204(v31);
    return -1;
  }
  Function_2226754(v9, 0, 88);
  v10 = v52;
  for ( i = 0; i < v10; i = (short)(i + 1) )
  {
    v12 = Function_2226d04(&v56, dword_2250D18[27]);
    if ( v12 == -1 )
    {
      *(uchar *)(v31 + 278) = 15;
      Function_2225204(v31);
      return -1;
    }
    if ( !v12 && *(uint *)dword_2250D18[27] == 1 )
      break;
    Function_2226ed4(v6);
  }
  if ( i == v52 )
  {
    *(uchar *)(v31 + 278) = 15;
    Function_2225204(v31);
    return -1;
  }
  if ( Function_22266a8() )
  {
    Function_2225288(12);
    *(uchar *)(v31 + 278) = 15;
    Function_2225204(v31);
    return -1;
  }
  Function_2225204(0);
  Function_222557c(3, &v57, v31 + 272);
  v13 = Function_22267dc();
  dword_2249794 = v13;
  if ( v13 < 0 )
  {
    *(uchar *)(v31 + 278) = 15;
    Function_2225204(v31);
    return -1;
  }
  if ( Function_22267d8(v13) < 0 )
  {
    Function_2225288(11);
    *(uchar *)(v31 + 278) = 15;
    Function_2225204(v31);
    return -1;
  }
  Function_2226754(&v39, 0, 8);
  v40 = 2;
  v42 = Function_22267f8(-1062728859);
  v41 = Function_2226820(22416);
  if ( Function_22267e4(-1, &v39, 8) < 0 )
  {
    *(uchar *)(v31 + 278) = 15;
    Function_2225204(v31);
    return -1;
  }
LABEL_46:
  Function_2226754(&v54, 0, 20);
  v55 = -1062728859;
  v54 = -1062728959;
  v34 = s32_div_f(v32, 1000);
  s32_div_f(v32, 1000);
  v33 = 1000 * v14;
  v15 = v52;
  while ( 1 )
  {
    if ( v37 != 1 || SLOBYTE(dword_2250D18[39]) == 1 )
      goto LABEL_86;
    dword_2249794 = -1;
    if ( Function_2226700() )
    {
      *(uchar *)(v31 + 278) = 15;
      Function_2225204(v31);
      return -1;
    }
    dword_2250D18[25] = Function_22246c4();
    if ( !dword_2250D18[25] )
    {
      *(uchar *)(v31 + 278) = 15;
      Function_2225204(v31);
      return -1;
    }
    while ( 1 )
    {
      if ( dword_2250D18[25] )
      {
        Function_22246d4();
        dword_2250D18[25] = 0;
      }
      v38 = Function_2226b8c(&dword_2250D18[25]);
      if ( v38 == -1 )
      {
        *(uchar *)(v31 + 278) = 15;
        Function_2225204(v31);
        return -1;
      }
      v16 = Function_22254bc(dword_2250D18[25]);
      if ( v16 == 4 )
      {
        *(uchar *)(v31 + 278) = 2;
        Function_2225204(v31);
        return -1;
      }
      if ( !v16 )
        break;
      if ( i >= v15 )
      {
        *(uchar *)(v31 + 278) = 1;
        Function_2225204(v31);
        return -1;
      }
      Function_2226ed4(v6);
      i = (short)(i + 1);
    }
    if ( v38 == -1 )
    {
      *(uchar *)(v31 + 278) = 15;
      Function_2225204(v31);
      return -1;
    }
    v17 = Function_22246c4();
    dword_2250D18[27] = v17;
    if ( !v17 )
    {
      *(uchar *)(v31 + 278) = 15;
      Function_2225204(v31);
      return -1;
    }
    Function_2226754(v17, 0, 88);
    i = 0;
    if ( v15 > 0 )
      break;
LABEL_76:
    if ( i == v15 )
    {
      *(uchar *)(v31 + 278) = 15;
      Function_2225204(v31);
      return -1;
    }
    v35 = Function_22251ec(dword_2250D18[37], dword_2250D18[38]);
    if ( Function_22266a8() )
    {
      Function_2225288(12);
      *(uchar *)(v31 + 278) = 15;
      Function_2225204(v31);
      return -1;
    }
    LOBYTE(dword_2250D18[39]) = 1;
    Function_2225204(&dword_2250D18[32]);
    v19 = Function_22267dc();
    dword_2249794 = v19;
    if ( v19 < 0 )
    {
      *(uchar *)(v31 + 278) = 15;
      Function_2225204(v31);
      return -1;
    }
    if ( Function_22267d8(v19) < 0 )
    {
      Function_2225288(11);
      *(uchar *)(v31 + 278) = 15;
      Function_2225204(v31);
      return -1;
    }
    Function_2226754(&v39, 0, 8);
    v40 = 2;
    v42 = Function_22267f8(v35);
    v41 = Function_2226820(22416);
    if ( Function_22267e4(-1, &v39, 8) < 0 )
    {
      *(uchar *)(v31 + 278) = 15;
      Function_2225204(v31);
      return -1;
    }
LABEL_86:
    if ( Function_2225e90(v37, &v54, &v57, -1) == -1 )
    {
      Function_2225288(v37 + 4096);
      *(uchar *)(v31 + 278) = 15;
      Function_2225204(v31);
      return -1;
    }
    Function_2226754(dword_2250D18[29], 0, 1528);
    Function_22268fc(&v45);
    Function_2226908(-1, &v45);
    v43 = v34;
    v44 = v33;
    if ( Function_2226774(0, &v45) > 0 )
    {
      v46 = 8;
      v21 = Function_2226760(-1, dword_2250D18[29] + 12, 1500, 0, &v47, &v46);
      *(uint *)dword_2250D18[29] = -1;
      *(uint *)(dword_2250D18[29] + 4) = Function_2226860(v21);
      v22 = Function_22255d8(v37);
      v36 = v22;
      if ( v22 == 100 )
      {
        v20 = 0;
        goto LABEL_144;
      }
      v20 = -1;
      if ( v22 == -1 )
        goto LABEL_144;
      if ( v37 != v22 )
      {
        if ( v22 == 2 )
        {
          dword_2249794 = -1;
          if ( Function_2226700() )
          {
            *(uchar *)(v31 + 278) = 15;
            Function_2225204(v31);
            return -1;
          }
          v23 = 0;
          Function_22255ac(4);
          v24 = v52;
          while ( 1 )
          {
            if ( dword_2250D18[25] )
            {
              Function_22246d4();
              dword_2250D18[25] = 0;
            }
            if ( Function_2226b8c(&dword_2250D18[25]) == -1 )
            {
              *(uchar *)(v31 + 278) = 15;
              Function_2225204(v31);
              return -1;
            }
            v25 = Function_22254bc(dword_2250D18[25]);
            if ( v25 == 4 )
            {
              *(uchar *)(v31 + 278) = 2;
              Function_2225204(v31);
              return -1;
            }
            if ( !v25 )
              break;
            if ( v23 >= v24 )
            {
              *(uchar *)(v31 + 278) = 1;
              Function_2225204(v31);
              return -1;
            }
            Function_2226ed4(v6);
            v23 = (short)(v23 + 1);
          }
          v26 = Function_22246c4();
          dword_2250D18[27] = v26;
          if ( !v26 )
          {
            *(uchar *)(v31 + 278) = 15;
            Function_2225204(v31);
            return -1;
          }
          Function_2226754(v26, 0, 88);
          v27 = v52;
          i = 0;
          if ( v52 > 0 )
          {
            while ( 1 )
            {
              v28 = Function_2226d04(&v56, dword_2250D18[27]);
              if ( v28 == -1 )
                break;
              if ( v28 || *(uint *)dword_2250D18[27] != 1 )
              {
                Function_2226ed4(v6);
                i = (short)(i + 1);
                if ( i < v27 )
                  continue;
              }
              goto LABEL_125;
            }
            *(uchar *)(v31 + 278) = 15;
            Function_2225204(v31);
            return -1;
          }
LABEL_125:
          if ( i == v52 )
          {
            *(uchar *)(v31 + 278) = 15;
            Function_2225204(v31);
            return -1;
          }
          if ( Function_22266a8() )
          {
            Function_2225288(12);
            *(uchar *)(v31 + 278) = 15;
            Function_2225204(v31);
            return -1;
          }
          Function_2225204(0);
          v29 = Function_22267dc();
          dword_2249794 = v29;
          if ( v29 < 0 )
          {
            *(uchar *)(v31 + 278) = 15;
            Function_2225204(v31);
            return -1;
          }
          if ( Function_22267d8(v29) < 0 )
          {
            Function_2225288(11);
            *(uchar *)(v31 + 278) = 15;
            Function_2225204(v31);
            return -1;
          }
          Function_2226754(&v39, 0, 8);
          v40 = 2;
          v42 = Function_22267f8(v35);
          v41 = Function_2226820(22416);
          if ( Function_22267e4(-1, &v39, 8) < 0 )
          {
            *(uchar *)(v31 + 278) = 15;
            Function_2225204(v31);
            return -1;
          }
        }
        v37 = v36;
        goto LABEL_46;
      }
      v37 = v22;
      if ( v48 > v50 )
      {
        if ( v22 )
        {
          if ( v22 == 1 )
            Function_2225288(16);
          else
            Function_2225288(17);
        }
        else
        {
          Function_2225288(15);
        }
        v20 = -1;
        goto LABEL_144;
      }
      Function_2226ed4(v51);
      goto LABEL_46;
    }
    if ( ++v48 > v50 )
    {
      if ( v37 )
      {
        if ( v37 == 1 )
          Function_2225288(16);
        else
          Function_2225288(17);
      }
      else
      {
        Function_2225288(15);
      }
      v20 = -1;
LABEL_144:
      dword_2249794 = -1;
      if ( Function_2226700() )
      {
        *(uchar *)(v31 + 278) = 15;
        Function_2225204(v31);
        result = -1;
      }
      else if ( v20 )
      {
        switch ( (uchar)Function_2225294() )
        {
          case 0xFu:
            v30 = 3;
            break;
          case 0x10u:
            v30 = 4;
            break;
          case 0x11u:
            v30 = 5;
            break;
          case 0x14u:
            v30 = 7;
            break;
          case 0x15u:
            v30 = 8;
            break;
          default:
            v30 = 15;
            break;
        }
        *(uchar *)(v31 + 278) = v30;
        Function_2225204(v31);
        result = -1;
      }
      else if ( ((int (__fastcall *)())Function_22252a0)() )
      {
        *(uchar *)(v31 + 278) = 6;
        Function_2225204(v31);
        result = -1;
      }
      else
      {
        result = 0;
      }
      return result;
    }
    Function_2226ed4(v51);
  }
  while ( 1 )
  {
    v18 = Function_2226d04(&v56, dword_2250D18[27]);
    if ( v18 == -1 )
      break;
    if ( v18 || *(uint *)dword_2250D18[27] != 1 )
    {
      Function_2226ed4(v6);
      i = (short)(i + 1);
      if ( i < v15 )
        continue;
    }
    goto LABEL_76;
  }
  *(uchar *)(v31 + 278) = 15;
  Function_2225204(v31);
  return -1;
}

//----- (022251EC) --------------------------------------------------------
uint __fastcall Function_22251ec(int a1, int a2)
{
  int v2;
  int v3;
  uint result;

  v2 = a1 & a2;
  v3 = ~a2;
  result = ((a1 & v3) + 1) | v2;
  if ( result >= (v3 | (uint)v2) )
    result = v2 | 1;
  return result;
}

//----- (02225204) --------------------------------------------------------
int *Function_2225204()
{
  int *result;

  if ( dword_2250D18[27] )
  {
    Function_22246d4();
    dword_2250D18[27] = 0;
  }
  result = (int *)dword_2250D18[25];
  if ( dword_2250D18[25] )
  {
    Function_22246d4();
    result = &dword_2250D18[24];
    dword_2250D18[25] = 0;
  }
  return result;
}

//----- (02225230) --------------------------------------------------------
int *__fastcall Function_2225230(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  Function_2226754(&dword_22511A0[590], 0, 8);
  dword_2250D18[28] = 1;
  Function_2226754(&dword_2250D18[33], 0, 28);
  dword_2250D18[33] = v1 + 6;
  dword_2250D18[34] = *(ushort *)(v1 + 4);
  dword_2250D18[35] = *(ushort *)v1 & 0xF;
  result = &dword_2250D18[32];
  BYTE1(dword_2250D18[39]) = *(uchar *)(v1 + 2);
  dword_2250D18[36] = 0;
  dword_2250D18[37] = -1062728959;
  LOBYTE(dword_2250D18[39]) = 0;
  return result;
}

//----- (02225288) --------------------------------------------------------
int __fastcall Function_2225288(int result)
{
  dword_2250D18[28] = result;
  return result;
}

//----- (02225294) --------------------------------------------------------
int Function_2225294()
{
  return dword_2250D18[28];
}

//----- (022252A0) --------------------------------------------------------
int __fastcall Function_22252a0(ushort *a1)
{
  ushort *v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  if ( a1 == (ushort *)-279 )
    return -1;
  *a1 = dword_2250D18[35] & LOWORD(dword_2250D18[36]);
  Function_2226754((char *)a1 + 279, 0, 340);
  if ( *v1 & 1 )
  {
    Function_2226744((char *)v1 + 279, &dword_22511A0[180], dword_22511A0[169]);
    Function_2226744((char *)v1 + 285, &dword_22511A0[196], dword_22511A0[169]);
    Function_2226744((char *)v1 + 291, &dword_22511A0[212], dword_22511A0[169]);
    Function_2226744((char *)v1 + 297, &dword_22511A0[228], dword_22511A0[169]);
    v3 = Function_2226878(&dword_22511A0[170]);
    if ( Function_2225498(&dword_22511A0[170], v3) )
      goto LABEL_18;
    v4 = Function_2226878(&dword_22511A0[170]);
    Function_2226744((char *)v1 + 303, &dword_22511A0[170], v4);
  }
  if ( *v1 & 2 )
  {
    Function_2226744(v1 + 168, &dword_22511A0[256], dword_22511A0[245]);
    Function_2226744(v1 + 175, &dword_22511A0[272], dword_22511A0[245]);
    Function_2226744(v1 + 182, &dword_22511A0[288], dword_22511A0[245]);
    Function_2226744(v1 + 189, &dword_22511A0[304], dword_22511A0[245]);
    v5 = Function_2226878(&dword_22511A0[246]);
    if ( Function_2225498(&dword_22511A0[246], v5) )
      goto LABEL_18;
    v6 = Function_2226878(&dword_22511A0[246]);
    Function_2226744(v1 + 196, &dword_22511A0[246], v6);
  }
  if ( *v1 & 4 )
  {
    if ( Function_2225498(&dword_22511A0[332], dword_22511A0[321] - 1) )
      goto LABEL_18;
    Function_2226744((char *)v1 + 425, &dword_22511A0[332], dword_22511A0[321]);
    v7 = Function_2226878(&dword_22511A0[322]);
    if ( Function_2225498(&dword_22511A0[322], v7) )
      goto LABEL_18;
    v8 = Function_2226878(&dword_22511A0[322]);
    Function_2226744((char *)v1 + 489, &dword_22511A0[322], v8);
  }
  if ( !(*v1 & 8) )
  {
LABEL_17:
    result = 0;
    *((uchar *)v1 + 278) = 0;
    return result;
  }
  if ( !Function_2225498(&dword_22511A0[360], dword_22511A0[349] - 1) )
  {
    Function_2226744(v1 + 261, &dword_22511A0[360], dword_22511A0[349]);
    v9 = Function_2226878(&dword_22511A0[350]);
    if ( !Function_2225498(&dword_22511A0[350], v9) )
    {
      v10 = Function_2226878(&dword_22511A0[350]);
      Function_2226744(v1 + 293, &dword_22511A0[350], v10);
      goto LABEL_17;
    }
  }
LABEL_18:
  Function_2226754((char *)v1 + 279, 0, 340);
  return -1;
}

//----- (02225498) --------------------------------------------------------
int __fastcall Function_2225498(uchar *a1, int a2)
{
  int v2;
  uint v3;

  v2 = 0;
  if ( a2 <= 0 )
    return 0;
  while ( 1 )
  {
    v3 = *a1++;
    if ( v3 < 0x20 || v3 > 0x7F )
      break;
    if ( ++v2 >= a2 )
      return 0;
  }
  return -1;
}

//----- (022254BC) --------------------------------------------------------
int __fastcall Function_22254bc(uint *a1)
{
  uint *v1;
  uint v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = *a1;
  v3 = 0;
  v9 = 0;
  v8 = v2;
  if ( !v2 )
    return 5;
  if ( v2 > 0x40 )
    v8 = 64;
  v5 = 0;
  if ( v8 > 0 )
  {
    v6 = (int)(v1 + 2);
    do
    {
      if ( v1[21] & 1 )
      {
        if ( v1[1] == Function_2226878("ESSID-AOSS") )
        {
          v7 = Function_2226878("ESSID-AOSS");
          if ( !Function_2226724(v6, "ESSID-AOSS", v7) )
            ++v3;
        }
      }
      ++v5;
      v1 += 21;
      v6 += 84;
    }
    while ( v5 < v8 );
  }
  if ( v3 > 1 )
    v9 = 4;
  if ( !v3 )
    v9 = 5;
  return v9;
}

//----- (02225538) --------------------------------------------------------
int __fastcall Function_2225538(uint *a1)
{
  uint *v1;
  uint v2;

  v1 = a1;
  *a1 = Function_2226878("ESSID-AOSS");
  Function_2226744(v1 + 1, "ESSID-AOSS", *v1);
  v1[9] = 1;
  v2 = Function_2226878("MELCO");
  v1[10] = v2;
  if ( v2 > 0xD )
    return -1;
  Function_2226744(v1 + 11, "MELCO", v2);
  return 0;
}

//----- (0222557C) --------------------------------------------------------
int __fastcall Function_222557c(int result, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int i;
  int v7;

  v3 = result;
  v4 = a2;
  v5 = a3;
  for ( i = 0; i < v3; v4 += 8 )
  {
    v7 = Function_2226744(v4, v5, 6);
    *(ushort *)(v4 + 6) = Function_222688c(v7);
    result = Function_2226820(*(ushort *)(v4 + 6));
    *(ushort *)(v4 + 6) = result;
    ++i;
  }
  return result;
}

//----- (022255AC) --------------------------------------------------------
int __fastcall Function_22255ac(int a1)
{
  int result;

  if ( a1 == -1 )
  {
    dword_2249798 = -1;
    result = 0;
  }
  else if ( a1 == -1 )
  {
    result = 0;
  }
  else
  {
    dword_2249798 = a1;
    result = Function_2226edc();
  }
  return result;
}

//----- (022255D8) --------------------------------------------------------
int __fastcall Function_22255d8(int a1, int a2, uint *a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  int result;
  int v9;
  int v10;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v10 = a4;
  v7 = a2 + 12;
  if ( (uint)Function_2226860(*(ushort *)(a2 + 12)) >= 1 )
  {
    if ( *(uchar *)(v7 + 15) == 17 )
    {
      if ( Function_22258d0(v4 + 12) <= 0 )
      {
        v9 = Function_2226860(*(ushort *)(v7 + 6));
        switch ( v9 )
        {
          case 4112:
            v5 = Function_2225678(v5, v4, v6, v10);
            break;
          case 8208:
            v5 = Function_2225754(v5, v4, v6, v10);
            break;
          case 12304:
            v5 = Function_222582c(v5, v4, v6, v10);
            break;
        }
        result = v5;
      }
      else
      {
        ++*v6;
        result = v5;
      }
    }
    else
    {
      ++*v6;
      result = v5;
    }
  }
  else
  {
    ++*v6;
    result = v5;
  }
  return result;
}

//----- (02225678) --------------------------------------------------------
int __fastcall Function_2225678(int result, int a2, uint *a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  uchar *v7;
  int v8;
  int v9;
  int v10;

  v4 = result;
  v5 = a3;
  if ( result )
  {
    ++*a3;
  }
  else
  {
    v6 = a2 + 12;
    v7 = (uchar *)(a2 + 36);
    if ( Function_2225a08(a4, a2 + 28) >= 0 )
    {
      if ( Function_2226860(*((ushort *)v7 + 1)) )
      {
        v8 = *v7;
        if ( v8 == 7 )
        {
          if ( Function_2226838(*((uint *)v7 + 1)) == -2 )
          {
            Function_2225288(20);
          }
          else if ( Function_2226838(*((uint *)v7 + 1)) == -3 )
          {
            Function_2225288(21);
          }
          else
          {
            Function_2225288(24);
          }
          result = -1;
        }
        else if ( v8 == 1 )
        {
          v9 = Function_2225a54(v7 + 4, &dword_2250D18[40]);
          if ( v9 >= 0 )
          {
            v10 = Function_2226860(*(ushort *)(v6 + 12));
            dword_2250D18[24] = Function_2225e80(v10);
            *v5 = 0;
            result = 1;
          }
          else if ( v9 == -2 )
          {
            Function_2225288(22);
            result = -1;
          }
          else
          {
            ++*v5;
            result = v4;
          }
        }
        else
        {
          ++*v5;
          result = v4;
        }
      }
      else
      {
        ++*v5;
        result = v4;
      }
    }
    else
    {
      ++*v5;
      result = v4;
    }
  }
  return result;
}

//----- (02225754) --------------------------------------------------------
int __fastcall Function_2225754(int result, int a2, uint *a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;

  v4 = result;
  v5 = a3;
  if ( result == 1 )
  {
    v6 = a2 + 12;
    v7 = a2 + 36;
    if ( Function_2225a08(a4 + 8, a2 + 28) >= 0 )
    {
      if ( Function_2226860(*(ushort *)(v7 + 2)) )
      {
        if ( *(uchar *)v7 == 7 )
        {
          if ( Function_2226838(*(uint *)(v7 + 4)) == -2 )
          {
            Function_2225288(20);
          }
          else if ( Function_2226838(*(uint *)(v7 + 4)) == -3 )
          {
            Function_2225288(21);
          }
          else
          {
            Function_2225288(24);
          }
          result = -1;
        }
        else
        {
          Function_2226754(&dword_22511A0[166], 0, 1696);
          v8 = Function_2226860(*(ushort *)(v6 + 10));
          if ( Function_2225d70(0, v7, v8, &dword_22511A0[166]) >= 0 )
          {
            if ( dword_2250D18[35] & dword_2250D18[36] )
            {
              *v5 = 0;
              result = 2;
            }
            else
            {
              result = v4;
            }
          }
          else
          {
            ++*v5;
            result = v4;
          }
        }
      }
      else
      {
        ++*v5;
        result = v4;
      }
    }
    else
    {
      ++*v5;
      result = v4;
    }
  }
  else
  {
    ++*a3;
  }
  return result;
}

//----- (0222582C) --------------------------------------------------------
int __fastcall Function_222582c(int result, int a2, uint *a3, int a4)
{
  int v4;
  uint *v5;
  int v6;

  v4 = result;
  v5 = a3;
  if ( result == 2 )
  {
    v6 = a2 + 36;
    if ( Function_2225a08(a4 + 16, a2 + 28) >= 0 )
    {
      if ( *(uchar *)v6 == 7 )
      {
        if ( Function_2226860(*(ushort *)(v6 + 2)) )
        {
          if ( Function_2226838(*(uint *)(v6 + 4)) )
          {
            if ( Function_2226838(*(uint *)(v6 + 4)) == -2 )
            {
              Function_2225288(20);
              result = -1;
            }
            else
            {
              if ( Function_2226838(*(uint *)(v6 + 4)) == -3 )
                Function_2225288(21);
              else
                Function_2225288(24);
              result = -1;
            }
          }
          else
          {
            result = 100;
          }
        }
        else
        {
          ++*v5;
          result = v4;
        }
      }
      else
      {
        ++*v5;
        result = v4;
      }
    }
    else
    {
      ++*v5;
      result = v4;
    }
  }
  else
  {
    ++*a3;
  }
  return result;
}

//----- (022258D0) --------------------------------------------------------
int __fastcall Function_22258d0(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;

  v1 = a1;
  v2 = (ushort *)(a1 + 24);
  Function_2226744(&v9, a1 + 16, 8);
  v3 = Function_2226878("MELCO");
  if ( Function_222657c(&v9, 8, "MELCO", v3) == -1 )
  {
    Function_2225288(2);
    result = -100;
  }
  else
  {
    v5 = Function_2226860(*(ushort *)(v1 + 6));
    result = Function_22259c4(v5, &v9);
    if ( !result )
    {
      if ( Function_2226860(*(ushort *)(v1 + 6)) == 4096 )
        Function_2226744(&dword_22511A0[590], &v9, 8);
      if ( Function_2226860(*(ushort *)(v1 + 12)) & 0xF )
      {
        v6 = Function_2226860(*v2);
        v7 = Function_22246c4();
        v8 = v7;
        if ( v7 )
        {
          if ( Function_222638c(v2 + 2, v7, v6, *(uchar *)(v1 + 14), v2 + 1, &dword_22511A0[590], 8) >= 0 )
          {
            Function_2226744(v2, v8, v6);
            *(ushort *)(v1 + 10) = Function_2226820((ushort)v6);
            Function_22246d4();
            result = 0;
          }
          else
          {
            Function_22246d4();
            if ( Function_2225294() == 2 )
              result = 100;
            else
              result = 200;
          }
        }
        else
        {
          Function_2225288(2);
          result = 100;
        }
      }
      else
      {
        result = 0;
      }
    }
  }
  return result;
}

//----- (022259C4) --------------------------------------------------------
int __fastcall Function_22259c4(int a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;

  v2 = 0;
  v3 = &dword_22511A0[590];
  v4 = 0;
  v5 = 0;
  while ( !*(uchar *)v3 )
  {
    ++v5;
    v3 = (int *)((char *)v3 + 1);
    if ( v5 >= 6 )
      goto LABEL_5;
  }
  v4 = 1;
LABEL_5:
  if ( v4 )
  {
    if ( Function_2226724(&dword_22511A0[590], a2, 6) )
      v2 = 1;
  }
  else if ( a1 != 4096 )
  {
    v2 = 2;
  }
  return v2;
}

//----- (02225A08) --------------------------------------------------------
int __fastcall Function_2225a08(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = Function_2226878("MELCO");
  Function_222657c(v3, 8, "MELCO", v5);
  if ( Function_2226724(v2, v3, 6) )
    return -1;
  v6 = Function_2226860(*(ushort *)(v2 + 6));
  if ( v6 + 1 != Function_2226860(*(ushort *)(v3 + 6)) )
    v4 = -2;
  return v4;
}

//----- (02225A54) --------------------------------------------------------
int __fastcall Function_2225a54(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v2 = a2;
  v3 = a1;
  Function_2226754(a2, 0, 260);
  v4 = v3;
  while ( 2 )
  {
    v5 = Function_2226860(*(ushort *)(v4 + 2));
    if ( v5 <= 0 )
      return -1;
    switch ( *(uchar *)v4 )
    {
      case 0:
        Function_2226744(v2, v4 + 6, v5);
        goto LABEL_13;
      case 1:
        Function_2226744(v2 + 128, v4 + 6, v5);
        goto LABEL_13;
      case 2:
        Function_2226744(v2 + 256, v4 + 6, v5);
        goto LABEL_13;
      case 3:
      case 4:
        if ( Function_2226860(*(uchar *)(v4 + 6)) > 0 )
          goto LABEL_13;
        return -2;
      case 5:
        v7 = Function_2225b10(v4 + 6, v5);
        dword_2250D18[37] = Function_2226838(v7);
        goto LABEL_13;
      case 6:
        v8 = Function_2225b10(v4 + 6, v5);
        dword_2250D18[38] = Function_2226838(v8);
LABEL_13:
        if ( *(ushort *)(v4 + 4) )
        {
          v4 = v3 + Function_2226860(*(ushort *)(v4 + 4));
          continue;
        }
        return 0;
      default:
        return -1;
    }
  }
}

//----- (02225B10) --------------------------------------------------------
int __fastcall Function_2225b10(int a1, int a2)
{
  int v2;
  uchar *v3;
  int i;
  int v5;

  v2 = 0;
  v3 = (uchar *)(a1 + a2 - 1);
  for ( i = 0; i < a2; v2 = (v2 << 8) + v5 )
  {
    v5 = *v3;
    ++i;
    --v3;
  }
  return v2;
}

//----- (02225B34) --------------------------------------------------------
int __fastcall Function_2225b34(int a1, int a2)
{
  int v2;
  uchar *v3;
  uint v4;
  int v5;
  int v7;
  int i;

  v2 = a2;
  v3 = (uchar *)(a1 + 6);
  v7 = a2 + 112;
  for ( i = a1 + 6; ; v3 = (uchar *)(i + Function_2226860(*((ushort *)v3 + 2))) )
  {
    v4 = Function_2226860(*((ushort *)v3 + 1));
    v5 = *v3;
    if ( v5 > 33 )
      JUMPOUT((char *)&off_2225B88 + 18);
    if ( v5 >= 33 )
    {
      if ( v4 > 0xD )
        return -1;
    }
    else
    {
      if ( v5 > 21 )
        JUMPOUT((char *)&off_2225B88 + 12);
      if ( v5 - 16 >= 0 )
        JUMPOUT(__CS__, *((short *)&off_2225B88 + v5 - 16) + 35806090);
    }
    if ( v5 > 33 )
      JUMPOUT((char *)&off_2225BEC + 18);
    if ( v5 < 33 )
      break;
    Function_2226744(v7, v3 + 6, v4);
    *(uint *)(v2 + 4) = v4;
    if ( !*((ushort *)v3 + 2) )
      return 0;
  }
  if ( v5 > 21 )
    JUMPOUT((char *)&off_2225BEC + 12);
  if ( v5 - 16 >= 0 )
    JUMPOUT(__CS__, *((short *)&off_2225BEC + v5 - 16) + 35806190);
  return -1;
}

//----- (02225C88) --------------------------------------------------------
int __fastcall Function_2225c88(int a1, int a2)
{
  int v2;
  uchar *v3;
  int v4;
  uint v5;
  int v6;
  int v8;
  int i;

  v2 = a2;
  v3 = (uchar *)(a1 + 6);
  v8 = a2 + 8;
  v4 = a2 + 48;
  for ( i = a1 + 6; ; v3 = (uchar *)(i + Function_2226860(*((ushort *)v3 + 2))) )
  {
    v5 = Function_2226860(*((ushort *)v3 + 1));
    v6 = *v3;
    if ( v6 > 53 )
    {
      if ( v6 <= 64 )
      {
        if ( v6 != 64 )
          goto LABEL_15;
        goto LABEL_11;
      }
      if ( v6 != 69 )
        goto LABEL_15;
    }
    else if ( v6 < 53 )
    {
      if ( v6 != 48 )
        goto LABEL_15;
LABEL_11:
      if ( v5 > 0x40 )
        return -1;
      goto LABEL_15;
    }
    if ( v5 > 0x21 )
      return -1;
LABEL_15:
    if ( v6 > 53 )
    {
      if ( v6 <= 64 )
      {
        if ( v6 != 64 )
          return -1;
        goto LABEL_24;
      }
      if ( v6 != 69 )
        return -1;
    }
    else if ( v6 < 53 )
    {
      if ( v6 != 48 )
        return -1;
LABEL_24:
      Function_2226744(v4, v3 + 6, v5);
      *(uint *)(v2 + 4) = v5;
      goto LABEL_30;
    }
    if ( v5 && v3[v5 + 5] )
      return -1;
    Function_2226744(v8, v3 + 6, v5);
LABEL_30:
    if ( !*((ushort *)v3 + 2) )
      break;
  }
  return 0;
}

//----- (02225D40) --------------------------------------------------------
int __fastcall Function_2225d40(int a1, int a2)
{
  uchar *v2;
  int v3;
  int v4;

  v2 = (uchar *)(a1 + 6);
  v3 = a2;
  v4 = Function_2226860(*(ushort *)(a1 + 8));
  if ( v4 <= 0 )
    return -1;
  if ( *v2 != 112 )
    return -1;
  Function_2226744(v3, v2 + 6, v4);
  return 0;
}

//----- (02225D70) --------------------------------------------------------
int __fastcall Function_2225d70(int a1, uchar *a2, int a3, int a4, int a5)
{
  int v5;
  uchar *v6;
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

  v5 = a3;
  v15 = a1;
  v6 = a2;
  v7 = 0;
  v16 = a4;
  if ( a3 <= 0 )
    return -2;
  while ( *v6 != (uchar)asc_2249790[v15] )
  {
    v9 = Function_2226860(*((ushort *)v6 + 1)) + 4;
    v5 -= v9;
    v6 += v9;
    if ( v5 <= 0 )
      return -4;
  }
  v10 = *((ushort *)v6 + 1);
  v11 = (int)(v6 + 4);
  v12 = Function_2226860(v10);
  v13 = v16 + 848 * v15;
  while ( 1 )
  {
    switch ( *(uchar *)v11 )
    {
      case 3:
        result = Function_2225b34(v11, v16 + 848 * v15 + 8);
        v7 |= 1u;
        break;
      case 4:
        result = Function_2225b34(v11, v13 + 312);
        v7 |= 2u;
        break;
      case 5:
        result = Function_2225c88(v11, v13 + 616);
        v7 |= 4u;
        break;
      case 6:
        result = Function_2225c88(v11, v13 + 728);
        v7 |= 8u;
        break;
      case 0xA:
        result = Function_2225d40(v11, a5 + ((v15 + 3) << 7));
        break;
      default:
        result = -3;
        break;
    }
    if ( result )
      break;
    v14 = Function_2226860(*(ushort *)(v11 + 2)) + 4;
    v12 -= v14;
    v11 += v14;
    if ( v12 <= 0 )
    {
      dword_2250D18[36] |= v7;
      return 0;
    }
  }
  return result;
}

//----- (02225E80) --------------------------------------------------------
int __fastcall Function_2225e80(char a1)
{
  int v1;

  v1 = 0;
  if ( a1 & 0x10 )
    v1 = 1;
  return v1;
}

//----- (02225E90) --------------------------------------------------------
int __fastcall Function_2225e90(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      Function_22255ac(3);
      result = Function_2226028(v4, v5, v6);
    }
    else if ( a1 == 2 )
    {
      Function_22255ac(5);
      result = Function_2226104(v4, v5, v6);
    }
    else
    {
      result = -1;
    }
  }
  else
  {
    Function_22255ac(2);
    result = Function_2225ee4(v4, v5, v6);
  }
  return result;
}

//----- (02225EE4) --------------------------------------------------------
int __fastcall Function_2225ee4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  char v9;
  short v10;
  ushort v11;
  short v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v9 = 0;
  v11 = 0;
  v10 = 0;
  v8 = a3;
  Function_2226754(dword_2250D18[29], 0, 1500);
  v5 = Function_22246c4();
  v6 = v5;
  if ( v5 )
  {
    Function_2226754(v5, 0, 528);
    Function_2226744(&dword_22511A0[590], v4, 8);
    Function_2226744(&v12, &dword_22511A0[590], 8);
    v11 = Function_2226170(v6 + 4);
    if ( (v11 & 0x8000u) == 0 )
    {
      *(uchar *)v6 = 0;
      *(ushort *)(v6 + 2) = Function_2226820(v11);
      v11 += 4;
      Function_22261fc(0, dword_2250D18[29] + 24, v6, &v11, &v10, &v9);
      v10 |= 0x10u;
      if ( Function_222657c(&v12, 8, "MELCO", 6) )
      {
        Function_2225288(2);
        if ( v6 )
          Function_22246d4();
        result = -1;
      }
      else
      {
        Function_2226250(dword_2250D18[29], 4096, (short)v11, v10, v9, 17, &v12);
        v11 += 24;
        Function_22262a8(dword_2250D18[29], (short)v11, 255, v8);
        if ( v6 )
          Function_22246d4();
        result = 0;
      }
    }
    else
    {
      Function_2225288(3);
      if ( v6 )
        Function_22246d4();
      result = -1;
    }
  }
  else
  {
    Function_2225288(2);
    result = -1;
  }
  return result;
}

//----- (02226028) --------------------------------------------------------
int __fastcall Function_2226028(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  char v7;
  short v8;
  short v9;
  char v10;
  char v11;
  short v12;
  int v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a2;
  v7 = 0;
  v8 = 0;
  v5 = a3;
  Function_2226754(&v10, 0, 8);
  Function_2226754(dword_2250D18[29], 0, 1500);
  v10 = 2;
  v11 = 0;
  v12 = Function_2226820(4);
  v13 = dword_2250D18[35];
  v13 = Function_22267f8(dword_2250D18[35]);
  v9 = 8;
  Function_22261fc(dword_2250D18[24], dword_2250D18[29] + 24, &v10, &v9, &v8, &v7);
  Function_2226744(&v14, v4 + 8, 8);
  if ( Function_222657c(&v14, 8, "MELCO", 6) )
  {
    Function_2225288(2);
    result = -1;
  }
  else
  {
    Function_2226250(dword_2250D18[29], 0x2000, v9, v8, v7, 17, &v14);
    v9 += 24;
    Function_22262a8(dword_2250D18[29], v9, 0, v5);
    result = 0;
  }
  return result;
}

//----- (02226104) --------------------------------------------------------
int __fastcall Function_2226104(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char v8;
  int v9;

  v9 = a4;
  v4 = a3;
  v5 = a2;
  Function_2226754(dword_2250D18[29], 0, 1500);
  Function_2226744(&v8, v5 + 16, 8);
  v6 = Function_2226878("MELCO");
  Function_222657c(&v8, 8, "MELCO", v6);
  Function_2226250(dword_2250D18[29], 12288, 0, 0, 0, 17, &v8);
  Function_22262a8(dword_2250D18[29], 24, 0, v4);
  return 0;
}

//----- (02226170) --------------------------------------------------------
int __fastcall Function_2226170(uchar *a1)
{
  uchar *v1;
  int v2;
  int v3;
  int v5;

  v1 = a1;
  *a1 = BYTE1(dword_2250D18[39]);
  a1[1] = 1;
  Function_2226744(a1 + 6, dword_2250D18[33], SLOWORD(dword_2250D18[34]));
  *((ushort *)v1 + 1) = Function_2226820(dword_2250D18[34] & 0xFFFF);
  v2 = (short)(2 * (((short)(LOWORD(dword_2250D18[34]) + 6) + 1) / 2));
  *((ushort *)v1 + 2) = Function_2226820((ushort)v2);
  v1[v2] = 96;
  v3 = (int)&v1[v2];
  v1[v2 + 1] = 0;
  *(ushort *)(v3 + 4) = Function_2226820(0);
  v5 = Function_22267f8(14);
  Function_2226744(&v1[v2 + 6], &v5, 4);
  *(ushort *)(v3 + 2) = Function_2226820(4);
  return (short)(v2 + 10);
}

//----- (022261FC) --------------------------------------------------------
int __fastcall Function_22261fc(int a1, ushort *a2, int a3, short *a4, ushort *a5, int a6)
{
  ushort *v6;
  ushort *v7;
  int result;

  v6 = a2;
  v7 = a4;
  if ( a1 != 1 )
    return Function_2226744(a2, a3, *a4);
  *a5 = 1;
  Function_2226310(a3, a2 + 2, *a4, a6, a2 + 1, &dword_22511A0[590], 8);
  *v6 = Function_2226820((ushort)*v7);
  result = (short)*v7 + 4;
  *v7 = result;
  return result;
}

//----- (02226250) --------------------------------------------------------
int __fastcall Function_2226250(ushort *a1, ushort a2, ushort a3, ushort a4, char a5, char a6, int a7)
{
  ushort *v7;
  ushort v8;
  ushort v9;
  ushort v10;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  *a1 = Function_2226820(1);
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = Function_2226820(v8);
  v7[4] = 0;
  v7[5] = Function_2226820(v9);
  v7[6] = Function_2226820(v10);
  *((uchar *)v7 + 14) = a5;
  *((uchar *)v7 + 15) = a6;
  return Function_2226744(v7 + 8, a7, 8);
}

//----- (022262A8) --------------------------------------------------------
int __fastcall Function_22262a8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  char v9;
  char v10;
  short v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  Function_2226754(&v9, 0, 8);
  v10 = 2;
  v11 = Function_2226820(22416);
  v12 = Function_22267f8(dword_2250D18[37]);
  if ( v6 == 255 || !LOBYTE(dword_2250D18[39]) )
    v12 = -1;
  return Function_22267c8(v7, v4, v5, 0, &v9, 8);
}

//----- (02226310) --------------------------------------------------------
int __fastcall Function_2226310(int a1, int a2, int a3, uchar *a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  short v12;
  char v13;
  int v14;

  v7 = a3;
  v8 = a2;
  v9 = a1;
  *a4 = Function_22264e4();
  v10 = Function_22246c4();
  v14 = v10;
  if ( !v10 )
    return -1;
  v12 = Function_222688c(v10);
  Function_2226744(a5, &v12, 2);
  Function_2226744(&dword_22511A0[592], a5, 2);
  Function_2226744(35986146, a6, a7);
  Function_2226414(&v13, &dword_22511A0[592], a7 + 2, v7);
  Function_2226478(&v13, v8, v9, v7);
  Function_22246d4();
  return 0;
}

//----- (0222638C) --------------------------------------------------------
int __fastcall Function_222638c(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  char v12;
  int v13;
  int v14;

  v14 = a4;
  v7 = a3;
  v8 = a1;
  v9 = a2;
  v10 = a4;
  v13 = Function_22246c4();
  if ( v13 )
  {
    Function_2226744(&dword_22511A0[592], a5, 2);
    Function_2226744(35986146, a6, a7);
    Function_2226414(&v12, &dword_22511A0[592], a7 + 2, v7);
    Function_2226478(&v12, v9, v8, v7);
    if ( Function_22264e4(v9, v7) == v10 )
    {
      Function_22246d4();
      result = 0;
    }
    else
    {
      Function_2225288(18);
      Function_22246d4();
      result = -1;
    }
  }
  else
  {
    Function_2225288(2);
    result = -1;
  }
  return result;
}

//----- (02226414) --------------------------------------------------------
uint __fastcall Function_2226414(uint *a1, int a2, uint a3, uint a4)
{
  int v4;
  uint *v5;
  uint v6;
  uint result;
  int v8;
  uint v9;
  uint v10;
  int v11;
  char v12;
  uint *v13;
  int v14;
  uint v15;
  uint v16;

  v13 = a1;
  v14 = a2;
  v4 = a1[2];
  v5 = a1;
  v6 = 0;
  v5[1] = 0;
  v15 = a3;
  *v5 = 0;
  v5[3] = a4;
  v16 = a4;
  if ( a4 )
  {
    do
    {
      *(uchar *)(v4 + v6) = v6;
      ++v6;
    }
    while ( v6 < a4 );
  }
  result = a4;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a4 )
  {
    do
    {
      v11 = *(uchar *)(v4 + v10);
      u32_div_f(v11 + v8 + *(uchar *)(v14 + v9), v13[3]);
      v12 = *(uchar *)(v4 + v8);
      ++v9;
      *(uchar *)(v4 + v8) = v11;
      *(uchar *)(v4 + v10) = v12;
      if ( v9 >= v15 )
        v9 = 0;
      result = v16;
      ++v10;
    }
    while ( v10 < v16 );
  }
  return result;
}

//----- (02226478) --------------------------------------------------------
int __fastcall Function_2226478(int result, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  uint v6;
  uint v7;
  int v8;

  v8 = result;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = 0;
  if ( a4 )
  {
    do
    {
      result = *(uchar *)(v5 + v7) ^ (uchar)Function_22264a4(v8);
      *(uchar *)(v4 + v7++) = result;
    }
    while ( v7 < v6 );
  }
  return result;
}

//----- (022264A4) --------------------------------------------------------
int __fastcall Function_22264a4(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uchar v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = a1[2];
  v3 = a1[3];
  u32_div_f(*a1 + 1, v3);
  v5 = v4;
  v6 = *(uchar *)(v2 + v4);
  u32_div_f(v6 + v1[1], v3);
  v7 = (uchar)v7;
  v8 = *(uchar *)(v2 + (uchar)v7);
  *v1 = v5;
  v1[1] = (uchar)v7;
  *(uchar *)(v2 + v7) = v6;
  *(uchar *)(v2 + v5) = v8;
  u32_div_f(v6 + v8, v1[3]);
  return *(uchar *)(v2 + v9);
}

//----- (022264E4) --------------------------------------------------------
int __fastcall Function_22264e4(int a1, int a2)
{
  return ~Function_222650c(-1, a1, a2, 0) & 0xFF;
}

//----- (0222650C) --------------------------------------------------------
uint __fastcall Function_222650c(uint a1, int a2, int a3, int a4, int a5)
{
  uint v5;
  int v6;
  int v7;
  int i;
  int v9;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  if ( !a4 )
    Function_2226544(0, a5);
  for ( i = 0; i < v7; v5 = (v5 >> 8) ^ *(uint *)(a5 + (4 * (v9 ^ v5) & 0x3FF)) )
    v9 = *(uchar *)(v6 + i++);
  return v5;
}

//----- (02226544) --------------------------------------------------------
int __fastcall Function_2226544(int a1, uint *a2)
{
  int result;
  uint v3;
  int v4;

  result = 0;
  do
  {
    v3 = result;
    v4 = 0;
    do
    {
      if ( v3 & 1 )
        v3 = (v3 >> 1) ^ 0xEDB88320;
      else
        v3 >>= 1;
      ++v4;
    }
    while ( v4 < 8 );
    ++result;
    *a2 = v3;
    ++a2;
  }
  while ( result < 256 );
  return result;
}

//----- (0222657C) --------------------------------------------------------
int __fastcall Function_222657c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a1;
  v9 = a3;
  v10 = a4;
  v6 = Function_22246c4();
  if ( !v6 )
    return -1;
  v11 = Function_22246c4();
  if ( v11 )
  {
    v8 = 0;
    do
    {
      Function_22265f8(v8, v6, v4, v9, v10);
      Function_222662c(v6, v5, v4);
      Function_2226650(v5, v4, v11);
      ++v8;
    }
    while ( v8 < 2 );
    Function_22246d4();
    Function_22246d4();
    result = 0;
  }
  else
  {
    Function_22246d4();
    result = -1;
  }
  return result;
}

//----- (022265F8) --------------------------------------------------------
int __fastcall Function_22265f8(uint a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  char v10;

  v5 = a2;
  v6 = a3 / 2;
  v7 = a4;
  s32_div_f(a1, a5);
  for ( result = 0; result < v6; ++result )
  {
    *(uchar *)(v5 + result) = result;
    v10 = *(uchar *)(v7 + v8++);
    *(uchar *)(v5 + result) ^= v10;
    if ( v8 >= a5 )
      v8 = 0;
  }
  return result;
}

//----- (0222662C) --------------------------------------------------------
int __fastcall Function_222662c(int result, int a2, int a3)
{
  int v3;
  int v4;
  uchar *v5;
  char v6;

  v3 = a3 / 2;
  v4 = 0;
  if ( a3 / 2 > 0 )
  {
    v5 = (uchar *)(a2 + v3);
    do
    {
      v6 = *(uchar *)(result + v4++);
      *v5++ ^= v6;
    }
    while ( v4 < v3 );
  }
  return result;
}

//----- (02226650) --------------------------------------------------------
int __fastcall Function_2226650(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a1;
  v5 = a2 / 2;
  v6 = a3;
  Function_2226744(a3, a1 + a2 / 2, a2 / 2);
  Function_2226744(v6 + v5, v4, v5);
  return Function_2226744(v4, v6, v3);
}

//----- (02226680) --------------------------------------------------------
int __fastcall Function_2226680(int a1, int a2)
{
  int result;

  if ( a2 <= 0 )
    result = 0;
  else
    result = ((int (__fastcall *)(int))dword_22511A0[624])(a2);
  return result;
}

//----- (02226698) --------------------------------------------------------
int __fastcall Function_2226698(int a1, int a2)
{
  return ((int (__fastcall *)(int))dword_22511A0[627])(a2);
}

//----- (022266A8) --------------------------------------------------------
int __fastcall Function_22266a8(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a2;
  v4 = a3;
  dword_22497AC = Function_22267f8(a1);
  dword_22497B0 = Function_22267f8(v3);
  dword_22497B4 = Function_22267f8(v4);
  if ( ((int (__fastcall *)(int *))dword_2208874[0])(dword_224979C) < 0 )
    return -1;
  while ( !dword_221DE40[0] )
    OS_Sleep(0x64u);
  return 0;
}

//----- (02226700) --------------------------------------------------------
int Function_2226700()
{
  int result;

  if ( ((int (*)(void))dword_22089E8[0])() >= 0 )
    result = -(Function_2226b54() != 0);
  else
    result = -1;
  return result;
}

//----- (02226724) --------------------------------------------------------
int __fastcall Function_2226724(uchar *a1, uchar *a2, int a3)
{
  int v3;
  int v4;

  v3 = 0;
  while ( 1 )
  {
    v4 = a3--;
    if ( v4 <= 0 )
      break;
    v3 = *a1 - *a2;
    if ( *a1 != *a2 )
      break;
    ++a1;
    ++a2;
  }
  return v3;
}

//----- (02226744) --------------------------------------------------------
int __fastcall Function_2226744(uint a1, int a2, uint a3)
{
  return MI_CpuCopy8(a2, a1, a3, (uint)MI_CpuCopy8);
}

//----- (02226754) --------------------------------------------------------
ushort *__fastcall Function_2226754(ushort *a1, uchar a2, uint a3)
{
  return MI_CpuFill8(a1, a2, a3);
}

//----- (02226760) --------------------------------------------------------
int __fastcall Function_2226760(int a1, int a2, int a3, int a4, uchar *a5, uint *a6)
{
  *a5 = *a6;
  return ((int (*)(void))dword_22083FC[0])();
}

//----- (02226774) --------------------------------------------------------
int __fastcall Function_2226774(int a1, int *a2, int a3, int a4, int *a5)
{
  int v5;
  long long v6;
  int v7;
  int v8;
  long long v9;
  int v11;
  int v12;

  v5 = a2[1];
  v11 = *a2;
  v12 = v5;
  v6 = ll_mul(*a5, 33514000LL);
  v7 = v6 >> 6;
  v8 = HIDWORD(v6) >> 6;
  v9 = ll_mul(a5[1], 33514000LL);
  return ((int (__fastcall *)(int *, int, uint, int, int, int))dword_2208B18[0])(
           &v11,
           1,
           v7 + (ull)(v9 >> 6),
           (HIDWORD(v9) >> 6) + __CFADD__(v7, (uint)(v9 >> 6)) + v8,
           v11,
           v12);
}

//----- (022267C8) --------------------------------------------------------
int __fastcall Function_22267c8(int a1, int a2, int a3, int a4, uchar *a5, char a6)
{
  *a5 = a6;
  return ((int (*)(void))dword_22084B0[0])();
}

//----- (022267D8) --------------------------------------------------------
void Function_22267d8()
{
  ;
}

//----- (022267DC) --------------------------------------------------------
void Function_22267dc()
{
  JUMPOUT(dword_2208324);
}

//----- (022267E4) --------------------------------------------------------
void __fastcall Function_22267e4(int a1, uchar *a2, char a3)
{
  *a2 = a3;
  JUMPOUT(dword_2208350);
}

//----- (022267F0) --------------------------------------------------------
void Function_22267f0()
{
  JUMPOUT(dword_2208540);
}

//----- (022267F8) --------------------------------------------------------
uint __fastcall Function_22267f8(uint a1)
{
  return (a1 >> 8) & 0xFF00 | (a1 >> 24) | (a1 << 8) & 0xFF0000 | (a1 << 24) & 0xFF000000;
}

//----- (02226820) --------------------------------------------------------
int __fastcall Function_2226820(int a1)
{
  return ((a1 << 8) & 0xFF00 | (a1 >> 8) & 0xFF) & 0xFFFF;
}

//----- (02226838) --------------------------------------------------------
uint __fastcall Function_2226838(uint a1)
{
  return (a1 >> 8) & 0xFF00 | (a1 >> 24) | (a1 << 8) & 0xFF0000 | (a1 << 24) & 0xFF000000;
}

//----- (02226860) --------------------------------------------------------
int __fastcall Function_2226860(int a1)
{
  return ((a1 << 8) & 0xFF00 | (a1 >> 8) & 0xFF) & 0xFFFF;
}

//----- (02226878) --------------------------------------------------------
int __fastcall Function_2226878(uchar *a1)
{
  int v1;

  v1 = 0;
  if ( *a1 )
  {
    do
      ++v1;
    while ( a1[v1] );
  }
  return v1;
}

//----- (0222688C) --------------------------------------------------------
int __fastcall Function_222688c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  if ( !dword_2250D18[26] )
  {
    v4 = 0;
    Function_2226754(&v6, 0, 0xCu);
    if ( !RTC_GetTime((int)&v6) )
      v4 = (v6 << 10) + 8 * v7 + v8;
    dword_2250D18[30] = v4;
    dword_2250D18[31] = 1566083941;
    dword_2250D18[32] = 2531011;
    dword_2250D18[26] = 1;
  }
  dword_2250D18[30] = dword_2250D18[32] + dword_2250D18[30] * dword_2250D18[31];
  return (ushort)(0x7FFF * ((uint)dword_2250D18[30] >> 16) >> 16) >> 8;
}

//----- (022268FC) --------------------------------------------------------
int __fastcall Function_22268fc(int result)
{
  *(uint *)result = 0;
  *(ushort *)(result + 4) = 0;
  *(ushort *)(result + 6) = 0;
  return result;
}

//----- (02226908) --------------------------------------------------------
int __fastcall Function_2226908(int a1, int a2)
{
  int result;

  *(uint *)a2 = a1;
  result = 1;
  *(ushort *)(a2 + 4) = 1;
  return result;
}

//----- (02226910) --------------------------------------------------------
int __fastcall Function_2226910(ushort *a1, uint *a2, int a3, short a4)
{
  ushort *v4;
  uint *v5;
  short v6;
  int v7;
  short *v8;
  int v9;
  int v10;
  int result;

  v4 = a1;
  v5 = a2;
  *a2 = (ushort)a1[5];
  MIi_CpuCopy16((int)(a1 + 6), (int)(a2 + 1), 32, a4);
  v5[9] = (ushort)v4[27];
  MIi_CpuCopy16((int)(v4 + 2), (int)(v5 + 12), 6, v6);
  v7 = 0;
  v8 = &word_2249808;
  v9 = 0;
  do
  {
    if ( (ushort)*v8 & v4[24] )
    {
      *((uchar *)v5 + v7 + 60) = *((uchar *)v8 + 2);
      if ( (ushort)*v8 & v4[23] )
        *((uchar *)v5 + v7 + 60) |= 0x80u;
      ++v7;
    }
    ++v9;
    v8 += 2;
  }
  while ( v9 < 12 );
  v5[14] = v7;
  v5[19] = (ushort)v4[25];
  v10 = v4[22] & 3;
  if ( v10 == 1 )
  {
    result = 1;
    v5[20] = 1;
  }
  else if ( v10 == 2 )
  {
    result = 2;
    v5[20] = 2;
  }
  else
  {
    result = 0;
    v5[20] = 0;
  }
  return result;
}

//----- (0222699C) --------------------------------------------------------
int __fastcall Function_222699c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint v4;

  v2 = a1;
  v3 = a2;
  MIi_CpuClear16(0, a2 + 12, 32);
  *(ushort *)(v3 + 10) = *v2;
  return MI_CpuCopy8((int)(v2 + 1), v3 + 12, *(ushort *)(v3 + 10), v4);
}

//----- (022269C0) --------------------------------------------------------
int __fastcall Function_22269c0(int *a1, ushort *a2, int a3)
{
  *a1 = a3;
  return Function_2226910(a2, a1 + 1, a3, (uint)Function_2226910);
}

//----- (022269D0) --------------------------------------------------------
int __fastcall Function_22269d0(int a1)
{
  return OS_SendMessage(&dword_22511A0[632], a1, 0);
}

//----- (022269E4) --------------------------------------------------------
int __fastcall Function_22269e4(int a1)
{
  return OS_SendMessage(&dword_22511A0[632], a1, 0);
}

//----- (022269F8) --------------------------------------------------------
int __fastcall Function_22269f8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a2;
  v6 = 1;
  OS_InitMessageQueue(&dword_22511A0[632], (int)&dword_22511A0[628], 4);
  if ( !v4 || !v5 )
    return -1;
  v8 = OS_DisableInterrupts();
  dword_22511A0[624] = v4;
  dword_22511A0[627] = v5;
  OS_RestoreInterrupts(v8);
  dword_22511A0[626] = ((int (__fastcall *)(int))dword_22511A0[624])(22672);
  if ( !dword_22511A0[626] )
    return -1;
  if ( !Function_2227494(Function_22269d0) )
    v6 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      OS_ReceiveMessage(&dword_22511A0[632], &v9, 1);
      switch ( (uchar)v9 )
      {
        case 4:
        case 5:
          goto LABEL_12;
        case 6:
          return 0;
        default:
          v6 = 0;
LABEL_12:
          if ( !v6 )
            goto LABEL_13;
          break;
      }
    }
  }
LABEL_13:
  ((void (__fastcall *)(int))dword_22511A0[627])(dword_22511A0[626]);
  return -1;
}

//----- (02226ABC) --------------------------------------------------------
int __fastcall Function_2226abc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  int v8;

  v8 = a4;
  v4 = 1;
  v5 = -1;
  if ( !dword_22511A0[627] )
    return -1;
  if ( !Function_22273b8() )
    return -1;
  do
  {
    OS_ReceiveMessage(&dword_22511A0[632], &v8, 1);
    switch ( (uchar)v8 )
    {
      case 4:
      case 5:
        break;
      case 0x14:
        v4 = 0;
        v5 = 0;
        ((void (__fastcall *)(int))dword_22511A0[627])(dword_22511A0[626]);
        break;
      default:
        v4 = 0;
        break;
    }
  }
  while ( v4 );
  v7 = OS_DisableInterrupts();
  dword_22511A0[624] = 0;
  dword_22511A0[627] = 0;
  OS_RestoreInterrupts(v7);
  return v5;
}

//----- (02226B54) --------------------------------------------------------
int __fastcall Function_2226b54(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;

  v6 = a4;
  v4 = -1;
  if ( Function_2227380() )
  {
    OS_ReceiveMessage(&dword_22511A0[632], &v6, 1);
    if ( v6 == 14 )
      v4 = 0;
  }
  return v4;
}

//----- (02226B8C) --------------------------------------------------------
int __fastcall Function_2226b8c(int **a1)
{
  int v1;
  int v2;
  int v3;
  ushort *v5;
  int *v6;
  int v7;
  short v8;
  int v9;
  uint *v10;
  int **v11;
  ushort *v12;
  int v13;
  int v14;
  int v15;
  char v16;

  v11 = a1;
  v14 = -1;
  v13 = 1;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  if ( !dword_22511A0[624] || !dword_22511A0[627] )
    return -1;
  v5 = (ushort *)((int (__fastcall *)(int))dword_22511A0[624])(12288);
  if ( !v5 )
    return -1;
  v12 = v5;
  if ( Function_2227254() )
  {
    OS_CreateAlarm(&v16);
    OS_SetAlarm(&v16, 0x3FEC42u, 0, (int)Function_22269e4, 19);
    while ( 2 )
    {
      OS_ReceiveMessage(&dword_22511A0[632], &v15, 1);
      switch ( (uchar)v15 )
      {
        case 4:
        case 8:
        case 0x12:
          goto LABEL_20;
        case 5:
          if ( v1 )
            goto LABEL_20;
          if ( v3 >= 8 )
          {
            v2 = Function_2227210(v5, 64);
            if ( !Function_2227344() )
              goto LABEL_28;
            v1 = 1;
          }
          else
          {
            ++v3;
          }
LABEL_20:
          if ( v13 )
            continue;
          if ( v2 )
          {
            v6 = (int *)((int (__fastcall *)(int))dword_22511A0[624])(84 * (v2 - 1) + 88);
            if ( !v6 )
              goto LABEL_28;
          }
          else
          {
            v6 = (int *)((int (__fastcall *)(int))dword_22511A0[624])(88);
            if ( !v6 )
              goto LABEL_28;
          }
          v9 = 0;
          *v11 = v6;
          *v6 = v2;
          if ( v2 > 0 )
          {
            v10 = v6 + 1;
            do
            {
              Function_2226910(v5, v10, v7, v8);
              ++v9;
              v5 += 96;
              v10 += 21;
            }
            while ( v9 < v2 );
          }
LABEL_28:
          Function_20c3bb4(&v16);
          while ( OS_ReceiveMessage(&dword_22511A0[632], &v15, 0) == 1 )
            ;
          break;
        case 0xA:
          v13 = 0;
          v14 = 0;
          goto LABEL_20;
        case 0x13:
          if ( v1 )
            goto LABEL_20;
          if ( v3 )
            v2 = Function_2227210(v5, 64);
          if ( !Function_2227344() )
            goto LABEL_28;
          v1 = 1;
          goto LABEL_20;
        default:
          goto LABEL_28;
      }
      break;
    }
  }
  ((void (__fastcall *)(ushort *))dword_22511A0[627])(v12);
  return v14;
}

//----- (02226D04) --------------------------------------------------------
int __fastcall Function_2226d04(uint *a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v13;
  int i;
  int *v15;
  int v16;
  int v17;
  int v18;
  char v19;
  int v20;

  v20 = a4;
  v5 = 1;
  v6 = a1;
  v17 = -1;
  v7 = a1[9];
  v8 = 0;
  v15 = a2;
  if ( v7 )
  {
    if ( v7 == 1 )
      v4 = 786432;
  }
  else
  {
    v4 = 0x80000;
  }
  v9 = v4 | 0x30000;
  MI_CpuFill8(&dword_22511A0[688], 0, 0x60u);
  v11 = v6[10];
  switch ( v11 )
  {
    case 5:
      LOBYTE(dword_22511A0[688]) = 1;
      break;
    case 13:
      LOBYTE(dword_22511A0[688]) = 2;
      break;
    case 16:
      LOBYTE(dword_22511A0[688]) = 3;
      break;
    default:
      return -1;
  }
  BYTE1(dword_22511A0[688]) = 0;
  v13 = MI_CpuCopy8((int)(v6 + 11), (uint)&dword_22511A0[688] + 2, v6[10], v10);
  ((void (__fastcall *)(int))dword_2214E34[0])(v13);
  if ( Function_2227254(0, v6 + 1, *v6, 3194878) )
  {
    v16 = 0;
    OS_CreateAlarm(&v19);
    OS_SetAlarm(&v19, 0x3FEC42u, 0, (int)Function_22269e4, 18);
LABEL_34:
    while ( v5 )
    {
      OS_ReceiveMessage(&dword_22511A0[632], &v18, 1);
      switch ( (uchar)v18 )
      {
        case 4:
        case 8:
        case 0x13:
          goto LABEL_34;
        case 5:
          if ( !v8 )
          {
            Function_20c3bb4(&v19);
            if ( Function_2227210(&dword_22511A0[640], 1) == 1 )
            {
              Function_222699c(v6, (int)&dword_22511A0[640]);
              for ( i = 0; i < HIWORD(dword_22511A0[642]); ++i )
                ;
              if ( Function_2227410(&dword_22511A0[640], &dword_22511A0[688], v9) )
                v8 = 1;
              else
                v5 = 0;
            }
            else
            {
              v5 = 0;
            }
          }
          break;
        case 0xA:
          Function_222699c(v6, (int)&dword_22511A0[640]);
          if ( !Function_2227410(&dword_22511A0[640], &dword_22511A0[688], v9) )
            v5 = 0;
          break;
        case 0xC:
          v5 = 0;
          v17 = 0;
          break;
        case 0xD:
          if ( ++v16 >= 3 )
          {
            v5 = 0;
          }
          else if ( !Function_2227410(&dword_22511A0[640], &dword_22511A0[688], v9) )
          {
            v5 = 0;
          }
          break;
        case 0x12:
          if ( !v8 )
            v5 = 0;
          break;
        default:
          v5 = 0;
          break;
      }
    }
    Function_20c3bb4(&v19);
    while ( OS_ReceiveMessage(&dword_22511A0[632], &v18, 0) == 1 )
      ;
  }
  Function_22269c0(v15, &dword_22511A0[640], v17 == 0);
  return v17;
}

//----- (02226ED4) --------------------------------------------------------
uint __fastcall Function_2226ed4(uint a1)
{
  return OS_Sleep(a1);
}

//----- (02226EDC) --------------------------------------------------------
int Function_2226edc()
{
  if ( dword_22511A0[625] )
    ((void (*)(void))dword_22511A0[625])();
  return 0;
}

//----- (02226EF0) --------------------------------------------------------
int *__fastcall Function_2226ef0(int *result)
{
  uint v1;

  if ( result )
  {
    v1 = *(short *)result;
    if ( v1 <= 7 )
      JUMPOUT(__CS__, *((short *)&off_2226F0E + v1) + 35811088);
    switch ( (uchar)v1 )
    {
      case 1:
        if ( *((ushort *)result + 1) )
        {
          result = &dword_22511A0[712];
          dword_22511A0[718] = 1;
          if ( dword_22511A0[719] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(2, 0);
        }
        else
        {
          result = (int *)dword_22511A0[718];
          switch ( dword_22511A0[718] )
          {
            case 4:
              result = (int *)3;
              dword_22511A0[718] = 3;
              if ( dword_22511A0[719] )
                result = (int *)((int (__fastcall *)(int))dword_22511A0[719])(6);
              break;
            case 6:
              result = (int *)((int (__fastcall *)(int, int, int))dword_221312C[0])(
                                dword_22511A0[716],
                                dword_22511A0[717],
                                dword_22511A0[713]);
              if ( result != (int *)3 )
              {
                result = &dword_22511A0[712];
                dword_22511A0[718] = 3;
                if ( dword_22511A0[719] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(2, 0);
              }
              break;
            case 8:
              result = (int *)((int (__fastcall *)(int, int, int))dword_2213368[0])(
                                dword_22511A0[720],
                                dword_22511A0[721],
                                dword_22511A0[715]);
              if ( result != (int *)3 )
              {
                result = &dword_22511A0[712];
                dword_22511A0[718] = 3;
                if ( dword_22511A0[719] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(2, 0);
              }
              break;
          }
        }
        break;
      case 2:
        if ( *((ushort *)result + 1) )
        {
          result = &dword_22511A0[712];
          dword_22511A0[718] = 3;
          if ( dword_22511A0[719] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(2, 0);
        }
        else
        {
          result = (int *)dword_22511A0[718];
          if ( dword_22511A0[718] == 2 )
          {
            ((void (*)(void))dword_2212DE0[0])();
            result = &dword_22511A0[712];
            dword_22511A0[718] = 0;
            if ( dword_22511A0[719] )
              result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(20, 0);
          }
        }
        break;
      case 3:
        if ( *((ushort *)result + 1) )
        {
          result = &dword_22511A0[712];
          dword_22511A0[718] = 3;
          if ( dword_22511A0[719] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(9, 0);
        }
        else
        {
          result = &dword_22511A0[712];
          if ( dword_22511A0[718] == 6 )
          {
            dword_22511A0[718] = 5;
            if ( dword_22511A0[719] )
              result = (int *)((int (__fastcall *)(int))dword_22511A0[719])(8);
          }
        }
        break;
      case 4:
        if ( *((ushort *)result + 1) )
        {
          result = &dword_22511A0[712];
          dword_22511A0[718] = 3;
          if ( dword_22511A0[719] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(11, 0);
        }
        else
        {
          result = (int *)dword_22511A0[718];
          switch ( dword_22511A0[718] )
          {
            case 4:
              result = (int *)3;
              dword_22511A0[718] = 3;
              if ( dword_22511A0[719] )
                result = (int *)((int (__fastcall *)(int))dword_22511A0[719])(10);
              break;
            case 6:
              result = (int *)((int (__fastcall *)(int, int, int))dword_221312C[0])(
                                dword_22511A0[716],
                                dword_22511A0[717],
                                dword_22511A0[713]);
              if ( result != (int *)3 )
              {
                result = &dword_22511A0[712];
                dword_22511A0[718] = 3;
                if ( dword_22511A0[719] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(2, 0);
              }
              break;
            case 2:
              result = (int *)((int (*)(void))dword_221303C[0])();
              if ( result != (int *)3 )
              {
                result = &dword_22511A0[712];
                dword_22511A0[718] = 3;
                if ( dword_22511A0[719] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(2, 0);
              }
              break;
            case 8:
              result = (int *)((int (__fastcall *)(int, int, int))dword_2213368[0])(
                                dword_22511A0[720],
                                dword_22511A0[721],
                                dword_22511A0[715]);
              if ( result != (int *)3 )
              {
                result = &dword_22511A0[712];
                dword_22511A0[718] = 3;
                if ( dword_22511A0[719] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(2, 0);
              }
              break;
          }
        }
        break;
      case 5:
        if ( *((ushort *)result + 1) )
        {
          result = &dword_22511A0[712];
          dword_22511A0[718] = 3;
          if ( dword_22511A0[719] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(13, 0);
        }
        else
        {
          result = &dword_22511A0[712];
          if ( dword_22511A0[718] == 8 )
          {
            dword_22511A0[718] = 7;
            if ( dword_22511A0[719] )
              result = (int *)((int (__fastcall *)(int))dword_22511A0[719])(12);
          }
        }
        break;
      case 6:
        if ( *((ushort *)result + 1) )
        {
          result = &dword_22511A0[712];
          dword_22511A0[718] = 3;
          if ( dword_22511A0[719] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(15, 0);
        }
        else
        {
          switch ( dword_22511A0[718] )
          {
            case 4:
              result = (int *)3;
              dword_22511A0[718] = 3;
              if ( dword_22511A0[719] )
                result = (int *)((int (__fastcall *)(int))dword_22511A0[719])(14);
              break;
            case 6:
              result = (int *)((int (__fastcall *)(int, int, int))dword_221312C[0])(
                                dword_22511A0[716],
                                dword_22511A0[717],
                                dword_22511A0[713]);
              if ( result != (int *)3 )
              {
                result = &dword_22511A0[712];
                dword_22511A0[718] = 3;
                if ( dword_22511A0[719] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(2, 0);
              }
              break;
            case 2:
              result = (int *)((int (*)(void))dword_221303C[0])();
              if ( result != (int *)3 )
              {
                result = &dword_22511A0[712];
                dword_22511A0[718] = 3;
                if ( dword_22511A0[719] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(2, 0);
              }
              break;
            case 8:
              result = (int *)((int (__fastcall *)(int, int, int))dword_2213368[0])(
                                dword_22511A0[720],
                                dword_22511A0[721],
                                dword_22511A0[715]);
              if ( result != (int *)3 )
              {
                result = &dword_22511A0[712];
                dword_22511A0[718] = 3;
                if ( dword_22511A0[719] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(2, 0);
              }
              break;
            default:
              result = (int *)3;
              dword_22511A0[718] = 3;
              break;
          }
        }
        break;
      case 7:
        result = &dword_22511A0[712];
        if ( dword_22511A0[718] == 5 && dword_22511A0[719] )
          result = (int *)((int (__fastcall *)(int))dword_22511A0[719])(5);
        break;
      default:
        result = &dword_22511A0[712];
        if ( dword_22511A0[719] )
          result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[719])(1, 0);
        break;
    }
  }
  return result;
}

//----- (022271A8) --------------------------------------------------------
int Function_22271a8()
{
  int result;

  switch ( LOBYTE(dword_22511A0[718]) )
  {
    case 1:
      if ( ((int (__fastcall *)(int, int *(__fastcall *)(int *)))dword_2212E38[0])(dword_22511A0[714], Function_2226ef0) == 3 )
        goto LABEL_9;
      result = 0;
      break;
    case 5:
      if ( ((int (*)(void))dword_221312C[0])() == 3 )
        goto LABEL_9;
      result = 0;
      break;
    case 7:
      if ( ((int (__stdcall *)(int, int *))dword_221356C[0])(dword_22511A0[718], &dword_22511A0[712]) == 3 )
LABEL_9:
        result = 1;
      else
        result = 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02227210) --------------------------------------------------------
int __fastcall Function_2227210(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;

  v2 = a1;
  v3 = a2;
  v4 = ((int (__fastcall *)(int))dword_2214EE0[0])(1);
  v5 = ((int (__fastcall *)(int))dword_2214E88[0])(v4);
  v6 = v5;
  if ( v5 > 0 )
  {
    v7 = 0;
    if ( v5 > 0 )
    {
      do
      {
        if ( v7 >= v3 )
          break;
        v8 = (int *)((int (__fastcall *)(uint))dword_2214F5C[0])((ushort)v7);
        MI_CpuCopy32(v8, v2, 192);
        ++v7;
        v2 += 48;
      }
      while ( v7 < v6 );
    }
  }
  ((void (__fastcall *)(uint))dword_2214EE0[0])(0);
  return v6;
}

//----- (02227254) --------------------------------------------------------
int __fastcall Function_2227254(char *a1, char *a2, int a3, int a4)
{
  int v4;
  char *v5;
  char *v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  char v11;
  int v12;
  int *v13;
  char v14;
  char *v15;

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = OS_DisableInterrupts();
  dword_22511A0[713] = v4;
  if ( v5 )
  {
    v9 = &dword_22511A0[722];
    v10 = 0;
    do
    {
      v11 = *v5;
      ++v10;
      ++v5;
      *(uchar *)v9 = v11;
      v9 = (int *)((char *)v9 + 1);
    }
    while ( v10 < 6 );
    dword_22511A0[716] = (int)&dword_22511A0[722];
  }
  else
  {
    MI_CpuFill8(&dword_22511A0[722], 255, 6u);
    dword_22511A0[716] = (int)dword_2215E48;
  }
  if ( v6 && v7 > 0 && v7 <= 32 )
  {
    v12 = 0;
    if ( v7 > 0 )
    {
      v13 = &dword_22511A0[724];
      do
      {
        v14 = *v6;
        ++v12;
        ++v6;
        *(uchar *)v13 = v14;
        v13 = (int *)((char *)v13 + 1);
      }
      while ( v12 < v7 );
    }
    if ( v12 < 32 )
    {
      v15 = (char *)&dword_22511A0[724] + v12;
      do
      {
        ++v12;
        *v15++ = 0;
      }
      while ( v12 < 32 );
    }
    dword_22511A0[717] = (int)&dword_22511A0[724];
  }
  else
  {
    MI_CpuFill8(&dword_22511A0[724], 255, 0x20u);
    dword_22511A0[717] = (int)dword_2215E50;
  }
  if ( dword_22511A0[718] == 3 )
  {
    if ( ((int (__fastcall *)(int, int, int))dword_221312C[0])(
           dword_22511A0[716],
           dword_22511A0[717],
           dword_22511A0[713]) == 3 )
    {
      dword_22511A0[718] = 6;
      OS_RestoreInterrupts(v8);
      return 1;
    }
  }
  else if ( Function_22271a8() == 1 )
  {
    dword_22511A0[718] = 6;
    OS_RestoreInterrupts(v8);
    return 1;
  }
  OS_RestoreInterrupts(v8);
  return 0;
}

//----- (02227344) --------------------------------------------------------
int Function_2227344()
{
  int v0;
  int result;

  v0 = OS_DisableInterrupts();
  if ( dword_22511A0[718] != 5 || ((int (*)(void))dword_221312C[0])() != 3 )
  {
    OS_RestoreInterrupts(v0);
    result = 0;
  }
  else
  {
    dword_22511A0[718] = 4;
    OS_RestoreInterrupts(v0);
    result = 1;
  }
  return result;
}

//----- (02227380) --------------------------------------------------------
int Function_2227380()
{
  int v0;
  int result;

  v0 = OS_DisableInterrupts();
  if ( dword_22511A0[718] != 7 || ((int (*)(void))dword_221356C[0])() != 3 )
  {
    OS_RestoreInterrupts(v0);
    result = 0;
  }
  else
  {
    dword_22511A0[718] = 4;
    OS_RestoreInterrupts(v0);
    result = 1;
  }
  return result;
}

//----- (022273B8) --------------------------------------------------------
int Function_22273b8()
{
  int v0;
  int result;

  v0 = OS_DisableInterrupts();
  if ( dword_22511A0[718] == 3 )
  {
    if ( ((int (*)(void))dword_221303C[0])() == 3 )
    {
      dword_22511A0[718] = 2;
      OS_RestoreInterrupts(v0);
      result = 1;
    }
    else
    {
      OS_RestoreInterrupts(v0);
      result = 0;
    }
  }
  else if ( Function_22271a8() == 1 )
  {
    dword_22511A0[718] = 2;
    OS_RestoreInterrupts(v0);
    result = 1;
  }
  else
  {
    OS_RestoreInterrupts(v0);
    result = 0;
  }
  return result;
}

//----- (02227410) --------------------------------------------------------
int __fastcall Function_2227410(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v7 = OS_DisableInterrupts();
  dword_22511A0[715] = v5;
  if ( v4 )
    MI_CpuCopy8(v4, dword_22511A0[721], 0x50u, v6);
  else
    MI_CpuFill8((ushort *)dword_22511A0[721], 0, 0x50u);
  MI_CpuCopy32(v3, (uint *)dword_22511A0[720], 192);
  if ( Function_22271a8() == 1 )
  {
    dword_22511A0[718] = 8;
    OS_RestoreInterrupts(v7);
    result = 1;
  }
  else if ( dword_22511A0[718] != 3
         || ((int (__fastcall *)(int, int, int))dword_2213368[0])(
              dword_22511A0[720],
              dword_22511A0[721],
              dword_22511A0[715]) != 3 )
  {
    OS_RestoreInterrupts(v7);
    result = 0;
  }
  else
  {
    dword_22511A0[718] = 8;
    OS_RestoreInterrupts(v7);
    result = 1;
  }
  return result;
}

//----- (02227494) --------------------------------------------------------
int __fastcall Function_2227494(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = OS_DisableInterrupts();
  dword_22511A0[721] = v3;
  dword_22511A0[714] = (v3 + 83) & 0xFFFFFFFC;
  dword_22511A0[712] = (((v3 + 83) & 0xFFFFFFFC) + 47) & 0xFFFFFFE0;
  dword_22511A0[720] = (dword_22511A0[712] + 8991) & 0xFFFFFFE0;
  *(uint *)(dword_22511A0[714] + 4) = (dword_22511A0[720] + 223) & 0xFFFFFFE0;
  *(uint *)(dword_22511A0[714] + 8) = v3 + v5 - *(uint *)(dword_22511A0[714] + 4);
  *(uint *)(dword_22511A0[714] + 12) = 0;
  *(uint *)dword_22511A0[714] = 3;
  dword_22511A0[719] = v4;
  if ( !dword_22511A0[718] )
  {
    if ( ((int (__fastcall *)(int, int))dword_2212CC8[0])(dword_22511A0[712], 8960) )
    {
      OS_RestoreInterrupts(v6);
      return 0;
    }
    dword_22511A0[718] = 1;
  }
  if ( dword_22511A0[718] == 1 )
  {
    if ( ((int (__fastcall *)(int, int *(__fastcall *)(int *)))dword_2212E38[0])(dword_22511A0[714], Function_2226ef0) == 3 )
    {
      dword_22511A0[718] = 4;
      OS_RestoreInterrupts(v6);
      result = 1;
    }
    else
    {
      OS_RestoreInterrupts(v6);
      result = 0;
    }
  }
  else
  {
    OS_RestoreInterrupts(v6);
    result = 0;
  }
  return result;
}

//----- (0222754C) --------------------------------------------------------
int *__fastcall Function_222754c(int *result)
{
  uint v1;

  if ( result )
  {
    v1 = *(short *)result;
    if ( v1 <= 9 )
      JUMPOUT(__CS__, *((short *)&off_222756A + v1) + 35812716);
    switch ( (uchar)v1 )
    {
      case 1:
        if ( *((ushort *)result + 1) )
        {
          dword_22511A0[743] = 1;
          result = &dword_22511A0[764];
          if ( dword_22511A0[764] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(2, 0);
        }
        else
        {
          result = (int *)dword_22511A0[743];
          switch ( dword_22511A0[743] )
          {
            case 4:
              dword_22511A0[743] = 3;
              result = &dword_22511A0[764];
              if ( dword_22511A0[764] )
                result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(6, 0);
              break;
            case 6:
              result = (int *)((int (__fastcall *)(int, int, int))dword_221312C[0])(
                                dword_22511A0[749],
                                dword_22511A0[750],
                                dword_22511A0[756]);
              if ( result != (int *)3 )
              {
                dword_22511A0[743] = 3;
                result = &dword_22511A0[764];
                if ( dword_22511A0[764] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(2, 0);
              }
              break;
            case 8:
              result = (int *)((int (__fastcall *)(int, int, int))dword_2213368[0])(
                                dword_22511A0[751],
                                dword_22511A0[742],
                                dword_22511A0[754]);
              if ( result != (int *)3 )
              {
                dword_22511A0[743] = 3;
                result = &dword_22511A0[764];
                if ( dword_22511A0[764] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(2, 0);
              }
              break;
          }
        }
        break;
      case 2:
        if ( *((ushort *)result + 1) )
        {
          dword_22511A0[743] = 3;
          result = &dword_22511A0[764];
          if ( dword_22511A0[764] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(2, 0);
        }
        else
        {
          result = (int *)dword_22511A0[743];
          if ( dword_22511A0[743] == 2 )
          {
            ((void (*)(void))dword_2212DE0[0])();
            dword_22511A0[743] = 0;
            result = &dword_22511A0[764];
            if ( dword_22511A0[764] )
              result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(20, 0);
          }
        }
        break;
      case 3:
        if ( *((ushort *)result + 1) )
        {
          dword_22511A0[743] = 3;
          result = &dword_22511A0[764];
          if ( dword_22511A0[764] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(9, 0);
        }
        else
        {
          result = &dword_22511A0[732];
          if ( dword_22511A0[743] == 6 )
          {
            dword_22511A0[743] = 5;
            result = &dword_22511A0[764];
            if ( dword_22511A0[764] )
              result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(8, 0);
          }
        }
        break;
      case 4:
        if ( *((ushort *)result + 1) )
        {
          dword_22511A0[743] = 3;
          result = &dword_22511A0[764];
          if ( dword_22511A0[764] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(11, 0);
        }
        else
        {
          result = (int *)dword_22511A0[743];
          switch ( dword_22511A0[743] )
          {
            case 4:
              dword_22511A0[743] = 3;
              result = &dword_22511A0[764];
              if ( dword_22511A0[764] )
                result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(10, 0);
              break;
            case 6:
              result = (int *)((int (__fastcall *)(int, int, int))dword_221312C[0])(
                                dword_22511A0[749],
                                dword_22511A0[750],
                                dword_22511A0[756]);
              if ( result != (int *)3 )
              {
                dword_22511A0[743] = 3;
                result = &dword_22511A0[764];
                if ( dword_22511A0[764] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(2, 0);
              }
              break;
            case 2:
              result = (int *)((int (*)(void))dword_221303C[0])();
              if ( result != (int *)3 )
              {
                dword_22511A0[743] = 3;
                result = &dword_22511A0[764];
                if ( dword_22511A0[764] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(2, 0);
              }
              break;
            case 8:
              result = (int *)((int (__fastcall *)(int, int, int))dword_2213368[0])(
                                dword_22511A0[751],
                                dword_22511A0[742],
                                dword_22511A0[754]);
              if ( result != (int *)3 )
              {
                dword_22511A0[743] = 3;
                result = &dword_22511A0[764];
                if ( dword_22511A0[764] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(2, 0);
              }
              break;
          }
        }
        break;
      case 5:
        if ( *((ushort *)result + 1) )
        {
          dword_22511A0[743] = 3;
          result = &dword_22511A0[764];
          if ( dword_22511A0[764] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(13, 0);
        }
        else
        {
          result = &dword_22511A0[732];
          if ( dword_22511A0[743] == 8 )
          {
            dword_22511A0[743] = 7;
            result = &dword_22511A0[764];
            if ( dword_22511A0[764] )
              result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(12, 0);
          }
        }
        break;
      case 6:
        if ( *((ushort *)result + 1) )
        {
          dword_22511A0[743] = 3;
          result = &dword_22511A0[764];
          if ( dword_22511A0[764] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(15, 0);
        }
        else
        {
          result = (int *)dword_22511A0[743];
          switch ( dword_22511A0[743] )
          {
            case 4:
              dword_22511A0[743] = 3;
              result = &dword_22511A0[764];
              if ( dword_22511A0[764] )
                result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(14, 0);
              break;
            case 6:
              result = (int *)((int (__fastcall *)(int, int, int))dword_221312C[0])(
                                dword_22511A0[749],
                                dword_22511A0[750],
                                dword_22511A0[756]);
              if ( result != (int *)3 )
              {
                dword_22511A0[743] = 3;
                result = &dword_22511A0[764];
                if ( dword_22511A0[764] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(2, 0);
              }
              break;
            case 2:
              result = (int *)((int (*)(void))dword_221303C[0])();
              if ( result != (int *)3 )
              {
                dword_22511A0[743] = 3;
                result = &dword_22511A0[764];
                if ( dword_22511A0[764] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(2, 0);
              }
              break;
            case 8:
              result = (int *)((int (__fastcall *)(int, int, int))dword_2213368[0])(
                                dword_22511A0[751],
                                dword_22511A0[742],
                                dword_22511A0[754]);
              if ( result != (int *)3 )
              {
                dword_22511A0[743] = 3;
                result = &dword_22511A0[764];
                if ( dword_22511A0[764] )
                  result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(2, 0);
              }
              break;
            case 7:
              result = (int *)3;
              dword_22511A0[743] = 3;
              break;
          }
        }
        break;
      case 7:
        result = (int *)dword_22511A0[743];
        if ( dword_22511A0[743] == 5 )
        {
          result = &dword_22511A0[764];
          if ( dword_22511A0[764] )
            result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(5, 0);
        }
        break;
      case 8:
        result = &dword_22511A0[764];
        if ( dword_22511A0[764] )
          result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(4, 0);
        break;
      case 9:
        dword_22511A0[743] = 0;
        result = &dword_22511A0[764];
        if ( dword_22511A0[764] )
          result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(3, 0);
        break;
      default:
        result = &dword_22511A0[764];
        if ( dword_22511A0[764] )
          result = (int *)((int (__fastcall *)(int, uint))dword_22511A0[764])(1, 0);
        break;
    }
  }
  return result;
}

//----- (02227858) --------------------------------------------------------
int Function_2227858()
{
  int result;

  switch ( LOBYTE(dword_22511A0[743]) )
  {
    case 1:
      if ( ((int (__fastcall *)(int, int *(__fastcall *)(int *)))dword_2212E38[0])(dword_22511A0[734], Function_222754c) == 3 )
        goto LABEL_9;
      result = 0;
      break;
    case 5:
      if ( ((int (*)(void))dword_221312C[0])() == 3 )
        goto LABEL_9;
      result = 0;
      break;
    case 7:
      if ( ((int (__stdcall *)(int, int *))dword_221356C[0])(dword_22511A0[743], &dword_22511A0[732]) == 3 )
LABEL_9:
        result = 1;
      else
        result = 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (022278C0) --------------------------------------------------------
int __fastcall Function_22278c0(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;

  v2 = a1;
  v3 = a2;
  v4 = ((int (__fastcall *)(int))dword_2214EE0[0])(1);
  v5 = ((int (__fastcall *)(int))dword_2214E88[0])(v4);
  v6 = v5;
  if ( v5 > 0 )
  {
    v7 = 0;
    if ( v5 > 0 )
    {
      do
      {
        if ( v7 >= v3 )
          break;
        v8 = (int *)((int (__fastcall *)(uint))dword_2214F5C[0])((ushort)v7);
        MI_CpuCopy32(v8, v2, 192);
        ++v7;
        v2 += 48;
      }
      while ( v7 < v6 );
    }
  }
  ((void (__fastcall *)(uint))dword_2214EE0[0])(0);
  return v6;
}

//----- (02227904) --------------------------------------------------------
int __fastcall Function_2227904(char *a1, char *a2, int a3, int a4)
{
  int v4;
  char *v5;
  char *v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  char v11;
  int *v12;
  int i;
  char v14;
  char *v15;

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = OS_DisableInterrupts();
  dword_22511A0[756] = v4;
  v9 = &dword_22511A0[1034];
  dword_22511A0[749] = (int)&dword_22511A0[1034];
  if ( v5 )
  {
    v10 = 0;
    do
    {
      v11 = *v5;
      ++v10;
      ++v5;
      *(uchar *)v9 = v11;
      v9 = (int *)((char *)v9 + 1);
    }
    while ( v10 < 6 );
  }
  else
  {
    MI_CpuFill8(&dword_22511A0[1034], 255, 6u);
    dword_22511A0[749] = (int)dword_2215E48;
  }
  v12 = &dword_22511A0[1048];
  dword_22511A0[750] = (int)&dword_22511A0[1048];
  if ( v6 && v7 > 0 && v7 < 32 )
  {
    for ( i = 0; i < v7; v12 = (int *)((char *)v12 + 1) )
    {
      v14 = *v6;
      ++i;
      ++v6;
      *(uchar *)v12 = v14;
    }
    if ( i < 32 )
    {
      v15 = (char *)&dword_22511A0[1048] + i;
      do
      {
        ++i;
        *v15++ = 0;
      }
      while ( i < 32 );
    }
  }
  else
  {
    MI_CpuFill8(&dword_22511A0[1048], 255, 0x20u);
    dword_22511A0[750] = (int)dword_2215E50;
  }
  if ( dword_22511A0[743] == 3 )
  {
    if ( ((int (__fastcall *)(int *, int, int))dword_221312C[0])(
           &dword_22511A0[1034],
           dword_22511A0[750],
           dword_22511A0[756]) == 3 )
    {
      dword_22511A0[743] = 6;
      OS_RestoreInterrupts(v8);
      return 1;
    }
  }
  else if ( Function_2227858() == 1 )
  {
    dword_22511A0[743] = 6;
    OS_RestoreInterrupts(v8);
    return 1;
  }
  OS_RestoreInterrupts(v8);
  return 0;
}

//----- (022279EC) --------------------------------------------------------
int Function_22279ec()
{
  int v0;
  int result;

  v0 = OS_DisableInterrupts();
  if ( dword_22511A0[743] != 7 || ((int (*)(void))dword_221356C[0])() != 3 )
  {
    OS_RestoreInterrupts(v0);
    result = 0;
  }
  else
  {
    dword_22511A0[743] = 4;
    OS_RestoreInterrupts(v0);
    result = 1;
  }
  return result;
}

//----- (02227A24) --------------------------------------------------------
int Function_2227a24()
{
  int v0;
  int result;

  v0 = OS_DisableInterrupts();
  if ( dword_22511A0[743] == 3 )
  {
    if ( ((int (*)(void))dword_221303C[0])() == 3 )
    {
      dword_22511A0[743] = 2;
      OS_RestoreInterrupts(v0);
      result = 1;
    }
    else
    {
      OS_RestoreInterrupts(v0);
      result = 0;
    }
  }
  else if ( Function_2227858() == 1 )
  {
    dword_22511A0[743] = 2;
    OS_RestoreInterrupts(v0);
    result = 1;
  }
  else
  {
    OS_RestoreInterrupts(v0);
    result = 0;
  }
  return result;
}

//----- (02227A7C) --------------------------------------------------------
int __fastcall Function_2227a7c(int *a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v7 = OS_DisableInterrupts();
  dword_22511A0[754] = v5;
  if ( v4 )
    MI_CpuCopy8(v4, dword_22511A0[742], 0x60u, v6);
  else
    MI_CpuFill8((ushort *)dword_22511A0[742], 0, 0x60u);
  MI_CpuCopy32(v3, (uint *)dword_22511A0[751], 192);
  if ( Function_2227858() == 1 )
  {
    dword_22511A0[743] = 8;
    OS_RestoreInterrupts(v7);
    result = 1;
  }
  else if ( dword_22511A0[743] != 3
         || ((int (__fastcall *)(int, int, int))dword_2213368[0])(
              dword_22511A0[751],
              dword_22511A0[742],
              dword_22511A0[754]) != 3 )
  {
    OS_RestoreInterrupts(v7);
    result = 0;
  }
  else
  {
    dword_22511A0[743] = 8;
    OS_RestoreInterrupts(v7);
    result = 1;
  }
  return result;
}

//----- (02227B00) --------------------------------------------------------
int __fastcall Function_2227b00(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = OS_DisableInterrupts();
  dword_22511A0[742] = v3;
  dword_22511A0[734] = (v3 + 99) & 0xFFFFFFFC;
  dword_22511A0[747] = (((v3 + 99) & 0xFFFFFFFC) + 47) & 0xFFFFFFE0;
  dword_22511A0[751] = (dword_22511A0[747] + 8991) & 0xFFFFFFE0;
  *(uint *)(dword_22511A0[734] + 4) = (dword_22511A0[751] + 223) & 0xFFFFFFE0;
  *(uint *)(dword_22511A0[734] + 8) = v3 + v5 - *(uint *)(dword_22511A0[734] + 4);
  *(uint *)(dword_22511A0[734] + 12) = 0;
  *(uint *)dword_22511A0[734] = 3;
  dword_22511A0[764] = v4;
  if ( !dword_22511A0[743] )
  {
    if ( ((int (__fastcall *)(int, int))dword_2212CC8[0])(dword_22511A0[747], 8960) )
    {
      OS_RestoreInterrupts(v6);
      return 0;
    }
    dword_22511A0[743] = 1;
  }
  if ( dword_22511A0[743] == 1 )
  {
    if ( ((int (__fastcall *)(int, int *(__fastcall *)(int *)))dword_2212E38[0])(dword_22511A0[734], Function_222754c) == 3 )
    {
      dword_22511A0[743] = 4;
      OS_RestoreInterrupts(v6);
      result = 1;
    }
    else
    {
      OS_RestoreInterrupts(v6);
      result = 0;
    }
  }
  else
  {
    OS_RestoreInterrupts(v6);
    result = 0;
  }
  return result;
}

//----- (02227BBC) --------------------------------------------------------
int Function_2227bbc()
{
  return dword_22511A0[743];
}

//----- (02227BC8) --------------------------------------------------------
int __fastcall Function_2227bc8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  if ( a2 <= 0 )
    return 0;
  OS_LockMutex(&dword_22511A0[769]);
  v3 = ((int (__fastcall *)(int))dword_22511A0[733])(v2);
  OS_UnlockMutex(&dword_22511A0[769]);
  return v3;
}

//----- (02227BF8) --------------------------------------------------------
uint __fastcall Function_2227bf8(int a1, int a2, int a3)
{
  int v3;
  uint result;

  v3 = a2;
  if ( a2 )
  {
    if ( a3 > 0 )
    {
      OS_LockMutex(&dword_22511A0[769]);
      ((void (__fastcall *)(int))dword_22511A0[735])(v3);
      result = OS_UnlockMutex(&dword_22511A0[769]);
    }
  }
  return result;
}

//----- (02227C20) --------------------------------------------------------
uint Function_2227c20()
{
  int v0;
  int v1;
  int *v2;

  v0 = OS_DisableInterrupts();
  v1 = 0;
  dword_22511A0[758] = 0;
  dword_22511A0[759] = 0;
  v2 = &dword_22511A0[765];
  do
  {
    ++v1;
    *v2 = 0;
    ++v2;
  }
  while ( v1 < 4 );
  return OS_RestoreInterrupts(v0);
}

//----- (02227C48) --------------------------------------------------------
int Function_2227c48()
{
  int v0;
  int v1;

  v0 = OS_DisableInterrupts();
  if ( dword_22511A0[758] == dword_22511A0[759] )
  {
    v1 = 0;
  }
  else
  {
    v1 = dword_22511A0[dword_22511A0[759]++ + 765];
    if ( dword_22511A0[759] + 1 >= 4 )
      dword_22511A0[759] = 0;
  }
  OS_RestoreInterrupts(v0);
  return v1;
}

//----- (02227C80) --------------------------------------------------------
int __fastcall Function_2227c80(int result)
{
  if ( dword_22511A0[758] + 1 != dword_22511A0[759] && dword_22511A0[758] != dword_22511A0[759] + 3 )
  {
    dword_22511A0[dword_22511A0[758]++ + 765] = result;
    if ( dword_22511A0[758] + 1 >= 4 )
    {
      result = 0;
      dword_22511A0[758] = 0;
    }
  }
  return result;
}

//----- (02227CB0) --------------------------------------------------------
int __fastcall Function_2227cb0(int result)
{
  return Function_2227c80(result);
}

//----- (02227CBC) --------------------------------------------------------
int __fastcall Function_2227cbc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int i;

  v2 = a1;
  v3 = 1;
  dword_22511A0[760] = a1;
  Function_2227c20();
  v4 = 208 * v2;
  v5 = ((int (__fastcall *)(int))dword_22511A0[733])(208 * v2 + 9424 + 192 * v2);
  dword_22511A0[753] = v5;
  if ( !v5 )
    return -1;
  dword_22511A0[748] = (v5 + 31) & 0xFFFFFFE0;
  dword_22511A0[755] = (dword_22511A0[748] + v4 + 9360 + 31) & 0xFFFFFFE0;
  if ( !Function_2227b00((int)Function_2227c80, dword_22511A0[748], v4 + 9360) )
    return -2;
  do
  {
    OS_Sleep(0xAu);
    for ( i = Function_2227c48(); i; i = Function_2227c48() )
    {
      if ( i != 4 && i != 5 )
      {
        if ( i == 6 )
        {
          v3 = 0;
          v1 = 1;
        }
        else
        {
          v3 = 0;
          v1 = -2;
        }
      }
    }
  }
  while ( v3 );
  return v1;
}

//----- (02227D60) --------------------------------------------------------
int Function_2227d60()
{
  int v0;
  int i;

  v0 = 1;
  if ( Function_2227a24() )
  {
    do
    {
      OS_Sleep(0xAu);
      for ( i = Function_2227c48(); i; i = Function_2227c48() )
      {
        if ( i != 4 && i != 5 )
          v0 = 0;
      }
    }
    while ( v0 );
  }
  if ( dword_22511A0[753] )
  {
    ((void (__fastcall *)(int))dword_22511A0[735])(dword_22511A0[753]);
    dword_22511A0[753] = 0;
  }
  return 1;
}

//----- (02227DB8) --------------------------------------------------------
int __fastcall Function_2227db8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int i;
  char v8;
  int v9;

  v9 = a4;
  v4 = 1;
  v5 = -2;
  if ( !(dword_22511A0[755] + 192 * dword_22511A0[738]) )
    return 0;
  if ( !Function_2227a7c((int *)(dword_22511A0[755] + 192 * dword_22511A0[738]), 0, 196608) )
    return -2;
  OS_CreateAlarm(&v8);
  i = OS_SetAlarm(&v8, 0x3FEC42u, 0, (int)Function_2227cb0, 18);
  do
  {
    if ( (uint)Function_222aa98(i) >= 0xFFFFFFFF )
    {
      v5 = -3;
      break;
    }
    if ( dword_22511A0[736] )
    {
      v5 = -8;
      break;
    }
    OS_Sleep(0xAu);
    for ( i = Function_2227c48(); i; i = Function_2227c48() )
    {
      if ( i > 12 )
      {
        if ( i > 19 || i < 13 )
          goto LABEL_29;
        if ( i != 13 )
        {
          if ( i == 18 || i == 19 )
            continue;
LABEL_29:
          v4 = 0;
          continue;
        }
        if ( dword_22511A0[736] )
        {
          v4 = 0;
          v5 = -8;
        }
        else if ( !Function_2227a7c((int *)(dword_22511A0[755] + 192 * dword_22511A0[738]), 0, 196608) )
        {
          return v5;
        }
      }
      else
      {
        if ( i < 12 )
        {
          if ( i <= 5 && i >= 4 && (i == 4 || i == 5) )
            continue;
          goto LABEL_29;
        }
        v4 = 0;
        v5 = 1;
      }
    }
  }
  while ( v4 );
  Function_20c3bb4(&v8);
  while ( Function_2227c48() )
    ;
  if ( v5 > 0 )
  {
    dword_22511A0[740] = 1;
    if ( ((int (__fastcall *)(int *))dword_2208874[0])(dword_224984C) >= 0 )
      dword_22511A0[741] = 1;
    else
      v5 = -2;
  }
  return v5;
}

//----- (02227EDC) --------------------------------------------------------
int *Function_2227edc()
{
  int v0;
  int i;
  int *result;

  v0 = 1;
  if ( dword_22511A0[740] )
  {
    if ( Function_22279ec() )
    {
      do
      {
        OS_Sleep(0xAu);
        for ( i = Function_2227c48(); i; i = Function_2227c48() )
        {
          if ( i != 4 && i != 5 )
            v0 = 0;
        }
      }
      while ( v0 );
    }
    dword_22511A0[740] = 0;
  }
  result = &dword_22511A0[732];
  if ( dword_22511A0[741] )
  {
    dword_22511A0[741] = 0;
    result = (int *)((int (*)(void))dword_22089E8[0])();
  }
  return result;
}

//----- (02227F40) --------------------------------------------------------
int __fastcall Function_2227f40(uint *a1, uint *a2, uint *a3)
{
  int v3;
  int v4;
  short *v5;
  int v6;
  uint v7;
  uint v8;
  int v9;
  char *v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint *v19;
  uint *v20;
  uint *v21;
  uint v22;
  uint v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char v28[32];
  short v29;

  v19 = a1;
  v27 = 0;
  v26 = 0;
  v20 = a2;
  v3 = (int)(a1 + 1);
  v4 = (int)(a2 + 1);
  v21 = a3;
  v22 = 0;
  if ( *a1 )
  {
    do
    {
      v5 = &v29;
      v6 = 34;
      do
      {
        *(uchar *)v5 = 0;
        v5 = (short *)((char *)v5 + 1);
        --v6;
      }
      while ( v6 );
      memcpy(&v29, (char *)(v3 + 4), 32);
      v7 = 0;
      *((uchar *)&v29 + *(uint *)v3) = 0;
      v23 = *v20;
      if ( *v20 )
      {
        v8 = *(uint *)v3;
        while ( v8 && v8 <= 0x20 && (v8 != 1 || *(uchar *)(v3 + 4) && *(uchar *)(v3 + 4) != 32) )
        {
          v9 = strlen((char *)&v29);
          if ( !Function_20d5190((uchar *)&v29, (uchar *)(v4 + 4), v9)
            && !Function_20d5190((uchar *)(v3 + 40), (uchar *)(v4 + 40), 6)
            && *(ushort *)(v3 + 46) != *(ushort *)(v4 + 46)
            && !*(ushort *)(v3 + 46) )
          {
            v27 = 1;
            break;
          }
          ++v7;
          v4 += 48;
          if ( v7 >= v23 )
            break;
        }
      }
      if ( v27 )
        break;
      v3 += 48;
      v4 = (int)(v20 + 1);
      ++v22;
    }
    while ( v22 < *v19 );
  }
  if ( !v27 )
  {
    v10 = v28;
    v11 = 34;
    do
    {
      *v10++ = 0;
      --v11;
    }
    while ( v11 );
    v25 = 0;
    v24 = 0;
    v12 = 0;
    v13 = (int)(v19 + 1);
    v14 = (int)(v20 + 1);
    if ( *v20 )
    {
      while ( 1 )
      {
        memcpy(v28, (char *)(v14 + 4), 32);
        v28[*(uint *)v14] = 0;
        v15 = strlen("******");
        if ( !Function_20d5190((uchar *)v28, "******", v15) && !*(ushort *)(v14 + 46) )
          break;
        ++v12;
        v14 += 48;
        if ( v12 >= *v20 )
          goto LABEL_27;
      }
      v24 = 1;
    }
LABEL_27:
    v22 = 0;
    if ( *v19 )
    {
      while ( 1 )
      {
        memcpy(v28, (char *)(v13 + 4), 32);
        v28[*(uint *)v13] = 0;
        v16 = strlen(v28);
        if ( v16 == strlen("******") )
        {
          v17 = strlen("******");
          if ( !Function_20d5190((uchar *)v28, "******", v17) && !*(ushort *)(v13 + 46) )
            break;
        }
        v13 += 48;
        if ( ++v22 >= *v19 )
          goto LABEL_33;
      }
      v25 = 1;
    }
LABEL_33:
    if ( v25 && !v24 )
      v27 = 1;
  }
  if ( v27 )
  {
    *v21 = v22;
    v26 = 1;
  }
  return v26;
}

//----- (0222810C) --------------------------------------------------------
int __fastcall Function_222810c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  int j;
  int v9;
  int v10;
  uint *v11;
  uchar *v12;
  char v13;
  int v14;
  uchar *v16;
  uint *v17;
  uint *v18;
  int v19;
  int v20;
  int v21;
  int i;
  int v23;
  char v24;
  char v25;
  int v26;

  v26 = a4;
  v17 = 0;
  v23 = 0;
  v19 = 48 * dword_22511A0[760] + 52;
  v4 = -1;
  v18 = (uint *)Function_222aab4(1, v19);
  if ( v18 )
  {
    v17 = (uint *)Function_222aab4(1, v19);
    if ( v17 )
    {
      for ( i = 0; i < 30 && !dword_22511A0[736] && (uint)Function_222aa98(dword_22511A0[736]) < 0xFFFFFFFF; ++i )
      {
        if ( !Function_2227904(0, 0, 0, 3194878) )
        {
          v4 = -2;
          goto LABEL_41;
        }
        OS_CreateAlarm(&v24);
        OS_SetAlarm(&v24, 0xFFB10u, 0, (int)Function_2227cb0, 19);
        v5 = 1;
        v6 = 0;
        do
        {
          v7 = OS_Sleep(0xAu);
          if ( (uint)Function_222aa98(v7) >= 0xFFFFFFFF || dword_22511A0[736] )
            break;
          for ( j = Function_2227c48(); j; j = Function_2227c48() )
          {
            switch ( (uchar)j )
            {
              case 4:
              case 8:
              case 0x12:
                continue;
              case 5:
                v9 = Function_22278c0((uint *)dword_22511A0[755], dword_22511A0[760]);
                if ( v9 > v6 )
                {
                  v6 = v9;
                  Function_20c3bb4(&v24);
                  OS_SetAlarm(&v24, 0xFFB10u, 0, (int)Function_2227cb0, 19);
                }
                break;
              case 0xA:
                v5 = 0;
                break;
              case 0x13:
                v5 = 0;
                break;
              default:
                v5 = 0;
                break;
            }
          }
        }
        while ( v5 );
        Function_20c3bb4(&v24);
        while ( Function_2227c48() )
          ;
        if ( dword_22511A0[736] )
          break;
        v20 = 0;
        if ( v6 >= dword_22511A0[760] )
        {
          v4 = -6;
          goto LABEL_41;
        }
        v10 = dword_22511A0[755];
        v21 = 0;
        if ( v6 > 0 )
        {
          v11 = v18;
          v16 = v18 + 2;
          v12 = v18 + 11;
          do
          {
            memcpy(v16, (char *)(v10 + 12), 32);
            v11[1] = *(ushort *)(v10 + 10);
            *((uchar *)v11 + *(ushort *)(v10 + 10) + 8) = 0;
            *((ushort *)v11 + 25) = (*(ushort *)(v10 + 44) & 0x10) != 0;
            v11 += 12;
            *v12 = *(uchar *)(v10 + 4);
            v12[1] = *(uchar *)(v10 + 5);
            v12[2] = *(uchar *)(v10 + 6);
            v12[3] = *(uchar *)(v10 + 7);
            v12[4] = *(uchar *)(v10 + 8);
            v13 = *(uchar *)(v10 + 9);
            v10 += 192;
            v12[5] = v13;
            v12 += 48;
            v16 += 48;
            ++v20;
            ++v21;
          }
          while ( v21 < v6 );
        }
        *v18 = v6;
        if ( dword_22511A0[746] != 1 && Function_2227f40(v18, v17, (uint *)&v23) )
        {
          v14 = (int)&v18[12 * v23 + 1];
          dword_22511A0[738] = v23;
          Function_20d8b7c(&dword_22511A0[1056], (int *)(v14 + 4));
          LOBYTE(dword_22511A0[1032]) = *(uchar *)(v14 + 40);
          *(ushort *)((char *)&dword_22511A0[1032] + 1) = *(ushort *)(v14 + 41);
          HIBYTE(dword_22511A0[1032]) = *(uchar *)(v14 + 43);
          LOWORD(dword_22511A0[1033]) = *(ushort *)(v14 + 44);
          Function_222ab1c(&v25);
          break;
        }
        memcpy(v17, (char *)v18, v19);
        dword_22511A0[746] = 2;
        Function_222ad18();
      }
      if ( i < 30 && (uint)Function_222aa98(i) <= 0xFFFFFFFF )
      {
        if ( dword_22511A0[736] )
          v4 = -8;
        else
          v4 = 1;
      }
      else
      {
        v4 = -3;
      }
    }
  }
LABEL_41:
  if ( v18 )
    Function_222aad8();
  if ( v17 )
    Function_222aad8();
  return v4;
}

//----- (022283A0) --------------------------------------------------------
int __fastcall Function_22283a0(int a1, int a2, int a3, int a4, int a5)
{
  int result;

  result = ((int (__fastcall *)(int, int, int, uint))dword_22084B0[0])(a1, a4, a5, 0);
  if ( result < 0 )
    result = -4;
  return result;
}

//----- (022283B8) --------------------------------------------------------
int __fastcall Function_22283b8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  char v8;
  char v9;
  char v10;
  short v11;
  int v12;

  v3 = a1;
  v4 = a2;
  v9 = 8;
  v10 = 2;
  v12 = -1;
  v5 = a3;
  v11 = 486;
  v6 = ((int (*)(void))dword_21FB984[12737])();
  ((void (__fastcall *)(int, char *))dword_22089E8[68])(v6, &v8);
  return Function_22283a0(v3, (int)&v9, (int)&v8, v4, v5);
}

//----- (022283F4) --------------------------------------------------------
int __fastcall Function_22283f4(int a1, int a2, int a3, int a4)
{
  return Function_22283b8(a1, a3, a4);
}

//----- (02228400) --------------------------------------------------------
void __fastcall Function_2228400(ushort *a1)
{
  int v1;

  v1 = *a1;
  JUMPOUT(loc_2228410);
}

//----- (02228470) --------------------------------------------------------
int __fastcall Function_2228470(ushort **a1, uint a2, int *a3, int *a4)
{
  uint *v4;
  ushort *v5;
  int result;
  int v7;
  int v8;

  v4 = a1;
  v5 = *a1;
  if ( (uint)v5 >= a2 )
    return 0;
  *a3 = ((*v5 << 8) & 0xFF00 | ((int)*v5 >> 8) & 0xFF) & 0xFFFF;
  v7 = v5[1];
  result = (int)(v5 + 2);
  v8 = ((v7 << 8) & 0xFF00 | (v7 >> 8) & 0xFF) & 0xFFFF;
  *a4 = v8;
  *v4 = result + ((v8 + 11) & 0xFFFFFFF8) - 4;
  return result;
}

//----- (022284C0) --------------------------------------------------------
int __fastcall Function_22284c0(ushort *a1, int *a2, int *a3, int a4)
{
  ushort *v5;
  int v6;

  v6 = a4;
  v5 = a1 + 4;
  return Function_2228470(
           &v5,
           (uint)a1 + ((((int)*a1 >> 8) & 0xFF | (*a1 << 8) & 0xFF00) & 0xFFFF) + 8,
           a2,
           a3);
}

//----- (022284F4) --------------------------------------------------------
int __fastcall Function_22284f4(uchar *a1, short a2, char *a3, int a4, int a5)
{
  int v5;
  uchar *v6;
  short v7;
  int v8;
  uchar *v9;
  uchar *i;
  short v11;
  short v13;

  v5 = a4;
  v6 = a1;
  v13 = a2;
  v7 = 0;
  *a3 = 0;
  v8 = (a4 - 8) & 0xFFFF;
  a3[1] = 0;
  a3[2] = 0;
  a3[3] = 0;
  a3[4] = 0;
  a3[5] = 0;
  a3[6] = 0;
  a3[7] = 0;
  *(ushort *)a3 = (((ushort)a4 - 8) << 8) & 0xFF00 | BYTE1(v8);
  if ( a5 )
  {
    Function_2229134(v6 + 6);
    v5 += 8;
  }
  else
  {
    memcpy(v6 + 6, a3, a4);
  }
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  *(ushort *)v6 = (v13 << 8) & 0xFF00 | HIBYTE(v13);
  *((ushort *)v6 + 1) = ((ushort)v5 << 8) & 0xFF00 | BYTE1(v5);
  v9 = &v6[v5 + 6];
  for ( i = v6; i < v9; v7 += v11 )
    v11 = *i++;
  *(ushort *)v9 = (v7 << 8) & 0xFF00 | HIBYTE(v7);
  return v5 + 8;
}

//----- (022285B8) --------------------------------------------------------
int __fastcall Function_22285b8(uchar *a1, short a2, char *a3, int a4)
{
  int v4;
  char *v5;
  uint v6;
  uchar *v7;

  v4 = a4;
  v5 = a3;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  *(ushort *)a1 = HIBYTE(a2) | (a2 << 8) & 0xFF00;
  v6 = ((a4 + 11) & 0xFFFFFFF8) - 4;
  *((ushort *)a1 + 1) = ((ushort)a4 << 8) & 0xFF00 | BYTE1(v4);
  v7 = a1 + 4;
  Call_FillMemWithValue((int *)a1 + 1, 0, v6);
  memcpy(v7, v5, v4);
  return (int)&v7[v6];
}

//----- (02228618) --------------------------------------------------------
int __fastcall Function_2228618(uchar *a1, short a2, char *a3, int a4)
{
  ushort *v4;
  int result;

  v4 = a1;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  result = Function_22285b8(a1 + 8, a2, a3, a4) - (uint)a1;
  *v4 = result - 8;
  return result;
}

//----- (02228640) --------------------------------------------------------
int __fastcall Function_2228640(ushort *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  ushort *i;
  int v9;
  int *v10;
  int *v11;
  int v12;
  int v13;
  char v14;
  int v15;
  int v16;
  int v17;

  v11 = a2;
  Function_2228400(a1);
  v3 = 0;
  v4 = v2;
  v5 = 0;
  v13 = v2;
  v12 = 0;
  if ( !v2 )
    return 0;
  if ( v17 != 1 )
    return 0;
  v7 = v16;
  v13 = v2 + 8;
  for ( i = (ushort *)Function_2228470((ushort **)&v13, v2 + v16, &v15, (int *)&v14);
        i;
        i = (ushort *)Function_2228470((ushort **)&v13, v4 + v7, &v15, (int *)&v14) )
  {
    switch ( v15 )
    {
      case 1:
        v3 = ((*i << 8) & 0xFF00 | ((int)(ushort)*i >> 8) & 0xFF) & 0xFFFF;
        break;
      case 2:
        v12 = (((int)(ushort)*i >> 8) & 0xFF | ((ushort)*i << 8) & 0xFF00) & 0xFFFF;
        break;
      case 5:
        v5 = ((*i << 8) & 0xFF00 | ((int)(ushort)*i >> 8) & 0xFF) & 0xFFFF;
        break;
    }
  }
  if ( v3 != 1 || v12 != 1 )
    return 0;
  if ( v5 < 1 )
  {
    v10 = v11;
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v10 = v11;
  }
  *v10 = v9;
  return 1;
}

//----- (02228714) --------------------------------------------------------
int __fastcall Function_2228714(ushort *a1, int a2, uchar *a3, int a4)
{
  int v4;
  uchar *v5;
  int v6;
  char *v7;
  int v9;
  int v10;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  Function_2228400(a1);
  if ( !v7 )
    return 0;
  if ( v10 != v4 )
    return 0;
  if ( v6 )
  {
    ((void (__fastcall *)(uchar *, char *, int, int))Function_22292ec)(v5, v7, v6, 16);
    v9 -= 8;
  }
  else
  {
    memcpy(v5, v7, v9);
  }
  return v9;
}

//----- (02228764) --------------------------------------------------------
int __fastcall Function_2228764(uchar *a1)
{
  uchar *v1;
  char *v2;
  short *v3;
  int v4;
  char v5;
  uchar *v6;
  uchar *v7;
  uchar *v8;
  int v9;
  short v11;
  short v12;

  v1 = a1;
  v11 = 256;
  v2 = &byte_224645C;
  v3 = &v12;
  v4 = 7;
  do
  {
    v5 = *v2++;
    *(uchar *)v3 = v5;
    v3 = (short *)((char *)v3 + 1);
    --v4;
  }
  while ( v4 );
  v6 = (uchar *)Function_22285b8(&dword_22511A0[1067], 1, (char *)&v11, 2);
  v7 = (uchar *)Function_22285b8(v6, 2, (char *)&v11, 2);
  if ( dword_22511A0[752] )
    v7 = (uchar *)Function_22285b8(v7, 5, (char *)&v11, 2);
  v8 = (uchar *)Function_22285b8(v7, 3, (char *)&v12, 7);
  v9 = (int)v8;
  if ( dword_22511A0[752] )
    v9 = Function_22285b8(v8, 4, (char *)&dword_22511A0[1030], 6);
  return Function_22284f4(v1, 2, (char *)&dword_22511A0[1065], v9 - 35988036, 0);
}

//----- (02228800) --------------------------------------------------------
int __fastcall Function_2228800(uint a1, int a2, int a3, uint a4)
{
  OS_GetMacAddress(a1, a2, a3, a4);
  return 1;
}

//----- (0222880C) --------------------------------------------------------
int __fastcall Function_222880c(int a1, int a2, int a3, uint a4)
{
  int v4;
  uchar *v5;
  int *v6;
  char v8;
  short v9;
  char v10;
  short v11;
  int v12;
  short v13;
  char v14;
  char v15;
  uint v16;

  v16 = a4;
  v4 = a1;
  v5 = (uchar *)(a1 + 12);
  *(uchar *)(a1 + 12) = aWarp[0];
  v5[1] = aWarp[1];
  v5[2] = aWarp[2];
  v5[3] = aWarp[3];
  v12 = dword_22511A0[1032];
  v13 = dword_22511A0[1033];
  LOBYTE(v12) = dword_22511A0[1032] & 0xFD;
  Function_2228800((uint)&v8, (int)&v8, LOBYTE(dword_22511A0[1032]), a4);
  LOBYTE(dword_22511A0[1030]) = v8;
  *(ushort *)((char *)&dword_22511A0[1030] + 1) = v9;
  HIBYTE(dword_22511A0[1030]) = v10;
  LOWORD(dword_22511A0[1031]) = v11;
  if ( Function_20d5190((uchar *)&v12, (uchar *)&v8, 6) > 0 )
  {
    *(uint *)v4 = v12;
    *(uchar *)(v4 + 4) = v13;
    v6 = (int *)&v8;
    *(uchar *)(v4 + 5) = HIBYTE(v13);
  }
  else
  {
    *(uchar *)v4 = v8;
    *(ushort *)(v4 + 1) = v9;
    *(uchar *)(v4 + 3) = v10;
    *(uchar *)(v4 + 4) = v11;
    v6 = &v12;
    *(uchar *)(v4 + 5) = HIBYTE(v11);
  }
  *(uchar *)(v4 + 6) = *(uchar *)v6;
  *(uchar *)(v4 + 7) = *((uchar *)v6 + 1);
  *(uchar *)(v4 + 8) = *((uchar *)v6 + 2);
  *(uchar *)(v4 + 9) = *((uchar *)v6 + 3);
  *(uchar *)(v4 + 10) = *((uchar *)v6 + 4);
  *(uchar *)(v4 + 11) = *((uchar *)v6 + 5);
  Function_222ab1c(&v15);
  Function_222ab1c(&v14);
  return 1;
}

//----- (02228908) --------------------------------------------------------
int __fastcall Function_2228908(ushort *a1, int a2, int a3, int a4)
{
  char *i;
  int *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int *v11;
  int j;
  int v13;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  ushort *v20;
  int v21;

  v21 = a4;
  v16 = (int)(a1 + 4);
  v20 = a1 + 4;
  v15 = 0;
  v17 = ((*a1 << 8) & 0xFF00 | ((int)*a1 >> 8) & 0xFF) & 0xFFFF;
  for ( i = (char *)Function_2228470(&v20, (uint)a1 + v17 + 8, &v19, &v18);
        i;
        i = (char *)Function_2228470(&v20, v16 + v17, &v19, &v18) )
  {
    switch ( (uchar)v19 )
    {
      case 1:
        dword_22511A0[945] = 0;
        dword_22511A0[946] = 0;
        dword_22511A0[947] = 0;
        dword_22511A0[948] = LOBYTE(dword_22511A0[947]);
        dword_22511A0[949] = 0;
        dword_22511A0[950] = LOBYTE(dword_22511A0[949]);
        dword_22511A0[951] = 0;
        dword_22511A0[952] = LOBYTE(dword_22511A0[951]);
        memcpy(&dword_22511A0[945], i, v18);
        v15 = 1;
        break;
      case 2:
        dword_22511A0[956] = ((*(ushort *)i << 8) & 0xFF00 | ((int)*(ushort *)i >> 8) & 0xFF) & 0xFFFF;
        break;
      case 3:
        v5 = &dword_22511A0[881];
        v6 = 0;
        v7 = ((*(ushort *)i << 8) & 0xFF00 | ((int)*(ushort *)i >> 8) & 0xFF) & 0xFFFF;
        do
        {
          ++v6;
          v5[87] = v7;
          v5 += 10;
        }
        while ( v6 < 4 );
        break;
      case 4:
        v8 = &dword_22511A0[881];
        v9 = 0;
        v10 = ((*(ushort *)i << 8) & 0xFF00 | ((int)*(ushort *)i >> 8) & 0xFF) & 0xFFFF;
        do
        {
          ++v9;
          v8[88] = v10;
          v8 += 10;
        }
        while ( v9 < 4 );
        break;
      case 5:
        dword_22511A0[957] = ((*(ushort *)i << 8) & 0xFF00 | ((int)*(ushort *)i >> 8) & 0xFF) & 0xFFFF;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        Call_FillMemWithValue(&dword_22511A0[10 * (v19 - 518) + 970], 0, 0x20u);
        if ( dword_22511A0[968] == 1 )
        {
          v11 = &dword_22511A0[10 * (v19 - 518) + 970];
          for ( j = 0; j < v18; ++j )
          {
            v13 = *i++;
            v11 = (int *)((char *)v11 + Function_222aae8(v11, v13));
          }
        }
        else
        {
          memcpy(&dword_22511A0[10 * (v19 - 518) + 970], i, v18);
        }
        break;
      case 0xA:
        dword_22511A0[1008] = 0;
        dword_22511A0[1009] = 0;
        dword_22511A0[1010] = 0;
        dword_22511A0[1011] = LOBYTE(dword_22511A0[1010]);
        dword_22511A0[1012] = 0;
        dword_22511A0[1013] = LOBYTE(dword_22511A0[1012]);
        dword_22511A0[1014] = 0;
        dword_22511A0[1015] = LOBYTE(dword_22511A0[1014]);
        dword_22511A0[1016] = 0;
        dword_22511A0[1017] = LOBYTE(dword_22511A0[1016]);
        dword_22511A0[1018] = 0;
        dword_22511A0[1019] = LOBYTE(dword_22511A0[1018]);
        dword_22511A0[1020] = 0;
        dword_22511A0[1021] = LOBYTE(dword_22511A0[1020]);
        dword_22511A0[1022] = 0;
        dword_22511A0[1023] = LOBYTE(dword_22511A0[1022]);
        dword_22511A0[1024] = 0;
        dword_22511A0[1025] = LOBYTE(dword_22511A0[1024]);
        memcpy(&dword_22511A0[1008], i, v18);
        break;
      default:
        continue;
    }
  }
  return v15;
}

//----- (02228ADC) --------------------------------------------------------
int __fastcall Function_2228adc(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;

  v3 = a3;
  v4 = 0;
  v5 = a2;
  v6 = 0;
  if ( v3 <= 0 )
    return 1;
  while ( 1 )
  {
    v7 = *(char *)(v5 + v6);
    if ( v7 <= 99 )
      break;
    if ( v7 > 101 )
    {
      if ( v7 != 102 )
        return 0;
    }
    else if ( v7 < 101 && v7 != 100 )
    {
      return 0;
    }
LABEL_16:
    v8 = v4 + v7 - 87;
LABEL_19:
    if ( (v6 >> 31) + __ROR4__((v6 << 31) - (v6 >> 31), 31) )
    {
      *(uchar *)(a1 + (int)v6 / 2) = v8;
      v4 = 0;
    }
    else
    {
      v4 = 16 * v8;
    }
    if ( (int)++v6 >= v3 )
      return 1;
  }
  if ( v7 >= 99 )
    goto LABEL_16;
  if ( v7 > 97 )
  {
    if ( v7 != 98 )
      return 0;
    goto LABEL_16;
  }
  if ( v7 >= 97 )
    goto LABEL_16;
  switch ( (uchar)v7 )
  {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      v8 = v4 + v7 - 48;
      goto LABEL_19;
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
      v8 = v4 + v7 - 55;
      goto LABEL_19;
    default:
      return 0;
  }
  return 0;
}

//----- (02228B90) --------------------------------------------------------
int __fastcall Function_2228b90(int a1, int a2, int a3, int a4)
{
  char *v4;
  int *v5;
  int v6;
  uint v7;
  char *v8;
  int *v9;
  int v10;
  char v11;
  char *v12;
  int *v13;
  int v14;
  char v15;
  int *v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int *v21;
  int *v22;
  int v23;
  int v24;
  int v25;
  int v27;
  char v28;
  char v29;
  char v30;
  char v31;
  char v32;
  char v33;
  int v34;

  v34 = a4;
  v27 = 1;
  Function_20d8b7c(&dword_22511A0[823], &dword_22511A0[945]);
  if ( dword_22511A0[956] <= 3u )
    JUMPOUT(__CS__, *((short *)&off_2228BB6 + dword_22511A0[956]) + 35818424);
  switch ( LOBYTE(dword_22511A0[956]) )
  {
    case 0:
      dword_22511A0[831] = 0;
      return v27;
    case 1:
      if ( dword_22511A0[957] )
      {
        v4 = (char *)&dword_22511A0[970];
        v5 = &dword_22511A0[833];
        dword_22511A0[832] = dword_22511A0[957];
        v6 = 0;
        while ( 1 )
        {
          memcpy(&v28, v4, 32);
          v33 = 0;
          v7 = strlen(&v28);
          if ( v7 > 0x10 )
          {
            if ( v7 > 0x1A )
            {
              if ( v7 != 32 )
                goto LABEL_34;
              dword_22511A0[831] = 3;
              Function_2228adc((int)v5, (int)&v28, 32);
            }
            else
            {
              if ( v7 != 26 )
                goto LABEL_34;
              dword_22511A0[831] = 2;
              Function_2228adc((int)v5, (int)&v28, 26);
            }
          }
          else if ( v7 < 0xA )
          {
            if ( !v7 )
              goto LABEL_35;
            if ( v7 != 5 )
              goto LABEL_34;
            dword_22511A0[831] = 1;
            *(uchar *)v5 = v28;
            *((uchar *)v5 + 1) = v29;
            *((uchar *)v5 + 2) = v30;
            *((uchar *)v5 + 3) = v31;
            *((uchar *)v5 + 4) = v32;
          }
          else
          {
            if ( v7 != 10 )
            {
              if ( v7 == 13 )
              {
                dword_22511A0[831] = 2;
                v8 = &v28;
                v9 = v5;
                v10 = 13;
                do
                {
                  v11 = *v8++;
                  *(uchar *)v9 = v11;
                  v9 = (int *)((char *)v9 + 1);
                  --v10;
                }
                while ( v10 );
                goto LABEL_35;
              }
              if ( v7 == 16 )
              {
                dword_22511A0[831] = 3;
                v12 = &v28;
                v13 = v5;
                v14 = 16;
                do
                {
                  v15 = *v12++;
                  *(uchar *)v13 = v15;
                  v13 = (int *)((char *)v13 + 1);
                  --v14;
                }
                while ( v14 );
                goto LABEL_35;
              }
LABEL_34:
              v27 = -7;
              goto LABEL_35;
            }
            dword_22511A0[831] = 1;
            Function_2228adc((int)v5, (int)&v28, 10);
          }
LABEL_35:
          ++v6;
          v4 += 40;
          v5 += 8;
          if ( v6 >= 4 )
            return v27;
        }
      }
      return -7;
    case 2:
      v16 = &dword_22511A0[865];
      v17 = &dword_22511A0[1008];
      dword_22511A0[831] = 4;
      v18 = 8;
      do
      {
        v19 = *v17;
        v20 = v17[1];
        v17 += 2;
        *v16 = v19;
        v16[1] = v20;
        v16 += 2;
        --v18;
      }
      while ( v18 );
      return v27;
    case 3:
      v21 = &dword_22511A0[865];
      v22 = &dword_22511A0[1008];
      dword_22511A0[831] = 5;
      v23 = 8;
      do
      {
        v24 = *v22;
        v25 = v22[1];
        v22 += 2;
        *v21 = v24;
        v21[1] = v25;
        v21 += 2;
        --v23;
      }
      while ( v23 );
      return v27;
    default:
      return -7;
  }
}

//----- (02228D18) --------------------------------------------------------
int Function_2228d18()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  int v13;
  int *v14;
  int v15;
  char v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  uint *v21;
  bool v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v31;
  int v32;
  int v33;
  int v34;
  char v35;
  int v36;
  char v37;
  char v38;
  char v39;
  short v40;
  int v41;

  v0 = 0;
  v32 = -5;
  v33 = 0;
  v31 = 0;
  v1 = 0;
  dword_22511A0[739] = 1;
LABEL_53:
  while ( !v1 && !dword_22511A0[736] )
  {
    OS_Sleep(0x1F4u);
    if ( dword_22511A0[739] <= 0xAu )
      JUMPOUT(__CS__, *((short *)&off_2228D4E + dword_22511A0[739]) + 35818832);
    switch ( LOBYTE(dword_22511A0[739]) )
    {
      case 1:
        v32 = Function_222810c(dword_22511A0[739], v2, v3, v4);
        if ( v32 == 1 )
        {
          dword_22511A0[746] = 3;
          Function_222ad18();
          dword_22511A0[739] = 2;
        }
        else
        {
          v1 = 1;
        }
        break;
      case 2:
        v32 = Function_2227db8(dword_22511A0[739], v2, v3, v4);
        if ( v32 == 1 )
          dword_22511A0[739] = 3;
        else
          v1 = 1;
        break;
      case 3:
        v0 = ((int (*)(void))dword_2208324[0])();
        if ( v0 >= 0 )
        {
          v38 = 8;
          v39 = 2;
          v40 = 486;
          v41 = 0;
          v32 = ((int (*)(void))dword_2208350[0])();
          if ( v32 >= 0 )
          {
            dword_22511A0[739] = 4;
          }
          else
          {
            v32 = -2;
            v1 = 1;
          }
        }
        else
        {
          v32 = -2;
          v1 = 1;
        }
        break;
      case 4:
        if ( (uint)Function_222aa98(dword_22511A0[739]) < 0xFFFFFFFF )
        {
          v37 = 8;
          Function_222880c((int)&dword_22511A0[1036], (int)&v37, v5, v6);
          if ( ((int (__fastcall *)(int, int *, int, int, char *))dword_22083FC[0])(
                 v0,
                 &dword_22511A0[1577],
                 2048,
                 4,
                 &v37) > 0 )
          {
            v7 = Function_2228640((ushort *)&dword_22511A0[1577], &dword_22511A0[752]);
            if ( v7 )
            {
              dword_2249844 = Function_222aa98(v7) + 30000;
              dword_22511A0[739] = 5;
              dword_22511A0[746] = 4;
              Function_222ad18();
            }
          }
        }
        else
        {
          ((void (__fastcall *)(int))dword_2208540[0])(v0);
          v32 = -3;
          v1 = 1;
        }
        break;
      case 5:
        v8 = Function_2228764(&dword_22511A0[1577]);
        dword_22511A0[737] = v8;
        v9 = Function_22283f4(v0, (int)&v37, (int)&dword_22511A0[1577], v8);
        v33 = Function_222aa98(v9);
        dword_22511A0[739] = 6;
        break;
      case 6:
        if ( (uint)Function_222aa98(dword_22511A0[739]) < 0xFFFFFFFF )
        {
          v10 = ((int (__fastcall *)(int, int *, int, int, char *))dword_22083FC[0])(
                  v0,
                  &dword_22511A0[1577],
                  2048,
                  4,
                  &v37);
          if ( v10 > 0
            && (v10 = Function_2228714(
                        (ushort *)&dword_22511A0[1577],
                        3,
                        &dword_22511A0[1065],
                        (int)&dword_22511A0[1036])) != 0 )
          {
            v12 = (char *)Function_22284c0((ushort *)&dword_22511A0[1065], &v36, (int *)&v35, v11);
            if ( v36 == 257 )
            {
              v13 = Function_222aa98(257);
              v14 = &dword_22511A0[1040];
              v34 = v13;
              v15 = 8;
              do
              {
                v16 = *v12++;
                *(uchar *)v14 = v16;
                v14 = (int *)((char *)v14 + 1);
                --v15;
              }
              while ( v15 );
              Function_222aa70(&dword_22511A0[1042], &v34, 4);
              v31 = 0;
              dword_22511A0[739] = 7;
              dword_22511A0[746] = 5;
              dword_2249844 = -1;
              Function_222ad18();
            }
          }
          else if ( Function_222aa98(v10) >= (uint)(v33 + 1000) )
          {
            dword_22511A0[739] = 5;
          }
        }
        else
        {
          ((void (__fastcall *)(int))dword_2208540[0])(v0);
          v32 = -4;
          v1 = 1;
        }
        break;
      case 7:
        dword_22511A0[745] = Function_2228618(&dword_22511A0[1065], 258, (char *)&dword_22511A0[1042], 8);
        v17 = Function_22284f4(
                &dword_22511A0[1577],
                4,
                (char *)&dword_22511A0[1065],
                dword_22511A0[745],
                (int)&dword_22511A0[1036]);
        dword_22511A0[737] = v17;
        v18 = Function_22283f4(v0, (int)&v37, (int)&dword_22511A0[1577], v17);
        v33 = Function_222aa98(v18);
        v19 = &dword_22511A0[881];
        v20 = 18;
        do
        {
          *v19 = 0;
          v19[1] = 0;
          v19[2] = 0;
          v19[3] = 0;
          v21 = v19 + 4;
          v22 = v20 == 1;
          *v21 = 0;
          v21[1] = 0;
          v21[2] = 0;
          v21[3] = 0;
          v19 = v21 + 4;
          --v20;
        }
        while ( !v22 );
        *v19 = 0;
        v19[1] = 0;
        v19[2] = 0;
        v19[3] = 0;
        v19[4] = 0;
        dword_22511A0[739] = 8;
        break;
      case 8:
        v23 = ((int (__fastcall *)(int, int *, int, int, char *))dword_22083FC[0])(
                v0,
                &dword_22511A0[1577],
                2048,
                4,
                &v37);
        if ( v23 > 0
          && (v23 = Function_2228714(
                      (ushort *)&dword_22511A0[1577],
                      5,
                      &dword_22511A0[1065],
                      (int)&dword_22511A0[1040]),
              (dword_22511A0[745] = v23) != 0)
          && (v23 = Function_2228908((ushort *)&dword_22511A0[1065], (int)&dword_22511A0[732], v24, v25)) != 0 )
        {
          LOBYTE(dword_22511A0[732]) = LOBYTE(dword_22511A0[945]) != 0;
          v31 = 0;
          dword_22511A0[739] = 9;
        }
        else if ( Function_222aa98(v23) >= (uint)(v33 + 1000) )
        {
          if ( ++v31 < 10 )
          {
            dword_22511A0[739] = 7;
          }
          else
          {
            ((void (__fastcall *)(int))dword_2208540[0])(v0);
            v32 = -2;
            v1 = 1;
          }
        }
        break;
      case 9:
        dword_22511A0[745] = Function_2228618(&dword_22511A0[1065], 769, (char *)&dword_22511A0[732], 1);
        dword_22511A0[737] = Function_22284f4(
                               &dword_22511A0[1577],
                               6,
                               (char *)&dword_22511A0[1065],
                               dword_22511A0[745],
                               (int)&dword_22511A0[1040]);
        v26 = Function_2227bbc();
        if ( v26 == 7 )
        {
          v27 = Function_22283f4(v0, (int)&v37, (int)&dword_22511A0[1577], dword_22511A0[737]);
          v33 = Function_222aa98(v27);
        }
        else
        {
          v33 = Function_222aa98(v26) + 1000;
          v31 = 10;
        }
        dword_22511A0[739] = 10;
        break;
      case 0xA:
        if ( Function_222aa98(dword_22511A0[739]) >= (uint)(v33 + 1000) )
        {
          v29 = v31 + 1;
          v31 = v29;
          if ( v29 < 10 )
          {
            dword_22511A0[739] = 9;
          }
          else
          {
            v1 = 1;
            v32 = Function_2228b90(v29, v33 + 1000, 1000, v28);
          }
        }
        break;
      default:
        goto LABEL_53;
    }
  }
  if ( v0 )
    ((void (__fastcall *)(int))dword_2208540[0])(v0);
  if ( dword_22511A0[736] )
    v32 = -8;
  return v32;
}

//----- (022290FC) --------------------------------------------------------
int Function_22290fc()
{
  int v0;
  int v1;

  v0 = Function_2228d18();
  dword_22511A0[762] = v0;
  Function_2227edc();
  if ( v0 == 1 )
    v1 = 6;
  else
    v1 = 7;
  dword_22511A0[746] = v1;
  dword_2249844 = -1;
  return Function_222ad18();
}

//----- (02229134) --------------------------------------------------------
int __fastcall Function_2229134(uchar *a1, char *a2, uint a3, int a4, int a5)
{
  int v5;
  char *v6;
  char *v8;
  int *v9;
  int v10;
  char v11;
  long long v12;
  int v13;
  long long v14;
  uchar *v15;
  char *v16;
  char *v17;
  int v18;
  char v19;
  int v20;
  int v21;
  char *v22;
  int v23;
  char v24;
  char *v25;
  int v26;
  char v27;
  uchar *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint v34;
  uint v35;
  char v36;
  char v37;
  char v38;
  int v39;

  v39 = a4;
  v28 = a1;
  v5 = a3;
  v6 = a2;
  v32 = -1499027802;
  v33 = -1499027802;
  if ( a3 & 7 || a5 & 7 )
    return 0;
  v29 = a3 >> 3;
  if ( (int)(a3 >> 3) < 2 )
    return 0;
  v30 = Function_22294ec(&v38, a4, 8 * a5);
  memcpy(v28 + 8, v6, v5);
  v8 = &v36;
  v9 = &v32;
  v10 = 8;
  do
  {
    v11 = *(uchar *)v9;
    v9 = (int *)((char *)v9 + 1);
    *v8++ = v11;
    --v10;
  }
  while ( v10 );
  v31 = 0;
  do
  {
    LODWORD(v12) = v29;
    v13 = 1;
    if ( v29 >= 1 )
    {
      HIDWORD(v12) = v29 >> 31;
      v14 = ll_mul(v12, v31);
      do
      {
        v15 = &v28[8 * v13];
        v16 = &v28[8 * v13];
        v17 = &v37;
        v18 = 8;
        do
        {
          v19 = *v16++;
          *v17++ = v19;
          --v18;
        }
        while ( v18 );
        Function_2229934(&v38, v30);
        v20 = (ull)(v13 + v14) >> 32;
        v21 = v13 + v14;
        v35 = ((v21 & 0xFF0000u) >> 8) | ((ushort)(v21 & 0xFF00) << 8) | ((uchar)v21 << 24) | ((v21 & 0xFF000000) >> 24) | ((uint)(uchar)v20 >> 8) | (v20 & 0xFF00u) / 0x1000000;
        v34 = ((v20 & 0xFF000000) >> 24) | ((v21 & 0xFF000000) << 8) | ((v21 & 0xFF0000) << 24) | ((uchar)v20 << 24) | ((ushort)(v20 & 0xFF00) << 8) | ((v20 & 0xFF0000u) >> 8);
        Function_22294a4();
        v22 = &v37;
        v23 = 8;
        do
        {
          v24 = *v22++;
          *v15++ = v24;
          --v23;
        }
        while ( v23 );
        ++v13;
      }
      while ( v13 <= v29 );
    }
    ++v31;
  }
  while ( v31 < 6 );
  v25 = &v36;
  v26 = 8;
  do
  {
    v27 = *v25++;
    *v28++ = v27;
    --v26;
  }
  while ( v26 );
  return 1;
}

//----- (022292EC) --------------------------------------------------------
int __fastcall Function_22292ec(uchar *a1, char *a2, int a3, int a4, int a5)
{
  int v5;
  char *v6;
  char *v8;
  char *v9;
  int v10;
  char v11;
  int v12;
  long long v13;
  long long v14;
  int v15;
  int v16;
  long long v17;
  int v18;
  char *v19;
  uchar *v20;
  char *v21;
  int v22;
  char v23;
  char *v24;
  int v25;
  char v26;
  uchar *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint v34;
  uint v35;
  char v36;
  char v37;
  char v38;
  int v39;

  v39 = a4;
  v27 = a1;
  v29 = 1;
  v5 = a3;
  v6 = a2;
  v32 = -1499027802;
  v33 = -1499027802;
  if ( a3 & 7 || a5 & 7 )
    return 0;
  v28 = (uint)(a3 - 1) >> 3;
  if ( v28 < 2 )
    return 0;
  v30 = Function_22297a4(&v38, a4, 8 * a5);
  v8 = &v36;
  v9 = v6;
  v10 = 8;
  do
  {
    v11 = *v9++;
    *v8++ = v11;
    --v10;
  }
  while ( v10 );
  memcpy(v27, v6 + 8, v5 - 1);
  v31 = 5;
  do
  {
    v12 = v28;
    LODWORD(v13) = v28;
    if ( v28 > 0 )
    {
      HIDWORD(v13) = v28 >> 31;
      v14 = ll_mul(v13, v31);
      do
      {
        v17 = v12 + v14;
        v15 = HIDWORD(v17);
        v16 = v17;
        v35 = ((v16 & 0xFF0000u) >> 8) | ((ushort)(v16 & 0xFF00) << 8) | ((uchar)v16 << 24) | ((v16 & 0xFF000000) >> 24) | ((uint)(uchar)v15 >> 8) | ((v15 & 0xFF00u) >> 24);
        v34 = ((v15 & 0xFF000000) >> 24) | ((v16 & 0xFF000000) << 8) | ((v16 & 0xFF0000) << 24) | ((uchar)v15 << 24) | ((ushort)(v15 & 0xFF00) << 8) | ((v15 & 0xFF0000u) >> 8);
        Function_22294a4();
        v18 = 8 * (v12 - 1);
        v19 = &v37;
        v20 = &v27[v18];
        v21 = &v27[v18];
        v22 = 8;
        do
        {
          v23 = *v21++;
          *v19++ = v23;
          --v22;
        }
        while ( v22 );
        Function_2229cf0(&v38, v30);
        v24 = &v37;
        v25 = 8;
        do
        {
          v26 = *v24++;
          *v20++ = v26;
          --v25;
        }
        while ( v25 );
        --v12;
      }
      while ( v12 > 0 );
    }
    --v31;
  }
  while ( v31 >= 0 );
  if ( Function_20d5190((uchar *)&v32, (uchar *)&v36, 8) )
    v29 = 0;
  return v29;
}

//----- (022294A4) --------------------------------------------------------
int __fastcall Function_22294a4(uchar *a1, uchar *a2, uchar *a3)
{
  int result;

  *a3 = *a2 ^ *a1;
  a3[1] = a2[1] ^ a1[1];
  a3[2] = a2[2] ^ a1[2];
  a3[3] = a2[3] ^ a1[3];
  a3[4] = a2[4] ^ a1[4];
  a3[5] = a2[5] ^ a1[5];
  a3[6] = a2[6] ^ a1[6];
  result = (uchar)a2[7] ^ (uchar)a1[7];
  a3[7] = result;
  return result;
}

//----- (022294EC) --------------------------------------------------------
int __fastcall Function_22294ec(int *a1, uchar *a2, int a3)
{
  uchar *v3;
  int *v4;
  uint v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int result;
  int *v11;
  uint v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  int v17;
  int *v18;
  uint v19;
  int v20;
  uint v21;
  int v22;
  int v23;
  uint v24;
  uint v25;
  int v26;
  int v27;
  int v28;

  v3 = a2;
  v28 = 0;
  *a1 = (*v3 << 24) ^ (v3[1] << 16) ^ (v3[2] << 8) ^ v3[3];
  a1[1] = (v3[4] << 24) ^ (v3[5] << 16) ^ (v3[6] << 8) ^ v3[7];
  a1[2] = (v3[8] << 24) ^ (v3[9] << 16) ^ (v3[10] << 8) ^ v3[11];
  a1[3] = (v3[12] << 24) ^ (v3[13] << 16) ^ (v3[14] << 8) ^ v3[15];
  if ( a3 == 128 )
  {
    v4 = &dword_2246464;
    while ( 1 )
    {
      v5 = a1[3];
      v6 = *v4;
      ++v4;
      v7 = v6 ^ dword_224808C[v5 >> 24] & 0xFF ^ *(int *)((char *)dword_224808C + (4 * v5 & 0x3FF)) & 0xFF00 ^ *a1 ^ *(int *)((char *)dword_224808C + (4 * (v5 >> 16) & 0x3FF)) & 0xFF000000 ^ *(int *)((char *)dword_224808C + (4 * (v5 >> 8) & 0x3FF)) & 0xFF0000;
      a1[4] = v7;
      v8 = v7 ^ a1[1];
      a1[5] = v8;
      v9 = v8 ^ a1[2];
      a1[6] = v9;
      a1[7] = a1[3] ^ v9;
      if ( ++v28 >= 10 )
        break;
      a1 += 4;
    }
    result = 10;
  }
  else
  {
    a1[4] = (a2[16] << 24) ^ (a2[17] << 16) ^ (a2[18] << 8) ^ a2[19];
    a1[5] = (a2[20] << 24) ^ (a2[21] << 16) ^ (a2[22] << 8) ^ a2[23];
    if ( a3 == 192 )
    {
      v11 = &dword_2246464;
      while ( 1 )
      {
        v12 = a1[5];
        v13 = *v11;
        ++v11;
        v14 = v13 ^ dword_224808C[v12 >> 24] & 0xFF ^ *(int *)((char *)dword_224808C + (4 * v12 & 0x3FF)) & 0xFF00 ^ *(int *)((char *)dword_224808C + (4 * (v12 >> 16) & 0x3FF)) & 0xFF000000 ^ *a1 ^ *(int *)((char *)dword_224808C + (4 * (v12 >> 8) & 0x3FF)) & 0xFF0000;
        a1[6] = v14;
        v15 = v14 ^ a1[1];
        a1[7] = v15;
        v16 = v15 ^ a1[2];
        a1[8] = v16;
        a1[9] = a1[3] ^ v16;
        if ( ++v28 >= 8 )
          break;
        v17 = a1[4] ^ a1[9];
        a1[10] = v17;
        a1[11] = a1[5] ^ v17;
        a1 += 6;
      }
      result = 12;
    }
    else
    {
      a1[6] = (a2[24] << 24) ^ (a2[25] << 16) ^ (a2[26] << 8) ^ a2[27];
      a1[7] = (a2[28] << 24) ^ (a2[29] << 16) ^ (a2[30] << 8) ^ a2[31];
      if ( a3 == 256 )
      {
        v18 = &dword_2246464;
        while ( 1 )
        {
          v19 = a1[7];
          v20 = *v18;
          ++v18;
          v21 = v20 ^ dword_224808C[v19 >> 24] & 0xFF ^ *(int *)((char *)dword_224808C + (4 * v19 & 0x3FF)) & 0xFF00 ^ *(int *)((char *)dword_224808C + (4 * (v19 >> 16) & 0x3FF)) & 0xFF000000 ^ *a1 ^ *(int *)((char *)dword_224808C + (4 * (v19 >> 8) & 0x3FF)) & 0xFF0000;
          a1[8] = v21;
          v22 = v21 ^ a1[1];
          a1[9] = v22;
          v23 = v22 ^ a1[2];
          a1[10] = v23;
          a1[11] = a1[3] ^ v23;
          if ( ++v28 >= 7 )
            break;
          v24 = a1[11];
          v25 = *(int *)((char *)dword_224808C + (4 * v24 & 0x3FF)) & 0xFF ^ *(int *)((char *)dword_224808C
                                                                                    + (4 * (v24 >> 8) & 0x3FF)) & 0xFF00 ^ *(int *)((char *)dword_224808C + (4 * (v24 >> 16) & 0x3FF)) & 0xFF0000 ^ dword_224808C[v24 >> 24] & 0xFF000000 ^ a1[4];
          a1[12] = v25;
          v26 = v25 ^ a1[5];
          a1[13] = v26;
          v27 = v26 ^ a1[6];
          a1[14] = v27;
          a1[15] = a1[7] ^ v27;
          a1 += 8;
        }
        result = 14;
      }
      else
      {
        result = 0;
      }
    }
  }
  return result;
}

//----- (022297A4) --------------------------------------------------------
int __fastcall Function_22297a4(int *a1, uchar *a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint v14;
  uint v15;
  uint v16;
  int i;

  v3 = a1;
  v4 = Function_22294ec(a1, a2, a3);
  v5 = v4;
  v6 = 4 * v4;
  v7 = 0;
  if ( v6 > 0 )
  {
    v8 = v3;
    v9 = &v3[v6];
    do
    {
      v10 = *v8;
      v7 += 4;
      *v8 = *v9;
      *v9 = v10;
      v11 = v8[1];
      v6 -= 4;
      v8[1] = v9[1];
      v9[1] = v11;
      v12 = v8[2];
      v8[2] = v9[2];
      v9[2] = v12;
      v13 = v8[3];
      v8[3] = v9[3];
      v9[3] = v13;
      v8 += 4;
      v9 -= 4;
    }
    while ( v7 < v6 );
  }
  for ( i = 1; i < v5; ++i )
  {
    v3 += 4;
    *v3 = *(int *)((char *)dword_224848C + (4 * dword_224808C[(uint)*v3 >> 24] & 0x3FF)) ^ *(int *)((char *)dword_224888C + (4 * *(int *)((char *)dword_224808C + (4 * ((uint)*v3 >> 16) & 0x3FF)) & 0x3FF)) ^ *(int *)((char *)&dword_224648C + (4 * *(int *)((char *)dword_224808C + (4 * ((uint)*v3 >> 8) & 0x3FF)) & 0x3FF)) ^ *(int *)((char *)dword_224688C + (4 * *(int *)((char *)dword_224808C + (4 * *v3 & 0x3FF)) & 0x3FF));
    v14 = v3[1];
    v3[1] = *(int *)((char *)dword_224848C + (4 * dword_224808C[v14 >> 24] & 0x3FF)) ^ *(int *)((char *)dword_224888C
                                                                                              + (4
                                                                                               * *(int *)((char *)dword_224808C + (4 * (v14 >> 16) & 0x3FF)) & 0x3FF)) ^ *(int *)((char *)&dword_224648C + (4 * *(int *)((char *)dword_224808C + (4 * (v14 >> 8) & 0x3FF)) & 0x3FF)) ^ *(int *)((char *)dword_224688C + (4 * *(int *)((char *)dword_224808C + (4 * v14 & 0x3FF)) & 0x3FF));
    v15 = v3[2];
    v3[2] = *(int *)((char *)dword_224848C + (4 * dword_224808C[v15 >> 24] & 0x3FF)) ^ *(int *)((char *)dword_224888C
                                                                                              + (4
                                                                                               * *(int *)((char *)dword_224808C + (4 * (v15 >> 16) & 0x3FF)) & 0x3FF)) ^ *(int *)((char *)&dword_224648C + (4 * *(int *)((char *)dword_224808C + (4 * (v15 >> 8) & 0x3FF)) & 0x3FF)) ^ *(int *)((char *)dword_224688C + (4 * *(int *)((char *)dword_224808C + (4 * v15 & 0x3FF)) & 0x3FF));
    v16 = v3[3];
    v3[3] = *(int *)((char *)dword_224848C + (4 * dword_224808C[v16 >> 24] & 0x3FF)) ^ *(int *)((char *)dword_224888C
                                                                                              + (4
                                                                                               * *(int *)((char *)dword_224808C + (4 * (v16 >> 16) & 0x3FF)) & 0x3FF)) ^ *(int *)((char *)&dword_224648C + (4 * *(int *)((char *)dword_224808C + (4 * (v16 >> 8) & 0x3FF)) & 0x3FF)) ^ *(int *)((char *)dword_224688C + (4 * *(int *)((char *)dword_224808C + (4 * v16 & 0x3FF)) & 0x3FF));
  }
  return v5;
}

//----- (02229934) --------------------------------------------------------
uint __fastcall Function_2229934(uint *a1, int a2, uchar *a3, uchar *a4)
{
  int v4;
  uchar *v5;
  uint v6;
  uint v7;
  int v8;
  uint v9;
  uint v10;
  uint v11;
  uint v12;
  uint v13;
  uint result;
  int v15;
  uint v16;
  uint v17;
  uint v18;
  uint v19;

  v4 = a2;
  v5 = a3;
  v17 = (*v5 << 24) ^ (v5[1] << 16) ^ (a3[2] << 8) ^ v5[3] ^ *a1;
  v16 = (v5[4] << 24) ^ (v5[5] << 16) ^ (v5[6] << 8) ^ v5[7] ^ a1[1];
  v6 = a1[2] ^ (v5[8] << 24) ^ (v5[9] << 16) ^ (v5[10] << 8) ^ v5[11];
  v7 = a1[3] ^ (a3[13] << 16) ^ (a3[12] << 24) ^ (a3[14] << 8) ^ a3[15];
  v15 = v4 >> 1;
  while ( 1 )
  {
    v18 = *(int *)((char *)dword_224788C + (4 * (v6 >> 8) & 0x3FF)) ^ dword_224708C[v17 >> 24] ^ *(int *)((char *)dword_224748C + (4 * (v16 >> 16) & 0x3FF)) ^ *(int *)((char *)dword_2247C8C + (4 * v7 & 0x3FF)) ^ a1[4];
    v19 = *(int *)((char *)dword_224788C + (4 * (v7 >> 8) & 0x3FF)) ^ dword_224708C[v16 >> 24] ^ *(int *)((char *)dword_224748C + (4 * (v6 >> 16) & 0x3FF)) ^ *(int *)((char *)dword_2247C8C + (4 * v17 & 0x3FF)) ^ a1[5];
    v8 = a1[7];
    v9 = a1[6] ^ *(int *)((char *)dword_224788C + (4 * (v17 >> 8) & 0x3FF)) ^ dword_224708C[v6 >> 24] ^ *(int *)((char *)dword_224748C + (4 * (v7 >> 16) & 0x3FF)) ^ *(int *)((char *)dword_2247C8C + (4 * v16 & 0x3FF));
    a1 += 8;
    v10 = *(int *)((char *)dword_224788C + (4 * (v16 >> 8) & 0x3FF)) ^ *(int *)((char *)dword_224748C
                                                                              + (4 * (v17 >> 16) & 0x3FF)) ^ dword_224708C[v7 >> 24] ^ *(int *)((char *)dword_2247C8C + (4 * v6 & 0x3FF)) ^ v8;
    if ( !--v15 )
      break;
    v17 = *(int *)((char *)dword_2247C8C + (4 * v10 & 0x3FF)) ^ dword_224708C[v18 >> 24] ^ *(int *)((char *)dword_224748C
                                                                                                  + (4 * (v19 >> 16) & 0x3FF)) ^ *(int *)((char *)dword_224788C + (4 * (v9 >> 8) & 0x3FF)) ^ *a1;
    v16 = *(int *)((char *)dword_2247C8C + (4 * v18 & 0x3FF)) ^ dword_224708C[v19 >> 24] ^ *(int *)((char *)dword_224748C
                                                                                                  + (4 * (v9 >> 16) & 0x3FF)) ^ *(int *)((char *)dword_224788C + (4 * (v10 >> 8) & 0x3FF)) ^ a1[1];
    v6 = a1[2] ^ *(int *)((char *)dword_224788C + (4 * (v18 >> 8) & 0x3FF)) ^ dword_224708C[v9 >> 24] ^ *(int *)((char *)dword_224748C + (4 * (v10 >> 16) & 0x3FF)) ^ *(int *)((char *)dword_2247C8C + (4 * v19 & 0x3FF));
    v7 = a1[3] ^ *(int *)((char *)dword_224748C + (4 * (v18 >> 16) & 0x3FF)) ^ dword_224708C[v10 >> 24] ^ *(int *)((char *)dword_224788C + (4 * (v19 >> 8) & 0x3FF)) ^ *(int *)((char *)dword_2247C8C + (4 * v9 & 0x3FF));
  }
  v11 = *a1 ^ dword_224808C[v18 >> 24] & 0xFF000000 ^ *(int *)((char *)dword_224808C + (4 * (v19 >> 16) & 0x3FF)) & 0xFF0000 ^ *(int *)((char *)dword_224808C + (4 * (v9 >> 8) & 0x3FF)) & 0xFF00 ^ *(int *)((char *)dword_224808C + (4 * v10 & 0x3FF)) & 0xFF;
  *a4 = HIBYTE(v11);
  a4[1] = BYTE2(v11);
  a4[2] = BYTE1(v11);
  a4[3] = v11;
  v12 = a1[1] ^ dword_224808C[v19 >> 24] & 0xFF000000 ^ *(int *)((char *)dword_224808C + (4 * (v9 >> 16) & 0x3FF)) & 0xFF0000 ^ *(int *)((char *)dword_224808C + (4 * (v10 >> 8) & 0x3FF)) & 0xFF00 ^ *(int *)((char *)dword_224808C + (4 * v18 & 0x3FF)) & 0xFF;
  a4[4] = HIBYTE(v12);
  a4[5] = BYTE2(v12);
  a4[6] = BYTE1(v12);
  a4[7] = v12;
  v13 = a1[2] ^ *(int *)((char *)dword_224808C + (4 * (v18 >> 8) & 0x3FF)) & 0xFF00 ^ *(int *)((char *)dword_224808C
                                                                                             + (4 * (v10 >> 16) & 0x3FF)) & 0xFF0000 ^ dword_224808C[v9 >> 24] & 0xFF000000 ^ *(int *)((char *)dword_224808C + (4 * v19 & 0x3FF)) & 0xFF;
  a4[8] = HIBYTE(v13);
  a4[9] = BYTE2(v13);
  a4[10] = BYTE1(v13);
  a4[11] = v13;
  result = dword_224808C[v10 >> 24] & 0xFF000000 ^ *(int *)((char *)dword_224808C + (4 * (v18 >> 16) & 0x3FF)) & 0xFF0000 ^ *(int *)((char *)dword_224808C + (4 * (v19 >> 8) & 0x3FF)) & 0xFF00 ^ *(int *)((char *)dword_224808C + (4 * v9 & 0x3FF)) & 0xFF ^ a1[3];
  a4[12] = HIBYTE(result);
  a4[13] = BYTE2(result);
  a4[14] = BYTE1(result);
  a4[15] = result;
  return result;
}

//----- (02229CF0) --------------------------------------------------------
uint __fastcall Function_2229cf0(uint *a1, int a2, uchar *a3, uchar *a4)
{
  int v4;
  uchar *v5;
  uint v6;
  uint v7;
  int v8;
  uint v9;
  uint v10;
  uint v11;
  uint v12;
  uint result;
  uchar *v14;
  int v15;
  uint v16;
  uint v17;
  uint v18;
  uint v19;
  uint v20;

  v4 = a2;
  v5 = a3;
  v14 = a4;
  v17 = (*v5 << 24) ^ (v5[1] << 16) ^ (a3[2] << 8) ^ v5[3] ^ *a1;
  v16 = (v5[4] << 24) ^ (v5[5] << 16) ^ (v5[6] << 8) ^ v5[7] ^ a1[1];
  v19 = (v5[8] << 24) ^ (v5[9] << 16) ^ (v5[10] << 8) ^ v5[11] ^ a1[2];
  v6 = a1[3] ^ (a3[13] << 16) ^ (a3[12] << 24) ^ (a3[14] << 8) ^ a3[15];
  v15 = v4 >> 1;
  while ( 1 )
  {
    v18 = *(int *)((char *)dword_224888C + (4 * (v6 >> 16) & 0x3FF)) ^ dword_224848C[v17 >> 24] ^ *(int *)((char *)&dword_224648C + (4 * (v19 >> 8) & 0x3FF)) ^ *(int *)((char *)dword_224688C + (4 * v16 & 0x3FF)) ^ a1[4];
    v20 = *(int *)((char *)dword_224888C + (4 * (v17 >> 16) & 0x3FF)) ^ dword_224848C[v16 >> 24] ^ *(int *)((char *)&dword_224648C + (4 * (v6 >> 8) & 0x3FF)) ^ *(int *)((char *)dword_224688C + (4 * v19 & 0x3FF)) ^ a1[5];
    v7 = a1[6] ^ *(int *)((char *)&dword_224648C + (4 * (v17 >> 8) & 0x3FF)) ^ *(int *)((char *)dword_224888C
                                                                                      + (4 * (v16 >> 16) & 0x3FF)) ^ dword_224848C[v19 >> 24] ^ *(int *)((char *)dword_224688C + (4 * v6 & 0x3FF));
    v8 = a1[7];
    a1 += 8;
    v9 = *(int *)((char *)dword_224688C + (4 * v17 & 0x3FF)) ^ *(int *)((char *)dword_224888C + (4 * (v19 >> 16) & 0x3FF)) ^ dword_224848C[v6 >> 24] ^ *(int *)((char *)&dword_224648C + (4 * (v16 >> 8) & 0x3FF)) ^ v8;
    if ( !--v15 )
      break;
    v17 = *(int *)((char *)dword_224688C + (4 * v20 & 0x3FF)) ^ dword_224848C[v18 >> 24] ^ *(int *)((char *)dword_224888C
                                                                                                  + (4 * (v9 >> 16) & 0x3FF)) ^ *(int *)((char *)&dword_224648C + (4 * (v7 >> 8) & 0x3FF)) ^ *a1;
    v16 = *(int *)((char *)dword_224688C + (4 * v7 & 0x3FF)) ^ dword_224848C[v20 >> 24] ^ *(int *)((char *)dword_224888C
                                                                                                 + (4 * (v18 >> 16) & 0x3FF)) ^ *(int *)((char *)&dword_224648C + (4 * (v9 >> 8) & 0x3FF)) ^ a1[1];
    v19 = *(int *)((char *)&dword_224648C + (4 * (v18 >> 8) & 0x3FF)) ^ dword_224848C[v7 >> 24] ^ *(int *)((char *)dword_224888C + (4 * (v20 >> 16) & 0x3FF)) ^ *(int *)((char *)dword_224688C + (4 * v9 & 0x3FF)) ^ a1[2];
    v6 = a1[3] ^ dword_224848C[v9 >> 24] ^ *(int *)((char *)dword_224888C + (4 * (v7 >> 16) & 0x3FF)) ^ *(int *)((char *)&dword_224648C + (4 * (v20 >> 8) & 0x3FF)) ^ *(int *)((char *)dword_224688C + (4 * v18 & 0x3FF));
  }
  v10 = *a1 ^ dword_2246C8C[v18 >> 24] & 0xFF000000 ^ *(int *)((char *)dword_2246C8C + (4 * (v9 >> 16) & 0x3FF)) & 0xFF0000 ^ *(int *)((char *)dword_2246C8C + (4 * (v7 >> 8) & 0x3FF)) & 0xFF00 ^ *(int *)((char *)dword_2246C8C + (4 * v20 & 0x3FF)) & 0xFF;
  *v14 = HIBYTE(v10);
  v14[1] = BYTE2(v10);
  v14[2] = BYTE1(v10);
  v14[3] = v10;
  v11 = a1[1] ^ dword_2246C8C[v20 >> 24] & 0xFF000000 ^ *(int *)((char *)dword_2246C8C + (4 * (v18 >> 16) & 0x3FF)) & 0xFF0000 ^ *(int *)((char *)dword_2246C8C + (4 * (v9 >> 8) & 0x3FF)) & 0xFF00 ^ *(int *)((char *)dword_2246C8C + (4 * v7 & 0x3FF)) & 0xFF;
  v14[4] = HIBYTE(v11);
  v14[5] = BYTE2(v11);
  v14[6] = BYTE1(v11);
  v14[7] = v11;
  v12 = a1[2] ^ *(int *)((char *)dword_2246C8C + (4 * (v18 >> 8) & 0x3FF)) & 0xFF00 ^ *(int *)((char *)dword_2246C8C
                                                                                             + (4 * (v20 >> 16) & 0x3FF)) & 0xFF0000 ^ dword_2246C8C[v7 >> 24] & 0xFF000000 ^ *(int *)((char *)dword_2246C8C + (4 * v9 & 0x3FF)) & 0xFF;
  v14[8] = HIBYTE(v12);
  v14[9] = BYTE2(v12);
  v14[10] = BYTE1(v12);
  v14[11] = v12;
  result = *(int *)((char *)dword_2246C8C + (4 * (v20 >> 8) & 0x3FF)) & 0xFF00 ^ dword_2246C8C[v9 >> 24] & 0xFF000000 ^ *(int *)((char *)dword_2246C8C + (4 * (v7 >> 16) & 0x3FF)) & 0xFF0000 ^ *(int *)((char *)dword_2246C8C + (4 * v18 & 0x3FF)) & 0xFF ^ a1[3];
  v14[12] = HIBYTE(result);
  v14[13] = BYTE2(result);
  v14[14] = BYTE1(result);
  v14[15] = result;
  return result;
}

//----- (0222A0AC) --------------------------------------------------------
uint *__fastcall Function_222a0ac(uint *result)
{
  result[5] = 0;
  result[4] = 0;
  *result = 1732584193;
  result[1] = -271733879;
  result[2] = -1732584194;
  result[3] = 271733878;
  return result;
}

//----- (0222A0D4) --------------------------------------------------------
int __fastcall Function_222a0d4(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  uint v6;
  int v7;
  uint v8;
  uint v9;
  int v10;

  v3 = a1;
  v4 = a2;
  v5 = *(uint *)(a1 + 16);
  v6 = a3;
  v7 = (v5 >> 3) & 0x3F;
  v8 = 8 * a3;
  v9 = v5 + v8;
  *(uint *)(v3 + 16) = v9;
  if ( v9 < v8 )
    ++*(uint *)(v3 + 20);
  *(uint *)(v3 + 20) += v6 >> 29;
  v10 = 64 - v7;
  if ( v6 < 64 - v7 )
  {
    v10 = 0;
  }
  else
  {
    Function_222aa40(v3 + 24 + v7, v4, v10);
    Function_222a1a0(v3, v3 + 24);
    for ( ; v10 + 63 < v6; v10 += 64 )
      Function_222a1a0(v3, v4 + v10);
    v7 = 0;
  }
  return Function_222aa40(v3 + 24 + v7, v4 + v10, v6 - v10);
}

//----- (0222A14C) --------------------------------------------------------
int __fastcall Function_222a14c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  char v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a2;
  Function_222a9e8(&v9, a2 + 16, 8);
  v6 = (*(uint *)(v5 + 16) >> 3) & 0x3F;
  if ( v6 >= 0x38 )
    v7 = 120;
  else
    v7 = 56;
  Function_222a0d4(v5, (int)dword_22498B8, v7 - v6);
  Function_222a0d4(v5, (int)&v9, 8u);
  Function_222a9e8(v4, v5, 16);
  return Function_222aa58(v5, 0, 88);
}

//----- (0222A1A0) --------------------------------------------------------
int __fastcall Function_222a1a0(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  uint v9;
  int v10;
  uint v11;
  int v12;
  uint v13;
  int v14;
  uint v15;
  int v16;
  uint v17;
  int v18;
  uint v19;
  int v20;
  uint v21;
  int v22;
  uint v23;
  int v24;
  int v25;
  uint v26;
  int v27;
  uint v28;
  int v29;
  uint v30;
  int v31;
  uint v32;
  int v33;
  uint v34;
  int v35;
  uint v36;
  int v37;
  uint v38;
  int v39;
  uint v40;
  int v41;
  uint v42;
  int v43;
  uint v44;
  int v45;
  uint v46;
  int v47;
  uint v48;
  int v49;
  uint v50;
  int v51;
  uint v52;
  int v53;
  uint v54;
  int v55;
  uint v56;
  int v57;
  uint v58;
  int v59;
  uint v60;
  int v61;
  uint v62;
  int v63;
  uint v64;
  int v65;
  uint v66;
  int v67;
  uint v68;
  int v69;
  int v70;
  uint v71;
  uint v72;
  int v73;
  uint v74;
  int v75;
  uint v76;
  int v77;
  uint v78;
  int v79;
  uint v80;
  int v81;
  uint v82;
  int v83;
  uint v84;
  int v85;
  uint v86;
  int v87;
  uint v88;
  int v89;
  uint v90;
  int v91;
  uint v92;
  int v93;
  uint v94;
  int v95;
  uint v96;
  int v97;
  uint v98;
  int v99;
  uint v100;
  int v101;
  uint v102;
  int v103;
  uint v104;
  int v105;
  uint v106;
  int v107;
  uint v108;
  int v109;
  uint v110;
  int v111;
  uint v112;
  int v113;
  uint v114;
  int v115;
  uint v116;
  int v117;
  uint v118;
  int v119;
  uint v120;
  int v121;
  uint v122;
  int v123;
  uint v124;
  int v125;
  uint v126;
  int v127;
  uint v128;
  int v129;
  uint v130;
  int v131;
  uint v132;
  int v133;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;

  v2 = a1;
  v3 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  Function_222aa14(&v135, a2, 64);
  v7 = v3 + v135 + (v4 & v5 | ~v4 & v6) - 680876936;
  v8 = ((v7 >> 25) | (v7 << 7)) + v4;
  v9 = v6 + v136 + (~v8 & v5 | v8 & v4) - 389564586;
  v10 = ((v9 >> 20) | (v9 << 12)) + v8;
  v11 = v5 + v137 + (~v10 & v4 | v10 & v8) + 606105819;
  v12 = ((v11 >> 15) | (v11 << 17)) + v10;
  v13 = v4 + v138 + (~v12 & v8 | v12 & v10) - 1044525330;
  v14 = ((v13 >> 10) | (v13 << 22)) + v12;
  v15 = v8 + v139 + (~v14 & v10 | v14 & v12) - 176418897;
  v16 = ((v15 >> 25) | (v15 << 7)) + v14;
  v17 = v10 + v140 + (~v16 & v12 | v16 & v14) + 1200080426;
  v18 = ((v17 >> 20) | (v17 << 12)) + v16;
  v19 = v12 + v141 + (~v18 & v14 | v18 & v16) - 1473231341;
  v20 = ((v19 >> 15) | (v19 << 17)) + v18;
  v21 = v14 + v142 + (~v20 & v16 | v20 & v18) - 45705983;
  v22 = ((v21 >> 10) | (v21 << 22)) + v20;
  v23 = v16 + v143 + (~v22 & v18 | v22 & v20) + 1770035416;
  v24 = ((v23 >> 25) | (v23 << 7)) + v22;
  v25 = v144;
  v26 = v18 + v144 + (~v24 & v20 | v24 & v22) - 1958414417;
  v27 = ((v26 >> 20) | (v26 << 12)) + v24;
  v28 = v20 + v145 + (~v27 & v22 | v27 & v24) - 42063;
  v29 = ((v28 >> 15) | (v28 << 17)) + v27;
  v30 = v22 + v146 + (~v29 & v24 | v29 & v27) - 1990404162;
  v31 = ((v30 >> 10) | (v30 << 22)) + v29;
  v32 = v24 + v147 + (~v31 & v27 | v31 & v29) + 1804603682;
  v33 = ((v32 >> 25) | (v32 << 7)) + v31;
  v34 = v27 + v148 + (~v33 & v29 | v33 & v31) - 40341101;
  v35 = ((v34 >> 20) | (v34 << 12)) + v33;
  v36 = v29 + v149 + (~v35 & v31 | v35 & v33) - 1502002290;
  v37 = ((v36 >> 15) | (v36 << 17)) + v35;
  v38 = v31 + v150 + (v37 & v35 | ~v37 & v33) + 1236535329;
  v39 = ((v38 >> 10) | (v38 << 22)) + v37;
  v40 = v33 + v136 + (~v35 & v37 | v39 & v35) - 165796510;
  v41 = ((v40 >> 27) | 32 * v40) + v39;
  v42 = v35 + v141 + (v39 & ~v37 | v41 & v37) - 1069501632;
  v43 = ((v42 >> 23) | (v42 << 9)) + v41;
  v44 = v37 + v146 + (~v39 & v41 | v43 & v39) + 643717713;
  v45 = ((v44 >> 18) | (v44 << 14)) + v43;
  v46 = v39 + v135 + (~v41 & v43 | v45 & v41) - 373897302;
  v47 = ((v46 >> 12) | (v46 << 20)) + v45;
  v48 = v41 + v140 + (~v43 & v45 | v47 & v43) - 701558691;
  v49 = ((v48 >> 27) | 32 * v48) + v47;
  v50 = v43 + v145 + (~v45 & v47 | v49 & v45) + 38016083;
  v51 = ((v50 >> 23) | (v50 << 9)) + v49;
  v52 = v45 + v150 + (~v47 & v49 | v51 & v47) - 660478335;
  v53 = ((v52 >> 18) | (v52 << 14)) + v51;
  v54 = v47 + v139 + (~v49 & v51 | v53 & v49) - 405537848;
  v55 = ((v54 >> 12) | (v54 << 20)) + v53;
  v56 = v49 + v144 + (~v51 & v53 | v55 & v51) + 568446438;
  v57 = ((v56 >> 27) | 32 * v56) + v55;
  v58 = v51 + v149 + (~v53 & v55 | v57 & v53) - 1019803690;
  v59 = ((v58 >> 23) | (v58 << 9)) + v57;
  v60 = v53 + v138 + (~v55 & v57 | v59 & v55) - 187363961;
  v61 = ((v60 >> 18) | (v60 << 14)) + v59;
  v62 = v55 + v143 + (~v57 & v59 | v61 & v57) + 1163531501;
  v63 = ((v62 >> 12) | (v62 << 20)) + v61;
  v64 = v57 + v148 + (~v59 & v61 | v63 & v59) - 1444681467;
  v65 = ((v64 >> 27) | 32 * v64) + v63;
  v66 = v59 + v137 + (~v61 & v63 | v65 & v61) - 51403784;
  v67 = ((v66 >> 23) | (v66 << 9)) + v65;
  v68 = v61 + v142 + (~v63 & v65 | v67 & v63) + 1735328473;
  v69 = ((v68 >> 18) | (v68 << 14)) + v67;
  v70 = v147 + (~v65 & v67 | v69 & v65);
  v71 = (((uint)(v63 + v70 - 1926607734) >> 12) | ((v63 + v70 - 1926607734) << 20)) + v69;
  v72 = v65 + v140 + (v67 ^ v71 ^ v69) - 378558;
  v73 = ((v72 >> 28) | 16 * v72) + v71;
  v74 = v67 + v143 + (v69 ^ v73 ^ v71) - 2022574463;
  v75 = ((v74 >> 21) | (v74 << 11)) + v73;
  v76 = v69 + v146 + (v71 ^ v75 ^ v73) + 1839030562;
  v77 = ((v76 >> 16) | (v76 << 16)) + v75;
  v78 = v71 + v149 + (v73 ^ v77 ^ v75) - (uint)&Unknown_21023f8[174335];
  v79 = ((v78 >> 9) | (v78 << 23)) + v77;
  v80 = v73 + v136 + (v75 ^ v79 ^ v77) - 1530992060;
  v81 = ((v80 >> 28) | 16 * v80) + v79;
  v82 = v75 + v139 + (v77 ^ v81 ^ v79) + 1272893353;
  v83 = ((v82 >> 21) | (v82 << 11)) + v81;
  v84 = v77 + v142 + (v79 ^ v83 ^ v81) - 155497632;
  v85 = ((v84 >> 16) | (v84 << 16)) + v83;
  v86 = v79 + v145 + (v81 ^ v85 ^ v83) - 1094730640;
  v87 = ((v86 >> 9) | (v86 << 23)) + v85;
  v88 = v81 + v148 + (v83 ^ v87 ^ v85) + 681279174;
  v89 = ((v88 >> 28) | 16 * v88) + v87;
  v90 = v83 + v135 + (v85 ^ v89 ^ v87) - 358537222;
  v91 = ((v90 >> 21) | (v90 << 11)) + v89;
  v92 = v85 + v138 + (v87 ^ v91 ^ v89) - 722521979;
  v93 = ((v92 >> 16) | (v92 << 16)) + v91;
  v94 = v87 + v141 + (v89 ^ v93 ^ v91) + 76029189;
  v95 = ((v94 >> 9) | (v94 << 23)) + v93;
  v96 = v89 + v144 + (v91 ^ v95 ^ v93) - 640364487;
  v97 = ((v96 >> 28) | 16 * v96) + v95;
  v98 = v91 + v147 + (v93 ^ v97 ^ v95) - 421815835;
  v99 = ((v98 >> 21) | (v98 << 11)) + v97;
  v100 = v93 + v150 + (v95 ^ v99 ^ v97) + 530742520;
  v101 = ((v100 >> 16) | (v100 << 16)) + v99;
  v102 = v95 + v137 + (v97 ^ v101 ^ v99) - 995338651;
  v103 = ((v102 >> 9) | (v102 << 23)) + v101;
  v104 = v97 + v135 + (v101 ^ (~v99 | v103)) - 198630844;
  v105 = ((v104 >> 26) | (v104 << 6)) + v103;
  v106 = v99 + v142 + (v103 ^ (~v101 | v105)) + 1126891415;
  v107 = ((v106 >> 22) | (v106 << 10)) + v105;
  v108 = v101 + v149 + (v105 ^ (~v103 | v107)) - 1416354905;
  v109 = ((v108 >> 17) | (v108 << 15)) + v107;
  v110 = v103 + v140 + (v107 ^ (~v105 | v109)) - 57434055;
  v111 = ((v110 >> 11) | (v110 << 21)) + v109;
  v112 = v105 + v147 + (v109 ^ (~v107 | v111)) + 1700485571;
  v113 = ((v112 >> 26) | (v112 << 6)) + v111;
  v114 = v107 + v138 + (v111 ^ (~v109 | v113)) - 1894986606;
  v115 = ((v114 >> 22) | (v114 << 10)) + v113;
  v116 = v109 + v145 + (v113 ^ (~v111 | v115)) - 1051523;
  v117 = ((v116 >> 17) | (v116 << 15)) + v115;
  v118 = v111 + v136 + (v115 ^ (~v113 | v117)) - 2054922799;
  v119 = ((v118 >> 11) | (v118 << 21)) + v117;
  v120 = v113 + v143 + (v117 ^ (~v115 | v119)) + 1873313359;
  v121 = ((v120 >> 26) | (v120 << 6)) + v119;
  v122 = v115 + v150 + ((~v117 | v121) ^ v119) - 30611744;
  v123 = ((v122 >> 22) | (v122 << 10)) + v121;
  v124 = v117 + v141 + (v121 ^ (~v119 | v123)) - 1560198380;
  v125 = ((v124 >> 17) | (v124 << 15)) + v123;
  v126 = v119 + v148 + (v123 ^ (~v121 | v125)) + 1309151649;
  v127 = ((v126 >> 11) | (v126 << 21)) + v125;
  v128 = v121 + v139 + (v125 ^ (~v123 | v127)) - 145523070;
  v129 = ((v128 >> 26) | (v128 << 6)) + v127;
  v130 = v123 + v146 + (v127 ^ (~v125 | v129)) - 1120210379;
  v131 = ((v130 >> 22) | (v130 << 10)) + v129;
  v132 = v125 + v137 + (v129 ^ (~v127 | v131)) + 718787259;
  v133 = ((v132 >> 17) | (v132 << 15)) + v131;
  *v2 += v129;
  v2[1] += (((v127 + v25 + (v131 ^ (~v129 | (uint)v133)) - 343485551) >> 11) | ((v127
                                                                                       + v25
                                                                                       + (v131 ^ (~v129 | v133))
                                                                                       - 343485551) << 21))
         + v133;
  v2[2] += v133;
  v2[3] += v131;
  return Function_222aa58(&v135, 0, 64);
}

//----- (0222A9E8) --------------------------------------------------------
int __fastcall Function_222a9e8(int result, uint *a2, uint a3)
{
  uint v3;
  uchar *v4;
  int v5;

  v3 = 0;
  if ( a3 )
  {
    do
    {
      v4 = (uchar *)(result + v3);
      *(uchar *)(result + v3) = *a2;
      v3 += 4;
      v4[1] = *(ushort *)a2 >> 8;
      v4[2] = *a2 >> 16;
      v5 = *a2;
      ++a2;
      v4[3] = HIBYTE(v5);
    }
    while ( v3 < a3 );
  }
  return result;
}

//----- (0222AA14) --------------------------------------------------------
int *__fastcall Function_222aa14(int *result, int a2, uint a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = 0;
  if ( a3 )
  {
    do
    {
      v4 = *(uchar *)(a2 + v3 + 3) << 24;
      v5 = *(uchar *)(a2 + v3 + 2) << 16;
      v6 = *(uchar *)(a2 + v3);
      v7 = *(uchar *)(a2 + v3 + 1) << 8;
      v3 += 4;
      *result = v6 | v7 | v5 | v4;
      ++result;
    }
    while ( v3 < a3 );
  }
  return result;
}

//----- (0222AA40) --------------------------------------------------------
int __fastcall Function_222aa40(int result, int a2, uint a3)
{
  uint v3;

  v3 = 0;
  if ( a3 )
  {
    do
    {
      *(uchar *)(result + v3) = *(uchar *)(a2 + v3);
      ++v3;
    }
    while ( v3 < a3 );
  }
  return result;
}

//----- (0222AA58) --------------------------------------------------------
uchar *__fastcall Function_222aa58(uchar *result, char a2, uint a3)
{
  uint v3;

  v3 = 0;
  if ( a3 )
  {
    do
    {
      ++v3;
      *result++ = a2;
    }
    while ( v3 < a3 );
  }
  return result;
}

//----- (0222AA70) --------------------------------------------------------
int __fastcall Function_222aa70(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  char v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_222a0ac(&v9);
  Function_222a0d4((int)&v9, v4, v5);
  return Function_222a14c(v3, (int)&v9, v6, v7);
}

//----- (0222AA98) --------------------------------------------------------
void Function_222aa98()
{
  OS_GetTick();
  ll_udiv();
}

//----- (0222AAB4) --------------------------------------------------------
int *__fastcall Function_222aab4(int a1, int a2)
{
  uint v2;
  int *v3;
  int *v4;

  v2 = a1 * a2;
  v3 = (int *)((int (__fastcall *)(int))dword_22511A0[733])(a1 * a2);
  v4 = v3;
  if ( v3 )
    Call_FillMemWithValue(v3, 0, v2);
  return v4;
}

//----- (0222AAD8) --------------------------------------------------------
int __fastcall Function_222aad8(int a1)
{
  return ((int (__fastcall *)(int))dword_22511A0[735])(a1);
}

//----- (0222AAE8) --------------------------------------------------------
int __fastcall Function_222aae8(uchar *a1, char a2)
{
  int v2;
  uchar *v3;
  int v4;
  char v5;

  v2 = (a2 & 0xF0) >> 4;
  v3 = a1;
  v4 = 0;
  do
  {
    if ( v2 > 9 )
      v5 = v2 + 55;
    else
      v5 = v2 + 48;
    ++v4;
    *v3++ = v5;
    v2 = a2 & 0xF;
  }
  while ( v4 < 2 );
  *v3 = 0;
  return v3 - a1;
}

//----- (0222AB1C) --------------------------------------------------------
int __fastcall Function_222ab1c(uchar *a1, char *a2)
{
  char *v2;
  uchar *v3;
  int v4;
  char v5;
  uchar *v6;
  uchar *v8;

  v8 = a1;
  v2 = a2;
  v3 = a1;
  v4 = 0;
  do
  {
    v5 = *v2++;
    v6 = &v3[Function_222aae8(v3, v5)];
    v3 = v6;
    if ( v4 < 5 )
    {
      v3 = v6 + 1;
      *v6 = 58;
    }
    ++v4;
  }
  while ( v4 < 6 );
  *v3 = 0;
  return v3 - v8;
}

//----- (0222AB50) --------------------------------------------------------
int __fastcall Function_222ab50(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int result;
  int *v8;
  int v9;
  int v10;
  uint *v11;

  v6 = a1;
  if ( dword_22511A0[746] >= 1 && dword_22511A0[746] <= 5 )
    return -10;
  dword_2249848 = a2;
  dword_22511A0[746] = 7;
  dword_22511A0[763] = a3;
  dword_22511A0[733] = a4;
  dword_22511A0[735] = a5;
  dword_2249840 = a6;
  result = Function_2227cbc(a2);
  dword_22511A0[761] = 1;
  if ( result >= 0 )
  {
    dword_22511A0[744] = ((int (__fastcall *)(int))dword_22511A0[733])(2048);
    if ( dword_22511A0[744] )
    {
      if ( Function_20c1f24() == 1 )
      {
        OS_CreateThread(&dword_22511A0[775], (int)Function_22290fc, 0, dword_22511A0[744] + 2048, 2048, v6);
        dword_22511A0[746] = 1;
        Function_222aa98();
        v8 = &dword_22511A0[823];
        v9 = 7;
        dword_2249844 = v10 + 60000;
        dword_22511A0[736] = 0;
        do
        {
          *v8 = 0;
          v8[1] = 0;
          v8[2] = 0;
          v8[3] = 0;
          v11 = v8 + 4;
          *v11 = 0;
          v11[1] = 0;
          v11[2] = 0;
          v11[3] = 0;
          v8 = v11 + 4;
          --v9;
        }
        while ( v9 );
        *v8 = 0;
        v8[1] = 0;
        Function_222ad18();
        OS_WakeupThreadDirect((int)&dword_22511A0[775]);
        result = 1;
        dword_22511A0[757] = 1;
      }
      else
      {
        result = -9;
        dword_22511A0[762] = -9;
      }
    }
    else
    {
      result = -1;
      dword_22511A0[762] = -1;
    }
  }
  else
  {
    dword_22511A0[762] = result;
  }
  return result;
}

//----- (0222AC38) --------------------------------------------------------
int Function_222ac38()
{
  int result;

  if ( dword_22511A0[757] )
  {
    dword_22511A0[736] = 1;
    while ( dword_22511A0[746] >= 1 && dword_22511A0[746] <= 5 )
      OS_Sleep(0x64u);
    OS_Sleep(0x1F4u);
    while ( !Function_20c2204((int)&dword_22511A0[775]) )
    {
      OS_WakeupThreadDirect((int)&dword_22511A0[775]);
      Function_20c21d4((int)&dword_22511A0[775]);
    }
    if ( dword_22511A0[744] )
    {
      ((void (__fastcall *)(int))dword_22511A0[735])(dword_22511A0[744]);
      dword_22511A0[744] = 0;
    }
    dword_22511A0[757] = 0;
    if ( dword_22511A0[746] != dword_22511A0[746] )
      Function_222ad18();
  }
  if ( dword_22511A0[761] <= 0 )
    return -10;
  result = Function_2227d60();
  dword_22511A0[761] = 0;
  return result;
}

//----- (0222ACCC) --------------------------------------------------------
int __fastcall Function_222accc(uint *a1)
{
  *a1 = dword_22511A0[746];
  a1[1] = -1;
  a1[2] = dword_22511A0[762];
  return 1;
}

//----- (0222AD04) --------------------------------------------------------
int __fastcall Function_222ad04(uchar *a1)
{
  memcpy(a1, (char *)&dword_22511A0[823], 232);
  return 1;
}

//----- (0222AD18) --------------------------------------------------------
int Function_222ad18()
{
  char v1;

  Function_222accc(&v1);
  return ((int (__fastcall *)(char *))dword_22511A0[763])(&v1);
}

//----- (0222AD34) --------------------------------------------------------
int __fastcall Function_222ad34(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = Function_2245068(12, 4);
  dword_2252CF4[340] = v2;
  *(uchar *)(v2 + 8) = v1;
  v3 = Function_2243f60(0, 71);
  LOWORD(v1) = *((uchar *)dword_2248C8C + v1);
  *(uint *)(dword_2252CF4[340] + 4) = v3;
  *(ushort *)(*(uint *)(dword_2252CF4[340] + 4) + 4) = *(ushort *)(*(uint *)(dword_2252CF4[340] + 4) + 4) & 0xF3FF | 0x400;
  v4 = *(uint *)(dword_2252CF4[340] + 4);
  *(uint *)v4 &= 0xFFFFF3FF;
  *(ushort *)(v4 + 4) = *(ushort *)(v4 + 4) & 0xFFF | ((ushort)v1 << 12);
  **(uint **)(dword_2252CF4[340] + 4) = **(uint **)(dword_2252CF4[340] + 4) & 0xFE00FF00 | 0xE6008B;
  result = Function_2246304(1, Function_222ae40, 0, 120);
  *(uint *)dword_2252CF4[340] = result;
  return result;
}

//----- (0222AE04) --------------------------------------------------------
int Function_222ae04()
{
  Function_22463cc(1, *(uint *)dword_2252CF4[340]);
  Function_2245b74(*(uint *)(dword_2252CF4[340] + 4));
  return Function_224508c(&dword_2252CF4[340]);
}

//----- (0222AE40) --------------------------------------------------------
uint Function_222ae40()
{
  int v0;
  int v1;
  short v2;
  uint *v3;
  uint result;

  *(uchar *)(dword_2252CF4[340] + 9) = Function_20bd140(*(uchar *)(dword_2252CF4[340] + 9) + 1, 40);
  v0 = Function_20bd104(*(uchar *)(dword_2252CF4[340] + 9), 5);
  Function_2243ecc(0, v0 + 71, *(uint *)(dword_2252CF4[340] + 4));
  *(ushort *)(*(uint *)(dword_2252CF4[340] + 4) + 4) = *(ushort *)(*(uint *)(dword_2252CF4[340] + 4) + 4) & 0xF3FF | 0x400;
  v1 = *(uint *)(dword_2252CF4[340] + 4);
  v2 = *((uchar *)dword_2248C8C + *(uchar *)(dword_2252CF4[340] + 8));
  *(uint *)v1 &= 0xFFFFF3FF;
  *(ushort *)(v1 + 4) = *(ushort *)(v1 + 4) & 0xFFF | (v2 << 12);
  v3 = *(uint **)(dword_2252CF4[340] + 4);
  result = *v3 & 0xFE00FF00 | 0xE6008B;
  *v3 = result;
  return result;
}

//----- (0222AF0C) --------------------------------------------------------
int __fastcall Function_222af0c(int a1)
{
  int v1;
  int v2;
  int v3;
  uchar *v4;
  int v5;
  int result;

  v1 = a1;
  v2 = *((uchar *)dword_2248CBC + a1);
  dword_2252CF4[341] = Function_2245068(28, 4);
  *(uchar *)(dword_2252CF4[341] + 22) = -2;
  *(uchar *)(dword_2252CF4[341] + 23) = v1;
  v3 = 0;
  if ( v2 > 0 )
  {
    v4 = (uchar *)dword_2248CA0 + 2 * v1;
    do
    {
      v5 = *v4++;
      *(uint *)(dword_2252CF4[341] + 4 * v3) = Function_2243f8c(0, v5, 1);
      Function_2243de4(*(uint *)(dword_2252CF4[341] + 4 * v3++), -1, 1);
    }
    while ( v3 < v2 );
  }
  *(uint *)(dword_2252CF4[341] + 8) = Function_2243f8c(0, 1, 1);
  Function_2243de4(*(uint *)(dword_2252CF4[341] + 8), -1, 1);
  Function_222b0d8(192);
  result = Function_2246304(0, Function_222b16c, 0, 120);
  *(uint *)(dword_2252CF4[341] + 12) = result;
  return result;
}

//----- (0222B004) --------------------------------------------------------
int Function_222b004()
{
  *(uchar *)(dword_2252CF4[341] + 25) = 1;
  return Function_22463a4(*(uint *)(dword_2252CF4[341] + 12), Function_222b3b4);
}

//----- (0222B034) --------------------------------------------------------
int Function_222b034()
{
  return *(char *)(dword_2252CF4[341] + 22);
}

//----- (0222B048) --------------------------------------------------------
char __fastcall Function_222b048(char result)
{
  if ( *(char *)(dword_2252CF4[341] + 22) == -1 )
    *(uchar *)(dword_2252CF4[341] + 22) = result;
  return result;
}

//----- (0222B068) --------------------------------------------------------
char __fastcall Function_222b068(char result)
{
  *(uchar *)(dword_2252CF4[341] + 22) = result;
  return result;
}

//----- (0222B07C) --------------------------------------------------------
BOOL Function_222b07c()
{
  BOOL result;

  if ( dword_2252CF4[341] )
    result = *(uchar *)(dword_2252CF4[341] + 25) == 0;
  else
    result = 1;
  return result;
}

//----- (0222B0A8) --------------------------------------------------------
int Function_222b0a8()
{
  int result;

  result = dword_2252CF4[341];
  *(uchar *)(dword_2252CF4[341] + 24) = 0;
  return result;
}

//----- (0222B0C0) --------------------------------------------------------
int Function_222b0c0()
{
  int result;

  result = dword_2252CF4[341];
  *(uchar *)(dword_2252CF4[341] + 24) = 1;
  return result;
}

//----- (0222B0D8) --------------------------------------------------------
int __fastcall Function_222b0d8(int a1)
{
  int v1;
  int v2;
  int result;
  int i;

  v1 = a1;
  v2 = *((uchar *)dword_2248CBC + *(uchar *)(dword_2252CF4[341] + 23));
  result = Function_2243cf4(*(uint *)(dword_2252CF4[341] + 8), -1, 0, a1);
  for ( i = 0; i < v2; ++i )
    result = Function_2243cf4(
               *(uint *)(dword_2252CF4[341] + 4 * i),
               -1,
               LOWORD(dword_2248C98[*(uchar *)(i + 2 * *(uchar *)(dword_2252CF4[341] + 23)
                                                           + 35949742)]),
               v1 + 4);
  return result;
}

//----- (0222B16C) --------------------------------------------------------
int __fastcall Function_222b16c(int a1)
{
  int v1;
  int result;
  int v3;
  char v4;

  v1 = a1;
  Function_2243e44(*(uint *)(dword_2252CF4[341] + 8), 0, &v4, &v3);
  v3 -= 4;
  Function_222b0d8(v3);
  result = v3;
  if ( v3 <= 168 )
  {
    Function_222b0d8(168);
    result = Function_22463a4(v1, Function_222b1d8);
  }
  return result;
}

//----- (0222B1D8) --------------------------------------------------------
int __fastcall Function_222b1d8(int result)
{
  *(uchar *)(dword_2252CF4[341] + 22) = -1;
  if ( (ushort)++*(ushort *)(dword_2252CF4[341] + 20) >= 4u )
  {
    *(ushort *)(dword_2252CF4[341] + 20) = 0;
    result = Function_22463a4(result, Function_222b228);
  }
  return result;
}

//----- (0222B228) --------------------------------------------------------
int Function_222b228()
{
  int v0;
  int result;
  int v2;
  int v3;
  int v4;
  char v5;

  v0 = *((uchar *)dword_2248CBC + *(uchar *)(dword_2252CF4[341] + 23));
  if ( *(uchar *)(dword_2252CF4[341] + 24) )
    goto LABEL_8;
  result = -1;
  if ( *(char *)(dword_2252CF4[341] + 22) != -1 )
    return result;
  v2 = 0;
  if ( v0 <= 0 )
    goto LABEL_8;
  while ( 1 )
  {
    Function_2244c50(
      &dword_2248C98[*(uchar *)(v2 + 2 * *(uchar *)(dword_2252CF4[341] + 23) + 35949742)],
      &dword_2248C94,
      &v5);
    if ( Function_22455b8(&v5) )
      break;
    if ( ++v2 >= v0 )
      goto LABEL_8;
  }
  if ( *(uint *)(dword_2252CF4[341] + 16) )
  {
LABEL_8:
    result = dword_2252CF4[341];
    *(uchar *)(dword_2252CF4[341] + 22) = -1;
  }
  else
  {
    v3 = *((uchar *)dword_2248CA0 + 2 * *(uchar *)(dword_2252CF4[341] + 23) + v2);
    v4 = Function_2243bbc(*(uint *)(dword_2252CF4[341] + 4 * v2), 0);
    Function_2243ecc(0, v3 + 1, v4);
    Function_2243cf4(
      *(uint *)(dword_2252CF4[341] + 4 * v2),
      -1,
      LOWORD(dword_2248C98[*(uchar *)(v2 + 2 * *(uchar *)(dword_2252CF4[341] + 23) + 35949742)]),
      HIWORD(dword_2248C98[*(uchar *)(v2 + 2 * *(uchar *)(dword_2252CF4[341] + 23) + 35949742)]));
    Function_2243de4(*(uint *)(dword_2252CF4[341] + 4 * v2), -1, 1);
    *(uint *)(dword_2252CF4[341] + 16) = Function_2246304(0, Function_222b490, 0, 110);
    result = dword_2252CF4[341];
    *(uchar *)(dword_2252CF4[341] + 22) = v2;
  }
  return result;
}

//----- (0222B3B4) --------------------------------------------------------
int __fastcall Function_222b3b4(int a1)
{
  int v1;
  int result;
  int v3;
  char v4;

  v1 = a1;
  Function_2243e44(*(uint *)(dword_2252CF4[341] + 8), 0, &v4, &v3);
  v3 += 4;
  Function_222b0d8(v3);
  result = v3;
  if ( v3 >= 192 )
    result = Function_22463a4(v1, Function_222b418);
  return result;
}

//----- (0222B418) --------------------------------------------------------
int __fastcall Function_222b418(int a1)
{
  int v1;
  int v2;

  Function_22463ac(0, a1);
  v1 = *(uint *)(dword_2252CF4[341] + 16);
  if ( v1 )
    Function_22463ac(0, v1);
  v2 = 0;
  do
  {
    if ( *(uint *)(dword_2252CF4[341] + 4 * v2) )
      ((void (*)(void))Function_2243b3c)();
    ++v2;
  }
  while ( v2 < 2 );
  Function_2243b3c(*(uint *)(dword_2252CF4[341] + 8));
  return Function_224508c(&dword_2252CF4[341]);
}

//----- (0222B490) --------------------------------------------------------
uint __fastcall Function_222b490(int a1)
{
  uint result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v6 = a1;
  result = (ushort)++*(ushort *)(dword_2252CF4[341] + 20);
  if ( result >= 0x10 )
  {
    v2 = 0;
    v3 = *((uchar *)dword_2248CBC + *(uchar *)(dword_2252CF4[341] + 23));
    if ( v3 > 0 )
    {
      do
      {
        v4 = *((uchar *)dword_2248CA0 + 2 * *(uchar *)(dword_2252CF4[341] + 23) + v2);
        v5 = Function_2243bbc(*(uint *)(dword_2252CF4[341] + 4 * v2), 0);
        Function_2243ecc(0, v4, v5);
        Function_2243de4(*(uint *)(dword_2252CF4[341] + 4 * v2++), -1, 1);
      }
      while ( v2 < v3 );
    }
    Function_222b0d8(168);
    result = 0;
    *(ushort *)(dword_2252CF4[341] + 20) = 0;
    *(uchar *)(dword_2252CF4[341] + 22) = -1;
    if ( *(uint *)(dword_2252CF4[341] + 16) )
    {
      *(uint *)(dword_2252CF4[341] + 16) = 0;
      result = Function_22463ac(0, v6);
    }
  }
  return result;
}

//----- (0222B580) --------------------------------------------------------
int *Function_222b580()
{
  int *result;

  result = &dword_2252CF4[342];
  LOBYTE(dword_2252CF4[342]) = 0;
  return result;
}

//----- (0222B594) --------------------------------------------------------
int __fastcall Function_222b594(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( LOBYTE(dword_2252CF4[342]) )
    return 0;
  Function_222b700("char/jtNull.nsc.l", GXS_LoadBG0Scr);
  REG_BG0HOFS_SUB = 26345472;
  v7 = Function_224467c(1, 0);
  v8 = Function_222f8d0(dword_2252CF4[377], v3, v4, v5);
  v9 = Function_222b8f8();
  Function_2244a9c(v7, 20, 0, 216, 64, 2, v9, v8);
  Function_2244c08(v7);
  result = 1;
  LOBYTE(dword_2252CF4[342]) = 1;
  return result;
}

//----- (0222B668) --------------------------------------------------------
int Function_222b668()
{
  if ( !LOBYTE(dword_2252CF4[342]) )
    return 0;
  Function_22448e0(1);
  LOBYTE(dword_2252CF4[342]) = 0;
  return 1;
}

//----- (0222B6A0) --------------------------------------------------------
int *__fastcall Function_222b6a0(char *a1)
{
  char *v1;
  int *result;
  int v3;
  char v4;

  v1 = a1;
  strncpy(&dword_2252CF4[343], a1, 63);
  if ( v1[5] == 120 )
    return &dword_2252CF4[343];
  v3 = Function_222f74c();
  if ( v1[5] == 121 && v3 )
    return &dword_2252CF4[343];
  v4 = aJefgisk[v3];
  result = &dword_2252CF4[343];
  BYTE1(dword_2252CF4[344]) = v4;
  return result;
}

//----- (0222B700) --------------------------------------------------------
int __fastcall Function_222b700(char *a1, void (__fastcall *a2)(int, uint, int), int a3, int a4)
{
  void (__fastcall *v4)(int, uint, int);
  int *v5;
  int v6;
  int v8;

  v8 = a4;
  v4 = a2;
  v5 = Function_222b6a0(a1);
  v6 = Function_2243738(v5, &v8, 4);
  DC_FlushRange(v6, v8);
  v4(v6, 0, v8);
  return Function_224382c(v6);
}

//----- (0222B740) --------------------------------------------------------
int __fastcall Function_222b740(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;

  v7 = a4;
  v4 = a1;
  Function_222f6e8(&v6, 0);
  result = v6;
  if ( v6 == 1 )
    return Function_223ea28(v4);
  if ( v6 == 2 )
    result = Function_223efbc(v4);
  return result;
}

//----- (0222B790) --------------------------------------------------------
int __fastcall Function_222b790(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;

  v7 = a4;
  v4 = a1;
  Function_222f6e8(0, &v6);
  result = v6;
  if ( v6 == 1 )
    result = Function_222af0c(v4);
  return result;
}

//----- (0222B7C8) --------------------------------------------------------
int __fastcall Function_222b7c8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = Function_224467c(0, 0);
  v3 = Function_222f8b8(dword_2252CF4[377], v1);
  v4 = Function_222b8f8();
  Function_2244a9c(v2, 13, 40, 230, 112, 2, v4, v3);
  return Function_2244c08(v2);
}

//----- (0222B83C) --------------------------------------------------------
int __fastcall Function_222b83c(int a1, int a2)
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

  v2 = a1;
  v3 = a2;
  v4 = Function_224467c(0, 0);
  v5 = Function_222f8b8(dword_2252CF4[377], v3);
  v6 = Function_222b8f8();
  v7 = Function_2244a9c(v4, 13, 60, 230, 94, 2, v6, v5);
  v8 = Function_222f74c(v7);
  v9 = v8;
  v10 = Function_222f74c(v8);
  Function_2244904(v4, (ushort)aKLP[2 * v9], (ushort)aKLP[2 * v10 + 1], 2, 521, v2);
  return Function_2244c08(v4);
}

//----- (0222B8F8) --------------------------------------------------------
int __fastcall Function_222b8f8(int a1)
{
  return dword_2248CD4[Function_222f74c(a1)];
}

//----- (0222B910) --------------------------------------------------------
int Function_222b910()
{
  int result;

  result = Function_2245068(16, 4);
  dword_2252CF4[359] = result;
  return result;
}

//----- (0222B930) --------------------------------------------------------
int Function_222b930()
{
  Function_222baf4();
  return Function_224508c(&dword_2252CF4[359]);
}

//----- (0222B948) --------------------------------------------------------
int __fastcall Function_222b948(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uchar *v7;
  int v8;
  int v10;
  int v11;

  v4 = a1;
  v10 = a2;
  v11 = a3;
  v5 = a4;
  Function_222baf4();
  v6 = 0;
  v7 = (uchar *)dword_2248D14 + 2 * v4;
  do
  {
    v8 = *v7++;
    *(uint *)(dword_2252CF4[359] + 4 * v6) = Function_2243f8c(0, v8, 1);
    Function_2243de4(*(uint *)(dword_2252CF4[359] + 4 * v6++), -1, 1);
  }
  while ( v6 < 2 );
  Function_2243cf4(*(uint *)dword_2252CF4[359], -1, v10, v5);
  return Function_2243cf4(*(uint *)(dword_2252CF4[359] + 4), -1, v11, v5);
}

//----- (0222BA04) --------------------------------------------------------
int __fastcall Function_222ba04(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;

  v4 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  v5 = 6;
  Function_222baf4();
  v6 = 0;
  do
  {
    *(uint *)(dword_2252CF4[359] + 4 * v6) = Function_2243f8c(0, v5, 1);
    Function_2243de4(*(uint *)(dword_2252CF4[359] + 4 * v6++), -1, 1);
    ++v5;
  }
  while ( v6 < 4 );
  Function_2243cf4(*(uint *)dword_2252CF4[359], -1, v4, v9);
  Function_2243cf4(*(uint *)(dword_2252CF4[359] + 4), -1, v8, v9);
  Function_2243cf4(*(uint *)(dword_2252CF4[359] + 8), -1, v4, v10);
  return Function_2243cf4(*(uint *)(dword_2252CF4[359] + 12), -1, v8, v10);
}

//----- (0222BAF4) --------------------------------------------------------
int Function_222baf4()
{
  int v0;
  int result;

  v0 = 0;
  do
  {
    result = *(uint *)(dword_2252CF4[359] + 4 * v0);
    if ( result )
    {
      Function_2243b3c(result);
      result = dword_2252CF4[359];
      *(uint *)(dword_2252CF4[359] + 4 * v0) = 0;
    }
    ++v0;
  }
  while ( v0 < 4 );
  return result;
}

//----- (0222BB34) --------------------------------------------------------
int Function_222bb34()
{
  int v0;
  int v1;
  int result;
  int v3;
  int v4;

  dword_2252CF4[360] = Function_2245068(192, 4);
  v1 = Function_222b700(
         "char/jbBgHl.ncg.l",
         (void (__fastcall *)(int, uint, int))GX_LoadBG1Char,
         (int)&dword_2252CF4[360],
         v0);
  result = Function_222f75c(v1);
  if ( !result )
    return Function_222b700("char/jb2HlWiFi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG1Scr, v3, v4);
  if ( result == 1 )
    result = Function_222b700("char/jb2HlAp.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG1Scr, v3, v4);
  return result;
}

//----- (0222BBAC) --------------------------------------------------------
int Function_222bbac()
{
  return Function_224508c(&dword_2252CF4[360]);
}

//----- (0222BBC0) --------------------------------------------------------
int __fastcall Function_222bbc0(int a1)
{
  int *v1;
  uint *v2;
  uint v3;

  v1 = Function_222b6a0((char *)dword_2249AE4[a1]);
  v2 = (uint *)Function_2243738(v1, 0, 4);
  MIi_CpuCopyFast(v2, (uint *)dword_2252CF4[360], 0xC0u, v3);
  Function_224382c(v2);
  return Function_2246304(1, Function_222bc4c, 0, 120);
}

//----- (0222BC1C) --------------------------------------------------------
int Function_222bc1c()
{
  int v0;

  v0 = Function_223ddcc();
  return Function_222bbc0(*(uchar *)(v0 + 244) + 5);
}

//----- (0222BC34) --------------------------------------------------------
int Function_222bc34()
{
  int v0;

  v0 = Function_223ddcc();
  return Function_222bbc0(*(uchar *)(v0 + 244) + 2);
}

//----- (0222BC4C) --------------------------------------------------------
int __fastcall Function_222bc4c(int a1)
{
  int v1;

  v1 = a1;
  DC_FlushRange(dword_2252CF4[360], 192);
  GX_LoadBG1Scr(dword_2252CF4[360], 0, 0xC0u);
  return Function_22463ac(1, v1);
}

//----- (0222BC8C) --------------------------------------------------------
int __fastcall Function_222bc8c(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  result = dword_2252CF4[361];
  if ( !dword_2252CF4[361] )
  {
    v3 = Function_2245068(12, 4);
    v4 = LOBYTE(dword_2248D20[v1]);
    dword_2252CF4[361] = v3;
    *(uchar *)(v3 + 8) = v1;
    *(uint *)dword_2252CF4[361] = Function_2243f60(0, v4);
    **(uint **)dword_2252CF4[361] = **(uint **)dword_2252CF4[361] & 0xFE00FF00 | 0xE50026;
    *(ushort *)(*(uint *)dword_2252CF4[361] + 4) = *(ushort *)(*(uint *)dword_2252CF4[361] + 4) & 0xF3FF | 0x800;
    result = Function_2246304(0, Function_222bd88, 0, 120);
    *(uint *)(dword_2252CF4[361] + 4) = result;
  }
  return result;
}

//----- (0222BD44) --------------------------------------------------------
int Function_222bd44()
{
  int result;

  result = dword_2252CF4[361];
  if ( dword_2252CF4[361] )
  {
    Function_22463cc(0, *(uint *)(dword_2252CF4[361] + 4));
    Function_2245b74(*(uint *)dword_2252CF4[361]);
    result = Function_224508c(&dword_2252CF4[361]);
  }
  return result;
}

//----- (0222BD88) --------------------------------------------------------
int Function_222bd88()
{
  int v0;
  short v1;
  int result;

  v0 = 0;
  v1 = REG_IME;
  LOWORD(REG_IME) = 0;
  if ( WM_GetAllowedChannel() != 0x8000 )
    v0 = WM_GetLinkLevel();
  LOWORD(REG_IME) = v1;
  Function_2243ecc(
    0,
    *((uchar *)&dword_2248D20[*(char *)(dword_2252CF4[361] + 8)] + v0),
    *(uint *)dword_2252CF4[361]);
  **(uint **)dword_2252CF4[361] = **(uint **)dword_2252CF4[361] & 0xFE00FF00 | 0xE50026;
  result = (ushort)(*(ushort *)(*(uint *)dword_2252CF4[361] + 4) & 0xF3FF) | 0x800;
  *(ushort *)(*(uint *)dword_2252CF4[361] + 4) = result;
  return result;
}

//----- (0222BE30) --------------------------------------------------------
int Function_222be30()
{
  int v0;
  int v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  short v15;
  short v16;
  int v17;
  ushort v18;
  ushort v19;
  ushort v20;
  ushort v21;

  v18 = 0;
  v19 = 0;
  v20 = 17;
  v21 = 18;
  dword_2252CF4[362] = Function_2245068(296, 4);
  *(uchar *)(dword_2252CF4[362] + 284) = -1;
  v0 = 0;
  *(uchar *)(dword_2252CF4[362] + 289) = 0;
  *(uchar *)(dword_2252CF4[362] + 291) = 1;
  *(uchar *)(dword_2252CF4[362] + 292) = 1;
  do
  {
    *(uint *)(dword_2252CF4[362] + 4 * v0 + 48) = Function_2243f60(0, 52);
    **(uint **)(dword_2252CF4[362] + 4 * v0 + 48) = **(uint **)(dword_2252CF4[362] + 4 * v0 + 48) & 0xC1FFFCFF | 0x200;
    v1 = *(uint *)(dword_2252CF4[362] + 4 * v0++ + 48);
    *(ushort *)(v1 + 4) = *(ushort *)(v1 + 4) & 0xF3FF | 0xC00;
  }
  while ( v0 < 47 );
  v2 = 0;
  v3 = &byte_2248D38;
  do
  {
    v4 = (uchar)*v3++;
    *(uint *)(dword_2252CF4[362] + 4 * v2 + 236) = Function_2243f60(0, v4);
    **(uint **)(dword_2252CF4[362] + 4 * v2 + 236) = **(uint **)(dword_2252CF4[362] + 4 * v2 + 236) & 0xC1FFFCFF | 0x200;
    v5 = *(uint *)(dword_2252CF4[362] + 4 * v2++ + 236);
    *(ushort *)(v5 + 4) = *(ushort *)(v5 + 4) & 0xF3FF | 0xC00;
  }
  while ( v2 < 4 );
  v6 = 0;
  v7 = &byte_2248D30;
  do
  {
    v8 = (uchar)*v7++;
    *(uint *)(dword_2252CF4[362] + 4 * v6 + 252) = Function_2243f8c(0, v8, 1);
    Function_2243bd0(*(uint *)(dword_2252CF4[362] + 4 * v6 + 252), -1, 512, 0);
    Function_2243de4(*(uint *)(dword_2252CF4[362] + 4 * v6++ + 252), -1, 3);
  }
  while ( v6 < 2 );
  v9 = 0;
  v16 = 0;
  do
  {
    v10 = 0;
    v14 = 0;
    do
    {
      *(uint *)(dword_2252CF4[362] + 16 * v9 + 4 * v10) = Function_2244574(0, 28);
      v11 = v14;
      v18 = 0;
      v12 = 0;
      do
      {
        v15 = (&off_2249B54)[v9][v11];
        Function_2244a9c(*(uint *)(dword_2252CF4[362] + 4 * v10 + 16 * v9), v18, v19, v20, v21, 2, 1152, &v15);
        ++v12;
        ++v11;
        v18 += 18;
      }
      while ( v12 < 12 );
      if ( !v9 )
        *(uint *)(dword_2252CF4[362] + 4 * v10 + 260) = Function_22439e0(0, v17, 1);
      ++v10;
      v14 += 12;
    }
    while ( v10 < 4 );
    ++v9;
  }
  while ( v9 < 3 );
  *(uint *)(dword_2252CF4[362] + 276) = Function_2243f8c(0, 64, 1);
  Function_2243bd0(*(uint *)(dword_2252CF4[362] + 276), -1, 512, 0);
  Function_2243de4(*(uint *)(dword_2252CF4[362] + 276), -1, 2);
  *(uint *)(dword_2252CF4[362] + 280) = Function_2246304(0, Function_222c220, 0, 120);
  return Function_222cecc(*(uchar *)(dword_2252CF4[362] + 285), 0, 192);
}

//----- (0222C194) --------------------------------------------------------
int Function_222c194()
{
  Function_2243b3c(*(uint *)(dword_2252CF4[362] + 276));
  return Function_22463a4(*(uint *)(dword_2252CF4[362] + 280), Function_222d7a8);
}

//----- (0222C1C8) --------------------------------------------------------
int Function_222c1c8()
{
  return *(uchar *)(dword_2252CF4[362] + 284);
}

//----- (0222C1DC) --------------------------------------------------------
char __fastcall Function_222c1dc(char result)
{
  *(uchar *)(dword_2252CF4[362] + 291) = result;
  return result;
}

//----- (0222C1F0) --------------------------------------------------------
char __fastcall Function_222c1f0(char result)
{
  *(uchar *)(dword_2252CF4[362] + 292) = result;
  return result;
}

//----- (0222C204) --------------------------------------------------------
BOOL Function_222c204()
{
  return dword_2252CF4[362] != 0;
}

//----- (0222C220) --------------------------------------------------------
int __fastcall Function_222c220(int a1)
{
  int v1;
  int v2;
  int v3;
  bool v4;
  int v5;

  v1 = a1;
  v2 = **(uint **)(dword_2252CF4[362] + 48);
  v3 = (uchar)v2 - 12;
  v4 = (uchar)v2 - 93 < 0;
  v5 = *(uchar *)(dword_2252CF4[362] + 285);
  if ( !((uchar)(v4 ^ __OFSUB__(v3, 81)) | (v3 == 81)) )
    return Function_222cecc(v5, 0, v3);
  Function_222cecc(v5, 0, 81);
  Function_222cecc(*(uchar *)(dword_2252CF4[362] + 285), 1, 192);
  return Function_22463a4(v1, Function_222c2b4);
}

//----- (0222C2B4) --------------------------------------------------------
int __fastcall Function_222c2b4(int a1)
{
  int v1;
  int v2;
  int v3;
  bool v4;
  int v5;

  v1 = a1;
  v2 = **(uint **)(dword_2252CF4[362] + 96);
  v3 = (uchar)v2 - 12;
  v4 = (uchar)v2 - 115 < 0;
  v5 = *(uchar *)(dword_2252CF4[362] + 285);
  if ( !((uchar)(v4 ^ __OFSUB__(v3, 103)) | (v3 == 103)) )
    return Function_222cecc(v5, 1, v3);
  Function_222cecc(v5, 1, 103);
  Function_222cecc(*(uchar *)(dword_2252CF4[362] + 285), 2, 192);
  return Function_22463a4(v1, Function_222c348);
}

//----- (0222C348) --------------------------------------------------------
int __fastcall Function_222c348(int a1)
{
  int v1;
  int v2;
  int v3;
  bool v4;
  int v5;

  v1 = a1;
  v2 = **(uint **)(dword_2252CF4[362] + 144);
  v3 = (uchar)v2 - 12;
  v4 = (uchar)v2 - 137 < 0;
  v5 = *(uchar *)(dword_2252CF4[362] + 285);
  if ( !((uchar)(v4 ^ __OFSUB__(v3, 125)) | (v3 == 125)) )
    return Function_222cecc(v5, 2, v3);
  Function_222cecc(v5, 2, 125);
  Function_222cecc(*(uchar *)(dword_2252CF4[362] + 285), 3, 192);
  return Function_22463a4(v1, Function_222c3dc);
}

//----- (0222C3DC) --------------------------------------------------------
int __fastcall Function_222c3dc(int a1)
{
  int v1;
  int v2;
  int v3;
  bool v4;
  int v5;

  v1 = a1;
  v2 = **(uint **)(dword_2252CF4[362] + 192);
  v3 = (uchar)v2 - 12;
  v4 = (uchar)v2 - 159 < 0;
  v5 = *(uchar *)(dword_2252CF4[362] + 285);
  if ( !((uchar)(v4 ^ __OFSUB__(v3, 147)) | (v3 == 147)) )
    return Function_222cecc(v5, 3, v3);
  Function_222cecc(v5, 3, 147);
  Function_222cecc(*(uchar *)(dword_2252CF4[362] + 285), 4, 192);
  return Function_22463a4(v1, Function_222c470);
}

//----- (0222C470) --------------------------------------------------------
int __fastcall Function_222c470(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  char v6;

  v1 = a1;
  Function_2243e44(*(uint *)(dword_2252CF4[362] + 252), 0, &v6, &v5);
  v2 = v5 - 12;
  v5 = v2;
  if ( v2 > 170 )
    return Function_222cecc(*(uchar *)(dword_2252CF4[362] + 285), 4, v2);
  v4 = Function_222cecc(*(uchar *)(dword_2252CF4[362] + 285), 4, 170);
  Function_222d294(v4);
  return Function_22463a4(v1, Function_222c4fc);
}

//----- (0222C4FC) --------------------------------------------------------
int Function_222c4fc()
{
  int v0;
  int v1;
  int v2;

  v0 = Function_222c514();
  v1 = Function_222c6fc(v0);
  v2 = Function_222ca44(v1);
  return Function_222cc9c(v2);
}

//----- (0222C514) --------------------------------------------------------
int __fastcall Function_222c514(int a1, int a2, int a3, int a4)
{
  int result;
  int *v5;
  int v6;
  int *v7;
  int *v8;
  int v9;
  int *v10;
  int v11;
  char v12;
  int v13;

  v13 = a4;
  result = Function_22455b8(&dword_2249734);
  if ( result )
  {
    v5 = dword_2248D80;
    *(uchar *)(dword_2252CF4[362] + 286) = -1;
    v6 = 0;
    do
    {
      Function_2244c50(v5, &dword_2248D44, &v12);
      if ( Function_22455b8(&v12) )
      {
        if ( !*(uchar *)(dword_2252CF4[362] + 292) )
          return Function_223e994(9);
        Function_223e994(0);
        result = dword_2252CF4[362];
        *(uchar *)(dword_2252CF4[362] + 286) = v6;
        return result;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < 47 );
    v7 = &dword_2248D70;
    v8 = &dword_2248D60;
    v9 = 0;
    do
    {
      Function_2244c50(v8, v7, &v12);
      if ( Function_22455b8(&v12) )
      {
        if ( v9 == 3 && !*(uchar *)(dword_2252CF4[362] + 291) || v9 == 2 && !*(uchar *)(dword_2252CF4[362] + 292) )
          return Function_223e994(9);
        Function_223e994(dword_2249B60[v9]);
        result = dword_2252CF4[362];
        *(uchar *)(dword_2252CF4[362] + 286) = v9 + 47;
        return result;
      }
      ++v9;
      ++v7;
      ++v8;
    }
    while ( v9 < 4 );
    v10 = dword_2248D58;
    v11 = 0;
    while ( 1 )
    {
      Function_2244c50(v10, &dword_2248D40, &v12);
      result = Function_22455b8(&v12);
      if ( result )
        break;
      ++v11;
      ++v10;
      if ( v11 >= 2 )
        return result;
    }
    Function_223e994(0);
    result = dword_2252CF4[362];
    *(uchar *)(dword_2252CF4[362] + 286) = v11 + 51;
  }
  return result;
}

//----- (0222C6FC) --------------------------------------------------------
int __fastcall Function_222c6fc(int a1, int a2, int a3, int a4)
{
  int result;
  int *v5;
  int v6;
  int *v7;
  int *v8;
  int v9;
  int *v10;
  int v11;
  char v12;
  int v13;

  v13 = a4;
  *(uchar *)(dword_2252CF4[362] + 284) = 0;
  result = Function_22456c8(&dword_2249734);
  if ( result )
  {
    v5 = dword_2248D80;
    v6 = 0;
    do
    {
      Function_2244c50(v5, &dword_2248D44, &v12);
      if ( Function_22456c8(&v12) )
      {
        result = *(char *)(dword_2252CF4[362] + 286);
        if ( result == v6 )
        {
          *(uchar *)(dword_2252CF4[362] + 284) = off_2249B48[*(uchar *)(dword_2252CF4[362] + 285)][v6];
          if ( *(uchar *)(dword_2252CF4[362] + 285) == 1 )
            Function_222d148(0);
          *(uchar *)(dword_2252CF4[362] + 289) = v6;
          result = Function_222d294(dword_2252CF4[362]);
        }
        return result;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < 47 );
    v7 = dword_2248D78;
    v8 = dword_2248D68;
    v9 = 2;
    do
    {
      Function_2244c50(v8, v7, &v12);
      if ( Function_22456c8(&v12) )
      {
        result = *(char *)(dword_2252CF4[362] + 286);
        if ( result == v9 + 47 )
        {
          *(uchar *)(dword_2252CF4[362] + 284) = *((uchar *)dword_2248FE4 + v9);
          if ( *(uchar *)(dword_2252CF4[362] + 285) == 1 )
            Function_222d148(0);
          *(uchar *)(dword_2252CF4[362] + 289) = v9 + 47;
          result = Function_222d294(dword_2252CF4[362]);
        }
        return result;
      }
      ++v9;
      ++v7;
      ++v8;
    }
    while ( v9 < 4 );
    v10 = dword_2248D58;
    v11 = 0;
    do
    {
      Function_2244c50(v10, &dword_2248D40, &v12);
      if ( Function_22456c8(&v12) )
      {
        result = *(char *)(dword_2252CF4[362] + 286);
        if ( result == v11 + 51 )
        {
          *(uchar *)(dword_2252CF4[362] + 284) = *((uchar *)&dword_2248D34 + v11);
          *(uchar *)(dword_2252CF4[362] + 289) = v11 + 51;
          result = Function_222d294(dword_2252CF4[362]);
        }
        return result;
      }
      ++v11;
      ++v10;
    }
    while ( v11 < 2 );
    Function_2244c50(&dword_2248D60, &dword_2248D70, &v12);
    if ( Function_22456c8(&v12) )
    {
      result = *(char *)(dword_2252CF4[362] + 286);
      if ( result == 47 )
      {
        Function_222c9e4();
        *(uchar *)(dword_2252CF4[362] + 289) = 47;
        result = Function_222d294(dword_2252CF4[362]);
      }
    }
    else
    {
      Function_2244c50(&dword_2248D64, &dword_2248D74, &v12);
      result = Function_22456c8(&v12);
      if ( result )
      {
        result = *(char *)(dword_2252CF4[362] + 286);
        if ( result == 48 )
        {
          Function_222ca14();
          *(uchar *)(dword_2252CF4[362] + 289) = 48;
          result = Function_222d294(dword_2252CF4[362]);
        }
      }
    }
  }
  return result;
}

//----- (0222C9E4) --------------------------------------------------------
int Function_222c9e4()
{
  int v0;

  if ( *(uchar *)(dword_2252CF4[362] + 285) == 2 )
    v0 = 0;
  else
    v0 = 2;
  Function_222d148(v0);
  return Function_223e994(1);
}

//----- (0222CA14) --------------------------------------------------------
int Function_222ca14()
{
  Function_222d148(*(uchar *)(dword_2252CF4[362] + 285) != 1);
  return Function_223e994(1);
}

//----- (0222CA44) --------------------------------------------------------
int *__fastcall Function_222ca44(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int *result;
  int *v10;
  int v11;
  char v12;
  int v13;

  v13 = a4;
  if ( Function_2245530(&dword_2249734) )
  {
    v4 = dword_2248D80;
    v5 = 0;
    while ( 1 )
    {
      Function_2244c50(v4, &dword_2248D44, &v12);
      if ( Function_2245530(&v12) )
        break;
      ++v5;
      ++v4;
      if ( v5 >= 47 )
      {
        v6 = dword_2248D78;
        v7 = dword_2248D68;
        v8 = 2;
        do
        {
          Function_2244c50(v7, v6, &v12);
          if ( Function_2245530(&v12) )
          {
            if ( *(char *)(dword_2252CF4[362] + 286) != v8 + 47 )
              goto LABEL_21;
            result = (int *)((int (*)(void))Function_222cc48)();
            if ( v8 == 3 )
            {
              result = &dword_2252CF4[362];
              if ( (uchar)++*(uchar *)(dword_2252CF4[362] + 290) >= 0x28u )
              {
                if ( *(uchar *)(dword_2252CF4[362] + 291) )
                {
                  *(uchar *)(dword_2252CF4[362] + 284) = -128;
                  result = (int *)(*(uchar *)(dword_2252CF4[362] + 290) - 7);
                  *(uchar *)(dword_2252CF4[362] + 290) = (uchar)result;
                }
                else
                {
                  Function_223e994(9);
                  result = (int *)dword_2252CF4[362];
                  *(uchar *)(dword_2252CF4[362] + 286) = -1;
                }
              }
            }
            return result;
          }
          ++v8;
          ++v6;
          ++v7;
        }
        while ( v8 < 4 );
        v10 = dword_2248D58;
        v11 = 0;
        while ( 1 )
        {
          Function_2244c50(v10, &dword_2248D40, &v12);
          if ( Function_2245530(&v12) )
            break;
          ++v11;
          ++v10;
          if ( v11 >= 2 )
            goto LABEL_21;
        }
        if ( *(char *)(dword_2252CF4[362] + 286) == v11 + 51 )
        {
          ((void (*)(void))Function_222cc48)();
          goto LABEL_22;
        }
        goto LABEL_21;
      }
    }
    if ( *(char *)(dword_2252CF4[362] + 286) != v5 )
      goto LABEL_21;
    Function_222cc48(v5);
  }
  else
  {
LABEL_21:
    Function_222cc48(-1);
  }
LABEL_22:
  result = (int *)dword_2252CF4[362];
  *(uchar *)(dword_2252CF4[362] + 290) = 0;
  return result;
}

//----- (0222CC48) --------------------------------------------------------
int __fastcall Function_222cc48(int result)
{
  char v1;

  v1 = result;
  if ( result != *(char *)(dword_2252CF4[362] + 287) )
  {
    ((void (*)(void))Function_222d1cc)();
    Function_222d1cc(*(char *)(dword_2252CF4[362] + 287), 0);
    result = dword_2252CF4[362];
    *(uchar *)(dword_2252CF4[362] + 287) = v1;
  }
  return result;
}

//----- (0222CC9C) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x222CD98 for case 0"

//----- (0222CD88) --------------------------------------------------------
void Function_222cd88()
{
  JUMPOUT(&loc_222CD98);
}

//----- (0222CD8C) --------------------------------------------------------
void Function_222cd8c()
{
  JUMPOUT(&loc_222CDA0);
}

//----- (0222CD90) --------------------------------------------------------
void Function_222cd90()
{
  JUMPOUT(&loc_222CDA8);
}

//----- (0222CD94) --------------------------------------------------------
void __fastcall Function_222cd94(int a1)
{
  int v1;
  int v2;

  if ( !*(uchar *)(a1 + 291) )
  {
    Function_223e994(9);
    JUMPOUT(__CS__, v2);
  }
  if ( *(uchar *)(a1 + 285) == 1 )
    Function_222d148(0);
  *(uchar *)(dword_2252CF4[362] + 284) = *((uchar *)&dword_2248FE4[-11] + v1 - 3);
  JUMPOUT(__CS__, v2);
}

//----- (0222CECC) --------------------------------------------------------
int __fastcall Function_222cecc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  uint *v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  int result;
  int i;
  int v18;
  char v19;
  char v20;
  char v21;
  char v22;
  char v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;
  char v30;
  char v31;
  char v32;
  char v33;
  int v34;

  v34 = a4;
  v4 = a2;
  v29 = 12;
  v30 = 12;
  v18 = 12 * a2;
  v32 = 11;
  v31 = 12;
  v5 = a3;
  v33 = 0;
  v6 = (uchar)*(&v29 + a2);
  v7 = v18;
  v24 = 1;
  v25 = 1;
  v8 = 0;
  v26 = 1;
  v27 = 1;
  v28 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 2;
  if ( v6 > 0 )
  {
    do
    {
      v9 = LOWORD(dword_2248D80[v7]);
      ++v8;
      **(uint **)(dword_2252CF4[362] + 4 * v7 + 48) &= 0xC1FFFCFF;
      v10 = v9 << 23;
      v11 = *(uint **)(dword_2252CF4[362] + 4 * v7++ + 48);
      *v11 = *v11 & 0xFE00FF00 | (uchar)v5 | (v10 >> 7);
    }
    while ( v8 < (uchar)*(&v29 + v4) );
  }
  if ( v4 < 4 )
    Function_2244b70(
      *(uint *)(dword_2252CF4[362] + 16 * a1 + 4 * v4),
      LOWORD(dword_2248D80[v18]),
      v5,
      *(uint *)(dword_2252CF4[362] + 4 * v4 + 260),
      2);
  v12 = Function_20bd140(v4 + 3, 4);
  v13 = 0;
  if ( (int)(uchar)*(&v24 + v4) > 0 )
  {
    v14 = 4 * v12;
    v15 = LOWORD(dword_2248D60[v12]) << 23;
    do
    {
      ++v13;
      **(uint **)(v14 + dword_2252CF4[362] + 236) &= 0xC1FFFCFF;
      **(uint **)(v14 + dword_2252CF4[362] + 236) = **(uint **)(v14 + dword_2252CF4[362] + 236) & 0xFE00FF00 | (uchar)v5 | (v15 >> 7);
    }
    while ( v13 < (uchar)*(&v24 + v4) );
  }
  result = (uchar)*(&v19 + v4);
  for ( i = 0; i < result; ++i )
  {
    Function_2243bd0(*(uint *)(dword_2252CF4[362] + 4 * i + 252), -1, 0, 0);
    Function_2243cf4(*(uint *)(dword_2252CF4[362] + 4 * i + 252), -1, LOWORD(dword_2248D58[i]), v5);
    result = (uchar)*(&v19 + v4);
  }
  return result;
}

//----- (0222D148) --------------------------------------------------------
int __fastcall Function_222d148(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v4 = 0;
  v5 = a1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  *(uchar *)(dword_2252CF4[362] + 285) = a1;
  do
  {
    Function_222cecc(v5, v7++, HIWORD(dword_2248D80[v8]), a4);
    v8 += 12;
  }
  while ( v7 < 4 );
  if ( v5 == 2 )
  {
    v4 = 1;
  }
  else if ( v5 == 1 )
  {
    v6 = 1;
  }
  Function_222d1cc(47, v4);
  return Function_222d1cc(48, v6);
}

//----- (0222D1CC) --------------------------------------------------------
int __fastcall Function_222d1cc(int result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  if ( result >= 0 )
  {
    if ( result >= 47 )
    {
      v4 = result - 47;
      if ( result - 47 >= 4 )
      {
        result = Function_2243c74(
                   *(uint *)(dword_2252CF4[362] + 4 * (result - 51) + 252),
                   -1,
                   0,
                   *((uchar *)&dword_2248D2C + a2));
      }
      else
      {
        v5 = *((uchar *)&dword_2248D28 + a2);
        v6 = *(uint *)(dword_2252CF4[362] + 4 * v4 + 236);
        *(uint *)v6 &= 0xFFFFF3FF;
        result = *(ushort *)(v6 + 4) & 0xFFF | (v5 << 12);
        *(ushort *)(v6 + 4) = result;
      }
    }
    else
    {
      v2 = *((uchar *)&dword_2248D28 + a2);
      v3 = *(uint *)(dword_2252CF4[362] + 4 * result + 48);
      *(uint *)v3 &= 0xFFFFF3FF;
      result = *(ushort *)(v3 + 4) & 0xFFF | (v2 << 12);
      *(ushort *)(v3 + 4) = result;
    }
  }
  return result;
}

//----- (0222D294) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x222D2D0 for case 0"

//----- (0222D2B8) --------------------------------------------------------
void Function_222d2b8()
{
  JUMPOUT(&loc_222D2D0);
}

//----- (0222D2BC) --------------------------------------------------------
void Function_222d2bc()
{
  JUMPOUT(&loc_222D2D8);
}

//----- (0222D2C0) --------------------------------------------------------
void Function_222d2c0()
{
  JUMPOUT(&loc_222D2E0);
}

//----- (0222D2C4) --------------------------------------------------------
void Function_222d2c4()
{
  JUMPOUT(&loc_222D2E8);
}

//----- (0222D2C8) --------------------------------------------------------
void Function_222d2c8()
{
  JUMPOUT(&loc_222D2F0);
}

//----- (0222D2CC) --------------------------------------------------------
void __fastcall Function_222d2cc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = Function_2243bbc(*(uint *)(a2 + 276), 0);
  Function_2243ecc(0, 69, v2);
  Function_2243de4(*(uint *)(dword_2252CF4[362] + 276), -1, 2);
  Function_2243cf4(
    *(uint *)(dword_2252CF4[362] + 276),
    -1,
    LOWORD(dword_2248E3C[*(char *)(dword_2252CF4[362] + 289)]),
    HIWORD(dword_2248E3C[*(char *)(dword_2252CF4[362] + 289)]));
  JUMPOUT(__CS__, v3);
}

//----- (0222D370) --------------------------------------------------------
void __fastcall Function_222d370(int a1)
{
  int v1;
  int v2;
  bool v3;
  bool v4;
  bool v5;
  int v6;
  bool v7;
  int v8;

  v1 = *(char *)(dword_2252CF4[362] + 289);
  *(uchar *)(dword_2252CF4[362] + 289) = *((uchar *)&dword_2248F10[v1] + a1);
  v2 = *(char *)(dword_2252CF4[362] + 289);
  v3 = v2 == 46;
  if ( v2 == 46 )
    v3 = a1 == 3;
  if ( v3 )
  {
    *(uchar *)(dword_2252CF4[362] + 288) = v1;
    JUMPOUT(&loc_222D790);
  }
  if ( v2 == 51 )
  {
    v4 = a1 == 1;
    if ( a1 != 1 )
      v4 = a1 == 3;
    if ( v4 )
    {
      *(uchar *)(dword_2252CF4[362] + 288) = v1;
      JUMPOUT(&loc_222D790);
    }
  }
  if ( v2 == 52 )
  {
    v5 = a1 == 1;
    if ( a1 != 1 )
      v5 = a1 == 3;
    if ( v5 )
    {
      if ( v1 != 46 )
        *(uchar *)(dword_2252CF4[362] + 288) = v1;
      JUMPOUT(&loc_222D790);
    }
  }
  if ( v2 == -1 )
  {
    v6 = *(char *)(dword_2252CF4[362] + 288);
    v7 = v6 == 35;
    if ( v6 != 35 )
      v7 = v6 == 50;
    if ( v7 )
      *(uchar *)(dword_2252CF4[362] + 289) = 35;
    else
      *(uchar *)(dword_2252CF4[362] + 289) = 34;
    JUMPOUT(&loc_222D790);
  }
  if ( v2 != -2 )
    JUMPOUT(&loc_222D4D8);
  v8 = *(char *)(dword_2252CF4[362] + 288);
  if ( v8 > 38 )
    JUMPOUT(&loc_222D470);
  if ( v8 >= 38 )
    JUMPOUT(&loc_222D4A8);
  if ( v8 > 5 )
    JUMPOUT(&loc_222D464);
  if ( v8 >= 0 )
    JUMPOUT(__CS__, (char *)&Function_222d44c + 4 * v8);
  JUMPOUT(&loc_222D4CC);
}

//----- (0222D44C) --------------------------------------------------------
void Function_222d44c()
{
  JUMPOUT(&loc_222D490);
}

//----- (0222D450) --------------------------------------------------------
void Function_222d450()
{
  JUMPOUT(&loc_222D49C);
}

//----- (0222D454) --------------------------------------------------------
void Function_222d454()
{
  JUMPOUT(&loc_222D4CC);
}

//----- (0222D458) --------------------------------------------------------
void Function_222d458()
{
  JUMPOUT(&loc_222D4A8);
}

//----- (0222D45C) --------------------------------------------------------
void Function_222d45c()
{
  JUMPOUT(&loc_222D4B4);
}

//----- (0222D460) --------------------------------------------------------
void __fastcall Function_222d460(int a1, int a2)
{
  *(uchar *)(a2 + 289) = 40;
  JUMPOUT(&loc_222D790);
}

//----- (0222D50C) --------------------------------------------------------
void Function_222d50c()
{
  JUMPOUT(&loc_222D5C4);
}

//----- (0222D510) --------------------------------------------------------
void Function_222d510()
{
  JUMPOUT(&loc_222D5C4);
}

//----- (0222D514) --------------------------------------------------------
void Function_222d514()
{
  JUMPOUT(&loc_222D5C4);
}

//----- (0222D518) --------------------------------------------------------
void Function_222d518()
{
  JUMPOUT(&loc_222D5C4);
}

//----- (0222D51C) --------------------------------------------------------
void Function_222d51c()
{
  JUMPOUT(&loc_222D5C4);
}

//----- (0222D520) --------------------------------------------------------
void Function_222d520()
{
  JUMPOUT(&loc_222D5C4);
}

//----- (0222D524) --------------------------------------------------------
void Function_222d524()
{
  JUMPOUT(&loc_222D588);
}

//----- (0222D528) --------------------------------------------------------
void Function_222d528()
{
  JUMPOUT(&loc_222D594);
}

//----- (0222D52C) --------------------------------------------------------
void Function_222d52c()
{
  JUMPOUT(&loc_222D5C4);
}

//----- (0222D530) --------------------------------------------------------
void Function_222d530()
{
  JUMPOUT(&loc_222D5A0);
}

//----- (0222D534) --------------------------------------------------------
void Function_222d534()
{
  JUMPOUT(&loc_222D5AC);
}

//----- (0222D538) --------------------------------------------------------
void __fastcall Function_222d538(int a1, int a2)
{
  *(uchar *)(a2 + 289) = 46;
  JUMPOUT(&loc_222D790);
}

//----- (0222D604) --------------------------------------------------------
void Function_222d604()
{
  JUMPOUT(&loc_222D648);
}

//----- (0222D608) --------------------------------------------------------
void Function_222d608()
{
  JUMPOUT(&loc_222D654);
}

//----- (0222D60C) --------------------------------------------------------
void Function_222d60c()
{
  JUMPOUT(&loc_222D684);
}

//----- (0222D610) --------------------------------------------------------
void Function_222d610()
{
  JUMPOUT(&loc_222D660);
}

//----- (0222D614) --------------------------------------------------------
void Function_222d614()
{
  JUMPOUT(&loc_222D66C);
}

//----- (0222D618) --------------------------------------------------------
void __fastcall Function_222d618(int a1, int a2)
{
  *(uchar *)(a2 + 289) = 5;
  JUMPOUT(&loc_222D790);
}

//----- (0222D6C4) --------------------------------------------------------
void Function_222d6c4()
{
  JUMPOUT(&loc_222D788);
}

//----- (0222D6C8) --------------------------------------------------------
void Function_222d6c8()
{
  JUMPOUT(&loc_222D788);
}

//----- (0222D6CC) --------------------------------------------------------
void Function_222d6cc()
{
  JUMPOUT(&loc_222D788);
}

//----- (0222D6D0) --------------------------------------------------------
void Function_222d6d0()
{
  JUMPOUT(&loc_222D788);
}

//----- (0222D6D4) --------------------------------------------------------
void Function_222d6d4()
{
  JUMPOUT(&loc_222D788);
}

//----- (0222D6D8) --------------------------------------------------------
void Function_222d6d8()
{
  JUMPOUT(&loc_222D788);
}

//----- (0222D6DC) --------------------------------------------------------
void Function_222d6dc()
{
  JUMPOUT(&loc_222D740);
}

//----- (0222D6E0) --------------------------------------------------------
void Function_222d6e0()
{
  JUMPOUT(&loc_222D74C);
}

//----- (0222D6E4) --------------------------------------------------------
void Function_222d6e4()
{
  JUMPOUT(&loc_222D788);
}

//----- (0222D6E8) --------------------------------------------------------
void Function_222d6e8()
{
  JUMPOUT(&loc_222D758);
}

//----- (0222D6EC) --------------------------------------------------------
void Function_222d6ec()
{
  JUMPOUT(&loc_222D764);
}

//----- (0222D6F0) --------------------------------------------------------
void __fastcall Function_222d6f0(int a1, int a2)
{
  int v2;

  *(uchar *)(a2 + 289) = 11;
  Function_222d294(11);
  Function_223e994(8);
  JUMPOUT(__CS__, v2);
}

//----- (0222D7A8) --------------------------------------------------------
int __fastcall Function_222d7a8(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int result;

  v1 = a1;
  v2 = (uint *)Function_2243bbc(*(uint *)(dword_2252CF4[362] + 252), 0);
  v3 = (*v2 & 0xFF) + 12;
  Function_222cecc(*(uchar *)(dword_2252CF4[362] + 285), 4, v3, (*v2 & 0x1FF0000u) >> 16);
  result = v3;
  if ( v3 >= 192 )
    result = Function_22463a4(v1, Function_222d82c);
  return result;
}

//----- (0222D82C) --------------------------------------------------------
int __fastcall Function_222d82c(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = **(uint **)(dword_2252CF4[362] + 192);
  v3 = (uchar)v2 + 12;
  Function_222cecc(*(uchar *)(dword_2252CF4[362] + 285), 3, v3, (v2 & 0x1FF0000u) >> 16);
  result = v3;
  if ( v3 >= 192 )
    result = Function_22463a4(v1, Function_222d8a0);
  return result;
}

//----- (0222D8A0) --------------------------------------------------------
int __fastcall Function_222d8a0(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = **(uint **)(dword_2252CF4[362] + 144);
  v3 = (uchar)v2 + 12;
  Function_222cecc(*(uchar *)(dword_2252CF4[362] + 285), 2, v3, (v2 & 0x1FF0000u) >> 16);
  result = v3;
  if ( v3 >= 192 )
    result = Function_22463a4(v1, Function_222d914);
  return result;
}

//----- (0222D914) --------------------------------------------------------
int __fastcall Function_222d914(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = **(uint **)(dword_2252CF4[362] + 96);
  v3 = (uchar)v2 + 12;
  Function_222cecc(*(uchar *)(dword_2252CF4[362] + 285), 1, v3, (v2 & 0x1FF0000u) >> 16);
  result = v3;
  if ( v3 >= 192 )
    result = Function_22463a4(v1, Function_222d988);
  return result;
}

//----- (0222D988) --------------------------------------------------------
int __fastcall Function_222d988(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = **(uint **)(dword_2252CF4[362] + 48);
  v3 = (uchar)v2 + 12;
  Function_222cecc(*(uchar *)(dword_2252CF4[362] + 285), 0, v3, (v2 & 0x1FF0000u) >> 16);
  result = v3;
  if ( v3 >= 192 )
    result = Function_22463a4(v1, Function_222d9fc);
  return result;
}

//----- (0222D9FC) --------------------------------------------------------
int __fastcall Function_222d9fc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  Function_22463ac(0, a1);
  v1 = 0;
  do
  {
    v2 = 0;
    do
    {
      Function_2244650(*(uint *)(dword_2252CF4[362] + 16 * v1 + 4 * v2));
      if ( !v1 )
        Function_2243b3c(*(uint *)(dword_2252CF4[362] + 4 * v2 + 260));
      ++v2;
    }
    while ( v2 < 4 );
    ++v1;
  }
  while ( v1 < 3 );
  v3 = 0;
  do
    Function_2243b3c(*(uint *)(dword_2252CF4[362] + 4 * v3++ + 252));
  while ( v3 < 2 );
  v4 = 0;
  do
    Function_2245b74(*(uint *)(dword_2252CF4[362] + 4 * v4++ + 236));
  while ( v4 < 4 );
  v5 = 0;
  do
    Function_2245b74(*(uint *)(dword_2252CF4[362] + 4 * v5++ + 48));
  while ( v5 < 47 );
  return Function_224508c(&dword_2252CF4[362]);
}

//----- (0222DADC) --------------------------------------------------------
int Function_222dadc()
{
  int v0;
  int v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  short v16;
  short v17;
  int v18;
  ushort v19;
  ushort v20;
  ushort v21;
  ushort v22;

  v19 = 0;
  v20 = 1;
  v21 = 28;
  v22 = 20;
  v0 = 0;
  dword_2252CF4[363] = Function_2245068(108, 4);
  *(uchar *)(dword_2252CF4[363] + 96) = 31;
  *(uchar *)(dword_2252CF4[363] + 99) = 0;
  *(uchar *)(dword_2252CF4[363] + 102) = 1;
  *(uchar *)(dword_2252CF4[363] + 103) = 1;
  *(uchar *)(dword_2252CF4[363] + 104) = 1;
  do
  {
    *(uint *)(dword_2252CF4[363] + 4 * v0 + 16) = Function_2243f60(0, 54);
    **(uint **)(dword_2252CF4[363] + 4 * v0 + 16) = **(uint **)(dword_2252CF4[363] + 4 * v0 + 16) & 0xC1FFFCFF | 0x200;
    v1 = *(uint *)(dword_2252CF4[363] + 4 * v0++ + 16);
    *(ushort *)(v1 + 4) = *(ushort *)(v1 + 4) & 0xF3FF | 0xC00;
  }
  while ( v0 < 10 );
  v2 = 0;
  v3 = &byte_2248FF0;
  do
  {
    v4 = (uchar)*v3++;
    *(uint *)(dword_2252CF4[363] + 4 * v2 + 56) = Function_2243f60(0, v4);
    **(uint **)(dword_2252CF4[363] + 4 * v2 + 56) = **(uint **)(dword_2252CF4[363] + 4 * v2 + 56) & 0xC1FFFCFF | 0x200;
    v5 = *(uint *)(dword_2252CF4[363] + 4 * v2++ + 56);
    *(ushort *)(v5 + 4) = *(ushort *)(v5 + 4) & 0xF3FF | 0xC00;
  }
  while ( v2 < 2 );
  v6 = 0;
  v7 = &byte_2248FF4;
  do
  {
    v8 = (uchar)*v7++;
    *(uint *)(dword_2252CF4[363] + 4 * v6 + 64) = Function_2243f8c(0, v8, 1);
    Function_2243bd0(*(uint *)(dword_2252CF4[363] + 4 * v6 + 64), -1, 512, 0);
    Function_2243de4(*(uint *)(dword_2252CF4[363] + 4 * v6++ + 64), -1, 3);
  }
  while ( v6 < 2 );
  v9 = 0;
  v15 = 0;
  v17 = 0;
  do
  {
    v10 = 0;
    v11 = v15;
    *(uint *)(dword_2252CF4[363] + 4 * v9) = Function_2244574(0, 12);
    v19 = 0;
    do
    {
      v16 = a7894561230[v11];
      Function_2244a9c(*(uint *)(dword_2252CF4[363] + 4 * v9), v19, v20, v21, v22, 2, 1152, &v16);
      ++v10;
      v19 += 32;
      ++v11;
    }
    while ( v10 < 3 );
    v12 = Function_22439e0(0, v18, 0);
    v15 += 3;
    v13 = dword_2252CF4[363] + 4 * v9++;
    *(uint *)(v13 + 72) = v12;
  }
  while ( v9 < 4 );
  *(uint *)(dword_2252CF4[363] + 88) = Function_2243f8c(0, 68, 1);
  Function_2243bd0(*(uint *)(dword_2252CF4[363] + 88), -1, 512, 0);
  Function_2243de4(*(uint *)(dword_2252CF4[363] + 88), -1, 2);
  *(uint *)(dword_2252CF4[363] + 92) = Function_2246304(0, Function_222deb8, 0, 120);
  return Function_222e8d8(0, 192);
}

//----- (0222DE18) --------------------------------------------------------
int Function_222de18()
{
  Function_2243b3c(*(uint *)(dword_2252CF4[363] + 88));
  return Function_22463a4(*(uint *)(dword_2252CF4[363] + 92), Function_222ed38);
}

//----- (0222DE4C) --------------------------------------------------------
int Function_222de4c()
{
  return *(uchar *)(dword_2252CF4[363] + 96);
}

//----- (0222DE60) --------------------------------------------------------
char __fastcall Function_222de60(char result)
{
  *(uchar *)(dword_2252CF4[363] + 102) = result;
  return result;
}

//----- (0222DE74) --------------------------------------------------------
char __fastcall Function_222de74(char result)
{
  *(uchar *)(dword_2252CF4[363] + 103) = result;
  return result;
}

//----- (0222DE88) --------------------------------------------------------
char __fastcall Function_222de88(char result)
{
  *(uchar *)(dword_2252CF4[363] + 104) = result;
  return result;
}

//----- (0222DE9C) --------------------------------------------------------
BOOL Function_222de9c()
{
  return dword_2252CF4[363] != 0;
}

//----- (0222DEB8) --------------------------------------------------------
int __fastcall Function_222deb8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = (**(uint **)(dword_2252CF4[363] + 16) & 0xFF) - 12;
  if ( v2 > 76 )
    return Function_222e8d8(0, v2);
  Function_222e8d8(0, 76);
  Function_222e8d8(1, 192);
  return Function_22463a4(v1, Function_222df3c);
}

//----- (0222DF3C) --------------------------------------------------------
int __fastcall Function_222df3c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = (**(uint **)(dword_2252CF4[363] + 28) & 0xFF) - 12;
  if ( v2 > 99 )
    return Function_222e8d8(1, v2);
  Function_222e8d8(1, 99);
  Function_222e8d8(2, 192);
  return Function_22463a4(v1, Function_222dfc0);
}

//----- (0222DFC0) --------------------------------------------------------
int __fastcall Function_222dfc0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = (**(uint **)(dword_2252CF4[363] + 40) & 0xFF) - 12;
  if ( v2 > 122 )
    return Function_222e8d8(2, v2);
  Function_222e8d8(2, 122);
  Function_222e8d8(3, 192);
  return Function_22463a4(v1, Function_222e044);
}

//----- (0222E044) --------------------------------------------------------
int __fastcall Function_222e044(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = (**(uint **)(dword_2252CF4[363] + 52) & 0xFF) - 12;
  if ( v2 > 145 )
    return Function_222e8d8(3, v2);
  Function_222e8d8(3, 145);
  Function_222e8d8(4, 192);
  return Function_22463a4(v1, Function_222e0c8);
}

//----- (0222E0C8) --------------------------------------------------------
int __fastcall Function_222e0c8(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  char v6;

  v1 = a1;
  Function_2243e44(*(uint *)(dword_2252CF4[363] + 64), 0, &v6, &v5);
  v2 = v5 - 12;
  v5 = v2;
  if ( v2 > 170 )
    return Function_222e8d8(4, v2);
  v4 = Function_222e8d8(4, 170);
  Function_222ec00(v4);
  return Function_22463a4(v1, Function_222e13c);
}

//----- (0222E13C) --------------------------------------------------------
int Function_222e13c()
{
  int v0;
  int v1;
  int v2;

  v0 = Function_222e154();
  v1 = Function_222e330(v0);
  v2 = Function_222e500(v1);
  return Function_222e73c(v2);
}

//----- (0222E154) --------------------------------------------------------
int __fastcall Function_222e154(int a1, int a2, int a3, int a4)
{
  int result;
  const char *v5;
  int v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  char v11;
  int v12;

  v12 = a4;
  result = Function_22455b8(&dword_2249734);
  if ( result )
  {
    v5 = "R";
    *(uchar *)(dword_2252CF4[363] + 97) = -1;
    v6 = 0;
    do
    {
      Function_2244c50(v5, dword_2249004, &v11);
      if ( Function_22455b8(&v11) )
      {
        if ( !*(uchar *)(dword_2252CF4[363] + 103) )
          return Function_223e994(9);
        Function_223e994(0);
        result = dword_2252CF4[363];
        *(uchar *)(dword_2252CF4[363] + 97) = v6;
        return result;
      }
      ++v6;
      v5 += 4;
    }
    while ( v6 < 10 );
    v7 = dword_224902C;
    v8 = 0;
    do
    {
      Function_2244c50(v7, &dword_224900C, &v11);
      if ( Function_22455b8(&v11) )
      {
        if ( !v8 && !*(uchar *)(dword_2252CF4[363] + 102) || v8 == 1 && !*(uchar *)(dword_2252CF4[363] + 104) )
          return Function_223e994(9);
        Function_223e994(0);
        result = dword_2252CF4[363];
        *(uchar *)(dword_2252CF4[363] + 97) = v8 + 10;
        return result;
      }
      ++v8;
      ++v7;
    }
    while ( v8 < 2 );
    v9 = dword_2249034;
    v10 = 0;
    while ( 1 )
    {
      Function_2244c50(v9, &dword_2249010, &v11);
      result = Function_22455b8(&v11);
      if ( result )
        break;
      ++v10;
      ++v9;
      if ( v10 >= 2 )
        return result;
    }
    Function_223e994(0);
    result = dword_2252CF4[363];
    *(uchar *)(dword_2252CF4[363] + 97) = v10 + 12;
  }
  return result;
}

//----- (0222E330) --------------------------------------------------------
int *__fastcall Function_222e330(int a1, int a2, int a3, int a4)
{
  int *result;
  const char *v5;
  int v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  char v11;
  int v12;

  v12 = a4;
  *(uchar *)(dword_2252CF4[363] + 96) = 0;
  result = (int *)Function_22456c8(&dword_2249734);
  if ( result )
  {
    v5 = "R";
    v6 = 0;
    do
    {
      Function_2244c50(v5, dword_2249004, &v11);
      if ( Function_22456c8(&v11) )
      {
        result = &dword_2252CF4[363];
        if ( *(char *)(dword_2252CF4[363] + 97) == v6 )
        {
          *(uchar *)(dword_2252CF4[363] + 96) = a7894561230_0[v6];
          *(uchar *)(dword_2252CF4[363] + 99) = v6;
          result = (int *)Function_222ec00(dword_2252CF4[363]);
        }
        return result;
      }
      ++v6;
      v5 += 4;
    }
    while ( v6 < 10 );
    v7 = dword_224902C;
    v8 = 0;
    do
    {
      Function_2244c50(v7, &dword_224900C, &v11);
      if ( Function_22456c8(&v11) )
      {
        result = &dword_2252CF4[363];
        if ( *(char *)(dword_2252CF4[363] + 97) == v8 + 10 )
        {
          *(uchar *)(dword_2252CF4[363] + 96) = *((uchar *)&dword_2249000 + v8);
          *(uchar *)(dword_2252CF4[363] + 99) = v8 + 10;
          result = (int *)Function_222ec00(dword_2252CF4[363]);
        }
        return result;
      }
      ++v8;
      ++v7;
    }
    while ( v8 < 2 );
    v9 = dword_2249034;
    v10 = 0;
    while ( 1 )
    {
      Function_2244c50(v9, &dword_2249010, &v11);
      result = (int *)Function_22456c8(&v11);
      if ( result )
        break;
      ++v10;
      ++v9;
      if ( v10 >= 2 )
        return result;
    }
    result = &dword_2252CF4[363];
    if ( *(char *)(dword_2252CF4[363] + 97) == v10 + 12 )
    {
      *(uchar *)(dword_2252CF4[363] + 96) = *((uchar *)&dword_2248FFC + v10);
      *(uchar *)(dword_2252CF4[363] + 99) = v10 + 12;
      result = (int *)Function_222ec00(dword_2252CF4[363]);
    }
  }
  return result;
}

//----- (0222E500) --------------------------------------------------------
int *__fastcall Function_222e500(int a1, int a2, int a3, int a4)
{
  const char *v4;
  int v5;
  int *v6;
  int v7;
  int *result;
  int *v9;
  int v10;
  char v11;
  int v12;

  v12 = a4;
  if ( Function_2245530(&dword_2249734) )
  {
    v4 = "R";
    v5 = 0;
    while ( 1 )
    {
      Function_2244c50(v4, dword_2249004, &v11);
      if ( Function_2245530(&v11) )
        break;
      ++v5;
      v4 += 4;
      if ( v5 >= 10 )
      {
        v6 = dword_224902C;
        v7 = 0;
        while ( 1 )
        {
          Function_2244c50(v6, &dword_224900C, &v11);
          if ( Function_2245530(&v11) )
            break;
          ++v7;
          ++v6;
          if ( v7 >= 2 )
          {
            v9 = dword_2249034;
            v10 = 0;
            while ( 1 )
            {
              Function_2244c50(v9, &dword_2249010, &v11);
              if ( Function_2245530(&v11) )
                break;
              ++v10;
              ++v9;
              if ( v10 >= 2 )
                goto LABEL_21;
            }
            if ( *(char *)(dword_2252CF4[363] + 97) == v10 + 12 )
            {
              ((void (*)(void))Function_222e6f0)();
              goto LABEL_22;
            }
            goto LABEL_21;
          }
        }
        if ( *(char *)(dword_2252CF4[363] + 97) != v7 + 10 )
          goto LABEL_21;
        ((void (*)(void))Function_222e6f0)();
        if ( !v7 )
        {
          result = &dword_2252CF4[363];
          if ( (uchar)++*(uchar *)(dword_2252CF4[363] + 101) >= 0x28u )
          {
            if ( *(uchar *)(dword_2252CF4[363] + 102) )
            {
              *(uchar *)(dword_2252CF4[363] + 96) = 16;
              result = (int *)(*(uchar *)(dword_2252CF4[363] + 101) - 7);
              *(uchar *)(dword_2252CF4[363] + 101) = (uchar)result;
            }
            else
            {
              Function_223e994(9);
              result = (int *)dword_2252CF4[363];
              *(uchar *)(dword_2252CF4[363] + 97) = -1;
            }
          }
          return result;
        }
        goto LABEL_22;
      }
    }
    if ( *(char *)(dword_2252CF4[363] + 97) != v5 )
      goto LABEL_21;
    Function_222e6f0(v5);
  }
  else
  {
LABEL_21:
    Function_222e6f0(-1);
  }
LABEL_22:
  result = (int *)dword_2252CF4[363];
  *(uchar *)(dword_2252CF4[363] + 101) = 0;
  return result;
}

//----- (0222E6F0) --------------------------------------------------------
int __fastcall Function_222e6f0(int result)
{
  char v1;

  v1 = result;
  if ( result != *(char *)(dword_2252CF4[363] + 98) )
  {
    ((void (*)(void))Function_222eb38)();
    Function_222eb38(*(char *)(dword_2252CF4[363] + 98), 0);
    result = dword_2252CF4[363];
    *(uchar *)(dword_2252CF4[363] + 98) = v1;
  }
  return result;
}

//----- (0222E73C) --------------------------------------------------------
int Function_222e73c()
{
  int result;
  int v1;
  bool v2;
  bool v3;

  if ( Function_22454b0(32) )
    Function_222ec8c(0);
  if ( Function_22454b0(64) )
    Function_222ec8c(1);
  if ( Function_22454b0(16) )
    Function_222ec8c(2);
  if ( Function_22454b0(128) )
    Function_222ec8c(3);
  if ( Function_2245470(1) )
  {
    result = dword_2252CF4[363];
    v1 = *(char *)(dword_2252CF4[363] + 99);
    if ( v1 < 10 )
    {
      if ( !*(uchar *)(dword_2252CF4[363] + 103) )
        return Function_223e994(9);
      *(uchar *)(dword_2252CF4[363] + 96) = a7894561230_0[v1];
      return result;
    }
    if ( v1 - 10 < 2 )
    {
      v2 = v1 == 10;
      if ( v1 == 10 )
        v2 = *(uchar *)(dword_2252CF4[363] + 102) == 0;
      if ( v2 )
        return Function_223e994(9);
      v3 = v1 == 11;
      if ( v1 == 11 )
        v3 = *(uchar *)(dword_2252CF4[363] + 104) == 0;
      if ( v3 )
        return Function_223e994(9);
      *(uchar *)(dword_2252CF4[363] + 96) = *((uchar *)&dword_2249000 + v1 - 10);
      return result;
    }
    *(uchar *)(dword_2252CF4[363] + 96) = *((uchar *)&dword_2248FFC + v1 - 12);
  }
  if ( Function_22454b0(2) )
  {
    if ( *(uchar *)(dword_2252CF4[363] + 102) )
    {
      result = 16;
      *(uchar *)(dword_2252CF4[363] + 96) = 16;
    }
    else
    {
      result = *(uchar *)(dword_2252CF4[363] + 105);
      if ( !*(uchar *)(dword_2252CF4[363] + 105) )
      {
        Function_223e994(9);
        result = dword_2252CF4[363];
        *(uchar *)(dword_2252CF4[363] + 105) = 1;
      }
    }
  }
  else
  {
    result = Function_22454f0(2);
    if ( result )
    {
      result = dword_2252CF4[363];
      *(uchar *)(dword_2252CF4[363] + 105) = 0;
    }
  }
  return result;
}

//----- (0222E8D8) --------------------------------------------------------
int __fastcall Function_222e8d8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  uint *v9;
  int i;
  int v11;
  uint *v12;
  int result;
  int j;
  char v15;
  char v16;
  char v17;
  char v18;
  char v19;
  char v20;
  char v21;
  char v22;
  char v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;

  v2 = a1;
  v25 = 3;
  v26 = 3;
  v3 = a2;
  v27 = 3;
  v28 = 1;
  v4 = 3 * a1;
  v29 = 0;
  v5 = (uchar)*(&v25 + a1);
  v6 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 2;
  v24 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 2;
  if ( v5 > 0 )
  {
    do
    {
      v7 = *(ushort *)&aR[4 * v4];
      ++v6;
      **(uint **)(dword_2252CF4[363] + 4 * v4 + 16) &= 0xC1FFFCFF;
      v8 = v7 << 23;
      v9 = *(uint **)(dword_2252CF4[363] + 4 * v4++ + 16);
      *v9 = *v9 & 0xFE00FF00 | (uchar)v3 | (v8 >> 7);
    }
    while ( v6 < (uchar)*(&v25 + v2) );
  }
  if ( v2 < 4 )
    Function_2244b70(
      *(uint *)(dword_2252CF4[363] + 4 * v2),
      *(ushort *)&aR[12 * v2],
      v3,
      *(uint *)(dword_2252CF4[363] + 4 * v2 + 72),
      2);
  for ( i = 0; i < (uchar)*(&v20 + v2); *v12 = *v12 & 0xFE00FF00 | (uchar)v3 | (v11 << 16) & 0x1FFFFFF )
  {
    v11 = LOWORD(dword_224902C[i]);
    **(uint **)(dword_2252CF4[363] + 4 * i + 56) &= 0xC1FFFCFF;
    v12 = *(uint **)(dword_2252CF4[363] + 4 * i++ + 56);
  }
  result = (uchar)*(&v15 + v2);
  for ( j = 0; j < result; ++j )
  {
    Function_2243bd0(*(uint *)(dword_2252CF4[363] + 4 * j + 64), -1, 0, 0);
    Function_2243cf4(*(uint *)(dword_2252CF4[363] + 4 * j + 64), -1, LOWORD(dword_2249034[j]), v3);
    result = (uchar)*(&v15 + v2);
  }
  return result;
}

//----- (0222EB38) --------------------------------------------------------
int __fastcall Function_222eb38(int result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  if ( result >= 0 )
  {
    if ( result >= 10 )
    {
      v4 = result - 10;
      if ( result - 10 >= 2 )
      {
        result = Function_2243c74(
                   *(uint *)(dword_2252CF4[363] + 4 * (result - 12) + 64),
                   -1,
                   0,
                   *((uchar *)&dword_2248FEC + a2));
      }
      else
      {
        v5 = *((uchar *)&dword_2248FF8 + a2);
        v6 = *(uint *)(dword_2252CF4[363] + 4 * v4 + 56);
        *(uint *)v6 &= 0xFFFFF3FF;
        result = *(ushort *)(v6 + 4) & 0xFFF | (v5 << 12);
        *(ushort *)(v6 + 4) = result;
      }
    }
    else
    {
      v2 = *((uchar *)&dword_2248FF8 + a2);
      v3 = *(uint *)(dword_2252CF4[363] + 4 * result + 16);
      *(uint *)v3 &= 0xFFFFF3FF;
      result = *(ushort *)(v3 + 4) & 0xFFF | (v2 << 12);
      *(ushort *)(v3 + 4) = result;
    }
  }
  return result;
}

//----- (0222EC00) --------------------------------------------------------
int Function_222ec00()
{
  int v0;
  int v1;
  int v2;

  v1 = *(char *)(dword_2252CF4[363] + 99);
  if ( v1 <= 11 )
    v0 = 68;
  if ( v1 > 11 )
    v0 = 69;
  v2 = Function_2243bbc(*(uint *)(dword_2252CF4[363] + 88), 0);
  Function_2243ecc(0, v0, v2);
  Function_2243de4(*(uint *)(dword_2252CF4[363] + 88), -1, 2);
  return Function_2243cf4(
           *(uint *)(dword_2252CF4[363] + 88),
           -1,
           HIWORD(dword_2249078[*(char *)(dword_2252CF4[363] + 99) + 1]),
           (ushort)aJpj[2 * *(char *)(dword_2252CF4[363] + 99)]);
}

//----- (0222EC8C) --------------------------------------------------------
int __fastcall Function_222ec8c(int a1)
{
  int v1;
  int v2;
  bool v3;
  int v4;
  bool v5;
  int v6;
  bool v7;

  v1 = *(char *)(dword_2252CF4[363] + 99);
  *(uchar *)(dword_2252CF4[363] + 99) = *(uchar *)(a1 + 4 * v1 + 35950774);
  v2 = *(char *)(dword_2252CF4[363] + 99);
  if ( v2 != 13 )
    goto LABEL_22;
  v3 = a1 == 1;
  if ( a1 != 1 )
    v3 = a1 == 3;
  if ( v3 )
  {
    *(uchar *)(dword_2252CF4[363] + 100) = v1;
  }
  else
  {
LABEL_22:
    if ( v2 == -1 )
    {
      v4 = *(char *)(dword_2252CF4[363] + 100);
      v5 = v4 == 1;
      if ( v4 != 1 )
        v5 = v4 == 10;
      if ( v5 )
        *(uchar *)(dword_2252CF4[363] + 99) = 10;
      else
        *(uchar *)(dword_2252CF4[363] + 99) = 11;
    }
    else if ( v2 == -2 )
    {
      v6 = *(char *)(dword_2252CF4[363] + 100);
      v7 = v6 == 1;
      if ( v6 != 1 )
        v7 = v6 == 10;
      if ( v7 )
        *(uchar *)(dword_2252CF4[363] + 99) = 1;
      else
        *(uchar *)(dword_2252CF4[363] + 99) = 2;
    }
  }
  Function_222ec00();
  return Function_223e994(8);
}

//----- (0222ED38) --------------------------------------------------------
int __fastcall Function_222ed38(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = (*(uint *)Function_2243bbc(*(uint *)(dword_2252CF4[363] + 64), 0) & 0xFF) + 12;
  Function_222e8d8(4, v2);
  result = v2;
  if ( v2 >= 192 )
    result = Function_22463a4(v1, Function_222edb0);
  return result;
}

//----- (0222EDB0) --------------------------------------------------------
int __fastcall Function_222edb0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = (**(uint **)(dword_2252CF4[363] + 52) & 0xFF) + 12;
  Function_222e8d8(3, v2);
  result = v2;
  if ( v2 >= 192 )
    result = Function_22463a4(v1, Function_222ee20);
  return result;
}

//----- (0222EE20) --------------------------------------------------------
int __fastcall Function_222ee20(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = (**(uint **)(dword_2252CF4[363] + 40) & 0xFF) + 12;
  Function_222e8d8(2, v2);
  result = v2;
  if ( v2 >= 192 )
    result = Function_22463a4(v1, Function_222ee90);
  return result;
}

//----- (0222EE90) --------------------------------------------------------
int __fastcall Function_222ee90(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = (**(uint **)(dword_2252CF4[363] + 28) & 0xFF) + 12;
  Function_222e8d8(1, v2);
  result = v2;
  if ( v2 >= 192 )
    result = Function_22463a4(v1, Function_222ef00);
  return result;
}

//----- (0222EF00) --------------------------------------------------------
int __fastcall Function_222ef00(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = (**(uint **)(dword_2252CF4[363] + 16) & 0xFF) + 12;
  Function_222e8d8(0, v2);
  result = v2;
  if ( v2 >= 192 )
    result = Function_22463a4(v1, Function_222ef70);
  return result;
}

//----- (0222EF70) --------------------------------------------------------
int __fastcall Function_222ef70(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  Function_22463ac(0, a1);
  v1 = 0;
  do
  {
    Function_2243b3c(*(uint *)(dword_2252CF4[363] + 4 * v1 + 72));
    Function_2244650(*(uint *)(dword_2252CF4[363] + 4 * v1++));
  }
  while ( v1 < 4 );
  v2 = 0;
  do
    Function_2243b3c(*(uint *)(dword_2252CF4[363] + 4 * v2++ + 64));
  while ( v2 < 2 );
  v3 = 0;
  do
    Function_2245b74(*(uint *)(dword_2252CF4[363] + 4 * v3++ + 56));
  while ( v3 < 2 );
  v4 = 0;
  do
    Function_2245b74(*(uint *)(dword_2252CF4[363] + 4 * v4++ + 16));
  while ( v4 < 10 );
  return Function_224508c(&dword_2252CF4[363]);
}

//----- (0222F030) --------------------------------------------------------
int Function_222f030()
{
  char *v0;
  int v1;
  ushort *v2;
  short v3;
  short v4;
  int v5;
  int v6;
  int result;
  char v8;
  short v9;
  char v10;

  dword_2252CF4[365] = Function_2245068(620, 4);
  LOBYTE(dword_2252CF4[364]) = 0;
  MIi_CpuClear16(0, (int)&v8, 260);
  v8 = 80;
  v9 = 12;
  MI_CpuCopy8((int)"NINTENDO-DS", (uint)&v10, 0xCu, 0x50u);
  v0 = &v8;
  *(ushort *)dword_2252CF4[365] = 3;
  v1 = 65;
  v2 = (ushort *)(dword_2252CF4[365] + 2);
  do
  {
    v3 = *(ushort *)v0;
    v4 = *((ushort *)v0 + 1);
    v0 += 4;
    --v1;
    *v2 = v3;
    v2[1] = v4;
    v2 += 2;
  }
  while ( v1 );
  *(ushort *)(dword_2252CF4[365] + 262) = 1;
  *(ushort *)(dword_2252CF4[365] + 264) = -1;
  *(ushort *)(dword_2252CF4[365] + 266) = 1;
  *(ushort *)(dword_2252CF4[365] + 268) = -1;
  *(ushort *)(dword_2252CF4[365] + 270) = -1;
  OS_GetMacAddress(dword_2252CF4[365] + 272, (int)&dword_2252CF4[364], -1, 1u);
  result = Function_22269f8((int)Function_222f1f0, (int)Function_222f200, v5, v6);
  if ( result )
    OS_Panic();
  return result;
}

//----- (0222F140) --------------------------------------------------------
int __fastcall Function_222f140(int a1, int a2, int a3, int a4)
{
  int v4;
  bool v5;

  v4 = a1;
  Function_2226abc(a1, a2, a3, a4);
  if ( v4 )
  {
    v5 = *(uchar *)(dword_2252CF4[365] + 278) == 0;
    if ( !*(uchar *)(dword_2252CF4[365] + 278) )
      v5 = LOBYTE(dword_2252CF4[364]) == 1;
    if ( v5 )
      Function_223e4c0(dword_2252CF4[365] + 279);
  }
  return Function_224508c(&dword_2252CF4[365]);
}

//----- (0222F190) --------------------------------------------------------
int Function_222f190()
{
  int result;
  int v1;

  if ( Function_22246e4(dword_2252CF4[365]) )
  {
    v1 = *(uchar *)(dword_2252CF4[365] + 278);
    if ( v1 != 1 && (uchar)(v1 - 3) > 2u )
      result = 2;
    else
      result = 0;
  }
  else
  {
    result = 1;
    LOBYTE(dword_2252CF4[364]) = 1;
  }
  return result;
}

//----- (0222F1F0) --------------------------------------------------------
int __fastcall Function_222f1f0(int a1)
{
  return Function_2245068(a1, 32);
}

//----- (0222F200) --------------------------------------------------------
int Function_222f200()
{
  return Function_22450d0();
}

//----- (0222F20C) --------------------------------------------------------
int __fastcall Function_222f20c(int a1, int a2, int a3)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  dword_2252CF4[367] = a1;
  if ( !Function_222f298(a2, a3) )
    return -1;
  BYTE1(dword_2252CF4[366]) = 0;
  v4 = Function_222f334();
  v5 = Function_222f3fc(v4);
  Function_223e8d8(v5);
  v6 = Function_222f6c4(Function_222ff98);
  do
  {
    Function_22451c0(v6);
    ((void (*)(void))dword_2252CF4[369])();
    v7 = Function_2246254(0);
    v8 = Function_2245820(v7);
    Function_22460bc(v8);
    Function_20c3e14();
    v6 = BYTE1(dword_2252CF4[366]);
  }
  while ( !BYTE1(dword_2252CF4[366]) );
  Function_222f674();
  return 0;
}

//----- (0222F298) --------------------------------------------------------
int __fastcall Function_222f298(int a1, uint a2)
{
  LOBYTE(dword_2252CF4[366]) = a1;
  dword_2252CF4[368] = a2;
  if ( a1 < 0 || a1 > 6 )
    return 0;
  if ( a1 == 1 && (a2 >> 4) & 0xFFFFFFFD )
    return 0;
  if ( (dword_2252CF4[368] & 0xFu) > 1 )
    return 0;
  if ( a1 && ((uint)dword_2252CF4[368] >> 4) & 1 )
    return 0;
  if ( a1 || ((uint)dword_2252CF4[368] >> 4) & 1 )
    return 1;
  return 0;
}

//----- (0222F334) --------------------------------------------------------
int __fastcall Function_222f334(int a1, int a2, int a3, ushort *a4)
{
  short v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  ushort *v12;

  v12 = a4;
  LOWORD(REG_IME) = 0;
  GX_DispOff();
  REG_DISPCNT_SUB &= 0xFFFEFFFF;
  if ( !Function_20c3808() )
    OS_Panic();
  if ( !Function_20c39fc() )
    OS_Panic();
  v5 = GX_VBlankIntr(0, v4);
  InitDummy(v5);
  FS_Init(-1);
  TP_Init();
  RTC_Init();
  GX_DispOff();
  REG_DISPCNT_SUB &= 0xFFFEFFFF;
  Function_2245e7c(REG_DISPCNT_SUB);
  v6 = Function_2244fb8(dword_2252CF4[367]);
  v7 = Function_224589c(v6);
  v8 = Function_22460f8(v7);
  v9 = Function_2243440(v8);
  v10 = Function_224510c(v9);
  Function_2244114(v10);
  v12 = (ushort *)Function_2245068(1792, 32);
  Function_20a3404(v12);
  return Function_224508c(&v12);
}

//----- (0222F3FC) --------------------------------------------------------
int __fastcall Function_222f3fc(int a1, short a2)
{
  int v2;
  int v3;
  int v4;
  short v5;

  GX_VBlankIntr(0, a2);
  GX_SetBankForBG(1);
  GX_SetBankForOBJ(2);
  GX_SetGraphicsMode(1, 0, 0);
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT &= 0xFFFF1FFF;
  GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT, 0);
  REG_DISPCNT = REG_DISPCNT & 0xFFCFFFEF | 0x200010;
  REG_BG0CNT &= 0xFFBFu;
  REG_BG1CNT &= 0xFFBFu;
  REG_BG2CNT &= 0xFFBFu;
  REG_BG3CNT &= 0xFFBFu;
  REG_BG0HOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG3HOFS = 0;
  G2x_SetBlendBrightness_(&REG_BLDCNT, 63, 16);
  GX_SetBankForSubBG(128);
  GX_SetBankForSubOBJ(256);
  GXS_SetGraphicsMode(0);
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  GXx_SetMasterBrightness_(&REG_MASTER_BRIGHT_SUB, 0);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFCFFFEF | 0x10;
  REG_BG0CNT_SUB &= 0xFFBFu;
  REG_BG1CNT_SUB &= 0xFFBFu;
  REG_BG2CNT_SUB &= 0xFFBFu;
  REG_BG3CNT_SUB &= 0xFFBFu;
  REG_BG0HOFS_SUB = 0;
  REG_BG1HOFS_SUB = 0;
  REG_BG2HOFS_SUB = 0;
  REG_BG3HOFS_SUB = 0;
  G2x_SetBlendBrightness_(&REG_BLDCNT_SUB, 63, 16);
  REG_BG0CNT = REG_BG0CNT & 0x43 | 0xC00;
  REG_BG1CNT = REG_BG1CNT & 0x43 | 0xD08;
  REG_BG2CNT = REG_BG2CNT & 0x43 | 0xE10;
  REG_BG3CNT = REG_BG3CNT & 0x43 | 0xF10;
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0x43 | 0xC00;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0x43 | 0xD00;
  REG_BG2CNT_SUB = REG_BG2CNT_SUB & 0x43 | 0xE00;
  REG_BG3CNT_SUB = REG_BG3CNT_SUB & 0x43 | 0xF00;
  REG_DISPCNT &= 0xC7FFFFFF;
  REG_DISPCNT &= 0xF8FFFFFF;
  REG_POWERCNT &= 0x7FFFu;
  v2 = Function_2244424();
  v3 = Function_2245a44(v2);
  v4 = Function_2245bd8(v3);
  Function_22438b8(v4);
  GX_DispOn();
  v5 = REG_DISPCNT_SUB;
  REG_DISPCNT_SUB |= 0x10000u;
  return GX_VBlankIntr(1, v5);
}

//----- (0222F674) --------------------------------------------------------
int Function_222f674()
{
  int v0;
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

  GX_DispOff();
  REG_DISPCNT_SUB &= 0xFFFEFFFF;
  v0 = Function_22460e8();
  v1 = Function_2245188(v0);
  v2 = Function_2245910(v1);
  v3 = Function_223e968(v2);
  v4 = Function_224398c(v3);
  v5 = Function_2245b28(v4);
  v6 = Function_2244528(v5);
  v7 = Function_224415c(v6);
  v8 = Function_22435f0(v7);
  v9 = Function_224620c(v8);
  v10 = Function_2244ff8(v9);
  return Function_2245f30(v10);
}

//----- (0222F6C4) --------------------------------------------------------
int __fastcall Function_222f6c4(int result)
{
  dword_2252CF4[369] = result;
  return result;
}

//----- (0222F6D4) --------------------------------------------------------
int __fastcall Function_222f6d4(int result, int a2)
{
  dword_2252CF4[370] = result;
  dword_2252CF4[371] = a2;
  return result;
}

//----- (0222F6E8) --------------------------------------------------------
uint *__fastcall Function_222f6e8(uint *result, uint *a2)
{
  if ( result )
    *result = dword_2252CF4[370];
  if ( a2 )
  {
    result = (uint *)dword_2252CF4[371];
    *a2 = dword_2252CF4[371];
  }
  return result;
}

//----- (0222F710) --------------------------------------------------------
int __fastcall Function_222f710(int result, int a2)
{
  dword_2252CF4[372] = result;
  dword_2252CF4[373] = a2;
  return result;
}

//----- (0222F724) --------------------------------------------------------
uint *__fastcall Function_222f724(uint *result, uint *a2)
{
  if ( result )
    *result = dword_2252CF4[372];
  if ( a2 )
  {
    result = (uint *)dword_2252CF4[373];
    *a2 = dword_2252CF4[373];
  }
  return result;
}

//----- (0222F74C) --------------------------------------------------------
int Function_222f74c()
{
  return LOBYTE(dword_2252CF4[366]);
}

//----- (0222F75C) --------------------------------------------------------
int Function_222f75c()
{
  return dword_2252CF4[368] & 0xF;
}

//----- (0222F774) --------------------------------------------------------
BOOL __fastcall Function_222f774(int a1)
{
  return (a1 & ((uint)dword_2252CF4[368] >> 4)) != 0;
}

//----- (0222F790) --------------------------------------------------------
int *Function_222f790()
{
  int *result;

  result = &dword_2252CF4[366];
  BYTE1(dword_2252CF4[366]) = 1;
  return result;
}

//----- (0222F7A4) --------------------------------------------------------
int Function_222f7a4()
{
  if ( LOBYTE(dword_2252CF4[366]) == 6 )
    return 56;
  if ( LOBYTE(dword_2252CF4[366]) != 1 || ((uint)dword_2252CF4[368] >> 4) & 2 )
    return (uchar)(LOBYTE(dword_2252CF4[366]) + 49);
  return 55;
}

//----- (0222F7E4) --------------------------------------------------------
int Function_222f7e4()
{
  int result;

  dword_2252CF4[374] = Function_2245068(100, 4);
  result = Function_2244008(8);
  *(uint *)(dword_2252CF4[374] + 96) = result;
  return result;
}

//----- (0222F820) --------------------------------------------------------
int Function_222f820()
{
  return Function_224508c(&dword_2252CF4[374]);
}

//----- (0222F834) --------------------------------------------------------
uint *__fastcall Function_222f834(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  uint *result;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = (uint *)Function_22440bc(*(uint *)(dword_2252CF4[374] + 96));
  v6 = Function_2243738(v4, &v10, 4);
  v7 = v6 + 32;
  v5[2] = v6;
  *v5 = v6 + 48;
  v8 = *(uint *)(v6 + 36);
  result = v5;
  v5[1] = v7 + v8 + 8;
  return result;
}

//----- (0222F88C) --------------------------------------------------------
int __fastcall Function_222f88c(int a1)
{
  int v1;

  v1 = a1;
  Function_224382c(*(uint *)(a1 + 8));
  return Function_2244064(*(uint *)(dword_2252CF4[374] + 96), v1);
}

//----- (0222F8B8) --------------------------------------------------------
int __fastcall Function_222f8b8(uint *a1, ushort a2)
{
  return a1[1] + *(uint *)(*a1 + 4 * a2);
}

//----- (0222F8D0) --------------------------------------------------------
int __fastcall Function_222f8d0(uint *a1, ushort a2, int a3, short a4)
{
  int result;

  result = a1[1] + *(uint *)(*a1 + 4 * a2);
  if ( a3 >= 0 )
    *(ushort *)(result + 2 * a3) = a4 + 48;
  return result;
}

//----- (0222F8FC) --------------------------------------------------------
int __fastcall Function_222f8fc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  const char *v7;
  int v8;
  int v9;
  const char *v10;
  const char *v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  dword_2252CF4[375] = Function_2245068(123556, 32);
  *(uint *)(dword_2252CF4[375] + 123544) = v4;
  *(uchar *)(dword_2252CF4[375] + 123552) = 0;
  *(uchar *)(dword_2252CF4[375] + 123553) = 0;
  v7 = "dwc:/move/child.srl";
  v10 = "dwc:/move/banner.char";
  v11 = "dwc:/move/banner.plt";
  v12 = 345;
  v8 = Function_222f8b8((uint *)dword_2252CF4[377], 0);
  v9 = Function_222f8b8((uint *)dword_2252CF4[377], 1u);
  v13 = (uchar)Function_222f7a4();
  v5 = Function_22425e8(dword_2252CF4[375], &v7);
  if ( !Function_2242834(v5) )
    OS_Panic();
  result = Function_2246304(0, Function_222fa9c, 0, 120);
  *(uint *)(dword_2252CF4[375] + 123548) = result;
  return result;
}

//----- (0222F9E8) --------------------------------------------------------
int Function_222f9e8()
{
  return Function_2246304(0, Function_222fa08, 0, 120);
}

//----- (0222FA08) --------------------------------------------------------
int __fastcall Function_222fa08(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_22426d8();
  if ( result )
  {
    *(uchar *)(dword_2252CF4[375] + 123553) = 1;
    result = Function_22463ac(0, v1);
  }
  return result;
}

//----- (0222FA44) --------------------------------------------------------
BOOL Function_222fa44()
{
  return dword_2252CF4[375] == 0;
}

//----- (0222FA60) --------------------------------------------------------
int __fastcall Function_222fa60(int result)
{
  *(uint *)(dword_2252CF4[375] + 123544) = result;
  return result;
}

//----- (0222FA78) --------------------------------------------------------
int Function_222fa78()
{
  return Function_224287c();
}

//----- (0222FA84) --------------------------------------------------------
int Function_222fa84()
{
  return dword_2252CF4[375] + 123520;
}

//----- (0222FA9C) --------------------------------------------------------
int __fastcall Function_222fa9c(int a1, int a2, int a3, int a4)
{
  int result;
  int (__fastcall *v5)(uint);
  char v6;
  uchar v7;
  int v8;

  v8 = a4;
  Function_22428b0();
  result = dword_2252CF4[375] + 122880;
  if ( !*(uchar *)(dword_2252CF4[375] + 123552) || *(uchar *)(dword_2252CF4[375] + 123553) )
  {
    Function_2242c34(&v7, &v6);
    if ( (int)v7 > 26 )
      JUMPOUT(&loc_222FB84);
    if ( (int)v7 >= 26 )
      JUMPOUT(&loc_222FC90);
    if ( (int)v7 > 20 )
      JUMPOUT(&loc_222FB74);
    JUMPOUT(__CS__, (char *)&Function_222fb20 + 4 * v7);
  }
  v5 = *(int (__fastcall **)(uint))(dword_2252CF4[375] + 123544);
  if ( v5 )
    result = v5(0);
  return result;
}

//----- (0222FB20) --------------------------------------------------------
void Function_222fb20()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB24) --------------------------------------------------------
void Function_222fb24()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB28) --------------------------------------------------------
void Function_222fb28()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB2C) --------------------------------------------------------
void Function_222fb2c()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB30) --------------------------------------------------------
void Function_222fb30()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB34) --------------------------------------------------------
void Function_222fb34()
{
  JUMPOUT(&loc_222FBA8);
}

//----- (0222FB38) --------------------------------------------------------
void Function_222fb38()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB3C) --------------------------------------------------------
void Function_222fb3c()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB40) --------------------------------------------------------
void Function_222fb40()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB44) --------------------------------------------------------
void Function_222fb44()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB48) --------------------------------------------------------
void Function_222fb48()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB4C) --------------------------------------------------------
void Function_222fb4c()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB50) --------------------------------------------------------
void Function_222fb50()
{
  JUMPOUT(&loc_222FCD4);
}

//----- (0222FB54) --------------------------------------------------------
void Function_222fb54()
{
  JUMPOUT(&loc_222FC08);
}

//----- (0222FB58) --------------------------------------------------------
void Function_222fb58()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB5C) --------------------------------------------------------
void Function_222fb5c()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB60) --------------------------------------------------------
void Function_222fb60()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB64) --------------------------------------------------------
void Function_222fb64()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB68) --------------------------------------------------------
void Function_222fb68()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB6C) --------------------------------------------------------
void Function_222fb6c()
{
  JUMPOUT(&loc_222FD2C);
}

//----- (0222FB70) --------------------------------------------------------
void Function_222fb70()
{
  void (__fastcall *v0)(int);
  char v1;
  int v2;

  if ( !v1 )
    JUMPOUT(__CS__, v2);
  v0 = *(void (__fastcall **)(int))(dword_2252CF4[375] + 123544);
  if ( !v0 )
  {
    *(uchar *)(dword_2252CF4[375] + 123552) = 1;
    JUMPOUT(__CS__, v2);
  }
  v0(3);
  JUMPOUT(__CS__, v2);
}

//----- (0222FD3C) --------------------------------------------------------
uint Function_222fd3c()
{
  dword_2252CF4[376] = Function_2245068(12, -4);
  if ( Function_222ab50(15, 64, (int)Function_222feb4, (int)Function_222fecc, (int)Function_222fedc, 2048) != 1 )
    OS_Panic();
  return OS_Sleep(0xAu);
}

//----- (0222FDA8) --------------------------------------------------------
int Function_222fda8()
{
  if ( Function_222ac38() != 1 )
    OS_Panic();
  return Function_224508c(&dword_2252CF4[376]);
}

//----- (0222FDCC) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x222FE0C for case 0"

//----- (0222FDEC) --------------------------------------------------------
void Function_222fdec()
{
  JUMPOUT(&loc_222FE0C);
}

//----- (0222FDF0) --------------------------------------------------------
void Function_222fdf0()
{
  JUMPOUT(&loc_222FE0C);
}

//----- (0222FDF4) --------------------------------------------------------
void Function_222fdf4()
{
  JUMPOUT(&loc_222FE18);
}

//----- (0222FDF8) --------------------------------------------------------
void Function_222fdf8()
{
  JUMPOUT(&loc_222FE0C);
}

//----- (0222FDFC) --------------------------------------------------------
void Function_222fdfc()
{
  JUMPOUT(&loc_222FE24);
}

//----- (0222FE00) --------------------------------------------------------
void Function_222fe00()
{
  JUMPOUT(&loc_222FE0C);
}

//----- (0222FE04) --------------------------------------------------------
void Function_222fe04()
{
  JUMPOUT(&loc_222FE30);
}

//----- (0222FE08) --------------------------------------------------------
void Function_222fe08()
{
  int v0;

  JUMPOUT(__CS__, v0);
}

//----- (0222FE88) --------------------------------------------------------
int __fastcall Function_222fe88(int a1, int a2, int a3, int a4)
{
  char v5;
  int v6;

  v6 = a4;
  if ( Function_222ad04(&v5) != 1 )
    OS_Panic();
  return Function_223e3ac(&v5);
}

//----- (0222FEB4) --------------------------------------------------------
int __fastcall Function_222feb4(int *a1)
{
  int result;
  int *v2;
  int v3;
  int v4;

  v2 = a1;
  result = *a1;
  ++v2;
  v3 = *v2;
  v4 = v2[1];
  *(uint *)dword_2252CF4[376] = result;
  *(uint *)(dword_2252CF4[376] + 4) = v3;
  *(uint *)(dword_2252CF4[376] + 8) = v4;
  return result;
}

//----- (0222FECC) --------------------------------------------------------
int __fastcall Function_222fecc(int a1)
{
  return Function_2245068(a1, 32);
}

//----- (0222FEDC) --------------------------------------------------------
int Function_222fedc()
{
  return Function_22450d0();
}

//----- (0222FEE8) --------------------------------------------------------
int Function_222fee8()
{
  Function_2244194(3, 1, 63, 20);
  Function_2244194(3, 0, 63, 20);
  return Function_222f6c4((int)Function_222ff24);
}

//----- (0222FF24) --------------------------------------------------------
int *Function_222ff24()
{
  int *result;
  int v1;

  result = (int *)Function_2244170(1);
  if ( !result )
  {
    result = (int *)Function_2244170(0);
    if ( !result )
    {
      ((void (*)(void))Function_224641c)();
      Function_224641c(1, 0);
      Function_2243ea4(1);
      Function_2243ea4(0);
      Function_222bbac();
      Function_222b930();
      Function_222f88c(dword_2252CF4[377]);
      v1 = Function_222f820();
      Function_223ddb8(v1);
      result = Function_222f790();
    }
  }
  return result;
}

//----- (0222FF98) --------------------------------------------------------
int Function_222ff98()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int *v7;
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

  Function_223dd74();
  Function_222f7e4();
  Function_222b910();
  Function_222bb34();
  Function_222b580();
  if ( Function_222f74c() == 1 && Function_222f774(2) )
  {
    dword_2252CF4[377] = (int)Function_222f834((int)"msg/usa.bmg.l", v0, v1, v2);
  }
  else
  {
    v3 = Function_222f74c();
    dword_2252CF4[377] = (int)Function_222f834((int)off_2249DF8[v3], (int)off_2249DF8, v4, v5);
  }
  v6 = Function_222b6a0("char/jtMain.nce.l");
  Function_2243e74(1, v6);
  v7 = Function_222b6a0("char/jbMain.nce.l");
  Function_2243e74(0, v7);
  Function_222b700("char/jtBgMain.ncg.l", (void (__fastcall *)(int, uint, int))GXS_LoadBG1Char, v8, v9);
  Function_222b700("char/jtBgMain.ncl.l", (void (__fastcall *)(int, uint, int))GXS_LoadBGPltt, v10, v11);
  Function_222b700("char/jtObjMain.ncg.l", (void (__fastcall *)(int, uint, int))GXS_LoadOBJ, v12, v13);
  Function_222b700("char/xtObjMain.ncl.l", (void (__fastcall *)(int, uint, int))GXS_LoadOBJPltt, v14, v15);
  Function_222b700("char/jbBgStep1.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, v16, v17);
  Function_222b700("char/jbBgStep1.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v18, v19);
  Function_222b700("char/jbObjMain.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadOBJ, v20, v21);
  Function_222b700("char/ybObjMain.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadOBJPltt, v22, v23);
  v24 = Function_222f75c();
  if ( v24 )
  {
    if ( v24 == 1 )
      Function_222b700("char/jtStep1.nsc.l", (void (__fastcall *)(int, uint, int))GXS_LoadBG1Scr, v25, v26);
  }
  else
  {
    Function_222b700("char/jtTop.nsc.l", (void (__fastcall *)(int, uint, int))GXS_LoadBG1Scr, v25, v26);
  }
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  Function_2244c84(1, 2);
  Function_2244c84(0, 2);
  return Function_222f6c4((int)Function_2230178);
}

//----- (02230178) --------------------------------------------------------
int Function_2230178()
{
  Function_2244194(2, 1, 2, 20);
  Function_2244194(2, 0, 2, 20);
  return Function_222f6c4((int)Function_22301b4);
}

//----- (022301B4) --------------------------------------------------------
int Function_22301b4()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      result = Function_222f75c();
      if ( result )
      {
        if ( result == 1 )
        {
          Function_222f6d4(1, 1);
          result = Function_222f6c4((int)Function_223a6b4);
        }
      }
      else
      {
        Function_222f6d4(0, 1);
        result = Function_222f6c4((int)Function_2230228);
      }
    }
  }
  return result;
}

//----- (02230228) --------------------------------------------------------
int Function_2230228()
{
  Function_22302a4();
  Function_222bbc0(0);
  Function_222b594(46, -1, 0);
  Function_223f4d0(4);
  Function_222ba04(
    HIWORD(dword_224910C[2 * LOBYTE(dword_2252CF4[378]) + 3]),
    HIWORD(dword_224911C[2 * LOBYTE(dword_2252CF4[378])]),
    LOWORD(dword_224911C[2 * LOBYTE(dword_2252CF4[378])]),
    LOWORD(dword_2249120[2 * LOBYTE(dword_2252CF4[378])]));
  return Function_222f6c4((int)Function_2230390);
}

//----- (022302A4) --------------------------------------------------------
int __fastcall Function_22302a4(int a1, int a2, int a3, int a4)
{
  char *v4;
  char *v5;
  int v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int result;
  char v15;
  int v16;

  v16 = a4;
  v4 = &byte_224912A;
  v5 = &v15;
  v6 = 11;
  do
  {
    v7 = *v4;
    v8 = v4[1];
    v4 += 2;
    *v5 = v7;
    v5[1] = v8;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  Function_222b700("char/jbBgStep1.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, 0, (int)v5);
  Function_222b700("char/jbBgStep1.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v9, v10);
  Function_222b700("char/jb2Menu.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v11, v12);
  v13 = Function_222b6a0(&v15);
  dword_2252CF4[379] = Function_2243738(v13, 0, 4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02230390) --------------------------------------------------------
int Function_2230390()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 20, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 20);
  return Function_222f6c4((int)Function_22303e4);
}

//----- (022303E4) --------------------------------------------------------
int Function_22303e4()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(0, v1, v2, v3);
      result = Function_222f6c4((int)Function_2230420);
    }
  }
  return result;
}

//----- (02230420) --------------------------------------------------------
int Function_2230420()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_2230448);
  }
  return result;
}

//----- (02230448) --------------------------------------------------------
int Function_2230448()
{
  int v0;
  int v1;

  v0 = Function_223045c();
  v1 = Function_2230588(v0);
  return Function_223058c(v1);
}

//----- (0223045C) --------------------------------------------------------
int Function_223045c()
{
  short *v0;
  uint v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v0 = &word_224910A;
  v1 = 0;
  do
  {
    if ( Function_22455b8(v0) )
    {
      Function_222b048(1);
      v2 = 2 * (uchar)v1;
      v3 = HIWORD(dword_224910C[2 * (uchar)v1 + 3]);
      v4 = HIWORD(dword_224911C[2 * (uchar)v1]);
      v5 = LOWORD(dword_224911C[v2]);
      v6 = LOWORD(dword_2249120[v2]);
      LOBYTE(dword_2252CF4[378]) = v1;
      return Function_222ba04(v3, v4, v5, v6);
    }
    ++v1;
    v0 += 4;
  }
  while ( v1 < 2 );
  if ( Function_2245470(1) )
    return Function_222b048(1);
  if ( Function_2245470(2) )
    return Function_222b048(0);
  if ( Function_22454b0(64) )
    return Function_22306f0(1);
  if ( Function_22454b0(128) )
    return Function_22306f0(3);
  if ( Function_22454b0(32) )
    return Function_22306f0(0);
  result = Function_22454b0(16);
  if ( result )
    result = Function_22306f0(2);
  return result;
}

//----- (02230588) --------------------------------------------------------
void Function_2230588()
{
  ;
}

//----- (0223058C) --------------------------------------------------------
int Function_223058c()
{
  int result;
  int v1;

  result = Function_222b034();
  if ( result )
  {
    if ( result == 1 )
    {
      v1 = Function_223e994(6);
      Function_2230760(v1);
      result = Function_222f6c4((int)Function_22305dc);
    }
  }
  else
  {
    Function_223e994(7);
    result = Function_222f6c4((int)Function_222fee8);
  }
  return result;
}

//----- (022305DC) --------------------------------------------------------
int Function_22305dc()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_22305fc);
}

//----- (022305FC) --------------------------------------------------------
int Function_22305fc()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 22, 8);
    result = Function_222f6c4((int)Function_2230648);
  }
  return result;
}

//----- (02230648) --------------------------------------------------------
int Function_2230648()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222baf4();
      Function_222b668();
      Function_224382c(dword_2252CF4[379]);
      ((void (*)(void))Function_2244cd8)();
      Function_2244cd8(0, 20);
      result = LOBYTE(dword_2252CF4[378]);
      if ( LOBYTE(dword_2252CF4[378]) )
      {
        if ( LOBYTE(dword_2252CF4[378]) == 1 )
        {
          Function_222f6d4(0, 0);
          result = Function_222f6c4((int)Function_2231230);
        }
      }
      else
      {
        Function_222f6d4(1, 0);
        result = Function_222f6c4((int)Function_223a6b4);
      }
    }
  }
  return result;
}

//----- (022306F0) --------------------------------------------------------
int __fastcall Function_22306f0(int result)
{
  bool v1;

  v1 = result == 1;
  if ( result != 1 )
    v1 = result == 3;
  if ( !v1 )
  {
    LOBYTE(dword_2252CF4[378]) ^= 1u;
    Function_223e994(8);
    result = Function_222ba04(
               HIWORD(dword_224910C[2 * LOBYTE(dword_2252CF4[378]) + 3]),
               HIWORD(dword_224911C[2 * LOBYTE(dword_2252CF4[378])]),
               LOWORD(dword_224911C[2 * LOBYTE(dword_2252CF4[378])]),
               LOWORD(dword_2249120[2 * LOBYTE(dword_2252CF4[378])]));
  }
  return result;
}

//----- (02230760) --------------------------------------------------------
int __fastcall Function_2230760(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;

  v6 = a4;
  LOWORD(v6) = 513;
  v4 = *((uchar *)&v6 + LOBYTE(dword_2252CF4[378]));
  return Function_223d154(dword_2252CF4[379]);
}

//----- (022307A0) --------------------------------------------------------
int Function_22307a0()
{
  LOBYTE(dword_2252CF4[380]) = 0;
  Function_22307e8();
  Function_222bbc0(18);
  Function_222b594(59, -1, 0);
  Function_222b7c8(23);
  return Function_222f6c4((int)Function_2230868);
}

//----- (022307E8) --------------------------------------------------------
int __fastcall Function_22307e8(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/yb5Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02230868) --------------------------------------------------------
int Function_2230868()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_22308bc);
}

//----- (022308BC) --------------------------------------------------------
int Function_22308bc()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(3, v1, v2, v3);
      result = Function_222f6c4((int)Function_22308f8);
    }
  }
  return result;
}

//----- (022308F8) --------------------------------------------------------
int Function_22308f8()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_2230920);
  }
  return result;
}

//----- (02230920) --------------------------------------------------------
int Function_2230920()
{
  int v0;
  int v1;

  v0 = Function_2230934();
  v1 = Function_223096c(v0);
  return Function_2230970(v1);
}

//----- (02230934) --------------------------------------------------------
int Function_2230934()
{
  int result;

  if ( Function_2245470(1) )
    Function_222b048(1);
  result = Function_2245470(2);
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (0223096C) --------------------------------------------------------
void Function_223096c()
{
  ;
}

//----- (02230970) --------------------------------------------------------
int Function_2230970()
{
  int result;

  result = Function_222b034();
  if ( result )
  {
    if ( result == 1 )
    {
      Function_223e994(6);
      Function_223fc48(24);
      Function_222b0c0();
      result = Function_222f6c4((int)Function_2230b14);
    }
  }
  else
  {
    Function_223e994(7);
    result = Function_222f6c4((int)Function_22309d8);
  }
  return result;
}

//----- (022309D8) --------------------------------------------------------
int Function_22309d8()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_22309f8);
}

//----- (022309F8) --------------------------------------------------------
int Function_22309f8()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222b004();
    if ( !LOBYTE(dword_2252CF4[380]) )
      Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_2230a5c);
  }
  return result;
}

//----- (02230A5C) --------------------------------------------------------
int Function_2230a5c()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    if ( LOBYTE(dword_2252CF4[380]) || (result = Function_2244170(1)) == 0 )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_22448e0(0);
        if ( !LOBYTE(dword_2252CF4[380]) )
        {
          Function_222b668();
          Function_2244cd8(1, 1);
        }
        Function_2244cd8(0, 21);
        if ( LOBYTE(dword_2252CF4[380]) )
        {
          Function_222f6d4(0, 1);
          result = Function_222f6c4((int)Function_2230b84);
        }
        else
        {
          Function_222f6d4(0, 1);
          result = Function_222f6c4((int)Function_2231230);
        }
      }
    }
  }
  return result;
}

//----- (02230B14) --------------------------------------------------------
int Function_2230b14()
{
  int result;

  result = Function_223ffb8();
  if ( result )
  {
    if ( result != 1 )
      return result;
    Function_223e994(14);
    LOBYTE(dword_2252CF4[380]) = 1;
  }
  else
  {
    Function_223e994(7);
  }
  Function_223ff74();
  return Function_222f6c4((int)Function_2230b64);
}

//----- (02230B64) --------------------------------------------------------
int Function_2230b64()
{
  int result;

  result = Function_223ffcc();
  if ( !result )
    result = Function_222f6c4((int)Function_22309d8);
  return result;
}

//----- (02230B84) --------------------------------------------------------
int Function_2230b84()
{
  int v0;

  Function_2230ba8();
  v0 = Function_222b7c8(25);
  Function_223e61c(v0);
  return Function_222f6c4((int)Function_2230c28);
}

//----- (02230BA8) --------------------------------------------------------
int __fastcall Function_2230ba8(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/yb5Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02230C28) --------------------------------------------------------
int Function_2230c28()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2230c5c);
}

//----- (02230C5C) --------------------------------------------------------
int Function_2230c5c()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(0);
  if ( !result )
  {
    Function_222b790(5, v1, v2, v3);
    result = Function_222f6c4((int)Function_2230c88);
  }
  return result;
}

//----- (02230C88) --------------------------------------------------------
int Function_2230c88()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_2230cb0);
  }
  return result;
}

//----- (02230CB0) --------------------------------------------------------
int Function_2230cb0()
{
  int v0;
  int v1;

  v0 = Function_2230cc4();
  v1 = Function_2230ce4(v0);
  return Function_2230ce8(v1);
}

//----- (02230CC4) --------------------------------------------------------
int Function_2230cc4()
{
  int result;

  result = Function_2245470(1);
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (02230CE4) --------------------------------------------------------
void Function_2230ce4()
{
  ;
}

//----- (02230CE8) --------------------------------------------------------
int Function_2230ce8()
{
  int result;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e994(6);
    result = Function_222f6c4((int)Function_2230d10);
  }
  return result;
}

//----- (02230D10) --------------------------------------------------------
int Function_2230d10()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_2230d30);
}

//----- (02230D30) --------------------------------------------------------
int Function_2230d30()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_2244194(3, 1, 63, 64);
    Function_2244194(3, 0, 63, 64);
    result = Function_222f6c4((int)Function_2230d7c);
  }
  return result;
}

//----- (02230D7C) --------------------------------------------------------
int Function_2230d7c()
{
  int result;
  int v1;
  int v2;
  int v3;
  int v4;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      v1 = OS_SpinWait(0x1000000u);
      result = PM_ForceToPowerOff(v1, v2, v3, v4);
    }
  }
  return result;
}

//----- (02230DB0) --------------------------------------------------------
int Function_2230db0()
{
  int v0;

  Function_2230de4();
  Function_222bbc0(17);
  v0 = Function_222b594(58, -1, 0);
  Function_2230e64(v0);
  return Function_222f6c4((int)Function_2231038);
}

//----- (02230DE4) --------------------------------------------------------
int __fastcall Function_2230de4(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/jb5Info.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02230E64) --------------------------------------------------------
int __fastcall Function_2230e64(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  uint v12;
  uint v13;
  int v14;
  int v15;
  uint v16;
  int v17;
  char v19;
  char v20;
  int v21;
  uint v22;
  long long v23;
  int v24;

  v24 = a4;
  v4 = Function_224467c(0, 0);
  OS_GetMacAddress((uint)&v19, v5, v6, v7);
  Function_20dcdcc((int)&v20, 20, L"%02X-%02X-%02X-%02X-%02X-%02X");
  Function_2244a9c(v4, 8, 64, 240, 28, 2, 1152, &v20);
  Function_20a283c((uint)&v23, v8, v9, v10);
  if ( v23 )
  {
    v22 = 1000 * ull_mod(v23, SHIDWORD(v23), 10LL);
    ll_udiv();
    v11 = 0;
    v13 = v12;
    v15 = v14;
    do
    {
      *(&v21 + 2 - v11) = ull_mod(v13, v15, 10000LL);
      ll_udiv();
      v13 = v16;
      v15 = v17;
      ++v11;
    }
    while ( v11 < 3 );
    Function_20dcdcc((int)&v20, 20, L"%04d-%04d-%04d-%04d");
  }
  else
  {
    Function_20dcdcc((int)&v20, 20, L"-------------------");
  }
  Function_2244a9c(v4, 8, 120, 240, 28, 2, 1152, &v20);
  return Function_2244c08(v4);
}

//----- (02231038) --------------------------------------------------------
int Function_2231038()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_223108c);
}

//----- (0223108C) --------------------------------------------------------
int Function_223108c()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(2, v1, v2, v3);
      result = Function_222f6c4((int)Function_22310c8);
    }
  }
  return result;
}

//----- (022310C8) --------------------------------------------------------
int Function_22310c8()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_22310f0);
  }
  return result;
}

//----- (022310F0) --------------------------------------------------------
int Function_22310f0()
{
  int v0;
  int v1;

  v0 = Function_2231104();
  v1 = Function_2231124(v0);
  return Function_2231128(v1);
}

//----- (02231104) --------------------------------------------------------
int Function_2231104()
{
  int result;

  result = Function_2245470(2);
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (02231124) --------------------------------------------------------
void Function_2231124()
{
  ;
}

//----- (02231128) --------------------------------------------------------
int Function_2231128()
{
  int result;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e994(7);
    result = Function_222f6c4((int)Function_2231150);
  }
  return result;
}

//----- (02231150) --------------------------------------------------------
int Function_2231150()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_2231170);
}

//----- (02231170) --------------------------------------------------------
int Function_2231170()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222b004();
    Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_22311c0);
  }
  return result;
}

//----- (022311C0) --------------------------------------------------------
int Function_22311c0()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_22448e0(0);
        Function_222b668();
        Function_2244cd8(1, 1);
        Function_2244cd8(0, 21);
        Function_222f6d4(0, 1);
        result = Function_222f6c4((int)Function_2231230);
      }
    }
  }
  return result;
}

//----- (02231230) --------------------------------------------------------
int Function_2231230()
{
  uint *v0;

  BYTE1(dword_2252CF4[381]) = 0;
  Function_22312f8();
  Function_222bbc0(16);
  Function_223f4d0(3);
  Function_222b594(57, -1, 0);
  v0 = (uint *)Function_2243f60(0, 91);
  dword_2252CF4[383] = (int)v0;
  *v0 = *v0 & 0xFE00FF00 | 0xE00084;
  *(ushort *)(dword_2252CF4[383] + 4) = *(ushort *)(dword_2252CF4[383] + 4) & 0xF3FF | 0xC00;
  Function_222ba04(
    HIWORD(dword_2249178[2 * LOBYTE(dword_2252CF4[381]) + 5]),
    HIWORD(dword_2249190[2 * LOBYTE(dword_2252CF4[381])]),
    LOWORD(dword_2249190[2 * LOBYTE(dword_2252CF4[381])]),
    LOWORD(dword_2249194[2 * LOBYTE(dword_2252CF4[381])]));
  return Function_222f6c4((int)Function_2231494);
}

//----- (022312F8) --------------------------------------------------------
int __fastcall Function_22312f8(int a1, int a2, int a3, int a4)
{
  const char *v4;
  char *v5;
  int v6;
  char v7;
  char v8;
  char *v9;
  char *v10;
  int v11;
  char v12;
  char v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  uint v22;
  uint v23;
  bool v24;
  int v25;
  int v26;
  uint v27;
  int result;
  int v29;
  int v30;
  char v31;
  char v32;
  int v33;

  v33 = a4;
  v4 = "char/ybBgOption.ncl.l";
  v5 = &v32;
  v6 = 11;
  do
  {
    v7 = *v4;
    v8 = v4[1];
    v4 += 2;
    *v5 = v7;
    v5[1] = v8;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  v9 = &byte_224915E;
  v10 = &v31;
  v11 = 11;
  do
  {
    v12 = *v9;
    v13 = v9[1];
    v9 += 2;
    *v10 = v12;
    v10[1] = v13;
    v10 += 2;
    --v11;
  }
  while ( v11 );
  v14 = (uchar)*v9;
  *v10 = v14;
  Function_222b700("char/jbBgOption.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, v14, (int)v10);
  Function_222b700("char/jb5OptMenu.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v15, v16);
  v17 = Function_222b6a0(&v31);
  dword_2252CF4[382] = Function_2243738(v17, 0, 4);
  v18 = Function_222b6a0(&v32);
  v19 = Function_2243738(v18, 0, 4);
  Function_20a283c((uint)&v29, v20, v21, v22);
  v24 = v30 == 0;
  v25 = 0;
  if ( !v30 )
    v24 = v29 == 0;
  if ( v24 )
  {
    v26 = v19 + 192;
    v27 = v19 + 64;
    do
    {
      MI_CpuCopy8(v26, v27, 0x20u, v23);
      ++v25;
      v26 += 32;
      v27 += 32;
    }
    while ( v25 < 2 );
  }
  DC_FlushRange(v19, 512);
  GX_LoadBGPltt(v19, 0, 0x200u);
  Function_224382c(v19);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02231494) --------------------------------------------------------
int Function_2231494()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 20, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 20);
  return Function_222f6c4((int)Function_22314e8);
}

//----- (022314E8) --------------------------------------------------------
int Function_22314e8()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(0, v1, v2, v3);
      result = Function_222f6c4((int)Function_2231524);
    }
  }
  return result;
}

//----- (02231524) --------------------------------------------------------
int Function_2231524()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_223154c);
  }
  return result;
}

//----- (0223154C) --------------------------------------------------------
int Function_223154c()
{
  int v0;
  int v1;

  v0 = Function_2231560();
  v1 = Function_2231654(v0);
  return Function_2231658(v1);
}

//----- (02231560) --------------------------------------------------------
int Function_2231560()
{
  int v0;
  uint v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v0 = 35950966;
  v1 = 0;
  do
  {
    if ( Function_22455b8(v0) )
    {
      Function_222b048(1);
      v2 = 2 * (uchar)v1;
      v3 = HIWORD(dword_2249178[2 * (uchar)v1 + 5]);
      v4 = HIWORD(dword_2249190[2 * (uchar)v1]);
      v5 = LOWORD(dword_2249190[v2]);
      v6 = LOWORD(dword_2249194[v2]);
      LOBYTE(dword_2252CF4[381]) = v1;
      return Function_222ba04(v3, v4, v5, v6);
    }
    ++v1;
    v0 += 8;
  }
  while ( v1 < 3 );
  if ( Function_2245470(1) )
    return Function_222b048(1);
  if ( Function_2245470(2) )
    return Function_222b048(0);
  if ( Function_22454b0(64) )
    return Function_223188c(1);
  result = Function_22454b0(128);
  if ( result )
    result = Function_223188c(3);
  return result;
}

//----- (02231654) --------------------------------------------------------
void Function_2231654()
{
  ;
}

//----- (02231658) --------------------------------------------------------
int Function_2231658()
{
  int result;
  int v1;
  int v2;
  uint v3;
  int v4;
  long long v5;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e994(7);
    return Function_222f6c4((int)Function_22316fc);
  }
  if ( result == 1 )
  {
    Function_20a283c((uint)&v5, v1, v2, v3);
    if ( LOBYTE(dword_2252CF4[381]) && !v5 )
    {
      Function_223e994(9);
      return Function_222b068(-1);
    }
    v4 = Function_223e994(6);
    Function_223191c(v4);
    BYTE1(dword_2252CF4[381]) = 1;
    return Function_222f6c4((int)Function_22316fc);
  }
  return result;
}

//----- (022316FC) --------------------------------------------------------
int Function_22316fc()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_223171c);
}

//----- (0223171C) --------------------------------------------------------
int Function_223171c()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    if ( BYTE1(dword_2252CF4[381]) )
      Function_222b004();
    Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 20, 8);
    result = Function_222f6c4((int)Function_2231780);
  }
  return result;
}

//----- (02231780) --------------------------------------------------------
int Function_2231780()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_2245b74(dword_2252CF4[383]);
        Function_222baf4();
        Function_222b668();
        Function_224382c(dword_2252CF4[382]);
        Function_2244cd8(1, 1);
        Function_2244cd8(0, 20);
        if ( BYTE1(dword_2252CF4[381]) )
        {
          result = LOBYTE(dword_2252CF4[381]);
          if ( LOBYTE(dword_2252CF4[381]) )
          {
            if ( LOBYTE(dword_2252CF4[381]) == 1 )
            {
              Function_222f6d4(0, 1);
              result = Function_222f6c4((int)Function_22307a0);
            }
            else if ( LOBYTE(dword_2252CF4[381]) == 2 )
            {
              Function_222f6d4(0, 1);
              result = Function_222f6c4((int)Function_2231ffc);
            }
          }
          else
          {
            Function_222f6d4(0, 1);
            result = Function_222f6c4((int)Function_2230db0);
          }
        }
        else
        {
          Function_222f6d4(0, 0);
          result = Function_222f6c4((int)Function_2230228);
        }
      }
    }
  }
  return result;
}

//----- (0223188C) --------------------------------------------------------
int __fastcall Function_223188c(int a1)
{
  char v1;

  if ( a1 == 1 )
    v1 = Function_20bd140(LOBYTE(dword_2252CF4[381]) + 2, 3);
  else
    v1 = Function_20bd140(LOBYTE(dword_2252CF4[381]) + 1, 3);
  LOBYTE(dword_2252CF4[381]) = v1;
  Function_223e994(8);
  return Function_222ba04(
           HIWORD(dword_2249178[2 * LOBYTE(dword_2252CF4[381]) + 5]),
           HIWORD(dword_2249190[2 * LOBYTE(dword_2252CF4[381])]),
           LOWORD(dword_2249190[2 * LOBYTE(dword_2252CF4[381])]),
           LOWORD(dword_2249194[2 * LOBYTE(dword_2252CF4[381])]));
}

//----- (0223191C) --------------------------------------------------------
int Function_223191c()
{
  int v0;

  v0 = *((uchar *)dword_2249140 + LOBYTE(dword_2252CF4[381]));
  return Function_223d154(dword_2252CF4[382]);
}

//----- (02231948) --------------------------------------------------------
int Function_2231948()
{
  Function_2231980();
  Function_222b7c8(30);
  Function_222ad34(0);
  Function_222bc8c(1);
  Function_223e994(11);
  return Function_222f6c4((int)Function_2231a00);
}

//----- (02231980) --------------------------------------------------------
int __fastcall Function_2231980(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/yb5Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02231A00) --------------------------------------------------------
int Function_2231a00()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2231a34);
}

//----- (02231A34) --------------------------------------------------------
int Function_2231a34()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    Function_222fa60((int)Function_2231b38);
    result = Function_222f6c4((int)Function_2231a64);
  }
  return result;
}

//----- (02231A64) --------------------------------------------------------
int Function_2231a64()
{
  int v0;

  v0 = Function_2231a74();
  return Function_2231a78(v0);
}

//----- (02231A74) --------------------------------------------------------
void Function_2231a74()
{
  ;
}

//----- (02231A78) --------------------------------------------------------
void Function_2231a78()
{
  ;
}

//----- (02231A7C) --------------------------------------------------------
int Function_2231a7c()
{
  Function_2244194(3, 0, 21, 8);
  return Function_222f6c4((int)Function_2231aa4);
}

//----- (02231AA4) --------------------------------------------------------
int Function_2231aa4()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    result = Function_222fa44();
    if ( result )
    {
      Function_222bd44();
      Function_222ae04();
      Function_22448e0(0);
      Function_2244cd8(0, 21);
      Function_222f6d4(0, 1);
      if ( LOBYTE(dword_2252CF4[384]) )
      {
        if ( LOBYTE(dword_2252CF4[384]) == 2 )
          result = Function_222f6c4((int)Function_2232348);
        else
          result = Function_222f6c4((int)Function_2231bc0);
      }
      else
      {
        result = Function_222f6c4((int)Function_2232530);
      }
    }
  }
  return result;
}

//----- (02231B38) --------------------------------------------------------
int __fastcall Function_2231b38(int a1)
{
  if ( a1 == 2 )
  {
    Function_223e61c(2);
    LOBYTE(dword_2252CF4[384]) = 1;
    Function_223e9fc();
    Function_223e994(16);
  }
  else
  {
    if ( a1 == 3 )
      LOBYTE(dword_2252CF4[384]) = 2;
    else
      LOBYTE(dword_2252CF4[384]) = 0;
    Function_223e9fc();
    Function_223e994(18);
  }
  Function_222fa60(0);
  Function_222f9e8();
  return Function_222f6c4((int)Function_2231a7c);
}

//----- (02231BC0) --------------------------------------------------------
int Function_2231bc0()
{
  Function_2231be0();
  Function_222b7c8(31);
  return Function_222f6c4((int)Function_2231c48);
}

//----- (02231BE0) --------------------------------------------------------
int Function_2231be0()
{
  int result;

  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02231C48) --------------------------------------------------------
int Function_2231c48()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2231c7c);
}

//----- (02231C7C) --------------------------------------------------------
int Function_2231c7c()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(0);
  if ( !result )
  {
    Function_222b790(5, v1, v2, v3);
    result = Function_222f6c4((int)Function_2231ca8);
  }
  return result;
}

//----- (02231CA8) --------------------------------------------------------
int Function_2231ca8()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_2231cd0);
  }
  return result;
}

//----- (02231CD0) --------------------------------------------------------
int Function_2231cd0()
{
  int v0;
  int v1;

  v0 = Function_2231ce4();
  v1 = Function_2231d04(v0);
  return Function_2231d08(v1);
}

//----- (02231CE4) --------------------------------------------------------
int Function_2231ce4()
{
  int result;

  result = Function_2245470(1);
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (02231D04) --------------------------------------------------------
void Function_2231d04()
{
  ;
}

//----- (02231D08) --------------------------------------------------------
int Function_2231d08()
{
  int result;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e994(6);
    result = Function_222f6c4((int)Function_2231d30);
  }
  return result;
}

//----- (02231D30) --------------------------------------------------------
int Function_2231d30()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_2231d50);
}

//----- (02231D50) --------------------------------------------------------
int Function_2231d50()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_2244194(3, 1, 63, 64);
    Function_2244194(3, 0, 63, 64);
    result = Function_222f6c4((int)Function_2231d9c);
  }
  return result;
}

//----- (02231D9C) --------------------------------------------------------
int Function_2231d9c()
{
  int result;
  int v1;
  int v2;
  int v3;
  int v4;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      v1 = OS_SpinWait(0x1000000u);
      result = PM_ForceToPowerOff(v1, v2, v3, v4);
    }
  }
  return result;
}

//----- (02231DD0) --------------------------------------------------------
int Function_2231dd0()
{
  Function_2231df0();
  Function_222b7c8(26);
  return Function_222f6c4((int)Function_2231e58);
}

//----- (02231DF0) --------------------------------------------------------
int Function_2231df0()
{
  int result;

  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02231E58) --------------------------------------------------------
int Function_2231e58()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2231e8c);
}

//----- (02231E8C) --------------------------------------------------------
int Function_2231e8c()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(4, v1, v2, v3);
      result = Function_222f6c4((int)Function_2231ec8);
    }
  }
  return result;
}

//----- (02231EC8) --------------------------------------------------------
int Function_2231ec8()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_2231ef0);
  }
  return result;
}

//----- (02231EF0) --------------------------------------------------------
int Function_2231ef0()
{
  int v0;
  int v1;

  v0 = Function_2231f04();
  v1 = Function_2231f24(v0);
  return Function_2231f28(v1);
}

//----- (02231F04) --------------------------------------------------------
int Function_2231f04()
{
  int result;

  result = Function_2245470(1);
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (02231F24) --------------------------------------------------------
void Function_2231f24()
{
  ;
}

//----- (02231F28) --------------------------------------------------------
int Function_2231f28()
{
  int result;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e994(6);
    result = Function_222f6c4((int)Function_2231f50);
  }
  return result;
}

//----- (02231F50) --------------------------------------------------------
int Function_2231f50()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_2231f70);
}

//----- (02231F70) --------------------------------------------------------
int Function_2231f70()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222b004();
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_2231fac);
  }
  return result;
}

//----- (02231FAC) --------------------------------------------------------
int Function_2231fac()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    result = Function_222b07c();
    if ( result )
    {
      Function_22448e0(0);
      Function_2244cd8(0, 21);
      Function_222f6d4(0, 1);
      result = Function_222f6c4((int)Function_2232c90);
    }
  }
  return result;
}

//----- (02231FFC) --------------------------------------------------------
int Function_2231ffc()
{
  LOBYTE(dword_2252CF4[385]) = 0;
  Function_2232044();
  Function_222bbc0(19);
  Function_222b594(60, -1, 0);
  Function_222b7c8(27);
  return Function_222f6c4((int)Function_22320c4);
}

//----- (02232044) --------------------------------------------------------
int __fastcall Function_2232044(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/yb5Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (022320C4) --------------------------------------------------------
int Function_22320c4()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2232118);
}

//----- (02232118) --------------------------------------------------------
int Function_2232118()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(0);
  if ( !result )
  {
    Function_222b790(3, v1, v2, v3);
    result = Function_222f6c4((int)Function_2232144);
  }
  return result;
}

//----- (02232144) --------------------------------------------------------
int Function_2232144()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_223216c);
  }
  return result;
}

//----- (0223216C) --------------------------------------------------------
int Function_223216c()
{
  int v0;
  int v1;

  v0 = Function_2232180();
  v1 = Function_22321b8(v0);
  return Function_22321bc(v1);
}

//----- (02232180) --------------------------------------------------------
int Function_2232180()
{
  int result;

  if ( Function_2245470(1) )
    Function_222b048(1);
  result = Function_2245470(2);
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (022321B8) --------------------------------------------------------
void Function_22321b8()
{
  ;
}

//----- (022321BC) --------------------------------------------------------
int Function_22321bc()
{
  int result;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e994(7);
    return Function_222f6c4((int)Function_223220c);
  }
  if ( result == 1 )
  {
    Function_223e994(6);
    LOBYTE(dword_2252CF4[385]) = 1;
    return Function_222f6c4((int)Function_223220c);
  }
  return result;
}

//----- (0223220C) --------------------------------------------------------
int Function_223220c()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_223222c);
}

//----- (0223222C) --------------------------------------------------------
int Function_223222c()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222b004();
    if ( !LOBYTE(dword_2252CF4[385]) )
      Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_2232290);
  }
  return result;
}

//----- (02232290) --------------------------------------------------------
int Function_2232290()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    if ( LOBYTE(dword_2252CF4[385]) || (result = Function_2244170(1)) == 0 )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_22448e0(0);
        if ( !LOBYTE(dword_2252CF4[385]) )
        {
          Function_222b668();
          Function_2244cd8(1, 1);
        }
        Function_2244cd8(0, 21);
        if ( LOBYTE(dword_2252CF4[385]) )
        {
          Function_222f6d4(0, 1);
          result = Function_222f6c4((int)Function_2231dd0);
        }
        else
        {
          Function_222f6d4(0, 1);
          result = Function_222f6c4((int)Function_2231230);
        }
      }
    }
  }
  return result;
}

//----- (02232348) --------------------------------------------------------
int Function_2232348()
{
  LOBYTE(dword_2252CF4[386]) = 0;
  Function_2232378();
  Function_222b7c8(33);
  return Function_222f6c4((int)Function_22323e4);
}

//----- (02232378) --------------------------------------------------------
int __fastcall Function_2232378(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/yb5Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (022323E4) --------------------------------------------------------
int Function_22323e4()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2232418);
}

//----- (02232418) --------------------------------------------------------
int Function_2232418()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    result = Function_222fa44();
    if ( result )
      result = Function_222f6c4((int)Function_2232448);
  }
  return result;
}

//----- (02232448) --------------------------------------------------------
int Function_2232448()
{
  int v0;

  v0 = Function_22324fc();
  return Function_2232458(v0);
}

//----- (02232458) --------------------------------------------------------
void Function_2232458()
{
  ;
}

//----- (0223245C) --------------------------------------------------------
int Function_223245c()
{
  Function_2244194(3, 1, 1, 8);
  Function_2244194(3, 0, 21, 8);
  return Function_222f6c4((int)Function_2232498);
}

//----- (02232498) --------------------------------------------------------
int Function_2232498()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_22448e0(0);
      Function_222b668();
      Function_2244cd8(1, 1);
      Function_2244cd8(0, 21);
      Function_222f6d4(0, 1);
      result = Function_222f6c4((int)Function_2231230);
    }
  }
  return result;
}

//----- (022324FC) --------------------------------------------------------
int *Function_22324fc()
{
  int *result;

  result = &dword_2252CF4[386];
  ++LOBYTE(dword_2252CF4[386]);
  if ( ((LOBYTE(dword_2252CF4[386]) + 1) & 0xFFu) >= 0x78 )
    result = (int *)Function_222f6c4((int)Function_223245c);
  return result;
}

//----- (02232530) --------------------------------------------------------
int Function_2232530()
{
  Function_223256c();
  Function_222b7c8(32);
  LOBYTE(dword_2252CF4[387]) = Function_222b594(60, -1, 0);
  return Function_222f6c4((int)Function_22325ec);
}

//----- (0223256C) --------------------------------------------------------
int __fastcall Function_223256c(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/yb5Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (022325EC) --------------------------------------------------------
int Function_22325ec()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  if ( LOBYTE(dword_2252CF4[387]) )
  {
    Function_2244194(2, 1, 1, 8);
    Function_2244c84(1, 1);
  }
  return Function_222f6c4((int)Function_2232654);
}

//----- (02232654) --------------------------------------------------------
int Function_2232654()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(3, v1, v2, v3);
      result = Function_222f6c4((int)Function_2232690);
    }
  }
  return result;
}

//----- (02232690) --------------------------------------------------------
int Function_2232690()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    result = Function_222fa44();
    if ( result )
    {
      Function_222b0a8();
      result = Function_222f6c4((int)Function_22326c4);
    }
  }
  return result;
}

//----- (022326C4) --------------------------------------------------------
int Function_22326c4()
{
  int v0;
  int v1;

  v0 = Function_22326d8();
  v1 = Function_2232710(v0);
  return Function_2232714(v1);
}

//----- (022326D8) --------------------------------------------------------
int Function_22326d8()
{
  int result;

  if ( Function_2245470(1) )
    Function_222b048(1);
  result = Function_2245470(2);
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (02232710) --------------------------------------------------------
void Function_2232710()
{
  ;
}

//----- (02232714) --------------------------------------------------------
int Function_2232714()
{
  int result;

  result = Function_222b034();
  if ( result )
  {
    if ( result != 1 )
      return result;
    BYTE1(dword_2252CF4[387]) = 1;
    Function_223e994(6);
  }
  else
  {
    BYTE1(dword_2252CF4[387]) = 0;
    Function_223e994(7);
  }
  return Function_222f6c4((int)Function_223276c);
}

//----- (0223276C) --------------------------------------------------------
int Function_223276c()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_223278c);
}

//----- (0223278C) --------------------------------------------------------
int Function_223278c()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222b004();
    if ( !BYTE1(dword_2252CF4[387]) )
      Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_22327f0);
  }
  return result;
}

//----- (022327F0) --------------------------------------------------------
int Function_22327f0()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_22448e0(0);
        if ( !BYTE1(dword_2252CF4[387]) )
        {
          Function_222b668();
          Function_2244cd8(1, 1);
        }
        Function_2244cd8(0, 21);
        if ( BYTE1(dword_2252CF4[387]) )
        {
          Function_222f6d4(0, 1);
          result = Function_222f6c4((int)Function_2232c90);
        }
        else
        {
          Function_222f6d4(0, 1);
          result = Function_222f6c4((int)Function_2231230);
        }
      }
    }
  }
  return result;
}

//----- (02232898) --------------------------------------------------------
int __fastcall Function_2232898(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  short v6;
  char v8;
  int v9;

  v9 = a4;
  v4 = Function_222fa84();
  v5 = Function_224467c(0, 0);
  LOWORD(dword_2252CF4[388]) = 0;
  Function_2232968();
  MIi_CpuClear16(0, (int)&v8, 22);
  MIi_CpuCopy16(v4 + 2, (int)&v8, 2 * *(uchar *)(v4 + 1), v6);
  Function_2244a9c(v5, 8, 53, 240, 28, 2, 1152, &v8);
  Function_2244c08(v5);
  Function_222fa60((int)Function_2232c5c);
  Function_223fc48(29);
  return Function_222f6c4((int)Function_22329e8);
}

//----- (02232968) --------------------------------------------------------
int __fastcall Function_2232968(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/jb5Move.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (022329E8) --------------------------------------------------------
int Function_22329e8()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2232a1c);
}

//----- (02232A1C) --------------------------------------------------------
int Function_2232a1c()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
    result = Function_222f6c4((int)Function_2232a40);
  return result;
}

//----- (02232A40) --------------------------------------------------------
int Function_2232a40()
{
  int result;

  result = Function_223ffb8();
  if ( result != -2 )
    result = Function_222f6c4((int)Function_2232a64);
  return result;
}

//----- (02232A64) --------------------------------------------------------
int Function_2232a64()
{
  int v0;
  int v1;
  int result;
  int v3;

  v0 = Function_2232ad4();
  v1 = Function_2232ad8(v0);
  result = Function_223ffb8(v1);
  if ( !result )
  {
    BYTE1(dword_2252CF4[388]) = 0;
    Function_223e994(7);
LABEL_6:
    v3 = Function_222fa60(0);
    Function_223ff74(v3);
    return Function_222f6c4((int)Function_2232adc);
  }
  if ( result == 1 )
  {
    BYTE1(dword_2252CF4[388]) = 1;
    Function_223e994(14);
    goto LABEL_6;
  }
  return result;
}

//----- (02232AD4) --------------------------------------------------------
void Function_2232ad4()
{
  ;
}

//----- (02232AD8) --------------------------------------------------------
void Function_2232ad8()
{
  ;
}

//----- (02232ADC) --------------------------------------------------------
int Function_2232adc()
{
  int result;

  result = Function_223ffcc();
  if ( !result )
  {
    if ( !BYTE1(dword_2252CF4[388]) )
      Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_2232b38);
  }
  return result;
}

//----- (02232B38) --------------------------------------------------------
int Function_2232b38()
{
  int result;
  bool v1;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      v1 = LOBYTE(dword_2252CF4[388]) == 0;
      if ( !LOBYTE(dword_2252CF4[388]) )
        v1 = BYTE1(dword_2252CF4[388]) == 1;
      if ( v1 )
        Function_222fa78();
      else
        Function_222f9e8();
      result = Function_222f6c4((int)Function_2232b94);
    }
  }
  return result;
}

//----- (02232B94) --------------------------------------------------------
int Function_2232b94()
{
  int result;

  if ( !LOBYTE(dword_2252CF4[388]) && BYTE1(dword_2252CF4[388]) || (result = Function_222fa44()) != 0 )
  {
    Function_22448e0(0);
    Function_2244cd8(0, 21);
    if ( !BYTE1(dword_2252CF4[388]) )
    {
      Function_222b668();
      Function_2244cd8(1, 1);
    }
    Function_222f6d4(0, 1);
    if ( LOBYTE(dword_2252CF4[388]) )
    {
      result = Function_222f6c4((int)Function_2232530);
    }
    else if ( BYTE1(dword_2252CF4[388]) )
    {
      result = Function_222f6c4((int)Function_2231948);
    }
    else
    {
      Function_2244cd8(1, 1);
      result = Function_222f6c4((int)Function_2231230);
    }
  }
  return result;
}

//----- (02232C5C) --------------------------------------------------------
int *Function_2232c5c()
{
  int *result;

  result = &dword_2252CF4[388];
  LOBYTE(dword_2252CF4[388]) = 1;
  return result;
}

//----- (02232C70) --------------------------------------------------------
BOOL Function_2232c70()
{
  return (word_27FFFA8 & 0x8000) >> 15 != 0;
}

//----- (02232C90) --------------------------------------------------------
int __fastcall Function_2232c90(int a1, int a2, int a3, int a4)
{
  Function_222f8fc((int)Function_223300c, a2, a3, a4);
  LOBYTE(dword_2252CF4[389]) = 0;
  Function_2232cdc();
  Function_222b7c8(28);
  Function_222ad34(0);
  Function_223e994(11);
  return Function_222f6c4((int)Function_2232d5c);
}

//----- (02232CDC) --------------------------------------------------------
int __fastcall Function_2232cdc(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/yb5Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02232D5C) --------------------------------------------------------
int Function_2232d5c()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2232d90);
}

//----- (02232D90) --------------------------------------------------------
int Function_2232d90()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(0);
  if ( !result )
  {
    Function_222b790(1, v1, v2, v3);
    result = Function_222f6c4((int)Function_2232dbc);
  }
  return result;
}

//----- (02232DBC) --------------------------------------------------------
int Function_2232dbc()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
    result = Function_222f6c4((int)Function_2232de0);
  return result;
}

//----- (02232DE0) --------------------------------------------------------
int Function_2232de0()
{
  int v0;
  int v1;

  v0 = Function_2232df4();
  v1 = Function_2232e2c(v0);
  return Function_2232e30(v1);
}

//----- (02232DF4) --------------------------------------------------------
int Function_2232df4()
{
  int result;

  if ( Function_2245470(2) )
    return Function_222b048(0);
  result = Function_2232c70();
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (02232E2C) --------------------------------------------------------
void Function_2232e2c()
{
  ;
}

//----- (02232E30) --------------------------------------------------------
int Function_2232e30()
{
  int result;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e9fc();
    Function_223e994(7);
    result = Function_222f6c4((int)Function_2232e5c);
  }
  return result;
}

//----- (02232E5C) --------------------------------------------------------
int Function_2232e5c()
{
  if ( !LOBYTE(dword_2252CF4[389]) )
    Function_222f9e8();
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_2232e94);
}

//----- (02232E94) --------------------------------------------------------
int Function_2232e94()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    if ( LOBYTE(dword_2252CF4[389]) || (result = Function_222fa44()) != 0 )
    {
      Function_222b004();
      if ( !LOBYTE(dword_2252CF4[389]) )
        Function_2244194(3, 1, 1, 8);
      Function_2244194(3, 0, 21, 8);
      result = Function_222f6c4((int)Function_2232f14);
    }
  }
  return result;
}

//----- (02232F14) --------------------------------------------------------
int Function_2232f14()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    if ( LOBYTE(dword_2252CF4[389]) || (result = Function_2244170(1)) == 0 )
    {
      result = Function_222b07c();
      if ( result )
      {
        if ( LOBYTE(dword_2252CF4[389]) || (result = Function_222fa44()) != 0 )
        {
          Function_222ae04();
          Function_22448e0(0);
          if ( !LOBYTE(dword_2252CF4[389]) )
          {
            Function_222b668();
            Function_2244cd8(1, 1);
          }
          Function_2244cd8(0, 21);
          if ( LOBYTE(dword_2252CF4[389]) )
          {
            if ( LOBYTE(dword_2252CF4[389]) == 2 )
            {
              Function_222f6d4(0, 1);
              result = Function_222f6c4((int)Function_2232530);
            }
            else
            {
              Function_222f6d4(0, 1);
              result = Function_222f6c4((int)Function_2232898);
            }
          }
          else
          {
            Function_222f6d4(0, 1);
            result = Function_222f6c4((int)Function_2231230);
          }
        }
      }
    }
  }
  return result;
}

//----- (0223300C) --------------------------------------------------------
int __fastcall Function_223300c(int a1)
{
  int v1;

  v1 = a1;
  Function_223e9fc();
  if ( v1 )
  {
    LOBYTE(dword_2252CF4[389]) = 2;
    Function_223e994(18);
  }
  else
  {
    LOBYTE(dword_2252CF4[389]) = 1;
    Function_223e994(16);
  }
  Function_222fa60(0);
  return Function_222f6c4((int)Function_2232e5c);
}

//----- (02233068) --------------------------------------------------------
BOOL Function_2233068()
{
  return (word_27FFFA8 & 0x8000) >> 15 != 0;
}

//----- (02233088) --------------------------------------------------------
int Function_2233088()
{
  int v0;
  int v1;
  int v2;

  HIWORD(dword_2252CF4[390]) = 0;
  Function_22330e8();
  Function_222bc1c();
  Function_222b594(54, -1, 0);
  Function_222b740(2, v0, v1, v2);
  Function_222b7c8(34);
  Function_222ad34(0);
  Function_222f030();
  Function_223e994(11);
  return Function_222f6c4((int)Function_2233190);
}

//----- (022330E8) --------------------------------------------------------
int __fastcall Function_22330e8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  Function_222b700("char/jbBgStep3.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, a3, a4);
  Function_222b700("char/ybBgStep3.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v4, v5);
  Function_222b700("char/xb4Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v6, v7);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02233190) --------------------------------------------------------
int Function_2233190()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_22331e4);
}

//----- (022331E4) --------------------------------------------------------
int Function_22331e4()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(1, v1, v2, v3);
      result = Function_222f6c4((int)Function_2233220);
    }
  }
  return result;
}

//----- (02233220) --------------------------------------------------------
int Function_2233220()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    dword_2252CF4[391] = Function_2246304(1, Function_2233540, 0, 120);
    result = Function_222f6c4((int)Function_2233268);
  }
  return result;
}

//----- (02233268) --------------------------------------------------------
int Function_2233268()
{
  int v0;
  int v1;
  int result;

  v0 = Function_223333c();
  v1 = Function_2233374(v0);
  Function_2233378(v1);
  result = Function_222f190();
  if ( result )
  {
    if ( result == 1 )
    {
      if ( dword_2252CF4[391] )
      {
        LOBYTE(dword_2252CF4[390]) = 1;
        Function_22463cc(1, dword_2252CF4[391]);
        dword_2252CF4[391] = 0;
        result = Function_222f6c4((int)Function_22335a8);
      }
    }
    else if ( result == 2 )
    {
      result = dword_2252CF4[391];
      if ( dword_2252CF4[391] )
      {
        Function_223e9fc();
        Function_223fc48(12);
        Function_223e994(9);
        Function_222b0c0();
        Function_22463cc(1, dword_2252CF4[391]);
        dword_2252CF4[391] = 0;
        result = Function_222f6c4((int)Function_223355c);
      }
    }
  }
  return result;
}

//----- (0223333C) --------------------------------------------------------
int Function_223333c()
{
  int result;

  if ( Function_2245470(2) )
    return Function_222b048(0);
  result = Function_2233068();
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (02233374) --------------------------------------------------------
void Function_2233374()
{
  ;
}

//----- (02233378) --------------------------------------------------------
int *Function_2233378()
{
  int *result;

  result = (int *)Function_222b034();
  if ( !result )
  {
    result = &dword_2252CF4[390];
    if ( dword_2252CF4[391] )
    {
      Function_22463ac(1, dword_2252CF4[391]);
      dword_2252CF4[391] = 0;
      Function_222b0c0();
      result = (int *)Function_222f6c4((int)Function_22335f4);
    }
  }
  return result;
}

//----- (022333C4) --------------------------------------------------------
int Function_22333c4()
{
  Function_222b0c0();
  if ( dword_2252CF4[391] )
    Function_22463cc(1, dword_2252CF4[391]);
  Function_2244394(8);
  return Function_222f6c4((int)Function_2233400);
}

//----- (02233400) --------------------------------------------------------
int Function_2233400()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222b004();
    if ( !LOBYTE(dword_2252CF4[390]) )
      Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_2233464);
  }
  return result;
}

//----- (02233464) --------------------------------------------------------
int Function_2233464()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(0);
  if ( !result )
  {
    if ( LOBYTE(dword_2252CF4[390]) || (result = Function_2244170(1)) == 0 )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_222f140(LOBYTE(dword_2252CF4[390]) != 0, v1, v2, v3);
        Function_222ae04();
        Function_22448e0(0);
        if ( !LOBYTE(dword_2252CF4[390]) )
        {
          Function_222b668();
          Function_2244cd8(1, 1);
        }
        Function_2244cd8(0, 21);
        if ( LOBYTE(dword_2252CF4[390]) )
        {
          Function_222f6d4(0, 0);
          result = Function_222f6c4((int)Function_2233624);
        }
        else
        {
          Function_222f6d4(2, 1);
          result = Function_222f6c4((int)Function_223b3f4);
        }
      }
    }
  }
  return result;
}

//----- (02233540) --------------------------------------------------------
int *__fastcall Function_2233540(int a1)
{
  Function_22451c0(a1);
  Function_2246254(0);
  Function_223333c();
  return Function_2233378();
}

//----- (0223355C) --------------------------------------------------------
int __fastcall Function_223355c(int a1)
{
  int result;
  int v2;

  result = Function_223ffb8(a1);
  if ( !result )
  {
    v2 = Function_223e994(6);
    Function_223ff74(v2);
    result = Function_222f6c4((int)Function_2233588);
  }
  return result;
}

//----- (02233588) --------------------------------------------------------
int Function_2233588()
{
  int result;

  result = Function_223ffcc();
  if ( !result )
    result = Function_222f6c4((int)Function_22333c4);
  return result;
}

//----- (022335A8) --------------------------------------------------------
int Function_22335a8()
{
  int result;

  Function_223333c();
  Function_2233374();
  Function_2233378();
  result = 1080;
  ++HIWORD(dword_2252CF4[390]);
  if ( HIWORD(dword_2252CF4[390]) >= 0x438u )
  {
    Function_223e9fc();
    result = Function_222f6c4((int)Function_22333c4);
  }
  return result;
}

//----- (022335F4) --------------------------------------------------------
int Function_22335f4()
{
  Function_223e9fc();
  Function_223e994(7);
  LOBYTE(dword_2252CF4[390]) = 0;
  return Function_222f6c4((int)Function_22333c4);
}

//----- (02233624) --------------------------------------------------------
int Function_2233624()
{
  LOBYTE(dword_2252CF4[392]) = 0;
  Function_2233660();
  Function_222bc1c();
  Function_222b7c8(35);
  Function_223e994(16);
  return Function_222f6c4((int)Function_22336cc);
}

//----- (02233660) --------------------------------------------------------
int __fastcall Function_2233660(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/xb4Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (022336CC) --------------------------------------------------------
int Function_22336cc()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2233700);
}

//----- (02233700) --------------------------------------------------------
int Function_2233700()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
    result = Function_222f6c4((int)Function_2233724);
  return result;
}

//----- (02233724) --------------------------------------------------------
int Function_2233724()
{
  int v0;

  v0 = Function_22337e4();
  return Function_2233734(v0);
}

//----- (02233734) --------------------------------------------------------
void Function_2233734()
{
  ;
}

//----- (02233738) --------------------------------------------------------
int Function_2233738()
{
  Function_2244194(3, 1, 1, 8);
  Function_2244194(3, 0, 21, 8);
  return Function_222f6c4((int)Function_2233774);
}

//----- (02233774) --------------------------------------------------------
int Function_2233774()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_22448e0(0);
      Function_222b668();
      Function_2244cd8(1, 1);
      Function_2244cd8(0, 21);
      Function_222f6d4(0, 0);
      Function_222f710(0, 1);
      result = Function_222f6c4((int)Function_223c21c);
    }
  }
  return result;
}

//----- (022337E4) --------------------------------------------------------
int *Function_22337e4()
{
  int *result;

  result = &dword_2252CF4[392];
  ++LOBYTE(dword_2252CF4[392]);
  if ( ((LOBYTE(dword_2252CF4[392]) + 1) & 0xFFu) >= 0x78 )
    result = (int *)Function_222f6c4((int)Function_2233738);
  return result;
}

//----- (02233818) --------------------------------------------------------
int __fastcall Function_2233818(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;

  v11 = a4;
  dword_2252CF4[394] = Function_2245068(92, 4);
  Function_222f724(&v11, 0);
  if ( !v11 )
  {
    LOBYTE(dword_2252CF4[393]) = 0;
    HIWORD(dword_2252CF4[393]) = 0;
  }
  *(uchar *)(dword_2252CF4[394] + 81) = Function_223dae0(dword_2252CF4[394]);
  Function_22338f0();
  Function_222bc1c();
  Function_222b594(52, -1, 0);
  v7 = Function_222b740(2, v4, v5, v6);
  v8 = Function_2233a44(v7);
  Function_2233aec(v8);
  *(uint *)(dword_2252CF4[394] + 12) = Function_224467c(0, 0);
  *(uint *)(dword_2252CF4[394] + 60) = Function_2246304(1, Function_2234a44, 0, 110);
  v9 = Function_2234588();
  Function_2234aa0(v9);
  return Function_222f6c4((int)Function_2233c60);
}

//----- (022338F0) --------------------------------------------------------
int __fastcall Function_22338f0(int a1, int a2, int a3, int a4)
{
  char *v4;
  char *v5;
  int v6;
  char v7;
  char v8;
  char v9;
  char *v10;
  char *v11;
  int v12;
  char v13;
  char v14;
  int *v15;
  int v16;
  int *v17;
  int result;
  char v19;
  char v20;
  int v21;

  v21 = a4;
  v4 = &byte_22491BF;
  v5 = &v20;
  v6 = 12;
  do
  {
    v7 = *v4;
    v8 = v4[1];
    v4 += 2;
    *v5 = v7;
    v5[1] = v8;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  v9 = *v4;
  v10 = &byte_22491A9;
  v11 = &v19;
  *v5 = v9;
  v12 = 11;
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
  Function_222b700("char/jb4ApList.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG3Scr, 0, (int)v11);
  v15 = Function_222b6a0(&v20);
  *(uint *)(dword_2252CF4[394] + 4) = Function_2243738(v15, 0, 4);
  v16 = Function_223d004(*(uint *)(dword_2252CF4[394] + 4));
  Function_223d090(v16);
  v17 = Function_222b6a0(&v19);
  *(uint *)(dword_2252CF4[394] + 8) = Function_2243738(v17, 0, 4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 2;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG3CNT & 0xFFFC) | 2;
  REG_BG3CNT = REG_BG3CNT & 0xFFFC | 2;
  return result;
}

//----- (02233A44) --------------------------------------------------------
int Function_2233a44()
{
  int v0;
  uint v1;
  int v2;

  v0 = 0;
  *(ushort *)(dword_2252CF4[394] + 64) = 28 * (*(uchar *)(dword_2252CF4[394] + 81) - 4);
  v1 = *(uchar *)(dword_2252CF4[394] + 81);
  if ( v1 > 4 )
  {
    if ( v1 <= 8 )
    {
      *(uchar *)(dword_2252CF4[394] + 83) = 31;
      v2 = 1;
    }
    else
    {
      *(uchar *)(dword_2252CF4[394] + 83) = 55;
      v2 = 2;
    }
  }
  else
  {
    v2 = 0;
    *(uchar *)(dword_2252CF4[394] + 83) = 0;
  }
  if ( v2 )
    v0 = Function_20bd104(
           HIWORD(dword_2252CF4[393]) * *(uchar *)(dword_2252CF4[394] + 83),
           *(ushort *)(dword_2252CF4[394] + 64));
  return Function_223d218(v2, 85, 236, 63, v0);
}

//----- (02233AEC) --------------------------------------------------------
int Function_2233aec()
{
  int v0;
  int v1;
  int v2;
  int v3;
  uint v4;
  char *v5;
  int v6;
  int v7;
  uint v8;
  char *v9;
  int v10;
  int v11;
  int result;
  int v13;

  v0 = 0;
  v1 = *(uchar *)(dword_2252CF4[394] + 81);
  if ( v1 > 5 )
    v1 = 5;
  if ( v1 > 0 )
  {
    do
    {
      *(uint *)(dword_2252CF4[394] + 4 * v0 + 16) = Function_2243f60(0, 46);
      v2 = Function_2243f60(0, 24);
      v3 = dword_2252CF4[394] + 4 * v0++;
      *(uint *)(v3 + 36) = v2;
    }
    while ( v0 < v1 );
  }
  v4 = 0;
  v5 = &byte_2249228;
  do
  {
    v6 = (uchar)*v5++;
    Function_2243ecc(0, v6, *(uint *)(dword_2252CF4[394] + 16));
    v7 = dword_2252CF4[394] + 2 * v4++;
    *(ushort *)(v7 + 66) = *(ushort *)(*(uint *)(dword_2252CF4[394] + 16) + 4) & 0x3FF;
  }
  while ( v4 < 3 );
  v8 = 0;
  v9 = &byte_224922C;
  do
  {
    v10 = (uchar)*v9++;
    Function_2243ecc(0, v10, *(uint *)(dword_2252CF4[394] + 36));
    v11 = dword_2252CF4[394] + 2 * v8++;
    *(ushort *)(v11 + 72) = *(ushort *)(*(uint *)(dword_2252CF4[394] + 36) + 4) & 0x3FF;
  }
  while ( v8 < 4 );
  for ( result = 0; result < v1; *(ushort *)(v13 + 4) = *(ushort *)(v13 + 4) & 0xF3FF | 0xC00 )
  {
    *(ushort *)(*(uint *)(dword_2252CF4[394] + 4 * result + 16) + 4) = *(ushort *)(*(uint *)(dword_2252CF4[394]
                                                                                             + 4 * result
                                                                                             + 16)
                                                                                 + 4) & 0xF3FF | 0xC00;
    v13 = *(uint *)(dword_2252CF4[394] + 4 * result++ + 36);
  }
  return result;
}

//----- (02233C60) --------------------------------------------------------
int Function_2233c60()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 29, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 29);
  return Function_222f6c4((int)Function_2233cb4);
}

//----- (02233CB4) --------------------------------------------------------
int Function_2233cb4()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(0, v1, v2, v3);
      result = Function_222f6c4((int)Function_2233cf0);
    }
  }
  return result;
}

//----- (02233CF0) --------------------------------------------------------
int Function_2233cf0()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_2233d18);
  }
  return result;
}

//----- (02233D18) --------------------------------------------------------
int Function_2233d18()
{
  int v0;
  int v1;

  v0 = Function_2233d2c();
  v1 = Function_2233f80(v0);
  return Function_22341f0(v1);
}

//----- (02233D2C) --------------------------------------------------------
int Function_2233d2c()
{
  int result;
  bool v1;
  int *v2;
  int v3;
  int *v4;
  int v5;
  int v6;

  result = *(uint *)(dword_2252CF4[394] + 56);
  v1 = result == 0;
  if ( !result )
  {
    result = *(uchar *)(dword_2252CF4[394] + 87);
    v1 = result == 0;
  }
  if ( v1 )
  {
    if ( Function_22455b8(&dword_2249734) )
    {
      v2 = dword_22491D8;
      *(uchar *)(dword_2252CF4[394] + 80) = -1;
      v3 = 0;
      while ( !Function_22455b8(v2) )
      {
        ++v3;
        v2 += 2;
        if ( (uint)v3 >= 5 )
          goto LABEL_12;
      }
      if ( v3 >= 4 )
      {
        Function_222b048(1);
        LOBYTE(dword_2252CF4[393]) = v3;
        return Function_2234aa0(&dword_2252CF4[393]);
      }
      *(uchar *)(dword_2252CF4[394] + 80) = v3;
    }
LABEL_12:
    if ( Function_22456c8(&dword_2249734) )
    {
      v4 = dword_22491D8;
      v5 = 0;
      while ( !Function_22456c8(v4) )
      {
        ++v5;
        v4 += 2;
        if ( v5 >= 4 )
          goto LABEL_20;
      }
      if ( *(char *)(dword_2252CF4[394] + 80) == v5 )
      {
        if ( v5 < *(uchar *)(dword_2252CF4[394] + 81) )
        {
          Function_222b048(1);
          LOBYTE(dword_2252CF4[393]) = v5;
          return Function_2234aa0(&dword_2252CF4[393]);
        }
        Function_223e994(9);
      }
    }
LABEL_20:
    if ( Function_2245470(1) )
    {
      v6 = Function_222b048(1);
      result = Function_223d378(v6);
    }
    else if ( Function_2245470(2) )
    {
      result = Function_222b048(0);
    }
    else if ( Function_22454b0(512) )
    {
      result = Function_2234cac();
    }
    else if ( Function_22454f0(512) )
    {
      result = dword_2252CF4[394];
      *(uchar *)(dword_2252CF4[394] + 89) = 0;
    }
    else if ( Function_22454b0(256) )
    {
      result = Function_2234c38();
    }
    else if ( Function_22454f0(256) )
    {
      result = dword_2252CF4[394];
      *(uchar *)(dword_2252CF4[394] + 89) = 0;
    }
    else if ( Function_22454b0(64) )
    {
      result = Function_2234aec(1);
    }
    else if ( Function_22454f0(64) )
    {
      result = dword_2252CF4[394];
      *(uchar *)(dword_2252CF4[394] + 89) = 0;
    }
    else if ( Function_22454b0(128) )
    {
      result = Function_2234aec(3);
    }
    else
    {
      result = Function_22454f0(128);
      if ( result )
      {
        result = dword_2252CF4[394];
        *(uchar *)(dword_2252CF4[394] + 89) = 0;
      }
    }
  }
  return result;
}

//----- (02233F80) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2233FB8 for case 0"

//----- (02233FB8) --------------------------------------------------------
// jumptable 02233FB0 case 0
int __fastcall Function_2233fb8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02233FBC) --------------------------------------------------------
void Function_2233fbc()
{
  JUMPOUT(&loc_2233FD8);
}

//----- (02233FC0) --------------------------------------------------------
void Function_2233fc0()
{
  JUMPOUT(&loc_2233FF0);
}

//----- (02233FC4) --------------------------------------------------------
void Function_2233fc4()
{
  JUMPOUT(&loc_2234044);
}

//----- (02233FC8) --------------------------------------------------------
void Function_2233fc8()
{
  JUMPOUT(&loc_22340F0);
}

//----- (02233FCC) --------------------------------------------------------
void Function_2233fcc()
{
  JUMPOUT(&loc_22341D0);
}

//----- (02233FD0) --------------------------------------------------------
void Function_2233fd0()
{
  JUMPOUT(&loc_2234158);
}

//----- (02233FD4) --------------------------------------------------------
void Function_2233fd4()
{
  int v0;

  *(uchar *)(dword_2252CF4[394] + 88) = 0;
  JUMPOUT(__CS__, v0);
}

//----- (022341F0) --------------------------------------------------------
int Function_22341f0()
{
  int result;
  bool v1;
  int v2;
  int v3;
  int v4;

  result = *(uint *)(dword_2252CF4[394] + 56);
  v1 = result == 0;
  if ( !result )
  {
    result = *(uchar *)(dword_2252CF4[394] + 87);
    v1 = result == 0;
  }
  if ( v1 )
  {
    result = Function_222b034();
    if ( result )
    {
      if ( result != 1 )
        return result;
      if ( LOBYTE(dword_2252CF4[393]) == 4 )
      {
        *(uchar *)(dword_2252CF4[394] + 84) = 1;
        v2 = Function_223e994(6);
        Function_2234d30(v2);
      }
      else
      {
        v3 = LOBYTE(dword_2252CF4[393]) + Function_20bd104(HIWORD(dword_2252CF4[393]), 28);
        if ( *(uchar *)(*(uint *)dword_2252CF4[394] + 42 * v3 + 40) == 2 )
        {
          v4 = Function_223e994(9);
          Function_223d378(v4);
          Function_222b0c0();
          Function_223fc48(14);
          return Function_222f6c4((int)Function_2234d60);
        }
        *(uchar *)(dword_2252CF4[394] + 84) = 1;
        *(uchar *)(dword_2252CF4[394] + 82) = v3;
        Function_223e994(6);
      }
    }
    else
    {
      Function_223e994(7);
    }
    result = Function_222f6c4((int)Function_22342fc);
  }
  return result;
}

//----- (022342FC) --------------------------------------------------------
int Function_22342fc()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_223431c);
}

//----- (0223431C) --------------------------------------------------------
int Function_223431c()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    if ( *(uchar *)(dword_2252CF4[394] + 84) )
      Function_222b004();
    else
      Function_222b0c0();
    Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 29, 8);
    result = Function_222f6c4((int)Function_223438c);
  }
  return result;
}

//----- (0223438C) --------------------------------------------------------
int Function_223438c()
{
  int result;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_22463cc(1, *(uint *)(dword_2252CF4[394] + 60));
        v1 = 0;
        do
        {
          v2 = *(uint *)(dword_2252CF4[394] + 4 * v1 + 16);
          if ( v2 )
            Function_2245b74(v2);
          v3 = *(uint *)(dword_2252CF4[394] + 4 * v1 + 36);
          if ( v3 )
            Function_2245b74(v3);
          ++v1;
        }
        while ( v1 < 5 );
        v4 = Function_224487c(*(uint *)(dword_2252CF4[394] + 12));
        Function_223d2f0(v4);
        Function_222baf4();
        v5 = Function_222b668();
        Function_223d064(v5);
        Function_224382c(*(uint *)(dword_2252CF4[394] + 4));
        Function_224382c(*(uint *)(dword_2252CF4[394] + 8));
        Function_2244cd8(1, 1);
        Function_2244cd8(0, 29);
        REG_BG0HOFS = 0;
        REG_BG2HOFS = 0;
        if ( *(uchar *)(dword_2252CF4[394] + 84) )
        {
          if ( LOBYTE(dword_2252CF4[393]) == 4 )
          {
            Function_223d910();
            Function_222f6d4(0, 1);
            Function_222f6c4((int)Function_223a1d0);
          }
          else
          {
            Function_223de08(*(uint *)dword_2252CF4[394] + 42 * *(uchar *)(dword_2252CF4[394] + 82));
            Function_222f6d4(0, 0);
            if ( *(uchar *)(*(uint *)dword_2252CF4[394] + 42 * *(uchar *)(dword_2252CF4[394] + 82) + 40) )
            {
              Function_222f6d4(0, 1);
              Function_222f710(1, 1);
              Function_222f6c4((int)Function_2234db4);
            }
            else
            {
              Function_222f6d4(0, 1);
              Function_222f710(0, 1);
              Function_222f6c4((int)Function_223c21c);
            }
          }
        }
        else
        {
          v6 = Function_223d910();
          v7 = Function_223ddcc(v6);
          Function_223e1f0(*(uchar *)(v7 + 244));
          Function_222f6d4(2, 0);
          Function_222f6c4((int)Function_223b3f4);
        }
        result = Function_224508c(&dword_2252CF4[394]);
      }
    }
  }
  return result;
}

//----- (02234588) --------------------------------------------------------
int Function_2234588()
{
  int v0;
  int v1;
  int v2;
  int i;
  int j;
  int v5;

  v0 = Function_20bd104(HIWORD(dword_2252CF4[393]), 28);
  v1 = *(uchar *)(dword_2252CF4[394] + 81);
  Function_2244b5c(*(uint *)(dword_2252CF4[394] + 12), 0);
  if ( v1 > 5 )
    v1 = 5;
  v2 = v0;
  for ( i = 0; i < v1; ++v2 )
    Function_2234630(v2, i++);
  for ( j = 0; j < v1; ++v0 )
    Function_22347a8(v0, j++);
  v5 = Function_2244c08(*(uint *)(dword_2252CF4[394] + 12));
  return Function_2234834(v5);
}

//----- (02234630) --------------------------------------------------------
int __fastcall Function_2234630(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int i;
  int v10;
  short v11;
  int j;
  int v13;
  short v14;
  char v15[36];
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = 42 * a1;
  result = Function_2245e50(*(uint *)dword_2252CF4[394] + 42 * a1, 32);
  v7 = result;
  if ( v4 < *(uchar *)(dword_2252CF4[394] + 81) )
  {
    MI_CpuFill8(v15, 0, 0x22u);
    if ( v7 > 16 )
      v8 = 16;
    else
      v8 = v7;
    for ( i = 0; i < v8; *(ushort *)&v15[v10] = v11 )
    {
      v10 = 2 * i;
      v11 = *(uchar *)(i++ + v5 + *(uint *)dword_2252CF4[394]);
    }
    result = Function_22449f0(*(uint *)(dword_2252CF4[394] + 12));
    if ( v7 > 16 )
    {
      MI_CpuFill8(v15, 0, 0x22u);
      for ( j = 0; j < v7 - 16; *(ushort *)&v15[v13] = v14 )
      {
        v13 = 2 * j;
        v14 = *(uchar *)(j++ + v5 + *(uint *)dword_2252CF4[394] + 16);
      }
      result = Function_22449f0(*(uint *)(dword_2252CF4[394] + 12));
    }
  }
  return result;
}

//----- (022347A8) --------------------------------------------------------
int __fastcall Function_22347a8(int result, int a2)
{
  int v2;

  if ( result < *(uchar *)(dword_2252CF4[394] + 81) )
  {
    *(ushort *)(*(uint *)(dword_2252CF4[394] + 4 * a2 + 16) + 4) = *(ushort *)(*(uint *)(dword_2252CF4[394]
                                                                                         + 4 * a2
                                                                                         + 16)
                                                                             + 4) & 0xFC00 | *(ushort *)(dword_2252CF4[394] + 2 * *(uchar *)(*(uint *)dword_2252CF4[394] + 42 * result + 40) + 66);
    v2 = *(uint *)(dword_2252CF4[394] + 4 * a2 + 36);
    result = (ushort)(*(ushort *)(v2 + 4) & 0xFC00) | *(ushort *)(dword_2252CF4[394]
                                                                                   + 2
                                                                                   * *(ushort *)(*(uint *)dword_2252CF4[394] + 42 * result + 38)
                                                                                   + 72);
    *(ushort *)(v2 + 4) = result;
  }
  return result;
}

//----- (02234834) --------------------------------------------------------
int Function_2234834()
{
  int v0;
  int v1;
  int v2;
  uint *v3;
  int result;

  v0 = 54 - Function_20bd140(HIWORD(dword_2252CF4[393]), 28);
  v1 = 0;
  v2 = *(uchar *)(dword_2252CF4[394] + 81);
  if ( v2 > 5 )
    v2 = 5;
  if ( v2 > 0 )
  {
    do
    {
      **(uint **)(dword_2252CF4[394] + 4 * v1 + 16) = **(uint **)(dword_2252CF4[394] + 4 * v1 + 16) & 0xFE00FF00 | (uchar)(v0 - 2) | 0xB30000;
      v3 = *(uint **)(dword_2252CF4[394] + 4 * v1++ + 36);
      *v3 = *v3 & 0xFE00FF00 | (uchar)(v0 + 1) | 0xD20000;
      v0 += 28;
    }
    while ( v1 < v2 );
  }
  result = dword_2252CF4[394];
  *(uchar *)(dword_2252CF4[394] + 86) = 1;
  return result;
}

//----- (022348F0) --------------------------------------------------------
int __fastcall Function_22348f0(int a1)
{
  int v1;
  short v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  Function_223d378(a1);
  Function_222baf4();
  if ( HIWORD(dword_2252CF4[393]) <= 4u )
    v2 = 0;
  else
    v2 = HIWORD(dword_2252CF4[393]) - 4;
  HIWORD(dword_2252CF4[393]) = v2;
  v3 = Function_20bd140(HIWORD(dword_2252CF4[393]), 28);
  v4 = v3;
  if ( v3 == 24 )
    return Function_2234588();
  if ( v3 > 24 )
  {
    v4 = 0;
    HIWORD(dword_2252CF4[393]) += 28 - v3;
  }
  result = Function_2234834();
  if ( !v4 )
  {
    v6 = Function_20bd104(
           HIWORD(dword_2252CF4[393]) * *(uchar *)(dword_2252CF4[394] + 83),
           *(ushort *)(dword_2252CF4[394] + 64));
    v7 = Function_223d354(v6);
    v8 = Function_223d360(v7);
    Function_2234aa0(v8);
    *(uint *)(dword_2252CF4[394] + 56) = 0;
    result = Function_22463ac(0, v1);
  }
  return result;
}

//----- (022349AC) --------------------------------------------------------
int __fastcall Function_22349ac(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  Function_223d378(a1);
  Function_222baf4();
  HIWORD(dword_2252CF4[393]) += 4;
  v2 = Function_20bd140(HIWORD(dword_2252CF4[393]), 28);
  if ( v2 >= 4 )
    return Function_2234834();
  HIWORD(dword_2252CF4[393]) -= v2;
  Function_2234588();
  v4 = Function_20bd104(
         HIWORD(dword_2252CF4[393]) * *(uchar *)(dword_2252CF4[394] + 83),
         *(ushort *)(dword_2252CF4[394] + 64));
  v5 = Function_223d354(v4);
  v6 = Function_223d360(v5);
  Function_2234aa0(v6);
  *(uint *)(dword_2252CF4[394] + 56) = 0;
  return Function_22463ac(0, v1);
}

//----- (02234A44) --------------------------------------------------------
int *Function_2234a44()
{
  int *result;
  int v1;

  result = &dword_2252CF4[393];
  if ( *(uchar *)(dword_2252CF4[394] + 86) )
  {
    v1 = Function_20bd140(HIWORD(dword_2252CF4[393]), 28);
    REG_BG0HOFS = ((v1 - 50) << 16) & 0x1FF0000;
    REG_BG2HOFS = ((v1 - 50) << 16) & 0x1FF0000;
    result = (int *)dword_2252CF4[394];
    *(uchar *)(dword_2252CF4[394] + 86) = 0;
  }
  return result;
}

//----- (02234AA0) --------------------------------------------------------
int Function_2234aa0()
{
  int *v0;

  v0 = &dword_2252CF4[393];
  if ( LOBYTE(dword_2252CF4[393]) < 4u )
    v0 = (int *)2;
  if ( LOBYTE(dword_2252CF4[393]) >= 4u )
    v0 = (int *)3;
  return Function_222b948(
           (int)v0,
           LOWORD(dword_2249200[2 * LOBYTE(dword_2252CF4[393])]),
           LOWORD(dword_2249204[2 * LOBYTE(dword_2252CF4[393])]),
           HIWORD(dword_2249200[2 * LOBYTE(dword_2252CF4[393])]));
}

//----- (02234AEC) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2234B1C for case 0"

//----- (02234B08) --------------------------------------------------------
void Function_2234b08()
{
  JUMPOUT(&loc_2234B1C);
}

//----- (02234B0C) --------------------------------------------------------
void Function_2234b0c()
{
  JUMPOUT(&loc_2234B80);
}

//----- (02234B10) --------------------------------------------------------
void Function_2234b10()
{
  JUMPOUT(&loc_2234B80);
}

//----- (02234B14) --------------------------------------------------------
void Function_2234b14()
{
  JUMPOUT(&loc_2234BAC);
}

//----- (02234B18) --------------------------------------------------------
void __fastcall Function_2234b18(int a1, int a2)
{
  int v2;
  int v3;

  if ( a1 == 1 )
  {
    v2 = 0;
  }
  else
  {
    *(ushort *)(a2 + 2) = 0;
    *(uchar *)a2 = 0;
    Function_2234588();
    Function_223d354(0);
  }
  if ( !v2 )
  {
    if ( *(uchar *)(dword_2252CF4[394] + 89) )
      JUMPOUT(__CS__, v3);
    Function_223e994(9);
    *(uchar *)(dword_2252CF4[394] + 89) = 1;
    JUMPOUT(__CS__, v3);
  }
  Function_223e994(8);
  Function_2234aa0();
  JUMPOUT(__CS__, v3);
}

//----- (02234C38) --------------------------------------------------------
int Function_2234c38()
{
  int result;

  if ( HIWORD(dword_2252CF4[393]) )
  {
    Function_223e994(19);
    result = Function_2246304(0, Function_22348f0, 0, 120);
    *(uint *)(dword_2252CF4[394] + 56) = result;
  }
  else
  {
    result = *(uchar *)(dword_2252CF4[394] + 89);
    if ( !*(uchar *)(dword_2252CF4[394] + 89) )
    {
      Function_223e994(9);
      result = dword_2252CF4[394];
      *(uchar *)(dword_2252CF4[394] + 89) = 1;
    }
  }
  return result;
}

//----- (02234CAC) --------------------------------------------------------
int Function_2234cac()
{
  int result;

  if ( HIWORD(dword_2252CF4[393]) != *(ushort *)(dword_2252CF4[394] + 64)
    && *(uchar *)(dword_2252CF4[394] + 81) > 4u )
  {
    Function_223e994(19);
    result = Function_2246304(0, Function_22349ac, 0, 120);
    *(uint *)(dword_2252CF4[394] + 56) = result;
  }
  else
  {
    result = *(uchar *)(dword_2252CF4[394] + 89);
    if ( !*(uchar *)(dword_2252CF4[394] + 89) )
    {
      Function_223e994(9);
      result = dword_2252CF4[394];
      *(uchar *)(dword_2252CF4[394] + 89) = 1;
    }
  }
  return result;
}

//----- (02234D30) --------------------------------------------------------
int Function_2234d30()
{
  return Function_223d154(*(uint *)(dword_2252CF4[394] + 8));
}

//----- (02234D60) --------------------------------------------------------
int __fastcall Function_2234d60(int a1)
{
  int result;
  int v2;

  result = Function_223ffb8(a1);
  if ( !result )
  {
    v2 = Function_223e994(6);
    Function_223ff74(v2);
    result = Function_222f6c4((int)Function_2234d8c);
  }
  return result;
}

//----- (02234D8C) --------------------------------------------------------
int Function_2234d8c()
{
  int result;
  int v1;

  result = Function_223ffcc();
  if ( !result )
  {
    v1 = Function_222b0a8();
    Function_223d360(v1);
    result = Function_222f6c4((int)Function_2233d18);
  }
  return result;
}

//----- (02234DB4) --------------------------------------------------------
int Function_2234db4()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  char v8;
  char v9;
  int v10;
  int v11;

  v8 = 62;
  v9 = 61;
  dword_2252CF4[395] = Function_2245068(44, 4);
  Function_222f724(&v11, &v10);
  v0 = v11;
  if ( !v11 )
  {
    Function_223e068(dword_2252CF4[395] + 8);
    v0 = Function_2245e50(dword_2252CF4[395] + 8, 32);
    *(uchar *)(dword_2252CF4[395] + 41) = v0;
  }
  Function_2234ee8(v0);
  Function_222bbc0(v11 + 9);
  if ( v10 == 1 )
    Function_222b594(53, -1, 0);
  else
    Function_222b594((uchar)*(&v8 + v11), -1, 0);
  Function_222b740(2, v1, v2, v3);
  *(uint *)dword_2252CF4[395] = Function_224467c(0, 0);
  *(uint *)(dword_2252CF4[395] + 4) = Function_2243f60(0, 62);
  v4 = *(uint *)(dword_2252CF4[395] + 4);
  v5 = (ushort)(*(ushort *)(v4 + 4) & 0xF3FF) | 0xC00;
  *(ushort *)(v4 + 4) = v5;
  v6 = Function_2235584(v5);
  Function_2235490(v6);
  return Function_222f6c4((int)Function_2234fa4);
}

//----- (02234EE8) --------------------------------------------------------
int __fastcall Function_2234ee8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  Function_222b700("char/ybObjKb.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadOBJPltt, a3, a4);
  Function_222b700("char/jbBgStep3.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, v4, v5);
  Function_222b700("char/ybBgStep3.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v6, v7);
  Function_222b700("char/xb4Edit.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v8, v9);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02234FA4) --------------------------------------------------------
int Function_2234fa4()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2234ff8);
}

//----- (02234FF8) --------------------------------------------------------
int Function_2234ff8()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222be30();
      Function_223e994(20);
      if ( !*(uchar *)(dword_2252CF4[395] + 41) )
        Function_222c1dc(0);
      if ( *(uchar *)(dword_2252CF4[395] + 41) == 32 )
        Function_222c1f0(0);
      result = Function_222f6c4((int)Function_2235074);
    }
  }
  return result;
}

//----- (02235074) --------------------------------------------------------
int Function_2235074()
{
  int result;

  result = Function_222c1c8();
  if ( result != 255 )
    result = Function_222f6c4((int)Function_2235094);
  return result;
}

//----- (02235094) --------------------------------------------------------
int Function_2235094()
{
  int v0;

  v0 = Function_22350a4();
  return Function_2235264(v0);
}

//----- (022350A4) --------------------------------------------------------
int Function_22350a4()
{
  int v0;
  char v1;
  int v3;

  v0 = Function_222c1c8();
  v1 = v0;
  if ( v0 > 131 )
    goto LABEL_19;
  if ( v0 < 128 )
  {
    if ( !v0 )
    {
LABEL_22:
      v3 = Function_2235490(v0);
      return Function_2235584(v3);
    }
LABEL_19:
    v0 = *(uchar *)(dword_2252CF4[395] + 41);
    if ( v0 != 32 )
    {
      Function_223e994(1);
      *(uchar *)(dword_2252CF4[395] + (uchar)(*(uchar *)(dword_2252CF4[395] + 41))++ + 8) = v1;
      Function_222c1dc(1);
      v0 = *(uchar *)(dword_2252CF4[395] + 41);
      if ( v0 == 32 )
        v0 = Function_222c1f0(0);
    }
    goto LABEL_22;
  }
  if ( v0 == 128 )
  {
    v0 = *(uchar *)(dword_2252CF4[395] + 41);
    if ( *(uchar *)(dword_2252CF4[395] + 41) )
    {
      Function_223e994(3);
      *(uchar *)(dword_2252CF4[395] + (uchar)--*(uchar *)(dword_2252CF4[395] + 41) + 8) = 0;
      if ( !*(uchar *)(dword_2252CF4[395] + 41) )
        Function_222c1dc(0);
      v0 = Function_222c1f0(1);
    }
    goto LABEL_22;
  }
  if ( v0 == 130 )
  {
    Function_223e994(7);
    *(uchar *)(dword_2252CF4[395] + 42) = 0;
    return Function_222f6c4((int)Function_2235268);
  }
  if ( v0 != 131 )
    goto LABEL_19;
  if ( Function_22356f8() )
  {
    Function_223e994(6);
    *(uchar *)(dword_2252CF4[395] + 42) = 1;
  }
  else
  {
    *(uchar *)(dword_2252CF4[395] + 42) = 2;
    Function_223e994(9);
  }
  **(uint **)(dword_2252CF4[395] + 4) = **(uint **)(dword_2252CF4[395] + 4) & 0xC1FFFCFF | 0x200;
  return Function_222f6c4((int)Function_2235268);
}

//----- (02235264) --------------------------------------------------------
void Function_2235264()
{
  ;
}

//----- (02235268) --------------------------------------------------------
int Function_2235268()
{
  Function_2244394(8);
  return Function_222f6c4((int)Function_2235284);
}

//----- (02235284) --------------------------------------------------------
int Function_2235284()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222c194();
    Function_223e994(21);
    result = Function_222f6c4((int)Function_22352b4);
  }
  return result;
}

//----- (022352B4) --------------------------------------------------------
int __fastcall Function_22352b4(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  v6 = 71;
  v7 = 72;
  result = Function_222c204();
  if ( !result )
  {
    if ( *(uchar *)(dword_2252CF4[395] + 42) )
    {
      if ( *(uchar *)(dword_2252CF4[395] + 42) == 2 )
      {
        Function_223fc48(6);
        result = Function_222f6c4((int)Function_2235884);
      }
      else
      {
        Function_222f724(0, &v5);
        Function_223fc48(*(&v6 + v5));
        result = Function_222f6c4((int)Function_22355ec);
      }
    }
    else
    {
      result = Function_222f6c4((int)Function_223538c);
    }
  }
  return result;
}

//----- (0223538C) --------------------------------------------------------
int __fastcall Function_223538c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  Function_222b668();
  Function_2245b74(*(uint *)(dword_2252CF4[395] + 4));
  Function_22448e0(0);
  Function_222b700("char/ybObjMain.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadOBJPltt, v4, v5);
  Function_2244cd8(1, 1);
  Function_2244cd8(0, 21);
  Function_222f724(&v8, &v7);
  if ( v7 )
  {
    if ( *(uchar *)(dword_2252CF4[395] + 42) )
    {
      Function_222f6d4(0, 0);
      Function_222f710(0, 1);
      Function_222f6c4((int)Function_223c21c);
    }
    else
    {
      Function_222f6d4(0, 1);
      Function_222f710(1, 0);
      Function_222f6c4((int)Function_2233818);
    }
  }
  else
  {
    Function_222f6d4(2, 1);
    Function_222f710(0, v8);
    Function_222f6c4((int)Function_2236be0);
  }
  return Function_224508c(&dword_2252CF4[395]);
}

//----- (02235490) --------------------------------------------------------
int Function_2235490()
{
  int v0;
  int v1;
  int v2;
  ushort v3;
  short v5;
  short v6;
  ushort v7;
  ushort v8;
  ushort v9;
  ushort v10;

  v7 = 0;
  v8 = 32;
  v9 = 14;
  v10 = 16;
  Function_2244b5c(*(uint *)dword_2252CF4[395], 0);
  v0 = 0;
  v1 = 0;
  v6 = 0;
  do
  {
    if ( v0 == 16 )
    {
      v1 = 0;
      v8 = 49;
    }
    v2 = *(uchar *)(dword_2252CF4[395] + v0 + 8);
    v3 = (uchar)byte_224924C[v1];
    if ( v2 == 32 )
      v5 = -8163;
    else
      v5 = *(uchar *)(dword_2252CF4[395] + v0 + 8);
    v7 = v3;
    Function_2244a9c(*(uint *)dword_2252CF4[395], v3, v8, v9, v10, 2, 1152, &v5);
    ++v0;
    ++v1;
  }
  while ( v0 < 32 );
  return Function_2244c08(*(uint *)dword_2252CF4[395]);
}

//----- (02235584) --------------------------------------------------------
uint Function_2235584()
{
  uint v0;
  int v1;
  uint v2;
  uint result;

  v0 = *(uchar *)(dword_2252CF4[395] + 41);
  v1 = v0 & 0xF;
  v2 = (int)v0 >> 4;
  if ( v0 >= 0x20 )
    v2 = 1u;
  if ( v0 >= 0x20 )
    v1 = 0xFu;
  result = **(uint **)(dword_2252CF4[395] + 4) & 0xFE00FF00 | (uchar)byte_2249248[v2] | ((uchar)byte_224924C[v1] << 16) & 0x1FFFFFF;
  **(uint **)(dword_2252CF4[395] + 4) = result;
  return result;
}

//----- (022355EC) --------------------------------------------------------
int __fastcall Function_22355ec(int a1)
{
  int result;
  int v2;

  *(uchar *)(dword_2252CF4[395] + 42) = Function_223ffb8(a1);
  result = *(uchar *)(dword_2252CF4[395] + 42);
  if ( !*(uchar *)(dword_2252CF4[395] + 42) )
  {
    v2 = Function_223e994(7);
LABEL_6:
    Function_223ff74(v2);
    return Function_222f6c4((int)Function_2235648);
  }
  if ( result == 1 )
  {
    v2 = Function_223e994(14);
    goto LABEL_6;
  }
  return result;
}

//----- (02235648) --------------------------------------------------------
int Function_2235648()
{
  int result;
  int v1;
  int v2;
  int v3;

  v2 = 35905032;
  v3 = 35905080;
  result = Function_223ffcc();
  if ( !result )
  {
    if ( *(uchar *)(dword_2252CF4[395] + 42) )
    {
      Function_222f724(&v1, 0);
      ((void (__fastcall *)(int))*(&v2 + v1))(dword_2252CF4[395] + 8);
      result = Function_222f6c4((int)Function_223538c);
    }
    else
    {
      **(uint **)(dword_2252CF4[395] + 4) &= 0xC1FFFCFF;
      result = Function_222f6c4((int)Function_2234ff8);
    }
  }
  return result;
}

//----- (022356F8) --------------------------------------------------------
BOOL __fastcall Function_22356f8(int a1, int a2, int a3, int a4)
{
  int v5;
  bool v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  Function_222f724(&v11, &v10);
  if ( v10 == 1 )
    Function_222b594(53, -1, 0);
  Function_222f724(&v11, &v10);
  if ( !v11 )
    return *(uchar *)(dword_2252CF4[395] + 8) != 0;
  if ( v10 == 1 && !*(uchar *)(dword_2252CF4[395] + 8) )
    return 0;
  v5 = Function_2245e50(dword_2252CF4[395] + 8, 32);
  if ( v5 > 16 )
  {
    if ( v5 > 26 )
    {
      if ( v5 == 32 )
        goto LABEL_26;
    }
    else if ( v5 == 26 )
    {
      goto LABEL_26;
    }
    return 0;
  }
  if ( v5 < 10 )
  {
    if ( v5 > 0 )
    {
      if ( v5 == 5 )
        return 1;
    }
    else if ( !v5 )
    {
      return 1;
    }
    return 0;
  }
  if ( v5 != 10 )
  {
    v6 = v5 == 13;
    if ( v5 != 13 )
      v6 = v5 == 16;
    if ( !v6 )
      return 0;
    return 1;
  }
LABEL_26:
  v7 = 0;
  if ( v5 <= 0 )
    return 1;
  v8 = dword_2252CF4[395];
  while ( 1 )
  {
    v9 = *(uchar *)(v8 + 8);
    if ( (v9 < 0x30 || v9 > 0x39) && (v9 < 0x41 || v9 > 0x46) && (v9 < 0x61 || v9 > 0x66) )
      break;
    ++v7;
    ++v8;
    if ( v7 >= v5 )
      return 1;
  }
  return 0;
}

//----- (02235884) --------------------------------------------------------
int __fastcall Function_2235884(int a1)
{
  int result;
  int v2;

  result = Function_223ffb8(a1);
  if ( !result )
  {
    v2 = Function_223e994(6);
    Function_223ff74(v2);
    result = Function_222f6c4((int)Function_22358b0);
  }
  return result;
}

//----- (022358B0) --------------------------------------------------------
int Function_22358b0()
{
  int result;

  result = Function_223ffcc();
  if ( !result )
  {
    **(uint **)(dword_2252CF4[395] + 4) &= 0xC1FFFCFF;
    result = Function_222f6c4((int)Function_2234ff8);
  }
  return result;
}

//----- (022358F4) --------------------------------------------------------
int __fastcall Function_22358f4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  char v11;
  char v12;
  char v13;
  char v14;
  char v15;
  int (*v16)();
  int (*v17)();
  int (*v18)();
  int (*v19)();
  int v20;
  int v21;

  v21 = a4;
  v16 = Function_223e08c;
  v17 = Function_223e0cc;
  v18 = Function_223e10c;
  v19 = Function_223e150;
  v20 = 35905940;
  v11 = 63;
  v12 = 64;
  v13 = 65;
  v14 = 66;
  v15 = 67;
  dword_2252CF4[396] = Function_2245068(24, 4);
  Function_222f724(&v10, 0);
  ((void (__fastcall *)(int))*(&v16 + v10))(dword_2252CF4[396] + 8);
  if ( Function_20d5190((uchar *)(dword_2252CF4[396] + 8), (uchar *)&dword_224A1C0, 3) )
  {
    v4 = 3;
    *(uchar *)(dword_2252CF4[396] + 20) = 3;
  }
  else
  {
    MI_CpuFill8((ushort *)(dword_2252CF4[396] + 8), 0, 0xCu);
    v4 = dword_2252CF4[396];
    *(uchar *)(dword_2252CF4[396] + 20) = 0;
  }
  Function_2235a68(v4);
  Function_222bbc0(v10 + 11);
  Function_222b594((uchar)*(&v11 + v10), -1, 0);
  Function_222b740(2, v5, v6, v7);
  *(uint *)dword_2252CF4[396] = Function_224467c(0, 0);
  *(uint *)(dword_2252CF4[396] + 4) = Function_2243f60(0, 63);
  *(ushort *)(*(uint *)(dword_2252CF4[396] + 4) + 4) = *(ushort *)(*(uint *)(dword_2252CF4[396] + 4) + 4) & 0xF3FF | 0xC00;
  v8 = Function_223621c();
  Function_2236158(v8);
  return Function_222f6c4((int)Function_2235b24);
}

//----- (02235A68) --------------------------------------------------------
int __fastcall Function_2235a68(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  Function_222b700("char/ybObjKb.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadOBJPltt, a3, a4);
  Function_222b700("char/jbBgStep3.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, v4, v5);
  Function_222b700("char/ybBgStep3.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v6, v7);
  Function_222b700("char/xb4EditAddr.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v8, v9);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02235B24) --------------------------------------------------------
int Function_2235b24()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2235b78);
}

//----- (02235B78) --------------------------------------------------------
int Function_2235b78()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222dadc();
      Function_223e994(20);
      if ( *(uchar *)(dword_2252CF4[396] + 20) )
      {
        if ( Function_2235f44(26) )
          Function_222de74(0);
        Function_222de88(0);
      }
      else
      {
        Function_222de60(0);
        Function_222de88(0);
      }
      result = Function_222f6c4((int)Function_2235c04);
    }
  }
  return result;
}

//----- (02235C04) --------------------------------------------------------
int Function_2235c04()
{
  int result;

  result = Function_222de4c();
  if ( result != 31 )
    result = Function_222f6c4((int)Function_2235c24);
  return result;
}

//----- (02235C24) --------------------------------------------------------
int Function_2235c24()
{
  int v0;

  v0 = Function_2235c34();
  return Function_2235fd8(v0);
}

//----- (02235C34) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2235C74 for case 0"

//----- (02235C60) --------------------------------------------------------
void Function_2235c60()
{
  JUMPOUT(&loc_2235C74);
}

//----- (02235C64) --------------------------------------------------------
void Function_2235c64()
{
  JUMPOUT(&loc_2235D1C);
}

//----- (02235C68) --------------------------------------------------------
void Function_2235c68()
{
  JUMPOUT(&loc_2235D70);
}

//----- (02235C6C) --------------------------------------------------------
void Function_2235c6c()
{
  JUMPOUT(&loc_2235D94);
}

//----- (02235C70) --------------------------------------------------------
int __fastcall Function_2235c70(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (__fastcall *a8)(int, int, int, int))
{
  return a8(a1, a2, a3, a5);
}

//----- (02235F44) --------------------------------------------------------
BOOL __fastcall Function_2235f44(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  bool v7;
  int v9;
  char *v10;
  int v11;
  int v12;
  char v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = 3 * *(uchar *)(dword_2252CF4[396] + 20);
  v6 = *(uchar *)(dword_2252CF4[396] + 8 + v5);
  v7 = v6 == 0;
  if ( *(uchar *)(dword_2252CF4[396] + 8 + v5) )
    v7 = v6 == 32;
  if ( !v7 )
    return 1;
  MI_CpuCopy8(dword_2252CF4[396] + 8 + v5, (uint)&v13, 3u, dword_2252CF4[396] + 8);
  v9 = 0;
  v10 = &v13;
  v14 = 0;
  do
  {
    v11 = (uchar)*v10;
    if ( *v10 )
      break;
    ++v9;
    *v10++ = 32;
  }
  while ( v9 < 3 );
  Function_20dae0c((int)&v13, v11, v9, (int)v10);
  return v12 >= v4;
}

//----- (02235FD8) --------------------------------------------------------
void Function_2235fd8()
{
  ;
}

//----- (02235FDC) --------------------------------------------------------
int Function_2235fdc()
{
  Function_2244394(8);
  return Function_222f6c4((int)Function_2235ff8);
}

//----- (02235FF8) --------------------------------------------------------
int Function_2235ff8()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222de18();
    Function_223e994(21);
    result = Function_222f6c4((int)Function_2236028);
  }
  return result;
}

//----- (02236028) --------------------------------------------------------
int Function_2236028()
{
  int result;

  result = Function_222de9c();
  if ( !result )
  {
    if ( *(uchar *)(dword_2252CF4[396] + 21) )
    {
      if ( *(uchar *)(dword_2252CF4[396] + 21) == 2 )
      {
        Function_223fc48(6);
        result = Function_222f6c4((int)Function_223654c);
      }
      else
      {
        Function_223fc48(71);
        result = Function_222f6c4((int)Function_2236270);
      }
    }
    else
    {
      result = Function_222f6c4((int)Function_22360b4);
    }
  }
  return result;
}

//----- (022360B4) --------------------------------------------------------
int __fastcall Function_22360b4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;

  v7 = a4;
  Function_222b668();
  Function_2245b74(*(uint *)(dword_2252CF4[396] + 4));
  Function_22448e0(0);
  Function_222b700("char/ybObjMain.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadOBJPltt, v4, v5);
  Function_2244cd8(1, 1);
  Function_2244cd8(0, 21);
  Function_222f724(&v7, 0);
  if ( v7 >= 3 )
    ++v7;
  Function_222f6d4(2, 1);
  Function_222f710(0, v7 + 3);
  Function_222f6c4((int)Function_2236be0);
  return Function_224508c(&dword_2252CF4[396]);
}

//----- (02236158) --------------------------------------------------------
int Function_2236158()
{
  int v0;
  int v1;
  char *v2;
  int v3;
  int v4;
  short v6;
  short v7;
  short v8;
  ushort v9;
  ushort v10;
  ushort v11;

  v0 = *(uint *)dword_2252CF4[396];
  v8 = 0;
  v9 = 41;
  v10 = 11;
  v11 = 16;
  Function_2244b5c(v0, 0);
  v1 = 0;
  v2 = &byte_224929C;
  v7 = 0;
  do
  {
    v3 = (uchar)*v2++;
    v6 = *(uchar *)(dword_2252CF4[396] + v1 + 8);
    v4 = *(uint *)dword_2252CF4[396];
    v8 = v3;
    Function_2244a9c(v4, v3, v9, v10, v11, 2, 1152, &v6);
    ++v1;
  }
  while ( v1 < 12 );
  return Function_2244c08(*(uint *)dword_2252CF4[396]);
}

//----- (0223621C) --------------------------------------------------------
uint Function_223621c()
{
  int v0;
  uint *v1;
  uint result;

  v0 = *(uchar *)(dword_2252CF4[396] + 20);
  v1 = *(uint **)(dword_2252CF4[396] + 4);
  if ( v0 > 3 )
    v0 = 3;
  result = *v1 & 0xFE00FF00 | 0x28 | ((uchar)byte_224929C[3 * v0 + 2] << 16) & 0x1FFFFFF;
  *v1 = result;
  return result;
}

//----- (02236270) --------------------------------------------------------
int __fastcall Function_2236270(int a1)
{
  int result;
  int v2;

  *(uchar *)(dword_2252CF4[396] + 21) = Function_223ffb8(a1);
  result = *(uchar *)(dword_2252CF4[396] + 21);
  if ( !*(uchar *)(dword_2252CF4[396] + 21) )
  {
    v2 = Function_223e994(7);
LABEL_6:
    Function_223ff74(v2);
    return Function_222f6c4((int)Function_22362cc);
  }
  if ( result == 1 )
  {
    v2 = Function_223e994(14);
    goto LABEL_6;
  }
  return result;
}

//----- (022362CC) --------------------------------------------------------
int __fastcall Function_22362cc(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  int (*v6)();
  int (*v7)();
  int (*v8)();
  int (*v9)();
  int v10;
  int v11;

  v11 = a4;
  v6 = Function_223dfd0;
  v7 = Function_223dfec;
  v8 = Function_223e008;
  v9 = Function_223e028;
  v10 = 35905608;
  result = Function_223ffcc();
  if ( !result )
  {
    if ( *(uchar *)(dword_2252CF4[396] + 21) )
    {
      Function_222f724(&v5, 0);
      ((void (__fastcall *)(int))*(&v6 + v5))(dword_2252CF4[396] + 8);
      result = Function_222f6c4((int)Function_22360b4);
    }
    else
    {
      **(uint **)(dword_2252CF4[396] + 4) &= 0xC1FFFCFF;
      result = Function_222f6c4((int)Function_2235b78);
    }
  }
  return result;
}

//----- (02236380) --------------------------------------------------------
int Function_2236380()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  bool v5;
  char v6;

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = 0;
    v3 = dword_2252CF4[396] + 8 + v1;
    do
    {
      v4 = *(uchar *)(v3 + v2);
      v5 = v4 == 48;
      if ( v4 != 48 )
        v5 = v4 == 32;
      if ( !v5 && *(uchar *)(v3 + v2) )
        break;
      v6 = v2 == 2 ? 48 : 32;
      *(uchar *)(v3 + v2++) = v6;
    }
    while ( v2 < 3 );
    ++v0;
    v1 += 3;
  }
  while ( v0 < 4 );
  return Function_2236158();
}

//----- (022363F8) --------------------------------------------------------
BOOL __fastcall Function_22363f8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  uint v9;
  uint v10;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  char v17;
  char v18;
  int v19;
  char v20;
  char v21;
  char v22;
  char v23;
  int v24;

  v24 = a4;
  v4 = 0;
  v20 = 50;
  v21 = 53;
  v22 = 53;
  v5 = 0;
  v23 = 0;
  v6 = dword_2252CF4[396] + 8;
  while ( *(uchar *)(v6 + v5) == 32 )
  {
LABEL_8:
    ++v4;
    v5 += 3;
    if ( v4 >= 4 )
    {
      Function_223e834(dword_2252CF4[396] + 8, &v18);
      Function_222f724(&v19, 0);
      if ( v19 != 1 )
        return Function_20a2cac((uchar *)&v18) != 0;
      v12 = 0;
      v13 = &v18;
      v14 = 0;
      do
      {
        v15 = (uchar)*v13;
        v16 = 0;
        do
        {
          v17 = 7 - v16;
          if ( v12 )
          {
            if ( v15 & (1 << v17) )
              return 0;
          }
          else if ( !(v15 & (1 << v17)) )
          {
            v12 = 1;
          }
          ++v16;
        }
        while ( v16 < 8 );
        ++v14;
        ++v13;
      }
      while ( v14 < 4 );
      return 1;
    }
  }
  v7 = 0;
  v8 = &v20;
  while ( 1 )
  {
    v9 = *(uchar *)(v6 + v5 + v7);
    v10 = (uchar)*v8;
    if ( v9 > v10 )
      return 0;
    if ( v9 >= v10 )
    {
      ++v7;
      ++v8;
      if ( v7 < 3 )
        continue;
    }
    goto LABEL_8;
  }
}

//----- (0223654C) --------------------------------------------------------
int __fastcall Function_223654c(int a1)
{
  int result;
  int v2;

  result = Function_223ffb8(a1);
  if ( !result )
  {
    v2 = Function_223e994(6);
    Function_223ff74(v2);
    result = Function_222f6c4((int)Function_2236578);
  }
  return result;
}

//----- (02236578) --------------------------------------------------------
int Function_2236578()
{
  int result;

  result = Function_223ffcc();
  if ( !result )
  {
    **(uint **)(dword_2252CF4[396] + 4) &= 0xC1FFFCFF;
    result = Function_222f6c4((int)Function_2235b78);
  }
  return result;
}

//----- (022365BC) --------------------------------------------------------
int Function_22365bc()
{
  int v0;

  v0 = Function_22365d8();
  Function_2236658(v0);
  return Function_222f6c4((int)Function_22369b4);
}

//----- (022365D8) --------------------------------------------------------
int __fastcall Function_22365d8(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/jb4Error.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02236658) --------------------------------------------------------
int __fastcall Function_2236658(int a1, int a2, int a3, int a4)
{
  ushort v4;
  int v5;
  int v6;
  int v7;
  short v8;
  short v9;
  int v10;
  int v11;
  int v13;
  char v14;
  int v15;

  v15 = a4;
  Function_222f724(0, &v13);
  if ( dword_2252CF4[397] < -20099 )
  {
    if ( dword_2252CF4[397] < -20100 )
    {
      if ( dword_2252CF4[397] < -20101 )
      {
        if ( dword_2252CF4[397] < -20107 )
        {
          if ( dword_2252CF4[397] < -20108 )
          {
            if ( dword_2252CF4[397] < -20109 )
            {
              if ( dword_2252CF4[397] < -20110 )
              {
                if ( dword_2252CF4[397] < -20999 )
                {
                  if ( dword_2252CF4[397] < -22999 )
                  {
                    if ( dword_2252CF4[397] < -23999 )
                    {
                      if ( dword_2252CF4[397] < -49999 )
                      {
                        if ( dword_2252CF4[397] < -50002 )
                        {
                          if ( dword_2252CF4[397] < -50003 )
                          {
                            if ( dword_2252CF4[397] < -50098 )
                            {
                              if ( dword_2252CF4[397] < -50099 )
                              {
                                if ( dword_2252CF4[397] < -51098 )
                                {
                                  if ( dword_2252CF4[397] < -51099 )
                                  {
                                    if ( dword_2252CF4[397] < -51102 )
                                    {
                                      if ( dword_2252CF4[397] < -51103 )
                                      {
                                        if ( dword_2252CF4[397] < -51199 )
                                        {
                                          if ( dword_2252CF4[397] < -51299 )
                                          {
                                            if ( dword_2252CF4[397] < -51302 )
                                            {
                                              if ( dword_2252CF4[397] < -51303 )
                                              {
                                                if ( dword_2252CF4[397] < -51999 )
                                                {
                                                  if ( dword_2252CF4[397] < -52002 )
                                                  {
                                                    if ( dword_2252CF4[397] < -52003 )
                                                    {
                                                      if ( dword_2252CF4[397] < -52099 )
                                                      {
                                                        if ( dword_2252CF4[397] < -52103 )
                                                        {
                                                          if ( dword_2252CF4[397] < -52199 )
                                                          {
                                                            if ( dword_2252CF4[397] < -52203 )
                                                            {
                                                              if ( dword_2252CF4[397] < -52299 )
                                                              {
                                                                if ( dword_2252CF4[397] < -52399 )
                                                                {
                                                                  if ( dword_2252CF4[397] < -52999 )
                                                                  {
                                                                    if ( dword_2252CF4[397] < -53299 )
                                                                      v4 = 0;
                                                                    else
                                                                      v4 = 2;
                                                                  }
                                                                  else
                                                                  {
                                                                    v4 = 0;
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  v4 = 2;
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v4 = 0;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              v4 = 11;
                                                            }
                                                          }
                                                          else
                                                          {
                                                            v4 = 0;
                                                          }
                                                        }
                                                        else
                                                        {
                                                          v4 = 11;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        v4 = 0;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      v4 = 22;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v4 = 10;
                                                  }
                                                }
                                                else
                                                {
                                                  v4 = 0;
                                                }
                                              }
                                              else
                                              {
                                                v4 = 4;
                                              }
                                            }
                                            else
                                            {
                                              v4 = 21;
                                            }
                                          }
                                          else
                                          {
                                            v4 = 20;
                                          }
                                        }
                                        else
                                        {
                                          v4 = 0;
                                        }
                                      }
                                      else
                                      {
                                        v4 = 5;
                                      }
                                    }
                                    else
                                    {
                                      v4 = 9;
                                    }
                                  }
                                  else if ( v13 == 2 )
                                  {
                                    v4 = 5;
                                  }
                                  else
                                  {
                                    v4 = 8;
                                  }
                                }
                                else
                                {
                                  v4 = 0;
                                }
                              }
                              else if ( v13 == 2 )
                              {
                                v4 = 5;
                              }
                              else
                              {
                                v4 = 7;
                              }
                            }
                            else
                            {
                              v4 = 0;
                            }
                          }
                          else
                          {
                            v4 = 5;
                          }
                        }
                        else
                        {
                          v4 = 7;
                        }
                      }
                      else
                      {
                        v4 = 0;
                      }
                    }
                    else
                    {
                      v4 = 19;
                    }
                  }
                  else
                  {
                    v4 = 0;
                  }
                }
                else
                {
                  v4 = 2;
                }
              }
              else
              {
                v4 = 3;
              }
            }
            else
            {
              v4 = 2;
            }
          }
          else
          {
            v4 = 18;
          }
        }
        else
        {
          v4 = 2;
        }
      }
      else
      {
        v4 = 19;
      }
    }
    else
    {
      v4 = 2;
    }
  }
  else
  {
    v4 = 0;
  }
  v5 = Function_222f74c();
  v6 = Function_224467c(0, *((uchar *)dword_22492A8 + v5));
  v7 = Function_222f8b8((uint *)dword_2252CF4[377], v4);
  Function_20dcdcc((int)&v14, 8, L"%d");
  v8 = aBBEL4N[2 * Function_222f74c() + 1];
  v9 = aBBEL4N[2 * Function_222f74c()];
  v10 = Function_22449f0(v6);
  v11 = Function_222b8f8(v10);
  Function_2244a9c(v6, 13, 60, 230, 94, 2, v11, v7);
  return Function_2244c08(v6);
}

//----- (022369B4) --------------------------------------------------------
int Function_22369b4()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_22369e8);
}

//----- (022369E8) --------------------------------------------------------
int Function_22369e8()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(4, v1, v2, v3);
      result = Function_222f6c4((int)Function_2236a24);
    }
  }
  return result;
}

//----- (02236A24) --------------------------------------------------------
int Function_2236a24()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_2236a4c);
  }
  return result;
}

//----- (02236A4C) --------------------------------------------------------
int Function_2236a4c()
{
  int v0;
  int v1;

  v0 = Function_2236a60();
  v1 = Function_2236a80(v0);
  return Function_2236a84(v1);
}

//----- (02236A60) --------------------------------------------------------
int Function_2236a60()
{
  int result;

  result = Function_2245470(1);
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (02236A80) --------------------------------------------------------
void Function_2236a80()
{
  ;
}

//----- (02236A84) --------------------------------------------------------
int Function_2236a84()
{
  int result;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e994(6);
    result = Function_222f6c4((int)Function_2236aac);
  }
  return result;
}

//----- (02236AAC) --------------------------------------------------------
int Function_2236aac()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_2236acc);
}

//----- (02236ACC) --------------------------------------------------------
int Function_2236acc()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222b004();
    Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_2236b1c);
  }
  return result;
}

//----- (02236B1C) --------------------------------------------------------
int __fastcall Function_2236b1c(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;

  v5 = a4;
  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_22448e0(0);
        Function_222b668();
        Function_2244cd8(1, 1);
        Function_2244cd8(0, 21);
        Function_222f724(0, &v5);
        if ( v5 )
        {
          Function_222f6d4(2, 1);
          result = Function_222f6c4((int)Function_223a6b4);
        }
        else
        {
          Function_222f6d4(2, 0);
          Function_222f710(0, 0);
          Function_223909c(0);
          result = Function_222f6c4((int)Function_2236be0);
        }
      }
    }
  }
  return result;
}

//----- (02236BD0) --------------------------------------------------------
int __fastcall Function_2236bd0(int result)
{
  dword_2252CF4[397] = result;
  return result;
}

//----- (02236BE0) --------------------------------------------------------
int __fastcall Function_2236be0(int a1)
{
  uchar *v1;
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

  v1 = (uchar *)Function_223ddcc(a1);
  dword_2252CF4[400] = Function_2245068(72, 4);
  *(uchar *)(dword_2252CF4[400] + 67) = v1[246];
  *(uchar *)(dword_2252CF4[400] + 66) = 12;
  v2 = Function_2236ff0();
  Function_2236ddc(v2);
  if ( BYTE1(dword_2252CF4[398]) )
  {
    Function_222b594(69, -1, 0);
  }
  else
  {
    v3 = Function_222f74c();
    Function_222b594(48, *((char *)dword_22493B0 + v3), v1[244] + 1);
  }
  Function_222b740(1, v4, v5, v6);
  Function_222bc34();
  Function_223d218(2, 85, 241, 65, 55 * LOWORD(dword_2252CF4[399]) / 145);
  v7 = 0;
  *(uint *)(dword_2252CF4[400] + 20) = Function_224467c(0, 1);
  do
  {
    v8 = Function_2243f60(0, 41);
    v9 = dword_2252CF4[400] + 4 * v7++;
    *(uint *)(v9 + 24) = v8;
  }
  while ( v7 < 7 );
  v10 = v1[231];
  if ( v10 == 1 )
  {
    *(uint *)(dword_2252CF4[400] + 52) = Function_2243f60(0, 80);
    *(ushort *)(*(uint *)(dword_2252CF4[400] + 52) + 4) = *(ushort *)(*(uint *)(dword_2252CF4[400] + 52) + 4) & 0xF3FF | 0xC00;
  }
  else if ( v10 == 2 )
  {
    *(uint *)(dword_2252CF4[400] + 52) = Function_2243f60(0, 81);
    *(ushort *)(*(uint *)(dword_2252CF4[400] + 52) + 4) = *(ushort *)(*(uint *)(dword_2252CF4[400] + 52) + 4) & 0xF3FF | 0xC00;
  }
  *(uint *)(dword_2252CF4[400] + 60) = Function_2246304(1, Function_2238924, 0, 110);
  *(uint *)dword_2252CF4[400] = Function_2246304(0, Function_2238e84, 0, 120);
  v11 = Function_2237ba8();
  Function_22389a8(v11);
  return Function_222f6c4((int)Function_223702c);
}

//----- (02236DDC) --------------------------------------------------------
int Function_2236ddc()
{
  char *v0;
  char *v1;
  int v2;
  char v3;
  char v4;
  char v5;
  const char *v6;
  char *v7;
  int v8;
  char v9;
  char v10;
  char v11;
  char *v12;
  char *v13;
  int v14;
  char v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int *v26;
  int v27;
  int *v28;
  int *v29;
  int result;
  char v31;
  char v32;
  char v33;

  v0 = &byte_224934F;
  v1 = &v33;
  v2 = 11;
  do
  {
    v3 = *v0;
    v4 = v0[1];
    v0 += 2;
    *v1 = v3;
    v1[1] = v4;
    v1 += 2;
    --v2;
  }
  while ( v2 );
  v5 = *v0;
  v6 = "char/ybBgStep2.ncl.l";
  v7 = &v32;
  *v1 = v5;
  v8 = 10;
  do
  {
    v9 = *v6;
    v10 = v6[1];
    v6 += 2;
    *v7 = v9;
    v7[1] = v10;
    v7 += 2;
    --v8;
  }
  while ( v8 );
  v11 = *v6;
  v12 = &byte_2249339;
  v13 = &v31;
  *v7 = v11;
  v14 = 11;
  do
  {
    v15 = *v12;
    v16 = v12[1];
    v12 += 2;
    *v13 = v15;
    v13[1] = v16;
    v13 += 2;
    --v14;
  }
  while ( v14 );
  v17 = REG_BG2CNT & 0x43 | 0xE18;
  REG_BG2CNT = REG_BG2CNT & 0x43 | 0xE18;
  Function_222b700("char/ybObjKb.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadOBJPltt, v17, (int)&REG_BG2CNT);
  Function_222b700("char/jbBgStep2.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG3Char, v18, v19);
  Function_222b700("char/jbBgStep21.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, v20, v21);
  Function_222b700(&v32, (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v22, v23);
  Function_222b700("char/jb3List.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG3Scr, v24, v25);
  v26 = Function_222b6a0(&v33);
  *(uint *)(dword_2252CF4[400] + 8) = Function_2243738(v26, 0, 4);
  v27 = Function_223d004(*(uint *)(dword_2252CF4[400] + 8));
  Function_223d090(v27);
  v28 = Function_222b6a0(&v32);
  *(uint *)(dword_2252CF4[400] + 12) = Function_2243738(v28, 0, 4);
  v29 = Function_222b6a0(&v31);
  *(uint *)(dword_2252CF4[400] + 16) = Function_2243738(v29, 0, 4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 2;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG3CNT & 0xFFFC) | 2;
  REG_BG3CNT = REG_BG3CNT & 0xFFFC | 2;
  return result;
}

//----- (02236FF0) --------------------------------------------------------
int *__fastcall Function_2236ff0(int a1, int a2, int a3, int a4)
{
  int *result;
  int *v5;

  v5 = (int *)a4;
  Function_223ddcc(a1);
  Function_222f724(0, &v5);
  result = v5;
  if ( !v5 )
  {
    result = &dword_2252CF4[398];
    LOWORD(dword_2252CF4[399]) = 0;
    LOBYTE(dword_2252CF4[398]) = 0;
    BYTE2(dword_2252CF4[398]) = 0;
  }
  return result;
}

//----- (0223702C) --------------------------------------------------------
int Function_223702c()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 29, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 29);
  return Function_222f6c4((int)Function_2237080);
}

//----- (02237080) --------------------------------------------------------
int Function_2237080()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
      result = Function_222f6c4((int)Function_22370b4);
  }
  return result;
}

//----- (022370B4) --------------------------------------------------------
int Function_22370b4()
{
  int v0;

  v0 = Function_22370c4();
  return Function_22375ec(v0);
}

//----- (022370C4) --------------------------------------------------------
int Function_22370c4()
{
  int result;
  bool v1;

  result = *(uint *)(dword_2252CF4[400] + 56);
  v1 = result == 0;
  if ( !result )
  {
    result = *(uchar *)(dword_2252CF4[400] + 69);
    v1 = result == 0;
  }
  if ( v1 )
  {
    result = Function_2237344();
    if ( !result )
    {
      if ( Function_2245470(1) )
      {
        result = Function_22373c8(LOBYTE(dword_2252CF4[398]));
      }
      else if ( Function_2245470(2) )
      {
        Function_223e994(7);
        *(uchar *)(dword_2252CF4[400] + 64) = 13;
        result = Function_222f6c4((int)Function_2237848);
      }
      else if ( Function_22454b0(512) )
      {
        if ( LOWORD(dword_2252CF4[399]) == 145 )
        {
          result = *(uchar *)(dword_2252CF4[400] + 71);
          if ( !*(uchar *)(dword_2252CF4[400] + 71) )
          {
            Function_223e994(9);
            result = dword_2252CF4[400];
            *(uchar *)(dword_2252CF4[400] + 71) = 1;
          }
        }
        else
        {
          Function_223e994(19);
          result = Function_2246304(0, Function_2238880, 0, 120);
          *(uint *)(dword_2252CF4[400] + 56) = result;
        }
      }
      else if ( Function_22454f0(512) )
      {
        result = dword_2252CF4[400];
        *(uchar *)(dword_2252CF4[400] + 71) = 0;
      }
      else if ( Function_22454b0(256) )
      {
        if ( LOWORD(dword_2252CF4[399]) )
        {
          Function_223e994(19);
          result = Function_2246304(0, Function_22387b8, 0, 120);
          *(uint *)(dword_2252CF4[400] + 56) = result;
        }
        else
        {
          result = *(uchar *)(dword_2252CF4[400] + 71);
          if ( !*(uchar *)(dword_2252CF4[400] + 71) )
          {
            Function_223e994(9);
            result = dword_2252CF4[400];
            *(uchar *)(dword_2252CF4[400] + 71) = 1;
          }
        }
      }
      else if ( Function_22454f0(256) )
      {
        result = dword_2252CF4[400];
        *(uchar *)(dword_2252CF4[400] + 71) = 0;
      }
      else if ( Function_22454b0(64) )
      {
        result = Function_2238b60(1);
      }
      else if ( Function_22454f0(64) )
      {
        result = dword_2252CF4[400];
        *(uchar *)(dword_2252CF4[400] + 71) = 0;
      }
      else if ( Function_22454b0(128) )
      {
        result = Function_2238b60(3);
      }
      else if ( Function_22454f0(128) )
      {
        result = dword_2252CF4[400];
        *(uchar *)(dword_2252CF4[400] + 71) = 0;
      }
      else if ( Function_22454b0(32) )
      {
        result = Function_2238b60(0);
      }
      else
      {
        result = Function_22454b0(16);
        if ( result )
          result = Function_2238b60(2);
      }
    }
  }
  return result;
}

//----- (02237344) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x22373B8 for case 0"

//----- (02237390) --------------------------------------------------------
void Function_2237390()
{
  JUMPOUT(&loc_22373B8);
}

//----- (02237394) --------------------------------------------------------
void Function_2237394()
{
  JUMPOUT(&loc_22373B8);
}

//----- (02237398) --------------------------------------------------------
void Function_2237398()
{
  JUMPOUT(&loc_22373B4);
}

//----- (0223739C) --------------------------------------------------------
void Function_223739c()
{
  JUMPOUT(&loc_22373B4);
}

//----- (022373A0) --------------------------------------------------------
void Function_22373a0()
{
  JUMPOUT(&loc_22373B8);
}

//----- (022373A4) --------------------------------------------------------
void Function_22373a4()
{
  JUMPOUT(&loc_22373B8);
}

//----- (022373A8) --------------------------------------------------------
void Function_22373a8()
{
  JUMPOUT(&loc_22373B8);
}

//----- (022373AC) --------------------------------------------------------
void Function_22373ac()
{
  JUMPOUT(&loc_22373B4);
}

//----- (022373B0) --------------------------------------------------------
void Function_22373b0()
{
  int v0;
  int v1;

  Function_2238ed8();
  Function_22373c8(v0);
  JUMPOUT(__CS__, v1);
}

//----- (022373C8) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2237468 for case 0"

//----- (022373FC) --------------------------------------------------------
void Function_22373fc()
{
  JUMPOUT(&loc_2237468);
}

//----- (02237400) --------------------------------------------------------
void Function_2237400()
{
  JUMPOUT(&loc_2237468);
}

//----- (02237404) --------------------------------------------------------
void Function_2237404()
{
  JUMPOUT(&loc_2237420);
}

//----- (02237408) --------------------------------------------------------
void Function_2237408()
{
  JUMPOUT(&loc_2237420);
}

//----- (0223740C) --------------------------------------------------------
void Function_223740c()
{
  JUMPOUT(&loc_2237468);
}

//----- (02237410) --------------------------------------------------------
void Function_2237410()
{
  JUMPOUT(&loc_2237468);
}

//----- (02237414) --------------------------------------------------------
void Function_2237414()
{
  JUMPOUT(&loc_2237468);
}

//----- (02237418) --------------------------------------------------------
void Function_2237418()
{
  JUMPOUT(&loc_2237444);
}

//----- (0223741C) --------------------------------------------------------
void Function_223741c()
{
  int v0;
  int v1;

  Function_223e994(6);
  Function_22375b4(v0 != 8);
  JUMPOUT(__CS__, v1);
}

//----- (02237548) --------------------------------------------------------
int __fastcall Function_2237548(int a1)
{
  int v1;
  int result;
  BOOL v3;
  int v4;

  v1 = a1;
  result = Function_223ddcc(a1);
  if ( *(uchar *)(result + 245) != v1 )
  {
    if ( v1 )
    {
      v3 = *(uchar *)(dword_2252CF4[400] + 67) != 0;
    }
    else
    {
      v3 = 0;
      *(uchar *)(dword_2252CF4[400] + 67) = *(uchar *)(result + 246);
    }
    Function_223dde0(v1);
    v4 = Function_223ddf4(v3);
    result = Function_2237ba8(v4);
  }
  return result;
}

//----- (022375B4) --------------------------------------------------------
int __fastcall Function_22375b4(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = *(uchar *)(Function_223ddcc(a1) + 246);
  if ( result != v1 )
  {
    *(uchar *)(dword_2252CF4[400] + 67) = v1;
    v3 = Function_223ddf4(v1);
    result = Function_2237ba8(v3);
  }
  return result;
}

//----- (022375EC) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2237624 for case 0"

//----- (02237624) --------------------------------------------------------
// jumptable 0223761C case 0
int __fastcall Function_2237624(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02237628) --------------------------------------------------------
void Function_2237628()
{
  JUMPOUT(&loc_2237644);
}

//----- (0223762C) --------------------------------------------------------
void Function_223762c()
{
  JUMPOUT(&loc_2237658);
}

//----- (02237630) --------------------------------------------------------
void Function_2237630()
{
  JUMPOUT(&loc_22376AC);
}

//----- (02237634) --------------------------------------------------------
void Function_2237634()
{
  JUMPOUT(&loc_2237754);
}

//----- (02237638) --------------------------------------------------------
void Function_2237638()
{
  JUMPOUT(&loc_2237824);
}

//----- (0223763C) --------------------------------------------------------
void Function_223763c()
{
  JUMPOUT(&loc_22377BC);
}

//----- (02237640) --------------------------------------------------------
void Function_2237640()
{
  int v0;

  *(uchar *)(dword_2252CF4[400] + 70) = 0;
  JUMPOUT(__CS__, v0);
}

//----- (02237848) --------------------------------------------------------
int __fastcall Function_2237848(int a1)
{
  Function_223d378(a1);
  Function_2244394(8);
  return Function_222f6c4((int)Function_2237868);
}

//----- (02237868) --------------------------------------------------------
int Function_2237868()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 29, 8);
    result = Function_222f6c4((int)Function_22378b4);
  }
  return result;
}

//----- (022378B4) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2237A34 for case 0"

//----- (022379FC) --------------------------------------------------------
void Function_22379fc()
{
  JUMPOUT(&loc_2237A34);
}

//----- (02237A00) --------------------------------------------------------
void Function_2237a00()
{
  JUMPOUT(&loc_2237A34);
}

//----- (02237A04) --------------------------------------------------------
void Function_2237a04()
{
  JUMPOUT(&loc_2237B70);
}

//----- (02237A08) --------------------------------------------------------
void Function_2237a08()
{
  JUMPOUT(&loc_2237B70);
}

//----- (02237A0C) --------------------------------------------------------
void Function_2237a0c()
{
  JUMPOUT(&loc_2237A50);
}

//----- (02237A10) --------------------------------------------------------
void Function_2237a10()
{
  JUMPOUT(&loc_2237A50);
}

//----- (02237A14) --------------------------------------------------------
void Function_2237a14()
{
  JUMPOUT(&loc_2237A50);
}

//----- (02237A18) --------------------------------------------------------
void Function_2237a18()
{
  JUMPOUT(&loc_2237B70);
}

//----- (02237A1C) --------------------------------------------------------
void Function_2237a1c()
{
  JUMPOUT(&loc_2237B70);
}

//----- (02237A20) --------------------------------------------------------
void Function_2237a20()
{
  JUMPOUT(&loc_2237A50);
}

//----- (02237A24) --------------------------------------------------------
void Function_2237a24()
{
  JUMPOUT(&loc_2237A50);
}

//----- (02237A28) --------------------------------------------------------
void Function_2237a28()
{
  JUMPOUT(&loc_2237A80);
}

//----- (02237A2C) --------------------------------------------------------
void Function_2237a2c()
{
  JUMPOUT(&loc_2237B18);
}

//----- (02237A30) --------------------------------------------------------
void __fastcall Function_2237a30(int a1, int a2, int a3)
{
  int v3;
  int v4;

  if ( *(uchar *)(a3 + 1) )
  {
    v3 = Function_223ddcc(*(uchar *)(a3 + 1));
    Function_223e1f0(*(uchar *)(v3 + 244));
    Function_222f6d4(0, 1);
    Function_222f6c4((int)Function_223b3f4);
  }
  else
  {
    Function_222f6d4(2, 1);
    Function_222f6c4((int)Function_223a6b4);
  }
  Function_224508c(&dword_2252CF4[400]);
  JUMPOUT(__CS__, v4);
}

//----- (02237BA8) --------------------------------------------------------
int Function_2237ba8()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v0 = Function_20bd104(LOWORD(dword_2252CF4[399]), 29);
  Function_2244b5c(*(uint *)(dword_2252CF4[400] + 20), 0);
  v1 = v0;
  v2 = 0;
  do
    Function_2237c68(v1++, v2++);
  while ( v2 < 5 );
  Function_223d0a8(
    *(uint *)(dword_2252CF4[400] + 8) + 2 * *((ushort *)&dword_22492F8[6] + v0 + 1),
    0,
    30,
    19);
  v3 = 0;
  do
    v4 = Function_2237e04(v0++, v3++);
  while ( v3 < 5 );
  Function_223d090(v4);
  v5 = Function_2244c08(*(uint *)(dword_2252CF4[400] + 20));
  return Function_22382cc(v5);
}

//----- (02237C68) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2237CAC for case 0"

//----- (02237C88) --------------------------------------------------------
void Function_2237c88()
{
  JUMPOUT(&loc_2237CAC);
}

//----- (02237C8C) --------------------------------------------------------
void Function_2237c8c()
{
  JUMPOUT(&loc_2237CC0);
}

//----- (02237C90) --------------------------------------------------------
void Function_2237c90()
{
  JUMPOUT(&loc_2237DFC);
}

//----- (02237C94) --------------------------------------------------------
void Function_2237c94()
{
  JUMPOUT(&loc_2237D50);
}

//----- (02237C98) --------------------------------------------------------
void Function_2237c98()
{
  JUMPOUT(&loc_2237D74);
}

//----- (02237C9C) --------------------------------------------------------
void Function_2237c9c()
{
  JUMPOUT(&loc_2237D98);
}

//----- (02237CA0) --------------------------------------------------------
void Function_2237ca0()
{
  JUMPOUT(&loc_2237DFC);
}

//----- (02237CA4) --------------------------------------------------------
void Function_2237ca4()
{
  JUMPOUT(&loc_2237DBC);
}

//----- (02237CA8) --------------------------------------------------------
void Function_2237ca8()
{
  JUMPOUT(&loc_2237DE0);
}

//----- (02237CD8) --------------------------------------------------------
void Function_2237cd8()
{
  JUMPOUT(&loc_2237CE8);
}

//----- (02237CDC) --------------------------------------------------------
void Function_2237cdc()
{
  JUMPOUT(&loc_2237CF0);
}

//----- (02237CE0) --------------------------------------------------------
void Function_2237ce0()
{
  JUMPOUT(&loc_2237CF8);
}

//----- (02237CE4) --------------------------------------------------------
void __fastcall Function_2237ce4(int a1)
{
  int v1;
  uint v2;
  int v3[13];
  int v4;

  v2 = 32;
  if ( (uint)*(uchar *)(a1 + 230) << 24 >> 26 == 1 )
    v2 = 16;
  MI_CpuFill8(v3, 0, 0x21u);
  Call_FillMemWithValue(v3, 0x2Au, v2);
  Function_22380f0(v3, v1);
  JUMPOUT(__CS__, v4);
}

//----- (02237E04) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2237E44 for case 0"

//----- (02237E20) --------------------------------------------------------
void Function_2237e20()
{
  JUMPOUT(&loc_2237E44);
}

//----- (02237E24) --------------------------------------------------------
void Function_2237e24()
{
  JUMPOUT(&loc_2237E44);
}

//----- (02237E28) --------------------------------------------------------
void Function_2237e28()
{
  JUMPOUT(&loc_2237E60);
}

//----- (02237E2C) --------------------------------------------------------
void Function_2237e2c()
{
  JUMPOUT(&loc_2237EAC);
}

//----- (02237E30) --------------------------------------------------------
void Function_2237e30()
{
  JUMPOUT(&loc_2237EAC);
}

//----- (02237E34) --------------------------------------------------------
void Function_2237e34()
{
  JUMPOUT(&loc_2237EAC);
}

//----- (02237E38) --------------------------------------------------------
void Function_2237e38()
{
  JUMPOUT(&loc_2237EC4);
}

//----- (02237E3C) --------------------------------------------------------
void Function_2237e3c()
{
  JUMPOUT(&loc_2237F20);
}

//----- (02237E40) --------------------------------------------------------
void __fastcall Function_2237e40(int a1)
{
  int v1;
  int v2;
  int v3;

  if ( *(uchar *)(a1 + 246) )
    v2 = 2;
  else
    v2 = 0;
  Function_2237fec(0, v2, v1);
  JUMPOUT(__CS__, v3);
}

//----- (02237F58) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2237FB0 for case 0"

//----- (02237F74) --------------------------------------------------------
void Function_2237f74()
{
  JUMPOUT(&loc_2237FB0);
}

//----- (02237F78) --------------------------------------------------------
void Function_2237f78()
{
  JUMPOUT(&loc_2237FB0);
}

//----- (02237F7C) --------------------------------------------------------
void Function_2237f7c()
{
  JUMPOUT(&loc_2237FE4);
}

//----- (02237F80) --------------------------------------------------------
void Function_2237f80()
{
  JUMPOUT(&loc_2237FE4);
}

//----- (02237F84) --------------------------------------------------------
void Function_2237f84()
{
  JUMPOUT(&loc_2237FC8);
}

//----- (02237F88) --------------------------------------------------------
void Function_2237f88()
{
  JUMPOUT(&loc_2237FC8);
}

//----- (02237F8C) --------------------------------------------------------
void Function_2237f8c()
{
  JUMPOUT(&loc_2237FC8);
}

//----- (02237F90) --------------------------------------------------------
void Function_2237f90()
{
  JUMPOUT(&loc_2237FA0);
}

//----- (02237F94) --------------------------------------------------------
void Function_2237f94()
{
  JUMPOUT(&loc_2237FE4);
}

//----- (02237F98) --------------------------------------------------------
void Function_2237f98()
{
  JUMPOUT(&loc_2237FD8);
}

//----- (02237F9C) --------------------------------------------------------
void __fastcall Function_2237f9c(int a1)
{
  int v1;

  *(uchar *)(a1 + 246);
  JUMPOUT(__CS__, v1);
}

//----- (02237FEC) --------------------------------------------------------
uint __fastcall Function_2237fec(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  uint result;
  short v10;
  short v11;
  short v12;
  short v13;
  short v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = a2;
  v10 = 204;
  v11 = 192;
  v12 = 192;
  v13 = 143;
  v14 = 143;
  v6 = dword_2252CF4[400] + 24 + 4 * a3;
  if ( (uint)(a1 - 1) <= 1 )
  {
    if ( Function_2238794(a3) == 2 )
      v6 = dword_2252CF4[400] + 44;
    else
      v6 = dword_2252CF4[400] + 48;
  }
  v7 = 3 * v4 + 35951362;
  v8 = *(uint **)v6;
  if ( *(uchar *)(v5 + v7) )
  {
    Function_2243ecc(0, *(uchar *)(v5 + v7), v8);
    **(uint **)v6 = **(uint **)v6 & 0xFE00FF00 | ((ushort)*(&v10 + v4) << 16) & 0x1FFFFFF;
    result = (ushort)(*(ushort *)(*(uint *)v6 + 4) & 0xF3FF) | 0xC00;
    *(ushort *)(*(uint *)v6 + 4) = result;
  }
  else
  {
    result = *v8 & 0xFE00FF00 | 0x1000000;
    *v8 = result;
  }
  return result;
}

//----- (022380F0) --------------------------------------------------------
int __fastcall Function_22380f0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13;

  v1 = a1;
  MI_CpuFill8(&v13, 0, 0x22u);
  v2 = Function_2245e50(v1, 32);
  v3 = v2;
  if ( v2 > 16 )
    v4 = 16;
  else
    v4 = v2;
  v5 = 0;
  while ( v5 < v4 )
  {
    v6 = *(uchar *)(v1 + v5);
    v7 = 2 * v5++;
    if ( v6 == 32 )
      *(ushort *)(&v13 + v7) = -8163;
    else
      *(ushort *)(&v13 + v7) = v6;
  }
  result = Function_22449f0(*(uint *)(dword_2252CF4[400] + 20));
  if ( v3 > 16 )
  {
    MI_CpuFill8(&v13, 0, 0x22u);
    v9 = v3 - 16;
    v10 = 0;
    while ( v10 < v9 )
    {
      v11 = *(uchar *)(v1 + v10 + 16);
      v12 = 2 * v10++;
      if ( v11 == 32 )
        *(ushort *)(&v13 + v12) = -8163;
      else
        *(ushort *)(&v13 + v12) = v11;
    }
    result = Function_22449f0(*(uint *)(dword_2252CF4[400] + 20));
  }
  return result;
}

//----- (02238244) --------------------------------------------------------
int __fastcall Function_2238244(uchar *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  char v9;
  int v10;

  v10 = a4;
  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  v7 = *a1;
  Function_20dcdcc((int)&v9, 16, L"%3d.%3d.%3d.%3d");
  return Function_22449f0(*(uint *)(dword_2252CF4[400] + 20));
}

//----- (022382CC) --------------------------------------------------------
int Function_22382cc()
{
  int v0;
  int v1;
  int v2;
  int v3;
  uint *v4;
  int result;
  int v6;

  v0 = Function_20bd104(LOWORD(dword_2252CF4[399]), 29);
  v1 = 52 - Function_20bd140(LOWORD(dword_2252CF4[399]), 29);
  if ( *(uint *)(dword_2252CF4[400] + 52) )
  {
    if ( v0 )
      v6 = 256;
    else
      v6 = 38;
    **(uint **)(dword_2252CF4[400] + 52) = **(uint **)(dword_2252CF4[400] + 52) & 0xFE00FF00 | (uchar)v1 | (v6 << 16) & 0x1FFFFFF;
  }
  v2 = v1;
  v3 = 0;
  do
  {
    v4 = *(uint **)(dword_2252CF4[400] + 4 * v3++ + 24);
    *v4 = *v4 & 0xFE00FF00 | (uchar)v2 | ((*v4 & 0x1FF0000) >> 16 << 16) & 0x1FFFFFF;
    v2 += 29;
  }
  while ( v3 < 5 );
  if ( v0 > 2 )
    **(uint **)(dword_2252CF4[400] + 44) = **(uint **)(dword_2252CF4[400] + 44) & 0xFE00FF00 | 0x1000000;
  else
    **(uint **)(dword_2252CF4[400] + 44) = **(uint **)(dword_2252CF4[400] + 44) & 0xFE00FF00 | (v1 + 29 * (2 - v0)) & 0xFF | ((**(uint **)(dword_2252CF4[400] + 44) & 0x1FF0000u) >> 16 << 16) & 0x1FFFFFF;
  if ( v0 < 2 || v0 > 6 )
    **(uint **)(dword_2252CF4[400] + 48) = **(uint **)(dword_2252CF4[400] + 48) & 0xFE00FF00 | 0x1000000;
  else
    **(uint **)(dword_2252CF4[400] + 48) = **(uint **)(dword_2252CF4[400] + 48) & 0xFE00FF00 | (v1 + 29 * (6 - v0)) & 0xFF | ((**(uint **)(dword_2252CF4[400] + 48) & 0x1FF0000u) >> 16 << 16) & 0x1FFFFFF;
  result = dword_2252CF4[400];
  *(uchar *)(dword_2252CF4[400] + 68) = 1;
  return result;
}

//----- (022384DC) --------------------------------------------------------
int Function_22384dc()
{
  int v1;
  int v2;
  bool v3;
  int v4;
  int v5;
  short v6;
  int v7;
  int v8;
  short v9;
  short *v10;
  int v11;
  short v12;
  short v13;
  short v14;
  short v15;

  if ( !Function_22455b8(&dword_2249734) )
    return 14;
  v1 = Function_20bd104(LOWORD(dword_2252CF4[399]), 29);
  v12 = 204;
  v13 = 52;
  v2 = 0;
  v14 = 28;
  v15 = 24;
  do
  {
    v3 = v1 == 2;
    if ( v1 != 2 )
      v3 = v1 == 6;
    if ( !v3 && Function_2245750(&v12) )
      return *((uchar *)dword_22493B8 + v1);
    ++v2;
    v13 += 29;
    ++v1;
  }
  while ( v2 < 4 );
  v4 = Function_20bd104(LOWORD(dword_2252CF4[399]), 29);
  v5 = 0;
  while ( v4 != 2 )
  {
    ++v5;
    ++v4;
    if ( v5 >= 4 )
      goto LABEL_17;
  }
  v6 = 29 * v5;
  v12 = 192;
  v14 = 44;
  v15 = 24;
  v13 = 29 * v5 + 52;
  if ( Function_2245750(&v12) )
    return 2;
  v12 = 143;
  v14 = 44;
  v15 = 24;
  v13 = v6 + 52;
  if ( Function_2245750(&v12) )
    return 3;
LABEL_17:
  v7 = Function_20bd104(LOWORD(dword_2252CF4[399]), 29);
  v8 = 0;
  while ( v7 != 6 )
  {
    ++v8;
    ++v7;
    if ( v8 >= 4 )
      goto LABEL_24;
  }
  v9 = 29 * v8;
  v12 = 192;
  v14 = 44;
  v15 = 24;
  v13 = 29 * v8 + 52;
  if ( Function_2245750(&v12) )
    return 7;
  v12 = 143;
  v14 = 44;
  v15 = 24;
  v13 = v9 + 52;
  if ( Function_2245750(&v12) )
    return 8;
LABEL_24:
  v10 = &word_2249366;
  v11 = 0;
  do
  {
    if ( Function_22455b8(v10) )
      return v11 + 11;
    ++v11;
    v10 += 4;
  }
  while ( v11 < 3 );
  return 14;
}

//----- (02238750) --------------------------------------------------------
int __fastcall Function_2238750(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_20bd104(LOWORD(dword_2252CF4[399]), 29);
  v3 = 0;
  do
  {
    if ( v2 == v1 )
      return v3;
    ++v3;
    ++v2;
  }
  while ( v3 < 4 );
  return -1;
}

//----- (02238794) --------------------------------------------------------
int __fastcall Function_2238794(int a1)
{
  return Function_20bd104(LOWORD(dword_2252CF4[399]), 29) + a1;
}

//----- (022387B8) --------------------------------------------------------
int __fastcall Function_22387b8(int a1)
{
  int v1;
  short v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;

  v1 = a1;
  Function_223d378(a1);
  Function_222baf4();
  if ( LOWORD(dword_2252CF4[399]) <= 6u )
    v2 = 0;
  else
    v2 = LOWORD(dword_2252CF4[399]) - 6;
  LOWORD(dword_2252CF4[399]) = v2;
  v3 = Function_20bd140(LOWORD(dword_2252CF4[399]), 29);
  v4 = v3;
  if ( v3 == 23 )
    return Function_2237ba8();
  if ( v3 > 23 )
  {
    v4 = 0;
    LOWORD(dword_2252CF4[399]) += 29 - v3;
  }
  result = Function_22382cc();
  if ( !v4 )
  {
    v6 = Function_223d354(55 * LOWORD(dword_2252CF4[399]) / 145);
    v7 = Function_223d360(v6);
    Function_2238a80(v7);
    *(uint *)(dword_2252CF4[400] + 56) = 0;
    result = Function_22463ac(0, v1);
  }
  return result;
}

//----- (02238880) --------------------------------------------------------
int __fastcall Function_2238880(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;

  v1 = a1;
  Function_223d378(a1);
  Function_222baf4();
  LOWORD(dword_2252CF4[399]) += 6;
  v2 = Function_20bd140(LOWORD(dword_2252CF4[399]), 29);
  if ( v2 >= 6 )
    return Function_22382cc();
  LOWORD(dword_2252CF4[399]) -= v2;
  Function_2237ba8();
  v4 = Function_223d354(55 * LOWORD(dword_2252CF4[399]) / 145);
  v5 = Function_223d360(v4);
  Function_2238a80(v5);
  *(uint *)(dword_2252CF4[400] + 56) = 0;
  return Function_22463ac(0, v1);
}

//----- (02238924) --------------------------------------------------------
int *Function_2238924()
{
  int *result;
  int v1;
  int v2;
  int v3;
  int v4;

  result = &dword_2252CF4[398];
  if ( *(uchar *)(dword_2252CF4[400] + 68) )
  {
    v1 = Function_20bd104(LOWORD(dword_2252CF4[399]), 29);
    v2 = Function_20bd140(LOWORD(dword_2252CF4[399]), 29);
    v3 = ((v2 - 51) << 16) & 0x1FF0000;
    v4 = v2 - 51 + *((uchar *)dword_22493C4 + v1);
    REG_BG0HOFS = v3;
    REG_BG2HOFS = (v4 << 16) & 0x1FF0000;
    result = (int *)dword_2252CF4[400];
    *(uchar *)(dword_2252CF4[400] + 68) = 0;
  }
  return result;
}

//----- (022389A8) --------------------------------------------------------
int __fastcall Function_22389a8(int a1, int a2, int a3, int a4)
{
  char *v4;
  char *v5;
  int v6;
  char v7;
  char v8;
  int v9;
  short v11;
  char v12[16];
  int v13;

  v13 = a4;
  v4 = &byte_22492F4;
  v5 = v12;
  v6 = 7;
  do
  {
    v7 = *v4;
    v8 = v4[1];
    v4 += 2;
    *v5 = v7;
    v5[1] = v8;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  v9 = (uchar)v12[LOBYTE(dword_2252CF4[398])];
  if ( v9 >= 3 )
    return Function_222b948(
             3,
             HIWORD(dword_2249368[2 * v9 + 5]),
             HIWORD(dword_2249380[2 * v9]),
             LOWORD(dword_2249380[2 * v9]));
  v11 = dword_2249380[2 * v9 + 1];
  return Function_222b948(
           1,
           HIWORD(dword_2249368[2 * v9 + 5]),
           HIWORD(dword_2249380[2 * v9]),
           (ushort)(LOWORD(dword_2249380[2 * v9]) + 29 * BYTE2(dword_2252CF4[398])));
}

//----- (02238A80) --------------------------------------------------------
int __fastcall Function_2238a80(int a1, int a2, int a3, int a4)
{
  uint v4;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = (uchar)(LOBYTE(dword_2252CF4[398]) - 11);
  if ( v4 <= 2 )
    return Function_22389a8(v4, a2, a3, a4);
  v6 = Function_223ddcc(v4);
  v7 = BYTE2(dword_2252CF4[398]) + Function_20bd104(LOWORD(dword_2252CF4[399]), 29);
  if ( v7 == 2 )
  {
    if ( *(uchar *)(v6 + 245) )
    {
      v9 = 2;
      LOBYTE(dword_2252CF4[398]) = 2;
    }
    else
    {
      v9 = 3;
      LOBYTE(dword_2252CF4[398]) = 3;
    }
  }
  else if ( v7 == 6 )
  {
    if ( *(uchar *)(v6 + 246) )
    {
      v9 = 7;
      LOBYTE(dword_2252CF4[398]) = 7;
    }
    else
    {
      v9 = 8;
      LOBYTE(dword_2252CF4[398]) = 8;
    }
  }
  else
  {
    v9 = *((uchar *)dword_22493B8 + v7);
    LOBYTE(dword_2252CF4[398]) = *((uchar *)dword_22493B8 + v7);
  }
  return Function_22389a8(v9, (int)&dword_2252CF4[398], v7, v8);
}

//----- (02238B30) --------------------------------------------------------
int __fastcall Function_2238b30(int a1)
{
  int v1;
  int v2;
  int v3;

  LOBYTE(dword_2252CF4[398]) = a1;
  v1 = Function_2238750(*((uchar *)dword_22493D0 + a1));
  BYTE2(dword_2252CF4[398]) = v1;
  return Function_22389a8(v1, (int)&dword_2252CF4[398], v2, v3);
}

//----- (02238B60) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2238BFC for case 0"

//----- (02238BB4) --------------------------------------------------------
void Function_2238bb4()
{
  JUMPOUT(&loc_2238BFC);
}

//----- (02238BB8) --------------------------------------------------------
void Function_2238bb8()
{
  JUMPOUT(&loc_2238C38);
}

//----- (02238BBC) --------------------------------------------------------
void Function_2238bbc()
{
  JUMPOUT(&loc_2238CA0);
}

//----- (02238BC0) --------------------------------------------------------
void __fastcall Function_2238bc0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  *(uchar *)(dword_2252CF4[400] + 66) = a3;
  if ( v4 == 1 )
  {
    LOBYTE(dword_2252CF4[398]) = 10;
    BYTE2(dword_2252CF4[398]) = 3;
    LOWORD(dword_2252CF4[399]) = 145;
    Function_2237ba8();
    Function_223d354(55);
  }
  else
  {
    if ( v4 == 3 )
    {
      if ( *(uchar *)(dword_2252CF4[400] + 71) )
        JUMPOUT(__CS__, v9);
      Function_223e994(9);
      *(uchar *)(dword_2252CF4[400] + 71) = 1;
      JUMPOUT(__CS__, v9);
    }
    if ( a3 == 12 )
      LOBYTE(dword_2252CF4[398]) = 13;
    else
      LOBYTE(dword_2252CF4[398]) = 12;
  }
  if ( v3 == 2 )
    JUMPOUT(__CS__, v9);
  v5 = Function_223e994(8);
  if ( v3 )
    JUMPOUT(__CS__, v9);
  Function_2238a80(v5, v6, v7, v8);
  JUMPOUT(__CS__, v9);
}

//----- (02238E50) --------------------------------------------------------
int Function_2238e50()
{
  int v0;

  v0 = *((uchar *)&dword_22492D4 + LOBYTE(dword_2252CF4[398]) - 11);
  return Function_223d154(*(uint *)(dword_2252CF4[400] + 16));
}

//----- (02238E84) --------------------------------------------------------
int Function_2238e84()
{
  int v0;
  int result;

  v0 = 0;
  do
  {
    result = *(uchar *)(dword_2252CF4[400] + v0 + 4);
    if ( *(uchar *)(dword_2252CF4[400] + v0 + 4) )
    {
      *(uchar *)(dword_2252CF4[400] + v0 + 4) = result - 1;
      result = *(uchar *)(dword_2252CF4[400] + v0 + 4);
      if ( !*(uchar *)(dword_2252CF4[400] + v0 + 4) )
        result = Function_2237ba8();
    }
    ++v0;
  }
  while ( v0 < 4 );
  return result;
}

//----- (02238ED8) --------------------------------------------------------
int __fastcall Function_2238ed8(int a1, int a2, int a3, int a4)
{
  char *v4;
  int v5;
  int result;
  char v7;
  char v8;
  char v9;
  char v10;
  int varg_r3;

  varg_r3 = a4;
  v7 = 2;
  v8 = 3;
  v4 = &v7;
  v5 = 0;
  v9 = 7;
  v10 = 8;
  while ( 1 )
  {
    result = (uchar)*v4;
    if ( LOBYTE(dword_2252CF4[398]) == result )
      break;
    ++v5;
    ++v4;
    if ( v5 >= 4 )
      return result;
  }
  *(uchar *)(dword_2252CF4[400] + v5 + 4) = 20;
  if ( v5 & 1 )
    result = dword_2252CF4[400] + v5 - 1;
  else
    result = dword_2252CF4[400] + v5 + 1;
  *(uchar *)(result + 4) = 0;
  return result;
}

//----- (02238F9C) --------------------------------------------------------
int __fastcall Function_2238f9c(int a1)
{
  uchar *v1;
  int result;
  int v3;
  int v4;

  v1 = (uchar *)Function_223ddcc(a1);
  if ( !v1[64] )
    return 0;
  if ( !v1[246] && !Function_20a2cac(v1 + 200) && !Function_20a2cac(v1 + 204) )
    return 0;
  if ( v1[245] )
    goto LABEL_17;
  if ( !Function_20a2cac(v1 + 192) )
    return 0;
  if ( !Function_20a2cac(v1 + 196) )
    return 0;
  if ( Function_20a2c30(v1 + 192, (int)(v1 + 240), v3, v4) )
LABEL_17:
    result = 1;
  else
    result = 0;
  return result;
}

//----- (0223903C) --------------------------------------------------------
int __fastcall Function_223903c(int a1)
{
  int result;
  int v2;

  result = Function_223ffb8(a1);
  if ( !result )
  {
    v2 = Function_223e994(6);
    Function_223ff74(v2);
    Function_223d1bc(*(uint *)(dword_2252CF4[400] + 12));
    result = Function_222f6c4((int)Function_223907c);
  }
  return result;
}

//----- (0223907C) --------------------------------------------------------
int Function_223907c()
{
  int result;

  result = Function_223ffcc();
  if ( !result )
    result = Function_222f6c4((int)Function_22370b4);
  return result;
}

//----- (0223909C) --------------------------------------------------------
char __fastcall Function_223909c(char result)
{
  BYTE1(dword_2252CF4[398]) = result;
  return result;
}

//----- (022390AC) --------------------------------------------------------
int Function_22390ac()
{
  int v0;

  Function_22390cc();
  v0 = Function_222bc1c();
  Function_223e2d0(v0);
  return Function_222f6c4((int)Function_2239160);
}

//----- (022390CC) --------------------------------------------------------
int __fastcall Function_22390cc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  Function_222b700("char/jbBgStep3.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, a3, a4);
  Function_222b700("char/ybBgStep3.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v4, v5);
  Function_222b700("char/xb4None.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v6, v7);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02239160) --------------------------------------------------------
int Function_2239160()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 20, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 20);
  return Function_222f6c4((int)Function_22391b4);
}

//----- (022391B4) --------------------------------------------------------
int Function_22391b4()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_223fc48(68);
      result = Function_222f6c4((int)Function_2239204);
    }
  }
  return result;
}

//----- (02239204) --------------------------------------------------------
int Function_2239204()
{
  int v0;
  int v1;
  int result;

  v0 = Function_223922c();
  v1 = Function_2239230(v0);
  result = Function_223ffcc(v1);
  if ( !result )
    result = Function_222f6c4((int)Function_2239234);
  return result;
}

//----- (0223922C) --------------------------------------------------------
void Function_223922c()
{
  ;
}

//----- (02239230) --------------------------------------------------------
void Function_2239230()
{
  ;
}

//----- (02239234) --------------------------------------------------------
int Function_2239234()
{
  Function_2244194(3, 1, 1, 8);
  Function_2244194(3, 0, 20, 8);
  return Function_222f6c4((int)Function_2239270);
}

//----- (02239270) --------------------------------------------------------
int Function_2239270()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b668();
      Function_2244cd8(1, 1);
      Function_2244cd8(0, 20);
      Function_222f6d4(2, 1);
      result = Function_222f6c4((int)Function_223a6b4);
    }
  }
  return result;
}

//----- (022392CC) --------------------------------------------------------
BOOL Function_22392cc()
{
  return (word_27FFFA8 & 0x8000) >> 15 != 0;
}

//----- (022392EC) --------------------------------------------------------
int Function_22392ec()
{
  LOBYTE(dword_2252CF4[401]) = 0;
  Function_2239328();
  Function_222bc1c();
  Function_222b7c8(37);
  Function_222ad34(1);
  return Function_222f6c4((int)Function_22393a8);
}

//----- (02239328) --------------------------------------------------------
int __fastcall Function_2239328(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/xb4Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (022393A8) --------------------------------------------------------
int Function_22393a8()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_22393dc);
}

//----- (022393DC) --------------------------------------------------------
int Function_22393dc()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(0);
  if ( !result )
  {
    Function_222b790(1, v1, v2, v3);
    result = Function_222f6c4((int)Function_2239408);
  }
  return result;
}

//----- (02239408) --------------------------------------------------------
int Function_2239408()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_2239430);
  }
  return result;
}

//----- (02239430) --------------------------------------------------------
int Function_2239430()
{
  uint v0;
  int v1;
  int v2;
  int v3;

  v0 = OS_Sleep(0xAu);
  v1 = Function_2239614(v0);
  v2 = Function_2239450(v1);
  v3 = Function_2239488(v2);
  return Function_223948c(v3);
}

//----- (02239450) --------------------------------------------------------
int Function_2239450()
{
  int result;

  if ( Function_2245470(2) )
    return Function_222b048(0);
  result = Function_22392cc();
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (02239488) --------------------------------------------------------
void Function_2239488()
{
  ;
}

//----- (0223948C) --------------------------------------------------------
int Function_223948c()
{
  int result;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e9fc();
    Function_223e994(7);
    result = Function_222f6c4((int)Function_22394b8);
  }
  return result;
}

//----- (022394B8) --------------------------------------------------------
int Function_22394b8()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_22394d8);
}

//----- (022394D8) --------------------------------------------------------
int Function_22394d8()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    if ( !LOBYTE(dword_2252CF4[401]) )
      Function_222b004();
    if ( !LOBYTE(dword_2252CF4[401]) )
      Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_223954c);
  }
  return result;
}

//----- (0223954C) --------------------------------------------------------
int Function_223954c()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    if ( LOBYTE(dword_2252CF4[401]) || (result = Function_2244170(1)) == 0 )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_222ae04();
        Function_22448e0(0);
        if ( !LOBYTE(dword_2252CF4[401]) )
        {
          Function_222b668();
          Function_2244cd8(1, 1);
        }
        Function_2244cd8(0, 21);
        if ( LOBYTE(dword_2252CF4[401]) )
        {
          Function_222f6d4(0, 0);
          result = Function_222f6c4((int)Function_2239704);
        }
        else
        {
          Function_222fda8();
          Function_222f6d4(2, 1);
          result = Function_222f6c4((int)Function_223b3f4);
        }
      }
    }
  }
  return result;
}

//----- (02239614) --------------------------------------------------------
int Function_2239614()
{
  int result;

  result = Function_222fdcc();
  if ( result == 2 )
  {
    LOBYTE(dword_2252CF4[401]) = 1;
    result = Function_222f6c4((int)Function_22394b8);
  }
  else if ( result == 4 )
  {
    LOBYTE(dword_2252CF4[401]) = 0;
    Function_223e9fc();
    Function_223e994(9);
    Function_223fc48(13);
    Function_222b0c0();
    result = Function_222f6c4((int)Function_2239698);
  }
  return result;
}

//----- (02239698) --------------------------------------------------------
int __fastcall Function_2239698(int a1)
{
  int result;
  int v2;

  result = Function_223ffb8(a1);
  if ( !result )
  {
    v2 = Function_223e994(6);
    Function_223ff74(v2);
    result = Function_222f6c4((int)Function_22396c4);
  }
  return result;
}

//----- (022396C4) --------------------------------------------------------
int __fastcall Function_22396c4(int a1)
{
  int result;

  result = Function_223ffcc(a1);
  if ( !result )
    result = Function_222f6c4((int)Function_22394b8);
  return result;
}

//----- (022396E4) --------------------------------------------------------
BOOL Function_22396e4()
{
  return (word_27FFFA8 & 0x8000) >> 15 != 0;
}

//----- (02239704) --------------------------------------------------------
int Function_2239704()
{
  LOBYTE(dword_2252CF4[402]) = 0;
  Function_2239740();
  Function_222bc1c();
  Function_222b7c8(42);
  Function_222ad34(2);
  return Function_222f6c4((int)Function_22397c0);
}

//----- (02239740) --------------------------------------------------------
int __fastcall Function_2239740(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/xb4Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (022397C0) --------------------------------------------------------
int Function_22397c0()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_22397f4);
}

//----- (022397F4) --------------------------------------------------------
int Function_22397f4()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(0);
  if ( !result )
  {
    Function_222b790(1, v1, v2, v3);
    result = Function_222f6c4((int)Function_2239820);
  }
  return result;
}

//----- (02239820) --------------------------------------------------------
int Function_2239820()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_2239848);
  }
  return result;
}

//----- (02239848) --------------------------------------------------------
int Function_2239848()
{
  uint v0;
  int v1;
  int v2;
  int v3;

  v0 = OS_Sleep(0xAu);
  v1 = Function_2239a10(v0);
  v2 = Function_2239868(v1);
  v3 = Function_22398a0(v2);
  return Function_22398a4(v3);
}

//----- (02239868) --------------------------------------------------------
int Function_2239868()
{
  int result;

  if ( Function_2245470(2) )
    return Function_222b048(0);
  result = Function_22396e4();
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (022398A0) --------------------------------------------------------
void Function_22398a0()
{
  ;
}

//----- (022398A4) --------------------------------------------------------
int Function_22398a4()
{
  int result;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e9fc();
    Function_223e994(7);
    result = Function_222f6c4((int)Function_22398d0);
  }
  return result;
}

//----- (022398D0) --------------------------------------------------------
int Function_22398d0()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_22398f0);
}

//----- (022398F0) --------------------------------------------------------
int Function_22398f0()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222b004();
    if ( !LOBYTE(dword_2252CF4[402]) )
      Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_2239954);
  }
  return result;
}

//----- (02239954) --------------------------------------------------------
int Function_2239954()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    if ( LOBYTE(dword_2252CF4[402]) || (result = Function_2244170(1)) == 0 )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_222ae04();
        Function_22448e0(0);
        if ( !LOBYTE(dword_2252CF4[402]) )
        {
          Function_222b668();
          Function_2244cd8(1, 1);
        }
        Function_222fda8();
        if ( LOBYTE(dword_2252CF4[402]) )
        {
          Function_222f6d4(0, 0);
          result = Function_222f6c4((int)Function_2239b34);
        }
        else
        {
          Function_222f6d4(2, 1);
          result = Function_222f6c4((int)Function_223b3f4);
        }
      }
    }
  }
  return result;
}

//----- (02239A10) --------------------------------------------------------
int Function_2239a10()
{
  int result;
  int v1;
  int v2;
  int v3;
  int v4;

  result = Function_222fdcc();
  switch ( result )
  {
    case 3:
      LOBYTE(dword_2252CF4[402]) = 1;
      v1 = Function_223e9fc();
      Function_222fe88(v1, v2, v3, v4);
      result = Function_222f6c4((int)Function_22398d0);
      break;
    case 4:
      LOBYTE(dword_2252CF4[402]) = 0;
      Function_223e9fc();
      Function_223e994(9);
      Function_223fc48(13);
      Function_222b0c0();
      result = Function_222f6c4((int)Function_2239ae8);
      break;
    case 5:
      LOBYTE(dword_2252CF4[402]) = 0;
      Function_223e9fc();
      Function_223e994(18);
      Function_223fc48(14);
      Function_222b0c0();
      result = Function_222f6c4((int)Function_2239ae8);
      break;
  }
  return result;
}

//----- (02239AE8) --------------------------------------------------------
int __fastcall Function_2239ae8(int a1)
{
  int result;
  int v2;

  result = Function_223ffb8(a1);
  if ( !result )
  {
    v2 = Function_223e994(6);
    Function_223ff74(v2);
    result = Function_222f6c4((int)Function_2239b14);
  }
  return result;
}

//----- (02239B14) --------------------------------------------------------
int __fastcall Function_2239b14(int a1)
{
  int result;

  result = Function_223ffcc(a1);
  if ( !result )
    result = Function_222f6c4((int)Function_22398d0);
  return result;
}

//----- (02239B34) --------------------------------------------------------
int Function_2239b34()
{
  LOBYTE(dword_2252CF4[403]) = 0;
  Function_2239b70();
  Function_222bc1c();
  Function_222b7c8(38);
  Function_223e994(16);
  return Function_222f6c4((int)Function_2239bf0);
}

//----- (02239B70) --------------------------------------------------------
int __fastcall Function_2239b70(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/xb4Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02239BF0) --------------------------------------------------------
int Function_2239bf0()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2239c24);
}

//----- (02239C24) --------------------------------------------------------
int Function_2239c24()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
    result = Function_222f6c4((int)Function_2239c48);
  return result;
}

//----- (02239C48) --------------------------------------------------------
int Function_2239c48()
{
  int v0;

  v0 = Function_2239d08();
  return Function_2239c58(v0);
}

//----- (02239C58) --------------------------------------------------------
void Function_2239c58()
{
  ;
}

//----- (02239C5C) --------------------------------------------------------
int Function_2239c5c()
{
  Function_2244194(3, 1, 1, 8);
  Function_2244194(3, 0, 21, 8);
  return Function_222f6c4((int)Function_2239c98);
}

//----- (02239C98) --------------------------------------------------------
int Function_2239c98()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_22448e0(0);
      Function_222b668();
      Function_2244cd8(1, 1);
      Function_2244cd8(0, 21);
      Function_222f6d4(0, 0);
      Function_222f710(0, 1);
      result = Function_222f6c4((int)Function_223c21c);
    }
  }
  return result;
}

//----- (02239D08) --------------------------------------------------------
int *Function_2239d08()
{
  int *result;

  result = &dword_2252CF4[403];
  ++LOBYTE(dword_2252CF4[403]);
  if ( ((LOBYTE(dword_2252CF4[403]) + 1) & 0xFFu) >= 0x78 )
    result = (int *)Function_222f6c4((int)Function_2239c5c);
  return result;
}

//----- (02239D3C) --------------------------------------------------------
BOOL Function_2239d3c()
{
  return (word_27FFFA8 & 0x8000) >> 15 != 0;
}

//----- (02239D5C) --------------------------------------------------------
int Function_2239d5c()
{
  int v0;
  int v1;
  int v2;

  LOBYTE(dword_2252CF4[404]) = 0;
  Function_2239db8();
  Function_222bc1c();
  Function_222b594(55, -1, 0);
  Function_222b740(2, v0, v1, v2);
  Function_222b7c8(36);
  Function_222ad34(0);
  Function_223e994(11);
  return Function_222f6c4((int)Function_2239e60);
}

//----- (02239DB8) --------------------------------------------------------
int __fastcall Function_2239db8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  Function_222b700("char/jbBgStep3.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, a3, a4);
  Function_222b700("char/ybBgStep3.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v4, v5);
  Function_222b700("char/xb4Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v6, v7);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (02239E60) --------------------------------------------------------
int Function_2239e60()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_2239eb4);
}

//----- (02239EB4) --------------------------------------------------------
int Function_2239eb4()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222fd3c();
      Function_222b790(1, v1, v2, v3);
      result = Function_222f6c4((int)Function_2239ef4);
    }
  }
  return result;
}

//----- (02239EF4) --------------------------------------------------------
int Function_2239ef4()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_2239f1c);
  }
  return result;
}

//----- (02239F1C) --------------------------------------------------------
int Function_2239f1c()
{
  uint v0;
  int v1;
  int v2;
  int v3;

  v0 = OS_Sleep(0xAu);
  v1 = Function_223a100(v0);
  v2 = Function_2239f3c(v1);
  v3 = Function_2239f74(v2);
  return Function_2239f78(v3);
}

//----- (02239F3C) --------------------------------------------------------
int Function_2239f3c()
{
  int result;

  if ( Function_2245470(2) )
    return Function_222b048(0);
  result = Function_2239d3c();
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (02239F74) --------------------------------------------------------
void Function_2239f74()
{
  ;
}

//----- (02239F78) --------------------------------------------------------
int Function_2239f78()
{
  int result;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e9fc();
    Function_223e994(7);
    result = Function_222f6c4((int)Function_2239fa4);
  }
  return result;
}

//----- (02239FA4) --------------------------------------------------------
int Function_2239fa4()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_2239fc4);
}

//----- (02239FC4) --------------------------------------------------------
int Function_2239fc4()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    if ( !LOBYTE(dword_2252CF4[404]) )
      Function_222b004();
    if ( !LOBYTE(dword_2252CF4[404]) )
      Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 20, 8);
    result = Function_222f6c4((int)Function_223a038);
  }
  return result;
}

//----- (0223A038) --------------------------------------------------------
int Function_223a038()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    if ( LOBYTE(dword_2252CF4[404]) || (result = Function_2244170(1)) == 0 )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_222ae04();
        Function_22448e0(0);
        if ( !LOBYTE(dword_2252CF4[404]) )
        {
          Function_222b668();
          Function_2244cd8(1, 1);
        }
        Function_2244cd8(0, 21);
        if ( LOBYTE(dword_2252CF4[404]) )
        {
          Function_222f6d4(0, 0);
          result = Function_222f6c4((int)Function_22392ec);
        }
        else
        {
          Function_222fda8();
          Function_222f6d4(2, 1);
          result = Function_222f6c4((int)Function_223b3f4);
        }
      }
    }
  }
  return result;
}

//----- (0223A100) --------------------------------------------------------
int Function_223a100()
{
  int result;

  result = Function_222fdcc();
  if ( result == 1 )
  {
    LOBYTE(dword_2252CF4[404]) = 1;
    result = Function_222f6c4((int)Function_2239fa4);
  }
  else if ( result == 4 )
  {
    LOBYTE(dword_2252CF4[404]) = 0;
    Function_223e9fc();
    Function_223e994(9);
    Function_223fc48(13);
    Function_222b0c0();
    result = Function_222f6c4((int)Function_223a184);
  }
  return result;
}

//----- (0223A184) --------------------------------------------------------
int __fastcall Function_223a184(int a1)
{
  int result;
  int v2;

  result = Function_223ffb8(a1);
  if ( !result )
  {
    v2 = Function_223e994(6);
    Function_223ff74(v2);
    result = Function_222f6c4((int)Function_223a1b0);
  }
  return result;
}

//----- (0223A1B0) --------------------------------------------------------
int __fastcall Function_223a1b0(int a1)
{
  int result;

  result = Function_223ffcc(a1);
  if ( !result )
    result = Function_222f6c4((int)Function_2239fa4);
  return result;
}

//----- (0223A1D0) --------------------------------------------------------
int Function_223a1d0()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;

  HIWORD(dword_2252CF4[405]) = 0;
  LOBYTE(dword_2252CF4[405]) = 0;
  Function_223a238();
  Function_222b594(51, -1, 0);
  Function_222bc1c();
  Function_222b740(2, v0, v1, v2);
  Function_222b7c8(51);
  v3 = Function_222ad34(0);
  v4 = Function_223d8dc(v3);
  Function_223d944(v4);
  Function_223e994(10);
  return Function_222f6c4((int)Function_223a2e0);
}

//----- (0223A238) --------------------------------------------------------
int __fastcall Function_223a238(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  Function_222b700("char/jbBgStep3.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, a3, a4);
  Function_222b700("char/ybBgStep3.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v4, v5);
  Function_222b700("char/xb4Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v6, v7);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (0223A2E0) --------------------------------------------------------
int Function_223a2e0()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_223a334);
}

//----- (0223A334) --------------------------------------------------------
int Function_223a334()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(1, v1, v2, v3);
      result = Function_222f6c4((int)Function_223a370);
    }
  }
  return result;
}

//----- (0223A370) --------------------------------------------------------
int Function_223a370()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_223a398);
  }
  return result;
}

//----- (0223A398) --------------------------------------------------------
int Function_223a398()
{
  int v0;
  int v1;
  int v2;

  v0 = Function_223a4d8();
  v1 = Function_223a4fc(v0);
  v2 = Function_223a500(v1);
  return Function_223a3b0(v2);
}

//----- (0223A3B0) --------------------------------------------------------
int __fastcall Function_223a3b0(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  ++HIWORD(dword_2252CF4[405]);
  result = HIWORD(dword_2252CF4[405]);
  if ( HIWORD(dword_2252CF4[405]) >= 0x12Cu )
  {
    Function_223e9fc();
    v5 = Function_223dae0(&v8);
    if ( v5 )
    {
      v6 = 0;
      if ( v5 > 0 )
      {
        v7 = v8;
        do
        {
          if ( *(uchar *)(v7 + 40) != 2 )
            break;
          ++v6;
          v7 += 42;
        }
        while ( v6 < v5 );
      }
      if ( v6 == v5 )
      {
        LOBYTE(dword_2252CF4[405]) = 3;
        Function_223fc48(14);
        Function_223e994(18);
        Function_222b0c0();
        result = Function_222f6c4((int)Function_223a668);
      }
      else
      {
        LOBYTE(dword_2252CF4[405]) = 1;
        Function_223e994(15);
        result = Function_222f6c4((int)Function_223a52c);
      }
    }
    else
    {
      LOBYTE(dword_2252CF4[405]) = 2;
      Function_223fc48(15);
      Function_223e994(18);
      Function_222b0c0();
      result = Function_222f6c4((int)Function_223a668);
    }
  }
  return result;
}

//----- (0223A4D8) --------------------------------------------------------
int Function_223a4d8()
{
  int result;

  result = Function_2245470(2);
  if ( result )
  {
    Function_223e9fc();
    result = Function_222b048(0);
  }
  return result;
}

//----- (0223A4FC) --------------------------------------------------------
void Function_223a4fc()
{
  ;
}

//----- (0223A500) --------------------------------------------------------
int Function_223a500()
{
  int result;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e9fc();
    Function_223e994(7);
    result = Function_222f6c4((int)Function_223a52c);
  }
  return result;
}

//----- (0223A52C) --------------------------------------------------------
int Function_223a52c()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_223a54c);
}

//----- (0223A54C) --------------------------------------------------------
int Function_223a54c()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222b004();
    Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_223a59c);
  }
  return result;
}

//----- (0223A59C) --------------------------------------------------------
int Function_223a59c()
{
  int result;
  int v1;
  int v2;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      result = Function_222b07c();
      if ( result )
      {
        while ( !Function_223da44() )
          ;
        Function_222ae04();
        Function_22448e0(0);
        Function_222b668();
        Function_2244cd8(1, 1);
        Function_2244cd8(0, 21);
        if ( LOBYTE(dword_2252CF4[405]) == 1 )
        {
          Function_222f6d4(0, 1);
          Function_222f710(0, 0);
          result = Function_222f6c4((int)Function_2233818);
        }
        else
        {
          v1 = Function_223d910();
          v2 = Function_223ddcc(v1);
          Function_223e1f0(*(uchar *)(v2 + 244));
          Function_222f6d4(2, 1);
          result = Function_222f6c4((int)Function_223b3f4);
        }
      }
    }
  }
  return result;
}

//----- (0223A668) --------------------------------------------------------
int __fastcall Function_223a668(int a1)
{
  int result;
  int v2;

  result = Function_223ffb8(a1);
  if ( !result )
  {
    v2 = Function_223e994(6);
    Function_223ff74(v2);
    result = Function_222f6c4((int)Function_223a694);
  }
  return result;
}

//----- (0223A694) --------------------------------------------------------
int __fastcall Function_223a694(int a1)
{
  int result;

  result = Function_223ffcc(a1);
  if ( !result )
    result = Function_222f6c4((int)Function_223a52c);
  return result;
}

//----- (0223A6B4) --------------------------------------------------------
int Function_223a6b4()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v0 = Function_2245068(32, 4);
  dword_2252CF4[407] = v0;
  *(uchar *)(v0 + 29) = 0;
  Function_223a714();
  Function_222bbc0(1);
  Function_222b594(47, -1, 0);
  v4 = Function_222b740(0, v1, v2, v3);
  v5 = Function_223a824(v4);
  Function_223ae94(v5);
  return Function_222f6c4((int)Function_223a92c);
}

//----- (0223A714) --------------------------------------------------------
int __fastcall Function_223a714(int a1, int a2, int a3, int a4)
{
  const char *v4;
  char *v5;
  int v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int result;
  char v17;
  int v18;

  v18 = a4;
  v4 = "char/ybBgStep11.ncl.l";
  v5 = &v17;
  v6 = 11;
  do
  {
    v7 = *v4;
    v8 = v4[1];
    v4 += 2;
    *v5 = v7;
    v5[1] = v8;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  Function_222b700("char/ybObjWay.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadOBJPltt, 0, (int)v5);
  Function_222b700("char/jbBgStep1.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, v9, v10);
  Function_222b700("char/jbBgStep1.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v11, v12);
  Function_222b700("char/jb2Ap.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v13, v14);
  v15 = Function_222b6a0(&v17);
  *(uint *)dword_2252CF4[407] = Function_2243738(v15, 0, 4);
  Function_2244c84(1, 16);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (0223A824) --------------------------------------------------------
int Function_223a824()
{
  int v0;
  int v1;
  int result;

  v0 = 0;
  do
  {
    v1 = Function_223e1d8(v0);
    if ( v1 == 255 )
    {
      v1 = 3;
    }
    else
    {
      *(uint *)(dword_2252CF4[407] + 4 * v0 + 16) = Function_2243f8c(0, 17, 1);
      Function_2243cf4(
        *(uint *)(dword_2252CF4[407] + 4 * v0 + 16),
        -1,
        *(ushort *)&asc_22493FE[4 * (v0 + 3)],
        *(ushort *)&asc_22493FE[4 * (v0 + 3) + 2]);
      Function_2243de4(*(uint *)(dword_2252CF4[407] + 4 * v0 + 16), -1, 3);
    }
    *(uint *)(dword_2252CF4[407] + 4 * v0 + 4) = Function_2243f8c(0, *((uchar *)&dword_22493DC + v1), 1);
    Function_2243cf4(
      *(uint *)(dword_2252CF4[407] + 4 * v0 + 4),
      -1,
      *(ushort *)&asc_22493FE[4 * v0],
      *(ushort *)&asc_22493FE[4 * v0 + 2]);
    result = Function_2243de4(*(uint *)(dword_2252CF4[407] + 4 * v0++ + 4), -1, 3);
  }
  while ( v0 < 3 );
  return result;
}

//----- (0223A92C) --------------------------------------------------------
int Function_223a92c()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 20, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 20);
  return Function_222f6c4((int)Function_223a980);
}

//----- (0223A980) --------------------------------------------------------
int Function_223a980()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(0, v1, v2, v3);
      result = Function_222f6c4((int)Function_223a9bc);
    }
  }
  return result;
}

//----- (0223A9BC) --------------------------------------------------------
int Function_223a9bc()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    result = Function_223f084();
    if ( result != 1 )
    {
      Function_222b0a8();
      result = Function_222f6c4((int)Function_223a9f0);
    }
  }
  return result;
}

//----- (0223A9F0) --------------------------------------------------------
int Function_223a9f0()
{
  int v0;
  int v1;

  v0 = Function_223aa04();
  v1 = Function_223aaf8(v0);
  return Function_223aafc(v1);
}

//----- (0223AA04) --------------------------------------------------------
int Function_223aa04()
{
  int v0;
  uint v1;
  int result;

  v0 = 35951638;
  v1 = 0;
  do
  {
    if ( Function_22455b8(v0) )
    {
      Function_222b048(1);
      LOBYTE(dword_2252CF4[406]) = v1;
      return Function_223ae94(&dword_2252CF4[406]);
    }
    ++v1;
    v0 += 8;
  }
  while ( v1 < 7 );
  if ( Function_2245470(1) )
    return Function_222b048(1);
  if ( Function_2245470(2) )
    return Function_222b048(0);
  if ( Function_22454b0(64) )
    return Function_223af10(1);
  if ( Function_22454b0(128) )
    return Function_223af10(3);
  if ( Function_22454b0(32) )
    return Function_223af10(0);
  result = Function_22454b0(16);
  if ( result )
    result = Function_223af10(2);
  return result;
}

//----- (0223AAF8) --------------------------------------------------------
void Function_223aaf8()
{
  ;
}

//----- (0223AAFC) --------------------------------------------------------
int Function_223aafc()
{
  int result;
  int v1;
  int v2;
  int v3;
  int v4;

  result = Function_222b034();
  if ( !result )
  {
    v1 = Function_222f75c();
    if ( v1 )
    {
      if ( v1 == 1 )
      {
        Function_222b0c0();
        return Function_222f6c4((int)Function_222fee8);
      }
    }
    else
    {
      Function_223e994(7);
      *(uchar *)(dword_2252CF4[407] + 29) = 2;
    }
    return Function_222f6c4((int)Function_223ac30);
  }
  if ( result != 1 )
    return result;
  *(uchar *)(dword_2252CF4[407] + 29) = 1;
  if ( LOBYTE(dword_2252CF4[406]) < 4u )
  {
    if ( LOBYTE(dword_2252CF4[406]) <= 2u )
      Function_223e1f0(LOBYTE(dword_2252CF4[406]));
    v4 = Function_223e994(6);
    Function_223b324(v4);
    return Function_222f6c4((int)Function_223ac30);
  }
  if ( Function_223e1d8(LOBYTE(dword_2252CF4[406]) - 4) == 255 )
  {
    Function_223e994(9);
    result = Function_222b068(-1);
  }
  else
  {
    Function_223e994(6);
    v2 = *((char *)dword_2249488 + Function_222f74c());
    v3 = Function_223fc48(70);
    Function_223b104(v3);
    Function_222b0c0();
    result = Function_222f6c4((int)Function_223b194);
  }
  return result;
}

//----- (0223AC30) --------------------------------------------------------
int Function_223ac30()
{
  if ( *(uchar *)(dword_2252CF4[407] + 29) == 2 )
    Function_223ef7c();
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_223ac6c);
}

//----- (0223AC6C) --------------------------------------------------------
int Function_223ac6c()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    if ( *(uchar *)(dword_2252CF4[407] + 29) == 1
      && (LOBYTE(dword_2252CF4[406]) == 3
       || *(uchar *)(Function_223ddcc(LOBYTE(dword_2252CF4[406])) + 231) != 255) )
    {
      Function_222b004();
    }
    Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 20, 8);
    result = Function_222f6c4((int)Function_223acf0);
  }
  return result;
}

//----- (0223ACF0) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x223AE0C for case 0"

//----- (0223ADFC) --------------------------------------------------------
void Function_223adfc()
{
  JUMPOUT(&loc_223AE0C);
}

//----- (0223AE00) --------------------------------------------------------
void Function_223ae00()
{
  JUMPOUT(&loc_223AE0C);
}

//----- (0223AE04) --------------------------------------------------------
void Function_223ae04()
{
  JUMPOUT(&loc_223AE0C);
}

//----- (0223AE08) --------------------------------------------------------
void Function_223ae08()
{
  int v0;

  Function_222f6d4(2, 1);
  Function_222f6c4((int)Function_223c67c);
  Function_224508c(&dword_2252CF4[407]);
  JUMPOUT(__CS__, v0);
}

//----- (0223AE94) --------------------------------------------------------
int Function_223ae94()
{
  int result;

  if ( LOBYTE(dword_2252CF4[406]) >= 4u )
    result = Function_222b948(
               0,
               HIWORD(dword_2249434[2 * LOBYTE(dword_2252CF4[406]) + 6]),
               HIWORD(dword_2249450[2 * LOBYTE(dword_2252CF4[406])]),
               LOWORD(dword_2249450[2 * LOBYTE(dword_2252CF4[406])]));
  else
    result = Function_222ba04(
               HIWORD(dword_2249434[2 * LOBYTE(dword_2252CF4[406]) + 6]),
               HIWORD(dword_2249450[2 * LOBYTE(dword_2252CF4[406])]),
               LOWORD(dword_2249450[2 * LOBYTE(dword_2252CF4[406])]),
               LOWORD(dword_2249454[2 * LOBYTE(dword_2252CF4[406])]));
  return result;
}

//----- (0223AF10) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x223AF48 for case 0"

//----- (0223AF2C) --------------------------------------------------------
void Function_223af2c()
{
  JUMPOUT(&loc_223AF48);
}

//----- (0223AF30) --------------------------------------------------------
void Function_223af30()
{
  JUMPOUT(&loc_223AF88);
}

//----- (0223AF34) --------------------------------------------------------
void Function_223af34()
{
  JUMPOUT(&loc_223AFC8);
}

//----- (0223AF38) --------------------------------------------------------
void Function_223af38()
{
  JUMPOUT(&loc_223B008);
}

//----- (0223AF3C) --------------------------------------------------------
void Function_223af3c()
{
  JUMPOUT(&loc_223B030);
}

//----- (0223AF40) --------------------------------------------------------
void Function_223af40()
{
  JUMPOUT(&loc_223B070);
}

//----- (0223AF44) --------------------------------------------------------
void __fastcall Function_223af44(int a1, int a2, int a3)
{
  int v3;

  *(uchar *)(*(uint *)(a3 + 4) + 28) = 2;
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      *(uchar *)a3 = 4;
    }
    else if ( a1 == 1 )
    {
      *(uchar *)a3 = 2;
    }
    else
    {
      *(uchar *)a3 = 3;
    }
  }
  else
  {
    *(uchar *)a3 = 5;
  }
  if ( !a2 )
    JUMPOUT(__CS__, v3);
  Function_223e994(8);
  Function_223ae94();
  JUMPOUT(__CS__, v3);
}

//----- (0223B104) --------------------------------------------------------
int Function_223b104()
{
  int v0;
  int v1;

  v0 = LOBYTE(dword_2252CF4[406]) - 4;
  v1 = Function_2243bbc(*(uint *)(dword_2252CF4[407] + 4 * v0 + 16), 0);
  Function_2243ecc(0, 50, v1);
  Function_2243cf4(
    *(uint *)(dword_2252CF4[407] + 4 * v0 + 16),
    -1,
    *(ushort *)&asc_22493FE[4 * (LOBYTE(dword_2252CF4[406]) - 1)],
    (ushort)a0z0[2 * (LOBYTE(dword_2252CF4[406]) - 1)]);
  return Function_2243de4(*(uint *)(dword_2252CF4[407] + 4 * v0 + 16), -1, 3);
}

//----- (0223B194) --------------------------------------------------------
int Function_223b194()
{
  int v0;
  int result;
  int v2;
  int v3;
  int v4;

  v0 = LOBYTE(dword_2252CF4[406]) - 4;
  result = Function_223ffb8(LOBYTE(dword_2252CF4[406]));
  if ( result )
  {
    if ( result != 1 )
      return result;
    Function_223e994(14);
    Function_223e5e0(LOBYTE(dword_2252CF4[406]) - 4);
    v2 = Function_2243bbc(*(uint *)(dword_2252CF4[407] + 4 * v0 + 4), 0);
    Function_2243ecc(0, 86, v2);
    Function_2243cf4(
      *(uint *)(dword_2252CF4[407] + 4 * v0 + 4),
      -1,
      *(ushort *)&asc_22493FE[4 * v0],
      (ushort)a0z0[2 * v0]);
    Function_2243de4(*(uint *)(dword_2252CF4[407] + 4 * v0 + 4), -1, 3);
    Function_2243b3c(*(uint *)(dword_2252CF4[407] + 4 * v0 + 16));
    v3 = dword_2252CF4[407] + 4 * v0;
    *(uint *)(v3 + 16) = 0;
  }
  else
  {
    Function_223e994(7);
    v4 = Function_2243bbc(*(uint *)(dword_2252CF4[407] + 4 * v0 + 16), 0);
    Function_2243ecc(0, 17, v4);
    Function_2243cf4(
      *(uint *)(dword_2252CF4[407] + 4 * v0 + 16),
      -1,
      *(ushort *)&asc_22493FE[4 * (LOBYTE(dword_2252CF4[406]) - 1)],
      (ushort)a0z0[2 * (LOBYTE(dword_2252CF4[406]) - 1)]);
    v3 = Function_2243de4(*(uint *)(dword_2252CF4[407] + 4 * v0 + 16), -1, 3);
  }
  Function_223ff74(v3);
  return Function_222f6c4((int)Function_223b300);
}

//----- (0223B300) --------------------------------------------------------
int __fastcall Function_223b300(int a1)
{
  int result;

  result = Function_223ffcc(a1);
  if ( !result )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_223a9f0);
  }
  return result;
}

//----- (0223B324) --------------------------------------------------------
int *__fastcall Function_223b324(int a1, int a2, int a3, int a4)
{
  int *result;
  int v5;
  int v6;
  char v7;
  char v8;
  char v9;
  char v10;
  char v11;
  char v12;
  char v13;
  char v14;
  int v15;

  v15 = a4;
  result = &dword_2252CF4[406];
  v11 = 3;
  v10 = 6;
  v12 = 4;
  v13 = 5;
  v14 = 7;
  v7 = 10;
  v8 = 9;
  v9 = 11;
  if ( LOBYTE(dword_2252CF4[406]) <= 3u )
  {
    v5 = (uchar)*(&v11 + LOBYTE(dword_2252CF4[406]));
    Function_223d154(*(uint *)dword_2252CF4[407]);
    result = (int *)LOBYTE(dword_2252CF4[406]);
    if ( LOBYTE(dword_2252CF4[406]) != 3 )
    {
      v6 = Function_223e1d8(LOBYTE(dword_2252CF4[406]));
      if ( v6 > 2 )
        v6 = 3;
      result = (int *)Function_2243c74(
                        *(uint *)(dword_2252CF4[407] + 4 * LOBYTE(dword_2252CF4[406]) + 4),
                        -1,
                        0,
                        (uchar)*(&v7 + v6));
    }
  }
  return result;
}

//----- (0223B3F4) --------------------------------------------------------
int __fastcall Function_223b3f4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  BOOL v7;
  BOOL v8;
  BOOL v9;
  BOOL v10;

  v1 = Function_223ddcc(a1);
  BYTE2(dword_2252CF4[408]) = 0;
  v2 = v1;
  if ( !LOBYTE(dword_2252CF4[408]) )
    LOBYTE(dword_2252CF4[408]) = 1;
  if ( Function_222f74c() )
  {
    if ( SBYTE1(dword_2252CF4[408]) == 2 )
      BYTE1(dword_2252CF4[408]) = 0;
    if ( SLOBYTE(dword_2252CF4[408]) == 2 )
      LOBYTE(dword_2252CF4[408]) = 1;
  }
  Function_223b518();
  Function_222bc1c();
  v3 = Function_222f74c();
  Function_222b594(50, *((char *)dword_224954C + v3), *(uchar *)(v2 + 244) + 1);
  Function_222b740(1, v4, v5, v6);
  v7 = Function_222f774(1);
  v8 = Function_222f774(1);
  v9 = Function_222f774(1);
  v10 = Function_222f774(1);
  Function_222ba04(
    HIWORD(dword_22494E0[8 * v7 + 10 + 2 * SBYTE1(dword_2252CF4[408])]),
    HIWORD(dword_224950C[8 * v8 + 2 * SBYTE1(dword_2252CF4[408])]),
    LOWORD(dword_224950C[8 * v9 + 2 * SBYTE1(dword_2252CF4[408])]),
    LOWORD(dword_2249510[8 * v10 + 2 * SBYTE1(dword_2252CF4[408])]));
  return Function_222f6c4((int)Function_223b604);
}

//----- (0223B518) --------------------------------------------------------
int __fastcall Function_223b518(int a1, int a2, int a3, int a4)
{
  const char *v4;
  char *v5;
  int v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int result;
  char v15;
  int v16;

  v16 = a4;
  v4 = "char/ybBgStep21.ncl.l";
  v5 = &v15;
  v6 = 11;
  do
  {
    v7 = *v4;
    v8 = v4[1];
    v4 += 2;
    *v5 = v7;
    v5[1] = v8;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  Function_222b700("char/jbBgStep2.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, 0, (int)v5);
  Function_222b700("char/ybBgStep2.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v9, v10);
  Function_222b700("char/jb3Way.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v11, v12);
  v13 = Function_222b6a0(&v15);
  dword_2252CF4[409] = Function_2243738(v13, 0, 4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (0223B604) --------------------------------------------------------
int Function_223b604()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 20, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 20);
  return Function_222f6c4((int)Function_223b658);
}

//----- (0223B658) --------------------------------------------------------
int Function_223b658()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(0, v1, v2, v3);
      result = Function_222f6c4((int)Function_223b694);
    }
  }
  return result;
}

//----- (0223B694) --------------------------------------------------------
int Function_223b694()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_223b6bc);
  }
  return result;
}

//----- (0223B6BC) --------------------------------------------------------
int Function_223b6bc()
{
  int v0;
  int v1;

  v0 = Function_223b6d0();
  v1 = Function_223b854(v0);
  return Function_223b858(v1);
}

//----- (0223B6D0) --------------------------------------------------------
int Function_223b6d0()
{
  uint v0;
  int v1;
  BOOL v2;
  BOOL v3;
  BOOL v4;
  BOOL v5;
  BOOL v6;
  int result;

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = Function_222f774(1);
    if ( Function_22455b8(32 * v2 + 35951818 + v1) )
    {
      Function_222b048(1);
      BYTE1(dword_2252CF4[408]) = v0;
      v3 = Function_222f774(1);
      v4 = Function_222f774(1);
      v5 = Function_222f774(1);
      v6 = Function_222f774(1);
      return Function_222ba04(
               HIWORD(dword_22494E0[8 * v3 + 10 + 2 * SBYTE1(dword_2252CF4[408])]),
               HIWORD(dword_224950C[8 * v4 + 2 * SBYTE1(dword_2252CF4[408])]),
               LOWORD(dword_224950C[8 * v5 + 2 * SBYTE1(dword_2252CF4[408])]),
               LOWORD(dword_2249510[8 * v6 + 2 * SBYTE1(dword_2252CF4[408])]));
    }
    ++v0;
    v1 += 8;
  }
  while ( v0 < 4 );
  if ( Function_2245470(1) )
    return Function_222b048(1);
  if ( Function_2245470(2) )
    return Function_222b048(0);
  if ( Function_22454b0(64) )
    return Function_223ba60(1);
  if ( Function_22454b0(128) )
    return Function_223ba60(3);
  if ( Function_22454b0(32) )
    return Function_223ba60(0);
  result = Function_22454b0(16);
  if ( result )
    result = Function_223ba60(2);
  return result;
}

//----- (0223B854) --------------------------------------------------------
void Function_223b854()
{
  ;
}

//----- (0223B858) --------------------------------------------------------
int Function_223b858()
{
  int result;
  int v1;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e994(7);
    return Function_222f6c4((int)Function_223b8ac);
  }
  if ( result == 1 )
  {
    v1 = Function_223e994(6);
    Function_223bb54(v1);
    BYTE2(dword_2252CF4[408]) = 1;
    return Function_222f6c4((int)Function_223b8ac);
  }
  return result;
}

//----- (0223B8AC) --------------------------------------------------------
int Function_223b8ac()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_223b8cc);
}

//----- (0223B8CC) --------------------------------------------------------
int Function_223b8cc()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    if ( BYTE2(dword_2252CF4[408]) )
      Function_222b004();
    Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 20, 8);
    result = Function_222f6c4((int)Function_223b930);
  }
  return result;
}

//----- (0223B930) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x223B9D4 for case 0"

//----- (0223B9C4) --------------------------------------------------------
void Function_223b9c4()
{
  JUMPOUT(&loc_223B9D4);
}

//----- (0223B9C8) --------------------------------------------------------
void Function_223b9c8()
{
  JUMPOUT(&loc_223B9EC);
}

//----- (0223B9CC) --------------------------------------------------------
void Function_223b9cc()
{
  JUMPOUT(&loc_223BA04);
}

//----- (0223B9D0) --------------------------------------------------------
void Function_223b9d0()
{
  int v0;

  Function_222f6d4(2, 0);
  Function_222f710(0, 0);
  Function_223909c(1);
  Function_222f6c4((int)Function_2236be0);
  JUMPOUT(__CS__, v0);
}

//----- (0223BA60) --------------------------------------------------------
short *__fastcall Function_223ba60(int a1)
{
  int v1;
  short *result;
  int v3;
  BOOL v4;
  BOOL v5;
  BOOL v6;
  BOOL v7;

  v1 = a1;
  result = &word_22494AA[8 * Function_222f774(1) + 2 * SBYTE1(dword_2252CF4[408])];
  v3 = *((char *)result + v1);
  if ( v3 != -1 )
  {
    if ( !*((uchar *)result + v1) )
      LOBYTE(dword_2252CF4[408]) = BYTE1(dword_2252CF4[408]);
    if ( v3 == -2 )
      BYTE1(dword_2252CF4[408]) = dword_2252CF4[408];
    else
      BYTE1(dword_2252CF4[408]) = v3;
    Function_223e994(8);
    v4 = Function_222f774(1);
    v5 = Function_222f774(1);
    v6 = Function_222f774(1);
    v7 = Function_222f774(1);
    result = (short *)Function_222ba04(
                          HIWORD(dword_22494E0[8 * v4 + 10 + 2 * SBYTE1(dword_2252CF4[408])]),
                          HIWORD(dword_224950C[8 * v5 + 2 * SBYTE1(dword_2252CF4[408])]),
                          LOWORD(dword_224950C[8 * v6 + 2 * SBYTE1(dword_2252CF4[408])]),
                          LOWORD(dword_2249510[8 * v7 + 2 * SBYTE1(dword_2252CF4[408])]));
  }
  return result;
}

//----- (0223BB54) --------------------------------------------------------
int __fastcall Function_223bb54(int a1, int a2, int a3, int a4)
{
  int v4;
  char v6;
  char v7;
  char v8;
  char v9;
  int v10;

  v10 = a4;
  v6 = 1;
  v7 = 2;
  v8 = 3;
  v9 = 4;
  v4 = (uchar)*(&v6 + SBYTE1(dword_2252CF4[408]));
  return Function_223d154(dword_2252CF4[409]);
}

//----- (0223BBAC) --------------------------------------------------------
int __fastcall Function_223bbac(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v9 = a4;
  LOBYTE(dword_2252CF4[410]) = 0;
  Function_223bc38();
  Function_222f724(0, &v9);
  if ( !v9 )
    Function_222b594(49, -1, 0);
  Function_222b740(2, v4, v5, v6);
  if ( !v9 )
    Function_222bc1c();
  Function_222b7c8(44);
  v7 = Function_222ad34(0);
  Function_223bce0(v7);
  Function_222bc8c(0);
  Function_223e994(12);
  return Function_222f6c4((int)Function_223bd78);
}

//----- (0223BC38) --------------------------------------------------------
int __fastcall Function_223bc38(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  Function_222b700("char/jbBgStep3.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, a3, a4);
  Function_222b700("char/ybBgStep3.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v4, v5);
  Function_222b700("char/xb4Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v6, v7);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (0223BCE0) --------------------------------------------------------
int __fastcall Function_223bce0(int a1)
{
  int v1;
  int v3;
  char v4;
  char v5;

  v1 = Function_223ddcc(a1);
  MI_CpuCopy32((int *)off_2249554, &v4, 12);
  Function_222f724(0, &v3);
  if ( v3 == 2 )
    v5 = 4;
  else
    v5 = *(uchar *)(v1 + 244) + 1;
  if ( !((int (__fastcall *)(char *))dword_21E2064[3828])(&v4) )
    OS_Panic();
  if ( !v3 )
    ((void (__fastcall *)(uint, int))dword_21E2064[4133])(*(uchar *)(v1 + 244), v1);
  return Function_2246304(0, Function_223bf18, 0, 120);
}

//----- (0223BD78) --------------------------------------------------------
int __fastcall Function_223bd78(int a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  Function_222f724(0, &v5);
  if ( !v5 )
  {
    Function_2244194(2, 1, 1, 8);
    Function_2244c84(1, 1);
  }
  return Function_222f6c4((int)Function_223bde4);
}

//----- (0223BDE4) --------------------------------------------------------
int Function_223bde4()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
      result = Function_222f6c4((int)Function_223be18);
  }
  return result;
}

//----- (0223BE18) --------------------------------------------------------
int Function_223be18()
{
  int v0;
  int v1;

  v0 = Function_223be2c();
  v1 = Function_223be30(v0);
  return Function_223be34(v1);
}

//----- (0223BE2C) --------------------------------------------------------
void Function_223be2c()
{
  ;
}

//----- (0223BE30) --------------------------------------------------------
void Function_223be30()
{
  ;
}

//----- (0223BE34) --------------------------------------------------------
void Function_223be34()
{
  ;
}

//----- (0223BE38) --------------------------------------------------------
int Function_223be38()
{
  Function_2244194(3, 0, 21, 8);
  return Function_222f6c4((int)Function_223be60);
}

//----- (0223BE60) --------------------------------------------------------
int Function_223be60()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
    result = Function_222f6c4((int)Function_223be84);
  return result;
}

//----- (0223BE84) --------------------------------------------------------
int Function_223be84()
{
  int v0;
  int result;
  int *v2;
  uint v3;
  int *v4;
  uint v5;

  v0 = Function_223e5d0();
  result = ((int (*)(void))dword_21E2064[4047])();
  if ( result )
  {
    v2 = Function_20a33f8();
    MI_CpuCopy8((int)v2, v0 + 240, 0xEu, v3);
    v4 = Function_20a33f8();
    MI_CpuCopy8((int)v4, v0 + 496, 0xEu, v5);
    Function_222ae04();
    Function_22448e0(0);
    Function_2244cd8(0, 21);
    if ( LOBYTE(dword_2252CF4[410]) )
    {
      Function_222f6d4(0, 1);
      result = Function_222f6c4((int)Function_223bfa8);
    }
    else
    {
      Function_222f6d4(0, 1);
      result = Function_222f6c4((int)Function_22365bc);
    }
  }
  return result;
}

//----- (0223BF18) --------------------------------------------------------
int __fastcall Function_223bf18(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  result = ((int (*)(void))dword_21E2064[3934])();
  v3 = result;
  if ( result )
  {
    v4 = Function_222bd44();
    v5 = Function_223e9fc(v4);
    if ( v3 <= 0 )
    {
      v6 = ((int (__fastcall *)(int))dword_21E2064[3986])(v5);
      Function_2236bd0(v6);
      Function_223e994(18);
    }
    else
    {
      LOBYTE(dword_2252CF4[410]) = 1;
      Function_223e994(17);
    }
    Function_222f6c4((int)Function_223be38);
    result = Function_22463ac(0, v1);
  }
  return result;
}

//----- (0223BF84) --------------------------------------------------------
int __fastcall Function_223bf84(int a1, int a2)
{
  return Function_2245068(a2, 32);
}

//----- (0223BF98) --------------------------------------------------------
int __fastcall Function_223bf98(int a1, int a2)
{
  return Function_22450d0(a2);
}

//----- (0223BFA8) --------------------------------------------------------
int Function_223bfa8()
{
  LOBYTE(dword_2252CF4[411]) = 0;
  Function_223bfd8();
  Function_222b7c8(45);
  return Function_222f6c4((int)Function_223c044);
}

//----- (0223BFD8) --------------------------------------------------------
int __fastcall Function_223bfd8(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/xb4Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (0223C044) --------------------------------------------------------
int Function_223c044()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_223c078);
}

//----- (0223C078) --------------------------------------------------------
int Function_223c078()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
    result = Function_222f6c4((int)Function_223c09c);
  return result;
}

//----- (0223C09C) --------------------------------------------------------
int Function_223c09c()
{
  int v0;

  v0 = Function_223c1ac();
  return Function_223c0ac(v0);
}

//----- (0223C0AC) --------------------------------------------------------
void Function_223c0ac()
{
  ;
}

//----- (0223C0B0) --------------------------------------------------------
int __fastcall Function_223c0b0(int a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  Function_222f724(0, &v5);
  if ( v5 )
    Function_223ef7c();
  Function_2244194(3, 1, 1, 8);
  Function_2244194(3, 0, 21, 8);
  return Function_222f6c4((int)Function_223c108);
}

//----- (0223C108) --------------------------------------------------------
int __fastcall Function_223c108(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;

  v5 = a4;
  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      result = Function_223f4a4();
      if ( result )
      {
        Function_22448e0(0);
        Function_222b668();
        Function_2244cd8(1, 1);
        Function_2244cd8(0, 21);
        Function_222f6d4(2, 1);
        Function_222f724(0, &v5);
        if ( v5 )
        {
          result = Function_222f6c4((int)Function_2230228);
        }
        else
        {
          Function_222f710(0, 0);
          result = Function_222f6c4((int)Function_2236be0);
        }
      }
    }
  }
  return result;
}

//----- (0223C1AC) --------------------------------------------------------
int *__fastcall Function_223c1ac(int a1, int a2, int a3, int a4)
{
  int *result;
  int v5;
  int v6;

  v6 = a4;
  result = &dword_2252CF4[411];
  ++LOBYTE(dword_2252CF4[411]);
  if ( ((LOBYTE(dword_2252CF4[411]) + 1) & 0xFFu) >= 0xB4 )
  {
    Function_222f724(0, &v6);
    v5 = Function_222f75c();
    if ( v5 && v5 == 1 && v6 )
      result = (int *)Function_222f6c4((int)Function_222fee8);
    else
      result = (int *)Function_222f6c4((int)Function_223c0b0);
  }
  return result;
}

//----- (0223C21C) --------------------------------------------------------
int __fastcall Function_223c21c(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v6;

  v6 = a4;
  Function_223d910();
  v4 = Function_222f724(0, &v6);
  Function_223c274(v4);
  Function_222b594(49, -1, 0);
  if ( v6 != 2 )
    Function_222bc1c();
  if ( v6 == 1 )
    Function_223e2d0(1);
  return Function_222f6c4((int)Function_223c2e0);
}

//----- (0223C274) --------------------------------------------------------
int __fastcall Function_223c274(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/xb4None.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (0223C2E0) --------------------------------------------------------
int Function_223c2e0()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 20, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 20);
  return Function_222f6c4((int)Function_223c334);
}

//----- (0223C334) --------------------------------------------------------
int Function_223c334()
{
  int result;
  int v1;
  int v2;
  int v3;
  int v4;

  v2 = 43;
  v3 = 43;
  v4 = 73;
  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222f724(0, &v1);
      Function_223fc48(*(&v2 + v1));
      result = Function_222f6c4((int)Function_223c3bc);
    }
  }
  return result;
}

//----- (0223C3BC) --------------------------------------------------------
int Function_223c3bc()
{
  int v0;
  int v1;
  int result;
  int v3;

  v0 = Function_223c3f8();
  v1 = Function_223c3fc(v0);
  result = Function_223ffb8(v1);
  if ( !result )
  {
    v3 = Function_223e994(6);
    Function_223ff74(v3);
    Function_223e994(6);
    result = Function_222f6c4((int)Function_223c400);
  }
  return result;
}

//----- (0223C3F8) --------------------------------------------------------
void Function_223c3f8()
{
  ;
}

//----- (0223C3FC) --------------------------------------------------------
void Function_223c3fc()
{
  ;
}

//----- (0223C400) --------------------------------------------------------
int __fastcall Function_223c400(int a1)
{
  int result;

  result = Function_223ffcc(a1);
  if ( !result )
  {
    Function_2244194(3, 0, 20, 8);
    result = Function_222f6c4((int)Function_223c434);
  }
  return result;
}

//----- (0223C434) --------------------------------------------------------
int Function_223c434()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    Function_2244cd8(0, 20);
    Function_222f6d4(0, 1);
    result = Function_222f6c4((int)Function_223bbac);
  }
  return result;
}

//----- (0223C470) --------------------------------------------------------
int Function_223c470()
{
  LOBYTE(dword_2252CF4[412]) = 0;
  Function_223c4b0();
  Function_222bbc0(8);
  Function_222b7c8(41);
  Function_223e994(16);
  return Function_222f6c4((int)Function_223c530);
}

//----- (0223C4B0) --------------------------------------------------------
int __fastcall Function_223c4b0(int a1, int a2, int a3, int a4)
{
  int result;

  Function_222b700("char/xb4Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, a3, a4);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (0223C530) --------------------------------------------------------
int Function_223c530()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_223c564);
}

//----- (0223C564) --------------------------------------------------------
int Function_223c564()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
    result = Function_222f6c4((int)Function_223c588);
  return result;
}

//----- (0223C588) --------------------------------------------------------
int Function_223c588()
{
  int v0;

  v0 = Function_223c648();
  return Function_223c598(v0);
}

//----- (0223C598) --------------------------------------------------------
void Function_223c598()
{
  ;
}

//----- (0223C59C) --------------------------------------------------------
int Function_223c59c()
{
  Function_2244194(3, 1, 1, 8);
  Function_2244194(3, 0, 21, 8);
  return Function_222f6c4((int)Function_223c5d8);
}

//----- (0223C5D8) --------------------------------------------------------
int Function_223c5d8()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_22448e0(0);
      Function_222b668();
      Function_2244cd8(1, 1);
      Function_2244cd8(0, 21);
      Function_222f6d4(0, 0);
      Function_222f710(0, 2);
      result = Function_222f6c4((int)Function_223c21c);
    }
  }
  return result;
}

//----- (0223C648) --------------------------------------------------------
int *Function_223c648()
{
  int *result;

  result = &dword_2252CF4[412];
  ++LOBYTE(dword_2252CF4[412]);
  if ( ((LOBYTE(dword_2252CF4[412]) + 1) & 0xFFu) >= 0x78 )
    result = (int *)Function_222f6c4((int)Function_223c59c);
  return result;
}

//----- (0223C67C) --------------------------------------------------------
int Function_223c67c()
{
  int v0;
  int v1;
  int v2;

  LOBYTE(dword_2252CF4[413]) = 0;
  Function_223c6cc();
  Function_222bbc0(8);
  Function_222b594(56, -1, 0);
  Function_222b740(1, v0, v1, v2);
  Function_222b7c8(39);
  return Function_222f6c4((int)Function_223c774);
}

//----- (0223C6CC) --------------------------------------------------------
int __fastcall Function_223c6cc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  Function_222b700("char/jbBgStep2.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, a3, a4);
  Function_222b700("char/ybBgStep2.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v4, v5);
  Function_222b700("char/xb3Multi.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v6, v7);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (0223C774) --------------------------------------------------------
int Function_223c774()
{
  Function_2244194(2, 1, 1, 8);
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(1, 1);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_223c7c8);
}

//----- (0223C7C8) --------------------------------------------------------
int Function_223c7c8()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(1);
  if ( !result )
  {
    result = Function_2244170(0);
    if ( !result )
    {
      Function_222b790(6, v1, v2, v3);
      result = Function_222f6c4((int)Function_223c804);
    }
  }
  return result;
}

//----- (0223C804) --------------------------------------------------------
int Function_223c804()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_223c82c);
  }
  return result;
}

//----- (0223C82C) --------------------------------------------------------
int Function_223c82c()
{
  int v0;
  int v1;

  v0 = Function_223c840();
  v1 = Function_223c878(v0);
  return Function_223c87c(v1);
}

//----- (0223C840) --------------------------------------------------------
int Function_223c840()
{
  int result;

  if ( Function_2245470(1) )
    Function_222b048(1);
  result = Function_2245470(2);
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (0223C878) --------------------------------------------------------
void Function_223c878()
{
  ;
}

//----- (0223C87C) --------------------------------------------------------
int Function_223c87c()
{
  int result;

  result = Function_222b034();
  if ( !result )
  {
    Function_223e994(7);
    return Function_222f6c4((int)Function_223c8cc);
  }
  if ( result == 1 )
  {
    Function_223e994(6);
    LOBYTE(dword_2252CF4[413]) = 1;
    return Function_222f6c4((int)Function_223c8cc);
  }
  return result;
}

//----- (0223C8CC) --------------------------------------------------------
int Function_223c8cc()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_223c8ec);
}

//----- (0223C8EC) --------------------------------------------------------
int Function_223c8ec()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222b004();
    if ( !LOBYTE(dword_2252CF4[413]) )
      Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_223c950);
  }
  return result;
}

//----- (0223C950) --------------------------------------------------------
int Function_223c950()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    if ( LOBYTE(dword_2252CF4[413]) || (result = Function_2244170(1)) == 0 )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_22448e0(0);
        if ( !LOBYTE(dword_2252CF4[413]) )
        {
          Function_222b668();
          Function_2244cd8(1, 1);
        }
        Function_2244cd8(0, 21);
        if ( LOBYTE(dword_2252CF4[413]) )
        {
          Function_222f6d4(2, 1);
          result = Function_222f6c4((int)Function_223ca28);
        }
        else
        {
          Function_222f6d4(2, 1);
          result = Function_222f6c4((int)Function_223a6b4);
        }
      }
    }
  }
  return result;
}

//----- (0223CA08) --------------------------------------------------------
BOOL Function_223ca08()
{
  return (word_27FFFA8 & 0x8000) >> 15 != 0;
}

//----- (0223CA28) --------------------------------------------------------
int Function_223ca28()
{
  int v0;
  int v1;
  int v2;
  short v3;
  char v5;
  char v6;
  char v7;
  ushort v8;

  LOBYTE(dword_2252CF4[414]) = 0;
  Function_223cabc();
  Function_222bbc0(8);
  Function_222b740(2, v0, v1, v2);
  OS_GetOwnerInfo((int)&v6);
  MIi_CpuClear16(0, (int)&v5, 22);
  MIi_CpuCopy16((int)&v7, (int)&v5, 2 * v8, v3);
  Function_222b83c((int)&v5, 40);
  Function_222ad34(0);
  Function_223f564(Function_223ce08);
  Function_223e994(11);
  return Function_222f6c4((int)Function_223cb64);
}

//----- (0223CABC) --------------------------------------------------------
int __fastcall Function_223cabc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  Function_222b700("char/jbBgStep3.ncg.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Char, a3, a4);
  Function_222b700("char/ybBgStep3.ncl.l", (void (__fastcall *)(int, uint, int))GX_LoadBGPltt, v4, v5);
  Function_222b700("char/jb4Usb.nsc.l", (void (__fastcall *)(int, uint, int))GX_LoadBG2Scr, v6, v7);
  REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0xFFFC | 3;
  REG_BG1CNT_SUB = REG_BG1CNT_SUB & 0xFFFC | 3;
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 3;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 3;
  result = (ushort)(REG_BG2CNT & 0xFFFC) | 3;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  return result;
}

//----- (0223CB64) --------------------------------------------------------
int Function_223cb64()
{
  Function_2244194(2, 0, 21, 8);
  Function_2244c84(0, 21);
  return Function_222f6c4((int)Function_223cb98);
}

//----- (0223CB98) --------------------------------------------------------
int Function_223cb98()
{
  int result;
  int v1;
  int v2;
  int v3;

  result = Function_2244170(0);
  if ( !result )
  {
    Function_222b790(2, v1, v2, v3);
    result = Function_222f6c4((int)Function_223cbc4);
  }
  return result;
}

//----- (0223CBC4) --------------------------------------------------------
int Function_223cbc4()
{
  int result;

  result = Function_222b034();
  if ( result != -2 )
  {
    Function_222b0a8();
    result = Function_222f6c4((int)Function_223cbec);
  }
  return result;
}

//----- (0223CBEC) --------------------------------------------------------
int Function_223cbec()
{
  int v0;
  int v1;

  v0 = Function_223cc00();
  v1 = Function_223cc38(v0);
  return Function_223cc3c(v1);
}

//----- (0223CC00) --------------------------------------------------------
int Function_223cc00()
{
  int result;

  if ( Function_2245470(2) )
    return Function_222b048(0);
  result = Function_223ca08();
  if ( result )
    result = Function_222b048(0);
  return result;
}

//----- (0223CC38) --------------------------------------------------------
void Function_223cc38()
{
  ;
}

//----- (0223CC3C) --------------------------------------------------------
int Function_223cc3c()
{
  int result;

  result = LOBYTE(dword_2252CF4[414]);
  if ( !LOBYTE(dword_2252CF4[414]) )
  {
    result = Function_222b034();
    if ( !result )
    {
      LOBYTE(dword_2252CF4[414]) = 2;
      Function_223e9fc(&dword_2252CF4[414]);
      Function_223e994(7);
      result = Function_222f6c4((int)Function_223cc88);
    }
  }
  return result;
}

//----- (0223CC88) --------------------------------------------------------
int Function_223cc88()
{
  Function_222b0c0();
  Function_2244394(8);
  return Function_222f6c4((int)Function_223cca8);
}

//----- (0223CCA8) --------------------------------------------------------
int Function_223cca8()
{
  int result;

  result = Function_2244170(1);
  if ( !result )
  {
    Function_222b004();
    if ( (uchar)(LOBYTE(dword_2252CF4[414]) - 2) <= 1u )
      Function_2244194(3, 1, 1, 8);
    Function_2244194(3, 0, 21, 8);
    result = Function_222f6c4((int)Function_223cd14);
  }
  return result;
}

//----- (0223CD14) --------------------------------------------------------
int Function_223cd14()
{
  int result;

  result = Function_2244170(0);
  if ( !result )
  {
    if ( LOBYTE(dword_2252CF4[414]) != 2 || (result = Function_2244170(1)) == 0 )
    {
      result = Function_222b07c();
      if ( result )
      {
        Function_223f71c();
        Function_222ae04();
        Function_22448e0(0);
        if ( (uchar)(LOBYTE(dword_2252CF4[414]) - 2) <= 1u )
        {
          Function_222b668();
          Function_2244cd8(1, 1);
        }
        Function_2244cd8(0, 21);
        if ( LOBYTE(dword_2252CF4[414]) == 2 )
        {
          Function_222f6d4(2, 1);
          result = Function_222f6c4((int)Function_223a6b4);
        }
        else if ( LOBYTE(dword_2252CF4[414]) == 3 )
        {
          Function_222f6d4(2, 1);
          result = Function_222f6c4((int)Function_223c67c);
        }
        else
        {
          Function_222f6d4(0, 0);
          result = Function_222f6c4((int)Function_223c470);
        }
      }
    }
  }
  return result;
}

//----- (0223CE08) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x223CE38 for case 0"

//----- (0223CE28) --------------------------------------------------------
void Function_223ce28()
{
  JUMPOUT(&loc_223CE38);
}

//----- (0223CE2C) --------------------------------------------------------
void Function_223ce2c()
{
  JUMPOUT(&loc_223CE78);
}

//----- (0223CE30) --------------------------------------------------------
void Function_223ce30()
{
  JUMPOUT(&loc_223CE90);
}

//----- (0223CE34) --------------------------------------------------------
void __fastcall Function_223ce34(int a1, uchar *a2)
{
  int v2;

  *a2 = 2;
  Function_223e9fc(2);
  Function_223e994(9);
  Function_222f6c4((int)Function_223cc88);
  JUMPOUT(__CS__, v2);
}

//----- (0223CEF4) --------------------------------------------------------
int __fastcall Function_223cef4(int a1)
{
  int result;
  int v2;

  result = Function_223ffb8(a1);
  if ( !result )
  {
    v2 = Function_223e994(6);
    Function_223ff74(v2);
    result = Function_222f6c4((int)Function_223cf20);
  }
  return result;
}

//----- (0223CF20) --------------------------------------------------------
int __fastcall Function_223cf20(int a1)
{
  int result;

  result = Function_223ffcc(a1);
  if ( !result )
    result = Function_222f6c4((int)Function_223cc88);
  return result;
}

//----- (0223CF40) --------------------------------------------------------
int __fastcall Function_223cf40(int a1)
{
  int result;
  int v2;

  result = Function_223ffb8(a1);
  if ( result )
  {
    if ( result != 1 )
      return result;
    LOBYTE(dword_2252CF4[414]) = 3;
    v2 = Function_223e994(6);
  }
  else
  {
    LOBYTE(dword_2252CF4[414]) = 1;
    v2 = Function_223e994(7);
  }
  Function_223ff74(v2);
  return Function_222f6c4((int)Function_223cf9c);
}

//----- (0223CF9C) --------------------------------------------------------
int __fastcall Function_223cf9c(int a1)
{
  int result;

  result = Function_223ffcc(a1);
  if ( !result )
  {
    if ( LOBYTE(dword_2252CF4[414]) == 1 )
    {
      result = Function_222f6c4((int)Function_223cc88);
    }
    else
    {
      Function_223e994(11);
      Function_222b0a8();
      LOBYTE(dword_2252CF4[414]) = 0;
      Function_223f800(Function_223ce08);
      result = Function_222f6c4((int)Function_223cbec);
    }
  }
  return result;
}

//----- (0223D004) --------------------------------------------------------
int __fastcall Function_223d004(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  dword_2252CF4[415] = Function_2245068(1544, 4);
  MIi_CpuCopyFast(v1, (uint *)(dword_2252CF4[415] + 4), 0x600u, (uint)&dword_2252CF4[415]);
  result = Function_2246304(1, Function_223d100, 0, 120);
  *(uint *)dword_2252CF4[415] = result;
  return result;
}

//----- (0223D064) --------------------------------------------------------
int Function_223d064()
{
  Function_22463cc(1, *(uint *)dword_2252CF4[415]);
  return Function_224508c(&dword_2252CF4[415]);
}

//----- (0223D090) --------------------------------------------------------
int Function_223d090()
{
  int result;

  result = dword_2252CF4[415];
  *(uchar *)(dword_2252CF4[415] + 1540) = 1;
  return result;
}

//----- (0223D0A8) --------------------------------------------------------
int __fastcall Function_223d0a8(int a1, int a2, int a3, int a4)
{
  int v4;
  short v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;

  v4 = a4;
  v5 = dword_2252CF4[415];
  v6 = a1;
  result = dword_2252CF4[415] + 4;
  v8 = dword_2252CF4[415] + 4 + 2 * a2;
  v9 = 0;
  if ( v4 > 0 )
  {
    v10 = 2 * a3;
    do
    {
      result = MIi_CpuCopy16(v6, v8, v10, v5);
      ++v9;
      v6 += 64;
      v8 += 64;
    }
    while ( v9 < v4 );
  }
  return result;
}

//----- (0223D100) --------------------------------------------------------
int Function_223d100()
{
  int result;

  result = *(uchar *)(dword_2252CF4[415] + 1540);
  if ( *(uchar *)(dword_2252CF4[415] + 1540) )
  {
    DC_FlushRange(dword_2252CF4[415] + 4, 1536);
    GX_LoadBG2Scr(dword_2252CF4[415] + 4, 0, 0x600u);
    result = dword_2252CF4[415];
    *(uchar *)(dword_2252CF4[415] + 1540) = 0;
  }
  return result;
}

//----- (0223D154) --------------------------------------------------------
int __fastcall Function_223d154(int a1, int a2, int a3)
{
  dword_2252CF4[416] = a1 + 32 * a2;
  dword_2252CF4[417] = 32 * a3 + 83886080;
  return Function_2246304(1, Function_223d190, 0, 120);
}

//----- (0223D190) --------------------------------------------------------
int __fastcall Function_223d190(int a1, int a2, int a3, short a4)
{
  int v4;

  v4 = a1;
  MIi_CpuCopy16(dword_2252CF4[416], dword_2252CF4[417], 32, a4);
  return Function_22463ac(1, v4);
}

//----- (0223D1BC) --------------------------------------------------------
int __fastcall Function_223d1bc(int a1)
{
  dword_2252CF4[416] = a1;
  return Function_2246304(1, Function_223d1e8, 0, 120);
}

//----- (0223D1E8) --------------------------------------------------------
int __fastcall Function_223d1e8(int a1, int a2, int a3, short a4)
{
  int v4;

  v4 = a1;
  MIi_CpuCopy16(dword_2252CF4[416], 83886080, 512, a4);
  return Function_22463ac(1, v4);
}

//----- (0223D218) --------------------------------------------------------
int __fastcall Function_223d218(int a1, char a2, int a3, int a4, int a5)
{
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int result;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = Function_2245068(32, 4);
  dword_2252CF4[418] = v9;
  *(uchar *)(v9 + 27) = v5;
  *(uchar *)(dword_2252CF4[418] + 25) = v6;
  *(uchar *)(dword_2252CF4[418] + 26) = a5;
  Function_2244c2c(v7, v8, dword_2252CF4[418] + 16);
  *(uint *)dword_2252CF4[418] = Function_2243f8c(0, *((uchar *)&dword_224956C + v5), 1);
  Function_2243cf4(*(uint *)dword_2252CF4[418], -1, v7, v8 + a5);
  Function_2243de4(*(uint *)dword_2252CF4[418], -1, 1);
  result = Function_2246304(0, Function_223d390, 0, 128);
  *(uint *)(dword_2252CF4[418] + 12) = result;
  return result;
}

//----- (0223D2F0) --------------------------------------------------------
int Function_223d2f0()
{
  Function_22463cc(0, *(uint *)(dword_2252CF4[418] + 12));
  Function_2243b3c(*(uint *)dword_2252CF4[418]);
  return Function_224508c(&dword_2252CF4[418]);
}

//----- (0223D32C) --------------------------------------------------------
int Function_223d32c()
{
  return *(uchar *)(dword_2252CF4[418] + 26);
}

//----- (0223D340) --------------------------------------------------------
int Function_223d340()
{
  return *(uchar *)(dword_2252CF4[418] + 29);
}

//----- (0223D354) --------------------------------------------------------
int Function_223d354()
{
  return Function_223d8a0();
}

//----- (0223D360) --------------------------------------------------------
int Function_223d360()
{
  int result;

  result = dword_2252CF4[418];
  *(uchar *)(dword_2252CF4[418] + 30) = 0;
  return result;
}

//----- (0223D378) --------------------------------------------------------
int Function_223d378()
{
  int result;

  result = dword_2252CF4[418];
  *(uchar *)(dword_2252CF4[418] + 30) = 1;
  return result;
}

//----- (0223D390) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x223D3C8 for case 0"

//----- (0223D3B8) --------------------------------------------------------
void Function_223d3b8()
{
  JUMPOUT(&loc_223D3C8);
}

//----- (0223D3BC) --------------------------------------------------------
void Function_223d3bc()
{
  JUMPOUT(&loc_223D478);
}

//----- (0223D3C0) --------------------------------------------------------
void Function_223d3c0()
{
  JUMPOUT(&loc_223D480);
}

//----- (0223D3C4) --------------------------------------------------------
void Function_223d3c4()
{
  JUMPOUT(&loc_223D4C8);
}

//----- (0223D3E4) --------------------------------------------------------
// jumptable 0223D3DC case 0
int __fastcall Function_223d3e4(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (0223D3E8) --------------------------------------------------------
void Function_223d3e8()
{
  JUMPOUT(&loc_223D3F8);
}

//----- (0223D3EC) --------------------------------------------------------
void Function_223d3ec()
{
  JUMPOUT(&loc_223D458);
}

//----- (0223D3F0) --------------------------------------------------------
void Function_223d3f0()
{
  JUMPOUT(&loc_223D464);
}

//----- (0223D3F4) --------------------------------------------------------
void Function_223d3f4()
{
  int v0;

  Function_223d688();
  JUMPOUT(__CS__, v0);
}

//----- (0223D514) --------------------------------------------------------
int __fastcall Function_223d514(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  ushort v9;
  ushort v10;
  int v11;

  v11 = a4;
  v4 = Function_2245530(&dword_2249734);
  if ( v4 && (Function_22457b8(&v9), v4 = *(ushort *)(dword_2252CF4[418] + 16) - 30, v9 >= v4) )
  {
    v5 = *(uchar *)(dword_2252CF4[418] + 24) + v10 - *(ushort *)(dword_2252CF4[418] + 22);
    if ( v5 >= 0 )
    {
      v6 = *(uchar *)(dword_2252CF4[418] + 27);
      v7 = *(uchar *)(dword_2252CF4[418] + 25);
      if ( v5 >= v7 - *((uchar *)&dword_2249570 + v6) )
        v5 = v7 - *((uchar *)&dword_2249570 + v6);
    }
    else
    {
      v5 = 0;
    }
    Function_223d5e4(v5);
    Function_223d8a0(v5);
    result = dword_2252CF4[418];
    *(uchar *)(dword_2252CF4[418] + 29) = 2;
  }
  else
  {
    Function_223e9fc(v4);
    *(uchar *)(dword_2252CF4[418] + 28) = 0;
    result = dword_2252CF4[418];
    *(uchar *)(dword_2252CF4[418] + 29) = 3;
  }
  return result;
}

//----- (0223D5E4) --------------------------------------------------------
int __fastcall Function_223d5e4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = *(uchar *)(dword_2252CF4[418] + 26);
  v2 = v1 - a1;
  if ( v1 - a1 < 0 )
    v2 = a1 - v1;
  if ( v2 >= 2 )
  {
    v3 = 127;
    if ( v2 < 6 )
      v3 = Function_20bd104(127, 6 - v2);
  }
  else
  {
    v3 = 0;
  }
  Function_223e9b8(v3);
  if ( v2 >= 2 )
  {
    if ( v2 < 6 )
      v4 = Function_20bd104(512, 6 - v2) - 256;
    else
      v4 = 256;
  }
  else
  {
    v4 = -256;
  }
  return Function_223e9d8(0xFFFF, v4);
}

//----- (0223D65C) --------------------------------------------------------
int __fastcall Function_223d65c(int a1)
{
  bool v1;
  char v2;
  int result;

  v1 = a1 == 2;
  v2 = dword_2252CF4[418];
  *(uchar *)(dword_2252CF4[418] + 28) = a1;
  if ( a1 == 2 )
    v2 = 4;
  result = dword_2252CF4[418];
  if ( !v1 )
    v2 = 6;
  *(uchar *)(dword_2252CF4[418] + 29) = v2;
  return result;
}

//----- (0223D688) --------------------------------------------------------
int __fastcall Function_223d688(int a1, int a2, int a3, int a4)
{
  uint v4;
  int v5;
  int result;
  int v7;

  v7 = a4;
  Function_22457b8(&v7);
  v4 = *((uchar *)&dword_2249570 + *(uchar *)(dword_2252CF4[418] + 27));
  v5 = HIWORD(v7) - *(ushort *)(dword_2252CF4[418] + 18) - (v4 >> 1);
  if ( v5 >= 0 )
  {
    if ( v5 >= (int)(*(uchar *)(dword_2252CF4[418] + 25) - v4) )
      v5 = *(uchar *)(dword_2252CF4[418] + 25) - v4;
  }
  else
  {
    v5 = 0;
  }
  Function_223d8a0(v5);
  result = dword_2252CF4[418];
  *(uchar *)(dword_2252CF4[418] + 29) = 3;
  return result;
}

//----- (0223D6F0) --------------------------------------------------------
int __fastcall Function_223d6f0(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  char v6;
  int v7;

  v7 = a4;
  Function_223d7c8(1, &v6);
  if ( Function_2245640(&v6) )
    return 1;
  v5 = 2;
  do
  {
    Function_223d7c8(v5, &v6);
    if ( Function_2245640(&v6) )
      return v5;
    ++v5;
  }
  while ( v5 <= 3 );
  Function_223d7c8(4, &v6);
  if ( Function_22455b8(&v6) )
    result = 4;
  else
    result = 0;
  return result;
}

//----- (0223D77C) --------------------------------------------------------
int __fastcall Function_223d77c(int a1, int a2, int a3, int a4)
{
  int v4;
  char v6;
  int v7;

  v7 = a4;
  v4 = 2;
  do
  {
    Function_223d7c8(v4, &v6);
    if ( Function_2245530(&v6) )
      return v4;
    ++v4;
  }
  while ( v4 <= 3 );
  return 0;
}

//----- (0223D7C8) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x223D7EC for case 0"

//----- (0223D7EC) --------------------------------------------------------
// jumptable 0223D7E4 case 0
void Function_223d7ec()
{
  ;
}

//----- (0223D7F0) --------------------------------------------------------
void Function_223d7f0()
{
  JUMPOUT(&loc_223D800);
}

//----- (0223D7F4) --------------------------------------------------------
void Function_223d7f4()
{
  JUMPOUT(&loc_223D834);
}

//----- (0223D7F8) --------------------------------------------------------
void Function_223d7f8()
{
  JUMPOUT(&loc_223D854);
}

//----- (0223D7FC) --------------------------------------------------------
int __fastcall Function_223d7fc(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = *(ushort *)(*(uint *)a3 + 18);
  *(ushort *)(a2 + 2) = v3;
  result = v3 + *(uchar *)(*(uint *)a3 + 25);
  *(ushort *)(a2 + 6) = result;
  return result;
}

//----- (0223D8A0) --------------------------------------------------------
int __fastcall Function_223d8a0(int a1)
{
  char v1;
  int result;

  v1 = a1;
  Function_2243cf4(
    *(uint *)dword_2252CF4[418],
    -1,
    *(ushort *)(dword_2252CF4[418] + 16),
    a1 + *(ushort *)(dword_2252CF4[418] + 18));
  result = dword_2252CF4[418];
  *(uchar *)(dword_2252CF4[418] + 26) = v1;
  return result;
}

//----- (0223D8DC) --------------------------------------------------------
int Function_223d8dc()
{
  int result;

  result = dword_2252CF4[419];
  if ( !dword_2252CF4[419] )
  {
    result = Function_2245068(7776, 32);
    dword_2252CF4[419] = result;
  }
  return result;
}

//----- (0223D910) --------------------------------------------------------
int Function_223d910()
{
  int result;

  result = dword_2252CF4[419];
  if ( dword_2252CF4[419] )
  {
    while ( WM_GetAllowedChannel() != 0x8000 )
      ;
    result = Function_224508c(&dword_2252CF4[419]);
  }
  return result;
}

//----- (0223D944) --------------------------------------------------------
BOOL Function_223d944()
{
  int *v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;

  MIi_CpuClear16(0, dword_2252CF4[419] + 4864, 840);
  if ( Function_20cecc8(dword_2252CF4[419], (int)Function_223db3c, 3u) != 2 )
    return 0;
  do
    Function_20ce594((uint *)(dword_2252CF4[419] + 5772));
  while ( *(ushort *)(dword_2252CF4[419] + 5772) != 2 );
  v1 = &dword_2249580;
  v2 = (int *)(dword_2252CF4[419] + 5704);
  v3 = 4;
  do
  {
    v4 = *v1;
    v7 = v1[1];
    v5 = v1[2];
    v6 = v1[3];
    v1 += 4;
    *v2 = v4;
    v2[1] = v7;
    v2[2] = v5;
    v2[3] = v6;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  *v2 = *v1;
  *(uint *)(dword_2252CF4[419] + 5704) = dword_2252CF4[419] + 3840;
  *(ushort *)(dword_2252CF4[419] + 5712) = WM_GetDispersionScanPeriod(
                                            dword_2252CF4[419] + 4096,
                                            dword_2252CF4[419] + 3840,
                                            v5,
                                            v6);
  return Function_223da10() != 0;
}

//----- (0223DA10) --------------------------------------------------------
BOOL Function_223da10()
{
  return WM_StartScanEx((int)Function_223db3c, dword_2252CF4[419] + 5704) == 2;
}

//----- (0223DA44) --------------------------------------------------------
BOOL Function_223da44()
{
  int v0;
  int v1;
  int v2;

  *(uchar *)(dword_2252CF4[419] + 7772) = 1;
  Function_20ce594((uint *)(dword_2252CF4[419] + 5772));
  if ( *(ushort *)(dword_2252CF4[419] + 5772) != 2 )
  {
    if ( WM_Reset((int)Function_223db3c) != 2 )
      return 0;
    do
      Function_20ce594((uint *)(dword_2252CF4[419] + 5772));
    while ( *(ushort *)(dword_2252CF4[419] + 5772) != 2 );
  }
  return WM_End((int)Function_223db3c, v0, v1, v2) == 2;
}

//----- (0223DAE0) --------------------------------------------------------
int __fastcall Function_223dae0(uint *a1)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  v2 = dword_2252CF4[419] + 4864;
  v3 = 0;
  *a1 = dword_2252CF4[419] + 4864;
  do
  {
    ++v3;
    if ( Function_20d5190((uchar *)(v2 + 32), (uchar *)dword_2249578, 6) )
      ++v1;
    v2 += 42;
  }
  while ( v3 < 20 );
  return v1;
}

//----- (0223DB3C) --------------------------------------------------------
ushort *__fastcall Function_223db3c(ushort *result)
{
  bool v1;
  int v2;

  if ( !result[1] )
  {
    v1 = *(uchar *)(dword_2252CF4[419] + 7772) == 0;
    if ( !*(uchar *)(dword_2252CF4[419] + 7772) )
      v1 = *result == 38;
    if ( v1 )
    {
      v2 = result[4];
      if ( v2 == 4 )
      {
        result = (ushort *)Function_223da10();
      }
      else
      {
        if ( v2 != 5 )
          OS_Panic();
        Function_223dba0();
        result = (ushort *)Function_223da10();
      }
    }
  }
  return result;
}

//----- (0223DBA0) --------------------------------------------------------
int __fastcall Function_223dba0(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int i;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  uint v12;
  uint v13;
  int v14;
  short v15;
  bool v16;
  int v17;
  int v18;
  char *v19;
  int v20;
  char v21[132];
  int v22;

  v22 = a4;
  v4 = a1;
  DC_InvalidateRange(dword_2252CF4[419] + 3840, 1024);
  result = *(ushort *)(v4 + 14);
  for ( i = 0; i < result; ++i )
  {
    v7 = *(uint *)(v4 + 4 * i + 16);
    if ( *(uchar *)(v7 + 12) && !*(ushort *)(v7 + 60) )
    {
      v8 = dword_2252CF4[419] + 4864;
      v9 = 0;
      do
      {
        if ( !Function_20d5190((uchar *)(v7 + 4), (uchar *)(v8 + 32), 6) )
          break;
        ++v9;
        v8 += 42;
      }
      while ( v9 < 20 );
      if ( v9 == 20 )
      {
        v11 = dword_2252CF4[419] + 4864;
        v9 = 0;
        do
        {
          result = Function_20d5190((uchar *)(v11 + 32), (uchar *)dword_2249578, 6);
          if ( !result )
            break;
          ++v9;
          v11 += 42;
        }
        while ( v9 < 20 );
        if ( v9 == 20 )
          return result;
      }
      v12 = dword_2252CF4[419] + 4864 + 42 * v9;
      MI_CpuCopy8(v7 + 4, v12 + 32, 6u, v10);
      MI_CpuCopy8(v7 + 12, v12, 0x20u, v13);
      *(ushort *)(v12 + 38) = *(ushort *)(v4 + 2 * i + 80);
      v15 = *(ushort *)(v7 + 44);
      v16 = (v15 & 0x10) == 0;
      if ( !(v15 & 0x10) )
        LOBYTE(v15) = 0;
      if ( v16 )
      {
        *(uchar *)(v12 + 40) = v15;
      }
      else
      {
        *(uchar *)(v12 + 40) = 1;
        WM_GetOtherElements(v21, (ushort *)v7, 1, v14);
        v17 = (uchar)v21[0];
        v18 = 0;
        if ( (int)(uchar)v21[0] > 0 )
        {
          while ( 1 )
          {
            v19 = &v21[8 * v18];
            v20 = (uchar)v19[4];
            if ( v20 == 48 )
            {
              *(uchar *)(v12 + 40) = 2;
              goto LABEL_24;
            }
            if ( v20 == 221
              && (uchar)v19[5] >= 4u
              && !Function_20d5190(*((uchar **)v19 + 2), (uchar *)&dword_2249574, 4) )
            {
              break;
            }
            if ( ++v18 >= v17 )
              goto LABEL_24;
          }
          *(uchar *)(v12 + 40) = 2;
        }
      }
    }
LABEL_24:
    result = *(ushort *)(v4 + 14);
  }
  return result;
}

//----- (0223DD74) --------------------------------------------------------
BOOL Function_223dd74()
{
  dword_2252CF4[420] = Function_2245068(1784, 32);
  Function_20d316c(dword_2252CF4[420] + 1272, 40961);
  return Function_20a2a34(dword_2252CF4[420]);
}

//----- (0223DDB8) --------------------------------------------------------
int Function_223ddb8()
{
  return Function_224508c(&dword_2252CF4[420]);
}

//----- (0223DDCC) --------------------------------------------------------
int Function_223ddcc()
{
  return dword_2252CF4[420] + 1024;
}

//----- (0223DDE0) --------------------------------------------------------
char __fastcall Function_223dde0(char result)
{
  *(uchar *)(dword_2252CF4[420] + 1269) = result;
  return result;
}

//----- (0223DDF4) --------------------------------------------------------
char __fastcall Function_223ddf4(char result)
{
  *(uchar *)(dword_2252CF4[420] + 1270) = result;
  return result;
}

//----- (0223DE08) --------------------------------------------------------
int __fastcall Function_223de08(int a1, int a2, int a3, uint a4)
{
  int result;

  MI_CpuCopy8(a1, dword_2252CF4[420] + 1088, 0x20u, a4);
  result = dword_2252CF4[420];
  *(uchar *)(dword_2252CF4[420] + 1255) = 0;
  return result;
}

//----- (0223DE38) --------------------------------------------------------
int __fastcall Function_223de38(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uchar *v5;
  char v6;
  char v7;
  int v8;
  int result;

  v1 = a1;
  MI_CpuFill8((ushort *)(dword_2252CF4[420] + 1152), 0, 0x10u);
  v2 = Function_2245e50(v1, 32);
  v3 = v2;
  if ( v2 > 10 )
  {
    if ( v2 > 26 )
    {
      if ( v2 == 32 )
        goto LABEL_9;
    }
    else if ( v2 == 26 )
    {
      goto LABEL_9;
    }
LABEL_12:
    v8 = *(uchar *)(dword_2252CF4[420] + 1254) & 3 | 4;
    *(uchar *)(dword_2252CF4[420] + 1254) = v8;
    MI_CpuCopy8(v1, dword_2252CF4[420] + 1152, 0x10u, v8);
    goto LABEL_13;
  }
  if ( v2 < 10 && v2 )
    goto LABEL_12;
LABEL_9:
  v4 = 0;
  *(uchar *)(dword_2252CF4[420] + 1254) &= 3u;
  v5 = (uchar *)(dword_2252CF4[420] + 1152);
  if ( v2 > 0 )
  {
    do
    {
      v6 = Function_223e8bc(*(uchar *)(v1 + v4));
      v7 = Function_223e8bc(*(uchar *)(v1 + v4 + 1));
      v4 += 2;
      *v5++ = v7 + 16 * v6;
    }
    while ( v4 < v3 );
  }
LABEL_13:
  if ( v3 <= 5 )
  {
    if ( v3 < 5 )
    {
      if ( !v3 )
      {
        result = *(uchar *)(dword_2252CF4[420] + 1254) & 0xFC;
        *(uchar *)(dword_2252CF4[420] + 1254) = result;
        return result;
      }
      goto LABEL_27;
    }
LABEL_25:
    result = (uchar)(*(uchar *)(dword_2252CF4[420] + 1254) & 0xFC) | 1;
    *(uchar *)(dword_2252CF4[420] + 1254) = result;
    return result;
  }
  if ( v3 > 13 )
  {
    if ( v3 != 26 )
      goto LABEL_27;
LABEL_26:
    result = (uchar)(*(uchar *)(dword_2252CF4[420] + 1254) & 0xFC) | 2;
    *(uchar *)(dword_2252CF4[420] + 1254) = result;
    return result;
  }
  if ( v3 >= 10 )
  {
    if ( v3 == 10 )
      goto LABEL_25;
    if ( v3 == 13 )
      goto LABEL_26;
  }
LABEL_27:
  result = (uchar)(*(uchar *)(dword_2252CF4[420] + 1254) & 0xFC) | 3;
  *(uchar *)(dword_2252CF4[420] + 1254) = result;
  return result;
}

//----- (0223DFD0) --------------------------------------------------------
int __fastcall Function_223dfd0(int a1)
{
  return Function_223e834(a1, dword_2252CF4[420] + 1216);
}

//----- (0223DFEC) --------------------------------------------------------
int __fastcall Function_223dfec(int a1)
{
  return Function_223e834(a1, dword_2252CF4[420] + 1264);
}

//----- (0223E008) --------------------------------------------------------
int __fastcall Function_223e008(int a1)
{
  return Function_223e834(a1, dword_2252CF4[420] + 1220);
}

//----- (0223E028) --------------------------------------------------------
int __fastcall Function_223e028(int a1)
{
  return Function_223e834(a1, dword_2252CF4[420] + 1224);
}

//----- (0223E048) --------------------------------------------------------
int __fastcall Function_223e048(int a1)
{
  return Function_223e834(a1, dword_2252CF4[420] + 1228);
}

//----- (0223E068) --------------------------------------------------------
int __fastcall Function_223e068(uint a1, int a2, int a3, uint a4)
{
  return MI_CpuCopy8(dword_2252CF4[420] + 1088, a1, 0x20u, a4);
}

//----- (0223E08C) --------------------------------------------------------
int __fastcall Function_223e08c(uchar *a1)
{
  return Function_20c1ab0(
           a1,
           "%3d%3d%3d%3d",
           *(uchar *)(dword_2252CF4[420] + 1216),
           *(uchar *)(dword_2252CF4[420] + 1217),
           *(uchar *)(dword_2252CF4[420] + 1218),
           *(uchar *)(dword_2252CF4[420] + 1219));
}

//----- (0223E0CC) --------------------------------------------------------
int __fastcall Function_223e0cc(uchar *a1)
{
  return Function_20c1ab0(
           a1,
           "%3d%3d%3d%3d",
           *(uchar *)(dword_2252CF4[420] + 1264),
           *(uchar *)(dword_2252CF4[420] + 1265),
           *(uchar *)(dword_2252CF4[420] + 1266),
           *(uchar *)(dword_2252CF4[420] + 1267));
}

//----- (0223E10C) --------------------------------------------------------
int __fastcall Function_223e10c(uchar *a1)
{
  return Function_20c1ab0(
           a1,
           "%3d%3d%3d%3d",
           *(uchar *)(dword_2252CF4[420] + 1220),
           *(uchar *)(dword_2252CF4[420] + 1221),
           *(uchar *)(dword_2252CF4[420] + 1222),
           *(uchar *)(dword_2252CF4[420] + 1223));
}

//----- (0223E150) --------------------------------------------------------
int __fastcall Function_223e150(uchar *a1)
{
  return Function_20c1ab0(
           a1,
           "%3d%3d%3d%3d",
           *(uchar *)(dword_2252CF4[420] + 1224),
           *(uchar *)(dword_2252CF4[420] + 1225),
           *(uchar *)(dword_2252CF4[420] + 1226),
           *(uchar *)(dword_2252CF4[420] + 1227));
}

//----- (0223E194) --------------------------------------------------------
int __fastcall Function_223e194(uchar *a1)
{
  return Function_20c1ab0(
           a1,
           "%3d%3d%3d%3d",
           *(uchar *)(dword_2252CF4[420] + 1228),
           *(uchar *)(dword_2252CF4[420] + 1229),
           *(uchar *)(dword_2252CF4[420] + 1230),
           *(uchar *)(dword_2252CF4[420] + 1231));
}

//----- (0223E1D8) --------------------------------------------------------
int __fastcall Function_223e1d8(int a1)
{
  return *(uchar *)(dword_2252CF4[420] + (a1 << 8) + 231);
}

//----- (0223E1F0) --------------------------------------------------------
uint __fastcall Function_223e1f0(int a1)
{
  int v1;
  int v2;
  char *v3;
  uchar *v4;
  char v5;
  char v6;

  v1 = 120;
  v2 = dword_2252CF4[420] + (a1 << 8);
  v3 = (char *)(dword_2252CF4[420] + (a1 << 8));
  v4 = (uchar *)(dword_2252CF4[420] + 1024);
  do
  {
    v5 = *v3;
    v6 = v3[1];
    v3 += 2;
    --v1;
    *v4 = v5;
    v4[1] = v6;
    v4 += 2;
  }
  while ( v1 );
  *(uchar *)(dword_2252CF4[420] + 1268) = a1;
  *(uchar *)(dword_2252CF4[420] + 1269) = Function_20d5190(
                                            (uchar *)(v2 + 192),
                                            (uchar *)&dword_22495C4,
                                            4) == 0;
  *(uchar *)(dword_2252CF4[420] + 1270) = !Function_20d5190(
                                             (uchar *)(v2 + 200),
                                             (uchar *)&dword_22495C4,
                                             4)
                                       && !Function_20d5190(
                                             (uchar *)(v2 + 204),
                                             (uchar *)&dword_22495C4,
                                             4);
  return Function_20a2bd8(*(uchar *)(v2 + 208), dword_2252CF4[420] + 1264);
}

//----- (0223E2D0) --------------------------------------------------------
int Function_223e2d0()
{
  int v0;
  int v1;
  char *v2;
  int v3;
  uchar *v4;
  char v5;
  char v6;
  uint v7;
  char v8;
  uint v9;

  v0 = 120;
  v1 = *(uchar *)(dword_2252CF4[420] + 1268);
  v2 = (char *)(dword_2252CF4[420] + 1024);
  v3 = dword_2252CF4[420] + (v1 << 8);
  v4 = (uchar *)(dword_2252CF4[420] + (v1 << 8));
  do
  {
    v5 = *v2;
    v6 = v2[1];
    v2 += 2;
    --v0;
    *v4 = v5;
    v4[1] = v6;
    v4 += 2;
  }
  while ( v0 );
  if ( *(uchar *)(dword_2252CF4[420] + 1269) )
  {
    MI_CpuFill8((ushort *)(v3 + 192), 0, 4u);
    MI_CpuFill8((ushort *)(v3 + 196), 0, 4u);
    v8 = 0;
  }
  else
  {
    MI_CpuCopy8(dword_2252CF4[420] + 1216, v3 + 192, 4u, (uint)v4);
    MI_CpuCopy8(dword_2252CF4[420] + 1220, v3 + 196, 4u, v9);
    v8 = Function_20a2b94(dword_2252CF4[420] + 1264);
  }
  *(uchar *)(v3 + 208) = v8;
  if ( *(uchar *)(dword_2252CF4[420] + 1270) )
    MI_CpuFill8((ushort *)(v3 + 200), 0, 8u);
  else
    MI_CpuCopy8(dword_2252CF4[420] + 1224, v3 + 200, 8u, v7);
  return Function_223e6cc(*(uchar *)(dword_2252CF4[420] + 1268));
}

//----- (0223E3AC) --------------------------------------------------------
int __fastcall Function_223e3ac(int a1)
{
  int v1;
  uint v2;
  uint v3;
  int v4;
  uint v5;
  int v6;
  uint v7;
  int v8;

  v1 = a1;
  MI_CpuFill8((ushort *)(dword_2252CF4[420] + 1024), 0, 0xEFu);
  MI_CpuCopy8(v1, dword_2252CF4[420] + 1088, 0x20u, v2);
  v4 = *(uint *)(v1 + 32);
  switch ( v4 )
  {
    case 1:
      v5 = 5;
      *(uchar *)(dword_2252CF4[420] + 1254) = *(uchar *)(dword_2252CF4[420] + 1254) & 0xFC | 1;
      break;
    case 2:
      v5 = 13;
      *(uchar *)(dword_2252CF4[420] + 1254) = *(uchar *)(dword_2252CF4[420] + 1254) & 0xFC | 2;
      break;
    case 3:
      v5 = 16;
      *(uchar *)(dword_2252CF4[420] + 1254) = *(uchar *)(dword_2252CF4[420] + 1254) & 0xFC | 3;
      break;
    default:
      v5 = 0;
      *(uchar *)(dword_2252CF4[420] + 1254) &= 0xFCu;
      break;
  }
  v6 = v1 + 40;
  v7 = dword_2252CF4[420] + 1152;
  *(uchar *)(dword_2252CF4[420] + 1254) &= 3u;
  v8 = 0;
  do
  {
    MI_CpuCopy8(v6, v7, v5, v3);
    ++v8;
    v7 += 16;
    v6 += 32;
  }
  while ( v8 < 4 );
  *(uchar *)(dword_2252CF4[420] + 1255) = 2;
  MI_CpuFill8((ushort *)(dword_2252CF4[420] + 1264), 0, 4u);
  *(uchar *)(dword_2252CF4[420] + 1269) = 1;
  *(uchar *)(dword_2252CF4[420] + 1270) = 1;
  return Function_223e2d0();
}

//----- (0223E4C0) --------------------------------------------------------
int __fastcall Function_223e4c0(int a1)
{
  int v1;
  uint v2;
  uint v3;
  uint v4;
  uint v5;
  uint v6;
  uint v7;
  uint v8;
  uint v9;
  uint v10;
  uint v11;
  char v12;

  v1 = a1;
  MI_CpuFill8((ushort *)(dword_2252CF4[420] + 1024), 0, 0xEFu);
  MI_CpuCopy8(v1, dword_2252CF4[420] + 1233, 5u, v2);
  MI_CpuCopy8(v1 + 6, dword_2252CF4[420] + 1238, 5u, v3);
  MI_CpuCopy8(v1 + 12, dword_2252CF4[420] + 1243, 5u, v4);
  MI_CpuCopy8(v1 + 18, dword_2252CF4[420] + 1248, 5u, v5);
  MI_CpuCopy8(v1 + 24, dword_2252CF4[420] + 1120, 0x20u, v6);
  MI_CpuCopy8(v1 + 57, dword_2252CF4[420] + 1152, 0xDu, v7);
  MI_CpuCopy8(v1 + 71, dword_2252CF4[420] + 1168, 0xDu, v8);
  MI_CpuCopy8(v1 + 85, dword_2252CF4[420] + 1184, 0xDu, v9);
  MI_CpuCopy8(v1 + 99, dword_2252CF4[420] + 1200, 0xDu, v10);
  MI_CpuCopy8(v1 + 113, dword_2252CF4[420] + 1088, 0x20u, v11);
  v12 = *(uchar *)(dword_2252CF4[420] + 1254) & 0xFC | 2;
  *(uchar *)(dword_2252CF4[420] + 1254) = v12;
  *(uchar *)(dword_2252CF4[420] + 1254) = v12 & 3;
  *(uchar *)(dword_2252CF4[420] + 1255) = 1;
  MI_CpuFill8((ushort *)(dword_2252CF4[420] + 1264), 0, 4u);
  *(uchar *)(dword_2252CF4[420] + 1269) = 1;
  *(uchar *)(dword_2252CF4[420] + 1270) = 1;
  return Function_223e2d0();
}

//----- (0223E5D0) --------------------------------------------------------
int Function_223e5d0()
{
  return dword_2252CF4[420];
}

//----- (0223E5E0) --------------------------------------------------------
int __fastcall Function_223e5e0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = dword_2252CF4[420] + (a1 << 8);
  MI_CpuFill8((ushort *)(dword_2252CF4[420] + (a1 << 8)), 0, 0xEFu);
  *(uchar *)(v2 + 231) = -1;
  return Function_223e6cc(v1);
}

//----- (0223E61C) --------------------------------------------------------
int __fastcall Function_223e61c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  int *v8;
  int v9;
  int v10;
  int result;
  char v12;
  int v13;

  v13 = a4;
  MIi_CpuClear16(0, dword_2252CF4[420], 1024);
  v4 = 0;
  do
  {
    v5 = dword_2252CF4[420] + (v4++ << 8);
    *(uchar *)(v5 + 231) = -1;
  }
  while ( v4 < 3 );
  Function_20a3a3c((uint)&v12, v5, 255, v4);
  v6 = 0;
  v8 = Function_20a3338((int)&v12);
  v9 = 0;
  do
  {
    MI_CpuCopy8((int)v8, dword_2252CF4[420] + v9 + 240, 0xEu, v7);
    ++v6;
    v9 += 256;
  }
  while ( v6 < 2 );
  v10 = 0;
  do
    result = Function_223e6cc(v10++);
  while ( v10 < 4 );
  return result;
}

//----- (0223E6CC) --------------------------------------------------------
int __fastcall Function_223e6cc(int a1, int a2, int a3, int a4)
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
  v4 = a1;
  v5 = 0;
  v6 = *(uchar *)(dword_2252CF4[420] + (a1 << 8) + 231);
  MI_CpuFill8(&v12, 0, 0x10u);
  *(&v12 + v4) = 1;
  if ( v4 <= 2 )
  {
    if ( *(uchar *)(dword_2252CF4[420] + 239) & (1 << v4) )
      v5 = 1;
    if ( v6 == 255 && v5 )
    {
      v7 = ~(1 << v4);
      *(uchar *)(dword_2252CF4[420] + 239) &= v7;
      *(uchar *)(dword_2252CF4[420] + 495) &= v7;
      v13 = 1;
      v12 = 1;
    }
    else if ( v6 != 255 && !v5 )
    {
      v7 = *(uchar *)(dword_2252CF4[420] + 239) | (1 << v4);
      *(uchar *)(dword_2252CF4[420] + 239) = v7;
      *(uchar *)(dword_2252CF4[420] + 495) |= 1 << v4;
      v13 = 1;
      v12 = 1;
    }
  }
  v8 = 0;
  v9 = 0;
  do
  {
    if ( *(&v12 + v8) )
      *(ushort *)(dword_2252CF4[420] + (v8 << 8) + 254) = Function_20d32d4(
                                                           dword_2252CF4[420] + 1272,
                                                           (uchar *)(dword_2252CF4[420] + v9),
                                                           0xFEu,
                                                           v7);
    ++v8;
    v9 += 256;
  }
  while ( v8 < 4 );
  v11 = Function_2245068(256, 32);
  Function_20a2a60((uchar *)dword_2252CF4[420], (int)&v12, v11);
  return Function_224508c(&v11);
}

//----- (0223E834) --------------------------------------------------------
void __fastcall Function_223e834(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  char v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a2;
  MI_CpuFill8(&v13, 0, 4u);
  v7 = 0;
  v8 = 0;
  do
  {
    MI_CpuCopy8(v4 + v8, (uint)&v13, 3u, v6);
    v10 = 0;
    v11 = &v13;
    do
    {
      if ( *(uchar *)v11 )
        break;
      ++v10;
      *(uchar *)v11 = 32;
      v11 = (int *)((char *)v11 + 1);
    }
    while ( v10 < 3 );
    Function_20dae0c((int)&v13, v10, (int)v11, v9);
    *(uchar *)(v5 + v7++) = v12;
    v8 += 3;
  }
  while ( v7 < 4 );
}

//----- (0223E8BC) --------------------------------------------------------
int __fastcall Function_223e8bc(uint a1)
{
  if ( a1 <= 0x39 )
    return a1 - 48;
  if ( a1 > 0x46 )
    return a1 - 87;
  return a1 - 55;
}

//----- (0223E8D8) --------------------------------------------------------
int __fastcall Function_223e8d8(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;

  v5 = a4;
  dword_2252CF4[421] = Function_2245068(160, 4);
  *(uint *)(dword_2252CF4[421] + 152) = Function_2243738("sound/sound_data.sdat.l", &v5, 32);
  Function_20b799c();
  Function_20b9a20((uint *)dword_2252CF4[421], *(int **)(dword_2252CF4[421] + 152));
  Function_20bacdc(0);
  Function_20b80dc((uint *)(dword_2252CF4[421] + 148));
  result = Function_2246304(0, Function_223ea1c, 0, 200);
  *(uint *)(dword_2252CF4[421] + 156) = result;
  return result;
}

//----- (0223E968) --------------------------------------------------------
int Function_223e968()
{
  Function_22463ac(0, *(uint *)(dword_2252CF4[421] + 156));
  return Function_224508c(&dword_2252CF4[421]);
}

//----- (0223E994) --------------------------------------------------------
int __fastcall Function_223e994(uint a1)
{
  return Function_20bae30((int *)(dword_2252CF4[421] + 148), 0, a1);
}

//----- (0223E9B8) --------------------------------------------------------
int *__fastcall Function_223e9b8(char a1)
{
  return Function_20b8120((int *)(dword_2252CF4[421] + 148), a1);
}

//----- (0223E9D8) --------------------------------------------------------
uint *__fastcall Function_223e9d8(int a1, int a2)
{
  return Function_20b8194((uint *)(dword_2252CF4[421] + 148), a1, a2);
}

//----- (0223E9FC) --------------------------------------------------------
int Function_223e9fc()
{
  return Function_20b7fc8((int *)(dword_2252CF4[421] + 148), 0);
}

//----- (0223EA1C) --------------------------------------------------------
int Function_223ea1c()
{
  return Function_20b7a24();
}

//----- (0223EA28) --------------------------------------------------------
int __fastcall Function_223ea28(int a1)
{
  int v1;
  uchar *v2;
  uchar *v3;
  int v4;
  int v5;
  int v7;

  v7 = a1;
  v1 = 0;
  dword_2252CF4[423] = Function_2245068(28, 4);
  v2 = (uchar *)dword_22495C8 + 5 * v7;
  v3 = (uchar *)(5 * v7 + 35952087);
  do
  {
    v4 = *v2++;
    *(uint *)(dword_2252CF4[423] + 4 * v1) = Function_2243f8c(1, v4, 1);
    Function_2243de4(*(uint *)(dword_2252CF4[423] + 4 * v1), -1, 0);
    Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v1), -1, -42, LOWORD(dword_22495C8[v1 + 8]));
    v5 = *v3++;
    Function_2243c74(*(uint *)(dword_2252CF4[423] + 4 * v1++), -1, 0, v5);
  }
  while ( v1 < 5 );
  *(uint *)(dword_2252CF4[423] + 20) = Function_2246304(0, Function_223eb24, 0, 120);
  Function_223f4d0(v7);
  return Function_223e994(0xDu);
}

//----- (0223EB24) --------------------------------------------------------
int __fastcall Function_223eb24(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  char v5;
  int v6;

  v1 = a1;
  Function_2243e44(*(uint *)dword_2252CF4[423], 0, &v6, &v5);
  v6 += 8;
  if ( v6 >= 32 && v6 <= 256 )
  {
    v6 = 32;
    v4 = 0;
    do
    {
      Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v4), -1, v6, LOWORD(dword_22495C8[v4 + 8]));
      ++v4;
    }
    while ( v4 < 5 );
    result = Function_22463a4(v1, Function_223ec08);
  }
  else
  {
    v2 = 0;
    do
    {
      result = Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v2), -1, v6, LOWORD(dword_22495C8[v2 + 8]));
      ++v2;
    }
    while ( v2 < 5 );
  }
  return result;
}

//----- (0223EC08) --------------------------------------------------------
int __fastcall Function_223ec08(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;
  char v6;
  int v7;

  v1 = a1;
  Function_2243e44(*(uint *)(dword_2252CF4[423] + 4), 0, &v7, &v6);
  v2 = v7 + 8;
  v7 = v2;
  if ( v2 >= 80 && v2 <= 256 )
  {
    v7 = 80;
    v5 = 1;
    do
    {
      Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v5), -1, v7, LOWORD(dword_22495C8[v5 + 8]));
      ++v5;
    }
    while ( v5 < 5 );
    result = Function_22463a4(v1, Function_223ecec);
  }
  else
  {
    v3 = 1;
    do
    {
      result = Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v3), -1, v7, LOWORD(dword_22495C8[v3 + 8]));
      ++v3;
    }
    while ( v3 < 5 );
  }
  return result;
}

//----- (0223ECEC) --------------------------------------------------------
int __fastcall Function_223ecec(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;
  char v6;
  int v7;

  v1 = a1;
  Function_2243e44(*(uint *)(dword_2252CF4[423] + 8), 0, &v7, &v6);
  v2 = v7 + 8;
  v7 = v2;
  if ( v2 >= 104 && v2 <= 256 )
  {
    v7 = 104;
    v5 = 2;
    do
    {
      Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v5), -1, v7, LOWORD(dword_22495C8[v5 + 8]));
      ++v5;
    }
    while ( v5 < 5 );
    result = Function_22463a4(v1, Function_223edd0);
  }
  else
  {
    v3 = 2;
    do
    {
      result = Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v3), -1, v7, LOWORD(dword_22495C8[v3 + 8]));
      ++v3;
    }
    while ( v3 < 5 );
  }
  return result;
}

//----- (0223EDD0) --------------------------------------------------------
int __fastcall Function_223edd0(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;
  char v6;
  int v7;

  v1 = a1;
  Function_2243e44(*(uint *)(dword_2252CF4[423] + 12), 0, &v7, &v6);
  v2 = v7 + 8;
  v7 = v2;
  if ( v2 >= 152 && v2 <= 256 )
  {
    v7 = 152;
    v5 = 3;
    do
    {
      Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v5), -1, v7, LOWORD(dword_22495C8[v5 + 8]));
      ++v5;
    }
    while ( v5 < 5 );
    result = Function_22463a4(v1, Function_223eeb4);
  }
  else
  {
    v3 = 3;
    do
    {
      result = Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v3), -1, v7, LOWORD(dword_22495C8[v3 + 8]));
      ++v3;
    }
    while ( v3 < 5 );
  }
  return result;
}

//----- (0223EEB4) --------------------------------------------------------
int __fastcall Function_223eeb4(int a1)
{
  int v1;
  int v2;
  char v4;
  int v5;

  v1 = a1;
  Function_2243e44(*(uint *)(dword_2252CF4[423] + 16), 0, &v5, &v4);
  v2 = v5 + 8;
  v5 = v2;
  if ( v2 < 176 || v2 > 256 )
    return Function_2243cf4(*(uint *)(dword_2252CF4[423] + 16), -1, v2, 33);
  v5 = 176;
  Function_2243cf4(*(uint *)(dword_2252CF4[423] + 16), -1, 176, 33);
  return Function_22463a4(v1, Function_223ef54);
}

//----- (0223EF54) --------------------------------------------------------
int __fastcall Function_223ef54(int a1)
{
  int result;

  Function_22463ac(0, a1);
  result = dword_2252CF4[423];
  *(uint *)(dword_2252CF4[423] + 20) = 0;
  return result;
}

//----- (0223EF7C) --------------------------------------------------------
int Function_223ef7c()
{
  int result;

  *(uchar *)(dword_2252CF4[423] + 24) = 1;
  result = Function_2246304(0, Function_223f0a4, 0, 120);
  *(uint *)(dword_2252CF4[423] + 20) = result;
  return result;
}

//----- (0223EFBC) --------------------------------------------------------
int __fastcall Function_223efbc(int a1)
{
  int v1;
  uchar *v2;
  uchar *v3;
  int v4;
  int v5;
  int v6;
  int v8;

  v8 = a1;
  v1 = 0;
  v2 = (uchar *)dword_22495C8 + 5 * a1;
  v3 = (uchar *)(5 * a1 + 35952087);
  do
  {
    v4 = Function_2243bbc(*(uint *)(dword_2252CF4[423] + 4 * v1), 0);
    v5 = *v2;
    v2 += 2;
    Function_2243ecc(1, v5, v4);
    Function_2243de4(*(uint *)(dword_2252CF4[423] + 4 * v1), -1, 0);
    Function_2243cf4(
      *(uint *)(dword_2252CF4[423] + 4 * v1),
      -1,
      HIWORD(dword_22495C8[v1 + 7]),
      LOWORD(dword_22495C8[v1 + 8]));
    v6 = *v3;
    v3 += 2;
    Function_2243c74(*(uint *)(dword_2252CF4[423] + 4 * v1), -1, 0, v6);
    v1 += 2;
  }
  while ( v1 < 5 );
  return Function_223f4d0(v8);
}

//----- (0223F084) --------------------------------------------------------
BOOL Function_223f084()
{
  return *(uint *)(dword_2252CF4[423] + 20) != 0;
}

//----- (0223F0A4) --------------------------------------------------------
int __fastcall Function_223f0a4(int a1)
{
  int v1;
  int v2;
  char v4;
  int v5;

  v1 = a1;
  Function_2243e44(*(uint *)(dword_2252CF4[423] + 16), 0, &v5, &v4);
  v2 = v5 - 8;
  v5 = v2;
  if ( v2 > 152 )
    return Function_2243cf4(*(uint *)(dword_2252CF4[423] + 16), -1, v2, 33);
  v5 = 152;
  Function_2243cf4(*(uint *)(dword_2252CF4[423] + 16), -1, 152, 33);
  return Function_22463a4(v1, Function_223f138);
}

//----- (0223F138) --------------------------------------------------------
int __fastcall Function_223f138(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  char v5;
  int v6;

  v1 = a1;
  Function_2243e44(*(uint *)(dword_2252CF4[423] + 12), 0, &v6, &v5);
  v6 -= 8;
  if ( v6 <= 104 )
  {
    v6 = 104;
    v4 = 3;
    do
    {
      Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v4), -1, v6, LOWORD(dword_22495C8[v4 + 8]));
      ++v4;
    }
    while ( v4 < 5 );
    result = Function_22463a4(v1, Function_223f214);
  }
  else
  {
    v2 = 3;
    do
    {
      result = Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v2), -1, v6, LOWORD(dword_22495C8[v2 + 8]));
      ++v2;
    }
    while ( v2 < 5 );
  }
  return result;
}

//----- (0223F214) --------------------------------------------------------
int __fastcall Function_223f214(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  char v5;
  int v6;

  v1 = a1;
  Function_2243e44(*(uint *)(dword_2252CF4[423] + 8), 0, &v6, &v5);
  v6 -= 8;
  if ( v6 <= 80 )
  {
    v6 = 80;
    v4 = 2;
    do
    {
      Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v4), -1, v6, LOWORD(dword_22495C8[v4 + 8]));
      ++v4;
    }
    while ( v4 < 5 );
    result = Function_22463a4(v1, Function_223f2f0);
  }
  else
  {
    v2 = 2;
    do
    {
      result = Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v2), -1, v6, LOWORD(dword_22495C8[v2 + 8]));
      ++v2;
    }
    while ( v2 < 5 );
  }
  return result;
}

//----- (0223F2F0) --------------------------------------------------------
int __fastcall Function_223f2f0(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  char v5;
  int v6;

  v1 = a1;
  Function_2243e44(*(uint *)(dword_2252CF4[423] + 4), 0, &v6, &v5);
  v6 -= 8;
  if ( v6 <= 32 )
  {
    v6 = 32;
    v4 = 1;
    do
    {
      Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v4), -1, v6, LOWORD(dword_22495C8[v4 + 8]));
      ++v4;
    }
    while ( v4 < 5 );
    result = Function_22463a4(v1, Function_223f3cc);
  }
  else
  {
    v2 = 1;
    do
    {
      result = Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v2), -1, v6, LOWORD(dword_22495C8[v2 + 8]));
      ++v2;
    }
    while ( v2 < 5 );
  }
  return result;
}

//----- (0223F3CC) --------------------------------------------------------
int __fastcall Function_223f3cc(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  char v5;
  int v6;

  v1 = a1;
  Function_2243e44(*(uint *)dword_2252CF4[423], 0, &v6, &v5);
  v2 = 0;
  v6 -= 8;
  do
  {
    Function_2243cf4(*(uint *)(dword_2252CF4[423] + 4 * v2), -1, v6, LOWORD(dword_22495C8[v2 + 8]));
    ++v2;
  }
  while ( v2 < 5 );
  result = 470;
  if ( v6 <= 470 && v6 >= 256 )
  {
    Function_22463ac(0, v1);
    v4 = 0;
    do
      Function_2243b3c(*(uint *)(dword_2252CF4[423] + 4 * v4++));
    while ( v4 < 5 );
    result = Function_224508c(&dword_2252CF4[423]);
  }
  return result;
}

//----- (0223F4A4) --------------------------------------------------------
BOOL Function_223f4a4()
{
  BOOL result;

  if ( dword_2252CF4[423] )
    result = *(uchar *)(dword_2252CF4[423] + 24) == 0;
  else
    result = 1;
  return result;
}

//----- (0223F4D0) --------------------------------------------------------
int __fastcall Function_223f4d0(int a1)
{
  int *v1;

  v1 = Function_222b6a0(off_224A634[a1]);
  dword_2252CF4[422] = Function_2243738(v1, 0, 4);
  return Function_2246304(1, Function_223f518, 0, 120);
}

//----- (0223F518) --------------------------------------------------------
int __fastcall Function_223f518(int a1)
{
  int v1;

  v1 = a1;
  DC_FlushRange(dword_2252CF4[422], 1536);
  GXS_LoadBG1Scr(dword_2252CF4[422], 0, 0x600u);
  Function_224382c(dword_2252CF4[422]);
  return Function_22463ac(1, v1);
}

//----- (0223F564) --------------------------------------------------------
int __fastcall Function_223f564(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  uint v12;
  int v13;
  int result;
  char v15;
  char v16;
  ushort v17;

  v1 = a1;
  dword_2252CF4[424] = Function_2245068(7072, 32);
  *(uint *)(dword_2252CF4[424] + 4976) = v1;
  v2 = OS_GetTick();
  v3 = dword_2252CF4[424] + 4096;
  *(uint *)(v3 + 2952) = v2;
  *(uint *)(v3 + 2956) = v4;
  if ( Function_20cecc8(dword_2252CF4[424], (int)Function_223f818, 3u) != 2 )
    goto LABEL_10;
  do
    Function_20ce594((uint *)(dword_2252CF4[424] + 5048));
  while ( *(ushort *)(dword_2252CF4[424] + 5048) != 2 );
  v5 = &dword_2249610;
  v6 = (int *)(dword_2252CF4[424] + 4980);
  v7 = 4;
  do
  {
    v8 = *v5;
    v11 = v5[1];
    v9 = v5[2];
    v10 = v5[3];
    v5 += 4;
    *v6 = v8;
    v6[1] = v11;
    v6[2] = v9;
    v6[3] = v10;
    v6 += 4;
    --v7;
  }
  while ( v7 );
  *v6 = *v5;
  *(uint *)(dword_2252CF4[424] + 4980) = dword_2252CF4[424] + 3840;
  *(ushort *)(dword_2252CF4[424] + 4988) = WM_GetDispersionScanPeriod(
                                            dword_2252CF4[424] + 4096,
                                            dword_2252CF4[424] + 3840,
                                            v9,
                                            v10);
  OS_GetOwnerInfo((int)&v15);
  MI_CpuCopy8((int)"NWCUSBAP", dword_2252CF4[424] + 5000, 8u, v12);
  *(uchar *)(dword_2252CF4[424] + 5009) = 1;
  v13 = MI_CpuCopy8((int)&v16, dword_2252CF4[424] + 5012, 2 * v17, 1u);
  if ( Function_223f6e8(v13) )
  {
    *(uint *)(dword_2252CF4[424] + 7056) = Function_2246304(0, Function_223fb0c, 0, 120);
    result = 1;
  }
  else
  {
LABEL_10:
    Function_224508c(&dword_2252CF4[424]);
    result = 0;
  }
  return result;
}

//----- (0223F6E8) --------------------------------------------------------
BOOL Function_223f6e8()
{
  return WM_StartScanEx((int)Function_223f818, dword_2252CF4[424] + 4980) == 2;
}

//----- (0223F71C) --------------------------------------------------------
int Function_223f71c()
{
  int v0;
  int v1;
  int v2;
  int v4;

  *(uchar *)(dword_2252CF4[424] + 7060) = 1;
  Function_20ce594((uint *)(dword_2252CF4[424] + 5048));
  if ( *(ushort *)(dword_2252CF4[424] + 5048) != 2 )
  {
    if ( WM_Reset((int)Function_223f818) != 2 )
      return 0;
    do
      Function_20ce594((uint *)(dword_2252CF4[424] + 5048));
    while ( *(ushort *)(dword_2252CF4[424] + 5048) != 2 );
  }
  if ( WM_End((int)Function_223f818, v0, v1, v2) != 2 )
    return 0;
  v4 = *(uint *)(dword_2252CF4[424] + 7056);
  if ( v4 )
    Function_22463cc(0, v4);
  while ( *(uchar *)(dword_2252CF4[424] + 7060) != 2 )
    ;
  Function_224508c(&dword_2252CF4[424]);
  return 1;
}

//----- (0223F800) --------------------------------------------------------
int __fastcall Function_223f800(int result)
{
  *(uint *)(dword_2252CF4[424] + 4976) = result;
  return result;
}

//----- (0223F818) --------------------------------------------------------
int __fastcall Function_223f818(int result)
{
  int v1;

  if ( !*(ushort *)(result + 2) )
  {
    if ( *(uchar *)(dword_2252CF4[424] + 7060) )
    {
      result = *(ushort *)result;
      if ( result == 2 )
      {
        result = 2;
        *(uchar *)(dword_2252CF4[424] + 7060) = 2;
      }
    }
    else if ( *(ushort *)result == 38 )
    {
      v1 = *(ushort *)(result + 8);
      if ( v1 == 4 )
      {
        result = Function_223f6e8();
      }
      else
      {
        if ( v1 != 5 )
          OS_Panic();
        if ( *(uchar *)(dword_2252CF4[424] + 7062) )
          Function_223fa00();
        else
          Function_223f8a8();
        result = Function_223f6e8();
      }
    }
  }
  return result;
}

//----- (0223F8A8) --------------------------------------------------------
int __fastcall Function_223f8a8(int a1)
{
  int v1;
  int result;
  int i;
  uchar *v4;
  int v5;
  uchar *v6;
  int (__fastcall *v7)(int);
  uchar *v8;
  int v9;
  uint v10;
  char v11;

  v1 = a1;
  result = *(ushort *)(a1 + 14);
  for ( i = 0; i < result; ++i )
  {
    v4 = *(uchar **)(v1 + 4 * i + 16);
    DC_InvalidateRange(*(uint *)(v1 + 4 * i + 16), 192);
    if ( !Function_20d5190(v4 + 12, "NWCUSBAP", 8) )
    {
      v5 = 0;
      v6 = (uchar *)(dword_2252CF4[424] + 4864);
      while ( Function_20d5190(v4 + 4, v6, 6) )
      {
        ++v5;
        v6 += 7;
        if ( v5 >= 16 )
        {
          v8 = (uchar *)(dword_2252CF4[424] + 4864);
          v9 = 0;
          while ( Function_20d5190(v8, (uchar *)dword_22495FC, 6) )
          {
            ++v9;
            v8 += 7;
            if ( v9 >= 16 )
              goto LABEL_18;
          }
          MI_CpuCopy8((int)(v4 + 4), dword_2252CF4[424] + 4864 + 7 * v9, 6u, v10);
          if ( v4[21] & 1 )
            v11 = 1;
          if ( !(v4[21] & 1) )
            v11 = 0;
          *(uchar *)(dword_2252CF4[424] + 7 * v9 + 4870) = v11;
          goto LABEL_18;
        }
      }
      if ( !*(uchar *)(dword_2252CF4[424] + 7 * v5 + 4870) && v4[21] & 1 )
      {
        result = dword_2252CF4[424] + 4096;
        v7 = *(int (__fastcall **)(int))(dword_2252CF4[424] + 4976);
        if ( v7 )
          result = v7(1);
        return result;
      }
    }
LABEL_18:
    result = *(ushort *)(v1 + 14);
  }
  return result;
}

//----- (0223FA00) --------------------------------------------------------
int __fastcall Function_223fa00(int a1)
{
  int v1;
  int result;
  int (*v3)(void);
  int v4;
  int v5;
  uchar *v6;
  int v7;
  uchar *v8;
  int (__fastcall *v9)(int);

  v1 = a1;
  result = *(uchar *)(dword_2252CF4[424] + 7061);
  if ( *(uchar *)(dword_2252CF4[424] + 7061) )
  {
    v3 = *(int (**)(void))(dword_2252CF4[424] + 4976);
    if ( v3 )
      result = v3();
  }
  else
  {
    result = DC_InvalidateRange(dword_2252CF4[424] + 3840, 1024);
    v4 = *(ushort *)(v1 + 14);
    v5 = 0;
    if ( v4 > 0 )
    {
      while ( 1 )
      {
        v6 = *(uchar **)(v1 + 4 * v5 + 16);
        result = Function_20d5190(v6 + 12, "NWCUSBAP", 8);
        if ( !result )
        {
          result = v6[21];
          if ( result & 1 )
          {
            v7 = 0;
            v8 = (uchar *)(dword_2252CF4[424] + 4864);
            while ( 1 )
            {
              result = Function_20d5190(v6 + 4, v8, 6);
              if ( !result )
                break;
              ++v7;
              v8 += 7;
              if ( v7 >= 16 )
                goto LABEL_15;
            }
            result = *(uchar *)(dword_2252CF4[424] + 7 * v7 + 4870);
            if ( !*(uchar *)(dword_2252CF4[424] + 7 * v7 + 4870) )
              break;
          }
        }
LABEL_15:
        if ( ++v5 >= v4 )
          return result;
      }
      result = dword_2252CF4[424] + 4096;
      v9 = *(int (__fastcall **)(int))(dword_2252CF4[424] + 4976);
      if ( v9 )
        result = v9(1);
      else
        *(uchar *)(dword_2252CF4[424] + 7061) = 1;
    }
  }
  return result;
}

//----- (0223FB0C) --------------------------------------------------------
int __fastcall Function_223fb0c(int a1)
{
  ull v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uchar *v6;
  bool v7;
  void (__fastcall *v8)(int);
  void (__fastcall *v9)(int);
  void (__fastcall *v10)(uint);
  int v12;

  v12 = a1;
  LODWORD(v1) = OS_GetTick();
  v2 = 0;
  if ( v1 >= *(ull *)(dword_2252CF4[424] + 7048) + 1570968LL )
  {
    v3 = 0;
    v4 = 0;
    v5 = dword_2252CF4[424];
    v6 = (uchar *)(dword_2252CF4[424] + 4864);
    do
    {
      if ( Function_20d5190(v6, (uchar *)dword_22495FC, 6) )
      {
        if ( *(uchar *)(v5 + 4870) )
          v3 = 1;
        else
          v2 = 1;
      }
      ++v4;
      v6 += 7;
      v5 += 7;
    }
    while ( v4 < 16 );
    v7 = v3 == 0;
    if ( v3 )
      v7 = v2 == 0;
    if ( v7 )
    {
      if ( v3 )
      {
        v9 = *(void (__fastcall **)(int))(dword_2252CF4[424] + 4976);
        if ( v9 )
          v9(1);
      }
      else if ( !v2 )
      {
        v10 = *(void (__fastcall **)(uint))(dword_2252CF4[424] + 4976);
        if ( v10 )
          v10(0);
      }
    }
    else
    {
      v8 = *(void (__fastcall **)(int))(dword_2252CF4[424] + 4976);
      if ( v8 )
        v8(2);
    }
    *(uint *)(dword_2252CF4[424] + 7056) = 0;
    *(uchar *)(dword_2252CF4[424] + 7062) = 1;
    LODWORD(v1) = Function_22463ac(0, v12);
  }
  return v1;
}

//----- (0223FC48) --------------------------------------------------------
int __fastcall Function_223fc48(ushort a1, int a2, int a3, int a4, short a5)
{
  int v5;
  int v6;
  uchar *v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;
  char v15;
  char v16;
  char v17;
  char v18;
  char v19;
  char v20;

  v15 = 1;
  v12 = a3;
  v5 = a2;
  v16 = 1;
  v17 = 0;
  v18 = 0;
  v19 = 1;
  v20 = 1;
  v13 = Function_222f8d0((uint *)dword_2252CF4[377], a1, a4, a5);
  dword_2252CF4[425] = Function_2245068(32, 4);
  *(uchar *)(dword_2252CF4[425] + 28) = v5;
  *(uchar *)(dword_2252CF4[425] + 27) = -2;
  *(uchar *)(dword_2252CF4[425] + 30) = v12;
  G2x_SetBlendBrightness_(&REG_BLDCNT, 31, 0);
  *(uint *)dword_2252CF4[425] = Function_2243f8c(0, *((uchar *)dword_2249708 + v5), 0);
  Function_2243cf4(*(uint *)dword_2252CF4[425], -1, 256, 0);
  Function_2243de4(*(uint *)dword_2252CF4[425], -1, 0);
  v6 = 0;
  if ( (int)*((uchar *)dword_2249710 + v5) > 0 )
  {
    v7 = (uchar *)(2 * v5 + 35952250);
    do
    {
      v8 = *v7++;
      *(uint *)(dword_2252CF4[425] + 4 * v6 + 8) = Function_2243f8c(0, v8, 0);
      Function_2243cf4(*(uint *)(dword_2252CF4[425] + 4 * v6 + 8), -1, 256, 0);
      Function_2243de4(*(uint *)(dword_2252CF4[425] + 4 * v6++ + 8), -1, 0);
    }
    while ( v6 < *((uchar *)dword_2249710 + v5) );
  }
  *(uint *)(dword_2252CF4[425] + 16) = Function_2244574(0, 32);
  v9 = Function_22439e0(0, v14, 0);
  *(uint *)(dword_2252CF4[425] + 4) = v9;
  v10 = Function_222b8f8(v9);
  Function_2244a9c(
    *(uint *)(dword_2252CF4[425] + 16),
    0,
    0,
    LOWORD(dword_2249698[v5]),
    HIWORD(dword_2249698[v5]),
    2,
    v10,
    v13);
  Function_2244b70(*(uint *)(dword_2252CF4[425] + 16), 256, 0, *(uint *)(dword_2252CF4[425] + 4), 0);
  ((void (*)(void))Function_2244e4c)();
  Function_2244e4c(0, 1, 31, (uchar)*(&v15 + *(uchar *)(dword_2252CF4[425] + 28)));
  Function_2244e4c(0, 3, 31, 1);
  Function_2244d34(0, 1, &word_224965E);
  Function_22402e4(192);
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x6000;
  if ( v12 )
    result = Function_2246304(1, Function_223ffe8, 0, 120);
  else
    result = Function_2246304(1, Function_2240048, 0, 120);
  *(uint *)(dword_2252CF4[425] + 20) = result;
  return result;
}

//----- (0223FF74) --------------------------------------------------------
int Function_223ff74()
{
  int result;

  Function_22463ac(0, *(uint *)(dword_2252CF4[425] + 20));
  result = Function_2246304(1, Function_22405d8, 0, 120);
  *(uint *)(dword_2252CF4[425] + 20) = result;
  return result;
}

//----- (0223FFB8) --------------------------------------------------------
int Function_223ffb8()
{
  return *(char *)(dword_2252CF4[425] + 27);
}

//----- (0223FFCC) --------------------------------------------------------
BOOL Function_223ffcc()
{
  return dword_2252CF4[425] != 0;
}

//----- (0223FFE8) --------------------------------------------------------
int __fastcall Function_223ffe8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_20bf5e8(&REG_BLDCNT, (char)--*(uchar *)(dword_2252CF4[425] + 26));
  result = -12;
  if ( *(char *)(dword_2252CF4[425] + 26) <= -12 )
    result = Function_22463a4(v1, Function_2240048);
  return result;
}

//----- (02240048) --------------------------------------------------------
int __fastcall Function_2240048(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  char v6;

  v1 = a1;
  Function_2243e44(*(uint *)dword_2252CF4[425], 0, &v6, &v5);
  v2 = v5 - 12;
  v5 = v2;
  if ( v2 > HIWORD(dword_22496B0[*(uchar *)(dword_2252CF4[425] + 28)]) )
    return Function_22402e4(v2);
  Function_22402e4(HIWORD(dword_22496B0[*(uchar *)(dword_2252CF4[425] + 28)]));
  if ( *(uchar *)(dword_2252CF4[425] + 28) == 5 )
    v4 = Function_2246304(0, Function_2240278, 0, 120);
  else
    v4 = Function_2246304(0, Function_224011c, 0, 120);
  *(uint *)(dword_2252CF4[425] + 20) = v4;
  return Function_22463ac(1, v1);
}

//----- (0224011C) --------------------------------------------------------
int Function_224011c()
{
  int v0;
  int v1;
  int v2;
  int result;
  char v4;

  v0 = 0;
  v1 = *(uchar *)(dword_2252CF4[425] + 28);
  if ( (int)*((uchar *)dword_2249710 + v1) > 0 )
  {
    while ( 1 )
    {
      Function_2244c50(&dword_22496E0[2 * v1 + *(uchar *)(v0 + 2 * v1 + 35952230)], &dword_2249684[v1], &v4);
      if ( Function_22455b8(&v4) )
        break;
      ++v0;
      v1 = *(uchar *)(dword_2252CF4[425] + 28);
      if ( v0 >= *((uchar *)dword_2249710 + v1) )
        goto LABEL_5;
    }
    *(uchar *)(dword_2252CF4[425] + 27) = v0;
  }
LABEL_5:
  if ( Function_2245470(1) )
    *(uchar *)(dword_2252CF4[425] + 27) = *((uchar *)dword_2249670 + 2 * *(uchar *)(dword_2252CF4[425] + 28));
  if ( Function_2245470(2) )
    *(uchar *)(dword_2252CF4[425] + 27) = *((uchar *)dword_2249670
                                          + 2 * *(uchar *)(dword_2252CF4[425] + 28)
                                          + 1);
  v2 = 0;
  if ( (int)*((uchar *)dword_2249710 + *(uchar *)(dword_2252CF4[425] + 28)) <= 0 )
  {
LABEL_13:
    result = -1;
    *(uchar *)(dword_2252CF4[425] + 27) = -1;
  }
  else
  {
    while ( v2 != *(char *)(dword_2252CF4[425] + 27) )
    {
      if ( ++v2 >= *((uchar *)dword_2249710 + *(uchar *)(dword_2252CF4[425] + 28)) )
        goto LABEL_13;
    }
    result = Function_2240518();
  }
  return result;
}

//----- (02240278) --------------------------------------------------------
uint __fastcall Function_2240278(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  *(uchar *)(dword_2252CF4[425] + 27) = -1;
  result = (ushort)++*(ushort *)(dword_2252CF4[425] + 24);
  if ( result >= 0x78 )
  {
    Function_22463ac(0, v1);
    result = Function_2246304(1, Function_22405d8, 0, 120);
    *(uint *)(dword_2252CF4[425] + 20) = result;
  }
  return result;
}

//----- (022402E4) --------------------------------------------------------
int __fastcall Function_22402e4(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v11;

  v1 = a1;
  Function_2243cf4(
    *(uint *)dword_2252CF4[425],
    -1,
    LOWORD(dword_22496B0[*(uchar *)(dword_2252CF4[425] + 28)]),
    a1);
  Function_2243cf4(
    *(uint *)(dword_2252CF4[425] + 4),
    -1,
    LOWORD(dword_22496B0[*(uchar *)(dword_2252CF4[425] + 28)]) + 8,
    v1 + 8);
  Function_224048c(*(uint *)dword_2252CF4[425], v1);
  Function_224048c(*(uint *)(dword_2252CF4[425] + 4), v1);
  v2 = 0;
  v3 = *(uchar *)(dword_2252CF4[425] + 28);
  if ( (int)*((uchar *)dword_2249710 + v3) > 0 )
  {
    do
    {
      v4 = &dword_22496B0[v3];
      v5 = &dword_22496E0[2 * v3 + *(uchar *)(v2 + 2 * v3 + 35952230)];
      Function_2243cf4(
        *(uint *)(dword_2252CF4[425] + 4 * v2 + 8),
        -1,
        *(ushort *)v5,
        v1 + *((ushort *)v5 + 1) - *((ushort *)v4 + 1));
      Function_224048c(*(uint *)(dword_2252CF4[425] + 4 * v2++ + 8), v1);
      v3 = *(uchar *)(dword_2252CF4[425] + 28);
    }
    while ( v2 < *((uchar *)dword_2249710 + v3) );
  }
  if ( (int)(uchar)v1 < 192 )
    v6 = (uchar)v1 + HIWORD(dword_22496C8[v3]);
  v7 = v3;
  v8 = LOWORD(dword_22496B0[v3]);
  v9 = v8 + LOWORD(dword_22496C8[v7]);
  Function_2244c38(v8);
  return Function_2244d34(0, 0, &v11);
}

//----- (0224048C) --------------------------------------------------------
int __fastcall Function_224048c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int i;
  int v9;
  int v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  result = Function_2243bc8();
  v7 = result;
  for ( i = 0; i < v7; ++i )
  {
    Function_2243e44(v4, i, &v11, &v10);
    if ( v10 < v5 || v10 >= 192 )
      v9 = 512;
    else
      v9 = 0;
    result = Function_2243bd0(v4, i, v9, 0);
  }
  return result;
}

//----- (02240518) --------------------------------------------------------
int __fastcall Function_2240518(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_2243bbc(*(uint *)(dword_2252CF4[425] + 4 * a1 + 8), 0);
  Function_2243ecc(0, *(uchar *)(v1 + 2 * *(uchar *)(dword_2252CF4[425] + 28) + 35952250) + 1, v2);
  v3 = *(uchar *)(dword_2252CF4[425] + 28);
  Function_2243cf4(
    *(uint *)(dword_2252CF4[425] + 4 * v1 + 8),
    -1,
    LOWORD(dword_22496E0[2 * v3 + *(uchar *)(v1 + 2 * v3 + 35952230)]),
    HIWORD(dword_22496E0[2 * v3 + *(uchar *)(v1 + 2 * v3 + 35952230)]));
  return Function_2243de4(*(uint *)(dword_2252CF4[425] + 4 * v1 + 8), -1, 0);
}

//----- (022405D8) --------------------------------------------------------
int __fastcall Function_22405d8(int result)
{
  if ( (uchar)++*(uchar *)(dword_2252CF4[425] + 29) >= 8u )
    result = Function_22463a4(result, Function_2240614);
  return result;
}

//----- (02240614) --------------------------------------------------------
int __fastcall Function_2240614(int a1)
{
  int v1;
  int result;
  int v3;
  char v4;

  v1 = a1;
  Function_2243e44(*(uint *)dword_2252CF4[425], 0, &v4, &v3);
  v3 += 12;
  Function_22402e4(v3);
  result = v3;
  if ( v3 >= 192 )
  {
    if ( *(uchar *)(dword_2252CF4[425] + 30) )
      result = Function_22463a4(v1, Function_22406a4);
    else
      result = Function_22463a4(v1, Function_2240700);
  }
  return result;
}

//----- (022406A4) --------------------------------------------------------
int __fastcall Function_22406a4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_20bf5e8(&REG_BLDCNT, (char)++*(uchar *)(dword_2252CF4[425] + 26));
  result = *(char *)(dword_2252CF4[425] + 26);
  if ( result >= 0 )
    result = Function_22463a4(v1, Function_2240700);
  return result;
}

//----- (02240700) --------------------------------------------------------
int __fastcall Function_2240700(int a1)
{
  int v1;
  int v2;
  int i;
  int v4;

  REG_DISPCNT &= 0xFFFF1FFF;
  v1 = a1;
  Function_2243b3c(*(uint *)dword_2252CF4[425]);
  Function_2243b3c(*(uint *)(dword_2252CF4[425] + 4));
  v2 = dword_2252CF4[425];
  for ( i = 0; i < *((uchar *)dword_2249710 + *(uchar *)(dword_2252CF4[425] + 28)); ++i )
  {
    v4 = *(uint *)(v2 + 4 * i + 8);
    if ( v4 )
      Function_2243b3c(v4);
    v2 = dword_2252CF4[425];
  }
  Function_2244650(*(uint *)(v2 + 16));
  Function_22463ac(1, v1);
  return Function_224508c(&dword_2252CF4[425]);
}

//----- (022407B0) --------------------------------------------------------
int __fastcall Function_22407b0(int a1)
{
  int result;

  dword_2252CF4[426] = a1;
  Function_2241448(a1 + 110944);
  *(uint *)(dword_2252CF4[426] + 110912) = 0;
  result = dword_2252CF4[426] + 110592;
  *(uint *)(dword_2252CF4[426] + 110916) = 0;
  return result;
}

//----- (022407F0) --------------------------------------------------------
int __fastcall Function_22407f0(int a1, int a2)
{
  int v2;
  int v3;
  char *v4;
  ushort *v5;
  int v6;
  short v7;
  short v8;
  char v10;
  short v11;
  short v12;
  short v13;
  short v14;
  short v15;
  short v16;
  char v17;
  char v18;
  char v19;
  char v20;
  char v21;
  char v22;
  ushort v23;

  v2 = a1;
  v3 = a2;
  OS_GetOwnerInfo((int)&v20);
  v17 = v17 & 0xF0 | v21 & 0xF;
  v18 = v23;
  MI_CpuCopy8((int)&v22, (uint)&v19, 2 * v23, v23);
  v4 = &v10;
  v5 = (ushort *)dword_2252CF4[426];
  v17 &= 0xFu;
  *(ushort *)&v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v6 = 3;
  do
  {
    v7 = *(ushort *)v4;
    v8 = *((ushort *)v4 + 1);
    v4 += 4;
    --v6;
    *v5 = v7;
    v5[1] = v8;
    v5 += 2;
  }
  while ( v6 );
  *v5 = *(ushort *)v4;
  *(uint *)(dword_2252CF4[426] + 110912) = dword_2252CF4[426] + 65600;
  if ( Function_222348c(*(uint *)(dword_2252CF4[426] + 110912), (int)&v17, v2, v3, 2) )
    OS_Panic();
  Function_22236e0(0x100u, 1);
  Function_221f84c((int)Function_2240f00);
  return Function_2241224(1);
}

//----- (02240910) --------------------------------------------------------
int __fastcall Function_2240910(int a1, short a2)
{
  int v2;
  short v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_2241224(2);
  if ( Function_2223a30(v3) )
    return Function_2241224(7);
  result = Function_2240958(v2);
  if ( !result )
    OS_Panic();
  return result;
}

//----- (02240958) --------------------------------------------------------
int __fastcall Function_2240958(uchar **a1, int a2, int a3, int a4)
{
  uchar **v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v10;
  char v11;

  v4 = a1;
  v5 = 0;
  if ( *a1 )
  {
    FS_InitFile(&v11);
    if ( !FS_OpenFile((int *)&v11, *v4, v7, v8) )
      return 0;
    v6 = (int *)&v11;
  }
  else
  {
    v6 = 0;
  }
  if ( Function_2220c28(v6, a2, a3, a4) )
  {
    *(uint *)(dword_2252CF4[426] + 110916) = dword_2252CF4[426] + 44;
    v10 = *(uint *)(dword_2252CF4[426] + 110916);
    if ( v10 )
    {
      if ( Function_2220ca8(v6, v10, 0x10000u) && Function_2221198((int)v4, *(uint *)(dword_2252CF4[426] + 110916)) )
        v5 = 1;
    }
  }
  if ( v6 == (int *)&v11 )
    FS_CloseFile((int *)&v11);
  return v5;
}

//----- (02240A2C) --------------------------------------------------------
int __fastcall Function_2240a2c(int a1)
{
  uint v1;
  int result;
  int v3;

  v1 = a1;
  result = Function_221f94c(a1, 1);
  if ( !result )
  {
    v3 = OS_DisableInterrupts();
    *(ushort *)(dword_2252CF4[426] + 2) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 4) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 6) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 8) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 10) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 12) &= ~(1 << v1);
    OS_RestoreInterrupts(v3);
    result = Function_2223b68(v1);
  }
  return result;
}

//----- (02240ACC) --------------------------------------------------------
uint __fastcall Function_2240acc(int a1)
{
  uint v1;
  int v2;
  uint result;
  int v4;
  int v5;

  v1 = a1;
  if ( Function_221f94c(a1, 0) )
  {
    v4 = OS_DisableInterrupts();
    v5 = ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 4) &= v5;
    *(ushort *)(dword_2252CF4[426] + 2) &= v5;
    result = OS_RestoreInterrupts(v4);
  }
  else
  {
    v2 = OS_DisableInterrupts();
    *(ushort *)(dword_2252CF4[426] + 2) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 4) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 6) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 8) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 10) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 12) &= ~(1 << v1);
    OS_RestoreInterrupts(v2);
    result = Function_2223b68(v1);
  }
  return result;
}

//----- (02240BA4) --------------------------------------------------------
uint __fastcall Function_2240ba4(int a1)
{
  uint v1;
  int v2;
  uint result;
  int v4;

  v1 = a1;
  if ( Function_221f94c(a1, 2) )
  {
    v4 = OS_DisableInterrupts();
    *(ushort *)(dword_2252CF4[426] + 6) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 8) |= 1 << v1;
    result = OS_RestoreInterrupts(v4);
  }
  else
  {
    v2 = OS_DisableInterrupts();
    *(ushort *)(dword_2252CF4[426] + 2) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 4) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 6) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 8) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 10) &= ~(1 << v1);
    *(ushort *)(dword_2252CF4[426] + 12) &= ~(1 << v1);
    OS_RestoreInterrupts(v2);
    result = Function_2223b68(v1);
  }
  return result;
}

//----- (02240C7C) --------------------------------------------------------
int Function_2240c7c()
{
  uint v0;
  int v1;
  int result;

  Function_2241224(3);
  v0 = 1;
  do
  {
    if ( *(ushort *)(dword_2252CF4[426] + 2) & (1 << v0)
      && !(*(ushort *)(dword_2252CF4[426] + 4) & (1 << v0)) )
    {
      if ( *(ushort *)(dword_2252CF4[426] + 6) & (1 << v0) )
      {
        Function_2240ba4(v0);
      }
      else
      {
        v1 = OS_DisableInterrupts();
        *(ushort *)(dword_2252CF4[426] + 2) &= ~(1 << v0);
        *(ushort *)(dword_2252CF4[426] + 4) &= ~(1 << v0);
        *(ushort *)(dword_2252CF4[426] + 6) &= ~(1 << v0);
        *(ushort *)(dword_2252CF4[426] + 8) &= ~(1 << v0);
        *(ushort *)(dword_2252CF4[426] + 10) &= ~(1 << v0);
        *(ushort *)(dword_2252CF4[426] + 12) &= ~(1 << v0);
        OS_RestoreInterrupts(v1);
        Function_2223b68(v0);
      }
    }
    result = (v0 + 1) << 16;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 < 0x10 );
  return result;
}

//----- (02240D5C) --------------------------------------------------------
int Function_2240d5c()
{
  uint v1;

  if ( !*(ushort *)(dword_2252CF4[426] + 2) )
    return 0;
  v1 = 1;
  do
  {
    if ( *(ushort *)(dword_2252CF4[426] + 2) & (1 << v1) && !Function_221f8f8(v1) )
      return 0;
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 < 0x10 );
  return 1;
}

//----- (02240DC4) --------------------------------------------------------
int Function_2240dc4()
{
  uint v0;
  int v1;
  int v2;
  int result;

  v0 = 1;
  v1 = 0;
  do
  {
    if ( *(ushort *)(dword_2252CF4[426] + 10) & (1 << v0) )
    {
      if ( Function_221f94c(v0, 3) )
      {
        v1 = (v1 | (1 << v0)) & 0xFFFF;
      }
      else
      {
        v2 = OS_DisableInterrupts();
        *(ushort *)(dword_2252CF4[426] + 2) &= ~(1 << v0);
        *(ushort *)(dword_2252CF4[426] + 4) &= ~(1 << v0);
        *(ushort *)(dword_2252CF4[426] + 6) &= ~(1 << v0);
        *(ushort *)(dword_2252CF4[426] + 8) &= ~(1 << v0);
        *(ushort *)(dword_2252CF4[426] + 10) &= ~(1 << v0);
        *(ushort *)(dword_2252CF4[426] + 12) &= ~(1 << v0);
        OS_RestoreInterrupts(v2);
        Function_2223b68(v0);
      }
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 < 0x10 );
  if ( v1 )
    result = Function_2241224(4);
  else
    result = Function_2241224(7);
  return result;
}

//----- (02240EBC) --------------------------------------------------------
uint Function_2240ebc()
{
  Function_2241224(6);
  return Function_2223b2c();
}

//----- (02240ED0) --------------------------------------------------------
uint Function_2240ed0()
{
  uint result;
  bool v1;

  result = *(ushort *)dword_2252CF4[426];
  v1 = result == 4;
  if ( result == 4 )
  {
    result = *(ushort *)(dword_2252CF4[426] + 12);
    v1 = *(ushort *)(dword_2252CF4[426] + 2) == result;
  }
  if ( v1 )
    result = Function_2223b2c();
  return result;
}

//----- (02240F00) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2241218 for case 0"

//----- (02240F18) --------------------------------------------------------
void __noreturn Function_2240f18()
{
  JUMPOUT(&loc_2241218);
}

//----- (02240F1C) --------------------------------------------------------
// jumptable 02240F10 case 1
int __fastcall Function_2240f1c(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (*a8)(void))
{
  return a8();
}

//----- (02240F20) --------------------------------------------------------
void Function_2240f20()
{
  JUMPOUT(&loc_2240F54);
}

//----- (02240F24) --------------------------------------------------------
void Function_2240f24()
{
  JUMPOUT(&loc_2240FDC);
}

//----- (02240F28) --------------------------------------------------------
// jumptable 02240F10 case 4
int __fastcall Function_2240f28(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (*a8)(void))
{
  return a8();
}

//----- (02240F2C) --------------------------------------------------------
// jumptable 02240F10 case 5
int __fastcall Function_2240f2c(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (*a8)(void))
{
  return a8();
}

//----- (02240F30) --------------------------------------------------------
// jumptable 02240F10 case 6
int __fastcall Function_2240f30(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (*a8)(void))
{
  return a8();
}

//----- (02240F34) --------------------------------------------------------
void Function_2240f34()
{
  JUMPOUT(&loc_2241118);
}

//----- (02240F38) --------------------------------------------------------
// jumptable 02240F10 case 8
int __fastcall Function_2240f38(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (*a8)(void))
{
  return a8();
}

//----- (02240F3C) --------------------------------------------------------
void Function_2240f3c()
{
  JUMPOUT(&loc_2241148);
}

//----- (02240F40) --------------------------------------------------------
void Function_2240f40()
{
  JUMPOUT(&loc_2241068);
}

//----- (02240F44) --------------------------------------------------------
// jumptable 02240F10 case 11
int __fastcall Function_2240f44(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (*a8)(void))
{
  return a8();
}

//----- (02240F48) --------------------------------------------------------
void Function_2240f48()
{
  JUMPOUT(&loc_224117C);
}

//----- (02240F4C) --------------------------------------------------------
void Function_2240f4c()
{
  JUMPOUT(&loc_22411D8);
}

//----- (02240F50) --------------------------------------------------------
void Function_2240f50()
{
  char v0;
  int v1;

  *(ushort *)(dword_2252CF4[426] + 4) &= ~(1 << v0);
  *(ushort *)(dword_2252CF4[426] + 6) |= 1 << v0;
  if ( Function_2241238() != 3 )
    JUMPOUT(__CS__, v1);
  Function_2240ba4(v0);
  JUMPOUT(__CS__, v1);
}

//----- (02241224) --------------------------------------------------------
short __fastcall Function_2241224(short result)
{
  *(ushort *)dword_2252CF4[426] = result;
  return result;
}

//----- (02241238) --------------------------------------------------------
int Function_2241238()
{
  return *(ushort *)dword_2252CF4[426];
}

//----- (0224124C) --------------------------------------------------------
int __fastcall Function_224124c(int a1)
{
  dword_224A6B8[0] = dword_2252CF4[426] + 2;
  dword_224A6BC = dword_2252CF4[426] + 4;
  dword_224A6C0 = dword_2252CF4[426] + 6;
  dword_224A6C4 = dword_2252CF4[426] + 8;
  dword_224A6C8 = dword_2252CF4[426] + 10;
  dword_224A6CC = dword_2252CF4[426] + 12;
  return *(ushort *)dword_224A6B8[a1];
}

//----- (022412A4) --------------------------------------------------------
int __fastcall Function_22412a4(char a1, int a2, int a3, int a4)
{
  char v4;
  int v5;
  uint v6;
  uint v7;
  int v8;
  int result;
  char v10;
  ushort v11;
  ushort v12;
  ushort v13;
  ushort v14;
  ushort v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = OS_DisableInterrupts();
  v6 = 1 << v4;
  v7 = 1 << v4 << 16;
  v8 = v5;
  if ( *(ushort *)(dword_2252CF4[426] + 2) & (v7 >> 16) )
  {
    MI_CpuCopy8(dword_2252CF4[426], (uint)&v10, 0xEu, v6);
    OS_RestoreInterrupts(v8);
    if ( v11 & (v7 >> 16) )
    {
      result = 2;
    }
    else if ( v12 & (v7 >> 16) )
    {
      result = 3;
    }
    else if ( v13 & (v7 >> 16) )
    {
      result = 4;
    }
    else if ( v14 & (v7 >> 16) )
    {
      result = 5;
    }
    else if ( v15 & (v7 >> 16) )
    {
      result = 6;
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    OS_RestoreInterrupts(v5);
    result = 0;
  }
  return result;
}

//----- (0224136C) --------------------------------------------------------
int __fastcall Function_224136c(int a1)
{
  int result;

  if ( *(ushort *)(dword_2252CF4[426] + 2) & (1 << a1) )
    result = dword_2252CF4[426] + 14 + 30 * (a1 - 1);
  else
    result = 0;
  return result;
}

//----- (022413A0) --------------------------------------------------------
int __fastcall Function_22413a0(uchar *a1)
{
  uint v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uchar *v6;
  bool v7;

  v1 = 1;
  v2 = dword_2252CF4[426] + 36;
  do
  {
    if ( *(ushort *)(dword_2252CF4[426] + 2) & (1 << v1) )
    {
      v3 = 30 * (v1 - 1);
      v4 = *a1;
      v5 = *(uchar *)(v2 + v3);
      v6 = (uchar *)(v2 + v3);
      v7 = v4 == v5;
      if ( v4 == v5 )
        v7 = a1[1] == v6[1];
      if ( v7 && a1[2] == v6[2] && a1[3] == v6[3] && a1[4] == v6[4] && a1[5] == v6[5] )
        return *(ushort *)(dword_2252CF4[426] + v3 + 42);
    }
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 < 2 );
  return 0;
}

//----- (02241448) --------------------------------------------------------
int __fastcall Function_2241448(int a1)
{
  int result;

  dword_2252CF4[428] = a1;
  *(uint *)(a1 + 64) = 0;
  *(uint *)(dword_2252CF4[428] + 5032) = 0;
  *(uint *)(dword_2252CF4[428] + 5036) = 0;
  result = dword_2252CF4[428] + 4096;
  *(uint *)(dword_2252CF4[428] + 5040) = 0;
  return result;
}

//----- (02241484) --------------------------------------------------------
int *__fastcall Function_2241484(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  if ( dword_2252CF4[427] )
    ((void (*)(int, const char *, ...))dword_2252CF4[427])(
      0x8000000,
      "%s -> ",
      off_224AF00[*(uint *)(dword_2252CF4[428] + 64)]);
  result = &dword_2252CF4[427];
  *(uint *)(dword_2252CF4[428] + 64) = v1;
  if ( dword_2252CF4[427] )
    result = (int *)((int (*)(int, const char *, ...))dword_2252CF4[427])(
                      0x8000000,
                      "%s\n",
                      off_224AF00[*(uint *)(dword_2252CF4[428] + 64)]);
  return result;
}

//----- (02241500) --------------------------------------------------------
int __fastcall Function_2241500(int result)
{
  if ( (uint)(*(uint *)(dword_2252CF4[428] + 64) - 9) > 1 )
    *(uint *)(dword_2252CF4[428] + 84) = result;
  return result;
}

//----- (02241520) --------------------------------------------------------
int Function_2241520()
{
  int v0;
  int v1;
  int v2;

  Function_2241484(3);
  v2 = WMi_StartParentEx((int)Function_2241564, (ushort *)dword_2252CF4[428], v0, v1);
  if ( v2 == 2 )
    return 1;
  Function_2241500(v2);
  Function_2241484(9);
  return 0;
}

//----- (02241564) --------------------------------------------------------
int *__fastcall Function_2241564(int a1)
{
  int v1;
  int *result;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
  {
    Function_2241500(v1);
    result = Function_2241484(9);
  }
  else if ( *(uint *)(dword_2252CF4[428] + 5036) )
  {
    result = (int *)Function_22415d0();
    if ( !result )
      result = Function_2241484(9);
  }
  else
  {
    result = (int *)Function_224166c();
    if ( !result )
      result = Function_2241484(9);
  }
  return result;
}

//----- (022415D0) --------------------------------------------------------
int Function_22415d0()
{
  uint v0;
  int v1;

  Function_2241484(3);
  v0 = (*(int (__fastcall **)(int))(dword_2252CF4[428] + 5036))(dword_2252CF4[428] + 5056);
  v1 = Function_20d056c((int)Function_2241634, v0, dword_2252CF4[428] + 5056);
  if ( v1 == 2 )
    return 1;
  Function_2241500(v1);
  Function_2241484(9);
  return 0;
}

//----- (02241634) --------------------------------------------------------
int *__fastcall Function_2241634(int a1)
{
  int v1;
  int *result;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
  {
    Function_2241500(v1);
    result = Function_2241484(9);
  }
  else
  {
    result = (int *)Function_224166c();
    if ( !result )
      result = Function_2241484(9);
  }
  return result;
}

//----- (0224166C) --------------------------------------------------------
int __fastcall Function_224166c(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;

  if ( (uint)(*(uint *)(dword_2252CF4[428] + 64) - 4) <= 2 )
    return 1;
  v5 = WM_StartParent_9((int)Function_22416d0, a2, a3, a4);
  if ( v5 == 2 )
  {
    result = 1;
    *(ushort *)(dword_2252CF4[428] + 80) = 0;
    *(ushort *)(dword_2252CF4[428] + 82) = 1;
  }
  else
  {
    Function_2241500(v5);
    result = 0;
  }
  return result;
}

//----- (022416D0) --------------------------------------------------------
int __fastcall Function_22416d0(int a1)
{
  int v1;
  short v2;
  int result;
  uint v4;
  int v5;
  int (__fastcall *v6)(int);

  v1 = a1;
  v2 = *(ushort *)(a1 + 16);
  result = *(ushort *)(a1 + 2);
  v4 = 1 << v2 << 16;
  if ( result )
  {
    Function_2241500(result);
    return (int)Function_2241484(9);
  }
  v5 = *(ushort *)(v1 + 8);
  if ( v5 > 7 )
  {
    if ( v5 == 9 )
    {
      if ( dword_2252CF4[427] )
        ((void (*)(int, const char *, ...))dword_2252CF4[427])(
          0x8000000,
          "StartParent - child (aid %x) disconnected\n");
      result = *(ushort *)(dword_2252CF4[428] + 82) & ~(v4 >> 16);
      *(ushort *)(dword_2252CF4[428] + 82) = result;
      return result;
    }
LABEL_24:
    result = (int)&dword_2252CF4[427];
    if ( dword_2252CF4[427] )
      result = ((int (*)(int, const char *, ...))dword_2252CF4[427])(
                 0x8000000,
                 "unknown indicate, state = %d\n",
                 *(ushort *)(v1 + 8));
    return result;
  }
  if ( v5 >= 7 )
  {
    if ( dword_2252CF4[427] )
      ((void (*)(int, const char *, ...))dword_2252CF4[427])(
        0x8000000,
        "StartParent - new child (aid %x) connected\n");
    v6 = *(int (__fastcall **)(int))(dword_2252CF4[428] + 76);
    if ( !v6 || v6(v1) )
    {
      result = *(ushort *)(dword_2252CF4[428] + 82) | (v4 >> 16);
      *(ushort *)(dword_2252CF4[428] + 82) = result;
    }
    else
    {
      result = WM_Disconnect(0, *(ushort *)(v1 + 16));
      if ( result != 2 )
      {
        Function_2241500(result);
        result = (int)Function_2241484(9);
      }
    }
    return result;
  }
  if ( v5 > 2 )
    goto LABEL_24;
  if ( *(ushort *)(v1 + 8) )
  {
    if ( v5 == 2 )
      return result;
    goto LABEL_24;
  }
  result = Function_2241840();
  if ( !result )
    result = (int)Function_2241484(9);
  return result;
}

//----- (02241840) --------------------------------------------------------
int Function_2241840()
{
  int v1;

  if ( (uint)(*(uint *)(dword_2252CF4[428] + 64) - 4) <= 2 )
    return 1;
  Function_2241484(4);
  v1 = WM_StartMP(
         (int)Function_22418d8,
         dword_2252CF4[428] + 4192,
         *(uint *)(dword_2252CF4[428] + 4772) & 0xFFFF,
         dword_2252CF4[428] + 3968,
         *(uint *)(dword_2252CF4[428] + 4768),
         1);
  if ( v1 == 2 )
    return 1;
  Function_2241500(v1);
  return 0;
}

//----- (022418D8) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2241920 for case 0"

//----- (02241910) --------------------------------------------------------
void Function_2241910()
{
  JUMPOUT(&loc_2241920);
}

//----- (02241914) --------------------------------------------------------
// jumptable 02241908 case 1
int __fastcall Function_2241914(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02241918) --------------------------------------------------------
void Function_2241918()
{
  JUMPOUT(&loc_22419D8);
}

//----- (0224191C) --------------------------------------------------------
void Function_224191c()
{
  int v0;

  if ( !dword_2252CF4[427] )
    JUMPOUT(__CS__, v0);
  ((void (*)(int, const char *, ...))dword_2252CF4[427])(0x8000000, "unknown indicate, state = %d\n");
  JUMPOUT(__CS__, v0);
}

//----- (02241A04) --------------------------------------------------------
int Function_2241a04()
{
  int v0;

  Function_2241484(6);
  v0 = Function_20d0544(dword_2252CF4[428] + 7680, 0xDu);
  if ( v0 == 2 )
    return 1;
  Function_2241500(v0);
  return 0;
}

//----- (02241A40) --------------------------------------------------------
int __fastcall Function_2241a40(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = Function_20d0560(dword_2252CF4[428] + 7680, a2, a3, a4);
  if ( v4 == 2 )
    return 1;
  Function_2241500(v4);
  return 0;
}

//----- (02241A70) --------------------------------------------------------
int Function_2241a70()
{
  int v0;

  Function_2241484(3);
  v0 = WM_EndMP((int)Function_2241aa0);
  if ( v0 == 2 )
    return 1;
  Function_2241500(v0);
  return 0;
}

//----- (02241AA0) --------------------------------------------------------
int __fastcall Function_2241aa0(int a1)
{
  int v1;
  int v2;
  int result;
  int *v4;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
  {
    v2 = Function_2241500(v1);
    result = Function_2242474(v2);
  }
  else
  {
    result = Function_2241af4();
    if ( !result )
    {
      v4 = &dword_2252CF4[427];
      if ( dword_2252CF4[427] )
        v4 = (int *)((int (*)(int, const char *, ...))dword_2252CF4[427])(
                      0x8000000,
                      "DWCi_MOV_WH_StateInEndParent failed\n");
      result = Function_2242474(v4);
    }
  }
  return result;
}

//----- (02241AF4) --------------------------------------------------------
int __fastcall Function_2241af4(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = WM_EndParent((int)Function_2241b1c, a2, a3, a4);
  if ( v4 == 2 )
    return 1;
  Function_2241500(v4);
  return 0;
}

//----- (02241B1C) --------------------------------------------------------
int *__fastcall Function_2241b1c(int a1)
{
  int v1;
  int *result;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
    result = (int *)Function_2241500(v1);
  else
    result = Function_2241484(1);
  return result;
}

//----- (02241B40) --------------------------------------------------------
int Function_2241b40()
{
  int v1;
  int v2;
  int v3;
  int v4;

  if ( *(uint *)(dword_2252CF4[428] + 64) != 6 )
    return 0;
  Function_2241484(3);
  v4 = Function_20d0560(dword_2252CF4[428] + 7680, v1, v2, v3);
  if ( v4 == 2 )
    return 1;
  Function_2241500(v4);
  return 0;
}

//----- (02241B90) --------------------------------------------------------
int Function_2241b90()
{
  int v0;

  Function_2241484(3);
  v0 = WM_EndMP((int)Function_2241bc0);
  if ( v0 == 2 )
    return 1;
  Function_2241500(v0);
  return 0;
}

//----- (02241BC0) --------------------------------------------------------
int *__fastcall Function_2241bc0(int a1)
{
  int v1;
  int v2;
  int *result;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
  {
    v2 = Function_2241500(v1);
    result = (int *)Function_2242490(v2);
  }
  else
  {
    result = (int *)Function_2241bf4();
    if ( !result )
      result = Function_2241484(9);
  }
  return result;
}

//----- (02241BF4) --------------------------------------------------------
int Function_2241bf4()
{
  int v0;
  int v2;

  Function_2241484(3);
  v0 = WM_Disconnect((int)Function_2241c2c, 0);
  if ( v0 == 2 )
    return 1;
  v2 = Function_2241500(v0);
  Function_2242474(v2);
  return 0;
}

//----- (02241C2C) --------------------------------------------------------
int *__fastcall Function_2241c2c(int a1)
{
  int v1;
  int *result;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
    result = (int *)Function_2241500(v1);
  else
    result = Function_2241484(1);
  return result;
}

//----- (02241C50) --------------------------------------------------------
int Function_2241c50()
{
  int v0;

  Function_2241484(3);
  v0 = WM_Reset((int)Function_2241c80);
  if ( v0 == 2 )
    return 1;
  Function_2241500(v0);
  return 0;
}

//----- (02241C80) --------------------------------------------------------
int *__fastcall Function_2241c80(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(ushort *)(a1 + 2) )
    return Function_2241484(1);
  Function_2241484(9);
  return (int *)Function_2241500(*(ushort *)(v1 + 2));
}

//----- (02241CB4) --------------------------------------------------------
int *__fastcall Function_2241cb4(int a1)
{
  int *result;

  if ( *(ushort *)(a1 + 2) )
    result = Function_2241484(10);
  else
    result = Function_2241484(0);
  return result;
}

//----- (02241CDC) --------------------------------------------------------
int __fastcall Function_2241cdc(int result)
{
  *(uint *)(dword_2252CF4[428] + 8) = result;
  return result;
}

//----- (02241CF0) --------------------------------------------------------
int Function_2241cf0()
{
  return *(ushort *)(dword_2252CF4[428] + 82);
}

//----- (02241D04) --------------------------------------------------------
int Function_2241d04()
{
  return *(uint *)(dword_2252CF4[428] + 64);
}

//----- (02241D18) --------------------------------------------------------
int __fastcall Function_2241d18(int a1, int a2, int a3, uint a4)
{
  int v4;
  int result;
  ushort v6;
  ushort v7;
  ushort v8;
  uint v9;

  v9 = a4;
  OS_GetMacAddress((uint)&v6, a2, a3, a4);
  *(uint *)(dword_2252CF4[428] + 88) = v8 + v7 + v6 + RAM_27ffc3c;
  *(uint *)(dword_2252CF4[428] + 88) = 69069 * *(uint *)(dword_2252CF4[428] + 88) + 12345;
  *(ushort *)(dword_2252CF4[428] + 92) = 0;
  *(ushort *)(dword_2252CF4[428] + 94) = 101;
  Function_2241484(3);
  v4 = Function_2241df0(1);
  if ( v4 == 24 )
  {
    Function_2241500(24);
    Function_2241484(9);
    result = 0;
  }
  else if ( v4 == 2 )
  {
    result = 1;
  }
  else
  {
    Function_2241500(v4);
    Function_2241484(9);
    result = 0;
  }
  return result;
}

//----- (02241DF0) --------------------------------------------------------
int __fastcall Function_2241df0(uint a1)
{
  uint v1;
  int v2;
  int result;

  v1 = a1;
  v2 = WM_GetAllowedChannel();
  if ( v2 == 0x8000 )
  {
    Function_2241500(3);
    Function_2241484(9);
    result = 3;
  }
  else if ( v2 )
  {
    if ( v2 & (1 << (v1 - 1)) )
    {
LABEL_9:
      result = (ushort)Function_2241f64(Function_2241e8c, v1);
    }
    else
    {
      while ( 1 )
      {
        v1 = (v1 + 1) & 0xFFFF;
        if ( v1 > 0x10 )
          break;
        if ( v2 & (1 << (v1 - 1)) )
          goto LABEL_9;
      }
      result = 24;
    }
  }
  else
  {
    Function_2241500(22);
    Function_2241484(9);
    result = 24;
  }
  return result;
}

//----- (02241E8C) --------------------------------------------------------
int *__fastcall Function_2241e8c(int a1)
{
  int v1;
  int v2;
  int *result;
  uint v4;
  int v5;
  uint v6;

  v1 = a1;
  v2 = *(ushort *)(a1 + 2);
  if ( v2 )
  {
    Function_2241500(v2);
    result = Function_2241484(9);
  }
  else
  {
    if ( dword_2252CF4[427] )
      ((void (*)(int, const char *, ...))dword_2252CF4[427])(
        0x8000000,
        "channel %d bratio = %x\n",
        *(ushort *)(v1 + 8),
        *(ushort *)(v1 + 10));
    v4 = *(ushort *)(v1 + 10);
    v5 = *(ushort *)(v1 + 8);
    v6 = *(ushort *)(dword_2252CF4[428] + 94);
    if ( v6 <= v4 )
    {
      if ( v6 == v4 )
        *(ushort *)(dword_2252CF4[428] + 96) |= 1 << (v5 - 1);
    }
    else
    {
      *(ushort *)(dword_2252CF4[428] + 94) = v4;
      *(ushort *)(dword_2252CF4[428] + 96) = 1 << (v5 - 1);
    }
    result = (int *)Function_2241df0((v5 + 1) & 0xFFFF);
    if ( result == (int *)24 )
    {
      result = Function_2241484(7);
    }
    else if ( result != (int *)2 )
    {
      result = Function_2241484(9);
    }
  }
  return result;
}

//----- (02241F64) --------------------------------------------------------
int __fastcall Function_2241f64(int a1, short a2)
{
  return WM_MeasureChannel(a1, 3, 17, a2, 0x1Eu);
}

//----- (02241F84) --------------------------------------------------------
int Function_2241f84()
{
  if ( *(uint *)(dword_2252CF4[428] + 64) != 7 )
    OS_Panic();
  Function_2241484(1);
  *(ushort *)(dword_2252CF4[428] + 92) = Function_2241ffc(*(ushort *)(dword_2252CF4[428] + 96));
  if ( dword_2252CF4[427] )
    ((void (*)(int, const char *, ...))dword_2252CF4[427])(
      0x8000000,
      "decided channel = %d\n",
      *(ushort *)(dword_2252CF4[428] + 92));
  return *(ushort *)(dword_2252CF4[428] + 92);
}

//----- (02241FFC) --------------------------------------------------------
int __fastcall Function_2241ffc(uint a1)
{
  int v1;
  uint v2;
  int v3;
  int v5;
  uint v6;

  v1 = 0;
  v2 = 0;
  LOWORD(v3) = 0;
  do
  {
    if ( a1 & (1 << v3) )
    {
      v1 = (short)(v3 + 1);
      v2 = (v2 + 1) & 0xFFFF;
    }
    v3 = (short)(v3 + 1);
  }
  while ( v3 < 16 );
  if ( v2 <= 1 )
    return v1;
  LOWORD(v5) = 0;
  *(uint *)(dword_2252CF4[428] + 88) = 69069 * *(uint *)(dword_2252CF4[428] + 88) + 12345;
  v6 = v2 * (*(uint *)(dword_2252CF4[428] + 88) & 0xFF) << 8 >> 16;
  do
  {
    if ( a1 & 1 )
    {
      if ( !v6 )
        return (short)(v5 + 1);
      v6 = (v6 - 1) & 0xFFFF;
    }
    v5 = (short)(v5 + 1);
    a1 = a1 << 15 >> 16;
  }
  while ( v5 < 16 );
  return 0;
}

//----- (022420E4) --------------------------------------------------------
BOOL Function_22420e4()
{
  *(uint *)(dword_2252CF4[428] + 4772) = 0;
  *(uint *)(dword_2252CF4[428] + 4768) = 0;
  *(uint *)(dword_2252CF4[428] + 72) = 0;
  *(ushort *)(dword_2252CF4[428] + 80) = 0;
  *(ushort *)(dword_2252CF4[428] + 82) = 1;
  *(uint *)(dword_2252CF4[428] + 84) = 0;
  *(uint *)dword_2252CF4[428] = 0;
  *(ushort *)(dword_2252CF4[428] + 4) = 0;
  *(uint *)(dword_2252CF4[428] + 76) = 0;
  return Function_224217c() != 0;
}

//----- (0224215C) --------------------------------------------------------
int __fastcall Function_224215c(int a1)
{
  int result;

  result = *(ushort *)(a1 + 2);
  if ( result == 8 )
  {
    Function_2241484(9);
    OS_Panic();
  }
  return result;
}

//----- (0224217C) --------------------------------------------------------
int Function_224217c()
{
  int v0;

  Function_2241484(3);
  v0 = Function_20cecc8(dword_2252CF4[428] + 128, (int)Function_22421c8, 2u);
  if ( v0 == 2 )
    return 1;
  Function_2241500(v0);
  Function_2241484(10);
  return 0;
}

//----- (022421C8) --------------------------------------------------------
int *__fastcall Function_22421c8(int a1)
{
  int v1;
  int *result;
  int v3;

  v1 = *(ushort *)(a1 + 2);
  if ( v1 )
  {
    Function_2241500(v1);
    result = Function_2241484(10);
  }
  else
  {
    v3 = WM_SetIndCallback((int)Function_224215c);
    if ( v3 )
    {
      Function_2241500(v3);
      result = Function_2241484(10);
    }
    else
    {
      result = Function_2241484(1);
    }
  }
  return result;
}

//----- (02242218) --------------------------------------------------------
int __fastcall Function_2242218(int a1, short a2, short a3)
{
  int v3;
  short v4;
  short v5;
  int v6;
  uint v7;
  short v8;
  bool v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *(uint *)(dword_2252CF4[428] + 64) != 1 )
    OS_Panic();
  *(uint *)(dword_2252CF4[428] + 4772) = 384;
  *(uint *)(dword_2252CF4[428] + 4768) = 224;
  if ( dword_2252CF4[427] )
    ((void (*)(int, const char *, ...))dword_2252CF4[427])(
      0x8000000,
      "recv buffer size = %d\n",
      *(uint *)(dword_2252CF4[428] + 4772));
  if ( dword_2252CF4[427] )
    ((void (*)(int, const char *, ...))dword_2252CF4[427])(
      0x8000000,
      "send buffer size = %d\n",
      *(uint *)(dword_2252CF4[428] + 4768));
  *(uint *)(dword_2252CF4[428] + 68) = v3;
  Function_2241484(3);
  *(ushort *)(dword_2252CF4[428] + 12) = v4;
  *(ushort *)(dword_2252CF4[428] + 50) = v5;
  *(ushort *)(dword_2252CF4[428] + 24) = WM_GetDispersionBeaconPeriod(dword_2252CF4[428], dword_2252CF4[428], v6, v7);
  *(ushort *)(dword_2252CF4[428] + 52) = 208;
  *(ushort *)(dword_2252CF4[428] + 54) = 68;
  v8 = 1;
  *(ushort *)(dword_2252CF4[428] + 16) = 2;
  *(ushort *)(dword_2252CF4[428] + 22) = 0;
  *(ushort *)(dword_2252CF4[428] + 18) = 0;
  *(ushort *)(dword_2252CF4[428] + 14) = 1;
  if ( v3 != 2 )
    v8 = 0;
  v9 = v3 == 0;
  if ( v3 )
    v9 = v3 == 2;
  *(ushort *)(dword_2252CF4[428] + 20) = v8;
  if ( v9 || v3 == 4 )
    return Function_2241520();
  if ( dword_2252CF4[427] )
    ((void (*)(int, const char *, ...))dword_2252CF4[427])(0x8000000, "unknown connect mode %d\n", v3);
  return 0;
}

//----- (02242390) --------------------------------------------------------
int __fastcall Function_2242390(int result)
{
  *(uint *)(dword_2252CF4[428] + 76) = result;
  return result;
}

//----- (022423A4) --------------------------------------------------------
int __fastcall Function_22423a4(char a1)
{
  return Function_20d04c0(dword_2252CF4[428] + 5088, (ushort *)(dword_2252CF4[428] + 7168), a1);
}

//----- (022423CC) --------------------------------------------------------
int __fastcall Function_22423cc(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;

  v4 = WM_StepDataSharing((ushort *)(dword_2252CF4[428] + 5088), a1, dword_2252CF4[428] + 7168, a4);
  if ( v4 == 7 )
  {
    if ( dword_2252CF4[427] )
      ((void (*)(int, const char *, ...))dword_2252CF4[427])(
        0x8000000,
        "DWCi_MOV_WH_StepDataSharing - Warning No Child\n");
    result = 0;
  }
  else if ( v4 == 5 )
  {
    if ( dword_2252CF4[427] )
      ((void (*)(int, const char *, ...))dword_2252CF4[427])(
        0x8000000,
        "DWCi_MOV_WH_StepDataSharing - Warning No DataSet\n");
    Function_2241500(5);
    result = 0;
  }
  else if ( v4 )
  {
    Function_2241500(v4);
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}

//----- (02242474) --------------------------------------------------------
int *Function_2242474()
{
  int *result;

  result = (int *)Function_2241c50();
  if ( !result )
    result = Function_2241484(10);
  return result;
}

//----- (02242490) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2242578 for case 0"

//----- (02242524) --------------------------------------------------------
void Function_2242524()
{
  JUMPOUT(&loc_2242578);
}

//----- (02242528) --------------------------------------------------------
void Function_2242528()
{
  JUMPOUT(&loc_2242550);
}

//----- (0224252C) --------------------------------------------------------
void Function_224252c()
{
  JUMPOUT(&loc_2242564);
}

//----- (02242530) --------------------------------------------------------
void Function_2242530()
{
  JUMPOUT(&loc_224253C);
}

//----- (02242534) --------------------------------------------------------
void Function_2242534()
{
  JUMPOUT(&loc_2242578);
}

//----- (02242538) --------------------------------------------------------
void Function_2242538()
{
  int v0;

  if ( Function_2241b90() )
    JUMPOUT(__CS__, v0);
  Function_2242474();
  JUMPOUT(__CS__, v0);
}

//----- (02242598) --------------------------------------------------------
int Function_2242598()
{
  int v0;
  int v1;
  int v2;

  if ( *(uint *)(dword_2252CF4[428] + 64) != 1 )
    OS_Panic();
  Function_2241484(3);
  if ( WM_End((int)Function_2241cb4, v0, v1, v2) == 2 )
    return 1;
  Function_2241484(9);
  return 0;
}

//----- (022425E8) --------------------------------------------------------
int __fastcall Function_22425e8(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  dword_2252CF4[429] = a1;
  Function_22407b0(a1 + 2816);
  *(ushort *)(dword_2252CF4[429] + 1608) = 0;
  *(ushort *)(dword_2252CF4[429] + 1610) = 0;
  *(uchar *)(dword_2252CF4[429] + 2704) = 1;
  *(uchar *)(dword_2252CF4[429] + 2705) = 1;
  *(uint *)(dword_2252CF4[429] + 2716) = 0;
  Function_2243198();
  *(uint *)(dword_2252CF4[429] + 2740) = *(uint *)v2;
  *(uint *)(dword_2252CF4[429] + 2744) = *(uint *)(v2 + 4);
  *(uint *)(dword_2252CF4[429] + 2748) = *(uint *)(v2 + 8);
  *(uint *)(dword_2252CF4[429] + 2752) = *(uint *)(v2 + 12);
  *(uint *)(dword_2252CF4[429] + 2756) = *(uint *)(v2 + 16);
  *(uint *)(dword_2252CF4[429] + 2760) = *(uint *)(v2 + 20);
  *(uchar *)(dword_2252CF4[429] + 2706) = *(uchar *)(v2 + 24);
  *(uchar *)(dword_2252CF4[429] + 2764) = 2;
  OS_GetTick();
  Function_20a2a34(dword_2252CF4[429] + 1612);
  OS_GetTick();
  result = Function_223e5d0();
  *(uint *)(dword_2252CF4[429] + 2724) = result;
  return result;
}

//----- (022426D8) --------------------------------------------------------
int Function_22426d8()
{
  int v0;
  bool v1;
  int result;
  bool v3;

  v0 = *(uchar *)(dword_2252CF4[429] + 2704);
  v1 = v0 == 1;
  if ( v0 != 1 )
    v1 = v0 == 20;
  if ( v1 || v0 == 23 || v0 == 26 || v0 == 29 )
  {
    *(uchar *)(dword_2252CF4[429] + 2704) = 34;
    *(uchar *)(dword_2252CF4[429] + 2732) = 0;
    result = 1;
  }
  else
  {
    v3 = v0 == 4;
    if ( v0 != 4 )
      v3 = v0 == 5;
    if ( v3 || v0 == 6 || v0 == 13 )
    {
      if ( v0 != 4 || *(uint *)(dword_2252CF4[429] + 2712) >= 6u )
      {
        Function_2223b2c();
        *(uchar *)(dword_2252CF4[429] + 2704) = 16;
        result = 1;
        *(uchar *)(dword_2252CF4[429] + 2732) = 2;
      }
      else
      {
        result = 0;
      }
    }
    else if ( (uchar)(v0 - 9) > 1u )
    {
      if ( v0 == 12 )
      {
        *(uchar *)(dword_2252CF4[429] + 2704) = 34;
        result = 1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      *(uchar *)(dword_2252CF4[429] + 2704) = 32;
      result = 1;
    }
  }
  return result;
}

//----- (022427B4) --------------------------------------------------------
int Function_22427b4()
{
  int result;

  Function_2241cdc(*(uint *)(dword_2252CF4[429] + 2760));
  *(uchar *)(dword_2252CF4[429] + 2704) = 1;
  *(ushort *)(dword_2252CF4[429] + 1608) = WM_GetNextTgid();
  MI_CpuCopy8(
    *(uint *)(dword_2252CF4[429] + 2724),
    dword_2252CF4[429] + 2640,
    0x40u,
    (uint)&dword_2252CF4[429]);
  *(uchar *)(dword_2252CF4[429] + 2707) = 0;
  *(uint *)(dword_2252CF4[429] + 516) = 0;
  result = dword_2252CF4[429] + 1536;
  ++*(ushort *)(dword_2252CF4[429] + 1608);
  return result;
}

//----- (02242834) --------------------------------------------------------
int Function_2242834()
{
  int v0;
  bool v1;
  int result;

  v0 = *(uchar *)(dword_2252CF4[429] + 2704);
  v1 = v0 == 1;
  if ( v0 != 1 )
    v1 = v0 == 26;
  if ( !v1 && v0 != 29 )
    return 0;
  Function_22427b4();
  Function_22420e4();
  result = 1;
  *(uchar *)(dword_2252CF4[429] + 2704) = 2;
  return result;
}

//----- (0224287C) --------------------------------------------------------
int Function_224287c()
{
  if ( *(uchar *)(dword_2252CF4[429] + 2704) != 5 )
    return 0;
  *(uchar *)(dword_2252CF4[429] + 2704) = 6;
  Function_2240c7c();
  return 1;
}

//----- (022428B0) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x22428CC for case 0"

//----- (022428CC) --------------------------------------------------------
// jumptable 022428C4 case 0
int __fastcall Function_22428cc(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (022428D0) --------------------------------------------------------
void Function_22428d0()
{
  JUMPOUT(&loc_2242958);
}

//----- (022428D4) --------------------------------------------------------
void Function_22428d4()
{
  JUMPOUT(&loc_2242994);
}

//----- (022428D8) --------------------------------------------------------
void Function_22428d8()
{
  JUMPOUT(&loc_224299C);
}

//----- (022428DC) --------------------------------------------------------
void Function_22428dc()
{
  JUMPOUT(&loc_22429B4);
}

//----- (022428E0) --------------------------------------------------------
void Function_22428e0()
{
  JUMPOUT(&loc_22429C8);
}

//----- (022428E4) --------------------------------------------------------
void Function_22428e4()
{
  JUMPOUT(&loc_22429C8);
}

//----- (022428E8) --------------------------------------------------------
void Function_22428e8()
{
  JUMPOUT(&loc_22429D0);
}

//----- (022428EC) --------------------------------------------------------
void Function_22428ec()
{
  JUMPOUT(&loc_22429D8);
}

//----- (022428F0) --------------------------------------------------------
void Function_22428f0()
{
  JUMPOUT(&loc_22429D8);
}

//----- (022428F4) --------------------------------------------------------
void Function_22428f4()
{
  JUMPOUT(&loc_22429D8);
}

//----- (022428F8) --------------------------------------------------------
void Function_22428f8()
{
  JUMPOUT(&loc_22429E0);
}

//----- (022428FC) --------------------------------------------------------
// jumptable 022428C4 case 12
int __fastcall Function_22428fc(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242900) --------------------------------------------------------
// jumptable 022428C4 case 13
int __fastcall Function_2242900(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242904) --------------------------------------------------------
// jumptable 022428C4 case 14
int __fastcall Function_2242904(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242908) --------------------------------------------------------
// jumptable 022428C4 case 15
int __fastcall Function_2242908(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (0224290C) --------------------------------------------------------
void Function_224290c()
{
  JUMPOUT(&loc_22429E8);
}

//----- (02242910) --------------------------------------------------------
void Function_2242910()
{
  JUMPOUT(&loc_2242A00);
}

//----- (02242914) --------------------------------------------------------
void Function_2242914()
{
  JUMPOUT(&loc_2242A1C);
}

//----- (02242918) --------------------------------------------------------
void Function_2242918()
{
  JUMPOUT(&loc_2242A40);
}

//----- (0224291C) --------------------------------------------------------
// jumptable 022428C4 case 20
int __fastcall Function_224291c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242920) --------------------------------------------------------
void Function_2242920()
{
  JUMPOUT(&loc_2242A78);
}

//----- (02242924) --------------------------------------------------------
void Function_2242924()
{
  JUMPOUT(&loc_2242A9C);
}

//----- (02242928) --------------------------------------------------------
// jumptable 022428C4 case 23
int __fastcall Function_2242928(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (0224292C) --------------------------------------------------------
void Function_224292c()
{
  JUMPOUT(&loc_2242AD4);
}

//----- (02242930) --------------------------------------------------------
void Function_2242930()
{
  JUMPOUT(&loc_2242AF8);
}

//----- (02242934) --------------------------------------------------------
// jumptable 022428C4 case 26
int __fastcall Function_2242934(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242938) --------------------------------------------------------
void Function_2242938()
{
  JUMPOUT(&loc_2242B30);
}

//----- (0224293C) --------------------------------------------------------
void Function_224293c()
{
  JUMPOUT(&loc_2242B54);
}

//----- (02242940) --------------------------------------------------------
// jumptable 022428C4 case 29
int __fastcall Function_2242940(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242944) --------------------------------------------------------
void Function_2242944()
{
  JUMPOUT(&loc_2242C24);
}

//----- (02242948) --------------------------------------------------------
// jumptable 022428C4 case 31
int __fastcall Function_2242948(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (0224294C) --------------------------------------------------------
void Function_224294c()
{
  JUMPOUT(&loc_2242BC8);
}

//----- (02242950) --------------------------------------------------------
void Function_2242950()
{
  JUMPOUT(&loc_2242BEC);
}

//----- (02242954) --------------------------------------------------------
// jumptable 022428C4 case 34
int __fastcall Function_2242954(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242C34) --------------------------------------------------------
int __fastcall Function_2242c34(uchar *a1, bool *a2)
{
  int result;

  *a1 = *(uchar *)(dword_2252CF4[429] + 2704);
  *a2 = *(uchar *)(dword_2252CF4[429] + 2704) != *(uchar *)(dword_2252CF4[429] + 2705);
  result = *(uchar *)(dword_2252CF4[429] + 2704);
  *(uchar *)(dword_2252CF4[429] + 2705) = result;
  return result;
}

//----- (02242C78) --------------------------------------------------------
int Function_2242c78()
{
  return Function_221f874(1);
}

//----- (02242C88) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2242CFC for case 0"

//----- (02242C9C) --------------------------------------------------------
void Function_2242c9c()
{
  JUMPOUT(&loc_2242CFC);
}

//----- (02242CA0) --------------------------------------------------------
void Function_2242ca0()
{
  JUMPOUT(&loc_2242CC4);
}

//----- (02242CA4) --------------------------------------------------------
void __noreturn Function_2242ca4()
{
  JUMPOUT(&loc_2242D24);
}

//----- (02242CA8) --------------------------------------------------------
// jumptable 02242C94 case 3
int __fastcall Function_2242ca8(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242CAC) --------------------------------------------------------
void __noreturn Function_2242cac()
{
  JUMPOUT(&loc_2242D24);
}

//----- (02242CB0) --------------------------------------------------------
void __noreturn Function_2242cb0()
{
  JUMPOUT(&loc_2242D24);
}

//----- (02242CB4) --------------------------------------------------------
void __noreturn Function_2242cb4()
{
  JUMPOUT(&loc_2242D24);
}

//----- (02242CB8) --------------------------------------------------------
void Function_2242cb8()
{
  JUMPOUT(&loc_2242CCC);
}

//----- (02242CBC) --------------------------------------------------------
void __noreturn Function_2242cbc()
{
  JUMPOUT(&loc_2242D24);
}

//----- (02242CC0) --------------------------------------------------------
void Function_2242cc0()
{
  int v0;

  Function_2242474();
  JUMPOUT(__CS__, v0);
}

//----- (02242D30) --------------------------------------------------------
int Function_2242d30()
{
  return Function_22407f0(*(uint *)(dword_2252CF4[429] + 2760), *(ushort *)(dword_2252CF4[429] + 1608));
}

//----- (02242D54) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2242EB8 for case 0"

//----- (02242D68) --------------------------------------------------------
void Function_2242d68()
{
  JUMPOUT(&loc_2242EB8);
}

//----- (02242D6C) --------------------------------------------------------
void Function_2242d6c()
{
  JUMPOUT(&loc_2242D88);
}

//----- (02242D70) --------------------------------------------------------
void Function_2242d70()
{
  JUMPOUT(&loc_2242DA8);
}

//----- (02242D74) --------------------------------------------------------
void Function_2242d74()
{
  JUMPOUT(&loc_2242E38);
}

//----- (02242D78) --------------------------------------------------------
// jumptable 02242D60 case 4
int __fastcall Function_2242d78(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242D7C) --------------------------------------------------------
void Function_2242d7c()
{
  JUMPOUT(&loc_2242E8C);
}

//----- (02242D80) --------------------------------------------------------
// jumptable 02242D60 case 6
int __fastcall Function_2242d80(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242D84) --------------------------------------------------------
void Function_2242d84()
{
  int v0;

  Function_2240ebc();
  *(uchar *)(dword_2252CF4[429] + 2704) = 1;
  JUMPOUT(__CS__, v0);
}

//----- (02242F0C) --------------------------------------------------------
int Function_2242f0c()
{
  int result;

  Function_2243198();
  Function_2242390((int)Function_224315c);
  result = dword_2252CF4[429];
  *(uchar *)(dword_2252CF4[429] + 2704) = 8;
  return result;
}

//----- (02242F38) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2242F4C for case 0"

//----- (02242F4C) --------------------------------------------------------
// jumptable 02242F44 case 0
int __fastcall Function_2242f4c(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242F50) --------------------------------------------------------
void Function_2242f50()
{
  JUMPOUT(&loc_2242F68);
}

//----- (02242F54) --------------------------------------------------------
// jumptable 02242F44 case 2
int __fastcall Function_2242f54(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242F58) --------------------------------------------------------
// jumptable 02242F44 case 3
int __fastcall Function_2242f58(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int, int, int))
{
  return a6(a1, a2, a3, a5);
}

//----- (02242F5C) --------------------------------------------------------
void Function_2242f5c()
{
  JUMPOUT(&loc_2242F94);
}

//----- (02242F60) --------------------------------------------------------
void Function_2242f60()
{
  JUMPOUT(&loc_2242F94);
}

//----- (02242F64) --------------------------------------------------------
void Function_2242f64()
{
  uint v0;
  int v1;
  int v2;

  v0 = *(uint *)(dword_2252CF4[429] + 2724)
     + ((((uint)*(ushort *)(dword_2252CF4[429] + 512) >> 31)
       + __ROR4__(
           (*(ushort *)(dword_2252CF4[429] + 512) << 28)
         - ((uint)*(ushort *)(dword_2252CF4[429] + 512) >> 31),
           28)) << 6);
  v1 = Function_22431dc(0);
  Function_2243344(v1);
  if ( *(uchar *)(dword_2252CF4[429] + 2704) == 27 )
    JUMPOUT(__CS__, v2);
  if ( *(uint *)(dword_2252CF4[429] + 516) > 0x1E0u )
  {
    *(uchar *)(dword_2252CF4[429] + 2704) = 27;
    JUMPOUT(__CS__, v2);
  }
  if ( Function_2243428() == 16 || Function_2243428() == 32 )
  {
    Function_2243428();
    *(uchar *)(dword_2252CF4[429] + 2704) = 10;
    JUMPOUT(__CS__, v2);
  }
  if ( Function_2243428() == 64 )
  {
    *(uchar *)(dword_2252CF4[429] + 2704) = 11;
    JUMPOUT(__CS__, v2);
  }
  if ( Function_2243428() == 255 )
  {
    *(uchar *)(dword_2252CF4[429] + 2704) = 27;
    JUMPOUT(__CS__, v2);
  }
  if ( Function_2243428() == 80 )
  {
    *(uchar *)(dword_2252CF4[429] + 2704) = 21;
    JUMPOUT(__CS__, v2);
  }
  if ( Function_2243428() == 96 )
  {
    *(uchar *)(dword_2252CF4[429] + 2704) = 24;
    JUMPOUT(__CS__, v2);
  }
  if ( Function_2243428() == 112 )
  {
    *(uchar *)(dword_2252CF4[429] + 2704) = 27;
    JUMPOUT(__CS__, v2);
  }
  if ( !Function_2243428() )
  {
    *(uchar *)(dword_2252CF4[429] + 2704) = 8;
    JUMPOUT(__CS__, v2);
  }
  if ( Function_2243428() == 189 )
  {
    *(uchar *)(dword_2252CF4[429] + 2704) = 9;
    JUMPOUT(__CS__, v2);
  }
  *(uchar *)(dword_2252CF4[429] + 2704) = 31;
  JUMPOUT(__CS__, v2);
}

//----- (02243114) --------------------------------------------------------
int Function_2243114()
{
  int result;

  result = dword_2252CF4[429];
  *(uchar *)(dword_2252CF4[429] + 2704) = 12;
  return result;
}

//----- (0224312C) --------------------------------------------------------
int Function_224312c()
{
  int result;

  if ( Function_2241d04() != 1 )
    return 0;
  Function_2242598();
  result = 1;
  *(uchar *)(dword_2252CF4[429] + 2704) = 1;
  return result;
}

//----- (0224315C) --------------------------------------------------------
int __fastcall Function_224315c(int a1)
{
  int v1;

  v1 = Function_22413a0((uchar *)(a1 + 10));
  if ( !v1 )
    return 0;
  *(uint *)(dword_2252CF4[429] + 4 * (v1 - 1) + 2720) = Function_224136c(v1);
  return 1;
}

//----- (02243198) --------------------------------------------------------
int Function_2243198()
{
  int result;

  MI_CpuFill8((ushort *)(dword_2252CF4[429] + 256), 0, 0x100u);
  MI_CpuFill8((ushort *)dword_2252CF4[429], 0, 0x100u);
  result = dword_2252CF4[429];
  *(uint *)(result + 2736) = result;
  return result;
}

//----- (022431DC) --------------------------------------------------------
int __fastcall Function_22431dc(short a1, short a2, int a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  uint v9;

  if ( *(uchar *)(dword_2252CF4[429] + 2707) == 1 )
  {
    **(ushort **)(dword_2252CF4[429] + 2736) = a1;
    *(ushort *)(*(uint *)(dword_2252CF4[429] + 2736) + 2) = a2;
    MI_CpuCopy8(a3, *(uint *)(dword_2252CF4[429] + 2736) + 4, 0x40u, (uint)&dword_2252CF4[429]);
  }
  else
  {
    ++*(uint *)(dword_2252CF4[429] + 516);
    **(ushort **)(dword_2252CF4[429] + 2736) = 188;
    *(uchar *)(*(uint *)(dword_2252CF4[429] + 2736) + 4) = *(uchar *)(dword_2252CF4[429] + 2706);
  }
  result = Function_2241d04();
  if ( result == 5 )
  {
    if ( !Function_22423cc(dword_2252CF4[429], v4, v5, v6) )
    {
      result = *(uint *)(dword_2252CF4[429] + 516) + 4;
      *(uint *)(dword_2252CF4[429] + 516) = result;
      return result;
    }
    if ( *(uchar *)(dword_2252CF4[429] + 2707) )
    {
      *(uint *)(dword_2252CF4[429] + 516) = 0;
      if ( Function_2241cf0() != 3 )
      {
        result = dword_2252CF4[429];
        *(uchar *)(dword_2252CF4[429] + 2704) = 27;
        return result;
      }
    }
    else
    {
      ++*(uint *)(dword_2252CF4[429] + 516);
    }
    v7 = 0;
    do
    {
      v8 = Function_22423a4(v7);
      if ( v8 )
      {
        MI_CpuCopy8(v8, dword_2252CF4[429] + 256 + 68 * v7, 0x44u, v9);
        *(uint *)(dword_2252CF4[429] + 4 * v7 + 520) = 1;
      }
      else
      {
        *(uint *)(dword_2252CF4[429] + 4 * v7 + 520) = 0;
      }
      result = (v7 + 1) << 16;
      v7 = (v7 + 1) & 0xFFFF;
    }
    while ( v7 < 2 );
  }
  return result;
}

//----- (02243344) --------------------------------------------------------
ll Function_2243344()
{
  int v0;
  ll result;
  int v2;
  int v3;

  v0 = 0;
  result = 807453851649LL;
  do
  {
    if ( *(uint *)(dword_2252CF4[429] + 4 * v0 + 520) )
    {
      v2 = 68 * v0;
      v3 = dword_2252CF4[429] + 256;
      if ( v0 == 1 )
      {
        if ( *(uchar *)(dword_2252CF4[429] + 2707) == 1 )
        {
          if ( *(ushort *)(v3 + v2) != 16 )
            return result;
          if ( !(++*(uint *)(dword_2252CF4[429] + 2708) & 1)
            && (ushort)++*(ushort *)(dword_2252CF4[429] + 512) >= 0x24u )
          {
            *(ushort *)(dword_2252CF4[429] + 512) = 0;
          }
        }
        else
        {
          *(ushort *)(dword_2252CF4[429] + 514) = 188;
          if ( *(ushort *)(v3 + v2) == 189 )
          {
            *(uchar *)(dword_2252CF4[429] + 2707) = 1;
            *(ushort *)(dword_2252CF4[429] + 512) = 0;
            *(uint *)(dword_2252CF4[429] + 2708) = 0;
          }
        }
      }
    }
    ++v0;
  }
  while ( v0 < 16 );
  return result;
}

//----- (02243428) --------------------------------------------------------
int Function_2243428()
{
  return *(ushort *)(dword_2252CF4[429] + 324);
}

//----- (02243440) --------------------------------------------------------
int Function_2243440()
{
  int v0;
  int v1;
  int v2;
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13;
  int v14[9];
  int v15;

  dword_2252CF4[430] = Function_2245068(232, 4);
  FS_InitFile(v14);
  v2 = FS_OpenFile(v14, "rom:/dwc/utility.bin", v0, v1);
  if ( !v2 )
    OS_Panic();
  *(ushort *)(dword_2252CF4[430] + 228) = OS_GetLockID(v2);
  v3 = v15;
  FS_ReadFile(v14, (int)&v11, 8);
  FS_ReadFile(v14, (int)&v9, 8);
  FS_CloseFile(v14);
  FS_InitArchive((ushort *)(dword_2252CF4[430] + 136));
  if ( !FS_RegisterArchiveName((int *)(dword_2252CF4[430] + 136), (int)&dword_2249718, 3) )
    OS_Panic();
  FS_SetArchiveProc(dword_2252CF4[430] + 136, (int)Function_224367c, 1538);
  if ( !FS_LoadArchive(
          (uint *)(dword_2252CF4[430] + 136),
          v3,
          v9,
          v10,
          v11,
          v12,
          (int (__fastcall *)(int, uint, int, uint))Function_22436e0,
          (int (__fastcall *)(int, int, int, uint))Function_2243730) )
    OS_Panic();
  v4 = FS_LoadArchiveTables((uint *)(dword_2252CF4[430] + 136), 0, 0);
  *(uint *)dword_2252CF4[430] = Function_2245068(v4, 4);
  FS_LoadArchiveTables((uint *)(dword_2252CF4[430] + 136), *(uint *)dword_2252CF4[430], v4);
  *(uint *)(dword_2252CF4[430] + 132) = Function_2244008(32);
  Function_20c1ab0(&v13, "%s:/", &dword_2249718);
  return FS_ChangeDir((uchar *)&v13, v5, v6, v7);
}

//----- (022435F0) --------------------------------------------------------
int __fastcall Function_22435f0(int a1, int a2, int a3, int a4)
{
  FS_ChangeDir("rom:/", a2, a3, a4);
  Function_20c7b2c(dword_2252CF4[430] + 136);
  Function_20c7948((uint *)(dword_2252CF4[430] + 136));
  Function_20c7854((uint *)(dword_2252CF4[430] + 136));
  OS_ReleaseLockID(*(ushort *)(dword_2252CF4[430] + 228));
  *(ushort *)(dword_2252CF4[430] + 228) = 0;
  Function_224508c(dword_2252CF4[430]);
  *(uint *)dword_2252CF4[430] = 0;
  return Function_224508c(&dword_2252CF4[430]);
}

//----- (0224367C) --------------------------------------------------------
int __fastcall Function_224367c(int a1, int a2)
{
  int result;

  switch ( a2 )
  {
    case 1:
      return 4;
    case 9:
      CARD_LockRom(*(ushort *)(dword_2252CF4[430] + 228));
      result = 0;
      break;
    case 10:
      CARD_UnlockRom(*(ushort *)(dword_2252CF4[430] + 228));
      result = 0;
      break;
    default:
      result = 8;
      break;
  }
  return result;
}

//----- (022436E0) --------------------------------------------------------
int __fastcall Function_22436e0(int a1, int a2, int a3, int a4)
{
  CARDi_ReadRom(0xFFFFFFFF, a3 + *(uint *)(a1 + 40), a2, a4, (int)Function_2243720, a1, 1);
  return 6;
}

//----- (02243720) --------------------------------------------------------
int __fastcall Function_2243720(int a1)
{
  return FS_NotifyArchiveAsyncEnd(a1, 0);
}

//----- (02243730) --------------------------------------------------------
int Function_2243730()
{
  return 1;
}

//----- (02243738) --------------------------------------------------------
uint *__fastcall Function_2243738(uchar *a1, int *a2, int a3)
{
  uchar *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  uint *v12;
  uint *v13;
  int v14[9];
  int v15;
  int v16;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_22440bc(*(uint *)(dword_2252CF4[430] + 132));
  FS_InitFile(v14);
  if ( !FS_OpenFile(v14, v3, v6, v7) )
    OS_Panic();
  v8 = v16 - v15;
  if ( v4 )
    *v4 = v8;
  if ( Function_2243860(v3, ".l", 2) )
    v9 = -4;
  else
    v9 = v5;
  v13 = (uint *)Function_2245068(v8, v9);
  FS_ReadFile(v14, (int)v13, v8);
  FS_CloseFile(v14);
  if ( v9 > 0 )
    return v13;
  v11 = *v13 >> 8;
  if ( v4 )
    *v4 = v11;
  v12 = (uint *)Function_2245068(v11, v5);
  MI_UncompressLZ8(v13, v12);
  Function_224508c(&v13);
  return v12;
}

//----- (0224382C) --------------------------------------------------------
int __fastcall Function_224382c(int a1, int a2, int a3, int a4)
{
  int varg_r0;
  int varg_r1;
  int varg_r2;
  int varg_r3;

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  Function_224508c(&varg_r0);
  return Function_2244064(*(uint *)(dword_2252CF4[430] + 132), varg_r0);
}

//----- (02243860) --------------------------------------------------------
BOOL __fastcall Function_2243860(char *a1, char *a2, int a3)
{
  char *v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  bool v8;
  uchar v9;
  BOOL result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = strlen(a1);
  v7 = strlen(v3);
  v9 = __OFSUB__(v6, v5);
  v8 = v6 - v5 < 0;
  if ( v6 >= v5 )
  {
    v9 = __OFSUB__(v7, v5);
    v8 = v7 - v5 < 0;
  }
  if ( v8 ^ v9 )
    result = 0;
  else
    result = Function_20d5190((uchar *)&v4[v6 - v5], (uchar *)&v3[v7 - v5], v5) == 0;
  return result;
}

//----- (022438B8) --------------------------------------------------------
int Function_22438b8()
{
  int v0;
  int v1;
  int result;

  v0 = 0;
  v1 = 0;
  dword_2252CF4[431] = Function_2245068(1104, 4);
  do
  {
    *(uint *)(dword_2252CF4[431] + v1 + 548) = Function_2244008(32);
    *(uint *)(dword_2252CF4[431] + v1 + 544) = Function_2245974();
    *(uint *)(dword_2252CF4[431] + v1 + 520) = Function_2245bc0(v0, 64);
    *(uint *)(dword_2252CF4[431] + v1 + 536) = Function_2245bc0(v0, 127) + 8;
    Function_2245a34(*(uint *)(dword_2252CF4[431] + v1 + 544), dword_2252CF4[431] + v1 + 512);
    result = Function_2245a24(*(uint *)(dword_2252CF4[431] + v1 + 544), dword_2252CF4[431] + v1 + 528);
    v1 += 552;
    ++v0;
  }
  while ( v0 < 2 );
  return result;
}

//----- (0224398C) --------------------------------------------------------
int Function_224398c()
{
  int v0;
  int v1;

  v0 = 0;
  v1 = 0;
  do
  {
    Function_22459a0(*(uint *)(dword_2252CF4[431] + v1 + 544));
    Function_2244048(*(uint *)(dword_2252CF4[431] + v1 + 548));
    ++v0;
    v1 += 552;
  }
  while ( v0 < 2 );
  return Function_224508c(&dword_2252CF4[431]);
}

//----- (022439E0) --------------------------------------------------------
int __fastcall Function_22439e0(int a1, int a2, int a3)
{
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
  uint *v14;
  int v15;
  uint v16;
  int result;

  v3 = a1;
  v4 = 552 * a1;
  v5 = a2;
  v6 = a3;
  v7 = Function_22440bc(*(uint *)(dword_2252CF4[431] + 552 * a1 + 548));
  v8 = OS_DisableIrqMask(1);
  if ( v6 )
  {
    v9 = dword_2252CF4[431] + 552 * v3;
    v10 = v9 + 512;
    if ( v9 + 512 != v9 + 528 )
    {
      while ( 1 )
      {
        v11 = *(uint *)(v10 + 4);
        v12 = *(uint *)(v10 + 8) + 8 * *(uchar *)(v10 + 12);
        if ( (uint)(v12 + 8 * v5) <= *(uint *)(v11 + 8) )
          break;
        v10 = *(uint *)(v10 + 4);
        if ( v11 == dword_2252CF4[431] + v4 + 528 )
          goto LABEL_6;
      }
      *(uint *)(v7 + 8) = v12;
      Function_22459f4(v11, v7);
    }
LABEL_6:
    if ( v10 == dword_2252CF4[431] + v4 + 528 )
      OS_Panic();
  }
  else
  {
    v13 = dword_2252CF4[431] + 552 * v3;
    v14 = (uint *)(v13 + 528);
    if ( v13 + 528 != v13 + 512 )
    {
      while ( 1 )
      {
        v15 = *v14;
        v16 = v14[2] - 8 * v5;
        if ( v16 >= *(uint *)(*v14 + 8) + 8 * (uint)*(uchar *)(*v14 + 12) )
          break;
        v14 = (uint *)*v14;
        if ( v15 == dword_2252CF4[431] + v4 + 512 )
          goto LABEL_12;
      }
      *(uint *)(v7 + 8) = v16;
      Function_22459f4(v14, v7);
    }
LABEL_12:
    if ( v14 == (uint *)(dword_2252CF4[431] + v4 + 512) )
      OS_Panic();
  }
  OS_EnableIrqMask(v8);
  result = v7;
  *(uchar *)(v7 + 12) = v5;
  return result;
}

//----- (02243B3C) --------------------------------------------------------
int __fastcall Function_2243b3c(uint a1, int a2)
{
  uint v2;
  int v3;
  int v4;
  uint *v5;

  v2 = a1;
  v3 = 0;
  v4 = 0;
  v5 = *(uint **)(a1 + 8);
  if ( (int)*(uchar *)(a1 + 12) > 0 )
  {
    do
    {
      ++v4;
      *v5 = *v5 & 0xC1FFFCFF | 0x200;
      v5 += 2;
      a2 = *(uchar *)(a1 + 12);
    }
    while ( v4 < a2 );
  }
  Function_22459bc(a1, a2, v5, v4);
  if ( v2 >= dword_2252CF4[431] + 552 )
    v3 = 1;
  return Function_2244064(*(uint *)(dword_2252CF4[431] + 552 * v3 + 548), v2);
}

//----- (02243BBC) --------------------------------------------------------
int __fastcall Function_2243bbc(int a1, int a2)
{
  return *(uint *)(a1 + 8) + 8 * a2;
}

//----- (02243BC8) --------------------------------------------------------
int __fastcall Function_2243bc8(int a1)
{
  return *(uchar *)(a1 + 12);
}

//----- (02243BD0) --------------------------------------------------------
uint __fastcall Function_2243bd0(uint result, int a2, int a3, int a4)
{
  int v4;
  bool v5;
  int i;
  bool v7;
  int v8;
  uint v9;

  v4 = *(uint *)(result + 8);
  if ( a2 < 0 )
  {
    for ( i = 0; i < *(uchar *)(result + 12); ++i )
    {
      v7 = a3 == 256;
      if ( a3 != 256 )
        v7 = a3 == 768;
      v8 = *(uint *)(v4 + 8 * i);
      if ( v7 )
        v9 = v8 & 0xC1FFFCFF | a3 | (a4 << 25);
      else
        v9 = v8 & 0xC1FFFCFF | a3;
      *(uint *)(v4 + 8 * i) = v9;
    }
  }
  else
  {
    v5 = a3 == 256;
    if ( a3 != 256 )
      v5 = a3 == 768;
    if ( v5 )
      result = *(uint *)(v4 + 8 * a2) & 0xC1FFFCFF | a3 | (a4 << 25);
    else
      result = *(uint *)(v4 + 8 * a2) & 0xC1FFFCFF | a3;
    *(uint *)(v4 + 8 * a2) = result;
  }
  return result;
}

//----- (02243C74) --------------------------------------------------------
int __fastcall Function_2243c74(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int i;
  int v7;

  v4 = *(uint *)(result + 8);
  if ( a2 < 0 )
  {
    for ( i = 0; i < *(uchar *)(result + 12); *(ushort *)(v7 + 4) = *(ushort *)(v7 + 4) & 0xFFF | ((ushort)a4 << 12) )
    {
      v7 = v4 + 8 * i;
      *(uint *)(v4 + 8 * i) = *(uint *)(v4 + 8 * i) & 0xFFFFF3FF | (a3 << 10);
      ++i;
    }
  }
  else
  {
    v5 = v4 + 8 * a2;
    *(uint *)(v4 + 8 * a2) = *(uint *)(v4 + 8 * a2) & 0xFFFFF3FF | (a3 << 10);
    result = *(ushort *)(v5 + 4) & 0xFFF | (a4 << 12);
    *(ushort *)(v5 + 4) = result;
  }
  return result;
}

//----- (02243CF4) --------------------------------------------------------
uint __fastcall Function_2243cf4(uint result, int a2, int a3, uchar a4)
{
  uint *v4;
  uint v5;
  int i;

  v4 = *(uint **)(result + 8);
  if ( a2 < 0 )
  {
    v5 = *v4;
    *v4 = *v4 & 0xFE00FF00 | a4 | (a3 << 16) & 0x1FFFFFF;
    for ( i = 1; i < *(uchar *)(result + 12); ++i )
      v4[2 * i] = v4[2 * i] & 0xFE00FF00 | (uchar)(v4[2 * i] + a4 - v5) | ((a3
                                                                                    - ((v5 & 0x1FF0000) >> 16)
                                                                                    + ((v4[2 * i] & 0x1FF0000) >> 16)) << 16) & 0x1FFFFFF;
  }
  else
  {
    result = v4[2 * a2] & 0xFE00FF00 | a4 | (a3 << 16) & 0x1FFFFFF;
    v4[2 * a2] = result;
  }
  return result;
}

//----- (02243DE4) --------------------------------------------------------
int __fastcall Function_2243de4(int result, int a2, int a3)
{
  int v3;
  int v4;
  int i;
  int v6;

  v3 = *(uint *)(result + 8);
  if ( a2 < 0 )
  {
    for ( i = 0; i < *(uchar *)(result + 12); *(ushort *)(v6 + 4) = *(ushort *)(v6 + 4) & 0xF3FF | ((ushort)a3 << 10) )
      v6 = v3 + 8 * i++;
  }
  else
  {
    v4 = v3 + 8 * a2;
    result = (ushort)(*(ushort *)(v4 + 4) & 0xF3FF) | (a3 << 10);
    *(ushort *)(v4 + 4) = result;
  }
  return result;
}

//----- (02243E44) --------------------------------------------------------
int __fastcall Function_2243e44(int a1, int a2, uint *a3, uint *a4)
{
  int v4;
  int result;

  v4 = *(uint *)(*(uint *)(a1 + 8) + 8 * a2);
  *a3 = (v4 & 0x1FF0000u) >> 16;
  result = (uchar)v4;
  *a4 = (uchar)v4;
  return result;
}

//----- (02243E74) --------------------------------------------------------
uint *__fastcall Function_2243e74(int a1, uchar *a2, int a3, int a4)
{
  int v4;
  uint *result;
  char v6;
  int v7;

  v7 = a4;
  v4 = a1;
  result = Function_2243738(a2, (int *)&v6, 4);
  dword_2252CF4[v4 + 432] = (int)result;
  return result;
}

//----- (02243EA4) --------------------------------------------------------
int *__fastcall Function_2243ea4(int a1, int a2, int a3, int a4)
{
  int v4;
  int *result;

  v4 = a1;
  Function_224382c(dword_2252CF4[a1 + 432], (int)&dword_2252CF4[432], a3, a4);
  result = &dword_2252CF4[432];
  dword_2252CF4[v4 + 432] = 0;
  return result;
}

//----- (02243ECC) --------------------------------------------------------
int *__fastcall Function_2243ecc(int a1, int a2, uint *a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int *result;
  short v8;
  int i;
  char v10;

  v3 = a3;
  v4 = dword_2252CF4[a1 + 432];
  v5 = *(ushort *)(v4 + 8 * a2);
  v6 = v4 + *(uint *)(v4 + 8 * a2 + 4);
  result = (int *)MIi_CpuClear32(0, &v10, 8);
  for ( i = 0; i < v5; v3 += 2 )
  {
    MIi_CpuCopy16(v6, (int)&v10, 6, v8);
    result = MI_CpuCopy32((int *)&v10, v3, 8);
    ++i;
    v6 += 6;
  }
  return result;
}

//----- (02243F60) --------------------------------------------------------
uint *__fastcall Function_2243f60(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)Function_2245b54();
  Function_2243ecc(v2, v3, v4);
  return v4;
}

//----- (02243F8C) --------------------------------------------------------
int __fastcall Function_2243f8c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;

  v3 = a1;
  v4 = a2;
  v5 = Function_22439e0(a1, *(ushort *)(dword_2252CF4[a1 + 432] + 8 * a2), a3);
  v6 = (uint *)Function_2243bbc(v5, 0);
  Function_2243ecc(v3, v4, v6);
  return v5;
}

//----- (02243FD4) --------------------------------------------------------
int __fastcall Function_2243fd4(int a1)
{
  short v1;
  int result;

  v1 = a1;
  result = Function_2245068(4 * (a1 + 1) + 8, 4);
  *(ushort *)result = v1 + 1;
  *(uchar *)(result + 2) = 0;
  *(uchar *)(result + 3) = 0;
  return result;
}

//----- (02244008) --------------------------------------------------------
int __fastcall Function_2244008(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int i;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  result = Function_2243fd4(a1);
  for ( i = 0; i < v3; v4 += v5 )
  {
    v8 = result + 4 * i++;
    *(uint *)(v8 + 4) = v4;
  }
  *(uchar *)(result + 3) = v3;
  return result;
}

//----- (02244048) --------------------------------------------------------
int __fastcall Function_2244048(int a1, int a2, int a3, int a4)
{
  int varg_r0;
  int varg_r1;
  int varg_r2;
  int varg_r3;

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  return Function_224508c(&varg_r0);
}

//----- (02244064) --------------------------------------------------------
int __fastcall Function_2244064(ushort *a1, int a2)
{
  ushort *v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = OS_DisableIrqMask(1);
  v5 = Function_20bd140(*((uchar *)v2 + 3) + 1, *v2);
  if ( v5 == *((uchar *)v2 + 2) )
    OS_Panic();
  *(uint *)&v2[2 * *((uchar *)v2 + 3) + 2] = v3;
  *((uchar *)v2 + 3) = v5;
  return OS_EnableIrqMask(v4);
}

//----- (022440BC) --------------------------------------------------------
int __fastcall Function_22440bc(ushort *a1)
{
  ushort *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uchar v6;

  v1 = a1;
  v2 = 0;
  v3 = OS_DisableIrqMask(1);
  v4 = *((uchar *)v1 + 3);
  v5 = v3;
  if ( *((uchar *)v1 + 2) != v4 )
  {
    v6 = Function_20bd140(v4 + *v1 - 1, *v1);
    *((uchar *)v1 + 3) = v6;
    v2 = *(uint *)&v1[2 * v6 + 2];
  }
  OS_EnableIrqMask(v5);
  return v2;
}

//----- (02244114) --------------------------------------------------------
ushort *Function_2244114()
{
  dword_2252CF4[434] = Function_2245068(24, 4);
  G2x_SetBlendBrightness_(&REG_BLDCNT, 63, 16);
  return G2x_SetBlendBrightness_(&REG_BLDCNT_SUB, 63, 16);
}

//----- (0224415C) --------------------------------------------------------
int Function_224415c()
{
  return Function_224508c(&dword_2252CF4[434]);
}

//----- (02244170) --------------------------------------------------------
int __fastcall Function_2244170(int a1)
{
  int v1;

  if ( a1 == 1 )
    v1 = dword_2252CF4[434];
  else
    v1 = dword_2252CF4[434] + 12;
  return *(uchar *)(v1 + 9);
}

//----- (02244194) --------------------------------------------------------
int __fastcall Function_2244194(int a1, int a2, short a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  short v7;
  int v8;
  int result;
  char v10;
  char v11;
  char v12;
  char v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = 0;
  v6 = 240;
  v13 = 0;
  if ( a2 == 1 )
    v5 = &dword_2252CF4[434];
  v10 = -16;
  if ( a2 == 1 )
    v6 = *v5;
  else
    v5 = &dword_2252CF4[434];
  if ( a2 != 1 )
    v5 = (int *)*v5;
  v7 = a4;
  if ( a2 != 1 )
    v6 = (int)(v5 + 3);
  v8 = *(uchar *)(v6 + 9);
  v11 = 0;
  v12 = 16;
  if ( v8 )
    return 0;
  if ( a2 == 1 )
    G2x_SetBlendBrightness_(&REG_BLDCNT_SUB, a3, *(&v10 + v4));
  else
    G2x_SetBlendBrightness_(&REG_BLDCNT, a3, *(&v10 + v4));
  *(uint *)v6 = Function_2246304(1, Function_224426c, v6, 200);
  *(ushort *)(v6 + 4) = 0;
  *(uchar *)(v6 + 8) = v4;
  *(ushort *)(v6 + 6) = v7;
  result = 1;
  *(uchar *)(v6 + 9) = 1;
  return result;
}

//----- (0224426C) --------------------------------------------------------
int __fastcall Function_224426c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  char v11;
  char v12;
  char v13;
  char v14;
  char v15;
  char v16;
  char v17;
  char v18;
  int v19;

  v19 = a4;
  v4 = a2;
  v5 = a1;
  v6 = (short)++*(ushort *)(a2 + 4);
  v7 = *(ushort *)(a2 + 6);
  v15 = 17;
  v16 = 16;
  v17 = 1;
  v18 = 0;
  v11 = 0;
  v12 = -16;
  v13 = 0;
  v14 = 16;
  v8 = Function_20bd104(16 * v6, v7);
  if ( *(&v15 + *(uchar *)(v4 + 8)) & 1 )
    v8 = 16 - v8;
  if ( *(&v15 + *(uchar *)(v4 + 8)) & 0x10 )
    v8 = -v8;
  if ( v4 == dword_2252CF4[434] )
    Function_20bf5e8(&REG_BLDCNT_SUB, v8);
  else
    Function_20bf5e8(&REG_BLDCNT, v8);
  result = *(ushort *)(v4 + 6);
  if ( *(short *)(v4 + 4) >= result )
  {
    v10 = *(uchar *)(v4 + 8);
    if ( v4 == dword_2252CF4[434] )
      Function_20bf5e8(&REG_BLDCNT_SUB, *(&v11 + v10));
    else
      Function_20bf5e8(&REG_BLDCNT, *(&v11 + v10));
    *(uchar *)(v4 + 9) = 0;
    result = Function_22463ac(1, v5);
  }
  return result;
}

//----- (02244394) --------------------------------------------------------
int __fastcall Function_2244394(short a1)
{
  short v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(dword_2252CF4[434] + 9) )
    return 0;
  *(uint *)dword_2252CF4[434] = Function_2246304(1, Function_22443ec, dword_2252CF4[434], 200);
  *(ushort *)(dword_2252CF4[434] + 4) = 0;
  *(ushort *)(dword_2252CF4[434] + 6) = v1;
  result = 1;
  *(uchar *)(dword_2252CF4[434] + 9) = 1;
  return result;
}

//----- (022443EC) --------------------------------------------------------
int __fastcall Function_22443ec(int result, int a2)
{
  if ( (short)++*(ushort *)(a2 + 4) >= (int)*(ushort *)(a2 + 6) )
  {
    *(uchar *)(a2 + 9) = 0;
    result = Function_22463ac(1, result);
  }
  return result;
}

//----- (02244424) --------------------------------------------------------
int (__fastcall *Function_2244424())(uint *a1)
{
  int v0;
  int v1;
  int (__fastcall *result)(uint *);
  int v3;
  int v4;

  dword_2252CF4[435] = Function_2245068(1664, 4);
  *(uint *)(dword_2252CF4[435] + 1648) = Function_2244008(32, dword_2252CF4[435] + 16, 48);
  if ( Function_222f74c() == 6 )
  {
    v0 = 0;
    v1 = 0;
    do
    {
      *(uint *)(dword_2252CF4[435] + 4 * v0 + 1652) = Function_2243738((uchar *)off_224B210[v0], 0, 4);
      result = Function_20ac86c(dword_2252CF4[435] + v1, *(uint **)(dword_2252CF4[435] + 4 * v0++ + 1652));
      v1 += 8;
    }
    while ( v0 < 2 );
  }
  else
  {
    v3 = 0;
    v4 = 0;
    do
    {
      *(uint *)(dword_2252CF4[435] + 4 * v3 + 1652) = Function_2243738((uchar *)off_224B218[v3], 0, 4);
      result = Function_20ac86c(dword_2252CF4[435] + v4, *(uint **)(dword_2252CF4[435] + 4 * v3++ + 1652));
      v4 += 8;
    }
    while ( v3 < 2 );
  }
  return result;
}

//----- (02244528) --------------------------------------------------------
int __fastcall Function_2244528(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = 0;
  do
    Function_224382c(*(uint *)(dword_2252CF4[435] + 4 * v4++ + 1652), a2, a3, a4);
  while ( v4 < 2 );
  Function_2244048(*(uint *)(dword_2252CF4[435] + 1648), a2, a3, a4);
  return Function_224508c(&dword_2252CF4[435]);
}

//----- (02244574) --------------------------------------------------------
int __fastcall Function_2244574(int a1, uint a2, uint a3, int a4, uint *a5, int a6)
{
  int v6;
  uint v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = Function_22440bc(*(ushort **)(dword_2252CF4[435] + 1648));
  *(uchar *)(v10 + 46) = v7;
  *(uchar *)(v10 + 47) = v8;
  *(uint *)(v10 + 40) = Function_2245c98(v6, v7 * v8, v9, &v13);
  *(ushort *)(v10 + 44) = v13;
  *a5 = Function_20ada78(v7, v8);
  if ( v6 == 1 )
    v11 = 106954752;
  if ( v6 != 1 )
    v11 = 104857600;
  Function_20ad8e4(v10, v11 + (v13 << 7), v7, v8, 4);
  (*(void (__fastcall **)(int, uint))(*(uint *)(v10 + 20) + 4))(v10, 0);
  *(uint *)(v10 + 24) = v10;
  *(uint *)(v10 + 28) = dword_2252CF4[435] + 8 * a6;
  *(uint *)(v10 + 32) = 1;
  result = v10;
  *(uint *)(v10 + 36) = 1;
  return result;
}

//----- (02244650) --------------------------------------------------------
int __fastcall Function_2244650(int a1)
{
  int v1;

  v1 = a1;
  Function_2245e10(*(uint *)(a1 + 40));
  return Function_2244064(*(ushort **)(dword_2252CF4[435] + 1648), v1);
}

//----- (0224467C) --------------------------------------------------------
uint *__fastcall Function_224467c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint *v6;
  ushort *v7;

  v2 = a1;
  v3 = HIWORD(dword_224972C[a1]);
  v4 = LOWORD(dword_224972C[a1]);
  v5 = a2;
  v6 = (uint *)(dword_2252CF4[435] + 1552 + 48 * a1);
  v6[10] = Function_2245068(32 * v4 * v3, 32);
  if ( v2 == 1 )
  {
    REG_BG0CNT_SUB &= 0xFFBFu;
    REG_BG0CNT_SUB = REG_BG0CNT_SUB & 0x43 | 0xC00;
  }
  else
  {
    REG_BG0CNT &= 0xFFBFu;
    REG_BG0CNT = REG_BG0CNT & 0x43 | 0xC00;
  }
  Function_20ad8b8((int)v6, v6[10], v4, v3, 4);
  v6[6] = v6;
  v6[7] = dword_2252CF4[435] + 8 * v5;
  v6[8] = 1;
  v6[9] = 1;
  if ( v2 == 1 )
    v7 = (ushort *)G2S_GetBG0ScrPtr();
  else
    v7 = (ushort *)G2_GetBG0ScrPtr();
  Function_20ad96c(v7, v4, v3, 0, 0, 32, *((ushort *)&dword_2249728 + v2), 15);
  Function_2244b5c(v6, 0);
  v6[11] = Function_2246304(1, Function_22447f4, dword_2252CF4[435] + 1660 + v2, 200);
  return v6;
}

//----- (022447F4) --------------------------------------------------------
int __fastcall Function_22447f4(int a1, uchar *a2)
{
  uchar *v2;
  int result;

  v2 = a2;
  result = (uchar)*a2;
  if ( *a2 )
  {
    if ( a2 == (uchar *)(dword_2252CF4[435] + 1660) )
    {
      DC_FlushRange(*(uint *)(dword_2252CF4[435] + 1592), 24576);
      GX_LoadBG0Char(*(int **)(dword_2252CF4[435] + 1592), 0, 0x6000u);
    }
    else
    {
      DC_FlushRange(*(uint *)(dword_2252CF4[435] + 1640), 12288);
      GXS_LoadBG0Char(*(int **)(dword_2252CF4[435] + 1640), 12288, 0x3000u);
    }
    result = 0;
    *v2 = 0;
  }
  return result;
}

//----- (0224487C) --------------------------------------------------------
int __fastcall Function_224487c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_22463cc(1, *(uint *)(a1 + 44));
  if ( v1 == dword_2252CF4[435] + 1552 )
  {
    v2 = G2_GetBG0CharPtr();
    MIi_CpuClear16(0, v2, 24576);
  }
  else
  {
    v3 = G2_GetBG0CharPtr();
    MIi_CpuClear16(0, v3, 12288);
  }
  return Function_224508c(v1 + 40);
}

//----- (022448E0) --------------------------------------------------------
int __fastcall Function_22448e0(int a1)
{
  return Function_224487c(dword_2252CF4[435] + 1552 + 48 * a1);
}

//----- (02244904) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2244958 for case 0"

//----- (02244938) --------------------------------------------------------
void Function_2244938()
{
  JUMPOUT(&loc_2244958);
}

//----- (0224493C) --------------------------------------------------------
void Function_224493c()
{
  JUMPOUT(&loc_2244964);
}

//----- (02244940) --------------------------------------------------------
void Function_2244940()
{
  JUMPOUT(&loc_2244964);
}

//----- (02244944) --------------------------------------------------------
void Function_2244944()
{
  JUMPOUT(&loc_2244970);
}

//----- (02244948) --------------------------------------------------------
void Function_2244948()
{
  JUMPOUT(&loc_2244970);
}

//----- (0224494C) --------------------------------------------------------
void Function_224494c()
{
  JUMPOUT(&loc_224497C);
}

//----- (02244950) --------------------------------------------------------
void Function_2244950()
{
  JUMPOUT(&loc_224497C);
}

//----- (02244954) --------------------------------------------------------
void __fastcall Function_2244954(int a1, int a2, int a3, int a4, short a5, int a6)
{
  short v6;
  char v7;
  int v8;

  LOBYTE(v6) = 1;
  HIBYTE(v6) = v7;
  Function_20adfe8(a1 + 24, a2, a3, a4, a5, a6, v6);
  JUMPOUT(__CS__, v8);
}

//----- (022449B4) --------------------------------------------------------
int __fastcall Function_22449b4(int a1, int a2, int a3, int a4, ushort a5, int a6)
{
  return Function_20ad794(a1, dword_2252CF4[435] + 8 * a6, a2, a3, a4, a5);
}

//----- (022449F0) --------------------------------------------------------
int __fastcall Function_22449f0(int result, int a2, int a3, int a4, int a5, ushort *a6, int a7)
{
  ushort *v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  ushort *v14;
  uint v15;

  v7 = a6;
  v8 = a2;
  v9 = *a6;
  v10 = result;
  v11 = a3;
  v12 = a4;
  if ( *a6 )
  {
    do
    {
      v13 = Function_20ac890(dword_2252CF4[435] + 8 * a7, v9);
      if ( v13 == 0xFFFF )
        v13 = *(ushort *)(*(uint *)(dword_2252CF4[435] + 8 * a7) + 2);
      v14 = Function_20ac8d8((int *)(dword_2252CF4[435] + 8 * a7), v13);
      result = Function_22449b4(v10, v8 + ((a5 - *((char *)v14 + 2)) >> 1), v11, v12, *v7, a7);
      v15 = v7[1];
      ++v7;
      v9 = v15;
      v8 += a5;
    }
    while ( v15 );
  }
  return result;
}

//----- (02244A9C) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2244AF0 for case 0"

//----- (02244AD0) --------------------------------------------------------
void Function_2244ad0()
{
  JUMPOUT(&loc_2244AF0);
}

//----- (02244AD4) --------------------------------------------------------
void Function_2244ad4()
{
  JUMPOUT(&loc_2244AFC);
}

//----- (02244AD8) --------------------------------------------------------
void Function_2244ad8()
{
  JUMPOUT(&loc_2244AFC);
}

//----- (02244ADC) --------------------------------------------------------
void Function_2244adc()
{
  JUMPOUT(&loc_2244B08);
}

//----- (02244AE0) --------------------------------------------------------
void Function_2244ae0()
{
  JUMPOUT(&loc_2244B08);
}

//----- (02244AE4) --------------------------------------------------------
void Function_2244ae4()
{
  JUMPOUT(&loc_2244B14);
}

//----- (02244AE8) --------------------------------------------------------
void Function_2244ae8()
{
  JUMPOUT(&loc_2244B14);
}

//----- (02244AEC) --------------------------------------------------------
void __fastcall Function_2244aec(int a1, int a2, int a3, int a4, int a5, int a6, short a7, int a8)
{
  short v8;
  char v9;
  int v10;

  LOBYTE(v8) = 1;
  HIBYTE(v8) = v9;
  Function_20ae10c(a1 + 24, a2, a3, a4, a5, a6, a7, a8, v8);
  JUMPOUT(__CS__, v10);
}

//----- (02244B5C) --------------------------------------------------------
int __fastcall Function_2244b5c(int a1)
{
  return (*(int (**)(void))(*(uint *)(a1 + 20) + 4))();
}

//----- (02244B70) --------------------------------------------------------
int __fastcall Function_2244b70(int a1, int a2, uint a3, int a4, int a5)
{
  uint v5;
  int v6;
  int v7;
  uint v8;
  int v9;

  v5 = a4;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = Function_2243bbc(a4, 0);
  Function_2243bd0(v5, -1, 0, 0);
  Function_2243c74(v5, -1, 0, 15);
  Function_2243de4(v5, -1, a5);
  return Function_20adad4(
           v9,
           *(uchar *)(v6 + 46),
           *(uchar *)(v6 + 47),
           v7,
           v8,
           0,
           *(ushort *)(v6 + 44),
           2);
}

//----- (02244C08) --------------------------------------------------------
int __fastcall Function_2244c08(int a1)
{
  bool v1;
  int result;

  v1 = a1 == dword_2252CF4[435] + 1552;
  result = 1;
  if ( v1 )
    *(uchar *)(dword_2252CF4[435] + 1660) = 1;
  else
    *(uchar *)(dword_2252CF4[435] + 1661) = 1;
  return result;
}

//----- (02244C2C) --------------------------------------------------------
short __fastcall Function_2244c2c(short result, short a2, ushort *a3)
{
  *a3 = result;
  a3[1] = a2;
  return result;
}

//----- (02244C38) --------------------------------------------------------
short __fastcall Function_2244c38(short result, short a2, short a3, short a4, ushort *a5)
{
  *a5 = result;
  a5[1] = a2;
  a5[2] = a3;
  a5[3] = a4;
  return result;
}

//----- (02244C50) --------------------------------------------------------
int __fastcall Function_2244c50(ushort *a1, ushort *a2, ushort *a3)
{
  int result;

  *a3 = *a1;
  a3[1] = a1[1];
  a3[2] = *a1 + *a2;
  result = (ushort)a1[1] + (ushort)a2[1];
  a3[3] = result;
  return result;
}

//----- (02244C84) --------------------------------------------------------
uint __fastcall Function_2244c84(int a1, int a2)
{
  uint result;

  if ( a1 == 1 )
  {
    result = REG_DISPCNT_SUB & 0xFFFFE0FF | ((a2 | ((REG_DISPCNT_SUB & 0x1F00u) >> 8)) << 8);
    REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((a2 | ((REG_DISPCNT_SUB & 0x1F00u) >> 8)) << 8);
  }
  else
  {
    result = REG_DISPCNT & 0xFFFFE0FF | ((a2 | ((REG_DISPCNT & 0x1F00u) >> 8)) << 8);
    REG_DISPCNT = REG_DISPCNT & 0xFFFFE0FF | ((a2 | ((REG_DISPCNT & 0x1F00u) >> 8)) << 8);
  }
  return result;
}

//----- (02244CD8) --------------------------------------------------------
uint __fastcall Function_2244cd8(int a1, char a2)
{
  uint result;

  if ( a1 == 1 )
  {
    result = REG_DISPCNT_SUB & 0xFFFFE0FF | (((uchar)~a2 & ((REG_DISPCNT_SUB & 0x1F00u) >> 8)) << 8);
    REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | (((uchar)~a2 & ((REG_DISPCNT_SUB & 0x1F00u) >> 8)) << 8);
  }
  else
  {
    result = REG_DISPCNT & 0xFFFFE0FF | (((uchar)~a2 & ((REG_DISPCNT & 0x1F00u) >> 8)) << 8);
    REG_DISPCNT = REG_DISPCNT & 0xFFFFE0FF | (((uchar)~a2 & ((REG_DISPCNT & 0x1F00u) >> 8)) << 8);
  }
  return result;
}

//----- (02244D34) --------------------------------------------------------
int __fastcall Function_2244d34(int a1, int a2, short *a3)
{
  short v3;
  short v4;
  short v5;
  int result;
  short v7;
  short v8;
  short v9;
  short v10;
  short v11;

  if ( a1 == 1 )
  {
    v3 = *a3;
    v4 = a3[1];
    if ( a2 )
    {
      v7 = a3[3];
      SUB_WIN1_X1 = (v3 << 8) & 0xFF00 | a3[2] & 0xFF;
      result = (ushort)((v4 << 8) & 0xFF00) | (uchar)v7;
      SUB_WIN1_Y1 = (v4 << 8) & 0xFF00 | (uchar)v7;
    }
    else
    {
      v5 = a3[3];
      SUB_WIN0_X1 = (v3 << 8) & 0xFF00 | a3[2] & 0xFF;
      result = (ushort)((v4 << 8) & 0xFF00) | (uchar)v5;
      SUB_WIN0_Y1 = (v4 << 8) & 0xFF00 | (uchar)v5;
    }
  }
  else
  {
    v8 = *a3;
    v9 = a3[1];
    if ( a2 )
    {
      v11 = a3[3];
      WIN1_X1 = (v8 << 8) & 0xFF00 | a3[2] & 0xFF;
      result = (ushort)((v9 << 8) & 0xFF00) | (uchar)v11;
      WIN1_Y1 = (v9 << 8) & 0xFF00 | (uchar)v11;
    }
    else
    {
      v10 = a3[3];
      WIN0_X1 = (v8 << 8) & 0xFF00 | a3[2] & 0xFF;
      result = (ushort)((v9 << 8) & 0xFF00) | (uchar)v10;
      WIN0_Y1 = (v9 << 8) & 0xFF00 | (uchar)v10;
    }
  }
  return result;
}

//----- (02244E4C) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x2244E68 for case 0"

//----- (02244E58) --------------------------------------------------------
void Function_2244e58()
{
  JUMPOUT(&loc_2244E68);
}

//----- (02244E5C) --------------------------------------------------------
void Function_2244e5c()
{
  JUMPOUT(&loc_2244EB8);
}

//----- (02244E60) --------------------------------------------------------
void Function_2244e60()
{
  JUMPOUT(&loc_2244F08);
}

//----- (02244E64) --------------------------------------------------------
short *__fastcall Function_2244e64(int a1, int a2, short a3, int a4)
{
  short v4;
  short *result;
  short v6;

  if ( a1 == 1 )
  {
    v4 = SUB_WIN_OUT & 0xFFC0 | a3;
    result = &SUB_WIN_OUT;
    if ( a4 )
      v4 |= 0x20u;
    SUB_WIN_OUT = v4;
  }
  else
  {
    v6 = WIN_OUT & 0xFFC0 | a3;
    result = &WIN_OUT;
    if ( a4 )
      v6 |= 0x20u;
    WIN_OUT = v6;
  }
  return result;
}

//----- (02244FB8) --------------------------------------------------------
uint *__fastcall Function_2244fb8(ushort *a1)
{
  int v1;
  uint *result;

  v1 = (int)a1;
  MI_CpuFill8(a1, 0, 0x40000u);
  result = NNS_FndCreateExpHeapEx(v1, 0x40000, 0);
  dword_2252CF4[436] = (int)result;
  if ( !result )
    OS_Panic();
  return result;
}

//----- (02244FF8) --------------------------------------------------------
int *Function_2244ff8()
{
  int *result;

  Function_20a543c(dword_2252CF4[436]);
  result = &dword_2252CF4[436];
  dword_2252CF4[436] = 0;
  return result;
}

//----- (0224501C) --------------------------------------------------------
int __fastcall Function_224501c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = OS_DisableIrqMask(1);
  v5 = NNS_FndAllocFromExpHeapEx(dword_2252CF4[436], v2, v3);
  if ( !v5 )
    OS_Panic();
  OS_EnableIrqMask(v4);
  return v5;
}

//----- (02245068) --------------------------------------------------------
ushort *__fastcall Function_2245068(int a1, int a2)
{
  int v2;
  ushort *v3;
  uint v4;
  ushort *v5;

  v2 = a1;
  v3 = (ushort *)Function_224501c(a1, a2);
  v4 = v2;
  v5 = v3;
  MI_CpuFill8(v3, 0, v4);
  return v5;
}

//----- (0224508C) --------------------------------------------------------
int __fastcall Function_224508c(int *a1)
{
  int *v1;
  int result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = OS_DisableIrqMask(1);
  v5 = result;
  if ( *v1 )
  {
    Function_20a55d8(dword_2252CF4[436], *v1, v3, v4);
    OS_EnableIrqMask(v5);
    result = 0;
    *v1 = 0;
  }
  return result;
}

//----- (022450D0) --------------------------------------------------------
int __fastcall Function_22450d0(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = OS_DisableIrqMask(1);
  v5 = result;
  if ( v1 )
  {
    Function_20a55d8(dword_2252CF4[436], v1, v3, v4);
    result = OS_EnableIrqMask(v5);
  }
  return result;
}

//----- (0224510C) --------------------------------------------------------
int __fastcall Function_224510c(int a1, int a2, int a3, int a4)
{
  short v5[4];
  int v6;

  v6 = a4;
  dword_2252CF4[438] = (int)Function_2245068(58, 4);
  if ( !TP_GetUserInfo(v5) )
    OS_Panic();
  TP_SetCalibrateParam(v5);
  TP_RequestAutoSamplingStartAsync(0, 4, dword_2252CF4[438], 5u);
  TP_WaitBusy(2);
  if ( TP_CheckError(2u) )
    OS_Panic();
  return Function_22451c0(0);
}

//----- (02245188) --------------------------------------------------------
int Function_2245188()
{
  do
  {
    TP_RequestAutoSamplingStopAsync();
    TP_WaitBusy(4);
  }
  while ( TP_CheckError(4u) );
  return Function_224508c(&dword_2252CF4[438]);
}

//----- (022451C0) --------------------------------------------------------
int Function_22451c0()
{
  int v0;

  v0 = Function_22451d0();
  return Function_22452d4(v0);
}

//----- (022451D0) --------------------------------------------------------
ll Function_22451d0()
{
  int v0;
  int v1;
  int *v2;
  int v3;
  ll result;
  char v5;

  v0 = ((((ushort)REG_KEYINPUT | (ushort)word_27FFFA8) ^ 0x2FFF) & 0x2FFF) << 16;
  v1 = (((ushort)REG_KEYINPUT | (ushort)word_27FFFA8) ^ 0x2FFF) & 0x2FFF;
  v2 = &dword_2252CF4[439];
  *(ushort *)(dword_2252CF4[438] + 50) = (*(ushort *)(dword_2252CF4[438] + 48) ^ ((REG_KEYINPUT | word_27FFFA8) ^ 0x2FFF) & 0x2FFF) & ((REG_KEYINPUT | word_27FFFA8) ^ 0x2FFF) & 0x2FFF;
  v3 = 0;
  *(ushort *)(dword_2252CF4[438] + 54) = *(ushort *)(dword_2252CF4[438] + 48) & (*(ushort *)(dword_2252CF4[438] + 48) ^ HIWORD(v0));
  *(ushort *)(dword_2252CF4[438] + 48) = v1;
  *(ushort *)(dword_2252CF4[438] + 52) = *(ushort *)(dword_2252CF4[438] + 50);
  result = 0x100000000LL;
  do
  {
    if ( (ushort)v1 & (ushort)(1 << v3) )
    {
      v5 = *(uchar *)v2 + 1;
      *(uchar *)v2 = v5;
      if ( v5 == 40 )
      {
        *(ushort *)(dword_2252CF4[438] + 52) |= 1 << v3;
      }
      else if ( v5 == 47 )
      {
        *(ushort *)(dword_2252CF4[438] + 52) |= 1 << v3;
        *(uchar *)v2 = 40;
      }
    }
    else
    {
      *(uchar *)v2 = 0;
    }
    ++v3;
    v2 = (int *)((char *)v2 + 1);
  }
  while ( v3 < 14 );
  return result;
}

//----- (022452D4) --------------------------------------------------------
int *__fastcall Function_22452d4(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  bool v7;
  int v8;
  int v9;
  short v10;
  ushort *v11;
  int v12;
  bool v13;
  int *result;
  int v15;
  short v16;
  short v17;

  v6 = 0;
  v7 = (*(uchar *)(dword_2252CF4[438] + 56) & 1) != 0;
  v8 = Function_20ca2ec();
  v9 = 0;
  v10 = *(ushort *)(dword_2252CF4[438] + 42);
  *(ushort *)(dword_2252CF4[438] + 44) = *(ushort *)(dword_2252CF4[438] + 40);
  *(ushort *)(dword_2252CF4[438] + 46) = v10;
  while ( 1 )
  {
    v11 = (ushort *)(dword_2252CF4[438] + 8 * v8);
    v12 = v11[2];
    v13 = v12 == 1;
    if ( v12 == 1 )
      v13 = v11[3] == 0;
    if ( v13 )
      break;
    ++v9;
    v8 = Function_20bd140(v8 + 4, 5);
    if ( v9 >= 4 )
      goto LABEL_8;
  }
  v6 = 1;
  TP_GetCalibratedPoint(&v16, v11);
  Function_2244c2c(v16, v17, (ushort *)(dword_2252CF4[438] + 40));
LABEL_8:
  result = &dword_2252CF4[437];
  *(uchar *)(dword_2252CF4[438] + 56) = *(uchar *)(dword_2252CF4[438] + 56) & 0xFD | 2 * (v6 & (v6 ^ v7)) & 3;
  *(uchar *)(dword_2252CF4[438] + 56) = *(uchar *)(dword_2252CF4[438] + 56) & 0xF7 | 8 * (v7 & (v6 ^ v7)) & 0xF;
  *(uchar *)(dword_2252CF4[438] + 56) = *(uchar *)(dword_2252CF4[438] + 56) & 0xFE | v6 & 1;
  *(uchar *)(dword_2252CF4[438] + 56) = *(uchar *)(dword_2252CF4[438] + 56) & 0xFB | 4
                                                                                   * ((*(uchar *)(dword_2252CF4[438] + 56) & 2) != 0) & 7;
  if ( v6 )
  {
    v15 = (BYTE1(dword_2252CF4[437]) + 1) & 0xFF;
    ++BYTE1(dword_2252CF4[437]);
    if ( v15 == 40 )
    {
      *(uchar *)(dword_2252CF4[438] + 56) |= 4u;
      JUMPOUT(__CS__, a6);
    }
    if ( v15 != 47 )
      JUMPOUT(__CS__, a6);
    *(uchar *)(dword_2252CF4[438] + 56) |= 4u;
    BYTE1(dword_2252CF4[437]) = 40;
    JUMPOUT(__CS__, a6);
  }
  BYTE1(dword_2252CF4[437]) = 0;
  return result;
}

//----- (02245470) --------------------------------------------------------
BOOL __fastcall Function_2245470(int a1)
{
  BOOL result;

  if ( (word_27FFFA8 & 0x8000) >> 15 )
    result = 0;
  else
    result = a1 == (ushort)(a1 & *(ushort *)(dword_2252CF4[438] + 50));
  return result;
}

//----- (022454B0) --------------------------------------------------------
BOOL __fastcall Function_22454b0(int a1)
{
  BOOL result;

  if ( (word_27FFFA8 & 0x8000) >> 15 )
    result = 0;
  else
    result = a1 == (ushort)(a1 & *(ushort *)(dword_2252CF4[438] + 52));
  return result;
}

//----- (022454F0) --------------------------------------------------------
BOOL __fastcall Function_22454f0(int a1)
{
  BOOL result;

  if ( (word_27FFFA8 & 0x8000) >> 15 )
    result = 0;
  else
    result = a1 == (ushort)(a1 & *(ushort *)(dword_2252CF4[438] + 54));
  return result;
}

//----- (02245530) --------------------------------------------------------
BOOL __fastcall Function_2245530(ushort *a1)
{
  BOOL result;
  uint v2;
  uint v3;

  if ( (word_27FFFA8 & 0x8000) >> 15 )
    return 0;
  if ( !(*(uchar *)(dword_2252CF4[438] + 56) & 1) )
    return 0;
  v2 = *(ushort *)(dword_2252CF4[438] + 40);
  if ( *a1 > v2 )
    return 0;
  if ( a1[2] < v2 )
    return 0;
  v3 = *(ushort *)(dword_2252CF4[438] + 42);
  if ( a1[1] <= v3 )
    result = a1[3] >= v3;
  else
    result = 0;
  return result;
}

//----- (022455B8) --------------------------------------------------------
BOOL __fastcall Function_22455b8(ushort *a1)
{
  BOOL result;
  uint v2;
  uint v3;

  if ( (word_27FFFA8 & 0x8000) >> 15 )
    return 0;
  if ( !(*(uchar *)(dword_2252CF4[438] + 56) & 2) )
    return 0;
  v2 = *(ushort *)(dword_2252CF4[438] + 40);
  if ( *a1 > v2 )
    return 0;
  if ( a1[2] < v2 )
    return 0;
  v3 = *(ushort *)(dword_2252CF4[438] + 42);
  if ( a1[1] <= v3 )
    result = a1[3] >= v3;
  else
    result = 0;
  return result;
}

//----- (02245640) --------------------------------------------------------
BOOL __fastcall Function_2245640(ushort *a1)
{
  BOOL result;
  uint v2;
  uint v3;

  if ( (word_27FFFA8 & 0x8000) >> 15 )
    return 0;
  if ( !(*(uchar *)(dword_2252CF4[438] + 56) & 4) )
    return 0;
  v2 = *(ushort *)(dword_2252CF4[438] + 40);
  if ( *a1 > v2 )
    return 0;
  if ( a1[2] < v2 )
    return 0;
  v3 = *(ushort *)(dword_2252CF4[438] + 42);
  if ( a1[1] <= v3 )
    result = a1[3] >= v3;
  else
    result = 0;
  return result;
}

//----- (022456C8) --------------------------------------------------------
BOOL __fastcall Function_22456c8(ushort *a1)
{
  BOOL result;
  uint v2;
  uint v3;

  if ( (word_27FFFA8 & 0x8000) >> 15 )
    return 0;
  if ( !(*(uchar *)(dword_2252CF4[438] + 56) & 8) )
    return 0;
  v2 = *(ushort *)(dword_2252CF4[438] + 40);
  if ( *a1 > v2 )
    return 0;
  if ( a1[2] < v2 )
    return 0;
  v3 = *(ushort *)(dword_2252CF4[438] + 42);
  if ( a1[1] <= v3 )
    result = a1[3] >= v3;
  else
    result = 0;
  return result;
}

//----- (02245750) --------------------------------------------------------
BOOL __fastcall Function_2245750(short *a1, int a2, int a3, int a4)
{
  short v5;
  short v6;
  short v7;
  short v8;
  int v9;

  v9 = a4;
  if ( (word_27FFFA8 & 0x8000) >> 15 )
    return 0;
  v5 = *a1;
  v6 = a1[1];
  v7 = *a1 + a1[2];
  v8 = a1[1] + a1[3];
  return Function_22455b8((ushort *)&v5);
}

//----- (022457B8) --------------------------------------------------------
int __fastcall Function_22457b8(ushort *a1)
{
  int result;
  short v2;
  short v3;

  if ( (word_27FFFA8 & 0x8000) >> 15 )
    return 0;
  if ( *(uchar *)(dword_2252CF4[438] + 56) & 1 )
  {
    v3 = *(ushort *)(dword_2252CF4[438] + 42);
    *a1 = *(ushort *)(dword_2252CF4[438] + 40);
    a1[1] = v3;
    result = 1;
  }
  else
  {
    v2 = *(ushort *)(dword_2252CF4[438] + 46);
    *a1 = *(ushort *)(dword_2252CF4[438] + 44);
    a1[1] = v2;
    result = 0;
  }
  return result;
}

//----- (02245820) --------------------------------------------------------
int Function_2245820()
{
  int result;

  if ( LOBYTE(dword_2252CF4[437]) )
  {
    result = (word_27FFFA8 & 0x8000) >> 15;
    if ( !result )
    {
      result = PM_SetLCDPower(1);
      if ( result )
      {
        result = (int)&dword_2252CF4[437];
        LOBYTE(dword_2252CF4[437]) = 0;
      }
    }
  }
  else
  {
    result = (word_27FFFA8 & 0x8000) >> 15;
    if ( result )
    {
      result = PM_SetLCDPower(0);
      if ( result )
      {
        result = (int)&dword_2252CF4[437];
        LOBYTE(dword_2252CF4[437]) = 1;
      }
    }
  }
  return result;
}

//----- (0224589C) --------------------------------------------------------
uint Function_224589c()
{
  dword_2252CF4[444] = REG_IE;
  OS_SetIrqMask(262168);
  OS_EnableIrqMask(1);
  dword_2252CF4[443] = OS_GetIrqFunction(1u);
  OS_SetIrqFunction(1u, (int)Function_224594c);
  OS_ResetRequestIrqMask(1);
  LOWORD(REG_IME) = 1;
  return OS_EnableInterrupts();
}

//----- (02245910) --------------------------------------------------------
uint Function_2245910()
{
  LOWORD(REG_IME) = 0;
  OS_SetIrqMask(dword_2252CF4[444]);
  return OS_SetIrqFunction(1u, dword_2252CF4[443]);
}

//----- (0224594C) --------------------------------------------------------
int *Function_224594c()
{
  int *result;

  Function_2246254(1);
  result = dword_27E3000;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (02245974) --------------------------------------------------------
uint *Function_2245974()
{
  uint *result;

  result = Function_2245068(16, 4);
  *result = 0;
  result[1] = result + 2;
  result[2] = result;
  result[3] = 0;
  return result;
}

//----- (022459A0) --------------------------------------------------------
int __fastcall Function_22459a0(int a1, int a2, int a3, int a4)
{
  int varg_r0;
  int varg_r1;
  int varg_r2;
  int varg_r3;

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  return Function_224508c(&varg_r0);
}

//----- (022459BC) --------------------------------------------------------
int __fastcall Function_22459bc(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = OS_DisableIrqMask(1);
  *(uint *)(*v1 + 4) = v1[1];
  *(uint *)v1[1] = *v1;
  v1[1] = 0;
  *v1 = 0;
  return OS_EnableIrqMask(v2);
}

//----- (022459F4) --------------------------------------------------------
int __fastcall Function_22459f4(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = OS_DisableIrqMask(1);
  *(uint *)(*(uint *)v2 + 4) = v3;
  *v3 = *(uint *)v2;
  v3[1] = v2;
  *(uint *)v2 = v3;
  return OS_EnableIrqMask(v4);
}

//----- (02245A24) --------------------------------------------------------
int __fastcall Function_2245a24(int a1, uint *a2)
{
  return Function_22459f4(a1 + 8, a2);
}

//----- (02245A34) --------------------------------------------------------
int __fastcall Function_2245a34(int a1, uint *a2)
{
  return Function_22459f4(*(uint *)(a1 + 4), a2);
}

//----- (02245A44) --------------------------------------------------------
int Function_2245a44()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int result;

  dword_2252CF4[445] = (int)Function_2245068(2060, 4);
  MIi_CpuClearFast(512, (uint *)dword_2252CF4[445], 0x800u);
  v0 = 0;
  v1 = 0;
  do
  {
    v2 = Function_2244008(64, dword_2252CF4[445] + v1, 8);
    v1 += 1024;
    v3 = dword_2252CF4[445] + 4 * v0++;
    *(uint *)(v3 + 2048) = v2;
  }
  while ( v0 < 2 );
  result = Function_2246304(1, Function_2245ae0, 0, 200);
  *(uint *)(dword_2252CF4[445] + 2056) = result;
  return result;
}

//----- (02245AE0) --------------------------------------------------------
int *Function_2245ae0()
{
  DC_FlushRange(dword_2252CF4[445], 2048);
  GX_LoadOAM((int *)dword_2252CF4[445], 0, 0x400u);
  return GXS_LoadOAM((int *)(dword_2252CF4[445] + 1024), 0, 0x400u);
}

//----- (02245B28) --------------------------------------------------------
int Function_2245b28()
{
  Function_22463cc(1, *(uint *)(dword_2252CF4[445] + 2056));
  return Function_224508c(&dword_2252CF4[445]);
}

//----- (02245B54) --------------------------------------------------------
int __fastcall Function_2245b54(int a1)
{
  return Function_22440bc(*(ushort **)(dword_2252CF4[445] + 4 * a1 + 2048));
}

//----- (02245B74) --------------------------------------------------------
int __fastcall Function_2245b74(uint *a1)
{
  int v1;

  *a1 = *a1 & 0xC1FFFCFF | 0x200;
  v1 = 0;
  if ( (uint)a1 >= dword_2252CF4[445] + 1024 )
    v1 = 1;
  return Function_2244064(*(ushort **)(dword_2252CF4[445] + 4 * v1 + 2048), (int)a1);
}

//----- (02245BC0) --------------------------------------------------------
int __fastcall Function_2245bc0(int a1, int a2)
{
  return dword_2252CF4[445] + (a1 << 10) + 8 * a2;
}

//----- (02245BD8) --------------------------------------------------------
int Function_2245bd8()
{
  int v0;
  int v1;
  int result;

  v0 = 0;
  v1 = 0;
  dword_2252CF4[446] = (int)Function_2245068(832, 4);
  do
  {
    *(uint *)(dword_2252CF4[446] + v1 + 412) = Function_2244008(32, dword_2252CF4[446] + v1, 12);
    *(uint *)(dword_2252CF4[446] + v1 + 408) = Function_2245974();
    *(ushort *)(dword_2252CF4[446] + v1 + 392) = 768;
    *(ushort *)(dword_2252CF4[446] + v1 + 404) = 1024;
    Function_2245a34(*(uint *)(dword_2252CF4[446] + v1 + 408), (uint *)(dword_2252CF4[446] + v1 + 384));
    result = Function_2245a24(*(uint *)(dword_2252CF4[446] + v1 + 408), (uint *)(dword_2252CF4[446] + v1 + 396));
    ++v0;
    v1 += 416;
  }
  while ( v0 < 2 );
  return result;
}

//----- (02245C98) --------------------------------------------------------
int __fastcall Function_2245c98(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
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
  int v16;
  int v17;
  int v18;
  ushort *v19;
  int v20;
  int v21;

  v4 = a1;
  v5 = 416 * a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = Function_22440bc(*(ushort **)(dword_2252CF4[446] + 416 * a1 + 412));
  v10 = (v6 + 3) & 0xFFFFFFFC;
  v11 = v9;
  v12 = v10 >> 2;
  *(ushort *)(v9 + 10) = v10 >> 2;
  v13 = OS_DisableIrqMask(1);
  if ( v7 )
  {
    v14 = dword_2252CF4[446] + 416 * v4;
    v15 = v14 + 384;
    if ( v14 + 384 != v14 + 396 )
    {
      while ( 1 )
      {
        v16 = *(uint *)(v15 + 4);
        v17 = *(ushort *)(v15 + 8) + *(ushort *)(v15 + 10);
        if ( v17 + v12 <= *(ushort *)(v16 + 8) )
          break;
        v15 = *(uint *)(v15 + 4);
        if ( v16 == dword_2252CF4[446] + v5 + 396 )
          goto LABEL_6;
      }
      *(ushort *)(v11 + 8) = v17;
      Function_22459f4(v16, (uint *)v11);
    }
LABEL_6:
    if ( v15 == dword_2252CF4[446] + v5 + 396 )
      OS_Panic();
  }
  else
  {
    v18 = dword_2252CF4[446] + 416 * v4;
    v19 = (ushort *)(v18 + 396);
    if ( v18 + 396 != v18 + 384 )
    {
      while ( 1 )
      {
        v20 = *(uint *)v19;
        v21 = v19[4] - v12;
        if ( v21 >= *(ushort *)(*(uint *)v19 + 8) + *(ushort *)(*(uint *)v19 + 10) )
          break;
        v19 = *(ushort **)v19;
        if ( v20 == dword_2252CF4[446] + v5 + 384 )
          goto LABEL_12;
      }
      *(ushort *)(v11 + 8) = v21;
      Function_22459f4((int)v19, (uint *)v11);
    }
LABEL_12:
    if ( v19 == (ushort *)(dword_2252CF4[446] + v5 + 384) )
      OS_Panic();
  }
  *v8 = *(ushort *)(v11 + 8);
  OS_EnableIrqMask(v13);
  return v11;
}

//----- (02245E10) --------------------------------------------------------
int __fastcall Function_2245e10(uint *a1)
{
  uint v1;
  int v2;

  v1 = (uint)a1;
  v2 = 0;
  Function_22459bc(a1);
  if ( v1 >= dword_2252CF4[446] + 416 )
    v2 = 1;
  return Function_2244064(*(ushort **)(dword_2252CF4[446] + 416 * v2 + 412), v1);
}

//----- (02245E50) --------------------------------------------------------
int __fastcall Function_2245e50(int a1, int a2)
{
  int i;

  for ( i = 0; i < a2; ++i )
  {
    if ( !*(uchar *)(a1 + i) )
      break;
  }
  return i;
}

//----- (02245E7C) --------------------------------------------------------
int Function_2245e7c()
{
  char *v0;

  dword_2252CF4[447] = Function_20beea0();
  dword_2252CF4[448] = Function_20beeb4();
  dword_2252CF4[449] = Function_20beec8();
  dword_2252CF4[450] = Function_20beeec();
  dword_2252CF4[451] = Function_20bef10();
  dword_2252CF4[452] = Function_20bef24();
  dword_2252CF4[453] = Function_20bef38();
  dword_2252CF4[454] = Function_20bef74();
  dword_2252CF4[455] = Function_20bef88();
  dword_2252CF4[456] = Function_20bef9c();
  dword_2252CF4[457] = Function_20befc4();
  dword_2252CF4[458] = Function_20bef4c();
  dword_2252CF4[459] = Function_20bef60();
  v0 = GX_SetBankForARM7(dword_2252CF4[458]);
  return Function_2246038(v0);
}

//----- (02245F30) --------------------------------------------------------
uint Function_2245f30()
{
  int v0;
  int v1;

  Function_20beea0();
  Function_20beeb4();
  Function_20bef74();
  v0 = Function_20bef88();
  Function_2246038(v0);
  GX_SetBankForBG(dword_2252CF4[447]);
  GX_SetBankForOBJ(dword_2252CF4[448]);
  GX_SetBankForBGExtPltt(dword_2252CF4[449]);
  GX_SetBankForOBJExtPltt(dword_2252CF4[450]);
  GX_SetBankForTex(dword_2252CF4[451]);
  GX_SetBankForTexPltt(dword_2252CF4[452]);
  GX_SetBankForClearImage(dword_2252CF4[453]);
  GX_SetBankForSubBG(dword_2252CF4[454]);
  GX_SetBankForSubOBJ(dword_2252CF4[455]);
  GX_SetBankForSubBGExtPltt(dword_2252CF4[456]);
  GX_SetBankForSubOBJExtPltt(dword_2252CF4[457]);
  GX_SetBankForLCDC((char *)dword_2252CF4[459]);
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  REG_BG0HOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG0HOFS_SUB = 0;
  REG_BG1HOFS_SUB = 0;
  REG_BG2HOFS_SUB = 0;
  REG_BG3HOFS_SUB = 0;
  v1 = OS_DisableInterrupts();
  PM_SetLCDPower(1);
  return OS_RestoreInterrupts(v1);
}

//----- (02246038) --------------------------------------------------------
int Function_2246038()
{
  GX_SetBankForLCDC((char *)0x1F3);
  MIi_CpuClearFast(0, (uint *)0x6800000, 0x40000u);
  MIi_CpuClearFast(0, (uint *)0x6880000, 0x24000u);
  Function_20bef60();
  MIi_CpuClearFast(512, (uint *)0x7000000, 0x400u);
  MIi_CpuClearFast(0, (uint *)0x5000000, 0x400u);
  MIi_CpuClearFast(512, (uint *)0x7000400, 0x400u);
  return MIi_CpuClearFast(0, (uint *)0x5000400, 0x400u);
}

//----- (022460BC) --------------------------------------------------------
int __fastcall Function_22460bc(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  result = Function_20cb750((int)&v8, a2, a3, a4);
  if ( !result )
  {
    result = v8;
    if ( v8 != 15 )
      result = Function_20cb6e0(0xFu, v5, v6, v7);
  }
  return result;
}

//----- (022460E8) --------------------------------------------------------
int __fastcall Function_22460e8(int a1, int a2, int a3, int a4)
{
  return Function_20cb6e0(1u, a2, a3, a4);
}

//----- (022460F8) --------------------------------------------------------
int Function_22460f8()
{
  int v0;
  char *v1;
  int v2;
  int v3;
  int result;

  v0 = 0;
  v1 = &byte_224973C;
  v2 = 0;
  dword_2252CF4[460] = (int)Function_2245068(128, 4);
  do
  {
    *(uint *)(dword_2252CF4[460] + (v0 << 6) + 52) = (uchar)*v1;
    *(uint *)(dword_2252CF4[460] + (v0 << 6) + 60) = Function_2245068(20 * (uchar)*v1, 4);
    *(uint *)(dword_2252CF4[460] + (v0 << 6)) = Function_2244008(
                                                    (uchar)*v1,
                                                    *(uint *)(dword_2252CF4[460] + (v0 << 6) + 60),
                                                    20);
    v3 = (uchar)*v1++;
    *(uint *)(dword_2252CF4[460] + (v0 << 6) + 4) = Function_2243fd4(v3);
    *(uint *)(dword_2252CF4[460] + (v0 << 6) + 8) = Function_2245974();
    *(uchar *)(dword_2252CF4[460] + (v0 << 6) + 28) = 0;
    *(uchar *)(dword_2252CF4[460] + (v0 << 6) + 48) = -1;
    Function_2245a34(*(uint *)(dword_2252CF4[460] + (v0 << 6) + 8), (uint *)(dword_2252CF4[460] + v2 + 12));
    Function_2245a24(*(uint *)(dword_2252CF4[460] + (v0 << 6) + 8), (uint *)(dword_2252CF4[460] + v2 + 32));
    v2 += 64;
    result = dword_2252CF4[460] + (v0++ << 6);
    *(uchar *)(result + 56) = 1;
  }
  while ( v0 < 2 );
  return result;
}

//----- (0224620C) --------------------------------------------------------
int __fastcall Function_224620c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = 0;
  do
  {
    Function_22459a0(*(uint *)(dword_2252CF4[460] + (v4 << 6) + 8), a2, a3, a4);
    Function_2244048(*(uint *)(dword_2252CF4[460] + (v4++ << 6)), v5, v6, v7);
  }
  while ( v4 < 2 );
  return Function_224508c(&dword_2252CF4[460]);
}

//----- (02246254) --------------------------------------------------------
int __fastcall Function_2246254(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  result = dword_2252CF4[460];
  v3 = dword_2252CF4[460] + (v1 << 6);
  if ( *(uchar *)(v3 + 56) )
  {
    v4 = *(uint *)(v3 + 16);
    if ( v4 != v3 + 32 )
    {
      do
      {
        (*(void (__fastcall **)(int, uint))(v4 + 8))(v4, *(uint *)(v4 + 12));
        result = dword_2252CF4[460];
        v4 = *(uint *)(v4 + 4);
      }
      while ( v4 != dword_2252CF4[460] + (v1 << 6) + 32 );
    }
    v5 = v1 << 6;
    v6 = 0;
    if ( *(uint *)(result + (v1 << 6) + 52) > 0 )
    {
      do
      {
        result = Function_22440bc(*(ushort **)(v5 + result + 4));
        if ( !result )
          break;
        Function_22463d8(v1, result);
        result = dword_2252CF4[460];
        ++v6;
      }
      while ( v6 < *(uint *)(v5 + dword_2252CF4[460] + 52) );
    }
  }
  return result;
}

//----- (02246304) --------------------------------------------------------
int Function_2246304()
{
  return Function_2246318();
}

//----- (02246318) --------------------------------------------------------
uint *__fastcall Function_2246318(int a1, int a2, int a3, uint a4, char a5)
{
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  uint *v10;
  int v11;
  int i;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = Function_22440bc(*(ushort **)(dword_2252CF4[460] + (a1 << 6)));
  v10 = (uint *)v9;
  *(uint *)(v9 + 8) = v6;
  *(uint *)(v9 + 12) = v7;
  *(uchar *)(v9 + 16) = v8;
  *(uchar *)(v9 + 17) = a5;
  v11 = OS_DisableIrqMask(1);
  for ( i = *(uint *)(dword_2252CF4[460] + (v5 << 6) + 16); v8 >= *(uchar *)(i + 16); i = *(uint *)(i + 4) )
    ;
  Function_22459f4(i, v10);
  OS_EnableIrqMask(v11);
  return v10;
}

//----- (022463A4) --------------------------------------------------------
int __fastcall Function_22463a4(int result, int a2)
{
  *(uint *)(result + 8) = a2;
  return result;
}

//----- (022463AC) --------------------------------------------------------
int __fastcall Function_22463ac(int a1, int a2)
{
  return Function_2244064(*(ushort **)(dword_2252CF4[460] + (a1 << 6) + 4), a2);
}

//----- (022463CC) --------------------------------------------------------
int __fastcall Function_22463cc(int a1, int a2)
{
  return Function_22463d8(a1, a2);
}

//----- (022463D8) --------------------------------------------------------
int __fastcall Function_22463d8(int a1, int a2)
{
  uint *v2;
  int v3;

  v2 = (uint *)a2;
  v3 = a1;
  if ( *(uchar *)(a2 + 17) )
    Function_224508c((int *)(a2 + 12));
  Function_22459bc(v2);
  return Function_2244064(*(ushort **)(dword_2252CF4[460] + (v3 << 6)), (int)v2);
}

//----- (0224641C) --------------------------------------------------------
int __fastcall Function_224641c(int a1, char a2)
{
  int result;

  result = dword_2252CF4[460] + (a1 << 6);
  *(uchar *)(result + 56) = a2;
  return result;
}

