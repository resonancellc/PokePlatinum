//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 36);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_22562cc, v2, 1u) )
    {
      *v1 = v2;
      return 1;
    }
    free(v2);
  }
  return 0;
}

//----- (0225621C) --------------------------------------------------------
int __fastcall Function_225621c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  *(uint *)(a1 + 4) = a4;
  if ( !Function_2099d7c(a4, (uint *)(a1 + 8), 0xCu) )
    Function_2256288(v4 + 8);
  if ( !Function_2256544(v4 + 20, v4 + 8, v6) )
    return 0;
  *(uchar *)v4 = 0;
  *(uchar *)(v4 + 1) = 0;
  *(uchar *)(v4 + 2) = 0;
  *(uint *)(v4 + 28) = ((int (__fastcall *)(int *, int, int (*)(), int, int))dword_225423C[1572])(
                           dword_2256A98,
                           6,
                           Function_2256308,
                           v4,
                           8);
  *(uint *)(v4 + 32) = 0;
  *(uint *)(v4 + 24) = v5;
  return 1;
}

//----- (02256288) --------------------------------------------------------
int __fastcall Function_2256288(ushort *a1)
{
  ushort *v1;
  int result;

  v1 = a1;
  *(uint *)a1 = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 18;
  result = Function_22564ac((ushort)a1[3], (ushort)v1[4], (ushort)v1[5]);
  v1[2] = result;
  return result;
}

//----- (022562A8) --------------------------------------------------------
uint __fastcall Function_22562a8(int a1)
{
  int v1;

  v1 = a1;
  Function_2099d54(*(uint *)(a1 + 4), (int *)(a1 + 8), 0xCu);
  ((void (__fastcall *)(uint))dword_225423C[1598])(*(uint *)(v1 + 28));
  Function_2256680(*(uint *)(v1 + 20));
  return free(v1);
}

//----- (022562CC) --------------------------------------------------------
uint __fastcall Function_22562cc(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 3 )
  {
    ((void (__fastcall *)(uint, uint))dword_225423C[183])(*((uint *)a2 + 6), *((uint *)a2 + 7));
    result = ((int (__fastcall *)(uchar *))*(&off_2256A8C + *v2))(v2);
    if ( result )
    {
      Function_22562a8((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 6));
    }
  }
  return result;
}

//----- (02256308) --------------------------------------------------------
int __fastcall Function_2256308(int result, int a2, int a3, int a4)
{
  *(uint *)(a4 + 8) = result;
  *(uint *)(a4 + 32) = a2;
  return result;
}

//----- (02256310) --------------------------------------------------------
int __fastcall Function_2256310(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (02256318) --------------------------------------------------------
char *__fastcall Function_2256318(char *result, char a2)
{
  if ( result[2] )
    a2 = 2;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (0225632C) --------------------------------------------------------
int __fastcall Function_225632c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22566d4(*(uint *)(v1 + 20), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 24));
      Function_2256318((char *)v1, 1);
    }
  }
  else
  {
    Function_22566b0(*(uint *)(v1 + 20), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (0225636C) --------------------------------------------------------
int __fastcall Function_225636c(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    if ( Function_22566e0(*(uint *)(a1 + 20)) )
      Function_2256318((char *)v1, 2);
    result = 0;
  }
  else
  {
    v3 = *(uchar *)(a1 + 1);
    if ( *(uchar *)(v1 + 1) )
    {
      if ( v3 == 1 )
      {
        v4 = *(uint *)(v1 + 32);
        if ( v4 == 2 )
        {
          Function_22566b0(*(uint *)(v1 + 20), 3);
          *(uchar *)(v1 + 1) = 0;
        }
        else if ( v4 == 3 )
        {
          switch ( (uchar)*(uint *)(v1 + 8) )
          {
            case 0u:
              *(ushort *)(v1 + 14) = Function_22564ec(*(ushort *)(v1 + 14));
              break;
            case 1u:
              *(ushort *)(v1 + 14) = Function_22564ec(*(ushort *)(v1 + 14));
              break;
            case 2u:
              *(ushort *)(v1 + 16) = Function_22564ec(*(ushort *)(v1 + 16));
              break;
            case 3u:
              *(ushort *)(v1 + 16) = Function_22564ec(*(ushort *)(v1 + 16));
              break;
            case 4u:
              *(ushort *)(v1 + 18) = Function_22564ec(*(ushort *)(v1 + 18));
              break;
            case 5u:
              *(ushort *)(v1 + 18) = Function_22564ec(*(ushort *)(v1 + 18));
              break;
            default:
              break;
          }
          *(ushort *)(v1 + 12) = Function_22564ac(
                                  *(ushort *)(v1 + 14),
                                  *(ushort *)(v1 + 16),
                                  *(ushort *)(v1 + 18));
          Function_22566b0(*(uint *)(v1 + 20), 3);
          Function_22566b0(*(uint *)(v1 + 20), 4);
          ++*(uchar *)(v1 + 1);
        }
      }
      else if ( v3 == 2 && Function_22566e0(*(uint *)(v1 + 20)) )
      {
        *(uchar *)(v1 + 1) = 0;
      }
    }
    else if ( *(uint *)(v1 + 32) == 1 )
    {
      Function_22566b0(*(uint *)(v1 + 20), 2);
      ++*(uchar *)(v1 + 1);
    }
    result = 0;
  }
  return result;
}

//----- (02256478) --------------------------------------------------------
int __fastcall Function_2256478(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22566e0(*(uint *)(v1 + 20)) )
      return 1;
  }
  else
  {
    Function_22566b0(*(uint *)(v1 + 20), 1);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022564AC) --------------------------------------------------------
int __fastcall Function_22564ac(int a1, int a2, int a3)
{
  char *v3;
  int v4;
  int result;

  v3 = (char *)&dword_2256AB0 + 18 * a1;
  v4 = v3[a2];
  if ( v4 == -10 || a3 != 18 && v3[a3] == -10 )
    return 0;
  result = v4 + 3;
  if ( a3 != 18 && a3 != a2 )
    result += v3[a3];
  return result;
}

//----- (022564EC) --------------------------------------------------------
int __fastcall Function_22564ec(int a1, int a2, int a3)
{
  char *v3;
  uint v4;
  int result;
  int v6;

  v3 = byte_2256BF4;
  v4 = 0;
  do
  {
    if ( (uchar)*v3 == a1 )
      break;
    ++v4;
    ++v3;
  }
  while ( v4 < 0x11 );
  if ( v4 == 17 )
  {
    if ( a2 <= 0 )
      result = 8;
    else
      result = 0;
  }
  else
  {
    v6 = v4 + a2;
    if ( v6 >= 17 )
    {
      if ( a3 )
        return 18;
      v6 = 0;
    }
    if ( v6 < 0 )
    {
      if ( a3 )
        return 18;
      v6 = 16;
    }
    result = (uchar)byte_2256BF4[v6];
  }
  return result;
}

//----- (02256544) --------------------------------------------------------
int __fastcall Function_2256544(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 192);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 8);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[12] = ((int (*)(void))dword_225423C[266])();
  v5[45] = LoadFromMsgNARC(1, 26, 624, 8u);
  v5[46] = LoadFromMsgNARC(1, 26, 456, 8u);
  v5[47] = Function_2023790(128, 8u);
  Function_22565b4(v5);
  *v2 = v5;
  return 1;
}

//----- (022565B4) --------------------------------------------------------
int __fastcall Function_22565b4(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v1 = a1;
  Function_2006ec0(12, 64, 1, 0, 0, 1, 8);
  ((void (__fastcall *)(int, int, int, int, int))dword_225423C[1479])(
    v1 + 96,
    12,
    62,
    63,
    8);
  v2 = dword_2256C7C;
  v3 = 0;
  v4 = v1;
  do
  {
    *(uint *)(v4 + 52) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                             *(uint *)(v1 + 48),
                             v2,
                             v1 + 96);
    ++v3;
    v2 += 4;
    v4 += 4;
  }
  while ( v3 < 6 );
  v5 = 0;
  v6 = v1;
  v7 = 44;
  do
  {
    *(uint *)(v6 + 76) = ((int (__fastcall *)(uint, int *, int))dword_225423C[1397])(
                             *(uint *)(v1 + 48),
                             dword_2256C08,
                             v1 + 96);
    result = ((int (*)(void))dword_225423C[1457])();
    ++v5;
    v6 += 4;
    v7 += 8;
  }
  while ( v5 < 5 );
  return result;
}

//----- (02256640) --------------------------------------------------------
int __fastcall Function_2256640(int a1)
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
    if ( *(uint *)(v3 + 52) )
      ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(v1 + 48));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 6 );
  v4 = 0;
  v5 = v1;
  do
  {
    if ( *(uint *)(v5 + 76) )
      ((void (__fastcall *)(uint))dword_225423C[1437])(*(uint *)(v1 + 48));
    ++v4;
    v5 += 4;
  }
  while ( v4 < 5 );
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 96);
}

//----- (02256680) --------------------------------------------------------
uint __fastcall Function_2256680(uint result, int a2)
{
  int v2;

  v2 = result;
  if ( result )
  {
    Function_20237bc_FreeMsg(*(uint *)(result + 188), a2);
    Function_200b190(*(ushort **)(v2 + 180));
    Function_200b190(*(ushort **)(v2 + 184));
    Function_2256640(v2);
    result = free(v2);
  }
  return result;
}

//----- (022566B0) --------------------------------------------------------
int __fastcall Function_22566b0(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256C34);
}

//----- (022566D4) --------------------------------------------------------
void Function_22566d4()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (022566E0) --------------------------------------------------------
void Function_22566e0()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (022566EC) --------------------------------------------------------
int __fastcall Function_22566ec(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (02256700) --------------------------------------------------------
int __fastcall Function_2256700(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_2256C18, 0);
  v5 = LoadFromNARC_RGCN(12, 61, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 60, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_22567a4(v3, v4, v5 >> 5);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_22566ec(v2);
}

//----- (022567A4) --------------------------------------------------------
int __fastcall Function_22567a4(int a1, int a2, short a3)
{
  int v3;
  short v4;
  int v5;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Function_201a7e8(*(uint **)(a1 + 4), a1 + 116, 6, 6, 15, 6u, 2u, 0, a3);
  Function_201a7e8(*(uint **)(v3 + 4), v3 + 132, 6, 16, 4, 6u, 2u, 0, v4 + 12);
  Function_201a7e8(*(uint **)(v3 + 4), v3 + 148, 6, 16, 8, 6u, 2u, 0, v4 + 24);
  Function_201a7e8(*(uint **)(v3 + 4), v3 + 164, 6, 3, 19, 0x16u, 2u, 0, v4 + 36);
  Function_201a9f4(v3 + 116);
  Function_201a9f4(v3 + 132);
  Function_201a9f4(v3 + 148);
  Function_201a9f4(v3 + 164);
  return Function_2256948(v3, v5);
}

//----- (02256870) --------------------------------------------------------
uint __fastcall Function_2256870(int a1)
{
  int v1;

  v1 = a1;
  Function_201a8fc(a1 + 116);
  Function_201a8fc(v1 + 132);
  Function_201a8fc(v1 + 148);
  return Function_201a8fc(v1 + 164);
}

//----- (02256894) --------------------------------------------------------
int __fastcall Function_2256894(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_2256870(v3);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_22566ec(v2);
}

//----- (022568B4) --------------------------------------------------------
int __fastcall Function_22568b4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = *(uint *)((int (__fastcall *)(int))dword_225423C[1025])(v2);
  v5 = 1;
  if ( v4 & 1 )
    v5 = 3;
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v3 + 4 * v4 + 52), v5);
  ((void (__fastcall *)(int))dword_225423C[122])(1635);
  return Function_22566ec(v2);
}

//----- (022568F0) --------------------------------------------------------
int __fastcall Function_22568f0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = *(uint *)((int (__fastcall *)(int))dword_225423C[1025])(v2);
  if ( v4 & 1 )
    v5 = 2;
  else
    v5 = 0;
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v3 + 4 * v4 + 52), v5);
  return Function_22566ec(v2);
}

//----- (02256924) --------------------------------------------------------
int __fastcall Function_2256924(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_2256948(v3, v4);
  return Function_22566ec(v2);
}

//----- (02256948) --------------------------------------------------------
int __fastcall Function_2256948(int a1, ushort *a2)
{
  ushort *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = a2[3];
  ((void (*)(void))Function_2256988)();
  Function_2256988(v3, v3 + 132, v2[4]);
  Function_2256988(v3, v3 + 148, v2[5]);
  Function_2256a00(v3, v3 + 164, v2[2]);
  return Function_2256a4c(v3, v2[2]);
}

//----- (02256988) --------------------------------------------------------
int *__fastcall Function_2256988(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_201ada4_ClearTextBox(a2, 4);
  if ( v5 == 18 )
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 184), 6u, *(ushort **)(v4 + 188));
  else
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 180), v5, *(ushort **)(v4 + 188));
  Function_2002d7c(0, *(uint *)(v4 + 188), 0);
  v6 = *(uint *)(v4 + 188);
  Function_201d78c(v3, 0);
  return Function_201accc(v3);
}

//----- (02256A00) --------------------------------------------------------
int *__fastcall Function_2256a00(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_201ada4_ClearTextBox(a2, 4);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 184), v5, *(ushort **)(v4 + 188));
  v6 = *(uint *)(v4 + 188);
  Function_201d78c(v3, 0);
  return Function_201accc(v3);
}

//----- (02256A4C) --------------------------------------------------------
int __fastcall Function_2256a4c(int result, uint a2)
{
  uint v2;
  uint v3;
  int v4;
  int v5;
  int v6;

  v6 = result;
  v2 = a2;
  v3 = 0;
  if ( a2 )
  {
    v4 = result;
    do
    {
      result = ((int (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v4 + 76), 4);
      ++v3;
      v4 += 4;
    }
    while ( v3 < v2 );
  }
  if ( v3 < 5 )
  {
    v5 = v6 + 4 * v3;
    do
    {
      result = ((int (__fastcall *)(uint, int))dword_225423C[1442])(*(uint *)(v5 + 76), 5);
      ++v3;
      v5 += 4;
    }
    while ( v3 < 5 );
  }
  return result;
}

