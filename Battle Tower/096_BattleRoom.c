//----- (0223B140) --------------------------------------------------------
int __fastcall Function_223b140(int result, int a2, int a3)
{
  dword_223DDE0[0] = 1;
  dword_223DDE0[1] = 0;
  dword_223DDE0[2] = result;
  dword_223DDE0[3] = a2;
  dword_223DDE0[4] = a3;
  return result;
}

//----- (0223B15C) --------------------------------------------------------
int Function_223b15c()
{
  int result;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  result = dword_223DDE0[0];
  if ( dword_223DDE0[0] <= 0xCu )
    JUMPOUT(__CS__, *((short *)&off_223B174 + dword_223DDE0[0]) + 35893622);
  switch ( LOBYTE(dword_223DDE0[0]) )
  {
    case 2:
      result = ((int (*)(void))dword_221FD48[0])();
      if ( result == 1 )
      {
        dword_223DDE0[0] = 12;
        v1 = ((int (*)(void))dword_221FE14[0])();
        dword_223DDE0[1] = Function_223b608(v1);
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      else if ( result == 7 )
      {
        dword_223DDE0[0] = 12;
        if ( ((int (*)(void))dword_221FE20[0])() <= 0 )
          v2 = -2;
        else
          v2 = HIBYTE(dword_223DDE0[64]);
        dword_223DDE0[1] = v2;
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      break;
    case 3:
    case 5:
    case 7:
    case 9:
    case 0xB:
      dword_223DDE0[0] = 12;
      dword_223DDE0[1] = -4;
      result = ((int (*)(void))dword_221FDEC[0])();
      break;
    case 4:
      result = ((int (*)(void))dword_221FD48[0])();
      if ( result == 1 )
      {
        dword_223DDE0[0] = 12;
        v3 = ((int (*)(void))dword_221FE14[0])();
        dword_223DDE0[1] = Function_223b608(v3);
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      else if ( result == 7 )
      {
        dword_223DDE0[0] = 12;
        if ( ((int (*)(void))dword_221FE20[0])() == 2616 )
        {
          dword_223DDE0[1] = 0;
        }
        else
        {
          v4 = *(uchar *)dword_223DDE0[66];
          if ( v4 == 2 )
          {
            dword_223DDE0[1] = -3;
          }
          else if ( v4 == 5 )
          {
            dword_223DDE0[1] = -2;
          }
          else
          {
            dword_223DDE0[1] = -5;
          }
        }
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      break;
    case 6:
      result = ((int (*)(void))dword_221FD48[0])();
      if ( result == 1 )
      {
        dword_223DDE0[0] = 12;
        v5 = ((int (*)(void))dword_221FE14[0])();
        dword_223DDE0[1] = Function_223b608(v5);
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      else if ( result == 7 )
      {
        dword_223DDE0[0] = 12;
        switch ( HIBYTE(dword_223DDE0[64]) )
        {
          case 1:
            dword_223DDE0[1] = 0;
            break;
          case 2:
            dword_223DDE0[1] = -3;
            break;
          case 4:
            dword_223DDE0[1] = -1;
            break;
          case 5:
            dword_223DDE0[1] = -2;
            break;
          default:
            dword_223DDE0[1] = -5;
            break;
        }
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      break;
    case 8:
      result = ((int (__stdcall *)(int, int *))dword_221FD48[0])(dword_223DDE0[0], dword_223DDE0);
      if ( result == 1 )
      {
        dword_223DDE0[0] = 12;
        v6 = ((int (*)(void))dword_221FE14[0])();
        dword_223DDE0[1] = Function_223b608(v6);
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      else if ( result == 7 )
      {
        dword_223DDE0[0] = 12;
        switch ( HIBYTE(dword_223DDE0[64]) )
        {
          case 1:
            dword_223DDE0[1] = 0;
            break;
          case 3:
            dword_223DDE0[1] = 1;
            break;
          case 4:
            dword_223DDE0[1] = 2;
            break;
          case 5:
            dword_223DDE0[1] = -2;
            break;
          default:
            dword_223DDE0[1] = -5;
            break;
        }
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      break;
    case 0xA:
      result = ((int (__stdcall *)(int, int *))dword_221FD48[0])(dword_223DDE0[0], dword_223DDE0);
      if ( result == 1 )
      {
        dword_223DDE0[0] = 12;
        v7 = ((int (*)(void))dword_221FE14[0])();
        dword_223DDE0[1] = Function_223b608(v7);
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      else if ( result == 7 )
      {
        dword_223DDE0[0] = 12;
        if ( ((int (*)(void))dword_221FE20[0])() == 8 )
        {
          dword_223DDE0[1] = 0;
        }
        else
        {
          switch ( HIBYTE(dword_223DDE0[64]) )
          {
            case 1:
              dword_223DDE0[1] = 0;
              break;
            case 3:
              dword_223DDE0[1] = 1;
              break;
            case 4:
              dword_223DDE0[1] = 2;
              break;
            case 5:
              dword_223DDE0[1] = -2;
              break;
            default:
              dword_223DDE0[1] = -5;
              break;
          }
        }
        result = ((int (*)(void))dword_221FDEC[0])();
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0223B3D4) --------------------------------------------------------
int Function_223b3d4()
{
  int result;

  if ( dword_223DDE0[0] == 1 )
    return 1;
  if ( dword_223DDE0[0] != 12 )
    return 0;
  result = 1;
  dword_223DDE0[0] = 1;
  return result;
}

//----- (0223B3F4) --------------------------------------------------------
int Function_223b3f4()
{
  return dword_223DDE0[1];
}

//----- (0223B400) --------------------------------------------------------
int *__fastcall Function_223b400(char a1)
{
  char v1;
  int *result;

  v1 = a1;
  ((void (*)(void))dword_221F800[289])();
  LOBYTE(dword_223DDE0[5]) = v1 - 1;
  if ( Function_223b5d0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/battletower/roomnum.asp",
         &dword_223DDE0[5],
         1,
         35905251,
         2) )
  {
    result = dword_223DDE0;
    dword_223DDE0[0] = 2;
  }
  else
  {
    dword_223DDE0[0] = 12;
    dword_223DDE0[1] = -5;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223B450) --------------------------------------------------------
int *__fastcall Function_223b450(char a1, char a2, int a3)
{
  char v3;
  int v4;
  char v5;
  int *result;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  dword_223DDE0[66] = a3;
  ((void (*)(void))dword_221F800[289])();
  LOBYTE(dword_223DDE0[5]) = v3 - 1;
  BYTE1(dword_223DDE0[5]) = v5 - 1;
  if ( Function_223b5d0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/battletower/download.asp",
         &dword_223DDE0[5],
         2,
         v4,
         2616) )
  {
    result = dword_223DDE0;
    dword_223DDE0[0] = 4;
  }
  else
  {
    dword_223DDE0[0] = 12;
    dword_223DDE0[1] = -5;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223B4B0) --------------------------------------------------------
int *__fastcall Function_223b4b0(int a1, char a2, char a3, char *a4)
{
  char v4;
  char v5;
  char v6;
  char *v7;
  char *v8;
  int *v9;
  int v10;
  char v11;
  int *result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  ((void (__cdecl *)(int))dword_221F800[289])(a1);
  memcpy(&dword_223DDE0[5], v7, 228);
  LOBYTE(dword_223DDE0[62]) = v4 - 1;
  BYTE1(dword_223DDE0[62]) = v5 - 1;
  v8 = (char *)&dword_223DDE0[62] + 3;
  v9 = &dword_223DDE0[3];
  BYTE2(dword_223DDE0[62]) = v6;
  v10 = 8;
  do
  {
    v11 = *(uchar *)v9;
    v9 = (int *)((char *)v9 + 1);
    *v8++ = v11;
    --v10;
  }
  while ( v10 );
  if ( Function_223b5d0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/battletower/upload.asp",
         &dword_223DDE0[5],
         239,
         35905251,
         2) )
  {
    result = dword_223DDE0;
    dword_223DDE0[0] = 6;
  }
  else
  {
    dword_223DDE0[0] = 12;
    dword_223DDE0[1] = -5;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223B530) --------------------------------------------------------
int *__fastcall Function_223b530(int a1)
{
  int *result;

  ((void (__cdecl *)(int))dword_221F800[289])(a1);
  if ( Function_223b5d0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/battletower/info.asp",
         &dword_223DDE0[5],
         0,
         35905251,
         2) )
  {
    result = dword_223DDE0;
    dword_223DDE0[0] = 8;
  }
  else
  {
    dword_223DDE0[0] = 12;
    dword_223DDE0[1] = -5;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223B574) --------------------------------------------------------
int *__fastcall Function_223b574(char *a1, int a2, int a3, uint a4)
{
  char *v4;
  int v5;
  int *result;

  v4 = a1;
  v5 = a2;
  OS_GetMacAddress((uint)(a1 + 28), a2, a3, a4);
  memcpy(&dword_223DDE0[5], v4, 100);
  dword_223DDE0[66] = v5;
  ((void (__cdecl *)(int *))dword_221F800[289])(&dword_223DDE0[64]);
  if ( Function_223b5d0(
         "http://gamestats2.gs.nintendowifi.net/pokemondpds/common/setProfile.asp",
         &dword_223DDE0[5],
         100,
         dword_223DDE0[66],
         8) )
  {
    result = dword_223DDE0;
    dword_223DDE0[0] = 10;
  }
  else
  {
    dword_223DDE0[0] = 12;
    dword_223DDE0[1] = -5;
    result = (int *)((int (*)(void))dword_221FDEC[0])();
  }
  return result;
}

//----- (0223B5D0) --------------------------------------------------------
BOOL __fastcall Function_223b5d0(int a1, int a2, int a3, int a4, int a5)
{
  return ((int (__fastcall *)(int, int, int, int, int, int))dword_221F800[298])(a1, dword_223DDE0[2], a2, a3, a4, a5) == 0;
}

//----- (0223B608) --------------------------------------------------------
int __fastcall Function_223b608(char a1)
{
  int v1;

  switch ( a1 )
  {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 9:
    case 10:
    case 14:
    case 20:
    case 21:
    case 22:
    case 23:
    case 32:
      v1 = -5;
      break;
    case 2:
    case 8:
    case 25:
      v1 = -5;
      break;
    case 11:
      v1 = -7;
      break;
    case 12:
    case 13:
      v1 = -7;
      break;
    case 15:
    case 30:
      v1 = -2;
      break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 26:
    case 27:
    case 28:
    case 29:
    case 31:
      v1 = -2;
      break;
    default:
      v1 = -5;
      break;
  }
  if ( v1 != -5 )
  {
    if ( ((int (*)(void))dword_2213898[0])() != 9 )
      v1 = -6;
    ((void (*)(void))dword_21D76E8[0])();
  }
  return v1;
}

//----- (0223B6A0) --------------------------------------------------------
int __fastcall Function_96_223b6a0(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a2;
  v5 = a1;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      v8 = LoadOverlay4(1, (int)a2, a3);
      LoadOverlay60(v8, v9, v10);
      Function_2033478();
      *v4 = 0;
      return 1;
    }
  }
  else
  {
    SetMainLoopFunctionCall(0, 0);
    Function_20177a4();
    Function_201ff00();
    Function_201ff68();
    REG_DISPCNT &= 0xFFFFE0FF;
    REG_DISPCNT_SUB &= 0xFFFFE0FF;
    Function_2017fc8(3, 68, 327680);
    v6 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v5, 4804, 0x44u);
    Call_FillMemWithValue(v6, 0, 0x12C4u);
    v6[1] = Function_2018340(0x44u);
    dword_223DDE0[67] = (int)v6;
    v12 = 1;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    SetGraphicsModes(&v12);
    v6[756] = (int)Function_200b368(0xBu, 32, 0x44u);
    v6[757] = LoadFromMsgNARC(0, 26, 670, 0x44u);
    v6[758] = LoadFromMsgNARC(0, 26, 674, 0x44u);
    v6[759] = LoadFromMsgNARC(0, 26, 695, 0x44u);
    Function_2017dd4(4, 8);
    Function_223b980(v6, v5);
    Function_223bc64(v6);
    Function_2004550(0x34u, 0);
    v7 = malloc(0x44u, 131104);
    v6[9] = v7;
    v6[10] = (int)NNS_FndCreateExpHeapEx((v7 + 31) & 0xFFFFFFE0, 0x20000, 0);
    Function_2004550(0xBu, 0x497u);
    *v4 = 1;
  }
  return 0;
}

//----- (0223B7F8) --------------------------------------------------------
int __fastcall Function_96_223b7f8(int a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  char v5;
  int v6;
  int result;
  int v8;

  v2 = a2;
  v3 = (uint *)LoadOverlayData1c(a1);
  ((void (*)(void))dword_21D8018[0])();
  v4 = Function_223b15c();
  v5 = ((int (__fastcall *)(int))dword_21D8018[0])(v4);
  v6 = *v2;
  switch ( v5 )
  {
    case 0:
      if ( Function_20334a4() )
      {
        dword_223DDE0[68] = v3[10];
        ((void (__fastcall *)(int (*)(), int (*)()))dword_21D776C[0])(Function_223bc04, Function_223bc2c);
        *v2 = 1;
      }
      goto LABEL_11;
    case 1:
      *v2 = ((int (__fastcall *)(uint *))*(&off_223DCD4 + 3 * v3[4]))(v3);
      goto LABEL_11;
    case 2:
      if ( Function_200f2ac() )
        *v2 = 3;
      goto LABEL_11;
    case 3:
      *v2 = ((int (__fastcall *)(uint *))*(&off_223DCD8 + 3 * v3[4]))(v3);
      goto LABEL_11;
    case 4:
      if ( Function_200f2ac() )
        *v2 = ((int (__fastcall *)(uint *, int))*(&off_223DCDC + 3 * v3[4]))(v3, *v2);
      goto LABEL_11;
    case 5:
      result = 1;
      break;
    default:
LABEL_11:
      v8 = v3[766];
      if ( v8 )
        Function_20219f8(v8);
      result = 0;
      break;
  }
  return result;
}

//----- (0223B8CC) --------------------------------------------------------
int __fastcall Function_96_223b8cc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = v2;
  v4 = free(*(uint *)(v2 + 36));
  v7 = UnloadOverlay60(v4, v5, v6);
  UnloadOverlay4((int)v7, v8, v9);
  Function_223bc8c(v3);
  Function_200b190(*(ushort **)(v3 + 3036));
  Function_200b190(*(ushort **)(v3 + 3032));
  Function_200b190(*(ushort **)(v3 + 3028));
  Function_200b3f0(*(uint **)(v3 + 3024), v10);
  Function_223b99c(v3);
  Function_20334cc();
  free(*(uint *)(v3 + 4));
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(68);
  return 1;
}

//----- (0223B940) --------------------------------------------------------
int Function_223b940()
{
  int result;

  Function_201dcac();
  Function_200a858();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0223B960) --------------------------------------------------------
char *Function_223b960()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_223DAA8;
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

//----- (0223B980) --------------------------------------------------------
int __fastcall Function_223b980(int *a1, int a2)
{
  int *v2;

  v2 = a1;
  *a1 = LoadPtrToOverWorldDataIn18(a2);
  v2[4] = 0;
  return Function_223bc5c(v2);
}

//----- (0223B99C) --------------------------------------------------------
void Function_223b99c()
{
  ;
}

//----- (0223B9A0) --------------------------------------------------------
int Function_223b9a0()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 20;
  v2 = 2048;
  v3 = 2048;
  v4 = 68;
  Function_201e86c(&v1);
  Function_201f834(20, 0x44u);
  Function_201e994();
  return Function_201f8e4();
}

//----- (0223B9D0) --------------------------------------------------------
uint __fastcall Function_223b9d0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int *v10;

  v4 = a1;
  v10 = LoadFromNARC_8(104, 0x44u, a3, a4);
  Function_20a7944();
  Function_200a784(0, 126, 0, 32, 0, 0x7Eu, 0, 0x20u, 0x44u);
  *(uint *)(v4 + 3064) = Function_20095c4(10, v4 + 3068, 68, v5);
  Function_200964c(v4 + 3068, 0, 0x100000, v6);
  v7 = 0;
  v8 = v4;
  do
  {
    *(uint *)(v8 + 3364) = Function_2009714(2, v7, 0x44u);
    v7 = (int *)((char *)v7 + 1);
    v8 += 4;
  }
  while ( (int)v7 < 4 );
  *(uint *)(v4 + 3380) = Function_2009a4c(*(uint *)(v4 + 3364), (int)v10, 0x23u, 1, 0, 1, 0x44u);
  *(uint *)(v4 + 3384) = Function_2009b04(*(uint *)(v4 + 3368), (int)v10, 9u, 0, 0, 1, 3, 0x44u);
  *(uint *)(v4 + 3388) = Function_2009bc4(*(uint *)(v4 + 3372), (int)v10, 0x24u, 1, 0, 2u, 0x44u);
  *(uint *)(v4 + 3392) = Function_2009bc4(*(uint *)(v4 + 3376), (int)v10, 0x25u, 1, 0, 3u, 0x44u);
  Function_200a328(*(int **)(v4 + 3380));
  Function_200a5c8(*(int **)(v4 + 3384));
  return Call_FS_CloseFile(v10);
}

//----- (0223BAE0) --------------------------------------------------------
int __fastcall Function_223bae0(int result, int a2, int a3, int a4)
{
  *(uint *)result = *(uint *)(a2 + 3064);
  *(uint *)(result + 4) = a3;
  *(uint *)(result + 16) = 0;
  *(uint *)(result + 20) = 4096;
  *(uint *)(result + 24) = 4096;
  *(uint *)(result + 28) = 4096;
  *(ushort *)(result + 32) = 0;
  *(uint *)(result + 36) = 1;
  *(uint *)(result + 40) = a4;
  *(uint *)(result + 44) = 68;
  return result;
}

//----- (0223BB0C) --------------------------------------------------------
int __fastcall Function_223bb0c(int *a1)
{
  int v1;
  short *v2;
  int v3;
  char v5;
  int v6;
  int v7;

  v1 = (int)a1;
  Function_20093b4((int)(a1 + 857), 0, 0, 0, 0, -1, -1, 0, 0, a1[841], a1[842], a1[843], a1[844], 0, 0);
  Function_223bae0((int)&v5, v1, v1 + 3428, 1);
  v2 = &word_223DA80;
  v3 = 0;
  do
  {
    v6 = (ushort)*v2 << 12;
    v7 = (ushort)v2[1] << 12;
    *(uint *)(v1 + 3536) = Function_2021aa0((uint **)&v5);
    Function_2021cc8(*(uint *)(v1 + 3536), 1);
    Function_2021d6c(*(uint *)(v1 + 3536), v3);
    Function_2021cac(*(uint *)(v1 + 3536), 0);
    ++v3;
    v2 += 2;
    v1 += 4;
  }
  while ( v3 < 2 );
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  return Function_2039734();
}

//----- (0223BBC8) --------------------------------------------------------
int __fastcall Function_223bbc8(uint *a1, char a2, short a3, int a4)
{
  short v5;
  short v6;
  short v7;
  short v8;
  int v9;

  v9 = a4;
  v5 = 5888;
  v6 = 1805;
  v7 = 3332;
  LOBYTE(v6) = a2;
  v8 = a3;
  return Function_2002100(a1, (uchar *)&v5, 31, 11, 0x44u);
}

//----- (0223BBFC) --------------------------------------------------------
int __fastcall Function_223bbfc(int result, int a2, int a3)
{
  *(uint *)(result + 28) = a2;
  *(uint *)(result + 32) = a3;
  return result;
}

//----- (0223BC04) --------------------------------------------------------
int __fastcall Function_223bc04(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a3;
  v5 = OS_DisableInterrupts();
  v6 = NNS_FndAllocFromExpHeapEx(dword_223DDE0[68], v3, v4);
  OS_RestoreInterrupts(v5);
  return v6;
}

//----- (0223BC2C) --------------------------------------------------------
void __fastcall Function_223bc2c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  if ( a2 )
  {
    v3 = OS_DisableInterrupts();
    Function_20a55d8(dword_223DDE0[68], v2, v4, v5);
    OS_RestoreInterrupts(v3);
  }
}

//----- (0223BC50) --------------------------------------------------------
int Function_223bc50()
{
  return 3 - ((int (*)(void))dword_21D7EAC[0])();
}

//----- (0223BC5C) --------------------------------------------------------
int __fastcall Function_223bc5c(int result, int a2, int a3)
{
  *(uint *)(result + 20) = a2;
  *(uint *)(result + 24) = a3;
  return result;
}

//----- (0223BC64) --------------------------------------------------------
int __fastcall Function_223bc64(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_223b960();
  Function_223b9a0();
  Function_223b9d0((int)v1, v2, v3, v4);
  Function_223bb0c(v1);
  return SetMainLoopFunctionCall((int)Function_223b940, (int)v1);
}

//----- (0223BC8C) --------------------------------------------------------
int *__fastcall Function_223bc8c(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_200a4e4(*(int **)(a1 + 3380));
  Function_200a6dc(*(int **)(v1 + 3384));
  v2 = 0;
  v3 = v1;
  do
  {
    Function_2009754(*(int **)(v3 + 3364));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  Function_2021964(*(int **)(v1 + 3064));
  *(uint *)(v1 + 3064) = 0;
  Function_200a878();
  Function_201e958();
  return Function_201f8b4();
}

//----- (0223BCE0) --------------------------------------------------------
int __fastcall Function_223bce0(int **a1)
{
  int **v1;

  v1 = a1;
  Function_223c358();
  Function_200f174(0, 1, 1, 0, 8, 1, 68);
  Function_223be38(v1[1]);
  Function_223bf40(v1);
  Function_223c1fc(v1);
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 1);
  Function_201ff74(1u, 1);
  Function_201ff74(2u, 1);
  Function_2038438((*v1)[3]);
  Function_223d948(v1);
  v1[36] = (int *)Function_202d2c0(**v1, 0);
  v1[37] = v1[36];
  v1[39] = (int *)1;
  v1[963] = 0;
  if ( ((int (*)(void))dword_21D7A8C[0])() )
  {
    v1[7] = (int *)51;
  }
  else if ( (*v1)[9] )
  {
    Function_223d814(v1, v1[758]);
    Function_223bbfc((int)v1, 47, 2);
    Function_223d978(v1);
  }
  else
  {
    v1[7] = 0;
  }
  return 2;
}

//----- (0223BDBC) --------------------------------------------------------
int __fastcall Function_223bdbc(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = Function_223bc50();
  Function_20397b0(v2);
  v3 = *(uint *)(v1 + 28);
  result = ((int (__fastcall *)(int))*(&off_223DCE0 + v3))(v1);
  if ( v3 != *(uint *)(v1 + 28) )
  {
    *(ushort *)(v1 + 3984) = 0;
    *(ushort *)(v1 + 3986) = 0;
  }
  return result;
}

//----- (0223BDEC) --------------------------------------------------------
int __fastcall Function_223bdec(int a1)
{
  uint *v1;
  int *v2;
  int v3;
  int result;

  v1 = (uint *)a1;
  v2 = *(int **)(a1 + 3992);
  if ( v2 )
  {
    Call_RemoveTaskFromTaskList(v2);
    v1[998] = 0;
    v1[999] = 0;
  }
  Function_223c3b0(v1);
  Function_223c314(v1);
  Function_223bf1c(v1[1]);
  v1[999] = 0;
  v3 = v1[5];
  v1[4] = v3;
  if ( v3 )
    result = 1;
  else
    result = 5;
  return result;
}

//----- (0223BE38) --------------------------------------------------------
uint __fastcall Function_223be38(uint *a1, int a2, int a3, int a4)
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
  v4 = a1;
  v27 = 0;
  v28 = 0;
  v29 = 2048;
  v30 = 0;
  v31 = 2031617;
  v32 = 0;
  v33 = 0;
  Function_20183c4(a1, 0, &v27, 0);
  Function_201ff0c(1u, 0);
  Function_2019ebc(v4, 0);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 35520513;
  v25 = 256;
  v26 = 0;
  Function_20183c4(v4, 1u, &v20, 0);
  Function_201ff0c(2u, 0);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 69074945;
  v18 = 0;
  v19 = 0;
  Function_20183c4(v4, 4u, &v13, 0);
  Function_201ff74(1u, 0);
  Function_2019ebc(v4, 4u);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 35323905;
  v11 = 512;
  v12 = 0;
  Function_20183c4(v4, 5u, &v6, 0);
  Function_201ff74(2u, 0);
  Function_2019690(0, 32, 0, 0x44u);
  return Function_2019690(4u, 32, 0, 0x44u);
}

//----- (0223BF1C) --------------------------------------------------------
int __fastcall Function_223bf1c(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 1);
  return Function_2019044(v1, 0);
}

//----- (0223BF40) --------------------------------------------------------
uint __fastcall Function_223bf40(int a1, int a2, int a3, int a4)
{
  uint *v4;
  uchar v5;
  int v6;
  short v7;
  short v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int *v21;
  int v22;

  v14 = a1;
  v4 = *(uint **)(a1 + 4);
  v21 = LoadFromNARC_8(92, 0x44u, a3, a4);
  Function_2007130((int)v21, 3u, 0, 0, 0, 68);
  Function_2007130((int)v21, 3u, 4u, 0, 0, 68);
  LoadFromNARC_PlFont2(0, 416, 68);
  LoadFromNARC_PlFont2(4u, 416, 68);
  v5 = Function_2027b50(*(ushort **)(*(uint *)v14 + 16));
  Function_200dd0c(v4, 0, 1, 14, v5, 68);
  Function_200daa4(v4, 0, 31, 11, 0, 68);
  Function_20070e8((int)v21, 2u, v4, 1u, 0, 0, 0, 68);
  Function_200710c((int)v21, 5u, v4, 1u, 0, 1536, 0, 68);
  Function_20070e8((int)v21, 0xAu, v4, 5u, 0, 0, 0, 68);
  Function_200710c((int)v21, 0xBu, v4, 5u, 0, 1536, 0, 68);
  Function_201975c(0, 0);
  Function_201975c(4u, 0);
  MI_CpuFill8((ushort *)(v14 + 3992), 0, 0x32Cu);
  v6 = Function_20071ec((int)v21, 4u, &v22, 68);
  MIi_CpuCopy16(*(uint *)(v22 + 12), v14 + 4000, 128, v7);
  MIi_CpuCopy16(*(uint *)(v22 + 12), v14 + 4128, 128, v8);
  free(v6);
  v19 = 0;
  v20 = 0;
  v16 = v14 + 4128;
  v15 = v14 + 4000;
  do
  {
    v18 = 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v19 >= 21 )
        ErrorHandler();
      v9 = 1;
      v10 = v14 + 32 * (v20 + 1) + 2;
      v11 = v16 + 2;
      v12 = v15 + 2;
      do
      {
        Function_200393c(v12, v11, 1u, (v18 >> 8) & 0xFF, *(ushort *)(v10 + 4000));
        ++v9;
        v10 += 2;
        v11 += 2;
        v12 += 2;
      }
      while ( v9 < 16 );
      v16 += 32;
      ++v19;
      if ( v17 == 1 )
        break;
      v18 += 768;
      if ( v18 >= 4096 )
      {
        v18 = 4096;
        v17 = 1;
      }
    }
    v15 += 32;
    ++v20;
  }
  while ( v20 < 3 );
  DC_FlushRange(v14 + 4128, 672);
  *(uint *)(v14 + 3996) = 1;
  *(uint *)(v14 + 3992) = AddTaskToTaskList2((int)Function_223c168, v14 + 3992, 0x14u);
  return Call_FS_CloseFile(v21);
}

//----- (0223C168) --------------------------------------------------------
int __fastcall Function_223c168(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 4);
  if ( result )
  {
    result = 811;
    *(uchar *)(a2 + 811) ^= 1u;
    if ( !(*(uchar *)(a2 + 811) & 1) )
    {
      GX_LoadBGPltt(a2 + 136 + 32 * *(short *)(a2 + 808), 0, 0x20u);
      GXS_LoadBGPltt(v2 + 136 + 32 * *(short *)(v2 + 808), 0, 0x20u);
      result = 810;
      if ( *(uchar *)(v2 + 810) )
      {
        if ( (short)--*(ushort *)(v2 + 808) < 0 )
        {
          *(ushort *)(v2 + 808) = 1;
          *(uchar *)(v2 + 810) ^= 1u;
        }
      }
      else if ( (short)++*(ushort *)(v2 + 808) >= 21 )
      {
        *(ushort *)(v2 + 808) = 19;
        *(uchar *)(v2 + 810) ^= 1u;
      }
    }
  }
  return result;
}

//----- (0223C1FC) --------------------------------------------------------
int __fastcall Function_223c1fc(int a1)
{
  int v1;

  v1 = a1;
  Function_201a7e8(*(uint **)(a1 + 4), a1 + 3608, 0, 4, 4, 0x17u, 0x10u, 13, 164);
  Function_201ada4_ClearTextBox(v1 + 3608, 0);
  Function_201a7e8(*(uint **)(v1 + 4), v1 + 3576, 0, 26, 14, 4u, 2u, 13, 148);
  Function_201ada4_ClearTextBox(v1 + 3576, 15);
  Function_201a7e8(*(uint **)(v1 + 4), v1 + 3560, 0, 26, 14, 4u, 2u, 13, 156);
  Function_201ada4_ClearTextBox(v1 + 3560, 15);
  Function_201a7e8(*(uint **)(v1 + 4), v1 + 3592, 0, 4, 1, 0x18u, 2u, 13, 532);
  Function_201ada4_ClearTextBox(v1 + 3592, 0);
  Function_223d8a4(v1 + 3592, *(uint *)(v1 + 3044), 0);
  Function_201a7e8(*(uint **)(v1 + 4), v1 + 3544, 0, 2, 19, 0x1Bu, 4u, 13, 40);
  return Function_201ada4_ClearTextBox(v1 + 3544, 15);
}

//----- (0223C314) --------------------------------------------------------
uint __fastcall Function_223c314(int a1)
{
  int v1;

  v1 = a1;
  Function_201a8fc(a1 + 3544);
  Function_201a8fc(v1 + 3592);
  Function_201a8fc(v1 + 3560);
  Function_201a8fc(v1 + 3576);
  return Function_201a8fc(v1 + 3608);
}

//----- (0223C358) --------------------------------------------------------
int __fastcall Function_223c358(int a1)
{
  int v1;
  int result;

  v1 = a1;
  *(uint *)(a1 + 3040) = Function_2023790(180, 0x44u);
  *(uint *)(v1 + 3048) = Function_2023790(4, 0x44u);
  *(uint *)(v1 + 3052) = Function_2023790(3, 0x44u);
  *(uint *)(v1 + 3044) = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 3028), 0xAu);
  result = Function_2023790(256, 0x44u);
  *(uint *)(v1 + 3056) = result;
  return result;
}

//----- (0223C3B0) --------------------------------------------------------
uint __fastcall Function_223c3b0(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  Function_20237bc_FreeMsg(a1[764], a2);
  Function_20237bc_FreeMsg(v2[761], v3);
  Function_20237bc_FreeMsg(v2[763], v4);
  Function_20237bc_FreeMsg(v2[762], v5);
  return Function_20237bc_FreeMsg(v2[760], v6);
}

//----- (0223C3F0) --------------------------------------------------------
int __fastcall Function_223c3f0(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3036));
  Function_223bbfc(v1, 48, 1);
  return 3;
}

//----- (0223C420) --------------------------------------------------------
int __fastcall Function_223c420(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2002114(*(uint *)(a1 + 3848), 0x44u);
  if ( v2 != -1 )
  {
    if ( v2 == -2 )
    {
      Function_203848c();
      Function_223bc5c(v1, 0, 0);
      *(uint *)(v1 + 28) = 46;
    }
    else
    {
      Function_223d814(v1, *(uint *)(v1 + 3032));
      Function_223bbfc(v1, 47, 2);
      Function_223d978(v1);
    }
  }
  return 3;
}

//----- (0223C488) --------------------------------------------------------
int __fastcall Function_223c488(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3032));
  Function_223bbfc(v1, 48, 52);
  return 3;
}

//----- (0223C4B8) --------------------------------------------------------
int __fastcall Function_223c4b8(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_2002114(a1[962], 0x44u);
  if ( v2 != -1 )
  {
    if ( v2 == -2 )
    {
      if ( ((int (*)(void))dword_21D7A8C[0])() )
        v1[7] = 41;
      else
        v1[7] = 0;
    }
    else
    {
      if ( ((int (*)(void))dword_21D7A8C[0])() )
      {
        v3 = 41;
      }
      else
      {
        Function_223bc5c((int)v1, 0, 0);
        v3 = 46;
      }
      v1[7] = v3;
      *(uint *)(*v1 + 32) = 1;
    }
  }
  return 3;
}

//----- (0223C510) --------------------------------------------------------
int __fastcall Function_223c510(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  ((void (__fastcall *)(int, int, int, int))dword_21D78C8[0])(a1 + 44, 2, 1, 20);
  v2 = ((int (__fastcall *)(int))dword_21D792C[0])(2);
  ((void (__fastcall *)(int))dword_21D797C[0])(v2);
  result = 3;
  *(uint *)(v1 + 28) = 3;
  return result;
}

//----- (0223C530) --------------------------------------------------------
int __fastcall Function_223c530(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  char v8;
  int v9;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = ((int (*)(void))dword_21D7AE4[0])();
  if ( ((int (__fastcall *)(int))dword_21D7A8C[0])(v5) )
  {
    switch ( ((uchar (*)(void))dword_21D7BFC[0])() )
    {
      case 4u:
        ((void (__fastcall *)(char *))dword_21D7EB8[0])(&v10);
        v4[7] = 4;
        break;
      case 7u:
        v4[964] = ((int (__fastcall *)(int *))dword_21D75D4[0])(&v9);
        v4[965] = v9;
        v6 = ((int (*)(void))dword_21D76E8[0])();
        ((void (__fastcall *)(int))dword_21D7DB0[0])(v6);
        Function_223d99c(v4);
        v4[7] = 55;
        break;
      default:
        ((void (__fastcall *)(char *))dword_21D75D4[0])(&v8);
        Function_223d99c(v4);
        v4[7] = 53;
        v4[967] = -2;
        break;
    }
  }
  return 3;
}

//----- (0223C5BC) --------------------------------------------------------
int __fastcall Function_223c5bc(int a1)
{
  int v1;

  v1 = a1;
  ((void (*)(void))dword_21D81DC[0])();
  *(uint *)(v1 + 28) = 5;
  return 3;
}

//----- (0223C5CC) --------------------------------------------------------
int __fastcall Function_223c5cc(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;

  v1 = a1;
  switch ( ((uchar (*)(void))dword_21D82A0[0])() )
  {
    case 0u:
    case 4u:
    case 5u:
      Function_223d99c(v1);
      v1[964] = ((int (__fastcall *)(int *, int *))dword_21D75F4[0])(&v7, &v6);
      v1[965] = v7;
      v2 = ((int (*)(void))dword_21D76E8[0])();
      ((void (__fastcall *)(int))dword_21D7DB0[0])(v2);
      v1[7] = 55;
      switch ( (uchar)v6 )
      {
        case 1:
        case 2:
          v1[7] = 55;
          break;
        case 3:
          ((void (*)(void))dword_21D8E8C[0])();
          v1[7] = 55;
          break;
        case 4:
          ((void (*)(void))dword_21E55B0[0])();
          v1[7] = 55;
          break;
        case 5:
        case 7:
          Function_2038a0c(55, v6, v3, v4);
          return result;
        case 6:
          v1[7] = 55;
          break;
        default:
          break;
      }
      if ( v7 < -20000 && v7 >= -29999 )
        v1[7] = 55;
      break;
    case 3u:
      v1[7] = 6;
      break;
    default:
      return 3;
  }
  return 3;
}

//----- (0223C680) --------------------------------------------------------
int __fastcall Function_223c680(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  if ( !Function_2025d74(*(uint *)(*a1 + 8)) )
    Function_2025d78(*(uint *)(*v1 + 8), *(uint *)(*v1 + 28));
  v2 = Function_2025d74(*(uint *)(*v1 + 8));
  v3 = Function_20a471c(*(uint *)(*v1 + 20));
  Function_223b140(v2, v3, v4);
  v1[7] = 7;
  return 3;
}

//----- (0223C6C0) --------------------------------------------------------
int __fastcall Function_223c6c0(int a1)
{
  int v1;

  v1 = a1;
  Function_223b530(a1);
  *(uint *)(v1 + 28) = 8;
  *(uint *)(v1 + 3988) = 0;
  return 3;
}

//----- (0223C6DC) --------------------------------------------------------
int __fastcall Function_223c6dc(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v1 = a1;
  if ( Function_223b3d4() )
  {
    v4 = Function_223b3f4();
    v1[997] = 0;
    switch ( (uchar)v4 + 7 )
    {
      case 0:
      case 3:
        v1[967] = v4;
        v1[7] = 53;
        Function_223d99c(v1);
        break;
      case 1:
      case 5:
        v1[967] = v4;
        v1[7] = 53;
        Function_223d99c(v1);
        break;
      case 6:
      case 9:
        v1[967] = v4;
        v1[7] = 53;
        Function_223d99c(v1);
        break;
      case 7:
        Function_223d99c(v1);
        v5 = *(uint *)(*v1 + 24);
        if ( v5 )
        {
          if ( v5 == 1 )
          {
            v1[7] = 25;
          }
          else if ( v5 == 2 )
          {
            v1[7] = 29;
          }
        }
        else
        {
          Function_223bbfc((int)v1, 11, 13);
        }
        break;
      case 8:
        v1[967] = v4;
        v1[7] = 53;
        Function_223d99c(v1);
        break;
      default:
        v6 = Function_223d99c(v1);
        Function_2038a0c(v6, v7, v8, v9);
        return result;
    }
  }
  else if ( ++v1[997] == 3600 )
  {
    Function_2038a0c(3600, 3600, v2, v3);
  }
  return 3;
}

//----- (0223C7B4) --------------------------------------------------------
int __fastcall Function_223c7b4(int a1)
{
  int v1;
  int v2;
  uint v3;

  v1 = a1;
  Function_2030e78(*(uint *)(*(uint *)a1 + 12), a1 + 3876);
  Function_223b574((char *)(v1 + 3876), v1 + 3976, v2, v3);
  *(uint *)(v1 + 28) = 10;
  *(uint *)(v1 + 3988) = 0;
  return 3;
}

//----- (0223C7E8) --------------------------------------------------------
int __fastcall Function_223c7e8(uint *a1)
{
  uint *v1;
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
  int result;

  v1 = a1;
  if ( Function_223b3d4() )
  {
    v4 = Function_223b3f4();
    v1[997] = 0;
    switch ( (uchar)v4 + 7 )
    {
      case 0:
      case 3:
        v1[967] = v4;
        v1[7] = 53;
        Function_223d99c(v1);
        break;
      case 1:
      case 5:
        v1[967] = v4;
        v1[7] = 53;
        Function_223d99c(v1);
        break;
      case 6:
      case 9:
        v1[967] = v4;
        v1[7] = 53;
        Function_223d99c(v1);
        break;
      case 7:
        Function_223d99c(v1);
        v5 = v1[994];
        if ( v5 )
        {
          if ( v5 != 1 && v5 != 2 )
          {
            v7 = Function_223d99c(v1);
            Function_2038a0c(v7, v8, v9, v10);
          }
          v1[967] = v4;
          v1[7] = 53;
          Function_223d99c(v1);
        }
        else
        {
          switch ( (uchar)v1[995] )
          {
            case 0u:
              v6 = *(uint *)(*v1 + 24);
              if ( v6 )
              {
                if ( v6 == 1 )
                {
                  v1[7] = 25;
                }
                else if ( v6 == 2 )
                {
                  v1[7] = 29;
                }
              }
              else
              {
                Function_223bbfc((int)v1, 11, 13);
              }
              break;
            case 1u:
            case 2u:
            case 3u:
              v1[967] = v4;
              v1[7] = 53;
              Function_223d99c(v1);
              break;
            default:
              return 3;
          }
        }
        break;
      case 8:
        v1[967] = v4;
        v1[7] = 53;
        Function_223d99c(v1);
        break;
      default:
        v11 = Function_223d99c(v1);
        Function_2038a0c(v11, v12, v13, v14);
        return result;
    }
  }
  else if ( ++v1[997] == 3600 )
  {
    Function_2038a0c(3600, 3600, v2, v3);
  }
  return 3;
}

//----- (0223C924) --------------------------------------------------------
int __fastcall Function_223c924(int a1)
{
  int v1;

  v1 = a1;
  Function_223b400(*(uint *)(a1 + 148));
  *(uint *)(v1 + 28) = 12;
  *(uint *)(v1 + 3988) = 0;
  Function_223d978(v1);
  return 3;
}

//----- (0223C948) --------------------------------------------------------
int __fastcall Function_223c948(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v1 = a1;
  if ( Function_223b3d4() )
  {
    v4 = Function_223b3f4();
    v1[997] = 0;
    switch ( (uchar)v4 + 7 )
    {
      case 0:
      case 3:
        v1[967] = v4;
        v1[7] = 53;
        break;
      case 1:
        v1[967] = v4;
        v1[7] = 53;
        break;
      case 2:
        v1[967] = v4;
        v1[7] = 53;
        v5 = Function_223d99c(v1);
        Function_2038a0c(v5, v6, v7, v8);
        return result;
      case 4:
        v1[967] = v4;
        v1[7] = 53;
        break;
      case 5:
        v1[967] = v4;
        v1[7] = 53;
        break;
      case 6:
        v1[967] = v4;
        v1[7] = 53;
        break;
      default:
        if ( v4 > 0 )
        {
          v1[38] = v4;
          v1[7] = v1[8];
        }
        break;
    }
    Function_223d99c(v1);
  }
  else if ( ++v1[997] == 3600 )
  {
    Function_2038a0c(3600, 3600, v2, v3);
  }
  return 3;
}

//----- (0223C9F8) --------------------------------------------------------
int __fastcall Function_223c9f8(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3028));
  Function_223bbfc(v1, 47, 14);
  return 3;
}

//----- (0223CA28) --------------------------------------------------------
int __fastcall Function_223ca28(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  Function_200dc48((int)(a1 + 894), 0, 31, 0xEu);
  Function_223d90c(v1 + 894, v1[762], v1[39], 3);
  Function_223d950(v1, 0, 1);
  Function_201a954((int)(v1 + 894), v2);
  v1[7] = 15;
  return 3;
}

//----- (0223CA70) --------------------------------------------------------
int __fastcall Function_223ca70(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  char v7;
  char v8;
  int v9;

  v9 = a4;
  v4 = a1;
  if ( dword_21BF6C8 & 0x40 )
  {
    if ( ++a1[39] > a1[38] )
      a1[39] = 1;
    Function_223d90c(a1 + 894, a1[762], a1[39], 3);
    Function_2005748(0x5DCu);
  }
  else if ( dword_21BF6C8 & 0x80 )
  {
    if ( --a1[39] < 1 )
      a1[39] = a1[38];
    Function_223d90c(a1 + 894, a1[762], a1[39], 3);
    Function_2005748(0x5DCu);
  }
  else if ( dword_21BF6C4 & 1 )
  {
    ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v7, &v8);
    if ( Function_202d558(*(uint **)(*v4 + 4), v4[37] & 0xFF, v4[39] & 0xFF, &v7) )
      v5 = 20;
    else
      v5 = 16;
    v4[7] = v5;
    Function_223d950(v4, 0, 0);
    Function_2005748(0x5DCu);
  }
  else if ( dword_21BF6C4 & 2 )
  {
    Function_223d950(a1, 0, 0);
    v4[7] = 21;
    Function_2005748(0x5DCu);
  }
  return 3;
}

//----- (0223CB7C) --------------------------------------------------------
int __fastcall Function_223cb7c(int *a1)
{
  int *v1;

  v1 = a1;
  Function_200b60c(a1[756], 0, a1[39], 3, 2, 1);
  Function_200b60c(v1[756], 1u, v1[37], 2, 2, 1);
  Function_223d750(v1, v1[757]);
  Function_223bbfc((int)v1, 47, 17);
  MIi_CpuClearFast(0, v1 + 40, 0xA38u);
  return 3;
}

//----- (0223CBF0) --------------------------------------------------------
int __fastcall Function_223cbf0(int a1)
{
  int v1;

  v1 = a1;
  Function_223d750(a1, *(uint *)(a1 + 3028));
  Function_223bbfc(v1, 47, 13);
  return 3;
}

//----- (0223CC20) --------------------------------------------------------
int __fastcall Function_223cc20(int a1)
{
  int v1;

  v1 = a1;
  Function_223b450(*(uint *)(a1 + 144), *(uint *)(a1 + 156), a1 + 160);
  Function_223d978(v1);
  *(uint *)(v1 + 28) = 18;
  *(uint *)(v1 + 3988) = 0;
  return 3;
}

//----- (0223CC50) --------------------------------------------------------
int __fastcall Function_223cc50(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;
  char v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a1;
  if ( Function_223b3d4() )
  {
    v7 = Function_223b3f4();
    v4[997] = 0;
    switch ( (uchar)v7 + 7 )
    {
      case 0:
        v4[967] = v7;
        v4[7] = 53;
        Function_223d99c(v4);
        break;
      case 1:
        v4[967] = v7;
        v4[7] = 53;
        Function_223d99c(v4);
        break;
      case 2:
        v4[967] = v7;
        v4[7] = 53;
        v8 = Function_223d99c(v4);
        Function_2038a0c(v8, v9, v10, v11);
        return result;
      case 3:
      case 4:
        v4[967] = v7;
        v4[7] = 11;
        Function_223d99c(v4);
        break;
      case 5:
        v4[967] = v7;
        v4[7] = 53;
        Function_223d99c(v4);
        break;
      case 6:
        v4[967] = v7;
        v4[7] = 53;
        Function_223d99c(v4);
        break;
      case 7:
        Function_202d5f8(*(uchar **)(*v4 + 4), (int)(v4 + 40), v4[36], v4[39] & 0xFF);
        Function_223bbfc((int)v4, 39, 19);
        ((void (__fastcall *)(char *, char *))dword_21D806C[0])(&v13, &v14);
        Function_202d4b0(*(int **)(*v4 + 4), v4[37] & 0xFF, v4[39] & 0xFF, &v13);
        break;
      default:
        return 3;
    }
  }
  else if ( ++v4[997] == 3600 )
  {
    Function_2038a0c(3600, 3600, v5, v6);
  }
  return 3;
}

//----- (0223CD60) --------------------------------------------------------
int __fastcall Function_223cd60(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3028));
  Function_223bbfc(v1, 47, 45);
  Function_223d99c(v1);
  *(uint *)(*(uint *)v1 + 32) = 0;
  return 3;
}

//----- (0223CD9C) --------------------------------------------------------
int __fastcall Function_223cd9c(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3028));
  Function_223bbfc(v1, 47, 26);
  Function_223d978(v1);
  return 3;
}

//----- (0223CDD0) --------------------------------------------------------
int __fastcall Function_223cdd0(int **a1, int a2, int a3, int a4)
{
  int **v4;
  char v5;
  int v7;

  v7 = a4;
  v4 = a1;
  v5 = Function_202d3a0(**a1);
  Function_202d628((*v4)[1], &v7);
  Function_2073700((*v4)[3], 1, (uint)(v4 + 694));
  Function_223b4b0((uchar)v7, SBYTE1(v7), v5, (char *)v4 + 2776);
  v4[7] = (int *)27;
  v4[997] = 0;
  return 3;
}

//----- (0223CE1C) --------------------------------------------------------
int __fastcall Function_223ce1c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v1 = a1;
  if ( Function_223b3d4() )
  {
    v4 = Function_223b3f4();
    *(uint *)(v1 + 3988) = 0;
    switch ( (uchar)v4 + 7 )
    {
      case 0:
      case 3:
        *(uint *)(v1 + 3868) = v4;
        *(uint *)(v1 + 28) = 53;
        Function_223d99c(v1);
        break;
      case 1:
        *(uint *)(v1 + 3868) = v4;
        *(uint *)(v1 + 28) = 53;
        Function_223d99c(v1);
        break;
      case 2:
        *(uint *)(v1 + 3868) = v4;
        *(uint *)(v1 + 28) = 53;
        v5 = Function_223d99c(v1);
        Function_2038a0c(v5, v6, v7, v8);
        return result;
      case 4:
        *(uint *)(v1 + 3868) = v4;
        *(uint *)(v1 + 28) = 53;
        Function_223d99c(v1);
        break;
      case 5:
        *(uint *)(v1 + 3868) = v4;
        *(uint *)(v1 + 28) = 53;
        Function_223d99c(v1);
        break;
      case 6:
        *(uint *)(v1 + 3868) = v4;
        *(uint *)(v1 + 28) = 53;
        Function_223d99c(v1);
        break;
      case 7:
        Function_202d414(**(uint **)v1, 5u, 2);
        Function_223bbfc(v1, 39, 28);
        break;
      default:
        return 3;
    }
  }
  else if ( ++*(uint *)(v1 + 3988) == 3600 )
  {
    Function_2038a0c(3600, 3600, v2, v3);
  }
  return 3;
}

//----- (0223CEF0) --------------------------------------------------------
int __fastcall Function_223cef0(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3028));
  Function_223bbfc(v1, 47, 45);
  Function_223d99c(v1);
  *(uint *)(*(uint *)v1 + 32) = 0;
  return 3;
}

//----- (0223CF2C) --------------------------------------------------------
int __fastcall Function_223cf2c(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3028));
  Function_223bbfc(v1, 47, 30);
  return 3;
}

//----- (0223CF5C) --------------------------------------------------------
int __fastcall Function_223cf5c(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  a1[37] = 1;
  Function_200dc48((int)(a1 + 890), 0, 31, 0xEu);
  Function_223d90c(v1 + 890, v1[763], v1[37], 2);
  Function_223d950(v1, 1, 1);
  Function_201a954((int)(v1 + 890), v2);
  v1[7] = 31;
  return 3;
}

//----- (0223CFAC) --------------------------------------------------------
int __fastcall Function_223cfac(int a1)
{
  int v1;

  v1 = a1;
  if ( dword_21BF6C8 & 0x40 )
  {
    if ( ++*(uint *)(a1 + 148) > 10 )
      *(uint *)(a1 + 148) = 1;
    Function_223d90c(a1 + 3560, *(uint *)(a1 + 3052), *(uint *)(a1 + 148), 2);
    Function_2005748(0x5DCu);
  }
  else if ( dword_21BF6C8 & 0x80 )
  {
    if ( --*(uint *)(a1 + 148) < 1 )
      *(uint *)(a1 + 148) = 10;
    Function_223d90c(a1 + 3560, *(uint *)(a1 + 3052), *(uint *)(a1 + 148), 2);
    Function_2005748(0x5DCu);
  }
  else if ( dword_21BF6C4 & 1 )
  {
    Function_223d950(a1, 0, 0);
    Function_223bbfc(v1, 11, 32);
    Function_2005748(0x5DCu);
  }
  else if ( dword_21BF6C4 & 2 )
  {
    Function_223d950(a1, 0, 0);
    *(uint *)(v1 + 28) = 23;
    Function_2005748(0x5DCu);
  }
  return 3;
}

//----- (0223D080) --------------------------------------------------------
int __fastcall Function_223d080(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3028));
  Function_223bbfc(v1, 47, 33);
  return 3;
}

//----- (0223D0B0) --------------------------------------------------------
int __fastcall Function_223d0b0(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  a1[39] = 1;
  Function_200dc48((int)(a1 + 894), 0, 31, 0xEu);
  Function_223d90c(v1 + 894, v1[762], v1[39], 3);
  Function_223d950(v1, 0, 1);
  Function_201a954((int)(v1 + 894), v2);
  v1[7] = 34;
  return 3;
}

//----- (0223D100) --------------------------------------------------------
int __fastcall Function_223d100(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( dword_21BF6C8 & 0x40 )
  {
    if ( ++a1[39] == a1[38] + 1 )
      a1[39] = 1;
    Function_223d90c(a1 + 894, a1[762], a1[39], 3);
    Function_2005748(0x5DCu);
  }
  else if ( dword_21BF6C8 & 0x80 )
  {
    if ( --a1[39] < 1 )
      a1[39] = a1[38];
    Function_223d90c(a1 + 894, a1[762], a1[39], 3);
    Function_2005748(0x5DCu);
  }
  else if ( dword_21BF6C4 & 1 )
  {
    Function_223d950(a1, 0, 0);
    v1[7] = 35;
    Function_2005748(0x5DCu);
  }
  else if ( dword_21BF6C4 & 2 )
  {
    Function_223d950(a1, 0, 0);
    v1[7] = 29;
    Function_2005748(0x5DCu);
  }
  return 3;
}

//----- (0223D1D8) --------------------------------------------------------
int __fastcall Function_223d1d8(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_200b60c(a1[756], 0, a1[39], 3, 2, 1);
  Function_200b60c(v1[756], 1u, v1[37], 2, 2, 1);
  Function_223d750(v1, v1[757]);
  Function_223bbfc((int)v1, 47, 36);
  v1[7] = 36;
  return 3;
}

//----- (0223D240) --------------------------------------------------------
int __fastcall Function_223d240(int a1)
{
  int v1;

  v1 = a1;
  Function_223b450(*(uint *)(a1 + 148), *(uint *)(a1 + 156), a1 + 160);
  *(uint *)(v1 + 28) = 37;
  *(uint *)(v1 + 3988) = 0;
  Function_223d978(v1);
  return 3;
}

//----- (0223D270) --------------------------------------------------------
int __fastcall Function_223d270(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v1 = a1;
  if ( Function_223b3d4() )
  {
    v4 = Function_223b3f4();
    v1[997] = 0;
    switch ( (uchar)v4 + 7 )
    {
      case 0:
      case 3:
        v1[7] = 11;
        v1[967] = v4;
        Function_223d99c(v1);
        break;
      case 1:
        v1[967] = v4;
        v1[7] = 53;
        Function_223d99c(v1);
        break;
      case 2:
        v1[967] = v4;
        v1[7] = 53;
        v5 = Function_223d99c(v1);
        Function_2038a0c(v5, v6, v7, v8);
        return result;
      case 4:
        v1[967] = v4;
        v1[7] = 11;
        Function_223d99c(v1);
        break;
      case 5:
        v1[967] = v4;
        v1[7] = 53;
        Function_223d99c(v1);
        break;
      case 6:
        v1[967] = v4;
        v1[7] = 53;
        Function_223d99c(v1);
        break;
      case 7:
        Function_202d6dc(*(uchar **)(*v1 + 4), (int)(v1 + 439), v1[37], v1[39] & 0xFF);
        Function_223bbfc((int)v1, 39, 38);
        break;
      default:
        return 3;
    }
  }
  else if ( ++v1[997] == 3600 )
  {
    Function_2038a0c(3600, 3600, v2, v3);
  }
  return 3;
}

//----- (0223D35C) --------------------------------------------------------
int __fastcall Function_223d35c(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3028));
  Function_223bbfc(v1, 47, 45);
  Function_223d99c(v1);
  *(uint *)(*(uint *)v1 + 32) = 0;
  return 3;
}

//----- (0223D398) --------------------------------------------------------
int __fastcall Function_223d398(int a1)
{
  *(uint *)(a1 + 28) = 41;
  return 3;
}

//----- (0223D3A0) --------------------------------------------------------
int __fastcall Function_223d3a0(int a1)
{
  int v1;

  v1 = a1;
  Function_2024814(*(uint *)(*(uint *)a1 + 12), 2);
  *(uint *)(v1 + 28) = 40;
  return 3;
}

//----- (0223D3B8) --------------------------------------------------------
int __fastcall Function_223d3b8(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  if ( Function_2024828(*(uint *)(*(uint *)a1 + 12), a2, a3, a4) == 2 )
  {
    *(uint *)(v4 + 28) = *(uint *)(v4 + 32);
    Function_223d99c(v4);
  }
  return 3;
}

//----- (0223D3D8) --------------------------------------------------------
int __fastcall Function_223d3d8(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3028));
  Function_223bbfc(v1, 48, 22);
  return 3;
}

//----- (0223D408) --------------------------------------------------------
int __fastcall Function_223d408(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = Function_2002114(a1[962], 0x44u);
  if ( v2 != -1 )
  {
    if ( v2 == -2 )
    {
      v1[7] = 13;
    }
    else
    {
      v1[7] = 41;
      *(uint *)(*v1 + 32) = 1;
    }
  }
  return 3;
}

//----- (0223D43C) --------------------------------------------------------
int __fastcall Function_223d43c(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3028));
  Function_223bbfc(v1, 48, 24);
  return 3;
}

//----- (0223D46C) --------------------------------------------------------
int __fastcall Function_223d46c(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = Function_2002114(a1[962], 0x44u);
  if ( v2 != -1 )
  {
    if ( v2 == -2 )
    {
      v1[7] = 29;
    }
    else
    {
      v1[7] = 41;
      *(uint *)(*v1 + 32) = 1;
    }
  }
  return 3;
}

//----- (0223D4A0) --------------------------------------------------------
int __fastcall Function_223d4a0(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3036));
  Function_223bbfc(v1, 47, 42);
  return 3;
}

//----- (0223D4D0) --------------------------------------------------------
int __fastcall Function_223d4d0(int a1)
{
  int v1;

  v1 = a1;
  ((void (*)(void))dword_21D7DB0[0])();
  Function_223bc5c(v1, 0, 0);
  *(uint *)(v1 + 28) = 43;
  return 3;
}

//----- (0223D4EC) --------------------------------------------------------
int __fastcall Function_223d4ec(int a1)
{
  int v1;

  v1 = a1;
  Function_223d814(a1, *(uint *)(a1 + 3036));
  Function_223bbfc(v1, 49, 46);
  *(uint *)(v1 + 3872) = 0;
  return 3;
}

//----- (0223D524) --------------------------------------------------------
int Function_223d524()
{
  return 3;
}

//----- (0223D528) --------------------------------------------------------
int __fastcall Function_223d528(int a1)
{
  int v1;

  v1 = a1;
  Function_2039794();
  Function_203848c();
  Function_200f174(0, 0, 0, 0, 8, 1, 68);
  *(uint *)(v1 + 28) = 0;
  return 4;
}

//----- (0223D558) --------------------------------------------------------
int __fastcall Function_223d558(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2002114(*(uint *)(a1 + 3848), 0x44u);
  if ( v2 != -1 )
  {
    if ( v2 == -2 )
      *(uint *)(v1 + 28) = 0;
    else
      *(uint *)(v1 + 28) = 41;
  }
  return 3;
}

//----- (0223D588) --------------------------------------------------------
int __fastcall Function_223d588(int a1)
{
  int v1;

  v1 = a1;
  *(uchar *)(a1 + 3868);
  Function_223d99c(a1);
  Function_223d814(v1, *(uint *)(v1 + 3028));
  Function_223bbfc(v1, 47, 54);
  return 3;
}

//----- (0223D5FC) --------------------------------------------------------
int __fastcall Function_223d5fc(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  switch ( (uchar)*(ushort *)(a1 + 3984) )
  {
    case 0u:
      Function_223d814(a1, *(uint *)(a1 + 3028));
      ++*(ushort *)(v1 + 3984);
      break;
    case 1u:
      if ( !Function_201d724(*(uint *)(a1 + 3060) & 0xFF) )
      {
        v2 = Function_203848c();
        ((void (__fastcall *)(uint))dword_21D7DB0[0])(v2);
        ++*(ushort *)(v1 + 3984);
      }
      break;
    case 2u:
      Function_223d814(a1, *(uint *)(a1 + 3028));
      ++*(ushort *)(v1 + 3984);
      break;
    case 3u:
      if ( !Function_201d724(*(uint *)(a1 + 3060) & 0xFF) )
        ++*(ushort *)(v1 + 3984);
      break;
    default:
      if ( (short)++*(ushort *)(a1 + 3986) > 30 )
      {
        Function_223bc5c(a1, 0, 0);
        *(uint *)(v1 + 28) = 46;
      }
      break;
  }
  return 3;
}

//----- (0223D6C8) --------------------------------------------------------
int __fastcall Function_223d6c8(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_201d724(*(uint *)(a1 + 3060) & 0xFF) )
    *(uint *)(v1 + 28) = *(uint *)(v1 + 32);
  return 3;
}

//----- (0223D6E8) --------------------------------------------------------
int __fastcall Function_223d6e8(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( !Function_201d724(a1[765] & 0xFF) )
  {
    if ( v1[968] > 30 )
      v1[7] = v1[8];
    ++v1[968];
  }
  return 3;
}

//----- (0223D71C) --------------------------------------------------------
int __fastcall Function_223d71c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( !Function_201d724(*(uint *)(a1 + 3060) & 0xFF) )
  {
    *(uint *)(v1 + 3848) = Function_223bbc8(*(uint **)(v1 + 4), 13, 580, v2);
    *(uint *)(v1 + 28) = *(uint *)(v1 + 32);
  }
  return 3;
}

//----- (0223D750) --------------------------------------------------------
uint __fastcall Function_223d750(int a1, ushort **a2, uint a3)
{
  int v3;
  ushort *v4;
  int v5;

  v3 = a1;
  v4 = Function_200b1ec_CallMsgDecrypt(a2, a3);
  Function_200c388(*(uint **)(v3 + 3024), *(uint *)(v3 + 3040), (int)v4);
  Function_201ada4_ClearTextBox(v3 + 3544, 15);
  Function_200e060(v3 + 3544, 0, 1, 0xEu);
  v5 = *(uint *)(v3 + 3040);
  *(uint *)(v3 + 3060) = Function_201d738_CallInitTextInterpreter(v3 + 3544, 1);
  return Function_20237bc_FreeMsg((int)v4, 3060);
}

//----- (0223D7B8) --------------------------------------------------------
int __fastcall Function_223d7b8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (__fastcall *)(int, uint))dword_21D1E30[67])(-*(uint *)(a1 + 3860), *(uint *)(a1 + 3864));
  Function_223da34(v1, v2, -*(uint *)(v1 + 3860));
  *(uint *)(v1 + 28) = 56;
  return 3;
}

//----- (0223D7E4) --------------------------------------------------------
int __fastcall Function_223d7e4(int a1)
{
  int v1;

  v1 = a1;
  if ( dword_21BF6C4 & 1 || dword_21BF6C4 & 2 )
  {
    Function_200dc9c(a1 + 3608, 0);
    *(uint *)(v1 + 28) = 0;
  }
  return 3;
}

//----- (0223D814) --------------------------------------------------------
int __fastcall Function_223d814(int a1, ushort **a2, uint a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1;
  Function_200b1b8_CallMsgDecrypt(a2, a3, *(ushort **)(a1 + 3040));
  Function_201ada4_ClearTextBox(v3 + 3544, 15);
  Function_200e060(v3 + 3544, 0, 1, 0xEu);
  v4 = *(uint *)(v3 + 3040);
  result = Function_201d738_CallInitTextInterpreter(v3 + 3544, 1);
  *(uint *)(v3 + 3060) = result;
  return result;
}

//----- (0223D86C) --------------------------------------------------------
int __fastcall Function_223d86c(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( a4 == 1 )
    return (8 * *(uchar *)(a1 + 7) - Function_2002d7c(a6, a2, 0)) / 2;
  if ( a4 == 2 )
    a3 = 8 * *(uchar *)(a1 + 7) - Function_2002d7c(a6, a2, 0);
  return a3;
}

//----- (0223D8A4) --------------------------------------------------------
int __fastcall Function_223d8a4(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;

  v6 = a1;
  Function_223d86c(a1, a2, a3, a5, a6, 1);
  return Function_201d78c(v6, 1);
}

//----- (0223D8D8) --------------------------------------------------------
int __fastcall Function_223d8d8(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;

  v6 = a1;
  Function_223d86c(a1, a2, a3, a5, a6, 0);
  return Function_201d78c(v6, 0);
}

//----- (0223D90C) --------------------------------------------------------
int __fastcall Function_223d90c(int a1, ushort *a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  int v7;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_201ada4_ClearTextBox(a1, 15);
  Function_20238a0(v4, v6, v7, 2, 1);
  return Function_223d8d8(v5, (int)v4, 0, 1, 1, 66048);
}

//----- (0223D948) --------------------------------------------------------
int Function_223d948()
{
  return Function_2039734();
}

//----- (0223D950) --------------------------------------------------------
uint __fastcall Function_223d950(uint result, uint a2, int a3)
{
  uint v3;
  int v4;

  v3 = result;
  v4 = a3;
  if ( a2 <= 1 )
  {
    Function_2021cac(*(uint *)(result + 3536), a3);
    result = Function_2021cac(*(uint *)(v3 + 3540), v4);
  }
  return result;
}

//----- (0223D978) --------------------------------------------------------
int __fastcall Function_223d978(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 3852);
  if ( !result )
  {
    result = Function_200e7fc((int *)(v1 + 3544), 1);
    *(uint *)(v1 + 3852) = result;
  }
  return result;
}

//----- (0223D99C) --------------------------------------------------------
int __fastcall Function_223d99c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 3852);
  if ( result )
  {
    Function_200eba0(result);
    result = 3852;
    *(uint *)(v1 + 3852) = 0;
  }
  return result;
}

//----- (0223D9B8) --------------------------------------------------------
uint __fastcall Function_223d9b8(int a1, uint a2)
{
  int v2;
  uint v3;
  ushort *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = (ushort *)Function_2023790(256, 0x44u);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 3036), v3, v4);
  Function_200c388(*(uint **)(v2 + 3024), *(uint *)(v2 + 3056), (int)v4);
  Function_201ada4_ClearTextBox(v2 + 3608, 15);
  Function_200dc48(v2 + 3608, 1, 31, 0xBu);
  v5 = *(uint *)(v2 + 3056);
  *(uint *)(v2 + 3060) = Function_201d738_CallInitTextInterpreter(v2 + 3608, 1);
  return Function_20237bc_FreeMsg((int)v4, 3060);
}

//----- (0223DA34) --------------------------------------------------------
uint __fastcall Function_223da34(int a1, uint a2, int a3)
{
  int v3;
  uint v4;

  v3 = a1;
  v4 = a2;
  if ( a2 == -1 )
    v4 = 11;
  Function_200b60c(*(uint *)(a1 + 3024), 0, a3, 5, 2, 1);
  Function_200e084(v3 + 3544, 1);
  return Function_223d9b8(v3, v4);
}

