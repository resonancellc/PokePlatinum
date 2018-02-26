//----- (0221FC20) --------------------------------------------------------
uchar *__fastcall WazaEffectWait(int a1)
{
  uchar *result;
  char v2;

  if ( *(uchar *)(a1 + 141) )
  {
    v2 = *(uchar *)(a1 + 141);
    result = (uchar *)(a1 + 141);
    *result = v2 - 1;
  }
  else
  {
    result = (uchar *)(a1 + 188);
    *(uint *)result = CallWazaeffectFunction;
  }
  return result;
}

//----- (0221FC44) --------------------------------------------------------
int __fastcall CallWazaeffectFunction(int a1)
{
  int v1;
  void (__fastcall *v2)(int);
  int result;

  v1 = a1;
  do
  {
    v2 = (void (__fastcall *)(int))LoadWazaeffectFunctionAdr(**(uint **)(v1 + 24));
    v2(v1);
    result = *(uchar *)(v1 + 141);
    if ( *(uchar *)(v1 + 141) )
      break;
    result = *(uint *)(v1 + 16);
  }
  while ( result == 1 );
  return result;
}

//----- (0221FC68) --------------------------------------------------------
uint *__fastcall Function_221fc68(int a1, int a2, int a3, int a4, uint a5)
{
  int v5;
  int v6;

  v5 = a3;
  v6 = a4;
  if ( a1 == 1 )
  {
    ++*(ushort *)(a2 + 142);
  }
  else if ( a1 == 2 )
  {
    ++*(ushort *)(a2 + 144);
  }
  else
  {
    ErrorHandler();
  }
  return AddTaskToTaskList1(v5, v6, a5);
}

//----- (0221FCA4) --------------------------------------------------------
int __fastcall Function_221fca4(int a1, int a2, int *a3)
{
  int *v3;

  v3 = a3;
  if ( a1 == 1 )
  {
    --*(ushort *)(a2 + 142);
  }
  else if ( a1 == 2 )
  {
    --*(ushort *)(a2 + 144);
  }
  else
  {
    ErrorHandler();
  }
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (0221FCDC) --------------------------------------------------------
uint *__fastcall Function_12_221fcdc(uint a1)
{
  uint v1;
  int *v2;
  uint *v3;
  uint *result;
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
  int *v17;
  int v18;
  uint *v19;
  int v20;
  uint *v21;
  uint *v22;

  v1 = a1;
  v2 = (int *)malloc(a1, 444);
  v3 = (uint *)v2;
  if ( v2 )
  {
    Call_FillMemWithValue(v2, 0, 0x1BCu);
    *v3 = v1;
    v3[2] = 0;
    v3[48] = malloc(*v3, 284);
    v3[105] = (uint)LoadFromNARC_8(7, v1, v5, v6);
    v3[106] = (uint)LoadFromNARC_8(27, v1, v7, v8);
    v3[107] = (uint)LoadFromNARC_8(21, v1, v9, v10);
    v3[108] = (uint)LoadFromNARC_8(22, v1, v11, v12);
    v3[109] = (uint)LoadFromNARC_8(23, v1, v13, v14);
    v3[110] = (uint)LoadFromNARC_8(24, v1, v15, v16);
    v17 = (int *)v3[48];
    if ( v17 )
    {
      Call_FillMemWithValue(v17, 0, 0x11Cu);
      v18 = 0;
      v3[3] = 0;
      v3[6] = 0;
      v19 = v3;
      v20 = 0;
      do
      {
        v21 = v19 + 51;
        ++v18;
        ++v19;
        *v21 = 0;
      }
      while ( v18 < 4 );
      v22 = v3;
      do
      {
        ++v20;
        v22[89] = 0;
        ++v22;
      }
      while ( v20 < 5 );
      v3[94] = 0;
      v3[3] = 1;
      result = v3;
    }
    else
    {
      ErrorHandler();
      result = 0;
    }
  }
  else
  {
    if ( !v2 )
      ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0221FDC0) --------------------------------------------------------
uint __fastcall Function_221fdc0(uint result, int a2)
{
  uint v2;
  int v3;

  v2 = result;
  v3 = a2;
  if ( !result )
    result = ErrorHandler();
  *(uint *)(v2 + 8) = v3;
  return result;
}

//----- (0221FDD4) --------------------------------------------------------
int __fastcall Function_221fdd4(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 8);
}

//----- (0221FDE4) --------------------------------------------------------
int __fastcall Function_221fde4(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)v1;
}

//----- (0221FDF4) --------------------------------------------------------
int __fastcall Function_12_221fdf4(int a1)
{
  int v1;
  int v3;
  int v4;

  v1 = a1;
  if ( !Function_22201b4() )
    return 0;
  v3 = 0;
  v4 = v1;
  do
  {
    Call_FS_CloseFile(*(int **)(v4 + 420));
    ++v3;
    v4 += 4;
  }
  while ( v3 < 6 );
  free(*(uint *)(v1 + 192));
  free(v1);
  return 1;
}

//----- (0221FE30) --------------------------------------------------------
int __fastcall Function_12_221fe30(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  uchar *v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  uchar *v14;
  int v15;
  int v16;
  uint *v17;
  int v18;
  uint *v19;
  uint *v20;
  int v21;
  uint *v22;
  int v23;
  uint *v24;
  int v25;
  int *v26;
  char *v27;
  int v28;
  int v29;
  int v30;
  uint v31;
  int v32;
  int v33;
  char v34;
  char v35;
  char v36;
  char v37;
  char v38;
  int v39;
  int v40;
  int v41;
  uint *v42;
  int v43;
  int v44;
  int v45;
  uint *v46;
  uint v47[1];

  v4 = a1;
  v5 = a2;
  v45 = a3;
  v46 = a4;
  Function_2220474();
  if ( !Function_22201b4(v4) )
    return 0;
  v7 = 0;
  v8 = 0;
  do
  {
    *(uchar *)(v4 + v7 + 108) = 1;
    v9 = (uchar *)(v4 + v7++ + 124);
    *v9 = 0;
  }
  while ( v7 < 16 );
  v10 = v4;
  v11 = 0;
  do
  {
    v12 = (uint *)(v10 + 148);
    ++v8;
    v10 += 4;
    *v12 = 0;
  }
  while ( v8 < 10 );
  v13 = v4;
  do
  {
    *(uint *)(v13 + 48) = 0;
    *(uint *)(v13 + 40) = 0;
    *(uchar *)(v13 + 44) = 0;
    v14 = (uchar *)(v13 + 45);
    ++v11;
    v13 += 12;
    *v14 = 0;
  }
  while ( v11 < 3 );
  **(uchar **)(v4 + 192) = *(uchar *)v5;
  *(uchar *)(*(uint *)(v4 + 192) + 1) = *(uchar *)(v5 + 1);
  *(ushort *)(*(uint *)(v4 + 192) + 2) = *(ushort *)(v5 + 2);
  *(uint *)(*(uint *)(v4 + 192) + 4) = *(uint *)(v5 + 4);
  *(ushort *)(*(uint *)(v4 + 192) + 8) = *(ushort *)(v5 + 8);
  *(ushort *)(*(uint *)(v4 + 192) + 10) = *(ushort *)(v5 + 12);
  *(uint *)(*(uint *)(v4 + 192) + 12) = *(uint *)(v5 + 16);
  *(ushort *)(*(uint *)(v4 + 192) + 16) = *(ushort *)(v5 + 10);
  *(ushort *)(*(uint *)(v4 + 192) + 18) = *(uint *)(v5 + 84);
  *(ushort *)(*(uint *)(v4 + 192) + 20) = *(ushort *)(v5 + 20);
  *(ushort *)(*(uint *)(v4 + 192) + 22) = *(ushort *)(v5 + 22);
  *(uint *)(*(uint *)(v4 + 192) + 280) = (uint)*(ushort *)(v5 + 14) << 30 >> 31;
  *(uint *)(*(uint *)(v4 + 192) + 172) = *v46;
  if ( !*v46 )
    ErrorHandler();
  v15 = 0;
  *(uint *)(v4 + 196) = v46[1];
  v16 = 0;
  *(uint *)(v4 + 200) = v46[2];
  *(uint *)(*(uint *)(v4 + 192) + 212) = v46[12];
  v17 = v46;
  v18 = 0;
  v19 = v46;
  do
  {
    *(uint *)(*(uint *)(v4 + 192) + v18 + 176) = v17[3];
    *(uchar *)(*(uint *)(v4 + 192) + v15 + 192) = *((uchar *)v46 + v15 + 28);
    *(uint *)(*(uint *)(v4 + 192) + v18 + 196) = v17[8];
    *(ushort *)(*(uint *)(v4 + 192) + v16 + 216) = *((ushort *)v19 + 26);
    *(uchar *)(*(uint *)(v4 + 192) + v15 + 224) = *((uchar *)v46 + v15 + 60);
    *(uchar *)(*(uint *)(v4 + 192) + v15 + 228) = *((uchar *)v46 + v15 + 64);
    *(uchar *)(*(uint *)(v4 + 192) + v15 + 232) = *((uchar *)v46 + v15 + 68);
    *(uint *)(*(uint *)(v4 + 192) + v18 + 236) = v17[18];
    *(uint *)(*(uint *)(v4 + 192) + v18 + 252) = v17[22];
    ++v15;
    ++v17;
    v18 += 4;
    v16 += 2;
    v19 = (uint *)((char *)v19 + 2);
  }
  while ( v15 < 4 );
  v20 = (uint *)(v4 + 388);
  v21 = v46[28];
  *v20 = v46[27];
  v20[1] = v21;
  v22 = (uint *)(v4 + 396);
  v23 = v46[30];
  *v22 = v46[29];
  v22[1] = v23;
  v24 = (uint *)(v4 + 404);
  v25 = v46[32];
  *v24 = v46[31];
  v24[1] = v25;
  *(uint *)(*(uint *)(v4 + 192) + 268) = v46[33];
  *(uint *)(*(uint *)(v4 + 192) + 276) = v46[35];
  *(uint *)(*(uint *)(v4 + 192) + 272) = v46[34];
  if ( v45 == 290 )
  {
    v26 = dword_2238680;
    v27 = (char *)v47;
    v28 = 6;
    do
    {
      v29 = *v26;
      v30 = v26[1];
      v26 += 2;
      *(uint *)v27 = v29;
      *((uint *)v27 + 1) = v30;
      v27 += 8;
      --v28;
    }
    while ( v28 );
    *(uint *)v27 = *v26;
    v31 = *(ushort *)(*(uint *)(v4 + 192) + 18);
    if ( v31 < 0x18 )
      v45 = v47[v31];
    else
      v45 = 161;
  }
  if ( !v45 || v45 > 467 )
    v45 = 1;
  v32 = v46[26];
  *(uint *)(v4 + 4) = v32;
  v33 = LoadFromNARC_2(v32, v45, *(uint *)v4);
  *(uint *)(v4 + 20) = v33;
  if ( v33 )
  {
    *(uint *)(v4 + 24) = v33;
    *(uchar *)(v4 + 416) = Function_201a008(*(uint *)(v4 + 196), 0, v34);
    *(uchar *)(v4 + 417) = Function_201a008(*(uint *)(v4 + 196), 1u, v35);
    *(uchar *)(v4 + 418) = Function_201a008(*(uint *)(v4 + 196), 2u, v36);
    v38 = Function_201a008(*(uint *)(v4 + 196), 3u, v37);
    v39 = 0;
    *(uchar *)(v4 + 419) = v38;
    v40 = v4;
    v41 = 0;
    do
    {
      v42 = (uint *)(v40 + 220);
      ++v39;
      v40 += 4;
      *v42 = 0;
    }
    while ( v39 < 10 );
    v43 = v4;
    do
    {
      *(uint *)(v43 + 316) = 0;
      *(uint *)(v43 + 336) = 0;
      ++v41;
      v43 += 4;
    }
    while ( v41 < 5 );
    *(uint *)(v4 + 384) = 0;
    *(uint *)(v4 + 188) = CallWazaeffectFunction;
    *(uchar *)(v4 + 141) = 0;
    if ( Function_221fdd4(v4) == 1 )
      v44 = 7;
    else
      v44 = 255;
    *(uint *)(v4 + 412) = v44;
    result = 1;
    *(uint *)(v4 + 16) = 1;
  }
  else
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0222016C) --------------------------------------------------------
int __fastcall Function_12_222016c(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_22201b4(a1) )
    return 0;
  (*(void (__fastcall **)(int))(v1 + 188))(v1);
  return 1;
}

//----- (02220188) --------------------------------------------------------
BOOL __fastcall Function_12_2220188(int a1)
{
  return *(uint *)(a1 + 16) == 1;
}

//----- (02220198) --------------------------------------------------------
int __fastcall Function_12_2220198(int a1)
{
  int v1;
  int result;

  v1 = *(uint *)(a1 + 20);
  if ( v1 )
  {
    free(v1);
    result = 1;
  }
  else
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (022201B4) --------------------------------------------------------
BOOL __fastcall Function_22201b4(int a1)
{
  BOOL result;

  if ( a1 )
    result = *(uint *)(a1 + 12) == 1;
  else
    result = 0;
  return result;
}

//----- (022201CC) --------------------------------------------------------
uint *__fastcall Function_22201cc(int a1, int a2, int a3, uint a4)
{
  return Function_221fc68(1, a1, a2, a3, a4);
}

//----- (022201E8) --------------------------------------------------------
uint *__fastcall Function_22201e8(int a1, int a2, int a3)
{
  return Function_221fc68(1, a1, a2, a3, 0x44Cu);
}

//----- (02220204) --------------------------------------------------------
uint *__fastcall Function_2220204(int a1, int a2, int a3, uint a4)
{
  return Function_221fc68(2, a1, a2, a3, a4);
}

//----- (02220220) --------------------------------------------------------
int __fastcall Function_2220220(int a1, int *a2)
{
  return Function_221fca4(1, a1, a2);
}

//----- (02220230) --------------------------------------------------------
int __fastcall Function_2220230(int a1, int *a2)
{
  return Function_221fca4(2, a1, a2);
}

//----- (02220240) --------------------------------------------------------
int __fastcall Function_2220240(int a1)
{
  return *(ushort *)(*(uint *)(a1 + 192) + 20);
}

//----- (02220248) --------------------------------------------------------
int __fastcall Function_2220248(int a1)
{
  return *(ushort *)(*(uint *)(a1 + 192) + 22);
}

//----- (02220250) --------------------------------------------------------
int __fastcall Function_2220250(int a1)
{
  return *(uint *)(*(uint *)(a1 + 192) + 4 * *(uint *)(*(uint *)(a1 + 192) + 24) + 28);
}

//----- (02220260) --------------------------------------------------------
int __fastcall Function_2220260(int a1, int a2)
{
  return *(uint *)(*(uint *)(a1 + 192) + 4 * a2 + 28);
}

//----- (0222026C) --------------------------------------------------------
int __fastcall Function_222026c(int a1, int a2)
{
  return *(uint *)(*(uint *)(a1 + 192) + 4 * a2 + 92);
}

//----- (02220278) --------------------------------------------------------
int __fastcall Function_2220278(int a1)
{
  return *(uint *)(a1 + 196);
}

//----- (02220280) --------------------------------------------------------
int __fastcall Function_2220280(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 10 )
    ErrorHandler();
  return *(uint *)(v3 + 4 * v2 + 148);
}

//----- (02220298) --------------------------------------------------------
int __fastcall Function_2220298(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 10 )
    ErrorHandler();
  if ( !v3 )
    ErrorHandler();
  v4 = v3 + 220;
  v5 = 4 * v2;
  if ( !*(uint *)(v4 + v5) )
    ErrorHandler();
  return *(uint *)(v4 + v5);
}

//----- (022202C0) --------------------------------------------------------
int __fastcall Function_22202c0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 5 )
    ErrorHandler();
  if ( !v3 )
    ErrorHandler();
  v4 = v3 + 316;
  v5 = 4 * v2;
  if ( !*(uint *)(v4 + v5) )
    ErrorHandler();
  return *(uint *)(v4 + v5);
}

//----- (022202EC) --------------------------------------------------------
int __fastcall Function_22202ec(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 312);
}

//----- (02220300) --------------------------------------------------------
int __fastcall Function_2220300(int a1)
{
  return *(uint *)(a1 + 204);
}

//----- (02220308) --------------------------------------------------------
int __fastcall Function_2220308(int a1)
{
  return *(uint *)(*(uint *)(a1 + 192) + 172);
}

//----- (02220314) --------------------------------------------------------
int *__fastcall Function_2220314(uint *a1)
{
  uint *v1;
  int *v2;
  int *v3;
  int *result;

  v1 = a1;
  v2 = (int *)malloc(*a1, 60);
  v3 = v2;
  if ( v2 )
  {
    Call_FillMemWithValue(v2, 0, 0x3Cu);
    ++*((ushort *)v1 + 72);
    result = v3;
  }
  else
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (02220344) --------------------------------------------------------
uint *__fastcall Function_2220344(int a1, int a2)
{
  *(uint *)(a2 + 56) = a1;
  return AddTaskToTaskList1((int)Function_222035c, a2, 0x44Cu);
}

//----- (0222035C) --------------------------------------------------------
int __fastcall Function_222035c(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  int result;

  v2 = (int)a2;
  v3 = a1;
  result = ((int (__fastcall *)(uchar *))*(&off_223862C + *a2))(a2);
  if ( !result )
  {
    if ( *(ushort *)(*(uint *)(v2 + 56) + 144) )
      --*(ushort *)(*(uint *)(v2 + 56) + 144);
    free(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0222039C) --------------------------------------------------------
int Function_222039c()
{
  return 0;
}

//----- (022203A0) --------------------------------------------------------
int __fastcall Function_22203a0(int a1)
{
  int v1;
  uint v2;
  int v4;
  int v5;
  int v6;
  int v7;
  bool v8;
  uchar v9;

  v1 = a1;
  v2 = *(uchar *)(a1 + 4);
  *(uchar *)(a1 + 4) = v2 + 1;
  if ( v2 < *(uchar *)(a1 + 3) )
    return 1;
  *(uchar *)(a1 + 4) = 0;
  v4 = 1;
  *(uint *)(a1 + 20) += *(uint *)(a1 + 16);
  v5 = *(uint *)(a1 + 16);
  if ( v5 )
  {
    v6 = *(uint *)(a1 + 12);
    v7 = *(uint *)(a1 + 8);
    v9 = __OFSUB__(v7, v6);
    v8 = v7 - v6 < 0;
    v5 = *(uint *)(a1 + 20);
    if ( v8 ^ v9 )
    {
      if ( v5 >= v6 )
        v4 = 0;
    }
    else if ( v5 <= v6 )
    {
      v4 = 0;
    }
  }
  else
  {
    v4 = 0;
  }
  Function_2005818(*(uint *)(a1 + 20), v5);
  if ( !Function_20057d4(*(ushort *)(v1 + 26)) )
    v4 = 0;
  return v4;
}

//----- (022203FC) --------------------------------------------------------
int __fastcall Function_22203fc(int a1)
{
  return Function_22203a0(a1);
}

//----- (02220404) --------------------------------------------------------
int __fastcall Function_2220404(int a1)
{
  return Function_22203a0(a1);
}

//----- (0222040C) --------------------------------------------------------
int __fastcall Function_222040c(int a1)
{
  int v1;
  uint v2;
  int v4;

  v1 = a1;
  v2 = *(uchar *)(a1 + 4);
  *(uchar *)(a1 + 4) = v2 + 1;
  if ( v2 < *(uchar *)(a1 + 3) )
    return 1;
  *(uchar *)(a1 + 4) = 0;
  v4 = 1;
  --*(uchar *)(a1 + 24);
  Function_2005748(*(ushort *)(a1 + 26));
  Function_20057fc(*(ushort *)(v1 + 26), 0xFFFF, *(uint *)(v1 + 20));
  if ( !*(uchar *)(v1 + 24) )
    v4 = 0;
  return v4;
}

//----- (0222044C) --------------------------------------------------------
int __fastcall Function_222044c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 3);
  result = 1;
  *(uchar *)(v1 + 3) = v2 - 1;
  if ( !v2 )
  {
    Function_2005748(*(ushort *)(v1 + 26));
    Function_20057fc(*(ushort *)(v1 + 26), 0xFFFF, *(uint *)(v1 + 20));
    result = 0;
  }
  return result;
}

//----- (02220474) --------------------------------------------------------
int *Function_2220474()
{
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 63, 8, 8);
}

//----- (0222048C) --------------------------------------------------------
int __fastcall Function_222048c(int result)
{
  *(uchar *)(result + 141) = 1;
  if ( dword_21BF6C0 & 0x200 && dword_21BF6C0 & 0x100 )
  {
    if ( dword_21BF6C4 & 0x400 )
    {
      *(uint *)(result + 24) += 4;
      result += 141;
      *(uchar *)result = 0;
    }
  }
  return result;
}

//----- (022204C4) --------------------------------------------------------
uint *__fastcall WeCmd_Wait(int a1)
{
  uint *v1;
  uint *result;

  v1 = (uint *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  *(uchar *)(a1 + 141) = *v1;
  *(uint *)(a1 + 24) += 4;
  result = (uint *)(a1 + 188);
  *result = WazaEffectWait;
  return result;
}

//----- (022204E4) --------------------------------------------------------
uchar *__fastcall We_Cmd1(int a1)
{
  uchar *result;

  if ( *(ushort *)(a1 + 142) )
  {
    result = (uchar *)(a1 + 141);
    *result = 1;
  }
  else
  {
    *(uint *)(a1 + 24) += 4;
    result = (uchar *)(a1 + 141);
    *result = 0;
  }
  return result;
}

//----- (02220504) --------------------------------------------------------
uint *__fastcall We_Cmdc(uint *result)
{
  uint *v1;
  uint v2;
  uint v3;

  v1 = (uint *)(result[6] + 4);
  result[6] = (uint)v1;
  v2 = *v1;
  ++v1;
  result[6] = (uint)v1;
  v3 = *v1;
  result[6] = (uint)(v1 + 1);
  if ( v2 < 0xA )
  {
    result += v2 + 37;
    *result = v3;
  }
  return result;
}

//----- (02220524) --------------------------------------------------------
int __fastcall We_Cmd43(int result)
{
  int v1;
  uint *v2;

  v1 = 0;
  *(uint *)(result + 24) += 4;
  do
  {
    v2 = (uint *)(result + 148);
    ++v1;
    result += 4;
    *v2 = 0;
  }
  while ( v1 < 10 );
  return result;
}

//----- (02220540) --------------------------------------------------------
int __fastcall Function_2220540(int a1, char a2)
{
  int result;

  switch ( a2 )
  {
    case 0:
      result = *(uint *)(*(uint *)(a1 + 192) + 4);
      break;
    case 1:
      result = *(ushort *)(*(uint *)(a1 + 192) + 8);
      break;
    case 2:
      result = *(ushort *)(*(uint *)(a1 + 192) + 10);
      break;
    case 3:
      result = *(uint *)(*(uint *)(a1 + 192) + 12);
      break;
    case 4:
      result = *(ushort *)(*(uint *)(a1 + 192) + 16);
      break;
    case 5:
      result = *(ushort *)(*(uint *)(a1 + 192) + 18);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02220590) --------------------------------------------------------
uint __fastcall Function_2220590(int a1, uint *a2, char a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  uint *v8;
  int v9;
  uint result;
  char v11;

  v3 = a1;
  v4 = 0;
  v11 = a3;
  v5 = 0;
  v6 = a2;
  v7 = 0;
  v8 = a2;
  do
  {
    v6[2] = *(uint *)(*(uint *)(v3 + 192) + v5 + 176);
    v6[6] = *(uint *)(*(uint *)(v3 + 192) + v5 + 196);
    *((ushort *)v8 + 20) = *(ushort *)(*(uint *)(v3 + 192) + v7 + 216);
    v8 = (uint *)((char *)v8 + 2);
    *((uchar *)a2 + v4 + 48) = *(uchar *)(*(uint *)(v3 + 192) + v4 + 224);
    *((uchar *)a2 + v4 + 52) = *(uchar *)(*(uint *)(v3 + 192) + v4 + 228);
    *((uchar *)a2 + v4 + 56) = *(uchar *)(*(uint *)(v3 + 192) + v4 + 232);
    v9 = *(uint *)(*(uint *)(v3 + 192) + v5 + 236);
    v5 += 4;
    v6[15] = v9;
    ++v6;
    *((uchar *)a2 + v4 + 76) = *(uchar *)(*(uint *)(v3 + 192) + v4 + 192);
    ++v4;
    v7 += 2;
  }
  while ( v4 < 4 );
  switch ( v11 )
  {
    case 0:
      *a2 = *(ushort *)(*(uint *)(v3 + 192) + 20);
      result = *(ushort *)(*(uint *)(v3 + 192) + 22);
      a2[1] = result;
      break;
    case 1:
      *a2 = *(ushort *)(*(uint *)(v3 + 192) + 20);
      result = *(ushort *)(*(uint *)(v3 + 192) + 20);
      a2[1] = result;
      break;
    case 2:
      *a2 = *(ushort *)(*(uint *)(v3 + 192) + 20);
      result = *(ushort *)(*(uint *)(v3 + 192) + 20);
      a2[1] = result;
      break;
    case 3:
      *a2 = *(ushort *)(*(uint *)(v3 + 192) + 20);
      result = *(ushort *)(*(uint *)(v3 + 192) + 20);
      a2[1] = result;
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (022206A4) --------------------------------------------------------
int __fastcall Function_22206a4(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  char v8;
  int v9;

  v9 = a4;
  v4 = (uint *)a1;
  v5 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v5;
  v6 = *v5;
  *(uint *)(a1 + 24) = v5 + 1;
  Function_2220590(a1, &v8, v6);
  if ( v6 == 2 )
    return Function_12_2238390(&v8, *v4);
  if ( v6 == 3 )
    return Function_22380cc(&v8, *v4);
  return Function_22380bc(&v8, *v4);
}

//----- (022206E8) --------------------------------------------------------
int __fastcall Function_22206e8(int a1)
{
  uint *v1;
  int *v2;
  int v3;
  char v5;

  v1 = (uint *)a1;
  v2 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v2;
  v3 = *v2;
  *(uint *)(a1 + 24) = v2 + 1;
  Function_2220590(a1, &v5, v3);
  return Function_12_22382bc(&v5, *v1);
}

//----- (0222070C) --------------------------------------------------------
int __fastcall We_Cmd2(int result)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 0;
  *(uint *)(result + 24) += 4;
  v2 = result;
  while ( *(uint *)(v2 + 48) == 1 )
  {
    ++v1;
    v2 += 12;
    if ( v1 >= 3 )
      return result;
  }
  v3 = result + 12 * v1;
  *(uint *)(v3 + 48) = 1;
  *(uchar *)(v3 + 44) = 0;
  *(uchar *)(v3 + 45) = **(uint **)(result + 24);
  v4 = *(uint *)(result + 24) + 4;
  *(uint *)(result + 24) = v4;
  *(uint *)(v3 + 40) = v4;
  return result;
}

//----- (0222074C) --------------------------------------------------------
int __fastcall We_Cmd3(int result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = result + 24;
  *(uint *)(result + 24) += 4;
  v2 = 2;
  while ( !*(uint *)(v1 + 48) )
  {
    v1 -= 12;
    if ( --v2 < 0 )
      return result;
  }
  v3 = 12 * v2;
  ++*(uchar *)(result + 44 + v3);
  v4 = *(uchar *)(result + 44 + 12 * v2);
  v5 = result + 12 * v2;
  if ( v4 == *(uchar *)(result + v3 + 45) )
  {
    result = 0;
    *(uint *)(v5 + 48) = 0;
  }
  else
  {
    *(uint *)(result + 24) = *(uint *)(v5 + 40);
  }
  return result;
}

//----- (02220798) --------------------------------------------------------
int __fastcall WeCmd_End(int a1)
{
  int v1;
  int v2;
  int result;
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
  int **v14;
  uint *v15;
  int v16;
  int v17;
  uchar v18;
  int v19;
  uint *v20;
  uchar v21;

  v1 = a1;
  v2 = 0;
  if ( *(uchar *)(a1 + 382) < 1u )
  {
    *(uchar *)(a1 + 141) = 1;
    result = *(uchar *)(a1 + 382) + 1;
    *(uchar *)(v1 + 382) = result;
    return result;
  }
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = *(uint *)(*(uint *)(v1 + 192) + v5 + 28);
    if ( v6 )
      v2 += Function_2014710(v6);
    ++v4;
    v5 += 4;
  }
  while ( v4 < 16 );
  if ( v2 || *(ushort *)(v1 + 142) || *(ushort *)(v1 + 144) )
  {
    *(uchar *)(v1 + 141) = 1;
    result = 381;
    *(uchar *)(v1 + 381) = 0;
    return result;
  }
  if ( Function_20057e0() )
  {
    if ( (uchar)++*(uchar *)(v1 + 381) <= 0x5Au )
    {
      result = 1;
      *(uchar *)(v1 + 141) = 1;
      return result;
    }
    *(uchar *)(v1 + 381) = 0;
    *(uchar *)(v1 + 141) = 0;
  }
  v7 = 0;
  *(uchar *)(v1 + 381) = 0;
  *(uchar *)(v1 + 382) = 0;
  v8 = v1;
  v9 = 0;
  do
  {
    ++v7;
    *(uint *)(v8 + 28) = 0;
    v8 += 4;
  }
  while ( v7 < 3 );
  v10 = v1;
  v11 = 0;
  do
  {
    *(uint *)(v10 + 40) = 0;
    *(uchar *)(v10 + 44) = 0;
    *(uchar *)(v10 + 45) = 0;
    *(uint *)(v10 + 48) = 0;
    ++v9;
    v10 += 12;
  }
  while ( v9 < 3 );
  v12 = v1;
  v13 = 0;
  do
  {
    v14 = *(int ***)(v12 + 204);
    if ( v14 )
      Function_200d0b0(*(uint *)(*(uint *)(v1 + 192) + 172), v14);
    v15 = (uint *)(v12 + 204);
    ++v11;
    v12 += 4;
    *v15 = 0;
  }
  while ( v11 < 4 );
  do
    Function_2221238(v1, v13++);
  while ( v13 < 5 );
  v16 = 0;
  v17 = 0;
  do
  {
    if ( *(uint *)(*(uint *)(v1 + 192) + v17 + 28) )
    {
      Function_2223894();
      *(uint *)(*(uint *)(v1 + 192) + v17 + 28) = 0;
    }
    ++v16;
    v17 += 4;
  }
  while ( v16 < 16 );
  if ( *(uint *)(v1 + 384) )
    *(uint *)(v1 + 384) = 0;
  if ( Function_221fdd4(v1) )
  {
    ((void (*)(void))dword_22413D8[0])();
  }
  else
  {
    ((void (*)(void))dword_223F9F0[0])();
    v18 = Function_22233b0(v1, 1);
    v19 = Function_221fde4(v1);
    Function_2019690(v18, 0x4000, 0, v19);
    v20 = (uint *)Function_2220278(v1);
    v21 = Function_22233b0(v1, 1);
    Function_2019ebc(v20, v21);
    Function_2019120(2u, 1);
  }
  Function_2019060(0, *(uchar *)(v1 + 416));
  Function_2019060(1u, *(uchar *)(v1 + 417));
  Function_2019060(2u, *(uchar *)(v1 + 418));
  Function_2019060(3u, *(uchar *)(v1 + 419));
  Function_2019184(*(uint *)(v1 + 196), 2u, 0, 0);
  Function_2019184(*(uint *)(v1 + 196), 2u, 3u, 0);
  Function_2019184(*(uint *)(v1 + 196), 3u, 0, 0);
  Function_2019184(*(uint *)(v1 + 196), 3u, 3u, 0);
  result = 0;
  *(uint *)(v1 + 16) = 0;
  return result;
}

//----- (022209A8) --------------------------------------------------------
int __fastcall We_Cmd2e(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int result;
  int v9;
  char v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(v4 + 24) = v5;
  v6 = *v5;
  *(uint *)(v4 + 24) = v5 + 1;
  v9 = v5[1];
  v5 += 2;
  *(uint *)(v4 + 24) = v5;
  v7 = *v5;
  *(uint *)(v4 + 24) = v5 + 1;
  *(uint *)(*(uint *)(v4 + 192) + 24) = v6;
  if ( *(uchar *)(v4 + v6 + 124) )
  {
    Function_2014734(*(uint **)(*(uint *)(v4 + 192) + 4 * v6 + 28), &v10);
    v11 = -v11;
    Function_2014744(*(uint **)(*(uint *)(v4 + 192) + 4 * v6 + 28), &v10);
  }
  Function_2014788(*(uint *)(*(uint *)(v4 + 192) + 4 * v6 + 28), *(uchar *)(v4 + v6 + 108));
  result = Function_2223880(*(uint *)(*(uint *)(v4 + 192) + 4 * v6 + 28), v9, v7, v4);
  *(uint *)(*(uint *)(v4 + 192) + 92) = result;
  return result;
}

//----- (02220A3C) --------------------------------------------------------
int __fastcall Function_2220a3c(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int result;
  int v8;
  int v9;
  char v10;
  int v11;

  v1 = a1;
  v2 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(v1 + 24) = v2;
  v3 = *v2;
  ++v2;
  *(uint *)(v1 + 24) = v2;
  v4 = *v2;
  v5 = v2 + 1;
  *(uint *)(v1 + 24) = v2 + 1;
  v6 = v2[1];
  ++v5;
  *(uint *)(v1 + 24) = v5;
  v9 = v6;
  v8 = *v5;
  *(uint *)(v1 + 24) = v5 + 1;
  *(uint *)(*(uint *)(v1 + 192) + 24) = v3;
  if ( *(uchar *)(v1 + v3 + 124) )
  {
    Function_2014734(*(uint **)(*(uint *)(v1 + 192) + 4 * v3 + 28), &v10);
    v11 = -v11;
    Function_2014744(*(uint **)(*(uint *)(v1 + 192) + 4 * v3 + 28), &v10);
  }
  Function_2014788(*(uint *)(*(uint *)(v1 + 192) + 4 * v3 + 28), *(uchar *)(v1 + v3 + 108));
  result = Function_2223880(*(uint *)(*(uint *)(v1 + 192) + 4 * v3 + 28), v9, v8, v1);
  *(uint *)(*(uint *)(v1 + 192) + 4 * v4 + 92) = result;
  return result;
}

//----- (02220ADC) --------------------------------------------------------
int __fastcall Function_2220adc(int a1)
{
  int *v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v12[6];

  v1 = dword_22386B4;
  v2 = a1;
  v3 = (char *)v12;
  v4 = 18;
  do
  {
    v5 = *v1;
    v6 = v1[1];
    v1 += 2;
    *(uint *)v3 = v5;
    *((uint *)v3 + 1) = v6;
    v3 += 8;
    --v4;
  }
  while ( v4 );
  v7 = Function_2220240(v2);
  v8 = Function_2220248(v2);
  v9 = Function_2235254(v2, v7);
  v10 = v12[6 * v9 + Function_2235254(v2, v8)];
  if ( v10 == 255 )
    ErrorHandler();
  return v10 - 1;
}

//----- (02220B34) --------------------------------------------------------
int __fastcall Function_2220b34(int a1)
{
  int *v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v12[6];

  v1 = dword_2238744;
  v2 = a1;
  v3 = (char *)v12;
  v4 = 18;
  do
  {
    v5 = *v1;
    v6 = v1[1];
    v1 += 2;
    *(uint *)v3 = v5;
    *((uint *)v3 + 1) = v6;
    v3 += 8;
    --v4;
  }
  while ( v4 );
  v7 = Function_2220240(v2);
  v8 = Function_2220248(v2);
  v9 = Function_2235254(v2, v7);
  v10 = v12[6 * v9 + Function_2235254(v2, v8)];
  if ( v10 == 255 )
    ErrorHandler();
  return v10;
}

//----- (02220B8C) --------------------------------------------------------
int __fastcall Function_2220b8c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint *v6;
  int v7;
  int v8;
  char *v9;
  int v10;
  int result;
  int v12;
  char v13;
  int v14;
  char v15[24];
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = *(int **)(a1 + 24);
  v6 = (uint *)(a1 + 24);
  ++v5;
  *(uint *)(v4 + 24) = v5;
  v7 = *v5;
  *(uint *)(v4 + 24) = v5 + 1;
  v8 = 0;
  v9 = v15;
  do
  {
    ++v8;
    *(uint *)v9 = **(uint **)(v4 + 24);
    v9 += 4;
    *v6 += 4;
  }
  while ( v8 < 6 );
  v12 = **(uint **)(v4 + 24);
  *v6 += 4;
  *(uint *)(*(uint *)(v4 + 192) + 24) = v7;
  if ( *(uchar *)(v4 + v7 + 124) )
  {
    Function_2014734(*(uint **)(*(uint *)(v4 + 192) + 4 * v7 + 28), &v13);
    v14 = -v14;
    Function_2014744(*(uint **)(*(uint *)(v4 + 192) + 4 * v7 + 28), &v13);
  }
  v10 = Function_2220adc(v4);
  Function_2014788(*(uint *)(*(uint *)(v4 + 192) + 4 * v7 + 28), *(uchar *)(v4 + v7 + 108));
  result = Function_2223880(*(uint *)(*(uint *)(v4 + 192) + 4 * v7 + 28), *(uint *)&v15[4 * v10], v12, v4);
  *(uint *)(*(uint *)(v4 + 192) + 92) = result;
  return result;
}

//----- (02220C44) --------------------------------------------------------
int __fastcall Function_2220c44(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint *v6;
  int v7;
  int v8;
  char *v9;
  int v10;
  int result;
  int v12;
  char v13;
  int v14;
  char v15[16];
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = *(int **)(a1 + 24);
  v6 = (uint *)(a1 + 24);
  ++v5;
  *(uint *)(v4 + 24) = v5;
  v7 = *v5;
  *(uint *)(v4 + 24) = v5 + 1;
  v8 = 0;
  v9 = v15;
  do
  {
    ++v8;
    *(uint *)v9 = **(uint **)(v4 + 24);
    v9 += 4;
    *v6 += 4;
  }
  while ( v8 < 4 );
  v12 = **(uint **)(v4 + 24);
  *v6 += 4;
  *(uint *)(*(uint *)(v4 + 192) + 24) = v7;
  if ( *(uchar *)(v4 + v7 + 124) )
  {
    Function_2014734(*(uint **)(*(uint *)(v4 + 192) + 4 * v7 + 28), &v13);
    v14 = -v14;
    Function_2014744(*(uint **)(*(uint *)(v4 + 192) + 4 * v7 + 28), &v13);
  }
  v10 = Function_2220b34(v4);
  Function_2014788(*(uint *)(*(uint *)(v4 + 192) + 4 * v7 + 28), *(uchar *)(v4 + v7 + 108));
  result = Function_2223880(*(uint *)(*(uint *)(v4 + 192) + 4 * v7 + 28), *(uint *)&v15[4 * v10], v12, v4);
  *(uint *)(*(uint *)(v4 + 192) + 92) = result;
  return result;
}

//----- (02220CFC) --------------------------------------------------------
int __fastcall Function_2220cfc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = 0;
  v2 = a1;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = *(uint *)(*(uint *)(v2 + 192) + v4 + 28);
    if ( v5 )
      v1 += Function_2014710(v5);
    ++v3;
    v4 += 4;
  }
  while ( v3 < 16 );
  if ( v1 )
  {
    result = 1;
    *(uchar *)(v2 + 141) = 1;
  }
  else
  {
    *(uint *)(v2 + 24) += 4;
    result = 0;
    *(uchar *)(v2 + 141) = 0;
  }
  return result;
}

//----- (02220D3C) --------------------------------------------------------
uchar *(__fastcall *__fastcall Function_2220d3c(int a1))(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  uchar *(__fastcall *result)(int);

  v1 = a1;
  v2 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(v1 + 24) = v2;
  v3 = *v2;
  *(uint *)(v1 + 24) = v2 + 1;
  v4 = 4 * v3;
  if ( *(uint *)(*(uint *)(v1 + 192) + 4 * v3 + 28) )
    ErrorHandler();
  v5 = *(int **)(v1 + 24);
  v6 = *v5;
  *(uint *)(v1 + 24) = v5 + 1;
  *(uint *)(*(uint *)(v1 + 192) + v4 + 28) = Function_22237f0(*(uint *)v1, v6, 0);
  *(uchar *)(v1 + 141) = 2;
  result = WazaEffectWait;
  *(uint *)(v1 + 188) = WazaEffectWait;
  return result;
}

//----- (02220D90) --------------------------------------------------------
uchar *(__fastcall *__fastcall Function_2220d90(int a1))(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  uchar *(__fastcall *result)(int);

  v1 = a1;
  v2 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(v1 + 24) = v2;
  v3 = *v2;
  *(uint *)(v1 + 24) = v2 + 2;
  v4 = 4 * v3;
  if ( *(uint *)(*(uint *)(v1 + 192) + 4 * v3 + 28) )
    ErrorHandler();
  v5 = *(int **)(v1 + 24);
  v6 = *v5;
  *(uint *)(v1 + 24) = v5 + 1;
  *(uint *)(*(uint *)(v1 + 192) + v4 + 28) = Function_2223818(*(uint *)v1, 100, v6, 0);
  *(uchar *)(v1 + 141) = 2;
  result = WazaEffectWait;
  *(uint *)(v1 + 188) = WazaEffectWait;
  return result;
}

//----- (02220DE8) --------------------------------------------------------
int __fastcall Function_2220de8(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(v1 + 24) = v2;
  v3 = *v2;
  *(uint *)(v1 + 24) = v2 + 1;
  v4 = 4 * v3;
  Function_2223894(*(uint *)(*(uint *)(v1 + 192) + 4 * v3 + 28));
  result = *(uint *)(v1 + 192) + v4;
  *(uint *)(result + 28) = 0;
  return result;
}

//----- (02220E14) --------------------------------------------------------
int __fastcall Function_2220e14(int result)
{
  int v1;
  int v2;

  v1 = 0;
  *(uint *)(result + 24) += 4;
  v2 = result;
  while ( *(uint *)(v2 + 28) )
  {
    ++v1;
    v2 += 4;
    if ( v1 >= 3 )
      return result;
  }
  *(uint *)(result + 4 * v1 + 28) = *(uint *)(result + 24) + 4;
  *(uint *)(result + 24) += 4 * **(uint **)(result + 24);
  return result;
}

//----- (02220E44) --------------------------------------------------------
int __fastcall Function_2220e44(int result)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint *)(result + 24) += 4;
  v1 = 2;
  v2 = result + 8;
  while ( !*(uint *)(v2 + 28) )
  {
    v2 -= 4;
    if ( --v1 < 0 )
      return result;
  }
  v3 = result + 28;
  v4 = 4 * v1;
  *(uint *)(result + 24) = *(uint *)(result + 28 + v4);
  result = 0;
  *(uint *)(v3 + v4) = 0;
  return result;
}

//----- (02220E70) --------------------------------------------------------
int __fastcall Function_2220e70(int result)
{
  int *v1;
  int v2;
  int v3;
  int *v4;

  v1 = (int *)(*(uint *)(result + 24) + 4);
  *(uint *)(result + 24) = v1;
  v2 = *v1;
  ++v1;
  *(uint *)(result + 24) = v1;
  v3 = *v1;
  *(uint *)(result + 24) = v1 + 1;
  v4 = (int *)(result + 24);
  if ( v3 == *(uint *)(result + 4 * v2 + 148) )
  {
    *(uint *)(result + 24) = **(uint **)(result + 24);
  }
  else
  {
    result = *v4 + 4;
    *v4 = result;
  }
  return result;
}

//----- (02220EA8) --------------------------------------------------------
int __fastcall Function_2220ea8(int a1)
{
  int v1;
  bool v2;
  int *v3;
  int result;

  v1 = a1;
  *(uint *)(a1 + 24) += 4;
  v2 = Function_2223178(*(uint *)(a1 + 192)) == 0;
  v3 = *(int **)(v1 + 24);
  if ( v2 )
    result = (int)(v3 + 1);
  else
    result = *v3;
  *(uint *)(v1 + 24) = result;
  return result;
}

//----- (02220ED0) --------------------------------------------------------
int __fastcall We_Cmd2d(int a1)
{
  int v1;
  int *v2;
  int v3;
  int (__fastcall *v4)(int);
  uint *v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  uint *v10;

  v1 = a1;
  v2 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v2;
  v3 = *v2;
  *(uint *)(v1 + 24) = v2 + 1;
  v4 = (int (__fastcall *)(int))Function_2226998_CallJumptable2239eec(v3);
  v5 = *(uint **)(v1 + 24);
  v6 = *v5;
  v7 = 0;
  *(uint *)(v1 + 24) = v5 + 1;
  if ( v6 )
  {
    v8 = v1;
    do
    {
      ++v7;
      *(uint *)(v8 + 148) = **(uint **)(v1 + 24);
      v8 += 4;
      *(uint *)(v1 + 24) += 4;
    }
    while ( v7 < v6 );
  }
  if ( v7 < 10 )
  {
    v9 = v1 + 4 * v7;
    do
    {
      v10 = (uint *)(v9 + 148);
      ++v7;
      v9 += 4;
      *v10 = 0;
    }
    while ( v7 < 10 );
  }
  return v4(v1);
}

//----- (02220F30) --------------------------------------------------------
int __fastcall We_Cmdd(int result)
{
  *(uint *)(result + 24) += 4;
  if ( *(ushort *)(*(uint *)(result + 192) + 16) & 1 )
    *(uint *)(result + 24) += 4;
  *(uint *)(result + 24) += 4 * **(uint **)(result + 24);
  return result;
}

//----- (02220F5C) --------------------------------------------------------
int __fastcall Function_2220f5c(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  v2 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v2;
  v3 = *v2;
  *(uint *)(a1 + 24) = v2 + 1;
  if ( v3 )
    v5 = *(ushort *)(*(uint *)(a1 + 192) + 22);
  else
    v4 = *(ushort *)(*(uint *)(a1 + 192) + 20);
  if ( Function_223525c() == 4 )
    *(uint *)(v1 + 24) += 4;
  result = *(uint *)(v1 + 24) + 4 * **(uint **)(v1 + 24);
  *(uint *)(v1 + 24) = result;
  return result;
}

//----- (02220FA0) --------------------------------------------------------
int __fastcall Function_2220fa0(int a1)
{
  int v1;
  char *v2;
  int v3;
  uint *v4;
  int v5;
  uint v6;
  int result;
  char v8;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  v2 = &v8;
  *(uint *)&v8 = 3;
  v9 = 12;
  v10 = 48;
  v11 = 192;
  *(uint *)(a1 + 24) += 4;
  v3 = *(uint *)(a1 + 192);
  v4 = (uint *)(a1 + 24);
  v5 = *(uint *)(v3 + 12);
  if ( v5 )
  {
    *v4 += 4;
    v6 = 0;
    do
    {
      if ( *(uint *)v2 & v5 )
        break;
      ++v6;
      v2 += 4;
      *v4 += 4;
    }
    while ( v6 < 4 );
  }
  result = *(uint *)(v1 + 24) + 4 * **(uint **)(v1 + 24);
  *(uint *)(v1 + 24) = result;
  return result;
}

//----- (02220FFC) --------------------------------------------------------
int __fastcall Function_2220ffc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  *(uint *)(a1 + 24) += 4;
  if ( Function_221fdd4(a1) == 1 )
    result = *(uint *)(v1 + 24) + 4 * **(uint **)(v1 + 24);
  else
    result = *(uint *)(v1 + 24) + 4;
  *(uint *)(v1 + 24) = result;
  return result;
}

//----- (02221024) --------------------------------------------------------
int __fastcall Function_2221024(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  *(uint *)(a1 + 24) += 4;
  v2 = *(ushort *)(*(uint *)(a1 + 192) + 20);
  v3 = ((int (*)(void))Function_223525c)();
  if ( v3 == Function_223525c(v1, *(ushort *)(*(uint *)(v1 + 192) + 22)) )
    result = *(uint *)(v1 + 24) + 4 * **(uint **)(v1 + 24);
  else
    result = *(uint *)(v1 + 24) + 4;
  *(uint *)(v1 + 24) = result;
  return result;
}

//----- (02221064) --------------------------------------------------------
int __fastcall Function_2221064(int a1)
{
  int *v1;
  int v2;
  int *v3;
  int result;

  v1 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  v2 = *v1;
  *(uint *)(a1 + 24) = v1 + 1;
  v3 = (int *)(a1 + 24);
  if ( v2 == *(ushort *)(*(uint *)(a1 + 192) + 16) )
    result = *v3 + 4 * **(uint **)(a1 + 24);
  else
    result = *v3 + 4;
  *v3 = result;
  return result;
}

//----- (02221098) --------------------------------------------------------
int __fastcall Function_2221098(int result)
{
  uint *v1;

  v1 = (uint *)(*(uint *)(result + 24) + 4);
  *(uint *)(result + 24) = v1;
  *(uint *)(result + 24) = &v1[*v1];
  return result;
}

//----- (022210A8) --------------------------------------------------------
int __fastcall Function_22210a8(int a1, char a2)
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

  v3 = a1;
  switch ( a2 )
  {
    case 0:
      v2 = *(ushort *)(*(uint *)(a1 + 192) + 20);
      break;
    case 1:
      v2 = *(ushort *)(*(uint *)(a1 + 192) + 22);
      break;
    case 2:
      v4 = *(ushort *)(*(uint *)(a1 + 192) + 20);
      v2 = Function_22352ac();
      break;
    case 3:
      v5 = *(ushort *)(*(uint *)(a1 + 192) + 22);
      v2 = Function_22352ac();
      break;
    case 4:
      v2 = 255;
      v6 = 0;
      while ( 1 )
      {
        v7 = Function_22232b8(v3, v6);
        if ( !v7 || v7 == 2 )
          break;
        if ( ++v6 >= 4 )
          goto LABEL_11;
      }
      v2 = v6;
LABEL_11:
      if ( v2 == 255 )
        v2 = 0;
      break;
    case 5:
      v2 = 255;
      v8 = 0;
      while ( 1 )
      {
        v9 = Function_22232b8(v3, v8);
        if ( v9 == 1 || v9 == 3 )
          break;
        if ( ++v8 >= 4 )
          goto LABEL_18;
      }
      v2 = v8;
LABEL_18:
      if ( v2 == 255 )
        v2 = 0;
      break;
    case 6:
      v2 = 255;
      v10 = 0;
      while ( Function_22232b8(v3, v10) != 4 )
      {
        if ( ++v10 >= 4 )
          goto LABEL_24;
      }
      v2 = v10;
LABEL_24:
      if ( v2 == 255 )
        v2 = 0;
      break;
    case 7:
      v2 = 255;
      v11 = 0;
      while ( Function_22232b8(v3, v11) != 5 )
      {
        if ( ++v11 >= 4 )
          goto LABEL_30;
      }
      v2 = v11;
LABEL_30:
      if ( v2 == 255 )
        v2 = 0;
      break;
    default:
      return v2;
  }
  return v2;
}

//----- (0222118C) --------------------------------------------------------
int __fastcall Function_222118c(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  short v5;
  short v6;

  v2 = a2;
  if ( *(uchar *)(a2 + 5) )
  {
    ++*(uchar *)(a2 + 4);
    result = *(uchar *)(a2 + 5);
    if ( *(uchar *)(a2 + 4) != result )
      return result;
    *(uchar *)(a2 + 4) = 0;
  }
  v4 = (short)Function_20080c0(*(uint *)(a2 + 8), 0);
  v5 = Function_20080c0(*(uint *)(v2 + 8), 1u);
  v6 = Function_20080c0(*(uint *)(v2 + 8), 0x29u);
  return Function_200d4c4(*(int **)v2, v4, (short)(v5 - v6));
}

//----- (022211D8) --------------------------------------------------------
void __fastcall Function_22211d8(int a1, int a2)
{
  int *v2;
  int v3;
  short v4;
  int v5;

  v2 = (int *)a2;
  if ( *(uchar *)(a2 + 5) )
  {
    if ( ++*(uchar *)(a2 + 4) != *(uchar *)(a2 + 5) )
      return;
    *(uchar *)(a2 + 4) = 0;
  }
  v3 = (short)Function_20080c0(*(uint *)(a2 + 8), 0);
  v4 = Function_20080c0(v2[2], 1u);
  v5 = (short)(v4 - Function_20080c0(v2[2], 0x29u));
  Function_2019184(*v2, 2u, 0, 40 - v3);
  Function_2019184(*v2, 2u, 3u, 40 - v5);
}

//----- (02221238) --------------------------------------------------------
int __fastcall Function_2221238(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  v2 = a1;
  if ( a2 == 4 )
  {
    result = *(uint *)(a1 + 376);
    if ( result )
    {
      Call_RemoveTaskFromTaskList(*(int **)(result + 12));
      free(*(uint *)(v2 + 376));
      result = 376;
      *(uint *)(v2 + 376) = 0;
    }
  }
  else
  {
    v4 = 4 * a2;
    v5 = a1 + 356;
    result = *(uint *)(a1 + 356 + 4 * a2);
    if ( result )
    {
      Call_RemoveTaskFromTaskList(*(int **)(result + 12));
      free(*(uint *)(v5 + v4));
      result = 0;
      *(uint *)(v5 + v4) = 0;
    }
  }
  return result;
}

//----- (02221284) --------------------------------------------------------
void We_Cmd6_Dummy()
{
  ;
}

//----- (02221288) --------------------------------------------------------
void We_Cmd7_Dummy()
{
  ;
}

//----- (0222128C) --------------------------------------------------------
uint __fastcall We_Cmd1f(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  short v15;
  int v16;
  int v17;
  uchar v18;
  int v20;
  int v21;
  int *v22;

  v1 = a1;
  v2 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v2;
  v3 = *v2;
  ++v2;
  *(uint *)(a1 + 24) = v2;
  v4 = *v2;
  *(uint *)(a1 + 24) = v2 + 1;
  v5 = Function_22210a8(a1, v3);
  v6 = *(uint *)(v1 + 192);
  v7 = *(uint *)(v6 + 4 * v5 + 176);
  v21 = *(uint *)(v7 + 4);
  v8 = *(uchar *)(v6 + v5 + 232);
  v20 = *(uint *)(v7 + 8);
  v22 = *(int **)v7;
  if ( Function_221fdd4(v1) != 1 || (v9 = Function_22232d0(v1, v5), Function_22384f0(v9, v8) != 1) )
    v10 = 264;
  else
    v10 = 265;
  v11 = (ushort *)Function_2019f28(2u);
  MI_CpuFill8(v11, 0, 0x1900u);
  Function_2019120(2u, 0);
  Function_201958c(*(uint **)(v1 + 196), 2u, v22, 3200, 0);
  Function_2003050(*(uint *)(v1 + 200), v21, v20, *(uint *)v1, 0, 0, 0x80u);
  Function_200710c(*(uint *)(v1 + 420), v10, *(uint **)(v1 + 196), 2u, 0, 0, 0, *(uint *)v1);
  if ( v4 == 1 )
  {
    *(uint *)(v1 + 376) = malloc(*(uint *)v1, 16);
    **(uint **)(v1 + 376) = *(uint *)(v1 + 196);
    *(uint *)(*(uint *)(v1 + 376) + 8) = Function_22232fc(v1, v5);
    *(uchar *)(*(uint *)(v1 + 376) + 4) = 0;
    *(uchar *)(*(uint *)(v1 + 376) + 5) = 0;
    *(uint *)(*(uint *)(v1 + 376) + 12) = AddTaskToTaskList1((int)Function_22211d8, *(uint *)(v1 + 376), 0x1001u);
  }
  v12 = Function_22232fc(v1, v5);
  v13 = (short)Function_20080c0(v12, 0);
  v14 = Function_22232fc(v1, v5);
  v15 = Function_20080c0(v14, 1u);
  v16 = Function_22232fc(v1, v5);
  v17 = (short)(v15 - Function_20080c0(v16, 0x29u));
  Function_2019184(*(uint *)(v1 + 196), 2u, 0, 40 - v13);
  Function_2019184(*(uint *)(v1 + 196), 2u, 3u, 40 - v17);
  Function_2019120(2u, 1);
  v18 = Function_222339c(v1);
  return Function_2019060(2u, v18);
}

//----- (02221424) --------------------------------------------------------
int __fastcall We_Cmd20(int a1)
{
  int v1;
  ushort *v2;

  v1 = a1;
  *(uint *)(a1 + 24) += 8;
  v2 = (ushort *)Function_2019f28(2u);
  MI_CpuFill8(v2, 0, 0x1900u);
  return Function_2221238(v1, 4);
}

//----- (0222144C) --------------------------------------------------------
int __fastcall WeCmd_Init(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v5 = 5;
  v6 = 5;
  v7 = 5;
  v8 = 5;
  v9 = 0;
  v10 = 0;
  a1[6] += 4;
  a1[78] = Function_200c704(*(uint **)(a1[48] + 172));
  Function_200c7c0(*(int **)(v1[48] + 172), (int **)v1[78], 5);
  v2 = Function_200c738(*(uint *)(v1[48] + 172));
  Function_200964c(v2, 0, 1114112, v3);
  return Function_200cb30(*(uint **)(v1[48] + 172), v1[78], &v5);
}

//----- (022214C4) --------------------------------------------------------
int __fastcall We_Cmd39(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = (int *)(a1[6] + 4);
  v1[6] = v2;
  v3 = *v2;
  v1[6] = v2 + 1;
  v4 = v1[48];
  v5 = v3 + 20001 + 5000 * *(ushort *)(v4 + 20);
  Function_200cc3c(*(uint **)(v4 + 172), v1[78], v1[106], 0x4Cu, 0, 1, v5);
  Function_200cdc4(v1[50], 2u, *(uint **)(v1[48] + 172), v1[78], v1[106], 0x4Bu, 0, 1, 1, v5);
  Function_200ce24(*(uint **)(v1[48] + 172), v1[78], v1[106], 0x4Du, 0, v5);
  return Function_200ce54(*(uint **)(v1[48] + 172), v1[78], v1[106], 0x4Eu, 0, v5);
}

//----- (02221580) --------------------------------------------------------
uint *__fastcall We_Cmd3a(int a1, int a2, int a3, int a4)
{
  short v4;
  int *v5;
  int *v6;
  int v7;
  int *v8;
  uint *v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  short v16;
  int v17;
  int *v18;
  short *v19;
  int *v20;
  int v21;
  int v22;
  uint *v23;
  short v24;
  int v25;
  uint *result;
  int v27;
  int v28;
  uint *v29;
  short v30;
  int v31;
  int v32;
  int v33;
  uint *v34;
  int v35;
  short v36;
  short v37;
  short v38;
  short v39;
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

  v51 = a4;
  v5 = (int *)a1;
  v6 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v6;
  v7 = *v6;
  v8 = v6 + 1;
  *(uint *)(a1 + 24) = v6 + 1;
  v9 = (uint *)v6[1];
  ++v8;
  *(uint *)(a1 + 24) = v8;
  v29 = v9;
  v28 = *v8;
  *(uint *)(a1 + 24) = v8 + 1;
  v10 = v8[1];
  *(uint *)(a1 + 24) = v8 + 2;
  v45 = v10 + 20001 + 5000 * *(ushort *)(*(uint *)(a1 + 192) + 20);
  v46 = v10 + 20001 + 5000 * *(ushort *)(*(uint *)(a1 + 192) + 20);
  v47 = v10 + 20001 + 5000 * *(ushort *)(*(uint *)(a1 + 192) + 20);
  v48 = v10 + 20001 + 5000 * *(ushort *)(*(uint *)(a1 + 192) + 20);
  v49 = 0;
  v50 = 0;
  v11 = Function_22210a8(a1, v7);
  v12 = v5[48];
  v13 = *(int **)(v12 + 4 * v11 + 176);
  v33 = v13[1];
  v32 = v13[2];
  v31 = *(uchar *)(v12 + v11 + 232);
  v35 = *v13;
  v14 = Function_22232fc(v5, v11);
  v15 = v14;
  if ( v14 )
  {
    v30 = Function_20080c0(v14, 0);
    v16 = Function_20080c0(v15, 1u);
    v4 = v16 - Function_20080c0(v15, 0x29u);
  }
  v36 = v30;
  v37 = v4;
  v17 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 100;
  v41 = 0;
  v42 = 1;
  v43 = 1;
  v44 = 0;
  v18 = &v45;
  v19 = &v36;
  do
  {
    ++v17;
    *((uint *)v19 + 5) = *v18;
    ++v18;
    v19 += 2;
  }
  while ( v17 < 6 );
  v20 = Function_200ce6c(*(uint **)(v5[48] + 172), v5[78], &v36);
  v34 = (uint *)v20;
  if ( v15 )
  {
    if ( Function_20080c0(v15, 6u) == 1 )
      Function_200d3f4(v34, 0);
  }
  else
  {
    Function_200d3f4((uint *)v20, 0);
  }
  if ( Function_221fdd4((int)v5) == 1 )
  {
    v21 = Function_22232d0(v5, v11);
    if ( Function_22384f0(v21, v31) == 1 )
      Function_200d7d4((int *)v34, 1);
  }
  if ( Function_22232fc(v5, v11) )
  {
    v22 = Function_2021f98(*v34);
    Function_201dc68(19, *(uint *)(v22 + 4), v35, 3200);
  }
  if ( Function_22232fc(v5, v11) )
  {
    v23 = (uint *)Function_2021f9c(*v34);
    v24 = Function_201fab4(v23, 1);
    Function_2003050(v5[50], v33, v32, *v5, 2, 32, 16 * v24);
  }
  v25 = 4 * v28;
  if ( v5[v28 + 79] )
    ErrorHandler();
  v5[v25 / 4u + 79] = (int)v34;
  v5[v25 / 4u + 84] = 1;
  result = v29;
  if ( v29 == (uint *)1 )
  {
    result = (uint *)Function_22232fc(v5, v11);
    if ( result )
    {
      v27 = (int)(v5 + 89);
      *(uint *)(v27 + v25) = malloc(*v5, 16);
      **(uint **)(v27 + v25) = v34;
      *(uint *)(*(uint *)(v27 + v25) + 8) = Function_22232fc(v5, v11);
      *(uchar *)(*(uint *)(v27 + v25) + 4) = 0;
      *(uchar *)(*(uint *)(v27 + v25) + 5) = 0;
      result = AddTaskToTaskList1((int)Function_222118c, v5[v25 / 4u + 89], 0x1001u);
      *(uint *)(*(uint *)(v27 + v25) + 12) = result;
    }
  }
  return result;
}

//----- (022217B4) --------------------------------------------------------
int __fastcall We_Cmd3b(uint *a1)
{
  uint *v1;
  int **v2;
  int result;

  v1 = a1;
  a1[6] += 4;
  v2 = (int **)a1[78];
  if ( v2 )
    Function_200d0b0(*(uint *)(a1[48] + 172), v2);
  result = 312;
  v1[78] = 0;
  return result;
}

//----- (022217E0) --------------------------------------------------------
int __fastcall Function_22217e0(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  v2 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(v1 + 24) = v2;
  v3 = *v2;
  *(uint *)(v1 + 24) = v2 + 1;
  v4 = 4 * v3;
  v5 = *(uint *)(v1 + 316 + 4 * v3);
  if ( v5 )
    Function_200d0f4(v5);
  result = 336;
  *(uint *)(v1 + v4 + 336) = 0;
  *(uint *)(v1 + 316 + v4) = 0;
  return result;
}

//----- (02221810) --------------------------------------------------------
int __fastcall Function_2221810(int *a1, int a2)
{
  int result;

  if ( !*(uint *)(a2 + 12) )
    return Call_RemoveTaskFromTaskList(a1);
  result = *(uint *)(*(uint *)a2 + 312);
  if ( result )
    result = Function_200c7ec(*(int **)(a2 + 4));
  return result;
}

//----- (02221834) --------------------------------------------------------
uint *__fastcall Function_2221834(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  bool v15;
  uint *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v1 = a1;
  v2 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v2;
  v3 = a1 + 84;
  v19 = *v2;
  *(uint *)(a1 + 24) = v2 + 1;
  v4 = v2[1];
  v5 = (int)(v2 + 2);
  *(uint *)(v1 + 24) = v2 + 2;
  v6 = v2[2];
  *(uint *)(v1 + 24) = v5 + 4;
  v7 = 16 * v4;
  v21 = v1 + 76;
  *(uint *)(v1 + 76 + v7) = v1;
  v8 = v1 + 16 * v4;
  *(uint *)(v8 + 80) = *(uint *)(v1 + 312);
  *(uint *)(v3 + v7) = *(uint *)(v1 + 4 * v6 + 316);
  *(uint *)(v8 + 88) = 1;
  Function_200d3f4(*(uint **)(v1 + 84 + v7), 0);
  result = (uint *)Function_2223364(v1);
  if ( result == (uint *)1 )
  {
    v10 = Function_2220240(v1);
    v20 = Function_2235254(v1, v10);
    v11 = Function_2220248(v1);
    Function_2235254(v1, v11);
    v12 = Function_22210a8(v1, v19);
    v13 = Function_22232fc(v1, v12);
    if ( v13 )
      v14 = Function_20080c0(v13, 6u);
    else
      v14 = 0;
    v15 = v14 == 1;
    v16 = *(uint **)(v3 + v7);
    if ( v15 )
      Function_200d3f4(v16, 0);
    else
      Function_200d3f4(v16, 1);
    switch ( (uchar)v19 )
    {
      case 0:
        if ( (uint)(v20 - 3) > 1 )
        {
          v17 = v1 + 84;
          Function_200d3f4(*(uint **)(v17 + v7), 0);
          Function_200d474(*(int **)(v17 + v7), 255);
        }
        else
        {
          Function_200d474(*(int **)(v3 + v7), 1);
        }
        break;
      case 1:
        switch ( (uchar)v19 )
        {
          case 2:
            Function_200d474(*(int **)(v3 + v7), 255);
            break;
          case 3:
            Function_200d474(*(int **)(v3 + v7), 1);
            break;
          case 4:
            Function_200d474(*(int **)(v3 + v7), 1);
            break;
          case 5:
            Function_200d474(*(int **)(v3 + v7), 255);
            break;
          default:
            goto LABEL_26;
        }
        break;
      case 2:
        if ( v20 != 5 && v20 != 2 )
        {
          v18 = v1 + 84;
          Function_200d3f4(*(uint **)(v18 + v7), 0);
          Function_200d474(*(int **)(v18 + v7), 255);
        }
        else
        {
          Function_200d474(*(int **)(v3 + v7), 1);
        }
        break;
      case 3:
        switch ( (uchar)v19 )
        {
          case 2:
            Function_200d474(*(int **)(v3 + v7), 1);
            break;
          case 3:
            Function_200d474(*(int **)(v3 + v7), 255);
            break;
          case 4:
            Function_200d474(*(int **)(v3 + v7), 255);
            break;
          case 5:
            Function_200d474(*(int **)(v3 + v7), 1);
            break;
          default:
            goto LABEL_26;
        }
        break;
      default:
        break;
    }
LABEL_26:
    result = AddTaskToTaskList1((int)Function_2221810, v21 + v7, 0x1000u);
  }
  return result;
}

//----- (022219E8) --------------------------------------------------------
int __fastcall Function_22219e8(int a1)
{
  int *v1;
  int v2;
  int result;

  v1 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  v2 = *v1;
  *(uint *)(a1 + 24) = v1 + 1;
  result = a1 + 16 * v2;
  *(uint *)(result + 88) = 0;
  return result;
}

//----- (02221A00) --------------------------------------------------------
int __fastcall Function_2221a00(int a1)
{
  int *v1;
  int v2;

  v1 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  v2 = *v1;
  *(uint *)(a1 + 24) = v1 + 1;
  return Function_2221238(a1, v2);
}

//----- (02221A14) --------------------------------------------------------
uchar *__fastcall We_Cmd3e(int a1)
{
  int *v1;
  int v2;
  int v3;
  uchar *result;

  v1 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  v2 = *v1;
  ++v1;
  *(uint *)(a1 + 24) = v1;
  v3 = *v1;
  *(uint *)(a1 + 24) = v1 + 1;
  result = (uchar *)(a1 + v2 + 108);
  *result = v3;
  return result;
}

//----- (02221A30) --------------------------------------------------------
uchar *__fastcall We_Cmd3f(int a1)
{
  int *v1;
  int v2;
  int v3;
  uchar *result;

  v1 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  v2 = *v1;
  ++v1;
  *(uint *)(a1 + 24) = v1;
  v3 = *v1;
  *(uint *)(a1 + 24) = v1 + 1;
  result = (uchar *)(a1 + v2 + 124);
  *result = v3;
  return result;
}

//----- (02221A4C) --------------------------------------------------------
void Function_2221a4c()
{
  ;
}

//----- (02221A50) --------------------------------------------------------
void Function_2221a50()
{
  ;
}

//----- (02221A54) --------------------------------------------------------
BOOL __fastcall Function_2221a54(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_223525c(a2, *(ushort *)(*(uint *)(a2 + 192) + 20));
  v7 = Function_223525c(v3, *(ushort *)(*(uint *)(v3 + 192) + 22));
  v8 = *(uint *)(v4 + 4 * v5 + 28);
  if ( v8 == 2 )
  {
    if ( v6 == v7 )
      return v7 != 3;
    if ( v7 == 3 )
      return 1;
  }
  else if ( v8 && v7 == 3 )
  {
    return 1;
  }
  return 0;
}

//----- (02221AA8) --------------------------------------------------------
int __fastcall Function_2221aa8(int a1, int a2, uchar a3, int a4)
{
  int v4;
  int v5;
  uchar v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v12 = a4;
  v7 = Function_22234e4(a4, 0);
  LoadFromNARC_RGCN(7, v7, *(uint **)(v5 + 196), v6, 0, 0, 1, *(uint *)v5);
  v8 = Function_22234e4(v12, 1);
  Function_2003050(*(uint *)(v5 + 200), 7, v8, *(uint *)v5, 0, 32, 0x90u);
  Function_2019ebc(*(uint **)(v5 + 196), v6);
  v9 = 2;
  if ( Function_221fdd4(v5) == 1 )
  {
    v9 = 4;
  }
  else if ( Function_2221a54(v4, v5, 7) == 1 )
  {
    v9 = 3;
  }
  v10 = Function_22234e4(v12, v9);
  return LoadFromNARC_RCSN(7, v10, *(uint **)(v5 + 196), v6, 0, 0, 1, *(uint *)v5);
}

//----- (02221B54) --------------------------------------------------------
BOOL __fastcall Function_2221b54(int a1, int a2)
{
  return a2 == ((a1 << 16) & a2);
}

//----- (02221B64) --------------------------------------------------------
int __fastcall Function_2221b64(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v6;
  int result;
  int v8;
  int i;
  char v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = (int *)&v10;
  *(uint *)&v10 = 0x20000;
  v11 = 0x40000;
  v12 = 0x200000;
  v13 = 0x400000;
  v6 = 0;
  do
  {
    result = Function_2221b54(*(uint *)(v4 + 24), *v5);
    if ( result )
    {
      v8 = 0;
      for ( i = (uint)*v5 >> 16; i >= 2; ++v8 )
        i /= 2;
      result = ((int (__fastcall *)(int))*(&off_2238644 + v8))(v4);
    }
    ++v6;
    ++v5;
  }
  while ( v6 < 4 );
  return result;
}

//----- (02221BBC) --------------------------------------------------------
int *__fastcall Function_2221bbc(uint *a1)
{
  int v1;
  int *v2;
  int *v3;
  int *result;
  int v5;
  int v6;
  int *v7;

  v1 = (int)a1;
  v2 = (int *)malloc(*a1, 76);
  v3 = v2;
  if ( v2 )
  {
    Call_FillMemWithValue(v2, 0, 0x4Cu);
    *v3 = 0;
    *((uchar *)v3 + 5) = 0;
    v3[18] = v1;
    *((uchar *)v3 + 9) = 0;
    *((uchar *)v3 + 10) = 31;
    *((uchar *)v3 + 11) = 29;
    *((uchar *)v3 + 12) = 2;
    if ( Function_2220280(v1, 5) == 1 )
    {
      *((uchar *)v3 + 9) = 0;
      *((uchar *)v3 + 10) = 31;
      *((uchar *)v3 + 11) = 15;
      *((uchar *)v3 + 12) = 7;
    }
    if ( Function_2220280(v1, 5) == 2 )
    {
      *((uchar *)v3 + 9) = 7;
      *((uchar *)v3 + 10) = 15;
      *((uchar *)v3 + 11) = 29;
      *((uchar *)v3 + 12) = 2;
    }
    v5 = 0;
    v6 = v1;
    v7 = v3;
    do
    {
      ++v5;
      v7[7] = *(uint *)(v6 + 148);
      v6 += 4;
      ++v7;
    }
    while ( v5 < 10 );
    *(uchar *)(v1 + 380) = 1;
    result = v3;
  }
  else
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (02221C50) --------------------------------------------------------
int __fastcall Function_2221c50(int a1, int a2)
{
  int v2;
  int v3;
  uchar v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  uint v10;
  int v11;

  v2 = a2;
  v3 = *(uchar *)(a2 + 5);
  if ( *(uchar *)(a2 + 5) )
  {
    if ( v3 == 1 )
    {
      Function_2018898(*(uint *)(*(uint *)(a2 + 72) + 196), 3u, 2, 3);
      if ( Function_221fdd4(*(uint *)(v2 + 72)) != 1 )
        Function_2018898(*(uint *)(*(uint *)(v2 + 72) + 196), 3u, 0, 0);
      Function_2221aa8(v2, *(uint *)(v2 + 72), 3u, *(uint *)(v2 + 16));
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 8, *(uchar *)(v2 + 10), *(uchar *)(v2 + 9));
      Function_2221b64(v2, v5, v6, v7);
      ++*(uchar *)(v2 + 5);
    }
    else if ( v3 != 2 )
    {
      return 0;
    }
    v8 = *(uchar *)(v2 + 9);
    v9 = 0;
    if ( v8 >= *(uchar *)(v2 + 11) )
      v9 = 1;
    else
      *(uchar *)(v2 + 9) = v8 + 2;
    v10 = *(uchar *)(v2 + 10);
    if ( v10 <= *(uchar *)(v2 + 12) )
      ++v9;
    else
      *(uchar *)(v2 + 10) = v10 - 2;
    if ( v9 == 2 )
    {
      *(uchar *)(v2 + 9) = *(uchar *)(v2 + 11);
      *(uchar *)(v2 + 10) = *(uchar *)(v2 + 12);
      ++*(uchar *)(v2 + 5);
    }
    v11 = *(uchar *)(v2 + 10) | (*(uchar *)(v2 + 9) << 8);
    REG_BLDALPHA = _byteswap_ushort(*(ushort *)(v2 + 9));
    if ( *(uchar *)(v2 + 5) != 2 )
      return 0;
  }
  else
  {
    Function_2222590(*(uint *)(a2 + 72), 2);
    v4 = Function_2223428(*(uint *)(v2 + 72), 2);
    Function_2223428(*(uint *)(v2 + 72), 1);
    Function_2019060(3u, v4);
    Function_2019060(2u, v4);
    Function_2019120(2u, 1);
    ++*(uchar *)(v2 + 5);
  }
  return 1;
}

//----- (02221D50) --------------------------------------------------------
int __fastcall Function_2221d50(int a1, int a2)
{
  int v2;
  uint v3;
  uchar v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  uint v10;
  int *v11;
  int result;

  v2 = a2;
  v3 = *(uchar *)(a2 + 5);
  if ( v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2221D6A + v3) + 35790188);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2019120(2u, 1);
      ++*(uchar *)(v2 + 5);
      goto LABEL_5;
    case 1:
LABEL_5:
      v4 = Function_2223428(*(uint *)(v2 + 72), 2);
      Function_2223428(*(uint *)(v2 + 72), 1);
      Function_2019060(3u, v4);
      Function_2019060(2u, v4);
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 8, *(uchar *)(v2 + 9), *(uchar *)(v2 + 10));
      Function_2221b64(v2, v5, v6, v7);
      ++*(uchar *)(v2 + 5);
      goto LABEL_6;
    case 2:
LABEL_6:
      v8 = *(uchar *)(v2 + 9);
      v9 = 0;
      if ( v8 >= *(uchar *)(v2 + 11) )
        v9 = 1;
      else
        *(uchar *)(v2 + 9) = v8 + 2;
      v10 = *(uchar *)(v2 + 10);
      if ( v10 <= *(uchar *)(v2 + 12) )
        ++v9;
      else
        *(uchar *)(v2 + 10) = v10 - 2;
      if ( v9 == 2 )
      {
        *(uchar *)(v2 + 9) = *(uchar *)(v2 + 11) + 2;
        *(uchar *)(v2 + 10) = *(uchar *)(v2 + 12) - 2;
        ++*(uchar *)(v2 + 5);
      }
      REG_BLDALPHA = *(uchar *)(v2 + 9) | (ushort)(*(uchar *)(v2 + 10) << 8);
      goto LABEL_28;
    case 3:
      if ( (*(ushort *)(a2 + 68) & 1) == 1 )
        Function_2222338(*(uint *)(a2 + 72));
      if ( (uint)*(ushort *)(v2 + 68) << 30 >> 31 == 1 )
        Function_2222338(*(uint *)(v2 + 72));
      Function_2019184(*(uint *)(*(uint *)(v2 + 72) + 196), 3u, 0, 0);
      Function_2019184(*(uint *)(*(uint *)(v2 + 72) + 196), 3u, 3u, 0);
      Function_2018898(*(uint *)(*(uint *)(v2 + 72) + 196), 3u, 2, 4);
      if ( Function_221fdd4(*(uint *)(v2 + 72)) )
      {
        LoadFromNARC_RGCN(
          *(uint *)(*(uint *)(v2 + 72) + 388),
          *(uint *)(*(uint *)(v2 + 72) + 392),
          *(uint **)(*(uint *)(v2 + 72) + 196),
          3u,
          0,
          0,
          1,
          **(uint **)(v2 + 72));
        v11 = *(int **)(v2 + 72);
        Function_2003050(v11[50], v11[97], v11[99], *v11, 0, 32 * v11[102], v11[101]);
      }
      else
      {
        Function_2018898(*(uint *)(*(uint *)(v2 + 72) + 196), 3u, 0, 1);
        Function_2223460(*(uint *)(v2 + 72), 3);
        Function_2223488(*(uint *)(v2 + 72));
      }
      LoadFromNARC_RCSN(
        *(uint *)(*(uint *)(v2 + 72) + 388),
        *(uint *)(*(uint *)(v2 + 72) + 400),
        *(uint **)(*(uint *)(v2 + 72) + 196),
        3u,
        0,
        0,
        1,
        **(uint **)(v2 + 72));
      ++*(uchar *)(v2 + 5);
      goto LABEL_28;
    case 4:
      if ( Function_221fdd4(*(uint *)(a2 + 72)) )
        ((void (*)(void))dword_22413D8[0])();
      else
        ((void (*)(void))dword_223F9F0[0])();
      Function_2222664(*(uint *)(v2 + 72), 2);
      ++*(uchar *)(v2 + 5);
LABEL_28:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02221F44) --------------------------------------------------------
int __fastcall Function_2221f44(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  if ( !*(uchar *)(a2 + 5) )
  {
    v3 = *(uint *)(a2 + 72);
    if ( *(uchar *)(a2 + 13) )
    {
      Function_2003178(*(uint *)(v3 + 200), 1, *(uint *)(v3 + 412) & 0xFFFF);
      Function_2003a2c(*(uint *)(*(uint *)(v2 + 72) + 200), 0, 0x200u, 0x10u, 0xFFFFu);
    }
    else
    {
      Function_2003178(*(uint *)(v3 + 200), 1, *(uint *)(v3 + 412) & 0xFFFF);
      Function_2003a2c(*(uint *)(*(uint *)(v2 + 72) + 200), 0, 0x200u, 0x10u, 0);
    }
    ++*(uchar *)(v2 + 5);
    goto LABEL_8;
  }
  if ( *(uchar *)(a2 + 5) == 1 )
  {
LABEL_8:
    if ( !Function_200384c(*(uint *)(*(uint *)(v2 + 72) + 200)) )
    {
      Function_2018898(*(uint *)(*(uint *)(v2 + 72) + 196), 3u, 0, 0);
      Function_2221aa8(v2, *(uint *)(v2 + 72), 3u, *(uint *)(v2 + 16));
      *(uchar *)(v2 + 13);
      Function_2003178(*(uint *)(*(uint *)(v2 + 72) + 200), 1, 512);
      Function_2221b64(v2, v4, v5, v6);
      *(uchar *)(*(uint *)(v2 + 72) + 380) = 2;
      ++*(uchar *)(v2 + 5);
    }
    return 1;
  }
  if ( !Function_200384c(*(uint *)(*(uint *)(a2 + 72) + 200)) )
    return 0;
  return 1;
}

//----- (0222206C) --------------------------------------------------------
int __fastcall Function_222206c(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int *v6;

  v4 = a2;
  v5 = *(uchar *)(a2 + 5);
  if ( v5 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_2222086 + v5) + 35790984);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_2221b64(a2, a2, a3, a4);
      ++*(uchar *)(v4 + 5);
      goto LABEL_5;
    case 1:
LABEL_5:
      if ( *(uchar *)(v4 + 13) )
      {
        Function_2003178(*(uint *)(*(uint *)(v4 + 72) + 200), 1, 512);
        Function_2003a2c(
          *(uint *)(*(uint *)(v4 + 72) + 200),
          0,
          *(uint *)(*(uint *)(v4 + 72) + 412) & 0xFFFF,
          0x10u,
          0xFFFFu);
      }
      else
      {
        Function_2003178(*(uint *)(*(uint *)(v4 + 72) + 200), 1, 512);
        Function_2003a2c(
          *(uint *)(*(uint *)(v4 + 72) + 200),
          0,
          *(uint *)(*(uint *)(v4 + 72) + 412) & 0xFFFF,
          0x10u,
          0);
      }
      ++*(uchar *)(v4 + 5);
      goto LABEL_9;
    case 2:
LABEL_9:
      if ( Function_200384c(*(uint *)(*(uint *)(v4 + 72) + 200)) )
        return 1;
      if ( (*(ushort *)(v4 + 68) & 1) == 1 )
        Function_2222338(*(uint *)(v4 + 72));
      if ( (uint)*(ushort *)(v4 + 68) << 30 >> 31 == 1 )
        Function_2222338(*(uint *)(v4 + 72));
      Function_2019120(3u, 0);
      if ( Function_221fdd4(*(uint *)(v4 + 72)) )
      {
        LoadFromNARC_RGCN(
          *(uint *)(*(uint *)(v4 + 72) + 388),
          *(uint *)(*(uint *)(v4 + 72) + 392),
          *(uint **)(*(uint *)(v4 + 72) + 196),
          3u,
          0,
          0,
          1,
          **(uint **)(v4 + 72));
        v6 = *(int **)(v4 + 72);
        Function_2003050(v6[50], v6[97], v6[99], *v6, 0, 32 * v6[102], v6[101]);
      }
      else
      {
        Function_2018898(*(uint *)(*(uint *)(v4 + 72) + 196), 3u, 0, 1);
        Function_2223460(*(uint *)(v4 + 72), 3);
        Function_2223488(*(uint *)(v4 + 72));
      }
      LoadFromNARC_RCSN(
        *(uint *)(*(uint *)(v4 + 72) + 388),
        *(uint *)(*(uint *)(v4 + 72) + 400),
        *(uint **)(*(uint *)(v4 + 72) + 196),
        3u,
        0,
        0,
        1,
        **(uint **)(v4 + 72));
      Function_2019120(3u, 1);
      ++*(uchar *)(v4 + 5);
      goto LABEL_18;
    case 3:
LABEL_18:
      Function_2019184(*(uint *)(*(uint *)(v4 + 72) + 196), 3u, 0, 0);
      Function_2019184(*(uint *)(*(uint *)(v4 + 72) + 196), 3u, 3u, 0);
      *(uchar *)(v4 + 13);
      Function_2003178(*(uint *)(*(uint *)(v4 + 72) + 200), 1, *(uint *)(*(uint *)(v4 + 72) + 412) & 0xFFFF);
      ++*(uchar *)(v4 + 5);
      break;
    default:
      break;
  }
  if ( Function_200384c(*(uint *)(*(uint *)(v4 + 72) + 200)) )
    return 1;
  *(uchar *)(*(uint *)(v4 + 72) + 380) = 2;
  ++*(uchar *)(v4 + 5);
  return 0;
}

//----- (022222A4) --------------------------------------------------------
int __fastcall Function_22222a4(int a1, int a2, int a3, int a4)
{
  Function_2221b64(a2, a2, a3, a4);
  return 0;
}

//----- (022222B0) --------------------------------------------------------
int __fastcall Function_22222b0(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a2;
  Function_2221b64(a2, a2, a3, a4);
  if ( (*(ushort *)(v4 + 68) & 1) == 1 )
    Function_2222338(*(uint *)(v4 + 72));
  return 0;
}

//----- (022222D4) --------------------------------------------------------
void __fastcall Function_22222d4(int *a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 24) == 1 )
  {
    free(a2);
    Call_RemoveTaskFromTaskList(v3);
  }
  else
  {
    *(ushort *)(a2 + 4) += *(ushort *)(a2 + 8);
    *(ushort *)(a2 + 6) += *(ushort *)(a2 + 10);
    if ( *(ushort *)(a2 + 8) )
      Function_2019184(*(uint *)a2, *(uint *)(a2 + 12) & 0xFF, 0, *(short *)(a2 + 4));
    if ( *(ushort *)(v2 + 10) )
      Function_2019184(*(uint *)v2, *(uint *)(v2 + 12) & 0xFF, 3u, *(short *)(v2 + 6));
  }
}

//----- (02222338) --------------------------------------------------------
int __fastcall Function_2222338(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  result = 384;
  v3 = *(uint *)(v1 + 384);
  if ( v3 )
  {
    result = 1;
    *(uint *)(v3 + 24) = 1;
  }
  return result;
}

//----- (02222354) --------------------------------------------------------
int __fastcall Function_2222354(int a1)
{
  return *(uint *)(a1 + 412);
}

//----- (0222235C) --------------------------------------------------------
int Function_222235c()
{
  return 0;
}

//----- (02222360) --------------------------------------------------------
int __fastcall Function_2222360(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = malloc(**(uint **)(a1 + 72), 32);
  *(uint *)v2 = *(uint *)(*(uint *)(v1 + 72) + 196);
  *(ushort *)(v2 + 4) = *(uint *)(*(uint *)(v1 + 72) + 156);
  *(ushort *)(v2 + 6) = *(uint *)(*(uint *)(v1 + 72) + 160);
  *(ushort *)(v2 + 8) = *(uint *)(*(uint *)(v1 + 72) + 148);
  *(ushort *)(v2 + 10) = *(uint *)(*(uint *)(v1 + 72) + 152);
  *(uint *)(v2 + 12) = 3;
  *(uint *)(v2 + 16) = 3;
  if ( Function_2221a54(v1, *(uint *)(v1 + 72), 6) == 1 )
  {
    *(ushort *)(v2 + 8) = -*(ushort *)(v2 + 8);
    *(ushort *)(v2 + 10) = -*(ushort *)(v2 + 10);
    *(ushort *)(v2 + 4) = -*(ushort *)(v2 + 4);
    *(ushort *)(v2 + 6) = -*(ushort *)(v2 + 6);
  }
  *(uint *)(v2 + 20) = 1;
  *(uint *)(v2 + 24) = 0;
  *(uint *)(*(uint *)(v1 + 72) + 384) = v2;
  *(ushort *)(v1 + 68) = *(ushort *)(v1 + 68) & 0xFFFE | 1;
  AddTaskToTaskList1((int)Function_22222d4, v2, 0x1001u);
  return 0;
}

//----- (0222240C) --------------------------------------------------------
int __fastcall Function_222240c(int a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  short v7;
  short *v8;
  int v9;
  int v11;
  int v12;

  v1 = *(uint **)(a1 + 72);
  v11 = a1;
  v2 = malloc(*v1, 32);
  *(uint *)(v2 + 28) = malloc(*v1, 196);
  v1[96] = v2;
  *(ushort *)(v11 + 68) |= 2u;
  *(uint *)(v2 + 24) = 0;
  v3 = Function_22233ec(v1);
  v4 = Function_22266f0(v3);
  v5 = Function_22266e8();
  v6 = Function_2226544(v4, v5, *v1);
  v7 = 0;
  v8 = &word_2238660;
  *(uint *)(*(uint *)(v2 + 28) + 192) = v6;
  v12 = 0;
  v9 = 0;
  do
  {
    *(ushort *)(*(uint *)(v2 + 28) + v9) = v7;
    *(ushort *)(*(uint *)(v2 + 28) + v9 + 2) = *(ushort *)(*(uint *)(v2 + 28) + v9) + 8;
    *(ushort *)(*(uint *)(v2 + 28) + v9 + 4) = *v8;
    *(ushort *)(*(uint *)(v2 + 28) + v9 + 6) = 0;
    *(uint *)(*(uint *)(v2 + 28) + v9 + 8) = Function_22266e8();
    if ( Function_2221a54(v11, *(uint *)(v11 + 72), 6) == 1 )
      *(ushort *)(*(uint *)(v2 + 28) + v9 + 4) = -*(ushort *)(*(uint *)(v2 + 28) + v9 + 4);
    v7 += 8;
    v9 += 12;
    ++v8;
    ++v12;
  }
  while ( v12 < 16 );
  AddTaskToTaskList1((int)Function_22224f8, v2, 0x1000u);
  return 0;
}

//----- (022224E4) --------------------------------------------------------
int __fastcall Function_22224e4(int a1)
{
  *(ushort *)(a1 + 68) |= 2u;
  return 0;
}

//----- (022224F8) --------------------------------------------------------
int __fastcall Function_22224f8(int *a1, int a2)
{
  int v2;
  int *v3;
  short *v4;
  int result;
  int v6;
  uint *v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = a1;
  v4 = *(short **)(a2 + 28);
  if ( *(uint *)(a2 + 24) == 1 )
  {
    Function_22265c0(*((uint *)v4 + 48));
    free(*(uint *)(v2 + 28));
    free(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  else
  {
    v8 = Function_22265e4(*((uint *)v4 + 48));
    v9 = 0;
    do
    {
      v4[3] += v4[2];
      v6 = *v4;
      if ( v6 < v4[1] )
      {
        v7 = (uint *)(v8 + 4 * v6);
        do
        {
          *v7 = Function_22266e8(
                  ((short)*((uint *)v4 + 2) + v4[3]) & 0xFFFF,
                  (*((uint *)v4 + 2) >> 16) & 0xFFFF);
          ++v7;
          ++v6;
        }
        while ( v6 < v4[1] );
      }
      v4 += 6;
      result = v9 + 1;
      v9 = result;
    }
    while ( result < 16 );
  }
  return result;
}

//----- (02222590) --------------------------------------------------------
int __fastcall Function_2222590(int *a1, int a2)
{
  int v2;
  int *v3;
  uchar v4;

  v2 = a2;
  v3 = a1;
  v4 = Function_2223428(a1, 2);
  Function_2019060((uchar)v2, v4);
  Function_2019120((uchar)v2, 0);
  if ( Function_221fdd4((int)v3) != 1 )
    Function_2018898(v3[49], (uchar)v2, 0, 1);
  Function_2018898(v3[49], (uchar)v2, 2, 4);
  Function_2019ebc((uint *)v3[49], (uchar)v2);
  if ( Function_221fdd4((int)v3) == 1 )
    LoadFromNARC_RGCN(v3[97], v3[98], (uint *)v3[49], v2, 0, 0, 1, *v3);
  else
    Function_2223460(v3, v2);
  return LoadFromNARC_RCSN(v3[97], v3[100], (uint *)v3[49], v2, 0, 0, 1, *v3);
}

//----- (02222664) --------------------------------------------------------
int __fastcall Function_2222664(int a1, uchar a2)
{
  uchar v2;
  int v3;
  uchar v4;

  v2 = a2;
  v3 = a1;
  v4 = Function_2223428(a1, 1);
  Function_2019060(v2, v4);
  if ( Function_221fdd4(v3) != 1 )
    Function_2018898(*(uint *)(v3 + 196), v2, 0, 0);
  Function_2018898(*(uint *)(v3 + 196), v2, 2, 3);
  return Function_2019ebc(*(uint **)(v3 + 196), v2);
}

//----- (022226D0) --------------------------------------------------------
int __fastcall Function_22226d0(int a1)
{
  *(ushort *)(a1 + 68) = *(ushort *)(a1 + 68) & 0xFFFE | 1;
  return 0;
}

//----- (022226E8) --------------------------------------------------------
int __fastcall Function_22226e8(int a1)
{
  Function_2222338(*(uint *)(a1 + 72));
  return 0;
}

//----- (022226F4) --------------------------------------------------------
int __fastcall Function_22226f4(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = ((int (*)(void))*(&off_22385CC + *(uint *)(a2 + 20)))();
  if ( !result )
  {
    *(uchar *)(*(uint *)(v2 + 72) + 380) = 0;
    free(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (02222724) --------------------------------------------------------
uint *__fastcall We_Cmd10(uint *a1)
{
  int v1;
  int *v2;
  int *v3;
  int *v4;
  int v5;

  v1 = (int)a1;
  v2 = Function_2221bbc(a1);
  *((uchar *)v2 + 13) = Function_2220280(v1, 4);
  v3 = (int *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v3;
  v2[4] = *v3;
  v4 = (int *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v4;
  v5 = *v4;
  *(uint *)(v1 + 24) = v4 + 1;
  v2[5] = (ushort)v5;
  v2[6] = (v5 & 0xFFFF0000) >> 16;
  return AddTaskToTaskList1((int)Function_22226f4, (int)v2, 0x44Cu);
}

//----- (02222774) --------------------------------------------------------
int __fastcall Function_2222774(int result)
{
  int *v1;
  int v2;
  int v3;
  short v4;

  v1 = (int *)(*(uint *)(result + 24) + 4);
  *(uint *)(result + 24) = v1;
  v2 = *v1;
  *(uint *)(result + 24) = v1 + 1;
  v3 = (int)(v1 + 2);
  v4 = v1[1];
  *(uint *)(result + 24) = v3;
  switch ( (uchar)v3 )
  {
    case 0:
      result = *(uint *)(result + 384);
      *(ushort *)(result + 8) = v4;
      break;
    case 1:
      result = *(uint *)(result + 384);
      *(ushort *)(result + 10) = v4;
      break;
    case 2:
      result = *(uint *)(result + 384);
      *(ushort *)(result + 4) = v4;
      break;
    case 3:
      result = *(uint *)(result + 384);
      *(ushort *)(result + 4) = v4;
      break;
    default:
      return result;
  }
  return result;
}

//----- (022227CC) --------------------------------------------------------
uint *__fastcall We_Cmd12(uint *a1)
{
  int v1;
  int *v2;
  int *v3;
  int *v4;
  int v5;

  v1 = (int)a1;
  v2 = Function_2221bbc(a1);
  *((uchar *)v2 + 13) = Function_2220280(v1, 4);
  v3 = (int *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v3;
  v2[4] = *v3;
  v4 = (int *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v4;
  v5 = *v4;
  *(uint *)(v1 + 24) = v4 + 1;
  v2[5] = (ushort)v5 + 3;
  v2[6] = (v5 & 0xFFFF0000) >> 16;
  return AddTaskToTaskList1((int)Function_22226f4, (int)v2, 0x44Cu);
}

//----- (02222820) --------------------------------------------------------
uchar *__fastcall Function_2222820(int a1)
{
  uchar *result;

  if ( *(uchar *)(a1 + 380) == 2 )
  {
    *(uint *)(a1 + 24) += 4;
    result = (uchar *)(a1 + 141);
    *result = 0;
  }
  else
  {
    result = (uchar *)(a1 + 141);
    *result = 1;
  }
  return result;
}

//----- (02222840) --------------------------------------------------------
uchar *__fastcall We_Cmd14(int a1)
{
  uchar *result;

  if ( *(uchar *)(a1 + 380) )
  {
    result = (uchar *)(a1 + 141);
    *result = 1;
  }
  else
  {
    *(uint *)(a1 + 24) += 4;
    result = (uchar *)(a1 + 141);
    *result = 0;
  }
  return result;
}

//----- (02222860) --------------------------------------------------------
int __fastcall Function_2222860(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(v1 + 24) = v2;
  v3 = *v2;
  *(uint *)(v1 + 24) = v2 + 1;
  v4 = Function_22234e4(v3, 0);
  LoadFromNARC_RGCN(7, v4, *(uint **)(v1 + 196), 3u, 0, 0, 1, *(uint *)v1);
  v5 = Function_22234e4(v3, 1);
  Call_LoadFromNARC_RLCN(7, v5, 0, 0, 0, *(uint *)v1);
  v6 = Function_22234e4(v3, 2);
  return LoadFromNARC_RCSN(7, v6, *(uint **)(v1 + 196), 3u, 0, 0, 1, *(uint *)v1);
}

//----- (022228DC) --------------------------------------------------------
uint *__fastcall Function_22228dc(uint *a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  int v5;
  int v7;

  v1 = (int)a1;
  v2 = Function_2221bbc(a1);
  v3 = (int *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v3;
  v7 = *v3;
  *(uint *)(v1 + 24) = v3 + 1;
  v4 = v3[1];
  *(uint *)(v1 + 24) = v3 + 2;
  v5 = v3[2];
  *(uint *)(v1 + 24) = v3 + 3;
  if ( Function_221fdd4(v1) == 1 )
  {
    v2[4] = v5;
  }
  else if ( Function_223525c(v1, *(ushort *)(*(uint *)(v1 + 192) + 22)) == 3 )
  {
    v2[4] = v4;
  }
  else
  {
    v2[4] = v7;
  }
  return AddTaskToTaskList1((int)Function_22226f4, (int)v2, 0x44Cu);
}

//----- (0222293C) --------------------------------------------------------
void Function_222293c()
{
  ;
}

//----- (02222940) --------------------------------------------------------
void Function_2222940()
{
  ;
}

//----- (02222944) --------------------------------------------------------
void Function_2222944()
{
  ;
}

//----- (02222948) --------------------------------------------------------
void Function_2222948()
{
  ;
}

//----- (0222294C) --------------------------------------------------------
void Function_222294c()
{
  ;
}

//----- (02222950) --------------------------------------------------------
int __fastcall Function_2222950(int a1)
{
  int *v1;
  int v2;

  v1 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  v2 = *v1;
  *(uint *)(a1 + 24) = v1 + 1;
  return Function_2005748((ushort)v2);
}

//----- (02222968) --------------------------------------------------------
int __fastcall Function_2222968(int a1)
{
  int *v1;
  int v2;

  v1 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  v2 = *v1;
  *(uint *)(a1 + 24) = v1 + 1;
  return Function_20057a4((ushort)v2, 0);
}

//----- (02222984) --------------------------------------------------------
uint *__fastcall Function_2222984(int a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = (uint *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  v2 = *v1 & 0xFFFF;
  v3 = (int)(v1 + 1);
  *(uint *)(a1 + 24) = v1 + 1;
  v4 = v1[1];
  *(uint *)(a1 + 24) = v3 + 4;
  v5 = Function_222317c();
  Function_2005748(v2);
  return Function_20057fc(v2, 0xFFFF, v5);
}

//----- (022229BC) --------------------------------------------------------
uint *__fastcall Function_22229bc(int a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;

  v1 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  v2 = *v1;
  *(uint *)(a1 + 24) = v1 + 1;
  v3 = Function_222317c();
  return Function_2005818(v3, v4);
}

//----- (022229D8) --------------------------------------------------------
uint *__fastcall We_Cmd18(uint *a1)
{
  int v1;
  int *v2;
  uint *v3;
  int *v4;
  int *v5;
  int *v6;
  uint *v7;

  v1 = (int)a1;
  v2 = Function_2220314(a1);
  Call_FillMemWithValue(v2, 0, 0x3Cu);
  *(uchar *)v2 = 1;
  v3 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v3;
  *((ushort *)v2 + 13) = *v3;
  v4 = (int *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v4;
  v2[2] = *v4;
  v5 = (int *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v5;
  v2[3] = *v5;
  v6 = (int *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v6;
  v2[4] = *v6;
  v7 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v7;
  *((uchar *)v2 + 3) = *v7;
  *(uint *)(v1 + 24) += 4;
  v2[2] = Function_222317c(v1, (char)v2[2]);
  v2[3] = Function_222317c(v1, (char)v2[3]);
  v2[4] = Function_2223234((char)v2[2], (char)v2[3], (char)v2[4]);
  Function_2005748(*((ushort *)v2 + 13));
  Function_20057fc(*((ushort *)v2 + 13), 0xFFFF, v2[2]);
  return Function_2220344(v1, (int)v2);
}

//----- (02222A78) --------------------------------------------------------
uint *__fastcall Function_2222a78(uint *a1)
{
  int v1;
  int *v2;
  uint *v3;
  uint *v4;
  uint *v5;
  uint *v6;
  uint *v7;

  v1 = (int)a1;
  v2 = Function_2220314(a1);
  Call_FillMemWithValue(v2, 0, 0x3Cu);
  *(uchar *)v2 = 2;
  v3 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v3;
  *((ushort *)v2 + 13) = *v3;
  v4 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v4;
  v2[2] = (char)*v4;
  v5 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v5;
  v2[3] = (char)*v5;
  v6 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v6;
  v2[4] = (char)*v6;
  v7 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v7;
  *((uchar *)v2 + 3) = *v7;
  *(uint *)(v1 + 24) += 4;
  Function_2005748(*((ushort *)v2 + 13));
  Function_20057fc(*((ushort *)v2 + 13), 0xFFFF, v2[2]);
  return Function_2220344(v1, (int)v2);
}

//----- (02222AF0) --------------------------------------------------------
uint *__fastcall Function_2222af0(uint *a1)
{
  int v1;
  int *v2;
  uint *v3;
  uint *v4;
  uint *v5;
  uint *v6;
  uint *v7;

  v1 = (int)a1;
  v2 = Function_2220314(a1);
  Call_FillMemWithValue(v2, 0, 0x3Cu);
  *(uchar *)v2 = 1;
  v3 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v3;
  *((ushort *)v2 + 13) = *v3;
  v4 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v4;
  v2[2] = (char)*v4;
  v5 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v5;
  v2[3] = (char)*v5;
  v6 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v6;
  v2[4] = (char)*v6;
  v7 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v7;
  *((uchar *)v2 + 3) = *v7;
  *(uint *)(v1 + 24) += 4;
  v2[2] = Function_222317c(v1, (char)v2[2]);
  v2[3] = Function_222317c(v1, (char)v2[3]);
  v2[4] = Function_222317c(v1, (char)v2[4]);
  Function_2005748(*((ushort *)v2 + 13));
  Function_20057fc(*((ushort *)v2 + 13), 0xFFFF, v2[2]);
  return Function_2220344(v1, (int)v2);
}

//----- (02222B94) --------------------------------------------------------
uint *__fastcall Function_2222b94(uint *a1)
{
  int v1;
  int *v2;
  uint *v3;
  uint *v4;
  uint *v5;
  uint *v6;

  v1 = (int)a1;
  v2 = Function_2220314(a1);
  Call_FillMemWithValue(v2, 0, 0x3Cu);
  *(uchar *)v2 = 4;
  v3 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v3;
  *((ushort *)v2 + 13) = *v3;
  v4 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v4;
  v2[5] = (char)*v4;
  v5 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v5;
  *((uchar *)v2 + 3) = *v5;
  v6 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v6;
  *((uchar *)v2 + 24) = *v6;
  *(uint *)(v1 + 24) += 4;
  *((uchar *)v2 + 4) = *((uchar *)v2 + 3);
  v2[5] = Function_222317c(v1, (char)v2[5]);
  return Function_2220344(v1, (int)v2);
}

//----- (02222BF8) --------------------------------------------------------
uint *__fastcall We_Cmd1a(uint *a1)
{
  int v1;
  int *v2;
  uint *v3;
  uint *v4;
  uint *v5;

  v1 = (int)a1;
  v2 = Function_2220314(a1);
  Call_FillMemWithValue(v2, 0, 0x3Cu);
  *(uchar *)v2 = 5;
  v3 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v3;
  *((ushort *)v2 + 13) = *v3;
  v4 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v4;
  v2[5] = (char)*v4;
  v5 = (uint *)(*(uint *)(v1 + 24) + 4);
  *(uint *)(v1 + 24) = v5;
  *((uchar *)v2 + 3) = *v5;
  *(uint *)(v1 + 24) += 4;
  v2[5] = Function_222317c(v1, (char)v2[5]);
  return Function_2220344(v1, (int)v2);
}

//----- (02222C50) --------------------------------------------------------
void Function_2222c50()
{
  ;
}

//----- (02222C54) --------------------------------------------------------
int __fastcall Function_2222c54(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(ushort *)(a1 + 144) )
  {
    *(uchar *)(a1 + 141) = 1;
    result = 381;
    *(uchar *)(v1 + 381) = 0;
  }
  else if ( Function_20057e0() )
  {
    result = 381;
    if ( (uchar)++*(uchar *)(v1 + 381) <= 0x5Au )
    {
      result = 1;
      *(uchar *)(v1 + 141) = 1;
    }
    else
    {
      *(uchar *)(v1 + 381) = 0;
    }
  }
  else
  {
    *(uchar *)(v1 + 141) = 0;
    *(uchar *)(v1 + 381) = 0;
    result = *(uint *)(v1 + 24) + 4;
    *(uint *)(v1 + 24) = result;
  }
  return result;
}

//----- (02222CAC) --------------------------------------------------------
int *__fastcall Function_2222cac(int a1)
{
  int *v1;
  int v2;
  int v3;

  v1 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  v2 = *v1;
  ++v1;
  *(uint *)(a1 + 24) = v1;
  v3 = *v1;
  *(uint *)(a1 + 24) = v1 + 1;
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 1, 2, (ushort)v2, (ushort)v3);
}

//----- (02222CDC) --------------------------------------------------------
int *Function_2222cdc()
{
  return Function_2220474();
}

//----- (02222CE4) --------------------------------------------------------
void Function_2222ce4()
{
  ;
}

//----- (02222CE8) --------------------------------------------------------
int __fastcall Function_2222ce8(int a1, int a2, int a3, int a4)
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
  char *v13;
  char v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(v4 + 24) = v5;
  v6 = *v5;
  ++v5;
  *(uint *)(v4 + 24) = v5;
  v7 = *v5;
  v8 = 4 * v6;
  v9 = v4 + 204;
  *(uint *)(v4 + 24) = v5 + 1;
  if ( *(uint *)(v4 + 204 + 4 * v6) )
    ErrorHandler();
  *(uint *)(v9 + v8) = Function_200c704(*(uint **)(*(uint *)(v4 + 192) + 172));
  if ( !*(uint *)(v9 + v8) )
    ErrorHandler();
  Function_200c7c0(*(int **)(*(uint *)(v4 + 192) + 172), *(int ***)(v9 + v8), v7);
  v10 = Function_200c738(*(uint *)(*(uint *)(v4 + 192) + 172));
  Function_200964c(v10, 0, 1114112, v11);
  v12 = 0;
  v13 = &v15;
  do
  {
    ++v12;
    *(uint *)v13 = **(uint **)(v4 + 24);
    v13 += 4;
    *(uint *)(v4 + 24) += 4;
  }
  while ( v12 < 6 );
  return Function_200cb30(*(uint **)(*(uint *)(v4 + 192) + 172), *(uint *)(v9 + v8), (int *)&v15);
}

//----- (02222D84) --------------------------------------------------------
BOOL __fastcall Function_2222d84(uint *a1)
{
  uint *v1;
  uint *v2;
  uint v3;
  uint v4;

  v1 = a1;
  v2 = (uint *)(a1[6] + 4);
  v1[6] = v2;
  v3 = *v2;
  ++v2;
  v1[6] = v2;
  v4 = *v2;
  v1[6] = v2 + 1;
  return Function_200cc3c(*(uint **)(v1[48] + 172), v1[v3 + 51], v1[107], v4, 1, 1, v4 + 5000);
}

//----- (02222DCC) --------------------------------------------------------
int __fastcall Function_2222dcc(uint *a1)
{
  uint *v1;
  uint *v2;
  uint v3;
  uint v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = (uint *)(a1[6] + 4);
  v1[6] = v2;
  v3 = *v2;
  ++v2;
  v1[6] = v2;
  v4 = *v2;
  v5 = (int)(v2 + 1);
  v1[6] = v2 + 1;
  v6 = v2[1];
  v1[6] = v5 + 4;
  return Function_200cdc4(v1[50], 2u, *(uint **)(v1[48] + 172), v1[v3 + 51], v1[108], v4, 0, 1, v6, v4 + 5000);
}

//----- (02222E2C) --------------------------------------------------------
int __fastcall Function_2222e2c(uint *a1)
{
  uint *v1;
  uint *v2;
  uint v3;
  uint v4;

  v1 = a1;
  v2 = (uint *)(a1[6] + 4);
  v1[6] = v2;
  v3 = *v2;
  ++v2;
  v1[6] = v2;
  v4 = *v2;
  v1[6] = v2 + 1;
  return Function_200ce24(*(uint **)(v1[48] + 172), v1[v3 + 51], v1[109], v4, 1, v4 + 5000);
}

//----- (02222E74) --------------------------------------------------------
int __fastcall Function_2222e74(uint *a1)
{
  uint *v1;
  uint *v2;
  uint v3;
  uint v4;

  v1 = a1;
  v2 = (uint *)(a1[6] + 4);
  v1[6] = v2;
  v3 = *v2;
  ++v2;
  v1[6] = v2;
  v4 = *v2;
  v1[6] = v2 + 1;
  return Function_200ce54(*(uint **)(v1[48] + 172), v1[v3 + 51], v1[110], v4, 1, v4 + 5000);
}

//----- (02222EBC) --------------------------------------------------------
int __fastcall Function_2222ebc(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  short *v9;
  short *v10;
  uint *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint *v21;
  int (__fastcall *v22)(int, uint, uint, int *);
  int v24;
  int *v25;
  short v26;
  short v27;
  short v28;
  short v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;

  v35 = a4;
  v4 = a1;
  v5 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v5;
  v6 = *v5;
  *(uint *)(a1 + 24) = v5 + 1;
  v24 = v5[1];
  *(uint *)(a1 + 24) = v5 + 2;
  v7 = Function_2220248(a1);
  v26 = Function_22258e0(v4, v7, 0);
  v27 = Function_22258e0(v4, v7, 1);
  v8 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 100;
  v32 = 1;
  v33 = 1;
  v31 = 0;
  v34 = 0;
  v9 = &v26;
  do
  {
    ++v8;
    *((uint *)v9 + 5) = **(uint **)(v4 + 24) + 5000;
    v9 += 2;
    *(uint *)(v4 + 24) += 4;
  }
  while ( v8 < 6 );
  v10 = &v26;
  v11 = (uint *)(v4 + 260);
  v12 = 6;
  do
  {
    v13 = *(uint *)v10;
    v14 = *((uint *)v10 + 1);
    v10 += 4;
    *v11 = v13;
    v11[1] = v14;
    v11 += 2;
    --v12;
  }
  while ( v12 );
  v15 = 4 * v6;
  *v11 = *(uint *)v10;
  v25 = Function_200ce6c(*(uint **)(*(uint *)(v4 + 192) + 172), *(uint *)(v4 + 204 + 4 * v6), &v26);
  v16 = *(int **)(v4 + 24);
  v17 = *v16;
  v18 = 0;
  *(uint *)(v4 + 24) = v16 + 1;
  if ( v17 > 0 )
  {
    v19 = v4;
    do
    {
      ++v18;
      *(uint *)(v19 + 148) = **(uint **)(v4 + 24);
      v19 += 4;
      *(uint *)(v4 + 24) += 4;
    }
    while ( v18 < v17 );
  }
  if ( v18 < 10 )
  {
    v20 = v4 + 4 * v18;
    do
    {
      v21 = (uint *)(v20 + 148);
      ++v18;
      v20 += 4;
      *v21 = 0;
    }
    while ( v18 < 10 );
  }
  v22 = (int (__fastcall *)(int, uint, uint, int *))Function_22269ac(v24);
  return v22(v4, *(uint *)(*(uint *)(v4 + 192) + 172), *(uint *)(v4 + 204 + v15), v25);
}

//----- (02222FC8) --------------------------------------------------------
uint __fastcall Function_2222fc8(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  short *v7;
  short *v8;
  uint *v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int *v15;
  uint result;
  short v17;
  short v18;
  short v19;
  short v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v1 = a1;
  v2 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v2;
  v3 = *v2;
  ++v2;
  *(uint *)(a1 + 24) = v2;
  v4 = *v2;
  *(uint *)(a1 + 24) = v2 + 1;
  v5 = Function_2220248(a1);
  v17 = Function_22258e0(v1, v5, 0);
  v18 = Function_22258e0(v1, v5, 1);
  v6 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 100;
  v23 = 1;
  v24 = 1;
  v22 = 0;
  v25 = 0;
  v7 = &v17;
  do
  {
    ++v6;
    *((uint *)v7 + 5) = **(uint **)(v1 + 24) + 5000;
    v7 += 2;
    *(uint *)(v1 + 24) += 4;
  }
  while ( v6 < 6 );
  v8 = &v17;
  v9 = (uint *)(v1 + 260);
  v10 = 6;
  do
  {
    v11 = *(uint *)v8;
    v12 = *((uint *)v8 + 1);
    v8 += 4;
    *v9 = v11;
    v9[1] = v12;
    v9 += 2;
    --v10;
  }
  while ( v10 );
  *v9 = *(uint *)v8;
  v13 = Function_200ce6c(*(uint **)(*(uint *)(v1 + 192) + 172), *(uint *)(v1 + 4 * v3 + 204), &v17);
  v14 = v1 + 220;
  v15 = v13;
  result = *(uint *)(v14 + 4 * v4);
  if ( result )
    result = ErrorHandler();
  *(uint *)(v14 + 4 * v4) = v15;
  return result;
}

//----- (0222307C) --------------------------------------------------------
int __fastcall Function_222307c(int a1)
{
  uint *v1;
  int v2;
  int v3;
  int **v4;
  int result;

  v1 = (uint *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  v2 = a1 + 204;
  v3 = 4 * *v1;
  *(uint *)(a1 + 24) = v1 + 1;
  v4 = *(int ***)(a1 + 204 + v3);
  if ( v4 )
    Function_200d0b0(*(uint *)(*(uint *)(a1 + 192) + 172), v4);
  result = 0;
  *(uint *)(v2 + v3) = 0;
  return result;
}

//----- (022230A8) --------------------------------------------------------
uint __fastcall Function_22230a8(int a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;

  v1 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v1;
  v2 = *v1;
  v3 = (int)(v1 + 1);
  *(uint *)(a1 + 24) = v1 + 1;
  v4 = v1[1];
  *(uint *)(a1 + 24) = v3 + 4;
  return Function_200d3f4(*(uint **)(a1 + 4 * v2 + 316), v4);
}

//----- (022230CC) --------------------------------------------------------
uint We_Cmd37_Error()
{
  return ErrorHandler();
}

//----- (022230D4) --------------------------------------------------------
int __fastcall Function_22230d4(int *a1)
{
  int *v1;
  uint *v2;
  uint v3;
  int v4;
  uint *v5;
  uint v6;
  int v7;

  v1 = a1;
  v2 = (uint *)(a1[6] + 4);
  a1[6] = (int)v2;
  v3 = *v2;
  ++v2;
  a1[6] = (int)v2;
  v4 = Function_222317c(a1, (char)*v2);
  v5 = (uint *)(v1[6] + 4);
  v1[6] = (int)v5;
  v6 = *v5;
  v1[6] = (int)(v5 + 1);
  v7 = v1[48];
  return Function_2077d3c(
           *(uint *)(v7 + 268),
           v3,
           *(ushort *)(v7 + 2 * *(ushort *)(v7 + 20) + 216),
           *(uchar *)(v7 + *(ushort *)(v7 + 20) + 232),
           v4,
           v6,
           *(uint *)(v7 + 280),
           *v1);
}

//----- (02223134) --------------------------------------------------------
uchar *__fastcall Function_2223134(int a1)
{
  int v1;
  int *v2;
  int v3;
  uchar *result;

  v1 = a1;
  if ( Function_200598c() )
  {
    result = (uchar *)1;
    *(uchar *)(v1 + 141) = 1;
  }
  else
  {
    v2 = (int *)(*(uint *)(v1 + 24) + 4);
    *(uint *)(v1 + 24) = v2;
    v3 = *v2;
    *(uint *)(v1 + 24) = v2 + 1;
    *(uchar *)(v1 + 141) = 0;
    result = Function_200592c(v3);
  }
  return result;
}

//----- (02223160) --------------------------------------------------------
void We_Cmd36_Dummy()
{
  ;
}

//----- (02223164) --------------------------------------------------------
int __fastcall LoadWazaeffectFunctionAdr(uint a1)
{
  int result;

  if ( a1 <= 0x55 )
    result = (int)*(&off_22387D4 + a1);
  else
    result = 0;
  return result;
}

//----- (02223178) --------------------------------------------------------
int __fastcall Function_2223178(int a1)
{
  return *(uchar *)(a1 + 1);
}

//----- (0222317C) --------------------------------------------------------
int __fastcall Function_222317c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = Function_2220240(a1);
  v5 = Function_2220248(v2);
  Function_223525c(v2, v4);
  Function_223525c(v2, v5);
  if ( Function_223525c(v2, v4) != 3 || Function_223525c(v2, v5) != 4 )
  {
    if ( Function_223525c(v2, v4) != 4 || Function_223525c(v2, v5) != 3 )
    {
      if ( Function_223525c(v2, v4) != 3 || Function_223525c(v2, v5) != 3 )
      {
        if ( Function_223525c(v2, v4) == 4 && Function_223525c(v2, v5) == 4 && v3 < 0 )
          v3 = -v3;
      }
      else if ( v3 > 0 )
      {
        v3 = -v3;
      }
    }
    else
    {
      v3 = -v3;
    }
  }
  if ( Function_221fdd4(v2) == 1 )
    v3 = -v3;
  return (char)v3;
}

//----- (02223234) --------------------------------------------------------
int __fastcall Function_2223234(int a1, int a2, int a3)
{
  if ( a1 < a2 )
    return (char)abs(a3);
  if ( a1 <= a2 )
    return 0;
  return -(char)abs(a3);
}

//----- (0222325C) --------------------------------------------------------
int __fastcall Function_222325c(int a1, uint *a2, int a3)
{
  int *v3;
  int v4;
  int result;
  int i;

  v3 = (int *)(*(uint *)(a1 + 24) + 4);
  *(uint *)(a1 + 24) = v3;
  v4 = *v3;
  *(uint *)(a1 + 24) = v3 + 1;
  if ( v4 == a3 )
  {
    for ( i = 0; i < a3; *(uint *)(a1 + 24) += 4 )
    {
      ++i;
      *a2 = **(uint **)(a1 + 24);
      ++a2;
    }
    result = 1;
  }
  else
  {
    if ( v4 != a3 )
      ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0222329C) --------------------------------------------------------
int __fastcall Function_222329c(int *a1, int a2)
{
  int *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a1;
  v3 = (int *)(a2 + 260);
  v4 = 6;
  do
  {
    v5 = *v3;
    v6 = v3[1];
    v3 += 2;
    *v2 = v5;
    v2[1] = v6;
    v2 += 2;
    --v4;
  }
  while ( v4 );
  result = *v3;
  *v2 = *v3;
  return result;
}

//----- (022232B8) --------------------------------------------------------
int __fastcall Function_22232b8(int a1, int a2)
{
  return *(uchar *)(*(uint *)(a1 + 192) + a2 + 192);
}

//----- (022232C4) --------------------------------------------------------
int __fastcall Function_22232c4(int a1, int a2)
{
  return *(uchar *)(*(uint *)(a1 + 192) + a2 + 224);
}

//----- (022232D0) --------------------------------------------------------
int __fastcall Function_22232d0(int a1, int a2)
{
  return *(ushort *)(*(uint *)(a1 + 192) + 2 * a2 + 216);
}

//----- (022232E0) --------------------------------------------------------
int __fastcall Function_22232e0(int a1, int a2)
{
  return *(uchar *)(*(uint *)(a1 + 192) + a2 + 232);
}

//----- (022232EC) --------------------------------------------------------
int __fastcall Function_22232ec(int a1, int a2)
{
  return *(uint *)(*(uint *)(a1 + 192) + 4 * a2 + 236);
}

//----- (022232FC) --------------------------------------------------------
int __fastcall Function_22232fc(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;

  v2 = a1;
  v3 = 4 * a2;
  v4 = *(uint **)(*(uint *)(a1 + 192) + 4 * a2 + 196);
  if ( !v4 )
    return 0;
  if ( Function_2008b38(v4) )
    return *(uint *)(*(uint *)(v2 + 192) + v3 + 196);
  return 0;
}

//----- (0222332C) --------------------------------------------------------
int __fastcall Function_222332c(int a1)
{
  return *(uint *)(a1 + 200);
}

//----- (02223334) --------------------------------------------------------
int __fastcall Function_2223334(int a1, int a2)
{
  return *(uint *)(*(uint *)(*(uint *)(a1 + 192) + 4 * a2 + 176) + 8);
}

//----- (02223344) --------------------------------------------------------
int __fastcall Function_2223344(int a1, int a2)
{
  return *(uint *)(*(uint *)(*(uint *)(a1 + 192) + 4 * a2 + 176) + 4);
}

//----- (02223354) --------------------------------------------------------
int __fastcall Function_2223354(int a1, int a2)
{
  return *(uint *)(*(uint *)(*(uint *)(a1 + 192) + 4 * a2 + 176) + 12);
}

//----- (02223364) --------------------------------------------------------
BOOL __fastcall Function_2223364(int a1)
{
  return (*(uint *)(*(uint *)(a1 + 192) + 212) & 2) != 0;
}

//----- (0222337C) --------------------------------------------------------
BOOL __fastcall Function_222337c(int a1, int a2)
{
  return (*(uint *)(*(uint *)(a1 + 192) + 4 * a2 + 252) & 0x200400C0) != 0;
}

//----- (0222339C) --------------------------------------------------------
int __fastcall Function_222339c(int a1)
{
  int result;

  if ( Function_221fdd4(a1) == 1 )
    result = 2;
  else
    result = 1;
  return result;
}

//----- (022233B0) --------------------------------------------------------
int __fastcall Function_22233b0(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a2;
  v6 = 1;
  v7 = 2;
  v8 = 3;
  v9 = 1;
  v10 = 2;
  v11 = 3;
  if ( Function_221fdd4(a1) == 1 )
    result = *(&v9 + v4);
  else
    result = *(&v6 + v4);
  return result;
}

//----- (022233EC) --------------------------------------------------------
int __fastcall Function_22233ec(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a2;
  v6 = 1;
  v7 = 2;
  v8 = 3;
  v9 = 1;
  v10 = 2;
  v11 = 3;
  if ( Function_221fdd4(a1) == 1 )
    result = *(&v9 + v4);
  else
    result = *(&v6 + v4);
  return result;
}

//----- (02223428) --------------------------------------------------------
int __fastcall Function_2223428(int result, char a2)
{
  switch ( a2 )
  {
    case 0:
      Function_221fdd4(result);
      result = 0;
      break;
    case 1:
      Function_221fdd4(result);
      result = 1;
      break;
    case 2:
      Function_221fdd4(result);
      result = 3;
      break;
    case 3:
      result = Function_222339c(result);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02223460) --------------------------------------------------------
int *__fastcall Function_2223460(int a1, uchar a2)
{
  return Function_201958c(*(uint **)(a1 + 196), a2, *(int **)(*(uint *)(a1 + 192) + 272), 0x10000, 0);
}

//----- (02223488) --------------------------------------------------------
int __fastcall Function_2223488(int a1)
{
  return Function_2002fbc(*(uint *)(a1 + 200), *(uint *)(*(uint *)(a1 + 192) + 276), 0, 0, 0x200u);
}

//----- (022234A8) --------------------------------------------------------
BOOL __fastcall Function_22234a8(int a1, char a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  BOOL result;

  v2 = a1;
  v3 = Function_22210a8(a1, a2);
  v4 = *(uchar *)(*(uint *)(v2 + 192) + v3 + 232);
  result = 0;
  if ( Function_221fdd4(v2) == 1 )
  {
    v5 = Function_22232d0(v2, v3);
    if ( Function_22384f0(v5, v4) == 1 )
      result = 1;
  }
  return result;
}

//----- (022234E4) --------------------------------------------------------
int __fastcall Function_22234e4(int a1, int a2)
{
  return dword_2238928[5 * a1 + a2];
}

//----- (022234F8) --------------------------------------------------------
int __fastcall Function_12_22234f8(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  uint *v15;
  int v16;
  int *v17;
  uint *v18;
  short v19;
  short v20;
  short v21;
  int v22;
  short *v23;
  int v24;
  int *v25;
  int *v26;
  int v27;
  uint *v28;
  short v29;
  uint v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  short v37;
  short v38;
  short v39;
  short v40;
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
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;

  v58 = a4;
  v4 = a3;
  v5 = a1;
  v31 = a2;
  v52 = 0;
  v53 = 0;
  v54 = 20;
  v55 = 10;
  v56 = 10;
  v57 = 20;
  v6 = malloc(a2, 88);
  *(uint *)v6 = v31;
  *(uint *)(v6 + 4) = v4;
  *(uint *)(v6 + 8) = ((int (__fastcall *)(int))dword_223DCC0[212])(v5);
  *(uint *)(v6 + 12) = ((int (__fastcall *)(int))dword_223DCC0[214])(v5);
  *(uint *)(v6 + 16) = ((int (__fastcall *)(int))dword_223DCC0[233])(v5);
  v7 = 0;
  v8 = v6;
  do
  {
    *(uint *)(v8 + 36) = 0;
    *(uint *)(v8 + 52) = ((int (__fastcall *)(int, int))dword_223EBEC[432])(v5, v7++);
    v8 += 4;
  }
  while ( v7 < 4 );
  ((void (__fastcall *)(int, int))dword_223F87C[0])(v5, v6 + 68);
  ((void (__fastcall *)(int, int))dword_223F8AC[0])(v5, v6 + 72);
  v11 = LoadFromNARC_8(27, v31, v9, v10);
  v12 = 0;
  v32 = v6;
  do
  {
    v13 = *(uint *)(v6 + 4);
    if ( (v12 == v13 || v13 == 255) && *(uint *)(v32 + 72) )
    {
      v14 = v12 + 55555 + 5000 * v13;
      Function_200cc3c(*(uint **)(v6 + 8), *(uint *)(v6 + 12), (int)v11, 0x4Cu, 0, 1, v14);
      Function_200cdc4(
        *(uint *)(v6 + 16),
        2u,
        *(uint **)(v6 + 8),
        *(uint *)(v6 + 12),
        (int)v11,
        0x4Bu,
        0,
        1,
        1,
        v14);
      Function_200ce24(*(uint **)(v6 + 8), *(uint *)(v6 + 12), (int)v11, 0x4Du, 0, v14);
      Function_200ce54(*(uint **)(v6 + 8), *(uint *)(v6 + 12), (int)v11, 0x4Eu, 0, v14);
    }
    ++v12;
    v32 += 4;
  }
  while ( v12 < 4 );
  Call_FS_CloseFile(v11);
  v36 = 0;
  v15 = (uint *)v6;
  do
  {
    v16 = *(uint *)(v6 + 4);
    if ( v36 == v16 || v16 == 255 )
    {
      v15[5] = v36 + 55555 + 5000 * v16;
      v46 = v36 + 55555 + 5000 * *(uint *)(v6 + 4);
      v47 = v36 + 55555 + 5000 * *(uint *)(v6 + 4);
      v48 = v36 + 55555 + 5000 * *(uint *)(v6 + 4);
      v49 = v36 + 55555 + 5000 * *(uint *)(v6 + 4);
      v50 = 0;
      v51 = 0;
      v17 = (int *)v15[13];
      v18 = (uint *)v15[18];
      v35 = v17[1];
      v34 = v17[2];
      v33 = *v17;
      if ( v18 )
      {
        v19 = Function_20080c0((int)v18, 0);
        v20 = Function_20080c0((int)v18, 1u);
        v21 = Function_20080c0((int)v18, 0x29u);
        v37 = v19;
        v38 = v20 - v21;
        v22 = 0;
        v39 = 0;
        v40 = 0;
        v23 = &v37;
        v24 = *(&v52 + *(uchar *)(v6 + v36 + 68));
        v42 = 0;
        v41 = v24;
        v43 = 1;
        v44 = 1;
        v45 = 0;
        v25 = &v46;
        do
        {
          ++v22;
          *((uint *)v23 + 5) = *v25;
          ++v25;
          v23 += 2;
        }
        while ( v22 < 6 );
        v26 = Function_200ce6c(*(uint **)(v6 + 8), *(uint *)(v6 + 12), &v37);
        Function_200d330(v26);
        v15[9] = v26;
        if ( v18 )
        {
          if ( Function_2008b38(v18) )
          {
            if ( Function_20080c0((int)v18, 6u) == 1 )
              Function_200d3f4((uint *)v26, 0);
          }
          else
          {
            Function_200d3f4((uint *)v26, 0);
          }
        }
        else
        {
          Function_200d3f4((uint *)v26, 0);
        }
        if ( v18 )
        {
          v27 = Function_2021f98(*v26);
          Function_201dc68(19, *(uint *)(v27 + 4), v33, 3200);
        }
        if ( v18 )
        {
          v28 = (uint *)Function_2021f9c(*v26);
          v29 = Function_201fab4(v28, 1);
          Function_2003050(*(uint *)(v6 + 16), v35, v34, *(uint *)v6, 2, 32, 16 * v29);
        }
      }
    }
    ++v15;
    ++v36;
  }
  while ( v36 < 4 );
  return v6;
}

//----- (02223764) --------------------------------------------------------
int __fastcall Function_12_2223764(int a1, uint a2)
{
  return Function_12_22234f8(a1, a2, 255, (int)Function_12_22234f8);
}

//----- (02223770) --------------------------------------------------------
uint __fastcall Function_12_2223770(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( *(uint *)(v3 + 36) )
    {
      Function_200d070(*(uint *)(v1 + 12), *(uint *)(v3 + 20));
      Function_200d080(*(uint *)(v1 + 12), *(uint *)(v3 + 20));
      Function_200d0f4(*(uint *)(v3 + 36));
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  return free(v1);
}

//----- (022237A4) --------------------------------------------------------
uint __fastcall Function_12_22237a4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    if ( *(uint *)(v3 + 36) )
    {
      Function_200d070(*(uint *)(v1 + 12), *(uint *)(v3 + 20));
      Function_200d080(*(uint *)(v1 + 12), *(uint *)(v3 + 20));
      Function_200d0f4(*(uint *)(v3 + 36));
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  return free(v1);
}

//----- (022237D8) --------------------------------------------------------
int __fastcall Function_12_22237d8(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uchar *)(v1 + *(uint *)(v1 + 4) + 68);
}

//----- (022237EC) --------------------------------------------------------
void Function_22237ec()
{
  ;
}

//----- (022237F0) --------------------------------------------------------
uint *__fastcall Function_22237f0(uint a1, int a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  uint *v6;
  int v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (uint *)((int (*)(void))dword_221F800[16])();
  v7 = Call2_LoadFromNARC_2(29, v4, v3);
  Function_20144cc(v6, v7, 10, v5);
  return v6;
}

//----- (02223818) --------------------------------------------------------
uint *__fastcall Function_2223818(uint a1, int a2, int a3, int a4)
{
  uint v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (uint *)((int (*)(void))dword_221F800[16])();
  v9 = Call2_LoadFromNARC_2(v5, v6, v4);
  Function_20144cc(v8, v9, 10, v7);
  return v8;
}

//----- (02223844) --------------------------------------------------------
int __fastcall Function_2223844(int a1, uint a2, uint a3)
{
  return Function_2006cb8_LoadFileInMemory(a1, a2, a3);
}

//----- (0222384C) --------------------------------------------------------
uint *__fastcall Function_222384c(int a1, uint a2, uint a3, int a4)
{
  uint v4;
  int v5;
  uint v6;
  uint *v7;
  int v9;
  int v10;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v10 = a4;
  v7 = (uint *)((int (__fastcall *)(uint))dword_221F800[34])(a2);
  if ( !v7 )
    return 0;
  v9 = Function_2223844(v5, v6, v4);
  Function_20144cc(v7, v9, 10, v10);
  return v7;
}

//----- (02223880) --------------------------------------------------------
int __fastcall Function_2223880(int *a1, int a2, int a3, int a4)
{
  return Function_20146f4(a1, a2, (void (__fastcall *)(int))*(&off_2238DB0 + a3), a4);
}

//----- (02223894) --------------------------------------------------------
void Function_2223894()
{
  JUMPOUT(&dword_221F800[54]);
}

//----- (0222389C) --------------------------------------------------------
int __fastcall Function_222389c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a3;
  v5 = 1;
  Function_2235254(a1, a2);
  switch ( (uchar)Function_2235254(v3, v4) )
  {
    case 1u:
      v5 = -1;
      break;
    case 3u:
      v5 = -1;
      break;
    case 5u:
      v5 = -1;
      break;
    default:
      return v5;
  }
  return v5;
}

//----- (022238DC) --------------------------------------------------------
void Function_22238dc()
{
  ;
}

//----- (022238E0) --------------------------------------------------------
int __fastcall Function_22238e0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  ushort *v8;
  char v10;
  char v11;
  char v12;
  int v13;
  int v14;
  int v15;

  v1 = a1;
  v2 = Function_2014764();
  Function_2220240(v2);
  Function_2220248(v2);
  v3 = Function_2220250(v2);
  if ( Function_223525c(v2, 1) == 3 )
  {
    Function_2235508(v2, 1, &v13);
  }
  else
  {
    v4 = Function_2235254(v2, 1);
    v5 = Function_2235310();
    v6 = Function_2014790(v3);
    v7 = Function_221fdd4(v2);
    Function_2235448(v5, &v13, v7, v6);
    Function_2235448(v4, &v12, v7, v6);
  }
  *(uint *)(v1 + 40) = v13 + *(uint *)(**(uint **)(v1 + 32) + 4);
  *(uint *)(v1 + 44) = v14 + *(uint *)(**(uint **)(v1 + 32) + 8);
  *(uint *)(v1 + 48) = v15 + *(uint *)(**(uint **)(v1 + 32) + 12);
  Function_2235760(1, &v11);
  v8 = (ushort *)Function_2014784(v3);
  Function_2020a94(&v10, v8);
  return Function_20209d4(&v10, v8);
}

//----- (02223998) --------------------------------------------------------
int __fastcall Function_2223998(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  char v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = Function_2014764();
  v6 = Function_2220248(v5);
  v7 = (uint *)Function_2220250(v5);
  Function_2235508(v5, 0, &v10);
  *(uint *)(v4 + 40) = v10 + *(uint *)(**(uint **)(v4 + 32) + 4);
  *(uint *)(v4 + 44) = v11 + *(uint *)(**(uint **)(v4 + 32) + 8);
  *(uint *)(v4 + 48) = v12 + *(uint *)(**(uint **)(v4 + 32) + 12);
  Function_2235760(v6, &v9);
  return Function_2014744(v7, &v9);
}

//----- (022239F4) --------------------------------------------------------
int __fastcall Function_22239f4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = Function_2014764();
  v3 = v2;
  v4 = Function_2220248(v2);
  Function_2235508(v3, v4, &v6);
  *(uint *)(v1 + 40) = v6 + *(uint *)(**(uint **)(v1 + 32) + 4);
  *(uint *)(v1 + 44) = v7 + *(uint *)(**(uint **)(v1 + 32) + 8);
  result = v8 + *(uint *)(**(uint **)(v1 + 32) + 12);
  *(uint *)(v1 + 48) = result;
  return result;
}

//----- (02223A38) --------------------------------------------------------
int __fastcall Function_2223a38(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = Function_2014764();
  v3 = v2;
  v4 = Function_2220240(v2);
  Function_2235508(v3, v4, &v6);
  *(uint *)(v1 + 40) = v6 + *(uint *)(**(uint **)(v1 + 32) + 4);
  *(uint *)(v1 + 44) = v7 + *(uint *)(**(uint **)(v1 + 32) + 8);
  result = v8 + *(uint *)(**(uint **)(v1 + 32) + 12);
  *(uint *)(v1 + 48) = result;
  return result;
}

//----- (02223A7C) --------------------------------------------------------
int __fastcall Function_2223a7c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = Function_2014764();
  v6 = Function_2220240(v5);
  Function_2220248(v5);
  Function_2235508(v5, v6, &v8);
  *(uint *)(v4 + 40) = v8 + *(uint *)(**(uint **)(v4 + 32) + 4);
  *(uint *)(v4 + 44) = v9 + *(uint *)(**(uint **)(v4 + 32) + 8);
  result = v10 + *(uint *)(**(uint **)(v4 + 32) + 12);
  *(uint *)(v4 + 48) = result;
  return result;
}

//----- (02223AC8) --------------------------------------------------------
int __fastcall Function_2223ac8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  BOOL v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  v2 = Function_2014764();
  v3 = v2;
  v4 = Function_2220250(v2);
  v5 = Function_2014790(v4);
  v6 = Function_2220240(v3);
  v7 = Function_223525c(v3, v6) != 3;
  v8 = Function_221fdd4(v3);
  Function_2235448(v7, &v10, v8, v5);
  *(uint *)(v1 + 40) = v10 + *(uint *)(**(uint **)(v1 + 32) + 4);
  *(uint *)(v1 + 44) = v11 + *(uint *)(**(uint **)(v1 + 32) + 8);
  result = v12 + *(uint *)(**(uint **)(v1 + 32) + 12);
  *(uint *)(v1 + 48) = result;
  return result;
}

//----- (02223B30) --------------------------------------------------------
int __fastcall Function_2223b30(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  BOOL v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  v2 = Function_2014764();
  v3 = v2;
  v4 = Function_2220250(v2);
  v5 = Function_2014790(v4);
  v6 = Function_2220248(v3);
  v7 = Function_223525c(v3, v6) != 3;
  v8 = Function_221fdd4(v3);
  Function_2235448(v7, &v10, v8, v5);
  *(uint *)(v1 + 40) = v10 + *(uint *)(**(uint **)(v1 + 32) + 4);
  *(uint *)(v1 + 44) = v11 + *(uint *)(**(uint **)(v1 + 32) + 8);
  result = v12 + *(uint *)(**(uint **)(v1 + 32) + 12);
  *(uint *)(v1 + 48) = result;
  return result;
}

//----- (02223B98) --------------------------------------------------------
int __fastcall Function_2223b98(int a1)
{
  int v1;
  short *v2;
  char *v3;
  int v4;
  short v5;
  short *v6;
  char *v7;
  int v8;
  short v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int result;
  char v16[72];
  short v17[6];

  v1 = a1;
  v2 = &word_2238E0C;
  v3 = (char *)v17;
  v4 = 36;
  do
  {
    v5 = *v2;
    ++v2;
    *(ushort *)v3 = v5;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  v6 = &word_2238E54;
  v7 = v16;
  v8 = 36;
  do
  {
    v9 = *v6;
    ++v6;
    *(ushort *)v7 = v9;
    v7 += 2;
    --v8;
  }
  while ( v8 );
  v10 = Function_2014764();
  v11 = Function_2220240(v10);
  v12 = Function_2220248(v10);
  v13 = Function_2235254(v10, v11);
  v14 = Function_2235254(v10, v12);
  *(uint *)(v1 + 40) = 172 * v17[6 * v13 + v14] + *(uint *)(**(uint **)(v1 + 32) + 4);
  *(uint *)(v1 + 44) = 172 * *(short *)&v16[12 * v13 + 2 * v14] + *(uint *)(**(uint **)(v1 + 32) + 8);
  result = *(uint *)(**(uint **)(v1 + 32) + 12);
  *(uint *)(v1 + 48) = result;
  return result;
}

//----- (02223C40) --------------------------------------------------------
int __fastcall Function_2223c40(int result, int a2, int *a3)
{
  int *v3;

  v3 = a3 + 2;
  switch ( (uchar)result )
  {
    case 1:
      result = *a3;
      *a3 *= a2;
      break;
    case 2:
      result = a3[1];
      a3[1] = a2 * result;
      break;
    case 3:
      result = *v3;
      *v3 *= a2;
      break;
    case 4:
      *a3 *= a2;
      result = a3[1];
      a3[1] = a2 * result;
      break;
    case 5:
      *a3 *= a2;
      result = *v3;
      *v3 *= a2;
      break;
    case 6:
      a3[1] *= a2;
      result = *v3;
      *v3 *= a2;
      break;
    case 7:
      *a3 *= a2;
      a3[1] *= a2;
      result = *v3;
      *v3 *= a2;
      break;
    default:
      return result;
  }
  return result;
}

//----- (02223CD4) --------------------------------------------------------
int *__fastcall Function_2223cd4(int a1, int a2, int a3, int a4, char a5, char a6, uint *a7)
{
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v7 = a2;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  switch ( a5 )
  {
    case 1:
      Function_2014988(a2, &v13);
      v13 *= a6;
      v14 *= a6;
      v15 *= a6;
      break;
    case 2:
      v13 = 0;
      v14 = 3200 * a6;
      v15 = 0;
      break;
    case 3:
      Function_2235508(a1, a4, &v13);
      break;
    case 4:
      Function_2235508(a1, a3, &v13);
      break;
    case 5:
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      Function_222325c(a1, &v9, 4);
      v13 = v9;
      v14 = v10;
      v15 = v11;
      Function_2223c40(v12, a6, &v13);
      break;
    default:
      break;
  }
  v13 -= *a7;
  v14 -= a7[1];
  v15 -= a7[2];
  return Function_2014970(v7, &v13);
}

//----- (02223DA4) --------------------------------------------------------
int *__fastcall Function_2223da4(int a1, int a2, int a3, int a4, char a5, char a6, uint *a7)
{
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v7 = a2;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  switch ( a5 )
  {
    case 1:
      Function_20148a8(a2, &v13);
      v13 *= a6;
      v14 *= a6;
      v15 *= a6;
      break;
    case 2:
      v13 = 0;
      v14 = 3200 * a6;
      v15 = 0;
      break;
    case 3:
      Function_2235508(a1, a4, &v13);
      break;
    case 4:
      Function_2235508(a1, a3, &v13);
      break;
    case 5:
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      Function_222325c(a1, &v9, 4);
      v13 = v9;
      v14 = v10;
      v15 = v11;
      Function_2223c40(v12, a6, &v13);
      break;
    default:
      break;
  }
  v13 -= *a7;
  v14 -= a7[1];
  v15 -= a7[2];
  return Function_2014890(v7, &v13);
}

//----- (02223E74) --------------------------------------------------------
int __fastcall Function_2223e74(int a1, int a2, int a3, int a4, int a5, char a6)
{
  int v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  int result;
  int v13;
  short v14;
  short v15;
  ushort v16;
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

  v6 = a1;
  v7 = a3;
  v8 = a2;
  v13 = a4;
  Function_2220250(a1);
  v9 = Function_2235254(v6, v7);
  v10 = Function_2235254(v6, v13);
  Function_222325c(v6, &v41, 3);
  Function_222325c(v6, &v38, 3);
  Function_222325c(v6, &v32, 3);
  Function_222325c(v6, &v35, 3);
  Function_222325c(v6, &v26, 3);
  Function_222325c(v6, &v23, 3);
  Function_222325c(v6, &v29, 3);
  switch ( v9 )
  {
    case 1:
      v14 = -(short)v41;
      v15 = -(short)v42;
      v16 = -(short)v43;
      break;
    case 2:
      if ( v10 == 3 )
      {
        v14 = v38;
        v15 = v39;
        v16 = v40;
      }
      else if ( v10 == 5 )
      {
        v14 = v32;
        v15 = v33;
        v16 = v34;
      }
      else
      {
        v14 = v35;
        v15 = v36;
        v16 = v37;
      }
      break;
    case 3:
      if ( v10 == 2 )
      {
        v14 = -(short)v38;
        v15 = -(short)v39;
        v16 = -(short)v40;
      }
      else if ( v10 == 5 )
      {
        v14 = -(short)v35;
        v15 = -(short)v36;
        v16 = -(short)v37;
      }
      else
      {
        v14 = -(short)v26;
        v15 = -(short)v27;
        v16 = -(short)v28;
      }
      break;
    case 4:
      if ( v10 == 3 )
      {
        v14 = v26;
        v15 = v27;
        v16 = v28;
      }
      else if ( v10 == 5 )
      {
        v14 = v23;
        v15 = v24;
        v16 = v25;
      }
      else
      {
        v14 = v29;
        v15 = v30;
        v16 = v31;
      }
      break;
    case 5:
      if ( v10 == 3 )
      {
        v14 = -(short)v29;
        v15 = -(short)v30;
        v16 = -(short)v31;
      }
      else if ( v10 == 2 )
      {
        v14 = -(short)v32;
        v15 = -(short)v33;
        v16 = -(short)v34;
      }
      else
      {
        v14 = -(short)v23;
        v15 = -(short)v24;
        v16 = -(short)v25;
      }
      break;
    default:
      v14 = v41;
      v15 = v42;
      v16 = v43;
      break;
  }
  v11 = Function_222389c(v6, v7, v13);
  v20 = 0;
  v21 = 0;
  v22 = 0;
  Function_222325c(v6, &v20, 3);
  Function_2235508(v6, v7, &v17);
  if ( v20 || v21 || v22 )
  {
    v44 = v20;
    v45 = v21;
    v46 = v22;
    if ( !v20 && v21 == 3200 )
      v11 = 1;
    v45 *= v11;
    v44 *= v11;
    v46 = v19 * v11;
    *(uint *)(v8 + 40) = v44 + *(uint *)(**(uint **)(v8 + 32) + 4);
    *(uint *)(v8 + 44) = v45 + *(uint *)(**(uint **)(v8 + 32) + 8);
    *(uint *)(v8 + 48) = v46 + *(uint *)(**(uint **)(v8 + 32) + 12);
  }
  else
  {
    v44 = v17;
    v45 = v18;
    v46 = v19;
    *(uint *)(v8 + 40) = v17 + *(uint *)(**(uint **)(v8 + 32) + 4);
    *(uint *)(v8 + 44) = v18 + *(uint *)(**(uint **)(v8 + 32) + 8);
    *(uint *)(v8 + 48) = v19 + *(uint *)(**(uint **)(v8 + 32) + 12);
  }
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      Function_2223cd4(v6, v8, v7, v13, a6, v11, &v44);
    }
    else if ( a5 == 2 )
    {
      Function_2223da4(v6, v8, v7, v13, a6, v11, &v44);
    }
  }
  *(ushort *)(v8 + 80) = v14;
  *(ushort *)(v8 + 82) = v15;
  result = v16;
  *(ushort *)(v8 + 84) = v16;
  return result;
}

//----- (02224138) --------------------------------------------------------
int __fastcall Function_2224138(int a1, int a2, char a3)
{
  int v3;
  int v4;
  char v5;
  int v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2014764();
  v7 = Function_2220240(v6);
  v8 = Function_2220248(v6);
  return Function_2223e74(v6, v3, v7, v8, v4, v5);
}

//----- (02224168) --------------------------------------------------------
int __fastcall Function_2224168(int a1)
{
  return Function_2224138(a1, 0, 0);
}

//----- (02224174) --------------------------------------------------------
int __fastcall Function_2224174(int a1)
{
  return Function_2224138(a1, 1, 1);
}

//----- (02224180) --------------------------------------------------------
int __fastcall Function_2224180(int a1)
{
  return Function_2224138(a1, 1, 2);
}

//----- (0222418C) --------------------------------------------------------
int __fastcall Function_222418c(int a1)
{
  return Function_2224138(a1, 1, 3);
}

//----- (02224198) --------------------------------------------------------
int __fastcall Function_2224198(int a1)
{
  return Function_2224138(a1, 1, 4);
}

//----- (022241A4) --------------------------------------------------------
int __fastcall Function_22241a4(int a1)
{
  return Function_2224138(a1, 1, 5);
}

//----- (022241B0) --------------------------------------------------------
int __fastcall Function_22241b0(int a1)
{
  return Function_2224138(a1, 2, 1);
}

//----- (022241BC) --------------------------------------------------------
int __fastcall Function_22241bc(int a1)
{
  return Function_2224138(a1, 2, 2);
}

//----- (022241C8) --------------------------------------------------------
int __fastcall Function_22241c8(int a1)
{
  return Function_2224138(a1, 2, 3);
}

//----- (022241D4) --------------------------------------------------------
int __fastcall Function_22241d4(int a1)
{
  return Function_2224138(a1, 2, 4);
}

//----- (022241E0) --------------------------------------------------------
int __fastcall Function_22241e0(int a1)
{
  return Function_2224138(a1, 2, 5);
}

//----- (022241EC) --------------------------------------------------------
int __fastcall Function_22241ec(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = Function_2014764();
  v3 = Function_2220240(v2);
  v4 = Function_2220248(v2);
  return Function_2223e74(v2, v1, v4, v3, 0, 0);
}

//----- (0222421C) --------------------------------------------------------
int __fastcall Function_222421c(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2[5] )
    Function_22242e0();
  if ( v2[6] )
    Function_2224614(v3, v2);
  if ( v2[7] )
    Function_2224e74(v3, v2);
  Function_2224ea8(v3, v2);
  result = v2[3];
  if ( result )
    result = Function_2224eb8(v3, v2);
  return result;
}

//----- (02224260) --------------------------------------------------------
int __fastcall Function_2224260(int a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  BOOL v8;
  int v9;

  v3 = *a2;
  v4 = a3;
  v5 = Function_2220250(*a2);
  v6 = Function_2014790(v5);
  v7 = Function_2220248(v3);
  v8 = Function_223525c(v3, v7) != 3;
  v9 = Function_221fdd4(v3);
  return Function_2235448(v8, v4, v9, v6);
}

//----- (022242A0) --------------------------------------------------------
int __fastcall Function_22242a0(int a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  BOOL v8;
  int v9;

  v3 = *a2;
  v4 = a3;
  v5 = Function_2220250(*a2);
  v6 = Function_2014790(v5);
  v7 = Function_2220240(v3);
  v8 = Function_223525c(v3, v7) != 3;
  v9 = Function_221fdd4(v3);
  return Function_2235448(v8, v4, v9, v6);
}

//----- (022242E0) --------------------------------------------------------
int __fastcall Function_22242e0(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int *v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  char *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint *v26;
  int result;
  char v28[4];
  char v29[52];
  char v30[4];
  char v31[52];
  char v32[4];
  char v33[44];
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;

  v41 = a4;
  v4 = a2;
  v5 = a2[5];
  v6 = a1;
  if ( v5 > 100 )
  {
    if ( v5 == 101 )
    {
      Function_2235508(*a2, a2[10], &v38);
      Function_2225008(v4, v4[10], &v38);
    }
  }
  else if ( v5 < 100 )
  {
    switch ( (uchar)a4 )
    {
      case 0:
      case 0x1D:
        break;
      case 1:
        Function_2235508(*a2, a2[9], &v38);
        break;
      case 2:
        Function_2235508(*a2, a2[10], &v38);
        break;
      case 3:
        Function_222325c(*a2, &v34, 4);
        *((uchar *)v4 + 8) = Function_2224fc4(v4);
        v38 = v35;
        v39 = v36;
        v40 = v37;
        if ( v34 == 1 )
          *((uchar *)v4 + 8) = 1;
        v38 *= *((char *)v4 + 8);
        v39 *= *((char *)v4 + 8);
        break;
      case 4:
        Function_2235508(*a2, a2[9], &v38);
        Function_2225094(v4, &v38);
        break;
      case 5:
        Function_2235508(*a2, a2[10], &v38);
        Function_2225094(v4, &v38);
        break;
      case 6:
        Function_2235538(*a2, a2[9], &v38);
        break;
      case 7:
        Function_2235538(*a2, a2[10], &v38);
        break;
      case 8:
        Function_2235718(*a2, a2[9], &v38);
        break;
      case 9:
        Function_2235718(*a2, a2[10], &v38);
        break;
      case 0xA:
        Function_2235568(*a2, a2[9], &v38);
        break;
      case 0xB:
        Function_2235568(*a2, a2[10], &v38);
        break;
      case 0xC:
        Function_22242a0(a1, a2, (int)&v38);
        Function_2225094(v4, &v38);
        break;
      case 0xD:
        Function_2224260(a1, a2, (int)&v38);
        Function_2225094(v4, &v38);
        break;
      case 0xE:
        Function_2235598(*a2, a2[9], &v38);
        break;
      case 0xF:
        Function_2235598(*a2, a2[10], &v38);
        break;
      case 0x10:
        Function_22355c8(*a2, a2[9], &v38);
        break;
      case 0x11:
        Function_22355c8(*a2, a2[10], &v38);
        break;
      case 0x12:
        Function_22355f8(*a2, a2[9], &v38);
        break;
      case 0x13:
        Function_22355f8(*a2, a2[10], &v38);
        break;
      case 0x14:
        Function_2235628(*a2, a2[9], &v38);
        break;
      case 0x15:
        Function_2235628(*a2, a2[10], &v38);
        break;
      case 0x16:
        Function_2235658(*a2, a2[9], &v38);
        break;
      case 0x17:
        Function_2235658(*a2, a2[10], &v38);
        break;
      case 0x18:
        Function_2235688(*a2, a2[9], &v38);
        break;
      case 0x19:
        Function_2235688(*a2, a2[10], &v38);
        break;
      case 0x1A:
        Function_22356b8(*a2, a2[9], &v38);
        break;
      case 0x1B:
        Function_22356b8(*a2, a2[10], &v38);
        break;
      case 0x1C:
        v38 = 11488;
        v39 = 0;
        v40 = 0;
        break;
      case 0x1E:
        v13 = dword_2238F44;
        v14 = v30;
        v15 = 7;
        do
        {
          v16 = *v13;
          v17 = v13[1];
          v13 += 2;
          *(uint *)v14 = v16;
          *((uint *)v14 + 1) = v17;
          v14 += 8;
          --v15;
        }
        while ( v15 );
        if ( Function_221fdd4(*v4) == 1 )
          v18 = 6;
        else
          v18 = Function_2235254(*v4, v4[9]);
        v38 = *(uint *)&v30[8 * v18];
        v39 = *(uint *)&v31[8 * v18];
        v40 = 0;
        break;
      case 0x1F:
        v7 = dword_2238EAC;
        v8 = v32;
        v9 = 6;
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
        v12 = Function_2235254(*v4, v4[9]);
        v38 = *(uint *)&v32[8 * v12];
        v39 = *(uint *)&v33[8 * v12];
        v40 = 0;
        break;
      case 0x20:
        v19 = (int *)&loc_2238F0C;
        v20 = v28;
        v21 = 7;
        do
        {
          v22 = *v19;
          v23 = v19[1];
          v19 += 2;
          *(uint *)v20 = v22;
          *((uint *)v20 + 1) = v23;
          v20 += 8;
          --v21;
        }
        while ( v21 );
        if ( Function_221fdd4(*v4) == 1 )
          v24 = 6;
        else
          v24 = Function_2235254(*v4, v4[9]);
        v38 = *(uint *)&v28[8 * v24];
        v39 = *(uint *)&v29[8 * v24];
        v40 = 0;
        break;
      case 0x21:
        v38 = -5000;
        v39 = -6000;
        v40 = 0;
        break;
      case 0x22:
        Function_2235508(*a2, a2[9], &v38);
        break;
    }
  }
  else
  {
    Function_2235508(*a2, a2[9], &v38);
    Function_2225008(v4, v4[9], &v38);
  }
  v25 = v39;
  v26 = v4 + 11;
  *v26 = v38;
  v26[1] = v25;
  v26[2] = v40;
  *(uint *)(v6 + 40) = v38 + *(uint *)(**(uint **)(v6 + 32) + 4);
  *(uint *)(v6 + 44) = v39 + *(uint *)(**(uint **)(v6 + 32) + 8);
  result = v40 + *(uint *)(**(uint **)(v6 + 32) + 12);
  *(uint *)(v6 + 48) = result;
  return result;
}

//----- (02224614) --------------------------------------------------------
int __fastcall Function_2224614(ushort *a1, int *a2, int a3, int a4)
{
  uint v4;
  int v5;
  int v6;
  int *v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  int *v14;
  int *v15;
  int *v16;
  int *v17;
  int *v18;
  int v19;
  int *v20;
  int *v21;
  int *v22;
  int *v23;
  int *v24;
  int *v25;
  int *v26;
  int v27;
  int *v28;
  char *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int result;
  ushort *v35;
  int *v36;
  int v37;
  int *v38;
  int *v39;
  int v40;
  int v41;
  int *v42;
  short v43;
  short v44;
  short v45;
  char v46[4];
  char v47[44];
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
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
  char v77;
  int v78;

  v78 = a4;
  v35 = a1;
  v36 = a2;
  v41 = Function_2235254(*a2, a2[9]);
  v40 = Function_2235254(*v36, v36[10]);
  v4 = v36[6];
  if ( v4 <= 0x1A )
    JUMPOUT(__CS__, *((short *)&off_222464A + v4) + 35800652);
  switch ( (uchar)v4 )
  {
    case 0:
      v43 = 0;
      v44 = 0;
      v45 = 0;
      break;
    case 1:
    case 2:
      if ( Function_221fdd4(*v36) == 1 )
      {
        if ( v36[4] == 2 )
        {
          v43 = -3336;
          v44 = 1840;
        }
        else
        {
          v43 = 2336;
          v44 = -1440;
        }
        v45 = 736;
      }
      else
      {
        v43 = dword_22396AC[18 * v41 + 3 * v40];
        v44 = dword_22396B0[18 * v41 + 3 * v40];
        v45 = dword_22396B4[18 * v41 + 3 * v40] / 2;
      }
      break;
    case 3:
      v43 = -800;
      v44 = 1200;
      v45 = 500;
      break;
    case 4:
      if ( Function_221fdd4(*v36) == 1 )
      {
        v43 = -LOWORD(dword_22396AC[18 * v41 + 3 * v40]);
        v44 = dword_22396B0[18 * v41 + 3 * v40];
        v45 = dword_22396B4[18 * v41 + 3 * v40] / 2;
      }
      else
      {
        v5 = Function_223525c(*v36, v36[9]);
        if ( v5 == Function_223525c(*v36, v36[10]) )
        {
          v43 = dword_22396AC[18 * v41 + 3 * v40];
          v44 = dword_22396B0[18 * v41 + 3 * v40];
          v45 = dword_22396B4[18 * v41 + 3 * v40] / 2;
        }
        else
        {
          if ( Function_223525c(*v36, v36[9]) == 3 )
          {
            v43 = 3776;
            v44 = 2112;
          }
          else
          {
            v43 = -4228;
            v44 = -2728;
          }
          v45 = 1532;
        }
      }
      break;
    case 5:
      if ( Function_221fdd4(*v36) == 1 )
      {
        v43 = -LOWORD(dword_22396AC[18 * v41 + 3 * v40]);
        v44 = dword_22396B0[18 * v41 + 3 * v40];
        v45 = dword_22396B4[18 * v41 + 3 * v40] / 2;
      }
      else
      {
        v6 = Function_223525c(*v36, v36[9]);
        if ( v6 == Function_223525c(*v36, v36[10]) )
        {
          v43 = dword_22396AC[18 * v41 + 3 * v40];
          v44 = dword_22396B0[18 * v41 + 3 * v40];
          v45 = dword_22396B4[18 * v41 + 3 * v40] / 2;
        }
        else
        {
          if ( Function_223525c(*v36, v36[9]) == 3 )
          {
            v43 = 3776;
            v44 = 2112;
          }
          else
          {
            v43 = -4228;
            v44 = -2728;
          }
          v45 = 1532;
        }
      }
      break;
    case 6:
    case 7:
      v7 = dword_2238F7C;
      v8 = &v77;
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
      v48 = -2336;
      v49 = 1440;
      v50 = 736;
      v51 = 0;
      v38 = &v73;
      v12 = 0;
      v42 = &v69;
      v13 = &v77;
      v14 = &v65;
      v15 = &v62;
      v16 = &v59;
      v17 = &v55;
      v18 = &v52;
      do
      {
        *v38 = *(uint *)v13;
        *v42 = *((uint *)v13 + 4);
        *v14 = *((uint *)v13 + 8);
        ++v14;
        *v15 = *((uint *)v13 + 12);
        ++v15;
        *v16 = *((uint *)v13 + 16);
        ++v16;
        *v17 = *((uint *)v13 + 20);
        ++v17;
        v19 = *((uint *)v13 + 24);
        v13 += 4;
        *v18 = v19;
        ++v18;
        ++v38;
        ++v42;
        ++v12;
      }
      while ( v12 < 4 );
      if ( Function_221fdd4(*v36) == 1 )
      {
        v37 = 0;
        v39 = &v48;
        v20 = &v73;
        v21 = &v69;
        v22 = &v65;
        v23 = &v62;
        v24 = &v59;
        v25 = &v55;
        v26 = &v52;
        do
        {
          v27 = *v39;
          *v20 = *v39;
          ++v20;
          *v21 = v27;
          ++v21;
          *v22 = v27;
          ++v22;
          *v23 = v27;
          ++v23;
          *v24 = v27;
          ++v24;
          *v25 = v27;
          ++v25;
          *v26 = v27;
          ++v26;
          ++v39;
          ++v37;
        }
        while ( v37 < 4 );
      }
      switch ( (uchar)v41 )
      {
        case 1:
          if ( v76 == 1 )
          {
            v43 = v73;
            v44 = v74;
            v45 = v75;
          }
          else
          {
            v43 = -(short)v73;
            v44 = -(short)v74;
            v45 = -(short)v75;
          }
          break;
        case 2:
          if ( v40 == 3 )
          {
            v43 = v69;
            v44 = v70;
            v45 = v71;
          }
          else if ( v40 == 5 )
          {
            v43 = v62;
            v44 = v63;
            v45 = v64;
          }
          else
          {
            v43 = v65;
            v44 = v66;
            v45 = v67;
          }
          break;
        case 3:
          if ( v40 == 2 )
          {
            if ( v72 == 1 )
            {
              v43 = v69;
              v44 = v70;
              v45 = v71;
            }
            else
            {
              v43 = -(short)v69;
              v44 = -(short)v70;
              v45 = -(short)v71;
            }
          }
          else if ( v40 == 5 )
          {
            if ( v68 == 1 )
            {
              v43 = -(short)v59;
              v44 = -(short)v60;
              v45 = -(short)v61;
            }
            else
            {
              v43 = v59;
              v44 = v60;
              v45 = v61;
            }
          }
          else if ( v58 == 1 )
          {
            v43 = v55;
            v44 = v56;
            v45 = v57;
          }
          else
          {
            v43 = -(short)v55;
            v44 = -(short)v56;
            v45 = -(short)v57;
          }
          break;
        case 4:
          if ( v40 == 3 )
          {
            v43 = v55;
            v44 = v56;
            v45 = v57;
          }
          else if ( v40 == 5 )
          {
            v43 = v52;
            v44 = v53;
            v45 = v54;
          }
          else
          {
            v43 = v59;
            v44 = v60;
            v45 = v61;
          }
          break;
        case 5:
          if ( v40 == 3 )
          {
            if ( v72 == 1 )
            {
              v43 = v59;
              v44 = v60;
              v45 = v61;
            }
            else
            {
              v43 = -(short)v59;
              v44 = -(short)v60;
              v45 = -(short)v61;
            }
          }
          else if ( v40 == 2 )
          {
            if ( v72 == 1 )
            {
              v43 = v62;
              v44 = v63;
              v45 = v64;
            }
            else
            {
              v43 = -(short)v62;
              v44 = -(short)v63;
              v45 = -(short)v64;
            }
          }
          else if ( v72 == 1 )
          {
            v43 = v52;
            v44 = v53;
            v45 = v54;
          }
          else
          {
            v43 = -(short)v52;
            v44 = -(short)v53;
            v45 = -(short)v54;
          }
          break;
        default:
          v43 = v73;
          v44 = v74;
          v45 = v75;
          break;
      }
      break;
    case 8:
    case 9:
      if ( Function_221fdd4(*v36) == 1 )
      {
        if ( v36[4] == 2 )
        {
          v43 = -2336;
          v44 = 1440;
        }
        else
        {
          v43 = 2336;
          v44 = -1440;
        }
        v45 = 736;
      }
      else
      {
        v43 = dword_2238FEC[18 * v41 + 3 * v40];
        v44 = dword_2238FF0[18 * v41 + 3 * v40];
        v45 = dword_2238FF4[18 * v41 + 3 * v40] / 2;
      }
      break;
    case 0xA:
    case 0xB:
      if ( Function_221fdd4(*v36) == 1 )
      {
        v43 = -2336;
        v44 = 1440;
        v45 = 736;
      }
      else
      {
        v43 = dword_223919C[18 * v41 + 3 * v40];
        v44 = dword_2238FF0[18 * v41 + 3 * v40];
        v45 = dword_2238FF4[18 * v41 + 3 * v40] / 2;
      }
      break;
    case 0xC:
    case 0xD:
      if ( Function_221fdd4(*v36) == 1 )
      {
        v43 = -2936;
        v44 = 1440;
        v45 = 736;
      }
      else
      {
        v43 = dword_22394FC[18 * v41 + 3 * v40];
        v44 = dword_2239500[18 * v41 + 3 * v40];
        v45 = dword_2239504[18 * v41 + 3 * v40];
      }
      break;
    case 0xE:
    case 0xF:
      if ( Function_221fdd4(*v36) == 1 )
      {
        v43 = -2336;
        v44 = 1440;
        v45 = 736;
      }
      else
      {
        v43 = dword_223985C[18 * v41 + 3 * v40];
        v44 = dword_2239860[18 * v41 + 3 * v40];
        v45 = dword_2239864[18 * v41 + 3 * v40];
      }
      break;
    case 0x10:
    case 0x11:
      if ( Function_221fdd4(*v36) == 1 )
      {
        v43 = -2336;
        v44 = 1440;
        v45 = 736;
      }
      else
      {
        v43 = dword_223934C[18 * v41 + 3 * v40];
        v44 = dword_2239350[18 * v41 + 3 * v40];
        v45 = dword_2239354[18 * v41 + 3 * v40];
      }
      break;
    case 0x12:
    case 0x13:
      if ( Function_221fdd4(*v36) == 1 )
      {
        v43 = -2336;
        v44 = 1440;
        v45 = 736;
      }
      else
      {
        v43 = dword_2239A0C[18 * v41 + 3 * v40];
        v44 = dword_2239A10[18 * v41 + 3 * v40];
        v45 = dword_2239A14[18 * v41 + 3 * v40];
      }
      break;
    case 0x14:
    case 0x15:
      if ( Function_221fdd4(*v36) == 1 )
      {
        v43 = -4336;
        v44 = 1440;
        v45 = 736;
      }
      else
      {
        v43 = dword_2239BBC[18 * v41 + 3 * v40];
        v44 = dword_2239BC0[18 * v41 + 3 * v40];
        v45 = dword_2239BC4[18 * v41 + 3 * v40];
      }
      break;
    case 0x16:
      v43 = -3410;
      v44 = -2644;
      v45 = 0;
      break;
    case 0x18:
      v28 = dword_2238EDC;
      v29 = v46;
      v30 = 6;
      do
      {
        v31 = *v28;
        v32 = v28[1];
        v28 += 2;
        *(uint *)v29 = v31;
        *((uint *)v29 + 1) = v32;
        v29 += 8;
        --v30;
      }
      while ( v30 );
      v33 = Function_2235254(*v36, v36[9]);
      v43 = *(uint *)&v46[8 * v33];
      v44 = *(uint *)&v47[8 * v33];
      v45 = 0;
      break;
    case 0x19:
      v43 = -3440;
      v44 = 1952;
      v45 = 0;
      break;
    case 0x1A:
      if ( Function_223525c(*v36, v36[9]) == 3 )
      {
        v43 = 3776;
        v44 = 2112;
      }
      else
      {
        v43 = -6000;
        v44 = -2200;
      }
      v45 = 0;
      break;
    default:
      break;
  }
  v35[40] = v43;
  v35[41] = v44;
  result = (int)(v35 + 42);
  v35[42] = v45;
  return result;
}

//----- (02224E74) --------------------------------------------------------
int __fastcall Function_2224e74(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int i;

  v2 = a1;
  v3 = a2;
  result = Function_2225614();
  v5 = result;
  for ( i = 0; i < v5; ++i )
  {
    result = Function_22255ec(i);
    if ( result == (*(uint *)(v3 + 28) & result) )
      result = Function_22255d4(i, v2, v3);
  }
  return result;
}

//----- (02224EA8) --------------------------------------------------------
int __fastcall Function_2224ea8(int a1, int a2)
{
  return Function_222584c(*(uint *)(a2 + 32), a1);
}

//----- (02224EB8) --------------------------------------------------------
int __fastcall Function_2224eb8(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  Function_2235254(*a2, a2[9]);
  v5 = Function_2235254(*v3, v3[10]);
  switch ( (uchar)v3[3] )
  {
    case 1u:
      if ( v5 )
        v2 = -5120;
      else
        v2 = 256;
      break;
    case 2u:
      if ( v5 )
        v2 = -5376;
      else
        v2 = 0;
      break;
    default:
      break;
  }
  result = v2 + *(uint *)(**(uint **)(v4 + 32) + 12);
  *(uint *)(v4 + 48) = result;
  return result;
}

//----- (02224F14) --------------------------------------------------------
uint __fastcall Function_2224f14(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;

  v1 = a1;
  v2 = Function_2014764();
  v3 = v2;
  v4 = Function_221fde4(v2);
  v5 = (int *)malloc(v4, 56);
  *v5 = v3;
  v5[1] = Function_2220250(v3);
  Function_222325c(*v5, v5 + 3, 6);
  switch ( (uchar)v5[4] )
  {
    case 1u:
      v5[9] = Function_2220248(*v5);
      v5[10] = Function_2220240(*v5);
      break;
    case 2u:
      v5[9] = Function_2220240(*v5);
      v5[10] = Function_2220248(*v5);
      break;
    case 3u:
      v5[9] = Function_2220248(*v5);
      v5[10] = Function_2220240(*v5);
      break;
    case 4u:
      v5[9] = Function_2220240(*v5);
      v5[10] = Function_2220248(*v5);
      break;
    default:
      v5[9] = Function_2220240(*v5);
      v5[10] = Function_2220248(*v5);
      break;
  }
  Function_222421c(v1, v5);
  return free((int)v5);
}

//----- (02224FC4) --------------------------------------------------------
int __fastcall Function_2224fc4(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = 1;
  Function_2235254(*a1, a1[9]);
  switch ( (uchar)Function_2235254(*v1, v1[10]) )
  {
    case 1u:
      v2 = -1;
      break;
    case 3u:
      v2 = -1;
      break;
    case 5u:
      v2 = -1;
      break;
    default:
      return v2;
  }
  return v2;
}

//----- (02225008) --------------------------------------------------------
int __fastcall Function_2225008(int *a1, int a2, uint *a3)
{
  int *v3;
  int v4;
  int v5;
  uint *v6;
  bool v7;
  int v8;
  int v9;
  int result;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v3 = a1;
  v4 = 0;
  v16 = 0;
  v17 = 0;
  v5 = a2;
  v6 = a3;
  v18 = 0;
  do
  {
    v7 = v4 == Function_2235254(*v3, v5);
    v8 = *v3;
    if ( v7 )
      Function_222325c(v8, &v12, 4);
    else
      Function_222325c(v8, &v11, 4);
    ++v4;
  }
  while ( v4 < 6 );
  *((uchar *)v3 + 8) = Function_2224fc4(v3);
  v16 = v13;
  v17 = v14;
  v18 = v15;
  if ( v12 == 1 )
    *((uchar *)v3 + 8) = 1;
  v9 = *((char *)v3 + 8) * v16;
  v16 = v9;
  v17 *= *((char *)v3 + 8);
  v18 *= *((char *)v3 + 8);
  *v6 += v9;
  v6[1] += v17;
  result = v6[2] + v18;
  v6[2] = result;
  return result;
}

//----- (02225094) --------------------------------------------------------
int __fastcall Function_2225094(int *a1, uint *a2)
{
  int *v2;
  uint *v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a1;
  v3 = a2;
  Function_222325c(*a1, &v10, 4);
  *((uchar *)v2 + 8) = Function_2224fc4(v2);
  v7 = v11;
  v8 = v12;
  v9 = v13;
  if ( v10 == 1 )
    *((uchar *)v2 + 8) = 1;
  v4 = *((char *)v2 + 8) * v8;
  v5 = *((char *)v2 + 8) * v9;
  *v3 += *((char *)v2 + 8) * v7;
  v3[1] += v4;
  result = v3[2] + v5;
  v3[2] = result;
  return result;
}

//----- (02225104) --------------------------------------------------------
int __fastcall Function_2225104(int *a1, uint *a2)
{
  return Function_222325c(*a1, a2, 5);
}

//----- (02225110) --------------------------------------------------------
int Function_2225110()
{
  return 1;
}

//----- (02225114) --------------------------------------------------------
int __fastcall Function_2225114(int a1, int *a2)
{
  int v2;
  int *v3;
  short v4;
  short v5;
  short v6;
  short v8;
  short v9;
  short v10;
  short v11;
  short v12;
  short v13;
  int v14;
  int v15;

  v2 = a1;
  v3 = a2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  Function_2225104(a2, &v14);
  *((uchar *)v3 + 8) = Function_2224fc4(v3);
  if ( v15 == 1 )
    *((uchar *)v3 + 8) = 1;
  if ( v14 <= 3 && v14 >= 0 )
    JUMPOUT(__CS__, (char *)&loc_2225158 + *((short *)&off_2225156 + v14));
  v4 = v8 - v3[11];
  v5 = v9 - v3[12];
  v6 = v10 - v3[13];
  Function_2014874(v2, &v11);
  return 1;
}

//----- (022251F8) --------------------------------------------------------
int Function_22251f8()
{
  return 1;
}

//----- (022251FC) --------------------------------------------------------
int Function_22251fc()
{
  return 1;
}

//----- (02225200) --------------------------------------------------------
int __fastcall Function_2225200(int a1, int *a2)
{
  int v2;
  int *v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  Function_2225104(a2, &v8);
  *((uchar *)v3 + 8) = Function_2224fc4(v3);
  if ( v9 == 1 )
    *((uchar *)v3 + 8) = 1;
  if ( v8 <= 3 && v8 >= 0 )
    JUMPOUT(__CS__, (char *)&loc_2225244 + *((short *)&off_2225242 + v8));
  v5 -= v3[11];
  v6 -= v3[12];
  Function_2014890(v2, &v5);
  return 1;
}

//----- (022252C8) --------------------------------------------------------
int __fastcall Function_22252c8(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  short v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a2;
  v7 = 0;
  Function_2225104(a2, &v8);
  *((uchar *)v5 + 8) = Function_2224fc4(v5);
  if ( v9 == 1 )
    *((uchar *)v5 + 8) = 1;
  if ( v8 <= 3 && v8 >= 0 )
    JUMPOUT(__CS__, (char *)&loc_2225308 + *((short *)&off_2225306 + v8));
  Function_20148dc(v4, &v7);
  return 1;
}

//----- (0222534C) --------------------------------------------------------
int __fastcall Function_222534c(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  short v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a2;
  v7 = 0;
  Function_2225104(a2, &v8);
  *((uchar *)v5 + 8) = Function_2224fc4(v5);
  if ( v9 == 1 )
    *((uchar *)v5 + 8) = 1;
  if ( v8 <= 3 && v8 >= 0 )
    JUMPOUT(__CS__, (char *)&loc_222538C + *((short *)&off_222538A + v8));
  Function_2014910(v4, &v7);
  return 1;
}

//----- (022253CC) --------------------------------------------------------
int __fastcall Function_22253cc(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  short v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a2;
  v7 = 0;
  Function_2225104(a2, &v8);
  *((uchar *)v5 + 8) = Function_2224fc4(v5);
  if ( v9 == 1 )
    *((uchar *)v5 + 8) = 1;
  if ( v8 <= 3 && v8 >= 0 )
    JUMPOUT(__CS__, (char *)&loc_222540C + *((short *)&off_222540A + v8));
  Function_2014940(v4, &v7);
  return 1;
}

//----- (02225434) --------------------------------------------------------
int Function_2225434()
{
  return 1;
}

//----- (02225438) --------------------------------------------------------
int Function_2225438()
{
  return 1;
}

//----- (0222543C) --------------------------------------------------------
int Function_222543c()
{
  return 1;
}

//----- (02225440) --------------------------------------------------------
int Function_2225440()
{
  return 1;
}

//----- (02225444) --------------------------------------------------------
int __fastcall Function_2225444(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  Function_2225104(a2, &v10);
  *((uchar *)v5 + 8) = Function_2224fc4(v5);
  if ( v11 == 1 )
    *((uchar *)v5 + 8) = 1;
  if ( v10 <= 4 && v10 >= 0 )
    JUMPOUT(__CS__, (char *)&loc_2225488 + *((short *)&off_2225486 + v10));
  v7 -= v5[11];
  v8 -= v5[12];
  v9 -= v5[13];
  Function_2014970(v4, &v7);
  return 1;
}

//----- (02225550) --------------------------------------------------------
int __fastcall Function_2225550(int a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  short v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a2;
  v7 = 0;
  Function_2225104(a2, &v8);
  *((uchar *)v5 + 8) = Function_2224fc4(v5);
  if ( v9 == 1 )
    *((uchar *)v5 + 8) = 1;
  if ( v8 <= 3 && v8 >= 0 )
    JUMPOUT(__CS__, (char *)&loc_2225590 + *((short *)&off_222558E + v8));
  Function_20149bc(v4, &v7);
  return 1;
}

//----- (022255D4) --------------------------------------------------------
int __fastcall Function_22255d4(int a1, int a2, int a3)
{
  return ((int (__fastcall *)(int, int))*(&off_2239D6C + a1))(a2, a3);
}

//----- (022255EC) --------------------------------------------------------
int __fastcall Function_22255ec(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  char v11[60];
  int v12;

  v12 = a4;
  v4 = &dword_2239DA4;
  v5 = a1;
  v6 = v11;
  v7 = 7;
  do
  {
    v8 = *v4;
    v9 = v4[1];
    v4 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  *(uint *)v6 = *v4;
  return *(uint *)&v11[4 * v5];
}

//----- (02225614) --------------------------------------------------------
int __fastcall Function_2225614(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = 0;
  v5 = 0;
  do
  {
    v6 = Function_22255ec(v4++, a2, a3, a4);
    if ( v6 == 65278 )
      break;
    ++v5;
  }
  while ( v5 < 255 );
  if ( v5 < 255 )
    result = v4;
  else
    result = 0;
  return result;
}

//----- (02225640) --------------------------------------------------------
int __fastcall Function_2225640(int *a1, uint *a2)
{
  return Function_222325c(*a1, a2, 4);
}

//----- (0222564C) --------------------------------------------------------
int __fastcall Function_222564c(int a1, int a2, int a3, int a4)
{
  ushort *v4;
  short v6;
  short v7;
  short v8;
  short v9;
  int v10;

  v10 = a4;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v4 = (ushort *)Function_2014784(*(uint *)(a2 + 4));
  Function_20209d4(&v6, v4);
  return 1;
}

//----- (02225670) --------------------------------------------------------
int __fastcall Function_2225670(int a1, int a2, int a3, int a4)
{
  int v4;
  ushort *v5;
  short v7;
  short v8;
  short v9;
  short v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v7 = 0x2000;
  v8 = 0x2000;
  v9 = 0;
  v10 = 0;
  v5 = (ushort *)Function_2014784(*(uint *)(a2 + 4));
  Function_2014788(*(uint *)(v4 + 4), 1);
  Function_20209d4(&v7, v5);
  return 1;
}

//----- (022256AC) --------------------------------------------------------
int __fastcall Function_22256ac(int a1, int *a2)
{
  int *v2;
  ushort *v3;
  short v5;
  short v6;
  short v7;
  short v8;
  char v9;
  int v10;
  int v11;
  int v12;

  v2 = a2;
  v8 = 0;
  Function_2225640(a2, &v9);
  v5 = v10;
  v6 = v11;
  v7 = v12;
  v3 = (ushort *)Function_2014784(v2[1]);
  Function_20209d4(&v5, v3);
  return 1;
}

//----- (022256E8) --------------------------------------------------------
int __fastcall Function_22256e8(int a1, int a2, int a3, int a4)
{
  int v4;
  ushort *v5;
  short v7;
  short v8;
  short v9;
  short v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v7 = -12288;
  v8 = 0x2000;
  v9 = 4096;
  v10 = 0;
  v5 = (ushort *)Function_2014784(*(uint *)(a2 + 4));
  Function_2014788(*(uint *)(v4 + 4), 1);
  Function_20209d4(&v7, v5);
  return 1;
}

//----- (02225724) --------------------------------------------------------
int __fastcall Function_2225724(int a1, int *a2, int a3, int a4)
{
  int *v4;
  ushort *v5;
  short v7;
  short v8;
  short v9;
  short v10;
  short v11;
  short v12;
  short v13;
  short v14;
  int v15;

  v15 = a4;
  v4 = a2;
  v11 = -15872;
  v12 = 5952;
  v13 = 4096;
  v14 = 0;
  v7 = 9248;
  v8 = 3744;
  v9 = 0;
  v10 = 0;
  v5 = (ushort *)Function_2014784(a2[1]);
  Function_2014788(v4[1], 1);
  if ( Function_221fdd4(*v4) == 1 )
    Function_20209d4(&v11, v5);
  else
    Function_20209d4(&v7, v5);
  return 1;
}

//----- (02225784) --------------------------------------------------------
int __fastcall Function_2225784(int a1, int a2, int a3, int a4)
{
  int v4;
  ushort *v5;
  short v7;
  short v8;
  short v9;
  short v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v7 = -15872;
  v8 = 5952;
  v9 = 4096;
  v10 = 0;
  v5 = (ushort *)Function_2014784(*(uint *)(a2 + 4));
  Function_2014788(*(uint *)(v4 + 4), 1);
  Function_20209d4(&v7, v5);
  return 1;
}

//----- (022257C0) --------------------------------------------------------
int __fastcall Function_22257c0(int a1, int a2, int a3, int a4)
{
  int v4;
  ushort *v5;
  short v7;
  short v8;
  short v9;
  short v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v7 = 0;
  v8 = 0;
  v9 = -6000;
  v10 = 0;
  v5 = (ushort *)Function_2014784(*(uint *)(a2 + 4));
  Function_2014788(*(uint *)(v4 + 4), 1);
  Function_20209d4(&v7, v5);
  return 1;
}

//----- (022257FC) --------------------------------------------------------
int __fastcall Function_22257fc(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  char v5;

  v2 = a2;
  v3 = (uint *)Function_2014784(a2[1]);
  Function_22356e8(*v2, v2[9], &v5);
  Function_2020acc(&v5, v3);
  return 1;
}

//----- (02225824) --------------------------------------------------------
int __fastcall Function_2225824(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  char v5;

  v2 = a2;
  v3 = (uint *)Function_2014784(a2[1]);
  Function_22356e8(*v2, v2[10], &v5);
  Function_2020acc(&v5, v3);
  return 1;
}

//----- (0222584C) --------------------------------------------------------
int __fastcall Function_222584c(int a1, int a2, int a3)
{
  return ((int (__fastcall *)(int, int))*(&off_2239E10 + a1))(a2, a3);
}

//----- (02225864) --------------------------------------------------------
int __fastcall Function_2225864(int result, int a2, ushort *a3, ushort *a4)
{
  if ( a3 )
    *a3 = *((ushort *)&loc_2239E34 + 12 * result + 2 * a2);
  if ( a4 )
  {
    result = *((short *)&loc_2239E36 + 12 * result + 2 * a2);
    *a4 = result;
  }
  return result;
}

//----- (02225898) --------------------------------------------------------
int __fastcall Function_2225898(int a1, int a2, ushort *a3, ushort *a4)
{
  int v4;
  int v5;
  ushort *v6;
  ushort *v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( Function_221fdd4(a1) == 1 )
    return Function_2225864(0, v5 + 2, v6, v7);
  if ( Function_2223364(v4) == 1 )
    return Function_2225864(1, v5 - 2, v6, v7);
  return Function_2225864(0, v5, v6, v7);
}

//----- (022258E0) --------------------------------------------------------
int __fastcall Function_22258e0(int a1, int a2)
{
  int v2;
  int v3;
  BOOL v4;
  int v5;
  int result;

  v2 = a1;
  v3 = Function_2235254(a1, a2);
  v4 = Function_2223364(v2) == 1;
  v5 = Function_221fdd4(v2);
  if ( v5 == 1 )
    v3 += 2;
  switch ( (uchar)v5 )
  {
    case 0:
    case 2:
      result = *((short *)&loc_2239E34 + 12 * v4 + 2 * v3);
      break;
    case 1:
    case 3:
      result = *((short *)&loc_2239E36 + 12 * v4 + 2 * v3);
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (02225950) --------------------------------------------------------
int __fastcall Function_2225950(int *a1)
{
  uint *v1;

  v1 = (uint *)Function_2021f9c(*a1);
  return (uchar)Function_201fab4(v1, 1);
}

//----- (02225964) --------------------------------------------------------
int __fastcall Function_2225964(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = 1;
  v4 = Function_223525c(a1, a2);
  if ( Function_221fdd4(v2) )
  {
    if ( v4 == 3 )
      v3 = -1;
  }
  else if ( v4 == 4 )
  {
    v3 = -1;
  }
  return v3;
}

//----- (0222598C) --------------------------------------------------------
int __fastcall Function_222598c(int a1, int a2)
{
  int v2;

  v2 = 1;
  if ( Function_223525c(a1, a2) == 4 )
    v2 = -1;
  return v2;
}

//----- (022259A0) --------------------------------------------------------
int __fastcall Function_22259a0(int a1, int a2, int a3)
{
  return FX_Div(a2 - a1, a3 << 12);
}

//----- (022259AC) --------------------------------------------------------
int __fastcall Function_22259ac(int a1, int a2, int a3)
{
  int v3;
  int v5;

  v5 = FX_Div(a2 - a1, a3);
  if ( Function_20bdbcc(v5, &v5) )
    v5 += 4096;
  v3 = v5;
  if ( v5 < 0 )
    v3 = -v5;
  return v3 >> 12;
}

//----- (022259DC) --------------------------------------------------------
int __fastcall Function_22259dc(ushort *a1, int *a2, short a3, short a4)
{
  return Function_200d4c4(a2, (short)(a3 + *a1), (short)(a4 + a1[1]));
}

//----- (022259FC) --------------------------------------------------------
int __fastcall Function_22259fc(int a1, int *a2)
{
  int *v2;
  uint v4;
  uint v5;

  v2 = a2;
  Function_2225fa4(a1, &v5, &v4);
  return Function_200d6e8(v2, v5, v4);
}

//----- (02225A18) --------------------------------------------------------
int __fastcall Function_2225a18(short *a1, int a2, int a3, int a4)
{
  int v4;
  short *v5;
  int v6;

  v4 = a2;
  v5 = a1;
  v6 = a4;
  Function_2007dec(a2, 0, a3 + *a1);
  return Function_2007dec(v4, 1u, v6 + v5[1]);
}

//----- (02225A3C) --------------------------------------------------------
int __fastcall Function_2225a3c(short *a1, int a2)
{
  short *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2007dec(a2, 0xCu, *a1);
  return Function_2007dec(v3, 0xDu, v2[1]);
}

//----- (02225A5C) --------------------------------------------------------
uint __fastcall Function_2225a5c(uint *a1, int a2, int a3, int a4, ushort a5, int a6, int a7, int a8)
{
  int v8;
  uint *v9;
  uint result;

  v8 = a4;
  v9 = a1;
  a1[1] = a8;
  a1[2] = a2;
  a1[3] = a6;
  a1[4] = a4;
  a1[5] = a7;
  a1[6] = s32_div_f(a3 - a2, a8);
  result = s32_div_f(a5 - v8, a8);
  v9[7] = result;
  return result;
}

//----- (02225A8C) --------------------------------------------------------
uint __fastcall Function_2225a8c(int *a1, uint a2, uint a3, int a4, ushort a5, int a6, int a7, short a8)
{
  int *v8;
  uint v9;
  uint v10;
  uint result;
  int v12;

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v12 = a4;
  if ( !a1 )
    ErrorHandler();
  if ( v9 > v10 )
    a8 = -a8;
  v8[1] = Function_22259ac(v9 << 12, v10 << 12, a8 << 12);
  v8[2] = v9;
  v8[3] = a6;
  v8[4] = v12;
  v8[5] = a7;
  v8[6] = a8;
  result = s32_div_f(a5 - v12, v8[1]);
  v8[7] = result;
  return result;
}

//----- (02225AE0) --------------------------------------------------------
int __fastcall Function_2225ae0(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  if ( !*(uint *)(v1 + 4) )
    return 0;
  *(uint *)(v1 + 8) += *(uint *)(v1 + 24);
  *(uint *)(v1 + 16) += *(uint *)(v1 + 28);
  *(uint *)(v1 + 8) &= 0xFFFFu;
  *(uint *)(v1 + 16) &= 0xFFFFu;
  --*(uint *)(v1 + 4);
  *(ushort *)v1 = (int)((ll_mul(SLOWORD(Unknown_20f983c[*(uint *)(v1 + 8) >> 4]), *(int *)(v1 + 12))
                             + 2048) >> 12) >> 12;
  *(ushort *)(v1 + 2) = (int)((ll_mul(
                                       *((short *)Unknown_20f983c + 2 * (*(uint *)(v1 + 16) >> 4) + 1),
                                       *(int *)(v1 + 20))
                                   + 2048) >> 12) >> 12;
  return 1;
}

//----- (02225B78) --------------------------------------------------------
int __fastcall Function_2225b78(int a1, short a2, short a3, int *a4)
{
  ushort *v4;
  short v5;
  short v6;
  int *v7;

  v4 = (ushort *)a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !Function_2225ae0(a1) )
    return 0;
  Function_22259dc(v4, v7, v5, v6);
  return 1;
}

//----- (02225BA0) --------------------------------------------------------
int __fastcall Function_2225ba0(int a1, int a2, int a3, int a4)
{
  short *v4;
  int v5;
  int v6;
  int v7;

  v4 = (short *)a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !Function_2225ae0(a1) )
    return 0;
  Function_2225a18(v4, v7, v5, v6);
  return 1;
}

//----- (02225BC8) --------------------------------------------------------
int __fastcall Function_2225bc8(int a1, int a2, int a3, int a4, short a5, ushort a6)
{
  int v6;
  int v7;
  int v8;
  int result;
  int v10;

  v6 = a1;
  v7 = a2;
  v8 = a4;
  v10 = a3;
  if ( !a1 )
    ErrorHandler();
  *(ushort *)v6 = v7;
  *(ushort *)(v6 + 2) = v8;
  *(uint *)(v6 + 4) = a6;
  *(uint *)(v6 + 8) = Function_22259a0(v7 << 12, v10 << 12, a6);
  *(uint *)(v6 + 12) = Function_22259a0(v8 << 12, a5 << 12, a6);
  result = v7 << 12;
  *(uint *)(v6 + 16) = v7 << 12;
  *(uint *)(v6 + 20) = v8 << 12;
  return result;
}

//----- (02225C14) --------------------------------------------------------
int __fastcall Function_2225c14(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  if ( !*(uint *)(v1 + 4) )
    return 0;
  *(uint *)(v1 + 16) += *(uint *)(v1 + 8);
  *(uint *)(v1 + 20) += *(uint *)(v1 + 12);
  *(ushort *)v1 = *(uint *)(v1 + 16) >> 12;
  *(ushort *)(v1 + 2) = *(uint *)(v1 + 20) >> 12;
  --*(uint *)(v1 + 4);
  return 1;
}

//----- (02225C50) --------------------------------------------------------
int __fastcall Function_2225c50(int a1, int *a2)
{
  ushort *v2;
  int *v3;

  v2 = (ushort *)a1;
  v3 = a2;
  if ( !Function_2225c14(a1) )
    return 0;
  Function_22259dc(v2, v3, 0, 0);
  return 1;
}

//----- (02225C74) --------------------------------------------------------
int __fastcall Function_2225c74(int a1, int a2)
{
  short *v2;
  int v3;

  v2 = (short *)a1;
  v3 = a2;
  if ( !Function_2225c14(a1) )
    return 0;
  Function_2225a18(v2, v3, 0, 0);
  return 1;
}

//----- (02225C98) --------------------------------------------------------
uint __fastcall Function_2225c98(int a1, int a2, int a3, int a4, short a5, short a6, ushort a7, int a8)
{
  int v8;

  v8 = a2;
  Function_2225bc8(a1, a3, a4, a5, a6, a7);
  *(ushort *)v8 = 0;
  *(ushort *)(v8 + 2) = 0;
  return Function_2225a5c((uint *)v8, 0, 0, 0x3FFF, 0xBFFFu, 0, a8, a7);
}

//----- (02225CE4) --------------------------------------------------------
BOOL __fastcall Function_2225ce4(ushort *a1, ushort *a2)
{
  ushort *v2;
  ushort *v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    ErrorHandler();
  if ( !v3 )
    ErrorHandler();
  v4 = Function_2225c14((int)v2);
  v5 = Function_2225ae0((int)v3);
  *v2 += *v3;
  v2[1] += v3[1];
  return v4 != v5 || v4;
}

//----- (02225D2C) --------------------------------------------------------
int __fastcall Function_2225d2c(ushort *a1, ushort *a2, int *a3)
{
  ushort *v3;
  int *v4;

  v3 = a1;
  v4 = a3;
  if ( !Function_2225ce4(a1, a2) )
    return 0;
  Function_22259dc(v3, v4, 0, 0);
  return 1;
}

//----- (02225D50) --------------------------------------------------------
int __fastcall Function_2225d50(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    ErrorHandler();
  *v4 = v5;
  v4[1] = v7;
  result = Function_22259a0(v5 << 12, v6 << 12, v7) >> 12;
  v4[2] = result;
  return result;
}

//----- (02225D78) --------------------------------------------------------
int __fastcall Function_2225d78(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    ErrorHandler();
  *v4 = v5;
  v8 = v5 << 12;
  v4[1] = v7;
  result = Function_22259a0(v8, v6 << 12, v7);
  v4[2] = result;
  v4[3] = v8;
  return result;
}

//----- (02225DA0) --------------------------------------------------------
int __fastcall Function_2225da0(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  if ( !v1[1] )
    return 0;
  *v1 += v1[2];
  --v1[1];
  return 1;
}

//----- (02225DC8) --------------------------------------------------------
int __fastcall Function_2225dc8(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  if ( !v1[1] )
    return 0;
  v2 = v1[3] + v1[2];
  v1[3] = v2;
  *v1 = v2 >> 12;
  --v1[1];
  return 1;
}

//----- (02225DF4) --------------------------------------------------------
int __fastcall Function_2225df4(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int result;

  v5 = a1;
  a1[1] = a5;
  a1[2] = a2;
  a1[3] = a4;
  result = u32_div_f(a3 - a2, a5);
  v5[4] = result;
  return result;
}

//----- (02225E0C) --------------------------------------------------------
int __fastcall Function_2225e0c(int *a1)
{
  int *v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  if ( !v1[1] )
    return 0;
  v1[2] = (v1[2] + v1[4]) & 0xFFFF;
  --v1[1];
  *v1 = (int)((ll_mul(*((short *)Unknown_20f983c + 2 * (v1[2] >> 4) + 1), v1[3]) + 2048) >> 12) >> 12;
  return 1;
}

//----- (02225E68) --------------------------------------------------------
int __fastcall Function_2225e68(short *a1, int a2, int a3, int a4, int a5)
{
  short *v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  uint v10;
  int result;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( !a1 )
    ErrorHandler();
  *((uint *)v5 + 1) = a5;
  v9 = s32_div_f(v6 << 8, v7);
  v10 = s32_div_f(v8 << 8, v7);
  *((uint *)v5 + 2) = Function_22259a0(v9 << 12, v10 << 12, a5);
  *v5 = v9;
  v5[1] = v9;
  *((uint *)v5 + 4) = *v5 << 12;
  result = v5[1] << 12;
  *((uint *)v5 + 5) = result;
  return result;
}

//----- (02225EB8) --------------------------------------------------------
int __fastcall Function_2225eb8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  v2 = *(uint *)(v1 + 4);
  if ( !v2 )
    return 0;
  *(uint *)(v1 + 4) = v2 - 1;
  *(uint *)(v1 + 16) += *(uint *)(v1 + 8);
  *(uint *)(v1 + 20) += *(uint *)(v1 + 8);
  *(ushort *)v1 = *(uint *)(v1 + 16) >> 12;
  *(ushort *)(v1 + 2) = *(uint *)(v1 + 20) >> 12;
  return 1;
}

//----- (02225EF0) --------------------------------------------------------
int __fastcall Function_2225ef0(short *a1, int a2, int a3, int a4, short a5, short a6, int a7)
{
  short *v7;
  int v8;
  int v9;
  uint v10;
  uint v11;
  uint v12;
  uint v13;
  int result;
  int v15;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v15 = a4;
  if ( !a1 )
    ErrorHandler();
  *((uint *)v7 + 1) = a7;
  v10 = s32_div_f(v8 << 8, a6);
  v11 = s32_div_f(v9 << 8, a6);
  *((uint *)v7 + 2) = Function_22259a0(v10 << 12, v11 << 12, a7);
  v12 = s32_div_f(v15 << 8, a6);
  v13 = s32_div_f(a5 << 8, a6);
  *((uint *)v7 + 3) = Function_22259a0(v12 << 12, v13 << 12, a7);
  *v7 = v10;
  v7[1] = v12;
  *((uint *)v7 + 4) = *v7 << 12;
  result = v7[1] << 12;
  *((uint *)v7 + 5) = result;
  return result;
}

//----- (02225F6C) --------------------------------------------------------
int __fastcall Function_2225f6c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  v2 = *(uint *)(v1 + 4);
  if ( !v2 )
    return 0;
  *(uint *)(v1 + 4) = v2 - 1;
  *(uint *)(v1 + 16) += *(uint *)(v1 + 8);
  *(uint *)(v1 + 20) += *(uint *)(v1 + 12);
  *(ushort *)v1 = *(uint *)(v1 + 16) >> 12;
  *(ushort *)(v1 + 2) = *(uint *)(v1 + 20) >> 12;
  return 1;
}

//----- (02225FA4) --------------------------------------------------------
int __fastcall Function_2225fa4(short *a1, int *a2, int *a3)
{
  short *v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = fflt(*a1);
  *v4 = f_div(v6, 0x43800000u);
  v7 = fflt(v3[1]);
  result = f_div(v7, 0x43800000u);
  *v5 = result;
  return result;
}

//----- (02225FD4) --------------------------------------------------------
int __fastcall Function_2225fd4(int a1, int a2, int a3, int a4)
{
  int v4;
  long long v5;
  int v6;
  int v7;
  int v9;
  int v10;

  v10 = a4;
  v4 = (80 - 2 * a2) << 12;
  v5 = ll_mul(v4, a3);
  v6 = FX_Div((v5 + 2048) >> 12, 0x100000);
  v7 = Function_20bdbcc(v4 - v6, &v9);
  if ( v7 )
    v7 += 2048;
  return (int)((((v9 + v7) >> 12) + ((uint)(v9 + v7) >> 31)) << 15) >> 16;
}

//----- (02226024) --------------------------------------------------------
int __fastcall Function_2226024(int a1, int a2, int a3, int a4, int a5)
{
  short v5;
  int v6;
  int v7;
  int v8;

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = Function_2225fd4(a2, a3, a4, a4);
  if ( a5 == 1 )
  {
    v8 = -(short)v8;
    v6 = (short)(v6 - v5);
  }
  return Function_2007dec(v7, 1u, v6 + v8);
}

//----- (0222605C) --------------------------------------------------------
int __fastcall Function_222605c(int *a1, int a2, int a3, int a4, int a5)
{
  short v5;
  short v6;
  int *v7;
  int v8;
  int v10;

  v10 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  LOWORD(v8) = Function_2225fd4(a2, a3, a4, a4);
  if ( a5 == 1 )
  {
    v8 = -(short)v8;
    v6 -= v5;
  }
  Function_200d550(v7, (ushort *)&v10 + 1, &v10);
  return Function_200d4c4(v7, SHIWORD(v10), (short)(v6 + v8));
}

//----- (022260A8) --------------------------------------------------------
int __fastcall Function_22260a8(int a1, int *a2)
{
  int v2;
  int *v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_2225eb8(a1) )
    return 0;
  Function_22259fc(v2, v3);
  return 1;
}

//----- (022260C8) --------------------------------------------------------
int __fastcall Function_22260c8(int a1, int a2)
{
  short *v2;
  int v3;

  v2 = (short *)a1;
  v3 = a2;
  if ( !Function_2225eb8(a1) )
    return 0;
  Function_2225a3c(v2, v3);
  return 1;
}

//----- (022260E8) --------------------------------------------------------
int __fastcall Function_22260e8(int a1, int a2)
{
  short *v2;
  int v3;

  v2 = (short *)a1;
  v3 = a2;
  if ( !Function_2225f6c(a1) )
    return 0;
  Function_2225a3c(v2, v3);
  return 1;
}

//----- (02226108) --------------------------------------------------------
int __fastcall Function_2226108(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( !a1 )
    ErrorHandler();
  *(uint *)(v5 + 4) = v8;
  *(uint *)(v5 + 8) = v8;
  *(uint *)(v5 + 12) = a5;
  *(uint *)(v5 + 16) = 0;
  *(uint *)(v5 + 20) = v6;
  *(uint *)(v5 + 24) = v7;
  *(uint *)(v5 + 28) = -v6;
  result = -v7;
  *(uint *)(v5 + 32) = -v7;
  *(ushort *)v5 = 0;
  *(ushort *)(v5 + 2) = 0;
  return result;
}

//----- (02226138) --------------------------------------------------------
int __fastcall Function_2226138(short *a1)
{
  short *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  if ( !*((uint *)v1 + 3) )
    return 0;
  v2 = *((uint *)v1 + 1) + 1;
  *((uint *)v1 + 1) = v2;
  if ( v2 >= *((uint *)v1 + 2) )
  {
    *((uint *)v1 + 1) = 0;
    v3 = *((uint *)v1 + 7);
    *((uint *)v1 + 7) = *v1;
    if ( v3 )
      *v1 = -(short)v3;
    else
      *v1 = 0;
    v4 = *((uint *)v1 + 8);
    *((uint *)v1 + 8) = v1[1];
    if ( v4 )
      v5 = -v4;
    else
      LOWORD(v5) = 0;
    v1[1] = v5;
    v6 = *((uint *)v1 + 4) + 1;
    *((uint *)v1 + 4) = v6;
    if ( v6 >= 4 )
    {
      *((uint *)v1 + 4) = 0;
      --*((uint *)v1 + 3);
    }
  }
  return 1;
}

//----- (0222619C) --------------------------------------------------------
int __fastcall Function_222619c(short *a1, int a2, int a3, int a4)
{
  short *v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !Function_2226138(a1) )
    return 0;
  Function_2225a18(v4, v7, v5, v6);
  return 1;
}

//----- (022261C4) --------------------------------------------------------
int __fastcall Function_22261c4(int a1, int *a2, int a3, short a4, short a5, short a6, uchar a7, char a8, int a9, int a10, int a11, int a12)
{
  int v12;
  int v13;
  int v14;
  int *v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int result;
  int v21;
  int v22;
  int *v23;

  v12 = a1;
  v23 = a2;
  *(ushort *)a1 = a4;
  v13 = 0;
  *(ushort *)(a1 + 2) = a5;
  *(uint *)(a1 + 148) = a3;
  *(ushort *)(a1 + 168) = a6;
  *(ushort *)(a1 + 170) = 0;
  *(ushort *)(a1 + 172) = a7;
  *(uchar *)(a1 + 174) = a8;
  if ( (int)a7 > 0 )
  {
    v14 = a1;
    do
    {
      v15 = v23;
      v16 = (int *)(v14 + 4);
      v17 = 4;
      do
      {
        v18 = *v15;
        v19 = v15[1];
        v15 += 2;
        *v16 = v18;
        v16[1] = v19;
        v16 += 2;
        --v17;
      }
      while ( v17 );
      ++v13;
      *v16 = *v15;
      v14 += 36;
    }
    while ( v13 < a7 );
  }
  *(uint *)(v12 + 152) = a9;
  *(uint *)(v12 + 156) = a10;
  *(uint *)(v12 + 160) = a11;
  *(uint *)(v12 + 164) = a12;
  result = *(uchar *)(v12 + 172);
  v21 = 0;
  if ( result > 0 )
  {
    v22 = v12;
    do
    {
      Function_200d3f4(*(uint **)(v22 + 152), 0);
      result = *(uchar *)(v12 + 172);
      ++v21;
      v22 += 4;
    }
    while ( v21 < result );
  }
  return result;
}

//----- (02226274) --------------------------------------------------------
int __fastcall Function_2226274(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char *v6;
  short *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  int v15;
  char *v16;
  uint v17;
  uint v18;
  char v19;
  int v20;

  v20 = a4;
  v4 = a1;
  v5 = 0;
  v6 = &v19;
  do
  {
    ++v5;
    *(uint *)v6 = 1;
    v6 += 4;
  }
  while ( v5 < 4 );
  if ( *(ushort *)(v4 + 168) <= (uint)*(ushort *)(v4 + 170) )
  {
    Function_200d3f4(*(uint **)(v4 + 4 * *(uchar *)(v4 + 173) + 152), 1);
    ++*(uchar *)(v4 + 173);
    *(ushort *)(v4 + 170) = 0;
  }
  if ( *(uchar *)(v4 + 173) < (uint)*(uchar *)(v4 + 172) )
    ++*(ushort *)(v4 + 170);
  v15 = 0;
  if ( (int)*(uchar *)(v4 + 173) > 0 )
  {
    v7 = (short *)(v4 + 4);
    v16 = &v19;
    v8 = v4;
    v9 = v4;
    do
    {
      v10 = (*(int (__fastcall **)(short *))(v4 + 148))(v7);
      *(uint *)v16 = v10;
      if ( v10 )
      {
        if ( *(uchar *)(v4 + 174) )
        {
          Function_2225fa4(v7, (int *)&v18, (int *)&v17);
          Function_200d6e8(*(int **)(v9 + 152), v18, v17);
        }
        else
        {
          Function_200d4c4(
            *(int **)(v9 + 152),
            (short)(*(ushort *)v4 + *(ushort *)(v8 + 4)),
            (short)(*(ushort *)(v4 + 2) + *(ushort *)(v8 + 6)));
        }
      }
      else
      {
        Function_200d3f4(*(uint **)(v9 + 152), 0);
      }
      v7 += 18;
      v16 += 4;
      v8 += 36;
      ++v15;
      v9 += 4;
    }
    while ( v15 < *(uchar *)(v4 + 173) );
  }
  v11 = *(uchar *)(v4 + 172);
  v12 = 0;
  if ( v11 <= 0 )
    return 0;
  v13 = &v19;
  while ( *(uint *)v13 != 1 )
  {
    ++v12;
    v13 += 4;
    if ( v12 >= v11 )
      return 0;
  }
  return 1;
}

//----- (022263A4) --------------------------------------------------------
int __fastcall Function_22263a4(uint *a1, int a2, int a3)
{
  int v3;
  uint *v4;
  int result;

  v3 = a2;
  v4 = a1;
  Function_2225a5c(a1, 0, 0xFFFF, 0, 0xFFFFu, 0x20000, -32768, a3);
  result = v4[1];
  v4[1] *= v3;
  return result;
}

//----- (022263DC) --------------------------------------------------------
short *__fastcall Function_22263dc(int *a1, int a2)
{
  short *v2;
  int *v3;
  short *result;

  v2 = (short *)a2;
  v3 = a1;
  if ( Function_2225c14(a2) )
  {
    if ( *v2 < 0 )
      *v2 = 0;
    if ( v2[1] < 0 )
      v2[1] = 0;
    result = &REG_BLDALPHA;
    REG_BLDALPHA = *v2 | (v2[1] << 8);
  }
  else
  {
    *((uint *)v2 + 9) = 1;
    result = (short *)Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (02226424) --------------------------------------------------------
uint *__fastcall Function_2226424(int a1, int a2, int a3, int a4, short a5, ushort a6)
{
  int v6;

  v6 = a1;
  Function_2225bc8(a1, a2, a3, a4, a5, a6);
  *(uint *)(v6 + 36) = 0;
  return AddTaskToTaskList1((int)Function_22263dc, v6, 0);
}

//----- (02226454) --------------------------------------------------------
int __fastcall Function_2226454(int a1)
{
  return *(uint *)(a1 + 36);
}

//----- (02226458) --------------------------------------------------------
uint __fastcall Function_2226458(int a1, int a2)
{
  if ( !*(uint *)(a2 + 8) )
    return Function_2013ba8();
  *(uint *)(a2 + 12) = 1;
  return (*(int (__fastcall **)(uint))(a2 + 16))(*(uint *)(a2 + 24));
}

//----- (02226474) --------------------------------------------------------
int __fastcall Function_2226474(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 8);
  if ( result )
  {
    result = *(uint *)(a2 + 12);
    if ( result )
    {
      (*(void (__fastcall **)(uint))(a2 + 20))(*(uint *)(a2 + 24));
      result = 0;
      *(uint *)(v2 + 12) = 0;
    }
  }
  return result;
}

//----- (02226490) --------------------------------------------------------
uint *__fastcall Function_2226490(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  uint *result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( !a1 )
    ErrorHandler();
  v4[2] = 1;
  v4[3] = 0;
  v4[6] = v5;
  v4[4] = v6;
  v4[5] = v7;
  v4[1] = AddTaskToTaskList3((int)Function_2226458, (int)v4, 0);
  result = AddTaskToTaskList2((int)Function_2226474, (int)v4, 0);
  *v4 = result;
  return result;
}

//----- (022264D0) --------------------------------------------------------
uint __fastcall Function_22264d0(int **a1)
{
  int **v1;
  int *v2;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  v2 = v1[1];
  if ( v2 )
    Call_RemoveTaskFromTaskList(v2);
  if ( *v1 )
    Call_RemoveTaskFromTaskList(*v1);
  return Function_2013ba8();
}

//----- (022264F4) --------------------------------------------------------
int __fastcall Function_22264f4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  result = 0;
  *(uint *)(v1 + 8) = 0;
  return result;
}

//----- (02226504) --------------------------------------------------------
uint __fastcall Function_2226504(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2013b68(*(uint *)(a1 + 28));
  Function_2013ba8();
  return Function_2013bb8(v2, *(uint *)(v1 + 1568), 4u, 1);
}

//----- (02226528) --------------------------------------------------------
uint __fastcall Function_2226528(int a1)
{
  int v1;

  v1 = a1;
  Function_2013b94(*(uint *)(a1 + 28));
  return Function_2226504(v1);
}

//----- (0222653C) --------------------------------------------------------
uint __fastcall Function_222653c(int a1)
{
  return Function_2226504(a1);
}

//----- (02226544) --------------------------------------------------------
int *__fastcall Function_2226544(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  int *v6;
  uchar *v7;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = (int *)malloc(a3, 1572);
  Call_FillMemWithValue(v6, 0, 0x624u);
  if ( !v6 )
    ErrorHandler();
  v7 = Function_2013b10(v4, (int)(v6 + 8), (int)(v6 + 200));
  v6[7] = (int)v7;
  if ( !v7 )
    ErrorHandler();
  v6[392] = v5;
  MIi_CpuClear32(v3, v6 + 8, 768);
  MIi_CpuClear32(v3, v6 + 200, 768);
  Function_2226490(v6, (int)v6, (int)Function_2226528, (int)Function_222653c);
  return v6;
}

//----- (022265C0) --------------------------------------------------------
uint __fastcall Function_22265c0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_22264d0((int **)v1);
  v2 = *(uint *)(v1 + 28);
  if ( v2 )
    Function_2013b40(v2);
  return free(v1);
}

//----- (022265E4) --------------------------------------------------------
int __fastcall Function_22265e4(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return Function_2013b54(*(uint *)(v1 + 28));
}

//----- (022265F8) --------------------------------------------------------
int __fastcall Function_22265f8(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return Function_22264f4(v1);
}

//----- (0222660C) --------------------------------------------------------
uint __fastcall Function_222660c(int a1)
{
  int v1;

  v1 = a1;
  Function_2013da4(*(uint *)(a1 + 28));
  return Function_2013ddc(*(uint *)(v1 + 28));
}

//----- (02226620) --------------------------------------------------------
uint __fastcall Function_2226620(int a1)
{
  return Function_2013ddc(*(uint *)(a1 + 28));
}

//----- (0222662C) --------------------------------------------------------
int *__fastcall Function_222662c(char a1, char a2, int a3, int a4, short a5, int a6, uint a7, int a8, uint a9)
{
  char v9;
  int v10;
  int *v11;
  int v12;
  char v14;
  int v15;

  v9 = a1;
  v14 = a2;
  v15 = a3;
  v10 = a4;
  v11 = (int *)malloc(a9, 32);
  if ( !v11 )
    ErrorHandler();
  Call_FillMemWithValue(v11, 0, 0x20u);
  v12 = Function_22266f0(a6);
  v11[7] = (int)Function_2013be0(a9);
  Function_2013c10(v11[7], v9, v14, v15, v10, a5, v12, a8, a7);
  Function_2226490(v11, (int)v11, (int)Function_222660c, (int)Function_2226620);
  return v11;
}

//----- (0222669C) --------------------------------------------------------
uint __fastcall Function_222669c(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_22264d0((int **)v1);
  v2 = *(int **)(v1 + 28);
  if ( v2 )
    Function_2013d74(v2);
  return free(v1);
}

//----- (022266C0) --------------------------------------------------------
int __fastcall Function_22266c0(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return Function_2013d94(*(uint *)(v1 + 28));
}

//----- (022266D4) --------------------------------------------------------
int __fastcall Function_22266d4(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return Function_22264f4(v1);
}

//----- (022266E8) --------------------------------------------------------
int __fastcall Function_22266e8(int a1, int a2)
{
  return a1 | (a2 << 16);
}

//----- (022266F0) --------------------------------------------------------
void Function_22266f0()
{
  ;
}

//----- (02226728) --------------------------------------------------------
ushort *__fastcall Function_2226728(int a1, int a2, int a3, int a4, ushort *a5, ushort *a6)
{
  ushort *result;

  *a5 = (a1 + a3) / 2;
  result = a6;
  *a6 = (a2 + a4) / 2;
  return result;
}

//----- (02226744) --------------------------------------------------------
uint __fastcall Function_2226744(short a1, short a2, short a3, short a4, uint *a5)
{
  uint result;

  result = FX_Sqrt(((short)(a4 - a2) * (short)(a4 - a2)
                  + (short)(a1 - a3) * (short)(a1 - a3)) << 12);
  *a5 = result;
  return result;
}

//----- (0222676C) --------------------------------------------------------
int __fastcall Function_222676c(int a1, short a2, int a3, short a4, ushort *a5)
{
  int v5;
  int result;

  v5 = (short)(a4 - a2);
  result = FX_Atan2Idx(v5 << 12, (a1 - a3) << 16 >> 4);
  *a5 = result;
  if ( *a5 )
  {
    if ( v5 < 0 )
    {
      result = 0xFFFF * ((ushort)*a5 - 0x7FFF);
      *a5 = 0x7FFF - *a5;
    }
  }
  return result;
}

//----- (022267A8) --------------------------------------------------------
int __fastcall Function_22267a8(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;

  v3 = *a1;
  if ( a3 >= 0 )
  {
    v6 = v3 + a3;
    if ( v6 >= a2 )
    {
      *a1 = a2;
      result = 1;
    }
    else
    {
      *a1 = v6;
      result = 0;
    }
  }
  else
  {
    v4 = v3 + a3;
    if ( v4 <= a2 )
    {
      *a1 = a2;
      result = 1;
    }
    else
    {
      *a1 = v4;
      result = 0;
    }
  }
  return result;
}

//----- (022267D4) --------------------------------------------------------
int __fastcall Function_22267d4(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  char v7;

  v2 = a2;
  result = *(uint *)a2;
  if ( *(uint *)a2 )
  {
    ++*(uchar *)(a2 + 23);
    result = *(char *)(a2 + 22);
    if ( *(char *)(a2 + 23) >= result )
    {
      *(uchar *)(a2 + 23) = 0;
      Function_20039b0(
        *(uint *)(a2 + 24),
        *(uint *)(a2 + 8),
        *(ushort *)(a2 + 12),
        *(ushort *)(a2 + 14),
        *(uchar *)(a2 + 20),
        *(ushort *)(a2 + 16));
      v4 = *(uchar *)(v2 + 19);
      v5 = *(uchar *)(v2 + 20);
      if ( v5 == v4 )
      {
        result = 0;
        *(uint *)v2 = 0;
      }
      else
      {
        v6 = *(char *)(v2 + 21);
        v7 = v5 + v6;
        result = v7;
        if ( v6 <= 0 )
        {
          if ( v7 >= v4 )
            *(uchar *)(v2 + 20) = v7;
          else
            *(uchar *)(v2 + 20) = v4;
        }
        else if ( v7 <= v4 )
        {
          *(uchar *)(v2 + 20) = v7;
        }
        else
        {
          *(uchar *)(v2 + 20) = v4;
        }
      }
    }
  }
  return result;
}

//----- (02226848) --------------------------------------------------------
int __fastcall Function_2226848(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)v1;
}

//----- (02226858) --------------------------------------------------------
uint __fastcall Function_2226858(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 4));
  return free(v1);
}

//----- (02226870) --------------------------------------------------------
int __fastcall Function_2226870(int a1, uint a2, int a3, short a4, short a5, char a6, char a7, char a8, char a9, short a10, uint a11)
{
  int v11;
  int v12;
  short v13;
  int v14;
  int v15;

  v11 = a1;
  v12 = a3;
  v13 = a4;
  v14 = malloc(a2, 28);
  if ( !v14 )
    ErrorHandler();
  *(uint *)(v14 + 24) = v11;
  *(uint *)(v14 + 8) = v12;
  *(ushort *)(v14 + 12) = v13;
  *(ushort *)(v14 + 14) = a5;
  *(ushort *)(v14 + 16) = a10;
  *(uchar *)(v14 + 18) = a8;
  *(uchar *)(v14 + 19) = a9;
  *(uchar *)(v14 + 20) = a8;
  *(uchar *)(v14 + 22) = a6;
  *(uchar *)(v14 + 23) = a6;
  if ( *(uchar *)(v14 + 18) >= (uint)*(uchar *)(v14 + 19) )
    v15 = -a7;
  else
    LOBYTE(v15) = a7;
  *(uchar *)(v14 + 21) = v15;
  *(uint *)v14 = 1;
  *(uint *)(v14 + 4) = AddTaskToTaskList1((int)Function_22267d4, v14, a11);
  return v14;
}

//----- (022268DC) --------------------------------------------------------
ushort *__fastcall Function_22268dc(ushort *result, int a2)
{
  int i;
  int v3;

  for ( i = 0; i < a2; ++result )
  {
    ++i;
    v3 = (29 * (((int)(ushort)*result >> 10) & 0x1F)
        + 76 * (*result & 0x1F)
        + 151 * (((int)(ushort)*result >> 5) & 0x1F)) >> 8;
    *result = 32 * v3 | ((ushort)v3 << 10) | v3;
  }
  return result;
}

//----- (02226924) --------------------------------------------------------
ushort *__fastcall Function_2226924(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  ushort *result;

  v1 = a1;
  v2 = Function_222332c(a1);
  v3 = (ushort *)Function_200316c(v2, 0);
  if ( Function_221fdd4(v1) == 1 )
    result = Function_22268dc(v3, 48);
  else
    result = Function_22268dc(v3, 128);
  return result;
}

//----- (02226954) --------------------------------------------------------
int __fastcall Function_2226954(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_222332c(a1);
  if ( Function_221fdd4(v1) == 1 )
    result = Function_2003120(v2, 0, 0, 0, 0, 0x60u);
  else
    result = Function_2003120(v2, 0, 0, 0, 0, 0x100u);
  return result;
}

//----- (02226998) --------------------------------------------------------
int __fastcall Function_2226998_CallJumptable2239eec(uint a1)
{
  int result;

  if ( a1 < 0x54 )
    result = (int)*(&off_2239EEC + a1);
  else
    result = 0;
  return result;
}

//----- (022269AC) --------------------------------------------------------
int __fastcall Function_22269ac(uint a1)
{
  int result;

  if ( a1 < 0x21 )
    result = (int)*(&off_2239E68 + a1);
  else
    result = 0;
  return result;
}

//----- (022269C0) --------------------------------------------------------
void Function_22269c0()
{
  ;
}

//----- (022269C4) --------------------------------------------------------
uint __fastcall Function_22269c4(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  uint result;

  v2 = (int)a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      Function_2220220(*((uint *)a2 + 1), v3);
      result = free(v2);
    }
  }
  else
  {
    *a2 = ++result;
  }
  return result;
}

//----- (022269EC) --------------------------------------------------------
uint *__fastcall Function_22269ec(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = malloc(5u, 8);
  *(uchar *)v2 = 0;
  *(uint *)(v2 + 4) = v1;
  return Function_22201cc(v1, (int)Function_22269c4, v2, 0x1000u);
}

//----- (02226A14) --------------------------------------------------------
uint __fastcall Function_2226a14(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  uint result;

  v2 = (int)a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      Function_2220230(*((uint *)a2 + 1), v3);
      result = free(v2);
    }
  }
  else
  {
    *a2 = ++result;
  }
  return result;
}

//----- (02226A3C) --------------------------------------------------------
uint *__fastcall Function_2226a3c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = malloc(5u, 8);
  *(uchar *)v2 = 0;
  *(uint *)(v2 + 4) = v1;
  return Function_2220204(v1, (int)Function_2226a14, v2, 0x1000u);
}

//----- (02226A64) --------------------------------------------------------
int *__fastcall Function_2226a64(int *result, uchar *a2)
{
  uchar *v2;
  int v3;

  v2 = a2;
  v3 = *a2;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Call_RemoveTaskFromTaskList(result);
      result = (int *)free((int)v2);
    }
  }
  else
  {
    result = (int *)1;
    *v2 = 1;
  }
  return result;
}

//----- (02226A88) --------------------------------------------------------
uint *__fastcall Function_2226a88(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = malloc(5u, 8);
  *(uchar *)v2 = 0;
  *(uint *)(v2 + 4) = v1;
  return AddTaskToTaskList1((int)Function_2226a64, v2, 0x1000u);
}

//----- (02226AAC) --------------------------------------------------------
int __fastcall Function_2226aac(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = (int)a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      v8 = *((uint *)a2 + 1);
      Function_200d0f4(*((uint *)a2 + 4));
      free(v2);
      result = Function_2220220(v8, v3);
    }
  }
  else
  {
    Function_200d324(**((uint **)a2 + 5));
    Function_200d324(**(uint **)(v2 + 24));
    Function_200d324(**(uint **)(v2 + 28));
    Function_200d5ac(**(uint ***)(v2 + 20), 1, 0, v5);
    Function_200d5ac(**(uint ***)(v2 + 24), -1, 0, v6);
    Function_200d5ac(**(uint ***)(v2 + 28), 1, 1, v7);
    result = Function_200c7ec(*(int **)(v2 + 12));
  }
  return result;
}

//----- (02226B1C) --------------------------------------------------------
uint *__fastcall Function_2226b1c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12[13];
  int v13;

  v13 = a4;
  v4 = a2;
  v11 = a1;
  v5 = a3;
  v6 = a4;
  v7 = malloc(5u, 460);
  if ( !v7 )
    ErrorHandler();
  *(uchar *)v7 = 0;
  *(uint *)(v7 + 8) = v4;
  *(uint *)(v7 + 12) = v5;
  *(uint *)(v7 + 16) = v6;
  *(uint *)(v7 + 4) = v11;
  Function_222329c(v12, v11);
  *(uint *)(v7 + 20) = v6;
  v8 = 1;
  v9 = v7 + 4;
  do
  {
    *(uint *)(v9 + 20) = Function_200ce6c(*(uint **)(v7 + 8), *(uint *)(v7 + 12), (short *)v12);
    ++v8;
    v9 += 4;
  }
  while ( v8 < 3 );
  return Function_22201cc(v11, (int)Function_2226aac, v7, 0x1000u);
}

//----- (02226B84) --------------------------------------------------------
int __fastcall Function_2226b84(int a1)
{
  int v1;

  v1 = a1;
  Function_2007dec(a1, 0xCu, 256);
  return Function_2007dec(v1, 0xDu, 256);
}

//----- (02226BA0) --------------------------------------------------------
void __fastcall Function_2226ba0(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;

  v2 = a2;
  if ( *(uchar *)(a2 + 4) )
  {
    if ( *(uchar *)(a2 + 4) == 1 )
    {
      if ( Function_2226138((short *)(a2 + 124)) )
      {
        if ( (*(uint *)(v2 + 40) & 0x100) == 256 )
        {
          v3 = 0;
          if ( *(uint *)v2 > 0 )
          {
            v4 = v2;
            do
            {
              v5 = *(uint *)(v4 + 52);
              if ( v5 )
              {
                Function_2007dec(v5, 0, *(short *)(v2 + 124) + *(short *)(v4 + 48));
                Function_2007dec(*(uint *)(v4 + 52), 1u, *(short *)(v2 + 126) + *(short *)(v4 + 50));
              }
              ++v3;
              v4 += 20;
            }
            while ( v3 < *(uint *)v2 );
          }
        }
        else if ( (*(uint *)(v2 + 40) & 0x200) == 512 )
        {
          v6 = 0;
          if ( *(uint *)v2 > 0 )
          {
            v7 = v2;
            do
            {
              v8 = *(int **)(v7 + 56);
              if ( v8 )
              {
                Function_200d4c4(
                  v8,
                  (short)(*(ushort *)(v2 + 124) + *(ushort *)(v7 + 48)),
                  (short)(*(ushort *)(v2 + 126) + *(ushort *)(v7 + 50)));
                Function_200d330(*(int **)(v7 + 56));
              }
              ++v6;
              v7 += 20;
            }
            while ( v6 < *(uint *)v2 );
          }
          Function_200c7ec(*(int **)(v2 + 16));
        }
        if ( (*(uint *)(v2 + 40) & 0x400) == 1024 )
          Function_2019184(*(uint *)(v2 + 24), 3u, 0, *(short *)(v2 + 124));
      }
      else
      {
        ++*(uchar *)(v2 + 4);
      }
    }
    else
    {
      Function_2220220(*(uint *)(a2 + 8), a1);
      free(v2);
    }
  }
  else
  {
    Function_2226108(
      a2 + 124,
      *(short *)(a2 + 32),
      *(short *)(a2 + 34),
      *(short *)(a2 + 36),
      *(short *)(a2 + 38));
    ++*(uchar *)(v2 + 4);
  }
}

//----- (02226CB0) --------------------------------------------------------
uint *__fastcall Function_2226cb0(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2 + 4);
  *(ushort *)(v2 + 32) = Function_2220280(v1, 0);
  *(ushort *)(v2 + 34) = Function_2220280(v1, 1);
  *(ushort *)(v2 + 36) = Function_2220280(v1, 2);
  *(ushort *)(v2 + 38) = Function_2220280(v1, 3);
  v3 = Function_2220280(v1, 4);
  *(uint *)(v2 + 40) = v3;
  if ( (v3 & 0x100) == 256 )
  {
    Function_2235998(v1, v3, v2 + 44, v2);
  }
  else if ( (v3 & 0x200) == 512 )
  {
    Function_2235d74(v1);
  }
  return Function_22201e8(*(uint *)(v2 + 8), (int)Function_2226ba0, v2);
}

//----- (02226D38) --------------------------------------------------------
void __fastcall Function_2226d38(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  uint v6;
  uint v7;
  int v8;
  uint v9;
  int v10;
  uint v11;
  int v12;
  short v13;
  int v14;
  short v15;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)a2 )
  {
    case 0:
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 57, *(ushort *)(a2 + 22), *(ushort *)(a2 + 24));
      Function_2019120(2u, 1);
      ++*(uchar *)(v2 + 28);
      goto LABEL_3;
    case 1:
LABEL_3:
      v4 = *(ushort *)(v2 + 22);
      v5 = 0;
      if ( v4 >= *(ushort *)(v2 + 8) - 2 )
        v5 = 1;
      else
        *(ushort *)(v2 + 22) = v4 + 2;
      v6 = *(ushort *)(v2 + 24);
      if ( v6 <= 9 )
        ++v5;
      else
        *(ushort *)(v2 + 24) = v6 - 2;
      if ( v5 == 2 )
      {
        *(ushort *)(v2 + 22) = *(ushort *)(v2 + 8);
        *(ushort *)(v2 + 24) = 7;
        ++*(uchar *)(v2 + 28);
      }
      REG_BLDALPHA = *(ushort *)(v2 + 22) | (*(ushort *)(v2 + 24) << 8);
      goto LABEL_24;
    case 2:
      if ( *(uint *)(a2 + 4) )
        ++*(uchar *)(a2 + 28);
      goto LABEL_24;
    case 3:
      v7 = *(ushort *)(a2 + 22);
      v8 = 0;
      if ( v7 <= 2 )
        v8 = 1;
      else
        *(ushort *)(v2 + 22) = v7 - 2;
      v9 = *(ushort *)(v2 + 24);
      if ( v9 >= 0x1D )
        ++v8;
      else
        *(ushort *)(v2 + 24) = v9 + 2;
      if ( v8 == 2 )
      {
        *(ushort *)(v2 + 22) = 0;
        *(ushort *)(v2 + 24) = 31;
        ++*(uchar *)(v2 + 28);
      }
      REG_BLDALPHA = *(ushort *)(v2 + 22) | (*(ushort *)(v2 + 24) << 8);
LABEL_24:
      v10 = *(short *)(v2 + 16);
      if ( v10 > 0 && *(short *)(v2 + 12) >= 512 || v10 < 0 && *(short *)(v2 + 12) <= -412 )
        *(uint *)(v2 + 4) = 1;
      *(ushort *)(v2 + 10) += *(ushort *)(v2 + 14);
      *(ushort *)(v2 + 12) += *(ushort *)(v2 + 16);
      v11 = *(ushort *)(v2 + 20);
      if ( *(ushort *)(v2 + 18) >= v11 )
      {
        *(ushort *)(v2 + 20) = v11 + 1;
      }
      else
      {
        v12 = *(short *)(v2 + 16);
        if ( v12 >= 0 )
          v13 = 0;
        else
          v13 = v12 + 1;
        *(ushort *)(v2 + 16) = v13;
        v14 = *(short *)(v2 + 14);
        if ( v14 >= 0 )
          v15 = 0;
        else
          v15 = v14 + 1;
        *(ushort *)(v2 + 14) = v15;
        *(ushort *)(v2 + 20) = 0;
      }
      Function_2019184(*(uint *)(v2 + 48), 2u, 0, *(short *)(v2 + 10));
      Function_2019184(*(uint *)(v2 + 48), 2u, 3u, *(short *)(v2 + 12));
      break;
    default:
      Function_2019120(2u, 0);
      Function_2220220(*(uint *)(v2 + 32), v3);
      free(v2);
      break;
  }
}

//----- (02226EB0) --------------------------------------------------------
uint *__fastcall Function_2226eb0(int a1)
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

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2 + 28);
  *(ushort *)(v2 + 10) = Function_2220280(v1, 1);
  *(ushort *)(v2 + 12) = Function_2220280(v1, 2);
  *(ushort *)(v2 + 14) = Function_2220280(v1, 3);
  *(ushort *)(v2 + 16) = Function_2220280(v1, 4);
  *(uint *)v2 = Function_2220280(v1, 5);
  *(ushort *)(v2 + 8) = Function_2220280(v1, 6);
  *(ushort *)(v2 + 18) = Function_2220280(v1, 7);
  *(ushort *)(v2 + 20) = 0;
  if ( *(uint *)v2 && (v3 = Function_2220240(v1), Function_223525c(v1, v3) == 4) )
  {
    *(ushort *)(v2 + 10) = -*(ushort *)(v2 + 10);
    *(ushort *)(v2 + 12) = -*(ushort *)(v2 + 12);
    *(ushort *)(v2 + 14) = -*(ushort *)(v2 + 14);
    *(ushort *)(v2 + 16) = -*(ushort *)(v2 + 16);
    *(ushort *)(v2 + 12) -= 84;
  }
  else
  {
    *(ushort *)(v2 + 12) += 84;
  }
  if ( Function_221fdd4(v1) == 1 )
    *(ushort *)(v2 + 14) = -*(ushort *)(v2 + 14);
  *(ushort *)(v2 + 22) = 0;
  *(ushort *)(v2 + 24) = 31;
  *(uint *)(v2 + 4) = 0;
  Function_2019120(2u, 0);
  v4 = Function_2220280(v1, 0);
  v5 = Function_22234e4(v4, 0);
  v6 = Function_221fde4(v1);
  LoadFromNARC_RGCN(7, v5, *(uint **)(v2 + 48), 2u, 0, 0, 1, v6);
  v7 = Function_22234e4(v4, 1);
  v8 = Function_221fde4(v1);
  Function_2003050(*(uint *)(v2 + 52), 7, v7, v8, 0, 32, 0x90u);
  Function_2019ebc(*(uint **)(v2 + 48), 2u);
  v9 = 2;
  if ( Function_221fdd4(v1) == 1 )
  {
    v9 = 4;
  }
  else
  {
    v10 = Function_2220240(v1);
    if ( Function_223525c(v1, v10) == 4 )
      v9 = 3;
  }
  v11 = Function_22234e4(v4, v9);
  v12 = Function_221fde4(v1);
  LoadFromNARC_RCSN(7, v11, *(uint **)(v2 + 48), 2u, 0, 0, 1, v12);
  Function_2019184(*(uint *)(v2 + 48), 2u, 0, *(short *)(v2 + 10));
  Function_2019184(*(uint *)(v2 + 48), 2u, 3u, *(short *)(v2 + 12));
  return Function_22201e8(*(uint *)(v2 + 32), (int)Function_2226d38, v2);
}

//----- (02227064) --------------------------------------------------------
void __fastcall Function_2227064(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  uint v6;
  uint v7;
  int v8;
  uint v9;
  int v10;
  uint v11;
  int v12;
  short v13;
  int v14;
  short v15;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)a2 )
  {
    case 0:
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 57, *(ushort *)(a2 + 22), *(ushort *)(a2 + 24));
      Function_2019120(2u, 1);
      ++*(uchar *)(v2 + 28);
      goto LABEL_3;
    case 1:
LABEL_3:
      v4 = *(ushort *)(v2 + 22);
      v5 = 0;
      if ( v4 >= 0x10 )
        v5 = 1;
      else
        *(ushort *)(v2 + 22) = v4 + 2;
      v6 = *(ushort *)(v2 + 24);
      if ( v6 <= 4 )
        ++v5;
      else
        *(ushort *)(v2 + 24) = v6 - 2;
      if ( v5 == 2 )
      {
        *(ushort *)(v2 + 22) = 16;
        *(ushort *)(v2 + 24) = 4;
        ++*(uchar *)(v2 + 28);
      }
      REG_BLDALPHA = *(ushort *)(v2 + 22) | (*(ushort *)(v2 + 24) << 8);
      goto LABEL_24;
    case 2:
      if ( *(uint *)(a2 + 4) )
        ++*(uchar *)(a2 + 28);
      goto LABEL_24;
    case 3:
      v7 = *(ushort *)(a2 + 22);
      v8 = 0;
      if ( v7 <= 2 )
        v8 = 1;
      else
        *(ushort *)(v2 + 22) = v7 - 2;
      v9 = *(ushort *)(v2 + 24);
      if ( v9 >= 0x10 )
        ++v8;
      else
        *(ushort *)(v2 + 24) = v9 + 2;
      if ( v8 == 2 )
      {
        *(ushort *)(v2 + 22) = 0;
        *(ushort *)(v2 + 24) = 31;
        ++*(uchar *)(v2 + 28);
      }
      REG_BLDALPHA = *(ushort *)(v2 + 22) | (*(ushort *)(v2 + 24) << 8);
LABEL_24:
      v10 = *(short *)(v2 + 16);
      if ( v10 > 0 && *(short *)(v2 + 12) >= 512 || v10 < 0 && *(short *)(v2 + 12) <= -412 )
        *(uint *)(v2 + 4) = 1;
      *(ushort *)(v2 + 10) += *(ushort *)(v2 + 14);
      *(ushort *)(v2 + 12) += *(ushort *)(v2 + 16);
      v11 = *(ushort *)(v2 + 20);
      if ( *(ushort *)(v2 + 18) >= v11 )
      {
        *(ushort *)(v2 + 20) = v11 + 1;
      }
      else
      {
        v12 = *(short *)(v2 + 16);
        if ( v12 >= 0 )
          v13 = 0;
        else
          v13 = v12 + 1;
        *(ushort *)(v2 + 16) = v13;
        v14 = *(short *)(v2 + 14);
        if ( v14 >= 0 )
          v15 = 0;
        else
          v15 = v14 + 1;
        *(ushort *)(v2 + 14) = v15;
        *(ushort *)(v2 + 20) = 0;
      }
      Function_2019184(*(uint *)(v2 + 48), 2u, 0, *(short *)(v2 + 10));
      Function_2019184(*(uint *)(v2 + 48), 2u, 3u, *(short *)(v2 + 12));
      break;
    default:
      Function_2019120(2u, 0);
      Function_2220220(*(uint *)(v2 + 32), v3);
      free(v2);
      break;
  }
}

//----- (022271D8) --------------------------------------------------------
uint *__fastcall Function_22271d8(int a1)
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

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2 + 28);
  *(ushort *)(v2 + 10) = Function_2220280(v1, 1);
  *(ushort *)(v2 + 12) = Function_2220280(v1, 2);
  *(ushort *)(v2 + 14) = Function_2220280(v1, 3);
  *(ushort *)(v2 + 16) = Function_2220280(v1, 4);
  *(uint *)v2 = Function_2220280(v1, 5);
  *(ushort *)(v2 + 8) = Function_2220280(v1, 6);
  *(ushort *)(v2 + 18) = Function_2220280(v1, 7);
  *(ushort *)(v2 + 20) = 0;
  if ( *(uint *)v2 && (v3 = Function_2220240(v1), Function_223525c(v1, v3) == 4) )
  {
    *(ushort *)(v2 + 10) = -*(ushort *)(v2 + 10);
    *(ushort *)(v2 + 12) = -*(ushort *)(v2 + 12);
    *(ushort *)(v2 + 14) = -*(ushort *)(v2 + 14);
    *(ushort *)(v2 + 16) = -*(ushort *)(v2 + 16);
    *(ushort *)(v2 + 12) -= 84;
  }
  else
  {
    *(ushort *)(v2 + 12) += 84;
  }
  if ( Function_221fdd4(v1) == 1 )
    *(ushort *)(v2 + 14) = -*(ushort *)(v2 + 14);
  *(ushort *)(v2 + 22) = 4;
  *(ushort *)(v2 + 24) = 16;
  *(ushort *)(v2 + 22) = 0;
  *(ushort *)(v2 + 24) = 16;
  *(uint *)(v2 + 4) = 0;
  Function_2019120(2u, 0);
  v4 = Function_2220280(v1, 0);
  v5 = Function_22234e4(v4, 0);
  v6 = Function_221fde4(v1);
  LoadFromNARC_RGCN(7, v5, *(uint **)(v2 + 48), 2u, 0, 0, 1, v6);
  v7 = Function_22234e4(v4, 1);
  v8 = Function_221fde4(v1);
  Function_2003050(*(uint *)(v2 + 52), 7, v7, v8, 0, 32, 0x90u);
  Function_2019ebc(*(uint **)(v2 + 48), 2u);
  v9 = 2;
  if ( Function_221fdd4(v1) == 1 )
  {
    v9 = 4;
  }
  else
  {
    v10 = Function_2220240(v1);
    if ( Function_223525c(v1, v10) == 4 )
      v9 = 3;
  }
  v11 = Function_22234e4(v4, v9);
  v12 = Function_221fde4(v1);
  LoadFromNARC_RCSN(7, v11, *(uint **)(v2 + 48), 2u, 0, 0, 1, v12);
  Function_2019184(*(uint *)(v2 + 48), 2u, 0, *(short *)(v2 + 10));
  Function_2019184(*(uint *)(v2 + 48), 2u, 3u, *(short *)(v2 + 12));
  return Function_22201e8(*(uint *)(v2 + 32), (int)Function_2227064, v2);
}

//----- (02227390) --------------------------------------------------------
int __fastcall Function_2227390(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 && result != 1 )
  {
    if ( result == 2 )
    {
      Function_2007dec(*((uint *)a2 + 2), 0xAu, 0);
      Function_2007dec(*((uint *)v2 + 2), 0xBu, 0);
      Function_2007dec(*((uint *)v2 + 2), 9u, 0);
      Function_2220220(*((uint *)v2 + 1), v3);
      result = free((int)v2);
    }
  }
  else if ( Function_2225da0((uint *)a2 + 3) == 1 )
  {
    result = Function_2007dec(*((uint *)v2 + 2), 9u, *((uint *)v2 + 3) & 0xFFFF);
  }
  else
  {
    Function_2225d50((uint *)v2 + 3, *((uint *)v2 + 3), *((uint *)v2 + 8), *((uint *)v2 + 9));
    result = *v2 + 1;
    *v2 = result;
  }
  return result;
}

//----- (02227408) --------------------------------------------------------
uint *__fastcall Function_2227408(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  int v11;

  v1 = a1;
  v2 = Function_221fde4(a1);
  v3 = malloc(v2, 44);
  v4 = v3;
  *(uchar *)v3 = 0;
  *(uint *)(v3 + 4) = v1;
  *(uint *)(v3 + 36) = Function_2220280(v1, 2);
  *(uint *)(v4 + 32) = Function_2220280(v1, 0);
  v5 = Function_2220280(v1, 3);
  v6 = v5;
  if ( v5 && v5 != 2 )
    v11 = Function_2220240(*(uint *)(v4 + 4));
  else
    v11 = Function_2220248(*(uint *)(v4 + 4));
  v7 = Function_2220280(v1, 1);
  Function_2225d50((uint *)(v4 + 12), *(uint *)(v4 + 32), v7, *(uint *)(v4 + 36));
  v8 = Function_2225964(v1, v11);
  *(uint *)(v4 + 20) *= v8;
  if ( v6 == 2 )
    v8 = -v8;
  *(uint *)(v4 + 8) = Function_22232fc(*(uint *)(v4 + 4), v11);
  if ( Function_2220280(v1, 3) == 1 )
  {
    *(ushort *)(v4 + 40) = Function_2220280(v1, 4);
    v9 = Function_2220280(v1, 5);
  }
  else
  {
    v9 = 40;
    *(ushort *)(v4 + 40) = 40 * v8;
  }
  *(ushort *)(v4 + 42) = v9;
  Function_2007dec(*(uint *)(v4 + 8), 0xAu, *(short *)(v4 + 40));
  Function_2007dec(*(uint *)(v4 + 8), 0xBu, *(short *)(v4 + 42));
  return Function_22201e8(*(uint *)(v4 + 4), (int)Function_2227390, v4);
}

//----- (022274E4) --------------------------------------------------------
uint __fastcall Function_22274e4(int *a1, int a2)
{
  int v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = Function_2225ba0(v2 + 4, *(short *)(a2 + 44), *(short *)(v2 + 46), *(uint *)(v2 + 40));
  if ( !result )
  {
    Function_2007dec(*(uint *)(v2 + 40), 0, *(short *)(v2 + 44));
    Function_2007dec(*(uint *)(v2 + 40), 1u, *(short *)(v2 + 46) - 8);
    Function_2007dec(*(uint *)(v2 + 40), 9u, 0);
    Function_2220220(*(uint *)v2, v3);
    result = free(v2);
  }
  return result;
}

//----- (02227534) --------------------------------------------------------
uint *__fastcall Function_2227534(int a1)
{
  int v1;
  int v2;
  int *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v1 = a1;
  v2 = Function_221fde4(a1);
  v3 = (int *)malloc(v2, 48);
  v4 = v3;
  *v3 = v1;
  v5 = Function_2220280(v1, 0);
  v6 = Function_2220280(v1, 1);
  Function_22263a4(v4 + 1, v5, v6);
  v7 = Function_2220280(v1, 2);
  if ( v7 > 8 )
  {
    if ( v7 != 16 )
      goto LABEL_13;
    v12 = Function_2220248(*v4);
    v13 = Function_22352ac(*v4, v12);
    v4[10] = Function_22232fc(*v4, v13);
  }
  else
  {
    if ( v7 < 2 )
    {
LABEL_13:
      ErrorHandler();
      goto LABEL_14;
    }
    switch ( v7 )
    {
      case 2:
        v8 = Function_2220240(v1);
        v4[10] = Function_22232fc(*v4, v8);
        v4[4] = -v4[4];
        break;
      case 4:
        v9 = Function_2220240(*v4);
        v10 = Function_22352ac(*v4, v9);
        v4[10] = Function_22232fc(*v4, v10);
        v4[4] = -v4[4];
        break;
      case 8:
        v11 = Function_2220248(v1);
        v4[10] = Function_22232fc(*v4, v11);
        break;
      default:
        goto LABEL_13;
    }
  }
LABEL_14:
  *((ushort *)v4 + 22) = Function_20080c0(v4[10], 0);
  *((ushort *)v4 + 23) = Function_20080c0(v4[10], 1u);
  *((ushort *)v4 + 23) += 8;
  return Function_22201e8(*v4, (int)Function_22274e4, (int)v4);
}

//----- (02227620) --------------------------------------------------------
int __fastcall Function_2227620(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_200d3f4(*(uint **)(a1 + 20), 1);
  Function_200d4c4(*(int **)(v3 + 20), v4, v5);
  *(uint *)(v3 + 64) = 0;
  return Function_2225e68((short *)(v3 + 24), 10, 10, 14, 4);
}

//----- (02227658) --------------------------------------------------------
int __fastcall Function_2227658(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_22260a8(a1 + 24, *(int **)(a1 + 20)) )
  {
    if ( *(uint *)(v1 + 64) )
    {
      Function_200d3f4(*(uint **)(v1 + 20), 0);
      return 1;
    }
    *(uint *)(v1 + 64) = 1;
    Function_2225e68((short *)(v1 + 24), 14, 10, 12, 2);
  }
  return 0;
}

//----- (0222769C) --------------------------------------------------------
int __fastcall Function_222769c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  switch ( (uchar)*(uint *)(a1 + 72) )
  {
    case 0u:
      Function_2227620(
        a1,
        (short)(*(ushort *)(a1 + 76) + 24 * *(ushort *)(a1 + 60)),
        (short)(*(ushort *)(a1 + 78) - 16));
      ++*(uint *)(v1 + 72);
      break;
    case 1u:
      if ( Function_2227658(a1) )
        ++*(uint *)(v1 + 72);
      break;
    case 2u:
      v3 = *(uint *)(a1 + 68) - 1;
      *(uint *)(a1 + 68) = v3;
      if ( v3 < 0 )
      {
        ++*(uint *)(a1 + 72);
        Function_2227620(
          a1,
          (short)(*(ushort *)(a1 + 76) - 24 * *(ushort *)(a1 + 60)),
          (short)(*(ushort *)(a1 + 78) - 24));
      }
      break;
    case 3u:
      if ( Function_2227658(a1) )
        ++*(uint *)(v1 + 72);
      break;
    case 4u:
      v2 = 1;
      break;
    default:
      return v2;
  }
  return v2;
}

//----- (02227738) --------------------------------------------------------
int __fastcall Function_2227738(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 12);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      Function_200d0f4(*(uint *)(a2 + 20));
      Function_2220220(*(uint *)v2, v3);
      return free(v2);
    }
  }
  else if ( Function_222769c(a2) )
  {
    ++*(uint *)(v2 + 12);
  }
  return Function_200c7ec(*(int **)(v2 + 8));
}

//----- (0222777C) --------------------------------------------------------
uint *__fastcall Function_222777c(int a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = (int *)Function_2235e50();
  v9 = (int)v8;
  *v8 = v5;
  v8[1] = v4;
  v8[2] = v6;
  v8[5] = (int)v7;
  Function_200d474(v7, 100);
  Function_200d460(*(int **)(v9 + 20), 1);
  Function_200d6a4(*(uint **)(v9 + 20), 2);
  Function_200d3f4(*(uint **)(v9 + 20), 0);
  *(uint *)(v9 + 68) = 4;
  v10 = Function_2220240(*(uint *)v9);
  *(uint *)(v9 + 60) = Function_2225964(*(uint *)v9, v10);
  v11 = Function_2220248(v5);
  v12 = Function_22232fc(*(uint *)v9, v11);
  *(ushort *)(v9 + 76) = Function_20080c0(v12, 0);
  *(ushort *)(v9 + 78) = Function_20080c0(v12, 1u);
  return Function_22201e8(*(uint *)v9, (int)Function_2227738, v9);
}

//----- (02227808) --------------------------------------------------------
uint __fastcall Function_2227808(int *a1, int *a2)
{
  int *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = Function_200384c(a2[1]);
  if ( !result )
  {
    free((int)v2);
    result = Function_2220220(*v2, v3);
  }
  return result;
}

//----- (02227828) --------------------------------------------------------
uint *__fastcall Function_2227828(int a1)
{
  int v1;
  int v2;
  int *v3;
  int *v4;
  int v5;
  char v6;
  uchar v7;
  uchar v8;
  ushort v9;

  v2 = a1;
  v3 = (int *)Function_2235e50();
  v4 = v3;
  *v3 = v2;
  v3[1] = Function_222332c(v2);
  v5 = Function_2220280(v2, 0);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v1 = 256;
    }
    else if ( v5 == 2 )
    {
      v1 = 512;
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    v1 = Function_2222354(v2) & 0xFFFF;
  }
  v6 = Function_2220280(v2, 1);
  v7 = Function_2220280(v2, 2);
  v8 = Function_2220280(v2, 3);
  v9 = Function_2220280(v2, 4);
  Function_2003178(v4[1], 1, v1, v6, v7, v8, v9);
  return Function_22201e8(*v4, (int)Function_2227808, (int)v4);
}

//----- (022278D0) --------------------------------------------------------
int __fastcall Function_22278d0(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int result;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  result = a2[2];
  switch ( (uchar)a2 )
  {
    case 0:
      Function_20086fc(a2[1], 0, a2[6], a2[4], a2[5]);
      result = v2[2] + 1;
      v2[2] = result;
      break;
    case 1:
      result = Function_20087b4(a2[1]);
      if ( !result )
      {
        result = v2[2] + 1;
        v2[2] = result;
      }
      break;
    case 2:
      v5 = a2[7];
      if ( !v5 )
      {
        v2[2] = result + 1;
        goto LABEL_8;
      }
      result = v5 - 1;
      v2[7] = v5 - 1;
      break;
    case 3:
LABEL_8:
      Function_20086fc(v2[1], v2[6], 0, v2[4], v2[5]);
      result = v2[2] + 1;
      v2[2] = result;
      break;
    case 4:
      result = Function_20087b4(a2[1]);
      if ( !result )
      {
        v6 = v2[3] - 1;
        v2[3] = v6;
        if ( v6 > 0 )
        {
          result = 0;
          v2[2] = 0;
        }
        else
        {
          result = v2[2] + 1;
          v2[2] = result;
        }
      }
      break;
    case 5:
      free((int)a2);
      result = Function_2220220(*v2, v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222797C) --------------------------------------------------------
uint *__fastcall Function_222797c(int a1)
{
  int v1;
  int *v2;
  int *v3;
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

  v1 = a1;
  v2 = (int *)Function_2235e50();
  v3 = v2;
  *v2 = v1;
  v2[1] = 0;
  v4 = Function_2220280(v1, 0);
  if ( v4 <= 2050 )
  {
    if ( v4 >= 2050 )
    {
      v11 = 255;
      v12 = 0;
      while ( 1 )
      {
        v13 = Function_22232b8(v1, v12);
        if ( !v13 || v13 == 2 )
          break;
        if ( ++v12 >= 4 )
          goto LABEL_29;
      }
      v11 = v12;
LABEL_29:
      if ( v11 == 255 )
        v11 = 0;
      v3[1] = Function_22232fc(*v3, v11);
      goto LABEL_54;
    }
    if ( v4 > 8 )
    {
      if ( v4 == 16 )
      {
        if ( Function_2223364(v1) == 1 )
        {
          v9 = Function_2220248(*v3);
          v10 = Function_22352ac(*v3, v9);
          v3[1] = Function_22232fc(*v3, v10);
        }
        goto LABEL_54;
      }
    }
    else if ( v4 >= 2 )
    {
      switch ( v4 )
      {
        case 2:
          v5 = Function_2220240(v1);
          v3[1] = Function_22232fc(*v3, v5);
          goto LABEL_54;
        case 4:
          if ( Function_2223364(v1) == 1 )
          {
            v6 = Function_2220240(*v3);
            v7 = Function_22352ac(*v3, v6);
            v3[1] = Function_22232fc(*v3, v7);
          }
          goto LABEL_54;
        case 8:
          v8 = Function_2220248(v1);
          v3[1] = Function_22232fc(*v3, v8);
          goto LABEL_54;
      }
    }
LABEL_53:
    ErrorHandler();
    goto LABEL_54;
  }
  if ( v4 > 2056 )
  {
    if ( v4 != 2064 )
      goto LABEL_53;
    v19 = 255;
    v20 = 0;
    while ( Function_22232b8(v1, v20) != 5 )
    {
      if ( ++v20 >= 4 )
        goto LABEL_50;
    }
    v19 = v20;
LABEL_50:
    if ( v19 == 255 )
      v19 = 0;
    v3[1] = Function_22232fc(*v3, v19);
  }
  else if ( v4 < 2056 )
  {
    if ( v4 != 2052 )
      goto LABEL_53;
    v14 = 255;
    v15 = 0;
    while ( Function_22232b8(v1, v15) != 4 )
    {
      if ( ++v15 >= 4 )
        goto LABEL_36;
    }
    v14 = v15;
LABEL_36:
    if ( v14 == 255 )
      v14 = 0;
    v3[1] = Function_22232fc(*v3, v14);
  }
  else
  {
    v16 = 255;
    v17 = 0;
    while ( 1 )
    {
      v18 = Function_22232b8(v1, v17);
      if ( v18 == 1 || v18 == 3 )
        break;
      if ( ++v17 >= 4 )
        goto LABEL_43;
    }
    v16 = v17;
LABEL_43:
    if ( v16 == 255 )
      v16 = 0;
    v3[1] = Function_22232fc(*v3, v16);
  }
LABEL_54:
  if ( !v3[1] )
    return (uint *)free((int)v3);
  v3[4] = Function_2220280(v1, 1);
  v3[3] = Function_2220280(v1, 2);
  v3[5] = Function_2220280(v1, 3);
  v3[6] = Function_2220280(v1, 4);
  v3[7] = Function_2220280(v1, 5);
  return Function_22201e8(*v3, (int)Function_22278d0, (int)v3);
}

//----- (02227B4C) --------------------------------------------------------
int __fastcall Function_2227b4c(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int result;
  uint v9;
  int v10;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 8);
  if ( v4 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2227B68 + v4) + 35814250);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_2225e68(
        (short *)(a2 + 20),
        (short)*(uint *)(a2 + 60),
        (short)*(uint *)(a2 + 68),
        (short)*(uint *)(a2 + 64),
        *(uint *)(a2 + 76) >> 16);
      Function_2225fa4((short *)(v2 + 20), &v10, (int *)&v9);
      if ( *(uint *)(v2 + 80) == 1 )
        v10 = fsub(0, v10);
      Function_200d6e8(*(int **)(v2 + 16), v10, v9);
      ++*(uint *)(v2 + 8);
      goto LABEL_21;
    case 1:
      v5 = Function_2225eb8(a2 + 20);
      Function_2225fa4((short *)(v2 + 20), &v10, (int *)&v9);
      if ( *(uint *)(v2 + 80) == 1 )
        v10 = fsub(0, v10);
      Function_200d6e8(*(int **)(v2 + 16), v10, v9);
      if ( v5 )
        Function_222605c(
          *(int **)(v2 + 16),
          *(short *)(v2 + 12),
          *(short *)(v2 + 14),
          *(uint *)(v2 + 40),
          0);
      else
        ++*(uint *)(v2 + 8);
      goto LABEL_21;
    case 2:
      Function_2225e68(
        (short *)(a2 + 20),
        (short)*(uint *)(a2 + 64),
        (short)*(uint *)(a2 + 68),
        (short)*(uint *)(a2 + 60),
        *(uint *)(a2 + 76) & 0xFFFF);
      ++*(uint *)(v2 + 8);
      goto LABEL_21;
    case 3:
      v6 = Function_2225eb8(a2 + 20);
      Function_2225fa4((short *)(v2 + 20), &v10, (int *)&v9);
      if ( *(uint *)(v2 + 80) == 1 )
        v10 = fsub(0, v10);
      Function_200d6e8(*(int **)(v2 + 16), v10, v9);
      if ( v6 )
      {
        Function_222605c(
          *(int **)(v2 + 16),
          *(short *)(v2 + 12),
          *(short *)(v2 + 14),
          *(uint *)(v2 + 40),
          0);
      }
      else
      {
        v7 = *(uint *)(v2 + 72) - 1;
        *(uint *)(v2 + 72) = v7;
        if ( v7 > 0 )
          *(uint *)(v2 + 8) = 0;
        else
          ++*(uint *)(v2 + 8);
      }
      goto LABEL_21;
    case 4:
      free(a2);
      result = Function_2220220(*(uint *)v2, v3);
      break;
    default:
LABEL_21:
      result = Function_200c7ec(*(int **)(v2 + 4));
      break;
  }
  return result;
}

//----- (02227CBC) --------------------------------------------------------
BOOL __fastcall Function_2227cbc(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  bool v10;
  BOOL result;

  v1 = a1;
  v2 = (int *)Function_2235e50();
  *v2 = v1;
  v2[1] = Function_22202ec(v1);
  if ( Function_2220280(v1, 0) )
  {
    v6 = Function_2220248(*v2);
    v4 = Function_22232fc(*v2, v6);
    v5 = Function_2220248(*v2);
  }
  else
  {
    v3 = Function_2220240(v1);
    v4 = Function_22232fc(*v2, v3);
    v5 = Function_2220240(*v2);
  }
  *((ushort *)v2 + 7) = Function_2223354(*v2, v5);
  *((ushort *)v2 + 6) = Function_20080c0(v4, 1u);
  *((ushort *)v2 + 6) -= Function_20080c0(v4, 0x29u);
  v2[14] = Function_2220280(v1, 1);
  v2[15] = Function_2220280(v1, 2);
  v2[16] = Function_2220280(v1, 3);
  v2[17] = Function_2220280(v1, 4);
  v2[18] = Function_2220280(v1, 5);
  v2[19] = Function_2220280(v1, 6);
  v7 = Function_2220280(v1, 7);
  v8 = (int *)Function_22202c0(*v2, v7);
  v2[4] = (int)v8;
  Function_200d474(v8, 100);
  Function_200d460((int *)v2[4], 1);
  Function_200d810((int *)v2[4], 1);
  Function_200d6a4((uint *)v2[4], 2);
  v9 = v2[14];
  Function_2235780(*v2);
  Function_22201e8(*v2, (int)Function_2227b4c, (int)v2);
  v10 = Function_2220280(v1, 0) != 0;
  result = Function_22234a8(*v2, v10);
  if ( result == 1 )
  {
    result = 1;
    v2[20] = 1;
  }
  return result;
}

//----- (02227DE0) --------------------------------------------------------
uint __fastcall Function_2227de0(int *a1, int a2)
{
  int v2;
  int *v3;
  uint result;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 4);
  if ( result <= 5 )
    JUMPOUT(__CS__, (char *)&off_2227DFC + *((short *)&off_2227DFC + result) + 2);
  switch ( (uchar)a2 )
  {
    case 0:
      Function_2225ef0(
        (short *)(a2 + 16),
        (short)*(uint *)(a2 + 52),
        (short)*(uint *)(a2 + 56),
        (short)*(uint *)(a2 + 60),
        *(uint *)(a2 + 64),
        *(uint *)(a2 + 68),
        *(uint *)(a2 + 76) >> 16);
      Function_22260c8(v2 + 16, *(uint *)(v2 + 12));
      result = *(uint *)(v2 + 4) + 1;
      *(uint *)(v2 + 4) = result;
      break;
    case 1:
      if ( Function_22260e8(a2 + 16, *(uint *)(a2 + 12)) )
      {
        result = Function_2226024(
                   *(uint *)(v2 + 12),
                   *(short *)(v2 + 8),
                   *(short *)(v2 + 10),
                   *(uint *)(v2 + 36),
                   0);
      }
      else
      {
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 2:
      v5 = *(uint *)(a2 + 80);
      if ( !v5 )
      {
        *(uint *)(v2 + 4) = result + 1;
        goto LABEL_12;
      }
      result = v5 - 1;
      *(uint *)(v2 + 80) = v5 - 1;
      break;
    case 3:
LABEL_12:
      Function_2225ef0(
        (short *)(v2 + 16),
        (short)*(uint *)(v2 + 56),
        (short)*(uint *)(v2 + 52),
        (short)*(uint *)(v2 + 64),
        *(uint *)(v2 + 60),
        *(uint *)(v2 + 68),
        *(uint *)(v2 + 76) & 0xFFFF);
      Function_22260e8(v2 + 16, *(uint *)(v2 + 12));
      result = *(uint *)(v2 + 4) + 1;
      *(uint *)(v2 + 4) = result;
      break;
    case 4:
      if ( Function_22260e8(a2 + 16, *(uint *)(a2 + 12)) )
      {
        result = Function_2226024(
                   *(uint *)(v2 + 12),
                   *(short *)(v2 + 8),
                   *(short *)(v2 + 10),
                   *(uint *)(v2 + 36),
                   0);
      }
      else
      {
        v6 = *(uint *)(v2 + 72) - 1;
        *(uint *)(v2 + 72) = v6;
        if ( v6 > 0 )
        {
          result = 0;
          *(uint *)(v2 + 4) = 0;
        }
        else
        {
          result = *(uint *)(v2 + 4) + 1;
          *(uint *)(v2 + 4) = result;
        }
      }
      break;
    case 5:
      Function_2226b84(*(uint *)(a2 + 12));
      free(v2);
      result = Function_2220220(*(uint *)v2, v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02227F30) --------------------------------------------------------
uint __fastcall Function_2227f30(int a1)
{
  int v1;
  int *v2;
  int *v3;
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
  int *v21;
  char v22;
  char v23;
  int v24;

  v1 = a1;
  v2 = (int *)Function_2235e50();
  v3 = v2;
  *v2 = v1;
  v4 = Function_2220280(v1, 0);
  if ( v4 > 2050 )
  {
    if ( v4 > 2056 )
    {
      if ( v4 == 2064 )
      {
        v17 = 255;
        v18 = 0;
        while ( Function_22232b8(v1, v18) != 5 )
        {
          if ( ++v18 >= 4 )
            goto LABEL_46;
        }
        v17 = v18;
LABEL_46:
        if ( v17 == 255 )
          v17 = 0;
        v3[3] = Function_22232fc(*v3, v17);
      }
    }
    else if ( v4 < 2056 )
    {
      if ( v4 == 2052 )
      {
        v12 = 255;
        v13 = 0;
        while ( Function_22232b8(v1, v13) != 4 )
        {
          if ( ++v13 >= 4 )
            goto LABEL_32;
        }
        v12 = v13;
LABEL_32:
        if ( v12 == 255 )
          v12 = 0;
        v3[3] = Function_22232fc(*v3, v12);
      }
    }
    else
    {
      v14 = 255;
      v15 = 0;
      while ( 1 )
      {
        v16 = Function_22232b8(v1, v15);
        if ( v16 == 1 || v16 == 3 )
          break;
        if ( ++v15 >= 4 )
          goto LABEL_39;
      }
      v14 = v15;
LABEL_39:
      if ( v14 == 255 )
        v14 = 0;
      v3[3] = Function_22232fc(*v3, v14);
    }
    goto LABEL_49;
  }
  if ( v4 >= 2050 )
  {
    v9 = 255;
    v10 = 0;
    while ( 1 )
    {
      v11 = Function_22232b8(v1, v10);
      if ( !v11 || v11 == 2 )
        break;
      if ( ++v10 >= 4 )
        goto LABEL_25;
    }
    v9 = v10;
LABEL_25:
    if ( v9 == 255 )
      v9 = 0;
    v3[3] = Function_22232fc(*v3, v9);
    goto LABEL_49;
  }
  if ( v4 > 264 )
  {
    if ( v4 != 272 )
      goto LABEL_49;
LABEL_20:
    v7 = Function_2220248(*v3);
    *((ushort *)v3 + 5) = Function_2223354(*v3, v7);
    v8 = Function_2220280(v1, 0);
    Function_2235998(*v3, v8, &v23, &v22);
    v3[3] = v24;
    goto LABEL_49;
  }
  if ( v4 >= 258 )
  {
    if ( v4 == 258 || v4 == 260 )
    {
      v5 = Function_2220240(*v3);
      *((ushort *)v3 + 5) = Function_2223354(*v3, v5);
      v6 = Function_2220280(v1, 0);
      Function_2235998(*v3, v6, &v23, &v22);
      v3[3] = v24;
      goto LABEL_49;
    }
    if ( v4 == 264 )
      goto LABEL_20;
  }
LABEL_49:
  v19 = v3[3];
  if ( !v19 )
    return free((int)v3);
  *((ushort *)v3 + 4) = Function_20080c0(v19, 1u);
  *((ushort *)v3 + 5) = Function_20080c0(v3[3], 0x29u);
  *((ushort *)v3 + 5) += 16;
  v3[13] = Function_2220280(v1, 1);
  v3[14] = Function_2220280(v1, 2);
  v3[15] = Function_2220280(v1, 3);
  v3[16] = Function_2220280(v1, 4);
  v3[17] = Function_2220280(v1, 5);
  v3[18] = Function_2220280(v1, 6);
  v3[19] = Function_2220280(v1, 7);
  v3[18] = (ushort)Function_2220280(v1, 6);
  v3[20] = Function_2220280(v1, 6) >> 16;
  v21 = Function_22201e8(*v3, (int)Function_2227de0, (int)v3);
  return Function_2227de0(v21, (int)v3);
}

//----- (0222813C) --------------------------------------------------------
int __fastcall Function_222813c(int *a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = a1;
  if ( !Function_2226454(a2 + 8) )
    return Function_200c7ec(*(int **)(v2 + 4));
  free(v2);
  return Function_2220220(*(uint *)v2, v3);
}

//----- (02228168) --------------------------------------------------------
uint *__fastcall Function_2228168(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int *v5;
  short v6;
  short v7;
  short v8;
  short v9;
  ushort v10;

  v1 = a1;
  v2 = (int *)Function_2235e50();
  *v2 = v1;
  v2[1] = Function_22202ec(v1);
  v3 = Function_2220280(v1, 0);
  v4 = 0;
  do
  {
    if ( (1 << v4) & v3 )
    {
      v5 = (int *)Function_22202c0(*v2, v4);
      Function_200d810(v5, 1);
    }
    ++v4;
  }
  while ( v4 < 4 );
  v6 = Function_2220280(v1, 1);
  v7 = Function_2220280(v1, 3);
  Function_2235780(*v2);
  v8 = Function_2220280(v1, 2);
  v9 = Function_2220280(v1, 4);
  v10 = Function_2220280(v1, 5);
  Function_2226424((int)(v2 + 2), v6, v8, v7, v9, v10);
  return Function_22201e8(*v2, (int)Function_222813c, (int)v2);
}

//----- (02228214) --------------------------------------------------------
int __fastcall Function_2228214(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int i;
  int v9;
  char v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = Function_2220280(a1, 1);
  v6 = Function_2220280(v4, 0);
  Function_2235998(v4, v6, &v10, &v9);
  result = v9;
  for ( i = 0; i < v9; ++i )
  {
    if ( Function_222337c(v4, v12) != 1 || v5 )
      Function_2007dec(v11, 6u, v5);
    result = v9;
  }
  return result;
}

//----- (02228268) --------------------------------------------------------
int __fastcall Function_2228268(int *a1, uint *a2)
{
  uint *v2;
  int *v3;
  int v4;
  int v5;
  int result;
  int v7;

  v2 = a2;
  v3 = a1;
  v4 = a2[1];
  if ( v4 < v2[2] )
  {
    result = v4 + 1;
    v2[1] = v4 + 1;
  }
  else
  {
    v5 = v2[5];
    if ( *v2 )
    {
      v7 = Function_20080c0(v5, 6u);
      Function_2007dec(v2[5], 6u, v7 ^ 1);
      --*v2;
      result = 0;
      v2[1] = 0;
    }
    else
    {
      Function_2007dec(v5, 6u, 0);
      free((int)v2);
      result = Function_2220220(v2[15], v3);
    }
  }
  return result;
}

//----- (022282BC) --------------------------------------------------------
uint *__fastcall Function_22282bc(int a1)
{
  int v1;
  uint *v2;
  uint *v3;
  int v4;

  v1 = a1;
  v2 = (uint *)Function_2235e50();
  v3 = v2;
  v2[15] = v1;
  *v2 = 2 * Function_2220280(v1, 0);
  v3[2] = Function_2220280(v1, 1);
  Function_223595c(v1, v3 + 8);
  v4 = Function_2220240(v1);
  v3[5] = Function_22232fc(v1, v4);
  return Function_22201e8(v3[15], (int)Function_2228268, (int)v3);
}

//----- (0222830C) --------------------------------------------------------
int __fastcall Function_222830c(int *a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  if ( *(uchar *)(a2 + 36) )
  {
    if ( *(uchar *)(a2 + 36) == 1 )
    {
      if ( !Function_2225c14(a2 + 64) )
        ++*(uchar *)(v2 + 36);
      result = Function_2007dec(*(uint *)(v2 + 24), 0, *(short *)(v2 + 64));
    }
    else
    {
      Function_2220220(*(uint *)(a2 + 100), a1);
      result = free(v2);
    }
  }
  else
  {
    Function_2225bc8(
      a2 + 64,
      *(short *)(a2 + 20),
      (short)(*(ushort *)(a2 + 20) + *(ushort *)(a2 + 12)),
      *(short *)(a2 + 22),
      *(ushort *)(a2 + 22),
      *(uint *)(a2 + 8));
    result = *(uchar *)(v2 + 36) + 1;
    *(uchar *)(v2 + 36) = result;
  }
  return result;
}

//----- (02228394) --------------------------------------------------------
uint *__fastcall Function_2228394(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = Function_2235e50();
  v3 = v2;
  *(uint *)(v2 + 100) = v1;
  *(uint *)(v2 + 8) = Function_2220280(v1, 0);
  *(ushort *)(v3 + 12) = Function_2220280(v1, 1);
  v4 = Function_2220280(v1, 2);
  v5 = 255;
  if ( v4 > 264 )
  {
    if ( v4 == 272 )
    {
      if ( Function_2223364(v1) == 1 )
      {
        v7 = Function_2220248(v1);
        v5 = Function_22352ac(v1, v7);
      }
      goto LABEL_16;
    }
LABEL_15:
    ErrorHandler();
    goto LABEL_16;
  }
  if ( v4 < 258 )
    goto LABEL_15;
  if ( v4 == 258 )
  {
    v5 = Function_2220240(v1);
    goto LABEL_16;
  }
  if ( v4 != 260 )
  {
    if ( v4 == 264 )
    {
      v5 = Function_2220248(v1);
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ( Function_2223364(v1) == 1 )
  {
    v6 = Function_2220240(v1);
    v5 = Function_22352ac(v1, v6);
  }
LABEL_16:
  if ( v5 == 255 )
    return (uint *)free(v3);
  Function_223595c(v1, v3 + 36);
  *(uint *)(v3 + 24) = Function_22232fc(v1, v5);
  Function_2235918();
  if ( Function_2225964(v1, v5) <= 0 )
    *(ushort *)(v3 + 12) = -*(ushort *)(v3 + 12);
  return Function_22201e8(*(uint *)(v3 + 100), (int)Function_222830c, v3);
}

//----- (02228488) --------------------------------------------------------
int __fastcall Function_2228488(int *a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  if ( *(uchar *)(a2 + 32) )
  {
    if ( *(uchar *)(a2 + 32) != 1 )
    {
      Function_2220220(*(uint *)(a2 + 96), a1);
      return free(v2);
    }
  }
  else
  {
    if ( !*(uint *)(a2 + 20) )
    {
      result = 255;
      *(uchar *)(a2 + 32) = -1;
      return result;
    }
    Function_2225bc8(
      a2 + 60,
      *(short *)(a2 + 16),
      (short)(*(ushort *)(a2 + 16) + *(ushort *)(a2 + 100)),
      *(short *)(a2 + 18),
      *(ushort *)(a2 + 18),
      *(uint *)(a2 + 8));
    ++*(uchar *)(v2 + 32);
  }
  if ( !Function_2225c14(v2 + 60) )
    ++*(uchar *)(v2 + 32);
  return Function_2007dec(*(uint *)(v2 + 20), 0, *(short *)(v2 + 60));
}

//----- (02228520) --------------------------------------------------------
int __fastcall Function_2228520(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v8;

  v1 = a1;
  v2 = Function_2235e50();
  *(uint *)(v2 + 96) = v1;
  *(uint *)(v2 + 8) = Function_2220280(v1, 0);
  *(ushort *)(v2 + 100) = Function_2220280(v1, 1);
  v3 = Function_2220280(v1, 2);
  Function_223595c(v1, v2 + 32);
  v4 = 255;
  if ( v3 > 264 )
  {
    if ( v3 == 272 )
    {
      if ( Function_2223364(v1) == 1 )
      {
        v6 = Function_2220248(v1);
        v4 = Function_22352ac(v1, v6);
      }
      goto LABEL_16;
    }
LABEL_15:
    ErrorHandler();
    goto LABEL_16;
  }
  if ( v3 < 258 )
    goto LABEL_15;
  if ( v3 == 258 )
  {
    v4 = Function_2220240(v1);
    goto LABEL_16;
  }
  if ( v3 != 260 )
  {
    if ( v3 == 264 )
    {
      v4 = Function_2220248(v1);
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ( Function_2223364(v1) == 1 )
  {
    v5 = Function_2220240(v1);
    v4 = Function_22352ac(v1, v5);
  }
LABEL_16:
  if ( v4 == 255 )
    return free(v2);
  *(uint *)(v2 + 20) = Function_22232fc(v1, v4);
  Function_2235918();
  if ( Function_2225964(v1, v4) <= 0 )
    *(ushort *)(v2 + 100) = -*(ushort *)(v2 + 100);
  Function_221fdd4(v1);
  v8 = Function_22201e8(*(uint *)(v2 + 96), (int)Function_2228488, v2);
  return Function_2228488(v8, v2);
}

//----- (0222862C) --------------------------------------------------------
uint __fastcall Function_222862c(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  uint result;
  short v8;
  short v9;
  int v10;
  int v11;
  int v12;
  bool v13;
  int v14;
  int v15;
  int v16;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_2228648 + v4) + 35817034);
  switch ( (uchar)v4 )
  {
    case 0:
      if ( Function_2225eb8((int)(a2 + 20)) == 1 )
      {
        Function_2226138((short *)v2 + 28);
        Function_2007dec(*((uint *)v2 + 4), 0xCu, *((short *)v2 + 10));
        Function_2007dec(*((uint *)v2 + 4), 0xDu, *((short *)v2 + 11));
        Function_2008274(*((uint *)v2 + 4), 0, *((short *)v2 + 28));
        v6 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 10), v5);
        result = Function_2007dec(*((uint *)v2 + 4), 1u, *((short *)v2 + 1) + v6);
      }
      else
      {
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 1:
      ++a2[9];
      result = a2[10];
      if ( a2[9] > result )
      {
        v8 = Function_2220280(*((uint *)a2 + 3), 0);
        v9 = Function_2220280(*((uint *)v2 + 3), 1);
        v10 = Function_2220280(*((uint *)v2 + 3), 3);
        Function_2225e68((short *)v2 + 10, v8, 100, v9, v10);
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 2:
      if ( Function_2225eb8((int)(a2 + 20)) == 1 )
      {
        Function_2007dec(*((uint *)v2 + 4), 0xCu, *((short *)v2 + 10));
        Function_2007dec(*((uint *)v2 + 4), 0xDu, *((short *)v2 + 11));
        v12 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 10), v11);
        result = Function_2007dec(*((uint *)v2 + 4), 1u, *((short *)v2 + 1) + v12);
      }
      else
      {
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 3:
      v13 = Function_2225eb8((int)(a2 + 20)) == 1;
      v14 = *((uint *)v2 + 4);
      if ( v13 )
      {
        Function_2007dec(v14, 0xCu, *((short *)v2 + 10));
        Function_2007dec(*((uint *)v2 + 4), 0xDu, *((short *)v2 + 11));
        v16 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 10), v15);
        result = Function_2007dec(*((uint *)v2 + 4), 1u, *((short *)v2 + 1) + v16);
      }
      else
      {
        Function_2007dec(v14, 0xCu, 256);
        Function_2007dec(*((uint *)v2 + 4), 0xDu, 256);
        Function_2007dec(*((uint *)v2 + 4), 1u, *((short *)v2 + 1));
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    default:
      Function_2220220(*((uint *)a2 + 3), v3);
      result = free((int)v2);
      break;
  }
  return result;
}

//----- (022287CC) --------------------------------------------------------
uint *__fastcall Function_22287cc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  short v7;
  int v8;

  v1 = a1;
  v2 = Function_221fde4(a1);
  v3 = malloc(v2, 92);
  v4 = v3;
  *(uchar *)(v3 + 8) = 0;
  *(uchar *)v3 = 0;
  *(uint *)(v3 + 12) = v1;
  v5 = Function_2220240(v1);
  *(uint *)(v4 + 16) = Function_22232fc(*(uint *)(v4 + 12), v5);
  *(uchar *)(v4 + 9) = 0;
  *(uchar *)(v4 + 10) = Function_2220280(v1, 4);
  *(ushort *)(v4 + 2) = Function_20080c0(*(uint *)(v4 + 16), 1u);
  v6 = Function_2220240(*(uint *)(v4 + 12));
  *(uint *)(v4 + 4) = Function_2223354(*(uint *)(v4 + 12), v6);
  v7 = Function_2220280(v1, 0);
  v8 = Function_2220280(v1, 2);
  Function_2225e68((short *)(v4 + 20), 100, 100, v7, v8);
  Function_2226108(v4 + 56, 2, 0, 0, 10);
  return Function_22201e8(*(uint *)(v4 + 12), (int)Function_222862c, v4);
}

//----- (02228868) --------------------------------------------------------
uint __fastcall Function_2228868(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  uint result;
  int v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_2228884 + v4) + 35817606);
  switch ( (uchar)v4 )
  {
    case 0:
      if ( Function_2225f6c((int)(a2 + 32)) == 1 )
      {
        Function_2226138((short *)v2 + 34);
        Function_2007dec(*((uint *)v2 + 7), 0xCu, *((short *)v2 + 16));
        Function_2007dec(*((uint *)v2 + 7), 0xDu, *((short *)v2 + 17));
        Function_2008274(*((uint *)v2 + 7), 0, *((short *)v2 + 34));
        v6 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 13), v5);
        result = Function_2007dec(*((uint *)v2 + 7), 1u, *((short *)v2 + 1) + v6);
      }
      else
      {
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 1:
      ++a2[9];
      result = a2[10];
      if ( a2[9] > result )
      {
        Function_2225ef0(
          (short *)a2 + 16,
          (short)(*((uint *)a2 + 3) >> 16),
          (uchar)*((uint *)a2 + 3),
          (short)(*((uint *)a2 + 4) >> 16),
          (uchar)*((uint *)a2 + 4),
          100,
          *((uint *)a2 + 5));
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 2:
      if ( Function_2225f6c((int)(a2 + 32)) == 1 )
      {
        Function_2007dec(*((uint *)v2 + 7), 0xCu, *((short *)v2 + 16));
        Function_2007dec(*((uint *)v2 + 7), 0xDu, *((short *)v2 + 17));
        v9 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 13), v8);
        result = Function_2007dec(*((uint *)v2 + 7), 1u, *((short *)v2 + 1) + v9);
      }
      else
      {
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 3:
      v10 = Function_2225f6c((int)(a2 + 32)) == 1;
      v11 = *((uint *)v2 + 7);
      if ( v10 )
      {
        Function_2007dec(v11, 0xCu, *((short *)v2 + 16));
        Function_2007dec(*((uint *)v2 + 7), 0xDu, *((short *)v2 + 17));
        v13 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 13), v12);
        result = Function_2007dec(*((uint *)v2 + 7), 1u, *((short *)v2 + 1) + v13);
      }
      else
      {
        Function_2007dec(v11, 0xCu, 256);
        Function_2007dec(*((uint *)v2 + 7), 0xDu, 256);
        Function_2007dec(*((uint *)v2 + 7), 1u, *((short *)v2 + 1));
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    default:
      Function_2220220(*((uint *)a2 + 6), v3);
      result = free((int)v2);
      break;
  }
  return result;
}

//----- (02228A0C) --------------------------------------------------------
uint *__fastcall Function_2228a0c(int a1)
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
  short v12;
  int v13;

  v1 = a1;
  v2 = Function_221fde4(a1);
  v3 = malloc(v2, 104);
  v4 = v3;
  *(uchar *)(v3 + 8) = 0;
  *(uchar *)v3 = 0;
  *(uint *)(v3 + 24) = v1;
  v5 = Function_2220240(v1);
  *(uint *)(v4 + 28) = Function_22232fc(*(uint *)(v4 + 24), v5);
  *(uchar *)(v4 + 9) = 0;
  *(uchar *)(v4 + 10) = Function_2220280(v1, 6);
  *(uint *)(v4 + 12) = Function_2220280(*(uint *)(v4 + 24), 3);
  *(uint *)(v4 + 16) = Function_2220280(*(uint *)(v4 + 24), 4);
  *(uint *)(v4 + 20) = Function_2220280(*(uint *)(v4 + 24), 5);
  v6 = Function_2220240(*(uint *)(v4 + 24));
  Function_2225898(v1, v6, 0, (ushort *)(v4 + 2));
  v7 = Function_2220240(*(uint *)(v4 + 24));
  v8 = Function_2223354(*(uint *)(v4 + 24), v7);
  *(uint *)(v4 + 4) = v8;
  *(ushort *)(v4 + 2) += v8;
  v9 = (short)((uint)Function_2220280(v1, 0) >> 16);
  v10 = (uchar)Function_2220280(v1, 0);
  v11 = (short)((uint)Function_2220280(v1, 1) >> 16);
  v12 = (uchar)Function_2220280(v1, 1);
  v13 = Function_2220280(v1, 2);
  Function_2225ef0((short *)(v4 + 32), v9, v10, v11, v12, 100, v13);
  Function_2226108(v4 + 68, 2, 0, 0, 10);
  return Function_22201e8(*(uint *)(v4 + 24), (int)Function_2228868, v4);
}

//----- (02228B10) --------------------------------------------------------
uint __fastcall Function_2228b10(int *a1, int a2)
{
  int *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  REG_DISPCNT &= 0xFFFF1FFF;
  Function_2222664(*(uint *)(a2 + 8), 2u);
  Function_2220220(*(uint *)(v3 + 8), v2);
  return free(v3);
}

//----- (02228B40) --------------------------------------------------------
uint *__fastcall Function_2228b40(int a1)
{
  int v1;
  int v2;
  int *v3;

  v1 = a1;
  v2 = Function_2235e50();
  Function_2220280(v1, 0);
  Function_223595c(v1, v2 + 4);
  Function_2222590(*(int **)(v2 + 8), 2);
  v3 = (int *)Function_22202c0(*(uint *)(v2 + 8), 0);
  *(uint *)(v2 + 36) = v3;
  Function_200d810(v3, 2);
  Function_200d6a4(*(uint **)(v2 + 36), 2);
  Function_200d6e8(*(int **)(v2 + 36), 0x3F99999Au, 0x3F99999Au);
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x8000;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x1B;
  WIN_OUT = WIN_OUT & 0xC0FF | 0x700;
  return Function_22201e8(*(uint *)(v2 + 8), (int)Function_2228b10, v2);
}

//----- (02228BD0) --------------------------------------------------------
int __fastcall Function_2228bd0(int *a1, int a2)
{
  int v2;

  v2 = a2;
  if ( *(uchar *)(a2 + 32) )
  {
    if ( *(uchar *)(a2 + 32) != 1 )
    {
      Function_2220220(*(uint *)(a2 + 96), a1);
      return free(v2);
    }
  }
  else
  {
    Function_2225bc8(
      a2 + 60,
      *(short *)(a2 + 16),
      (short)(*(ushort *)(a2 + 16) + *(ushort *)(a2 + 100)),
      *(short *)(a2 + 18),
      *(ushort *)(a2 + 18) + *(ushort *)(a2 + 102),
      *(uint *)(a2 + 8));
    ++*(uchar *)(v2 + 32);
  }
  if ( !Function_2225c14(v2 + 60) )
    ++*(uchar *)(v2 + 32);
  Function_2007dec(*(uint *)(v2 + 20), 0, *(short *)(v2 + 60));
  return Function_2007dec(*(uint *)(v2 + 20), 1u, *(short *)(v2 + 62));
}

//----- (02228C6C) --------------------------------------------------------
int __fastcall Function_2228c6c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int *v9;

  v1 = a1;
  v2 = Function_2235e50();
  *(uint *)(v2 + 96) = v1;
  *(uint *)(v2 + 8) = Function_2220280(v1, 0);
  *(ushort *)(v2 + 100) = Function_2220280(v1, 1);
  *(ushort *)(v2 + 102) = Function_2220280(v1, 2);
  v3 = Function_2220280(v1, 3);
  Function_223595c(v1, v2 + 32);
  v4 = 255;
  if ( v3 > 264 )
  {
    if ( v3 == 272 )
    {
      if ( Function_2223364(v1) == 1 )
      {
        v6 = Function_2220248(v1);
        v4 = Function_22352ac(v1, v6);
      }
      goto LABEL_16;
    }
LABEL_15:
    ErrorHandler();
    goto LABEL_16;
  }
  if ( v3 < 258 )
    goto LABEL_15;
  if ( v3 == 258 )
  {
    v4 = Function_2220240(v1);
    goto LABEL_16;
  }
  if ( v3 != 260 )
  {
    if ( v3 == 264 )
    {
      v4 = Function_2220248(v1);
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ( Function_2223364(v1) == 1 )
  {
    v5 = Function_2220240(v1);
    v4 = Function_22352ac(v1, v5);
  }
LABEL_16:
  if ( v4 == 255 )
    return free(v2);
  v8 = Function_22232fc(v1, v4);
  *(uint *)(v2 + 20) = v8;
  if ( !v8 )
    return free(v2);
  Function_2235918();
  if ( Function_2225964(v1, v4) <= 0 )
  {
    *(ushort *)(v2 + 100) = -*(ushort *)(v2 + 100);
    *(ushort *)(v2 + 102) = -*(ushort *)(v2 + 102);
  }
  if ( Function_221fdd4(v1) == 1 )
    *(ushort *)(v2 + 102) = -*(ushort *)(v2 + 102);
  v9 = Function_22201e8(*(uint *)(v2 + 96), (int)Function_2228bd0, v2);
  return Function_2228bd0(v9, v2);
}

//----- (02228DB8) --------------------------------------------------------
uint __fastcall Function_2228db8(int *a1, int a2)
{
  int v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = Function_2225ba0(v2 + 48, *(short *)(a2 + 32), *(short *)(v2 + 34), *(uint *)(v2 + 36));
  if ( !result )
  {
    Function_2007dec(*(uint *)(v2 + 36), 0, *(short *)(v2 + 32));
    Function_2007dec(*(uint *)(v2 + 36), 1u, *(short *)(v2 + 34) - 8);
    Function_2220220(*(uint *)(v2 + 4), v3);
    result = free(v2);
  }
  return result;
}

//----- (02228E00) --------------------------------------------------------
uint *__fastcall Function_2228e00(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = Function_2235e50();
  Function_223595c(v4, v5);
  v6 = Function_2220280(v4, 0);
  Function_2235998(v4, v6, v5 + 28, &v10);
  *(ushort *)(v5 + 34) += 8;
  v7 = Function_2220280(v4, 1);
  v8 = Function_2220280(v4, 2);
  Function_22263a4((uint *)(v5 + 48), v7, v8);
  *(uint *)(v5 + 60) /= 2;
  *(uint *)(v5 + 68) /= 2;
  return Function_22201e8(*(uint *)(v5 + 4), (int)Function_2228db8, v5);
}

//----- (02228E78) --------------------------------------------------------
uint __fastcall Function_2228e78(int *a1, int a2)
{
  int v2;
  uint result;

  v2 = a2;
  if ( *(uchar *)a2 )
  {
    Function_2220220(*(uint *)(a2 + 4), a1);
    result = free(v2);
  }
  else
  {
    if ( !Function_2225c14(a2 + 48) )
      ++*(uchar *)v2;
    Function_2007dec(*(uint *)(v2 + 36), 0, *(short *)(v2 + 48));
    result = Function_2007dec(*(uint *)(v2 + 36), 1u, *(short *)(v2 + 50));
  }
  return result;
}

//----- (02228EC0) --------------------------------------------------------
uint *__fastcall Function_2228ec0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  ushort v7;
  int v8;
  int v9;
  short v10;
  int v12;
  char v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = Function_2235e50();
  Function_223595c(v4, v5);
  v6 = Function_2220280(v4, 0);
  v7 = Function_2220280(v4, 1);
  if ( v6 > 8 )
  {
    if ( v6 == 16 )
    {
      v9 = Function_2220248(v4);
      v12 = Function_22352ac(v4, v9);
      Function_22353ac(v4, v12, v5 + 84);
      goto LABEL_14;
    }
  }
  else if ( v6 >= 2 )
  {
    switch ( v6 )
    {
      case 2:
        v12 = Function_2220240(v4);
        Function_22353ac(v4, v12, v5 + 84);
        goto LABEL_14;
      case 4:
        v8 = Function_2220240(v4);
        v12 = Function_22352ac(v4, v8);
        Function_22353ac(v4, v12, v5 + 84);
        goto LABEL_14;
      case 8:
        v12 = Function_2220248(v4);
        Function_22353ac(v4, v12, v5 + 84);
        goto LABEL_14;
    }
  }
  ErrorHandler();
  ((void (__fastcall *)(int, int))Function_22353ac)(v4, v5 + 84);
LABEL_14:
  Function_2235998(v4, v6, v5 + 28, &v13);
  *(ushort *)(v5 + 88) = 0;
  *(ushort *)(v5 + 90) = 0;
  if ( Function_223525c(*(uint *)(v5 + 4), v12) == 3 )
    v10 = -80;
  else
    v10 = 336;
  *(ushort *)(v5 + 88) = v10;
  Function_2225bc8(
    v5 + 48,
    *(short *)(v5 + 32),
    *(short *)(v5 + 88),
    *(short *)(v5 + 34),
    *(ushort *)(v5 + 34),
    v7);
  return Function_22201e8(*(uint *)(v5 + 4), (int)Function_2228e78, v5);
}

//----- (02228FB4) --------------------------------------------------------
uint *__fastcall Function_2228fb4(int a1)
{
  int v1;
  int v2;
  int v3;
  ushort v4;
  int v5;
  int v6;
  short v7;
  int v8;
  int v10;
  int v11;
  char v12;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2);
  v11 = Function_2220280(v1, 0);
  v3 = Function_2220280(v1, 1);
  v4 = Function_2220280(v1, 2);
  if ( v3 > 8 )
  {
    if ( v3 == 16 )
    {
      v6 = Function_2220248(v1);
      v10 = Function_22352ac(v1, v6);
      Function_22353ac(v1, v10);
      goto LABEL_14;
    }
  }
  else if ( v3 >= 2 )
  {
    switch ( v3 )
    {
      case 2:
        v10 = Function_2220240(v1);
        Function_22353ac(v1, v10);
        goto LABEL_14;
      case 4:
        v5 = Function_2220240(v1);
        v10 = Function_22352ac(v1, v5);
        Function_22353ac(v1, v10);
        goto LABEL_14;
      case 8:
        v10 = Function_2220248(v1);
        Function_22353ac(v1, v10);
        goto LABEL_14;
    }
  }
  ErrorHandler();
  Function_22353ac(v1, v10);
LABEL_14:
  Function_2235998(v1, v3, v2 + 28, &v12);
  *(ushort *)(v2 + 88) = 0;
  *(ushort *)(v2 + 90) = 0;
  if ( Function_223525c(*(uint *)(v2 + 4), v10) == 3 )
    v7 = -80;
  else
    v7 = 336;
  *(ushort *)(v2 + 88) = v7;
  if ( v11 )
  {
    v8 = Function_22258e0(v1, v10);
    Function_2225bc8(v2 + 48, *(short *)(v2 + 88), v8, *(short *)(v2 + 34), *(ushort *)(v2 + 34), v4);
  }
  else
  {
    Function_2225bc8(
      v2 + 48,
      *(short *)(v2 + 32),
      *(short *)(v2 + 88),
      *(short *)(v2 + 34),
      *(ushort *)(v2 + 34),
      v4);
  }
  return Function_22201e8(*(uint *)(v2 + 4), (int)Function_2228e78, v2);
}

//----- (022290DC) --------------------------------------------------------
int __fastcall Function_22290dc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  short v12;
  short v13;
  char v14;
  char v15;
  int v16;
  int v17;

  v17 = a4;
  v5 = a1;
  v6 = Function_2220280(a1, 0);
  v7 = v6;
  if ( v6 > 8 )
  {
    if ( v6 != 16 )
      goto LABEL_13;
    v9 = Function_2220248(v5);
    v4 = Function_22352ac(v5, v9);
  }
  else
  {
    if ( v6 < 2 )
    {
LABEL_13:
      ErrorHandler();
      goto LABEL_14;
    }
    switch ( v6 )
    {
      case 2:
        v4 = Function_2220240(v5);
        break;
      case 4:
        v8 = Function_2220240(v5);
        v4 = Function_22352ac(v5, v8);
        break;
      case 8:
        v4 = Function_2220248(v5);
        break;
      default:
        goto LABEL_13;
    }
  }
LABEL_14:
  Function_22353ac(v5, v4);
  Function_2235998(v5, v7, &v15, &v14);
  v10 = (short)Function_2223354(v5, v4);
  Function_2007dec(v16, 0, v12);
  return Function_2007dec(v16, 1u, v13 + v10);
}

//----- (02229184) --------------------------------------------------------
uint __fastcall Function_2229184(int *a1, int a2)
{
  int v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = Function_2226848(*(uint *)(a2 + 48));
  if ( !result )
  {
    Function_2226858(*(uint *)(v2 + 48));
    Function_2220220(*(uint *)(v2 + 4), v3);
    result = free(v2);
  }
  return result;
}

//----- (022291AC) --------------------------------------------------------
uint *__fastcall Function_22291ac(int a1)
{
  int v1;
  int v2;
  char v3;
  char v4;
  char v5;
  char v6;
  short v7;
  uint *v8;
  short v9;
  int v10;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2);
  Function_2220280(v1, 0);
  v3 = Function_2220280(v1, 1);
  v4 = Function_2220280(v1, 2);
  v5 = Function_2220280(v1, 3);
  v6 = Function_2220280(v1, 4);
  v7 = Function_2220280(v1, 5);
  Function_2235d74(v1);
  v8 = (uint *)Function_2021f9c(**(uint **)(v2 + 40));
  v9 = Function_201fab4(v8, 1);
  v10 = Function_221fde4(v1);
  *(uint *)(v2 + 48) = Function_2226870(*(uint *)(v2 + 24), v10, 2, 16 * v9, 16, v3, v4, v5, v6, v7, 0x44Cu);
  return Function_22201e8(*(uint *)(v2 + 4), (int)Function_2229184, v2);
}

//----- (02229278) --------------------------------------------------------
int __fastcall Function_2229278(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int result;
  int v6;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)a2 )
  {
    Function_2226b84(*(uint *)(a2 + 36));
    Function_2220220(*(uint *)(v2 + 4), v3);
    result = free(v2);
  }
  else
  {
    v4 = *(uint *)(a2 + 76) + 1;
    *(uint *)(v2 + 76) = v4;
    result = *(uint *)(v2 + 68);
    if ( v4 >= result )
    {
      *(uint *)(v2 + 76) = 0;
      v6 = *(uint *)(v2 + 84);
      if ( *(uint *)(v2 + 72) )
      {
        if ( v6 > 80 )
          *(uint *)(v2 + 84) = 80;
        if ( *(uint *)(v2 + 84) == 80 )
          ++*(uchar *)v2;
      }
      else
      {
        if ( v6 < 0 )
          *(uint *)(v2 + 84) = 0;
        if ( !*(uint *)(v2 + 84) )
          ++*(uchar *)v2;
      }
      Function_2007dec(*(uint *)(v2 + 36), 0x12u, *(uint *)(v2 + 84));
      Function_2007dec(*(uint *)(v2 + 36), 1u, *(uint *)(v2 + 80));
      *(uint *)(v2 + 80) -= *(short *)(v2 + 66);
      result = *(uint *)(v2 + 84) + *(short *)(v2 + 66);
      *(uint *)(v2 + 84) = result;
    }
  }
  return result;
}

//----- (02229304) --------------------------------------------------------
uint *__fastcall Function_2229304(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  char v14;
  int v15;

  v15 = a4;
  v5 = a1;
  v6 = Function_2235e50();
  Function_223595c(v5, v6);
  v7 = Function_2220280(v5, 0);
  Function_2235998(v5, v7, v6 + 28, &v14);
  if ( v7 > 8 )
  {
    if ( v7 == 16 )
    {
      v9 = Function_2220248(v5);
      v4 = Function_22352ac(v5, v9);
      goto LABEL_14;
    }
  }
  else if ( v7 >= 2 )
  {
    switch ( v7 )
    {
      case 2:
        v4 = Function_2220240(v5);
        goto LABEL_14;
      case 4:
        v8 = Function_2220240(v5);
        v4 = Function_22352ac(v5, v8);
        goto LABEL_14;
      case 8:
        v4 = Function_2220248(v5);
        goto LABEL_14;
    }
  }
  ErrorHandler();
LABEL_14:
  v10 = Function_2220280(v5, 1);
  *(uint *)(v6 + 72) = v10;
  v11 = v10 == 0;
  v12 = *(uint *)(v6 + 36);
  if ( v11 )
  {
    *(uint *)(v6 + 80) = Function_20080c0(v12, 1u);
    *(uint *)(v6 + 84) = 80 - Function_20080c0(*(uint *)(v6 + 36), 0x12u);
    *(ushort *)(v6 + 64) = Function_2220280(v5, 2);
    *(ushort *)(v6 + 66) = Function_2220280(v5, 3);
    *(ushort *)(v6 + 66) = -*(ushort *)(v6 + 66);
  }
  else
  {
    *(uint *)(v6 + 80) = Function_20080c0(v12, 1u);
    *(uint *)(v6 + 84) = Function_20080c0(*(uint *)(v6 + 36), 0x12u);
    *(ushort *)(v6 + 64) = Function_2220280(v5, 2);
    *(ushort *)(v6 + 66) = Function_2220280(v5, 3);
  }
  *(uint *)(v6 + 48) = 0;
  *(uint *)(v6 + 52) = 0;
  *(uint *)(v6 + 56) = 80;
  *(uint *)(v6 + 60) = 80 - Function_2223354(v5, v4);
  *(uint *)(v6 + 68) = Function_2220280(v5, 4);
  *(uint *)(v6 + 76) = 0;
  Function_20086d4(
    *(uint *)(v6 + 36),
    *(uint *)(v6 + 48),
    *(uint *)(v6 + 52),
    *(uint *)(v6 + 56),
    *(uint *)(v6 + 60));
  return Function_22201e8(*(uint *)(v6 + 4), (int)Function_2229278, v6);
}

//----- (02229454) --------------------------------------------------------
int __fastcall Function_2229454(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = 0;
  if ( a2 > 8 )
  {
    if ( a2 != 16 )
      goto LABEL_13;
    v5 = Function_2220248(a1);
    v3 = Function_22352ac(v2, v5);
  }
  else
  {
    if ( a2 < 2 )
    {
LABEL_13:
      ErrorHandler();
      return v3;
    }
    switch ( a2 )
    {
      case 2:
        v3 = Function_2220240(a1);
        break;
      case 4:
        v4 = Function_2220240(a1);
        v3 = Function_22352ac(v2, v4);
        break;
      case 8:
        v3 = Function_2220248(a1);
        break;
      default:
        goto LABEL_13;
    }
  }
  return v3;
}

//----- (022294AC) --------------------------------------------------------
int __fastcall Function_22294ac(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = (int)a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      Function_2007dec(*((uint *)a2 + 12), 0xEu, 0);
      Function_2007dec(*(uint *)(v2 + 48), 1u, *(uint *)(v2 + 72));
      Function_2007dec(*(uint *)(v2 + 48), 0x12u, *(uint *)(v2 + 64));
      Function_2226b84(*(uint *)(v2 + 48));
      Function_2220220(*(uint *)(v2 + 4), v3);
      result = free(v2);
    }
  }
  else
  {
    v5 = *((uint *)a2 + 9) + 1;
    *(uint *)(v2 + 36) = v5;
    result = *(uint *)(v2 + 32);
    if ( v5 >= result )
    {
      *(uint *)(v2 + 36) = 0;
      v6 = *(uint *)(v2 + 68) + *(short *)(v2 + 28);
      *(uint *)(v2 + 68) = v6;
      Function_2007dec(*(uint *)(v2 + 48), 1u, v6);
      v7 = *(uint *)(v2 + 60) - *(short *)(v2 + 28);
      *(uint *)(v2 + 60) = v7;
      v8 = *(uint *)(v2 + 64);
      if ( v7 > v8 )
      {
        *(uint *)(v2 + 60) = v8;
        ++*(uchar *)v2;
      }
      result = Function_2007dec(*(uint *)(v2 + 48), 0x12u, *(uint *)(v2 + 60));
    }
  }
  return result;
}

//----- (02229538) --------------------------------------------------------
int __fastcall Function_2229538(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  int result;
  int v5;
  int v6;
  int v7;

  v2 = (int)a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      Function_2007dec(*((uint *)a2 + 12), 0xEu, 0);
      Function_2007dec(*(uint *)(v2 + 48), 1u, *(uint *)(v2 + 72));
      Function_2007dec(*(uint *)(v2 + 48), 0x12u, *(uint *)(v2 + 64));
      Function_2226b84(*(uint *)(v2 + 48));
      Function_2220220(*(uint *)(v2 + 4), v3);
      result = free(v2);
    }
  }
  else
  {
    v5 = *((uint *)a2 + 9) + 1;
    *(uint *)(v2 + 36) = v5;
    result = *(uint *)(v2 + 32);
    if ( v5 >= result )
    {
      *(uint *)(v2 + 36) = 0;
      v6 = *(uint *)(v2 + 68) + *(short *)(v2 + 28);
      *(uint *)(v2 + 68) = v6;
      Function_2007dec(*(uint *)(v2 + 48), 1u, v6);
      v7 = *(uint *)(v2 + 60) - *(short *)(v2 + 28);
      *(uint *)(v2 + 60) = v7;
      if ( v7 < 0 )
      {
        *(uint *)(v2 + 60) = 0;
        ++*(uchar *)v2;
      }
      result = Function_2007dec(*(uint *)(v2 + 48), 0x12u, *(uint *)(v2 + 60));
    }
  }
  return result;
}

//----- (022295C4) --------------------------------------------------------
int __fastcall Function_22295c4(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  int result;
  int v5;

  v2 = (int)a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      Function_2007dec(*((uint *)a2 + 12), 0xEu, 0);
      Function_2226b84(*(uint *)(v2 + 48));
      Function_2220220(*(uint *)(v2 + 4), v3);
      result = free(v2);
    }
  }
  else
  {
    v5 = *((uint *)a2 + 9) + 1;
    *(uint *)(v2 + 36) = v5;
    result = *(uint *)(v2 + 32);
    if ( v5 >= result )
    {
      *(uint *)(v2 + 36) = 0;
      *(uint *)(v2 + 60) -= *(short *)(v2 + 28);
      *(uint *)(v2 + 64) += *(short *)(v2 + 28);
      if ( *(uint *)(v2 + 60) < 0 )
      {
        *(uint *)(v2 + 60) = 0;
        ++*(uchar *)v2;
      }
      result = (int)Function_20086d4(*(uint *)(v2 + 48), 0, *(uint *)(v2 + 60), 80, *(uint *)(v2 + 64));
    }
  }
  return result;
}

//----- (02229638) --------------------------------------------------------
uint *__fastcall Function_2229638(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint *result;
  int v6;
  int v7;
  int v8;
  char v9;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2);
  *(ushort *)(v2 + 28) = Function_2220280(v1, 3);
  *(uint *)(v2 + 32) = Function_2220280(v1, 4);
  v3 = Function_2220280(v1, 0);
  Function_2235998(v1, v3, v2 + 40, &v9);
  v4 = Function_2229454(v1, v3);
  if ( Function_2220280(v1, 5) )
  {
    *(uint *)(v2 + 60) = 80 - Function_2223354(v1, v4);
    *(uint *)(v2 + 64) = 0;
    Function_20086d4(*(uint *)(v2 + 48), 0, *(uint *)(v2 + 60), 80, 0);
    result = Function_22201e8(*(uint *)(v2 + 4), (int)Function_22295c4, v2);
  }
  else
  {
    v6 = Function_20080c0(*(uint *)(v2 + 48), 1u);
    *(uint *)(v2 + 68) = v6;
    *(uint *)(v2 + 72) = v6;
    v7 = 80 - Function_2223354(v1, v4);
    *(uint *)(v2 + 60) = v7;
    *(uint *)(v2 + 64) = v7;
    if ( *(short *)(v2 + 28) <= 0 )
    {
      *(uint *)(v2 + 60) = 0;
      v8 = *(uint *)(v2 + 68) + *(uint *)(v2 + 64);
      *(uint *)(v2 + 68) = v8;
      Function_2007dec(*(uint *)(v2 + 48), 1u, v8);
      Function_20086d4(*(uint *)(v2 + 48), 0, 0, 80, *(uint *)(v2 + 60));
      result = Function_22201e8(*(uint *)(v2 + 4), (int)Function_22294ac, v2);
    }
    else
    {
      Function_20086d4(*(uint *)(v2 + 48), 0, 0, 80, *(uint *)(v2 + 60));
      result = Function_22201e8(*(uint *)(v2 + 4), (int)Function_2229538, v2);
    }
  }
  return result;
}

//----- (02229738) --------------------------------------------------------
void __fastcall Function_2229738(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  bool v5;
  uchar v6;
  char v7;
  char v8;

  v2 = a2;
  if ( *(uchar *)a2 )
  {
    if ( *(uchar *)a2 != 1 )
    {
      Function_2220220(*(uint *)(a2 + 44), a1);
      free(v2);
      return;
    }
  }
  else
  {
    Function_2226108(
      a2 + 212,
      (short)*(uint *)(a2 + 4),
      (short)*(uint *)(a2 + 8),
      *(uint *)(a2 + 12),
      *(uint *)(a2 + 16));
    ++*(uchar *)v2;
  }
  if ( Function_2226138((short *)(v2 + 212)) )
  {
    if ( *(ushort *)(v2 + 212) )
    {
      *(uint *)(v2 + 32) = 1;
      Function_2019184(*(uint *)(v2 + 40), *(uint *)(v2 + 28) & 0xFF, 0, *(short *)(v2 + 212));
    }
    if ( *(ushort *)(v2 + 214) )
    {
      *(uint *)(v2 + 36) = 1;
      Function_2019184(*(uint *)(v2 + 40), *(uint *)(v2 + 28) & 0xFF, 3u, *(short *)(v2 + 214));
    }
  }
  else
  {
    v3 = *(uchar *)(v2 + 1);
    v4 = *(uint *)(v2 + 24);
    v6 = __OFSUB__(v3, v4);
    v5 = v3 - v4 < 0;
    v7 = *(uchar *)v2;
    if ( v5 ^ v6 )
      v8 = v7 - 1;
    else
      v8 = v7 + 1;
    *(uchar *)v2 = v8;
    if ( *(uint *)(v2 + 32) )
      Function_2019184(*(uint *)(v2 + 40), *(uint *)(v2 + 28) & 0xFF, 0, 0);
    if ( *(uint *)(v2 + 36) )
      Function_2019184(*(uint *)(v2 + 40), *(uint *)(v2 + 28) & 0xFF, 3u, 0);
    ++*(uchar *)(v2 + 1);
  }
}

//----- (02229810) --------------------------------------------------------
uint *__fastcall Function_2229810(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_2235e50();
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uint *)(v2 + 44) = v1;
  *(uint *)(v2 + 48) = Function_22202ec(v1);
  *(uint *)(v2 + 40) = Function_2220278(*(uint *)(v2 + 44));
  *(uint *)(v2 + 4) = Function_2220280(v1, 0);
  *(uint *)(v2 + 8) = Function_2220280(v1, 1);
  *(uint *)(v2 + 12) = Function_2220280(v1, 2);
  *(uint *)(v2 + 16) = Function_2220280(v1, 3);
  *(uint *)(v2 + 24) = Function_2220280(v1, 4);
  if ( Function_2220280(v1, 5) )
    v3 = 2;
  else
    v3 = 3;
  *(uint *)(v2 + 28) = v3;
  return Function_22201e8(*(uint *)(v2 + 44), (int)Function_2229738, v2);
}

//----- (0222988C) --------------------------------------------------------
uint __fastcall Function_222988c(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  uint result;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 44);
  v5 = *(uint *)(a2 + 36);
  if ( v5 != v4 && *(uint *)(a2 + 40) != v4 )
  {
    v7 = *(short *)(a2 + 32);
    if ( v7 >= 0 )
    {
      v9 = v5 + v7;
      if ( v9 >= 15 )
      {
        *(uint *)(a2 + 36) = v4;
        *(uint *)(a2 + 40) = *(uint *)(a2 + 44);
      }
      else
      {
        *(uint *)(a2 + 36) = v9;
        *(uint *)(a2 + 40) += *(short *)(a2 + 32);
      }
    }
    else
    {
      v8 = v5 + v7;
      if ( v8 <= 0 )
      {
        *(uint *)(a2 + 36) = v4;
        *(uint *)(a2 + 40) = *(uint *)(a2 + 44);
      }
      else
      {
        *(uint *)(a2 + 36) = v8;
        *(uint *)(a2 + 40) += *(short *)(a2 + 32);
      }
    }
    Function_200d330(*(int **)(a2 + 28));
    REG_MOSAIC_OBJ = *(uchar *)(v2 + 36) | 16 * *(uint *)(v2 + 40);
    result = Function_200c7ec(*(int **)(v2 + 12));
  }
  else
  {
    Function_2220220(*(uint *)(a2 + 4), v3);
    result = free(v2);
  }
  return result;
}

//----- (02229908) --------------------------------------------------------
uint __fastcall Function_2229908(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;
  int v5;
  int *v6;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2);
  *(ushort *)(v2 + 32) = Function_2220280(*(uint *)(v2 + 4), 1);
  *(uint *)(v2 + 36) = Function_2220280(*(uint *)(v2 + 4), 2);
  *(uint *)(v2 + 40) = Function_2220280(*(uint *)(v2 + 4), 3);
  v3 = Function_2220280(*(uint *)(v2 + 4), 0);
  v4 = (uint *)Function_22202c0(*(uint *)(v2 + 4), v3);
  *(uint *)(v2 + 28) = v4;
  Function_200d3f4(v4, 1);
  if ( *(short *)(v2 + 32) >= 0 )
    v5 = 15;
  else
    v5 = 0;
  *(uint *)(v2 + 44) = v5;
  Function_200d7fc(*(int **)(v2 + 28), 1);
  v6 = Function_22201e8(*(uint *)(v2 + 4), (int)Function_222988c, v2);
  return Function_222988c(v6, v2);
}

//----- (02229980) --------------------------------------------------------
uint __fastcall Function_2229980(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  uint result;

  v2 = a2;
  v3 = a1;
  *a2 = Function_2220280(a1, 0);
  *((ushort *)v2 + 6) = Function_2220280(v3, 1);
  *((ushort *)v2 + 7) = Function_2220280(v3, 2);
  *((ushort *)v2 + 2) = Function_2220280(v3, 3);
  *((ushort *)v2 + 3) = Function_2220280(v3, 4);
  v2[2] = Function_2220280(v3, 5);
  v2[4] = Function_2220280(v3, 6);
  v2[12] = Function_2220280(v3, 8);
  v4 = Function_2220280(v3, 7);
  v2[7] = 0;
  v2[8] = (v4 & 0xFFFF0000) >> 16;
  v2[9] = (ushort)v4;
  if ( !v2[8] )
    v2[8] = 0;
  if ( !v2[9] )
    v2[9] = 255;
  v2[14] = Function_222026c(v3, *v2);
  v2[13] = Function_2220250(v3);
  v5 = v2[4];
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v2[5] = Function_2220248(v3);
      v2[6] = Function_2220240(v3);
    }
  }
  else
  {
    v2[5] = Function_2220240(v3);
    v2[6] = Function_2220248(v3);
  }
  result = v2[14];
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (02229A50) --------------------------------------------------------
int __fastcall Function_2229a50(int a1, int a2, int a3, int a4)
{
  int **v4;
  int i;

  v4 = *(int ***)(a1 + 8);
  for ( i = 0; v4; v4 = (int **)*v4 )
  {
    a3 = *((ushort *)v4 + 19);
    a4 = *((ushort *)v4 + 18);
  }
  if ( a3 != a4 )
    i = 1;
  return i;
}

//----- (02229A6C) --------------------------------------------------------
int __fastcall Function_2229a6c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int result;
  int v9;
  uint v10;
  uint v11;
  int v12;

  v4 = a2;
  v5 = a1;
  v6 = Function_2229a50(*(uint *)(a2 + 56), a2, a3, a4);
  v7 = *(uint *)(v4 + 40);
  if ( v7 >= *(short *)(v4 + 4) )
  {
    if ( Function_2225c14(v4 + 168) || v6 )
    {
      v9 = *(uint *)(v4 + 28);
      if ( *(uint *)(v4 + 32) <= v9 && *(uint *)(v4 + 36) >= v9 || (result = *(uint *)(v4 + 36), result == 255) )
      {
        *(uint *)(*(uint *)(v4 + 56) + 40) = 172 * *(short *)(v4 + 168)
                                               + *(uint *)(**(uint **)(*(uint *)(v4 + 56) + 32) + 4);
        result = 170;
        *(uint *)(*(uint *)(v4 + 56) + 44) = 172 * *(short *)(v4 + 170)
                                               + *(uint *)(**(uint **)(*(uint *)(v4 + 56) + 32) + 8);
        if ( *(uint *)(v4 + 48) )
        {
          v10 = *(uint *)(v4 + 44) + s32_div_f(0x168u, *(short *)(v4 + 6));
          *(uint *)(v4 + 44) = v10;
          v11 = Function_201d250((ushort)v10);
          v12 = *(uint *)(v4 + 56);
          result = 172 * *(short *)(v4 + 170) + v11 + *(uint *)(**(uint **)(v12 + 32) + 8);
          *(uint *)(v12 + 44) = result;
        }
      }
    }
    else
    {
      Function_2014724(*(uint ***)(v4 + 52), *(int **)(v4 + 56));
      Function_2220220(*(uint *)(v4 + 64), v5);
      result = Function_2235e80(v4);
    }
  }
  else
  {
    result = v7 + 1;
    *(uint *)(v4 + 40) = v7 + 1;
  }
  return result;
}

//----- (02229B28) --------------------------------------------------------
uint *__fastcall Function_2229b28(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  short v5;
  short v6;
  short v7;
  int i;
  int v9;
  uint v11;
  uint v12;
  uint v13;
  uint v14;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2 + 60);
  Function_2229980(v1, (int *)v2);
  v3 = Function_2220240(v1);
  v4 = Function_2225964(v1, v3);
  Function_2235508(v1, *(uint *)(v2 + 20), &v13);
  Function_2235508(v1, *(uint *)(v2 + 24), &v11);
  LOWORD(v1) = s32_div_f(v13, 172);
  v5 = s32_div_f(v11, 172);
  v6 = s32_div_f(v14, 172);
  v7 = s32_div_f(v12, 172);
  Function_2225bc8(
    v2 + 168,
    (short)v1,
    (short)(v5 + *(ushort *)(v2 + 12) * v4),
    v6,
    v7 + *(ushort *)(v2 + 14) * v4,
    *(ushort *)(v2 + 6));
  if ( v4 <= 0 )
    Function_2225d50((uint *)(v2 + 240), 0x3FFF * v4, 23665 * v4, 10);
  else
    Function_2225d50((uint *)(v2 + 240), 3640 * v4, 23665 * v4, 10);
  for ( i = 0; i < *(uint *)(v2 + 32); ++i )
    Function_2225c14(v2 + 168);
  v9 = *(uint *)(v2 + 36);
  if ( v9 != 255 )
    *(uint *)(v2 + 28) = v9 + 1;
  *(uint *)(*(uint *)(v2 + 56) + 40) = 172 * *(short *)(v2 + 168)
                                         + *(uint *)(**(uint **)(*(uint *)(v2 + 56) + 32) + 4);
  *(uint *)(*(uint *)(v2 + 56) + 44) = 172 * *(short *)(v2 + 170)
                                         + *(uint *)(**(uint **)(*(uint *)(v2 + 56) + 32) + 8);
  return Function_22201e8(*(uint *)(v2 + 64), (int)Function_2229a6c, v2);
}

//----- (02229C5C) --------------------------------------------------------
uint *__fastcall Function_2229c5c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  short v10;
  short v11;
  short v12;
  int i;
  int v14;
  uint v16;
  uint v17;
  uint v18;
  uint v19;
  int v20;

  v20 = a4;
  v4 = a1;
  v5 = Function_2235e50();
  Function_223595c(v4, v5 + 60);
  *(uint *)v5 = Function_2220280(v4, 0);
  *(uint *)(v5 + 16) = Function_2220280(v4, 1);
  v6 = Function_2220280(v4, 2);
  *(ushort *)(v5 + 6) = Function_2220280(v4, 3);
  *(ushort *)(v5 + 4) = Function_2220280(v4, 4);
  *(uint *)(v5 + 40) = 0;
  v7 = Function_2220280(v4, 5);
  *(uint *)(v5 + 28) = 0;
  *(uint *)(v5 + 32) = (v7 & 0xFFFF0000) >> 16;
  *(uint *)(v5 + 36) = (ushort)v7;
  if ( !*(uint *)(v5 + 32) )
    *(uint *)(v5 + 32) = 0;
  if ( !*(uint *)(v5 + 36) )
    *(uint *)(v5 + 36) = 255;
  *(uint *)(v5 + 56) = Function_222026c(v4, *(uint *)v5);
  *(uint *)(v5 + 52) = Function_2220250(v4);
  if ( *(uint *)(v5 + 16) )
  {
    *(uint *)(v5 + 20) = Function_2220248(v4);
    v8 = Function_2220248(v4);
  }
  else
  {
    *(uint *)(v5 + 20) = Function_2220240(v4);
    v8 = Function_2220240(v4);
  }
  *(uint *)(v5 + 24) = v8;
  if ( !*(uint *)(v5 + 56) )
    ErrorHandler();
  Function_2235508(v4, *(uint *)(v5 + 20), &v18);
  Function_2235508(v4, *(uint *)(v5 + 24), &v16);
  if ( v6 )
  {
    Function_2235748(&v16);
    v16 = v18;
  }
  else
  {
    Function_2235748(&v18);
    v18 = v16;
  }
  v9 = s32_div_f(v18, 172);
  v10 = s32_div_f(v16, 172);
  v11 = s32_div_f(v19, 172);
  v12 = s32_div_f(v17, 172);
  Function_2225bc8(v5 + 168, v9, v10, v11, v12, *(ushort *)(v5 + 6));
  for ( i = 0; i < *(uint *)(v5 + 32); ++i )
    Function_2225c14(v5 + 168);
  v14 = *(uint *)(v5 + 36);
  if ( v14 != 255 )
    *(uint *)(v5 + 28) = v14 + 1;
  *(uint *)(*(uint *)(v5 + 56) + 40) = 172 * *(short *)(v5 + 168)
                                         + *(uint *)(**(uint **)(*(uint *)(v5 + 56) + 32) + 4);
  *(uint *)(*(uint *)(v5 + 56) + 44) = 172 * *(short *)(v5 + 170)
                                         + *(uint *)(**(uint **)(*(uint *)(v5 + 56) + 32) + 8);
  return Function_22201e8(*(uint *)(v5 + 64), (int)Function_2229a6c, v5);
}

//----- (02229DF0) --------------------------------------------------------
int __fastcall Function_2229df0(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int result;

  v4 = a2;
  v5 = a1;
  v6 = Function_2229a50(*(uint *)(a2 + 56), a2, a3, a4);
  if ( Function_2225ce4((ushort *)(v4 + 168), (ushort *)(v4 + 204)) || v6 )
  {
    *(uint *)(*(uint *)(v4 + 56) + 40) = 172 * *(short *)(v4 + 168)
                                           + *(uint *)(**(uint **)(*(uint *)(v4 + 56) + 32) + 4);
    result = *(uint *)(v4 + 56);
    *(uint *)(result + 44) = 172 * *(short *)(v4 + 170) + *(uint *)(**(uint **)(result + 32) + 8);
  }
  else
  {
    Function_2014724(*(uint ***)(v4 + 52), *(int **)(v4 + 56));
    Function_2220220(*(uint *)(v4 + 64), v5);
    result = Function_2235e80(v4);
  }
  return result;
}

//----- (02229E54) --------------------------------------------------------
uint *__fastcall Function_2229e54(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  short v5;
  short v6;
  short v7;
  int i;
  int v9;
  uint v11;
  uint v12;
  uint v13;
  uint v14;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2 + 60);
  Function_2229980(v1, (int *)v2);
  v3 = Function_2220240(v1);
  v4 = Function_2225964(v1, v3);
  Function_2235508(v1, *(uint *)(v2 + 20), &v13);
  Function_2235508(v1, *(uint *)(v2 + 24), &v11);
  LOWORD(v1) = s32_div_f(v13, 172);
  v5 = s32_div_f(v11, 172);
  v6 = s32_div_f(v14, 172);
  v7 = s32_div_f(v12, 172);
  Function_2225c98(
    v2 + 168,
    v2 + 204,
    (short)v1,
    (short)(v5 + *(ushort *)(v2 + 12) * v4),
    v6,
    v7 + *(ushort *)(v2 + 14) * v4,
    *(ushort *)(v2 + 6),
    -4096 * *(uint *)(v2 + 8));
  if ( v4 <= 0 )
    Function_2225d50((uint *)(v2 + 240), 0x3FFF * v4, 23665 * v4, 10);
  else
    Function_2225d50((uint *)(v2 + 240), 3640 * v4, 23665 * v4, 10);
  for ( i = 0; i < *(uint *)(v2 + 32); ++i )
    Function_2225ce4((ushort *)(v2 + 168), (ushort *)(v2 + 204));
  v9 = *(uint *)(v2 + 36);
  if ( v9 != 255 )
    *(uint *)(v2 + 28) = v9 + 1;
  *(uint *)(*(uint *)(v2 + 56) + 40) = 172 * *(short *)(v2 + 168)
                                         + *(uint *)(**(uint **)(*(uint *)(v2 + 56) + 32) + 4);
  *(uint *)(*(uint *)(v2 + 56) + 44) = 172 * *(short *)(v2 + 170)
                                         + *(uint *)(**(uint **)(*(uint *)(v2 + 56) + 32) + 8);
  return Function_22201e8(*(uint *)(v2 + 64), (int)Function_2229df0, v2);
}

//----- (02229F9C) --------------------------------------------------------
uint __fastcall Function_2229f9c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  uint result;
  int v8;
  int v9;

  v4 = a2;
  v5 = a1;
  v6 = Function_2229a50(*(uint *)(a2 + 56), a2, a3, a4);
  if ( Function_2225ae0(v4 + 88) || v6 )
  {
    v8 = *(uint *)(v4 + 140) + 172 * *(short *)(v4 + 90);
    *(uint *)(*(uint *)(v4 + 56) + 40) = *(uint *)(v4 + 136)
                                           + 172 * *(short *)(v4 + 88)
                                           + *(uint *)(**(uint **)(*(uint *)(v4 + 56) + 32) + 4);
    v9 = *(uint *)(v4 + 56);
    result = v8 + *(uint *)(**(uint **)(v9 + 32) + 8);
    *(uint *)(v9 + 44) = result;
  }
  else
  {
    Function_2014724(*(uint ***)(v4 + 52), *(int **)(v4 + 56));
    Function_2220220(*(uint *)(v4 + 64), v5);
    result = free(v4);
  }
  return result;
}

//----- (0222A00C) --------------------------------------------------------
uint *__fastcall Function_222a00c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  ushort v6;
  ushort v7;
  ushort v8;
  ushort v9;
  int v10;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2 + 60);
  *(uint *)v2 = Function_2220280(v1, 0);
  *(uint *)(v2 + 4) = Function_2220280(v1, 1);
  *(uint *)(v2 + 12) = Function_2220280(v1, 2);
  *(uint *)(v2 + 8) = Function_2220280(v1, 3);
  *(uint *)(v2 + 16) = Function_2220280(v1, 4);
  *(uint *)(v2 + 20) = Function_2220280(v1, 5);
  *(uint *)(v2 + 24) = Function_2220280(v1, 6);
  *(uint *)(v2 + 28) = Function_2220280(v1, 7);
  v3 = Function_2220280(v1, 8);
  *(uint *)(v2 + 32) = v3;
  if ( v3 )
    v4 = Function_2220248(v1);
  else
    v4 = Function_2220240(v1);
  *(uint *)(v2 + 36) = v4;
  Function_2235508(v1, *(uint *)(v2 + 36), v2 + 136);
  *(uint *)(v2 + 56) = Function_222026c(v1, *(uint *)v2);
  v5 = Function_2220280(v1, 9);
  *(uint *)(v2 + 52) = Function_2220260(v1, v5);
  v6 = s32_div_f(0xFFFF * *(uint *)(v2 + 4), 360);
  v7 = s32_div_f(0xFFFF * *(uint *)(v2 + 12), 360);
  v8 = s32_div_f(0xFFFF * *(uint *)(v2 + 8), 360);
  v9 = s32_div_f(0xFFFF * *(uint *)(v2 + 16), 360);
  Function_2225a5c(
    (uint *)(v2 + 88),
    v6,
    v7,
    v8,
    v9,
    *(uint *)(v2 + 20) << 12,
    *(uint *)(v2 + 24) << 12,
    *(uint *)(v2 + 28));
  Function_2225ae0(v2 + 88);
  v10 = *(uint *)(v2 + 140) + 172 * *(short *)(v2 + 90);
  *(uint *)(*(uint *)(v2 + 56) + 40) = *(uint *)(v2 + 136)
                                         + 172 * *(short *)(v2 + 88)
                                         + *(uint *)(**(uint **)(*(uint *)(v2 + 56) + 32) + 4);
  *(uint *)(*(uint *)(v2 + 56) + 44) = v10 + *(uint *)(**(uint **)(*(uint *)(v2 + 56) + 32) + 8);
  return Function_22201e8(*(uint *)(v2 + 64), (int)Function_2229f9c, v2);
}

//----- (0222A178) --------------------------------------------------------
uint __fastcall Function_222a178(int *a1, int a2)
{
  int v2;
  int *v3;
  bool v4;
  int *v5;
  uint result;

  v2 = a2;
  v3 = a1;
  v4 = Function_200d3b8(*(int **)(a2 + 28)) == 0;
  v5 = *(int **)(v2 + 28);
  if ( v4 )
  {
    Function_200d0f4((int)v5);
    Function_2220220(*(uint *)(v2 + 4), v3);
    result = free(v2);
  }
  else
  {
    Function_200d330(v5);
    result = Function_200c7ec(*(int **)(v2 + 16));
  }
  return result;
}

//----- (0222A1AC) --------------------------------------------------------
uint *__fastcall Function_222a1ac(int a1, int a2, int a3, uint **a4)
{
  int v4;
  uint **v5;
  int v6;
  int v7;
  short v8;

  v4 = a1;
  v5 = a4;
  v6 = Function_2235e50();
  Function_223595c(v4, v6);
  *(uint *)(v6 + 28) = v5;
  v7 = (short)Function_2220280(v4, 0);
  v8 = Function_2220280(v4, 1);
  Function_200d5dc(v5, v7, v8);
  return Function_22201e8(*(uint *)(v6 + 4), (int)Function_222a178, v6);
}

//----- (0222A1F4) --------------------------------------------------------
int __fastcall Function_222a1f4(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  char v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)a2 )
  {
    if ( *(uchar *)a2 != 1 )
    {
      Function_200d0f4(*(uint *)(a2 + 28));
      Function_2220220(*(uint *)(v2 + 4), v3);
      return free(v2);
    }
    if ( Function_2225da0((uint *)(a2 + 32)) == 1 )
    {
      Function_200d79c(*(int **)(v2 + 28), *(uint *)(v2 + 32));
    }
    else
    {
      v10 = *(uint *)(v2 + 52);
      if ( v10 <= 5 )
      {
        v11 = v10 + 1;
        *(uint *)(v2 + 52) = v11;
        switch ( (uchar)v11 )
        {
          case 1:
            Function_2225d50((uint *)(v2 + 32), 3640, -3640, 4);
            break;
          case 2:
            Function_2225d50((uint *)(v2 + 32), -3640, 3640, 4);
            break;
          case 3:
            Function_2225d50((uint *)(v2 + 32), 3640, -3640, 4);
            break;
          case 4:
            Function_2225d50((uint *)(v2 + 32), -3640, 3640, 4);
            break;
          case 5:
            Function_2225d50((uint *)(v2 + 32), 3640, 0, 2);
            break;
          default:
            break;
        }
      }
      else
      {
        ++*(uchar *)v2;
      }
    }
  }
  else
  {
    v4 = *(uint *)(a2 + 52);
    v5 = *((short *)dword_223A03C + v4);
    *(uint *)(v2 + 52) = v4 + 1;
    if ( v5 == 255 )
    {
      Function_200d6a4(*(uint **)(v2 + 28), 2);
      Function_2225d50((uint *)(v2 + 32), 0, 3640, 4);
      Function_200d7e0(*(uint ***)(v2 + 28), -8, 16);
      *(uint *)(v2 + 52) = 0;
      ++*(uchar *)v2;
    }
    else
    {
      if ( !v5 )
      {
        v6 = Function_200d454(*(int **)(v2 + 28));
        v7 = v6 == Function_222339c(*(uint *)(v2 + 4));
        v8 = *(uint *)(v2 + 4);
        if ( v7 )
          v9 = Function_2223428(v8, 2);
        else
          v9 = Function_222339c(v8);
        Function_200d460(*(int **)(v2 + 28), v9);
      }
      Function_200d5dc(*(uint ***)(v2 + 28), v5, 0);
    }
  }
  Function_200d330(*(int **)(v2 + 28));
  return Function_200c7ec(*(int **)(v2 + 16));
}

//----- (0222A34C) --------------------------------------------------------
uint *__fastcall Function_222a34c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  int *v12;
  char v13;

  v4 = a1;
  v5 = a4;
  v6 = Function_2235e50();
  Function_223595c(v4, v6);
  *(uint *)(v6 + 28) = v5;
  *(uint *)(v6 + 52) = 0;
  v7 = Function_2220248(v4);
  v8 = Function_22258e0(v4, v7);
  v9 = Function_22258e0(v4, v7);
  Function_200d4c4(*(int **)(v6 + 28), v8, v9);
  v10 = Function_2220240(v4);
  v11 = Function_223525c(v4, v10) == 4;
  v12 = *(int **)(v6 + 28);
  if ( v11 )
    Function_200d364(v12, 1u);
  else
    Function_200d364(v12, 0);
  v13 = Function_222339c(*(uint *)(v6 + 4));
  Function_200d460(*(int **)(v6 + 28), v13);
  Function_200d5dc(*(uint ***)(v6 + 28), 0, 12);
  return Function_22201e8(*(uint *)(v6 + 4), (int)Function_222a1f4, v6);
}

//----- (0222A3DC) --------------------------------------------------------
uint __fastcall Function_222a3dc(int *a1, int a2)
{
  int v2;
  int *v3;
  bool v4;
  int *v5;
  uint result;

  v2 = a2;
  v3 = a1;
  v4 = Function_200d3b8(*(int **)(a2 + 28)) == 0;
  v5 = *(int **)(v2 + 28);
  if ( v4 )
  {
    Function_200d0f4((int)v5);
    Function_2220220(*(uint *)(v2 + 4), v3);
    result = free(v2);
  }
  else
  {
    Function_200d330(v5);
    result = Function_200c7ec(*(int **)(v2 + 16));
  }
  return result;
}

//----- (0222A410) --------------------------------------------------------
uint *__fastcall Function_222a410(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  char v11;

  v4 = a1;
  v5 = a4;
  v6 = Function_2235e50();
  Function_223595c(v4, v6);
  *(uint *)(v6 + 28) = v5;
  v7 = Function_2220248(v4);
  v8 = Function_22258e0(v4, v7);
  Function_22258e0(v4, v7);
  if ( Function_221fdd4(v4) == 1 )
  {
    v8 = 72;
    v9 = 32;
    v10 = 0;
  }
  else if ( Function_223525c(*(uint *)(v6 + 4), v7) == 3 )
  {
    v9 = 126;
    v10 = 1;
  }
  else
  {
    v9 = 32;
    v10 = 0;
  }
  Function_200d4c4(*(int **)(v6 + 28), v8, v9);
  Function_200d364(*(int **)(v6 + 28), v10);
  v11 = Function_2223428(*(uint *)(v6 + 4), 2);
  Function_200d460(*(int **)(v6 + 28), v11);
  return Function_22201e8(*(uint *)(v6 + 4), (int)Function_222a3dc, v6);
}

//----- (0222A4A0) --------------------------------------------------------
uint __fastcall Function_222a4a0(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  uint result;

  v2 = a2;
  v3 = a1;
  switch ( *(uchar *)a2 )
  {
    case 0:
      Function_2225c98(a2 + 36, a2 + 72, -30, 112, 160, 112, 0x15u, 0x40000);
      ++*(uchar *)v2;
      goto LABEL_14;
    case 1:
      if ( !Function_2225d2c((ushort *)(a2 + 36), (ushort *)(a2 + 72), *(int **)(a2 + 28)) )
        ++*(uchar *)v2;
      goto LABEL_14;
    case 2:
      if ( !Function_200d3b8(*(int **)(a2 + 28)) )
      {
        Function_200d810(*(int **)(v2 + 28), 1);
        *(uchar *)(v2 + 32) = 16;
        *(uchar *)(v2 + 33) = 0;
        v4 = *(uchar *)(v2 + 32);
        v5 = *(uchar *)(v2 + 33);
        Function_2235780(*(uint *)(v2 + 4));
        ++*(uchar *)v2;
      }
      goto LABEL_14;
    case 3:
      if ( *(uchar *)(a2 + 32) )
        --*(uchar *)(a2 + 32);
      if ( *(uchar *)(a2 + 33) < 0x10u )
        ++*(uchar *)(a2 + 33);
      REG_BLDALPHA = *(uchar *)(a2 + 32) | (ushort)(*(uchar *)(a2 + 33) << 8);
      if ( !*(uchar *)(a2 + 32) )
        ++*(uchar *)a2;
LABEL_14:
      Function_200d330(*(int **)(v2 + 28));
      result = Function_200c7ec(*(int **)(v2 + 16));
      break;
    default:
      Function_200d0f4(*(uint *)(a2 + 28));
      Function_2220220(*(uint *)(v2 + 4), v3);
      result = free(v2);
      break;
  }
  return result;
}

//----- (0222A5C0) --------------------------------------------------------
uint *__fastcall Function_222a5c0(int a1, int a2, int a3, int *a4)
{
  int v4;
  int *v5;
  int v6;
  char v7;

  v4 = a1;
  v5 = a4;
  v6 = Function_2235e50();
  Function_223595c(v4, v6);
  *(uint *)(v6 + 28) = v5;
  Function_200d4c4(v5, -30, 160);
  v7 = Function_2223428(*(uint *)(v6 + 4), 2);
  Function_200d460(*(int **)(v6 + 28), v7);
  return Function_22201e8(*(uint *)(v6 + 4), (int)Function_222a4a0, v6);
}

//----- (0222A604) --------------------------------------------------------
ushort *__fastcall Function_222a604(int a1)
{
  int v1;
  ushort *result;

  v1 = a1;
  if ( Function_2220280(a1, 0) )
    result = Function_2226924(v1);
  else
    result = (ushort *)Function_2226954(v1);
  return result;
}

//----- (0222A624) --------------------------------------------------------
int __fastcall Function_222a624(uchar *a1, char a2, int a3, int a4)
{
  uchar *v4;
  int result;
  uint v6;
  int v7;
  uint v8;
  uint v9;
  uint v10;
  uint v11;
  int v12;
  bool v13;
  uchar v14;
  uint *v15;
  short v16[2];
  short v17[2];
  int v18;

  v18 = a4;
  v4 = a1;
  result = *a1;
  if ( (uint)result <= 0x18 )
    JUMPOUT(__CS__, (char *)&off_222A63E + *((short *)&off_222A63E + result) + 2);
  switch ( a2 )
  {
    case 0:
      if ( *((uint *)v4 + 13) )
      {
        REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
        WIN_IN = WIN_IN & 0xFFC0 | 0x2F;
        WIN_OUT = WIN_OUT & 0xFFC0 | 0x3F;
        WIN0_X1 = -32768;
        WIN0_Y1 = 22208;
      }
      else
      {
        REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
        WIN_IN = WIN_IN & 0xFFC0 | 0x2F;
        WIN_OUT = WIN_OUT & 0xFFC0 | 0x3F;
        WIN0_X1 = 128;
        WIN0_Y1 = -24384;
      }
      v6 = PRNG();
      result = s32_div_f(v6, 5);
      *((uint *)v4 + 15) = v7 + 35;
      break;
    case 5:
    case 6:
      v8 = PRNG();
      result = (v8 >> 31) + __ROR4__((v8 << 31) - (v8 >> 31), 31);
      if ( result )
      {
        result = *((uint *)v4 + 14);
        if ( !result )
        {
          *((uint *)v4 + 14) = 1;
          result = Function_200d5dc(*((uint ***)v4 + 7), 0, 4);
        }
      }
      break;
    case 7:
      result = *((uint *)v4 + 14);
      if ( result != 1 )
      {
        *((uint *)v4 + 14) = result + 1;
        result = Function_200d5dc(*((uint ***)v4 + 7), 0, 4);
      }
      break;
    case 10:
    case 11:
      v9 = PRNG();
      result = (v9 >> 31) + __ROR4__((v9 << 31) - (v9 >> 31), 31);
      if ( result )
      {
        result = *((uint *)v4 + 14);
        if ( result == 1 )
        {
          *((uint *)v4 + 14) = 2;
          result = Function_200d5dc(*((uint ***)v4 + 7), 0, 4);
        }
      }
      break;
    case 12:
      result = *((uint *)v4 + 14);
      if ( result != 2 )
      {
        *((uint *)v4 + 14) = result + 1;
        result = Function_200d5dc(*((uint ***)v4 + 7), 0, 4);
      }
      break;
    case 15:
    case 16:
      v10 = PRNG();
      result = (v10 >> 31) + __ROR4__((v10 << 31) - (v10 >> 31), 31);
      if ( result )
      {
        result = *((uint *)v4 + 14);
        if ( result == 2 )
        {
          *((uint *)v4 + 14) = 3;
          result = Function_200d5dc(*((uint ***)v4 + 7), 0, 4);
        }
      }
      break;
    case 17:
      result = *((uint *)v4 + 14);
      if ( result != 3 )
      {
        *((uint *)v4 + 14) = result + 1;
        result = Function_200d5dc(*((uint ***)v4 + 7), 0, 4);
      }
      break;
    case 22:
    case 23:
      v11 = PRNG();
      result = (v11 >> 31) + __ROR4__((v11 << 31) - (v11 >> 31), 31);
      if ( result )
      {
        result = *((uint *)v4 + 14);
        if ( result == 3 )
        {
          *((uint *)v4 + 14) = 4;
          result = Function_200d5dc(*((uint ***)v4 + 7), 0, 8);
        }
      }
      break;
    case 24:
      result = *((uint *)v4 + 14);
      if ( result != 4 )
      {
        *((uint *)v4 + 14) = result + 1;
        result = Function_200d5dc(*((uint ***)v4 + 7), 0, 8);
      }
      break;
    default:
      if ( result > *((uint *)v4 + 15) )
      {
        v12 = *((uint *)v4 + 14);
        v14 = __OFSUB__(v12, 20);
        v13 = v12 - 20 < 0;
        v15 = (uint *)*((uint *)v4 + 7);
        if ( v13 ^ v14 )
        {
          Function_200d5dc((uint **)v15, 0, 4);
          Function_200d550(*((int **)v4 + 7), v17, v16);
          if ( v16[0] > 130 )
            Function_200d3f4(*((uint **)v4 + 7), 0);
          result = *((uint *)v4 + 14) + 1;
          *((uint *)v4 + 14) = result;
        }
        else
        {
          result = Function_200d3f4(v15, 0);
        }
      }
      break;
  }
  return result;
}

//----- (0222A878) --------------------------------------------------------
uint __fastcall Function_222a878(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint result;

  v4 = a2;
  v5 = a1;
  if ( *(uint *)(a2 + 48) )
    Function_222a624((uchar *)a2, a2, a3, a4);
  if ( (int)(uchar)++*(uchar *)v4 < *(uint *)(v4 + 36) )
  {
    Function_200d330(*(int **)(v4 + 28));
    result = Function_200c7ec(*(int **)(v4 + 12));
  }
  else
  {
    REG_DISPCNT &= 0xFFFF1FFF;
    WIN_IN &= 0xFFC0u;
    WIN_OUT &= 0xFFC0u;
    WIN0_X1 = 0;
    WIN0_Y1 = 0;
    Function_200d3f4(*(uint **)(v4 + 28), 0);
    Function_200c7ec(*(int **)(v4 + 12));
    Function_2220220(*(uint *)(v4 + 4), v5);
    result = free(v4);
  }
  return result;
}

//----- (0222A8F4) --------------------------------------------------------
uint *__fastcall Function_222a8f4(int a1)
{
  int v1;
  int v2;
  int v3;
  char v4;
  int v5;
  uint *result;
  int v7;
  int v8;
  uint v9;
  char v10;
  int v11;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2);
  *(uint *)(v2 + 32) = Function_2220280(v1, 0);
  *(uint *)(v2 + 36) = Function_2220280(v1, 1);
  *(uint *)(v2 + 40) = Function_2220280(v1, 2);
  *(uint *)(v2 + 44) = Function_2220280(v1, 3);
  *(uint *)(v2 + 48) = Function_2220280(v1, 5);
  *(uint *)(v2 + 52) = Function_2220280(v1, 6);
  *(uint *)(v2 + 28) = Function_22202c0(*(uint *)(v2 + 4), *(uint *)(v2 + 32));
  *(uint *)(v2 + 56) = 0;
  v3 = *(uint *)(v2 + 40);
  if ( v3 != 255 )
  {
    v4 = Function_2223428(v1, v3);
    Function_200d460(*(int **)(v2 + 28), v4);
  }
  v5 = *(uint *)(v2 + 44);
  if ( v5 != 255 )
    Function_200d474(*(int **)(v2 + 28), v5);
  if ( Function_2223364(v1) == 1 || Function_2220280(v1, 4) != 2 && Function_2220280(v1, 4) != 3 )
  {
    Function_2220280(v1, 4);
    v7 = Function_2220240(v1);
    v11 = Function_2220248(v1);
    v8 = *(uint *)(v2 + 44);
    if ( v8 != 255 )
    {
      v9 = Function_2235254(v1, v7);
      LOBYTE(v8) = Function_2235254(v1, v11);
      switch ( v10 )
      {
        case 0:
          if ( v9 <= 5 )
            JUMPOUT(__CS__, (char *)&off_222AA00 + *((short *)&off_222AA00 + v9) + 2);
          break;
        case 1:
          switch ( (uchar)v8 )
          {
            case 2:
              Function_200d474(*(int **)(v2 + 28), 20);
              break;
            case 3:
              Function_200d474(*(int **)(v2 + 28), 10);
              break;
            case 4:
              Function_200d474(*(int **)(v2 + 28), 10);
              break;
            case 5:
              Function_200d474(*(int **)(v2 + 28), 20);
              break;
            default:
              goto LABEL_33;
          }
          goto LABEL_33;
        case 2:
          switch ( (uchar)v8 )
          {
            case 2:
              Function_200d474(*(int **)(v2 + 28), 10);
              break;
            case 3:
              Function_200d474(*(int **)(v2 + 28), 20);
              break;
            case 4:
              Function_200d474(*(int **)(v2 + 28), 20);
              break;
            case 5:
              Function_200d474(*(int **)(v2 + 28), 10);
              break;
            default:
              goto LABEL_33;
          }
          goto LABEL_33;
        case 3:
          switch ( (uchar)v8 )
          {
            case 2:
              Function_200d474(*(int **)(v2 + 28), 10);
              break;
            case 3:
              Function_200d474(*(int **)(v2 + 28), 20);
              break;
            case 4:
              Function_200d474(*(int **)(v2 + 28), 20);
              break;
            case 5:
              Function_200d474(*(int **)(v2 + 28), 10);
              break;
            default:
              goto LABEL_33;
          }
          goto LABEL_33;
        default:
          break;
      }
    }
    switch ( (uchar)v8 )
    {
      case 2:
        Function_200d474(*(int **)(v2 + 28), 20);
        break;
      case 3:
        Function_200d474(*(int **)(v2 + 28), 10);
        break;
      case 4:
        Function_200d474(*(int **)(v2 + 28), 10);
        break;
      case 5:
        Function_200d474(*(int **)(v2 + 28), 20);
        break;
      default:
        break;
    }
LABEL_33:
    result = Function_22201e8(*(uint *)(v2 + 4), (int)Function_222a878, v2);
  }
  else
  {
    Function_200d3f4(*(uint **)(v2 + 28), 0);
    result = (uint *)free(v2);
  }
  return result;
}

//----- (0222AB10) --------------------------------------------------------
uint __fastcall Function_222ab10(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  uint result;
  int v6;
  int v7;
  int *v8;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 44);
  if ( v4 )
  {
    *(uint *)(a2 + 44) = v4 - 1;
    v6 = 0;
    v7 = a2;
    do
    {
      v8 = *(int **)(v7 + 28);
      if ( v8 )
        Function_200d330(v8);
      ++v6;
      v7 += 4;
    }
    while ( v6 < 4 );
    result = Function_200c7ec(*(int **)(v2 + 12));
  }
  else
  {
    Function_2220220(*(uint *)(a2 + 4), v3);
    result = free(v2);
  }
  return result;
}

//----- (0222AB50) --------------------------------------------------------
uint __fastcall Function_222ab50(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int *v7;
  int *v8;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2);
  if ( Function_2220280(v1, 0) )
    v3 = Function_2220280(v1, 0);
  else
    v3 = 3;
  v4 = &dword_223B120;
  *(uint *)(v2 + 44) = v3;
  v5 = 0;
  v6 = v2;
  do
  {
    v7 = (int *)Function_22202c0(*(uint *)(v2 + 4), v5);
    *(uint *)(v6 + 28) = v7;
    if ( v7 )
      Function_200d474(v7, *v4);
    ++v5;
    v6 += 4;
    ++v4;
  }
  while ( v5 < 4 );
  v8 = Function_22201e8(*(uint *)(v2 + 4), (int)Function_222ab10, v2);
  return Function_222ab10(v8, v2);
}

//----- (0222ABBC) --------------------------------------------------------
int __fastcall Function_222abbc(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;

  v4 = a2;
  v5 = a1;
  if ( !*(uchar *)(a2 + 8) )
  {
    *(uint *)a2 = 0;
    v6 = Function_22233ec(*(uint *)(a2 + 12), 2, a3, a4);
    v7 = Function_22266e8(0, 0);
    v8 = Function_221fde4(*(uint *)(v4 + 12));
    *(uint *)(v4 + 36) = Function_222662c(0, 160, 182, 0x20000, 200, v6, 0, v7, v8);
    result = *(uchar *)(v4 + 8) + 1;
    *(uchar *)(v4 + 8) = result;
    return result;
  }
  if ( *(uchar *)(a2 + 8) == 1 )
  {
    v10 = *(uint *)a2 + 1;
    *(uint *)v4 = v10;
    result = *(uint *)(v4 + 4);
    if ( v10 < result )
      return result;
    Function_222669c(*(uint *)(v4 + 36));
    ++*(uchar *)(v4 + 8);
  }
  Function_2220220(*(uint *)(v4 + 12), v5);
  return free(v4);
}

//----- (0222AC40) --------------------------------------------------------
uint *__fastcall Function_222ac40(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2 + 8);
  *(uint *)(v2 + 4) = Function_2220280(v1, 0);
  return Function_22201e8(*(uint *)(v2 + 12), (int)Function_222abbc, v2);
}

//----- (0222AC70) --------------------------------------------------------
uint __fastcall Function_222ac70(int *a1, uchar *a2)
{
  int v2;
  uint v3;
  int v4;
  char *v5;
  int v6;
  bool v7;
  uint *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  int v15;
  uint result;
  int v17;
  int v18;
  int *v19;
  char v20;
  short v21;
  uint v22;
  uint v23;

  v2 = (int)a2;
  v19 = a1;
  v3 = *a2;
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_222AC8C + v3) + 35826830);
  switch ( (uchar)v3 )
  {
    case 0:
      v4 = 0;
      ++a2[4];
      if ( Function_2220280(*((uint *)a2 + 2), 0) > 0 )
      {
        v5 = &byte_223A09E;
        v6 = v2;
        do
        {
          Function_200d550(*(int **)(v6 + 20), &v21, &v20);
          if ( *(uchar *)(v2 + 4) < (uint)(uchar)*v5 )
          {
            Function_200d3f4(*(uint **)(v6 + 20), 0);
          }
          else if ( (uchar)++*(uchar *)(v2 + v4 + 1) >= (uint)(uchar)v5[1] )
          {
            *(uchar *)(v2 + v4 + 1) = 0;
            v7 = Function_200d408(*(int **)(v6 + 20)) == 1;
            v8 = *(uint **)(v6 + 20);
            if ( v7 )
              Function_200d3f4(v8, 0);
            else
              Function_200d3f4(v8, 1);
          }
          v6 += 4;
          v5 += 2;
          ++v4;
        }
        while ( v4 < Function_2220280(*(uint *)(v2 + 8), 0) );
      }
      if ( *(uchar *)(v2 + 4) >= 0x2Du )
      {
        v9 = 0;
        if ( Function_2220280(*(uint *)(v2 + 8), 0) > 0 )
        {
          v10 = v2;
          do
          {
            Function_200d3f4(*(uint **)(v10 + 20), 1);
            v10 += 4;
            ++v9;
          }
          while ( v9 < Function_2220280(*(uint *)(v2 + 8), 0) );
        }
        *(uchar *)(v2 + 4) = 0;
        ++*(uchar *)v2;
      }
      goto LABEL_38;
    case 1:
      Function_2225ef0((short *)a2 + 16, 100, 60, 100, 100, 100, 10);
      ++*(uchar *)v2;
      goto LABEL_38;
    case 2:
      if ( Function_2225f6c((int)(a2 + 32)) == 1 )
      {
        v11 = 0;
        if ( Function_2220280(*(uint *)(v2 + 8), 0) > 0 )
        {
          v12 = v2;
          do
          {
            Function_2225fa4((short *)(v2 + 32), (int *)&v23, (int *)&v22);
            Function_200d6e8(*(int **)(v12 + 20), v23, v22);
            v12 += 4;
            ++v11;
          }
          while ( v11 < Function_2220280(*(uint *)(v2 + 8), 0) );
        }
      }
      else if ( (uchar)++*(uchar *)(v2 + 4) >= 0x2Du )
      {
        ++*(uchar *)v2;
      }
      goto LABEL_38;
    case 3:
      if ( a2[5] )
        --a2[5];
      v13 = a2[6];
      if ( v13 < 0xF )
        a2[6] = v13 + 1;
      if ( !a2[5] && a2[6] == 15 )
        ++*a2;
      REG_BLDALPHA = a2[5] | (ushort)(a2[6] << 8);
LABEL_38:
      v17 = 0;
      if ( Function_2220280(*(uint *)(v2 + 8), 0) > 0 )
      {
        v18 = v2;
        do
        {
          Function_200d324(**(uint **)(v18 + 20));
          v18 += 4;
          ++v17;
        }
        while ( v17 < Function_2220280(*(uint *)(v2 + 8), 0) );
      }
      result = Function_200c7ec(*(int **)(v2 + 16));
      break;
    default:
      v14 = 0;
      if ( Function_2220280(*((uint *)a2 + 2), 0) > 0 )
      {
        v15 = v2;
        do
        {
          Function_200d0f4(*(uint *)(v15 + 20));
          v15 += 4;
          ++v14;
        }
        while ( v14 < Function_2220280(*(uint *)(v2 + 8), 0) );
      }
      Function_2220220(*(uint *)(v2 + 8), v19);
      result = free(v2);
      break;
  }
  return result;
}

//----- (0222AE68) --------------------------------------------------------
uint *__fastcall Function_222ae68(int a1, int a2, int a3, int a4)
{
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
  int *v14;
  int v15;
  int v16;
  short v17;
  int v19;
  char v20;
  short v21;
  char v22;

  v19 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = Function_221fde4(a1);
  v8 = malloc(v7, 68);
  if ( !v8 )
    ErrorHandler();
  *(uchar *)(v8 + 4) = 0;
  *(uchar *)v8 = 0;
  *(uint *)(v8 + 12) = v4;
  *(uint *)(v8 + 16) = v5;
  *(uint *)(v8 + 8) = v19;
  Function_222329c((int *)&v22, v19);
  Function_2235780(*(uint *)(v8 + 8));
  *(uchar *)(v8 + 5) = 15;
  *(uchar *)(v8 + 6) = 0;
  REG_BLDALPHA = *(uchar *)(v8 + 5) | (ushort)(*(uchar *)(v8 + 6) << 8);
  *(uint *)(v8 + 20) = v6;
  v9 = Function_2220248(v19);
  if ( Function_223525c(v19, v9) == 3 )
  {
    v10 = Function_221fdd4(v19);
    Function_2235350(0, v10, &v20);
  }
  else
  {
    v11 = Function_221fdd4(v19);
    Function_2235350(1, v11, &v20);
  }
  v12 = 1;
  if ( Function_2220280(*(uint *)(v8 + 8), 0) > 1 )
  {
    v13 = v8 + 4;
    do
    {
      v14 = Function_200ce6c(*(uint **)(v8 + 12), *(uint *)(v8 + 16), (short *)&v22);
      *(uint *)(v13 + 20) = v14;
      Function_200d4c4(v14, *(short *)&v20, v21);
      v13 += 4;
      ++v12;
    }
    while ( v12 < Function_2220280(*(uint *)(v8 + 8), 0) );
  }
  Function_200d4c4(*(int **)(v8 + 20), *(short *)&v20, v21);
  v15 = 0;
  if ( Function_2220280(*(uint *)(v8 + 8), 0) > 0 )
  {
    v16 = v8;
    v17 = 0;
    do
    {
      *(uchar *)(v8 + v15 + 1) = 0;
      Function_200d6a4(*(uint **)(v16 + 20), 2);
      Function_200d5dc(*(uint ***)(v16 + 20), 0, (short)(32 - v17));
      Function_200d810(*(int **)(v16 + 20), 1);
      v16 += 4;
      v17 += 4;
      ++v15;
    }
    while ( v15 < Function_2220280(*(uint *)(v8 + 8), 0) );
  }
  return Function_22201cc(v19, (int)Function_222ac70, v8, 0x1000u);
}

//----- (0222AFA0) --------------------------------------------------------
int __fastcall Function_222afa0(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  int result;
  short v8;
  short v9;
  int v10;
  int v11;
  int v12;
  bool v13;
  int v14;
  int v15;
  int v16;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( v4 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_222AFBC + v4) + 35827646);
  switch ( (uchar)v4 )
  {
    case 0:
      if ( Function_2225eb8((int)(a2 + 20)) == 1 )
      {
        Function_2226138((short *)v2 + 28);
        Function_2007dec(*((uint *)v2 + 4), 0xCu, *((short *)v2 + 10));
        Function_2007dec(*((uint *)v2 + 4), 0xDu, *((short *)v2 + 11));
        Function_2008274(*((uint *)v2 + 4), 0, *((short *)v2 + 28));
        v6 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 10), v5);
        result = Function_2007dec(*((uint *)v2 + 4), 1u, *((short *)v2 + 1) + v6);
      }
      else
      {
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 1:
      Function_20086fc(*((uint *)a2 + 4), 0, 10, 0, 31);
      result = *v2 + 1;
      *v2 = result;
      break;
    case 2:
      result = Function_20087b4(*((uint *)a2 + 4));
      if ( !result )
      {
        Function_20086fc(*((uint *)v2 + 4), 10, 0, 0, 31);
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 3:
      result = Function_20087b4(*((uint *)a2 + 4));
      if ( !result )
      {
        if ( ++v2[8] < 3u )
        {
          result = 1;
          *v2 = 1;
        }
        else
        {
          v8 = Function_2220280(*((uint *)v2 + 3), 0);
          v9 = Function_2220280(*((uint *)v2 + 3), 1);
          v10 = Function_2220280(*((uint *)v2 + 3), 3);
          Function_2225e68((short *)v2 + 10, v8, 100, v9, v10);
          result = *v2 + 1;
          *v2 = result;
        }
      }
      break;
    case 4:
      if ( Function_2225eb8((int)(a2 + 20)) == 1 )
      {
        Function_2007dec(*((uint *)v2 + 4), 0xCu, *((short *)v2 + 10));
        Function_2007dec(*((uint *)v2 + 4), 0xDu, *((short *)v2 + 11));
        v12 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 10), v11);
        result = Function_2007dec(*((uint *)v2 + 4), 1u, *((short *)v2 + 1) + v12);
      }
      else
      {
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 5:
      v13 = Function_2225eb8((int)(a2 + 20)) == 1;
      v14 = *((uint *)v2 + 4);
      if ( v13 )
      {
        Function_2007dec(v14, 0xCu, *((short *)v2 + 10));
        Function_2007dec(*((uint *)v2 + 4), 0xDu, *((short *)v2 + 11));
        v16 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 10), v15);
        result = Function_2007dec(*((uint *)v2 + 4), 1u, *((short *)v2 + 1) + v16);
      }
      else
      {
        Function_2007dec(v14, 0xCu, 256);
        Function_2007dec(*((uint *)v2 + 4), 0xDu, 256);
        Function_2007dec(*((uint *)v2 + 4), 1u, *((short *)v2 + 1));
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    default:
      Function_2220220(*((uint *)a2 + 3), v3);
      result = free((int)v2);
      break;
  }
  return result;
}

//----- (0222B194) --------------------------------------------------------
uint *__fastcall Function_222b194(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  int v9;

  v1 = a1;
  v2 = Function_221fde4(a1);
  v3 = malloc(v2, 92);
  v4 = v3;
  *(uchar *)(v3 + 8) = 0;
  *(uchar *)v3 = 0;
  *(uint *)(v3 + 12) = v1;
  v5 = Function_2220240(v1);
  v6 = Function_22232fc(*(uint *)(v4 + 12), v5);
  *(uint *)(v4 + 16) = v6;
  *(ushort *)(v4 + 2) = Function_20080c0(v6, 1u);
  v7 = Function_2220240(*(uint *)(v4 + 12));
  *(uint *)(v4 + 4) = Function_2223354(*(uint *)(v4 + 12), v7);
  v8 = Function_2220280(v1, 0);
  v9 = Function_2220280(v1, 2);
  Function_2225e68((short *)(v4 + 20), 100, 100, v8, v9);
  Function_2226108(v4 + 56, 2, 0, 0, 10);
  return Function_22201e8(*(uint *)(v4 + 12), (int)Function_222afa0, v4);
}

//----- (0222B220) --------------------------------------------------------
int __fastcall Function_222b220(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  bool v14;
  int v15;
  int v16;
  int v17;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( v4 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_222B23C + v4) + 35828286);
  switch ( (uchar)v4 )
  {
    case 0:
      if ( Function_2225f6c((int)(a2 + 16)) == 1 )
      {
        Function_2007dec(*((uint *)v2 + 3), 0xCu, *((short *)v2 + 8));
        Function_2007dec(*((uint *)v2 + 3), 0xDu, *((short *)v2 + 9));
        v6 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 9), v5);
        result = Function_2007dec(*((uint *)v2 + 3), 1u, *((short *)v2 + 1) + v6);
      }
      else
      {
        Function_2225ef0((short *)v2 + 8, 150, 50, 50, 150, 100, 10);
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 1:
      if ( Function_2225f6c((int)(a2 + 16)) == 1 )
      {
        Function_2007dec(*((uint *)v2 + 3), 0xCu, *((short *)v2 + 8));
        Function_2007dec(*((uint *)v2 + 3), 0xDu, *((short *)v2 + 9));
        v9 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 9), v8);
        result = Function_2007dec(*((uint *)v2 + 3), 1u, *((short *)v2 + 1) + v9);
      }
      else
      {
        Function_2225ef0((short *)v2 + 8, 50, 100, 150, 100, 100, 5);
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 2:
      if ( Function_2225f6c((int)(a2 + 16)) == 1 )
      {
        Function_2007dec(*((uint *)v2 + 3), 0xCu, *((short *)v2 + 8));
        Function_2007dec(*((uint *)v2 + 3), 0xDu, *((short *)v2 + 9));
        v11 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 9), v10);
        result = Function_2007dec(*((uint *)v2 + 3), 1u, *((short *)v2 + 1) + v11);
      }
      else
      {
        Function_2225ef0((short *)v2 + 8, 100, 150, 100, 150, 100, 5);
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 3:
      if ( Function_2225f6c((int)(a2 + 16)) == 1 )
      {
        Function_2007dec(*((uint *)v2 + 3), 0xCu, *((short *)v2 + 8));
        Function_2007dec(*((uint *)v2 + 3), 0xDu, *((short *)v2 + 9));
        v13 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 9), v12);
        result = Function_2007dec(*((uint *)v2 + 3), 1u, *((short *)v2 + 1) + v13);
      }
      else
      {
        Function_2225ef0((short *)v2 + 8, 150, 100, 150, 100, 100, 5);
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 4:
      v14 = Function_2225f6c((int)(a2 + 16)) == 1;
      v15 = *((uint *)v2 + 3);
      if ( v14 )
      {
        Function_2007dec(v15, 0xCu, *((short *)v2 + 8));
        Function_2007dec(*((uint *)v2 + 3), 0xDu, *((short *)v2 + 9));
        v17 = Function_2225fd4(*((short *)v2 + 1), *((uint *)v2 + 1), *((uint *)v2 + 9), v16);
        result = Function_2007dec(*((uint *)v2 + 3), 1u, *((short *)v2 + 1) + v17);
      }
      else
      {
        Function_2007dec(v15, 0xCu, 256);
        Function_2007dec(*((uint *)v2 + 3), 0xDu, 256);
        Function_2007dec(*((uint *)v2 + 3), 1u, *((short *)v2 + 1));
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    default:
      Function_2220220(*((uint *)a2 + 2), v3);
      result = free((int)v2);
      break;
  }
  return result;
}

//----- (0222B45C) --------------------------------------------------------
uint *__fastcall Function_222b45c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = Function_221fde4(a1);
  v3 = malloc(v2, 88);
  v4 = v3;
  *(uchar *)v3 = 0;
  *(uint *)(v3 + 8) = v1;
  v5 = Function_2220240(v1);
  v6 = Function_22232fc(*(uint *)(v4 + 8), v5);
  *(uint *)(v4 + 12) = v6;
  *(ushort *)(v4 + 2) = Function_20080c0(v6, 1u);
  v7 = Function_2220240(*(uint *)(v4 + 8));
  *(uint *)(v4 + 4) = Function_2223354(*(uint *)(v4 + 8), v7);
  Function_2225ef0((short *)(v4 + 16), 100, 150, 100, 50, 100, 10);
  return Function_22201e8(*(uint *)(v4 + 8), (int)Function_222b220, v4);
}

//----- (0222B4C8) --------------------------------------------------------
uint __fastcall Function_222b4c8(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  ushort v8;
  short v9;
  short v10;
  ushort v11;
  short v12;
  short v13;
  int v14;
  int v15;
  int v16;
  uint v17;
  int v19;
  int v20;

  v2 = (int)a2;
  v3 = a1;
  v4 = a2[1];
  if ( !a2[1] )
  {
    v5 = *a2;
    v6 = 2 * ((v5 >> 31) + __ROR4__((v5 << 31) - (v5 >> 31), 31));
    v7 = (int)(v5 + 1) / 2;
    v8 = asc_223A100[6 * ((v5 >> 31) + __ROR4__((v5 << 31) - (v5 >> 31), 31)) + 1] - v7;
    v9 = asc_223A100[6 * ((v5 >> 31) + __ROR4__((v5 << 31) - (v5 >> 31), 31))];
    v10 = HIWORD(dword_223A0E0[3 * ((v5 >> 31) + __ROR4__((v5 << 31) - (v5 >> 31), 31)) + 7]);
    Function_2225bc8(
      (int)(a2 + 40),
      (short)(*((ushort *)a2 + 4) + v10),
      (short)(*((ushort *)a2 + 4) + v9),
      *((short *)a2 + 5),
      *((ushort *)a2 + 5),
      v8);
    Function_2225bc8(
      v2 + 76,
      (short)(*(ushort *)(v2 + 8) - v10),
      (short)(*(ushort *)(v2 + 8) - v9),
      *(short *)(v2 + 10),
      *(ushort *)(v2 + 10),
      v8);
    v11 = asc_223A100[3 * (v6 + 1) + 1] - v7;
    v12 = asc_223A100[3 * (v6 + 1)];
    v13 = *((ushort *)&dword_223A0E0[7] + 3 * (v6 + 1) + 1);
    Function_2225bc8(
      v2 + 112,
      (short)(*(ushort *)(v2 + 8) + v13),
      (short)(*(ushort *)(v2 + 8) + v12),
      *(short *)(v2 + 10),
      *(ushort *)(v2 + 10),
      v11);
    Function_2225bc8(
      v2 + 148,
      (short)(*(ushort *)(v2 + 8) - v13),
      (short)(*(ushort *)(v2 + 8) - v12),
      *(short *)(v2 + 10),
      *(ushort *)(v2 + 10),
      v11);
    ++*(uchar *)v2;
    ++*(uchar *)(v2 + 1);
    goto LABEL_6;
  }
  if ( v4 == 1 )
  {
LABEL_6:
    v19 = 0;
    v20 = 0;
    v14 = v2 + 40;
    v15 = v2;
    v16 = v2;
    do
    {
      if ( Function_2225c14(v14) )
        Function_200d4c4(*(int **)(v16 + 24), *(short *)(v15 + 40), *(short *)(v15 + 42));
      else
        v19 = (v19 + 1) & 0xFF;
      Function_200d330(*(int **)(v16 + 24));
      v14 += 36;
      v15 += 36;
      v16 += 4;
      ++v20;
    }
    while ( v20 < 4 );
    if ( v19 == 4 )
    {
      if ( *(uchar *)v2 == 9 )
        ++*(uchar *)(v2 + 1);
      else
        *(uchar *)(v2 + 1) = 0;
    }
    return Function_200c7ec(*(int **)(v2 + 20));
  }
  if ( v4 != 2 )
  {
    Function_2220220(*((uint *)a2 + 3), v3);
    return free(v2);
  }
  if ( a2[4] )
    --a2[4];
  v17 = a2[5];
  if ( v17 < 0xF )
    a2[5] = v17 + 1;
  if ( !a2[4] && a2[5] == 15 )
    ++a2[1];
  REG_BLDALPHA = a2[4] | (ushort)(a2[5] << 8);
  return Function_200c7ec(*(int **)(v2 + 20));
}

//----- (0222B68C) --------------------------------------------------------
uint *__fastcall Function_222b68c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  bool v12;
  int *v13;
  uint *v14;
  short v15;
  int v16;
  int v17;
  uint *v18;
  short v19;
  int v20;
  int v21;
  uint *v22;
  short v23;
  int v24;
  int v25;
  uint *v26;
  short v27;
  int v28;
  int v29;
  int v31;
  int v32;
  int v33;

  v31 = a1;
  v1 = Function_221fde4(a1);
  v2 = malloc(v1, 184);
  *(uchar *)(v2 + 1) = 0;
  *(uchar *)v2 = 0;
  *(uint *)(v2 + 12) = v31;
  v3 = Function_2220240(v31);
  v4 = Function_22232fc(*(uint *)(v2 + 12), v3);
  *(uint *)(v2 + 16) = v4;
  *(ushort *)(v2 + 8) = Function_20080c0(v4, 0);
  *(ushort *)(v2 + 10) = Function_20080c0(*(uint *)(v2 + 16), 1u);
  *(ushort *)(v2 + 10) -= Function_20080c0(*(uint *)(v2 + 16), 0x29u);
  *(uint *)(v2 + 20) = Function_22202ec(*(uint *)(v2 + 12));
  *(uchar *)(v2 + 4) = 8;
  *(uchar *)(v2 + 5) = 6;
  Function_2235780(*(uint *)(v2 + 12));
  REG_BLDALPHA = *(uchar *)(v2 + 4) | (ushort)(*(uchar *)(v2 + 5) << 8);
  v5 = Function_2220240(*(uint *)(v2 + 12));
  v33 = Function_2223334(*(uint *)(v2 + 12), v5);
  v6 = Function_222339c(*(uint *)(v2 + 12));
  v7 = Function_2220240(*(uint *)(v2 + 12));
  v32 = Function_2223344(*(uint *)(v2 + 12), v7);
  v8 = 0;
  v9 = v2;
  do
  {
    v10 = (int *)Function_22202c0(*(uint *)(v2 + 12), v8);
    *(uint *)(v9 + 24) = v10;
    Function_200d810(v10, 1);
    ++v8;
    v9 += 4;
  }
  while ( v8 < 4 );
  v11 = Function_2220240(*(uint *)(v2 + 12));
  v12 = Function_223525c(*(uint *)(v2 + 12), v11) == 3;
  v13 = *(int **)(v2 + 24);
  if ( v12 )
  {
    Function_200d474(v13, 10);
    Function_200d474(*(int **)(v2 + 28), 10);
    Function_200d474(*(int **)(v2 + 32), 20);
    Function_200d474(*(int **)(v2 + 36), 20);
    Function_200d460(*(int **)(v2 + 24), v6);
    Function_200d460(*(int **)(v2 + 28), v6);
    Function_200d460(*(int **)(v2 + 32), v6);
    Function_200d460(*(int **)(v2 + 36), v6);
    v14 = (uint *)Function_2021f9c(**(uint **)(v2 + 24));
    v15 = Function_201fab4(v14, 1);
    v16 = Function_222332c(*(uint *)(v2 + 12));
    v17 = Function_221fde4(v31);
    Function_2003b08(v16, v32, v33, v17, 2, 32, 16 * v15, 128, 128, 128);
    v18 = (uint *)Function_2021f9c(**(uint **)(v2 + 32));
    v19 = Function_201fab4(v18, 1);
    v20 = Function_222332c(*(uint *)(v2 + 12));
    v21 = Function_221fde4(v31);
    Function_2003b08(v20, v32, v33, v21, 2, 32, 16 * v19, 196, 196, 196);
  }
  else
  {
    Function_200d474(v13, 20);
    Function_200d474(*(int **)(v2 + 28), 20);
    Function_200d474(*(int **)(v2 + 32), 10);
    Function_200d474(*(int **)(v2 + 36), 10);
    Function_200d460(*(int **)(v2 + 24), v6 + 1);
    Function_200d460(*(int **)(v2 + 28), v6 + 1);
    Function_200d460(*(int **)(v2 + 32), v6 + 1);
    Function_200d460(*(int **)(v2 + 36), v6 + 1);
    Function_200d460(*(int **)(v2 + 24), v6);
    Function_200d460(*(int **)(v2 + 28), v6);
    Function_200d460(*(int **)(v2 + 32), v6);
    Function_200d460(*(int **)(v2 + 36), v6);
    v22 = (uint *)Function_2021f9c(**(uint **)(v2 + 24));
    v23 = Function_201fab4(v22, 1);
    v24 = Function_222332c(*(uint *)(v2 + 12));
    v25 = Function_221fde4(v31);
    Function_2003b08(v24, v32, v33, v25, 2, 32, 16 * v23, 196, 196, 196);
    v26 = (uint *)Function_2021f9c(**(uint **)(v2 + 32));
    v27 = Function_201fab4(v26, 1);
    v28 = Function_222332c(*(uint *)(v2 + 12));
    v29 = Function_221fde4(v31);
    Function_2003b08(v28, v32, v33, v29, 2, 32, 16 * v27, 128, 128, 128);
  }
  return Function_22201e8(*(uint *)(v2 + 12), (int)Function_222b4c8, v2);
}

//----- (0222B914) --------------------------------------------------------
int __fastcall Function_222b914(int *a1, uchar *a2)
{
  uchar *v2;
  char v3;
  int result;

  v2 = a2;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      if ( !Function_2225eb8((int)(a2 + 12)) && !Function_20087b4(*((uint *)v2 + 2)) )
      {
        v3 = *v2;
        if ( v2[1] >= 4u )
          *v2 = v3 + 1;
        else
          *v2 = v3 - 1;
      }
      Function_2007dec(*((uint *)v2 + 2), 0xCu, *((short *)v2 + 6));
      result = Function_2007dec(*((uint *)v2 + 2), 0xDu, *((short *)v2 + 7));
    }
    else
    {
      Function_2220220(*((uint *)a2 + 1), a1);
      result = free((int)v2);
    }
  }
  else
  {
    Function_2225e68(
      (short *)a2 + 6,
      *((uchar *)&dword_223A098 + 3 * a2[2]),
      100,
      *((uchar *)&dword_223A098 + 3 * a2[2] + 1),
      *((uchar *)&dword_223A098 + 3 * a2[2] + 2));
    if ( v2[2] )
      Function_20086fc(*((uint *)v2 + 2), 6, 0, 0, 0x7FFF);
    else
      Function_20086fc(*((uint *)v2 + 2), 0, 6, 0, 0x7FFF);
    v2[2] ^= 1u;
    ++v2[1];
    result = *v2 + 1;
    *v2 = result;
  }
  return result;
}

//----- (0222B9E0) --------------------------------------------------------
uint *__fastcall Function_222b9e0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = Function_2235e50();
  v3 = v2;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 2) = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uint *)(v2 + 4) = v1;
  v4 = Function_2220240(v1);
  *(uint *)(v3 + 8) = Function_22232fc(*(uint *)(v3 + 4), v4);
  return Function_22201e8(*(uint *)(v3 + 4), (int)Function_222b914, v3);
}

//----- (0222BA18) --------------------------------------------------------
int __fastcall Function_222ba18(int *a1, uchar *a2)
{
  uchar *v2;
  char v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      if ( !Function_2225f6c((int)(a2 + 16)) )
      {
        v3 = *v2;
        if ( v2[1] >= 3u )
          *v2 = v3 + 1;
        else
          *v2 = v3 - 1;
      }
      Function_2007dec(*((uint *)v2 + 3), 0xCu, *((short *)v2 + 8));
      Function_2007dec(*((uint *)v2 + 3), 0xDu, *((short *)v2 + 9));
      v5 = Function_2225fd4(*((short *)v2 + 1), *((short *)v2 + 2), *((uint *)v2 + 9), v4);
      result = Function_2007dec(*((uint *)v2 + 3), 1u, *((short *)v2 + 1) + v5);
    }
    else
    {
      Function_2220220(*((uint *)a2 + 2), a1);
      result = free((int)v2);
    }
  }
  else
  {
    Function_2225ef0(
      (short *)a2 + 8,
      *((uchar *)&dword_223A0D4[2] + 5 * a2[1] + 3),
      *((uchar *)dword_223A0E0 + 5 * a2[1]),
      *((uchar *)dword_223A0E0 + 5 * a2[1] + 1),
      *((uchar *)dword_223A0E0 + 5 * a2[1] + 2),
      100,
      *((uchar *)dword_223A0E0 + 5 * a2[1] + 3));
    ++v2[1];
    result = *v2 + 1;
    *v2 = result;
  }
  return result;
}

//----- (0222BAE4) --------------------------------------------------------
uint *__fastcall Function_222bae4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = Function_2235e50();
  v3 = v2;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uint *)(v2 + 8) = v1;
  v4 = Function_2220240(v1);
  v5 = Function_22232fc(*(uint *)(v3 + 8), v4);
  *(uint *)(v3 + 12) = v5;
  *(ushort *)(v3 + 2) = Function_20080c0(v5, 1u);
  v6 = Function_2220240(*(uint *)(v3 + 8));
  *(ushort *)(v3 + 4) = Function_2223354(*(uint *)(v3 + 8), v6);
  return Function_22201e8(*(uint *)(v3 + 8), (int)Function_222ba18, v3);
}

//----- (0222BB30) --------------------------------------------------------
int __fastcall Function_222bb30(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint v4;
  int result;
  short v6;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( v4 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_222BB4C + v4) + 35830606);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_2225ef0(
        (short *)a2 + 8,
        *((uchar *)&dword_223A0B0[1] + 5 * a2[1] + 3),
        *((uchar *)dword_223A0B8 + 5 * a2[1]),
        *((uchar *)dword_223A0B8 + 5 * a2[1] + 1),
        *((uchar *)dword_223A0B8 + 5 * a2[1] + 2),
        100,
        *((uchar *)dword_223A0B8 + 5 * a2[1] + 3));
      ++v2[1];
      result = *v2 + 1;
      *v2 = result;
      break;
    case 1:
      if ( !Function_2225f6c((int)(a2 + 16)) )
        ++*v2;
      Function_2007dec(*((uint *)v2 + 3), 0xCu, *((short *)v2 + 8));
      Function_2007dec(*((uint *)v2 + 3), 0xDu, *((short *)v2 + 9));
      result = Function_2226024(
                 *((uint *)v2 + 3),
                 *((short *)v2 + 1),
                 *((short *)v2 + 3),
                 *((uint *)v2 + 9),
                 0);
      break;
    case 2:
      v6 = Function_20080c0(*((uint *)a2 + 3), 1u);
      Function_2225bc8((int)(v2 + 16), 0, 0, v6, 0, 5u);
      result = *v2 + 1;
      *v2 = result;
      break;
    case 3:
      if ( !Function_2225c14((int)(a2 + 16)) )
        ++*v2;
      result = Function_2007dec(*((uint *)v2 + 3), 1u, *((short *)v2 + 9));
      break;
    case 4:
      Function_2225ef0(
        (short *)a2 + 8,
        *((uchar *)&dword_223A0B0[1] + 5 * a2[1] + 3),
        *((uchar *)dword_223A0B8 + 5 * a2[1]),
        *((uchar *)dword_223A0B8 + 5 * a2[1] + 1),
        *((uchar *)dword_223A0B8 + 5 * a2[1] + 2),
        100,
        *((uchar *)dword_223A0B8 + 5 * a2[1] + 3));
      *((ushort *)v2 + 1) = Function_20080c0(*((uint *)v2 + 3), 1u);
      result = *v2 + 1;
      *v2 = result;
      break;
    case 5:
      if ( !Function_2225f6c((int)(a2 + 16)) )
        ++*v2;
      Function_2007dec(*((uint *)v2 + 3), 0xCu, *((short *)v2 + 8));
      Function_2007dec(*((uint *)v2 + 3), 0xDu, *((short *)v2 + 9));
      result = Function_2226024(
                 *((uint *)v2 + 3),
                 *((short *)v2 + 1),
                 *((short *)v2 + 3),
                 *((uint *)v2 + 9),
                 1);
      break;
    default:
      Function_2007dec(*((uint *)a2 + 3), 1u, *((short *)a2 + 2));
      Function_2007dec(*((uint *)v2 + 3), 6u, 1);
      Function_2007dec(*((uint *)v2 + 3), 0xCu, 256);
      Function_2007dec(*((uint *)v2 + 3), 0xDu, 256);
      Function_2220220(*((uint *)v2 + 2), v3);
      result = free((int)v2);
      break;
  }
  return result;
}

//----- (0222BCF4) --------------------------------------------------------
uint *__fastcall Function_222bcf4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = Function_2235e50();
  v3 = v2;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uint *)(v2 + 8) = v1;
  v4 = Function_2220240(v1);
  v5 = Function_22232fc(*(uint *)(v3 + 8), v4);
  *(uint *)(v3 + 12) = v5;
  *(ushort *)(v3 + 2) = Function_20080c0(v5, 1u);
  *(ushort *)(v3 + 4) = *(ushort *)(v3 + 2);
  v6 = Function_2220240(*(uint *)(v3 + 8));
  *(ushort *)(v3 + 6) = Function_2223354(*(uint *)(v3 + 8), v6);
  return Function_22201e8(*(uint *)(v3 + 8), (int)Function_222bb30, v3);
}

//----- (0222BD48) --------------------------------------------------------
uint __fastcall Function_222bd48(int *a1, uchar *a2)
{
  uchar *v2;
  ushort v3;
  uint result;
  ushort v5;

  v2 = a2;
  switch ( *a2 )
  {
    case 0u:
      v3 = Function_2222354(*((uint *)a2 + 2));
      Function_2003178(*((uint *)v2 + 1), 1, v3, -2, 0, 16, 0x7FFF);
      Function_20086fc(*((uint *)v2 + 4), 0, 16, 0, 0);
      result = *v2 + 1;
      *v2 = result;
      break;
    case 1u:
      result = Function_200384c(*((uint *)a2 + 1));
      if ( !result )
      {
        result = Function_20087b4(*((uint *)v2 + 4));
        if ( !result )
        {
          result = *v2 + 1;
          *v2 = result;
        }
      }
      break;
    case 2u:
      result = ++a2[1];
      if ( result > 5 )
      {
        result = *a2 + 1;
        *a2 = result;
      }
      break;
    case 3u:
      v5 = Function_2222354(*((uint *)a2 + 2));
      Function_2003178(*((uint *)v2 + 1), 1, v5, -2, 16, 0, 0x7FFF);
      Function_20086fc(*((uint *)v2 + 4), 16, 0, 0, 0);
      result = *v2 + 1;
      *v2 = result;
      break;
    case 4u:
      result = Function_200384c(*((uint *)a2 + 1));
      if ( !result )
      {
        result = Function_20087b4(*((uint *)v2 + 4));
        if ( !result )
        {
          result = *v2 + 1;
          *v2 = result;
        }
      }
      break;
    default:
      Function_2220220(*((uint *)a2 + 2), a1);
      result = free((int)v2);
      break;
  }
  return result;
}

//----- (0222BE48) --------------------------------------------------------
uint *__fastcall Function_222be48(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = Function_2235e50();
  v3 = v2;
  *(uint *)(v2 + 8) = v1;
  *(uint *)(v2 + 4) = Function_222332c(v1);
  v4 = Function_2220240(*(uint *)(v3 + 8));
  *(uint *)(v3 + 16) = Function_22232fc(*(uint *)(v3 + 8), v4);
  return Function_22201e8(*(uint *)(v3 + 8), (int)Function_222bd48, v3);
}

//----- (0222BE80) --------------------------------------------------------
int __fastcall Function_222be80(int *a1, uchar *a2)
{
  uchar *v2;
  int v3;
  int result;

  v2 = a2;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      v3 = 0;
      if ( !Function_2225f6c((int)(a2 + 16)) )
        v3 = 1;
      if ( !Function_2225c14((int)(v2 + 52)) )
        ++v3;
      if ( v3 >= 2 )
      {
        if ( v2[1] < 3u )
        {
          *v2 = 0;
        }
        else
        {
          ++v2[2];
          v2[1] = 0;
          if ( v2[2] >= 3u )
            ++*v2;
        }
      }
      Function_2007dec(*((uint *)v2 + 3), 0xCu, *((short *)v2 + 8));
      Function_2007dec(*((uint *)v2 + 3), 0xDu, *((short *)v2 + 9));
      result = Function_2226024(
                 *((uint *)v2 + 3),
                 *((short *)v2 + 27),
                 *((short *)v2 + 3),
                 *((uint *)v2 + 9),
                 0);
    }
    else
    {
      Function_2220220(*((uint *)a2 + 2), a1);
      result = free((int)v2);
    }
  }
  else
  {
    Function_2225ef0(
      (short *)a2 + 8,
      *((uchar *)&dword_223A0B8[2] + 5 * a2[1] + 1),
      *((uchar *)&dword_223A0B8[2] + 5 * a2[1] + 2),
      *((uchar *)&dword_223A0B8[2] + 5 * a2[1] + 3),
      *((uchar *)dword_223A0C4 + 5 * a2[1]),
      100,
      *((uchar *)dword_223A0C4 + 5 * a2[1] + 1));
    Function_2225bc8(
      (int)(v2 + 52),
      0,
      0,
      (short)(*((ushort *)v2 + 2) + *((uchar *)dword_223A0A4 + 3 * v2[1])),
      *((ushort *)v2 + 2) + *((uchar *)dword_223A0A4 + 3 * v2[1] + 1),
      *((uchar *)dword_223A0A4 + 3 * v2[1] + 2));
    ++v2[1];
    result = *v2 + 1;
    *v2 = result;
  }
  return result;
}

//----- (0222BFA8) --------------------------------------------------------
uint *__fastcall Function_222bfa8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = Function_2235e50();
  v3 = v2;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uint *)(v2 + 8) = v1;
  v4 = Function_2220240(v1);
  v5 = Function_22232fc(*(uint *)(v3 + 8), v4);
  *(uint *)(v3 + 12) = v5;
  *(ushort *)(v3 + 4) = Function_20080c0(v5, 1u);
  v6 = Function_2220240(*(uint *)(v3 + 8));
  *(ushort *)(v3 + 6) = Function_2223354(*(uint *)(v3 + 8), v6);
  return Function_22201e8(*(uint *)(v3 + 8), (int)Function_222be80, v3);
}

//----- (0222BFF4) --------------------------------------------------------
int __fastcall Function_222bff4(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = (int)a2;
  v3 = a1;
  v4 = *a2;
  if ( *a2 )
  {
    if ( v4 == 1 )
    {
      Function_200d3f4(*((uint **)a2 + 3), 1);
      Function_200d3f4(*(uint **)(v2 + 16), 1);
      Function_200d810(*(int **)(v2 + 16), 2);
      ++*(uchar *)v2;
    }
    else
    {
      if ( v4 != 2 )
      {
        REG_DISPCNT &= 0xFFFF1FFF;
        Function_2220220(*((uint *)a2 + 1), v3);
        return free(v2);
      }
      if ( ++a2[1] >= 0xAu )
      {
        WIN_OUT = WIN_OUT & 0xFFC0 | 0x1F;
        WIN_OUT = WIN_OUT & 0xC0FF | 0x1F00;
        Function_200d3f4(*((uint **)a2 + 3), 0);
        Function_200d3f4(*(uint **)(v2 + 16), 0);
        *(uchar *)(v2 + 1) = 0;
        ++*(uchar *)v2;
      }
    }
  }
  else if ( ++a2[1] >= 0xAu )
  {
    a2[1] = 0;
    ++*a2;
  }
  Function_200d330(*(int **)(v2 + 12));
  Function_200d330(*(int **)(v2 + 16));
  return Function_200c7ec(*(int **)(v2 + 8));
}

//----- (0222C0C0) --------------------------------------------------------
uint *__fastcall Function_222c0c0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  short v9;
  int v10;
  int v11;

  v1 = a1;
  v2 = Function_2235e50();
  v3 = v2;
  *(uint *)(v2 + 4) = v1;
  *(uint *)(v2 + 8) = Function_22202ec(v1);
  *(uint *)(v3 + 12) = Function_22202c0(*(uint *)(v3 + 4), 0);
  *(uint *)(v3 + 16) = Function_22202c0(*(uint *)(v3 + 4), 1);
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x8000;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x1F;
  WIN_OUT = WIN_OUT & 0xC0FF | 0x1200;
  v4 = Function_2220240(*(uint *)(v3 + 4));
  v5 = Function_2223334(*(uint *)(v3 + 4), v4);
  v6 = Function_2220240(*(uint *)(v3 + 4));
  v7 = Function_2223344(*(uint *)(v3 + 4), v6);
  v8 = (uint *)Function_2021f9c(**(uint **)(v3 + 12));
  v9 = Function_201fab4(v8, 1);
  v10 = Function_222332c(*(uint *)(v3 + 4));
  v11 = Function_221fde4(v1);
  Function_2003b08(v10, v7, v5, v11, 2, 32, 16 * v9, 256, 256, 256);
  Function_200d3f4(*(uint **)(v3 + 12), 0);
  Function_200d3f4(*(uint **)(v3 + 16), 0);
  return Function_22201e8(*(uint *)(v3 + 4), (int)Function_222bff4, v3);
}

//----- (0222C1A4) --------------------------------------------------------
uint __fastcall Function_222c1a4(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  uint v4;
  char *v5;
  uchar *v6;
  short *v7;
  int v8;
  uint v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int **v14;
  short *v15;
  int v16;
  short *v17;
  uchar *v18;
  int v19;
  uint v20;
  uint result;
  int v22;
  int v23;
  int v24;
  char v25;
  int v26;
  uint v27;
  uint v28;
  uint v29;
  uint v30;

  v2 = (int)a2;
  v3 = a1;
  v4 = *a2;
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_222C1C0 + v4) + 35832258);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_2007dec(*((uint *)a2 + 3), 0xEu, 1);
      ++*(uchar *)v2;
      goto LABEL_32;
    case 1:
      v5 = &byte_223A094;
      v23 = 0;
      v24 = 0;
      v6 = a2;
      v7 = (short *)(a2 + 32);
      do
      {
        if ( v6[24] )
        {
          if ( v6[24] == 1 )
          {
            if ( Function_2225f6c((int)v7) )
            {
              Function_2225fa4(v7, (int *)&v30, (int *)&v29);
              v8 = fflt(*(char *)(v2 + 8));
              v9 = fmul(v30, v8);
              Function_200d6e8(*((int **)v6 + 7), v9, v29);
              Function_222605c(
                *((int **)v6 + 7),
                *(short *)(v2 + 2),
                (short)*(uint *)(v2 + 4),
                *((uint *)v6 + 13),
                0);
            }
            else
            {
              ++v6[24];
            }
          }
          else
          {
            ++v23;
          }
        }
        else if ( ++v6[25] >= (uint)(uchar)*v5 )
        {
          Function_2225ef0(v7, 100, 5, 100, 5, 100, 5);
          ++v6[24];
        }
        Function_200d330(*((int **)v6 + 7));
        v6 += 44;
        ++v5;
        v7 += 22;
        ++v24;
      }
      while ( v24 < 3 );
      if ( v23 >= 3 )
      {
        if ( (uchar)++*(uchar *)(v2 + 1) >= 3u )
        {
          ++*(uchar *)v2;
        }
        else
        {
          v10 = 0;
          v11 = v2;
          do
          {
            Function_200d550(*(int **)(v11 + 28), &v26, &v25);
            Function_200d4c4(*(int **)(v11 + 28), (short)v26, *(short *)(v2 + 2));
            v12 = fflt(*(char *)(v2 + 8));
            Function_200d6e8(*(int **)(v11 + 28), v12, 0x3F800000u);
            *(uchar *)(v11 + 24) = 0;
            *(uchar *)(v11 + 25) = 0;
            ++v10;
            v11 += 44;
          }
          while ( v10 < 3 );
          --*(uchar *)v2;
        }
      }
      goto LABEL_32;
    case 2:
      v13 = 0;
      v14 = (int **)a2;
      v15 = (short *)(a2 + 32);
      do
      {
        Function_200d810(v14[7], 0);
        Function_2225ef0(v15, 5, 100, 5, 100, 100, 5);
        ++v13;
        v14 += 11;
        v15 += 22;
      }
      while ( v13 < 3 );
      ++*(uchar *)v2;
      goto LABEL_32;
    case 3:
      v16 = 0;
      v22 = 0;
      v17 = (short *)(a2 + 32);
      v18 = a2;
      do
      {
        if ( Function_2225f6c((int)v17) )
        {
          Function_2225fa4(v17, (int *)&v28, (int *)&v27);
          v19 = fflt(*(char *)(v2 + 8));
          v20 = fmul(v28, v19);
          Function_200d6e8(*((int **)v18 + 7), v20, v27);
          Function_222605c(
            *((int **)v18 + 7),
            *(short *)(v2 + 2),
            (short)*(uint *)(v2 + 4),
            *((uint *)v18 + 13),
            0);
        }
        else
        {
          ++v16;
        }
        v17 += 22;
        v18 += 44;
        ++v22;
      }
      while ( v22 < 3 );
      if ( v16 >= 3 )
        ++*(uchar *)v2;
LABEL_32:
      result = Function_200c7ec(*(int **)(v2 + 20));
      break;
    default:
      Function_2007dec(*((uint *)a2 + 3), 0xEu, 0);
      Function_2220220(*(uint *)(v2 + 16), v3);
      result = free(v2);
      break;
  }
  return result;
}

//----- (0222C3C0) --------------------------------------------------------
uint *__fastcall Function_222c3c0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v13;

  v13 = a1;
  v1 = Function_2235e50();
  *(uchar *)v1 = 0;
  *(uchar *)(v1 + 1) = 0;
  *(uint *)(v1 + 16) = v13;
  *(uint *)(v1 + 20) = Function_22202ec(v13);
  v2 = Function_2220240(*(uint *)(v1 + 16));
  v3 = Function_22232fc(*(uint *)(v1 + 16), v2);
  *(uint *)(v1 + 12) = v3;
  *(ushort *)(v1 + 2) = Function_20080c0(v3, 1u);
  *(ushort *)(v1 + 2) -= Function_20080c0(*(uint *)(v1 + 12), 0x29u);
  v4 = Function_2220240(*(uint *)(v1 + 16));
  *(uint *)(v1 + 4) = Function_2223354(*(uint *)(v1 + 16), v4);
  Function_2235780(*(uint *)(v1 + 16));
  v5 = 0;
  v6 = v1;
  REG_BLDALPHA = 1548;
  do
  {
    *(uchar *)(v6 + 24) = 0;
    *(uchar *)(v6 + 25) = 0;
    v7 = (uint *)Function_22202c0(*(uint *)(v1 + 16), v5);
    *(uint *)(v6 + 28) = v7;
    Function_200d6a4(v7, 2);
    Function_200d810(*(int **)(v6 + 28), 1);
    Function_200d474(*(int **)(v6 + 28), v5++ + 1);
    v6 += 44;
  }
  while ( v5 < 3 );
  if ( Function_22234a8(v13, 0) == 1 )
    v8 = -1;
  else
    v8 = 1;
  *(uchar *)(v1 + 8) = v8;
  v9 = 0;
  v10 = v1;
  do
  {
    v11 = fflt(*(char *)(v1 + 8));
    Function_200d6e8(*(int **)(v10 + 28), v11, 0x3F800000u);
    ++v9;
    v10 += 44;
  }
  while ( v9 < 3 );
  return Function_22201e8(*(uint *)(v1 + 16), (int)Function_222c1a4, v1);
}

//----- (0222C4A8) --------------------------------------------------------
void __fastcall Function_222c4a8(int *a1, uchar *a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  ushort v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v2 = (int)a2;
  v3 = a1;
  v4 = *a2;
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_222C4C4 + v4) + 35833030);
  switch ( (uchar)v4 )
  {
    case 0:
      v5 = Function_222332c(*((uint *)a2 + 3));
      v6 = Function_2222354(*(uint *)(v2 + 12));
      Function_2003178(v5, 1, v6, 1, 0, 10, 0);
      ++*(uchar *)v2;
      break;
    case 1:
      v7 = Function_222332c(*((uint *)a2 + 3));
      if ( !Function_200384c(v7) )
      {
        ++*(uchar *)v2;
        goto LABEL_7;
      }
      break;
    case 2:
LABEL_7:
      Function_2226108(v2 + 180, *((short *)&dword_223A0E0[3] + *(uchar *)(v2 + 1) + 1), 0, 0, 5);
      v8 = *(uint *)(v2 + 12);
      if ( *(uchar *)(v2 + 2) )
      {
        v10 = Function_222332c(v8);
        Function_2003a2c(v10, 0, 0xFFu, 0xAu, 0x7FFFu);
      }
      else
      {
        v9 = Function_222332c(v8);
        Function_2003a2c(v9, 0, 0xFFu, 0xAu, 0);
      }
      *(uchar *)(v2 + 3) = 3;
      *(uchar *)(v2 + 2) ^= 1u;
      ++*(uchar *)(v2 + 1);
      ++*(uchar *)v2;
      goto LABEL_11;
    case 3:
LABEL_11:
      if ( !Function_2226138((short *)(v2 + 180)) )
      {
        v11 = *(uchar *)v2;
        if ( *(uchar *)(v2 + 1) >= 8u )
          *(uchar *)v2 = v11 + 1;
        else
          *(uchar *)v2 = v11 - 1;
      }
      if ( *(uchar *)(v2 + 3) )
      {
        if ( !--*(uchar *)(v2 + 3) )
        {
          v12 = Function_222332c(*(uint *)(v2 + 12));
          Function_2003a2c(v12, 0, 0xFFu, 0, 0);
        }
      }
      v13 = 0;
      v14 = v2;
      do
      {
        v15 = *(uint *)(v14 + 28);
        if ( v15 )
          Function_2007dec(v15, 0, *(short *)(v2 + 180) + *(short *)(v14 + 20));
        ++v13;
        v14 += 20;
      }
      while ( v13 < 4 );
      Function_2019184(*(uint *)(v2 + 8), 3u, 0, *(short *)(v2 + 180));
      break;
    default:
      Function_2220220(*((uint *)a2 + 3), v3);
      free(v2);
      break;
  }
}

//----- (0222C5FC) --------------------------------------------------------
uint *__fastcall Function_222c5fc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_2235e50();
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uint *)(v2 + 12) = v1;
  *(uint *)(v2 + 16) = Function_22202ec(v1);
  *(uint *)(v2 + 8) = Function_2220278(*(uint *)(v2 + 12));
  if ( Function_2223364(*(uint *)(v2 + 12)) == 1 )
    v3 = 64;
  else
    v3 = 10;
  Function_2235998(v1, v3, v2 + 20, v2 + 4);
  v4 = 0;
  if ( *(uint *)(v2 + 4) > 0 )
  {
    v5 = v2;
    do
    {
      *(ushort *)(v5 + 20) = Function_20080c0(*(uint *)(v5 + 28), 0);
      *(ushort *)(v5 + 22) = Function_20080c0(*(uint *)(v5 + 28), 1u);
      ++v4;
      v5 += 20;
    }
    while ( v4 < *(uint *)(v2 + 4) );
  }
  return Function_22201e8(*(uint *)(v2 + 12), (int)Function_222c4a8, v2);
}

//----- (0222C678) --------------------------------------------------------
uint __fastcall Function_222c678(int *a1, int a2)
{
  int v2;
  uint result;

  v2 = a2;
  if ( *(uchar *)a2 )
  {
    Function_2220220(*(uint *)(a2 + 12), a1);
    result = free(v2);
  }
  else
  {
    if ( !Function_2225c14(a2 + 64) )
      ++*(uchar *)v2;
    Function_2226138((short *)(v2 + 28));
    Function_2226454(v2 + 100);
    Function_200d4c4(*(int **)(v2 + 24), *(short *)(v2 + 64), *(short *)(v2 + 66));
    Function_200d330(*(int **)(v2 + 24));
    result = Function_200c7ec(*(int **)(v2 + 16));
  }
  return result;
}

//----- (0222C6D4) --------------------------------------------------------
uint *__fastcall Function_222c6d4(int a1)
{
  int v1;
  int v2;
  int v3;
  bool v4;
  int v5;
  int v6;
  int v7;
  short v8;
  short v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v14;

  v1 = a1;
  v2 = Function_2235e50();
  v3 = v2;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uint *)(v2 + 12) = v1;
  *(uint *)(v2 + 16) = Function_22202ec(v1);
  *(uint *)(v3 + 8) = Function_2220278(*(uint *)(v3 + 12));
  *(uint *)(v3 + 24) = Function_22202c0(*(uint *)(v3 + 12), 0);
  v4 = Function_2220280(v1, 0) == 0;
  v5 = *(uint *)(v3 + 12);
  if ( v4 )
    v6 = Function_2220248(v5);
  else
    v6 = Function_2220240(v5);
  v7 = v6;
  *(uint *)(v3 + 20) = Function_22232fc(*(uint *)(v3 + 12), v6);
  Function_2235918();
  *(ushort *)(v3 + 6) -= Function_20080c0(*(uint *)(v3 + 20), 0x29u);
  v8 = Function_2225964(*(uint *)(v3 + 12), v7);
  v9 = Function_222598c(*(uint *)(v3 + 12), v7);
  Function_2225bc8(
    v3 + 64,
    *(short *)(v3 + 4),
    (short)(*(ushort *)(v3 + 4) - 20 * v8),
    *(short *)(v3 + 6),
    *(ushort *)(v3 + 6) + 20 * v9,
    0x14u);
  LOBYTE(v7) = Function_22233ec(v1, 2, v10, v11);
  v14 = Function_22233ec(v1, 1, v12, v13);
  Function_22357bc(*(uint *)(v3 + 12), (1 << v7) | 0x20 | (1 << v14) | 1);
  Function_2226424(v3 + 100, 31, 0, 0, 31, 0xFu);
  Function_200d810(*(int **)(v3 + 24), 1);
  return Function_22201e8(*(uint *)(v3 + 12), (int)Function_222c678, v3);
}

//----- (0222C7E0) --------------------------------------------------------
int __fastcall Function_222c7e0(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
  {
    if ( *a2 != 1 )
    {
      Function_2007dec(*((uint *)a2 + 10), 9u, 0);
      Function_2220220(*((uint *)v2 + 1), v3);
      return free((int)v2);
    }
  }
  else
  {
    v4 = a2[2];
    if ( a2[1] )
    {
      v5 = 2 * v4;
      v6 = dword_223A118[2 * v4];
      v7 = -v6;
    }
    else
    {
      v5 = 2 * v4;
      v7 = dword_223A118[2 * v4];
      v6 = -v7;
    }
    Function_2225d50((uint *)v2 + 23, v6, v7, dword_223A11C[v5]);
    if ( v2[1] == 1 )
      ++v2[2];
    v2[1] ^= 1u;
    ++*v2;
  }
  if ( Function_2225da0((uint *)v2 + 23) == 1 )
    return Function_2007dec(*((uint *)v2 + 10), 9u, *((uint *)v2 + 23) & 0xFFFF);
  v8 = *v2;
  if ( v2[2] >= 5u )
    result = v8 + 1;
  else
    result = v8 - 1;
  *v2 = result;
  return result;
}

//----- (0222C884) --------------------------------------------------------
int __fastcall Function_222c884(int *a1, uchar *a2)
{
  uchar *v2;
  int result;
  char v4;
  short v5;

  v2 = a2;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      Function_2235918(*((uint *)a2 + 11), &v4, a1);
      result = Function_222619c((short *)v2 + 28, *(short *)&v4, v5, *((uint *)v2 + 11));
      if ( !result )
      {
        result = *v2 + 1;
        *v2 = result;
      }
    }
    else
    {
      Function_2220220(*((uint *)a2 + 1), a1);
      result = free((int)v2);
    }
  }
  else
  {
    Function_2226108(
      (int)(a2 + 56),
      *((short *)a2 + 14),
      *((short *)a2 + 15),
      *((short *)a2 + 16),
      *((short *)a2 + 17));
    result = *v2 + 1;
    *v2 = result;
  }
  return result;
}

//----- (0222C8F8) --------------------------------------------------------
uint *__fastcall Function_222c8f8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint *result;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2);
  v3 = Function_2220240(*(uint *)(v2 + 4));
  *(uint *)(v2 + 40) = Function_22232fc(*(uint *)(v2 + 4), v3);
  v4 = Function_2220248(*(uint *)(v2 + 4));
  *(uint *)(v2 + 44) = Function_22232fc(*(uint *)(v2 + 4), v4);
  Function_2007dec(*(uint *)(v2 + 40), 0xBu, 100);
  v5 = Function_2220280(v1, 0);
  *(ushort *)(v2 + 28) = Function_2220280(v1, 1);
  *(ushort *)(v2 + 30) = Function_2220280(v1, 2);
  *(ushort *)(v2 + 32) = Function_2220280(v1, 3);
  *(ushort *)(v2 + 34) = Function_2220280(v1, 4);
  *(uint *)(v2 + 36) = Function_2220280(v1, 5);
  v6 = *(uint *)(v2 + 4);
  if ( v5 )
    result = Function_22201e8(v6, (int)Function_222c884, v2);
  else
    result = Function_22201e8(v6, (int)Function_222c7e0, v2);
  return result;
}

//----- (0222C994) --------------------------------------------------------
void __fastcall Function_222c994(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  if ( *(uchar *)a2 )
  {
    if ( *(uchar *)a2 == 1 )
    {
      if ( Function_2226138((short *)(a2 + 76)) )
      {
        v3 = 0;
        v4 = v2;
        do
        {
          v5 = *(uint *)(v4 + 56);
          if ( v5 )
            Function_2007dec(v5, 0, *(short *)(v2 + 76) + *(short *)(v4 + 40));
          ++v3;
          v4 += 4;
        }
        while ( v3 < 4 );
        Function_2019184(*(uint *)(v2 + 20), 3u, 0, *(short *)(v2 + 76));
        Function_2019184(*(uint *)(v2 + 20), 3u, 3u, *(short *)(v2 + 78));
      }
      else
      {
        ++*(uchar *)v2;
      }
    }
    else
    {
      Function_2220220(*(uint *)(a2 + 4), a1);
      free(v2);
    }
  }
  else
  {
    Function_2226108(
      a2 + 76,
      (short)(*(uint *)(a2 + 72) + 2),
      (short)*(uint *)(a2 + 72),
      0,
      10);
    ++*(uchar *)v2;
  }
}

//----- (0222CA2C) --------------------------------------------------------
uint *__fastcall Function_222ca2c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2);
  v3 = Function_2220540(*(uint *)(v2 + 4), 1);
  if ( v3 > 70 )
  {
    if ( v3 > 110 )
    {
      if ( v3 == 150 )
      {
        *(uint *)(v2 + 72) = 6;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v3 >= 110 )
      {
        *(uint *)(v2 + 72) = 5;
        goto LABEL_20;
      }
      if ( v3 == 90 )
      {
        *(uint *)(v2 + 72) = 4;
        goto LABEL_20;
      }
    }
LABEL_19:
    *(uint *)(v2 + 72) = 0;
    goto LABEL_20;
  }
  if ( v3 < 70 )
  {
    if ( v3 > 30 )
    {
      if ( v3 == 50 )
      {
        *(uint *)(v2 + 72) = 2;
        goto LABEL_20;
      }
    }
    else if ( v3 == 30 )
    {
      *(uint *)(v2 + 72) = 1;
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  *(uint *)(v2 + 72) = 3;
LABEL_20:
  v4 = 0;
  v5 = v2;
  v6 = v2 + 40;
  do
  {
    v7 = Function_22232fc(*(uint *)(v2 + 4), v4);
    *(uint *)(v5 + 56) = v7;
    if ( v7 )
      Function_2235918(v7, v6, v8);
    ++v4;
    v5 += 4;
    v6 += 4;
  }
  while ( v4 < 4 );
  return Function_22201e8(*(uint *)(v2 + 4), (int)Function_222c994, v2);
}

//----- (0222CACC) --------------------------------------------------------
int __fastcall Function_222cacc(int *a1, uchar *a2)
{
  int **v2;
  int result;

  v2 = (int **)a2;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      if ( Function_2226138((short *)a2 + 32) )
      {
        Function_200d4c4(
          v2[14],
          (short)(*((ushort *)v2 + 22) + *((ushort *)v2 + 32)),
          (short)(*((ushort *)v2 + 23) + *((ushort *)v2 + 33)));
        Function_200d4c4(
          v2[15],
          (short)(*((ushort *)v2 + 32) - *((ushort *)v2 + 22)),
          (short)(*((ushort *)v2 + 23) + *((ushort *)v2 + 33)));
        Function_200d330(v2[14]);
        Function_200d330(v2[15]);
      }
      else
      {
        ++*(uchar *)v2;
      }
      result = Function_200c7ec(v2[3]);
    }
    else
    {
      Function_2220220(*((uint *)a2 + 1), a1);
      result = free((int)v2);
    }
  }
  else
  {
    Function_2226108((int)(a2 + 64), 20, 0, 0, 10);
    Function_2226108((int)(v2 + 25), 2, 0, 0, 10);
    result = *(uchar *)v2 + 1;
    *(uchar *)v2 = result;
  }
  return result;
}

//----- (0222CB90) --------------------------------------------------------
uint *__fastcall Function_222cb90(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = (int *)Function_2235e50();
  Function_223595c(v1, v2);
  v2[14] = Function_22202c0(v2[1], 0);
  v2[15] = Function_22202c0(v2[1], 1);
  v3 = Function_2220240(v2[1]);
  v2[12] = Function_22232fc(v2[1], v3);
  v4 = Function_2220248(v2[1]);
  v2[13] = Function_22232fc(v2[1], v4);
  Function_2235918(v2[12], v2 + 10, v5);
  Function_2235918(v2[13], v2 + 11, v6);
  return Function_22201e8(v2[1], (int)Function_222cacc, (int)v2);
}

//----- (0222CBFC) --------------------------------------------------------
int __fastcall Function_222cbfc(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( Function_2225d2c((ushort *)(a2 + 140), (ushort *)(a2 + 176), *(int **)(a2 + 56)) )
  {
    if ( Function_2225da0((uint *)(v2 + 212)) == 1 )
      Function_200d79c(*(int **)(v2 + 56), *(uint *)(v2 + 212));
    Function_200d330(*(int **)(v2 + 56));
    result = Function_200c7ec(*(int **)(v2 + 32));
  }
  else
  {
    Function_200d0f4(*(uint *)(v2 + 56));
    Function_2220220(*(uint *)(v2 + 20), v3);
    result = Function_2235e80(v2);
  }
  return result;
}

//----- (0222CC54) --------------------------------------------------------
uint *__fastcall Function_222cc54(int a1, int a2, int a3, uint *a4)
{
  int v4;
  uint *v5;
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

  v4 = a1;
  v5 = a4;
  v6 = Function_2235e50();
  Function_223595c(v4, v6 + 16);
  *(ushort *)(v6 + 12) = Function_2220280(v4, 0);
  *(ushort *)(v6 + 14) = Function_2220280(v4, 1);
  *(uint *)(v6 + 4) = Function_2220280(v4, 2);
  *(uint *)(v6 + 8) = Function_2220280(v4, 3);
  v7 = Function_2220240(v4);
  v8 = Function_2225964(v4, v7);
  *(uint *)(v6 + 56) = v5;
  Function_200d6a4(v5, 2);
  v9 = Function_2220240(v4);
  *(uint *)(v6 + 68) = Function_22232fc(v4, v9);
  v10 = Function_2220248(v4);
  *(uint *)(v6 + 88) = Function_22232fc(v4, v10);
  Function_2235918(*(uint *)(v6 + 68), v6 + 64, v11);
  Function_2235918(*(uint *)(v6 + 88), v6 + 84, v12);
  Function_2225c98(
    v6 + 140,
    v6 + 176,
    *(short *)(v6 + 64),
    (short)(*(ushort *)(v6 + 84) + *(ushort *)(v6 + 12) * v8),
    *(ushort *)(v6 + 66),
    *(ushort *)(v6 + 86) + *(ushort *)(v6 + 14) * v8,
    *(uint *)(v6 + 4),
    *(uint *)(v6 + 8) << 12);
  v13 = Function_2220240(v4);
  if ( Function_22232b8(v4, v13) == 4 )
  {
    v14 = Function_2220248(v4);
    if ( Function_22232b8(v4, v14) == 2 )
      v8 = -v8;
  }
  v15 = Function_2220240(v4);
  if ( Function_22232b8(v4, v15) == 5 )
  {
    v16 = Function_2220248(v4);
    if ( Function_22232b8(v4, v16) == 3 )
      v8 = -v8;
  }
  if ( v8 <= 0 )
    Function_2225d50((uint *)(v6 + 212), 0x3FFF * v8, 23665 * v8, 10);
  else
    Function_2225d50((uint *)(v6 + 212), 3640 * v8, 23665 * v8, 10);
  Function_200d79c(*(int **)(v6 + 56), *(uint *)(v6 + 212));
  Function_2225d2c((ushort *)(v6 + 140), (ushort *)(v6 + 176), *(int **)(v6 + 56));
  Function_200d330(*(int **)(v6 + 56));
  return Function_22201e8(*(uint *)(v6 + 20), (int)Function_222cbfc, v6);
}

//----- (0222CDF0) --------------------------------------------------------
int __fastcall Function_222cdf0(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  short v6;
  uint v7;
  uint v8;
  int v9;
  int v10;
  short v11;
  uint v12;
  uint v13;
  int result;
  uint v15;
  uint v16;
  uint v17;
  uint v18;

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 24);
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_222CE0C + v4) + 35835406);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_2225ef0(
        (short *)(a2 + 156),
        (short)(100 * *(ushort *)(a2 + 18)),
        (short)(60 * *(ushort *)(a2 + 18)),
        5,
        150,
        100,
        12);
      ++*(uchar *)(v2 + 24);
      goto LABEL_22;
    case 1:
      if ( Function_2225f6c(a2 + 156) )
      {
        Function_2225fa4((short *)(v2 + 156), (int *)&v18, (int *)&v17);
        Function_200d6e8(*(int **)(v2 + 64), v18, v17);
        v6 = Function_2225fd4(*(short *)(v2 + 22), 16, *(uint *)(v2 + 176), v5);
        Function_200d4c4(*(int **)(v2 + 64), *(short *)(v2 + 20), (short)(*(ushort *)(v2 + 22) + v6));
        v7 = *(uchar *)(v2 + 12);
        if ( v7 < *(uchar *)(v2 + 16) )
          *(uchar *)(v2 + 12) = v7 + 1;
        v8 = *(uchar *)(v2 + 13);
        if ( v8 > *(uchar *)(v2 + 17) )
          *(uchar *)(v2 + 13) = v8 - 1;
        REG_BLDALPHA = *(uchar *)(v2 + 12) | (ushort)(*(uchar *)(v2 + 13) << 8);
      }
      else
      {
        Function_2225ef0(
          (short *)(v2 + 156),
          (short)(60 * *(ushort *)(v2 + 18)),
          (short)(150 * *(ushort *)(v2 + 18)),
          150,
          10,
          100,
          12);
        ++*(uchar *)(v2 + 24);
      }
      goto LABEL_22;
    case 2:
      v9 = *(uint *)(a2 + 4) + 1;
      *(uint *)(a2 + 4) = v9;
      if ( v9 >= 4 )
        ++*(uchar *)(a2 + 24);
      goto LABEL_22;
    case 3:
      if ( Function_2225f6c(a2 + 156) )
      {
        Function_2225fa4((short *)(v2 + 156), (int *)&v16, (int *)&v15);
        Function_200d6e8(*(int **)(v2 + 64), v16, v15);
        v11 = Function_2225fd4(*(short *)(v2 + 22), 16, *(uint *)(v2 + 176), v10);
        Function_200d4c4(*(int **)(v2 + 64), *(short *)(v2 + 20), (short)(*(ushort *)(v2 + 22) + v11));
        v12 = *(uchar *)(v2 + 12);
        if ( v12 > *(uchar *)(v2 + 14) )
          *(uchar *)(v2 + 12) = v12 - 1;
        v13 = *(uchar *)(v2 + 13);
        if ( v13 < *(uchar *)(v2 + 15) )
          *(uchar *)(v2 + 13) = v13 + 1;
        REG_BLDALPHA = *(uchar *)(v2 + 12) | (ushort)(*(uchar *)(v2 + 13) << 8);
      }
      else
      {
        ++*(uchar *)(v2 + 24);
      }
LABEL_22:
      Function_200d330(*(int **)(v2 + 64));
      result = Function_200c7ec(*(int **)(v2 + 40));
      break;
    default:
      Function_200d0f4(*(uint *)(a2 + 68));
      Function_200d0f4(*(uint *)(v2 + 72));
      Function_2220220(*(uint *)(v2 + 28), v3);
      result = Function_2235e80(v2);
      break;
  }
  return result;
}

//----- (0222CFA0) --------------------------------------------------------
uint *__fastcall Function_222cfa0(int a1)
{
  int v1;
  int v2;
  char v3;
  int v4;
  char v5;
  int v6;
  short v7;
  uint v9;
  uint v10;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2 + 24);
  *(uint *)(v2 + 68) = Function_2220298(v1, 0);
  *(uint *)(v2 + 72) = Function_2220298(v1, 1);
  Function_2235780(*(uint *)(v2 + 28));
  Function_2220280(v1, 0);
  *(uchar *)(v2 + 12) = 0;
  *(uchar *)(v2 + 13) = 31;
  *(uchar *)(v2 + 14) = 0;
  *(uchar *)(v2 + 15) = 31;
  *(uchar *)(v2 + 16) = 31;
  *(uchar *)(v2 + 17) = 4;
  if ( Function_221fdd4(v1) == 1 )
  {
    *(uint *)(v2 + 64) = *(uint *)(v2 + 68);
    Function_200d3f4(*(uint **)(v2 + 72), 0);
    Function_200d364(*(int **)(v2 + 64), 0);
    *(ushort *)(v2 + 20) = 179;
    *(ushort *)(v2 + 22) = 120;
    v3 = Function_222339c(v1);
    Function_200d460(*(int **)(v2 + 64), v3 + 1);
    *(ushort *)(v2 + 18) = -1;
  }
  else
  {
    v4 = Function_2220240(v1);
    if ( Function_223525c(v1, v4) == 4 )
    {
      *(uint *)(v2 + 64) = *(uint *)(v2 + 72);
      Function_200d3f4(*(uint **)(v2 + 68), 0);
      Function_200d364(*(int **)(v2 + 64), 1u);
      *(ushort *)(v2 + 20) = 144;
      *(ushort *)(v2 + 22) = 64;
    }
    else
    {
      *(uint *)(v2 + 64) = *(uint *)(v2 + 68);
      Function_200d3f4(*(uint **)(v2 + 72), 0);
      Function_200d364(*(int **)(v2 + 64), 0);
      *(ushort *)(v2 + 20) = 76;
      *(ushort *)(v2 + 22) = 120;
      v5 = Function_222339c(v1);
      Function_200d460(*(int **)(v2 + 64), v5 + 1);
    }
    *(ushort *)(v2 + 18) = 1;
  }
  Function_200d4c4(*(int **)(v2 + 64), *(short *)(v2 + 20), *(short *)(v2 + 22));
  Function_200d6a4(*(uint **)(v2 + 64), 2);
  Function_200d810(*(int **)(v2 + 64), 1);
  Function_2225ef0(
    (short *)(v2 + 156),
    (short)(100 * *(ushort *)(v2 + 18)),
    (short)(100 * *(ushort *)(v2 + 18)),
    100,
    5,
    100,
    1);
  Function_2225f6c(v2 + 156);
  Function_2225fa4((short *)(v2 + 156), (int *)&v10, (int *)&v9);
  Function_200d6e8(*(int **)(v2 + 64), v10, v9);
  v7 = Function_2225fd4(*(short *)(v2 + 22), 16, *(uint *)(v2 + 176), v6);
  Function_200d4c4(*(int **)(v2 + 64), *(short *)(v2 + 20), (short)(*(ushort *)(v2 + 22) + v7));
  return Function_22201e8(*(uint *)(v2 + 28), (int)Function_222cdf0, v2);
}

//----- (0222D128) --------------------------------------------------------
uint __fastcall Function_222d128(int *a1, uchar *a2)
{
  uchar *v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  char v7;
  char *v8;
  char *v9;
  int v10;
  char v11;
  int v12;
  char v13;
  int v14;
  int v15;
  uchar *v16;
  uint result;
  int v18;
  int **v19;
  char v20;
  int v21;
  char v22;
  char v23;
  int v24;
  int **v25;
  int *v26;
  short v27[2];
  int v28;
  short v29[2];
  int v30;
  short v31[2];
  int v32;
  short v33[2];
  int v34;
  short v35[2];
  short v36;
  short v37[2];
  short v38[2];
  short v39[2];
  short v40[2];
  char var20[52];
  char _31[52];

  v2 = a2;
  v26 = a1;
  v3 = *a2;
  if ( v3 <= 8 )
    JUMPOUT(__CS__, *((short *)&off_222D144 + v3) + 35836230);
  switch ( (uchar)v3 )
  {
    case 0:
      v4 = 5 * a2[12];
      Function_2225ef0(
        (short *)a2 + 102,
        *((uchar *)&dword_223A0D0 + v4),
        *((uchar *)&dword_223A0D0 + v4 + 1),
        *(uchar *)(v4 + 35889362),
        *((uchar *)&dword_223A0D0 + 5 * a2[12] + 3),
        100,
        *((uchar *)dword_223A0D4 + v4));
      ++v2[12];
      ++*v2;
      goto LABEL_46;
    case 1:
      if ( Function_2225f6c((int)(a2 + 204)) == 1 )
      {
        Function_2007dec(*((uint *)v2 + 7), 0xCu, *((short *)v2 + 102));
        Function_2007dec(*((uint *)v2 + 7), 0xDu, *((short *)v2 + 103));
        v6 = Function_2225fd4(*((short *)v2 + 16), *((uint *)v2 + 9), *((uint *)v2 + 56), v5);
        Function_2007dec(*((uint *)v2 + 7), 1u, *((short *)v2 + 16) + v6);
      }
      else
      {
        v7 = *v2;
        if ( v2[12] >= 3u )
          *v2 = v7 + 1;
        else
          *v2 = v7 - 1;
      }
      goto LABEL_46;
    case 2:
      if ( ++a2[1] >= 1u )
      {
        a2[1] = 0;
        a2[12] = 0;
        ++*a2;
      }
      goto LABEL_46;
    case 3:
      Function_200d550(*((int **)a2 + 12), v40, v39);
      if ( v39[0] > 104 )
      {
        ++*v2;
      }
      else
      {
        Function_200d5dc(*((uint ***)v2 + 12), 0, 2);
        Function_200d5dc(*((uint ***)v2 + 31), 0, 2);
      }
      goto LABEL_46;
    case 4:
      Function_200d550(*((int **)a2 + 12), v38, v37);
      if ( v37[0] > 104 )
      {
        REG_BLDALPHA = 16;
        ++*v2;
      }
      else
      {
        Function_200d5dc(*((uint ***)v2 + 12), 0, 2);
        Function_200d5dc(*((uint ***)v2 + 31), 0, 2);
      }
      ++v2[1];
      Function_22267a8((int *)v2 + 1, 16, 16);
      Function_22267a8((int *)v2 + 2, 0, -16);
      REG_BLDALPHA = *((ushort *)v2 + 2) | (*((ushort *)v2 + 4) << 8);
      if ( v2[1] == 10 )
        Function_200d5dc(*((uint ***)v2 + 12), 0, 16);
      if ( v2[1] == 12 )
        Function_200d5dc(*((uint ***)v2 + 31), 0, 16);
      goto LABEL_46;
    case 5:
      if ( ++a2[1] >= 1u )
      {
        a2[1] = 0;
        Function_200d550(*((int **)a2 + 12), &v36, v35);
        Function_200d550(*((int **)v2 + 31), &v34, v33);
        Function_2226728(v36, v35[0], (short)v34, v33[0], (ushort *)v2 + 100, (ushort *)v2 + 101);
        Function_2226744(v36, v35[0], *((ushort *)v2 + 100), *((ushort *)v2 + 101), (uint *)v2 + 11);
        Function_222676c(v36, v35[0], *((short *)v2 + 100), *((ushort *)v2 + 101), (ushort *)v2 + 20);
        *((uint *)v2 + 11) = 163840;
        ++*v2;
      }
      goto LABEL_46;
    case 6:
      v8 = &byte_223A0AD;
      v9 = var20;
      v10 = 10;
      do
      {
        v11 = *v8++;
        *v9++ = v11;
        --v10;
      }
      while ( v10 );
      Function_200d550(*((int **)v2 + 12), &v32, v31);
      Function_200d550(*((int **)v2 + 31), &v30, v29);
      Function_2225c98(
        (int)(v2 + 52),
        (int)(v2 + 88),
        (short)v32,
        (short)v30,
        v31[0],
        v29[0],
        0xAu,
        var20[2 * v2[12]] * *((uint *)v2 + 11));
      Function_2225c98(
        (int)(v2 + 128),
        (int)(v2 + 164),
        (short)v30,
        (short)v32,
        v29[0],
        v31[0],
        0xAu,
        _31[2 * v2[12]] * *((uint *)v2 + 11));
      ++v2[12];
      ++*v2;
      goto LABEL_46;
    case 7:
      v12 = 0;
      if ( !Function_2225d2c((ushort *)a2 + 26, (ushort *)a2 + 44, *((int **)a2 + 12)) )
        v12 = 1;
      if ( !Function_2225d2c((ushort *)v2 + 64, (ushort *)v2 + 82, *((int **)v2 + 31)) )
        v12 = (v12 + 1) & 0xFF;
      if ( v12 == 2 )
      {
        v13 = *v2;
        if ( v2[12] == 5 )
          *v2 = v13 + 1;
        else
          *v2 = v13 - 1;
      }
      goto LABEL_46;
    case 8:
      v14 = 0;
      if ( Function_22267a8((int *)a2 + 1, 0, -2) == 1 )
        v14 = 1;
      if ( Function_22267a8((int *)v2 + 2, 16, 2) == 1 )
        ++v14;
      REG_BLDALPHA = *((ushort *)v2 + 2) | (*((ushort *)v2 + 4) << 8);
      if ( v14 == 2 )
        ++*v2;
LABEL_46:
      v18 = 0;
      if ( Function_2220280(*((uint *)v2 + 4), 0) > 0 )
      {
        v19 = (int **)v2;
        do
        {
          Function_200d550(v19[12], &v28, v27);
          if ( v27[0] >= 80 )
          {
            v21 = *((uint *)v2 + 4);
            if ( (short)v28 <= 128 )
            {
              v23 = Function_222339c(v21);
              Function_200d460(v19[12], v23 + 1);
            }
            else
            {
              v22 = Function_222339c(v21);
              Function_200d460(v19[12], v22);
            }
          }
          else
          {
            v20 = Function_222339c(*((uint *)v2 + 4));
            Function_200d460(v19[12], v20);
          }
          v19 += 19;
          ++v18;
        }
        while ( v18 < Function_2220280(*((uint *)v2 + 4), 0) );
      }
      result = *v2;
      if ( result >= 4 )
      {
        v24 = 0;
        if ( Function_2220280(*((uint *)v2 + 4), 0) > 0 )
        {
          v25 = (int **)v2;
          do
          {
            Function_200d330(v25[12]);
            v25 += 19;
            ++v24;
          }
          while ( v24 < Function_2220280(*((uint *)v2 + 4), 0) );
        }
        result = Function_200c7ec(*((int **)v2 + 6));
      }
      break;
    default:
      v15 = 0;
      if ( Function_2220280(*((uint *)a2 + 4), 0) > 0 )
      {
        v16 = v2;
        do
        {
          Function_200d0f4(*((uint *)v16 + 12));
          v16 += 76;
          ++v15;
        }
        while ( v15 < Function_2220280(*((uint *)v2 + 4), 0) );
      }
      Function_2220220(*((uint *)v2 + 4), v26);
      result = free((int)v2);
      break;
  }
  return result;
}

//----- (0222D56C) --------------------------------------------------------
uint *__fastcall Function_222d56c(int a1, int a2, int a3, int a4)
{
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
  char v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char v20;
  bool v21;
  int *v22;
  int v24;
  int v25[13];
  int v26;

  v26 = a4;
  v4 = a2;
  v24 = a1;
  v5 = a3;
  v6 = a4;
  v7 = Function_2235e50();
  *(uchar *)v7 = 0;
  *(uchar *)(v7 + 1) = 0;
  *(uint *)(v7 + 16) = v24;
  *(uint *)(v7 + 24) = v5;
  *(uint *)(v7 + 20) = v4;
  *(uint *)(v7 + 4) = 0;
  *(uint *)(v7 + 8) = 16;
  v8 = Function_2220240(*(uint *)(v7 + 16));
  v9 = Function_22232fc(*(uint *)(v7 + 16), v8);
  *(uint *)(v7 + 28) = v9;
  *(ushort *)(v7 + 32) = Function_20080c0(v9, 1u);
  v10 = Function_2220240(*(uint *)(v7 + 16));
  *(uint *)(v7 + 36) = Function_2223354(*(uint *)(v7 + 16), v10);
  LOBYTE(v4) = Function_22233ec(v24, 2, v11, v12);
  v15 = Function_22233ec(v24, 1, v13, v14);
  Function_22357bc(*(uint *)(v7 + 16), (1 << v4) | (1 << v15) | 1);
  REG_BLDALPHA = *(ushort *)(v7 + 4) | ((ushort)*(uint *)(v7 + 8) << 8);
  Function_222329c(v25, v24);
  *(uint *)(v7 + 48) = v6;
  v16 = 1;
  if ( Function_2220280(*(uint *)(v7 + 16), 0) > 1 )
  {
    v17 = v7 + 76;
    do
    {
      *(uint *)(v17 + 48) = Function_200ce6c(*(uint **)(v7 + 20), *(uint *)(v7 + 24), (short *)v25);
      v17 += 76;
      ++v16;
    }
    while ( v16 < Function_2220280(*(uint *)(v7 + 16), 0) );
  }
  v18 = 0;
  if ( Function_2220280(*(uint *)(v7 + 16), 0) > 0 )
  {
    v19 = v7;
    do
    {
      Function_200d810(*(int **)(v19 + 48), 1);
      v20 = Function_222339c(*(uint *)(v7 + 16));
      Function_200d460(*(int **)(v19 + 48), v20 + 1);
      v19 += 76;
      ++v18;
    }
    while ( v18 < Function_2220280(*(uint *)(v7 + 16), 0) );
  }
  v21 = Function_221fdd4(v24) == 1;
  v22 = *(int **)(v7 + 48);
  if ( v21 )
  {
    Function_200d4c4(v22, 160, 54);
    Function_200d4c4(*(int **)(v7 + 124), 80, 39);
  }
  else
  {
    Function_200d4c4(v22, 100, 54);
    Function_200d4c4(*(int **)(v7 + 124), 180, 39);
  }
  return Function_22201e8(*(uint *)(v7 + 16), (int)Function_222d128, v7);
}

//----- (0222D6B0) --------------------------------------------------------
int __fastcall Function_222d6b0(int *a1, uchar *a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v6;
  int v7;
  char *v8;
  int **v9;
  uint v10;
  int v11;
  uchar *v12;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = (int)a2;
  v5 = a1;
  if ( *a2 )
  {
    if ( *a2 != 1 )
    {
      v11 = 0;
      if ( (int)(uchar)a2[5] > 0 )
      {
        v12 = a2;
        do
        {
          Function_200d0f4(*((uint *)v12 + 5));
          ++v11;
          v12 += 4;
        }
        while ( v11 < *(uchar *)(v4 + 5) );
      }
      Function_2220220(*(uint *)(v4 + 8), v5);
      return free(v4);
    }
    if ( a2[6] )
      --a2[6];
    v10 = (uchar)a2[7];
    if ( v10 < 0xF )
      a2[7] = v10 + 1;
    if ( !a2[6] && a2[7] == 15 )
      ++*a2;
    REG_BLDALPHA = (uchar)a2[6] | (ushort)((uchar)a2[7] << 8);
  }
  else
  {
    v6 = (uchar)a2[6];
    if ( v6 < 0xF )
      a2[6] = v6 + 1;
    if ( a2[7] )
      --a2[7];
    v7 = 0;
    REG_BLDALPHA = (uchar)a2[6] | (ushort)((uchar)a2[7] << 8);
    ++a2[4];
    if ( (int)(uchar)a2[5] > 0 )
    {
      v8 = &byte_223A144;
      v9 = (int **)a2;
      do
      {
        Function_200d550(v9[5], (ushort *)&v16 + 1, &v16);
        if ( *(uchar *)(v4 + 4) >= (uint)(uchar)*v8
          && (uchar)++*(uchar *)(v4 + v7 + 1) >= (uint)(uchar)v8[1] )
        {
          *(uchar *)(v4 + v7 + 1) = 0;
        }
        ++v7;
        ++v9;
        v8 += 2;
      }
      while ( v7 < *(uchar *)(v4 + 5) );
    }
    if ( *(uchar *)(v4 + 4) >= 0x2Du )
      ++*(uchar *)v4;
  }
  v14 = 0;
  if ( (int)*(uchar *)(v4 + 5) > 0 )
  {
    v15 = v4;
    do
    {
      Function_200d324(**(uint **)(v15 + 20));
      ++v14;
      v15 += 4;
    }
    while ( v14 < *(uchar *)(v4 + 5) );
  }
  return Function_200c7ec(*(int **)(v4 + 16));
}

//----- (0222D7C0) --------------------------------------------------------
uint *__fastcall Function_222d7c0(int a1, int a2, int a3, int a4)
{
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
  int v19;
  int v20[13];
  int v21;

  v21 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v19 = a4;
  v7 = Function_221fde4(a1);
  v8 = malloc(v7, 68);
  if ( !v8 )
    ErrorHandler();
  *(uchar *)(v8 + 4) = 0;
  *(uchar *)v8 = 0;
  *(uint *)(v8 + 12) = v5;
  *(uint *)(v8 + 16) = v6;
  *(uint *)(v8 + 8) = v4;
  Function_222329c(v20, v4);
  Function_2235780(*(uint *)(v8 + 8));
  *(uchar *)(v8 + 5) = Function_2220280(*(uint *)(v8 + 8), 0);
  *(uchar *)(v8 + 6) = 0;
  *(uchar *)(v8 + 7) = 15;
  v9 = 1;
  REG_BLDALPHA = *(uchar *)(v8 + 6) | (ushort)(*(uchar *)(v8 + 7) << 8);
  *(uint *)(v8 + 20) = v19;
  if ( (int)*(uchar *)(v8 + 5) > 1 )
  {
    v10 = v8 + 4;
    do
    {
      *(uint *)(v10 + 20) = Function_200ce6c(*(uint **)(v8 + 12), *(uint *)(v8 + 16), (short *)v20);
      ++v9;
      v10 += 4;
    }
    while ( v9 < *(uchar *)(v8 + 5) );
  }
  v11 = Function_2220248(v4);
  if ( Function_223525c(v4, v11) == 3 )
  {
    v12 = Function_2220248(v4);
    if ( Function_223525c(v4, v12) != 3 || (v13 = Function_2220240(v4), Function_223525c(v4, v13) != 3) )
      Function_200d364(*(int **)(v8 + 20), 1u);
    else
      Function_200d364(*(int **)(v8 + 20), 0);
    Function_200d4c4(*(int **)(v8 + 20), 128, 80);
  }
  else
  {
    v14 = Function_2220248(v4);
    if ( Function_223525c(v4, v14) != 4 || (v15 = Function_2220240(v4), Function_223525c(v4, v15) != 4) )
      Function_200d364(*(int **)(v8 + 20), 0);
    else
      Function_200d364(*(int **)(v8 + 20), 1u);
    Function_200d4c4(*(int **)(v8 + 20), 128, 80);
  }
  v16 = 0;
  if ( (int)*(uchar *)(v8 + 5) > 0 )
  {
    v17 = v8;
    do
    {
      *(uchar *)(v8 + v16 + 1) = 0;
      Function_200d6a4(*(uint **)(v17 + 20), 2);
      Function_200d810(*(int **)(v17 + 20), 1);
      if ( Function_221fdd4(*(uint *)(v8 + 8)) == 1 )
        Function_200d6e8(*(int **)(v17 + 20), 0xBF800000, 0x3F800000u);
      ++v16;
      v17 += 4;
    }
    while ( v16 < *(uchar *)(v8 + 5) );
  }
  return Function_22201cc(v4, (int)Function_222d6b0, v8, 0x44Cu);
}

//----- (0222D934) --------------------------------------------------------
uint __fastcall Function_222d934(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint v4;
  int v5;
  uint v6;
  int v7;
  uint v8;
  uint v9;
  int v10;
  uchar *v11;
  uint result;
  int v13;
  uchar *v14;
  char v15;
  int v16;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = 0;
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_222D952 + v4) + 35838292);
  switch ( (uchar)v4 )
  {
    case 0:
      v6 = a2[9];
      if ( v6 < 0xF )
        a2[9] = v6 + 1;
      if ( a2[10] )
        --a2[10];
      if ( a2[9] == 15 && !a2[10] )
        ++*a2;
      REG_BLDALPHA = a2[9] | (ushort)(a2[10] << 8);
      goto LABEL_39;
    case 1:
      switch ( (uchar)*((uint *)a2 + 12) )
      {
        case 0u:
          *((uint *)a2 + 13) = *((uint *)a2 + 6);
          *((uint *)a2 + 14) = *((uint *)a2 + 9);
          Function_200d3f4(*((uint **)a2 + 13), 1);
          Function_200d3f4(*((uint **)v2 + 14), 1);
          break;
        case 1u:
          *((uint *)a2 + 13) = *((uint *)a2 + 7);
          *((uint *)a2 + 14) = *((uint *)a2 + 8);
          Function_200d3f4(*((uint **)a2 + 13), 1);
          Function_200d3f4(*((uint **)v2 + 14), 1);
          break;
        case 2u:
        case 3u:
          *((uint *)a2 + 13) = *((uint *)a2 + 10);
          *((uint *)a2 + 14) = *((uint *)a2 + 11);
          Function_200d3f4(*((uint **)a2 + 13), 1);
          Function_200d3f4(*((uint **)v2 + 14), 1);
          break;
        default:
          break;
      }
      Function_200d550(*((int **)v2 + 13), &v16, &v15);
      Function_2225bc8(
        (int)(v2 + 60),
        (short)v16,
        aKxp[4 * *((uint *)v2 + 12) + 1],
        *(short *)&v15,
        aKxp[4 * *((uint *)v2 + 12) + 2],
        *((uchar *)&dword_223A140 + *((uint *)v2 + 12)));
      Function_200d550(*((int **)v2 + 14), &v16, &v15);
      Function_2225bc8(
        (int)(v2 + 96),
        (short)v16,
        word_223A17E[4 * *((uint *)v2 + 12)],
        *(short *)&v15,
        aPxp[4 * *((uint *)v2 + 12)],
        *((uchar *)&dword_223A140 + *((uint *)v2 + 12)));
      ++*((uint *)v2 + 12);
      ++*v2;
      goto LABEL_39;
    case 2:
      v7 = 0;
      if ( !Function_2225c50((int)(a2 + 60), *((int **)a2 + 13)) )
        v7 = 1;
      if ( !Function_2225c50((int)(v2 + 96), *((int **)v2 + 14)) )
        ++v7;
      if ( v7 >= 2 )
      {
        if ( *((uint *)v2 + 12) > 3 )
        {
          ++*v2;
        }
        else
        {
          Function_200d3f4(*((uint **)v2 + 13), 0);
          Function_200d3f4(*((uint **)v2 + 14), 0);
          --*v2;
        }
      }
      goto LABEL_39;
    case 3:
      if ( a2[9] )
        --a2[9];
      v8 = a2[10];
      if ( v8 < 0xF )
        a2[10] = v8 + 1;
      v9 = a2[10];
      if ( v9 >= 7 )
        v5 = 1;
      if ( !v2[9] && v9 == 15 )
        ++*v2;
      REG_BLDALPHA = v2[9] | (ushort)(v2[10] << 8);
LABEL_39:
      if ( *v2 < 3u && !v5 )
      {
        v13 = 0;
        if ( (int)v2[8] > 0 )
        {
          v14 = v2;
          do
          {
            Function_200d324(**((uint **)v14 + 6));
            ++v13;
            v14 += 4;
          }
          while ( v13 < v2[8] );
        }
      }
      result = Function_200c7ec(*((int **)v2 + 5));
      break;
    default:
      v10 = 0;
      if ( (int)a2[8] > 0 )
      {
        v11 = a2;
        do
        {
          Function_200d0f4(*((uint *)v11 + 6));
          ++v10;
          v11 += 4;
        }
        while ( v10 < v2[8] );
      }
      Function_2220220(*((uint *)v2 + 3), v3);
      result = free((int)v2);
      break;
  }
  return result;
}

//----- (0222DB60) --------------------------------------------------------
uint *__fastcall Function_222db60(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  short *v12;
  int v13;
  int v15;
  int v16[13];
  int v17;

  v17 = a4;
  v15 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = Function_221fde4(a1);
  v8 = malloc(v7, 132);
  if ( !v8 )
    ErrorHandler();
  *(uchar *)(v8 + 7) = 0;
  *(uchar *)v8 = 0;
  *(uint *)(v8 + 16) = v4;
  *(uint *)(v8 + 20) = v5;
  *(uint *)(v8 + 48) = 0;
  *(uint *)(v8 + 12) = v15;
  Function_222329c(v16, v15);
  Function_2235780(*(uint *)(v8 + 12));
  *(uchar *)(v8 + 9) = 0;
  *(uchar *)(v8 + 10) = 15;
  REG_BLDALPHA = *(uchar *)(v8 + 9) | (ushort)(*(uchar *)(v8 + 10) << 8);
  *(uchar *)(v8 + 8) = Function_2220280(*(uint *)(v8 + 12), 0);
  *(uint *)(v8 + 24) = v6;
  v9 = 1;
  if ( (int)*(uchar *)(v8 + 8) > 1 )
  {
    v10 = v8 + 4;
    do
    {
      *(uint *)(v10 + 24) = Function_200ce6c(*(uint **)(v8 + 16), *(uint *)(v8 + 20), (short *)v16);
      ++v9;
      v10 += 4;
    }
    while ( v9 < *(uchar *)(v8 + 8) );
  }
  Function_200d364(*(int **)(v8 + 24), 0);
  Function_200d364(*(int **)(v8 + 28), 0);
  Function_200d364(*(int **)(v8 + 32), 1u);
  Function_200d364(*(int **)(v8 + 36), 1u);
  Function_200d364(*(int **)(v8 + 40), 2u);
  Function_200d364(*(int **)(v8 + 44), 3u);
  Function_200d7d4(*(int **)(v8 + 24), 1);
  Function_200d7d4(*(int **)(v8 + 36), 1);
  v11 = 0;
  if ( (int)*(uchar *)(v8 + 8) > 0 )
  {
    v12 = &word_223A162;
    v13 = v8;
    do
    {
      Function_200d390(*(uint **)(v13 + 24), 1);
      Function_200d4c4(*(int **)(v13 + 24), *v12, v12[1]);
      Function_200d810(*(int **)(v13 + 24), 1);
      ++v11;
      v13 += 4;
      v12 += 2;
    }
    while ( v11 < *(uchar *)(v8 + 8) );
  }
  Function_200d3f4(*(uint **)(v8 + 28), 0);
  Function_200d3f4(*(uint **)(v8 + 32), 0);
  Function_200d3f4(*(uint **)(v8 + 40), 0);
  Function_200d3f4(*(uint **)(v8 + 44), 0);
  return Function_22201cc(v15, (int)Function_222d934, v8, 0x44Cu);
}

//----- (0222DC98) --------------------------------------------------------
uint __fastcall Function_222dc98(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  uint v5;
  short v6;
  ushort v7;
  char v9;
  int v10;

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 12);
  if ( v4 <= 7 )
    JUMPOUT(__CS__, *((short *)&off_222DCB4 + v4) + 35839158);
  switch ( (uchar)v4 )
  {
    case 0:
      if ( (uchar)--*(uchar *)(a2 + 14) <= 0xAu )
        ++*(uchar *)(a2 + 12);
      break;
    case 1:
      if ( (uchar)++*(uchar *)(a2 + 13) >= 3u )
      {
        Function_200d3f4(*(uint **)(a2 + 16), 1);
        *(uchar *)(v2 + 13) = 0;
        ++*(uchar *)(v2 + 12);
      }
      break;
    case 2:
      if ( (uchar)++*(uchar *)(a2 + 13) > 3u )
      {
        *(uchar *)(a2 + 13) = 0;
        ++*(uchar *)(a2 + 12);
      }
      else
      {
        *(uint *)(a2 + 56) = fadd(*(uint *)(a2 + 56), 1036831949);
        Function_200d6e8(*(int **)(v2 + 16), *(uint *)(v2 + 56), *(uint *)(v2 + 56));
      }
      break;
    case 3:
      if ( (uchar)++*(uchar *)(a2 + 13) > 3u )
      {
        *(uchar *)(a2 + 13) = 0;
        ++*(uchar *)(a2 + 12);
      }
      else
      {
        *(uint *)(a2 + 56) = fsub(*(uint *)(a2 + 56), 1036831949);
        Function_200d6e8(*(int **)(v2 + 16), *(uint *)(v2 + 56), *(uint *)(v2 + 56));
      }
      break;
    case 4:
      if ( (uchar)--*(uchar *)(a2 + 14) <= 0xAu )
      {
        **(uint **)(a2 + 60) = 1;
        *(uchar *)(a2 + 13) = 0;
        ++*(uchar *)(a2 + 12);
      }
      break;
    case 5:
      if ( (uchar)++*(uchar *)(a2 + 13) <= 0x1Eu )
      {
        if ( **(uint **)(a2 + 60) == 2 )
          ++*(uchar *)(a2 + 12);
      }
      else
      {
        *(uchar *)(a2 + 13) = 0;
        ++*(uchar *)(a2 + 12);
      }
      break;
    case 6:
      v5 = PRNG();
      s32_div_f(v5, 10);
      v7 = v6 + 10;
      Function_200d550(*(int **)(v2 + 16), &v9, &v10);
      Function_2225bc8(
        v2 + 20,
        *(short *)&v9,
        SHIWORD(dword_223A148[*(uchar *)(v2 + 15)]),
        (short)v10,
        dword_223A14C[*(uchar *)(v2 + 15)],
        v7);
      ++*(uchar *)(v2 + 12);
      break;
    case 7:
      if ( !Function_2225c50(a2 + 20, *(int **)(a2 + 16)) )
      {
        Function_200d3f4(*(uint **)(v2 + 16), 0);
        ++*(uchar *)(v2 + 12);
        goto LABEL_24;
      }
      break;
    default:
LABEL_24:
      **(uint **)(v2 + 60) = 3;
      Function_2220220(*(uint *)v2, v3);
      break;
  }
  return Function_200d330(*(int **)(v2 + 16));
}

//----- (0222DE24) --------------------------------------------------------
uint __fastcall Function_222de24(int *a1, int a2)
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

  v2 = a2;
  switch ( *(uchar *)a2 )
  {
    case 0:
      v3 = *(uchar *)(a2 + 2);
      v4 = 1;
      v5 = 0;
      if ( v3 <= 0 )
        goto LABEL_7;
      v6 = a2;
      while ( *(uint *)(v6 + 1300) == 1 )
      {
        ++v5;
        v6 += 4;
        if ( v5 >= v3 )
          goto LABEL_7;
      }
      v4 = 0;
LABEL_7:
      if ( v4 == 1 )
        ++*(uchar *)a2;
      return Function_200c7ec(*(int **)(v2 + 16));
    case 1:
      v7 = 0;
      if ( (int)*(uchar *)(a2 + 2) > 0 )
      {
        v8 = a2;
        do
        {
          *(uint *)(v8 + 1300) = 2;
          ++v7;
          v8 += 4;
        }
        while ( v7 < *(uchar *)(a2 + 2) );
      }
      ++*(uchar *)a2;
      return Function_200c7ec(*(int **)(v2 + 16));
    case 2:
      v9 = *(uchar *)(a2 + 2);
      v10 = 1;
      v11 = 0;
      if ( v9 <= 0 )
        goto LABEL_18;
      v12 = a2;
      break;
    case 3:
      v13 = 0;
      if ( (int)*(uchar *)(a2 + 2) > 0 )
      {
        v14 = a2;
        do
        {
          Function_200d0f4(*(uint *)(v14 + 36));
          ++v13;
          v14 += 64;
        }
        while ( v13 < *(uchar *)(v2 + 2) );
      }
      ++*(uchar *)v2;
      return Function_200c7ec(*(int **)(v2 + 16));
    default:
      Function_2220220(*(uint *)(a2 + 8), a1);
      return free(v2);
  }
  while ( *(uint *)(v12 + 1300) == 3 )
  {
    ++v11;
    v12 += 4;
    if ( v11 >= v9 )
      goto LABEL_18;
  }
  v10 = 0;
LABEL_18:
  if ( v10 == 1 )
    ++*(uchar *)a2;
  return Function_200c7ec(*(int **)(v2 + 16));
}

//----- (0222DEFC) --------------------------------------------------------
uint *__fastcall Function_222defc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  uint v12;
  char v13;
  uint v14;
  char v15;
  uint v16;
  short v17;
  int v18;
  uint v19;
  short v20;
  int v21;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27[13];
  int v28;

  v28 = a4;
  v23 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = Function_221fde4(a1);
  v8 = malloc(v7, 1380);
  if ( !v8 )
    ErrorHandler();
  *(uchar *)(v8 + 1) = 0;
  *(uchar *)v8 = 0;
  *(uint *)(v8 + 12) = v4;
  *(uint *)(v8 + 16) = v5;
  *(uint *)(v8 + 8) = v23;
  Function_222329c(v27, v23);
  Function_2235780(*(uint *)(v8 + 8));
  *(uchar *)(v8 + 2) = Function_2220280(*(uint *)(v8 + 8), 0);
  *(uchar *)(v8 + 2) = 12;
  *(uint *)(v8 + 36) = v6;
  v9 = 0;
  v24 = 0;
  if ( (int)*(uchar *)(v8 + 2) > 0 )
  {
    v10 = v8;
    v26 = v8 + 1300;
    v25 = v8 + 20;
    do
    {
      if ( v9 )
        *(uint *)(v10 + 36) = Function_200ce6c(
                                  *(uint **)(v8 + 12),
                                  *(uint *)(v8 + 16),
                                  (short *)v27);
      v11 = *(int **)(v10 + 36);
      *(uchar *)(v10 + 32) = 0;
      *(uchar *)(v10 + 33) = 0;
      v12 = PRNG();
      s32_div_f(v12, 10);
      *(uchar *)(v10 + 34) = v9 + v13 + 10;
      v14 = PRNG();
      s32_div_f(v14, 6);
      *(uchar *)(v10 + 35) = v15;
      *(uint *)(v10 + 76) = 1065353216;
      *(uint *)(v10 + 20) = *(uint *)(v8 + 8);
      *(uint *)(v10 + 24) = *(uint *)(v8 + 12);
      *(uint *)(v10 + 28) = *(uint *)(v8 + 16);
      *(uint *)(v10 + 80) = v26;
      v16 = PRNG();
      s32_div_f(v16, SLOWORD(dword_223A198[2 * v24 + 2]));
      v18 = (short)(LOWORD(dword_223A198[2 * v24 + 1]) + v17);
      v19 = PRNG();
      s32_div_f(v19, SHIWORD(dword_223A198[2 * v24 + 1]));
      Function_200d4c4(v11, v18, (short)(HIWORD(dword_223A198[2 * v24]) + v20));
      Function_200d6a4((uint *)v11, 2);
      Function_200d6e8(v11, *(uint *)(v10 + 76), *(uint *)(v10 + 76));
      Function_200d3f4((uint *)v11, 0);
      Function_22201cc(v23, (int)Function_222dc98, v25, 0x44Bu);
      s32_div_f(v24 + 1, 6);
      ++v9;
      v26 += 4;
      v24 = v21;
      v25 += 64;
      v10 += 64;
    }
    while ( v9 < *(uchar *)(v8 + 2) );
  }
  return Function_22201cc(v23, (int)Function_222de24, v8, 0x44Du);
}

//----- (0222E080) --------------------------------------------------------
uint __fastcall Function_222e080(int *a1, int a2)
{
  int v2;
  int *v3;
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
  uint result;

  v2 = a2;
  v3 = a1;
  switch ( *(uchar *)(a2 + 4) )
  {
    case 0:
      v4 = Function_2220240(*(uint *)(a2 + 8));
      v5 = Function_22232fc(*(uint *)(v2 + 8), v4);
      Function_2007dec(v5, 6u, 1);
      ++*(uchar *)(v2 + 4);
      goto LABEL_10;
    case 1:
      if ( Function_2226454(a2 + 44) )
      {
        *(uint *)v2 = 0;
        v8 = Function_22233ec(*(uint *)(v2 + 8), 1, v6, v7);
        v9 = Function_22266e8(0, 0);
        v10 = Function_221fde4(*(uint *)(v2 + 8));
        *(uint *)(v2 + 40) = Function_222662c(0, 160, 364, 49152, 200, v8, 0, v9, v10);
        ++*(uchar *)(v2 + 4);
      }
      goto LABEL_10;
    case 2:
      v11 = *(uint *)a2 + 1;
      *(uint *)a2 = v11;
      if ( v11 >= 120 )
      {
        Function_222669c(*(uint *)(a2 + 40));
        Function_2226424(v2 + 44, 2, 16, 16, 2, 0x10u);
        ++*(uchar *)(v2 + 4);
      }
      goto LABEL_10;
    case 3:
      if ( Function_2226454(a2 + 44) )
      {
        v12 = Function_2220240(*(uint *)(v2 + 8));
        v13 = Function_22232fc(*(uint *)(v2 + 8), v12);
        Function_2007dec(v13, 6u, 0);
        ++*(uchar *)(v2 + 4);
      }
LABEL_10:
      Function_200d330(*(int **)(v2 + 36));
      Function_200d330(*(int **)(v2 + 32));
      result = Function_200c7ec(*(int **)(v2 + 16));
      break;
    default:
      REG_DISPCNT &= 0xFFFF1FFF;
      Function_2222664(*(uint *)(a2 + 8), 2u);
      Function_2220220(*(uint *)(v2 + 8), v3);
      result = free(v2);
      break;
  }
  return result;
}

//----- (0222E1A8) --------------------------------------------------------
uint *__fastcall Function_222e1a8(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int *v4;

  v1 = a1;
  v2 = (int *)Function_2235e50();
  Function_223595c(v1, v2 + 1);
  v3 = (int *)Function_22202c0(v2[2], 0);
  v2[8] = (int)v3;
  Function_200d810(v3, 2);
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x8000;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x1B;
  WIN_OUT = WIN_OUT & 0xC0FF | 0x1700;
  v4 = (int *)Function_22202c0(v2[2], 1);
  v2[9] = (int)v4;
  Function_200d810(v4, 1);
  Function_2226424((int)(v2 + 11), 16, 2, 2, 16, 0x10u);
  Function_2222590((int *)v2[2], 2);
  Function_2019120(2u, 1);
  return Function_22201e8(v2[2], (int)Function_222e080, (int)v2);
}

//----- (0222E248) --------------------------------------------------------
uint __fastcall Function_222e248(int *a1)
{
  int *v1;
  uint result;

  v1 = a1;
  result = Function_200d408(a1);
  if ( result == 1 )
    result = Function_200d330(v1);
  return result;
}

//----- (0222E25C) --------------------------------------------------------
int __fastcall Function_222e25c(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v10;
  int v11;

  v11 = a2;
  v10 = a1;
  v2 = *(short *)(a2 + 28);
  if ( v2 > 0 )
  {
    *(ushort *)(a2 + 28) = v2 - 1;
  }
  else
  {
    Function_222e248(*(int **)(a2 + 48));
    Function_222e248(*(int **)(v11 + 52));
  }
  Function_222e248(*(int **)(v11 + 40));
  Function_222e248(*(int **)(v11 + 44));
  v3 = v11;
  v4 = 0;
  v5 = 0;
  v6 = v11;
  do
  {
    if ( (short)++*(ushort *)(v3 + 30) >= 40 )
    {
      Function_200d3f4(*(uint **)(v6 + 40), 0);
      ++v4;
    }
    ++v5;
    v3 += 2;
    v6 += 4;
  }
  while ( v5 < 4 );
  if ( v4 != 4 )
    return Function_200c7ec(*(int **)(v11 + 16));
  v7 = v11;
  v8 = 0;
  do
  {
    Function_200d0f4(*(uint *)(v7 + 40));
    ++v8;
    v7 += 4;
  }
  while ( v8 < 4 );
  Function_2220220(*(uint *)(v11 + 4), v10);
  return free(v11);
}

//----- (0222E2F8) --------------------------------------------------------
uint *__fastcall Function_222e2f8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v11;

  v4 = a1;
  v5 = a4;
  v6 = Function_2235e50();
  *(ushort *)(v6 + 28) = 10;
  Function_223595c(v4, v6);
  Function_222329c((int *)&v11, *(uint *)(v6 + 4));
  *(uint *)(v6 + 40) = v5;
  *(ushort *)(v6 + 30) = 0;
  v7 = 1;
  v8 = v6 + 2;
  v9 = v6 + 4;
  do
  {
    *(ushort *)(v8 + 30) = 0;
    *(uint *)(v9 + 40) = Function_200ce6c(*(uint **)(v6 + 8), *(uint *)(v6 + 16), (short *)&v11);
    ++v7;
    v8 += 2;
    v9 += 4;
  }
  while ( v7 < 4 );
  Function_200d7d4(*(int **)(v6 + 40), 1);
  Function_200d7d4(*(int **)(v6 + 44), 1);
  Function_200d5dc(*(uint ***)(v6 + 40), -32, 0);
  Function_200d5dc(*(uint ***)(v6 + 44), -32, 32);
  Function_200d5dc(*(uint ***)(v6 + 48), 32, 0);
  Function_200d5dc(*(uint ***)(v6 + 52), 32, 32);
  return Function_22201e8(*(uint *)(v6 + 4), (int)Function_222e25c, v6);
}

//----- (0222E390) --------------------------------------------------------
int __fastcall Function_222e390(int *a1, int a2)
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
  int *v19;
  int v20;

  v2 = a2;
  v3 = 0;
  v19 = a1;
  v20 = 0;
  v4 = a2;
  v5 = a2;
  do
  {
    if ( (short)++*(ushort *)(v4 + 34) >= 20 )
    {
      Function_222e248(*(int **)(v5 + 44));
      if ( *(ushort *)(v2 + 34) == 110 )
      {
        Function_2235780(*(uint *)(v2 + 4));
        Function_200d810(*(int **)(v2 + 44), 1);
        Function_200d810(*(int **)(v2 + 48), 1);
        Function_200d810(*(int **)(v2 + 52), 1);
        Function_200d810(*(int **)(v2 + 56), 1);
        *(uint *)(v2 + 84) = 15;
        *(uint *)(v2 + 88) = 0;
      }
    }
    ++v3;
    v4 += 2;
    v5 += 4;
  }
  while ( v3 < 4 );
  if ( *(ushort *)(v2 + 34) == 50 )
  {
    v6 = Function_221fde4(*(uint *)(v2 + 4));
    *(uint *)(v2 + 60) = Function_2226870(
                             *(uint *)(v2 + 24),
                             v6,
                             2,
                             16 * *(ushort *)(v2 + 28),
                             16,
                             -2,
                             2,
                             0,
                             14,
                             0xFFFF,
                             0x3EAu);
  }
  if ( *(ushort *)(v2 + 34) == 60 )
  {
    v7 = Function_221fde4(*(uint *)(v2 + 4));
    *(uint *)(v2 + 64) = Function_2226870(
                             *(uint *)(v2 + 24),
                             v7,
                             2,
                             16 * *(ushort *)(v2 + 28),
                             16,
                             -2,
                             2,
                             14,
                             0,
                             0xFFFF,
                             0x3EAu);
  }
  if ( *(ushort *)(v2 + 34) == 70 )
  {
    v8 = Function_221fde4(*(uint *)(v2 + 4));
    *(uint *)(v2 + 68) = Function_2226870(
                             *(uint *)(v2 + 24),
                             v8,
                             2,
                             16 * *(ushort *)(v2 + 28),
                             16,
                             -2,
                             2,
                             0,
                             14,
                             0xFFFF,
                             0x3EAu);
  }
  if ( *(ushort *)(v2 + 34) == 80 )
  {
    v9 = Function_221fde4(*(uint *)(v2 + 4));
    *(uint *)(v2 + 72) = Function_2226870(
                             *(uint *)(v2 + 24),
                             v9,
                             2,
                             16 * *(ushort *)(v2 + 28),
                             16,
                             -2,
                             2,
                             14,
                             0,
                             0xFFFF,
                             0x3EAu);
  }
  if ( *(ushort *)(v2 + 34) == 90 )
  {
    v10 = Function_221fde4(*(uint *)(v2 + 4));
    *(uint *)(v2 + 76) = Function_2226870(
                             *(uint *)(v2 + 24),
                             v10,
                             2,
                             16 * *(ushort *)(v2 + 28),
                             16,
                             -2,
                             2,
                             0,
                             14,
                             0xFFFF,
                             0x3EAu);
  }
  if ( *(ushort *)(v2 + 34) == 100 )
  {
    v11 = Function_221fde4(*(uint *)(v2 + 4));
    *(uint *)(v2 + 80) = Function_2226870(
                             *(uint *)(v2 + 24),
                             v11,
                             2,
                             16 * *(ushort *)(v2 + 28),
                             16,
                             -2,
                             2,
                             14,
                             0,
                             0xFFFF,
                             0x3EAu);
  }
  if ( *(ushort *)(v2 + 34) == 110 )
  {
    Function_2235780(*(uint *)(v2 + 4));
    Function_200d810(*(int **)(v2 + 44), 1);
    Function_200d810(*(int **)(v2 + 48), 1);
    Function_200d810(*(int **)(v2 + 52), 1);
    Function_200d810(*(int **)(v2 + 56), 1);
    *(uint *)(v2 + 84) = 15;
    *(uint *)(v2 + 88) = 0;
  }
  if ( *(short *)(v2 + 34) >= 110 )
  {
    v12 = *(uint *)(v2 + 84);
    if ( v12 > 0 )
      *(uint *)(v2 + 84) = v12 - 1;
    v13 = *(uint *)(v2 + 88);
    if ( v13 < 15 )
      *(uint *)(v2 + 88) = v13 + 1;
    REG_BLDALPHA = *(ushort *)(v2 + 84) | (*(ushort *)(v2 + 88) << 8);
    if ( !*(uint *)(v2 + 84) && *(uint *)(v2 + 88) == 15 )
      v20 = 4;
  }
  if ( v20 != 4 )
    return Function_200c7ec(*(int **)(v2 + 16));
  v14 = 0;
  v15 = v2;
  do
  {
    Function_200d0f4(*(uint *)(v15 + 44));
    ++v14;
    v15 += 4;
  }
  while ( v14 < 4 );
  v16 = 0;
  v17 = v2;
  do
  {
    Function_2226858(*(uint *)(v17 + 60));
    ++v16;
    v17 += 4;
  }
  while ( v16 < 6 );
  Function_2220220(*(uint *)(v2 + 4), v19);
  return free(v2);
}

//----- (0222E61C) --------------------------------------------------------
uint *__fastcall Function_222e61c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  short v6;
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
  bool v17;
  int *v18;
  int v20;
  int v21;
  int v22;
  int v23[13];
  int v24;

  v24 = a4;
  v20 = a1;
  v4 = a4;
  v5 = Function_2235e50();
  *(ushort *)(v5 + 32) = 10;
  Function_223595c(v20, v5);
  Function_222329c(v23, *(uint *)(v5 + 4));
  *(uint *)(v5 + 44) = v4;
  *(ushort *)(v5 + 34) = 0;
  v22 = 1;
  v6 = 5;
  v7 = v5 + 2;
  v8 = v5 + 4;
  do
  {
    v9 = PRNG();
    *(ushort *)(v7 + 34) = v6 + (v9 >> 31) + __ROR4__((v9 << 30) - (v9 >> 31), 30);
    *(uint *)(v8 + 44) = Function_200ce6c(*(uint **)(v5 + 8), *(uint *)(v5 + 16), (short *)v23);
    v6 += 5;
    v7 += 2;
    v8 += 4;
    ++v22;
  }
  while ( v22 < 4 );
  Function_200d7d4(*(int **)(v5 + 48), 1);
  Function_200d7d4(*(int **)(v5 + 52), 1);
  v10 = Function_2220240(v20);
  v11 = Function_22232fc(v20, v10);
  v21 = (short)Function_20080c0(v11, 0);
  Function_20080c0(v11, 1u);
  Function_20080c0(v11, 0x29u);
  v12 = Function_2220240(v20);
  if ( Function_223525c(v20, v12) == 3 )
    v13 = 140;
  else
    v13 = 84;
  v14 = 0;
  v15 = v5;
  do
  {
    Function_200d4c4(*(int **)(v15 + 44), v21, v13);
    ++v14;
    v15 += 4;
  }
  while ( v14 < 4 );
  v16 = Function_2220240(v20);
  v17 = Function_223525c(v20, v16) == 3;
  v18 = *(int **)(v5 + 44);
  if ( v17 )
  {
    Function_200d474(v18, 10);
    Function_200d474(*(int **)(v5 + 52), 10);
    Function_200d474(*(int **)(v5 + 48), 18);
    Function_200d474(*(int **)(v5 + 56), 18);
  }
  else
  {
    Function_200d474(v18, 18);
    Function_200d474(*(int **)(v5 + 52), 18);
    Function_200d474(*(int **)(v5 + 48), 10);
    Function_200d474(*(int **)(v5 + 56), 10);
  }
  Function_200d5dc(*(uint ***)(v5 + 44), -32, 0);
  Function_200d5dc(*(uint ***)(v5 + 56), -40, 4);
  Function_200d5dc(*(uint ***)(v5 + 52), 32, 0);
  Function_200d5dc(*(uint ***)(v5 + 48), 40, 4);
  *(uint *)(v5 + 28) = Function_200d43c(*(int **)(v5 + 44));
  return Function_22201e8(*(uint *)(v5 + 4), (int)Function_222e390, v5);
}

//----- (0222E784) --------------------------------------------------------
int __fastcall Function_222e784(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  int result;
  uint v5;
  uint v6;

  v2 = a2;
  v3 = a1;
  result = (uchar)*a2;
  if ( !*a2 )
  {
    if ( Function_2225f6c((int)(a2 + 96)) )
    {
      Function_2225fa4((short *)v2 + 48, (int *)&v6, (int *)&v5);
      Function_200d6e8(*((int **)v2 + 10), v6, v5);
      Function_222605c(
        *((int **)v2 + 10),
        *((short *)v2 + 44),
        *((short *)v2 + 45),
        *((uint *)v2 + 29),
        0);
      Function_200d330(*((int **)v2 + 10));
      Function_200d330(*((int **)v2 + 15));
      Function_200d330(*((int **)v2 + 20));
      result = Function_200c7ec(*((int **)v2 + 3));
    }
    else
    {
      Function_200d3f4(*((uint **)v2 + 10), 0);
      Function_200d3f4(*((uint **)v2 + 15), 0);
      Function_200d3f4(*((uint **)v2 + 15), 0);
      Function_2220220(*((uint *)v2 + 1), v3);
      result = Function_2235e80(v2);
    }
  }
  return result;
}

//----- (0222E810) --------------------------------------------------------
uint *__fastcall Function_222e810(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  char v6;
  char v7;
  char v8;
  int v9;
  uint v10;
  bool v11;
  bool v12;
  int *v13;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2);
  v3 = Function_2220248(*(uint *)(v2 + 4));
  v4 = Function_22232fc(*(uint *)(v2 + 4), v3);
  *(uint *)(v2 + 36) = v4;
  *(ushort *)(v2 + 88) = Function_20080c0(v4, 1u);
  *(ushort *)(v2 + 92) = *(ushort *)(v2 + 88);
  v5 = Function_2220248(*(uint *)(v2 + 4));
  *(ushort *)(v2 + 90) = Function_2223354(*(uint *)(v2 + 4), v5);
  *(uint *)(v2 + 40) = Function_22202c0(v1, 0);
  *(uint *)(v2 + 60) = Function_22202c0(v1, 1);
  *(uint *)(v2 + 80) = Function_22202c0(v1, 2);
  Function_200d6a4(*(uint **)(v2 + 40), 2);
  v6 = Function_222339c(v1);
  Function_200d460(*(int **)(v2 + 40), v6);
  v7 = Function_222339c(v1);
  Function_200d460(*(int **)(v2 + 60), v7);
  v8 = Function_222339c(v1);
  Function_200d460(*(int **)(v2 + 80), v8);
  v9 = Function_2220248(*(uint *)(v2 + 4));
  v10 = Function_22232b8(*(uint *)(v2 + 4), v9) - 3;
  v11 = v10 >= 1;
  v12 = v10 == 1;
  v13 = *(int **)(v2 + 40);
  if ( !v12 && v11 )
  {
    Function_200d474(v13, 60);
    Function_200d474(*(int **)(v2 + 60), 70);
    Function_200d474(*(int **)(v2 + 80), 50);
  }
  else
  {
    Function_200d474(v13, 30);
    Function_200d474(*(int **)(v2 + 60), 50);
    Function_200d474(*(int **)(v2 + 80), 70);
  }
  Function_2225ef0((short *)(v2 + 96), 100, 20, 100, 20, 100, 10);
  return Function_22201e8(*(uint *)(v2 + 4), (int)Function_222e784, v2);
}

//----- (0222E91C) --------------------------------------------------------
int __fastcall Function_222e91c(int *a1, char *a2)
{
  char *v2;
  int v3;
  char v4;

  v2 = a2;
  if ( *a2 )
  {
    if ( *a2 != 1 )
    {
      Function_2220220(*((uint *)a2 + 1), a1);
      return Function_2235e80(v2);
    }
    v3 = 0;
    if ( !Function_2225c50((int)(a2 + 88), *((int **)a2 + 10)) )
      v3 = 1;
    if ( !Function_2225c74((int)(v2 + 52), *((uint *)v2 + 9)) )
      ++v3;
    if ( !Function_2225c50((int)(v2 + 124), *((int **)v2 + 12)) )
      ++v3;
    if ( v3 >= 3 )
    {
      v4 = *v2;
      if ( v2[160] == 1 )
        *v2 = v4 - 1;
      else
        *v2 = v4 + 1;
    }
  }
  else
  {
    if ( a2[160] )
    {
      Function_2225bc8(
        (int)(a2 + 52),
        (short)(*((ushort *)a2 + 16) + 48),
        *((short *)a2 + 16),
        *((short *)a2 + 17),
        *((ushort *)a2 + 17),
        3u);
      Function_2225bc8(
        (int)(v2 + 88),
        (short)(*((ushort *)v2 + 16) + 48),
        *((short *)v2 + 16),
        (short)(*((ushort *)v2 + 17) + *((ushort *)v2 + 82)),
        *((ushort *)v2 + 17) + *((ushort *)v2 + 82),
        6u);
      Function_2225bc8(
        (int)(v2 + 124),
        (short)(*((ushort *)v2 + 16) + 48),
        *((short *)v2 + 16),
        (short)(*((ushort *)v2 + 17) + *((ushort *)v2 + 82)),
        *((ushort *)v2 + 17) + *((ushort *)v2 + 82),
        9u);
    }
    else
    {
      Function_2225bc8(
        (int)(a2 + 52),
        *((short *)a2 + 16),
        (short)(*((ushort *)a2 + 16) + 48),
        *((short *)a2 + 17),
        *((ushort *)a2 + 17),
        3u);
      Function_2225bc8(
        (int)(v2 + 88),
        *((short *)v2 + 16),
        (short)(*((ushort *)v2 + 16) + 48),
        (short)(*((ushort *)v2 + 17) + *((ushort *)v2 + 82)),
        *((ushort *)v2 + 17) + *((ushort *)v2 + 82),
        6u);
      Function_2225bc8(
        (int)(v2 + 124),
        *((short *)v2 + 16),
        (short)(*((ushort *)v2 + 16) + 48),
        (short)(*((ushort *)v2 + 17) + *((ushort *)v2 + 82)),
        *((ushort *)v2 + 17) + *((ushort *)v2 + 82),
        8u);
    }
    ++v2[160];
    ++*v2;
  }
  Function_200d330(*((int **)v2 + 10));
  return Function_200c7ec(*((int **)v2 + 3));
}

//----- (0222EAA0) --------------------------------------------------------
uint *__fastcall Function_222eaa0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  char v10;
  uint *v11;
  short v12;
  int v13;
  int v14;
  int *v15;
  char v16;
  uint *v17;
  short v18;
  int v19;
  int v20;

  v1 = a1;
  v2 = Function_2235e50();
  Function_223595c(v1, v2);
  *(uchar *)(v2 + 161) = 0;
  *(uchar *)(v2 + 162) = 8;
  *(uchar *)(v2 + 163) = 8;
  Function_2235780(*(uint *)(v2 + 4));
  REG_BLDALPHA = *(uchar *)(v2 + 162) | (ushort)(*(uchar *)(v2 + 163) << 8);
  v3 = Function_2220240(*(uint *)(v2 + 4));
  v4 = Function_22232fc(*(uint *)(v2 + 4), v3);
  *(uint *)(v2 + 36) = v4;
  *(ushort *)(v2 + 32) = Function_20080c0(v4, 0);
  *(ushort *)(v2 + 34) = Function_20080c0(*(uint *)(v2 + 36), 1u);
  *(uint *)(v2 + 40) = Function_22202c0(*(uint *)(v2 + 4), 0);
  *(uint *)(v2 + 48) = Function_22202c0(*(uint *)(v2 + 4), 1);
  *(ushort *)(v2 + 164) = -(short)Function_20080c0(*(uint *)(v2 + 36), 0x29u);
  v5 = Function_2220240(*(uint *)(v2 + 4));
  v6 = Function_2223334(*(uint *)(v2 + 4), v5);
  v7 = Function_2220240(*(uint *)(v2 + 4));
  v8 = Function_2223344(*(uint *)(v2 + 4), v7);
  v9 = *(int **)(v2 + 40);
  v10 = Function_222339c(*(uint *)(v2 + 4));
  Function_200d460(v9, v10 + 1);
  v11 = (uint *)Function_2021f9c(*v9);
  v12 = Function_201fab4(v11, 1);
  v13 = Function_222332c(*(uint *)(v2 + 4));
  v14 = Function_221fde4(*(uint *)(v2 + 4));
  Function_2003b08(v13, v8, v6, v14, 2, 32, 16 * v12, 196, 196, 196);
  Function_200d810(v9, 1);
  v15 = *(int **)(v2 + 48);
  v16 = Function_222339c(*(uint *)(v2 + 4));
  Function_200d460(v15, v16 + 1);
  v17 = (uint *)Function_2021f9c(*v15);
  v18 = Function_201fab4(v17, 1);
  v19 = Function_222332c(*(uint *)(v2 + 4));
  v20 = Function_221fde4(*(uint *)(v2 + 4));
  Function_2003b08(v19, v8, v6, v20, 2, 32, 16 * v18, 196, 196, 196);
  Function_200d810(v15, 1);
  return Function_22201e8(*(uint *)(v2 + 4), (int)Function_222e91c, v2);
}

//----- (0222EC18) --------------------------------------------------------
int __fastcall Function_222ec18(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v9;
  int v10;

  v2 = 0;
  v9 = a1;
  v10 = a2;
  v3 = 0;
  v4 = a2;
  v5 = a2;
  do
  {
    if ( (short)++*(ushort *)(v4 + 30) >= 32 )
    {
      Function_222e248(*(int **)(v5 + 48));
      if ( *(short *)(v4 + 30) >= 160 )
      {
        Function_200d3f4(*(uint **)(v5 + 48), 0);
        ++v2;
      }
    }
    ++v3;
    v4 += 2;
    v5 += 4;
  }
  while ( v3 < 8 );
  if ( v2 != 8 )
    return Function_200c7ec(*(int **)(v10 + 16));
  v6 = v10;
  v7 = 0;
  do
  {
    Function_200d0f4(*(uint *)(v6 + 48));
    ++v7;
    v6 += 4;
  }
  while ( v7 < 8 );
  Function_2220220(*(uint *)(v10 + 4), v9);
  return free(v10);
}

//----- (0222EC90) --------------------------------------------------------
uint *__fastcall Function_222ec90(int a1, int a2, int a3, int a4)
{
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
  short v16;
  uint v17;
  int v18;
  int v19;
  int v20;
  char v21;
  int v22;
  int v23;
  int v24;
  int *v25;
  int *v26;
  int v28;
  char v29;
  int v30;
  int v31;
  int v32[13];
  int v33;

  v33 = a4;
  v4 = a1;
  v5 = a4;
  v6 = Function_2235e50();
  *(ushort *)(v6 + 28) = 10;
  Function_223595c(v4, v6);
  Function_222329c(v32, *(uint *)(v6 + 4));
  *(uint *)(v6 + 48) = v5;
  v7 = 1;
  v8 = v6 + 4;
  do
  {
    *(uint *)(v8 + 48) = Function_200ce6c(*(uint **)(v6 + 8), *(uint *)(v6 + 16), (short *)v32);
    if ( (v7 >> 31) + __ROR4__((v7 << 31) - (v7 >> 31), 31) )
      Function_200d7d4(*(int **)(v8 + 48), 1);
    ++v7;
    v8 += 4;
  }
  while ( (int)v7 < 8 );
  v9 = Function_2220240(*(uint *)(v6 + 4));
  v10 = Function_22232fc(*(uint *)(v6 + 4), v9);
  v11 = (short)Function_20080c0(v10, 0);
  v12 = (short)Function_20080c0(v10, 1u);
  v13 = Function_2220248(*(uint *)(v6 + 4));
  v14 = Function_22232fc(*(uint *)(v6 + 4), v13);
  v15 = (short)Function_20080c0(v14, 0);
  v16 = Function_20080c0(v14, 1u);
  Function_2225bc8(v6 + 80, v11, v15, v12, v16, 0x14u);
  v17 = 0;
  v18 = 0;
  v30 = 0;
  v19 = Function_2220240(*(uint *)(v6 + 4));
  if ( Function_223525c(*(uint *)(v6 + 4), v19) == 4 )
    v30 = 1;
  v20 = v6;
  do
  {
    v31 = Function_2225c14(v6 + 80);
    if ( (v17 >> 31) + __ROR4__((v17 << 31) - (v17 >> 31), 31) )
    {
      if ( v30 )
      {
        v30 = 0;
      }
      else if ( v18 < 8 )
      {
        Function_200d4c4(*(int **)(v20 + 48), *(short *)(v6 + 80), *(short *)(v6 + 82));
        v20 += 4;
        ++v18;
      }
    }
    ++v17;
  }
  while ( v31 == 1 );
  v29 = Function_2223428(*(uint *)(v6 + 4), 1);
  v21 = Function_2223428(*(uint *)(v6 + 4), 2);
  v22 = 0;
  v28 = v6;
  v23 = v6;
  do
  {
    *(ushort *)(v28 + 30) = 4 * (8 - v22);
    if ( Function_221fdd4(*(uint *)(v6 + 4)) )
    {
      Function_200d474(*(int **)(v23 + 48), v22);
      Function_200d460(*(int **)(v23 + 48), v21);
    }
    else
    {
      v24 = Function_2220240(*(uint *)(v6 + 4));
      if ( Function_223525c(*(uint *)(v6 + 4), v24) == 3 )
      {
        v25 = *(int **)(v23 + 48);
        if ( v22 >= 4 )
          Function_200d460(v25, v29);
        else
          Function_200d460(v25, v21);
      }
      else
      {
        v26 = *(int **)(v23 + 48);
        if ( v22 < 4 )
          Function_200d460(v26, v29);
        else
          Function_200d460(v26, v21);
      }
      Function_200d474(*(int **)(v23 + 48), 8 - v22);
    }
    ++v22;
    v23 += 4;
    v28 += 2;
  }
  while ( v22 < 8 );
  return Function_22201e8(*(uint *)(v6 + 4), (int)Function_222ec18, v6);
}

//----- (0222EE50) --------------------------------------------------------
int __fastcall Function_222ee50(int *a1, int a2)
{
  int v2;
  int *v3;
  ull v4;
  uchar v5;
  char v6;
  int v7;
  uint v8;
  uint *v9;
  short v10;
  int v11;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)a2 )
  {
    if ( *(uchar *)a2 == 1 )
    {
      if ( !Function_2226848(*(uint *)(a2 + 60)) )
      {
        Function_2226858(*(uint *)(v2 + 56));
        Function_2226858(*(uint *)(v2 + 60));
        v9 = (uint *)Function_2021f9c(**(uint **)(v2 + 36));
        v10 = Function_201fab4(v9, 1);
        v11 = Function_221fde4(*(uint *)(v2 + 4));
        *(uint *)(v2 + 60) = Function_2226870(*(uint *)(v2 + 24), v11, 2, 16 * v10, 16, 0, 1, 15, 0, 0xFFFF, 0x44Cu);
        ++*(uchar *)v2;
      }
    }
    else if ( !Function_2226848(*(uint *)(a2 + 60)) )
    {
      Function_200d330(*(int **)(v2 + 32));
      Function_2226858(*(uint *)(v2 + 60));
      Function_2220220(*(uint *)(v2 + 4), v3);
      return free(v2);
    }
  }
  else if ( *(uint *)(a2 + 40) <= 14 )
  {
    REG_BLDALPHA = (uchar)++*(uchar *)(a2 + 52) | (ushort)((uchar)--*(uchar *)(a2 + 53) << 8);
    ++*(uint *)(a2 + 40);
  }
  else
  {
    *(uint *)(a2 + 48) = fsub(*(uint *)(a2 + 48), 1045220557);
    *(uint *)(v2 + 44) = fadd(*(uint *)(v2 + 44), 1045220557);
    LODWORD(v4) = f2d(*(uint *)(v2 + 48));
    dls_2(v4, 0x3FC999999999999AuLL);
    if ( !v6 & v5 )
    {
      v7 = fflt(*(char *)(v2 + 54));
      v8 = fmul(*(uint *)(v2 + 44), v7);
      Function_200d6e8(*(int **)(v2 + 28), v8, *(uint *)(v2 + 48));
    }
    else
    {
      ++*(uchar *)v2;
      Function_200d3f4(*(uint **)(v2 + 28), 0);
    }
  }
  Function_200d330(*(int **)(v2 + 28));
  Function_200d330(*(int **)(v2 + 32));
  Function_200d330(*(int **)(v2 + 36));
  return Function_200c7ec(*(int **)(v2 + 12));
}

//----- (0222EFB0) --------------------------------------------------------
int __fastcall Function_222efb0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  short v7;
  char v8;
  int v9;
  uint v10;
  uint *v11;
  short v12;
  int v13;
  uint *v14;
  short v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uchar v20;
  int v21;
  ushort v22;
  uchar v23;
  uchar v24;
  short v25;
  int *v26;
  short v28[2];
  short v29[2];
  short v30[2];
  short v31[2];
  char v32;
  short v33;
  int v34;

  v34 = a4;
  v4 = a1;
  v5 = Function_2235e50();
  Function_223595c(v4, v5);
  *(uint *)(v5 + 28) = Function_22202c0(*(uint *)(v5 + 4), 0);
  *(uint *)(v5 + 32) = Function_22202c0(*(uint *)(v5 + 4), 1);
  *(uint *)(v5 + 36) = Function_22202c0(*(uint *)(v5 + 4), 2);
  *(uint *)(v5 + 40) = 0;
  v6 = Function_2220240(v4);
  v7 = -32 * Function_2225964(v4, v6);
  *(uint *)(v5 + 44) = 1065353216;
  *(uint *)(v5 + 48) = 1065353216;
  if ( Function_22234a8(v4, 1) == 1 )
    v8 = -1;
  else
    v8 = 1;
  *(uchar *)(v5 + 54) = v8;
  Function_200d550(*(int **)(v5 + 32), v29, v28);
  Function_200d4c4(*(int **)(v5 + 28), (short)(v29[0] + v7), v28[0]);
  Function_200d6a4(*(uint **)(v5 + 28), 2);
  v9 = fflt(*(char *)(v5 + 54));
  v10 = fmul(*(uint *)(v5 + 44), v9);
  Function_200d6e8(*(int **)(v5 + 28), v10, *(uint *)(v5 + 48));
  v11 = (uint *)Function_2021f9c(**(uint **)(v5 + 28));
  v12 = Function_201fab4(v11, 1);
  v13 = Function_221fde4(v4);
  *(uint *)(v5 + 56) = Function_2226870(*(uint *)(v5 + 24), v13, 2, 16 * v12, 16, 0, 1, 0, 15, 0xFFFF, 0x44Cu);
  v14 = (uint *)Function_2021f9c(**(uint **)(v5 + 36));
  v15 = Function_201fab4(v14, 1);
  v16 = Function_221fde4(v4);
  *(uint *)(v5 + 60) = Function_2226870(*(uint *)(v5 + 24), v16, 2, 16 * v15, 16, 0, 1, 0, 15, 0xFFFF, 0x44Cu);
  v17 = (uchar)Function_2220240(*(uint *)(v5 + 4));
  v18 = (uchar)Function_2235254(*(uint *)(v5 + 4), v17);
  v19 = Function_221fdd4(*(uint *)(v5 + 4));
  Function_2235350(v18, v19, &v32);
  Function_200d550(*(int **)(v5 + 28), v30, v31);
  if ( Function_223525c(*(uint *)(v5 + 4), v17) == 3 )
  {
    v20 = 0;
    Function_200d460(*(int **)(v5 + 28), 1);
    Function_200d474(*(int **)(v5 + 28), 0);
  }
  else
  {
    Function_200d460(*(int **)(v5 + 28), 2);
    Function_200d474(*(int **)(v5 + 28), 0);
    v20 = 2;
  }
  v21 = (uchar)Function_2220248(*(uint *)(v5 + 4));
  v22 = Function_22232d0(*(uint *)(v5 + 4), v21);
  v23 = Function_22232c4(*(uint *)(v5 + 4), v21);
  v24 = Function_22232e0(*(uint *)(v5 + 4), v21);
  Function_22232ec(*(uint *)(v5 + 4), v21);
  v25 = Function_2076648(v22, v23, v20, v24);
  Function_200d4c4(*(int **)(v5 + 28), v30[0], (short)(v33 + v25));
  Function_200d3f4(*(uint **)(v5 + 28), 1);
  *(uchar *)(v5 + 52) = 0;
  *(uchar *)(v5 + 53) = 15;
  Function_2235780(*(uint *)(v5 + 4));
  REG_BLDALPHA = *(uchar *)(v5 + 52) | (ushort)(*(uchar *)(v5 + 53) << 8);
  v26 = Function_22201e8(*(uint *)(v5 + 4), (int)Function_222ee50, v5);
  return Function_222ee50(v26, v5);
}

//----- (0222F208) --------------------------------------------------------
int __fastcall Function_222f208(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v11;
  int v12;

  v12 = a4;
  v4 = a2;
  v5 = a1;
  if ( *(uchar *)a2 )
  {
    if ( *(uchar *)a2 != 1 )
    {
      Function_2007dec(*(uint *)(a2 + 36), 0x2Cu, 0);
      Function_2220220(*(uint *)(v4 + 4), v5);
      return free(v4);
    }
  }
  else
  {
    Function_2225bc8(
      a2 + 48,
      *(short *)(a2 + 32),
      (short)*(uint *)(a2 + 4 * *(uint *)(a2 + 104) + 108),
      (short)*(uint *)(a2 + 4 * *(uint *)(a2 + 104) + 120),
      *(uint *)(a2 + 4 * *(uint *)(a2 + 104) + 120),
      0xFu);
    Function_2007dec(*(uint *)(v4 + 36), 2u, *(uint *)(v4 + 4 * *(uint *)(v4 + 104) + 132));
    Function_2007dec(*(uint *)(v4 + 36), 0x2Cu, 1);
    ++*(uchar *)v4;
  }
  if ( !Function_2225c14(v4 + 48) )
  {
    v6 = *(uint *)(v4 + 104) + 1;
    *(uint *)(v4 + 104) = v6;
    if ( v6 <= 2 )
    {
      if ( !*(uint *)(v4 + 88) )
      {
        Function_2220590(*(uint *)(v4 + 4), &v11, 3);
        v7 = *(uint *)(v4 + 4);
        if ( *(uint *)(v4 + 104) == 2 )
        {
          v8 = Function_221fde4(v7);
          Function_12_22382bc(&v11, v8);
        }
        else
        {
          v9 = Function_221fde4(v7);
          Function_22380cc(&v11, v9);
        }
      }
      *(uchar *)v4 = 0;
    }
    else
    {
      ++*(uchar *)v4;
    }
    *(ushort *)(v4 + 32) = Function_20080c0(*(uint *)(v4 + 36), 0);
  }
  Function_2007dec(*(uint *)(v4 + 36), 0, *(short *)(v4 + 48));
  return Function_2007dec(*(uint *)(v4 + 36), 1u, *(short *)(v4 + 50));
}

//----- (0222F2F8) --------------------------------------------------------
uint *__fastcall Function_222f2f8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = Function_2235e50();
  Function_223595c(v4, v5);
  v6 = Function_2220240(*(uint *)(v5 + 4));
  v7 = Function_2220240(*(uint *)(v5 + 4));
  Function_22353ac(*(uint *)(v5 + 4), v7);
  v8 = Function_2220248(*(uint *)(v5 + 4));
  Function_22353ac(*(uint *)(v5 + 4), v8);
  if ( Function_223525c(*(uint *)(v5 + 4), v6) == 3 )
    v9 = 1;
  else
    v9 = -1;
  *(ushort *)(v5 + 84) = v9;
  v10 = Function_2220240(*(uint *)(v5 + 4));
  v11 = Function_223525c(*(uint *)(v5 + 4), v10);
  v12 = Function_2220248(*(uint *)(v5 + 4));
  *(uint *)(v5 + 88) = v11 == Function_223525c(*(uint *)(v5 + 4), v12);
  *(uint *)(v5 + 104) = 0;
  v13 = Function_2220280(v4, 0);
  Function_2235998(v4, v13, v5 + 28, &v16);
  v14 = Function_20080c0(*(uint *)(v5 + 36), 1u) - *(short *)(v5 + 94);
  if ( *(short *)(v5 + 84) <= 0 )
  {
    *(uint *)(v5 + 108) = -80;
    *(uint *)(v5 + 112) = 335;
    *(uint *)(v5 + 116) = *(short *)(v5 + 92);
    *(uint *)(v5 + 120) = *(short *)(v5 + 94) + v14;
    *(uint *)(v5 + 124) = *(short *)(v5 + 98) + v14;
    *(uint *)(v5 + 128) = *(short *)(v5 + 94) + v14;
    *(uint *)(v5 + 132) = -650;
    *(uint *)(v5 + 136) = 10;
  }
  else
  {
    *(uint *)(v5 + 108) = 335;
    *(uint *)(v5 + 112) = -80;
    *(uint *)(v5 + 116) = *(short *)(v5 + 92);
    *(uint *)(v5 + 120) = *(short *)(v5 + 94) + v14;
    *(uint *)(v5 + 124) = *(short *)(v5 + 98) + v14;
    *(uint *)(v5 + 128) = *(short *)(v5 + 94) + v14;
    *(uint *)(v5 + 132) = 10;
    *(uint *)(v5 + 136) = -650;
  }
  *(uint *)(v5 + 140) = Function_20080c0(*(uint *)(v5 + 36), 2u);
  return Function_22201e8(*(uint *)(v5 + 4), (int)Function_222f208, v5);
}

//----- (0222F44C) --------------------------------------------------------
char *__fastcall Function_222f44c(int a1, char a2, char a3, char a4, char a5)
{
  return Function_20086d4(a1, a2, 80 - a4, a3, a5);
}

//----- (0222F464) --------------------------------------------------------
char *__fastcall Function_222f464(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  char *result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 32);
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_222F484 + v4) + 35845254);
  switch ( (uchar)v4 )
  {
    case 0:
      v5 = *(uint *)(a2 + 16) + 79;
      *(uint *)(a2 + 16) = v5;
      if ( v5 < 80 )
      {
        if ( *(uint *)(a2 + 20) )
          result = Function_222f44c(*(uint *)(a2 + 28), 80 - v5, v5, 2 * (*(uchar *)a2 + 2), 2);
        else
          result = Function_222f44c(*(uint *)(a2 + 28), 0, v5, 2 * (*(uchar *)a2 + 2), 2);
      }
      else
      {
        ++*(uchar *)(a2 + 32);
        *(uint *)(a2 + 20) ^= 1u;
        result = 0;
        *(uint *)(a2 + 16) = 0;
      }
      break;
    case 1:
      --*(uint *)(a2 + 4);
      v7 = *(uint *)(a2 + 12) + 1;
      *(uint *)(a2 + 12) = v7;
      v8 = (*(uint *)(a2 + 4) << 8) & 0xFF00;
      WIN0_X1 = ((ushort)*(uint *)(a2 + 8) << 8) & 0xFF00 | (*(ushort *)(a2 + 8) + 80) & 0xFF;
      WIN0_Y1 = (uchar)v7 | (ushort)v8;
      result = (char *)(*(uchar *)(a2 + 32) + 1);
      *(uchar *)(a2 + 32) = (uchar)result;
      break;
    case 2:
      --*(uint *)(a2 + 4);
      v9 = *(uint *)(a2 + 12) + 1;
      *(uint *)(a2 + 12) = v9;
      v10 = (*(uint *)(a2 + 4) << 8) & 0xFF00;
      WIN0_X1 = ((ushort)*(uint *)(a2 + 8) << 8) & 0xFF00 | (*(ushort *)(a2 + 8) + 80) & 0xFF;
      WIN0_Y1 = (uchar)v9 | (ushort)v10;
      v11 = *(uint *)a2 + 1;
      *(uint *)a2 = v11;
      if ( v11 <= 38 )
      {
        result = 0;
        *(uchar *)(a2 + 32) = 0;
      }
      else
      {
        result = (char *)(*(uchar *)(a2 + 32) + 1);
        *(uchar *)(a2 + 32) = (uchar)result;
      }
      break;
    case 3:
      Function_2007dec(*(uint *)(a2 + 28), 0xEu, 0);
      result = (char *)(*(uchar *)(v2 + 32) + 1);
      *(uchar *)(v2 + 32) = (uchar)result;
      break;
    default:
      REG_DISPCNT &= 0xFFFF1FFF;
      WIN_IN &= 0xFFC0u;
      WIN_OUT &= 0xFFC0u;
      WIN0_X1 = 0;
      WIN0_Y1 = 0;
      Function_2220220(*(uint *)(a2 + 36), v3);
      Function_2007dec(*(uint *)(v2 + 28), 0x17u, *(uint *)(v2 + 24));
      result = (char *)free(v2);
      break;
  }
  return result;
}

//----- (0222F5EC) --------------------------------------------------------
uint *__fastcall Function_222f5ec(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  v2 = (uint *)Function_2235e50();
  Function_223595c(v1, v2 + 8);
  v3 = Function_2220248(v1);
  v2[7] = Function_22232fc(v1, v3);
  *v2 = 0;
  v4 = Function_2220248(v1);
  v5 = Function_2235254(v1, v4);
  if ( v5 == 3 || v5 == 4 )
  {
    v6 = Function_222339c(v1);
    Function_2019060(2u, (v6 - 1) & 0xFF);
  }
  v7 = (short)Function_20080c0(v2[7], 0);
  v8 = Function_20080c0(v2[7], 1u);
  v9 = (short)(v8 - Function_20080c0(v2[7], 0x29u));
  v2[6] = Function_20080c0(v2[7], 0x17u);
  Function_2007dec(v2[7], 0x17u, 8);
  v2[2] = v7 - 40;
  v2[1] = v9 + 40;
  v2[4] = 0;
  v2[3] = v2[1];
  v2[5] = 0;
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
  WIN_IN = WIN_IN & 0xFFC0 | 0x3F;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x3B;
  v10 = v2[3];
  v11 = v2[1];
  WIN0_X1 = (v2[2] + 80) & 0xFF | ((ushort)v2[2] << 8) & 0xFF00;
  WIN0_Y1 = (uchar)v10 | ((ushort)v11 << 8) & 0xFF00;
  return Function_22201e8(v2[9], (int)Function_222f464, (int)v2);
}

//----- (0222F700) --------------------------------------------------------
uint __fastcall Function_222f700(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  uint result;
  int v10;
  int v11;
  int v12;

  v2 = a2;
  v3 = a1;
  v10 = Function_2225ba0(v2 + 12, *(short *)(a2 + 232), *(short *)(v2 + 234), *(uint *)(v2 + 8));
  v11 = Function_2226274(v2 + 56, v4, v5, v6);
  v12 = 0;
  Function_200c7ec(*(int **)(v2 + 4));
  v7 = 0;
  v8 = (uint *)&v10;
  while ( 1 )
  {
    result = *v8;
    if ( *v8 == 1 )
      break;
    ++v7;
    ++v8;
    if ( v7 >= 3 )
    {
      Function_2007dec(*(uint *)(v2 + 8), 0, *(short *)(v2 + 232));
      Function_2007dec(*(uint *)(v2 + 8), 1u, *(short *)(v2 + 234) - 8);
      Function_2220220(*(uint *)v2, v3);
      return free(v2);
    }
  }
  return result;
}

//----- (0222F770) --------------------------------------------------------
uint *__fastcall Function_222f770(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int *v10;
  int v12[3];
  int v13;

  v1 = a1;
  v2 = Function_221fde4(a1);
  v3 = (int *)malloc(v2, 240);
  *v3 = v1;
  v3[1] = Function_22202ec(v1);
  v4 = Function_2220240(*v3);
  v5 = Function_22232fc(*v3, v4);
  v3[2] = v5;
  *((ushort *)v3 + 116) = Function_20080c0(v5, 0);
  *((ushort *)v3 + 117) = Function_20080c0(v3[2], 1u);
  *((ushort *)v3 + 118) = Function_20080c0(v3[2], 0x29u);
  *((ushort *)v3 + 117) += 8;
  Function_22263a4(v3 + 3, 1, 8);
  Function_22263a4(v12, 1, 10);
  v6 = Function_2220240(*v3);
  v7 = Function_2225964(*v3, v6);
  v8 = 0;
  v3[6] *= v7;
  v9 = v3;
  v13 *= v7;
  do
  {
    v10 = (int *)Function_22202c0(*v3, v8);
    v9[12] = (int)v10;
    Function_200d474(v10, 100);
    Function_200d460((int *)v9[12], 1);
    Function_200d810((int *)v9[12], 1);
    ++v8;
    ++v9;
  }
  while ( v8 < 2 );
  Function_22261c4(
    (int)(v3 + 14),
    v12,
    (int)Function_2225ae0,
    *((ushort *)v3 + 116),
    *((ushort *)v3 + 117) - *((ushort *)v3 + 118),
    2,
    2u,
    0,
    v3[12],
    v3[13],
    0,
    0);
  Function_2235780(*v3);
  return Function_22201e8(*v3, (int)Function_222f700, (int)v3);
}

//----- (0222F888) --------------------------------------------------------
int __fastcall Function_222f888(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 4);
  if ( (uint)result <= 6 )
    JUMPOUT(__CS__, *((short *)&off_222F8A4 + result) + 35846310);
  switch ( (uchar)result )
  {
    case 0:
      if ( Function_2225c14(a2 + 16) )
      {
        result = Function_2225a18(
                   (short *)(v2 + 16),
                   *(uint *)(v2 + 12),
                   *(short *)(v2 + 72),
                   *(short *)(v2 + 74));
      }
      else
      {
        Function_2225bc8(v2 + 16, *(short *)(v2 + 16), 0, 0, 0, 2u);
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 1:
      if ( Function_2225da0((uint *)(a2 + 52)) )
      {
        result = Function_2007dec(*(uint *)(v2 + 12), 9u, *(uint *)(v2 + 52));
      }
      else
      {
        Function_2225d50((uint *)(v2 + 52), *(uint *)(v2 + 52), 0, 4);
        ++*(uint *)(v2 + 4);
        result = 2;
        *(ushort *)(v2 + 8) = 2;
      }
      break;
    case 2:
      result = (short)--*(ushort *)(a2 + 8);
      if ( result < 0 )
      {
        result = *(uint *)(a2 + 4) + 1;
        *(uint *)(a2 + 4) = result;
      }
      break;
    case 3:
      if ( Function_2225c14(a2 + 16) )
      {
        result = Function_2225a18(
                   (short *)(v2 + 16),
                   *(uint *)(v2 + 12),
                   *(short *)(v2 + 72),
                   *(short *)(v2 + 74));
      }
      else
      {
        ++*(uint *)(v2 + 4);
        result = 32;
        *(ushort *)(v2 + 8) = 32;
      }
      break;
    case 4:
      result = (short)--*(ushort *)(a2 + 8);
      if ( result < 0 )
      {
        result = *(uint *)(a2 + 4) + 1;
        *(uint *)(a2 + 4) = result;
      }
      break;
    case 5:
      if ( Function_2225da0((uint *)(a2 + 52)) )
      {
        result = Function_2007dec(*(uint *)(v2 + 12), 9u, *(uint *)(v2 + 52));
      }
      else
      {
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 6:
      Function_2007dec(*(uint *)(a2 + 12), 0, *(short *)(a2 + 72));
      Function_2007dec(*(uint *)(v2 + 12), 1u, *(short *)(v2 + 74));
      Function_2007dec(*(uint *)(v2 + 12), 9u, 0);
      Function_2220220(*(uint *)v2, v3);
      result = free(v2);
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222F9E4) --------------------------------------------------------
uint *__fastcall Function_222f9e4(int a1)
{
  int v1;
  int v2;
  int *v3;
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

  v1 = a1;
  v2 = Function_221fde4(a1);
  v3 = (int *)malloc(v2, 240);
  v4 = (int)v3;
  *v3 = v1;
  v3[1] = 0;
  v5 = Function_2220240(*v3);
  v6 = Function_22232fc(*(uint *)v4, v5);
  *(uint *)(v4 + 12) = v6;
  *(ushort *)(v4 + 72) = Function_20080c0(v6, 0);
  *(ushort *)(v4 + 74) = Function_20080c0(*(uint *)(v4 + 12), 1u);
  Function_2225bc8(v4 + 16, 0, -32, 0, 0, 3u);
  Function_2225d50((uint *)(v4 + 52), 0, 3640, 8);
  v7 = Function_2220240(*(uint *)v4);
  v8 = Function_2225964(*(uint *)v4, v7);
  *(uint *)(v4 + 24) *= v8;
  *(uint *)(v4 + 60) *= v8;
  v9 = Function_2220248(*(uint *)v4);
  v10 = Function_2225964(*(uint *)v4, v9);
  v11 = Function_2220240(*(uint *)v4);
  v12 = Function_223525c(v1, v11);
  v13 = Function_2220248(*(uint *)v4);
  v14 = Function_223525c(v1, v13);
  if ( v12 != 3 || v14 != 3 )
  {
    if ( v12 != 4 || v14 != 4 )
    {
      Function_2007dec(*(uint *)(v4 + 12), 0xAu, 40 * v10);
      Function_2007dec(*(uint *)(v4 + 12), 0xBu, 40);
    }
    else
    {
      Function_2007dec(*(uint *)(v4 + 12), 0xAu, 40);
      Function_2007dec(*(uint *)(v4 + 12), 0xBu, 40);
    }
  }
  else
  {
    Function_2007dec(*(uint *)(v4 + 12), 0xAu, -40);
    Function_2007dec(*(uint *)(v4 + 12), 0xBu, 40);
  }
  return Function_22201e8(*(uint *)v4, (int)Function_222f888, v4);
}

//----- (0222FAFC) --------------------------------------------------------
char *__fastcall Function_222fafc(int **a1, uint *a2, int a3, short *a4, int a5)
{
  int **v5;
  int *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  uint *v13;
  int v14;

  v5 = a1;
  *a1 = Function_200ce6c(a2, a3, a4);
  v6 = (int *)(a5 + 4);
  v7 = (int *)(v5 + 1);
  v8 = 4;
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
  *v7 = *v6;
  v11 = *(uint *)(a5 + 44);
  v12 = v5 + 10;
  *v12 = *(uint *)(a5 + 40);
  v12[1] = v11;
  v13 = v5 + 12;
  v14 = *(uint *)(a5 + 52);
  *v13 = *(uint *)(a5 + 48);
  v13[1] = v14;
  v5[14] = *(int **)(a5 + 56);
  *((ushort *)v5 + 30) = *(ushort *)(a5 + 60);
  *((ushort *)v5 + 31) = *(ushort *)(a5 + 62);
  *((ushort *)v5 + 32) = *(ushort *)(a5 + 64);
  v5[17] = *(int **)(a5 + 68);
  v5[18] = 0;
  Function_200d3f4((uint *)*v5, 0);
  Function_200d474(*v5, 100);
  return Function_200d460(*v5, 1);
}

//----- (0222FB6C) --------------------------------------------------------
uint __fastcall Function_222fb6c(int *a1)
{
  return Function_200d0f4(*a1);
}

//----- (0222FB78) --------------------------------------------------------
uint __fastcall Function_222fb78(uint **a1, int a2)
{
  return Function_200d3f4(*a1, a2);
}

//----- (0222FB84) --------------------------------------------------------
int __fastcall Function_222fb84(int a1)
{
  int v1;
  int v3;
  int v4;

  v1 = a1;
  if ( !*(uint *)(a1 + 72) )
    return 1;
  v3 = *(uint *)(a1 + 68);
  if ( v3 && v3 != 1 )
  {
    if ( v3 == 2 )
      return 0;
  }
  else if ( Function_2225ae0(v1 + 4) )
  {
    Function_2225e0c((int *)(v1 + 40));
    *(uint *)(v1 + 28) = *(short *)(v1 + 60) + *(uint *)(v1 + 40);
    Function_200d4c4(
      *(int **)v1,
      (short)(*(ushort *)(v1 + 62) + *(ushort *)(v1 + 4)),
      (short)(*(ushort *)(v1 + 64) + *(ushort *)(v1 + 6)));
  }
  else
  {
    v4 = *(uint *)(v1 + 68);
    if ( v4 < 1 )
    {
      if ( !v4 )
        Function_2225a8c(
          (int *)(v1 + 4),
          *(uint *)(v1 + 12) & 0xFFFF,
          0x7FFFu,
          *(uint *)(v1 + 12) & 0xFFFF,
          0x7FFFu,
          *(uint *)(v1 + 16),
          *(uint *)(v1 + 24),
          1820);
      Function_2225df4((uint *)(v1 + 40), 0, 0xFFFF, -4096, *(uint *)(v1 + 8));
    }
    ++*(uint *)(v1 + 68);
  }
  return 1;
}

//----- (0222FC44) --------------------------------------------------------
uint __fastcall Function_222fc44(int *a1, int a2)
{
  int v2;
  int *v3;
  short v4;
  int v5;
  int v6;
  uint **v7;
  short v8;
  int v9;
  int *v10;
  uint result;
  int v12;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*(uint *)(a2 + 240) )
  {
    case 0u:
      Function_222fb84(a2 + 12);
      ++*(uint *)(v2 + 240);
      goto LABEL_23;
    case 1u:
      *(uint *)(a2 + 252) += 10;
      v4 = s32_div_f(*(uint *)(a2 + 252), 10);
      REG_BLDALPHA = ((31 - v4) << 8) | v4;
      if ( *(uint *)(v2 + 252) >= 310 )
      {
        Function_200d810(*(int **)(v2 + 12), 0);
        ++*(uint *)(v2 + 240);
      }
      goto LABEL_23;
    case 2u:
      REG_BLDALPHA = -1;
      ++*(uint *)(a2 + 240);
      goto LABEL_23;
    case 3u:
      if ( *(uint *)(a2 + 244) <= 0 )
      {
        *(uint *)(a2 + 76 * *(uint *)(a2 + 248) + 160) = 1;
        Function_200d3f4(*(uint **)(a2 + 76 * *(uint *)(a2 + 248) + 88), 1);
        ++*(uint *)(v2 + 248);
        *(uint *)(v2 + 244) = 8;
      }
      if ( *(uint *)(v2 + 248) < 2 )
        --*(uint *)(v2 + 244);
      v5 = Function_222fb84(v2 + 12);
      v6 = 0;
      v7 = (uint **)(v2 + 88);
      do
      {
        v12 = Function_222fb84((int)v7);
        if ( !v12 )
          Function_222fb78(v7, 0);
        ++v6;
        v5 |= v12;
        v7 += 19;
      }
      while ( v6 < 2 );
      if ( !v5 )
        ++*(uint *)(v2 + 240);
      goto LABEL_23;
    case 4u:
      Function_200d330(*(int **)(a2 + 12));
      if ( !Function_2021fd0(**(uint **)(v2 + 12)) )
      {
        Function_200d810(*(int **)(v2 + 12), 1);
        ++*(uint *)(v2 + 240);
      }
      goto LABEL_23;
    case 5u:
      *(uint *)(a2 + 252) -= 10;
      v8 = s32_div_f(*(uint *)(a2 + 252), 10);
      REG_BLDALPHA = ((31 - v8) << 8) | v8;
      if ( *(uint *)(v2 + 252) <= 0 )
        ++*(uint *)(v2 + 240);
      goto LABEL_23;
    case 6u:
      v9 = 0;
      v10 = (int *)(a2 + 88);
      do
      {
        Function_222fb6c(v10);
        ++v9;
        v10 += 19;
      }
      while ( v9 < 2 );
      Function_200d0f4(*(uint *)(v2 + 12));
      Function_2220220(*(uint *)v2, v3);
      result = free(v2);
      break;
    default:
LABEL_23:
      result = Function_200c7ec(*(int **)(v2 + 8));
      break;
  }
  return result;
}

//----- (0222FE30) --------------------------------------------------------
uint *__fastcall Function_222fe30(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int **v14;
  int v15;
  int *v16;
  char v18;
  short v19;
  int v20;

  v20 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = Function_221fde4(a1);
  v9 = (int *)malloc(v8, 256);
  *v9 = v4;
  v9[1] = v5;
  v9[2] = v6;
  v9[61] = 8;
  v9[62] = 0;
  v9[60] = 0;
  v10 = Function_2220240(v4);
  v11 = v10;
  v12 = Function_2225964(v4, v10);
  v9[3] = v7;
  v9[20] = 0;
  Function_2225a8c(v9 + 4, 0x3FFFu, 0xBFFFu, 0x3FFF, 0xBFFFu, -131072 * v12, -32768, 1820);
  Function_2225df4(v9 + 13, 0, 0xFFFF, -4096, v9[5]);
  *((ushort *)v9 + 36) = v9[10];
  v9[21] = 1;
  *((ushort *)v9 + 37) = Function_22258e0(v4, v11);
  *((ushort *)v9 + 38) = Function_22258e0(v4, v11);
  Function_200d4c4((int *)v9[3], *((short *)v9 + 37), *((short *)v9 + 38));
  Function_200d474((int *)v9[3], 100);
  Function_200d460((int *)v9[3], 1);
  Function_222329c((int *)&v18, *v9);
  *(ushort *)&v18 = *((ushort *)v9 + 37);
  v13 = 0;
  v19 = *((ushort *)v9 + 38);
  v14 = (int **)(v9 + 22);
  do
  {
    Function_222fafc(v14, (uint *)v9[1], v9[2], (short *)&v18, (int)(v9 + 3));
    ++v13;
    v14 += 19;
  }
  while ( v13 < 2 );
  v9[63] = 0;
  Function_2235780(*v9);
  Function_200d810((int *)v9[3], 1);
  v15 = 0;
  v16 = v9;
  do
  {
    Function_200d810((int *)v16[22], 1);
    ++v15;
    v16 += 19;
  }
  while ( v15 < 2 );
  return Function_22201e8(*v9, (int)Function_222fc44, (int)v9);
}

//----- (0222FF80) --------------------------------------------------------
int __fastcall Function_222ff80(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  uint v6;
  uint v7;

  v1 = a1;
  Function_2007dec(*(uint *)(a1 + 92), 0, *(short *)(a1 + 96) + *(short *)(a1 + 16));
  Function_2007dec(*(uint *)(v1 + 92), 1u, *(short *)(v1 + 98) + *(short *)(v1 + 18));
  Function_200d4c4(
    *(int **)(v1 + 88),
    (short)(*(ushort *)(v1 + 96) + *(ushort *)(v1 + 16)),
    (short)(*(ushort *)(v1 + 98) + *(ushort *)(v1 + 18) - *(ushort *)(v1 + 102)));
  Function_2225fa4((short *)(v1 + 52), (int *)&v7, (int *)&v6);
  v2 = fflt(*(short *)(v1 + 100));
  v3 = fmul(0x3DCCCCCDu, v2);
  v7 = fadd(v7, v3);
  Function_200d6e8(*(int **)(v1 + 88), v7, v6);
  v4 = *(short *)(v1 + 100);
  result = -v4;
  *(ushort *)(v1 + 100) = -(short)v4;
  return result;
}

//----- (02230018) --------------------------------------------------------
int __fastcall Function_2230018(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 8);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      Function_2226138((short *)(a2 + 16));
      v6 = Function_2225f6c(v2 + 52);
      Function_222ff80(v2);
      if ( !v6 )
      {
        Function_2007dec(*(uint *)(v2 + 92), 0, *(short *)(v2 + 96));
        Function_2007dec(*(uint *)(v2 + 92), 1u, *(short *)(v2 + 98));
        ++*(uint *)(v2 + 8);
      }
    }
    else if ( v4 == 2 )
    {
      Function_2220220(*(uint *)a2, v3);
      return free(v2);
    }
  }
  else
  {
    Function_2226138((short *)(a2 + 16));
    v5 = Function_2225f6c(v2 + 52);
    Function_222ff80(v2);
    if ( !v5 )
    {
      Function_2225ef0((short *)(v2 + 52), 12, 10, 15, 10, 10, 4);
      ++*(uint *)(v2 + 8);
    }
  }
  return Function_200c7ec(*(int **)(v2 + 4));
}

//----- (022300C4) --------------------------------------------------------
uint *__fastcall Function_22300c4(int a1)
{
  int v1;
  int v2;
  int *v3;
  int *v4;
  int v5;
  int v6;
  int *v7;

  v1 = a1;
  v2 = Function_221fde4(a1);
  v3 = (int *)malloc(v2, 104);
  v4 = v3;
  *v3 = v1;
  v3[1] = Function_22202ec(v1);
  v4[2] = 0;
  v4[3] = 0;
  v5 = Function_2220248(*v4);
  v6 = Function_22232fc(*v4, v5);
  v4[23] = v6;
  *((ushort *)v4 + 48) = Function_20080c0(v6, 0);
  *((ushort *)v4 + 49) = Function_20080c0(v4[23], 1u);
  *((ushort *)v4 + 51) = Function_20080c0(v4[23], 0x29u);
  Function_2226108((int)(v4 + 4), 2, 0, 1, 6);
  v7 = (int *)Function_22202c0(*v4, 0);
  v4[22] = (int)v7;
  Function_200d810(v7, 1);
  Function_200d6a4((uint *)v4[22], 2);
  Function_200d474((int *)v4[22], 100);
  Function_200d460((int *)v4[22], 1);
  Function_2225ef0((short *)v4 + 26, 10, 12, 10, 15, 10, 7);
  *((ushort *)v4 + 50) = 1;
  Function_2235780(*v4);
  return Function_22201e8(*v4, (int)Function_2230018, (int)v4);
}

//----- (02230194) --------------------------------------------------------
int __fastcall Function_2230194(int a1, uint *a2)
{
  return MIi_CpuClear32(0xFFFF * *(short *)(a1 + 16) & 0xFFFF | -65536 * *(short *)(a1 + 18), a2, 768);
}

//----- (022301B4) --------------------------------------------------------
int __fastcall Function_22301b4(int a1)
{
  short *v1;
  int v2;
  int v3;
  short v4;
  short v5;
  ushort v6;
  int v7;
  uint *v9;
  ushort v10;
  int v11;
  uint *v12;

  v1 = (short *)a1;
  v12 = (uint *)Function_22266c0(*(uint *)(a1 + 24));
  Function_2230194((int)v1, v12);
  v11 = Function_2225c14((int)(v1 + 14));
  v2 = v1[10];
  v3 = v1[11];
  if ( v2 <= v3 )
  {
    v9 = &v12[v2];
    do
    {
      v4 = *v9;
      v5 = *v9 >> 16;
      v6 = v5 - s32_div_f((v3 - v2) * v1[15], 100);
      v10 = v4 - s32_div_f((v1[10] + 40 - v2) * v1[14], 100);
      v7 = v2 - 1;
      if ( v2 - 1 < 0 )
        v7 = v2 + 191;
      v12[v7] = Function_22266e8(v10, v6);
      ++v2;
      ++v9;
      v3 = v1[11];
    }
    while ( v2 <= v3 );
  }
  return v11;
}

//----- (0223025C) --------------------------------------------------------
uint *__fastcall Function_223025c(int *a1, int *a2)
{
  int v2;
  int *v3;
  uint *result;
  int v5;
  int v6;
  int v7;
  int v8;
  uchar v9;
  uchar v10;
  uchar v11;
  int v12;
  int v13;
  uchar v14;
  int v15;
  uint *v16;
  int v17;
  int v18;
  uchar v19;

  v2 = (int)a2;
  v3 = a1;
  result = (uint *)a2[1];
  switch ( (uchar)result )
  {
    case 0:
      result = (uint *)Function_22301b4((int)a2);
      if ( !result )
      {
        ++*(uint *)(v2 + 4);
        Function_22357ec(*(uint *)v2, 31, 0);
        result = Function_2226424(v2 + 64, 31, 0, 0, 31, 0x10u);
      }
      break;
    case 1:
      Function_22301b4((int)a2);
      result = (uint *)Function_2226454(v2 + 64);
      if ( result )
      {
        ++*(uint *)(v2 + 4);
        Function_22266d4(*(uint *)(v2 + 24));
        result = 0;
        *(uint *)(v2 + 8) = 0;
      }
      break;
    case 2:
      v5 = Function_2220278(*a2);
      Function_2019184(v5, 2u, 0, -*(short *)(v2 + 16));
      v6 = Function_2220278(*(uint *)v2);
      Function_2019184(v6, 2u, 3u, -*(short *)(v2 + 18));
      result = (uint *)(*(uint *)(v2 + 8) + 1);
      *(uint *)(v2 + 8) = result;
      if ( (int)result > 8 )
      {
        Function_2226424(v2 + 64, 0, 31, 31, 0, 0x10u);
        result = (uint *)(*(uint *)(v2 + 4) + 1);
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 3:
      result = (uint *)Function_2226454((int)(a2 + 16));
      if ( result )
      {
        Function_2007dec(*(uint *)(v2 + 12), 6u, 0);
        result = (uint *)(*(uint *)(v2 + 4) + 1);
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 4:
      Function_222669c(a2[6]);
      v9 = Function_22233b0(*(uint *)v2, 1, v7, v8);
      v10 = Function_2223428(*(uint *)v2, 1);
      Function_2019060(v9, v10);
      v11 = Function_222339c(*(uint *)v2);
      Function_2019060(0, v11);
      v14 = Function_22233b0(*(uint *)v2, 1, v12, v13);
      v15 = Function_221fde4(*(uint *)v2);
      Function_2019690(v14, 0x4000, 0, v15);
      v16 = (uint *)Function_2220278(*(uint *)v2);
      v19 = Function_22233b0(*(uint *)v2, 1, v17, v18);
      Function_2019ebc(v16, v19);
      Function_2220220(*(uint *)v2, v3);
      result = (uint *)free(v2);
      break;
    default:
      return result;
  }
  return result;
}

//----- (022303D0) --------------------------------------------------------
uint *__fastcall Function_22303d0(int a1)
{
  int v1;
  int v2;
  int *v3;
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
  uchar v17;
  uchar v18;
  int v19;
  int *v21;

  v1 = a1;
  v2 = Function_221fde4(a1);
  v3 = (int *)malloc(v2, 104);
  Call_FillMemWithValue(v3, 0, 0x68u);
  *v3 = v1;
  v21 = Function_22201e8(v1, (int)Function_223025c, (int)v3);
  v4 = Function_2220240(*v3);
  v5 = Function_22232fc(*v3, v4);
  v3[3] = v5;
  *((ushort *)v3 + 8) = Function_20080c0(v5, 0);
  *((ushort *)v3 + 9) = Function_20080c0(v3[3], 1u);
  *((ushort *)v3 + 9) -= Function_20080c0(v3[3], 0x29u);
  *((ushort *)v3 + 8) -= 40;
  *((ushort *)v3 + 9) -= 40;
  Function_2007dec(v3[3], 6u, 1);
  v6 = Function_2220240(*v3);
  v9 = Function_2225964(*v3, v6);
  *((ushort *)v3 + 10) = *((ushort *)v3 + 9) - 8;
  *((ushort *)v3 + 11) = *((ushort *)v3 + 9) + 88;
  if ( *((short *)v3 + 10) < 0 )
    *((ushort *)v3 + 10) = 0;
  if ( *((short *)v3 + 11) > 192 )
    *((ushort *)v3 + 11) = 192;
  v10 = Function_22233ec(v1, 1, v7, v8);
  v11 = Function_201ced4((int)v21);
  v12 = Function_22266e8(*((ushort *)v3 + 8), *((ushort *)v3 + 9));
  v13 = Function_221fde4(v1);
  v3[6] = (int)Function_222662c(*((ushort *)v3 + 10), *((ushort *)v3 + 11), 910, v9 << 15, 80, v10, v11 + 1, v12, v13);
  Function_2225bc8((int)(v3 + 7), 0, 80, 0, 40, 0x18u);
  v3[9] *= v9;
  v14 = Function_2220240(v1);
  if ( (uint)(Function_2235254(*v3, v14) - 3) <= 1 )
  {
    v17 = Function_22233b0(*v3, 1, v15, v16);
    v18 = Function_222339c(*v3);
    Function_2019060(v17, v18);
    v19 = Function_222339c(*v3);
    Function_2019060(0, (v19 + 1) & 0xFF);
  }
  return Function_223025c(v21, v3);
}

//----- (02230540) --------------------------------------------------------
uint __fastcall Function_2230540(int *a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint result;
  uint v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = (int)a2;
  switch ( (uchar)a2[2] )
  {
    case 0u:
      v5 = Function_2225dc8(a2 + 14);
      REG_BLDALPHA = *(ushort *)(v4 + 56) | ((31 - *(ushort *)(v4 + 56)) << 8);
      if ( !v5 )
      {
        ++*(uint *)(v4 + 8);
        *(uint *)(v4 + 12) = 0;
      }
      goto LABEL_11;
    case 1u:
      v6 = a2[3] + 1;
      a2[3] = v6;
      if ( v6 > 32 )
        ++a2[2];
      goto LABEL_11;
    case 2u:
      v7 = Function_2225eb8((int)(a2 + 5));
      Function_2225fa4((short *)(v4 + 20), &v10, (int *)&v9);
      if ( *(uint *)(v4 + 76) == 1 )
        v10 = fsub(0, v10);
      Function_200d6e8(*(int **)(v4 + 16), v10, v9);
      if ( !v7 )
      {
        Function_200d3f4(*(uint **)(v4 + 16), 0);
        ++*(uint *)(v4 + 8);
      }
      goto LABEL_11;
    case 3u:
      Function_2220220(*a2, a1);
      result = free(v4);
      break;
    default:
LABEL_11:
      result = Function_200c7ec(*(int **)(v4 + 4));
      break;
  }
  return result;
}

//----- (02230600) --------------------------------------------------------
int __fastcall Function_2230600(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 4);
  if ( result )
  {
    if ( result == 1 )
    {
      Function_2226138((short *)(a2 + 20));
      Function_2225a18(
        (short *)(v2 + 20),
        *(uint *)(v2 + 8),
        *(short *)(v2 + 56),
        *(short *)(v2 + 58));
      if ( *(uint *)(v2 + 16) == 1 )
        Function_22259dc(
          (ushort *)(v2 + 20),
          *(int **)(v2 + 12),
          *(ushort *)(v2 + 56),
          *(ushort *)(v2 + 58) - *(ushort *)(v2 + 60));
      result = Function_20087b4(*(uint *)(v2 + 8));
      if ( !result )
      {
        Function_2007dec(*(uint *)(v2 + 8), 0, *(short *)(v2 + 56));
        Function_2007dec(*(uint *)(v2 + 8), 1u, *(short *)(v2 + 58));
        if ( *(uint *)(v2 + 16) == 1 )
        {
          v7 = Function_2220248(*(uint *)v2);
          if ( !Function_222337c(*(uint *)v2, v7) )
            Function_2007dec(*(uint *)(v2 + 8), 6u, 0);
          Function_200d4c4(
            *(int **)(v2 + 12),
            *(short *)(v2 + 56),
            (short)(*(ushort *)(v2 + 58) - *(ushort *)(v2 + 60)));
        }
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
    }
    else if ( result == 2 )
    {
      Function_2220220(*(uint *)a2, v3);
      result = free(v2);
    }
  }
  else
  {
    Function_2226138((short *)(a2 + 20));
    Function_2225a18(
      (short *)(v2 + 20),
      *(uint *)(v2 + 8),
      *(short *)(v2 + 56),
      *(short *)(v2 + 58));
    if ( *(uint *)(v2 + 16) == 1 )
      Function_22259dc(
        (ushort *)(v2 + 20),
        *(int **)(v2 + 12),
        *(ushort *)(v2 + 56),
        *(ushort *)(v2 + 58) - *(ushort *)(v2 + 60));
    result = Function_20087b4(*(uint *)(v2 + 8));
    if ( !result )
    {
      Function_20086fc(*(uint *)(v2 + 8), 16, 0, 0, 0);
      if ( *(uint *)(v2 + 16) == 1 )
      {
        v5 = 1 << Function_2225950(*(int **)(v2 + 12));
        v6 = Function_222332c(*(uint *)v2);
        Function_2003178(v6, 4, (ushort)v5);
      }
      result = *(uint *)(v2 + 4) + 1;
      *(uint *)(v2 + 4) = result;
    }
  }
  return result;
}

//----- (02230754) --------------------------------------------------------
uint *__fastcall Function_2230754(int a1)
{
  int v1;
  int v2;
  int *v3;
  int *v4;

  v1 = a1;
  v2 = Function_221fde4(a1);
  v3 = (int *)malloc(v2, 80);
  Call_FillMemWithValue(v3, 0, 0x50u);
  *v3 = v1;
  v3[1] = Function_22202ec(v1);
  v3[19] = Function_221fdd4(v1);
  v3[4] = Function_22202c0(*v3, 0);
  Function_2225e68((short *)v3 + 10, 14, 10, 10, 8);
  Function_2225d78(v3 + 14, 0, 16, 8);
  Function_200d810((int *)v3[4], 1);
  Function_2235780(*v3);
  Function_200d6a4((uint *)v3[4], 2);
  v4 = (int *)v3[4];
  if ( v3[19] == 1 )
    Function_200d6e8(v4, 0xBFB33333, 0x3FB33333u);
  else
    Function_200d6e8(v4, 0x3FB33333u, 0x3FB33333u);
  Function_200d474((int *)v3[4], 100);
  Function_200d460((int *)v3[4], 1);
  return Function_22201e8(*v3, (int)Function_2230540, (int)v3);
}

//----- (02230804) --------------------------------------------------------
uint *__fastcall Function_2230804(int a1)
{
  int v1;
  int v2;
  int *v3;
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

  v1 = a1;
  v2 = Function_221fde4(a1);
  v3 = (int *)malloc(v2, 64);
  Call_FillMemWithValue(v3, 0, 0x40u);
  *v3 = v1;
  v4 = Function_2220248(v1);
  v5 = Function_22232fc(*v3, v4);
  v3[2] = v5;
  *((ushort *)v3 + 28) = Function_20080c0(v5, 0);
  *((ushort *)v3 + 29) = Function_20080c0(v3[2], 1u);
  v3[15] = Function_20080c0(v3[2], 0x29u);
  Function_2226108((int)(v3 + 5), 4, 0, 1, 4);
  v6 = Function_2220248(*v3);
  *((ushort *)v3 + 10) += Function_2225964(*v3, v6);
  Function_20086fc(v3[2], 0, 16, 0, 0);
  v3[3] = Function_22202c0(*v3, 1);
  v7 = Function_2220240(*v3);
  v8 = Function_2235254(*v3, v7);
  v9 = Function_2220248(*v3);
  v10 = Function_2235254(*v3, v9);
  if ( v8 == 2 && v10 == 4 || v8 == 5 && v10 == 3 )
  {
    v11 = 1 << Function_2225950((int *)v3[3]);
    v12 = Function_222332c(*v3);
    Function_2003178(v12, 4, (ushort)v11);
    v3[4] = 1;
    v13 = Function_2220248(*v3);
    if ( !Function_222337c(*v3, v13) )
      Function_2007dec(v3[2], 6u, 1);
  }
  return Function_22201e8(*v3, (int)Function_2230600, (int)v3);
}

//----- (02230910) --------------------------------------------------------
int __fastcall Function_2230910(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  switch ( (uchar)a1[2] )
  {
    case 0u:
      if ( Function_2226454((int)(a1 + 7)) == 1 )
      {
        ++v1[2];
        v1[17] = 32;
      }
      break;
    case 1u:
      v3 = a1[17] - 1;
      v1[17] = v3;
      if ( v3 < 0 )
      {
        ++v1[2];
        Function_2226424((int)(v1 + 7), 8, 0, 8, 16, 0x18u);
      }
      break;
    case 2u:
      if ( Function_2226454((int)(a1 + 7)) == 1 )
      {
        ++v1[2];
        Function_222669c(v1[5]);
      }
      break;
    case 3u:
      v2 = 1;
      break;
    default:
      return v2;
  }
  return v2;
}

//----- (02230994) --------------------------------------------------------
int __fastcall Function_2230994(int *a1, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int result;
  int v7;
  uchar v8;
  uchar v9;
  uchar v10;
  int v11;
  int v12;
  int v13;
  uchar v14;
  int v15;
  uint *v16;
  int v17;
  int v18;
  uchar v19;

  v4 = (int)a2;
  v5 = a1;
  result = a2[1];
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_2230910(a2);
      if ( result )
      {
        result = *(uint *)(v4 + 4) + 1;
        *(uint *)(v4 + 4) = result;
      }
    }
    else if ( result == 2 )
    {
      v8 = Function_22233b0(*a2, 1, a3, a4);
      v9 = Function_2223428(*(uint *)v4, 1);
      Function_2019060(v8, v9);
      v10 = Function_222339c(*(uint *)v4);
      Function_2019060(0, v10);
      v11 = Function_2220248(*(uint *)v4);
      if ( !Function_222337c(*(uint *)v4, v11) )
        Function_2007dec(*(uint *)(v4 + 16), 6u, 0);
      v14 = Function_22233b0(*(uint *)v4, 1, v12, v13);
      v15 = Function_221fde4(*(uint *)v4);
      Function_2019690(v14, 0x4000, 0, v15);
      v16 = (uint *)Function_2220278(*(uint *)v4);
      v19 = Function_22233b0(*(uint *)v4, 1, v17, v18);
      Function_2019ebc(v16, v19);
      Function_2220220(*(uint *)v4, v5);
      result = free(v4);
    }
  }
  else
  {
    Function_2230910(a2);
    if ( Function_200d408(*(int **)(v4 + 72)) == 1 )
    {
      v7 = Function_2220248(*(uint *)v4);
      if ( !Function_222337c(*(uint *)v4, v7) )
        Function_2007dec(*(uint *)(v4 + 16), 6u, 1);
    }
    result = *(uint *)(v4 + 4) + 1;
    *(uint *)(v4 + 4) = result;
  }
  return result;
}

//----- (02230A8C) --------------------------------------------------------
uint *__fastcall Function_2230a8c(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  int v5;
  short v6;
  short v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uchar v15;
  uchar v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v1 = a1;
  v2 = (int *)Function_2235e50();
  v3 = v2;
  *v2 = v1;
  v2[6] = Function_222332c(v1);
  Function_22357ec(*v3, 0, 16);
  Function_2226424((int)(v3 + 7), 0, 8, 16, 8, 0x18u);
  v4 = Function_2220248(*v3);
  v5 = Function_22232fc(*v3, v4);
  v3[4] = v5;
  v6 = Function_20080c0(v5, 0);
  v7 = Function_20080c0(v3[4], 1u);
  v8 = (short)(v7 - Function_20080c0(v3[4], 0x29u) - 40);
  v3[18] = Function_22202c0(*v3, 0);
  v9 = Function_2220248(*v3);
  v10 = Function_2235254(*v3, v9);
  if ( v10 != 5 && v10 != 2 )
  {
    v15 = Function_22233b0(*v3, 1, v11, v12);
    v16 = Function_222339c(*v3);
    Function_2019060(v15, v16);
    v17 = Function_222339c(*v3);
    Function_2019060(0, (v17 + 1) & 0xFF);
    Function_200d3f4((uint *)v3[18], 0);
  }
  else
  {
    Function_200d3f4((uint *)v3[18], 1);
    Function_200d460((int *)v3[18], 2);
  }
  v18 = Function_22233ec(v1, 1, v13, v14);
  v19 = Function_22266e8(0xFFFF * (short)(v6 - 40) & 0xFFFF, 0xFFFF * v8 & 0xFFFF);
  v20 = Function_221fde4(v1);
  v3[5] = (int)Function_222662c(v8, v8 + 80, 910, 20480, 100, v18, 0, v19, v20);
  Function_2003a2c(v3[6], 0, 0x100u, 8u, 0);
  return Function_22201e8(*v3, (int)Function_2230994, (int)v3);
}

//----- (02230BE0) --------------------------------------------------------
uint __fastcall Function_2230be0(int *a1, uint *a2)
{
  int v2;
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  uint result;
  uint v13;
  uint v14;

  v2 = (int)a2;
  v3 = a1;
  switch ( (uchar)a2[3] )
  {
    case 0u:
      if ( Function_2225eb8((int)(a2 + 5)) == 1 )
      {
        Function_2225fa4((short *)(v2 + 20), (int *)&v14, (int *)&v13);
        v4 = fflt(*(uint *)(v2 + 84));
        v5 = fmul(v14, v4);
        Function_200d6e8(*(int **)(v2 + 16), v5, v13);
      }
      else
      {
        ++*(uint *)(v2 + 12);
        *(uint *)(v2 + 76) = 5;
        Function_2225e68((short *)(v2 + 20), 10, 10, 1, 8);
      }
      goto LABEL_13;
    case 1u:
      v6 = Function_2225da0(a2 + 14);
      Function_200d79c(*(int **)(v2 + 16), *(uint *)(v2 + 56));
      if ( !v6 )
      {
        v7 = *(uint *)(v2 + 76);
        if ( v7 <= 0 )
        {
          ++*(uint *)(v2 + 12);
        }
        else
        {
          *(uint *)(v2 + 76) = v7 - 1;
          v8 = *(uint *)(v2 + 56);
          v9 = *(uint *)(v2 + 80);
          *(uint *)(v2 + 80) = v8;
          Function_2225d50((uint *)(v2 + 56), v8, v9, 4);
        }
      }
      goto LABEL_13;
    case 2u:
      if ( Function_2225eb8((int)(a2 + 5)) == 1 )
      {
        Function_2225fa4((short *)(v2 + 20), (int *)&v14, (int *)&v13);
        v10 = fflt(*(uint *)(v2 + 84));
        v11 = fmul(v14, v10);
        Function_200d6e8(*(int **)(v2 + 16), v11, v13);
      }
      else
      {
        ++*(uint *)(v2 + 12);
      }
      goto LABEL_13;
    case 3u:
      Function_200d0f4(a2[4]);
      Function_2220220(*(uint *)v2, v3);
      result = free(v2);
      break;
    default:
LABEL_13:
      result = Function_200c7ec(*(int **)(v2 + 8));
      break;
  }
  return result;
}

//----- (02230CEC) --------------------------------------------------------
uint *__fastcall Function_2230cec(int a1, int a2, int a3, uint *a4)
{
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
  bool v16;
  int *v17;
  int v18;
  uint *v20;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v20 = a4;
  v7 = Function_2235e50();
  *(uint *)v7 = v5;
  *(uint *)(v7 + 4) = v4;
  *(uint *)(v7 + 8) = v6;
  v8 = Function_2220240(*(uint *)v7);
  v9 = Function_2225964(*(uint *)v7, v8);
  if ( Function_22234a8(*(uint *)v7, 0) == 1 )
  {
    *(uint *)(v7 + 84) = -1;
    v10 = -v9;
  }
  else
  {
    *(uint *)(v7 + 84) = 1;
    v10 = v9;
  }
  v11 = Function_2220240(*(uint *)v7);
  v12 = Function_22258e0(v5, v11);
  v13 = Function_2220240(*(uint *)v7);
  v14 = Function_22258e0(v5, v13);
  *(uint *)(v7 + 16) = v20;
  Function_200d6a4(v20, 2);
  Function_200d6e8(*(int **)(v7 + 16), 0x3F800000u, 0x3F800000u);
  Function_200d4c4(*(int **)(v7 + 16), v12, v14);
  Function_200d5dc(*(uint ***)(v7 + 16), (short)(40 * v9), 0);
  Function_200d474(*(int **)(v7 + 16), 100);
  Function_200d460(*(int **)(v7 + 16), 1);
  Function_200d7e0(*(uint ***)(v7 + 16), (short)(-12 * v10), 12);
  v15 = Function_2220240(v5);
  v16 = Function_223525c(v5, v15) == 4;
  v17 = *(int **)(v7 + 16);
  if ( v16 )
    Function_200d364(v17, 1u);
  else
    Function_200d364(v17, 0);
  Function_2225e68((short *)(v7 + 20), 1, 10, 10, 8);
  if ( v10 < 0 )
  {
    Function_2225d50((uint *)(v7 + 56), 0, 7281, 4);
    v18 = 0;
  }
  else
  {
    Function_2225d50((uint *)(v7 + 56), 65352, 58253, 4);
    v18 = 65352;
  }
  *(uint *)(v7 + 80) = v18;
  return Function_22201e8(*(uint *)v7, (int)Function_2230be0, v7);
}

//----- (02230E24) --------------------------------------------------------
uint __fastcall Function_2230e24(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;

  v5 = a1;
  *(uint *)a1 = a2;
  v6 = a4;
  v7 = a3;
  Function_2225e68((short *)(a1 + 4), 10, 10, 8, 8);
  *(uint *)(v5 + 44) = 3;
  *(uint *)(v5 + 48) = 8;
  *(uint *)(v5 + 52) = 10;
  *(uint *)(v5 + 40) = a5;
  Function_200d4c4(*(int **)v5, v7, v6);
  Function_200d4c4(*(int **)v5, v7, v6);
  Function_200d6a4(*(uint **)v5, 2);
  Function_200d474(*(int **)v5, 100);
  Function_200d460(*(int **)v5, 1);
  if ( a5 )
    Function_200d6e8(*(int **)v5, 0xBF800000, 0x3F800000u);
  return Function_200d3f4(*(uint **)v5, 0);
}

//----- (02230E9C) --------------------------------------------------------
uint __fastcall Function_2230e9c(int *a1)
{
  return Function_200d0f4(*a1);
}

//----- (02230EA8) --------------------------------------------------------
uint __fastcall Function_2230ea8(uint **a1)
{
  uint **v1;

  v1 = a1;
  Function_200d3f4(*a1, 1);
  return Function_200d390(*v1, 1);
}

//----- (02230EC0) --------------------------------------------------------
int __fastcall Function_2230ec0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  char v9;
  uint v10;
  int v11;

  v11 = a4;
  v4 = a1;
  if ( Function_2225eb8(a1 + 4) == 1 )
  {
    Function_2225fa4((short *)(v4 + 4), (int *)&v10, (int *)&v9);
    if ( *(uint *)(v4 + 40) )
    {
      v5 = fsub(0, v10);
      Function_200d6e8(*(int **)v4, v5, 0x3F800000u);
    }
    else
    {
      Function_200d6e8(*(int **)v4, v10, 0x3F800000u);
    }
  }
  else
  {
    v6 = *(uint *)(v4 + 44);
    if ( v6 <= 0 )
      return 0;
    *(uint *)(v4 + 44) = v6 - 1;
    Function_2225e68(
      (short *)(v4 + 4),
      (short)*(uint *)(v4 + 48),
      10,
      (short)*(uint *)(v4 + 52),
      8);
    v7 = *(uint *)(v4 + 48);
    *(uint *)(v4 + 48) = *(uint *)(v4 + 52);
    *(uint *)(v4 + 52) = v7;
  }
  return 1;
}

//----- (02230F3C) --------------------------------------------------------
uint __fastcall Function_2230f3c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  uint result;

  v4 = a2;
  v5 = a1;
  switch ( (uchar)*(uint *)(a2 + 12) )
  {
    case 0u:
      if ( *(uint *)(a2 + 16) >= 4 )
      {
        *(uint *)(a2 + 16) = 0;
        Function_2230ea8((uint **)(a2 + 68 + 56 * *(uint *)(a2 + 20)));
        v6 = *(uint *)(v4 + 20) + 1;
        *(uint *)(v4 + 20) = v6;
        if ( v6 >= 4 )
          ++*(uint *)(v4 + 12);
      }
      ++*(uint *)(v4 + 16);
      goto LABEL_15;
    case 1u:
      if ( !Function_222619c(
              (short *)(a2 + 32),
              *(short *)(a2 + 28),
              *(short *)(a2 + 30),
              *(uint *)(a2 + 24)) )
        ++*(uint *)(v4 + 12);
      goto LABEL_15;
    case 2u:
      v7 = 0;
      v8 = a2 + 68;
      do
      {
        v9 = Function_2230ec0(v8, a2, a3, a4);
        ++v7;
        v8 += 56;
      }
      while ( v7 < 4 );
      if ( !v9 )
        ++*(uint *)(v4 + 12);
      goto LABEL_15;
    case 3u:
      Function_2007dec(*(uint *)(a2 + 24), 0, *(short *)(a2 + 28));
      Function_2007dec(*(uint *)(v4 + 24), 1u, *(short *)(v4 + 30));
      v10 = 0;
      v11 = (int *)(v4 + 68);
      do
      {
        Function_2230e9c(v11);
        ++v10;
        v11 += 14;
      }
      while ( v10 < 4 );
      Function_2220220(*(uint *)v4, v5);
      result = free(v4);
      break;
    default:
LABEL_15:
      result = Function_200c7ec(*(int **)(v4 + 8));
      break;
  }
  return result;
}

//----- (02231010) --------------------------------------------------------
uint *__fastcall Function_2231010(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  int v9;
  int v10;
  int *v11;
  uint *v13;
  int v14;
  int v15;
  int v16;
  int v17[13];
  int v18;

  v18 = a4;
  v13 = a2;
  v4 = a1;
  v14 = a3;
  v15 = a4;
  v5 = Function_2235e50();
  *(uint *)v5 = v4;
  *(uint *)(v5 + 4) = v13;
  *(uint *)(v5 + 8) = v14;
  v6 = Function_2220248(v4);
  v7 = Function_22232fc(*(uint *)v5, v6);
  *(uint *)(v5 + 24) = v7;
  *(ushort *)(v5 + 28) = Function_20080c0(v7, 0);
  *(ushort *)(v5 + 30) = Function_20080c0(*(uint *)(v5 + 24), 1u);
  Function_2226108(v5 + 32, 4, 0, 1, 1);
  v8 = *(ushort *)(v5 + 30) + 16;
  v9 = 0;
  Function_222329c(v17, *(uint *)v5);
  v16 = 0;
  v10 = v5 + 68;
  do
  {
    if ( v16 )
    {
      v11 = Function_200ce6c(v13, v14, (short *)v17);
      Function_2230e24(v10, (int)v11, *(short *)(v5 + 28), v8, v9);
    }
    else
    {
      Function_2230e24(v10, v15, *(short *)(v5 + 28), v8, v9);
    }
    v9 ^= 1u;
    v8 -= 10;
    v10 += 56;
    ++v16;
  }
  while ( v16 < 4 );
  return Function_22201e8(*(uint *)v5, (int)Function_2230f3c, v5);
}

//----- (022310D4) --------------------------------------------------------
int __fastcall Function_22310d4(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 12);
  if ( v4 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_22310F0 + v4) + 35852530);
  switch ( (uchar)v4 )
  {
    case 0:
      if ( Function_2225c14(a2 + 24) )
        return Function_2225a18(
                 (short *)(v2 + 24),
                 *(uint *)(v2 + 16),
                 *(short *)(v2 + 20),
                 *(short *)(v2 + 22));
      Function_2225bc8(v2 + 24, *(short *)(v2 + 24), 0, 0, 0, 2u);
      result = *(uint *)(v2 + 12) + 1;
      *(uint *)(v2 + 12) = result;
      return result;
    case 1:
      if ( Function_2225c14(a2 + 24) )
        return Function_2225a18(
                 (short *)(v2 + 24),
                 *(uint *)(v2 + 16),
                 *(short *)(v2 + 20),
                 *(short *)(v2 + 22));
      Function_2007dec(*(uint *)(v2 + 16), 0, *(short *)(v2 + 20));
      Function_2007dec(*(uint *)(v2 + 16), 1u, *(short *)(v2 + 22));
      Function_2225bc8(v2 + 24, 0, (short)(-32 * *(uint *)(v2 + 60)), 0, 0, 4u);
      result = *(uint *)(v2 + 12) + 1;
      *(uint *)(v2 + 12) = result;
      return result;
    case 2:
      if ( !Function_2225d2c((ushort *)(a2 + 76), (ushort *)(a2 + 112), *(int **)(a2 + 72)) )
      {
        Function_2225c98(
          v2 + 76,
          v2 + 112,
          *(short *)(v2 + 68),
          *(short *)(v2 + 20),
          *(ushort *)(v2 + 70),
          *(ushort *)(v2 + 22),
          0xAu,
          -131072);
        ++*(uint *)(v2 + 12);
      }
      goto LABEL_23;
    case 3:
      if ( !Function_2225d2c((ushort *)(a2 + 76), (ushort *)(a2 + 112), *(int **)(a2 + 72)) )
      {
        Function_200d3f4(*(uint **)(v2 + 72), 0);
        ++*(uint *)(v2 + 12);
      }
      goto LABEL_23;
    case 4:
      if ( Function_2225c14(a2 + 24) )
      {
        Function_2225a18(
          (short *)(v2 + 24),
          *(uint *)(v2 + 16),
          *(short *)(v2 + 20),
          *(short *)(v2 + 22));
      }
      else
      {
        Function_2225bc8(v2 + 24, *(short *)(v2 + 24), 0, 0, 0, 4u);
        ++*(uint *)(v2 + 12);
      }
      goto LABEL_23;
    case 5:
      if ( Function_2225c14(a2 + 24) )
      {
        Function_2225a18(
          (short *)(v2 + 24),
          *(uint *)(v2 + 16),
          *(short *)(v2 + 20),
          *(short *)(v2 + 22));
      }
      else
      {
        Function_2007dec(*(uint *)(v2 + 16), 0, *(short *)(v2 + 20));
        Function_2007dec(*(uint *)(v2 + 16), 1u, *(short *)(v2 + 22));
        ++*(uint *)(v2 + 12);
      }
      goto LABEL_23;
    case 6:
      Function_200d0f4(*(uint *)(a2 + 72));
      Function_2220220(*(uint *)v2, v3);
      result = free(v2);
      break;
    default:
LABEL_23:
      result = Function_200c7ec(*(int **)(v2 + 8));
      break;
  }
  return result;
}

//----- (022312A4) --------------------------------------------------------
uint *__fastcall Function_22312a4(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = (int *)Function_2235e50();
  v9 = (int)v8;
  *v8 = v5;
  v8[1] = v4;
  v8[2] = v6;
  v10 = Function_2220240(*v8);
  *(uint *)(v9 + 60) = Function_2225964(*(uint *)v9, v10);
  v11 = Function_2220240(v5);
  v12 = Function_22232fc(*(uint *)v9, v11);
  *(uint *)(v9 + 16) = v12;
  *(ushort *)(v9 + 20) = Function_20080c0(v12, 0);
  *(ushort *)(v9 + 22) = Function_20080c0(*(uint *)(v9 + 16), 1u);
  Function_2225bc8(v9 + 24, 0, (short)(-16 * *(uint *)(v9 + 60)), 0, 0, 4u);
  v13 = Function_2220248(v5);
  v14 = Function_22232fc(*(uint *)v9, v13);
  *(uint *)(v9 + 64) = v14;
  *(ushort *)(v9 + 68) = Function_20080c0(v14, 0);
  *(ushort *)(v9 + 70) = Function_20080c0(*(uint *)(v9 + 64), 1u);
  *(uint *)(v9 + 72) = v7;
  Function_200d390(v7, 1);
  Function_200d474(*(int **)(v9 + 72), 100);
  Function_200d460(*(int **)(v9 + 72), 1);
  Function_2225c98(
    v9 + 76,
    v9 + 112,
    *(short *)(v9 + 20),
    *(short *)(v9 + 68),
    *(ushort *)(v9 + 22),
    *(ushort *)(v9 + 70),
    0xAu,
    0x20000);
  return Function_22201e8(*(uint *)v9, (int)Function_22310d4, v9);
}

//----- (02231390) --------------------------------------------------------
uint __fastcall Function_2231390(int *a1, int a2)
{
  int v2;
  int v3;
  uint result;

  v2 = a2;
  switch ( (uchar)*(uint *)(a2 + 8) )
  {
    case 0u:
      if ( !Function_2225b78(
              a2 + 28,
              *(ushort *)(a2 + 24),
              *(ushort *)(a2 + 26) - *(ushort *)(a2 + 104),
              *(int **)(a2 + 20)) )
      {
        ++*(uint *)(v2 + 8);
        *(uint *)(v2 + 12) = 16;
      }
      goto LABEL_9;
    case 1u:
      v3 = *(uint *)(a2 + 12) - 1;
      *(uint *)(a2 + 12) = v3;
      if ( v3 < 0 )
      {
        ++*(uint *)(a2 + 8);
        Function_2226424(a2 + 64, 0, 16, 16, 0, 0x20u);
      }
      goto LABEL_9;
    case 2u:
      if ( Function_2226454(a2 + 64) )
      {
        Function_200d3f4(*(uint **)(v2 + 20), 1);
        Function_2007dec(*(uint *)(v2 + 16), 6u, 0);
        ++*(uint *)(v2 + 8);
      }
      goto LABEL_9;
    case 3u:
      Function_2220220(*(uint *)a2, a1);
      result = free(v2);
      break;
    default:
LABEL_9:
      result = Function_200c7ec(*(int **)(v2 + 4));
      break;
  }
  return result;
}

//----- (02231444) --------------------------------------------------------
int __fastcall Function_2231444(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;

  v1 = a1;
  v2 = (int *)Function_2235e50();
  v3 = v2;
  *v2 = v1;
  v2[1] = Function_22202ec(v1);
  v4 = Function_2220240(*v3);
  v5 = Function_2225964(*v3, v4);
  v6 = Function_2220240(v1);
  v7 = Function_22232fc(*v3, v6);
  v3[4] = v7;
  *((ushort *)v3 + 12) = Function_20080c0(v7, 0);
  *((ushort *)v3 + 13) = Function_20080c0(v3[4], 1u);
  *((ushort *)v3 + 52) = Function_20080c0(v3[4], 0x29u);
  *((ushort *)v3 + 13) += 8;
  v8 = (int *)Function_22202c0(*v3, 0);
  v3[5] = (int)v8;
  Function_200d810(v8, 1);
  Function_2007dec(v3[4], 6u, 1);
  Function_22263a4(v3 + 7, 2, 16);
  Function_2235780(*v3);
  Function_2226424((int)(v3 + 16), 16, 0, 0, 16, 0x20u);
  v3[10] *= v5;
  Function_22201e8(*v3, (int)Function_2231390, (int)v3);
  return Function_200c7ec((int *)v3[1]);
}

//----- (02231508) --------------------------------------------------------
int __fastcall Function_2231508(int a1)
{
  int v1;
  int v2;
  int v3;
  bool v4;
  int v5;

  v1 = a1;
  v2 = *(uint *)(a1 + 56);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v4 = Function_2225eb8(v1 + 20) == 0;
      v5 = *(uint *)(v1 + 16);
      if ( v4 )
      {
        Function_2007dec(v5, 0xDu, 256);
        ++*(uint *)(v1 + 56);
      }
      else
      {
        Function_2007dec(v5, 0xDu, *(short *)(v1 + 22));
      }
    }
    else if ( v2 == 2 )
    {
      v3 = 1;
    }
  }
  else if ( Function_2225eb8(v1 + 20) )
  {
    Function_2007dec(*(uint *)(v1 + 16), 0xDu, *(short *)(v1 + 22));
  }
  else
  {
    ++*(uint *)(v1 + 56);
    Function_2225e68((short *)(v1 + 20), 15, 10, 10, 12);
  }
  return v3;
}

//----- (02231584) --------------------------------------------------------
int __fastcall Function_2231584(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 64);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( Function_2226454(v1 + 140) )
      {
        Function_200d3f4(*(uint **)(v1 + 60), 0);
        ++*(uint *)(v1 + 64);
      }
    }
    else if ( v2 == 2 )
    {
      v3 = 1;
    }
  }
  else
  {
    Function_22260a8(v1 + 68, *(int **)(v1 + 60));
    if ( Function_2225c14(v1 + 104) )
    {
      Function_22259dc((ushort *)(v1 + 104), *(int **)(v1 + 60), *(ushort *)(v1 + 180), *(ushort *)(v1 + 182));
    }
    else
    {
      ++*(uint *)(v1 + 64);
      Function_2226424(v1 + 140, 16, 0, 14, 16, 8u);
    }
  }
  return v3;
}

//----- (02231608) --------------------------------------------------------
int __fastcall Function_2231608(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 12);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      Function_200d0f4(*(uint *)(a2 + 60));
      Function_2220220(*(uint *)v2, v3);
      return free(v2);
    }
  }
  else
  {
    Function_2231508(a2);
    if ( Function_2231584(v2) )
      ++*(uint *)(v2 + 12);
  }
  return Function_200c7ec(*(int **)(v2 + 8));
}

//----- (02231650) --------------------------------------------------------
uint *__fastcall Function_2231650(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  short v10;
  int v11;
  int v12;
  int v13;
  int v14;
  short v15;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_2235e50();
  *(uint *)v8 = v5;
  *(uint *)(v8 + 4) = v4;
  *(uint *)(v8 + 8) = v6;
  v9 = Function_2220240(*(uint *)v8);
  v10 = Function_2225964(*(uint *)v8, v9);
  v11 = Function_2220240(*(uint *)v8);
  v12 = Function_222598c(*(uint *)v8, v11);
  v13 = Function_2220240(v5);
  v14 = Function_22232fc(*(uint *)v8, v13);
  *(uint *)(v8 + 16) = v14;
  LOWORD(v6) = Function_20080c0(v14, 0);
  LOWORD(v5) = Function_20080c0(*(uint *)(v8 + 16), 1u);
  Function_2225e68((short *)(v8 + 20), 10, 10, 15, 12);
  *(uint *)(v8 + 60) = v7;
  Function_200d390(v7, 1);
  Function_200d6a4(*(uint **)(v8 + 60), 2);
  Function_200d810(*(int **)(v8 + 60), 1);
  Function_200d474(*(int **)(v8 + 60), 100);
  Function_200d460(*(int **)(v8 + 60), 1);
  *(ushort *)(v8 + 180) = v6 + 32 * v10;
  *(ushort *)(v8 + 182) = v5;
  if ( v12 >= 0 )
    v15 = 23;
  else
    v15 = 7;
  Function_2225bc8(v8 + 104, 0, 0, 0, ~v15 * v12, 0x20u);
  Function_2225e68((short *)(v8 + 68), 5, 10, 12, 32);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 63, 31, 26);
  return Function_22201e8(*(uint *)v8, (int)Function_2231608, v8);
}

//----- (02231760) --------------------------------------------------------
uint __fastcall Function_2231760(int a1)
{
  uint result;

  switch ( (uchar)*(uint *)(a1 + 104) )
  {
    case 0u:
      result = Function_2225bc8(a1 + 24, 0, 40, 0, 40, 8u);
      break;
    case 1u:
      result = Function_2225bc8(a1 + 24, 0, 0, 0, -80, 8u);
      break;
    case 2u:
      result = Function_2225bc8(a1 + 24, 0, -80, 0, 80, 8u);
      break;
    case 3u:
      result = Function_2225bc8(a1 + 24, 0, 0, 0, -80, 8u);
      break;
    case 4u:
      result = Function_2225bc8(a1 + 24, 0, 80, 0, 80, 8u);
      break;
    case 5u:
      result = Function_2225bc8(a1 + 24, 0, -40, 0, -40, 8u);
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (0223181C) --------------------------------------------------------
uint __fastcall Function_223181c(int *a1, uint *a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  uint result;

  v2 = (int)a2;
  v3 = a1;
  v4 = a2[3];
  if ( v4 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2231838 + v4) + 35854394);
  switch ( (uchar)v4 )
  {
    case 0:
      v5 = a2[27] + 1;
      a2[27] = v5;
      if ( v5 > 4 )
      {
        Function_2231760((int)a2);
        ++*(uint *)(v2 + 12);
        *(uint *)(v2 + 108) = 0;
      }
      goto LABEL_18;
    case 1:
      if ( Function_2225c14((int)(a2 + 6)) )
      {
        Function_22259dc((ushort *)(v2 + 24), *(int **)(v2 + 20), *(ushort *)(v2 + 100), *(ushort *)(v2 + 102));
      }
      else
      {
        v6 = *(uint *)(v2 + 104) + 1;
        *(uint *)(v2 + 104) = v6;
        if ( v6 >= 6 )
        {
          ++*(uint *)(v2 + 12);
          Function_200d810(*(int **)(v2 + 20), 1);
          Function_2226424(v2 + 60, 16, 0, 0, 16, 0x10u);
          Function_20086fc(*(uint *)(v2 + 16), 0, 10, 0, 0x7FFF);
        }
        else
        {
          *(uint *)(v2 + 12) = 0;
          *(ushort *)(v2 + 100) += *(ushort *)(v2 + 24);
          *(ushort *)(v2 + 102) += *(ushort *)(v2 + 26);
        }
      }
      goto LABEL_18;
    case 2:
      if ( Function_2226454((int)(a2 + 15)) )
        Function_200d3f4(*(uint **)(v2 + 20), 0);
      if ( !Function_20087b4(*(uint *)(v2 + 16)) )
      {
        ++*(uint *)(v2 + 12);
        Function_20086fc(*(uint *)(v2 + 16), 10, 0, 0, 0x7FFF);
      }
      goto LABEL_18;
    case 3:
      if ( !Function_20087b4(a2[4]) )
        ++*(uint *)(v2 + 12);
      goto LABEL_18;
    case 4:
      Function_200d0f4(a2[5]);
      Function_2220220(*(uint *)v2, v3);
      result = free(v2);
      break;
    default:
LABEL_18:
      result = Function_200c7ec(*(int **)(v2 + 8));
      break;
  }
  return result;
}

//----- (02231950) --------------------------------------------------------
uint *__fastcall Function_2231950(int a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int *v8;
  int v9;
  int v10;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = (int *)Function_2235e50();
  v9 = (int)v8;
  *v8 = v5;
  v8[1] = v4;
  v8[2] = v6;
  v10 = Function_2220248(v5);
  *(uint *)(v9 + 16) = Function_22232fc(*(uint *)v9, v10);
  *(uint *)(v9 + 20) = v7;
  Function_200d474(v7, 100);
  Function_200d460(*(int **)(v9 + 20), 1);
  Function_200d550(*(int **)(v9 + 20), (ushort *)(v9 + 100), (ushort *)(v9 + 102));
  return Function_22201e8(*(uint *)v9, (int)Function_223181c, v9);
}

//----- (022319AC) --------------------------------------------------------
uint __fastcall Function_22319ac(int a1)
{
  uint result;

  switch ( (uchar)*(uint *)(a1 + 80) )
  {
    case 0u:
      result = Function_2225bc8(a1 + 40, 0, 80, 0, 80, 4u);
      break;
    case 1u:
      result = Function_2225bc8(a1 + 40, 0, 0, 0, -80, 4u);
      break;
    case 2u:
      result = Function_2225bc8(a1 + 40, 0, -80, 0, 80, 4u);
      break;
    case 3u:
      result = Function_2225bc8(a1 + 40, 0, 40, 0, -40, 4u);
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (02231A38) --------------------------------------------------------
uint __fastcall Function_2231a38(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  ushort v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  ushort v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint result;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*(uint *)(a2 + 12) )
  {
    case 0u:
      v4 = *(uint *)(a2 + 84) + 1;
      *(uint *)(a2 + 84) = v4;
      if ( v4 > 1 )
      {
        Function_22319ac(a2);
        ++*(uint *)(v2 + 12);
        *(uint *)(v2 + 84) = 0;
      }
      goto LABEL_28;
    case 1u:
      if ( Function_2225c14(a2 + 40) )
      {
        Function_22259dc((ushort *)(v2 + 40), *(int **)(v2 + 36), *(ushort *)(v2 + 76), *(ushort *)(v2 + 78));
      }
      else
      {
        v5 = *(uint *)(v2 + 80) + 1;
        *(uint *)(v2 + 80) = v5;
        if ( v5 >= 4 )
        {
          ++*(uint *)(v2 + 12);
          *(uint *)(v2 + 84) = 8;
          Function_200d364(*(int **)(v2 + 36), 1u);
          Function_200d390(*(uint **)(v2 + 36), 1);
        }
        else
        {
          *(uint *)(v2 + 12) = 0;
          *(ushort *)(v2 + 76) += *(ushort *)(v2 + 40);
          *(ushort *)(v2 + 78) += *(ushort *)(v2 + 42);
        }
      }
      goto LABEL_28;
    case 2u:
      v6 = *(uint *)(a2 + 84) - 1;
      *(uint *)(a2 + 84) = v6;
      if ( v6 < 0 )
      {
        ++*(uint *)(a2 + 12);
        v7 = Function_222332c(*(uint *)a2);
        v8 = Function_2222354(*(uint *)v2);
        Function_2003178(v7, 1, v8, -8, 0, 16, 0xFFFF);
        v9 = 0;
        v10 = v2;
        do
        {
          v11 = *(uint *)(v10 + 20);
          if ( v11 )
            Function_20086fc(v11, 14, 16, 0, 0xFFFF);
          ++v9;
          v10 += 4;
        }
        while ( v9 < 4 );
      }
      goto LABEL_28;
    case 3u:
      v12 = Function_222332c(*(uint *)a2);
      if ( !Function_200384c(v12) )
      {
        ++*(uint *)(v2 + 12);
        v13 = Function_222332c(*(uint *)v2);
        v14 = Function_2222354(*(uint *)v2);
        Function_2003178(v13, 1, v14, -8, 16, 0, 0xFFFF);
        v15 = 0;
        v16 = v2;
        do
        {
          v17 = *(uint *)(v16 + 20);
          if ( v17 )
            Function_20086fc(v17, 2, 0, 0, 0xFFFF);
          ++v15;
          v16 += 4;
        }
        while ( v15 < 4 );
      }
      goto LABEL_28;
    case 4u:
      v18 = Function_222332c(*(uint *)a2);
      if ( !Function_200384c(v18) )
      {
        ++*(uint *)(v2 + 12);
        *(uint *)(v2 + 84) = 4;
        *(uint *)(v2 + 80) = 4;
        *(uint *)(v2 + 88) = 0;
      }
      goto LABEL_28;
    case 5u:
      v19 = *(uint *)(a2 + 84) - 1;
      *(uint *)(a2 + 84) = v19;
      if ( v19 < 0 )
      {
        *(uint *)(a2 + 84) = 4;
        v20 = *(uint *)(a2 + 80) - 1;
        *(uint *)(a2 + 80) = v20;
        if ( v20 >= 0 )
        {
          Function_200d3f4(*(uint **)(a2 + 36), *(uint *)(a2 + 88));
          *(uint *)(v2 + 88) ^= 1u;
        }
        else
        {
          ++*(uint *)(a2 + 12);
        }
      }
      goto LABEL_28;
    case 6u:
      Function_200d0f4(*(uint *)(a2 + 36));
      Function_2220220(*(uint *)v2, v3);
      result = free(v2);
      break;
    default:
LABEL_28:
      result = Function_200c7ec(*(int **)(v2 + 8));
      break;
  }
  return result;
}

//----- (02231C1C) --------------------------------------------------------
uint *__fastcall Function_2231c1c(int a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_2235e50();
  *(uint *)v8 = v5;
  *(uint *)(v8 + 4) = v4;
  *(uint *)(v8 + 8) = v6;
  v9 = Function_2220248(v5);
  *(uint *)(v8 + 16) = Function_22232fc(*(uint *)v8, v9);
  v10 = 0;
  v11 = v8;
  do
  {
    *(uint *)(v11 + 20) = Function_22232fc(*(uint *)v8, v10++);
    v11 += 4;
  }
  while ( v10 < 4 );
  *(uint *)(v8 + 36) = v7;
  Function_200d474(v7, 100);
  Function_200d460(*(int **)(v8 + 36), 1);
  Function_200d550(*(int **)(v8 + 36), (ushort *)(v8 + 76), (ushort *)(v8 + 78));
  *(ushort *)(v8 + 76) -= 40;
  *(ushort *)(v8 + 78) -= 40;
  Function_200d4c4(*(int **)(v8 + 36), *(short *)(v8 + 76), *(short *)(v8 + 78));
  Function_200d810(*(int **)(v8 + 36), 1);
  *(uint *)(v8 + 84) = -16;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 63, 31, 26);
  return Function_22201e8(*(uint *)v8, (int)Function_2231a38, v8);
}

//----- (02231CD4) --------------------------------------------------------
int __fastcall Function_2231cd4(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_2225d78(a1 + 4, 0, 2730, 3);
  if ( v3 )
  {
    v2[6] = -v2[6];
    Function_2007dec(v2[2], 0xAu, 16);
  }
  else
  {
    Function_2007dec(v2[2], 0xAu, -16);
  }
  result = 0;
  v2[19] = 0;
  v2[20] = 0;
  return result;
}

//----- (02231D18) --------------------------------------------------------
int __fastcall Function_2231d18(int *a1)
{
  int *v1;
  int v2;
  int v3;
  bool v4;
  int v5;

  v1 = a1;
  v2 = 0;
  switch ( (uchar)a1[19] )
  {
    case 0u:
      Function_2225dc8(a1 + 4);
      Function_2007dec(v1[2], 9u, v1[4]);
      v3 = v1[20] - 1;
      v1[20] = v3;
      if ( v3 < 0 )
      {
        ++v1[19];
        Function_2225bc8(
          (int)(v1 + 9),
          *((short *)v1 + 6),
          *((short *)v1 + 6),
          *((short *)v1 + 7),
          *((ushort *)v1 + 7) + 2,
          2u);
      }
      break;
    case 1u:
      if ( Function_2225dc8(a1 + 4) )
        Function_2007dec(v1[2], 9u, v1[4]);
      if ( !Function_2225c74((int)(v1 + 9), v1[2]) )
      {
        ++v1[19];
        Function_2225d78(v1 + 4, (short)v1[4], 0, 3);
        Function_2225bc8(
          (int)(v1 + 9),
          *((short *)v1 + 6),
          *((short *)v1 + 6),
          (short)(*((ushort *)v1 + 7) + 2),
          *((ushort *)v1 + 7),
          2u);
      }
      break;
    case 2u:
      Function_2225c74((int)(a1 + 9), a1[2]);
      v4 = Function_2225dc8(v1 + 4) == 0;
      v5 = v1[2];
      if ( v4 )
      {
        Function_2007dec(v5, 0, *((short *)v1 + 6));
        Function_2007dec(v1[2], 1u, *((short *)v1 + 7));
        Function_2007dec(v1[2], 9u, 0);
        ++v1[19];
      }
      else
      {
        Function_2007dec(v5, 9u, v1[4]);
      }
      break;
    case 3u:
      v2 = 1;
      break;
    default:
      return v2;
  }
  return v2;
}

//----- (02231E28) --------------------------------------------------------
int __fastcall Function_2231e28(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int result;
  int v5;
  int v6;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      Function_2220220(a2[1], v3);
      result = free((int)v2);
    }
  }
  else
  {
    result = Function_2231d18(a2);
    if ( result )
    {
      v5 = v2[18] + 1;
      v2[18] = v5;
      if ( v5 >= 4 )
      {
        result = *v2 + 1;
        *v2 = result;
      }
      else
      {
        v6 = v2[21] ^ 1;
        v2[21] = v6;
        Function_2231cd4(v2, v6);
        result = Function_2231d18(v2);
      }
    }
  }
  return result;
}

//----- (02231E7C) --------------------------------------------------------
uint *__fastcall Function_2231e7c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = Function_2235e50();
  *(uint *)(v2 + 4) = v1;
  v3 = Function_2220240(v1);
  v4 = Function_2225964(*(uint *)(v2 + 4), v3);
  if ( Function_2220280(v1, 0) )
    v5 = Function_2220248(v1);
  else
    v5 = Function_2220240(v1);
  v6 = Function_22232fc(*(uint *)(v2 + 4), v5);
  *(uint *)(v2 + 8) = v6;
  *(ushort *)(v2 + 12) = Function_20080c0(v6, 0);
  *(ushort *)(v2 + 14) = Function_20080c0(*(uint *)(v2 + 8), 1u);
  Function_2007dec(*(uint *)(v2 + 8), 0xBu, 50);
  *(uint *)(v2 + 84) = v4 != 1;
  Function_2231cd4((int *)v2, *(uint *)(v2 + 84));
  return Function_22201e8(*(uint *)(v2 + 4), (int)Function_2231e28, v2);
}

//----- (02231F18) --------------------------------------------------------
int __fastcall Function_2231f18(int *a1)
{
  int *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  switch ( (uchar)a1[14] )
  {
    case 0u:
      if ( Function_22260c8((int)(a1 + 4), a1[3]) )
        Function_2226024(v1[3], (short)v1[15], (short)v1[16], v1[9], 0);
      else
        ++v1[14];
      break;
    case 1u:
      v3 = a1[13] - 1;
      v1[13] = v3;
      if ( v3 < 0 )
      {
        ++v1[14];
        Function_2225e68((short *)v1 + 8, 15, 10, 10, 8);
      }
      break;
    case 2u:
      if ( Function_22260c8((int)(a1 + 4), a1[3]) )
        Function_2226024(v1[3], (short)v1[15], (short)v1[16], v1[9], 0);
      else
        ++v1[14];
      break;
    case 3u:
      Function_2007dec(a1[3], 0xCu, 256);
      Function_2007dec(v1[3], 0xDu, 256);
      v2 = 1;
      break;
    default:
      return v2;
  }
  return v2;
}

//----- (02231FD8) --------------------------------------------------------
int __fastcall Function_2231fd8(int *a1, int *a2)
{
  int v2;
  int *v3;
  int result;

  v2 = (int)a2;
  v3 = a1;
  result = a2[1];
  if ( result )
  {
    if ( result == 1 )
    {
      result = a2[2] - 1;
      a2[2] = result;
      if ( result < 0 )
      {
        result = a2[1] + 1;
        a2[1] = result;
      }
    }
    else if ( result == 2 )
    {
      Function_2220220(*a2, v3);
      result = free(v2);
    }
  }
  else
  {
    result = Function_2231f18(a2);
    if ( result )
    {
      ++*(uint *)(v2 + 4);
      result = 16;
      *(uint *)(v2 + 8) = 16;
    }
  }
  return result;
}

//----- (02232024) --------------------------------------------------------
uint *__fastcall Function_2232024(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = (int *)Function_2235e50(a1);
  v3 = (int)v2;
  *v2 = v1;
  v4 = Function_2220240(v1);
  *(uint *)(v3 + 12) = Function_22232fc(*(uint *)v3, v4);
  Function_2225e68((short *)(v3 + 16), 10, 10, 15, 8);
  *(uint *)(v3 + 52) = 4;
  v5 = Function_2220240(*(uint *)v3);
  *(uint *)(v3 + 64) = Function_2223354(*(uint *)v3, v5);
  *(uint *)(v3 + 60) = Function_20080c0(*(uint *)(v3 + 12), 1u);
  return Function_22201e8(*(uint *)v3, (int)Function_2231fd8, v3);
}

//----- (02232084) --------------------------------------------------------
int __fastcall Function_2232084(int a1)
{
  int v1;
  short v2;
  short v3;
  int v4;
  short v5;
  int result;

  v1 = a1;
  v2 = s32_div_f(*(uint *)(a1 + 116), 100);
  v3 = s32_div_f(*(uint *)(v1 + 120), 100);
  v4 = s32_div_f(*(uint *)(v1 + 112), 100);
  Function_2225e68((short *)(v1 + 24), v2, 10, v3, v4);
  Function_2235780(*(uint *)v1);
  v5 = s32_div_f(*(uint *)(v1 + 112), 100);
  Function_2226424(v1 + 60, 16, 10, 0, 6, 2 * v5);
  result = 0;
  *(uint *)(v1 + 100) = 0;
  *(uint *)(v1 + 104) = 0;
  return result;
}

//----- (022320EC) --------------------------------------------------------
int __fastcall Function_22320ec(int a1)
{
  int v1;
  int v2;
  short v3;
  short v4;
  int v5;
  int v6;
  short v7;
  short v8;
  int v9;

  v1 = a1;
  v2 = 0;
  switch ( (uchar)*(uint *)(a1 + 100) )
  {
    case 0u:
      if ( !Function_22260a8(a1 + 24, *(int **)(a1 + 20)) )
      {
        v3 = s32_div_f(*(uint *)(v1 + 120), 100);
        v4 = s32_div_f(*(uint *)(v1 + 116), 100);
        v5 = s32_div_f(*(uint *)(v1 + 112), 100);
        Function_2225e68((short *)(v1 + 24), v3, 10, v4, v5);
        ++*(uint *)(v1 + 100);
      }
      break;
    case 1u:
      if ( !Function_22260a8(a1 + 24, *(int **)(a1 + 20)) )
      {
        v6 = *(uint *)(v1 + 104) + 1;
        *(uint *)(v1 + 104) = v6;
        if ( v6 >= 2 )
        {
          ++*(uint *)(v1 + 100);
        }
        else
        {
          *(uint *)(v1 + 100) = 0;
          v7 = s32_div_f(*(uint *)(v1 + 116), 100);
          v8 = s32_div_f(*(uint *)(v1 + 120), 100);
          v9 = s32_div_f(*(uint *)(v1 + 112), 100);
          Function_2225e68((short *)(v1 + 24), v7, 10, v8, v9);
        }
      }
      break;
    case 2u:
      if ( Function_2226454(a1 + 60) )
      {
        v2 = 1;
        ++*(uint *)(v1 + 100);
      }
      break;
    case 3u:
      v2 = 1;
      break;
    default:
      return v2;
  }
  return v2;
}

//----- (022321C4) --------------------------------------------------------
int __fastcall Function_22321c4(int a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;

  v1 = (uint *)a1;
  v2 = *(uint *)(a1 + 124);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( Function_22320ec(a1) )
      {
        v4 = v1[27] - 1;
        v1[27] = v4;
        if ( v4 < 0 )
        {
          v3 = 1;
          ++v1[31];
        }
        else
        {
          v1[28] -= s32_div_f(v1[28], 3);
          v1[29] -= s32_div_f(v1[29], 3);
          v1[30] -= s32_div_f(v1[30], 3);
          v1[31] = 0;
        }
      }
    }
    else if ( v2 == 2 )
    {
      v3 = 1;
    }
  }
  else
  {
    Function_2232084(a1);
    Function_22320ec((int)v1);
    ++v1[31];
  }
  return v3;
}

//----- (0223223C) --------------------------------------------------------
uint __fastcall Function_223223c(int *a1, uint *a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  uint result;

  v2 = (int)a2;
  v3 = a1;
  v4 = a2[3];
  if ( v4 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2232258 + v4) + 35856986);
  switch ( (uchar)v4 )
  {
    case 0:
      if ( Function_22321c4((int)a2) )
      {
        ++*(uint *)(v2 + 12);
        *(uint *)(v2 + 16) = 30;
        Function_200d364(*(int **)(v2 + 20), 0);
        Function_200d390(*(uint **)(v2 + 20), 1);
        Function_200d6e8(*(int **)(v2 + 20), 0x3F800000u, 0x3F800000u);
        Function_2226424(v2 + 60, 0, 16, 16, 0, 4u);
      }
      goto LABEL_20;
    case 1:
      v5 = a2[4];
      if ( v5 )
      {
        if ( v5 > 0 )
          a2[4] = v5 - 1;
      }
      else
      {
        Function_200aae0(8, 16, 0, 13, 1);
        *(uint *)(v2 + 16) = -1;
      }
      if ( *(uint *)(v2 + 16) == -1 && Function_200ac1c(1) )
      {
        Function_200aae0(8, 0, 16, 13, 1);
        *(uint *)(v2 + 16) = -2;
      }
      if ( !Function_200d3b8(*(int **)(v2 + 20)) )
        ++*(uint *)(v2 + 12);
      goto LABEL_20;
    case 2:
      if ( Function_200ac1c(1) )
      {
        ++*(uint *)(v2 + 12);
        Function_2235780(*(uint *)v2);
        Function_2226424(v2 + 60, 16, 0, 0, 16, 8u);
      }
      goto LABEL_20;
    case 3:
      if ( Function_2226454((int)(a2 + 15)) )
      {
        Function_200d3f4(*(uint **)(v2 + 20), 0);
        ++*(uint *)(v2 + 12);
      }
      goto LABEL_20;
    case 4:
      Function_200d0f4(a2[5]);
      Function_2220220(*(uint *)v2, v3);
      result = free(v2);
      break;
    default:
LABEL_20:
      result = Function_200c7ec(*(int **)(v2 + 8));
      break;
  }
  return result;
}

//----- (02232378) --------------------------------------------------------
uint *__fastcall Function_2232378(int a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  uint *v8;
  int v9;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = (uint *)Function_2235e50(a1);
  v9 = (int)v8;
  *v8 = v5;
  v8[1] = v4;
  v8[2] = v6;
  v8[5] = v7;
  Function_200d474(v7, 100);
  Function_200d460(*(int **)(v9 + 20), 1);
  Function_200d6a4(*(uint **)(v9 + 20), 2);
  Function_200d810(*(int **)(v9 + 20), 1);
  Function_200d3cc(*(int **)(v9 + 20), 4u);
  *(uint *)(v9 + 108) = 3;
  *(uint *)(v9 + 112) = 400;
  *(uint *)(v9 + 116) = 1500;
  *(uint *)(v9 + 120) = 1000;
  return Function_22201e8(*(uint *)v9, (int)Function_223223c, v9);
}

//----- (022323E4) --------------------------------------------------------
int __fastcall Function_22323e4(int result)
{
  switch ( (uchar)*(uint *)(result + 52) )
  {
    case 0u:
    case 2u:
      result = Function_2225bc8(result + 16, 0, 0, 0, 32, 6u);
      break;
    case 1u:
    case 3u:
      result = Function_2225bc8(result + 16, 0, 0, 32, 0, 6u);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02232430) --------------------------------------------------------
int __fastcall Function_2232430(int *a1, int *a2)
{
  int v2;
  int *v3;
  int result;
  int v5;

  v2 = (int)a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      if ( Function_2225c14((int)(a2 + 4)) )
      {
        result = Function_2225a18(
                   (short *)(v2 + 16),
                   *(uint *)(v2 + 8),
                   *(short *)(v2 + 12),
                   *(short *)(v2 + 14));
      }
      else
      {
        v5 = *(uint *)(v2 + 52) + 1;
        *(uint *)(v2 + 52) = v5;
        if ( v5 >= 4 )
        {
          result = *(uint *)v2 + 1;
          *(uint *)v2 = result;
        }
        else
        {
          result = 0;
          *(uint *)v2 = 0;
        }
      }
    }
    else if ( result == 2 )
    {
      Function_2220220(a2[1], v3);
      result = free(v2);
    }
  }
  else
  {
    Function_22323e4((int)a2);
    result = *(uint *)v2 + 1;
    *(uint *)v2 = result;
  }
  return result;
}

//----- (0223249C) --------------------------------------------------------
uint *__fastcall Function_223249c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_2235e50(a1);
  v3 = v2;
  *(uint *)(v2 + 4) = v1;
  v4 = Function_2220240(v1);
  v5 = Function_22232fc(*(uint *)(v3 + 4), v4);
  *(uint *)(v3 + 8) = v5;
  *(ushort *)(v3 + 12) = Function_20080c0(v5, 0);
  *(ushort *)(v3 + 14) = Function_20080c0(*(uint *)(v3 + 8), 1u);
  *(uint *)(v3 + 52) = 0;
  return Function_22201e8(*(uint *)(v3 + 4), (int)Function_2232430, v3);
}

//----- (022324E0) --------------------------------------------------------
int __fastcall Function_22324e0(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;
  bool v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = a1;
  result = *(uint *)a2;
  switch ( (uchar)*(uint *)a2 )
  {
    case 0u:
      Function_22263a4((uint *)(a2 + 20), 1, 64);
      *(uint *)(v2 + 32) *= *(uint *)(v2 + 8);
      result = *(uint *)v2 + 1;
      *(uint *)v2 = result;
      break;
    case 1u:
      result = Function_2225ba0(
                 a2 + 20,
                 *(short *)(a2 + 16),
                 (short)(*(ushort *)(a2 + 18) + 8),
                 *(uint *)(a2 + 12));
      if ( !result )
      {
        Function_2007dec(*(uint *)(v2 + 12), 0, *(short *)(v2 + 16));
        Function_2007dec(*(uint *)(v2 + 12), 1u, *(short *)(v2 + 18));
        Function_2225bc8(v2 + 20, *(short *)(v2 + 16), (short)(*(ushort *)(v2 + 16) + 32), 0, 0, 2u);
        *(uint *)(v2 + 28) *= *(uint *)(v2 + 8);
        ++*(uint *)v2;
        Function_2225c14(v2 + 20);
        result = Function_2007dec(*(uint *)(v2 + 12), 0, *(short *)(v2 + 20));
      }
      break;
    case 2u:
      if ( Function_2225c14(a2 + 20) )
      {
        result = Function_2007dec(*(uint *)(v2 + 12), 0, *(short *)(v2 + 20));
      }
      else
      {
        Function_2225bc8(
          v2 + 64,
          *(short *)(v2 + 60),
          (short)(*(ushort *)(v2 + 60) + 32 * *(ushort *)(v2 + 8)),
          0,
          0,
          2u);
        result = *(uint *)v2 + 1;
        *(uint *)v2 = result;
      }
      break;
    case 3u:
      if ( Function_2225c14(a2 + 64) )
      {
        result = Function_2007dec(*(uint *)(v2 + 56), 0, *(short *)(v2 + 64));
      }
      else
      {
        Function_2225bc8(v2 + 20, *(short *)(v2 + 20), *(short *)(v2 + 16), 0, 0, 8u);
        result = *(uint *)v2 + 1;
        *(uint *)v2 = result;
      }
      break;
    case 4u:
      v5 = Function_2225c14(a2 + 20) == 0;
      v6 = *(uint *)(v2 + 12);
      if ( v5 )
      {
        Function_2007dec(v6, 0, *(short *)(v2 + 16));
        Function_2225bc8(v2 + 64, *(short *)(v2 + 64), *(short *)(v2 + 60), 0, 0, 8u);
        result = *(uint *)v2 + 1;
        *(uint *)v2 = result;
      }
      else
      {
        result = Function_2007dec(v6, 0, *(short *)(v2 + 20));
      }
      break;
    case 5u:
      v5 = Function_2225c14(a2 + 64) == 0;
      v7 = *(uint *)(v2 + 56);
      if ( v5 )
      {
        Function_2007dec(v7, 0, *(short *)(v2 + 60));
        result = *(uint *)v2 + 1;
        *(uint *)v2 = result;
      }
      else
      {
        result = Function_2007dec(v7, 0, *(short *)(v2 + 64));
      }
      break;
    case 6u:
      Function_2220220(*(uint *)(a2 + 4), v3);
      result = free(v2);
      break;
    default:
      return result;
  }
  return result;
}

//----- (022326AC) --------------------------------------------------------
uint *__fastcall Function_22326ac(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = Function_2235e50(a1);
  v3 = v2;
  *(uint *)(v2 + 4) = v1;
  v4 = Function_2220240(v1);
  *(uint *)(v3 + 8) = Function_2225964(*(uint *)(v3 + 4), v4);
  v5 = Function_2220240(v1);
  v6 = Function_22232fc(*(uint *)(v3 + 4), v5);
  *(uint *)(v3 + 12) = v6;
  *(ushort *)(v3 + 16) = Function_20080c0(v6, 0);
  *(ushort *)(v3 + 18) = Function_20080c0(*(uint *)(v3 + 12), 1u);
  v7 = Function_2220248(v1);
  v8 = Function_22232fc(*(uint *)(v3 + 4), v7);
  *(uint *)(v3 + 56) = v8;
  *(ushort *)(v3 + 60) = Function_20080c0(v8, 0);
  *(ushort *)(v3 + 62) = Function_20080c0(*(uint *)(v3 + 56), 1u);
  return Function_22201e8(*(uint *)(v3 + 4), (int)Function_22324e0, v3);
}

//----- (02232720) --------------------------------------------------------
int __fastcall Function_2232720(int a1)
{
  *(uint *)(a1 + 64) = 0;
  return Function_2225ef0((short *)(a1 + 28), 10, 9, 10, 8, 10, 2);
}

//----- (02232744) --------------------------------------------------------
int __fastcall Function_2232744(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = 0;
  switch ( (uchar)*(uint *)(a1 + 64) )
  {
    case 0u:
      if ( Function_22260e8(a1 + 28, *(uint *)(a1 + 24)) )
      {
        Function_2226024(
          *(uint *)(v1 + 24),
          *(short *)(v1 + 68),
          *(short *)(v1 + 70),
          *(uint *)(v1 + 48),
          0);
      }
      else
      {
        ++*(uint *)(v1 + 64);
        Function_2225ef0((short *)(v1 + 28), 9, 11, 8, 15, 10, 2);
      }
      break;
    case 1u:
      if ( Function_22260e8(a1 + 28, *(uint *)(a1 + 24)) )
      {
        Function_2226024(
          *(uint *)(v1 + 24),
          *(short *)(v1 + 68),
          *(short *)(v1 + 70),
          *(uint *)(v1 + 48),
          0);
      }
      else
      {
        ++*(uint *)(v1 + 64);
        Function_2225ef0((short *)(v1 + 28), 11, 10, 15, 10, 10, 2);
      }
      break;
    case 2u:
      if ( Function_22260e8(a1 + 28, *(uint *)(a1 + 24)) )
      {
        Function_2226024(
          *(uint *)(v1 + 24),
          *(short *)(v1 + 68),
          *(short *)(v1 + 70),
          *(uint *)(v1 + 48),
          0);
      }
      else
      {
        Function_2007dec(*(uint *)(v1 + 24), 0xCu, 256);
        Function_2007dec(*(uint *)(v1 + 24), 0xDu, 256);
        v2 = 1;
        ++*(uint *)(v1 + 64);
      }
      break;
    case 3u:
      v2 = 1;
      break;
    default:
      return v2;
  }
  return v2;
}

//----- (0223283C) --------------------------------------------------------
uint __fastcall Function_223283c(int *a1, uint *a2, int a3)
{
  int v3;
  int *v4;

  v3 = a3;
  *a2 = 0;
  v4 = a1;
  Function_200d474(a1, 100);
  Function_200d460(v4, 1);
  Function_200d3f4((uint *)v4, 1);
  Function_200d390((uint *)v4, 1);
  Function_200d3a4((uint *)v4, v3);
  Function_200d364(v4, 0);
  Function_200d3cc(v4, 0);
  return Function_200d34c(v4, 225280);
}

//----- (02232888) --------------------------------------------------------
int __fastcall Function_2232888(int *a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = 0;
  if ( *a2 )
    return 1;
  if ( !Function_200d3b8(a1) )
  {
    v3 = 1;
    ++*v2;
  }
  return v3;
}

//----- (022328B8) --------------------------------------------------------
uint __fastcall Function_22328b8(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint result;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 12);
  if ( v4 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_22328D2 + v4) + 35858644);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_2232720(a2);
      Function_223283c(
        *(int **)(v2 + 4 * *(uint *)(v2 + 16) + 72),
        (uint *)(v2 + 96 + 4 * *(uint *)(v2 + 16)),
        0x2000);
      ++*(uint *)(v2 + 12);
      goto LABEL_22;
    case 1:
      v5 = Function_2232744(a2);
      if ( v5 == Function_2232888(
                   *(int **)(v2 + 4 * *(uint *)(v2 + 16) + 72),
                   (uint *)(v2 + 96 + 4 * *(uint *)(v2 + 16)))
        && v5 == 1 )
      {
        Function_200d364(*(int **)(v2 + 4 * *(uint *)(v2 + 16) + 72), 1u);
        ++*(uint *)(v2 + 12);
      }
      goto LABEL_22;
    case 2:
      --*(uint *)(a2 + 120 + 4 * *(uint *)(a2 + 16));
      v6 = *(uint *)(a2 + 16);
      if ( *(uint *)(v2 + 4 * v6 + 120) < 0 )
      {
        *(uint *)(v2 + 16) = v6 + 1;
        if ( v6 + 1 >= 6 )
          ++*(uint *)(v2 + 12);
        else
          *(uint *)(v2 + 12) = 0;
      }
      goto LABEL_22;
    case 3:
      v7 = 0;
      v8 = (uint *)(a2 + 96);
      v9 = a2;
      do
      {
        Function_223283c(*(int **)(v9 + 72), v8, 0x2000);
        ++v7;
        ++v8;
        v9 += 4;
      }
      while ( v7 < 6 );
      ++*(uint *)(v2 + 12);
      goto LABEL_22;
    case 4:
      v10 = 0;
      v11 = (uint *)(a2 + 96);
      v12 = a2;
      do
      {
        v13 = Function_2232888(*(int **)(v12 + 72), v11);
        ++v10;
        ++v11;
        v12 += 4;
      }
      while ( v10 < 6 );
      if ( v13 == 1 )
        ++*(uint *)(v2 + 12);
      goto LABEL_22;
    case 5:
      v14 = 0;
      v15 = a2;
      do
      {
        Function_200d0f4(*(uint *)(v15 + 72));
        ++v14;
        v15 += 4;
      }
      while ( v14 < 6 );
      Function_2220220(*(uint *)v2, v3);
      result = free(v2);
      break;
    default:
LABEL_22:
      result = Function_200c7ec(*(int **)(v2 + 8));
      break;
  }
  return result;
}

//----- (022329E0) --------------------------------------------------------
uint *__fastcall Function_22329e0(int a1, uint *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  short v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint *v18;
  int v19;
  int *v20;
  short v21;
  int v22;
  int v23;
  int v24[13];
  int v25;

  v25 = a4;
  v18 = a2;
  v4 = a1;
  v19 = a3;
  v20 = (int *)a4;
  v5 = (int *)Function_2235e50(a1);
  *v5 = v4;
  v5[1] = (int)v18;
  v23 = (int)v5;
  v5[2] = v19;
  v6 = Function_2220240(*v5);
  v7 = Function_22232fc(*(uint *)v23, v6);
  *(uint *)(v23 + 24) = v7;
  v8 = Function_20080c0(v7, 0);
  v21 = Function_20080c0(*(uint *)(v23 + 24), 1u);
  *(ushort *)(v23 + 68) = v21;
  v9 = Function_2220240(*(uint *)v23);
  *(ushort *)(v23 + 70) = Function_2223354(*(uint *)v23, v9);
  Function_222329c(v24, *(uint *)v23);
  v10 = v23;
  v11 = 0;
  do
  {
    if ( v11 )
      v12 = Function_200ce6c(v18, v19, (short *)v24);
    else
      v12 = v20;
    *(uint *)(v10 + 72) = v12;
    Function_200d3f4(*(uint **)(v10 + 72), 0);
    v13 = 5461 * (v11 / 2) >> 4;
    v14 = (int)(16 * (ull)((ll_mul(SHIWORD(Unknown_20f983c[v13]), 196608LL) + 2048) >> 12)) >> 16;
    v22 = (int)(16 * (ull)((ll_mul(SLOWORD(Unknown_20f983c[v13]), 196608LL) + 2048) >> 12)) >> 16;
    if ( ((uint)v11 >> 31) + __ROR4__((v11 << 31) - ((uint)v11 >> 31), 31) )
    {
      v15 = (short)(v8 - v14);
    }
    else
    {
      v15 = (short)(v8 + v14);
      Function_200d7d4(*(int **)(v10 + 72), 1);
    }
    Function_200d4c4(*(int **)(v10 + 72), v15, (short)(v21 - v22));
    if ( v11 >= 2 )
      v16 = 0;
    else
      v16 = 8;
    ++v11;
    *(uint *)(v10 + 120) = v16;
    v10 += 4;
  }
  while ( v11 < 6 );
  return Function_22201e8(*(uint *)v23, (int)Function_22328b8, v23);
}

//----- (02232B40) --------------------------------------------------------
uint __fastcall Function_2232b40(int *a1, int a2)
{
  int v2;
  int *v3;
  short v4;
  short v5;
  uint result;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*(uint *)(a2 + 12) )
  {
    case 0u:
      Function_200d390(*(uint **)(a2 + 92), 1);
      ++*(uint *)(v2 + 12);
      goto LABEL_13;
    case 1u:
      if ( !Function_200d3b8(*(int **)(a2 + 92)) )
      {
        Function_200d390(*(uint **)(v2 + 92), 0);
        ++*(uint *)(v2 + 12);
        Function_2225e68((short *)(v2 + 20), 10, 10, 0, 8);
        v4 = Function_20080c0(*(uint *)(v2 + 16), 0);
        v5 = Function_20080c0(*(uint *)(v2 + 16), 1u);
        Function_2225bc8(v2 + 56, v4, *(short *)(v2 + 136), v5, *(ushort *)(v2 + 138), 8u);
      }
      goto LABEL_13;
    case 2u:
      Function_2225c74(a2 + 56, *(uint *)(a2 + 16));
      if ( !Function_22260c8(v2 + 20, *(uint *)(v2 + 16)) )
      {
        Function_2007dec(*(uint *)(v2 + 16), 6u, 1);
        Function_2007dec(*(uint *)(v2 + 16), 0xCu, 256);
        Function_2007dec(*(uint *)(v2 + 16), 0xDu, 256);
        Function_200d364(*(int **)(v2 + 92), 1u);
        Function_200d3a4(*(uint **)(v2 + 92), 4096);
        Function_200d390(*(uint **)(v2 + 92), 1);
        ++*(uint *)(v2 + 12);
      }
      goto LABEL_13;
    case 3u:
      if ( !Function_200d3b8(*(int **)(a2 + 92)) )
      {
        Function_200d390(*(uint **)(v2 + 92), 0);
        ++*(uint *)(v2 + 12);
        Function_2225bc8(v2 + 96, 0, 0, *(short *)(v2 + 138), 0, 8u);
      }
      goto LABEL_13;
    case 4u:
      if ( Function_2225c14(a2 + 96) )
        Function_200d4c4(*(int **)(v2 + 92), *(short *)(v2 + 136), *(short *)(v2 + 98));
      else
        ++*(uint *)(v2 + 12);
      goto LABEL_13;
    case 5u:
      Function_200d0f4(*(uint *)(a2 + 92));
      Function_2220220(*(uint *)v2, v3);
      result = free(v2);
      break;
    default:
LABEL_13:
      result = Function_200c7ec(*(int **)(v2 + 8));
      break;
  }
  return result;
}

//----- (02232CA8) --------------------------------------------------------
uint *__fastcall Function_2232ca8(int a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = (int *)Function_2235e50(a1);
  v9 = (int)v8;
  *v8 = v5;
  v8[1] = v4;
  v8[2] = v6;
  v10 = Function_2220240(v5);
  v11 = Function_22232fc(*(uint *)v9, v10);
  *(uint *)(v9 + 16) = v11;
  Function_2007dec(v11, 6u, 0);
  v12 = Function_2220240(v5);
  *(ushort *)(v9 + 136) = Function_22258e0(v5, v12);
  v13 = Function_2220240(v5);
  *(ushort *)(v9 + 138) = Function_22258e0(v5, v13);
  *(uint *)(v9 + 92) = v7;
  Function_200d474(v7, 100);
  Function_200d460(*(int **)(v9 + 92), 1);
  Function_200d4c4(*(int **)(v9 + 92), *(short *)(v9 + 136), *(short *)(v9 + 138));
  return Function_22201e8(*(uint *)v9, (int)Function_2232b40, v9);
}

//----- (02232D38) --------------------------------------------------------
uint __fastcall Function_2232d38(int a1, int *a2)
{
  int v2;
  char v3;

  v2 = a1;
  v3 = Function_2225950(a2);
  return Function_2003a2c(*(uint *)(v2 + 196), 2, (1 << v3) & 0xFFFF, 8u, 0);
}

//----- (02232D64) --------------------------------------------------------
uint __fastcall Function_2232d64(short *a1, int a2, int a3, int a4)
{
  short *v4;
  int v5;
  int v6;
  uint v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  Function_2225ef0(a1 + 20, 10, 10, 10, 20, 10, 8);
  Function_2225e68(v4 + 38, 10, 10, 1, 4);
  *((uint *)v4 + 37) = 0;
  *((uint *)v4 + 38) = 6;
  v5 = Function_2220240(*(uint *)v4);
  v6 = Function_2235254(*(uint *)v4, v5);
  Function_200d3f4(*((uint **)v4 + 8), *((ushort *)&dword_223A1CC + v6));
  Function_200d3f4(*((uint **)v4 + 6), 1);
  Function_2225fa4(v4 + 20, &v9, (int *)&v8);
  if ( *((uint *)v4 + 50) == 1 )
    v9 = fsub(0, v9);
  Function_200d6e8(*((int **)v4 + 6), v9, v8);
  return Function_2232d38((int)v4, *((int **)v4 + 6));
}

//----- (02232E04) --------------------------------------------------------
int __fastcall Function_2232e04(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v5;
  int v6;

  v1 = a1;
  v2 = *(uint *)(a1 + 148);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_2225f6c(v1 + 40);
      if ( Function_2225eb8(v1 + 76) )
      {
        *(ushort *)(v1 + 40) = *(ushort *)(v1 + 76);
        Function_2225fa4((short *)(v1 + 40), &v6, (int *)&v5);
        if ( *(uint *)(v1 + 200) == 1 )
          v6 = fsub(0, v6);
        Function_200d6e8(*(int **)(v1 + 24), v6, v5);
        Function_222605c(
          *(int **)(v1 + 24),
          (short)*(uint *)(v1 + 20),
          (short)*(uint *)(v1 + 16),
          *(uint *)(v1 + 60),
          0);
      }
      else
      {
        ++*(uint *)(v1 + 148);
        Function_200d3f4(*(uint **)(v1 + 32), 0);
        Function_200d3f4(*(uint **)(v1 + 24), 0);
        v3 = 1;
      }
    }
    else if ( v2 == 2 )
    {
      v3 = 1;
    }
  }
  else
  {
    Function_2225f6c(v1 + 40);
    Function_2225fa4((short *)(v1 + 40), &v6, (int *)&v5);
    if ( *(uint *)(v1 + 200) == 1 )
      v6 = fsub(0, v6);
    Function_200d6e8(*(int **)(v1 + 24), v6, v5);
    Function_222605c(
      *(int **)(v1 + 24),
      (short)*(uint *)(v1 + 20),
      (short)*(uint *)(v1 + 16),
      *(uint *)(v1 + 60),
      0);
    if ( --*(uint *)(v1 + 152) < 0 )
    {
      ++*(uint *)(v1 + 148);
      Function_2225ef0((short *)(v1 + 40), 10, 1, 20, 20, 10, 4);
    }
  }
  return v3;
}

//----- (02232F30) --------------------------------------------------------
uint __fastcall Function_2232f30(int a1)
{
  short *v1;
  int v2;
  int v3;
  short v5[2];
  int v6;
  uint v7;
  int v8;

  v1 = (short *)a1;
  Function_200d550(*(int **)(a1 + 28), &v6, v5);
  Function_2225bc8((int)(v1 + 56), (short)v6, (short)v6, (short)(v5[0] - 64), v5[0], 8u);
  Function_2225ef0(v1 + 20, 2, 10, 20, 10, 10, 8);
  Function_2225fa4(v1 + 20, &v8, (int *)&v7);
  if ( *((uint *)v1 + 51) == 1 )
    v8 = fsub(0, v8);
  Function_200d6e8(*((int **)v1 + 7), v8, v7);
  Function_2225c50((int)(v1 + 56), *((int **)v1 + 7));
  *((uint *)v1 + 37) = 0;
  *((uint *)v1 + 38) = 6;
  v2 = Function_2220248(*(uint *)v1);
  v3 = Function_2235254(*(uint *)v1, v2);
  Function_200d3f4(*((uint **)v1 + 9), *((ushort *)&dword_223A1CC + v3));
  Function_200d3f4(*((uint **)v1 + 7), 1);
  return Function_2232d38((int)v1, *((int **)v1 + 7));
}

//----- (02232FF0) --------------------------------------------------------
int __fastcall Function_2232ff0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint v6;
  int v7;

  v1 = a1;
  v2 = *(uint *)(a1 + 148);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_2225c50(v1 + 112, *(int **)(v1 + 28));
      v4 = Function_2225f6c(v1 + 40);
      Function_2225fa4((short *)(v1 + 40), &v7, (int *)&v6);
      if ( *(uint *)(v1 + 204) == 1 )
        v7 = fsub(0, v7);
      Function_200d6e8(*(int **)(v1 + 28), v7, v6);
      if ( !v4 )
      {
        ++*(uint *)(v1 + 148);
        v3 = 1;
      }
    }
    else if ( v2 == 2 )
    {
      v3 = 1;
    }
  }
  else
  {
    --*(uint *)(v1 + 152);
    Function_2225c50(v1 + 112, *(int **)(v1 + 28));
    if ( *(uint *)(v1 + 152) < 0 )
      ++*(uint *)(v1 + 148);
  }
  return v3;
}

//----- (02233094) --------------------------------------------------------
int __fastcall Function_2233094(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = (int)a2;
  switch ( (uchar)a2[2] )
  {
    case 0u:
      Function_2235780(*a2);
      Function_2226424(v2 + 156, 0, 8, 16, 8, 8u);
      ++*(uint *)(v2 + 8);
      break;
    case 1u:
      if ( Function_2226454((int)(a2 + 39)) )
      {
        ++*(uint *)(v2 + 8);
        Function_2232d64((short *)v2, v3, v4, v5);
      }
      break;
    case 2u:
      if ( Function_2232e04((int)a2) )
      {
        ++*(uint *)(v2 + 8);
        *(uint *)(v2 + 12) = 2;
      }
      break;
    case 3u:
      v6 = a2[3] - 1;
      a2[3] = v6;
      if ( v6 < 0 )
      {
        Function_2232f30((int)a2);
        ++*(uint *)(v2 + 8);
      }
      break;
    case 4u:
      if ( Function_2232ff0((int)a2) )
      {
        ++*(uint *)(v2 + 8);
        Function_2226424(v2 + 156, 8, 0, 8, 16, 8u);
      }
      break;
    case 5u:
      if ( Function_2226454((int)(a2 + 39)) )
        ++*(uint *)(v2 + 8);
      break;
    case 6u:
      Function_2220220(*a2, a1);
      free(v2);
      break;
    default:
      return Function_200c7ec(*(int **)(v2 + 4));
  }
  return Function_200c7ec(*(int **)(v2 + 4));
}

//----- (02233178) --------------------------------------------------------
uint *__fastcall Function_2233178(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  short v7;
  int v8;
  int v9;
  int v10;
  int v11;
  short v12;
  int v13;
  int v14;
  int *v15;
  int *v16;

  v1 = a1;
  v2 = (int *)Function_2235e50(a1);
  v3 = (int)v2;
  *v2 = v1;
  v2[1] = Function_22202ec(v1);
  *(uint *)(v3 + 196) = Function_222332c(*(uint *)v3);
  v4 = Function_2220240(v1);
  v5 = Function_22232fc(*(uint *)v3, v4);
  v6 = (short)Function_20080c0(v5, 0);
  v7 = Function_20080c0(v5, 1u);
  v8 = (short)(v7 - Function_20080c0(v5, 0x29u));
  v9 = Function_2220248(v1);
  v10 = Function_22232fc(*(uint *)v3, v9);
  v11 = (short)Function_20080c0(v10, 0);
  LOWORD(v1) = Function_20080c0(v10, 1u);
  v12 = Function_20080c0(v10, 0x29u);
  *(uint *)(v3 + 20) = v8;
  v13 = (short)(v1 - v12);
  v14 = Function_2220240(*(uint *)v3);
  *(uint *)(v3 + 16) = Function_2223354(*(uint *)v3, v14);
  v15 = (int *)Function_22202c0(*(uint *)v3, 0);
  *(uint *)(v3 + 24) = v15;
  Function_200d474(v15, 100);
  Function_200d460(*(int **)(v3 + 24), 1);
  Function_200d4c4(*(int **)(v3 + 24), v6, v8);
  Function_200d3f4(*(uint **)(v3 + 24), 0);
  Function_200d810(*(int **)(v3 + 24), 1);
  Function_200d6a4(*(uint **)(v3 + 24), 2);
  v16 = (int *)Function_22202c0(*(uint *)v3, 1);
  *(uint *)(v3 + 28) = v16;
  Function_200d474(v16, 100);
  Function_200d460(*(int **)(v3 + 28), 1);
  Function_200d4c4(*(int **)(v3 + 28), v11, v13);
  Function_200d3f4(*(uint **)(v3 + 28), 0);
  Function_200d810(*(int **)(v3 + 28), 1);
  Function_200d6a4(*(uint **)(v3 + 28), 2);
  Function_200d7e0(*(uint ***)(v3 + 28), 0, 40);
  *(uint *)(v3 + 200) = Function_22234a8(*(uint *)v3, 0);
  *(uint *)(v3 + 204) = Function_22234a8(*(uint *)v3, 1);
  *(uint *)(v3 + 32) = Function_22202c0(*(uint *)v3, 2);
  *(uint *)(v3 + 36) = Function_22202c0(*(uint *)v3, 3);
  Function_200d3f4(*(uint **)(v3 + 32), 0);
  Function_200d3f4(*(uint **)(v3 + 36), 0);
  return Function_22201e8(*(uint *)v3, (int)Function_2233094, v3);
}

//----- (022332E8) --------------------------------------------------------
int __fastcall Function_22332e8(int a1)
{
  int v1;

  v1 = a1;
  Function_2225e68((short *)(a1 + 248), 25, 10, 10, 10);
  return Function_22261c4(
           v1 + 72,
           (int *)(v1 + 248),
           (int)Function_2225eb8,
           *(ushort *)(v1 + 56),
           *(ushort *)(v1 + 58),
           9,
           3u,
           1,
           *(uint *)(v1 + 68),
           *(uint *)(v1 + 64),
           *(uint *)(v1 + 60),
           0);
}

//----- (02233338) --------------------------------------------------------
uint __fastcall Function_2233338(int a1)
{
  int v1;

  v1 = a1;
  Function_2225e68((short *)(a1 + 248), 10, 10, 25, 6);
  Function_22261c4(
    v1 + 72,
    (int *)(v1 + 248),
    (int)Function_2225eb8,
    *(ushort *)(v1 + 56),
    *(ushort *)(v1 + 58),
    5,
    3u,
    1,
    *(uint *)(v1 + 60),
    *(uint *)(v1 + 64),
    *(uint *)(v1 + 68),
    0);
  return Function_200d3f4(*(uint **)(v1 + 60), 1);
}

//----- (02233394) --------------------------------------------------------
int __fastcall Function_2233394(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int result;

  v4 = a2;
  v5 = a1;
  switch ( (uchar)*(uint *)(a2 + 12) )
  {
    case 0u:
      Function_22332e8(a2);
      ++*(uint *)(v4 + 12);
      goto LABEL_12;
    case 1u:
      if ( !Function_2226274(a2 + 72, a2, a3, a4) )
      {
        Function_200d3f4(*(uint **)(v4 + 60), 1);
        ++*(uint *)(v4 + 12);
        Function_2226108(v4 + 20, 4, 0, 1, 6);
      }
      goto LABEL_12;
    case 2u:
      if ( !Function_222619c(
              (short *)(a2 + 20),
              *(short *)(a2 + 56),
              *(short *)(a2 + 58),
              *(uint *)(a2 + 16)) )
      {
        ++*(uint *)(v4 + 12);
        Function_2233338(v4);
      }
      goto LABEL_12;
    case 3u:
      if ( !Function_2226274(a2 + 72, a2, a3, a4) )
        ++*(uint *)(v4 + 12);
      goto LABEL_12;
    case 4u:
      v6 = 0;
      v7 = a2;
      do
      {
        Function_200d0f4(*(uint *)(v7 + 60));
        ++v6;
        v7 += 4;
      }
      while ( v6 < 3 );
      free(v4);
      result = Function_2220220(*(uint *)v4, v5);
      break;
    default:
LABEL_12:
      result = Function_200c7ec(*(int **)(v4 + 8));
      break;
  }
  return result;
}

//----- (02233454) --------------------------------------------------------
uint *__fastcall Function_2233454(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v15[13];
  int v16;

  v16 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = (int *)a4;
  v8 = Function_2235e50(a1);
  *(uint *)v8 = v5;
  *(uint *)(v8 + 4) = v4;
  *(uint *)(v8 + 8) = v6;
  v9 = Function_2220248(v5);
  v10 = Function_22232fc(*(uint *)v8, v9);
  *(uint *)(v8 + 16) = v10;
  *(ushort *)(v8 + 56) = Function_20080c0(v10, 0);
  *(ushort *)(v8 + 58) = Function_20080c0(*(uint *)(v8 + 16), 1u);
  *(ushort *)(v8 + 58) -= Function_20080c0(*(uint *)(v8 + 16), 0x29u);
  Function_222329c(v15, v5);
  v11 = 0;
  v12 = v8;
  do
  {
    if ( v11 )
    {
      v13 = Function_200ce6c(*(uint **)(v8 + 4), *(uint *)(v8 + 8), (short *)v15);
      *(uint *)(v12 + 60) = v13;
      Function_200d810(v13, 1);
    }
    else
    {
      *(uint *)(v12 + 60) = v7;
      Function_200d364(v7, 1u);
    }
    Function_200d474(*(int **)(v12 + 60), 100);
    Function_200d460(*(int **)(v12 + 60), 1);
    Function_200d4c4(*(int **)(v12 + 60), *(short *)(v8 + 56), *(short *)(v8 + 58));
    Function_200d3f4(*(uint **)(v12 + 60), 0);
    Function_200d6a4(*(uint **)(v12 + 60), 2);
    ++v11;
    v12 += 4;
  }
  while ( v11 < 3 );
  return Function_22201e8(*(uint *)v8, (int)Function_2233394, v8);
}

//----- (0223351C) --------------------------------------------------------
int __fastcall Function_223351c(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v3 = 0;
  v7 = a2;
  v4 = (uint *)(a1 + 48);
  v5 = 0;
  do
  {
    Function_2225a5c(v4, 0, 0x7FFF, 0, 0, 204800, 0, 48);
    ++v3;
    *(uint *)(v2 + 56) += v5;
    v4 += 9;
    *(uint *)(v2 + 72) *= v7;
    result = 10922;
    v2 += 36;
    v5 += 10922;
  }
  while ( v3 < 6 );
  return result;
}

//----- (02233574) --------------------------------------------------------
int __fastcall Function_2233574(int a1)
{
  int v1;
  int v2;
  int v3;
  long long v4;
  int v5;
  char v6;
  int result;
  int v8;
  int v9;

  v1 = a1;
  v9 = 0;
  v8 = a1 + 48;
  v2 = a1;
  v3 = a1;
  do
  {
    Function_2225ae0(v8);
    v4 = ll_mul(SLOWORD(Unknown_20f983c[(5 * *(uint *)(v2 + 56) & 0xFFFF) >> 4]), 40960 * *(uint *)(v1 + 20));
    Function_200d4c4(
      *(int **)(v3 + 24),
      (short)(*(ushort *)(v1 + 304) + *(ushort *)(v2 + 48)),
      (short)(*(ushort *)(v1 + 306) + ((uint)((v4 + 2048) >> 12) >> 12)));
    v5 = *(uint *)(v2 + 56);
    if ( v5 < 0x3FFF || v5 > 48969 )
    {
      v6 = Function_222339c(*(uint *)v1);
      Function_200d460(*(int **)(v3 + 24), v6 + 1);
    }
    else
    {
      Function_200d460(*(int **)(v3 + 24), 1);
    }
    v2 += 36;
    v8 += 36;
    v3 += 4;
    result = v9 + 1;
    v9 = result;
  }
  while ( result < 6 );
  return result;
}

//----- (02233644) --------------------------------------------------------
int __fastcall Function_2233644(int *a1, uint *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  uint *v6;
  int result;

  v2 = (int)a2;
  v3 = a1;
  switch ( (uchar)a2[3] )
  {
    case 0u:
      Function_2235780(*a2);
      Function_2226424(v2 + 264, 1, 16, 15, 0, 0xAu);
      Function_223351c(v2, *(uint *)(v2 + 20));
      Function_2233574(v2);
      ++*(uint *)(v2 + 12);
      goto LABEL_12;
    case 1u:
      Function_2233574((int)a2);
      if ( Function_2226454(v2 + 264) )
      {
        ++*(uint *)(v2 + 12);
        *(uint *)(v2 + 16) = 28;
      }
      goto LABEL_12;
    case 2u:
      Function_2233574((int)a2);
      v4 = *(uint *)(v2 + 16) - 1;
      *(uint *)(v2 + 16) = v4;
      if ( v4 < 0 )
      {
        ++*(uint *)(v2 + 12);
        Function_2226424(v2 + 264, 16, 1, 0, 15, 0xAu);
      }
      goto LABEL_12;
    case 3u:
      Function_2233574((int)a2);
      if ( Function_2226454(v2 + 264) )
        ++*(uint *)(v2 + 12);
      goto LABEL_12;
    case 4u:
      v5 = 0;
      v6 = a2;
      do
      {
        Function_200d0f4(v6[6]);
        ++v5;
        ++v6;
      }
      while ( v5 < 6 );
      free(v2);
      result = Function_2220220(*(uint *)v2, v3);
      break;
    default:
LABEL_12:
      result = Function_200c7ec(*(int **)(v2 + 8));
      break;
  }
  return result;
}

//----- (02233734) --------------------------------------------------------
uint *__fastcall Function_2233734(int a1, int a2, int a3, int a4)
{
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
  int v15[13];
  int v16;

  v16 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_2235e50(a1);
  *(uint *)v8 = v5;
  *(uint *)(v8 + 4) = v4;
  *(uint *)(v8 + 8) = v6;
  v9 = Function_2220240(v5);
  v10 = Function_22232fc(*(uint *)v8, v9);
  *(ushort *)(v8 + 304) = Function_20080c0(v10, 0);
  *(ushort *)(v8 + 306) = Function_20080c0(v10, 1u);
  Function_222329c(v15, v5);
  v11 = 0;
  v12 = v8;
  do
  {
    if ( v11 )
      *(uint *)(v12 + 24) = Function_200ce6c(*(uint **)(v8 + 4), *(uint *)(v8 + 8), (short *)v15);
    else
      *(uint *)(v12 + 24) = v7;
    Function_200d474(*(int **)(v12 + 24), 100);
    Function_200d810(*(int **)(v12 + 24), 1);
    Function_200d390(*(uint **)(v12 + 24), 1);
    ++v11;
    v12 += 4;
  }
  while ( v11 < 6 );
  v13 = Function_2220240(*(uint *)v8);
  *(uint *)(v8 + 20) = Function_2225964(*(uint *)v8, v13);
  return Function_22201e8(*(uint *)v8, (int)Function_2233644, v8);
}

//----- (022337E0) --------------------------------------------------------
uint __fastcall Function_22337e0(int *a1, int a2, short a3, short a4)
{
  int v4;
  short v5;
  uint *v6;
  short v7;
  char v9;
  int v10;

  v4 = a2;
  v5 = a3;
  v6 = (uint *)a1;
  v7 = a4;
  Function_200d550(a1, &v10, &v9);
  Function_2225bc8(
    v4,
    (short)v10,
    (short)(v10 + (v5 << 8)),
    *(short *)&v9,
    *(ushort *)&v9 - (v7 << 7),
    0x3Bu);
  return Function_200d3f4(v6, 1);
}

//----- (02233834) --------------------------------------------------------
int __fastcall Function_2233834(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  uint v5;
  long long v6;
  long long v7;
  int v8;
  int v9;
  uint v10;
  char v12;
  int v13;

  v2 = a1;
  if ( !Function_2225c50(a2, a1) )
    return 1;
  Function_200d550(v2, &v13, &v12);
  v3 = (short)v13;
  v4 = SLOWORD(Unknown_20f983c[(364 * (short)v13 & 0xFFFF) >> 4]) >> 31;
  v5 = SLOWORD(Unknown_20f983c[(364 * (short)v13 & 0xFFFF) >> 4]);
  v6 = ll_mul(SLOWORD(Unknown_20f983c[(364 * (short)v13 & 0xFFFF) >> 4]), 57344LL);
  Function_200d4c4(v2, v3, (short)(*(ushort *)&v12 + ((uint)((v6 + 2048) >> 12) >> 12)));
  v7 = ll_mul(__PAIR__(v4, v5), 696LL);
  v8 = fflt(-(int)((v7 + 2048) >> 12));
  v9 = f_div(v8, 0x45800000u);
  v10 = fadd(0x3F800000u, v9);
  Function_200d6e8(v2, v10, v10);
  return 0;
}

//----- (02233900) --------------------------------------------------------
BOOL __fastcall Function_2233900(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int v10;

  v10 = a4;
  v4 = a1;
  if ( a1[157] < 15 && ++a1[156] > 6 )
  {
    a1[156] = 0;
    Function_22337e0((int *)a1[a1[157] + 6], (int)&a1[9 * a1[157] + 21], a1[4], a1[5]);
    ++v4[157];
  }
  v5 = v4[157];
  v6 = 0;
  if ( v5 > 0 )
  {
    v7 = (int)(v4 + 21);
    v8 = v4;
    do
    {
      v10 = Function_2233834((int *)v8[6], v7);
      v5 = v4[157];
      ++v6;
      v7 += 36;
      ++v8;
    }
    while ( v6 < v5 );
  }
  return v5 >= 15 && v10 == 1;
}

//----- (02233988) --------------------------------------------------------
int __fastcall Function_2233988(int *a1, uint *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;

  v4 = (int)a2;
  v5 = a1;
  if ( !Function_2233900(a2, (int)a2, a3, a4) )
    return Function_200c7ec(*(int **)(v4 + 8));
  v6 = 0;
  v7 = v4;
  do
  {
    Function_200d0f4(*(uint *)(v7 + 24));
    ++v6;
    v7 += 4;
  }
  while ( v6 < 15 );
  free(v4);
  return Function_2220220(*(uint *)v4, v5);
}

//----- (022339C4) --------------------------------------------------------
uint *__fastcall Function_22339c4(int a1, int a2, int a3, int a4)
{
  int v4;
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
  int v17;
  int v18;
  int v19[13];
  int v20;

  v20 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_2235e50(a1);
  *(uint *)v8 = v5;
  *(uint *)(v8 + 4) = v4;
  *(uint *)(v8 + 8) = v6;
  v9 = Function_2220240(v5);
  v10 = Function_22232fc(*(uint *)v8, v9);
  v18 = (short)Function_20080c0(v10, 0);
  v17 = (short)Function_20080c0(v10, 1u);
  Function_222329c(v19, v5);
  v11 = 0;
  v12 = v8;
  do
  {
    if ( v11 )
      *(uint *)(v12 + 24) = Function_200ce6c(*(uint **)(v8 + 4), *(uint *)(v8 + 8), (short *)v19);
    else
      *(uint *)(v12 + 24) = v7;
    Function_200d474(*(int **)(v12 + 24), 100);
    Function_200d460(*(int **)(v12 + 24), 1);
    Function_200d6a4(*(uint **)(v12 + 24), 2);
    Function_200d3f4(*(uint **)(v12 + 24), 0);
    Function_200d4c4(*(int **)(v12 + 24), v18, v17);
    s32_div_f(v11, 3);
    Function_200d364(*(int **)(v12 + 24), v13);
    ++v11;
    v12 += 4;
  }
  while ( v11 < 15 );
  v14 = Function_2220240(*(uint *)v8);
  *(uint *)(v8 + 16) = Function_2225964(*(uint *)v8, v14);
  v15 = Function_2220240(*(uint *)v8);
  *(uint *)(v8 + 20) = Function_222598c(*(uint *)v8, v15);
  return Function_22201e8(*(uint *)v8, (int)Function_2233988, v8);
}

//----- (02233AA0) --------------------------------------------------------
uint *__fastcall Function_2233aa0(uint *result)
{
  int v1;

  v1 = result[11];
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      result[6] = 0x7FFF;
      result[9] = -5;
      result[7] = -65536;
      result[10] = 16;
    }
    else if ( v1 == 2 )
    {
      result[6] = 0x7FFF;
      result[9] = 10;
      result[7] = 81920;
      result[10] = 16;
    }
  }
  else
  {
    result[6] = 0x7FFF;
    result[9] = 5;
    result[7] = 0x10000;
    result[10] = 16;
  }
  return result;
}

//----- (02233AF4) --------------------------------------------------------
int __fastcall Function_2233af4(uint *a1)
{
  uint *v1;
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

  v1 = a1;
  v11 = Function_22265e4(a1[1]);
  v2 = v1[4];
  v10 = v2 - 8;
  v9 = v2 + 88;
  if ( v2 - 8 < 0 )
    v10 = 0;
  if ( v9 > 192 )
    v9 = 192;
  v3 = v10;
  v1[8] = -v1[8];
  for ( result = v9; v3 < v9; ++v3 )
  {
    if ( v3 & 2 )
      v5 = v1[7] + (v1[8] << 12);
    else
      v5 = v1[7] - (v1[8] << 12);
    v6 = (int)(16
                    * (ull)((ll_mul(
                                            SLOWORD(Unknown_20f983c[((v1[6] + 409 * (v3 - v10)) & 0xFFFF) >> 4]),
                                            v5)
                                        + 2048) >> 12)) >> 16;
    v7 = (short)(v6 + s32_div_f((v3 - v1[5]) * v1[9], 10));
    v8 = v3 - 1;
    if ( v3 - 1 < 0 )
      v8 = v3 + 191;
    *(uint *)(v11 + 4 * v8) = Function_22266e8(
                                  ((short)v1[12] + v7) & 0xFFFF,
                                  (ushort)(v1[12] >> 16));
    result = v9;
  }
  return result;
}

//----- (02233BD8) --------------------------------------------------------
int __fastcall Function_2233bd8(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  uchar v9;
  uchar v10;
  uchar v11;
  int v12;
  int v13;
  uchar v14;
  int v15;
  uint *v16;
  int v17;
  int v18;
  uchar v19;

  v2 = a2;
  v3 = a1;
  result = a2[2];
  if ( result )
  {
    if ( result == 1 )
    {
      --a2[10];
      Function_2233af4(a2);
      result = v2[10];
      if ( result < 0 )
      {
        v5 = v2[11] + 1;
        v2[11] = v5;
        if ( v5 >= 3 )
        {
          result = v2[2] + 1;
          v2[2] = result;
        }
        else
        {
          result = 0;
          v2[2] = 0;
        }
      }
    }
    else if ( result == 2 )
    {
      v6 = Function_2220248(*a2);
      if ( !Function_222337c(*v2, v6) )
        Function_2007dec(v2[3], 6u, 0);
      Function_22265f8(v2[1]);
      Function_22265c0(v2[1]);
      v9 = Function_22233b0(*v2, 1, v7, v8);
      v10 = Function_2223428(*v2, 1);
      Function_2019060(v9, v10);
      v11 = Function_222339c(*v2);
      Function_2019060(0, v11);
      v14 = Function_22233b0(*v2, 1, v12, v13);
      v15 = Function_221fde4(*v2);
      Function_2019690(v14, 0x4000, 0, v15);
      v16 = (uint *)Function_2220278(*v2);
      v19 = Function_22233b0(*v2, 1, v17, v18);
      Function_2019ebc(v16, v19);
      free((int)v2);
      result = Function_2220220(*v2, v3);
    }
  }
  else
  {
    Function_2233aa0(a2);
    Function_2233af4(v2);
    result = v2[2] + 1;
    v2[2] = result;
  }
  return result;
}

//----- (02233CD4) --------------------------------------------------------
uint *__fastcall Function_2233cd4(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  short v5;
  short v6;
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
  uchar v18;
  uchar v19;
  int v20;

  v1 = a1;
  v2 = (int *)Function_2235e50(a1);
  *v2 = v1;
  v3 = Function_2220248(v1);
  v4 = Function_22232fc(*v2, v3);
  v2[3] = v4;
  v5 = Function_20080c0(v4, 0);
  v6 = Function_20080c0(v2[3], 1u);
  v7 = (short)(v6 - Function_20080c0(v2[3], 0x29u));
  v8 = Function_2220248(*v2);
  if ( !Function_222337c(*v2, v8) )
    Function_2007dec(v2[3], 6u, 1);
  v2[5] = v7;
  v9 = v7 - 40;
  v2[4] = v9;
  v2[12] = Function_22266e8(0xFFFF * (short)(v5 - 40) & 0xFFFF, 0xFFFF * v9 & 0xFFFF);
  Function_22233ec(*v2, 1, v10, v11);
  Function_22266f0();
  v13 = v12;
  v14 = Function_221fde4(*v2);
  v2[1] = (int)Function_2226544(v13, v2[12], v14);
  v2[8] = 1;
  v15 = Function_2220248(v1);
  if ( (uint)(Function_2235254(*v2, v15) - 3) <= 1 )
  {
    v18 = Function_22233b0(*v2, 1, v16, v17);
    v19 = Function_222339c(*v2);
    Function_2019060(v18, v19);
    v20 = Function_222339c(*v2);
    Function_2019060(0, (v20 + 1) & 0xFF);
  }
  return Function_22201e8(*v2, (int)Function_2233bd8, (int)v2);
}

//----- (02233DCC) --------------------------------------------------------
int __fastcall Function_2233dcc(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int result;
  int v5;
  ushort v6;
  int v7;
  int v8;
  ushort v9;
  int v10;

  v2 = a2;
  v3 = a1;
  result = a2[1];
  if ( (uint)result <= 5 )
    JUMPOUT(__CS__, *((short *)&off_2233DE8 + result) + 35864042);
  switch ( (uchar)result )
  {
    case 0:
      Function_2225bc8((int)(a2 + 3), 127, 0, 0, 0, 8u);
      REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
      Function_2235838(*v2);
      WIN0_X1 = 255;
      WIN0_Y1 = 191;
      v2[2] = 7;
      result = v2[1] + 1;
      v2[1] = result;
      break;
    case 1:
      result = a2[2] - 1;
      a2[2] = result;
      if ( result < 0 )
      {
        v5 = Function_222332c(*a2);
        v6 = Function_2222354(*v2);
        Function_2003178(v5, 1, v6);
        result = v2[1] + 1;
        v2[1] = result;
      }
      break;
    case 2:
      if ( Function_2225c14((int)(a2 + 3)) )
      {
        WIN0_X1 = (uchar)(*((ushort *)v2 + 6) + -128) | ((127 - *((ushort *)v2 + 6)) << 8) & 0xFF00;
        result = 191;
        WIN0_Y1 = 191;
      }
      else
      {
        result = v2[1] + 1;
        v2[1] = result;
      }
      break;
    case 3:
      v7 = Function_222332c(*a2);
      result = Function_200384c(v7);
      if ( !result )
      {
        ++v2[1];
        REG_DISPCNT &= 0xFFFF1FFF;
        v8 = Function_222332c(*v2);
        v9 = Function_2222354(*v2);
        result = Function_2003178(v8, 1, v9);
      }
      break;
    case 4:
      v10 = Function_222332c(*a2);
      result = Function_200384c(v10);
      if ( !result )
      {
        result = v2[1] + 1;
        v2[1] = result;
      }
      break;
    case 5:
      free((int)a2);
      result = Function_2220220(*v2, v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02233F30) --------------------------------------------------------
uint *__fastcall Function_2233f30(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)Function_2235e50(a1);
  *v2 = v1;
  return Function_22201e8(v1, (int)Function_2233dcc, (int)v2);
}

//----- (02233F4C) --------------------------------------------------------
uint __fastcall Function_2233f4c(int *a1, int a2)
{
  int v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*(uint *)(a2 + 12) )
  {
    case 0u:
      Function_2235780(*(uint *)a2);
      Function_2226424(v2 + 20, 0, 16, 16, 0, 8u);
      ++*(uint *)(v2 + 12);
      goto LABEL_10;
    case 1u:
      if ( Function_2226454(a2 + 20) )
        ++*(uint *)(v2 + 12);
      goto LABEL_10;
    case 2u:
      if ( !Function_200d3b8(*(int **)(a2 + 16)) )
      {
        ++*(uint *)(v2 + 12);
        Function_2226424(v2 + 20, 16, 0, 0, 16, 8u);
      }
      goto LABEL_10;
    case 3u:
      if ( Function_2226454(a2 + 20) )
        ++*(uint *)(v2 + 12);
      goto LABEL_10;
    case 4u:
      Function_200d0f4(*(uint *)(a2 + 16));
      Function_2220220(*(uint *)v2, v3);
      result = free(v2);
      break;
    default:
LABEL_10:
      result = Function_200c7ec(*(int **)(v2 + 8));
      break;
  }
  return result;
}

//----- (02234008) --------------------------------------------------------
uint *__fastcall Function_2234008(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  uint *v8;
  int v9;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = (uint *)Function_2235e50(a1);
  v9 = (int)v8;
  *v8 = v5;
  v8[1] = v4;
  v8[2] = v6;
  v8[4] = v7;
  Function_200d390(v7, 1);
  Function_200d810(*(int **)(v9 + 16), 1);
  return Function_22201e8(*(uint *)v9, (int)Function_2233f4c, v9);
}

//----- (02234044) --------------------------------------------------------
int __fastcall Function_2234044(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 4);
  switch ( (uchar)result )
  {
    case 0:
      Function_2225ef0(
        (short *)(a2 + 20),
        (short)*(uint *)(a2 + 92),
        (short)*(uint *)(a2 + 96),
        (short)*(uint *)(a2 + 100),
        *(uint *)(a2 + 104),
        *(uint *)(a2 + 108),
        *(uint *)(a2 + 116) >> 16);
      Function_222619c(
        (short *)(v2 + 56),
        *(short *)(v2 + 10),
        *(short *)(v2 + 8),
        *(uint *)(v2 + 16));
      Function_22260e8(v2 + 20, *(uint *)(v2 + 16));
      Function_2226024(
        *(uint *)(v2 + 16),
        *(short *)(v2 + 8),
        *(short *)(v2 + 12),
        *(uint *)(v2 + 40),
        0);
      result = *(uint *)(v2 + 4) + 1;
      *(uint *)(v2 + 4) = result;
      break;
    case 1:
      Function_222619c(
        (short *)(a2 + 56),
        *(short *)(a2 + 10),
        *(short *)(a2 + 8),
        *(uint *)(a2 + 16));
      v5 = Function_22260e8(v2 + 20, *(uint *)(v2 + 16));
      result = Function_2226024(
                 *(uint *)(v2 + 16),
                 *(short *)(v2 + 8),
                 *(short *)(v2 + 12),
                 *(uint *)(v2 + 40),
                 0);
      if ( !v5 )
      {
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 2:
      Function_2225ef0(
        (short *)(a2 + 20),
        (short)*(uint *)(a2 + 96),
        (short)*(uint *)(a2 + 92),
        (short)*(uint *)(a2 + 104),
        *(uint *)(a2 + 100),
        *(uint *)(a2 + 108),
        *(uint *)(a2 + 116) & 0xFFFF);
      Function_222619c(
        (short *)(v2 + 56),
        *(short *)(v2 + 10),
        *(short *)(v2 + 8),
        *(uint *)(v2 + 16));
      Function_22260e8(v2 + 20, *(uint *)(v2 + 16));
      Function_2226024(
        *(uint *)(v2 + 16),
        *(short *)(v2 + 8),
        *(short *)(v2 + 12),
        *(uint *)(v2 + 40),
        0);
      result = *(uint *)(v2 + 4) + 1;
      *(uint *)(v2 + 4) = result;
      break;
    case 3:
      Function_222619c(
        (short *)(a2 + 56),
        *(short *)(a2 + 10),
        *(short *)(a2 + 8),
        *(uint *)(a2 + 16));
      v6 = Function_22260e8(v2 + 20, *(uint *)(v2 + 16));
      result = Function_2226024(
                 *(uint *)(v2 + 16),
                 *(short *)(v2 + 8),
                 *(short *)(v2 + 12),
                 *(uint *)(v2 + 40),
                 0);
      if ( !v6 )
      {
        v7 = *(uint *)(v2 + 112) - 1;
        *(uint *)(v2 + 112) = v7;
        if ( v7 > 0 )
        {
          result = 0;
          *(uint *)(v2 + 4) = 0;
        }
        else
        {
          result = *(uint *)(v2 + 4) + 1;
          *(uint *)(v2 + 4) = result;
        }
      }
      break;
    case 4:
      Function_2007dec(*(uint *)(a2 + 16), 0, *(short *)(a2 + 10));
      Function_2007dec(*(uint *)(v2 + 16), 1u, *(short *)(v2 + 8));
      Function_2007dec(*(uint *)(v2 + 16), 0xCu, 256);
      Function_2007dec(*(uint *)(v2 + 16), 0xDu, 256);
      free(v2);
      result = Function_2220220(*(uint *)v2, v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02234214) --------------------------------------------------------
uint *__fastcall Function_2234214(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = (int *)Function_2235e50(a1);
  v3 = (int)v2;
  *v2 = v1;
  v4 = Function_2220248(v1);
  *(ushort *)(v3 + 12) = Function_2223354(*(uint *)v3, v4);
  v5 = Function_2220248(*(uint *)v3);
  v6 = Function_22232fc(*(uint *)v3, v5);
  *(uint *)(v3 + 16) = v6;
  *(ushort *)(v3 + 8) = Function_20080c0(v6, 1u);
  *(ushort *)(v3 + 10) = Function_20080c0(*(uint *)(v3 + 16), 0);
  *(uint *)(v3 + 92) = 10;
  *(uint *)(v3 + 96) = 7;
  *(uint *)(v3 + 100) = 10;
  *(uint *)(v3 + 104) = 30;
  *(uint *)(v3 + 108) = 10;
  *(uint *)(v3 + 112) = 1;
  *(uint *)(v3 + 116) = 262147;
  Function_2226108(v3 + 56, 2, 0, 1, 2);
  return Function_22201e8(*(uint *)v3, (int)Function_2234044, v3);
}

//----- (02234290) --------------------------------------------------------
int __fastcall Function_2234290(int *a1, int a2)
{
  int v2;
  int *v3;

  v2 = a2;
  v3 = a1;
  if ( Function_2225c50(a2 + 8, *(int **)(a2 + 44)) )
    return Function_200c7ec(*(int **)(v2 + 4));
  Function_200d0f4(*(uint *)(v2 + 44));
  free(v2);
  return Function_2220220(*(uint *)v2, v3);
}

//----- (022342C4) --------------------------------------------------------
uint *__fastcall Function_22342c4(int a1)
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

  v1 = a1;
  v2 = Function_2235e50(a1);
  *(uint *)v2 = v1;
  *(uint *)(v2 + 4) = Function_2220300(v1);
  v3 = Function_2220240(v1);
  if ( Function_223525c(v1, v3) == 3 )
  {
    *(uint *)(v2 + 44) = Function_2220298(v1, 0);
    v4 = Function_2220298(v1, 1);
  }
  else
  {
    *(uint *)(v2 + 44) = Function_2220298(v1, 1);
    v4 = Function_2220298(v1, 0);
  }
  Function_200d0f4(v4);
  v5 = Function_2225964(v1, v3);
  v6 = Function_222598c(v1, v3);
  v7 = Function_22258e0(v1, v3);
  v8 = Function_22258e0(v1, v3);
  v9 = v7 + (v5 << 6);
  v10 = v8 - 16 * v6;
  Function_200d4c4(*(int **)(v2 + 44), (short)v9, (short)v10);
  Function_2225bc8(v2 + 8, (short)v9, (short)(v9 + 48 * v5), (short)v10, v10 - 16 * v6, 6u);
  return Function_22201e8(*(uint *)v2, (int)Function_2234290, v2);
}

//----- (022343A0) --------------------------------------------------------
int __fastcall Function_22343a0(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 4);
  if ( (uint)result <= 5 )
    JUMPOUT(__CS__, *((short *)&off_22343BC + result) + 35865534);
  switch ( (uchar)result )
  {
    case 0:
      Function_2226108(a2 + 64, 4, 0, 1, 4);
      result = *(uint *)(v2 + 4) + 1;
      *(uint *)(v2 + 4) = result;
      break;
    case 1:
      result = Function_222619c(
                 (short *)(a2 + 64),
                 *(short *)(a2 + 24),
                 *(short *)(a2 + 26),
                 *(uint *)(a2 + 20));
      if ( !result )
      {
        ++*(uint *)(v2 + 4);
        result = Function_2225bc8(
                   v2 + 28,
                   *(short *)(v2 + 24),
                   (short)(*(ushort *)(v2 + 24) + 40 * *(uint *)(v2 + 12)),
                   *(short *)(v2 + 26),
                   *(ushort *)(v2 + 26) - 7 * *(ushort *)(v2 + 16),
                   4u);
      }
      break;
    case 2:
      result = Function_2225c74(a2 + 28, *(uint *)(a2 + 20));
      if ( !result )
      {
        ++*(uint *)(v2 + 4);
        result = 8;
        *(uint *)(v2 + 8) = 8;
      }
      break;
    case 3:
      result = *(uint *)(a2 + 8) - 1;
      *(uint *)(a2 + 8) = result;
      if ( result < 0 )
      {
        ++*(uint *)(a2 + 4);
        result = Function_2225bc8(
                   a2 + 28,
                   (short)(*(ushort *)(a2 + 24) + 40 * *(ushort *)(a2 + 12)),
                   *(short *)(a2 + 24),
                   (short)(*(ushort *)(a2 + 26) - 7 * *(uint *)(a2 + 16)),
                   *(ushort *)(a2 + 26),
                   4u);
      }
      break;
    case 4:
      result = Function_2225c74(a2 + 28, *(uint *)(a2 + 20));
      if ( !result )
      {
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 5:
      Function_2007dec(*(uint *)(a2 + 20), 0, *(short *)(a2 + 24));
      Function_2007dec(*(uint *)(v2 + 20), 1u, *(short *)(v2 + 26));
      free(v2);
      result = Function_2220220(*(uint *)v2, v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (022344D0) --------------------------------------------------------
uint *__fastcall Function_22344d0(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = (int *)Function_2235e50(a1);
  v3 = (int)v2;
  *v2 = v1;
  v4 = Function_2220240(v1);
  v5 = v4;
  v6 = Function_22232fc(v1, v4);
  *(uint *)(v3 + 20) = v6;
  *(ushort *)(v3 + 24) = Function_20080c0(v6, 0);
  *(ushort *)(v3 + 26) = Function_20080c0(*(uint *)(v3 + 20), 1u);
  *(uint *)(v3 + 12) = Function_2225964(v1, v5);
  *(uint *)(v3 + 16) = Function_222598c(v1, v5);
  return Function_22201e8(*(uint *)v3, (int)Function_22343a0, v3);
}

//----- (02234528) --------------------------------------------------------
uint __fastcall Function_2234528(int *a1, int a2)
{
  int v2;
  int *v3;
  uint result;
  int v5;
  short v6;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 4);
  if ( result <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2234544 + result) + 35865926);
  switch ( (uchar)result )
  {
    case 0:
      Function_2225bc8(
        a2 + 24,
        *(short *)(a2 + 20),
        (short)(*(ushort *)(a2 + 20) - 40 * *(ushort *)(a2 + 8)),
        *(short *)(a2 + 22),
        *(ushort *)(a2 + 22) + 16 * *(ushort *)(a2 + 12),
        4u);
      result = *(uint *)(v2 + 4) + 1;
      *(uint *)(v2 + 4) = result;
      break;
    case 1:
      result = Function_2225c74(a2 + 24, *(uint *)(a2 + 16));
      if ( !result )
      {
        ++*(uint *)(v2 + 4);
        result = Function_2226108(v2 + 60, 4, 0, 1, 4);
      }
      break;
    case 2:
      v5 = (short)Function_20080c0(*(uint *)(a2 + 16), 0);
      v6 = Function_20080c0(*(uint *)(v2 + 16), 1u);
      result = Function_222619c((short *)(v2 + 60), v5, v6, *(uint *)(v2 + 16));
      if ( !result )
      {
        ++*(uint *)(v2 + 4);
        result = Function_2225bc8(
                   v2 + 24,
                   (short)(*(ushort *)(v2 + 20) - 40 * *(uint *)(v2 + 8)),
                   *(short *)(v2 + 20),
                   (short)(*(ushort *)(v2 + 22) + 16 * *(ushort *)(v2 + 12)),
                   *(ushort *)(v2 + 22),
                   4u);
      }
      break;
    case 3:
      result = Function_2225c74(a2 + 24, *(uint *)(a2 + 16));
      if ( !result )
      {
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 4:
      Function_2007dec(*(uint *)(a2 + 16), 0, *(short *)(a2 + 20));
      Function_2007dec(*(uint *)(v2 + 16), 1u, *(short *)(v2 + 22));
      free(v2);
      result = Function_2220220(*(uint *)v2, v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (0223464C) --------------------------------------------------------
uint *__fastcall Function_223464c(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = (int *)Function_2235e50(a1);
  v3 = (int)v2;
  *v2 = v1;
  v4 = Function_2220248(v1);
  v5 = v4;
  v6 = Function_22232fc(v1, v4);
  *(uint *)(v3 + 16) = v6;
  *(ushort *)(v3 + 20) = Function_20080c0(v6, 0);
  *(ushort *)(v3 + 22) = Function_20080c0(*(uint *)(v3 + 16), 1u);
  *(uint *)(v3 + 8) = Function_2225964(v1, v5);
  *(uint *)(v3 + 12) = Function_222598c(v1, v5);
  return Function_22201e8(*(uint *)v3, (int)Function_2234528, v3);
}

//----- (022346A4) --------------------------------------------------------
uint *__fastcall Function_22346a4(int a1, uint *a2, int a3, int *a4)
{
  uint *v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  short v9;
  int *v10;
  int v11;
  int *v13;
  int *v14;
  char v15;
  short v16;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v13 = a4;
  v7 = (int *)Function_2235e50(a1);
  *v7 = v5;
  v14 = v7;
  v7[3] = v6;
  v8 = Function_2220240(v5);
  v14[4] = Function_2225964(v5, v8);
  Function_222329c((int *)&v15, *v14);
  *(ushort *)&v15 = Function_22258e0(v5, v8);
  v9 = Function_22258e0(v5, v8);
  v10 = v14;
  v16 = v9;
  v11 = 0;
  do
  {
    if ( v11 )
    {
      v10[5] = (int)Function_200ce6c(v4, v6, (short *)&v15);
    }
    else
    {
      v10[5] = (int)v13;
      Function_200d4c4(v13, *(short *)&v15, v16);
    }
    Function_200d3f4((uint *)v10[5], 0);
    Function_200d474((int *)v10[5], 100);
    Function_200d460((int *)v10[5], 1);
    ++v11;
    ++v10;
  }
  while ( v11 < 2 );
  return Function_22201e8(*v14, (int)Function_2234750, (int)v14);
}

//----- (02234750) --------------------------------------------------------
uint __fastcall Function_2234750(int *a1, uint *a2)
{
  int v2;
  int *v3;
  int v4;
  uint *v5;
  uint result;

  v2 = (int)a2;
  v3 = a1;
  switch ( (uchar)a2[1] )
  {
    case 0u:
      Function_223483c(a2[5], a2 + 7, a2 + 25, a2[4]);
      Function_223489c(*(uint *)(v2 + 20), v2 + 28, v2 + 100);
      ++*(uint *)(v2 + 4);
      *(uint *)(v2 + 8) = 8;
      goto LABEL_11;
    case 1u:
      --a2[2];
      Function_223489c(a2[5], a2 + 7, a2 + 25);
      if ( *(uint *)(v2 + 8) < 0 )
        ++*(uint *)(v2 + 4);
      goto LABEL_11;
    case 2u:
      Function_223483c(a2[6], a2 + 16, a2 + 34, a2[4]);
      Function_223489c(*(uint *)(v2 + 24), v2 + 64, v2 + 136);
      Function_223489c(*(uint *)(v2 + 20), v2 + 28, v2 + 100);
      ++*(uint *)(v2 + 4);
      goto LABEL_11;
    case 3u:
      Function_223489c(a2[5], a2 + 7, a2 + 25);
      if ( Function_223489c(*(uint *)(v2 + 24), v2 + 64, v2 + 136) )
        ++*(uint *)(v2 + 4);
      goto LABEL_11;
    case 4u:
      v4 = 0;
      v5 = a2;
      do
      {
        Function_200d0f4(v5[5]);
        ++v4;
        ++v5;
      }
      while ( v4 < 2 );
      Function_2220220(*(uint *)v2, v3);
      result = free(v2);
      break;
    default:
LABEL_11:
      result = Function_200c7ec(*(int **)(v2 + 12));
      break;
  }
  return result;
}

//----- (0223483C) --------------------------------------------------------
int __fastcall Function_223483c(uint *a1, int a2, short *a3, short a4)
{
  int v4;
  uint *v5;
  short *v6;
  short v7;
  char v9;
  int v10;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_200d6a4(a1, 2);
  Function_200d3f4(v5, 1);
  Function_200d550((int *)v5, &v10, &v9);
  Function_2225bc8(
    v4,
    (short)v10,
    (short)(v10 + 16 * v7),
    *(short *)&v9,
    *(ushort *)&v9 - 32,
    0x20u);
  return Function_2225e68(v6, 2, 10, 10, 32);
}

//----- (0223489C) --------------------------------------------------------
int __fastcall Function_223489c(int *a1, int a2, int a3)
{
  int *v3;
  int v4;

  v3 = a1;
  v4 = a3;
  Function_2225c50(a2, a1);
  if ( Function_22260a8(v4, v3) )
    return 0;
  Function_200d3f4((uint *)v3, 0);
  return 1;
}

//----- (022348C8) --------------------------------------------------------
uint *__fastcall Function_22348c8(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
  uint *v6;
  uint *v7;
  int v8;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = (uint *)Function_2235e50(a1);
  v8 = (int)v7;
  *v7 = v4;
  v7[3] = v5;
  v7[4] = v6;
  Function_200d3f4(v6, 0);
  Function_200d810(*(int **)(v8 + 16), 1);
  Function_200d474(*(int **)(v8 + 16), 100);
  Function_200d460(*(int **)(v8 + 16), 1);
  *(uint *)(v8 + 8) = Function_200d43c(*(int **)(v8 + 16));
  return Function_22201e8(*(uint *)v8, (int)Function_2234918, v8);
}

//----- (02234918) --------------------------------------------------------
uint __fastcall Function_2234918(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  char v5;
  uint result;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*(uint *)(a2 + 4) )
  {
    case 0u:
      Function_2226424(a2 + 20, 0, 16, 20, 4, 0xAu);
      Function_200d3f4(*(uint **)(v2 + 16), 1);
      Function_2235780(*(uint *)v2);
      ++*(uint *)(v2 + 4);
      goto LABEL_10;
    case 1u:
      if ( Function_2226454(a2 + 20) )
      {
        ++*(uint *)(v2 + 4);
        Function_200d390(*(uint **)(v2 + 16), 1);
        Function_200d3a4(*(uint **)(v2 + 16), 4096);
      }
      goto LABEL_10;
    case 2u:
      v4 = Function_200d3e0(*(int **)(a2 + 16));
      s32_div_f(v4, 3);
      Function_200d430(*(int **)(v2 + 16), *(uint *)(v2 + 8) + v5);
      if ( !Function_200d3b8(*(int **)(v2 + 16)) )
      {
        ++*(uint *)(v2 + 4);
        Function_2226424(v2 + 20, 16, 0, 4, 20, 8u);
      }
      goto LABEL_10;
    case 3u:
      if ( Function_2226454(a2 + 20) )
      {
        ++*(uint *)(v2 + 4);
        Function_200d3f4(*(uint **)(v2 + 16), 0);
      }
      goto LABEL_10;
    case 4u:
      Function_200d0f4(*(uint *)(a2 + 16));
      Function_2220220(*(uint *)v2, v3);
      result = free(v2);
      break;
    default:
LABEL_10:
      result = Function_200c7ec(*(int **)(v2 + 12));
      break;
  }
  return result;
}

//----- (02234A10) --------------------------------------------------------
uint *__fastcall Function_2234a10(int a1, uint *a2, int a3, int *a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint *v12;
  int v13;
  int *v14;
  int v15;
  int *v16;
  char v17;
  short v18;

  v12 = a2;
  v13 = a3;
  v4 = a1;
  v14 = a4;
  v5 = (int *)Function_2235e50(a1);
  *v5 = v4;
  v16 = v5;
  v5[2] = v13;
  v6 = Function_2220240(*v5);
  v15 = Function_2225964(v4, v6);
  Function_222329c((int *)&v17, *v16);
  *(ushort *)&v17 = Function_22258e0(v4, v6);
  v18 = Function_22258e0(v4, v6);
  v7 = 5;
  v8 = (int)(v16 + 5);
  v9 = (int)(v16 + 20);
  v10 = (int)(v16 + 14);
  do
  {
    if ( v7 == 5 )
    {
      *(uint *)(v8 + 12) = v14;
      Function_200d4c4(v14, *(short *)&v17, v18);
    }
    else
    {
      *(uint *)(v8 + 12) = Function_200ce6c(v12, v13, (short *)&v17);
    }
    Function_200d474(*(int **)(v8 + 12), 100);
    Function_200d460(*(int **)(v8 + 12), 1);
    Function_200d3f4(*(uint **)(v8 + 12), 0);
    Function_2234ae0(*(uint *)(v8 + 12), v10, v9, v7, v15, v12);
    v8 -= 4;
    v9 -= 4;
    v10 -= 4;
    --v7;
  }
  while ( v7 >= 0 );
  return Function_22201e8(*v16, (int)Function_2234b64, (int)v16);
}

//----- (02234AE0) --------------------------------------------------------
int __fastcall Function_2234ae0(int *a1, uint *a2, uint *a3, int a4, short a5)
{
  int v5;
  uint *v6;
  int *v7;
  uint *v8;
  int v10;

  v10 = a4;
  v5 = a4;
  v6 = a2;
  v7 = a1;
  v8 = a3;
  Function_200d364(a1, a4 / 2);
  *v8 = 2 * v5;
  *v6 = 16;
  Function_200d550(v7, (ushort *)&v10 + 1, &v10);
  return Function_200d4c4(v7, (short)(HIWORD(v10) + a5 * (-12 * v5 + 40)), (short)(v10 + 40));
}

//----- (02234B34) --------------------------------------------------------
int __fastcall Function_2234b34(uint *a1, uint *a2, int *a3)
{
  int v3;

  v3 = *a3;
  if ( *a3 <= 0 )
  {
    if ( *a2 <= 0 )
    {
      Function_200d3f4(a1, 0);
      return 1;
    }
    --*a2;
  }
  else
  {
    *a3 = v3 - 1;
    if ( v3 == 1 )
      Function_200d3f4(a1, 1);
  }
  return 0;
}

//----- (02234B64) --------------------------------------------------------
uint __fastcall Function_2234b64(int *a1, uint *a2)
{
  int *v2;
  int v3;
  int v4;
  int *v5;
  uint *v6;
  uint *v7;
  int v8;
  int v9;
  uint *v10;
  int v12;

  v2 = a1;
  v3 = a2[1];
  v12 = (int)a2;
  if ( !v3 )
  {
    v4 = 0;
    v5 = a2 + 15;
    v6 = a2 + 9;
    v7 = a2;
    do
    {
      v8 = Function_2234b34((uint *)v7[3], v6, v5);
      ++v4;
      ++v5;
      ++v6;
      ++v7;
    }
    while ( v4 < 6 );
    if ( v8 )
      ++*(uint *)(v12 + 4);
    return Function_200c7ec(*(int **)(v12 + 8));
  }
  if ( v3 != 1 )
    return Function_200c7ec(*(int **)(v12 + 8));
  v9 = 0;
  v10 = a2;
  do
  {
    Function_200d0f4(v10[3]);
    ++v9;
    ++v10;
  }
  while ( v9 < 6 );
  Function_2220220(*(uint *)v12, v2);
  return free(v12);
}

//----- (02234BD8) --------------------------------------------------------
int __fastcall Function_2234bd8(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v3 = 0;
  v7 = a2;
  v4 = (uint *)(a1 + 48);
  v5 = 0;
  do
  {
    Function_2225a5c(v4, 0, 0x7FFF, 0, 0, 204800, 0, 48);
    ++v3;
    *(uint *)(v2 + 56) += v5;
    v4 += 9;
    *(uint *)(v2 + 72) *= v7;
    result = 10922;
    v2 += 36;
    v5 += 10922;
  }
  while ( v3 < 6 );
  return result;
}

//----- (02234C30) --------------------------------------------------------
int __fastcall Function_2234c30(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  char v6;
  int result;
  int v8;

  v1 = a1;
  v8 = 0;
  v2 = a1 + 48;
  v3 = a1;
  v4 = a1;
  do
  {
    Function_2225ae0(v2);
    Function_200d4c4(
      *(int **)(v4 + 24),
      (short)(*(ushort *)(v1 + 304) + *(ushort *)(v3 + 48)),
      *(short *)(v1 + 306));
    v5 = *(uint *)(v3 + 56);
    if ( v5 < 0x3FFF || v5 > 48969 )
    {
      v6 = Function_222339c(*(uint *)v1);
      Function_200d460(*(int **)(v4 + 24), v6 + 1);
    }
    else
    {
      Function_200d460(*(int **)(v4 + 24), 1);
    }
    v2 += 36;
    result = v8 + 1;
    v3 += 36;
    v4 += 4;
    v8 = result;
  }
  while ( result < 6 );
  return result;
}

//----- (02234CA8) --------------------------------------------------------
int __fastcall Function_2234ca8(int *a1, uint *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  uint *v6;
  int result;

  v2 = (int)a2;
  v3 = a1;
  switch ( (uchar)a2[3] )
  {
    case 0u:
      Function_2235780(*a2);
      Function_2226424(v2 + 264, 1, 16, 15, 0, 0xAu);
      Function_2234bd8(v2, *(uint *)(v2 + 20));
      Function_2234c30(v2);
      ++*(uint *)(v2 + 12);
      goto LABEL_12;
    case 1u:
      Function_2234c30((int)a2);
      if ( Function_2226454(v2 + 264) )
      {
        ++*(uint *)(v2 + 12);
        *(uint *)(v2 + 16) = 28;
      }
      goto LABEL_12;
    case 2u:
      Function_2234c30((int)a2);
      v4 = *(uint *)(v2 + 16) - 1;
      *(uint *)(v2 + 16) = v4;
      if ( v4 < 0 )
      {
        ++*(uint *)(v2 + 12);
        Function_2226424(v2 + 264, 16, 1, 0, 15, 0xAu);
      }
      goto LABEL_12;
    case 3u:
      Function_2234c30((int)a2);
      if ( Function_2226454(v2 + 264) )
        ++*(uint *)(v2 + 12);
      goto LABEL_12;
    case 4u:
      v5 = 0;
      v6 = a2;
      do
      {
        Function_200d0f4(v6[6]);
        ++v5;
        ++v6;
      }
      while ( v5 < 6 );
      free(v2);
      result = Function_2220220(*(uint *)v2, v3);
      break;
    default:
LABEL_12:
      result = Function_200c7ec(*(int **)(v2 + 8));
      break;
  }
  return result;
}

//----- (02234D98) --------------------------------------------------------
uint *__fastcall Function_2234d98(int a1, int a2, int a3, int a4)
{
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
  int v15[13];
  int v16;

  v16 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_2235e50(a1);
  *(uint *)v8 = v5;
  *(uint *)(v8 + 4) = v4;
  *(uint *)(v8 + 8) = v6;
  v9 = Function_2220240(v5);
  v10 = Function_22232fc(*(uint *)v8, v9);
  *(ushort *)(v8 + 304) = Function_20080c0(v10, 0);
  *(ushort *)(v8 + 306) = Function_20080c0(v10, 1u);
  Function_222329c(v15, v5);
  v11 = 0;
  v12 = v8;
  do
  {
    if ( v11 )
      *(uint *)(v12 + 24) = Function_200ce6c(*(uint **)(v8 + 4), *(uint *)(v8 + 8), (short *)v15);
    else
      *(uint *)(v12 + 24) = v7;
    Function_200d474(*(int **)(v12 + 24), 100);
    Function_200d810(*(int **)(v12 + 24), 1);
    Function_200d390(*(uint **)(v12 + 24), 1);
    ++v11;
    v12 += 4;
  }
  while ( v11 < 6 );
  v13 = Function_2220240(*(uint *)v8);
  *(uint *)(v8 + 20) = Function_2225964(*(uint *)v8, v13);
  return Function_22201e8(*(uint *)v8, (int)Function_2234ca8, v8);
}

//----- (02234E44) --------------------------------------------------------
int __fastcall Function_2234e44(int result, short a2, short a3)
{
  *(ushort *)(result + 12) = a2;
  *(ushort *)(result + 14) = a3;
  return result;
}

//----- (02234E4C) --------------------------------------------------------
int __fastcall Function_2234e4c(int result, short a2, short a3)
{
  *(ushort *)(result + 20) = a2;
  *(ushort *)(result + 22) = a3;
  return result;
}

//----- (02234E54) --------------------------------------------------------
int __fastcall Function_2234e54(int a1, uchar a2)
{
  int v2;
  uchar v3;
  int v4;
  uchar v5;

  v2 = a1;
  v3 = a2;
  v4 = Function_221fde4(*(uint *)(a1 + 28));
  v5 = Function_2223428(*(uint *)(v2 + 28), 3);
  Function_2019060(v3, v5);
  LoadFromNARC_RGCN(*(uint *)v2, dword_223A1D8[4 * *(uint *)(v2 + 4)], *(uint **)(v2 + 44), v3, 0, 0, 1, v4);
  Function_2003050(*(uint *)(v2 + 48), *(uint *)v2, dword_223A1DC[4 * *(uint *)(v2 + 4)], v4, 0, 32, 0x80u);
  Function_2019ebc(*(uint **)(v2 + 44), v3);
  return LoadFromNARC_RCSN(
           *(uint *)v2,
           dword_223A1E0[4 * *(uint *)(v2 + 4)],
           *(uint **)(v2 + 44),
           v3,
           0,
           0,
           1,
           v4);
}

//----- (02234EF0) --------------------------------------------------------
int __fastcall Function_2234ef0(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int result;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)a2 )
  {
    case 0:
      Function_2234e54(a2, 2u);
      ++*(uchar *)(v2 + 24);
      goto LABEL_16;
    case 1:
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 57, *(ushort *)(a2 + 20), *(ushort *)(a2 + 22));
      ++*(uchar *)(v2 + 24);
      goto LABEL_16;
    case 2:
      if ( *(uchar *)(a2 + 64) <= 0x14u )
        ++*(uchar *)(a2 + 64);
      else
        ++*(uchar *)(a2 + 24);
      goto LABEL_16;
    case 3:
      if ( *(ushort *)(a2 + 20) )
        --*(ushort *)(a2 + 20);
      v4 = *(ushort *)(a2 + 22);
      if ( v4 < 0x10 )
        *(ushort *)(a2 + 22) = v4 + 1;
      if ( !*(ushort *)(a2 + 20) && *(ushort *)(a2 + 22) == 16 )
      {
        Function_2019ebc(*(uint **)(a2 + 44), 2u);
        Function_200d3f4(*(uint **)(v2 + 52), 0);
        Function_200d3f4(*(uint **)(v2 + 56), 0);
        Function_200d3f4(*(uint **)(v2 + 60), 0);
        ++*(uchar *)(v2 + 24);
      }
      REG_BLDALPHA = *(ushort *)(v2 + 20) | (*(ushort *)(v2 + 22) << 8);
LABEL_16:
      *(ushort *)(v2 + 16) += *(ushort *)(v2 + 12);
      *(ushort *)(v2 + 18) += *(ushort *)(v2 + 14);
      Function_2019184(*(uint *)(v2 + 44), 2u, 0, *(short *)(v2 + 16));
      Function_2019184(*(uint *)(v2 + 44), 2u, 3u, *(short *)(v2 + 18));
      Function_200d330(*(int **)(v2 + 52));
      Function_200d330(*(int **)(v2 + 56));
      Function_200d330(*(int **)(v2 + 60));
      result = Function_200c7ec(*(int **)(v2 + 36));
      break;
    default:
      WIN_OUT = WIN_OUT & 0xFFC0 | 0x1F;
      WIN_OUT = WIN_OUT & 0xC0FF | 0x1F00;
      Function_2019184(*(uint *)(a2 + 44), 2u, 0, 0);
      Function_2019184(*(uint *)(v2 + 44), 2u, 3u, 0);
      REG_DISPCNT &= 0xFFFF1FFF;
      Function_2220220(*(uint *)(v2 + 28), v3);
      result = Function_2235e80(v2);
      break;
  }
  return result;
}

//----- (0223505C) --------------------------------------------------------
int __fastcall Function_223505c(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  *a2 = 7;
  v3 = a1;
  a2[1] = Function_2220280(a1, 0);
  result = Function_2220280(v3, 1);
  v2[2] = result;
  return result;
}

//----- (0223507C) --------------------------------------------------------
uint *__fastcall Function_223507c(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  uint v13;
  char v14;
  int *v15;

  v2 = a2;
  v3 = a1;
  v4 = Function_2235e50(a1);
  Function_223595c(v3, v4 + 24);
  v5 = *v2;
  v6 = v2[1];
  v2 += 2;
  *(uint *)v4 = v5;
  *(uint *)(v4 + 4) = v6;
  v7 = (uint *)(v4 + 8);
  v8 = *v2;
  v9 = v2[1];
  v2 += 2;
  *v7 = v8;
  v7[1] = v9;
  v10 = (int *)(v4 + 16);
  v11 = v2[1];
  *v10 = *v2;
  v10[1] = v11;
  *(uint *)(v4 + 52) = Function_22202c0(*(uint *)(v4 + 28), 0);
  *(uint *)(v4 + 56) = Function_22202c0(*(uint *)(v4 + 28), 1);
  *(uint *)(v4 + 60) = Function_22202c0(*(uint *)(v4 + 28), 2);
  Function_2223428(*(uint *)(v4 + 28), 2);
  Function_200d460(*(int **)(v4 + 52), 2);
  Function_200d460(*(int **)(v4 + 56), 2);
  if ( *(uint *)(v4 + 8) )
    v12 = Function_2220248(v3);
  else
    v12 = Function_2220240(v3);
  v13 = Function_2235254(v3, v12);
  if ( Function_221fdd4(v3) == 1 )
  {
    Function_200d3f4(*(uint **)(v4 + 60), 0);
    v14 = Function_2223428(*(uint *)(v4 + 28), 2);
    Function_200d460(*(int **)(v4 + 52), v14);
    Function_200d460(*(int **)(v4 + 56), v14);
  }
  else if ( v13 > 1 )
  {
    v15 = *(int **)(v4 + 60);
    if ( v13 - 3 > 1 )
      Function_200d460(v15, 1);
    else
      Function_200d460(v15, 3);
  }
  else
  {
    Function_200d3f4(*(uint **)(v4 + 60), 0);
  }
  WIN_OUT = ((uint)&WIN_OUT >> 13) | WIN_OUT & 0xC0FF | 0x1600;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x3B;
  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x8000;
  Function_200d810(*(int **)(v4 + 56), 2);
  *(ushort *)(v4 + 16) = 0;
  *(ushort *)(v4 + 18) = 0;
  return Function_22201e8(*(uint *)(v4 + 28), (int)Function_2234ef0, v4);
}

//----- (022351A4) --------------------------------------------------------
uint *__fastcall Function_22351a4(int a1)
{
  int v1;
  char v3;

  v1 = a1;
  Function_223505c(a1, &v3);
  Function_2234e44((int)&v3, 0, 3);
  Function_2234e4c((int)&v3, 12, 4);
  return Function_223507c(v1, (int *)&v3);
}

//----- (022351D0) --------------------------------------------------------
uint *__fastcall Function_22351d0(int a1)
{
  int v1;
  char v3;

  v1 = a1;
  Function_223505c(a1, &v3);
  Function_2234e44((int)&v3, 0, -3);
  Function_2234e4c((int)&v3, 12, 4);
  return Function_223507c(v1, (int *)&v3);
}

//----- (022351FC) --------------------------------------------------------
uint *__fastcall Function_22351fc(int a1)
{
  int v1;
  char v3;

  v1 = a1;
  Function_223505c(a1, &v3);
  Function_2234e44((int)&v3, 0, 3);
  Function_2234e4c((int)&v3, 12, 4);
  return Function_223507c(v1, (int *)&v3);
}

//----- (02235228) --------------------------------------------------------
uint *__fastcall Function_2235228(int a1)
{
  int v1;
  char v3;

  v1 = a1;
  Function_223505c(a1, &v3);
  Function_2234e44((int)&v3, 0, -6);
  Function_2234e4c((int)&v3, 12, 4);
  return Function_223507c(v1, (int *)&v3);
}

//----- (02235254) --------------------------------------------------------
int __fastcall Function_2235254(int a1, int a2)
{
  return Function_22232b8(a1, a2);
}

//----- (0223525C) --------------------------------------------------------
int __fastcall Function_223525c(int a1, int a2)
{
  int v2;

  switch ( (uchar)Function_22232b8(a1, a2) )
  {
    case 0u:
    case 2u:
    case 4u:
      v2 = 3;
      break;
    case 1u:
    case 3u:
    case 5u:
      v2 = 4;
      break;
    default:
      return v2;
  }
  return v2;
}

//----- (02235288) --------------------------------------------------------
int __fastcall Function_2235288(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( Function_22232b8(v2, v4) == v3 )
      return v4;
    ++v4;
  }
  while ( v4 < 4 );
  return 0;
}

//----- (022352AC) --------------------------------------------------------
uint __fastcall Function_22352ac(int a1, int a2)
{
  int v2;
  uint result;
  uint v4;
  int v5;
  int v6;
  char v7;

  v2 = a1;
  result = Function_22232b8(a1, a2);
  v4 = result;
  if ( result > 1 )
  {
    v5 = 0;
    while ( 2 )
    {
      v6 = Function_22232b8(v2, v5);
      switch ( v7 )
      {
        case 2:
          if ( v6 != 4 )
            goto LABEL_12;
          result = v5;
          break;
        case 3:
          if ( v6 != 5 )
            goto LABEL_12;
          result = v5;
          break;
        case 4:
          if ( v6 != 2 )
            goto LABEL_12;
          result = v5;
          break;
        case 5:
          if ( v6 != 3 )
            goto LABEL_12;
          result = v5;
          break;
        default:
LABEL_12:
          if ( ++v5 < 4 )
            continue;
          ErrorHandler();
          result = v4;
          break;
      }
      break;
    }
  }
  return result;
}

//----- (02235310) --------------------------------------------------------
int __fastcall Function_2235310(char a1)
{
  int result;

  switch ( a1 )
  {
    case 0:
      result = 1;
      break;
    case 1:
      result = 0;
      break;
    case 2:
      result = 3;
      break;
    case 3:
      result = 2;
      break;
    case 4:
      result = 5;
      break;
    case 5:
      result = 4;
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (02235350) --------------------------------------------------------
int __fastcall Function_2235350(int a1, int a2, ushort *a3, int a4)
{
  short *v4;
  char *v5;
  int v6;
  short v7;
  short *v8;
  char *v9;
  int v10;
  short v11;
  int result;
  char *v13;
  char v14[24];
  char v15[24];
  int v16;

  v16 = a4;
  v4 = &word_223A230;
  v5 = v15;
  v6 = 12;
  do
  {
    v7 = *v4;
    ++v4;
    *(ushort *)v5 = v7;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  v8 = &word_223A248;
  v9 = v14;
  v10 = 12;
  do
  {
    v11 = *v8;
    ++v8;
    *(ushort *)v9 = v11;
    v9 += 2;
    --v10;
  }
  while ( v10 );
  if ( a2 )
  {
    *a3 = *(ushort *)&v14[4 * a1];
    result = *(ushort *)&v14[4 * a1 + 2];
  }
  else
  {
    v13 = &v15[4 * a1];
    *a3 = *(ushort *)v13;
    result = *((ushort *)v13 + 1);
  }
  a3[1] = result;
  return result;
}

//----- (022353AC) --------------------------------------------------------
int __fastcall Function_22353ac(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;

  v3 = a1;
  v4 = a3;
  v5 = Function_2235254(a1, a2);
  v6 = Function_221fdd4(v3);
  return Function_2235350(v5, v6, v4, v7);
}

//----- (022353CC) --------------------------------------------------------
int __fastcall Function_22353cc(int a1, uint *a2, int a3, int a4, int a5)
{
  int v5;
  int *v6;
  int v7;
  uint *v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int result;
  int v18;
  char v19;

  v5 = a3;
  v18 = a4;
  v6 = (int *)&unk_223A260;
  v7 = a1;
  v8 = a2;
  v9 = &v19;
  v10 = 288;
  do
  {
    v11 = *v6;
    v12 = v6[1];
    v6 += 2;
    *(uint *)v9 = v11;
    *((uint *)v9 + 1) = v12;
    v9 += 8;
    --v10;
  }
  while ( v10 );
  if ( v5 == 1 )
  {
    if ( v7 )
    {
      if ( v7 == 1 )
        v7 = 7;
      else
        ErrorHandler();
    }
    else
    {
      v7 = 6;
    }
  }
  v13 = &v19 + 288 * v7;
  v14 = 12 * (v18 + 2 * a5);
  v15 = *(uint *)&v13[v14 + 8];
  v16 = *(uint *)&v13[v14 + 4];
  result = *(uint *)&v13[v14];
  *v8 = result;
  v8[1] = v16;
  v8[2] = v15;
  return result;
}

//----- (02235448) --------------------------------------------------------
int __fastcall Function_2235448(int a1, uint *a2, int a3, int a4)
{
  return Function_22353cc(a1, a2, a3, a4, 0);
}

//----- (02235458) --------------------------------------------------------
int __fastcall Function_2235458(int a1, uint *a2, int a3, int a4)
{
  return Function_22353cc(a1, a2, a3, a4, 1);
}

//----- (02235468) --------------------------------------------------------
int __fastcall Function_2235468(int a1, uint *a2, int a3, int a4)
{
  return Function_22353cc(a1, a2, a3, a4, 2);
}

//----- (02235478) --------------------------------------------------------
int __fastcall Function_2235478(int a1, uint *a2, int a3, int a4)
{
  return Function_22353cc(a1, a2, a3, a4, 3);
}

//----- (02235488) --------------------------------------------------------
int __fastcall Function_2235488(int a1, uint *a2, int a3, int a4)
{
  return Function_22353cc(a1, a2, a3, a4, 4);
}

//----- (02235498) --------------------------------------------------------
int __fastcall Function_2235498(int a1, uint *a2, int a3, int a4)
{
  return Function_22353cc(a1, a2, a3, a4, 5);
}

//----- (022354A8) --------------------------------------------------------
int __fastcall Function_22354a8(int a1, uint *a2, int a3, int a4)
{
  return Function_22353cc(a1, a2, a3, a4, 6);
}

//----- (022354B8) --------------------------------------------------------
int __fastcall Function_22354b8(int a1, uint *a2, int a3, int a4)
{
  return Function_22353cc(a1, a2, a3, a4, 7);
}

//----- (022354C8) --------------------------------------------------------
int __fastcall Function_22354c8(int a1, uint *a2, int a3, int a4)
{
  return Function_22353cc(a1, a2, a3, a4, 8);
}

//----- (022354D8) --------------------------------------------------------
int __fastcall Function_22354d8(int a1, uint *a2, int a3, int a4)
{
  return Function_22353cc(a1, a2, a3, a4, 9);
}

//----- (022354E8) --------------------------------------------------------
int __fastcall Function_22354e8(int a1, uint *a2, int a3, int a4)
{
  return Function_22353cc(a1, a2, a3, a4, 10);
}

//----- (022354F8) --------------------------------------------------------
int __fastcall Function_22354f8(int a1, uint *a2, int a3, int a4)
{
  return Function_22353cc(a1, a2, a3, a4, 11);
}

//----- (02235508) --------------------------------------------------------
int __fastcall Function_2235508(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2220250(a1);
  v7 = Function_2014790(v6);
  v8 = Function_2235254(v3, v4);
  v9 = Function_221fdd4(v3);
  return Function_2235448(v8, v5, v9, v7);
}

//----- (02235538) --------------------------------------------------------
int __fastcall Function_2235538(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2220250(a1);
  v7 = Function_2014790(v6);
  v8 = Function_2235254(v3, v4);
  v9 = Function_221fdd4(v3);
  return Function_2235458(v8, v5, v9, v7);
}

//----- (02235568) --------------------------------------------------------
int __fastcall Function_2235568(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2220250(a1);
  v7 = Function_2014790(v6);
  v8 = Function_2235254(v3, v4);
  v9 = Function_221fdd4(v3);
  return Function_2235468(v8, v5, v9, v7);
}

//----- (02235598) --------------------------------------------------------
int __fastcall Function_2235598(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2220250(a1);
  v7 = Function_2014790(v6);
  v8 = Function_2235254(v3, v4);
  v9 = Function_221fdd4(v3);
  return Function_2235478(v8, v5, v9, v7);
}

//----- (022355C8) --------------------------------------------------------
int __fastcall Function_22355c8(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2220250(a1);
  v7 = Function_2014790(v6);
  v8 = Function_2235254(v3, v4);
  v9 = Function_221fdd4(v3);
  return Function_2235488(v8, v5, v9, v7);
}

//----- (022355F8) --------------------------------------------------------
int __fastcall Function_22355f8(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2220250(a1);
  v7 = Function_2014790(v6);
  v8 = Function_2235254(v3, v4);
  v9 = Function_221fdd4(v3);
  return Function_2235498(v8, v5, v9, v7);
}

//----- (02235628) --------------------------------------------------------
int __fastcall Function_2235628(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2220250(a1);
  v7 = Function_2014790(v6);
  v8 = Function_2235254(v3, v4);
  v9 = Function_221fdd4(v3);
  return Function_22354a8(v8, v5, v9, v7);
}

//----- (02235658) --------------------------------------------------------
int __fastcall Function_2235658(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2220250(a1);
  v7 = Function_2014790(v6);
  v8 = Function_2235254(v3, v4);
  v9 = Function_221fdd4(v3);
  return Function_22354b8(v8, v5, v9, v7);
}

//----- (02235688) --------------------------------------------------------
int __fastcall Function_2235688(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2220250(a1);
  v7 = Function_2014790(v6);
  v8 = Function_2235254(v3, v4);
  v9 = Function_221fdd4(v3);
  return Function_22354c8(v8, v5, v9, v7);
}

//----- (022356B8) --------------------------------------------------------
int __fastcall Function_22356b8(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2220250(a1);
  v7 = Function_2014790(v6);
  v8 = Function_2235254(v3, v4);
  v9 = Function_221fdd4(v3);
  return Function_22354d8(v8, v5, v9, v7);
}

//----- (022356E8) --------------------------------------------------------
int __fastcall Function_22356e8(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2220250(a1);
  v7 = Function_2014790(v6);
  v8 = Function_2235254(v3, v4);
  v9 = Function_221fdd4(v3);
  return Function_22354e8(v8, v5, v9, v7);
}

//----- (02235718) --------------------------------------------------------
int __fastcall Function_2235718(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2220250(a1);
  v7 = Function_2014790(v6);
  v8 = Function_2235254(v3, v4);
  v9 = Function_221fdd4(v3);
  return Function_22354f8(v8, v5, v9, v7);
}

//----- (02235748) --------------------------------------------------------
uint *__fastcall Function_2235748(uint *result)
{
  *result = 0;
  result[1] = 26832;
  result[2] = 0;
  return result;
}

//----- (02235758) --------------------------------------------------------
int __fastcall Function_2235758(int a1, uint *a2, int a3, int a4)
{
  return Function_2235448(a1, a2, a3, a4);
}

//----- (02235760) --------------------------------------------------------
int __fastcall Function_2235760(int a1, uint *a2)
{
  int result;

  if ( !a1 )
    return Function_2014770(a2);
  *a2 = 0;
  a2[1] = -4096;
  result = 0;
  a2[2] = 0;
  return result;
}

//----- (02235780) --------------------------------------------------------
int *__fastcall Function_2235780(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char v6;

  v4 = a2;
  v5 = a3;
  if ( a2 == -1 )
    v4 = 26;
  if ( a3 == -1 )
    v5 = 5;
  v6 = Function_22233ec(a1, 2, a3, a4);
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, (1 << v6) | 1, v4, v5);
}

//----- (022357BC) --------------------------------------------------------
int *__fastcall Function_22357bc(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a3;
  if ( a3 == -1 )
    v4 = 26;
  if ( a4 == -1 )
    a4 = 5;
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, a2, v4, a4);
}

//----- (022357EC) --------------------------------------------------------
int *__fastcall Function_22357ec(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char v7;
  int v8;
  int v9;
  char v10;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( a2 == -1 )
    v5 = 26;
  if ( a3 == -1 )
    v6 = 5;
  v7 = Function_22233ec(a1, 2, a3, a4);
  v8 = (1 << v7) | 0x11;
  v10 = Function_22233ec(v4, 1, 1 << v7, v9);
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 1 << v10, v8, v5, v6);
}

//----- (02235838) --------------------------------------------------------
int __fastcall Function_2235838(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  char v12;
  int v13;
  int v14;
  short v15;
  char v16;
  int v17;
  int v18;
  char v19;
  int v20;
  int v21;
  char v22;
  int v23;
  char v24;
  int v25;
  int v26;
  int v27;
  int result;

  v4 = a1;
  v5 = a3;
  if ( a2 )
  {
    v16 = Function_22233ec(a1, 1, a3, a4);
    v19 = Function_22233ec(v4, 2, v17, v18);
    v22 = Function_22233ec(v4, 0, v20, v21);
    v14 = (int)&WIN_IN;
    v13 = (1 << v16) | (1 << v22) | (1 << v19) | 0x11;
    v23 = (ushort)(WIN_IN & 0xC0FF) | (v13 << 8);
    if ( v5 )
      v23 |= (uint)&WIN_IN >> 13;
    WIN_IN = v23;
  }
  else
  {
    v6 = Function_22233ec(a1, 1, a3, a4);
    v9 = Function_22233ec(v4, 2, v7, v8);
    v12 = Function_22233ec(v4, 0, v10, v11);
    v13 = 1 << v9;
    v14 = (1 << v6) | (1 << v12) | (1 << v9) | 0x11;
    v15 = WIN_IN & 0xFFC0 | v14;
    if ( v5 )
      v15 |= 0x20u;
    WIN_IN = v15;
  }
  v24 = Function_22233ec(v4, 0, v14, v13);
  v27 = (ushort)(WIN_OUT & 0xFFC0) | (1 << Function_22233ec(v4, 1, v25, v26)) | (1 << v24) | 0x11;
  result = v27 | 0x20;
  WIN_OUT = v27 | 0x20;
  return result;
}

//----- (02235918) --------------------------------------------------------
int __fastcall Function_2235918(uint *a1, ushort *a2)
{
  int v2;
  ushort *v3;
  int result;

  v2 = (int)a1;
  v3 = a2;
  if ( a1 )
  {
    if ( Function_2008b38(a1) )
    {
      *v3 = Function_20080c0(v2, 0);
      result = Function_20080c0(v2, 1u);
      v3[1] = result;
    }
    else
    {
      result = 0;
      *v3 = 0;
      v3[1] = 0;
    }
  }
  else
  {
    result = 0;
    *a2 = 0;
    a2[1] = 0;
  }
  return result;
}

//----- (02235950) --------------------------------------------------------
int __fastcall Function_2235950(int *a1, ushort *a2)
{
  return Function_200d550(a1, a2, a2 + 1);
}

//----- (0223595C) --------------------------------------------------------
int __fastcall Function_223595c(int a1, int a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = (uint *)a2;
  *(uchar *)a2 = 0;
  *(uchar *)(a2 + 1) = 0;
  *(uchar *)(a2 + 2) = 0;
  v3 = a1;
  *(uchar *)(a2 + 3) = 0;
  *(uint *)(a2 + 4) = a1;
  *(uint *)(a2 + 8) = Function_2220308(a1);
  v2[3] = Function_22202ec(v3);
  v2[4] = Function_2220300(v3);
  v2[5] = Function_2220278(v3);
  result = Function_222332c(v3);
  v2[6] = result;
  return result;
}

//----- (02235998) --------------------------------------------------------
int __fastcall Function_2235998(int a1, char a2, int a3, int *a4)
{
  char v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int result;
  int v18;
  int v19;
  char v20;
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

  v4 = a2;
  v5 = a4;
  *a4 = 0;
  v6 = a1;
  v7 = a3;
  if ( (a2 & 0x40) == 64 )
  {
    v8 = Function_2220240(a1);
    *(uint *)(v7 + 20 * *v5 + 8) = Function_22232fc(v6, v8);
    v9 = v7 + 20 * *v5;
    if ( *(uint *)(v9 + 8) )
    {
      *(uint *)(v9 + 16) = v8;
      Function_2235918(*(uint **)(v7 + 20 * *v5 + 8), (ushort *)(v7 + 20 * *v5 + 4));
      ++*v5;
    }
    v33 = Function_22352ac(v6, v8);
    *(uint *)(v7 + 20 * *v5 + 8) = Function_22232fc(v6, v33);
    v10 = v7 + 20 * *v5;
    if ( *(uint *)(v10 + 8) )
    {
      *(uint *)(v10 + 16) = v33;
      Function_2235918(*(uint **)(v7 + 20 * *v5 + 8), (ushort *)(v7 + 20 * *v5 + 4));
      ++*v5;
    }
    v11 = Function_22232b8(v6, v8);
    v12 = Function_2235310(v11);
    v13 = Function_2235288(v6, v12);
    *(uint *)(v7 + 20 * *v5 + 8) = Function_22232fc(v6, v13);
    v14 = v7 + 20 * *v5;
    if ( *(uint *)(v14 + 8) )
    {
      *(uint *)(v14 + 16) = v13;
      Function_2235918(*(uint **)(v7 + 20 * *v5 + 8), (ushort *)(v7 + 20 * *v5 + 4));
      ++*v5;
    }
    v15 = Function_22352ac(v6, v13);
    *(uint *)(v7 + 20 * *v5 + 8) = Function_22232fc(v6, v15);
    v16 = v7 + 20 * *v5;
    result = *(uint *)(v16 + 8);
    if ( result )
    {
      *(uint *)(v16 + 16) = v15;
      Function_2235918(*(uint **)(v7 + 20 * *v5 + 8), (ushort *)(v7 + 20 * *v5 + 4));
      result = *v5 + 1;
      *v5 = result;
    }
  }
  else if ( (a2 & 0x20) == 32 )
  {
    v18 = Function_2220240(a1);
    v34 = Function_22352ac(v6, v18);
    if ( v34 != v18 )
    {
      *(uint *)(v7 + 20 * *v5 + 8) = Function_22232fc(v6, v34);
      v19 = v7 + 20 * *v5;
      if ( *(uint *)(v19 + 8) )
      {
        *(uint *)(v19 + 16) = v34;
        Function_2235918(*(uint **)(v7 + 20 * *v5 + 8), (ushort *)(v7 + 20 * *v5 + 4));
        ++*v5;
      }
    }
    v20 = Function_22232b8(v6, v18);
    v21 = Function_2235310(v20);
    v32 = Function_2235288(v6, v21);
    if ( v32 != v18 )
    {
      *(uint *)(v7 + 20 * *v5 + 8) = Function_22232fc(v6, v32);
      v22 = v7 + 20 * *v5;
      if ( *(uint *)(v22 + 8) )
      {
        *(uint *)(v22 + 16) = v32;
        Function_2235918(*(uint **)(v7 + 20 * *v5 + 8), (ushort *)(v7 + 20 * *v5 + 4));
        ++*v5;
      }
    }
    result = Function_22352ac(v6, v32);
    v35 = result;
    if ( result != v18 )
    {
      *(uint *)(v7 + 20 * *v5 + 8) = Function_22232fc(v6, result);
      v23 = v7 + 20 * *v5;
      result = *(uint *)(v23 + 8);
      if ( result )
      {
        *(uint *)(v23 + 16) = v35;
        Function_2235918(*(uint **)(v7 + 20 * *v5 + 8), (ushort *)(v7 + 20 * *v5 + 4));
        result = *v5 + 1;
        *v5 = result;
      }
    }
  }
  else
  {
    if ( (a2 & 2) == 2 )
    {
      v24 = Function_2220240(a1);
      *(uint *)(v7 + 20 * *v5 + 8) = Function_22232fc(v6, v24);
      if ( *(uint *)(v7 + 20 * *v5 + 8) )
      {
        *(uint *)(v7 + 20 * *v5 + 16) = Function_2220240(v6);
        Function_2235918(*(uint **)(v7 + 20 * *v5 + 8), (ushort *)(v7 + 20 * *v5 + 4));
        ++*v5;
      }
    }
    if ( Function_2223364(v6) == 1 && (v4 & 4) == 4 )
    {
      v25 = Function_2220240(v6);
      v26 = Function_22352ac(v6, v25);
      *(uint *)(v7 + 20 * *v5 + 8) = Function_22232fc(v6, v26);
      if ( *(uint *)(v7 + 20 * *v5 + 8) )
      {
        v27 = Function_2220240(v6);
        *(uint *)(v7 + 20 * *v5 + 16) = Function_22352ac(v6, v27);
        Function_2235918(*(uint **)(v7 + 20 * *v5 + 8), (ushort *)(v7 + 20 * *v5 + 4));
        ++*v5;
      }
    }
    if ( (v4 & 8) == 8 )
    {
      v28 = Function_2220248(v6);
      *(uint *)(v7 + 20 * *v5 + 8) = Function_22232fc(v6, v28);
      if ( *(uint *)(v7 + 20 * *v5 + 8) )
      {
        *(uint *)(v7 + 20 * *v5 + 16) = Function_2220248(v6);
        Function_2235918(*(uint **)(v7 + 20 * *v5 + 8), (ushort *)(v7 + 20 * *v5 + 4));
        ++*v5;
      }
    }
    result = Function_2223364(v6);
    if ( result == 1 )
    {
      result = v4 & 0x10;
      if ( result == 16 )
      {
        v29 = Function_2220248(v6);
        v30 = Function_22352ac(v6, v29);
        *(uint *)(v7 + 20 * *v5 + 8) = Function_22232fc(v6, v30);
        result = *(uint *)(v7 + 20 * *v5 + 8);
        if ( result )
        {
          v31 = Function_2220248(v6);
          *(uint *)(v7 + 20 * *v5 + 16) = Function_22352ac(v6, v31);
          Function_2235918(*(uint **)(v7 + 20 * *v5 + 8), (ushort *)(v7 + 20 * *v5 + 4));
          result = *v5 + 1;
          *v5 = result;
        }
      }
    }
  }
  return result;
}

//----- (02235D74) --------------------------------------------------------
int __fastcall Function_2235d74(int a1, char a2, int a3, int *a4)
{
  char v4;
  int *v5;
  int v6;
  int v7;
  int result;

  v4 = a2;
  v5 = a4;
  *a4 = 0;
  v6 = a1;
  v7 = a3;
  if ( (a2 & 2) == 2 )
  {
    *(uint *)(a3 + 20 * *a4 + 12) = Function_22202c0(a1, *a4);
    Function_2235950(*(int **)(v7 + 20 * *v5 + 12), (ushort *)(v7 + 20 * *v5 + 4));
    ++*v5;
  }
  if ( (v4 & 4) == 4 )
  {
    *(uint *)(v7 + 20 * *v5 + 12) = Function_22202c0(v6, *v5);
    Function_2235950(*(int **)(v7 + 20 * *v5 + 12), (ushort *)(v7 + 20 * *v5 + 4));
    ++*v5;
  }
  if ( (v4 & 8) == 8 )
  {
    *(uint *)(v7 + 20 * *v5 + 12) = Function_22202c0(v6, *v5);
    Function_2235950(*(int **)(v7 + 20 * *v5 + 12), (ushort *)(v7 + 20 * *v5 + 4));
    ++*v5;
  }
  result = v4 & 0x10;
  if ( result == 16 )
  {
    *(uint *)(v7 + 20 * *v5 + 12) = Function_22202c0(v6, *v5);
    Function_2235950(*(int **)(v7 + 20 * *v5 + 12), (ushort *)(v7 + 20 * *v5 + 4));
    result = *v5 + 1;
    *v5 = result;
  }
  return result;
}

//----- (02235E50) --------------------------------------------------------
int *__fastcall Function_2235e50(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int *v5;

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    ErrorHandler();
  v4 = Function_221fde4(v2);
  v5 = (int *)malloc(v4, v3);
  if ( !v5 )
    ErrorHandler();
  Call_FillMemWithValue(v5, 0, v3);
  return v5;
}

//----- (02235E80) --------------------------------------------------------
uint __fastcall Function_2235e80(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return free(v1);
}

//----- (02235E94) --------------------------------------------------------
int __fastcall Function_2235e94(int a1)
{
  if ( a1 >= 1 && a1 <= 275 )
  {
    if ( a1 >= 255 )
      a1 -= 255;
  }
  else
  {
    a1 = 4;
  }
  return a1 - 1;
}

//----- (02235EB0) --------------------------------------------------------
int __fastcall Function_2235eb0(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int result;
  uint v11;
  char *v12;
  char v13;
  int v14;

  v14 = a4;
  v4 = dword_223AC0C;
  v5 = a1;
  v6 = &v13;
  v7 = 5;
  do
  {
    v8 = *v4;
    v9 = v4[1];
    v4 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  *(uint *)v6 = *v4;
  result = 0;
  v11 = 0;
  v12 = &v13;
  while ( v5 != *(uint *)v12 )
  {
    ++v11;
    v12 += 4;
    if ( v11 >= 0xB )
      return result;
  }
  return 1;
}

//----- (02235EF0) --------------------------------------------------------
int __fastcall Function_2235ef0(int a1)
{
  int v1;
  char *v2;
  int result;
  uint v4;
  char v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v2 = &v5;
  *(uint *)&v5 = 6;
  v6 = 7;
  v7 = 8;
  v8 = 9;
  v9 = 10;
  v10 = 11;
  result = 0;
  v4 = 0;
  while ( v1 != *(uint *)v2 )
  {
    ++v4;
    v2 += 4;
    if ( v4 >= 6 )
      return result;
  }
  return 1;
}

//----- (02235F2C) --------------------------------------------------------
int __fastcall Function_2235f2c(int a1, int a2, int a3, int a4)
{
  int v4;
  char *v5;
  int result;
  uint v7;
  char v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = &v8;
  *(uint *)&v8 = 3;
  v9 = 5;
  v10 = 1;
  result = 1;
  v7 = 0;
  while ( v4 != *(uint *)v5 )
  {
    ++v7;
    v5 += 4;
    if ( v7 >= 3 )
      return result;
  }
  return 0;
}

//----- (02235F64) --------------------------------------------------------
int __fastcall Function_2235f64(int a1)
{
  return dword_223AD70[2 * Function_2235e94(a1)];
}

//----- (02235F78) --------------------------------------------------------
int __fastcall Function_2235f78(int a1)
{
  return dword_223AD74[2 * Function_2235e94(a1)];
}

//----- (02235F8C) --------------------------------------------------------
int __fastcall Function_2235f8c(int a1)
{
  return dword_223AE10[3 * Function_2235e94(a1)];
}

//----- (02235FA0) --------------------------------------------------------
int __fastcall Function_2235fa0(int a1)
{
  return dword_223AE18[3 * Function_2235e94(a1)];
}

//----- (02235FB4) --------------------------------------------------------
int __fastcall Function_2235fb4(int a1)
{
  return dword_223AE14[3 * Function_2235e94(a1)];
}

//----- (02235FC8) --------------------------------------------------------
int __fastcall Function_2235fc8(int a1, int a2)
{
  return dword_223AF00[4 * Function_2235e94(a1) + a2];
}

//----- (02235FE0) --------------------------------------------------------
uint *__fastcall Function_2235fe0(uint a1)
{
  uint v1;
  uint *result;

  v1 = a1;
  result = (uint *)malloc(a1, 184);
  if ( result )
  {
    *result = v1;
    result[34] = 0;
  }
  else
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (02236004) --------------------------------------------------------
uint *__fastcall Function_12_2236004(uint a1)
{
  uint *v1;
  int v2;
  uint *v3;

  v1 = Function_2235fe0(a1);
  Function_2236030();
  v2 = 0;
  v1[4] = 0;
  v3 = v1;
  do
  {
    v3[5] = 0;
    v3[14] = 0;
    v3[23] = 0;
    ++v2;
    ++v3;
  }
  while ( v2 < 9 );
  return v1;
}

//----- (02236030) --------------------------------------------------------
uint __fastcall Function_2236030(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  uint *v6;
  uint result;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = a2[1];
  v6 = (uint *)(v3 + 4);
  *v6 = v4;
  v6[1] = v5;
  *(uint *)(v3 + 12) = v2[2];
  *(uint *)(v3 + 156) = GetPkmnData(*(int **)(v3 + 12), 0xA2u, 0);
  if ( *(uint *)(v3 + 156) >= 13 )
    ErrorHandler();
  if ( *(uint *)(v3 + 156) )
  {
    *(uint *)(v3 + 148) = 1;
    result = GetPkmnData(*(int **)(v3 + 12), 0xABu, (ushort *)(v3 + 160));
  }
  else
  {
    *(uint *)(v3 + 148) = 0;
    result = *(uint *)(v3 + 8);
    if ( !result )
      result = GetPkmnData(*(int **)(v3 + 12), 0x9Bu, 0);
    *(uint *)(v3 + 152) = result;
  }
  return result;
}

//----- (022360A0) --------------------------------------------------------
uint __fastcall Function_22360a0(int *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  uint result;
  int v6;
  uchar *v7;
  uchar *v8;
  int v9;
  uint v10;
  int v11;
  uint *v12;
  uchar *v13;
  uchar *v14;
  int v15;
  uint v16;
  int v17;
  uint *v18;
  uchar *v19;
  uchar *v20;
  int v21;
  uint v22;
  int v23;
  uint *v24;
  uchar *v25;
  uchar *v26;
  int v27;
  uint v28;
  int *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;

  v4 = a2;
  v29 = a1;
  result = a2[36];
  if ( result <= 3 )
    JUMPOUT(__CS__, *((short *)&off_22360C0 + result) + 35872962);
  switch ( (uchar)result )
  {
    case 0:
      a2[35] = (uint)LoadFromNARC_8(99, *a2, a3, a4);
      v6 = 0;
      do
      {
        v7 = (uchar *)Function_202ca64((int)(v4 + 40), v6);
        v8 = v7;
        if ( v7 )
        {
          v9 = Function_202ca7c(v7);
          if ( v9 )
          {
            if ( v9 < 81 )
            {
              v33 = Function_2098188((uchar)v9);
              v4[v4[4] + 14] = (uint)v8;
              if ( v4[v4[4] + 5] )
                ErrorHandler();
              v4[v4[4] + 5] = (uint)Function_222384c(v4[35], *v4, v33, 0);
              v10 = v4[v4[4] + 5];
              if ( v10 )
                ++v4[4];
              else
                ErrorHandler();
            }
          }
        }
        ++v6;
      }
      while ( v6 < 2 );
      result = v4[36] + 1;
      v4[36] = result;
      break;
    case 1:
      v11 = 2;
      v12 = a2 + 4;
      v34 = (int)(a2 + 40);
      do
      {
        v13 = (uchar *)Function_202ca64(v34, v11);
        v14 = v13;
        if ( v13 )
        {
          v15 = Function_202ca7c(v13);
          if ( v15 )
          {
            if ( v15 < 81 )
            {
              v30 = Function_2098188((uchar)v15);
              v4[v4[4] + 14] = (uint)v14;
              if ( v4[v4[4] + 5] )
                ErrorHandler();
              v4[v4[4] + 5] = (uint)Function_222384c(v4[35], *v4, v30, 0);
              v16 = v4[v4[4] + 5];
              if ( v16 )
                ++*v12;
              else
                ErrorHandler();
            }
          }
        }
        ++v11;
      }
      while ( v11 < 4 );
      result = v4[36] + 1;
      v4[36] = result;
      break;
    case 2:
      v17 = 4;
      v18 = a2 + 4;
      v35 = (int)(a2 + 40);
      do
      {
        v19 = (uchar *)Function_202ca64(v35, v17);
        v20 = v19;
        if ( v19 )
        {
          v21 = Function_202ca7c(v19);
          if ( v21 )
          {
            if ( v21 < 81 )
            {
              v31 = Function_2098188((uchar)v21);
              v4[v4[4] + 14] = (uint)v20;
              if ( v4[v4[4] + 5] )
                ErrorHandler();
              v4[v4[4] + 5] = (uint)Function_222384c(v4[35], *v4, v31, 0);
              v22 = v4[v4[4] + 5];
              if ( v22 )
                ++*v18;
              else
                ErrorHandler();
            }
          }
        }
        ++v17;
      }
      while ( v17 < 6 );
      result = v4[36] + 1;
      v4[36] = result;
      break;
    case 3:
      v23 = 6;
      v24 = a2 + 4;
      v36 = (int)(a2 + 40);
      do
      {
        v25 = (uchar *)Function_202ca64(v36, v23);
        v26 = v25;
        if ( v25 )
        {
          v27 = Function_202ca7c(v25);
          if ( v27 )
          {
            if ( v27 < 81 )
            {
              v32 = Function_2098188((uchar)v27);
              v4[v4[4] + 14] = (uint)v26;
              if ( v4[v4[4] + 5] )
                ErrorHandler();
              v4[v4[4] + 5] = (uint)Function_222384c(v4[35], *v4, v32, 0);
              v28 = v4[v4[4] + 5];
              if ( v28 )
                ++*v24;
              else
                ErrorHandler();
            }
          }
        }
        ++v23;
      }
      while ( v23 < 8 );
      v4[36] = 255;
      Call_FS_CloseFile((int *)v4[35]);
      result = Call_RemoveTaskFromTaskList(v29);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02236320) --------------------------------------------------------
uint __fastcall Function_12_2236320(uint *a1)
{
  uint *v1;
  int v2;
  uint result;
  int *v4;
  int v5;
  int v6;

  v1 = a1;
  if ( a1[37] )
  {
    a1[4] = 0;
    a1[36] = 0;
    v4 = AddTaskToTaskList1((int)Function_22360a0, (int)a1, 0x3E8u);
    result = Function_22360a0(v4, v1, v5, v6);
  }
  else
  {
    v2 = Function_2235f64(a1[38]);
    v1[4] = 1;
    v1[5] = (uint)Function_2223818(*v1, 99, v2, 0);
    result = 255;
    v1[36] = 255;
  }
  return result;
}

//----- (02236374) --------------------------------------------------------
BOOL __fastcall Function_12_2236374(int a1)
{
  return *(uint *)(a1 + 144) == 255;
}

//----- (02236384) --------------------------------------------------------
uint *__fastcall Function_2236384(int a1, int a2)
{
  int v2;
  int v3;
  uint *result;

  v2 = a1;
  v3 = a2;
  *(uint *)(a1 + 136) = 1;
  Function_2220474();
  Function_223646c(v2, v3);
  result = AddTaskToTaskList1((int)Function_22363cc, v2, 0x3E8u);
  *(uint *)(v2 + 132) = result;
  return result;
}

//----- (022363B4) --------------------------------------------------------
uint *__fastcall Function_12_22363b4(int a1)
{
  return Function_2236384(a1, (int)Function_2236598);
}

//----- (022363C4) --------------------------------------------------------
int __fastcall Function_12_22363c4(int a1)
{
  return *(uint *)(a1 + 136);
}

//----- (022363CC) --------------------------------------------------------
int __fastcall Function_22363cc(int *a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;

  v2 = a2;
  v9 = a1;
  v3 = 0;
  if ( *(uint *)(a2 + 16) > 9 )
    ErrorHandler();
  result = *(uint *)(v2 + 16);
  v5 = 0;
  if ( result > 0 )
  {
    v6 = v2;
    do
    {
      v7 = *(uint *)(v6 + 20);
      if ( v7 )
      {
        if ( Function_2014710(v7) || !*(uint *)(v6 + 92) )
        {
          v3 = 1;
        }
        else
        {
          v8 = *(uint *)(v6 + 20);
          Function_2223894();
          *(uint *)(v6 + 20) = 0;
          *(uint *)(v6 + 92) = 0;
        }
      }
      result = *(uint *)(v2 + 16);
      ++v5;
      v6 += 4;
    }
    while ( v5 < result );
  }
  if ( !v3 )
  {
    *(uint *)(v2 + 136) = 0;
    result = Call_RemoveTaskFromTaskList(v9);
  }
  return result;
}

//----- (02236428) --------------------------------------------------------
uint __fastcall Function_12_2236428(int a1)
{
  return free(a1);
}

//----- (02236430) --------------------------------------------------------
uint __fastcall Function_2236430(int *a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  uint result;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 4);
  if ( v4 )
  {
    result = v4 - 1;
    *(uint *)(a2 + 4) = result;
  }
  else
  {
    **(uint **)(a2 + 12) = 1;
    Function_20146f4(*(int **)(a2 + 16), 0, *(void (__fastcall **)(int))(a2 + 24), a2);
    Function_2014788(*(uint *)(v2 + 16), 1);
    Call_RemoveTaskFromTaskList(v3);
    result = free(v2);
  }
  return result;
}

//----- (0223646C) --------------------------------------------------------
char *__fastcall Function_223646c(uint *a1, void (__fastcall *a2)(int))
{
  int v2;
  void (__fastcall *v3)(int);
  int v4;
  int i;
  char *result;
  int v7;
  uint *v8;
  int *v9;
  int v10;
  int v11;

  v2 = (int)a1;
  v3 = a2;
  if ( a1[37] )
  {
    result = (char *)a1[4];
    v7 = 0;
    if ( (int)result > 0 )
    {
      v8 = (uint *)v2;
      v11 = v2 + 92;
      do
      {
        v9 = (int *)malloc(*(uint *)v2, 28);
        if ( !v9 )
          ErrorHandler();
        *v9 = v7;
        v9[2] = *(uint *)(v2 + 4);
        v9[6] = (int)Function_22365d4;
        v8[23] = 0;
        v9[3] = v11;
        v9[4] = v8[5];
        v10 = v8[14];
        v9[5] = v10;
        if ( !v10 )
          ErrorHandler();
        v9[1] = Function_2237ea0(v9[5]);
        AddTaskToTaskList1((int)Function_2236430, (int)v9, 0x3E9u);
        ++v7;
        v11 += 4;
        result = *(char **)(v2 + 16);
        ++v8;
      }
      while ( v7 < (int)result );
    }
  }
  else
  {
    v4 = Function_2235f78(a1[38]);
    for ( i = 0; i < v4; ++i )
      Function_20146f4(*(int **)(v2 + 20), i, v3, v2);
    *(uint *)(v2 + 92) = 1;
    result = Function_2014788(*(uint *)(v2 + 20), 1);
  }
  return result;
}

//----- (02236520) --------------------------------------------------------
int __fastcall Function_2236520(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  switch ( (uchar)Function_2235758(a1, a2, 0, 1) )
  {
    case 0u:
      v3 = 0;
      v4 = -16;
      break;
    case 1u:
      v3 = -15;
      v4 = -25;
      break;
    case 2u:
      v3 = -8;
      v4 = -12;
      break;
    case 3u:
      v3 = -14;
      v4 = -25;
      break;
    case 4u:
      v3 = -8;
      v4 = -12;
      break;
    default:
      v3 = -16;
      v4 = -29;
      break;
  }
  *v2 -= 172 * (v3 + 10);
  result = v2[1] - 172 * (v4 + 32);
  v2[1] = result;
  return result;
}

//----- (02236598) --------------------------------------------------------
int __fastcall Function_2236598(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = Function_2014764();
  Function_2236520(*(uint *)(v5 + 4), &v7);
  *(uint *)(v4 + 40) = v7 + *(uint *)(**(uint **)(v4 + 32) + 4);
  *(uint *)(v4 + 44) = v8 + *(uint *)(**(uint **)(v4 + 32) + 8);
  result = v9 + *(uint *)(**(uint **)(v4 + 32) + 12);
  *(uint *)(v4 + 48) = result;
  return result;
}

//----- (022365D4) --------------------------------------------------------
int __fastcall Function_22365d4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  short v7;
  short v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = Function_2014764();
  Function_2236520(*(uint *)(v5 + 8), &v10);
  v6 = Function_202ca7c(*(uchar **)(v5 + 20));
  Function_20981ac(v6);
  v7 = Function_202ca80(*(uint *)(v5 + 20));
  v8 = Function_202ca84(*(uint *)(v5 + 20));
  v10 += 172 * (short)(v7 - 190);
  v11 += 172 * (short)(100 - v8);
  *(uint *)(v4 + 40) = v10 + *(uint *)(**(uint **)(v4 + 32) + 4);
  *(uint *)(v4 + 44) = v11 + *(uint *)(**(uint **)(v4 + 32) + 8);
  result = v12 + *(uint *)(**(uint **)(v4 + 32) + 12);
  *(uint *)(v4 + 48) = result;
  return result;
}

//----- (02236648) --------------------------------------------------------
int __fastcall Function_2236648(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  int result;

  v1 = a1;
  v2 = (ushort *)Function_2014764();
  v3 = 172 * (short)(100 - v2[1]);
  *(uint *)(v1 + 40) = 172 * (short)(*v2 - 129) + *(uint *)(**(uint **)(v1 + 32) + 4);
  *(uint *)(v1 + 44) = v3 + *(uint *)(**(uint **)(v1 + 32) + 8);
  result = *(uint *)(**(uint **)(v1 + 32) + 12);
  *(uint *)(v1 + 48) = result;
  return result;
}

//----- (02236690) --------------------------------------------------------
uint *__fastcall Function_2236690(int *a1)
{
  int *v1;
  uint *v2;
  int v3;
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = (uint *)malloc(a1[2], 36);
  if ( !v2 )
    ErrorHandler();
  v3 = *v1;
  v5 = v1[1];
  v4 = v1 + 2;
  *v2 = v3;
  v2[1] = v5;
  v6 = v2 + 2;
  v7 = v4[1];
  *v6 = *v4;
  v6[1] = v7;
  v2[4] = v4[2];
  if ( v2[4] )
  {
    v2[8] = Function_2235f8c(275);
    v8 = Function_2235fa0(275);
  }
  else
  {
    v2[8] = Function_2235f8c(v2[1]);
    v8 = Function_2235fa0(v2[1]);
  }
  v2[7] = v8;
  v2[6] = Function_2223818(v2[2], 99, v2[8], 0);
  return v2;
}

//----- (022366F0) --------------------------------------------------------
char *__fastcall Function_22366f0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = *(uint *)(a1 + 12);
  if ( v2 == 255 )
  {
    if ( *(uint *)(a1 + 16) )
    {
      v3 = 0;
      if ( *(uint *)(a1 + 28) > 0 )
      {
        do
          Function_20146f4(*(int **)(v1 + 24), v3++, (void (__fastcall *)(int))Function_2236648, v1);
        while ( v3 < *(uint *)(v1 + 28) );
      }
    }
    else
    {
      v4 = 0;
      if ( *(uint *)(a1 + 28) > 0 )
      {
        do
        {
          if ( v4 != Function_2235fb4(*(uint *)(v1 + 4)) )
            Function_20146f4(*(int **)(v1 + 24), v4, (void (__fastcall *)(int))Function_2236648, v1);
          ++v4;
        }
        while ( v4 < *(uint *)(v1 + 28) );
      }
    }
  }
  else
  {
    Function_20146f4(*(int **)(a1 + 24), v2, (void (__fastcall *)(int))Function_2236648, a1);
  }
  return Function_2014788(*(uint *)(v1 + 24), 1);
}

//----- (02236764) --------------------------------------------------------
int __fastcall Function_2236764(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( Function_2014710(*(uint *)(a1 + 24)) )
    return 1;
  v2 = *(uint *)(v1 + 24);
  Function_2223894();
  return 0;
}

//----- (02236780) --------------------------------------------------------
uint __fastcall Function_2236780(int a1)
{
  return free(a1);
}

//----- (02236788) --------------------------------------------------------
BOOL __fastcall Function_2236788(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 4) )
  {
    *(uint *)(a1 + 4) = 1;
    Function_2237828();
  }
  return Function_223782c(v1, 2) != 1;
}

//----- (022367B0) --------------------------------------------------------
BOOL __fastcall Function_22367b0(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 4) )
  {
    *(uint *)(a1 + 4) = 1;
    Function_2237828();
  }
  return Function_223782c(v1, 4) != 1;
}

//----- (022367D8) --------------------------------------------------------
BOOL __fastcall Function_22367d8(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 4) )
  {
    *(uint *)(a1 + 4) = 1;
    Function_2237828();
  }
  return Function_223782c(v1, 6) != 1;
}

//----- (02236800) --------------------------------------------------------
BOOL __fastcall Function_2236800(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 4) )
  {
    *(uint *)(a1 + 4) = 1;
    Function_2237828();
  }
  return Function_223782c(v1, 14) != 1;
}

//----- (02236828) --------------------------------------------------------
BOOL __fastcall Function_2236828(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 4) )
  {
    *(uint *)(a1 + 4) = 1;
    Function_2237828();
  }
  return Function_223782c(v1, 18) != 1;
}

//----- (02236850) --------------------------------------------------------
BOOL __fastcall Function_2236850(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 4) )
  {
    *(uint *)(a1 + 4) = 1;
    Function_2237828();
  }
  return Function_223782c(v1, 27) != 1;
}

//----- (02236878) --------------------------------------------------------
BOOL __fastcall Function_2236878(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 4) )
  {
    *(uint *)(a1 + 4) = 1;
    Function_2237828();
  }
  return Function_223782c(v1, 22) != 1;
}

//----- (022368A0) --------------------------------------------------------
BOOL __fastcall Function_22368a0(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 4) )
  {
    *(uint *)(a1 + 4) = 1;
    Function_2237828();
  }
  return Function_223782c(v1, 27) != 1;
}

//----- (022368C8) --------------------------------------------------------
uint *__fastcall Function_12_22368c8(uint *result, int a2)
{
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (022368D0) --------------------------------------------------------
int __fastcall Function_12_22368d0(uint *a1)
{
  return ((int (*)(void))*(&off_223AB9C + *a1))();
}

//----- (022368E4) --------------------------------------------------------
uint *__fastcall Function_22368e4(uint *result, int a2)
{
  result[5] = a2;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  return result;
}

//----- (022368F0) --------------------------------------------------------
int Function_22368f0()
{
  return 1;
}

//----- (022368F4) --------------------------------------------------------
int __fastcall Function_22368f4(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !Function_2236f24() )
    Function_22368e4(v1, 2);
  return 1;
}

//----- (0223690C) --------------------------------------------------------
int __fastcall Function_223690c(uint *a1)
{
  Function_22368e4(a1, 3);
  return 1;
}

//----- (02236918) --------------------------------------------------------
int __fastcall Function_2236918(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  switch ( (uchar)*(uint *)(a1 + 8) )
  {
    case 0u:
      Function_200d364(*(int **)(a1 + 48), 1u);
      v8 = *(uint *)(v4 + 160);
      v9 = *(uint *)(v4 + 148);
      v10 = 255;
      v11 = 0;
      Function_200d550(*(int **)(v4 + 48), &v6, &v7);
      *(uint *)(v4 + 216) = Function_12_2223764(*(uint *)(v4 + 180), *(uint *)(v4 + 148));
      *(uint *)(v4 + 208) = Function_2236690(&v6);
      ++*(uint *)(v4 + 8);
      break;
    case 1u:
      if ( (int)Function_200d3e0(*(int **)(a1 + 48)) >= 2 )
      {
        *(uint *)(v4 + 36) = 0;
        ++*(uint *)(v4 + 8);
      }
      break;
    case 2u:
      Function_22366f0(*(uint *)(a1 + 208));
      Function_12_2223770(*(uint *)(v4 + 216));
      ++*(uint *)(v4 + 8);
      break;
    case 3u:
      if ( !Function_2236764(*(uint *)(a1 + 208)) )
      {
        Function_200d3cc(*(int **)(v4 + 48), 0);
        Function_2236780(*(uint *)(v4 + 208));
        ++*(uint *)(v4 + 8);
      }
      break;
    default:
      Function_22368e4((uint *)a1, 4);
      break;
  }
  return 1;
}

//----- (022369F8) --------------------------------------------------------
int Function_22369f8()
{
  return 1;
}

//----- (022369FC) --------------------------------------------------------
int __fastcall Function_22369fc(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 12) )
  {
    if ( !Function_2236f24() )
      Function_22368e4((uint *)v1, 6);
  }
  else
  {
    Function_200d550(*(int **)(a1 + 48), (ushort *)(a1 + 184), (ushort *)(a1 + 186));
    *(ushort *)(v1 + 188) = 60;
    *(ushort *)(v1 + 190) = 180;
    *(uint *)(v1 + 192) = 10;
    *(uint *)(v1 + 200) = 12;
    ++*(uint *)(v1 + 12);
  }
  return 1;
}

//----- (02236A50) --------------------------------------------------------
int Function_2236a50()
{
  return 1;
}

//----- (02236A54) --------------------------------------------------------
int __fastcall Function_2236a54(uint *a1)
{
  Function_22368e4(a1, 8);
  return 1;
}

//----- (02236A60) --------------------------------------------------------
int __fastcall Function_2236a60(uint *a1)
{
  Function_22368e4(a1, 9);
  return 1;
}

//----- (02236A6C) --------------------------------------------------------
int __fastcall Function_2236a6c(int a1)
{
  int v1;
  int v2;
  char v3;
  char v4;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( !Function_200384c(*(uint *)(v1 + 176)) )
      {
        v4 = Function_200d43c(*(int **)(v1 + 48));
        Function_2003178(*(uint *)(v1 + 176), 4, (1 << v4) & 0xFFFF, -1, 12, 0, 895);
        ++*(uint *)(v1 + 8);
      }
    }
    else if ( !Function_200384c(*(uint *)(v1 + 176)) )
    {
      Function_22368e4((uint *)v1, 10);
    }
  }
  else
  {
    v3 = Function_200d43c(*(int **)(v1 + 48));
    Function_2003178(*(uint *)(v1 + 176), 4, (1 << v3) & 0xFFFF, -1, 0, 12, 895);
    ++*(uint *)(v1 + 8);
  }
  return 1;
}

//----- (02236B14) --------------------------------------------------------
int __fastcall Function_2236b14(uint *a1)
{
  Function_22368e4(a1, 11);
  return 1;
}

//----- (02236B20) --------------------------------------------------------
int __fastcall Function_2236b20(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  short v8[2];
  short v9[2];
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 8);
  if ( v5 )
  {
    if ( v5 == 1 && !Function_2225c50(v4 + 72, *(int **)(v4 + 48)) )
    {
      ++*(uint *)(v4 + 8);
      Function_22368e4((uint *)v4, 13);
    }
  }
  else
  {
    v6 = *(uint *)(v4 + 12) + 1;
    *(uint *)(v4 + 12) = v6;
    if ( v6 >= 1 )
    {
      Function_200d550(*(int **)(v4 + 48), v9, v8);
      Function_2225bc8(v4 + 72, v9[0], v9[0], v8[0], v8[0] + 32, 0xAu);
      ++*(uint *)(v4 + 8);
    }
  }
  return 1;
}

//----- (02236B94) --------------------------------------------------------
int Function_2236b94()
{
  return 1;
}

//----- (02236B98) --------------------------------------------------------
int __fastcall Function_2236b98(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v6;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      Function_22368e4((uint *)a1, 14);
      return 1;
    }
  }
  else
  {
    Function_200d364(*(int **)(a1 + 48), 1u);
    Function_200d3cc(*(int **)(v1 + 48), 0);
    ++*(uint *)(v1 + 8);
  }
  v6 = *((short *)&dword_223ACF0 + 3 * *(uint *)(v1 + 12) + 1);
  Function_200d3cc(*(int **)(v1 + 48), *((ushort *)dword_223ACF4 + 3 * *(uint *)(v1 + 12)));
  v3 = &dword_223ABE4;
  ++*(uint *)(v1 + 12);
  v4 = 0;
  do
  {
    if ( *(uint *)(v1 + 12) == *v3 )
      Function_2005728(v3[1] & 0xFFFF, 117);
    ++v4;
    v3 += 2;
  }
  while ( v4 < 5 );
  if ( *(uint *)(v1 + 12) <= 20 && v6 != 255 )
    Function_200d5dc(*(uint ***)(v1 + 48), 0, v6);
  else
    ++*(uint *)(v1 + 8);
  return 1;
}

//----- (02236C34) --------------------------------------------------------
int Function_2236c34()
{
  return 1;
}

//----- (02236C38) --------------------------------------------------------
int __fastcall Function_2236c38(uint *a1)
{
  int v1;

  v1 = a1[3] + 1;
  a1[3] = v1;
  if ( v1 >= 14 )
  {
    ++a1[2];
    a1[3] = 0;
    Function_22368e4(a1, 16);
  }
  return 1;
}

//----- (02236C58) --------------------------------------------------------
int __fastcall Function_2236c58(uint *a1)
{
  Function_22368e4(a1, 17);
  return 1;
}

//----- (02236C64) --------------------------------------------------------
int __fastcall Function_2236c64(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  short v6;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 != 1 )
      return 1;
  }
  else
  {
    if ( *(uint *)(v1 + 24) >= 3 )
      ErrorHandler();
    ++*(uint *)(v1 + 8);
  }
  v3 = *(uint *)(v1 + 12);
  v4 = *((short *)&dword_223AC38[6 * *(uint *)(v1 + 24)] + v3);
  *(uint *)(v1 + 12) = v3 + 1;
  if ( v3 + 1 > 11 || v4 == 255 )
  {
    ++*(uint *)(v1 + 8);
    ++*(uint *)(v1 + 24);
    Function_200d79c(*(int **)(v1 + 48), 0);
    Function_22368e4((uint *)v1, 18);
    return 1;
  }
  if ( v3 == 4 )
    Function_2005728(0x5FEu, 117);
  Function_200d5dc(*(uint ***)(v1 + 48), v4, 0);
  v6 = s32_div_f(131070 * v4, 360);
  Function_200d7c0(*(int **)(v1 + 48), v6);
  return 1;
}

//----- (02236CFC) --------------------------------------------------------
int Function_2236cfc()
{
  return 1;
}

//----- (02236D00) --------------------------------------------------------
int __fastcall Function_2236d00(uint *a1)
{
  Function_22368e4(a1, 20);
  return 1;
}

//----- (02236D0C) --------------------------------------------------------
int __fastcall Function_2236d0c(uint *a1)
{
  Function_22368e4(a1, 27);
  return 1;
}

//----- (02236D18) --------------------------------------------------------
int __fastcall Function_2236d18(int a1, int a2, int a3, int a4)
{
  int v4;
  char v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  switch ( (uchar)*(uint *)(a1 + 8) )
  {
    case 0u:
      v5 = Function_200d43c(*(int **)(a1 + 48));
      Function_2003178(*(uint *)(v4 + 176), 4, (1 << v5) & 0xFFFF, -5, 0, 10, 0);
      ++*(uint *)(v4 + 8);
      break;
    case 1u:
      if ( !Function_200384c(*(uint *)(a1 + 176)) )
      {
        v9 = *(uint *)(v4 + 160);
        v10 = *(uint *)(v4 + 148);
        v11 = Function_2235fb4(v9);
        v12 = 0;
        Function_200d550(*(int **)(v4 + 48), &v7, &v8);
        *(uint *)(v4 + 208) = Function_2236690(&v7);
        ++*(uint *)(v4 + 8);
      }
      break;
    case 2u:
      Function_22366f0(*(uint *)(a1 + 208));
      ++*(uint *)(v4 + 8);
      break;
    case 3u:
      if ( !Function_2236764(*(uint *)(a1 + 208)) )
      {
        Function_200d3cc(*(int **)(v4 + 48), 0);
        Function_2236780(*(uint *)(v4 + 208));
        ++*(uint *)(v4 + 8);
      }
      break;
    default:
      if ( !Function_200384c(*(uint *)(a1 + 176)) )
        Function_22368e4((uint *)v4, 22);
      break;
  }
  return 1;
}

//----- (02236E08) --------------------------------------------------------
int Function_2236e08()
{
  return 1;
}

//----- (02236E0C) --------------------------------------------------------
int __fastcall Function_2236e0c(int a1)
{
  int v1;
  int v2;
  char v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( !Function_200384c(*(uint *)(a1 + 176)) )
        ++*(uint *)(v1 + 8);
    }
    else
    {
      Function_22368e4((uint *)a1, 24);
    }
  }
  else
  {
    v3 = Function_200d43c(*(int **)(a1 + 48));
    Function_2003178(*(uint *)(v1 + 176), 4, (1 << v3) & 0xFFFF, -5, 10, 0, 0);
    ++*(uint *)(v1 + 8);
  }
  return 1;
}

//----- (02236E70) --------------------------------------------------------
int __fastcall Function_2236e70(uint *a1)
{
  Function_22368e4(a1, 25);
  return 1;
}

//----- (02236E7C) --------------------------------------------------------
int __fastcall Function_2236e7c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      Function_22368e4((uint *)a1, 26);
      return 1;
    }
  }
  else
  {
    Function_200d810(*(int **)(a1 + 48), 1);
    ++*(uint *)(v1 + 8);
  }
  if ( *(uchar *)(v1 + 32) )
  {
    --*(uchar *)(v1 + 32);
    ++*(uchar *)(v1 + 33);
  }
  else
  {
    *(uchar *)(v1 + 32) = 0;
    *(uchar *)(v1 + 33) = 15;
    Function_200d3f4(*(uint **)(v1 + 48), 0);
    ++*(uint *)(v1 + 8);
  }
  REG_BLDALPHA = *(uchar *)(v1 + 32) | (ushort)(*(uchar *)(v1 + 33) << 8);
  return 1;
}

//----- (02236F00) --------------------------------------------------------
int __fastcall Function_2236f00(uint *a1)
{
  Function_22368e4(a1, 27);
  return 1;
}

//----- (02236F0C) --------------------------------------------------------
int Function_2236f0c()
{
  return 0;
}

//----- (02236F10) --------------------------------------------------------
int __fastcall Function_2236f10(int a1)
{
  return ((int (*)(void))*(&off_223AC80 + *(uint *)(a1 + 20)))();
}

//----- (02236F24) --------------------------------------------------------
int __fastcall Function_2236f24(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  uint v8;
  short v9;
  short v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  short v17;
  int v18;

  v4 = a1;
  v5 = *(uint *)(a1 + 8);
  if ( v5 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_2236F3E + v5) + 35876672);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_2225c98(
        v4 + 72,
        v4 + 108,
        *(short *)(v4 + 184),
        *(short *)(v4 + 188),
        *(ushort *)(v4 + 186),
        *(ushort *)(v4 + 190),
        *(uint *)(v4 + 192),
        *(uint *)(v4 + 200) << 12);
      *(uint *)(v4 + 196) = 0;
      ++*(uint *)(v4 + 8);
      *(uint *)(v4 + 212) = 0;
      if ( Function_2235eb0(*(uint *)(v4 + 144), 0, v6, v7) == 1 )
      {
        v8 = PRNG();
        s32_div_f(v8, 20);
        Function_200d7c0(*(int **)(v4 + 48), (v9 + 10) << 13);
      }
      return 1;
    case 1:
      if ( Function_2235eb0(*(uint *)(v4 + 144), a2, a3, a4) == 1 )
      {
        Function_200d7c0(*(int **)(v4 + 48), 0x2000);
        if ( *(uint *)(v4 + 196) > *(uint *)(v4 + 192) / 2 + 10 )
          Function_200d7c0(*(int **)(v4 + 48), 0x2000);
        if ( Function_2235ef0(*(uint *)(v4 + 144)) == 1 && *(uint *)(v4 + 196) == *(uint *)(v4 + 192) / 2 + 10 )
        {
          v10 = Function_200d43c(*(int **)(v4 + 48));
          *(uint *)(v4 + 212) = Function_2226870(
                                    *(uint *)(v4 + 176),
                                    *(uint *)(v4 + 148),
                                    2,
                                    16 * v10,
                                    16,
                                    -2,
                                    2,
                                    0,
                                    14,
                                    0xFFFF,
                                    0x3EAu);
        }
      }
      ++*(uint *)(v4 + 196);
      v11 = *(uint *)(v4 + 144);
      if ( v11 < 6
        || v11 > 8
        || (v12 = *(uint *)(v4 + 192) / 2, v13 = *(uint *)(v4 + 196), v13 <= v12)
        || v13 >= v12 + 5 )
      {
        if ( !Function_2225d2c((ushort *)(v4 + 72), (ushort *)(v4 + 108), *(int **)(v4 + 48)) )
        {
          Function_2237e24(v4, 0);
          ++*(uint *)(v4 + 8);
        }
      }
      return 1;
    case 2:
      if ( Function_2235ef0(*(uint *)(v4 + 144)) == 1 && (v14 = *(uint *)(v4 + 212)) != 0 )
      {
        if ( Function_2226848(v14) != 1 )
        {
          Function_2226858(*(uint *)(v4 + 212));
          *(uint *)(v4 + 40) = 1;
          return 0;
        }
      }
      else
      {
        if ( *(uint *)(v4 + 144) >= 15 )
        {
          *(uint *)(v4 + 40) = 1;
          return 0;
        }
        if ( *(uint *)(v4 + 160) == 273 )
          Function_2005728(0x7E8u, 117);
        ++*(uint *)(v4 + 8);
      }
      return 1;
    case 3:
      Function_200d364(*(int **)(v4 + 48), 1u);
      Function_12_2237e30(v4, 1);
      *(uint *)(v4 + 196) = 0;
      ++*(uint *)(v4 + 8);
      return 1;
    default:
      if ( *(uint *)(v4 + 196) == 5 )
      {
        v16 = *(uint *)(v4 + 144);
        if ( v16 != 12 && v16 != 13 )
        {
          v17 = Function_200d43c(*(int **)(v4 + 48));
          *(uint *)(v4 + 212) = Function_2226870(
                                    *(uint *)(v4 + 176),
                                    *(uint *)(v4 + 148),
                                    2,
                                    16 * v17,
                                    16,
                                    -2,
                                    2,
                                    0,
                                    14,
                                    0xFFFF,
                                    0x3EAu);
        }
        *(uint *)(v4 + 40) = 1;
      }
      if ( ++*(uint *)(v4 + 196) <= 15 )
        return 1;
      v18 = *(uint *)(v4 + 144);
      if ( v18 == 12 || v18 == 13 )
        return 0;
      if ( Function_2226848(*(uint *)(v4 + 212)) == 1 )
        return 1;
      Function_2226858(*(uint *)(v4 + 212));
      return 0;
  }
}

//----- (022371E4) --------------------------------------------------------
int __fastcall Function_22371e4(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  uint v8;
  short v9;
  short v10;
  int v11;
  int v12;
  int v13;
  int v14;
  short v16;

  v4 = a1;
  v5 = *(uint *)(a1 + 8);
  if ( v5 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_22371FE + v5) + 35877376);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_2225c98(
        v4 + 72,
        v4 + 108,
        *(short *)(v4 + 184),
        *(short *)(v4 + 188),
        *(ushort *)(v4 + 186),
        *(ushort *)(v4 + 190),
        *(uint *)(v4 + 192),
        *(uint *)(v4 + 200) << 12);
      *(uint *)(v4 + 196) = 0;
      ++*(uint *)(v4 + 8);
      *(uint *)(v4 + 212) = 0;
      if ( Function_2235eb0(*(uint *)(v4 + 144), 0, v6, v7) == 1 )
      {
        v8 = PRNG();
        s32_div_f(v8, 20);
        Function_200d7c0(*(int **)(v4 + 48), (v9 + 10) << 13);
      }
      return 1;
    case 1:
      if ( Function_2235eb0(*(uint *)(v4 + 144), a2, a3, a4) == 1 )
      {
        Function_200d7c0(*(int **)(v4 + 48), 0x2000);
        if ( *(uint *)(v4 + 196) > *(uint *)(v4 + 192) / 2 + 10 )
          Function_200d7c0(*(int **)(v4 + 48), 0x2000);
        if ( Function_2235ef0(*(uint *)(v4 + 144)) == 1 && *(uint *)(v4 + 196) == *(uint *)(v4 + 192) / 2 + 10 )
        {
          v10 = Function_200d43c(*(int **)(v4 + 48));
          *(uint *)(v4 + 212) = Function_2226870(
                                    *(uint *)(v4 + 176),
                                    *(uint *)(v4 + 148),
                                    2,
                                    16 * v10,
                                    16,
                                    -2,
                                    2,
                                    0,
                                    14,
                                    0xFFFF,
                                    0x3EAu);
        }
      }
      ++*(uint *)(v4 + 196);
      v11 = *(uint *)(v4 + 144);
      if ( v11 < 6
        || v11 > 8
        || (v12 = *(uint *)(v4 + 192) / 2, v13 = *(uint *)(v4 + 196), v13 <= v12)
        || v13 >= v12 + 5 )
      {
        if ( !Function_2225d2c((ushort *)(v4 + 72), (ushort *)(v4 + 108), *(int **)(v4 + 48)) )
        {
          Function_2237e24(v4, 0);
          ++*(uint *)(v4 + 8);
        }
      }
      return 1;
    case 2:
      if ( Function_2235ef0(*(uint *)(v4 + 144)) == 1 && (v14 = *(uint *)(v4 + 212)) != 0 )
      {
        if ( Function_2226848(v14) != 1 )
        {
          Function_2226858(*(uint *)(v4 + 212));
          *(uint *)(v4 + 40) = 1;
          return 0;
        }
      }
      else
      {
        if ( *(uint *)(v4 + 144) >= 15 )
        {
          *(uint *)(v4 + 40) = 1;
          return 0;
        }
        ++*(uint *)(v4 + 8);
      }
      return 1;
    case 3:
      Function_200d364(*(int **)(v4 + 48), 1u);
      Function_12_2237e30(v4, 0);
      *(uint *)(v4 + 196) = 0;
      ++*(uint *)(v4 + 8);
      return 1;
    default:
      if ( *(uint *)(v4 + 196) == 5 )
      {
        Function_200d3cc(*(int **)(v4 + 48), 2u);
        v16 = Function_200d43c(*(int **)(v4 + 48));
        *(uint *)(v4 + 212) = Function_2226870(
                                  *(uint *)(v4 + 176),
                                  *(uint *)(v4 + 148),
                                  2,
                                  16 * v16,
                                  16,
                                  -2,
                                  2,
                                  0,
                                  14,
                                  0xFFFF,
                                  0x3EAu);
        *(uint *)(v4 + 40) = 1;
      }
      if ( ++*(uint *)(v4 + 196) <= 15 || Function_2226848(*(uint *)(v4 + 212)) == 1 )
        return 1;
      Function_2226858(*(uint *)(v4 + 212));
      return 0;
  }
}

//----- (02237474) --------------------------------------------------------
int __fastcall Function_2237474(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 8);
  if ( v5 <= 7 )
    JUMPOUT(__CS__, *((short *)&off_223748E + v5) + 35878032);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_12_2237e30(a1, 0);
      Function_200d364(*(int **)(v4 + 48), 1u);
      if ( ++*(uint *)(v4 + 196) >= 2 )
      {
        Function_200d3cc(*(int **)(v4 + 48), 0);
        *(uint *)(v4 + 196) = 0;
        ++*(uint *)(v4 + 8);
      }
      goto LABEL_20;
    case 1:
      if ( ++*(uint *)(a1 + 196) >= 2 )
      {
        Function_200d3cc(*(int **)(a1 + 48), 2u);
        *(uint *)(v4 + 196) = 0;
        ++*(uint *)(v4 + 8);
      }
      goto LABEL_20;
    case 2:
      v9 = *(uint *)(a1 + 160);
      v10 = *(uint *)(a1 + 148);
      v11 = 255;
      v12 = 1;
      Function_200d550(*(int **)(a1 + 48), &v7, &v8);
      *(uint *)(v4 + 208) = Function_2236690(&v7);
      ++*(uint *)(v4 + 8);
      goto LABEL_20;
    case 3:
      Function_22366f0(*(uint *)(a1 + 208));
      ++*(uint *)(v4 + 8);
      goto LABEL_20;
    case 4:
      if ( ++*(uint *)(a1 + 196) >= 6 )
      {
        Function_200d3cc(*(int **)(a1 + 48), 2u);
        *(uint *)(v4 + 196) = 0;
        ++*(uint *)(v4 + 8);
      }
      goto LABEL_20;
    case 5:
      if ( ++*(uint *)(a1 + 196) >= 6 )
      {
        Function_200d3cc(*(int **)(a1 + 48), 1u);
        *(uint *)(v4 + 196) = 0;
        ++*(uint *)(v4 + 8);
      }
      goto LABEL_20;
    case 6:
      if ( ++*(uint *)(a1 + 196) >= 6 )
      {
        Function_200d3cc(*(int **)(a1 + 48), 0);
        *(uint *)(v4 + 196) = 0;
        ++*(uint *)(v4 + 8);
      }
      goto LABEL_20;
    case 7:
      if ( !Function_2236764(*(uint *)(a1 + 208)) )
      {
        Function_2236780(*(uint *)(v4 + 208));
        ++*(uint *)(v4 + 8);
      }
LABEL_20:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02237608) --------------------------------------------------------
int __fastcall Function_2237608(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      result = 0;
      *(uint *)(v1 + 196) = 0;
      return result;
    }
    Function_200d79c(*(int **)(v1 + 48), *(uint *)(v1 + 52));
    if ( !Function_2225da0((uint *)(v1 + 52)) )
    {
      v3 = *(uint *)(v1 + 12);
      if ( v3 < 1 )
      {
        *(uint *)(v1 + 12) = v3 + 1;
        --*(uint *)(v1 + 8);
      }
      else
      {
        ++*(uint *)(v1 + 8);
      }
    }
  }
  else
  {
    if ( *(uint *)(v1 + 16) )
      Function_2225d50((uint *)(v1 + 52), 0x1FFF, -8191, 10);
    else
      Function_2225d50((uint *)(v1 + 52), -8191, 0x1FFF, 10);
    *(uint *)(v1 + 16) ^= 1u;
    ++*(uint *)(v1 + 8);
  }
  return 1;
}

//----- (02237694) --------------------------------------------------------
int __fastcall Function_2237694(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v6;
  char v7;
  short v8;
  int v9;

  v9 = a4;
  v4 = a1;
  if ( *(uint *)(a1 + 8) == 255 )
    return 0;
  v6 = *(int **)(a1 + 48);
  if ( v6 )
  {
    Function_200d550(v6, &v8, &v7);
    *(ushort *)(v4 + 184) = v8;
    *(ushort *)(v4 + 186) = *(ushort *)&v7;
  }
  return 1;
}

//----- (022376D0) --------------------------------------------------------
int __fastcall Function_22376d0(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 28);
  if ( result )
  {
    if ( *(uint *)(a2 + 220) <= 0 )
    {
      if ( !((int (__fastcall *)(int))*(&off_223AB84 + *(uint *)(a2 + 152)))(a2) )
        *(uint *)(v2 + 28) = 0;
      if ( *(uint *)(v2 + 36) == 1 )
        Function_200d330(*(int **)(v2 + 48));
      result = Function_200c7ec(*(int **)(v2 + 44));
    }
    else
    {
      --*(uint *)(a2 + 220);
      result = Function_200c7ec(*(int **)(a2 + 44));
    }
  }
  return result;
}

//----- (02237728) --------------------------------------------------------
int __fastcall Function_12_2237728(int *a1)
{
  int *v1;
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;

  v1 = a1;
  v2 = malloc(a1[1], 224);
  MI_CpuFill8((ushort *)v2, 0, 0xE0u);
  if ( !v2 )
    ErrorHandler();
  v3 = (uint *)(v2 + 144);
  v4 = 5;
  do
  {
    v5 = *v1;
    v6 = v1[1];
    v1 += 2;
    *v3 = v5;
    v3[1] = v6;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  *(uint *)(v2 + 8) = 0;
  *(uint *)(v2 + 16) = 0;
  *(uint *)(v2 + 12) = 0;
  *(uint *)(v2 + 20) = 0;
  *(uint *)(v2 + 24) = 0;
  *(uint *)v2 = 0;
  *(uint *)(v2 + 4) = 0;
  *(uint *)(v2 + 44) = Function_200c704(*(uint **)(v2 + 172));
  *(uint *)(v2 + 220) = 0;
  *(uint *)(v2 + 36) = Function_2235f2c(*(uint *)(v2 + 144), 0, v7, v8);
  *(uint *)(v2 + 196) = 0;
  *(uchar *)(v2 + 32) = 16;
  *(uchar *)(v2 + 33) = 0;
  Function_2220474();
  v9 = PRNG();
  if ( (v9 >> 31) + __ROR4__((v9 << 31) - (v9 >> 31), 31) )
    *(uchar *)(v2 + 34) = 1;
  else
    *(uchar *)(v2 + 34) = -1;
  Function_2237c54(v2);
  Function_2237d8c(v2);
  Function_22378a0(v2);
  *(uint *)(v2 + 28) = 1;
  *(uint *)(v2 + 40) = 0;
  *(uint *)(v2 + 204) = AddTaskToTaskList1((int)Function_22376d0, v2, 0x3E8u);
  return v2;
}

//----- (022377F8) --------------------------------------------------------
BOOL __fastcall Function_12_22377f8(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 28) != 0;
}

//----- (02237810) --------------------------------------------------------
BOOL __fastcall Function_12_2237810(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 40) != 0;
}

//----- (02237828) --------------------------------------------------------
int __fastcall Function_2237828(int result, int a2)
{
  *(uint *)(result + 20) = a2;
  return result;
}

//----- (0223782C) --------------------------------------------------------
BOOL __fastcall Function_223782c(int a1, int a2)
{
  return *(uint *)(a1 + 20) == a2;
}

//----- (0223783C) --------------------------------------------------------
uint __fastcall Function_12_223783c(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_200d0b0(*(uint *)(v1 + 172), *(int ***)(v1 + 44));
  Function_200d0f4(*(uint *)(v1 + 48));
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 204));
  return free(v1);
}

//----- (0223786C) --------------------------------------------------------
int __fastcall Function_12_223786c(int a1, int a2)
{
  *(uint *)(a1 + 152) = a2;
  *(uint *)(a1 + 8) = 0;
  *(uint *)(a1 + 12) = 0;
  *(uint *)(a1 + 16) = 0;
  *(uint *)(a1 + 28) = 1;
  return Function_200d550(*(int **)(a1 + 48), (ushort *)(a1 + 184), (ushort *)(a1 + 186));
}

//----- (02237890) --------------------------------------------------------
int __fastcall Function_12_2237890(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 152);
}

//----- (022378A0) --------------------------------------------------------
int __fastcall Function_22378a0(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  Function_200d550(*(int **)(a1 + 48), (ushort *)(a1 + 184), (ushort *)(a1 + 186));
  v2 = *(uint *)(v1 + 144);
  if ( v2 <= 0x11 )
    JUMPOUT(__CS__, *((short *)&off_22378CA + v2) + 35879116);
  switch ( (uchar)v2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      Function_200d550(*(int **)(v1 + 48), (ushort *)(v1 + 188), (ushort *)(v1 + 190));
      *(uint *)(v1 + 200) = 0;
      result = 12;
      *(uint *)(v1 + 192) = 12;
      return result;
    case 6:
      Function_2225864(0, 0, (ushort *)(v1 + 188), (ushort *)(v1 + 190));
      *(uint *)(v1 + 200) = 48;
      *(ushort *)(v1 + 190) += 32;
      goto LABEL_17;
    case 7:
      Function_200d550(*(int **)(v1 + 48), (ushort *)(v1 + 184), (ushort *)(v1 + 186));
      Function_2225864(1, 4, (ushort *)(v1 + 188), (ushort *)(v1 + 190));
      *(uint *)(v1 + 200) = 48;
      *(ushort *)(v1 + 190) += 32;
      goto LABEL_17;
    case 8:
      Function_2225864(1, 2, (ushort *)(v1 + 188), (ushort *)(v1 + 190));
      *(uint *)(v1 + 200) = 48;
      *(ushort *)(v1 + 190) += 32;
      goto LABEL_17;
    case 9:
      Function_2225864(0, 1, (ushort *)(v1 + 188), (ushort *)(v1 + 190));
      *(uint *)(v1 + 200) = 48;
      *(ushort *)(v1 + 190) += 32;
      goto LABEL_17;
    case 0xA:
      Function_2225864(1, 3, (ushort *)(v1 + 188), (ushort *)(v1 + 190));
      *(uint *)(v1 + 200) = 48;
      *(ushort *)(v1 + 190) += 32;
      goto LABEL_17;
    case 0xB:
      Function_2225864(1, 5, (ushort *)(v1 + 188), (ushort *)(v1 + 190));
      *(uint *)(v1 + 200) = 48;
      *(ushort *)(v1 + 190) += 32;
      goto LABEL_17;
    case 0xC:
      Function_2225864(0, 1, (ushort *)(v1 + 188), (ushort *)(v1 + 190));
      *(uint *)(v1 + 200) = 16;
      *(ushort *)(v1 + 190) += 16;
      result = 12;
      *(uint *)(v1 + 192) = 12;
      return result;
    case 0xD:
      Function_2225864(0, 1, (ushort *)(v1 + 188), (ushort *)(v1 + 190));
      *(uint *)(v1 + 200) = 32;
      *(ushort *)(v1 + 188) -= 20;
      *(ushort *)(v1 + 190) += 38;
      result = 16;
      *(uint *)(v1 + 192) = 16;
      return result;
    case 0xE:
      *(ushort *)(v1 + 188) = 128;
      *(ushort *)(v1 + 190) = 64;
      *(uint *)(v1 + 200) = 32;
      *(ushort *)(v1 + 190) += 32;
      goto LABEL_17;
    case 0xF:
      Function_2225864(0, 1, (ushort *)(v1 + 188), (ushort *)(v1 + 190));
      *(uint *)(v1 + 200) = 64;
      *(ushort *)(v1 + 190) += 8;
      result = 16;
      *(uint *)(v1 + 192) = 16;
      break;
    case 0x10:
      Function_2225864(1, 3, (ushort *)(v1 + 188), (ushort *)(v1 + 190));
      *(uint *)(v1 + 200) = 64;
      *(ushort *)(v1 + 190) += 8;
      result = 16;
      *(uint *)(v1 + 192) = 16;
      break;
    case 0x11:
      Function_2225864(1, 5, (ushort *)(v1 + 188), (ushort *)(v1 + 190));
      *(uint *)(v1 + 200) = 64;
      *(ushort *)(v1 + 190) += 8;
      result = 16;
      *(uint *)(v1 + 192) = 16;
      break;
    default:
LABEL_17:
      result = 20;
      *(uint *)(v1 + 192) = 20;
      break;
  }
  return result;
}

//----- (02237B14) --------------------------------------------------------
uint __fastcall Function_2237b14(int a1, ushort *a2, ushort *a3)
{
  uint result;
  ushort *v4;

  result = *(uint *)(a1 + 144);
  v4 = a3;
  if ( result <= 0x11 )
    JUMPOUT(__CS__, *((short *)&off_2237B30 + result) + 35879730);
  switch ( (uchar)result )
  {
    case 0:
      Function_2225864(0, 0, a2, a3);
      result = (short)*v4 + 40;
      *v4 = result;
      break;
    case 1:
      Function_2225864(0, 1, a2, a3);
      result = (short)*v4 + 38;
      *v4 = result;
      break;
    case 2:
      Function_2225864(1, 2, a2, a3);
      result = (short)*v4 + 40;
      *v4 = result;
      break;
    case 3:
      Function_2225864(1, 3, a2, a3);
      result = (short)*v4 + 38;
      *v4 = result;
      break;
    case 4:
      Function_2225864(1, 4, a2, a3);
      result = (short)*v4 + 40;
      *v4 = result;
      break;
    case 5:
      Function_2225864(1, 5, a2, a3);
      result = (short)*v4 + 38;
      *v4 = result;
      break;
    case 6:
      *a2 = 10;
      result = 100;
      *a3 = 100;
      break;
    case 7:
      *a2 = 10;
      result = 100;
      *a3 = 100;
      break;
    case 8:
      *a2 = 10;
      result = 100;
      *a3 = 100;
      break;
    case 9:
      result = Function_2225864(0, 0, a2, a3);
      break;
    case 0xA:
      result = Function_2225864(0, 0, a2, a3);
      break;
    case 0xB:
      result = Function_2225864(0, 0, a2, a3);
      break;
    case 0xC:
      result = Function_2225864(0, 0, a2, a3);
      break;
    case 0xD:
      result = Function_2225864(0, 0, a2, a3);
      break;
    case 0xE:
      *a2 = 230;
      result = 32;
      *a3 = 32;
      break;
    case 0xF:
    case 0x10:
    case 0x11:
      *a2 = -30;
      result = 160;
      *a3 = 160;
      break;
    default:
      return result;
  }
  return result;
}

//----- (02237C54) --------------------------------------------------------
uint __fastcall Function_2237c54(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  char v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = (uint *)a1;
  Function_200c7c0(*(int **)(a1 + 172), *(int ***)(a1 + 44), 10);
  if ( !v4[42] )
  {
    v5 = Function_200c738(v4[43]);
    Function_200964c(v5, 0, 1114112, v6);
  }
  v7 = 0;
  v8 = &v17;
  do
  {
    ++v7;
    *(uint *)v8 = 10;
    v8 += 4;
  }
  while ( v7 < 6 );
  v18 = 0;
  v19 = 0;
  Function_200cb30((uint *)v4[43], v4[11], (int *)&v17);
  v9 = Function_2235fc8(v4[40], 0);
  v10 = Function_2235fc8(v4[40], 1);
  v11 = Function_2235fc8(v4[40], 2);
  v12 = Function_2235fc8(v4[40], 3);
  v15 = LoadFromNARC_8(27, v4[37], v13, v14);
  Function_200cc3c((uint *)v4[43], v4[11], (int)v15, v9, 1, 1, v4[39] + 6000);
  Function_200cdc4(v4[44], 2u, (uint *)v4[43], v4[11], (int)v15, v10, 0, 1, 1, v4[39] + 6000);
  Function_200ce24((uint *)v4[43], v4[11], (int)v15, v11, 1, v4[39] + 6000);
  Function_200ce54((uint *)v4[43], v4[11], (int)v15, v12, 1, v4[39] + 6000);
  return Call_FS_CloseFile(v15);
}

//----- (02237D8C) --------------------------------------------------------
int *__fastcall Function_2237d8c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char *v6;
  int *v7;
  short v9[2];
  short v10[2];
  short v11;
  short v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  Function_2237b14(a1, v9, v10);
  v5 = 0;
  v11 = 0;
  v12 = 0;
  v15 = 1;
  v13 = 0;
  v14 = 0;
  v16 = *(uint *)(v4 + 164);
  v17 = 0;
  v6 = (char *)v9;
  do
  {
    ++v5;
    *((uint *)v6 + 5) = *(uint *)(v4 + 156) + 6000;
    v6 += 4;
  }
  while ( v5 < 6 );
  v7 = Function_200ce6c(*(uint **)(v4 + 172), *(uint *)(v4 + 44), v9);
  *(uint *)(v4 + 48) = v7;
  Function_200d3f4((uint *)v7, 1);
  Function_200d6a4(*(uint **)(v4 + 48), 2);
  Function_200d3cc(*(int **)(v4 + 48), 0);
  Function_200d364(*(int **)(v4 + 48), 0);
  Function_200d330(*(int **)(v4 + 48));
  return Function_2220474();
}

//----- (02237E0C) --------------------------------------------------------
uint __fastcall Function_12_2237e0c(int a1, int a2)
{
  return Function_200d3f4(*(uint **)(a1 + 48), a2);
}

//----- (02237E18) --------------------------------------------------------
int __fastcall Function_12_2237e18(int a1, int a2, int a3)
{
  return Function_200d4c4(*(int **)(a1 + 48), a2, a3);
}

//----- (02237E24) --------------------------------------------------------
int __fastcall Function_2237e24(int a1, short a2)
{
  return Function_200d79c(*(int **)(a1 + 48), a2);
}

//----- (02237E30) --------------------------------------------------------
int __fastcall Function_12_2237e30(int result, int a2)
{
  *(uint *)(result + 36) = a2;
  return result;
}

//----- (02237E34) --------------------------------------------------------
int __fastcall Function_12_2237e34(int a1, short a2)
{
  return Function_200d474(*(int **)(a1 + 48), a2);
}

//----- (02237E40) --------------------------------------------------------
char *__fastcall Function_12_2237e40(int a1, char a2)
{
  return Function_200d460(*(int **)(a1 + 48), a2);
}

//----- (02237E4C) --------------------------------------------------------
uint *__fastcall Function_12_2237e4c(int a1, int a2)
{
  uint *result;

  result = (uint *)(a1 + 220);
  *result = a2;
  return result;
}

//----- (02237E54) --------------------------------------------------------
int __fastcall Function_2237e54(short a1, short a2, short a3, short a4)
{
  return (int)FX_Sqrt(((short)(a4 - a2) * (short)(a4 - a2)
                            + (short)(a1 - a3) * (short)(a1 - a3)) << 12)
       / 4096;
}

//----- (02237E80) --------------------------------------------------------
int __fastcall Function_2237e80(int a1)
{
  int v1;
  short v2;
  short v3;

  v1 = a1;
  v2 = Function_202ca80(a1);
  v3 = Function_202ca84(v1);
  return Function_2237e54(v2, v3, 190, 70);
}

//----- (02237EA0) --------------------------------------------------------
int __fastcall Function_2237ea0(uchar *a1)
{
  char *v1;
  uchar *v2;
  char *v3;
  int v4;
  char v5;
  uchar v6;
  int v7;
  int v8;
  char v10;
  uchar v11;

  v1 = &byte_223B040;
  v2 = a1;
  v3 = &v10;
  v4 = 7;
  do
  {
    v5 = *v1++;
    *v3++ = v5;
    --v4;
  }
  while ( v4 );
  v6 = Function_202ca7c(v2);
  if ( Function_20981ac(v6) )
    return v11;
  v7 = Function_2237e80((int)v2);
  if ( v7 < 56 )
  {
    v8 = s32_div_f(v7 + 1, 20);
    if ( v8 >= 3 )
      v8 = 3;
  }
  else
  {
    v8 = 3;
  }
  return (uchar)*(&v10 + v8);
}

//----- (02237EFC) --------------------------------------------------------
uint *__fastcall Function_12_2237efc(uint a1, uint *a2)
{
  uint *v2;
  uint v3;
  uint *v4;
  uint *result;
  int v6;
  uint *v7;

  v2 = a2;
  v3 = a1;
  v4 = (uint *)malloc(a1, 72);
  if ( v4 )
  {
    Function_2220474();
    *v4 = v3;
    if ( v2 )
      v4[1] = *v2;
    v6 = 0;
    v7 = v4;
    do
    {
      ++v6;
      v7[2] = 0;
      ++v7;
    }
    while ( v6 < 16 );
    result = v4;
  }
  else
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (02237F38) --------------------------------------------------------
int *__fastcall Function_12_2237f38(uint *a1)
{
  int *v1;
  int v2;
  uint *v3;
  int v4;
  int v5;

  v1 = 0;
  v2 = 0;
  v3 = a1;
  while ( v3[2] )
  {
    ++v2;
    ++v3;
    if ( v2 >= 16 )
      goto LABEL_5;
  }
  v4 = (int)(a1 + 2);
  v5 = 4 * v2;
  *(uint *)(v4 + v5) = Function_2237fc8(*a1);
  *(uint *)(*(uint *)(v4 + v5) + 24) = 0;
  v1 = *(int **)(v4 + 4 * v2);
  *v1 = v2;
LABEL_5:
  if ( !v1 )
    ErrorHandler();
  return v1;
}

//----- (02237F74) --------------------------------------------------------
uint __fastcall Function_12_2237f74(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    v4 = *(uint *)(v3 + 8);
    if ( v4 )
      free(v4);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 16 );
  return free(v1);
}

//----- (02237F98) --------------------------------------------------------
int *__fastcall Function_12_2237f98(int a1)
{
  int v1;
  int v2;
  int *result;
  int v4;
  int v5;

  v1 = a1;
  v2 = 0;
  do
  {
    result = *(int **)(v1 + 8);
    if ( result )
    {
      v4 = result[4];
      Function_2223894();
      v5 = *(uint *)(v1 + 8);
      result = *(int **)(v5 + 32);
      if ( result )
      {
        result = *(int **)(v5 + 24);
        if ( result )
          result = (int *)Call_RemoveTaskFromTaskList(result);
      }
    }
    ++v2;
    v1 += 4;
  }
  while ( v2 < 16 );
  return result;
}

//----- (02237FC8) --------------------------------------------------------
uint *__fastcall Function_2237fc8(uint a1, uint *a2)
{
  uint *v2;
  uint v3;
  int v4;
  uint *v5;
  uint *result;
  int v7;

  v2 = a2;
  v3 = a1;
  v4 = malloc(a1, 36);
  v5 = (uint *)v4;
  if ( v4 )
  {
    *(uint *)(v4 + 4) = v3;
    v7 = v2[1];
    v5[2] = *v2;
    v5[3] = v7;
    v5[7] = Function_2238088(v5[2]);
    v5[4] = Function_22237f0(v5[1], v5[2], 1);
    result = v5;
  }
  else
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (02238004) --------------------------------------------------------
uint *__fastcall Function_12_2238004(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  *(uint *)(a1 + 32) = 1;
  Function_2238054();
  result = AddTaskToTaskList1((int)Function_2238030, v1, 0x3E8u);
  *(uint *)(v1 + 24) = result;
  return result;
}

//----- (0223802C) --------------------------------------------------------
int __fastcall Function_12_223802c(int a1)
{
  return *(uint *)(a1 + 32);
}

//----- (02238030) --------------------------------------------------------
int __fastcall Function_2238030(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;
  int v5;

  v2 = a2;
  v3 = a1;
  result = Function_2014710(*(uint *)(a2 + 16));
  if ( !result )
  {
    *(uint *)(v2 + 32) = 0;
    v5 = *(uint *)(v2 + 16);
    Function_2223894();
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (02238054) --------------------------------------------------------
char *__fastcall Function_2238054(int a1, void (__fastcall *a2)(int))
{
  int v2;
  void (__fastcall *v3)(int);
  int i;

  v2 = a1;
  v3 = a2;
  for ( i = 0; i < *(uint *)(v2 + 28); ++i )
    Function_20146f4(*(int **)(v2 + 16), i, v3, v2);
  return Function_2014788(*(uint *)(v2 + 16), *(uint *)(v2 + 12));
}

//----- (02238080) --------------------------------------------------------
int Function_2238080()
{
  return Function_2014764();
}

//----- (02238088) --------------------------------------------------------
int __fastcall Function_2238088(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  char v11[88];
  int v12;

  v12 = a4;
  v4 = dword_223B048;
  v5 = a1;
  v6 = v11;
  v7 = 11;
  do
  {
    v8 = *v4;
    v9 = v4[1];
    v4 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  if ( (uint)(v5 - 5) < 0x16 )
    return *(uint *)&v11[4 * (v5 - 5)];
  ErrorHandler();
  return 0;
}

//----- (022380BC) --------------------------------------------------------
int __fastcall Function_22380bc(int *a1)
{
  int v1;

  v1 = *a1;
  return Function_22380dc();
}

//----- (022380CC) --------------------------------------------------------
int __fastcall Function_22380cc(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 4);
  return Function_22380dc();
}

//----- (022380DC) --------------------------------------------------------
int __fastcall Function_22380dc(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  ushort v8;
  int v9;
  uint *v10;
  ushort *v11;
  int v12;
  uint *v13;
  int v14;
  int v15;
  int result;
  int v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  uint v23;
  uint v24;
  uchar v25;
  uchar v26;
  int v27;
  uchar v28;
  uchar v29[3];
  char v30;
  char v31;
  int v32;
  int v33;
  int v34;
  int v35;

  v35 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v23 = a4;
  Function_20089b0(a1[*a1 + 6]);
  v7 = v4[1];
  v8 = *((ushort *)v4 + v7 + 20);
  v26 = *((uchar *)v4 + v7 + 48);
  v25 = *((uchar *)v4 + v7 + 56);
  v24 = v4[v7 + 15];
  if ( v6 )
  {
    if ( *((uchar *)v4 + v5 + 76) & 1 )
      v9 = 0;
    else
      v9 = 2;
  }
  else if ( *((uchar *)v4 + v5 + 76) & 1 )
  {
    v9 = 2;
  }
  else
  {
    v9 = 0;
  }
  Function_2075fb4(
    (int)&v31,
    *((ushort *)v4 + v7 + 20),
    *((uchar *)v4 + v7 + 48),
    (uchar)v9,
    *((uchar *)v4 + v7 + 52),
    *((uchar *)v4 + v7 + 56),
    v24);
  v10 = (uint *)Function_2008a90(v4[*v4 + 6]);
  v11 = (ushort *)v10;
  v12 = v32;
  *v10 = *(uint *)&v31;
  v10[1] = v12;
  v13 = v10 + 2;
  v14 = v34;
  *v13 = v33;
  v13[1] = v14;
  Function_20089a0((uint *)v4[*v4 + 6]);
  Function_2013750(*v11, v11[1], v23, *(uint *)v4[*v4 + 2], v24, 0, v9, v11[3]);
  *(uint *)(v4[*v4 + 2] + 4) = *v11;
  *(uint *)(v4[*v4 + 2] + 8) = v11[2];
  *(uint *)(v4[*v4 + 2] + 12) = Function_2076648(v8, v26, (uchar)v9, v25);
  v15 = (char)*(uint *)(v4[*v4 + 2] + 12);
  v27 = Function_12_22384cc(*((uchar *)v4 + *v4 + 76), 1);
  result = Function_2007dec(v4[*v4 + 6], 1u, v27 + v15);
  if ( v9 == 2 )
  {
    v19 = LoadFromNARC_8(147, v23, v17, v18);
    Function_2078a80((int)v19, &v30, v8, v20);
    Function_2078aa4((int)v19, v29, v8, v21);
    Function_2078ac8((int)v19, &v28, v8, v22);
    Call_FS_CloseFile(v19);
    Function_2007dec(v4[*v4 + 6], 0x2Eu, v28);
    Function_2007dec(v4[*v4 + 6], 0x14u, v27 + 36);
    Function_2007dec(v4[*v4 + 6], 0x15u, v29[0]);
    Function_2007dec(v4[*v4 + 6], 0x16u, 36 - v15);
    result = Function_2007dec(v4[*v4 + 6], 0x29u, v30);
  }
  return result;
}

//----- (022382BC) --------------------------------------------------------
int __fastcall Function_12_22382bc(uint *a1, uint a2)
{
  uint *v2;
  ushort *v3;
  int v4;
  int v5;
  int v6;
  uint v8;
  uchar v9;
  uchar v10;
  ushort v11;

  v2 = a1;
  v8 = a2;
  Function_2008a0c(a1[*a1 + 6]);
  v3 = (ushort *)Function_2008a90(v2[*v2 + 6]);
  v11 = *((ushort *)v2 + *v2 + 20);
  v10 = *((uchar *)v2 + *v2 + 48);
  v9 = *((uchar *)v2 + *v2 + 56);
  if ( *((uchar *)v2 + *v2 + 76) & 1 )
    v4 = 2;
  else
    v4 = 0;
  Function_2013750(*v3, v3[1], v8, *(uint *)v2[*v2 + 2], v2[*v2 + 15], 0, v4, v3[3]);
  *(uint *)(v2[*v2 + 2] + 4) = *v3;
  *(uint *)(v2[*v2 + 2] + 8) = v3[2];
  *(uint *)(v2[*v2 + 2] + 12) = Function_2076648(v11, v10, (uchar)v4, v9);
  v5 = *v2;
  v6 = Function_12_22384cc(*((uchar *)v2 + *v2 + 76), 1);
  return Function_2007dec(v2[v5 + 6], 1u, *(uint *)(v2[v5 + 2] + 12) + v6);
}

//----- (02238390) --------------------------------------------------------
int __fastcall Function_12_2238390(uint *a1, uint a2)
{
  uint *v2;
  uint v3;
  int v4;
  int v5;
  uint *v6;
  ushort *v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int result;
  uchar v16;
  ushort v17;
  short v18;
  ushort v19;
  short v20;
  char v21;
  int v22;

  v2 = a1;
  v3 = a2;
  Function_20089b0(a1[*a1 + 6]);
  v17 = 117;
  v19 = 250;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v4 = *v2;
  if ( *((uchar *)v2 + *v2 + 76) & 1 )
  {
    v18 = 249;
    v5 = 135;
  }
  else
  {
    v18 = 248;
    v5 = 134;
  }
  v6 = (uint *)Function_2008a90(v2[v4 + 6]);
  v7 = (ushort *)v6;
  v8 = *(uint *)&v19;
  *v6 = *(uint *)&v17;
  v6[1] = v8;
  v9 = v6 + 2;
  v10 = v22;
  *v9 = *(uint *)&v21;
  v9[1] = v10;
  Function_20089a0((uint *)v2[*v2 + 6]);
  Function_2013610(*v7, v7[1], v3, *(uint *)v2[*v2 + 2]);
  *(uint *)(v2[*v2 + 2] + 4) = v17;
  *(uint *)(v2[*v2 + 2] + 8) = v19;
  LoadFromNARC((int)&v16, 121, v5);
  *(uint *)(v2[*v2 + 2] + 12) = v16;
  v11 = *v2;
  v12 = Function_12_22384cc(*((uchar *)v2 + *v2 + 76), 1);
  v13 = (int)&v2[v11];
  v14 = *(uint *)(v2[v11 + 2] + 12) + v12;
  Function_2007dec(*(uint *)(v13 + 24), 1u, v14);
  result = *((uchar *)v2 + *v2 + 76);
  if ( result & 1 )
  {
    Function_2007dec(v2[*v2 + 6], 0x2Eu, 1);
    Function_2007dec(v2[*v2 + 6], 0x14u, v14 + 36 - v16);
    Function_2007dec(v2[*v2 + 6], 0x15u, 0);
    Function_2007dec(v2[*v2 + 6], 0x16u, 36 - v16);
    result = Function_2007dec(v2[*v2 + 6], 0x29u, 0);
  }
  return result;
}

//----- (022384CC) --------------------------------------------------------
int __fastcall Function_12_22384cc(int a1, int a2)
{
  int result;

  if ( a2 )
    result = *((short *)dword_223B0B8 + 3 * a1 + a2);
  else
    result = SLOWORD(dword_223B0A0[a1]);
  return result;
}

//----- (022384F0) --------------------------------------------------------
int __fastcall Function_22384f0(uint a1, int a2)
{
  if ( a1 <= 0x13B )
  {
    if ( a1 < 0x13B )
    {
      if ( a1 > 0x7D )
      {
        if ( a1 > 0xC9 )
        {
          if ( a1 != 215 )
            return 1;
        }
        else if ( a1 < 0xC9 && a1 != 159 )
        {
          return 1;
        }
      }
      else if ( a1 < 0x7D )
      {
        if ( a1 > 0x63 )
        {
          if ( a1 != 120 )
            return 1;
        }
        else if ( a1 != 99 )
        {
          return 1;
        }
      }
    }
    return 0;
  }
  if ( a1 <= 0x197 )
  {
    if ( a1 < 0x196 )
    {
      if ( a1 > 0x167 )
      {
        if ( a1 != 389 )
          return 1;
      }
      else if ( a1 < 0x167 && a1 != 335 )
      {
        return 1;
      }
    }
    else if ( a1 != 406 && a1 != 407 )
    {
      return 1;
    }
    return 0;
  }
  if ( a1 <= 0x1D4 )
  {
    if ( a1 < 0x1D4 && a1 != 467 )
      return 1;
    return 0;
  }
  if ( a1 == 492 && a2 == 1 )
    return 0;
  return 1;
}

