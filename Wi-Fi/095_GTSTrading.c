//----- (02246C20) --------------------------------------------------------
int __fastcall Function_95_2246c20(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  if ( !Function_200f2ac() )
    return 0;
  Function_2017fc8(3, 57, 98304);
  v2 = Function_2017fc8(3, 58, 98304);
  Function_2247688(v2);
  Function_2004550(3u, 0x492u);
  v3 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 344, 0x39u);
  if ( v3 )
  {
    *(uint *)v3 = LoadPtrToOverWorldDataIn18(v1);
    *(uint *)(v3 + 4) = 0;
    *(uint *)(v3 + 8) = Function_2018340(0x39u);
    *(uint *)(v3 + 20) = Function_2023790(400, 0x39u);
    *(uint *)(v3 + 16) = LoadFromMsgNARC(0, 26, 350, 0x39u);
    *(uint *)(v3 + 12) = Function_200b358(0x39u);
    v4 = *(int **)v3;
    v5 = *(uint *)(*(uint *)v3 + 16);
    switch ( v5 )
    {
      case 1:
        Function_200b5cc(*(int **)(v3 + 12), 0, *v4);
        Function_200b5cc(*(int **)(v3 + 12), 1u, *(uint *)(*(uint *)v3 + 4));
        v6 = *(uint *)(*(uint *)v3 + 8);
        Function_200b498(*(uint *)(v3 + 12), 2u);
        *(uint *)(v3 + 328) = Function_2246dec(*(uint *)(*(uint *)v3 + 4));
        break;
      case 2:
        Function_200b5cc(*(int **)(v3 + 12), 0, *v4);
        break;
      case 4:
        Function_200b5cc(*(int **)(v3 + 12), 1u, v4[1]);
        *(uint *)(v3 + 328) = Function_2246dec(*(uint *)(*(uint *)v3 + 4));
        break;
    }
    Function_20a7944();
    Function_200a784(0, 128, 0, 32, 1u, 0x7Fu, 0, 0x20u, 0x39u);
    *(uint *)(v3 + 24) = Function_20095c4(64, v3 + 28, 57, v7);
    Function_200964c(v3 + 28, 0, 950272, v8);
    *(ushort *)(v3 + 332) = GetBoxPkmnData(**(uint **)v3, 5u, 0);
    *(ushort *)(v3 + 334) = GetBoxPkmnData(**(uint **)v3, 0x70u, 0);
    *(ushort *)(v3 + 336) = GetBoxPkmnData(*(uint *)(*(uint *)v3 + 4), 5u, 0);
    *(ushort *)(v3 + 338) = GetBoxPkmnData(*(uint *)(*(uint *)v3 + 4), 0x70u, 0);
    *(uint *)(v3 + 340) = 0;
    SetMainLoopFunctionCall(0, 0);
    Function_20177a4();
    Function_201ff00();
    Function_201ff68();
    REG_DISPCNT &= 0xFFFFE0FF;
    REG_DISPCNT_SUB &= 0xFFFFE0FF;
    *(uint *)(v3 + 324) = AddTaskToTaskList4((int)Function_2246f0c, v3, 1u);
    *(uint *)(v3 + 340) = 0;
  }
  return 1;
}

//----- (02246DEC) --------------------------------------------------------
BOOL __fastcall Function_2246dec(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = GetBoxPkmnData(a1, 5u, 0);
  v3 = GetBoxPkmnData(v1, 0x70u, 0);
  return GetPkmnBaseData2(v2, v3, 0x1Cu) == 0;
}

//----- (02246E1C) --------------------------------------------------------
int __fastcall Function_95_2246e1c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = OS_DisableInterrupts();
  v3 = LoadOverlayData1c(v1);
  Call_RemoveTaskFromTaskList(*(int **)(v3 + 324));
  Function_2039794();
  Function_200b3f0(*(uint **)(v3 + 12), v4);
  Function_200b190(*(ushort **)(v3 + 16));
  Function_20237bc_FreeMsg(*(uint *)(v3 + 20), v5);
  free(*(uint *)(v3 + 8));
  Function_2021964(*(int **)(v3 + 24));
  Function_200a878();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(57);
  Function_201807c(58);
  OS_RestoreInterrupts(v2);
  return 1;
}

//----- (02246E7C) --------------------------------------------------------
int __fastcall Function_95_2246e7c(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  uint *v4;
  uint v5;

  v2 = a2;
  v3 = (uint *)LoadOverlayData1c(a1);
  v4 = v3;
  v5 = v3[1];
  if ( v5 >= 7 )
    return 1;
  if ( *(uint *)(*v3 + 16) & dword_224BE98[4 * v5] )
  {
    if ( !v3[85] )
      v3[85] = ((int (*)(void))*(&off_224BE8C + 4 * v5))();
    if ( ((int (__fastcall *)(uint, uint *))*(&off_224BE90 + 4 * v4[1]))(v4[85], v2) )
    {
      ((void (__fastcall *)(uint))*(&off_224BE94 + 4 * v4[1]))(v4[85]);
      v4[85] = 0;
      ++v4[1];
      *v2 = 0;
    }
  }
  else
  {
    v3[1] = v5 + 1;
    *v2 = 0;
  }
  Function_2247694();
  return 0;
}

//----- (02246F0C) --------------------------------------------------------
int __fastcall Function_2246f0c(int a1, int a2)
{
  int result;

  Function_20219f8(*(uint *)(a2 + 24));
  Function_200a858();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (02246F30) --------------------------------------------------------
uint *__fastcall Function_2246f30(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  uint *v9;
  uint *v10;
  char v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a2;
  v6 = (uint *)malloc(0x39u, 256);
  *v4 = 0;
  if ( v6 )
  {
    v7 = Function_2006f88(93, 6, &v12, 57);
    if ( v7 )
    {
      MIi_CpuClear16(0, (int)v6, 96);
      free(v7);
    }
    v8 = 0;
    v6[59] = 0;
    v6[58] = 0;
    v6[60] = 0;
    v6[61] = 0;
    v6[57] = v4;
    v6[62] = 0;
    v6[63] = v5;
    v9 = v6;
    do
    {
      v10 = v9 + 49;
      ++v8;
      ++v9;
      *v10 = 0;
    }
    while ( v8 < 8 );
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 12, 16, 8);
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 4, 12, 16, 8);
    v6[48] = AddTaskToTaskList3((int)Function_2247060, (int)v6, 0x14u);
    if ( v6[48] )
      *(uint *)v6[57] = 1;
  }
  return v6;
}

//----- (02247004) --------------------------------------------------------
int __fastcall Function_2247004(int result)
{
  if ( **(uint **)(result + 228) == 1 )
  {
    result += 232;
    *(uint *)result = 1;
  }
  return result;
}

//----- (02247018) --------------------------------------------------------
uint __fastcall Function_2247018(int a1)
{
  int v1;
  uint result;
  int v3;
  int v4;

  v1 = a1;
  result = **(uint **)(a1 + 228);
  if ( result == 1 )
  {
    v3 = 0;
    v4 = v1;
    do
    {
      if ( *(uint *)(v4 + 196) )
        Function_2247224(v1, v3);
      ++v3;
      v4 += 4;
    }
    while ( v3 < 8 );
    **(uint **)(v1 + 228) = 0;
    Call_RemoveTaskFromTaskList(*(int **)(v1 + 192));
    result = free(v1);
  }
  return result;
}

//----- (02247060) --------------------------------------------------------
int __fastcall Function_2247060(int *a1, uint *a2)
{
  int v2;
  int *v3;
  int result;

  v2 = (int)a2;
  v3 = a1;
  if ( a2[58] )
  {
    if ( a2[59] )
    {
      GX_BeginLoadBGExtPltt();
      GXS_BeginLoadBGExtPltt();
      DC_FlushRange(v2, 96);
      GX_LoadBGExtPltt(v2, 24576, 96);
      GXS_LoadBGExtPltt(v2, 24576, 96);
      GX_EndLoadBGExtPltt();
      GXS_EndLoadBGExtPltt();
      *(uint *)(v2 + 236) = 0;
    }
    result = *(uint *)(v2 + 244);
    if ( !result )
    {
      **(uint **)(v2 + 228) = 0;
      free(v2);
      result = Call_RemoveTaskFromTaskList(v3);
    }
  }
  else
  {
    if ( --a2[60] <= 0 )
    {
      Function_2005748(0x6AEu);
      *(uint *)(v2 + 240) = 30;
      Function_2247170(v2);
    }
    result = *(uint *)(v2 + 236);
    if ( result )
    {
      GX_BeginLoadBGExtPltt();
      GXS_BeginLoadBGExtPltt();
      DC_FlushRange(v2, 96);
      GX_LoadBGExtPltt(v2, 24576, 96);
      GXS_LoadBGExtPltt(v2, 24576, 96);
      GX_EndLoadBGExtPltt();
      GXS_EndLoadBGExtPltt();
      result = 0;
      *(uint *)(v2 + 236) = 0;
    }
  }
  return result;
}

//----- (02247148) --------------------------------------------------------
uint *__fastcall Function_2247148(int a1, int a2, int a3, short a4)
{
  uint *result;

  if ( a2 >= 0 && a2 < 96 )
    *(ushort *)(a1 + 2 * a2) = 0;
  if ( a3 >= 0 && a3 < 96 )
    *(ushort *)(a1 + 2 * a3) = a4;
  result = (uint *)(a1 + 236);
  *result = 1;
  return result;
}

//----- (02247170) --------------------------------------------------------
uint *__fastcall Function_2247170(uint *a1)
{
  uint *v1;
  uint *result;
  uint *v3;
  int v4;

  v1 = a1;
  result = (uint *)a1[a1[62] + 49];
  if ( !result )
  {
    result = (uint *)malloc(0x39u, 24);
    v3 = result;
    if ( result )
    {
      *result = v1;
      if ( v1[63] == 1 )
        v4 = -1;
      else
        v4 = 15;
      v3[1] = v4;
      v3[3] = 0;
      v3[2] = 2;
      v3[4] = v1[62];
      v3[5] = v1[63];
      v1[v1[62] + 49] = AddTaskToTaskList1((int)Function_2247254, (int)v3, 0xAu);
      if ( v1[v1[62] + 49] )
      {
        ++v1[61];
        result = (uint *)++v1[62];
        if ( (int)result >= 8 )
        {
          result = 0;
          v1[62] = 0;
        }
      }
      else
      {
        result = (uint *)free((int)v3);
      }
    }
  }
  return result;
}

//----- (02247224) --------------------------------------------------------
int __fastcall Function_2247224(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = a1;
  v3 = 4 * a2;
  v4 = a1 + 196;
  result = *(uint *)(a1 + 196 + 4 * a2);
  if ( result )
  {
    v6 = Function_201ced0(result);
    free(v6);
    Call_RemoveTaskFromTaskList(*(int **)(v4 + v3));
    *(uint *)(v4 + v3) = 0;
    result = *(uint *)(v2 + 244) - 1;
    *(uint *)(v2 + 244) = result;
  }
  return result;
}

//----- (02247254) --------------------------------------------------------
int __fastcall Function_2247254(int a1, int *a2)
{
  int *v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = a2[3] + 1;
  v2[3] = v3;
  result = v2[2];
  if ( v3 >= result )
  {
    v2[3] = 0;
    if ( v2[5] == 1 )
    {
      v5 = v2[1];
      v6 = *v2;
      v7 = v5 + 1;
      if ( v5 + 1 < 15 )
      {
        Function_2247148(v6, v5, v7, 0x7FFF);
        result = v2[1] + 1;
        v2[1] = result;
      }
      else
      {
        Function_2247148(v6, v5, v7, 0);
        result = Function_2247224(*v2, v2[4]);
      }
    }
    else
    {
      v8 = v2[1];
      v9 = *v2;
      if ( v8 >= 0 )
      {
        Function_2247148(v9, v8 + 1, v8, 0x7FFF);
        result = v2[1] - 1;
        v2[1] = result;
      }
      else
      {
        Function_2247148(v9, v2[1], v8 + 1, 0);
        result = Function_2247224(*v2, v2[4]);
      }
    }
  }
  return result;
}

//----- (022472C4) --------------------------------------------------------
uint *__fastcall Function_22472c4(int a1, int a2, int a3, int a4, int a5, int a6, uint *a7)
{
  int v7;
  int v8;
  int v9;
  bool v10;
  uint *v11;
  int v12;
  uint *v13;
  int v15;
  int v16;

  v15 = a1;
  v7 = a2;
  v8 = a3;
  v16 = a4;
  v9 = malloc(0x39u, 36);
  v11 = (uint *)v9;
  v10 = v9 == 0;
  v12 = 1;
  *a7 = 1;
  if ( !v10 )
  {
    *v11 = v15;
    v11[2] = v7;
    v11[3] = v8;
    v11[4] = v16;
    v11[5] = a5;
    if ( v7 < v8 )
      v12 = 0;
    v11[6] = v12;
    v11[7] = a6;
    v11[1] = a7;
    *a7 = 0;
    v13 = AddTaskToTaskList2((int)Function_224732c, (int)v11, 0);
    v11[8] = v13;
    if ( !v13 )
    {
      *a7 = 1;
      free((int)v11);
    }
  }
  return v11;
}

//----- (0224732C) --------------------------------------------------------
int __fastcall Function_224732c(int *a1, uint *a2)
{
  uint *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = a2[2];
  v5 = (a2[4] * v4 >> 12) / 32;
  v6 = a2[6];
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v9 = v2[3];
      v10 = v4 - v5;
      if ( v10 <= v9 )
      {
        v2[2] = v9;
        *(uint *)v2[1] = 1;
      }
      else
      {
        v2[2] = v10;
      }
    }
  }
  else
  {
    v7 = v2[3];
    v8 = v4 + v5;
    if ( v8 >= v7 )
    {
      v2[2] = v7;
      *(uint *)v2[1] = 1;
    }
    else
    {
      v2[2] = v8;
    }
  }
  Function_22473a0(v2);
  if ( *(uint *)v2[1] )
  {
    Function_22476c8(v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  else
  {
    result = v2[4] + v2[5];
    v2[4] = result;
  }
  return result;
}

//----- (022473A0) --------------------------------------------------------
void __fastcall Function_22473a0(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a1[2];
  v6 = 0;
  v7 = 0;
  v8 = a1[2];
  Function_2019348(*a1, 2u, &v5, 128, dword_224BE74[a1[7]]);
  Function_2019348(*v4, 6u, &v5, 128, dword_224BE74[v4[7]]);
}

//----- (022473E8) --------------------------------------------------------
int __fastcall Function_22473e8(int a1, int a2, uint a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int *v8;
  ushort **v9;
  ushort *v10;
  int v11;
  uint v12;
  uint v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char v22;
  ushort v23;
  ushort v24;

  v5 = a1;
  v6 = a2;
  v14 = a3;
  v15 = a4;
  if ( a5 )
    v7 = 6400;
  else
    v7 = 3200;
  v8 = (int *)malloc2(0x39u, v7);
  if ( v8 )
  {
    v18 = 0;
    v19 = 0;
    v20 = 10;
    v21 = 10;
    v9 = *(ushort ***)v5;
    if ( v6 )
      v10 = v9[1];
    else
      v10 = *v9;
    v17 = InitEncryptPkmnData_Part1((int)v10);
    Function_2075f0c((int)&v22, (int)v10, 2u, 0);
    v16 = GetBoxPkmnData((int)v10, 0, 0);
    v11 = (ushort)GetBoxPkmnData((int)v10, 5u, 0);
    if ( a5 )
      v20 *= 2;
    Function_2013720(*(ushort *)&v22, v23, 0x39u, &v18, (int)v8, v16, a5, 2, v11);
    DC_FlushRange((int)v8, v7);
    Function_201958c(*(uint **)(v5 + 8), (uchar)v14, v8, v7, 0);
    InitEncryptPkmnData_Part1Again(v10, v17);
    free((int)v8);
  }
  if ( v14 < 4 )
    v12 = 0;
  else
    v12 = 4;
  return Call_LoadFromNARC_RLCN(*(ushort *)&v22, v24, v12, 32 * v15, 32, 57);
}

//----- (022474D4) --------------------------------------------------------
uint __fastcall Function_22474d4(int a1, int a2, uchar a3, int a4, uchar a5, uchar a6)
{
  int v6;
  uchar v7;
  uchar v8;
  int v9;
  uint result;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v6 = a1;
  v7 = a3;
  v8 = a4;
  if ( a2 )
  {
    if ( *(uint *)(a1 + 328) )
      v9 = 263;
    else
      v9 = 262;
  }
  else
  {
    v9 = 262;
  }
  result = Function_2006f6c(7, v9, 0, &v12, 57);
  v11 = result;
  if ( result )
  {
    Function_20198e8(*(uint *)(v6 + 8), v7, a5, a6, 0xAu, 0xAu, v12 + 12, 0, 0, 0x20u, 0x20u);
    Function_2019e2c(*(uint *)(v6 + 8), v7, a5, a6, 0xAu, 0xAu, v8);
    result = free(v11);
  }
  return result;
}

//----- (02247568) --------------------------------------------------------
int __fastcall Function_2247568(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a4;
  *a1 = Function_2006fa0(a2, a3, 1, a1 + 2, 58);
  result = Function_2006fbc(v5, v6, 1, v4 + 3, 58);
  v4[1] = result;
  return result;
}

//----- (022475A0) --------------------------------------------------------
int __fastcall Function_22475a0(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *a1;
  if ( v2 )
  {
    free(v2);
    *v1 = 0;
  }
  result = v1[1];
  if ( result )
  {
    free(result);
    result = 0;
    v1[1] = 0;
  }
  return result;
}

//----- (022475C4) --------------------------------------------------------
int __fastcall Function_22475c4(int result, int a2, int a3, int a4, char a5)
{
  *(uint *)result = a3;
  *(uint *)(result + 8) = a4;
  *(uint *)(result + 12) = *(uint *)(a2 + 8);
  *(uint *)(result + 16) = *(uint *)(a2 + 12);
  *(uchar *)(result + 32) = a5;
  *(uint *)(result + 4) = 0;
  *(uint *)(result + 20) = 0;
  *(uint *)(result + 24) = 0;
  *(uint *)(result + 28) = 0;
  return result;
}

//----- (022475E4) --------------------------------------------------------
uint __fastcall Function_22475e4(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  uint v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v9 = *(uint *)(a1 + 24);
  v11 = a3 << 12;
  v12 = a4 << 12;
  v13 = 0;
  v10 = a2;
  v14 = a5;
  v15 = a6;
  v16 = 57;
  v6 = Function_2021b90(&v9);
  v7 = v6;
  if ( v6 )
  {
    Function_2021cc8(v6, 1);
    Function_2021ce4(v7, 4096);
  }
  return v7;
}

//----- (02247628) --------------------------------------------------------
int __fastcall Function_2247628(int a1)
{
  return *(uint *)(a1 + 8);
}

//----- (0224762C) --------------------------------------------------------
int __fastcall Function_224762c(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (02247630) --------------------------------------------------------
int __fastcall Function_2247630(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (02247634) --------------------------------------------------------
int __fastcall Function_2247634(int a1)
{
  return **(uint **)a1;
}

//----- (0224763C) --------------------------------------------------------
int __fastcall Function_224763c(int a1)
{
  return *(uint *)(*(uint *)a1 + 4);
}

//----- (02247644) --------------------------------------------------------
int __fastcall Function_2247644(int a1)
{
  return *(uint *)(*(uint *)a1 + 12);
}

//----- (0224764C) --------------------------------------------------------
int __fastcall Function_224764c(int a1)
{
  return *(ushort *)(a1 + 332);
}

//----- (02247654) --------------------------------------------------------
int __fastcall Function_2247654(int a1)
{
  return *(ushort *)(a1 + 334);
}

//----- (02247660) --------------------------------------------------------
int __fastcall Function_2247660(int a1)
{
  return *(ushort *)(a1 + 336);
}

//----- (02247668) --------------------------------------------------------
int __fastcall Function_2247668(int a1)
{
  return *(ushort *)(a1 + 338);
}

//----- (02247674) --------------------------------------------------------
uint __fastcall Function_2247674(int a1)
{
  return Function_2027b50(*(ushort **)(*(uint *)a1 + 20));
}

//----- (02247680) --------------------------------------------------------
int __fastcall Function_2247680(int a1)
{
  return *(uint *)(*(uint *)a1 + 16);
}

//----- (02247688) --------------------------------------------------------
int *Function_2247688()
{
  int *result;

  result = dword_224C2E0;
  dword_224C2E0[0] = 0;
  return result;
}

//----- (02247694) --------------------------------------------------------
int *Function_2247694()
{
  int *result;
  int v1;
  int *v2;

  result = (int *)dword_224C2E0[0];
  if ( dword_224C2E0[0] )
  {
    v1 = 0;
    if ( dword_224C2E0[0] > 0 )
    {
      v2 = &dword_224C2E0[1];
      do
      {
        free(*v2);
        ++v1;
        ++v2;
      }
      while ( v1 < dword_224C2E0[0] );
    }
    result = dword_224C2E0;
    dword_224C2E0[0] = 0;
  }
  return result;
}

//----- (022476C8) --------------------------------------------------------
int *__fastcall Function_22476c8(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  if ( dword_224C2E0[0] >= 32 )
    ErrorHandler();
  ++dword_224C2E0[0];
  result = &dword_224C2E0[1];
  dword_224C2E0[dword_224C2E0[0] + 1] = v1;
  return result;
}

//----- (022476F0) --------------------------------------------------------
int __fastcall Function_22476f0(uint a1)
{
  uint v1;
  int v2;
  uint v3;
  int v4;

  v1 = a1;
  v2 = malloc(0x3Au, 32);
  if ( v2 )
  {
    Function_2247af0();
    *(uint *)(v2 + 24) = malloc(0x3Au, 140 * v1);
    v3 = 0;
    *(uint *)(v2 + 28) = v1;
    if ( v1 )
    {
      v4 = 0;
      do
      {
        Function_2247868(*(uint *)(v2 + 24) + v4);
        ++v3;
        v4 += 140;
      }
      while ( v3 < v1 );
    }
  }
  return v2;
}

//----- (0224773C) --------------------------------------------------------
uint __fastcall Function_224773c(int a1)
{
  int v1;
  uint v2;
  int v3;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 28) )
  {
    v3 = 0;
    do
    {
      Function_224789c(*(uint *)(v1 + 24) + v3);
      ++v2;
      v3 += 140;
    }
    while ( v2 < *(uint *)(v1 + 28) );
  }
  free(*(uint *)(v1 + 24));
  Function_2247b5c(v1);
  return free(v1);
}

//----- (02247770) --------------------------------------------------------
int *__fastcall Function_2247770(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  Function_20b275c(17, 0, 0);
  Function_20203ec();
  v5 = 0;
  if ( *(uint *)(v4 + 28) )
  {
    v6 = 0;
    do
    {
      if ( *(uint *)(*(uint *)(v4 + 24) + v6 + 100) )
        Function_22477b8();
      ++v5;
      v6 += 140;
    }
    while ( v5 < *(uint *)(v4 + 28) );
  }
  v8 = 1;
  return Function_20b275c(18, (int)&v8, 1);
}

//----- (022477B8) --------------------------------------------------------
int *__fastcall Function_22477b8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6[9];
  char v7;

  v1 = a1;
  MTX_Identity33_(&v7);
  MTX_RotX33_(
    v6,
    SLOWORD(Unknown_20f983c[(int)*(ushort *)(v1 + 128) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((int)*(ushort *)(v1 + 128) >> 4) + 1));
  MTX_Concat33(v6, (int *)&v7, (int *)&v7, v2);
  MTX_RotY33_(
    v6,
    SLOWORD(Unknown_20f983c[(int)*(ushort *)(v1 + 130) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((int)*(ushort *)(v1 + 130) >> 4) + 1));
  MTX_Concat33(v6, (int *)&v7, (int *)&v7, v3);
  MTX_RotZ33_(
    v6,
    SLOWORD(Unknown_20f983c[(int)*(ushort *)(v1 + 132) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((int)*(ushort *)(v1 + 132) >> 4) + 1));
  MTX_Concat33(v6, (int *)&v7, (int *)&v7, v4);
  if ( *(uint *)(v1 + 136) != 31 )
    Function_20af5b4(0, 0, 0, 0, *(uint *)(v1 + 136), 0);
  return Function_201ca74((uint *)(v1 + 4), (int *)(v1 + 104), (int *)&v7, (int *)(v1 + 116));
}

//----- (02247868) --------------------------------------------------------
int __fastcall Function_2247868(int result)
{
  *(uint *)(result + 100) = 0;
  *(uint *)result = 0;
  *(ushort *)(result + 132) = 0;
  *(ushort *)(result + 130) = *(ushort *)(result + 132);
  *(ushort *)(result + 128) = *(ushort *)(result + 130);
  *(uint *)(result + 124) = 4096;
  *(uint *)(result + 120) = 4096;
  *(uint *)(result + 116) = 4096;
  *(uint *)(result + 112) = 0;
  *(uint *)(result + 108) = 0;
  *(uint *)(result + 104) = 0;
  return result;
}

//----- (0224789C) --------------------------------------------------------
int __fastcall Function_224789c(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  result = *a1;
  if ( result )
  {
    free(result);
    result = 0;
    *v1 = 0;
    v1[25] = 0;
  }
  return result;
}

//----- (022478B4) --------------------------------------------------------
int __fastcall Function_22478b4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint *v18;
  int v19;
  int v20;

  v8 = *(uint *)(a1 + 24);
  v9 = 140 * a2;
  v10 = a3;
  v11 = a4;
  v12 = (int *)(v8 + 140 * a2);
  *(uint *)(v8 + v9) = Function_2006fe8_LoadFromNARC_UncompressLZ8(a3, a4, 0, 58, 1);
  v15 = LoadFromNARC_7(v10, v11, v13, v14);
  DC_FlushRange(*(uint *)(v8 + v9), v15);
  v16 = *(uint *)(v8 + v9);
  if ( v16 )
  {
    v17 = Function_20b3c0c_GetAdrOfDataPart(v16);
    v12[22] = v17;
    if ( v17
      && (v17 == -8 || !*(uchar *)(v17 + 9) ? (v18 = 0) : (v18 = (uint *)(v17 + 8 + *(ushort *)(v17 + 14) + 4)),
          v18) )
    {
      v19 = v17 + *v18;
    }
    else
    {
      v19 = 0;
    }
    v12[23] = v19;
    v20 = Function_20b3c1c_GetTexOffsets(*v12);
    v12[24] = v20;
    Function_201cbcc(v20);
    Function_201cbb0(*v12, v12[24]);
    Function_20ae608(v12 + 1, v12[23]);
    v12[26] = a5;
    v12[27] = a6;
    v12[28] = a7;
    v12[34] = 31;
    v12[25] = a8;
  }
  return v8 + v9;
}

//----- (02247958) --------------------------------------------------------
int __fastcall Function_2247958(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int result;

  v2 = a2;
  v4 = a1[27];
  v3 = a1 + 28;
  *v2 = a1[26];
  v2[1] = v4;
  result = a1[28];
  v2[2] = *v3;
  return result;
}

//----- (02247968) --------------------------------------------------------
int __fastcall Function_2247968(uint *a1, int *a2)
{
  int *v2;
  uint *v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = a2[1];
  v2 += 2;
  v3 += 26;
  *v3 = v4;
  v3[1] = v5;
  result = *v2;
  v3[2] = *v2;
  return result;
}

//----- (02247978) --------------------------------------------------------
int __fastcall Function_2247978(ushort *a1, ushort *a2)
{
  int result;

  *a2 = a1[64];
  a2[1] = a1[65];
  result = (ushort)a1[66];
  a2[2] = result;
  return result;
}

//----- (02247990) --------------------------------------------------------
ushort *__fastcall Function_2247990(ushort *a1, ushort *a2)
{
  ushort *v2;
  ushort *result;

  a1[64] = *a2;
  v2 = a1 + 65;
  result = a1 + 66;
  *v2 = a2[1];
  *result = a2[2];
  return result;
}

//----- (022479A8) --------------------------------------------------------
int __fastcall Function_22479a8(int result, int a2)
{
  *(uint *)(result + 100) = a2;
  return result;
}

//----- (022479AC) --------------------------------------------------------
int __fastcall Function_22479ac(int a1, int a2)
{
  int v2;
  int result;

  *(uint *)(a1 + 136) = a2;
  v2 = *(uint *)(a1 + 92);
  if ( a2 == 31 )
    result = Function_20b2d8c(v2, 1, 2031616);
  else
    result = Function_20b2d8c(v2, 0, 2031616);
  return result;
}

//----- (022479D4) --------------------------------------------------------
uint *__fastcall Function_22479d4(uint *result, int a2)
{
  result[29] = a2;
  result[30] = a2;
  result[31] = a2;
  return result;
}

//----- (022479DC) --------------------------------------------------------
int __fastcall Function_22479dc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11[9];
  int v12[9];
  int v13;

  v13 = a4;
  v4 = a1;
  MTX_Identity33_(v12);
  MTX_RotX33_(
    v11,
    SLOWORD(Unknown_20f983c[(int)*(ushort *)(v4 + 128) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((int)*(ushort *)(v4 + 128) >> 4) + 1));
  MTX_Concat33(v11, v12, v12, v5);
  MTX_RotY33_(
    v11,
    SLOWORD(Unknown_20f983c[(int)*(ushort *)(v4 + 130) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((int)*(ushort *)(v4 + 130) >> 4) + 1));
  MTX_Concat33(v11, v12, v12, v6);
  MTX_RotZ33_(
    v11,
    SLOWORD(Unknown_20f983c[(int)*(ushort *)(v4 + 132) >> 4]),
    *((short *)Unknown_20f983c + 2 * ((int)*(ushort *)(v4 + 132) >> 4) + 1));
  MTX_Concat33(v11, v12, v12, v7);
  Function_20b275c(17, 0, 0);
  Function_20203ec();
  v8 = Function_201ced8(*(uint *)(v4 + 92), (int *)(v4 + 104), v12, (int *)(v4 + 116));
  v10 = 1;
  Function_20b275c(18, (int)&v10, 1);
  return v8;
}

//----- (02247A90) --------------------------------------------------------
int __fastcall Function_2247a90(int *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int result;
  char v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a2;
  Function_2020abc(&v7, *a1);
  v5 = v8;
  *v4 = *(uint *)&v7;
  v4[1] = v5;
  result = v9;
  v4[2] = v9;
  return result;
}

//----- (02247AB0) --------------------------------------------------------
int __fastcall Function_2247ab0(ushort **a1, ushort *a2)
{
  return Function_20209d4(a2, *a1);
}

//----- (02247AC0) --------------------------------------------------------
int __fastcall Function_2247ac0(ushort **a1, ushort *a2)
{
  return Function_20209f8(a2, *a1);
}

//----- (02247AD0) --------------------------------------------------------
int *__fastcall Function_2247ad0(int **a1, int a2)
{
  return Function_2020854(a2, *a1);
}

//----- (02247AE0) --------------------------------------------------------
int *__fastcall Function_2247ae0(int *a1, short a2)
{
  return Function_2020910(a2, *a1);
}

//----- (02247AF0) --------------------------------------------------------
int *__fastcall Function_2247af0(int *a1, uint *a2, uint *a3, int a4)
{
  int *v4;
  uint *v5;
  uint *v6;
  uint *v7;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = (uint *)a4;
  *a1 = Function_20203ac(0x3Au);
  v4[1] = (int)v5;
  v4[2] = (int)v6;
  v4[3] = (int)v7;
  *((ushort *)v4 + 8) = 0;
  *((ushort *)v4 + 9) = 0;
  *((ushort *)v4 + 10) = 0;
  Function_20206d0(v4 + 1, 1228800, (ushort *)v4 + 8, 4004, 0, 1, *v4);
  v10 = 4096;
  v9 = 0;
  v11 = 0;
  Function_2020680(&v9, (uint *)*v4);
  Function_20203d4(*v4);
  return Function_20206bc(0, 4096000, *v4);
}

//----- (02247B5C) --------------------------------------------------------
uint __fastcall Function_2247b5c(int *a1)
{
  int *v1;

  v1 = a1;
  Function_20203e0();
  return Call_free5(*v1);
}

//----- (02247B6C) --------------------------------------------------------
int *__fastcall Function_2247b6c(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = (int *)malloc(0x3Au, 132);
  v3 = v2;
  if ( v2 )
  {
    *v2 = v1;
    v2[1] = 0;
    v2[21] = Function_2247628(v1);
    v3[3] = Function_200762c(0x3Au, v4, v5, v6);
    v3[4] = 0;
    v3[26] = Function_2023790(300, 0x3Au);
    v3[27] = Function_2023790(300, 0x3Au);
    v3[30] = 0;
    v3[31] = 0;
    v3[32] = (int)LoadFromNARC_8(147, 0x3Au, v7, v8);
  }
  return v3;
}

//----- (02247BC8) --------------------------------------------------------
uint __fastcall Function_2247bc8(uint result)
{
  int v1;
  int v2;
  int v3;
  uint *v4;

  v1 = result;
  if ( result )
  {
    Function_22483c4();
    Function_2248490(v1);
    Function_2248340(v1);
    Function_20237bc_FreeMsg(*(uint *)(v1 + 104), v2);
    Function_20237bc_FreeMsg(*(uint *)(v1 + 108), v3);
    Function_224773c(*(uint *)(v1 + 112));
    Function_2019044(*(uint *)(v1 + 84), 1);
    Function_2019044(*(uint *)(v1 + 84), 2);
    Function_2019044(*(uint *)(v1 + 84), 6);
    Function_201a8fc(v1 + 88);
    Call_FS_CloseFile(*(int **)(v1 + 128));
    v4 = *(uint **)(v1 + 16);
    if ( v4 )
      Function_2007dc8(v4);
    Function_2007b6c(*(uint *)(v1 + 12));
    result = free(v1);
  }
  return result;
}

//----- (02247C34) --------------------------------------------------------
int __fastcall Function_2247c34(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( *a2 >= 4u )
    return 1;
  if ( ((int (*)(void))*(&off_224BF04 + *a2))() )
  {
    ++*v2;
    *(uint *)(v3 + 4) = 0;
  }
  Function_2247c6c(v3);
  return 0;
}

//----- (02247C6C) --------------------------------------------------------
int __fastcall Function_2247c6c(int a1, int a2, int a3, int a4)
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
  int v13;
  int v14;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  G3X_Reset();
  v5 = Function_20b275c(17, 0, 0);
  v8 = Function_20b2628((int)v5, v6, v7);
  Function_20a73c0(v8, v9, v10, v11);
  Function_2008a94(*(uint *)(v4 + 12));
  Function_2007768(*(uint *)(v4 + 12));
  v16 = 1;
  Function_20b275c(18, (int)&v16, 1);
  Function_2247770(*(uint *)(v4 + 112), v12, v13, v14);
  return Function_20241bc(0, 0);
}

//----- (02247CB4) --------------------------------------------------------
int __fastcall Function_2247cb4(int a1, int a2, int a3, int a4)
{
  int v4;
  uchar v5;
  short v7;
  short v8;
  short v9;
  int v10;

  v10 = a4;
  v4 = a1;
  GX_SetBanks(dword_224BF5C);
  REG_POWERCNT &= 0x7FFFu;
  SetGraphicsModes(dword_224BF14);
  Function_20183c4(*(uint **)(v4 + 84), 1u, dword_224BF24, 0);
  Function_20183c4(*(uint **)(v4 + 84), 2u, dword_224BF40, 0);
  Function_20183c4(*(uint **)(v4 + 84), 6u, dword_224BF40, 0);
  Function_201ff0c(1u, 1);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  Function_20196c0(*(uint **)(v4 + 84), 1, 0, 1, 0);
  Function_2019cb8(*(uint *)(v4 + 84), 1, 0, 0, 0, 0x20u, 0x20u, 0);
  v5 = Function_2247674(*(uint *)v4);
  Function_200dd0c(*(uint **)(v4 + 84), 1u, 109, 2, v5, 58);
  Function_201a7e8(*(uint **)(v4 + 84), v4 + 88, 1, 2, 19, 0x1Bu, 4u, 1, 1);
  Function_201ada4_ClearTextBox(v4 + 88, 15);
  Call_LoadFromNARC_RLCN(14, 7, 0, 32, 32, 58);
  LoadFromNARC_RGCN(93, 22, *(uint **)(v4 + 84), 2u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 21, *(uint **)(v4 + 84), 2u, 0, 0, 1, 58);
  Call_LoadFromNARC_RLCN(93, 23, 0, 0, 32, 58);
  LoadFromNARC_RGCN(93, 22, *(uint **)(v4 + 84), 6u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 21, *(uint **)(v4 + 84), 6u, 0, 0, 1, 58);
  Call_LoadFromNARC_RLCN(93, 23, 4u, 0, 32, 58);
  Function_2019448(*(uint **)(v4 + 84), 1u);
  Function_2248174(v4);
  *(uint *)(v4 + 112) = Function_22476f0(1u);
  *(uint *)(v4 + 16) = Function_2248240(v4);
  *(uint *)(v4 + 116) = Function_22478b4(*(uint *)(v4 + 112), 0, 93, 27, 0, 108544, 473088, 0);
  v7 = 0;
  v8 = -4096;
  v9 = 0;
  Function_2247990(*(ushort **)(v4 + 116), &v7);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  Function_224829c(v4);
  REG_BLDCNT = 0;
  Function_2039734();
  Function_20397c8(1, 0x39u);
  Function_200f174(0, 1, 1, 0, 16, 1, 58);
  return 1;
}

//----- (02247ED8) --------------------------------------------------------
int __fastcall Function_2247ed8(int a1, uint *a2)
{
  int v2;

  v2 = a1;
  if ( *a2 || !Function_200f2ac() )
    return 0;
  Function_2021d6c(*(uint *)(v2 + 60), 1u);
  Function_2021cac(*(uint *)(v2 + 60), 1);
  return 1;
}

//----- (02247F04) --------------------------------------------------------
int __fastcall Function_2247f04(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  uint *v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  ushort **v11;
  uint *v12;
  int v13;
  int v14;
  int v15;
  uchar v16;
  int v17;
  int v18;
  int v19;
  int result;
  ushort **v21;
  uchar v22;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*a2 )
  {
    case 0u:
      *(uint *)(a1 + 8) = 0;
      ++*a2;
      goto LABEL_16;
    case 1u:
      v4 = *(uint *)(a1 + 8) + 1;
      *(uint *)(v3 + 8) = v4;
      if ( v4 > 10 )
      {
        v21 = (ushort **)Function_2247630(*(uint *)v3);
        v5 = (uint *)Function_224762c(*(uint *)v3);
        if ( Function_2247680(*(uint *)v3) == 1 )
        {
          v6 = 0;
          v7 = 2;
        }
        else
        {
          v6 = 4;
          v7 = 3;
        }
        Function_200b1b8_CallMsgDecrypt(v21, v6, *(ushort **)(v3 + 104));
        Function_200c388(v5, *(uint *)(v3 + 108), *(uint *)(v3 + 104));
        v8 = *(uint *)(v3 + 108);
        Function_201d738_CallInitTextInterpreter(v3 + 88, 1);
        Function_200e010(v3 + 88, 109, 2u);
        Function_201a954(v3 + 88, v9);
        *(uint *)(v3 + 8) = 0;
        *v2 = v7;
      }
      goto LABEL_16;
    case 2u:
      v10 = *(uint *)(a1 + 8) + 1;
      *(uint *)(v3 + 8) = v10;
      if ( v10 > 60 )
      {
        v11 = (ushort **)Function_2247630(*(uint *)v3);
        v12 = (uint *)Function_224762c(*(uint *)v3);
        Function_200b1b8_CallMsgDecrypt(v11, 1u, *(ushort **)(v3 + 104));
        Function_200c388(v12, *(uint *)(v3 + 108), *(uint *)(v3 + 104));
        v13 = Function_2247634(*(uint *)v3);
        if ( !GetBoxPkmnData(v13, 0x4Cu, 0) )
        {
          Function_2007b98(*(uint *)(v3 + 16));
          v14 = Function_224764c(*(uint *)v3);
          Function_2078a4c(*(uint *)(v3 + 128), &v22, v14, 1);
          v15 = Function_224764c(*(uint *)v3);
          v16 = Function_2247654(*(uint *)v3);
          Function_200590c(v15, v22, v16);
        }
        Function_201ada4_ClearTextBox(v3 + 88, 15);
        v17 = *(uint *)(v3 + 108);
        Function_201d738_CallInitTextInterpreter(v3 + 88, 1);
        Function_201accc(v3 + 88);
        *(uint *)(v3 + 8) = 0;
        ++*v2;
      }
      goto LABEL_16;
    case 3u:
      v18 = *(uint *)(a1 + 8) + 1;
      *(uint *)(v3 + 8) = v18;
      if ( v18 > 60 )
      {
        Function_200e084(v3 + 88, 0);
        *(uint *)(v3 + 8) = 0;
        ++*v2;
      }
      goto LABEL_16;
    case 4u:
      v19 = *(uint *)(a1 + 8) + 1;
      *(uint *)(v3 + 8) = v19;
      if ( v19 <= 20 )
        goto LABEL_16;
      result = 1;
      break;
    default:
LABEL_16:
      result = 0;
      break;
  }
  return result;
}

//----- (02248090) --------------------------------------------------------
int __fastcall Function_2248090(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_2005748(0x6A8u);
      Function_2248364(v3);
      ++*v2;
      goto LABEL_13;
    case 1u:
      if ( Function_22483b4() )
      {
        Function_2007dc8(*(uint **)(v3 + 16));
        Function_2021d6c(*(uint *)(v3 + 64), 0);
        Function_2021cac(*(uint *)(v3 + 64), 1);
        ++*v2;
      }
      goto LABEL_13;
    case 2u:
      if ( !Function_2021fd0(*(uint *)(a1 + 64)) )
      {
        Function_22479a8(*(uint *)(v3 + 116), 1);
        Function_2248364(v3);
        Function_2248420(v3);
        ++*v2;
      }
      goto LABEL_13;
    case 3u:
      if ( Function_224847c() >= 2 || Function_224846c(v3) == 1 )
      {
        Function_200f174(0, 0, 0, 0, 24, 1, 58);
        ++*v2;
      }
      goto LABEL_13;
    case 4u:
      if ( !Function_200f2ac() || !Function_224846c(v3) )
        goto LABEL_13;
      result = 1;
      break;
    default:
LABEL_13:
      result = 0;
      break;
  }
  return result;
}

//----- (02248174) --------------------------------------------------------
int __fastcall Function_2248174(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_20b28cc();
  G3X_InitMtxStack();
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  G3X_SetClearColor(0, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  GFX_VIEWPORT = -1073807360;
  Function_20a5a94(1u, 1);
  Function_20a5d88(0x4000, 1);
  v2 = Function_20a5a2c();
  v3 = Function_20a5a3c();
  Function_2008a78(*(uint *)(v1 + 12), 8 * v2 & 0x7FFFF, 16 * ((v2 & 0x7FFF0000u) >> 16));
  return Function_2008a84(*(uint *)(v1 + 12), 8 * v3 & 0x7FFFF, 8 * ((v3 & 0xFFFF0000) >> 16));
}

//----- (02248240) --------------------------------------------------------
int __fastcall Function_2248240(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  short v7;
  char v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = Function_2247634(*a1);
  Function_2075f0c((int)&v9, v5, 2u, 0);
  v6 = Function_224764c(*v4);
  Function_20789bc(v4[32], (uint)(v4 + 5), v6, 1);
  v7 = Function_20765c4(v5, 2u, 0);
  return Function_2007c34((uint *)v4[3], &v9, 128, v7 + 80, 0, 0, (int)(v4 + 5), 0);
}

//----- (0224829C) --------------------------------------------------------
uint __fastcall Function_224829c(int a1)
{
  int v1;
  int v2;
  char v4;
  char v5;
  char v6;

  v1 = a1;
  Function_2247568((int *)(a1 + 68), 93, 7, 8);
  NNS_G2dInitImagePaletteProxy((int)&v6);
  NNS_G2dInitImageProxy((int)&v5);
  Function_2006f00(93, 9, 1, 0, 0, 1, 0, 58, (int)&v5);
  Function_2006ee0(93, 10, 1, 0, 58, (int)&v6);
  Function_22475c4((int)&v4, v1 + 68, (int)&v5, (int)&v6, 2);
  *(uint *)(v1 + 60) = Function_22475e4(*(uint *)v1, (int)&v4, 128, 100, 0, 1);
  v2 = Function_22475e4(*(uint *)v1, (int)&v4, 128, 90, 0, 1);
  *(uint *)(v1 + 64) = v2;
  Function_2021e80(v2, 1);
  Function_2021cac(*(uint *)(v1 + 60), 0);
  return Function_2021cac(*(uint *)(v1 + 64), 0);
}

//----- (02248340) --------------------------------------------------------
int __fastcall Function_2248340(int a1)
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
    v4 = *(uint *)(v3 + 60);
    if ( v4 )
      Function_2021bd4(v4);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 2 );
  return Function_22475a0((int *)(v1 + 68));
}

//----- (02248364) --------------------------------------------------------
uint *__fastcall Function_2248364(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *result;
  int v8;
  int v9;

  v4 = a1;
  v5 = a2;
  v9 = a3;
  v6 = a4;
  result = (uint *)malloc(0x3Au, 20);
  v8 = (int)result;
  if ( result )
  {
    *result = v4;
    result[1] = v5 << 12;
    result[2] = v9 << 12;
    result[3] = s32_div_f((v9 << 12) - result[1], v6);
    *(uint *)(v8 + 16) = v6;
    *(uint *)(v4 + 120) = AddTaskToTaskList2((int)Function_22483e4, v8, 0);
    result = G2x_SetBlendBrightness_(&REG_BLDCNT, 1, v5);
  }
  return result;
}

//----- (022483B4) --------------------------------------------------------
BOOL __fastcall Function_22483b4(int a1)
{
  return *(uint *)(a1 + 120) == 0;
}

//----- (022483C4) --------------------------------------------------------
int __fastcall Function_22483c4(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = *(uint *)(a1 + 120);
  if ( result )
  {
    v3 = Function_201ced0(result);
    Function_22476c8(v3);
    Call_RemoveTaskFromTaskList(*(int **)(v1 + 120));
    result = 0;
    *(uint *)(v1 + 120) = 0;
  }
  return result;
}

//----- (022483E4) --------------------------------------------------------
ushort *__fastcall Function_22483e4(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  ushort *result;

  v2 = a2;
  v3 = a2[4] - 1;
  a2[4] = v3;
  if ( v3 <= 0 )
  {
    G2x_SetBlendBrightness_(&REG_BLDCNT, 1, a2[2] >> 12);
    result = (ushort *)Function_22483c4(*v2);
  }
  else
  {
    v4 = a2[1];
    v5 = v2[3];
    v2[1] = v4 + v5;
    result = G2x_SetBlendBrightness_(&REG_BLDCNT, 1, (v4 + v5) >> 12);
  }
  return result;
}

//----- (02248420) --------------------------------------------------------
uint *__fastcall Function_2248420(int a1)
{
  int v1;
  uint *result;
  int v3;
  uint *v4;

  v1 = a1;
  result = (uint *)malloc(0x3Au, 48);
  v3 = (int)result;
  if ( result )
  {
    *result = v1;
    v4 = *(uint **)(v1 + 116);
    *(uint *)(v3 + 4) = v4;
    Function_2247958(v4, (uint *)(v3 + 8));
    Function_2247978(*(ushort **)(v3 + 4), (ushort *)(v3 + 20));
    *(uint *)(v3 + 28) = 12128;
    *(uint *)(v3 + 32) = 0;
    *(ushort *)(v3 + 44) = 0;
    *(uint *)(v3 + 36) = 0;
    *(uint *)(v3 + 40) = 0;
    result = AddTaskToTaskList1((int)Function_22484b0, v3, 0);
    *(uint *)(v1 + 124) = result;
  }
  return result;
}

//----- (0224846C) --------------------------------------------------------
BOOL __fastcall Function_224846c(int a1)
{
  return *(uint *)(a1 + 124) == 0;
}

//----- (0224847C) --------------------------------------------------------
int __fastcall Function_224847c(int a1)
{
  int v1;
  int result;

  v1 = *(uint *)(a1 + 124);
  if ( v1 )
    result = *(uint *)(Function_201ced0(v1) + 32);
  else
    result = 0;
  return result;
}

//----- (02248490) --------------------------------------------------------
int __fastcall Function_2248490(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = *(uint *)(a1 + 124);
  if ( result )
  {
    v3 = Function_201ced0(result);
    free(v3);
    Call_RemoveTaskFromTaskList(*(int **)(v1 + 124));
    result = 0;
    *(uint *)(v1 + 124) = 0;
  }
  return result;
}

//----- (022484B0) --------------------------------------------------------
int __fastcall Function_22484b0(int a1, uint *a2)
{
  uint *v2;
  int v3;
  uint v4;
  int v5;
  int result;

  v2 = a2;
  if ( !a2[9] )
  {
    a2[3] += a2[7];
    v3 = a2[7];
    if ( v3 < 0 )
    {
      v2[7] = v3 - 1920;
      if ( v2[3] <= -16384 )
      {
        v2[3] = -16384;
        v4 = s32_div_f(44 * v2[7], 100);
        v2[7] = -v4;
        if ( (int)-v4 < 4000 )
          v2[9] = 1;
        Function_2005748(0x5E6u);
        v5 = v2[8] + 1;
        v2[8] = v5;
        if ( v5 == 1 )
        {
          *((ushort *)v2 + 22) = 176;
        }
        else if ( v5 == 3 )
        {
          *((ushort *)v2 + 22) += 80;
        }
      }
    }
    else
    {
      v2[7] = v3 - 1920;
    }
  }
  *((ushort *)v2 + 10) += *((ushort *)v2 + 22);
  *((ushort *)v2 + 12) -= *((ushort *)v2 + 22);
  Function_2247990((ushort *)v2[1], (ushort *)v2 + 10);
  v2[2] += 5 * *((short *)v2 + 22);
  v2[4] += 5 * *((short *)v2 + 22);
  Function_2247968((uint *)v2[1], v2 + 2);
  result = v2[9];
  if ( result )
  {
    *((ushort *)v2 + 22) -= 14;
    result = v2[10] + 1;
    v2[10] = result;
    if ( result > 30 )
      result = Function_2248490(*v2);
  }
  return result;
}

//----- (02248590) --------------------------------------------------------
int *__fastcall Function_2248590(int a1)
{
  int v1;
  int *v2;
  int *v3;

  v1 = a1;
  v2 = (int *)malloc(0x3Au, 364);
  v3 = v2;
  if ( v2 )
  {
    *v2 = v1;
    v2[1] = 0;
    v2[48] = Function_2247628(v1);
    v3[53] = 0;
    v3[49] = 0;
    v3[51] = 0;
    v3[88] = 0;
    v3[89] = 0;
    v3[47] = Function_201d35c();
    v3[52] = 0;
    v3[90] = 0;
    AddTaskToTaskList3((int)Function_2248e00, (int)v3, 0);
  }
  return v3;
}

//----- (022485FC) --------------------------------------------------------
uint __fastcall Function_22485fc(int *a1)
{
  int *v1;
  int v2;
  int *v3;

  v1 = a1;
  v2 = OS_DisableInterrupts();
  if ( v1 )
  {
    Function_2248b3c(v1);
    Function_2248c98(v1);
    Function_2248dc4(v1);
    v3 = (int *)v1[88];
    if ( v3 )
      Call_RemoveTaskFromTaskList(v3);
    if ( v1[89] )
      Function_22490a4();
    SetIRNGSeed(v1[47]);
    free((int)v1);
  }
  return OS_RestoreInterrupts(v2);
}

//----- (02248650) --------------------------------------------------------
int __fastcall Function_2248650(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( *a2 >= 4u )
    return 1;
  if ( ((int (*)(void))*(&off_224BF9C + *a2))() )
  {
    ++*v2;
    *(uint *)(v3 + 4) = 0;
  }
  Function_2248688(v3);
  return 0;
}

//----- (02248688) --------------------------------------------------------
int __fastcall Function_2248688(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = *(uint *)(a1 + 212);
  if ( result )
  {
    G3X_Reset();
    Function_2247770(*(uint *)(v1 + 212), v3, v4, v5);
    result = Function_20241bc(0, 0);
  }
  return result;
}

//----- (022486AC) --------------------------------------------------------
int __fastcall Function_22486ac(int a1)
{
  int v1;

  v1 = a1;
  Function_22488a4();
  Function_2248b84(v1);
  Function_2248ca8(v1);
  Function_200f174(0, 1, 1, 0, 8, 1, 58);
  return 1;
}

//----- (022486E0) --------------------------------------------------------
int __fastcall Function_22486e0(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = *a2;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( dword_224C2E0[33] < 30 )
        ++dword_224C2E0[33];
      if ( *(uint *)(a1 + 208) )
        return 1;
    }
  }
  else if ( Function_200f2ac() )
  {
    dword_224C2E0[33] = 0;
    ++*v2;
  }
  return 0;
}

//----- (02248728) --------------------------------------------------------
int __fastcall Function_2248728(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*a2 )
  {
    case 0u:
      a1[2] = 0;
      ++*a2;
      goto LABEL_10;
    case 1u:
      v4 = a1[2] + 1;
      v3[2] = v4;
      if ( v4 > 8 )
      {
        Function_22490d0(v3[54], 0, 31, 24);
        v3[88] = Function_2249154(v3);
        Function_22479ac(v3[54], 0);
        Function_22479a8(v3[54], 1);
        ++*v2;
      }
      goto LABEL_10;
    case 2u:
      if ( Function_2249500(a1[88]) )
        ++*v2;
      goto LABEL_10;
    case 3u:
      if ( Function_22494f4(a1[88]) )
        ++*v2;
      goto LABEL_10;
    case 4u:
      Function_2248df4();
      result = 1;
      break;
    default:
LABEL_10:
      result = 0;
      break;
  }
  return result;
}

//----- (022487D4) --------------------------------------------------------
int __fastcall Function_22487d4(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_224950c(a1[88]);
      v3[2] = 0;
      ++*v2;
      goto LABEL_14;
    case 1u:
      v4 = a1[2] + 1;
      v3[2] = v4;
      if ( v4 > 2 )
      {
        v3[2] = 0;
        Function_2247004(v3[49]);
        ++*v2;
      }
      goto LABEL_14;
    case 2u:
      if ( !a1[50] )
      {
        Function_2248fac();
        ++*v2;
      }
      goto LABEL_14;
    case 3u:
      v5 = a1[2];
      if ( v5 < 40 )
      {
        v6 = v5 + 1;
        v3[2] = v6;
        if ( v6 == 40 )
          Function_2005748(0x6B0u);
      }
      if ( Function_22494f4(v3[88]) )
      {
        Function_200f174(0, 0, 0, 0x7FFF, 4, 1, 58);
        ++*v2;
      }
      goto LABEL_14;
    case 4u:
      if ( !Function_200f2ac() )
        goto LABEL_14;
      result = 1;
      break;
    default:
LABEL_14:
      result = 0;
      break;
  }
  return result;
}

//----- (022488A4) --------------------------------------------------------
uint *__fastcall Function_22488a4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  uint *result;

  v1 = a1;
  GX_SetBanks(dword_224BFF4);
  REG_POWERCNT &= 0x7FFFu;
  SetGraphicsModes(dword_224BF8C);
  Function_20183c4(*(uint **)(v1 + 192), 2u, dword_224BFBC, 1);
  Function_20183c4(*(uint **)(v1 + 192), 6u, dword_224BFBC, 1);
  v2 = OS_DisableInterrupts();
  Function_20183c4(*(uint **)(v1 + 192), 3u, dword_224BFD8, 2);
  Function_20183c4(*(uint **)(v1 + 192), 7u, dword_224BFD8, 2);
  OS_RestoreInterrupts(v2);
  LoadFromNARC_RGCN(93, 2, *(uint **)(v1 + 192), 2u, 0, 0, 1, 58);
  LoadFromNARC_RGCN(93, 2, *(uint **)(v1 + 192), 6u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 0, *(uint **)(v1 + 192), 2u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 0, *(uint **)(v1 + 192), 6u, 0, 0, 1, 58);
  v3 = Function_2247644(*(uint *)v1);
  Call_LoadFromNARC_RLCN(93, 3, 0, 0, 32, 58);
  Call_LoadFromNARC_RLCN(93, 3, 4u, 0, 32, 58);
  v4 = *((ushort *)dword_224BF84 + v3);
  LoadFromNARC_RLCN(93, 3, 0, v4, 32, 64, 58);
  LoadFromNARC_RLCN(93, 3, 4u, v4, 32, 64, 58);
  LoadFromNARC_RGCN(93, 5, *(uint **)(v1 + 192), 3u, 0, 0, 1, 58);
  LoadFromNARC_RGCN(93, 5, *(uint **)(v1 + 192), 7u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 4, *(uint **)(v1 + 192), 3u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 4, *(uint **)(v1 + 192), 7u, 0, 0, 1, 58);
  v5 = (uint *)malloc(0x3Au, 96);
  if ( v5 )
  {
    MIi_CpuClear32(0, v5, 96);
    DC_FlushRange((int)v5, 96);
    GX_BeginLoadBGExtPltt();
    GXS_BeginLoadBGExtPltt();
    GX_LoadBGExtPltt((int)v5, 24576, 96);
    GXS_LoadBGExtPltt((int)v5, 24576, 96);
    GX_EndLoadBGExtPltt();
    GXS_EndLoadBGExtPltt();
    free((int)v5);
  }
  Function_2019184(*(uint *)(v1 + 192), 6u, 3u, -256);
  Function_2019120(7u, 0);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  Function_2019184(*(uint *)(v1 + 192), 3u, 3u, 0);
  *(uint *)(v1 + 196) = Function_2246f30((uint *)(v1 + 200), 1, v6, v7);
  result = Function_22472c4(*(uint *)(v1 + 192), 1152, 4096, 1, 296, 0, (uint *)(v1 + 208));
  *(uint *)(v1 + 204) = result;
  return result;
}

//----- (02248B3C) --------------------------------------------------------
int __fastcall Function_2248b3c(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 200) )
    Function_2247018(*(uint *)(a1 + 196));
  Function_2019044(*(uint *)(v1 + 192), 2);
  Function_2019044(*(uint *)(v1 + 192), 6);
  Function_2019044(*(uint *)(v1 + 192), 3);
  return Function_2019044(*(uint *)(v1 + 192), 7);
}

//----- (02248B84) --------------------------------------------------------
uint *__fastcall Function_2248b84(int a1)
{
  int v1;
  short v2;
  int v3;

  v1 = a1;
  Function_20b28cc();
  G3X_InitMtxStack();
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  v2 = GFX_CONTROL & 0xCFFF;
  v3 = (GFX_CONTROL & 0xCFFF | 8) & 0xCFFF;
  GFX_CONTROL = v3 | 0x20;
  SetEdgeTable((int)dword_224BFAC, v3 | 0x20, v3, v2);
  G3X_SetClearColor(17407, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  GFX_VIEWPORT = -1073807360;
  Function_20a5a94(1u, 1);
  Function_20a5d88(0x4000, 1);
  Function_201ff0c(1u, 1);
  REG_BG0CNT &= 0xFFFCu;
  *(uint *)(v1 + 212) = Function_22476f0(1u);
  *(uint *)(v1 + 216) = Function_22478b4(*(uint *)(v1 + 212), 0, 93, 27, 0, -227328, 0, 0);
  dword_224C2E0[34] = 60384;
  LOWORD(dword_224C2E0[35]) = 0;
  Function_2247ab0(*(ushort ***)(v1 + 212), &dword_224C2E0[34]);
  return Function_22479d4(*(uint **)(v1 + 216), 7168);
}

//----- (02248C98) --------------------------------------------------------
int __fastcall Function_2248c98(int a1)
{
  int result;

  result = *(uint *)(a1 + 212);
  if ( result )
    result = Function_224773c(result);
  return result;
}

//----- (02248CA8) --------------------------------------------------------
int __fastcall Function_2248ca8(int *a1)
{
  int *v1;
  int *v2;
  int v3;
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

  v1 = a1;
  Function_2247568(a1 + 3, 93, 11, 12);
  NNS_G2dInitImagePaletteProxy((int)&v13);
  NNS_G2dInitImageProxy((int)&v12);
  Function_2006f00(93, 13, 1, 0, 0, 1, 0, 58, (int)&v12);
  Function_2006f00(93, 13, 1, 0, 0, 2, 0, 58, (int)&v12);
  Function_2006ee0(93, 14, 1, 0, 58, (int)&v13);
  Function_2006ee0(93, 14, 2, 0, 58, (int)&v13);
  Function_22475c4((int)&v11, (int)(v1 + 3), (int)&v12, (int)&v13, 1);
  SetIRNGSeed(56182737);
  v10 = 0;
  v2 = v1;
  do
  {
    v3 = Function_201d35c();
    u32_div_f(v3, 232);
    v5 = v4 + 12;
    v6 = Function_201d35c();
    u32_div_f(v6, 452);
    v8 = v7 - 28;
    v2[7] = Function_22475e4(*v1, (int)&v11, v5, v7 - 28, 0, 1);
    v2[8] = Function_22475e4(*v1, (int)&v11, v5, v8 + 56, 0, 1);
    Function_2021d6c(v2[7], 0);
    Function_2021d6c(v2[8], 1u);
    Function_2021cac(v2[7], 0);
    Function_2021cac(v2[8], 0);
    v2 += 2;
    result = v10 + 1;
    v10 = result;
  }
  while ( result < 20 );
  return result;
}

//----- (02248DC4) --------------------------------------------------------
int __fastcall Function_2248dc4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    v4 = *(uint *)(v3 + 28);
    if ( v4 )
      Function_2021bd4(v4);
    v5 = *(uint *)(v3 + 32);
    if ( v5 )
      Function_2021bd4(v5);
    ++v2;
    v3 += 8;
  }
  while ( v2 < 20 );
  return Function_22475a0((int *)(v1 + 12));
}

//----- (02248DF4) --------------------------------------------------------
int __fastcall Function_2248df4(int result)
{
  *(uint *)(result + 360) = 1;
  return result;
}

//----- (02248E00) --------------------------------------------------------
int __fastcall Function_2248e00(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = 360;
  if ( *(uint *)(a2 + 360) )
  {
    *(uint *)(a2 + 360) = 0;
    Function_2019184(*(uint *)(a2 + 192), 2u, 3u, -256);
    Function_2019184(*(uint *)(v3 + 192), 6u, 3u, 0);
    Function_2019120(3u, 0);
    Function_2019120(7u, 1);
    REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
    result = Call_RemoveTaskFromTaskList(v2);
  }
  return result;
}

//----- (02248E5C) --------------------------------------------------------
uint __fastcall Function_2248e5c(uint *a1, uint *a2, uint **a3)
{
  uint *v3;
  int v4;
  uint **v5;
  uint **v6;
  uint v7;
  uint *v8;
  int v9;
  uint *v10;
  uint result;
  uint **v12;

  v3 = a1;
  a3[1] = a1;
  *a3 = a2;
  v4 = 0;
  a3[82] = 0;
  v12 = a3;
  a3[83] = 0;
  v5 = a3;
  v6 = a3;
  do
  {
    v5[2] = 0;
    v7 = v3[7];
    Function_2021d28();
    v9 = v8[1];
    v10 = v6 + 22;
    *v10 = *v8;
    v10[1] = v9;
    ++v4;
    v6[24] = (uint *)v8[2];
    ++v5;
    v3 += 2;
    v6 += 3;
  }
  while ( v4 < 20 );
  **v12 = (uint)AddTaskToTaskList1((int)Function_2248ec4, (int)v12, 0);
  result = **v12;
  if ( !result )
    result = free((int)v12);
  return result;
}

//----- (02248EC4) --------------------------------------------------------
int __fastcall Function_2248ec4(int a1, uint *a2)
{
  uint *v2;
  int v3;
  uint *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int result;
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v2 = a2;
  ++v2[82];
  if ( a2[82] > 12 )
  {
    a2[82] = 0;
    v3 = a2[83];
    if ( v3 < 20 )
    {
      a2[v3 + 2] = 1;
      ++a2[83];
    }
  }
  v11 = 0;
  v4 = a2;
  v10 = a2;
  v5 = 0;
  v6 = a2 + 22;
  do
  {
    v7 = v4[23] + 135168;
    v4[23] = v7;
    if ( v7 >= 1736704 )
    {
      v4[23] -= 1851392;
      if ( v10[2] )
      {
        Function_2021cac(*(uint *)(v2[1] + v5 + 28), 1);
        Function_2021cac(*(uint *)(v2[1] + v5 + 32), 1);
      }
    }
    Function_2021c50(*(uint **)(v2[1] + v5 + 28), v6);
    v8 = v4[23];
    v12 = v4[22];
    v13 = v8;
    v14 = v4[24];
    v13 = v8 + 229376;
    Function_2021c50(*(uint **)(v2[1] + v5 + 32), &v12);
    v4 += 3;
    ++v10;
    v5 += 8;
    result = v11 + 1;
    v6 += 3;
    v11 = result;
  }
  while ( result < 20 );
  return result;
}

//----- (02248F94) --------------------------------------------------------
int __fastcall Function_2248f94(int result)
{
  int *v1;

  v1 = (int *)result;
  if ( result )
  {
    **(uint **)Function_201ced0(result) = 0;
    result = Call_RemoveTaskFromTaskList(v1);
  }
  return result;
}

//----- (02248FAC) --------------------------------------------------------
int *__fastcall Function_2248fac(int a1, int **a2)
{
  int **v2;
  int v3;
  int *result;
  int *v5;

  v2 = a2;
  v3 = a1;
  result = (int *)malloc(0x3Au, 368);
  v5 = result;
  if ( result )
  {
    *result = v3;
    result[85] = *(uint *)(v3 + 192);
    result[86] = Function_20192f8(result[85], 2) << 12;
    v5[87] = Function_20192f8(v5[85], 6) << 12;
    v5[88] = 0;
    v5[89] = 0;
    v5[90] = (int)v2;
    v5[91] = 0;
    result = AddTaskToTaskList2((int)Function_2249020, (int)v5, 0);
    *v2 = result;
    if ( !result )
      result = (int *)free((int)v5);
  }
  return result;
}

//----- (02249020) --------------------------------------------------------
uint __fastcall Function_2249020(int a1, int *a2)
{
  int *v2;
  uint result;

  v2 = a2;
  result = 0x200000;
  if ( a2[89] < 0x200000 )
  {
    a2[88] += 288;
    a2[89] += a2[88];
    Function_2019184(a2[85], 2u, 3u, (a2[86] - a2[89]) >> 12);
    Function_2019184(v2[85], 6u, 3u, (v2[87] - v2[89]) >> 12);
    result = 0x80000;
    if ( v2[89] >= 0x80000 )
    {
      result = v2[91];
      if ( !result )
        result = Function_2248e5c((uint *)*v2, (uint *)v2 + 91, (uint **)v2 + 1);
    }
  }
  return result;
}

//----- (022490A4) --------------------------------------------------------
int __fastcall Function_22490a4(int result)
{
  int *v1;
  int v2;
  int v3;

  v1 = (int *)result;
  if ( result )
  {
    v2 = Function_201ced0(result);
    v3 = v2;
    **(uint **)(v2 + 360) = 0;
    Function_2248f94(*(uint *)(v2 + 364));
    free(v3);
    result = Call_RemoveTaskFromTaskList(v1);
  }
  return result;
}

//----- (022490D0) --------------------------------------------------------
uint *__fastcall Function_22490d0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *result;
  int v8;
  int v9;

  v9 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  result = (uint *)malloc(0x3Au, 20);
  v8 = (int)result;
  if ( result )
  {
    *result = v4 << 12;
    result[2] = v5 << 12;
    result[1] = s32_div_f((v5 << 12) - *result, v6);
    *(uint *)(v8 + 12) = v6;
    *(uint *)(v8 + 16) = v9;
    Function_22479ac(v9, v4);
    result = AddTaskToTaskList1((int)Function_2249118, v8, 0);
  }
  return result;
}

//----- (02249118) --------------------------------------------------------
int __fastcall Function_2249118(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = a2[3] - 1;
  a2[3] = v4;
  if ( v4 <= 0 )
  {
    Function_22479ac(a2[4], a2[2] >> 12);
    free((int)v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  else
  {
    v5 = *a2 + a2[1];
    *v2 = v5;
    result = Function_22479ac(v2[4], v5 >> 12);
  }
  return result;
}

//----- (02249154) --------------------------------------------------------
uint *__fastcall Function_2249154(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;
  int v5;
  ushort *v6;
  ushort *v7;

  v1 = a1;
  v2 = a1 + 220;
  Function_2247958(*(uint **)(a1 + 216), (uint *)(a1 + 228));
  Function_2247978(*(ushort **)(v1 + 216), (ushort *)(v2 + 32));
  v3 = *(uint *)(v2 + 12);
  v4 = (uint *)(v2 + 20);
  *v4 = *(uint *)(v2 + 8);
  v4[1] = v3;
  *(uint *)(v2 + 28) = *(uint *)(v2 + 16);
  *(uint *)(v2 + 4) = *(uint *)(v1 + 212);
  *(uint *)(v1 + 220) = *(uint *)(v1 + 216);
  *(uint *)(v2 + 40) = *(uint *)(v2 + 12);
  *(uint *)(v2 + 44) = s32_div_f(-32768 - *(uint *)(v2 + 12), 30);
  *(uint *)(v2 + 128) = 30;
  v5 = 0;
  *(uint *)(v2 + 56) = 0;
  *(uint *)(v2 + 60) = 0;
  *(uint *)(v2 + 64) = 0;
  *(uint *)(v2 + 68) = 0;
  *(ushort *)(v2 + 84) = 0;
  *(ushort *)(v2 + 86) = 0x4000;
  *(ushort *)(v2 + 90) = 0;
  *(uint *)(v2 + 124) = 0;
  v6 = (ushort *)v2;
  do
  {
    v6[46] = 0;
    v6[47] = 0;
    v6[48] = 0;
    v7 = v6 + 49;
    ++v5;
    v6 += 4;
    *v7 = 0;
  }
  while ( v5 < 3 );
  *(uint *)(v2 + 120) = 0;
  Function_224922c(v2, 3328, 30);
  Function_2249268(v2, 167936, 81920, 30);
  return AddTaskToTaskList1((int)Function_2249424, v2, 0);
}

//----- (0224922C) --------------------------------------------------------
int __fastcall Function_224922c(int a1, int a2, int a3)
{
  int v3;
  short v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a3 )
  {
    *(ushort *)(a1 + 90) = s32_div_f(a2 - *(short *)(a1 + 86), a3);
    *(ushort *)(v3 + 86) += *(ushort *)(v3 + 90);
  }
  else
  {
    *(ushort *)(a1 + 86) = a2;
  }
  result = v3 + 88;
  *(ushort *)(v3 + 88) = v4;
  *(uint *)(v3 + 116) = v5;
  return result;
}

//----- (02249268) --------------------------------------------------------
int __fastcall Function_2249268(int result, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;

  v4 = (uint *)result;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a4 )
  {
    *(uint *)(result + 64) = s32_div_f(a2 - *(uint *)(result + 56), a4);
    v4[17] = s32_div_f(v6 - v4[15], v7);
    v4[14] += v4[16];
    result = v4[15] + v4[17];
    v4[15] = result;
    v4[18] = v5;
    v4[19] = v6;
  }
  v4[20] = v7;
  return result;
}

//----- (022492A4) --------------------------------------------------------
ushort *__fastcall Function_22492a4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  short v6;
  short v7;
  ushort *result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a4 )
    *(ushort *)(a1 + 8 * a2 + 94) = s32_div_f(a3 - *(short *)(a1 + 8 * a2 + 92), a4);
  *(ushort *)(v4 + 8 * v5 + 96) = v6;
  result = (ushort *)(v4 + 8 * v5 + 98);
  *result = v7;
  return result;
}

//----- (022492DC) --------------------------------------------------------
int __fastcall Function_22492dc(int a1)
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
  long long v10;
  int v11;
  ushort *v12;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 116);
  if ( v2 )
  {
    v3 = v2 - 1;
    *(uint *)(v1 + 116) = v3;
    if ( v3 )
      *(ushort *)(v1 + 86) += *(ushort *)(v1 + 90);
    else
      *(ushort *)(v1 + 86) = *(ushort *)(v1 + 88);
  }
  *(ushort *)(v1 + 84) += *(ushort *)(v1 + 86);
  v4 = s32_div_f(*(ushort *)(v1 + 84), 182);
  if ( v4 >= 360 )
    LOWORD(v4) = v4 - 360;
  if ( *(uint *)(v1 + 80) )
  {
    *(uint *)(v1 + 56) += *(uint *)(v1 + 64);
    *(uint *)(v1 + 60) += *(uint *)(v1 + 68);
    v5 = *(uint *)(v1 + 80) - 1;
    *(uint *)(v1 + 80) = v5;
    if ( !v5 )
    {
      *(uint *)(v1 + 56) = *(uint *)(v1 + 72);
      *(uint *)(v1 + 60) = *(uint *)(v1 + 76);
    }
  }
  v6 = *(uint *)(v1 + 56);
  v7 = Function_201d1d4((ushort)v4);
  *(uint *)(v1 + 20) = *(uint *)(v1 + 8) + (ull)((ll_mul(v7, v6) + 2048) >> 12);
  v8 = *(uint *)(v1 + 60);
  v9 = Function_201d15c((ushort)v4);
  v10 = ll_mul(v9, v8);
  v11 = 0;
  *(uint *)(v1 + 28) = *(uint *)(v1 + 16) + (ull)((v10 + 2048) >> 12);
  *(ushort *)(v1 + 34) += *(ushort *)(v1 + 86);
  v12 = (ushort *)v1;
  do
  {
    if ( v12[49] )
    {
      if ( --v12[49] )
        v12[46] += v12[47];
      else
        v12[46] = v12[48];
    }
    ++v11;
    v12 += 4;
  }
  while ( v11 < 3 );
  *(ushort *)(v1 + 32) += *(ushort *)(v1 + 92);
  *(ushort *)(v1 + 34) += *(ushort *)(v1 + 100);
  result = *(short *)(v1 + 36) + *(short *)(v1 + 108);
  *(ushort *)(v1 + 36) = result;
  return result;
}

//----- (02249424) --------------------------------------------------------
ushort *__fastcall Function_2249424(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  if ( a2[32] )
  {
    v4 = a2[10] + a2[11];
    a2[10] = v4;
    a2[6] = v4;
    if ( --a2[32] <= 0 )
    {
      a2[12] = 512;
      a2[11] = 0;
      Function_2249268((int)a2, 0x4000, 0x4000, 60);
      Function_22492a4((int)v2, 0, -2048, 30);
      v2[31] = 1;
      Function_201cecc(v3, (int)Function_22494a8);
    }
  }
  Function_22492dc((int)v2);
  Function_2247968((uint *)*v2, v2 + 5);
  return Function_2247990((ushort *)*v2, (ushort *)v2 + 16);
}

//----- (022494A8) --------------------------------------------------------
int __fastcall Function_22494a8(int a1, int *a2)
{
  int *v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  result = a2[30];
  if ( !result )
  {
    v4 = a2[11] + a2[12];
    v2[11] = v4;
    v5 = v2[10] + v4;
    v2[10] = v5;
    v2[6] = v5;
    Function_22492dc((int)v2);
    Function_2247968((uint *)*v2, v2 + 5);
    Function_2247990((ushort *)*v2, (ushort *)v2 + 16);
    result = Function_22479dc(*v2, v6, v7, v8);
    if ( !result )
    {
      Function_22479a8(*v2, 0);
      result = 1;
      v2[30] = 1;
    }
  }
  return result;
}

//----- (022494F4) --------------------------------------------------------
int __fastcall Function_22494f4(int a1)
{
  return *(uint *)(Function_201ced0(a1) + 120);
}

//----- (02249500) --------------------------------------------------------
int __fastcall Function_2249500(int a1)
{
  return *(uint *)(Function_201ced0(a1) + 124);
}

//----- (0224950C) --------------------------------------------------------
int __fastcall Function_224950c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  short v8;
  short v9;
  short v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = Function_201ced0(a1);
  v6 = (int *)v5;
  *(uint *)(v5 + 120) = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  Function_2247ad0(*(int ***)(v5 + 4), 1);
  Function_2247ab0((ushort **)v6[1], &v8);
  v6[11] = 22732;
  v6[10] = -501556;
  v6[32] = 20;
  v6[6] = v6[10];
  Function_2249268((int)v6, 0, 0, 20);
  Function_22492a4((int)v6, 1, -*((short *)v6 + 43), 30);
  Function_22492a4((int)v6, 2, 256, 50);
  Function_22479d4((uint *)*v6, 0x2000);
  Function_22479a8(*v6, 1);
  return Function_201cecc(v4, (int)Function_224959c);
}

//----- (0224959C) --------------------------------------------------------
ushort *__fastcall Function_224959c(int a1, int a2)
{
  int *v2;
  int v3;
  int v4;

  v2 = (int *)a2;
  v3 = a1;
  Function_22492dc(a2);
  if ( v2[32] )
  {
    v4 = v2[10] + v2[11];
    v2[10] = v4;
    v2[6] = v4;
    if ( !--v2[32] )
      Function_201cecc(v3, (int)Function_22495f8);
  }
  Function_2247968((uint *)*v2, v2 + 5);
  return Function_2247990((ushort *)*v2, (ushort *)v2 + 16);
}

//----- (022495F8) --------------------------------------------------------
ushort *__fastcall Function_22495f8(int a1, int a2)
{
  int *v2;
  int v3;

  v2 = (int *)a2;
  v3 = a1;
  Function_22492dc(a2);
  if ( ++v2[32] > 110 )
  {
    v2[11] = s32_div_f(-239616 - v2[10], 53);
    v2[32] = 53;
    Function_201cecc(v3, (int)Function_2249658);
  }
  Function_2247968((uint *)*v2, v2 + 5);
  return Function_2247990((ushort *)*v2, (ushort *)v2 + 16);
}

//----- (02249658) --------------------------------------------------------
ushort *__fastcall Function_2249658(int a1, int a2)
{
  int *v2;
  int v3;
  int v4;

  v2 = (int *)a2;
  v3 = a1;
  Function_22492dc(a2);
  if ( v2[32] )
  {
    v4 = v2[10] + v2[11];
    v2[10] = v4;
    v2[6] = v4;
    if ( !--v2[32] )
      Function_201cecc(v3, (int)Function_22496b4);
  }
  Function_2247968((uint *)*v2, v2 + 5);
  return Function_2247990((ushort *)*v2, (ushort *)v2 + 16);
}

//----- (022496B4) --------------------------------------------------------
ushort *__fastcall Function_22496b4(int a1, int a2)
{
  int *v2;
  int v3;

  v2 = (int *)a2;
  v3 = a1;
  Function_22492dc(a2);
  if ( ++v2[32] > 1 )
  {
    v2[11] = 0x20000;
    Function_201cecc(v3, (int)Function_2249700);
  }
  Function_2247968((uint *)*v2, v2 + 5);
  return Function_2247990((ushort *)*v2, (ushort *)v2 + 16);
}

//----- (02249700) --------------------------------------------------------
int __fastcall Function_2249700(int a1, int a2)
{
  int *v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = (int *)a2;
  result = *(uint *)(a2 + 120);
  if ( !result )
  {
    Function_22492dc(a2);
    v4 = v2[10] + v2[11];
    v2[10] = v4;
    v2[6] = v4;
    Function_2247968((uint *)*v2, v2 + 5);
    Function_2247990((ushort *)*v2, (ushort *)v2 + 16);
    result = Function_22479dc(*v2, v5, v6, v7);
    if ( !result )
    {
      result = 1;
      v2[30] = 1;
    }
  }
  return result;
}

//----- (02249740) --------------------------------------------------------
int *__fastcall Function_2249740(int a1)
{
  int v1;
  int *v2;
  int *v3;

  v1 = a1;
  v2 = (int *)malloc(0x3Au, 164);
  v3 = v2;
  if ( v2 )
  {
    *v2 = v1;
    v2[1] = 0;
    v2[9] = Function_2247628(v1);
    v3[10] = 0;
    Function_2249c28(v3 + 13);
  }
  return v3;
}

//----- (02249770) --------------------------------------------------------
uint __fastcall Function_2249770(uint result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    SetMainLoopFunctionCall(0, 0);
    Function_2249a68(v1);
    Function_2249b80(v1);
    Function_2249c10(v1);
    Function_2249c30(v1 + 52);
    result = free(v1);
  }
  return result;
}

//----- (022497A0) --------------------------------------------------------
int __fastcall Function_22497a0(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( *a2 >= 2u )
    return 1;
  if ( ((int (*)(void))*(&off_224C01C + *a2))() )
  {
    ++*v2;
    *(uint *)(v3 + 4) = 0;
  }
  Function_22497d8(v3);
  return 0;
}

//----- (022497D8) --------------------------------------------------------
int __fastcall Function_22497d8(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = *(uint *)(a1 + 40);
  if ( result )
  {
    G3X_Reset();
    Function_2247770(*(uint *)(v1 + 40), v3, v4, v5);
    result = Function_20241bc(0, 0);
  }
  return result;
}

//----- (022497F8) --------------------------------------------------------
int __fastcall Function_22497f8(int a1)
{
  int v1;

  v1 = a1;
  Function_2249910();
  Function_2249a80(v1);
  Function_2249b90(v1);
  *(uint *)(v1 + 12) = 0;
  AddTaskToTaskList3((int)Function_2249f38, v1, 0);
  Function_200f174(0, 1, 1, 0x7FFF, 3, 1, 58);
  return 1;
}

//----- (02249840) --------------------------------------------------------
int __fastcall Function_2249840(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*a2 )
  {
    case 0u:
      a1[2] = 0;
      ++*a2;
      goto LABEL_11;
    case 1u:
      v4 = a1[2] + 1;
      v3[2] = v4;
      if ( v4 > 10 )
      {
        Function_2005748(0x6ACu);
        Function_2249c44(v3, v3 + 13);
        Function_22479a8(v3[11], 1);
        ++*v2;
      }
      goto LABEL_11;
    case 2u:
      if ( Function_2249cf0(a1 + 13) )
      {
        Function_2005748(0x6ADu);
        Function_2021d6c(v3[8], 3u);
        Function_2021cac(v3[8], 1);
        ++*v2;
      }
      goto LABEL_11;
    case 3u:
      if ( !Function_2021fd0(a1[8]) )
      {
        Function_200f174(0, 0, 0, 0x7FFF, 16, 1, 58);
        ++*v2;
      }
      goto LABEL_11;
    case 4u:
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

//----- (02249910) --------------------------------------------------------
uint __fastcall Function_2249910(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;

  v1 = a1;
  GX_SetBanks(dword_224C060);
  REG_POWERCNT &= 0x7FFFu;
  SetGraphicsModes(dword_224C024);
  Function_20183c4(*(uint **)(v1 + 36), 3u, dword_224C044, 0);
  Function_20183c4(*(uint **)(v1 + 36), 7u, dword_224C044, 0);
  switch ( (uchar)Function_2247644(*(uint *)v1) )
  {
    case 1u:
      v6 = 15;
      v2 = 16;
      v3 = 17;
      v4 = 32;
      break;
    case 2u:
      v6 = 15;
      v2 = 16;
      v3 = 17;
      v4 = 64;
      break;
    case 3u:
      v6 = 24;
      v2 = 25;
      v3 = 26;
      v4 = 0;
      break;
    default:
      v6 = 15;
      v2 = 16;
      v3 = 17;
      v4 = 0;
      break;
  }
  LoadFromNARC_RGCN(93, v2, *(uint **)(v1 + 36), 3u, 0, 0, 1, 58);
  LoadFromNARC_RGCN(93, v2, *(uint **)(v1 + 36), 7u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, v6, *(uint **)(v1 + 36), 3u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, v6, *(uint **)(v1 + 36), 7u, 0, 0, 1, 58);
  LoadFromNARC_RLCN(93, v3, 0, v4, 0, 32, 58);
  LoadFromNARC_RLCN(93, v3, 4u, v4, 0, 32, 58);
  Function_2019184(*(uint *)(v1 + 36), 3u, 3u, 256);
  Function_2019184(*(uint *)(v1 + 36), 7u, 3u, 0);
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (02249A68) --------------------------------------------------------
int __fastcall Function_2249a68(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(*(uint *)(a1 + 36), 3);
  return Function_2019044(*(uint *)(v1 + 36), 7);
}

//----- (02249A80) --------------------------------------------------------
int __fastcall Function_2249a80(int a1, int a2, int a3, int a4)
{
  int v4;
  short v5;
  int v6;
  int v7;
  int v8;
  short v10;
  short v11;
  short v12;
  char v13;
  int v14;

  v14 = a4;
  v4 = a1;
  Function_20b28cc();
  G3X_InitMtxStack();
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  v5 = GFX_CONTROL & 0xCFFF;
  v6 = (GFX_CONTROL & 0xCFFF | 8) & 0xCFFF;
  GFX_CONTROL = v6 | 0x20;
  SetEdgeTable((int)dword_224C034, v6 | 0x20, v6, v5);
  G3X_SetClearColor(17407, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  GFX_VIEWPORT = -1073807360;
  Function_20a5a94(1u, 1);
  Function_20a5d88(0x4000, 1);
  Function_201ff0c(1u, 1);
  REG_BG0CNT &= 0xFFFCu;
  *(uint *)(v4 + 40) = Function_22476f0(1u);
  *(uint *)(v4 + 44) = Function_22478b4(*(uint *)(v4 + 40), 0, 93, 27, 0, 0, 0, 0);
  v10 = 6371;
  v11 = 0;
  v12 = 0;
  Function_2247ab0(*(ushort ***)(v4 + 40), &v10);
  Function_2247ae0(*(int **)(v4 + 40), 2002);
  return Function_2247a90(*(int **)(v4 + 40), &v13, v7, v8);
}

//----- (02249B80) --------------------------------------------------------
int __fastcall Function_2249b80(int a1)
{
  int result;

  result = *(uint *)(a1 + 40);
  if ( result )
    result = Function_224773c(result);
  return result;
}

//----- (02249B90) --------------------------------------------------------
uint __fastcall Function_2249b90(int *a1)
{
  int *v1;
  uint v2;
  char v4;
  char v5;
  char v6;

  v1 = a1;
  Function_2247568(a1 + 4, 93, 7, 8);
  NNS_G2dInitImagePaletteProxy((int)&v6);
  NNS_G2dInitImageProxy((int)&v5);
  Function_2006f00(93, 9, 1, 0, 0, 1, 0, 58, (int)&v5);
  Function_2006ee0(93, 10, 1, 0, 58, (int)&v6);
  Function_22475c4((int)&v4, (int)(v1 + 4), (int)&v5, (int)&v6, 0);
  v2 = Function_22475e4(*v1, (int)&v4, 128, 96, 0, 1);
  v1[8] = v2;
  return Function_2021cac(v2, 0);
}

//----- (02249C10) --------------------------------------------------------
int __fastcall Function_2249c10(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 32);
  if ( v2 )
    Function_2021bd4(v2);
  return Function_22475a0((int *)(v1 + 16));
}

//----- (02249C28) --------------------------------------------------------
int __fastcall Function_2249c28(int result)
{
  *(uint *)(result + 4) = 0;
  return result;
}

//----- (02249C30) --------------------------------------------------------
int *__fastcall Function_2249c30(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = *(int **)(a1 + 4);
  if ( result )
  {
    Call_RemoveTaskFromTaskList(result);
    result = 0;
    *(uint *)(v1 + 4) = 0;
  }
  return result;
}

//----- (02249C44) --------------------------------------------------------
uint *__fastcall Function_2249c44(int a1, int a2)
{
  int v2;
  uint *result;

  v2 = a2;
  *(uint *)a2 = a1;
  *(uint *)(a2 + 12) = *(uint *)(a1 + 44);
  *(uint *)(a2 + 8) = *(uint *)(a1 + 40);
  *(uint *)(a2 + 16) = 0;
  *(uint *)(a2 + 20) = -717312;
  *(uint *)(a2 + 24) = 925696;
  *(ushort *)(a2 + 108) = -10128;
  *(ushort *)(a2 + 110) = -2736;
  *(uint *)(a2 + 60) = 79044;
  *(uint *)(a2 + 64) = -45738;
  *(uint *)(a2 + 96) = 0;
  *(uint *)(a2 + 100) = 0;
  *(uint *)(a2 + 104) = 0;
  *(ushort *)(a2 + 52) = 0x2000;
  *(ushort *)(a2 + 54) = -8192;
  *(ushort *)(a2 + 56) = 0;
  Function_2247990(*(ushort **)(a2 + 12), (ushort *)(a2 + 52));
  *(uint *)(v2 + 84) = 4096;
  *(uint *)(v2 + 68) = 75776;
  *(uint *)(v2 + 72) = 101376;
  *(uint *)(v2 + 92) = 0;
  Function_2249d38(v2);
  Function_2247968(*(uint **)(v2 + 12), (int *)(v2 + 40));
  Function_2247978(*(ushort **)(v2 + 12), (ushort *)(v2 + 52));
  result = AddTaskToTaskList1((int)Function_2249e04, v2, 0);
  *(uint *)(v2 + 4) = result;
  return result;
}

//----- (02249CF0) --------------------------------------------------------
BOOL __fastcall Function_2249cf0(int a1)
{
  return *(uint *)(a1 + 4) == 0;
}

//----- (02249D00) --------------------------------------------------------
uint *__fastcall Function_2249d00(uint *result, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int v6;
  int v7;

  v5 = result;
  v6 = a3;
  v7 = a4;
  if ( a5 )
  {
    result[19] = s32_div_f(a2 - result[17], a5);
    v5[20] = s32_div_f(v6 - v5[18], a5);
    v5[22] = s32_div_f(v7 - v5[21], a5);
    result = (uint *)a5;
    v5[23] = a5;
  }
  return result;
}

//----- (02249D38) --------------------------------------------------------
int __fastcall Function_2249d38(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = s32_div_f(*(ushort *)(a1 + 108), 182);
  if ( v2 >= 360 )
    LOWORD(v2) = v2 - 360;
  *(ushort *)(v1 + 108) += *(ushort *)(v1 + 110);
  if ( *(uint *)(v1 + 92) )
  {
    *(uint *)(v1 + 68) += *(uint *)(v1 + 76);
    *(uint *)(v1 + 72) += *(uint *)(v1 + 80);
    v3 = *(uint *)(v1 + 84) + *(uint *)(v1 + 88);
    *(uint *)(v1 + 84) = v3;
    Function_22479d4(*(uint **)(v1 + 12), v3);
    --*(uint *)(v1 + 92);
  }
  v4 = *(uint *)(v1 + 68);
  v5 = Function_201d1d4((ushort)v2);
  *(uint *)(v1 + 28) = (ll_mul(v5, v4) + 2048) >> 12;
  v6 = *(uint *)(v1 + 72);
  v7 = Function_201d15c((ushort)v2);
  *(uint *)(v1 + 32) = (ll_mul(v7, v6) + 2048) >> 12;
  *(uint *)(v1 + 36) = 0;
  *(ushort *)(v1 + 52) += 768;
  Function_2247990(*(ushort **)(v1 + 12), (ushort *)(v1 + 52));
  return VEC_Add((uint *)(v1 + 28), (uint *)(v1 + 16), (uint *)(v1 + 40));
}

//----- (02249E04) --------------------------------------------------------
int *__fastcall Function_2249e04(int *result, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = a2;
  v5 = a2[26];
  if ( v5 < 60 )
    v4[26] = v5 + 1;
  v6 = v4[24];
  if ( v6 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2249E28 + v6) + 35954218);
  switch ( (uchar)v6 )
  {
    case 0:
      v4[5] += v4[15];
      v4[6] += v4[16];
      Function_2249d38((int)v4);
      Function_2247968((uint *)v4[3], v4 + 10);
      result = (int *)Function_22479dc(v4[3], v7, v8, v9);
      if ( result )
      {
        result = (int *)(v4[24] + 1);
        v4[24] = result;
      }
      break;
    case 1:
      if ( Function_22479dc(v4[3], v6, a3, a4) )
      {
        v4[5] += v4[15];
        v4[6] += v4[16];
        Function_2249d38((int)v4);
        result = (int *)Function_2247968((uint *)v4[3], v4 + 10);
      }
      else
      {
        Function_2249f30(*v4);
        result = (int *)(v4[24] + 1);
        v4[24] = result;
      }
      break;
    case 2:
      v4[5] += v4[15];
      v4[6] += v4[16];
      Function_2249d38((int)v4);
      Function_2247968((uint *)v4[3], v4 + 10);
      result = (int *)v4[26];
      if ( (int)result >= 60 )
      {
        Function_2249d00(v4, 2048, 2048, 512, 12);
        v4[25] = 0;
        result = (int *)(v4[24] + 1);
        v4[24] = result;
      }
      break;
    case 3:
      Function_2249d38((int)v4);
      Function_2247968((uint *)v4[3], v4 + 10);
      result = (int *)(v4[25] + 1);
      v4[25] = result;
      if ( (int)result >= 12 )
      {
        Function_22479a8(v4[3], 0);
        v4[25] = 0;
        result = (int *)(v4[24] + 1);
        v4[24] = result;
      }
      break;
    case 4:
      v10 = v4[25] + 1;
      v4[25] = v10;
      if ( v10 > 8 )
      {
        v4[1] = 0;
        result = (int *)Call_RemoveTaskFromTaskList(result);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02249F30) --------------------------------------------------------
int __fastcall Function_2249f30(int result)
{
  *(uint *)(result + 12) = 1;
  return result;
}

//----- (02249F38) --------------------------------------------------------
int __fastcall Function_2249f38(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int result;
  short v7;
  short v8;
  short v9;
  int v10;

  v10 = a4;
  v4 = a2;
  v5 = a1;
  result = *(uint *)(a2 + 12);
  if ( result )
  {
    *(uint *)(a2 + 12) = 0;
    v7 = 4432;
    v8 = 0;
    v9 = 0;
    Function_2019184(*(uint *)(a2 + 36), 3u, 3u, 0);
    Function_2019184(*(uint *)(v4 + 36), 7u, 3u, 256);
    Function_2247ac0(*(ushort ***)(v4 + 40), &v7);
    REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
    result = Call_RemoveTaskFromTaskList(v5);
  }
  return result;
}

//----- (02249F90) --------------------------------------------------------
int *__fastcall Function_2249f90(int a1)
{
  int v1;
  int *v2;
  int *v3;

  v1 = a1;
  v2 = (int *)malloc(0x3Au, 36);
  v3 = v2;
  if ( v2 )
  {
    *v2 = v1;
    v2[1] = 0;
    v2[3] = Function_2247628(v1);
  }
  return v3;
}

//----- (02249FB4) --------------------------------------------------------
uint __fastcall Function_2249fb4(uint result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    Function_224a320();
    result = free(v1);
  }
  return result;
}

//----- (02249FC8) --------------------------------------------------------
int __fastcall Function_2249fc8(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( *a2 >= 2u )
    return 1;
  if ( ((int (*)(void))*(&off_224C088 + *a2))() )
  {
    ++*v2;
    *(uint *)(v3 + 4) = 0;
  }
  return 0;
}

//----- (02249FF8) --------------------------------------------------------
int Function_2249ff8()
{
  Function_224a10c();
  Function_200f174(0, 1, 1, 0x7FFF, 8, 1, 58);
  return 1;
}

//----- (0224A020) --------------------------------------------------------
int __fastcall Function_224a020(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( *a2 )
  {
    if ( v4 == 1 )
    {
      if ( v3[8] )
      {
        Function_2005748(0x6A9u);
        Function_200f174(0, 0, 0, 0x7FFF, 16, 1, 58);
        ++*v2;
      }
    }
    else if ( v4 == 2 && Function_200f2ac() )
    {
      return 1;
    }
  }
  else if ( Function_200f2ac() )
  {
    v3[4] = -1572864;
    v3[5] = 327680;
    v3[6] = 22937;
    v3[7] = -8738;
    v3[2] = 60;
    v3[8] = 0;
    AddTaskToTaskList2((int)Function_224a0c4, (int)v3, 0);
    ++*v2;
  }
  return 0;
}

//----- (0224A0C4) --------------------------------------------------------
int __fastcall Function_224a0c4(int *a1, uint *a2)
{
  uint *v2;
  int *v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = a2[2];
  if ( v4 )
  {
    a2[2] = v4 - 1;
    a2[4] += a2[6];
    a2[5] += a2[7];
    v5 = a2[4] >> 12;
    result = Function_224a358(v2[3]);
  }
  else
  {
    Function_224a358(a2[3]);
    v2[8] = 1;
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (0224A10C) --------------------------------------------------------
uint __fastcall Function_224a10c(int a1)
{
  int v1;

  v1 = a1;
  GX_SetBanks(dword_224C0F4);
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  SetGraphicsModes(dword_224C090);
  Function_20183c4(*(uint **)(v1 + 12), 1u, dword_224C0A0, 0);
  Function_20183c4(*(uint **)(v1 + 12), 5u, dword_224C0A0, 0);
  Function_20183c4(*(uint **)(v1 + 12), 2u, dword_224C0BC, 0);
  Function_20183c4(*(uint **)(v1 + 12), 3u, dword_224C0D8, 0);
  Function_20183c4(*(uint **)(v1 + 12), 7u, dword_224C0D8, 0);
  LoadFromNARC_RGCN(93, 19, *(uint **)(v1 + 12), 3u, 0, 0, 1, 58);
  LoadFromNARC_RGCN(93, 19, *(uint **)(v1 + 12), 7u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 18, *(uint **)(v1 + 12), 3u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 18, *(uint **)(v1 + 12), 7u, 0, 0, 1, 58);
  Call_LoadFromNARC_RLCN(93, 20, 0, 0, 32, 58);
  Call_LoadFromNARC_RLCN(93, 20, 4u, 0, 32, 58);
  Function_20196c0(*(uint **)(v1 + 12), 1, 0, 1, 200);
  Function_20196c0(*(uint **)(v1 + 12), 5, 0, 1, 200);
  Function_20196c0(*(uint **)(v1 + 12), 2, 0, 1, 200);
  Function_22473e8(*(uint *)v1, 0, 1u, 14, 0);
  Function_22473e8(*(uint *)v1, 0, 5u, 14, 0);
  Function_22473e8(*(uint *)v1, 1, 2u, 15, 0);
  Function_2019cb8(*(uint *)(v1 + 12), 1, 200, 0, 0, 0x20u, 0x40u, 0);
  Function_2019cb8(*(uint *)(v1 + 12), 5, 200, 0, 0, 0x20u, 0x40u, 0);
  Function_2019cb8(*(uint *)(v1 + 12), 2, 200, 0, 0, 0x20u, 0x40u, 0);
  Function_22474d4(*(uint *)v1, 0, 1u, 14, 0x14u, 0);
  Function_22474d4(*(uint *)v1, 0, 5u, 14, 0x14u, 0);
  Function_22474d4(*(uint *)v1, 1, 2u, 15, 2u, 0);
  Function_2019448(*(uint **)(v1 + 12), 1u);
  Function_2019448(*(uint **)(v1 + 12), 5u);
  Function_2019448(*(uint **)(v1 + 12), 2u);
  Function_224a358(*(uint *)(v1 + 12));
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0224A320) --------------------------------------------------------
int __fastcall Function_224a320(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(*(uint *)(a1 + 12), 3);
  Function_2019044(*(uint *)(v1 + 12), 7);
  Function_2019044(*(uint *)(v1 + 12), 2);
  Function_2019044(*(uint *)(v1 + 12), 6);
  Function_2019044(*(uint *)(v1 + 12), 1);
  return Function_2019044(*(uint *)(v1 + 12), 5);
}

//----- (0224A358) --------------------------------------------------------
void __fastcall Function_224a358(int a1, short a2, short a3)
{
  int v3;
  int v4;

  v3 = a2 & 0x1FF;
  v4 = a1;
  Function_2019184(a1, 2u, 3u, a3 & 0x1FF);
  Function_2019184(v4, 1u, 3u, v3);
  Function_2019184(v4, 5u, 3u, v3 + 192);
}

//----- (0224A390) --------------------------------------------------------
int __fastcall Function_224a390(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = (int *)malloc(0x3Au, 176);
  v3 = (int)v2;
  if ( v2 )
  {
    *v2 = v1;
    v2[1] = 0;
    v2[9] = Function_2247628(v1);
    *(uint *)(v3 + 40) = 0;
    *(uint *)(v3 + 12) = 0;
    Function_224a848(v3 + 52);
    SetMainLoopFunctionCall((int)Function_224ab50, v3);
  }
  return v3;
}

//----- (0224A3CC) --------------------------------------------------------
uint __fastcall Function_224a3cc(uint result)
{
  int v1;

  v1 = result;
  if ( result )
  {
    SetMainLoopFunctionCall(0, 0);
    Function_224a678(v1);
    Function_224a7a0(v1);
    Function_224a830(v1);
    Function_224a850(v1 + 52);
    result = free(v1);
  }
  return result;
}

//----- (0224A3FC) --------------------------------------------------------
int __fastcall Function_224a3fc(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( *a2 >= 2u )
    return 1;
  if ( ((int (*)(void))*(&off_224C11C + *a2))() )
  {
    ++*v2;
    *(uint *)(v3 + 4) = 0;
  }
  return 0;
}

//----- (0224A42C) --------------------------------------------------------
int __fastcall Function_224a42c(int a1)
{
  int v1;

  v1 = a1;
  Function_224a518();
  Function_224a690(v1);
  Function_224a7b0(v1);
  Function_200f174(0, 1, 1, 0x7FFF, 8, 1, 58);
  return 1;
}

//----- (0224A464) --------------------------------------------------------
int __fastcall Function_224a464(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*a2 )
  {
    case 0u:
      if ( Function_200f2ac() )
      {
        Function_2021d6c(*(uint *)(v3 + 32), 3u);
        Function_2021cac(*(uint *)(v3 + 32), 1);
        ++*v2;
      }
      goto LABEL_10;
    case 1u:
      if ( !Function_2021fd0(*(uint *)(a1 + 32)) )
      {
        Function_2005748(0x6ABu);
        Function_224a864(v3, v3 + 52);
        Function_22479a8(*(uint *)(v3 + 44), 1);
        ++*v2;
      }
      goto LABEL_10;
    case 2u:
      if ( Function_224a924(a1 + 52) )
      {
        Function_200f174(0, 0, 0, 0x7FFF, 16, 1, 58);
        ++*v2;
      }
      goto LABEL_10;
    case 3u:
      if ( !Function_200f2ac() )
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

//----- (0224A518) --------------------------------------------------------
int __fastcall Function_224a518(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;

  v1 = a1;
  GX_SetBanks(dword_224C160);
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  SetGraphicsModes(dword_224C124);
  Function_20183c4(*(uint **)(v1 + 36), 3u, dword_224C144, 0);
  Function_20183c4(*(uint **)(v1 + 36), 7u, dword_224C144, 0);
  switch ( (uchar)Function_2247644(*(uint *)v1) )
  {
    case 1u:
      v6 = 15;
      v2 = 16;
      v3 = 17;
      v4 = 32;
      break;
    case 2u:
      v6 = 15;
      v2 = 16;
      v3 = 17;
      v4 = 64;
      break;
    case 3u:
      v6 = 24;
      v2 = 25;
      v3 = 26;
      v4 = 0;
      break;
    default:
      v6 = 15;
      v2 = 16;
      v3 = 17;
      v4 = 0;
      break;
  }
  LoadFromNARC_RGCN(93, v2, *(uint **)(v1 + 36), 3u, 0, 0, 1, 58);
  LoadFromNARC_RGCN(93, v2, *(uint **)(v1 + 36), 7u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, v6, *(uint **)(v1 + 36), 3u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, v6, *(uint **)(v1 + 36), 7u, 0, 0, 1, 58);
  LoadFromNARC_RLCN(93, v3, 0, v4, 0, 32, 58);
  LoadFromNARC_RLCN(93, v3, 4u, v4, 0, 32, 58);
  Function_2019184(*(uint *)(v1 + 36), 3u, 3u, 0);
  Function_2019184(*(uint *)(v1 + 36), 7u, 3u, 256);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  Function_2039734();
  return Function_20397c8(1, 0x39u);
}

//----- (0224A678) --------------------------------------------------------
int __fastcall Function_224a678(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(*(uint *)(a1 + 36), 3);
  return Function_2019044(*(uint *)(v1 + 36), 7);
}

//----- (0224A690) --------------------------------------------------------
int __fastcall Function_224a690(int a1, int a2, int a3, int a4)
{
  int v4;
  short v5;
  int v6;
  int v7;
  int v8;
  short v10;
  short v11;
  short v12;
  char v13;
  int v14;

  v14 = a4;
  v4 = a1;
  Function_20b28cc();
  G3X_InitMtxStack();
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  v5 = GFX_CONTROL & 0xCFFF;
  v6 = (GFX_CONTROL & 0xCFFF | 8) & 0xCFFF;
  GFX_CONTROL = v6 | 0x20;
  SetEdgeTable((int)dword_224C134, v6 | 0x20, v6, v5);
  G3X_SetClearColor(17407, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  GFX_VIEWPORT = -1073807360;
  Function_20a5a94(1u, 1);
  Function_20a5d88(0x4000, 1);
  Function_201ff0c(1u, 1);
  REG_BG0CNT &= 0xFFFCu;
  *(uint *)(v4 + 40) = Function_22476f0(1u);
  *(uint *)(v4 + 44) = Function_22478b4(*(uint *)(v4 + 40), 0, 93, 27, 0, 0, 0, 0);
  v10 = 6371;
  v11 = 0;
  v12 = 0;
  Function_2247ab0(*(ushort ***)(v4 + 40), &v10);
  v10 = 4432;
  Function_2247ac0(*(ushort ***)(v4 + 40), &v10);
  Function_2247ae0(*(int **)(v4 + 40), 2002);
  return Function_2247a90(*(int **)(v4 + 40), &v13, v7, v8);
}

//----- (0224A7A0) --------------------------------------------------------
int __fastcall Function_224a7a0(int a1)
{
  int result;

  result = *(uint *)(a1 + 40);
  if ( result )
    result = Function_224773c(result);
  return result;
}

//----- (0224A7B0) --------------------------------------------------------
uint __fastcall Function_224a7b0(int *a1)
{
  int *v1;
  uint v2;
  char v4;
  char v5;
  char v6;

  v1 = a1;
  Function_2247568(a1 + 4, 93, 7, 8);
  NNS_G2dInitImagePaletteProxy((int)&v6);
  NNS_G2dInitImageProxy((int)&v5);
  Function_2006f00(93, 9, 1, 0, 0, 1, 0, 58, (int)&v5);
  Function_2006ee0(93, 10, 1, 0, 58, (int)&v6);
  Function_22475c4((int)&v4, (int)(v1 + 4), (int)&v5, (int)&v6, 1);
  v2 = Function_22475e4(*v1, (int)&v4, 128, 96, 0, 1);
  v1[8] = v2;
  return Function_2021cac(v2, 0);
}

//----- (0224A830) --------------------------------------------------------
int __fastcall Function_224a830(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 32);
  if ( v2 )
    Function_2021bd4(v2);
  return Function_22475a0((int *)(v1 + 16));
}

//----- (0224A848) --------------------------------------------------------
int __fastcall Function_224a848(int result)
{
  *(uint *)(result + 4) = 0;
  return result;
}

//----- (0224A850) --------------------------------------------------------
int *__fastcall Function_224a850(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = *(int **)(a1 + 4);
  if ( result )
  {
    Call_RemoveTaskFromTaskList(result);
    result = 0;
    *(uint *)(v1 + 4) = 0;
  }
  return result;
}

//----- (0224A864) --------------------------------------------------------
uint *__fastcall Function_224a864(int a1, int a2)
{
  int v2;
  uint *result;

  v2 = a2;
  *(uint *)a2 = a1;
  *(uint *)(a2 + 12) = *(uint *)(a1 + 44);
  *(uint *)(a2 + 8) = *(uint *)(a1 + 40);
  *(uint *)(a2 + 16) = 0;
  *(uint *)(a2 + 20) = 4025344;
  *(uint *)(a2 + 24) = -1818624;
  *(ushort *)(a2 + 120) = -10128;
  *(ushort *)(a2 + 122) = -2736;
  *(uint *)(a2 + 60) = -68922;
  *(uint *)(a2 + 64) = 37741;
  *(uint *)(a2 + 108) = 0;
  *(uint *)(a2 + 112) = 0;
  *(uint *)(a2 + 116) = 0;
  *(ushort *)(a2 + 52) = 0x2000;
  *(ushort *)(a2 + 54) = -8192;
  *(ushort *)(a2 + 56) = 0;
  Function_2247990(*(ushort **)(a2 + 12), (ushort *)(a2 + 52));
  *(uint *)(v2 + 92) = 512;
  *(uint *)(v2 + 68) = 2048;
  *(uint *)(v2 + 72) = 2048;
  *(uint *)(v2 + 104) = 0;
  Function_224a934(v2, 75776, 101376, 4096, 12);
  Function_224a978(v2);
  Function_2247968(*(uint **)(v2 + 12), (int *)(v2 + 40));
  Function_2247978(*(ushort **)(v2 + 12), (ushort *)(v2 + 52));
  result = AddTaskToTaskList1((int)Function_224aa70, v2, 0);
  *(uint *)(v2 + 4) = result;
  return result;
}

//----- (0224A924) --------------------------------------------------------
BOOL __fastcall Function_224a924(int a1)
{
  return *(uint *)(a1 + 4) == 0;
}

//----- (0224A934) --------------------------------------------------------
int __fastcall Function_224a934(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int result;
  int v7;
  int v8;
  int v9;

  v5 = a1;
  result = a5;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  if ( a5 )
  {
    v5[19] = s32_div_f(a2 - v5[17], a5);
    v5[20] = s32_div_f(v8 - v5[18], a5);
    v5[24] = s32_div_f(v9 - v5[23], a5);
    v5[21] = v7;
    v5[22] = v8;
    result = a5;
    v5[25] = v9;
    v5[26] = a5;
  }
  return result;
}

//----- (0224A978) --------------------------------------------------------
int __fastcall Function_224a978(int a1)
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

  v1 = a1;
  v2 = s32_div_f(*(ushort *)(a1 + 120), 182);
  if ( v2 >= 360 )
    LOWORD(v2) = v2 - 360;
  *(ushort *)(v1 + 120) -= *(ushort *)(v1 + 122);
  v3 = *(uint *)(v1 + 104);
  if ( v3 )
  {
    v4 = v3 - 1;
    *(uint *)(v1 + 104) = v4;
    if ( v4 )
    {
      *(uint *)(v1 + 68) += *(uint *)(v1 + 76);
      *(uint *)(v1 + 72) += *(uint *)(v1 + 80);
      v5 = *(uint *)(v1 + 92) + *(uint *)(v1 + 96);
    }
    else
    {
      *(uint *)(v1 + 68) = *(uint *)(v1 + 84);
      *(uint *)(v1 + 72) = *(uint *)(v1 + 88);
      v5 = *(uint *)(v1 + 100);
    }
    *(uint *)(v1 + 92) = v5;
    Function_22479d4(*(uint **)(v1 + 12), *(uint *)(v1 + 92));
  }
  v6 = *(uint *)(v1 + 68);
  v7 = Function_201d1d4((ushort)v2);
  *(uint *)(v1 + 28) = (ll_mul(v7, v6) + 2048) >> 12;
  v8 = *(uint *)(v1 + 72);
  v9 = Function_201d15c((ushort)v2);
  *(uint *)(v1 + 32) = (ll_mul(v9, v8) + 2048) >> 12;
  *(uint *)(v1 + 36) = 0;
  *(ushort *)(v1 + 52) -= 768;
  Function_2247990(*(ushort **)(v1 + 12), (ushort *)(v1 + 52));
  return VEC_Add((uint *)(v1 + 28), (uint *)(v1 + 16), (uint *)(v1 + 40));
}

//----- (0224AA70) --------------------------------------------------------
int *__fastcall Function_224aa70(int *result, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a2[29];
  if ( v5 < 70 )
    v4[29] = v5 + 1;
  v6 = v4[27];
  switch ( (uchar)v6 )
  {
    case 0:
      Function_224a978((int)v4);
      Function_2247968((uint *)v4[3], v4 + 10);
      result = (int *)(v4[29] + 1);
      v4[29] = result;
      if ( (int)result >= 12 )
      {
        v4[29] = 0;
        result = (int *)(v4[27] + 1);
        v4[27] = result;
      }
      break;
    case 1:
      if ( Function_22479dc(v4[3], v6, a3, a4) )
      {
        v4[5] += v4[15];
        v4[6] += v4[16];
        Function_224a978((int)v4);
        result = (int *)Function_2247968((uint *)v4[3], v4 + 10);
      }
      else
      {
        Function_224ab48(*v4);
        result = (int *)(v4[27] + 1);
        v4[27] = result;
      }
      break;
    case 2:
      v4[5] += v4[15];
      v4[6] += v4[16];
      Function_224a978((int)v4);
      Function_2247968((uint *)v4[3], v4 + 10);
      result = (int *)v4[29];
      if ( (int)result >= 70 )
      {
        Function_22479a8(v4[3], 0);
        v4[28] = 0;
        result = (int *)(v4[27] + 1);
        v4[27] = result;
      }
      break;
    case 3:
      v7 = v4[28] + 1;
      v4[28] = v7;
      if ( v7 > 8 )
      {
        v4[1] = 0;
        result = (int *)Call_RemoveTaskFromTaskList(result);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0224AB48) --------------------------------------------------------
int __fastcall Function_224ab48(int result)
{
  *(uint *)(result + 12) = 1;
  return result;
}

//----- (0224AB50) --------------------------------------------------------
int __fastcall Function_224ab50(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int result;
  short v6;
  short v7;
  short v8;

  v1 = a1;
  if ( a1[10] )
  {
    G3X_Reset();
    Function_2247770(v1[10], v2, v3, v4);
    Function_20241bc(0, 0);
  }
  result = v1[3];
  if ( result )
  {
    v6 = -4432;
    v7 = 0;
    v8 = 0;
    Function_2019184(v1[9], 3u, 3u, 256);
    Function_2019184(v1[9], 7u, 3u, 0);
    Function_2247ac0((ushort **)v1[10], &v6);
    REG_POWERCNT &= 0x7FFFu;
    result = 0;
    v1[3] = 0;
  }
  return result;
}

//----- (0224ABC0) --------------------------------------------------------
int *__fastcall Function_224abc0(int a1)
{
  int v1;
  int *v2;
  int *v3;

  v1 = a1;
  v2 = (int *)malloc(0x3Au, 60);
  v3 = v2;
  if ( v2 )
  {
    *v2 = v1;
    v2[1] = 0;
    v2[3] = Function_2247628(v1);
    v3[8] = 0;
    v3[4] = 0;
    v3[5] = 0;
    v3[6] = 0;
    v3[12] = 0;
    v3[13] = 0;
    v3[14] = 0;
  }
  return v3;
}

//----- (0224ABF4) --------------------------------------------------------
uint __fastcall Function_224abf4(uint result)
{
  uint *v1;

  v1 = (uint *)result;
  if ( result )
  {
    Function_224b050();
    Function_224b194(v1);
    if ( v1[12] )
      Function_224b308();
    if ( v1[13] )
      Function_224b258();
    if ( v1[14] )
      Function_224b3bc();
    result = free((int)v1);
  }
  return result;
}

//----- (0224AC2C) --------------------------------------------------------
int __fastcall Function_224ac2c(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( *a2 >= 3u )
    return 1;
  if ( ((int (*)(void))*(&off_224C190 + *a2))() )
  {
    ++*v2;
    *(uint *)(v3 + 4) = 0;
  }
  Function_224ac64(v3);
  return 0;
}

//----- (0224AC64) --------------------------------------------------------
int __fastcall Function_224ac64(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = *(uint *)(a1 + 32);
  if ( result )
  {
    *(ushort *)(v1 + 42) += 4096;
    Function_2247990(*(ushort **)(v1 + 36), (ushort *)(v1 + 40));
    G3X_Reset();
    Function_2247770(*(uint *)(v1 + 32), v3, v4, v5);
    result = Function_20241bc(0, 0);
  }
  return result;
}

//----- (0224AC98) --------------------------------------------------------
int __fastcall Function_224ac98(int a1)
{
  int v1;

  v1 = a1;
  Function_224ae1c();
  Function_224b084(v1);
  Function_200f174(0, 1, 1, 0x7FFF, 8, 1, 58);
  return 1;
}

//----- (0224ACC8) --------------------------------------------------------
int __fastcall Function_224acc8(uint *a1, uint *a2, char a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int result;

  v4 = a2;
  v5 = *a2;
  v6 = a1;
  switch ( a3 )
  {
    case 0:
      if ( Function_200f2ac() )
      {
        v6[2] = 0;
        Function_224b274(v6, v6 + 12);
        ++*v4;
      }
      goto LABEL_16;
    case 1:
      v7 = a1[2] + 1;
      a1[2] = v7;
      if ( v7 > 8 )
      {
        Function_224b1a8();
        ++*v4;
      }
      goto LABEL_16;
    case 2:
      if ( !a1[13] && !a1[12] )
        *v4 = v5 + 1;
      goto LABEL_16;
    case 3:
      a1[4] = Function_2246f30(a1 + 5, -1, a3, a4);
      v6[2] = 0;
      ++*v4;
      goto LABEL_16;
    case 4:
      v8 = a1[2] + 1;
      v6[2] = v8;
      if ( v8 > 30 )
      {
        Function_224b324(v6[9], 31, 0, 40);
        ++*v4;
      }
      goto LABEL_16;
    case 5:
      if ( !a1[14] )
      {
        Function_2247004(a1[4]);
        ++*v4;
      }
      goto LABEL_16;
    case 6:
      if ( a1[5] )
        goto LABEL_16;
      result = 1;
      break;
    default:
LABEL_16:
      result = 0;
      break;
  }
  return result;
}

//----- (0224AD98) --------------------------------------------------------
int __fastcall Function_224ad98(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( *a2 )
  {
    if ( v4 == 1 )
    {
      v5 = v3[2] + 1;
      v3[2] = v5;
      if ( v5 > 13 )
      {
        Function_200f174(0, 0, 0, 0, 8, 1, 58);
        ++*v2;
      }
    }
    else if ( v4 == 2 && Function_200f2ac() && v3[7] )
    {
      return 1;
    }
  }
  else
  {
    v3[6] = Function_22472c4(v3[3], 4096, 1024, 1, 296, 1, v3 + 7);
    v3[2] = 0;
    ++*v2;
  }
  return 0;
}

//----- (0224AE1C) --------------------------------------------------------
uint __fastcall Function_224ae1c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint *v5;

  v1 = a1;
  GX_SetBanks(dword_224C1F4);
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  SetGraphicsModes(dword_224C19C);
  Function_20183c4(*(uint **)(v1 + 12), 2u, dword_224C1BC, 1);
  Function_20183c4(*(uint **)(v1 + 12), 6u, dword_224C1BC, 1);
  v2 = OS_DisableInterrupts();
  Function_20183c4(*(uint **)(v1 + 12), 3u, dword_224C1D8, 2);
  Function_20183c4(*(uint **)(v1 + 12), 7u, dword_224C1D8, 2);
  OS_RestoreInterrupts(v2);
  LoadFromNARC_RGCN(93, 2, *(uint **)(v1 + 12), 2u, 0, 0, 1, 58);
  LoadFromNARC_RGCN(93, 2, *(uint **)(v1 + 12), 6u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 1, *(uint **)(v1 + 12), 2u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 1, *(uint **)(v1 + 12), 6u, 0, 0, 1, 58);
  v3 = Function_2247644(*(uint *)v1);
  Call_LoadFromNARC_RLCN(93, 3, 0, 0, 32, 58);
  Call_LoadFromNARC_RLCN(93, 3, 4u, 0, 32, 58);
  v4 = *((ushort *)dword_224C188 + v3);
  LoadFromNARC_RLCN(93, 3, 0, v4, 32, 64, 58);
  LoadFromNARC_RLCN(93, 3, 4u, v4, 32, 64, 58);
  LoadFromNARC_RGCN(93, 5, *(uint **)(v1 + 12), 3u, 0, 0, 1, 58);
  LoadFromNARC_RGCN(93, 5, *(uint **)(v1 + 12), 7u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 4, *(uint **)(v1 + 12), 3u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 4, *(uint **)(v1 + 12), 7u, 0, 0, 1, 58);
  v5 = (uint *)malloc(0x3Au, 96);
  if ( v5 )
  {
    MIi_CpuClear32(0, v5, 96);
    DC_FlushRange((int)v5, 96);
    GX_BeginLoadBGExtPltt();
    GXS_BeginLoadBGExtPltt();
    GX_LoadBGExtPltt((int)v5, 24576, 96);
    GXS_LoadBGExtPltt((int)v5, 24576, 96);
    GX_EndLoadBGExtPltt();
    GXS_EndLoadBGExtPltt();
    free((int)v5);
  }
  Function_2019184(*(uint *)(v1 + 12), 2u, 3u, -384);
  Function_2019184(*(uint *)(v1 + 12), 6u, 3u, -192);
  Function_2019184(*(uint *)(v1 + 12), 3u, 3u, 67);
  Function_2019120(7u, 0);
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0224B050) --------------------------------------------------------
int __fastcall Function_224b050(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 20) )
    Function_2247018(*(uint *)(a1 + 16));
  Function_2019044(*(uint *)(v1 + 12), 2);
  Function_2019044(*(uint *)(v1 + 12), 6);
  Function_2019044(*(uint *)(v1 + 12), 3);
  return Function_2019044(*(uint *)(v1 + 12), 7);
}

//----- (0224B084) --------------------------------------------------------
int __fastcall Function_224b084(int a1)
{
  int v1;
  short v2;
  int v3;

  v1 = a1;
  Function_20b28cc();
  G3X_InitMtxStack();
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  v2 = GFX_CONTROL & 0xCFFF;
  v3 = (GFX_CONTROL & 0xCFFF | 8) & 0xCFFF;
  GFX_CONTROL = v3 | 0x20;
  SetEdgeTable((int)dword_224C1AC, v3 | 0x20, v3, v2);
  G3X_SetClearColor(17407, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  GFX_VIEWPORT = -1073807360;
  Function_20a5a94(1u, 1);
  Function_20a5d88(0x4000, 1);
  Function_201ff0c(1u, 1);
  REG_BG0CNT &= 0xFFFCu;
  *(uint *)(v1 + 32) = Function_22476f0(1u);
  *(uint *)(v1 + 36) = Function_22478b4(*(uint *)(v1 + 32), 0, 93, 27, 0, 573440, 0, 1);
  dword_224C2E0[36] = 0;
  LOWORD(dword_224C2E0[37]) = 0;
  Function_2247ab0(*(ushort ***)(v1 + 32), &dword_224C2E0[36]);
  Function_2247ad0(*(int ***)(v1 + 32), 1);
  Function_22479d4(*(uint **)(v1 + 36), 0x2000);
  return Function_2247978(*(ushort **)(v1 + 36), (ushort *)(v1 + 40));
}

//----- (0224B194) --------------------------------------------------------
int __fastcall Function_224b194(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 32);
  if ( result )
  {
    Function_224773c(result);
    result = 0;
    *(uint *)(v1 + 32) = 0;
  }
  return result;
}

//----- (0224B1A8) --------------------------------------------------------
uint *__fastcall Function_224b1a8(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint *result;
  int v5;

  v2 = a1;
  v3 = a2;
  result = (uint *)malloc(0x3Au, 36);
  v5 = (int)result;
  if ( result )
  {
    *result = v2;
    result[1] = *(uint *)(v2 + 12);
    result[3] = -1572864;
    result[4] = -786432;
    result[5] = 39321;
    result[2] = 40;
    result[7] = v3;
    result = AddTaskToTaskList2((int)Function_224b1f8, (int)result, 0);
    *v3 = result;
    if ( !result )
      result = (uint *)free(v5);
  }
  return result;
}

//----- (0224B1F8) --------------------------------------------------------
int __fastcall Function_224b1f8(int a1, int *a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2[2] )
  {
    a2[3] += a2[5];
    a2[4] += a2[5];
    Function_2019184(a2[1], 2u, 3u, a2[3] >> 12);
    Function_2019184(v2[1], 6u, 3u, v2[4] >> 12);
    result = v2[2] - 1;
    v2[2] = result;
  }
  else
  {
    Function_2019184(a2[1], 2u, 3u, 0);
    Function_2019184(v2[1], 6u, 3u, 192);
    result = Function_224b258(v3);
  }
  return result;
}

//----- (0224B258) --------------------------------------------------------
int __fastcall Function_224b258(int result)
{
  int *v1;
  int v2;

  v1 = (int *)result;
  if ( result )
  {
    v2 = Function_201ced0(result);
    **(uint **)(v2 + 28) = 0;
    Function_22476c8(v2);
    result = Call_RemoveTaskFromTaskList(v1);
  }
  return result;
}

//----- (0224B274) --------------------------------------------------------
uint *__fastcall Function_224b274(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint *result;
  uint *v5;
  uint *v6;

  v2 = a1;
  v3 = a2;
  result = (uint *)malloc(0x3Au, 28);
  v5 = result;
  if ( result )
  {
    *result = v3;
    v6 = *(uint **)(v2 + 36);
    v5[2] = v6;
    Function_2247958(v6, v5 + 3);
    v5[6] = (204800 - v5[4]) / 16;
    v5[1] = 16;
    result = AddTaskToTaskList1((int)Function_224b2c8, (int)v5, 0);
    *v3 = result;
    if ( !result )
      result = (uint *)free((int)v5);
  }
  return result;
}

//----- (0224B2C8) --------------------------------------------------------
int __fastcall Function_224b2c8(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 4) )
  {
    *(uint *)(a2 + 16) += *(uint *)(a2 + 24);
    Function_2247968(*(uint **)(a2 + 8), (int *)(a2 + 12));
    result = *(uint *)(v2 + 4) - 1;
    *(uint *)(v2 + 4) = result;
  }
  else
  {
    *(uint *)(a2 + 16) = 204800;
    Function_2247968(*(uint **)(a2 + 8), (int *)(a2 + 12));
    result = Function_224b308(v3);
  }
  return result;
}

//----- (0224B308) --------------------------------------------------------
int __fastcall Function_224b308(int result)
{
  int *v1;
  uint **v2;

  v1 = (int *)result;
  if ( result )
  {
    v2 = (uint **)Function_201ced0(result);
    **v2 = 0;
    free((int)v2);
    result = Call_RemoveTaskFromTaskList(v1);
  }
  return result;
}

//----- (0224B324) --------------------------------------------------------
uint *__fastcall Function_224b324(int a1, int a2, int a3, int a4, uint *a5)
{
  int v5;
  int v6;
  uint *v7;
  int v8;
  uint *result;
  int v10;
  int v11;

  v10 = a1;
  v5 = a2;
  v11 = a3;
  v6 = a4;
  v7 = (uint *)malloc(0x3Au, 24);
  v8 = (int)v7;
  if ( v7 )
  {
    *v7 = a5;
    v7[1] = v5 << 12;
    v7[3] = v11 << 12;
    v7[2] = s32_div_f((v11 << 12) - v7[1], v6);
    *(uint *)(v8 + 16) = v6;
    *(uint *)(v8 + 20) = v10;
    Function_22479ac(v10, v5);
    result = AddTaskToTaskList1((int)Function_224b388, v8, 0);
    *a5 = result;
    if ( !result )
      result = (uint *)free(v8);
  }
  else
  {
    result = 0;
    *a5 = 0;
  }
  return result;
}

//----- (0224B388) --------------------------------------------------------
int __fastcall Function_224b388(int a1, uint *a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2[4] - 1;
  a2[4] = v3;
  if ( v3 <= 0 )
  {
    Function_22479ac(a2[5], a2[3] >> 12);
    result = Function_224b3bc(v2);
  }
  else
  {
    v4 = a2[1] + a2[2];
    a2[1] = v4;
    result = Function_22479ac(a2[5], v4 >> 12);
  }
  return result;
}

//----- (0224B3BC) --------------------------------------------------------
int __fastcall Function_224b3bc(int result)
{
  int *v1;
  uint **v2;

  v1 = (int *)result;
  if ( result )
  {
    v2 = (uint **)Function_201ced0(result);
    **v2 = 0;
    free((int)v2);
    result = Call_RemoveTaskFromTaskList(v1);
  }
  return result;
}

//----- (0224B3D8) --------------------------------------------------------
int *__fastcall Function_224b3d8(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = (int *)malloc(0x3Au, 136);
  v3 = v2;
  if ( v2 )
  {
    *v2 = v1;
    v2[1] = 0;
    v2[22] = Function_2247628(v1);
    v3[4] = Function_200762c(0x3Au, v4, v5, v6);
    v3[5] = 0;
    v3[27] = Function_2023790(300, 0x3Au);
    v3[28] = Function_2023790(300, 0x3Au);
    v3[31] = 0;
    v3[32] = 0;
    v3[29] = 0;
    v3[33] = (int)LoadFromNARC_8(147, 0x3Au, v7, v8);
  }
  return v3;
}

//----- (0224B438) --------------------------------------------------------
uint __fastcall Function_224b438(uint result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint *v5;

  v1 = result;
  if ( result )
  {
    Function_224bc10();
    Function_224bb8c(v1);
    Function_224bce8(*(uint *)(v1 + 128));
    Function_20237bc_FreeMsg(*(uint *)(v1 + 108), v2);
    Function_20237bc_FreeMsg(*(uint *)(v1 + 112), v3);
    v4 = *(uint *)(v1 + 116);
    if ( v4 )
      Function_224773c(v4);
    Function_2019044(*(uint *)(v1 + 88), 1);
    Function_201a8fc(v1 + 92);
    v5 = *(uint **)(v1 + 20);
    if ( v5 )
      Function_2007dc8(v5);
    Call_FS_CloseFile(*(int **)(v1 + 132));
    Function_2007b6c(*(uint *)(v1 + 16));
    result = free(v1);
  }
  return result;
}

//----- (0224B49C) --------------------------------------------------------
int __fastcall Function_224b49c(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( *a2 >= 4u )
    return 1;
  if ( (*((int (**)(void))&loc_224C224 + *a2))() )
  {
    ++*v2;
    *(uint *)(v3 + 4) = 0;
  }
  Function_224b4d4(v3);
  return 0;
}

//----- (0224B4D4) --------------------------------------------------------
int __fastcall Function_224b4d4(int a1, int a2, int a3, int a4)
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
  int v13;
  int v14;
  int v15;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  G3X_Reset();
  v5 = Function_20b275c(17, 0, 0);
  v8 = Function_20b2628((int)v5, v6, v7);
  Function_20a73c0(v8, v9, v10, v11);
  Function_2008a94(*(uint *)(v4 + 16));
  Function_2007768(*(uint *)(v4 + 16));
  v17 = 1;
  Function_20b275c(18, (int)&v17, 1);
  v15 = *(uint *)(v4 + 116);
  if ( v15 )
    Function_2247770(v15, v12, v13, v14);
  return Function_20241bc(0, 0);
}

//----- (0224B520) --------------------------------------------------------
int __fastcall Function_224b520(int a1, int a2, int a3, int a4)
{
  int v4;
  uchar v5;
  int v6;
  short v8;
  short v9;
  short v10;
  int v11;

  v11 = a4;
  v4 = a1;
  GX_SetBanks(dword_224C27C);
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  SetGraphicsModes(dword_224C234);
  Function_20183c4(*(uint **)(v4 + 88), 1u, dword_224C244, 0);
  Function_20183c4(*(uint **)(v4 + 88), 2u, dword_224C260, 0);
  Function_201ff0c(1u, 1);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  Function_20196c0(*(uint **)(v4 + 88), 1, 0, 1, 0);
  Function_2019cb8(*(uint *)(v4 + 88), 1, 0, 0, 0, 0x20u, 0x20u, 0);
  v5 = Function_2247674(*(uint *)v4);
  Function_200dd0c(*(uint **)(v4 + 88), 1u, 109, 2, v5, 58);
  Function_201a7e8(*(uint **)(v4 + 88), v4 + 92, 1, 2, 19, 0x1Bu, 4u, 1, 1);
  Function_201ada4_ClearTextBox(v4 + 92, 15);
  Call_LoadFromNARC_RLCN(14, 7, 0, 32, 32, 58);
  Function_2019448(*(uint **)(v4 + 88), 1u);
  LoadFromNARC_RGCN(93, 22, *(uint **)(v4 + 88), 2u, 0, 0, 1, 58);
  LoadFromNARC_RCSN(93, 21, *(uint **)(v4 + 88), 2u, 0, 0, 1, 58);
  Call_LoadFromNARC_RLCN(93, 23, 0, 0, 32, 58);
  Function_224b9c0(v4);
  *(uint *)(v4 + 116) = Function_22476f0(1u);
  v6 = Function_224ba8c(v4);
  *(uint *)(v4 + 20) = v6;
  Function_2007dec(v6, 6u, 1);
  *(uint *)(v4 + 120) = Function_22478b4(*(uint *)(v4 + 116), 0, 93, 27, 0, 77824, 491520, 0);
  v8 = 0;
  v9 = -4096;
  v10 = 0;
  Function_2247990(*(ushort **)(v4 + 120), &v8);
  Function_224bae8(v4);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 1, 4, 16, 0);
  Function_200f174(3u, 1, 1, 0, 16, 1, 58);
  return 1;
}

//----- (0224B6F0) --------------------------------------------------------
int __fastcall Function_224b6f0(int a1, uint *a2)
{
  int v2;

  v2 = a1;
  if ( *a2 || !Function_200f2ac() )
    return 0;
  Function_2021d6c(*(uint *)(v2 + 64), 1u);
  Function_2021cac(*(uint *)(v2 + 64), 1);
  return 1;
}

//----- (0224B71C) --------------------------------------------------------
int __fastcall Function_224b71c(int *a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uchar v10;
  int v11;
  int result;
  uchar v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_224bc6c();
      ++*v4;
      goto LABEL_3;
    case 1u:
LABEL_3:
      if ( !v5[32] )
      {
        Function_2021d6c(v5[17], 2u);
        Function_2021cac(v5[17], 1);
        Function_22479a8(v5[30], 0);
        v5[2] = 0;
        ++*v4;
      }
      goto LABEL_13;
    case 2u:
      v6 = a1[2] + 1;
      v5[2] = v6;
      if ( v6 > 10 )
      {
        Function_2007dec(v5[5], 6u, 0);
        Function_224bbb0(v5, 16, 0, 12);
        ++v5[1];
      }
      goto LABEL_13;
    case 3u:
      if ( Function_224bc00() )
      {
        v7 = Function_224763c(*v5);
        if ( !GetBoxPkmnData(v7, 0x4Cu, 0) )
        {
          v8 = Function_2247660(*v5);
          Function_2078a4c(v5[33], &v13, v8, 1);
          v9 = Function_2247660(*v5);
          v10 = Function_2247668(*v5);
          Function_200590c(v9, v13, v10);
          Function_2007b98(v5[5]);
        }
        v5[2] = 0;
        ++*v4;
      }
      goto LABEL_13;
    case 4u:
      v11 = a1[2] + 1;
      v5[2] = v11;
      if ( v11 <= 30 )
        goto LABEL_13;
      result = 1;
      break;
    default:
LABEL_13:
      result = 0;
      break;
  }
  return result;
}

//----- (0224B81C) --------------------------------------------------------
int __fastcall Function_224b81c(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  uint *v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  ushort **v10;
  uint *v11;
  int v12;
  int v13;
  int result;
  ushort **v15;

  v2 = a2;
  v3 = a1;
  switch ( (uchar)*a2 )
  {
    case 0u:
      *(uint *)(a1 + 8) = 0;
      ++*a2;
      goto LABEL_16;
    case 1u:
      v4 = *(uint *)(a1 + 8) + 1;
      *(uint *)(v3 + 8) = v4;
      if ( v4 > 10 )
      {
        v15 = (ushort **)Function_2247630(*(uint *)v3);
        v5 = (uint *)Function_224762c(*(uint *)v3);
        if ( Function_2247680(*(uint *)v3) == 1 )
        {
          v6 = 2;
          v7 = 2;
        }
        else
        {
          v6 = 5;
          v7 = 3;
        }
        Function_200b1b8_CallMsgDecrypt(v15, v6, *(ushort **)(v3 + 108));
        Function_200c388(v5, *(uint *)(v3 + 112), *(uint *)(v3 + 108));
        v8 = *(uint *)(v3 + 112);
        Function_201d738_CallInitTextInterpreter(v3 + 92, 1);
        Function_200e010(v3 + 92, 109, 2u);
        Function_201a954(v3 + 92, v9);
        Function_2006150(0x484u);
        *(uint *)(v3 + 8) = 0;
        *(uint *)(v3 + 12) = 1;
        *v2 = v7;
      }
      goto LABEL_16;
    case 2u:
      if ( Call_BattleJumpTable() )
      {
        v10 = (ushort **)Function_2247630(*(uint *)v3);
        v11 = (uint *)Function_224762c(*(uint *)v3);
        Function_200b1b8_CallMsgDecrypt(v10, 3u, *(ushort **)(v3 + 108));
        Function_200c388(v11, *(uint *)(v3 + 112), *(uint *)(v3 + 108));
        Function_201ada4_ClearTextBox(v3 + 92, 15);
        v12 = *(uint *)(v3 + 112);
        Function_201d738_CallInitTextInterpreter(v3 + 92, 1);
        Function_201accc(v3 + 92);
        *(uint *)(v3 + 8) = 0;
        ++*v2;
      }
      goto LABEL_16;
    case 3u:
      if ( Call_BattleJumpTable() )
      {
        Function_200e084(v3 + 92, 0);
        *(uint *)(v3 + 8) = 0;
        ++*v2;
      }
      goto LABEL_16;
    case 4u:
      v13 = *(uint *)(a1 + 8) + 1;
      *(uint *)(v3 + 8) = v13;
      if ( v13 > 10 )
      {
        Function_200f174(3u, 0, 0, 0, 16, 1, 58);
        ++*v2;
      }
      goto LABEL_16;
    case 5u:
      if ( !Function_200f2ac() )
        goto LABEL_16;
      result = 1;
      break;
    default:
LABEL_16:
      result = 0;
      break;
  }
  return result;
}

//----- (0224B990) --------------------------------------------------------
BOOL __fastcall Call_BattleJumpTable(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( *(uint *)(a1 + 12) )
    *(uint *)(a1 + 12) = Function_20061e4();
  v4 = *(uint *)(v2 + 8);
  if ( v4 >= v3 )
    return *(uint *)(v2 + 12) == 0;
  *(uint *)(v2 + 8) = v4 + 1;
  return 0;
}

//----- (0224B9C0) --------------------------------------------------------
int __fastcall Function_224b9c0(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_20b28cc();
  G3X_InitMtxStack();
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  G3X_SetClearColor(0, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  GFX_VIEWPORT = -1073807360;
  Function_20a5a94(1u, 1);
  Function_20a5d88(0x4000, 1);
  v2 = Function_20a5a2c();
  v3 = Function_20a5a3c();
  Function_2008a78(*(uint *)(v1 + 16), 8 * v2 & 0x7FFFF, 16 * ((v2 & 0x7FFF0000u) >> 16));
  return Function_2008a84(*(uint *)(v1 + 16), 8 * v3 & 0x7FFFF, 8 * ((v3 & 0xFFFF0000) >> 16));
}

//----- (0224BA8C) --------------------------------------------------------
int __fastcall Function_224ba8c(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  short v7;
  char v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = Function_224763c(*a1);
  Function_2075f0c((int)&v9, v5, 2u, 0);
  v6 = Function_2247660(*v4);
  Function_20789bc(v4[33], (uint)(v4 + 6), v6, 1);
  v7 = Function_20765c4(v5, 2u, 0);
  return Function_2007c34((uint *)v4[4], &v9, 128, v7 + 80, 0, 0, (int)(v4 + 6), 0);
}

//----- (0224BAE8) --------------------------------------------------------
uint __fastcall Function_224bae8(int a1)
{
  int v1;
  int v2;
  char v4;
  char v5;
  char v6;

  v1 = a1;
  Function_2247568((int *)(a1 + 72), 93, 7, 8);
  NNS_G2dInitImagePaletteProxy((int)&v6);
  NNS_G2dInitImageProxy((int)&v5);
  Function_2006f00(93, 9, 1, 0, 0, 1, 0, 58, (int)&v5);
  Function_2006ee0(93, 10, 1, 0, 58, (int)&v6);
  Function_22475c4((int)&v4, v1 + 72, (int)&v5, (int)&v6, 2);
  *(uint *)(v1 + 64) = Function_22475e4(*(uint *)v1, (int)&v4, 128, 100, 0, 1);
  v2 = Function_22475e4(*(uint *)v1, (int)&v4, 128, 90, 0, 1);
  *(uint *)(v1 + 68) = v2;
  Function_2021e80(v2, 1);
  Function_2021cac(*(uint *)(v1 + 64), 0);
  return Function_2021cac(*(uint *)(v1 + 68), 0);
}

//----- (0224BB8C) --------------------------------------------------------
int __fastcall Function_224bb8c(int a1)
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
    v4 = *(uint *)(v3 + 64);
    if ( v4 )
      Function_2021bd4(v4);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 2 );
  return Function_22475a0((int *)(v1 + 72));
}

//----- (0224BBB0) --------------------------------------------------------
uint *__fastcall Function_224bbb0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *result;
  int v8;
  int v9;

  v4 = a1;
  v5 = a2;
  v9 = a3;
  v6 = a4;
  result = (uint *)malloc(0x3Au, 20);
  v8 = (int)result;
  if ( result )
  {
    *result = v4;
    result[1] = v5 << 12;
    result[2] = v9 << 12;
    result[3] = s32_div_f((v9 << 12) - result[1], v6);
    *(uint *)(v8 + 16) = v6;
    *(uint *)(v4 + 124) = AddTaskToTaskList2((int)Function_224bc30, v8, 0);
    result = G2x_SetBlendBrightness_(&REG_BLDCNT, 1, v5);
  }
  return result;
}

//----- (0224BC00) --------------------------------------------------------
BOOL __fastcall Function_224bc00(int a1)
{
  return *(uint *)(a1 + 124) == 0;
}

//----- (0224BC10) --------------------------------------------------------
int __fastcall Function_224bc10(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = *(uint *)(a1 + 124);
  if ( result )
  {
    v3 = Function_201ced0(result);
    Function_22476c8(v3);
    Call_RemoveTaskFromTaskList(*(int **)(v1 + 124));
    result = 0;
    *(uint *)(v1 + 124) = 0;
  }
  return result;
}

//----- (0224BC30) --------------------------------------------------------
ushort *__fastcall Function_224bc30(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  ushort *result;

  v2 = a2;
  v3 = a2[4] - 1;
  a2[4] = v3;
  if ( v3 <= 0 )
  {
    G2x_SetBlendBrightness_(&REG_BLDCNT, 1, a2[2] >> 12);
    result = (ushort *)Function_224bc10(*v2);
  }
  else
  {
    v4 = a2[1];
    v5 = v2[3];
    v2[1] = v4 + v5;
    result = G2x_SetBlendBrightness_(&REG_BLDCNT, 1, (v4 + v5) >> 12);
  }
  return result;
}

//----- (0224BC6C) --------------------------------------------------------
uint *__fastcall Function_224bc6c(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = malloc(0x3Au, 68);
  v5 = v4;
  if ( v4 )
  {
    *(uint *)(v4 + 4) = 0;
    *(uint *)v4 = v3;
    *(uint *)(v4 + 16) = *(uint *)(v2 + 116);
    *(uint *)(v4 + 20) = *(uint *)(v2 + 120);
    *(uint *)(v4 + 8) = v2;
    *(uint *)(v4 + 24) = 0;
    *(uint *)(v4 + 28) = 6348;
    *(uint *)(v4 + 32) = 20;
    *(ushort *)(v4 + 58) = 4096;
    *(uint *)(v4 + 64) = 0;
    Function_22479ac(*(uint *)(v4 + 20), 0);
    Function_22479a8(*(uint *)(v5 + 20), 1);
    Function_2247958(*(uint **)(v5 + 20), (uint *)(v5 + 36));
    Function_2247978(*(ushort **)(v5 + 20), (ushort *)(v5 + 52));
    result = AddTaskToTaskList1((int)Function_224bd5c, v5, 0);
    *v3 = result;
    if ( !result )
      result = (uint *)free(v5);
  }
  else
  {
    result = 0;
    *v3 = 0;
  }
  return result;
}

//----- (0224BCE8) --------------------------------------------------------
int __fastcall Function_224bce8(int result)
{
  int *v1;
  uint **v2;

  v1 = (int *)result;
  if ( result )
  {
    v2 = (uint **)Function_201ced0(result);
    **v2 = 0;
    free((int)v2);
    result = Call_RemoveTaskFromTaskList(v1);
  }
  return result;
}

//----- (0224BD04) --------------------------------------------------------
ushort *__fastcall Function_224bd04(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( *(uint *)(a1 + 64) )
  {
    *(ushort *)(a1 + 58) += *(ushort *)(a1 + 60);
    v2 = *(uint *)(a1 + 64) - 1;
    *(uint *)(v1 + 64) = v2;
    if ( !v2 )
      *(ushort *)(v1 + 58) = *(ushort *)(v1 + 62);
  }
  *(ushort *)(v1 + 54) += *(ushort *)(v1 + 58);
  return Function_2247990(*(ushort **)(v1 + 20), (ushort *)(v1 + 52));
}

//----- (0224BD40) --------------------------------------------------------
uint __fastcall Function_224bd40(uint result, int a2, int a3)
{
  uint v3;
  int v4;

  v3 = result;
  v4 = a3;
  if ( a3 )
  {
    result = s32_div_f(a2 - *(short *)(result + 58), a3);
    *(ushort *)(v3 + 60) = result;
    *(uint *)(v3 + 64) = v4;
  }
  return result;
}

//----- (0224BD5C) --------------------------------------------------------
int __fastcall Function_224bd5c(int a1, int a2)
{
  uint *v2;
  int v3;
  int result;
  int v5;

  v2 = (uint *)a2;
  v3 = a1;
  Function_224bd04(a2);
  result = v2[1];
  switch ( (uchar)result )
  {
    case 0:
      if ( v2[8] )
      {
        v2[6] += v2[7];
        --v2[8];
        result = Function_22479ac(v2[5], v2[6] >> 12);
      }
      else
      {
        Function_22479ac(v2[5], 31);
        result = v2[1] + 1;
        v2[1] = result;
      }
      break;
    case 1:
      Function_224bd40((uint)v2, 384, 30);
      v2[3] = 0;
      result = v2[1] + 1;
      v2[1] = result;
      break;
    case 2:
      result = v2[3] + 1;
      v2[3] = result;
      if ( result > 10 )
      {
        v2[12] = 0;
        result = v2[1] + 1;
        v2[1] = result;
      }
      break;
    case 3:
      v2[10] += v2[12];
      v2[12] -= 1920;
      Function_2247968((uint *)v2[5], v2 + 9);
      result = -45056;
      if ( v2[10] < -45056 )
      {
        Function_2005748(0x5E6u);
        v2[12] = -v2[12];
        Function_224bbb0(v2[2], 0, 16, 8);
        result = v2[1] + 1;
        v2[1] = result;
      }
      break;
    case 4:
      v5 = v2[10] + v2[12];
      v2[10] = v5;
      if ( v5 >= 77824 )
        v2[10] = 77824;
      Function_2247968((uint *)v2[5], v2 + 9);
      result = 77824;
      if ( v2[10] == 77824 )
      {
        result = v2[1] + 1;
        v2[1] = result;
      }
      break;
    case 5:
      result = Function_224bc00(v2[2]);
      if ( result )
        result = Function_224bce8(v3);
      break;
    default:
      return result;
  }
  return result;
}

