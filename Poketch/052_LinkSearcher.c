//----- (022561D4) --------------------------------------------------------
int __fastcall Function_22561d4(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = malloc(8u, 36);
  if ( v2 )
  {
    if ( Function_225621c() && AddTaskToTaskList1((int)Function_2256260, v2, 1u) )
    {
      *v1 = v2;
      return 1;
    }
    free(v2);
  }
  return 0;
}

//----- (0225621C) --------------------------------------------------------
int __fastcall Function_225621c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_2256694(a1 + 20, a1 + 4) )
    return 0;
  *(uchar *)v2 = 0;
  *(uchar *)(v2 + 1) = 0;
  *(uchar *)(v2 + 2) = 0;
  *(uchar *)(v2 + 32) = 0;
  *(uchar *)(v2 + 33) = 0;
  *(uint *)(v2 + 24) = v3;
  return 1;
}

//----- (0225624C) --------------------------------------------------------
uint __fastcall Function_225624c(int a1)
{
  int v1;

  v1 = a1;
  Function_22566ec(*(uint *)(a1 + 20));
  return free(v1);
}

//----- (02256260) --------------------------------------------------------
uint __fastcall Function_2256260(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( result < 6 )
  {
    Function_22565ec(a2);
    result = ((int (__fastcall *)(uchar *))dword_2256D2C[*v2 + 8])(v2);
    if ( result )
    {
      Function_225624c((int)v2);
      Call_RemoveTaskFromTaskList(v3);
      result = ((int (__fastcall *)(uint))dword_225423C[9])(*((uint *)v2 + 6));
    }
  }
  return result;
}

//----- (0225629C) --------------------------------------------------------
int __fastcall Function_225629c(int result)
{
  *(uchar *)(result + 2) = 1;
  return result;
}

//----- (022562A4) --------------------------------------------------------
char *__fastcall Function_22562a4(char *result, char a2)
{
  if ( result[2] )
    a2 = 5;
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (022562B8) --------------------------------------------------------
int __fastcall Function_22562b8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( v2 )
  {
    if ( v2 == 1 && Function_22567c8(*(uint *)(v1 + 20), 0) )
    {
      ((void (__fastcall *)(uint))dword_225423C[4])(*(uint *)(v1 + 24));
      Function_22562a4((char *)v1, 1);
    }
  }
  else
  {
    Function_22567a4(*(uint *)(v1 + 20), 0);
    ++*(uchar *)(v1 + 1);
  }
  return 0;
}

//----- (022562F8) --------------------------------------------------------
int __fastcall Function_22562f8(char *a1)
{
  char *v1;
  int result;
  int v3;

  v1 = a1;
  if ( a1[2] )
  {
    Function_22562a4(a1, 5);
    result = 0;
  }
  else
  {
    if ( !a1[1] && Function_2256554() )
    {
      if ( Function_2256684(v1) )
      {
        v3 = ((int (__fastcall *)(uint))dword_225423C[192])(*((uint *)v1 + 6));
        Function_22567a4(*((uint *)v1 + 5), 3);
        if ( Function_203a2c8(**(uint **)(v3 + 28)) )
          Function_22562a4(v1, 3);
        else
          Function_22562a4(v1, 2);
      }
      else
      {
        ((void (__fastcall *)(int))dword_225423C[122])(1646);
      }
    }
    result = 0;
  }
  return result;
}

//----- (02256364) --------------------------------------------------------
int __fastcall Function_2256364(char *a1)
{
  char *v1;
  int v3;
  uint v4;
  uint v5;

  v1 = a1;
  if ( a1[2] )
  {
    Function_22562a4(a1, 5);
    return 0;
  }
  v3 = (uchar)a1[1];
  if ( a1[1] )
  {
    if ( v3 == 1 )
    {
      if ( Function_2256430() )
      {
        Function_22562a4(v1, 4);
        return 0;
      }
      v4 = *((uint *)v1 + 7);
      if ( v4 < 0x3C )
        *((uint *)v1 + 7) = v4 + 1;
      if ( Function_225666c(v1) && *((uint *)v1 + 7) >= 0x3Cu )
      {
        Function_225659c(v1);
        Function_22567a4(*((uint *)v1 + 5), 6);
        *((uint *)v1 + 7) = 0;
        ++v1[1];
      }
    }
    else if ( v3 == 2 )
    {
      if ( Function_2256430() || Function_2256554(v1) )
      {
        Function_225667c(v1);
        Function_22567a4(*((uint *)v1 + 5), 2);
        Function_22562a4(v1, 1);
        return 0;
      }
      v5 = *((uint *)v1 + 7) + 1;
      *((uint *)v1 + 7) = v5;
      if ( v5 >= 0x1E )
      {
        *((uint *)v1 + 7) = 0;
        if ( Function_225659c(v1) )
          Function_22567a4(*((uint *)v1 + 5), 6);
      }
    }
  }
  else
  {
    Function_225664c();
    *((uint *)v1 + 7) = 0;
    ++v1[1];
  }
  return 0;
}

//----- (02256430) --------------------------------------------------------
BOOL __fastcall Function_2256430(int a1)
{
  int v1;
  BOOL result;

  v1 = a1;
  if ( ((int (__fastcall *)(uint))dword_225423C[180])(*(uint *)(a1 + 24)) )
    result = 1;
  else
    result = ((int (__fastcall *)(uint))dword_225423C[190])(*(uint *)(v1 + 24)) != 0;
  return result;
}

//----- (02256454) --------------------------------------------------------
int __fastcall Function_2256454(int a1)
{
  int v1;
  int v3;
  uint v4;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
  {
    Function_22562a4((char *)a1, 5);
    return 0;
  }
  v3 = *(uchar *)(a1 + 1);
  if ( !*(uchar *)(a1 + 1) )
  {
    *(uint *)(a1 + 28) = 0;
    ++*(uchar *)(a1 + 1);
LABEL_8:
    v4 = *(uint *)(a1 + 28) + 1;
    *(uint *)(v1 + 28) = v4;
    if ( v4 >= 0x3C )
    {
      Function_22567a4(*(uint *)(v1 + 20), 4);
      ++*(uchar *)(v1 + 1);
    }
    return 0;
  }
  if ( v3 == 1 )
    goto LABEL_8;
  if ( v3 == 2 )
  {
    if ( Function_2256554(a1) )
    {
      Function_22567a4(*(uint *)(v1 + 20), 2);
      Function_22562a4((char *)v1, 1);
    }
  }
  return 0;
}

//----- (022564B8) --------------------------------------------------------
int __fastcall Function_22564b8(char *a1)
{
  char *v1;
  int result;

  v1 = a1;
  if ( a1[2] )
  {
    Function_22562a4(a1, 5);
    result = 0;
  }
  else
  {
    if ( a1[1] )
    {
      if ( a1[1] == 1 )
      {
        if ( Function_2256554(a1) )
        {
          Function_22567a4(*((uint *)v1 + 5), 2);
          Function_22562a4(v1, 1);
        }
      }
    }
    else
    {
      Function_225667c(a1);
      Function_22567a4(*((uint *)v1 + 5), 5);
      ++v1[1];
    }
    result = 0;
  }
  return result;
}

//----- (02256508) --------------------------------------------------------
int __fastcall Function_2256508(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( !*(uchar *)(a1 + 1) )
  {
    Function_225667c(a1);
    ++*(uchar *)(v1 + 1);
LABEL_6:
    if ( Function_2256684(v1) )
    {
      Function_22567a4(*(uint *)(v1 + 20), 1);
      ++*(uchar *)(v1 + 1);
    }
    return 0;
  }
  if ( v2 == 1 )
    goto LABEL_6;
  if ( v2 == 2 && Function_22567d4(*(uint *)(a1 + 20)) )
    return 1;
  return 0;
}

//----- (02256554) --------------------------------------------------------
BOOL __fastcall Function_2256554(int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;

  v7 = a4;
  return !((int (__fastcall *)(uint))dword_225423C[180])(*(uint *)(a1 + 24))
      && Function_20227c0(&v6, &v5)
      && (uint)(v5 - 16) < 0x9F
      && (uint)(v6 - 16) < 0xBF;
}

//----- (0225659C) --------------------------------------------------------
int __fastcall Function_225659c(int a1)
{
  int v1;
  int *v2;
  uint v3;
  int v4;
  int v6;
  uint v7;

  v1 = a1;
  v2 = &dword_2256D64;
  v6 = 0;
  v7 = 0;
  do
  {
    v3 = 0;
    v4 = 0;
    if ( v2[1] )
    {
      do
        v4 += Function_2034120(*(uchar *)(*v2 + v3++));
      while ( v3 < v2[1] );
    }
    if ( v4 != *(uint *)(v1 + 4) )
    {
      *(uint *)(v1 + 4) = v4;
      v6 = 1;
    }
    v2 += 2;
    v1 += 4;
    ++v7;
  }
  while ( v7 < 4 );
  return v6;
}

//----- (022565EC) --------------------------------------------------------
int __fastcall Function_22565ec(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uchar *)(a1 + 32);
  switch ( (uchar)result )
  {
    case 1:
      result = Function_2037c18();
      if ( result )
      {
        result = 2;
        *(uchar *)(v1 + 32) = 2;
      }
      break;
    case 2:
      result = *(uchar *)(v1 + 33);
      if ( *(uchar *)(v1 + 33) )
      {
        Function_2037bfc();
        *(uchar *)(v1 + 33) = 0;
        result = 3;
        *(uchar *)(v1 + 32) = 3;
      }
      break;
    case 3:
      result = Function_2035e38();
      if ( !result )
      {
        result = 0;
        *(uchar *)(v1 + 32) = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0225664C) --------------------------------------------------------
int __fastcall Function_225664c(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = *(uchar *)(a1 + 32);
  if ( !result )
  {
    v3 = ((int (__fastcall *)(uint))dword_225423C[194])(*(uint *)(v1 + 24));
    Function_2037bc0(v3);
    result = 1;
    *(uchar *)(v1 + 32) = 1;
  }
  return result;
}

//----- (0225666C) --------------------------------------------------------
BOOL __fastcall Function_225666c(int a1)
{
  return *(uchar *)(a1 + 32) == 2;
}

//----- (0225667C) --------------------------------------------------------
uchar *__fastcall Function_225667c(int a1)
{
  uchar *result;

  result = (uchar *)(a1 + 33);
  *result = 1;
  return result;
}

//----- (02256684) --------------------------------------------------------
BOOL __fastcall Function_2256684(int a1)
{
  return *(uchar *)(a1 + 32) == 0;
}

//----- (02256694) --------------------------------------------------------
int __fastcall Function_2256694(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = malloc(8u, 96);
  v5 = (uint *)v4;
  if ( !v4 )
    return 0;
  v6 = ((int (__fastcall *)(int, int))dword_225423C[917])(v4 + 8, 4);
  *v5 = v3;
  v5[1] = ((int (__fastcall *)(int))dword_225423C[270])(v6);
  v5[12] = ((int (*)(void))dword_225423C[266])();
  v5[22] = LoadFromMsgNARC(1, 26, 461, 8u);
  v5[23] = Function_2023790(96, 8u);
  Function_225670c(v5, v3);
  *v2 = v5;
  return 1;
}

//----- (022566EC) --------------------------------------------------------
uint __fastcall Function_22566ec(uint result, int a2)
{
  int v2;

  v2 = result;
  if ( result )
  {
    Function_20237bc_FreeMsg(*(uint *)(result + 92), a2);
    Function_200b190(*(ushort **)(v2 + 88));
    Function_225677c(v2);
    result = free(v2);
  }
  return result;
}

//----- (0225670C) --------------------------------------------------------
int __fastcall Function_225670c(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;
  uint *v4;

  v1 = a1;
  Function_2006ec0(12, 99, 1, 0, 0, 1, 8);
  ((void (__fastcall *)(uint *, int, int, int, int))dword_225423C[1479])(
    v1 + 17,
    12,
    97,
    98,
    8);
  v2 = dword_2256DA4;
  v3 = 0;
  v4 = v1;
  do
  {
    v4[13] = ((int (__fastcall *)(uint, int *, uint *))dword_225423C[1397])(v1[12], v2, v1 + 17);
    ++v3;
    v2 += 4;
    ++v4;
  }
  while ( v3 < 4 );
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v1[14], 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v1[15], 1);
  return ((int (__fastcall *)(uint, int))dword_225423C[1462])(v1[16], 1);
}

//----- (0225677C) --------------------------------------------------------
int __fastcall Function_225677c(int a1)
{
  int v1;
  int v2;
  int v3;

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
  while ( v2 < 4 );
  return ((int (__fastcall *)(int))dword_225423C[1501])(v1 + 68);
}

//----- (022567A4) --------------------------------------------------------
int __fastcall Function_22567a4(int *a1)
{
  int v1;

  v1 = *a1;
  return ((int (__fastcall *)(int *))dword_225423C[976])(&dword_2256DE4);
}

//----- (022567C8) --------------------------------------------------------
void Function_22567c8()
{
  JUMPOUT(&dword_225423C[957]);
}

//----- (022567D4) --------------------------------------------------------
void Function_22567d4()
{
  JUMPOUT(&dword_225423C[966]);
}

//----- (022567E0) --------------------------------------------------------
int __fastcall Function_22567e0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))dword_225423C[1024])();
  return ((int (__fastcall *)(int, int))dword_225423C[1018])(v2 + 8, v1);
}

//----- (022567F4) --------------------------------------------------------
int __fastcall Function_22567f4(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_20183c4(*(uint **)(v3 + 4), 6u, dword_2256D88, 0);
  v4 = LoadFromNARC_RGCN(12, 96, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  LoadFromNARC_RCSN(12, 95, *(uint **)(v3 + 4), 6u, 0, 0, 1, 8);
  ((void (*)(void))dword_225423C[287])();
  Function_201a7e8(*(uint **)(v3 + 4), v3 + 32, 6, 2, 2, 0x18u, 0x14u, 0, v4 >> 5);
  Function_201a9f4(v3 + 32);
  Function_2256a7c(v3);
  Function_2019448(*(uint **)(v3 + 4), 6u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | ((((uint)(REG_DISPCNT_SUB << 19) >> 27) | 4) << 8);
  return Function_22567e0(v2);
}

//----- (022568B4) --------------------------------------------------------
int __fastcall Function_22568b4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  Function_201a8fc(v3 + 32);
  Function_2019044(*(uint *)(v3 + 4), 6);
  return Function_22567e0(v2);
}

//----- (022568D8) --------------------------------------------------------
int __fastcall Function_22568d8(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[13], 0);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[14], 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[15], 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[16], 1);
  Function_2256a7c(v3);
  ((void (__fastcall *)(int))dword_225423C[122])(1635);
  return Function_22567e0(v2);
}

//----- (0225691C) --------------------------------------------------------
int __fastcall Function_225691c(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[13], 0);
  ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[14], 0);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[15], 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[16], 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[14], 1);
  Function_2256b10(v3);
  ((void (__fastcall *)(int))dword_225423C[122])(1635);
  return Function_22567e0(v2);
}

//----- (02256968) --------------------------------------------------------
int __fastcall Function_2256968(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[13], 0);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[14], 1);
  ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[15], 0);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[16], 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[15], 2);
  Function_2256b64(v3);
  ((void (__fastcall *)(int))dword_225423C[122])(1646);
  return Function_22567e0(v2);
}

//----- (022569B4) --------------------------------------------------------
int __fastcall Function_22569b4(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[13], 0);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[14], 1);
  ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[15], 0);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[16], 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1442])(v3[15], 2);
  Function_2256bdc(v3);
  ((void (__fastcall *)(int))dword_225423C[122])(1646);
  return Function_22567e0(v2);
}

//----- (02256A00) --------------------------------------------------------
int __fastcall Function_2256a00(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = a2;
  v3 = (uint *)((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[13], 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[14], 1);
  ((void (__fastcall *)(uint, int))dword_225423C[1462])(v3[15], 1);
  ((void (__fastcall *)(uint, uint))dword_225423C[1462])(v3[16], 0);
  ((void (__fastcall *)(uint, uint))dword_225423C[1442])(v3[16], 0);
  Function_2256c64(v3, v4);
  ((void (__fastcall *)(int))dword_225423C[122])(1635);
  return Function_22567e0(v2);
}

//----- (02256A58) --------------------------------------------------------
int __fastcall Function_2256a58(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = ((int (__fastcall *)(int))dword_225423C[1024])(a2);
  v4 = ((int (__fastcall *)(int))dword_225423C[1025])(v2);
  Function_2256c64(v3, v4);
  return Function_22567e0(v2);
}

//----- (02256A7C) --------------------------------------------------------
int *__fastcall Function_2256a7c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 32, 4);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 88), 0, *(ushort **)(v1 + 92));
  Function_2002d7c(0, *(uint *)(v1 + 92), 0);
  v2 = *(uint *)(v1 + 92);
  Function_201d78c(v1 + 32, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 88), 0xAu, *(ushort **)(v1 + 92));
  Function_2002eb4(0, *(uint *)(v1 + 92), 0);
  v3 = 64 - 8 * Function_2023c5c(*(uint *)(v1 + 92));
  v4 = *(uint *)(v1 + 92);
  Function_201d78c(v1 + 32, 0);
  return Function_201accc(v1 + 32);
}

//----- (02256B10) --------------------------------------------------------
int *__fastcall Function_2256b10(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 32, 4);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 88), 1u, *(ushort **)(v1 + 92));
  Function_2002eb4(0, *(uint *)(v1 + 92), 0);
  v2 = *(uint *)(v1 + 92);
  Function_201d78c(v1 + 32, 0);
  return Function_201accc(v1 + 32);
}

//----- (02256B64) --------------------------------------------------------
int *__fastcall Function_2256b64(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 32, 4);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 88), 2u, *(ushort **)(v1 + 92));
  Function_2002d7c(0, *(uint *)(v1 + 92), 0);
  v2 = *(uint *)(v1 + 92);
  Function_201d78c(v1 + 32, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 88), 3u, *(ushort **)(v1 + 92));
  v3 = *(uint *)(v1 + 92);
  Function_201d78c(v1 + 32, 0);
  return Function_201accc(v1 + 32);
}

//----- (02256BDC) --------------------------------------------------------
int *__fastcall Function_2256bdc(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 32, 4);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 88), 2u, *(ushort **)(v1 + 92));
  Function_2002d7c(0, *(uint *)(v1 + 92), 0);
  v2 = *(uint *)(v1 + 92);
  Function_201d78c(v1 + 32, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 88), 4u, *(ushort **)(v1 + 92));
  Function_2002eb4(0, *(uint *)(v1 + 92), 0);
  v3 = *(uint *)(v1 + 92);
  Function_201d78c(v1 + 32, 0);
  return Function_201accc(v1 + 32);
}

//----- (02256C64) --------------------------------------------------------
int *__fastcall Function_2256c64(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v2 = a1;
  v3 = a2;
  Function_201ada4_ClearTextBox(a1 + 32, 4);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 88), 5u, *(ushort **)(v2 + 92));
  Function_2002d7c(0, *(uint *)(v2 + 92), 0);
  v4 = *(uint *)(v2 + 92);
  Function_201d78c(v2 + 32, 0);
  v10 = 0;
  v5 = &byte_2256D84;
  v6 = 32;
  v11 = v2 + 32;
  do
  {
    Function_200b1b8_CallMsgDecrypt(
      *(ushort ***)(v2 + 88),
      (uchar)*v5,
      *(ushort **)(v2 + 92));
    v7 = *(uint *)(v2 + 92);
    Function_201d78c(v11, 0);
    Function_20238a0(*(ushort **)(v2 + 92), *v3, 2, 2, 1);
    v8 = *(uint *)(v2 + 92);
    Function_201d78c(v11, 0);
    ++v5;
    v6 += 16;
    ++v3;
    ++v10;
  }
  while ( v10 < 4 );
  return Function_201accc(v2 + 32);
}

