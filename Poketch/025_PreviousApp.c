//----- (02253CE0) --------------------------------------------------------
int Function_2253ce0()
{
  return Function_203d158();
}

//----- (02253CE8) --------------------------------------------------------
uint *__fastcall Function_25_2253ce8(int a1, uint *a2, int a3, int a4, int a5)
{
  int v5;
  uint *v6;
  int v7;
  uint *result;
  uint *v9;
  int v10;

  v5 = a1;
  v6 = a2;
  v10 = a3;
  v7 = a4;
  Function_2017fc8(3, 7, 49152);
  Function_2017fc8(3, 8, 49152);
  result = (uint *)malloc(7u, 100);
  v9 = result;
  if ( result )
  {
    *v6 = result;
    result[23] = v5;
    result[21] = v10;
    result[22] = LoadVariableAreaAdress_5(v10);
    v9[19] = v7;
    v9[20] = a5;
    result = (uint *)Function_2253ddc(v9);
    if ( result )
    {
      Function_201e3d8();
      Function_201e450(4u);
      v9[13] = v6;
      v9[14] = AddTaskToTaskList1((int)Function_2253e94, (int)v9, 4u);
      result = AddTaskToTaskList1((int)Function_2253e40, (int)v9, 0);
    }
  }
  return result;
}

//----- (02253D5C) --------------------------------------------------------
uchar *__fastcall Function_25_2253d5c(uchar *result)
{
  int v1;

  v1 = *result;
  if ( v1 != 3 && v1 != 4 )
    result = (uchar *)Function_2253e9c();
  return result;
}

//----- (02253D70) --------------------------------------------------------
BOOL __fastcall Function_25_2253d70(int a1)
{
  return a1 == 0;
}

//----- (02253D7C) --------------------------------------------------------
int __fastcall Function_25_2253d7c(int result)
{
  int v1;
  uint v2;
  int (__fastcall *v3)(uint);

  v1 = result;
  switch ( (uchar)result )
  {
    case 1:
      result = 1;
      *(uchar *)(v1 + 4) = 1;
      break;
    case 4:
      result = *(uchar *)(result + 2);
      if ( result == 2 )
      {
        v3 = *(int (__fastcall **)(uint))(v1 + 68);
        if ( v3 )
          result = v3(*(uint *)(v1 + 72));
      }
      break;
    case 5:
      v2 = Function_20568c8(*(uint *)(result + 88)) + 1;
      if ( v2 > 0x1869F )
        v2 = 0;
      Function_20568cc(*(uint *)(v1 + 88), v2);
      result = 1;
      *(uchar *)(v1 + 7) = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (02253DD4) --------------------------------------------------------
int __fastcall Function_25_2253dd4(int a1)
{
  return *(uchar *)(a1 + 3);
}

//----- (02253DD8) --------------------------------------------------------
int __fastcall Function_2253dd8(int a1)
{
  return *(uint *)(a1 + 20);
}

//----- (02253DDC) --------------------------------------------------------
int __fastcall Function_2253ddc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( !Function_2254560(a1 + 28, a1 + 32, *(uint *)(a1 + 80), a1) )
    goto LABEL_7;
  *(uchar *)v1 = 0;
  *(uchar *)(v1 + 1) = 0;
  *(uchar *)(v1 + 3) = 0;
  *(uchar *)(v1 + 4) = 0;
  *(uchar *)(v1 + 7) = 0;
  *(uchar *)(v1 + 5) = 0;
  *(uchar *)(v1 + 6) = 0;
  *(uint *)(v1 + 20) = -1;
  *(uchar *)(v1 + 2) = 0;
  *(uint *)(v1 + 8) = 0;
  *(uint *)(v1 + 96) = 0;
  if ( Function_2254284(v1) )
    result = 1;
  else
LABEL_7:
    result = 0;
  return result;
}

//----- (02253E20) --------------------------------------------------------
int __fastcall Function_2253e20(int a1)
{
  int v1;

  v1 = a1;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 56));
  Function_22542c8(v1);
  Function_22541bc(v1);
  return Function_2254754(*(uint *)(v1 + 28));
}

//----- (02253E40) --------------------------------------------------------
uint __fastcall Function_2253e40(int *a1, uchar *a2)
{
  uchar *v2;
  int *v3;
  uint v4;
  uint result;

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( v4 >= 4 )
  {
    if ( v4 != 4 )
      ErrorHandler();
    **((uint **)v2 + 13) = 0;
    Function_2253e20((int)v2);
    free((int)v2);
    Call_RemoveTaskFromTaskList(v3);
    Function_201807c(7);
    result = Function_201807c(8);
  }
  else
  {
    if ( *a2 )
      Function_22542d4(a2);
    result = ((int (__fastcall *)(uchar *))dword_2255E60[*v2 + 3])(v2);
  }
  return result;
}

//----- (02253E94) --------------------------------------------------------
int __fastcall Function_2253e94(int a1, int a2)
{
  int result;

  result = 0;
  *(uchar *)(a2 + 4) = 0;
  *(uchar *)(a2 + 7) = 0;
  return result;
}

//----- (02253E9C) --------------------------------------------------------
uchar *__fastcall Function_2253e9c(uchar *result, char a2)
{
  *result = a2;
  result[1] = 0;
  return result;
}

//----- (02253EA4) --------------------------------------------------------
uchar *__fastcall Function_2253ea4(uchar *result)
{
  uchar *v1;
  int v2;

  v1 = result;
  switch ( result[1] )
  {
    case 0:
      Function_22547d0(*((uint *)result + 7), 0);
      result = (uchar *)((uchar)v1[1] + 1);
      v1[1] = (uchar)result;
      break;
    case 1:
      result = (uchar *)Function_22547f4(*((uint *)result + 7), 0);
      if ( result )
      {
        v2 = Function_2056830(*((uint *)v1 + 22));
        Function_2254170(v1, v2);
        Function_22541d8(v1, v2);
        result = (uchar *)((uchar)v1[1] + 1);
        v1[1] = (uchar)result;
      }
      break;
    case 2:
      result = (uchar *)Function_22541fc();
      if ( result )
      {
        Function_22547d0(*((uint *)v1 + 7), 1);
        ++v1[1];
        goto LABEL_7;
      }
      break;
    case 3:
LABEL_7:
      result = (uchar *)Function_22547f4(*((uint *)v1 + 7), 1);
      if ( result )
        result = Function_2253e9c(v1, 1);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02253F2C) --------------------------------------------------------
uchar *__fastcall Function_2253f2c(uchar *result)
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

  v1 = result;
  switch ( result[1] )
  {
    case 0:
      result = (uchar *)Function_225450c();
      if ( !result )
      {
        result = (uchar *)*((uint *)v1 + 2);
        if ( result == (uchar *)3 || result == (uchar *)5 )
        {
          *((uint *)v1 + 3) = 0;
          v1[5] = 1;
          Function_22547d0(*((uint *)v1 + 7), 4);
          result = (uchar *)((uchar)v1[1] + 1);
          v1[1] = (uchar)result;
        }
      }
      break;
    case 1:
      v2 = *((uint *)result + 2);
      if ( v2 == 3 || v2 == 5 )
        *((uint *)v1 + 3) = 1;
      result = (uchar *)Function_2254800(*((uint *)v1 + 7));
      if ( result )
      {
        v3 = *((uint *)v1 + 22);
        if ( *((uint *)v1 + 24) )
          v4 = Function_2056838(v3);
        else
          v4 = Function_2056860(v3);
        *((uint *)v1 + 8) = v4;
        if ( *((uint *)v1 + 3) )
        {
          Function_22547d0(*((uint *)v1 + 7), 12);
          *((uint *)v1 + 4) = 30;
          *((uint *)v1 + 3) = 0;
          result = (uchar *)4;
          v1[1] = 4;
        }
        else
        {
          *((uint *)v1 + 4) = 3;
          result = (uchar *)2;
          v1[1] = 2;
        }
      }
      break;
    case 2:
      v5 = *((uint *)result + 2);
      if ( v5 != 3 && v5 != 5 )
      {
        v6 = *((uint *)result + 4);
        if ( v6 )
        {
          result = (uchar *)(v6 - 1);
          *((uint *)v1 + 4) = v6 - 1;
        }
        else
        {
          Function_225420c(result);
          result = (uchar *)3;
          v1[1] = 3;
        }
      }
      else
      {
        Function_22547d0(*((uint *)result + 7), 12);
        *((uint *)v1 + 4) = 30;
        *((uint *)v1 + 3) = 0;
        result = (uchar *)4;
        v1[1] = 4;
      }
      break;
    case 3:
      result = (uchar *)Function_2254228();
      if ( result )
      {
        Function_22541bc(v1);
        Function_2099d44();
        result = Function_2253e9c(v1, 2);
      }
      break;
    case 4:
      v7 = *((uint *)result + 2);
      if ( v7 != 3 && v7 != 5 )
      {
        v10 = *((uint *)v1 + 4);
        if ( v10 )
        {
          result = (uchar *)(v10 - 1);
          *((uint *)v1 + 4) = result;
        }
        else
        {
          Function_22547d0(*((uint *)v1 + 7), 14);
          Function_225420c(v1);
          result = (uchar *)3;
          v1[1] = 3;
        }
      }
      else
      {
        v8 = *((uint *)v1 + 22);
        if ( *((uint *)v1 + 24) )
          v9 = Function_2056838(v8);
        else
          v9 = Function_2056860(v8);
        *((uint *)v1 + 8) = v9;
        *((uint *)v1 + 4) = 30;
        result = (uchar *)Function_22547d0(*((uint *)v1 + 7), 13);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (0225406C) --------------------------------------------------------
uchar *__fastcall Function_225406c(uchar *result)
{
  uchar *v1;
  int v2;
  int v3;

  v1 = result;
  v2 = (uchar)result[1];
  if ( result[1] )
  {
    if ( v2 == 1 )
    {
      result = (uchar *)Function_22541fc();
      if ( result )
      {
        Function_22547d0(*((uint *)v1 + 7), 2);
        result = (uchar *)((uchar)v1[1] + 1);
        v1[1] = (uchar)result;
      }
    }
    else if ( v2 == 2 )
    {
      result = (uchar *)Function_22547f4(*((uint *)result + 7), 2);
      if ( result )
      {
        v1[5] = 0;
        v1[6] = 0;
        result = Function_2253e9c(v1, 1);
      }
    }
  }
  else
  {
    result[6] = 1;
    v3 = Function_2056830(*((uint *)result + 22));
    Function_2254170(v1, v3);
    Function_22541d8(v1, v3);
    result = (uchar *)((uchar)v1[1] + 1);
    v1[1] = (uchar)result;
  }
  return result;
}

//----- (022540D8) --------------------------------------------------------
uchar *__fastcall Function_22540d8(uchar *result)
{
  uchar *v1;
  int v2;

  v1 = result;
  switch ( result[1] )
  {
    case 0:
      switch ( result[2] )
      {
        case 0:
        case 3:
          result = (uchar *)2;
          v1[1] = 2;
          break;
        case 1:
          result = (uchar *)1;
          v1[1] = 1;
          break;
        case 2:
          Function_225420c(result);
          v1[1] = 2;
          JUMPOUT(__CS__, v2);
          return result;
        default:
          return result;
      }
      return result;
    case 1:
      result = (uchar *)Function_22541fc();
      if ( result )
      {
        Function_225420c(v1);
        result = (uchar *)2;
        v1[1] = 2;
      }
      break;
    case 2:
      result = (uchar *)Function_2254228();
      if ( result )
      {
        Function_22547d0(*((uint *)v1 + 7), 17);
        result = (uchar *)3;
        v1[1] = 3;
      }
      break;
    case 3:
      result = (uchar *)Function_2254800(*((uint *)result + 7));
      if ( result )
      {
        Function_22541bc(v1);
        Function_201e530();
        result = Function_2253e9c(v1, 4);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02254170) --------------------------------------------------------
int __fastcall Function_2254170(int a1, uint a2, int a3, int a4)
{
  int v4;
  uint v5;
  int result;
  int *v7;
  uint v8;
  int v9;

  v4 = a1;
  v5 = a2;
  if ( (a2 & 0x80000000) != 0 || a2 >= 0x19 )
    ErrorHandler();
  result = -1;
  if ( *(uint *)(v4 + 20) == -1 )
  {
    v7 = &dword_2255E7C;
    v8 = 0;
    while ( 1 )
    {
      result = *v7;
      if ( v5 == *v7 )
        break;
      ++v8;
      v7 += 2;
      if ( v8 >= 0x19 )
        return result;
    }
    v9 = dword_2255E80[2 * v8];
    result = LoadOverlay(v9, 2, (int)v7, a4);
    *(uint *)(v4 + 20) = v5;
    *(uint *)(v4 + 24) = v9;
  }
  return result;
}

//----- (022541BC) --------------------------------------------------------
int __fastcall Function_22541bc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;

  v4 = a1;
  v5 = *(uint *)(a1 + 20);
  result = -1;
  if ( v5 != -1 )
  {
    UnloadOverlay(*(uint *)(v4 + 24), v5, a3, a4);
    result = -1;
    *(uint *)(v4 + 20) = -1;
  }
  return result;
}

//----- (022541D8) --------------------------------------------------------
int __fastcall Function_22541d8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) )
    ErrorHandler();
  (*(void (__fastcall **)(int, int, uint, uint))(v1 + 60))(v1 + 36, v1, *(uint *)(v1 + 76), *(uint *)(v1 + 20));
  result = 1;
  *(uchar *)(v1 + 2) = 1;
  return result;
}

//----- (022541FC) --------------------------------------------------------
BOOL __fastcall Function_22541fc(int a1)
{
  return *(uchar *)(a1 + 2) == 2;
}

//----- (0225420C) --------------------------------------------------------
int __fastcall Function_225420c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) != 2 )
    ErrorHandler();
  (*(void (__fastcall **)(uint))(v1 + 64))(*(uint *)(v1 + 36));
  result = 3;
  *(uchar *)(v1 + 2) = 3;
  return result;
}

//----- (02254228) --------------------------------------------------------
BOOL __fastcall Function_2254228(int a1)
{
  return *(uchar *)(a1 + 2) == 0;
}

//----- (02254238) --------------------------------------------------------
uint *__fastcall Function_2254238(int a1, int a2)
{
  int v2;
  int v3;
  uint *result;

  v2 = a1;
  v3 = a2;
  result = (uint *)Function_2253ce0();
  result[15] = v2;
  result[16] = v3;
  result[17] = 0;
  return result;
}

//----- (0225424C) --------------------------------------------------------
int __fastcall Function_225424c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) != 1 )
    ErrorHandler();
  result = 2;
  *(uchar *)(v1 + 2) = 2;
  return result;
}

//----- (02254260) --------------------------------------------------------
int __fastcall Function_2254260(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 2) != 3 )
    ErrorHandler();
  result = 0;
  *(uchar *)(v1 + 2) = 0;
  return result;
}

//----- (02254274) --------------------------------------------------------
int __fastcall Function_2254274(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_2253ce0();
  *(uint *)(result + 68) = v2;
  *(uint *)(result + 72) = v3;
  return result;
}

//----- (02254284) --------------------------------------------------------
int __fastcall Function_2254284(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = Function_2255acc(dword_2255E60, 3, Function_22542e4, a1, 7);
  v1[10] = v2;
  if ( !v2 )
    return 0;
  Function_2255c48();
  v1[11] = -1;
  v1[12] = -1;
  return 1;
}

//----- (022542C8) --------------------------------------------------------
int __fastcall Function_22542c8(int a1)
{
  return Function_2255b34(*(uint *)(a1 + 40));
}

//----- (022542D4) --------------------------------------------------------
int __fastcall Function_22542d4(int a1)
{
  *(uint *)(a1 + 8) = 0;
  return Function_2255b50(*(uint *)(a1 + 40));
}

//----- (022542E4) --------------------------------------------------------
int __fastcall Function_22542e4(int a1, int a2, int a3, int a4)
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

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v12 = a3;
  if ( Function_225450c(a4) )
  {
    *(uchar *)(v4 + 3) = 0;
  }
  else if ( v12 )
  {
    if ( v12 == 1 )
      *(uchar *)(v4 + 3) = 1;
  }
  else
  {
    *(uchar *)(v4 + 3) = 0;
  }
  if ( v5 == 2 )
  {
    result = Function_225450c(v4);
    if ( result )
    {
      result = v12;
      if ( v12 == 1 )
        result = Function_2005748(0x66Eu);
    }
  }
  else
  {
    v8 = -1;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        if ( Function_225450c(v4) || *(uchar *)(v4 + 6) )
        {
          if ( v5 )
            v8 = 9;
          else
            v8 = 6;
          v6 = 0;
        }
        else if ( v5 )
        {
          v8 = 10;
        }
        else
        {
          v8 = 7;
        }
      }
    }
    else if ( v5 )
    {
      v8 = 11;
    }
    else
    {
      v8 = 8;
    }
    if ( *(uint *)(v4 + 44) != -1 )
    {
      v9 = v8;
      v8 = *(uint *)(v4 + 44);
      *(uint *)(v4 + 44) = v9;
    }
    if ( v8 != -1 && Function_22543ec(*(uint *)(v4 + 28), v8) && (v8 == 6 || v8 == 7 || (uint)(v8 - 9) <= 1) )
      *(uint *)(v4 + 48) = v8;
    switch ( v6 )
    {
      case 2:
        v11 = *(uint *)(v4 + 48);
        if ( v11 == 7 || v11 == 10 )
          v6 = 3;
        break;
      case 3:
        v10 = *(uint *)(v4 + 48);
        if ( v10 == 6 || v10 == 9 )
          v6 = 0;
        break;
      case 5:
        Function_2255c68(*(uint *)(v4 + 40), 0);
        break;
    }
    *(uint *)(v4 + 8) = v6;
    result = v5 != 0;
    *(uint *)(v4 + 96) = result;
  }
  return result;
}

//----- (022543EC) --------------------------------------------------------
int __fastcall Function_22543ec(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( !Function_22547f4(v2, v3) )
      return 0;
    ++v4;
  }
  while ( v4 < 6 );
  Function_22547d0(v2, v3);
  return 1;
}

//----- (02254418) --------------------------------------------------------
int Function_2254418()
{
  return *(uint *)(Function_2253ce0() + 28);
}

//----- (02254424) --------------------------------------------------------
int __fastcall Function_2254424(ushort a1)
{
  ushort v1;
  int result;

  v1 = a1;
  result = Function_2253ce0();
  if ( !*(uchar *)(result + 5) )
  {
    result = Function_225450c(result);
    if ( !result )
      result = Function_2005748(v1);
  }
  return result;
}

//----- (02254444) --------------------------------------------------------
int __fastcall Function_2254444(ushort a1, uchar a2)
{
  ushort v2;
  uchar v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_2253ce0();
  if ( !*(uchar *)(result + 5) )
  {
    result = Function_225450c(result);
    if ( !result )
      result = Function_2005844(v2, v3);
  }
  return result;
}

//----- (0225446C) --------------------------------------------------------
BOOL __fastcall Function_225446c(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  BOOL result;

  v2 = a1;
  v3 = a2;
  v4 = Function_2253ce0();
  if ( *(uchar *)(v4 + 5) || Function_225450c(v4) || !Function_20227a4(v2, v3) )
    result = 0;
  else
    result = ((uint)(*v3 - 16) < 0x9F && (uint)(*v2 - 16) < 0xBF) != 0;
  return result;
}

//----- (022544BC) --------------------------------------------------------
BOOL __fastcall Function_22544bc(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int v4;
  BOOL result;

  v2 = a1;
  v3 = a2;
  v4 = Function_2253ce0();
  if ( *(uchar *)(v4 + 5) || Function_225450c(v4) || !Function_20227c0(v2, v3) )
    result = 0;
  else
    result = ((uint)(*v3 - 16) < 0x9F && (uint)(*v2 - 16) < 0xBF) != 0;
  return result;
}

//----- (0225450C) --------------------------------------------------------
BOOL __fastcall Function_225450c(int a1)
{
  return Function_20509a4(*(uint *)(a1 + 92));
}

//----- (02254518) --------------------------------------------------------
int __fastcall Function_2254518(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_225450c(a1);
  if ( !result )
  {
    result = *(uchar *)(v2 + 5);
    if ( !*(uchar *)(v2 + 5) )
      result = Function_2255b50(v3);
  }
  return result;
}

//----- (02254534) --------------------------------------------------------
int __fastcall Function_2254534(int a1)
{
  return *(uchar *)(a1 + 4);
}

//----- (02254538) --------------------------------------------------------
int __fastcall Function_2254538(int a1)
{
  return *(uchar *)(a1 + 7);
}

//----- (0225453C) --------------------------------------------------------
int __fastcall Function_225453c(int a1)
{
  return *(uint *)(a1 + 92);
}

//----- (02254540) --------------------------------------------------------
int __fastcall Function_2254540(int a1)
{
  return *(uint *)(a1 + 88);
}

//----- (02254544) --------------------------------------------------------
int __fastcall Function_2254544(int a1)
{
  return *(uint *)(a1 + 84);
}

//----- (02254548) --------------------------------------------------------
BOOL __fastcall Function_2254548(int a1)
{
  int v1;

  v1 = LoadTrainerDataAdress(*(uint *)(a1 + 84));
  return GetGender(v1) != 1;
}

//----- (02254560) --------------------------------------------------------
int __fastcall Function_2254560(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  uint *v8;
  int result;
  int v10;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v10 = a4;
  v7 = malloc(7u, 1056);
  *v5 = v7;
  v8 = (uint *)v7;
  if ( !v7 )
    return 0;
  *(uint *)(v7 + 456) = v6;
  NNS_G2dResetOamManagerBuffer(*(uint *)(v7 + 456));
  v8[115] = Function_2255540(v8[114], 7);
  if ( v8[115] )
  {
    *v8 = v4;
    v8[126] = Function_2018340(7u);
    v8[127] = v10;
    Function_2254684(v8);
    Function_2254dd8(v8 + 117, v8[115]);
    Function_2255090(*v5 + 4, 8);
    Function_2254798(*v5 + 44, 72, 4, 6);
    Function_2254798(*v5 + 108, 76, 4, 6);
    Function_2254798(*v5 + 172, 80, 4, 6);
    Function_2254798(*v5 + 236, 84, 2, 4);
    Function_2254798(*v5 + 300, 88, 2, 4);
    Function_2254798(*v5 + 364, 92, 2, 4);
    v8[116] = AddTaskToTaskList3((int)Function_2254654, (int)v8, 0);
    result = 1;
  }
  else
  {
    free(*v5);
    result = 0;
    *v5 = 0;
  }
  return result;
}

//----- (02254654) --------------------------------------------------------
int __fastcall Function_2254654(int a1, int a2)
{
  return Function_2255614(*(uint *)(a2 + 460));
}

//----- (02254664) --------------------------------------------------------
int Function_2254664()
{
  return *(uint *)(Function_2254418() + 460);
}

//----- (02254674) --------------------------------------------------------
int Function_2254674()
{
  return *(uint *)(Function_2254418() + 504);
}

//----- (02254684) --------------------------------------------------------
uint __fastcall Function_2254684(int a1, int a2, int a3, int a4)
{
  int v4;
  uint result;
  int v6;
  int v7;

  v7 = a4;
  v4 = a1;
  result = Function_2006f88(12, 0, &v7, 7);
  v6 = result;
  if ( result )
  {
    MI_CpuCopy32(*(int **)(v7 + 12), (uint *)(v4 + 512), 512);
    DC_FlushRange(v4 + 512, 512);
    result = free(v6);
  }
  return result;
}

//----- (022546B8) --------------------------------------------------------
uint __fastcall Function_22546b8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uchar *v6;
  int v7;
  uint v8;

  v2 = a1;
  v3 = a2;
  v4 = Function_2254418();
  v5 = v4;
  v6 = (uchar *)Function_2254540(*(uint *)(v4 + 508));
  v7 = v5 + 512;
  v8 = Function_2056888(v6) << 6;
  GXS_LoadBGPltt(v7 + v8, 32 * v2, 0x20u);
  return GXS_LoadOBJPltt(v7 + v8, v3, 0x20u);
}

//----- (022546F0) --------------------------------------------------------
uint Function_22546f0()
{
  int v0;
  int v1;
  uchar *v2;
  uint v3;

  v0 = Function_2254418();
  v1 = v0;
  v2 = (uchar *)Function_2254540(*(uint *)(v0 + 508));
  v1 += 512;
  v3 = 2 * (32 * Function_2056888(v2) + 16);
  GXS_LoadBGPltt(v1 + v3, 0, 0x20u);
  return GXS_LoadOBJPltt(v1 + v3, 0, 0x20u);
}

//----- (02254728) --------------------------------------------------------
int __fastcall Function_2254728(int a1)
{
  int v1;
  int v2;
  int v3;
  uchar *v4;
  uint v5;
  short v6;

  v1 = a1;
  v2 = Function_2254418();
  v3 = v2;
  v4 = (uchar *)Function_2254540(*(uint *)(v2 + 508));
  v5 = Function_2056888(v4);
  return MIi_CpuCopy16(v3 + 512 + (v5 << 6), v1, 32, v6);
}

//----- (02254754) --------------------------------------------------------
uint __fastcall Function_2254754(uint result)
{
  uint *v1;
  int v2;
  int *v3;

  v1 = (uint *)result;
  if ( result )
  {
    Function_2254f40(result + 468);
    if ( v1[115] )
      Function_22555e8();
    v2 = v1[126];
    if ( v2 )
      free(v2);
    v3 = (int *)v1[116];
    if ( v3 )
      Call_RemoveTaskFromTaskList(v3);
    result = free((int)v1);
  }
  return result;
}

//----- (02254798) --------------------------------------------------------
ushort *__fastcall Function_2254798(ushort *result, short a2, int a3, int a4)
{
  short v4;
  int v5;
  short v6;
  int v7;
  int v8;

  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = 0;
  do
  {
    v8 = 0;
    do
    {
      *result = (v8++ + v6 + v4) | 0xF000;
      ++result;
    }
    while ( v8 < 4 );
    if ( v7 < v5 || v7 >= a4 )
      v4 += 32;
    ++v7;
  }
  while ( v7 < 8 );
  return result;
}

//----- (022547D0) --------------------------------------------------------
int __fastcall Function_22547d0(int *a1)
{
  int v1;

  v1 = *a1;
  return Function_225517c(&dword_2255F80[3]);
}

//----- (022547F4) --------------------------------------------------------
int __fastcall Function_22547f4(int a1)
{
  return Function_2255130(a1 + 4);
}

//----- (02254800) --------------------------------------------------------
int __fastcall Function_2254800(int a1)
{
  return Function_2255154(a1 + 4);
}

//----- (0225480C) --------------------------------------------------------
int __fastcall Function_225480c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_225523c();
  return Function_2255224(v2 + 4, v1);
}

//----- (02254820) --------------------------------------------------------
int __fastcall Function_2254820(int a1, int a2)
{
  int v2;
  int v3;
  BOOL v4;

  v2 = a2;
  v3 = Function_225523c(a2);
  GXS_SetGraphicsMode(0);
  GX_SetBankForSubBG(128);
  GX_SetBankForSubOBJ(256);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFCFFFEF | 0x10;
  Function_201ff68();
  Function_201ff74(0x10u, 1);
  Function_20183c4(*(uint **)(v3 + 504), 4u, dword_2255F54, 0);
  Function_20183c4(*(uint **)(v3 + 504), 5u, dword_2255F70, 0);
  LoadFromNARC_RGCN(12, 14, *(uint **)(v3 + 504), 4u, 64, 0, 1, 7);
  LoadFromNARC_RCSN(12, 15, *(uint **)(v3 + 504), 4u, 0, 0, 1, 7);
  v4 = Function_2254548(*(uint *)(v3 + 508));
  LoadFromNARC_RLCN(12, 13, 4u, 32 * v4, 480, 32, 7);
  Function_2019cb8(*(uint *)(v3 + 504), 5, 228, 0, 0, 0x20u, 0x18u, 0xFu);
  Function_2019448(*(uint **)(v3 + 504), 5u);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFFFE0FF | 0x1300;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  return Function_225480c(v2);
}

//----- (02254944) --------------------------------------------------------
int __fastcall Function_2254944(int a1, int a2)
{
  ushort *v2;
  int v3;
  int result;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v8 = a2;
  v2 = (ushort *)Function_2255244(a2);
  v3 = Function_225523c(v8);
  result = Function_2255248(v8);
  if ( result )
  {
    if ( result != 1 )
    {
      if ( result == 2 )
        result = Function_225480c(v8);
      return result;
    }
  }
  else
  {
    *v2 = 0;
    v2[1] = 0;
    Function_225524c(v8);
  }
  result = (ushort)++*v2;
  if ( *v2 )
  {
    *v2 = 0;
    v2[1] += 12;
    if ( (ushort)v2[1] > 0x28u )
      v2[1] = 40;
    v5 = (ushort)v2[1];
    v6 = 12 - (v5 >> 2);
    v9 = 2 * (v5 >> 2);
    v7 = (v5 >> 31) + __ROR4__((v5 << 30) - (v5 >> 31), 30);
    Function_2019cb8(*(uint *)(v3 + 504), 5, 64, 2u, 12 - (v5 >> 2), 0x18u, 2 * (v5 >> 2), 0xFu);
    if ( v7 )
    {
      Function_2019cb8(*(uint *)(v3 + 504), 5, v7 + 228, 2u, v6 - 1, 0x18u, 1u, 0xFu);
      Function_2019cb8(*(uint *)(v3 + 504), 5, 228 - v7, 2u, v6 + v9, 0x18u, 1u, 0xFu);
    }
    Function_2019448(*(uint **)(v3 + 504), 5u);
    result = (ushort)v2[1];
    if ( result == 40 )
      result = Function_225524c(v8);
  }
  return result;
}

//----- (02254A5C) --------------------------------------------------------
int __fastcall Function_2254a5c(int a1, int a2)
{
  ushort *v2;
  int v3;
  int result;
  uint v5;
  uint v6;
  int v7;
  int v8;
  int v9;

  v8 = a2;
  v2 = (ushort *)Function_2255244(a2);
  v3 = Function_225523c(v8);
  result = Function_2255248(v8);
  if ( result )
  {
    if ( result != 1 )
    {
      if ( result == 2 )
        result = Function_225480c(v8);
      return result;
    }
  }
  else
  {
    *v2 = 0;
    v2[1] = 0;
    Function_225524c(v8);
  }
  result = (ushort)++*v2;
  if ( *v2 )
  {
    *v2 = 0;
    v2[1] += 8;
    if ( (ushort)v2[1] > 0x28u )
      v2[1] = 40;
    v5 = (ushort)v2[1];
    v6 = v5 >> 2;
    v9 = 22 - (v5 >> 2);
    v7 = (v5 >> 31) + __ROR4__((v5 << 30) - (v5 >> 31), 30);
    Function_2019cb8(*(uint *)(v3 + 504), 5, 228, 2u, 2u, 0x18u, v5 >> 2, 0xFu);
    Function_2019cb8(*(uint *)(v3 + 504), 5, 228, 2u, v9, 0x18u, v6, 0xFu);
    if ( v7 )
    {
      Function_2019cb8(*(uint *)(v3 + 504), 5, 232 - v7, 2u, 0, 0x18u, 1u, 0xFu);
      Function_2019cb8(*(uint *)(v3 + 504), 5, v7 + 224, 2u, v9 - 1, 0x18u, 1u, 0xFu);
    }
    Function_2019448(*(uint **)(v3 + 504), 5u);
    result = (ushort)v2[1];
    if ( result == 40 )
      result = Function_225524c(v8);
  }
  return result;
}

//----- (02254B8C) --------------------------------------------------------
int __fastcall Function_2254b8c(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;

  v2 = a2;
  Function_2255244(a2);
  v3 = Function_225523c(v2);
  v4 = Function_2255248(v2);
  if ( v4 >= 4 )
    return Function_225480c(v2);
  Function_2019cb8(*(uint *)(v3 + 504), 5, 227 - v4, 2u, 2u, 0x18u, 0x14u, 0xFu);
  Function_2019448(*(uint **)(v3 + 504), 5u);
  return Function_225524c(v2);
}

//----- (02254BF0) --------------------------------------------------------
int __fastcall Function_2254bf0(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;

  v2 = a2;
  Function_2255244(a2);
  v3 = Function_225523c(v2);
  v4 = Function_2255248(v2);
  if ( v4 >= 4 )
    return Function_225480c(v2);
  Function_2019cb8(*(uint *)(v3 + 504), 5, 231 - v4, 2u, 2u, 0x18u, 0x14u, 0xFu);
  Function_2019448(*(uint **)(v3 + 504), 5u);
  return Function_225524c(v2);
}

//----- (02254C54) --------------------------------------------------------
int __fastcall Function_2254c54(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uchar v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_225523c(a1);
  if ( v5 )
    v7 = 12;
  else
    v7 = 4;
  Function_20198c0(*(uint *)(v6 + 504), 4, v4, 28, v7, 4u, 8u);
  Function_2019448(*(uint **)(v6 + 504), 4u);
  return Function_225480c(v3);
}

//----- (02254CA8) --------------------------------------------------------
int __fastcall Function_2254ca8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_225523c(a2);
  Function_2254c54(v2, v3 + 108, 0);
  return Function_2005748(0x671u);
}

//----- (02254CCC) --------------------------------------------------------
int __fastcall Function_2254ccc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_225523c(a2);
  Function_2254c54(v2, v3 + 300, 1);
  return Function_2005748(0x671u);
}

//----- (02254CF4) --------------------------------------------------------
int __fastcall Function_2254cf4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_225523c(a2);
  return Function_2254c54(v2, v3 + 44, 0);
}

//----- (02254D0C) --------------------------------------------------------
int __fastcall Function_2254d0c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_225523c(a2);
  return Function_2254c54(v2, v3 + 236, 1);
}

//----- (02254D24) --------------------------------------------------------
int __fastcall Function_2254d24(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_225523c(a2);
  Function_2254c54(v2, v3 + 172, 0);
  return Function_2005748(0x66Fu);
}

//----- (02254D48) --------------------------------------------------------
int __fastcall Function_2254d48(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_225523c(a2);
  Function_2254c54(v2, v3 + 364, 1);
  return Function_2005748(0x66Fu);
}

//----- (02254D70) --------------------------------------------------------
int __fastcall Function_2254d70(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)Function_225523c(a2);
  Function_2254de0();
  Function_2254ee8(v3 + 117, *v3);
  return Function_225480c(v2);
}

//----- (02254D9C) --------------------------------------------------------
int __fastcall Function_2254d9c(int a1, int a2)
{
  int v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)Function_225523c(a2);
  Function_2254ee8(v3 + 117, *v3);
  return Function_225480c(v2);
}

//----- (02254DBC) --------------------------------------------------------
int __fastcall Function_2254dbc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_225523c(a2);
  Function_2254f40(v3 + 468);
  return Function_225480c(v2);
}

//----- (02254DD8) --------------------------------------------------------
uint *__fastcall Function_2254dd8(uint *result, int a2)
{
  *result = 0;
  result[1] = a2;
  return result;
}

//----- (02254DE0) --------------------------------------------------------
int __fastcall Function_2254de0(int a1, uint *a2)
{
  int v2;
  uint *v3;
  int result;
  int v5;

  v2 = a1;
  v3 = a2;
  result = Function_2255958(a2 + 2, 12, 3, 4, 7);
  if ( result )
  {
    Function_2006ec0(12, 2, 1, 0, 0, 1, 7);
    Call_LoadFromNARC_RLCN(12, 0, 5u, 0, 96, 7);
    Function_2254e84(v2, 15);
    result = Function_2255810(v3[1], dword_2255F44, v3 + 2);
    v3[7] = result;
    if ( result )
    {
      v5 = Function_2255810(v3[1], dword_2255F44, v3 + 2);
      v3[8] = v5;
      if ( v5 )
      {
        Function_22558f0();
        Function_2255938(v3[7], 15);
        Function_2255938(v3[8], 15);
        result = 1;
        *v3 = 1;
      }
      else
      {
        result = Function_22558b0(v3[1], v3[7]);
      }
    }
  }
  return result;
}

//----- (02254E84) --------------------------------------------------------
uint __fastcall Function_2254e84(int a1, int a2)
{
  ushort *v2;
  int v3;
  uchar *v4;
  short v5;
  short v6;

  v2 = (ushort *)a1;
  v3 = a2;
  v4 = (uchar *)Function_2254540(*(uint *)(a1 + 508));
  Function_2056888(v4);
  Function_2254728((int)(v2 + 512));
  v5 = v2[513];
  v2[513] = v2[516];
  v2[516] = v5;
  v6 = v2[520];
  v2[520] = v2[527];
  v2[527] = v6;
  DC_FlushRange((int)(v2 + 512), 32);
  return GXS_LoadOBJPltt((int)(v2 + 512), 32 * v3, 0x20u);
}

//----- (02254EE8) --------------------------------------------------------
int __fastcall Function_2254ee8(int *a1, uint *a2)
{
  int *v2;
  int result;
  int v4;
  uint v5;
  int v6;

  v2 = a1;
  result = *a1;
  if ( result )
  {
    v4 = *a2 + 1;
    REG_DIVCNT = 0;
    REG_DIV_NUMER_L = v4;
    REG_DIV_DENOM_L = 10;
    REG_DIV_DENOM_H = 0;
    v5 = (uint)&REG_DIVCNT >> 11;
    while ( (ushort)REG_DIVCNT & (ushort)v5 )
      ;
    while ( (ushort)REG_DIVCNT & (ushort)((uint)&REG_DIV_RESULT_L >> 11) )
      ;
    v6 = REG_DIVREM_RESULT_L;
    Function_22558c4(v2[7], REG_DIV_RESULT_L);
    result = Function_22558c4(v2[8], v6);
  }
  return result;
}

//----- (02254F40) --------------------------------------------------------
int __fastcall Function_2254f40(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  result = *a1;
  if ( result )
  {
    Function_22558b0(v1[1], v1[7]);
    Function_22558b0(v1[1], v1[8]);
    Function_22559b0(v1 + 2);
    result = 0;
    *v1 = 0;
  }
  return result;
}

//----- (02254F68) --------------------------------------------------------
int __fastcall Function_2254f68(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a2;
  v3 = Function_225523c(a2);
  Function_2255244(v2);
  result = Function_2255248(v2);
  v5 = result;
  switch ( (uchar)result )
  {
    case 0:
      G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 2, 28, 26, 6);
      Function_2019448(*(uint **)(v3 + 504), 4u);
      goto LABEL_3;
    case 1:
    case 2:
    case 3:
LABEL_3:
      Function_2019cb8(*(uint *)(v3 + 504), 5, 231 - v5, 2u, 2u, 0x18u, 0x14u, 0xFu);
      Function_2019448(*(uint **)(v3 + 504), 5u);
      if ( v5 == 3 )
        result = Function_225480c(v2);
      else
        result = Function_225524c(v2);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02255004) --------------------------------------------------------
int __fastcall Function_2255004(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_225523c(a2);
  Function_2019cb8(*(uint *)(v3 + 504), 5, 64, 2u, 2u, 0x18u, 0x14u, 0xFu);
  Function_2019448(*(uint **)(v3 + 504), 4u);
  Function_2019448(*(uint **)(v3 + 504), 5u);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 0, 0, 31, 0);
  return Function_225480c(v2);
}

//----- (02255064) --------------------------------------------------------
int __fastcall Function_2255064(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = Function_225523c(a2);
  Function_2019044(*(uint *)(v3 + 504), 4);
  Function_2019044(*(uint *)(v3 + 504), 5);
  return Function_225480c(v2);
}

//----- (02255090) --------------------------------------------------------
uint *__fastcall Function_2255090(uint *result, uint a2)
{
  uint v2;

  *result = a2;
  v2 = 0;
  result[1] = 305419896;
  if ( a2 )
  {
    do
    {
      ++v2;
      result[2] = -1;
      ++result;
    }
    while ( v2 < a2 );
  }
  return result;
}

//----- (022550B0) --------------------------------------------------------
int __fastcall Function_22550b0(uint *a1, uint a2)
{
  uint *v2;
  uint v3;
  uint v4;
  uint *v5;

  v2 = a1;
  v3 = a2;
  if ( a1[1] != 305419896 )
    ErrorHandler();
  v4 = 0;
  if ( !*v2 )
    return 0;
  v5 = v2;
  while ( v5[2] != -1 )
  {
    ++v4;
    ++v5;
    if ( v4 >= *v2 )
      return 0;
  }
  v2[v4 + 2] = v3;
  return 1;
}

//----- (022550F0) --------------------------------------------------------
int __fastcall Function_22550f0(uint *a1, int a2)
{
  uint *v2;
  int v3;
  uint v4;
  uint *v5;
  int result;

  v2 = a1;
  v3 = a2;
  if ( a1[1] != 305419896 )
    ErrorHandler();
  v4 = 0;
  if ( !*v2 )
    return ErrorHandler();
  v5 = v2;
  while ( v3 != v5[2] )
  {
    ++v4;
    ++v5;
    if ( v4 >= *v2 )
      return ErrorHandler();
  }
  result = (int)&v2[v4];
  *(uint *)(result + 8) = -1;
  return result;
}

//----- (02255130) --------------------------------------------------------
int __fastcall Function_2255130(uint *a1, int a2)
{
  uint v2;
  uint v3;

  v2 = *a1;
  v3 = 0;
  if ( !*a1 )
    return 1;
  while ( a2 != a1[2] )
  {
    ++v3;
    ++a1;
    if ( v3 >= v2 )
      return 1;
  }
  return 0;
}

//----- (02255154) --------------------------------------------------------
int __fastcall Function_2255154(uint *a1)
{
  uint v1;
  uint v2;

  v1 = *a1;
  v2 = 0;
  if ( !*a1 )
    return 1;
  while ( a1[2] == -1 )
  {
    ++v2;
    ++a1;
    if ( v2 >= v1 )
      return 1;
  }
  return 0;
}

//----- (0225517C) --------------------------------------------------------
uint *__fastcall Function_225517c(uint *a1, uint a2, uint a3, uint a4, uint *a5, uint a6, uint a7)
{
  uint *v7;
  int v8;
  uint v9;
  uint *v10;
  int v11;
  uint *v12;
  int v13;
  uint *result;
  uint v15;
  uint v16;

  v7 = a1;
  v15 = a3;
  v8 = 0;
  v9 = a2;
  v16 = a4;
  if ( *v7 == -1 )
    return (uint *)ErrorHandler();
  v10 = v7;
  while ( a2 != *v10 )
  {
    v10 += 3;
    ++v8;
    if ( *v10 == -1 )
      return (uint *)ErrorHandler();
  }
  v11 = 3 * v8;
  v12 = (uint *)malloc(a7, v7[3 * v8 + 2] + 24);
  if ( !v12 )
  {
    ErrorHandler();
    return (uint *)ErrorHandler();
  }
  if ( v7[v11 + 2] )
    v13 = (int)(v12 + 6);
  else
    v13 = 0;
  v12[3] = v13;
  if ( !Function_22550b0(a5, v9) )
    return (uint *)free((int)v12);
  v12[2] = v15;
  v12[1] = 0;
  *v12 = v9;
  v12[4] = v16;
  result = AddTaskToTaskList1(v7[v11 + 1], (int)v12, a6);
  v12[5] = (uint)result;
  if ( result )
    result = (uint *)((int (*)(void))v7[v11 + 1])();
  return result;
}

//----- (02255224) --------------------------------------------------------
uint __fastcall Function_2255224(uint *a1, int *a2)
{
  int v2;

  v2 = (int)a2;
  Function_22550f0(a1, *a2);
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 20));
  return free(v2);
}

//----- (0225523C) --------------------------------------------------------
int __fastcall Function_225523c(int a1)
{
  return *(uint *)(a1 + 8);
}

//----- (02255240) --------------------------------------------------------
int __fastcall Function_2255240(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (02255244) --------------------------------------------------------
int __fastcall Function_2255244(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (02255248) --------------------------------------------------------
int __fastcall Function_2255248(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (0225524C) --------------------------------------------------------
int __fastcall Function_225524c(int result)
{
  ++*(uint *)(result + 4);
  return result;
}

//----- (02255254) --------------------------------------------------------
int __fastcall Function_2255254(int result, int a2)
{
  *(uint *)(result + 4) = a2;
  return result;
}

//----- (02255258) --------------------------------------------------------
int __fastcall Function_2255258(int a1, int a2, int a3, int a4, short a5, short a6, short a7)
{
  ushort *v7;
  int v8;
  int result;

  v7 = (ushort *)(a1 + 2 * (a2 + a3 * a4));
  *v7 = (a7 << 12) | a5;
  v7[1] = (a5 + 1) | (a7 << 12);
  v8 = a4;
  v7[v8] = (a7 << 12) | (a5 + a6);
  result = (int)&v7[v8];
  v7[v8 + 1] = (a7 << 12) | (a5 + a6 + 1);
  return result;
}

//----- (02255290) --------------------------------------------------------
int __fastcall Function_2255290(ushort *a1, uint a2)
{
  ushort *v2;
  uint v3;
  int result;
  int v5;
  uint v6;
  uint v7;

  v2 = a1;
  v3 = a2;
  result = malloc(8u, 32);
  v5 = result;
  if ( result )
  {
    Function_2254728(result);
    v6 = 0;
    if ( v3 )
    {
      do
      {
        v7 = (uint)u32_div_f(
                             114 * ((*v2 & 0x7C00) >> 10) + 299 * (*v2 & 0x1F) + 587 * ((*v2 & 0x3E0) >> 5),
                             1000) >> 3;
        if ( v7 > 3 )
          v7 = 3;
        ++v6;
        *v2 = *(ushort *)(v5 + 2 * *((uchar *)dword_2256078 + v7));
        ++v2;
      }
      while ( v6 < v3 );
    }
    result = free(v5);
  }
  return result;
}

//----- (02255308) --------------------------------------------------------
uint __fastcall Function_2255308(int a1, int a2)
{
  int v2;
  int v3;
  uint result;
  int v5;
  int v6;
  int v7;
  ushort *v8;

  v2 = a1;
  v3 = a2;
  result = malloc(8u, 32);
  v5 = result;
  if ( result )
  {
    v6 = malloc(8u, 32);
    Function_2254728(v5);
    if ( v6 )
    {
      v7 = 0;
      v8 = (ushort *)v6;
      do
      {
        ++v7;
        *v8 = *(ushort *)(v5 + 2 * v2);
        ++v8;
      }
      while ( v7 < 16 );
      DC_FlushRange(v6, 32);
      GXS_LoadOBJPltt(v6, 32 * v3, 0x20u);
      free(v6);
    }
    result = free(v5);
  }
  return result;
}

//----- (02255360) --------------------------------------------------------
uint __fastcall Function_2255360(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint result;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  v5 = Function_2079fd0();
  result = Function_2006f88(19, v5, &v8, 8);
  v7 = result;
  if ( result )
  {
    Function_2255290(*(ushort **)(v8 + 12), 0x40u);
    DC_FlushRange(*(uint *)(v8 + 12), 128);
    GXS_LoadOBJPltt(*(uint *)(v8 + 12), 32 * v4, 0x80u);
    result = free(v7);
  }
  return result;
}

//----- (022553A0) --------------------------------------------------------
uint __fastcall Function_22553a0(int a1, uint *a2, uint a3, int a4)
{
  uint *v4;
  uint result;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  uint v15;
  int *v16;
  int v17;

  v11 = a1;
  v13 = 2 * a4;
  v4 = a2;
  v12 = a3;
  result = malloc(8u, *((ushort *)&dword_2256074 + a4));
  v8 = result;
  if ( result )
  {
    v16 = LoadFromNARC_8(19, 8u, v6, v7);
    if ( v16 )
    {
      v15 = 0;
      if ( v12 )
      {
        v9 = 0;
        v10 = *(ushort *)((char *)&dword_2256070 + v13);
        v14 = *(ushort *)((char *)&dword_2256074 + v13);
        do
        {
          Function_2006dc8((int)v16, *v4, 0, v14, v8);
          NNS_G2dGetUnpackedPaletteData(v8, &v17);
          DC_FlushRange(*(uint *)(v17 + 20), v10);
          GXS_LoadOBJ(*(int **)(v17 + 20), 32 * v11 + v9, v10);
          ++v4;
          v9 += v10;
          ++v15;
        }
        while ( v15 < v12 );
      }
      Call_FS_CloseFile(v16);
    }
    result = free(v8);
  }
  return result;
}

//----- (02255440) --------------------------------------------------------
int __fastcall Function_2255440(int a1, int a2, uchar a3, int a4)
{
  int v4;
  uchar v5;
  int v6;
  int v7;
  int v8;
  short v10;
  short v11;
  short v12;
  short v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a3;
  v10 = 2;
  v11 = 3;
  v12 = 10;
  v13 = 11;
  v6 = a1;
  Function_20198c0(a1, a3, (int)&v10, 9, 0xBu, 2u, 2u);
  v10 = 4;
  v11 = 5;
  v12 = 12;
  v13 = 13;
  Function_20198c0(v6, v5, (int)&v10, 11, 0xBu, 2u, 2u);
  v10 = 6;
  v11 = 7;
  v12 = 14;
  v13 = 15;
  Function_20198c0(v6, v5, (int)&v10, 13, 0xBu, 2u, 2u);
  v7 = u32_div_f(v4, 10);
  v8 = v4 - 10 * v7;
  v10 = 16 * ((uint)(v7 + 4) >> 2) + (2 * (v7 + 4) & 7);
  v11 = v10 + 1;
  v12 = v10 + 8;
  v13 = v10 + 9;
  Function_20198c0(v6, v5, (int)&v10, 15, 0xBu, 2u, 2u);
  v10 = 16 * ((uint)(v8 + 4) >> 2) + (2 * (v8 + 4) & 7);
  v11 = v10 + 1;
  v12 = v10 + 8;
  v13 = v10 + 9;
  return Function_20198c0(v6, v5, (int)&v10, 17, 0xBu, 2u, 2u);
}

//----- (02255540) --------------------------------------------------------
int __fastcall Function_2255540(ushort *a1, uint a2)
{
  uint v2;
  ushort *v3;
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
  v3 = a1;
  v4 = 0;
  v5 = malloc(a2, 28);
  v6 = v5;
  if ( v5 )
  {
    *(uint *)(v5 + 20) = 0;
    *(uint *)(v5 + 12) = 0;
    *(uint *)(v5 + 4) = 0;
    *(uint *)v5 = v3;
    *(uint *)(v5 + 24) = v2;
    *(ushort *)(v5 + 16) = Function_20a813c(v3);
    v7 = malloc(v2, 8 * *(ushort *)(v6 + 16));
    *(uint *)(v6 + 20) = v7;
    if ( v7 )
    {
      v8 = malloc(v2, 148 * *(ushort *)(v6 + 16));
      *(uint *)(v6 + 12) = v8;
      if ( v8 )
      {
        v9 = malloc(v2, 4 * *(ushort *)(v6 + 16));
        *(uint *)(v6 + 4) = v9;
        if ( v9 )
        {
          v10 = *(ushort *)(v6 + 16);
          v11 = *(uint *)(v6 + 12);
          Function_22559d8();
          *(ushort *)(v6 + 18) = 0;
          *(uint *)(v6 + 8) = 0;
          v4 = 1;
        }
      }
    }
  }
  if ( v4 )
    return v6;
  if ( v6 )
  {
    v12 = *(uint *)(v6 + 20);
    if ( v12 )
      Function_2018238(v2, v12);
    v13 = *(uint *)(v6 + 12);
    if ( v13 )
      Function_2018238(v2, v13);
    v14 = *(uint *)(v6 + 4);
    if ( v14 )
      Function_2018238(v2, v14);
    Function_2018238(v2, v6);
  }
  return 0;
}

//----- (022555E8) --------------------------------------------------------
uint __fastcall Function_22555e8(uint result)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = result;
  if ( result )
  {
    v2 = *(uint *)(result + 20);
    if ( v2 )
      free(v2);
    v3 = *(uint *)(v1 + 12);
    if ( v3 )
      free(v3);
    v4 = *(uint *)(v1 + 4);
    if ( v4 )
      free(v4);
    result = free(v1);
  }
  return result;
}

//----- (02255614) --------------------------------------------------------
int __fastcall Function_2255614(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  uint *v6;
  uint v7;
  int *v8;
  int *v9;
  int v10;
  int v11;
  ushort v12;
  uint v13;
  int v14;
  uint v15;
  uint v16;
  uint v17;
  uint v18;
  int v19;
  uint v20;
  int v21;
  ushort i;
  int v23;
  int v24;
  int v25;

  v25 = a4;
  v21 = a1;
  result = *(ushort *)(a1 + 18);
  if ( result )
  {
    v5 = *(uint *)(v21 + 8);
    v6 = *(uint **)(v21 + 20);
    for ( i = *(ushort *)(v21 + 16); v5; v5 = *(uint *)(v5 + 96) )
    {
      NNS_G2dTickCellAnimation((int *)(v5 + 8), 0x2000);
      if ( !*(uchar *)(v5 + 138) )
      {
        v23 = *(uint *)(v5 + 104) + (*(short *)(v5 + 80) << 12);
        v24 = *(uint *)(v5 + 108) + (*(short *)(v5 + 82) << 12);
        if ( *(uchar *)(v5 + 139) )
        {
          Function_20bb44c(*(uint **)(v5 + 112));
          if ( *(ushort *)(v5 + 86) & 4 )
          {
            v8 = &Unknown_20f983c[((*(ushort *)(v5 + 84) + *(ushort *)(v5 + 144)) & 0xFFFF) >> 4];
            MTX_Rot22_(*(uint **)(v5 + 112), *(short *)v8, *((short *)v8 + 1));
          }
          else if ( *(ushort *)(v5 + 144) )
          {
            MTX_Rot22_(
              *(uint **)(v5 + 112),
              SLOWORD(Unknown_20f983c[(int)*(ushort *)(v5 + 144) >> 4]),
              SHIWORD(Unknown_20f983c[(int)*(ushort *)(v5 + 144) >> 4]));
          }
          if ( *(ushort *)(v5 + 86) & 2 )
          {
            v9 = *(int **)(v5 + 112);
            v10 = FX_Inv(*(uint *)(v5 + 72));
            v11 = FX_Inv(*(uint *)(v5 + 76));
            MTX_ScaleApply22(v9, v9, v10, v11);
          }
          v12 = Function_20a7d34(*(uint *)v21, *(uint **)(v5 + 112));
          v7 = Function_20a8da0((int)v6, i, *(ushort **)(v5 + 56), *(int **)(v5 + 112), &v23, v12, 1);
        }
        else
        {
          v7 = Function_20a8da0((int)v6, i, *(ushort **)(v5 + 56), 0, &v23, 0, 0);
        }
        i -= v7;
        v13 = v7;
        v14 = v7 - 1;
        if ( v13 )
        {
          do
          {
            v15 = v6[1] & 0xFFFFF3FF | (*(ushort *)(v5 + 134) << 10) & 0xFFF;
            v6[1] = v15;
            v16 = (((v15 << 16 >> 28) + *(ushort *)(v5 + 136)) << 12) & 0xFFFF | v15 & 0xFFFF0FFF;
            v6[1] = v16;
            v6[1] = ((v16 & 0x3FF) + *(ushort *)(v5 + 140)) & 0x3FF | v16 & 0xFFFFFC00;
            v17 = (((8 * *v6 >> 31) ^ *(uchar *)(v5 + 142)) << 28) & 0x1FFFFFFF | *v6 & 0xEFFFFFFF;
            *v6 = v17;
            v18 = (((4 * v17 >> 31) ^ *(uchar *)(v5 + 143)) << 31 >> 2) | v17 & 0xDFFFFFFF;
            *v6 = v18;
            *v6 = (((v18 << 19 >> 31) ^ *(uchar *)(v5 + 146)) << 12) & 0x1FFF | v18 & 0xFFFFEFFF;
            v19 = v14;
            v6 += 2;
            --v14;
          }
          while ( v19 );
        }
      }
    }
    result = v21;
    v20 = *(uint *)(v21 + 20);
    if ( (uint)v6 > v20 )
      result = Function_20a7b80(
                 *(uint *)v21,
                 *(ushort **)(v21 + 20),
                 (uint)((uint)v6
                        + ((uint)(((int)v6 - *(uint *)(v21 + 20)) >> 2) >> 29)
                        - *(uint *)(v21 + 20)) << 13 >> 16);
  }
  return result;
}

//----- (02255810) --------------------------------------------------------
int __fastcall Function_2255810(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  int v10;
  char v11;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2255a04();
  v7 = v6;
  if ( v6 )
  {
    *(ushort *)(v6 + 134) = *(uchar *)(v4 + 11);
    *(ushort *)(v6 + 132) = *(uchar *)(v4 + 12);
    Function_2255a40(v3, v6);
    *(uint *)v7 = *(uint *)(v5 + 8);
    v8 = *(ushort **)(v5 + 12);
    *(uint *)(v7 + 4) = v8;
    v9 = NNS_G2dGetAnimSequenceByIdx(v8, *(ushort *)(v4 + 8));
    Function_20a8c88((int *)(v7 + 8), v9, *(uint *)v7);
    v10 = *(uint *)(v4 + 4);
    *(uint *)(v7 + 104) = *(uint *)v4;
    *(uint *)(v7 + 108) = v10;
    v11 = 0;
    *(ushort *)(v7 + 136) = 0;
    *(ushort *)(v7 + 140) = 0;
    if ( *(uchar *)(v4 + 10) & 1 )
      v11 = 1;
    *(uchar *)(v7 + 142) = v11;
    *(uchar *)(v7 + 143) = (*(uchar *)(v4 + 10) & 2) != 0;
    *(uchar *)(v7 + 146) = 0;
    *(ushort *)(v7 + 144) = 0;
    *(uint *)(v7 + 112) = v7 + 116;
    *(uchar *)(v7 + 139) = *(uchar *)(v4 + 13);
    *(uchar *)(v7 + 138) = 0;
  }
  return v7;
}

//----- (022558B0) --------------------------------------------------------
int __fastcall Function_22558b0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2255a98();
  return Function_2255a1c(v2, v3);
}

//----- (022558C4) --------------------------------------------------------
int __fastcall Function_22558c4(int a1, ushort a2)
{
  int *v2;
  int v3;

  v2 = (int *)a1;
  v3 = NNS_G2dGetAnimSequenceByIdx(*(ushort **)(a1 + 4), a2);
  return Function_20a8c88(v2 + 2, v3, *v2);
}

//----- (022558E0) --------------------------------------------------------
BOOL __fastcall Function_22558e0(int a1)
{
  return *(uint *)(a1 + 20) == 0;
}

//----- (022558F0) --------------------------------------------------------
int __fastcall Function_22558f0(int result, int a2, int a3)
{
  *(uint *)(result + 104) += a2;
  *(uint *)(result + 108) += a3;
  return result;
}

//----- (02255900) --------------------------------------------------------
int __fastcall Function_2255900(int result, int a2, int a3)
{
  *(uint *)(result + 104) = a2;
  *(uint *)(result + 108) = a3;
  return result;
}

//----- (02255908) --------------------------------------------------------
int __fastcall Function_2255908(int a1, uint *a2, uint *a3)
{
  int result;

  *a2 = *(uint *)(a1 + 104);
  result = *(uint *)(a1 + 108);
  *a3 = result;
  return result;
}

//----- (02255914) --------------------------------------------------------
uchar *__fastcall Function_2255914(int a1, char a2)
{
  uchar *result;

  result = (uchar *)(a1 + 138);
  *result = a2;
  return result;
}

//----- (0225591C) --------------------------------------------------------
int __fastcall Function_225591c(int a1, int a2, short a3)
{
  int v3;
  int v4;
  short v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_2255a98();
  *(ushort *)(v3 + 132) = v5;
  return Function_2255a40(v4, v3);
}

//----- (02255938) --------------------------------------------------------
ushort *__fastcall Function_2255938(int a1, short a2)
{
  ushort *result;

  result = (ushort *)(a1 + 136);
  *result = a2;
  return result;
}

//----- (02255940) --------------------------------------------------------
ushort *__fastcall Function_2255940(int a1, short a2)
{
  ushort *result;

  result = (ushort *)(a1 + 140);
  *result = a2;
  return result;
}

//----- (02255948) --------------------------------------------------------
uchar *__fastcall Function_2255948(int a1, char a2)
{
  uchar *result;

  result = (uchar *)(a1 + 146);
  *result = a2;
  return result;
}

//----- (02255950) --------------------------------------------------------
ushort *__fastcall Function_2255950(int a1, short a2)
{
  ushort *result;

  result = (ushort *)(a1 + 144);
  *result = a2;
  return result;
}

//----- (02255958) --------------------------------------------------------
int __fastcall Function_2255958(int *a1, int a2, int a3, int a4, int a5)
{
  int *v5;
  int v6;
  int v7;
  int result;

  v5 = a1;
  v6 = a2;
  v7 = a4;
  a1[4] = a5;
  *a1 = (int)Function_2006fd8(a2, a3, a5);
  v5[1] = (int)Function_2006fd8(v6, v7, a5);
  if ( !*v5 || !v5[1] )
    goto LABEL_10;
  if ( !NNS_G2dGetUnpackedCellBank(*v5, v5 + 2) )
    return 0;
  if ( !Function_20a6d94(v5[1], v5 + 3) )
    result = 0;
  else
LABEL_10:
    result = 1;
  return result;
}

//----- (022559B0) --------------------------------------------------------
uint *__fastcall Function_22559b0(uint *result)
{
  uint *v1;
  int v2;

  v1 = result;
  if ( *result )
  {
    Function_2018238(result[4], *result);
    result = 0;
    *v1 = 0;
  }
  v2 = v1[1];
  if ( v2 )
  {
    Function_2018238(v1[4], v2);
    result = 0;
    v1[1] = 0;
  }
  return result;
}

//----- (022559D8) --------------------------------------------------------
int __fastcall Function_22559d8(uint *a1, int a2, int a3)
{
  uint *v3;
  int result;
  int v5;
  int i;

  v3 = a1;
  result = a3;
  v5 = a2;
  for ( i = a3 - 1; result; --i )
  {
    *v3 = v5;
    ++v3;
    Function_22559fc(v5);
    result = i;
    v5 += 148;
  }
  return result;
}

//----- (022559FC) --------------------------------------------------------
int __fastcall Function_22559fc(int result)
{
  *(uint *)(result + 96) = 0;
  *(uint *)(result + 100) = 0;
  return result;
}

//----- (02255A04) --------------------------------------------------------
int __fastcall Function_2255a04(int a1)
{
  uint v1;

  v1 = *(ushort *)(a1 + 18);
  if ( v1 >= *(ushort *)(a1 + 16) )
    return 0;
  *(ushort *)(a1 + 18) = v1 + 1;
  return *(uint *)(*(uint *)(a1 + 4) + 4 * v1);
}

//----- (02255A1C) --------------------------------------------------------
int __fastcall Function_2255a1c(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1;
  result = *(ushort *)(a1 + 18);
  v4 = a2;
  if ( result )
  {
    Function_22559fc(a2);
    result = 4 * (ushort)--*(ushort *)(v2 + 18);
    *(uint *)(*(uint *)(v2 + 4) + result) = v4;
  }
  return result;
}

//----- (02255A40) --------------------------------------------------------
int __fastcall Function_2255a40(int a1, uint *a2)
{
  uint *v2;
  int result;
  uint *i;

  v2 = *(uint **)(a1 + 8);
  if ( v2 )
  {
    for ( i = *(uint **)(a1 + 8); a2[33] >= i[33]; i = (uint *)i[24] )
    {
      if ( !i[24] )
      {
        i[24] = a2;
        a2[25] = i;
        result = 0;
        a2[24] = 0;
        return result;
      }
    }
    if ( i == v2 )
      *(uint *)(a1 + 8) = a2;
    result = i[25];
    a2[25] = result;
    if ( result )
      *(uint *)(result + 96) = a2;
    a2[24] = i;
    i[25] = a2;
  }
  else
  {
    *(uint *)(a1 + 8) = a2;
    result = 0;
    a2[24] = 0;
    a2[25] = 0;
  }
  return result;
}

//----- (02255A94) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02255A98) --------------------------------------------------------
int __fastcall Function_2255a98(int result, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = *(uint *)(a2 + 100);
  if ( v2 )
  {
    v3 = *(uint *)(a2 + 96);
    if ( v3 )
    {
      *(uint *)(v2 + 96) = v3;
      result = *(uint *)(a2 + 96);
      *(uint *)(result + 100) = *(uint *)(a2 + 100);
    }
    else
    {
      result = 0;
      *(uint *)(v2 + 96) = 0;
    }
  }
  else
  {
    v4 = *(uint *)(a2 + 96);
    if ( v4 )
    {
      *(uint *)(v4 + 100) = 0;
      *(uint *)(result + 8) = *(uint *)(a2 + 96);
    }
    else
    {
      *(uint *)(result + 8) = 0;
    }
  }
  return result;
}

//----- (02255ACC) --------------------------------------------------------
uint *__fastcall Function_2255acc(int a1, uint a2, int a3, int a4, uint a5)
{
  int v5;
  uint v6;
  uint *v7;
  int v8;
  uint v9;
  int v10;
  int v12;
  int v13;

  v5 = a1;
  v6 = a2;
  v12 = a3;
  v13 = a4;
  if ( !a2 )
    ErrorHandler();
  v7 = (uint *)malloc(a5, 24);
  if ( v7 )
  {
    v7[2] = a5;
    v7[1] = v12;
    *v7 = v5;
    v7[3] = v6;
    v7[4] = v13;
    v8 = malloc(a5, 14 * v6);
    v7[5] = v8;
    if ( v8 )
    {
      v9 = 0;
      if ( v6 )
      {
        v10 = 0;
        do
        {
          Function_2255c80(v7[5] + v10);
          ++v9;
          v10 += 14;
        }
        while ( v9 < v6 );
      }
    }
    else
    {
      Function_2018238(a5, (int)v7);
      v7 = 0;
    }
  }
  return v7;
}

//----- (02255B34) --------------------------------------------------------
uint __fastcall Function_2255b34(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  Function_2018238(*(uint *)(v1 + 8), *(uint *)(v1 + 20));
  return Function_2018238(*(uint *)(v1 + 8), v1);
}

//----- (02255B50) --------------------------------------------------------
uint __fastcall Function_2255b50(int *a1)
{
  int *v1;
  int v2;
  uint v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  bool v8;
  uint v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint result;
  uint v18;
  int v19;
  int v20;
  int v21;

  v1 = a1;
  v21 = Function_202278c();
  if ( v21 )
  {
    v2 = Function_2022798();
    v3 = v1[3];
    v4 = 0;
    v20 = v2;
    if ( v3 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        *(uchar *)(v1[5] + v5 + 2) = *(uchar *)(v1[5] + v5 + 1);
        v7 = *v1;
        if ( *(uchar *)(v1[5] + v5 + 1) )
          v8 = Function_2022734((uchar *)(v7 + v6));
        else
          v8 = Function_2022760((uchar *)(v7 + v6));
        ++v4;
        *(uchar *)(v1[5] + v5 + 1) = v8;
        v3 = v1[3];
        v5 += 14;
        v6 += 4;
      }
      while ( v4 < v3 );
    }
  }
  else
  {
    v3 = v1[3];
    v9 = 0;
    v20 = 0;
    if ( v3 )
    {
      v10 = 0;
      do
      {
        ++v9;
        *(uchar *)(v1[5] + v10 + 2) = *(uchar *)(v1[5] + v10 + 1);
        *(uchar *)(v1[5] + v10 + 1) = 0;
        v3 = v1[3];
        v10 += 14;
      }
      while ( v9 < v3 );
    }
  }
  v11 = 0;
  if ( v3 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = ((int (__fastcall *)(int, int, int))dword_2256078[*(uchar *)(v1[5] + v12) + 1])(
              v1[5] + v12,
              v21,
              v20);
      v14 = v1[5] + v12;
      v15 = *(uchar *)(v14 + 1);
      if ( v15 == *(uchar *)(v14 + 2) )
        v15 = 2;
      if ( v13 || v15 != 2 )
        break;
      ++v11;
      v12 += 14;
      if ( v11 >= v1[3] )
        goto LABEL_20;
    }
    v16 = v1[4];
    ((void (__fastcall *)(uint))v1[1])(v11);
  }
LABEL_20:
  result = v1[3];
  v18 = v11 + 1;
  if ( v18 < result )
  {
    v19 = 14 * v18;
    do
    {
      ((void (__fastcall *)(int, int, int))dword_2256078[*(uchar *)(v1[5] + v19) + 1])(v1[5] + v19, v21, v20);
      result = v1[3];
      ++v18;
      v19 += 14;
    }
    while ( v18 < result );
  }
  return result;
}

//----- (02255C48) --------------------------------------------------------
int __fastcall Function_2255c48(int a1, int a2, int a3, short a4)
{
  int result;

  result = *(uint *)(a1 + 20) + 14 * a2 + 2 * a3;
  *(ushort *)(result + 8) = a4;
  return result;
}

//----- (02255C5C) --------------------------------------------------------
int __fastcall Function_25_2255c5c(int a1, int a2, short a3)
{
  int result;

  result = *(uint *)(a1 + 20) + 14 * a2;
  *(ushort *)(result + 12) = a3;
  return result;
}

//----- (02255C68) --------------------------------------------------------
int __fastcall Function_2255c68(int a1, int a2)
{
  int v2;
  int result;

  v2 = 14 * a2;
  *(ushort *)(*(uint *)(a1 + 20) + v2 + 4) = 0;
  result = *(uint *)(a1 + 20);
  *(uchar *)(result + v2) = 4;
  return result;
}

//----- (02255C80) --------------------------------------------------------
long long __fastcall Function_2255c80(long long result)
{
  uint v1;
  int v2;

  v1 = 0;
  *(uchar *)result = 0;
  *(uchar *)(result + 1) = 0;
  *(uchar *)(result + 2) = 0;
  *(ushort *)(result + 4) = 0;
  *(ushort *)(result + 6) = 0;
  v2 = result;
  HIDWORD(result) = 0;
  do
  {
    ++v1;
    *(ushort *)(v2 + 8) = 0;
    v2 += 2;
  }
  while ( v1 < 2 );
  *(ushort *)(result + 12) = 0;
  return result;
}

//----- (02255CA0) --------------------------------------------------------
int __fastcall Function_2255ca0(int result, char a2)
{
  *(uchar *)result = a2;
  *(ushort *)(result + 4) = 0;
  return result;
}

//----- (02255CA8) --------------------------------------------------------
uchar *__fastcall Function_2255ca8(uchar *result, char a2)
{
  *result = a2;
  return result;
}

//----- (02255CAC) --------------------------------------------------------
int __fastcall Function_2255cac(int result)
{
  uint v1;

  v1 = *(ushort *)(result + 4);
  if ( v1 < 0xFFFF )
    *(ushort *)(result + 4) = v1 + 1;
  return result;
}

//----- (02255CC0) --------------------------------------------------------
int __fastcall Function_2255cc0(int a1)
{
  int v1;
  uint v2;

  v1 = *(ushort *)(a1 + 4);
  v2 = 0;
  do
  {
    if ( v1 == *(ushort *)(a1 + 8) )
      return v2 + 5;
    ++v2;
    a1 += 2;
  }
  while ( v2 < 2 );
  return 0;
}

//----- (02255CDC) --------------------------------------------------------
int __fastcall Function_2255cdc(int a1, int a2, int a3)
{
  if ( !*(uchar *)(a1 + 1) || !a3 )
    return 0;
  Function_2255ca0(a1, 1);
  return 1;
}

//----- (02255CF8) --------------------------------------------------------
int __fastcall Function_2255cf8(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_2255cac(a1);
  if ( *(uchar *)(v2 + 1) )
  {
    result = Function_2255cc0(v2);
    if ( result )
      return result;
    if ( *(ushort *)(v2 + 12) && *(ushort *)(v2 + 4) >= (uint)*(ushort *)(v2 + 12) )
    {
      *(ushort *)(v2 + 4) = 0;
      return 7;
    }
  }
  else
  {
    if ( v3 )
    {
      Function_2255ca0(v2, 0);
      return 2;
    }
    if ( !*(ushort *)(v2 + 6) )
    {
      Function_2255ca0(v2, 0);
      return 3;
    }
    Function_2255ca8((uchar *)v2, 2);
  }
  return 0;
}

//----- (02255D58) --------------------------------------------------------
int __fastcall Function_2255d58(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a1;
  v4 = a3;
  Function_2255cac(a1);
  if ( *(ushort *)(v3 + 4) <= (uint)*(ushort *)(v3 + 6) )
  {
    if ( *(uchar *)(v3 + 1) && v4 )
    {
      Function_2255ca0(v3, 3);
      result = 4;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    Function_2255ca0(v3, 0);
    result = 3;
  }
  return result;
}

//----- (02255D90) --------------------------------------------------------
int __fastcall Function_2255d90(int a1)
{
  if ( *(uchar *)(a1 + 1) )
    Function_2255cac(a1);
  else
    Function_2255ca0(a1, 0);
  return 0;
}

//----- (02255DA8) --------------------------------------------------------
int __fastcall Function_2255da8(int a1)
{
  if ( !*(uchar *)(a1 + 1) )
    Function_2255ca0(a1, 0);
  return 0;
}

//----- (02255DBC) --------------------------------------------------------
int __fastcall Function_2255dbc(uint a1, uint a2, uint *a3, uint *a4)
{
  uint v4;
  uint v5;
  uint *v6;
  uint *v7;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a1 >= 0x1E )
    ErrorHandler();
  if ( v5 >= 0x21 )
    ErrorHandler();
  if ( v4 >= 0x1E )
    v4 = 0;
  if ( v5 >= 0x21 )
    v5 = 0;
  *v6 = *((ushort *)dword_22560B0 + v4);
  result = *((ushort *)dword_22560EC + v5);
  *v7 = result;
  return result;
}

//----- (02255DFC) --------------------------------------------------------
int __fastcall Function_2255dfc(uint a1, uint *a2, int *a3)
{
  uint v3;
  uint *v4;
  int *v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a1 >= 4 )
    ErrorHandler();
  *v4 = dword_2256090[2 * v3];
  result = dword_2256094[2 * v3];
  *v5 = result;
  return result;
}

//----- (02255E24) --------------------------------------------------------
int __fastcall Function_2255e24(int a1, uint *a2, uint *a3)
{
  short *v3;
  uint v4;

  v3 = &word_225612E;
  v4 = 0;
  do
  {
    if ( a1 == (ushort)*v3 )
    {
      *a2 = LOBYTE(dword_2256130[v4]);
      *a3 = BYTE1(dword_2256130[v4]);
      return 1;
    }
    ++v4;
    v3 += 2;
  }
  while ( v4 < 0x1D );
  return 0;
}

