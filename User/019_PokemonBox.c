//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_19_21d0d80(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_2017fc8(3, 9, 0x4000);
  Function_2017fc8(3, 10, 245760);
  v2 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 540, 9u);
  if ( v2 )
  {
    v3 = LoadPtrToOverWorldDataIn18(v1);
    Function_21d4be0(v2, v3);
    Function_21d61b0(v2 + 276, v2, v2);
    *(uint *)(v2 + 432) = 0;
    *(uint *)(v2 + 424) = Function_21d0ecc(v2);
    Function_21d0eb0(v2, Function_21d0f20);
  }
  return 1;
}

//----- (021D0DEC) --------------------------------------------------------
int __fastcall Function_19_21d0dec(int a1)
{
  uint *v1;
  uint *v2;
  void (*v3)(void);
  int result;

  v1 = (uint *)LoadOverlayData1c(a1);
  v2 = v1;
  v3 = (void (*)(void))v1[107];
  if ( v3 )
  {
    v3();
    result = 0;
  }
  else if ( v1[106] )
  {
    if ( dword_21BF6C4 & 0x800 && Function_21d6628(v1[69]) == 1 )
    {
      Function_21d5dd8(v2);
      Function_21d6594(v2[69], 43);
      result = 0;
    }
    else
    {
      result = ((int (__fastcall *)(uint *))v2[106])(v2);
    }
  }
  else
  {
    ErrorHandler();
    result = 1;
  }
  return result;
}

//----- (021D0E58) --------------------------------------------------------
int __fastcall Function_19_21d0e58(int a1)
{
  uint *v1;
  uint *v2;

  v1 = (uint *)LoadOverlayData1c(a1);
  if ( !IsFirstPkmnInPartyWantedSpecies(v1[73], 441) )
  {
    v2 = (uint *)LoadVariableAreaAdress_16(v1[71]);
    Function_202cca8(v2);
  }
  Function_21d64a0(v1[69]);
  Function_21d4d58(v1);
  Function_201807c(9);
  Function_201807c(10);
  return 1;
}

//----- (021D0EA0) --------------------------------------------------------
int __fastcall Function_21d0ea0(int result, int a2)
{
  *(uint *)(result + 424) = a2;
  *(uint *)(result + 432) = 0;
  return result;
}

//----- (021D0EB0) --------------------------------------------------------
long long __fastcall Function_21d0eb0(long long result)
{
  *(uint *)(result + 428) = HIDWORD(result);
  HIDWORD(result) = 0;
  *(uint *)(result + 436) = 0;
  return result;
}

//----- (021D0EC0) --------------------------------------------------------
int __fastcall Function_21d0ec0(int result)
{
  *(uint *)(result + 428) = 0;
  return result;
}

//----- (021D0ECC) --------------------------------------------------------
int (*Function_21d0ecc())()
{
  int (*result)();

  switch ( (uchar)Function_21d5e10() )
  {
    case 1u:
      result = Function_21d1270;
      break;
    case 2u:
      result = Function_21d15c0;
      break;
    case 3u:
      result = Function_21d19b8;
      break;
    case 4u:
      result = Function_21d17ac;
      break;
    default:
      result = Function_21d0ff0;
      break;
  }
  return result;
}

//----- (021D0F14) --------------------------------------------------------
int __fastcall Function_21d0f14(int a1)
{
  int result;

  result = *(uint *)(a1 + 280);
  *(uint *)(result + 8) = 1;
  return result;
}

//----- (021D0F20) --------------------------------------------------------
int __fastcall Function_21d0f20(int a1, int *a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      result = Function_21d6600(*(uint *)(v3 + 276), 0);
      if ( result )
      {
        Function_21d6594(*(uint *)(v3 + 276), 1);
        result = *v2 + 1;
        *v2 = result;
      }
    }
    else if ( result == 2 )
    {
      result = Function_21d6600(*(uint *)(v3 + 276), 1);
      if ( result )
        result = Function_21d0ec0(v3);
    }
  }
  else
  {
    Function_21d6594(*(uint *)(v3 + 276), 0);
    result = *v2 + 1;
    *v2 = result;
  }
  return result;
}

//----- (021D0F88) --------------------------------------------------------
int __fastcall Function_21d0f88(int a1, int *a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      result = Function_21d6600(*(uint *)(v3 + 276), 0);
      if ( result )
      {
        Function_21d6594(*(uint *)(v3 + 276), 2);
        result = *v2 + 1;
        *v2 = result;
      }
    }
    else if ( result == 2 )
    {
      result = Function_21d6600(*(uint *)(v3 + 276), 2);
      if ( result )
        result = Function_21d0ec0(v3);
    }
  }
  else
  {
    Function_21d6594(*(uint *)(v3 + 276), 0);
    result = *v2 + 1;
    *v2 = result;
  }
  return result;
}

//----- (021D0FF0) --------------------------------------------------------
int __fastcall Function_21d0ff0(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int (*v6)();

  v1 = a1;
  v2 = a1[108];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( Function_21d6600(a1[69], 5) )
      {
        v6 = Function_21d0ecc();
        Function_21d0ea0((int)v1, (int)v6);
      }
    }
    else if ( v2 == 2 && Function_21d6628(a1[69]) )
    {
      v1[108] = 0;
    }
    return 0;
  }
  if ( dword_21BF6C4 & 1 && Function_21d5e4c() )
  {
    if ( Function_21d5e08(v1) == 3 )
      Function_21d0eb0(__PAIR__(Function_21d2308, (uint)v1));
    else
      Function_21d0eb0(__PAIR__(Function_21d20a4, (uint)v1));
    return 0;
  }
  if ( dword_21BF6C4 & 2 )
  {
    Function_21d0eb0(__PAIR__(Function_21d1f5c, (uint)v1));
    return 0;
  }
  if ( dword_21BF6C0 & 0x200 )
  {
    Function_21d5ce8(v1);
    Function_21d0eb0(__PAIR__(Function_21d45a8, (uint)v1));
    return 0;
  }
  if ( dword_21BF6C0 & 0x100 )
  {
    Function_21d5cbc(v1);
    Function_21d0eb0(__PAIR__(Function_21d45a8, (uint)v1));
    return 0;
  }
  if ( Function_21d4f74() )
  {
    Function_21d6594(v1[69], 5);
    if ( Function_21d5e38(v1) == 1 )
      Function_21d6594(v1[69], 6);
    ++v1[108];
    return 0;
  }
  if ( Function_21d538c(v1) )
  {
    if ( Function_21d5e08(v1) == 4 )
    {
      v4 = v1[97];
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          if ( Function_21d5f9c(v1) == 1 && Function_21d5e34(v1) == 1 )
          {
            Function_2005748(0x5DDu);
            Function_21d5b70(v1);
            Function_21d5888(v1, v1[2], v1);
            Function_21d6594(v1[69], 49);
            Function_21d6594(v1[69], 6);
            v5 = 1;
            goto LABEL_43;
          }
          Function_2005748(0x5F3u);
        }
        else if ( v4 == 2 )
        {
          Function_2005748(0x5DDu);
          Function_21d5b80(v1);
          Function_21d6594(v1[69], 50);
          v5 = 1;
          goto LABEL_43;
        }
      }
      else
      {
        if ( !Function_21d5f9c(v1) && Function_21d5e34(v1) == 1 )
        {
          Function_2005748(0x5DDu);
          Function_21d5b70(v1);
          Function_21d5888(v1, v1[2], v1);
          Function_21d6594(v1[69], 49);
          Function_21d6594(v1[69], 6);
          v5 = 1;
          goto LABEL_43;
        }
        Function_2005748(0x5F3u);
      }
    }
    else
    {
      v3 = v1[97];
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          if ( Function_21d5e08(v1) == 3 )
            Function_2005748(0x5F3u);
          else
            Function_21d0eb0(__PAIR__(Function_21d4938, (uint)v1));
        }
      }
      else
      {
        Function_21d0eb0(__PAIR__(Function_21d4640, (uint)v1));
      }
    }
  }
  v5 = 0;
LABEL_43:
  if ( v5 )
    v1[108] = 2;
  return 0;
}

//----- (021D1238) --------------------------------------------------------
int __fastcall Function_21d1238(int a1, uint *a2)
{
  int v2;
  uint *v3;
  ushort v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = Function_21d5e74();
  if ( Function_207d2d0(v4) )
  {
    *v3 = 30;
    result = 1;
  }
  else if ( Function_21d5fd0(v2, 162, 0) )
  {
    *v3 = 29;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (021D1270) --------------------------------------------------------
int __fastcall Function_21d1270(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int (*v8)();
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  switch ( (uchar)a1[108] )
  {
    case 0u:
      if ( dword_21BF6C4 & 1 )
      {
        if ( Function_21d5e2c(a1) == 6 )
        {
          v4[108] = 2;
        }
        else if ( Function_21d5e4c(v4) )
        {
          if ( Function_21d5e08(v4) == 3 )
            Function_21d0eb0(__PAIR__(Function_21d2308, (uint)v4));
          else
            Function_21d0eb0(__PAIR__(Function_21d20a4, (uint)v4));
        }
        return 0;
      }
      if ( dword_21BF6C4 & 2
        || dword_21BF6C4 & 0x10 && ((int (*)(void))Function_21d5e2c)() & 1
        || dword_21BF6C4 & 0x10 && Function_21d5e2c(v4) == 6 )
      {
        v4[108] = 2;
        return 0;
      }
      if ( Function_21d4f74(dword_21BF6C0, v4) )
      {
        Function_21d6594(v4[69], 5);
        if ( Function_21d5e38(v4) == 1 )
          Function_21d6594(v4[69], 6);
        v4[108] = 1;
        return 0;
      }
      if ( !Function_21d538c(v4) )
        goto LABEL_41;
      if ( Function_21d5e08(v4) == 4 )
      {
        v6 = v4[97];
        if ( v6 )
        {
          if ( v6 == 1 )
          {
            if ( Function_21d5f9c(v4) == 1 && Function_21d5e34(v4) == 1 )
            {
              Function_2005748(0x5DDu);
              Function_21d5b70(v4);
              Function_21d5888(v4, v4[2], v4);
              Function_21d6594(v4[69], 49);
              Function_21d6594(v4[69], 6);
              v7 = 1;
              goto LABEL_42;
            }
            Function_2005748(0x5F3u);
          }
          else if ( v6 == 2 )
          {
            Function_2005748(0x5DDu);
            Function_21d5b80(v4);
            Function_21d6594(v4[69], 50);
            v7 = 1;
            goto LABEL_42;
          }
        }
        else
        {
          if ( !Function_21d5f9c(v4) && Function_21d5e34(v4) == 1 )
          {
            Function_2005748(0x5DDu);
            Function_21d5b70(v4);
            Function_21d5888(v4, v4[2], v4);
            Function_21d6594(v4[69], 49);
            Function_21d6594(v4[69], 6);
            v7 = 1;
            goto LABEL_42;
          }
          Function_2005748(0x5F3u);
        }
      }
      else
      {
        v5 = v4[97];
        if ( v5 )
        {
          if ( v5 == 1 )
          {
            if ( Function_21d5e08(v4) == 3 )
              Function_2005748(0x5F3u);
            else
              Function_21d0eb0(__PAIR__(Function_21d4938, (uint)v4));
          }
        }
        else
        {
          Function_21d0eb0(__PAIR__(Function_21d4640, (uint)v4));
        }
      }
LABEL_41:
      v7 = 0;
LABEL_42:
      if ( v7 )
        v4[108] = 6;
      return 0;
    case 1u:
      if ( Function_21d6600(a1[69], 5) )
        v4[108] = 0;
      return 0;
    case 2u:
      if ( Function_21d5e08(a1) )
      {
        if ( Function_21d5e38(v4) != 1 && Function_21d1238((int)v4, &v10) )
        {
          Function_2005748(0x5F3u);
          Function_21d5408(v4, v10);
          Function_21d6594(v4[69], 24);
          v4[108] = 5;
        }
        else
        {
          Function_21d6594(v4[69], 36);
          v4[108] = 3;
        }
      }
      else
      {
        Function_21d0eb0(__PAIR__(Function_21d1f5c, (uint)v4));
        v4[108] = 0;
      }
      return 0;
    case 3u:
      if ( Function_21d6600(a1[69], 36) )
      {
        Function_21d52d0(v4);
        Function_21d6594(v4[69], 5);
        if ( Function_21d5e38(v4) == 1 )
          Function_21d6594(v4[69], 6);
        v4[108] = 4;
      }
      return 0;
    case 4u:
      if ( Function_21d6600(a1[69], 5) )
      {
        v8 = Function_21d0ecc();
        Function_21d0ea0((int)v4, (int)v8);
      }
      return 0;
    case 5u:
      if ( Function_21d6600(a1[69], 24) && dword_21BF6C4 & 3 )
      {
        Function_21d6594(v4[69], 26);
        v4[108] = 0;
      }
      return 0;
    case 6u:
      if ( Function_21d6628(a1[69]) )
        v4[108] = 0;
      return 0;
    default:
      return 0;
  }
}

//----- (021D15C0) --------------------------------------------------------
int __fastcall Function_21d15c0(long long a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int (*v5)();

  v1 = (uint *)a1;
  v2 = *(uint *)(a1 + 432);
  if ( v2 )
  {
    if ( v2 == 1 && Function_21d6600(*(uint *)(a1 + 276), 5) )
    {
      v5 = Function_21d0ecc();
      Function_21d0ea0((int)v1, (int)v5);
    }
  }
  else if ( dword_21BF6C0 & 0x220 )
  {
    Function_21d5ce8(a1);
    Function_21d0eb0(__PAIR__(Function_21d45a8, (uint)v1));
  }
  else if ( dword_21BF6C0 & 0x110 )
  {
    Function_21d5cbc(a1);
    Function_21d0eb0(__PAIR__(Function_21d45a8, (uint)v1));
  }
  else if ( dword_21BF6C4 & 1 )
  {
    HIDWORD(a1) = Function_21d2694;
    Function_21d0eb0(a1);
  }
  else if ( dword_21BF6C4 & 2 )
  {
    HIDWORD(a1) = Function_21d1f5c;
    Function_21d0eb0(a1);
  }
  else if ( Function_21d4f74(dword_21BF6C0, a1) )
  {
    Function_21d6594(v1[69], 5);
    if ( Function_21d5e38(v1) == 1 )
      Function_21d6594(v1[69], 6);
    v1[108] = 1;
  }
  else if ( Function_21d538c(v1) )
  {
    if ( Function_21d5e08(v1) == 4 )
    {
      v4 = v1[97];
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          if ( Function_21d5f9c(v1) != 1 || Function_21d5e34(v1) != 1 )
          {
            Function_2005748(0x5F3u);
          }
          else
          {
            Function_2005748(0x5DDu);
            Function_21d5b70(v1);
            Function_21d5888(v1, v1[2], v1);
            Function_21d6594(v1[69], 49);
            Function_21d6594(v1[69], 6);
          }
        }
        else if ( v4 == 2 )
        {
          Function_2005748(0x5DDu);
          Function_21d5b80(v1);
          Function_21d6594(v1[69], 50);
        }
      }
      else if ( Function_21d5f9c(v1) || Function_21d5e34(v1) != 1 )
      {
        Function_2005748(0x5F3u);
      }
      else
      {
        Function_2005748(0x5DDu);
        Function_21d5b70(v1);
        Function_21d5888(v1, v1[2], v1);
        Function_21d6594(v1[69], 49);
        Function_21d6594(v1[69], 6);
      }
    }
    else
    {
      v3 = v1[97];
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          if ( Function_21d5e08(v1) == 3 )
            Function_2005748(0x5F3u);
          else
            Function_21d0eb0(__PAIR__(Function_21d4938, (uint)v1));
        }
      }
      else
      {
        Function_21d0eb0(__PAIR__(Function_21d4640, (uint)v1));
      }
    }
  }
  return 0;
}

//----- (021D17AC) --------------------------------------------------------
int __fastcall Function_21d17ac(long long a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int (*v5)();

  v1 = (uint *)a1;
  v2 = *(uint *)(a1 + 432);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( Function_21d6600(*(uint *)(a1 + 276), 4) )
        v1[108] = 0;
    }
    else if ( v2 == 2 && Function_21d6600(*(uint *)(a1 + 276), 5) )
    {
      v5 = Function_21d0ecc();
      Function_21d0ea0((int)v1, (int)v5);
    }
  }
  else if ( dword_21BF6C4 & 1 )
  {
    HIDWORD(a1) = Function_21d1dec;
    Function_21d0eb0(a1);
  }
  else if ( dword_21BF6C4 & 2 )
  {
    HIDWORD(a1) = Function_21d1f5c;
    Function_21d0eb0(a1);
  }
  else if ( dword_21BF6C0 & 0x200 )
  {
    Function_21d5ce8(a1);
    Function_21d0eb0(__PAIR__(Function_21d45a8, (uint)v1));
  }
  else if ( dword_21BF6C0 & 0x100 )
  {
    Function_21d5cbc(a1);
    Function_21d0eb0(__PAIR__(Function_21d45a8, (uint)v1));
  }
  else if ( Function_21d4f74(dword_21BF6C0, a1) )
  {
    Function_21d6594(v1[69], 5);
    if ( Function_21d5e38(v1) == 1 )
      Function_21d6594(v1[69], 6);
    v1[108] = 2;
  }
  else if ( Function_21d538c(v1) )
  {
    if ( Function_21d5e08(v1) == 4 )
    {
      v4 = v1[97];
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          if ( Function_21d5f9c(v1) != 1 || Function_21d5e34(v1) != 1 )
          {
            Function_2005748(0x5F3u);
          }
          else
          {
            Function_2005748(0x5DDu);
            Function_21d5b70(v1);
            Function_21d5888(v1, v1[2], v1);
            Function_21d6594(v1[69], 49);
            Function_21d6594(v1[69], 6);
          }
        }
        else if ( v4 == 2 )
        {
          Function_2005748(0x5DDu);
          Function_21d5b80(v1);
          Function_21d6594(v1[69], 50);
        }
      }
      else if ( Function_21d5f9c(v1) || Function_21d5e34(v1) != 1 )
      {
        Function_2005748(0x5F3u);
      }
      else
      {
        Function_2005748(0x5DDu);
        Function_21d5b70(v1);
        Function_21d5888(v1, v1[2], v1);
        Function_21d6594(v1[69], 49);
        Function_21d6594(v1[69], 6);
      }
    }
    else
    {
      v3 = v1[97];
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          if ( Function_21d5e08(v1) == 3 )
            Function_2005748(0x5F3u);
          else
            Function_21d0eb0(__PAIR__(Function_21d4938, (uint)v1));
        }
      }
      else
      {
        Function_21d0eb0(__PAIR__(Function_21d4640, (uint)v1));
      }
    }
  }
  return 0;
}

//----- (021D19B8) --------------------------------------------------------
int __fastcall Function_21d19b8(long long a1)
{
  uint *v1;
  int v2;
  int v3;
  int (*v4)();

  v1 = (uint *)a1;
  switch ( (uchar)*(uint *)(a1 + 432) )
  {
    case 0u:
      if ( dword_21BF6C4 & 1 )
      {
        if ( Function_21d5e08(a1) == 1 )
        {
          Function_2005748(0x5F3u);
          Function_21d5408(v1, 18);
          Function_21d6594(v1[69], 24);
          v1[108] = 5;
        }
        else
        {
          Function_21d6594(v1[69], 34);
          v1[108] = 1;
        }
      }
      else if ( dword_21BF6C4 & 2 )
      {
        HIDWORD(a1) = Function_21d1f5c;
        Function_21d0eb0(a1);
      }
      else if ( dword_21BF6C0 & 0x200 )
      {
        Function_21d5ce8(a1);
        Function_21d0eb0(__PAIR__(Function_21d45a8, (uint)v1));
      }
      else if ( dword_21BF6C0 & 0x100 )
      {
        Function_21d5cbc(a1);
        Function_21d0eb0(__PAIR__(Function_21d45a8, (uint)v1));
      }
      else if ( Function_21d4f74(dword_21BF6C0, a1) )
      {
        Function_21d6594(v1[69], 5);
        if ( Function_21d5e38(v1) == 1 )
          Function_21d6594(v1[69], 6);
        v1[108] = 4;
      }
      else if ( Function_21d538c(v1) )
      {
        if ( Function_21d5e08(v1) == 4 )
        {
          v3 = v1[97];
          if ( v3 )
          {
            if ( v3 == 1 )
            {
              if ( Function_21d5f9c(v1) != 1 || Function_21d5e34(v1) != 1 )
              {
                Function_2005748(0x5F3u);
              }
              else
              {
                Function_2005748(0x5DDu);
                Function_21d5b70(v1);
                Function_21d5888(v1, v1[2], v1);
                Function_21d6594(v1[69], 49);
                Function_21d6594(v1[69], 6);
              }
            }
            else if ( v3 == 2 )
            {
              Function_2005748(0x5DDu);
              Function_21d5b80(v1);
              Function_21d6594(v1[69], 50);
            }
          }
          else if ( Function_21d5f9c(v1) || Function_21d5e34(v1) != 1 )
          {
            Function_2005748(0x5F3u);
          }
          else
          {
            Function_2005748(0x5DDu);
            Function_21d5b70(v1);
            Function_21d5888(v1, v1[2], v1);
            Function_21d6594(v1[69], 49);
            Function_21d6594(v1[69], 6);
          }
        }
        else
        {
          v2 = v1[97];
          if ( v2 )
          {
            if ( v2 == 1 )
            {
              if ( Function_21d5e08(v1) == 3 )
                Function_2005748(0x5F3u);
              else
                Function_21d0eb0(__PAIR__(Function_21d4938, (uint)v1));
            }
          }
          else
          {
            Function_21d0eb0(__PAIR__(Function_21d4640, (uint)v1));
          }
        }
      }
      break;
    case 1u:
      if ( Function_21d6600(*(uint *)(a1 + 276), 34) )
      {
        Function_21d6594(v1[69], 35);
        v1[108] = 2;
      }
      break;
    case 2u:
      if ( Function_21d6600(*(uint *)(a1 + 276), 35) )
      {
        Function_21d5290(v1);
        Function_21d6594(v1[69], 5);
        if ( Function_21d5e38(v1) == 1 )
          Function_21d6594(v1[69], 6);
        v1[108] = 4;
      }
      break;
    case 3u:
      if ( Function_21d6600(*(uint *)(a1 + 276), 4) )
        v1[108] = 0;
      break;
    case 4u:
      if ( Function_21d6600(*(uint *)(a1 + 276), 5) )
      {
        v4 = Function_21d0ecc();
        Function_21d0ea0((int)v1, (int)v4);
      }
      break;
    case 5u:
      if ( dword_21BF6C4 & 3 )
      {
        Function_21d6594(*(uint *)(a1 + 276), 26);
        v1[108] = 0;
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (021D1C84) --------------------------------------------------------
int __fastcall Function_21d1c84(int a1)
{
  int v1;
  char v2;
  int v3;
  int v4;

  v1 = a1;
  if ( Function_21d5e38(a1) == 2 )
  {
    *(uint *)(v1 + 300) = *(uint *)(v1 + 20);
    if ( *(uchar *)(v1 + 31) )
      v2 = 0;
    else
      v2 = 2;
    *(uchar *)(v1 + 317) = v2;
    *(uchar *)(v1 + 319) = 1;
    *(uchar *)(v1 + 320) = 0;
    *(uchar *)(v1 + 318) = 0;
    *(ushort *)(v1 + 324) = 0;
    *(uint *)(v1 + 304) = *(uint *)(v1 + 420);
  }
  else
  {
    if ( Function_21d5e10(v1) )
    {
      *(uint *)(v1 + 300) = *(uint *)(v1 + 292);
      *(uchar *)(v1 + 317) = 1;
      *(uchar *)(v1 + 319) = GetNrOfPkmnInParty(*(uint *)(v1 + 292));
      *(uchar *)(v1 + 320) = Function_21d5e2c(v1);
    }
    else
    {
      v3 = Function_207999c(*(uint *)(v1 + 288));
      *(uint *)(v1 + 300) = Function_2079c9c(*(uint **)(v1 + 288), v3, 0);
      *(uchar *)(v1 + 317) = 2;
      *(uchar *)(v1 + 319) = 30;
      *(uchar *)(v1 + 320) = Function_21d5e24(v1);
    }
    *(uchar *)(v1 + 318) = 0;
    *(ushort *)(v1 + 324) = 0;
  }
  *(uint *)(v1 + 340) = 0;
  *(uint *)(v1 + 328) = Function_207a274(*(uint *)(v1 + 284));
  *(uint *)(v1 + 344) = Function_208c324(*(uint *)(v1 + 284));
  *(uint *)(v1 + 332) = LoadVariableAreaAdress_18(*(uint *)(v1 + 284));
  Function_208d720(v1 + 300, (int)dword_21DFE38);
  v4 = LoadTrainerDataAdress(*(uint *)(v1 + 284));
  return Function_208e9c0(v1 + 300, v4);
}

//----- (021D1DAC) --------------------------------------------------------
int __fastcall Function_21d1dac(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 432);
  if ( v2 )
  {
    if ( v2 == 1 && Function_21d6628(*(uint *)(a1 + 276)) )
      return 1;
  }
  else
  {
    Function_21d6594(*(uint *)(a1 + 276), 51);
    ++*(uint *)(v1 + 432);
  }
  return 0;
}

//----- (021D1DEC) --------------------------------------------------------
int __fastcall Function_21d1dec(int result, uint *a2)
{
  uint *v2;
  uint v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  v4 = result;
  if ( v3 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_21D1E06 + v3) + 35462664);
  switch ( (uchar)v3 )
  {
    case 0:
      if ( Function_21d5e08(result) == 3 && Function_21d5f7c(v4) )
        return Function_21d0eb0(__PAIR__(Function_21d4184, v4));
      if ( Function_21d5e38(v4) == 1 )
      {
        Function_21d6594(*(uint *)(v4 + 276), 34);
        result = 1;
        *v2 = 1;
      }
      else
      {
        Function_2005748(0x5F3u);
        Function_21d5408(v4, 17);
        Function_21d6594(*(uint *)(v4 + 276), 24);
        result = 4;
        *v2 = 4;
      }
      return result;
    case 1:
      result = Function_21d6600(*(uint *)(result + 276), 34);
      if ( result )
      {
        Function_2005748(0x5DDu);
        Function_21d5408(v4, 11);
        Function_21df964(v4, 1);
        Function_21d6594(*(uint *)(v4 + 276), 25);
        result = 2;
        *v2 = 2;
      }
      return result;
    case 2:
      result = Function_21dfd2c();
      if ( result > 54 )
      {
        if ( result != 55 )
          return result;
LABEL_24:
        Function_2005748(0x5DDu);
        Function_21d6594(*(uint *)(v4 + 276), 26);
        result = 6;
        *v2 = 6;
        return result;
      }
      if ( result >= 54 )
      {
        Function_21d0ea0(v4, (int)Function_21d1dac);
        return Function_21d0ec0(v4);
      }
      if ( result <= -1 && result >= -2 )
      {
        if ( result == -2 )
          return Function_21d6594(*(uint *)(v4 + 276), 28);
        if ( result == -1 )
          goto LABEL_24;
      }
      return result;
    case 4:
      result = Function_21d6600(*(uint *)(result + 276), 25);
      if ( result )
      {
        *v2 = 5;
        goto LABEL_27;
      }
      return result;
    case 5:
LABEL_27:
      result = 3;
      if ( dword_21BF6C4 & 3 )
      {
        Function_21d6594(*(uint *)(v4 + 276), 26);
        result = 6;
        *v2 = 6;
      }
      return result;
    case 6:
      result = Function_21d6600(*(uint *)(result + 276), 26);
      if ( result )
        result = Function_21d0ec0(v4);
      return result;
    default:
      return result;
  }
}

//----- (021D1F5C) --------------------------------------------------------
int __fastcall Function_21d1f5c(int result, uint *a2)
{
  uint *v2;
  uint v3;
  int v4;

  v2 = a2;
  v3 = *a2;
  v4 = result;
  if ( v3 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_21D1F76 + v3) + 35463032);
  switch ( (uchar)v3 )
  {
    case 0:
      if ( Function_21d5e38(result) == 1 )
      {
        if ( Function_21d5e08(v4) == 3 && Function_21d5f7c(v4) )
        {
          result = Function_21d0eb0(__PAIR__(Function_21d4184, v4));
        }
        else
        {
          Function_2005748(0x5DDu);
          Function_21d5408(v4, 12);
          Function_21df964(v4, 0);
          Function_21d6594(*(uint *)(v4 + 276), 25);
          result = 5;
          *v2 = 5;
        }
      }
      else
      {
        Function_2005748(0x5F3u);
        Function_21d5408(v4, 17);
        Function_21d6594(*(uint *)(v4 + 276), 24);
        result = 2;
        *v2 = 2;
      }
      return result;
    case 2:
      result = Function_21d6600(*(uint *)(result + 276), 25);
      if ( result )
      {
        *v2 = 3;
        goto LABEL_24;
      }
      return result;
    case 3:
LABEL_24:
      result = 3;
      if ( dword_21BF6C4 & 3 )
      {
        Function_21d6594(*(uint *)(v4 + 276), 26);
        result = 4;
        *v2 = 4;
      }
      return result;
    case 4:
      result = Function_21d6600(*(uint *)(result + 276), 26);
      if ( result )
        result = Function_21d0ec0(v4);
      return result;
    case 5:
      result = Function_21dfd2c();
      if ( result > 54 )
      {
        if ( result != 55 )
          return result;
LABEL_21:
        Function_21d0ea0(v4, (int)Function_21d1dac);
        return Function_21d0ec0(v4);
      }
      if ( result >= 54 )
      {
        Function_21d6594(*(uint *)(v4 + 276), 26);
        result = 4;
        *v2 = 4;
        return result;
      }
      if ( result <= -1 && result >= -2 )
      {
        if ( result == -2 )
          return Function_21d6594(*(uint *)(v4 + 276), 28);
        if ( result == -1 )
          goto LABEL_21;
      }
      return result;
    default:
      return result;
  }
}

//----- (021D20A4) --------------------------------------------------------
int __fastcall Function_21d20a4(long long a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;

  v2 = (uint *)HIDWORD(a1);
  HIDWORD(a1) = *(uint *)HIDWORD(a1);
  v3 = a1;
  switch ( BYTE4(a1) )
  {
    case 0:
      v4 = Function_21d5e9c();
      Function_200b5cc(*(int **)(v3 + 412), 0, v4);
      Function_21d5408(v3, 0);
      Function_21df990(v3);
      if ( Function_21d5ee0(v3) )
      {
        *(uint *)(v3 + 440) = Function_21dfdec(v3);
        LODWORD(a1) = 3;
        *v2 = 3;
      }
      else
      {
        Function_2005748(0x5DDu);
        Function_21d6594(*(uint *)(v3 + 276), 25);
        LODWORD(a1) = 1;
        *v2 = 1;
      }
      return a1;
    case 1:
      LODWORD(a1) = Function_21d6600(*(uint *)(a1 + 276), 25);
      if ( !(uint)a1 )
        goto LABEL_20;
      *v2 = 2;
      goto LABEL_8;
    case 2:
LABEL_8:
      a1 = __PAIR__(440, Function_21dfd2c(v3));
      *(uint *)(v3 + 440) = a1;
      a2 = *(uint *)(v3 + 440);
      LODWORD(a1) = -1;
      if ( a2 > -1 )
      {
        if ( a2 == 43 )
          goto LABEL_17;
LABEL_18:
        LODWORD(a1) = 3;
        *v2 = 3;
        return a1;
      }
      if ( a2 < -3 )
        goto LABEL_18;
      if ( a2 != -3 )
      {
        if ( a2 == -2 )
        {
          LODWORD(a1) = Function_21d6594(*(uint *)(v3 + 276), 28);
          return a1;
        }
        if ( a2 != -1 )
          goto LABEL_18;
LABEL_17:
        Function_2005748(0x5DDu);
        Function_21d6594(*(uint *)(v3 + 276), 26);
        LODWORD(a1) = 4;
        *v2 = 4;
        return a1;
      }
LABEL_20:
      switch ( (uchar)a2 )
      {
        case 0:
          if ( Function_21d5e10(a1) || Function_21d5ee0(v3) != 1 )
          {
            Function_21d6594(*(uint *)(v3 + 276), 26);
            LODWORD(a1) = Function_21d0eb0(__PAIR__(Function_21d2e1c, v3));
          }
          else
          {
            LODWORD(a1) = Function_21d0eb0(__PAIR__(Function_21d2b54, v3));
          }
          break;
        case 1:
          Function_21d6594(*(uint *)(v3 + HIDWORD(a1) - 164), 26);
          LODWORD(a1) = Function_21d0eb0(__PAIR__(Function_21d2f14, v3));
          break;
        case 2:
          Function_21d6594(*(uint *)(v3 + HIDWORD(a1) - 164), 26);
          LODWORD(a1) = Function_21d0eb0(__PAIR__(Function_21d3010, v3));
          break;
        case 3:
          HIDWORD(a1) = Function_21d3c28;
          LODWORD(a1) = Function_21d0eb0(a1);
          break;
        case 4:
          HIDWORD(a1) = Function_21d30d0;
          LODWORD(a1) = Function_21d0eb0(a1);
          break;
        case 5:
          HIDWORD(a1) = Function_21d3294;
          LODWORD(a1) = Function_21d0eb0(a1);
          break;
        case 6:
          if ( Function_21d5e74() )
            LODWORD(a1) = Function_21d0eb0(__PAIR__(Function_21d3fb0, v3));
          else
            LODWORD(a1) = Function_21d0eb0(__PAIR__(Function_21d3d44, v3));
          break;
        case 7:
          HIDWORD(a1) = Function_21d2a5c;
          LODWORD(a1) = Function_21d0eb0(a1);
          break;
        case 8:
          HIDWORD(a1) = Function_21d35f8;
          LODWORD(a1) = Function_21d0eb0(a1);
          break;
        case 0x12:
        case 0x13:
          Function_21d5b70(a1);
          Function_21d5888(v3, *(uint *)(v3 + 8), v3);
          Function_21d6594(*(uint *)(v3 + 276), 26);
          Function_21d6594(*(uint *)(v3 + 276), 48);
          Function_21d6594(*(uint *)(v3 + 276), 6);
          Function_2005748(0x5DDu);
          LODWORD(a1) = 5;
          *v2 = 5;
          break;
        default:
          return a1;
      }
      return a1;
    case 3:
      HIDWORD(a1) = 440;
      a2 = *(uint *)(a1 + 440) - 34;
      if ( (uint)a2 <= 0x13 )
      {
        v5 = 2 * a2 + 35463582;
        JUMPOUT(__CS__, *(short *)(v5 + 6) + 35463590);
      }
      goto LABEL_20;
    case 4:
      LODWORD(a1) = Function_21d6600(*(uint *)(a1 + 276), 26);
      if ( (uint)a1 )
        LODWORD(a1) = Function_21d0ec0(v3);
      return a1;
    case 5:
      LODWORD(a1) = Function_21d6628(*(uint *)(a1 + 276));
      if ( (uint)a1 )
        LODWORD(a1) = Function_21d0ec0(v3);
      return a1;
    default:
      goto LABEL_20;
  }
}

//----- (021D2308) --------------------------------------------------------
int __fastcall Function_21d2308(long long a1)
{
  uint *v1;
  uint v2;
  int v3;
  uint v4;
  uint v5;
  int v6;
  ushort v7;
  ushort v8;

  v1 = (uint *)HIDWORD(a1);
  v2 = *(uint *)HIDWORD(a1);
  v3 = a1;
  if ( v2 <= 7 )
    JUMPOUT(__CS__, *((short *)&off_21D2322 + v2) + 35463972);
  switch ( (uchar)v2 )
  {
    case 0:
      v4 = Function_21d5f7c(a1);
      if ( v4 )
      {
        Function_200b70c(*(uint *)(v3 + 412), 0, v4);
        Function_21d5408(v3, 25);
      }
      else
      {
        v5 = Function_21d5e74(v3);
        if ( v5 )
        {
          Function_200b70c(*(uint *)(v3 + 412), 0, v5);
          Function_21d5408(v3, 25);
        }
        else
        {
          Function_21d5408(v3, 28);
        }
      }
      Function_21dfad0(v3);
      if ( Function_21d5fc8(v3) )
      {
        Function_2005748(0x5F3u);
        Function_21d5408(v3, 34);
        Function_21d6594(*(uint *)(v3 + 276), 24);
        LODWORD(a1) = 7;
        *v1 = 7;
      }
      else if ( Function_21d5ee0(v3) )
      {
        *(uint *)(v3 + 440) = Function_21dfdec(v3);
        LODWORD(a1) = 3;
        *v1 = 3;
      }
      else
      {
        Function_2005748(0x5DDu);
        Function_21d6594(*(uint *)(v3 + 276), 25);
        LODWORD(a1) = 1;
        *v1 = 1;
      }
      return a1;
    case 1:
      LODWORD(a1) = Function_21d6600(*(uint *)(a1 + 276), 25);
      if ( !(uint)a1 )
        goto LABEL_29;
      *v1 = 2;
      goto LABEL_17;
    case 2:
LABEL_17:
      LODWORD(a1) = Function_21dfd2c(v3);
      BYTE4(a1) = -72;
      *(uint *)(v3 + 440) = a1;
      v6 = *(uint *)(v3 + 440);
      LODWORD(a1) = -1;
      if ( v6 > -1 )
      {
        if ( v6 == 51 )
          goto LABEL_26;
LABEL_27:
        Function_2005748(0x5DDu);
        LODWORD(a1) = 3;
        *v1 = 3;
        return a1;
      }
      if ( v6 < -3 )
        goto LABEL_27;
      if ( v6 != -3 )
      {
        if ( v6 == -2 )
        {
          LODWORD(a1) = Function_21d6594(*(uint *)(v3 + 276), 28);
          return a1;
        }
        if ( v6 != -1 )
          goto LABEL_27;
LABEL_26:
        Function_2005748(0x5DDu);
        Function_21d6594(*(uint *)(v3 + 276), 26);
        LODWORD(a1) = 4;
        *v1 = 4;
        return a1;
      }
LABEL_29:
      switch ( BYTE4(a1) )
      {
        case 0:
          if ( Function_21d5f7c(a1) != 112 || GetBoxPkmnData(*(uint *)(v3 + 76), 5u, 0) == 487 )
          {
            if ( Function_21d5f7c(v3) )
            {
              Function_21d5d60(v3, v3);
              Function_21d6594(*(uint *)(v3 + 276), 26);
              Function_21d6594(*(uint *)(v3 + 276), 20);
              Function_2005748(0x5DDu);
              LODWORD(a1) = 5;
              *v1 = 5;
            }
            else
            {
              LODWORD(a1) = Function_21d0eb0(__PAIR__(Function_21d3d44, v3));
            }
          }
          else
          {
            Function_200b70c(*(uint *)(v3 + 412), 0, 0x70u);
            Function_21d5408(v3, 45);
            Function_21d6594(*(uint *)(v3 + 276), 24);
            LODWORD(a1) = 7;
            *v1 = 7;
          }
          break;
        case 1:
          v7 = ((int (*)(void))Function_21d5e74)();
          if ( Function_207d2d0(v7) )
          {
            Function_2005748(0x5F3u);
            Function_21d5408(v3, 24);
            Function_21d6594(*(uint *)(v3 + 276), 24);
            LODWORD(a1) = 7;
            *v1 = 7;
          }
          else
          {
            Function_21d5d28(v3, v3);
            Function_21d0f14(v3);
            Function_21d6594(*(uint *)(v3 + 276), 26);
            Function_21d6594(*(uint *)(v3 + 276), 19);
            Function_2005748(0x5DDu);
            LODWORD(a1) = 5;
            *v1 = 5;
          }
          break;
        case 2:
          HIDWORD(a1) = Function_21d4390;
          LODWORD(a1) = Function_21d0eb0(a1);
          break;
        case 3:
          v8 = ((int (*)(void))Function_21d5e74)();
          if ( Function_207d2d0(v8) )
          {
            Function_2005748(0x5F3u);
            Function_21d5408(v3, 24);
            Function_21d6594(*(uint *)(v3 + 276), 24);
            LODWORD(a1) = 7;
            *v1 = 7;
          }
          else if ( *(ushort *)(v3 + 274) != 112 || GetBoxPkmnData(*(uint *)(v3 + 76), 5u, 0) == 487 )
          {
            Function_21d5d78(v3, v3);
            Function_21d6594(*(uint *)(v3 + 276), 26);
            Function_21d6594(*(uint *)(v3 + 276), 21);
            Function_2005748(0x5DDu);
            LODWORD(a1) = 5;
            *v1 = 5;
          }
          else
          {
            Function_200b70c(*(uint *)(v3 + 412), 0, 0x70u);
            Function_21d5408(v3, 45);
            Function_21d6594(*(uint *)(v3 + 276), 24);
            LODWORD(a1) = 7;
            *v1 = 7;
          }
          break;
        case 4:
          HIDWORD(a1) = Function_21d4184;
          LODWORD(a1) = Function_21d0eb0(a1);
          break;
        default:
          return a1;
      }
      return a1;
    case 3:
      HIDWORD(a1) = *(uint *)(a1 + 440) - 46;
      if ( HIDWORD(a1) <= 4 )
        JUMPOUT(__CS__, *((short *)&off_21D246A + HIDWORD(a1)) + 35464300);
      goto LABEL_29;
    case 4:
      LODWORD(a1) = Function_21d6600(*(uint *)(a1 + 276), 26);
      if ( (uint)a1 )
        LODWORD(a1) = Function_21d0ec0(v3);
      return a1;
    case 5:
      LODWORD(a1) = Function_21d6628(*(uint *)(a1 + 276));
      if ( (uint)a1 )
      {
        Function_21d6594(*(uint *)(v3 + 276), 6);
        Function_21d6594(*(uint *)(v3 + 276), 22);
        LODWORD(a1) = 6;
        *v1 = 6;
      }
      return a1;
    case 6:
      LODWORD(a1) = Function_21d6628(*(uint *)(a1 + 276));
      if ( (uint)a1 )
        LODWORD(a1) = Function_21d0ec0(v3);
      return a1;
    case 7:
      LODWORD(a1) = 3;
      if ( dword_21BF6C4 & 3 )
      {
        Function_21d6594(*(uint *)(v3 + 276), 26);
        LODWORD(a1) = 6;
        *v1 = 6;
      }
      return a1;
    default:
      return a1;
  }
}

//----- (021D2694) --------------------------------------------------------
int __fastcall Function_21d2694(long long a1)
{
  uint *v1;
  uint v2;
  int v3;
  int v4;

  v1 = (uint *)HIDWORD(a1);
  v2 = *(uint *)HIDWORD(a1);
  v3 = a1;
  if ( v2 <= 7 )
    JUMPOUT(__CS__, *((short *)&off_21D26AE + v2) + 35464880);
  switch ( (uchar)v2 )
  {
    case 0:
      Function_21d5408(a1, 7);
      Function_21dfb50(v3);
      if ( Function_21d5ee0(v3) )
      {
        Function_2005748(0x5DDu);
        *(uint *)(v3 + 440) = Function_21dfdec(v3);
        LODWORD(a1) = 3;
        *v1 = 3;
      }
      else
      {
        Function_2005748(0x5DDu);
        Function_21d6594(*(uint *)(v3 + 276), 25);
        LODWORD(a1) = 1;
        *v1 = 1;
      }
      break;
    case 1:
      LODWORD(a1) = Function_21d6600(*(uint *)(a1 + 276), 25);
      if ( (uint)a1 )
      {
        *v1 = 2;
        goto LABEL_10;
      }
      break;
    case 2:
LABEL_10:
      *(uint *)(v3 + 440) = Function_21dfd2c(v3);
      LODWORD(a1) = *(uint *)(v3 + 440) + 3;
      switch ( (uchar)a1 )
      {
        case 0:
          return a1;
        case 1:
          LODWORD(a1) = Function_21d6594(*(uint *)(v3 + 276), 28);
          break;
        case 2:
        case 6:
          Function_21d6594(*(uint *)(v3 + 276), 26);
          LODWORD(a1) = 4;
          *v1 = 4;
          break;
        default:
          LODWORD(a1) = 3;
          *v1 = 3;
          break;
      }
      break;
    case 3:
      v4 = *(uint *)(a1 + 440);
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          Function_21d6594(*(uint *)(a1 + 276), 27);
          LODWORD(a1) = 7;
          *v1 = 7;
        }
        else if ( v4 == 2 )
        {
          HIDWORD(a1) = Function_21d3b34;
          LODWORD(a1) = Function_21d0eb0(a1);
        }
      }
      else
      {
        Function_21d6594(*(uint *)(a1 + 276), 26);
        LODWORD(a1) = Function_21d0eb0(__PAIR__(Function_21d27e8, v3));
      }
      break;
    case 4:
      LODWORD(a1) = Function_21d6600(*(uint *)(a1 + 276), 26);
      if ( (uint)a1 )
        LODWORD(a1) = Function_21d0ec0(v3);
      break;
    case 7:
      LODWORD(a1) = Function_21d6628(*(uint *)(a1 + 276));
      if ( (uint)a1 )
        LODWORD(a1) = Function_21d0eb0(__PAIR__(Function_21d2890, v3));
      break;
    default:
      return a1;
  }
  return a1;
}

//----- (021D27E8) --------------------------------------------------------
int __fastcall Function_21d27e8(int result, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a2;
  v3 = *a2;
  v4 = result;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = Function_21d4468();
      if ( result )
      {
        v6 = *(char *)(v4 + 449);
        if ( v6 != -1 && v6 != Function_21d5e68(v4) )
        {
          Function_21d5d08(v4, v6);
          Function_2079a94(*(uint **)(v4 + 288), *(char *)(v4 + 449));
          Function_21d6594(*(uint *)(v4 + 276), 4);
          *v2 = 2;
        }
        else
        {
          *v2 = 2;
        }
        Function_21d6594(*(uint *)(v4 + 276), 26);
        result = Function_21d6594(*(uint *)(v4 + 276), 32);
      }
    }
    else if ( v3 == 2 )
    {
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
        result = Function_21d0ec0(v4);
    }
  }
  else
  {
    v5 = ((int (*)(void))Function_21d5e68)();
    Function_21d443c(v4, v5, 8);
    result = 1;
    *v2 = 1;
  }
  return result;
}

//----- (021D2890) --------------------------------------------------------
int __fastcall Function_21d2890(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;
  int v5;

  v2 = a2;
  v3 = a1;
  result = *a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      *(uint *)(v3 + 440) = 4;
      *a2 = 1;
      goto LABEL_3;
    case 1u:
LABEL_3:
      Function_21d5408(v3, 9);
      Function_21dfb94(v3, *(uint *)(v3 + 440));
      Function_21d6594(*(uint *)(v3 + 276), 25);
      result = 2;
      *v2 = 2;
      return result;
    case 2u:
      result = Function_21d6600(*(uint *)(v3 + 276), 25);
      if ( !result )
        return result;
      *v2 = 3;
      goto LABEL_6;
    case 3u:
LABEL_6:
      result = Function_21dfd2c(v3) + 3;
      switch ( (uchar)result )
      {
        case 0:
          return result;
        case 1:
          result = Function_21d6594(*(uint *)(v3 + 276), 28);
          break;
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
          *(uint *)(v3 + 440) = Function_21dfddc(v3);
          Function_21d5408(v3, 10);
          Function_21dfc04(v3, *(uint *)(v3 + 440));
          Function_21d6594(*(uint *)(v3 + 276), 25);
          result = 4;
          *v2 = 4;
          break;
        default:
          Function_21d6594(*(uint *)(v3 + 276), 26);
          result = 8;
          *v2 = 8;
          break;
      }
      return result;
    case 4u:
      result = Function_21d6600(*(uint *)(v3 + 276), 25);
      if ( !result )
        return result;
      *v2 = 5;
      goto LABEL_12;
    case 5u:
LABEL_12:
      result = Function_21dfd2c(v3) + 3;
      switch ( (uchar)result )
      {
        case 0:
          return result;
        case 1:
          result = Function_21d6594(*(uint *)(v3 + 276), 28);
          break;
        case 2:
        case 6:
          result = 1;
          *v2 = 1;
          break;
        default:
          *(uint *)(v3 + 440) = Function_21dfddc(v3);
          v5 = *(uint *)(v3 + 440);
          if ( v5 < 10 || v5 > 33 )
          {
            ErrorHandler();
            result = 1;
            *v2 = 1;
          }
          else
          {
            Function_2079ac4(*(uint **)(v3 + 288), 0xFFFFFFFF, v5 - 10);
            Function_21d4f5c(v3, *(uint *)(v3 + 288));
            Function_21d6594(*(uint *)(v3 + 276), 26);
            result = 6;
            *v2 = 6;
          }
          break;
      }
      break;
    case 6u:
      Function_21d6594(*(uint *)(v3 + 276), 33);
      result = 8;
      *v2 = 8;
      break;
    case 7u:
      result = Function_21d6628(*(uint *)(v3 + 276));
      if ( result )
      {
        result = 1;
        *v2 = 1;
      }
      break;
    case 8u:
      result = Function_21d6628(*(uint *)(v3 + 276));
      if ( result )
        result = Function_21d0ec0(v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D2A5C) --------------------------------------------------------
uint __fastcall Function_21d2a5c(uint result, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  uint v5;

  v2 = a2;
  v3 = *a2;
  v4 = result;
  if ( !v3 )
  {
    Function_21dfc80();
    Function_21d5408(v4, 1);
    Function_21d6594(*(uint *)(v4 + 276), 25);
    result = 1;
    *v2 = 1;
    return result;
  }
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
    {
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
        result = Function_21d0ec0(v4);
    }
    return result;
  }
  result = Function_21d6628(*(uint *)(result + 276));
  if ( !result )
    return result;
  result = Function_21dfd2c(v4);
  v5 = result;
  if ( result <= 0xFFFFFFFD )
  {
    if ( result >= 0xFFFFFFFD )
      return result;
    if ( result > 0x2D || result < 0x2C )
      goto LABEL_21;
    if ( result == 44 )
    {
      Function_21d5bac(v4);
      Function_21d6594(*(uint *)(v4 + 276), 26);
      Function_21d6594(*(uint *)(v4 + 276), 7);
      Function_21d6594(*(uint *)(v4 + 276), 39);
      result = 2;
      *v2 = 2;
      return result;
    }
    if ( result != 45 )
      goto LABEL_21;
LABEL_19:
    Function_21d6594(*(uint *)(v4 + 276), 26);
    result = 2;
    *v2 = 2;
    return result;
  }
  result = -2;
  if ( v5 >= 0xFFFFFFFE )
  {
    if ( v5 == -2 )
      return Function_21d6594(*(uint *)(v4 + 276), 28);
    result = -1;
    if ( v5 == -1 )
      goto LABEL_19;
  }
LABEL_21:
  if ( v5 >= 0x38 && v5 <= 0x3D )
  {
    Function_21dfce4(v4, v5 - 56);
    result = Function_21d6594(*(uint *)(v4 + 276), 29);
  }
  return result;
}

//----- (021D2B54) --------------------------------------------------------
int __fastcall Function_21d2b54(long long a1)
{
  uint *v1;
  uint v2;
  int v3;
  uint v4;
  uint v5;

  v1 = (uint *)HIDWORD(a1);
  v2 = *(uint *)HIDWORD(a1);
  v3 = a1;
  if ( v2 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_21D2B6E + v2) + 35466096);
  switch ( (uchar)v2 )
  {
    case 0:
      if ( dword_21BF6C0 & 1 )
      {
        Function_21d5594();
        Function_21d6594(*(uint *)(v3 + 276), 44);
        Function_2005748(0x5DCu);
        LODWORD(a1) = 1;
        *v1 = 1;
      }
      else
      {
        HIDWORD(a1) = Function_21d2e1c;
        LODWORD(a1) = Function_21d0eb0(a1);
      }
      break;
    case 1:
      if ( dword_21BF6C0 & 1 )
      {
        LODWORD(a1) = Function_21d5150(dword_21BF6C0, a1);
        if ( (uint)a1 == 1 )
        {
          Function_21d55b0(v3, v3);
          Function_21d6594(*(uint *)(v3 + 276), 46);
          Function_21d6594(*(uint *)(v3 + 276), 5);
          Function_21d6594(*(uint *)(v3 + 276), 6);
          LODWORD(a1) = 3;
          *v1 = 3;
        }
        else if ( (uint)a1 == 2 )
        {
          LODWORD(a1) = dword_21BF6C4 & 0xF0;
          if ( (dword_21BF6C0 & 0xF0) == (uint)a1 )
            LODWORD(a1) = Function_2005748(0x5F3u);
        }
      }
      else if ( Function_21d5f20() )
      {
        Function_21d6594(*(uint *)(v3 + 276), 45);
        LODWORD(a1) = Function_21d0eb0(__PAIR__(Function_21d2e1c, v3));
      }
      else
      {
        Function_21d54a4(v3, v3);
        Function_21d6594(*(uint *)(v3 + 276), 47);
        Function_2005748(0x5EBu);
        LODWORD(a1) = 2;
        *v1 = 2;
      }
      break;
    case 2:
      LODWORD(a1) = Function_21d6628(*(uint *)(a1 + 276));
      if ( (uint)a1 )
      {
        LODWORD(a1) = Function_21d5150(dword_21BF6C0, v3);
        switch ( (uchar)a1 )
        {
          case 0:
            if ( dword_21BF6C4 & 1 )
            {
              if ( Function_21d2dd0(v3) )
              {
                Function_21d56ac(v3, v3);
                Function_21d6594(*(uint *)(v3 + 276), 10);
                Function_2005748(0x5EAu);
                LODWORD(a1) = 4;
                *v1 = 4;
              }
              else
              {
                LODWORD(a1) = Function_2005748(0x5F3u);
              }
            }
            else
            {
              LODWORD(a1) = 2;
              if ( dword_21BF6C4 & 2 )
                LODWORD(a1) = Function_2005748(0x5F3u);
            }
            break;
          case 1:
            Function_21d6594(*(uint *)(v3 + 276), 5);
            LODWORD(a1) = Function_21d5e38(v3);
            if ( !(a1 & 6) )
              LODWORD(a1) = Function_21d6594(*(uint *)(v3 + 276), 6);
            break;
          case 2:
            LODWORD(a1) = dword_21BF6C4 & 0xF0;
            if ( (dword_21BF6C0 & 0xF0) == (uint)a1 )
              LODWORD(a1) = Function_2005748(0x5F3u);
            break;
          case 3:
            Function_21d5ce8(v3);
            v4 = Function_21d5e68(v3);
            Function_2079a94(*(uint **)(v3 + 288), v4);
            Function_21d6594(*(uint *)(v3 + 276), 4);
            LODWORD(a1) = 5;
            *v1 = 5;
            break;
          case 4:
            Function_21d5cbc(v3);
            v5 = Function_21d5e68(v3);
            Function_2079a94(*(uint **)(v3 + 288), v5);
            Function_21d6594(*(uint *)(v3 + 276), 4);
            LODWORD(a1) = 5;
            *v1 = 5;
            break;
          default:
            return a1;
        }
      }
      break;
    case 3:
      LODWORD(a1) = Function_21d6628(*(uint *)(a1 + 276));
      if ( (uint)a1 )
      {
        LODWORD(a1) = 1;
        *v1 = 1;
      }
      break;
    case 4:
      LODWORD(a1) = Function_21d6628(*(uint *)(a1 + 276));
      if ( (uint)a1 )
        LODWORD(a1) = Function_21d0ec0(v3);
      break;
    case 5:
      LODWORD(a1) = Function_21d6600(*(uint *)(a1 + 276), 4);
      if ( (uint)a1 )
      {
        if ( !(Function_21d5e38(v3) & 6) )
        {
          Function_21d52f4(v3);
          Function_21d6594(*(uint *)(v3 + 276), 6);
        }
        LODWORD(a1) = 2;
        *v1 = 2;
      }
      break;
    default:
      return a1;
  }
  return a1;
}

//----- (021D2DD0) --------------------------------------------------------
int __fastcall Function_21d2dd0(uint **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint *v5;
  uint **v7;

  v1 = (int)(a1 + 5);
  v7 = a1;
  v2 = Function_21d5f3c();
  v3 = 0;
  v4 = *(uchar *)(v1 + 9);
  if ( (int)*(uchar *)(v1 + 8) <= 0 )
    return 1;
  while ( 1 )
  {
    v5 = Function_2079c9c(*v7, 0xFFFFFFFF, v2 + *(char *)(v1 + v3 + 12) - v4);
    if ( GetBoxPkmnData((int)v5, 0xACu, 0) )
      break;
    if ( ++v3 >= *(uchar *)(v1 + 8) )
      return 1;
  }
  return 0;
}

//----- (021D2E1C) --------------------------------------------------------
int __fastcall Function_21d2e1c(int result, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = result;
  switch ( (uchar)*a2 )
  {
    case 0u:
      if ( Function_21d5e10(result) == 1 )
      {
        if ( Function_21d34e4(v3) )
        {
          Function_2005748(0x5F3u);
          Function_21d5408(v3, 6);
          Function_21d6594(*(uint *)(v3 + 276), 24);
          result = 2;
          *v2 = 2;
        }
        else
        {
          Function_2005748(0x5EBu);
          Function_21d5420(v3, v3);
          Function_21d6594(*(uint *)(v3 + 276), 9);
          result = 1;
          *v2 = 1;
        }
      }
      else
      {
        Function_2005748(0x5EBu);
        Function_21d5420(v3, v3);
        Function_21d6594(*(uint *)(v3 + 276), 9);
        result = 3;
        *v2 = 3;
      }
      break;
    case 1u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
      {
        Function_21d52f4(v3);
        Function_21d6594(*(uint *)(v3 + 276), 37);
        result = 3;
        *v2 = 3;
      }
      break;
    case 2u:
      result = 3;
      if ( dword_21BF6C4 & 3 )
      {
        Function_21d6594(*(uint *)(v3 + 276), 26);
        result = 3;
        *v2 = 3;
      }
      break;
    case 3u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
        result = Function_21d0ec0(v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D2F14) --------------------------------------------------------
int __fastcall Function_21d2f14(int result, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = *a2;
  v4 = result;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
      {
        Function_21d52f4(v4);
        Function_21d6594(*(uint *)(v4 + 276), 38);
        Function_21d6594(*(uint *)(v4 + 276), 6);
        result = 2;
        *v2 = 2;
      }
    }
    else if ( v3 == 2 )
    {
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
      {
        Function_21d0f14(v4);
        result = Function_21d0ec0(v4);
      }
    }
  }
  else
  {
    Function_21d55c4();
    Function_21d6594(*(uint *)(v4 + 276), 10);
    Function_2005748(0x5EAu);
    if ( Function_21d5e10(v4) != 1 || (v5 = Function_21d5e2c(v4), v5 == GetNrOfPkmnInParty(*(uint *)(v4 + 292)) - 1) )
    {
      result = 2;
      *v2 = 2;
    }
    else
    {
      *v2 = 1;
      result = Function_21d52f4(v4);
    }
  }
  return result;
}

//----- (021D2FC8) --------------------------------------------------------
int __fastcall Function_21d2fc8(int a1, uint *a2)
{
  int v2;
  uint *v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_21d34e4(a1) )
    return 0;
  if ( Function_21d5fd0(v2, 173, 0) )
  {
    *v3 = 6;
    return 1;
  }
  if ( !Function_21d5e3c(v2) || Function_21d5fd0(v2, 163, 0) )
    return 0;
  *v3 = 6;
  return 1;
}

//----- (021D3010) --------------------------------------------------------
int __fastcall Function_21d3010(int result, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;

  v7 = a4;
  v4 = a2;
  v5 = *a2;
  v6 = result;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      result = Function_21d6600(*(uint *)(result + 276), 24);
      if ( result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_21d6594(*(uint *)(v6 + 276), 26);
          result = 2;
          *v4 = 2;
        }
      }
    }
    else if ( v5 == 2 )
    {
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
      {
        Function_21d0f14(v6);
        result = Function_21d0ec0(v6);
      }
    }
  }
  else if ( Function_21d2fc8(result, &v7) )
  {
    Function_2005748(0x5F3u);
    Function_21d5408(v6, v7);
    Function_21d6594(*(uint *)(v6 + 276), 24);
    result = 1;
    *v4 = 1;
  }
  else
  {
    Function_21d5734(v6, v6);
    Function_2005748(0x5DCu);
    Function_21d6594(*(uint *)(v6 + 276), 11);
    Function_21d6594(*(uint *)(v6 + 276), 6);
    result = 2;
    *v4 = 2;
  }
  return result;
}

//----- (021D30D0) --------------------------------------------------------
int __fastcall Function_21d30d0(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  if ( *a2 <= 8u )
    JUMPOUT(__CS__, *((short *)&off_21D30EA + result) + 35467500);
  switch ( (uchar)result )
  {
    case 0:
      if ( GetNrOfPkmnInParty(*(uint *)(v3 + 292)) == 6 )
      {
        Function_21d6594(*(uint *)(v3 + 276), 27);
        Function_21d5408(v3, 5);
        Function_21d6594(*(uint *)(v3 + 276), 24);
        result = 7;
        *v2 = 7;
      }
      else
      {
        Function_21d6594(*(uint *)(v3 + 276), 26);
        if ( Function_21d5e38(v3) == 2 )
        {
          Function_21d6594(*(uint *)(v3 + 276), 35);
          result = 2;
          *v2 = 2;
        }
        else
        {
          Function_2005748(0x5EBu);
          Function_21d5420(v3, v3);
          Function_21d6594(*(uint *)(v3 + 276), 9);
          result = 1;
          *v2 = 1;
        }
      }
      break;
    case 1:
      result = Function_21d6600(*(uint *)(v3 + 276), 9);
      if ( result )
      {
        Function_21d6594(*(uint *)(v3 + 276), 35);
        result = 2;
        *v2 = 2;
      }
      break;
    case 2:
      result = Function_21d6600(*(uint *)(v3 + 276), 35);
      if ( result )
      {
        Function_21d5290(v3);
        Function_21d6594(*(uint *)(v3 + 276), 5);
        result = 3;
        *v2 = 3;
      }
      break;
    case 3:
      result = Function_21d6600(*(uint *)(v3 + 276), 5);
      if ( result )
      {
        Function_21d55c4(v3, v3);
        Function_21d0f14(v3);
        Function_21d6594(*(uint *)(v3 + 276), 10);
        result = 4;
        *v2 = 4;
      }
      break;
    case 4:
      result = Function_21d6600(*(uint *)(v3 + 276), 10);
      if ( result )
      {
        Function_21d6594(*(uint *)(v3 + 276), 36);
        result = 5;
        *v2 = 5;
      }
      break;
    case 5:
      result = Function_21d6600(*(uint *)(v3 + 276), 36);
      if ( result )
      {
        Function_21d52d0(v3);
        Function_21d6594(*(uint *)(v3 + 276), 5);
        Function_21d6594(*(uint *)(v3 + 276), 6);
        result = 8;
        *v2 = 8;
      }
      break;
    case 7:
      result = Function_21d6600(*(uint *)(v3 + 276), 24);
      if ( result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_21d6594(*(uint *)(v3 + 276), 26);
          result = 8;
          *v2 = 8;
        }
      }
      break;
    case 8:
      result = Function_21d6628(*(uint *)(v3 + 276));
      if ( result )
        result = Function_21d0ec0(v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D3294) --------------------------------------------------------
int __fastcall Function_21d3294(int result, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;

  v7 = a4;
  v4 = a2;
  v5 = result;
  switch ( (uchar)*a2 )
  {
    case 0u:
      if ( Function_21d5e38(result) != 1 || Function_21d34e4(v5) != 1 )
      {
        if ( Function_21d1238(v5, &v7) )
        {
          Function_2005748(0x5F3u);
          Function_21d5408(v5, v7);
          Function_21d6594(*(uint *)(v5 + 276), 27);
          Function_21d6594(*(uint *)(v5 + 276), 24);
          result = 3;
          *v4 = 3;
        }
        else
        {
          Function_21d443c(v5, *(ushort *)(v5 + 272), 19);
          Function_21d6594(*(uint *)(v5 + 276), 26);
          result = 1;
          *v4 = 1;
        }
      }
      else
      {
        Function_2005748(0x5F3u);
        Function_21d5408(v5, 6);
        Function_21d6594(*(uint *)(v5 + 276), 27);
        Function_21d6594(*(uint *)(v5 + 276), 24);
        result = 3;
        *v4 = 3;
      }
      break;
    case 1u:
      result = Function_21d4468(result);
      if ( !result )
        return result;
      v6 = *(char *)(v5 + 449);
      if ( v6 == -1 )
      {
        Function_21d6594(*(uint *)(v5 + 276), 26);
        Function_21d6594(*(uint *)(v5 + 276), 32);
        result = 6;
        *v4 = 6;
        return result;
      }
      *(ushort *)(v5 + 272) = v6;
      if ( Function_21d5e38(v5) == 2 )
      {
        if ( Function_21d57d8(v5, *(char *)(v5 + 449)) )
        {
          Function_21d0f14(v5);
          Function_21d6594(*(uint *)(v5 + 276), 26);
          Function_21d6594(*(uint *)(v5 + 276), 32);
          result = 4;
          *v4 = 4;
          return result;
        }
      }
      else if ( Function_21d5800(v5, *(char *)(v5 + 449)) )
      {
        Function_21d0f14(v5);
        Function_21d6594(*(uint *)(v5 + 276), 26);
        Function_21d6594(*(uint *)(v5 + 276), 32);
        result = 5;
        *v4 = 5;
        return result;
      }
      Function_2005748(0x5F3u);
      Function_21d5408(v5, 13);
      Function_21d6594(*(uint *)(v5 + 276), 24);
      result = 2;
      *v4 = 2;
      break;
    case 2u:
      result = Function_21d6600(*(uint *)(result + 276), 24);
      if ( result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_21d4458(v5);
          result = 1;
          *v4 = 1;
        }
      }
      break;
    case 3u:
      result = Function_21d6600(*(uint *)(result + 276), 24);
      if ( result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_21d6594(*(uint *)(v5 + 276), 26);
          result = 6;
          *v4 = 6;
        }
      }
      break;
    case 4u:
      result = Function_21d6600(*(uint *)(result + 276), 32);
      if ( result )
      {
        Function_21d6594(*(uint *)(v5 + 276), 12);
        Function_21d6594(*(uint *)(v5 + 276), 6);
        result = 6;
        *v4 = 6;
      }
      break;
    case 5u:
      result = Function_21d6600(*(uint *)(result + 276), 32);
      if ( result )
      {
        Function_21d6594(*(uint *)(v5 + 276), 13);
        Function_21d6594(*(uint *)(v5 + 276), 6);
        result = 6;
        *v4 = 6;
      }
      break;
    case 6u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
        result = Function_21d0ec0(v5);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D34E4) --------------------------------------------------------
BOOL __fastcall Function_21d34e4(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  BOOL result;
  int v6;
  int v7;

  v6 = a1;
  v1 = 0;
  v2 = 0;
  v7 = GetNrOfPkmnInParty(*(uint *)(a1 + 292));
  if ( v7 <= 0 )
  {
LABEL_8:
    if ( Function_21d6014(v6, 173, 0) )
      result = 0;
    else
      result = Function_21d6014(v6, 163, 0) != 0;
  }
  else
  {
    while ( 1 )
    {
      v3 = GetAdrOfPkmnInParty(*(uint **)(v6 + 292), v1);
      v4 = InitEncryptPkmnData(v3);
      if ( !GetPkmnData(v3, 0xADu, 0) && GetPkmnData(v3, 0xA3u, 0) )
        ++v2;
      InitEncryptPkmnData_Part1And2(v3, v4);
      if ( v2 >= 2 )
        break;
      if ( ++v1 >= v7 )
        goto LABEL_8;
    }
    result = 0;
  }
  return result;
}

//----- (021D357C) --------------------------------------------------------
int __fastcall Function_21d357c(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;
  ushort v5;

  v2 = a2;
  v3 = a1;
  if ( Function_21d5fd0(a1, 173, 0) )
  {
    *v2 = 31;
    result = 0;
  }
  else
  {
    Function_21d5e74(v3);
    v5 = Function_21d5e74(v3);
    if ( Function_207d2d0(v5) )
    {
      *v2 = 30;
      result = 0;
    }
    else if ( Function_21d5fd0(v3, 162, 0) )
    {
      *v2 = 29;
      result = 0;
    }
    else if ( Function_21d5e38(v3) == 1 && Function_21d5e10(v3) == 1 && Function_21d34e4(v3) )
    {
      *v2 = 6;
      result = 0;
    }
    else
    {
      result = 1;
    }
  }
  return result;
}

//----- (021D35F8) --------------------------------------------------------
int __fastcall Function_21d35f8(int result, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;

  v7 = a4;
  v4 = a2;
  v5 = result;
  switch ( (uchar)*a2 )
  {
    case 0u:
      if ( Function_21d357c(result, &v7) )
      {
        Function_21d5408(v5, 2);
        Function_21df964(v5, 1);
        Function_21d6594(*(uint *)(v5 + 276), 25);
        result = 1;
        *v4 = 1;
      }
      else
      {
        Function_2005748(0x5F3u);
        Function_21d5408(v5, v7);
        Function_21d6594(*(uint *)(v5 + 276), 27);
        Function_21d6594(*(uint *)(v5 + 276), 24);
        result = 8;
        *v4 = 8;
      }
      return result;
    case 1u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( !result )
        return result;
      result = Function_21dfd2c(v5);
      if ( result > 54 )
      {
        if ( result != 55 )
          return result;
LABEL_18:
        Function_21d6594(*(uint *)(v5 + 276), 26);
        result = 9;
        *v4 = 9;
        return result;
      }
      if ( result >= 54 )
      {
        Function_21d6594(*(uint *)(v5 + 276), 26);
        result = 2;
        *v4 = 2;
        return result;
      }
      if ( result <= -1 && result >= -2 )
      {
        if ( result == -2 )
          return Function_21d6594(*(uint *)(v5 + 276), 28);
        if ( result == -1 )
          goto LABEL_18;
      }
      return result;
    case 2u:
      result = Function_21d6600(*(uint *)(result + 276), 26);
      if ( result )
      {
        v6 = Function_21d5e9c(v5);
        Function_200b5cc(*(int **)(v5 + 412), 0, v6);
        Function_21d38e0(v5);
        if ( Function_21d5e38(v5) == 2 )
        {
          Function_21d6594(*(uint *)(v5 + 276), 14);
          *(uint *)(v5 + 440) = 0;
        }
        else if ( Function_21d5e10(v5) )
        {
          Function_21d6594(*(uint *)(v5 + 276), 16);
          *(uint *)(v5 + 440) = 2;
        }
        else
        {
          Function_21d6594(*(uint *)(v5 + 276), 15);
          *(uint *)(v5 + 440) = 1;
        }
        result = 3;
        *v4 = 3;
      }
      return result;
    case 3u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
      {
        if ( Function_21d3b20(v5) )
        {
          if ( Function_21d5e38(v5) == 2 )
            Function_21d5834(v5);
          else
            Function_21d584c(v5);
          Function_21d5408(v5, 3);
          *v4 = 5;
        }
        else
        {
          Function_21d5408(v5, 32);
          *v4 = 4;
        }
        result = Function_21d6594(*(uint *)(v5 + 276), 24);
      }
      return result;
    case 4u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_21d5408(v5, 33);
          Function_21d6594(*(uint *)(v5 + 276), 24);
          result = 6;
          *v4 = 6;
        }
      }
      return result;
    case 5u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_21d5408(v5, 4);
          Function_21d6594(*(uint *)(v5 + 276), 24);
          result = 6;
          *v4 = 6;
        }
      }
      return result;
    case 6u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_21d6594(*(uint *)(v5 + 276), 26);
          result = 7;
          *v4 = 7;
        }
      }
      return result;
    case 7u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
      {
        if ( Function_21d3b20(v5) )
        {
          if ( *(uint *)(v5 + 440) == 2 )
            Function_21d6594(*(uint *)(v5 + 276), 37);
          Function_21d0f14(v5);
        }
        Function_21d6594(*(uint *)(v5 + 276), 6);
        result = 9;
        *v4 = 9;
      }
      return result;
    case 8u:
      result = Function_21d6600(*(uint *)(result + 276), 24);
      if ( result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_21d6594(*(uint *)(v5 + 276), 26);
          result = 9;
          *v4 = 9;
        }
      }
      return result;
    case 9u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
        result = Function_21d0ec0(v5);
      return result;
    default:
      return result;
  }
}

//----- (021D38E0) --------------------------------------------------------
uint *__fastcall Function_21d38e0(int a1)
{
  int v1;
  uint v2;
  short *v3;
  uint *result;
  BOOL v5;
  uint v6;
  int v7;
  int v8;
  int v9;

  v8 = a1;
  v1 = a1 + 348;
  v2 = 0;
  v3 = &word_21DFDF0;
  *(uint *)(a1 + 364) = *(uint *)(a1 + 76);
  v9 = 0;
  do
  {
    *(uchar *)(v1 + v2 + 4) = Function_21d3ac8(*(uint *)(v1 + 16), (ushort)*v3);
    if ( *(uchar *)(v1 + v2 + 4) )
      ++v9;
    ++v2;
    ++v3;
  }
  while ( v2 < 3 );
  if ( v9 )
  {
    *(uchar *)v1 = 0;
    *(uchar *)(v1 + 1) = 0;
    *(uchar *)(v1 + 2) = 0;
    *(uchar *)(v1 + 3) = 0;
    *(uint *)(v1 + 20) = *(uint *)(v8 + 288);
    *(uint *)(v1 + 24) = *(uint *)(v8 + 292);
    v5 = Function_21d5e38(v8) != 1;
    v6 = 0;
    *(uint *)(v1 + 28) = v5;
    v7 = v1;
    do
    {
      ++v6;
      *(ushort *)(v7 + 8) = 0;
      v7 += 2;
    }
    while ( v6 < 3 );
    result = AddTaskToTaskList1((int)Function_21d3978, v1, 0);
  }
  else
  {
    result = (uint *)1;
    *(uchar *)v1 = 1;
    *(uchar *)(v1 + 1) = 1;
  }
  return result;
}

//----- (021D3978) --------------------------------------------------------
int __fastcall Function_21d3978(int *a1, int a2)
{
  uint *v2;
  short *v3;
  int v4;
  uint v5;
  int result;
  short *v7;
  int v8;
  int *v9;
  uint v10;
  short *v11;
  int v12;
  uint v13;
  uint v14;
  int v15;
  int *v16;
  int v17;
  int i;
  int v19;
  int v20;
  int v21;

  v16 = a1;
  v17 = a2;
  if ( *(uchar *)(a2 + 2) >= 0x12u )
  {
    v20 = GetNrOfPkmnInParty(*(uint *)(a2 + 24));
    for ( i = 0; i < v20; ++i )
    {
      v7 = &word_21DFDF0;
      v8 = v17;
      v9 = GetAdrOfPkmnInParty(*(uint **)(v17 + 24), i);
      v10 = 0;
      do
      {
        if ( Function_21d3ac8(v9, (ushort)*v7) )
          ++*(ushort *)(v8 + 8);
        ++v10;
        ++v7;
        v8 += 2;
      }
      while ( v10 < 3 );
    }
    if ( *(uint *)(v17 + 28) )
    {
      v11 = &word_21DFDF0;
      v12 = v17;
      v13 = 0;
      do
      {
        if ( Function_21d3ac8(*(uint *)(v17 + 16), (ushort)*v11) )
          ++*(ushort *)(v12 + 8);
        ++v13;
        ++v11;
        v12 += 2;
      }
      while ( v13 < 3 );
    }
    *(uchar *)(v17 + 1) = 1;
    v14 = 0;
    v15 = v17;
    while ( *(ushort *)(v15 + 8) != 1 || *(uchar *)(v17 + v14 + 4) != 1 )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= 3 )
        goto LABEL_31;
    }
    *(uchar *)(v17 + 1) = 0;
LABEL_31:
    *(uchar *)v17 = 1;
    result = Call_RemoveTaskFromTaskList(v16);
  }
  else
  {
    v19 = *(uchar *)(a2 + 3);
    v21 = v19 + 15;
    if ( v19 + 15 > 30 )
      v21 = 30;
    for ( ; v19 < v21; ++v19 )
    {
      v2 = Function_2079c9c(*(uint **)(v17 + 20), *(uchar *)(v17 + 2), v19);
      if ( GetBoxPkmnData((int)v2, 0xACu, 0) )
      {
        v3 = &word_21DFDF0;
        v4 = v17;
        v5 = 0;
        do
        {
          if ( Function_21d3ac8(v2, (ushort)*v3) )
            ++*(ushort *)(v4 + 8);
          ++v5;
          ++v3;
          v4 += 2;
        }
        while ( v5 < 3 );
      }
    }
    if ( v21 == 30 )
    {
      *(uchar *)(v17 + 3) = 0;
      result = v17;
      ++*(uchar *)(v17 + 2);
    }
    else
    {
      result = v17;
      *(uchar *)(v17 + 3) = v21;
    }
  }
  return result;
}

//----- (021D3AC8) --------------------------------------------------------
int __fastcall Function_21d3ac8(int a1, int a2)
{
  int v2;
  ushort *v3;
  int v4;
  int v6;
  int v7;

  v2 = a2;
  v3 = (ushort *)a1;
  v7 = 0;
  v6 = InitEncryptPkmnData_Part1(a1);
  if ( !GetBoxPkmnData((int)v3, 0xADu, 0) )
  {
    v4 = 0;
    while ( v2 != GetBoxPkmnData((int)v3, v4 + 54, 0) )
    {
      if ( ++v4 >= 4 )
        goto LABEL_6;
    }
    v7 = 1;
  }
LABEL_6:
  InitEncryptPkmnData_Part1Again(v3, v6);
  return v7;
}

//----- (021D3B18) --------------------------------------------------------
int __fastcall Function_21d3b18(int a1)
{
  return *(uchar *)(a1 + 348);
}

//----- (021D3B20) --------------------------------------------------------
int __fastcall Function_21d3b20(int a1)
{
  int result;

  if ( *(uchar *)(a1 + 348) )
    result = *(uchar *)(a1 + 349);
  else
    result = 0;
  return result;
}

//----- (021D3B34) --------------------------------------------------------
int __fastcall Function_21d3b34(uint *a1, int *a2, int a3, int a4)
{
  int *v4;
  uint *v5;
  int result;
  int v7;
  int v8;

  v4 = a2;
  v5 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      result = Function_21d6600(v5[69], 3);
      if ( result )
      {
        Function_21d64a0(v5[69]);
        Function_201807c(10);
        v7 = Function_207999c(v5[72]);
        Function_2079af4((uint *)v5[72], v7, *(ushort **)(v5[74] + 24));
        v5[132] = AllocAndInitOverlayData((int *)&JumpTable_20f2dac, v5[74], 9u);
        result = *v4 + 1;
        *v4 = result;
      }
    }
    else if ( result == 2 )
    {
      result = CallOverlayDataJumpTable(v5[132], (int)a2, a3, a4);
      if ( result )
      {
        v8 = Function_207999c(v5[72]);
        Call_free2(v5[132]);
        Function_2017fc8(3, 10, 245760);
        Function_2079b24((uint *)v5[72], v8, *(uint *)(v5[74] + 24));
        Function_21d4f40(v5[72], v5 + 16);
        Function_21d61b0(v5 + 69, v5, v5);
        result = Function_21d0eb0(__PAIR__(Function_21d0f88, (uint)v5));
      }
    }
  }
  else
  {
    Function_21d6594(v5[69], 3);
    result = *v4 + 1;
    *v4 = result;
  }
  return result;
}

//----- (021D3C28) --------------------------------------------------------
int __fastcall Function_21d3c28(uint *a1, int *a2, int a3, int a4)
{
  int *v4;
  uint *v5;
  int result;

  v4 = a2;
  v5 = a1;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 1 )
    {
      result = Function_21d6600(v5[69], 3);
      if ( result )
      {
        Function_21d64a0(v5[69]);
        Function_201807c(10);
        Function_21d1c84((int)v5);
        v5[132] = AllocAndInitOverlayData((int *)&Unknown_20f410c, (int)(v5 + 75), 9u);
        result = *v4 + 1;
        *v4 = result;
      }
    }
    else if ( result == 2 )
    {
      result = CallOverlayDataJumpTable(v5[132], (int)a2, a3, a4);
      if ( result )
      {
        Function_207999c(v5[72]);
        Call_free2(v5[132]);
        Function_2017fc8(3, 10, 245760);
        if ( Function_21d5e38(v5) == 1 )
          Function_21d3cfc(v5, v5);
        Function_21d61b0(v5 + 69, v5, v5);
        Function_21d0eb0(__PAIR__(Function_21d0f88, (uint)v5));
        result = Function_21d0f14((int)v5);
      }
    }
  }
  else
  {
    Function_21d6594(v5[69], 3);
    result = *v4 + 1;
    *v4 = result;
  }
  return result;
}

//----- (021D3CFC) --------------------------------------------------------
int __fastcall Function_21d3cfc(int a1, int a2)
{
  uchar *v2;
  int result;
  int v4;
  char v5;

  v2 = (uchar *)(a1 + 8);
  result = *(uchar *)(a1 + 12);
  v4 = a2;
  if ( !result )
  {
    v2[7] = *(uchar *)(a2 + 320);
    s32_div_f((char)v2[7], 6);
    v2[5] = v5;
    v2[6] = s32_div_f((char)v2[7], 6);
    return Function_21d52f4(v4);
  }
  if ( result == 1 )
  {
    v2[8] = *(uchar *)(a2 + 320);
    return Function_21d52f4(v4);
  }
  return result;
}

//----- (021D3D44) --------------------------------------------------------
int __fastcall Function_21d3d44(int *a1, int *a2, int a3, int a4)
{
  int *v4;
  int *v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v4 = a2;
  v5 = a1;
  result = *a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_21d6594(v5[69], 3);
      result = *v4 + 1;
      *v4 = result;
      break;
    case 1u:
      result = Function_21d6600(v5[69], 3);
      if ( result )
      {
        Function_21d64a0(v5[69]);
        Function_201807c(10);
        v7 = LoadVariableAreaAdressItemList(v5[71]);
        v5[133] = (int)Function_207d824(v7, (uchar *)dword_21DFE30, 9u);
        Function_207cb2c(v5[133], v5[71], 1, 0);
        LoadOverlay(84, 2, v8, v9);
        v5[132] = (int)AllocAndInitOverlayData(&dword_223F350[1912], v5[133], 9u);
        result = *v4 + 1;
        *v4 = result;
      }
      break;
    case 2u:
      result = CallOverlayDataJumpTable(v5[132], (int)a2, a3, a4);
      if ( result )
      {
        dword_21E05E0[2] = Function_207cb94(v5[133]);
        Call_free2(v5[132]);
        free(v5[133]);
        UnloadOverlay(84, v10, v11, v12);
        if ( dword_21E05E0[2] != 112 || GetBoxPkmnData(v5[19], 5u, 0) == 487 )
        {
          if ( dword_21E05E0[2] )
          {
            v13 = LoadVariableAreaAdressItemList(v5[71]);
            GiveItem(v13, LOWORD(dword_21E05E0[2]), 1u, 9u);
            Function_21d5be8(v5, LOWORD(dword_21E05E0[2]), v5);
            Function_21d0f14((int)v5);
          }
        }
        Function_2017fc8(3, 10, 245760);
        Function_21d61b0(v5 + 69, v5, v5);
        Function_21d6594(v5[69], 0);
        result = *v4 + 1;
        *v4 = result;
      }
      break;
    case 3u:
      result = Function_21d6600(v5[69], 0);
      if ( result )
      {
        Function_21d6594(v5[69], 2);
        result = *v4 + 1;
        *v4 = result;
      }
      break;
    case 4u:
      result = Function_21d6600(v5[69], 2);
      if ( result )
      {
        if ( dword_21E05E0[2] )
        {
          if ( dword_21E05E0[2] != 112 || GetBoxPkmnData(v5[19], 5u, 0) == 487 )
          {
            Function_200b70c(v5[103], 0, dword_21E05E0[2]);
            Function_21d5408(v5, 16);
            Function_21d6594(v5[69], 24);
            result = *v4 + 1;
            *v4 = result;
          }
          else
          {
            Function_200b70c(v5[103], 0, dword_21E05E0[2]);
            Function_21d5408(v5, 45);
            Function_21d6594(v5[69], 24);
            result = *v4 + 1;
            *v4 = result;
          }
        }
        else
        {
          result = Function_21d0ec0((int)v5);
        }
      }
      break;
    case 5u:
      result = Function_21d6600(v5[69], 24);
      if ( result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_2005748(0x5DDu);
          Function_21d6594(v5[69], 26);
          result = *v4 + 1;
          *v4 = result;
        }
      }
      break;
    case 6u:
      result = Function_21d6628(v5[69]);
      if ( result )
        result = Function_21d0ec0((int)v5);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D3FB0) --------------------------------------------------------
int __fastcall Function_21d3fb0(int result, uint *a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = result;
  switch ( (uchar)*a2 )
  {
    case 0u:
      dword_21E05E0[1] = Function_21d5e74(result);
      if ( Function_207d2d0(LOWORD(dword_21E05E0[1])) )
      {
        Function_2005748(0x5F3u);
        Function_21d5408(v3, 24);
        Function_21d6594(*(uint *)(v3 + 276), 24);
        result = 4;
        *v2 = 4;
      }
      else
      {
        Function_200b70c(*(uint *)(v3 + 412), 0, dword_21E05E0[1]);
        Function_21df964(v3, 0);
        Function_21d5408(v3, 23);
        Function_21d6594(*(uint *)(v3 + 276), 25);
        result = 1;
        *v2 = 1;
      }
      return result;
    case 1u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( !result )
        return result;
      result = Function_21dfd2c(v3);
      if ( result > 54 )
      {
        if ( result != 55 )
          return result;
LABEL_19:
        Function_21d6594(*(uint *)(v3 + 276), 26);
        result = 5;
        *v2 = 5;
        return result;
      }
      if ( result >= 54 )
      {
        Function_21d6594(*(uint *)(v3 + 276), 27);
        result = 2;
        *v2 = 2;
        return result;
      }
      if ( result <= -1 && result >= -2 )
      {
        if ( result == -2 )
          return Function_21d6594(*(uint *)(v3 + 276), 28);
        if ( result == -1 )
          goto LABEL_19;
      }
      return result;
    case 2u:
      v4 = LoadVariableAreaAdressItemList(*(uint *)(result + 284));
      if ( TakeItem(v4, LOWORD(dword_21E05E0[1]), 1, 9u) )
      {
        Function_21d5be8(v3, 0, v3);
        Function_21d6594(*(uint *)(v3 + 276), 22);
        Function_21d6594(*(uint *)(v3 + 276), 6);
        result = 3;
        *v2 = 3;
      }
      else
      {
        Function_21d5408(v3, 14);
        Function_21d6594(*(uint *)(v3 + 276), 24);
        result = 4;
        *v2 = 4;
      }
      return result;
    case 3u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
      {
        Function_21d5408(v3, 15);
        Function_21d6594(*(uint *)(v3 + 276), 24);
        result = 4;
        *v2 = 4;
      }
      return result;
    case 4u:
      result = Function_21d6600(*(uint *)(result + 276), 24);
      if ( result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_2005748(0x5DDu);
          Function_21d6594(*(uint *)(v3 + 276), 26);
          result = 5;
          *v2 = 5;
        }
      }
      return result;
    case 5u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
        result = Function_21d0ec0(v3);
      return result;
    default:
      return result;
  }
}

//----- (021D4184) --------------------------------------------------------
int __fastcall Function_21d4184(int result, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = result;
  switch ( (uchar)*a2 )
  {
    case 0u:
      dword_21E05E0[0] = Function_21d5f88();
      if ( Function_207d2d0(LOWORD(dword_21E05E0[0])) )
      {
        Function_2005748(0x5F3u);
        Function_21d5408(v3, 24);
        Function_21d6594(*(uint *)(v3 + 276), 24);
        result = 5;
        *v2 = 5;
      }
      else
      {
        Function_200b70c(*(uint *)(v3 + 412), 0, dword_21E05E0[0]);
        Function_21d5408(v3, 26);
        Function_21df964(v3, 0);
        Function_21d6594(*(uint *)(v3 + 276), 25);
        result = 1;
        *v2 = 1;
      }
      return result;
    case 1u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( !result )
        return result;
      result = Function_21dfd2c(v3);
      if ( result > 54 )
      {
        if ( result != 55 )
          return result;
LABEL_19:
        Function_21d6594(*(uint *)(v3 + 276), 26);
        result = 6;
        *v2 = 6;
        return result;
      }
      if ( result >= 54 )
      {
        Function_21d6594(*(uint *)(v3 + 276), 26);
        result = 2;
        *v2 = 2;
        return result;
      }
      if ( result <= -1 && result >= -2 )
      {
        if ( result == -2 )
          return Function_21d6594(*(uint *)(v3 + 276), 28);
        if ( result == -1 )
          goto LABEL_19;
      }
      return result;
    case 2u:
      v4 = LoadVariableAreaAdressItemList(*(uint *)(result + 284));
      if ( TakeItem(v4, LOWORD(dword_21E05E0[0]), 1, 9u) )
      {
        if ( Function_21d5f7c(v3) )
        {
          Function_21d5d54(v3);
          v5 = 4;
        }
        else
        {
          Function_21d5be8(v3, 0, v3);
          v5 = 3;
        }
        *v2 = v5;
        result = Function_21d6594(*(uint *)(v3 + 276), 23);
      }
      else
      {
        Function_21d5408(v3, 14);
        Function_21d6594(*(uint *)(v3 + 276), 24);
        result = 5;
        *v2 = 5;
      }
      return result;
    case 3u:
      result = Function_21d6600(*(uint *)(result + 276), 23);
      if ( result )
      {
        Function_21d6594(*(uint *)(v3 + 276), 22);
        Function_21d6594(*(uint *)(v3 + 276), 6);
        result = 4;
        *v2 = 4;
      }
      return result;
    case 4u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
      {
        Function_21d5408(v3, 27);
        Function_21d6594(*(uint *)(v3 + 276), 24);
        result = 5;
        *v2 = 5;
      }
      return result;
    case 5u:
      result = Function_21d6600(*(uint *)(result + 276), 24);
      if ( result )
      {
        result = 3;
        if ( dword_21BF6C4 & 3 )
        {
          Function_2005748(0x5DDu);
          Function_21d6594(*(uint *)(v3 + 276), 26);
          result = 6;
          *v2 = 6;
        }
      }
      return result;
    case 6u:
      result = Function_21d6628(*(uint *)(result + 276));
      if ( result )
        result = Function_21d0ec0(v3);
      return result;
    default:
      return result;
  }
}

//----- (021D4390) --------------------------------------------------------
int __fastcall Function_21d4390(int a1, int *a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = *a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_21d6594(*(uint *)(v3 + 276), 26);
      result = *v2 + 1;
      *v2 = result;
      break;
    case 1u:
      result = Function_21d6600(*(uint *)(v3 + 276), 26);
      if ( result )
      {
        Function_21d6594(*(uint *)(v3 + 276), 17);
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 2u:
      result = Function_21d6600(*(uint *)(v3 + 276), 17);
      if ( result )
      {
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 3u:
      result = 243;
      if ( dword_21BF6C4 & 0xF3 )
      {
        Function_21d6594(*(uint *)(v3 + 276), 18);
        result = *v2 + 1;
        *v2 = result;
      }
      break;
    case 4u:
      result = Function_21d6600(*(uint *)(v3 + 276), 18);
      if ( result )
        result = Function_21d0ec0(v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D443C) --------------------------------------------------------
int __fastcall Function_21d443c(int result, char a2, short a3)
{
  *(uint *)(result + 444) = 0;
  *(uchar *)(result + 449) = a2;
  *(ushort *)(result + 450) = a3;
  *(uchar *)(result + 448) = 0;
  return result;
}

//----- (021D4458) --------------------------------------------------------
int __fastcall Function_21d4458(int result)
{
  *(uint *)(result + 444) = 0;
  *(uchar *)(result + 448) = 1;
  return result;
}

//----- (021D4468) --------------------------------------------------------
int __fastcall Function_21d4468(int a1)
{
  int v1;
  uint *v2;
  uint v3;

  v1 = a1;
  v2 = (uint *)(a1 + 444);
  v3 = *(uint *)(a1 + 444);
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_21D4486 + v3) + 35472520);
  switch ( (uchar)v3 )
  {
    case 0:
      if ( *(uchar *)(a1 + 448) == 1 )
      {
        *v2 = 1;
      }
      else
      {
        if ( *(char *)(a1 + 449) == -1 )
          *(uchar *)(a1 + 449) = 0;
        Function_21d5d20(a1, *(char *)(a1 + 449));
        Function_21d6594(*(uint *)(v1 + 276), 30);
        *v2 = 1;
      }
      return 0;
    case 1:
      if ( Function_21d6600(*(uint *)(a1 + 276), 30) )
      {
        Function_21d5408(v1, *(ushort *)(v1 + 450));
        Function_21d6594(*(uint *)(v1 + 276), 24);
        *v2 = 2;
      }
      return 0;
    case 2:
      if ( !Function_21d6600(*(uint *)(a1 + 276), 24) )
        return 0;
      *v2 = 3;
      goto LABEL_13;
    case 3:
LABEL_13:
      if ( !Function_21d6600(*(uint *)(v1 + 276), 31) )
        return 0;
      if ( dword_21BF6C4 & 0x220 )
      {
        if ( (char)--*(uchar *)(v1 + 449) < 0 )
          *(uchar *)(v1 + 449) = 17;
        Function_21d5d20(v1, *(char *)(v1 + 449));
        Function_21d6594(*(uint *)(v1 + 276), 31);
      }
      else if ( dword_21BF6C4 & 0x110 )
      {
        if ( (char)++*(uchar *)(v1 + 449) >= 18 )
          *(uchar *)(v1 + 449) = 0;
        Function_21d5d20(v1, *(char *)(v1 + 449));
        Function_21d6594(*(uint *)(v1 + 276), 31);
      }
      else
      {
        if ( dword_21BF6C4 & 1 )
        {
          Function_2005748(0x5DDu);
          return 1;
        }
        if ( dword_21BF6C4 & 2 )
        {
          Function_2005748(0x5DDu);
          *(uchar *)(v1 + 449) = -1;
          return 1;
        }
      }
      return 0;
    default:
      return 0;
  }
}

//----- (021D45A8) --------------------------------------------------------
int __fastcall Function_21d45a8(int result, int *a2)
{
  int *v2;
  int v3;
  int v4;
  uint v5;

  v2 = a2;
  v3 = *a2;
  v4 = result;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = Function_21d6600(*(uint *)(result + 276), 4);
      if ( result )
      {
        if ( Function_21d5e10(v4) || Function_21d5e38(v4) != 1 )
        {
          result = Function_21d0ec0(v4);
        }
        else
        {
          Function_21d6594(*(uint *)(v4 + 276), 6);
          result = *v2 + 1;
          *v2 = result;
        }
      }
    }
    else if ( v3 == 2 )
    {
      result = Function_21d6600(*(uint *)(result + 276), 6);
      if ( result )
        result = Function_21d0ec0(v4);
    }
  }
  else
  {
    v5 = Function_21d5e68(result);
    Function_2079a94(*(uint **)(v4 + 288), v5);
    Function_21d52f4(v4);
    Function_21d6594(*(uint *)(v4 + 276), 4);
    result = *v2 + 1;
    *v2 = result;
  }
  return result;
}

//----- (021D4640) --------------------------------------------------------
int __fastcall Function_21d4640(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int result;
  int v5;
  int v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a2;
  v3 = a1;
  result = *a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_2005748(0x5E4u);
      Function_21d5d94(v3, 1);
      v5 = Function_21d5e68(v3);
      Function_21d5d9c(v3, v5);
      Function_21d6594(*(uint *)(v3 + 276), 40);
      Function_21d603c(v3 + 456, 0, 192, 56);
      *(uint *)(v3 + 516) = 0;
      result = 520;
      *(uint *)(v3 + 520) = 1;
      *v2 = 1;
      break;
    case 1u:
      result = Function_21d6600(*(uint *)(v3 + 276), 40);
      if ( result )
      {
        if ( Function_21d538c(v3) && *(uint *)(v3 + 388) == 1 )
        {
          if ( Function_21d5e08(v3) == 3 )
            result = Function_2005748(0x5F3u);
          else
            result = Function_21d0eb0(__PAIR__(Function_21d4938, v3));
        }
        else if ( dword_21BF6C4 & 0xF3 )
        {
          Function_2005748(0x5DDu);
          Function_21d5d94(v3, 0);
          v6 = Function_21d5e68(v3);
          Function_21d5d9c(v3, v6);
          Function_21d6594(*(uint *)(v3 + 276), 40);
          result = 5;
          *v2 = 5;
        }
        else if ( *(uint *)(v3 + 516)
               && *(uint *)(v3 + 520)
               && (++*(uint *)(v3 + 512), *(uint *)(v3 + 512) > 0x14u) )
        {
          v7 = Function_21d5eb8(v3);
          Function_21d5d08(v3, v7);
          Function_2079a94(*(uint **)(v3 + 288), v7);
          Function_21d52f4(v3);
          if ( Function_21d5e38(v3) == 1 )
            Function_21d6594(*(uint *)(v3 + 276), 8);
          Function_21d6594(*(uint *)(v3 + 276), 4);
          *(uint *)(v3 + 516) = 0;
          *(uint *)(v3 + 512) = 0;
          result = 3;
          *v2 = 3;
        }
        else
        {
          result = Function_21d60a8(v3 + 456);
          switch ( result )
          {
            case 1:
              *(uint *)(v3 + 508) = Function_21d5eb8(v3);
              *(uint *)(v3 + 516) = 0;
              result = 524;
              *(uint *)(v3 + 524) = 0;
              *(uint *)(v3 + 520) = 0;
              break;
            case 2:
              v8 = Function_21d614c(v3 + 456);
              result = *(uint *)(v3 + 524);
              if ( v8 != result )
              {
                v9 = v8 - result;
                v10 = v8 - result + Function_21d5eb8(v3);
                if ( v10 >= 0 )
                {
                  if ( v10 >= 18 )
                    v10 -= 18;
                }
                else
                {
                  v10 += 18;
                }
                *(uint *)(v3 + 524) = v8;
                Function_21d5d9c(v3, v10);
                Function_21d5dac(v3, v9);
                Function_21d6594(*(uint *)(v3 + 276), 41);
                Function_2005748(0x5DCu);
                result = 2;
                *v2 = 2;
              }
              break;
            case 3:
              v11 = Function_21d5e68(v3);
              *(uint *)(v3 + 516) = v11 != Function_21d5eb8(v3);
              *(uint *)(v3 + 512) = 0;
              result = 520;
              *(uint *)(v3 + 520) = 1;
              break;
          }
        }
      }
      break;
    case 2u:
      if ( !*(uint *)(v3 + 520) && Function_21d60a8(v3 + 456) == 3 )
      {
        v12 = Function_21d5e68(v3);
        *(uint *)(v3 + 516) = v12 != Function_21d5eb8(v3);
        *(uint *)(v3 + 512) = 0;
        *(uint *)(v3 + 520) = 1;
      }
      result = Function_21d6600(*(uint *)(v3 + 276), 41);
      if ( result )
      {
        result = 1;
        *v2 = 1;
      }
      break;
    case 3u:
      result = Function_21d6600(*(uint *)(v3 + 276), 4);
      if ( result )
      {
        if ( Function_21d5e38(v3) == 1 && Function_21d5e34(v3) )
        {
          Function_21d6594(*(uint *)(v3 + 276), 6);
          result = 4;
          *v2 = 4;
        }
        else
        {
          result = 1;
          *v2 = 1;
        }
      }
      break;
    case 4u:
      result = Function_21d6600(*(uint *)(v3 + 276), 6);
      if ( result )
      {
        result = 1;
        *v2 = 1;
      }
      break;
    case 5u:
      result = Function_21d6628(*(uint *)(v3 + 276));
      if ( result )
        result = Function_21d0ec0(v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D4938) --------------------------------------------------------
int __fastcall Function_21d4938(uint *a1, uint *a2)
{
  uint *v2;
  uint *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = a1;
  result = *a2;
  switch ( (uchar)*a2 )
  {
    case 0u:
      Function_2005748(0x5E4u);
      Function_21d5d94(v3, 2);
      Function_21d5da4(v3, 0);
      Function_21d5d9c(v3, 0);
      Function_21d6594(v3[69], 40);
      Function_21d603c(v3 + 114, 255, 192, 56);
      v3[129] = 0;
      result = 520;
      v3[130] = 1;
      *v2 = 1;
      break;
    case 1u:
      result = Function_21d6600(v3[69], 40);
      if ( result )
      {
        if ( !Function_21d538c(v3) || v3[97] )
        {
          if ( dword_21BF6C4 & 0xF3 )
          {
            Function_2005748(0x5DDu);
            Function_21d5d94(v3, 0);
            Function_21d6594(v3[69], 40);
            *v2 = 3;
          }
          if ( Function_21d4b88(v3) )
          {
            Function_2005748(0x5DDu);
            Function_21d6594(v3[69], 42);
            result = Function_21d6594(v3[69], 39);
          }
          else
          {
            result = Function_21d60a8(v3 + 114);
            switch ( result )
            {
              case 1:
                v3[127] = Function_21d5eb8(v3);
                v3[129] = 0;
                result = 524;
                v3[131] = 0;
                v3[130] = 0;
                break;
              case 2:
                v5 = Function_21d614c(v3 + 114);
                result = v3[131];
                if ( v5 != result )
                {
                  v9 = v5 - result;
                  v6 = v5 - result + Function_21d5eb8(v3);
                  if ( v6 >= 0 )
                  {
                    if ( v6 >= 8 )
                      v6 -= 8;
                  }
                  else
                  {
                    v6 += 8;
                  }
                  v3[131] = v5;
                  Function_21d5d9c(v3, v6);
                  Function_21d5da4(v3, v6);
                  Function_21d5dac(v3, v9);
                  Function_21d6594(v3[69], 41);
                  Function_2005748(0x5DCu);
                  result = 2;
                  *v2 = 2;
                }
                break;
              case 3:
                v7 = Function_21d5e68(v3);
                v3[129] = v7 != Function_21d5eb8(v3);
                v3[128] = 0;
                result = 520;
                v3[130] = 1;
                break;
            }
          }
        }
        else
        {
          result = Function_21d0eb0(__PAIR__(Function_21d4640, (uint)v3));
        }
      }
      break;
    case 2u:
      if ( !v3[130] && Function_21d60a8(v3 + 114) == 3 )
      {
        v8 = Function_21d5e68(v3);
        v3[129] = v8 != Function_21d5eb8(v3);
        v3[128] = 0;
        v3[130] = 1;
      }
      result = Function_21d6600(v3[69], 41);
      if ( result )
      {
        result = 1;
        *v2 = 1;
      }
      break;
    case 3u:
      result = Function_21d6628(v3[69]);
      if ( result )
        result = Function_21d0ec0((int)v3);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D4B88) --------------------------------------------------------
BOOL __fastcall Function_21d4b88(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 392) = 8;
  Function_202404c(*(int **)(a1 + 384));
  return *(uint *)(v1 + 392) != 8;
}

//----- (021D4BB0) --------------------------------------------------------
int __fastcall Function_21d4bb0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  uint v6;

  v3 = a1;
  v4 = a3;
  result = *(uint *)(a3 + 392);
  if ( result == 8 && !a2 )
  {
    v6 = Function_21d5ec0(a3) + v3;
    if ( v6 >= 8 )
      v6 -= 8;
    Function_21d5db4(v4, v6);
    result = 392;
    *(uint *)(v4 + 392) = v3;
  }
  return result;
}

//----- (021D4BE0) --------------------------------------------------------
int __fastcall Function_21d4be0(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  *(uint *)(a1 + 288) = LoadVariableAreaAdress_25(*a2);
  *(uint *)(v3 + 284) = *v2;
  *(uint *)(v3 + 292) = LoadPokePartyAdress(*v2);
  *(uint *)(v3 + 420) = LoadPlayerDataAdress(*v2);
  *(uint *)(v3 + 280) = v2;
  v2[2] = 0;
  *(uint *)(v3 + 396) = LoadFromMsgNARC(0, 26, 19, 9u);
  *(uint *)(v3 + 400) = LoadFromMsgNARC(1, 26, 412, 9u);
  *(uint *)(v3 + 404) = LoadFromMsgNARC(0, 26, 202, 9u);
  *(uint *)(v3 + 408) = LoadFromMsgNARC(0, 26, 610, 9u);
  *(uint *)(v3 + 412) = Function_200b358(9u);
  v4 = GetPkmnDataSize();
  *(uint *)(v3 + 416) = malloc(9u, v4);
  if ( !*(uint *)(v3 + 412) )
    ErrorHandler();
  *(uint *)(v3 + 296) = Function_208712c(9u, 2, 0, 8, *(uint *)(v3 + 420));
  if ( v2[1] == 4 )
    v5 = Function_2023fcc(35520002, 4u, (int)Function_21d53b8, v3, 9u);
  else
    v5 = Function_2023fcc(35519990, 3u, (int)Function_21d53b8, v3, 9u);
  *(uint *)(v3 + 380) = v5;
  *(uint *)(v3 + 384) = Function_2023fcc(35520018, 7u, (int)Function_21d4bb0, v3, 9u);
  *(uint *)v3 = *(uint *)(v3 + 288);
  *(uint *)(v3 + 4) = *(uint *)(v3 + 292);
  *(ushort *)(v3 + 272) = 0;
  *(ushort *)(v3 + 274) = 0;
  Function_21d4de4(v3 + 72, v2[1]);
  Function_21d4e88(v3 + 76);
  Function_21d4e5c(*(uint *)(v3 + 288), v3 + 64);
  Function_21d4ee4(v3 + 164);
  Function_21d4df0(v3);
  Function_21d4e30(v3 + 20);
  return Function_21d4f34(v3 + 156);
}

//----- (021D4D58) --------------------------------------------------------
uint __fastcall Function_21d4d58(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  Function_2024034(*(uint *)(a1 + 384));
  Function_2024034(*(uint *)(v1 + 380));
  v3 = *(uint *)(v1 + 416);
  if ( v3 )
    free(v3);
  Function_200b3f0(*(uint **)(v1 + 412), v2);
  Function_200b190(*(ushort **)(v1 + 396));
  Function_200b190(*(ushort **)(v1 + 400));
  Function_200b190(*(ushort **)(v1 + 404));
  Function_200b190(*(ushort **)(v1 + 408));
  Function_208716c(*(uint *)(v1 + 296), v4);
  Function_21d4ec0(v1 + 76);
  Function_21d4e50(v1 + 20);
  Function_21d4e7c(v1 + 64);
  Function_21d4f18(v1 + 164);
  return free(v1);
}

//----- (021D4DE4) --------------------------------------------------------
int __fastcall Function_21d4de4(int result, char a2)
{
  *(uchar *)result = a2;
  *(uchar *)(result + 1) = 0;
  *(ushort *)(result + 2) = 0;
  return result;
}

//----- (021D4DF0) --------------------------------------------------------
int __fastcall Function_21d4df0(int a1)
{
  int v1;
  uchar *v2;

  v1 = a1;
  v2 = (uchar *)(a1 + 8);
  Function_21d5410();
  v2[8] = 0;
  v2[9] = 1;
  if ( *(uchar *)(v1 + 72) )
  {
    if ( *(uchar *)(v1 + 72) == 4 )
      v2[4] = 2;
    else
      v2[4] = 0;
  }
  else
  {
    v2[4] = 1;
  }
  v2[11] = 1;
  return Function_21d52f4(v1);
}

//----- (021D4E30) --------------------------------------------------------
int __fastcall Function_21d4e30(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_2076af4();
  *(uint *)v1 = malloc(9u, 30 * v2);
  result = 0;
  *(uchar *)(v1 + 8) = 0;
  *(uchar *)(v1 + 11) = 0;
  return result;
}

//----- (021D4E50) --------------------------------------------------------
uint __fastcall Function_21d4e50(int *a1)
{
  return free(*a1);
}

//----- (021D4E5C) --------------------------------------------------------
int __fastcall Function_21d4e5c(int a1, uchar *a2)
{
  uchar *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  *a2 = Function_207999c(a1);
  *((uint *)v2 + 1) = Function_2023790(20, 9u);
  return Function_21d4f40(v3, v2);
}

//----- (021D4E7C) --------------------------------------------------------
uint __fastcall Function_21d4e7c(int a1, int a2)
{
  return Function_20237bc_FreeMsg(*(uint *)(a1 + 4), a2);
}

//----- (021D4E88) --------------------------------------------------------
int __fastcall Function_21d4e88(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  a1[5] = Function_2023790(12, 9u);
  v1[6] = Function_2023790(12, 9u);
  v1[7] = Function_2023790(18, 9u);
  v1[8] = Function_2023790(12, 9u);
  result = Function_2023790(16, 9u);
  v1[9] = result;
  return result;
}

//----- (021D4EC0) --------------------------------------------------------
uint __fastcall Function_21d4ec0(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  Function_20237bc_FreeMsg(a1[5], a2);
  Function_20237bc_FreeMsg(v2[6], v3);
  Function_20237bc_FreeMsg(v2[7], v4);
  Function_20237bc_FreeMsg(v2[8], v5);
  return Function_20237bc_FreeMsg(v2[9], v6);
}

//----- (021D4EE4) --------------------------------------------------------
int __fastcall Function_21d4ee4(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 0;
  *(uchar *)a1 = 0;
  *(uchar *)(a1 + 1) = 0;
  *(uint *)(a1 + 4) = 0;
  v3 = a1;
  do
  {
    *(uchar *)(v1 + v2 + 2) = 0;
    *(uint *)(v3 + 48) = Function_2023790(12, 9u);
    result = Function_2023790(12, 9u);
    *(uint *)(v3 + 52) = result;
    ++v2;
    v3 += 48;
  }
  while ( v2 < 2 );
  return result;
}

//----- (021D4F18) --------------------------------------------------------
uint __fastcall Function_21d4f18(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a1;
  v3 = 0;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v2 + 48), a2);
    result = Function_20237bc_FreeMsg(*(uint *)(v2 + 52), v4);
    ++v3;
    v2 += 48;
  }
  while ( v3 < 2 );
  return result;
}

//----- (021D4F34) --------------------------------------------------------
int __fastcall Function_21d4f34(int result)
{
  *(uchar *)result = 0;
  *(uchar *)(result + 2) = 0;
  *(uchar *)(result + 1) = 0;
  *(ushort *)(result + 4) = 0;
  return result;
}

//----- (021D4F40) --------------------------------------------------------
uint __fastcall Function_21d4f40(int a1, ushort **a2)
{
  ushort **v2;
  uint *v3;

  v2 = a2;
  v3 = (uint *)a1;
  *((uchar *)a2 + 1) = Function_2079aa8(a1, *(uchar *)a2);
  return Function_2079af4(v3, *(uchar *)v2, v2[1]);
}

//----- (021D4F5C) --------------------------------------------------------
int __fastcall Function_21d4f5c(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1 + 64;
  result = Function_2079aa8(a2, *(uchar *)(a1 + 64));
  *(uchar *)(v2 + 1) = result;
  return result;
}

//----- (021D4F74) --------------------------------------------------------
int __fastcall Function_21d4f74(char a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = 0;
  if ( a1 & 0x20 )
  {
    v3 = Function_21d4fdc(a2, -1, 0);
  }
  else if ( a1 & 0x10 )
  {
    v3 = Function_21d4fdc(a2, 1, 0);
  }
  else if ( a1 & 0x40 )
  {
    v3 = Function_21d4fdc(a2, 0, -1);
  }
  else if ( a1 & 0x80 )
  {
    v3 = Function_21d4fdc(a2, 0, 1);
  }
  if ( v3 == 1 )
    Function_21d52f4(v2);
  return v3;
}

//----- (021D4FDC) --------------------------------------------------------
int __fastcall Function_21d4fdc(uchar *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  char v8;
  int v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;

  v3 = (int)(a1 + 8);
  switch ( a1[12] )
  {
    case 0:
      if ( a2 )
      {
        a1[13] += a2;
        v4 = (char)a1[13];
        v5 = (char)a1[14];
        Function_21d5410();
        result = 1;
      }
      else
      {
        if ( !a3 )
          goto LABEL_51;
        v7 = (char)a1[14] + a3;
        if ( v7 >= 0 )
        {
          if ( v7 > 4 )
          {
            if ( a1[13] == 5 )
              v8 = 4;
            else
              v8 = 3;
            a1[12] = v8;
          }
        }
        else
        {
          a1[12] = 2;
        }
        v9 = (char)a1[13];
        Function_21d5410();
        result = 1;
      }
      break;
    case 1:
      v14 = (char)a1[16];
      if ( a3 >= 0 )
      {
        if ( a3 <= 0 )
        {
          if ( a2 >= 0 )
          {
            if ( a2 > 0 && v14 != 6 && !(v14 & 1) )
              *(uchar *)(v3 + 8) = v14 + 1;
          }
          else if ( v14 & 1 )
          {
            *(uchar *)(v3 + 8) = v14 - 1;
          }
        }
        else if ( v14 == 6 )
        {
          *(uchar *)(v3 + 8) = 0;
        }
        else
        {
          *(uchar *)(v3 + 8) = v14 + 2;
          if ( *(char *)(v3 + 8) >= 6 )
            *(uchar *)(v3 + 8) = 6;
        }
      }
      else if ( v14 == 6 )
      {
        *(uchar *)(v3 + 8) = 5;
      }
      else
      {
        *(uchar *)(v3 + 8) = v14 - 2;
        if ( *(char *)(v3 + 8) < 0 )
          *(uchar *)(v3 + 8) = 6;
      }
      if ( v14 == *(char *)(v3 + 8) )
        goto LABEL_51;
      result = 1;
      break;
    case 2:
      if ( a3 <= 0 )
      {
        if ( a3 >= 0 )
          goto LABEL_51;
        if ( a1[13] == 5 )
          v11 = 4;
        else
          v11 = 3;
        *(uchar *)(v3 + 4) = v11;
        result = 1;
      }
      else
      {
        a1[12] = 0;
        v10 = (char)a1[13];
        Function_21d5410();
        result = 1;
      }
      break;
    case 3:
      if ( a3 >= 0 )
      {
        if ( a3 <= 0 )
        {
          if ( !a2 )
            goto LABEL_51;
          a1[12] = 4;
          result = 1;
        }
        else
        {
          a1[12] = 2;
          result = 1;
        }
      }
      else
      {
        a1[12] = 0;
        v13 = (char)a1[13];
        Function_21d5410();
        result = 1;
      }
      break;
    case 4:
      if ( a3 >= 0 )
      {
        if ( a3 <= 0 )
        {
          if ( !a2 )
            goto LABEL_51;
          a1[12] = 3;
          result = 1;
        }
        else
        {
          a1[12] = 2;
          result = 1;
        }
      }
      else
      {
        a1[12] = 0;
        v12 = (char)a1[13];
        Function_21d5410();
        result = 1;
      }
      break;
    default:
LABEL_51:
      result = 0;
      break;
  }
  return result;
}

//----- (021D5150) --------------------------------------------------------
int __fastcall Function_21d5150(short a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = 0;
  if ( a1 & 0x20 )
  {
    v3 = Function_21d51cc(a2, -1, 0);
  }
  else if ( a1 & 0x10 )
  {
    v3 = Function_21d51cc(a2, 1, 0);
  }
  else if ( a1 & 0x40 )
  {
    v3 = Function_21d51cc(a2, 0, -1);
  }
  else if ( a1 & 0x80 )
  {
    v3 = Function_21d51cc(a2, 0, 1);
  }
  else if ( a1 & 0x200 )
  {
    v3 = 3;
  }
  else if ( a1 & 0x100 )
  {
    v3 = 4;
  }
  if ( v3 == 1 )
    Function_21d52f4(v2);
  return v3;
}

//----- (021D51CC) --------------------------------------------------------
int __fastcall Function_21d51cc(uchar *a1, int a2, int a3)
{
  uchar *v3;
  int v4;
  uchar *v5;
  int v6;
  uint v7;
  uint v8;
  int v9;
  int v10;
  int v12;
  uint v13;
  uint v14;
  int v15;
  int v16;

  v3 = a1;
  v4 = (int)(a1 + 8);
  v5 = a1 + 20;
  if ( a1[12] )
    goto LABEL_30;
  if ( a2 )
  {
    v6 = (char)a1[13] + a2;
    if ( Function_21d5e38(a1) & 0xC )
    {
      v7 = v5[4];
      v8 = v5[6];
      v9 = v6;
      v10 = v6;
      if ( v8 <= v7 )
        v9 = v6 + v7 - v8;
      else
        v10 = v6 - (v8 - v7);
      if ( v10 < 0 )
        return 3;
      if ( v9 >= 6 )
        return 4;
    }
    else if ( v6 < 0 || v6 >= 6 )
    {
      return 2;
    }
    Function_21d5410(v3, v6, *(char *)(v4 + 6));
    return 1;
  }
  if ( !a3 )
  {
LABEL_30:
    ErrorHandler();
    return 0;
  }
  v12 = (char)a1[14] + a3;
  if ( Function_21d5e38(a1) & 0xC )
  {
    v13 = v5[5];
    v14 = v5[7];
    v15 = v12;
    v16 = v12;
    if ( v14 <= v13 )
      v15 = v12 + v13 - v14;
    else
      v16 = v12 - (v14 - v13);
    if ( v16 < 0 || v15 >= 5 )
      return 2;
  }
  else if ( v12 < 0 || v12 >= 5 )
  {
    return 2;
  }
  Function_21d5410(v3, *(char *)(v4 + 5), v12);
  return 1;
}

//----- (021D5290) --------------------------------------------------------
int __fastcall Function_21d5290(int a1)
{
  int v1;
  uchar *v2;

  v1 = a1;
  v2 = (uchar *)(a1 + 8);
  if ( Function_21d5e38(a1) == 2 )
  {
    v2[8] = GetNrOfPkmnInParty(*(uint *)(v1 + 292));
    if ( (char)v2[8] >= 6 )
      v2[8] = 5;
  }
  else
  {
    v2[8] = 0;
  }
  v2[9] = v2[4];
  v2[4] = 1;
  return Function_21d52f4(v1);
}

//----- (021D52D0) --------------------------------------------------------
int __fastcall Function_21d52d0(int a1)
{
  int v1;

  v1 = a1;
  *(uchar *)(a1 + 12) = 0;
  if ( *(uchar *)(a1 + 17) )
    Function_21d5410(a1, 0, 0);
  return Function_21d52f4(v1);
}

//----- (021D52F4) --------------------------------------------------------
int __fastcall Function_21d52f4(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = (int *)(a1 + 8);
  *(uchar *)(a1 + 18) = 0;
  switch ( *(uchar *)(a1 + 12) )
  {
    case 0:
      *(uint *)(a1 + 8) = Function_2079c9c(*(uint **)a1, 0xFFFFFFFF, *(char *)(a1 + 15));
      break;
    case 1:
      v3 = *(char *)(a1 + 16);
      if ( v3 >= GetNrOfPkmnInParty(*(uint *)(a1 + 292)) )
        *v2 = 0;
      else
        *v2 = (int)GetAdrOfPkmnInParty(*(uint **)(v1 + 292), v3);
      break;
    default:
      *v2 = 0;
      break;
  }
  if ( !*v2 )
    return 0;
  if ( !GetBoxPkmnData(*v2, 0xACu, 0) )
    return 0;
  *((uchar *)v2 + 10) = 1;
  if ( Function_21d5e38(v1) & 6 )
    return 0;
  Function_21d5888(v1, *v2, v1);
  return 1;
}

//----- (021D538C) --------------------------------------------------------
BOOL __fastcall Function_21d538c(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 388) = 0xFFFF;
  Function_202404c(*(int **)(a1 + 380));
  return *(uint *)(v1 + 388) != 0xFFFF;
}

//----- (021D53B8) --------------------------------------------------------
int __fastcall Function_21d53b8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( !a2 && *(uint *)(a3 + 388) == 0xFFFF )
    *(uint *)(a3 + 388) = a1;
  result = Function_21d5e08(a3);
  if ( result == 4 && v4 == 2 )
  {
    if ( v3 )
    {
      if ( v3 == 1 || v3 == 3 )
        result = Function_21d5ba0(v5, 0);
    }
    else
    {
      result = Function_21d5ba0(v5, 1);
    }
  }
  return result;
}

//----- (021D5408) --------------------------------------------------------
int __fastcall Function_21d5408(int result, int a2)
{
  *(uint *)(result + 268) = a2;
  return result;
}

//----- (021D5410) --------------------------------------------------------
uchar *__fastcall Function_21d5410(int a1, char a2, char a3)
{
  uchar *result;

  result = (uchar *)(a1 + 8);
  result[5] = a2;
  result[6] = a3;
  result[7] = a2 + 6 * a3;
  return result;
}

//----- (021D5420) --------------------------------------------------------
int __fastcall Function_21d5420(int a1, int a2)
{
  int v2;
  int v3;
  uint **v4;
  int v5;
  int v6;
  char v7;
  int v8;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = (uint **)(a2 + 20);
  v5 = a2 + 8;
  if ( Function_21d5e10(a2) )
  {
    v8 = Get_PkmnData_Size();
    MI_CpuCopy32(*(int **)v5, *v4, v8);
    Function_207a080(*(int **)(v3 + 292), *(char *)(v5 + 8));
    v7 = 1;
  }
  else
  {
    v6 = Function_2076af4();
    MI_CpuCopy32(*(int **)v5, *v4, v6);
    Function_2079968(*(uint **)(v3 + 288), 0xFFFFFFFF, *(char *)(v5 + 7));
    v7 = 0;
  }
  *((uchar *)v4 + 11) = v7;
  Function_21d5ba8(v2, *v4);
  *((uchar *)v4 + 6) = *(uchar *)(v5 + 5);
  *((uchar *)v4 + 4) = *((uchar *)v4 + 6);
  *((uchar *)v4 + 7) = *(uchar *)(v5 + 6);
  *((uchar *)v4 + 5) = *((uchar *)v4 + 7);
  *(uchar *)(v2 + 19) = 2;
  result = 0;
  *(uchar *)(v2 + 18) = 0;
  return result;
}

//----- (021D54A4) --------------------------------------------------------
int __fastcall Function_21d54a4(int a1, int a2)
{
  int v2;
  uchar *v3;
  uint *v4;
  uint i;
  int v6;
  char v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint v14;
  uint v15;
  int *v16;
  uint v17;
  uint v18;
  uint v19;
  uint v20;

  v2 = a1;
  v3 = (uchar *)(a2 + 20);
  *(uchar *)(a2 + 30) = 1;
  v9 = a2;
  v13 = Function_21d5e24(a2);
  v12 = Function_2076af4();
  v11 = 0;
  v4 = *(uint **)(v9 + 20);
  Function_21d5ee8(v9, &v20, &v19, &v18, &v17);
  v14 = v18;
  if ( v18 <= v17 )
  {
    v10 = 6 * v18;
    do
    {
      v15 = v20;
      for ( i = v20 + v10; v15 <= v19; ++v15 )
      {
        v16 = (int *)Function_2079c9c(*(uint **)(v2 + 288), 0xFFFFFFFF, i);
        if ( GetBoxPkmnData((int)v16, 0xACu, 0) )
        {
          MI_CpuCopy32(v16, v4, v12);
          Function_2079968(*(uint **)(v2 + 288), 0xFFFFFFFF, i);
          v4 = (uint *)((char *)v4 + v12);
          v6 = (int)&v3[v11++];
          *(uchar *)(v6 + 12) = i;
          if ( i == v13 )
            v3[10] = 0;
        }
        ++i;
      }
      v10 += 6;
      ++v14;
    }
    while ( v14 <= v17 );
  }
  v3[8] = v11;
  v3[9] = v20 + 6 * v18;
  if ( *(uchar *)(v9 + 18) )
    v7 = 4;
  else
    v7 = 8;
  result = v9;
  *(uchar *)(v9 + 19) = v7;
  *(uchar *)(v9 + 18) = 0;
  return result;
}

//----- (021D5594) --------------------------------------------------------
int __fastcall Function_21d5594(int a1, uchar *a2)
{
  uchar *v2;
  int v3;
  int result;

  v2 = a2;
  v3 = (int)(a2 + 8);
  v2 += 20;
  v2[6] = *(uchar *)(v3 + 5);
  v2[4] = v2[6];
  v2[7] = *(uchar *)(v3 + 6);
  result = (uchar)v2[7];
  v2[5] = result;
  return result;
}

//----- (021D55B0) --------------------------------------------------------
int __fastcall Function_21d55b0(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a2 + 8;
  v2 += 20;
  *(uchar *)(v2 + 6) = *(uchar *)(v3 + 5);
  result = *(char *)(v3 + 6);
  *(uchar *)(v2 + 7) = result;
  return result;
}

//----- (021D55C4) --------------------------------------------------------
int __fastcall Function_21d55c4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  void *v6;
  int v7;
  int result;
  int v9;
  uint v10;

  v2 = a1;
  v9 = a2;
  v3 = a2 + 20;
  v4 = a2 + 8;
  v5 = 0;
  if ( Function_21d5e10(a2) )
  {
    if ( *(uchar *)(v3 + 11) )
    {
      CopyPkmnDataToParty(*(uint **)(v2 + 292), *(int **)v3);
    }
    else
    {
      Function_20774c8(*(int **)v3, *(uint **)(v2 + 416));
      CopyPkmnDataToParty(*(uint **)(v2 + 292), *(int **)(v2 + 416));
    }
    v7 = GetNrOfPkmnInParty(*(uint *)(v2 + 292));
    v6 = GetAdrOfPkmnInParty(*(uint **)(v2 + 292), v7 - 1);
  }
  else
  {
    v10 = GetBoxPkmnData(*(uint *)v3, 0x70u, 0);
    Function_2079914(*(uint **)(v2 + 288), 0xFFFFFFFF, *(char *)(v4 + 7), *(uint *)v3);
    v6 = Function_2079c9c(*(uint **)(v2 + 288), 0xFFFFFFFF, *(char *)(v4 + 7));
    if ( GetBoxPkmnData((int)v6, 5u, 0) == 492 && v10 == 1 )
      v5 = 1;
  }
  Function_21d5ba8(v9, v6);
  if ( !Function_21d52f4(v2) && v5 == 1 )
  {
    Function_21d58ac(v9, v6, v2);
    Function_21d6594(*(uint *)(v2 + 276), 6);
  }
  result = v9;
  *(uchar *)(v9 + 19) = 1;
  *(uchar *)(v9 + 18) = 1;
  return result;
}

//----- (021D56AC) --------------------------------------------------------
int __fastcall Function_21d56ac(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int i;
  uint v6;
  uint *v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a1;
  v3 = a2 + 20;
  v9 = a2;
  v11 = Function_21d5f3c(a2);
  v12 = *(uchar *)(v3 + 9);
  v10 = Function_2076af4();
  v4 = 0;
  for ( i = *(uint *)(v9 + 20); v4 < *(uchar *)(v3 + 8); i += v10 )
    Function_2079914(*(uint **)(v2 + 288), 0xFFFFFFFF, v11 + *(char *)(v3 + v4++ + 12) - v12, i);
  v6 = Function_21d5e24(v9);
  v7 = Function_2079c9c(*(uint **)(v2 + 288), 0xFFFFFFFF, v6);
  Function_21d5ba8(v9, v7);
  Function_21d52f4(v2);
  *(uchar *)(v3 + 8) = 0;
  result = v9;
  *(uchar *)(v9 + 19) = 1;
  return result;
}

//----- (021D5734) --------------------------------------------------------
int __fastcall Function_21d5734(uint **a1, int a2)
{
  uint **v2;
  int v3;
  int v4;
  int *v5;
  int v7;

  v7 = a2;
  v2 = a1;
  v3 = a2 + 20;
  v4 = Get_PkmnData_Size();
  v5 = *(int **)(v7 + 20);
  MI_CpuCopy32(v5, (int *)((char *)v5 + v4), v4);
  MI_CpuCopy32(*(int **)(v7 + 8), *(uint **)(v7 + 20), v4);
  if ( Function_21d5e10(v7) )
  {
    if ( *(uchar *)(v3 + 11) )
      MI_CpuCopy32((int *)((char *)v5 + v4), v2[104], v4);
    else
      Function_20774c8((int *)((char *)v5 + v4), v2[104]);
    Function_207a128(v2[73], *(char *)(v7 + 16), v2[104]);
    *(uchar *)(v3 + 11) = 1;
  }
  else
  {
    Function_2079914(v2[72], 0xFFFFFFFF, *(char *)(v7 + 15), (int)v5 + v4);
    *(uchar *)(v3 + 11) = 0;
  }
  return Function_21d5888(v7, *(uint *)v3, v2);
}

//----- (021D57D8) --------------------------------------------------------
int __fastcall Function_21d57d8(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  if ( !Function_20798a0(*(int **)(a1 + 288), a2, *(uint *)(a1 + 20), a4) )
    return 0;
  *(uchar *)(v4 + 19) = 1;
  Function_21d52f4(v4);
  return 1;
}

//----- (021D5800) --------------------------------------------------------
int __fastcall Function_21d5800(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = a1;
  if ( !Function_20798a0(*(int **)(a1 + 288), a2, *(uint *)(a1 + 8), a4) )
    return 0;
  Function_207a080(*(int **)(v4 + 292), *(char *)(v4 + 16));
  Function_21d52f4(v4);
  return 1;
}

//----- (021D5834) --------------------------------------------------------
int __fastcall Function_21d5834(int a1)
{
  int v1;

  v1 = a1;
  ClearPkmnDataStructure1(*(uint **)(a1 + 20));
  *(uchar *)(v1 + 19) = 1;
  return Function_21d52f4(v1);
}

//----- (021D584C) --------------------------------------------------------
int __fastcall Function_21d584c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = a1 + 8;
  if ( Function_21d5e10(a1) )
    Function_207a080(*(int **)(v1 + 292), *(char *)(v2 + 8));
  else
    Function_2079968(*(uint **)(v1 + 288), 0xFFFFFFFF, *(char *)(v2 + 7));
  return Function_21d52f4(v1);
}

//----- (021D5888) --------------------------------------------------------
int __fastcall Function_21d5888(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_21d58ac(a1, a2, a3);
  result = Function_21d5e08(v3);
  if ( result == 4 )
    result = Function_21d59f4(v3, v4, v5);
  return result;
}

//----- (021D58AC) --------------------------------------------------------
int __fastcall Function_21d58ac(int a1, int a2, int a3)
{
  int v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  uchar v12;
  int v13;
  int v14;
  uint v15;
  int v17;

  v3 = a1;
  v4 = (ushort *)a2;
  v5 = a3;
  v6 = a1 + 76;
  v17 = InitEncryptPkmnData_Part1(a2);
  *(uint *)(v3 + 76) = v4;
  *(ushort *)(v6 + 4) = GetBoxPkmnData((int)v4, 5u, 0);
  *(ushort *)(v6 + 6) = GetBoxPkmnData((int)v4, 6u, 0);
  v7 = Function_207a274(*(uint *)(v5 + 284));
  *(ushort *)(v6 + 8) = Function_207a294(v7, *(ushort *)(v6 + 4), v8, v9);
  *(uchar *)(v6 + 15) = GetBoxPkmnData((int)v4, 0xADu, 0);
  v10 = Load_PlPersonal1(*(ushort *)(v6 + 4), 9u);
  v11 = GetBoxPkmnData((int)v4, 8u, 0);
  *(uchar *)(v6 + 10) = Function_2075b9c(v10, *(ushort *)(v6 + 4), v11);
  *(uchar *)(v6 + 11) = GetBoxPkmnData((int)v4, 0xBu, 0);
  *(uchar *)(v6 + 12) = GetBoxPkmnData((int)v4, 0xB1u, 0);
  *(uchar *)(v6 + 13) = GetBoxPkmnData((int)v4, 0xB2u, 0);
  if ( *(uchar *)(v6 + 15) || !GetBoxPkmnData((int)v4, 0xB0u, 0) )
  {
    *(uchar *)(v6 + 14) = -1;
  }
  else
  {
    v12 = GetBoxPkmnData((int)v4, 0, 0);
    *(uchar *)(v6 + 14) = Function_2075dd0(v10, *(ushort *)(v6 + 4), v12);
  }
  GetBoxPkmnData((int)v4, 0x77u, *(ushort **)(v6 + 20));
  if ( *(uchar *)(v6 + 15) )
  {
    Function_2023810(*(ushort **)(v6 + 24), *(uint *)(v6 + 20));
    Function_20237e8(*(uint *)(v6 + 20), v13);
  }
  else
  {
    Function_200b1b8_CallMsgDecrypt(
      *(ushort ***)(v5 + 400),
      *(ushort *)(v6 + 4),
      *(ushort **)(v6 + 24));
  }
  if ( *(ushort *)(v6 + 6) )
    Function_207cfa0(*(ushort **)(v6 + 28), *(ushort *)(v6 + 6), 9u);
  else
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v5 + 396), 0x14u, *(ushort **)(v6 + 28));
  v14 = Function_2075bd4((int)v4);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v5 + 404), v14, *(ushort **)(v6 + 32));
  v15 = GetBoxPkmnData((int)v4, 0xAu, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v5 + 408), v15, *(ushort **)(v6 + 36));
  free_PkmnData(v10);
  return InitEncryptPkmnData_Part1Again(v4, v17);
}

//----- (021D59F4) --------------------------------------------------------
uchar *__fastcall Function_21d59f4(int a1, int *a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  bool v9;
  ushort *v10;
  int v11;
  uchar *result;
  int v13;

  v13 = a1;
  v3 = a2;
  v4 = a3;
  v5 = *(uchar *)(a1 + 164);
  v6 = a1 + 76;
  v7 = a1 + 172;
  v8 = v7 + 48 * v5;
  *(uint *)v8 = a2;
  *(ushort *)(v8 + 4) = *(ushort *)(v6 + 4);
  *(uchar *)(v8 + 6) = *(uchar *)(v6 + 15);
  *(ushort *)(v8 + 8) = *(uchar *)(v6 + 10);
  v9 = *(uchar *)(v7 + 48 * v5 + 6) == 0;
  v10 = *(ushort **)(v8 + 40);
  if ( v9 )
    Function_2023810(v10, *(uint *)(v6 + 20));
  else
    Function_2023810(v10, *(uint *)(v6 + 24));
  Function_2023810(*(ushort **)(v8 + 44), *(uint *)(v6 + 32));
  Function_20774c8(v3, *(uint **)(v4 + 416));
  v11 = InitEncryptPkmnData(*(int **)(v4 + 416));
  *(ushort *)(v8 + 10) = GetPkmnData(*(int **)(v4 + 416), 0xA4u, 0);
  *(ushort *)(v8 + 12) = GetPkmnData(*(int **)(v4 + 416), 0xA5u, 0);
  *(ushort *)(v8 + 14) = GetPkmnData(*(int **)(v4 + 416), 0xA6u, 0);
  *(ushort *)(v8 + 16) = GetPkmnData(*(int **)(v4 + 416), 0xA8u, 0);
  *(ushort *)(v8 + 18) = GetPkmnData(*(int **)(v4 + 416), 0xA9u, 0);
  *(ushort *)(v8 + 20) = GetPkmnData(*(int **)(v4 + 416), 0xA7u, 0);
  *(ushort *)(v8 + 22) = GetPkmnData(*(int **)(v4 + 416), 0x13u, 0);
  *(ushort *)(v8 + 24) = GetPkmnData(*(int **)(v4 + 416), 0x14u, 0);
  *(ushort *)(v8 + 26) = GetPkmnData(*(int **)(v4 + 416), 0x15u, 0);
  *(ushort *)(v8 + 28) = GetPkmnData(*(int **)(v4 + 416), 0x16u, 0);
  *(ushort *)(v8 + 30) = GetPkmnData(*(int **)(v4 + 416), 0x17u, 0);
  *(ushort *)(v8 + 32) = GetPkmnData(*(int **)(v4 + 416), 0x36u, 0);
  *(ushort *)(v8 + 34) = GetPkmnData(*(int **)(v4 + 416), 0x37u, 0);
  *(ushort *)(v8 + 36) = GetPkmnData(*(int **)(v4 + 416), 0x38u, 0);
  *(ushort *)(v8 + 38) = GetPkmnData(*(int **)(v4 + 416), 0x39u, 0);
  *(uchar *)(v8 + 7) = GetPkmnData(*(int **)(v4 + 416), 0x70u, 0);
  InitEncryptPkmnData_Part1And2(*(int **)(v4 + 416), v11);
  result = (uchar *)(v13 + *(uchar *)(v13 + 164) + 166);
  *result = 1;
  return result;
}

//----- (021D5B70) --------------------------------------------------------
uchar *__fastcall Function_21d5b70(int a1)
{
  char v1;
  uchar *result;

  v1 = *(uchar *)(a1 + 164);
  result = (uchar *)(a1 + 164);
  *result = v1 ^ 1;
  return result;
}

//----- (021D5B80) --------------------------------------------------------
uchar *__fastcall Function_21d5b80(uchar *result)
{
  if ( (uchar)++result[165] >= 3u )
  {
    result += 165;
    *result = 0;
  }
  return result;
}

//----- (021D5BA0) --------------------------------------------------------
uint *__fastcall Function_21d5ba0(int a1, int a2)
{
  uint *result;

  result = (uint *)(a1 + 168);
  *result = a2;
  return result;
}

//----- (021D5BA8) --------------------------------------------------------
int __fastcall Function_21d5ba8(int result, int a2)
{
  *(uint *)(result + 76) = a2;
  return result;
}

//----- (021D5BAC) --------------------------------------------------------
int __fastcall Function_21d5bac(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  ushort v6[2];
  int v7;

  v7 = a4;
  v4 = a1;
  LOBYTE(v6[0]) = *(uchar *)(a1 + 150);
  *(uchar *)(a1 + 87) = v6[0];
  SetBoxPkmnData(*(uint *)(a1 + 76), 0xBu, v6, a4);
  result = Function_21d5e10(v4);
  if ( !result )
  {
    result = Function_21d5e38(v4);
    if ( result == 1 )
      result = Function_2024804();
  }
  return result;
}

//----- (021D5BE8) --------------------------------------------------------
int Function_21d5be8()
{
  return Function_21d5bea();
}

//----- (021D5BEA) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (021D5CBC) --------------------------------------------------------
uint __fastcall Function_21d5cbc(int a1)
{
  ushort **v1;

  v1 = (ushort **)(a1 + 64);
  if ( (uchar)++*(uchar *)(a1 + 64) >= 0x12u )
    *(uchar *)v1 = 0;
  return Function_21d4f40(*(uint *)a1, v1);
}

//----- (021D5CE8) --------------------------------------------------------
uint __fastcall Function_21d5ce8(int a1)
{
  ushort **v1;
  char v2;

  v1 = (ushort **)(a1 + 64);
  if ( *(uchar *)(a1 + 64) )
    v2 = *(uchar *)(a1 + 64) - 1;
  else
    v2 = 17;
  *(uchar *)v1 = v2;
  return Function_21d4f40(*(uint *)a1, v1);
}

//----- (021D5D08) --------------------------------------------------------
uint __fastcall Function_21d5d08(int a1, char a2)
{
  *(uchar *)(a1 + 64) = a2;
  return Function_21d4f40(*(uint *)a1, (ushort **)(a1 + 64));
}

//----- (021D5D20) --------------------------------------------------------
uint *__fastcall Function_21d5d20(int a1, int a2)
{
  uint *result;

  result = (uint *)(a1 + 152);
  *result = a2;
  return result;
}

//----- (021D5D28) --------------------------------------------------------
int __fastcall Function_21d5d28(int a1, int a2)
{
  *(ushort *)(a1 + 274) = *(ushort *)(a1 + 82);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a2 + 396), 0x14u, *(ushort **)(a1 + 104));
  return Function_21d5be8();
}

//----- (021D5D54) --------------------------------------------------------
int __fastcall Function_21d5d54(int result)
{
  *(ushort *)(result + 274) = 0;
  return result;
}

//----- (021D5D60) --------------------------------------------------------
int __fastcall Function_21d5d60(int a1)
{
  int v1;

  v1 = *(ushort *)(a1 + 274);
  *(ushort *)(a1 + 274) = 0;
  return Function_21d5be8();
}

//----- (021D5D78) --------------------------------------------------------
int __fastcall Function_21d5d78(int a1)
{
  int v1;

  v1 = *(ushort *)(a1 + 274);
  *(ushort *)(a1 + 274) = *(ushort *)(a1 + 82);
  return Function_21d5be8();
}

//----- (021D5D94) --------------------------------------------------------
uchar *__fastcall Function_21d5d94(int a1, char a2)
{
  uchar *result;

  result = (uchar *)(a1 + 156);
  *result = a2;
  return result;
}

//----- (021D5D9C) --------------------------------------------------------
uchar *__fastcall Function_21d5d9c(int a1, char a2)
{
  uchar *result;

  result = (uchar *)(a1 + 158);
  *result = a2;
  return result;
}

//----- (021D5DA4) --------------------------------------------------------
uchar *__fastcall Function_21d5da4(int a1, char a2)
{
  uchar *result;

  result = (uchar *)(a1 + 157);
  *result = a2;
  return result;
}

//----- (021D5DAC) --------------------------------------------------------
ushort *__fastcall Function_21d5dac(int a1, short a2)
{
  ushort *result;

  result = (ushort *)(a1 + 160);
  *result = a2;
  return result;
}

//----- (021D5DB4) --------------------------------------------------------
ushort *__fastcall Function_21d5db4(int a1, int a2)
{
  ushort *result;
  int v3;

  if ( a2 )
  {
    v3 = *(ushort *)(a1 + 74) ^ (1 << (a2 - 1));
    result = (ushort *)(a1 + 74);
    *result = v3;
  }
  else
  {
    result = (ushort *)(a1 + 74);
    *result = 0;
  }
  return result;
}

//----- (021D5DD8) --------------------------------------------------------
uchar *__fastcall Function_21d5dd8(int a1)
{
  char v1;
  uchar *result;

  v1 = *(uchar *)(a1 + 73);
  result = (uchar *)(a1 + 73);
  *result = v1 ^ 1;
  return result;
}

//----- (021D5DE8) --------------------------------------------------------
int __fastcall Function_21d5de8(int a1)
{
  return *(uint *)(a1 + 396);
}

//----- (021D5DF0) --------------------------------------------------------
int __fastcall Function_21d5df0(int a1)
{
  return *(uint *)(a1 + 412);
}

//----- (021D5DF8) --------------------------------------------------------
uint __fastcall Function_21d5df8(int a1)
{
  return Function_2027b50(*(ushort **)(a1 + 420));
}

//----- (021D5E08) --------------------------------------------------------
int __fastcall Function_21d5e08(int a1)
{
  return *(uchar *)(a1 + 72);
}

//----- (021D5E10) --------------------------------------------------------
int __fastcall Function_21d5e10(int a1)
{
  return *(uchar *)(a1 + 12);
}

//----- (021D5E14) --------------------------------------------------------
int __fastcall Function_21d5e14(int a1)
{
  return *(char *)(a1 + 13);
}

//----- (021D5E1C) --------------------------------------------------------
int __fastcall Function_21d5e1c(int a1)
{
  return *(char *)(a1 + 14);
}

//----- (021D5E24) --------------------------------------------------------
int __fastcall Function_21d5e24(int a1)
{
  return *(char *)(a1 + 15);
}

//----- (021D5E2C) --------------------------------------------------------
int __fastcall Function_21d5e2c(int a1)
{
  return *(char *)(a1 + 16);
}

//----- (021D5E34) --------------------------------------------------------
int __fastcall Function_21d5e34(int a1)
{
  return *(uchar *)(a1 + 18);
}

//----- (021D5E38) --------------------------------------------------------
int __fastcall Function_21d5e38(int a1)
{
  return *(uchar *)(a1 + 19);
}

//----- (021D5E3C) --------------------------------------------------------
int __fastcall Function_21d5e3c(int a1)
{
  int result;

  if ( *(uchar *)(a1 + 19) )
    result = *(uchar *)(a1 + 31);
  else
    result = 0;
  return result;
}

//----- (021D5E4C) --------------------------------------------------------
BOOL __fastcall Function_21d5e4c(int a1)
{
  int v1;
  BOOL result;

  v1 = *(uchar *)(a1 + 19);
  if ( v1 != 2 && v1 != 4 )
    result = *(uchar *)(a1 + 18) != 0;
  else
    result = 1;
  return result;
}

//----- (021D5E68) --------------------------------------------------------
int __fastcall Function_21d5e68(int a1)
{
  return *(uchar *)(a1 + 64);
}

//----- (021D5E70) --------------------------------------------------------
int __fastcall Function_21d5e70(int a1)
{
  return a1 + 76;
}

//----- (021D5E74) --------------------------------------------------------
int __fastcall Function_21d5e74(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( Function_21d5e4c(a1) )
    result = *(ushort *)(v1 + 82);
  else
    result = 0;
  return result;
}

//----- (021D5E8C) --------------------------------------------------------
int __fastcall Function_21d5e8c(int a1)
{
  return a1 + 64;
}

//----- (021D5E90) --------------------------------------------------------
int __fastcall Function_21d5e90(int a1)
{
  return *(uint *)a1;
}

//----- (021D5E94) --------------------------------------------------------
int __fastcall Function_21d5e94(int a1)
{
  return *(uint *)(a1 + 268);
}

//----- (021D5E9C) --------------------------------------------------------
int __fastcall Function_21d5e9c(int a1)
{
  return *(uint *)(a1 + 76);
}

//----- (021D5EA0) --------------------------------------------------------
int __fastcall Function_21d5ea0(int a1)
{
  return *(uchar *)(a1 + 87);
}

//----- (021D5EA8) --------------------------------------------------------
int __fastcall Function_21d5ea8(int a1)
{
  return *(uint *)(a1 + 152);
}

//----- (021D5EB0) --------------------------------------------------------
int __fastcall Function_21d5eb0(int a1)
{
  return *(short *)(a1 + 160);
}

//----- (021D5EB8) --------------------------------------------------------
int __fastcall Function_21d5eb8(int a1)
{
  return *(uchar *)(a1 + 158);
}

//----- (021D5EC0) --------------------------------------------------------
int __fastcall Function_21d5ec0(int a1)
{
  return *(uchar *)(a1 + 157);
}

//----- (021D5EC8) --------------------------------------------------------
int __fastcall Function_21d5ec8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( Function_21d5e08(a1) == 3 )
    result = 1;
  else
    result = *(ushort *)(v1 + 74);
  return result;
}

//----- (021D5EE0) --------------------------------------------------------
int __fastcall Function_21d5ee0(int a1)
{
  return *(uchar *)(a1 + 73);
}

//----- (021D5EE8) --------------------------------------------------------
int __fastcall Function_21d5ee8(int a1, uint *a2, uint *a3, uint *a4, uint *a5)
{
  uchar *v5;
  uint v6;
  uint v7;
  int v8;
  uint v9;
  uint v10;
  int result;

  v5 = (uchar *)(a1 + 20);
  v6 = v5[6];
  v7 = v5[4];
  if ( v7 > v6 )
  {
    *a2 = v6;
    v8 = v5[4];
  }
  else
  {
    *a2 = v7;
    v8 = v5[6];
  }
  *a3 = v8;
  v9 = v5[7];
  v10 = v5[5];
  if ( v10 > v9 )
  {
    *a4 = v9;
    result = v5[5];
  }
  else
  {
    *a4 = v10;
    result = v5[7];
  }
  *a5 = result;
  return result;
}

//----- (021D5F20) --------------------------------------------------------
BOOL __fastcall Function_21d5f20(int a1)
{
  uchar *v1;

  v1 = (uchar *)(a1 + 20);
  return v1[4] == v1[6] && v1[5] == v1[7];
}

//----- (021D5F3C) --------------------------------------------------------
int __fastcall Function_21d5f3c(int a1)
{
  uchar *v1;
  int v2;
  int v3;
  uint v4;
  uint v5;
  uint v6;
  uint v7;

  v1 = (uchar *)(a1 + 20);
  v2 = *(char *)(a1 + 13);
  v3 = *(char *)(a1 + 14);
  v4 = v1[4];
  v5 = v1[6];
  if ( v5 > v4 )
    v2 -= v5 - v4;
  v6 = v1[5];
  v7 = v1[7];
  if ( v7 > v6 )
    v3 -= v7 - v6;
  return v2 + 6 * v3;
}

//----- (021D5F6C) --------------------------------------------------------
int __fastcall Function_21d5f6c(int a1, int a2)
{
  return *(char *)(a1 + 20 + a2 + 12) - *(uchar *)(a1 + 29);
}

//----- (021D5F7C) --------------------------------------------------------
int __fastcall Function_21d5f7c(int a1)
{
  return *(ushort *)(a1 + 274);
}

//----- (021D5F88) --------------------------------------------------------
int __fastcall Function_21d5f88(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_21d5f7c(a1);
  if ( !result )
    result = Function_21d5e74(v1);
  return result;
}

//----- (021D5F9C) --------------------------------------------------------
int __fastcall Function_21d5f9c(int a1)
{
  return *(uchar *)(a1 + 164);
}

//----- (021D5FA4) --------------------------------------------------------
int __fastcall Function_21d5fa4(int a1)
{
  return *(uchar *)(a1 + 165);
}

//----- (021D5FAC) --------------------------------------------------------
int __fastcall Function_21d5fac(int a1, int a2)
{
  return a1 + 172 + 48 * a2;
}

//----- (021D5FB8) --------------------------------------------------------
int __fastcall Function_21d5fb8(int a1, int a2)
{
  return *(uchar *)(a1 + a2 + 166);
}

//----- (021D5FC0) --------------------------------------------------------
int __fastcall Function_21d5fc0(int a1)
{
  return *(uint *)(a1 + 168);
}

//----- (021D5FC8) --------------------------------------------------------
int __fastcall Function_21d5fc8(int a1)
{
  return *(uchar *)(a1 + 91);
}

//----- (021D5FD0) --------------------------------------------------------
uint __fastcall Function_21d5fd0(int a1, uint a2, ushort *a3)
{
  int v3;
  uint v4;
  ushort *v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( Function_21d5e38(a1) == 1 )
  {
    if ( !Function_21d5e10(v3) )
      return GetBoxPkmnData(*(uint *)(v3 + 76), v4, v5);
  }
  else if ( !*(uchar *)(v3 + 31) )
  {
    return GetBoxPkmnData(*(uint *)(v3 + 76), v4, v5);
  }
  return GetPkmnData(*(int **)(v3 + 76), v4, v5);
}

//----- (021D6014) --------------------------------------------------------
uint __fastcall Function_21d6014(int a1, uint a2, ushort *a3)
{
  int v3;
  uint v4;
  ushort *v5;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( Function_21d5e10(a1) )
    result = GetPkmnData(*(int **)(v3 + 8), v4, v5);
  else
    result = GetBoxPkmnData(*(uint *)(v3 + 76), v4, v5);
  return result;
}

//----- (021D603C) --------------------------------------------------------
int __fastcall Function_21d603c(int result, int a2, int a3, char a4, char a5)
{
  *(uint *)(result + 48) = Function_21d6104;
  *(uint *)(result + 28) = 0;
  *(uint *)(result + 12) = a2;
  *(uint *)(result + 16) = a3;
  *(uint *)(result + 20) = a2;
  *(uint *)(result + 24) = a3;
  *(uint *)(result + 4) = a2;
  *(uint *)(result + 8) = a3;
  *(uchar *)(result + 40) = -2;
  *(uchar *)(result + 41) = a2;
  *(uchar *)(result + 42) = a3;
  *(uchar *)(result + 43) = a4;
  *(uchar *)(result + 44) = -2;
  *(uchar *)(result + 45) = a2;
  *(uchar *)(result + 46) = a3;
  *(uchar *)(result + 47) = a5;
  if ( a2 >= 128 )
    *(uint *)(result + 36) = -1;
  else
    *(uint *)(result + 36) = 1;
  return result;
}

//----- (021D60A8) --------------------------------------------------------
int __fastcall Function_21d60a8(int a1)
{
  int v1;
  int v2;
  BOOL v3;
  int v5;
  int v6;

  v1 = a1;
  if ( Function_2022734((uchar *)(a1 + 44)) != 1 || Function_2022734((uchar *)(v1 + 40)) )
  {
    v2 = 0;
    v3 = 0;
  }
  else
  {
    v2 = 1;
    v3 = *(uint *)(v1 + 28) == 0;
    if ( Function_20227a4(&v6, &v5) )
    {
      *(uint *)(v1 + 20) = v6;
      *(uint *)(v1 + 24) = v5;
    }
  }
  *(uint *)(v1 + 28) = v2;
  return (*(int (__fastcall **)(int, int, BOOL))(v1 + 48))(v1, v2, v3);
}

//----- (021D60FC) --------------------------------------------------------
uint *__fastcall Function_21d60fc(uint *result, int a2)
{
  *result = 0;
  result[12] = a2;
  return result;
}

//----- (021D6104) --------------------------------------------------------
int __fastcall Function_21d6104(int a1, int a2, int a3)
{
  uint *v3;
  int v4;

  v3 = (uint *)a1;
  if ( !a2 || !a3 )
    return 0;
  *(uint *)(a1 + 4) = *(uint *)(a1 + 20);
  *(uint *)(a1 + 8) = *(uint *)(a1 + 24);
  v4 = *(uint *)(a1 + 4);
  *(ushort *)(a1 + 32) = Function_21d6164();
  Function_21d60fc(v3, (int)Function_21d6134);
  return 1;
}

//----- (021D6134) --------------------------------------------------------
int __fastcall Function_21d6134(uint *a1, int a2)
{
  if ( a2 )
    return 2;
  Function_21d60fc(a1, (int)Function_21d6104);
  return 3;
}

//----- (021D614C) --------------------------------------------------------
int __fastcall Function_21d614c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = *(uint *)(a1 + 20);
  v3 = *(uint *)(a1 + 24);
  v4 = Function_21d6164();
  return Function_21d617c(v1, *(ushort *)(v1 + 32), v4);
}

//----- (021D6164) --------------------------------------------------------
int __fastcall Function_21d6164(int a1, int a2, int a3)
{
  return FX_Atan2Idx((a3 - *(uint *)(a1 + 16)) << 12, (a2 - *(uint *)(a1 + 12)) << 12);
}

//----- (021D617C) --------------------------------------------------------
int __fastcall Function_21d617c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  short *v5;
  uint v6;

  v3 = a3 - a2;
  if ( v3 >= 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = -1;
    v3 = -v3;
  }
  v5 = &word_21DFE44;
  v6 = 0;
  do
  {
    if ( v3 < (ushort)*v5 )
      break;
    ++v6;
    ++v5;
  }
  while ( v6 < 2 );
  return v6 * v4 * *(uint *)(a1 + 36);
}

//----- (021D61B0) --------------------------------------------------------
int __fastcall Function_21d61b0(uint *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  uint *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  uint *v34;

  v3 = a2;
  v34 = a1;
  v4 = a3;
  v5 = malloc(0xAu, 46004);
  v6 = (uint *)v5;
  if ( !v5 )
    return 0;
  *(uint *)(v5 + 352) = v3;
  *(uint *)(v5 + 348) = Function_2018340(0xAu);
  if ( !v6[87] )
    return 0;
  v9 = LoadFromNARC_8(18, 0xAu, v7, v8);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  REG_DISPCNT = REG_DISPCNT & 0xFFCFFFEF | 0x100010;
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFCFFFEF | 0x10;
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0xAu);
  v6[6] = Function_20095c4(128, (int)(v6 + 7), 10, v10);
  Function_200964c((int)(v6 + 7), 0, 1572864, v11);
  NNS_G2dInitImagePaletteProxy((int)(v6 + 81));
  Function_200716c((int)v9, 0x1Au, 1, 0, 10, (int)(v6 + 81));
  Function_2002bec(0);
  v6[86] = Function_200762c(0xAu, v12, v13, v14);
  v15 = 0;
  v16 = v6;
  do
  {
    ++v15;
    v16[2] = 0;
    ++v16;
  }
  while ( v15 < 4 );
  Function_21d7970(0);
  *v34 = v6;
  v17 = Function_21da270(v6 + 89, v6, v6[88], v6[6], v9) & 1;
  v18 = v17 & Function_21d79f8(v6 + 268, v6, v6[88], v6[87], v6[6]);
  v19 = v18 & Function_21d8b54(v6 + 6000, v6, v6[88], v6[6], v9);
  v20 = v19 & Function_21da814(v6 + 6486, v6, v6[88], v6[6], v9);
  v21 = Function_21d5de8(v4);
  v22 = v20 & Function_21da92c(v6 + 6504, v6, v6[88], v6[87], v6[6], v21, v9);
  v23 = Function_21d5de8(v4);
  v24 = Function_21d5df0(v4);
  v25 = Function_21d5df8(v4);
  v26 = v22 & Function_21db2fc(v6 + 6525, v6, v6[88], v6[87], v6[6], v23, v24, v25, v9);
  v27 = v26 & Function_21db8e4(v6 + 6539, v6, v6[88], v6[87], v6[6], v9);
  v28 = v27 & Function_21dc5f0(v6 + 11403, v6, v6[88], v6[87], v6[6], v9);
  v29 = v28 & Function_21dcf88(v6 + 11497, v6, v6[88], v6[87], v6[6]);
  v30 = v29 & Function_21de3e8(v6 + 11498, v6, v6[88], v6[87], v6[6]);
  v31 = Function_21d5de8(v4);
  v32 = v30 & Function_21dec04(v6 + 11499, v6, v6[88], v6[87], v6[6], v31, v9);
  v6[11500] = v4;
  *v6 = AddTaskToTaskList1((int)Function_21d6474, (int)v6, 2u);
  v6[1] = Function_21d77c8(Function_21d6664, v6, 1);
  Call_FS_CloseFile(v9);
  return v32;
}

//----- (021D6474) --------------------------------------------------------
int *__fastcall Function_21d6474(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *result;

  v2 = a2;
  Function_21d797c();
  G3X_Reset();
  v3 = G3X_ResetMtxStack();
  Function_20a73c0(v3, v4, v5, v6);
  Function_2007768(*(uint *)(v2 + 344));
  result = &GFX_FLUSH;
  GFX_FLUSH = 0;
  return result;
}

//----- (021D64A0) --------------------------------------------------------
int *__fastcall Function_21d64a0(int a1)
{
  int v1;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Call_RemoveTaskFromTaskList(*(int **)v1);
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 4));
  Function_21decac(*(uint *)(v1 + 45996));
  Function_21de440(*(uint *)(v1 + 45992));
  Function_21dd078(*(uint *)(v1 + 45988));
  Function_21dc680(v1 + 45612);
  Function_21dbad0(v1 + 26156);
  Function_21db370(v1 + 26100);
  Function_21da9e0(v1 + 26016);
  Function_21da8d8(v1 + 25944);
  Function_21d8e84(v1 + 24000);
  Function_21d7a74(v1 + 1072);
  Function_21da384(v1 + 356);
  Function_2021964(*(int **)(v1 + 24));
  Function_2019044(*(uint *)(v1 + 348), 3);
  Function_2019044(*(uint *)(v1 + 348), 2);
  Function_2019044(*(uint *)(v1 + 348), 1);
  Function_2019044(*(uint *)(v1 + 348), 4);
  Function_2007b6c(*(uint *)(v1 + 344));
  Function_2002c28(0);
  free(*(uint *)(v1 + 348));
  free(v1);
  return Function_200a878();
}

//----- (021D6594) --------------------------------------------------------
uint *__fastcall Function_21d6594(int a1, uint a2)
{
  uint v2;
  int v3;
  uint v4;
  int v5;
  uint *result;
  int v7;
  int v8;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x34 )
    return (uint *)ErrorHandler();
  v4 = 0;
  v5 = a1;
  while ( 1 )
  {
    result = *(uint **)(v5 + 8);
    if ( !result )
      break;
    ++v4;
    v5 += 4;
    if ( v4 >= 4 )
      return result;
  }
  v8 = dword_21DFF90[2 * v2 + 3];
  v7 = malloc(0xAu, v8 + 20);
  if ( !v7 )
    return (uint *)ErrorHandler();
  *(uint *)v7 = v2;
  *(ushort *)(v7 + 4) = v4;
  *(ushort *)(v7 + 6) = 0;
  *(uint *)(v7 + 12) = v3;
  *(uint *)(v7 + 16) = v7 + v8;
  result = AddTaskToTaskList1(dword_21DFF90[2 * v2 + 2], v7, 1u);
  *(uint *)(v3 + 4 * v4 + 8) = result;
  return result;
}

//----- (021D6600) --------------------------------------------------------
int __fastcall Function_21d6600(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    v5 = *(uint *)(v2 + 8);
    if ( v5 && *(uint *)Function_201ced0(v5) == v3 )
      return 0;
    ++v4;
    v2 += 4;
  }
  while ( v4 < 4 );
  return 1;
}

//----- (021D6628) --------------------------------------------------------
int __fastcall Function_21d6628(int a1)
{
  int v1;

  v1 = 0;
  do
  {
    if ( *(uint *)(a1 + 8) )
      return 0;
    ++v1;
    a1 += 4;
  }
  while ( v1 < 4 );
  return 1;
}

//----- (021D6640) --------------------------------------------------------
uint __fastcall Function_21d6640(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 12);
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 4 * *(ushort *)(a1 + 4) + 8));
  *(uint *)(v2 + 4 * *(ushort *)(v1 + 4) + 8) = 0;
  return free(v1);
}

//----- (021D6664) --------------------------------------------------------
int __fastcall Function_21d6664(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  Function_21daa80(a2 + 26016);
  Function_20219f8(*(uint *)(v2 + 24));
  Function_200a858();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D6694) --------------------------------------------------------
uint __fastcall Function_21d6694(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint result;
  int *v8;

  v4 = a2;
  v5 = *(uint *)(a2 + 12);
  v6 = *(uint *)(v5 + 352);
  result = *(ushort *)(a2 + 6);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_21daac4(v5 + 26016);
      if ( result )
      {
        Function_21daf98(v5 + 26016);
        result = Function_21d6640(v4);
      }
    }
  }
  else
  {
    v8 = LoadFromNARC_8(18, 0xAu, a3, a4);
    Function_21d74b4(v5, v6);
    Function_21d75cc(v5, v6, v8);
    Function_21d7774(v5, v6, v8);
    Call_FS_CloseFile(v8);
    if ( Function_21d5e08(v6) == 4 )
    {
      result = Function_21d6640(v4);
    }
    else
    {
      Function_21daa90(v5 + 26016);
      result = *(ushort *)(v4 + 6) + 1;
      *(ushort *)(v4 + 6) = result;
    }
  }
  return result;
}

//----- (021D671C) --------------------------------------------------------
int __fastcall Function_21d671c(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_200f2ac();
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_2005748(0x60Du);
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 63, 6, 10);
    Function_200f174(0, 1, 1, 0, 8, 1, 10);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6780) --------------------------------------------------------
int __fastcall Function_21d6780(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_200f2ac();
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 63, 6, 10);
    Function_200f174(0, 1, 1, 0, 6, 1, 10);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D67DC) --------------------------------------------------------
int __fastcall Function_21d67dc(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_200f2ac();
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_200f174(0, 0, 0, 0, 6, 1, 10);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6824) --------------------------------------------------------
uint __fastcall Function_21d6824(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;
  int v6;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  v4 = *(uint *)(v3 + 352);
  result = *(ushort *)(a2 + 6);
  switch ( (uchar)result )
  {
    case 0:
      Function_21de9b8(*(uint *)(v3 + 45992));
      ++*(ushort *)(v2 + 6);
      goto LABEL_3;
    case 1:
LABEL_3:
      result = Function_21de9e4(*(uint *)(v3 + 45992));
      if ( !result )
        return result;
      ++*(ushort *)(v2 + 6);
      goto LABEL_5;
    case 2:
LABEL_5:
      v6 = Function_21d77a4(*(uchar *)(v3 + 1072), *(uchar *)(v4 + 64));
      Function_21d7b4c(v3 + 1072, v4 + 64, v6, 1);
      Function_21d7d70(v3 + 1072, v4 + 64, v6);
      Function_2005748(0x5DCu);
      ++*(ushort *)(v2 + 6);
      goto LABEL_6;
    case 3:
LABEL_6:
      result = Function_21d7e1c(v3 + 1072);
      if ( !result )
        return result;
      Function_21de7a0(*(uint *)(v3 + 45992));
      ++*(ushort *)(v2 + 6);
      goto LABEL_8;
    case 4:
LABEL_8:
      result = Function_21de800(*(uint *)(v3 + 45992));
      if ( result )
        result = Function_21d6640(v2);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D68E4) --------------------------------------------------------
uint __fastcall Function_21d68e4(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_21d9074(v4 + 24000);
      if ( result )
      {
        result = Function_21de800(*(uint *)(v4 + 45992));
        if ( result )
          result = Function_21d6640(v2);
      }
    }
  }
  else
  {
    Function_2005748(0x5DCu);
    Function_21d8f60(v4 + 24000);
    Function_21de7a0(*(uint *)(v4 + 45992));
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6940) --------------------------------------------------------
uint __fastcall Function_21d6940(int a1, int a2)
{
  int v2;
  int v3;
  bool v4;
  uint result;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  v4 = Function_21d5e08(*(uint *)(v3 + 352)) == 4;
  result = *(ushort *)(v2 + 6);
  if ( v4 )
  {
    if ( *(ushort *)(v2 + 6) )
    {
      if ( result == 1 )
      {
        result = Function_21dee84(*(uint *)(v3 + 45996));
        if ( result )
          result = Function_21d6640(v2);
      }
    }
    else
    {
      Function_21dee34(*(uint *)(v3 + 45996));
      result = *(ushort *)(v2 + 6) + 1;
      *(ushort *)(v2 + 6) = result;
    }
  }
  else if ( *(ushort *)(v2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_21db220(v3 + 26016);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21daff8(v3 + 26016);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D69BC) --------------------------------------------------------
uint __fastcall Function_21d69bc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  v4 = *(uint *)(v3 + 352);
  if ( Function_21d5e38(*(uint *)(v3 + 352)) == 2 )
  {
    Function_21d9a64(v3 + 24000);
  }
  else
  {
    v5 = Function_21d5e10(v4);
    if ( v5 )
    {
      if ( v5 == 1 )
        Function_21dcc14(v3 + 45612);
    }
    else
    {
      Function_21d8a24(v3 + 1072);
    }
  }
  Function_21db224(v3 + 26016);
  return Function_21d6640(v2);
}

//----- (021D6A1C) --------------------------------------------------------
uint __fastcall Function_21d6a1c(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21db078(*(uint *)(a2 + 12) + 26016);
  return Function_21d6640(v2);
}

//----- (021D6A38) --------------------------------------------------------
uint __fastcall Function_21d6a38(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21d9278(v4 + 24000);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21d9230(v4 + 24000);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6A74) --------------------------------------------------------
uint __fastcall Function_21d6a74(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21d939c(v4 + 24000);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21d9368(v4 + 24000);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6AB0) --------------------------------------------------------
uint __fastcall Function_21d6ab0(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21d9530(v4 + 24000);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21d94b4(v4 + 24000);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6AEC) --------------------------------------------------------
uint __fastcall Function_21d6aec(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
      result = Function_21d6640(v2);
  }
  else
  {
    Function_21d9900(v4 + 24000);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6B1C) --------------------------------------------------------
uint __fastcall Function_21d6b1c(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      Function_21dc834(v4 + 45612);
      result = *(ushort *)(v2 + 6) + 1;
      *(ushort *)(v2 + 6) = result;
    }
    else if ( result == 2 )
    {
      result = Function_21dc95c(v4 + 45612);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21dcac0(v4 + 45612);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6B6C) --------------------------------------------------------
uint __fastcall Function_21d6b6c(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21d995c(v4 + 24000);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21d9938(v4 + 24000);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6BA8) --------------------------------------------------------
int __fastcall Function_21d6ba8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = a2;
  v3 = *(ushort *)(a2 + 6);
  v4 = *(uint *)(v2 + 12);
  result = *(uint *)(v4 + 352);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = Function_21d8898(v4 + 1072);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    v6 = Function_21d5e24(result);
    Function_21d8860(v4 + 1072, v6);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6BF0) --------------------------------------------------------
int __fastcall Function_21d6bf0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = a2;
  v3 = *(ushort *)(a2 + 6);
  v4 = *(uint *)(v2 + 12);
  result = *(uint *)(v4 + 352);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = Function_21dcb20(v4 + 45612);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    v6 = Function_21d5e2c(result);
    Function_21dcafc(v4 + 45612, v6);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6C38) --------------------------------------------------------
uint __fastcall Function_21d6c38(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21dc364(v4 + 26156);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21dc29c(v4 + 26156);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6C74) --------------------------------------------------------
uint __fastcall Function_21d6c74(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21dc43c(v4 + 26156);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21dc3f4(v4 + 26156);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6CB0) --------------------------------------------------------
uint __fastcall Function_21d6cb0(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_21d9b64(v4 + 24000);
      if ( result )
      {
        Function_21db2b0(v4 + 26016);
        result = Function_21d6640(v2);
      }
    }
  }
  else
  {
    Function_21d9b34(v4 + 24000);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6CF8) --------------------------------------------------------
uint __fastcall Function_21d6cf8(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_21d9c04(v4 + 24000);
      if ( result )
      {
        Function_21db2b0(v4 + 26016);
        result = Function_21d6640(v2);
      }
    }
  }
  else
  {
    Function_21d9bd4(v4 + 24000);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6D40) --------------------------------------------------------
uint __fastcall Function_21d6d40(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_21d9ca0(v4 + 24000);
      if ( result )
      {
        Function_21db2b0(v4 + 26016);
        result = Function_21d6640(v2);
      }
    }
  }
  else
  {
    Function_21d9c74(v4 + 24000);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6D88) --------------------------------------------------------
uint __fastcall Function_21d6d88(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  v4 = *(uint *)(v3 + 352);
  v5 = Function_21d5e74(*(uint *)(v3 + 352));
  if ( Function_21d5e38(v4) == 2 )
  {
    Function_21d9ab0(v3 + 24000, v5);
  }
  else
  {
    v6 = Function_21d5e10(v4);
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v7 = Function_21d5e2c(v4);
        Function_21dcbdc(v3 + 45612, v7, v5);
      }
    }
    else
    {
      v8 = Function_21d5e24(v4);
      Function_21d8988(v3 + 1072, v8, v5);
    }
  }
  return Function_21d6640(v2);
}

//----- (021D6DF8) --------------------------------------------------------
uint __fastcall Function_21d6df8(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_21deb60(*(uint *)(v4 + 45992));
      if ( result )
      {
        Function_21d9d28(v4 + 24000);
        result = Function_21d6640(v2);
      }
    }
  }
  else
  {
    Function_21d9d10(v4 + 24000);
    Function_21deb18(*(uint *)(v4 + 45992));
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6E48) --------------------------------------------------------
uint __fastcall Function_21d6e48(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  v4 = Function_21d5e94(*(uint *)(v3 + 352));
  Function_21db448(v3 + 26100, v4);
  return Function_21d6640(v2);
}

//----- (021D6E70) --------------------------------------------------------
uint __fastcall Function_21d6e70(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  v4 = *(uint *)(v3 + 352);
  v5 = Function_21d5e94(*(uint *)(v3 + 352));
  Function_21db448(v3 + 26100, v5);
  Function_21db57c(v3 + 26100, v4 + 116);
  return Function_21d6640(v2);
}

//----- (021D6EA4) --------------------------------------------------------
uint __fastcall Function_21d6ea4(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21db6f0(*(uint *)(a2 + 12) + 26100);
  return Function_21d6640(v2);
}

//----- (021D6EC0) --------------------------------------------------------
uint __fastcall Function_21d6ec0(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21db724(*(uint *)(a2 + 12) + 26100);
  return Function_21d6640(v2);
}

//----- (021D6EDC) --------------------------------------------------------
uint __fastcall Function_21d6edc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  v4 = *(uint *)(v3 + 352);
  Function_2005748(0x5DCu);
  Function_21db748(v3 + 26100, v4 + 116);
  return Function_21d6640(v2);
}

//----- (021D6F0C) --------------------------------------------------------
uint __fastcall Function_21d6f0c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  v4 = *(uint *)(v3 + 352);
  Function_2005748(0x5DDu);
  Function_21db790(v3 + 26100, v4 + 116);
  return Function_21d6640(v2);
}

//----- (021D6F3C) --------------------------------------------------------
uint __fastcall Function_21d6f3c(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21dbb68(v4 + 26156);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21dbb48(v4 + 26156);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6F78) --------------------------------------------------------
uint __fastcall Function_21d6f78(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
      result = Function_21d6640(a2);
  }
  else
  {
    Function_2005748(0x5DDu);
    Function_21dbb70(v4 + 26156);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6FB0) --------------------------------------------------------
uint __fastcall Function_21d6fb0(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21dbba0(v4 + 26156);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21dbb94(v4 + 26156);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D6FEC) --------------------------------------------------------
uint __fastcall Function_21d6fec(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21d8370(v4 + 1072);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21d8350(v4 + 1072);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D7028) --------------------------------------------------------
uint __fastcall Function_21d7028(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;
  int v6;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  v4 = *(uint *)(v3 + 352);
  result = *(ushort *)(a2 + 6);
  switch ( (uchar)result )
  {
    case 0:
      Function_2005748(0x5DDu);
      Function_21d9690(v3 + 24000);
      result = *(ushort *)(v2 + 6) + 1;
      *(ushort *)(v2 + 6) = result;
      break;
    case 1:
      result = Function_21d9704(v3 + 24000);
      if ( result )
      {
        v6 = Function_21d5e10(v4);
        if ( v6 == 3 )
        {
          Function_21da8fc(v3 + 25944, 1);
        }
        else if ( v6 == 4 )
        {
          Function_21da8fc(v3 + 25944, 2);
        }
        *(ushort *)(v2 + 8) = 0;
        result = *(ushort *)(v2 + 6) + 1;
        *(ushort *)(v2 + 6) = result;
      }
      break;
    case 2:
      result = (ushort)++*(ushort *)(a2 + 8);
      if ( result >= 6 )
      {
        Function_21d97fc(v3 + 24000);
        Function_21da8fc(v3 + 25944, 0);
        result = *(ushort *)(v2 + 6) + 1;
        *(ushort *)(v2 + 6) = result;
      }
      break;
    case 3:
      result = Function_21d9858(v3 + 24000);
      if ( result )
        result = Function_21d6640(v2);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D70E8) --------------------------------------------------------
uint __fastcall Function_21d70e8(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_21dc6f8(v4 + 45612);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_2005748(0x633u);
    Function_21d99f4(v4 + 24000);
    Function_21dc6c8(v4 + 45612);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D7138) --------------------------------------------------------
uint __fastcall Function_21d7138(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  switch ( (uchar)result )
  {
    case 0:
      Function_21de9b8(*(uint *)(v4 + 45992));
      ++*(ushort *)(v2 + 6);
      goto LABEL_3;
    case 1:
LABEL_3:
      result = Function_21de9e4(*(uint *)(v4 + 45992));
      if ( !result )
        return result;
      ++*(ushort *)(v2 + 6);
      goto LABEL_5;
    case 2:
LABEL_5:
      Function_2005748(0x634u);
      Function_21dc768(v4 + 45612);
      result = *(ushort *)(v2 + 6) + 1;
      *(ushort *)(v2 + 6) = result;
      break;
    case 3:
      result = Function_21dc788(v4 + 45612);
      if ( result )
      {
        Function_21d9a2c(v4 + 24000);
        result = Function_21d6640(v2);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D71BC) --------------------------------------------------------
uint __fastcall Function_21d71bc(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21dc95c(v4 + 45612);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21dc834(v4 + 45612);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D71F8) --------------------------------------------------------
int __fastcall Function_21d71f8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = *(ushort *)(a2 + 6);
  v4 = *(uint *)(v2 + 12);
  result = *(uint *)(v4 + 352);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = Function_21dca08(v4 + 45612);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else if ( Function_21d5e10(result) == 1 )
  {
    Function_21dc96c(v4 + 45612);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  else
  {
    result = Function_21d6640(v2);
  }
  return result;
}

//----- (021D7248) --------------------------------------------------------
uint __fastcall Function_21d7248(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  Function_21d8938(v3 + 1072);
  Function_21dcba0(v3 + 45612);
  Function_21d9a8c(v3 + 24000);
  return Function_21d6640(v2);
}

//----- (021D7278) --------------------------------------------------------
uint __fastcall Function_21d7278(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  v4 = *(uint *)(v3 + 352);
  result = *(ushort *)(a2 + 6);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_21dd45c(*(uint *)(v3 + 45988));
      if ( result )
      {
        if ( *(uchar *)(v4 + 156) )
        {
          Function_21dd714(*(uint *)(v3 + 45988));
          result = *(ushort *)(v2 + 6) + 1;
          *(ushort *)(v2 + 6) = result;
        }
        else
        {
          result = Function_21d6640(v2);
        }
      }
    }
    else if ( result == 2 )
    {
      result = Function_21dd740(*(uint *)(v3 + 45988));
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21dd378(*(uint *)(v3 + 45988));
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D72E8) --------------------------------------------------------
uint __fastcall Function_21d72e8(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21dd820(*(uint *)(v4 + 45988));
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21dd768(*(uint *)(v4 + 45988));
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D7324) --------------------------------------------------------
uint __fastcall Function_21d7324(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21de2f4(*(uint *)(*(uint *)(a2 + 12) + 45988));
  return Function_21d6640(v2);
}

//----- (021D7340) --------------------------------------------------------
uint __fastcall Function_21d7340(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21d9aec(*(uint *)(a2 + 12) + 24000);
  return Function_21d6640(v2);
}

//----- (021D735C) --------------------------------------------------------
uint __fastcall Function_21d735c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = *(uint *)(a2 + 12);
  Function_21d9b10(v3 + 24000);
  Function_21d8a6c(v3 + 1072);
  return Function_21d6640(v2);
}

//----- (021D7380) --------------------------------------------------------
uint __fastcall Function_21d7380(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21d8b14(*(uint *)(a2 + 12) + 1072);
  return Function_21d6640(v2);
}

//----- (021D7398) --------------------------------------------------------
uint __fastcall Function_21d7398(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21d8a6c(*(uint *)(a2 + 12) + 1072);
  return Function_21d6640(v2);
}

//----- (021D73B0) --------------------------------------------------------
uint __fastcall Function_21d73b0(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21d9278(v4 + 24000);
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21d9230(v4 + 24000);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D73EC) --------------------------------------------------------
uint __fastcall Function_21d73ec(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21deddc(*(uint *)(*(uint *)(a2 + 12) + 45996), 0);
  return Function_21d6640(v2);
}

//----- (021D7408) --------------------------------------------------------
uint __fastcall Function_21d7408(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21deddc(*(uint *)(*(uint *)(a2 + 12) + 45996), 1);
  return Function_21d6640(v2);
}

//----- (021D7424) --------------------------------------------------------
uint __fastcall Function_21d7424(int a1, int a2)
{
  int v2;
  uint result;
  int v4;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  v4 = *(uint *)(a2 + 12);
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_21deea8(*(uint *)(v4 + 45996));
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_21dee88(*(uint *)(v4 + 45996));
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D7460) --------------------------------------------------------
int __fastcall Function_21d7460(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(ushort *)(a2 + 6);
  if ( *(ushort *)(a2 + 6) )
  {
    if ( result == 1 )
    {
      result = Function_200f2ac();
      if ( result )
        result = Function_21d6640(v2);
    }
  }
  else
  {
    Function_2005748(0x60Eu);
    Function_200f174(0, 0, 0, 0, 6, 1, 10);
    result = *(ushort *)(v2 + 6) + 1;
    *(ushort *)(v2 + 6) = result;
  }
  return result;
}

//----- (021D74B4) --------------------------------------------------------
int __fastcall Function_21d74b4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  GX_SetBanks(dword_21DFF70);
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  GX_SetGraphicsMode(1, 0, 1);
  SetGraphicsModes(dword_21DFE48);
  Function_20183c4(*(uint **)(v2 + 348), 1u, dword_21DFF1C, 0);
  Function_20183c4(*(uint **)(v2 + 348), 2u, dword_21DFF00, 0);
  Function_20183c4(*(uint **)(v2 + 348), 3u, dword_21DFEC8, 0);
  if ( Function_21d5e08(v3) == 4 )
  {
    Function_20183c4(*(uint **)(v2 + 348), 4u, dword_21DFEE4, 0);
    Function_20183c4(*(uint **)(v2 + 348), 5u, dword_21DFF54, 0);
    Function_20183c4(*(uint **)(v2 + 348), 6u, dword_21DFE58, 0);
  }
  else
  {
    Function_20183c4(*(uint **)(v2 + 348), 4u, dword_21DFEE4, 0);
    Function_20183c4(*(uint **)(v2 + 348), 5u, dword_21DFEAC, 0);
    Function_20183c4(*(uint **)(v2 + 348), 6u, dword_21DFE90, 0);
  }
  Function_20183c4(*(uint **)(v2 + 348), 7u, dword_21DFE74, 0);
  return Function_21d76fc();
}

//----- (021D75CC) --------------------------------------------------------
uint __fastcall Function_21d75cc(int a1, int a2, int a3)
{
  int *v3;
  int v4;
  int v5;

  v3 = (int *)a1;
  v4 = a3;
  v5 = a2;
  Function_20070e8(a3, 4u, *(uint **)(a1 + 348), 1u, 0, 0, 1, 10);
  Function_2019cb8(v3[87], 1, 0, 0, 0, 0x20u, 0x20u, 0x11u);
  Function_2019448((uint *)v3[87], 1u);
  Function_20070e8(v4, 1u, (uint *)v3[87], 2u, 0, 0, 1, 10);
  Function_2007130(v4, 5u, 0, 0, 224, 10);
  if ( Function_21d5e08(v5) != 4 )
    Function_200710c(v4, 0, (uint *)v3[87], 2u, 0, 0, 1, 10);
  Function_21d7a9c(v3 + 268);
  Function_21d7b4c(v3 + 268, v5 + 64, 0, 1);
  Function_21daadc(v3 + 6504);
  Function_21db3c4(v3 + 6525);
  Function_21dba9c(v3 + 6539);
  Function_21dd114(v3[11497], v4);
  Function_21dece8(v3[11499], v4);
  if ( Function_21d5e10(v5) == 1 )
    Function_21dc6a0(v3 + 11403);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  return GX_DispOn();
}

//----- (021D76FC) --------------------------------------------------------
int Function_21d76fc()
{
  int result;

  Function_20b28cc();
  G3X_InitMtxStack();
  Function_201ff0c(1u, 1);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  G3X_SetClearColor(0, 0, 0x7FFF, 63, 0);
  GFX_FLUSH = 2;
  result = -1073807360;
  GFX_VIEWPORT = -1073807360;
  return result;
}

//----- (021D7774) --------------------------------------------------------
int __fastcall Function_21d7774(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a3;
  Function_21d8c1c(a1 + 24000, a3);
  Function_21da864(v3 + 25944, v4);
  return Function_21de584(*(uint *)(v3 + 45992));
}

//----- (021D77A4) --------------------------------------------------------
int __fastcall Function_21d77a4(uint a1, uint a2)
{
  int v2;
  int v3;
  int result;

  if ( a2 <= a1 )
  {
    v2 = a2 + 18 - a1;
    v3 = a1 - a2;
  }
  else
  {
    v2 = a2 - a1;
    v3 = a1 + 18 - a2;
  }
  if ( v2 < v3 )
    result = 1;
  else
    result = -1;
  return result;
}

//----- (021D77C8) --------------------------------------------------------
uint *__fastcall Function_21d77c8(int a1, int a2, uint a3)
{
  return AddTaskToTaskList2(a1, a2, a3);
}

//----- (021D77D0) --------------------------------------------------------
int __fastcall Function_21d77d0(int a1)
{
  return a1 + 324;
}

//----- (021D77D8) --------------------------------------------------------
int __fastcall Function_21d77d8(int a1)
{
  return a1 + 356;
}

//----- (021D77E0) --------------------------------------------------------
int __fastcall Function_21d77e0(int a1)
{
  return a1 + 1072;
}

//----- (021D77E8) --------------------------------------------------------
int __fastcall Function_21d77e8(int a1)
{
  return a1 + 45612;
}

//----- (021D77F4) --------------------------------------------------------
int __fastcall Function_21d77f4(int a1)
{
  return a1 + 24000;
}

//----- (021D7800) --------------------------------------------------------
int __fastcall Function_21d7800(int a1)
{
  return *(uint *)(a1 + 45992);
}

//----- (021D780C) --------------------------------------------------------
int __fastcall Function_21d780c(int a1)
{
  return a1 + 26156;
}

//----- (021D7818) --------------------------------------------------------
int __fastcall Function_21d7818(int a1)
{
  return *(uint *)(a1 + 344);
}

//----- (021D7820) --------------------------------------------------------
int __fastcall Function_21d7820(int a1)
{
  int result;

  if ( Function_21d5e08(*(uint *)(a1 + 352)) == 4 )
    result = -44;
  else
    result = 0;
  return result;
}

//----- (021D783C) --------------------------------------------------------
int __fastcall Function_21d783c(int result, int a2, int a3, int a4, int a5, char a6)
{
  *(uint *)result = a2;
  *(uint *)(result + 8) = a3;
  *(uint *)(result + 12) = a4;
  *(uint *)(result + 16) = a5;
  *(uchar *)(result + 32) = a6;
  *(uint *)(result + 4) = 0;
  *(uint *)(result + 20) = 0;
  *(uint *)(result + 24) = 0;
  *(uint *)(result + 28) = 0;
  return result;
}

//----- (021D785C) --------------------------------------------------------
int __fastcall Function_21d785c(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v9 = a1;
  v11 = a3 << 12;
  v12 = a4 << 12;
  v13 = 0;
  v10 = a2;
  v14 = a5;
  v15 = a6;
  v16 = 10;
  v6 = OS_DisableInterrupts();
  v7 = Function_2021b90(&v9);
  OS_RestoreInterrupts(v6);
  if ( v7 )
  {
    Function_2021cc8(v7, 1);
    Function_2021ce4(v7, 4096);
  }
  return v7;
}

//----- (021D78AC) --------------------------------------------------------
uint __fastcall Function_21d78ac(int a1, short a2)
{
  int v2;
  short v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = OS_DisableInterrupts();
  Function_2021f58(v2, v3);
  return OS_RestoreInterrupts(v4);
}

//----- (021D78C8) --------------------------------------------------------
int __fastcall Function_21d78c8(ushort *a1, ushort *a2, int a3, int a4, int a5)
{
  ushort *v5;
  ushort *v6;
  int result;
  int v8;
  int v9;
  int v10;

  v5 = a2;
  v6 = a1;
  result = a5;
  v10 = a3 - 1;
  if ( a3 )
  {
    do
    {
      v8 = *v6;
      ++v6;
      *v5 = ((((v8 << 8) & 0x1FFF) + (((a4 << 8) & 0x1FFF) - ((v8 << 8) & 0x1FFF)) / 16 * a5) >> 8) & 0x1F | 32 * ((((v8 >> 5 << 8) & 0x1FFF) + (((a4 >> 5 << 8) & 0x1FFF) - ((v8 >> 5 << 8) & 0x1FFF)) / 16 * a5) >> 8) & 0x3FF | ((ushort)((((v8 >> 10 << 8) & 0x1FFF) + (((a4 >> 10 << 8) & 0x1FFF) - ((v8 >> 10 << 8) & 0x1FFF)) / 16 * a5) >> 8) << 10) & 0x7FFF;
      v9 = v10;
      ++v5;
      --v10;
    }
    while ( v9 );
  }
  return result;
}

//----- (021D7964) --------------------------------------------------------
int __fastcall Function_21d7964(int a1)
{
  return *(uint *)(a1 + 46000);
}

//----- (021D7970) --------------------------------------------------------
int *Function_21d7970()
{
  int *result;

  result = &dword_21E05E0[3];
  dword_21E05E0[3] = 0;
  return result;
}

//----- (021D797C) --------------------------------------------------------
int *Function_21d797c()
{
  int *result;
  uint v1;
  int *v2;

  result = (int *)dword_21E05E0[3];
  if ( dword_21E05E0[3] )
  {
    v1 = 0;
    if ( dword_21E05E0[3] )
    {
      v2 = &dword_21E05E0[4];
      do
      {
        free(v2[2]);
        if ( *v2 )
          ((void (__fastcall *)(int))*v2)(v2[1]);
        ++v1;
        v2 += 3;
      }
      while ( v1 < dword_21E05E0[3] );
    }
    result = &dword_21E05E0[3];
    dword_21E05E0[3] = 0;
  }
  return result;
}

//----- (021D79B8) --------------------------------------------------------
int __fastcall Function_21d79b8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( dword_21E05E0[3] >= 0x20u )
    ErrorHandler();
  v6 = 3 * dword_21E05E0[3];
  dword_21E05E0[v6 + 6] = v3;
  result = dword_21E05E0[3] + 1;
  dword_21E05E0[v6 + 4] = v4;
  ++dword_21E05E0[3];
  dword_21E05E0[v6 + 5] = v5;
  return result;
}

//----- (021D79F8) --------------------------------------------------------
int __fastcall Function_21d79f8(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;

  v4 = a3;
  v5 = (uint *)a1;
  v6 = a2;
  v7 = a4;
  *(uchar *)a1 = *(uchar *)(a3 + 64);
  *(uchar *)(a1 + 1) = 11;
  *(uchar *)(a1 + 2) = 0;
  *(uint *)(a1 + 22620) = Function_21d7820(a2);
  v5[5653] = v5[5655] + 72;
  v5[5654] = v5[5655] + 272;
  v5[5728] = Function_21d77d8(v6);
  Function_21da3cc(v5[5728], v5 + 42, 30);
  Function_21da3cc(v5[5728], v5 + 432, 30);
  v5[5729] = v7;
  v5[5730] = v4;
  v5[5731] = v6;
  return 1;
}

//----- (021D7A74) --------------------------------------------------------
int __fastcall Function_21d7a74(int a1)
{
  int v1;

  v1 = a1;
  Function_21da3f0(*(uint *)(a1 + 22912), a1 + 168, 30);
  return Function_21da3f0(*(uint *)(v1 + 22912), v1 + 1728, 30);
}

//----- (021D7A9C) --------------------------------------------------------
char *__fastcall Function_21d7a9c(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = Function_20192ec(a1[5729], 3);
  v1[3] = v2;
  v3 = ((ushort)v2 - (ushort)v1[5655]) & 0x1FF;
  v1[3] = v3;
  Function_2019184(v1[5729], 3u, 0, v3);
  return Function_2019cb8(v1[5729], 3, 24, 0, 0, 0x40u, 0x20u, 9u);
}

//----- (021D7AF4) --------------------------------------------------------
int __fastcall Function_21d7af4(int a1, int a2, uint *a3, int *a4, uint *a5)
{
  int v5;
  int result;

  if ( a2 )
  {
    *a3 = 420 * (*(uchar *)(a1 + 2) ^ 1);
    *a4 = (*(uchar *)(a1 + 1) + 23 * a2) & 0x3F;
    v5 = *(uchar *)(a1 + 2) ^ 1;
  }
  else
  {
    *a3 = 420 * *(uchar *)(a1 + 2);
    *a4 = *(uchar *)(a1 + 1);
    v5 = *(uchar *)(a1 + 2);
  }
  result = *((ushort *)&dword_21E0138 + v5);
  *a5 = result;
  return result;
}

//----- (021D7B4C) --------------------------------------------------------
int __fastcall Function_21d7b4c(int a1, uchar *a2, int a3, int a4)
{
  uchar *v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = a1;
  Function_21d7af4(a1, a3, &v12, &v11, &v10);
  Function_21d7bc0(v7, v4, v10, v6);
  Function_21d7c58(v7, v4, v12);
  result = Function_21d7d00(v7, v4, v11, v12, v10);
  if ( v6 )
  {
    if ( !v5 )
    {
      v9 = v7 + 168 + 1560 * *(uchar *)(v7 + 2);
      result = Function_21d85c4(v7, *(uint *)(v7 + 22912), *v4);
    }
  }
  return result;
}

//----- (021D7BC0) --------------------------------------------------------
uint __fastcall Function_21d7bc0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint result;
  int v8;
  int v9;
  ushort *v10;
  int v11;
  int v12;

  v4 = a3;
  v5 = a1;
  v6 = a4;
  result = Function_2006f88(18, *((uchar *)sub_21E017A + 3 * *(uchar *)(a2 + 1)), &v12, 10);
  v11 = result;
  if ( result )
  {
    if ( v6 )
    {
      DC_FlushRange(*(uint *)(v12 + 12), 32);
      GX_LoadBGPltt(*(uint *)(v12 + 12), 32 * v4, 0x20u);
    }
    v8 = 0;
    v9 = 0;
    v10 = (ushort *)(v5 + 22624);
    do
    {
      Function_21d78c8(*(ushort **)(v12 + 12), v10, 16, 0x7FFF, v9);
      ++v8;
      v9 += 2;
      v10 += 16;
    }
    while ( v8 < 8 );
    Function_21d78c8(*(ushort **)(v12 + 12), (ushort *)(v5 + 22624 + 32 * v8), 16, 0x7FFF, 16);
    DC_FlushRange(v5 + 22624, 288);
    result = free(v11);
  }
  return result;
}

//----- (021D7C58) --------------------------------------------------------
uint *__fastcall Function_21d7c58(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  result = Function_2006fe8_LoadFromNARC_UncompressLZ8(
             18,
             *((uchar *)sub_21E0178 + 3 * *(uchar *)(a2 + 1)),
             1,
             10,
             1);
  v11 = (int)result;
  if ( result )
  {
    if ( Function_20a7164((int)result, &v12) )
    {
      v8 = Function_201a778(0xAu, 1);
      v9 = v8;
      if ( v8 )
      {
        *(uint *)v8 = *(uint *)(v6 + 22916);
        *(uchar *)(v8 + 7) = 21;
        *(uchar *)(v8 + 8) = 4;
        *(uint *)(v8 + 12) = *(uint *)(v12 + 20);
        Function_2002d7c(0, *(uint *)(v5 + 4), 0);
        v10 = *(uint *)(v5 + 4);
        Function_201d78c(v9, 0);
        free(v9);
      }
      Function_201958c(*(uint **)(v6 + 22916), 3u, *(int **)(v12 + 20), *(uint *)(v12 + 16), v4);
    }
    result = (uint *)free(v11);
  }
  return result;
}

//----- (021D7D00) --------------------------------------------------------
uint *__fastcall Function_21d7d00(int a1, int a2)
{
  int v2;
  uint *result;
  int v4;
  int *v5;
  int v6;
  int v7;

  v2 = a1;
  result = Function_2006fe8_LoadFromNARC_UncompressLZ8(
             18,
             *((uchar *)sub_21E0178 + 3 * *(uchar *)(a2 + 1)),
             1,
             10,
             1);
  v6 = (int)result;
  if ( result )
  {
    Function_20a7248((int)result, &v7);
    v4 = Function_2019fe4(*(uint *)(v2 + 22916), 3);
    v5 = (int *)v4;
    if ( v4 )
      Function_21d8764(v4, v7 + 12);
    free(v6);
    result = (uint *)Function_2019460(*(uint **)(v2 + 22916), 3u, v5, 4096, 0);
  }
  return result;
}

//----- (021D7D70) --------------------------------------------------------
uint *__fastcall Function_21d7d70(int a1, uchar *a2, int a3)
{
  int v3;
  uchar *v4;
  int v5;
  int v6;
  int v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (Function_20192ec(*(uint *)(a1 + 22916), 3) << 12) & 0x1FFFFF;
  *(uint *)(v3 + 8) = v6;
  v7 = v6 + 753664 * v5;
  *(uint *)(v3 + 20) = v7;
  *(uint *)(v3 + 16) = s32_div_f(v7 - *(uint *)(v3 + 8), 30);
  *(uint *)(v3 + 20) = (*(uint *)(v3 + 20) >> 12) & 0x1FF;
  *(uint *)(v3 + 4) = 30;
  *(uchar *)(v3 + 3) = *(uchar *)(v3 + 2);
  *(uchar *)(v3 + 1) += 23 * v5;
  *(uchar *)(v3 + 1) &= 0x3Fu;
  *(uchar *)(v3 + 2) ^= 1u;
  Function_21d813c(v3, *v4);
  Function_21d7f14(v3, *(uint *)(v3 + 16), 184 * v5);
  *(uint *)(v3 + 48) = *v4;
  *(uint *)(v3 + 52) = *(uchar *)(v3 + 2);
  *(uint *)(v3 + 152) = 1;
  *(uint *)(v3 + 156) = 0;
  AddTaskToTaskList1((int)Function_21d7e24, v3, 0);
  return Function_21d77c8((int)Function_21d7e6c, v3, 1u);
}

//----- (021D7E1C) --------------------------------------------------------
int __fastcall Function_21d7e1c(int a1)
{
  return *(uint *)(a1 + 156);
}

//----- (021D7E24) --------------------------------------------------------
int __fastcall Function_21d7e24(int *a1, int a2)
{
  int v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  if ( *(uint *)(a2 + 4) )
  {
    result = *(uint *)(a2 + 152);
    if ( result == 2 )
    {
      Function_21d7f9c(a2, *(uint *)(a2 + 16));
      result = 0;
      *(uint *)(v2 + 152) = 0;
    }
  }
  else
  {
    *(uint *)(a2 + 12) = *(uint *)(a2 + 20);
    *(uchar *)a2 = Function_21d5e68(*(uint *)(a2 + 22920));
    Call_RemoveTaskFromTaskList(v3);
    result = 1;
    *(uint *)(v2 + 156) = 1;
  }
  return result;
}

//----- (021D7E6C) --------------------------------------------------------
int __fastcall Function_21d7e6c(int *a1, int a2)
{
  uint *v2;
  int *v3;
  int v4;
  int result;

  v2 = (uint *)a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 3) ^ 1;
  if ( *(uint *)(a2 + 4) )
  {
    result = a2 + 152;
    if ( *(uint *)(a2 + 152) < 2u )
    {
      Function_21d865c(a2, a2 + 168 + 1560 * *(uchar *)(a2 + 3));
      Function_21d86b4(v2, &v2[390 * v4 + 42], v2[38]);
      ++v2[38];
      v2[3] = (v2[2] >> 12) & 0x1FF;
      v2[2] += v2[4];
      Function_2019184(v2[5729], 3u, 0, v2[3]);
      result = v2[1] - 1;
      v2[1] = result;
    }
  }
  else
  {
    Function_2019184(*(uint *)(a2 + 22916), 3u, 0, *(uint *)(a2 + 20));
    Function_21d870c(v2, &v2[390 * v4 + 42]);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (021D7F14) --------------------------------------------------------
int __fastcall Function_21d7f14(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;

  v3 = a1;
  v4 = 0;
  v11 = a2;
  v12 = a3;
  v5 = 0;
  v6 = a1;
  v13 = (int)(a1 + 42);
  do
  {
    v7 = (v3[5655] + 112 + v5) << 12;
    v6[26] = v7;
    v6[32] = v7 - v11;
    v8 = (v12 + v3[5655] + 112 + v5) << 12;
    v6[14] = v8;
    v6[20] = v8 - v11;
    v9 = (v8 - v11) >> 12;
    result = v3[5653];
    if ( v9 > result )
    {
      result = v3[5654];
      if ( v9 < result )
        result = Function_21d803c(v3, v13 + 1560 * (*((uchar *)v3 + 3) ^ 1));
    }
    ++v4;
    v5 += 24;
    ++v6;
  }
  while ( v4 < 6 );
  return result;
}

//----- (021D7F9C) --------------------------------------------------------
int __fastcall Function_21d7f9c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;
  int v14;
  int v15;

  v2 = a1;
  v3 = a2;
  v4 = *(uchar *)(a1 + 3);
  v13 = a1 + 168;
  v14 = 1560 * v4;
  v5 = 0;
  v6 = (uint *)a1;
  v15 = 1560 * (v4 ^ 1);
  do
  {
    v7 = v6[32] >> 12;
    if ( v7 <= *(uint *)(v2 + 22612) || v7 >= *(uint *)(v2 + 22616) )
      Function_21d8114(v2, v13 + v14, v5);
    v8 = v6[32] - v3;
    v6[26] = v8;
    v6[32] = v8 - v3;
    v9 = v6[20] - v3;
    v6[14] = v9;
    v10 = v9 - v3;
    v6[20] = v10;
    v11 = v10 >> 12;
    result = *(uint *)(v2 + 22612);
    if ( v11 > result )
    {
      result = *(uint *)(v2 + 22616);
      if ( v11 < result )
        result = Function_21d803c(v2, v13 + v15);
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 6 );
  return result;
}

//----- (021D803C) --------------------------------------------------------
int __fastcall Function_21d803c(int a1, int a2, int a3, uint a4)
{
  int v4;
  uint v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int result;
  uint *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint *v16;
  uint *v17;

  v4 = a2;
  v11 = (uint *)a1;
  v12 = a3;
  v5 = a4;
  v16 = (uint *)Function_21d5e90(*(uint *)(a1 + 22920));
  v6 = 40;
  v14 = 480 * v11[13] + 88 + 16 * v5;
  v7 = (uint *)(v4 + 52 * v5);
  v15 = 0;
  v13 = (int)&v11[160 * v5 + 822];
  v8 = (int)v11 + 2 * v5;
  do
  {
    if ( !*v7 )
    {
      v17 = Function_2079c9c(v16, v11[12], v5);
      if ( GetBoxPkmnData((int)v17, 0xACu, 0) )
      {
        v9 = Function_21d85b4(v5);
        Function_21da548(
          v11[5728],
          v17,
          *(ushort *)(v8 + 22548),
          *(ushort *)(v8 + 22488),
          v13,
          v12,
          v6,
          2,
          v9,
          v14,
          v7);
      }
    }
    v14 += 96;
    v7 += 78;
    v13 += 3840;
    v8 += 12;
    result = v15 + 1;
    v5 += 6;
    v6 += 24;
    v15 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (021D8114) --------------------------------------------------------
int __fastcall Function_21d8114(int a1, int a2, int a3)
{
  int v3;
  int *v4;
  int result;

  v3 = 0;
  v4 = (int *)(a2 + 52 * a3);
  do
  {
    result = *v4;
    if ( *v4 )
    {
      result = Function_2021bd4(result);
      *v4 = 0;
    }
    ++v3;
    v4 += 78;
  }
  while ( v3 < 5 );
  return result;
}

//----- (021D813C) --------------------------------------------------------
int __fastcall Function_21d813c(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  uint *v5;
  int v6;
  uint v7;
  int result;
  int v9;
  uint v10;
  uint *v11;

  v10 = a2;
  v9 = a1;
  v2 = a1;
  v11 = (uint *)Function_21d5e90(*(uint *)(a1 + 22920));
  v3 = 0;
  v4 = v2 + 3288;
  do
  {
    v5 = Function_2079c9c(v11, v10, v3);
    v6 = (int)v5;
    v7 = GetBoxPkmnData((int)v5, 5u, 0);
    if ( v7 )
    {
      *(ushort *)(v2 + 22548) = v7;
      *(ushort *)(v2 + 22488) = Function_2079d40(v6);
      Function_21da744(*(uint *)(v9 + 22912), v4, *(ushort *)(v2 + 22488), 640);
    }
    result = 640;
    ++v3;
    v2 += 2;
    v4 += 640;
  }
  while ( v3 < 0x1E );
  return result;
}

//----- (021D81B8) --------------------------------------------------------
int __fastcall Function_21d81b8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  short v9;
  int v10;

  v4 = a1;
  v5 = a2;
  *(uchar *)(a1 + 163) = 0;
  v6 = a3;
  v10 = a4;
  result = malloc(0xAu, 16);
  v8 = result;
  if ( result )
  {
    *(uint *)result = v4;
    *(ushort *)(result + 4) = v5;
    *(ushort *)(result + 6) = v6;
    *(uint *)(result + 12) = v10;
    *(ushort *)(result + 10) = 2;
    if ( v6 <= v5 )
      v9 = -1;
    else
      v9 = 1;
    *(ushort *)(v8 + 8) = v9;
    if ( Function_21d77c8((int)Function_21d8210, v8, 0) )
    {
      result = 1;
      *(uchar *)(v4 + 163) = 1;
    }
    else
    {
      result = free(v8);
    }
  }
  return result;
}

//----- (021D8210) --------------------------------------------------------
int __fastcall Function_21d8210(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;
  int v5;

  v2 = a1;
  v3 = a2;
  if ( *(ushort *)(a2 + 10) )
  {
    result = *(short *)(a2 + 10) - 1;
    *(ushort *)(a2 + 10) = result;
  }
  else
  {
    v5 = *(short *)(a2 + 4);
    if ( v5 == *(short *)(a2 + 6) )
    {
      Function_21d79b8(a2, (int)Function_21d826c, *(uint *)a2);
      result = Call_RemoveTaskFromTaskList(v2);
    }
    else
    {
      *(ushort *)(a2 + 4) = v5 + *(ushort *)(a2 + 8);
      GX_LoadBGPltt(*(uint *)a2 + 22624 + 32 * *(short *)(a2 + 4), *(uint *)(a2 + 12), 0x20u);
      result = 2;
      *(ushort *)(v3 + 10) = 2;
    }
  }
  return result;
}

//----- (021D826C) --------------------------------------------------------
uchar *__fastcall Function_21d826c(int a1)
{
  uchar *result;

  result = (uchar *)(a1 + 163);
  *result = 0;
  return result;
}

//----- (021D8274) --------------------------------------------------------
int *__fastcall Function_21d8274(int *result, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  if ( dword_21E0760[7] )
  {
    if ( dword_21E0760[7] == 1 )
    {
      Function_21d7d00(a2, 0);
      Function_21d7c58(v2, 0, dword_21E0760[6], v3);
      result = &dword_21E0760[4];
      ++dword_21E0760[7];
    }
    else if ( dword_21E0760[7] == 2 )
    {
      *(uchar *)(a2 + 163) = 0;
      dword_21E0760[7] = 0;
      result = (int *)Call_RemoveTaskFromTaskList(result);
    }
  }
  else
  {
    Function_21d7af4(a2, 0, &dword_21E0760[6], &dword_21E0760[4], &dword_21E0760[5]);
    dword_21E05C0 = Function_21d5e8c(*(uint *)(v2 + 22920));
    Function_21d7bc0(v2, 0, dword_21E0760[5], 0);
    result = &dword_21E0760[4];
    ++dword_21E0760[7];
  }
  return result;
}

//----- (021D8318) --------------------------------------------------------
int *__fastcall Function_21d8318(int a1)
{
  bool *v1;
  int *result;

  v1 = (bool *)(a1 + 163);
  *v1 = AddTaskToTaskList3((int)Function_21d8274, a1, 0) != 0;
  result = (int *)*v1;
  if ( *v1 )
  {
    result = &dword_21E0760[4];
    dword_21E0760[7] = 0;
  }
  return result;
}

//----- (021D8350) --------------------------------------------------------
int __fastcall Function_21d8350(int a1)
{
  *(uchar *)(a1 + 162) = 0;
  return Function_21d81b8(a1, 0, 8, 32 * *((ushort *)&dword_21E0138 + *(uchar *)(a1 + 2)));
}

//----- (021D8370) --------------------------------------------------------
int __fastcall Function_21d8370(uchar *a1)
{
  uchar *v1;
  int result;

  v1 = a1;
  switch ( a1[162] )
  {
    case 0u:
      if ( !a1[163] )
        ++a1[162];
      goto LABEL_10;
    case 1u:
      Function_21d8318((int)a1);
      ++v1[162];
      goto LABEL_10;
    case 2u:
      if ( !a1[163] )
        ++a1[162];
      goto LABEL_10;
    case 3u:
      Function_21d81b8((int)a1, 8, 0, 32 * *((ushort *)&dword_21E0138 + a1[2]));
      ++v1[162];
      goto LABEL_10;
    case 4u:
      if ( a1[163] )
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

//----- (021D8408) --------------------------------------------------------
int __fastcall Function_21d8408(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a3;
  v6 = 52 * a2;
  v7 = a4;
  Function_21da418(a1 + 168 + 1560 * *(uchar *)(a1 + 2) + 52 * a2, a4, 1);
  Function_21da754(*(uint *)(v4 + 22912), v7, v5);
  return Function_21da3cc(*(uint *)(v4 + 22912), v4 + 168 + 1560 * *(uchar *)(v4 + 2) + v6, 1);
}

//----- (021D845C) --------------------------------------------------------
int __fastcall Function_21d845c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;

  v3 = a1;
  v4 = a2;
  v5 = *(uchar *)(a1 + 2);
  v6 = 52 * a2;
  v7 = a1 + 168 + 1560 * v5;
  Function_21da418(a3, v7 + 52 * a2, 1);
  Function_21da7f4(*(uint *)(v3 + 22912), v7 + v6, 0);
  Function_21da754(*(uint *)(v3 + 22912), v7 + v6, 480 * v5 + 88 + 16 * v4);
  v8 = Function_21d85b4(v4);
  Function_21d78ac(*(uint *)(v7 + v6), v8);
  return Function_21d89f4(v3, v4);
}

//----- (021D84C8) --------------------------------------------------------
int __fastcall Function_21d84c8(int a1, int a2)
{
  return a1 + 168 + 1560 * *(uchar *)(a1 + 2) + 52 * a2;
}

//----- (021D84E0) --------------------------------------------------------
int __fastcall Function_21d84e0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  int result;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int v13;

  v1 = a1;
  v2 = 0;
  v11 = Function_207999c(**(uint **)(a1 + 22920));
  v3 = 0;
  v13 = 0;
  do
  {
    v12 = Function_2079c9c(**(uint ***)(v1 + 22920), v11, v2);
    if ( GetBoxPkmnData((int)v12, 0xACu, 0) )
    {
      v10 = 1560 * *(uchar *)(v1 + 2);
      v9 = *(uchar *)(v1 + 2);
      if ( !*(uint *)(v3 + v1 + v10 + 168) )
      {
        v4 = Function_21d85b4(v2);
        s32_div_f(v2, 6);
        v6 = v5;
        v7 = s32_div_f(v2, 6);
        Function_21da428(
          *(uint *)(v1 + 22912),
          v12,
          *(uint *)(v1 + 22620) + 112 + 24 * v6,
          24 * v7 + 40,
          2,
          v4,
          480 * v9 + 88 + v13,
          v1 + 168 + v10 + v3);
      }
    }
    ++v2;
    result = v13 + 16;
    v3 += 52;
    v13 += 16;
  }
  while ( v2 < 30 );
  return result;
}

//----- (021D85B4) --------------------------------------------------------
int __fastcall Function_21d85b4(int a1)
{
  return *((ushort *)dword_21E013C + a1) + 11;
}

//----- (021D85C4) --------------------------------------------------------
uint __fastcall Function_21d85c4(int a1, int a2, uint a3, int a4, int a5, int a6)
{
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint result;
  int v12;
  int v13;
  uint v14;
  int v15;
  uint v16;
  uint v17;
  uint *v18;

  v12 = a1;
  v15 = 40;
  v6 = 0;
  v7 = a6;
  v13 = a2;
  v14 = a3;
  v8 = 480 * a4 + 88;
  v16 = 0;
  do
  {
    v17 = 0;
    v9 = 0;
    do
    {
      v18 = Function_2079c9c(**(uint ***)(v13 + 64), v14, v6);
      if ( GetBoxPkmnData((int)v18, 5u, 0) )
      {
        v10 = Function_21d85b4(v6);
        Function_21da428(v13, v18, a5 + *(uint *)(v12 + 22620) + 112 + v9, v15, 2, v10, v8, v7);
      }
      v7 += 52;
      ++v6;
      v8 += 16;
      v9 += 24;
      ++v17;
    }
    while ( v17 < 6 );
    v15 += 24;
    result = v16 + 1;
    v16 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (021D865C) --------------------------------------------------------
int __fastcall Function_21d865c(int a1, uint **a2, int a3, int a4)
{
  uint **v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v10 = a1;
  v11 = 0;
  v4 = a2;
  v12 = 24 * a3;
  do
  {
    v5 = 0;
    v6 = v10 + v12;
    do
    {
      if ( *v4 )
      {
        Function_2021d28();
        v8 = v7[1];
        v13 = *v7;
        v14 = v8;
        v15 = v7[2];
        v13 = *(uint *)(v6 + 104);
        Function_2021c50(*v4, &v13);
      }
      ++v5;
      v4 += 13;
      v6 += 4;
    }
    while ( v5 < 6 );
    result = v11 + 1;
    v11 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (021D86B4) --------------------------------------------------------
int __fastcall Function_21d86b4(int a1, uint **a2, int a3, int a4)
{
  uint **v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v10 = a1;
  v11 = 0;
  v4 = a2;
  v12 = 24 * a3;
  do
  {
    v5 = 0;
    v6 = v10 + v12;
    do
    {
      if ( *v4 )
      {
        Function_2021d28();
        v8 = v7[1];
        v13 = *v7;
        v14 = v8;
        v15 = v7[2];
        v13 = *(uint *)(v6 + 56);
        Function_2021c50(*v4, &v13);
      }
      ++v5;
      v4 += 13;
      v6 += 4;
    }
    while ( v5 < 6 );
    result = v11 + 1;
    v11 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (021D870C) --------------------------------------------------------
int __fastcall Function_21d870c(int a1, uint **a2)
{
  int v2;
  uint **v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a1;
  v8 = 0;
  v11 = 0;
  v3 = a2;
  v7 = 40;
  do
  {
    v4 = 0;
    v10 = v7 << 12;
    v5 = 0;
    do
    {
      v9 = (*(uint *)(v2 + 22620) + 112 + v5) << 12;
      if ( *v3 )
        Function_2021c50(*v3, &v9);
      ++v4;
      v3 += 13;
      v5 += 24;
    }
    while ( v4 < 6 );
    v7 += 24;
    result = v8 + 1;
    v8 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (021D8764) --------------------------------------------------------
uint __fastcall Function_21d8764(int a1, int a2, uint a3, int a4, int a5)
{
  int v5;
  uint v6;
  int v7;
  uint v8;
  int v9;
  ushort *v10;
  int v11;
  uint v12;
  uint result;
  ushort *v14;
  uint v15;
  int v16;
  int v17;
  int v18;

  v16 = a1;
  v5 = a4;
  v17 = a2;
  v18 = a3;
  if ( a3 >= 0x20 )
    v16 = a1 + 2048;
  v6 = 0;
  v7 = (a5 << 12) | a4;
  do
  {
    v8 = 0;
    v9 = 0;
    v10 = (ushort *)(v16 + (2 * v18 & 0x3F));
    do
    {
      ++v8;
      v11 = *(ushort *)(v17 + 2 * v6 + 2 * v9) & 0xC00 | ((*(ushort *)(v17 + 2 * v6 + 2 * v9) & 0x3FF) + v5);
      v9 += 21;
      *v10 = ((ushort)a5 << 12) | v11;
      v10 += 32;
    }
    while ( v8 < 0x14 );
    v12 = 0;
    do
    {
      ++v12;
      *v10 = v7;
      v10 += 32;
    }
    while ( v12 < 4 );
    v18 = (v18 + 1) & 0x3F;
    if ( !v18 )
      v16 -= 2048;
    if ( v18 == 32 )
      v16 += 2048;
    ++v6;
  }
  while ( v6 < 0x15 );
  result = 0;
  do
  {
    v14 = (ushort *)(v16 + (2 * v18 & 0x3F));
    v15 = 0;
    do
    {
      ++v15;
      *v14 = v7;
      v14 += 32;
    }
    while ( v15 < 0x18 );
    v18 = (v18 + 1) & 0x3F;
    if ( !v18 )
      v16 -= 2048;
    if ( v18 == 32 )
      v16 += 2048;
    ++result;
  }
  while ( result < 2 );
  return result;
}

//----- (021D8860) --------------------------------------------------------
int __fastcall Function_21d8860(int a1, int a2)
{
  *(ushort *)(a1 + 160) = a2;
  *(uchar *)(a1 + 164) = 0;
  return Function_21da7b8(*(uint *)(a1 + 22912), a1 + 168 + 1560 * *(uchar *)(a1 + 2) + 52 * a2, 1);
}

//----- (021D8898) --------------------------------------------------------
int __fastcall Function_21d8898(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = a1 + 168 + 1560 * *(uchar *)(a1 + 2);
  v3 = 52 * *(ushort *)(a1 + 160);
  v4 = *(uchar *)(a1 + 164);
  if ( v4 )
  {
    if ( v4 == 1 && Function_21da7e0(*(uint *)(v1 + 22912), v2 + v3) )
      return 1;
  }
  else if ( Function_21da7e0(*(uint *)(v1 + 22912), v2 + v3) )
  {
    v5 = Function_21d7964(*(uint *)(v1 + 22924));
    if ( Function_21d3b18(v5) )
    {
      if ( Function_21d3b20(v5) )
      {
        Function_21da3f0(*(uint *)(v1 + 22912), v2 + v3, 1);
        return 1;
      }
      Function_21da7b8(*(uint *)(v1 + 22912), v2 + v3, 2);
      ++*(uchar *)(v1 + 164);
    }
  }
  return 0;
}

//----- (021D8938) --------------------------------------------------------
int __fastcall Function_21d8938(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v1 = a1;
  v2 = 0;
  v6 = Function_21d5ec8(*(uint *)(a1 + 22920));
  v3 = 0;
  do
  {
    v4 = 1560 * *(uchar *)(v1 + 2);
    result = *(uint *)(v3 + v1 + v4 + 168);
    if ( result )
      result = Function_21da63c(*(uint *)(v1 + 22912), v1 + 168 + v4 + v3, v6);
    ++v2;
    v3 += 52;
  }
  while ( v2 < 30 );
  return result;
}

//----- (021D8988) --------------------------------------------------------
int __fastcall Function_21d8988(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = a1;
  v3 = 52 * a2;
  v4 = a1 + 168 + 1560 * *(uchar *)(a1 + 2);
  result = *(uint *)(v4 + v3);
  if ( result )
  {
    Function_21da690(*(uint *)(v2 + 22912), v4 + v3);
    v6 = Function_21d5ec8(*(uint *)(v2 + 22920));
    Function_21da63c(*(uint *)(v2 + 22912), v2 + 168 + 1560 * *(uchar *)(v2 + 2) + v3, v6);
    result = Function_21da694(*(uint *)(v2 + 22912), v2 + 168 + 1560 * *(uchar *)(v2 + 2) + v3, 1);
  }
  return result;
}

//----- (021D89F4) --------------------------------------------------------
int __fastcall Function_21d89f4(int result, int a2)
{
  int v2;

  v2 = result + 168 + 1560 * *(uchar *)(result + 2);
  if ( *(uint *)(v2 + 52 * a2) )
    result = Function_21da694(*(uint *)(result + 22912), v2 + 52 * a2, 1);
  return result;
}

//----- (021D8A24) --------------------------------------------------------
int __fastcall Function_21d8a24(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = Function_21d5e24(*(uint *)(a1 + 22920));
  v3 = Function_21d5ea0(*(uint *)(v1 + 22920));
  v4 = v1 + 168 + 1560 * *(uchar *)(v1 + 2);
  result = *(uint *)(v4 + 52 * v2);
  if ( result )
    result = Function_21da68c(*(uint *)(v1 + 22912), v4 + 52 * v2, v3);
  return result;
}

//----- (021D8A6C) --------------------------------------------------------
uint __fastcall Function_21d8a6c(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  uint result;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = a1;
  Function_21d5ee8(*(uint *)(a1 + 22920), (uint *)&v11, &v10, (uint *)&v9, &v8);
  v2 = 0;
  v6 = 0;
  do
  {
    v3 = 0;
    v7 = v1 + 168;
    do
    {
      v4 = 1560 * *(uchar *)(v1 + 2);
      if ( *(uint *)(v2 + v1 + v4 + 168) )
      {
        if ( v6 - v9 <= v8 - v9 && v3 - v11 <= v10 - v11 )
          Function_21da7f4(*(uint *)(v1 + 22912), v7 + v4 + v2, 1);
        else
          Function_21da7f4(*(uint *)(v1 + 22912), v7 + v4 + v2, 0);
      }
      ++v3;
      v2 += 52;
    }
    while ( v3 < 6 );
    result = v6 + 1;
    v6 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (021D8B14) --------------------------------------------------------
int __fastcall Function_21d8b14(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = a1 + 168;
  do
  {
    v5 = 1560 * *(uchar *)(v1 + 2);
    result = *(uint *)(v3 + v1 + v5 + 168);
    if ( result )
      result = Function_21da7f4(*(uint *)(v1 + 22912), v4 + v5 + v3, 0);
    ++v2;
    v3 += 52;
  }
  while ( v2 < 30 );
  return result;
}

//----- (021D8B54) --------------------------------------------------------
BOOL __fastcall Function_21d8b54(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int v6;
  int v7;

  v5 = a1;
  v6 = a2;
  a1[485] = a2;
  v7 = a3;
  a1[484] = a3;
  *a1 = a4;
  a1[470] = Function_21d77e0(a2);
  v5[471] = Function_21d77e8(v6);
  v5[18] = Function_21d77d8(v6);
  *((uchar *)v5 + 1925) = Function_21d5e10(v7);
  *((uchar *)v5 + 1929) = Function_21d5e14(v7);
  *((uchar *)v5 + 1930) = Function_21d5e1c(v7);
  *((uchar *)v5 + 1931) = Function_21d5e2c(v7);
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[469] = 0;
  *((uchar *)v5 + 1934) = 1;
  v5[5] = Function_2007204(a5, 0xDu, 1, v5 + 7, 10);
  v5[6] = Function_2007220(a5, 0xEu, 1, v5 + 8, 10);
  return v5[5] && v5[6];
}

//----- (021D8C1C) --------------------------------------------------------
int __fastcall Function_21d8c1c(int a1, int a2)
{
  int v2;
  int v3;
  char v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  char v14;
  int v15;
  char v16;
  char v18;
  char v19;

  v2 = a1;
  v3 = a2;
  NNS_G2dInitImageProxy(a1 + 36);
  Function_200718c(v3, 0xCu, 1, 0, 0, 1, 0, 10, v2 + 36);
  if ( *(uchar *)(v2 + 1925) == 1 )
    v4 = 1;
  else
    v4 = 2;
  v5 = Function_21d77d0(*(uint *)(v2 + 1940));
  Function_21d783c((int)&v18, v2 + 36, v5, *(uint *)(v2 + 28), *(uint *)(v2 + 32), v4);
  Function_21d9d48(v2 + 1892, v2 + 1896, v2 + 1925, v2);
  *(uint *)(v2 + 4) = Function_21d785c(*(uint *)v2, (int)&v18, *(uint *)(v2 + 1892), *(uint *)(v2 + 1896), 1, 1);
  *(uint *)(v2 + 8) = Function_21d785c(
                          *(uint *)v2,
                          (int)&v18,
                          *(uint *)(v2 + 1892),
                          *(uint *)(v2 + 1896) + 24,
                          42,
                          1);
  Function_21d5e10(*(uint *)(v2 + 1936));
  v6 = Function_21d5e08(*(uint *)(v2 + 1936));
  if ( v6 == 4 )
  {
    v7 = 64;
    v8 = 192;
  }
  else
  {
    v7 = 108;
    v8 = 236;
  }
  v19 = 2;
  *(uint *)(v2 + 12) = Function_21d785c(*(uint *)v2, (int)&v18, v7, 20, 43, 1);
  *(uint *)(v2 + 16) = Function_21d785c(*(uint *)v2, (int)&v18, v8, 20, 43, 1);
  Function_2021d6c(*(uint *)(v2 + 8), 5u);
  Function_2021e80(*(uint *)(v2 + 8), 2);
  v9 = Function_21d5e10(*(uint *)(v2 + 1936));
  v10 = v9;
  v11 = v9 == 2;
  v12 = *(uint *)(v2 + 12);
  if ( v11 )
  {
    Function_2021d6c(v12, 8u);
    Function_2021d6c(*(uint *)(v2 + 16), 9u);
  }
  else
  {
    Function_2021d6c(v12, 6u);
    Function_2021d6c(*(uint *)(v2 + 16), 7u);
  }
  if ( v10 )
    Function_2021cac(*(uint *)(v2 + 8), 0);
  if ( v6 == 3 )
  {
    v11 = Function_21d5f7c(*(uint *)(v2 + 1936)) == 0;
    v15 = *(uint *)(v2 + 4);
    if ( v11 )
    {
      Function_2021d6c(v15, 0);
      v16 = 0;
    }
    else
    {
      Function_2021d6c(v15, 2u);
      v16 = 1;
    }
    *(uchar *)(v2 + 1933) = v16;
    Function_21da3cc(*(uint *)(v2 + 72), v2 + 76, 30);
    *(uchar *)(v2 + 1932) = 0;
  }
  else
  {
    v11 = Function_21d5e38(*(uint *)(v2 + 1936)) == 1;
    v13 = *(uint *)(v2 + 4);
    if ( v11 )
    {
      Function_2021d6c(v13, 0);
      Function_21da3cc(*(uint *)(v2 + 72), v2 + 76, 30);
      v14 = 0;
    }
    else
    {
      Function_2021d6c(v13, 2u);
      Function_21d8e00(v2);
      v14 = 1;
    }
    *(uchar *)(v2 + 1932) = v14;
    *(uchar *)(v2 + 1933) = 0;
  }
  *(uint *)(v2 + 1888) = Function_21d7800(*(uint *)(v2 + 1940));
  return Function_21d9aec(v2);
}

//----- (021D8E00) --------------------------------------------------------
int __fastcall Function_21d8e00(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 4);
  Function_2021d28();
  v4 = *v3;
  v5 = v3[1];
  v6 = v3[2];
  Function_21da3cc(*(uint *)(v1 + 72), v1 + 76, 1);
  v7 = Function_21d5e9c(*(uint *)(v1 + 1936));
  v8 = Function_2021e88(*(uint *)(v1 + 4));
  Function_21da428(*(uint *)(v1 + 72), v7, v4 >> 12, (v5 >> 12) + 4, v8, 2, 1240, v1 + 76);
  *(uint *)(v1 + 1636) = 0;
  *(uint *)(v1 + 1640) = -16384;
  result = 1932;
  *(uint *)(v1 + 1876) = 1;
  *(uchar *)(v1 + 1932) = 1;
  return result;
}

//----- (021D8E84) --------------------------------------------------------
int __fastcall Function_21d8e84(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v1 = a1;
  v2 = a1[5];
  if ( v2 )
  {
    free(v2);
    v1[5] = 0;
  }
  v3 = v1[6];
  if ( v3 )
  {
    free(v3);
    v1[6] = 0;
  }
  v4 = v1[1];
  if ( v4 )
  {
    Function_2021bd4(v4);
    v1[1] = 0;
  }
  v5 = v1[2];
  if ( v5 )
  {
    Function_2021bd4(v5);
    v1[2] = 0;
  }
  v6 = v1[3];
  if ( v6 )
  {
    Function_2021bd4(v6);
    v1[3] = 0;
  }
  result = v1[4];
  if ( result )
  {
    Function_2021bd4(result);
    result = 0;
    v1[4] = 0;
  }
  return result;
}

//----- (021D8EE0) --------------------------------------------------------
uint __fastcall Function_21d8ee0(int a1, uint *a2, uint *a3)
{
  int v3;
  uint *v4;
  uint result;

  v3 = a1;
  v4 = a2;
  *a3 = 0;
  *a2 = 0;
  result = 1925;
  switch ( *(uchar *)(v3 + 1925) )
  {
    case 0:
      if ( !*(uchar *)(v3 + 1926) )
      {
        if ( (result = Function_21d5e14(*(uint *)(v3 + 1936)), !*(uchar *)(v3 + 1929)) && result == 5
          || *(uchar *)(v3 + 1929) == 5 && !result )
        {
          result = 1;
          *v4 = 1;
        }
      }
      break;
    case 2:
      result = (*(uchar *)(v3 + 1926) + 253) & 0xFF;
      if ( result <= 1 )
      {
        result = 1;
        *a3 = 1;
      }
      break;
    case 3:
    case 4:
      result = *(uchar *)(v3 + 1926);
      if ( result == 2 )
      {
        result = 1;
        *a3 = 1;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D8F60) --------------------------------------------------------
uint *__fastcall Function_21d8f60(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v4 = a1;
  Function_21d9d48(a1 + 1900, v4 + 1904, v4 + 1926, v4);
  Function_21d8ee0(v4, &v16, &v15);
  if ( *(uchar *)(v4 + 1926) )
    Function_2021cac(*(uint *)(v4 + 8), 0);
  *(uint *)(v4 + 1908) = *(uint *)(v4 + 1892) << 12;
  *(uint *)(v4 + 1912) = *(uint *)(v4 + 1896) << 12;
  v5 = *(uint *)(v4 + 1900);
  v6 = *(uint *)(v4 + 1904);
  v7 = v5 << 12;
  v8 = v6 << 12;
  if ( v16 )
  {
    if ( v7 <= *(uint *)(v4 + 1908) )
      v10 = 272 - *(uint *)(v4 + 1892) + v5 - 70;
    else
      v10 = -(272 - v5 + *(uint *)(v4 + 1892) - 70);
    v9 = v10 << 12;
  }
  else
  {
    v9 = v7 - *(uint *)(v4 + 1908);
  }
  if ( v15 )
  {
    if ( v8 <= *(uint *)(v4 + 1912) )
      v12 = 208 - *(uint *)(v4 + 1896) + v6 + 24;
    else
      v12 = -(208 - v6 + *(uint *)(v4 + 1896) + 24);
    v11 = v12 << 12;
  }
  else
  {
    v11 = v8 - *(uint *)(v4 + 1912);
  }
  if ( v16 || v15 )
    v13 = 12;
  else
    v13 = 6;
  *(uint *)(v4 + 1916) = s32_div_f(v9, v13);
  *(uint *)(v4 + 1920) = s32_div_f(v11, v13);
  *(uchar *)(v4 + 1927) = v13;
  return Function_21d77c8((int)Function_21d9088, v4, 0);
}

//----- (021D9074) --------------------------------------------------------
BOOL __fastcall Function_21d9074(int a1)
{
  return *(uchar *)(a1 + 1927) == 0;
}

//----- (021D9088) --------------------------------------------------------
int __fastcall Function_21d9088(int *a1, int a2)
{
  int *v2;
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

  v2 = a1;
  v3 = a2;
  v12 = 0;
  if ( *(uchar *)(a2 + 1927) )
  {
    *(uint *)(a2 + 1908) += *(uint *)(a2 + 1916);
    if ( *(uint *)(a2 + 1916) > 0 )
    {
      v4 = *(uint *)(a2 + 1908);
      if ( v4 > 1114112 )
        *(uint *)(a2 + 1908) = 1400832 - v4;
    }
    if ( *(uint *)(a2 + 1916) < 0 )
    {
      v5 = *(uint *)(a2 + 1908);
      if ( v5 < 286720 )
        *(uint *)(a2 + 1908) = v5 + 827392;
    }
    *(uint *)(a2 + 1912) += *(uint *)(a2 + 1920);
    if ( *(uint *)(a2 + 1920) > 0 )
    {
      v6 = *(uint *)(a2 + 1912);
      if ( v6 > 851968 )
        *(uint *)(a2 + 1912) = 753664 - v6;
    }
    if ( *(uint *)(a2 + 1920) < 0 )
    {
      v7 = *(uint *)(a2 + 1912);
      if ( v7 < -98304 )
        *(uint *)(a2 + 1912) = v7 + 950272;
    }
    v10 = *(uint *)(a2 + 1908);
    v11 = *(uint *)(a2 + 1912);
    v12 = 0;
    Function_21d9e04(a2, &v10);
    result = 1927;
    --*(uchar *)(v3 + 1927);
  }
  else
  {
    v10 = *(uint *)(a2 + 1900) << 12;
    v11 = *(uint *)(a2 + 1904) << 12;
    v12 = 0;
    Function_21d9e04(a2, &v10);
    *(uint *)(v3 + 1892) = *(uint *)(v3 + 1900);
    *(uint *)(v3 + 1896) = *(uint *)(v3 + 1904);
    *(uchar *)(v3 + 1925) = *(uchar *)(v3 + 1926);
    *(uchar *)(v3 + 1929) = Function_21d5e14(*(uint *)(v3 + 1936));
    *(uchar *)(v3 + 1930) = Function_21d5e1c(*(uint *)(v3 + 1936));
    *(uchar *)(v3 + 1931) = Function_21d5e2c(*(uint *)(v3 + 1936));
    if ( !*(uchar *)(v3 + 1926) )
      Function_2021cac(*(uint *)(v3 + 8), 1);
    v9 = *(uint *)(v3 + 12);
    if ( *(uchar *)(v3 + 1926) == 2 )
    {
      Function_2021d6c(v9, 8u);
      Function_2021d6c(*(uint *)(v3 + 16), 9u);
    }
    else
    {
      Function_2021d6c(v9, 6u);
      Function_2021d6c(*(uint *)(v3 + 16), 7u);
    }
    result = Call_RemoveTaskFromTaskList(v2);
  }
  return result;
}

//----- (021D9230) --------------------------------------------------------
uint *__fastcall Function_21d9230(int a1)
{
  int v1;

  v1 = a1;
  Function_2021d6c(*(uint *)(a1 + 4), 1u);
  *(uint *)(v1 + 1920) = 0x2000;
  *(uint *)(v1 + 1904) = *(uint *)(v1 + 1896) + 12;
  *(uchar *)(v1 + 1927) = 6;
  *(uchar *)(v1 + 1924) = 0;
  Function_21d9eb0(v1);
  return Function_21d77c8((int)Function_21d928c, v1, 0);
}

//----- (021D9278) --------------------------------------------------------
BOOL __fastcall Function_21d9278(int a1)
{
  return *(uchar *)(a1 + 1924) == 255;
}

//----- (021D928C) --------------------------------------------------------
int __fastcall Function_21d928c(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int *v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uint *)(a2 + 4);
  Function_2021d28();
  v8 = v7[1];
  v10 = *v7;
  v11 = v8;
  v12 = v7[2];
  result = *(uchar *)(v4 + 1924);
  if ( *(uchar *)(v4 + 1924) )
  {
    if ( result != 1 )
      return result;
  }
  else
  {
    *(uchar *)(v4 + 1934) = 0;
    if ( *(uchar *)(v4 + 1927) )
    {
      v11 += *(uint *)(v4 + 1920);
      Function_21d9e04(v4, &v10);
      result = 1927;
      --*(uchar *)(v4 + 1927);
      return result;
    }
    v11 = *(uint *)(v4 + 1904) << 12;
    Function_21d9e04(v4, &v10);
    Function_2021d6c(*(uint *)(v4 + 4), 2u);
    Function_21da038(v4);
    *(uchar *)(v4 + 1927) = 6;
    ++*(uchar *)(v4 + 1924);
  }
  if ( *(uchar *)(v4 + 1927) )
  {
    v11 -= *(uint *)(v4 + 1920);
    Function_21d9e04(v4, &v10);
    result = 1927;
    --*(uchar *)(v4 + 1927);
  }
  else
  {
    v11 = *(uint *)(v4 + 1896) << 12;
    Function_21d9e04(v4, &v10);
    *(uchar *)(v4 + 1924) = -1;
    *(uchar *)(v4 + 1934) = 1;
    result = Call_RemoveTaskFromTaskList(v5);
  }
  return result;
}

//----- (021D9368) --------------------------------------------------------
uint *__fastcall Function_21d9368(int a1)
{
  *(uint *)(a1 + 1920) = 0x2000;
  *(uint *)(a1 + 1904) = *(uint *)(a1 + 1896) + 12;
  *(uchar *)(a1 + 1927) = 6;
  *(uchar *)(a1 + 1924) = 0;
  return Function_21d77c8((int)Function_21d93d0, a1, 0);
}

//----- (021D939C) --------------------------------------------------------
int __fastcall Function_21d939c(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uchar *)(a1 + 1924) != 255 )
    return 0;
  Function_21da06c();
  Function_21da3cc(*(uint *)(v1 + 72), v1 + 76, *(uint *)(v1 + 1876));
  *(uint *)(v1 + 1876) = 0;
  return 1;
}

//----- (021D93D0) --------------------------------------------------------
int __fastcall Function_21d93d0(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int *v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uint *)(a2 + 4);
  Function_2021d28();
  v8 = v7[1];
  v10 = *v7;
  v11 = v8;
  v12 = v7[2];
  result = *(uchar *)(v4 + 1924);
  if ( *(uchar *)(v4 + 1924) )
  {
    if ( result != 1 )
      return result;
  }
  else
  {
    *(uchar *)(v4 + 1934) = 0;
    if ( *(uchar *)(v4 + 1927) )
    {
      v11 += *(uint *)(v4 + 1920);
      Function_21d9e04(v4, &v10);
      result = 1927;
      --*(uchar *)(v4 + 1927);
      return result;
    }
    v11 = *(uint *)(v4 + 1904) << 12;
    Function_21d9e04(v4, &v10);
    Function_2021d6c(*(uint *)(v4 + 4), 1u);
    Function_21da1f8(v4);
    *(uchar *)(v4 + 1927) = 6;
    ++*(uchar *)(v4 + 1924);
  }
  if ( *(uchar *)(v4 + 1927) )
  {
    v11 -= *(uint *)(v4 + 1920);
    Function_21d9e04(v4, &v10);
    result = 1927;
    --*(uchar *)(v4 + 1927);
  }
  else
  {
    v11 = *(uint *)(v4 + 1896) << 12;
    Function_21d9e04(v4, &v10);
    Function_2021d6c(*(uint *)(v4 + 4), 0);
    *(uchar *)(v4 + 1924) = -1;
    *(uchar *)(v4 + 1934) = 1;
    result = Call_RemoveTaskFromTaskList(v5);
  }
  return result;
}

//----- (021D94B4) --------------------------------------------------------
int __fastcall Function_21d94b4(int a1)
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
  int result;

  v1 = a1;
  Function_2021d6c(*(uint *)(a1 + 4), 1u);
  *(uchar *)(v1 + 1928) = 0;
  v2 = Function_21da224(v1);
  Function_2021d28();
  v4 = *(uint *)(v3 + 4);
  v5 = *(uint *)(v3 + 8);
  v6 = Function_2021f74(v2);
  Function_21d9554(v1, *(uint *)(v1 + 76), v4, 1, v6);
  v7 = *(uint *)(v1 + 76);
  Function_2021d28();
  v9 = *(uint *)(v8 + 4);
  v10 = *(uint *)(v8 + 8);
  v11 = Function_2021f74(*(uint *)(v1 + 76));
  Function_21d9554(v1, v2, v9, -1, v11);
  result = 1924;
  *(uchar *)(v1 + 1924) = 0;
  return result;
}

//----- (021D9530) --------------------------------------------------------
int __fastcall Function_21d9530(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_21d95e0() )
    return 0;
  Function_2021d6c(*(uint *)(v1 + 4), 2u);
  Function_21da110(v1);
  return 1;
}

//----- (021D9554) --------------------------------------------------------
int __fastcall Function_21d9554(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v14 = a4;
  result = malloc(0xAu, 44);
  v9 = result;
  if ( result )
  {
    Function_2021d28();
    v11 = *v10;
    v12 = v10[1];
    v13 = v10[2];
    *(uint *)v9 = v6;
    *(ushort *)(v9 + 4) = 12;
    *(ushort *)(v9 + 6) = 6;
    *(uint *)(v9 + 8) = a5;
    *(uint *)(v9 + 12) = v12;
    *(uint *)(v9 + 20) = v11;
    *(uint *)(v9 + 16) = v7;
    *(uint *)(v9 + 24) = 0;
    *(uint *)(v9 + 36) = 12 * v14;
    *(uint *)(v9 + 28) = s32_div_f(*(uint *)(v9 + 16) - *(uint *)(v9 + 12), 12);
    *(uint *)(v9 + 32) = 61440;
    *(uint *)(v9 + 40) = v5;
    if ( Function_21d77c8((int)Function_21d9600, v9, 0) )
    {
      result = 1928;
      *(uchar *)(v5 + 1928) = 1;
    }
    else
    {
      result = free(v9);
    }
  }
  return result;
}

//----- (021D95E0) --------------------------------------------------------
BOOL __fastcall Function_21d95e0(int a1)
{
  return *(uchar *)(a1 + 1928) == 0;
}

//----- (021D95F4) --------------------------------------------------------
int __fastcall Function_21d95f4(int result)
{
  *(uchar *)(result + 1928) = 0;
  return result;
}

//----- (021D9600) --------------------------------------------------------
int __fastcall Function_21d9600(int *a1, uint *a2, int a3, int a4)
{
  uint **v4;
  int *v5;
  uint *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int result;
  uint v12;
  uint *v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = (uint **)a2;
  v5 = a1;
  v6 = (uint *)*a2;
  Function_2021d28();
  v8 = v7[1];
  v12 = *v7;
  v13 = (uint *)v8;
  v14 = v7[2];
  if ( *((ushort *)v4 + 2) )
  {
    if ( --*((ushort *)v4 + 2) == *((ushort *)v4 + 3) )
      Function_21d78ac((int)*v4, (uint)v4[2]);
    v9 = (int)v4[7] + (uint)v4[3];
    v4[3] = (uint *)v9;
    v13 = (uint *)v9;
    v10 = (int)v4[8] + (uint)v4[6];
    v4[6] = (uint *)v10;
    v12 = (uint)v4[5] + (uint)v4[9] * Function_201d15c((uint)(16 * v10) >> 16);
    result = Function_2021c50(*v4, (int *)&v12);
  }
  else
  {
    v12 = (uint)v4[5];
    v13 = v4[4];
    Function_2021c50(*v4, (int *)&v12);
    Function_21d79b8((int)v4, (int)Function_21d95f4, (int)v4[10]);
    result = Call_RemoveTaskFromTaskList(v5);
  }
  return result;
}

//----- (021D9690) --------------------------------------------------------
uint *__fastcall Function_21d9690(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  uint *result;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  if ( !*(uchar *)(a1 + 1932) && !*(uchar *)(a1 + 1933) )
    Function_2021d6c(*(uint *)(a1 + 4), 3u);
  v2 = *(uint *)(v1 + 4);
  Function_2021d28();
  v4 = v3[1];
  v6 = *v3;
  v7 = v4;
  v8 = v3[2];
  v7 = v4 - 0x2000;
  Function_21d9e04(v1, &v6);
  *(uchar *)(v1 + 1924) = 0;
  *(uchar *)(v1 + 1927) = 0;
  result = Function_21d77c8((int)Function_21d9718, v1, 0);
  if ( result )
  {
    result = (uint *)1928;
    *(uchar *)(v1 + 1928) = 1;
  }
  return result;
}

//----- (021D9704) --------------------------------------------------------
BOOL __fastcall Function_21d9704(int a1)
{
  return *(uchar *)(a1 + 1928) == 0;
}

//----- (021D9718) --------------------------------------------------------
uint __fastcall Function_21d9718(int *a1, int a2)
{
  int v2;
  int *v3;
  uint result;
  int v5;
  int *v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v2 = a2;
  v3 = a1;
  result = *(uchar *)(a2 + 1924);
  if ( *(uchar *)(a2 + 1924) )
  {
    if ( result == 1 )
    {
      v8 = *(uint *)(a2 + 4);
      Function_2021d28();
      v10 = v9[1];
      v11 = *v9;
      v12 = v10;
      v13 = v9[2];
      if ( *(uchar *)(v2 + 1927) )
      {
        v12 += *(uint *)(v2 + 1920);
        Function_21d9e04(v2, &v11);
        result = 1927;
        --*(uchar *)(v2 + 1927);
      }
      else
      {
        v12 = *(uint *)(v2 + 1904) << 12;
        Function_21d9e04(v2, &v11);
        *(uchar *)(v2 + 1928) = 0;
        result = Call_RemoveTaskFromTaskList(v3);
      }
    }
  }
  else
  {
    result = (uchar)++*(uchar *)(a2 + 1927);
    if ( result >= 4 )
    {
      v5 = *(uint *)(a2 + 4);
      Function_2021d28();
      v7 = v6[1];
      v14 = *v6;
      v15 = v7;
      v16 = v6[2];
      *(uint *)(v2 + 1904) = (v7 >> 12) + 6;
      *(uint *)(v2 + 1920) = 12288;
      *(uchar *)(v2 + 1927) = 2;
      if ( !*(uchar *)(v2 + 1932) && !*(uchar *)(v2 + 1933) )
        Function_2021d6c(*(uint *)(v2 + 4), 4u);
      result = 1924;
      ++*(uchar *)(v2 + 1924);
    }
  }
  return result;
}

//----- (021D97FC) --------------------------------------------------------
uint *__fastcall Function_21d97fc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint *result;

  v1 = a1;
  v2 = *(uint *)(a1 + 4);
  Function_2021d28();
  v4 = *(uint *)(v3 + 8);
  *(uint *)(v1 + 1904) = (*(uint *)(v3 + 4) >> 12) - 4;
  *(uint *)(v1 + 1920) = -4096;
  *(uchar *)(v1 + 1927) = 4;
  *(uchar *)(v1 + 1924) = 0;
  result = Function_21d77c8((int)Function_21d9894, v1, 0);
  if ( result )
  {
    result = (uint *)1928;
    *(uchar *)(v1 + 1928) = 1;
  }
  return result;
}

//----- (021D9858) --------------------------------------------------------
int __fastcall Function_21d9858(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uchar *)(a1 + 1928) )
    return 0;
  if ( !*(uchar *)(a1 + 1932) && !*(uchar *)(a1 + 1933) )
  {
    if ( Function_2021e24(*(uint *)(a1 + 4)) )
      Function_2021d6c(*(uint *)(v1 + 4), 0);
  }
  return 1;
}

//----- (021D9894) --------------------------------------------------------
int __fastcall Function_21d9894(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int *v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uint *)(a2 + 4);
  Function_2021d28();
  v8 = v7[1];
  v10 = *v7;
  v11 = v8;
  v12 = v7[2];
  if ( *(uchar *)(v4 + 1927) )
  {
    v11 += *(uint *)(v4 + 1920);
    Function_21d9e04(v4, &v10);
    result = 1927;
    --*(uchar *)(v4 + 1927);
  }
  else
  {
    v11 = *(uint *)(v4 + 1904) << 12;
    Function_21d9e04(v4, &v10);
    *(uchar *)(v4 + 1928) = 0;
    result = Call_RemoveTaskFromTaskList(v5);
  }
  return result;
}

//----- (021D9900) --------------------------------------------------------
int __fastcall Function_21d9900(int a1)
{
  int v1;

  v1 = a1;
  if ( *(ushort *)(*(uint *)(a1 + 1936) + 272) == Function_21d5e68(*(uint *)(a1 + 1936)) )
    Function_21d84e0(*(uint *)(v1 + 1880));
  Function_21da204(v1);
  return Function_2021d6c(*(uint *)(v1 + 4), 0);
}

//----- (021D9938) --------------------------------------------------------
int __fastcall Function_21d9938(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2021d6c(*(uint *)(a1 + 4), 1u);
  Function_21da7b8(*(uint *)(v1 + 72), v1 + 76, 1);
  result = 1924;
  *(uchar *)(v1 + 1924) = 0;
  return result;
}

//----- (021D995C) --------------------------------------------------------
int __fastcall Function_21d995c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = Function_21d7964(*(uint *)(a1 + 1940));
  v3 = v2;
  v4 = *(uchar *)(v1 + 1924);
  if ( *(uchar *)(v1 + 1924) )
  {
    if ( v4 == 1 )
    {
      if ( Function_21d3b18(v2) )
      {
        if ( Function_21d3b20(v3) )
        {
          Function_2021d6c(*(uint *)(v1 + 4), 0);
          Function_21da204(v1);
          return 1;
        }
        Function_21da7b8(*(uint *)(v1 + 72), v1 + 76, 2);
        ++*(uchar *)(v1 + 1924);
      }
    }
    else if ( v4 == 2 && Function_21da7e0(*(uint *)(v1 + 72), v1 + 76) )
    {
      Function_2021d6c(*(uint *)(v1 + 4), 2u);
      return 1;
    }
  }
  else if ( Function_21da7e0(*(uint *)(v1 + 72), v1 + 76) )
  {
    ++*(uchar *)(v1 + 1924);
  }
  return 0;
}

//----- (021D99F4) --------------------------------------------------------
int __fastcall Function_21d99f4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2021e80(*(uint *)(a1 + 4), 1);
  if ( *(uchar *)(v1 + 1932) )
    Function_2021e80(*(uint *)(v1 + 76), 1);
  result = 1933;
  if ( *(uchar *)(v1 + 1933) )
    result = Function_21debdc(*(uint *)(v1 + 1888), 1);
  return result;
}

//----- (021D9A2C) --------------------------------------------------------
int __fastcall Function_21d9a2c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_2021e80(*(uint *)(a1 + 4), 2);
  if ( *(uchar *)(v1 + 1932) )
    Function_2021e80(*(uint *)(v1 + 76), 2);
  result = 1933;
  if ( *(uchar *)(v1 + 1933) )
    result = Function_21debdc(*(uint *)(v1 + 1888), 2);
  return result;
}

//----- (021D9A64) --------------------------------------------------------
int __fastcall Function_21d9a64(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = 1932;
  if ( *(uchar *)(v1 + 1932) )
  {
    v3 = Function_21d5ea0(*(uint *)(v1 + 1936));
    result = Function_21da68c(*(uint *)(v1 + 72), v1 + 76, v3);
  }
  return result;
}

//----- (021D9A8C) --------------------------------------------------------
int __fastcall Function_21d9a8c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_21d5ec8(*(uint *)(a1 + 1936));
  result = *(uint *)(v1 + 76);
  if ( result )
    result = Function_21da63c(*(uint *)(v1 + 72), v1 + 76, v2);
  return result;
}

//----- (021D9AB0) --------------------------------------------------------
int __fastcall Function_21d9ab0(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = *(uint *)(a1 + 76);
  if ( result )
  {
    Function_21da690(*(uint *)(v1 + 72), v1 + 76);
    v3 = Function_21d5ec8(*(uint *)(v1 + 1936));
    Function_21da63c(*(uint *)(v1 + 72), v1 + 76, v3);
    result = Function_21da694(*(uint *)(v1 + 72), v1 + 76, 0);
  }
  return result;
}

//----- (021D9AEC) --------------------------------------------------------
int __fastcall Function_21d9aec(int a1)
{
  int v1;
  bool v2;
  int v3;
  int result;

  v1 = a1;
  v2 = Function_21d5ee0(*(uint *)(a1 + 1936)) == 0;
  v3 = *(uint *)(v1 + 4);
  if ( v2 )
    result = Function_2021e90(v3, 0);
  else
    result = Function_2021e90(v3, 1);
  return result;
}

//----- (021D9B10) --------------------------------------------------------
int __fastcall Function_21d9b10(int a1)
{
  return Function_2021d6c(*(uint *)(a1 + 4), 1u);
}

//----- (021D9B1C) --------------------------------------------------------
int __fastcall Function_21d9b1c(int a1, uint *a2)
{
  int v2;
  uint *v3;
  uint *v4;
  uint *v5;
  int v6;
  int result;

  v2 = *(uint *)(a1 + 4);
  v3 = a2;
  Function_2021d28();
  v6 = v4[1];
  v5 = v4 + 2;
  *v3 = *v4;
  v3[1] = v6;
  result = v4[2];
  v3[2] = *v5;
  return result;
}

//----- (021D9B34) --------------------------------------------------------
uint *__fastcall Function_21d9b34(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  *(uchar *)(a1 + 1924) = 0;
  result = AddTaskToTaskList1((int)Function_21d9b78, a1, 0);
  if ( result )
  {
    *(uchar *)(v1 + 1933) = 1;
    result = (uint *)1928;
    *(uchar *)(v1 + 1928) = 1;
  }
  return result;
}

//----- (021D9B64) --------------------------------------------------------
BOOL __fastcall Function_21d9b64(int a1)
{
  return *(uchar *)(a1 + 1928) == 0;
}

//----- (021D9B78) --------------------------------------------------------
int __fastcall Function_21d9b78(int *a1, int a2)
{
  int *v2;
  int result;
  int v4;
  int v5;

  v2 = a1;
  result = 1924;
  v4 = a2;
  v5 = *(uchar *)(a2 + 1924);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      result = Function_21de9a8(*(uint *)(v4 + 1888));
      if ( result )
      {
        Function_2021d6c(*(uint *)(v4 + 4), 2u);
        *(uchar *)(v4 + 1928) = 0;
        result = Call_RemoveTaskFromTaskList(v2);
      }
    }
  }
  else
  {
    Function_2021d6c(*(uint *)(v4 + 4), 1u);
    Function_21de954(*(uint *)(v4 + 1888));
    result = 1924;
    ++*(uchar *)(v4 + 1924);
  }
  return result;
}

//----- (021D9BD4) --------------------------------------------------------
uint *__fastcall Function_21d9bd4(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  *(uchar *)(a1 + 1924) = 0;
  result = AddTaskToTaskList1((int)Function_21d9c18, a1, 0);
  if ( result )
  {
    *(uchar *)(v1 + 1933) = 0;
    result = (uint *)1928;
    *(uchar *)(v1 + 1928) = 1;
  }
  return result;
}

//----- (021D9C04) --------------------------------------------------------
BOOL __fastcall Function_21d9c04(int a1)
{
  return *(uchar *)(a1 + 1928) == 0;
}

//----- (021D9C18) --------------------------------------------------------
int __fastcall Function_21d9c18(int *a1, int a2)
{
  int *v2;
  int result;
  int v4;
  int v5;

  v2 = a1;
  result = 1924;
  v4 = a2;
  v5 = *(uchar *)(a2 + 1924);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      result = Function_21dea64(*(uint *)(v4 + 1888));
      if ( result )
      {
        Function_2021d6c(*(uint *)(v4 + 4), 0);
        *(uchar *)(v4 + 1928) = 0;
        result = Call_RemoveTaskFromTaskList(v2);
      }
    }
  }
  else
  {
    Function_2021d6c(*(uint *)(v4 + 4), 1u);
    Function_21dea18(*(uint *)(v4 + 1888));
    result = 1924;
    ++*(uchar *)(v4 + 1924);
  }
  return result;
}

//----- (021D9C74) --------------------------------------------------------
uint *__fastcall Function_21d9c74(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  *(uchar *)(a1 + 1924) = 0;
  result = AddTaskToTaskList1((int)Function_21d9cb4, a1, 0);
  if ( result )
  {
    result = (uint *)1928;
    *(uchar *)(v1 + 1928) = 1;
  }
  return result;
}

//----- (021D9CA0) --------------------------------------------------------
BOOL __fastcall Function_21d9ca0(int a1)
{
  return *(uchar *)(a1 + 1928) == 0;
}

//----- (021D9CB4) --------------------------------------------------------
int __fastcall Function_21d9cb4(int *a1, int a2)
{
  int *v2;
  int result;
  int v4;
  int v5;

  v2 = a1;
  result = 1924;
  v4 = a2;
  v5 = *(uchar *)(a2 + 1924);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      result = Function_21deb08(*(uint *)(v4 + 1888));
      if ( result )
      {
        Function_2021d6c(*(uint *)(v4 + 4), 2u);
        *(uchar *)(v4 + 1928) = 0;
        result = Call_RemoveTaskFromTaskList(v2);
      }
    }
  }
  else
  {
    Function_2021d6c(*(uint *)(v4 + 4), 1u);
    Function_21dea74(*(uint *)(v4 + 1888));
    result = 1924;
    ++*(uchar *)(v4 + 1924);
  }
  return result;
}

//----- (021D9D10) --------------------------------------------------------
int __fastcall Function_21d9d10(int result)
{
  if ( *(uchar *)(result + 1933) )
    result = Function_2021d6c(*(uint *)(result + 4), 1u);
  return result;
}

//----- (021D9D28) --------------------------------------------------------
int __fastcall Function_21d9d28(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uchar *)(a1 + 1933);
  if ( result )
  {
    Function_2021d6c(*(uint *)(v1 + 4), 0);
    result = 1933;
    *(uchar *)(v1 + 1933) = 0;
  }
  return result;
}

//----- (021D9D48) --------------------------------------------------------
int __fastcall Function_21d9d48(uint *a1, int *a2, uchar *a3, int a4)
{
  uint *v4;
  int v5;
  uchar *v6;
  int *v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v13 = *(uint *)(a4 + 1936);
  *a3 = Function_21d5e10(*(uint *)(a4 + 1936));
  result = *v6;
  switch ( (uchar)result )
  {
    case 0:
      v9 = Function_21d7820(*(uint *)(v5 + 1940));
      *v4 = v9 + 112 + 24 * Function_21d5e14(v13);
      result = Function_21d5e1c(v13);
      *v7 = 24 * result + 24;
      break;
    case 1:
      v10 = Function_21d5e2c(v12);
      v11 = Function_21d77e8(*(uint *)(v5 + 1940));
      Function_21dcd30(v11, v10, v4, v7);
      result = *v7 - 16;
      *v7 = result;
      break;
    case 2:
      *v4 = Function_21d7820(*(uint *)(v5 + 1940)) + 168;
      result = 8;
      *v7 = 8;
      break;
    case 3:
      *v4 = Function_21d7820(*(uint *)(v5 + 1940)) + 159;
      result = 160;
      *v7 = 160;
      break;
    case 4:
      *v4 = Function_21d7820(*(uint *)(v5 + 1940)) + 235;
      result = 160;
      *v7 = 160;
      break;
    default:
      return result;
  }
  return result;
}

//----- (021D9E04) --------------------------------------------------------
int __fastcall Function_21d9e04(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int result;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v2 = a1;
  v3 = a2;
  Function_2021c50(*(uint **)(a1 + 4), a2);
  if ( *(uchar *)(v2 + 1932) )
  {
    v8 = 0;
    v14 = 0;
    if ( *(uint *)(v2 + 1876) )
    {
      v4 = v2;
      v5 = v2;
      do
      {
        v12 = *v3 + *(uint *)(v4 + 1636);
        v13 = v3[1] - *(uint *)(v4 + 1640);
        Function_2021c50(*(uint **)(v5 + 76), &v12);
        v4 += 8;
        ++v8;
        v5 += 52;
      }
      while ( v8 < *(uint *)(v2 + 1876) );
    }
  }
  if ( *(uchar *)(v2 + 1933) )
    Function_21deb9c(*(uint *)(v2 + 1888), v3);
  result = *(uchar *)(v2 + 1934);
  if ( *(uchar *)(v2 + 1934) )
  {
    v7 = v3[1];
    v9 = *v3;
    v10 = v7;
    v11 = v3[2];
    v10 = v7 + 98304;
    result = Function_2021c50(*(uint **)(v2 + 8), &v9);
  }
  return result;
}

//----- (021D9EB0) --------------------------------------------------------
uint *__fastcall Function_21d9eb0(uint *a1)
{
  int v1;
  uint *v2;
  int v3;
  uint *v4;
  uint i;
  int v6;
  uint *result;
  uint *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  uint v15;
  uint v16;
  uint v17;
  uint v18;

  v8 = a1;
  if ( Function_21d5e10(a1[484]) )
  {
    v6 = Function_21d5e2c(v8[484]);
    Function_21dcc44(v8[471], v6, 1240, v8 + 19);
    result = v8;
    v8[469] = 1;
    v8[409] = 0;
    v8[410] = -16384;
  }
  else if ( Function_21d5f20(v8[484]) )
  {
    v1 = Function_21d5e24(v8[484]);
    Function_21d8408(v8[470], v1, 1240, (int)(v8 + 19));
    result = v8;
    v8[469] = 1;
    v8[409] = 0;
    v8[410] = -16384;
  }
  else
  {
    Function_21d5ee8(v8[484], &v18, &v17, &v16, &v15);
    v12 = Function_21d5e14(v8[484]);
    v11 = Function_21d5e1c(v8[484]);
    v14 = 0;
    v13 = v16;
    if ( v16 <= v15 )
    {
      v2 = v8;
      v10 = (int)(v8 + 19);
      v3 = 1520;
      v9 = 6 * v16;
      v4 = v8;
      do
      {
        for ( i = v18; i <= v17; ++i )
        {
          Function_21d8408(v8[470], i + v9, v3, v10);
          if ( v2[19] )
          {
            v3 += 16;
            v4[409] = 98304 * (i - v12);
            v4[410] = (-4 - 24 * (v13 - v11)) << 12;
            v2 += 13;
            v10 += 52;
            v4 += 2;
            ++v14;
          }
        }
        v9 += 6;
        ++v13;
      }
      while ( v13 <= v15 );
    }
    result = v8;
    v8[469] = v14;
  }
  return result;
}

//----- (021DA038) --------------------------------------------------------
int __fastcall Function_21da038(int a1)
{
  int v1;
  uint v2;
  int v3;
  int result;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 1876) )
  {
    v3 = a1;
    do
    {
      Function_21d78ac(*(uint *)(v3 + 76), 2);
      ++v2;
      v3 += 52;
    }
    while ( v2 < *(uint *)(v1 + 1876) );
  }
  result = 1932;
  *(uchar *)(v1 + 1932) = 1;
  return result;
}

//----- (021DA06C) --------------------------------------------------------
uint __fastcall Function_21da06c(uint *a1)
{
  uint *v1;
  int v2;
  uint result;
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  if ( Function_21d5e10(a1[484]) )
  {
    v8 = Function_21d5e2c(v1[484]);
    result = Function_21dcc80(v1[471], v8, v1 + 19);
  }
  else if ( Function_21d5f20(v1[484]) )
  {
    v2 = Function_21d5e24(v1[484]);
    result = Function_21d845c(v1[470], v2, (int)(v1 + 19));
  }
  else
  {
    v4 = Function_21d5f3c(v1[484]);
    v5 = 0;
    result = v1[469];
    if ( result )
    {
      v6 = (int)(v1 + 19);
      do
      {
        v7 = Function_21d5f6c(v1[484], v5);
        Function_21d845c(v1[470], v4 + v7, v6);
        ++v5;
        result = v1[469];
        v6 += 52;
      }
      while ( v5 < result );
    }
  }
  return result;
}

//----- (021DA110) --------------------------------------------------------
int __fastcall Function_21da110(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v5;
  int v6;

  v1 = a1;
  if ( Function_21d5e10(a1[484]) )
  {
    v5 = Function_21d5e2c(v1[484]);
    v6 = Function_21dcd18(v1[471], v5);
    Function_21da754(v1[18], v1 + 19, 1520);
    Function_21da754(v1[18], v6, 1536);
    Function_20c3e14();
    Function_21dcc44(v1[471], v5, 1240, v1 + 32);
    Function_21dccd4(v1[471], v5, v1 + 19);
  }
  else
  {
    v2 = Function_21d5e24(v1[484]);
    v3 = Function_21d84c8(v1[470], v2);
    Function_21da754(v1[18], v1 + 19, 1520);
    Function_21da754(v1[18], v3, 1536);
    Function_20c3e14();
    Function_21d8408(v1[470], v2, 1240, (int)(v1 + 32));
    Function_21d845c(v1[470], v2, (int)(v1 + 19));
  }
  return Function_21da418(v1 + 32, v1 + 19, 1);
}

//----- (021DA1F8) --------------------------------------------------------
int __fastcall Function_21da1f8(int result)
{
  *(uchar *)(result + 1932) = 0;
  return result;
}

//----- (021DA204) --------------------------------------------------------
int __fastcall Function_21da204(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_21da3f0(*(uint *)(a1 + 72), a1 + 76, 1);
  *(uchar *)(v1 + 1932) = 0;
  result = 1876;
  *(uint *)(v1 + 1876) = 0;
  return result;
}

//----- (021DA224) --------------------------------------------------------
int __fastcall Function_21da224(int *a1)
{
  int *v1;
  int v2;
  int result;
  int v4;

  v1 = a1;
  if ( Function_21d5e10(a1[484]) )
  {
    v4 = Function_21d5e2c(v1[484]);
    result = *(uint *)Function_21dcd18(v1[471], v4);
  }
  else
  {
    v2 = Function_21d5e24(v1[484]);
    result = *(uint *)Function_21d84c8(v1[470], v2);
  }
  return result;
}

//----- (021DA270) --------------------------------------------------------
int __fastcall Function_21da270(int *a1, int a2, int a3, int a4, int a5)
{
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  ushort *v14;
  int v15;
  char v16;
  int v17;

  v17 = a4;
  v5 = a1;
  v6 = a2;
  v11 = a3;
  v12 = a4;
  a1[18] = (int)LoadFromNARC_8(19, 0xAu, a3, a4);
  NNS_G2dInitImagePaletteProxy((int)&v16);
  v7 = Function_2079fd0();
  Function_200716c(v5[18], v7, 1, 64, 10, (int)&v16);
  v8 = Function_2079fd0();
  v13 = Function_20071ec(v5[18], v8, &v15, 10);
  if ( v13 )
  {
    NNS_G2dInitImagePaletteProxy((int)&v16);
    v9 = Function_20a71ec(v13, &v14);
    Function_21d78c8(*(ushort **)(v15 + 12), *(ushort **)(v15 + 12), *(uint *)(v15 + 8) >> 1, 1407, 8);
    if ( v9 )
      Function_20a8948((uint *)v15, v14, 192, 1, &v16);
    else
      NNS_G2dLoadPalette((uint *)v15, 192, 1, &v16);
    free(v13);
  }
  v5[2] = Function_2007204(a5, 0x15u, 1, v5 + 4, 10);
  *v5 = Function_2007220(a5, 0x16u, 1, v5 + 1, 10);
  v5[5] = Function_2007204(a5, 0x17u, 1, v5 + 7, 10);
  v5[6] = Function_2007220(a5, 0x18u, 1, v5 + 8, 10);
  if ( !v5[2] || !*v5 || !v5[18] )
    return 0;
  v5[9] = v12;
  v5[16] = v11;
  v5[17] = v6;
  return 1;
}

//----- (021DA384) --------------------------------------------------------
int *__fastcall Function_21da384(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int *result;

  v1 = a1;
  v2 = a1[2];
  if ( v2 )
  {
    free(v2);
    v1[2] = 0;
  }
  if ( *v1 )
  {
    free(*v1);
    *v1 = 0;
  }
  v3 = v1[5];
  if ( v3 )
  {
    free(v3);
    v1[5] = 0;
  }
  v4 = v1[6];
  if ( v4 )
  {
    free(v4);
    v1[6] = 0;
  }
  result = (int *)v1[18];
  if ( result )
    result = (int *)Call_FS_CloseFile(result);
  return result;
}

//----- (021DA3CC) --------------------------------------------------------
int __fastcall Function_21da3cc(int a1, uint *a2, int a3)
{
  int result;
  uint *v4;
  int i;

  result = a3;
  v4 = a2;
  for ( i = a3 - 1; result; --i )
  {
    *v4 = 0;
    NNS_G2dInitImageProxy((int)(v4 + 1));
    result = i;
    v4 += 13;
  }
  return result;
}

//----- (021DA3F0) --------------------------------------------------------
int __fastcall Function_21da3f0(int a1, int *a2, int a3)
{
  int result;
  int *v4;
  int i;

  result = a3;
  v4 = a2;
  for ( i = a3 - 1; result; --i )
  {
    if ( *v4 )
    {
      Function_2021bd4(*v4);
      *v4 = 0;
    }
    result = i;
    v4 += 13;
  }
  return result;
}

//----- (021DA418) --------------------------------------------------------
int *__fastcall Function_21da418(int *a1, uint *a2, int a3)
{
  return MI_CpuCopy32(a1, a2, 52 * a3);
}

//----- (021DA428) --------------------------------------------------------
int __fastcall Function_21da428(int *a1, int a2, int a3, int a4, char a5, int a6, int a7, int a8)
{
  ushort *v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v19;
  int v20;
  int v21;

  v8 = (ushort *)a2;
  v9 = a1;
  v10 = a3;
  v11 = a4;
  v19 = (uchar)InitEncryptPkmnData_Part1(a2);
  v12 = Function_21d77d0(v9[17]);
  Function_21d783c((int)&v21, 0, v12, v9[4], v9[1], a5);
  v13 = (ushort)GetBoxPkmnData((int)v8, 5u, 0);
  v14 = (uchar)GetBoxPkmnData((int)v8, 0x4Cu, 0);
  v15 = (uchar)GetBoxPkmnData((int)v8, 0x70u, 0);
  *(uint *)(a8 + 40) = Function_2079d40((int)v8);
  *(ushort *)(a8 + 44) = Function_2079edc(v13, v15, v14);
  *(ushort *)(a8 + 48) = GetBoxPkmnData((int)v8, 6u, 0);
  *(ushort *)(a8 + 46) = GetBoxPkmnData((int)v8, 0xBu, 0);
  NNS_G2dInitImageProxy(a8 + 4);
  Function_2006dc8(v9[18], *(uint *)(a8 + 40), 0, 640, (int)(v9 + 19));
  NNS_G2dGetUnpackedPaletteData((int)(v9 + 19), &v20);
  *(uint *)(v20 + 8) = REG_DISPCNT & 0x300010;
  *(uint *)(v20 + 16) = 512;
  NNS_G2dLoadImage1DMapping((ushort *)v20, 32 * a7, 1, (uint *)(a8 + 4));
  v21 = a8 + 4;
  v16 = Function_21d785c(v9[9], (int)&v21, v10, v11, a6, 1);
  *(uint *)a8 = v16;
  if ( !v16 )
    ErrorHandler();
  Function_2021e90(*(uint *)a8, *(ushort *)(a8 + 44) + 2);
  v17 = Function_21d5ec8(v9[16]);
  Function_21da63c(v9, a8, v17);
  return InitEncryptPkmnData_Part1Again(v8, v19);
}

//----- (021DA548) --------------------------------------------------------
int __fastcall Function_21da548(int *a1, int a2, uint a3, int a4, int a5, int a6, int a7, char a8, int a9, int a10, int a11)
{
  ushort *v11;
  int *v12;
  uint v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v21;
  int v22;
  int v23;
  int v24;

  v24 = a4;
  v11 = (ushort *)a2;
  v12 = a1;
  v13 = a3;
  v14 = a4;
  v21 = InitEncryptPkmnData_Part1(a2);
  v15 = (uchar)GetBoxPkmnData((int)v11, 0x4Cu, 0);
  v16 = (uchar)GetBoxPkmnData((int)v11, 0x70u, 0);
  v17 = Function_21d77d0(v12[17]);
  Function_21d783c((int)&v23, 0, v17, v12[4], v12[1], a8);
  *(uint *)(a11 + 40) = v14;
  *(ushort *)(a11 + 44) = Function_2079edc(v13, v16, v15);
  *(ushort *)(a11 + 48) = GetBoxPkmnData((int)v11, 6u, 0);
  *(ushort *)(a11 + 46) = GetBoxPkmnData((int)v11, 0xBu, 0);
  NNS_G2dInitImageProxy(a11 + 4);
  NNS_G2dGetUnpackedPaletteData(a5, &v22);
  *(uint *)(v22 + 8) = REG_DISPCNT & 0x300010;
  *(uint *)(v22 + 16) = 512;
  NNS_G2dLoadImage1DMapping((ushort *)v22, 32 * a10, 1, (uint *)(a11 + 4));
  v23 = a11 + 4;
  v18 = Function_21d785c(v12[9], (int)&v23, a6, a7, a9, 1);
  *(uint *)a11 = v18;
  if ( !v18 )
    ErrorHandler();
  Function_2021e90(*(uint *)a11, *(ushort *)(a11 + 44) + 2);
  v19 = Function_21d5ec8(v12[16]);
  Function_21da63c(v12, a11, v19);
  return InitEncryptPkmnData_Part1Again(v11, v21);
}

//----- (021DA63C) --------------------------------------------------------
int __fastcall Function_21da63c(int a1, int a2, int a3)
{
  int v4;

  if ( !a3 )
    return Function_2021fe0(*(uint *)a2, 0);
  if ( a3 & 1 && !*(ushort *)(a2 + 48) )
    return Function_2021fe0(*(uint *)a2, 1);
  v4 = 0;
  while ( !((2 << v4) & a3) || (1 << v4) & *(ushort *)(a2 + 46) )
  {
    if ( ++v4 >= 6 )
      return Function_2021fe0(*(uint *)a2, 0);
  }
  return Function_2021fe0(*(uint *)a2, 1);
}

//----- (021DA68C) --------------------------------------------------------
void __fastcall Function_21da68c(int a1, int a2, short a3)
{
  *(ushort *)(a2 + 46) = a3;
}

//----- (021DA690) --------------------------------------------------------
void __fastcall Function_21da690(int a1, int a2, short a3)
{
  *(ushort *)(a2 + 48) = a3;
}

//----- (021DA694) --------------------------------------------------------
uint __fastcall Function_21da694(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint result;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  if ( *(ushort *)(a2 + 48) == 112 && *(uint *)(a2 + 40) == Function_2079d8c(0x1E7u, 0, 0) )
  {
    *(uint *)(v4 + 40) = Function_2079d8c(0x1E7u, 0, 1u);
LABEL_10:
    v8 = *(uint *)(v4 + 8);
    Function_2006dc8(*(uint *)(v5 + 72), *(uint *)(v4 + 40), 0, 640, v5 + 76);
    NNS_G2dGetUnpackedPaletteData(v5 + 76, &v9);
    return (uint)MI_CpuCopy32(*(int **)(v9 + 20), (uint *)(v8 + 104857600), 512);
  }
  result = *(ushort *)(v4 + 48);
  if ( result != 112 )
  {
    result = Function_2079d8c(0x1E7u, 0, 1u);
    if ( *(uint *)(v4 + 40) == result )
    {
      *(uint *)(v4 + 40) = Function_2079d8c(0x1E7u, 0, 0);
      goto LABEL_10;
    }
  }
  if ( v6 == 1 )
  {
    result = Function_2079d8c(0x1ECu, 0, 1u);
    if ( *(uint *)(v4 + 40) == result )
    {
      *(uint *)(v4 + 40) = Function_2079d8c(0x1ECu, 0, 0);
      goto LABEL_10;
    }
  }
  return result;
}

//----- (021DA744) --------------------------------------------------------
int __fastcall Function_21da744(int a1, int a2, uint a3, int a4)
{
  return Function_2006dc8(*(uint *)(a1 + 72), a3, 0, a4, a2);
}

//----- (021DA754) --------------------------------------------------------
int __fastcall Function_21da754(int a1, int *a2, int a3)
{
  int *v3;
  int v4;
  int result;
  int v6;
  int v7;

  v3 = a2;
  v4 = a1;
  result = *a2;
  v6 = a3;
  if ( *a2 )
  {
    NNS_G2dInitImageProxy((int)(a2 + 1));
    Function_2006dc8(*(uint *)(v4 + 72), v3[10], 0, 640, v4 + 76);
    NNS_G2dGetUnpackedPaletteData(v4 + 76, &v7);
    *(uint *)(v7 + 8) = REG_DISPCNT & 0x300010;
    *(uint *)(v7 + 16) = 512;
    NNS_G2dLoadImage1DMapping((ushort *)v7, 32 * v6, 1, v3 + 1);
    result = Function_2021f7c(*v3, v3 + 1);
  }
  return result;
}

//----- (021DA7B8) --------------------------------------------------------
int __fastcall Function_21da7b8(int a1, uint *a2, uint a3)
{
  uint v3;
  int *v4;
  uint v5;

  v3 = a3;
  v4 = (int *)a2;
  v5 = *a2;
  if ( a3 - 1 > 1 )
    Function_2021cf8(v5, 0);
  else
    Function_2021cf8(v5, 1);
  return Function_2021d6c(*v4, v3);
}

//----- (021DA7E0) --------------------------------------------------------
BOOL __fastcall Function_21da7e0(int a1, int *a2)
{
  return Function_2021fd0(*a2) == 0;
}

//----- (021DA7F4) --------------------------------------------------------
int __fastcall Function_21da7f4(int a1, int a2, int a3)
{
  char v3;

  if ( a3 )
    v3 = 6;
  else
    v3 = 2;
  return Function_2021e90(*(uint *)a2, *(ushort *)(a2 + 44) + v3);
}

//----- (021DA80C) --------------------------------------------------------
int __fastcall Function_21da80c(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (021DA810) --------------------------------------------------------
int __fastcall Function_21da810(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (021DA814) --------------------------------------------------------
BOOL __fastcall Function_21da814(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;

  v5 = a1;
  a1[17] = a2;
  a1[15] = a4;
  a1[16] = a3;
  *a1 = a4;
  a1[1] = 0;
  a1[2] = Function_2007204(a5, 0xAu, 1, a1 + 4, 10);
  v5[3] = Function_2007220(a5, 0xBu, 1, v5 + 5, 10);
  return v5[2] && v5[3];
}

//----- (021DA864) --------------------------------------------------------
int __fastcall Function_21da864(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = a2;
  NNS_G2dInitImageProxy((int)(a1 + 6));
  Function_200718c(v5, 9u, 1, 0, 0, 1, 40192, 10, (int)(v4 + 6));
  v6 = Function_21d77d0(v4[17]);
  Function_21d783c((int)&v10, (int)(v4 + 6), v6, v4[4], v4[5], 2);
  v7 = Function_21d7820(v4[17]);
  v8 = Function_21d785c(*v4, (int)&v10, v7 + 183, 176, 44, 1);
  v4[1] = v8;
  return Function_2021e90(v8, 1);
}

//----- (021DA8D8) --------------------------------------------------------
int __fastcall Function_21da8d8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 )
  {
    free(v2);
    *(uint *)(v1 + 8) = 0;
  }
  result = *(uint *)(v1 + 12);
  if ( result )
  {
    free(result);
    result = 0;
    *(uint *)(v1 + 12) = 0;
  }
  return result;
}

//----- (021DA8FC) --------------------------------------------------------
int __fastcall Function_21da8fc(int result, int a2)
{
  switch ( a2 )
  {
    case 0:
      return Function_2021d6c(*(uint *)(result + 4), 0);
    case 1:
      return Function_2021d6c(*(uint *)(result + 4), 1u);
    case 2:
      result = Function_2021d6c(*(uint *)(result + 4), 2u);
      break;
  }
  return result;
}

//----- (021DA92C) --------------------------------------------------------
int __fastcall Function_21da92c(uint *a1, int a2, int a3, int a4, int a5, ushort **a6, int a7)
{
  int v7;
  uint *v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  uint *v16;

  v7 = a3;
  v8 = a1;
  v9 = a2;
  v10 = a4;
  if ( Function_21d5e08(a3) == 4 )
  {
    *v8 = 0;
    result = 1;
  }
  else
  {
    v8[5] = v9;
    v8[2] = v10;
    v8[4] = v7;
    v8[3] = a5;
    v8[1] = 0;
    v8[19] = 0;
    v8[9] = 0;
    v8[8] = Function_21d7818(v9);
    v8[6] = Function_200c440(9, 6, 15, 0xAu);
    v8[7] = Function_200c440(1, 2, 15, 0xAu);
    v8[10] = Function_2007204(a7, 0x10u, 1, v8 + 11, 10);
    v8[12] = 0;
    v8[17] = Function_200b1ec_CallMsgDecrypt(a6, 0x15u);
    v8[18] = Function_200b1ec_CallMsgDecrypt(a6, 0x16u);
    v12 = Function_207c944();
    v13 = Function_207c924();
    v14 = Function_2006fa0(v12, v13, 1, v8 + 14, 10);
    v15 = 0;
    v8[13] = v14;
    v16 = v8;
    do
    {
      ++v15;
      v16[15] = 0;
      ++v16;
    }
    while ( v15 < 2 );
    result = 1;
    *v8 = 1;
  }
  return result;
}

//----- (021DA9E0) --------------------------------------------------------
int __fastcall Function_21da9e0(int *a1, int a2)
{
  int *v2;
  int result;
  int v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int v9;
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int v16;

  v2 = a1;
  result = *a1;
  if ( result )
  {
    if ( v2[1] )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        Function_201a8fc(v2[1] + v5);
        ++v4;
        v5 += 16;
      }
      while ( v4 < 4 );
      free(v2[1]);
      v2[1] = 0;
    }
    v6 = (int *)v2[6];
    if ( v6 )
      Function_200c560(v6);
    v7 = (int *)v2[7];
    if ( v7 )
      Function_200c560(v7);
    v8 = v2[17];
    if ( v8 )
      Function_20237bc_FreeMsg(v8, a2);
    v9 = v2[18];
    if ( v9 )
      Function_20237bc_FreeMsg(v9, a2);
    v10 = (uint *)v2[9];
    if ( v10 )
    {
      Function_2007dc8(v10);
      v2[9] = 0;
    }
    v11 = v2[10];
    if ( v11 )
      free(v11);
    v12 = v2[12];
    if ( v12 )
      Function_2021bd4(v12);
    v13 = v2[13];
    if ( v13 )
      free(v13);
    v14 = 0;
    v15 = v2;
    do
    {
      v16 = v15[15];
      if ( v16 )
        Function_2021bd4(v16);
      ++v14;
      ++v15;
    }
    while ( v14 < 2 );
    result = Function_21dac90(v2);
  }
  return result;
}

//----- (021DAA80) --------------------------------------------------------
uint *__fastcall Function_21daa80(uint *result)
{
  if ( *result )
    result = (uint *)Function_2008a94(result[8]);
  return result;
}

//----- (021DAA90) --------------------------------------------------------
int __fastcall Function_21daa90(int a1)
{
  int v1;
  int result;
  char v3;

  v1 = a1;
  Function_2075fb4((int)&v3, 1, 0, 0, 0, 0, 0);
  result = Function_2007c34(*(uint **)(v1 + 32), &v3, 44, 84, 0, 0, 0, 0);
  *(uint *)(v1 + 36) = result;
  return result;
}

//----- (021DAAC4) --------------------------------------------------------
int __fastcall Function_21daac4(int a1)
{
  int v1;
  uint *v2;
  int result;

  v1 = a1;
  v2 = *(uint **)(a1 + 36);
  if ( !v2 )
    return 1;
  Function_2007dc8(v2);
  result = 0;
  *(uint *)(v1 + 36) = 0;
  return result;
}

//----- (021DAADC) --------------------------------------------------------
int __fastcall Function_21daadc(int *a1)
{
  int *v1;
  int result;
  int v3;
  int v4;
  uchar *v5;
  int v6;
  int v7;

  v1 = a1;
  result = *a1;
  if ( result )
  {
    v3 = Function_201a778(0xAu, 4);
    v1[1] = v3;
    if ( v3 )
    {
      v4 = 0;
      v5 = (uchar *)dword_21E01D8;
      v6 = 0;
      do
      {
        Function_201a8d4((uint *)v1[2], v1[1] + v6, v5);
        v7 = v1[1];
        if ( v4 == 3 )
          Function_201aa10(v7 + v6, 12, 2);
        else
          Function_201a9f4(v7 + v6);
        ++v4;
        v5 += 8;
        v6 += 16;
      }
      while ( v4 < 4 );
      Function_2019448((uint *)v1[2], 2u);
    }
    Function_21dab44(v1);
    result = Function_21dac4c(v1);
  }
  return result;
}

//----- (021DAB44) --------------------------------------------------------
int __fastcall Function_21dab44(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int result;
  uint v13;
  int v14;
  int v15;
  char v16;
  char v17;
  int v18;

  v18 = a4;
  v4 = a1;
  v15 = Function_207c944();
  v14 = Function_207c908(2u);
  v5 = Function_207c920();
  Call_LoadFromNARC_RLCN(v15, v5, 1u, 320, 96, 10);
  v13 = 0;
  v6 = 1504;
  v7 = 24;
  v8 = v4;
  do
  {
    NNS_G2dInitImageProxy((int)&v17);
    Function_2006f28(v15, v14, 1, 0, 0, 1, 32 * v6, 10, (int)&v17);
    v9 = Function_21d77d0(v4[5]);
    Function_21d783c((int)&v16, (int)&v17, v9, v4[14], 0, 3);
    v10 = Function_21d785c(v4[3], (int)&v16, v7, 176, 46, 1);
    v8[15] = v10;
    if ( !v10 )
      ErrorHandler();
    Function_2021cac(v8[15], 0);
    v6 += 8;
    v7 += 36;
    ++v8;
    ++v13;
  }
  while ( v13 < 2 );
  NNS_G2dInitImageProxy((int)&v17);
  Function_2006f00(18, 15, 1, 0, 0, 1, 47360, 10, (int)&v17);
  v11 = Function_21d77d0(v4[5]);
  Function_21d783c((int)&v16, (int)&v17, v11, v4[11], 0, 3);
  result = Function_21d785c(v4[3], (int)&v16, 56, 176, 47, 1);
  v4[12] = result;
  return result;
}

//----- (021DAC4C) --------------------------------------------------------
uint *__fastcall Function_21dac4c(int a1)
{
  int v1;
  uint *result;
  int v3;
  short v4;

  v1 = a1;
  result = *(uint **)(a1 + 76);
  if ( !result )
  {
    v3 = malloc(0xAu, 12);
    if ( v3 )
    {
      if ( *(uchar *)(Function_21d5e70(*(uint *)(v1 + 16)) + 15) )
        v4 = 4;
      else
        v4 = 0;
      *(ushort *)v3 = v4;
      *(uint *)(v3 + 8) = v1;
      result = AddTaskToTaskList1((int)Function_21dacf8, v3, 1u);
      *(uint *)(v1 + 76) = result;
    }
    else
    {
      result = (uint *)ErrorHandler();
    }
  }
  return result;
}

//----- (021DAC90) --------------------------------------------------------
int __fastcall Function_21dac90(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = *(uint *)(a1 + 76);
  if ( result )
  {
    v3 = Function_201ced0(result);
    free(v3);
    Call_RemoveTaskFromTaskList(*(int **)(v1 + 76));
    result = 0;
    *(uint *)(v1 + 76) = 0;
  }
  return result;
}

//----- (021DACB0) --------------------------------------------------------
int __fastcall Function_21dacb0(int a1)
{
  int v1;
  int result;
  short *v3;
  short v4;

  v1 = a1;
  result = Function_201ced0(*(uint *)(a1 + 76));
  v3 = (short *)result;
  if ( result )
  {
    if ( *(uchar *)(Function_21d5e70(*(uint *)(v1 + 16)) + 15) )
      v4 = 4;
    else
      v4 = 0;
    *v3 = v4;
    result = Function_21dae10(v1);
  }
  return result;
}

//----- (021DACDC) --------------------------------------------------------
ushort *__fastcall Function_21dacdc(int a1)
{
  int v1;
  ushort *result;

  v1 = a1;
  result = (ushort *)Function_201ced0(*(uint *)(a1 + 76));
  if ( result )
  {
    *result = 4;
    result = (ushort *)Function_21dae10(v1);
  }
  return result;
}

//----- (021DACF8) --------------------------------------------------------
uint __fastcall Function_21dacf8(int a1, ushort *a2)
{
  ushort *v2;
  uint result;
  int v4;

  v2 = a2;
  result = *a2;
  v4 = *((uint *)a2 + 2);
  switch ( (uchar)result )
  {
    case 0:
      result = Function_21d5e4c(*(uint *)(v4 + 16));
      if ( result )
      {
        v2[1] = 0;
        *v2 = 1;
        goto LABEL_4;
      }
      break;
    case 1:
LABEL_4:
      Function_21dae60(*(uint *)(v4 + 4) + 48, v4, (ushort)v2[1], 0);
      Function_201accc(*(uint *)(v4 + 4) + 48);
      v2[2] = 0;
      result = 2;
      *v2 = 2;
      break;
    case 2:
      result = *(uchar *)(Function_21d5e70(*(uint *)(v4 + 16)) + 15);
      if ( !result )
      {
        result = (ushort)++v2[2];
        if ( result > 0x50 )
        {
          Function_21dae2c(v2);
          v2[2] = 0;
          v2[3] = 0;
          result = 3;
          *v2 = 3;
        }
      }
      break;
    case 3:
      a2[3] += 4;
      Function_21dadcc(v4, 0x4000);
      Function_201c04c(*(uint *)(v4 + 4) + 48, 0, 4, 0);
      Function_201accc(*(uint *)(v4 + 4) + 48);
      result = (ushort)v2[3];
      if ( result >= 0x10 )
      {
        if ( v2[1] == 1 )
          Function_21dae10(v4);
        if ( (ushort)++v2[1] >= 4u )
          v2[1] = 0;
        v2[3] = 0;
        v2[2] = 0;
        result = 2;
        *v2 = 2;
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DADCC) --------------------------------------------------------
int __fastcall Function_21dadcc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    v5 = *(uint *)(v2 + 60);
    Function_2021d28();
    v7 = v6[1];
    v9 = *v6;
    v10 = v7;
    v11 = v6[2];
    v10 = v7 - v3;
    result = Function_2021c50(*(uint **)(v2 + 60), &v9);
    if ( !v4 )
      result = Function_2021d34(*(uint *)(v2 + 60));
    ++v4;
    v2 += 4;
  }
  while ( v4 < 2 );
  return result;
}

//----- (021DAE10) --------------------------------------------------------
uint __fastcall Function_21dae10(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = Function_2021cac(*(uint *)(v2 + 60), 0);
    ++v1;
    v2 += 4;
  }
  while ( v1 < 2 );
  return result;
}

//----- (021DAE2C) --------------------------------------------------------
int __fastcall Function_21dae2c(int a1)
{
  int v1;
  int v2;
  uint v3;

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 8) + 4) + 48;
  Function_201ada4_ClearTextBox(v2, 0);
  Function_21dae60(v2, *(uint *)(v1 + 8), *(ushort *)(v1 + 2), 0);
  v3 = *(ushort *)(v1 + 2) + 1;
  if ( v3 >= 4 )
    v3 = 0;
  return Function_21dae60(v2, *(uint *)(v1 + 8), v3, 1);
}

//----- (021DAE60) --------------------------------------------------------
int __fastcall Function_21dae60(int result, uint *a2, uint a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  char v14;
  uint v15;
  int v16;
  int v17;
  char v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v22 = a4;
  v4 = a2;
  v5 = 16 * a4;
  if ( a3 <= 3 )
    JUMPOUT(__CS__, (char *)&off_21DAE7A + *((short *)&off_21DAE7A + a3) + 2);
  switch ( (uchar)a2 )
  {
    case 0:
      v6 = *(uint *)(a2[4] + 104);
      goto LABEL_10;
    case 1:
      Function_207c944();
      Function_207c908(*(uchar *)(v4[4] + 88));
      v9 = Function_207c944();
      v10 = Function_207c908(*(uchar *)(v4[4] + 88));
      Function_2006ec0(v9, v10, 0, 48128, 0, 1, 10);
      v11 = v4[15];
      Function_2021d28();
      v13 = v12[1];
      v19 = *v12;
      v20 = v13;
      v21 = v12[2];
      v20 = (v5 + 176) << 12;
      Function_2021c50((uint *)v4[15], &v19);
      v14 = Function_207c92c(*(uchar *)(v4[4] + 88));
      Function_2021e90(v4[15], v14 + 10);
      Function_2021cac(v4[15], 1);
      v15 = *(uchar *)(v4[4] + 89);
      if ( *(uchar *)(v4[4] + 88) == v15 )
        return Function_2021cac(v4[16], 0);
      v16 = Function_207c944();
      v17 = Function_207c908(v15);
      Function_2006ec0(v16, v17, 0, 48384, 0, 1, 10);
      v19 += 147456;
      Function_2021c50((uint *)v4[16], &v19);
      v18 = Function_207c92c(*(uchar *)(v4[4] + 89));
      Function_2021e90(v4[16], v18 + 10);
      return Function_2021cac(v4[16], 1);
    case 2:
      v7 = *(uint *)(a2[4] + 108);
      goto LABEL_10;
    case 3:
      v8 = *(uint *)(a2[4] + 112);
LABEL_10:
      result = Function_201d78c(result, 0);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DAF98) --------------------------------------------------------
int *__fastcall Function_21daf98(int **a1)
{
  int **v1;
  int *result;

  v1 = a1;
  result = *a1;
  if ( result )
  {
    Function_201ada4_ClearTextBox((int)v1[1], 15);
    Function_201ada4_ClearTextBox((int)(v1[1] + 4), 15);
    Function_201ada4_ClearTextBox((int)(v1[1] + 8), 15);
    Function_201ada4_ClearTextBox((int)(v1[1] + 12), 0);
    if ( Function_21d5e4c((int)v1[4]) )
      Function_21db0e4(v1);
    Function_201accc((int)v1[1]);
    Function_201accc((int)(v1[1] + 4));
    Function_201accc((int)(v1[1] + 8));
    result = Function_201accc((int)(v1[1] + 12));
  }
  return result;
}

//----- (021DAFF8) --------------------------------------------------------
int __fastcall Function_21daff8(int *a1)
{
  int *v1;
  int result;
  uint *v3;

  v1 = a1;
  result = *a1;
  if ( result )
  {
    Function_201ada4_ClearTextBox(v1[1], 15);
    Function_201ada4_ClearTextBox(v1[1] + 16, 15);
    Function_201ada4_ClearTextBox(v1[1] + 32, 15);
    Function_201ada4_ClearTextBox(v1[1] + 48, 0);
    v3 = (uint *)v1[9];
    if ( v3 )
    {
      Function_2007dc8(v3);
      v1[9] = 0;
    }
    if ( Function_21d5e4c(v1[4]) )
      Function_21db0e4(v1);
    else
      Function_21db24c(v1, 0);
    Function_201accc(v1[1]);
    Function_201accc(v1[1] + 16);
    Function_201accc(v1[1] + 32);
    Function_201accc(v1[1] + 48);
    result = Function_21dacb0((int)v1);
  }
  return result;
}

//----- (021DB078) --------------------------------------------------------
ushort *__fastcall Function_21db078(uint *a1)
{
  int v1;
  ushort *result;
  uint *v3;

  v1 = (int)a1;
  result = (ushort *)*a1;
  if ( result )
  {
    Function_201ada4_ClearTextBox(*(uint *)(v1 + 4), 15);
    Function_201ada4_ClearTextBox(*(uint *)(v1 + 4) + 16, 15);
    Function_201ada4_ClearTextBox(*(uint *)(v1 + 4) + 32, 15);
    Function_201ada4_ClearTextBox(*(uint *)(v1 + 4) + 48, 0);
    v3 = *(uint **)(v1 + 36);
    if ( v3 )
    {
      Function_2007dc8(v3);
      *(uint *)(v1 + 36) = 0;
    }
    Function_21db24c(v1, 0);
    Function_201accc(*(uint *)(v1 + 4));
    Function_201accc(*(uint *)(v1 + 4) + 16);
    Function_201accc(*(uint *)(v1 + 4) + 32);
    Function_201accc(*(uint *)(v1 + 4) + 48);
    result = Function_21dacdc(v1);
  }
  return result;
}

//----- (021DB0E4) --------------------------------------------------------
int __fastcall Function_21db0e4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = Function_21d5e70(*(uint *)(a1 + 16));
  v6 = *(uint *)(v5 + 24);
  Function_201d78c(*(uint *)(v4 + 4), 0);
  v7 = *(uint *)(v5 + 20);
  Function_201d78c(*(uint *)(v4 + 4) + 32, 0);
  v8 = *(uint *)(v5 + 20);
  Function_201d78c(*(uint *)(v4 + 4) + 32, 0);
  if ( *(uchar *)(v5 + 14) )
  {
    if ( *(uchar *)(v5 + 14) == 1 )
    {
      v10 = *(uint *)(v4 + 72);
      Function_201d78c(*(uint *)(v4 + 4) + 32, 0);
    }
  }
  else
  {
    v9 = *(uint *)(v4 + 68);
    Function_201d78c(*(uint *)(v4 + 4) + 32, 0);
  }
  if ( !*(uchar *)(v5 + 15) )
  {
    v11 = *(uint *)(v5 + 28);
    Function_201d78c(*(uint *)(v4 + 4) + 48, 0);
    if ( *(ushort *)(v5 + 8) )
      Function_200c648(*(uint *)(v4 + 24), 2, *(ushort *)(v5 + 8), 3, 2, *(uint *)(v4 + 4) + 16, 0, 0);
    Function_200c648(*(uint *)(v4 + 28), 1, *(uchar *)(v5 + 10), 3, 1, *(uint *)(v4 + 4) + 32, 0, 0x10u);
  }
  Function_2075f0c((int)&v13, *(uint *)v5, 2u, 0);
  *(uint *)(v4 + 36) = Function_2007c34(*(uint **)(v4 + 32), &v13, 44, 84, 0, 0, 0, 0);
  return Function_21db24c(v4, *(uchar *)(v5 + 11));
}

//----- (021DB220) --------------------------------------------------------
int Function_21db220()
{
  return 1;
}

//----- (021DB224) --------------------------------------------------------
int __fastcall Function_21db224(int *a1)
{
  int *v1;
  int result;
  int v3;

  v1 = a1;
  result = *a1;
  if ( result )
  {
    result = Function_21d5e4c(v1[4]);
    if ( result )
    {
      v3 = Function_21d5e70(v1[4]);
      result = Function_21db24c(v1, *(uchar *)(v3 + 11));
    }
  }
  return result;
}

//----- (021DB24C) --------------------------------------------------------
int __fastcall Function_21db24c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;

  v7 = a1;
  v2 = a2;
  v3 = Function_2019fe4(*(uint *)(a1 + 8), 2);
  v4 = v3;
  v5 = 0;
  do
  {
    if ( (1 << v5) & v2 )
      *(ushort *)(v4 + 1224) = (v5 + 152) | 0x2000;
    else
      *(ushort *)(v4 + 1224) = (v5 + 132) | 0x2000;
    ++v5;
    v4 += 2;
  }
  while ( v5 < 6 );
  return Function_2019460(*(uint **)(v7 + 8), 2u, (int *)(v3 + 1224), 12, 612);
}

//----- (021DB2B0) --------------------------------------------------------
int __fastcall Function_21db2b0(int *a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = (int)a1;
  result = *a1;
  if ( result )
  {
    v3 = Function_21d5e70(*(uint *)(v1 + 16));
    Function_201ada4_ClearTextBox(*(uint *)(v1 + 4) + 48, 0);
    if ( !*(uchar *)(v3 + 15) )
    {
      v4 = *(uint *)(v3 + 28);
      Function_201d78c(*(uint *)(v1 + 4) + 48, 0);
    }
    result = Function_21dacb0(v1);
  }
  return result;
}

//----- (021DB2FC) --------------------------------------------------------
BOOL __fastcall Function_21db2fc(uint *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  uint *v9;
  int v10;

  v9 = a1;
  a1[3] = a2;
  *a1 = a4;
  a1[2] = a3;
  a1[11] = a7;
  a1[8] = a8;
  a1[4] = a6;
  a1[5] = LoadFromMsgNARC(0, 26, 18, 0xAu);
  v9[12] = Function_2023790(64, 0xAu);
  v9[13] = Function_2023790(64, 0xAu);
  *((ushort *)v9 + 14) = 0;
  *((ushort *)v9 + 15) = 0;
  v9[6] = 0;
  v10 = Function_20071b4(a9, 0x19u, 1, v9 + 10, 10);
  v9[9] = v10;
  return v10 && v9[12] && v9[13];
}

//----- (021DB370) --------------------------------------------------------
int __fastcall Function_21db370(uint *a1)
{
  uint *v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;

  v1 = a1;
  result = a1[6];
  if ( result )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      Function_201a8fc(v1[6] + v4);
      ++v3;
      v4 += 16;
    }
    while ( v3 < 2 );
    v6 = v1[9];
    if ( v6 )
      free(v6);
    v7 = (ushort *)v1[5];
    if ( v7 )
      Function_200b190(v7);
    v8 = v1[12];
    if ( v8 )
      Function_20237bc_FreeMsg(v8, v5);
    v9 = v1[13];
    if ( v9 )
      Function_20237bc_FreeMsg(v9, v5);
    free(v1[6]);
    result = 0;
    v1[6] = 0;
  }
  return result;
}

//----- (021DB3C4) --------------------------------------------------------
int __fastcall Function_21db3c4(int a1)
{
  int v1;
  int v2;
  int v3;
  uchar *v4;
  int v5;

  v1 = a1;
  v2 = Function_201a778(0xAu, 2);
  *(uint *)(v1 + 24) = v2;
  if ( v2 )
  {
    v3 = 0;
    v4 = (uchar *)dword_21E01F8;
    v5 = 0;
    do
    {
      Function_201a8d4(*(uint **)v1, *(uint *)(v1 + 24) + v5, v4);
      ++v3;
      v4 += 8;
      v5 += 16;
    }
    while ( v3 < 2 );
  }
  LoadFromNARC_RGCN(38, 0, *(uint **)v1, 1u, 512, 0, 0, 10);
  Call_LoadFromNARC_RLCN(38, 24, 0, 224, 32, 10);
  return Function_200dd0c(*(uint **)v1, 1u, 521, 8, *(uint *)(v1 + 32), 10);
}

//----- (021DB448) --------------------------------------------------------
int __fastcall Function_21db448(int a1, uint a2)
{
  int v2;
  uint v3;
  uchar *v4;
  int v5;
  int result;

  v2 = a1;
  v3 = a2;
  Function_201a9f4(*(uint *)(a1 + 24));
  v4 = *(uchar **)(v2 + 24);
  Function_21db4b4(*(uint *)v2, v4[4], v4[5], v4[6], v4[7], v4[8]);
  Function_201ada4_ClearTextBox(*(uint *)(v2 + 24), 15);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 16), v3, *(ushort **)(v2 + 48));
  Function_200c388(*(uint **)(v2 + 44), *(uint *)(v2 + 52), *(uint *)(v2 + 48));
  v5 = *(uint *)(v2 + 52);
  Function_201d738_CallInitTextInterpreter(*(uint *)(v2 + 24), 1);
  Function_201accc(*(uint *)(v2 + 24));
  Function_2019448(*(uint **)v2, 1u);
  result = 1;
  *(ushort *)(v2 + 28) = 1;
  return result;
}

//----- (021DB4B4) --------------------------------------------------------
int __fastcall Function_21db4b4(int a1, uchar a2, int a3, int a4, uint a5, uint a6)
{
  ushort *v6;
  uint v7;
  ushort *v8;
  ushort *v9;
  int v10;
  ushort *v11;
  uint v12;
  ushort *v13;
  uint v14;
  ushort *v15;
  ushort *v16;
  int result;

  v6 = (ushort *)(Function_2019fe4(a1, a2) + 2 * (a3 - 2 + 32 * (a4 - 1)));
  *v6 = -32247;
  v7 = 0;
  v6[1] = -32246;
  if ( a5 )
  {
    v8 = v6;
    do
    {
      ++v7;
      v8[2] = -32245;
      ++v8;
    }
    while ( v7 < a5 );
  }
  v9 = &v6[a5];
  v10 = a5;
  v9[2] = -32244;
  v9[3] = -32243;
  v9[4] = -32242;
  v11 = v6 + 32;
  v12 = 0;
  if ( a6 )
  {
    v13 = &v11[v10];
    do
    {
      *v11 = -32241;
      v11[1] = -32240;
      ++v12;
      v13[2] = -32238;
      v13[3] = -32237;
      v11 += 32;
      v13[4] = -32236;
      v13 += 32;
    }
    while ( v12 < a6 );
  }
  v14 = 0;
  *v11 = -32235;
  v11[1] = -32234;
  if ( a5 )
  {
    v15 = v11;
    do
    {
      ++v14;
      v15[2] = -32233;
      ++v15;
    }
    while ( v14 < a5 );
  }
  v16 = &v11[v10];
  v16[2] = -32232;
  v16[3] = -32231;
  result = 33306;
  v16[4] = -32230;
  return result;
}

//----- (021DB57C) --------------------------------------------------------
int __fastcall Function_21db57c(int a1, int a2)
{
  int v2;
  uint v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v2 = a1;
  v13 = a2;
  if ( *(ushort *)(a1 + 30) )
    Function_21db84c(*(uint *)a1, *(uint *)(a1 + 24) + 16);
  v14 = *(uint *)(v2 + 24) + 16;
  Function_201ada4_ClearTextBox(v14, 15);
  v3 = 0;
  v4 = 16 * (8 - *(uchar *)(v13 + 33));
  if ( *(uchar *)(v13 + 33) )
  {
    v5 = (int *)v13;
    do
    {
      v6 = *v5;
      if ( *v5 < 56 || v6 > 61 )
      {
        Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 20), v6 + 24, *(ushort **)(v2 + 48));
        v9 = v4;
        v10 = 255;
        v11 = 723983;
        v12 = 0;
        v7 = *(uint *)(v2 + 48);
        Function_201d78c(v14, 0);
      }
      else
      {
        Function_21db638(v2, v14, *(uchar *)(v13 + 34), v6 - 56, v9, v10, v11, v12);
      }
      ++v3;
      v4 += 16;
      ++v5;
    }
    while ( v3 < *(uchar *)(v13 + 33) );
  }
  Function_21db748(v2, v13);
  Function_21db684(v2, *(uchar *)(v13 + 33));
  Function_201accc(v14);
  Function_2019448(*(uint **)v2, 1u);
  result = 1;
  *(ushort *)(v2 + 30) = 1;
  return result;
}

//----- (021DB638) --------------------------------------------------------
int __fastcall Function_21db638(int a1, int a2, int a3, int a4)
{
  ushort v4;

  if ( (1 << a4) & a3 )
    v4 = 0;
  else
    v4 = 8;
  return Function_201ae08(
           a2,
           *(uint *)(*(uint *)(a1 + 40) + 20),
           8 * a4 & 0xFFFF,
           v4,
           48,
           16,
           0x2Cu,
           16 * a4 + 4,
           8u,
           8u,
           0xFFu);
}

//----- (021DB684) --------------------------------------------------------
int __fastcall Function_21db684(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint v7;
  uint v8;
  uint v9;
  ushort *v10;
  int *v12;

  v12 = a1;
  v2 = a2;
  v3 = Function_2019fe4(*a1, 1);
  v4 = 8 - v2;
  v5 = v3 + 230 + ((8 - v2) << 7);
  v6 = 24 * (8 - v2) + 593;
  v7 = 0;
  v8 = 2 * v2;
  if ( 2 * v2 )
  {
    do
    {
      v9 = 0;
      v10 = (ushort *)v5;
      do
      {
        *v10 = v6 | 0x4000;
        ++v9;
        ++v6;
        ++v10;
      }
      while ( v9 < 0xC );
      ++v7;
      v5 += 64;
    }
    while ( v7 < v8 );
  }
  return Function_21db7bc(*v12, 1, 19, 2 * v4 + 3, 12, v8);
}

//----- (021DB6F0) --------------------------------------------------------
int __fastcall Function_21db6f0(uint **a1)
{
  uint **v1;

  v1 = a1;
  if ( *((ushort *)a1 + 14) )
  {
    Function_21db898(*a1, a1[6]);
    *((ushort *)v1 + 14) = 0;
  }
  if ( *((ushort *)v1 + 15) )
  {
    Function_21db84c(*v1, v1[6] + 4);
    *((ushort *)v1 + 15) = 0;
  }
  return Function_2019448(*v1, 1u);
}

//----- (021DB724) --------------------------------------------------------
int __fastcall Function_21db724(int a1)
{
  int v1;

  v1 = a1;
  if ( *(ushort *)(a1 + 30) )
  {
    Function_21db84c(*(uint *)a1, *(uint *)(a1 + 24) + 16);
    *(ushort *)(v1 + 30) = 0;
  }
  return Function_2019448(*(uint **)v1, 1u);
}

//----- (021DB748) --------------------------------------------------------
int *__fastcall Function_21db748(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = *(uchar *)(a2 + 33);
  v4 = *(uint *)(a1 + 24) + 16;
  v5 = 16 * (8 - v3);
  Function_201ae78(v4, 15, 0, 16 * (8 - v3) & 0xFFFF, 0xAu, 16 * v3);
  Function_2002180(v4, 0, v5 + 16 * *(uchar *)(v2 + 32));
  return Function_201accc(v4);
}

//----- (021DB790) --------------------------------------------------------
int *__fastcall Function_21db790(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 24) + 16;
  v5 = 0;
  do
    Function_21db638(v2, v4, *(uchar *)(v3 + 34), v5++);
  while ( v5 < 6 );
  return Function_201accc(v4);
}

//----- (021DB7BC) --------------------------------------------------------
int __fastcall Function_21db7bc(int a1, uchar a2, int a3, int a4, uint a5, uint a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  int v14;
  ushort *v15;
  uint v16;
  int v17;
  uint v18;
  ushort *v19;
  int result;

  v6 = a4;
  v7 = a3;
  v8 = Function_2019fe4(a1, a2);
  v9 = 2 * (v7 - 1 + 32 * (v6 - 1));
  *(ushort *)(v8 + v9) = 29184;
  v10 = v8 + v9;
  v11 = 0;
  if ( a5 )
  {
    v12 = v8 + v9;
    do
    {
      ++v11;
      *(ushort *)(v12 + 2) = 29185;
      v12 += 2;
    }
    while ( v11 < a5 );
  }
  v13 = a5;
  v14 = v10 + 2 * a5;
  v15 = (ushort *)(v10 + 64);
  v16 = 0;
  *(ushort *)(v14 + 2) = 29186;
  if ( a6 )
  {
    v17 = (int)&v15[v13];
    do
    {
      *v15 = 29187;
      *(ushort *)(v17 + 2) = 29189;
      ++v16;
      v17 += 64;
      v15 += 32;
    }
    while ( v16 < a6 );
  }
  v18 = 0;
  *v15 = 29190;
  if ( a5 )
  {
    v19 = v15;
    do
    {
      ++v18;
      v19[1] = 29191;
      ++v19;
    }
    while ( v18 < a5 );
  }
  result = (int)&v15[v13];
  *(ushort *)(result + 2) = 29192;
  return result;
}

//----- (021DB84C) --------------------------------------------------------
int __fastcall Function_21db84c(int a1, uchar *a2)
{
  uchar *v2;
  uint v3;
  int v4;
  int result;
  uint v6;
  ushort *v7;

  v2 = a2;
  v3 = 0;
  v4 = Function_2019fe4(a1, a2[4]) + 2 * (v2[5] - 1 + 32 * (v2[6] - 1));
  result = v2[8] + 2;
  if ( v2[8] != -2 )
  {
    result = 0;
    do
    {
      v6 = 0;
      if ( v2[7] != -2 )
      {
        v7 = (ushort *)v4;
        do
        {
          *v7 = 0;
          ++v6;
          ++v7;
        }
        while ( v6 < (uint)v2[7] + 2 );
      }
      ++v3;
      v4 += 64;
    }
    while ( v3 < (uint)v2[8] + 2 );
  }
  return result;
}

//----- (021DB898) --------------------------------------------------------
int __fastcall Function_21db898(int a1, uchar *a2)
{
  uchar *v2;
  uint v3;
  int v4;
  int result;
  uint v6;
  ushort *v7;

  v2 = a2;
  v3 = 0;
  v4 = Function_2019fe4(a1, a2[4]) + 2 * (v2[5] - 2 + 32 * (v2[6] - 1));
  result = v2[8] + 2;
  if ( v2[8] != -2 )
  {
    result = 0;
    do
    {
      v6 = 0;
      if ( v2[7] != -5 )
      {
        v7 = (ushort *)v4;
        do
        {
          *v7 = 0;
          ++v6;
          ++v7;
        }
        while ( v6 < (uint)v2[7] + 5 );
      }
      ++v3;
      v4 += 64;
    }
    while ( v3 < (uint)v2[8] + 2 );
  }
  return result;
}

//----- (021DB8E4) --------------------------------------------------------
BOOL __fastcall Function_21db8e4(ushort *a1, int a2, int a3, uint *a4, int a5, int a6)
{
  ushort *v6;
  int v7;
  short v8;
  int v9;
  short v10;
  int v11;
  int v12;
  ushort *v13;
  int v14;
  ushort *v15;
  int v16;
  int v18;
  uint *v19;

  v19 = a4;
  v6 = a1;
  *(uint *)a1 = a2;
  *((uint *)a1 + 1) = a4;
  *((uint *)a1 + 3) = a3;
  *((uint *)a1 + 2) = a5;
  Function_20070e8(a6, 4u, a4, 1u, 0, 0, 1, 10);
  v7 = Function_20071ec(a6, 0x1Bu, &v18, 10);
  MIi_CpuCopy16(*(uint *)(v18 + 12), (int)(v6 + 114), 64, v8);
  free(v7);
  v9 = Function_20071ec(a6, 0x14u, &v18, 10);
  MIi_CpuCopy16(*(uint *)(v18 + 12), (int)(v6 + 146), 32, v10);
  free(v9);
  v11 = 0x10000;
  v12 = 7;
  v13 = v6 + 450;
  do
  {
    Function_21d78c8(v6 + 114, v13, 48, 0x7FFF, v11 >> 12);
    --v12;
    v11 -= 9362;
    v13 -= 48;
  }
  while ( v12 >= 1 );
  DC_FlushRange((int)(v6 + 114), 768);
  GX_LoadOBJPltt((int)(v6 + 450), 416, 0x60u);
  GXS_LoadOBJPltt((int)(v6 + 114), 416, 0x60u);
  *((uint *)v6 + 5) = Function_20071b4(a6, 0x11u, 1, (uint *)v6 + 6, 10);
  *((uint *)v6 + 7) = Function_2007204(a6, 0x12u, 1, (uint *)v6 + 8, 10);
  *((uint *)v6 + 13) = Function_20071d0(a6, 2u, 1, (uint *)v6 + 14, 10);
  *((uint *)v6 + 11) = Function_20071d0(a6, 3u, 1, (uint *)v6 + 12, 10);
  *((uint *)v6 + 17) = Function_200c440(2, 13, 4, 0xAu);
  *((uint *)v6 + 4863) = Function_2023790(500, 0xAu);
  *((uint *)v6 + 4) = 0;
  *((uint *)v6 + 15) = *(uint *)(*((uint *)v6 + 6) + 20);
  v6[32] = 32;
  v6[33] = 32;
  v14 = LoadFromMsgNARC(1, 26, 391, 0xAu);
  v15 = v6;
  *((uint *)v6 + 4862) = v14;
  v16 = 0;
  do
  {
    ++v16;
    *((uint *)v15 + 18) = 0;
    v15 += 2;
  }
  while ( v16 < 18 );
  return *((uint *)v6 + 5)
      && *((uint *)v6 + 7)
      && *((uint *)v6 + 11)
      && *((uint *)v6 + 13)
      && *((uint *)v6 + 17)
      && *((uint *)v6 + 4863);
}

//----- (021DBA9C) --------------------------------------------------------
int __fastcall Function_21dba9c(int a1)
{
  int v1;
  int result;
  uint v3;
  uchar *v4;
  int v5;

  v1 = a1;
  result = Function_201a778(0xAu, 3);
  *(uint *)(v1 + 16) = result;
  if ( result )
  {
    v3 = 0;
    v4 = (uchar *)dword_21E0210;
    v5 = 0;
    do
    {
      result = Function_201a8d4(*(uint **)(v1 + 4), *(uint *)(v1 + 16) + v5, v4);
      ++v3;
      v4 += 8;
      v5 += 16;
    }
    while ( v3 < 3 );
  }
  return result;
}

//----- (021DBAD0) --------------------------------------------------------
uint __fastcall Function_21dbad0(int a1, int a2)
{
  int *v2;
  ushort *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  uint result;
  int v11;
  int v12;

  v2 = (int *)a1;
  v3 = *(ushort **)(a1 + 19448);
  if ( v3 )
    Function_200b190(v3);
  v4 = v2[5];
  if ( v4 )
    free(v4);
  v5 = v2[7];
  if ( v5 )
    free(v5);
  v6 = v2[11];
  if ( v6 )
    free(v6);
  v7 = v2[13];
  if ( v7 )
    free(v7);
  v8 = (int *)v2[17];
  if ( v8 )
    Function_200c560(v8);
  v9 = v2[4863];
  if ( v9 )
    Function_20237bc_FreeMsg(v9, a2);
  result = v2[4];
  if ( result )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      Function_201a8fc(v2[4] + v12);
      ++v11;
      v12 += 16;
    }
    while ( v11 < 3 );
    result = free(v2[4]);
  }
  return result;
}

//----- (021DBB48) --------------------------------------------------------
int __fastcall Function_21dbb48(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 224) = Function_21d5ea8(*(uint *)(a1 + 12));
  Function_21dbdf4(v1);
  return Function_21dc034(v1, 0);
}

//----- (021DBB68) --------------------------------------------------------
int Function_21dbb68()
{
  return Function_21dc090();
}

//----- (021DBB70) --------------------------------------------------------
int __fastcall Function_21dbb70(int a1)
{
  int v1;

  v1 = a1;
  *(uint *)(a1 + 224) = Function_21d5ea8(*(uint *)(a1 + 12));
  Function_21dbf18(v1);
  Function_21dbf4c(v1);
  return Function_21dbfc4(v1);
}

//----- (021DBB94) --------------------------------------------------------
int __fastcall Function_21dbb94(int a1)
{
  return Function_21dc034(a1, 1);
}

//----- (021DBBA0) --------------------------------------------------------
int Function_21dbba0()
{
  return Function_21dc090();
}

//----- (021DBBA8) --------------------------------------------------------
int *__fastcall Function_21dbba8(int a1, uint a2, int a3, int a4, uint *a5)
{
  int v5;
  int v6;
  uint v7;
  ushort v8;
  uint *v9;
  ushort *v10;
  int v11;
  ushort v12;
  uint v13;
  uchar v14;
  int *result;
  int v16;
  uint v17;
  int v18;
  int v19;
  ushort v20;
  int v21;
  uint v22;
  uint v23;
  uint *v24;

  v16 = a1;
  v17 = a2;
  v18 = a3;
  v19 = a4;
  v5 = Function_21d5e90(*(uint *)(a1 + 12));
  v24 = (uint *)v5;
  v6 = Function_2079aa8(v5, v17);
  if ( v6 >= 24 )
    LOBYTE(v6) = v6 - 8;
  Function_201a6d0(v16 + 60, 9, 10, 14, 0xCu, v6 - 48);
  v7 = 0;
  v22 = 0;
  v20 = 11;
  do
  {
    v23 = 0;
    v8 = 10;
    do
    {
      v9 = Function_2079c9c(v24, v17, v7++);
      v10 = (ushort *)v9;
      v21 = (uchar)InitEncryptPkmnData_Part1((int)v9);
      v11 = GetBoxPkmnData((int)v10, 5u, 0);
      if ( v11 )
      {
        if ( GetBoxPkmnData((int)v10, 0x4Cu, 0) )
        {
          if ( v11 == 490 )
            v14 = 1;
          else
            v14 = 8;
          v13 = v14;
        }
        else
        {
          v12 = GetBoxPkmnData((int)v10, 0x70u, 0);
          v13 = GetPkmnBaseData2(v11, v12, 0x1Bu) & 0xFF;
        }
        Function_201a6d0(v16 + 60, v8, v20, 2, 2u, *((uchar *)dword_21E0228 + v13) - 32);
      }
      InitEncryptPkmnData_Part1Again(v10, v21);
      v8 += 2;
      ++v23;
    }
    while ( v23 < 6 );
    v20 += 2;
    ++v22;
  }
  while ( v22 < 5 );
  if ( a5 )
  {
    if ( v19 == 1 )
    {
      *(uint *)(*(uint *)(v16 + 24) + 8) = REG_DISPCNT & 0x300010;
    }
    else if ( v19 == 2 )
    {
      *(uint *)(*(uint *)(v16 + 24) + 8) = REG_DISPCNT_SUB & 0x300010;
    }
    result = (int *)NNS_G2dLoadImage1DMapping(*(ushort **)(v16 + 24), 32 * v18, v19, a5);
  }
  else
  {
    DC_FlushRange(*(uint *)(*(uint *)(v16 + 24) + 20), *(uint *)(*(uint *)(v16 + 24) + 16));
    result = (int *)v19;
    if ( v19 == 1 )
    {
      result = GX_LoadOBJ(*(int **)(*(uint *)(v16 + 24) + 20), 32 * v18, *(uint *)(*(uint *)(v16 + 24) + 16));
    }
    else if ( v19 == 2 )
    {
      result = GXS_LoadOBJ(*(int **)(*(uint *)(v16 + 24) + 20), 32 * v18, *(uint *)(*(uint *)(v16 + 24) + 16));
    }
  }
  return result;
}

//----- (021DBD3C) --------------------------------------------------------
int __fastcall Function_21dbd3c(int a1)
{
  return *(uint *)(a1 + 32);
}

//----- (021DBD40) --------------------------------------------------------
int __fastcall Function_21dbd40(int a1)
{
  return *(uint *)(a1 + 224) - 3 + (*(uint *)(a1 + 224) - 3 < 0 ? 0x12 : 0);
}

//----- (021DBD4C) --------------------------------------------------------
int __fastcall Function_21dbd4c(int result)
{
  int v1;
  int v2;

  v1 = 0;
  do
  {
    v2 = result + v1++;
    *(uchar *)(v2 + 19428) = 0;
  }
  while ( v1 < 18 );
  return result;
}

//----- (021DBD68) --------------------------------------------------------
int __fastcall Function_21dbd68(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  MI_CpuCopy32(*(int **)(*(uint *)(a1 + 24) + 20), (uint *)(a1 + 996 + (a2 << 10)), 1024);
  DC_FlushRange(v2 + 996, 1024);
  result = 19428;
  *(uchar *)(v2 + v3 + 19428) = 1;
  return result;
}

//----- (021DBD9C) --------------------------------------------------------
int *__fastcall Function_21dbd9c(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  char v7;

  v3 = a1;
  v4 = 32 * a2 + 1584;
  v5 = a3;
  if ( *(uchar *)(a1 + a3 + 19428) )
    return GX_LoadOBJ((int *)(a1 + 996 + (a3 << 10)), 32 * v4, 0x400u);
  NNS_G2dInitImageProxy((int)&v7);
  Function_21dbba8(v3, v5, v4, 1, &v7);
  return (int *)Function_21dbd68(v3, v5);
}

//----- (021DBDF4) --------------------------------------------------------
int __fastcall Function_21dbdf4(int a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  uint *v13;
  int result;
  int *v15;
  int v16;
  int v17;
  uint v18;
  int v19;
  int v20;
  char v21;
  char *v22;

  v1 = (int *)a1;
  Function_21dbd4c(a1);
  v2 = Function_21d77d8(*v1);
  v3 = Function_21d77d0(*v1);
  Function_21d783c((int)&v22, 0, v3, v1[8], *(uint *)(v2 + 4), 0);
  v4 = Function_21dbd40((int)v1);
  v17 = 0;
  v16 = 1584;
  v5 = v1;
  v6 = 32;
  do
  {
    NNS_G2dInitImageProxy((int)&v21);
    Function_21dbba8((int)v1, v4, v16, 1, &v21);
    v22 = &v21;
    v7 = Function_21d785c(v1[2], (int)&v22, 512, 256, 11, 1);
    v5[18] = v7;
    if ( !v7 )
      ErrorHandler();
    Function_2021cac(v5[18], 0);
    if ( v6 <= 0 )
    {
      v10 = fflt(v6 << 12);
      v9 = fsub(v10, 1056964608);
    }
    else
    {
      v8 = fflt(v6 << 12);
      v9 = fadd(0x3F000000u, v8);
    }
    v18 = ffix(v9);
    v19 = 360448;
    v20 = 0;
    Function_2021c50((uint *)v5[18], (int *)&v18);
    Function_21dbd68((int)v1, v4++);
    if ( v4 >= 18 )
      v4 = 0;
    ++v5;
    v16 += 32;
    v6 += 32;
    ++v17;
  }
  while ( v17 < 7 );
  v11 = 0;
  v12 = v1;
  do
  {
    v13 = (uint *)Function_21d5e90(v1[3]);
    result = Function_2079b54(v13, v11);
    v15 = v12 + 37;
    ++v11;
    ++v12;
    *v15 = result;
  }
  while ( v11 < 18 );
  return result;
}

//----- (021DBEF8) --------------------------------------------------------
int __fastcall Function_21dbef8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(uint *)(v2 + 72);
    if ( result )
    {
      result = Function_2021bd4(result);
      *(uint *)(v2 + 72) = 0;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 < 7 );
  return result;
}

//----- (021DBF18) --------------------------------------------------------
uint __fastcall Function_21dbf18(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint result;

  v1 = a1;
  v2 = Function_21dbd40(a1);
  v3 = 0;
  v4 = v1;
  do
  {
    Function_21dbd9c(v1, v3, v2);
    result = Function_2021cac(*(uint *)(v4 + 72), 1);
    if ( ++v2 >= 18 )
      v2 = 0;
    ++v3;
    v4 += 4;
  }
  while ( v3 < 7 );
  return result;
}

//----- (021DBF4C) --------------------------------------------------------
int *__fastcall Function_21dbf4c(int a1)
{
  int v1;
  uint *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = (uint *)Function_21d5e90(*(uint *)(a1 + 12));
  v3 = *(uint *)(v1 + 16);
  Function_2079af4(v2, *(uint *)(v1 + 224), *(ushort **)(v1 + 19452));
  Function_2002d7c(0, *(uint *)(v1 + 19452), 0);
  Function_201ada4_ClearTextBox(v3, 7);
  v4 = *(uint *)(v1 + 19452);
  Function_201d78c(v3, 0);
  return Function_201accc(v3);
}

//----- (021DBFB0) --------------------------------------------------------
int *__fastcall Function_21dbfb0(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 16);
  Function_201ada4_ClearTextBox(*(uint *)(a1 + 16), 7);
  return Function_201accc(v1);
}

//----- (021DBFC4) --------------------------------------------------------
int *__fastcall Function_21dbfc4(int a1)
{
  int v1;
  int v2;
  int v3;
  ushort v4;
  int v6;

  v1 = a1;
  v6 = *(uint *)(a1 + 16) + 16;
  Function_201ada4_ClearTextBox(v6, 4);
  v2 = 0;
  v3 = Function_21dbd40(v1);
  v4 = 0;
  do
  {
    Function_200c5bc(*(uint *)(v1 + 68), *(uint *)(v1 + 4 * v3++ + 148), 2, 2, v6, v4, 0);
    if ( v3 >= 18 )
      v3 = 0;
    ++v2;
    v4 += 32;
  }
  while ( v2 < 7 );
  return Function_201accc(v6);
}

//----- (021DC01C) --------------------------------------------------------
int *__fastcall Function_21dc01c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 16) + 16;
  Function_201ada4_ClearTextBox(v1, 4);
  return Function_201accc(v1);
}

//----- (021DC034) --------------------------------------------------------
uint __fastcall Function_21dc034(int a1, int a2)
{
  int v2;
  int v3;
  uint result;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  result = malloc(0xAu, 12);
  v5 = result;
  if ( result )
  {
    v6 = (int)*(&off_21E0208 + v3);
    *(uint *)v5 = v2;
    *(uchar *)(v5 + 4) = 0;
    *(uchar *)(v5 + 5) = 0;
    *(uint *)(v2 + 220) = AddTaskToTaskList1(v6, v5, 0);
    result = *(uint *)(v2 + 220);
    if ( !*(uint *)(v2 + 220) )
      result = free(v5);
  }
  return result;
}

//----- (021DC074) --------------------------------------------------------
int __fastcall Function_21dc074(int *a1, int a2)
{
  int *v2;

  v2 = a1;
  *(uint *)(*(uint *)a2 + 220) = 0;
  free(a2);
  return Call_RemoveTaskFromTaskList(v2);
}

//----- (021DC090) --------------------------------------------------------
BOOL __fastcall Function_21dc090(int a1)
{
  return *(uint *)(a1 + 220) == 0;
}

//----- (021DC0A0) --------------------------------------------------------
int __fastcall Function_21dc0a0(int result, int a2)
{
  int v2;
  uint v3;
  int *v4;
  int v5;

  v2 = a2;
  v3 = *(uchar *)(a2 + 4);
  v4 = *(int **)a2;
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_21DC0BC + v3) + 35504318);
  switch ( (uchar)v3 )
  {
    case 0:
      v5 = (uchar)++*(uchar *)(a2 + 5);
      if ( 2 * v5 >= 10 )
      {
        Function_20198c0(v4[1], 1, v4[12] + 12, 0, 5u, 0x20u, 0xAu);
        ++*(uchar *)(v2 + 4);
      }
      else
      {
        Function_20198c0(v4[1], 1, v4[12] + 12, 0, 10 - v5, 0x20u, v5);
        Function_20198e8(
          v4[1],
          1,
          0,
          10,
          0x20u,
          *(uchar *)(v2 + 5),
          v4[12] + 12,
          0,
          10 - *(uchar *)(v2 + 5),
          0x20u,
          0xAu);
      }
      Function_2019448((uint *)v4[1], 1u);
      result = 7;
      *(uchar *)(v2 + 5) = 7;
      break;
    case 1:
      GX_LoadOBJPltt((int)&v4[24 * *(uchar *)(a2 + 5) + 57], 416, 0x60u);
      Function_21dbf18((int)v4);
      result = *(uchar *)(v2 + 4) + 1;
      *(uchar *)(v2 + 4) = result;
      break;
    case 2:
      if ( *(uchar *)(a2 + 5) )
        --*(uchar *)(a2 + 5);
      GX_LoadOBJPltt((int)&v4[24 * *(uchar *)(a2 + 5) + 57], 416, 0x60u);
      result = *(uchar *)(v2 + 5);
      if ( !*(uchar *)(v2 + 5) )
      {
        Function_201a9f4(v4[4]);
        Function_201a9f4(v4[4] + 16);
        Function_21dbf4c((int)v4);
        Function_21dbfc4((int)v4);
        Function_2019448((uint *)v4[1], 1u);
        result = *(uchar *)(v2 + 4) + 1;
        *(uchar *)(v2 + 4) = result;
      }
      break;
    case 3:
      result = Function_21dc074((int *)result, a2);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DC1CC) --------------------------------------------------------
int *__fastcall Function_21dc1cc(int *result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = *(uchar *)(a2 + 4);
  v4 = *(uint *)a2;
  if ( *(uchar *)(a2 + 4) )
  {
    if ( v3 == 1 )
    {
      Function_2019cb8(*(uint *)(v4 + 4), 1, 0, 0, 5u, 0x20u, 0xAu, 0x11u);
      v5 = (uchar)++*(uchar *)(v2 + 5);
      if ( 2 * v5 >= 10 )
      {
        ++*(uchar *)(v2 + 4);
      }
      else
      {
        Function_20198c0(*(uint *)(v4 + 4), 1, *(uint *)(v4 + 48) + 12, 0, v5 + 5, 0x20u, 5 - v5);
        Function_20198e8(
          *(uint *)(v4 + 4),
          1,
          0,
          10,
          0x20u,
          5 - *(uchar *)(v2 + 5),
          *(uint *)(v4 + 48) + 12,
          0,
          10 - *(uchar *)(v2 + 5),
          0x20u,
          0xAu);
      }
      result = (int *)Function_2019448(*(uint **)(v4 + 4), 1u);
    }
    else if ( v3 == 2 )
    {
      result = (int *)Function_21dc074(result, a2);
    }
  }
  else
  {
    Function_21dbef8(*(uint *)a2);
    Function_21dbfb0(v4);
    Function_21dc01c(v4);
    result = (int *)(*(uchar *)(v2 + 4) + 1);
    *(uchar *)(v2 + 4) = (uchar)result;
  }
  return result;
}

//----- (021DC29C) --------------------------------------------------------
uint *__fastcall Function_21dc29c(int a1)
{
  int v1;
  uint *result;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  result = (uint *)malloc(0xAu, 24);
  v3 = (int)result;
  if ( result )
  {
    v4 = Function_21d5f88(*(uint *)(v1 + 12));
    Function_2019184(*(uint *)(v1 + 4), 1u, 3u, 0);
    Function_20198c0(*(uint *)(v1 + 4), 1, *(uint *)(v1 + 56) + 12, 0, 0x18u, 0x20u, 7u);
    Function_201ada4_ClearTextBox(*(uint *)(v1 + 16) + 32, 4);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 19448), v4, *(ushort **)(v1 + 19452));
    v5 = *(uint *)(v1 + 19452);
    Function_201d78c(*(uint *)(v1 + 16) + 32, 0);
    Function_201a954(*(uint *)(v1 + 16) + 32, v6);
    Function_21dc4f8(v1, v4);
    *(ushort *)(v3 + 22) = 0;
    *(uint *)v3 = v1;
    *(uint *)(v3 + 4) = *(uint *)(v1 + 4);
    *(uint *)(v3 + 8) = 0;
    *(uint *)(v3 + 12) = 229376;
    *(uint *)(v3 + 16) = s32_div_f(229376 - *(uint *)(v3 + 8), 6);
    *(ushort *)(v3 + 20) = 6;
    result = Function_21d77c8((int)Function_21dc37c, v3, 0);
    *(uint *)(v1 + 220) = result;
  }
  return result;
}

//----- (021DC364) --------------------------------------------------------
BOOL __fastcall Function_21dc364(int a1)
{
  return *(uint *)(a1 + 220) == 0;
}

//----- (021DC374) --------------------------------------------------------
uint *__fastcall Function_21dc374(int a1)
{
  uint *result;

  result = (uint *)(a1 + 220);
  *result = 0;
  return result;
}

//----- (021DC37C) --------------------------------------------------------
int __fastcall Function_21dc37c(int *a1, int a2)
{
  int *v2;
  int *v3;
  int result;
  int v5;

  v2 = (int *)a2;
  v3 = a1;
  result = *(ushort *)(a2 + 22);
  if ( *(ushort *)(a2 + 22) )
  {
    if ( result == 1 )
    {
      if ( *(ushort *)(a2 + 20) )
      {
        --*(ushort *)(a2 + 20);
        v5 = *(uint *)(a2 + 8) + *(uint *)(a2 + 16);
        *(uint *)(a2 + 8) = v5;
        Function_2019184(*(uint *)(a2 + 4), 1u, 3u, v5 >> 12);
        result = Function_21dc5b8(*v2, 917504 - v2[2]);
      }
      else
      {
        Function_2019184(*(uint *)(a2 + 4), 1u, 3u, *(uint *)(a2 + 12) >> 12);
        Function_21dc5b8(*v2, 917504 - v2[3]);
        Function_21d79b8((int)v2, (int)Function_21dc374, *v2);
        result = Call_RemoveTaskFromTaskList(v3);
      }
    }
  }
  else
  {
    *(ushort *)(a2 + 22) = ++result;
  }
  return result;
}

//----- (021DC3F4) --------------------------------------------------------
uint *__fastcall Function_21dc3f4(int a1)
{
  int v1;
  uint *result;
  int v3;

  v1 = a1;
  result = (uint *)malloc(0xAu, 24);
  v3 = (int)result;
  if ( result )
  {
    *((ushort *)result + 11) = 0;
    *result = v1;
    result[1] = *(uint *)(v1 + 4);
    result[2] = 229376;
    result[3] = 0;
    result[4] = s32_div_f(-result[2], 6);
    *(ushort *)(v3 + 20) = 6;
    result = Function_21d77c8((int)Function_21dc46c, v3, 0);
    *(uint *)(v1 + 220) = result;
  }
  return result;
}

//----- (021DC43C) --------------------------------------------------------
int __fastcall Function_21dc43c(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 220) )
    return 0;
  Function_2019184(*(uint *)(a1 + 4), 1u, 3u, 0);
  Function_21dc5e0(v1);
  return 1;
}

//----- (021DC464) --------------------------------------------------------
uint *__fastcall Function_21dc464(int a1)
{
  uint *result;

  result = (uint *)(a1 + 220);
  *result = 0;
  return result;
}

//----- (021DC46C) --------------------------------------------------------
int __fastcall Function_21dc46c(int *a1, int a2)
{
  int *v2;
  int *v3;
  int v4;
  int result;

  v2 = (int *)a2;
  v3 = a1;
  if ( *(ushort *)(a2 + 20) )
  {
    --*(ushort *)(a2 + 20);
    v4 = *(uint *)(a2 + 8) + *(uint *)(a2 + 16);
    *(uint *)(a2 + 8) = v4;
    Function_2019184(*(uint *)(a2 + 4), 1u, 3u, v4 >> 12);
    result = Function_21dc5b8(*v2, 917504 - v2[2]);
  }
  else
  {
    Function_2019184(*(uint *)(a2 + 4), 1u, 3u, *(uint *)(a2 + 12) >> 12);
    Function_21dc5b8(*v2, 917504 - v2[3]);
    Function_2019cb8(v2[1], 1, 0, 0, 0, 0x20u, 0x20u, 0x11u);
    Function_2019448((uint *)v2[1], 1u);
    Function_21d79b8((int)v2, (int)Function_21dc464, *v2);
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (021DC4F8) --------------------------------------------------------
int *__fastcall Function_21dc4f8(int *result, int a2, int a3, int a4)
{
  int *v4;
  ushort v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12;
  char v13;
  int v14;

  v14 = a4;
  v4 = result;
  v5 = a2;
  if ( a2 )
  {
    v6 = Function_21d77d8(*result);
    v7 = Function_21d77d0(*v4);
    Function_21d783c((int)&v13, (int)&v12, v7, *(uint *)(v6 + 28), *(uint *)(v6 + 32), 0);
    NNS_G2dInitImageProxy((int)&v12);
    v8 = Function_207ce78(v5, 1u);
    v9 = Function_2006f50(16, v8, 0, &v11, 10);
    *(uint *)(v11 + 8) = REG_DISPCNT & 0x300010;
    NNS_G2dLoadImage1DMapping((ushort *)v11, 0xBE00u, 1, &v12);
    v10 = Function_207ce78(v5, 2u);
    Call_LoadFromNARC_RLCN(16, v10, 1u, 192, 32, 10);
    v4[36] = Function_21d785c(v4[2], (int)&v13, 18, 224, 0, 1);
    if ( v4[36] )
      Function_2021e90(v4[36], 6);
    result = (int *)free(v9);
  }
  return result;
}

//----- (021DC5B8) --------------------------------------------------------
int __fastcall Function_21dc5b8(int result, int a2)
{
  int v2;
  int v3;
  int v4;

  if ( *(uint *)(result + 144) )
  {
    v3 = a2;
    v4 = 0;
    v2 = 73728;
    result = Function_2021c50(*(uint **)(result + 144), &v2);
  }
  return result;
}

//----- (021DC5E0) --------------------------------------------------------
int __fastcall Function_21dc5e0(int a1)
{
  int result;

  result = *(uint *)(a1 + 144);
  if ( result )
    result = Function_2021bd4(result);
  return result;
}

//----- (021DC5F0) --------------------------------------------------------
int __fastcall Function_21dc5f0(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v6 = a1;
  v7 = a2;
  v8 = a3;
  *a1 = a2;
  a1[3] = a3;
  a1[2] = a5;
  a1[1] = a4;
  a1[14] = Function_21d77d8(a2);
  v6[4] = Function_21d77e0(v7);
  if ( Function_21d5e08(v8) == 4 )
  {
    v6[12] = 9;
    v9 = -40;
  }
  else
  {
    v6[12] = 14;
    v9 = 0;
  }
  v6[13] = v9;
  *((uchar *)v6 + 43) = 0;
  v6[11] = 0;
  Function_21da3cc(v6[14], v6 + 15, 6);
  v6[7] = malloc(0xAu, 576);
  v10 = Function_20071d0(a6, 6u, 1, v6 + 6, 10);
  v6[5] = v10;
  if ( !v10 || !v6[7] )
    return 0;
  Function_21dcdb4(v6);
  return 1;
}

//----- (021DC680) --------------------------------------------------------
int __fastcall Function_21dc680(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 20);
  if ( v2 )
    free(v2);
  v3 = *(uint *)(v1 + 28);
  if ( v3 )
    free(v3);
  return Function_21dcf50(v1);
}

//----- (021DC6A0) --------------------------------------------------------
int __fastcall Function_21dc6a0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  *(uchar *)(a1 + 43) = 0;
  v2 = *(uchar *)(a1 + 43);
  Function_21dcd64();
  Function_21dceb8(v1, 1);
  return Function_2019448(*(uint **)(v1 + 4), 2u);
}

//----- (021DC6C8) --------------------------------------------------------
BOOL __fastcall Function_21dc6c8(int a1)
{
  int v1;
  BOOL result;

  v1 = a1;
  Function_21dceb8(a1, 0);
  *(uchar *)(v1 + 43) = 26;
  result = Function_21d77c8((int)Function_21dc708, v1, 0) != 0;
  *(uint *)(v1 + 44) = result;
  return result;
}

//----- (021DC6F8) --------------------------------------------------------
BOOL __fastcall Function_21dc6f8(int a1)
{
  return *(uint *)(a1 + 44) == 0;
}

//----- (021DC708) --------------------------------------------------------
int __fastcall Function_21dc708(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  char v6;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 43);
  if ( v4 <= 2 )
  {
    v5 = -32768 * v4;
    v6 = 0;
  }
  else
  {
    v5 = -65536;
    v6 = *(uchar *)(a2 + 43) - 2;
  }
  *(uchar *)(v2 + 43) = v6;
  Function_21dcd64(v2, *(uchar *)(v2 + 43));
  Function_2019448(*(uint **)(v2 + 4), 2u);
  Function_21dce50(v2, v5);
  result = *(uchar *)(v2 + 43);
  if ( !*(uchar *)(v2 + 43) )
  {
    *(uint *)(v2 + 44) = 0;
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (021DC768) --------------------------------------------------------
BOOL __fastcall Function_21dc768(int a1)
{
  int v1;
  BOOL result;

  v1 = a1;
  result = Function_21d77c8((int)Function_21dc79c, a1, 0) != 0;
  *(uint *)(v1 + 44) = result;
  return result;
}

//----- (021DC788) --------------------------------------------------------
int __fastcall Function_21dc788(int a1)
{
  if ( *(uint *)(a1 + 44) )
    return 0;
  Function_21dcf50(a1);
  return 1;
}

//----- (021DC79C) --------------------------------------------------------
int __fastcall Function_21dc79c(int *a1, int a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  char v6;
  uint v7;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *(uchar *)(a2 + 43);
  if ( v4 >= 0x18 )
  {
    v6 = 26;
    v5 = (26 - v4) << 15;
  }
  else
  {
    v5 = 0x10000;
    v6 = *(uchar *)(a2 + 43) + 2;
  }
  *(uchar *)(v2 + 43) = v6;
  v7 = *(uchar *)(v2 + 43);
  if ( v7 > 2 )
    Function_2019cb8(
      *(uint *)(v2 + 4),
      2,
      0,
      *(uint *)(v2 + 48) & 0xFF,
      v7 - 2 - ((uint)(v5 >> 12) >> 3),
      0xFu,
      (uint)(v5 >> 12) >> 3,
      0x11u);
  Function_21dcd64(v2, *(uchar *)(v2 + 43));
  Function_2019448(*(uint **)(v2 + 4), 2u);
  Function_21dce50(v2, v5);
  result = *(uchar *)(v2 + 43);
  if ( result == 26 )
  {
    *(uint *)(v2 + 44) = 0;
    result = Call_RemoveTaskFromTaskList(v3);
  }
  return result;
}

//----- (021DC834) --------------------------------------------------------
BOOL __fastcall Function_21dc834(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  BOOL result;
  int v8;
  char v9;
  int v10;

  v1 = a1;
  v2 = GetNrOfPkmnInParty(*(uint *)(*(uint *)(a1 + 12) + 4));
  v3 = *(uchar *)(v1 + 40);
  if ( v3 >= v2 )
  {
    result = 0;
    *(uint *)(v1 + 44) = 0;
  }
  else
  {
    v9 = v2 - v3;
    if ( v3 < 5 )
    {
      v10 = v1 + 60;
      v4 = (int *)(v1 + 60 + 52 * v3);
      v5 = v1 + 52 * v3;
      v8 = 32 * v3 + 1048;
      do
      {
        v6 = 52 * (v3 + 1);
        Function_21da418((int *)(v10 + v6), v4, 1);
        Function_21da3cc(*(uint *)(v1 + 56), (uint *)(v10 + v6), 1);
        if ( *(uint *)(v5 + 60) )
          Function_21da754(*(uint *)(v1 + 56), v4, v8);
        ++v3;
        v4 += 13;
        v5 += 52;
        v8 += 32;
      }
      while ( v3 < 5 );
    }
    *(uchar *)(v1 + 41) = v9;
    *(uchar *)(v1 + 42) = 0;
    result = Function_21d77c8((int)Function_21dc8e8, v1, 0) != 0;
    *(uint *)(v1 + 44) = result;
  }
  return result;
}

//----- (021DC8E8) --------------------------------------------------------
uint __fastcall Function_21dc8e8(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  uint *v8;
  uint result;
  int *v10;
  int v11;

  v11 = a2;
  v2 = a2;
  v10 = a1;
  v3 = *(uchar *)(a2 + 41);
  v4 = *(uchar *)(a2 + 40);
  v5 = (int *)(*(uint *)(v11 + 28) + 12 * (*(uchar *)(v2 + 42) + 8 * v4));
  v6 = 0;
  if ( v3 > 0 )
  {
    v7 = v11 + 52 * v4;
    do
    {
      v8 = *(uint **)(v7 + 60);
      if ( v8 )
        Function_2021c50(v8, v5);
      ++v6;
      v7 += 52;
      v5 += 24;
    }
    while ( v6 < v3 );
  }
  result = (uchar)++*(uchar *)(v11 + 42);
  if ( result >= 8 )
  {
    *(uint *)(v11 + 44) = 0;
    result = Call_RemoveTaskFromTaskList(v10);
  }
  return result;
}

//----- (021DC95C) --------------------------------------------------------
BOOL __fastcall Function_21dc95c(int a1)
{
  return *(uint *)(a1 + 44) == 0;
}

//----- (021DC96C) --------------------------------------------------------
BOOL __fastcall Function_21dc96c(int a1)
{
  int v1;
  uint v2;
  int v3;
  uint *v4;
  int v5;
  int v6;
  BOOL result;

  v1 = a1;
  v2 = GetNrOfPkmnInParty(*(uint *)(*(uint *)(a1 + 12) + 4)) - 1;
  if ( *(uchar *)(v1 + 40) <= v2 )
  {
    result = 0;
    *(uint *)(v1 + 44) = 0;
  }
  else
  {
    v3 = *(uint *)(v1 + 52 * v2 + 60);
    Function_2021d28();
    v5 = v4[1];
    v6 = v4[2];
    *(uint *)(v1 + 32) = (((*(uint *)(v1 + 52) + (ushort)word_21E0234[2 * v2]) << 12) - *v4) / 8;
    *(uint *)(v1 + 36) = (((ushort)word_21E0236[2 * v2] << 12) - v5) / 8;
    *(uchar *)(v1 + 42) = 0;
    *(uchar *)(v1 + 40) = v2;
    result = Function_21d77c8((int)Function_21dca18, v1, 0) != 0;
    *(uint *)(v1 + 44) = result;
  }
  return result;
}

//----- (021DCA08) --------------------------------------------------------
BOOL __fastcall Function_21dca08(int a1)
{
  return *(uint *)(a1 + 44) == 0;
}

//----- (021DCA18) --------------------------------------------------------
int __fastcall Function_21dca18(int *a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uint *)(a2 + 52 * *(uchar *)(a2 + 40) + 60);
  Function_2021d28();
  v8 = v7[1];
  v11 = *v7;
  v12 = v8;
  v13 = v7[2];
  if ( (uchar)++*(uchar *)(v4 + 42) < 8u )
  {
    v9 = 0;
    v11 += *(uint *)(v4 + 32);
    v12 += *(uint *)(v4 + 36);
  }
  else
  {
    v9 = 1;
    v11 = (*(uint *)(v4 + 52) + (ushort)word_21E0234[2 * *(uchar *)(v4 + 40)]) << 12;
    v12 = (ushort)word_21E0236[2 * *(uchar *)(v4 + 40)] << 12;
  }
  result = Function_2021c50(*(uint **)(v4 + 52 * *(uchar *)(v4 + 40) + 60), &v11);
  if ( v9 )
  {
    *(uint *)(v4 + 44) = 0;
    result = Call_RemoveTaskFromTaskList(v5);
  }
  return result;
}

//----- (021DCAC0) --------------------------------------------------------
int __fastcall Function_21dcac0(int a1)
{
  int v1;
  int v2;
  char v3;
  int result;

  v1 = a1;
  if ( *(ushort *)(*(uint *)(a1 + 12) + 272) == Function_21d5e68(*(uint *)(a1 + 12)) )
    Function_21d84e0(*(uint *)(v1 + 16));
  v2 = Function_21d5e2c(*(uint *)(v1 + 12));
  v3 = v2;
  result = Function_21da3f0(*(uint *)(v1 + 56), (int *)(v1 + 60 + 52 * v2), 1);
  *(uchar *)(v1 + 40) = v3;
  return result;
}

//----- (021DCAFC) --------------------------------------------------------
int __fastcall Function_21dcafc(int a1, int a2)
{
  *(uchar *)(a1 + 372) = 0;
  *(uchar *)(a1 + 40) = a2;
  return Function_21da7b8(*(uint *)(a1 + 56), (uint *)(a1 + 60 + 52 * a2), 1u);
}

//----- (021DCB20) --------------------------------------------------------
int __fastcall Function_21dcb20(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  bool v6;
  int v7;

  v1 = a1;
  v2 = 52 * *(uchar *)(a1 + 40);
  v3 = *(uchar *)(a1 + 372);
  v4 = v1 + 60;
  if ( *(uchar *)(v1 + 372) )
  {
    if ( v3 == 1 && Function_21da7e0(*(uint *)(v1 + 56), (int *)(v4 + v2)) )
      return 1;
  }
  else if ( Function_21da7e0(*(uint *)(v1 + 56), (int *)(v4 + v2)) )
  {
    v5 = Function_21d7964(*(uint *)v1);
    if ( Function_21d3b18(v5) )
    {
      v6 = Function_21d3b20(v5) == 0;
      v7 = *(uint *)(v1 + 56);
      if ( !v6 )
      {
        Function_21da3f0(v7, (int *)(v4 + v2), 1);
        return 1;
      }
      Function_21da7b8(v7, (uint *)(v4 + v2), 2u);
      ++*(uchar *)(v1 + 372);
    }
  }
  return 0;
}

//----- (021DCBA0) --------------------------------------------------------
int __fastcall Function_21dcba0(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  result = Function_21d5e10(*(uint *)(a1 + 12));
  if ( result == 1 )
  {
    v6 = Function_21d5ec8(*(uint *)(v1 + 12));
    v3 = 0;
    v4 = v1;
    v5 = v1 + 60;
    do
    {
      result = *(uint *)(v4 + 60);
      if ( result )
        result = Function_21da63c(*(uint *)(v1 + 56), v5, v6);
      ++v3;
      v4 += 52;
      v5 += 52;
    }
    while ( v3 < 6 );
  }
  return result;
}

//----- (021DCBDC) --------------------------------------------------------
uint __fastcall Function_21dcbdc(int a1, int a2, short a3)
{
  int v3;
  int v4;
  int v5;
  uint result;
  int v7;
  int v8;

  v3 = a1;
  v4 = 52 * a2;
  v5 = a1 + 60;
  result = *(uint *)(a1 + 60 + 52 * a2);
  if ( result )
  {
    Function_21da690(*(uint *)(v3 + 56), v5 + v4, a3);
    v7 = Function_21d5ec8(*(uint *)(v3 + 12));
    Function_21da63c(*(uint *)(v3 + 56), v5 + v4, v7);
    result = Function_21da694(*(uint *)(v3 + 56), v5 + v4, 0, v8);
  }
  return result;
}

//----- (021DCC14) --------------------------------------------------------
void __fastcall Function_21dcc14(int a1)
{
  int v1;
  int v2;
  short v3;

  v1 = a1;
  v2 = Function_21d5e2c(*(uint *)(a1 + 12));
  v3 = Function_21d5ea0(*(uint *)(v1 + 12));
  if ( *(uint *)(v1 + 60 + 52 * v2) )
    Function_21da68c(*(uint *)(v1 + 56), v1 + 60 + 52 * v2, v3);
}

//----- (021DCC44) --------------------------------------------------------
int __fastcall Function_21dcc44(int a1, int a2, int a3, int *a4)
{
  char v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int result;

  v4 = a2;
  v5 = a1;
  v6 = 52 * a2;
  v7 = a4;
  v8 = a3;
  Function_21da418((int *)(a1 + 60 + 52 * a2), a4, 1);
  Function_21da754(*(uint *)(v5 + 56), v7, v8);
  result = Function_21da3cc(*(uint *)(v5 + 56), (uint *)(v5 + 60 + v6), 1);
  *(uchar *)(v5 + 40) = v4;
  return result;
}

//----- (021DCC80) --------------------------------------------------------
int __fastcall Function_21dcc80(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = GetNrOfPkmnInParty(*(uint *)(*(uint *)(a1 + 12) + 4));
  v7 = v6 - 1;
  v8 = 52 * (v6 - 1);
  Function_21da418(v5, (uint *)(v3 + 60 + v8), 1);
  Function_21da754(*(uint *)(v3 + 56), (int *)(v3 + 60 + v8), 32 * v7 + 1048);
  Function_2021e80(*(uint *)(v3 + 60 + v8), 1);
  Function_21d78ac(*(uint *)(v3 + 60 + v8), v7 + 4);
  result = v4;
  *(uchar *)(v3 + 40) = v4;
  return result;
}

//----- (021DCCD4) --------------------------------------------------------
uint __fastcall Function_21dccd4(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint result;

  v3 = a1;
  v4 = a2;
  v5 = 52 * a2;
  v6 = a1 + 60;
  Function_21da418(a3, (uint *)(a1 + 60 + 52 * a2), 1);
  Function_21da754(*(uint *)(v3 + 56), (int *)(v6 + v5), 32 * v4 + 1048);
  Function_2021e80(*(uint *)(v6 + v5), 1);
  result = Function_21d78ac(*(uint *)(v6 + v5), v4 + 4);
  *(uchar *)(v3 + 40) = v4;
  return result;
}

//----- (021DCD18) --------------------------------------------------------
int __fastcall Function_21dcd18(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 6 )
    ErrorHandler();
  return v3 + 60 + 52 * v2;
}

//----- (021DCD30) --------------------------------------------------------
int __fastcall Function_21dcd30(int a1, int a2, uint *a3, int *a4)
{
  int result;
  int v5;

  if ( a2 == 6 )
  {
    *a3 = *(uint *)(a1 + 52) + 192;
    result = 184;
    *a4 = 184;
  }
  else
  {
    v5 = 2 * a2;
    *a3 = *(uint *)(a1 + 52) + (ushort)word_21E0234[v5];
    result = (ushort)word_21E0236[v5];
    *a4 = result;
  }
  return result;
}

//----- (021DCD64) --------------------------------------------------------
int __fastcall Function_21dcd64(int result, uint a2)
{
  int *v2;
  int v3;
  uchar v4;
  uchar v5;

  v2 = (int *)result;
  if ( a2 > 2 )
  {
    if ( a2 >= 0x1A )
      return result;
    v4 = 26 - a2;
    v3 = 0;
    v5 = 24 - v4;
  }
  else
  {
    v3 = 30 * (2 - a2);
    v4 = 24;
    v5 = 0;
  }
  return Function_20198c0(v2[1], 2, v2[6] + 12 + v3, v2[12] & 0xFF, v5, 0xFu, v4);
}

//----- (021DCDB4) --------------------------------------------------------
uint __fastcall Function_21dcdb4(int a1, uint *a2)
{
  ushort *v2;
  uint v3;
  uint v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint result;
  int v14;
  uint *v15;

  v14 = a1;
  v15 = a2;
  v2 = (ushort *)word_21E0234;
  v3 = 0;
  do
  {
    v4 = 0;
    v5 = ((*v2 - v2[2]) << 12) / 8;
    v6 = (v2[1] - v2[3]) << 12;
    v7 = v15;
    v8 = 0;
    v9 = 0;
    do
    {
      v9 += v6 / 8;
      ++v4;
      v8 += v5;
      *v7 = ((*(uint *)(v14 + 52) + v2[2]) << 12) + v8;
      v7[1] = (v2[3] << 12) + v9;
      v7[2] = 0;
      v7 += 3;
    }
    while ( v4 < 7 );
    v10 = 3 * v4;
    v11 = (int)&v15[3 * v4];
    v15[v10] = (*(uint *)(v14 + 52) + *v2) << 12;
    v12 = v2[1];
    v2 += 2;
    *(uint *)(v11 + 4) = v12 << 12;
    *(uint *)(v11 + 8) = 0;
    v15 += 24;
    result = v3 + 1;
    v3 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (021DCE50) --------------------------------------------------------
uint __fastcall Function_21dce50(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = *(uint *)(v2 + 60);
    if ( !result )
      break;
    Function_2021d28();
    v7 = v6[1];
    v8 = *v6;
    v9 = v7;
    v10 = v6[2];
    v9 = v7 + v3;
    Function_2021c50(*(uint **)(v2 + 60), &v8);
    if ( v3 >= 0 )
    {
      result = 851968;
      if ( v9 >= 851968 )
        result = Function_2021cac(*(uint *)(v2 + 60), 0);
    }
    else
    {
      result = 851968;
      if ( v9 < 851968 )
        result = Function_2021cac(*(uint *)(v2 + 60), 1);
    }
    ++v4;
    v2 += 52;
  }
  while ( v4 < 6 );
  return result;
}

//----- (021DCEB8) --------------------------------------------------------
int __fastcall Function_21dceb8(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  short *v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a1;
  v7 = a2;
  if ( a2 )
    v8 = 0;
  else
    v8 = 208;
  result = GetNrOfPkmnInParty(*(uint *)(*(uint *)(a1 + 12) + 4));
  v3 = 0;
  v11 = result;
  if ( result > 0 )
  {
    v4 = 1048;
    v10 = v12 + 60;
    v5 = word_21E0234;
    v9 = v12;
    do
    {
      v6 = GetAdrOfPkmnInParty(*(uint **)(*(uint *)(v12 + 12) + 4), v3);
      Function_21da428(
        *(int **)(v12 + 56),
        (int)v6,
        *(uint *)(v12 + 52) + (ushort)*v5,
        v8 + (ushort)v5[1],
        1,
        v3 + 4,
        v4,
        v10);
      Function_2021cac(*(uint *)(v9 + 60), v7);
      ++v3;
      v10 += 52;
      v4 += 32;
      v9 += 52;
      result = v11;
      v5 += 2;
    }
    while ( v3 < v11 );
  }
  return result;
}

//----- (021DCF50) --------------------------------------------------------
int __fastcall Function_21dcf50(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int *v5;
  int v6;

  v1 = a1;
  result = GetNrOfPkmnInParty(*(uint *)(*(uint *)(a1 + 12) + 4));
  v3 = 0;
  v6 = result;
  if ( result > 0 )
  {
    v4 = v1;
    v5 = (int *)(v1 + 60);
    do
    {
      if ( *(uint *)(v4 + 60) )
        Function_21da3f0(*(uint *)(v1 + 56), v5, 1);
      result = v6;
      ++v3;
      v4 += 52;
      v5 += 13;
    }
    while ( v3 < v6 );
  }
  return result;
}

//----- (021DCF88) --------------------------------------------------------
int __fastcall Function_21dcf88(uint *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  uint *v6;
  int v7;
  int result;
  uint *v9;
  uint *v10;
  int v11;
  int v12;
  uint *v13;
  uint *v14;
  int v15;

  v5 = a3;
  v6 = a1;
  v7 = a2;
  v15 = a4;
  if ( Function_21d5e08(a3) == 4 )
  {
    *v6 = 0;
    result = 1;
  }
  else
  {
    v9 = (uint *)malloc(0xAu, 244);
    v10 = v9;
    if ( v9 )
    {
      v9[2] = v15;
      *v9 = v7;
      v9[1] = v5;
      v9[3] = a5;
      v9[5] = 0;
      v9[33] = Function_2023790(32, 0xAu);
      v11 = 0;
      v12 = 0;
      v10[4] = *(uchar *)(v5 + 156);
      v10[38] = 0;
      v10[40] = 0;
      v10[42] = 0;
      v10[44] = 0;
      v10[11] = 0;
      v10[12] = 0;
      v13 = v10;
      do
      {
        ++v11;
        v13[13] = 0;
        ++v13;
      }
      while ( v11 < 8 );
      v14 = v10;
      do
      {
        ++v12;
        v14[21] = 0;
        ++v14;
      }
      while ( v12 < 10 );
      v10[32] = 0;
      Function_21dd024(v10);
      *v6 = v10;
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  return result;
}

//----- (021DD024) --------------------------------------------------------
uchar *__fastcall Function_21dd024(int a1)
{
  int v1;
  int v2;
  int v3;
  char v4;
  uchar *v5;
  uchar *result;

  v1 = a1;
  v2 = 0;
  *(uchar *)(a1 + 212) = 0;
  *(uchar *)(a1 + 228) = 16;
  v3 = 1;
  do
  {
    v2 += 23040;
    *(uchar *)(v1 + v3 + 212) = (int)(16 * Function_201d15c((uint)(16 * v2) >> 16)) >> 12;
    v4 = 16 - *(uchar *)(v1 + v3 + 212);
    v5 = (uchar *)(v1 + v3++ + 228);
    *v5 = v4;
  }
  while ( v3 < 15 );
  *(uchar *)(v1 + v3 + 212) = 16;
  result = (uchar *)(v1 + v3 + 228);
  *result = 0;
  return result;
}

//----- (021DD078) --------------------------------------------------------
uint __fastcall Function_21dd078(uint result)
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
  uint *v11;
  int v12;
  int v13;
  uint *v14;
  int v15;

  v1 = (uint *)result;
  if ( result )
  {
    Function_201a8fc(result + 136);
    v3 = v1[38];
    if ( v3 )
      free(v3);
    v4 = v1[40];
    if ( v4 )
      free(v4);
    v5 = v1[42];
    if ( v5 )
      free(v5);
    v6 = v1[44];
    if ( v6 )
      free(v6);
    v7 = v1[11];
    if ( v7 )
      Function_2021bd4(v7);
    v8 = v1[12];
    if ( v8 )
      Function_2021bd4(v8);
    v9 = v1[33];
    if ( v9 )
      Function_20237bc_FreeMsg(v9, v2);
    v10 = 0;
    v11 = v1;
    do
    {
      v12 = v11[13];
      if ( v12 )
        Function_2021bd4(v12);
      ++v10;
      ++v11;
    }
    while ( v10 < 8 );
    v13 = 0;
    v14 = v1;
    do
    {
      v15 = v14[21];
      if ( v15 )
        Function_2021bd4(v15);
      ++v13;
      ++v14;
    }
    while ( v13 < 10 );
    result = free((int)v1);
  }
  return result;
}

//----- (021DD114) --------------------------------------------------------
int __fastcall Function_21dd114(int result, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = result;
  v3 = a2;
  if ( result )
  {
    Function_20070e8(a2, 0x7Fu, *(uint **)(result + 8), 7u, 0, 0, 1, 10);
    Function_200710c(v3, 0x7Cu, *(uint **)(v2 + 8), 7u, 0, 0, 1, 10);
    Function_200710c(v3, 0x7Du, *(uint **)(v2 + 8), 6u, 0, 0, 1, 10);
    Function_200710c(v3, 0x7Eu, *(uint **)(v2 + 8), 5u, 0, 0, 1, 10);
    Function_20196c0(*(uint **)(v2 + 8), 4, 0, 1, 0);
    Function_2019cb8(*(uint *)(v2 + 8), 4, 0, 0, 0, 0x20u, 0x20u, 0x11u);
    Function_2019448(*(uint **)(v2 + 8), 4u);
    Function_2019184(*(uint *)(v2 + 8), 5u, 0, dword_21E0258[*(uint *)(v2 + 16)]);
    Function_201a7e8(*(uint **)(v2 + 8), v2 + 136, 4, 0, 0, 0x20u, 0x18u, 2, 0);
    Function_201ada4_ClearTextBox(v2 + 136, 0);
    Function_201a954(v2 + 136, v4);
    Function_21de324(v2);
    Function_2007130(v3, 0x80u, 4u, 0, 96, 10);
    result = Function_21dd224(v2, v3);
  }
  return result;
}

//----- (021DD224) --------------------------------------------------------
int __fastcall Function_21dd224(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int result;
  char v6;
  char v7;

  v2 = a1;
  v3 = a2;
  Function_21dd2bc();
  NNS_G2dInitImageProxy((int)&v6);
  Function_200718c(v3, 0x8Au, 1, 0, 0, 2, 0, 10, (int)&v6);
  Function_21d783c((int)&v7, (int)&v6, (int)(v2 + 6), v2[39], v2[41], 3);
  v2[11] = Function_21d785c(v2[3], (int)&v7, 0, 568, 49, 2);
  v4 = Function_21d785c(v2[3], (int)&v7, 256, 568, 49, 2);
  v2[12] = v4;
  Function_2021d0c(v4, 1);
  result = Function_21d5e08(v2[1]);
  if ( result == 3 )
    result = Function_2021d6c(v2[12], 1u);
  return result;
}

//----- (021DD2BC) --------------------------------------------------------
int __fastcall Function_21dd2bc(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  a1[38] = Function_2007204(a2, 0x8Bu, 1, a1 + 39, 10);
  v2[40] = Function_2007220(v3, 0x8Cu, 1, v2 + 41, 10);
  v2[42] = Function_2007204(v3, 0x8Eu, 1, v2 + 43, 10);
  v2[44] = Function_2007220(v3, 0x8Fu, 1, v2 + 45, 10);
  NNS_G2dInitImagePaletteProxy((int)(v2 + 6));
  return Function_200716c(v3, 0x90u, 2, 0, 10, (int)(v2 + 6));
}

//----- (021DD344) --------------------------------------------------------
uint *__fastcall Function_21dd344(int a1, int a2, int a3)
{
  int v3;
  uint *result;

  v3 = a1;
  result = Function_21d77c8(a2, a3, 0);
  *(uint *)(v3 + 20) = result;
  return result;
}

//----- (021DD358) --------------------------------------------------------
int __fastcall Function_21dd358(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Call_RemoveTaskFromTaskList(*(int **)(a1 + 20));
  result = 0;
  *(uint *)(v1 + 20) = 0;
  return result;
}

//----- (021DD368) --------------------------------------------------------
BOOL __fastcall Function_21dd368(int a1)
{
  return *(uint *)(a1 + 20) == 0;
}

//----- (021DD378) --------------------------------------------------------
uint *__fastcall Function_21dd378(uint *result)
{
  int v1;
  int v2;
  int v3;
  int (*v4)();
  int v5;
  int v6;
  int v7;

  v1 = (int)result;
  if ( result )
  {
    v2 = *(uchar *)(result[1] + 156);
    if ( result[4] != v2 )
    {
      result[46] = result;
      v3 = (int)(result + 46);
      *(uint *)(v3 + 8) = 0;
      *(uint *)(v3 + 4) = 0;
      if ( v2 )
      {
        if ( v2 == 1 )
        {
          *((ushort *)result + 98) = 8;
          if ( result[4] )
          {
            v4 = (int (*)())Function_21dd544;
            *((ushort *)result + 98) += 8;
          }
          else
          {
            v4 = (int (*)())Function_21dd46c;
          }
          Function_21dda7c(result);
          *(uint *)(v1 + 192) = *(uint *)(v1 + 44);
        }
        else
        {
          if ( v2 != 2 )
            return (uint *)free((int)(result + 46));
          *((ushort *)result + 98) = 8;
          if ( result[4] )
          {
            v4 = (int (*)())Function_21dd544;
            *((ushort *)result + 98) += 8;
          }
          else
          {
            v4 = (int (*)())Function_21dd46c;
          }
          result[48] = result[12];
          Function_21dd998(result);
          Function_21de324(v1);
        }
      }
      else
      {
        *((ushort *)result + 98) = 8;
        v4 = Function_21dd670;
        ((void (*)(void))Function_21dd998)();
        Function_21dda7c(v1);
        Function_21de324(v1);
      }
      *(uint *)(v1 + 16) = v2;
      v5 = Function_20192ec(*(uint *)(v1 + 8), 5) << 12;
      *(uint *)(v1 + 200) = v5;
      v6 = dword_21E0258[v2];
      *(uint *)(v1 + 204) = s32_div_f(v6 - v5, *(ushort *)(v1 + 196));
      *(uint *)(v1 + 208) = v6 >> 12;
      v7 = *(uint *)(v1 + 192);
      if ( v7 )
        Function_2021d6c(v7, 1u);
      result = Function_21dd344(v1, (int)v4, v1 + 184);
    }
  }
  return result;
}

//----- (021DD45C) --------------------------------------------------------
BOOL __fastcall Function_21dd45c(int a1)
{
  BOOL result;

  if ( a1 )
    result = Function_21dd368(a1);
  else
    result = 1;
  return result;
}

//----- (021DD46C) --------------------------------------------------------
int __fastcall Function_21dd46c(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  v2 = a2;
  result = *(uint *)(a2 + 4);
  v4 = *(uint *)a2;
  switch ( (uchar)result )
  {
    case 0:
      result = Function_2021fd0(*(uint *)(a2 + 8));
      if ( !result )
      {
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 1:
      if ( *(ushort *)(a2 + 12) )
      {
        v5 = *(uint *)(a2 + 16) + *(uint *)(a2 + 20);
        *(uint *)(a2 + 16) = v5;
        Function_2019184(*(uint *)(v4 + 8), 5u, 0, v5 >> 12);
        result = *(ushort *)(v2 + 12) - 1;
        *(ushort *)(v2 + 12) = result;
      }
      else
      {
        Function_2019184(*(uint *)(v4 + 8), 5u, 0, *(uint *)(a2 + 24));
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 4, 8, 0, 16);
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 2:
      Function_2019184(*(uint *)(v4 + 8), 6u, 0, dword_21E024C[*(uint *)(v4 + 16)]);
      *(ushort *)(v2 + 14) = 0;
      result = *(uint *)(v2 + 4) + 1;
      *(uint *)(v2 + 4) = result;
      break;
    case 3:
      REG_BLDALPHA_SUB = *(uchar *)(v4 + *(short *)(a2 + 14) + 212) | (ushort)(*(uchar *)(v4 + *(short *)(a2 + 14) + 228) << 8);
      result = (short)++*(ushort *)(a2 + 14);
      if ( result >= 16 )
      {
        Function_2021d6c(*(uint *)(a2 + 8), 0);
        result = Function_21dd358(v4);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DD544) --------------------------------------------------------
int __fastcall Function_21dd544(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  v2 = a2;
  result = *(uint *)(a2 + 4);
  v4 = *(uint *)a2;
  if ( (uint)result <= 4 )
    JUMPOUT(__CS__, *((short *)&off_21DD55E + result) + 35509600);
  switch ( (uchar)result )
  {
    case 0:
      result = Function_2021fd0(*(uint *)(a2 + 8));
      if ( !result )
      {
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 4, 8, 16, 0);
        *(ushort *)(v2 + 14) = 15;
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 1:
      --*(ushort *)(a2 + 14);
      REG_BLDALPHA_SUB = *(uchar *)(v4 + *(short *)(a2 + 14) + 212) | (ushort)(*(uchar *)(v4 + *(short *)(a2 + 14) + 228) << 8);
      result = *(short *)(a2 + 14);
      if ( !*(ushort *)(a2 + 14) )
      {
        Function_2019184(*(uint *)(v4 + 8), 6u, 0, dword_21E024C[*(uint *)(v4 + 16)]);
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 2:
      if ( *(ushort *)(a2 + 12) )
      {
        v5 = *(uint *)(a2 + 16) + *(uint *)(a2 + 20);
        *(uint *)(a2 + 16) = v5;
        Function_2019184(*(uint *)(v4 + 8), 5u, 0, v5 >> 12);
        result = *(ushort *)(v2 + 12) - 1;
        *(ushort *)(v2 + 12) = result;
      }
      else
      {
        Function_2019184(*(uint *)(v4 + 8), 5u, 0, *(uint *)(a2 + 24));
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 4, 8, 0, 16);
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 3:
      Function_2019184(*(uint *)(v4 + 8), 6u, 0, dword_21E024C[*(uint *)(v4 + 16)]);
      *(ushort *)(v2 + 14) = 0;
      result = *(uint *)(v2 + 4) + 1;
      *(uint *)(v2 + 4) = result;
      break;
    case 4:
      REG_BLDALPHA_SUB = *(uchar *)(v4 + *(short *)(a2 + 14) + 212) | (ushort)(*(uchar *)(v4 + *(short *)(a2 + 14) + 228) << 8);
      result = (short)++*(ushort *)(a2 + 14);
      if ( result >= 16 )
      {
        Function_2021d6c(*(uint *)(a2 + 8), 0);
        result = Function_21dd358(v4);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DD670) --------------------------------------------------------
int __fastcall Function_21dd670(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a2;
  result = *(uint *)a2;
  switch ( (uchar)*(uint *)(a2 + 4) )
  {
    case 0u:
      *(ushort *)(a2 + 14) = 15;
      ++*(uint *)(a2 + 4);
      goto LABEL_3;
    case 1u:
LABEL_3:
      --*(ushort *)(a2 + 14);
      REG_BLDALPHA_SUB = *(uchar *)(result + *(short *)(a2 + 14) + 212) | (ushort)(*(uchar *)(result + *(short *)(a2 + 14) + 228) << 8);
      if ( !*(ushort *)(a2 + 14) )
      {
        Function_2019184(*(uint *)(result + 8), 6u, 0, 0);
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 2u:
      if ( *(ushort *)(a2 + 12) )
      {
        v4 = *(uint *)(a2 + 16) + *(uint *)(a2 + 20);
        *(uint *)(a2 + 16) = v4;
        Function_2019184(*(uint *)(result + 8), 5u, 0, v4 >> 12);
        result = *(ushort *)(v2 + 12) - 1;
        *(ushort *)(v2 + 12) = result;
      }
      else
      {
        Function_2019184(*(uint *)(result + 8), 5u, 0, *(uint *)(a2 + 24));
        result = *(uint *)(v2 + 4) + 1;
        *(uint *)(v2 + 4) = result;
      }
      break;
    case 3u:
      result = Function_21dd358(result);
      break;
    default:
      return result;
  }
  return result;
}

//----- (021DD714) --------------------------------------------------------
int __fastcall Function_21dd714(int result)
{
  int v1;
  int v2;

  v1 = result;
  if ( result )
  {
    v2 = *(uint *)(result + 16);
    if ( v2 == 1 )
    {
      Function_21dd854();
      result = Function_21ddd80(v1);
    }
    else if ( v2 == 2 )
    {
      Function_21dd9dc();
      result = Function_21de0a0(v1);
    }
  }
  return result;
}

//----- (021DD740) --------------------------------------------------------
int __fastcall Function_21dd740(int a1)
{
  int v1;

  v1 = a1;
  if ( !a1 )
    return 1;
  if ( !Function_21dd368(a1) )
    return 0;
  if ( *(uint *)(v1 + 16) == 1 )
    Function_21de350(v1);
  return 1;
}

//----- (021DD768) --------------------------------------------------------
int __fastcall Function_21dd768(int result)
{
  int v1;
  int v2;

  v1 = result;
  if ( result )
  {
    v2 = *(uint *)(result + 16);
    if ( v2 == 1 )
    {
      Function_21de324(result);
      Function_21dd8f8(v1);
      result = Function_21ddfa8(v1);
    }
    else if ( v2 == 2 )
    {
      result = Function_21de2a4();
    }
  }
  return result;
}

//----- (021DD794) --------------------------------------------------------
int __fastcall Function_21dd794(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int result;
  int *v7;
  int v8;
  int v9;
  int *v10;
  int *v11;

  v1 = a1;
  v2 = Function_21d5eb0(*(uint *)(a1 + 4));
  if ( v2 <= 0 )
  {
    v8 = v1;
    v9 = *(uint *)(v1 + 128) - v2;
    v10 = (int *)(v1 + 128);
    *v10 = v9;
    result = *v10;
    v11 = (int *)(v8 + 128);
    if ( *v10 >= 10 )
    {
      result = *v11 - 10;
      *v11 = result;
    }
  }
  else
  {
    v3 = v1;
    v4 = *(uint *)(v1 + 128) - v2;
    v5 = (int *)(v1 + 128);
    *v5 = v4;
    result = *v5;
    v7 = (int *)(v3 + 128);
    if ( *v5 < 0 )
    {
      result = *v7 + 10;
      *v7 = result;
    }
  }
  return result;
}

//----- (021DD7E8) --------------------------------------------------------
int __fastcall Function_21dd7e8(int *a1)
{
  int *v1;
  int v2;
  int *v3;
  int v4;
  int result;
  int *v6;

  v1 = a1;
  v2 = Function_21d5eb0(a1[1]);
  v3 = v1;
  v4 = v1[32] + v2;
  v1 += 32;
  *v1 = v4;
  result = *v1;
  v6 = v3 + 32;
  if ( *v1 >= 0 )
  {
    if ( result >= 8 )
    {
      result = *v6 - 8;
      *v6 = result;
    }
  }
  else
  {
    result = *v6 + 8;
    *v6 = result;
  }
  return result;
}

//----- (021DD820) --------------------------------------------------------
int __fastcall Function_21dd820(int a1)
{
  int *v1;

  v1 = (int *)a1;
  if ( !a1 )
    return 1;
  if ( !Function_21dd368(a1) )
    return 0;
  if ( v1[4] == 1 )
  {
    Function_21de350(v1);
    Function_21dd794((int)v1);
  }
  else
  {
    Function_21dd7e8(v1);
  }
  return 1;
}

//----- (021DD854) --------------------------------------------------------
int __fastcall Function_21dd854(int *a1)
{
  int v1;
  int v2;
  uint v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int result;
  int *v9;
  int v10;
  char v11;
  char v12;

  v9 = a1;
  v1 = Function_21d780c(*a1);
  v2 = Function_21d5eb8(v9[1]);
  v3 = v2 + 3;
  if ( v2 + 3 >= 18 )
    v3 = v2 - 15;
  v4 = v9;
  v10 = 0;
  v5 = 192;
  do
  {
    NNS_G2dInitImageProxy((int)&v11);
    Function_21dbba8(v1, v3, v5, 2, &v11);
    v6 = Function_21dbd3c(v1);
    Function_21d783c((int)&v12, (int)&v11, (int)(v9 + 6), v6, 0, 2);
    v7 = Function_21d785c(v9[3], (int)&v12, 16, 368, 48, 2);
    v4[21] = v7;
    if ( !v7 )
      ErrorHandler();
    if ( (--v3 & 0x80000000) != 0 )
      v3 = 17;
    v5 += 32;
    ++v4;
    ++v10;
  }
  while ( v10 < 10 );
  result = (int)(v9 + 32);
  v9[32] = 0;
  return result;
}

//----- (021DD8F8) --------------------------------------------------------
int __fastcall Function_21dd8f8(int *a1)
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
  int result;
  int *v11;
  int i;
  int v13;

  v11 = a1;
  v13 = Function_21d780c(*a1);
  v1 = Function_21d5eb8(v11[1]);
  v2 = *(short *)(v11[1] + 160);
  if ( v2 <= 0 )
  {
    v8 = v1 - v2;
    v4 = v8 - 3;
    if ( v8 - 3 < 0 )
      v4 = v8 + 15;
    v9 = v11[32];
    v5 = -1;
    v7 = v9 + 6;
    if ( v9 + 6 >= 10 )
      v7 = v9 - 4;
    v2 = -v2;
  }
  else
  {
    v3 = v1 - v2;
    v4 = v3 + 4;
    if ( v3 + 4 >= 18 )
      v4 = v3 - 14;
    v5 = 1;
    v6 = v11[32];
    v7 = v6 - 1;
    if ( v6 - 1 < 0 )
      v7 = v6 + 9;
  }
  v11[31] = v2;
  result = 0;
  for ( i = 0; result < v2; i = result )
  {
    Function_21dbba8(v13, v4, 32 * v7 + 192, 2, 0);
    v4 += v5;
    if ( v4 >= 0 )
    {
      if ( v4 >= 18 )
        v4 = 0;
    }
    else
    {
      v4 = 17;
    }
    v7 -= v5;
    if ( v7 >= 0 )
    {
      if ( v7 >= 10 )
        v7 = 0;
    }
    else
    {
      v7 = 9;
    }
    result = i + 1;
  }
  return result;
}

//----- (021DD998) --------------------------------------------------------
int __fastcall Function_21dd998(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(uint *)(v2 + 84);
    if ( result )
    {
      result = Function_2021bd4(result);
      *(uint *)(v2 + 84) = 0;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 < 10 );
  return result;
}

//----- (021DD9B8) --------------------------------------------------------
int __fastcall Function_21dd9b8(int a1, int a2)
{
  if ( !a1 )
    return a2 == 0;
  if ( a2 & (1 << (a1 - 1)) )
    return 2 * a1 + 1;
  return 2 * a1;
}

//----- (021DD9DC) --------------------------------------------------------
int __fastcall Function_21dd9dc(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int result;
  int v10;
  char v11;
  char v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v10 = Function_21d5ec8(a1[1]);
  NNS_G2dInitImageProxy((int)&v11);
  Function_2006f00(18, 141, 1, 0, 0, 2, 6144, 10, (int)&v11);
  v5 = 0;
  v6 = v4;
  do
  {
    Function_21d783c((int)&v12, (int)&v11, (int)(v4 + 6), v4[43], v4[45], 2);
    v7 = Function_21d785c(v4[3], (int)&v12, 240, 368, 48, 2);
    v6[13] = v7;
    if ( !v7 )
      ErrorHandler();
    v8 = Function_21dd9b8(v5, v10);
    Function_2021d6c(v6[13], v8);
    ++v5;
    ++v6;
  }
  while ( v5 < 8 );
  result = Function_21d5ec0(v4[1]);
  v4[32] = result;
  return result;
}

//----- (021DDA7C) --------------------------------------------------------
int __fastcall Function_21dda7c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(uint *)(v2 + 52);
    if ( result )
    {
      result = Function_2021bd4(result);
      *(uint *)(v2 + 52) = 0;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 < 8 );
  return result;
}

//----- (021DDA9C) --------------------------------------------------------
int __fastcall Function_21dda9c(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v3 = a1;
  if ( *(ushort *)(a2 + 22) )
  {
    result = *(ushort *)(a2 + 22) - 1;
    *(ushort *)(a2 + 22) = result;
  }
  else if ( *(ushort *)(a2 + 20) )
  {
    --*(ushort *)(a2 + 20);
    v5 = *(uint *)(a2 + 8) + *(uint *)(a2 + 16);
    *(uint *)(a2 + 8) = v5;
    v7 = SLOWORD(dword_21E028C[v5 >> 12]) << 12;
    v8 = SHIWORD(dword_21E028C[v5 >> 12]) << 12;
    v9 = 0;
    result = Function_2021c50(*(uint **)(a2 + 4), &v7);
  }
  else
  {
    v6 = *(uint *)(a2 + 12) >> 12;
    v7 = SLOWORD(dword_21E028C[v6]) << 12;
    v8 = *(short *)(v6 * 4 + 35521166) << 12;
    v9 = 0;
    Function_2021c50(*(uint **)(v2 + 4), &v7);
    result = Function_21ddbd0(v3, v2);
  }
  return result;
}

//----- (021DDB20) --------------------------------------------------------
int __fastcall Function_21ddb20(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v2 = a2;
  v3 = a1;
  if ( *(ushort *)(a2 + 22) )
  {
    result = *(ushort *)(a2 + 22) - 1;
    *(ushort *)(a2 + 22) = result;
  }
  else if ( *(ushort *)(a2 + 20) )
  {
    --*(ushort *)(a2 + 20);
    v5 = *(uint *)(a2 + 8) + *(uint *)(a2 + 16);
    *(uint *)(a2 + 8) = v5;
    v6 = v5 >> 12;
    v8 = (256 - SLOWORD(dword_21E028C[v6])) << 12;
    v9 = *(short *)(v6 * 4 + 35521166) << 12;
    v10 = 0;
    result = Function_2021c50(*(uint **)(a2 + 4), &v8);
  }
  else
  {
    v7 = *(uint *)(a2 + 12) >> 12;
    v8 = (256 - SLOWORD(dword_21E028C[v7])) << 12;
    v9 = *(short *)(v7 * 4 + 35521166) << 12;
    v10 = 0;
    Function_2021c50(*(uint **)(a2 + 4), &v8);
    if ( *(uint *)(v2 + 24) )
    {
      *(ushort *)(v2 + 20) = *(ushort *)(v2 + 40);
      *(uint *)(v2 + 8) = *(uint *)(v2 + 28);
      *(uint *)(v2 + 16) = *(uint *)(v2 + 36);
      *(uint *)(v2 + 12) = *(uint *)(v2 + 32);
      *(ushort *)(v2 + 22) = *(ushort *)(v2 + 42);
      result = 0;
      *(uint *)(v2 + 24) = 0;
    }
    else
    {
      result = Function_21ddbd0(v3, v2);
    }
  }
  return result;
}

//----- (021DDBD0) --------------------------------------------------------
int __fastcall Function_21ddbd0(int *a1, int *a2)
{
  int *v2;
  int v3;

  v2 = a1;
  v3 = *a2;
  if ( !*(uchar *)(*a2 + 459) )
    ErrorHandler();
  --*(uchar *)(v3 + 459);
  return Call_RemoveTaskFromTaskList(v2);
}

//----- (021DDBF8) --------------------------------------------------------
uint *__fastcall Function_21ddbf8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  int v9;
  int v10;
  short v11;
  int (__fastcall *v12)(int, int);
  int v13;
  uint *result;
  int v15;

  v8 = a2;
  v9 = a1;
  v10 = a3;
  v15 = a4;
  v11 = a7;
  if ( !a2 )
    ErrorHandler();
  if ( a7 )
    v11 = a7 - 1;
  *(uint *)v10 = v9;
  *(uint *)(v10 + 4) = v8;
  *(ushort *)(v10 + 20) = a6;
  *(ushort *)(v10 + 22) = v11;
  if ( a8 )
    v12 = Function_21ddb20;
  else
    v12 = Function_21dda9c;
  *(uint *)(v10 + 8) = *((ushort *)dword_21E0264 + v15) << 12;
  v13 = *((ushort *)dword_21E0264 + a5) << 12;
  *(uint *)(v10 + 12) = v13;
  *(uint *)(v10 + 16) = s32_div_f(v13 - *(uint *)(v10 + 8), a6);
  *(uint *)(v10 + 24) = 0;
  result = Function_21d77c8((int)v12, v10, 0);
  if ( result )
  {
    result = (uint *)459;
    ++*(uchar *)(v9 + 459);
  }
  return result;
}

//----- (021DDC74) --------------------------------------------------------
uint __fastcall Function_21ddc74(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint result;

  v5 = a2;
  *(uint *)(a2 + 24) = 1;
  *(ushort *)(a2 + 42) = a3;
  if ( a3 )
    --*(ushort *)(a2 + 42);
  v6 = a5 - a4;
  if ( a5 - a4 < 0 )
    v6 = a4 - a5;
  v7 = 6 * v6;
  v8 = *((ushort *)dword_21E0264 + a4);
  *(ushort *)(v5 + 40) = 6 * v6;
  *(uint *)(v5 + 28) = v8 << 12;
  v9 = *((ushort *)dword_21E0264 + a5) << 12;
  *(uint *)(v5 + 32) = v9;
  result = s32_div_f(v9 - *(uint *)(v5 + 28), v7);
  *(uint *)(v5 + 36) = result;
  return result;
}

//----- (021DDCC0) --------------------------------------------------------
int __fastcall Function_21ddcc0(int a1, int a2)
{
  uchar *v2;
  int result;
  int v4;
  int v5;

  v2 = (uchar *)a2;
  result = 460;
  v4 = *(uchar *)(a2 + 460);
  v5 = *(uint *)a2;
  if ( *(uchar *)(a2 + 460) )
  {
    if ( v4 == 1 )
    {
      *(uchar *)(a2 + 461) -= 2;
      if ( !*(uchar *)(a2 + 461) )
        *(uchar *)(a2 + 460) = 0;
    }
    else if ( v4 == 2 && !*(uchar *)(a2 + 459) )
    {
      *(uchar *)(a2 + 460) = 3;
      result = Function_21d79b8(a2, (int)Function_21ddd78, v5);
    }
  }
  else
  {
    ++*(uchar *)(a2 + 458);
    Function_21ddbf8(
      a2,
      *(uint *)(v5 + 4 * (6 - *(uchar *)(a2 + 458)) + 84),
      a2 + 8 + 44 * (6 - *(uchar *)(a2 + 458)),
      0,
      7 - *(uchar *)(a2 + 458),
      6 * (7 - *(uchar *)(a2 + 458)),
      0,
      0);
    result = 461;
    v2[461] = 4;
    if ( v2[458] < 6u )
    {
      if ( v2[461] )
      {
        result = 460;
        v2[460] = 1;
      }
    }
    else
    {
      result = 460;
      v2[460] = 2;
    }
  }
  return result;
}

//----- (021DDD78) --------------------------------------------------------
int __fastcall Function_21ddd78(int a1)
{
  return Function_21dd358(a1);
}

//----- (021DDD80) --------------------------------------------------------
uint *__fastcall Function_21ddd80(int a1)
{
  int v1;
  uint *result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = (uint *)malloc(0xAu, 464);
  v3 = (int)result;
  if ( result )
  {
    v4 = 0;
    *(uint *)v3 = v1;
    *(uchar *)(v3 + 460) = 0;
    *(uchar *)(v3 + 458) = 0;
    *(uchar *)(v3 + 459) = 0;
    do
    {
      v5 = v3 + v4++;
      *(uchar *)(v5 + 448) = 0;
    }
    while ( v4 < 8 );
    result = Function_21dd344(v1, (int)Function_21ddcc0, v3);
    if ( !result )
      result = (uint *)free(v3);
  }
  return result;
}

//----- (021DDDD0) --------------------------------------------------------
int __fastcall Function_21dddd0(int a1, int a2)
{
  int result;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int i;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  result = a2;
  v11 = a2;
  v3 = *(uint **)a2;
  if ( *(uchar *)(a2 + 460) )
  {
    if ( *(uchar *)(a2 + 460) == 1 )
    {
      result = *(uchar *)(a2 + 459);
      if ( !*(uchar *)(a2 + 459) )
      {
        *(uchar *)(a2 + 460) = 2;
        result = Function_21d79b8(a2, (int)Function_21ddd78, (int)v3);
      }
    }
  }
  else
  {
    if ( *(short *)(v3[1] + 160) <= 0 )
    {
      v5 = v3[32];
      v6 = 1;
      v7 = 1;
      v16 = 0;
    }
    else
    {
      v4 = v3[32];
      v5 = v4 + 5;
      if ( v4 + 5 >= 10 )
        v5 = v4 - 5;
      v6 = -1;
      v7 = 6;
      v16 = 7;
    }
    v8 = v3[31];
    v20 = 0;
    if ( v8 > 0 )
    {
      v17 = 0;
      do
      {
        Function_21ddbf8(v11, *(uint *)(*(uint *)(v11 + 4) + 4 * v5), v11 + 8 + 44 * v5, v7, v16, v17 + 6, 0, 0);
        v5 += v6;
        v7 += v6;
        if ( v5 < 10 )
        {
          if ( v5 < 0 )
            v5 = 9;
        }
        else
        {
          v5 = 0;
        }
        v8 = v3[31];
        v17 += 6;
        ++v20;
      }
      while ( v20 < v8 );
    }
    v19 = 6 - v8;
    for ( i = 0; i < v19; ++i )
    {
      Function_21ddbf8(
        v11,
        *(uint *)(*(uint *)(v11 + 4) + 4 * v5),
        v11 + 8 + 44 * v5,
        v7,
        v7 - v6 * v3[31],
        6 * v3[31],
        0,
        0);
      v5 += v6;
      v7 += v6;
      if ( v5 < 10 )
      {
        if ( v5 < 0 )
          v5 = 9;
      }
      else
      {
        v5 = 0;
      }
    }
    if ( *(short *)(v3[1] + 160) <= 0 )
    {
      v14 = 7;
      v15 = v3[31];
      v13 = 7 - v15;
    }
    else
    {
      v14 = 0;
      v15 = v3[31];
      v13 = v3[31];
    }
    v9 = 0;
    if ( v15 > 0 )
    {
      v18 = 0;
      do
      {
        Function_21ddbf8(
          v11,
          *(uint *)(*(uint *)(v11 + 4) + 4 * v5),
          v11 + 8 + 44 * v5,
          v14,
          v13,
          6 * (v3[31] - v9),
          v18 + 6,
          0);
        v10 = v5 + v6;
        v13 += v6;
        if ( v10 < 10 )
          v5 = v10 + (v10 < 0 ? 0xA : 0);
        else
          v5 = v10 - 10;
        ++v9;
        v18 += 6;
      }
      while ( v9 < v15 );
    }
    result = v11;
    ++*(uchar *)(v11 + 460);
  }
  return result;
}

//----- (021DDFA8) --------------------------------------------------------
int *__fastcall Function_21ddfa8(int a1)
{
  int v1;
  int *result;
  int *v3;
  int v4;
  int v5;

  v1 = a1;
  result = (int *)malloc(0xAu, 464);
  v3 = result;
  if ( result )
  {
    *result = v1;
    result[1] = v1 + 84;
    v4 = 0;
    *((uchar *)v3 + 460) = 0;
    *((uchar *)v3 + 458) = 0;
    *((uchar *)v3 + 459) = 0;
    do
    {
      v5 = (int)v3 + v4++;
      *(uchar *)(v5 + 448) = 0;
    }
    while ( v4 < 10 );
    result = Function_21dd344(v1, (int)Function_21dddd0, (int)v3);
    if ( !result )
      result = (int *)free((int)v3);
  }
  return result;
}

//----- (021DDFFC) --------------------------------------------------------
int __fastcall Function_21ddffc(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v9 = *(uint *)a2;
  result = a2;
  v7 = a2;
  if ( *(uchar *)(a2 + 460) )
  {
    if ( *(uchar *)(a2 + 460) == 1 )
    {
      result = *(uchar *)(a2 + 459);
      if ( !*(uchar *)(a2 + 459) )
      {
        *(uchar *)(a2 + 460) = 2;
        result = Function_21d79b8(a2, (int)Function_21ddd78, v9);
      }
    }
  }
  else
  {
    v3 = 0;
    v4 = *(uint *)(v9 + 128);
    v5 = 6;
    v8 = 0;
    v6 = 36;
    v10 = a2 + 8;
    do
    {
      Function_21ddbf8(v7, *(uint *)(v9 + 4 * v4 + 52), v10 + 44 * v4, 0, v5, v6, v3, 1);
      ++v4;
      v6 -= 6;
      --v5;
      if ( v4 >= 8 )
        v4 = 0;
      v3 += 6;
      ++v8;
    }
    while ( v8 < 6 );
    result = v7;
    ++*(uchar *)(v7 + 460);
  }
  return result;
}

//----- (021DE0A0) --------------------------------------------------------
uint *__fastcall Function_21de0a0(int a1)
{
  int v1;
  uint *result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = (uint *)malloc(0xAu, 464);
  v3 = (int)result;
  if ( result )
  {
    v4 = 0;
    *(uint *)v3 = v1;
    *(uchar *)(v3 + 460) = 0;
    *(uchar *)(v3 + 458) = 0;
    *(uchar *)(v3 + 459) = 0;
    do
    {
      v5 = v3 + v4++;
      *(uchar *)(v5 + 448) = 0;
    }
    while ( v4 < 8 );
    result = Function_21dd344(v1, (int)Function_21ddffc, v3);
    if ( !result )
      result = (uint *)free(v3);
  }
  return result;
}

//----- (021DE0F0) --------------------------------------------------------
int __fastcall Function_21de0f0(int a1, int a2)
{
  int result;
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
  int i;
  int v14;
  int v15;
  int v16;
  int v17;

  v17 = *(uint *)a2;
  result = a2;
  v9 = a2;
  if ( *(uchar *)(a2 + 460) )
  {
    if ( *(uchar *)(a2 + 460) == 1 )
    {
      result = *(uchar *)(a2 + 459);
      if ( !*(uchar *)(a2 + 459) )
      {
        *(uchar *)(a2 + 460) = 2;
        result = Function_21d79b8(a2, (int)Function_21ddd78, v17);
      }
    }
  }
  else
  {
    v3 = Function_21d5eb0(*(uint *)(v17 + 4));
    v16 = v3;
    v4 = *(uint *)(v17 + 128);
    if ( v3 >= 0 )
    {
      v14 = v3;
      v5 = 1;
      v6 = 6;
      v11 = 7;
    }
    else
    {
      v4 += 5;
      if ( v4 >= 8 )
        v4 -= 8;
      v14 = -v3;
      v5 = -1;
      v6 = 1;
      v11 = 0;
    }
    v7 = 0;
    v15 = v14 + 6;
    if ( v14 > 0 )
    {
      v12 = 0;
      do
      {
        Function_21ddbf8(v9, *(uint *)(v17 + 4 * v4 + 52), v9 + 8 + 44 * v4, v6, v11, v12 + 6, 0, 1);
        v6 -= v5;
        v4 += v5;
        if ( v4 >= 0 )
        {
          if ( v4 >= 8 )
            v4 -= 8;
        }
        else
        {
          v4 += 8;
        }
        ++v7;
        v12 += 6;
      }
      while ( v7 < v14 );
    }
    for ( i = 0; v7 < 8; ++v7 )
    {
      v11 -= v5;
      Function_21ddbf8(v9, *(uint *)(v17 + 4 * v4 + 52), v9 + 8 + 44 * v4, v6, v11, 6 * v14, i, 1);
      if ( v6 && v6 != 7 )
        v6 -= v5;
      else
        i += 6;
      v4 += v5;
      if ( v4 >= 0 )
      {
        if ( v4 >= 8 )
          v4 -= 8;
      }
      else
      {
        v4 += 8;
      }
    }
    if ( v16 >= 0 )
    {
      v10 = 0;
      v8 = v14 - 2;
    }
    else
    {
      v10 = 7;
      v8 = 9 - v14;
    }
    for ( ; v7 < v15; ++v7 )
    {
      Function_21ddc74(v9, v9 + 8 + 44 * v4, 6, v10, v8);
      v8 -= v5;
      v4 += v5;
      if ( v4 >= 0 )
      {
        if ( v4 >= 8 )
          v4 -= 8;
      }
      else
      {
        v4 += 8;
      }
    }
    result = v9;
    ++*(uchar *)(v9 + 460);
  }
  return result;
}

//----- (021DE2A4) --------------------------------------------------------
uint *__fastcall Function_21de2a4(int a1)
{
  int v1;
  uint *result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = (uint *)malloc(0xAu, 464);
  v3 = (int)result;
  if ( result )
  {
    v4 = 0;
    *(uint *)v3 = v1;
    *(uchar *)(v3 + 460) = 0;
    *(uchar *)(v3 + 458) = 0;
    *(uchar *)(v3 + 459) = 0;
    do
    {
      v5 = v3 + v4++;
      *(uchar *)(v5 + 448) = 0;
    }
    while ( v4 < 8 );
    result = Function_21dd344(v1, (int)Function_21de0f0, v3);
    if ( !result )
      result = (uint *)free(v3);
  }
  return result;
}

//----- (021DE2F4) --------------------------------------------------------
int __fastcall Function_21de2f4(int result)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = result;
  if ( result )
  {
    result = *(uint *)(result + 52);
    if ( result )
    {
      v2 = Function_21d5ec8(*(uint *)(v1 + 4));
      v3 = 0;
      do
      {
        v4 = Function_21dd9b8(v3, v2);
        result = Function_2021d6c(*(uint *)(v1 + 52), v4);
        ++v3;
        v1 += 4;
      }
      while ( v3 < 8 );
    }
  }
  return result;
}

//----- (021DE324) --------------------------------------------------------
uint Function_21de324()
{
  return Function_2019120(4u, 0);
}

//----- (021DE330) --------------------------------------------------------
uint Function_21de330()
{
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 1, 63, 14, 2);
  return Function_2019120(4u, 1);
}

//----- (021DE350) --------------------------------------------------------
uint __fastcall Function_21de350(int a1)
{
  int v1;
  int v2;
  uint v3;
  short *v4;
  int v5;
  int v6;
  int v7;
  uint v9;

  v1 = a1;
  v2 = Function_21d5eb8(*(uint *)(a1 + 4));
  v3 = v2 + 3;
  if ( v2 + 3 >= 18 )
    v3 = v2 - 15;
  v4 = &word_21E0274;
  v9 = 0;
  do
  {
    Function_2079af4(**(uint ***)(v1 + 4), v3, *(ushort **)(v1 + 132));
    Function_201ae78(v1 + 136, 0, (ushort)*v4, (ushort)v4[1], 0x68u, 0x11u);
    v5 = v4[1] + 2;
    v6 = *v4;
    v7 = *(uint *)(v1 + 132);
    Function_201d78c(v1 + 136, 0);
    if ( (--v3 & 0x80000000) != 0 )
      v3 = 17;
    v4 += 2;
    ++v9;
  }
  while ( v9 < 6 );
  Function_201accc(v1 + 136);
  return Function_21de330();
}

//----- (021DE3E8) --------------------------------------------------------
int __fastcall Function_21de3e8(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5;
  int v6;
  int v7;
  uint *v8;
  uint *v9;
  int v11;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v11 = a4;
  v8 = (uint *)malloc(0xAu, 60);
  v9 = v8;
  if ( !v8 )
    return 0;
  v8[1] = v6;
  v8[2] = v7;
  v8[3] = v11;
  v8[4] = a5;
  v8[5] = Function_21d77d8(v6);
  v9[6] = Function_21d77f4(v6);
  v9[13] = 0;
  *v9 = Function_21d5e08(v7) == 3;
  Function_21de450(v9);
  *v5 = v9;
  return 1;
}

//----- (021DE440) --------------------------------------------------------
uint __fastcall Function_21de440(int a1)
{
  int v1;

  v1 = a1;
  Function_21de51c();
  return free(v1);
}

//----- (021DE450) --------------------------------------------------------
uint __fastcall Function_21de450(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  uint result;
  uint *v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char v16;
  char v17;
  int v18;

  v18 = a4;
  v4 = a1;
  if ( *a1 )
  {
    v5 = a1[5];
    v6 = Function_21d77d0(a1[1]);
    Function_21d783c((int)&v17, (int)&v16, v6, *(uint *)(v5 + 28), *(uint *)(v5 + 32), 0);
    v7 = Function_207ce78(1, 1u);
    result = Function_2006f50(16, v7, 0, &v15, 10);
    v14 = result;
    if ( result )
    {
      v9 = (uint *)&dword_21E04CC;
      v10 = 0;
      *(uint *)(v15 + 8) = REG_DISPCNT & 0x300010;
      v11 = v4;
      do
      {
        NNS_G2dInitImageProxy((int)&v16);
        NNS_G2dLoadImage1DMapping((ushort *)v15, *v9, 1, &v16);
        v12 = Function_21d785c(v4[4], (int)&v17, 0, 0, 0, 1);
        v11[7] = v12;
        Function_2021e90(v12, v9[1]);
        Function_2021cac(v11[7], 0);
        Function_2021cf8(v11[7], 1);
        v11[10] = 0;
        ++v10;
        v9 += 2;
        ++v11;
      }
      while ( v10 < 3 );
      result = free(v14);
    }
  }
  else
  {
    v13 = 0;
    result = 0;
    do
    {
      v4[7] = 0;
      v4[10] = 0;
      ++v13;
      ++v4;
    }
    while ( v13 < 3 );
  }
  return result;
}

//----- (021DE51C) --------------------------------------------------------
int __fastcall Function_21de51c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = *(uint *)(v1 + 28);
    if ( result )
      result = Function_2021bd4(result);
    ++v2;
    v1 += 4;
  }
  while ( v2 < 3 );
  return result;
}

//----- (021DE538) --------------------------------------------------------
int __fastcall Function_21de538(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 0;
  v3 = a1;
  do
  {
    if ( !*(uint *)(v3 + 40) )
    {
      *(uint *)(a1 + 4 * v2 + 40) = a2;
      return v2;
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 3 );
  return -1;
}

//----- (021DE560) --------------------------------------------------------
int __fastcall Function_21de560(int a1, int a2)
{
  int v2;

  v2 = 0;
  do
  {
    if ( a2 == *(uint *)(a1 + 40) )
      return v2;
    ++v2;
    a1 += 4;
  }
  while ( v2 < 3 );
  return -1;
}

//----- (021DE57C) --------------------------------------------------------
int __fastcall Function_21de57c(int a1, int a2, int a3)
{
  int result;

  result = a1 + 4 * a2;
  *(uint *)(result + 40) = a3;
  return result;
}

//----- (021DE584) --------------------------------------------------------
uint *__fastcall Function_21de584(uint *result)
{
  uint *v1;

  v1 = result;
  if ( *result )
  {
    Function_21de59c();
    result = (uint *)Function_21de5d4(v1);
  }
  return result;
}

//----- (021DE59C) --------------------------------------------------------
uint __fastcall Function_21de59c(int a1)
{
  int v1;
  uint result;
  uint v3;
  int v4;
  int v5;

  v1 = a1;
  result = Function_21d5e74(*(uint *)(a1 + 8));
  v3 = result;
  if ( result )
  {
    v4 = Function_21de538(v1, 1);
    Function_21de718(v1, v4, v3);
    v5 = v1 + 28;
    Function_2021d6c(*(uint *)(v5 + 4 * v4), 6u);
    result = Function_2021cac(*(uint *)(v5 + 4 * v4), 1);
  }
  return result;
}

//----- (021DE5D4) --------------------------------------------------------
uint __fastcall Function_21de5d4(int a1)
{
  int v1;
  uint result;
  ushort v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char v8;
  int v9;
  int v10;

  v1 = a1;
  result = Function_21d5f7c(*(uint *)(a1 + 8));
  v3 = result;
  if ( result )
  {
    v4 = Function_21de538(v1, 3);
    Function_21d9b1c(*(uint *)(v1 + 24), &v9);
    v10 += 0x8000;
    if ( Function_21d5e10(*(uint *)(v1 + 8)) == 1 )
      v8 = 1;
    else
      v8 = 2;
    v5 = Function_207ce78(v3, 1u);
    Function_2006ec0(16, v5, 0, dword_21E04CC[2 * v4], 0, 0, 10);
    v6 = Function_207ce78(v3, 2u);
    Call_LoadFromNARC_RLCN(16, v6, 1u, 32 * dword_21E04D0[2 * v4], 32, 10);
    v7 = v1 + 28;
    Function_2021e80(*(uint *)(v7 + 4 * v4), v8);
    Function_21d78ac(*(uint *)(v7 + 4 * v4), 2);
    Function_2021c50(*(uint **)(v7 + 4 * v4), &v9);
    Function_2021d6c(*(uint *)(v7 + 4 * v4), 0);
    result = Function_2021cac(*(uint *)(v7 + 4 * v4), 1);
  }
  return result;
}

//----- (021DE694) --------------------------------------------------------
int __fastcall Function_21de694(int a1, uint *a2, uint *a3, int a4)
{
  int v4;
  uint *v5;
  uint *v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = a2;
  a2[2] = 0;
  v6 = a3;
  v7 = Function_21d5e10(*(uint *)(a1 + 8)) == 1;
  v8 = *(uint *)(v4 + 4);
  if ( v7 )
  {
    v9 = Function_21d77e8(v8);
    v10 = Function_21d5e2c(*(uint *)(v4 + 8));
    Function_21dcd30(v9, v10, &v14, &v13);
    *v5 = (v14 + 10) << 12;
    v5[1] = (v13 + 8) << 12;
    result = 1;
    *v6 = 1;
  }
  else
  {
    v11 = Function_21d7820(v8);
    *v5 = v11 + 112 + 24 * Function_21d5e14(*(uint *)(v4 + 8)) + 10;
    v5[1] = 24 * Function_21d5e1c(*(uint *)(v4 + 8)) + 48;
    *v5 <<= 12;
    v5[1] <<= 12;
    result = 2;
    *v6 = 2;
  }
  return result;
}

//----- (021DE718) --------------------------------------------------------
int __fastcall Function_21de718(int result, int a2, ushort a3, int a4)
{
  int v4;
  int v5;
  ushort v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12;

  v4 = a2;
  v5 = result;
  v6 = a3;
  if ( a2 >= 0 )
  {
    Function_21de694(result, &v12, &v11, a4);
    v7 = Function_207ce78(v6, 1u);
    Function_2006ec0(16, v7, 0, dword_21E04CC[2 * v4], 0, 0, 10);
    v8 = Function_207ce78(v6, 2u);
    Call_LoadFromNARC_RLCN(16, v8, 1u, 32 * dword_21E04D0[2 * v4], 32, 10);
    v9 = v5 + 28;
    v10 = 4 * v4;
    Function_2021e80(*(uint *)(v9 + v10), v11);
    Function_21d78ac(*(uint *)(v9 + v10), 3);
    result = Function_2021c50(*(uint **)(v9 + v10), (int *)&v12);
  }
  return result;
}

//----- (021DE7A0) --------------------------------------------------------
uint *__fastcall Function_21de7a0(uint *result)
{
  int v1;
  int v2;
  ushort v3;
  int v4;
  uint *v5;
  int v6;
  int v7;

  v1 = (int)result;
  if ( *result )
  {
    v2 = Function_21de560((int)result, 1);
    if ( v2 >= 0 )
    {
      Function_21de57c(v1, v2, 2);
      Function_2021d6c(*(uint *)(v1 + 4 * v2 + 28), 2u);
    }
    result = (uint *)Function_21d5e74(*(uint *)(v1 + 8));
    v3 = (ushort)result;
    if ( result )
    {
      result = (uint *)Function_21de538(v1, 1);
      v5 = result;
      if ( (int)result >= 0 )
      {
        Function_21de718(v1, (int)result, v3, v4);
        v6 = v1 + 28;
        v7 = 4 * (uint)v5;
        Function_2021d6c(*(uint *)(v6 + v7), 1u);
        result = (uint *)Function_2021cac(*(uint *)(v6 + v7), 1);
      }
    }
  }
  return result;
}

//----- (021DE800) --------------------------------------------------------
int __fastcall Function_21de800(uint *a1)
{
  int v1;
  int v3;
  int v4;
  int v5;

  v1 = (int)a1;
  if ( !*a1 )
    return 1;
  v3 = Function_21de560((int)a1, 1);
  if ( v3 >= 0 && Function_2021fd0(*(uint *)(v1 + 4 * v3 + 28)) )
    return 0;
  v4 = Function_21de560(v1, 2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( Function_2021fd0(*(uint *)(v1 + 4 * v4 + 28)) )
      return 0;
    Function_21de57c(v1, v5, 0);
  }
  return 1;
}

//----- (021DE858) --------------------------------------------------------
uint *__fastcall Function_21de858(int a1, int a2, uint *a3, int a4, int a5)
{
  int v5;
  int v6;
  uint *v7;
  uint *result;
  uint *v9;
  uint *v10;
  int v11;
  uint *v12;
  int v13;
  uint *v14;
  int v15;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v15 = a4;
  result = (uint *)malloc(0xAu, 52);
  v9 = result;
  if ( result )
  {
    *result = v5;
    result[1] = *(uint *)(v5 + 4 * v6 + 28);
    Function_2021d28();
    v11 = v10[1];
    v12 = v9 + 2;
    *v12 = *v10;
    v12[1] = v11;
    v9[4] = v10[2];
    v13 = v7[1];
    v14 = v9 + 5;
    *v14 = *v7;
    v14[1] = v13;
    v9[7] = v7[2];
    v9[8] = s32_div_f(v9[5] - v9[2], a5);
    v9[9] = s32_div_f(v9[6] - v9[3], a5);
    v9[11] = a5;
    v9[10] = v15;
    v9[12] = 0;
    if ( Function_21d77c8((int)Function_21de8e0, (int)v9, 0) )
    {
      result = (uint *)(*(uint *)(v5 + 52) + 1);
      *(uint *)(v5 + 52) = result;
    }
    else
    {
      result = (uint *)free((int)v9);
    }
  }
  return result;
}

//----- (021DE8E0) --------------------------------------------------------
int __fastcall Function_21de8e0(int *a1, int *a2)
{
  int *v2;
  int *v3;
  int result;

  v2 = a2;
  v3 = a1;
  result = a2[12];
  if ( result )
  {
    if ( result == 1 )
    {
      result = Function_2021fd0(a2[1]);
      if ( !result )
      {
        Function_21d78ac(v2[1], v2[10]);
        --*(uint *)(*v2 + 52);
        Call_RemoveTaskFromTaskList(v3);
        result = Function_21d79b8((int)v2, 0, 0);
      }
    }
  }
  else if ( a2[11] )
  {
    a2[2] += a2[8];
    a2[3] += a2[9];
    Function_2021c50((uint *)a2[1], a2 + 2);
    result = v2[11] - 1;
    v2[11] = result;
  }
  else
  {
    Function_2021c50((uint *)a2[1], a2 + 5);
    result = v2[12] + 1;
    v2[12] = result;
  }
  return result;
}

//----- (021DE954) --------------------------------------------------------
uint *__fastcall Function_21de954(uint *result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = (int)result;
  if ( *result )
  {
    result = (uint *)Function_21de560((int)result, 1);
    v5 = (int)result;
    if ( (int)result >= 0 )
    {
      Function_21d9b1c(*(uint *)(v4 + 24), &v6);
      v7 += 0x8000;
      Function_21de57c(v4, v5, 3);
      Function_2021d6c(*(uint *)(v4 + 4 * v5 + 28), 3u);
      result = Function_21de858(v4, v5, &v6, 2, 12);
    }
  }
  return result;
}

//----- (021DE9A8) --------------------------------------------------------
BOOL __fastcall Function_21de9a8(int a1)
{
  return *(uint *)(a1 + 52) == 0;
}

//----- (021DE9B8) --------------------------------------------------------
uint *__fastcall Function_21de9b8(uint *result)
{
  int v1;
  uint *v2;

  v1 = (int)result;
  if ( *result )
  {
    result = (uint *)Function_21de560((int)result, 1);
    v2 = result;
    if ( (int)result >= 0 )
    {
      Function_21de57c(v1, (int)result, 2);
      result = (uint *)Function_2021d6c(*(uint *)(v1 + 4 * (uint)v2 + 28), 2u);
    }
  }
  return result;
}

//----- (021DE9E4) --------------------------------------------------------
int __fastcall Function_21de9e4(uint *a1)
{
  int v1;
  int v2;
  int v3;

  v1 = (int)a1;
  if ( *a1 )
  {
    v2 = Function_21de560((int)a1, 2);
    v3 = v2;
    if ( v2 >= 0 )
    {
      if ( Function_2021fd0(*(uint *)(v1 + 4 * v2 + 28)) )
        return 0;
      Function_21de57c(v1, v3, 0);
    }
  }
  return 1;
}

//----- (021DEA18) --------------------------------------------------------
uint *__fastcall Function_21dea18(uint *result)
{
  int v1;
  int v2;
  int v3;
  char v4;
  char v5;

  v1 = (int)result;
  if ( *result )
  {
    result = (uint *)Function_21de560((int)result, 3);
    v3 = (int)result;
    if ( (int)result >= 0 )
    {
      Function_21de694(v1, &v5, &v4, v2);
      Function_21de57c(v1, v3, 1);
      Function_2021d6c(*(uint *)(v1 + 4 * v3 + 28), 4u);
      result = Function_21de858(v1, v3, &v5, 3, 12);
    }
  }
  return result;
}

//----- (021DEA64) --------------------------------------------------------
BOOL __fastcall Function_21dea64(int a1)
{
  return *(uint *)(a1 + 52) == 0;
}

//----- (021DEA74) --------------------------------------------------------
uint *__fastcall Function_21dea74(uint *result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  char v8;
  char v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = (int)result;
  if ( *result )
  {
    v5 = Function_21de560((int)result, 3);
    result = (uint *)Function_21de560(v4, 1);
    v7 = (int)result;
    if ( v5 >= 0 && (int)result >= 0 )
    {
      Function_21de694(v4, &v9, &v8, v6);
      Function_21de57c(v4, v5, 1);
      Function_2021d6c(*(uint *)(v4 + 4 * v5 + 28), 4u);
      Function_21de858(v4, v5, &v9, 3, 12);
      Function_21d9b1c(*(uint *)(v4 + 24), &v9);
      v10 += 0x8000;
      Function_21de57c(v4, v7, 3);
      Function_2021d6c(*(uint *)(v4 + 4 * v7 + 28), 3u);
      result = Function_21de858(v4, v7, &v9, 2, 12);
    }
  }
  return result;
}

//----- (021DEB08) --------------------------------------------------------
BOOL __fastcall Function_21deb08(int a1)
{
  return *(uint *)(a1 + 52) == 0;
}

//----- (021DEB18) --------------------------------------------------------
uint *__fastcall Function_21deb18(uint *result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = (int)result;
  if ( *result )
  {
    v2 = Function_21de560((int)result, 3);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = Function_21de560(v1, 1);
      v5 = v4;
      if ( v4 < 0 )
      {
        result = (uint *)-1;
        *(uint *)(v1 + 56) = -1;
      }
      else
      {
        result = (uint *)Function_2021d6c(*(uint *)(v1 + 4 * v4 + 28), 2u);
        *(uint *)(v1 + 56) = v5;
      }
    }
    else
    {
      result = (uint *)Function_2021d6c(*(uint *)(v1 + 4 * v2 + 28), 5u);
      *(uint *)(v1 + 56) = v3;
    }
  }
  return result;
}

//----- (021DEB60) --------------------------------------------------------
int __fastcall Function_21deb60(uint *a1)
{
  int v1;
  int v2;

  v1 = (int)a1;
  if ( *a1 )
  {
    v2 = a1[14];
    if ( v2 != -1 )
    {
      if ( Function_2021fd0(a1[v2 + 7]) )
        return 0;
      Function_21de57c(v1, *(uint *)(v1 + 56), 0);
      *(uint *)(v1 + 56) = -1;
    }
  }
  return 1;
}

//----- (021DEB9C) --------------------------------------------------------
int __fastcall Function_21deb9c(int result, int *a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = a4;
  v4 = result;
  v5 = a2;
  if ( *(uint *)result )
  {
    result = Function_21de560(result, 3);
    if ( result >= 0 )
    {
      v6 = v5[1];
      v7 = *v5;
      v8 = v6;
      v9 = v5[2];
      v8 = v6 + 0x8000;
      result = Function_2021c50(*(uint **)(v4 + 4 * result + 28), &v7);
    }
  }
  return result;
}

//----- (021DEBDC) --------------------------------------------------------
char *__fastcall Function_21debdc(char *result, char a2)
{
  char *v2;
  char v3;

  v2 = result;
  v3 = a2;
  if ( *(uint *)result )
  {
    result = (char *)Function_21de560((int)result, 3);
    if ( (int)result >= 0 )
      result = Function_2021e80(*(uint *)&v2[4 * (uint)result + 28], v3);
  }
  return result;
}

//----- (021DEC04) --------------------------------------------------------
int __fastcall Function_21dec04(uint *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  uint *v8;
  int v9;
  int result;
  uint *v11;
  uint *v12;
  int v13;

  v7 = a3;
  v8 = a1;
  v9 = a2;
  v13 = a4;
  if ( Function_21d5e08(a3) == 4 )
  {
    v11 = (uint *)malloc(0xAu, 900);
    v12 = v11;
    if ( v11 )
    {
      v11[1] = v9;
      v11[2] = v7;
      v11[3] = v13;
      v11[4] = a5;
      v11[5] = Function_21d77d8(v9);
      v12[220] = Function_20071d0(a7, 7u, 1, v12 + 218, 10);
      v12[221] = Function_20071d0(a7, 8u, 1, v12 + 219, 10);
      v12[27] = a6;
      v12[28] = LoadFromMsgNARC(1, 26, 647, 0xAu);
      v12[29] = Function_2023790(32, 0xAu);
      v12[224] = 0;
      *v8 = v12;
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    *v8 = 0;
    result = 1;
  }
  return result;
}

//----- (021DECAC) --------------------------------------------------------
uint __fastcall Function_21decac(uint result)
{
  int v1;
  int v2;

  v1 = result;
  if ( result )
  {
    free(*(uint *)(result + 880));
    free(*(uint *)(v1 + 884));
    Function_200b190(*(ushort **)(v1 + 112));
    Function_21df7d0(v1);
    Function_21df03c(v1);
    Function_20237bc_FreeMsg(*(uint *)(v1 + 116), v2);
    result = free(v1);
  }
  return result;
}

//----- (021DECE8) --------------------------------------------------------
int __fastcall Function_21dece8(int result, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = result;
  v3 = a2;
  if ( result )
  {
    Function_21deefc();
    Function_20070e8(v3, 0x84u, *(uint **)(v2 + 12), 5u, 0, 0, 1, 10);
    Function_200710c(v3, 0x81u, *(uint **)(v2 + 12), 5u, 0, 0, 1, 10);
    Function_200710c(v3, 0x82u, *(uint **)(v2 + 12), 6u, 0, 0, 1, 10);
    Function_200710c(v3, 0x83u, *(uint **)(v2 + 12), 7u, 0, 0, 1, 10);
    Function_2007130(v3, 0x85u, 4u, 0, 128, 10);
    v4 = Function_2079fd0();
    Call_LoadFromNARC_RLCN(19, v4, 5u, 128, 128, 10);
    Function_2019690(4u, 32, 0, 0xAu);
    Function_2019cb8(*(uint *)(v2 + 12), 4, 0, 0, 0, 0x20u, 0x20u, 0x11u);
    Function_21def64(v2);
    Function_21defc8(v2);
    *(uint *)(v2 + 888) = Function_21d5fa4(*(uint *)(v2 + 8));
    Function_2019448(*(uint **)(v2 + 12), 4u);
    result = Function_21df5d0(v2, v3);
  }
  return result;
}

//----- (021DEDDC) --------------------------------------------------------
int __fastcall Function_21deddc(int result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = result;
  v3 = a2;
  if ( result )
  {
    v4 = Function_21d5f9c(*(uint *)(result + 8));
    v5 = v4;
    if ( v3 )
      Function_2021d6c(*(uint *)(v2 + 4 * (v4 ^ 1) + 40), 2u);
    else
      Function_2021d6c(*(uint *)(v2 + 4 * (v4 ^ 1) + 40), 1u);
    Function_2021d6c(*(uint *)(v2 + 4 * v5 + 40), 0);
    result = Function_21deefc(v2);
  }
  return result;
}

//----- (021DEE34) --------------------------------------------------------
int __fastcall Function_21dee34(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  result = Function_21df834();
  if ( v1 )
  {
    v3 = Function_21d5f9c(*(uint *)(v1 + 8));
    Function_21df8c8(v1, v3);
    result = Function_21d5fa4(*(uint *)(v1 + 8));
    if ( result )
    {
      if ( result == 1 )
      {
        result = Function_21df178(v1, v3);
      }
      else if ( result == 2 )
      {
        result = Function_21df4d0(v1, v3);
      }
    }
    else
    {
      result = Function_21df3ac(v1, v3);
    }
  }
  return result;
}

//----- (021DEE84) --------------------------------------------------------
int Function_21dee84()
{
  return 1;
}

//----- (021DEE88) --------------------------------------------------------
int __fastcall Function_21dee88(int result)
{
  int v1;
  int v2;

  v1 = result;
  if ( result )
  {
    *(uint *)(result + 892) = 0;
    v2 = *(uint *)(result + 888);
    Function_21df0cc();
    result = Function_2019448(*(uint **)(v1 + 12), 4u);
  }
  return result;
}

//----- (021DEEA8) --------------------------------------------------------
int __fastcall Function_21deea8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( !a1 )
    return 1;
  v2 = *(uint *)(a1 + 892);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_21df2e0();
      Function_21df064(v1);
      Function_2019448(*(uint **)(v1 + 12), 4u);
      ++*(uint *)(v1 + 892);
    }
    else if ( v2 == 2 )
    {
      return 1;
    }
  }
  else
  {
    Function_21def64(a1);
    ++*(uint *)(v1 + 892);
  }
  return 0;
}

//----- (021DEEFC) --------------------------------------------------------
int __fastcall Function_21deefc(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  if ( Function_21d5f9c(*(uint *)(a1 + 8)) )
    v2 = 219;
  else
    v2 = 218;
  v3 = *(uint *)(v1 + 4 * v2);
  Function_20198e8(*(uint *)(v1 + 12), 2, 0, 0, 6u, 0x20u, v3 + 12, 0, 0, 0x20u, 0x20u);
  Function_20198e8(*(uint *)(v1 + 12), 2, 26, 0, 6u, 0x20u, v3 + 12, 0x1Au, 0, 0x20u, 0x20u);
  return Function_2019448(*(uint **)(v1 + 12), 2u);
}

//----- (021DEF64) --------------------------------------------------------
uint __fastcall Function_21def64(int a1)
{
  uint result;

  result = Function_21d5fa4(*(uint *)(a1 + 8));
  if ( result )
  {
    if ( result == 1 )
    {
      Function_2019120(6u, 1);
      Function_2019120(5u, 0);
      result = Function_2019120(7u, 0);
    }
    else if ( result == 2 )
    {
      Function_2019120(7u, 1);
      Function_2019120(5u, 0);
      result = Function_2019120(6u, 0);
    }
  }
  else
  {
    Function_2019120(5u, 1);
    Function_2019120(6u, 0);
    result = Function_2019120(7u, 0);
  }
  return result;
}

//----- (021DEFC8) --------------------------------------------------------
int __fastcall Function_21defc8(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v4;
  uint *v5;
  uchar *v6;
  int v7;
  uint v8;
  int v9;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  v4 = 0;
  do
  {
    v5 = (uint *)(v3 + 132);
    ++v2;
    v3 += 16;
    *v5 = 0;
  }
  while ( v2 < 7 );
  v6 = (uchar *)dword_21E0524;
  v7 = v1 + 120;
  do
  {
    Function_201a8d4(*(uint **)(v1 + 12), v7, v6);
    Function_201a9f4(v7);
    ++v4;
    v6 += 8;
    v7 += 16;
  }
  while ( v4 < 3 );
  Function_21df2e0(v1);
  Function_201ada4_ClearTextBox(v1 + 120, 0);
  Function_201ada4_ClearTextBox(v1 + 136, 0);
  v8 = 0;
  v9 = v1 + 120;
  do
  {
    Function_201accc(v9);
    ++v8;
    v9 += 16;
  }
  while ( v8 < 3 );
  return Function_21df064(v1);
}

//----- (021DF03C) --------------------------------------------------------
uint __fastcall Function_21df03c(int a1)
{
  int v1;
  int v2;
  int v3;
  uint result;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 120;
  do
  {
    result = *(uint *)(v1 + 132);
    if ( result )
      result = Function_201a8fc(v3);
    ++v2;
    v1 += 16;
    v3 += 16;
  }
  while ( v2 < 7 );
  return result;
}

//----- (021DF064) --------------------------------------------------------
int __fastcall Function_21df064(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = Function_21d5fa4(*(uint *)(a1 + 8));
  v3 = Function_21d5fa4(*(uint *)(v1 + 8));
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_21df178(v1, 0);
      Function_21df178(v1, 1);
    }
    else if ( v3 == 2 )
    {
      Function_21df270(v1);
      Function_21df4d0(v1, 0);
      Function_21df4d0(v1, 1);
    }
  }
  else
  {
    Function_21df108(v1);
    Function_21df3ac(v1, 0);
    Function_21df3ac(v1, 1);
  }
  result = 888;
  *(uint *)(v1 + 888) = v2;
  return result;
}

//----- (021DF0CC) --------------------------------------------------------
int __fastcall Function_21df0cc(int result, int a2)
{
  int v2;

  v2 = result;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      ((void (*)(void))Function_21df250)();
      result = Function_21df250(v2, 1);
    }
    else if ( a2 == 2 )
    {
      Function_21df2a8();
      result = Function_21df394(v2);
    }
  }
  else
  {
    Function_21df140();
    result = Function_21df394(v2);
  }
  return result;
}

//----- (021DF108) --------------------------------------------------------
int __fastcall Function_21df108(int a1)
{
  uchar *v1;
  uint v2;
  int v3;
  int v4;
  int result;
  int v6;

  v1 = (uchar *)dword_21E0514;
  v6 = a1;
  v2 = 0;
  v3 = a1 + 120;
  do
  {
    v4 = 16 * (v2 + 3);
    Function_201a8d4(*(uint **)(v6 + 12), v3 + v4, v1);
    Function_201a9f4(v3 + v4);
    result = Function_201ada4_ClearTextBox(v3 + v4, 0);
    ++v2;
    v1 += 8;
  }
  while ( v2 < 2 );
  return result;
}

//----- (021DF140) --------------------------------------------------------
int __fastcall Function_21df140(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = 3;
  v2 = a1 + 48;
  v3 = a1 + 168;
  do
  {
    result = *(uint *)(v2 + 132);
    if ( result )
    {
      Function_201aa3c(v3);
      Function_201a8fc(v3);
      result = v2 + 132;
      *(uint *)(v2 + 132) = 0;
    }
    ++v1;
    v2 += 16;
    v3 += 16;
  }
  while ( v1 <= 4 );
  return result;
}

//----- (021DF178) --------------------------------------------------------
int __fastcall Function_21df178(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  BOOL v5;
  int v6;
  int v7;
  int *v8;
  ushort *v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v2 = a1;
  v12 = a2;
  v3 = Function_21d5fac(*(uint *)(a1 + 8), a2);
  v4 = Function_21d5e34(*(uint *)(v2 + 8));
  v5 = v12 == Function_21d5f9c(*(uint *)(v2 + 8));
  v6 = Function_21d5fb8(*(uint *)(v2 + 8), v12);
  if ( (v4 != 1 || v5 != 1) && (v5 || v6 != 1) || *(uchar *)(v3 + 6) )
    return Function_21df250(v2, v12);
  v13 = 0;
  v16 = 0;
  v7 = v2 + 20 * v12;
  v8 = &dword_21E053C;
  v9 = (ushort *)(v3 + 22);
  v10 = v2 + 20 * (v12 ^ 1);
  do
  {
    v14 = *v8 + (v8[2] - *v8) / 256 * *v9;
    v15 = v8[1] + (v8[3] - v8[1]) / 256 * *v9;
    Function_2021c50(*(uint **)(v7 + 52), &v14);
    Function_21d78ac(*(uint *)(v7 + 52), 0);
    Function_21d78ac(*(uint *)(v10 + 52), 1);
    Function_2021cac(*(uint *)(v7 + 52), 1);
    ++v9;
    result = v13 + 1;
    v8 += 4;
    v7 += 4;
    v10 += 4;
    v13 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (021DF250) --------------------------------------------------------
uint __fastcall Function_21df250(int a1, int a2)
{
  int v2;
  int v3;
  uint result;

  v2 = 0;
  v3 = a1 + 20 * a2;
  do
  {
    result = Function_2021cac(*(uint *)(v3 + 52), 0);
    ++v2;
    v3 += 4;
  }
  while ( v2 < 5 );
  return result;
}

//----- (021DF270) --------------------------------------------------------
int __fastcall Function_21df270(int a1)
{
  uchar *v1;
  uint v2;
  int v3;
  int v4;
  int result;
  int v6;

  v1 = (uchar *)dword_21E0504;
  v6 = a1;
  v2 = 0;
  v3 = a1 + 120;
  do
  {
    v4 = 16 * (v2 + 5);
    Function_201a8d4(*(uint **)(v6 + 12), v3 + v4, v1);
    Function_201a9f4(v3 + v4);
    result = Function_201ada4_ClearTextBox(v3 + v4, 0);
    ++v2;
    v1 += 8;
  }
  while ( v2 < 2 );
  return result;
}

//----- (021DF2A8) --------------------------------------------------------
int __fastcall Function_21df2a8(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = 5;
  v2 = a1 + 80;
  v3 = a1 + 200;
  do
  {
    result = *(uint *)(v2 + 132);
    if ( result )
    {
      Function_201aa3c(v3);
      Function_201a8fc(v3);
      result = v2 + 132;
      *(uint *)(v2 + 132) = 0;
    }
    ++v1;
    v2 += 16;
    v3 += 16;
  }
  while ( v1 <= 6 );
  return result;
}

//----- (021DF2E0) --------------------------------------------------------
int *__fastcall Function_21df2e0(int a1)
{
  int v1;
  int v2;
  int v3;
  const short *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v11;

  v1 = a1;
  v2 = a1 + 152;
  Function_201ada4_ClearTextBox(a1 + 152, 0);
  v3 = Function_21d5fa4(*(uint *)(v1 + 8));
  if ( v3 )
  {
    if ( v3 == 2 )
    {
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 108), 0x2Bu, *(ushort **)(v1 + 116));
      Function_2002d7c(0, *(uint *)(v1 + 116), 0);
      v8 = 8 * *(uchar *)(v2 + 7);
      v9 = *(uint *)(v1 + 116);
      Function_201d78c(v2, 0);
    }
  }
  else
  {
    v4 = asc_21E04F4;
    v11 = 0;
    v5 = 0;
    do
    {
      Function_200b1b8_CallMsgDecrypt(
        *(ushort ***)(v1 + 108),
        *(ushort *)v4,
        *(ushort **)(v1 + 116));
      Function_2002d7c(0, *(uint *)(v1 + 116), 0);
      v6 = 8 * *(uchar *)(v2 + 7);
      v7 = *(uint *)(v1 + 116);
      Function_201d78c(v2, 0);
      ++v4;
      v5 += 16;
      ++v11;
    }
    while ( v11 < 8 );
  }
  return Function_201accc(v2);
}

//----- (021DF394) --------------------------------------------------------
int *__fastcall Function_21df394(int a1)
{
  int v1;

  v1 = a1 + 152;
  Function_201ada4_ClearTextBox(a1 + 152, 0);
  return Function_201accc(v1);
}

//----- (021DF3AC) --------------------------------------------------------
int *__fastcall Function_21df3ac(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  BOOL v7;
  int v8;
  int v9;
  int v10;
  ushort *v11;
  uint v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v19;

  v2 = a1;
  v3 = a1 + 120 + 16 * (a2 + 3);
  v4 = a2;
  v5 = Function_21d5fac(*(uint *)(a1 + 8), a2);
  v6 = Function_21d5e34(*(uint *)(v2 + 8));
  v7 = v4 == Function_21d5f9c(*(uint *)(v2 + 8));
  v19 = Function_21d5fb8(*(uint *)(v2 + 8), v4);
  Function_201ada4_ClearTextBox(v3, 0);
  if ( v6 == 1 && v7 == 1 || !v7 && v19 == 1 )
  {
    if ( *(uchar *)(v5 + 6) )
    {
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 108), 0x2Cu, *(ushort **)(v2 + 116));
      v14 = 0;
      v15 = 0;
      do
      {
        Function_2002d7c(0, *(uint *)(v2 + 116), 0);
        v16 = 8 * *(uchar *)(v3 + 7);
        v17 = *(uint *)(v2 + 116);
        Function_201d78c(v3, 0);
        ++v14;
        v15 += 16;
      }
      while ( v14 < 8 );
    }
    else
    {
      Function_2002d7c(0, *(uint *)(v5 + 44), 0);
      v8 = 8 * *(uchar *)(v3 + 7);
      v9 = *(uint *)(v5 + 44);
      Function_201d78c(v3, 0);
      v10 = 0;
      v11 = (ushort *)(v5 + 8);
      do
      {
        Function_20238a0(*(ushort **)(v2 + 116), *v11, 3, 0, 1);
        v12 = (8 * (uint)*(uchar *)(v3 + 7) - Function_2002d7c(0, *(uint *)(v2 + 116), 0)) >> 1;
        v13 = *(uint *)(v2 + 116);
        Function_201d78c(v3, 0);
        ++v10;
        ++v11;
      }
      while ( v10 < 7 );
    }
  }
  return Function_201accc(v3);
}

//----- (021DF4D0) --------------------------------------------------------
int *__fastcall Function_21df4d0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  BOOL v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  int v17;

  v2 = a1;
  v3 = a1 + 120 + 16 * (a2 + 5);
  v4 = a2;
  v5 = Function_21d5fac(*(uint *)(a1 + 8), a2);
  v6 = Function_21d5e34(*(uint *)(v2 + 8));
  v7 = v4 == Function_21d5f9c(*(uint *)(v2 + 8));
  v17 = Function_21d5fb8(*(uint *)(v2 + 8), v4);
  Function_201ada4_ClearTextBox(v3, 0);
  if ( v6 == 1 && v7 == 1 || !v7 && v17 == 1 )
  {
    if ( *(uchar *)(v5 + 6) )
    {
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 108), 0x2Cu, *(ushort **)(v2 + 116));
      v11 = 0;
      v12 = 4;
      do
      {
        Function_2002d7c(0, *(uint *)(v2 + 116), 0);
        v13 = 8 * *(uchar *)(v3 + 7);
        v14 = *(uint *)(v2 + 116);
        Function_201d78c(v3, 0);
        ++v11;
        v12 += 24;
      }
      while ( v11 < 4 );
    }
    else
    {
      v16 = 0;
      v8 = 4;
      do
      {
        if ( *(ushort *)(v5 + 32) )
        {
          Function_200b1b8_CallMsgDecrypt(
            *(ushort ***)(v2 + 112),
            *(ushort *)(v5 + 32),
            *(ushort **)(v2 + 116));
          Function_2002d7c(0, *(uint *)(v2 + 116), 0);
          v9 = *(uchar *)(v3 + 7);
          v10 = *(uint *)(v2 + 116);
          Function_201d78c(v3, 0);
        }
        v5 += 2;
        v8 += 24;
        ++v16;
      }
      while ( v16 < 4 );
    }
  }
  return Function_201accc(v3);
}

//----- (021DF5D0) --------------------------------------------------------
int __fastcall Function_21df5d0(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  int *v7;
  uint v8;
  int v9;
  int v10;
  int *v12;
  int *v13;
  void **v14;
  int v15;
  char v16;
  char v17;

  v2 = a1;
  v3 = a2;
  a1[23] = Function_2007204(a2, 0x87u, 1, a1 + 24, 10);
  v2[25] = Function_2007220(v3, 0x88u, 1, v2 + 26, 10);
  Function_2007130(v3, 0x89u, 5u, 0, 96, 10);
  NNS_G2dInitImageProxy((int)&v17);
  v15 = Function_200718c(v3, 0x86u, 1, 0, 0, 2, 0, 10, (int)&v17);
  v4 = Function_21d77d0(v2[1]);
  Function_21d783c((int)&v16, (int)&v17, v4, v2[24], v2[26], 1);
  v5 = 0;
  v14 = &off_21E04E4;
  v13 = v2;
  v12 = v2;
  do
  {
    v6 = Function_21d785c(v2[4], (int)&v16, *(short *)v14, *((short *)v14 + 1), 0, 2);
    v13[10] = v6;
    Function_2021e90(v6, v5);
    Function_2021d6c(v13[10], 0);
    v7 = v12;
    v8 = 0;
    do
    {
      v9 = Function_21d785c(v2[4], (int)&v16, 0, 0, 0, 2);
      v7[13] = v9;
      Function_2021d6c(v9, v5 + 5);
      Function_2021e90(v7[13], v5);
      Function_2021cac(v7[13], 0);
      ++v8;
      ++v7;
    }
    while ( v8 < 5 );
    ++v5;
    ++v14;
    ++v13;
    v12 += 5;
  }
  while ( v5 < 2 );
  Function_2021d0c(v2[11], 1);
  v10 = Function_21d785c(v2[4], (int)&v16, 128, 560, 0, 2);
  v2[12] = v10;
  Function_2021d6c(v10, 3u);
  Function_2021e90(v2[12], 2);
  v2[224] = (int)AddTaskToTaskList1((int)Function_21df930, (int)v2, 1u);
  return Function_21df730(v2, v15);
}

//----- (021DF730) --------------------------------------------------------
int __fastcall Function_21df730(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short *v9;
  int v10;
  int v11;
  int result;
  int v13;
  int v14;
  char v15;
  char v16;
  int v17;
  int v18;

  v18 = a4;
  v13 = a1;
  v14 = a2;
  v4 = Function_21d77d0(*(uint *)(a1 + 4));
  v5 = Function_21da80c(*(uint *)(v13 + 20));
  v6 = Function_21da810(*(uint *)(v13 + 20));
  Function_21d783c((int)&v15, (int)&v16, v4, v5, v6, 1);
  v7 = 0;
  v8 = v13;
  v9 = &word_21E04EC;
  v10 = 0;
  do
  {
    *(uint *)(v8 + 24) = v14 + v10;
    NNS_G2dInitImageProxy((int)&v16);
    NNS_G2dSetImageLocation((int)&v16, 2, *(uint *)(v8 + 24));
    v17 = REG_DISPCNT_SUB & 0x300010;
    v11 = Function_21d785c(*(uint *)(v13 + 16), (int)&v15, *v9, v9[1], 1 - v7, 2);
    *(uint *)(v8 + 32) = v11;
    Function_2021cac(v11, 0);
    result = 512;
    ++v7;
    v10 += 512;
    v8 += 4;
    v9 += 2;
  }
  while ( v7 < 2 );
  return result;
}

//----- (021DF7D0) --------------------------------------------------------
uint __fastcall Function_21df7d0(int a1)
{
  int *v1;
  int *v2;
  int *v3;
  int v4;
  int *v5;
  int *v7;
  int v8;

  v7 = (int *)a1;
  v1 = *(int **)(a1 + 896);
  if ( v1 )
    Call_RemoveTaskFromTaskList(v1);
  v2 = v7;
  v8 = 0;
  v3 = v7;
  do
  {
    Function_2021bd4(v2[8]);
    Function_2021bd4(v2[10]);
    v4 = 0;
    v5 = v3;
    do
    {
      Function_2021bd4(v5[13]);
      ++v4;
      ++v5;
    }
    while ( v4 < 5 );
    ++v2;
    v3 += 5;
    ++v8;
  }
  while ( v8 < 2 );
  Function_2021bd4(v7[12]);
  free(v7[23]);
  return free(v7[25]);
}

//----- (021DF834) --------------------------------------------------------
uint __fastcall Function_21df834(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  char v9;
  uint v10;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a1;
  v5 = Function_21d5f9c(*(uint *)(a1 + 8));
  v6 = 4 * v5;
  v7 = Function_21d5fac(*(uint *)(v4 + 8), v5);
  v8 = *(uint *)(v4 + 4 * v5 + 32);
  v12 = *(uint *)v7;
  if ( !Function_21d5e34(*(uint *)(v4 + 8)) )
    return Function_2021cac(v8, 0);
  v9 = Function_2079edc(*(ushort *)(v7 + 4), *(uchar *)(v7 + 7), *(uchar *)(v7 + 6));
  v10 = Function_2079d40(v12);
  Function_21da744(*(uint *)(v4 + 20), v4 + 232, v10, 640);
  NNS_G2dGetUnpackedPaletteData(v4 + 232, &v13);
  DC_FlushRange(*(uint *)(v13 + 20), 512);
  GXS_LoadOBJ(*(int **)(v13 + 20), *(uint *)(v4 + v6 + 24), 0x200u);
  Function_2021e90(v8, v9 + 4);
  return Function_2021cac(v8, 1);
}

//----- (021DF8C8) --------------------------------------------------------
int *__fastcall Function_21df8c8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = Function_21d5f9c(*(uint *)(a1 + 8));
  v3 = v1 + 120 + 16 * v2;
  Function_201ada4_ClearTextBox(v3, 0);
  if ( Function_21d5e34(*(uint *)(v1 + 8)) )
  {
    v4 = Function_21d5fac(*(uint *)(v1 + 8), v2);
    Function_2002d7c(0, *(uint *)(v4 + 40), 0);
    v5 = 8 * *(uchar *)(v3 + 7);
    v6 = *(uint *)(v4 + 40);
    Function_201d78c(v3, 0);
  }
  return Function_201accc(v3);
}

//----- (021DF930) --------------------------------------------------------
int __fastcall Function_21df930(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = Function_21d5fc0(*(uint *)(a2 + 8));
  result = Function_2021e24(*(uint *)(v2 + 48));
  if ( result == 3 )
  {
    if ( v3 )
      result = Function_2021d6c(*(uint *)(v2 + 48), 4u);
  }
  else if ( !v3 )
  {
    result = Function_2021d6c(*(uint *)(v2 + 48), 3u);
  }
  return result;
}

//----- (021DF964) --------------------------------------------------------
int __fastcall Function_21df964(int a1, char a2)
{
  int v2;
  char v3;
  int result;

  v2 = a1 + 116;
  v3 = a2;
  Function_21dfcf8(a1 + 116);
  Function_21dfd08(v2, 54);
  Function_21dfd08(v2, 55);
  *(uchar *)(v2 + 32) = v3;
  result = 0;
  *(uchar *)(v2 + 35) = 0;
  return result;
}

//----- (021DF990) --------------------------------------------------------
int __fastcall Function_21df990(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;

  v1 = a1;
  v2 = a1 + 116;
  Function_21dfcf8(a1 + 116);
  *(uchar *)(v2 + 35) = 1;
  switch ( (uchar)Function_21d5e08(v1) )
  {
    case 0u:
      Function_21dfd08(v2, 39);
      Function_21dfd08(v2, 37);
      Function_21dfd08(v2, 41);
      Function_21dfd08(v2, 42);
      result = Function_21dfd08(v2, 43);
      break;
    case 1u:
      Function_21dfd08(v2, 38);
      Function_21dfd08(v2, 37);
      Function_21dfd08(v2, 41);
      Function_21dfd08(v2, 42);
      result = Function_21dfd08(v2, 43);
      break;
    case 4u:
      if ( Function_21d5f9c(v1) )
        v6 = 53;
      else
        v6 = 52;
      Function_21dfd08(v2, v6);
      if ( Function_21d5e10(v1) )
        v7 = 39;
      else
        v7 = 38;
      Function_21dfd08(v2, v7);
      Function_21dfd08(v2, 41);
      result = Function_21dfd08(v2, 43);
      break;
    default:
      if ( Function_21d5e38(v1) == 2 )
      {
        if ( Function_21d5e34(v1) )
          v3 = 36;
        else
          v3 = 35;
        Function_21dfd08(v2, v3);
      }
      else
      {
        Function_21dfd08(v2, 34);
      }
      Function_21dfd08(v2, 37);
      if ( !*(uchar *)(Function_21d5e70(v1) + 15) )
        Function_21dfd08(v2, 40);
      if ( Function_21d5e10(v1) )
        v4 = 39;
      else
        v4 = 38;
      Function_21dfd08(v2, v4);
      Function_21dfd08(v2, 41);
      Function_21dfd08(v2, 42);
      result = Function_21dfd08(v2, 43);
      break;
  }
  return result;
}

//----- (021DFAD0) --------------------------------------------------------
int __fastcall Function_21dfad0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = a1 + 116;
  v3 = Function_21d5f7c(a1);
  v4 = Function_21d5e74(v1);
  Function_21dfcf8(v2);
  *(uchar *)(v2 + 35) = 1;
  if ( v3 )
  {
    if ( v4 )
      Function_21dfd08(v2, 49);
    else
      Function_21dfd08(v2, 46);
    Function_21dfd08(v2, 50);
    Function_21dfd08(v2, 48);
  }
  else if ( v4 )
  {
    Function_21dfd08(v2, 47);
    Function_21dfd08(v2, 50);
    Function_21dfd08(v2, 48);
  }
  else
  {
    Function_21dfd08(v2, 46);
  }
  return Function_21dfd08(v2, 51);
}

//----- (021DFB50) --------------------------------------------------------
int __fastcall Function_21dfb50(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_21d5e90(a1);
  Function_21dfcf8(v1 + 116);
  Function_21dfd08(v1 + 116, 0);
  if ( Function_21d5e08(v1) != 4 )
  {
    Function_21dfd08(v1 + 116, 1);
    Function_21dfd08(v1 + 116, 2);
  }
  Function_21dfd08(v1 + 116, 3);
  result = 2;
  *(uchar *)(v1 + 151) = 2;
  return result;
}

//----- (021DFB94) --------------------------------------------------------
uint __fastcall Function_21dfb94(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint v5;
  uint result;

  v2 = a1 + 116;
  v3 = a2;
  v4 = Function_21d5e90(a1);
  Function_21dfcf8(v2);
  Function_21dfd08(v2, 4);
  Function_21dfd08(v2, 5);
  Function_21dfd08(v2, 6);
  Function_21dfd08(v2, 7);
  v5 = Function_2079d20(v4);
  if ( v5 )
    Function_21dfd08(v2, 8);
  if ( v5 > 4 )
    Function_21dfd08(v2, 9);
  *(uchar *)(v2 + 35) = 3;
  if ( v3 < 4 || v3 > 9 )
    return ErrorHandler();
  result = v3 - 4;
  *(uchar *)(v2 + 32) = v3 - 4;
  return result;
}

//----- (021DFC04) --------------------------------------------------------
int __fastcall Function_21dfc04(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;

  v2 = a1 + 116;
  v3 = a2;
  v11 = Function_21d5e90(a1);
  Function_21dfcf8(v2);
  if ( v3 < 4 || v3 > 7 )
  {
    v7 = 0;
    v8 = 0;
    if ( v3 == 9 )
      v7 = 4;
    v9 = 0;
    do
    {
      if ( Function_2079cfc(v11, v9) )
      {
        if ( v7 )
        {
          --v7;
        }
        else
        {
          Function_21dfd08(v2, v9 + 26);
          if ( ++v8 >= 4 )
            break;
        }
      }
      ++v9;
    }
    while ( v9 < 8 );
  }
  else
  {
    v4 = 2 * (v3 - 4);
    v5 = 0;
    v6 = &dword_21E058C[v4];
    do
    {
      Function_21dfd08(v2, *(ushort *)v6);
      ++v5;
      v6 = (int *)((char *)v6 + 2);
    }
    while ( v5 < 4 );
  }
  result = 3;
  *(uchar *)(v2 + 35) = 3;
  return result;
}

//----- (021DFC80) --------------------------------------------------------
int __fastcall Function_21dfc80(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = a1 + 116;
  Function_21dfcf8(a1 + 116);
  *(uchar *)(v2 + 35) = 4;
  *(uchar *)(v2 + 34) = *(uchar *)(v1 + 87);
  Function_21dfd08(v2, 56);
  Function_21dfd08(v2, 57);
  Function_21dfd08(v2, 58);
  Function_21dfd08(v2, 59);
  Function_21dfd08(v2, 60);
  Function_21dfd08(v2, 61);
  Function_21dfd08(v2, 44);
  return Function_21dfd08(v2, 45);
}

//----- (021DFCE4) --------------------------------------------------------
uchar *__fastcall Function_21dfce4(int a1, char a2)
{
  int v2;
  uchar *result;

  v2 = *(uchar *)(a1 + 150) ^ (1 << a2);
  result = (uchar *)(a1 + 150);
  *result = v2;
  return result;
}

//----- (021DFCF8) --------------------------------------------------------
uchar *__fastcall Function_21dfcf8(int a1)
{
  uchar *result;

  *(uchar *)(a1 + 33) = 0;
  result = (uchar *)(a1 + 32);
  *result = 0;
  return result;
}

//----- (021DFD08) --------------------------------------------------------
int __fastcall Function_21dfd08(int result, int a2)
{
  uint v2;

  v2 = *(uchar *)(result + 33);
  if ( v2 < 8 )
  {
    ++*(uchar *)(result + 33);
    *(uint *)(result + 4 * v2) = a2;
  }
  return result;
}

//----- (021DFD2C) --------------------------------------------------------
int __fastcall Function_21dfd2c(int a1)
{
  int v1;
  int result;
  uint v3;
  uint v4;

  v1 = a1 + 116;
  if ( dword_21BF6C4 & 0x40 )
  {
    if ( *(uchar *)(a1 + 148) )
    {
      result = -2;
      --*(uchar *)(v1 + 32);
      return result;
    }
    v3 = *(uchar *)(a1 + 149);
    if ( v3 >= 3 )
    {
      *(uchar *)(a1 + 148) = v3 - 1;
      return -2;
    }
  }
  if ( !(dword_21BF6C4 & 0x80) )
    goto LABEL_19;
  v4 = *(uchar *)(a1 + 149);
  if ( *(uchar *)(a1 + 148) < (int)(v4 - 1) )
  {
    result = -2;
    ++*(uchar *)(v1 + 32);
    return result;
  }
  if ( v4 >= 3 )
  {
    *(uchar *)(a1 + 148) = 0;
    result = -2;
  }
  else
  {
LABEL_19:
    if ( dword_21BF6C4 & 2 )
    {
      Function_2005748(0x5DDu);
      result = -1;
    }
    else if ( dword_21BF6C4 & 1 )
    {
      Function_2005748(0x5DDu);
      result = *(uint *)(v1 + 4 * *(uchar *)(v1 + 32));
    }
    else
    {
      result = -3;
    }
  }
  return result;
}

//----- (021DFDDC) --------------------------------------------------------
int __fastcall Function_21dfddc(int a1)
{
  return *(uint *)(a1 + 116 + 4 * *(uchar *)(a1 + 148));
}

//----- (021DFDEC) --------------------------------------------------------
int __fastcall Function_21dfdec(int a1)
{
  return *(uint *)(a1 + 116);
}

//----- (021E0178) --------------------------------------------------------
int sub_21E0178()
{
  return sub_21E017A();
}

//----- (021E017A) --------------------------------------------------------
int sub_21E017A()
{
  int (*v0)(void);

  return v0();
}

