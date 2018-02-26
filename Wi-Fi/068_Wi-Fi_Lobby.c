//----- (0225C700) --------------------------------------------------------
int __fastcall Function_225c700(int a1)
{
  int v1;
  uint *v2;
  int *v3;

  v1 = a1;
  v2 = (uint *)LoadPtrToOverWorldDataIn18(a1);
  Function_2017fc8(3, 122, 327680);
  v3 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 652, 0x7Au);
  Call_FillMemWithValue(v3, 0, 0x28Cu);
  Function_225c91c(v3, *v2, 122);
  Function_225cb70(v3 + 81, v2[1], 122);
  Function_225d128(v3 + 154, v3, *v2, 122);
  if ( v2[2] >= 2 )
    ErrorHandler();
  ((void (__fastcall *)(int *, int *, int *, uint *, int))*(&off_225DEB0 + v2[2]))(
    v3 + 94,
    v3 + 81,
    v3,
    v2,
    122);
  SetMainLoopFunctionCall((int)Function_225c914, (int)v3);
  Function_20177a4();
  return 1;
}

//----- (0225C798) --------------------------------------------------------
int __fastcall Function_225c798(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  v5 = LoadPtrToOverWorldDataIn18(v2);
  switch ( (uchar)*v3 )
  {
    case 0u:
      Function_200f174(0, 1, 1, 0, 6, 1, 122);
      ((void (__fastcall *)(uint, int))dword_222E31C[0])(*(uint *)(v5 + 4), 1);
      ++*v3;
      goto LABEL_15;
    case 1u:
      if ( Function_200f2ac() == 1 )
        ++*v3;
      goto LABEL_15;
    case 2u:
      if ( Function_200f2ac() != 1 )
        goto LABEL_10;
      if ( ((int (__fastcall *)(uint))dword_222E12C[0])(*(uint *)(v5 + 4)) == 1 )
      {
        ((void (__fastcall *)(uint))dword_222E2A4[0])(*(uint *)(v5 + 4));
        ++*v3;
      }
      else if ( ((int (*)(void))dword_2231760[0])() == 1 )
      {
        ++*v3;
      }
      else
      {
LABEL_10:
        if ( ((int (__fastcall *)(int, int, int, int, int, int))*(&off_225DEA8 + *(uint *)(v5 + 8)))(
               v4 + 376,
               v4 + 324,
               v4,
               v4 + 616,
               v5,
               122) == 1 )
          ++*v3;
      }
      goto LABEL_15;
    case 3u:
      Function_200f174(0, 0, 0, 0, 6, 1, 122);
      ++*v3;
      goto LABEL_15;
    case 4u:
      if ( Function_200f2ac() != 1 )
        goto LABEL_15;
      Function_225d2a0(v4 + 616);
      result = 1;
      break;
    default:
LABEL_15:
      Function_225c980(v4);
      result = 0;
      break;
  }
  return result;
}

//----- (0225C8A8) --------------------------------------------------------
int __fastcall Function_225c8a8(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = LoadPtrToOverWorldDataIn18(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  ((void (__fastcall *)(int, int, int))*(&off_225DEA0 + *(uint *)(v3 + 8)))(v2 + 376, v2 + 324, v2);
  Function_225d178(v2 + 616, 122);
  Function_225cbc0(v2 + 324);
  Function_225c960(v2);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(122);
  Function_20057bc();
  return 1;
}

//----- (0225C914) --------------------------------------------------------
int Function_225c914()
{
  return Function_225c98c();
}

//----- (0225C91C) --------------------------------------------------------
int __fastcall Function_225c91c(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;

  v3 = a1;
  v4 = a3;
  v5 = LoadPlayerDataAdress(a2);
  *(uint *)(v3 + 320) = LoadFromNARC_8(186, v4, v6, v7);
  Function_201dbec(32, v4);
  GX_SetBanks(&dword_225DDA0[8]);
  Function_225c9a0(v3, v5, v4);
  return Function_225cab4(v3, v4);
}

//----- (0225C960) --------------------------------------------------------
int __fastcall Function_225c960(int a1)
{
  int v1;

  v1 = a1;
  Call_FS_CloseFile(*(int **)(a1 + 320));
  Function_201dc3c();
  Function_225ca8c(v1);
  return Function_225cb44(v1);
}

//----- (0225C980) --------------------------------------------------------
int __fastcall Function_225c980(int a1)
{
  return Function_20219f8(*(uint *)(a1 + 4));
}

//----- (0225C98C) --------------------------------------------------------
int __fastcall Function_225c98c(int *a1)
{
  Function_201c2b8(*a1);
  Function_200a858();
  return Function_201dcac();
}

//----- (0225C9A0) --------------------------------------------------------
int __fastcall Function_225c9a0(uint **a1, ushort *a2, uint a3)
{
  uint **v3;
  uint v4;
  int *v5;
  int *v6;
  uchar v7;
  ushort *v9;
  int v10;

  v3 = a1;
  v4 = a3;
  v9 = a2;
  SetGraphicsModes(&dword_225DD38[4]);
  *v3 = (uint *)Function_2018340(v4);
  byte_21BF6E1 = 0;
  Function_201ffe8();
  v5 = &dword_225DDE8[12];
  v6 = &dword_225DD68;
  v10 = 0;
  do
  {
    Function_20183c4(*v3, *v6 & 0xFF, v5, 0);
    Function_2019690(*v6 & 0xFF, 32, 0, v4);
    Function_2019ebc(*v3, *v6 & 0xFF);
    v5 += 7;
    ++v6;
    ++v10;
  }
  while ( v10 < 4 );
  LoadFromNARC_PlFont2(0, 128, v4);
  v7 = Function_2027b50(v9);
  Function_200dd0c(*v3, 1u, 1, 5, v7, v4);
  Function_200daa4(*v3, 1u, 31, 6, 0, v4);
  LoadFromNARC_RGCN(169, 2, *v3, 4u, 0, 0, 0, v4);
  LoadFromNARC_RCSN(169, 6, *v3, 4u, 0, 0, 0, v4);
  return Call_LoadFromNARC_RLCN(169, 0, 4u, 0, 0, v4);
}

//----- (0225CA8C) --------------------------------------------------------
uint __fastcall Function_225ca8c(int *a1)
{
  int *v1;
  int *v2;
  int v3;

  v1 = &dword_225DD68;
  v2 = a1;
  v3 = 0;
  do
  {
    Function_2019044(*v2, *v1 & 0xFF);
    ++v3;
    ++v1;
  }
  while ( v3 < 4 );
  return free(*v2);
}

//----- (0225CAB4) --------------------------------------------------------
uint __fastcall Function_225cab4(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int *v7;

  v2 = a1;
  v3 = a2;
  Function_20a7944();
  Function_200a784(0, 126, 0, 31, 0, 0x7Eu, 0, 0x1Fu, v3);
  Function_201e88c(dword_225DD58, 16, 16);
  Function_201f834(32, v3);
  Function_201e994();
  Function_201f8e4();
  Function_200966c(1, 16, v4, v5);
  Function_2009704(1);
  *(uint *)(v2 + 4) = Function_20095c4(32, v2 + 8, v3, v6);
  v7 = 0;
  do
  {
    *(uint *)(v2 + 304) = Function_2009714(32, v7, v3);
    v7 = (int *)((char *)v7 + 1);
    v2 += 4;
  }
  while ( (int)v7 < 4 );
  Function_2039734();
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (0225CB44) --------------------------------------------------------
int *__fastcall Function_225cb44(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_2021964(*(int **)(a1 + 4));
  v2 = 0;
  do
  {
    Function_2009754(*(int **)(v1 + 304));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  Function_201e958();
  Function_201f8b4();
  return Function_200a878();
}

//----- (0225CB70) --------------------------------------------------------
int __fastcall Function_225cb70(uint *a1, int a2, uint a3)
{
  int *v3;
  uint v4;
  int v5;
  int *v6;
  int v7;
  int result;
  uint *v9;

  v3 = &dword_225DD9C;
  v9 = a1;
  v4 = a3;
  a1[12] = a2;
  v5 = 0;
  v6 = a1;
  do
  {
    v7 = LoadFromMsgNARC(0, 26, *v3, v4);
    ++v5;
    ++v3;
    *v6 = v7;
    ++v6;
  }
  while ( v5 < 9 );
  v9[9] = Function_200b358(v4);
  v9[10] = Function_2023790(256, v4);
  result = Function_2023790(256, v4);
  v9[11] = result;
  return result;
}

//----- (0225CBC0) --------------------------------------------------------
uint __fastcall Function_225cbc0(ushort **a1)
{
  ushort **v1;
  int v2;
  ushort **v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    Function_200b190(*v3);
    ++v2;
    ++v3;
  }
  while ( v2 < 9 );
  Function_200b3f0((uint *)v1[9], v4);
  Function_20237bc_FreeMsg((int)v1[10], v5);
  return Function_20237bc_FreeMsg((int)v1[11], v6);
}

//----- (0225CBEC) --------------------------------------------------------
int __fastcall Function_225cbec(int a1, uint a2, uint a3)
{
  uint v3;
  int v4;
  uint v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 9 )
    ErrorHandler();
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 4 * v3), v5, *(ushort **)(v4 + 44));
  Function_200c388(*(uint **)(v4 + 36), *(uint *)(v4 + 40), *(uint *)(v4 + 44));
  return *(uint *)(v4 + 40);
}

//----- (0225CC18) --------------------------------------------------------
int __fastcall Function_225cc18(int a1, uint a2)
{
  uint v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x3C )
  {
    if ( a2 < 0x3C )
      ErrorHandler();
    v2 = 0;
  }
  if ( v2 >= 0x32 )
    result = Function_225cbec(v3, 2u, v2 - 50);
  else
    result = Function_225cbec(v3, 1u, v2);
  return result;
}

//----- (0225CC44) --------------------------------------------------------
int __fastcall Function_225cc44(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 0x3C )
  {
    if ( a2 < 0x3C )
      ErrorHandler();
    v3 = 0;
  }
  if ( v3 >= 0x32 )
    result = Function_225cbec(v4, v5 + 6, v3 - 50);
  else
    result = Function_225cbec(v4, v5 + 3, v3);
  return result;
}

//----- (0225CC78) --------------------------------------------------------
uint __fastcall Function_225cc78(int a1, uint a2, uint a3)
{
  uint v3;
  int v4;
  uint v5;
  int *v6;
  int v7;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = AllocTrainerData(a3);
  v7 = ((int (__fastcall *)(uint))dword_222E31C[40])(*(uint *)(v4 + 48));
  ((void (__fastcall *)(int, int *, uint))dword_222E63C[1])(v7, v6, v3);
  Function_200b498(*(uint *)(v4 + 36), v5);
  return free((int)v6);
}

//----- (0225CCA8) --------------------------------------------------------
int __fastcall Function_225cca8(int a1, int a2, int a3, int a4, int a5)
{
  return Function_225ccd0(a1, a2, a3, a5);
}

//----- (0225CCB4) --------------------------------------------------------
int __fastcall Function_225ccb4(int a1, int a2)
{
  return Function_225ce48(a1, a2);
}

//----- (0225CCC8) --------------------------------------------------------
int Function_225ccc8()
{
  return Function_225d02c();
}

//----- (0225CCD0) --------------------------------------------------------
int __fastcall Function_225ccd0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
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

  v4 = a1;
  v5 = a4;
  v6 = a3;
  Function_2007130(*(uint *)(a3 + 320), 0xC7u, 0, 0, 128, a4);
  Function_20070e8(*(uint *)(v6 + 320), 0xC8u, *(uint **)v6, 0, 0, 0, 0, v5);
  Function_200710c(*(uint *)(v6 + 320), 0xC9u, *(uint **)v6, 0, 0, 0, 0, v5);
  *(uint *)(v4 + 24) = Function_2009a4c(*(uint *)(v6 + 304), *(uint *)(v6 + 320), 0xCDu, 0, 20, 1, v5);
  *(uint *)(v4 + 28) = Function_2009b04(*(uint *)(v6 + 308), *(uint *)(v6 + 320), 0xCCu, 0, 20, 1, 3, v5);
  if ( !Function_200a3dc(*(int **)(v4 + 24)) )
    ErrorHandler();
  if ( !Function_200a640(*(int **)(v4 + 28)) )
    ErrorHandler();
  Function_2009d4c(*(int **)(v4 + 24));
  Function_2009d4c(*(int **)(v4 + 28));
  *(uint *)(v4 + 32) = Function_2009bc4(*(uint *)(v6 + 312), *(uint *)(v6 + 320), 0xCEu, 0, 20, 2u, v5);
  *(uint *)(v4 + 36) = Function_2009bc4(*(uint *)(v6 + 316), *(uint *)(v6 + 320), 0xCFu, 0, 20, 3u, v5);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  Function_20093b4(
    (int)&v17,
    20,
    20,
    20,
    20,
    -1,
    -1,
    0,
    0,
    *(uint *)(v6 + 304),
    *(uint *)(v6 + 308),
    *(uint *)(v6 + 312),
    *(uint *)(v6 + 316),
    0,
    0);
  v9 = *(uint *)(v6 + 4);
  v10 = &v17;
  v14 = 0;
  v15 = 1;
  v16 = v5;
  v7 = Function_2021b90(&v9);
  *(uint *)(v4 + 20) = v7;
  Function_2021cac(v7, 0);
  Function_201a8d4(*(uint **)v6, v4, (uchar *)&dword_225DD38[2]);
  return Function_225db8c(v4 + 44, 1, v5);
}

//----- (0225CE48) --------------------------------------------------------
int __fastcall Function_225ce48(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint v17;
  int v18;

  v6 = a1;
  v7 = a4;
  v8 = *(ushort *)(a1 + 40);
  v9 = a2;
  if ( v8 <= 0xA )
    JUMPOUT(__CS__, *((short *)&off_225CE64 + v8) + 36032102);
  switch ( (uchar)v8 )
  {
    case 0:
      v10 = Function_225cbec(a2, 0, 0x5Eu);
      Function_225d1b4(v7, v10);
      *(ushort *)(v6 + 42) = 1;
      *(ushort *)(v6 + 40) = 10;
      return 0;
    case 1:
      Function_225d304(v7, a3, a6);
      *(ushort *)(v6 + 40) = 2;
      return 0;
    case 2:
      v11 = Function_225d330(v7, a6);
      if ( v11 )
      {
        if ( v11 == -2 )
          *(ushort *)(v6 + 40) = 9;
      }
      else
      {
        *(ushort *)(v6 + 40) = 3;
      }
      return 0;
    case 3:
      if ( *(uint *)(a1 + 52) )
        v12 = 93;
      else
        v12 = 92;
      v13 = Function_225cbec(a2, 0, v12);
      Function_225d1b4(v7, v13);
      *(ushort *)(v6 + 42) = 4;
      *(ushort *)(v6 + 40) = 10;
      return 0;
    case 4:
      Function_225d06c();
      v14 = Function_225dc40(v6 + 44, v9);
      Function_225d218(v7, v14);
      Function_225d0f8(v6);
      Function_225d11c(v6);
      *(ushort *)(v6 + 40) = 5;
      return 0;
    case 5:
      if ( dword_21BF6C4 & 1 )
      {
        Function_2005748(0x5DCu);
        ++*(ushort *)(v6 + 40);
      }
      else
      {
        if ( dword_21BF6C4 & 0x40 )
        {
          if ( *(uint *)(a1 + 16) - 1 >= 0 )
          {
            Function_2005748(0x5E0u);
            --*(uint *)(v6 + 16);
          }
        }
        else if ( dword_21BF6C4 & 0x80 && *(uint *)(a1 + 16) + 1 < 3 )
        {
          Function_2005748(0x5E0u);
          ++*(uint *)(v6 + 16);
        }
        Function_225d0f8(v6);
      }
      return 0;
    case 6:
      ((void (__fastcall *)(uint, uint, uint))dword_222E31C[175])(
        *(uint *)(a5 + 4),
        *(uint *)(a1 + 48),
        *(uint *)(a1 + 16));
      ((void (__fastcall *)(uint))dword_2233374[28])(*(uint *)(v6 + 16));
      v15 = Function_225cbec(v9, 0, 0x60u);
      Function_225d218(v7, v15);
      Function_225d284(v7);
      Function_2005748(0x565u);
      *(ushort *)(v6 + 40) = 7;
      return 0;
    case 7:
      if ( ((int (*)(void))dword_2233374[48])() != 1 )
      {
        Function_2005748(0x5E4u);
        Function_225d2a0(v7);
        v16 = Function_225cbec(v9, 0, 0x61u);
        Function_225d1b4(v7, v16);
        *(ushort *)(v6 + 42) = 8;
        *(ushort *)(v6 + 40) = 10;
      }
      return 0;
    case 8:
      if ( *(uint *)(a1 + 52) )
        v17 = 99;
      else
        v17 = 98;
      v18 = Function_225cbec(a2, 0, v17);
      Function_225d1b4(v7, v18);
      *(ushort *)(v6 + 42) = 9;
      *(ushort *)(v6 + 40) = 10;
      return 0;
    case 9:
      Function_225d2cc(v7);
      return 1;
    case 0xA:
      if ( Function_225d2b4(v7) == 1 )
        *(ushort *)(v6 + 40) = *(ushort *)(v6 + 42);
      break;
    default:
      ErrorHandler();
      break;
  }
  return 0;
}

//----- (0225D02C) --------------------------------------------------------
int __fastcall Function_225d02c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a3;
  Function_225dc24(a1 + 44);
  Function_201a8fc(v3);
  Function_2021bd4(*(uint *)(v3 + 20));
  Function_200a4e4(*(int **)(v3 + 24));
  Function_200a6dc(*(int **)(v3 + 28));
  v5 = 0;
  do
  {
    result = Function_2009d68(*(int **)(v4 + 304), *(uint ***)(v3 + 24));
    ++v5;
    v3 += 4;
    v4 += 4;
  }
  while ( v5 < 4 );
  return result;
}

//----- (0225D06C) --------------------------------------------------------
int __fastcall Function_225d06c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_201ada4_ClearTextBox(a1, 0);
  Function_225dc58(v3 + 44, v2, 0);
  Function_201d78c(v3, 1);
  Function_225dc58(v3 + 44, v2, 1);
  Function_201d78c(v3, 1);
  Function_225dc58(v3 + 44, v2, 2);
  Function_201d78c(v3, 1);
  return Function_201a9a4(v3);
}

//----- (0225D0F8) --------------------------------------------------------
int __fastcall Function_225d0f8(int a1)
{
  int v1;

  v1 = a1;
  Function_2021cac(*(uint *)(a1 + 20), 1);
  return Function_2021c50(*(uint **)(v1 + 20), &dword_225DD78[3 * *(uint *)(v1 + 16)]);
}

//----- (0225D11C) --------------------------------------------------------
uint __fastcall Function_225d11c(int a1)
{
  return Function_2021cc8(*(uint *)(a1 + 20), 1);
}

//----- (0225D128) --------------------------------------------------------
int __fastcall Function_225d128(int a1, uint **a2, int a3, uint a4)
{
  int v4;
  int v5;
  uint v6;
  ushort *v7;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  Function_201a7e8(*a2, a1 + 8, 1, 2, 19, 0x1Bu, 4u, 4, 40);
  Function_201ada4_ClearTextBox(v4 + 8, 15);
  *(uint *)(v4 + 24) = Function_2023790(256, v6);
  v7 = (ushort *)LoadPlayerDataAdress(v5);
  result = Function_2027ac0(v7);
  *(uint *)(v4 + 4) = result;
  return result;
}

//----- (0225D178) --------------------------------------------------------
int __fastcall Function_225d178(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(*a1 & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*v2 & 0xFF);
  Function_225d2a0(v2);
  Function_20237bc_FreeMsg(v2[6], v4);
  Function_201a8fc((int)(v2 + 2));
  return Function_225d348(v2, v3);
}

//----- (0225D1B4) --------------------------------------------------------
uint __fastcall Function_225d1b4(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(*a1 & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*v2 & 0xFF);
  Function_201ada4_ClearTextBox((int)(v2 + 2), 15);
  Function_2023810((ushort *)v2[6], v3);
  v4 = v2[1];
  v5 = v2[6];
  *v2 = Function_201d78c((int)(v2 + 2), 1);
  return Function_200e060((int)(v2 + 2), 1, 1, 5u);
}

//----- (0225D218) --------------------------------------------------------
int __fastcall Function_225d218(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(*a1 & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*v2 & 0xFF);
  Function_201ada4_ClearTextBox((int)(v2 + 2), 15);
  Function_2023810((ushort *)v2[6], v3);
  v4 = v2[6];
  Function_201d78c((int)(v2 + 2), 1);
  Function_200e060((int)(v2 + 2), 1, 1, 5u);
  return Function_201a9a4((int)(v2 + 2));
}

//----- (0225D284) --------------------------------------------------------
int __fastcall Function_225d284(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 28) )
    ErrorHandler();
  result = Function_200e7fc((int *)(v1 + 8), 1);
  *(uint *)(v1 + 28) = result;
  return result;
}

//----- (0225D2A0) --------------------------------------------------------
int __fastcall Function_225d2a0(int a1)
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

//----- (0225D2B4) --------------------------------------------------------
BOOL __fastcall Function_225d2b4(uint *a1)
{
  return Function_201d724(*a1 & 0xFF) == 0;
}

//----- (0225D2CC) --------------------------------------------------------
int __fastcall Function_225d2cc(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_201d724(*a1 & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*v1 & 0xFF);
  Function_225d2a0((int)v1);
  Function_200e084((int)(v1 + 2), 1);
  return Function_201ad10((int)(v1 + 2));
}

//----- (0225D304) --------------------------------------------------------
int __fastcall Function_225d304(int a1, uint **a2, uint a3)
{
  int v3;
  uint **v4;
  uint v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( *(uint *)(a1 + 32) )
    ErrorHandler();
  result = Function_2002100(*v4, (uchar *)dword_225DD38, 31, 6, v5);
  *(uint *)(v3 + 32) = result;
  return result;
}

//----- (0225D330) --------------------------------------------------------
int __fastcall Function_225d330(int a1, uint a2)
{
  int v2;
  int result;

  v2 = a1;
  result = Function_2002114(*(uint *)(a1 + 32), a2);
  if ( result != -1 )
    *(uint *)(v2 + 32) = 0;
  return result;
}

//----- (0225D348) --------------------------------------------------------
int __fastcall Function_225d348(int a1, uint a2)
{
  int v2;
  int result;

  v2 = a1;
  result = *(uint *)(a1 + 32);
  if ( result )
  {
    Function_2002154(result, a2);
    result = 0;
    *(uint *)(v2 + 32) = 0;
  }
  return result;
}

//----- (0225D35C) --------------------------------------------------------
int __fastcall Function_225d35c(int a1)
{
  return Function_225d388(a1);
}

//----- (0225D36C) --------------------------------------------------------
int __fastcall Function_225d36c(int a1, int a2)
{
  return Function_225d478(a1, a2);
}

//----- (0225D380) --------------------------------------------------------
int Function_225d380()
{
  return Function_225d868();
}

//----- (0225D388) --------------------------------------------------------
int __fastcall Function_225d388(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  uchar *v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;

  v10 = a1;
  v11 = a2;
  v5 = a3;
  v12 = a4;
  Function_2007130(*(uint *)(a3 + 320), 0xC7u, 0, 0, 128, a5);
  Function_20070e8(*(uint *)(v5 + 320), 0xC8u, *(uint **)v5, 0, 0, 0, 0, a5);
  Function_200710c(*(uint *)(v5 + 320), 0xCAu, *(uint **)v5, 0, 0, 0, 0, a5);
  v6 = (uchar *)dword_225DDE8;
  v7 = v10;
  v8 = 0;
  do
  {
    Function_201a8d4(*(uint **)v5, v7, v6);
    ++v8;
    v6 += 8;
    v7 += 16;
  }
  while ( v8 < 6 );
  Function_225d89c(v10, v11, 109, 197632);
  *(uint *)(v10 + 128) = Function_20071b4(*(uint *)(v5 + 320), 0xC8u, 0, (uint *)(v10 + 132), a5);
  Function_225db8c(v10 + 136, 1, a5);
  Function_225db8c(v10 + 168, 0, a5);
  if ( !((int (__fastcall *)(uint, int))dword_222E8E8[535])(*(uint *)(v12 + 4), v10 + 200) )
  {
    Function_225dccc(v10 + 200, *(uint *)(v12 + 4));
    ((void (__fastcall *)(uint, int))dword_222E8E8[527])(*(uint *)(v12 + 4), v10 + 200);
  }
  return Function_225dc74();
}

//----- (0225D478) --------------------------------------------------------
int __fastcall Function_225d478(int a1, int a2, uint **a3, int *a4, int *a5, uint a6)
{
  int v6;
  uint v7;
  int v8;
  int *v9;
  uint v10;
  int v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint v22;
  int v23;
  int v24;
  int v25;
  uint v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint **v33;
  int v34;
  int v35;
  char v36;
  int *v37;

  v37 = a4;
  v33 = a3;
  v6 = a1;
  v7 = *(ushort *)(a1 + 96);
  v8 = a2;
  v9 = a4;
  if ( v7 <= 0x16 )
    JUMPOUT(__CS__, *((short *)&off_225D4A2 + v7) + 36033700);
  switch ( (uchar)v7 )
  {
    case 0:
      if ( *(uint *)(a1 + 144) )
        v10 = 105;
      else
        v10 = 103;
      v11 = Function_225cbec(a2, 0, v10);
      Function_225d1b4(v9, v11);
      *(ushort *)(v6 + 98) = 1;
      *(ushort *)(v6 + 96) = 22;
      return 0;
    case 1:
      v12 = Function_225dc40(a1 + 136, a2);
      Function_225d1b4(v9, v12);
      *(ushort *)(v6 + 98) = 2;
      *(ushort *)(v6 + 96) = 22;
      return 0;
    case 2:
      if ( dword_21BF6C4 & 1 )
      {
        v13 = Function_225cbec(a2, 0, 0x68u);
        Function_225d1b4(v9, v13);
        *(ushort *)(v6 + 98) = 3;
        *(ushort *)(v6 + 96) = 22;
      }
      return 0;
    case 3:
      if ( *(uint *)(a1 + 144) )
        v14 = 108;
      else
        v14 = 107;
      v15 = Function_225cbec(a2, 0, v14);
      Function_225d1b4(v9, v15);
      *(ushort *)(v6 + 98) = 4;
      *(ushort *)(v6 + 96) = 22;
      return 0;
    case 4:
      v16 = ((int (__fastcall *)(int))dword_222E31C[40])(a5[1]);
      ((void (__fastcall *)(int, char *))dword_222E8E8[8])(v16, &v36);
      v17 = ((int (__fastcall *)(int))dword_222E31C[7])(a5[1]);
      v18 = ((int (__fastcall *)(int, int))dword_222E8E8[15])(a5[1], v17);
      Function_225d8f0(v6, v6 + 136, v8, v33, &v36, a6, 592384, 855552, v18);
      Function_225da30(v6, v6 + 200, v33, 1);
      Function_2005748(0x5C0u);
      *(ushort *)(v6 + 96) = 5;
      return 0;
    case 5:
      if ( Function_225da74() == 1 )
        *(ushort *)(v6 + 96) = 6;
      return 0;
    case 6:
      if ( dword_21BF6C4 & 1 )
      {
        if ( *(uint *)(a1 + 168) == -1 )
        {
          v19 = Function_225cbec(a2, 0, 0x70u);
          Function_225d1b4(v9, v19);
          *(ushort *)(v6 + 98) = 20;
          *(ushort *)(v6 + 96) = 22;
        }
        else
        {
          *(ushort *)(a1 + 96) = 7;
        }
      }
      return 0;
    case 7:
      v20 = Function_225cbec(a2, 0, 0x6Fu);
      Function_225d218(v9, v20);
      Function_225d304((int)v9, v33, a6);
      *(ushort *)(v6 + 96) = 8;
      return 0;
    case 8:
      v21 = Function_225d330((int)a4, a6);
      if ( v21 )
      {
        if ( v21 == -2 )
          *(ushort *)(v6 + 96) = 20;
      }
      else
      {
        *(ushort *)(v6 + 96) = 9;
      }
      return 0;
    case 9:
      Function_200f174(0, 0, 0, 0, 6, 1, a6);
      *(ushort *)(v6 + 96) = 10;
      return 0;
    case 0xA:
      if ( Function_200f2ac() == 1 )
      {
        Function_225db3c(v6, v8, v33, a6);
        *(ushort *)(v6 + 96) = 11;
      }
      return 0;
    case 0xB:
      Function_200f174(0, 1, 1, 0, 6, 1, a6);
      *(ushort *)(v6 + 96) = 12;
      return 0;
    case 0xC:
      if ( Function_200f2ac() == 1 )
        *(ushort *)(v6 + 96) = 13;
      return 0;
    case 0xD:
      if ( *(uint *)(a1 + 176) )
        v22 = 115;
      else
        v22 = 113;
      v23 = Function_225cbec(a2, 0, v22);
      Function_225d1b4(v9, v23);
      *(ushort *)(v6 + 98) = 14;
      *(ushort *)(v6 + 96) = 22;
      return 0;
    case 0xE:
      v24 = Function_225dc40(a1 + 168, a2);
      Function_225d1b4(v9, v24);
      *(ushort *)(v6 + 98) = 15;
      *(ushort *)(v6 + 96) = 22;
      return 0;
    case 0xF:
      if ( dword_21BF6C4 & 1 )
      {
        v25 = Function_225cbec(a2, 0, 0x72u);
        Function_225d1b4(v9, v25);
        *(ushort *)(v6 + 98) = 16;
        *(ushort *)(v6 + 96) = 22;
      }
      return 0;
    case 0x10:
      if ( *(uint *)(a1 + 176) )
        v26 = 118;
      else
        v26 = 117;
      v27 = Function_225cbec(a2, 0, v26);
      Function_225d1b4(v9, v27);
      *(ushort *)(v6 + 98) = 17;
      *(ushort *)(v6 + 96) = 22;
      return 0;
    case 0x11:
      v28 = LoadVariableAreaAdress_24(*a5);
      v34 = Function_2030ed0(v28);
      v35 = Function_2030ed4(v28);
      v29 = ((int (__fastcall *)(int))dword_222E31C[7])(a5[1]);
      v30 = ((int (__fastcall *)(int, int))dword_222E8E8[15])(a5[1], v29);
      Function_225d8f0(v6, v6 + 168, v8, v33, &v34, a6, 723968, 986624, v30);
      Function_225da30(v6, v6 + 220, v33, 2);
      Function_2005748(0x5C0u);
      *(ushort *)(v6 + 96) = 18;
      return 0;
    case 0x12:
      if ( Function_225da74() == 1 )
        *(ushort *)(v6 + 96) = 19;
      return 0;
    case 0x13:
      if ( dword_21BF6C4 & 1 )
        *(ushort *)(a1 + 96) = 20;
      return 0;
    case 0x14:
      v31 = Function_225cbec(a2, 0, 0x78u);
      Function_225d1b4(v9, v31);
      *(ushort *)(v6 + 98) = 21;
      *(ushort *)(v6 + 96) = 22;
      return 0;
    case 0x15:
      Function_225d2cc(a4);
      return 1;
    case 0x16:
      if ( Function_225d2b4(a4) == 1 )
        *(ushort *)(v6 + 96) = *(ushort *)(v6 + 98);
      break;
    default:
      ErrorHandler();
      break;
  }
  return 0;
}

//----- (0225D868) --------------------------------------------------------
uint __fastcall Function_225d868(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  Function_225dc24(a1 + 136);
  Function_225dc24(v1 + 168);
  free(*(uint *)(v1 + 128));
  v2 = 0;
  *(uint *)(v1 + 128) = 0;
  do
  {
    result = Function_201a8fc(v1);
    ++v2;
    v1 += 16;
  }
  while ( v2 < 6 );
  return result;
}

//----- (0225D89C) --------------------------------------------------------
int __fastcall Function_225d89c(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  Function_201ada4_ClearTextBox(a1, 0);
  v6 = Function_225cbec(v3, 0, v4);
  Function_2002d7c(1, v6, 0);
  Function_201d78c(v5, 1);
  return Function_201a9a4(v5);
}

//----- (0225D8F0) --------------------------------------------------------
int __fastcall Function_225d8f0(int a1, int a2, int a3, int a4, uint *a5, uint a6)
{
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v6 = a1;
  v11 = a2;
  v10 = a3;
  Function_201ada4_ClearTextBox(a1 + 16, 0);
  Function_201ada4_ClearTextBox(v6 + 80, 0);
  Function_225dc58(v11, v10, 0);
  Function_201d78c(v6 + 16, 1);
  Function_225dc58(v11, v10, 1);
  Function_201d78c(v6 + 16, 1);
  Function_225dc58(v11, v10, 2);
  Function_201d78c(v6 + 16, 1);
  if ( *a5 == *(uint *)(v11 + 4) && a5[1] < 3u )
  {
    Function_225cc78(v10, 0, a6);
    v7 = Function_225cbec(v10, 0, 0x6Eu);
    Function_2002d7c(1, v7, 0);
    Function_201d78c(v6 + 80, 1);
    v8 = Function_225dc58(v11, v10, a5[1]);
    Function_2002d7c(1, v8, 0);
    Function_201d78c(v6 + 80, 1);
  }
  Function_201a9a4(v6 + 80);
  return Function_201a9a4(v6 + 16);
}

//----- (0225DA30) --------------------------------------------------------
int __fastcall Function_225da30(int a1, int a2, int a3, char a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  char v10;

  v4 = a1;
  v5 = 0;
  v9 = a2;
  *(uint *)(a1 + 100) = 0;
  v6 = a1;
  v10 = a4;
  do
  {
    *(uint *)(v6 + 104) = 0;
    *(uint *)(v6 + 116) = Function_225dca4(v9, v5, 80);
    v7 = 16 * (v5 + 2);
    Function_201c2b4(v4 + v7, v10);
    result = Function_201ada4_ClearTextBox(v4 + v7, 0);
    ++v5;
    v6 += 4;
  }
  while ( v5 < 3 );
  return result;
}

//----- (0225DA74) --------------------------------------------------------
BOOL __fastcall Function_225da74(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  short v13;

  v1 = a1;
  v2 = *(uint *)(a1 + 100);
  if ( v2 >= 20 )
    return 1;
  *(uint *)(v1 + 100) = v2 + 1;
  v12 = s32_div_f(80 * (v2 + 1), 20);
  v10 = 0;
  v11 = 0;
  v9 = v1;
  do
  {
    v4 = *(uint *)(v9 + 116);
    v5 = *(uint *)(v9 + 104);
    if ( v5 == v4 )
    {
      ++v10;
    }
    else
    {
      if ( v4 < v12 )
      {
        v7 = v9;
        v6 = v4 - v5;
      }
      else
      {
        v6 = v12 - v5;
        v4 = v12;
        v7 = v9;
      }
      v8 = 0;
      *(uint *)(v7 + 104) = v4;
      if ( v6 > 0 )
      {
        v13 = v5 + 4;
        do
          Function_201addc(
            v1 + 16 * (v11 + 2),
            *(uint *)(*(uint *)(v1 + 132) + 20),
            247,
            16,
            256,
            32,
            v13 + v8++,
            0,
            1u,
            0x10u);
        while ( v8 < v6 );
      }
      Function_201a9a4(v1 + 16 * (v11 + 2));
    }
    v9 += 4;
    ++v11;
  }
  while ( v11 < 3 );
  return v10 == 3;
}

//----- (0225DB3C) --------------------------------------------------------
int __fastcall Function_225db3c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;

  v4 = 0;
  v5 = a1;
  v9 = a2;
  Function_200710c(*(uint *)(a3 + 320), 0xCBu, *(uint **)a3, 0, 0, 0, 0, a4);
  v6 = v5;
  do
  {
    Function_201ada4_ClearTextBox(v6, 0);
    Function_201a954(v6, v7);
    ++v4;
    v6 += 16;
  }
  while ( v4 < 6 );
  return Function_225d89c(v5, v9, 0x77u);
}

//----- (0225DB8C) --------------------------------------------------------
ushort *__fastcall Function_225db8c(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  ushort *result;
  ushort *v9;
  int v10;
  int v11;
  ushort *v12;
  int v13;

  v3 = a1;
  v4 = a3;
  v13 = a2;
  *(uint *)(a1 + 16) = Function_2023790(256, a3);
  v5 = 0;
  v6 = v3;
  do
  {
    *(uint *)(v6 + 20) = Function_2023790(256, v4);
    ++v5;
    v6 += 4;
  }
  while ( v5 < 3 );
  if ( v13 == 1 )
    v7 = 0;
  else
    v7 = 4;
  *(uint *)(v3 + 8) = ((int (__fastcall *)(int))dword_2233374[56])(v7 + 2);
  *(uint *)v3 = ((int (__fastcall *)(int))dword_2233374[56])(v7 + 1);
  *(uint *)(v3 + 4) = ((int (__fastcall *)(int))dword_2233374[56])(v7);
  result = (ushort *)((int (__fastcall *)(int))dword_2233374[56])(v7 + 3);
  *(uint *)(v3 + 12) = result;
  if ( result == (ushort *)1 )
  {
    v9 = (ushort *)((int (__fastcall *)(int))dword_2233374[113])(v7);
    if ( !v9 )
      ErrorHandler();
    Function_2023d28(*(ushort **)(v3 + 16), v9);
    v10 = 0;
    v11 = v7 + 1;
    do
    {
      v12 = (ushort *)((int (__fastcall *)(int))dword_2233374[113])(v11 + v10);
      if ( !v12 )
        ErrorHandler();
      result = Function_2023d28(*(ushort **)(v3 + 20), v12);
      ++v10;
      v3 += 4;
    }
    while ( v10 < 3 );
  }
  return result;
}

//----- (0225DC24) --------------------------------------------------------
uint __fastcall Function_225dc24(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 16), a2);
  v4 = 0;
  do
  {
    result = Function_20237bc_FreeMsg(*(uint *)(v2 + 20), v3);
    ++v4;
    v2 += 4;
  }
  while ( v4 < 3 );
  return result;
}

//----- (0225DC40) --------------------------------------------------------
int __fastcall Function_225dc40(uint *a1, int a2)
{
  int result;

  if ( a1[3] )
    result = a1[4];
  else
    result = Function_225cc18(a2, *a1);
  return result;
}

//----- (0225DC58) --------------------------------------------------------
int __fastcall Function_225dc58(uint *a1, int a2, int a3)
{
  int result;

  if ( a1[3] )
    result = a1[a3 + 5];
  else
    result = Function_225cc44(a2, *a1, a3);
  return result;
}

//----- (0225DC74) --------------------------------------------------------
long long __fastcall Function_225dc74(int *a1)
{
  int *v1;
  int v2;
  uint *v3;
  int v4;
  long long result;
  long long v6;

  v1 = a1;
  v2 = 0;
  a1[3] = 0;
  a1[4] = 0;
  v3 = a1 + 3;
  do
  {
    v4 = ((int (__fastcall *)(int))dword_2233374[56])(v2 + 8);
    *v1 = v4;
    HIDWORD(result) = *v3;
    v6 = *(ull *)v3 + (uint)result;
    LODWORD(result) = v6;
    *v3 = v6;
    ++v2;
    ++v1;
    v3[1] = HIDWORD(v6);
  }
  while ( v2 < 3 );
  return result;
}

//----- (0225DCA4) --------------------------------------------------------
void __fastcall Function_225dca4(int a1, uint a2, uint a3)
{
  uint v3;
  int v4;
  uint v5;
  int v6;
  int v7;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 >= 3 )
    ErrorHandler();
  ll_mul(v5, *(uint *)(v4 + 4 * v3));
  v6 = *(uint *)(v4 + 12);
  v7 = *(uint *)(v4 + 16);
  ll_udiv();
}

//----- (0225DCCC) --------------------------------------------------------
int __fastcall Function_225dccc(int a1, int a2, int a3, int a4)
{
  int v4;
  uchar *v5;
  int v6;
  int v7;
  uint *v8;
  int result;
  int v10;
  int v11;
  uint v12;
  uint v13;
  int v14;
  char v15;
  uint v16;
  int v17;

  v17 = a4;
  v4 = a1;
  v14 = a2;
  v5 = (uchar *)a1;
  v6 = 20;
  do
  {
    *v5++ = 0;
    --v6;
  }
  while ( v6 );
  v7 = 0;
  v8 = (uint *)(a1 + 12);
  do
  {
    result = ((int (__fastcall *)(int, int, uchar *))dword_222E31C[22])(v14, v7, v5);
    v10 = result;
    if ( result )
    {
      v11 = ((int (*)(void))dword_222E748[66])();
      ((void (__fastcall *)(int, char *))dword_222E8E8[8])(v10, &v15);
      result = ((int (__fastcall *)(uint, int))dword_2233374[147])(0, v11);
      if ( result == 1 )
      {
        result = v16;
        if ( v16 < 3 )
        {
          ++*(uint *)(v4 + 4 * v16);
          v12 = *(uint *)(v4 + 16);
          v13 = *v8;
          result = 0;
          ++*v8;
          v5 = (uchar *)(v13 + 1);
          *(uint *)(v4 + 16) = (__PAIR__(v12, v13) + 1) >> 32;
        }
      }
    }
    ++v7;
  }
  while ( v7 < 20 );
  return result;
}

