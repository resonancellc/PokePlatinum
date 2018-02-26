//----- (02249960) --------------------------------------------------------
int __fastcall Function_2249960(uint a1, int a2)
{
  uint v2;
  int v3;
  ushort *v4;
  ushort *v5;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !Function_205da04(*(uchar *)(dword_224F5A0[0] + 148)) )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uchar *)(dword_224F5A0[0] + 148));
  if ( v3 )
  {
    Function_200b1b8_CallMsgDecrypt(
      *(ushort ***)(dword_224F5A0[0] + 116),
      v2,
      *(ushort **)(dword_224F5A0[0] + 16));
    Function_200c388(
      *(uint **)(dword_224F5A0[0] + 88),
      *(uint *)(dword_224F5A0[0] + 20),
      *(uint *)(dword_224F5A0[0] + 16));
  }
  else
  {
    Function_200b1b8_CallMsgDecrypt(
      *(ushort ***)(dword_224F5A0[0] + 116),
      v2,
      *(ushort **)(dword_224F5A0[0] + 20));
  }
  if ( !Function_201a7cc(dword_224F5A0[0] + 64) )
    Function_205d8f4(*(uint **)(*(uint *)(dword_224F5A0[0] + 104) + 8), dword_224F5A0[0] + 64, 3);
  v4 = (ushort *)LoadPlayerDataAdress(*(uint *)(*(uint *)(dword_224F5A0[0] + 104) + 12));
  Function_205d944(dword_224F5A0[0] + 64, v4);
  v5 = (ushort *)LoadPlayerDataAdress(*(uint *)(*(uint *)(dword_224F5A0[0] + 104) + 12));
  result = Function_205d994(dword_224F5A0[0] + 64, *(uint *)(dword_224F5A0[0] + 20), v5, 1);
  *(uchar *)(dword_224F5A0[0] + 148) = result;
  return result;
}

//----- (02249A10) --------------------------------------------------------
int Function_2249a10()
{
  return Function_2249a12();
}

//----- (02249A12) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02249AB4) --------------------------------------------------------
int __fastcall Function_2249ab4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uchar *v5;
  int v6;
  int result;

  v1 = a1;
  if ( dword_224F5A0[0] )
    ErrorHandler();
  dword_224F5A0[0] = malloc(4u, 156);
  MI_CpuFill8((ushort *)dword_224F5A0[0], 0, 0x9Cu);
  *(uint *)(dword_224F5A0[0] + 136) = 0;
  *(uint *)(dword_224F5A0[0] + 104) = v1;
  *(uchar *)(dword_224F5A0[0] + 151) = 0;
  *(uint *)(dword_224F5A0[0] + 116) = LoadFromMsgNARC(1, 26, 353, 4u);
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(dword_224F5A0[0] + 104));
  *(uint *)(dword_224F5A0[0] + 120) = LoadTrainerDataAdress(v2);
  *(uint *)(dword_224F5A0[0] + 124) = AllocTrainerData(4u);
  Function_201a7a0(dword_224F5A0[0] + 32);
  Function_201a7a0(dword_224F5A0[0] + 48);
  Function_201a7a0(dword_224F5A0[0] + 64);
  *(uint *)(dword_224F5A0[0] + 80) = Function_200b358(4u);
  *(uint *)(dword_224F5A0[0] + 84) = Function_200b358(4u);
  *(uint *)(dword_224F5A0[0] + 88) = Function_200b358(4u);
  v3 = 0;
  *(uchar *)(dword_224F5A0[0] + 152) = 0;
  v4 = 0;
  do
  {
    v5 = (uchar *)(dword_224F5A0[0] + v3++ + 128);
    *v5 = 0;
  }
  while ( v3 < 8 );
  v6 = 0;
  do
  {
    result = Function_2023790(140, 4u);
    ++v4;
    *(uint *)(dword_224F5A0[0] + v6) = result;
    v6 += 4;
  }
  while ( v4 < 8 );
  return result;
}

//----- (02249B98) --------------------------------------------------------
int *__fastcall Function_2249b98(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *v5;
  uint *v6;
  uint *v7;
  int *result;

  v2 = 0;
  v3 = 0;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(dword_224F5A0[0] + v3), a2);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 8 );
  free(*(uint *)(dword_224F5A0[0] + 124));
  v5 = *(uint **)(dword_224F5A0[0] + 80);
  if ( v5 )
  {
    Function_200b3f0(v5, v4);
    v4 = 0;
    *(uint *)(dword_224F5A0[0] + 80) = 0;
  }
  v6 = *(uint **)(dword_224F5A0[0] + 84);
  if ( v6 )
  {
    Function_200b3f0(v6, v4);
    v4 = 0;
    *(uint *)(dword_224F5A0[0] + 84) = 0;
  }
  v7 = *(uint **)(dword_224F5A0[0] + 88);
  if ( v7 )
  {
    Function_200b3f0(v7, v4);
    *(uint *)(dword_224F5A0[0] + 88) = 0;
  }
  Function_200b190(*(ushort **)(dword_224F5A0[0] + 116));
  if ( *(uint *)(dword_224F5A0[0] + 76) )
    Function_201a8fc(dword_224F5A0[0] + 64);
  free(dword_224F5A0[0]);
  result = dword_224F5A0;
  dword_224F5A0[0] = 0;
  return result;
}

//----- (02249C2C) --------------------------------------------------------
int __fastcall Function_2249c2c(int a1)
{
  int v1;
  char v2;

  v1 = a1;
  v2 = Function_224b3fc();
  return Function_2059748(*(uint *)(v1 + 104), *(uchar *)(v1 + 145), v2);
}

//----- (02249C44) --------------------------------------------------------
int __fastcall Function_2249c44(int a1, int a2, int a3)
{
  int result;

  result = dword_224F5A0[0] + 152;
  *(uchar *)(dword_224F5A0[0] + 152) = 1;
  if ( !a3 )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (02249C64) --------------------------------------------------------
uint __fastcall Function_2249c64(int a1)
{
  int v1;
  uint v2;
  uint result;

  v1 = a1;
  v2 = 0;
  result = Function_2001504(a1, 3u);
  if ( result )
  {
    do
    {
      Function_2249c94(v1, 0, (uchar)v2++);
      result = Function_2001504(v1, 3u);
    }
    while ( v2 < result );
  }
  return result;
}

//----- (02249C94) --------------------------------------------------------
int __fastcall Function_2249c94(int a1, int a2, short a3, int a4)
{
  short v4;
  int v5;
  int v6;
  short v7;
  int v8;
  int v9;
  ushort v10;
  int v11;
  int v13;
  ushort v14;
  int v15;

  v15 = a4;
  v4 = a3;
  v5 = Function_2033808();
  v14 = 0;
  v6 = *(uint *)(dword_224F5A0[0] + 92);
  if ( v6 )
    Function_20014dc(v6, &v14, 0);
  v14 += v4;
  v7 = Function_201c294(dword_224F5A0[0] + 32);
  Function_201ae78(dword_224F5A0[0] + 32, 15, 8, (ushort)(16 * v4), 8 * v7 - 8, 0x10u);
  if ( v14 >= v5 )
  {
    Function_200b60c(*(uint *)(dword_224F5A0[0] + 80), 0, v14 + 1, 2, 2, 1);
    Function_200b1b8_CallMsgDecrypt(
      *(ushort ***)(dword_224F5A0[0] + 116),
      0x40u,
      *(ushort **)(dword_224F5A0[0] + 4));
    Function_200c388(
      *(uint **)(dword_224F5A0[0] + 80),
      *(uint *)dword_224F5A0[0],
      *(uint *)(dword_224F5A0[0] + 4));
    v13 = *(uint *)dword_224F5A0[0];
  }
  else
  {
    Function_20339ac(v14, *(uint *)(dword_224F5A0[0] + 124));
    Function_200b60c(*(uint *)(dword_224F5A0[0] + 80), 0, v14 + 1, 2, 2, 1);
    v8 = *(uint *)(dword_224F5A0[0] + 124);
    Function_200b498(*(uint *)(dword_224F5A0[0] + 80), 1u);
    Function_200b1b8_CallMsgDecrypt(
      *(ushort ***)(dword_224F5A0[0] + 116),
      0x3Fu,
      *(ushort **)(dword_224F5A0[0] + 4));
    Function_200c388(
      *(uint **)(dword_224F5A0[0] + 80),
      *(uint *)dword_224F5A0[0],
      *(uint *)(dword_224F5A0[0] + 4));
    v9 = *(uint *)dword_224F5A0[0];
    Function_201d738_CallInitTextInterpreter(dword_224F5A0[0] + 32, 0);
    v10 = GetTrainerID(*(uint *)(dword_224F5A0[0] + 124));
    Function_200b60c(*(uint *)(dword_224F5A0[0] + 80), 2u, v10, 5, 2, 1);
    Function_200b1b8_CallMsgDecrypt(
      *(ushort ***)(dword_224F5A0[0] + 116),
      0x41u,
      *(ushort **)(dword_224F5A0[0] + 12));
    Function_200c388(
      *(uint **)(dword_224F5A0[0] + 80),
      *(uint *)(dword_224F5A0[0] + 8),
      *(uint *)(dword_224F5A0[0] + 12));
    v11 = *(uint *)(dword_224F5A0[0] + 8);
  }
  return Function_201d738_CallInitTextInterpreter(dword_224F5A0[0] + 32, 0);
}

//----- (02249E0C) --------------------------------------------------------
int __fastcall Function_2249e0c(int a1)
{
  int v1;
  int v2;
  int *v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v10[1];

  v1 = a1;
  if ( !Function_201a7cc(dword_224F5A0[0] + 48) )
    Function_201a7e8(
      *(uint **)(*(uint *)(dword_224F5A0[0] + 104) + 8),
      dword_224F5A0[0] + 48,
      3,
      23,
      2,
      8u,
      4u,
      13,
      201);
  Function_200dc48(dword_224F5A0[0] + 48, 1, 985, 0xBu);
  Function_201ada4_ClearTextBox(dword_224F5A0[0] + 48, 15);
  Function_201a954(dword_224F5A0[0] + 48, v2);
  *(uchar *)(v1 + 151) = 1;
  AddTaskToTaskList1((int)Function_224a718, v1, 0);
  Function_2249ee0(dword_224F5A0[0]);
  v3 = dword_224EF64;
  v4 = (char *)v10;
  v5 = 16;
  do
  {
    v6 = *v3;
    v7 = v3[1];
    v3 += 2;
    *(uint *)v4 = v6;
    *((uint *)v4 + 1) = v7;
    v4 += 8;
    --v5;
  }
  while ( v5 );
  *(uint *)v4 = *v3;
  v8 = *(uchar *)(dword_224F5A0[0] + 145);
  if ( v8 == 8 )
    Function_2249960(*(uchar *)(dword_224F5A0[0] + 146) + 103, 0);
  else
    Function_2249960(v10[v8], 0);
  return Function_224a530(Function_2249f54);
}

//----- (02249EE0) --------------------------------------------------------
int Function_2249ee0()
{
  int v0;
  ushort v1;
  int v2;

  v0 = *(uint *)(dword_224F5A0[0] + 120);
  Function_200b498(*(uint *)(dword_224F5A0[0] + 84), 0);
  v1 = GetTrainerID(*(uint *)(dword_224F5A0[0] + 120));
  Function_200b60c(*(uint *)(dword_224F5A0[0] + 84), 1u, v1, 5, 2, 1);
  Function_200b1b8_CallMsgDecrypt(
    *(ushort ***)(dword_224F5A0[0] + 116),
    0x3Eu,
    *(ushort **)(dword_224F5A0[0] + 24));
  Function_200c388(
    *(uint **)(dword_224F5A0[0] + 84),
    *(uint *)(dword_224F5A0[0] + 28),
    *(uint *)(dword_224F5A0[0] + 24));
  v2 = *(uint *)(dword_224F5A0[0] + 28);
  return Function_201d738_CallInitTextInterpreter(dword_224F5A0[0] + 48, 0);
}

//----- (02249F54) --------------------------------------------------------
int Function_2249f54()
{
  int result;
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

  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    v1 = 0;
    *(uint *)(dword_224F5A0[0] + 100) = Function_2013a04(0x10u, 4u);
    do
    {
      Function_200b60c(*(uint *)(dword_224F5A0[0] + 80), 0, v1 + 1, 2, 2, 1);
      Function_200b1b8_CallMsgDecrypt(
        *(ushort ***)(dword_224F5A0[0] + 116),
        0x40u,
        *(ushort **)(dword_224F5A0[0] + 4));
      Function_200c388(
        *(uint **)(dword_224F5A0[0] + 80),
        *(uint *)dword_224F5A0[0],
        *(uint *)(dword_224F5A0[0] + 4));
      Function_2013a6c(*(uint **)(dword_224F5A0[0] + 100), *(uint *)dword_224F5A0[0], 0, v2);
      ++v1;
    }
    while ( v1 < 16 );
    v9 = 1;
    v10 = 2;
    v11 = 20;
    v12 = 10;
    v13 = 1;
    *(&v5 - 4) = 0;
    *(&v5 - 3) = (int)Function_2249c44;
    v3 = &v5 - 2;
    *v3 = (int)Function_2249c64;
    v3[1] = 0;
    v5 = 327696;
    v6 = 268437504;
    v7 = 8388655;
    v8 = 0;
    v4 = *(&v5 - 4);
    Function_2249a10();
    result = Function_224a530(Function_2249ffc);
  }
  return result;
}

//----- (02249FFC) --------------------------------------------------------
int __fastcall Function_2249ffc(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  short v6;
  ushort *v7;

  v2 = a2;
  v3 = a1;
  Function_2249ee0();
  if ( Function_20360f0() )
  {
    *(uint *)(dword_224F5A0[0] + 136) = 3;
    Function_224a528();
    result = Function_224afd8(v3, v2);
  }
  else
  {
    if ( Function_2033870() )
      v5 = -1;
    else
      v5 = Function_2001288(*(uint *)(dword_224F5A0[0] + 92));
    if ( v5 == -2 )
    {
      Function_2005748(0x5DCu);
      *(uint *)(dword_224F5A0[0] + 136) = 1;
      Function_224a528();
      result = Function_224afd8(v3, v2);
    }
    else if ( v5 == -1 )
    {
      result = Function_224a0c8(v2);
    }
    else
    {
      Function_2005748(0x5DCu);
      Function_20014d0(*(uint *)(v2 + 92), (ushort *)(v2 + 142));
      result = Function_2033808();
      if ( result > *(ushort *)(v2 + 142) )
      {
        Function_224a0c8(v2);
        v6 = Function_203383c(*(ushort *)(v2 + 142));
        v7 = (ushort *)(v2 + 142);
        *v7 = v6;
        Function_2059788(*v7);
        Function_20365d0();
        result = Function_224a530(Function_224a128);
      }
    }
  }
  return result;
}

//----- (0224A0C8) --------------------------------------------------------
int Function_224a0c8()
{
  int result;
  int v1;

  if ( Function_2033870() || (result = *(uchar *)(dword_224F5A0[0] + 152), *(uchar *)(dword_224F5A0[0] + 152)) )
  {
    *(uchar *)(dword_224F5A0[0] + 152) = 0;
    Function_2033884();
    Function_201ae78(dword_224F5A0[0] + 32, 15, 8, 0, 0xCu, 0x50u);
    Function_2249c64(*(uint *)(dword_224F5A0[0] + 92));
    result = Function_201a954(dword_224F5A0[0] + 32, v1);
  }
  return result;
}

//----- (0224A128) --------------------------------------------------------
int __fastcall Function_224a128(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  uint v7;
  ushort *v8;
  int v9;

  v2 = a1;
  v3 = a2;
  if ( Function_20360f0() )
  {
    Function_224afd8(v2, v3);
    Function_2249960(0, 0);
    result = Function_224b348(v3);
  }
  else
  {
    v5 = Function_203608c();
    result = Function_2032ee8(v5);
    if ( result )
    {
      Function_20365d0();
      Function_20339ac(*(ushort *)(v3 + 142), *(uint *)(dword_224F5A0[0] + 124));
      v6 = *(uint *)(dword_224F5A0[0] + 124);
      v7 = Function_200b498(*(uint *)(v3 + 88), 1u);
      if ( Function_224b3d4(v7) > 2 )
      {
        if ( !Function_205da04(*(uchar *)(dword_224F5A0[0] + 148)) )
          Call_RemoveTextInterpreterTaskFromTaskList(*(uchar *)(dword_224F5A0[0] + 148));
        Function_200b1b8_CallMsgDecrypt(
          *(ushort ***)(dword_224F5A0[0] + 116),
          2u,
          *(ushort **)(dword_224F5A0[0] + 16));
        Function_200c388(
          *(uint **)(dword_224F5A0[0] + 88),
          *(uint *)(dword_224F5A0[0] + 20),
          *(uint *)(dword_224F5A0[0] + 16));
        if ( !Function_201a7cc(dword_224F5A0[0] + 64) )
          Function_205d8f4(*(uint **)(*(uint *)(dword_224F5A0[0] + 104) + 8), dword_224F5A0[0] + 64, 3);
        v8 = (ushort *)LoadPlayerDataAdress(*(uint *)(*(uint *)(dword_224F5A0[0] + 104) + 12));
        Function_205d944(dword_224F5A0[0] + 64, v8);
        Function_2002ac8(1);
        Function_2002ae4(0);
        Function_2002b20(0);
        v9 = *(uint *)(dword_224F5A0[0] + 20);
        *(uchar *)(dword_224F5A0[0] + 148) = Function_201d738_CallInitTextInterpreter(dword_224F5A0[0] + 64, 1);
      }
      else
      {
        Function_2249960(1u, 1);
      }
      result = Function_224a530(Function_224a34c);
    }
  }
  return result;
}

//----- (0224A244) --------------------------------------------------------
int __fastcall Function_224a244(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  if ( Function_20360f0() )
  {
    Function_224afd8(v2, v3);
    Function_2249960(0, 0);
    Function_224b348(v3);
  }
  else
  {
    v4 = Function_20365a8(0, 3);
    if ( v4 == Function_203608c() )
    {
      Function_20365d0();
      Function_224afd8(v2, v3);
      Function_224b2dc(v3);
    }
    else if ( Function_20365a8(0, 5) == -1 )
    {
      v5 = Function_20365a8(0, 4);
      if ( v5 == Function_203608c() )
      {
        Function_2249960(0x61u, 0);
        Function_224a530(Function_224ab64);
      }
      else
      {
        v6 = Function_20365a8(0, 2);
        if ( v6 == Function_203608c() )
        {
          Function_20365d0();
          *(uchar *)(v3 + 144) = Function_2032e64();
          if ( !Function_205da04(*(uchar *)(dword_224F5A0[0] + 148)) )
            Call_RemoveTextInterpreterTaskFromTaskList(*(uchar *)(dword_224F5A0[0] + 148));
          Function_224afd8(v2, v3);
          Function_224b08c(v3);
        }
        else
        {
          if ( !Function_224b4e4() )
            return 0;
          Function_224afd8(v2, v3);
          Function_224b2dc(v3);
        }
      }
    }
    else
    {
      Function_20365d0();
      Function_224afd8(v2, v3);
      Function_224b2dc(v3);
    }
  }
  return 1;
}

//----- (0224A34C) --------------------------------------------------------
int __fastcall Function_224a34c(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    result = Function_224a244(v2, v3);
    if ( !result )
    {
      result = 2;
      if ( dword_21BF6C4 & 2 )
      {
        Function_2249960(3u, 0);
        result = Function_224a530(Function_224a394);
      }
    }
  }
  return result;
}

//----- (0224A394) --------------------------------------------------------
int __fastcall Function_224a394(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = Function_224a244(a1, a2);
  if ( !result )
  {
    result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
    if ( result )
    {
      *(uint *)(v2 + 96) = Function_2002100(
                               *(uint **)(*(uint *)(dword_224F5A0[0] + 104) + 8),
                               (uchar *)dword_224ED0C,
                               985,
                               11,
                               4u);
      result = Function_224a530(Function_224a3e4);
    }
  }
  return result;
}

//----- (0224A3E4) --------------------------------------------------------
int __fastcall Function_224a3e4(int a1, int a2)
{
  int v2;
  int v3;
  bool v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = Function_224a244(a1, a2) == 0;
  v5 = *(uint *)(v3 + 96);
  if ( v4 )
  {
    result = Function_2002114(v5, 4u);
    if ( result )
    {
      if ( result != -1 )
        result = Function_224a530(Function_224a128);
    }
    else
    {
      Function_224afd8(v2, v3);
      Function_2249960(6u, 0);
      result = Function_224b348(v3);
    }
  }
  else
  {
    Function_2002154(v5, 4u);
    result = 0;
    *(uint *)(v3 + 96) = 0;
  }
  return result;
}

//----- (0224A438) --------------------------------------------------------
int __fastcall Function_224a438(int a1, int a2, short a3)
{
  short v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  ushort v10;

  v3 = a3;
  v10 = 0;
  v4 = *(uint *)(dword_224F5A0[0] + 92);
  if ( v4 )
    Function_20014dc(v4, &v10, 0);
  v10 += v3;
  result = Function_2032ee8(v10);
  if ( result )
  {
    Function_2032ee8(v10);
    Function_200b498(*(uint *)(dword_224F5A0[0] + 80), 0);
    Function_200b1b8_CallMsgDecrypt(
      *(ushort ***)(dword_224F5A0[0] + 116),
      0x42u,
      *(ushort **)(dword_224F5A0[0] + 4));
    Function_200c388(
      *(uint **)(dword_224F5A0[0] + 80),
      *(uint *)dword_224F5A0[0],
      *(uint *)(dword_224F5A0[0] + 4));
    v6 = *(uint *)dword_224F5A0[0];
    Function_201d738_CallInitTextInterpreter(dword_224F5A0[0] + 32, 0);
    v7 = Function_2032ee8(v10);
    v8 = GetSecretTrainerID(v7);
    Function_200b60c(*(uint *)(dword_224F5A0[0] + 80), 2u, v8, 5, 2, 1);
    Function_200b1b8_CallMsgDecrypt(
      *(ushort ***)(dword_224F5A0[0] + 116),
      0x41u,
      *(ushort **)(dword_224F5A0[0] + 12));
    Function_200c388(
      *(uint **)(dword_224F5A0[0] + 80),
      *(uint *)(dword_224F5A0[0] + 8),
      *(uint *)(dword_224F5A0[0] + 12));
    v9 = *(uint *)(dword_224F5A0[0] + 8);
    result = Function_201d738_CallInitTextInterpreter(dword_224F5A0[0] + 32, 0);
  }
  return result;
}

//----- (0224A510) --------------------------------------------------------
int __fastcall Function_224a510(int a1)
{
  int v1;
  char v2;

  v1 = a1;
  v2 = Function_224b3fc();
  return Function_2059708(*(uint *)(v1 + 104), *(uchar *)(v1 + 145), v2);
}

//----- (0224A528) --------------------------------------------------------
int Function_224a528()
{
  return Function_205987c();
}

//----- (0224A530) --------------------------------------------------------
int __fastcall Function_224a530(int result)
{
  *(uint *)(dword_224F5A0[0] + 108) = result;
  return result;
}

//----- (0224A53C) --------------------------------------------------------
int __fastcall Function_224a53c(int a1)
{
  int v1;
  uint *v2;
  int v3;

  v1 = a1;
  v2 = AddTaskToTaskList1((int)Function_224a718, a1, 0);
  Function_224a5d0(v2);
  if ( !Function_201a7cc(dword_224F5A0[0] + 48) )
    Function_201a7e8(
      *(uint **)(*(uint *)(dword_224F5A0[0] + 104) + 8),
      dword_224F5A0[0] + 48,
      3,
      22,
      2,
      9u,
      4u,
      13,
      205);
  Function_200dc48(dword_224F5A0[0] + 48, 1, 985, 0xBu);
  Function_201ada4_ClearTextBox(dword_224F5A0[0] + 48, 15);
  Function_201a954(dword_224F5A0[0] + 48, v3);
  *(uchar *)(v1 + 151) = 1;
  Function_2032e1c(0);
  return Function_224a530((int)Function_224a72c);
}

//----- (0224A5D0) --------------------------------------------------------
int __fastcall Function_224a5d0(int a1, int a2, int a3, int a4)
{
  int *v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v11[132];
  int v12;

  v12 = a4;
  v4 = dword_224EDD8;
  v5 = v11;
  v6 = 16;
  do
  {
    v7 = *v4;
    v8 = v4[1];
    v4 += 2;
    *(uint *)v5 = v7;
    *((uint *)v5 + 1) = v8;
    v5 += 8;
    --v6;
  }
  while ( v6 );
  *(uint *)v5 = *v4;
  if ( *(uchar *)(dword_224F5A0[0] + 145) >= 0x21u )
    ErrorHandler();
  v9 = *(uchar *)(dword_224F5A0[0] + 145);
  if ( v9 != 8 )
    return Function_2249960(*(uint *)&v11[4 * v9], 0);
  if ( Function_2032e64() <= 1 )
    return Function_2249960(*(uchar *)(dword_224F5A0[0] + 146) + 98, 0);
  return Function_2249960(*(uchar *)(dword_224F5A0[0] + 146) + 108, 0);
}

//----- (0224A64C) --------------------------------------------------------
int Function_224a64c()
{
  int v0;
  int v1;
  int v2;
  int v3;
  uint v4;
  int v5;
  int v6;

  v0 = Function_2032e64();
  v1 = v0;
  v2 = Function_224b3d4(v0);
  if ( v1 < v2 )
  {
    v5 = Function_224b3d4(v2);
    v3 = v5 - Function_2032e64();
    v4 = 67;
  }
  else
  {
    v3 = Function_2032e64();
    v4 = 68;
  }
  Function_200b60c(*(uint *)(dword_224F5A0[0] + 84), 0, v3, 2, 5, 1);
  Function_201ada4_ClearTextBox(dword_224F5A0[0] + 48, 15);
  Function_200b1b8_CallMsgDecrypt(
    *(ushort ***)(dword_224F5A0[0] + 116),
    v4,
    *(ushort **)(dword_224F5A0[0] + 28));
  Function_200c388(
    *(uint **)(dword_224F5A0[0] + 84),
    *(uint *)(dword_224F5A0[0] + 24),
    *(uint *)(dword_224F5A0[0] + 28));
  v6 = *(uint *)(dword_224F5A0[0] + 24);
  return Function_201d738_CallInitTextInterpreter(dword_224F5A0[0] + 48, 0);
}

//----- (0224A6D4) --------------------------------------------------------
int __fastcall Function_224a6d4(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  char v12[132];
  int v13;

  v13 = a4;
  v4 = dword_224ED54;
  v5 = a1;
  v6 = a2;
  v7 = v12;
  v8 = 16;
  do
  {
    v9 = *v4;
    v10 = v4[1];
    v4 += 2;
    *(uint *)v7 = v9;
    *((uint *)v7 + 1) = v10;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  *(uint *)v7 = *v4;
  if ( Function_2032ee8(v5) )
    Function_200b498(*(uint *)(v6 + 88), 1u);
  return Function_2249960(*(uint *)&v12[4 * *(uchar *)(v6 + 145)], 1);
}

//----- (0224A718) --------------------------------------------------------
int Function_224a718()
{
  int (*v0)(void);
  int result;

  v0 = *(int (**)(void))(dword_224F5A0[0] + 108);
  if ( v0 )
    result = v0();
  return result;
}

//----- (0224A72C) --------------------------------------------------------
int Function_224a72c()
{
  int result;
  int v1;
  int v2;
  uchar *v3;
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
  int v15;

  Function_224a64c();
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    v1 = 0;
    *(uint *)(dword_224F5A0[0] + 100) = Function_2013a04(5u, 4u);
    do
    {
      Function_2013a4c(*(uint **)(dword_224F5A0[0] + 100), *(ushort ***)(dword_224F5A0[0] + 116), 0x45u, 0);
      ++v1;
    }
    while ( v1 < 5 );
    v2 = 0;
    *(uchar *)(dword_224F5A0[0] + 152) = 1;
    do
    {
      v3 = (uchar *)(dword_224F5A0[0] + v2++ + 128);
      *v3 = 0;
    }
    while ( v2 < 8 );
    v11 = 1;
    v12 = 2;
    v13 = 17;
    v14 = 12;
    v15 = 1;
    v4 = &v7 - 4;
    *v4 = 0;
    v4[1] = 0;
    v5 = &v7 - 2;
    *v5 = 0;
    v5[1] = 0;
    v7 = 327685;
    v8 = 268435712;
    v9 = -2139094993;
    v10 = 0;
    v6 = *(&v7 - 4);
    Function_2249a10();
    result = Function_224a530((int)Function_224a7d0);
  }
  return result;
}

//----- (0224A7D0) --------------------------------------------------------
int __fastcall Function_224a7d0(int a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int *v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint v16[1];

  v14 = a1;
  v15 = a2;
  Function_224a64c();
  v2 = 0;
  do
  {
    if ( Function_2032dc4(v2) && v2 )
    {
      *(uchar *)(dword_224F5A0[0] + v2 + 128) = 1;
      *(uchar *)(dword_224F5A0[0] + 152) = 1;
    }
    else if ( !Function_2032ee8(v2) || *(uchar *)(dword_224F5A0[0] + v2 + 128) )
    {
      if ( !Function_2032ee8(v2) && *(uchar *)(dword_224F5A0[0] + v2 + 128) )
      {
        *(uchar *)(dword_224F5A0[0] + v2 + 128) = 0;
        *(uchar *)(dword_224F5A0[0] + 152) = 1;
      }
    }
    else
    {
      *(uchar *)(dword_224F5A0[0] + v2 + 128) = 1;
      *(uchar *)(dword_224F5A0[0] + 152) = 1;
    }
    ++v2;
  }
  while ( v2 < 8 );
  if ( *(uchar *)(dword_224F5A0[0] + 152) )
  {
    *(uchar *)(dword_224F5A0[0] + 152) = 0;
    Function_20013ac(*(uint *)(dword_224F5A0[0] + 92));
    v3 = 0;
    if ( Function_2001504(*(uint *)(dword_224F5A0[0] + 92), 3u) )
    {
      do
        Function_224a438(*(uint *)(dword_224F5A0[0] + 92), 0, (uchar)v3++);
      while ( v3 < Function_2001504(*(uint *)(dword_224F5A0[0] + 92), 3u) );
    }
  }
  v4 = Function_2001288(*(uint *)(v15 + 92));
  if ( Function_2032e44() == 255 )
  {
    if ( Function_20360f0() )
    {
      Function_224a528();
      Function_224afd8(v14, v15);
      result = dword_224F5A0[0] + 136;
      *(uint *)(dword_224F5A0[0] + 136) = 3;
    }
    else if ( v4 == -2 )
    {
      result = Function_224a530((int)Function_224ae10);
    }
    else
    {
      result = -1;
      if ( v4 != -1 )
      {
        v8 = Function_224b3d4(-1);
        result = Function_2032e64();
        if ( v8 <= result )
        {
          v9 = dword_224EEE0;
          v10 = (char *)v16;
          v11 = 16;
          do
          {
            v12 = *v9;
            v13 = v9[1];
            v9 += 2;
            *(uint *)v10 = v12;
            *((uint *)v10 + 1) = v13;
            v10 += 8;
            --v11;
          }
          while ( v11 );
          *(uint *)v10 = *v9;
          *(uchar *)(v15 + 144) = Function_2032e64();
          Function_2249960(v16[*(uchar *)(v15 + 145)], 0);
          result = Function_224a530((int)Function_224ac48);
        }
      }
    }
  }
  else
  {
    *(uchar *)(v15 + 149) = Function_2032e44();
    Function_2005748(0x60Du);
    Function_224a6d4(*(uchar *)(v15 + 149), v15, v5, v6);
    result = Function_224a530((int)Function_224af84);
  }
  return result;
}

//----- (0224A97C) --------------------------------------------------------
int __fastcall Function_224a97c(int a1, int a2)
{
  int v2;
  int v3;
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
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;

  v2 = a2;
  v3 = a1;
  Function_224a64c();
  Function_2001288(*(uint *)(v2 + 92));
  v4 = Function_2002114(*(uint *)(v2 + 96), 4u);
  if ( Function_2035d78(*(uchar *)(v2 + 149)) )
  {
    if ( Function_20360f0() || Function_224b4e4() )
    {
      if ( v4 == -1 )
        Function_2002154(*(uint *)(v2 + 96), 4u);
      Function_2032d98(*(uchar *)(v2 + 149));
      Function_2249960(0, 0);
      result = Function_224a530((int)Function_224aba4);
    }
    else if ( v4 )
    {
      result = -1;
      if ( v4 != -1 )
      {
        if ( *(uchar *)(v2 + 145) == 8 )
        {
          v21 = 1;
          v22 = ((int (*)(void))Function_224b3e8)();
          if ( v22 > 1 )
          {
            do
            {
              v26 = Function_2035d78((ushort)v21);
              if ( v26 )
              {
                Function_2032d98(v21);
                v26 = Function_2036594(5, v21, v27, v28);
              }
              ++v21;
              v22 = Function_224b3e8(v26);
            }
            while ( v21 < v22 );
          }
          Function_224a5d0(v22, v23, v24, v25);
          result = Function_224a530((int)Function_224abe0);
        }
        else
        {
          Function_2032d98(*(uchar *)(v2 + 149));
          v31 = Function_2036594(3, *(uchar *)(v2 + 149), v29, v30);
          Function_224a5d0(v31, v32, v33, v34);
          result = Function_224a530((int)Function_224abe0);
        }
      }
    }
    else if ( ((*(uchar *)(v2 + 145) + 255) & 0xFFu) > 1 || Function_2032fe4() )
    {
      Function_2032e1c(*(uchar *)(v2 + 149));
      v14 = Function_2036594(2, *(uchar *)(v2 + 149), v12, v13);
      v15 = Function_224b3e8(v14);
      v16 = Function_2032e64();
      if ( v15 == v16 )
      {
        v20 = Function_2032e64();
        *(uchar *)(v2 + 144) = v20;
        if ( Function_224b3e8(v20) <= 2 )
        {
          Function_224afd8(v3, v2);
          result = Function_224b054(v2);
        }
        else
        {
          result = Function_224a530((int)Function_224ac08);
        }
      }
      else
      {
        Function_224a5d0(v16, v17, v18, v19);
        result = Function_224a530((int)Function_224abe0);
      }
    }
    else
    {
      Function_2249960(0x61u, 0);
      Function_224a530((int)Function_224ab64);
      result = Function_2036594(4, *(uchar *)(v2 + 149), v10, v11);
    }
  }
  else
  {
    if ( v4 == -1 )
      Function_2002154(*(uint *)(v2 + 96), 4u);
    if ( *(uchar *)(v2 + 145) == 8 )
    {
      v5 = 1;
      if ( Function_224b3e8(8) > 1 )
      {
        do
        {
          v6 = Function_2035d78((ushort)v5);
          if ( v6 )
          {
            Function_2032d98(v5);
            v6 = Function_2036594(5, v5, v7, v8);
          }
          ++v5;
        }
        while ( v5 < Function_224b3e8(v6) );
      }
      Function_2249960(0, 0);
      result = Function_224a530((int)Function_224aba4);
    }
    else
    {
      Function_2032d98(*(uchar *)(v2 + 149));
      Function_2249960(0, 0);
      result = Function_224a530((int)Function_224aba4);
    }
  }
  return result;
}

//----- (0224AB64) --------------------------------------------------------
int __fastcall Function_224ab64(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    result = 3;
    if ( dword_21BF6C4 & 3 )
    {
      Function_224afd8(v2, v3);
      Function_224a528();
      result = dword_224F5A0[0] + 136;
      *(uint *)(dword_224F5A0[0] + 136) = 4;
    }
  }
  return result;
}

//----- (0224ABA4) --------------------------------------------------------
int Function_224aba4()
{
  int result;
  int v1;
  int v2;

  Function_224a64c();
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    result = 3;
    if ( dword_21BF6C4 & 3 )
    {
      Function_224a5d0(3, dword_21BF6C4, v1, v2);
      result = Function_224a530((int)Function_224abe0);
    }
  }
  return result;
}

//----- (0224ABE0) --------------------------------------------------------
int Function_224abe0()
{
  int result;

  Function_224a64c();
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
    result = Function_224a530((int)Function_224a7d0);
  return result;
}

//----- (0224AC08) --------------------------------------------------------
int __fastcall Function_224ac08(int a1, int a2)
{
  int *v2;
  int v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  uint v9[1];

  v2 = dword_224EFE8;
  v3 = a2;
  v4 = (char *)v9;
  v5 = 16;
  do
  {
    v6 = *v2;
    v7 = v2[1];
    v2 += 2;
    *(uint *)v4 = v6;
    *((uint *)v4 + 1) = v7;
    v4 += 8;
    --v5;
  }
  while ( v5 );
  *(uint *)v4 = *v2;
  Function_224a64c();
  Function_2249960(v9[*(uchar *)(v3 + 145)], 0);
  return Function_224a530((int)Function_224ac48);
}

//----- (0224AC48) --------------------------------------------------------
int __fastcall Function_224ac48(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  Function_224a64c();
  Function_2036994(0);
  Function_2001288(*(uint *)(v2 + 92));
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    *(uint *)(v2 + 96) = Function_2002100(
                             *(uint **)(*(uint *)(dword_224F5A0[0] + 104) + 8),
                             (uchar *)dword_224ED0C,
                             985,
                             11,
                             4u);
    result = Function_224a530((int)Function_224aca4);
  }
  return result;
}

//----- (0224ACA4) --------------------------------------------------------
int __fastcall Function_224aca4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = a2;
  v3 = a1;
  Function_224a64c();
  Function_2001288(*(uint *)(v2 + 92));
  v4 = Function_2002114(*(uint *)(v2 + 96), 4u);
  if ( Function_20360f0() || *(uchar *)(v2 + 144) != Function_2035e18() )
  {
    if ( v4 == -1 )
      Function_2002154(*(uint *)(v2 + 96), 4u);
    *(uint *)(v2 + 96) = 0;
    result = Function_224a530((int)Function_224ad68);
  }
  else if ( v4 )
  {
    result = -1;
    if ( v4 != -1 )
    {
      Function_2036994(1);
      Function_224a528();
      Function_224afd8(v3, v2);
      result = dword_224F5A0[0] + 136;
      *(uint *)(dword_224F5A0[0] + 136) = 1;
    }
  }
  else if ( *(uchar *)(v2 + 145) != 8 || (v6 = 1, Function_2035e18() <= 1) )
  {
LABEL_12:
    Function_20364f0(10);
    result = Function_224a530((int)Function_224af2c);
  }
  else
  {
    while ( Function_2035d78((ushort)v6) )
    {
      if ( ++v6 >= Function_2035e18() )
        goto LABEL_12;
    }
    result = Function_224a530((int)Function_224ad68);
  }
  return result;
}

//----- (0224AD68) --------------------------------------------------------
uint *__fastcall Function_224ad68(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  char v12[132];
  int v13;

  v13 = a4;
  v4 = dword_224EE5C;
  v5 = a1;
  v6 = a2;
  v7 = v12;
  v8 = 16;
  do
  {
    v9 = *v4;
    v10 = v4[1];
    v4 += 2;
    *(uint *)v7 = v9;
    *((uint *)v7 + 1) = v10;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  *(uint *)v7 = *v4;
  Function_224afd8(v5, v6);
  if ( *(uchar *)(dword_224F5A0[0] + 145) == 8 )
    Function_2249960(*(uchar *)(dword_224F5A0[0] + 146) + 118, 0);
  else
    Function_2249960(*(uint *)&v12[4 * *(uchar *)(v6 + 145)], 0);
  Function_205987c();
  return AddTaskToTaskList1((int)Function_224add8, v6, 0);
}

//----- (0224ADD8) --------------------------------------------------------
int __fastcall Function_224add8(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    result = 3;
    if ( dword_21BF6C4 & 3 )
    {
      *(uint *)(dword_224F5A0[0] + 136) = 1;
      result = Call_RemoveTaskFromTaskList(v1);
    }
  }
  return result;
}

//----- (0224AE10) --------------------------------------------------------
int __fastcall Function_224ae10(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int result;
  char v12[132];
  int v13;

  v13 = a4;
  v4 = dword_224F06C;
  v5 = a1;
  v6 = a2;
  v7 = v12;
  v8 = 16;
  do
  {
    v9 = *v4;
    v10 = v4[1];
    v4 += 2;
    *(uint *)v7 = v9;
    *((uint *)v7 + 1) = v10;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  *(uint *)v7 = *v4;
  Function_224a64c();
  if ( Function_2032e64() <= 1 )
  {
    Function_224a528();
    Function_224afd8(v5, v6);
    result = dword_224F5A0[0] + 136;
    *(uint *)(dword_224F5A0[0] + 136) = 1;
  }
  else
  {
    Function_2249960(*(uint *)&v12[4 * *(uchar *)(v6 + 145)], 0);
    result = Function_224a530((int)Function_224ae78);
  }
  return result;
}

//----- (0224AE78) --------------------------------------------------------
int __fastcall Function_224ae78(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  Function_224a64c();
  Function_2001288(*(uint *)(v2 + 92));
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    *(uint *)(v2 + 96) = Function_2002100(
                             *(uint **)(*(uint *)(dword_224F5A0[0] + 104) + 8),
                             (uchar *)dword_224ED0C,
                             985,
                             11,
                             4u);
    result = Function_224a530((int)Function_224aecc);
  }
  return result;
}

//----- (0224AECC) --------------------------------------------------------
int __fastcall Function_224aecc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v2 = a2;
  v3 = a1;
  Function_224a64c();
  Function_2001288(*(uint *)(v2 + 92));
  v4 = Function_2002114(*(uint *)(v2 + 96), 4u);
  if ( Function_20360f0() )
    v4 = -2;
  if ( v4 )
  {
    result = -1;
    if ( v4 != -1 )
    {
      Function_224a5d0(-1, v5, v6, v7);
      result = Function_224a530((int)Function_224abe0);
    }
  }
  else
  {
    Function_224a528();
    Function_224afd8(v3, v2);
    result = dword_224F5A0[0] + 136;
    *(uint *)(dword_224F5A0[0] + 136) = 1;
  }
  return result;
}

//----- (0224AF2C) --------------------------------------------------------
int __fastcall Function_224af2c(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( Function_20360f0() || *(uchar *)(v3 + 144) != Function_2035e18() )
    return Function_224a530((int)Function_224ad68);
  Function_224a64c();
  Function_2001288(*(uint *)(v3 + 92));
  result = Function_2036540(10);
  if ( result )
  {
    result = Function_2036450();
    if ( result )
    {
      Function_224afd8(v2, v3);
      result = Function_224b3a8(v3);
    }
  }
  return result;
}

//----- (0224AF84) --------------------------------------------------------
int __fastcall Function_224af84(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  Function_224a64c();
  Function_2001288(*(uint *)(v2 + 92));
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    *(uint *)(v2 + 96) = Function_2002100(
                             *(uint **)(*(uint *)(dword_224F5A0[0] + 104) + 8),
                             (uchar *)dword_224ED0C,
                             985,
                             11,
                             4u);
    result = Function_224a530((int)Function_224a97c);
  }
  return result;
}

//----- (0224AFD8) --------------------------------------------------------
int __fastcall Function_224afd8(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_201ada4_ClearTextBox(dword_224F5A0[0] + 64, 15);
  Function_200dc9c(v3 + 32, 0);
  Function_2013a3c(*(int **)(v3 + 100));
  Function_2001384(*(uint *)(v3 + 92), 0, 0);
  Function_201acf4(v3 + 32);
  Function_201a8fc(v3 + 32);
  result = *(uchar *)(v3 + 151);
  if ( *(uchar *)(v3 + 151) )
  {
    Function_200dc9c(dword_224F5A0[0] + 48, 0);
    Function_201acf4(dword_224F5A0[0] + 48);
    Function_201a8fc(dword_224F5A0[0] + 48);
    result = 0;
    *(uchar *)(v3 + 151) = 0;
  }
  if ( v2 )
    result = Call_RemoveTaskFromTaskList(v2);
  return result;
}

//----- (0224B054) --------------------------------------------------------
int __fastcall Function_224b054(int a1)
{
  int v1;

  v1 = a1;
  Function_2032ee8(1);
  Function_200b498(*(uint *)(v1 + 88), 1u);
  Function_2249960(0x39u, 1);
  AddTaskToTaskList1((int)Function_224a718, v1, 0);
  return Function_224a530((int)Function_224b0e8);
}

//----- (0224B08C) --------------------------------------------------------
int __fastcall Function_224b08c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_20339ac(*(ushort *)(a1 + 142), *(uint *)(dword_224F5A0[0] + 124));
  v2 = *(uint *)(dword_224F5A0[0] + 124);
  Function_200b498(*(uint *)(v1 + 88), 1u);
  Function_2249960(4u, 1);
  *(uchar *)(v1 + 144) = Function_2035e18();
  AddTaskToTaskList1((int)Function_224a718, v1, 0);
  Function_224a530((int)Function_224b0e8);
  result = dword_224F5A0[0] + 150;
  *(uchar *)(dword_224F5A0[0] + 150) = 90;
  return result;
}

//----- (0224B0E8) --------------------------------------------------------
int __fastcall Function_224b0e8(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  if ( !Function_203608c() && *(uchar *)(v2 + 144) != Function_2035e18() )
    return Function_224a530((int)Function_224b274);
  if ( Function_224b4e4() || Function_20360f0() )
    return Function_224a530((int)Function_224b274);
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    Function_20364f0(10);
    result = Function_224a530((int)Function_224b14c);
  }
  return result;
}

//----- (0224B14C) --------------------------------------------------------
int __fastcall Function_224b14c(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int result;
  int *v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  char v12[132];
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a2;
  if ( !Function_203608c() && *(uchar *)(v5 + 144) != Function_2035e18() )
  {
    Function_224a530((int)Function_224b274);
LABEL_16:
    result = dword_224F5A0[0];
    if ( *(uchar *)(dword_224F5A0[0] + 150) )
    {
      result = (uchar)--*(uchar *)(dword_224F5A0[0] + 150);
      if ( !*(uchar *)(dword_224F5A0[0] + 150) )
      {
        v7 = dword_224F0F0;
        v8 = v12;
        v9 = 16;
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
        *(uint *)v8 = *v7;
        if ( *(uchar *)(dword_224F5A0[0] + 145) == 8 )
          result = Function_2249960(*(uchar *)(dword_224F5A0[0] + 146) + 113, 0);
        else
          result = Function_2249960(*(uint *)&v12[4 * *(uchar *)(v5 + 145)], 0);
      }
    }
    return result;
  }
  if ( Function_224b4e4() || Function_20360f0() )
    return Function_224a530((int)Function_224b274);
  if ( !Function_2035d78(0) )
    return Function_224a530((int)Function_224b274);
  if ( Function_20365a8(0, 5) != -1 )
    return Function_224a530((int)Function_224b274);
  if ( !Function_2036540(10) || !Function_2036450() )
    goto LABEL_16;
  if ( !Function_205da04(*(uchar *)(dword_224F5A0[0] + 148)) )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uchar *)(dword_224F5A0[0] + 148));
  *(uchar *)(v5 + 144) = Function_2035e18();
  Function_224b3a8(v5);
  return Call_RemoveTaskFromTaskList(v4);
}

//----- (0224B274) --------------------------------------------------------
int Function_224b274()
{
  int result;

  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    Function_2249960(0, 0);
    result = Function_224a530((int)Function_224b2a0);
  }
  return result;
}

//----- (0224B2A0) --------------------------------------------------------
int __fastcall Function_224b2a0(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    result = 3;
    if ( dword_21BF6C4 & 3 )
    {
      Call_RemoveTaskFromTaskList(v1);
      Function_224a528();
      result = dword_224F5A0[0] + 136;
      *(uint *)(dword_224F5A0[0] + 136) = 1;
    }
  }
  return result;
}

//----- (0224B2DC) --------------------------------------------------------
uint *__fastcall Function_224b2dc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_20339ac(*(ushort *)(a1 + 142), *(uint *)(dword_224F5A0[0] + 124));
  v2 = *(uint *)(dword_224F5A0[0] + 124);
  Function_200b498(*(uint *)(v1 + 88), 1u);
  Function_2249960(5u, 1);
  Function_20597a4();
  return AddTaskToTaskList1((int)Function_224b31c, v1, 0);
}

//----- (0224B31C) --------------------------------------------------------
int __fastcall Function_224b31c(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    Function_20597a4();
    Function_2249e0c(v3);
    result = Call_RemoveTaskFromTaskList(v2);
  }
  return result;
}

//----- (0224B348) --------------------------------------------------------
uint *__fastcall Function_224b348(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_20597a4();
  v2 = 0;
  do
    Function_2032d98(v2++);
  while ( v2 < 8 );
  return AddTaskToTaskList1((int)Function_224b370, v1, 0);
}

//----- (0224B370) --------------------------------------------------------
int __fastcall Function_224b370(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_205da04(*(uchar *)(dword_224F5A0[0] + 148));
  if ( result )
  {
    result = 3;
    if ( dword_21BF6C4 & 3 )
    {
      Function_2249e0c(v3);
      result = Call_RemoveTaskFromTaskList(v2);
    }
  }
  return result;
}

//----- (0224B3A8) --------------------------------------------------------
int Function_224b3a8()
{
  Function_2036994(0);
  *(uint *)(dword_224F5A0[0] + 136) = 2;
  Function_20388f4(1, 1);
  Function_2032ac0();
  return Function_2033ea8(1);
}

//----- (0224B3D4) --------------------------------------------------------
int Function_224b3d4()
{
  return Function_2036158(*(uchar *)(dword_224F5A0[0] + 145));
}

//----- (0224B3E8) --------------------------------------------------------
int Function_224b3e8()
{
  return Function_2036148(*(uchar *)(dword_224F5A0[0] + 145));
}

//----- (0224B3FC) --------------------------------------------------------
int Function_224b3fc()
{
  return *(uchar *)(dword_224F5A0[0] + 146) + 16 * *(uchar *)(dword_224F5A0[0] + 147);
}

//----- (0224B414) --------------------------------------------------------
int __fastcall Function_7_224b414(int a1, int a2, char a3, char a4)
{
  int v4;
  int v5;
  char v6;
  char v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  Function_2249ab4(a1);
  *(uchar *)(dword_224F5A0[0] + 145) = v5;
  if ( (uint)(v5 - 3) <= 1 )
    *(uint *)(v4 + 176) = 0;
  *(uchar *)(dword_224F5A0[0] + 146) = v6;
  *(uchar *)(dword_224F5A0[0] + 147) = v7;
  return Function_2249c2c(dword_224F5A0[0]);
}

//----- (0224B450) --------------------------------------------------------
int Function_224b450()
{
  return Function_2249e0c(dword_224F5A0[0]);
}

//----- (0224B460) --------------------------------------------------------
int __fastcall Function_7_224b460(int a1, int a2)
{
  int v2;

  v2 = *(uint *)(dword_224F5A0[0] + 136);
  if ( v2 )
    Function_2249b98(dword_224F5A0[0] + 136, a2);
  return v2;
}

//----- (0224B47C) --------------------------------------------------------
int __fastcall Function_7_224b47c(int a1, int a2, char a3, char a4)
{
  int v4;
  int v5;
  char v6;
  char v7;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  Function_2249ab4(a1);
  *(uchar *)(dword_224F5A0[0] + 145) = v5;
  if ( (uint)(v5 - 3) <= 1 )
    *(uint *)(v4 + 176) = 0;
  *(uchar *)(dword_224F5A0[0] + 146) = v6;
  *(uchar *)(dword_224F5A0[0] + 147) = v7;
  return Function_224a510(dword_224F5A0[0]);
}

//----- (0224B4B8) --------------------------------------------------------
int Function_224b4b8()
{
  return Function_224a53c(dword_224F5A0[0]);
}

//----- (0224B4C8) --------------------------------------------------------
int __fastcall Function_7_224b4c8(int a1, int a2)
{
  int v2;

  v2 = *(uint *)(dword_224F5A0[0] + 136);
  if ( v2 )
    Function_2249b98(dword_224F5A0[0] + 136, a2);
  return v2;
}

//----- (0224B4E4) --------------------------------------------------------
int Function_224b4e4()
{
  return 0;
}

//----- (0224B4E8) --------------------------------------------------------
int __fastcall Function_224b4e8(int a1, uint a2)
{
  int v2;
  uint v3;
  ushort *v4;
  ushort *v5;
  int result;

  v2 = a1;
  v3 = a2;
  if ( Function_201a7cc(a1 + 84) )
  {
    Call_Function_201ada4_ClearTextBox(v2 + 84);
  }
  else
  {
    Function_201a7a0(v2 + 84);
    Function_205d8f4(*(uint **)(*(uint *)(v2 + 16) + 8), v2 + 84, 3);
    v4 = (ushort *)LoadPlayerDataAdress(*(uint *)(*(uint *)(v2 + 16) + 12));
    Function_205d944(v2 + 84, v4);
  }
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 104), v3, *(ushort **)(v2 + 20));
  Function_200c388(*(uint **)(v2 + 100), *(uint *)(v2 + 24), *(uint *)(v2 + 20));
  v5 = (ushort *)LoadPlayerDataAdress(*(uint *)(*(uint *)(v2 + 16) + 12));
  result = Function_205d994(v2 + 84, *(uint *)(v2 + 24), v5, 1);
  *(uint *)(v2 + 116) = result;
  return result;
}

//----- (0224B558) --------------------------------------------------------
uint __fastcall Function_224b558(int a1, int a2)
{
  int v2;

  v2 = a1;
  if ( a2 )
  {
    Function_200e084(a1 + 84, 0);
    Function_201acf4(v2 + 84);
  }
  return Function_201a8fc(v2 + 84);
}

//----- (0224B57C) --------------------------------------------------------
uint __fastcall Function_224b57c(int a1, uint a2)
{
  int v2;

  v2 = a1;
  Function_202616c(*(uint *)(*(uint *)(a1 + 16) + 12), a2, *(ushort **)(a1 + 28), 4u);
  return Function_200b48c(*(int **)(v2 + 100), 0, *(uint *)(v2 + 28));
}

//----- (0224B5A8) --------------------------------------------------------
int __fastcall Function_224b5a8(int a1)
{
  int v1;
  int v2;
  int i;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v1 = a1;
  v2 = 5;
  if ( Function_202610c(*(uint *)(*(uint *)(a1 + 16) + 12), 0) )
    v2 = 6;
  if ( !Function_201a7cc(v1 + 52) )
  {
    *(uint *)(v1 + 8) = Function_2013a04(v2 + 2, 4u);
    Function_201a7e8(*(uint **)(*(uint *)(v1 + 16) + 8), v1 + 52, 3, 1, 1, 0x10u, 2 * (v2 + 2), 13, 1);
    Function_200dc48(v1 + 52, 1, 985, 0xBu);
    Function_2013a4c(*(uint **)(v1 + 8), *(ushort ***)(v1 + 104), 0x7Bu, 12);
    for ( i = 0; i < v2; ++i )
    {
      Function_224b57c(v1, i);
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 104), 0x71u, *(ushort **)(v1 + 28));
      Function_200c388(*(uint **)(v1 + 100), *(uint *)(v1 + 32), *(uint *)(v1 + 28));
      Function_2013a6c(*(uint **)(v1 + 8), *(uint *)(v1 + 32), i, v4);
    }
    Function_2013a4c(*(uint **)(v1 + 8), *(ushort ***)(v1 + 104), 0x72u, -2);
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v12 = 268437504;
  v13 = 8388655;
  v14 = 0;
  v11 = (ushort)(v2 + 2);
  HIWORD(v11) = v2 + 2;
  v7 = *(uint *)(v1 + 8);
  v10 = v1 + 52;
  v14 = v1;
  *(uint *)v1 = Function_200112c(&v7, 0, *(ushort *)(v1 + 120), 4u);
  return Function_201a954(v1 + 52, v5);
}

//----- (0224B6AC) --------------------------------------------------------
int __fastcall Function_224b6ac(int *a1)
{
  int *v1;
  int result;

  v1 = a1;
  result = *a1;
  if ( result )
  {
    Function_2001384(result, 0, 0);
    Function_200dc9c((int)(v1 + 13), 1);
    Function_201c3c0(v1[13], *((uchar *)v1 + 56));
    Function_201a8fc((int)(v1 + 13));
    Function_2013a3c((int *)v1[2]);
    result = 0;
    *v1 = 0;
  }
  return result;
}

//----- (0224B6E8) --------------------------------------------------------
int __fastcall Function_224b6e8(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = Function_2001288(*a1);
  Function_20014dc(*v1, 0, (ushort *)v1 + 60);
  v3 = *((ushort *)v1 + 64);
  Function_20014d0(*v1, (ushort *)v1 + 64);
  if ( v3 != *((ushort *)v1 + 64) )
    Function_2005748(0x5DCu);
  switch ( v2 )
  {
    case -2:
      Function_2005748(0x5DCu);
      *(uint *)(v1[4] + 176) = 0;
      Function_224b6ac(v1);
      result = -1;
      break;
    case -1:
      result = 0;
      break;
    case 12:
      Function_2005748(0x5DCu);
      *(uint *)(v1[4] + 176) = 0;
      Function_224b6ac(v1);
      result = 2;
      break;
    default:
      Function_2005748(0x5DCu);
      *(uint *)(v1[4] + 176) = Function_2026150(*(uint *)(v1[4] + 12), v2);
      result = 1;
      break;
  }
  return result;
}

//----- (0224B788) --------------------------------------------------------
int __fastcall Function_224b788(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  short v13;
  short v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  v5 = &dword_224F4D8;
  *(uint *)(a1 + 12) = Function_2013a04(3u, 4u);
  Function_201a7e8(*(uint **)(*(uint *)(v4 + 16) + 8), v4 + 68, 3, 22, 10, 9u, 6u, 13, 513);
  Function_200dc48(v4 + 68, 1, 985, 0xBu);
  v6 = 0;
  do
  {
    Function_2013a4c(*(uint **)(v4 + 12), *(ushort ***)(v4 + 104), *v5, v5[1]);
    ++v6;
    v5 += 2;
  }
  while ( v6 < 3 );
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v15 = 268437504;
  v16 = 8388655;
  v17 = 0;
  v13 = 3;
  v14 = 3;
  v9 = *(uint *)(v4 + 12);
  v12 = v4 + 68;
  v17 = v4;
  *(uint *)(v4 + 4) = Function_200112c(&v9, 0, *(ushort *)(v4 + 122), 4u);
  return Function_201a954(v4 + 68, v7);
}

//----- (0224B83C) --------------------------------------------------------
int __fastcall Function_224b83c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v5;

  v1 = a1;
  v2 = Function_2001288(*(uint *)(a1 + 4));
  Function_20014dc(*(uint *)(v1 + 4), 0, (ushort *)(v1 + 122));
  v3 = *(ushort *)(v1 + 130);
  Function_20014d0(*(uint *)(v1 + 4), (ushort *)(v1 + 130));
  if ( v3 != *(ushort *)(v1 + 130) )
    Function_2005748(0x5DCu);
  if ( v2 == -2 )
  {
    Function_2005748(0x5DCu);
    v2 = -1;
  }
  else
  {
    if ( v2 == -1 )
      return 0;
    Function_2005748(0x5DCu);
    Function_224b6ac((int *)v1);
  }
  v5 = *(uint *)(v1 + 4);
  if ( v5 )
  {
    Function_2001384(v5, 0, 0);
    Function_200dc9c(v1 + 68, 1);
    Function_201c3c0(*(uint *)(v1 + 68), *(uchar *)(v1 + 72));
    Function_201a8fc(v1 + 68);
    Function_2013a3c(*(int **)(v1 + 12));
    *(uint *)(v1 + 4) = 0;
  }
  return v2;
}

//----- (0224B8DC) --------------------------------------------------------
int __fastcall Function_224b8dc(int a1)
{
  uint *v1;
  int v2;
  int v3;
  char *v4;
  int v5;
  uint v6;
  uint v7;
  uint v8;
  int v9;
  uint v10;
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
  const char *v24;
  int v25;
  int v26;
  ushort *v27;
  ushort **v28;

  v21 = a1;
  v1 = *(uint **)(a1 + 100);
  v28 = (ushort **)LoadFromMsgNARC(0, 26, 353, 4u);
  v27 = (ushort *)Function_2023790(180, 4u);
  v26 = Function_2023790(180, 4u);
  v25 = v21 + 36;
  Function_201a7e8(*(uint **)(*(uint *)(v21 + 16) + 8), v21 + 36, 3, 4, 2, 0x18u, 0x13u, 13, 1);
  Function_200dc48(v21 + 36, 1, 985, 0xBu);
  Function_201ada4_ClearTextBox(v21 + 36, 15);
  Function_224b57c(v21, *(ushort *)(v21 + 120) - 1);
  Function_200b1b8_CallMsgDecrypt(v28, 0x5Fu, v27);
  Function_200c388(v1, v26, (int)v27);
  Function_201d738_CallInitTextInterpreter(v21 + 36, 0);
  v2 = 0;
  v3 = 16;
  do
  {
    Function_200b1b8_CallMsgDecrypt(v28, v2 + 75, v27);
    Function_201d738_CallInitTextInterpreter(v25, 0);
    ++v2;
    v3 += 15;
  }
  while ( v2 < 9 );
  v22 = 0;
  v4 = &byte_224F4C0;
  v24 = "TUVWY[[[]";
  v23 = 16;
  do
  {
    v5 = Function_2026074(*(uint *)(*(uint *)(v21 + 16) + 176), (uchar)*v4);
    v6 = *(uchar *)v24;
    v7 = (uchar)*v4;
    if ( v7 <= 0xB )
      JUMPOUT(__CS__, *((short *)&off_224B9E0 + v7) + 35961314);
    switch ( (uchar)v7 )
    {
      case 1:
        Function_200b60c((int)v1, 0, v5, 1, 1, 1);
        break;
      case 2:
        Function_200b60c((int)v1, 0, v5, 3, 0, 1);
        break;
      case 3:
        if ( v5 )
          Function_200b60c((int)v1, 0, v5, 3, 0, 1);
        else
          v6 = 96;
        break;
      case 4:
      case 9:
      case 0xA:
      case 0xB:
        if ( !v5 )
          ++v6;
        break;
      case 5:
        if ( v5 < 0 )
        {
          v10 = s32_div_f(-10000 * v5, 254);
          v9 = -s32_div_f(v10 + 5, 10);
        }
        else
        {
          v8 = s32_div_f(10000 * v5, 254);
          v9 = s32_div_f(v8 + 5, 10);
        }
        v11 = s32_div_f(v9, 12);
        v12 = abs(v11);
        Function_200b60c((int)v1, 0, v12, 2, 0, 1);
        s32_div_f(v9, 12);
        v14 = abs(v13);
        Function_200b60c((int)v1, 1u, v14, 2, 2, 1);
        if ( v9 )
        {
          if ( v9 > 0 )
            ++v6;
        }
        else
        {
          v6 = 96;
        }
        break;
      case 7:
        if ( v5 < 0 )
          v15 = -s32_div_f(-220462 * v5 + 50000, 100000);
        else
          v15 = s32_div_f(220462 * v5 + 50000, 100000);
        v16 = abs(v15);
        Function_200b60c((int)v1, 0, v16, 3, 0, 1);
        if ( v15 )
        {
          if ( v15 > 0 )
            ++v6;
        }
        else
        {
          v6 = 96;
        }
        break;
      default:
        break;
    }
    Function_200b1b8_CallMsgDecrypt(v28, v6, v27);
    Function_200c388(v1, v26, (int)v27);
    Function_2002d7c(0, v26, 0);
    Function_201d738_CallInitTextInterpreter(v25, 0);
    ++v4;
    ++v24;
    v23 += 15;
    ++v22;
  }
  while ( v22 < 9 );
  Function_20237bc_FreeMsg((int)v27, v17);
  Function_20237bc_FreeMsg(v26, v18);
  Function_200b190((ushort *)v28);
  return Function_201a954(v25, v19);
}

//----- (0224BBA0) --------------------------------------------------------
uint __fastcall Function_224bba0(int a1)
{
  int v1;

  v1 = a1;
  Function_200dc9c(a1 + 36, 1);
  Function_201c3c0(*(uint *)(v1 + 36), *(uchar *)(v1 + 40));
  return Function_201a8fc(v1 + 36);
}

//----- (0224BBC4) --------------------------------------------------------
int __fastcall Function_224bbc4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v5;
  int v6;

  v1 = a1;
  v2 = LoadPokePartyAdress(*(uint *)(*(uint *)(a1 + 16) + 12));
  v3 = Function_207a594(*(uint *)(*(uint *)(v1 + 16) + 176), v2, *(uint **)(v1 + 108));
  if ( !v3 )
    return 1;
  if ( v3 != 1 && v3 == 4 )
  {
    Function_2005748(0x5F3u);
    Function_224b57c(v1, *(ushort *)(v1 + 120) - 1);
    v5 = Function_2026074(*(uint *)(*(uint *)(v1 + 16) + 176), 1u);
    Function_200b60c(*(uint *)(v1 + 100), 1u, v5, 1, 1, 1);
    Function_224b4e8(v1, 0x6Bu);
  }
  else
  {
    Function_2005748(0x5F3u);
    Function_224b57c(v1, *(ushort *)(v1 + 120) - 1);
    v6 = Function_2026074(*(uint *)(*(uint *)(v1 + 16) + 176), 3u);
    Function_200b60c(*(uint *)(v1 + 100), 1u, v6, 3, 0, 1);
    Function_224b4e8(v1, 0x79u);
  }
  return 0;
}

//----- (0224BC74) --------------------------------------------------------
int __fastcall Function_224bc74(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int result;

  v1 = a1;
  LoadOverWorldDataAdress(a1);
  v2 = (int *)GetUnknownStruct01_c(v1);
  v5 = (int)v2;
  v6 = v2[31];
  if ( v6 <= 0xB )
    JUMPOUT(__CS__, *((short *)&off_224BC98 + v6) + 35962010);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_224b4e8((int)v2, 0x6Au);
      ++*(uint *)(v5 + 124);
      goto LABEL_33;
    case 1:
      if ( Function_205da04(v2[29] & 0xFF) )
      {
        Function_224b5a8(v5);
        ++*(uint *)(v5 + 124);
      }
      goto LABEL_33;
    case 2:
      v7 = Function_224b6e8(v2);
      switch ( v7 )
      {
        case -1:
          **(ushort **)(v5 + 112) = 2;
          *(uint *)(v5 + 124) = 11;
          break;
        case 2:
          **(ushort **)(v5 + 112) = 3;
          *(uint *)(v5 + 124) = 11;
          break;
        case 1:
          *(uint *)(v5 + 124) = 3;
          break;
      }
      goto LABEL_33;
    case 3:
      Function_224b788((int)v2, v6, v3, v4);
      ++*(uint *)(v5 + 124);
      goto LABEL_33;
    case 4:
      v8 = Function_224b83c((int)v2);
      switch ( v8 )
      {
        case -1:
          *(uint *)(v5 + 124) = 2;
          break;
        case 1:
          *(uint *)(v5 + 124) = 5;
          break;
        case 2:
          *(uint *)(v5 + 124) = 7;
          break;
      }
      goto LABEL_33;
    case 5:
      if ( Function_224bbc4((int)v2) )
      {
        **(ushort **)(v5 + 112) = 1;
        *(uint *)(v5 + 124) = 11;
      }
      else
      {
        *(uint *)(v5 + 124) = 6;
      }
      goto LABEL_33;
    case 6:
      if ( Function_205da04(v2[29] & 0xFF) && dword_21BF6C4 & 3 )
        *(uint *)(v5 + 124) = 0;
      goto LABEL_33;
    case 7:
      Function_224b558((int)v2, 1);
      Function_224b8dc(v5);
      ++*(uint *)(v5 + 124);
      goto LABEL_33;
    case 8:
      if ( dword_21BF6C4 & 3 )
      {
        Function_224bba0((int)v2);
        Function_224b4e8(v5, 0x6Au);
        Function_224b5a8(v5);
        *(uint *)(v5 + 124) = 9;
      }
      goto LABEL_33;
    case 9:
      if ( Function_205da04(v2[29] & 0xFF) )
        *(uint *)(v5 + 124) = 3;
      goto LABEL_33;
    case 0xA:
LABEL_33:
      result = 0;
      break;
    case 0xB:
      Function_224b6ac(v2);
      Function_224b558(v5, 0);
      Function_200b3f0(*(uint **)(v5 + 100), v9);
      Function_200b190(*(ushort **)(v5 + 104));
      Function_20237bc_FreeMsg(*(uint *)(v5 + 20), v10);
      Function_20237bc_FreeMsg(*(uint *)(v5 + 24), v11);
      Function_20237bc_FreeMsg(*(uint *)(v5 + 28), v12);
      Function_20237bc_FreeMsg(*(uint *)(v5 + 32), v13);
      Function_207a2c0(*(int **)(v5 + 108));
      free(v5);
      result = 1;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (0224BE10) --------------------------------------------------------
int __fastcall Function_224be10(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = malloc2(0xBu, 132);
  MI_CpuFill8((ushort *)v2, 0, 0x84u);
  *(uint *)(v2 + 124) = 0;
  *(uint *)(v2 + 16) = v1;
  *(uint *)(v1 + 176) = 0;
  *(uint *)(v2 + 100) = Function_200b358(4u);
  *(uint *)(v2 + 104) = LoadFromMsgNARC(0, 26, 221, 4u);
  *(uint *)(v2 + 20) = Function_2023790(180, 4u);
  *(uint *)(v2 + 24) = Function_2023790(180, 4u);
  *(uint *)(v2 + 28) = Function_2023790(180, 4u);
  *(uint *)(v2 + 32) = Function_2023790(180, 4u);
  *(uint *)(v2 + 108) = Function_207a2a8(0xBu);
  return v2;
}

//----- (0224BE7C) --------------------------------------------------------
uint *__fastcall Function_7_224be7c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverWorldDataAdress(a1);
  v5 = Function_224be10(v4);
  *(uint *)(v5 + 112) = v3;
  return Function_2050944(v2, (int)Function_224bc74, v5);
}

//----- (0224BE9C) --------------------------------------------------------
int *__fastcall Function_224be9c(uint a1, int a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  int *v6;
  int v7;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (int *)malloc(a1, 772);
  Call_FillMemWithValue(v6, 0, 0x304u);
  v6[6] = v4;
  v6[5] = v5;
  v6[2] = v3;
  v7 = LoadVariableAreaAdress_e(v3);
  v6[3] = Function_2029d04(v7);
  v6[4] = LoadVariableAreaAdressItemList(v3);
  v6[82] = LoadFromMsgNARC(0, 26, 572, v6[6]);
  Function_224c338(v6);
  Function_224c35c(v6);
  Function_224c3cc(v6);
  return v6;
}

//----- (0224BEFC) --------------------------------------------------------
uint __fastcall Function_224befc(int a1)
{
  int *v1;

  v1 = (int *)a1;
  Function_200b190(*(ushort **)(a1 + 328));
  Function_224c3b8(v1);
  Function_224c3e0(v1);
  Call_FillMemWithValue(v1, 0, 0x304u);
  return free((int)v1);
}

//----- (0224BF2C) --------------------------------------------------------
int __fastcall Function_224bf2c(uint *a1)
{
  uint *v1;
  uint v2;
  ushort *v3;
  int v4;
  ushort *v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  ushort *v10;
  int v11;
  int v12;
  ushort *v13;
  int v14;
  ushort *v15;
  int v16;
  ushort *v17;
  int v18;
  ushort *v19;
  int v20;
  ushort *v21;
  int v22;
  int result;

  v1 = a1;
  v2 = *a1;
  if ( v2 <= 0xC )
    JUMPOUT(__CS__, *((short *)&off_224BF46 + v2) + 35962696);
  switch ( (uchar)v2 )
  {
    case 0:
      Function_224c3ec(v1 + 85, v1[5], v1[6], v1[84]);
      v3 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[82], 4u);
      Function_224c468(v1 + 85, v3, v1[6]);
      Function_20237bc_FreeMsg((int)v3, v4);
      *v1 = 11;
      v1[1] = 1;
      goto LABEL_35;
    case 1:
      if ( Function_224cc88(v1[3], dword_224F1B4, 22) )
      {
        v5 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[82], 5u);
        Function_224c468(v1 + 85, v5, v1[6]);
        Function_20237bc_FreeMsg((int)v5, v6);
        *v1 = 11;
        v1[1] = 12;
      }
      else
      {
        *v1 = 2;
      }
      goto LABEL_35;
    case 2:
      Function_224c620(v1 + 90, v1[5], v1[82], v1[6]);
      Function_224cbd0(v1 + 188, v1 + 90, dword_224F1B4, v1[4], v1[6], v1[5]);
      Function_224c768(v1 + 97, v1[5], v1[6], dword_224F1B4, 22, v1[82], v1 + 188, Function_224cbe4, v1[7]);
      goto LABEL_9;
    case 3:
LABEL_9:
      Function_224ca0c(v1 + 97);
      v7 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[82], 6u);
      Function_224c468(v1 + 85, v7, v1[6]);
      Function_20237bc_FreeMsg((int)v7, v8);
      *v1 = 10;
      v1[1] = 4;
      goto LABEL_35;
    case 4:
      v9 = Function_224c9a4(v1 + 97);
      if ( v9 == -1 || v9 == -2 )
      {
        if ( v9 == -2 )
        {
          v10 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[82], 0xBu);
          Function_224c468(v1 + 85, v10, v1[6]);
          Function_20237bc_FreeMsg((int)v10, v11);
          *v1 = 11;
          v1[1] = 12;
          Function_2005748(0x5DCu);
        }
      }
      else
      {
        Function_2019cb8(v1[5], 3, 0, 0, 0, 0x20u, 0x12u, 0x11u);
        Function_224ca34(v1 + 97);
        Function_224c4e0(v1 + 85, v1[82], v1[6], dword_224F1B4, *((ushort *)v1 + 344));
        *v1 = 10;
        v1[1] = 5;
        Function_2005748(0x5DCu);
      }
      goto LABEL_35;
    case 5:
      Function_224cc44(v1 + 185, v1[5], v1[6]);
      *v1 = 6;
      goto LABEL_35;
    case 6:
      v12 = Function_224cc78(v1 + 185);
      if ( v12 )
      {
        if ( v12 == -2 )
        {
          Function_224cc6c(v1 + 185);
          *v1 = 3;
        }
      }
      else if ( Function_224ccb8(v1[4], dword_224F1B4, *((ushort *)v1 + 344), v1[6]) )
      {
        if ( Function_224cce4(v1[3], dword_224F1B4, *((ushort *)v1 + 344)) )
        {
          v17 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[82], 8u);
          Function_224c468(v1 + 85, v17, v1[6]);
          Function_20237bc_FreeMsg((int)v17, v18);
          Function_224cc6c(v1 + 185);
          *v1 = 11;
          v1[1] = 7;
        }
        else
        {
          v15 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[82], 0xAu);
          Function_224c468(v1 + 85, v15, v1[6]);
          Function_20237bc_FreeMsg((int)v15, v16);
          Function_224cc6c(v1 + 185);
          *v1 = 11;
          v1[1] = 3;
        }
      }
      else
      {
        v13 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[82], 9u);
        Function_224c468(v1 + 85, v13, v1[6]);
        Function_20237bc_FreeMsg((int)v13, v14);
        *v1 = 11;
        v1[1] = 3;
        Function_224cc6c(v1 + 185);
      }
      goto LABEL_35;
    case 7:
      Function_224ccf4(v1[3], v1[4], dword_224F1B4, *((ushort *)v1 + 344), v1[6]);
      Function_224c580(v1 + 85, v1[82], v1[6], dword_224F1B4, *((ushort *)v1 + 344));
      if ( Function_224cc88(v1[3], dword_224F1B4, 22) )
      {
        *v1 = 11;
        v1[1] = 8;
      }
      else
      {
        *v1 = 11;
        v1[1] = 3;
      }
      goto LABEL_35;
    case 8:
      v19 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[82], 0xDu);
      Function_224c468(v1 + 85, v19, v1[6]);
      Function_20237bc_FreeMsg((int)v19, v20);
      *v1 = 11;
      v1[1] = 9;
      goto LABEL_35;
    case 9:
      v21 = Function_200b1ec_CallMsgDecrypt((ushort **)v1[82], 5u);
      Function_224c468(v1 + 85, v21, v1[6]);
      Function_20237bc_FreeMsg((int)v21, v22);
      *v1 = 11;
      v1[1] = 12;
      goto LABEL_35;
    case 0xA:
      if ( Function_224c4b8(v1 + 85) )
        *v1 = v1[1];
      goto LABEL_35;
    case 0xB:
      if ( Function_224c4b8(v1 + 85) && dword_21BF6C4 & 3 )
        *v1 = v1[1];
      goto LABEL_35;
    case 0xC:
      Function_224c444(v1 + 85);
      Function_224c698(v1 + 90);
      Function_224c934(v1 + 97);
      Function_224cc6c(v1 + 185);
      result = 1;
      break;
    default:
LABEL_35:
      Function_20219f8(v1[7]);
      result = 0;
      break;
  }
  return result;
}

//----- (0224C338) --------------------------------------------------------
int __fastcall Function_224c338(int a1)
{
  int v1;
  ushort *v2;
  int result;

  v1 = a1;
  v2 = (ushort *)LoadPlayerDataAdress(*(uint *)(a1 + 8));
  *(uint *)(v1 + 332) = Function_2027b50(v2);
  result = Function_2027ac0(v2);
  *(uint *)(v1 + 336) = result;
  return result;
}

//----- (0224C35C) --------------------------------------------------------
int __fastcall Function_224c35c(int a1)
{
  int v1;

  v1 = a1;
  Function_200dd0c(*(uint **)(a1 + 20), 3u, 1, 10, *(uint *)(a1 + 332), *(uint *)(a1 + 24));
  LoadFromNARC_PlFont2(0, 384, *(uint *)(v1 + 24));
  Function_200daa4(*(uint **)(v1 + 20), 3u, 31, 11, 0, *(uint *)(v1 + 24));
  LoadFromNARC_PlFont1(0, 416, *(uint *)(v1 + 24));
  return Function_2019ebc(*(uint **)(v1 + 20), 3u);
}

//----- (0224C3B8) --------------------------------------------------------
int __fastcall Function_224c3b8(int a1)
{
  Function_2019ebc(*(uint **)(a1 + 20), 3u);
  return Function_205d8cc(0, 1);
}

//----- (0224C3CC) --------------------------------------------------------
int *__fastcall Function_224c3cc(int a1, int a2, int a3, int a4)
{
  int v4;
  int *result;

  v4 = a1;
  result = Function_20095c4(2, a1 + 32, *(uint *)(a1 + 24), a4);
  *(uint *)(v4 + 28) = result;
  return result;
}

//----- (0224C3E0) --------------------------------------------------------
int __fastcall Function_224c3e0(int a1)
{
  return Function_2021964(*(int **)(a1 + 28));
}

//----- (0224C3EC) --------------------------------------------------------
int __fastcall Function_224c3ec(uint *a1, uint *a2, uint a3, int a4)
{
  uint *v4;
  int result;
  uint *v6;

  v4 = a1;
  result = *a1;
  v6 = a2;
  if ( result != 1 )
  {
    v4[2] = a4;
    v4[1] = Function_201a778(a3, 1);
    Function_201a7e8(v6, v4[1], 3, 2, 19, 0x1Bu, 4u, 12, 40);
    Function_201ada4_ClearTextBox(v4[1], 15);
    Function_200e060(v4[1], 0, 1, 0xAu);
    result = 1;
    *v4 = 1;
  }
  return result;
}

//----- (0224C444) --------------------------------------------------------
int __fastcall Function_224c444(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  result = *a1;
  if ( result )
  {
    Function_201acf4(v1[1]);
    Function_201a8fc(v1[1]);
    Function_201a928(v1[1], 1);
    result = 0;
    *v1 = 0;
  }
  return result;
}

//----- (0224C468) --------------------------------------------------------
int __fastcall Function_224c468(int *a1, int a2, uint a3)
{
  int *v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a1[4] )
    ErrorHandler();
  Function_201ada4_ClearTextBox(v3[1], 15);
  v3[4] = (int)Function_2023868(v4, v5);
  v6 = v3[2];
  v7 = v3[4];
  v3[3] = Function_201d78c(v3[1], 1);
  return Function_201a954(v3[1], v8);
}

//----- (0224C4B8) --------------------------------------------------------
int __fastcall Function_224c4b8(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  if ( Function_201d724(*(uint *)(a1 + 12) & 0xFF) )
    return 0;
  v3 = *(uint *)(v1 + 16);
  if ( v3 )
  {
    Function_20237bc_FreeMsg(v3, v2);
    *(uint *)(v1 + 16) = 0;
  }
  return 1;
}

//----- (0224C4E0) --------------------------------------------------------
uint __fastcall Function_224c4e0(int *a1, ushort **a2, uint a3, int a4, int a5)
{
  ushort **v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v13;
  uint v14;
  int v15;
  ushort *v16;

  v13 = a1;
  v14 = a3;
  v5 = a2;
  v6 = a4;
  v7 = Function_200b358(a3);
  v15 = Function_2023790(200, v14);
  v16 = Function_200b1ec_CallMsgDecrypt(v5, 7u);
  v8 = 12 * a5;
  if ( *(uint *)(v6 + 8 + 12 * a5) == 1 )
    Function_200b70c((int)v7, 0, *(uint *)(v6 + v8 + 4) + 149);
  else
    Function_200b77c((int)v7, 0, *(uint *)(v6 + v8 + 4) + 149);
  Function_200b60c((int)v7, 1u, *(uint *)(v6 + 8 + v8), 3, 0, 1);
  Function_200bfac((int)v7, 2u, *(uint *)(v6 + v8));
  Function_200c388(v7, v15, (int)v16);
  Function_224c468(v13, v15, v14);
  Function_200b3f0(v7, v9);
  Function_20237bc_FreeMsg(v15, v10);
  return Function_20237bc_FreeMsg((int)v16, v11);
}

//----- (0224C580) --------------------------------------------------------
uint __fastcall Function_224c580(int *a1, ushort **a2, uint a3, int a4, int a5)
{
  ushort **v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v13;
  uint v14;
  int v15;
  ushort *v16;

  v13 = a1;
  v14 = a3;
  v5 = a2;
  v6 = a4;
  v7 = Function_200b358(a3);
  v15 = Function_2023790(200, v14);
  v16 = Function_200b1ec_CallMsgDecrypt(v5, 0xCu);
  v8 = 12 * a5;
  if ( *(uint *)(v6 + 8 + 12 * a5) == 1 )
    Function_200b70c((int)v7, 0, *(uint *)(v6 + v8 + 4) + 149);
  else
    Function_200b77c((int)v7, 0, *(uint *)(v6 + v8 + 4) + 149);
  Function_200b60c((int)v7, 1u, *(uint *)(v6 + 8 + v8), 3, 0, 1);
  Function_200bfac((int)v7, 2u, *(uint *)(v6 + v8));
  Function_200c388(v7, v15, (int)v16);
  Function_224c468(v13, v15, v14);
  Function_200b3f0(v7, v9);
  Function_20237bc_FreeMsg(v15, v10);
  return Function_20237bc_FreeMsg((int)v16, v11);
}

//----- (0224C620) --------------------------------------------------------
int __fastcall Function_224c620(uint *a1, uint *a2, ushort **a3, uint a4)
{
  uint *v4;
  int result;
  uint *v6;
  ushort **v7;
  int v8;
  uint *v9;
  uint v10;

  v4 = a1;
  result = *a1;
  v6 = a2;
  v7 = a3;
  v10 = a4;
  if ( result != 1 )
  {
    v4[1] = Function_201a778(a4, 1);
    Function_201a7e8(v6, v4[1], 3, 1, 11, 0xEu, 6u, 13, 148);
    v4[2] = Function_200b358(v10);
    v8 = 0;
    v9 = v4;
    do
    {
      v9[4] = Function_200b1ec_CallMsgDecrypt(v7, v8++ + 16);
      ++v9;
    }
    while ( v8 < 3 );
    v4[3] = Function_2023790(32, v10);
    Function_201ada4_ClearTextBox(v4[1], 15);
    result = 1;
    *v4 = 1;
  }
  return result;
}

//----- (0224C698) --------------------------------------------------------
int __fastcall Function_224c698(uint *a1, int a2)
{
  uint *v2;
  int result;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  result = *a1;
  if ( result )
  {
    v4 = 0;
    v5 = v2;
    do
    {
      Function_20237bc_FreeMsg(v5[4], a2);
      ++v4;
      ++v5;
    }
    while ( v4 < 3 );
    Function_20237bc_FreeMsg(v2[3], a2);
    Function_200b3f0((uint *)v2[2], v6);
    Function_201acf4(v2[1]);
    Function_201a8fc(v2[1]);
    Function_201a928(v2[1], 1);
    result = 0;
    *v2 = 0;
  }
  return result;
}

//----- (0224C6DC) --------------------------------------------------------
char *__fastcall Function_224c6dc(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  Function_200b70c(a1[2], 0, a2 + 149);
  Function_200b60c(v4[2], 1u, v5, 3, 1, 1);
  Function_200b60c(v4[2], 2u, v6, 3, 1, 1);
  Function_201ada4_ClearTextBox(v4[1], 15);
  v7 = 0;
  v8 = v4;
  v9 = 0;
  do
  {
    Function_200c388((uint *)v4[2], v4[3], v8[4]);
    v10 = v4[3];
    Function_201d78c(v4[1], 0);
    ++v7;
    ++v8;
    v9 += 16;
  }
  while ( v7 < 3 );
  return Function_200dc48(v4[1], 0, 31, 0xBu);
}

//----- (0224C768) --------------------------------------------------------
uint __fastcall Function_224c768(uint *a1, uint *a2, uint a3, uint *a4, uint a5, ushort **a6, int a7, int a8, int a9)
{
  uint *v9;
  uint *v10;
  uint result;
  uint v12;
  uint *v13;
  uint *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  uint *v20;
  int v21;
  char *v22;
  uint v23;
  uint *v24;
  ushort *v25;
  int v26;
  char *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint v32;
  char v33;

  v9 = a1;
  v10 = a2;
  result = *a1;
  v23 = a3;
  v24 = a4;
  if ( result != 1 )
  {
    *v9 = 1;
    v9[72] = a5 + 1;
    v9[76] = a7;
    v9[77] = a8;
    v9[1] = Function_201a778(a3, 1);
    Function_201a7e8(v10, v9[1], 3, 17, 1, 0xEu, 0x10u, 13, 232);
    v9[73] = Function_200b358(v23);
    v9[74] = Function_2023790(32, v23);
    v25 = Function_200b1ec_CallMsgDecrypt(a6, 0x10u);
    v12 = 0;
    if ( a5 )
    {
      v13 = v9;
      v14 = v9;
      do
      {
        Function_200bfac(v9[73], 0, *v24);
        Function_200c388((uint *)v9[73], v9[74], (int)v25);
        v13[49] = Function_2023868(v9[74], v23);
        v15 = v13[49];
        ++v13;
        v14[3] = v15;
        v14[4] = v12++;
        v24 += 3;
        v14 += 2;
      }
      while ( v12 < a5 );
    }
    v9[a5 + 49] = Function_200b1ec_CallMsgDecrypt(a6, 0x13u);
    v16 = (int)&v9[2 * a5];
    *(uint *)(v16 + 12) = v9[a5 + 49];
    *(uint *)(v16 + 16) = a5;
    Function_200b3f0((uint *)v9[73], v16);
    Function_20237bc_FreeMsg(v9[74], v17);
    Function_20237bc_FreeMsg((int)v25, v18);
    dword_224F4FC = v9[1];
    word_224F500 = v9[72];
    dword_224F4F0 = (int)(v9 + 3);
    v9[2] = Function_200112c(&dword_224F4F0, 0, 0, (uchar)v23);
    Function_200dc48(v9[1], 0, 31, 0xBu);
    v19 = 0;
    v20 = v9;
    do
    {
      v20[78] = Function_2009714(1, v19, v23);
      v19 = (int *)((char *)v19 + 1);
      ++v20;
    }
    while ( (int)v19 < 4 );
    Function_224ca54(&v33, v9, v23);
    v21 = 0;
    v26 = a9;
    v27 = &v33;
    v31 = 1;
    v32 = v23;
    v22 = &byte_224F1A8;
    v30 = 0;
    v28 = 786432;
    do
    {
      v29 = (uchar)*v22 << 12;
      v9[86] = Function_2021b90(&v26);
      Function_2021d6c(v9[86], v21);
      result = Function_2021cc8(v9[86], 1);
      ++v21;
      ++v22;
      ++v9;
    }
    while ( v21 < 2 );
  }
  return result;
}

//----- (0224C934) --------------------------------------------------------
int __fastcall Function_224c934(uint *a1)
{
  uint *v1;
  int result;
  int v3;
  uint *v4;
  int v5;
  int v6;
  uint *v7;

  v1 = a1;
  result = *a1;
  if ( result )
  {
    v3 = 0;
    v4 = v1;
    do
    {
      Function_2021bd4(v4[86]);
      ++v3;
      ++v4;
    }
    while ( v3 < 2 );
    Function_224cb40(v1);
    v6 = 0;
    if ( v1[72] > 0 )
    {
      v7 = v1;
      do
      {
        Function_20237bc_FreeMsg(v7[49], v5);
        ++v6;
        ++v7;
      }
      while ( v6 < v1[72] );
    }
    Function_2001384(v1[2], 0, 0);
    Function_201acf4(v1[1]);
    Function_201a8fc(v1[1]);
    Function_201a928(v1[1], 1);
    result = 1;
    *v1 = 1;
  }
  return result;
}

//----- (0224C9A4) --------------------------------------------------------
int __fastcall Function_224c9a4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;

  v7 = a4;
  v4 = a1;
  v5 = Function_2001288(*(uint *)(a1 + 8));
  if ( v5 == -1 )
  {
    Function_20014d0(*(uint *)(v4 + 8), &v7);
    if ( *(ushort *)(v4 + 300) != (ushort)v7 )
    {
      *(ushort *)(v4 + 300) = v7;
      (*(void (__fastcall **)(uint, uint))(v4 + 308))(*(uint *)(v4 + 304), *(ushort *)(v4 + 300));
      Function_2005748(0x5DCu);
      Function_224cb70(v4);
    }
  }
  else if ( v5 != -2 && *(ushort *)(v4 + 300) == *(uint *)(v4 + 288) - 1 )
  {
    v5 = -2;
  }
  return v5;
}

//----- (0224CA0C) --------------------------------------------------------
int __fastcall Function_224ca0c(int a1)
{
  int v1;

  v1 = a1;
  (*(void (__fastcall **)(uint, uint))(v1 + 308))(*(uint *)(a1 + 304), *(ushort *)(v1 + 300));
  Function_200dc48(*(uint *)(v1 + 4), 0, 31, 0xBu);
  return Function_224cb70(v1);
}

//----- (0224CA34) --------------------------------------------------------
uint __fastcall Function_224ca34(int a1)
{
  int v1;

  v1 = a1;
  Function_2021cac(*(uint *)(a1 + 344), 0);
  return Function_2021cac(*(uint *)(v1 + 348), 0);
}

//----- (0224CA54) --------------------------------------------------------
int __fastcall Function_224ca54(int a1, int a2, uint a3, int a4)
{
  uint v4;
  int v5;
  int v6;
  int *v7;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = LoadFromNARC_8(62, a3, a3, a4);
  *(uint *)(v6 + 328) = Function_2009a4c(*(uint *)(v6 + 312), (int)v7, 4u, 0, 5000, 1, v4);
  *(uint *)(v6 + 332) = Function_2009b04(*(uint *)(v6 + 316), (int)v7, 0xAu, 0, 5000, 1, 1, v4);
  *(uint *)(v6 + 336) = Function_2009bc4(*(uint *)(v6 + 320), (int)v7, 5u, 0, 5000, 2u, v4);
  *(uint *)(v6 + 340) = Function_2009bc4(*(uint *)(v6 + 324), (int)v7, 6u, 0, 5000, 3u, v4);
  Call_FS_CloseFile(v7);
  Function_200a3dc(*(int **)(v6 + 328));
  Function_200a640(*(int **)(v6 + 332));
  return Function_20093b4(
           v5,
           5000,
           5000,
           5000,
           5000,
           -1,
           -1,
           0,
           0,
           *(uint *)(v6 + 312),
           *(uint *)(v6 + 316),
           *(uint *)(v6 + 320),
           *(uint *)(v6 + 324),
           0,
           0);
}

//----- (0224CB40) --------------------------------------------------------
uint __fastcall Function_224cb40(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  Function_200a4e4(*(int **)(a1 + 328));
  Function_200a6dc(*(int **)(v1 + 332));
  v2 = 0;
  do
  {
    result = Function_2009754(*(int **)(v1 + 312));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  return result;
}

//----- (0224CB70) --------------------------------------------------------
uint __fastcall Function_224cb70(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint result;
  ushort v6;
  int v7;

  v7 = a4;
  v4 = a1;
  Function_20014dc(a1[2], &v6, 0);
  if ( v6 )
    Function_2021cac(v4[86], 1);
  else
    Function_2021cac(v4[86], 0);
  if ( v6 < v4[72] - 7 )
    result = Function_2021cac(v4[87], 1);
  else
    result = Function_2021cac(v4[87], 0);
  return result;
}

//----- (0224CBD0) --------------------------------------------------------
uint *__fastcall Function_224cbd0(uint *result, int a2, int a3, int a4, int a5, int a6)
{
  result[1] = a6;
  result[2] = a2;
  result[3] = a3;
  result[4] = a4;
  *result = a5;
  return result;
}

//----- (0224CBE4) --------------------------------------------------------
char *__fastcall Function_224cbe4(uint *a1, uint a2)
{
  uint *v2;
  int v3;
  int v4;
  char *result;

  v2 = a1;
  if ( a2 >= 0x16 )
  {
    Function_2019cb8(a1[1], 3, 0, 0, 0xAu, 0x10u, 8u, 0x11u);
    result = (char *)Function_2019448((uint *)v2[1], 3u);
  }
  else
  {
    v3 = 12 * a2;
    v4 = Function_207d730(a1[4], (*(uint *)(a1[3] + 12 * a2 + 4) + 149) & 0xFFFF, *a1);
    result = Function_224c6dc((int *)v2[2], *(uint *)(v2[3] + v3 + 4), *(uint *)(v2[3] + v3 + 8), v4);
  }
  return result;
}

//----- (0224CC44) --------------------------------------------------------
int __fastcall Function_224cc44(uint *a1, uint *a2, uint a3)
{
  uint *v3;
  int result;
  uint v5;

  v3 = a1;
  result = *a1;
  v5 = a3;
  if ( result != 1 )
  {
    v3[1] = Function_2002100(a2, (uchar *)dword_224F1AC, 31, 11, a3);
    v3[2] = v5;
    result = 1;
    *v3 = 1;
  }
  return result;
}

//----- (0224CC6C) --------------------------------------------------------
uint *__fastcall Function_224cc6c(uint *result)
{
  if ( *result )
    *result = 0;
  return result;
}

//----- (0224CC78) --------------------------------------------------------
int __fastcall Function_224cc78(int a1)
{
  return Function_2002114(*(uint *)(a1 + 4), *(uint *)(a1 + 8));
}

//----- (0224CC88) --------------------------------------------------------
int __fastcall Function_224cc88(int a1, uint *a2, uint a3)
{
  int v3;
  uint *v4;
  uint v5;
  uint v6;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  if ( !a3 )
    return 1;
  while ( Function_2029d50(v3, *v4, 1) != 1 )
  {
    ++v6;
    v4 += 3;
    if ( v6 >= v5 )
      return 1;
  }
  return 0;
}

//----- (0224CCB8) --------------------------------------------------------
BOOL __fastcall Function_224ccb8(int a1, int a2, int a3, uint a4)
{
  return (uint)Function_207d730(a1, (*(uint *)(a2 + 12 * a3 + 4) + 149) & 0xFFFF, a4) >= *(uint *)(a2 + 12 * a3 + 8);
}

//----- (0224CCE4) --------------------------------------------------------
int __fastcall Function_224cce4(int a1, int a2, int a3)
{
  return Function_2029d50(a1, *(uint *)(a2 + 12 * a3), 1);
}

//----- (0224CCF4) --------------------------------------------------------
uint __fastcall Function_224ccf4(int a1, int a2, int a3, int a4, uint a5)
{
  int v5;
  uint *v6;
  uint v7;
  int v8;
  uint result;

  v5 = a2;
  v6 = (uint *)(a3 + 12 * a4);
  v7 = v6[2];
  v8 = v6[1] + 149;
  Function_2029e2c(a1, *v6, 1);
  result = GiveItem(v5, (ushort)v8, (ushort)v7, a5);
  if ( result != 1 )
    result = ErrorHandler();
  return result;
}

//----- (0224CD28) --------------------------------------------------------
int __fastcall Function_224cd28(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = 0;
  do
  {
    if ( *(ushort *)(a2 + 2 * v4) == 0xFFFF )
      break;
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 < 0x100 );
  *(uchar *)(v3 + 560) = v4;
  *(uint *)(v3 + 556) = malloc(0xBu, 2 * *(uchar *)(v3 + 560));
  for ( result = 0; result < *(uchar *)(v3 + 560); result = (result + 1) & 0xFFFF )
    *(ushort *)(*(uint *)(v3 + 556) + 2 * result) = *(ushort *)(v2 + 2 * result);
  return result;
}

//----- (0224CD88) --------------------------------------------------------
int *Function_224cd88()
{
  int *v0;

  v0 = (int *)malloc(0xBu, 596);
  Call_FillMemWithValue(v0, 0, 0x254u);
  return v0;
}

//----- (0224CDA4) --------------------------------------------------------
uint *__fastcall Function_7_224cda4(int a1, uint *a2, int a3, char a4, int a5)
{
  uint *v5;
  int v6;
  char v7;
  int *v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  int v14;

  v5 = a2;
  v6 = a1;
  v14 = a3;
  v7 = a4;
  v8 = Function_224cd88();
  v9 = (int)v8;
  *v8 = v5[2];
  v8[141] = Function_2023790(96, 0xBu);
  *(uint *)(v9 + 524) = LoadTrainerDataAdress(v5[3]);
  *(uint *)(v9 + 532) = LoadPlayerDataAdress(v5[3]);
  *(uint *)(v9 + 540) = LoadVariableAreaAdress_14(v5[3]);
  *(uint *)(v9 + 548) = LoadFlagAdress(v5[3]);
  *(uint *)(v9 + 552) = a5;
  *(uchar *)(v9 + 578) = Function_224ce90(v5);
  *(uint *)(v9 + 536) = v5[39];
  *(uchar *)(v9 + 581) = v7;
  *(uint *)(v9 + 544) = v5[3];
  *(uint *)(v9 + 592) = Function_200c440(1, 2, 0, 0xBu);
  v10 = *(uchar *)(v9 + 581);
  if ( *(uchar *)(v9 + 581) )
  {
    if ( v10 == 3 )
    {
      *(uint *)(v9 + 528) = LoadVariableAreaAdressItemList(v5[3]);
    }
    else
    {
      v11 = v10 == 1;
      v12 = v5[3];
      if ( v11 )
        *(uint *)(v9 + 528) = LoadVariableAreaAdress_c(v12);
      else
        *(uint *)(v9 + 528) = LoadVariableAreaAdress_15(v12);
    }
  }
  else
  {
    *(uint *)(v9 + 528) = LoadVariableAreaAdressItemList(v5[3]);
  }
  Function_224cd28(v9, v14);
  return Function_2050944(v6, (int)Function_224ceac, v9);
}

//----- (0224CE90) --------------------------------------------------------
int __fastcall Function_224ce90(int a1)
{
  int v1;
  int result;

  v1 = GetSpriteFaceDirection(*(uint *)(a1 + 60));
  if ( v1 && v1 != 1 && v1 != 3 )
    result = 8;
  else
    result = 10;
  return result;
}

//----- (0224CEAC) --------------------------------------------------------
int __fastcall Function_224ceac(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v4;
  int result;
  uint v6;

  v1 = a1;
  v2 = LoadOverWorldDataAdress(a1);
  v3 = GetUnknownStruct01_c(v1);
  v4 = *(uchar *)(v3 + 563);
  if ( v4 <= 0x14 )
    JUMPOUT(__CS__, *((short *)&off_224CED4 + v4) + 35966678);
  switch ( (uchar)v4 )
  {
    case 0:
      Function_224d008();
      *(uchar *)(v3 + 563) = 1;
      goto LABEL_23;
    case 1:
      *(uchar *)(v3 + 563) = Function_224d1ec();
      goto LABEL_23;
    case 2:
      Function_224d388(v2, v3);
      *(uchar *)(v3 + 563) = 3;
      goto LABEL_23;
    case 3:
      *(uchar *)(v3 + 563) = Function_224d620();
      goto LABEL_23;
    case 4:
      *(uchar *)(v3 + 563) = Function_224dc84();
      goto LABEL_23;
    case 5:
      *(uchar *)(v3 + 563) = Function_224de94();
      goto LABEL_23;
    case 6:
      *(uchar *)(v3 + 563) = Function_224dfb0();
      goto LABEL_23;
    case 7:
      *(uchar *)(v3 + 563) = Function_224e3a0();
      goto LABEL_23;
    case 8:
      *(uchar *)(v3 + 563) = Function_224e3d8();
      goto LABEL_23;
    case 9:
      *(uchar *)(v3 + 563) = Function_224e5b0();
      goto LABEL_23;
    case 0xA:
      *(uchar *)(v3 + 563) = Function_224e6b8();
      goto LABEL_23;
    case 0xB:
      *(uchar *)(v3 + 563) = Function_224e7c8();
      goto LABEL_23;
    case 0xC:
      *(uchar *)(v3 + 563) = Function_224e950(v2, v3);
      goto LABEL_23;
    case 0xD:
      *(uchar *)(v3 + 563) = Function_224ea2c();
      goto LABEL_23;
    case 0xE:
      Function_224ec20(v2, v3);
      goto LABEL_23;
    case 0xF:
      Function_224ec38(v1);
      goto LABEL_23;
    case 0x12:
      *(uchar *)(v3 + 563) = Function_224ec9c(v2, v3);
      goto LABEL_23;
    case 0x13:
      Function_224ea54(v2, v3);
      *(uchar *)(v3 + 563) = 20;
      goto LABEL_23;
    case 0x14:
      result = Function_224d250(v2, v3);
      break;
    default:
LABEL_23:
      v6 = *(uchar *)(v3 + 563);
      if ( v6 >= 4 && v6 <= 0xB )
      {
        Function_2021e2c(*(uint *)(v3 + 504), 4096);
        Function_2021e2c(*(uint *)(v3 + 508), 4096);
        Function_20219f8(*(uint *)(v3 + 148));
      }
      result = 0;
      break;
  }
  return result;
}

//----- (0224D008) --------------------------------------------------------
int __fastcall Function_224d008(int a1)
{
  int v1;

  v1 = a1;
  Function_224d018();
  return Function_224d040(v1);
}

//----- (0224D018) --------------------------------------------------------
uint *__fastcall Function_224d018(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  *(uint *)(a1 + 136) = LoadFromMsgNARC(0, 26, 543, 0xBu);
  result = Function_200b358(0xBu);
  *(uint *)(v1 + 140) = result;
  return result;
}

//----- (0224D040) --------------------------------------------------------
int __fastcall Function_224d040(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char v6;
  int result;
  int v8;
  int v9;
  char v10;
  char v11;
  char v12;
  char v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = *(uchar *)(a1 + 581);
  if ( v5 )
  {
    if ( v5 == 3 )
    {
      v6 = 2;
      *(uint *)(v4 + 132) = Function_2013a04(2u, 0xBu);
      Function_2013a4c(*(uint **)(v4 + 132), *(ushort ***)(v4 + 136), 0x1Du, 2);
      Function_2013a4c(*(uint **)(v4 + 132), *(ushort ***)(v4 + 136), 0x1Eu, -2);
      Function_201a7e8(*(uint **)v4, v4 + 8, 3, 23, 13, 7u, 4u, 13, 489);
    }
    else
    {
      v6 = 2;
      *(uint *)(v4 + 132) = Function_2013a04(2u, 0xBu);
      Function_2013a4c(*(uint **)(v4 + 132), *(ushort ***)(v4 + 136), 0xFu, 2);
      Function_2013a4c(*(uint **)(v4 + 132), *(ushort ***)(v4 + 136), 0x11u, -2);
      Function_201a7e8(*(uint **)v4, v4 + 8, 3, 1, 1, 0xDu, 4u, 13, 489);
    }
  }
  else
  {
    v6 = 3;
    *(uint *)(v4 + 132) = Function_2013a04(3u, 0xBu);
    Function_2013a4c(*(uint **)(v4 + 132), *(ushort ***)(v4 + 136), 0xFu, 2);
    Function_2013a4c(*(uint **)(v4 + 132), *(ushort ***)(v4 + 136), 0x10u, 14);
    Function_2013a4c(*(uint **)(v4 + 132), *(ushort ***)(v4 + 136), 0x11u, -2);
    Function_201a7e8(*(uint **)v4, v4 + 8, 3, 1, 1, 0xDu, 6u, 13, 489);
  }
  v8 = *(uint *)(v4 + 132);
  v9 = v4 + 8;
  v10 = 0;
  v11 = 1;
  v12 = v6;
  v13 = 0;
  Function_200daa4(*(uint **)v4, 3u, 985, 11, 0, 11);
  Function_200dc48(v4 + 8, 1, 985, 0xBu);
  result = Function_2001b7c(&v8, 8, 0, 0, 0xBu, 2);
  *(uint *)(v4 + 128) = result;
  return result;
}

//----- (0224D1EC) --------------------------------------------------------
int __fastcall Function_224d1ec(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_2001be0(*(uint *)(a1 + 128));
  if ( result == -2 )
  {
    Function_224d21c(v1);
    result = 19;
  }
  else if ( result == -1 )
  {
    result = 1;
  }
  else
  {
    result = (uchar)result;
  }
  return result;
}

//----- (0224D21C) --------------------------------------------------------
uint __fastcall Function_224d21c(int a1)
{
  int v1;

  v1 = a1;
  Function_200dc9c(a1 + 8, 1);
  Function_201acf4(v1 + 8);
  Function_2001bc4(*(uint *)(v1 + 128), 0);
  Function_2013a3c(*(int **)(v1 + 132));
  return Function_201a8fc(v1 + 8);
}

//----- (0224D250) --------------------------------------------------------
int __fastcall Function_224d250(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  int v7;
  uchar *v8;
  uchar *v9;
  uchar *v10;
  uchar *v11;
  uchar *v12;

  v2 = a1;
  v3 = a2;
  if ( !Function_205da04(*(uchar *)(a2 + 576)) )
    return 0;
  if ( !(dword_21BF6C4 & 3) )
    return 0;
  Function_200e084(v3 + 24, 0);
  Function_201a8fc(v3 + 24);
  Function_200b190(*(ushort **)(v3 + 136));
  Function_200b3f0(*(uint **)(v3 + 140), v5);
  Function_20237bc_FreeMsg(*(uint *)(v3 + 564), v6);
  if ( !*(uchar *)(v3 + 581) && GetMapName(**(uint **)(v2 + 28)) != 101 )
  {
    v7 = **(uint **)(v2 + 28);
    if ( v7 != 81 && v7 != 446 )
    {
      if ( *(uchar *)(v3 + 579) && *(uchar *)(v3 + 580) )
      {
        v8 = Function_202bd38(0xBu);
        Function_202b758(*(uint *)(v3 + 536), (int)v8, 1u);
      }
      else if ( *(uchar *)(v3 + 579) <= 1u )
      {
        if ( *(uchar *)(v3 + 580) <= 1u )
        {
          if ( *(uchar *)(v3 + 579) )
          {
            v11 = Function_202bd08(0xBu);
            Function_202b758(*(uint *)(v3 + 536), (int)v11, 1u);
          }
          else if ( *(uchar *)(v3 + 580) )
          {
            v12 = Function_202bd20(0xBu);
            Function_202b758(*(uint *)(v3 + 536), (int)v12, 1u);
          }
        }
        else
        {
          v10 = Function_202bd2c(0xBu);
          Function_202b758(*(uint *)(v3 + 536), (int)v10, 1u);
        }
      }
      else
      {
        v9 = Function_202bd14(0xBu);
        Function_202b758(*(uint *)(v3 + 536), (int)v9, 1u);
      }
    }
  }
  Function_200c560(*(int **)(v3 + 592));
  free(*(uint *)(v3 + 556));
  free(v3);
  return 1;
}

//----- (0224D388) --------------------------------------------------------
int __fastcall Function_224d388(int a1, int *a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = (int)a2;
  Function_2019cb8(*a2, 3, 0, 0, 0x12u, 0x20u, 6u, 0);
  Function_224d21c(v3);
  Function_224d3e8(v3);
  *(uint *)(v3 + 144) = Function_20203ac(0xBu);
  Function_20203c0(*(int **)(v2 + 36), *(uint **)(v3 + 144));
  Function_20203d4(*(uint *)(v3 + 144));
  result = 577;
  *(uchar *)(v3 + 577) = 0;
  return result;
}

//----- (0224D3E8) --------------------------------------------------------
int __fastcall Function_224d3e8(int a1)
{
  int v1;
  uchar *v2;
  uint v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  v2 = (uchar *)dword_224F328;
  v3 = 0;
  v4 = a1 + 8;
  do
  {
    v5 = *(uchar *)(v1 + 581);
    if ( *(uchar *)(v1 + 581) && v5 != 3 && v3 == 1 )
    {
      result = Function_201a8d4(*(uint **)v1, v4, (uchar *)dword_224F2BC);
    }
    else if ( v5 != 3 || v3 != 2 )
    {
      result = Function_201a8d4(*(uint **)v1, v4, v2);
    }
    else
    {
      result = Function_201a8d4(*(uint **)v1, v4, (uchar *)dword_224F2C4);
    }
    ++v3;
    v4 += 16;
    v2 += 8;
  }
  while ( v3 < 6 );
  return result;
}

//----- (0224D44C) --------------------------------------------------------
uint __fastcall Function_224d44c(int a1)
{
  int v1;
  uint v2;
  int v3;
  uint result;

  v1 = a1;
  Function_200dc9c(a1 + 40, 1);
  v2 = 0;
  v3 = v1 + 8;
  do
  {
    Function_201acf4(v3);
    result = Function_201a8fc(v3);
    ++v2;
    v3 += 16;
  }
  while ( v2 < 6 );
  return result;
}

//----- (0224D474) --------------------------------------------------------
uint __fastcall Function_224d474(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uchar v6;

  v4 = a1;
  v5 = LoadFromNARC_8(62, 0xBu, a3, a4);
  Function_20070e8((int)v5, 0, *(uint **)v4, 1u, 0, 0, 0, 11);
  if ( *(uchar *)(v4 + 581) && *(uchar *)(v4 + 581) != 3 )
    Function_200710c((int)v5, 3u, *(uint **)v4, 1u, 0, 0, 0, 11);
  else
    Function_200710c((int)v5, 2u, *(uint **)v4, 1u, 0, 0, 0, 11);
  if ( *(uchar *)(v4 + 581) == 3 )
    Function_2007130((int)v5, 0xBu, 0, 0, 32, 11);
  else
    Function_2007130((int)v5, 1u, 0, 0, 32, 11);
  Function_200daa4(*(uint **)v4, 3u, 31, 11, 0, 11);
  v6 = Function_2027b50(*(ushort **)(v4 + 532));
  Function_200dd0c(*(uint **)v4, 3u, 1, 10, v6, 11);
  return Call_FS_CloseFile(v5);
}

//----- (0224D548) --------------------------------------------------------
uint __fastcall Function_224d548(int a1)
{
  int v1;
  char v2;
  char v3;
  char v4;
  char v5;

  v1 = a1;
  *(uint *)(a1 + 572) = Function_2020014();
  *(uchar *)(v1 + 568) = Function_201a008(*(uint *)v1, 0, v2);
  *(uchar *)(v1 + 569) = Function_201a008(*(uint *)v1, 1u, v3);
  *(uchar *)(v1 + 570) = Function_201a008(*(uint *)v1, 2u, v4);
  *(uchar *)(v1 + 571) = Function_201a008(*(uint *)v1, 3u, v5);
  Function_2019060(0, 3);
  Function_2019060(1u, 2);
  Function_2019060(2u, 1);
  Function_2019060(3u, 0);
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 1);
  Function_201ff0c(4u, 1);
  return Function_201ff0c(8u, 1);
}

//----- (0224D5D8) --------------------------------------------------------
uint __fastcall Function_224d5d8(int a1)
{
  int v1;

  v1 = a1;
  Function_2019060(0, *(uchar *)(a1 + 568));
  Function_2019060(1u, *(uchar *)(v1 + 569));
  Function_2019060(2u, *(uchar *)(v1 + 570));
  Function_2019060(3u, *(uchar *)(v1 + 571));
  return Function_201ff48(*(uint *)(v1 + 572));
}

//----- (0224D620) --------------------------------------------------------
int __fastcall Function_224d620(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  if ( *(uchar *)(a1 + 577) == *(uchar *)(a1 + 578) )
  {
    *(uchar *)(a1 + 577) = 0;
    MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
    Function_224ead0(v1);
    Function_224d474(v1, v3, v4, v5);
    Function_224d548(v1);
    Function_224d6bc(v1);
    Function_224daf8(v1, 0);
    result = 4;
  }
  else
  {
    v6 = 0x8000;
    v7 = 0;
    v8 = 0;
    Function_2020990(&v6, *(uint *)(a1 + 144));
    ++*(uchar *)(v1 + 577);
    result = 3;
  }
  return result;
}

//----- (0224D698) --------------------------------------------------------
int __fastcall Function_224d698(int a1, int a2)
{
  int v2;

  v2 = *(uchar *)(a1 + 581);
  if ( v2 == 1 )
    return a2;
  if ( v2 == 2 )
    a2 = Function_2098164((uchar)a2);
  return a2;
}

//----- (0224D6BC) --------------------------------------------------------
int __fastcall Function_224d6bc(int a1, int a2, int a3, int a4)
{
  uint v4;
  int v5;
  int v6;
  int v7;
  int v8;
  ushort *v9;
  int v10;
  int v11;
  ushort *v12;
  int v13;
  int v14;
  uint *v15;
  int result;
  int v17;
  ushort **v18;
  uint v19;
  ushort **v20;
  int v21;
  int (*v22)();
  int (*v23)();
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;

  v29 = a4;
  v5 = a1;
  v17 = 0;
  v6 = *(uchar *)(a1 + 581);
  if ( v6 && v6 != 3 )
  {
    if ( v6 == 1 )
      v20 = (ushort **)LoadFromMsgNARC(0, 26, 626, 0xBu);
    else
      v20 = (ushort **)LoadFromMsgNARC(0, 26, 12, 0xBu);
  }
  else
  {
    v20 = (ushort **)LoadFromMsgNARC(0, 26, 392, 0xBu);
    v18 = (ushort **)LoadFromMsgNARC(0, 26, 647, 0xBu);
  }
  *(uint *)(v5 + 124) = Function_2013a04(*(uchar *)(v5 + 560) + 1, 0xBu);
  v19 = 0;
  if ( *(uchar *)(v5 + 560) )
  {
    v7 = 0;
    do
    {
      v4 = Function_224d698(v5, *(ushort *)(*(uint *)(v5 + 556) + v7));
      if ( v4 > 0x1A4 || v4 < 0x148 )
      {
        v12 = Function_200b1ec_CallMsgDecrypt(v20, v4);
        Function_2013a6c(*(uint **)(v5 + 124), (int)v12, *(ushort *)(*(uint *)(v5 + 556) + v7), v13);
        Function_20237bc_FreeMsg((int)v12, v14);
      }
      else
      {
        v8 = Function_207d268((ushort)v4);
        v9 = Function_200b1ec_CallMsgDecrypt(v18, v8);
        Function_2013a6c(*(uint **)(v5 + 124), (int)v9, *(ushort *)(*(uint *)(v5 + 556) + v7), v10);
        Function_20237bc_FreeMsg((int)v9, v11);
        v17 = 1;
      }
      v7 += 2;
      ++v19;
    }
    while ( v19 < *(uchar *)(v5 + 560) );
  }
  v15 = *(uint **)(v5 + 124);
  if ( v17 )
    Function_2013a4c(v15, *(ushort ***)(v5 + 136), 0x1Au, -2);
  else
    Function_2013a4c(v15, *(ushort ***)(v5 + 136), 8u, -2);
  Function_200b190((ushort *)v20);
  if ( !*(uchar *)(v5 + 581) || *(uchar *)(v5 + 581) == 3 )
    Function_200b190((ushort *)v18);
  v21 = 0;
  v22 = Function_224d85c;
  v23 = Function_224d9b8;
  v24 = 0;
  v25 = 458752;
  v26 = 0x10000000;
  v27 = -2147483616;
  v28 = 0;
  if ( v4 > 0x1A4 || v4 < 0x148 )
    BYTE1(v26) = 0;
  else
    BYTE1(v26) = 35;
  v21 = *(uint *)(v5 + 124);
  v24 = v5 + 8;
  LOWORD(v25) = *(uchar *)(v5 + 560) + 1;
  v28 = v5;
  result = Function_200112c(&v21, 0, 0, 0xBu);
  *(uint *)(v5 + 120) = result;
  return result;
}

//----- (0224D85C) --------------------------------------------------------
int __fastcall Function_224d85c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  ushort *v8;
  ushort **v9;
  int v10;
  int v11;
  uint v12;
  int v14;
  char v15;
  ushort v16;
  int v17;

  v17 = a4;
  v4 = a2;
  v14 = a1;
  v5 = a3;
  v6 = Function_2001504(a1, 0x13u);
  if ( v5 != 1 )
    Function_2005748(0x638u);
  Function_201ada4_ClearTextBox(v6 + 24, 0);
  if ( v4 == -2 )
  {
    Function_224eb7c(v6, 0xFFFF);
  }
  else
  {
    v7 = *(uchar *)(v6 + 581);
    if ( *(uchar *)(v6 + 581) )
    {
      if ( v7 == 3 )
      {
        v8 = (ushort *)Function_2023790(130, 0xBu);
        Function_207cfc8(v8, (ushort)v4, 0xBu);
      }
      else
      {
        if ( v7 == 1 )
        {
          v9 = (ushort **)LoadFromMsgNARC(0, 26, 626, 0xBu);
          v8 = Function_200b1ec_CallMsgDecrypt(v9, v4 + 138);
        }
        else
        {
          v9 = (ushort **)LoadFromMsgNARC(0, 26, 542, 0xBu);
          v10 = Function_20981f4((uchar)v4);
          v8 = Function_200b1ec_CallMsgDecrypt(v9, v10);
        }
        Function_200b190((ushort *)v9);
      }
    }
    else
    {
      v8 = (ushort *)Function_2023790(130, 0xBu);
      Function_207cfc8(v8, (ushort)v4, 0xBu);
    }
    Function_201d78c(v6 + 24, 0);
    Function_20237bc_FreeMsg((int)v8, v11);
    Function_224eb7c(v6, (ushort)v4);
  }
  Function_20014dc(v14, &v16, &v15);
  if ( v16 )
    Function_2021cac(*(uint *)(v6 + 504), 1);
  else
    Function_2021cac(*(uint *)(v6 + 504), 0);
  v12 = Function_2001504(v14, 2u);
  if ( v12 <= 7 || v12 <= (uint)v16 + 7 )
    Function_2021cac(*(uint *)(v6 + 508), 0);
  else
    Function_2021cac(*(uint *)(v6 + 508), 1);
  return Function_201a9a4(v6 + 24);
}

//----- (0224D9B8) --------------------------------------------------------
uint __fastcall Function_224d9b8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  uint result;
  ushort *v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;

  v3 = a2;
  v4 = a3;
  v5 = Function_2001504(a1, 0x13u);
  if ( v3 != -2 )
  {
    if ( (ushort)v3 <= 0x1A4u && (ushort)v3 >= 0x148u )
      Function_200c648(*(uint *)(v5 + 592), 2, ((ushort)v3 - 327) & 0xFFFF, 2, 2, v5 + 8, 0, v4 + 4);
    v12 = Function_224e890(v5, (ushort)v3);
    v13 = Function_2023790(12, 0xBu);
    if ( *(uchar *)(v5 + 581) == 3 )
      v11 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 136), 0x20u);
    else
      v11 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 136), 9u);
    Function_200b60c(*(uint *)(v5 + 140), 0, v12, 4, 1, 1);
    Function_200c388(*(uint **)(v5 + 140), v13, (int)v11);
    Function_2002d7c(0, v13, 0);
    Function_201d78c(v5 + 8, 0);
    Function_20237bc_FreeMsg((int)v11, v6);
    Function_20237bc_FreeMsg(v13, v7);
  }
  result = -2;
  if ( v3 == -2 )
  {
    v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 136), 8u);
    Function_201ae78(v5 + 8, 15, 0, v4, 0x98u, 0x10u);
    Function_201d78c(v5 + 8, 0);
    result = Function_20237bc_FreeMsg((int)v9, v10);
  }
  return result;
}

//----- (0224DAF8) --------------------------------------------------------
int __fastcall Function_224daf8(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  if ( *(uchar *)(a1 + 581) == 3 )
  {
    if ( a2 )
    {
      Function_201ae78(a1 + 40, 15, 0, 0, 0x48u, 0x10u);
    }
    else
    {
      Function_201ada4_ClearTextBox(a1 + 40, 15);
      Function_200dc48(v2 + 40, 1, 31, 0xBu);
    }
    v3 = Function_2023790(16, 0xBu);
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 136), 0x26u);
    v5 = Function_224e8f4(v2);
    Function_200b60c(*(uint *)(v2 + 140), 0, v5, 6, 1, 1);
    Function_200c388(*(uint **)(v2 + 140), v3, (int)v4);
    Function_2002d7c(0, v3, 0);
    Function_201d738_CallInitTextInterpreter(v2 + 40, 0);
  }
  else
  {
    if ( a2 )
    {
      Function_201ae78(a1 + 40, 15, 0, 16, 0x48u, 0x10u);
    }
    else
    {
      Function_201ada4_ClearTextBox(a1 + 40, 15);
      Function_200dc48(v2 + 40, 1, 31, 0xBu);
      v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 136), 0x12u);
      Function_201d738_CallInitTextInterpreter(v2 + 40, 0);
      Function_20237bc_FreeMsg((int)v7, v8);
    }
    v3 = Function_2023790(16, 0xBu);
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 136), 0x13u);
    v9 = Function_224e8f4(v2);
    Function_200b60c(*(uint *)(v2 + 140), 0, v9, 6, 1, 1);
    Function_200c388(*(uint **)(v2 + 140), v3, (int)v4);
    Function_2002d7c(0, v3, 0);
    Function_201d738_CallInitTextInterpreter(v2 + 40, 0);
  }
  Function_20237bc_FreeMsg((int)v4, v6);
  Function_20237bc_FreeMsg(v3, v10);
  return Function_201a9a4(v2 + 40);
}

//----- (0224DC84) --------------------------------------------------------
int __fastcall Function_224dc84(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  uint v8;
  ushort *v9;
  int v10;
  int v11;
  ushort *v12;
  int v13;
  int v14;
  int result;
  int v16;

  v16 = a4;
  v4 = a1;
  Function_20014dc(*(uint *)(a1 + 120), 0, (ushort *)&v16 + 1);
  v5 = Function_2001288(*(uint *)(v4 + 120));
  Function_20014dc(*(uint *)(v4 + 120), 0, &v16);
  if ( HIWORD(v16) != (ushort)v16 )
    Function_200d494(*(uint *)(v4 + 512), 172, (short)(16 * v16 + 24), v6);
  if ( v5 == -2 )
  {
    Function_2001384(*(uint *)(v4 + 120), 0, 0);
    Function_2013a3c(*(int **)(v4 + 124));
    Function_224d44c(v4);
    Function_224d5d8(v4);
    Function_2019ebc(*(uint **)v4, 1u);
    Function_2005748(0x5DCu);
    result = 12;
  }
  else if ( v5 == -1 )
  {
    result = 4;
  }
  else
  {
    *(ushort *)(v4 + 520) = Function_2021d34(*(uint *)(v4 + 504));
    *(ushort *)(v4 + 522) = Function_2021d34(*(uint *)(v4 + 508));
    Function_2021cac(*(uint *)(v4 + 504), 0);
    Function_2021cac(*(uint *)(v4 + 508), 0);
    Function_224ec10(v4, 1);
    Function_201ada4_ClearTextBox(v4 + 88, 15);
    Function_201acf4(v4 + 24);
    Function_200e060(v4 + 88, 0, 1, 0xAu);
    *(ushort *)(v4 + 582) = v5;
    *(ushort *)(v4 + 584) = 1;
    *(uint *)(v4 + 588) = Function_224e890(v4, *(ushort *)(v4 + 582));
    v7 = Function_224e8f4(v4);
    v8 = *(uint *)(v4 + 588);
    if ( v7 >= v8 )
    {
      if ( *(uchar *)(v4 + 581) == 1 )
      {
        Function_2005748(0x5DCu);
        result = Function_224e098(v4);
      }
      else
      {
        *(ushort *)(v4 + 586) = u32_div_f(v7, v8);
        if ( *(ushort *)(v4 + 586) > 0x63u )
          *(ushort *)(v4 + 586) = 99;
        Function_224e834(v4, *(ushort *)(v4 + 582), 0);
        if ( *(uchar *)(v4 + 581) == 3 )
          v12 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 136), 0x21u);
        else
          v12 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 136), 4u);
        v13 = (int)v12;
        Function_200c388(*(uint **)(v4 + 140), *(uint *)(v4 + 564), (int)v12);
        Function_20237bc_FreeMsg(v13, v14);
        *(uchar *)(v4 + 576) = Function_205d994(v4 + 88, *(uint *)(v4 + 564), *(ushort **)(v4 + 532), 1);
        Function_224eb38(v4, 1);
        Function_2005748(0x5DCu);
        result = 5;
      }
    }
    else
    {
      if ( *(uchar *)(v4 + 581) == 3 )
        v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 136), 0x25u);
      else
        v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 136), 3u);
      v10 = (int)v9;
      Function_200c388(*(uint **)(v4 + 140), *(uint *)(v4 + 564), (int)v9);
      Function_20237bc_FreeMsg(v10, v11);
      *(uchar *)(v4 + 576) = Function_205d994(v4 + 88, *(uint *)(v4 + 564), *(ushort **)(v4 + 532), 1);
      result = 10;
    }
  }
  return result;
}

//----- (0224DE94) --------------------------------------------------------
int __fastcall Function_224de94(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_205da04(*(uchar *)(a1 + 576)) )
    return 5;
  Function_224ded4(v1);
  Function_224e28c(v1, 0);
  Function_2021cac(*(uint *)(v1 + 504), 1);
  Function_2021cac(*(uint *)(v1 + 508), 1);
  return 6;
}

//----- (0224DED4) --------------------------------------------------------
int __fastcall Function_224ded4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = *(uchar *)(a1 + 581);
  if ( v2 )
  {
    if ( v2 == 3 )
    {
      v3 = Function_207d730(*(uint *)(v1 + 528), *(ushort *)(v1 + 582), 0xBu);
    }
    else if ( v2 == 2 )
    {
      v3 = Function_202cbc8(*(uchar **)(v1 + 528), *(ushort *)(v1 + 582)) & 0xFFFF;
    }
    else
    {
      v3 = 0;
    }
  }
  else
  {
    v3 = Function_207d730(*(uint *)(v1 + 528), *(ushort *)(v1 + 582), 0xBu);
  }
  Function_201ada4_ClearTextBox(v1 + 72, 15);
  Function_200dc48(v1 + 72, 1, 31, 0xBu);
  v4 = Function_2023790(24, 0xBu);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 0x14u);
  Function_200b60c(*(uint *)(v1 + 140), 0, v3, 3, 1, 1);
  Function_200c388(*(uint **)(v1 + 140), v4, (int)v5);
  Function_201d738_CallInitTextInterpreter(v1 + 72, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  Function_20237bc_FreeMsg(v4, v7);
  return Function_201a9a4(v1 + 72);
}

//----- (0224DFB0) --------------------------------------------------------
int __fastcall Function_224dfb0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( Function_208c15c((ushort *)(a1 + 584), *(ushort *)(a1 + 586)) )
  {
    Function_2005748(0x638u);
    Function_224e28c(v1, 1);
    result = 6;
  }
  else if ( dword_21BF6C4 & 1 )
  {
    Function_2021cac(*(uint *)(v1 + 504), 0);
    Function_2021cac(*(uint *)(v1 + 508), 0);
    Function_200dc9c(v1 + 72, 1);
    Function_200dc9c(v1 + 56, 1);
    Function_201ada4_ClearTextBox(v1 + 88, 15);
    Function_2005748(0x5DCu);
    result = Function_224e098(v1);
  }
  else if ( dword_21BF6C4 & 2 )
  {
    Function_200dc9c(v1 + 72, 1);
    Function_200dc9c(v1 + 56, 1);
    Function_200e084(v1 + 88, 0);
    Function_224eb38(v1, 0);
    Function_2021cac(*(uint *)(v1 + 504), *(ushort *)(v1 + 520));
    Function_2021cac(*(uint *)(v1 + 508), *(ushort *)(v1 + 522));
    Function_224ec10(v1, 0);
    Function_201a9a4(v1 + 24);
    Function_2005748(0x5DCu);
    result = 4;
  }
  else
  {
    result = 6;
  }
  return result;
}

//----- (0224E098) --------------------------------------------------------
int __fastcall Function_224e098(int a1)
{
  int v1;
  int v2;
  BOOL v3;
  int v4;
  ushort *v5;
  int v6;
  int result;
  uint v8;
  int v9;
  ushort *v10;
  int v11;

  v1 = a1;
  v2 = *(uchar *)(a1 + 581);
  if ( v2 )
  {
    if ( v2 == 3 )
    {
      v3 = CheckStoreItem(*(uint *)(v1 + 528), *(ushort *)(v1 + 582), *(ushort *)(v1 + 584), 0xBu);
    }
    else if ( v2 == 1 )
    {
      v3 = Function_20289a0(*(uint *)(v1 + 528)) != 200;
    }
    else
    {
      v3 = Function_202cb70(
             *(uchar **)(v1 + 528),
             *(ushort *)(v1 + 582),
             *(short *)(v1 + 584));
    }
  }
  else
  {
    v3 = CheckStoreItem(*(uint *)(v1 + 528), *(ushort *)(v1 + 582), *(ushort *)(v1 + 584), 0xBu);
  }
  if ( v3 )
  {
    Function_224e834(v1, *(ushort *)(v1 + 582), 0);
    Function_200b60c(*(uint *)(v1 + 140), 1u, *(short *)(v1 + 584), 2, 0, 1);
    Function_200b60c(*(uint *)(v1 + 140), 2u, *(short *)(v1 + 584) * *(uint *)(v1 + 588), 6, 0, 1);
    v8 = *(ushort *)(v1 + 582);
    if ( v8 > 0x1A4 || v8 < 0x148 )
    {
      if ( *(uchar *)(v1 + 581) == 3 )
        v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 0x23u);
      else
        v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 5u);
    }
    else
    {
      v9 = Function_207d268(v8);
      Function_200b630(*(uint *)(v1 + 140), 3u, v9);
      if ( *(uchar *)(v1 + 581) == 3 )
        v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 0x24u);
      else
        v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 0x1Bu);
    }
    Function_200c388(*(uint **)(v1 + 140), *(uint *)(v1 + 564), (int)v10);
    Function_20237bc_FreeMsg((int)v10, v11);
    *(uchar *)(v1 + 576) = Function_205d994(v1 + 88, *(uint *)(v1 + 564), *(ushort **)(v1 + 532), 1);
    result = 7;
  }
  else
  {
    *(ushort *)(v1 + 584) = 0;
    v4 = *(uchar *)(v1 + 581);
    if ( *(uchar *)(v1 + 581) )
    {
      if ( v4 == 3 )
      {
        v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 7u);
      }
      else if ( v4 == 1 )
      {
        v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 0xCu);
      }
      else
      {
        v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 0xEu);
      }
    }
    else
    {
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 7u);
    }
    Function_200c388(*(uint **)(v1 + 140), *(uint *)(v1 + 564), (int)v5);
    Function_20237bc_FreeMsg((int)v5, v6);
    *(uchar *)(v1 + 576) = Function_205d994(v1 + 88, *(uint *)(v1 + 564), *(ushort **)(v1 + 532), 1);
    result = 10;
  }
  return result;
}

//----- (0224E28C) --------------------------------------------------------
int __fastcall Function_224e28c(int a1, int a2)
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

  v2 = a1;
  v3 = a2;
  Function_201ada4_ClearTextBox(a1 + 56, 15);
  if ( !v3 )
    Function_200dc48(v2 + 56, 1, 31, 0xBu);
  v4 = Function_2023790(24, 0xBu);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 136), 0x15u);
  Function_200b60c(*(uint *)(v2 + 140), 0, *(short *)(v2 + 584), 2, 2, 1);
  Function_200c388(*(uint **)(v2 + 140), v4, (int)v5);
  Function_201d738_CallInitTextInterpreter(v2 + 56, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  if ( *(uchar *)(v2 + 581) == 3 )
    v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 136), 0x22u);
  else
    v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 136), 0x16u);
  v8 = (int)v7;
  Function_200b60c(*(uint *)(v2 + 140), 0, *(short *)(v2 + 584) * *(uint *)(v2 + 588), 6, 1, 1);
  Function_200c388(*(uint **)(v2 + 140), v4, v8);
  Function_2002d7c(0, v4, 0);
  Function_201d738_CallInitTextInterpreter(v2 + 56, 0);
  Function_20237bc_FreeMsg(v8, v9);
  Function_20237bc_FreeMsg(v4, v10);
  return Function_201a9a4(v2 + 56);
}

//----- (0224E3A0) --------------------------------------------------------
int __fastcall Function_224e3a0(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_205da04(*(uchar *)(a1 + 576)) )
    return 7;
  *(uint *)(v1 + 128) = Function_2002100(*(uint **)v1, (uchar *)dword_224F2CC, 31, 11, 0xBu);
  return 8;
}

//----- (0224E3D8) --------------------------------------------------------
int __fastcall Function_224e3d8(int a1)
{
  int v1;
  int v2;
  int v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v1 = a1;
  v2 = Function_2002114(*(uint *)(a1 + 128), 0xBu);
  if ( v2 )
  {
    if ( v2 == -2 )
    {
      Function_200e084(v1 + 88, 0);
      Function_224eb38(v1, 0);
      Function_2021cac(*(uint *)(v1 + 504), *(ushort *)(v1 + 520));
      Function_2021cac(*(uint *)(v1 + 508), *(ushort *)(v1 + 522));
      Function_224ec10(v1, 0);
      Function_201a9a4(v1 + 24);
      result = 4;
    }
    else
    {
      result = 8;
    }
  }
  else
  {
    v3 = *(uchar *)(v1 + 581);
    if ( *(uchar *)(v1 + 581) )
    {
      if ( v3 == 3 )
      {
        if ( *(ushort *)(v1 + 584) == 1 )
          Function_200b70c(*(uint *)(v1 + 140), 0, *(ushort *)(v1 + 582));
        else
          Function_200b77c(*(uint *)(v1 + 140), 0, *(ushort *)(v1 + 582));
        v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 6u);
        v6 = GetItemData(*(ushort *)(v1 + 582), 5u, 0xBu);
        Function_200b7b4(*(uint *)(v1 + 140), 1u, v6);
      }
      else if ( v3 == 1 )
      {
        Function_224e834(v1, *(ushort *)(v1 + 582), 0);
        v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 0xBu);
      }
      else
      {
        if ( *(ushort *)(v1 + 584) == 1 )
        {
          v7 = Function_2098164(*(ushort *)(v1 + 582) & 0xFF);
          Function_200be64(*(uint *)(v1 + 140), 0, v7);
        }
        else
        {
          v8 = Function_2098164(*(ushort *)(v1 + 582) & 0xFF);
          Function_200be98(*(uint *)(v1 + 140), 0, v8);
        }
        v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 0xDu);
      }
    }
    else
    {
      v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 6u);
      if ( *(ushort *)(v1 + 584) == 1 )
        Function_200b70c(*(uint *)(v1 + 140), 0, *(ushort *)(v1 + 582));
      else
        Function_200b77c(*(uint *)(v1 + 140), 0, *(ushort *)(v1 + 582));
      v5 = GetItemData(*(ushort *)(v1 + 582), 5u, 0xBu);
      Function_200b7b4(*(uint *)(v1 + 140), 1u, v5);
    }
    Function_200c388(*(uint **)(v1 + 140), *(uint *)(v1 + 564), (int)v4);
    Function_20237bc_FreeMsg((int)v4, v9);
    Function_201ada4_ClearTextBox(v1 + 88, 15);
    *(uchar *)(v1 + 576) = Function_205d994(v1 + 88, *(uint *)(v1 + 564), *(ushort **)(v1 + 532), 1);
    Function_2005748(0x644u);
    result = 9;
  }
  return result;
}

//----- (0224E5B0) --------------------------------------------------------
int __fastcall Function_224e5b0(int a1)
{
  int v1;
  int v3;
  int v4;

  v1 = a1;
  if ( !Function_205da04(*(uchar *)(a1 + 576)) )
    return 9;
  v3 = *(uchar *)(v1 + 581);
  if ( *(uchar *)(v1 + 581) )
  {
    if ( v3 == 3 )
    {
      TakeItem(*(uint *)(v1 + 528), *(ushort *)(v1 + 582), *(ushort *)(v1 + 584), 0xBu);
    }
    else if ( v3 == 1 )
    {
      Function_202895c(*(uint *)(v1 + 528), *(ushort *)(v1 + 582));
    }
    else
    {
      Function_202cae0(*(uchar **)(v1 + 528), *(ushort *)(v1 + 582), *(short *)(v1 + 584));
    }
  }
  else
  {
    TakeItem(*(uint *)(v1 + 528), *(ushort *)(v1 + 582), *(ushort *)(v1 + 584), 0xBu);
    Function_206d504(*(uint *)(v1 + 544), *(ushort *)(v1 + 582), *(ushort *)(v1 + 584) & 0xFF, v4);
  }
  Function_224e920(v1, *(short *)(v1 + 584) * *(uint *)(v1 + 588));
  if ( *(uchar *)(v1 + 581) == 3 )
    Function_202cf70(*(uint *)(v1 + 540), 69, *(short *)(v1 + 584) * *(uint *)(v1 + 588));
  else
    Function_202cf70(*(uint *)(v1 + 540), 35, *(short *)(v1 + 584) * *(uint *)(v1 + 588));
  Function_224daf8(v1, 1);
  if ( *(short *)(v1 + 584) <= 1 )
  {
    if ( *(uchar *)(v1 + 579) != 255 )
      ++*(uchar *)(v1 + 579);
  }
  else
  {
    *(uchar *)(v1 + 579) = 2;
  }
  return 10;
}

//----- (0224E6B8) --------------------------------------------------------
int __fastcall Function_224e6b8(int a1)
{
  int v1;
  int result;
  ushort *v3;
  int v4;
  int v5;

  v1 = a1;
  if ( !Function_205da04(*(uchar *)(a1 + 576)) )
    return 10;
  if ( !(dword_21BF6C4 & 3) )
    return 10;
  if ( *(uint *)(v1 + 552) == 1 )
    Function_206b3b4(*(uint *)(v1 + 548));
  if ( *(uchar *)(v1 + 581) && *(uchar *)(v1 + 581) != 3
    || *(ushort *)(v1 + 582) != 4
    || *(short *)(v1 + 584) < 10
    || TakeItem(*(uint *)(v1 + 528), 0xCu, 1, 0xBu) != 1 )
  {
    Function_200e084(v1 + 88, 0);
    Function_224eb38(v1, 0);
    Function_2021cac(*(uint *)(v1 + 504), *(ushort *)(v1 + 520));
    Function_2021cac(*(uint *)(v1 + 508), *(ushort *)(v1 + 522));
    Function_224ec10(v1, 0);
    Function_201a9a4(v1 + 24);
    result = 4;
  }
  else
  {
    v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 136), 0xAu);
    Function_200c388(*(uint **)(v1 + 140), *(uint *)(v1 + 564), (int)v3);
    Function_20237bc_FreeMsg((int)v3, v4);
    Function_201ada4_ClearTextBox(v1 + 88, 15);
    *(uchar *)(v1 + 576) = Function_205d994(v1 + 88, *(uint *)(v1 + 564), *(ushort **)(v1 + 532), 1);
    v5 = LoadVariableAreaAdress_14(*(uint *)(v1 + 544));
    Function_202cf28(v5, 50);
    result = 11;
  }
  return result;
}

//----- (0224E7C8) --------------------------------------------------------
int __fastcall Function_224e7c8(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_205da04(*(uchar *)(a1 + 576)) )
    return 11;
  if ( !(dword_21BF6C4 & 3) )
    return 11;
  Function_200e084(v1 + 88, 0);
  Function_224eb38(v1, 0);
  Function_2021cac(*(uint *)(v1 + 504), *(ushort *)(v1 + 520));
  Function_2021cac(*(uint *)(v1 + 508), *(ushort *)(v1 + 522));
  Function_224ec10(v1, 0);
  Function_201a9a4(v1 + 24);
  return 4;
}

//----- (0224E834) --------------------------------------------------------
ushort *__fastcall Function_224e834(int a1, uchar a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int v7;

  v3 = a1;
  v4 = *(uchar *)(a1 + 581);
  v5 = a3;
  switch ( v4 )
  {
    case 0:
      return Function_200b70c(*(uint *)(v3 + 140), a3, a2);
    case 3:
      return Function_200b70c(*(uint *)(v3 + 140), a3, a2);
    case 1:
      return Function_200bc80(*(uint *)(v3 + 140), a3, a2);
  }
  v7 = Function_2098164(a2);
  return Function_200be64(*(uint *)(v3 + 140), v5, v7);
}

//----- (0224E890) --------------------------------------------------------
int __fastcall Function_224e890(int a1, uchar a2)
{
  int v2;

  v2 = *(uchar *)(a1 + 581);
  if ( !*(uchar *)(a1 + 581) )
    return GetItemData(a2, 0, 0xBu);
  if ( v2 == 3 )
    return Function_224e8cc();
  if ( v2 == 1 )
    return Function_205745c(a2);
  return Function_20981d0(a2);
}

//----- (0224E8CC) --------------------------------------------------------
int __fastcall Function_224e8cc(int a1, int a2)
{
  short *v2;
  uint v3;

  v2 = &word_224F3F8;
  v3 = 0;
  do
  {
    if ( a2 == (ushort)*v2 )
      return (ushort)word_224F3FA[2 * v3];
    ++v3;
    v2 += 2;
  }
  while ( v3 < 0x29 );
  return 0;
}

//----- (0224E8F4) --------------------------------------------------------
int __fastcall Function_224e8f4(int a1)
{
  ushort *v1;

  if ( *(uchar *)(a1 + 581) != 3 )
    return GetMoney(*(uint *)(a1 + 524));
  v1 = (ushort *)Function_202d750(*(uint *)(a1 + 544));
  return Function_202d230(v1, 0, 0);
}

//----- (0224E920) --------------------------------------------------------
int __fastcall Function_224e920(int a1, short a2)
{
  ushort v2;
  ushort *v3;

  v2 = a2;
  if ( *(uchar *)(a1 + 581) != 3 )
    return TakeMoney(*(uint *)(a1 + 524), a2);
  v3 = (ushort *)Function_202d750(*(uint *)(a1 + 544));
  return Function_202d230(v3, v2, 6u);
}

//----- (0224E950) --------------------------------------------------------
int __fastcall Function_224e950(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  ushort *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  if ( *(uchar *)(a2 + 577) == *(uchar *)(a2 + 578) )
  {
    *(uchar *)(a2 + 577) = 0;
    Function_20203c0(*(int **)(a2 + 144), *(uint **)(a1 + 36));
    Call_free5(*(uint *)(v3 + 144));
    Function_20203d4(*(uint *)(v2 + 36));
    Function_224eb14(v3);
    if ( *(uchar *)(v3 + 581) == 3 )
    {
      result = 19;
    }
    else
    {
      Function_205d8f4(*(uint **)(v2 + 8), v3 + 24, 3);
      Function_205d944(v3 + 24, *(ushort **)(v3 + 532));
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 136), 2u);
      Function_200c388(*(uint **)(v3 + 140), *(uint *)(v3 + 564), (int)v5);
      Function_20237bc_FreeMsg((int)v5, v6);
      *(uchar *)(v3 + 576) = Function_205d994(v3 + 24, *(uint *)(v3 + 564), *(ushort **)(v3 + 532), 1);
      result = 13;
    }
  }
  else
  {
    v7 = -32768;
    v8 = 0;
    v9 = 0;
    Function_2020990(&v7, *(uint *)(a2 + 144));
    ++*(uchar *)(v3 + 577);
    result = 12;
  }
  return result;
}

//----- (0224EA2C) --------------------------------------------------------
int __fastcall Function_224ea2c(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  if ( !Function_205da04(*(uchar *)(a1 + 576)) )
    return 13;
  Function_201a8fc(v1 + 24);
  Function_224d040(v1, v3, v4, v5);
  return 1;
}

//----- (0224EA54) --------------------------------------------------------
int __fastcall Function_224ea54(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;
  int v6;
  int result;

  v2 = a1;
  v3 = a2;
  if ( *(uchar *)(a2 + 581) == 3 )
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a2 + 136), 0x1Fu);
  else
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a2 + 136), 1u);
  v5 = (int)v4;
  Function_200c388(*(uint **)(v3 + 140), *(uint *)(v3 + 564), (int)v4);
  Function_20237bc_FreeMsg(v5, v6);
  Function_205d8f4(*(uint **)(v2 + 8), v3 + 24, 3);
  Function_205d944(v3 + 24, *(ushort **)(v3 + 532));
  result = Function_205d994(v3 + 24, *(uint *)(v3 + 564), *(ushort **)(v3 + 532), 1);
  *(uchar *)(v3 + 576) = result;
  return result;
}

//----- (0224EAD0) --------------------------------------------------------
uint __fastcall Function_224ead0(int a1)
{
  int v1;
  int *v2;
  uint v3;
  int v4;

  v1 = a1;
  ((void (__fastcall *)(int, char **, int, int))dword_21D2F14[0])(a1 + 148, off_224F2EC, 4, 11);
  v2 = &dword_224F358;
  v3 = 0;
  v4 = v1 + 148;
  do
  {
    *(uint *)(v1 + 504) = ((int (__fastcall *)(int, int *))dword_21D3104[0])(v4, v2);
    ++v3;
    v2 += 10;
    v1 += 4;
  }
  while ( v3 < 4 );
  return Function_201ff0c(0x10u, 1);
}

//----- (0224EB14) --------------------------------------------------------
int __fastcall Function_224eb14(int a1)
{
  int v1;
  uint v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_2021bd4(*(uint *)(v3 + 504));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  return ((int (__fastcall *)(int))dword_21D30A8[0])(v1 + 148);
}

//----- (0224EB38) --------------------------------------------------------
int __fastcall Function_224eb38(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;

  v4 = a1;
  if ( a2 )
  {
    Function_200d494(*(uint *)(a1 + 504), 162, 108, a4);
    result = Function_200d494(*(uint *)(v4 + 508), 162, 132, v7);
  }
  else
  {
    Function_200d494(*(uint *)(a1 + 504), 177, 8, a4);
    result = Function_200d494(*(uint *)(v4 + 508), 177, 132, v5);
  }
  return result;
}

//----- (0224EB7C) --------------------------------------------------------
int __fastcall Function_224eb7c(int a1, int a2)
{
  int v2;
  int v3;
  int *v5;
  int v6;
  int *v7;
  int v8;

  v2 = a1;
  v3 = a2;
  if ( *(uchar *)(a1 + 581) && *(uchar *)(a1 + 581) != 3 )
    return Function_2021cac(*(uint *)(a1 + 516), 0);
  v5 = (int *)Function_2009dc8(*(uint *)(a1 + 452), 2);
  v6 = Function_207ce78(v3, 1u);
  Function_2009968(*(int **)(v2 + 452), v5, 16, v6, 0, 11);
  Function_200a4c0(v5);
  v7 = (int *)Function_2009dc8(*(uint *)(v2 + 456), 1);
  v8 = Function_207ce78(v3, 2u);
  Function_20099d4(*(int **)(v2 + 456), v7, 16, v8, 0, 11);
  return Function_200a6b8(v7);
}

//----- (0224EC10) --------------------------------------------------------
int __fastcall Function_224ec10(int a1, char a2)
{
  return Function_200d414(*(uint *)(a1 + 512), a2);
}

//----- (0224EC20) --------------------------------------------------------
int __fastcall Function_224ec20(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  ((void (__fastcall *)(uint))dword_21D1744[0])(0);
  result = 563;
  *(uchar *)(v2 + 563) = 15;
  return result;
}

//----- (0224EC38) --------------------------------------------------------
int __fastcall Function_224ec38(uint *a1)
{
  uint *v1;
  int result;
  int v3;
  int v4;
  int v5;
  int *v6;

  v1 = a1;
  result = Function_200f2ac();
  if ( result )
  {
    v3 = LoadOverWorldDataAdress((int)v1);
    v4 = GetUnknownStruct01_c((int)v1);
    Function_224d21c(v4);
    v5 = LoadVariableAreaAdressItemList(*(uint *)(v3 + 12));
    v6 = Function_207d824(v5, (uchar *)dword_224F49C, 0xBu);
    *(uint *)(v4 + 4) = v6;
    Function_207cb2c((int)v6, *(uint *)(v3 + 12), 2, *(uint *)(v3 + 152));
    Function_203d1e4(v3, *(uint *)(v4 + 4));
    Function_2050924(v1, (int)Function_209ac14, v4);
    result = 563;
    *(uchar *)(v4 + 563) = 16;
  }
  return result;
}

//----- (0224EC9C) --------------------------------------------------------
int __fastcall Function_224ec9c(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  if ( !Function_200f2ac() )
    return 18;
  Function_205d8f4(*(uint **)(v2 + 8), v3 + 24, 3);
  Function_205d944(v3 + 24, *(ushort **)(v3 + 532));
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 136), 2u);
  Function_200c388(*(uint **)(v3 + 140), *(uint *)(v3 + 564), (int)v5);
  Function_20237bc_FreeMsg((int)v5, v6);
  *(uchar *)(v3 + 576) = Function_205d994(v3 + 24, *(uint *)(v3 + 564), *(ushort **)(v3 + 532), 1);
  return 13;
}

