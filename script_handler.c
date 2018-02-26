//----- (0203E724) --------------------------------------------------------
long long __fastcall InitScriptHandler(long long result, int a2)
{
  uint v2
  int v3
  uint v4
  int v5

  v2 = 0;
  *(uchar *)(result + 1) = 0;
  *(uint *)(result + 8) = 0;
  *(uchar *)result = 0;
  *(uint *)(result + 4) = 0;
  *(uint *)(result + 92) = HIDWORD(result);
  *(uint *)(result + 96) = a2;
  v3 = result;
  v4 = 0;
  do
  {
    ++v2;
    *(uint *)(v3 + 100) = 0;
    v3 += 4;
  }
  while ( v2 < 4 );
  v5 = result;
  HIDWORD(result) = 0;
  do
  {
    ++v4;
    *(uint *)(v5 + 12) = 0;
    v5 += 4;
  }
  while ( v4 < 0x14 );
  *(uint *)(result + 116) = 0;
  return result;
}

//----- (0203E758) --------------------------------------------------------
int __fastcall Function_203e758(int a1, int a2)
{
  *(uint *)(a1 + 8) = a2;
  *(uchar *)(a1 + 1) = 1;
  return 1;
}

//----- (0203E764) --------------------------------------------------------
int __fastcall ScriptHandler_AddFunction(int result, int a2)
{
  *(uchar *)(result + 1) = 2;
  *(uint *)(result + 4) = a2;
  return result;
}

//----- (0203E76C) --------------------------------------------------------
int __fastcall EndScripthandling(int result)
{
  *(uchar *)(result + 1) = 0;
  *(uint *)(result + 8) = 0;
  return result;
}

//----- (0203E774) --------------------------------------------------------
int __fastcall Function_203e774(int result, int a2)
{
  *(uint *)(result + 116) = a2;
  return result;
}

//----- (0203E778) --------------------------------------------------------
int __fastcall ScriptHandler(int a1)
{
  int v1
  int v2
  int result
  int (*v4)(void)
  uint v5

  v1 = a1;
  v2 = *(uchar *)(a1 + 1);
  if ( !*(uchar *)(a1 + 1) )
    return 0;
  if ( !*(uchar *)(a1 + 1) )
    return 0;
  if ( v2 == 1 )
    goto LABEL_13;
  if ( v2 != 2 )
    return 1;
  v4 = *(int (**)(void))(a1 + 4);
  if ( v4 )
  {
    if ( v4() == 1 )
      *(uchar *)(v1 + 1) = 1;
    result = 1;
  }
  else
  {
    *(uchar *)(a1 + 1) = 1;
    while ( 1 )
    {
LABEL_13:
      if ( !*(uint *)(v1 + 8) )
      {
        result = 0;
        *(uchar *)(v1 + 1) = 0;
        return result;
      }
      v5 = ScriptHandler_LoadHWord(v1);
      if ( v5 >= *(uint *)(v1 + 96) )
        break;
      if ( (*(int (__fastcall **)(int))(*(uint *)(v1 + 92) + 4 * v5))(v1) == 1 )
        return 1;
    }
    ErrorHandler();
    result = 0;
    *(uchar *)(v1 + 1) = 0;
  }
  return result;
}

//----- (0203E7E4) --------------------------------------------------------
int __fastcall ScriptHandler_PushPointerOnStack(uchar *a1, int a2)
{
  int v2

  v2 = (uchar)*a1;
  if ( v2 + 1 >= 20 )
    return 1;
  *(uint *)&a1[4 * v2 + 12] = a2;
  ++*a1;
  return 0;
}

//----- (0203E800) --------------------------------------------------------
int __fastcall ScriptHandler_PullPointerFromStack(uchar *a1)
{
  if ( !*a1 )
    return 0;
  return *(uint *)&a1[4 * (uchar)--*a1 + 12];
}

//----- (0203E818) --------------------------------------------------------
int __fastcall SetScriptHandlerPointer(int result, int a2)
{
  *(uint *)(result + 8) = a2;
  return result;
}

//----- (0203E81C) --------------------------------------------------------
int __fastcall ScriptHandler_BranchLink(int a1, int a2)
{
  int v2
  int v3
  int result

  v2 = a1;
  v3 = a2;
  result = ScriptHandler_PushPointerOnStack((uchar *)a1, *(uint *)(a1 + 8));
  *(uint *)(v2 + 8) = v3;
  return result;
}

//----- (0203E82C) --------------------------------------------------------
int __fastcall ScriptHandler_ReturnFromCall(uchar *a1)
{
  uchar *v1
  int result

  v1 = a1;
  result = ScriptHandler_PullPointerFromStack(a1);
  *((uint *)v1 + 2) = result;
  return result;
}

//----- (0203E838) --------------------------------------------------------
int __fastcall ScriptHandler_LoadHWord(int a1)
{
  uchar *v1
  int v2

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  v2 = *v1;
  *(uint *)(a1 + 8) = v1 + 2;
  return (v2 + (v1[1] << 8)) & 0xFFFF;
}

//----- (0203E850) --------------------------------------------------------
int __fastcall ScriptHandler_LoadWord(int a1)
{
  uchar *v1
  uchar *v2
  int v3
  uchar *v4
  int v5
  int v6
  int v7

  v1 = *(uchar **)(a1 + 8);
  v2 = v1 + 1;
  *(uint *)(a1 + 8) = v1 + 1;
  v3 = *v1;
  v1 += 2;
  v4 = v1 + 1;
  *(uint *)(a1 + 8) = v1;
  v5 = *v2;
  v6 = (int)(v1 + 2);
  *(uint *)(a1 + 8) = v1 + 1;
  v7 = *v1;
  *(uint *)(a1 + 8) = v6;
  return (((((*v4 << 8) + v7) << 8) + v5) << 8) + v3;
}

//----- (0203E880) --------------------------------------------------------
uint *__fastcall Function_203e880(int a1, uint a2, int a3)
{
  int v3
  uint v4
  int v5
  int *v6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_203ea28_CallocUnknownStruct01_c();
  Function_203ea68_InitUnknownStruct01_c(v3, (int)v6, v4, v5, 0);
  return OverWorldData_InitUnknownStruct01(v3, (int)Function_203e950_HandleNPC, (int)v6);
}

//----- (0203E8B0) --------------------------------------------------------
int __fastcall Function_203e8b0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8
  int v9
  int v10
  int *v11
  int result

  v8 = a2;
  v9 = a3;
  v10 = a4;
  v11 = (int *)(GetUnknownStruct01_c(*(uint *)(a1 + 16)) + 80 + 28 * a8);
  *v11 = v9;
  v11[1] = v10;
  v11[2] = a5;
  v11[3] = a6;
  result = a7;
  v11[4] = a7;
  v11[5] = v8;
  return result;
}

//----- (0203E8E0) --------------------------------------------------------
uint *__fastcall Function_203e8e0(int a1, uint a2, int a3, int a4)
{
  int v4
  uint v5
  int v6
  int v7
  int v8
  int *v9

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = LoadOverWorldDataAdress(a1);
  v9 = Function_203ea28_CallocUnknownStruct01_c();
  Function_203ea68_InitUnknownStruct01_c(v8, (int)v9, v5, v6, v7);
  return Function_2050944(v4, (int)Function_203e950_HandleNPC, (int)v9);
}

//----- (0203E918) --------------------------------------------------------
int __fastcall Function_203e918(int a1, uint a2, int a3)
{
  uint *v3
  uint v4
  int v5
  int v6
  int *v7

  v3 = (uint *)a1;
  v4 = a2;
  v5 = a3;
  v6 = LoadOverWorldDataAdress(a1);
  v7 = Function_203ea28_CallocUnknownStruct01_c();
  Function_203ea68_InitUnknownStruct01_c(v6, (int)v7, v4, v5, 0);
  return Function_2050924(v3, (int)Function_203e950_HandleNPC, (int)v7);
}

//----- (0203E950) --------------------------------------------------------
int __fastcall Function_203e950_HandleNPC(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  void (__fastcall *v7)(int)
  int v8
  int v9
  int v11
  int v12

  v1 = a1;
  v2 = GetUnknownStruct01_c(a1);
  v3 = LoadOverWorldDataAdress(v1);
  v4 = *(uchar *)(v2 + 4);
  v11 = v3;
  if ( *(uchar *)(v2 + 4) )
  {
    if ( v4 != 1 )
      return 0;
  }
  else
  {
    *(uint *)(v2 + 56) = AllocInitScriptHandler(v3, *(ushort *)(v2 + 10));
    *(uchar *)(v2 + 9) = 1;
    *(uint *)(v2 + 64) = Function_200b368(8u, 64, 0xBu);
    *(uint *)(v2 + 68) = Function_2023790(1024, 0xBu);
    *(uint *)(v2 + 72) = Function_2023790(1024, 0xBu);
    ++*(uchar *)(v2 + 4);
  }
  v12 = 0;
  v5 = v2;
  do
  {
    v6 = *(uint *)(v5 + 56);
    if ( v6 && !ScriptHandler(*(uint *)(v5 + 56)) )
    {
      Function_203ea50(v6);
      if ( !*(uchar *)(v2 + 9) )
        ErrorHandler();
      *(uint *)(v5 + 56) = 0;
      --*(uchar *)(v2 + 9);
    }
    v5 += 4;
    ++v12;
  }
  while ( v12 < 2 );
  if ( *(uchar *)(v2 + 9) )
    return 0;
  v7 = *(void (__fastcall **)(int))(v2 + 164);
  Function_200b3f0(*(uint **)(v2 + 64), v4);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 68), v8);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 72), v9);
  *(uint *)v2 = 0;
  free(v2);
  if ( !v7 )
    return 1;
  v7(v11);
  return 0;
}

//----- (0203EA28) --------------------------------------------------------
int *Function_203ea28_CallocUnknownStruct01_c()
{
  int *v0

  v0 = (int *)malloc(0xBu, 220);
  if ( !v0 )
    ErrorHandler();
  Call_FillMemWithValue(v0, 0, 0xDCu);
  *v0 = 222271;
  return v0;
}

//----- (0203EA50) --------------------------------------------------------
int __fastcall Function_203ea50(int a1)
{
  int v1

  v1 = a1;
  Function_200b190(*(ushort **)(a1 + 120));
  free(*(uint *)(v1 + 124));
  return free(v1);
}

//----- (0203EA68) --------------------------------------------------------
int __fastcall Function_203ea68_InitUnknownStruct01_c(int a1, int a2, uint a3, int a4, int a5)
{
  int v5
  int v6
  uint v7
  int v8
  char v9
  int result
  ushort *v11

  v5 = a2;
  v6 = a1;
  v7 = a3;
  v8 = a4;
  v11 = (ushort *)Function_203ef60_GetSomeAddresses(a2, 0x36u, a3);
  *(uint *)(v5 + 40) = GetSpriteFaceDirection(*(uint *)(v6 + 60));
  *(uint *)(v5 + 44) = v8;
  *(ushort *)(v5 + 10) = v7;
  *(uint *)(v5 + 52) = a5;
  if ( v8 )
    *v11 = GetSpriteID(v8);
  result = 8000;
  if ( v7 >= 0x1F40 )
  {
    result = 8799;
    if ( v7 <= 0x225F )
      result = Function_203f404(v5, v7, v9);
  }
  return result;
}

//----- (0203EAB8) --------------------------------------------------------
int __fastcall AllocInitScriptHandler(int a1, uint a2)
{
  int v2
  uint v3
  int v4

  v2 = a1;
  v3 = a2;
  v4 = malloc(0xBu, 132);
  if ( !v4 )
    ErrorHandler();
  InitScriptHandler(__PAIR__(&JumpTable_ScriptHandler, v4), 840);
  LoadPredefinedScriptsAndMsgs(v2, v4, v3);
  return v4;
}

//----- (0203EAF4) --------------------------------------------------------
int __fastcall LoadPredefinedScriptsAndMsgs(int a1, int a2, uint a3)
{
  int v3
  int v4
  int v5

  v3 = a2;
  v4 = a1;
  *(uint *)(a2 + 128) = a1;
  v5 = LoadSomeChosenScriptsAndMsgs(a1, a2, a3);
  Function_203e758(v3, *(uint *)(v3 + 124));
  Function_203f0e4(v3, v5);
  return Function_203e774(v3, *(uint *)(v4 + 16));
}

//----- (0203EB20) --------------------------------------------------------
int __fastcall LoadSomeChosenScriptsAndMsgs(int a1, int a2, uint a3)
{
  uint v3
  int v4

  v3 = a3;
  if ( a3 < 0x28FA )
  {
    if ( a3 < 0x28D2 )
    {
      if ( a3 < 0x28A0 )
      {
        if ( a3 < 0x283C )
        {
          if ( a3 < 0x27D8 )
          {
            if ( a3 < 0x27A6 )
            {
              if ( a3 < 0x2774 )
              {
                if ( a3 < 0x2710 )
                {
                  if ( a3 < 0x26DE )
                  {
                    if ( a3 < 0x26AC )
                    {
                      if ( a3 < 0x2648 )
                      {
                        if ( a3 < 0x25E4 )
                        {
                          if ( a3 < 0x2580 )
                          {
                            if ( a3 < 0x251C )
                            {
                              if ( a3 < 0x24B8 )
                              {
                                if ( a3 < 0x2454 )
                                {
                                  if ( a3 < 0x23F0 )
                                  {
                                    if ( a3 < 0x238C )
                                    {
                                      if ( a3 < 0x2328 )
                                      {
                                        if ( a3 < 0x230A )
                                        {
                                          if ( a3 < 0x22F6 )
                                          {
                                            if ( a3 < 0x22C4 )
                                            {
                                              if ( a3 < 0x2260 )
                                              {
                                                if ( a3 < 0x1F40 )
                                                {
                                                  if ( a3 < 0x1B58 )
                                                  {
                                                    if ( a3 < 0x1388 )
                                                    {
                                                      if ( a3 < 0xBB8 )
                                                      {
                                                        if ( a3 < 0xAF0 )
                                                        {
                                                          if ( a3 < 0x9C4 )
                                                          {
                                                            if ( a3 < 0x7D0 )
                                                            {
                                                              if ( a3 < 1 )
                                                              {
                                                                LoadScriptsAndMsgs(a1, a2, 402, 355);
                                                                v4 = 0;
                                                              }
                                                              else
                                                              {
                                                                LoadMapLevelScriptsAndMsgs(a1, a2);
                                                                v4 = (v3 - 1) & 0xFFFF;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              LoadScriptsAndMsgs(a1, a2, 211, 213);
                                                              v4 = (v3 - 2000) & 0xFFFF;
                                                            }
                                                          }
                                                          else
                                                          {
                                                            LoadScriptsAndMsgs(a1, a2, 1, 17);
                                                            v4 = (v3 - 2500) & 0xFFFF;
                                                          }
                                                        }
                                                        else
                                                        {
                                                          LoadScriptsAndMsgs(a1, a2, 413, 397);
                                                          v4 = (v3 - 2800) & 0xFFFF;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        LoadScriptsAndMsgs(a1, a2, 1114, 213);
                                                        v4 = (v3 - 3000) & 0xFFFF;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      LoadScriptsAndMsgs(a1, a2, 1114, 213);
                                                      v4 = (v3 - 5000) & 0xFFFF;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    LoadScriptsAndMsgs(a1, a2, 404, 369);
                                                    v4 = (v3 - 7000) & 0xFFFF;
                                                  }
                                                }
                                                else
                                                {
                                                  LoadScriptsAndMsgs(a1, a2, 408, 380);
                                                  v4 = (v3 - 8000) & 0xFFFF;
                                                }
                                              }
                                              else
                                              {
                                                LoadScriptsAndMsgs(a1, a2, 497, 538);
                                                v4 = (v3 - 8800) & 0xFFFF;
                                              }
                                            }
                                            else
                                            {
                                              LoadScriptsAndMsgs(a1, a2, 424, 431);
                                              v4 = (v3 - 8900) & 0xFFFF;
                                            }
                                          }
                                          else
                                          {
                                            LoadScriptsAndMsgs(a1, a2, 498, 539);
                                            v4 = (v3 - 8950) & 0xFFFF;
                                          }
                                        }
                                        else
                                        {
                                          LoadScriptsAndMsgs(a1, a2, 425, 7);
                                          v4 = (v3 - 8970) & 0xFFFF;
                                        }
                                      }
                                      else
                                      {
                                        LoadScriptsAndMsgs(a1, a2, 213, 221);
                                        v4 = (v3 - 9000) & 0xFFFF;
                                      }
                                    }
                                    else
                                    {
                                      LoadScriptsAndMsgs(a1, a2, 0, 11);
                                      v4 = (v3 - 9100) & 0xFFFF;
                                    }
                                  }
                                  else
                                  {
                                    LoadScriptsAndMsgs(a1, a2, 423, 430);
                                    v4 = (v3 - 9200) & 0xFFFF;
                                  }
                                }
                                else
                                {
                                  LoadScriptsAndMsgs(a1, a2, 406, 374);
                                  v4 = (v3 - 9300) & 0xFFFF;
                                }
                              }
                              else
                              {
                                LoadScriptsAndMsgs(a1, a2, 426, 432);
                                v4 = (v3 - 9400) & 0xFFFF;
                              }
                            }
                            else
                            {
                              LoadScriptsAndMsgs(a1, a2, 501, 547);
                              v4 = (v3 - 9500) & 0xFFFF;
                            }
                          }
                          else
                          {
                            LoadScriptsAndMsgs(a1, a2, 412, 213);
                            v4 = (v3 - 9600) & 0xFFFF;
                          }
                        }
                        else
                        {
                          LoadScriptsAndMsgs(a1, a2, 422, 429);
                          v4 = (v3 - 9700) & 0xFFFF;
                        }
                      }
                      else
                      {
                        LoadScriptsAndMsgs(a1, a2, 212, 217);
                        v4 = (v3 - 9800) & 0xFFFF;
                      }
                    }
                    else
                    {
                      LoadScriptsAndMsgs(a1, a2, 397, 213);
                      v4 = (v3 - 9900) & 0xFFFF;
                    }
                  }
                  else
                  {
                    LoadScriptsAndMsgs(a1, a2, 411, 383);
                    v4 = (v3 - 9950) & 0xFFFF;
                  }
                }
                else
                {
                  LoadScriptsAndMsgs(a1, a2, 409, 381);
                  v4 = (v3 - 10000) & 0xFFFF;
                }
              }
              else
              {
                LoadScriptsAndMsgs(a1, a2, 1115, 622);
                v4 = (v3 - 10100) & 0xFFFF;
              }
            }
            else
            {
              LoadScriptsAndMsgs(a1, a2, 1116, 621);
              v4 = (v3 - 10150) & 0xFFFF;
            }
          }
          else
          {
            LoadScriptsAndMsgs(a1, a2, 407, 379);
            v4 = (v3 - 10200) & 0xFFFF;
          }
        }
        else
        {
          LoadScriptsAndMsgs(a1, a2, 1051, 552);
          v4 = (v3 - 10300) & 0xFFFF;
        }
      }
      else
      {
        LoadScriptsAndMsgs(a1, a2, 400, 203);
        v4 = (v3 - 10400) & 0xFFFF;
      }
    }
    else
    {
      LoadScriptsAndMsgs(a1, a2, 500, 16);
      v4 = (v3 - 10450) & 0xFFFF;
    }
  }
  else
  {
    LoadScriptsAndMsgs(a1, a2, 499, 541);
    v4 = (v3 - 10490) & 0xFFFF;
  }
  return v4;
}

//----- (0203EF14) --------------------------------------------------------
int __fastcall LoadScriptsAndMsgs(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int result

  v4 = a2;
  v5 = a4;
  *(uint *)(a2 + 124) = LoadFromNARC_2(10, a3, 0xBu);
  result = LoadFromMsgNARC(1, 26, v5, 0xBu);
  *(uint *)(v4 + 120) = result;
  return result;
}

//----- (0203EF38) --------------------------------------------------------
int __fastcall LoadMapLevelScriptsAndMsgs(int a1, int a2)
{
  int v2
  int v3
  int v4
  int result

  v2 = a1;
  v3 = a2;
  *(uint *)(a2 + 124) = LoadMapLevelScripts(**(uint **)(a1 + 28));
  v4 = Call_GetMapTexts(**(uint **)(v2 + 28));
  result = LoadFromMsgNARC(1, 26, v4, 0xBu);
  *(uint *)(v3 + 120) = result;
  return result;
}

//----- (0203EF60) --------------------------------------------------------
int __fastcall Function_203ef60_GetSomeAddresses(int a1, uint a2, char a3)
{
  int result

  if ( a2 <= 0x36 )
    JUMPOUT(__CS__, (char *)&off_203EF74 + *((short *)&off_203EF74 + a2) + 2);
  switch ( a3 )
  {
    case 0:
      result = a1 + 16;
      break;
    case 1:
      result = a1 + 20;
      break;
    case 2:
      result = a1 + 36;
      break;
    case 3:
      result = a1 + 5;
      break;
    case 4:
      result = a1 + 6;
      break;
    case 5:
      result = a1 + 7;
      break;
    case 6:
      result = a1 + 8;
      break;
    case 7:
      result = a1 + 9;
      break;
    case 8:
      result = a1 + 10;
      break;
    case 9:
      result = a1 + 40;
      break;
    case 10:
      result = a1 + 44;
      break;
    case 11:
      result = a1 + 48;
      break;
    case 12:
      result = a1 + 52;
      break;
    case 13:
      result = a1 + 56;
      break;
    case 14:
      result = a1 + 60;
      break;
    case 15:
      result = a1 + 64;
      break;
    case 16:
      result = a1 + 68;
      break;
    case 17:
      result = a1 + 72;
      break;
    case 18:
      result = a1 + 76;
      break;
    case 19:
      result = a1 + 168;
      break;
    case 20:
      result = a1 + 172;
      break;
    case 21:
      result = a1 + 176;
      break;
    case 22:
      result = a1 + 180;
      break;
    case 23:
      result = a1 + 12;
      break;
    case 24:
      result = a1 + 80;
      break;
    case 25:
      result = a1 + 84;
      break;
    case 26:
      result = a1 + 88;
      break;
    case 27:
      result = a1 + 92;
      break;
    case 28:
      result = a1 + 96;
      break;
    case 29:
      result = a1 + 100;
      break;
    case 30:
      result = a1 + 104;
      break;
    case 31:
      result = a1 + 108;
      break;
    case 32:
      result = a1 + 112;
      break;
    case 33:
      result = a1 + 116;
      break;
    case 34:
      result = a1 + 120;
      break;
    case 35:
      result = a1 + 124;
      break;
    case 36:
      result = a1 + 128;
      break;
    case 37:
      result = a1 + 132;
      break;
    case 38:
      result = a1 + 184;
      break;
    case 39:
      result = a1 + 200;
      break;
    case 40:
      result = a1 + 216;
      break;
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
      result = a1 + 136 + 2 * (a2 - 41);
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (0203F098) --------------------------------------------------------
int __fastcall ScriptHandler_GetSomeScriptAddresses(int a1, uint a2)
{
  uint v2
  char v3
  uint *v4

  v2 = a2;
  v4 = (uint *)GetUnknownStruct01_c(*(uint *)(a1 + 16));
  if ( *v4 != 222271 )
    ErrorHandler();
  return Function_203ef60_GetSomeAddresses((int)v4, v2, v3);
}

//----- (0203F0C0) --------------------------------------------------------
int (__fastcall *__fastcall ShowMenu(int a1))(int a1)
{
  int v1
  int v2
  int (__fastcall *result)(int)

  v1 = a1;
  v2 = GetUnknownStruct01_c(*(uint *)(a1 + 16));
  result = (int (__fastcall *)(int))Function_203a9c8(v1);
  if ( result == (int (__fastcall *)(int))1 )
  {
    result = Function_203ab00;
    *(uint *)(v2 + 164) = Function_203ab00;
  }
  return result;
}

//----- (0203F0E4) --------------------------------------------------------
int __fastcall Function_203f0e4(int a1, int a2)
{
  int v2
  int result

  v2 = a1;
  *(uint *)(a1 + 8) += 4 * a2;
  result = *(uint *)(a1 + 8) + ScriptHandler_LoadWord(a1);
  *(uint *)(v2 + 8) = result;
  return result;
}

//----- (0203F0FC) --------------------------------------------------------
int __fastcall LoadMapLevelScripts(uint a1)
{
  int v1

  v1 = GetMapScripts(a1);
  return LoadFromNARC_2(10, v1, 0xBu);
}

//----- (0203F110) --------------------------------------------------------
int __fastcall Call_GetMapTexts(uint a1)
{
  return GetMapTexts(a1);
}

//----- (0203F118) --------------------------------------------------------
int __fastcall ScriptHandler_CheckLoadParameter(int a1, uint a2)
{
  int v2
  uint v3
  int v4

  v2 = a1;
  v3 = a2;
  v4 = LoadFlagAdress(*(uint *)(a1 + 12));
  if ( v3 < 0x4000 )
    return 0;
  if ( v3 >= 0x8000 )
    return ScriptHandler_GetSomeScriptAddresses(v2, v3 - 32727);
  return Function_20508b8(v4, v3);
}

//----- (0203F150) --------------------------------------------------------
uint __fastcall ScriptHandler_CheckSaveParameter(int a1, uint a2)
{
  uint v2
  ushort *v3

  v2 = a2;
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(a1, a2);
  if ( v3 )
    v2 = *v3;
  return v2;
}

//----- (0203F164) --------------------------------------------------------
uint __fastcall Function_203f164(int a1, uint a2)
{
  uint v2
  int v3

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x10 )
    ErrorHandler();
  return ScriptHandler_CheckSaveParameter(v3, (v2 + 16416) & 0xFFFF);
}

//----- (0203F188) --------------------------------------------------------
int __fastcall LoadFlagAdressAndCheckFlag(int a1, uint a2)
{
  uint v2
  int v3

  v2 = a2;
  v3 = LoadFlagAdress(*(uint *)(a1 + 12));
  return CheckFlag(v3, v2);
}

//----- (0203F19C) --------------------------------------------------------
char *__fastcall LoadFlagAdressAndSetFlag(int a1, uint a2)
{
  uint v2
  int v3

  v2 = a2;
  v3 = LoadFlagAdress(*(uint *)(a1 + 12));
  return SetFlag(v3, v2);
}

//----- (0203F1B0) --------------------------------------------------------
char *__fastcall LoadFlagAdressAndClearFlag(int a1, uint a2)
{
  uint v2
  int v3

  v2 = a2;
  v3 = LoadFlagAdress(*(uint *)(a1 + 12));
  return ClearFlag(v3, v2);
}

//----- (0203F1C4) --------------------------------------------------------
int *__fastcall Function_203f1c4(int a1)
{
  int v1
  int v2
  char *v3
  int *v4

  v1 = LoadFlagAdress(*(uint *)(a1 + 12));
  v2 = v1;
  v3 = CalculateFlagByteAddress(v1, 1u);
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v4 = (int *)Function_20508b8(v2, 0x4000);
  return Call_FillMemWithValue(v4, 0, 0x40u);
}

//----- (0203F1FC) --------------------------------------------------------
char *__fastcall Function_203f1fc(int a1)
{
  int v1
  char *result
  int v3

  v1 = LoadFlagAdress(*(uint *)(a1 + 12));
  result = CalculateFlagByteAddress(v1, 0xAA0u);
  v3 = 24;
  do
  {
    *result++ = 0;
    --v3;
  }
  while ( v3 );
  return result;
}

//----- (0203F21C) --------------------------------------------------------
short *__fastcall Function_203f21c(int a1, short a2, short a3, short a4, short a5)
{
  int v5
  short v6
  short v7
  short *result

  v5 = a1;
  v6 = a3;
  v7 = a4;
  *(ushort *)ScriptHandler_GetSomeScriptAddresses(a1, 0x29u) = a2;
  *(ushort *)ScriptHandler_GetSomeScriptAddresses(v5, 0x2Au) = v6;
  *(ushort *)ScriptHandler_GetSomeScriptAddresses(v5, 0x2Bu) = v7;
  result = (short *)ScriptHandler_GetSomeScriptAddresses(v5, 0x2Cu);
  *result = a5;
  return result;
}

//----- (0203F254) --------------------------------------------------------
uint __fastcall NormalizeSpriteScriptNr(uint a1)
{
  uint result

  if ( a1 >= 0x1388 )
    result = (a1 - 4999) & 0xFFFF;
  else
    result = (a1 - 2999) & 0xFFFF;
  return result;
}

//----- (0203F278) --------------------------------------------------------
BOOL __fastcall Function_203f278(uint a1)
{
  return a1 >= 0x1388;
}

//----- (0203F28C) --------------------------------------------------------
BOOL __fastcall Function_203f28c(int a1)
{
  int v1

  GetNPCTrainerData(a1, 9u);
  return v1 != 0;
}

//----- (0203F2A0) --------------------------------------------------------
int __fastcall CheckFlag550(int a1, int a2)
{
  int v2
  int v3

  v2 = a2;
  v3 = LoadFlagAdress(*(uint *)(a1 + 12));
  return CheckFlag(v3, (v2 + 1360) & 0xFFFF);
}

//----- (0203F2BC) --------------------------------------------------------
char *__fastcall SetFlag550(int a1, int a2)
{
  int v2
  int v3

  v2 = a2;
  v3 = LoadFlagAdress(*(uint *)(a1 + 12));
  return SetFlag(v3, (v2 + 1360) & 0xFFFF);
}

//----- (0203F2D8) --------------------------------------------------------
char *__fastcall ClearFlag550(int a1, int a2)
{
  int v2
  int v3

  v2 = a2;
  v3 = LoadFlagAdress(*(uint *)(a1 + 12));
  return ClearFlag(v3, (v2 + 1360) & 0xFFFF);
}