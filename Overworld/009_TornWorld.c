//----- (02249960) --------------------------------------------------------
uint __fastcall Function_2249960(int a1)
{
  int v1;
  int v2;
  uint *v3;
  uint *v4;
  int *v5;
  uint result;

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(a1);
  v3 = (uint *)Function_2027860(v2);
  v4 = Function_2027f6c(v3, 9);
  v5 = (int *)malloc(4u, 7796);
  Call_FillMemWithValue(v5, 0, 0x1E74u);
  *v5 = v1;
  v5[1] = (int)v4;
  *(uint *)(*(uint *)(v1 + 4) + 36) = v5;
  Function_2249c88(v5);
  if ( !(*v4 & 1) )
    Function_2249cc4(v5);
  Function_224be14(v5);
  Function_2249f50(v5);
  Function_2249f88(v5);
  Function_224a1e4(v5, 6);
  Function_224d744(v5);
  Function_224adc0(v5);
  Function_224b3a8(v5);
  Function_224aee4(v5, v5 + 106, v5[4]);
  Function_224f724(v5);
  Function_2249ff4(v5);
  Function_224a570(v5);
  Function_224a8c0(v5);
  Function_224ee40(v5);
  Function_224eb68(v5);
  Function_224b514(v5);
  Function_224dc34(v5);
  Function_224e33c(v5);
  Function_2249e94(v5);
  Function_224c8e8(v5);
  Function_224cbd8(v5);
  Function_224dca8(v5);
  Function_224b1b4(v5, *(uint *)(*v5 + 64), v5 + 106);
  Function_224e984(v5);
  ((void (__fastcall *)(uint))dword_21F331C[103])(*(uint *)(*v5 + 64));
  Function_2249ef0(v5);
  result = *v4 & 0xFFFFFFFE | 1;
  *v4 = result;
  return result;
}

//----- (02249A60) --------------------------------------------------------
int __fastcall Function_2249a60(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 4) + 36);
  Function_2249f18(*(uint *)(*(uint *)(a1 + 4) + 36));
  Function_224e988(v2);
  Function_224cbf8(v2);
  Function_224c9e8(v2);
  Function_2249ec8(v2);
  Function_224e34c(v2);
  Function_224dc4c(v2);
  Function_224b560(v2);
  Function_224eb94(v2);
  Function_224ee6c(v2);
  Function_224a9e8(v2);
  Function_224a574(v2);
  Function_224a0c8(v2);
  Function_224f760(v2);
  Function_224b064(v2 + 424);
  Function_224b3f4(v2);
  Function_224aed8(v2);
  Function_224d994(v2);
  Function_224a334(v2);
  Function_2249f98_Dummy(v2);
  Function_2249f84(v2);
  Function_224be8c(v2);
  Function_2249cac(v2);
  free(v2);
  result = *(uint *)(v1 + 4);
  *(uint *)(result + 36) = 0;
  return result;
}

//----- (02249B04) --------------------------------------------------------
int __fastcall Function_2249b04(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_22510d0();
  v3 = Function_224d720(v2);
  Function_224b570(v1);
  Function_2249d44(v1, 0);
  Function_224ec94(v1, *(uint *)(v3 + 4));
  Function_224dc74(v1, *(uint *)(v3 + 4));
  Function_224f0a4(v1, *(uint *)(v3 + 4));
  Function_224bf18(v1, *(uint *)(v3 + 8));
  Function_224db1c(v1);
  Function_224b4cc(v1);
  Function_224ec48(v1, *(uint *)(v3 + 8));
  Function_224dd24(v1, *(uint *)(v3 + 8));
  return Function_224f078(v1, *(uint *)(v3 + 8));
}

//----- (02249B68) --------------------------------------------------------
int __fastcall Function_2249b68(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_22510d0();
  v3 = v2;
  v4 = Function_224d720(v2);
  v5 = Function_224d720(*(uint *)(v4 + 8));
  Function_224b580(v1);
  Function_2249d44(v1, 0);
  Function_224ec94(v1, *(uint *)(v5 + 8));
  Function_224dc74(v1, *(uint *)(v5 + 8));
  Function_224f0a4(v1, *(uint *)(v5 + 8));
  Function_224beb4(v1, v3);
  Function_224db1c(v1);
  Function_224b45c(v1, 1);
  Function_224ec48(v1, v3);
  Function_224dd24(v1, v3);
  return Function_224f078(v1, v3);
}

//----- (02249BD4) --------------------------------------------------------
int __fastcall Function_2249bd4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_224b570(a1);
  Function_2249d44(v2, 0);
  Function_224ec94(v2, v3);
  Function_224dc74(v2, v3);
  Function_224f0a4(v2, v3);
  return Function_224db1c(v2);
}

//----- (02249C08) --------------------------------------------------------
int __fastcall Function_2249c08(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_224b4cc(a1);
  Function_224ec48(v2, v3);
  Function_224dd24(v2, v3);
  return Function_224f078(v2, v3);
}

//----- (02249C2C) --------------------------------------------------------
int __fastcall Function_2249c2c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_224b580(a1);
  Function_2249d44(v2, 0);
  Function_224ec94(v2, v3);
  Function_224dc74(v2, v3);
  Function_224f0a4(v2, v3);
  return Function_224db1c(v2);
}

//----- (02249C60) --------------------------------------------------------
int __fastcall Function_2249c60(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_224b45c(a1, 1);
  Function_224ec48(v3, v2);
  Function_224dd24(v3, v2);
  return Function_224f078(v3, v2);
}

//----- (02249C88) --------------------------------------------------------
int *__fastcall Function_2249c88(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *result;

  v4 = a1;
  *(uint *)(a1 + 8) = LoadFromNARC_8(181, 4u, a3, a4);
  *(uint *)(v4 + 12) = LoadFromNARC_8(182, 4u, v5, v6);
  result = LoadFromNARC_8(183, 4u, v7, v8);
  *(uint *)(v4 + 16) = result;
  return result;
}

//----- (02249CAC) --------------------------------------------------------
uint __fastcall Function_2249cac(int a1)
{
  int v1;

  v1 = a1;
  Call_FS_CloseFile(*(int **)(a1 + 8));
  Call_FS_CloseFile(*(int **)(v1 + 12));
  return Call_FS_CloseFile(*(int **)(v1 + 16));
}

//----- (02249CC4) --------------------------------------------------------
int __fastcall Function_2249cc4(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v1 = a1;
  v2 = a1[1];
  v3 = LoadFlagAdress(*(uint *)(*a1 + 12));
  *(uint *)(v2 + 12) = 0;
  v4 = 136;
  if ( Function_22510d0(v1) == 581 )
    v4 = 1695;
  Function_2249d68(v1, v4);
  v5 = Function_206afc0(v3, 2);
  v6 = *(uint *)(v2 + 12);
  if ( v5 )
  {
    result = v6 | 0x1DC0;
    *(uint *)(v2 + 12) = v6 | 0x1DC0;
  }
  else
  {
    result = v6 | 7;
    *(uint *)(v2 + 12) = v6 | 7;
  }
  return result;
}

//----- (02249D18) --------------------------------------------------------
ushort *__fastcall Function_2249d18(int a1, short a2, short a3, short a4)
{
  ushort *result;

  result = *(ushort **)(a1 + 4);
  result[2] = a2;
  result[3] = a3;
  result[4] = a4;
  return result;
}

//----- (02249D24) --------------------------------------------------------
int __fastcall Function_2249d24(int a1, ushort *a2, ushort *a3, ushort *a4)
{
  ushort *v4;
  int result;

  v4 = *(ushort **)(a1 + 4);
  *a2 = v4[2];
  *a3 = v4[3];
  result = (ushort)v4[4];
  *a4 = result;
  return result;
}

//----- (02249D38) --------------------------------------------------------
int __fastcall Function_2249d38(int a1)
{
  return **(uint **)(a1 + 4) & 1;
}

//----- (02249D44) --------------------------------------------------------
uint __fastcall Function_2249d44(int a1, int a2)
{
  uint *v2;
  uint result;

  v2 = *(uint **)(a1 + 4);
  result = 2 * a2 & 0x1FFFFFF | *v2 & 0xFE000001;
  *v2 = result;
  return result;
}

//----- (02249D5C) --------------------------------------------------------
int __fastcall Function_2249d5c(int a1)
{
  return **(uint **)(a1 + 4) << 7 >> 8;
}

//----- (02249D68) --------------------------------------------------------
int __fastcall Function_2249d68(int a1, short a2)
{
  int result;

  result = *(uint *)(a1 + 4);
  *(ushort *)(result + 10) = a2;
  return result;
}

//----- (02249D70) --------------------------------------------------------
int __fastcall Function_2249d70(int a1, uint a2)
{
  char v2;
  int v3;
  int result;

  v2 = a2;
  v3 = *(uint *)(a1 + 4);
  if ( a2 >= 0xB )
    ErrorHandler();
  result = (1 << v2) | *(ushort *)(v3 + 10);
  *(ushort *)(v3 + 10) = result;
  return result;
}

//----- (02249D8C) --------------------------------------------------------
int __fastcall Function_2249d8c(int a1, uint a2)
{
  char v2;
  int v3;
  int result;

  v2 = a2;
  v3 = *(uint *)(a1 + 4);
  if ( a2 >= 0xB )
    ErrorHandler();
  result = ~(1 << v2) & *(ushort *)(v3 + 10);
  *(ushort *)(v3 + 10) = result;
  return result;
}

//----- (02249DA8) --------------------------------------------------------
int __fastcall Function_2249da8(int a1, uint a2)
{
  char v2;
  int v3;
  int result;

  v2 = a2;
  v3 = *(uint *)(a1 + 4);
  if ( a2 >= 0xB )
    ErrorHandler();
  result = 1;
  if ( !((1 << v2) & *(ushort *)(v3 + 10)) )
    result = 0;
  return result;
}

//----- (02249DC8) --------------------------------------------------------
int __fastcall Function_2249dc8(int a1, uint a2)
{
  char v2;
  int v3;
  int result;

  v2 = a2;
  v3 = *(uint *)(a1 + 4);
  if ( a2 >= 0x11 )
    ErrorHandler();
  result = (1 << v2) | *(uint *)(v3 + 12);
  *(uint *)(v3 + 12) = result;
  return result;
}

//----- (02249DE4) --------------------------------------------------------
int __fastcall Function_2249de4(int a1, uint a2)
{
  char v2;
  int v3;
  int result;

  v2 = a2;
  v3 = *(uint *)(a1 + 4);
  if ( a2 >= 0x11 )
    ErrorHandler();
  result = ~(1 << v2) & *(uint *)(v3 + 12);
  *(uint *)(v3 + 12) = result;
  return result;
}

//----- (02249E00) --------------------------------------------------------
int __fastcall Function_2249e00(int a1, uint a2)
{
  char v2;
  int v3;
  int result;

  v2 = a2;
  v3 = *(uint *)(a1 + 4);
  if ( a2 >= 0x11 )
    ErrorHandler();
  result = 1;
  if ( !((1 << v2) & *(uint *)(v3 + 12)) )
    result = 0;
  return result;
}

//----- (02249E20) --------------------------------------------------------
uint __fastcall Function_2249e20(int a1, uint a2)
{
  uint v2;
  uint *v3;
  uint result;

  v2 = a2;
  v3 = *(uint **)(a1 + 4);
  if ( a2 >= 0x10 )
    ErrorHandler();
  result = (v2 << 25) & 0x1FFFFFFF | *v3 & 0xE1FFFFFF;
  *v3 = result;
  return result;
}

//----- (02249E44) --------------------------------------------------------
uint __fastcall Function_2249e44(int a1)
{
  return (uint)(8 * **(uint **)(a1 + 4)) >> 28;
}

//----- (02249E50) --------------------------------------------------------
int __fastcall Function_9_2249e50(int a1, int a2, int a3, int a4, uint *a5)
{
  int v5;
  int v6;
  int v7;
  int result;

  v5 = a2;
  v6 = a3;
  v7 = Function_22510d0(*(uint *)(*(uint *)(a1 + 4) + 36));
  if ( v7 == 582 )
  {
    if ( v5 == 15 && v6 == 26 )
    {
      result = 1;
      *a5 = 1;
      return result;
    }
  }
  else if ( v7 == 581 && v5 == 89 && v6 == 56 )
  {
    result = 1;
    *a5 = 1;
    return result;
  }
  result = 0;
  *a5 = 0;
  return result;
}

//----- (02249E94) --------------------------------------------------------
uint *__fastcall Function_2249e94(uchar *a1)
{
  int v1;
  uchar *v2;
  int v3;
  uint *result;

  v1 = (int)a1;
  v2 = a1 + 388;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v3 = GetSpriteListc(*(uint *)(*(uint *)a1 + 56));
  result = AddTaskToTaskList1((int)Function_2249edc, v1, v3 + 2);
  *(uint *)(v1 + 388) = result;
  return result;
}

//----- (02249EC8) --------------------------------------------------------
int *__fastcall Function_2249ec8(int a1)
{
  int *result;

  result = *(int **)(a1 + 388);
  if ( result )
    result = (int *)Call_RemoveTaskFromTaskList(result);
  return result;
}

//----- (02249EDC) --------------------------------------------------------
int __fastcall Function_2249edc(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_224a49c(a2);
  return Function_224f764(v2);
}

//----- (02249EF0) --------------------------------------------------------
uint *__fastcall Function_2249ef0(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  if ( *(uint *)(a1 + 7792) )
    ErrorHandler();
  result = AddTaskToTaskList2((int)Function_2249f3c, v1, 0x80u);
  *(uint *)(v1 + 7792) = result;
  return result;
}

//----- (02249F18) --------------------------------------------------------
int __fastcall Function_2249f18(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !*(uint *)(a1 + 7792) )
    ErrorHandler();
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 7792));
  result = 7792;
  *(uint *)(v1 + 7792) = 0;
  return result;
}

//----- (02249F3C) --------------------------------------------------------
int __fastcall Function_2249f3c(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_224cc4c(a2);
  return Function_224f804(v2);
}

//----- (02249F50) --------------------------------------------------------
int __fastcall Function_2249f50(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = a1;
  do
  {
    ++v1;
    *(ushort *)(v2 + 7772) = 4228;
    v2 += 2;
  }
  while ( v1 < 8 );
  *(ushort *)(a1 + 7774) = 7268;
  return SetEdgeTable(a1 + 7772, 7772, 7268, v1);
}

//----- (02249F84) --------------------------------------------------------
void Function_2249f84()
{
  ;
}

//----- (02249F88) --------------------------------------------------------
uint *__fastcall Function_2249f88(int a1)
{
  return Function_2062ccc(*(uint **)(*(uint *)a1 + 56), 0);
}

//----- (02249F98) --------------------------------------------------------
void Function_2249f98_Dummy()
{
  ;
}

//----- (02249F9C) --------------------------------------------------------
int __fastcall Function_9_2249f9c(int a1)
{
  int v1;
  ushort *v2;
  short v4;
  short v5;
  short v6;

  v1 = *(uint *)(*(uint *)(a1 + 4) + 36);
  v2 = (ushort *)(*(uint *)(*(uint *)(a1 + 4) + 36) + 20);
  v4 = v2[2] + v2[6];
  v5 = v2[3] + v2[7];
  v6 = v2[4] + v2[8];
  return Function_20209d4(&v4, *(ushort **)(v1 + 20));
}

//----- (02249FD0) --------------------------------------------------------
ushort *__fastcall Function_9_2249fd0(int a1)
{
  int v1;
  int v2;
  uint *v3;
  ushort *result;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  v2 = GetOverWorldData_VariableAreaAdresses(v1);
  v3 = (uint *)Function_2027860(v2);
  result = Function_2027f6c(v3, 9);
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  return result;
}

//----- (02249FF4) --------------------------------------------------------
uint *__fastcall Function_2249ff4(int *a1)
{
  int v1;
  int v2;
  uint *result;
  short v4;
  short v5;
  short v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = (int)a1;
  *(uint *)(*a1 + 32) = 1;
  a1[5] = *(uint *)(*a1 + 36);
  v7 = 2731713;
  v8 = 54786;
  v9 = 0;
  v10 = 96534528;
  v2 = (int)(a1 + 5);
  v11 = 0;
  Function_2020a50(2731713, a1[5]);
  Function_20209d4(&v8, *(ushort **)(v1 + 20));
  Function_2020910(SHIWORD(v10), *(uint *)(v1 + 20));
  Function_2020854((uchar)v10, *(int **)(v1 + 20));
  Function_20206bc(614400, 6963200, *(uint *)(v1 + 20));
  *(ushort *)(v2 + 4) = -10750;
  *(ushort *)(v2 + 6) = 0;
  *(ushort *)(v2 + 8) = 0;
  if ( Function_2249d38(v1) == 1 )
  {
    Function_2249d24(v1, &v6, &v5, &v4);
    *(ushort *)(v2 + 20) = v6 << 8;
    *(ushort *)(v2 + 22) = v5 << 8;
    *(ushort *)(v2 + 24) = v4 << 8;
    *(ushort *)(v2 + 12) = *(ushort *)(v2 + 20);
    *(ushort *)(v2 + 14) = *(ushort *)(v2 + 22);
    *(ushort *)(v2 + 16) = *(ushort *)(v2 + 24);
    *(ushort *)(v2 + 18) = *(ushort *)(v2 + 26);
  }
  if ( Function_22510d0(v1) != 582 )
    Function_202094c(192, *(uint *)v2);
  result = AddTaskToTaskList1((int)Function_224a0dc, v1, 0);
  *(uint *)(v2 + 60) = result;
  return result;
}

//----- (0224A0C8) --------------------------------------------------------
int *__fastcall Function_224a0c8(uint *a1)
{
  int *result;

  *(uint *)(*a1 + 32) = 0;
  result = (int *)a1[20];
  if ( result )
    result = (int *)Call_RemoveTaskFromTaskList(result);
  return result;
}

//----- (0224A0DC) --------------------------------------------------------
int __fastcall Function_224a0dc(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a2 + 20;
  result = v2 + 28;
  if ( *(uint *)(v2 + 28) )
  {
    v4 = *(uint *)(v2 + 32) - 1;
    *(uint *)(v2 + 32) = v4;
    if ( v4 > 0 )
    {
      *(uint *)(v2 + 36) += *(uint *)(v2 + 48);
      *(uint *)(v2 + 40) += *(uint *)(v2 + 52);
      *(uint *)(v2 + 44) += *(uint *)(v2 + 56);
      *(ushort *)(v2 + 12) = *(uint *)(v2 + 36) / 4096;
      *(ushort *)(v2 + 14) = *(uint *)(v2 + 40) / 4096;
      result = *(uint *)(v2 + 44) / 4096;
      *(ushort *)(v2 + 16) = result;
    }
    else
    {
      *(uint *)result = 0;
      *(ushort *)(v2 + 12) = *(ushort *)(v2 + 20);
      *(ushort *)(v2 + 14) = *(ushort *)(v2 + 22);
      *(ushort *)(v2 + 16) = *(ushort *)(v2 + 24);
      result = *(ushort *)(v2 + 26);
      *(ushort *)(v2 + 18) = result;
    }
  }
  return result;
}

//----- (0224A148) --------------------------------------------------------
int __fastcall Function_224a148(int a1, int a2)
{
  int v2;
  ushort *v3;
  uint *v4;
  int result;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = (ushort *)(a1 + 20);
  v4 = (uint *)(a1 + 48);
  Function_2249d18(a1, *(ushort *)(a2 + 12), *(ushort *)(v2 + 14), *(ushort *)(v2 + 16));
  v3[10] = *(ushort *)(v2 + 12) << 8;
  v3[11] = *(ushort *)(v2 + 14) << 8;
  v3[12] = *(ushort *)(v2 + 16) << 8;
  if ( v3[6] != v3[10] || v3[7] != v3[11] || v3[8] != v3[12] )
  {
    *v4 = 1;
    v4[1] = *(uint *)(v2 + 20);
    v4[2] = v3[6] << 12;
    v4[3] = v3[7] << 12;
    v4[4] = v3[8] << 12;
    v6 = Function_2250eb0(v3[6], v3[10]);
    v4[5] = s32_div_f(v6 << 12, *(uint *)(v2 + 20));
    v7 = Function_2250eb0(v3[7], v3[11]);
    v4[6] = s32_div_f(v7 << 12, *(uint *)(v2 + 20));
    v8 = Function_2250eb0(v3[8], v3[12]);
    v4[7] = s32_div_f(v8 << 12, *(uint *)(v2 + 20));
    result = 1;
  }
  else
  {
    result = 0;
    *v4 = 0;
  }
  return result;
}

//----- (0224A1E4) --------------------------------------------------------
int __fastcall Function_224a1e4(int a1, int a2)
{
  int v2;
  uint *v3;
  uint v4;
  int *v5;
  int v6;
  int result;

  v2 = a1;
  v3 = (uint *)(a1 + 392);
  v4 = 32 * a2;
  *(uint *)(a1 + 392) = a2;
  v5 = (int *)malloc(4u, 32 * a2);
  v3[1] = v5;
  Call_FillMemWithValue(v5, 0, v4);
  Function_20182cc(v3 + 4, 4u, 4);
  v6 = ((int (__fastcall *)(uint, int, int))dword_21DF5B4[3])(*(uint *)(*(uint *)v2 + 64), 197, 1);
  v3[2] = v6;
  result = Function_20b3c5c(v6, 0);
  v3[3] = result;
  return result;
}

//----- (0224A228) --------------------------------------------------------
int __fastcall Function_224a228(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_2021430(a3);
  v10 = Function_2021438(v3);
  v9 = Function_2021440(v3);
  if ( *(uint *)(v5 + 16) )
    ErrorHandler();
  *(uint *)(v5 + 28) = v3;
  v7 = Function_20b2cb4((int (***)(void))(v4 + 16), *(uchar **)(v4 + 12), v6);
  *(uint *)(v5 + 16) = v7;
  Function_20ae4f0(v7, *(uchar **)(v4 + 12), v6, v10);
  Function_20ae77c(v9, *(uint *)(v5 + 16));
  Function_2021444(v3, (int)Function_224a4c8, v5);
  result = *(uint *)(v5 + 24);
  if ( result )
  {
    result = GetSpriteGraphic(result);
    *(ushort *)(v5 + 20) = result;
  }
  return result;
}

//----- (0224A294) --------------------------------------------------------
int __fastcall Function_224a294(int result, int a2)
{
  int v2;

  v2 = a2;
  if ( *(uint *)(a2 + 16) )
  {
    Function_20b2cd8(result + 16);
    result = 0;
    *(uint *)(v2 + 16) = 0;
  }
  return result;
}

//----- (0224A2AC) --------------------------------------------------------
int *__fastcall Function_224a2ac(int a1, int a2)
{
  int *v2;

  v2 = (int *)a2;
  Function_224a294(a1, a2);
  return Call_FillMemWithValue(v2, 0, 0x20u);
}

//----- (0224A2C0) --------------------------------------------------------
int __fastcall Function_224a2c0(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *(uint *)(a2 + 24);
  if ( result && !*(uint *)(a2 + 16) )
  {
    result = ((int (*)(void))dword_21EAF50[148])();
    if ( result )
      result = Function_224a228(v3, v2, result);
  }
  return result;
}

//----- (0224A2E4) --------------------------------------------------------
int __fastcall Function_224a2e4(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  v2 = *(uint **)(a1 + 24);
  if ( v2 )
  {
    if ( !CheckSpriteFlag_Locked(v2) )
      return 1;
    if ( *(ushort *)(v1 + 22) != GetSpriteID(*(uint *)(v1 + 24)) )
      return 1;
    if ( *(uint *)(v1 + 16) && *(ushort *)(v1 + 20) != GetSpriteGraphic(*(uint *)(v1 + 24)) )
      return 2;
  }
  else if ( !Function_2021404(*(uint *)(v1 + 28)) )
  {
    return 1;
  }
  return 0;
}

//----- (0224A334) --------------------------------------------------------
int __fastcall Function_224a334(int a1)
{
  uint *v1;
  int v2;
  int i;
  int v4;
  int result;

  v1 = (uint *)(a1 + 392);
  v2 = 0;
  for ( i = *(uint *)(a1 + 396); v2 < *v1; i += 32 )
  {
    Function_224a2ac((int)v1, i);
    ++v2;
  }
  v4 = v1[2];
  if ( v4 )
  {
    free(v4);
    v1[2] = 0;
  }
  free(v1[1]);
  result = 0;
  v1[1] = 0;
  return result;
}

//----- (0224A374) --------------------------------------------------------
int __fastcall Function_224a374(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = a1;
  result = a3 << 12;
  *(ushort *)v3 = a3;
  *(uint *)(v3 + 4) = a3 << 12;
  *(uint *)(v3 + 12) = a3 << 12;
  if ( a2 )
  {
    *(uint *)(v3 + 24) = a2;
    result = GetSpriteID(a2);
    *(ushort *)(v3 + 22) = result;
  }
  return result;
}

//----- (0224A390) --------------------------------------------------------
int __fastcall Function_224a390(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = *(uint *)(a1 + 392);
  v4 = 0;
  v5 = *(uint *)(a1 + 396);
  if ( v3 <= 0 )
    return ErrorHandler();
  while ( *(uint *)(v5 + 24) || *(uint *)(v5 + 28) )
  {
    ++v4;
    v5 += 32;
    if ( v4 >= v3 )
      return ErrorHandler();
  }
  return Function_224a374(v5, a2, a3);
}

//----- (0224A3C4) --------------------------------------------------------
int __fastcall Function_224a3c4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 392;
  v4 = *(uint *)(a1 + 392);
  v5 = a2;
  v6 = 0;
  v7 = *(uint *)(v3 + 4);
  if ( v4 <= 0 )
    return ErrorHandler();
  while ( *(uint *)(v7 + 24) || *(uint *)(v7 + 28) )
  {
    ++v6;
    v7 += 32;
    if ( v6 >= v4 )
      return ErrorHandler();
  }
  Function_224a374(v7, 0, a3);
  return Function_224a228(v3, v7, v5);
}

//----- (0224A408) --------------------------------------------------------
int *__fastcall Function_224a408(int a1, int a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = (uint *)(a1 + 392);
  v3 = 0;
  v4 = v2[1];
  if ( *v2 <= 0 )
    return (int *)ErrorHandler();
  while ( *(uint *)(v4 + 28) != a2 )
  {
    ++v3;
    v4 += 32;
    if ( v3 >= *v2 )
      return (int *)ErrorHandler();
  }
  return Function_224a2ac((int)v2, v4);
}

//----- (0224A438) --------------------------------------------------------
int *__fastcall Function_224a438(int a1, int a2, int a3)
{
  short *v3;
  int v4;
  int *result;
  int v6;

  v3 = (short *)a3;
  v4 = a2;
  if ( *(uint *)(a3 + 24) || (result = *(int **)(a3 + 28)) != 0 )
  {
    v6 = Function_224a2e4(a3);
    if ( v6 == 1 )
    {
      result = Function_224a2ac(v4, (int)v3);
    }
    else
    {
      if ( v6 == 2 )
        Function_224a294(v4, (int)v3);
      Function_224a2c0(v4, (int)v3);
      result = (int *)v3[1];
      if ( v3[1] )
      {
        v3[1] = (ushort)result - 1;
        Function_2250f1c(v3 + 2, *((uint *)v3 + 2));
        if ( !v3[1] )
          *((uint *)v3 + 1) = *v3 << 12;
        result = (int *)*((uint *)v3 + 1);
        *((uint *)v3 + 3) = result;
      }
    }
  }
  return result;
}

//----- (0224A49C) --------------------------------------------------------
int __fastcall Function_224a49c(int a1)
{
  int v1;
  int *v2;
  int result;
  int v4;
  int v5;

  v1 = a1;
  v2 = (int *)(a1 + 392);
  result = *(uint *)(a1 + 392);
  v4 = 0;
  v5 = v2[1];
  if ( result > 0 )
  {
    do
    {
      Function_224a438(v1, (int)v2, v5);
      result = *v2;
      ++v4;
      v5 += 32;
    }
    while ( v4 < *v2 );
  }
  return result;
}

//----- (0224A4C8) --------------------------------------------------------
uint *__fastcall Function_224a4c8(int a1, int a2)
{
  uint *result;

  result = *(uint **)(a2 + 16);
  *result = *(uint *)(a2 + 12);
  return result;
}

//----- (0224A4D0) --------------------------------------------------------
int __fastcall Function_224a4d0(int a1, int a2, int a3, short a4)
{
  int v4;
  uint *v5;
  short v6;
  int v7;
  int v8;
  short *v9;

  v4 = a3;
  v5 = (uint *)(a1 + 392);
  v6 = a4;
  v7 = a2;
  v8 = 0;
  v9 = (short *)v5[1];
  if ( *v5 <= 0 )
    return ErrorHandler();
  while ( *((uint *)v9 + 6) != v7 )
  {
    ++v8;
    v9 += 16;
    if ( v8 >= *v5 )
      return ErrorHandler();
  }
  *((uint *)v9 + 1) = *v9 << 12;
  *((uint *)v9 + 2) = s32_div_f(v4 << 12, a4);
  v9[1] = v6;
  return Function_2250ee8(v9, (short)v4);
}

//----- (0224A520) --------------------------------------------------------
int __fastcall Function_9_224a520(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = 0;
  v3 = (uint *)(*(uint *)(*(uint *)(a1 + 4) + 36) + 392);
  v4 = v3[1];
  if ( *v3 <= 0 )
    return 0;
  while ( *(uint *)(v4 + 24) != a2 )
  {
    ++v2;
    v4 += 32;
    if ( v2 >= *v3 )
      return 0;
  }
  return *(uint *)(v4 + 12) / 4096;
}

//----- (0224A558) --------------------------------------------------------
int __fastcall Function_9_224a558(int a1, int a2, int a3)
{
  return Function_224a3c4(*(uint *)(*(uint *)(a1 + 4) + 36), a2, a3);
}

//----- (0224A564) --------------------------------------------------------
int *__fastcall Function_9_224a564(int a1, int a2)
{
  return Function_224a408(*(uint *)(*(uint *)(a1 + 4) + 36), a2);
}

//----- (0224A570) --------------------------------------------------------
void Function_224a570()
{
  ;
}

//----- (0224A574) --------------------------------------------------------
void Function_224a574()
{
  ;
}

//----- (0224A578) --------------------------------------------------------
int *__fastcall Function_224a578(int a1, int a2)
{
  uint v2;
  int v3;
  int *v4;

  v2 = a2;
  v3 = a1;
  if ( a2 > 128 )
    ErrorHandler();
  v4 = (int *)(v3 + 88);
  Call_FillMemWithValue(v4, 0, v2);
  return v4;
}

//----- (0224A598) --------------------------------------------------------
int __fastcall Function_224a598(int a1)
{
  return a1 + 88;
}

//----- (0224A59C) --------------------------------------------------------
int __fastcall Function_9_224a59c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a1;
  v3 = a2;
  v4 = GetOverWorldData_VariableAreaAdresses(a1);
  v5 = Function_2027860(v4);
  if ( Function_2027f80(v5) == 9 )
  {
    v6 = *(uint *)(*(uint *)(v2 + 4) + 36);
    v7 = Function_2061434(*(uint *)(v2 + 60), v3);
    Function_2250f44(v6, &v12, &v11, &v10);
    if ( v7 == 1 )
      Function_224b748(v6, v12, v11, v10, v3);
    Function_224a8a0(v6, v12, v11, v10, v3);
    if ( Function_224aa00(v6, v12, v11, v10, v3) == 1 )
      return 1;
    v9 = Function_22510d0(v6);
    if ( v9 == 577 )
    {
      if ( v3 == 3 && v12 == 104 && v11 == 170 && v10 >= 76 && v10 <= 79 )
      {
        Function_224e498(v6, &dword_2251420[6]);
        return 1;
      }
    }
    else if ( v9 == 579 && v3 == 3 && v12 == 104 && v11 == 128 && v10 >= 76 && v10 <= 79 )
    {
      Function_224e498(v6, dword_22513D8);
      return 1;
    }
  }
  return 0;
}

//----- (0224A67C) --------------------------------------------------------
int __fastcall Function_9_224a67c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(*(uint *)(a1 + 4) + 36);
  v5 = Function_22510d0(*(uint *)(*(uint *)(a1 + 4) + 36));
  if ( v5 == 581 )
  {
    if ( !v3 )
    {
      v6 = LoadFlagAdress(*(uint *)(*(uint *)v4 + 12));
      if ( (uint)Function_206b5d8(v6) >= 0xA )
      {
        Function_2250f44(v4, &v13, &v12, &v11);
        if ( v13 == 89 && v12 == 65 && v11 == 57 )
        {
          Function_203e880(v2, 2u, 0);
          return 1;
        }
      }
    }
  }
  else if ( v5 == 582 && v3 == 1 )
  {
    Function_2250f44(v4, &v10, &v9, &v8);
    if ( v10 == 15 && v9 == 1 && v8 == 25 )
    {
      Function_203e880(v2, 4u, 0);
      return 1;
    }
  }
  return 0;
}

//----- (0224A71C) --------------------------------------------------------
int __fastcall Function_9_224a71c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(a1);
  v3 = Function_2027860(v2);
  if ( Function_2027f80(v3) != 9 )
    return 0;
  v5 = GetSpriteFaceDirection(*(uint *)(v1 + 60));
  v6 = *(uint *)(*(uint *)(v1 + 4) + 36);
  Function_2250f44(*(uint *)(*(uint *)(v1 + 4) + 36), &v11, &v10, &v9);
  if ( Function_224d040(v6, v11, v10, v9) == 1 )
    return 1;
  if ( Function_224e434(v6, v11, v10, v9) == 1 )
    return 1;
  v7 = Function_22510d0(v6);
  v8 = LoadFlagAdress(*(uint *)(*(uint *)v6 + 12));
  if ( v7 != 581 || v5 )
  {
    if ( v7 == 582 && v5 == 1 && v11 == 15 && v10 == 1 && (uint)(v9 - 25) <= 1 )
    {
      Function_203e880(v1, 4u, 0);
      return 1;
    }
  }
  else if ( (uint)Function_206b5d8(v8) >= 0xA && v11 == 89 && v10 == 65 && (uint)(v9 - 56) <= 1 )
  {
    Function_203e880(v1, 2u, 0);
    return 1;
  }
  return 0;
}

//----- (0224A800) --------------------------------------------------------
int __fastcall Function_9_224a800(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(*(uint *)(a1 + 4) + 36);
  v5 = Function_22510d0(*(uint *)(*(uint *)(a1 + 4) + 36));
  if ( v5 == 581 )
  {
    if ( !v3 )
    {
      v6 = LoadFlagAdress(*(uint *)(*(uint *)v4 + 12));
      if ( (uint)Function_206b5d8(v6) >= 0xA )
      {
        Function_2250f44(v4, &v13, &v12, &v11);
        if ( v13 == 89 && v12 == 65 && v11 == 57 )
        {
          Function_203e880(v2, 2u, 0);
          return 1;
        }
      }
    }
  }
  else if ( v5 == 582 && v3 == 1 )
  {
    Function_2250f44(v4, &v10, &v9, &v8);
    if ( v10 == 15 && v9 == 1 && v8 == 25 )
    {
      Function_203e880(v2, 4u, 0);
      return 1;
    }
  }
  return 0;
}

//----- (0224A8A0) --------------------------------------------------------
int __fastcall Function_224a8a0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_224c740();
  if ( !v2 )
    return 0;
  Function_224a148(v1, v2);
  return 1;
}

//----- (0224A8C0) --------------------------------------------------------
int __fastcall Function_224a8c0(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v13;
  uint *v14;
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

  v24 = a4;
  v13 = a1;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 90;
  v22 = 270;
  v23 = 180;
  v14 = *(uint **)(*(uint *)a1 + 60);
  v4 = (uint *)Function_205eb3c(*(uint *)(*(uint *)a1 + 60));
  Function_2250f44(v13, &v17, &v16, &v15);
  v5 = Function_224c494(v13);
  v6 = Function_22510d8(v5);
  if ( v6 == 1 )
    SetUnsetSpriteFlags800000(v4, 0);
  else
    SetUnsetSpriteFlags800000(v4, 1);
  Function_205f098(v14, v6);
  v7 = 0;
  v8 = GetSpriteGraphic((int)v4);
  v9 = v8;
  if ( v8 > 0xB3 )
  {
    if ( v8 <= 0x102 )
    {
      if ( v8 >= 0x102 )
      {
LABEL_25:
        v9 = 258;
        v7 = 2;
        goto LABEL_28;
      }
      if ( v8 != 212 )
        goto LABEL_27;
      goto LABEL_23;
    }
    if ( v8 > 0x107 || v8 < 0x103 )
      goto LABEL_27;
    if ( v8 == 259 )
    {
LABEL_26:
      v9 = 259;
      v7 = 2;
      goto LABEL_28;
    }
    if ( v8 != 263 )
      goto LABEL_27;
LABEL_24:
    v9 = 263;
    goto LABEL_28;
  }
  if ( v8 >= 0xB2 )
  {
    if ( v8 != 178 )
    {
      if ( v8 != 179 )
      {
LABEL_27:
        ErrorHandler();
        goto LABEL_28;
      }
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  if ( v8 )
  {
    if ( v8 != 97 )
      goto LABEL_27;
    goto LABEL_24;
  }
LABEL_23:
  v9 = 212;
LABEL_28:
  Function_205eb58((int)v14, v7);
  Function_2061ad4((int)v4, v9);
  if ( v6 != 1 && IsSetSpriteFlags800000(v4) != 1 )
    ErrorHandler();
  if ( v7 == 2 )
  {
    v10 = GetSpriteFaceDirection((int)v14);
    v11 = ((int (__fastcall *)(uint *, int, int, int, int, int, uint))dword_21F6218[2281])(
            v14,
            v17,
            v16,
            v15,
            v10,
            1,
            v6);
    Function_205ec00((int)v14, v11);
  }
  return Function_224a390(v13, (int)v4, *(&v18 + v6));
}

//----- (0224A9E8) --------------------------------------------------------
uint *__fastcall Function_224a9e8(int a1)
{
  uint *v1;

  v1 = *(uint **)(*(uint *)a1 + 60);
  Function_205f098(*(uint **)(*(uint *)a1 + 60), 0);
  return Function_205ebc0(v1);
}

//----- (0224AA00) --------------------------------------------------------
int __fastcall Function_224aa00(int a1)
{
  int v1;
  ushort *v2;

  v1 = a1;
  v2 = (ushort *)Function_224c69c();
  if ( !v2 )
    return 0;
  Function_205eb3c(*(uint *)(*(uint *)v1 + 60));
  ((void (__fastcall *)(int, ushort *))dword_2251210[*v2 + 5])(v1, v2);
  return 1;
}

//----- (0224AA34) --------------------------------------------------------
uint *__fastcall Function_224aa34(int a1, short *a2)
{
  short *v2;
  int *v3;
  int *v4;
  short *v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  int v13;
  int v14;

  v2 = a2;
  v3 = (int *)a1;
  v4 = Function_224a578(a1, 92);
  v5 = v2;
  v6 = v4 + 13;
  v7 = 5;
  do
  {
    v8 = *(uint *)v5;
    v9 = *((uint *)v5 + 1);
    v5 += 4;
    *v6 = v8;
    v6[1] = v9;
    v6 += 2;
    --v7;
  }
  while ( v7 );
  v4[1] = v2[14];
  v4[2] = s32_div_f(v2[10] << 16, v2[14]);
  v4[3] = s32_div_f(v2[11] << 16, v2[14]);
  v4[4] = s32_div_f(v2[12] << 16, v2[14]);
  v4[6] = s32_div_f(0x10000u, v2[14]);
  v10 = v4[3];
  v11 = v4 + 10;
  *v11 = v4[2];
  v11[1] = v10;
  v4[12] = v4[4];
  v12 = v4[10];
  if ( v12 < 0 )
    v4[10] = -v12;
  v13 = v4[11];
  if ( v13 < 0 )
    v4[11] = -v13;
  v14 = v4[12];
  if ( v14 < 0 )
    v4[12] = -v14;
  return OverWorldData_InitUnknownStruct01(*v3, (int)Function_224aad4, (int)v3);
}

//----- (0224AAD4) --------------------------------------------------------
int __fastcall Function_224aad4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  uint *v8;
  char v9;
  int v10;
  int v11;
  int v12;
  uint *v13;
  uint v14;
  int v15;
  int v16;
  int result;
  uint *v18;
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

  v32 = a4;
  v4 = a1;
  v5 = LoadOverWorldDataAdress(a1);
  v19 = GetUnknownStruct01_c(v4);
  v6 = Function_224a598(v19);
  v18 = *(uint **)(v5 + 60);
  v7 = (uint *)Function_205eb3c(*(uint *)(v5 + 60));
  v8 = v7;
  switch ( v9 )
  {
    case 0:
      ++*(uint *)v6;
      goto LABEL_20;
    case 1:
      if ( !IsSpriteMovable(v7) )
        goto LABEL_20;
      v10 = *(short *)(v6 + 54);
      switch ( (uchar)Function_224c470(v19) )
      {
        case 1u:
          v28 = 2;
          v29 = 3;
          v30 = 0;
          v31 = 1;
          v10 = *(&v28 + v10);
          break;
        case 2u:
          v24 = 3;
          v25 = 2;
          v26 = 0;
          v27 = 1;
          v10 = *(&v24 + v10);
          break;
        case 3u:
          v20 = 1;
          v21 = 0;
          v22 = 3;
          v23 = 2;
          v10 = *(&v20 + v10);
          break;
        default:
          break;
      }
      v11 = Function_2065838(v10, 0);
      Function_2065638(v8, v11);
      ChangeSpriteFaceDirection_WithCheck(v8, v10);
      Function_224a4d0(v19, (int)v8, *(short *)(v6 + 78), *(ushort *)(v6 + 80));
      ++*(uint *)v6;
      goto LABEL_9;
    case 2:
LABEL_9:
      if ( Function_224ac58(v6, v8) == 1 )
      {
        v12 = 0;
        v13 = (uint *)Function_205eb3c((int)v18);
        Function_224c3f8(v19, *(ushort *)(v6 + 90));
        v14 = Function_22510d8(*(short *)(v6 + 88));
        Function_205f098(v18, v14);
        Function_205ebc0(v18);
        SetUnsetSpriteFlags800000(v13, 1);
        v15 = *(short *)(v6 + 88);
        switch ( v15 )
        {
          case 1:
            v12 = 2;
            break;
          case 2:
            v12 = 1;
            break;
          case 3:
            v12 = 3;
            break;
        }
        ((void (__fastcall *)(uint *, int))dword_21F3678[0])(v13, v12);
        Function_2005748(0x647u);
        ++*(uint *)v6;
      }
      goto LABEL_20;
    case 3:
      if ( !IsSpriteMovable(v7) )
        goto LABEL_20;
      v16 = Function_2065838(*(short *)(v6 + 86), 0);
      Function_2065638(v8, v16);
      result = 1;
      break;
    default:
LABEL_20:
      result = 0;
      break;
  }
  return result;
}

//----- (0224AC58) --------------------------------------------------------
int __fastcall Function_224ac58(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  uint *v6;
  ushort *v7;
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
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v26 = a4;
  v5 = (uint *)a1;
  v6 = a2;
  v7 = (ushort *)(a1 + 52);
  CopySprite70Struct(a2, &v23);
  v23 += v5[2];
  v24 += v5[3];
  v25 += v5[4];
  CopyToSprite70Struct(v6, &v23);
  v8 = v5[7] + v5[10];
  v5[7] = v8;
  if ( v8 >= 0x10000 )
  {
    v5[7] -= 0x10000;
    v9 = LoadSpritePositionX((int)v6);
    v10 = (short)v7[10];
    if ( v10 <= 0 )
    {
      if ( v10 < 0 )
        --v9;
    }
    else
    {
      ++v9;
    }
    SaveSpritePositionX((int)v6, v9);
  }
  v11 = v5[8] + v5[11];
  v5[8] = v11;
  if ( v11 >= 0x8000 )
  {
    v5[8] -= 0x8000;
    v12 = LoadSpritePositionZ((int)v6);
    v13 = (short)v7[11];
    if ( v13 <= 0 )
    {
      if ( v13 < 0 )
        --v12;
    }
    else
    {
      ++v12;
    }
    SaveSpritePositionZ((int)v6, v12);
  }
  v14 = v5[9] + v5[12];
  v5[9] = v14;
  if ( v14 >= 0x10000 )
  {
    v5[9] -= 0x10000;
    v15 = LoadSpritePositionY((int)v6);
    v16 = (short)v7[12];
    if ( v16 <= 0 )
    {
      if ( v16 < 0 )
        --v15;
    }
    else
    {
      ++v15;
    }
    SaveSpritePositionY((int)v6, v15);
  }
  v17 = GetSpriteAdr7c((int)v6);
  v18 = v5[5] + v5[6];
  v5[5] = v18;
  v22 = v18 / 4096;
  v19 = (ushort)v7[15];
  if ( v7[15] )
  {
    if ( v19 == 1 )
    {
      v4 = (uint *)(v17 + 4);
    }
    else if ( v19 == 2 )
    {
      v4 = (uint *)(v17 + 8);
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    v4 = (uint *)v17;
  }
  *v4 = dword_2252CF8[v22];
  if ( v7[16] == 1 )
    *v4 = -*v4;
  v20 = v5[1] - 1;
  v5[1] = v20;
  if ( v20 > 0 )
    return 0;
  *v4 = 0;
  CopySpritePositionsFromOldToNew((int)v6);
  Function_2062b68((int)v6);
  ChangeSpriteFaceDirection_WithCheck(v6, (short)v7[17]);
  SetSpritea0((int)v6, 0);
  return 1;
}

//----- (0224ADC0) --------------------------------------------------------
uint __fastcall Function_224adc0(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;
  short v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a1;
  Function_201ff0c(2u, 0);
  v5 = Function_2006cb8_LoadFileInMemory(v4[4], 1u, 4u);
  Function_20a71b0(v5, &v15);
  Function_201972c(2u, *(uint *)(v15 + 12), 32, 0);
  v6 = 0;
  v7 = *(ushort **)(v15 + 12);
  v8 = (int)(v4 + 1835);
  do
  {
    ++v6;
    *(ushort *)(v8 + 8) = *v7;
    v9 = *v7;
    ++v7;
    *(ushort *)(v8 + 40) = v9;
    v8 += 2;
  }
  while ( v6 < 16 );
  free(v5);
  v10 = Function_2006cb8_LoadFileInMemory(v4[4], 0, 4u);
  NNS_G2dGetUnpackedPaletteData(v10, &v14);
  Function_201958c(*(uint **)(*v4 + 8), 2u, *(int **)(v14 + 20), *(uint *)(v14 + 16), 0);
  free(v10);
  v11 = Function_2006cb8_LoadFileInMemory(v4[4], 2u, 4u);
  Function_20a7248(v11, &v13);
  Function_2019460(*(uint **)(*v4 + 8), 2u, (int *)(v13 + 12), *(uint *)(v13 + 8), 0);
  Function_2019574(*(uint *)(*v4 + 8), 2, (int *)(v13 + 12), *(uint *)(v13 + 8));
  Function_2019448(*(uint **)(*v4 + 8), 2u);
  free(v11);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  REG_BG1CNT = REG_BG1CNT & 0xFFFC | 1;
  REG_BG2CNT = REG_BG2CNT & 0xFFFC | 3;
  REG_BG3CNT &= 0xFFFCu;
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 1, 54, 0, 16);
  Function_201ff0c(2u, 1);
  return Function_201ff0c(0x10u, 1);
}

//----- (0224AED8) --------------------------------------------------------
short *Function_224aed8()
{
  short *result;

  result = &REG_BLDCNT;
  REG_BLDCNT = 0;
  return result;
}

//----- (0224AEE4) --------------------------------------------------------
uint *__fastcall Function_224aee4(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  uint *v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  ushort *v11;
  short *v12;
  short v13;
  uint *v14;
  int v15;
  int *v16;
  uint *v17;
  int v18;
  int *v19;
  uint *result;
  int v21;
  int v22;

  v4 = a2;
  v21 = a1;
  v22 = a3;
  *a2 = (int)Function_20095c4(16, (int)(a2 + 1), 4, a4);
  Function_200962c((int)(v4 + 1), 0, -2097152, v5);
  v4[75] = (int)Function_2009714(7, 0, 4u);
  v4[76] = (int)Function_2009714(1, (int *)1, 4u);
  v4[77] = (int)Function_2009714(7, (int *)2, 4u);
  v6 = (uint *)&dword_2251E58;
  v4[78] = (int)Function_2009714(7, (int *)3, 4u);
  v7 = 0;
  v8 = v4;
  do
  {
    v8[79] = (int)Function_2009a4c(v4[75], v22, *v6, 0, v7 + 255, 1, 4u);
    Function_200a3dc((int *)v8[79]);
    ++v7;
    ++v6;
    ++v8;
  }
  while ( v7 < 7 );
  v4[86] = (int)Function_2009b04(v4[76], v22, 0x18u, 0, 255, 1, 5, 4u);
  v9 = Function_2009e34(v4[86]);
  v10 = 0;
  v11 = (ushort *)(v21 + 7412);
  v12 = *(short **)(v9 + 12);
  do
  {
    v13 = *v12;
    ++v10;
    ++v12;
    *v11 = v13;
    ++v11;
  }
  while ( v10 < 80 );
  Function_200a640((int *)v4[86]);
  v14 = (uint *)&dword_2251E90;
  v15 = 0;
  v16 = v4;
  do
  {
    v16[87] = (int)Function_2009bc4(v4[77], v22, *v14, 0, v15++ + 255, 2u, 4u);
    ++v14;
    ++v16;
  }
  while ( v15 < 7 );
  v17 = (uint *)&dword_2251EAC;
  v18 = 0;
  v19 = v4;
  do
  {
    v19[94] = (int)Function_2009bc4(v4[78], v22, *v17, 0, v18++ + 255, 3u, 4u);
    ++v17;
    ++v19;
  }
  while ( v18 < 7 );
  result = AddTaskToTaskList1((int)Function_224b124, (int)v4, 0xFFFFu);
  v4[101] = (int)result;
  return result;
}

//----- (0224B064) --------------------------------------------------------
int __fastcall Function_224b064(int **a1)
{
  int **v1;
  int v2;
  int **v3;
  int *v4;
  int *v5;
  int v6;
  int **v7;
  int *v8;
  int v9;
  int **v10;
  int *v11;

  v1 = a1;
  Call_RemoveTaskFromTaskList(a1[101]);
  v2 = 0;
  v3 = v1;
  do
  {
    v4 = v3[79];
    if ( v4 )
      Function_200a4e4(v4);
    ++v2;
    ++v3;
  }
  while ( v2 < 7 );
  v5 = v1[86];
  if ( v5 )
    Function_200a6dc(v5);
  v6 = 0;
  v7 = v1;
  do
  {
    v8 = v7[87];
    if ( v8 )
    {
      Function_2009d4c(v8);
      Function_2009d68(v1[77], (uint **)v7[87]);
    }
    ++v6;
    ++v7;
  }
  while ( v6 < 7 );
  v9 = 0;
  v10 = v1;
  do
  {
    v11 = v10[94];
    if ( v11 )
    {
      Function_2009d4c(v11);
      Function_2009d68(v1[78], (uint **)v10[94]);
    }
    ++v9;
    ++v10;
  }
  while ( v9 < 7 );
  Function_2009754(v1[75]);
  Function_2009754(v1[76]);
  Function_2009754(v1[77]);
  Function_2009754(v1[78]);
  Function_20219c0(*v1);
  return Function_2021964(*v1);
}

//----- (0224B124) --------------------------------------------------------
int __fastcall Function_224b124(int a1, int *a2)
{
  return Function_20219f8(*a2);
}

//----- (0224B130) --------------------------------------------------------
int __fastcall Function_224b130(int *a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int *v8;
  int *v9;
  int v10;
  int v11;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char v21;

  v8 = a1;
  v9 = a2;
  Function_20093b4(
    (int)&v21,
    a3 + 255,
    a4 + 255,
    a5 + 255,
    a6 + 255,
    -1,
    -1,
    0,
    a7,
    a1[75],
    a1[76],
    a1[77],
    a1[78],
    0,
    0);
  v13 = *v8;
  v14 = &v21;
  v10 = v9[1];
  v15 = *v9;
  v16 = v10;
  v17 = v9[2];
  v18 = a8;
  v19 = 1;
  v20 = 4;
  v11 = Function_2021b90(&v13);
  if ( !v11 )
    ErrorHandler();
  return v11;
}

//----- (0224B1B4) --------------------------------------------------------
int __fastcall Function_224b1b4(ushort *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  uint v8;
  int *v9;
  int v10;
  int *v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int result;
  ushort *v17;
  char v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a2;
  v5 = a3;
  v6 = a1;
  a1[3895] = 0;
  if ( Function_22510d0(a1) == 582 )
  {
    v7 = LoadFlagAdress(*(uint *)(*(uint *)v6 + 12));
    v8 = Function_206b5d8(v7);
    if ( v8 >= 0xA )
    {
      if ( v8 > 0xC )
      {
        if ( v8 <= 0xD )
          v6[3895] = 2;
      }
      else
      {
        v6[3895] = 1;
      }
    }
  }
  v19 = v5;
  v17 = v6;
  v9 = dword_2253680;
  v10 = 0;
  do
  {
    v11 = v9;
    v12 = &v18;
    v13 = 6;
    do
    {
      v14 = *v11;
      v15 = v11[1];
      v11 += 2;
      *(uint *)v12 = v14;
      *((uint *)v12 + 1) = v15;
      v12 += 8;
      --v13;
    }
    while ( v13 );
    result = ((int (__fastcall *)(int, int *))dword_21DF5B4[94])(v4, dword_2251508);
    ++v10;
    v9 += 12;
  }
  while ( v10 < 9 );
  return result;
}

//----- (0224B23C) --------------------------------------------------------
int __fastcall Function_224b23c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int *v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  uint *v11;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a2;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v5 = (int *)Function_20715bc(a1);
  v6 = v5;
  v7 = (uint *)(v4 + 8);
  v8 = 7;
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
  *(uint *)v4 = *(uint *)(v4 + 20);
  *(uint *)(v4 + 4) = dword_2252C08[4 * *(ushort *)(*v5 + 7790) + v5[2]];
  v11 = (uint *)Function_224b130(
                    *(int **)(v4 + 60),
                    &v13,
                    LOBYTE(dword_2251EC8[*(uint *)(v4 + 12)]),
                    BYTE1(dword_2251EC8[*(uint *)(v4 + 12)]),
                    BYTE2(dword_2251EC8[*(uint *)(v4 + 12)]),
                    HIBYTE(dword_2251EC8[*(uint *)(v4 + 12)]),
                    3,
                    0xFFFF);
  *(uint *)(v4 + 64) = v11;
  Function_2021c80(v11, (int *)(v4 + 48), 2);
  return 1;
}

//----- (0224B2C0) --------------------------------------------------------
int __fastcall Function_224b2c0(int a1, int a2)
{
  return Function_2021bd4(*(uint *)(a2 + 64));
}

//----- (0224B2CC) --------------------------------------------------------
int __fastcall Function_224b2cc(uint *a1, int *a2, int a3, int a4)
{
  int *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  short v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a2;
  v5 = a1;
  v6 = dword_2252C08[4 * *(ushort *)(a2[2] + 7790) + a2[4]];
  v7 = a2[1];
  if ( v6 >= v7 )
  {
    if ( v6 > v7 )
    {
      a2[1] = v7 + 512;
      if ( v6 < v7 + 512 )
        a2[1] = v6;
    }
  }
  else
  {
    a2[1] = v7 - 512;
    if ( v6 > v7 - 512 )
      a2[1] = v6;
  }
  Function_2250f1c(a2, a2[8] + a2[1]);
  v11 = *v4;
  Function_2250f1c(&v11, v4[6]);
  v8 = v4[10];
  v12 = v4[9];
  v13 = v8;
  v14 = v4[11];
  v12 += Function_201d1d4(16 * (*v4 + ((uint)(*v4 >> 11) >> 20)) >> 16) * v4[7];
  v13 += v4[7] * Function_201d15c(16 * (*v4 + ((uint)(*v4 >> 11) >> 20)) >> 16) - 0x200000;
  Function_20715d4(v5, &v12);
  Function_2021c50((uint *)v4[16], &v12);
  v9 = Function_201d2a4(16 * (v11 + ((uint)(v11 >> 11) >> 20)) >> 16);
  return Function_2021c94(v4[16], v9);
}

//----- (0224B3A4) --------------------------------------------------------
void Function_224b3a4()
{
  ;
}

//----- (0224B3A8) --------------------------------------------------------
int __fastcall Function_224b3a8(int a1)
{
  int v1;
  int v2;
  int v3;
  char *v4;
  char v6;

  v1 = *(uint *)(*(uint *)a1 + 72);
  ((void (__fastcall *)(uint, int, int, uint, int, int))dword_21D5258[361])(
    *(uint *)(*(uint *)a1 + 72),
    -1,
    1,
    0,
    6,
    30208);
  ((void (__fastcall *)(int, int, uint, int))dword_21D5258[375])(v1, -1, 0, 16);
  v2 = 0;
  v3 = 0;
  v4 = &v6;
  do
  {
    ++v2;
    *v4 = v3;
    v3 += 2;
    ++v4;
  }
  while ( v2 < 32 );
  return ((int (__fastcall *)(int, char *, char *))dword_21D5258[385])(v1, &v6, v4);
}

//----- (0224B3F4) --------------------------------------------------------
void Function_224b3f4()
{
  ;
}

//----- (0224B3F8) --------------------------------------------------------
int __fastcall Function_224b3f8(int a1, int a2, int *a3, int a4, int a5, int a6)
{
  uchar *v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  uint v11;
  int *v12;

  v6 = (uchar *)a2;
  v7 = a1;
  v8 = a3;
  v9 = a4;
  if ( *(uint *)(a2 + 8) )
    ErrorHandler();
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v6[8] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[11] = 0;
  *(uint *)v6 = a6;
  v10 = *v8;
  *((uint *)v6 + 1) = *v8;
  if ( !v10 )
    ErrorHandler();
  v11 = 4 * *((uint *)v6 + 1);
  v12 = (int *)malloc2(4u, 4 * *((uint *)v6 + 1));
  *((uint *)v6 + 2) = v12;
  Call_FillMemWithValue(v12, 0, v11);
  return Function_224b6cc(v7, v6, v9, a5);
}

//----- (0224B45C) --------------------------------------------------------
int __fastcall Function_224b45c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int *v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v7 = Function_22510d0(a1);
  Function_224d720(v7);
  result = Function_224c27c(v2);
  if ( result )
  {
    v5 = (int *)Function_224c8ac(v2);
    v6 = Function_224c8c4(v2);
    if ( v3 != 1 && Function_2249d38(v2) )
    {
      *(uint *)(v2 + 5816) = Function_2249d5c(v2);
    }
    else
    {
      *(uint *)(v2 + 5816) = ~v5[2];
      Function_2249d44(v2, *(uint *)(v2 + 5816));
    }
    result = Function_224b3f8(v2, v2 + 5816, v5, v6, v7, *(uint *)(v2 + 5816));
  }
  return result;
}

//----- (0224B4CC) --------------------------------------------------------
int __fastcall Function_224b4cc(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int *v5;
  int v6;

  v1 = a1;
  v2 = Function_22510d0(a1);
  v3 = *(uint *)(Function_224d720(v2) + 8);
  result = Function_224c288(v1);
  if ( result )
  {
    v5 = (int *)Function_224c8b8(v1);
    v6 = Function_224c8d0(v1);
    result = Function_224b3f8(v1, v1 + 5828, v5, v6, v3, ~v5[2]);
  }
  return result;
}

//----- (0224B514) --------------------------------------------------------
int __fastcall Function_224b514(int a1)
{
  int v1;

  v1 = a1;
  Function_224b45c(a1, 0);
  return Function_224b4cc(v1);
}

//----- (0224B528) --------------------------------------------------------
int __fastcall Function_224b528(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int *v5;

  v1 = a1;
  result = *(uint *)(a1 + 4);
  if ( result )
  {
    v3 = 0;
    if ( result > 0 )
    {
      v4 = 0;
      do
      {
        v5 = *(int **)(*(uint *)(v1 + 8) + v4);
        if ( v5 )
          Function_207136c(v5);
        ++v3;
        v4 += 4;
      }
      while ( v3 < *(uint *)(v1 + 4) );
    }
    free(*(uint *)(v1 + 8));
    result = 0;
    *(uint *)(v1 + 8) = 0;
    *(uint *)(v1 + 4) = 0;
  }
  return result;
}

//----- (0224B560) --------------------------------------------------------
int __fastcall Function_224b560(int a1)
{
  int v1;

  v1 = a1;
  Function_224b570(a1);
  return Function_224b580(v1);
}

//----- (0224B570) --------------------------------------------------------
int __fastcall Function_224b570(int a1)
{
  return Function_224b528(a1 + 5816);
}

//----- (0224B580) --------------------------------------------------------
int __fastcall Function_224b580(int a1)
{
  return Function_224b528(a1 + 5828);
}

//----- (0224B590) --------------------------------------------------------
int __fastcall Function_224b590(int result)
{
  *(uint *)(result + 5824) = 0;
  *(uint *)(result + 5820) = 0;
  return result;
}

//----- (0224B5A0) --------------------------------------------------------
int __fastcall Function_224b5a0(int result)
{
  *(uint *)(result + 5836) = 0;
  *(uint *)(result + 5832) = 0;
  return result;
}

//----- (0224B5B0) --------------------------------------------------------
int __fastcall Function_224b5b0(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  int result;

  v1 = a1;
  if ( a1[1459] )
    ErrorHandler();
  if ( v1[1458] )
    ErrorHandler();
  v2 = v1 + 1457;
  v3 = v1[1455];
  *v2 = v1[1454];
  v2[1] = v3;
  result = v1[1456];
  v1[1459] = result;
  return result;
}

//----- (0224B5EC) --------------------------------------------------------
int __fastcall Function_224b5ec(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  int result;

  v1 = a1;
  if ( a1[1456] )
    ErrorHandler();
  if ( v1[1455] )
    ErrorHandler();
  v2 = v1 + 1454;
  v3 = v1[1458];
  *v2 = v1[1457];
  v2[1] = v3;
  result = v1[1459];
  v1[1456] = result;
  return result;
}

//----- (0224B624) --------------------------------------------------------
uint __fastcall Function_224b624(int a1, uint a2)
{
  char v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x18 )
    ErrorHandler();
  *(uint *)(v3 + 5816) |= 1 << v2;
  return Function_2249d44(v3, *(uint *)(v3 + 5816));
}

//----- (0224B64C) --------------------------------------------------------
uint __fastcall Function_224b64c(int a1, uint a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = ~(1 << a2);
  if ( a2 >= 0x18 )
    ErrorHandler();
  *(uint *)(v2 + 5816) &= v3;
  return Function_2249d44(v2, *(uint *)(v2 + 5816));
}

//----- (0224B674) --------------------------------------------------------
int __fastcall Function_224b674(int a1, uint a2)
{
  char v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x18 )
    ErrorHandler();
  result = 1;
  if ( !((1 << v2) & *(uint *)(v3 + 5816)) )
    result = 0;
  return result;
}

//----- (0224B698) --------------------------------------------------------
int __fastcall Function_224b698(int a1, uint a2)
{
  char v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x18 )
    ErrorHandler();
  result = 1;
  if ( !((1 << v2) & *(uint *)(v3 + 5828)) )
    result = 0;
  return result;
}

//----- (0224B6BC) --------------------------------------------------------
uint __fastcall Function_224b6bc(int a1)
{
  return Function_2249d44(a1, *(uint *)(a1 + 5816));
}

//----- (0224B6CC) --------------------------------------------------------
int __fastcall Function_224b6cc(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v4 = a2;
  v10 = a1;
  result = *(uint *)(a2 + 4);
  v6 = a3;
  v11 = a4;
  if ( result )
  {
    v7 = 0;
    if ( result > 0 )
    {
      v8 = 0;
      do
      {
        v9 = Function_224b708(v10, v7++, v11, v6);
        *(uint *)(*(uint *)(v4 + 8) + v8) = v9;
        result = *(uint *)(v4 + 4);
        v8 += 4;
        v6 += 12;
      }
      while ( v7 < result );
    }
  }
  return result;
}

//----- (0224B708) --------------------------------------------------------
int __fastcall Function_224b708(int a1, short a2, short a3, int a4)
{
  int (*v4)[5];
  int v5;
  short v7;
  short v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = off_2252F6C[*(ushort *)(a4 + 4)];
  v7 = a2;
  v8 = a3;
  v5 = *(uint *)(a4 + 4);
  v9 = *(uint *)a4;
  v10 = v5;
  v11 = *(uint *)(a4 + 8);
  return ((int (__fastcall *)(uint, int (*)[5]))dword_21DF5B4[94])(*(uint *)(*(uint *)a1 + 64), v4);
}

//----- (0224B748) --------------------------------------------------------
uint __fastcall Function_224b748(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  uint result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v5 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  result = Function_224c27c(a1);
  if ( result )
  {
    result = Function_224c8ac(v5);
    v7 = *(uint *)(result + 4);
    if ( v7 )
    {
      v8 = Function_224c8dc(v5);
      do
      {
        result = *(short *)(v8 + 4);
        if ( a5 == result )
        {
          result = Function_2250e6c(v9, v10, v11, v8 + 8);
          if ( result )
          {
            if ( *(ushort *)(v8 + 6) )
              result = Function_224b64c(v5, *(uint *)v8);
            else
              result = Function_224b624(v5, *(uint *)v8);
          }
        }
        v8 += 20;
        --v7;
      }
      while ( v7 );
    }
  }
  return result;
}

//----- (0224B7B0) --------------------------------------------------------
int __fastcall Function_224b7b0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v9 = a1;
  v3 = a1 + 5816;
  if ( a2 == 25 )
    ErrorHandler();
  v4 = 0;
  if ( *(uint *)(v3 + 4) <= 0 )
  {
LABEL_9:
    v7 = 0;
    if ( *(uint *)(v9 + 5832) <= 0 )
    {
LABEL_15:
      result = 0;
    }
    else
    {
      v8 = 0;
      while ( Function_20714f0(*(int **)(*(uint *)(v9 + 5836) + v8)) != 1
           || v2 != LOWORD(dword_22531D0[2 * Function_224b958(*(uint *)(*(uint *)(v9 + 5836) + v8))]) )
      {
        ++v7;
        v8 += 4;
        if ( v7 >= *(uint *)(v9 + 5832) )
          goto LABEL_15;
      }
      result = 1;
    }
  }
  else
  {
    v5 = 0;
    while ( Function_20714f0(*(int **)(*(uint *)(v3 + 8) + v5)) != 1
         || v2 != LOWORD(dword_22531D0[2 * Function_224b958(*(uint *)(*(uint *)(v3 + 8) + v5))]) )
    {
      ++v4;
      v5 += 4;
      if ( v4 >= *(uint *)(v3 + 4) )
        goto LABEL_9;
    }
    result = 1;
  }
  return result;
}

//----- (0224B844) --------------------------------------------------------
int __fastcall Function_224b844(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v9 = a1;
  v3 = a1 + 5816;
  if ( a2 == 5 )
    ErrorHandler();
  v4 = 0;
  if ( *(uint *)(v3 + 4) <= 0 )
  {
LABEL_9:
    v7 = 0;
    if ( *(uint *)(v9 + 5832) <= 0 )
    {
LABEL_15:
      result = 0;
    }
    else
    {
      v8 = 0;
      while ( Function_20714f0(*(int **)(*(uint *)(v9 + 5836) + v8)) != 1
           || v2 != HIWORD(dword_22531D0[2 * Function_224b958(*(uint *)(*(uint *)(v9 + 5836) + v8))]) )
      {
        ++v7;
        v8 += 4;
        if ( v7 >= *(uint *)(v9 + 5832) )
          goto LABEL_15;
      }
      result = 1;
    }
  }
  else
  {
    v5 = 0;
    while ( Function_20714f0(*(int **)(*(uint *)(v3 + 8) + v5)) != 1
         || v2 != HIWORD(dword_22531D0[2 * Function_224b958(*(uint *)(*(uint *)(v3 + 8) + v5))]) )
    {
      ++v4;
      v5 += 4;
      if ( v4 >= *(uint *)(v3 + 4) )
        goto LABEL_9;
    }
    result = 1;
  }
  return result;
}

//----- (0224B8DC) --------------------------------------------------------
int __fastcall Function_224b8dc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v9 = a1;
  v3 = a1 + 5816;
  v4 = 0;
  if ( *(uint *)(a1 + 5820) <= 0 )
  {
LABEL_7:
    v7 = 0;
    if ( *(uint *)(v9 + 5832) <= 0 )
    {
LABEL_13:
      result = 0;
    }
    else
    {
      v8 = 0;
      while ( Function_20714f0(*(int **)(*(uint *)(v9 + 5836) + v8)) != 1
           || Function_224b958(*(uint *)(*(uint *)(v9 + 5836) + v8)) != v2 )
      {
        ++v7;
        v8 += 4;
        if ( v7 >= *(uint *)(v9 + 5832) )
          goto LABEL_13;
      }
      result = 1;
    }
  }
  else
  {
    v5 = 0;
    while ( Function_20714f0(*(int **)(*(uint *)(v3 + 8) + v5)) != 1
         || Function_224b958(*(uint *)(*(uint *)(v3 + 8) + v5)) != v2 )
    {
      ++v4;
      v5 += 4;
      if ( v4 >= *(uint *)(v3 + 4) )
        goto LABEL_7;
    }
    result = 1;
  }
  return result;
}

//----- (0224B958) --------------------------------------------------------
int __fastcall Function_224b958(int a1)
{
  return (ushort)Function_20715c4(a1);
}

//----- (0224B964) --------------------------------------------------------
int __fastcall Function_224b964(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  uint *v9;
  int v10;
  uint *v11;
  int v12;
  uint *v13;
  bool v14;
  int v15;
  int v16;
  char v17;
  int v18;
  uint v19;
  int v21;

  v21 = a4;
  v4 = a2;
  v5 = a1;
  v6 = Function_20715bc(a1);
  v7 = (uint *)(v4 + 40);
  v8 = *(uint *)(v6 + 4);
  *v7 = *(uint *)v6;
  v7[1] = v8;
  v9 = (uint *)(v4 + 48);
  v10 = *(uint *)(v6 + 12);
  *v9 = *(uint *)(v6 + 8);
  v9[1] = v10;
  v11 = (uint *)(v4 + 56);
  v12 = *(uint *)(v6 + 20);
  *v11 = *(uint *)(v6 + 16);
  v11[1] = v12;
  v13 = (uint *)(v4 + 48);
  Function_20715c0(v5, *(ushort *)(v4 + 52));
  *(uint *)(v4 + 64) = Function_224d8a4(*(uint *)(v6 + 20), *(ushort *)(v4 + 52), &v21);
  if ( !v21 )
    Function_224da48(
      *(uint *)(v4 + 60),
      *(ushort *)(v4 + 52),
      *(uint *)(v4 + 64) + 4,
      *(uint *)(v4 + 64) + 88);
  v14 = *(short *)(v6 + 2) == Function_22510d0(*(uint *)(v6 + 20));
  v15 = *(uint *)(v6 + 20);
  if ( v14 )
    v16 = Function_224b674(v15, *v13);
  else
    v16 = Function_224b698(v15, *v13);
  if ( v16 == 1 )
    v17 = 0;
  else
    v17 = 31;
  *(uchar *)v4 = v17;
  Function_2064450(*(short *)(v4 + 54), *(short *)(v4 + 58), (uint *)(v4 + 16));
  *(uint *)(v4 + 20) = (*(short *)(v4 + 56) << 16) + 0x8000;
  v18 = 3 * *(ushort *)(v4 + 52);
  *(uint *)(v4 + 16) += dword_2253298[v18];
  *(uint *)(v4 + 20) += dword_2253298[v18 + 1];
  *(uint *)(v4 + 24) += dword_2253298[v18 + 2];
  v19 = PRNG();
  *(uint *)(v4 + 4) = (v19 >> 31) + __ROR4__((v19 << 17) - (v19 >> 31), 17);
  *(uint *)(v4 + 8) = 2048;
  if ( *(uint *)(v4 + 4) & 1 )
    *(uint *)(v4 + 8) = -*(uint *)(v4 + 8);
  return 1;
}

//----- (0224BA48) --------------------------------------------------------
int __fastcall Function_224ba48(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a2 + 40;
  if ( Function_224daec(*(ushort *)(a2 + 52)) == 1 )
    Function_2073aa8(*(uint *)(v2 + 64) + 88);
  return Function_224d938(*(uint *)(v3 + 20), *(uint *)(v2 + 64));
}

//----- (0224BA6C) --------------------------------------------------------
int __fastcall Function_224ba6c(int a1, char *a2, int a3, int a4)
{
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint *v16;
  int result;
  int v18;
  uint *v19;
  int v20;
  int v21;
  int v22;

  v22 = a4;
  v4 = a2;
  v5 = (int)(a2 + 40);
  v19 = (uint *)(a2 + 48);
  v18 = 0;
  v6 = Function_22510d0(*((uint *)a2 + 15));
  if ( !*(ushort *)(v5 + 12) && v6 == *(short *)(v5 + 2) )
  {
    v21 = 0;
    v7 = 2 * *(short *)(v5 + 16);
    v8 = *(uint *)(**(uint **)(v5 + 20) + 56);
    if ( Function_20625b0(*(uint *)(**(uint **)(v5 + 20) + 56), &v20, &v21, 1) == 1 )
    {
      while ( v7 != LoadSpritePositionZ(v20)
           || *(short *)(v5 + 18) != LoadSpritePositionY(v20)
           || *(short *)(v5 + 14) != LoadSpritePositionX(v20) )
      {
        if ( Function_20625b0(v8, &v20, &v21, 1) != 1 )
          goto LABEL_9;
      }
      v18 = 1;
    }
  }
LABEL_9:
  *((uint *)v4 + 3) = dword_22521E4[((uint)(*((uint *)v4 + 1) / 4096) >> 31)
                                    + __ROR4__(
                                        (*((uint *)v4 + 1) / 4096 << 29)
                                      - ((uint)(*((uint *)v4 + 1) / 4096) >> 31),
                                        29)];
  if ( v18 == 1 )
    *((uint *)v4 + 3) >>= 1;
  v9 = *((uint *)v4 + 1) + *((uint *)v4 + 2);
  *((uint *)v4 + 1) = v9;
  if ( v9 >= 0 )
  {
    if ( v9 >= 0x8000 )
    {
      *((uint *)v4 + 1) = 30720;
      *((uint *)v4 + 2) = -2048;
    }
  }
  else
  {
    *((uint *)v4 + 1) = 0;
    *((uint *)v4 + 2) = 2048;
  }
  v10 = *(short *)(v5 + 2) == Function_22510d0(*(uint *)(v5 + 20));
  v11 = *(uint *)(v5 + 20);
  if ( v10 )
    v12 = Function_224b674(v11, *v19);
  else
    v12 = Function_224b698(v11, *v19);
  if ( v12 == 1 )
  {
    v13 = *v4;
    if ( v13 > 0 )
    {
      *v4 = v13 - 1;
      if ( v4[1] != -1 )
      {
        v4[1] = -1;
        Function_22511e0(1484);
      }
    }
  }
  else
  {
    v14 = *v4;
    if ( v14 < 31 )
    {
      *v4 = v14 + 1;
      if ( v4[1] != 1 )
      {
        v4[1] = 1;
        Function_22511e0(1484);
      }
    }
  }
  v15 = *((uint *)v4 + 5);
  v16 = v4 + 28;
  *v16 = *((uint *)v4 + 4);
  v16[1] = v15;
  *((uint *)v4 + 9) = *((uint *)v4 + 6);
  *((uint *)v4 + 8) += *((uint *)v4 + 3);
  result = Function_224dbe4(*(uint *)(v5 + 20), *(ushort *)(v5 + 12));
  *((ushort *)v4 + 1) = result;
  return result;
}

//----- (0224BBDC) --------------------------------------------------------
int *__fastcall Function_224bbdc(int a1, char *a2)
{
  char *v2;
  int *result;

  v2 = a2;
  result = (int *)*((ushort *)a2 + 1);
  if ( *((ushort *)a2 + 1) )
  {
    result = 0;
    if ( *a2 > 0 )
    {
      Function_224daac(*((uint *)a2 + 15), *((ushort *)a2 + 26));
      result = Function_2073bb4((uint *)(*((uint *)v2 + 16) + 4), (int *)v2 + 7);
    }
  }
  return result;
}

//----- (0224BC08) --------------------------------------------------------
int __fastcall Function_224bc08(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  uint *v9;
  int v10;
  uint *v11;
  int v12;
  uint *v13;
  short v14;
  bool v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v21;

  v21 = a4;
  v4 = a2;
  v5 = a1;
  v6 = Function_20715bc(a1);
  v7 = (uint *)(v4 + 32);
  v8 = *(uint *)(v6 + 4);
  *v7 = *(uint *)v6;
  v7[1] = v8;
  v9 = (uint *)(v4 + 40);
  v10 = *(uint *)(v6 + 12);
  *v9 = *(uint *)(v6 + 8);
  v9[1] = v10;
  v11 = (uint *)(v4 + 48);
  v12 = *(uint *)(v6 + 20);
  *v11 = *(uint *)(v6 + 16);
  v11[1] = v12;
  v13 = (uint *)(v4 + 40);
  Function_20715c0(v5, *(ushort *)(v4 + 44));
  *(uint *)(v4 + 56) = Function_224d8a4(*(uint *)(v6 + 20), *(ushort *)(v4 + 44), &v21);
  if ( !v21 )
    Function_224da48(
      *(uint *)(v4 + 52),
      *(ushort *)(v4 + 44),
      *(uint *)(v4 + 56) + 4,
      *(uint *)(v4 + 56) + 88);
  if ( *(ushort *)(v4 + 44) == 23 )
  {
    v14 = 1483;
    *(ushort *)(v4 + 4) = 1483;
  }
  else
  {
    *(ushort *)(v4 + 4) = 1485;
    v14 = 1486;
  }
  *(ushort *)(v4 + 6) = v14;
  v15 = *(short *)(v6 + 2) == Function_22510d0(*(uint *)(v6 + 20));
  v16 = *(uint *)(v6 + 20);
  if ( v15 )
    v17 = Function_224b674(v16, *v13);
  else
    v17 = Function_224b698(v16, *v13);
  if ( v17 == 1 )
  {
    *(uchar *)v4 = 0;
  }
  else
  {
    *(uchar *)v4 = 31;
    v18 = Function_2073b28(*(uint *)(v4 + 56) + 88);
    Function_2073b20(*(uint *)(v4 + 56) + 88, v18);
  }
  Function_2064450(*(short *)(v4 + 46), *(short *)(v4 + 50), (uint *)(v4 + 8));
  *(uint *)(v4 + 12) = (*(short *)(v4 + 48) << 16) + 0x8000;
  v19 = 3 * *(ushort *)(v4 + 44);
  *(uint *)(v4 + 8) += dword_2253298[v19];
  *(uint *)(v4 + 12) += dword_2253298[v19 + 1];
  *(uint *)(v4 + 16) += dword_2253298[v19 + 2];
  return 1;
}

//----- (0224BCF4) --------------------------------------------------------
int __fastcall Function_224bcf4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a2 + 32;
  if ( Function_224daec(*(ushort *)(a2 + 44)) == 1 )
    Function_2073aa8(*(uint *)(v2 + 56) + 88);
  return Function_224d938(*(uint *)(v3 + 20), *(uint *)(v2 + 56));
}

//----- (0224BD18) --------------------------------------------------------
int __fastcall Function_224bd18(int a1, char *a2)
{
  char *v2;
  int v3;
  uint *v4;
  bool v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  v2 = a2;
  v3 = (int)(a2 + 32);
  v4 = (uint *)(a2 + 40);
  v5 = *((short *)a2 + 17) == Function_22510d0(*((uint *)a2 + 13));
  v6 = *(uint *)(v3 + 20);
  if ( v5 )
    v7 = Function_224b674(v6, *v4);
  else
    v7 = Function_224b698(v6, *v4);
  if ( v7 == 1 )
  {
    Function_2073ac0((int *)(*((uint *)v2 + 14) + 88), -8192, 0);
    v8 = Function_2073b24(*((uint *)v2 + 14) + 88);
    v9 = *v2;
    if ( v9 >= v8 / 4096 )
    {
      if ( v9 <= 0 )
      {
        *v2 = 0;
      }
      else
      {
        *v2 = v9 - 2;
        if ( v2[1] != -2 )
        {
          v2[1] = -2;
          Function_22511e0(*((ushort *)v2 + 3));
        }
        if ( *v2 < 0 )
          *v2 = 0;
      }
    }
  }
  else
  {
    v10 = *v2;
    if ( v10 >= 31 )
    {
      *v2 = 31;
    }
    else
    {
      *v2 = v10 + 2;
      if ( v2[1] != 2 )
      {
        v2[1] = 2;
        Function_22511e0(*((ushort *)v2 + 2));
      }
      if ( *v2 > 31 )
        *v2 = 31;
    }
    Function_2073ac0((int *)(*((uint *)v2 + 14) + 88), 0x2000, 0);
  }
  result = Function_224dbe4(*(uint *)(v3 + 20), *(ushort *)(v3 + 12));
  *((ushort *)v2 + 1) = result;
  return result;
}

//----- (0224BDE8) --------------------------------------------------------
int *__fastcall Function_224bde8(int a1, char *a2)
{
  char *v2;
  int *result;

  v2 = a2;
  result = (int *)*((ushort *)a2 + 1);
  if ( *((ushort *)a2 + 1) )
  {
    result = 0;
    if ( *a2 > 0 )
    {
      Function_224daac(*((uint *)a2 + 13), *((ushort *)a2 + 22));
      result = Function_2073bb4((uint *)(*((uint *)v2 + 14) + 4), (int *)v2 + 2);
    }
  }
  return result;
}

//----- (0224BE14) --------------------------------------------------------
int __fastcall Function_224be14(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  uint v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = Function_22510d0(a1);
  v3 = Function_224d720(v2);
  Function_224bfbc(v1);
  Function_224c0f8(v1, v2, *(uint *)(v3 + 8));
  Function_224c2c4(v1);
  Function_224c640(v1);
  Function_224c6e4(v1);
  Function_224c808(v1);
  if ( Function_2249d38(v1) )
  {
    v5 = Function_2249e44(v1);
    result = Function_224c3f8(v1, v5);
  }
  else
  {
    Function_2250f44(v1, &v8, &v7, &v6);
    result = Function_224c378(v1, v8, v7, v6, 4);
  }
  return result;
}

//----- (0224BE8C) --------------------------------------------------------
int __fastcall Function_224be8c(int a1)
{
  int v1;

  v1 = a1;
  Function_224c724();
  Function_224c680(v1);
  Function_224c300(v1);
  Function_224c854(v1);
  Function_224c164(v1);
  return Function_224bffc(v1);
}

//----- (0224BEB4) --------------------------------------------------------
int __fastcall Function_224beb4(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_224c844();
  Function_224c184(v2);
  Function_224c724(v2);
  Function_224c680(v2);
  Function_224c300(v2);
  Function_224c194(v2);
  Function_224c864(v2);
  Function_224b5b0(v2);
  Function_224b590((int)v2);
  Function_224c10c(v2, v3);
  Function_224c2c4(v2);
  Function_224c44c(v2);
  Function_224c640(v2);
  Function_224c6e4(v2);
  return Function_224c7c8(v2);
}

//----- (0224BF18) --------------------------------------------------------
int __fastcall Function_224bf18(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_224c724(a1);
  Function_224c680(v2);
  Function_224c300(v2);
  Function_224c834(v2);
  Function_224c174(v2);
  Function_224c1e4(v2);
  Function_224c888(v2);
  Function_224b5ec(v2);
  Function_224b6bc((int)v2);
  Function_224b5a0((int)v2);
  Function_224c2c4(v2);
  Function_224c44c(v2);
  Function_224c640(v2);
  Function_224c6e4(v2);
  result = 593;
  if ( v3 != 593 )
  {
    Function_224c120(v2, v3);
    result = Function_224c7e8(v2);
  }
  return result;
}

//----- (0224BF8C) --------------------------------------------------------
int __fastcall Function_224bf8c(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int result;

  v4 = a2;
  v5 = a1;
  v6 = Function_2006d84_GetFilesize(a1, 0, a3, a4);
  v4[2] = malloc(4u, v6);
  LoadFileFromNARCFileHandler(v5, 0, v4[2]);
  *v4 = *(uint *)v4[2];
  result = v4[2] + 4;
  v4[1] = result;
  return result;
}

//----- (0224BFBC) --------------------------------------------------------
int __fastcall Function_224bfbc(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  if ( *(uint *)(a1 + 5696) )
    ErrorHandler();
  return Function_224bf8c(*(uint *)(v4 + 8), (uint *)(v4 + 5688), a3, a4);
}

//----- (0224BFE0) --------------------------------------------------------
int __fastcall Function_224bfe0(int a1)
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

//----- (0224BFFC) --------------------------------------------------------
int __fastcall Function_224bffc(int a1)
{
  return Function_224bfe0(a1 + 5688);
}

//----- (0224C00C) --------------------------------------------------------
uint *__fastcall Function_224c00c(uint *a1, int a2)
{
  int v2;
  uint *v3;
  uint *result;

  v2 = 0;
  v3 = (uint *)a1[1];
  if ( *a1 <= 0 )
  {
LABEL_5:
    ErrorHandler();
    result = 0;
  }
  else
  {
    while ( a2 != *v3 )
    {
      ++v2;
      v3 += 3;
      if ( v2 >= *a1 )
        goto LABEL_5;
    }
    result = v3;
  }
  return result;
}

//----- (0224C034) --------------------------------------------------------
uint *__fastcall Function_224c034(int a1, int a2)
{
  return Function_224c00c((uint *)(a1 + 5688), a2);
}

//----- (0224C044) --------------------------------------------------------
int __fastcall Function_224c044(int a1, int a2)
{
  return *((ushort *)Function_224c034(a1, a2) + 2) + 1;
}

//----- (0224C050) --------------------------------------------------------
uint *__fastcall Function_224c050(uint *a1, int a2, uint *a3, uint *a4, uint *a5)
{
  uint *v5;
  uint *v6;
  short *v7;
  int v8;
  uint *result;

  v5 = a3;
  v6 = a4;
  v7 = (short *)Function_224c00c(a1, a2);
  *v5 = v7[3];
  *v6 = v7[4];
  v8 = v7[5];
  result = a5;
  *a5 = v8;
  return result;
}

//----- (0224C070) --------------------------------------------------------
uint *__fastcall Function_224c070(int a1, int a2, uint *a3, uint *a4, uint *a5)
{
  return Function_224c050((uint *)(a1 + 5688), a2, a3, a4, a5);
}

//----- (0224C088) --------------------------------------------------------
int __fastcall Function_224c088(int a1, int *a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int result;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;
  uint *v14;
  int v15;
  int v16;
  int v17;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( a2[6] )
    ErrorHandler();
  v6 = v3;
  v7 = 28;
  do
  {
    *(uchar *)v6 = 0;
    v6 = (int *)((char *)v6 + 1);
    --v7;
  }
  while ( v7 );
  result = 593;
  *v3 = v5;
  if ( v5 != 593 )
  {
    v9 = Function_224c044(v4, v5);
    v10 = v9;
    v13 = Function_2006d84_GetFilesize(*(uint *)(v4 + 8), v9, v11, v12);
    v3[6] = malloc2(4u, v13);
    LoadFileFromNARCFileHandler(*(uint *)(v4 + 8), v10, v3[6]);
    v14 = (uint *)v3[6];
    v3[5] = (int)v14;
    v15 = v3[6] + 20;
    v3[1] = v15;
    v16 = v15 + v14[1];
    v3[2] = v16;
    v17 = v16 + v14[2];
    v3[3] = v17;
    result = v17 + v14[3];
    v3[4] = result;
  }
  return result;
}

//----- (0224C0F8) --------------------------------------------------------
int __fastcall Function_224c0f8(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a3;
  Function_224c10c(a1, a2);
  return Function_224c120(v3, v4);
}

//----- (0224C10C) --------------------------------------------------------
int __fastcall Function_224c10c(int a1, int a2)
{
  return Function_224c088(a1, (int *)(a1 + 5700), a2);
}

//----- (0224C120) --------------------------------------------------------
int __fastcall Function_224c120(int a1, int a2)
{
  return Function_224c088(a1, (int *)(a1 + 5776), a2);
}

//----- (0224C134) --------------------------------------------------------
uint *__fastcall Function_224c134(uint *result)
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
  *result = 593;
  return result;
}

//----- (0224C14C) --------------------------------------------------------
uint *__fastcall Function_224c14c(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[6];
  if ( v2 )
    free(v2);
  return Function_224c134(v1);
}

//----- (0224C164) --------------------------------------------------------
int __fastcall Function_224c164(int a1)
{
  int v1;

  v1 = a1;
  Function_224c174(a1);
  return Function_224c184(v1);
}

//----- (0224C174) --------------------------------------------------------
uint *__fastcall Function_224c174(int a1)
{
  return Function_224c14c((uint *)(a1 + 5700));
}

//----- (0224C184) --------------------------------------------------------
uint *__fastcall Function_224c184(int a1)
{
  return Function_224c14c((uint *)(a1 + 5776));
}

//----- (0224C194) --------------------------------------------------------
uint *__fastcall Function_224c194(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  uint *v4;
  int v5;
  uint *v6;
  int v7;

  v1 = a1;
  if ( a1[1444] != 593 )
    ErrorHandler();
  if ( v1[1450] )
    ErrorHandler();
  v2 = v1 + 1444;
  v3 = v1[1426];
  *v2 = v1[1425];
  v2[1] = v3;
  v4 = v1 + 1446;
  v5 = v1[1428];
  *v4 = v1[1427];
  v4[1] = v5;
  v6 = v1 + 1448;
  v7 = v1[1430];
  *v6 = v1[1429];
  v6[1] = v7;
  v1[1450] = v1[1431];
  return Function_224c134(v1 + 1425);
}

//----- (0224C1E4) --------------------------------------------------------
uint *__fastcall Function_224c1e4(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  uint *v4;
  int v5;
  uint *v6;
  int v7;

  v1 = a1;
  if ( a1[1425] != 593 )
    ErrorHandler();
  if ( v1[1431] )
    ErrorHandler();
  v2 = v1 + 1425;
  v3 = v1[1445];
  *v2 = v1[1444];
  v2[1] = v3;
  v4 = v1 + 1427;
  v5 = v1[1447];
  *v4 = v1[1446];
  v4[1] = v5;
  v6 = v1 + 1429;
  v7 = v1[1449];
  *v6 = v1[1448];
  v6[1] = v7;
  v1[1431] = v1[1450];
  return Function_224c134(v1 + 1444);
}

//----- (0224C234) --------------------------------------------------------
int __fastcall Function_224c234(int a1)
{
  return *(uint *)(*(uint *)(a1 + 20) + 4);
}

//----- (0224C23C) --------------------------------------------------------
int __fastcall Function_224c23c(int a1)
{
  return **(uint **)(a1 + 4);
}

//----- (0224C244) --------------------------------------------------------
int __fastcall Function_224c244(int a1)
{
  return *(uint *)(a1 + 4) + 4;
}

//----- (0224C24C) --------------------------------------------------------
int __fastcall Function_224c24c(int a1)
{
  return *(uint *)(*(uint *)(a1 + 20) + 8);
}

//----- (0224C254) --------------------------------------------------------
int __fastcall Function_224c254(int a1)
{
  return **(uint **)(a1 + 8);
}

//----- (0224C25C) --------------------------------------------------------
int __fastcall Function_224c25c(int a1)
{
  return *(uint *)(a1 + 8) + 4;
}

//----- (0224C264) --------------------------------------------------------
int __fastcall Function_224c264(int a1)
{
  return *(uint *)(*(uint *)(a1 + 20) + 12);
}

//----- (0224C26C) --------------------------------------------------------
int __fastcall Function_224c26c(int a1)
{
  return **(uint **)(a1 + 12);
}

//----- (0224C274) --------------------------------------------------------
int __fastcall Function_224c274(int a1)
{
  return *(uint *)(a1 + 12) + 4;
}

//----- (0224C27C) --------------------------------------------------------
int __fastcall Function_224c27c(int a1)
{
  return *(uint *)(*(uint *)(a1 + 5720) + 16);
}

//----- (0224C288) --------------------------------------------------------
int __fastcall Function_224c288(int a1)
{
  int v1;

  v1 = 0;
  if ( *(uint *)(a1 + 5776) != 593 )
    v1 = *(uint *)(*(uint *)(a1 + 5796) + 16);
  return v1;
}

//----- (0224C2A8) --------------------------------------------------------
int __fastcall Function_224c2a8(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (0224C2AC) --------------------------------------------------------
int __fastcall Function_224c2ac(int a1)
{
  return *(uint *)(a1 + 16) + 12;
}

//----- (0224C2B4) --------------------------------------------------------
int __fastcall Function_224c2b4(int a1)
{
  return *(uint *)(a1 + 16) + 12 * (**(uint **)(a1 + 16) + 1);
}

//----- (0224C2C4) --------------------------------------------------------
int __fastcall Function_224c2c4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 5736) )
    ErrorHandler();
  result = Function_224c234(v1 + 5700);
  if ( result )
  {
    *(uint *)(v1 + 5732) = Function_224c23c(v1 + 5700);
    result = Function_224c244(v1 + 5700);
    *(uint *)(v1 + 5736) = result;
  }
  return result;
}

//----- (0224C300) --------------------------------------------------------
int __fastcall Function_224c300(int a1)
{
  uchar *v1;
  int v2;
  int v3;
  int result;

  v1 = (uchar *)(a1 + 5728);
  v2 = *(uint *)(a1 + 5744);
  if ( v2 )
    free(v2);
  v3 = 20;
  result = 0;
  do
  {
    *v1++ = 0;
    --v3;
  }
  while ( v3 );
  return result;
}

//----- (0224C324) --------------------------------------------------------
int __fastcall Function_224c324(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  ushort *v8;
  int v10;
  int v11;
  int v12;

  v10 = a2;
  v11 = a3;
  v5 = a1 + 5728;
  v6 = *(uint *)(v5 + 4);
  v7 = 0;
  v12 = a4;
  v8 = *(ushort **)(v5 + 8);
  if ( !v6 )
    return 0;
  do
  {
    if ( Function_2250e6c(v10, v11, v12, v8 + 2) == 1 && (a5 != 4 || 4 == *v8) )
      return 1;
    ++v7;
    v8 += 10;
  }
  while ( v7 < v6 );
  return 0;
}

//----- (0224C378) --------------------------------------------------------
int __fastcall Function_224c378(uint *a1, int a2, int a3, int a4, int a5)
{
  short *v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;

  v11 = a3;
  v10 = a2;
  v5 = (short *)a1[1434];
  v6 = a1[1433];
  v13 = a1 + 1432;
  a1[1432] = v6;
  v9 = (int)a1;
  v12 = a4;
  v7 = 0;
  Function_2249e20((int)a1, v6);
  result = v13[4];
  if ( result )
  {
    free(result);
    result = (int)v13;
    v13[4] = 0;
  }
  if ( v6 )
  {
    while ( 1 )
    {
      result = Function_2250e6c(v10, v11, v12, v5 + 2);
      if ( result == 1 )
      {
        if ( a5 == 4 )
          break;
        result = *v5;
        if ( a5 == result )
          break;
      }
      ++v7;
      v5 += 10;
      if ( v7 >= v6 )
        return result;
    }
    *v13 = v7;
    Function_2249e20(v9, v7);
    result = Function_224c4f4(v9, (ushort)v5[1]);
  }
  return result;
}

//----- (0224C3F8) --------------------------------------------------------
uint __fastcall Function_224c3f8(uint *a1, uint a2)
{
  int v2;
  uint v3;
  uint *v4;
  uint v5;
  int v6;
  int v8;

  v2 = (int)a1;
  v3 = a2;
  v4 = a1 + 1432;
  v5 = a1[1433];
  v8 = a1[1434];
  a1[1432] = v5;
  v6 = a1[1436];
  if ( v6 )
  {
    free(v6);
    v4[4] = 0;
  }
  if ( !v5 || v3 >= v5 )
    return Function_2249e20(v2, v5);
  *v4 = v3;
  Function_2249e20(v2, v3);
  return Function_224c4f4(v2, *(ushort *)(v8 + 20 * v3 + 2));
}

//----- (0224C44C) --------------------------------------------------------
int __fastcall Function_224c44c(int a1)
{
  int v1;
  int result;

  v1 = a1 + 5728;
  *(uint *)(a1 + 5728) = *(uint *)(a1 + 5732);
  Function_2249e20(a1, *(uint *)(a1 + 5732));
  result = *(uint *)(v1 + 16);
  if ( result )
  {
    free(result);
    result = 0;
    *(uint *)(v1 + 16) = 0;
  }
  return result;
}

//----- (0224C470) --------------------------------------------------------
int __fastcall Function_224c470(int a1)
{
  uint *v1;
  int v2;
  int result;

  v1 = (uint *)(a1 + 5728);
  v2 = *(uint *)(a1 + 5732);
  if ( v2 && *v1 < v2 )
    result = *(short *)(v1[2] + 20 * *v1);
  else
    result = 4;
  return result;
}

//----- (0224C494) --------------------------------------------------------
int __fastcall Function_224c494(int a1)
{
  uint *v1;
  int v2;
  int result;

  v1 = (uint *)(a1 + 5728);
  v2 = *(uint *)(a1 + 5732);
  if ( v2 && *v1 < v2 )
    result = *(short *)(v1[2] + 20 * *v1);
  else
    result = 4;
  return result;
}

//----- (0224C4B8) --------------------------------------------------------
int __fastcall Function_224c4b8(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int result;
  short *v7;

  v4 = (uint *)(a1 + 5728);
  v5 = *(uint *)(a1 + 5732);
  if ( !v5 || *v4 >= v5 )
    return 4;
  v7 = (short *)(v4[2] + 20 * *v4);
  if ( Function_2250e6c(a2, a3, a4, v7 + 2) )
    result = *v7;
  else
    result = 0;
  return result;
}

//----- (0224C4F4) --------------------------------------------------------
int __fastcall Function_224c4f4(int a1, uint a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a2;
  v6 = a1 + 5728;
  v7 = *(uint *)(a1 + 5744);
  if ( v7 )
    free(v7);
  *(uint *)(v6 + 12) = Function_2006d84_GetFilesize(*(uint *)(v4 + 12), v5, a3, a4);
  *(uint *)(v6 + 16) = malloc2(4u, *(uint *)(v6 + 12));
  return LoadFileFromNARCFileHandler(*(uint *)(v4 + 12), v5, *(uint *)(v6 + 16));
}

//----- (0224C52C) --------------------------------------------------------
int __fastcall Function_224c52c(uint *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a2;
  v4 = a3;
  v5 = (int)(a1 + 1432);
  v6 = a1[1434] + 20 * a1[1432];
  if ( !a1[1436] )
    ErrorHandler();
  return *(ushort *)(*(uint *)(v5 + 16) + 2 * (v3 + *(ushort *)(v6 + 16) * v4));
}

//----- (0224C55C) --------------------------------------------------------
int __fastcall Function_224c55c(uint *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  uint *v7;
  int v8;
  int v9;
  ushort *v11;
  uint *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v12 = a1;
  v6 = a2;
  v7 = a1 + 1432;
  v8 = a1[1433];
  v9 = a4;
  if ( !v8 || *v7 >= v8 )
    return 0xFFFF;
  v11 = (ushort *)(v7[2] + 20 * *v7);
  if ( !Function_2250e6c(a2, a3, a4, v11 + 2) )
    return 65534;
  if ( !v7[4] )
    ErrorHandler();
  switch ( (uchar)*v11 )
  {
    case 0u:
      return Function_224c52c(v12, v6 - (short)v11[2], v9 - (short)v11[4]);
    case 1u:
      v16 = (short)v11[6] - (a6 - (short)v11[3]);
      v13 = v9 - (short)v11[4];
      return Function_224c52c(v12, 0, 0);
    case 2u:
      v17 = a6 - (short)v11[3];
      v14 = v9 - (short)v11[4];
      break;
    case 3u:
      v18 = (short)v11[5] - (v6 - (short)v11[2]);
      v15 = v9 - (short)v11[4];
      break;
    default:
      ErrorHandler();
      break;
  }
  return Function_224c52c(v12, 0, 0);
}

//----- (0224C640) --------------------------------------------------------
int __fastcall Function_224c640(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 5752) )
    ErrorHandler();
  result = Function_224c24c(v1 + 5700);
  if ( result )
  {
    *(uint *)(v1 + 5748) = Function_224c254(v1 + 5700);
    result = Function_224c25c(v1 + 5700);
    *(uint *)(v1 + 5752) = result;
  }
  return result;
}

//----- (0224C680) --------------------------------------------------------
int __fastcall Function_224c680(int a1)
{
  uchar *v1;
  int result;

  v1 = (uchar *)(a1 + 5748);
  result = 0;
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  v1[4] = 0;
  v1[5] = 0;
  v1[6] = 0;
  v1[7] = 0;
  return result;
}

//----- (0224C69C) --------------------------------------------------------
int __fastcall Function_224c69c(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int *v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v5 = a2;
  v10 = a3;
  v6 = (int *)(a1 + 5748);
  v7 = *v6;
  v11 = a4;
  v8 = v6[1];
  if ( !*v6 )
    return 0;
  while ( a5 != *(short *)(v8 + 2) || !Function_2250e6c(v5, v10, v11, v8 + 8) )
  {
    v8 += 40;
    if ( !--v7 )
      return 0;
  }
  return v8;
}

//----- (0224C6E4) --------------------------------------------------------
int __fastcall Function_224c6e4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 5760) )
    ErrorHandler();
  result = Function_224c264(v1 + 5700);
  if ( result )
  {
    *(uint *)(v1 + 5756) = Function_224c26c(v1 + 5700);
    result = Function_224c274(v1 + 5700);
    *(uint *)(v1 + 5760) = result;
  }
  return result;
}

//----- (0224C724) --------------------------------------------------------
int __fastcall Function_224c724(int a1)
{
  uchar *v1;
  int result;

  v1 = (uchar *)(a1 + 5756);
  result = 0;
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  v1[4] = 0;
  v1[5] = 0;
  v1[6] = 0;
  v1[7] = 0;
  return result;
}

//----- (0224C740) --------------------------------------------------------
int __fastcall Function_224c740(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int *v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v5 = a2;
  v10 = a3;
  v6 = (int *)(a1 + 5756);
  v7 = *v6;
  v11 = a4;
  v8 = v6[1];
  if ( !*v6 )
    return 0;
  while ( a5 != *(short *)(v8 + 18) || !Function_2250e6c(v5, v10, v11, v8) )
  {
    v8 += 24;
    if ( !--v7 )
      return 0;
  }
  return v8;
}

//----- (0224C788) --------------------------------------------------------
int __fastcall Function_224c788(int a1, int *a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( *a2 )
    ErrorHandler();
  if ( v2[1] )
    ErrorHandler();
  if ( v2[2] )
    ErrorHandler();
  *v2 = Function_224c2a8(v3);
  v2[1] = Function_224c2ac(v3);
  result = Function_224c2b4(v3);
  v2[2] = result;
  return result;
}

//----- (0224C7C8) --------------------------------------------------------
int __fastcall Function_224c7c8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_224c27c(a1);
  if ( result )
    result = Function_224c788(v1 + 5700, (int *)(v1 + 5764));
  return result;
}

//----- (0224C7E8) --------------------------------------------------------
int __fastcall Function_224c7e8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_224c288(a1);
  if ( result )
    result = Function_224c788(v1 + 5776, (int *)(v1 + 5804));
  return result;
}

//----- (0224C808) --------------------------------------------------------
int __fastcall Function_224c808(int a1)
{
  int v1;

  v1 = a1;
  Function_224c7c8(a1);
  return Function_224c7e8(v1);
}

//----- (0224C818) --------------------------------------------------------
uchar *__fastcall Function_224c818(uchar *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  return result;
}

//----- (0224C834) --------------------------------------------------------
uchar *__fastcall Function_224c834(int a1)
{
  return Function_224c818((uchar *)(a1 + 5764));
}

//----- (0224C844) --------------------------------------------------------
uchar *__fastcall Function_224c844(int a1)
{
  return Function_224c818((uchar *)(a1 + 5804));
}

//----- (0224C854) --------------------------------------------------------
uchar *__fastcall Function_224c854(int a1)
{
  int v1;

  v1 = a1;
  Function_224c834(a1);
  return Function_224c844(v1);
}

//----- (0224C864) --------------------------------------------------------
uchar *__fastcall Function_224c864(int a1)
{
  uint *v1;
  int v2;

  v1 = (uint *)(a1 + 5804);
  v2 = *(uint *)(a1 + 5768);
  *v1 = *(uint *)(a1 + 5764);
  v1[1] = v2;
  *(uint *)(a1 + 5812) = *(uint *)(a1 + 5772);
  return Function_224c818((uchar *)(a1 + 5764));
}

//----- (0224C888) --------------------------------------------------------
uchar *__fastcall Function_224c888(int a1)
{
  uint *v1;
  int v2;

  v1 = (uint *)(a1 + 5764);
  v2 = *(uint *)(a1 + 5808);
  *v1 = *(uint *)(a1 + 5804);
  v1[1] = v2;
  *(uint *)(a1 + 5772) = *(uint *)(a1 + 5812);
  return Function_224c818((uchar *)(a1 + 5804));
}

//----- (0224C8AC) --------------------------------------------------------
int __fastcall Function_224c8ac(int a1)
{
  return *(uint *)(a1 + 5764);
}

//----- (0224C8B8) --------------------------------------------------------
int __fastcall Function_224c8b8(int a1)
{
  return *(uint *)(a1 + 5804);
}

//----- (0224C8C4) --------------------------------------------------------
int __fastcall Function_224c8c4(int a1)
{
  return *(uint *)(a1 + 5768);
}

//----- (0224C8D0) --------------------------------------------------------
int __fastcall Function_224c8d0(int a1)
{
  return *(uint *)(a1 + 5808);
}

//----- (0224C8DC) --------------------------------------------------------
int __fastcall Function_224c8dc(int a1)
{
  return *(uint *)(a1 + 5772);
}

//----- (0224C8E8) --------------------------------------------------------
int __fastcall Function_224c8e8(uint *a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  uint *v6;
  int v7;
  uint v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;
  uint *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char v21;
  int v22;
  int v23;

  v23 = a4;
  v4 = (int)a1;
  v5 = a1 + 1933;
  v6 = (uint *)*a1;
  v7 = Function_22510d0(a1);
  v8 = *(uint *)(Function_224d720(v7) + 8);
  result = 593;
  if ( v8 != 593 )
  {
    Function_224d720(v8);
    *v5 = v8;
    v5[4] = (uint)Malloc11aa(4u);
    Function_2039dc0(v8, (uchar *)v5[4]);
    v5[5] = v6[12];
    v10 = ((int (__fastcall *)(uint))dword_21E9624[129])(v6[10]);
    v5[6] = ((int (__fastcall *)(uint, uint, int))dword_21E9624[131])(v5[4], v5[5], v10);
    v11 = Function_205eafc(v6[15]);
    ((void (__fastcall *)(int, uint))dword_21E931C[0])(v11, v5[6]);
    ((void (__fastcall *)(uint, int))dword_21E9624[1056])(v5[6], 1);
    ((void (__fastcall *)(uint, int))dword_21EA6BC[5])(v5[6], 1);
    Function_224c070(v4, v8, &v18, &v17, &v16);
    ((void (__fastcall *)(uint, int, int, int))dword_21E9624[1045])(v5[6], v18, v17, v16);
    v12 = GetSpritePositionX(v6[15]);
    v13 = GetSpritePositionY(v6[15]);
    ((void (__fastcall *)(uint, int, int))dword_21E9624[237])(v5[6], v12, v13);
    v5[2] = 1;
    v5[1] = 1;
    result = Function_2249d38(v4);
    if ( !result )
    {
      v14 = (uint *)Function_205eb3c(v6[15]);
      CopySprite70Struct(v14, &v19);
      ((void (__fastcall *)(uint, char *))dword_21EA6BC[0])(v6[10], &v21);
      v20 = v22 + 0x10000;
      CopyToSprite70Struct(v14, &v19);
      v15 = LoadSpritePositionZ((int)v14);
      SetSpriteZ2((int)v14, v15);
      result = SaveSpritePositionZ((int)v14, (int)((v20 >> 3) + ((uint)(v20 >> 14) >> 20)) >> 12);
    }
  }
  return result;
}

//----- (0224C9E8) --------------------------------------------------------
int __fastcall Function_224c9e8(int a1)
{
  uint *v1;
  int result;
  int v3;

  v1 = (uint *)(a1 + 7732);
  result = *(uint *)(a1 + 7736);
  if ( result )
  {
    ((void (__fastcall *)(uint))dword_21E931C[7])(v1[6]);
    ((void (__fastcall *)(uint))dword_21E9624[197])(v1[6]);
    if ( v1[5] )
      v1[5] = 0;
    if ( v1[6] )
    {
      ((void (*)(void))dword_21E9624[232])();
      v1[6] = 0;
    }
    v3 = v1[4];
    if ( v3 )
    {
      Call_free8(v3);
      v1[4] = 0;
    }
    result = 0;
    v1[1] = 0;
  }
  return result;
}

//----- (0224CA30) --------------------------------------------------------
int __fastcall Function_224ca30(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = a1 + 7732;
  result = *(uint *)(a1 + 7740);
  if ( result )
    result = ((int (__fastcall *)(uint, uint))dword_21E9624[378])(
               *(uint *)(v2 + 24),
               *(uint *)(*(uint *)v1 + 68));
  return result;
}

//----- (0224CA50) --------------------------------------------------------
int __fastcall Function_9_224ca50(int a1)
{
  return Function_224ca30(*(uint *)(*(uint *)(a1 + 4) + 36));
}

//----- (0224CA5C) --------------------------------------------------------
int __fastcall Function_9_224ca5c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 4) + 36);
  v3 = v2 + 7732;
  v4 = *(uchar *)(v2 + 7260);
  if ( v4 == 1 )
  {
    Function_224cb30();
  }
  else if ( v4 == 2 )
  {
    Function_224ca98();
  }
  result = *(uint *)(v3 + 8);
  if ( result == 1 )
    result = ((int (__fastcall *)(int, uint))dword_21E9624[724])(v1, *(uint *)(v3 + 24));
  return result;
}

//----- (0224CA98) --------------------------------------------------------
uint __fastcall Function_224ca98(int a1)
{
  int v1;
  int v2;
  uint result;
  int v4;
  int v5;
  int v6;

  v6 = a1;
  v1 = a1 + 7260;
  v2 = a1 + 7732;
  result = *(uchar *)(a1 + 7261);
  if ( result )
  {
    if ( result == 1 )
    {
      v4 = *(uint *)(v1 + 4 * *(uchar *)(v1 + 2) + 12);
      ((void (__fastcall *)(uint))dword_21E9624[315])(*(uint *)(v2 + 24));
      result = (uchar)++*(uchar *)(v1 + 2);
      if ( result >= 4 )
      {
        result = *(uchar *)(v1 + 1) + 1;
        *(uchar *)(v1 + 1) = result;
      }
    }
    else if ( result == 2 )
    {
      ((void (__fastcall *)(uint, uint, uint))dword_21EA6BC[14])(
        *(uint *)(v2 + 24),
        *(uint *)(v1 + 4),
        *(uint *)(v1 + 8));
      v5 = 0;
      do
        ((void (__fastcall *)(uint, int, int))dword_21EA6BC[9])(*(uint *)(v2 + 24), v5++, 1);
      while ( v5 < 4 );
      Function_2249b04(v6);
      if ( *(uint *)(v1 + 28) )
        Function_224e0dc();
      *(uint *)(v2 + 8) = 1;
      result = 0;
      *(uchar *)v1 = 0;
    }
  }
  else
  {
    ((void (__fastcall *)(uint, uint, uint, int))dword_21E9624[290])(
      *(uint *)(v2 + 24),
      *(uint *)(v1 + 4),
      *(uint *)(v1 + 8),
      v1 + 12);
    result = *(uchar *)(v1 + 1) + 1;
    *(uchar *)(v1 + 1) = result;
  }
  return result;
}

//----- (0224CB30) --------------------------------------------------------
uint __fastcall Function_224cb30(int a1)
{
  int v1;
  int v2;
  uint result;
  int v4;
  int v5;
  int v6;

  v6 = a1;
  v1 = a1 + 7260;
  v2 = *(uint *)a1;
  result = *(uchar *)(a1 + 7261);
  if ( result )
  {
    if ( result == 1 )
    {
      v4 = *(uint *)(v1 + 4 * *(uchar *)(v1 + 2) + 12);
      ((void (__fastcall *)(uint))dword_21E9624[1007])(*(uint *)(v2 + 40));
      result = (uchar)++*(uchar *)(v1 + 2);
      if ( result >= 4 )
      {
        result = *(uchar *)(v1 + 1) + 1;
        *(uchar *)(v1 + 1) = result;
      }
    }
    else if ( result == 2 )
    {
      ((void (__fastcall *)(uint, uint, uint))dword_21EA6BC[14])(
        *(uint *)(v2 + 40),
        *(uint *)(v1 + 4),
        *(uint *)(v1 + 8));
      v5 = 0;
      do
        ((void (__fastcall *)(uint, int, int))dword_21EA6BC[9])(*(uint *)(v2 + 40), v5++, 1);
      while ( v5 < 4 );
      Function_2249b68(v6);
      if ( *(uint *)(v1 + 28) )
        Function_224e0dc();
      result = 0;
      *(uchar *)v1 = 0;
    }
  }
  else
  {
    ((void (__fastcall *)(uint, uint, uint, int))dword_21E9624[986])(
      *(uint *)(v2 + 40),
      *(uint *)(v1 + 4),
      *(uint *)(v1 + 8),
      v1 + 12);
    result = *(uchar *)(v1 + 1) + 1;
    *(uchar *)(v1 + 1) = result;
  }
  return result;
}

//----- (0224CBBC) --------------------------------------------------------
int __fastcall Function_224cbbc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
    result = ((int (__fastcall *)(int, int, int))dword_21EA6BC[9])(v2, v4++, v3);
  while ( v4 < 4 );
  return result;
}

//----- (0224CBD8) --------------------------------------------------------
uint *__fastcall Function_224cbd8(int a1)
{
  int v1;
  uint *result;

  v1 = a1 + 7292;
  *(uint *)(a1 + 7292) = 0;
  result = AddTaskToTaskList1((int)Function_224cc08, a1, 1u);
  *(uint *)(v1 + 44) = result;
  return result;
}

//----- (0224CBF8) --------------------------------------------------------
int __fastcall Function_224cbf8(int a1)
{
  return Call_RemoveTaskFromTaskList(*(int **)(a1 + 7336));
}

//----- (0224CC08) --------------------------------------------------------
int __fastcall Function_224cc08(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int *v5;

  v2 = a2;
  v3 = a2 + 7292;
  result = *(uint *)(a2 + 7292);
  v5 = 0;
  if ( result == 2 )
  {
    v5 = (int *)&off_22514E0;
  }
  else if ( result == 1 )
  {
    v5 = &dword_2251420[2];
  }
  if ( v5 )
  {
    do
      result = ((int (__fastcall *)(int, int))v5[*(ushort *)(v3 + 4)])(v2, v3);
    while ( result == 1 );
    if ( result == 2 )
    {
      result = 0;
      *(uint *)v3 = 0;
    }
  }
  return result;
}

//----- (0224CC4C) --------------------------------------------------------
void Function_224cc4c()
{
  ;
}

//----- (0224CC50) --------------------------------------------------------
int __fastcall Function_224cc50(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a3;
  v5 = a1 + 7292;
  if ( *(uint *)(a1 + 7292) )
    ErrorHandler();
  if ( !v4 )
    ErrorHandler();
  *(uint *)v5 = v4;
  result = 0;
  *(ushort *)(v5 + 4) = 0;
  *(ushort *)(v5 + 6) = 0;
  *(uint *)(v5 + 40) = v3;
  return result;
}

//----- (0224CC7C) --------------------------------------------------------
BOOL __fastcall Function_224cc7c(int a1)
{
  return *(uint *)(a1 + 7292) != 0;
}

//----- (0224CC90) --------------------------------------------------------
int __fastcall Function_224cc90(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  Function_224cbbc(*(uint *)(*(uint *)a1 + 40), 0);
  v4 = Function_22510d0(v2);
  Function_2249bd4(v2, v4);
  *(ushort *)(v3 + 4) = 1;
  return 0;
}

//----- (0224CCB8) --------------------------------------------------------
int __fastcall Function_224ccb8(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  uint *v8;
  short v9;
  int v11;
  uint *v12;

  v2 = a2;
  v3 = a1;
  v4 = *a1;
  v5 = a1 + 1933;
  v6 = Function_22510d0(a1);
  v11 = Function_224d720(v6);
  if ( *(uint *)(v11 + 8) == 593 )
    ErrorHandler();
  v12 = (uint *)Function_224d720(*(uint *)(v11 + 8));
  *(uint *)(v2 + 12) = *v12;
  ((void (__fastcall *)(uint))dword_21D1108[114])(*v3);
  Function_224bf18(v3, v12[2]);
  ((void (__fastcall *)(uint))dword_21E9624[429])(*(uint *)(v4 + 40));
  *(ushort *)(v2 + 8) = GetSpritePositionX(*(uint *)(v4 + 60));
  *(ushort *)(v2 + 10) = GetSpritePositionY(*(uint *)(v4 + 60));
  ((void (__fastcall *)(uint, uint, uint, uint, uint, uint))dword_21E9624[454])(
    v5[4],
    v5[5],
    v5[6],
    *(uint *)(v4 + 40),
    *(short *)(v2 + 8),
    *(short *)(v2 + 10));
  v5[2] = 0;
  Function_224cbbc(v5[6], 0);
  Call_free8(v5[4]);
  v5[4] = 0;
  Function_224cbbc(*(uint *)(*v3 + 40), 1);
  v7 = v12[2];
  *v5 = v7;
  if ( v7 == 593 )
  {
    v9 = 4;
  }
  else
  {
    v8 = (uint *)Function_224d720(v12[2]);
    v5[4] = Malloc11aa(4u);
    Function_2039dc0(*v8, (uchar *)v5[4]);
    v9 = 2;
  }
  *(ushort *)(v2 + 4) = v9;
  return 0;
}

//----- (0224CD84) --------------------------------------------------------
int __fastcall Function_224cd84(int *a1, int a2)
{
  ushort *v2;
  int *v3;
  int v4;
  int v6;
  int v7;
  int v8;

  v2 = (ushort *)a2;
  v3 = a1;
  if ( *(uint *)(a2 + 32) )
    return 0;
  v4 = ((int (__fastcall *)(uint))dword_21E9624[129])(*(uint *)(*a1 + 40));
  ((void (__fastcall *)(int, int, int, int))dword_21E9624[169])(v3[1939], v3[1937], v3[1938], v4);
  Function_224c070((int)v3, v3[1933], &v8, &v7, &v6);
  ((void (__fastcall *)(int, int, int, int))dword_21E9624[1045])(v3[1939], v8, v7, v6);
  ((void (__fastcall *)(int, int))dword_21E9624[1056])(v3[1939], 1);
  ((void (__fastcall *)(int, int))dword_21EA6BC[5])(v3[1939], 1);
  ((void (__fastcall *)(int, uint, uint, ushort *))dword_21E9624[290])(
    v3[1939],
    (short)v2[4],
    (short)v2[5],
    v2 + 8);
  v2[2] = 3;
  return 1;
}

//----- (0224CE00) --------------------------------------------------------
int __fastcall Function_224ce00(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = *(uint *)(a2 + 4 * *(ushort *)(a2 + 6) + 16);
  ((void (__fastcall *)(uint))dword_21E9624[315])(*(uint *)(a1 + 7756));
  if ( (ushort)++*(ushort *)(v2 + 6) >= 4u )
    *(ushort *)(v2 + 4) = 4;
  return 0;
}

//----- (0224CE2C) --------------------------------------------------------
int __fastcall Function_224ce2c(uint *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = (int)a1;
  v3 = a2;
  v4 = (int)(a1 + 1933);
  if ( a1[1933] != 593 )
  {
    a1[1935] = 1;
    Function_224cbbc(a1[1939], 1);
    ((void (__fastcall *)(uint, uint, uint))dword_21EA6BC[14])(
      *(uint *)(v4 + 24),
      *(short *)(v3 + 8),
      *(short *)(v3 + 10));
  }
  v5 = Function_224d720(*(uint *)(v3 + 12));
  Function_2249c08(v2, *(uint *)(v5 + 8));
  if ( *(uint *)(v3 + 40) )
    Function_224e0dc();
  return 2;
}

//----- (0224CE80) --------------------------------------------------------
int __fastcall Function_224ce80(uint *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = (int)a1;
  v3 = a2;
  a1[1935] = 0;
  if ( a1[1934] == 1 )
    Function_224cbbc(a1[1939], 0);
  v4 = Function_22510d0(v2);
  v5 = Function_224d720(v4);
  Function_2249c2c(v2, *(uint *)(v5 + 8));
  *(ushort *)(v3 + 4) = 1;
  return 0;
}

//----- (0224CEBC) --------------------------------------------------------
int __fastcall Function_224cebc(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  uint *v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a2;
  v3 = a1;
  v4 = *a1;
  v5 = a1 + 1933;
  v6 = Function_22510d0(a1);
  v10 = Function_224d720(v6);
  if ( *(uint *)(v10 + 4) == 593 )
    ErrorHandler();
  v9 = (uint *)Function_224d720(*(uint *)(v10 + 4));
  *(uint *)(v2 + 12) = *v9;
  ((void (__fastcall *)(uint))dword_21D1108[114])(*v3);
  Function_224beb4(v3, *(uint *)(v2 + 12));
  if ( !v5[4] )
    v5[4] = Malloc11aa(4u);
  if ( !v5[5] )
    v5[5] = *(uint *)(v4 + 48);
  if ( !v5[1] )
  {
    v7 = ((int (__fastcall *)(uint))dword_21E9624[129])(*(uint *)(v4 + 40));
    v5[6] = ((int (__fastcall *)(uint, uint, int))dword_21E9624[131])(0, v5[5], v7);
    ((void (*)(void))dword_21E771C[206])();
  }
  if ( v5[1] == 1 )
    ((void (__fastcall *)(uint))dword_21E9624[221])(v5[6]);
  ((void (__fastcall *)(uint))dword_21E9624[221])(*(uint *)(v4 + 40));
  ((void (__fastcall *)(uint, uint))dword_21EA6BC[7])(v5[6], v5[4]);
  ((void (__fastcall *)(uint, uint))dword_21E9624[605])(v5[6], *(uint *)(v4 + 40));
  v5[1] = 1;
  v5[2] = 1;
  Function_224cbbc(v5[6], 1);
  Function_224cbbc(*(uint *)(*v3 + 40), 0);
  Function_2039dc0(*v9, *(uchar **)(v4 + 44));
  v13 = 0;
  v12 = 0;
  v11 = 0;
  ((void (__fastcall *)(uint, uint, uint))dword_21E9624[967])(
    *(uint *)(v4 + 40),
    *(uint *)(v4 + 44),
    *(uint *)(v4 + 48));
  Function_9_2251094(*v9, &v13, &v12, &v11);
  ((void (__fastcall *)(uint, int, int, int))dword_21E9624[1045])(*(uint *)(v4 + 40), v13, v12, v11);
  ((void (__fastcall *)(uint, int))dword_21E9624[1056])(*(uint *)(v4 + 40), 1);
  ((void (__fastcall *)(uint, int))dword_21EA6BC[5])(*(uint *)(v4 + 40), 1);
  *(ushort *)(v2 + 8) = *(uint *)(*(uint *)(v4 + 28) + 8);
  *(ushort *)(v2 + 10) = *(uint *)(*(uint *)(v4 + 28) + 12);
  ((void (__fastcall *)(uint, uint, uint, int))dword_21E9624[986])(
    *(uint *)(v4 + 40),
    *(short *)(v2 + 8),
    *(short *)(v2 + 10),
    v2 + 16);
  *(ushort *)(v2 + 4) = 2;
  return 0;
}

//----- (0224CFE0) --------------------------------------------------------
int __fastcall Function_224cfe0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = *(uint *)(a2 + 4 * *(ushort *)(a2 + 6) + 16);
  ((void (__fastcall *)(uint))dword_21E9624[1007])(*(uint *)(*(uint *)a1 + 40));
  if ( (ushort)++*(ushort *)(v2 + 6) >= 4u )
    *(ushort *)(v2 + 4) = 3;
  return 0;
}

//----- (0224D008) --------------------------------------------------------
int __fastcall Function_224d008(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  ((void (__fastcall *)(uint, uint, uint))dword_21EA6BC[14])(
    *(uint *)(*(uint *)a1 + 40),
    *(short *)(a2 + 8),
    *(short *)(a2 + 10));
  Function_2249c60(v2, *(uint *)(v3 + 12));
  if ( *(uint *)(v3 + 40) )
    Function_224e0dc();
  Function_224cbbc(*(uint *)(*(uint *)v2 + 40), 1);
  return 2;
}

//----- (0224D040) --------------------------------------------------------
int __fastcall Function_224d040(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  Function_22510d0(a1);
  v8 = Function_224e188(v4, v5, v6, v7);
  if ( !v8 )
    return 0;
  if ( *(ushort *)(v8 + 14) > 1u )
    return 0;
  Function_224d078(v4, v8);
  return 1;
}

//----- (0224D078) --------------------------------------------------------
uint *__fastcall Function_224d078(int a1, int a2)
{
  int *v2;

  v2 = (int *)a1;
  Function_224a578(a1, 112)[25] = a2;
  return OverWorldData_InitUnknownStruct01(*v2, (int)Function_224d098, (int)v2);
}

//----- (0224D098) --------------------------------------------------------
BOOL __fastcall Function_224d098(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = GetUnknownStruct01_c(a1);
  v2 = Function_224a598(v1);
  do
    v3 = ((int (__fastcall *)(int, int))*(&off_2252224 + *(ushort *)(v2 + 4)))(v1, v2);
  while ( v3 == 1 );
  return v3 == 2;
}

//----- (0224D0C8) --------------------------------------------------------
int __fastcall Function_224d0c8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  uint *v9;
  int v10;
  int v11;
  uint *v12;
  uint *v13;
  int v14;
  uint *v15;
  char v17;
  int v18;

  v2 = a2;
  v3 = a1;
  *(uchar *)a2 = *(ushort *)(*(uint *)(a2 + 100) + 14);
  *(ushort *)(a2 + 2) = *(ushort *)(*(uint *)(a2 + 100) + 12);
  v4 = Function_22510d0(a1);
  v5 = Function_224d720(v4);
  if ( *(uchar *)v2 == 1 )
  {
    *(ushort *)(v2 + 6) = *(uint *)(v5 + 8);
    v6 = LoadFlagAdress(*(uint *)(*(uint *)v3 + 12));
    v7 = Function_206b5d8(v6);
    if ( v4 != 573 || v7 != 2 )
    {
      if ( v4 == 580 && v7 == 7 )
      {
        v9 = GetAdressOfSpriteID(*(uint *)(*(uint *)v3 + 56), 134);
        *(uint *)(v2 + 104) = v9;
        if ( !v9 )
          ErrorHandler();
      }
    }
    else
    {
      v8 = GetAdressOfSpriteID(*(uint *)(*(uint *)v3 + 56), 129);
      *(uint *)(v2 + 104) = v8;
      if ( !v8 )
        ErrorHandler();
    }
  }
  else
  {
    *(ushort *)(v2 + 6) = *(uint *)(v5 + 4);
    v10 = *(ushort *)(v2 + 2);
    switch ( v10 )
    {
      case 10:
        Function_2249d8c(v3, 5u);
        break;
      case 11:
        Function_2249d70(v3, 6u);
        Function_2249d8c(v3, 3u);
        Function_2249d8c(v3, 5u);
        break;
      case 13:
        Function_2249d70(v3, 3u);
        Function_2249d8c(v3, 4u);
        break;
    }
  }
  v11 = Function_224de70(*(ushort *)(v2 + 2));
  v12 = (uint *)Function_205eb3c(*(uint *)(*(uint *)v3 + 60));
  CopySprite70Struct(v12, (uint *)(v2 + 20));
  SetUnsetSpriteFlags800000(v12, 1);
  *(uint *)(v2 + 68) = 0;
  *(uint *)(v2 + 72) = 0;
  *(uint *)(v2 + 76) = 0;
  *(ushort *)(v2 + 10) = LoadSpritePositionX((int)v12);
  *(ushort *)(v2 + 10) += *(ushort *)(v11 + 4);
  *(ushort *)(v2 + 12) = LoadSpritePositionZ((int)v12);
  *(ushort *)(v2 + 12) += 2 * *(ushort *)(v11 + 6);
  *(ushort *)(v2 + 14) = LoadSpritePositionY((int)v12);
  *(ushort *)(v2 + 14) += *(ushort *)(v11 + 8);
  *(uint *)(v2 + 44) = *(short *)(v11 + 4) << 16;
  *(uint *)(v2 + 48) = *(short *)(v11 + 6) << 16;
  v13 = (uint *)(v2 + 32);
  *(uint *)(v2 + 52) = *(short *)(v11 + 8) << 16;
  *(uint *)(v2 + 56) = *(short *)(v11 + 10) << 16;
  *(uint *)(v2 + 60) = *(short *)(v11 + 12) << 16;
  *(uint *)(v2 + 64) = *(short *)(v11 + 14) << 16;
  v14 = *(uint *)(v11 + 20);
  *v13 = *(uint *)(v11 + 16);
  v13[1] = v14;
  *(uint *)(v2 + 40) = *(uint *)(v11 + 24);
  *(ushort *)(v2 + 8) = *(ushort *)(v11 + 2);
  if ( *(uchar *)(v2 + 1) )
  {
    *(ushort *)(v2 + 4) = 2;
  }
  else
  {
    *(uint *)(v2 + 92) = 24576;
    Function_206309c(v12, &v17);
    *(uint *)(v2 + 80) = v18;
    v15 = *(uint **)(v2 + 104);
    if ( v15 )
    {
      Function_206309c(v15, &v17);
      *(uint *)(v2 + 84) = v18;
    }
    *(uint *)(v2 + 88) = *(uint *)(Function_224e330(*(uint *)(*(uint *)(v2 + 100) + 32)) + 4);
    *(uchar *)(v2 + 1) = 1;
    *(ushort *)(v2 + 4) = 1;
    Function_2005748(0x5C9u);
  }
  *(ushort *)(v2 + 16) = *(ushort *)(v11 + 28);
  *(ushort *)(v2 + 18) = *(ushort *)(v11 + 30);
  return 0;
}

//----- (0224D288) --------------------------------------------------------
int __fastcall Function_224d288(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  uint *v5;
  int v6;
  uint v7;
  uint *v8;
  char v10;
  int v11;
  int v12;
  int v13;

  v2 = a2;
  v3 = (uint *)Function_205eb3c(*(uint *)(*(uint *)a1 + 60));
  v4 = Function_224e330(*(uint *)(*(uint *)(v2 + 100) + 32));
  Function_206309c(v3, &v12);
  v13 = *(uint *)(v2 + 80) + *(uint *)(v2 + 92);
  Function_20630ac(v3, &v12);
  Function_22511f4(v3, v2 + 20);
  v5 = *(uint **)(v2 + 104);
  if ( v5 )
  {
    Function_206309c(v5, &v12);
    v13 = *(uint *)(v2 + 84) + *(uint *)(v2 + 92);
    Function_20630ac(*(uint **)(v2 + 104), &v12);
    CopySprite70Struct(*(uint **)(v2 + 104), &v10);
    v11 = *(uint *)(v2 + 24);
    Function_22511f4(*(uint *)(v2 + 104), &v10);
  }
  *(uint *)(v4 + 4) = *(uint *)(v2 + 88) + *(uint *)(v2 + 92);
  v6 = -*(uint *)(v2 + 92);
  *(uint *)(v2 + 92) = v6;
  if ( v6 >= 0 )
  {
    if ( v6 < 0x4000 )
    {
      if ( v6 <= 4096 )
      {
        v7 = *(uint *)(v2 + 96) + 1;
        *(uint *)(v2 + 96) = v7;
        if ( v7 >= 8 )
          *(uint *)(v2 + 92) -= 4096;
      }
      else
      {
        *(uint *)(v2 + 92) = v6 - 4096;
      }
    }
    else
    {
      *(uint *)(v2 + 92) = v6 - 0x2000;
    }
    if ( *(uint *)(v2 + 92) <= 0 )
    {
      Function_206309c(v3, &v12);
      v13 = *(uint *)(v2 + 80);
      Function_20630ac(v3, &v12);
      v8 = *(uint **)(v2 + 104);
      if ( v8 )
      {
        Function_206309c(v8, &v12);
        v13 = *(uint *)(v2 + 84);
        Function_20630ac(*(uint **)(v2 + 104), &v12);
      }
      *(uint *)(v4 + 4) = *(uint *)(v2 + 88);
      *(ushort *)(v2 + 4) = 2;
    }
  }
  return 0;
}

//----- (0224D374) --------------------------------------------------------
int __fastcall Function_224d374(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  char v10;
  int v11;

  v2 = a2;
  v3 = Function_205eb3c(*(uint *)(*(uint *)a1 + 60));
  v4 = (uint *)Function_224e330(*(uint *)(*(uint *)(v2 + 100) + 32));
  v5 = *(uint *)(v2 + 68);
  if ( v5 != *(uint *)(v2 + 44) )
  {
    *(uint *)(v2 + 68) = v5 + *(uint *)(v2 + 32);
    *(uint *)(v2 + 20) += *(uint *)(v2 + 32);
    *v4 += *(uint *)(v2 + 32);
  }
  v6 = *(uint *)(v2 + 72);
  if ( v6 != *(uint *)(v2 + 48) )
  {
    *(uint *)(v2 + 72) = v6 + *(uint *)(v2 + 36);
    *(uint *)(v2 + 24) += *(uint *)(v2 + 36);
    v4[1] += *(uint *)(v2 + 36);
  }
  v7 = *(uint *)(v2 + 76);
  if ( v7 != *(uint *)(v2 + 52) )
  {
    *(uint *)(v2 + 76) = v7 + *(uint *)(v2 + 40);
    *(uint *)(v2 + 28) += *(uint *)(v2 + 40);
    v4[2] += *(uint *)(v2 + 40);
  }
  Function_22511f4(v3, v2 + 20);
  v8 = *(uint **)(v2 + 104);
  if ( v8 )
  {
    CopySprite70Struct(v8, &v10);
    v11 = *(uint *)(v2 + 24);
    Function_22511f4(*(uint *)(v2 + 104), &v10);
  }
  if ( *(uint *)(v2 + 68) != *(uint *)(v2 + 56)
    || *(uint *)(v2 + 72) != *(uint *)(v2 + 60)
    || *(uint *)(v2 + 76) != *(uint *)(v2 + 64) )
  {
    return 0;
  }
  *(ushort *)(v2 + 4) = 3;
  return 1;
}

//----- (0224D430) --------------------------------------------------------
int __fastcall Function_224d430(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  uint v5;
  int v6;

  v2 = a2;
  v3 = a1;
  Function_224e0dc(*(uint *)(a2 + 100), 1);
  if ( *(ushort *)(v2 + 8) == 22 )
  {
    v4 = *(ushort *)(v2 + 16);
    if ( v4 != 11 )
      Function_2249d70(v3, v4);
    v5 = *(ushort *)(v2 + 18);
    if ( v5 != 11 )
      Function_2249d8c(v3, v5);
    Function_224e07c(v3, *(uint *)(v2 + 100), *(ushort *)(v2 + 6));
  }
  v6 = *(uint *)(v2 + 104);
  if ( v6 )
  {
    if ( *(ushort *)(v2 + 6) == 574 )
    {
      SetSpriteID(v6, 128);
    }
    else
    {
      SetSpriteID(v6, 128);
      SetSpriteScript(*(uint *)(v2 + 104), 6);
    }
    SetSprite_c(*(uint *)(v2 + 104), *(ushort *)(v2 + 6));
  }
  if ( *(uchar *)v2 == 1 )
  {
    Function_224cc50(v3, *(uint *)(v2 + 100), 2);
  }
  else if ( *(uchar *)v2 )
  {
    ErrorHandler();
  }
  else
  {
    Function_224cc50(v3, *(uint *)(v2 + 100), 1);
  }
  *(ushort *)(v2 + 4) = 4;
  return 0;
}

//----- (0224D4C4) --------------------------------------------------------
int __fastcall Function_224d4c4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char v17;
  int v18;
  int v19;

  v19 = a4;
  v4 = a1;
  v5 = a2;
  v6 = Function_205eb3c(*(uint *)(*(uint *)a1 + 60));
  v7 = (uint *)Function_224e330(*(uint *)(*(uint *)(v5 + 100) + 32));
  v8 = *(uint *)(v5 + 68);
  if ( v8 != *(uint *)(v5 + 44) )
  {
    *(uint *)(v5 + 68) = v8 + *(uint *)(v5 + 32);
    *(uint *)(v5 + 20) += *(uint *)(v5 + 32);
    *v7 += *(uint *)(v5 + 32);
  }
  v9 = *(uint *)(v5 + 72);
  if ( v9 != *(uint *)(v5 + 48) )
  {
    *(uint *)(v5 + 72) = v9 + *(uint *)(v5 + 36);
    *(uint *)(v5 + 24) += *(uint *)(v5 + 36);
    v7[1] += *(uint *)(v5 + 36);
  }
  v10 = *(uint *)(v5 + 76);
  if ( v10 != *(uint *)(v5 + 52) )
  {
    *(uint *)(v5 + 76) = v10 + *(uint *)(v5 + 40);
    *(uint *)(v5 + 28) += *(uint *)(v5 + 40);
    v7[2] += *(uint *)(v5 + 40);
  }
  Function_22511f4(v6, v5 + 20);
  v11 = *(uint **)(v5 + 104);
  if ( v11 )
  {
    CopySprite70Struct(v11, &v17);
    v18 = *(uint *)(v5 + 24);
    Function_22511f4(*(uint *)(v5 + 104), &v17);
  }
  if ( *(uint *)(v5 + 68) != *(uint *)(v5 + 44)
    || *(uint *)(v5 + 72) != *(uint *)(v5 + 48)
    || *(uint *)(v5 + 76) != *(uint *)(v5 + 52) )
  {
    return 0;
  }
  if ( *(ushort *)(v5 + 8) == 22 )
  {
    Function_20057a4(1481, 0);
    *(ushort *)(v5 + 4) = 5;
  }
  else
  {
    v12 = Function_205eb3c(*(uint *)(*(uint *)v4 + 60));
    SaveSpritePositionX(v12, *(short *)(v5 + 10));
    SaveSpritePositionZ(v12, *(short *)(v5 + 12));
    SaveSpritePositionY(v12, *(short *)(v5 + 14));
    CopySpritePositionsFromOldToNew(v12);
    v13 = *(uint *)(v5 + 104);
    if ( v13 )
    {
      SaveSpritePositionZ(v13, *(short *)(v5 + 12));
      CopySpritePositionsFromOldToNew(*(uint *)(v5 + 104));
    }
    v14 = *(ushort *)(v5 + 8);
    v15 = *(uint *)(v5 + 100);
    *(ushort *)(v15 + 12) = v14;
    Function_20629b4(*(uint **)(v15 + 28), v14, 2);
    *(ushort *)(v5 + 4) = 0;
  }
  return 1;
}

//----- (0224D5E8) --------------------------------------------------------
int __fastcall Function_224d5e8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  if ( Function_224cc7c(a1) )
    return 0;
  v4 = Function_205eb3c(*(uint *)(*(uint *)v2 + 60));
  SaveSpritePositionX(v4, *(short *)(v3 + 10));
  SaveSpritePositionZ(v4, *(short *)(v3 + 12));
  SaveSpritePositionY(v4, *(short *)(v3 + 14));
  CopySpritePositionsFromOldToNew(v4);
  Function_205ed48(*(uint *)(*(uint *)v2 + 60), 1);
  v5 = *(uint *)(v3 + 104);
  if ( v5 )
  {
    SaveSpritePositionZ(v5, *(short *)(v3 + 12));
    CopySpritePositionsFromOldToNew(*(uint *)(v3 + 104));
  }
  if ( *(uchar *)v3 == 1 && *(ushort *)(v3 + 2) == 9 )
  {
    Function_2249d70(v2, 7u);
    Function_224dda0(v2, 579, 0);
  }
  if ( *(ushort *)(v3 + 6) != 577 )
    return 2;
  if ( *(uchar *)v3 != 1 )
    return 2;
  if ( *(ushort *)(*(uint *)(v3 + 100) + 4) != 1 )
    return 2;
  v6 = LoadFlagAdress(*(uint *)(*(uint *)v2 + 12));
  if ( Function_206b6dc(v6) )
    return 2;
  *(ushort *)(v3 + 4) = 6;
  return 1;
}

//----- (0224D69C) --------------------------------------------------------
int __fastcall Function_224d69c(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = a2;
  v3 = GetAdressOfSpriteID(*(uint *)(*(uint *)a1 + 56), 134);
  if ( !v3 )
    ErrorHandler();
  v4 = LoadSpritePositionX((int)v3);
  if ( (uint)(v4 - 88) >= 3 )
    ErrorHandler();
  *(uint *)(v2 + 108) = Malloc_MovementScript((int)v3, dword_22512A8[v4 - 88 + 55]);
  *(ushort *)(v2 + 4) = 7;
  return 0;
}

//----- (0224D6E0) --------------------------------------------------------
int __fastcall Function_224d6e0(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( Function_206574c(*(uint *)(a2 + 108)) != 1 )
    return 0;
  Function_2065758(*(uint *)(v2 + 108));
  v4 = GetAdressOfSpriteID(*(uint *)(*(uint *)v3 + 56), 134);
  Function_224ee70(v3, v4);
  v5 = LoadFlagAdress(*(uint *)(*(uint *)v3 + 12));
  Function_206b6ec(v5, 1);
  return 2;
}

//----- (0224D720) --------------------------------------------------------
int *__fastcall Function_224d720(int a1)
{
  int *v1;
  int v2;

  v1 = &dword_22530A4;
  v2 = 0;
  do
  {
    if ( *v1 == a1 )
      return v1;
    ++v2;
    v1 += 3;
  }
  while ( v2 < 10 );
  ErrorHandler();
  return 0;
}

//----- (0224D744) --------------------------------------------------------
ll __fastcall Function_224d744(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;
  ll result;

  v1 = a1 + 832;
  Call_FillMemWithValue((int *)(a1 + 832), 0, 0x12F8u);
  v2 = 0;
  v3 = (uint *)v1;
  do
  {
    ++v2;
    *v3 = 25;
    v3 += 6;
  }
  while ( v2 < 25 );
  v4 = 0;
  result = 21474837080LL;
  do
  {
    ++v4;
    *(uint *)(v1 + 600) = 5;
    v1 += 8;
  }
  while ( v4 < 5 );
  return result;
}

//----- (0224D780) --------------------------------------------------------
int __fastcall Function_224d780(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  uint *v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = a1 + 832;
  if ( a2 >= 0x19 )
    ErrorHandler();
  v5 = (uint *)(v4 + 24 * v3);
  result = *(uint *)(v4 + 24 * v3);
  if ( result == 25 )
  {
    *v5 = v3;
    result = ((int (__fastcall *)(uint, uint *, uint, int, int))dword_21DF74C[237])(
               *(uint *)(*(uint *)v2 + 64),
               v5 + 1,
               0,
               dword_2252FD0[v3],
               1);
  }
  return result;
}

//----- (0224D7C0) --------------------------------------------------------
uchar *__fastcall Function_224d7c0(int a1, uint a2)
{
  uint v2;
  int v3;
  uint *v4;
  uchar *result;

  v2 = a2;
  v3 = a1 + 832;
  if ( a2 >= 0x19 )
    ErrorHandler();
  v4 = (uint *)(v3 + 24 * v2);
  result = *(uchar **)(v3 + 24 * v2);
  if ( result != (uchar *)25 )
  {
    *v4 = 25;
    result = Function_207395c((int)(v4 + 1));
  }
  return result;
}

//----- (0224D7EC) --------------------------------------------------------
int __fastcall Function_224d7ec(int a1, uint a2)
{
  uint v2;
  int v3;
  uint *v4;

  v2 = a2;
  v3 = a1 + 832;
  if ( a2 >= 0x19 )
    ErrorHandler();
  v4 = (uint *)(v3 + 24 * v2);
  if ( *v4 == 25 )
    ErrorHandler();
  return (int)(v4 + 1);
}

//----- (0224D814) --------------------------------------------------------
int __fastcall Function_224d814(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int result;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  if ( a2 >= 5 )
    ErrorHandler();
  v4 = 8 * v3;
  result = *(uint *)(v2 + 1432 + 8 * v3);
  if ( result == 5 )
  {
    v6 = dword_2251464[v3 + 16];
    v7 = ((int (__fastcall *)(uint, int))dword_21DF5A8[0])(*(uint *)(*(uint *)v2 + 64), dword_2251464[v3 + 16]);
    *(uint *)(v2 + 1436 + v4) = malloc2(4u, v7);
    ((void (__fastcall *)(uint, int, uint))dword_21DF5B4[0])(
      *(uint *)(*(uint *)v2 + 64),
      v6,
      *(uint *)(v2 + 1436 + v4));
    result = v2 + 1432;
    *(uint *)(v2 + 1432 + v4) = v3;
  }
  return result;
}

//----- (0224D874) --------------------------------------------------------
uint __fastcall Function_224d874(int a1, uint a2)
{
  uint v2;
  int v3;
  uint result;
  int v5;

  v2 = a2;
  v3 = a1 + 832;
  if ( a2 >= 5 )
    ErrorHandler();
  result = 600;
  v5 = 8 * v2;
  if ( *(uint *)(v3 + 600 + 8 * v2) != 5 )
  {
    *(uint *)(v3 + 600 + v5) = 5;
    result = free(*(uint *)(v3 + v5 + 604));
  }
  return result;
}

//----- (0224D8A4) --------------------------------------------------------
int __fastcall Function_224d8a4(int a1, int a2, uint *a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;

  v3 = a2;
  v4 = a1 + 832;
  v5 = a3;
  if ( Function_224db04(a2) == 1 )
  {
    v6 = 0;
    v7 = v4;
    while ( *(ushort *)(v7 + 640) != 1 || v3 != *(ushort *)(v7 + 642) )
    {
      ++v6;
      v7 += 124;
      if ( v6 >= 34 )
        goto LABEL_7;
    }
    *v5 = 1;
    result = v4 + 640 + 124 * v6;
  }
  else
  {
LABEL_7:
    v9 = 0;
    v10 = v4;
    do
    {
      if ( !*(ushort *)(v10 + 640) )
      {
        *v5 = 0;
        v11 = 124 * v9;
        *(ushort *)(v4 + 640 + v11) = 1;
        *(ushort *)(v4 + v11 + 642) = v3;
        return v4 + 640 + 124 * v9;
      }
      ++v9;
      v10 += 124;
    }
    while ( v9 < 34 );
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0224D928) --------------------------------------------------------
int __fastcall Function_224d928(int a1, ushort *a2)
{
  ushort *v2;
  int result;

  v2 = a2;
  if ( !a2 )
    ErrorHandler();
  result = 0;
  *v2 = 0;
  return result;
}

//----- (0224D938) --------------------------------------------------------
int __fastcall Function_224d938(int a1, ushort *a2)
{
  ushort *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = Function_224db04((ushort)a2[1]);
  if ( !result )
    result = Function_224d928(v3, v2);
  return result;
}

//----- (0224D954) --------------------------------------------------------
int __fastcall Function_224d954(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int result;
  int v7;

  v2 = a1;
  v3 = a1 + 832;
  v7 = a2;
  v4 = 0;
  v5 = (ushort *)(a1 + 1472);
  do
  {
    result = *(ushort *)(v3 + 640);
    if ( *(ushort *)(v3 + 640) )
    {
      result = v7;
      if ( v7 == *(ushort *)(v3 + 642) )
        result = Function_224d928(v2, v5);
    }
    ++v4;
    v3 += 124;
    v5 += 62;
  }
  while ( v4 < 34 );
  return result;
}

//----- (0224D994) --------------------------------------------------------
uint __fastcall Function_224d994(int a1)
{
  int v1;
  int v2;
  int v3;
  uint result;

  v1 = a1;
  v2 = 0;
  do
    Function_224d7c0(v1, v2++);
  while ( v2 < 25 );
  v3 = 0;
  do
    result = Function_224d874(v1, v3++);
  while ( v3 < 5 );
  return result;
}

//----- (0224D9BC) --------------------------------------------------------
int (__fastcall *__fastcall Function_224d9bc(int (__fastcall *result)(uint *a1, int a2, uint a3, int a4), uint a2, uint a3, int *a4, int *a5))(uint *a1, int a2, uint a3, int a4)
{
  uint v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;

  v10 = a4;
  v5 = a3;
  v6 = a2;
  v7 = (int)result + 832;
  v9 = (int)result;
  if ( a2 != 25 )
  {
    v11 = v7 + 24 * a2;
    if ( *(uint *)(v7 + 24 * a2) == 25 )
      Function_224d780((int)result, a2);
    result = Function_2073b70(v10, v11 + 4);
  }
  if ( v5 != 5 )
  {
    if ( *(uint *)(v7 + 8 * v5 + 600) == 5 )
      Function_224d814(v9, v5);
    Function_2073994(a5, *(uint *)(v7 + 8 * v5 + 604));
    v8 = v7 + 24 * v6;
    Function_2073a3c((int)a5, v8 + 4, 4u);
    Function_2073a5c((int)a5, v8 + 4);
    result = (int (__fastcall *)(uint *, int, uint, int))Function_2073b84((uint)v10, (int)a5);
  }
  return result;
}

//----- (0224DA48) --------------------------------------------------------
int (__fastcall *__fastcall Function_224da48(int (__fastcall *a1)(uint *a1, int a2, uint a3, int a4), int a2, int *a3, int *a4))(uint *a1, int a2, uint a3, int a4)
{
  return Function_224d9bc(a1, LOWORD(dword_22531D0[2 * a2]), HIWORD(dword_22531D0[2 * a2]), a3, a4);
}

//----- (0224DA64) --------------------------------------------------------
uint __fastcall Function_224da64(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint result;

  v4 = a3;
  v5 = a1 + 848;
  v6 = 24 * LOWORD(dword_22531D0[2 * a2]);
  v7 = a4;
  Function_20b2d8c(*(uint *)(a1 + 848 + v6), 1, 2031616);
  Function_20b3764(*(uint *)(v5 + v6), v4, v8, v9);
  result = -1;
  if ( v7 != -1 )
    result = Function_20b3724(*(uint *)(v5 + v6), v7 & 0x3F, v10, v11);
  return result;
}

//----- (0224DAAC) --------------------------------------------------------
uint __fastcall Function_224daac(int a1, int a2, int a3)
{
  return Function_224da64(a1, a2, a3, -1);
}

//----- (0224DAB8) --------------------------------------------------------
uint __fastcall Function_224dab8(int a1, int a2, char a3, int a4)
{
  char v4;
  int v5;
  int v6;
  int v7;

  v4 = a3;
  v5 = 832;
  v6 = a1 + 832;
  v7 = 24 * LOWORD(dword_22531D0[2 * a2]);
  if ( *(uint *)(a1 + 832 + v7) >= 0x19u )
    ErrorHandler();
  return Function_20b3724(*(uint *)(v6 + v7 + 16), v4 & 0x3F, v5, a4);
}

//----- (0224DAEC) --------------------------------------------------------
BOOL __fastcall Function_224daec(int a1)
{
  return HIWORD(dword_22531D0[2 * a1]) != 5;
}

//----- (0224DB04) --------------------------------------------------------
BOOL __fastcall Function_224db04(int a1)
{
  return dword_22531D0[2 * a1 + 1] == 1;
}

//----- (0224DB1C) --------------------------------------------------------
int __fastcall Function_224db1c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    if ( !Function_224b8dc(v1, v2)
      && !Function_224e160(v1, v2)
      && !Function_224e9f4(v1, v2)
      && !Function_224ecc0(v1, v2) )
    {
      Function_224d954(v1, v2);
    }
    ++v2;
  }
  while ( v2 < 25 );
  v3 = 0;
  do
  {
    if ( !Function_224b7b0(v1, v3)
      && !Function_224e0e0(v1, v3)
      && !Function_224e9a4(v1, v3)
      && !Function_224ece8(v1, v3) )
    {
      Function_224d7c0(v1, v3);
    }
    ++v3;
  }
  while ( v3 < 25 );
  v4 = 0;
  do
  {
    result = Function_224b844(v1, v4);
    if ( !result )
    {
      result = Function_224e120(v1, v4);
      if ( !result )
      {
        result = Function_224e9cc(v1, v4);
        if ( !result )
        {
          result = Function_224ed20(v1, v4);
          if ( !result )
            result = Function_224d874(v1, v4);
        }
      }
    }
    ++v4;
  }
  while ( v4 < 5 );
  return result;
}

//----- (0224DBE4) --------------------------------------------------------
BOOL __fastcall Function_224dbe4(int a1, int a2, int *a3)
{
  int *v3;
  int v4;
  int v6;
  char v7;

  v3 = a3;
  v4 = 3 * a2;
  if ( !dword_22533C4[3 * a2] )
    return 1;
  v6 = Function_224d7ec(a1, LOWORD(dword_22531D0[2 * a2]));
  MTX_Identity33_(&v7);
  return Function_201ced8(*(uint *)(v6 + 12), v3, (int *)&v7, &dword_22533C4[v4]) != 0;
}

//----- (0224DC34) --------------------------------------------------------
int *__fastcall Function_224dc34(int a1)
{
  return Call_FillMemWithValue((int *)(a1 + 5840), 0, 0x480u);
}

//----- (0224DC4C) --------------------------------------------------------
int __fastcall Function_224dc4c(int a1)
{
  int v1;
  int v2;
  uchar *v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = (uchar *)(a1 + 5840);
  do
  {
    result = (uchar)*v3;
    if ( *v3 )
      result = Function_224e044(v1, v3);
    ++v2;
    v3 += 36;
  }
  while ( v2 < 32 );
  return result;
}

//----- (0224DC74) --------------------------------------------------------
int __fastcall Function_224dc74(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uchar *v5;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = (uchar *)(a1 + 5840);
  do
  {
    result = *v5;
    if ( *v5 )
    {
      result = *((ushort *)v5 + 1);
      if ( v3 == result )
      {
        result = v5[1];
        if ( !v5[1] )
          result = Function_224e060(v2, v5);
      }
    }
    ++v4;
    v5 += 36;
  }
  while ( v4 < 32 );
  return result;
}

//----- (0224DCA8) --------------------------------------------------------
int __fastcall Function_224dca8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  if ( Function_2249d38(a1) == 1 )
  {
    v11 = 0;
    v5 = *(uint *)(*(uint *)v4 + 56);
    for ( result = Function_20625b0(*(uint *)(*(uint *)v4 + 56), &v10, &v11, 1);
          result == 1;
          result = Function_20625b0(v5, &v10, &v11, 1) )
    {
      if ( GetSpriteID(v10) == 253 )
      {
        v7 = Function_224dddc(v4);
        Function_224df10(v4, v7, v10);
      }
    }
  }
  else
  {
    v8 = Function_22510d0(v4);
    v9 = Function_224d720(v8);
    Function_224dd24(v4, v8);
    result = Function_224dd24(v4, v9[2]);
  }
  return result;
}

//----- (0224DD24) --------------------------------------------------------
int __fastcall Function_224dd24(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = Function_224de40(a2);
  if ( result )
    result = Function_224dd40(v3, result, v2);
  return result;
}

//----- (0224DD40) --------------------------------------------------------
int __fastcall Function_224dd40(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  uint v8;
  int v9;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( !a2 )
    ErrorHandler();
  result = **(uint **)(v3 + 4);
  if ( result )
  {
    v7 = 0;
    do
    {
      v8 = *(uint *)(*(uint *)(*(uint *)(v3 + 4) + v7) + 20);
      if ( (v8 == 11 || Function_2249da8(v4, v8) == 1)
        && !Function_224de08(v4, **(ushort **)(*(uint *)(v3 + 4) + v7), v5) )
      {
        v9 = Function_224dddc(v4);
        Function_224dff4(v4, v9, *(uint *)(*(uint *)(v3 + 4) + v7), v5);
      }
      v7 += 4;
      result = *(uint *)(*(uint *)(v3 + 4) + v7);
    }
    while ( result );
  }
  return result;
}

//----- (0224DDA0) --------------------------------------------------------
int __fastcall Function_224dda0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_224de40(a2);
  v7 = v6;
  v8 = 4 * v5;
  result = Function_224de08(v4, **(ushort **)(*(uint *)(v6 + 4) + v8), v3);
  if ( !result )
  {
    v10 = Function_224dddc(v4);
    result = Function_224dff4(v4, v10, *(uint *)(*(uint *)(v7 + 4) + v8), v3);
  }
  return result;
}

//----- (0224DDDC) --------------------------------------------------------
int __fastcall Function_224dddc(int a1)
{
  int v1;
  uchar *v2;

  v1 = 0;
  v2 = (uchar *)(a1 + 5840);
  do
  {
    if ( !*v2 )
      return a1 + 5840 + 36 * v1;
    ++v1;
    v2 += 36;
  }
  while ( v1 < 32 );
  ErrorHandler();
  return 0;
}

//----- (0224DE08) --------------------------------------------------------
int __fastcall Function_224de08(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = 0;
  v4 = a1 + 5840;
  v5 = v4;
  do
  {
    if ( *(uchar *)v5 == 1 && a2 == *(ushort *)(v5 + 4) && a3 == *(ushort *)(v5 + 2) )
      return v4 + 36 * v3;
    ++v3;
    v5 += 36;
  }
  while ( v3 < 32 );
  return 0;
}

//----- (0224DE40) --------------------------------------------------------
int *__fastcall Function_224de40(int a1)
{
  int *v1;
  int v2;

  v1 = &dword_2252C38;
  v2 = 0;
  do
  {
    if ( *v1 == a1 )
      return v1;
    ++v2;
    v1 += 2;
  }
  while ( v2 < 8 );
  return 0;
}

//----- (0224DE60) --------------------------------------------------------
int __fastcall Function_224de60(int a1, int a2)
{
  return *(uint *)(Function_224de40(a1)[1] + 4 * a2);
}

//----- (0224DE70) --------------------------------------------------------
short *__fastcall Function_224de70(int a1)
{
  short *v1;
  uint v2;

  v1 = &word_2253830;
  v2 = 0;
  do
  {
    if ( (ushort)*v1 == a1 )
      return v1;
    ++v2;
    v1 += 16;
  }
  while ( v2 < 0x16 );
  ErrorHandler();
  return 0;
}

//----- (0224DE94) --------------------------------------------------------
uint *__fastcall Function_224de94(int a1, short a2, int a3, short a4, int a5, int a6, int a7)
{
  int v7;
  short v8;
  int v9;
  short v10;
  int v11;
  uint *v12;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  v11 = Function_22510d0(a1);
  v12 = InitSpriteStruct(*(uint *)(*(uint *)v7 + 56), v8, v10, 0, 0x2000, 0, v11);
  SaveSpritePositionZ((int)v12, v9);
  SetSpriteID((int)v12, 253);
  Function_20629b4(v12, a5, 0);
  Function_20629b4(v12, a7, 1);
  Function_20629b4(v12, a6, 2);
  UnSetSpriteFlag_Follow(v12, 1);
  Function_2062d80(v12, 0);
  SetUnsetSpriteFlags800000(v12, 1);
  Function_2062fc4((int)v12, 1);
  return v12;
}

//----- (0224DF10) --------------------------------------------------------
int __fastcall Function_224df10(int a1, int a2, uint *a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  uint *v9;
  uint *v10;
  int v11;
  uint *v12;
  int v13;
  uint *v14;
  int v15;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Function_20629d8(a3, 0);
  v7 = Function_20629d8(v3, 1);
  v8 = Function_20629d8(v3, 2);
  v9 = (uint *)Function_224de60(v7, v6);
  *(uchar *)v5 = 1;
  *(ushort *)(v5 + 2) = v7;
  v10 = (uint *)(v5 + 4);
  v11 = v9[1];
  *v10 = *v9;
  v10[1] = v11;
  v12 = (uint *)(v5 + 12);
  v13 = v9[3];
  *v12 = v9[2];
  v12[1] = v13;
  v14 = (uint *)(v5 + 20);
  v15 = v9[5];
  *v14 = v9[4];
  v14[1] = v15;
  *(ushort *)(v5 + 6) = LoadSpritePositionX((int)v3);
  *(ushort *)(v5 + 8) = LoadSpritePositionZ((int)v3);
  *(ushort *)(v5 + 10) = LoadSpritePositionY((int)v3);
  *(ushort *)(v5 + 12) = v8;
  *(uint *)(v5 + 28) = v3;
  *(uint *)(v5 + 32) = Function_224dfa0(v4, v5);
  UnSetSpriteFlag_Follow(v3, 1);
  Function_2062d80(v3, 0);
  SetUnsetSpriteFlags800000(v3, 1);
  return Function_2062fc4((int)v3, 1);
}

//----- (0224DFA0) --------------------------------------------------------
int __fastcall Function_224dfa0(int a1, int a2, int a3, int a4)
{
  short v5;
  short v6;
  short v7;
  short v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v5 = *(ushort *)(a2 + 6);
  v6 = *(ushort *)(a2 + 8);
  v7 = *(ushort *)(a2 + 10);
  v8 = *(uint *)(a2 + 20);
  v9 = 0;
  v10 = a1;
  if ( *(ushort *)(a2 + 2) == 580 && *(ushort *)(a2 + 4) == 1 )
    v9 = 1;
  return ((int (__fastcall *)(uint, int *))dword_21DF5B4[94])(*(uint *)(*(uint *)a1 + 64), &dword_2251464[1]);
}

//----- (0224DFF4) --------------------------------------------------------
int __fastcall Function_224dff4(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int v7;
  ushort *v8;
  uint *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  *(uchar *)a2 = 1;
  *(ushort *)(a2 + 2) = a4;
  v8 = a3;
  v9 = (uint *)(a2 + 4);
  v10 = *(uint *)v8;
  v11 = *((uint *)v8 + 1);
  v8 += 4;
  *v9 = v10;
  v9[1] = v11;
  v9 += 2;
  v12 = *(uint *)v8;
  v13 = *((uint *)v8 + 1);
  v8 += 4;
  *v9 = v12;
  v9[1] = v13;
  v9 += 2;
  v14 = *((uint *)v8 + 1);
  *v9 = *(uint *)v8;
  v9[1] = v14;
  *(uint *)(v5 + 28) = Function_224de94(v4, v6[1], (short)v6[2], v6[3], *v6, v6[4], v7);
  result = Function_224dfa0(v4, v5, v15, v16);
  *(uint *)(v5 + 32) = result;
  return result;
}

//----- (0224E044) --------------------------------------------------------
int *__fastcall Function_224e044(int a1, int a2)
{
  int *v2;
  int *v3;

  v2 = (int *)a2;
  v3 = *(int **)(a2 + 32);
  if ( v3 )
    Function_207136c(v3);
  return Call_FillMemWithValue(v2, 0, 0x24u);
}

//----- (0224E060) --------------------------------------------------------
int *__fastcall Function_224e060(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a2 + 28);
  if ( v4 )
    Function_2061af4(v4);
  return Function_224e044(v3, v2);
}

//----- (0224E07C) --------------------------------------------------------
uint *__fastcall Function_224e07c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;
  uint *v6;
  int v7;
  uint *v8;
  int v9;
  uint *v10;
  int v11;
  uint *v12;

  v3 = a3;
  v4 = a2;
  *(ushort *)(a2 + 2) = a3;
  v5 = (uint *)Function_224de60(a3, *(uint *)(a2 + 16));
  v6 = (uint *)(v4 + 4);
  v7 = v5[1];
  *v6 = *v5;
  v6[1] = v7;
  v8 = (uint *)(v4 + 12);
  v9 = v5[3];
  *v8 = v5[2];
  v8[1] = v9;
  v10 = (uint *)(v4 + 20);
  v11 = v5[5];
  *v10 = v5[4];
  v10[1] = v11;
  v12 = *(uint **)(v4 + 28);
  SaveSpritePositionX(*(uint *)(v4 + 28), *(short *)(v4 + 6));
  SaveSpritePositionZ((int)v12, *(short *)(v4 + 8));
  SaveSpritePositionY((int)v12, *(short *)(v4 + 10));
  Function_20629b4(v12, *(ushort *)(v4 + 4), 0);
  Function_20629b4(v12, v3, 1);
  return Function_20629b4(v12, *(ushort *)(v4 + 12), 2);
}

//----- (0224E0DC) --------------------------------------------------------
int __fastcall Function_224e0dc(int result, char a2)
{
  *(uchar *)(result + 1) = a2;
  return result;
}

//----- (0224E0E0) --------------------------------------------------------
int __fastcall Function_224e0e0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1 + 5840;
  if ( a2 == 25 )
    ErrorHandler();
  v4 = 0;
  do
  {
    if ( *(uchar *)v3 && v2 == *(ushort *)((char *)dword_22531D0 + (8 * *(uint *)(v3 + 20) & 0x7FFFF)) )
      return 1;
    ++v4;
    v3 += 36;
  }
  while ( v4 < 32 );
  return 0;
}

//----- (0224E120) --------------------------------------------------------
int __fastcall Function_224e120(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1 + 5840;
  if ( a2 == 5 )
    ErrorHandler();
  v4 = 0;
  do
  {
    if ( *(uchar *)v3 && v2 == *(ushort *)((char *)dword_22531D0 + (8 * *(uint *)(v3 + 20) & 0x7FFFF) + 2) )
      return 1;
    ++v4;
    v3 += 36;
  }
  while ( v4 < 32 );
  return 0;
}

//----- (0224E160) --------------------------------------------------------
int __fastcall Function_224e160(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 0;
  v3 = a1 + 5840;
  do
  {
    if ( *(uchar *)v3 && a2 == *(uint *)(v3 + 20) )
      return 1;
    ++v2;
    v3 += 36;
  }
  while ( v2 < 32 );
  return 0;
}

//----- (0224E188) --------------------------------------------------------
int __fastcall Function_224e188(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int result;

  v5 = 32;
  result = a1 + 5840;
  while ( !*(uchar *)result
       || *(ushort *)(result + 2) != a5
       || *(short *)(result + 8) != a3
       || *(short *)(result + 10) != a4
       || *(short *)(result + 6) != a2 )
  {
    result += 36;
    if ( !--v5 )
      return 0;
  }
  return result;
}

//----- (0224E1CC) --------------------------------------------------------
int __fastcall Function_224e1cc(int a1, int a2, int a3, int a4)
{
  int v4;
  short *v5;
  uint *v6;
  int v7;
  uint *v8;
  int v9;
  int *v10;
  int v11;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = (short *)Function_20715bc(a1);
  v6 = (uint *)(v4 + 16);
  v7 = *((uint *)v5 + 1);
  *v6 = *(uint *)v5;
  v6[1] = v7;
  v8 = (uint *)(v4 + 24);
  v9 = *((uint *)v5 + 3);
  *v8 = *((uint *)v5 + 2);
  v8[1] = v9;
  *(uint *)(v4 + 32) = Function_224d8a4(*((uint *)v5 + 3), (ushort)v5[3], &v13);
  if ( !v13 )
    Function_224da48(
      *((int (__fastcall **)(uint *, int, uint, int))v5 + 3),
      (ushort)v5[3],
      (int *)(*(uint *)(v4 + 32) + 4),
      (int *)(*(uint *)(v4 + 32) + 88));
  Function_2064450(*v5, v5[2], (uint *)(v4 + 4));
  *(uint *)(v4 + 8) = (v5[1] << 16) + 0x8000;
  v10 = &dword_2253298[3 * (ushort)v5[3]];
  *(uint *)(v4 + 4) += *v10;
  *(uint *)(v4 + 8) += v10[1];
  *(uint *)(v4 + 12) += v10[2];
  *(uchar *)(v4 + 2) = 31;
  *(uchar *)v4 = 0;
  if ( *((uint *)v5 + 2) == 1 )
  {
    v11 = LoadFlagAdress(*(uint *)(**((uint **)v5 + 3) + 12));
    if ( !Function_206afd0(v11) )
    {
      *(uchar *)(v4 + 2) = 0;
      *(uchar *)v4 = 1;
      *(uchar *)(v4 + 1) = 1;
    }
  }
  return 1;
}

//----- (0224E274) --------------------------------------------------------
int __fastcall Function_224e274(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( Function_224daec(*(ushort *)(a2 + 22)) == 1 )
    Function_2073aa8(*(uint *)(v2 + 32) + 88);
  return Function_224d938(*(uint *)(v2 + 28), *(ushort **)(v2 + 32));
}

//----- (0224E294) --------------------------------------------------------
uint __fastcall Function_224e294(int a1, uchar *a2)
{
  uchar *v2;
  uint result;
  int v4;

  v2 = a2;
  result = *a2;
  if ( result == 1 )
  {
    v4 = LoadFlagAdress(*(uint *)(**((uint **)a2 + 7) + 12));
    result = Function_206afd0(v4);
    if ( result == 1 )
    {
      v2[1] = 0;
      if ( (uchar)v2[2] < 0x1Fu )
      {
        if ( !v2[2] )
          Function_22511e0(1484);
        v2[2] = (int)(uchar)++v2[3] >> 1;
      }
      result = (uchar)v2[2];
      if ( result >= 0x1F )
      {
        v2[2] = 31;
        result = 0;
        *v2 = 0;
      }
    }
  }
  return result;
}

//----- (0224E2E4) --------------------------------------------------------
uint __fastcall Function_224e2e4(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(uchar *)(a2 + 1);
  if ( !*(uchar *)(a2 + 1) )
  {
    if ( *(uchar *)a2 == 1 )
    {
      Function_224da64(*(uint *)(a2 + 28), *(ushort *)(a2 + 22), *(uchar *)(a2 + 2), 1);
      Function_2073bb4((uint *)(*(uint *)(v2 + 32) + 4), (int *)(v2 + 4));
      Function_224dab8(*(uint *)(v2 + 28), *(ushort *)(v2 + 22), 0, v4);
      result = Function_224daac(*(uint *)(v2 + 28), *(ushort *)(v2 + 22), 31);
    }
    else
    {
      result = (uint)Function_2073bb4((uint *)(*(uint *)(a2 + 32) + 4), (int *)(a2 + 4));
    }
  }
  return result;
}

//----- (0224E330) --------------------------------------------------------
int __fastcall Function_224e330(int a1)
{
  return Function_2071598(a1) + 4;
}

//----- (0224E33C) --------------------------------------------------------
int *__fastcall Function_224e33c(int a1)
{
  return Call_FillMemWithValue((int *)(a1 + 216), 0, 0xACu);
}

//----- (0224E34C) --------------------------------------------------------
void Function_224e34c()
{
  ;
}

//----- (0224E350) --------------------------------------------------------
int __fastcall Function_224e350(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1 + 216;
  if ( *(uint *)(a1 + 216) )
    ErrorHandler();
  if ( !v2 )
    ErrorHandler();
  *(uint *)v3 = 1;
  result = 0;
  *(ushort *)(v3 + 4) = 0;
  *(ushort *)(v3 + 6) = 0;
  *(uint *)(v3 + 8) = v2;
  return result;
}

//----- (0224E37C) --------------------------------------------------------
int *__fastcall Function_224e37c(int a1, uint a2)
{
  uint v2;
  int v3;
  int *v4;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0xA0 )
    ErrorHandler();
  v4 = (int *)(v3 + 228);
  Call_FillMemWithValue(v4, 0, v2);
  return v4;
}

//----- (0224E39C) --------------------------------------------------------
int __fastcall Function_224e39c(int a1)
{
  return a1 + 228;
}

//----- (0224E3A0) --------------------------------------------------------
int __fastcall Function_224e3a0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;

  v2 = a1 + 216;
  v3 = *(uint *)(a1 + 224);
  v8 = a1;
  v9 = a2;
  if ( !v3 )
    ErrorHandler();
  v4 = 8 * *(ushort *)(v2 + 4);
  if ( *(uint *)(v3 + v4) == 18 )
  {
LABEL_9:
    *(uint *)v2 = 0;
    *(ushort *)(v2 + 4) = 0;
    result = 1;
  }
  else
  {
    while ( 1 )
    {
      v5 = (int)*(&off_2253BE4 + *(uint *)(v3 + v4));
      do
        v6 = (*(int (__fastcall **)(int, int, int, uint))(v5 + 4 * *(ushort *)(v2 + 6)))(
               v8,
               v9,
               v2 + 6,
               *(uint *)(v3 + 8 * *(ushort *)(v2 + 4) + 4));
      while ( v6 == 1 );
      if ( !v6 )
        break;
      *(ushort *)(v2 + 6) = 0;
      v4 = 8 * (ushort)++*(ushort *)(v2 + 4);
      if ( *(uint *)(v3 + v4) == 18 )
        goto LABEL_9;
    }
    result = 0;
  }
  return result;
}

//----- (0224E410) --------------------------------------------------------
int __fastcall Function_224e410(int a1)
{
  int v1;
  int *v2;

  v1 = 573;
  v2 = &dword_2252D38;
  do
  {
    if ( v1 == a1 )
      return v2[1];
    v2 += 2;
    v1 = *v2;
  }
  while ( *v2 != 593 );
  return 0;
}

//----- (0224E434) --------------------------------------------------------
int __fastcall Function_224e434(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short *v9;
  int v11;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v11 = a4;
  LoadFlagAdress(*(uint *)(*(uint *)a1 + 12));
  v7 = Function_22510d0(v4);
  v8 = Function_224e410(v7);
  v9 = (short *)v8;
  if ( !v8 || !*(uint *)(v8 + 12) )
    return 0;
  while ( v6 != v9[1]
       || v11 != *((uint *)v9 + 1)
       || v5 != *v9
       || Function_2251104(v4, (ushort)v9[4], (ushort)v9[5]) != 1 )
  {
    v9 += 8;
    if ( !*((uint *)v9 + 3) )
      return 0;
  }
  Function_224e4b0(v4, v9);
  return 1;
}

//----- (0224E498) --------------------------------------------------------
uint *__fastcall Function_224e498(int a1, int a2)
{
  int *v2;

  v2 = (int *)a1;
  Function_224e350(a1, a2);
  return OverWorldData_InitUnknownStruct01(*v2, (int)Function_224e4bc, (int)v2);
}

//----- (0224E4B0) --------------------------------------------------------
uint *__fastcall Function_224e4b0(int a1, int a2)
{
  return Function_224e498(a1, *(uint *)(a2 + 12));
}

//----- (0224E4BC) --------------------------------------------------------
BOOL __fastcall Function_224e4bc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = GetUnknownStruct01_c(a1);
  return Function_224e3a0(v2, v1) == 1;
}

//----- (0224E4D8) --------------------------------------------------------
int __fastcall Function_224e4d8(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int result;

  v3 = a3;
  Function_224e37c(a1, 4u);
  result = 1;
  *v3 = 1;
  return result;
}

//----- (0224E4E8) --------------------------------------------------------
int __fastcall Function_224e4e8(int a1, int a2, ushort *a3, int *a4)
{
  int v4;
  ushort *v5;
  int *v6;
  uint *v7;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  Function_224e39c(a1);
  v7 = GetAdressOfSpriteID(*(uint *)(*(uint *)v4 + 56), *v6);
  if ( !v7 )
    ErrorHandler();
  if ( IsSpriteMovable(v7) == 1 )
  {
    Function_2065638(v7, v6[1]);
    *v5 = 2;
  }
  return 0;
}

//----- (0224E520) --------------------------------------------------------
int __fastcall Function_224e520(int a1, int a2, int a3, int *a4)
{
  int v4;
  int *v5;
  uint *v6;
  int result;

  v4 = a1;
  v5 = a4;
  Function_224e39c(a1);
  v6 = GetAdressOfSpriteID(*(uint *)(*(uint *)v4 + 56), *v5);
  if ( !v6 )
    ErrorHandler();
  if ( Function_20656ac(v6) == 1 )
    result = 2;
  else
    result = 0;
  return result;
}

//----- (0224E550) --------------------------------------------------------
int __fastcall Function_224e550(int a1, int a2, ushort *a3, ushort *a4)
{
  int v4;
  ushort *v5;
  ushort *v6;
  int *v7;
  int v8;
  int v9;
  uint *v10;
  int v11;
  uint *v12;
  char v14;
  int v15;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = Function_224e37c(a1, 0x38u);
  v8 = Function_22510d0(v4);
  v9 = Function_224de08(v4, *v6, v8);
  v7[9] = v9;
  if ( !v9 )
    ErrorHandler();
  v7[3] = (short)v6[3] << 16;
  v10 = v7 + 6;
  v7[4] = (short)v6[4] << 16;
  v7[5] = (short)v6[5] << 16;
  v11 = *((uint *)v6 + 4);
  *v10 = *((uint *)v6 + 3);
  v10[1] = v11;
  v7[8] = *((uint *)v6 + 5);
  v7[12] = 12288;
  v7[11] = *(uint *)(Function_224e330(*(uint *)(v7[9] + 32)) + 4);
  if ( v6[1] == 1 )
  {
    v12 = (uint *)Function_205eb3c(*(uint *)(*(uint *)v4 + 60));
    SetUnsetSpriteFlags800000(v12, 1);
    Function_206309c(v12, &v14);
    v7[10] = v15;
  }
  Function_2005748(0x5CAu);
  *v5 = 1;
  return 0;
}

//----- (0224E5EC) --------------------------------------------------------
int __fastcall Function_224e5ec(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  ushort *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = a4;
  v4 = a1;
  v13 = a3;
  v5 = a4;
  v6 = 0;
  v7 = (uint *)Function_224e39c(a1);
  v8 = Function_224e330(*(uint *)(v7[9] + 32));
  if ( *(ushort *)(v5 + 2) == 1 )
    v6 = (uint *)Function_205eb3c(*(uint *)(*(uint *)v4 + 60));
  *(uint *)(v8 + 4) = v7[11] + v7[12];
  if ( v6 )
  {
    Function_206309c(v6, &v16);
    v17 = v7[10] + v7[12];
    Function_20630ac(v6, &v16);
    CopySprite70Struct(v6, &v16);
    Function_22511f4(v6, &v16);
  }
  v9 = v7[12];
  v10 = -v9;
  v7[12] = -v9;
  if ( v9 <= 0 )
  {
    if ( v10 <= 4096 )
    {
      v11 = v7[13] + 1;
      v7[13] = v11;
      if ( v11 >= 4 )
        v7[12] = 0;
    }
    else
    {
      v7[12] = v10 - 4096;
    }
    if ( !v7[12] )
    {
      *(uint *)(v8 + 4) = v7[11];
      if ( v6 )
      {
        Function_206309c(v6, &v14);
        v15 = v7[10];
        Function_20630ac(v6, &v14);
        CopySprite70Struct(v6, &v14);
        Function_22511f4(v6, &v14);
      }
      *v13 = 2;
    }
  }
  return 0;
}

//----- (0224E6B0) --------------------------------------------------------
int __fastcall Function_224e6b0(int a1, int a2, ushort *a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  uint *v7;
  uint *v8;
  int v9;
  int v10;
  uint *v11;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v19 = a4;
  v4 = a3;
  v16 = 0;
  v17 = 0;
  v5 = a1;
  v6 = a4;
  v18 = 0;
  v7 = (uint *)Function_224e39c(a1);
  v8 = (uint *)Function_224e330(*(uint *)(v7[9] + 32));
  if ( *v7 != v7[3] )
  {
    *v7 += v7[6];
    *v8 += v7[6];
    if ( *(ushort *)(v6 + 2) == 1 )
      v16 += v7[6];
  }
  v9 = v7[1];
  if ( v9 != v7[4] )
  {
    v7[1] = v9 + v7[7];
    v8[1] += v7[7];
    if ( *(ushort *)(v6 + 2) == 1 )
      v17 += v7[7];
  }
  v10 = v7[2];
  if ( v10 != v7[5] )
  {
    v7[2] = v10 + v7[8];
    v8[2] += v7[8];
    if ( *(ushort *)(v6 + 2) == 1 )
      v18 += v7[8];
  }
  if ( *(ushort *)(v6 + 2) == 1 )
  {
    v11 = (uint *)Function_205eb3c(*(uint *)(*(uint *)v5 + 60));
    CopySprite70Struct(v11, &v13);
    v13 += v16;
    v14 += v17;
    v15 += v18;
    Function_22511f4(v11, &v13);
  }
  if ( *v7 == v7[3] && v7[1] == v7[4] && v7[2] == v7[5] )
    *v4 = 3;
  return 0;
}

//----- (0224E798) --------------------------------------------------------
int __fastcall Function_224e798(uint *a1, int a2, int a3, short *a4)
{
  short *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  uint v13;
  uint *v15;

  v4 = a4;
  v15 = a1;
  if ( a4[1] == 1 )
  {
    v5 = (uint *)Function_205eb3c(*(uint *)(*a1 + 60));
    v6 = LoadSpritePositionX((int)v5);
    v7 = v4[3];
    v8 = 2 * v4[4] + LoadSpritePositionZ((int)v5);
    v9 = LoadSpritePositionY((int)v5);
    v10 = v4[5];
    SaveSpritePositionX((int)v5, v7 + v6);
    SaveSpritePositionZ((int)v5, v8);
    SaveSpritePositionY((int)v5, v10 + v9);
    CopySpritePositionsFromOldToNew((int)v5);
    v11 = *(uint **)(*v15 + 60);
    v8 /= 2;
    Function_224c378(v15, v7 + v6, v8, v10 + v9, 4);
    v12 = Function_224c4b8((int)v15, v7 + v6, v8, v10 + v9);
    v13 = Function_22510d8(v12);
    Function_205f098(v11, v13);
    if ( v13 == 1 )
      SetUnsetSpriteFlags800000(v5, 0);
    else
      SetUnsetSpriteFlags800000(v5, 1);
  }
  Function_20057a4(1482, 0);
  return 2;
}

//----- (0224E860) --------------------------------------------------------
int __fastcall Function_224e860(int a1, int a2, int a3, ushort *a4)
{
  Function_224f0d4(a1, *a4, a4[1]);
  return 2;
}

//----- (0224E870) --------------------------------------------------------
int __fastcall Function_224e870(uint *a1, int a2, int a3, uint *a4)
{
  Function_9_224f16c(*a1, *a4 & 0xFFFF);
  return 2;
}

//----- (0224E884) --------------------------------------------------------
int __fastcall Function_9_224e884(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 1 )
    ErrorHandler();
  return Function_224e91c(*(uint *)(*(uint *)(v3 + 4) + 36), &dword_2252414[9 * v2]);
}

//----- (0224E8A8) --------------------------------------------------------
int __fastcall Function_9_224e8a8(int a1)
{
  return Function_224e988(*(uint *)(*(uint *)(a1 + 4) + 36));
}

//----- (0224E8B4) --------------------------------------------------------
int __fastcall Function_224e8b4(int result, int a2, int a3, int a4)
{
  int (__fastcall *v4)(uint *, int, uint, int);
  uint *v5;
  int v6;

  v6 = a4;
  v4 = (int (__fastcall *)(uint *, int, uint, int))result;
  v5 = (uint *)(result + 7760);
  if ( !*(uint *)(result + 7760) )
  {
    *(uint *)(result + 7764) = Function_224d8a4(result, 20, &v6);
    if ( !v6 )
      Function_224da48(v4, 20, (int *)(v5[1] + 4), (int *)(v5[1] + 88));
    result = 1;
    *v5 = 1;
  }
  return result;
}

//----- (0224E8EC) --------------------------------------------------------
int __fastcall Function_224e8ec(int result)
{
  int v1;
  uint *v2;

  v1 = result;
  v2 = (uint *)(result + 7760);
  if ( *(uint *)(result + 7760) == 1 )
  {
    Function_224d938(result, *(ushort **)(result + 7764));
    Function_224d874(v1, 0);
    Function_224d7c0(v1, 0x14u);
    result = 0;
    *v2 = 0;
  }
  return result;
}

//----- (0224E91C) --------------------------------------------------------
int __fastcall Function_224e91c(int a1, int *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a1 + 7760;
  Function_224e8b4(a1, 7760, a3, a4);
  v12 = v5;
  v7 = &v14;
  v8 = 4;
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
  v13 = *(uint *)(v6 + 4);
  result = ((int (__fastcall *)(uint, int *))dword_21DF5B4[94])(*(uint *)(*(uint *)v5 + 64), &dword_2251464[21]);
  *(uint *)(v6 + 8) = result;
  return result;
}

//----- (0224E964) --------------------------------------------------------
int __fastcall Function_224e964(int a1)
{
  int v1;

  v1 = a1 + 7760;
  if ( !*(uint *)(a1 + 7768) )
    ErrorHandler();
  return *(uint *)(Function_2071598(*(uint *)(v1 + 8)) + 52);
}

//----- (0224E984) --------------------------------------------------------
void Function_224e984()
{
  ;
}

//----- (0224E988) --------------------------------------------------------
int __fastcall Function_224e988(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = *(int **)(a1 + 7768);
  if ( v2 )
    Function_207136c(v2);
  return Function_224e8ec(v1);
}

//----- (0224E9A4) --------------------------------------------------------
BOOL __fastcall Function_224e9a4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 == 25 )
    ErrorHandler();
  return *(uint *)(v3 + 7760) == 1 && v2 == 20;
}

//----- (0224E9CC) --------------------------------------------------------
BOOL __fastcall Function_224e9cc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 == 5 )
    ErrorHandler();
  return *(uint *)(v3 + 7760) == 1 && !v2;
}

//----- (0224E9F4) --------------------------------------------------------
BOOL __fastcall Function_224e9f4(int a1, int a2)
{
  return *(uint *)(a1 + 7760) == 1 && a2 == 20;
}

//----- (0224EA0C) --------------------------------------------------------
int __fastcall Function_224ea0c(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  v6 = (int *)Function_20715bc(a1);
  v7 = (int *)v5;
  v8 = 5;
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
  *(ushort *)(v5 + 46) = 1;
  v11 = 2 * *(char *)(v5 + 14);
  *(ushort *)(v5 + 56) = dword_22529F8[v11];
  *(ushort *)(v5 + 58) = HIWORD(dword_22529F8[v11]);
  *(ushort *)(v5 + 60) = dword_22529F8[v11 + 1];
  *(ushort *)(v5 + 62) = HIWORD(dword_22529F8[v11 + 1]);
  v12 = *(short *)(v5 + 8) << 16;
  v14 = *(short *)(v5 + 8) << 16;
  v15 = *(short *)(v5 + 10) << 16;
  v16 = *(short *)(v5 + 12) << 16;
  if ( *(uchar *)(v5 + 14) == 4 )
    v14 = v12 + 0x8000;
  Function_20715d4(v4, &v14);
  *(ushort *)(v5 + 46) = 0;
  return 1;
}

//----- (0224EA88) --------------------------------------------------------
int __fastcall Function_224ea88(int a1, int a2)
{
  return Function_2073a90(*(uint *)(a2 + 4) + 88);
}

//----- (0224EA94) --------------------------------------------------------
int __fastcall Function_224ea94(uint *a1, int a2)
{
  int v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;

  v2 = a2;
  v3 = a1;
  v4 = (uint *)(a2 + 8);
  if ( *(ushort *)(a2 + 44) )
  {
    if ( *(ushort *)(a2 + 44) != 1 )
      goto LABEL_12;
  }
  else
  {
    v5 = *(uchar *)(a2 + 15);
    if ( v5 == 1 )
    {
      Function_2005844(0x1E7u, 0);
    }
    else if ( v5 == 2 )
    {
      Function_2005748(0x649u);
    }
    ++*(ushort *)(v2 + 44);
  }
  Function_20715e4(v3, &v8);
  v8 += v4[5];
  v9 += v4[6];
  v10 += v4[7];
  v6 = *(uint *)(v2 + 48) + 1;
  *(uint *)(v2 + 48) = v6;
  if ( v6 >= v4[8] )
  {
    ++*(ushort *)(v2 + 44);
    *(uint *)(v2 + 52) = 1;
    *(ushort *)(v2 + 46) = 1;
  }
  Function_20715d4(v3, &v8);
LABEL_12:
  result = *(ushort *)(v2 + 46);
  if ( !*(ushort *)(v2 + 46) )
    result = Function_2073ac0((int *)(*(uint *)(v2 + 4) + 88), 4096, 1);
  return result;
}

//----- (0224EB34) --------------------------------------------------------
int *__fastcall Function_224eb34(int *result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6[3];
  int v7;

  v7 = a4;
  v4 = a2;
  if ( !*(ushort *)(a2 + 46) )
  {
    Function_20715e4(result, v6);
    Function_224dab8(*(uint *)v4, 20, 8, v5);
    result = Function_2073bc8((uint *)(*(uint *)(v4 + 4) + 4), v6, (int *)(v4 + 16), (ushort *)(v4 + 56));
  }
  return result;
}

//----- (0224EB68) --------------------------------------------------------
int __fastcall Function_224eb68(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int result;

  v1 = a1;
  v2 = Function_22510d0(a1);
  v3 = Function_224d720(v2);
  Function_224ec48(v1, v2);
  v4 = v3[2];
  result = 593;
  if ( v4 != 593 )
    result = Function_224ec48(v1, v4);
  return result;
}

//----- (0224EB94) --------------------------------------------------------
int __fastcall Function_224eb94(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1 + 6992;
  do
  {
    result = *(uint *)(v2 + 4);
    if ( result )
      result = Function_224ebb8(v2);
    ++v1;
    v2 += 24;
  }
  while ( v1 < 8 );
  return result;
}

//----- (0224EBB8) --------------------------------------------------------
int __fastcall Function_224ebb8(int a1)
{
  int v1;
  int *v2;
  int result;

  v1 = a1;
  v2 = *(int **)(a1 + 4);
  if ( v2 )
    Function_207136c(v2);
  result = 0;
  *(uint *)(v1 + 4) = 0;
  return result;
}

//----- (0224EBCC) --------------------------------------------------------
int __fastcall Function_224ebcc(int a1, ushort *a2, uint *a3, short a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;

  v4 = (int)a2;
  *a2 = a4;
  v5 = a2 + 4;
  v6 = a3[1];
  *v5 = *a3;
  v5[1] = v6;
  v5 += 2;
  v7 = a3[3];
  *v5 = a3[2];
  v5[1] = v7;
  v9 = a1;
  v10 = v4;
  result = ((int (__fastcall *)(uint, int (*)[5]))dword_21DF5B4[94])(
             *(uint *)(*(uint *)a1 + 64),
             off_2252F6C[*((ushort *)a3 + 2)]);
  *(uint *)(v4 + 4) = result;
  return result;
}

//----- (0224EC10) --------------------------------------------------------
int __fastcall Function_224ec10(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int result;
  ushort *v6;

  v2 = a2;
  v3 = a2[1];
  v4 = a1;
  for ( result = *(ushort *)(v3 + 4); result != 25; result = *(ushort *)(v3 + 4) )
  {
    if ( Function_2251104(v4, *(ushort *)(v3 + 12), *(ushort *)(v3 + 14)) == 1 )
    {
      v6 = (ushort *)Function_224ec70(v4);
      Function_224ebcc(v4, v6, (uint *)v3, *v2);
    }
    v3 += 16;
  }
  return result;
}

//----- (0224EC48) --------------------------------------------------------
int __fastcall Function_224ec48(int result, int a2)
{
  int v2;
  int *v3;

  v2 = 573;
  v3 = dword_2252548;
  while ( v2 != a2 )
  {
    v3 += 2;
    v2 = *v3;
    if ( *v3 == 593 )
      return result;
  }
  return Function_224ec10(result, v3);
}

//----- (0224EC70) --------------------------------------------------------
int __fastcall Function_224ec70(int a1)
{
  int v1;
  int result;

  v1 = 0;
  result = a1 + 6992;
  while ( *(uint *)(result + 4) )
  {
    ++v1;
    result += 24;
    if ( v1 >= 8 )
    {
      ErrorHandler();
      return 0;
    }
  }
  return result;
}

//----- (0224EC94) --------------------------------------------------------
int __fastcall Function_224ec94(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int result;

  v2 = a2;
  v3 = 0;
  v4 = (ushort *)(a1 + 6992);
  do
  {
    result = *v4;
    if ( result == v2 )
    {
      result = *((uint *)v4 + 1);
      if ( result )
        result = Function_224ebb8((int)v4);
    }
    ++v3;
    v4 += 12;
  }
  while ( v3 < 8 );
  return result;
}

//----- (0224ECC0) --------------------------------------------------------
int __fastcall Function_224ecc0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 0;
  v3 = a1 + 6992;
  do
  {
    if ( *(uint *)(v3 + 4) && *(ushort *)(v3 + 12) == a2 )
      return 1;
    ++v2;
    v3 += 24;
  }
  while ( v2 < 8 );
  return 0;
}

//----- (0224ECE8) --------------------------------------------------------
int __fastcall Function_224ece8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 0;
  v3 = a1 + 6992;
  do
  {
    if ( *(uint *)(v3 + 4) && LOWORD(dword_22531D0[2 * *(ushort *)(v3 + 12)]) == a2 )
      return 1;
    ++v2;
    v3 += 24;
  }
  while ( v2 < 8 );
  return 0;
}

//----- (0224ED20) --------------------------------------------------------
int __fastcall Function_224ed20(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 0;
  v3 = a1 + 6992;
  do
  {
    if ( *(uint *)(v3 + 4) && HIWORD(dword_22531D0[2 * *(ushort *)(v3 + 12)]) == a2 )
      return 1;
    ++v2;
    v3 += 24;
  }
  while ( v2 < 8 );
  return 0;
}

//----- (0224ED58) --------------------------------------------------------
int __fastcall Function_224ed58(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v11 = a4;
  v4 = a2;
  v5 = (int *)Function_20715bc(a1);
  v6 = v5[1];
  v7 = v5[1] + 8;
  v4[7] = *v5;
  v4[8] = v6;
  v4[9] = Function_224d8a4(*v5, *(ushort *)(v7 + 4), &v10);
  if ( !v10 )
    Function_224da48(
      (int (__fastcall *)(uint *, int, uint, int))v4[7],
      *(ushort *)(v7 + 4),
      (int *)(v4[9] + 4),
      (int *)(v4[9] + 88));
  Function_2064450(*(short *)(v7 + 6), *(short *)(v7 + 10), v4 + 1);
  v4[2] = (*(short *)(v7 + 8) << 16) + 0x8000;
  v8 = 3 * *(ushort *)(v7 + 4);
  v4[1] += dword_2253298[v8];
  v4[2] += dword_2253298[v8 + 1];
  v4[3] += dword_2253298[v8 + 2];
  return 1;
}

//----- (0224EDD8) --------------------------------------------------------
int __fastcall Function_224edd8(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( Function_224daec(*(ushort *)(*(uint *)(a2 + 32) + 12)) == 1 )
    Function_2073aa8(*(uint *)(v2 + 36) + 88);
  return Function_224d938(*(uint *)(v2 + 28), *(ushort **)(v2 + 36));
}

//----- (0224EDFC) --------------------------------------------------------
BOOL __fastcall Function_224edfc(int a1, int a2)
{
  int v2;
  int v3;
  BOOL result;

  v2 = a2;
  v3 = *(ushort *)(*(uint *)(a2 + 32) + 12);
  if ( Function_224daec(v3) == 1 )
    Function_2073ac0((int *)(*(uint *)(v2 + 36) + 88), 4096, 1);
  result = Function_224dbe4(*(uint *)(v2 + 28), v3, (int *)(v2 + 4));
  *(ushort *)(v2 + 2) = result;
  return result;
}

//----- (0224EE2C) --------------------------------------------------------
int *__fastcall Function_224ee2c(int a1, int a2)
{
  int *result;

  result = (int *)*(ushort *)(a2 + 2);
  if ( result == (int *)1 )
    result = Function_2073bb4((uint *)(*(uint *)(a2 + 36) + 4), (int *)(a2 + 4));
  return result;
}

//----- (0224EE40) --------------------------------------------------------
int __fastcall Function_224ee40(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int result;

  v1 = a1;
  v2 = Function_22510d0(a1);
  v3 = Function_224d720(v2);
  Function_224f078(v1, v2);
  v4 = v3[2];
  result = 593;
  if ( v4 != 593 )
    result = Function_224f078(v1, v4);
  return result;
}

//----- (0224EE6C) --------------------------------------------------------
void Function_224ee6c()
{
  ;
}

//----- (0224EE70) --------------------------------------------------------
uint __fastcall Function_224ee70(int a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  uint result;

  v2 = (int *)(a1 + 7184);
  v3 = 0;
  do
  {
    v4 = *v2;
    if ( *v2 && v4 == a2 )
    {
      Function_2061af4(v4);
      result = 0;
      *v2 = 0;
      return result;
    }
    ++v3;
    ++v2;
  }
  while ( v3 < 19 );
  return ErrorHandler();
}

//----- (0224EEA0) --------------------------------------------------------
int __fastcall Function_224eea0(int a1)
{
  int v1;
  uint *v2;

  v1 = 0;
  v2 = (uint *)(a1 + 7184);
  do
  {
    if ( !*v2 )
      return a1 + 7184 + 4 * v1;
    ++v1;
    ++v2;
  }
  while ( v1 < 19 );
  ErrorHandler();
  return 0;
}

//----- (0224EECC) --------------------------------------------------------
int __fastcall Function_224eecc(int a1, ushort *a2, int a3, int a4)
{
  ushort *v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a2;
  v9 = 0;
  v5 = a3;
  v6 = *(uint *)(*(uint *)a1 + 56);
  if ( !Function_20625b0(*(uint *)(*(uint *)a1 + 56), &v8, &v9, 1) )
    return 0;
  while ( v5 != GetSprite_c(v8) || *v4 != GetSpriteID(v8) )
  {
    if ( !Function_20625b0(v6, &v8, &v9, 1) )
      return 0;
  }
  if ( v4[1] != GetSpriteGraphic(v8) )
    ErrorHandler();
  return v8;
}

//----- (0224EF30) --------------------------------------------------------
int __fastcall Function_224ef30(int a1, ushort *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a1;
  v4 = *a2;
  v5 = a3;
  v6 = a2[1];
  LoadFlagAdress(*(uint *)(*(uint *)a1 + 12));
  if ( v4 == 6 )
  {
    if ( !v5 )
      return 0;
  }
  else if ( !Function_2251104(v3, v4, v6) )
  {
    return 0;
  }
  return 1;
}

//----- (0224EF64) --------------------------------------------------------
int __fastcall Function_224ef64(int a1, int *a2, int a3, int a4, ushort a5)
{
  int v5;
  int *v6;
  int *v7;
  int v8;
  int v10;
  uint *v11;
  int v12;
  int v13;

  v5 = a3;
  v6 = a2;
  v7 = (int *)a1;
  v13 = a4;
  v8 = Function_224eecc(a1, (ushort *)(a3 + 8), a4, a4);
  if ( v8 )
  {
    if ( Function_224f1cc(v7, v8) == 1 )
      return 0;
    *v6 = v8;
  }
  else
  {
    if ( !Function_224ef30((int)v7, (ushort *)v5, a5)
      || LoadFlagAdressAndCheckFlag(*v7, *(ushort *)(v5 + 16)) )
    {
      return 0;
    }
    v11 = CopySpriteStruct(*(uint *)(*v7 + 56), (int *)(v5 + 8), v13, v10);
    *v6 = (int)v11;
    if ( !v11 )
      ErrorHandler();
  }
  Function_2062d64((uint *)*v6, 1);
  if ( *(ushort *)(v5 + 4) == 1 )
    Function_224a390((int)v7, *v6, *(ushort *)(v5 + 6));
  Function_2062fc4(*v6, 1);
  UnSetSpriteFlag_Follow((uint *)*v6, 1);
  SetUnsetSpriteFlags800000((uint *)*v6, 1);
  SetSpriteFlags((uint *)*v6, 0x2000);
  if ( !v8 )
  {
    Function_2063340(
      *v6,
      *(ushort *)(v5 + 32),
      (*(uint *)(v5 + 36) >> 3) / 4096,
      *(ushort *)(v5 + 34),
      *(short *)(v5 + 20));
    v12 = ((int (__fastcall *)(int))dword_21EAF50[148])(*v6);
    if ( v12 )
      ((void (__fastcall *)(int, int))dword_21EDEB4[0])(*v6, v12);
  }
  Function_2062d64((uint *)*v6, 0);
  return 1;
}

//----- (0224F048) --------------------------------------------------------
int __fastcall Function_224f048(int a1, int *a2, int a3)
{
  int *v3;
  int v4;
  int i;
  int *v6;

  v3 = a2;
  v4 = a1;
  for ( i = a3; *v3; ++v3 )
  {
    v6 = (int *)Function_224eea0(v4);
    Function_224ef64(v4, v6, *v3, i, 0);
  }
  return 0;
}

//----- (0224F078) --------------------------------------------------------
int __fastcall Function_224f078(int result, int a2)
{
  int v2;
  int *v3;

  v2 = 573;
  v3 = &dword_2252EB4;
  while ( v2 != a2 )
  {
    v3 += 2;
    v2 = *v3;
    if ( *v3 == 593 )
      return result;
  }
  return Function_224f048(result, (int *)v3[1], a2);
}

//----- (0224F0A4) --------------------------------------------------------
int *__fastcall Function_224f0a4(int a1, int *a2)
{
  int *v2;
  int v3;
  int *v4;
  int *result;

  v2 = a2;
  v3 = 0;
  v4 = (int *)(a1 + 7184);
  do
  {
    result = (int *)*v4;
    if ( *v4 )
    {
      result = (int *)GetSprite_c((int)result);
      if ( v2 == result )
      {
        result = Function_2061af4(*v4);
        *v4 = 0;
      }
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 19 );
  return result;
}

//----- (0224F0D4) --------------------------------------------------------
int __fastcall Function_224f0d4(int a1, int a2, uint a3)
{
  int v3;
  int *v4;
  int v5;
  uint v6;
  int *v7;
  int v8;
  int *v9;
  int v11;

  v3 = a2;
  v4 = &dword_2252EB4;
  v5 = 573;
  v11 = a1;
  v6 = a3;
  while ( v5 != v3 )
  {
LABEL_12:
    v4 += 2;
    v5 = *v4;
    if ( *v4 == 593 )
    {
      ErrorHandler();
      return 0;
    }
  }
  v7 = (int *)v4[1];
  v8 = *v7;
  if ( !*v7 )
  {
LABEL_11:
    ErrorHandler();
    goto LABEL_12;
  }
  while ( *(ushort *)(v8 + 8) != v6 )
  {
    ++v7;
    v8 = *v7;
    if ( !*v7 )
      goto LABEL_11;
  }
  v9 = (int *)Function_224eea0(v11);
  Function_224ef64(v11, v9, *v7, v3, 1u);
  if ( v3 == 580 && v6 >= 0x87 && v6 <= 0x8F )
    Function_2062d80((uint *)*v9, 0);
  return *v9;
}

//----- (0224F158) --------------------------------------------------------
int __fastcall Function_9_224f158(int a1, uint a2)
{
  return Function_224f0d4(*(uint *)(*(uint *)(a1 + 4) + 36), **(uint **)(a1 + 28), a2);
}

//----- (0224F16C) --------------------------------------------------------
uint __fastcall Function_9_224f16c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v8 = 0;
  v3 = *(uint *)(a1 + 56);
  v4 = **(uint **)(a1 + 28);
  v6 = *(uint *)(*(uint *)(a1 + 4) + 36);
  if ( Function_20625b0(*(uint *)(a1 + 56), &v7, &v8, 1) != 1 )
    return ErrorHandler();
  while ( v2 != GetSpriteID(v7) || v4 != GetSprite_c(v7) )
  {
    if ( Function_20625b0(v3, &v7, &v8, 1) != 1 )
      return ErrorHandler();
  }
  return Function_224ee70(v6, v7);
}

//----- (0224F1CC) --------------------------------------------------------
int __fastcall Function_224f1cc(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;

  v2 = a2;
  v3 = 0;
  v4 = (uint *)(a1 + 7184);
  if ( !a2 )
    ErrorHandler();
  do
  {
    if ( *v4 == v2 )
      return 1;
    ++v3;
    ++v4;
  }
  while ( v3 < 19 );
  return 0;
}

//----- (0224F1F8) --------------------------------------------------------
int __fastcall Function_224f1f8(int a1, int a2, int a3, uint *a4)
{
  int v4;
  int v5;
  int *v6;

  v4 = 579;
  v5 = a1;
  v6 = &dword_225311C;
  do
  {
    if ( v4 == v5 && *((short *)v6 + 2) == a2 && *((short *)v6 + 3) == a3 )
    {
      *a4 = v6[2];
      return 1;
    }
    v6 += 3;
    v4 = *v6;
  }
  while ( *v6 != 593 );
  return 0;
}

//----- (0224F240) --------------------------------------------------------
int __fastcall Function_9_224f240(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = a2;
  v6 = **(uint **)(GetSpriteSpriteListFirstSprite(a1) + 28);
  v7 = LoadSpritePositionX(v4);
  v8 = LoadSpritePositionY(v4);
  v9 = GetWalkPositionXChange(v5);
  v10 = GetWalkPositionYChange(v5);
  return Function_224f1f8(v6, v7 + v9, v8 + v10, &v12);
}

//----- (0224F284) --------------------------------------------------------
int __fastcall Function_224f284(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = **(uint **)(GetSpriteSpriteListFirstSprite(a1) + 28);
  v5 = LoadSpritePositionX(v2);
  v6 = LoadSpritePositionY(v2);
  return Function_224f1f8(v4, v5, v6, v3);
}

//----- (0224F2B0) --------------------------------------------------------
int __fastcall Function_9_224f2b0(int a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  return Function_224f284(a1, &v5);
}

//----- (0224F2BC) --------------------------------------------------------
int __fastcall Function_9_224f2bc(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = malloc2(4u, 36);
  Call_FillMemWithValue((int *)v6, 0, 0x24u);
  *(uint *)v6 = *(uint *)(*(uint *)(v3 + 4) + 36);
  *(uint *)(v6 + 4) = v3;
  *(uint *)(v6 + 8) = v4;
  *(uint *)(v6 + 12) = v5;
  Function_224f284(v5, (uint *)(v6 + 20));
  v7 = *(uint *)(v6 + 20);
  if ( v7 <= 8 )
  {
    if ( v7 >= 6 && (v7 == 6 || v7 == 7 || v7 == 8) && !Function_2249e00(*(uint *)v6, v7) )
    {
      *(ushort *)(v6 + 18) = 1;
      return v6;
    }
LABEL_11:
    *(ushort *)(v6 + 18) = 2;
    return v6;
  }
  if ( v7 != 17 )
    goto LABEL_11;
  *(ushort *)(v6 + 18) = 0;
  return v6;
}

//----- (0224F324) --------------------------------------------------------
int __fastcall Function_224f324(int *a1)
{
  uint v1;
  uint v2;
  int *v3;
  uint *v4;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = a1;
  v4 = (uint *)a1[3];
  CopySprite70Struct((uint *)a1[3], &v8);
  v9 -= 0x8000;
  CopyToSprite70Struct(v4, &v8);
  if ( v9 > 7536640 )
    return 0;
  Function_2005748(0x623u);
  v9 = 7536640;
  v6 = LoadSpriteFaceDirection((int)v4);
  Function_20632d4((int)v4, &v8, v6);
  SetSprite_c((int)v4, 580);
  v7 = GetSpriteID((int)v4);
  switch ( v7 )
  {
    case 128:
      v2 = 3;
      v1 = 0;
      break;
    case 129:
      v2 = 4;
      v1 = 1;
      break;
    case 130:
      v2 = 5;
      v1 = 2;
      break;
  }
  Function_2249dc8(*v3, v2);
  Function_2249de4(*v3, v1);
  return 1;
}

//----- (0224F3BC) --------------------------------------------------------
int __fastcall Function_224f3bc(int a1)
{
  int v1;
  uint v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int result;
  uint *v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint *v20;
  int v21;
  int v22;
  ushort v23;
  uint v24;
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

  v1 = a1;
  v2 = *(ushort *)(a1 + 16);
  if ( v2 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_224F3D6 + v2) + 35976152);
  switch ( (uchar)v2 )
  {
    case 0:
      v3 = *(uint **)(v1 + 12);
      CopySprite70Struct(*(uint **)(v1 + 12), &v34);
      v35 -= 0x2000;
      CopyToSprite70Struct(v3, &v34);
      v4 = LoadSpriteFace2Direction((int)v3);
      Movement_AddDeltaPositionToSprite70(v3, v4, 0x2000, v5);
      v6 = *(uint *)(v1 + 24) + 1;
      *(uint *)(v1 + 24) = v6;
      if ( v6 >= 8 )
      {
        *(uint *)(v1 + 24) = 0;
        ++*(ushort *)(v1 + 16);
        goto LABEL_32;
      }
      result = 0;
      break;
    case 1:
      v8 = *(uint **)(v1 + 12);
      CopySprite70Struct(*(uint **)(v1 + 12), &v32);
      v33 -= 0x4000;
      CopyToSprite70Struct(v8, &v32);
      v9 = *(uint *)(v1 + 24) + 1;
      *(uint *)(v1 + 24) = v9;
      if ( v9 >= 4 )
      {
        v10 = 0;
        *(uint *)(v1 + 24) = 0;
        v11 = *(uint *)(v1 + 12);
        v12 = 0;
        Function_2249dc8(*(uint *)v1, *(uint *)(v1 + 20));
        v13 = GetSpriteID(v11);
        switch ( v13 )
        {
          case 128:
            v10 = 144;
            v12 = 3;
            break;
          case 129:
            v10 = 145;
            v12 = 4;
            break;
          case 130:
            v10 = 146;
            v12 = 5;
            break;
          default:
            ErrorHandler();
            break;
        }
        Function_2249de4(*(uint *)v1, v12);
        SetSpriteID(v11, v10);
        v14 = LoadSpriteFace2Direction(v11);
        v15 = LoadSpritePositionX(v11);
        v16 = LoadSpritePositionZ(v11);
        v17 = LoadSpritePositionY(v11);
        v18 = GetWalkPositionXChange(v14);
        v19 = GetWalkPositionYChange(v14);
        SaveSpritePositionX(v11, v15 + v18);
        SaveSpritePositionZ(v11, v16 - 4);
        SaveSpritePositionY(v11, v17 + v19);
        CopySpritePositionsFromOldToNew(v11);
        Function_206309c(*(uint **)(v1 + 12), &v30);
        *(uint *)(v1 + 28) = v31;
        *(uint *)(v1 + 32) = 4096;
        Function_2005748(0x623u);
        ++*(ushort *)(v1 + 16);
        goto LABEL_32;
      }
      result = 0;
      break;
    case 2:
      v20 = *(uint **)(v1 + 12);
      Function_206309c(*(uint **)(v1 + 12), &v28);
      v29 = *(uint *)(v1 + 28) + *(uint *)(v1 + 32);
      Function_20630ac(v20, &v28);
      *(uint *)(v1 + 32) = -*(uint *)(v1 + 32);
      v21 = *(uint *)(v1 + 24) + 1;
      *(uint *)(v1 + 24) = v21;
      if ( v21 == 7 )
        *(uint *)(v1 + 32) = 0;
      if ( *(uint *)(v1 + 24) >= 32 )
      {
        v22 = *(uint *)(v1 + 20);
        v23 = 0;
        v24 = 0;
        switch ( v22 )
        {
          case 6:
            v24 = 15;
            v23 = 5;
            break;
          case 7:
            v24 = 14;
            v23 = 7;
            break;
          case 8:
            v24 = 13;
            v23 = 6;
            break;
          default:
            ErrorHandler();
            break;
        }
        Function_2249de4(*(uint *)v1, v24);
        Function_203e8e0(*(uint *)(v1 + 8), v23, 0, 0);
        ++*(ushort *)(v1 + 16);
        goto LABEL_32;
      }
      result = 0;
      break;
    case 3:
      v25 = Function_2249e00(*(uint *)v1, 6u);
      v26 = v25 + Function_2249e00(*(uint *)v1, 7u);
      if ( v26 + Function_2249e00(*(uint *)v1, 8u) >= 3 )
      {
        v27 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 4) + 12));
        Function_206afc0(v27, 1);
      }
      result = 1;
      break;
    default:
LABEL_32:
      result = 0;
      break;
  }
  return result;
}

//----- (0224F5D8) --------------------------------------------------------
int __fastcall Function_224f5d8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  uint *v11;
  int v12;
  uint *v13;
  int v14;
  uint v15;
  uint v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v24 = a4;
  v4 = a1;
  v5 = *(ushort *)(a1 + 16);
  if ( !v5 )
  {
    v6 = *(uint **)(v4 + 12);
    CopySprite70Struct(*(uint **)(v4 + 12), &v22);
    v23 -= 0x2000;
    CopyToSprite70Struct(v6, &v22);
    v7 = LoadSpriteFace2Direction((int)v6);
    Movement_AddDeltaPositionToSprite70(v6, v7, 0x2000, v8);
    v9 = *(uint *)(v4 + 24) + 1;
    *(uint *)(v4 + 24) = v9;
    if ( v9 < 8 )
      return 0;
    *(uint *)(v4 + 24) = 0;
    ++*(ushort *)(v4 + 16);
    return 0;
  }
  if ( v5 == 1 )
  {
    v11 = *(uint **)(v4 + 12);
    CopySprite70Struct(*(uint **)(v4 + 12), &v20);
    v21 -= 0x4000;
    CopyToSprite70Struct(v11, &v20);
    v12 = *(uint *)(v4 + 24) + 1;
    *(uint *)(v4 + 24) = v12;
    if ( v12 < 4 )
      return 0;
    *(uint *)(v4 + 24) = 0;
    ++*(ushort *)(v4 + 16);
    return 0;
  }
  if ( v5 != 2 )
    return 0;
  v13 = *(uint **)(v4 + 12);
  CopySprite70Struct(*(uint **)(v4 + 12), &v18);
  v19 -= 0x8000;
  CopyToSprite70Struct(v13, &v18);
  v14 = *(uint *)(v4 + 24) + 1;
  *(uint *)(v4 + 24) = v14;
  if ( v14 < 40 )
    return 0;
  v15 = 0;
  v16 = 0;
  v17 = GetSpriteID(*(uint *)(v4 + 12));
  switch ( v17 )
  {
    case 128:
      v16 = 3;
      break;
    case 129:
      v15 = 1;
      v16 = 4;
      break;
    case 130:
      v15 = 2;
      v16 = 5;
      break;
    default:
      ErrorHandler();
      break;
  }
  Function_2249dc8(*(uint *)v4, v15);
  Function_2249de4(*(uint *)v4, v16);
  Function_224ee70(*(uint *)v4, *(uint *)(v4 + 12));
  return 1;
}

//----- (0224F6EC) --------------------------------------------------------
int __fastcall Function_9_224f6ec(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v5 = a1;
  v6 = *(ushort *)(a1 + 18);
  if ( *(ushort *)(a1 + 18) )
  {
    if ( v6 == 1 )
    {
      v4 = Function_224f3bc(a1);
    }
    else if ( v6 == 2 )
    {
      v4 = Function_224f5d8(a1, 2, a3, a4);
    }
  }
  else
  {
    v4 = Function_224f324((int *)a1);
  }
  if ( v4 == 1 )
    free(v5);
  return v4;
}

//----- (0224F724) --------------------------------------------------------
int __fastcall Function_224f724(int a1)
{
  int v1;
  ushort *v2;
  int v3;
  int result;

  v1 = a1;
  v2 = (ushort *)(a1 + 7340);
  if ( Function_22510d0(a1) == 582 )
  {
    v3 = LoadFlagAdress(*(uint *)(*(uint *)v1 + 12));
    if ( Function_206b5d8(v3) == 13 )
    {
      v2[3] = 1;
      *v2 = 12;
    }
  }
  result = -1;
  v2[1] = -1;
  return result;
}

//----- (0224F760) --------------------------------------------------------
void Function_224f760()
{
  ;
}

//----- (0224F764) --------------------------------------------------------
int __fastcall Function_224f764(short *a1)
{
  ushort *v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  ushort *v10;

  v1 = (ushort *)(a1 + 3670);
  v2 = Function_205eafc(*(uint *)(*(uint *)a1 + 60));
  if ( !v1[3] )
    *v1 = s32_div_f(*(uint *)(v2 + 4) - 4259840, 1223338);
  v3 = (short)*v1;
  if ( v3 >= 0 )
  {
    if ( v3 > 12 )
      *v1 = 12;
  }
  else
  {
    *v1 = 0;
  }
  v4 = 0;
  result = (short)v1[1];
  if ( (short)*v1 != result )
  {
    v6 = (int)(v1 + 20);
    v7 = v1;
    do
    {
      Function_224f86c(v7[4], 8324, *v1, v6);
      ++v4;
      v6 += 2;
      ++v7;
    }
    while ( v4 < 16 );
    v8 = 0;
    v9 = (int)(v1 + 116);
    v10 = v1;
    do
    {
      Function_224f86c(v10[36], 8390, *v1, v9);
      ++v8;
      v9 += 2;
      ++v10;
    }
    while ( v8 < 80 );
    v1[2] = 1;
    result = (short)*v1;
    v1[1] = result;
  }
  return result;
}

//----- (0224F804) --------------------------------------------------------
int __fastcall Function_224f804(int a1)
{
  int v1;
  int v2;
  int result;
  uchar *v4;
  int v5;

  v1 = a1;
  v2 = a1 + 7340;
  result = *(ushort *)(a1 + 7344);
  if ( result == 1 )
  {
    Function_201972c(2u, v2 + 40, 32, 0);
    v4 = Function_200a72c(*(int **)(v1 + 768), 0);
    v5 = NNS_G2dGetImagePaletteLocation((int)v4, 1);
    DC_FlushRange(v2 + 232, 160);
    GX_LoadOBJPltt(v2 + 232, v5, 0xA0u);
    result = 0;
    *(ushort *)(v2 + 4) = 0;
  }
  return result;
}

//----- (0224F854) --------------------------------------------------------
int __fastcall Function_224f854(int result, short a2)
{
  *(ushort *)(result + 7346) = a2;
  return result;
}

//----- (0224F860) --------------------------------------------------------
int __fastcall Function_224f860(int result, short a2)
{
  *(ushort *)(result + 7340) = a2;
  return result;
}

//----- (0224F86C) --------------------------------------------------------
ushort *__fastcall Function_224f86c(ushort a1, ushort a2, uint a3, ushort *a4)
{
  int v4;
  ushort *result;
  ushort varg_r0;
  ushort varg_r1;

  varg_r0 = a1;
  varg_r1 = a2;
  v4 = a3;
  result = a4;
  if ( a3 > 0x10 )
    v4 = 16;
  *a4 = 32
      * (((uint)varg_r0 << 22 >> 27)
       + ((int)((((uint)varg_r1 << 22 >> 27) - ((uint)varg_r0 << 22 >> 27)) * v4) >> 4)) | ((varg_r0 & 0x1F) + (((varg_r1 & 0x1F) - (varg_r0 & 0x1F)) * v4 >> 4)) | ((((uint)varg_r0 << 17 >> 27) + (ushort)((int)((((uint)varg_r1 << 17 >> 27) - ((uint)varg_r0 << 17 >> 27)) * v4) >> 4)) << 10);
  return result;
}

//----- (0224F8C4) --------------------------------------------------------
uint __fastcall Function_224f8c4(int a1, uint *a2, int a3, uint *a4)
{
  uint *v4;
  uint *v5;
  uint v6;
  int v7;
  uint *v8;
  int v9;
  uint *v10;
  uint v11;
  uint *v12;
  uint v13;
  uint result;

  v4 = a2;
  v5 = a2 + 1;
  v6 = *a2 & 0xFFFFFFE7 | 8 * *(uint *)a3 & 0x1F;
  *v4 = v6;
  *v4 = 2 * *(ushort *)(a3 + 4) & 3 | v6 & 0xFFFFFFFD;
  v4[7] = *(short *)(a3 + 12) << 12;
  v4[8] = *(short *)(a3 + 14) << 12;
  v4[9] = *(short *)(a3 + 16) << 12;
  v4[10] = *(short *)(a3 + 18) << 16;
  v4[11] = *(short *)(a3 + 20) << 16;
  v7 = *(short *)(a3 + 22);
  v8 = (uint *)(a3 + 24);
  v4[12] = v7 << 16;
  v9 = v8[1];
  *v5 = *v8;
  v5[1] = v9;
  v10 = v4 + 3;
  v4 += 13;
  *v10 = v8[2];
  v11 = *a4;
  v13 = a4[1];
  v12 = a4 + 2;
  *v4 = v11;
  v4[1] = v13;
  result = *v12;
  v4[2] = *v12;
  return result;
}

//----- (0224F930) --------------------------------------------------------
uint *__fastcall Function_224f930(uint *result, int a2, int a3, int a4)
{
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      result[19] = result + 17;
    }
    else if ( a2 == 2 )
    {
      result[19] = result + 18;
    }
  }
  else
  {
    result[19] = result + 16;
  }
  *(uint *)result[19] = 4096;
  result[20] = a3;
  result[21] = a4;
  *result |= 4u;
  return result;
}

//----- (0224F970) --------------------------------------------------------
int __fastcall Function_224f970(int a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int result;
  uint v9;
  uint v10;
  uint v11;

  v2 = (uint *)a2;
  v3 = *(uint *)(a2 + 16);
  if ( v3 != *(uint *)(a2 + 28) )
  {
    *(uint *)(a2 + 16) = v3 + *(uint *)(a2 + 4);
    *(uint *)(a2 + 52) += *(uint *)(a2 + 4);
  }
  v4 = *(uint *)(a2 + 20);
  if ( v4 != *(uint *)(a2 + 32) )
  {
    *(uint *)(a2 + 20) = v4 + *(uint *)(a2 + 8);
    *(uint *)(a2 + 56) += *(uint *)(a2 + 8);
  }
  v5 = *(uint *)(a2 + 24);
  if ( v5 != *(uint *)(a2 + 36) )
  {
    *(uint *)(a2 + 24) = v5 + *(uint *)(a2 + 12);
    *(uint *)(a2 + 60) += *(uint *)(a2 + 12);
  }
  if ( *(uint *)a2 & 4 )
  {
    **(uint **)(a2 + 76) += *(uint *)(a2 + 80);
    v6 = *(uint **)(a2 + 76);
    v7 = *(uint *)(a2 + 84);
    if ( *v6 < v7 )
    {
      if ( *v6 <= 4096 )
      {
        *v6 = 4096;
        v2[20] = -v2[20];
      }
    }
    else
    {
      *v6 = v7;
      v2[20] = -v2[20];
    }
  }
  if ( *v2 & 1 )
  {
    v9 = v2[7];
    v10 = v2[4];
    if ( v10 != v9 || v2[5] != v2[8] || v2[6] != v2[9] )
    {
      v11 = *v2 << 27 >> 30;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          a1 = v2[8] - v2[5];
        }
        else if ( v11 == 2 )
        {
          a1 = v2[9] - v2[6];
        }
      }
      else
      {
        a1 = v9 - v10;
      }
      if ( a1 < 0 )
        a1 = -a1;
      if ( a1 == 0x10000 )
        result = 2;
      else
        result = 0;
    }
    else
    {
      result = 3;
    }
  }
  else
  {
    if ( v2[4] == v2[10] && v2[5] == v2[11] && v2[6] == v2[12] )
    {
      if ( *v2 & 2 )
        Function_224cc50(a1, 0, 2);
      else
        Function_224cc50(a1, 0, 1);
      *v2 = *v2 & 0xFFFFFFFE | ((*v2 & 1) + 1) & 1;
    }
    result = 1;
  }
  return result;
}

//----- (0224FA94) --------------------------------------------------------
int __fastcall Function_224fa94(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;
  int result;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = (uint *)Function_205eb3c(*(uint *)(*(uint *)a1 + 60));
  v5 = (*(uint *)(v3 + 84) >> 4) / 4096;
  if ( *(ushort *)(v3 + 4) || v5 != -20 )
  {
    if ( *(ushort *)(v3 + 4) == 1 && v5 == -36 )
    {
      ChangeSpriteFaceDirection_WithCheck(v4, 2);
      Function_224a148(v2, (int)dword_2251888);
      Function_224a4d0(v2, (int)v4, 32, 31);
      ++*(ushort *)(v3 + 4);
    }
  }
  else
  {
    Function_224a148(v2, (int)dword_2251E40);
    Function_224a4d0(v2, (int)v4, -32, 72);
    ++*(ushort *)(v3 + 4);
  }
  result = *(ushort *)(v3 + 4);
  if ( result == 1 )
  {
    result = 6;
    v7 = *(short *)(v3 + 6);
    if ( v7 >= 0 )
    {
      *(ushort *)(v3 + 6) = v7 + 1;
      result = *(short *)(v3 + 6);
      if ( result >= 32 )
      {
        ChangeSpriteFaceDirection_WithCheck(v4, 0);
        result = -1;
        *(ushort *)(v3 + 6) = -1;
      }
    }
  }
  return result;
}

//----- (0224FB3C) --------------------------------------------------------
int __fastcall Function_224fb3c(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  int v6;
  int *v7;
  int v8;
  uint *v9;
  int v10;
  ushort *v11;
  uint *v12;
  int v14;
  int v15;
  int v16;
  char v17;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = Function_224e37c(a1, 0x98u);
  v8 = *(uint *)(*(uint *)v4 + 60);
  v9 = (uint *)Function_205eb3c(*(uint *)(*(uint *)v4 + 60));
  CopySprite70Struct(v9, &v17);
  ChangeSpriteFaceDirection_WithCheck(v9, 2);
  Function_224f8c4(v4, (uint *)v7 + 16, v6, (uint *)&v17);
  v7[17] >>= 1;
  v7[18] >>= 1;
  v7[19] >>= 1;
  *(ushort *)v7 = 32;
  Function_224a4d0(v4, (int)v9, 90, *(ushort *)v7);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  Function_20630ac(v9, &v14);
  v10 = Function_205ec04(v8);
  v11 = (ushort *)((int (*)(void))dword_21F6218[2468])();
  ((void (__fastcall *)(int, int, int))dword_21F6218[2471])(v10, 2, 5);
  ((void (__fastcall *)(int, int))dword_21F6218[2477])(v10, 116);
  v7[3] = *v11 << 12;
  v7[4] = v11[1] << 12;
  v7[5] = v11[2] << 12;
  v7[6] = -11520;
  v7[7] = 23040;
  v7[8] = 0;
  v7[12] = 368640;
  v7[13] = -8960;
  v12 = (uint *)((int (__fastcall *)(int))dword_21F6218[2489])(v10);
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 24576;
  v7[9] = 0;
  v7[10] = 0;
  v7[11] = 512;
  Function_2005748(0x5D0u);
  *v5 = 1;
  return 0;
}

//----- (0224FC2C) --------------------------------------------------------
int __fastcall Function_224fc2c(int a1, int a2, ushort *a3)
{
  int v3;
  uint *v4;
  int v5;
  int v6;
  ushort *v7;
  uint *v8;
  int v9;
  uint *v10;
  ushort *v12;

  v3 = a1;
  v12 = a3;
  v4 = (uint *)Function_205eb3c(*(uint *)(*(uint *)a1 + 60));
  v5 = Function_224e39c(v3);
  Function_224f970(v3, v5 + 64);
  CopyToSprite70Struct(v4, (int *)(v5 + 116));
  Function_224fa94(v3, v5);
  v6 = Function_205ec04(*(uint *)(*(uint *)v3 + 60));
  v7 = (ushort *)((int (*)(void))dword_21F6218[2468])();
  Function_2250f1c(v5 + 12, *(uint *)(v5 + 24));
  Function_2250f1c(v5 + 16, *(uint *)(v5 + 28));
  Function_2250f1c(v5 + 20, *(uint *)(v5 + 32));
  *v7 = *(uint *)(v5 + 12) / 4096;
  v7[1] = *(uint *)(v5 + 16) / 4096;
  v7[2] = *(uint *)(v5 + 20) / 4096;
  Function_2250f1c(v5 + 48, *(uint *)(v5 + 52));
  ((void (__fastcall *)(int, uint))dword_21F6218[2492])(
    v6,
    (uint)(16 * (*(uint *)(v5 + 48) + (*(uint *)(v5 + 48) >> 11 >> 20))) >> 16);
  v8 = (uint *)((int (__fastcall *)(int))dword_21F6218[2489])(v6);
  *v8 += *(uint *)(v5 + 36);
  v8[1] += *(uint *)(v5 + 40);
  v8[2] += *(uint *)(v5 + 44);
  if ( !--*(ushort *)v5 )
  {
    *(uint *)(v5 + 68) *= 2;
    *(uint *)(v5 + 72) *= 2;
    *(uint *)(v5 + 76) *= 2;
    Function_224f930((uint *)(v5 + 64), 0, 1024, 0x4000);
    v9 = Function_205ec04(*(uint *)(*(uint *)v3 + 60));
    v10 = (uint *)((int (__fastcall *)(int))dword_21F6218[2489])(v9);
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 40960;
    *(ushort *)(v5 + 8) = 70;
    *(ushort *)(v5 + 10) = -1;
    *(uint *)(v5 + 36) = 0;
    *(uint *)(v5 + 40) = 0;
    *(uint *)(v5 + 44) = s32_div_f(0xFFFF0000, *(short *)(v5 + 8));
    *(uint *)(v5 + 60) = s32_div_f(0xFFFFC000, *(short *)(v5 + 8));
    *v12 = 2;
  }
  return 0;
}

//----- (0224FD74) --------------------------------------------------------
int __fastcall Function_224fd74(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  uint *v8;
  uint *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  ushort *v15;
  uint *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v3 = a1;
  v15 = a3;
  v17 = Function_205ec04(*(uint *)(*(uint *)a1 + 60));
  v16 = (uint *)Function_205eb3c(*(uint *)(*(uint *)v3 + 60));
  v4 = Function_224e39c(v3);
  v5 = v4;
  v6 = (uint *)(v4 + 64);
  v18 = Function_224f970(v3, v4 + 64);
  CopyToSprite70Struct(v16, v6 + 13);
  v7 = v6[17];
  v19 = v6[16];
  v20 = v7;
  v21 = v6[18];
  v19 += *(uint *)(v5 + 56);
  Function_2063088(v16, &v19);
  Function_224fa94(v3, v5);
  v8 = (uint *)((int (__fastcall *)(int))dword_21F6218[2489])(v17);
  v9 = (uint *)((int (__fastcall *)(int))dword_21F6218[2486])(v17);
  v6 += 16;
  v10 = v6[1];
  *v9 = *v6;
  v9[1] = v10;
  v9[2] = v6[2];
  v11 = *(ushort *)(v5 + 4);
  if ( v11 == 1 )
  {
    v12 = *(short *)(v5 + 8);
    if ( v12 > 0 )
    {
      *(ushort *)(v5 + 8) = v12 - 1;
      *v8 += *(uint *)(v5 + 36);
      v8[1] += *(uint *)(v5 + 40);
      v8[2] += *(uint *)(v5 + 44);
      *(uint *)(v5 + 56) += *(uint *)(v5 + 60);
    }
  }
  else if ( v11 == 2 )
  {
    if ( *(short *)(v5 + 10) < 0 )
    {
      *(ushort *)(v5 + 10) = 30;
      *(uint *)(v5 + 36) = 0;
      *(uint *)(v5 + 40) = 0;
      *(uint *)(v5 + 44) = s32_div_f(0x6000u, *(short *)(v5 + 10));
      *(uint *)(v5 + 60) = s32_div_f(0x4000u, *(short *)(v5 + 10));
    }
    v13 = *(short *)(v5 + 10);
    if ( v13 > 0 )
    {
      *(ushort *)(v5 + 10) = v13 - 1;
      *v8 += *(uint *)(v5 + 36);
      v8[1] += *(uint *)(v5 + 40);
      v8[2] += *(uint *)(v5 + 44);
      *(uint *)(v5 + 56) += *(uint *)(v5 + 60);
    }
  }
  if ( v18 == 2 )
  {
    *(ushort *)v5 = 16;
    Function_224a4d0(v3, (int)v16, 90, *(ushort *)v5);
    *(uint *)(v5 + 24) = -23040;
    *(uint *)(v5 + 28) = 0;
    *(uint *)(v5 + 32) = 0;
    *(uint *)(v5 + 36) = 0;
    *(uint *)(v5 + 40) = 0;
    *(uint *)(v5 + 44) = -1792;
    *(uint *)(v5 + 52) = -28160;
    ((void (__fastcall *)(int, int))dword_21F6218[2481])(v17, 32);
    *v15 = 3;
  }
  if ( v18 == 3 )
    ErrorHandler();
  return 0;
}

//----- (0224FEDC) --------------------------------------------------------
int __fastcall Function_224fedc(uint *a1, int a2, ushort *a3, short *a4)
{
  uint *v4;
  int v5;
  uint *v6;
  uint *v7;
  int v8;
  ushort *v9;
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint *v16;
  int v17;
  uint *v18;
  int v19;
  ushort *v21;
  short *v22;
  int v23;
  int v24;
  int v25;

  v4 = a1;
  v21 = a3;
  v22 = a4;
  v5 = Function_205ec04(*(uint *)(*a1 + 60));
  v6 = (uint *)Function_205eb3c(*(uint *)(*v4 + 60));
  v7 = (uint *)Function_224e39c((int)v4);
  v8 = Function_224f970((int)v4, (int)(v7 + 16));
  CopyToSprite70Struct(v6, v7 + 29);
  Function_2063088(v6, v7 + 32);
  Function_224fa94((int)v4, (int)v7);
  v9 = (ushort *)((int (__fastcall *)(int))dword_21F6218[2468])(v5);
  Function_2250f1c(v7 + 3, v7[6]);
  Function_2250f1c(v7 + 4, v7[7]);
  Function_2250f1c(v7 + 5, v7[8]);
  *v9 = v7[3] / 4096;
  v9[1] = v7[4] / 4096;
  v9[2] = v7[5] / 4096;
  Function_2250f1c(v7 + 12, v7[13]);
  ((void (__fastcall *)(int, uint))dword_21F6218[2492])(
    v5,
    (uint)(16 * (v7[12] + (v7[12] >> 11 >> 20))) >> 16);
  v10 = (uint *)((int (__fastcall *)(int))dword_21F6218[2489])(v5);
  *v10 += v7[9];
  v10[1] += v7[10];
  v10[2] += v7[11];
  if ( v8 == 3 )
  {
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v11 = LoadSpritePositionX((int)v6);
    v12 = v22[3];
    v13 = 2 * v22[4] + LoadSpritePositionZ((int)v6);
    v14 = LoadSpritePositionY((int)v6);
    v15 = v22[5];
    SaveSpritePositionX((int)v6, v12 + v11);
    SaveSpritePositionZ((int)v6, v13);
    SaveSpritePositionY((int)v6, v15 + v14);
    CopySpritePositionsFromOldToNew((int)v6);
    ChangeSpriteFaceDirection_WithCheck(v6, 2);
    ChangeSpriteFace2Direction((int)v6, 2);
    Function_2063088(v6, &v23);
    Function_20630ac(v6, &v23);
    Function_224c378(v4, v12 + v11, v13 / 2, v15 + v14, 4);
    Function_205f098(*(uint **)(*v4 + 60), 1u);
    SetUnsetSpriteFlags800000(v6, 0);
    v16 = (uint *)((int (__fastcall *)(int))dword_21F6218[2489])(v5);
    v17 = v24;
    *v16 = v23;
    v16[1] = v17;
    v16[2] = v25;
    v18 = (uint *)((int (__fastcall *)(int))dword_21F6218[2486])(v5);
    v19 = v24;
    *v18 = v23;
    v18[1] = v19;
    v18[2] = v25;
    ((void (__fastcall *)(int, int))dword_21F6218[2492])(v5, 270);
    ((void (__fastcall *)(int, int, int))dword_21F6218[2471])(v5, 2, 1);
    ((void (__fastcall *)(int, int))dword_21F6218[2481])(v5, 116);
    Function_20057a4(1488, 0);
    *v21 = 4;
    Function_2249d70((int)v4, 7u);
    Function_224dda0((int)v4, 579, 0);
  }
  return 0;
}

//----- (022500E0) --------------------------------------------------------
int __fastcall Function_22500e0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  uint v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v9 = 10;
  v10 = 6;
  v5 = Function_224e39c(a1);
  v6 = (uint *)Function_205eb3c(*(uint *)(*(uint *)v4 + 60));
  if ( !IsSpriteMovable(v6) )
    return 0;
  v8 = *(ushort *)(v5 + 2);
  if ( v8 >= 2 )
    return 2;
  Function_2065638(v6, *(&v9 + v8));
  ++*(ushort *)(v5 + 2);
  return 0;
}

//----- (02250138) --------------------------------------------------------
int __fastcall Function_2250138(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_205eb3c(*(uint *)(*(uint *)a1 + 60));
  result = *(ushort *)(v3 + 4);
  if ( !*(ushort *)(v3 + 4) && (*(uint *)(v3 + 72) >> 4) / 4096 == 20 )
  {
    Function_224a148(v2, (int)dword_2251C48);
    result = *(ushort *)(v3 + 4) + 1;
    *(ushort *)(v3 + 4) = result;
  }
  return result;
}

//----- (02250170) --------------------------------------------------------
int __fastcall Function_2250170(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  int v6;
  int *v7;
  int v8;
  uint *v9;
  int v10;
  ushort *v11;
  uint *v12;
  int v14;
  int v15;
  int v16;
  char v17;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = Function_224e37c(a1, 0x8Cu);
  v8 = *(uint *)(*(uint *)v4 + 60);
  v9 = (uint *)Function_205eb3c(*(uint *)(*(uint *)v4 + 60));
  CopySprite70Struct(v9, &v17);
  ChangeSpriteFaceDirection_WithCheck(v9, 3);
  Function_224f8c4(v4, (uint *)v7 + 13, v6, (uint *)&v17);
  v7[14] >>= 1;
  v7[15] >>= 1;
  v7[16] >>= 1;
  *(ushort *)v7 = 4;
  Function_224a4d0(v4, (int)v9, -90, *(ushort *)v7);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  Function_20630ac(v9, &v14);
  v10 = Function_205ec04(v8);
  v11 = (ushort *)((int (*)(void))dword_21F6218[2468])();
  ((void (__fastcall *)(int, int, int))dword_21F6218[2471])(v10, 3, 1);
  ((void (__fastcall *)(int, int))dword_21F6218[2477])(v10, 116);
  v7[2] = *v11 << 12;
  v7[3] = v11[1] << 12;
  v7[4] = v11[2] << 12;
  v7[5] = -92160;
  v7[6] = 184320;
  v7[7] = 0;
  v7[11] = 1105920;
  v7[12] = 112640;
  v12 = (uint *)((int (__fastcall *)(int))dword_21F6218[2489])(v10);
  *v12 = 0;
  v12[1] = 0;
  v12[2] = -28672;
  v7[8] = 0;
  v7[9] = 0;
  v7[10] = 0;
  Function_2005748(0x5D0u);
  *v5 = 1;
  return 0;
}

//----- (02250260) --------------------------------------------------------
int __fastcall Function_2250260(int a1, int a2, ushort *a3)
{
  int v3;
  uint *v4;
  int v5;
  int v6;
  ushort *v7;
  uint *v8;
  int v9;
  uint *v10;
  ushort *v12;

  v3 = a1;
  v12 = a3;
  v4 = (uint *)Function_205eb3c(*(uint *)(*(uint *)a1 + 60));
  v5 = Function_224e39c(v3);
  Function_224f970(v3, v5 + 52);
  CopyToSprite70Struct(v4, (int *)(v5 + 104));
  Function_2250138(v3, v5);
  v6 = Function_205ec04(*(uint *)(*(uint *)v3 + 60));
  v7 = (ushort *)((int (*)(void))dword_21F6218[2468])();
  Function_2250f1c(v5 + 8, *(uint *)(v5 + 20));
  Function_2250f1c(v5 + 12, *(uint *)(v5 + 24));
  Function_2250f1c(v5 + 16, *(uint *)(v5 + 28));
  *v7 = *(uint *)(v5 + 8) / 4096;
  v7[1] = *(uint *)(v5 + 12) / 4096;
  v7[2] = *(uint *)(v5 + 16) / 4096;
  Function_2250f1c(v5 + 44, *(uint *)(v5 + 48));
  ((void (__fastcall *)(int, uint))dword_21F6218[2492])(
    v6,
    (uint)(16 * (*(uint *)(v5 + 44) + (*(uint *)(v5 + 44) >> 11 >> 20))) >> 16);
  v8 = (uint *)((int (__fastcall *)(int))dword_21F6218[2489])(v6);
  *v8 += *(uint *)(v5 + 32);
  v8[1] += *(uint *)(v5 + 36);
  v8[2] += *(uint *)(v5 + 40);
  if ( !--*(ushort *)v5 )
  {
    *(uint *)(v5 + 56) *= 2;
    *(uint *)(v5 + 60) *= 2;
    *(uint *)(v5 + 64) *= 2;
    Function_224f930((uint *)(v5 + 52), 0, 512, 0x4000);
    v9 = Function_205ec04(*(uint *)(*(uint *)v3 + 60));
    v10 = (uint *)((int (__fastcall *)(int))dword_21F6218[2489])(v9);
    *v10 = 0;
    v10[1] = 0;
    v10[2] = -28672;
    *(uint *)(v5 + 32) = 0;
    *(uint *)(v5 + 36) = 0;
    *(uint *)(v5 + 40) = 4352;
    *v12 = 2;
  }
  return 0;
}

//----- (02250388) --------------------------------------------------------
int __fastcall Function_2250388(int a1, int a2, ushort *a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  uint *v8;
  ushort *v10;
  uint *v11;
  int v12;

  v3 = a1;
  v10 = a3;
  v12 = Function_205ec04(*(uint *)(*(uint *)a1 + 60));
  v11 = (uint *)Function_205eb3c(*(uint *)(*(uint *)v3 + 60));
  v4 = Function_224e39c(v3);
  v5 = Function_224f970(v3, v4 + 52);
  CopyToSprite70Struct(v11, (int *)(v4 + 104));
  Function_2063088(v11, (int *)(v4 + 116));
  Function_2250138(v3, v4);
  v6 = (uint *)((int (__fastcall *)(int))dword_21F6218[2486])(v12);
  v7 = *(uint *)(v4 + 120);
  *v6 = *(uint *)(v4 + 116);
  v6[1] = v7;
  v6[2] = *(uint *)(v4 + 124);
  if ( *(ushort *)(v4 + 4) == 1 )
  {
    v8 = (uint *)((int (__fastcall *)(int))dword_21F6218[2489])(v12);
    if ( v8[2] < 40960 )
    {
      *v8 += *(uint *)(v4 + 32);
      v8[1] += *(uint *)(v4 + 36);
      v8[2] += *(uint *)(v4 + 40);
    }
  }
  if ( v5 == 2 )
  {
    *(ushort *)v4 = 2;
    Function_224a4d0(v3, (int)v11, -90, *(ushort *)v4);
    *(uint *)(v4 + 20) = 184320;
    *(uint *)(v4 + 24) = 0;
    *(uint *)(v4 + 28) = 0;
    *(uint *)(v4 + 32) = 0;
    *(uint *)(v4 + 36) = 0;
    *(uint *)(v4 + 40) = -8192;
    *(uint *)(v4 + 48) = 143360;
    ((void (__fastcall *)(int, int))dword_21F6218[2481])(v12, 32);
    *v10 = 3;
  }
  if ( v5 == 3 )
    ErrorHandler();
  return 0;
}

//----- (02250468) --------------------------------------------------------
int __fastcall Function_2250468(uint *a1, int a2, ushort *a3, short *a4)
{
  uint *v4;
  int v5;
  uint *v6;
  uint *v7;
  int v8;
  ushort *v9;
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint *v16;
  int v17;
  uint *v18;
  int v19;
  ushort *v21;
  short *v22;
  int v23;
  int v24;
  int v25;

  v4 = a1;
  v21 = a3;
  v22 = a4;
  v5 = Function_205ec04(*(uint *)(*a1 + 60));
  v6 = (uint *)Function_205eb3c(*(uint *)(*v4 + 60));
  v7 = (uint *)Function_224e39c((int)v4);
  v8 = Function_224f970((int)v4, (int)(v7 + 13));
  CopyToSprite70Struct(v6, v7 + 26);
  Function_2063088(v6, v7 + 29);
  Function_2250138((int)v4, (int)v7);
  v9 = (ushort *)((int (__fastcall *)(int))dword_21F6218[2468])(v5);
  Function_2250f1c(v7 + 2, v7[5]);
  Function_2250f1c(v7 + 3, v7[6]);
  Function_2250f1c(v7 + 4, v7[7]);
  *v9 = v7[2] / 4096;
  v9[1] = v7[3] / 4096;
  v9[2] = v7[4] / 4096;
  Function_2250f1c(v7 + 11, v7[12]);
  ((void (__fastcall *)(int, uint))dword_21F6218[2492])(
    v5,
    (uint)(16 * (v7[11] + (v7[11] >> 11 >> 20))) >> 16);
  v10 = (uint *)((int (__fastcall *)(int))dword_21F6218[2489])(v5);
  *v10 += v7[8];
  v10[1] += v7[9];
  v10[2] += v7[10];
  if ( v8 == 3 )
  {
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v11 = LoadSpritePositionX((int)v6);
    v12 = v22[3];
    v13 = 2 * v22[4] + LoadSpritePositionZ((int)v6);
    v14 = LoadSpritePositionY((int)v6);
    v15 = v22[5];
    SaveSpritePositionX((int)v6, v12 + v11);
    SaveSpritePositionZ((int)v6, v13);
    SaveSpritePositionY((int)v6, v15 + v14);
    CopySpritePositionsFromOldToNew((int)v6);
    ChangeSpriteFaceDirection_WithCheck(v6, 3);
    ChangeSpriteFace2Direction((int)v6, 3);
    Function_2063088(v6, &v23);
    Function_20630ac(v6, &v23);
    Function_224c378(v4, v12 + v11, v13 / 2, v15 + v14, 4);
    Function_205f098(*(uint **)(*v4 + 60), 5u);
    SetUnsetSpriteFlags800000(v6, 1);
    v16 = (uint *)((int (__fastcall *)(int))dword_21F6218[2489])(v5);
    v17 = v24;
    *v16 = v23;
    v16[1] = v17;
    v16[2] = v25;
    v18 = (uint *)((int (__fastcall *)(int))dword_21F6218[2486])(v5);
    v19 = v24;
    *v18 = v23;
    v18[1] = v19;
    v18[2] = v25;
    ((void (__fastcall *)(int, int))dword_21F6218[2492])(v5, 90);
    ((void (__fastcall *)(int, int, int))dword_21F6218[2471])(v5, 3, 5);
    ((void (__fastcall *)(int, int))dword_21F6218[2481])(v5, 116);
    Function_20057a4(1488, 0);
    *v21 = 4;
  }
  return 0;
}

//----- (02250650) --------------------------------------------------------
int __fastcall Function_2250650(int a1)
{
  int v1;
  int v2;
  uint *v3;
  uint v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v6 = 151;
  v7 = 147;
  v8 = 115;
  v2 = Function_224e39c(a1);
  v3 = (uint *)Function_205eb3c(*(uint *)(*(uint *)v1 + 60));
  if ( !IsSpriteMovable(v3) )
    return 0;
  v5 = *(ushort *)(v2 + 2);
  if ( v5 >= 3 )
    return 2;
  Function_2065638(v3, *(&v6 + v5));
  ++*(ushort *)(v2 + 2);
  return 0;
}

//----- (022506AC) --------------------------------------------------------
int __fastcall Function_22506ac(int a1, int a2, ushort *a3, uint *a4)
{
  ushort *v4;

  v4 = a3;
  Function_203e8e0(a2, *a4 & 0xFFFF, 0, 0);
  ++*v4;
  return 0;
}

//----- (022506CC) --------------------------------------------------------
int Function_22506cc()
{
  return 2;
}

//----- (022506D0) --------------------------------------------------------
int __fastcall Function_22506d0(int a1, int a2, int a3, uint *a4)
{
  uint *v4;
  int v5;

  v4 = a4;
  v5 = LoadFlagAdress(*(uint *)(*(uint *)a1 + 12));
  Function_206b5e8(v5, *v4);
  return 2;
}

//----- (022506EC) --------------------------------------------------------
int __fastcall Function_22506ec(int a1, int a2, int a3, uint *a4)
{
  uint *v4;
  int v5;

  v4 = a4;
  v5 = LoadFlagAdress(*(uint *)(*(uint *)a1 + 12));
  Function_206afb0(v5, 1, *v4);
  return 2;
}

//----- (02250704) --------------------------------------------------------
int __fastcall Function_2250704(int a1, int a2, int a3, uint *a4)
{
  Function_2249dc8(a1, *a4);
  return 2;
}

//----- (02250710) --------------------------------------------------------
int __fastcall Function_2250710(int a1, int a2, int a3, uint *a4)
{
  Function_2249de4(a1, *a4);
  return 2;
}

//----- (0225071C) --------------------------------------------------------
int __fastcall Function_225071c(int a1, int a2, int a3, int *a4)
{
  ushort *v4;

  v4 = (ushort *)a3;
  Function_224e91c(a1, a4, a3, (int)a4);
  *v4 = 1;
  return 0;
}

//----- (02250730) --------------------------------------------------------
int __fastcall Function_2250730(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_224e964(a1) != 1 )
    return 0;
  Function_224e988(v1);
  return 2;
}

//----- (0225074C) --------------------------------------------------------
ushort *__fastcall Function_225074c(uint *a1)
{
  ushort *v1;
  uint v2;
  ushort *v3;
  int v4;
  ushort *result;

  v1 = (ushort *)&word_2252284;
  v2 = 0;
  v3 = a1 + 7;
  v4 = *a1 / 4096 & 0xFFFF;
  do
  {
    result = Function_224f86c(*v1, 0, v4, v3);
    ++v2;
    ++v3;
    ++v1;
  }
  while ( v2 < 0x10 );
  return result;
}

//----- (02250780) --------------------------------------------------------
int __fastcall Function_9_2250780(int a1)
{
  ushort *v1;
  int result;
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;

  v1 = *(ushort **)(*(uint *)(a1 + 4) + 36);
  result = v1[3894];
  if ( result == 1 )
  {
    v3 = Function_224e39c((int)v1);
    v4 = GetSpriteListAdr18(*(uint *)(*(uint *)v1 + 56));
    v5 = (uint *)((int (__fastcall *)(int))dword_21EDA38[158])(v4);
    v6 = Function_2022d98(v5, 230);
    v7 = Function_2022f14(v6);
    result = Function_201dc68(1, 8 * v7 & 0x7FFFF, v3 + 28, 32);
  }
  return result;
}

//----- (022507C4) --------------------------------------------------------
int __fastcall Function_22507c4(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  int *v5;

  v3 = a1;
  v4 = a3;
  v5 = Function_224e37c(a1, 0x3Cu);
  v5[6] = Function_224f0d4(v3, 582, 0x80u);
  v5[3] = 655360;
  Function_20630ac((uint *)v5[6], v5 + 2);
  *v4 = 1;
  return 0;
}

//----- (022507FC) --------------------------------------------------------
int __fastcall Function_22507fc(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  uint *v5;

  v3 = a1;
  v4 = a3;
  v5 = (uint *)Function_224e39c(a1);
  if ( !((int (__fastcall *)(uint))dword_21EAF50[148])(v5[6]) )
    return 0;
  *v5 = 0x10000;
  Function_225074c(v5);
  *(ushort *)(v3 + 7788) = 1;
  v5[1] = 0;
  Function_224f854(v3, 1);
  *(ushort *)(v3 + 7790) = 2;
  Function_2005748(0x5D1u);
  *v4 = 2;
  return 1;
}

//----- (02250854) --------------------------------------------------------
int __fastcall Function_2250854(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a3;
  v5 = Function_224e39c(a1);
  v6 = *(uint *)(v5 + 4) + 364;
  *(uint *)(v5 + 4) = v6;
  if ( v6 >= 49152 )
    *(uint *)(v5 + 4) = 49152;
  Function_224f860(v3, (uint)(*(uint *)(v5 + 4) + (*(uint *)(v5 + 4) >> 11 >> 20)) >> 12);
  v7 = *(uint *)(v5 + 12);
  if ( v7 < 0x10000 )
    v8 = 2048;
  else
    v8 = 4096;
  *(uint *)(v5 + 12) = v7 - v8;
  if ( *(uint *)(v5 + 12) < 0 && *(uint *)(v5 + 4) >= 49152 )
  {
    *(uint *)(v5 + 12) = 0;
    *v4 = 3;
  }
  Function_20630ac(*(uint **)(v5 + 24), (int *)(v5 + 8));
  return 0;
}

//----- (022508C0) --------------------------------------------------------
int __fastcall Function_22508c0(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;
  uint *v5;
  int v6;
  bool v7;

  v3 = a3;
  v4 = Function_224e39c(a1);
  v5 = (uint *)v4;
  v6 = ((int (__fastcall *)(uint))dword_21EAF50[148])(*(uint *)(v4 + 24));
  Function_2021430(v6);
  v7 = *v5 - 728 < 0;
  *v5 -= 728;
  if ( v7 )
  {
    *v5 = 0;
    *v3 = 4;
  }
  Function_225074c(v5);
  return 0;
}

//----- (022508F4) --------------------------------------------------------
int __fastcall Function_22508f4(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_224e39c(a1);
  v3 = *(uint *)(v2 + 20) + 1;
  *(uint *)(v2 + 20) = v3;
  if ( v3 < 30 )
    return 0;
  *(ushort *)(v1 + 7788) = 0;
  return 2;
}

//----- (02250918) --------------------------------------------------------
int __fastcall Function_2250918(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  int *v5;

  v3 = a1;
  v4 = a3;
  v5 = Function_224e37c(a1, 0x24u);
  v5[8] = Function_224f0d4(v3, 579, 0x83u);
  Function_2005844(0x1E0u, 0);
  v5[1] = 1;
  *v4 = 1;
  return 0;
}

//----- (0225094C) --------------------------------------------------------
int __fastcall Function_225094c(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;
  int v5;

  v3 = a3;
  v4 = 0x2000;
  v5 = Function_224e39c(a1);
  if ( (*(uint *)(v5 + 24) >> 4) / 4096 < 16 )
    v4 = 0x4000;
  *(uint *)(v5 + 24) += v4;
  Function_20630ac(*(uint **)(v5 + 32), (int *)(v5 + 20));
  if ( (*(uint *)(v5 + 24) >> 4) / 4096 >= 17 )
    *v3 = 2;
  return 0;
}

//----- (02250994) --------------------------------------------------------
int __fastcall Function_2250994(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;

  v3 = a3;
  v4 = Function_224e39c(a1);
  *(uint *)(v4 + 28) -= 4096;
  Function_20630ac(*(uint **)(v4 + 32), (int *)(v4 + 20));
  if ( (*(uint *)(v4 + 28) >> 4) / 4096 <= -2 )
  {
    *(uint *)(v4 + 12) = *(uint *)(v4 + 24);
    *v3 = 3;
  }
  return 0;
}

//----- (022509D4) --------------------------------------------------------
int __fastcall Function_22509d4(int a1, int a2, ushort *a3, int a4)
{
  ushort *v4;
  int v5;
  int *v6;
  int v7;
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
  v4 = a3;
  v10 = 0;
  v11 = 2048;
  v12 = 4096;
  v13 = 0x2000;
  v14 = 0x4000;
  v15 = 24576;
  v16 = 28672;
  v17 = 0x8000;
  v5 = Function_224e39c(a1);
  v6 = (int *)v5;
  *(uint *)(v5 + 24) = *(uint *)(v5 + 12) + *(&v10 + (*(uint *)v5 >> 1));
  Function_20630ac(*(uint **)(v5 + 32), (int *)(v5 + 20));
  v7 = *v6 + v6[1];
  *v6 = v7;
  if ( v7 >= 15 || v7 <= 0 )
  {
    v6[1] = -v6[1];
    if ( !*v6 )
    {
      v8 = v6[2] + 1;
      v6[2] = v8;
      if ( v8 >= 3 )
      {
        v6[6] = v6[3] + *(&v10 + (*v6 >> 1));
        *v4 = 4;
      }
    }
  }
  return 0;
}

//----- (02250A58) --------------------------------------------------------
int __fastcall Function_2250a58(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;

  v3 = a3;
  v4 = Function_224e39c(a1);
  *(uint *)(v4 + 28) += 4096;
  Function_20630ac(*(uint **)(v4 + 32), (int *)(v4 + 20));
  if ( (*(uint *)(v4 + 28) >> 4) / 4096 == 1 )
    *v3 = 5;
  return 0;
}

//----- (02250A90) --------------------------------------------------------
int __fastcall Function_2250a90(int a1)
{
  int v1;
  uint *v2;
  int v3;

  v1 = a1;
  v2 = (uint *)Function_224e39c(a1);
  v3 = v2[4];
  if ( v3 < 0x2000 )
    v2[4] = v3 + 512;
  v2[6] -= v2[4];
  Function_20630ac((uint *)v2[8], v2 + 5);
  if ( (v2[6] >> 4) / 4096 > 0 )
    return 0;
  Function_224ee70(v1, v2[8]);
  Function_2249dc8(v1, 0xAu);
  Function_2249dc8(v1, 0xDu);
  v2[8] = Function_224f0d4(v1, 580, 0x84u);
  return 2;
}

//----- (02250AFC) --------------------------------------------------------
int __fastcall Function_2250afc(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  int *v5;

  v3 = a1;
  v4 = a3;
  v5 = Function_224e37c(a1, 0x18u);
  v5[5] = Function_224f0d4(v3, 579, 0x84u);
  Function_2005844(0x1E2u, 0);
  *v4 = 1;
  return 0;
}

//----- (02250B30) --------------------------------------------------------
int __fastcall Function_2250b30(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;
  int *v5;

  v3 = a3;
  v4 = 0x2000;
  v5 = (int *)Function_224e39c(a1);
  if ( (v5[2] >> 4) / 4096 < 12 )
    v4 = 0x4000;
  v5[2] += v4;
  Function_20630ac((uint *)v5[5], v5 + 1);
  if ( (v5[2] >> 4) / 4096 >= 13 )
  {
    v5[4] = (int)Malloc_MovementScript(v5[5], (int)dword_2251E74);
    *v3 = 2;
  }
  return 0;
}

//----- (02250B84) --------------------------------------------------------
int __fastcall Function_2250b84(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;

  v3 = a3;
  v4 = Function_224e39c(a1);
  if ( Function_206574c(*(uint *)(v4 + 16)) != 1 )
    return 0;
  Function_2065758(*(uint *)(v4 + 16));
  *v3 = 3;
  return 1;
}

//----- (02250BAC) --------------------------------------------------------
int __fastcall Function_2250bac(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)Function_224e39c(a1);
  if ( *v2 < 0x2000 )
    *v2 += 512;
  v2[2] -= *v2;
  Function_20630ac((uint *)v2[5], v2 + 1);
  if ( (v2[2] >> 4) / 4096 > 0 )
    return 0;
  Function_224ee70(v1, v2[5]);
  Function_2249dc8(v1, 0xBu);
  Function_2249dc8(v1, 0xEu);
  v2[5] = Function_224f0d4(v1, 580, 0x85u);
  return 2;
}

//----- (02250C14) --------------------------------------------------------
int __fastcall Function_2250c14(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  int *v5;

  v3 = a1;
  v4 = a3;
  v5 = Function_224e37c(a1, 0x18u);
  v5[6] = Function_224f0d4(v3, 579, 0x85u);
  Function_2005844(0x1E1u, 0);
  *v4 = 1;
  return 0;
}

//----- (02250C48) --------------------------------------------------------
int __fastcall Function_2250c48(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  int v5;
  int *v6;
  int *v7;
  int *v8;
  int v9;
  int v11;
  char v12;
  char v13;

  v3 = a1;
  v4 = a3;
  v5 = 0x2000;
  v6 = (int *)Function_224e39c(a1);
  if ( (v6[2] >> 4) / 4096 < 8 )
    v5 = 0x4000;
  v6[2] += v5;
  Function_20630ac((uint *)v6[6], v6 + 1);
  if ( (v6[2] >> 4) / 4096 >= 9 )
  {
    Function_2250f44(v3, &v13, &v12, &v11);
    if ( v11 == 67 )
    {
      v7 = dword_2252E14;
      v8 = dword_2252D80;
    }
    else
    {
      v7 = dword_2252E64;
      v8 = dword_2252DC8;
    }
    v6[4] = (int)Malloc_MovementScript(v6[6], (int)v8);
    v9 = Function_205eb3c(*(uint *)(*(uint *)v3 + 60));
    v6[5] = (int)Malloc_MovementScript(v9, (int)v7);
    *v4 = 2;
  }
  return 0;
}

//----- (02250CD8) --------------------------------------------------------
int __fastcall Function_2250cd8(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;

  v3 = a3;
  v4 = Function_224e39c(a1);
  if ( Function_206574c(*(uint *)(v4 + 16)) != 1 || Function_206574c(*(uint *)(v4 + 20)) != 1 )
    return 0;
  Function_2065758(*(uint *)(v4 + 16));
  Function_2065758(*(uint *)(v4 + 20));
  *v3 = 3;
  return 1;
}

//----- (02250D10) --------------------------------------------------------
int __fastcall Function_2250d10(int a1)
{
  int v1;
  uint *v2;

  v1 = a1;
  v2 = (uint *)Function_224e39c(a1);
  if ( *v2 < 0x2000 )
    *v2 += 512;
  v2[2] -= *v2;
  Function_20630ac((uint *)v2[6], v2 + 1);
  if ( (v2[2] >> 4) / 4096 > 0 )
    return 0;
  Function_224ee70(v1, v2[6]);
  Function_2249dc8(v1, 0xCu);
  Function_2249dc8(v1, 0xFu);
  v2[6] = Function_224f0d4(v1, 580, 0x83u);
  return 2;
}

//----- (02250D78) --------------------------------------------------------
int __fastcall Function_2250d78(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  int *v5;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = Function_224e37c(a1, 4u);
  Function_224a148(v3, (int)dword_2251D68);
  *((ushort *)v5 + 1) = 36;
  result = 1;
  *(ushort *)v5 = 1;
  *v4 = 1;
  return result;
}

//----- (02250DA0) --------------------------------------------------------
int __fastcall Function_2250da0(int a1)
{
  int v1;
  short *v2;
  int result;

  v1 = a1;
  v2 = (short *)Function_224e39c(a1);
  if ( --v2[1] > 0 || (v2[1] = 48, Function_20057a4(1484, 0), Function_224b64c(v1, *v2), ++*v2, *v2 < 4) )
    result = 0;
  else
    result = 2;
  return result;
}

//----- (02250DE8) --------------------------------------------------------
int __fastcall Function_2250de8(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int *v4;
  int result;

  v3 = a3;
  v4 = Function_224e37c(a1, 4u);
  *((ushort *)v4 + 1) = 16;
  *(ushort *)v4 = 3;
  result = 1;
  *v3 = 1;
  return result;
}

//----- (02250E00) --------------------------------------------------------
int __fastcall Function_2250e00(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  short *v5;

  v3 = a1;
  v4 = a3;
  v5 = (short *)Function_224e39c(a1);
  if ( --v5[1] <= 0 )
  {
    if ( *v5 < 1 )
    {
      v5[1] = 8;
      *v4 = 2;
    }
    else
    {
      v5[1] = 48;
      Function_20057a4(1484, 0);
      Function_224b624(v3, *v5);
      --*v5;
    }
  }
  return 0;
}

//----- (02250E50) --------------------------------------------------------
int __fastcall Function_2250e50(int a1)
{
  int v1;
  int v2;

  v1 = Function_224e39c(a1);
  v2 = 2;
  if ( (short)--*(ushort *)(v1 + 2) > 0 )
    v2 = 0;
  return v2;
}

//----- (02250E6C) --------------------------------------------------------
BOOL __fastcall Function_2250e6c(int a1, int a2, int a3, short *a4)
{
  int v4;
  int v5;
  int v6;
  BOOL result;

  v4 = a4[1];
  result = 0;
  if ( a2 >= v4 && a2 <= v4 + a4[4] )
  {
    v5 = a4[2];
    if ( a3 >= v5 && a3 <= v5 + a4[5] )
    {
      v6 = *a4;
      if ( a1 >= v6 && a1 <= v6 + a4[3] )
        result = 1;
    }
  }
  return result;
}

//----- (02250EB0) --------------------------------------------------------
int __fastcall Function_2250eb0(uint a1, uint a2)
{
  int v2;
  int v3;

  v2 = (short)a2 - (short)a1;
  v3 = v2;
  if ( v2 < 0 )
    v3 = (short)a1 - (short)a2;
  if ( v3 > 0x8000 )
  {
    v2 = ((uint)(v3 + 0x8000) >> 31) + __ROR4__(((v3 + 0x8000) << 17) - ((uint)(v3 + 0x8000) >> 31), 17);
    if ( a1 < a2 )
      v2 = -v2;
  }
  return v2;
}

//----- (02250EE8) --------------------------------------------------------
uint __fastcall Function_2250ee8(ushort *a1, short a2)
{
  ushort *v2;
  int v3;
  uint result;
  short v5;

  v2 = a1;
  *a1 += a2;
  v3 = (short)*a1;
  if ( v3 >= 0 )
  {
    result = s32_div_f(v3, 360);
    *v2 = v5;
  }
  else
  {
    result = 0;
    do
      *v2 += 360;
    while ( (short)*v2 < 0 );
  }
  return result;
}

//----- (02250F1C) --------------------------------------------------------
uint __fastcall Function_2250f1c(int *a1, int a2)
{
  int *v2;
  int v3;
  uint result;
  bool v5;
  int v6;

  v2 = a1;
  v3 = *a1 + a2;
  *v2 = v3;
  if ( v3 >= 0 )
  {
    result = s32_div_f(v3, 1474560);
    *v2 = v6;
  }
  else
  {
    result = 1474560;
    do
    {
      v5 = *v2 + 1474560 < 0;
      *v2 += 1474560;
    }
    while ( v5 );
  }
  return result;
}

//----- (02250F44) --------------------------------------------------------
int __fastcall Function_2250f44(int a1, int *a2, int *a3, int *a4)
{
  int *v4;
  int *v5;
  int *v6;
  int v7;
  int result;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = Function_205eb3c(*(uint *)(*(uint *)a1 + 60));
  *v4 = LoadSpritePositionX(v7);
  *v5 = LoadSpritePositionZ(v7) / 2;
  result = LoadSpritePositionY(v7);
  *v6 = result;
  return result;
}

//----- (02250F74) --------------------------------------------------------
BOOL __fastcall Function_9_2250f74(int a1)
{
  int v1;
  int v2;

  v1 = GetOverWorldData_VariableAreaAdresses(a1);
  v2 = Function_2027860(v1);
  return Function_2027f80(v2) == 9;
}

//----- (02250F90) --------------------------------------------------------
BOOL __fastcall Function_9_2250f90(int a1, int a2, int a3, int a4)
{
  int v4;
  BOOL result;
  int v6;

  v4 = Function_224c55c(*(uint **)(*(uint *)(a1 + 4) + 36), a2, a3, a4, a4, v6);
  if ( ((v4 + 2) & 0xFFFFu) > 1 )
    result = 2 * (v4 & 0x8000u) >> 16 != 0;
  else
    result = 1;
  return result;
}

//----- (02250FBC) --------------------------------------------------------
BOOL __fastcall Function_9_2250fbc(int a1, int a2, int a3, int a4)
{
  int v5;

  return ((Function_224c55c(*(uint **)(*(uint *)(a1 + 4) + 36), a2, a3, a4, a4, v5) + 2) & 0xFFFFu) > 1;
}

//----- (02250FD8) --------------------------------------------------------
int __fastcall Function_9_2250fd8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;

  v4 = a2;
  v5 = *(uint *)(*(uint *)(a1 + 4) + 36);
  v6 = a3;
  v7 = a4;
  v8 = Function_224c494(*(uint *)(*(uint *)(a1 + 4) + 36));
  return Function_224c324(v5, v4, v6, v7, v8);
}

//----- (02251000) --------------------------------------------------------
uint __fastcall Function_9_2251000(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint result;
  uint *v9;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v9 = *(uint **)(*(uint *)(a1 + 4) + 36);
  v7 = (short)Function_224c494((int)v9);
  if ( Function_224c324((int)v9, v4, v5, v6, v7) == 1 )
    result = Function_224c378(v9, v4, v5, v6, v7);
  else
    result = ErrorHandler();
  return result;
}

//----- (02251044) --------------------------------------------------------
int __fastcall Function_9_2251044(int a1, int a2, int a3, int a4, int *a5)
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

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v12 = a4;
  v8 = GetOverWorldData_VariableAreaAdresses(a1);
  v9 = Function_2027860(v8);
  if ( Function_2027f80(v9) == 9 )
  {
    v11 = Function_224c55c(*(uint **)(*(uint *)(v5 + 4) + 36), v6, v7, v12, v12, v13);
    if ( ((v11 + 2) & 0xFFFFu) > 1 )
    {
      *a5 = (uchar)v11;
      result = 1;
    }
    else
    {
      *a5 = Function_205df98();
      result = 0;
    }
  }
  else
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (02251094) --------------------------------------------------------
uint __fastcall Function_9_2251094(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  uint *v6;
  uint *v7;
  int *v8;
  int v9;
  int v10;
  char v12;

  v4 = a1;
  v5 = a2;
  v6 = (uint *)a3;
  v7 = (uint *)a4;
  v8 = LoadFromNARC_8(181, 4u, a3, a4);
  Function_224bf8c((int)v8, &v12, v9, v10);
  Function_224c050(&v12, v4, v5, v6, v7);
  Function_224bfe0((int)&v12);
  return Call_FS_CloseFile(v8);
}

//----- (022510D0) --------------------------------------------------------
int __fastcall Function_22510d0(int a1)
{
  return **(uint **)(*(uint *)a1 + 28);
}

//----- (022510D8) --------------------------------------------------------
int __fastcall Function_22510d8(char a1)
{
  int result;

  switch ( a1 )
  {
    case 0:
      result = 2;
      break;
    case 1:
      result = 3;
      break;
    case 2:
      result = 4;
      break;
    case 3:
      result = 5;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (02251104) --------------------------------------------------------
int __fastcall Function_2251104(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  char v6;
  int result;

  v3 = a1;
  v4 = a3;
  v5 = LoadFlagAdress(*(uint *)(*(uint *)a1 + 12));
  switch ( v6 )
  {
    case 0:
      result = 1;
      break;
    case 1:
      if ( Function_2249e00(v3, v4) == 1 )
        goto LABEL_17;
      result = 1;
      break;
    case 2:
      if ( Function_2249e00(v3, v4) != 1 )
        goto LABEL_17;
      result = 1;
      break;
    case 3:
      if ( v4 != Function_206b5d8(v5) )
        goto LABEL_17;
      result = 1;
      break;
    case 4:
      if ( Function_206b5d8(v5) > v4 )
        goto LABEL_17;
      result = 1;
      break;
    case 5:
      if ( Function_206b5d8(v5) < v4 )
        goto LABEL_17;
      result = 1;
      break;
    case 7:
      if ( Function_206afb0(v5, 2, v4) )
        goto LABEL_17;
      result = 1;
      break;
    case 8:
      if ( v4 != Function_206b6dc(v5) )
        goto LABEL_17;
      result = 1;
      break;
    default:
LABEL_17:
      result = 0;
      break;
  }
  return result;
}

//----- (022511A0) --------------------------------------------------------
BOOL __fastcall Function_9_22511a0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  BOOL result;

  v4 = a2;
  v5 = *(uint *)(*(uint *)(a1 + 4) + 36);
  v6 = a3;
  v7 = a4;
  result = 0;
  if ( Function_22510d0(*(uint *)(*(uint *)(a1 + 4) + 36)) == 582 && v6 == 15 && v4 == 15 && v7 == 1 )
  {
    v8 = LoadFlagAdress(*(uint *)(*(uint *)v5 + 12));
    if ( Function_206b5d8(v8) == 14 )
      result = 1;
  }
  return result;
}

//----- (022511E0) --------------------------------------------------------
int __fastcall Function_22511e0(uint a1)
{
  uint v1;
  int result;

  v1 = a1;
  result = Function_20057d4(a1);
  if ( !result )
    result = Function_2005748(v1);
  return result;
}

//----- (022511F4) --------------------------------------------------------
int __fastcall Function_22511f4(uint *a1, int *a2)
{
  uint *v2;
  int result;

  v2 = a1;
  CopyToSprite70Struct(a1, a2);
  result = ((int (__fastcall *)(uint *))dword_21EAF50[148])(v2);
  if ( result )
    result = ((int (__fastcall *)(uint *, int))dword_21EDEB4[0])(v2, result);
  return result;
}

