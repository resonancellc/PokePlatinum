//----- (0203F6C4) --------------------------------------------------------
int ScriptCmd_Nop()
{
  return 0;
}

//----- (0203F6C8) --------------------------------------------------------
int ScriptCmd_Nop1()
{
  return 0;
}

//----- (0203F6CC) --------------------------------------------------------
int __fastcall ScriptCmd_End(int a1)
{
  EndScripthandling(a1);
  return 0;
}

//----- (0203F6D8) --------------------------------------------------------
int __fastcall ScriptCmd_Return2(int a1)
{
  int v1
  int v2
  short v3
  int v4
  int v5

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = v4;
  *(ushort *)ScriptHandler_CheckLoadParameter(v2, v4) = v3;
  *(uint *)(v1 + 100) = v5;
  ScriptHandler_AddFunction(v1, (int)Function_203f70c);
  return 1;
}

//----- (0203F70C) --------------------------------------------------------
BOOL __fastcall Function_203f70c(int a1)
{
  ushort *v1

  v1 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(a1 + 128), *(uint *)(a1 + 100) & 0xFFFF);
  return --*v1 == 0;
}

//----- (0203F734) --------------------------------------------------------
int __fastcall ScriptCmd_StoreFurniture(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  return 0;
}

//----- (0203F74C) --------------------------------------------------------
int __fastcall Function_203f74c(int a1)
{
  uchar *v1
  int v2

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  v2 = *v1;
  *(uint *)(a1 + 8) = v1 + 2;
  *(uint *)(a1 + 4 * v2 + 100) = v1[1];
  return 0;
}

//----- (0203F764) --------------------------------------------------------
int __fastcall Function_203f764(int a1)
{
  uchar *v1
  int v2

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  v2 = *v1;
  *(uint *)(a1 + 4 * v2 + 100) = ScriptHandler_LoadWord(a1);
  return 0;
}

//----- (0203F780) --------------------------------------------------------
int __fastcall Function_203f780(int a1)
{
  uchar *v1
  int v2

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  v2 = *v1;
  *(uint *)(a1 + 4 * v2 + 100) = *(uchar *)ScriptHandler_LoadWord(a1);
  return 0;
}

//----- (0203F79C) --------------------------------------------------------
int __fastcall Function_203f79c(int a1)
{
  int v1
  uchar *v2
  uchar *v3

  v1 = a1;
  v2 = (uchar *)ScriptHandler_LoadWord(a1);
  v3 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v3 + 1;
  *v2 = *v3;
  return 0;
}

//----- (0203F7B4) --------------------------------------------------------
int __fastcall Function_203f7b4(int a1)
{
  int v1
  uchar *v2
  uchar *v3

  v1 = a1;
  v2 = (uchar *)ScriptHandler_LoadWord(a1);
  v3 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v3 + 1;
  *v2 = *(uint *)(v1 + 4 * *v3 + 100);
  return 0;
}

//----- (0203F7D0) --------------------------------------------------------
int __fastcall Function_203f7d0(int a1)
{
  uchar *v1
  int v2

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  v2 = *v1;
  *(uint *)(a1 + 8) = v1 + 2;
  *(uint *)(a1 + 4 * v2 + 100) = *(uint *)(a1 + 4 * v1[1] + 100);
  return 0;
}

//----- (0203F7F0) --------------------------------------------------------
int __fastcall Function_203f7f0(int a1)
{
  int v1
  uchar *v2

  v1 = a1;
  v2 = (uchar *)ScriptHandler_LoadWord(a1);
  *v2 = *(uchar *)ScriptHandler_LoadWord(v1);
  return 0;
}

//----- (0203F808) --------------------------------------------------------
int __fastcall CompareValues(uint a1, uint a2)
{
  if ( a1 < a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  return 2;
}

//----- (0203F81C) --------------------------------------------------------
int __fastcall Function_203f81c(int a1)
{
  int v1
  uchar *v2
  uchar *v3
  int v4

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  v3 = v2 + 1;
  *(uint *)(v1 + 8) = v2 + 1;
  v4 = *(uint *)(v1 + 4 * *v2 + 100);
  *(uint *)(v1 + 8) = v3 + 1;
  *(uchar *)(v1 + 2) = CompareValues((uchar)v4, *(uint *)(v1 + 4 * *v3 + 100) & 0xFF);
  return 0;
}

//----- (0203F84C) --------------------------------------------------------
int __fastcall Function_203f84c(int a1)
{
  int v1
  uchar *v2
  uchar *v3
  int v4

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  v3 = v2 + 1;
  *(uint *)(v1 + 8) = v2 + 1;
  v4 = *(uint *)(v1 + 4 * *v2 + 100);
  *(uint *)(v1 + 8) = v3 + 1;
  *(uchar *)(v1 + 2) = CompareValues((uchar)v4, *v3);
  return 0;
}

//----- (0203F874) --------------------------------------------------------
int __fastcall Function_203f874(int a1)
{
  int v1
  uchar *v2
  int v3
  uchar *v4

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = *(uint *)(a1 + 4 * *v2 + 100) & 0xFF;
  v4 = (uchar *)ScriptHandler_LoadWord(a1);
  *(uchar *)(v1 + 2) = CompareValues(v3, *v4);
  return 0;
}

//----- (0203F89C) --------------------------------------------------------
int __fastcall Function_203f89c(int a1)
{
  int v1
  uchar *v2
  uchar *v3
  uint v4

  v1 = a1;
  v2 = (uchar *)ScriptHandler_LoadWord(a1);
  v3 = *(uchar **)(v1 + 8);
  v4 = *v2;
  *(uint *)(v1 + 8) = v3 + 1;
  *(uchar *)(v1 + 2) = CompareValues(v4, *(uint *)(v1 + 4 * *v3 + 100) & 0xFF);
  return 0;
}

//----- (0203F8C4) --------------------------------------------------------
int __fastcall Function_203f8c4(int a1)
{
  int v1
  uchar *v2
  uchar *v3
  uint v4

  v1 = a1;
  v2 = (uchar *)ScriptHandler_LoadWord(a1);
  v3 = *(uchar **)(v1 + 8);
  v4 = *v2;
  *(uint *)(v1 + 8) = v3 + 1;
  *(uchar *)(v1 + 2) = CompareValues(v4, *v3);
  return 0;
}

//----- (0203F8E0) --------------------------------------------------------
int __fastcall Function_203f8e0(int a1)
{
  int v1
  uint v2
  uchar *v3

  v1 = a1;
  v2 = *(uchar *)ScriptHandler_LoadWord(a1);
  v3 = (uchar *)ScriptHandler_LoadWord(v1);
  *(uchar *)(v1 + 2) = CompareValues(v2, *v3);
  return 0;
}

//----- (0203F900) --------------------------------------------------------
int __fastcall ScriptCmd_If(int a1)
{
  int v1
  int v2
  uint v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  *(uchar *)(v1 + 2) = CompareValues(v3, v4);
  return 0;
}

//----- (0203F92C) --------------------------------------------------------
int __fastcall ScriptCmd_If2(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  ushort *v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  *(uchar *)(v1 + 2) = CompareValues(*v3, *v5);
  return 0;
}

//----- (0203F964) --------------------------------------------------------
int __fastcall Function_203f964(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  int v5

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 7u);
  v4 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0xEu);
  v5 = ScriptHandler_LoadHWord(v1);
  *v4 = AllocInitScriptHandler(v2, v5);
  ++*v3;
  return 1;
}

//----- (0203F99C) --------------------------------------------------------
int __fastcall ScriptCmd_CallStandard(int a1)
{
  int v1
  int v2
  uchar *v3
  uchar *v4
  int *v5
  int v6

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 5u);
  v4 = (uchar *)ScriptHandler_GetSomeScriptAddresses(v2, 7u);
  v5 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0xEu);
  v6 = ScriptHandler_LoadHWord(v1);
  *v3 = 1;
  *v5 = AllocInitScriptHandler(v2, v6);
  ++*v4;
  ScriptHandler_AddFunction(v1, (int)Function_203f9ec);
  return 1;
}

//----- (0203F9EC) --------------------------------------------------------
BOOL __fastcall Function_203f9ec(int a1)
{
  return *(uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 5u) == 0;
}

//----- (0203FA08) --------------------------------------------------------
int __fastcall ScriptCmd_ExitStandard(int a1)
{
  *(uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 5u) = 0;
  return 0;
}

//----- (0203FA1C) --------------------------------------------------------
int __fastcall ScriptCmd_Jump(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadWord(a1);
  SetScriptHandlerPointer(v1, *(uint *)(v1 + 8) + v2);
  return 0;
}

//----- (0203FA34) --------------------------------------------------------
int __fastcall Function_203fa34(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  int v5
  int v6

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadWord(v1);
  if ( v5 == GetSpriteID(*v4) )
    SetScriptHandlerPointer(v1, *(uint *)(v1 + 8) + v6);
  return 0;
}

//----- (0203FA6C) --------------------------------------------------------
int __fastcall Function_203fa6c(int a1)
{
  int v1
  int v2
  uchar *v3
  int v4
  int v5
  int v6

  v1 = a1;
  v2 = Function_2050a6c(*(uint *)(a1 + 116));
  v3 = *(uchar **)(v1 + 8);
  v4 = v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadWord(v1);
  if ( v4 == v5 )
    SetScriptHandlerPointer(v1, *(uint *)(v1 + 8) + v6);
  return 0;
}

//----- (0203FA9C) --------------------------------------------------------
int __fastcall Function_203fa9c(int a1)
{
  int v1
  int v2
  uchar *v3
  uint *v4
  int v5
  int v6

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 9u);
  v3 = *(uchar **)(v1 + 8);
  v4 = (uint *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadWord(v1);
  if ( *v4 == v5 )
    SetScriptHandlerPointer(v1, *(uint *)(v1 + 8) + v6);
  return 0;
}

//----- (0203FAD0) --------------------------------------------------------
int __fastcall ScriptCmd_Call(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadWord(a1);
  ScriptHandler_BranchLink(v1, *(uint *)(v1 + 8) + v2);
  return 0;
}

//----- (0203FAE8) --------------------------------------------------------
int __fastcall ScriptCmd_Return(uchar *a1)
{
  ScriptHandler_ReturnFromCall(a1);
  return 0;
}

//----- (0203FAF4) --------------------------------------------------------
int __fastcall ScriptCmd_CompareLastResultJump(int a1)
{
  int v1
  uchar *v2
  int v3
  int v4

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = *v2;
  v4 = ScriptHandler_LoadWord(a1);
  if ( *((uchar *)&Unknown_20eab8c[6] + 3 * v3 + *(uchar *)(v1 + 2) + 2) == 1 )
    SetScriptHandlerPointer(v1, *(uint *)(v1 + 8) + v4);
  return 0;
}

//----- (0203FB28) --------------------------------------------------------
int __fastcall ScriptCmd_CompareLastResultCall(int a1)
{
  int v1
  uchar *v2
  int v3
  int v4

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = *v2;
  v4 = ScriptHandler_LoadWord(a1);
  if ( *((uchar *)&Unknown_20eab8c[6] + 3 * v3 + *(uchar *)(v1 + 2) + 2) == 1 )
    ScriptHandler_BranchLink(v1, *(uint *)(v1 + 8) + v4);
  return 0;
}

//----- (0203FB5C) --------------------------------------------------------
int __fastcall ScriptCmd_SetFlag(int a1)
{
  int v1
  int v2

  v1 = *(uint *)(a1 + 128);
  v2 = ScriptHandler_LoadHWord(a1);
  LoadFlagAdressAndSetFlag(v1, v2);
  return 0;
}

//----- (0203FB74) --------------------------------------------------------
int __fastcall ScriptCmd_ClearFlag(int a1)
{
  int v1
  int v2

  v1 = *(uint *)(a1 + 128);
  v2 = ScriptHandler_LoadHWord(a1);
  LoadFlagAdressAndClearFlag(v1, v2);
  return 0;
}

//----- (0203FB8C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckFlag(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  *(uchar *)(v1 + 2) = LoadFlagAdressAndCheckFlag(v2, v3);
  return 0;
}

//----- (0203FBA8) --------------------------------------------------------
int __fastcall Function_203fba8(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  ushort *v6

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  *v6 = LoadFlagAdressAndCheckFlag(v2, *v4);
  return 0;
}

//----- (0203FBE4) --------------------------------------------------------
int __fastcall Function_203fbe4(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  LoadFlagAdressAndSetFlag(v2, *v4);
  return 0;
}

//----- (0203FC0C) --------------------------------------------------------
int __fastcall ScriptCmd_SetTrainerId(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  SetFlag550(v2, v4);
  return 0;
}

//----- (0203FC30) --------------------------------------------------------
int __fastcall Function_203fc30(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  ClearFlag550(v2, v4);
  return 0;
}

//----- (0203FC54) --------------------------------------------------------
int __fastcall ScriptCmd_ClearTrainerId(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  *(uchar *)(v1 + 2) = CheckFlag550(v2, v4);
  return 0;
}

//----- (0203FC7C) --------------------------------------------------------
int __fastcall ScriptCmd_AddValue(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  *v3 += ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0203FCAC) --------------------------------------------------------
int __fastcall ScriptCmd_SubValue(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  *v3 -= ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0203FCDC) --------------------------------------------------------
int __fastcall ScriptCmd_SetVar(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = ScriptHandler_LoadHWord(v1);
  return 0;
}

//----- (0203FD00) --------------------------------------------------------
int __fastcall ScriptCmd_CopyVar(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  *v3 = *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0203FD30) --------------------------------------------------------
int __fastcall Function_203fd30(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  *v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0203FD5C) --------------------------------------------------------
int __fastcall ScriptCmd_Message2(int a1)
{
  uchar *v1
  int v2
  int v3

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  v2 = *v1;
  v3 = *(uint *)(a1 + 120);
  ((void (*)(void))dword_21DD498[0])();
  return 0;
}

//----- (0203FD70) --------------------------------------------------------
int __fastcall Function_203fd70(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint v5
  ushort *v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = (ushort *)LoadFromMsgNARC(1, 26, v3, 0x20u);
  ((void (__fastcall *)(int, ushort *, uint))dword_21DD498[0])(v1, v6, v5);
  Function_200b190(v6);
  return 0;
}

//----- (0203FDBC) --------------------------------------------------------
int __fastcall ScriptCmd_CopyFurniture(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint v5
  ushort *v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = (ushort *)LoadFromMsgNARC(1, 26, v3, 0x20u);
  ((void (__fastcall *)(int, ushort *, uint, int, uint))dword_21DD444[0])(v1, v6, v5, 1, 0);
  Function_200b190(v6);
  ScriptHandler_AddFunction(v1, (int)MessageLoop);
  return 1;
}

//----- (0203FE20) --------------------------------------------------------
int __fastcall Function_203fe20(int a1)
{
  int v1
  int v2
  int v3
  int v4
  short v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_LoadHWord(v1);
  ((void (__fastcall *)(int, int, int, int, uint, int))dword_21DD4CC[0])(v1, v2, v3, v4, v5, 255);
  return 0;
}

//----- (0203FE60) --------------------------------------------------------
int __fastcall Function_203fe60(int a1)
{
  int v1
  int v2
  int v3
  int v4
  short v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_LoadHWord(v1);
  ((void (__fastcall *)(int, int, int, int, uint, int))dword_21DD4CC[0])(v1, v2, v3, v4, v5, 1);
  ScriptHandler_AddFunction(v1, (int)MessageLoop);
  return 1;
}

//----- (0203FEAC) --------------------------------------------------------
int __fastcall ScriptCmd_SetBCastleFunctionId(int a1)
{
  int v1
  uchar *v2
  uint *v3
  ushort *v5
  int v6
  ushort *v7
  int v8
  int v9
  int v10

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = (uint *)(*(uint *)(a1 + 128) + 172);
  if ( !*v3 )
    return 0;
  v5 = (ushort *)(*v3 + 144 + 272 * *v2);
  v6 = *v5;
  if ( v6 == 0xFFFF )
  {
    v7 = (ushort *)LoadFromMsgNARC(1, 26, 613, 0x20u);
    ((void (__fastcall *)(int, ushort *, uint, int, uint))dword_21DD444[0])(v1, v7, v5[1], 1, 0);
    Function_200b190(v7);
  }
  else
  {
    v8 = (short)v5[3];
    v9 = v5[1];
    v10 = v5[2];
    ((void (__cdecl *)(int, int))dword_21DD4CC[0])(a1, v6);
  }
  ScriptHandler_AddFunction(v1, (int)MessageLoop);
  return 1;
}

//----- (0203FF34) --------------------------------------------------------
int __fastcall ScriptCmd_BCastleFunctReturn(int a1, int a2, int a3, int a4)
{
  int v4
  uchar *v5
  int v6
  int v7
  int v8
  int v9
  int v10
  uchar *v11
  int v12
  int *v13
  int v14
  uchar v16
  int v17

  v17 = a4;
  v4 = a1;
  v5 = *(uchar **)(a1 + 8);
  v6 = *(uint *)(a1 + 128);
  *(uint *)(a1 + 8) = v5 + 1;
  v7 = *v5;
  v8 = ScriptHandler_LoadHWord(a1);
  v9 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v8);
  v10 = ScriptHandler_LoadHWord(v4);
  v11 = *(uchar **)(v4 + 8);
  *(uint *)(v4 + 8) = v11 + 1;
  v12 = *v11;
  v16 = 0;
  v13 = Function_204aee8(*(uint *)(v6 + 12), v9, v10, v12, &v16);
  ((void (__fastcall *)(int, int *, int, int))dword_21DD530[0])(v4, v13, (v7 + v16) & 0xFF, 1);
  Function_200b3f0((uint *)v13, v14);
  ScriptHandler_AddFunction(v4, (int)MessageLoop);
  return 1;
}

//----- (0203FFAC) --------------------------------------------------------
int __fastcall ScriptCmd_UnownMessageBox(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  char v7
  char v8
  int v9

  v9 = a4;
  v4 = a1;
  v5 = ScriptHandler_LoadHWord(a1);
  ((void (__fastcall *)(char *, int))dword_21DD42C[0])(&v7, v4);
  v8 = 3;
  ((void (__fastcall *)(int, uint, int, uint, char *))dword_21DD444[0])(v4, *(uint *)(v4 + 120), v5, 0, &v7);
  ScriptHandler_AddFunction(v4, (int)MessageLoop);
  return 1;
}

//----- (0203FFE8) --------------------------------------------------------
int __fastcall ScriptCmd_Message(int a1)
{
  int v1
  uchar *v2
  int v3
  int v4

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = *v2;
  v4 = *(uint *)(a1 + 120);
  ((void (__cdecl *)(int))dword_21DD444[0])(a1);
  ScriptHandler_AddFunction(v1, (int)MessageLoop);
  return 1;
}

//----- (02040014) --------------------------------------------------------
BOOL __fastcall MessageLoop(int a1)
{
  uchar *v1

  v1 = (uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 3u);
  return Function_205da04(*v1);
}

//----- (02040028) --------------------------------------------------------
int __fastcall ScriptCmd_Message3(int a1)
{
  int v1
  int v2
  uchar v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  ((void (__fastcall *)(int, uint, uint, int, uint))dword_21DD444[0])(v1, *(uint *)(v1 + 120), v3, 1, 0);
  ScriptHandler_AddFunction(v1, (int)MessageLoop);
  return 1;
}

//----- (02040064) --------------------------------------------------------
int __fastcall Function_2040064(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  uchar v6
  char v8
  char v9
  int v10

  v10 = a4;
  v4 = a1;
  v5 = ScriptHandler_LoadHWord(a1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v5);
  ((void (__fastcall *)(char *, int))dword_21DD42C[0])(&v8, v4);
  v9 = 1;
  ((void (__fastcall *)(int, uint, uint))dword_21DD444[0])(v4, *(uint *)(v4 + 120), v6);
  ScriptHandler_AddFunction(v4, (int)MessageLoop);
  return 1;
}

//----- (020400AC) --------------------------------------------------------
int __fastcall ScriptCmd_Message4(int a1)
{
  int v1
  int v2
  uchar v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  ((void (__fastcall *)(int, uint, uint))dword_21DD444[0])(v1, *(uint *)(v1 + 120), v3);
  ScriptHandler_AddFunction(v1, (int)MessageLoop);
  return 1;
}

//----- (020400E8) --------------------------------------------------------
int __fastcall Function_20400e8(int a1)
{
  int v1
  int *v2
  uchar v3

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = GetSpriteTrainer(*v2);
  ((void (__fastcall *)(int, uint, uint, int, uint))dword_21DD444[0])(v1, *(uint *)(v1 + 120), v3, 1, 0);
  ScriptHandler_AddFunction(v1, (int)MessageLoop);
  return 1;
}

//----- (02040124) --------------------------------------------------------
int __fastcall ScriptCmd_Message5(int a1, int a2, int a3, int a4)
{
  int v4
  uchar *v5
  int v6
  char v8
  char v9
  int v10

  v10 = a4;
  v4 = a1;
  v5 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v5 + 1;
  v6 = *v5;
  if ( Function_2035e38() )
  {
    ((void (__fastcall *)(char *, int))dword_21DD42C[0])(&v8, v4);
    v8 = 1;
    v9 = 1;
    ((void (__fastcall *)(int, uint, int, uint, char *, uint, int))dword_21DD444[0])(
      v4,
      *(uint *)(v4 + 120),
      v6,
      0,
      &v8,
      *(uint *)&v8,
      v10);
  }
  else
  {
    ((void (__fastcall *)(int, uint, int, int, uint))dword_21DD444[0])(v4, *(uint *)(v4 + 120), v6, 1, 0);
  }
  ScriptHandler_AddFunction(v4, (int)MessageLoop);
  return 1;
}

//----- (02040180) --------------------------------------------------------
int __fastcall Function_2040180(int a1)
{
  ScriptHandler_AddFunction(a1, (int)Function_2040190);
  return 1;
}

//----- (02040190) --------------------------------------------------------
BOOL Function_2040190()
{
  return (dword_21BF6C4 & 3) != 0;
}

//----- (020401A8) --------------------------------------------------------
int __fastcall ScriptCmd_SetSaveData(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  *(uint *)(v1 + 100) = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  ScriptHandler_AddFunction(v1, (int)Function_20401d0);
  return 1;
}

//----- (020401D0) --------------------------------------------------------
BOOL __fastcall Function_20401d0(int a1)
{
  int v2

  if ( dword_21BF6C4 & 3 )
    return 1;
  v2 = *(uint *)(a1 + 100) - 1;
  *(uint *)(a1 + 100) = v2;
  return v2 == 0;
}

//----- (020401F4) --------------------------------------------------------
int __fastcall ScriptCmd_WaitButton(int a1)
{
  ScriptHandler_AddFunction(a1, (int)WaitButton);
  return 1;
}

//----- (02040204) --------------------------------------------------------
int __fastcall WaitButton(int a1)
{
  if ( dword_21BF6C4 & 3 )
    return 1;
  if ( dword_21BF6C4 & 0x40 )
  {
    Function_205ea84(*(uint *)(*(uint *)(a1 + 128) + 60), 0);
  }
  else if ( dword_21BF6C4 & 0x80 )
  {
    Function_205ea84(*(uint *)(*(uint *)(a1 + 128) + 60), 1);
  }
  else if ( dword_21BF6C4 & 0x20 )
  {
    Function_205ea84(*(uint *)(*(uint *)(a1 + 128) + 60), 2);
  }
  else if ( dword_21BF6C4 & 0x10 )
  {
    Function_205ea84(*(uint *)(*(uint *)(a1 + 128) + 60), 3);
  }
  else
  {
    if ( !(dword_21BF6C4 & 0x400) )
      return 0;
    ShowMenu(*(uint *)(a1 + 128));
  }
  return 1;
}

//----- (02040284) --------------------------------------------------------
int __fastcall Function_2040284(int a1)
{
  ScriptHandler_AddFunction(a1, (int)Function_2040294);
  return 1;
}

//----- (02040294) --------------------------------------------------------
BOOL Function_2040294()
{
  BOOL result

  if ( dword_21BF6C4 & 3 )
    result = 1;
  else
    result = (uchar)(dword_21BF6C4 & 0xF0) != 0;
  return result;
}

//----- (020402B4) --------------------------------------------------------
int __fastcall Function_20402b4(int a1)
{
  int v1
  int v2
  uchar *v3
  int v4
  int v5
  ushort *v6

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 6u);
  v4 = ScriptHandler_GetSomeScriptAddresses(v2, 1u);
  Function_205d8f4(*(uint **)(v2 + 8), v4, 3);
  v5 = ScriptHandler_GetSomeScriptAddresses(v2, 1u);
  v6 = (ushort *)LoadPlayerDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_205d944(v5, v6);
  *v3 = 1;
  return 0;
}

//----- (020402FC) --------------------------------------------------------
int __fastcall ScriptCmd_CloseMsgOnKeyPress(int a1)
{
  int v1
  int v2
  uchar *v3
  int result

  v1 = *(uint *)(a1 + 128);
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 1u);
  v3 = (uchar *)ScriptHandler_GetSomeScriptAddresses(v1, 6u);
  Function_200e084(v2, 0);
  Function_201a8fc(v2);
  result = 0;
  *v3 = 0;
  return result;
}

//----- (0204032C) --------------------------------------------------------
int __fastcall ScriptCmd_FreezeMsgBox(int a1)
{
  int v1
  int v2
  uchar *v3
  int result

  v1 = *(uint *)(a1 + 128);
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 1u);
  v3 = (uchar *)ScriptHandler_GetSomeScriptAddresses(v1, 6u);
  Function_201a8fc(v2);
  result = 0;
  *v3 = 0;
  return result;
}

//----- (02040354) --------------------------------------------------------
int __fastcall Function_2040354(int a1)
{
  int v1
  int v2
  ushort *v3
  ushort *v4
  ushort *v5
  ushort *v6
  ushort *v7
  ushort *v8
  uchar *v9
  uchar *v10
  uchar *v11
  uchar *v12
  uchar *v13
  uchar *v14

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (ushort *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x31u);
  v4 = (ushort *)ScriptHandler_GetSomeScriptAddresses(v2, 0x2Du);
  v5 = (ushort *)ScriptHandler_GetSomeScriptAddresses(v2, 0x32u);
  v6 = (ushort *)ScriptHandler_GetSomeScriptAddresses(v2, 0x33u);
  v7 = (ushort *)ScriptHandler_GetSomeScriptAddresses(v2, 0x2Eu);
  v8 = (ushort *)ScriptHandler_GetSomeScriptAddresses(v2, 0x34u);
  v9 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v9 + 1;
  *v3 = *v9;
  v10 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v10 + 1;
  *v4 = *v10;
  v11 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v11 + 1;
  *v5 = *v11;
  v12 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v12 + 1;
  *v6 = *v12;
  v13 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v13 + 1;
  *v7 = *v13;
  v14 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v14 + 1;
  *v8 = *v14;
  ScriptHandler_AddFunction(v1, (int)Function_20403ec);
  return 1;
}

//----- (020403EC) --------------------------------------------------------
int __fastcall Function_20403ec(int a1)
{
  int v1
  ushort *v2
  ushort *v3
  ushort *v4
  int v6
  int v7
  int v8
  int v9
  ushort *v10
  ushort *v11
  ushort *v12

  v1 = *(uint *)(a1 + 128);
  v2 = (ushort *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x31u);
  v12 = (ushort *)ScriptHandler_GetSomeScriptAddresses(v1, 0x32u);
  v11 = (ushort *)ScriptHandler_GetSomeScriptAddresses(v1, 0x33u);
  v10 = (ushort *)ScriptHandler_GetSomeScriptAddresses(v1, 0x34u);
  v3 = (ushort *)ScriptHandler_GetSomeScriptAddresses(v1, 0x2Du);
  v4 = (ushort *)ScriptHandler_GetSomeScriptAddresses(v1, 0x2Eu);
  if ( !*v3 && !*v4 )
    return 1;
  v6 = (ushort)*v2;
  if ( *v2 )
  {
    v7 = *(uint *)(v1 + 8);
    if ( *v12 )
      Function_2019184(v7, 3u, 2u, v6);
    else
      Function_2019184(v7, 3u, 1u, v6);
  }
  v8 = (ushort)*v11;
  if ( *v11 )
  {
    v9 = *(uint *)(v1 + 8);
    if ( *v10 )
      Function_2019184(v9, 3u, 5u, v8);
    else
      Function_2019184(v9, 3u, 4u, v8);
  }
  if ( *v3 )
    --*v3;
  if ( *v4 )
    --*v4;
  return 0;
}

//----- (020404A4) --------------------------------------------------------
int __fastcall ScriptCmd_CallMsgBox(int a1)
{
  int v1
  int v2
  int *v3
  uchar *v4
  int v5
  uint **v6
  int v7
  int v8
  uint v10
  int v11
  uint **v12
  ushort **v13

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v13 = (ushort **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x11u);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0x10u);
  v12 = (uint **)ScriptHandler_GetSomeScriptAddresses(v2, 0xFu);
  v4 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v4 + 1;
  v10 = *v4;
  *(uint *)(v1 + 8) = v4 + 2;
  v11 = v4[1];
  v5 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_LoadHWord(v1);
  if ( !v5 )
  {
    v6 = (uint **)ScriptHandler_GetSomeScriptAddresses(v2, 0xAu);
    v5 = Function_20629d8(*v6, 0) & 0xFFFF;
  }
  ((void (__fastcall *)(uint, int, int))dword_21E1B38[0])(*(uint *)(v2 + 100), v11, v5);
  ((void (__fastcall *)(uint, int))dword_21E1B40[0])(*(uint *)(v2 + 100), 1);
  ((void (__fastcall *)(int))dword_21E1B68[0])(v2);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 120), v10, *v13);
  Function_200c388(*v12, *v3, (int)*v13);
  v7 = ((int (__fastcall *)(uint))dword_21E1B50)(*(uint *)(v2 + 100));
  v8 = *v3;
  Function_201d738_CallInitTextInterpreter(v7, 1);
  return 1;
}

//----- (02040554) --------------------------------------------------------
int __fastcall ScriptCmd_ColorMsgBox(int a1)
{
  uchar *v1
  int v2
  int v3
  int v4

  v1 = *(uchar **)(a1 + 8);
  v2 = *(uint *)(a1 + 128);
  *(uint *)(a1 + 8) = v1 + 1;
  v3 = *v1;
  v4 = ScriptHandler_LoadHWord(a1);
  ((void (__fastcall *)(uint, int, int))dword_21E1B38[0])(*(uint *)(v2 + 100), v3, v4);
  ((void (__fastcall *)(uint, int))dword_21E1B40[0])(*(uint *)(v2 + 100), 1);
  return 1;
}

//----- (02040580) --------------------------------------------------------
int __fastcall ScriptCmd_TypeMsgBox(int a1)
{
  uchar *v1
  int v2

  v1 = *(uchar **)(a1 + 8);
  v2 = *(uint *)(a1 + 128);
  *(uint *)(a1 + 8) = v1 + 1;
  ((void (__fastcall *)(uint, uint))dword_21E1B40[0])(*(uint *)(v2 + 100), *v1);
  return 1;
}

//----- (0204059C) --------------------------------------------------------
int __fastcall ScriptCmd_NoMapMsgBox(int a1)
{
  int v1

  v1 = a1;
  if ( ((int (__fastcall *)(uint))dword_21E1B58[0])(*(uint *)(*(uint *)(a1 + 128) + 100)) == 1 )
    return 0;
  ScriptHandler_AddFunction(v1, (int)Function_20405c4);
  return 1;
}

//----- (020405C4) --------------------------------------------------------
BOOL __fastcall Function_20405c4(int a1)
{
  return ((int (__fastcall *)(uint))dword_21E1B58[0])(*(uint *)(*(uint *)(a1 + 128) + 100)) == 1;
}

//----- (020405DC) --------------------------------------------------------
int __fastcall ScriptCmd_CallTextMsgBox(int a1)
{
  int v1
  int v2
  uchar *v3
  ushort **v4
  int *v5
  int v6
  uchar *v7
  uint **v8
  uint v9
  int v10
  int v11
  ushort *v12

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 3u);
  v4 = (ushort **)ScriptHandler_GetSomeScriptAddresses(v2, 0x11u);
  v5 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0x10u);
  v6 = ScriptHandler_GetSomeScriptAddresses(v2, 0xFu);
  v7 = *(uchar **)(v1 + 8);
  v8 = (uint **)v6;
  *(uint *)(v1 + 8) = v7 + 1;
  v9 = *v7;
  v10 = ScriptHandler_LoadHWord(v1);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 120), v9, *v4);
  Function_200c388(*v8, *v5, (int)*v4);
  v11 = ((int (__fastcall *)(uint))dword_21E1B50)(*(uint *)(v2 + 100));
  v12 = (ushort *)LoadPlayerDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_205d994(v11, *v5, v12, 1);
  *(uint *)(v1 + 100) = v10;
  ScriptHandler_AddFunction(v1, (int)Function_2040670);
  return 1;
}

//----- (02040670) --------------------------------------------------------
int __fastcall Function_2040670(int a1)
{
  int v1
  int v2
  uchar *v3
  ushort *v4
  int v5
  int result

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 3u);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(v2, *(uint *)(v1 + 100) & 0xFFFF);
  ((void (__fastcall *)(uint))dword_21E1B54)(*(uint *)(v2 + 100));
  v5 = 0xFFFF;
  if ( Function_205da04(*v3) == 1 )
  {
    *v4 = 2;
    result = 1;
  }
  else
  {
    if ( dword_21BF6C4 & 0x40 )
    {
      v5 = 0;
    }
    else if ( dword_21BF6C4 & 0x80 )
    {
      v5 = 1;
    }
    else if ( dword_21BF6C4 & 0x20 )
    {
      v5 = 2;
    }
    else if ( dword_21BF6C4 & 0x10 )
    {
      v5 = 3;
    }
    if ( v5 == 0xFFFF )
    {
      if ( dword_21BF6C4 & 0x400 )
      {
        Call_RemoveTextInterpreterTaskFromTaskList(*v3);
        result = 1;
        *v4 = 1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      Call_RemoveTextInterpreterTaskFromTaskList(*v3);
      Function_205ea84(*(uint *)(*(uint *)(v1 + 128) + 60), v5);
      *v4 = 0;
      result = 1;
    }
  }
  return result;
}

//----- (02040714) --------------------------------------------------------
int __fastcall ScriptCmd_StoreMenuStatus(int a1)
{
  int v1

  v1 = a1;
  *(uint *)(a1 + 100) = ScriptHandler_LoadHWord(a1);
  ScriptHandler_AddFunction(v1, (int)Function_2040730);
  return 1;
}

//----- (02040730) --------------------------------------------------------
int __fastcall Function_2040730(int a1)
{
  int v1
  ushort *v2
  int v3
  int result

  v1 = a1;
  v2 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(a1 + 128), *(uint *)(a1 + 100) & 0xFFFF);
  v3 = 0xFFFF;
  if ( dword_21BF6C4 & 3 )
  {
    *v2 = 0;
    result = 1;
  }
  else
  {
    if ( dword_21BF6C4 & 0x40 )
    {
      v3 = 0;
    }
    else if ( dword_21BF6C4 & 0x80 )
    {
      v3 = 1;
    }
    else if ( dword_21BF6C4 & 0x20 )
    {
      v3 = 2;
    }
    else if ( dword_21BF6C4 & 0x10 )
    {
      v3 = 3;
    }
    if ( v3 == 0xFFFF )
    {
      if ( dword_21BF6C4 & 0x400 )
      {
        result = 1;
        *v2 = 1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      Function_205ea84(*(uint *)(*(uint *)(v1 + 128) + 60), v3);
      *v2 = 0;
      result = 1;
    }
  }
  return result;
}

//----- (020407B4) --------------------------------------------------------
int __fastcall ScriptCmd_ShowMenu(int a1)
{
  ShowMenu(*(uint *)(a1 + 128));
  return 0;
}

//----- (020407C4) --------------------------------------------------------
int __fastcall ScriptCmd_YesNoBox(int a1)
{
  int v1
  int v2
  int *v3
  int v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 2u);
  v4 = ScriptHandler_LoadHWord(v1);
  Function_200daa4(*(uint **)(v2 + 8), 3u, 985, 11, 0, 4);
  *v3 = Function_2002100(*(uint **)(v2 + 8), (uchar *)Unknown_20eab84, 985, 11, 4u);
  *(uint *)(v1 + 100) = v4;
  ScriptHandler_AddFunction(v1, (int)Function_2040824);
  return 1;
}

//----- (02040824) --------------------------------------------------------
int __fastcall Function_2040824(int a1)
{
  int v1
  int v2
  int *v3
  ushort *v4
  int v5

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 2u);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(v2, *(uint *)(v1 + 100) & 0xFFFF);
  v5 = Function_2002114(*v3, 4u);
  if ( v5 == -1 )
    return 0;
  *v4 = v5 != 0;
  return 1;
}

//----- (02040868) --------------------------------------------------------
int __fastcall ScriptCmd_ShowSavingClock(int a1)
{
  int v1
  int *v2
  int *v3

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 1u);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x12u);
  *v3 = Function_200e7fc(v2, 994);
  return 0;
}

//----- (02040898) --------------------------------------------------------
int __fastcall ScriptCmd_HideSavingClock(int a1)
{
  int *v1

  v1 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x12u);
  Function_200eba0(*v1);
  return 0;
}

//----- (020408B0) --------------------------------------------------------
int __fastcall ScriptCmd_Multi(uint *a1)
{
  uint *v1
  int v2
  uint *v3
  uint *v4
  uchar *v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12

  v1 = a1;
  v2 = a1[32];
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(a1[32], 0);
  v4 = (uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0xFu);
  v5 = (uchar *)v1[2];
  v1[2] = v5 + 1;
  v6 = *v5;
  v1[2] = v5 + 2;
  v7 = v5[1];
  v1[2] = v5 + 3;
  v8 = v5[2];
  v1[2] = v5 + 4;
  v9 = v5[3];
  v10 = ScriptHandler_LoadHWord((int)v1);
  v11 = ScriptHandler_CheckLoadParameter(v2, v10);
  v12 = ScriptHandler_GetSomeScriptAddresses(v1[32], 1u);
  *v3 = ((int (__fastcall *)(int, int, int, int, int, int, uint, int, uint))dword_21DC150[0])(
          v2,
          v6,
          v7,
          v8,
          v9,
          v11,
          *v4,
          v12,
          0);
  v1[25] = v10;
  return 1;
}

//----- (02040938) --------------------------------------------------------
int __fastcall ScriptCmd_Multi2(uint *a1)
{
  uint *v1
  int v2
  uint *v3
  uint *v4
  uchar *v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12

  v1 = a1;
  v2 = a1[32];
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(a1[32], 0);
  v4 = (uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0xFu);
  v5 = (uchar *)v1[2];
  v1[2] = v5 + 1;
  v6 = *v5;
  v1[2] = v5 + 2;
  v7 = v5[1];
  v1[2] = v5 + 3;
  v8 = v5[2];
  v1[2] = v5 + 4;
  v9 = v5[3];
  v10 = ScriptHandler_LoadHWord((int)v1);
  v11 = ScriptHandler_CheckLoadParameter(v2, v10);
  v12 = ScriptHandler_GetSomeScriptAddresses(v1[32], 1u);
  *v3 = ((int (__fastcall *)(int, int, int, int, int, int, uint, int, uint))dword_21DC150[0])(
          v2,
          v6,
          v7,
          v8,
          v9,
          v11,
          *v4,
          v12,
          v1[30]);
  v1[25] = v10;
  return 1;
}

//----- (020409C0) --------------------------------------------------------
int __fastcall ScriptCmd_TextScriptMulti(int a1)
{
  int v1
  uint *v2
  uchar *v3
  uchar *v4
  int v5

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0);
  v3 = *(uchar **)(v1 + 8);
  v4 = v3 + 1;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  *(uint *)(v1 + 8) = v4 + 1;
  ((void (__fastcall *)(uint, int, uint))dword_21DC1A4[0])(*v2, v5, *v4);
  return 0;
}

//----- (020409E8) --------------------------------------------------------
int __fastcall ScriptCmd_ChoiceMulti(int a1)
{
  int v1
  uint *v2
  int v3
  uint v4
  int v5
  uint v6

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  ((void (__fastcall *)(uint, uint, uint))dword_21DC1A4[0])(*v2, v4, v6);
  return 0;
}

//----- (02040A2C) --------------------------------------------------------
int __fastcall ScriptCmd_CloseMulti(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0);
  ((void (__fastcall *)(uint))dword_21DC1AC[0])(*v2);
  ScriptHandler_AddFunction(v1, (int)Function_2040a50);
  return 1;
}

//----- (02040A50) --------------------------------------------------------
BOOL __fastcall Function_2040a50(int a1)
{
  return *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(a1 + 128), *(uint *)(a1 + 100) & 0xFFFF) != 61166;
}

//----- (02040A78) --------------------------------------------------------
int __fastcall ScriptCmd_CloseMultiUnion(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0);
  ((void (__fastcall *)(uint))dword_21DC1AC[0])(*v2);
  ScriptHandler_AddFunction(v1, (int)Function_2040a9c);
  return 1;
}

//----- (02040A9C) --------------------------------------------------------
int __fastcall Function_2040a9c(int a1)
{
  int v1
  ushort *v2
  uint *v3

  v1 = *(uint *)(a1 + 128);
  v2 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(a1 + 128), *(uint *)(a1 + 100) & 0xFFFF);
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(v1, 0);
  if ( (ushort)*v2 != 61166 )
    return 1;
  if ( !Function_205b9e8(*(uint *)(v1 + 124)) )
    return 0;
  *v2 = 8;
  ((void (__fastcall *)(uint))dword_21DC424[0])(*v3);
  return 1;
}

//----- (02040AE8) --------------------------------------------------------
int __fastcall ScriptCmd_Multi3(uint *a1)
{
  uint *v1
  int v2
  uint *v3
  uint *v4
  uchar *v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12

  v1 = a1;
  v2 = a1[32];
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(a1[32], 0);
  v4 = (uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0xFu);
  v5 = (uchar *)v1[2];
  v1[2] = v5 + 1;
  v6 = *v5;
  v1[2] = v5 + 2;
  v7 = v5[1];
  v1[2] = v5 + 3;
  v8 = v5[2];
  v1[2] = v5 + 4;
  v9 = v5[3];
  v10 = ScriptHandler_LoadHWord((int)v1);
  v11 = ScriptHandler_CheckLoadParameter(v2, v10);
  v12 = ScriptHandler_GetSomeScriptAddresses(v1[32], 1u);
  *v3 = ((int (__fastcall *)(int, int, int, int, int, int, uint, int, uint))dword_21DC48C[0])(
          v2,
          v6,
          v7,
          v8,
          v9,
          v11,
          *v4,
          v12,
          0);
  v1[25] = v10;
  return 1;
}

//----- (02040B70) --------------------------------------------------------
int __fastcall ScriptCmd_Multi4(uint *a1)
{
  uint *v1
  int v2
  uint *v3
  uint *v4
  uchar *v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12

  v1 = a1;
  v2 = a1[32];
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(a1[32], 0);
  v4 = (uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0xFu);
  v5 = (uchar *)v1[2];
  v1[2] = v5 + 1;
  v6 = *v5;
  v1[2] = v5 + 2;
  v7 = v5[1];
  v1[2] = v5 + 3;
  v8 = v5[2];
  v1[2] = v5 + 4;
  v9 = v5[3];
  v10 = ScriptHandler_LoadHWord((int)v1);
  v11 = ScriptHandler_CheckLoadParameter(v2, v10);
  v12 = ScriptHandler_GetSomeScriptAddresses(v1[32], 1u);
  *v3 = ((int (__fastcall *)(int, int, int, int, int, int, uint, int, uint))dword_21DC48C[0])(
          v2,
          v6,
          v7,
          v8,
          v9,
          v11,
          *v4,
          v12,
          v1[30]);
  v1[25] = v10;
  return 1;
}

//----- (02040BF8) --------------------------------------------------------
int __fastcall ScriptCmd_TxtMsgScrpMulti(int a1)
{
  int v1
  uint *v2
  int v3
  uchar v4
  int v5
  uchar v6
  int v7
  uchar v8

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  ((void (__fastcall *)(uint, uint, uint, uint))dword_21DC4B0[0])(*v2, v4, v6, v8);
  return 0;
}

//----- (02040C58) --------------------------------------------------------
int __fastcall ScriptCmd_CloseMulti4(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0);
  ((void (__fastcall *)(uint))dword_21DC4B8[0])(*v2);
  ScriptHandler_AddFunction(v1, (int)Function_2040a50);
  return 1;
}

//----- (02040C7C) --------------------------------------------------------
int __fastcall Function_2040c7c(int a1)
{
  int v1
  uint *v2
  int v3
  uint v4

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  ((void (__fastcall *)(uint, uint))dword_21DC528[0])(*v2, v4);
  ScriptHandler_AddFunction(v1, (int)Function_2040a50);
  return 1;
}

//----- (02040CB8) --------------------------------------------------------
int __fastcall Function_2040cb8(int a1)
{
  int v1
  uint *v2
  int v3
  int v4
  int v5
  int v6

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  ((void (__fastcall *)(uint, int, int))dword_21DC600[0])(*v2, v4, v6);
  ScriptHandler_AddFunction(v1, (int)Function_2040a50);
  return 1;
}

//----- (02040D08) --------------------------------------------------------
int __fastcall ScriptCmd_Multirow(int a1)
{
  int v1
  uint *v2
  uchar *v3

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0);
  v3 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v3 + 1;
  ((void (__fastcall *)(uint, uint))dword_21DCD94[0])(*v2, *v3);
  ScriptHandler_AddFunction(v1, (int)Function_2040a50);
  return 1;
}

//----- (02040D34) --------------------------------------------------------
int __fastcall ScriptCmd_33a(int a1)
{
  int v1
  uint *v2
  uchar *v3

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0);
  v3 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v3 + 1;
  ((void (__fastcall *)(uint, uint))dword_21DD3F4[0])(*v2, *v3);
  return 1;
}

//----- (02040D54) --------------------------------------------------------
int __fastcall ScriptCmd_33b(int a1)
{
  int v1
  uint *v2
  uchar *v3

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0);
  v3 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v3 + 1;
  ((void (__fastcall *)(uint, uint))dword_21DD410[0])(*v2, *v3);
  return 1;
}

//----- (02040D74) --------------------------------------------------------
int __fastcall ScriptCmd_ApplyMovement(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint *v5
  uint *v7
  uchar *v8

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadWord(v1);
  v5 = GetAdressOfSpriteID_Extended(*(uint *)(v1 + 128), v3);
  if ( v5 )
  {
    v7 = Malloc_MovementScript((int)v5, *(uint *)(v1 + 8) + v4);
    v8 = (uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 4u);
    ++*v8;
    StartMovementScriptHandler(*(uint *)(v1 + 128), (int)v7, 0);
  }
  else
  {
    ErrorHandler();
  }
  return 0;
}

//----- (02040DD8) --------------------------------------------------------
int __fastcall ScriptCmd_ApplyMovement2(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  uint v6
  ushort *v7
  uint v8
  uint v9
  int v10
  int v11
  uint *v12
  uchar *v13
  uint v15
  uint *v16

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v15 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v16 = GetAdressOfSpriteID_Extended(*(uint *)(v1 + 128), v3);
  if ( !v16 )
    ErrorHandler();
  v7 = (ushort *)malloc(4u, 256);
  v8 = (ushort)LoadSpritePositionX((int)v16);
  v9 = (ushort)LoadSpritePositionY((int)v16);
  v10 = 0;
  if ( v8 >= v15 )
  {
    if ( v8 > v15 )
    {
      *v7 = 14;
      v10 = 1;
      v7[1] = v8 - v15;
    }
  }
  else
  {
    *v7 = 15;
    v10 = 1;
    v7[1] = v15 - v8;
  }
  if ( v9 >= v6 )
  {
    if ( v9 > v6 )
    {
      v7[2 * v10] = 13;
      v7[2 * v10++ + 1] = v9 - v6;
    }
  }
  else
  {
    v7[2 * v10] = 12;
    v7[2 * v10++ + 1] = v6 - v9;
  }
  v11 = 2 * v10;
  v7[v11] = 254;
  v7[v11 + 1] = 0;
  v12 = Malloc_MovementScript((int)v16, (int)v7);
  v13 = (uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 4u);
  ++*v13;
  StartMovementScriptHandler(*(uint *)(v1 + 128), (int)v12, (int)v7);
  return 0;
}

//----- (02040ED4) --------------------------------------------------------
uint *__fastcall GetAdressOfSpriteID_Extended(int a1, int a2)
{
  if ( a2 == 242 )
    return GetSpriteAdrWithMovementNr(*(uint *)(a1 + 56), 48);
  if ( a2 == 241 )
    return *(uint **)ScriptHandler_GetSomeScriptAddresses(a1, 0xBu);
  return GetAdressOfSpriteID(*(uint *)(a1 + 56), a2);
}

//----- (02040EFC) --------------------------------------------------------
int __fastcall ScriptCmd_WaitMovement(int a1)
{
  ScriptHandler_AddFunction(a1, (int)WaitMovement);
  return 1;
}

//----- (02040F0C) --------------------------------------------------------
BOOL __fastcall WaitMovement(int a1)
{
  return *(uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 4u) == 0;
}

//----- (02040F28) --------------------------------------------------------
uint *__fastcall StartMovementScriptHandler(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  uint *v6
  uint *v7
  uint *result

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (uint *)malloc(4u, 16);
  v7 = v6;
  if ( !v6 )
    return (uint *)ErrorHandler();
  v6[3] = v3;
  v6[1] = v4;
  v6[2] = v5;
  result = AddTaskToTaskList1((int)MovementScript_TaskHandler, (int)v6, 0);
  *v7 = result;
  return result;
}

//----- (02040F5C) --------------------------------------------------------
int __fastcall MovementScript_TaskHandler(int a1, int a2)
{
  int v2
  uchar *v3
  int result
  int v5

  v2 = a2;
  v3 = (uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a2 + 12), 4u);
  result = Function_206574c(*(uint *)(v2 + 4));
  if ( result == 1 )
  {
    Function_2065758(*(uint *)(v2 + 4));
    Call_RemoveTaskFromTaskList(*(int **)v2);
    v5 = *(uint *)(v2 + 8);
    if ( v5 )
      free(v5);
    free(v2);
    if ( *v3 )
    {
      result = (uchar)*v3 - 1;
      *v3 = result;
    }
    else
    {
      result = ErrorHandler();
    }
  }
  return result;
}

//----- (02040FA4) --------------------------------------------------------
int __fastcall ScriptCmd_LockAll(int a1)
{
  int v1
  int v2
  uint *v3
  int v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  if ( *(uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu) )
  {
    Function_20410f4(v1);
  }
  else
  {
    Function_2062c48(*(uint *)(v2 + 56));
    v3 = GetSpriteAdrWithMovementNr(*(uint *)(v2 + 56), 48);
    if ( v3 )
    {
      v4 = LoadFlagAdress(*(uint *)(v2 + 12));
      if ( Function_206a984(v4) == 1 )
      {
        if ( CheckSpriteFlag_2(v3) )
        {
          UnsetSpriteFlag_Lock(v3);
          ScriptHandler_AddFunction(v1, (int)Function_20410cc);
          return 1;
        }
      }
    }
  }
  return 1;
}

//----- (02041004) --------------------------------------------------------
BOOL __fastcall Function_2041004(int a1)
{
  int v1
  int *v2
  uint *v3
  uint *v4
  uint *v5
  uint *v6

  v1 = *(uint *)(a1 + 128);
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = (uint *)Function_205eb3c(*(uint *)(v1 + 60));
  v4 = v3;
  if ( byte_21C07E0 & 1 && Function_2065684(v3) == 1 )
  {
    SetSpriteFlag_Lock(v4);
    byte_21C07E0 &= 0xFEu;
  }
  if ( byte_21C07E0 & 4 && !CheckSpriteFlag_2((uint *)*v2) )
  {
    SetSpriteFlag_Lock((uint *)*v2);
    byte_21C07E0 &= 0xFBu;
  }
  if ( byte_21C07E0 & 2 )
  {
    v5 = GetSpriteAdrWithMovementNr(*(uint *)(v1 + 56), 48);
    if ( !CheckSpriteFlag_2(v5) )
    {
      SetSpriteFlag_Lock(v5);
      byte_21C07E0 &= 0xFDu;
    }
  }
  if ( byte_21C07E0 & 8 )
  {
    v6 = (uint *)Function_2069eb8(*v2);
    if ( !CheckSpriteFlag_2(v6) )
    {
      SetSpriteFlag_Lock(v6);
      byte_21C07E0 &= 0xF7u;
    }
  }
  return byte_21C07E0 == 0;
}

//----- (020410CC) --------------------------------------------------------
int __fastcall Function_20410cc(int a1)
{
  uint *v1

  v1 = GetSpriteAdrWithMovementNr(*(uint *)(*(uint *)(a1 + 128) + 56), 48);
  if ( CheckSpriteFlag_2(v1) )
    return 0;
  SetSpriteFlag_Lock(v1);
  return 1;
}

//----- (020410F4) --------------------------------------------------------
int __fastcall Function_20410f4(int a1)
{
  int *v1
  int *v2
  uint *v3
  uint *v4
  int v5
  int v6
  int v8
  uint *v9

  v8 = a1;
  v1 = *(int **)(a1 + 128);
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v9 = (uint *)Function_205eb3c(v1[15]);
  v3 = GetSpriteAdrWithMovementNr(v1[14], 48);
  v4 = (uint *)Function_2069eb8(*v2);
  v5 = v1[14];
  byte_21C07E0 = 0;
  Function_2062c48(v5);
  if ( !Function_2065684(v9) )
  {
    byte_21C07E0 |= 1u;
    UnsetSpriteFlag_Lock(v9);
  }
  if ( CheckSpriteFlag_2((uint *)*v2) )
  {
    byte_21C07E0 |= 4u;
    UnsetSpriteFlag_Lock((uint *)*v2);
  }
  if ( v3 )
  {
    v6 = LoadFlagAdress(v1[3]);
    if ( Function_206a984(v6) == 1 )
    {
      if ( CheckSpriteFlag_2(v3) )
      {
        byte_21C07E0 |= 2u;
        UnsetSpriteFlag_Lock(v3);
      }
    }
  }
  if ( v4 && CheckSpriteFlag_2(v4) )
  {
    byte_21C07E0 |= 8u;
    UnsetSpriteFlag_Lock(v4);
  }
  ScriptHandler_AddFunction(v8, (int)Function_2041004);
  return 1;
}

//----- (020411C4) --------------------------------------------------------
int __fastcall ScriptCmd_ReleaseAll(int a1)
{
  Sprite_ReleaseAll(*(uint *)(*(uint *)(a1 + 128) + 56));
  return 1;
}

//----- (020411D4) --------------------------------------------------------
int __fastcall ScriptCmd_Lock(int a1)
{
  int v1
  int v2
  uint *v3

  v1 = *(uint *)(a1 + 128);
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = GetAdressOfSpriteID(*(uint *)(v1 + 56), v2);
  SetSpriteFlag_Lock(v3);
  return 0;
}

//----- (020411F0) --------------------------------------------------------
int __fastcall ScriptCmd_Release(int a1)
{
  int v1
  int v2
  uint *v3

  v1 = *(uint *)(a1 + 128);
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = GetAdressOfSpriteID(*(uint *)(v1 + 56), v2);
  UnsetSpriteFlag_Lock(v3);
  return 0;
}

//----- (0204120C) --------------------------------------------------------
int __fastcall ScriptCmd_AddPeople(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  ushort *v6

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = Function_203a4b4(v2);
  v6 = (ushort *)Function_203a4bc(v2);
  if ( !Sprite_AddPeople(*(uint *)(v2 + 56), v4, v5, **(uint **)(v2 + 28), v6) )
    ErrorHandler();
  return 0;
}

//----- (02041254) --------------------------------------------------------
int __fastcall ScriptCmd_RemovePeople(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint *v5

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = GetAdressOfSpriteID(*(uint *)(v2 + 56), v4);
  if ( v5 )
    Sprite_RemovePeople((int)v5);
  else
    ErrorHandler();
  return 0;
}

//----- (02041288) --------------------------------------------------------
int __fastcall ScriptCmd_LockCam(int a1)
{
  int v1
  int v2
  short v3
  int v4
  short v5
  int *v6
  uint *v7
  int v8
  int v9
  int v10
  uint *v11
  int v12

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xBu);
  v7 = InitSpriteStruct(
         *(uint *)(*(uint *)(v1 + 128) + 56),
         v3,
         v5,
         0,
         0x2000,
         0,
         **(uint **)(*(uint *)(v1 + 128) + 28));
  *v6 = (int)v7;
  Function_20642f8(v7, v8, v9, v10);
  Function_2062d64((uint *)*v6, 1);
  Function_2062d80((uint *)*v6, 0);
  v11 = (uint *)GetSpriteAdr70(*v6);
  v12 = *(uint *)(*(uint *)(v1 + 128) + 40);
  ((void (*)(void))dword_21E931C[0])();
  Function_2020690(v11, *(uint **)(*(uint *)(v1 + 128) + 36));
  return 0;
}

//----- (02041320) --------------------------------------------------------
int __fastcall ScriptCmd_ZoomCam(int a1)
{
  int v1
  int *v2
  uint *v3
  uint *v4
  int v5

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xBu);
  Function_2061af4(*v2);
  v3 = GetAdressOfSpriteID(*(uint *)(*(uint *)(v1 + 128) + 56), 255);
  v4 = (uint *)GetSpriteAdr70((int)v3);
  v5 = *(uint *)(*(uint *)(v1 + 128) + 40);
  ((void (*)(void))dword_21E931C[0])();
  Function_2020690(v4, *(uint **)(*(uint *)(v1 + 128) + 36));
  return 0;
}

//----- (02041364) --------------------------------------------------------
int __fastcall Function_2041364(int a1)
{
  int v1
  int v2
  short v3
  int v4
  short v5
  uint **v6
  uint *v7
  int v8
  int v9
  int v10

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = (uint **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xBu);
  v7 = InitSpriteStruct(
         *(uint *)(*(uint *)(v1 + 128) + 56),
         v3,
         v5,
         0,
         0x2000,
         0,
         **(uint **)(*(uint *)(v1 + 128) + 28));
  *v6 = v7;
  Function_20642f8(v7, v8, v9, v10);
  Function_2062d64(*v6, 1);
  Function_2062d80(*v6, 0);
  return 0;
}

//----- (020413D8) --------------------------------------------------------
int __fastcall Function_20413d8(int a1)
{
  int *v1

  v1 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xBu);
  Function_2061af4(*v1);
  return 0;
}

//----- (020413F0) --------------------------------------------------------
int __fastcall ScriptCmd_FacePlayer(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1 + 128;
  v2 = *(uint *)v1;
  v3 = GetSpriteFaceDirection(*(uint *)(*(uint *)v1 + 60));
  GetOppositeFaceDirection(v3);
  if ( *(uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0xAu) )
    ((void (*)(void))dword_21ECDFC[0])();
  return 0;
}

//----- (02041420) --------------------------------------------------------
int __fastcall ScriptCmd_CheckSpritePosition(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  ushort *v6

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  *v4 = GetSpritePositionX(*(uint *)(v2 + 60));
  *v6 = GetSpritePositionY(*(uint *)(v2 + 60));
  return 0;
}

//----- (02041464) --------------------------------------------------------
int __fastcall ScriptCmd_CheckIdSpritePosition(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint *v5
  int v6
  ushort *v7
  int v8
  ushort *v9

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = GetAdressOfSpriteID(*(uint *)(v2 + 56), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = ScriptHandler_LoadHWord(v1);
  v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v8);
  *v7 = LoadSpritePositionX((int)v5);
  *v9 = LoadSpritePositionY((int)v5);
  return 0;
}

//----- (020414C4) --------------------------------------------------------
int __fastcall ScriptCmd_CheckFacePosition(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = GetSpriteFaceDirection(*(uint *)(*(uint *)(v1 + 128) + 60));
  return 0;
}

//----- (020414EC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPersonPosition(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  uint v5
  int v6
  uint v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  int v16
  uint *v17
  uint v19
  uint v20
  uint v21

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  if ( v3 )
  {
    v8 = fflt(v3 << 12);
    v9 = fadd(0x3F000000u, v8);
  }
  else
  {
    v10 = fflt(0);
    v9 = fsub(v10, 1056964608);
  }
  v19 = ffix(v9);
  if ( v5 )
  {
    v11 = fflt(v5 << 12);
    v12 = fadd(0x3F000000u, v11);
  }
  else
  {
    v13 = fflt(0);
    v12 = fsub(v13, 1056964608);
  }
  v20 = ffix(v12);
  if ( v7 )
  {
    v14 = fflt(v7 << 12);
    v15 = fadd(0x3F000000u, v14);
  }
  else
  {
    v16 = fflt(0);
    v15 = fsub(v16, 1056964608);
  }
  v21 = ffix(v15);
  v17 = (uint *)Function_205eb3c(*(uint *)(*(uint *)(v1 + 128) + 60));
  Function_20630ac(v17, (int *)&v19);
  Function_2020990(&v19, *(uint *)(*(uint *)(v1 + 128) + 36));
  return 0;
}

//----- (020415D0) --------------------------------------------------------
int __fastcall ScriptCmd_ContinueFollow(int a1)
{
  int v1
  int v2
  int v3
  uint *v4
  uchar *v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = GetAdressOfSpriteID(*(uint *)(*(uint *)(v1 + 128) + 56), v3);
  v5 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v5 + 1;
  UnSetSpriteFlag_Follow(v4, *v5);
  return 0;
}

//----- (02041604) --------------------------------------------------------
int __fastcall ScriptCmd_FollowHero(int a1)
{
  int v1
  int v2
  int v3
  uint *v4
  int v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = GetAdressOfSpriteID(*(uint *)(*(uint *)(v1 + 128) + 56), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  SetSpriteFollowHero((int)v4, v5);
  return 0;
}

//----- (0204163C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckFollowBattle(int a1)
{
  int v1
  int v2
  ushort *v3
  ushort *v4
  int v5
  int v6
  uint *v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = v3;
  *v3 = 0;
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = GetAdressOfSpriteID(*(uint *)(*(uint *)(v1 + 128) + 56), v6);
  if ( v7 )
    *v4 = GetSpriteMovement((int)v7);
  return 0;
}

//----- (02041684) --------------------------------------------------------
int __fastcall ScriptCmd_StopFollowHero(int a1)
{
  uint *v1

  v1 = GetSpriteAdrWithMovementNr(*(uint *)(*(uint *)(a1 + 128) + 56), 48);
  Function_20633c8((int)v1, 254);
  return 0;
}

//----- (0204169C) --------------------------------------------------------
int __fastcall ScriptCmd_StoreSealNum(int a1)
{
  int v1
  int v2
  ushort *v3
  uchar *v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = (uchar *)LoadVariableAreaAdress_15(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_202cba8(v4);
  return 0;
}

//----- (020416C8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokemonParty(int a1)
{
  int v1
  int v2
  int v3
  int v4
  ushort *v5
  uchar *v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = (uchar *)LoadVariableAreaAdress_15(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v5 = Function_202cbc8(v6, v3);
  return 0;
}

//----- (02041708) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokemonParty(int a1)
{
  int v1
  int v2
  int v3
  int v4
  short v5
  uchar *v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = (uchar *)LoadVariableAreaAdress_15(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_202cae0(v6, v3, v5);
  return 0;
}

//----- (0204174C) --------------------------------------------------------
int __fastcall ScriptCmd_SetPokemonPartyStored(int a1)
{
  int v1
  int v2
  int v3
  int v4
  ushort *v5
  uint *v6
  int *v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = GetAdrOfPkmnInParty(v6, v3);
  *v5 = Function_2076af8((int)v7);
  return 0;
}

//----- (02041790) --------------------------------------------------------
int __fastcall ScriptCmd_ChoosePokemonMenu(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  *v2 = Function_203d3c0(32, *(uint *)(v1 + 128));
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (020417C0) --------------------------------------------------------
int __fastcall ScriptCmd_ChooseTradePokemon(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  *v2 = Function_203d3e4(32, *(uint *)(v1 + 128));
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (020417F0) --------------------------------------------------------
int __fastcall ScriptCmd_ChoosePokemonMenu2(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  *v2 = Function_203d50c(*(uint *)(*(uint *)(v1 + 128) + 16), 0x20u);
  return 1;
}

//----- (02041814) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokemonMenu2(int a1)
{
  int v1
  int v2
  ushort *v3
  int *v4
  int result

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  if ( !*v4 )
    ErrorHandler();
  *v3 = Function_203d408(*v4);
  if ( *v3 == 7 )
    *v3 = 255;
  free(*v4);
  result = 0;
  *v4 = 0;
  return result;
}

//----- (02041860) --------------------------------------------------------
int __fastcall ScriptCmd_2d0(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  ushort *v5
  int *v6
  int v7
  int v8
  int result

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  v7 = *v6;
  if ( !*v6 )
    ErrorHandler();
  v8 = Function_203d408(*v6);
  if ( v8 == 7 )
  {
    *v3 = 255;
  }
  else if ( v8 == 6 )
  {
    *v3 = *(uchar *)(v7 + 44);
    --*v3;
    *v5 = *(uchar *)(v7 + 45);
    if ( *v5 )
      --*v5;
  }
  free(*v6);
  result = 0;
  *v6 = 0;
  return result;
}

//----- (020418E0) --------------------------------------------------------
int __fastcall ScriptCmd_2d4(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5
  ushort *v6
  int *v7
  uchar *v8
  int v9
  int result
  ushort *v11

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v11 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  v8 = (uchar *)*v7;
  if ( !*v7 )
    ErrorHandler();
  v9 = Function_203d408(*v7);
  if ( v9 == 7 )
  {
    *v3 = 255;
  }
  else if ( v9 == 6 )
  {
    *v3 = v8[44];
    --*v3;
    *v11 = v8[45];
    --*v11;
    *v6 = v8[46];
    if ( *v6 )
      --*v6;
  }
  free(*v7);
  result = 0;
  *v7 = 0;
  return result;
}

//----- (02041984) --------------------------------------------------------
int __fastcall ScriptCmd_2db(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5
  ushort *v6
  int *v7
  uchar *v8
  int v9
  int result
  ushort *v11

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v11 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  v8 = (uchar *)*v7;
  if ( !*v7 )
    ErrorHandler();
  v9 = Function_203d408(*v7);
  if ( v9 == 7 )
  {
    *v3 = 255;
  }
  else if ( v9 == 6 )
  {
    *v3 = v8[44];
    --*v3;
    *v11 = v8[45];
    --*v11;
    *v6 = v8[46];
    if ( *v6 )
      --*v6;
  }
  free(*v7);
  result = 0;
  *v7 = 0;
  return result;
}

//----- (02041A28) --------------------------------------------------------
int __fastcall ScriptCmd_ChsPokeContest(int a1)
{
  int v1
  uint *v2
  int v3
  char v4
  int v5
  char v6
  int v7
  char v8
  int v9
  int v10

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v9 = ScriptHandler_LoadHWord(v1);
  v10 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v9);
  *v2 = Function_203d578(32, *(uint *)(v1 + 128), v8, v6, v10, v4);
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (02041AB0) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokeContest(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  ushort *v5
  int *v6
  int result

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  if ( !*v6 )
    ErrorHandler();
  *v3 = Function_203d408(*v6);
  if ( *v3 == 7 )
    *v3 = 255;
  *v5 = Function_203d438(*v6);
  *v5 = *v5 == 1;
  free(*v6);
  result = 0;
  *v6 = 0;
  return result;
}

//----- (02041B24) --------------------------------------------------------
int __fastcall ScriptCmd_ShowPokeInfo(int a1)
{
  int v1
  int *v2
  int v3
  char v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  *v2 = Function_203d5c8(32, *(uint *)(v1 + 128), v4);
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (02041B68) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokeMove(int a1)
{
  int v1
  int v2
  ushort *v3
  int *v4
  int result

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  if ( !*v4 )
    ErrorHandler();
  *v3 = Function_203d440(*v4);
  free(*v4);
  result = 0;
  *v4 = 0;
  return result;
}

//----- (02041BA8) --------------------------------------------------------
int __fastcall Function_2041ba8(int a1)
{
  int v1
  int *v2
  int v3
  int v4
  int v5
  short v6

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  *v2 = Function_203e63c(32, *(uint *)(v1 + 128), v4, v6);
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (02041C00) --------------------------------------------------------
int __fastcall Function_2041c00(int a1)
{
  int v1
  int v2
  ushort *v3
  int *v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  if ( !*v4 )
    ErrorHandler();
  *v3 = *(uchar *)(*v4 + 22);
  free(*v4);
  *v4 = 0;
  return 1;
}

//----- (02041C40) --------------------------------------------------------
int __fastcall Function_2041c40(int a1)
{
  int v1
  uint *v2
  int v3
  uint v4
  int v5
  ushort *v6

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  *v6 = ((int (__fastcall *)(uint, uint, uint))dword_21DBD98[0])(*(uint *)(v1 + 128), *v2, v4);
  return 0;
}

//----- (02041C8C) --------------------------------------------------------
int __fastcall Function_2041c8c(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_6(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = GetVariableAreaAdress_6_66(v4);
  return 0;
}

//----- (02041CB8) --------------------------------------------------------
int Function_2041cb8()
{
  return 0;
}

//----- (02041CBC) --------------------------------------------------------
int Function_2041cbc()
{
  return 0;
}

//----- (02041CC0) --------------------------------------------------------
int Function_2041cc0()
{
  return 1;
}

//----- (02041CC4) --------------------------------------------------------
int Function_2041cc4()
{
  return 0;
}

//----- (02041CC8) --------------------------------------------------------
int __fastcall Function_2041cc8(int a1)
{
  uint **v1
  int *v2

  v1 = *(uint ***)(a1 + 128);
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  if ( Function_20509b4(v1) )
    return 0;
  free(*v2);
  *v2 = 0;
  return 1;
}

//----- (02041CF4) --------------------------------------------------------
int __fastcall Function_2041cf4(int a1)
{
  int v1
  int *v2
  int v3
  uchar *v5

  v1 = *(uint *)(a1 + 128);
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  v3 = *v2;
  if ( Function_20509b4((uint **)v1) )
    return 0;
  if ( *(uint *)(v3 + 8) == 1 )
  {
    v5 = Function_202bcfc(0xBu);
    Function_202b758(*(uint *)(v1 + 156), (int)v5, 1u);
  }
  free(*v2);
  *v2 = 0;
  return 1;
}

//----- (02041D3C) --------------------------------------------------------
int __fastcall Function_2041d3c(int a1)
{
  uint **v1

  v1 = (uint **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  if ( !Function_209c238(*v1) )
    return 0;
  *v1 = 0;
  return 1;
}

//----- (02041D60) --------------------------------------------------------
BOOL __fastcall Function_2041d60(int a1)
{
  return Function_20509b4(*(uint ***)(a1 + 128)) == 0;
}

//----- (02041D78) --------------------------------------------------------
int __fastcall ScriptCmd_CallEnd(int a1)
{
  Function_2055868(*(uint *)(*(uint *)(a1 + 128) + 16));
  return 1;
}

//----- (02041D88) --------------------------------------------------------
int __fastcall ScriptCmd_PreWfc(int a1)
{
  Function_2055820(*(uint *)(*(uint *)(a1 + 128) + 16));
  return 1;
}

//----- (02041D98) --------------------------------------------------------
int __fastcall Function_2041d98(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5

  v3 = a2;
  v4 = a3;
  v5 = LoadVariableAreaAdress_e(*(uint *)(a1 + 12));
  if ( v3 )
  {
    if ( !Function_2029d2c(v5, v4) )
      return 0;
  }
  else if ( !Function_2029d10(v5, v4) )
  {
    return 0;
  }
  return 1;
}

//----- (02041DC8) --------------------------------------------------------
uchar *__fastcall Function_2041dc8(uint a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  uchar *result
  uint v9

  v4 = a2;
  v9 = a1;
  v5 = a3;
  v6 = a4;
  v7 = LoadVariableAreaAdress_e(*(uint *)(a2 + 12));
  if ( !Function_2041d98(v4, v5, v6) )
    return 0;
  result = (uchar *)malloc(v9, 12);
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
  *(uint *)result = v7;
  *((uint *)result + 2) = v5;
  *((uint *)result + 1) = v6;
  return result;
}

//----- (02041E18) --------------------------------------------------------
int __fastcall Function_2041e18(int a1)
{
  ((void (__fastcall *)(uint))dword_21EAF50[0])(*(uint *)(a1 + 128));
  return 1;
}

//----- (02041E28) --------------------------------------------------------
int __fastcall ScriptCmd_Wfc_(int a1)
{
  Function_207ddc0(*(uint *)(a1 + 116));
  return 1;
}

//----- (02041E34) --------------------------------------------------------
int __fastcall Function_2041e34(int a1)
{
  int v1
  int *v2
  int v3

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  v3 = ScriptHandler_LoadHWord(v1);
  *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3) = *(uint *)(*v2 + 4);
  free(*v2);
  return 0;
}

//----- (02041E64) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokeColosseumLost(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_203608c();
  return 1;
}

//----- (02041E84) --------------------------------------------------------
int __fastcall ScriptCmd_PokemonPicture(int a1)
{
  int v1
  int **v2
  int v3
  uint v4
  int v5
  uchar v6

  v1 = a1;
  v2 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  Function_200daa4(*(uint **)(*(uint *)(v1 + 128) + 8), 3u, 985, 11, 0, 4);
  *v2 = Function_200ebf0(*(uint *)(*(uint *)(v1 + 128) + 8), 3u, 10, 5, 0xBu, 985, v4, v6, 4u);
  Function_20451b4(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (02041F14) --------------------------------------------------------
int __fastcall ScriptCmd_PokemonPartyPicture(int a1)
{
  int v1
  int **v2
  int v3
  int v4
  uint *v5
  int *v6
  ushort v7

  v1 = a1;
  v2 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v6 = GetAdrOfPkmnInParty(v5, v4);
  Function_200daa4(*(uint **)(*(uint *)(v1 + 128) + 8), 3u, 985, 11, 0, 4);
  *v2 = Function_200ec48(*(uint *)(*(uint *)(v1 + 128) + 8), 3u, 10, 5, 0xBu, 985, (int)v6, 4u);
  v7 = GetPkmnData(v6, 5u, 0);
  Function_20451b4(*(uint *)(v1 + 128), v7);
  return 0;
}

//----- (02041FAC) --------------------------------------------------------
int __fastcall ScriptCmd_HidePicture(int a1)
{
  **(uchar **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u) = 1;
  return 1;
}

//----- (02041FC4) --------------------------------------------------------
int __fastcall ScriptCmd_ActLearning(int a1)
{
  **(uchar **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u) = 2;
  return 1;
}

//----- (02041FDC) --------------------------------------------------------
int __fastcall ScriptCmd_SetSoundLearning(int a1)
{
  int v1

  v1 = a1;
  *(uint *)(a1 + 100) = ScriptHandler_LoadHWord(a1);
  ScriptHandler_AddFunction(v1, (int)Function_2041ff8);
  return 1;
}

//----- (02041FF8) --------------------------------------------------------
BOOL __fastcall Function_2041ff8(int a1)
{
  int v1
  uchar **v2

  v1 = a1;
  v2 = (uchar **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), *(uint *)(v1 + 100) & 0xFFFF);
  return **v2 != 3;
}

//----- (02042028) --------------------------------------------------------
int __fastcall Function_2042028(int a1)
{
  int v1
  int v2
  uint *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v4 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  ((void (__fastcall *)(uint, uint, int))dword_21DB888[0])(*(uint *)(v1 + 116), *v3, v4);
  return 1;
}

//----- (0204205C) --------------------------------------------------------
int __fastcall Function_204205c(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  if ( *v2
    && (!Function_2071cb4(*(uint *)(v1 + 128), 2)
     || !((int (__fastcall *)(uint, uint))dword_224C5DC[0])(*(uint *)(v1 + 128), *v2)) )
  {
    ((void (__fastcall *)(uint, uint))dword_21DBED4[0])(*(uint *)(v1 + 128), *v2);
  }
  return 0;
}

//----- (020420A0) --------------------------------------------------------
int __fastcall ScriptCmd_Interview(int a1)
{
  Function_209acf4(*(uint *)(a1 + 116));
  return 1;
}

//----- (020420AC) --------------------------------------------------------
int __fastcall Function_20420ac(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  Function_209b344(*(uint *)(v1 + 116), v3);
  return 1;
}

//----- (020420CC) --------------------------------------------------------
int __fastcall ScriptCmd_DressPokemon(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  ushort v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_203dac0(*(uint *)(*(uint *)(v1 + 128) + 16), v5, *(uint *)(*(uint *)(v1 + 128) + 12), v3, v7);
  return 1;
}

//----- (02042124) --------------------------------------------------------
int __fastcall ScriptCmd_DisplayDressedPokemon(int a1)
{
  int v1
  int *v2
  int v3
  int v4
  ushort *v5
  uchar *v6
  int result

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = Function_2041dc8(0xBu, *(uint *)(v1 + 128), 0, v3);
  *v2 = (int)v6;
  if ( v6 )
  {
    *v5 = 0;
    Function_203db24(*(uint *)(v1 + 128), *v2);
    ScriptHandler_AddFunction(v1, (int)Function_2041cc8);
    result = 1;
  }
  else
  {
    result = 1;
    *v5 = 1;
  }
  return result;
}

//----- (0204218C) --------------------------------------------------------
int __fastcall ScriptCmd_DisplayContestPokemon(int a1)
{
  int v1
  int *v2
  int v3
  int v4
  ushort *v5
  uchar *v6
  int result

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = Function_2041dc8(0xBu, *(uint *)(v1 + 128), 1, v3);
  *v2 = (int)v6;
  if ( v6 )
  {
    *v5 = 0;
    Function_203db24(*(uint *)(v1 + 128), *v2);
    ScriptHandler_AddFunction(v1, (int)Function_2041cc8);
    result = 1;
  }
  else
  {
    result = 1;
    *v5 = 1;
  }
  return result;
}

//----- (020421F4) --------------------------------------------------------
int __fastcall ScriptCmd_CheckDress(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int result

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  if ( Function_2041d98(*(uint *)(v1 + 128), 0, v2) == 1 )
  {
    result = 1;
    *v4 = 1;
  }
  else
  {
    *v4 = 0;
    result = 1;
  }
  return result;
}

//----- (02042230) --------------------------------------------------------
int __fastcall ScriptCmd_CheckContestWin(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int result

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  if ( Function_2041d98(*(uint *)(v1 + 128), 1, v2) == 1 )
  {
    result = 1;
    *v4 = 1;
  }
  else
  {
    *v4 = 0;
    result = 1;
  }
  return result;
}

//----- (0204226C) --------------------------------------------------------
int __fastcall ScriptCmd_StorePhotoName(int a1)
{
  int v1
  int v2
  short v3
  int v4
  int *v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_e(*(uint *)(*(uint *)(v1 + 128) + 12));
  v5 = (int *)Function_2029ca8(v4, 0);
  Function_202a0a0(v5, v3);
  return 1;
}

//----- (0204229C) --------------------------------------------------------
int __fastcall ScriptCmd_Geonet(int a1)
{
  int v1

  v1 = a1;
  Function_203e224(*(uint *)(a1 + 128));
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (020422B8) --------------------------------------------------------
int __fastcall Function_20422b8(int a1)
{
  int v1

  v1 = a1;
  Function_203e704(*(uint *)(a1 + 128));
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (020422D4) --------------------------------------------------------
int __fastcall ScriptCmd_OpenBallCapsule(int a1)
{
  Function_20980dc(*(uint *)(a1 + 116), *(uint *)(*(uint *)(a1 + 128) + 12));
  return 1;
}

//----- (020422E8) --------------------------------------------------------
int __fastcall ScriptCmd_OpenSinnohMaps(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  *v2 = malloc(0xBu, 320);
  Function_206b70c(*(uint *)(v1 + 128), *v2, 2);
  Function_203d884(*(uint *)(v1 + 128), *v2);
  ScriptHandler_AddFunction(v1, (int)Function_2041cc8);
  return 1;
}

//----- (02042330) --------------------------------------------------------
int __fastcall ScriptCmd_BerryPoffin(int a1)
{
  int v1
  int *v2
  uchar v3

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  v3 = ScriptHandler_LoadHWord(v1);
  *v2 = Function_2099674(*(uint *)(v1 + 128), v3, 0xBu);
  ScriptHandler_AddFunction(v1, (int)Function_2041cc8);
  return 1;
}

//----- (02042368) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarBTowerChs(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int result
  int v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdressItemList(*(uint *)(*(uint *)(v1 + 128) + 12));
  if ( Function_207d69c(v4, 4u) )
  {
    v6 = LoadVariableAreaAdress_10(*(uint *)(*(uint *)(v1 + 128) + 12));
    if ( (uint)Function_202ac98(v6) < 0x64 )
    {
      result = 0;
      *v3 = 0;
    }
    else
    {
      *v3 = 2;
      result = 0;
    }
  }
  else
  {
    *v3 = 1;
    result = 0;
  }
  return result;
}

//----- (020423BC) --------------------------------------------------------
int __fastcall ScriptCmd_BattleRoomResult(int a1)
{
  int v1
  int v2
  short v3
  int v4
  short v5
  int *v6
  ushort *v7
  ushort *v8

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  v7 = (ushort *)malloc(0xBu, 8);
  *v6 = (int)v7;
  v8 = v7;
  MI_CpuFill8(v7, 0, 8u);
  v8[2] = v3;
  v8[3] = v5;
  *(uint *)v8 = *(uint *)(*(uint *)(v1 + 128) + 12);
  Function_203d9d8(*(uint *)(v1 + 128), *v6);
  ScriptHandler_AddFunction(v1, (int)Function_2041cc8);
  return 1;
}

//----- (02042434) --------------------------------------------------------
int __fastcall ScriptCmd_OpenPCFunction(int a1)
{
  int v1
  int *v2
  uint *v3
  uchar *v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  v3 = (uint *)malloc(0xBu, 12);
  *v3 = *(uint *)(*(uint *)(v1 + 128) + 12);
  v4 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v4 + 1;
  v3[1] = *v4;
  *v2 = (int)v3;
  Function_203d754(*(uint *)(v1 + 128), *v2);
  ScriptHandler_AddFunction(v1, (int)Function_2041cf4);
  return 1;
}

//----- (02042480) --------------------------------------------------------
int __fastcall ScriptCmd_DrawUnion(int a1)
{
  int v1

  v1 = a1;
  Function_203ddfc(*(int **)(a1 + 128));
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (0204249C) --------------------------------------------------------
int __fastcall ScriptCmd_TrainerCaseUnion(int a1)
{
  Function_2072204(*(uint *)(a1 + 128));
  return 1;
}

//----- (020424AC) --------------------------------------------------------
int __fastcall ScriptCmd_TradeUnion(int a1)
{
  Function_203dddc(*(uint *)(*(uint *)(a1 + 128) + 16));
  return 1;
}

//----- (020424BC) --------------------------------------------------------
int __fastcall ScriptCmd_RecordMixingUnion(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  *v2 = Function_203de34(*(int **)(v1 + 128));
  ScriptHandler_AddFunction(v1, (int)Function_2041cc8);
  return 1;
}

//----- (020424E8) --------------------------------------------------------
int __fastcall ScriptCmd_EndGame(int a1)
{
  Function_2052e58(*(uint *)(*(uint *)(a1 + 128) + 16));
  return 1;
}

//----- (020424F8) --------------------------------------------------------
int __fastcall ScriptCmd_HallFameAnm(int a1)
{
  int v1
  uchar **v2
  int v3
  int v4
  int v5

  v1 = a1;
  v2 = (uchar **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  *v2 = Function_203e244(*(uint *)(v1 + 128), v3, v4, v5);
  ScriptHandler_AddFunction(v1, (int)Function_2041cc8);
  return 1;
}

//----- (02042524) --------------------------------------------------------
int __fastcall Function_2042524(int a1, int a2, int a3, int a4)
{
  int v4
  uchar *v5
  int v6
  ushort *v7
  int v9

  v9 = a4;
  v4 = a1;
  v5 = Function_202444c(*(uint *)(*(uint *)(a1 + 128) + 12), 4u, &v9);
  v6 = ScriptHandler_LoadHWord(v4);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v6);
  *v7 = 0;
  if ( v9 == 2 )
    *v7 = 1;
  free((int)v5);
  return 0;
}

//----- (02042560) --------------------------------------------------------
int __fastcall ScriptCmd_StoreWfcStatus(int a1)
{
  int v1
  int v2
  int v3
  int v4
  ushort *v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  if ( Function_2039074(*(uint *)(*(uint *)(v1 + 128) + 12)) )
  {
    *v5 = 1;
    Function_203e0fc(*(uint *)(v1 + 128), v3);
    ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  }
  else
  {
    *v5 = 0;
  }
  return 1;
}

//----- (020425C0) --------------------------------------------------------
int __fastcall ScriptCmd_StartWfc(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  Function_207dde0(*(uint *)(v1 + 116), v3);
  return 1;
}

//----- (020425E0) --------------------------------------------------------
int __fastcall ScriptCmd_ChooseStarter(int a1)
{
  int v1
  int *v2
  int v3

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = malloc(0xBu, 8);
  *v2 = v3;
  *(uint *)(v3 + 4) = LoadPlayerDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  OverWorldData_InitChooseScreen(*(uint *)(v1 + 128), *v2);
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (02042628) --------------------------------------------------------
int __fastcall ScriptCmd_BattleStarter(int a1)
{
  int v1
  int *v2
  int v3

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_206b044(v3, *(uint *)*v2);
  free(*v2);
  return 0;
}

//----- (02042658) --------------------------------------------------------
int __fastcall ScriptCmd_OpenBerryPouch(int a1)
{
  int v1
  uchar *v2
  int v3
  int **v4

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = *v2 != 0;
  v4 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  if ( *v4 )
    ErrorHandler();
  *v4 = Function_203d264(*(uint *)(v1 + 128), v3);
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (020426A8) --------------------------------------------------------
int __fastcall Function_20426a8(int a1)
{
  int v1
  int v2
  ushort *v3
  int *v4
  int result

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  if ( !*v4 )
    ErrorHandler();
  *v3 = Function_203d2c4(*v4);
  free(*v4);
  result = 0;
  *v4 = 0;
  return result;
}

//----- (020426E8) --------------------------------------------------------
int __fastcall ScriptCmd_ChoosePlayerName(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  Function_203dfe8(*(uint *)(v1 + 116), 0, 0, 7, 0, 0, v3);
  return 1;
}

//----- (02042718) --------------------------------------------------------
int __fastcall ScriptCmd_ChoosePokemonName(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint *v5
  int *v6
  int v7
  int v8
  int v9
  char v11

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v6 = GetAdrOfPkmnInParty(v5, v4);
  GetPkmnData(v6, 0x75u, (ushort *)&v11);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = GetPkmnData(v6, 5u, 0);
  Function_203dfe8(*(uint *)(v1 + 116), 1, v9, 10, v4, (ushort *)&v11, v8);
  return 1;
}

//----- (02042784) --------------------------------------------------------
int __fastcall ScriptCmd_ThankNameInsert(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  Function_203dfe8(*(uint *)(v1 + 116), 6, 0, 10, 0, 0, v3);
  return 1;
}

//----- (020427B4) --------------------------------------------------------
int __fastcall ScriptCmd_SpinTradeUnion(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  *v2 = Function_209c1ec(*(uint *)(v1 + 128));
  ScriptHandler_AddFunction(v1, (int)Function_2041d3c);
  return 1;
}

//----- (020427E0) --------------------------------------------------------
int __fastcall ScriptCmd_CheckVersionGame(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = Function_205be38();
  *v3 = v4 != Function_2025fd4();
  return 0;
}

//----- (02042810) --------------------------------------------------------
int __fastcall ScriptCmd_PhraseBox1W(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  short *v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (short *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  *v6 = -1;
  Function_203d80c(*(uint *)(*(uint *)(v1 + 128) + 16), v4, v6, 0);
  return 1;
}

//----- (02042868) --------------------------------------------------------
int __fastcall ScriptCmd_PhraseBox2W(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  short *v6
  int v7
  short *v8

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (short *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (short *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  *v6 = -1;
  *v8 = -1;
  Function_203d80c(*(uint *)(*(uint *)(v1 + 128) + 16), v4, v6, v8);
  return 1;
}

//----- (020428D4) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarPhraseBox1W(int a1)
{
  int v1
  int **v2
  int v3
  uint v4
  int v5
  int v6
  int v7

  v1 = a1;
  v2 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  Function_200be48(*v2, v4, v6, v7);
  return 0;
}

//----- (02042918) --------------------------------------------------------
int __fastcall ScriptCmd_FadeScreen(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_LoadHWord(v1);
  Function_200f174(0, v4, v4, v5, v2, v3, 4);
  Function_200f32c(0);
  Function_200f32c(1);
  return 0;
}

//----- (02042960) --------------------------------------------------------
int __fastcall ScriptCmd_ResetScreen(int a1)
{
  ScriptHandler_AddFunction(a1, (int)Function_2042970);
  return 1;
}

//----- (02042970) --------------------------------------------------------
BOOL Function_2042970()
{
  return Function_200f2ac() == 1;
}

//----- (02042984) --------------------------------------------------------
int __fastcall ScriptCmd_Warp(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = ScriptHandler_LoadHWord(v1);
  v9 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v8);
  WarpPlayer(*(uint *)(v1 + 116), v3, -1, v5, v7, v9);
  return 1;
}

//----- (020429F4) --------------------------------------------------------
int __fastcall ScriptCmd_BattlePokeColosseum(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_LoadHWord(v1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  Function_2054800(*(uint *)(*(uint *)(v1 + 128) + 16), v2, -1, v4, v6, v7);
  return 1;
}

//----- (02042A50) --------------------------------------------------------
int __fastcall ScriptCmd_WarpLastElevator(int a1)
{
  Function_2054864(*(uint *)(*(uint *)(a1 + 128) + 16));
  return 1;
}

//----- (02042A60) --------------------------------------------------------
int __fastcall Function_2042a60(int a1)
{
  int v1
  int v2
  uint *v3
  int v4

  v1 = a1;
  v2 = LoadVariableAreaAdress_6(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = (uint *)AddVariableAreaAdress_6_MapData2(v2);
  v4 = ScriptHandler_LoadHWord(v1);
  *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4) = *v3;
  return 0;
}

//----- (02042A8C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckEffectHm(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2) = **(uint **)(*(uint *)(v1 + 128) + 28);
  return 0;
}

//----- (02042AB0) --------------------------------------------------------
int __fastcall ScriptCmd_RockClimbAnimation(int a1)
{
  int v1
  int v2
  uint v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = GetSpriteFaceDirection(*(uint *)(*(uint *)(v1 + 128) + 60));
  ((void (__fastcall *)(uint, int, uint))dword_21E0734[0])(*(uint *)(v1 + 116), v4, v3);
  return 1;
}

//----- (02042AE0) --------------------------------------------------------
int __fastcall ScriptCmd_SurfAnimation(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint v5

  v1 = a1;
  Function_2069434(*(uint *)(*(uint *)(a1 + 128) + 148));
  if ( Function_205f16c(*(uint **)(*(uint *)(v1 + 128) + 60)) == 1 )
    v2 = GetSpriteFaceDirection(*(uint *)(*(uint *)(v1 + 128) + 60));
  else
    v2 = Function_205ea94(*(uint *)(*(uint *)(v1 + 128) + 60));
  v3 = v2;
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  ((void (__fastcall *)(uint, int, uint))dword_21E00EC[0])(*(uint *)(v1 + 116), v3, v5);
  return 1;
}

//----- (02042B3C) --------------------------------------------------------
int __fastcall ScriptCmd_WaterfallAnimation(int a1)
{
  int v1
  int v2
  uint v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = GetSpriteFaceDirection(*(uint *)(*(uint *)(v1 + 128) + 60));
  ((void (__fastcall *)(uint, int, uint))dword_21E0998[0])(*(uint *)(v1 + 116), v4, v3);
  return 1;
}

//----- (02042B6C) --------------------------------------------------------
int __fastcall ScriptCmd_FlyAnimation(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  Function_2053ab4(*(uint *)(v1 + 128), v2, -1, v4, v6, 1);
  return 1;
}

//----- (02042BB8) --------------------------------------------------------
int __fastcall ScriptCmd_FlashAnimation(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = LoadVariableAreaAdress_6(*(uint *)(*(uint *)(a1 + 128) + 12));
  SetVariableAreaAdress_6_66(v2, 0);
  v3 = GetVariableAreaAdress_6_66(v2);
  ((void (__fastcall *)(uint, int))dword_21D5F7C[0])(*(uint *)(*(uint *)(*(uint *)(v1 + 128) + 4) + 12), v3);
  return 1;
}

//----- (02042BE8) --------------------------------------------------------
int __fastcall ScriptCmd_DefogAnimation(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = LoadVariableAreaAdress_6(*(uint *)(*(uint *)(a1 + 128) + 12));
  SetVariableAreaAdress_6_66(v2, 0);
  v3 = GetVariableAreaAdress_6_66(v2);
  ((void (__fastcall *)(uint, int))dword_21D5F7C[0])(*(uint *)(*(uint *)(*(uint *)(v1 + 128) + 4) + 12), v3);
  return 1;
}

//----- (02042C18) --------------------------------------------------------
int __fastcall ScriptCmd_PrepareHMEffect(int a1)
{
  int v1
  uint *v2
  int v3
  int v4
  uint *v5
  int *v6
  int v7

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v6 = GetAdrOfPkmnInParty(v5, v4);
  v7 = Function_205eb98(*(uint *)(*(uint *)(v1 + 128) + 60));
  *v2 = ((int (__fastcall *)(uint, uint, int *, int))dword_2243F88[0])(*(uint *)(v1 + 128), 0, v6, v7);
  ScriptHandler_AddFunction(v1, (int)Function_2042c80);
  return 1;
}

//----- (02042C80) --------------------------------------------------------
int __fastcall Function_2042c80(int a1)
{
  uint *v1

  v1 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  if ( ((int (__fastcall *)(uint))dword_2243FBC[0])(*v1) != 1 )
    return 0;
  ((void (__fastcall *)(uint))dword_2243FC8[0])(*v1);
  return 1;
}

//----- (02042CA8) --------------------------------------------------------
int __fastcall ScriptCmd_Tuxedo(int a1)
{
  ((void (__fastcall *)(uint))dword_21E0DD4[0])(*(uint *)(a1 + 116));
  return 1;
}

//----- (02042CB4) --------------------------------------------------------
int __fastcall ScriptCmd_CheckBike(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_205eb74(*(uint *)(*(uint *)(v1 + 128) + 60)) == 1;
  return 0;
}

//----- (02042CE4) --------------------------------------------------------
int __fastcall ScriptCmd_RideBike(int a1)
{
  int v1
  uchar *v2
  int v3

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  if ( *v2 == 1 )
  {
    Function_20553f0(*(uint *)(a1 + 128), 1152);
    Function_2055554(*(uint *)(v1 + 128), 0x480u, 1u);
    ((void (__fastcall *)(uint, int))dword_21DFB54[0])(*(uint *)(*(uint *)(v1 + 128) + 60), 2);
    ((void (__fastcall *)(uint))dword_21DFB5C[0])(*(uint *)(*(uint *)(v1 + 128) + 60));
  }
  else
  {
    ((void (__fastcall *)(uint, int))dword_21DFB54[0])(*(uint *)(*(uint *)(a1 + 128) + 60), 1);
    ((void (__fastcall *)(uint))dword_21DFB5C[0])(*(uint *)(*(uint *)(v1 + 128) + 60));
    Function_20553f0(*(uint *)(v1 + 128), 0);
    v3 = Function_2055428(*(uint *)(v1 + 128), **(uint **)(*(uint *)(v1 + 128) + 28));
    Function_2055554(*(uint *)(v1 + 128), v3, 1u);
  }
  return 0;
}

//----- (02042D70) --------------------------------------------------------
int __fastcall ScriptCmd_BikeRide(int a1)
{
  Function_20553f0(*(uint *)(a1 + 128), 1189);
  return 0;
}

//----- (02042D84) --------------------------------------------------------
int __fastcall ScriptCmd_RideBike2(int a1)
{
  uchar *v1

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  Function_205efc4(*(uint **)(*(uint *)(a1 + 128) + 60), *v1);
  return 0;
}

//----- (02042D9C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckGivePokeHeroAnimation(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_205eb74(*(uint *)(*(uint *)(v1 + 128) + 60));
  return 0;
}

//----- (02042DC4) --------------------------------------------------------
int __fastcall ScriptCmd_GivePokeHeroAnimation(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  Function_205eb84(*(uint *)(*(uint *)(v1 + 128) + 60), v2);
  return 1;
}

//----- (02042DDC) --------------------------------------------------------
int __fastcall ScriptCmd_StopGivePokeHeroAnimation(int a1)
{
  ((void (__fastcall *)(uint))dword_21DFB5C[0])(*(uint *)(*(uint *)(a1 + 128) + 60));
  return 0;
}

//----- (02042DEC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckSwarmPoke(int a1)
{
  int v1
  uint *v2
  int v3
  int v4
  int v5
  int v6
  int v7

  v1 = a1;
  v2 = (uint *)LoadVariableAreaAdress_19(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = Function_202d814(v2, 2);
  ((void (__fastcall *)(int, int, int))dword_224322C[0])(v7, v4, v6);
  return 0;
}

//----- (02042E38) --------------------------------------------------------
int __fastcall ScriptCmd_StoreStarter(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_206b054(v4);
  return 0;
}

//----- (02042E64) --------------------------------------------------------
int __fastcall ScriptCmd_EndTrainerBattle(int a1)
{
  int v1
  int v2
  int *v3
  uchar *v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  ushort *v11

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 8u);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0x10u);
  ScriptHandler_GetSomeScriptAddresses(v2, 6u);
  v4 = (uchar *)ScriptHandler_GetSomeScriptAddresses(v2, 3u);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  LoadNPCTrainerTbl_2(v6, v8, *v3, 11);
  v9 = ScriptHandler_GetSomeScriptAddresses(v2, 1u);
  Function_201ada4_ClearTextBox(v9, 15);
  v10 = ScriptHandler_GetSomeScriptAddresses(v2, 1u);
  v11 = (ushort *)LoadPlayerDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v4 = Function_205d994(v10, *v3, v11, 1);
  ScriptHandler_AddFunction(v1, (int)MessageLoop);
  return 1;
}

//----- (02042F04) --------------------------------------------------------
int __fastcall ScriptCmd_ChooseFriend(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  int v5
  uint v6
  int v7
  uint v8
  int v9

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v9 = ScriptHandler_LoadHWord(v1);
  ((void (__fastcall *)(int, uint, uint, uint))dword_224B414[0])(v2, v4, v6, v8);
  *(uint *)(v1 + 100) = v9;
  ScriptHandler_AddFunction(v1, (int)Function_2042f74);
  return 1;
}

//----- (02042F74) --------------------------------------------------------
int __fastcall Function_2042f74(int a1)
{
  ushort *v1
  int v2

  v1 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(a1 + 128), *(uint *)(a1 + 100) & 0xFFFF);
  v2 = ((int (*)(void))dword_224B460[0])();
  if ( !v2 )
    return 0;
  *v1 = v2;
  return 1;
}

//----- (02042F9C) --------------------------------------------------------
int __fastcall ScriptCmd_WirelessBattleWait(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  int v5
  uint v6
  int v7
  uint v8
  int v9

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v9 = ScriptHandler_LoadHWord(v1);
  ((void (__fastcall *)(int, uint, uint, uint))dword_224B47C[0])(v2, v4, v6, v8);
  *(uint *)(v1 + 100) = v9;
  ScriptHandler_AddFunction(v1, (int)Function_204300c);
  return 1;
}

//----- (0204300C) --------------------------------------------------------
int __fastcall Function_204300c(int a1)
{
  ushort *v1
  int v2

  v1 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(a1 + 128), *(uint *)(a1 + 100) & 0xFFFF);
  v2 = ((int (*)(void))dword_224B4C8[0])();
  if ( !v2 )
    return 0;
  *v1 = v2;
  return 1;
}

//----- (02043034) --------------------------------------------------------
int __fastcall Function_2043034(int a1)
{
  ScriptHandler_LoadHWord(a1);
  return 1;
}

//----- (02043040) --------------------------------------------------------
int __fastcall Function_2043040(int a1)
{
  ScriptHandler_LoadHWord(a1);
  return 1;
}

//----- (0204304C) --------------------------------------------------------
int __fastcall Function_204304c(int a1)
{
  int v1
  int *v2
  int *v3
  int v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  v3 = v2;
  v4 = *v2;
  Function_205167c(*(uint *)(*(uint *)(v1 + 128) + 16), *v2 + 44, 5);
  free(v4);
  *v3 = 0;
  return 1;
}

//----- (0204307C) --------------------------------------------------------
int ScriptCmd_PokemonContest()
{
  return 1;
}

//----- (02043080) --------------------------------------------------------
int __fastcall ScriptCmd_WarpMapElevator(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  uint *v10
  uint v12
  uint v13
  uint v14
  uint v15
  uint v16
  int v17

  v17 = a4;
  v4 = a1;
  v5 = ScriptHandler_LoadHWord(a1);
  v12 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v5);
  v6 = ScriptHandler_LoadHWord(v4);
  v13 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v6);
  v7 = ScriptHandler_LoadHWord(v4);
  v14 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v7);
  v8 = ScriptHandler_LoadHWord(v4);
  v15 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v8);
  v9 = ScriptHandler_LoadHWord(v4);
  v16 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v9);
  v10 = (uint *)LoadVariableAreaAdress_6(*(uint *)(*(uint *)(v4 + 128) + 12));
  CopyToVariableAreaAdress_6_3c(v10, (int *)&v12);
  return 0;
}

//----- (02043100) --------------------------------------------------------
int __fastcall ScriptCmd_CheckFloor(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  uint *v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_6(*(uint *)(*(uint *)(v1 + 128) + 12));
  v5 = (uint *)AddVariableAreaAdress_6_MapData3(v4);
  *v3 = ((int (__fastcall *)(uint))dword_21DCCC8[0])(*v5);
  return 0;
}

//----- (02043130) --------------------------------------------------------
int __fastcall ScriptCmd_StartLift(int a1)
{
  int v1
  int v2
  uint *v3
  uchar *v4
  int v5
  int v6
  int v7
  int v8
  int v9
  uint v10

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0xFu);
  v4 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v4 + 1;
  v5 = *v4;
  *(uint *)(v1 + 8) = v4 + 2;
  v6 = v4[1];
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = ScriptHandler_LoadHWord(v1);
  v10 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v9);
  ((void (__fastcall *)(int, int, int, int, uint, uint))dword_21DCB24[0])(v2, v5, v6, v8, *v3, v10);
  return 0;
}

//----- (02043190) --------------------------------------------------------
int __fastcall ScriptCmd_StoreSinPokemonSeen(int a1)
{
  int v1
  uint *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2026eac(v2);
  return 0;
}

//----- (020431C0) --------------------------------------------------------
int __fastcall Function_20431c0(int a1)
{
  int v1
  uint *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2026e64(v2);
  return 0;
}

//----- (020431F0) --------------------------------------------------------
int __fastcall ScriptCmd_StoreTotPokemonSeen(int a1)
{
  int v1
  uint *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = GetNrOfPkmnSeen(v2);
  return 0;
}

//----- (02043220) --------------------------------------------------------
int __fastcall ScriptCmd_StoreNatPokemonSeen(int a1)
{
  int v1
  uint *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2026dd0(v2);
  return 0;
}

//----- (02043250) --------------------------------------------------------
int Function_2043250()
{
  return 0;
}

//----- (02043254) --------------------------------------------------------
int __fastcall ScriptCmd_SetVarTextPokedex(int a1)
{
  int v1
  uint *v2
  int v3
  uchar *v4
  int v5
  int v6
  ushort *v7
  int v8
  int v9
  ushort v10
  short v11
  int v12
  ushort v13
  int v15

  v1 = a1;
  v2 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = LoadTrainerDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v4 = *(uchar **)(v1 + 8);
  v15 = v3;
  *(uint *)(v1 + 8) = v4 + 1;
  v5 = *v4;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  if ( v5 )
  {
    v12 = Function_2026f20(v2);
    v13 = GetGender(v15);
    v11 = Function_205e0e4(v12, v13);
  }
  else
  {
    v8 = Function_2026f58(v2);
    v9 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
    v10 = Function_206af3c(v9, 2, 0xAu);
    v11 = Function_205e078(v8, v10);
  }
  *v7 = v11;
  return 0;
}

//----- (020432DC) --------------------------------------------------------
int __fastcall ScriptCmd_WildBattle(int a1)
{
  int v1
  uint *v2
  int v3
  int v4
  int v5
  uchar v6

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x17u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  Function_2051270(*(uint *)(v1 + 116), v4, v6, v2, 0);
  return 1;
}

//----- (02043330) --------------------------------------------------------
int __fastcall ScriptCmd_WildBattle2(int a1)
{
  int v1
  uint *v2
  int v3
  int v4
  int v5
  uchar v6

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x17u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  Function_2051270(*(uint *)(v1 + 116), v4, v6, v2, 1);
  return 1;
}

//----- (02043384) --------------------------------------------------------
int __fastcall Function_2043384(int a1)
{
  int v1
  uint *v2
  int v3
  int v4
  int v5
  uchar v6

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x17u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  Function_2051abc(*(uint *)(v1 + 116), v4, v6, v2, 1);
  return 1;
}

//----- (020433D8) --------------------------------------------------------
int __fastcall Function_20433d8(int a1)
{
  int v1
  uint *v2
  int v3
  int v4
  int v5
  uchar v6

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x17u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  Function_20512e4(*(uint *)(v1 + 116), v4, v6, v2, 1);
  return 1;
}

//----- (0204342C) --------------------------------------------------------
int __fastcall ScriptCmd_StarterBattle(int a1)
{
  int v1
  uint *v2
  int v3
  uint v4

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x17u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  Function_2051480(*(uint *)(v1 + 116), v4, 0xBu, v2);
  return 1;
}

//----- (02043460) --------------------------------------------------------
int __fastcall ScriptCmd_ExplanationBattle(int a1)
{
  Function_2051590(*(uint *)(a1 + 116));
  return 1;
}

//----- (0204346C) --------------------------------------------------------
int __fastcall ScriptCmd_HoneyTreeBattle(int a1)
{
  ((void (__fastcall *)(uint))dword_21EFBDC[0])(*(uint *)(a1 + 128));
  return 0;
}

//----- (0204347C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckIfHoneySlathered(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = ((int (__fastcall *)(int))dword_21EFB94[0])(v2);
  return 0;
}

//----- (020434A4) --------------------------------------------------------
int __fastcall ScriptCmd_RandomBattle(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x17u);
  Function_205120c(*(uint *)(v1 + 116), v2);
  return 1;
}

//----- (020434C0) --------------------------------------------------------
int __fastcall ScriptCmd_StopRandomBattle(int a1)
{
  ((void (__fastcall *)(uint))dword_21EFC90[0])(*(uint *)(a1 + 128));
  return 0;
}

//----- (020434D0) --------------------------------------------------------
int __fastcall ScriptCmd_WriteAutograph(int a1, int a2, int a3, int a4)
{
  int v4

  v4 = a1;
  Function_203e0d0(*(uint *)(a1 + 128), a2, a3, a4);
  ScriptHandler_AddFunction(v4, (int)Function_2041d60);
  return 1;
}

//----- (020434EC) --------------------------------------------------------
int __fastcall ScriptCmd_StoreSaveData(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  if ( Function_20247e0(v2) )
  {
    *v4 = 0;
  }
  else if ( Function_20247c0(v2) )
  {
    if ( Function_2024800(v2) )
      *v4 = 2;
    else
      *v4 = 3;
  }
  else
  {
    *v4 = 1;
  }
  return 0;
}

//----- (02043540) --------------------------------------------------------
int __fastcall ScriptCmd_CheckSaveData(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = ((int (__fastcall *)(int))dword_21E200C[0])(v2);
  return 0;
}

//----- (02043568) --------------------------------------------------------
int __fastcall ScriptCmd_2d6(int a1, int a2, int a3, int a4)
{
  Function_2025340(*(uint *)(*(uint *)(a1 + 128) + 12), a2, a3, a4);
  return 0;
}

//----- (02043578) --------------------------------------------------------
int __fastcall ScriptCmd_2d7(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_20247c8(*(uint *)(*(uint *)(v1 + 128) + 12));
  return 0;
}

//----- (020435A0) --------------------------------------------------------
int __fastcall ScriptCmd_GivePoketch(int a1)
{
  ((void (__fastcall *)(uint))dword_21DDBC8[0])(*(uint *)(a1 + 116));
  return 1;
}

//----- (020435AC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPoketchApp(int a1)
{
  int v1
  uchar *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uchar *)LoadVariableAreaAdress_5(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_20567e0(v2);
  return 0;
}

//----- (020435DC) --------------------------------------------------------
int __fastcall ScriptCmd_ActivatePoketchApp(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uchar *v5

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = (uchar *)LoadVariableAreaAdress_5(*(uint *)(v2 + 12));
  Function_20567f0(v5, v4);
  return 0;
}

//----- (02043608) --------------------------------------------------------
int __fastcall ScriptCmd_StorePoketchApp(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  ushort *v6
  int v7

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = LoadVariableAreaAdress_5(*(uint *)(v2 + 12));
  *v6 = Function_20567e8(v7, v4);
  return 0;
}

//----- (02043648) --------------------------------------------------------
int __fastcall ScriptCmd_FriendBT(int a1)
{
  int v1
  int v2
  uint v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  *(uint *)(v1 + 100) = v3;
  Function_20364f0(v3);
  ScriptHandler_AddFunction(v1, (int)Function_2043678);
  return 1;
}

//----- (02043678) --------------------------------------------------------
BOOL __fastcall Function_2043678(int a1)
{
  int v1
  BOOL result

  v1 = a1;
  if ( Function_2035e18() >= 2 )
    result = Function_2036540(*(uint *)(v1 + 100) & 0xFF);
  else
    result = 1;
  return result;
}

//----- (02043694) --------------------------------------------------------
int ScriptCmd_FriendBT2()
{
  Function_20365f4();
  return 0;
}

//----- (020436A0) --------------------------------------------------------
int __fastcall Function_20436a0(int a1)
{
  int v1
  int *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_205bc50(*v2);
  return 0;
}

//----- (020436D0) --------------------------------------------------------
int __fastcall Function_20436d0(int a1)
{
  int v1
  int v2
  ushort *v3
  int **v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  *v3 = Function_205bf44(*(uint *)(*(uint *)(v1 + 128) + 124), *v4);
  return 0;
}

//----- (02043708) --------------------------------------------------------
int __fastcall ScriptCmd_OpenUnionFunction2(int a1)
{
  int v1
  uint v2

  v1 = ScriptHandler_LoadHWord(a1);
  v2 = v1;
  if ( v1 != 5 && v1 != 7 && v1 != 9 && v1 != 6 && v1 != 12 && v1 != 10 )
  {
    if ( v1 == 11 )
      Function_2036bd8();
  }
  else
  {
    Function_2036bc8();
  }
  if ( !Function_203608c() )
    Function_205bea8(v2);
  return 0;
}

//----- (02043748) --------------------------------------------------------
int __fastcall ScriptCmd_SetUnionFunctionId(int a1)
{
  int v1
  int *v2
  int **v3
  int v4
  int v5
  int v6
  uint *v7
  int v8
  int v10

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v1 + 128));
  v10 = LoadTrainerDataAdress(v5);
  v6 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v1 + 128));
  v7 = (uint *)Function_2014ec4(v6);
  if ( v4 )
    v8 = 0;
  else
    v8 = GetSpriteID(*v2) & 0xFFFF;
  Function_205c040(*v3, v4, v8, v10, v7);
  return 0;
}

//----- (020437B4) --------------------------------------------------------
int __fastcall ScriptCmd_CloseUnionFunction(int a1)
{
  Function_2099514(*(uint *)(a1 + 128));
  return 0;
}

//----- (020437C4) --------------------------------------------------------
int __fastcall ScriptCmd_CloseUnionFunction2(int a1)
{
  int v1

  v1 = a1;
  Function_205c2b0(*(uint *)(*(uint *)(a1 + 128) + 128));
  Function_2036ac4();
  ScriptHandler_AddFunction(v1, (int)Function_20437e8);
  return 1;
}

//----- (020437E8) --------------------------------------------------------
BOOL Function_20437e8()
{
  return Function_2035e18() < 2;
}

//----- (020437FC) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarUnionMessage(int a1)
{
  int v1
  int *v2
  int v3
  int v4
  ushort *v5
  int *v6
  int v7

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v7 = GetSpriteID(*v2);
  *v5 = Function_205bcf4(*(uint *)(*(uint *)(v1 + 128) + 124), v7, v3, *v6);
  return 0;
}

//----- (02043854) --------------------------------------------------------
int __fastcall ScriptCmd_CheckBattleUnion(int a1)
{
  int v1
  int v2
  ushort *v3
  int *v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_205ba7c(*(uint *)(*(uint *)(v1 + 128) + 124));
  if ( *v3 )
  {
    v4 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
    free(*v4);
  }
  return 0;
}

//----- (02043894) --------------------------------------------------------
int __fastcall ScriptCmd_StoreYourDecisionUnion(int a1)
{
  int v1
  int v2
  int *v3
  int v4
  ushort *v5
  int v6

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = GetSpriteID(*v3);
  *v5 = Function_205b780(*(uint **)(v2 + 124), v6);
  return 0;
}

//----- (020438CC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckOtherDecisionUnion2(int a1)
{
  int v1
  int v2
  int *v3
  int v4
  int v5
  int v6
  ushort *v7
  int v8

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = GetSpriteID(*v3);
  *v7 = Function_205b804(*(uint *)(v2 + 124), v8, v5);
  return 0;
}

//----- (0204391C) --------------------------------------------------------
int __fastcall ScriptCmd_StoreOtherDecisionUnion(int a1)
{
  int v1

  v1 = a1;
  *(uint *)(a1 + 100) = ScriptHandler_LoadHWord(a1);
  ScriptHandler_AddFunction(v1, (int)Function_2043938);
  return 1;
}

//----- (02043938) --------------------------------------------------------
int __fastcall Function_2043938(int a1)
{
  int v1
  int v2
  int v3
  int v4
  ushort *v5

  v1 = a1;
  v2 = a1 + 128;
  v3 = *(uint *)v2;
  v4 = Function_205b8d8(*(uint *)(*(uint *)v2 + 124));
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(v3, *(uint *)(v1 + 100) & 0xFFFF);
  if ( !v4 )
    return 0;
  *v5 = v4;
  return 1;
}

//----- (02043964) --------------------------------------------------------
int __fastcall Function_2043964(int a1)
{
  Function_205c820(*(uint *)(*(uint *)(a1 + 128) + 56), *(uint *)(*(uint *)(a1 + 128) + 128));
  return 0;
}

//----- (02043978) --------------------------------------------------------
int ScriptCmd_StartUnion()
{
  Function_205bea8(4u);
  Function_2036ba0();
  return 0;
}

//----- (02043988) --------------------------------------------------------
int ScriptCmd_LinkClosed()
{
  Function_2036bd8();
  Function_2036ac4();
  Function_205bea8(0);
  return 0;
}

//----- (0204399C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckOtherDecisionUnion(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  Function_205b930(*(uint **)(v2 + 124), v4, v6, v7);
  return 0;
}

//----- (020439D8) --------------------------------------------------------
int __fastcall ScriptCmd_StoreYourDecisionUnion2(int a1)
{
  int v1

  v1 = a1;
  *(uint *)(a1 + 100) = ScriptHandler_LoadHWord(a1);
  ScriptHandler_AddFunction(v1, (int)Function_20439f4);
  return 1;
}

//----- (020439F4) --------------------------------------------------------
int __fastcall Function_20439f4(int a1)
{
  int v1
  ushort *v2
  uint v3
  int result

  v1 = a1;
  v2 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(a1 + 128), *(uint *)(a1 + 100) & 0xFFFF);
  v3 = Function_205b8dc(*(uint *)(*(uint *)(v1 + 128) + 124));
  if ( v3 < 1 )
  {
    result = 0;
    *v2 = 0;
  }
  else
  {
    *v2 = v3;
    Function_205c154(*(uint **)(*(uint *)(v1 + 128) + 124));
    result = 1;
  }
  return result;
}

//----- (02043A30) --------------------------------------------------------
int __fastcall ScriptCmd_StoreOtherDecisionUnion2(int a1)
{
  int v1

  v1 = a1;
  *(uint *)(a1 + 100) = ScriptHandler_LoadHWord(a1);
  ScriptHandler_AddFunction(v1, (int)Function_2043a4c);
  return 1;
}

//----- (02043A4C) --------------------------------------------------------
int __fastcall Function_2043a4c(int a1)
{
  int v1
  ushort *v2
  int v3

  v1 = a1;
  v2 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(a1 + 128), *(uint *)(a1 + 100) & 0xFFFF);
  v3 = Function_205b91c(*(uint *)(*(uint *)(v1 + 128) + 124));
  if ( dword_21BF6C4 & 2 )
    v3 = Function_205b9ec(*(uint *)(*(uint *)(v1 + 128) + 124), 8);
  if ( !v3 )
    return 0;
  *v2 = v3;
  return 1;
}

//----- (02043A94) --------------------------------------------------------
int __fastcall ScriptCmd_UnionRoom(int a1)
{
  Function_2054708(*(uint *)(*(uint *)(a1 + 128) + 16));
  return 1;
}

//----- (02043AA4) --------------------------------------------------------
int __fastcall ScriptCmd_OpenWiFiSprite(int a1)
{
  int v1
  int v2
  int v3
  int *v4
  int v5
  int v6

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v3 = LoadTrainerDataAdress(v2);
  v4 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v5 = GetTrainerID(v3);
  v6 = GetGender(v3);
  Function_205c980(v5, v6, *v4);
  return 0;
}

//----- (02043AE0) --------------------------------------------------------
int __fastcall ScriptCmd_StoreWiFiSprite(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  ushort *v7
  int v8
  int v9
  int v10

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v3 = LoadTrainerDataAdress(v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = GetTrainerID(v3);
  v9 = GetGender(v3);
  *v7 = Function_205c9bc(v8, v9, v5);
  v10 = GetGender(v3);
  *v7 = Function_205ca14(v10, (ushort)*v7, 2);
  return 0;
}

//----- (02043B48) --------------------------------------------------------
int __fastcall Function_2043b48(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  ushort *v7
  int v8
  int v9

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v3 = LoadTrainerDataAdress(v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = GetTrainerID(v3);
  v9 = GetGender(v3);
  *v7 = Function_205c9bc(v8, v9, v5);
  return 0;
}

//----- (02043BA0) --------------------------------------------------------
int __fastcall ScriptCmd_ActWiFiSprite(int a1)
{
  int v1
  int v2
  int v3
  int v4
  char v5

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v3 = LoadTrainerDataAdress(v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  Function_2025f90(v3, v5);
  return 0;
}

//----- (02043BD4) --------------------------------------------------------
int __fastcall ScriptCmd_DefeatGoPokecenter(int a1)
{
  Function_2052c5c(*(uint *)(a1 + 116));
  return 1;
}

//----- (02043BE0) --------------------------------------------------------
int __fastcall ScriptCmd_ActBike(int a1)
{
  int v1
  int v2
  short v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_6(*(uint *)(*(uint *)(v1 + 128) + 12));
  SetVariableAreaAdress_6_68(v4, v3);
  return 0;
}

//----- (02043C0C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckGender(int a1)
{
  int v1
  int v2
  int v3
  int v4
  ushort *v5

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v3 = LoadTrainerDataAdress(v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  *v5 = GetGender(v3);
  return 0;
}

//----- (02043C3C) --------------------------------------------------------
int __fastcall ScriptCmd_HealPokemon(int a1)
{
  int v1
  int v2

  v1 = LoadOverWorldDataAdress(*(uint *)(a1 + 116));
  v2 = LoadPokePartyAdress(*(uint *)(v1 + 12));
  HealPokemon(v2);
  return 0;
}

//----- (02043C54) --------------------------------------------------------
int ScriptCmd_DeactWireless()
{
  return 0;
}

//----- (02043C58) --------------------------------------------------------
int __fastcall ScriptCmd_DeleteEntry(int a1)
{
  int v1

  v1 = a1;
  Function_205987c();
  ScriptHandler_AddFunction(v1, (int)Function_2043c70);
  return 1;
}

//----- (02043C70) --------------------------------------------------------
BOOL Function_2043c70()
{
  return Function_2036780() != 1 && Function_2033e1c() != 1;
}

//----- (02043C8C) --------------------------------------------------------
int __fastcall Function_2043c8c(int a1)
{
  int v1

  v1 = a1;
  Function_20598a0();
  ScriptHandler_AddFunction(v1, (int)Function_2043c70);
  return 1;
}

//----- (02043CA4) --------------------------------------------------------
int __fastcall Function_2043ca4(int a1)
{
  Function_20597b4(*(uint *)(a1 + 128));
  return 0;
}

//----- (02043CB4) --------------------------------------------------------
int __fastcall ScriptCmd_UndergroundId(int a1)
{
  int v1

  v1 = ScriptHandler_LoadHWord(a1);
  Function_20593f4(v1);
  return 0;
}

//----- (02043CC4) --------------------------------------------------------
int __fastcall Function_2043cc4(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  ushort *v5
  int v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = LoadVariableAreaAdressItemList(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v5 = Function_207d69c(v6, v3);
  return 0;
}

//----- (02043D04) --------------------------------------------------------
int __fastcall ScriptCmd_ChangeOverworldPosition(int a1)
{
  int v1
  int v2
  int v3
  int v4
  short v5
  int v6
  short v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  SetOverworldPosition(*(uint *)(v1 + 128), v3, v5, v7);
  return 0;
}

//----- (02043D54) --------------------------------------------------------
int __fastcall ScriptCmd_SetOwPosition(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  uint *v12
  int v13
  int v14
  int v15

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = ScriptHandler_LoadHWord(v1);
  v9 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v8);
  v10 = ScriptHandler_LoadHWord(v1);
  v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v10);
  v12 = GetAdressOfSpriteID(*(uint *)(*(uint *)(v1 + 128) + 56), v3);
  Function_2063340((int)v12, v5, v7, v9, v11);
  Function_20642f8(v12, v13, v14, v15);
  return 0;
}

//----- (02043DE4) --------------------------------------------------------
int __fastcall ScriptCmd_SetOverworldMovement(int a1)
{
  int v1
  int v2
  int v3
  int v4
  short v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  Function_203a52c(*(uint *)(v1 + 128), v3, v5);
  return 0;
}

//----- (02043E1C) --------------------------------------------------------
int __fastcall ScriptCmd_ReleaseOverworld(int a1)
{
  int v1
  int v2
  int v3
  int v4
  short v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  Function_203a4fc(*(uint *)(v1 + 128), v3, v5);
  return 0;
}

//----- (02043E54) --------------------------------------------------------
int __fastcall ScriptCmd_SetTilePassable(int a1)
{
  int v1
  int v2
  int v3
  int v4
  short v5
  int v6
  short v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_203a55c(*(uint *)(v1 + 128), v3, v5, v7);
  return 0;
}

//----- (02043EA4) --------------------------------------------------------
int __fastcall ScriptCmd_SetTileLocked(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_203a594(*(uint *)(v1 + 128), v3, v5, v7);
  return 0;
}

//----- (02043EF4) --------------------------------------------------------
int __fastcall ScriptCmd_SetOverworldsFollow(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint v5
  uint *v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = GetAdressOfSpriteID(*(uint *)(*(uint *)(v1 + 128) + 56), v3);
  if ( !v6 )
    ErrorHandler();
  ((void (__fastcall *)(uint *, uint))dword_21ECDFC[0])(v6, v5);
  return 0;
}

//----- (02043F40) --------------------------------------------------------
int __fastcall Function_2043f40(int a1)
{
  int v1
  ushort **v2
  int v3
  short v4

  v1 = a1;
  v2 = (ushort **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xCu);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  if ( *v2 )
    **v2 = v4;
  return 0;
}

//----- (02043F6C) --------------------------------------------------------
int __fastcall ScriptCmd_PrepareDoorAnimation(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint v5
  int v6
  uint v7
  uchar *v8

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v8 + 1;
  ((void (__fastcall *)(uint, uint, uint, uint))dword_21D4BF4[0])(
    *(uint *)(v1 + 128),
    v5 + 32 * v2,
    v7 + 32 * v3,
    *v8);
  return 0;
}

//----- (02043FC4) --------------------------------------------------------
int __fastcall ScriptCmd_WaitAction(int a1)
{
  uchar *v1

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  ((void (__fastcall *)(uint, uint))dword_21D4D48[0])(*(uint *)(a1 + 128), *v1);
  return 1;
}

//----- (02043FDC) --------------------------------------------------------
int __fastcall ScriptCmd_WaitClose(int a1)
{
  uchar *v1

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  ((void (__fastcall *)(uint, uint))dword_21D4D68[0])(*(uint *)(a1 + 128), *v1);
  return 0;
}

//----- (02043FF4) --------------------------------------------------------
int __fastcall ScriptCmd_OpenDoor(int a1)
{
  uchar *v1

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  ((void (__fastcall *)(uint, uint))dword_21D4C88[0])(*(uint *)(a1 + 128), *v1);
  return 0;
}

//----- (0204400C) --------------------------------------------------------
int __fastcall ScriptCmd_CloseDoor(int a1)
{
  uchar *v1

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  ((void (__fastcall *)(uint, uint))dword_21D4CEC[0])(*(uint *)(a1 + 128), *v1);
  return 0;
}

//----- (02044024) --------------------------------------------------------
int __fastcall ScriptCmd_PastoriaCityFunction(int a1)
{
  Function_2071b10(*(uint *)(a1 + 128));
  return 0;
}

//----- (02044034) --------------------------------------------------------
int __fastcall ScriptCmd_PastoriaCityFunction2(int a1)
{
  ((void (__fastcall *)(uint))dword_224997C[0])(*(uint *)(a1 + 128));
  return 1;
}

//----- (02044044) --------------------------------------------------------
int __fastcall ScriptCmd_HearthromeGymFunction(int a1)
{
  Function_2071c18(*(uint *)(a1 + 128));
  return 0;
}

//----- (02044054) --------------------------------------------------------
int __fastcall ScriptCmd_HearthromeGymFunction2(int a1)
{
  ((void (__fastcall *)(uint))dword_2249FB8[0])(*(uint *)(a1 + 128));
  return 1;
}

//----- (02044064) --------------------------------------------------------
int __fastcall ScriptCmd_CanalaveGymFunction(int a1)
{
  Function_2071b30(*(uint *)(a1 + 128));
  return 0;
}

//----- (02044074) --------------------------------------------------------
int __fastcall ScriptCmd_VeilstoneGymFunction(int a1)
{
  Function_2071bf8(*(uint *)(a1 + 128));
  return 0;
}

//----- (02044084) --------------------------------------------------------
int __fastcall ScriptCmd_SunishoreGymFunction(int a1)
{
  uchar *v1
  int v2

  v1 = *(uchar **)(a1 + 8);
  v2 = *(uint *)(a1 + 128);
  *(uint *)(a1 + 8) = v1 + 1;
  Function_2071b6c(v2, *v1);
  return 0;
}

//----- (020440A0) --------------------------------------------------------
int __fastcall ScriptCmd_SunishoreGymFunction2(int a1)
{
  uchar *v1
  int v2

  v1 = *(uchar **)(a1 + 8);
  v2 = *(uint *)(a1 + 128);
  *(uint *)(a1 + 8) = v1 + 1;
  ((void (__fastcall *)(int, uint))dword_224AD34[0])(v2, *v1);
  return 1;
}

//----- (020440BC) --------------------------------------------------------
int __fastcall ScriptCmd_EternaGymAnimation(int a1)
{
  Function_2071bd0(*(uint *)(a1 + 128));
  return 0;
}

//----- (020440CC) --------------------------------------------------------
int __fastcall Function_20440cc(int a1)
{
  Function_2071c34(*(uint *)(a1 + 128));
  return 0;
}

//----- (020440DC) --------------------------------------------------------
int __fastcall Function_20440dc(int a1)
{
  Function_2071c5c(*(uint *)(a1 + 128));
  return 0;
}

//----- (020440EC) --------------------------------------------------------
int __fastcall Function_20440ec(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  ushort *v6
  int v7
  ushort *v8
  int v9

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = Function_205eb3c(*(uint *)(v2 + 60));
  *v4 = LoadSpritePositionX(v9);
  *v6 = LoadSpritePositionZ(v9) / 2;
  *v8 = LoadSpritePositionY(v9);
  return 0;
}

//----- (02044158) --------------------------------------------------------
int __fastcall ScriptCmd_EggAnimation(int a1, int a2, int a3, int a4)
{
  Function_203e2fc(*(uint *)(a1 + 128), a2, a3, a4);
  return 1;
}

//----- (02044168) --------------------------------------------------------
int __fastcall ScriptCmd_UndergroundFunction(int a1)
{
  int v1
  uint *v2
  int *v3
  int v4
  uint v5
  int v6

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xAu);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  *(uint *)(v1 + 100) = ScriptHandler_LoadHWord(v1);
  v6 = GetSpriteID(*v3);
  *v2 = ((int (__fastcall *)(uint, uint, int))dword_2252C98)(v5, *(uint *)(v1 + 128), v6);
  ScriptHandler_AddFunction(v1, (int)Function_20441c8);
  return 1;
}

//----- (020441C8) --------------------------------------------------------
BOOL __fastcall Function_20441c8(int a1)
{
  int v1
  uint *v2
  ushort *v3

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), *(uint *)(v1 + 100) & 0xFFFF);
  *v3 = ((int (__fastcall *)(uint))dword_2252C70[0])(*v2);
  return (ushort)*v3 != 65534;
}

//----- (02044208) --------------------------------------------------------
int __fastcall ScriptCmd_UndergroundFunction2(int a1)
{
  int v1
  uchar *v2
  int v3
  uint v4

  v1 = a1;
  v2 = (uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 3u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  *v2 = ((int (__fastcall *)(uint))dword_2252C9C[0])(v4);
  ScriptHandler_AddFunction(v1, (int)Function_2044240);
  return 1;
}

//----- (02044240) --------------------------------------------------------
BOOL __fastcall Function_2044240(int a1)
{
  uchar *v1

  v1 = (uchar *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 3u);
  return Function_205da04(*v1);
}

//----- (02044254) --------------------------------------------------------
int ScriptCmd_UndergroundStart()
{
  ((void (*)(void))dword_2252CD4[0])();
  return 0;
}

//----- (02044260) --------------------------------------------------------
int __fastcall Function_2044260(int a1)
{
  int v1
  uchar *v2
  int v3
  int v4
  uint v5

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = *v2;
  v4 = ScriptHandler_LoadHWord(a1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  ((void (__fastcall *)(int, uint))dword_2252CE0[0])(v3, v5);
  return 0;
}

//----- (02044288) --------------------------------------------------------
int __fastcall Function_2044288(int a1)
{
  int v1
  uchar *v2
  int v3
  int v4
  uint v5

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = *v2;
  v4 = ScriptHandler_LoadHWord(a1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  ((void (__fastcall *)(int, uint))dword_2252CF4[0])(v3, v5);
  return 0;
}

//----- (020442B0) --------------------------------------------------------
int ScriptCmd_WaitFor()
{
  return 1;
}

//----- (020442B4) --------------------------------------------------------
int __fastcall ScriptCmd_AddPeople2(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint *v5

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = GetAdressOfSpriteID(*(uint *)(v2 + 56), v4);
  if ( !v5 )
    ErrorHandler();
  Function_2062d64(v5, 0);
  return 0;
}

//----- (020442E8) --------------------------------------------------------
int __fastcall ScriptCmd_RemovePeople2(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint *v5

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = GetAdressOfSpriteID(*(uint *)(v2 + 56), v4);
  if ( !v5 )
    ErrorHandler();
  Function_2062d64(v5, 1);
  return 0;
}

//----- (0204431C) --------------------------------------------------------
int __fastcall ScriptCmd_Mailbox(int a1)
{
  Function_20736d8(*(uint *)(a1 + 116));
  return 1;
}

//----- (02044328) --------------------------------------------------------
int __fastcall ScriptCmd_CheckMail(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = LoadVariableAreaAdress_f(*(uint *)(v2 + 12));
  *v4 = Function_2028494(v5, 0);
  return 0;
}

//----- (02044354) --------------------------------------------------------
int __fastcall ScriptCmd_ShowRecordList(int a1)
{
  int v1
  int v2
  short v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  Function_20703fc(*(uint *)(v1 + 116), v3);
  return 1;
}

//----- (02044374) --------------------------------------------------------
int __fastcall ScriptCmd_CheckTime(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_2055ba8(*(uint *)(v1 + 128));
  return 0;
}

//----- (02044398) --------------------------------------------------------
int __fastcall ScriptCmd_CheckIdPlayer(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5
  uint v6
  short v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = PRNG();
  s32_div_f(v6, v5);
  *v3 = v7;
  return 1;
}

//----- (020443D0) --------------------------------------------------------
int __fastcall ScriptCmd_RandomTextStored(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5
  uint v6
  short v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = PRNG();
  s32_div_f(v6, v5);
  *v3 = v7;
  return 1;
}

//----- (02044408) --------------------------------------------------------
int __fastcall ScriptCmd_CopyPokemonHeight(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  uint v6

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  *v4 = ((int (__fastcall *)(int, uint))dword_21EE920[0])(v2, v6);
  return 0;
}

//----- (02044444) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariablePokemonHeight(int a1)
{
  int v1
  int v2
  int v3
  uint v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  ((void (__fastcall *)(int, uint))dword_21EE9BC[0])(v2, v4);
  return 0;
}

//----- (02044468) --------------------------------------------------------
int __fastcall ScriptCmd_ComparePokemonHeight(int a1)
{
  int v1
  int v2
  int v3
  uchar v4
  int v5
  uchar v6
  int v7
  uint v8

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  ((void (__fastcall *)(int, uint, uint, uint))dword_21EEA84[0])(v2, v4, v6, v8);
  return 0;
}

//----- (020444BC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokemonHeight(int a1)
{
  int v1
  int v2
  int v3
  uchar v4
  int v5
  uchar v6
  int v7
  uint v8

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  ((void (__fastcall *)(int, uint, uint, uint))dword_21EEA54[0])(v2, v4, v6, v8);
  return 0;
}

//----- (02044510) --------------------------------------------------------
int __fastcall ScriptCmd_ShowMoveInfo(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_206b0c4(v1, 33280);
  return 0;
}

//----- (02044528) --------------------------------------------------------
int __fastcall Function_2044528(int a1)
{
  int v1
  int v2
  int v3
  int *v4
  int v5
  int v6
  int v7
  int v8

  v1 = a1 + 128;
  v2 = *(uint *)v1;
  v3 = LoadFlagAdress(*(uint *)(*(uint *)v1 + 12));
  Function_206af2c(v3, 1);
  v4 = (int *)LoadVariableAreaAdress_12(*(uint *)(v2 + 12));
  *(uint *)(v2 + 156) = Function_202b634(v4, 1, v5, v6);
  Function_2053494(v2, v2 + 156, v7, v8);
  return 0;
}

//----- (02044558) --------------------------------------------------------
int __fastcall ScriptCmd_DeActivateLeader(int a1)
{
  int v1
  int v2
  char v3
  int v4
  int v5
  int v6
  int v7
  int *v8
  int result
  short v10

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v10 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v6 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v7 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v8 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x14u);
  switch ( v3 )
  {
    case 16:
      *v8 = (int)Function_202bdd4(4u);
      goto LABEL_8;
    case 17:
      *v8 = (int)Function_202bde0(4u);
      goto LABEL_8;
    case 18:
      *v8 = (int)Function_202bdec(v10, 4u);
      goto LABEL_8;
    case 19:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
      *v8 = (int)Function_202be00(v3 - 19, v10, 4u);
      goto LABEL_8;
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
      *v8 = (int)Function_202be2c(4u, v3);
LABEL_8:
      Function_202b758(*(uint *)(*(uint *)(v1 + 128) + 156), *v8, 1u);
      result = 1;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (0204466C) --------------------------------------------------------
int Function_204466c()
{
  return 0;
}

//----- (02044670) --------------------------------------------------------
int __fastcall ScriptCmd_GiveAccessories3(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  int v5
  int v6
  int v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = LoadVariableAreaAdress_e(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = Function_2029d04(v6);
  Function_2029e2c(v7, v3, v5);
  return 0;
}

//----- (020446B4) --------------------------------------------------------
int __fastcall ScriptCmd_CheckAccessories3(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  int v5
  int v6
  ushort *v7
  int v8
  int v9

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = LoadVariableAreaAdress_e(*(uint *)(*(uint *)(v1 + 128) + 12));
  v9 = Function_2029d04(v8);
  *v7 = Function_2029d50(v9, v3, v5);
  return 0;
}

//----- (02044710) --------------------------------------------------------
int __fastcall Function_2044710(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  uint v5
  int v6
  ushort *v7
  int v8
  int v9

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = LoadVariableAreaAdress_e(*(uint *)(*(uint *)(v1 + 128) + 12));
  v9 = Function_2029d04(v8);
  *v7 = v5 <= Function_2029d94(v9, v3);
  return 0;
}

//----- (02044774) --------------------------------------------------------
int __fastcall ScriptCmd_GiveAccessories2(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  int v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_e(*(uint *)(*(uint *)(v1 + 128) + 12));
  v5 = Function_2029d04(v4);
  Function_2029efc(v5, v3);
  return 0;
}

//----- (020447A4) --------------------------------------------------------
int __fastcall ScriptCmd_CheckAccessories2(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  ushort *v5
  int v6
  int v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = LoadVariableAreaAdress_e(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = Function_2029d04(v6);
  *v5 = Function_2029d80(v7, v3);
  return 0;
}

//----- (020447E8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckSinnohPokedex(int a1)
{
  int v1
  uint *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = 0;
  if ( IsSinPokedexComplete(v2) == 1 )
    *v4 = 1;
  return 0;
}

//----- (02044820) --------------------------------------------------------
int __fastcall ScriptCmd_CheckNationalPokedex(int a1)
{
  int v1
  uint *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = 0;
  if ( IsNatPokedexComplete(v2) == 1 )
    *v4 = 1;
  return 0;
}

//----- (02044858) --------------------------------------------------------
int __fastcall ScriptCmd_ShowSinnohSheet(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  *v2 = Function_203e53c(*(uint *)(v1 + 128), 0x20u, 0);
  ScriptHandler_AddFunction(v1, (int)Function_2041cc8);
  return 1;
}

//----- (02044888) --------------------------------------------------------
int __fastcall ScriptCmd_ShowNationalSheet(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  *v2 = Function_203e53c(*(uint *)(v1 + 128), 0x20u, 1);
  ScriptHandler_AddFunction(v1, (int)Function_2041cc8);
  return 1;
}

//----- (020448B8) --------------------------------------------------------
int __fastcall Function_20448b8(int a1)
{
  ((void (__fastcall *)(uint))dword_22475B0[0])(*(uint *)(*(uint *)(a1 + 128) + 12));
  return 0;
}

//----- (020448C8) --------------------------------------------------------
int __fastcall ScriptCmd_StoreTrophyPokemon(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = ((int (__fastcall *)(uint))dword_2247624[0])(*(uint *)(*(uint *)(v1 + 128) + 12));
  return 0;
}

//----- (020448F0) --------------------------------------------------------
int __fastcall Function_20448f0(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  return 0;
}

//----- (02044908) --------------------------------------------------------
int __fastcall ScriptCmd_RandomEvent(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_202cf28(v3, v2);
  return 0;
}

//----- (02044928) --------------------------------------------------------
int __fastcall Function_2044928(int a1)
{
  int v1
  int v2
  int v3
  int v4
  ushort *v5
  ushort *v6
  int v7
  uint v8

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v7 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
  v8 = Function_202cfb8(v7, v2);
  *v5 = (v8 & 0xFFFF0000) >> 16;
  *v6 = v8;
  return 0;
}

//----- (02044980) --------------------------------------------------------
int __fastcall Function_2044980(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uchar *v5
  int v6
  int v7
  int v8
  int v9
  int v10

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v5 + 1;
  v6 = (v3 << 16) | v4;
  v7 = (uchar)*v5;
  if ( *v5 )
  {
    if ( v7 == 1 )
    {
      v9 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
      Function_202ce90(v9, v2, v6);
    }
    else if ( v7 == 2 )
    {
      v10 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
      Function_202ced0(v10, v2, v6);
    }
  }
  else
  {
    v8 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
    Function_202cf70(v8, v2, v6);
  }
  return 0;
}

//----- (020449F4) --------------------------------------------------------
int __fastcall Function_20449f4(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_202cf70(v5, v2, v4);
  return 0;
}

//----- (02044A28) --------------------------------------------------------
int __fastcall Function_2044a28(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadWord(v1);
  v4 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_202cf70(v4, v2, v3);
  return 0;
}

//----- (02044A50) --------------------------------------------------------
int __fastcall ScriptCmd_GreatMarshFunction(int a1)
{
  int v1
  int v2
  int v3
  uchar *v4
  int v5
  ushort *v6
  ushort *v7
  int v8
  int v9
  int v10
  uchar *v11
  int v13
  int v14

  v1 = a1;
  v2 = LoadVariableAreaAdress_6(*(uint *)(*(uint *)(a1 + 128) + 12));
  v13 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v3 = Function_202440c(*(uint *)(*(uint *)(v1 + 128) + 12));
  v4 = *(uchar **)(v1 + 8);
  v14 = v3;
  *(uint *)(v1 + 8) = v4 + 1;
  v5 = *v4;
  v6 = (ushort *)AddVariableAreaAdress_6_98(v2);
  v7 = (ushort *)AddVariableAreaAdress_6_96(v2);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      Function_206ae4c(v13);
      Function_206d720(*(uint *)(v1 + 128), v8, v9, v10);
      v11 = Function_202bde0(4u);
      Function_202b758(*(uint *)(*(uint *)(v1 + 128) + 156), (int)v11, 1u);
      *v6 = 0;
      *v7 = 0;
    }
  }
  else
  {
    Function_206ae3c(v13);
    Function_206d000(v14);
    *v6 = 30;
    *v7 = 0;
  }
  return 0;
}

//----- (02044AE8) --------------------------------------------------------
int __fastcall ScriptCmd_GreatMarshBynocule(int a1)
{
  Function_206c0e8(*(uint *)(a1 + 128));
  return 1;
}

//----- (02044AF8) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarMtCoronet(int a1)
{
  int v1
  uchar *v2
  int v3
  int v4
  ushort *v5

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = *v2;
  v4 = ScriptHandler_LoadHWord(a1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  *v5 = ((int (__fastcall *)(uint, int))dword_2243004[0])(*(uint *)(v1 + 128), v3);
  return 1;
}

//----- (02044B28) --------------------------------------------------------
int __fastcall Function_2044b28(int a1)
{
  Function_2071cd0(*(uint *)(a1 + 128));
  return 0;
}

//----- (02044B38) --------------------------------------------------------
int __fastcall ScriptCmd_CheckQuicTrineCoordinates(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  Function_2004550(0x41u, 0);
  ((void (__fastcall *)(uint, uint, int))dword_2242B58[0])(*(uint *)(v1 + 128), *v3, v4);
  return 1;
}

//----- (02044B70) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarQuickTrainCoordinates(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = ((int (__fastcall *)(uint, int))dword_2242C3C[0])(*(uint *)(v1 + 128), v2);
  return 0;
}

//----- (02044BA0) --------------------------------------------------------
int __fastcall ScriptCmd_MoveTrainAnimation(int a1)
{
  uchar *v1

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  Function_205ed2c(*(uint *)(*(uint *)(a1 + 128) + 60), *v1);
  return 1;
}

//----- (02044BB8) --------------------------------------------------------
int __fastcall ScriptCmd_RandomHallowes(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_206b354(v2);
  return 0;
}

//----- (02044BE8) --------------------------------------------------------
int __fastcall ScriptCmd_ChsRSPoke(int a1)
{
  int v1
  uint *v2
  int v3
  int v4
  uint v5
  ushort v6
  int v7
  uint v8
  int v9
  int v10
  int v11
  int v12
  ushort *v14

  v1 = a1;
  v2 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v14 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v4 = Function_2026eac(v2);
  v5 = PRNG();
  s32_div_f(v5, v4);
  v7 = v6;
  *v14 = 25;
  v8 = 1;
  v9 = 0;
  while ( 1 )
  {
    if ( WasPkmnSeen(v2, v8) != 1 || !Function_20775a4(v8, v10, v11, v12) )
      goto LABEL_7;
    if ( v9 == v7 )
      break;
    v9 = (v9 + 1) & 0xFFFF;
LABEL_7:
    v8 = (v8 + 1) & 0xFFFF;
    if ( v8 > 0x1ED )
      return 0;
  }
  *v14 = v8;
  return 0;
}

//----- (02044C64) --------------------------------------------------------
int __fastcall ScriptCmd_SetSPoke(int a1)
{
  int v1
  int v2
  short v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_206b270(v4, v3);
  return 0;
}

//----- (02044C90) --------------------------------------------------------
int __fastcall ScriptCmd_CheckSPoke(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_206b260(v4);
  return 0;
}

//----- (02044CBC) --------------------------------------------------------
int __fastcall Function_2044cbc(int a1)
{
  Function_202d884(*(uint *)(*(uint *)(a1 + 128) + 12));
  return 0;
}

//----- (02044CCC) --------------------------------------------------------
int __fastcall ScriptCmd_ActSwarmPoke(int a1)
{
  uchar *v1

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  Function_206c41c(*(uint *)(*(uint *)(a1 + 128) + 12), *v1);
  return 0;
}

//----- (02044CE4) --------------------------------------------------------
int __fastcall ScriptCmd_SetTradeId(int a1)
{
  int v1
  uint *v2
  uchar *v3

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v3 + 1;
  *v2 = ((int (__fastcall *)(int, uint))dword_2246184[0])(11, *v3);
  return 0;
}

//----- (02044D08) --------------------------------------------------------
int __fastcall Function_2044d08(int a1)
{
  int v1
  uint *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = ((int (__fastcall *)(uint))dword_2246224[0])(*v2);
  return 0;
}

//----- (02044D38) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokemonTrade(int a1)
{
  int v1
  uint *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = ((int (__fastcall *)(uint))dword_224622C[0])(*v2);
  return 0;
}

//----- (02044D68) --------------------------------------------------------
int __fastcall ScriptCmd_TradeChosenPokemon(int a1)
{
  int v1
  int *v2
  int v3
  int v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  Function_206c740(*(uint *)(v1 + 116), *v2, v4, 0xBu);
  return 1;
}

//----- (02044D9C) --------------------------------------------------------
int __fastcall ScriptCmd_StopTrade(int a1)
{
  uint *v1

  v1 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  ((void (__fastcall *)(uint))dword_2246204[0])(*v1);
  return 0;
}

//----- (02044DB4) --------------------------------------------------------
int __fastcall ScriptCmd_22b(int a1)
{
  int v1

  v1 = LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_2027508(v1);
  return 0;
}

//----- (02044DC8) --------------------------------------------------------
int __fastcall ScriptCmd_CloseOakAssistantEvent(int a1)
{
  uint *v1

  v1 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_20274b0(v1);
  return 0;
}

//----- (02044DDC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckNatPokedexStatus(int a1)
{
  int v1
  uchar *v2
  int v3
  int v4
  ushort *v5
  uint *v6
  int v7
  uint *v8

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = *v2;
  v4 = ScriptHandler_LoadHWord(a1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  *v5 = 0;
  if ( v3 == 1 )
  {
    v6 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
    Function_2027454(v6);
    v7 = LoadTrainerDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
    Function_2025ff8(v7);
  }
  else if ( v3 == 2 )
  {
    v8 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
    *v5 = Function_2027474(v8);
  }
  else
  {
    ErrorHandler();
  }
  return 0;
}

//----- (02044E40) --------------------------------------------------------
int __fastcall ScriptCmd_CheckHappyRibbon(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5
  uint *v6
  int *v7
  short v8
  short v9
  short v10
  short v11

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = GetAdrOfPkmnInParty(v6, v5);
  LOWORD(v5) = GetPkmnData(v7, 0xDu, 0);
  v8 = GetPkmnData(v7, 0xEu, 0);
  v9 = GetPkmnData(v7, 0xFu, 0);
  v10 = GetPkmnData(v7, 0x10u, 0);
  v11 = GetPkmnData(v7, 0x11u, 0);
  *v3 = GetPkmnData(v7, 0x12u, 0) + v11 + v10 + v9 + v5 + v8;
  return 0;
}

//----- (02044EDC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokemart(int a1)
{
  int v1
  int v2
  ushort *v3
  char v5
  int v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  Function_20138a4(&v5);
  *v3 = v6;
  return 0;
}

//----- (02044F04) --------------------------------------------------------
int __fastcall ScriptCmd_DecideRules(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  ((void (__fastcall *)(uint, int))dword_224BE7C[0])(*(uint *)(v1 + 116), v3);
  return 1;
}

//----- (02044F24) --------------------------------------------------------
int __fastcall ScriptCmd_CheckFootStep(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  ushort *v5
  int v6
  int v7
  uint *v8
  int *v9
  int v10
  ushort v11

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v9 = GetAdrOfPkmnInParty(v8, v7);
  v10 = (ushort)GetPkmnData(v9, 5u, 0);
  v11 = GetPkmnData(v9, 0x70u, 0);
  *v3 = ((int (__fastcall *)(int, uint))dword_21F0E90[0])(v10, v11);
  *v5 = ((int (__fastcall *)(int))dword_21F0E84[0])(v10);
  return 0;
}

//----- (02044FA4) --------------------------------------------------------
int __fastcall ScriptCmd_HealPokemonAnimation(int a1)
{
  int v1
  int v2
  uchar v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  ((void (__fastcall *)(uint, uint))dword_2246C24[0])(*(uint *)(v1 + 128), v3);
  return 1;
}

//----- (02044FCC) --------------------------------------------------------
int __fastcall ScriptCmd_StoreElevatorDirection(int a1)
{
  int v1
  int v2
  uchar v3
  int v4
  uchar v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  ((void (__fastcall *)(uint, uint, uint))dword_2246F00[0])(*(uint *)(v1 + 128), v3, v5);
  return 1;
}

//----- (0204500C) --------------------------------------------------------
int __fastcall ScriptCmd_ShipAnimation(int a1)
{
  int v1
  uchar *v2
  int v3
  char v4
  int v5
  int v6
  int v7

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = *v2;
  *(uint *)(a1 + 8) = v2 + 2;
  v4 = v2[1];
  v5 = ScriptHandler_LoadHWord(a1);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_LoadHWord(v1);
  Function_206c784(*(uint *)(v1 + 128), v3, v4, v5, v6, v7);
  return 1;
}

//----- (0204504C) --------------------------------------------------------
int __fastcall ScriptCmd_StoreMtCoronet(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2) = 12;
  return 0;
}

//----- (02045068) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPhraseBoxInput2(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  ushort *v6
  int v7
  int v8
  uint v9
  int v10
  uint v11
  int v12
  uint v13
  int v14
  uint v15
  int v16
  int result
  short v18

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v4 = LoadTrainerDataAdress(v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = LoadVariableAreaAdress_25(*(uint *)(v2 + 12));
  v8 = ScriptHandler_LoadHWord(v1);
  v9 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v8);
  v10 = ScriptHandler_LoadHWord(v1);
  v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v10);
  v12 = ScriptHandler_LoadHWord(v1);
  v13 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v12);
  v14 = ScriptHandler_LoadHWord(v1);
  v15 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v14);
  v16 = ((int (__fastcall *)(int, uint, uint, uint, uint, int))dword_22479D0[0])(
          v4,
          v9,
          v11,
          v13,
          v15,
          4);
  if ( v16 != -1 && v16 <= 7 )
  {
    if ( Function_2079cfc(v7, v16) )
    {
      v18 = 0;
    }
    else
    {
      Function_2079cd8(v7, v16);
      v18 = v16 + 1;
    }
    *v6 = v18;
    result = 0;
  }
  else
  {
    *v6 = 255;
    result = 0;
  }
  return result;
}

//----- (02045134) --------------------------------------------------------
int __fastcall ScriptCmd_StoreUndTime(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = Function_20298a0(v2);
  *v4 = Function_20295b8(v5);
  return 0;
}

//----- (02045160) --------------------------------------------------------
int __fastcall ScriptCmd_PreparePcAnimation(int a1)
{
  uchar *v1
  int v2

  v1 = *(uchar **)(a1 + 8);
  v2 = *(uint *)(a1 + 128);
  *(uint *)(a1 + 8) = v1 + 1;
  ((void (__fastcall *)(int, uint))dword_2247078[0])(v2, *v1);
  return 0;
}

//----- (0204517C) --------------------------------------------------------
int __fastcall ScriptCmd_OpenPcAnimation(int a1)
{
  uchar *v1
  int v2

  v1 = *(uchar **)(a1 + 8);
  v2 = *(uint *)(a1 + 128);
  *(uint *)(a1 + 8) = v1 + 1;
  ((void (__fastcall *)(int, uint))dword_22470E8[0])(v2, *v1);
  return 0;
}

//----- (02045198) --------------------------------------------------------
int __fastcall ScriptCmd_ClosePcAnimation(int a1)
{
  uchar *v1
  int v2

  v1 = *(uchar **)(a1 + 8);
  v2 = *(uint *)(a1 + 128);
  *(uint *)(a1 + 8) = v1 + 1;
  ((void (__fastcall *)(int, uint))dword_22470F4[0])(v2, *v1);
  return 0;
}

//----- (020451B4) --------------------------------------------------------
int __fastcall Function_20451b4(int a1, int a2)
{
  int v2
  uint *v3
  int *v4

  v2 = a2;
  v3 = (uint *)LoadPokedexDataAdress(*(uint *)(a1 + 12));
  v4 = AllocPkmnData(0x20u);
  ClearCompletePkmnDataStructure(v4);
  InitPkmnData(v4, v2, 50, 32, 0, 0, 0, 0);
  Function_20272a4(v3, v4);
  return free((int)v4);
}

//----- (020451F8) --------------------------------------------------------
int __fastcall Function_20451f8(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  Function_20451b4(*(uint *)(v1 + 128), v3);
  return 0;
}

//----- (0204521C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckBoxesNumber(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_25(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = 540 - Function_2079a50(v4);
  return 0;
}

//----- (02045250) --------------------------------------------------------
int __fastcall ScriptCmd_RetSprtSave(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x16u);
  *v2 = 0;
  *v2 = ((int (__fastcall *)(uint))dword_21E1000[0])(*(uint *)(v1 + 128));
  return 1;
}

//----- (02045274) --------------------------------------------------------
int __fastcall ScriptCmd_ElevLgAnimation(int a1)
{
  uint *v1

  v1 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x16u);
  ((void (__fastcall *)(uint))dword_21E100C[0])(*v1);
  return 1;
}

//----- (0204528C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckElevLgAnm(int a1)
{
  int v1
  int v2
  uchar v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  ((void (__fastcall *)(uint, uint))dword_2247D30[0])(*(uint *)(v1 + 128), v3);
  return 1;
}

//----- (020452B4) --------------------------------------------------------
int __fastcall ScriptCmd_ElevIrAnm(int a1)
{
  Function_20716d4(*(uint *)(a1 + 128));
  return 0;
}

//----- (020452C4) --------------------------------------------------------
int __fastcall ScriptCmd_StopElevAnm(int a1)
{
  Function_207183c(*(uint *)(a1 + 128));
  return 1;
}

//----- (020452D4) --------------------------------------------------------
int __fastcall ScriptCmd_CheckElevPosition(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_2071818(*(uint *)(v1 + 128)) != 0;
  return 0;
}

//----- (02045304) --------------------------------------------------------
int __fastcall ScriptCmd_GalactAnimation(int a1)
{
  ((void (__fastcall *)(uint))dword_2247F5C[0])(*(uint *)(a1 + 128));
  return 0;
}

//----- (02045314) --------------------------------------------------------
int __fastcall ScriptCmd_GalactAnimation2(int a1)
{
  ((void (__fastcall *)(uint))dword_2247FBC[0])(*(uint *)(a1 + 128));
  return 1;
}

//----- (02045324) --------------------------------------------------------
int __fastcall ScriptCmd_MainEvent(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_202cfec(v3, v2);
  return 0;
}

//----- (02045344) --------------------------------------------------------
int __fastcall ScriptCmd_ActDeoxisFormChange(int a1)
{
  int v1
  int v2
  int v3
  int v4
  ushort *v5
  int v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v5 = IsFirstPkmnInPartyWantedSpecies(v6, v3);
  return 1;
}

//----- (02045384) --------------------------------------------------------
int __fastcall ScriptCmd_ChangeFormDeoxis(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  uint *v7
  int i
  int *v9
  uint *v11
  short v12
  int v13

  v13 = a4;
  v4 = a1;
  v5 = ScriptHandler_LoadHWord(a1);
  v12 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v5);
  v11 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v4 + 128) + 12));
  v6 = GetNrOfPkmnInParty((int)v11);
  v7 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(v4 + 128) + 12));
  for ( i = 0; i < v6; ++i )
  {
    v9 = GetAdrOfPkmnInParty(v11, i);
    if ( GetPkmnData(v9, 5u, 0) == 386 )
    {
      SetPkmnData((int)v9, 112, (ushort *)&v12);
      Function_207418c(v9);
      Function_202736c(v7, v9);
    }
  }
  return 1;
}

//----- (02045404) --------------------------------------------------------
int __fastcall ScriptCmd_CheckCoombeEvent(int a1)
{
  int v1
  int v2
  int i
  int *v4
  uint v5
  uint v6
  uint v7
  ushort *v9
  int v10
  uint *v11
  int v12
  int v13

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v11 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v10 = GetNrOfPkmnInParty((int)v11);
  v13 = 0;
  v12 = 0;
  for ( i = 0; i < v10; ++i )
  {
    v4 = GetAdrOfPkmnInParty(v11, i);
    v5 = GetPkmnData(v4, 5u, 0);
    v6 = GetPkmnData(v4, 0x6Fu, 0);
    v7 = GetPkmnData(v4, 0x4Cu, 0);
    if ( v5 == 415 && !v7 )
    {
      if ( !v6 )
        v13 = 1;
      if ( v6 == 1 )
        v12 = 1;
    }
  }
  if ( v13 != 1 || v12 != 1 )
    *v9 = v13 || v12;
  else
    *v9 = 2;
  return 1;
}

//----- (020454C0) --------------------------------------------------------
int __fastcall ScriptCmd_ActContestMap(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_206ae0c(v1);
  return 0;
}

//----- (020454D4) --------------------------------------------------------
int __fastcall Function_20454d4(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_206ae1c(v1);
  return 0;
}

//----- (020454E8) --------------------------------------------------------
int __fastcall ScriptCmd_Pokecasino(int a1)
{
  int v1
  int v2
  uchar v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  Function_203e414(*(uint *)(*(uint *)(v1 + 128) + 16), v3);
  return 1;
}

//----- (0204550C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckTime2(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_2055bdc(*(uint *)(v1 + 128));
  return 0;
}

//----- (02045530) --------------------------------------------------------
int __fastcall ScriptCmd_RegigigasAnimation(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  ushort v7
  int v8
  ushort v9
  uint *v10
  short v12
  short v13

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v13 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = ScriptHandler_LoadHWord(v1);
  v12 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = ScriptHandler_LoadHWord(v1);
  v9 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v8);
  v10 = GetAdressOfSpriteID(*(uint *)(*(uint *)(v1 + 128) + 56), v3);
  if ( !v10 )
    ErrorHandler();
  Function_205e318(*(uint *)(v1 + 116), (int)v10, v13, v12, v7, v9);
  return 1;
}

//----- (020455C4) --------------------------------------------------------
int __fastcall ScriptCmd_CresseliaAnimation(int a1)
{
  int v1
  int v2
  int v3
  int v4
  short v5
  int v6
  short v7
  uint *v8

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = GetAdressOfSpriteID(*(uint *)(*(uint *)(v1 + 128) + 56), v3);
  if ( !v8 )
    ErrorHandler();
  Function_205e3f4(*(uint *)(v1 + 116), (int)v8, v5, v7);
  return 1;
}

//----- (02045628) --------------------------------------------------------
int __fastcall ScriptCmd_CheckRegi(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5
  int v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_205e1f8(*(uint *)(*(uint *)(v1 + 128) + 12), v4, v5, v6);
  return 0;
}

//----- (02045650) --------------------------------------------------------
int __fastcall ScriptCmd_CheckMassage(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  char *v7
  int result
  uint v9
  int v10
  int v11
  char *v12
  ushort *v13
  char v14

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v13 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v3 = LoadVariableAreaAdress_e(*(uint *)(*(uint *)(v1 + 128) + 12));
  v4 = 0;
  v5 = Function_2029d04(v3);
  v6 = 0;
  v7 = &v14;
  do
  {
    if ( Function_2029d50(v5, v6 + 34, 1) == 1 )
    {
      *(ushort *)v7 = 1;
      ++v4;
    }
    ++v6;
    v7 += 2;
  }
  while ( v6 < 16 );
  if ( v4 )
  {
    v9 = PRNG();
    s32_div_f(v9, v4);
    v11 = 0;
    v12 = &v14;
    do
    {
      if ( *(ushort *)v12 == 1 )
      {
        if ( !v10 )
          break;
        --v10;
      }
      ++v11;
      v12 += 2;
    }
    while ( v11 < 16 );
    if ( v11 >= 16 )
      ErrorHandler();
    *v13 = v11 + 34;
    result = 0;
  }
  else
  {
    *v13 = -1;
    result = 0;
  }
  return result;
}

//----- (020456E8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPCatchingShow(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2) = (uchar)byte_21BF6E2;
  return 1;
}

//----- (02045708) --------------------------------------------------------
int __fastcall Function_2045708(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_206b364(v1, 0);
  return 0;
}

//----- (02045720) --------------------------------------------------------
int __fastcall ScriptCmd_ShayminAnimation(int a1)
{
  int v1
  int v2
  uint v3
  uchar *v4
  int v5
  int v6
  int v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = *(uchar **)(v1 + 8);
  v5 = v3;
  *(uint *)(v1 + 8) = v4 + 1;
  v6 = *v4;
  v7 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  if ( v6 )
    Function_206b1b0(v7, v5);
  else
    Function_206b1d8(v7, v5);
  return 0;
}

//----- (02045760) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarAccessories2(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200c01c(*v4, v5, v7);
  return 1;
}

//----- (02045798) --------------------------------------------------------
int __fastcall ScriptCmd_CheckRecordCasino(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = (uint)Function_206b394(v2) >= 0xA;
  return 0;
}

//----- (020457D0) --------------------------------------------------------
int __fastcall ScriptCmd_SrtRandomNum(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_206b314(v4);
  return 0;
}

//----- (020457FC) --------------------------------------------------------
int __fastcall Function_20457fc(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  uint v5
  int v6
  int v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = LoadVariableAreaAdress_e(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = Function_2029d04(v6);
  Function_2029ea0(v7, v3, v5);
  return 0;
}

//----- (02045840) --------------------------------------------------------
int __fastcall ScriptCmd_LeagueCastleView(int a1)
{
  Function_2050568(*(uint *)(a1 + 128));
  return 1;
}

//----- (02045850) --------------------------------------------------------
int __fastcall Function_2045850(int a1)
{
  Function_206b334(*(uint *)(*(uint *)(a1 + 128) + 12));
  return 0;
}

//----- (02045860) --------------------------------------------------------
int __fastcall Function_2045860(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  uint v5
  int **v6
  int v7
  int v8
  int v10
  int v11

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v7 = Function_2014ec4(*(uint *)(*(uint *)(v1 + 128) + 12));
  v8 = Function_2014ee4(v7);
  if ( v8 == 32 )
  {
    *v3 = -1;
  }
  else
  {
    *v3 = v8;
    v10 = Function_2014f64(v8);
    Function_200be48(*v6, v5, v10, v11);
  }
  return 0;
}

//----- (020458CC) --------------------------------------------------------
int __fastcall Function_20458cc(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = Function_2014ec4(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_2014f48(v4) == 1;
  return 0;
}

//----- (02045900) --------------------------------------------------------
int __fastcall ScriptCmd_CheckFirstTimeVShop(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = (uint)Function_206b3dc(v2) >= 5;
  return 0;
}

//----- (02045938) --------------------------------------------------------
int __fastcall Function_2045938(int a1)
{
  int *v1
  int v2
  int v3
  int v4
  ushort *v5
  int v6
  int v7
  int v8

  v1 = (int *)a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckLoadParameter(v1[32], v2);
  v1 += 32;
  v4 = *v1;
  v5 = (ushort *)v3;
  v6 = LoadVariableAreaAdress_0(*(uint *)(*v1 + 12));
  v7 = Function_2025d5c(v6);
  *v5 = v7 == Function_2055bb8(v4) && (v8 = Function_2025d60(v6), v8 == Function_2055bc4(v4));
  return 0;
}

//----- (0204598C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckRuinManiac(int a1)
{
  int v1
  uint *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_20270dc(v2);
  return 0;
}

//----- (020459BC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckTurnBack(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  uint v5
  int v6
  int v7
  int v8
  short v9
  uint v10
  int v11
  uint v12
  ushort v13
  int v14
  uint v15

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = *(uint *)(*(uint *)(v1 + 128) + 28);
  v7 = *(uint *)(v6 + 8) & 0xFFFF;
  v8 = *(uint *)(v6 + 12) & 0xFFFF;
  if ( v3 < 3 )
  {
    if ( v5 < 0x1E )
    {
      v10 = PRNG();
      s32_div_f(v10, 100);
      if ( v11 >= 25 )
      {
        v12 = PRNG();
        s32_div_f(v12, 6);
        v9 = *((ushort *)Unknown_20eabfc + v13 + 6 * v3);
      }
      else
      {
        v9 = 269;
      }
    }
    else
    {
      v9 = 268;
    }
  }
  else
  {
    v9 = 270;
  }
  if ( v7 == 11 )
  {
    if ( v8 == 1 )
    {
      v14 = 0;
    }
    else if ( v8 == 20 )
    {
      v14 = 2;
    }
    else
    {
      v14 = 5;
    }
  }
  else if ( v7 == 20 )
  {
    v14 = 1;
  }
  else
  {
    v14 = 3;
  }
  v15 = 0;
  do
  {
    if ( v15 != v14 )
      Function_203a574(*(uint *)(v1 + 128), v15, v9);
    v15 = (v15 + 1) & 0xFF;
  }
  while ( v15 < 4 );
  return 0;
}

//----- (02045A88) --------------------------------------------------------
int __fastcall ScriptCmd_CheckUgPeopleNum(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_206b3ec(v2);
  return 0;
}

//----- (02045AB8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckUgFossilNum(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_206b40c(v2);
  return 0;
}

//----- (02045AE8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckUgTrapsNum(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_206b42c(v2);
  return 0;
}

//----- (02045B18) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPoffinItem(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  char *v5
  int v6
  int v7
  uchar v8
  uchar *v9
  short v10
  int v11
  uint v12
  char v14

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = 0;
  v5 = &v14;
  do
  {
    v6 = ScriptHandler_LoadHWord(v1);
    *v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
    ++v4;
    ++v5;
  }
  while ( v4 < 5 );
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v9 = Function_202a93c(4u);
  v10 = Function_202a9e4(v9, (int)&v14, v8, 0);
  v11 = LoadVariableAreaAdress_10(*(uint *)(*(uint *)(v1 + 128) + 12));
  v12 = Function_202ab74(v11, v9);
  free((int)v9);
  if ( v12 == 0xFFFF )
    *v3 = -1;
  else
    *v3 = v10;
  return 0;
}

//----- (02045BA8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPoffinCaseStatus(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_10(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_202ab54(v4) != 0xFFFF;
  return 0;
}

//----- (02045BE4) --------------------------------------------------------
int __fastcall Function_2045be4(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_10(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_202acc0(v4);
  return 0;
}

//----- (02045C10) --------------------------------------------------------
int __fastcall Function_2045c10(int a1)
{
  int v1
  uchar *v2
  uint v3
  int v4
  ushort *v5
  int v6

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = *v2;
  v4 = ScriptHandler_LoadHWord(a1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  if ( v3 > 4 )
    ErrorHandler();
  *v5 = Function_206b16c(v6, v3);
  return 0;
}

//----- (02045C50) --------------------------------------------------------
int __fastcall ScriptCmd_CheckFirstTimeChampion(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  ushort *v6
  uchar *v7
  int v8
  int result
  int v10

  v10 = a4;
  v4 = a1;
  v5 = ScriptHandler_LoadHWord(a1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v5);
  v7 = Function_202444c(*(uint *)(*(uint *)(v4 + 128) + 12), 0x20u, &v10);
  v8 = (int)v7;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      *v6 = Function_202e174((int)v7, 0);
      free(v8);
      result = 1;
    }
    else
    {
      if ( v10 == 2 )
      {
        *v6 = 0;
        free((int)v7);
      }
      else
      {
        *v6 = 0;
      }
      result = 1;
    }
  }
  else
  {
    *v6 = 0;
    free((int)v7);
    result = 1;
  }
  return result;
}

//----- (02045CB8) --------------------------------------------------------
int __fastcall ScriptCmd_ChoosePokeDCare(int a1)
{
  int v1
  int v2
  char v3
  int *v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  *v4 = Function_203d410(32, *(uint *)(v1 + 128), v3);
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (02045CFC) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokeDCare(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  ushort *v5
  int *v6
  int result

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  if ( !*v6 )
    ErrorHandler();
  *v3 = Function_203d408(*v6);
  if ( *v3 == 7 )
    *v3 = 255;
  *v5 = Function_203d438(*v6);
  *v5 = *v5 == 1;
  free(*v6);
  result = 0;
  *v6 = 0;
  return result;
}

//----- (02045D70) --------------------------------------------------------
int __fastcall Function_2045d70(int a1)
{
  int v1
  uchar *v2
  int v3
  int v4
  ushort *v5
  uint v6
  ushort v7

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v2 + 1;
  v3 = *v2;
  v4 = ScriptHandler_LoadHWord(a1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  if ( (uint)v3 > 0x64 )
    v3 = 100;
  v6 = PRNG();
  s32_div_f(v6, 101);
  *v5 = v7 <= v3;
  return 0;
}

//----- (02045DB0) --------------------------------------------------------
int __fastcall ScriptCmd_HiddenMachineEffect(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  int v5
  int v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = *(uint *)(v1 + 128);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      ((void (__fastcall *)(int, int, int, int))dword_224899C[0])(v6, v5, 1, 32);
    }
    else if ( v3 == 2 )
    {
      ((void (__fastcall *)(int, int, int, int))dword_224899C[0])(v6, v5, 2, 32);
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    ((void (__fastcall *)(int, int, uint, int))dword_224899C[0])(v6, v5, 0, 32);
  }
  return 1;
}

//----- (02045E14) --------------------------------------------------------
int __fastcall ScriptCmd_CheckMasterRank(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_206b374(v2);
  return 0;
}

//----- (02045E44) --------------------------------------------------------
int __fastcall ScriptCmd_CameraBumpEffect(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  if ( ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2) )
    ((void (__fastcall *)(uint))dword_223E4EC[0])(*(uint *)(*(uint *)(v1 + 128) + 16));
  else
    ((void (__fastcall *)(uint))dword_223E384[0])(*(uint *)(*(uint *)(v1 + 128) + 16));
  return 1;
}

//----- (02045E78) --------------------------------------------------------
int __fastcall ScriptCmd_StoreActHeroFriendCode(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_2039074(*(uint *)(*(uint *)(v1 + 128) + 12));
  return 0;
}

//----- (02045EA0) --------------------------------------------------------
int __fastcall ScriptCmd_StoreActOtherFriendCode(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_1d(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_202af94(v4);
  return 0;
}

//----- (02045ECC) --------------------------------------------------------
int __fastcall Function_2045ecc(int a1)
{
  int v1
  int v2
  uint v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_c(*(uint *)(*(uint *)(v1 + 128) + 12));
  if ( ((v3 + 65401) & 0xFFFF) <= 1 )
    Function_2028828(v4);
  return 0;
}

//----- (02045F04) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPlate(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  ushort *v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  *v5 = 0;
  if ( v3 >= 0x12A && v3 <= 0x139 )
    *v5 = 1;
  return 0;
}

//----- (02045F48) --------------------------------------------------------
int __fastcall ScriptCmd_ComparePhraseBoxInput(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int *v12
  ushort **v13
  int v14
  int v15
  int v16
  int v17
  ushort *v18
  ushort *v19
  int v20
  int v21
  int v22

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = ScriptHandler_LoadHWord(v1);
  v9 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v8);
  v10 = ScriptHandler_LoadHWord(v1);
  v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v10);
  v12 = (int *)Function_200b358(0x20u);
  v13 = (ushort **)LoadFromMsgNARC(0, 26, 372, 0x20u);
  Function_200be48(v12, 0, v5, v14);
  Function_200be48(v12, 1u, v7, v15);
  Function_200be48(v12, 2u, v9, v16);
  Function_200be48(v12, 3u, v11, v17);
  v18 = Function_200b29c((uint *)v12, v13, 1u, 0x20u);
  v19 = Function_200b1ec_CallMsgDecrypt(v13, 0);
  *v3 = Function_2023be0((int)v18, (int)v19) == 0;
  Function_20237bc_FreeMsg((int)v18, v20);
  Function_20237bc_FreeMsg((int)v19, v21);
  Function_200b190((ushort *)v13);
  Function_200b3f0((uint *)v12, v22);
  return 0;
}

//----- (02046038) --------------------------------------------------------
int __fastcall ScriptCmd_ActivateMysteryGift(int a1)
{
  int v1

  v1 = LoadVariableAreaAdress_0(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_2025d6c(v1, 1);
  return 0;
}

//----- (02046050) --------------------------------------------------------
int __fastcall Function_2046050(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int *v5

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0xFu);
  *v4 = Function_205bc50(*v5);
  return 0;
}

//----- (02046080) --------------------------------------------------------
int Function_2046080()
{
  Function_2039734();
  return 0;
}

//----- (0204608C) --------------------------------------------------------
int Function_204608c()
{
  Function_2039794();
  return 0;
}

//----- (02046098) --------------------------------------------------------
int __fastcall Function_2046098(int a1)
{
  Function_203a7a8(*(uint *)(a1 + 128));
  return 0;
}

//----- (020460A8) --------------------------------------------------------
int __fastcall ScriptCmd_DarkraiFunction(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  uint v5
  int v6
  uint v7
  int v8
  uint *v9

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = LoadVariableAreaAdress_6(*(uint *)(*(uint *)(v1 + 128) + 12));
  v9 = (uint *)AddVariableAreaAdress_6_MapData4(v8);
  *v9 = v3;
  v9[2] = v5;
  v9[3] = v7;
  v9[1] = -1;
  v9[4] = 1;
  return 0;
}

//----- (02046108) --------------------------------------------------------
int __fastcall Function_2046108(int a1)
{
  int v1
  int v2
  int v3
  uchar *v4
  int v5
  uint *v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v4 + 1;
  v5 = *v4;
  v6 = GetAdressOfSpriteID(*(uint *)(*(uint *)(v1 + 128) + 56), v3);
  if ( !v6 )
    ErrorHandler();
  Function_2062d80(v6, v5);
  return 0;
}

//----- (02046144) --------------------------------------------------------
int __fastcall ScriptCmd_StoreTrainerCardStar(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2071f28(v2);
  return 0;
}

//----- (0204616C) --------------------------------------------------------
int __fastcall ScriptCmd_ShowSaveBox(int a1)
{
  int v1
  uint *v2

  v1 = *(uint *)(a1 + 128);
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x28u);
  if ( !Function_20247e0(*(uint *)(v1 + 12)) )
  {
    *v2 = ((int (__fastcall *)(int, int, int))dword_21E1F98[0])(v1, 4, 3);
    ((void (*)(void))dword_21E1F04[0])();
  }
  return 0;
}

//----- (0204619C) --------------------------------------------------------
int __fastcall ScriptCmd_HideSaveBox(int a1)
{
  int v1
  uint *v2

  v1 = *(uint *)(a1 + 128);
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x28u);
  if ( !Function_20247e0(*(uint *)(v1 + 12)) )
  {
    ((void (__fastcall *)(uint))dword_21E1F7C[0])(*v2);
    ((void (__fastcall *)(uint))dword_21E1FF4[0])(*v2);
  }
  return 0;
}

//----- (020461C8) --------------------------------------------------------
int __fastcall Function_20461c8(int a1)
{
  uchar *v1

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  Function_2070428(*(uint *)(a1 + 128), *v1);
  return 0;
}

//----- (020461E0) --------------------------------------------------------
int __fastcall ScriptCmd_ShowBTowerSome(uint *a1)
{
  uint *v1
  int v2
  uchar *v3
  int *v4
  int v5
  int v6
  int v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(a1[32], 0x13u);
  v3 = (uchar *)v1[2];
  v4 = (int *)v2;
  v1[2] = v3 + 1;
  v5 = *v3;
  v6 = malloc2(0xBu, 44);
  MI_CpuFill8((ushort *)v6, 0, 0x2Cu);
  *v4 = v6;
  if ( ((v5 + 251) & 0xFFu) > 1 )
    v7 = 0;
  else
    v7 = *(uint *)(v1[32] + 172);
  *(uint *)v6 = v7;
  *(uint *)(v6 + 4) = LoadPlayerDataAdress(*(uint *)(v1[32] + 12));
  *(uchar *)(v6 + 36) = v5;
  *(uint *)(v6 + 8) = *(uint *)(v1[32] + 12);
  *(uint *)(v6 + 28) = **(uint **)(v1[32] + 28);
  *(uint *)(v6 + 12) = *(uint *)(v1[32] + 156);
  *(uint *)(v6 + 16) = *(uint *)(v1[32] + 152);
  *(uint *)(v6 + 32) = *(uint *)(v1[32] + 188);
  Function_2050a38(v1[29], (int)&Unknown_20f8be0, v6);
  ScriptHandler_AddFunction((int)v1, (int)Function_2041cc8);
  return 1;
}

//----- (02046294) --------------------------------------------------------
int __fastcall ScriptCmd_FloralClockAnimation(int a1)
{
  int v1
  int v2
  uint *v3
  int v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x10u);
  v4 = ScriptHandler_GetSomeScriptAddresses(v2, 1u);
  ((void (__fastcall *)(int, int, uint, uint))dword_224B67C[0])(v2, v4, *(uint *)(v1 + 120), *v3);
  return 1;
}

//----- (020462C0) --------------------------------------------------------
int __fastcall Function_20462c0(int *a1, int a2)
{
  int *v2
  int result

  v2 = a1;
  result = *(uint *)(*(uint *)(a2 + 4) + 12);
  if ( result )
  {
    ((void (*)(void))dword_21D5F24[0])();
    result = Call_RemoveTaskFromTaskList(v2);
  }
  return result;
}

//----- (020462DC) --------------------------------------------------------
int __fastcall ScriptCmd_ActTeamGalacticEvents(int a1)
{
  AddTaskToTaskList1((int)Function_20462c0, *(uint *)(a1 + 128), 0x80u);
  return 1;
}

//----- (020462F4) --------------------------------------------------------
int __fastcall Function_20462f4(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1 + 128;
  v2 = *(uint *)v1;
  v3 = LoadVariableAreaAdress_6(*(uint *)(*(uint *)v1 + 12));
  v4 = GetVariableAreaAdress_6_66(v3);
  ((void (__fastcall *)(uint, int))dword_21D5F24[0])(*(uint *)(*(uint *)(v2 + 4) + 12), v4);
  return 1;
}

//----- (02046314) --------------------------------------------------------
int __fastcall ScriptCmd_2d8(uint *a1)
{
  uchar *v1

  v1 = (uchar *)a1[2];
  a1[2] = v1 + 1;
  ((void (__fastcall *)(uint, uint, uint, int))dword_224CDA4[0])(
    a1[29],
    a1[32],
    *(&Unknown_2100af0 + *v1),
    3);
  return 1;
}

//----- (02046340) --------------------------------------------------------
int __fastcall ScriptCmd_ShowBArcadeRecors(int a1)
{
  int v1
  int *v2
  int v3
  char v4
  int v5
  char v6
  int v7
  short v8

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  *v2 = Function_203e564(*(uint *)(v1 + 128), v4, v6, v8, 0x20u);
  ScriptHandler_AddFunction(v1, (int)Function_2041cc8);
  return 1;
}

//----- (020463B4) --------------------------------------------------------
int __fastcall Function_20463b4(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  *v2 = Function_203e608(*(uint *)(v1 + 128), 0x20u);
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (020463E4) --------------------------------------------------------
int __fastcall Function_20463e4(int a1)
{
  int *v1

  v1 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  free(*v1);
  *v1 = 0;
  return 1;
}

//----- (02046400) --------------------------------------------------------
int __fastcall Function_2046400(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  ushort *v5
  int v6
  ushort *v7
  int v8

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = *(uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u) + 2 * v3;
  *v5 = *(ushort *)(v8 + 8);
  *v7 = *(ushort *)(v8 + 14);
  return 0;
}

//----- (0204645C) --------------------------------------------------------
int __fastcall Function_204645c(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  ushort *v5
  int v6
  ushort *v7
  int v8
  ushort *v9
  char v10
  int v11
  int v12
  int v13
  int v14
  ushort *v16

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = ScriptHandler_LoadHWord(v1);
  v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v8);
  v16 = v9;
  *v3 = 4095;
  *v5 = 4095;
  *v7 = 4095;
  *v9 = 4095;
  v10 = PRNG();
  v11 = v10 & 7;
  *v3 = *((ushort *)&Unknown_20eab8c[2] + v11 + 1);
  v12 = Function_2046524(v11, 4095, 4095, 4095);
  if ( v12 != 8 )
    *v5 = *((ushort *)&Unknown_20eab8c[2] + v12 + 1);
  v13 = Function_2046524(v11, v12, 4095, 4095);
  if ( v13 != 8 )
    *v7 = *((ushort *)&Unknown_20eab8c[2] + v13 + 1);
  v14 = Function_2046568(4095, 4095, 4095, 4095);
  if ( v14 != 5 )
    *v16 = *((ushort *)Unknown_20eab8c + v14);
  return 0;
}

//----- (02046524) --------------------------------------------------------
int __fastcall Function_2046524(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  uint v7
  int v8
  ushort v9
  int result
  int v11

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v11 = a4;
  v7 = 0;
  do
  {
    v8 = PRNG();
    u32_div_f(v8, 9);
    LOBYTE(result) = v9;
    if ( v9 == 8 )
      break;
    v7 = (v7 + 1) & 0xFF;
    if ( v7 >= 8 )
    {
      LOBYTE(result) = 8;
      return (uchar)result;
    }
  }
  while ( v9 == v4 || v9 == v5 || v9 == v6 || v9 == v11 );
  return (uchar)result;
}

//----- (02046568) --------------------------------------------------------
int __fastcall Function_2046568(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  uint v7
  int v8
  ushort v9
  int result
  int v11

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v11 = a4;
  v7 = 0;
  do
  {
    v8 = PRNG();
    u32_div_f(v8, 6);
    LOBYTE(result) = v9;
    if ( v9 == 5 )
      break;
    v7 = (v7 + 1) & 0xFF;
    if ( v7 >= 8 )
    {
      LOBYTE(result) = 5;
      return (uchar)result;
    }
  }
  while ( v9 == v4 || v9 == v5 || v9 == v6 || v9 == v11 );
  return (uchar)result;
}

//----- (020465AC) --------------------------------------------------------
int __fastcall Function_20465ac(int a1)
{
  int v1
  int v2
  char v3
  int v4
  int v5
  int v6
  ushort *v7
  int v8

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  if ( Function_2039074(*(uint *)(*(uint *)(v1 + 128) + 12)) )
  {
    *v7 = 1;
    Function_203e6c0(*(uint *)(v1 + 128), v5, v3, v8);
    ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  }
  else
  {
    *v7 = 0;
  }
  return 1;
}

//----- (02046624) --------------------------------------------------------
int __fastcall Function_2046624(int a1)
{
  int v1
  int v2
  short *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (short *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  if ( Function_2039074(*(uint *)(*(uint *)(v1 + 128) + 12)) )
    Function_205749c(*(uint *)(v1 + 116), *v3);
  return 1;
}

//----- (02046658) --------------------------------------------------------
int __fastcall Function_2046658(int a1)
{
  Function_20985e4(*(uint *)(a1 + 116), *(uint *)(*(uint *)(a1 + 128) + 12));
  return 1;
}

//----- (0204666C) --------------------------------------------------------
int __fastcall Function_204666c(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = 0;
  if ( dword_21BF6C0 & 1 )
    *v3 = 1;
  if ( dword_21BF6C0 & 2 )
    *v3 = 1;
  return 0;
}

//----- (020466A4) --------------------------------------------------------
int __fastcall Function_20466a4(int a1)
{
  int v1
  int v2
  int v3
  int v4
  ushort *v5
  int v6
  ushort *v7
  int v8
  ushort *v9
  int v10
  ushort *v11
  ushort *v12
  uint v13
  ushort *v15

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v15 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = ScriptHandler_LoadHWord(v1);
  v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v8);
  v10 = ScriptHandler_LoadHWord(v1);
  v11 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v10);
  v12 = v11;
  *v15 = 0;
  *v5 = 0;
  *v7 = 0;
  *v9 = 0;
  *v11 = 0;
  v13 = Function_204676c(*(uint *)(v2 + 12));
  if ( ((v13 >> 1) & 1) == 1 )
    *v15 = 1;
  if ( ((v13 >> 2) & 1) == 1 )
    *v5 = 1;
  if ( ((v13 >> 3) & 1) == 1 )
    *v7 = 1;
  if ( ((v13 >> 4) & 1) == 1 )
    *v9 = 1;
  if ( ((v13 >> 5) & 1) == 1 )
    *v12 = 1;
  return 1;
}

//----- (0204676C) --------------------------------------------------------
int __fastcall Function_204676c(int a1)
{
  int v1
  int v2
  int i
  int *v4
  int v5
  int v6
  int v7
  int v8
  uint v9
  int v10
  uint *v11
  int v13
  uint *v14
  uint *v15

  v13 = a1;
  v1 = 0;
  v15 = (uint *)LoadPokePartyAdress(a1);
  v2 = GetNrOfPkmnInParty((int)v15);
  for ( i = 0; i < v2; ++i )
  {
    v4 = GetAdrOfPkmnInParty(v15, i);
    if ( GetPkmnData(v4, 5u, 0) == 479 && !GetPkmnData(v4, 0x4Cu, 0) )
      v1 |= 1 << GetPkmnData(v4, 0x70u, 0);
  }
  v5 = LoadVariableAreaAdress_8(v13);
  v6 = 0;
  do
  {
    Function_2026218(v5, v6);
    Function_2026220_Dummy();
    v8 = v7;
    if ( GetBoxPkmnData(v7, 5u, 0) == 479 && !GetBoxPkmnData(v8, 0x4Cu, 0) )
      v1 |= 1 << GetBoxPkmnData(v8, 0x70u, 0);
    ++v6;
  }
  while ( v6 < 2 );
  v14 = (uint *)LoadVariableAreaAdress_25(v13);
  v9 = 0;
  do
  {
    v10 = 0;
    do
    {
      v11 = Function_2079c9c(v14, v9, v10);
      if ( GetBoxPkmnData((int)v11, 5u, 0) == 479 && !GetBoxPkmnData((int)v11, 0x4Cu, 0) )
        v1 |= 1 << GetBoxPkmnData((int)v11, 0x70u, 0);
      ++v10;
    }
    while ( v10 < 30 );
    ++v9;
  }
  while ( v9 < 0x12 );
  return v1;
}

//----- (02046868) --------------------------------------------------------
int __fastcall Function_2046868(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_202cfec(v3, v2);
  return 0;
}

//----- (02046888) --------------------------------------------------------
int __fastcall Function_2046888(int a1)
{
  int v1
  int v2
  int v3
  uint v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  ((void (__fastcall *)(int, uint))dword_224F158[0])(v2, v4);
  return 0;
}

//----- (020468AC) --------------------------------------------------------
int __fastcall Function_20468ac(int a1)
{
  int v1
  int v2
  int v3
  uint v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  ((void (__fastcall *)(int, uint))dword_224F16C[0])(v2, v4);
  return 0;
}

//----- (020468D0) --------------------------------------------------------
int __fastcall Function_20468d0(int a1)
{
  ((void (__fastcall *)(uint))dword_2249FD0[0])(*(uint *)(a1 + 128));
  return 0;
}

//----- (020468E0) --------------------------------------------------------
int __fastcall Function_20468e0(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  int v5
  int v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = Function_20182a4(0xBu);
  v5 = Function_20182a4(4u);
  v6 = Function_20182a4(0x20u);
  if ( v3 )
  {
    if ( v4 != dword_21C07E8 )
      ErrorHandler();
    if ( v6 != dword_21C07EC )
      ErrorHandler();
  }
  else
  {
    dword_21C07E8 = v4;
    dword_21C07E4 = v5;
    dword_21C07EC = v6;
  }
  return 0;
}

//----- (0204693C) --------------------------------------------------------
int __fastcall Function_204693c(int a1)
{
  int v1

  v1 = a1;
  Function_203e714(*(uint *)(a1 + 128));
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (02046958) --------------------------------------------------------
int __fastcall Function_2046958(int a1)
{
  int v1
  int v2
  int v3
  uint v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  ((void (__fastcall *)(int, uint))dword_224E884[0])(v2, v4);
  return 0;
}

//----- (0204697C) --------------------------------------------------------
int __fastcall Function_204697c(int a1)
{
  ((void (__fastcall *)(uint))dword_224E8A8[0])(*(uint *)(a1 + 128));
  return 0;
}

//----- (0204698C) --------------------------------------------------------
int __fastcall Function_204698c(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  long long v5

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  LODWORD(v5) = Function_20138ec();
  *v4 = v5 - *(ull *)(v2 + 196) >= 120;
  return 0;
}

//----- (020469D0) --------------------------------------------------------
int __fastcall ScriptCmd_PortalEffect(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int i
  int *v7
  uint *v8
  uint *v10

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v10 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_2077a9c((int)v10, v4);
  v5 = GetNrOfPkmnInParty((int)v10);
  for ( i = 0; i < v5; ++i )
  {
    v7 = GetAdrOfPkmnInParty(v10, i);
    if ( !GetPkmnData(v7, 0x4Cu, 0) && GetPkmnData(v7, 5u, 0) == 487 )
    {
      v8 = (uint *)LoadPokedexDataAdress(*(uint *)(v2 + 12));
      Function_202736c(v8, v7);
    }
  }
  return 0;
}

//----- (02046A4C) --------------------------------------------------------
int __fastcall Function_2046a4c(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  uint *v6
  int *v7
  ushort *v9

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v9 = 0;
  v3 = LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v4 = GetNrOfPkmnInParty(v3);
  v5 = 0;
  if ( v4 <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
    v7 = GetAdrOfPkmnInParty(v6, v5);
    if ( !GetPkmnData(v7, 0x4Cu, 0) && GetPkmnData(v7, 5u, 0) == 486 && GetPkmnData(v7, 0x6Eu, 0) == 1 )
      break;
    if ( ++v5 >= v4 )
      return 0;
  }
  *v9 = 1;
  return 0;
}

//----- (02046AD4) --------------------------------------------------------
int __fastcall ScriptCmd_Pokemart(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint v5
  int v6
  int v7
  int v8
  uint v9
  int *v10
  ushort v12[1]

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = LoadTrainerDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
    if ( CheckBadge(v6, v5) == 1 )
      v4 = (v4 + 1) & 0xFF;
    v7 = (v5 + 1) << 24;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 8 );
  switch ( (uchar)v7 )
  {
    case 0:
      v8 = 1;
      break;
    case 1:
    case 2:
      v8 = 2;
      break;
    case 3:
    case 4:
      v8 = 3;
      break;
    case 5:
    case 6:
      v8 = 4;
      break;
    case 7:
      v8 = 5;
      break;
    case 8:
      v8 = 6;
      break;
    default:
      v8 = 1;
      break;
  }
  v9 = 0;
  do
  {
    v10 = &Unknown_20ebafc[v9];
    if ( v8 >= *((ushort *)v10 + 1) )
    {
      v12[v3] = *(ushort *)v10;
      v3 = (v3 + 1) & 0xFF;
    }
    v9 = (v9 + 1) & 0xFF;
  }
  while ( v9 < 0x13 );
  v12[v3] = -1;
  ((void (__fastcall *)(uint, uint))dword_224CDA4[0])(*(uint *)(v1 + 116), *(uint *)(v1 + 128));
  return 1;
}

//----- (02046B9C) --------------------------------------------------------
int __fastcall ScriptCmd_Pokemart1(int a1)
{
  int v1
  int v2
  uint v3
  uint v4
  BOOL v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = v3;
  v5 = v3 == 8 || v3 == 9 || v3 == 10 || v3 == 11 || v3 == 12 || v3 == 13 || v3 == 19;
  ((void (__fastcall *)(uint, uint, uint, uint, BOOL))dword_224CDA4[0])(
    *(uint *)(v1 + 116),
    *(uint *)(v1 + 128),
    *(&Unknown_2100b1c + v4),
    0,
    v5);
  return 1;
}

//----- (02046BF4) --------------------------------------------------------
int __fastcall ScriptCmd_Pokemart2(int a1)
{
  int v1
  int v2
  uint v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  ((void (__fastcall *)(uint, uint, uint, int, bool))dword_224CDA4[0])(
    *(uint *)(v1 + 116),
    *(uint *)(v1 + 128),
    *(&Unknown_2100af8 + v3),
    1,
    v3 <= 1);
  return 1;
}

//----- (02046C34) --------------------------------------------------------
int __fastcall ScriptCmd_Pokemart3(int a1)
{
  int v1
  int v2
  uint v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  ((void (__fastcall *)(uint, uint, int, int, uint))dword_224CDA4[0])(
    *(uint *)(v1 + 116),
    *(uint *)(v1 + 128),
    Unknown_2100b00[v3],
    2,
    0);
  return 1;
}

//----- (02046C6C) --------------------------------------------------------
int __fastcall ScriptCmd_SprtSave(int a1)
{
  Function_203e518(*(uint *)(*(uint *)(a1 + 128) + 16));
  return 1;
}

//----- (02046C7C) --------------------------------------------------------
int __fastcall ScriptCmd_StartOvation(int a1)
{
  int v1
  int *v2
  int v3
  char v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  Function_2094754(*v2, v4);
  return 0;
}

//----- (02046CAC) --------------------------------------------------------
int __fastcall ScriptCmd_StopOvation(int a1)
{
  int v1
  int v2

  v1 = a1;
  ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v2 = ScriptHandler_LoadHWord(v1);
  *(uint *)(v1 + 100) = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  ScriptHandler_AddFunction(v1, (int)Function_2046ce0);
  return 1;
}

//----- (02046CE0) --------------------------------------------------------
BOOL __fastcall Function_2046ce0(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  return Function_209476c(*v2, *(uint *)(v1 + 100) & 0xFF);
}

//----- (02046CFC) --------------------------------------------------------
int __fastcall Function_2046cfc(int a1, int a2, int a3, int a4)
{
  int v4
  int *v5
  int v6
  ushort *v7
  int v8
  char v9
  int v10
  char v11
  int v12
  char v13
  int v14
  int v15
  uint *v16
  int *v17
  ushort *v18
  int v19
  uint *v20
  char v22
  char v23
  char v24
  char v25
  char v26
  char v27
  int *v28
  ushort *v29
  ushort *v30
  int v31
  int v32
  int v33
  int v34
  int v35

  v35 = a4;
  v4 = a1;
  v5 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v6 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v4 + 128));
  v7 = (ushort *)LoadTrainerDataAdress(v6);
  v8 = ScriptHandler_LoadHWord(v4);
  v9 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v8);
  v10 = ScriptHandler_LoadHWord(v4);
  v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v10);
  v12 = ScriptHandler_LoadHWord(v4);
  v13 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v12);
  v14 = ScriptHandler_LoadHWord(v4);
  v15 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v14);
  v16 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v4 + 128) + 12));
  v17 = GetAdrOfPkmnInParty(v16, v15);
  v18 = Function_2025f04(v7, 4u);
  v22 = v11;
  v23 = v9;
  v24 = v13;
  v19 = LoadFlagAdress(*(uint *)(*(uint *)(v4 + 128) + 12));
  v25 = Function_206a954(v19);
  v20 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(v4 + 128) + 12));
  v26 = Function_2027474(v20);
  v27 = v15;
  v29 = v18;
  v28 = v17;
  v30 = v7;
  v31 = LoadVariableAreaAdress_e(*(uint *)(*(uint *)(v4 + 128) + 12));
  v32 = LoadPlayerDataAdress(*(uint *)(*(uint *)(v4 + 128) + 12));
  v33 = *(uint *)(*(uint *)(v4 + 128) + 12);
  v34 = LoadVariableAreaAdress_16(*(uint *)(*(uint *)(v4 + 128) + 12));
  *v5 = Function_2093800((int)&v22);
  Function_20237bc_FreeMsg((int)v18, (int)v5);
  return 0;
}

//----- (02046E14) --------------------------------------------------------
int __fastcall Function_2046e14(int a1)
{
  int v1
  int *v2
  int v3
  ushort v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = GetMapName(**(uint **)(*(uint *)(v1 + 128) + 28));
  Function_2094c44(*v2, *(uint *)(*(uint *)(v1 + 128) + 12), v4, *(uint *)(*(uint *)(v1 + 128) + 156));
  Function_2093ad4(*v2);
  return 0;
}

//----- (02046E60) --------------------------------------------------------
int __fastcall Function_2046e60(int a1)
{
  int v1
  int *v2
  int *v3
  int v4
  int v5
  int v6
  uint v7

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_2094630(*v2, v5, *v3, v7);
  return 0;
}

//----- (02046EB4) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarOtherEntry(int a1)
{
  int v1
  int *v2
  int **v3
  int v4
  int v5
  int v6
  uint v7

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_2094648(*v2, v5, *v3, v7);
  return 0;
}

//----- (02046F08) --------------------------------------------------------
int __fastcall Function_2046f08(int a1)
{
  int v1
  int *v2
  int **v3
  int v4
  int v5
  int v6
  uint v7

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_2094680(*v2, v5, *v3, v7);
  return 0;
}

//----- (02046F5C) --------------------------------------------------------
int __fastcall ScriptCmd_SetvatHiroEntry(int a1)
{
  int v1
  int *v2
  int v3
  int v4
  int v5
  uint v6

  v1 = a1;
  ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  Function_200b60c(*v2, v6, v4, 1, 0, 1);
  return 0;
}

//----- (02046FB8) --------------------------------------------------------
int __fastcall Function_2046fb8(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  Function_20943b0(*v2);
  ScriptHandler_AddFunction(v1, (int)Function_2046fdc);
  return 1;
}

//----- (02046FDC) --------------------------------------------------------
BOOL __fastcall Function_2046fdc(int a1)
{
  int *v1

  v1 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  return Function_20944cc(*v1);
}

//----- (02046FF0) --------------------------------------------------------
int __fastcall ScriptCmd_BlackFlashEffect(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  Function_20933f8(*(uint *)(v1 + 116), *v2);
  return 1;
}

//----- (0204700C) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarTypeContest(int a1)
{
  int v1
  uchar **v2
  int *v3
  int v4
  uint v5

  v1 = a1;
  v2 = (uchar **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  Function_20946a4(*v2, *v3, v5);
  return 0;
}

//----- (02047048) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarRankContest(int a1)
{
  int v1
  int *v2
  int *v3
  int v4
  uint v5

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  Function_20946cc(*v2, *v3, v5);
  return 0;
}

//----- (02047084) --------------------------------------------------------
int __fastcall Function_2047084(int a1)
{
  int v1
  int *v2
  int **v3
  int v4
  uint v5

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  Function_20946f0(*v2, *v3, v5);
  return 0;
}

//----- (020470C0) --------------------------------------------------------
int __fastcall Function_20470c0(int a1)
{
  int v1
  int *v2
  int v3
  ushort *v4
  int v5

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = *v2;
  *v4 = Function_2094750();
  return 0;
}

//----- (020470F0) --------------------------------------------------------
int __fastcall Function_20470f0(int a1)
{
  int v1
  int *v2
  int **v3
  int v4
  uint v5

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  Function_2094720(*v2, *v3, v5);
  return 0;
}

//----- (0204712C) --------------------------------------------------------
int __fastcall Function_204712c(int a1)
{
  int v1
  int *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2094790(*v2);
  return 0;
}

//----- (0204715C) --------------------------------------------------------
int __fastcall ScriptCmd_StorePeopleIdContest(int a1)
{
  int v1
  int *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_20947a4(*v2);
  return 0;
}

//----- (0204718C) --------------------------------------------------------
int __fastcall Function_204718c(int a1)
{
  int v1
  int *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_20947c8(*v2);
  return 0;
}

//----- (020471BC) --------------------------------------------------------
int __fastcall Function_20471bc(int a1)
{
  int v1
  int *v2
  int v3
  int v4
  int v5
  ushort *v6

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  *v6 = Function_20947d8(*v2, v4);
  return 0;
}

//----- (02047200) --------------------------------------------------------
int __fastcall ScriptCmd_ActPeopleContest(int a1)
{
  int v1
  int *v2
  int v3
  int v4
  int v5
  ushort *v6

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  *v6 = Function_20947f0(*v2, v4);
  return 0;
}

//----- (02047244) --------------------------------------------------------
int __fastcall Function_2047244(int a1)
{
  int v1
  int *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2094804(*v2);
  return 0;
}

//----- (02047274) --------------------------------------------------------
int __fastcall Function_2047274(int a1)
{
  int v1
  uchar **v2
  int v3
  ushort *v4
  int v5
  ushort *v6
  int v7
  ushort *v8
  int v9
  ushort *v10

  v1 = a1;
  v2 = (uchar **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = ScriptHandler_LoadHWord(v1);
  v10 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v9);
  Function_2094828(*v2, v4, v6, v8, v10);
  return 0;
}

//----- (020472E8) --------------------------------------------------------
int __fastcall Function_20472e8(int a1)
{
  int v1
  int *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2094868(*v2);
  return 0;
}

//----- (02047318) --------------------------------------------------------
int __fastcall Function_2047318(int a1)
{
  int v1
  int *v2
  int *v3
  int v4
  uint v5

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  Function_2094898(*v2, *v3, v5);
  return 0;
}

//----- (02047358) --------------------------------------------------------
int __fastcall Function_2047358(int a1)
{
  int v1
  int *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2094904(*v2);
  return 0;
}

//----- (02047388) --------------------------------------------------------
int __fastcall Function_2047388(int a1)
{
  int *v1

  v1 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  Function_2094850(*v1);
  return 0;
}

//----- (020473A0) --------------------------------------------------------
int __fastcall Function_20473a0(int a1)
{
  int v1

  v1 = *(uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  Function_2094860();
  return 0;
}

//----- (020473B8) --------------------------------------------------------
int __fastcall ScriptCmd_FlashContest(int a1)
{
  int v1
  int *v2
  int v3
  int v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  Function_2094a58(*v2, v4);
  return 0;
}

//----- (020473E4) --------------------------------------------------------
int __fastcall ScriptCmd_EndFlash(int a1)
{
  int v1

  v1 = a1;
  ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  ScriptHandler_AddFunction(v1, (int)Function_2047404);
  return 1;
}

//----- (02047404) --------------------------------------------------------
BOOL __fastcall Function_2047404(int a1)
{
  int *v1

  v1 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  return Function_2094b1c(*v1) == 1;
}

//----- (02047424) --------------------------------------------------------
int __fastcall ScriptCmd_CarpetAnimation(int a1)
{
  ((void (__fastcall *)(uint))dword_21EF3FC[0])(*(uint *)(*(uint *)(*(uint *)(a1 + 128) + 4) + 28));
  return 0;
}

//----- (02047438) --------------------------------------------------------
int __fastcall Function_2047438(int a1)
{
  ((void (__fastcall *)(uint))dword_21EF3DC[0])(*(uint *)(*(uint *)(*(uint *)(a1 + 128) + 4) + 28));
  return 0;
}

//----- (0204744C) --------------------------------------------------------
int __fastcall Function_204744c(int a1)
{
  int v1
  uchar **v2
  int v3
  ushort *v4
  int v6
  int v7
  int v8
  int v9
  char v10

  v1 = a1;
  v2 = (uchar **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x14u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  Function_2094bb4(*v2, (int *)&v10, &v9, &v8, &v7, &v6);
  *v4 = v9 == 1 || v8 == 1 || v7 == 1 || v6 == 1;
  return 0;
}

//----- (020474AC) --------------------------------------------------------
int __fastcall ScriptCmd_ShowLinkCountRecord(int a1)
{
  ((void (__fastcall *)(uint))dword_2247A0C[0])(*(uint *)(a1 + 116));
  return 1;
}

//----- (020474B8) --------------------------------------------------------
int __fastcall Function_20474b8(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uchar v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200b824(*v4, v5, v7);
  return 0;
}

//----- (020474F4) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariableHero(int a1)
{
  int v1
  int v2
  int v3
  uchar *v4
  int *v5
  uint v6
  int v7

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v4 = *(uchar **)(v1 + 8);
  v5 = (int *)v3;
  *(uint *)(v1 + 8) = v4 + 1;
  v6 = *v4;
  v7 = GetOverWorldData_VariableAreaAdresses(v2);
  LoadTrainerDataAdress(v7);
  Function_200b498(*v5, v6);
  return 0;
}

//----- (02047528) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariableRival(int a1)
{
  int v1
  int v2
  int *v3
  uchar *v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v4 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v4 + 1;
  Function_200b4bc(*v3, *v4, *(uint *)(v2 + 12));
  return 0;
}

//----- (0204754C) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariableAlter(int a1)
{
  int v1
  int v2
  int *v3
  uchar *v4

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v4 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v4 + 1;
  Function_200b4e4(*v3, *v4, *(uint *)(v2 + 12));
  return 0;
}

//----- (02047570) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariablePokemon(int a1)
{
  int v1
  int v2
  int v3
  uchar *v4
  int *v5
  uint v6
  int v7
  int v8
  uint *v9
  int *v10

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v4 = *(uchar **)(v1 + 8);
  v5 = (int *)v3;
  *(uint *)(v1 + 8) = v4 + 1;
  v6 = *v4;
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v9 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v10 = GetAdrOfPkmnInParty(v9, v8);
  Function_200b538(*v5, v6, (int)v10);
  return 0;
}

//----- (020475B8) --------------------------------------------------------
int __fastcall Function_20475b8(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200b7ec(*v4, v5, v7);
  return 0;
}

//----- (020475F0) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariableItem(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200b70c(*v4, v5, v7);
  return 0;
}

//----- (02047628) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariableItemNum(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200b7b4(*v4, v5, v7);
  return 0;
}

//----- (02047660) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariableAttackItem(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7
  int v8

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = Function_207d268(v7);
  Function_200b630(*v4, v5, v8);
  return 0;
}

//----- (0204769C) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariableAttack(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200b630(*v4, v5, v7);
  return 0;
}

//----- (020476D4) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariableNumber(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  int v7
  int v8
  int v9

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = v7;
  v9 = Function_205dfc4(v7);
  Function_200b60c(*v4, v5, v8, v9, 1, 1);
  return 0;
}

//----- (0204771C) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarIdNumber(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  int v7
  uchar *v8
  int v9
  int v10
  int v12

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v12 = v7;
  v8 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v8 + 1;
  v9 = *v8;
  *(uint *)(v1 + 8) = v8 + 2;
  v10 = v8[1];
  if ( !v9 )
    v10 = Function_205dfc4(v7) & 0xFF;
  Function_200b60c(*v4, v5, v12, v10, v9, 1);
  return 0;
}

//----- (0204777C) --------------------------------------------------------
int __fastcall Function_204777c(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uchar *v7
  int v8
  int v9
  int v11

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadWord(v1);
  v7 = *(uchar **)(v1 + 8);
  v11 = v6;
  *(uint *)(v1 + 8) = v7 + 1;
  v8 = *v7;
  *(uint *)(v1 + 8) = v7 + 2;
  v9 = v7[1];
  if ( !v8 )
    v9 = Function_205dfc4(v6) & 0xFF;
  Function_200b60c(*v4, v5, v11, v9, v8, 1);
  return 0;
}

//----- (020477D0) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariableNickname(int a1)
{
  int v1
  int v2
  int v3
  uchar *v4
  int **v5
  uint v6
  int v7
  int v8
  uint *v9
  int *v10

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v4 = *(uchar **)(v1 + 8);
  v5 = (int **)v3;
  *(uint *)(v1 + 8) = v4 + 1;
  v6 = *v4;
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v9 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v10 = GetAdrOfPkmnInParty(v9, v8);
  Function_200b5cc(*v5, v6, (int)v10);
  return 0;
}

//----- (02047818) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarIdPokeBoxes(int a1)
{
  int v1
  int v2
  int v3
  uint *v4
  int v5
  uchar *v6
  int **v7
  uint v8
  int v9
  uint v10
  uint v11
  uint v12
  uint *v13

  v1 = a1;
  v2 = a1 + 128;
  v3 = *(uint *)v2;
  v4 = (uint *)LoadVariableAreaAdress_25(*(uint *)(*(uint *)v2 + 12));
  v5 = ScriptHandler_GetSomeScriptAddresses(v3, 0xFu);
  v6 = *(uchar **)(v1 + 8);
  v7 = (int **)v5;
  *(uint *)(v1 + 8) = v6 + 1;
  v8 = *v6;
  v9 = ScriptHandler_LoadHWord(v1);
  v10 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v9);
  v11 = s32_div_f(v10, 30);
  s32_div_f(v10, 30);
  v13 = Function_2079c9c(v4, v11, v12);
  Function_200b5cc(*v7, v8, (int)v13);
  return 0;
}

//----- (02047874) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariableObject(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200b928(*v4, v5, v7);
  return 0;
}

//----- (020478AC) --------------------------------------------------------
int __fastcall ScriptCmd_SetVariableTrainer(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200b960(*v4, v5, v7);
  return 0;
}

//----- (020478E4) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarWiFiSprite(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  uchar *v6
  int *v7
  uint v8
  int v9
  int v10
  int v11

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v4 = LoadTrainerDataAdress(v3);
  v5 = ScriptHandler_GetSomeScriptAddresses(v2, 0xFu);
  v6 = *(uchar **)(v1 + 8);
  v7 = (int *)v5;
  *(uint *)(v1 + 8) = v6 + 1;
  v8 = *v6;
  v9 = GetGender(v4);
  v10 = Function_2025f8c(v4);
  v11 = Function_205ca14(v9, v10, 2);
  Function_200b998(*v7, v8, v11);
  return 0;
}

//----- (02047930) --------------------------------------------------------
int __fastcall ScriptCmd_SetVarPokemonStored(int a1)
{
  int v1
  int v2
  uchar *v3
  int **v4
  uint v5
  int v6
  uint v7
  uchar *v8
  int v9
  ushort *v10
  int v11

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int **)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  ScriptHandler_LoadHWord(v1);
  v8 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v8 + 1;
  v9 = *v8;
  v10 = Function_2047998(v7, 4u);
  Function_200b48c(*v4, v5, (int)v10);
  Function_20237bc_FreeMsg((int)v10, v11);
  return 0;
}

//----- (02047998) --------------------------------------------------------
ushort *__fastcall Function_2047998(uint a1, uint a2)
{
  uint v2
  ushort **v3
  ushort *v4

  v2 = a1;
  v3 = (ushort **)LoadFromMsgNARC(1, 26, 412, a2);
  v4 = Function_200b1ec_CallMsgDecrypt(v3, v2);
  Function_200b190((ushort *)v3);
  return v4;
}

//----- (020479C0) --------------------------------------------------------
int __fastcall ScriptCmd_SetVarHeroStored(int a1)
{
  int v1
  int v2
  uchar *v3
  int **v4
  uint v5
  int v6
  int v7
  ushort *v8
  int v9

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int **)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = Function_206b054(v6);
  v8 = Function_2047998(v7, 4u);
  Function_200b48c(*v4, v5, (int)v8);
  Function_20237bc_FreeMsg((int)v8, v9);
  return 0;
}

//----- (02047A10) --------------------------------------------------------
int __fastcall ScriptCmd_SetVarRivalStored(int a1)
{
  int v1
  int v2
  uchar *v3
  int **v4
  uint v5
  int v6
  int v7
  ushort *v8
  int v9

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int **)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = Function_206b064(v6);
  v8 = Function_2047998(v7, 4u);
  Function_200b48c(*v4, v5, (int)v8);
  Function_20237bc_FreeMsg((int)v8, v9);
  return 0;
}

//----- (02047A60) --------------------------------------------------------
int __fastcall ScriptCmd_SetVarAlterStored(int a1)
{
  int v1
  int v2
  uchar *v3
  int **v4
  uint v5
  int v6
  int v7
  ushort *v8
  int v9

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int **)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = Function_206b08c(v6);
  v8 = Function_2047998(v7, 4u);
  Function_200b48c(*v4, v5, (int)v8);
  Function_20237bc_FreeMsg((int)v8, v9);
  return 0;
}

//----- (02047AB0) --------------------------------------------------------
int __fastcall Function_2047ab0(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200bc80(*v4, v5, v7);
  return 0;
}

//----- (02047AE8) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarItemStored(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200bb04(*v4, v5, v7);
  return 0;
}

//----- (02047B20) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarItemStored2(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200ba94(*v4, v5, v7);
  return 0;
}

//----- (02047B58) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarSwarmPoke(int a1)
{
  int v1
  ushort *v2
  int v3
  uchar *v4
  int **v5
  uint v6
  int v7
  uint v8
  int v9

  v1 = a1;
  v2 = (ushort *)Function_2023790(22, 4u);
  v3 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
  v4 = *(uchar **)(v1 + 8);
  v5 = (int **)v3;
  *(uint *)(v1 + 8) = v4 + 1;
  v6 = *v4;
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  Function_2071d10(v8, 4u, v2);
  Function_200b48c(*v5, v6, (int)v2);
  Function_20237bc_FreeMsg((int)v2, v9);
  return 0;
}

//----- (02047BB8) --------------------------------------------------------
int __fastcall Function_2047bb8(int a1)
{
  int v1
  int v2
  uchar *v3
  int **v4
  uint v5
  int v6
  uint v7
  int v8
  ushort *v9
  int v10

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int **)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v8);
  v9 = Function_209742c((v7 - 149) & 0xFFFF, 0x20u);
  Function_200b48c(*v4, v5, (int)v9);
  Function_20237bc_FreeMsg((int)v9, v10);
  return 0;
}

//----- (02047C30) --------------------------------------------------------
int __fastcall ScriptCmd_SetNaturePokemon(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200b6d8(*v4, v5, v7);
  return 0;
}

//----- (02047C68) --------------------------------------------------------
int __fastcall ScriptCmd_CheckAccessories(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200bfac(*v4, v5, v7);
  return 0;
}

//----- (02047CA0) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarShaymin(int a1)
{
  int v1
  int v2
  uchar *v3
  int **v4
  uint v5
  ushort *v6
  int v7
  ushort *v8
  int v9

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int **)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = (ushort *)Function_2023790(11, 0xBu);
  v7 = LoadVariableAreaAdress_a_3(*(uint *)(*(uint *)(v1 + 128) + 12));
  v8 = (ushort *)Function_2027894(v7);
  Function_2023d28(v6, v8);
  Function_200b48c(*v4, v5, (int)v6);
  Function_20237bc_FreeMsg((int)v6, v9);
  return 0;
}

//----- (02047D00) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarMoveDelete(int a1)
{
  int v1
  int v2
  int v3
  uchar *v4
  int *v5
  uint v6
  int v7
  int v8
  int v9
  uint v10
  uint *v11
  int *v12
  ushort v13

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v4 = *(uchar **)(v1 + 8);
  v5 = (int *)v3;
  *(uint *)(v1 + 8) = v4 + 1;
  v6 = *v4;
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v9 = ScriptHandler_LoadHWord(v1);
  v10 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v9);
  v11 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v12 = GetAdrOfPkmnInParty(v11, v8);
  v13 = GetPkmnData(v12, v10 + 54, 0);
  Function_200b630(*v5, v6, v13);
  return 0;
}

//----- (02047D68) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarRibbon(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uchar v7
  ushort v8

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = Function_20923c0(v7, 3u);
  Function_200b668(*v4, v5, v8);
  return 0;
}

//----- (02047DAC) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarSealRandom(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200be64(*v4, v5, (v7 - 1) & 0xFFFF);
  return 0;
}

//----- (02047DE8) --------------------------------------------------------
int __fastcall Function_2047de8(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200ba08(*v4, v5, v7);
  return 0;
}

//----- (02047E20) --------------------------------------------------------
int __fastcall ScriptCmd_33c(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200b744(*v4, v5, v7);
  return 0;
}

//----- (02047E58) --------------------------------------------------------
int __fastcall ScriptCmd_33d(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200b77c(*v4, v5, v7);
  return 0;
}

//----- (02047E90) --------------------------------------------------------
int __fastcall ScriptCmd_33e(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200bcb8(*v4, v5, v7);
  return 0;
}

//----- (02047EC8) --------------------------------------------------------
int __fastcall ScriptCmd_33f(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200bb3c(*v4, v5, v7);
  return 0;
}

//----- (02047F00) --------------------------------------------------------
int __fastcall ScriptCmd_340(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200bacc(*v4, v5, v7);
  return 0;
}

//----- (02047F38) --------------------------------------------------------
int __fastcall ScriptCmd_341(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  ScriptHandler_LoadHWord(v1);
  ++*(uint *)(v1 + 8);
  Function_200b594(*v4, v5, v7);
  return 0;
}

//----- (02047F80) --------------------------------------------------------
int __fastcall ScriptCmd_342(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  int v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = Function_206b08c(v6);
  Function_200b594(*v4, v5, v7);
  return 0;
}

//----- (02047FB4) --------------------------------------------------------
int __fastcall ScriptCmd_343(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200bfe4(*v4, v5, v7);
  return 0;
}

//----- (02047FEC) --------------------------------------------------------
int __fastcall ScriptCmd_344(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200b998(*v4, v5, v7);
  return 0;
}

//----- (02048024) --------------------------------------------------------
int __fastcall ScriptCmd_345(int a1)
{
  int v1
  int v2
  uchar *v3
  int *v4
  uint v5
  int v6
  uint v7

  v1 = a1;
  v2 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = (int *)v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  Function_200be98(*v4, v5, (v7 - 1) & 0xFFFF);
  return 0;
}

//----- (02048060) --------------------------------------------------------
int __fastcall ScriptCmd_346(int a1)
{
  int v1
  int *v2
  uchar *v3

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  *(uint *)(v1 + 8) = v3 + 1;
  Function_200c324(*v2, *v3);
  return 0;
}

//----- (02048080) --------------------------------------------------------
int __fastcall ScriptCmd_DisplayFloor(int a1)
{
  int v1
  int *v2
  uchar *v3
  uchar *v4
  uint v5

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = *(uchar **)(v1 + 8);
  v4 = v3 + 1;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = *v3;
  *(uint *)(v1 + 8) = v4 + 1;
  Function_200c338(*v2, v5, *v4);
  return 0;
}

//----- (020480A8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckLottoNumber(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_206b2a4(v2);
  return 0;
}

//----- (020480D8) --------------------------------------------------------
int __fastcall ScriptCmd_CompareLottoNumber(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  uint v9
  uint v10
  uint *v11
  int *v12
  ushort v13
  int v14
  int v15
  int v16
  uint v17
  uint *v18
  ushort v19
  int v20
  uint v22
  ushort *v23
  ushort *v24
  ushort *v25
  uint v26
  int v27
  short v28
  int v29
  uint *v30

  v1 = a1;
  v2 = a1 + 128;
  v3 = *(uint *)v2;
  v30 = (uint *)LoadVariableAreaAdress_25(*(uint *)(*(uint *)v2 + 12));
  v4 = ScriptHandler_LoadHWord(v1);
  v25 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v5 = ScriptHandler_LoadHWord(v1);
  v24 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v6 = ScriptHandler_LoadHWord(v1);
  v23 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v7 = ScriptHandler_LoadHWord(v1);
  v22 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v8 = LoadPokePartyAdress(*(uint *)(v3 + 12));
  v9 = GetNrOfPkmnInParty(v8) & 0xFFFF;
  v29 = 0;
  v28 = 0;
  v10 = 0;
  if ( v9 )
  {
    do
    {
      v11 = (uint *)LoadPokePartyAdress(*(uint *)(v3 + 12));
      v12 = GetAdrOfPkmnInParty(v11, v10);
      if ( !GetPkmnData(v12, 0x4Cu, 0) )
      {
        v13 = GetPkmnData(v12, 7u, 0);
        v14 = Function_2048268(v22, v13);
        if ( v14 )
        {
          if ( v29 < v14 )
          {
            v29 = v14;
            v28 = v10;
          }
        }
      }
      v10 = (v10 + 1) & 0xFFFF;
    }
    while ( v10 < v9 );
  }
  v15 = 0;
  LOWORD(v27) = 0;
  v26 = 0;
  v16 = 0;
  do
  {
    v17 = 0;
    do
    {
      v18 = Function_2079c9c(v30, v26, v17);
      if ( GetBoxPkmnData((int)v18, 5u, 0) )
      {
        if ( !GetBoxPkmnData((int)v18, 0x4Cu, 0) )
        {
          v19 = GetBoxPkmnData((int)v18, 7u, 0);
          v20 = Function_2048268(v22, v19);
          if ( v20 )
          {
            if ( v15 < v20 )
            {
              v15 = v20;
              v27 = (v17 + v16) & 0xFFFF;
            }
          }
        }
      }
      ++v17;
    }
    while ( v17 < 0x1E );
    v16 += 30;
    ++v26;
  }
  while ( v26 < 0x12 );
  if ( v29 || v15 )
  {
    if ( v29 < (uint)v15 )
    {
      *v25 = v27;
      *v24 = v15;
      *v23 = 1;
    }
    else
    {
      *v25 = v28;
      *v24 = v29;
      *v23 = 0;
    }
  }
  else
  {
    *v25 = 0;
    *v24 = 0;
    *v23 = 0;
  }
  return 0;
}

//----- (02048254) --------------------------------------------------------
int __fastcall Function_2048254(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_206b2c8(v1);
  return 0;
}

//----- (02048268) --------------------------------------------------------
int __fastcall Function_2048268(uint a1, uint a2)
{
  int v2
  uint v3
  uint v4
  uint v5
  int v6
  int v7
  int v8
  short v10
  short v11

  v2 = 0;
  v3 = a1;
  v4 = a2;
  v5 = 0;
  do
  {
    s32_div_f(v3, 10);
    v7 = v6;
    v10 = v6;
    s32_div_f(v4, 10);
    v11 = v8;
    if ( v7 != v8 )
      break;
    v3 = (ushort)s32_div_f(v3, 10);
    v4 = (ushort)s32_div_f(v4, 10);
    v2 = (v2 + 1) & 0xFF;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 5 );
  word_21C07F2 = v11;
  word_21C07F0 = v10;
  return v2;
}

//----- (020482D4) --------------------------------------------------------
int __fastcall Function_20482d4(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2005690(v2);
  return 0;
}

//----- (020482FC) --------------------------------------------------------
int __fastcall ScriptCmd_PlaySound(int a1)
{
  int v1

  v1 = ScriptHandler_LoadHWord(a1);
  Function_200549c(v1);
  return 0;
}

//----- (0204830C) --------------------------------------------------------
int __fastcall ScriptCmd_Stop(int a1)
{
  int v1

  ScriptHandler_LoadHWord(a1);
  v1 = Function_20041fc();
  Function_20055d0(v1, 0);
  return 0;
}

//----- (02048320) --------------------------------------------------------
int __fastcall ScriptCmd_Restart(int a1)
{
  int v1

  v1 = Function_20554a4(*(uint *)(a1 + 128), **(uint **)(*(uint *)(a1 + 128) + 28));
  Function_200549c(v1);
  return 0;
}

//----- (02048338) --------------------------------------------------------
int __fastcall Function_2048338(int a1)
{
  int v1
  short v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  Function_20553f0(*(uint *)(v1 + 128), v2);
  return 0;
}

//----- (02048350) --------------------------------------------------------
int __fastcall ScriptCmd_SwitchMusic(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  Function_200564c(v2, v3);
  ScriptHandler_AddFunction(v1, (int)Function_2048378);
  return 1;
}

//----- (02048378) --------------------------------------------------------
BOOL Function_2048378()
{
  return Function_2005684() == 0;
}

//----- (0204838C) --------------------------------------------------------
int __fastcall ScriptCmd_StoreSayingLearned(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  Function_200560c(127, v2, 0);
  ScriptHandler_AddFunction(v1, (int)Function_2048378);
  return 1;
}

//----- (020483B0) --------------------------------------------------------
int __fastcall Function_20483b0(int a1)
{
  uchar *v1
  uint *v2

  v1 = *(uchar **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  v2 = (uint *)*v1;
  *(uint *)(a1 + 8) = v1 + 2;
  Function_20049f4(v2, v1[1]);
  return 0;
}

//----- (020483CC) --------------------------------------------------------
int __fastcall ScriptCmd_PlaySound2(int a1)
{
  int v1

  v1 = ScriptHandler_LoadHWord(a1);
  Function_2005588(4, v1);
  return 0;
}

//----- (020483E0) --------------------------------------------------------
int __fastcall Function_20483e0(int a1)
{
  char *v1

  v1 = *(char **)(a1 + 8);
  *(uint *)(a1 + 8) = v1 + 1;
  Function_20041cc(*v1);
  return 0;
}

//----- (020483F4) --------------------------------------------------------
int __fastcall ScriptCmd_Fanfare(int a1)
{
  int v1
  int v2
  uint v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  Function_2005748(v3);
  return 0;
}

//----- (02048410) --------------------------------------------------------
int __fastcall ScriptCmd_Fanfare2(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  Function_20057a4(v3, 0);
  return 0;
}

//----- (0204842C) --------------------------------------------------------
int __fastcall ScriptCmd_WaitFanfare(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  *(uint *)(v1 + 100) = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  ScriptHandler_AddFunction(v1, (int)Function_2048454);
  return 1;
}

//----- (02048454) --------------------------------------------------------
BOOL __fastcall Function_2048454(int a1)
{
  return Function_20057d4(*(uint *)(a1 + 100) & 0xFFFF) == 0;
}

//----- (0204846C) --------------------------------------------------------
int __fastcall ScriptCmd_Cryfr(int a1)
{
  int v1
  int v2
  uint v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  Function_2005844(v3, 0);
  return 0;
}

//----- (020484A0) --------------------------------------------------------
int __fastcall ScriptCmd_WaitCry(int a1)
{
  ScriptHandler_AddFunction(a1, (int)Function_20484b0);
  return 1;
}

//----- (020484B0) --------------------------------------------------------
BOOL Function_20484b0()
{
  return Function_200598c() == 0;
}

//----- (020484C4) --------------------------------------------------------
int __fastcall ScriptCmd_Soundfr(int a1)
{
  int v1

  v1 = ScriptHandler_LoadHWord(a1);
  Function_2006150(v1);
  return 0;
}

//----- (020484D4) --------------------------------------------------------
int __fastcall ScriptCmd_FadeDefaultMusic(int a1)
{
  ScriptHandler_AddFunction(a1, (int)Function_20484e4);
  return 1;
}

//----- (020484E4) --------------------------------------------------------
BOOL Function_20484e4()
{
  return Function_20061e4() == 0;
}

//----- (020484F8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckSayingLearned(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int result

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_16(*(uint *)(*(uint *)(v1 + 128) + 12));
  if ( Function_2006260(v4) == 1 )
  {
    *v3 = 1;
    result = 0;
  }
  else
  {
    result = 0;
    *v3 = 0;
  }
  return result;
}

//----- (02048530) --------------------------------------------------------
int __fastcall ScriptCmd_SwitchMusic2(int a1)
{
  int v1
  int v2
  ushort *v3
  int result

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  if ( Function_200637c() )
  {
    result = 0;
    *v3 = 0;
  }
  else
  {
    *v3 = 1;
    result = 0;
  }
  return result;
}

//----- (0204855C) --------------------------------------------------------
int ScriptCmd_ActMicrophone()
{
  Function_20063b8();
  return 1;
}

//----- (02048568) --------------------------------------------------------
int __fastcall ScriptCmd_DeactMicrophone(int a1)
{
  uint *v1

  v1 = (uint *)LoadVariableAreaAdress_16(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_20063c0(v1);
  return 1;
}

//----- (0204857C) --------------------------------------------------------
int Function_204857c()
{
  Function_2004550(0x3Fu, 0);
  return 1;
}

//----- (0204858C) --------------------------------------------------------
int __fastcall Function_204858c(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  int v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  Function_2004ad4(v3, v5);
  return 0;
}

//----- (020485C0) --------------------------------------------------------
int Function_20485c0()
{
  Function_2004550(0x16u, 0x4C2u);
  return 1;
}

//----- (020485D4) --------------------------------------------------------
int __fastcall Function_20485d4(int a1)
{
  int v1
  int v2
  uint v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  Function_2004550(4u, v3);
  return 1;
}

//----- (020485F4) --------------------------------------------------------
int __fastcall Function_20485f4(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_20041fc();
  return 0;
}

//----- (02048614) --------------------------------------------------------
int __fastcall ScriptCmd_BattleId(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int *v5
  uint *v6
  int *v8
  int *v9
  int *v10

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  if ( v4 )
  {
    v10 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0x1Fu);
    v8 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0x20u);
    ScriptHandler_GetSomeScriptAddresses(v2, 0x21u);
    ScriptHandler_GetSomeScriptAddresses(v2, 0x22u);
    v9 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0x23u);
    v5 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0x24u);
    v6 = (uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0x25u);
  }
  else
  {
    v10 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0x18u);
    v8 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0x19u);
    ScriptHandler_GetSomeScriptAddresses(v2, 0x1Au);
    ScriptHandler_GetSomeScriptAddresses(v2, 0x1Bu);
    v9 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0x1Cu);
    v5 = (int *)ScriptHandler_GetSomeScriptAddresses(v2, 0x1Du);
    v6 = (uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0x1Eu);
  }
  *v6 = Function_2067fb8(v2, *v5, *(uint *)(v2 + 60), *v8, *v10, 0, *v9, v4);
  return 0;
}

//----- (020486E0) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarBattle(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  ushort *v5
  int *v6
  int *v7
  int v8
  int result

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  *v5 = 0;
  if ( v3 )
    v6 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x25u);
  else
    v6 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x1Eu);
  v7 = v6;
  v8 = *v6;
  if ( v8 )
  {
    if ( Function_2067fd4(v8) == 1 )
    {
      Function_2067fe8(*v7);
      *v7 = 0;
      *v5 = 1;
    }
    result = 1;
  }
  else
  {
    result = 1;
    *v5 = 1;
  }
  return result;
}

//----- (02048750) --------------------------------------------------------
int __fastcall ScriptCmd_CheckBattleType(int a1)
{
  int v1
  ushort *v2
  int v3

  v1 = a1;
  v2 = (ushort *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x1Cu);
  v3 = ScriptHandler_LoadHWord(v1);
  *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3) = *v2;
  return 0;
}

//----- (02048778) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarBattle2(int a1)
{
  int v1
  short *v2
  short *v3
  int v4
  uint v5
  int v6
  ushort *v7
  short v8

  v1 = a1;
  v2 = (short *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x1Bu);
  v3 = (short *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x22u);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  if ( v5 )
    v8 = *v3;
  else
    v8 = *v2;
  *v7 = v8;
  return 0;
}

//----- (020487CC) --------------------------------------------------------
int __fastcall ScriptCmd_StartBattleAnalysis(int a1)
{
  int v1
  ushort *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (ushort *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 8u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = NormalizeSpriteScriptNr(*v2);
  return 0;
}

//----- (020487FC) --------------------------------------------------------
int __fastcall ScriptCmd_TrainerBattle(int a1)
{
  int v1
  int v2
  uint *v3
  int v4
  int v5
  int v6
  int v7
  int v8
  uint v10
  uint v11

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 8u);
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0x17u);
  v4 = ScriptHandler_LoadHWord(v1);
  v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = ScriptHandler_LoadHWord(v1);
  v10 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v6 = 0;
  v7 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  if ( Function_206a984(v7) == 1 )
  {
    v8 = LoadFlagAdress(*(uint *)(v2 + 12));
    v6 = Function_206b034(v8);
  }
  TrainerBattle(*(uint *)(v1 + 116), v11, v10, v6, 0xBu, v3);
  return 1;
}

//----- (0204887C) --------------------------------------------------------
int __fastcall ScriptCmd_DoubleBattle(int a1)
{
  int v1
  uint *v2
  int v3
  uint v4
  int v5
  uint v6
  int v7
  uint v8

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x17u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  TrainerBattle(*(uint *)(v1 + 116), v6, v8, v4, 0xBu, v2);
  return 1;
}

//----- (020488E0) --------------------------------------------------------
int __fastcall ScriptCmd_TrainerBattleStored(int a1)
{
  int v1
  ushort *v2
  int v3
  short *v4
  int v5
  short *v6
  int v7
  short *v8
  int v9
  short v10
  short v11
  short v12

  v1 = a1;
  v2 = (ushort *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 8u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (short *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (short *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (short *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = NormalizeSpriteScriptNr(*v2);
  if ( Function_203f28c(v9) & 0xFFFF )
  {
    if ( Function_203f278(*v2) & 0xFFFF )
    {
      v10 = 7;
      v11 = 9;
      v12 = 10;
    }
    else
    {
      v10 = 3;
      v11 = 5;
      v12 = 6;
    }
  }
  else
  {
    v10 = 0;
    v11 = 2;
    v12 = 0;
  }
  *v4 = v10;
  *v6 = v11;
  *v8 = v12;
  return 0;
}

//----- (02048968) --------------------------------------------------------
int __fastcall ScriptCmd_TrainerBattleStored2(int a1)
{
  int v1
  ushort *v2
  int v3
  short *v4
  int v5
  ushort *v6
  int v7
  short *v8
  int v9
  short v10
  short v11

  v1 = a1;
  v2 = (ushort *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 8u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (short *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (short *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = NormalizeSpriteScriptNr(*v2);
  if ( Function_203f28c(v9) & 0xFFFF )
  {
    if ( Function_203f278(*v2) & 0xFFFF )
    {
      v10 = 19;
      v11 = 10;
    }
    else
    {
      v10 = 18;
      v11 = 6;
    }
  }
  else
  {
    v10 = 17;
    v11 = 0;
  }
  *v4 = v10;
  *v6 = 0;
  *v8 = v11;
  return 0;
}

//----- (020489F0) --------------------------------------------------------
int __fastcall ScriptCmd_CheckTrainerStatus(int a1)
{
  int v1
  ushort *v2
  int v3
  ushort *v4
  int v5

  v1 = a1;
  v2 = (ushort *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 8u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = NormalizeSpriteScriptNr(*v2);
  *v4 = Function_203f28c(v5);
  return 0;
}

//----- (02048A24) --------------------------------------------------------
int __fastcall ScriptCmd_ActLeagueBattlers(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = Function_205560c(v3);
  Function_2004950(v4);
  return 1;
}

//----- (02048A44) --------------------------------------------------------
int __fastcall ScriptCmd_LostGoPokecenter(int a1)
{
  Function_2052c5c(*(uint *)(a1 + 116));
  return 1;
}

//----- (02048A50) --------------------------------------------------------
int __fastcall ScriptCmd_CheckTrainerLost(int a1)
{
  int v1
  int *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x17u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2052868(*v2);
  return 1;
}

//----- (02048A80) --------------------------------------------------------
int __fastcall ScriptCmd_CheckTrainerStatus2(int a1)
{
  int v1
  int *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x17u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2052878(*v2);
  return 1;
}

//----- (02048AB0) --------------------------------------------------------
int __fastcall ScriptCmd_CheckWildBattle2(int a1)
{
  int v1
  int *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x17u);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2052888(*v2);
  return 1;
}

//----- (02048AE0) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokePartyDefeated(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_2054ab0(v4);
  return 0;
}

//----- (02048B0C) --------------------------------------------------------
int __fastcall Function_2048b0c(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x17u);
  TrainerBattle(*(uint *)(v1 + 116), 1u, 0, 0, 0xBu, v2);
  return 1;
}

//----- (02048B34) --------------------------------------------------------
int __fastcall Function_2048b34(int a1)
{
  int *v1
  int v2
  ushort v3

  v1 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v2 = GetSpriteSpriteListFirstSprite(*v1);
  v3 = GetSpriteID(*v1);
  SetFlag550(v2, v3);
  return 0;
}

//----- (02048B60) --------------------------------------------------------
int __fastcall Function_2048b60(int a1)
{
  int v1
  int *v2
  int v3
  int v4
  ushort v5

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = ScriptHandler_LoadWord(v1);
  v4 = GetSpriteSpriteListFirstSprite(*v2);
  v5 = GetSpriteID(*v2);
  if ( CheckFlag550(v4, v5) != 1 )
    return 0;
  SetScriptHandlerPointer(v1, *(uint *)(v1 + 8) + v3);
  return 1;
}

//----- (02048BA8) --------------------------------------------------------
int __fastcall Function_2048ba8(int a1)
{
  int v1
  uint *v2
  int v3

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x17u);
  v3 = ScriptHandler_LoadHWord(v1);
  *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3) = *v2;
  return 1;
}

//----- (02048BD0) --------------------------------------------------------
int __fastcall Function_2048bd0(int a1)
{
  int v1
  int **v2
  int v3
  int v4
  uint v5
  int v6
  int v7
  int v8
  ushort *v9
  int v11
  int v12
  int v13
  ushort *v14
  int v15
  int v16
  int v17
  uint v18
  int v19
  int v20
  int v21
  uint v22
  ushort *v23
  int v24
  int v25
  int v26
  int v27
  BOOL v28
  ushort *v29
  ushort *v30
  char v31
  int v32
  int v33

  v1 = a1;
  v2 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = LoadVariableAreaAdress_11(*(uint *)(*(uint *)(v1 + 128) + 12));
  v4 = *(uint *)(*(uint *)(v1 + 128) + 12);
  v5 = ScriptHandler_LoadHWord(v1);
  if ( v5 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_2048C10 + v5) + 33852434);
  switch ( (uchar)v5 )
  {
    case 0:
      v6 = ScriptHandler_LoadHWord(v1);
      v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
      v8 = ScriptHandler_LoadHWord(v1);
      v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v8);
      *v9 = Function_202b4ac(v3, v7);
      return 0;
    case 1:
      v11 = ScriptHandler_LoadHWord(v1);
      v12 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v11);
      v13 = ScriptHandler_LoadHWord(v1);
      v14 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v13);
      *v14 = Function_202b4c4(v3, v12);
      return 0;
    case 2:
      v15 = ScriptHandler_LoadHWord(v1);
      v16 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v15);
      v17 = ScriptHandler_LoadHWord(v1);
      v18 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v17);
      Function_200c054(*v2, v4, v16, v18, 0);
      return 0;
    case 3:
      v19 = ScriptHandler_LoadHWord(v1);
      v20 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v19);
      v21 = ScriptHandler_LoadHWord(v1);
      v22 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v21);
      Function_200c054(*v2, v4, v20, v22, 1);
      return 0;
    case 4:
      v23 = (ushort *)Function_202b42c(v3, 0, 0);
      v24 = ScriptHandler_LoadHWord(v1);
      v25 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v24);
      Function_203dfe8(*(uint *)(v1 + 116), 5, 0, 7, 0, v23, v25);
      return 1;
    case 5:
      v26 = ScriptHandler_LoadHWord(v1);
      v27 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v26);
      v28 = Function_202b4ac(v3, 1);
      Function_202b384(v3, v27, 1);
      if ( v28 )
        Function_206d430(*(uint *)(v1 + 128));
      return 0;
    case 6:
      v29 = (ushort *)Function_2023790(64, 0x20u);
      v30 = (ushort *)LoadTrainerDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
      Function_2025ef4(v30, v29);
      Function_202b444(v3, 0, 1, (int)v29);
      v31 = GetGender((int)v30);
      Function_202b470(v3, 0, v31);
      Function_202b494(v3, 0, 2);
      v32 = Function_201d35c();
      Function_202b40c(v3, 0, v32);
      Function_20237bc_FreeMsg((int)v29, v33);
      Function_202b384(v3, 0, 1);
      Function_206d424(*(uint *)(v1 + 128));
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02048DD8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckFurniture(int a1)
{
  int v1
  uint v2
  int v3
  ushort *v4
  int v5
  int v6
  ushort *v7
  int v8
  ushort *v9
  uint *v10
  int v11
  uint v12
  int v13
  int v14
  int v15
  int v16
  ushort *v17
  int v18
  ushort *v19
  int v20
  uint v21
  int v22
  uint v23
  int v24
  ushort *v25
  int v26
  ushort *v27

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  if ( v2 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_2048DF2 + v2) + 33852916);
  switch ( (uchar)v2 )
  {
    case 0:
      v3 = ScriptHandler_LoadHWord(v1);
      v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
      *v4 = ((int (__fastcall *)(uint))dword_224660C[0])(*(uint *)(v1 + 128));
      break;
    case 1:
      v5 = ScriptHandler_LoadHWord(v1);
      v6 = ScriptHandler_LoadHWord(v1);
      v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
      v8 = ScriptHandler_LoadHWord(v1);
      v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v8);
      *v7 = 622;
      *v9 = ((int (__fastcall *)(uint, int))dword_2246978[0])(*(uint *)(v1 + 128), v5);
      break;
    case 2:
      ((void (__fastcall *)(uint))dword_22465FC[0])(*(uint *)(v1 + 128));
      break;
    case 3:
      v10 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xFu);
      v11 = ScriptHandler_LoadHWord(v1);
      v12 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v11);
      v13 = ScriptHandler_LoadHWord(v1);
      v14 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v13);
      v15 = ScriptHandler_LoadHWord(v1);
      ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v15);
      ((void (__fastcall *)(uint, uint, uint, int))dword_22469E0[0])(*(uint *)(v1 + 128), *v10, v12, v14);
      break;
    case 4:
      v16 = ScriptHandler_LoadHWord(v1);
      v17 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v16);
      v18 = ScriptHandler_LoadHWord(v1);
      v19 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v18);
      *v17 = 623;
      *v19 = ((int (__fastcall *)(uint))dword_2246B40[0])(*(uint *)(v1 + 128));
      break;
    case 5:
      v20 = ScriptHandler_LoadHWord(v1);
      v21 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v20);
      v22 = ScriptHandler_LoadHWord(v1);
      v23 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v22);
      v24 = ScriptHandler_LoadHWord(v1);
      v25 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v24);
      *v25 = ((int (__fastcall *)(uint, uint, uint))dword_22468B0[0])(*(uint *)(v1 + 128), v21, v23);
      break;
    case 6:
      v26 = ScriptHandler_LoadHWord(v1);
      v27 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v26);
      *v27 = ((int (__fastcall *)(uint))dword_2246920[0])(*(uint *)(v1 + 128));
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (02048F74) --------------------------------------------------------
int __fastcall Function_2048f74(int a1)
{
  int v1
  int v2
  short v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  Function_206d4ac(*(uint *)(v1 + 128), v3);
  return 0;
}

//----- (02048F98) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokeNickname(int a1)
{
  int v1
  uint *v2
  int v3
  int v4
  int *v5

  v1 = a1;
  v2 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = GetAdrOfPkmnInParty(v2, v4);
  Function_206d60c(*(uint *)(v1 + 128), v5);
  return 0;
}

//----- (02048FD0) --------------------------------------------------------
int __fastcall Function_2048fd0(int a1)
{
  Function_206d7c4(*(uint *)(a1 + 128));
  return 0;
}

//----- (02048FE0) --------------------------------------------------------
int __fastcall Function_2048fe0(int a1, int a2, int a3, int a4)
{
  Function_206db20(*(uint *)(a1 + 128), a2, a3, a4);
  return 0;
}

//----- (02048FF0) --------------------------------------------------------
int __fastcall Function_2048ff0(int a1)
{
  int v1
  int v2
  char v3
  int v4
  int v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  Function_206db5c(*(uint *)(v1 + 128), v3, v4, v5);
  return 0;
}

//----- (02049018) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPhraseBoxInput(int a1)
{
  int v1
  int *v2
  int v3
  int v4
  int v5
  int v6
  ushort *v7
  int v8
  ushort *v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15

  v1 = a1;
  v2 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v3 = ScriptHandler_LoadHWord(v1);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v10 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
      v11 = ScriptHandler_LoadHWord(v1);
      v12 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v11);
      v13 = ScriptHandler_LoadHWord(v1);
      v14 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v13);
      v15 = ScriptHandler_LoadHWord(v1);
      ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v15);
      Function_20491b8(*(uint *)(v1 + 128), v12, v14);
      Function_202cfec(v10, 3);
    }
  }
  else
  {
    v4 = ScriptHandler_LoadHWord(v1);
    v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
    v6 = ScriptHandler_LoadHWord(v1);
    v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
    v8 = ScriptHandler_LoadHWord(v1);
    v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v8);
    *v7 = 621;
    *v9 = Function_20491d0(v5, *(uint *)(v1 + 128), *v2);
  }
  return 0;
}

//----- (020490F0) --------------------------------------------------------
int __fastcall ScriptCmd_CheckStatusPhraseBox(int a1)
{
  int v1
  int v2
  int v3
  int v4
  ushort *v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  *v5 = Function_20491f4(*(uint *)(v1 + 128), v3);
  return 0;
}

//----- (0204912C) --------------------------------------------------------
int __fastcall ScriptCmd_SetvarAmityPokemon(int a1)
{
  int v1
  int v2
  int v3
  uint *v4
  int v5
  int v6
  int *v7
  int v8
  short v9
  int v10
  char v11

  v1 = a1;
  v2 = Function_202440c(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v8 = ScriptHandler_LoadHWord(v1);
      v9 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v8);
      Function_206cfb4(v2, v9);
    }
    else if ( v3 == 2 )
    {
      v10 = ScriptHandler_LoadHWord(v1);
      v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v10);
      Function_206cf9c(v2, v11);
    }
  }
  else
  {
    v4 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
    v5 = ScriptHandler_LoadHWord(v1);
    v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
    v7 = GetAdrOfPkmnInParty(v4, v6);
    Function_206cf48(v2, v7, 4u);
  }
  return 0;
}

//----- (020491B8) --------------------------------------------------------
int __fastcall Function_20491b8(int result, int a2, int a3)
{
  int (__fastcall *v3)(int, int)

  v3 = (int (__fastcall *)(int, int))Unknown_20ebb48[4 * (a2 - 1)];
  if ( v3 )
    result = v3(result, a3);
  return result;
}

//----- (020491D0) --------------------------------------------------------
int __fastcall Function_20491d0(int a1, int a2, int a3)
{
  int v3
  void (__fastcall *v4)(int, int)

  v3 = 4 * (a1 - 1);
  v4 = (void (__fastcall *)(int, int))Unknown_20ebb4c[v3];
  if ( v4 )
    v4(a2, a3);
  return Unknown_20ebb54[v3];
}

//----- (020491F4) --------------------------------------------------------
int __fastcall Function_20491f4(int a1, int a2)
{
  int v2
  int v3
  int v4
  int result
  int (__fastcall *v6)(int)

  v2 = a1;
  v3 = a2;
  v4 = Function_202440c(*(uint *)(a1 + 12));
  if ( !Function_202e6b0(v4, 1u, v3) )
    return 0;
  v6 = (int (__fastcall *)(int))Unknown_20ebb50[4 * (v3 - 1)];
  if ( v6 )
    result = v6(v2);
  else
    result = 1;
  return result;
}

//----- (0204922C) --------------------------------------------------------
int __fastcall Function_204922c(int *a1, uint a2, ushort *a3)
{
  int *v3
  uint v4
  ushort *v5
  ushort *v6
  int v7

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (ushort *)Function_2023790(64, 4u);
  Function_2023d28(v6, v5);
  Function_200b48c(v3, v4, (int)v6);
  return Function_20237bc_FreeMsg((int)v6, v7);
}

//----- (02049268) --------------------------------------------------------
ushort *__fastcall Function_2049268(int a1, int a2)
{
  int v2
  int v3
  int v4

  v2 = a2;
  v3 = LoadPokePartyAdress(*(uint *)(a1 + 12));
  Function_2054a74(v3);
  Function_2076b10_Dummy();
  return Function_200b538(v2, 0, v4);
}

//----- (02049288) --------------------------------------------------------
ushort *__fastcall Function_2049288(int a1, int a2)
{
  int v2
  uint v3

  v2 = a2;
  v3 = ((int (__fastcall *)(uint))dword_2253DD8[0])(*(uint *)(*(uint *)(a1 + 4) + 20));
  return Function_200b928(v2, 0, v3);
}

//----- (020492A0) --------------------------------------------------------
int __fastcall Function_20492a0(int a1, int *a2)
{
  int *v2
  int v3
  int v4
  char v6

  v2 = a2;
  v3 = Function_202440c(*(uint *)(a1 + 12));
  v4 = Function_202e7e4(v3);
  Function_200b274(*(ushort *)(v4 + 2), 4u, &v6);
  return Function_204922c(v2, 0, (ushort *)&v6);
}

//----- (020492D4) --------------------------------------------------------
int __fastcall Function_20492d4(int a1, int *a2)
{
  int *v2
  int v3
  int v4
  char v6

  v2 = a2;
  v3 = Function_202440c(*(uint *)(a1 + 12));
  v4 = Function_202e810(v3);
  Function_200b274(*(ushort *)(v4 + 2), 4u, &v6);
  return Function_204922c(v2, 0, (ushort *)&v6);
}

//----- (02049308) --------------------------------------------------------
int __fastcall Function_2049308(int a1, int *a2)
{
  int *v2
  int v3
  int v4
  ushort *v5
  int v6
  int v7

  v2 = a2;
  v3 = Function_202440c(*(uint *)(a1 + 12));
  v4 = Function_202e81c(v3);
  v5 = (ushort *)Function_2023790(64, 4u);
  Function_2023d28(v5, (ushort *)(v4 + 6));
  v6 = *(uchar *)(v4 + 2);
  Function_200b48c(v2, 0, (int)v5);
  return Function_20237bc_FreeMsg((int)v5, v7);
}

//----- (02049348) --------------------------------------------------------
int __fastcall Function_2049348(int a1)
{
  int v1

  v1 = Function_202440c(*(uint *)(a1 + 12));
  return *(uchar *)Function_202e7fc(v1);
}

//----- (02049358) --------------------------------------------------------
int __fastcall Function_2049358(int a1)
{
  uchar *v1

  v1 = (uchar *)LoadVariableAreaAdress_5(*(uint *)(a1 + 12));
  return Function_20567e0(v1);
}

//----- (02049368) --------------------------------------------------------
int __fastcall Function_2049368(int a1)
{
  int v1

  v1 = Function_202440c(*(uint *)(a1 + 12));
  return *(uchar *)Function_202e7d8(v1);
}

//----- (02049378) --------------------------------------------------------
BOOL __fastcall Function_2049378(int a1)
{
  int v1

  v1 = LoadVariableAreaAdress_e(*(uint *)(a1 + 12));
  return Function_2029d10(v1, 0);
}

//----- (02049388) --------------------------------------------------------
int __fastcall Function_2049388(int a1)
{
  int v1

  v1 = Function_202440c(*(uint *)(a1 + 12));
  return *(uchar *)Function_202e7f0(v1);
}

//----- (02049398) --------------------------------------------------------
int __fastcall Function_2049398(int a1)
{
  int v1

  v1 = Function_202440c(*(uint *)(a1 + 12));
  return *(uchar *)Function_202e7e4(v1);
}

//----- (020493A8) --------------------------------------------------------
int __fastcall Function_20493a8(int a1)
{
  int v1

  v1 = Function_202440c(*(uint *)(a1 + 12));
  return *(uchar *)Function_202e810(v1);
}

//----- (020493B8) --------------------------------------------------------
int __fastcall Function_20493b8(int a1)
{
  int v1

  v1 = Function_202440c(*(uint *)(a1 + 12));
  return *(uchar *)Function_202e81c(v1);
}

//----- (020493C8) --------------------------------------------------------
int __fastcall Function_20493c8(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = Function_202440c(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = *(uchar *)(Function_202e808(v4) + 7);
  return 0;
}

//----- (020493F4) --------------------------------------------------------
int __fastcall Function_20493f4(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  ushort *v6
  int v7
  ushort *v8
  int v9
  ushort *v11

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v11 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = Function_202440c(*(uint *)(*(uint *)(v1 + 128) + 12));
  switch ( *(uchar *)(Function_202e81c(v9) + 1) )
  {
    case 2:
    case 3:
      *v11 = 72;
      *v4 = 36;
      *v6 = 0;
      *v8 = 14;
      break;
    case 4:
      *v11 = 37;
      *v4 = 61;
      *v6 = 1;
      *v8 = 15;
      break;
    case 5:
      *v11 = 25;
      *v4 = 36;
      *v6 = 0;
      *v8 = 14;
      break;
    case 6:
      *v11 = 59;
      *v4 = 61;
      *v6 = 1;
      *v8 = 15;
      break;
    default:
      *v11 = 47;
      *v4 = 21;
      *v6 = 0;
      *v8 = 14;
      break;
  }
  return 0;
}

//----- (020494DC) --------------------------------------------------------
int __fastcall ScriptCmd_StoreBTowerData(int a1)
{
  int v1
  int v2
  char v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v1 + 128));
  *(uint *)(*(uint *)(v1 + 128) + 172) = Function_204a124(v4, v2, v3);
  return 0;
}

//----- (0204950C) --------------------------------------------------------
int __fastcall ScriptCmd_ActivateBTower(int a1)
{
  Function_204a110((uint *)(*(uint *)(a1 + 128) + 172));
  return 0;
}

//----- (0204951C) --------------------------------------------------------
int __fastcall ScriptCmd_CloseBTower(int a1)
{
  int v1
  int result

  v1 = a1;
  Function_204a32c(*(uint **)(*(uint *)(a1 + 128) + 172));
  result = 0;
  *(uint *)(*(uint *)(v1 + 128) + 172) = 0;
  return result;
}

//----- (02049538) --------------------------------------------------------
int __fastcall ScriptCmd_CallBTowerFunctions(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v6

  v1 = a1;
  v6 = ScriptHandler_LoadHWord(a1);
  v2 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  if ( v6 <= 58 )
  {
    if ( v6 >= 0 )
      JUMPOUT(__CS__, *((short *)&off_2049590 + v6) + 33854866);
    goto LABEL_5;
  }
  if ( v6 != 100 )
  {
LABEL_5:
    ErrorHandler();
    *v4 = 0;
    return 0;
  }
  if ( *(uint *)(*(uint *)(v1 + 128) + 172) )
    *v4 = 0;
  else
    *v4 = 1;
  return 0;
}

//----- (02049800) --------------------------------------------------------
int __fastcall ScriptCmd_RandomTeamBTower(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  int v5
  uint v6
  int v7
  ushort *v8
  int v9
  ushort *v10
  int v11

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 172);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = ScriptHandler_LoadHWord(v1);
  v10 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v9);
  v11 = v2 + 272 * v4 + 56 * v6;
  *v8 = *(ushort *)(v11 + 712) & 0x7FF;
  *v10 = *(ushort *)(v11 + 716);
  return 0;
}

//----- (02049880) --------------------------------------------------------
int __fastcall ScriptCmd_StorePrizeNumBTower(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_206bdbc(*(uint *)(*(uint *)(v1 + 128) + 12));
  return 0;
}

//----- (020498A8) --------------------------------------------------------
int __fastcall ScriptCmd_StorePeopleIdBTower(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_206bf04(*(uint *)(*(uint *)(v1 + 128) + 12));
  return 0;
}

//----- (020498D0) --------------------------------------------------------
int __fastcall ScriptCmd_CallBTowerWireFunction(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  int v5
  ushort *v6
  int v7
  int v8
  int v10
  short v11

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = *(uint *)(*(uint *)(v1 + 128) + 172);
  *v6 = 0;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v10 = 63;
      Function_204b0bc(*(uint *)(*(uint *)(v1 + 128) + 172));
    }
    else if ( v3 == 2 )
    {
      v10 = 64;
      Function_204b0d4(*(uint *)(*(uint *)(v1 + 128) + 172), v11);
    }
  }
  else
  {
    v10 = 62;
    Function_204b060(*(uint *)(*(uint *)(v1 + 128) + 172), *(uint *)(*(uint *)(v1 + 128) + 12));
  }
  if ( Function_205e6d8(*(uint *)(*(uint *)(v1 + 128) + 12)) == 1 )
  {
    v8 = Function_203608c();
    if ( Function_2036614(v8, v7 + 2110) != 1 )
      return 1;
    *v6 = 1;
  }
  else
  {
    Function_209ba80(v7);
    if ( Function_20359dc(v10, v7 + 2110, 70) == 1 )
      *v6 = 1;
  }
  return 0;
}

//----- (020499BC) --------------------------------------------------------
int __fastcall ScriptCmd_StorePChosenWireBTower(int a1)
{
  int v1
  int v2
  int v3
  short v4
  short v5

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 172);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  if ( Function_205e6d8(*(uint *)(*(uint *)(v1 + 128) + 12)) == 1 )
  {
    Function_206bd88(*(uint *)(*(uint *)(v1 + 128) + 16), v4, v5);
  }
  else
  {
    *(ushort *)(v2 + 2266) = v5;
    *(uchar *)(v2 + 2261) = v4;
    ScriptHandler_AddFunction(v1, (int)Function_2049a20);
  }
  return 1;
}

//----- (02049A20) --------------------------------------------------------
int __fastcall Function_2049a20(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = *(uint *)(a1 + 128);
  v2 = *(uint *)(v1 + 172);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(v1, *(ushort *)(v2 + 2266));
  if ( *(uchar *)(v2 + 2261) == 1 )
    v4 = 1;
  else
    v4 = 2;
  if ( *(uchar *)(v2 + 2260) != v4 )
    return 0;
  *(uchar *)(v2 + 2260) = 0;
  *v3 = *(ushort *)(v2 + 2264);
  return 1;
}

//----- (02049A68) --------------------------------------------------------
int __fastcall ScriptCmd_StoreRankDataWireBTower(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  ushort *v6
  int v7
  ushort *v8
  int v9
  uchar v11
  uchar v12
  int v13

  v13 = a4;
  v4 = a1;
  v5 = ScriptHandler_LoadHWord(a1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v4);
  v8 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v7);
  v9 = Function_202d764(*(uint *)(*(uint *)(v4 + 128) + 12));
  Function_202d708(v9, &v11);
  *v6 = v11;
  *v8 = v12;
  return 0;
}

//----- (02049AB4) --------------------------------------------------------
int __fastcall Function_2049ab4(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = Function_202d764(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_202d5f0(v4);
  return 0;
}

//----- (02049AE0) --------------------------------------------------------
uint __fastcall Function_2049ae0(uchar *a1, int a2)
{
  uint result

  if ( a2 == 2 )
    return (uint)(uchar)a1[16] << 24 >> 29;
  if ( a2 == 1 )
  {
    if ( a1[15] == 2 )
    {
      result = *((ushort *)Unknown_20ebc78 + ((uint)(uchar)a1[16] << 24 >> 29));
    }
    else if ( a1[18] )
    {
      result = 97;
    }
    else
    {
      result = 0;
    }
  }
  else if ( a1[17] )
  {
    result = 97;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (02049B24) --------------------------------------------------------
int __fastcall ScriptCmd_ShowBattlePointsBox(int a1)
{
  int v1
  uchar *v2
  int v3
  int v4
  int v5
  uint *v6

  v1 = a1;
  v2 = *(uchar **)(a1 + 8);
  v3 = *(uint *)(a1 + 128);
  *(uint *)(v1 + 8) = v2 + 1;
  v4 = *v2;
  *(uint *)(v1 + 8) = v2 + 2;
  v5 = v2[1];
  v6 = (uint *)ScriptHandler_GetSomeScriptAddresses(v3, 0x26u);
  *v6 = ((int (__fastcall *)(uint, int, int))dword_21DD140[0])(*(uint *)(v1 + 128), v4, v5);
  return 0;
}

//----- (02049B54) --------------------------------------------------------
int __fastcall ScriptCmd_HideBattlePointsBox(int a1)
{
  uint *v1

  v1 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x26u);
  ((void (__fastcall *)(uint))dword_21DD084[0])(*v1);
  return 0;
}

//----- (02049B6C) --------------------------------------------------------
int __fastcall ScriptCmd_UpdateBPointsbox(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x26u);
  ((void (__fastcall *)(uint, uint))dword_21DD1A4[0])(*(uint *)(v1 + 128), *v2);
  return 0;
}

//----- (02049B8C) --------------------------------------------------------
int __fastcall Function_2049b8c(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  ushort *v5

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = (ushort *)Function_202d750(v2);
  *v4 = Function_202d230(v5, 0, 0);
  return 0;
}

//----- (02049BBC) --------------------------------------------------------
int __fastcall Function_2049bbc(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  ushort *v6

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_202cf70(v5, 68, v4);
  v6 = (ushort *)Function_202d750(v2);
  Function_202d230(v6, v4, 5u);
  return 0;
}

//----- (02049C00) --------------------------------------------------------
int __fastcall ScriptCmd_TakeBPoints(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  ushort *v6

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_202cf70(v5, 69, v4);
  v6 = (ushort *)Function_202d750(v2);
  Function_202d230(v6, v4, 6u);
  return 0;
}

//----- (02049C44) --------------------------------------------------------
int __fastcall ScriptCmd_CheckBPoints(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  int v5
  ushort *v6
  ushort *v7

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = (ushort *)Function_202d750(v2);
  *v6 = Function_202d230(v7, 0, 0) >= v4;
  return 0;
}

//----- (02049C94) --------------------------------------------------------
int __fastcall Function_2049c94(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  uint v5
  int v6
  ushort *v7
  int v8
  ushort *v9
  int v10
  int v11

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = ScriptHandler_LoadHWord(v1);
  v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v8);
  if ( v3 == 1 )
    v10 = 26;
  else
    v10 = 0;
  v11 = v10 + v5;
  *v7 = HIWORD(Unknown_20ebc78[v11 + 2]);
  *v9 = Unknown_20ebc84[v11];
  return 0;
}

//----- (02049D08) --------------------------------------------------------
int __fastcall Function_2049d08(uint a1)
{
  int result

  switch ( (uchar)a1 )
  {
    case 0:
    case 4:
    case 5:
      result = 3;
      break;
    case 1:
      result = 4;
      break;
    case 2:
    case 3:
    case 6:
      result = 2;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02049D38) --------------------------------------------------------
int __fastcall Function_2049d38(ushort *a1, int a2, int a3, int a4)
{
  int v4

  v4 = 0;
  if ( a4 <= 0 )
    return 0;
  while ( a2 != *a1 || !a3 || a3 != a1[1] )
  {
    ++v4;
    a1 += 2;
    if ( v4 >= a4 )
      return 0;
  }
  return 1;
}

//----- (02049D64) --------------------------------------------------------
int __fastcall Function_2049d64(ushort *a1, int a2)
{
  int v2
  ushort *v3
  int v4
  ushort *v5

  v2 = 0;
  if ( a2 - 1 <= 0 )
    return 1;
  v3 = a1;
  while ( 1 )
  {
    v4 = v2 + 1;
    if ( v2 + 1 < a2 )
      break;
LABEL_11:
    ++v2;
    v3 += 2;
    if ( v2 >= a2 - 1 )
      return 1;
  }
  v5 = &a1[2 * v4];
  while ( 1 )
  {
    if ( *v3 == *v5 )
      return 0;
    if ( v3[1] && v3[1] == v5[1] )
      return 0;
    ++v4;
    v5 += 2;
    if ( v4 >= a2 )
      goto LABEL_11;
  }
}

//----- (02049DB4) --------------------------------------------------------
int __fastcall Function_2049db4(ushort *a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v7
  short *v8
  ushort *v9
  int v10
  short *v11
  short *v12
  ushort *v13
  int v14
  int v15
  int v16
  ushort v17
  ushort v18
  short v19
  short v20
  short v21
  short v22
  short v23
  short v24
  int v25

  v25 = a4;
  v9 = a1;
  v4 = a2;
  v5 = a3;
  v10 = a4;
  MI_CpuFill8(&v17, 0, 0x10u);
  v16 = 0;
  if ( v10 <= 0 )
    return 0;
  v13 = v9;
  while ( 1 )
  {
    v17 = *v13;
    v18 = v13[1];
    v15 = v16 + 1;
    if ( v16 + 1 < v5 )
      break;
LABEL_20:
    v13 += 2;
    if ( ++v16 >= v10 )
      return 0;
  }
  v12 = (short *)&v9[2 * (v16 + 1)];
  while ( 1 )
  {
    v19 = *v12;
    v20 = v12[1];
    if ( v4 == 2 )
    {
      if ( Function_2049d64(&v17, 2) )
        return 1;
      goto LABEL_19;
    }
    v14 = v15 + 1;
    if ( v15 + 1 < v5 )
      break;
LABEL_19:
    v12 += 2;
    if ( ++v15 >= v5 )
      goto LABEL_20;
  }
  v11 = (short *)&v9[2 * (v15 + 1)];
  while ( 1 )
  {
    v21 = *v11;
    v22 = v11[1];
    if ( v4 != 3 )
      break;
    if ( Function_2049d64(&v17, 3) )
      return 1;
LABEL_18:
    v11 += 2;
    if ( ++v14 >= v5 )
      goto LABEL_19;
  }
  v7 = v14 + 1;
  if ( v14 + 1 >= v5 )
    goto LABEL_18;
  v8 = (short *)&v9[2 * v7];
  while ( 1 )
  {
    v23 = *v8;
    v24 = v8[1];
    if ( Function_2049d64(&v17, v4) )
      return 1;
    ++v7;
    v8 += 2;
    if ( v7 >= v5 )
      goto LABEL_18;
  }
}

//----- (02049EC4) --------------------------------------------------------
int __fastcall Function_2049ec4(int a1, int a2, int a3)
{
  int result
  uint v4
  int v5
  int v6
  int v7
  ushort *v8
  int v9
  int v10
  int *v11
  uint *v12
  int v13
  ushort v14[2]

  v9 = a1;
  v10 = a3;
  v12 = (uint *)LoadPokePartyAdress(a2);
  v13 = (uchar)GetNrOfPkmnInParty((int)v12);
  if ( v13 < v9 )
    return 0;
  v4 = 0;
  v5 = 0;
  if ( v13 )
  {
    do
    {
      v11 = GetAdrOfPkmnInParty(v12, v4);
      v6 = (ushort)GetPkmnData(v11, 5u, 0);
      v7 = (ushort)GetPkmnData(v11, 6u, 0);
      if ( !v10 )
        v7 = 0;
      if ( !GetPkmnData(v11, 0x4Cu, 0)
        && Function_2078804(v6) != 1
        && (v10 != 1 || Function_2049d38(v14, v6, v7, v5) != 1) )
      {
        v8 = &v14[2 * v5];
        *v8 = v6;
        v8[1] = v7;
        v5 = (v5 + 1) & 0xFF;
      }
      v4 = (v4 + 1) & 0xFF;
    }
    while ( v4 < v13 );
  }
  if ( v5 >= v9 )
    result = Function_2049db4(v14, v9, v5, v5 - v9 + 1);
  else
    result = 0;
  return result;
}

//----- (02049F8C) --------------------------------------------------------
int Function_2049f8c()
{
  return OS_ResetSystem(0);
}

//----- (02049F98) --------------------------------------------------------
ushort *__fastcall Function_2049f98(ushort *a1)
{
  return Function_202d060(a1);
}

//----- (02049FA0) --------------------------------------------------------
uint __fastcall Function_2049fa0(uchar *a1)
{
  return Function_202d214(a1);
}

//----- (02049FA8) --------------------------------------------------------
char *__fastcall Function_2049fa8(int a1)
{
  int v1
  int v2
  uint *v3
  int v4
  int v5
  int v6

  v1 = a1;
  v2 = LoadVariableAreaAdress_6(*(uint *)(a1 + 12));
  v3 = (uint *)AddVariableAreaAdress_6_MapData3(v2);
  v4 = GetSpritePositionY(*(uint *)(v1 + 60));
  v5 = GetSpritePositionX(*(uint *)(v1 + 60));
  *v3 = **(uint **)(v1 + 28);
  v3[1] = -1;
  v3[2] = v5;
  v3[3] = v4;
  v3[4] = 0;
  v6 = LoadFlagAdress(*(uint *)(v1 + 12));
  return Function_206ad9c(v6);
}

//----- (02049FE8) --------------------------------------------------------
char *__fastcall Function_2049fe8(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(a1 + 12));
  return Function_206adac(v1);
}

//----- (02049FF8) --------------------------------------------------------
int __fastcall Function_2049ff8(int a1, int a2)
{
  int v2
  int result
  int v4
  int v5
  int v6

  v2 = a2;
  if ( a2 == 5 )
    return 0;
  if ( a2 == 6 )
  {
    v4 = LoadVariableAreaAdress_17(a1);
    v5 = Function_205e6a8(0x71u);
    result = Function_2030698(v4, 113, v5);
  }
  else
  {
    v6 = LoadVariableAreaAdress_17(a1);
    result = Function_2030698(v6, 2 * v2 + 1, 255);
  }
  return result;
}

//----- (0204A030) --------------------------------------------------------
int __fastcall Function_204a030(int a1, int a2)
{
  int v2
  int v3
  int result

  v2 = a2;
  v3 = Function_202d750(a1);
  if ( v2 )
    result = Function_202d414(v3, 5u, 1);
  else
    result = Function_202d414(v3, 5u, 2);
  return result;
}

//----- (0204A050) --------------------------------------------------------
int __fastcall Function_204a050(int a1)
{
  int v1

  v1 = Function_202d750(a1);
  return (ushort)Function_202d414(v1, 5u, 0);
}

//----- (0204A064) --------------------------------------------------------
uint __fastcall Function_204a064(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  uint v5
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15

  v1 = a1;
  v2 = Function_202d740(a1);
  v3 = Function_202d750(v1);
  v5 = (uchar)Function_202d0bc(v2, 0, 0, v4);
  if ( v5 == 5 )
    return 5;
  if ( v5 == 6 )
  {
    v7 = LoadVariableAreaAdress_17(v1);
    v8 = Function_205e6a8(0x64u);
    Function_20306e4(v7, 100, v8, 0);
  }
  else
  {
    Function_202d414(v3, (v5 + 8) & 0xFFFF, 2);
  }
  Function_202d3b4(v3, v5, 2);
  v9 = LoadVariableAreaAdress_17(v1);
  v10 = Function_205e750(v5);
  v11 = Function_205e750(v5);
  v12 = Function_205e6a8(v11);
  Function_20306e4(v9, v10, v12, 0);
  if ( v5 != 4 && v5 != 6 )
    Function_206c02c(v1, v13, v14, v15);
  return v5;
}

//----- (0204A100) --------------------------------------------------------
int __fastcall Function_204a100(int a1)
{
  int v1

  v1 = Function_202d764(a1);
  return (ushort)Function_202d5e8(v1);
}

//----- (0204A110) --------------------------------------------------------
int __fastcall Function_204a110(uint *a1)
{
  uint *v1
  int result

  v1 = a1;
  if ( *a1 )
    ErrorHandler();
  result = 0;
  *v1 = 0;
  return result;
}

//----- (0204A124) --------------------------------------------------------
int __fastcall Function_204a124(int a1, int a2, char a3)
{
  int v3
  int v4
  char v5
  int v6
  uint v7
  uint v8
  uint v9
  uint v10
  uint v11
  uint v12
  uint v13
  uint v14
  uint v15
  uint v16
  uint v17
  int v18
  int v19
  int v20
  int v21
  int v22
  int v23
  int v24
  int v25
  int v26
  int v27
  short v28
  short v29
  char v31

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = malloc(0xBu, 2268);
  MI_CpuFill8((ushort *)v6, 0, 0x8DCu);
  *(uint *)(v6 + 4) = 11;
  *(uint *)(v6 + 112) = Function_202d740(v4);
  *(uint *)(v6 + 116) = Function_202d750(v4);
  *(uint *)v6 = 305419896;
  Function_202d21c(*(uchar **)(v6 + 112), 0);
  if ( v3 )
  {
    *(uchar *)(v6 + 15) = Function_202d0bc(*(uint *)(v6 + 112), 0, 0, v7);
    *(uchar *)(v6 + 12) = Function_202d0bc(*(uint *)(v6 + 112), 1u, 0, v10);
    *(uchar *)(v6 + 13) = *(uchar *)(v6 + 12) - 1;
    *(uchar *)(v6 + 14) = Function_2049d08(*(uchar *)(v6 + 15));
    Function_202d0bc(*(uint *)(v6 + 112), 5u, v6 + 42, v11);
    Function_202d0bc(*(uint *)(v6 + 112), 8u, v6 + 62, v12);
    *(uint *)(v6 + 8) = Function_202d0bc(*(uint *)(v6 + 112), 0xAu, 0, v13);
    if ( *(uchar *)(v6 + 15) == 2 )
    {
      *(uchar *)(v6 + 16) = 32 * Function_202d0bc(*(uint *)(v6 + 112), 9u, 0, v14) | *(uchar *)(v6 + 16) & 0x1F;
      v15 = 16 * ((uint)*(uchar *)(v6 + 16) << 24 >> 29);
      Function_202d0bc(*(uint *)(v6 + 112), 6u, v6 + 2024 + v15, v15);
      v16 = (uint)*(uchar *)(v6 + 16) << 24 >> 29;
      v18 = Function_202d0bc(*(uint *)(v6 + 112), 7u, 0, v17);
      Function_204b404(
        v6,
        v6 + 664 + 272 * v16,
        (v16 + 300) & 0xFFFF,
        v18,
        (int *)(v6 + 2024 + 16 * v16),
        *(uint *)(v6 + 4));
    }
  }
  else
  {
    *(uchar *)(v6 + 15) = v5;
    *(uchar *)(v6 + 14) = Function_2049d08(*(uchar *)(v6 + 15));
    *(uchar *)(v6 + 12) = 1;
    v8 = 0;
    *(uchar *)(v6 + 13) = 0;
    do
    {
      *(uchar *)(v6 + v8 + 42) = -1;
      v8 = (v8 + 1) & 0xFFFF;
    }
    while ( v8 < 4 );
    v9 = 0;
    do
    {
      *(ushort *)(v6 + 2 * v9 + 62) = -1;
      v9 = (v9 + 1) & 0xFFFF;
    }
    while ( v9 < 0xE );
    Function_202d060(*(ushort **)(v6 + 112));
    v31 = *(uchar *)(v6 + 15);
    Function_202d140(*(uint *)(v6 + 112), 0, &v31);
  }
  v19 = LoadTrainerDataAdress(v4);
  *(uchar *)(v6 + 17) = GetGender(v19);
  if ( *(uchar *)(v6 + 15) != 5 )
  {
    v20 = LoadVariableAreaAdress_17(v4);
    v21 = LoadVariableAreaAdress_14(v4);
    v22 = *(uchar *)(v6 + 15);
    v23 = v21;
    if ( v22 == 6 )
    {
      v24 = LoadFlagAdress(v4);
      v25 = Function_206b6fc(v24);
    }
    else
    {
      v25 = (ushort)Function_202d414(*(uint *)(v6 + 116), (v22 + 8) & 0xFFFF, 0);
    }
    if ( v25 )
    {
      v26 = *(uchar *)(v6 + 15);
      if ( v26 == 6 )
      {
        v27 = Function_205e6a8(0x71u);
        v28 = Function_2030698(v20, 113, v27);
      }
      else
      {
        v28 = Function_2030698(v20, 2 * v26 + 1, 255);
      }
      *(ushort *)(v6 + 26) = v28;
      *(ushort *)(v6 + 28) = Function_202d3b4(*(uint *)(v6 + 116), *(uchar *)(v6 + 15), 0);
    }
    *(uint *)(v6 + 32) = Function_202cfb8(v23, 29);
  }
  if ( *(uchar *)(v6 + 15) == 6 )
  {
    v29 = s32_div_f(*(ushort *)(v6 + 26), 7);
    *(ushort *)(v6 + 28) = Function_202d3fc(*(uint *)(v6 + 116), 6, v29);
  }
  return v6;
}

//----- (0204A32C) --------------------------------------------------------
uint *__fastcall Function_204a32c(uint *result)
{
  ushort *v1

  v1 = result;
  if ( result )
  {
    if ( *result != 305419896 )
      ErrorHandler();
    MI_CpuFill8(v1, 0, 0x8DCu);
    result = (uint *)free((int)v1);
  }
  return result;
}

//----- (0204A358) --------------------------------------------------------
uint *__fastcall Function_204a358(int a1, int a2, int a3)
{
  return Function_206bbfc(a2, a3, 17, 0, *(uchar *)(a1 + 14), *(uchar *)(a1 + 14), 100, 0);
}

//----- (0204A378) --------------------------------------------------------
int __fastcall Function_204a378(int a1, int *a2, int a3)
{
  int v3
  int result
  int i
  int v6
  int *v7
  int *v8
  int v9
  uint *v10

  v3 = a1;
  v8 = a2;
  v9 = *a2;
  if ( *(uchar *)(*a2 + 35) || *(uchar *)(v9 + 34) == 7 )
  {
    free(v9);
    result = 0;
    *v8 = 0;
  }
  else
  {
    v10 = (uint *)LoadPokePartyAdress(a3);
    for ( i = 0; i < *(uchar *)(v3 + 14); i = (i + 1) & 0xFFFF )
    {
      *(uchar *)(v3 + i + 42) = *(uchar *)(v9 + i + 44) - 1;
      v6 = v3 + 2 * i;
      v7 = GetAdrOfPkmnInParty(v10, *(uchar *)(v3 + i + 42));
      *(ushort *)(v6 + 46) = GetPkmnData(v7, 5u, 0);
      *(ushort *)(v6 + 54) = GetPkmnData(v7, 6u, 0);
    }
    free(*v8);
    *v8 = 0;
    result = 1;
  }
  return result;
}

//----- (0204A410) --------------------------------------------------------
int __fastcall Function_204a410(int a1, int a2)
{
  int v2
  int *v3
  uint v4
  uint v5
  int v7
  uint *v8
  char v9[8]
  ushort v10[1]

  v7 = a1;
  v8 = (uint *)LoadPokePartyAdress(a2);
  v2 = 0;
  if ( (int)*(uchar *)(v7 + 14) <= 0 )
    return 0;
  while ( 1 )
  {
    v3 = GetAdrOfPkmnInParty(v8, *(uchar *)(v7 + v2 + 42));
    v4 = 2 * v2;
    v10[v4 / 2] = GetPkmnData(v3, 5u, 0);
    *(ushort *)&v9[v4] = GetPkmnData(v3, 6u, 0);
    if ( v2 )
    {
      v5 = 0;
      if ( v2 )
        break;
    }
LABEL_10:
    v2 = (v2 + 1) & 0xFFFF;
    if ( v2 >= *(uchar *)(v7 + 14) )
      return 0;
  }
  while ( 1 )
  {
    if ( v10[v4 / 2] == v10[v5] )
      return 1;
    if ( *(ushort *)&v9[v4] && *(ushort *)&v9[v4] == *(ushort *)&v9[2 * v5] )
      return 2;
    v5 = (v5 + 1) & 0xFFFF;
    if ( v5 >= v2 )
      goto LABEL_10;
  }
}

//----- (0204A4A0) --------------------------------------------------------
int __fastcall Function_204a4a0(int a1, int a2, uint a3)
{
  uint v3

  v3 = 0;
  if ( !a3 )
    return 0;
  while ( a2 != *(ushort *)(a1 + 2 * v3) )
  {
    v3 = (v3 + 1) & 0xFFFF;
    if ( v3 >= a3 )
      return 0;
  }
  return 1;
}

//----- (0204A4C8) --------------------------------------------------------
int __fastcall Function_204a4c8(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  int v5
  int v6
  short v7
  int result
  int v9
  int v10
  int v11
  short v12
  uint v13
  int v14
  int v15

  v1 = a1;
  v2 = *(uchar *)(a1 + 15);
  if ( v2 != 2 && v2 != 6 && v2 != 3 )
  {
    v9 = 0;
    v10 = a1;
    v15 = a1 + 62;
    do
    {
      do
      {
        v11 = Function_204b0f0(v1, *(ushort *)(v1 + 28) & 0xFF, (uchar)v9, *(uchar *)(v1 + 15));
        v12 = v11;
        result = Function_204a4a0(v15, v11, (ushort)v9);
      }
      while ( result );
      ++v9;
      *(ushort *)(v10 + 62) = v12;
      v10 += 2;
    }
    while ( v9 < 7 );
  }
  else
  {
    if ( v2 != 3 || (v3 = *(ushort *)(a1 + 20), v3 <= *(ushort *)(a1 + 28)) )
    {
      if ( v2 != 6 || (v3 = *(ushort *)(a1 + 20), v3 <= *(ushort *)(a1 + 28)) )
        LOWORD(v3) = *(ushort *)(a1 + 28);
    }
    v13 = (uchar)v3;
    v4 = 0;
    v5 = a1;
    v14 = a1 + 62;
    do
    {
      do
      {
        v6 = Function_204b0f0(v1, v13, (v4 + ((uint)v4 >> 31)) << 23 >> 24, *(uchar *)(v1 + 15));
        v7 = v6;
        result = Function_204a4a0(v14, v6, (ushort)v4);
      }
      while ( result );
      ++v4;
      *(ushort *)(v5 + 62) = v7;
      v5 += 2;
    }
    while ( v4 < 14 );
  }
  return result;
}

//----- (0204A578) --------------------------------------------------------
int __fastcall Function_204a578(int a1)
{
  return *(uchar *)(a1 + 12);
}

//----- (0204A57C) --------------------------------------------------------
int __fastcall Function_204a57c(int a1)
{
  if ( *(uchar *)(a1 + 16) & 1 )
    return 1;
  if ( *(uchar *)(a1 + 12) <= 7u )
    return 0;
  *(uchar *)(a1 + 16) = *(uchar *)(a1 + 16) & 0xFE | 1;
  return 1;
}

//----- (0204A5A0) --------------------------------------------------------
int __fastcall Function_204a5a0(int a1, int a2, short a3)
{
  int v3
  int result
  int v5
  short v6
  uint *v7
  int *v8
  int *v9

  v3 = a1;
  result = *(uchar *)(a1 + 15);
  v5 = a2;
  v6 = a3;
  if ( !result || result == 1 )
  {
    v7 = (uint *)LoadPokePartyAdress(a2);
    if ( *(uchar *)(v3 + 15) )
    {
      v9 = GetAdrOfPkmnInParty(v7, *(uchar *)(v3 + 42));
      result = Function_206dbb0(v5, v6, v9, 0);
    }
    else
    {
      v8 = GetAdrOfPkmnInParty(v7, *(uchar *)(v3 + 42));
      result = Function_206dbb0(v5, v6, v8, 1);
    }
  }
  return result;
}

//----- (0204A5EC) --------------------------------------------------------
int __fastcall Function_204a5ec(int result, int a2, char a3, uint a4)
{
  int v4
  char v5
  int v6
  int v7
  uint v8
  int v9
  uint v10

  v10 = a4;
  v4 = result;
  v5 = a3;
  v6 = *(uchar *)(result + 15);
  v7 = a2;
  v8 = a4;
  if ( *(uchar *)(result + 15) )
  {
    if ( v6 != 1 )
    {
      if ( v6 == 4 )
      {
        Function_204ae20(result, a2, 1);
        Function_202d1e8(
          *(uint *)(v4 + 112),
          *(ushort *)(v4 + 40) & 0xFF,
          *(ushort *)(v4 + 36),
          *(ushort *)(v4 + 38));
        LOBYTE(v10) = *(uchar *)(v4 + 15);
        Function_202d140(*(uint *)(v4 + 112), 0, &v10);
        LOBYTE(v10) = *(uchar *)(v4 + 12);
        Function_202d140(*(uint *)(v4 + 112), 1u, &v10);
        result = Function_202d334(*(uint *)(v4 + 116), *(uint *)(v4 + 112));
      }
      return result;
    }
  }
  else
  {
    result = Function_204ae20(result, a2, 0);
  }
  if ( v8 >= 7 )
  {
    v9 = Function_202440c(v7);
    result = Function_206cfe4(v9, v5, v8);
  }
  return result;
}

//----- (0204A660) --------------------------------------------------------
int __fastcall Function_204a660(int a1, int a2)
{
  int v2
  int v3
  int result
  int v5
  int v6
  int v7
  uint v8
  short v9
  int v10
  int v11
  int v12
  int v13
  int v14
  uint v15
  int v16
  uint v17
  int v18
  int v19
  int v20
  uint v21
  int v22
  int v23
  uint v24

  v2 = a2;
  v3 = a1;
  v23 = LoadVariableAreaAdress_14(a2);
  v22 = LoadVariableAreaAdress_17(v2);
  result = *(uchar *)(v3 + 15);
  if ( result != 5 )
  {
    if ( result == 6 )
      v5 = 112;
    else
      v5 = 2 * result;
    v6 = Function_205e6a8(v5);
    v24 = Function_2030698(v22, v5, v6);
    v7 = Function_205e6a8(v5);
    v8 = Function_2030848(v22, v5, v7, (*(ushort *)(v3 + 26) + *(uchar *)(v3 + 13)) & 0xFFFF);
    v9 = v8;
    if ( v8 > 1 )
    {
      if ( v24 < v8 || v24 == v8 && (s32_div_f(v8, 7), !v10) )
        Function_204a5a0(v3, v2, v9);
    }
    v11 = *(uchar *)(v3 + 15);
    if ( v11 == 6 )
    {
      v12 = LoadVariableAreaAdress_17(v2);
      v13 = Function_205e6a8(0x64u);
      Function_2030698(v12, 100, v13);
    }
    else
    {
      Function_202d414(*(uint *)(v3 + 116), (v11 + 8) & 0xFFFF, 0);
    }
    v14 = Function_205e6a8(v5 + 1);
    v15 = Function_20306e4(v22, v5 + 1, v14, (*(ushort *)(v3 + 26) + *(uchar *)(v3 + 13)) & 0xFFFF);
    v16 = *(uchar *)(v3 + 15);
    v17 = v15;
    if ( v16 == 6 )
    {
      v18 = LoadVariableAreaAdress_17(v2);
      v19 = Function_205e6a8(0x64u);
      Function_20306e4(v18, 100, v19, 0);
    }
    else
    {
      Function_202d414(*(uint *)(v3 + 116), (v16 + 8) & 0xFFFF, 2);
    }
    Function_202cf70(v23, 29, *(uchar *)(v3 + 13));
    Function_202d3b4(*(uint *)(v3 + 116), *(uchar *)(v3 + 15), 2);
    if ( *(uchar *)(v3 + 15) != 6 )
    {
      v20 = LoadVariableAreaAdress_14(v2);
      Function_202cf70(v20, 15, 1);
    }
    Function_204acc8(v3);
    v21 = v17 + 1;
    if ( v21 > 0x270F )
      LOWORD(v21) = 9999;
    result = Function_204a5ec(v3, v2, 0, (ushort)v21);
  }
  return result;
}

//----- (0204A7A4) --------------------------------------------------------
int __fastcall Function_204a7a4(int a1, int a2, int a3)
{
  int v3
  int result
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  ushort v12
  int v13
  ushort v14
  int v15
  int v16
  int v17
  int v18
  int *v19
  int v20
  int v21
  int v22

  v3 = a1;
  result = *(uchar *)(a1 + 15);
  v5 = a2;
  v20 = a3;
  if ( result != 5 )
  {
    v22 = LoadVariableAreaAdress_14(a2);
    v6 = LoadVariableAreaAdress_17(v5);
    v7 = *(uchar *)(v3 + 15);
    v21 = v6;
    if ( v7 == 6 )
      v8 = 112;
    else
      v8 = 2 * v7;
    if ( v7 == 6 )
    {
      v9 = LoadVariableAreaAdress_17(v5);
      v10 = Function_205e6a8(0x64u);
      Function_2030698(v9, 100, v10);
    }
    else
    {
      Function_202d414(*(uint *)(v3 + 116), (v7 + 8) & 0xFFFF, 0);
    }
    v11 = Function_205e6a8(v8 + 1);
    v12 = Function_20306e4(v21, v8 + 1, v11, (*(ushort *)(v3 + 26) + *(uchar *)(v3 + 13)) & 0xFFFF);
    v13 = *(uchar *)(v3 + 15);
    v14 = v12;
    if ( v13 == 6 )
    {
      v15 = LoadVariableAreaAdress_17(v5);
      v16 = Function_205e6a8(0x64u);
      Function_20306e4(v15, 100, v16, 1u);
    }
    else
    {
      Function_202d414(*(uint *)(v3 + 116), (v13 + 8) & 0xFFFF, 1);
    }
    v17 = Function_205e6a8(v8);
    Function_2030698(v21, v8, v17);
    v18 = Function_205e6a8(v8);
    Function_2030848(v21, v8, v18, v14);
    Function_202cf70(v22, 29, 7);
    Function_202d3b4(*(uint *)(v3 + 116), *(uchar *)(v3 + 15), 3);
    if ( *(uchar *)(v3 + 15) != 6 )
      Function_202cf70(v22, 15, 1);
    Function_202cfec(v22, 14);
    Function_204acc8(v3);
    Function_204a5ec(v3, v5, 1, v14);
    result = *(uchar *)(v3 + 15);
    if ( result == 4 )
    {
      v19 = Function_202c238(*(uint *)(v3 + 4));
      result = Function_202b758(v20, (int)v19, 4u);
    }
  }
  return result;
}

//----- (0204A8C8) --------------------------------------------------------
void __fastcall Function_204a8c8(int a1, int a2, int a3, int a4)
{
  int v4
  char v5
  int v6

  v6 = a4;
  v4 = a1;
  v5 = *(uchar *)(a1 + 15);
  Function_202d140(*(uint *)(a1 + 112), 0, &v5);
  v5 = *(uchar *)(v4 + 12);
  Function_202d140(*(uint *)(v4 + 112), 1u, &v5);
  Function_202d140(*(uint *)(v4 + 112), 5u, (uchar *)(v4 + 42));
  Function_202d1e8(
    *(uint *)(v4 + 112),
    *(ushort *)(v4 + 40) & 0xFF,
    *(ushort *)(v4 + 36),
    *(ushort *)(v4 + 38));
  Function_202d140(*(uint *)(v4 + 112), 8u, (uchar *)(v4 + 62));
  Function_202d140(*(uint *)(v4 + 112), 0xAu, (uchar *)(v4 + 8));
  Function_202d21c(*(uchar **)(v4 + 112), 1);
  if ( *(uchar *)(v4 + 15) == 2 )
  {
    v5 = (uint)*(uchar *)(v4 + 16) << 24 >> 29;
    Function_202d140(*(uint *)(v4 + 112), 9u, &v5);
    Function_202d140(
      *(uint *)(v4 + 112),
      6u,
      (uchar *)(v4 + 2024 + 16 * ((uint)*(uchar *)(v4 + 16) << 24 >> 29)));
    Function_202d140(
      *(uint *)(v4 + 112),
      7u,
      (uchar *)(v4 + 2104 + ((uint)*(uchar *)(v4 + 16) << 24 >> 29)));
  }
}

//----- (0204A97C) --------------------------------------------------------
int __fastcall Function_204a97c(int a1)
{
  int v1
  int v2
  int v3
  int v4
  char v5
  int v6
  int result
  ushort *v8
  ushort *v9

  v1 = a1;
  v2 = 0;
  v3 = a1 + 2024;
  v4 = a1 + 664;
  v8 = (ushort *)(a1 + 46);
  v9 = (ushort *)(a1 + 54);
  do
  {
    v5 = Function_204b3b8(v1, v4, (v2 + 300) & 0xFFFF, *(uchar *)(v1 + 14), v8, v9, v3, *(uint *)(v1 + 4));
    v6 = v1 + v2++;
    *(uchar *)(v6 + 2104) = v5;
    result = 272;
    v3 += 16;
    v4 += 272;
  }
  while ( v2 < 5 );
  return result;
}

//----- (0204A9E0) --------------------------------------------------------
int __fastcall Function_204a9e0(int a1, int a2)
{
  return Function_204af9c(*(ushort *)(a1 + 272 * a2 + 124) & 0xFF);
}

//----- (0204A9F8) --------------------------------------------------------
int __fastcall Function_204a9f8(int a1)
{
  return *(uchar *)(a1 + 15);
}

//----- (0204A9FC) --------------------------------------------------------
uint __fastcall Function_204a9fc(int a1)
{
  return (uint)*(uchar *)(a1 + 16) << 29 >> 30;
}

//----- (0204AA04) --------------------------------------------------------
int __fastcall Function_204aa04(int a1)
{
  int v1
  int v2
  int v4
  uint v5
  uint v6

  v1 = a1;
  v2 = *(uchar *)(a1 + 15);
  if ( v2 == 5 )
    return 0;
  if ( v2 == 4 )
  {
    v4 = *((uchar *)Unknown_20ebd44 + Function_202d2c0(*(uint *)(a1 + 116), 0));
  }
  else if ( v2 != 3 && v2 != 6 )
  {
    v6 = Function_202d3b4(*(uint *)(a1 + 116), v2, 0);
    if ( (uint)*(uchar *)(v1 + 16) << 29 >> 30 )
    {
      v4 = 20;
    }
    else if ( v6 < 7 )
    {
      v4 = *((uchar *)Unknown_20ebd30 + v6);
    }
    else
    {
      v4 = 7;
    }
  }
  else
  {
    v5 = Function_202d3b4(*(uint *)(a1 + 116), v2, 0);
    if ( v5 < 7 )
      v4 = *((uchar *)Unknown_20ebd28 + v5);
    else
      v4 = 18;
  }
  Function_202d230(*(ushort **)(v1 + 116), v4, 5u);
  return v4;
}

//----- (0204AA7C) --------------------------------------------------------
int __fastcall Function_204aa7c(int a1, int a2)
{
  int v2
  uint v3
  bool v5
  int v6

  v2 = a1;
  v3 = Function_2049ff8(a2, *(uchar *)(a1 + 15));
  if ( v3 < 0x32 )
    return 0;
  v5 = v3 >= 0x64;
  v6 = *(uint *)(v2 + 116);
  if ( v5 )
  {
    if ( Function_202d414(v6, 1u, 0) )
      return 0;
  }
  else if ( Function_202d414(v6, 0, 0) )
  {
    return 0;
  }
  return 1;
}

//----- (0204AABC) --------------------------------------------------------
int __fastcall Function_204aabc(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int v6
  int v7
  uint v8
  int v9
  int result

  v3 = a1;
  v4 = a3;
  v5 = Function_202d750(a2);
  v6 = v5;
  switch ( v4 )
  {
    case 0:
      return Function_202d2c0(v5, 0);
    case 1:
      Function_202d414(v5, 4u, 2);
      v7 = Function_202d2c0(v6, 0);
      if ( v7 == 10 )
      {
        *(uchar *)(v3 + 16) |= 0x10u;
        result = 0;
      }
      else
      {
        Function_202d2c0(v6, 3);
        if ( v7 + 1 >= 5 )
          *(uchar *)(v3 + 16) |= 0x10u;
        result = 1;
      }
      break;
    case 2:
      v8 = Function_202d288(v5, 3);
      v9 = Function_202d2c0(v6, 0);
      if ( v9 == 1 )
      {
        result = 0;
      }
      else if ( v8 < *((uchar *)Unknown_20ebd38 + v9 - 1) )
      {
        result = 0;
      }
      else
      {
        Function_202d2c0(v6, 4);
        Function_202d288(v6, 2);
        Function_202d414(v6, 4u, 2);
        result = 1;
      }
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0204AB68) --------------------------------------------------------
BOOL __fastcall Function_204ab68(int a1, int a2, int a3, int a4)
{
  int v4
  uint v6

  v4 = a1;
  if ( *(uchar *)(a1 + 15) )
    return 0;
  v6 = (uint)*(uchar *)(a1 + 16) << 29 >> 30;
  if ( v6 == 1 )
    return Function_204ac54(a2, 0x1Au, v4, a4);
  if ( v6 == 2 )
    return Function_204ac54(a2, 0x1Bu, v4, a4);
  return 0;
}

//----- (0204ABA0) --------------------------------------------------------
BOOL __fastcall Function_204aba0(int a1, int a2, int a3, uint a4)
{
  int v4
  int v5

  v4 = a1;
  v5 = *(uchar *)(a1 + 15);
  if ( v5 == 5 )
    return 0;
  if ( v5 == 6 )
    return 0;
  if ( !(*(uchar *)(v4 + 16) & 0x10) )
    return 0;
  switch ( (uchar)v5 )
  {
    case 1:
      a4 = 28;
      break;
    case 2:
      a4 = 29;
      break;
    case 3:
      a4 = 30;
      break;
    case 4:
      a4 = 31;
      break;
    default:
      return Function_204ac54(a2, a4, v4, a4);
  }
  return Function_204ac54(a2, a4, v4, a4);
}

//----- (0204ABF4) --------------------------------------------------------
int __fastcall Function_204abf4(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5
  int v6
  char v7
  int v8
  int v9
  int v10
  int v11

  v2 = a1;
  v3 = a2;
  v4 = *(uchar *)(a1 + 15);
  if ( v4 == 6 )
  {
    v5 = LoadVariableAreaAdress_17(v3);
    v6 = Function_205e6a8(0x64u);
    v7 = Function_2030698(v5, 100, v6);
  }
  else
  {
    v7 = Function_202d414(*(uint *)(a1 + 116), (v4 + 8) & 0xFFFF, 0);
  }
  if ( v7 )
    v11 = Function_206c068(v3, v8, v9, v10);
  else
    v11 = Function_206c02c(v3, v8, v9, v10);
  *(uint *)(v2 + 8) = v11;
  return (ushort)u32_div_f(*(uint *)(v2 + 8), 0xFFFF);
}

//----- (0204AC54) --------------------------------------------------------
BOOL __fastcall Function_204ac54(int a1, uint a2, int a3, int a4)
{
  uint v4
  int v5
  int v6
  int *v7
  int v9
  uint *i
  int v11
  ushort v12[2]
  int v13

  v13 = a4;
  v4 = a2;
  v5 = a3;
  v9 = a1;
  LOBYTE(v12[0]) = 1;
  v6 = 0;
  v11 = 0;
  for ( i = (uint *)LoadPokePartyAdress(a1); v6 < *(uchar *)(v5 + 14); ++v6 )
  {
    v7 = GetAdrOfPkmnInParty(i, *(uchar *)(v5 + v6 + 42));
    if ( !GetPkmnData(v7, v4, 0) )
    {
      SetPkmnData((int)v7, v4, v12);
      Function_206ddb8(v9, v7, v4);
      v11 = (v11 + 1) & 0xFF;
    }
  }
  return v11 != 0;
}

//----- (0204ACC8) --------------------------------------------------------
int __fastcall Function_204acc8(int a1)
{
  int v1

  v1 = *(uchar *)(a1 + 15);
  if ( v1 == 5 || !*(uchar *)(a1 + 15) || v1 == 6 || v1 == 4 )
    return 0;
  if ( ((*(ushort *)(a1 + 26) + *(uchar *)(a1 + 13)) & 0xFFFFu) < 0x32 )
    return 0;
  *(uchar *)(a1 + 16) |= 0x10u;
  return 1;
}

//----- (0204ACFC) --------------------------------------------------------
uint __fastcall Function_204acfc(int a1, int *a2)
{
  int *v2
  int v3
  int v4
  int v5
  uint v6
  int v7
  int v8
  char v9
  int v10
  int v12
  uchar *v13

  v2 = a2;
  v12 = a1;
  *(ushort *)v12 = *(ushort *)v12 & 0xF800 | GetPkmnData(a2, 5u, 0) & 0x7FF;
  *(ushort *)v12 = *(ushort *)v12 & 0x7FF | ((ushort)GetPkmnData(v2, 0x70u, 0) << 11);
  v3 = 0;
  *(ushort *)(v12 + 2) = GetPkmnData(v2, 6u, 0);
  v4 = v12;
  v5 = 0;
  v13 = (uchar *)(v12 + 30);
  do
  {
    *(ushort *)(v4 + 4) = GetPkmnData(v2, v3 + 54, 0);
    v6 = GetPkmnData(v2, v3++ + 62, 0);
    v4 += 2;
    v7 = (uchar)*v13 | (v6 << v5);
    v5 += 2;
    *v13 = v7;
  }
  while ( v3 < 4 );
  *(uchar *)(v12 + 31) = GetPkmnData(v2, 0xCu, 0);
  *(uint *)(v12 + 12) = GetPkmnData(v2, 7u, 0);
  *(uint *)(v12 + 16) = GetPkmnData(v2, 0, 0);
  v8 = 0;
  *(uint *)(v12 + 20) = GetPkmnData(v2, 0xAFu, 0);
  do
  {
    v9 = GetPkmnData(v2, v8 + 13, 0);
    v10 = v12 + v8++;
    *(uchar *)(v10 + 24) = v9;
  }
  while ( v8 < 6 );
  *(uchar *)(v12 + 32) = GetPkmnData(v2, 0xAu, 0);
  *(uchar *)(v12 + 33) = GetPkmnData(v2, 9u, 0);
  return GetPkmnData(v2, 0x75u, (ushort *)(v12 + 34));
}

//----- (0204AE20) --------------------------------------------------------
int __fastcall Function_204ae20(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  uint *v6
  int v7
  int *v8
  int v10
  ushort *v11

  v3 = a1;
  v4 = a2;
  v10 = a3;
  v11 = (ushort *)malloc2(*(uint *)(a1 + 4), 168);
  MI_CpuFill8(v11, 0, 0xA8u);
  v5 = (int)v11;
  v6 = (uint *)LoadPokePartyAdress(v4);
  v7 = 0;
  do
  {
    v8 = GetAdrOfPkmnInParty(v6, *(uchar *)(v3 + v7 + 42));
    Function_204acfc(v5, v8);
    ++v7;
    v5 += 56;
  }
  while ( v7 < 3 );
  Function_202d2f0(*(uint *)(v3 + 116), v10, (int)v11);
  MI_CpuFill8(v11, 0, 0xA8u);
  return free((int)v11);
}

//----- (0204AE84) --------------------------------------------------------
int __fastcall Function_204ae84(uint a1)
{
  if ( a1 < 0x64 )
    return 3;
  if ( a1 < 0x78 )
    return 6;
  if ( a1 < 0x8C )
    return 9;
  if ( a1 < 0xA0 )
    return 12;
  if ( a1 < 0xB4 )
    return 15;
  if ( a1 < 0xC8 )
    return 18;
  if ( a1 >= 0xDC )
    return 31;
  return 21;
}

//----- (0204AEC0) --------------------------------------------------------
uint __fastcall Function_204aec0(int a1)
{
  int v1
  int v3

  v1 = a1;
  if ( *(uchar *)(a1 + 15) == 6 )
    return PRNG();
  v3 = Function_206bff0(*(uint *)(a1 + 8));
  *(uint *)(v1 + 8) = v3;
  return (ushort)u32_div_f(v3, 0xFFFF);
}

//----- (0204AEE8) --------------------------------------------------------
int *__fastcall Function_204aee8(int a1, int a2, int a3, int a4, uchar *a5)
{
  int v5
  int v6
  ushort *v7
  uint v8
  int v9
  int v10
  int v11
  ushort **v13
  int *v14
  uint *v15
  int v16

  v5 = a1;
  v6 = a2;
  v7 = (ushort *)Function_2023790(14, 4u);
  v16 = Function_2023790(2, 4u);
  v15 = (uint *)LoadPokedexDataAdress(v5);
  v13 = (ushort **)LoadFromMsgNARC(1, 26, 412, 4u);
  v14 = (int *)Function_200b368(0x13u, 14, 4u);
  Function_200b60c((int)v14, 0, v6, 1, 0, 1);
  v8 = 0;
  do
  {
    v9 = Function_2078824(v8);
    if ( WasPkmnSeen(v15, v9) )
    {
      Function_200b1b8_CallMsgDecrypt(v13, v9, v7);
      Function_200b48c(v14, (uchar)*a5 + 1, (int)v7);
      ++*a5;
    }
    v8 = (v8 + 1) & 0xFF;
  }
  while ( v8 < 0x12 );
  Function_200b190((ushort *)v13);
  Function_20237bc_FreeMsg(v16, v10);
  Function_20237bc_FreeMsg((int)v7, v11);
  return v14;
}

//----- (0204AF9C) --------------------------------------------------------
int __fastcall Function_204af9c(int a1)
{
  short *v1
  uint v2

  v1 = &Unknown_20ebd98;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)*v1 )
      return (ushort)Unknown_20ebd9a[2 * v2];
    ++v2;
    v1 += 2;
  }
  while ( v2 < 0x3F );
  return 3;
}

//----- (0204AFC4) --------------------------------------------------------
int __fastcall Function_204afc4(int a1, ushort *a2)
{
  int v2
  int v3
  int v4
  int v5
  int v6

  v2 = *(uint *)(a1 + 172);
  v3 = 0;
  *(uchar *)(v2 + 18) = *a2;
  *(ushort *)(v2 + 22) = a2[1];
  *(ushort *)(v2 + 24) = a2[2];
  *(ushort *)(v2 + 20) = a2[3];
  *(uchar *)(v2 + 16) = *(uchar *)(v2 + 16) & 0x1F | 32 * (*(uchar *)(v2 + 18) + 5);
  v4 = *(ushort *)(v2 + 22);
  v5 = *(ushort *)(v2 + 46);
  if ( v5 == v4 || v5 == *(ushort *)(v2 + 24) )
    v3 = 1;
  v6 = *(ushort *)(v2 + 48);
  if ( v6 == v4 || v6 == *(ushort *)(v2 + 24) )
    v3 = (v3 + 2) & 0xFFFF;
  return v3;
}

//----- (0204B020) --------------------------------------------------------
int __fastcall Function_204b020(int a1, int a2)
{
  int v2
  int v3
  uint v4

  v2 = a2;
  v3 = *(uint *)(a1 + 172);
  if ( !Function_203608c() )
    return 0;
  MI_CpuCopy8(v2, v3 + 62, 0x1Cu, v4);
  return 1;
}

//----- (0204B044) --------------------------------------------------------
BOOL __fastcall Function_204b044(int a1, ushort *a2)
{
  return *(uchar *)(*(uint *)(a1 + 172) + 16) & 8 || *a2;
}

//----- (0204B060) --------------------------------------------------------
int __fastcall Function_204b060(int a1, int a2)
{
  int v2
  int v3
  int v4
  uint *v5
  int v6
  int v7
  int *v8
  int result

  v2 = a2;
  v3 = a1;
  v4 = LoadTrainerDataAdress(a2);
  *(ushort *)(v3 + 2110) = GetGender(v4);
  v5 = (uint *)LoadPokePartyAdress(v2);
  v6 = 0;
  v7 = v3;
  do
  {
    v8 = GetAdrOfPkmnInParty(v5, *(uchar *)(v3 + v6 + 42));
    *(ushort *)(v7 + 2112) = GetPkmnData(v8, 5u, 0);
    ++v6;
    v7 += 2;
  }
  while ( v6 < 2 );
  result = Function_202d3b4(*(uint *)(v3 + 116), 3, 0);
  *(ushort *)(v3 + 2116) = result;
  return result;
}

//----- (0204B0BC) --------------------------------------------------------
int __fastcall Function_204b0bc(int a1)
{
  return MI_CpuCopy8(a1 + 62, a1 + 2110, 0x1Cu, (uint)MI_CpuCopy8);
}

//----- (0204B0D4) --------------------------------------------------------
int __fastcall Function_204b0d4(int result, short a2)
{
  *(uchar *)(result + 16) = 8 * a2 & 0xF | *(uchar *)(result + 16) & 0xF7;
  *(ushort *)(result + 2110) = a2;
  return result;
}

//----- (0204B0F0) --------------------------------------------------------
int __fastcall Function_204b0f0(int a1, uint a2, int a3, int a4)
{
  int result
  uint v5
  int v6
  uint v7
  int v8
  uint v9
  int v10
  uint v11
  int v12
  uint v13
  int v14

  if ( a4 )
    goto LABEL_16;
  if ( a2 == 2 && a3 == 6 )
    return 305;
  if ( a2 == 6 && a3 == 6 )
    return 306;
LABEL_16:
  if ( a2 >= 7 )
  {
    v13 = Function_204aec0(a1);
    s32_div_f(v13, 100);
    result = (v14 + 200) & 0xFFFF;
  }
  else if ( a3 == 6 )
  {
    v5 = 4 * a2;
    v6 = (ushort)Unknown_20ebd78[2 * a2];
    v7 = Function_204aec0(a1);
    s32_div_f(v7, (*(ushort *)(v5 + 34520442) - v6 + 1) & 0xFFFF);
    result = (v6 + v8) & 0xFFFF;
  }
  else
  {
    v9 = 4 * a2;
    v10 = LOWORD(Unknown_20ebd58[a2]);
    v11 = Function_204aec0(a1);
    s32_div_f(v11, (*(ushort *)(v9 + 34520410) - v10 + 1) & 0xFFFF);
    result = (v10 + v12) & 0xFFFF;
  }
  return result;
}

//----- (0204B184) --------------------------------------------------------
ushort *__fastcall Function_204b184(int a1, uint a2, uint a3)
{
  uint v3
  int v4
  uint v5
  ushort **v6
  ushort *v7
  ushort *v8
  ushort *v9
  int v10

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (ushort **)LoadFromMsgNARC(1, 26, 21, a3);
  MI_CpuFill8((ushort *)v4, 0, 0x110u);
  v7 = (ushort *)LoadFromNARC_PlBtdtr(v5, v3);
  v8 = v7;
  *(uint *)v4 = v5;
  *(ushort *)(v4 + 24) = -1;
  *(ushort *)(v4 + 26) = 3 * v5;
  *(ushort *)(v4 + 4) = *v7;
  v9 = Function_200b1ec_CallMsgDecrypt(v6, v5);
  Function_2023df0((int)v9, (uchar *)(v4 + 8), 8u);
  Function_20237bc_FreeMsg((int)v9, v10);
  Function_200b190((ushort *)v6);
  return v8;
}

//----- (0204B1E8) --------------------------------------------------------
int __fastcall Function_204b1e8(int a1, ushort *a2, int a3, int a4, int a5, uchar a6, uchar a7, int a8, uint a9)
{
  ushort *v9
  int v10
  int v11
  short v12
  int v13
  char *v14
  ushort *v15
  int v16
  uint v17
  int v18
  int v19
  int v20
  uchar v21
  int v22
  int v23
  char v24
  uchar v25
  uint v26
  int v28
  char v29
  char v30
  uchar v31
  uchar v32
  short v33
  short v34
  int v35

  v35 = a4;
  v9 = a2;
  v10 = a1;
  v11 = a3;
  v28 = a4;
  MI_CpuFill8(a2, 0, 0x38u);
  LoadFromNARC_PlBtdpm((int)&v30, v11);
  *v9 = *v9 & 0xF800 | *(ushort *)&v30 & 0x7FF;
  *v9 = (v34 << 11) | *v9 & 0x7FF;
  if ( a8 )
    v12 = *((ushort *)Unknown_20ebd50 + a7);
  else
    v12 = v33;
  v9[1] = v12;
  v29 = -1;
  v13 = 0;
  v14 = &v30;
  v15 = v9;
  do
  {
    v15[2] = *((ushort *)v14 + 1);
    if ( *((ushort *)v14 + 1) == 218 )
      v29 = 0;
    ++v13;
    v14 += 2;
    ++v15;
  }
  while ( v13 < 4 );
  v16 = a5;
  *((uint *)v9 + 3) = v28;
  if ( a5 )
  {
    *((uint *)v9 + 4) = a5;
  }
  else
  {
    do
    {
      do
      {
        v17 = Function_204aec0(v10);
        v16 = v17 | (Function_204aec0(v10) << 16);
      }
      while ( v32 != PkmnData_DivBy25(v16) );
    }
    while ( CheckIfShinyPkmn(v28, v16) == 1 );
    *((uint *)v9 + 4) = v16;
  }
  v18 = a6;
  v19 = 0;
  v20 = 0;
  *((uint *)v9 + 5) = ((uint)a6 << 27 >> 2) | (((((*((uint *)v9 + 5) & 0xFFFFFFE0 | v18 & 0x1F) & 0xFFFFFC1F | 32 * v18 & 0x3FF) & 0xFFFF83FF | (v18 << 10) & 0x7FFF) & 0xFFF07FFF | (v18 << 15) & 0xFFFFF) & 0xFE0FFFFF | (v18 << 20) & 0x1FFFFFF) & 0xC1FFFFFF;
  do
  {
    v21 = Function_20787cc(v20);
    if ( v21 & v31 )
      ++v19;
    ++v20;
  }
  while ( v20 < 6 );
  v22 = s32_div_f(0x1FEu, v19);
  if ( v22 > 255 )
    LOBYTE(v22) = -1;
  v23 = 0;
  v24 = v22;
  do
  {
    v25 = Function_20787cc(v23);
    if ( v25 & v31 )
      *((uchar *)v9 + v23 + 24) = v24;
    ++v23;
  }
  while ( v23 < 6 );
  *((uchar *)v9 + 30) = 0;
  *((uchar *)v9 + 31) = CountryOfOriginValue;
  v26 = GetPkmnBaseData1(*v9 & 0x7FF, 0x19u);
  if ( v26 )
  {
    if ( *((uint *)v9 + 4) & 1 )
      *((uchar *)v9 + 32) = v26;
    else
      *((uchar *)v9 + 32) = GetPkmnBaseData1(*v9 & 0x7FF, 0x18u);
  }
  else
  {
    *((uchar *)v9 + 32) = GetPkmnBaseData1(*v9 & 0x7FF, 0x18u);
  }
  *((uchar *)v9 + 33) = v29;
  Function_200b274(*v9 & 0x7FF, a9, v9 + 17);
  return v16;
}

//----- (0204B3B8) --------------------------------------------------------
int __fastcall Function_204b3b8(int a1, int a2, uint a3, uchar a4, ushort *a5, ushort *a6, int a7, uint a8)
{
  uint v8
  int v9
  int v10
  uchar v11
  ushort *v12
  int v13

  v8 = a3;
  v9 = a2;
  v10 = a1;
  v11 = a4;
  v12 = Function_204b184(a2, a3, a8);
  v13 = Function_204b470(v10, (int)v12, v8, (ushort *)(v9 + 48), v11, a5, a6, a7, a8);
  free((int)v12);
  return v13;
}

//----- (0204B404) --------------------------------------------------------
int __fastcall Function_204b404(int a1, int a2, uint a3, int a4, int *a5, uint a6)
{
  int v6
  uint v7
  int *v8
  int v9
  int *v10
  ushort *v11
  int v13
  int v14
  ushort *v15
  uchar v16

  v13 = a1;
  v6 = a2;
  v7 = a3;
  v14 = a4;
  v15 = Function_204b184(a2, a3, a6);
  v8 = a5;
  v16 = Function_204ae84(v7);
  v9 = 0;
  v10 = a5;
  v11 = (ushort *)(v6 + 48);
  do
  {
    Function_204b1e8(v13, v11, *((ushort *)v10 + 2), *a5, v8[2], v16, v9++, v14, a6);
    ++v8;
    v10 = (int *)((char *)v10 + 2);
    v11 += 28;
  }
  while ( v9 < 2 );
  return free((int)v15);
}

//----- (0204B470) --------------------------------------------------------
int __fastcall Function_204b470(int a1, int a2, uint a3, ushort *a4, uchar a5, ushort *a6, ushort *a7, int a8, uint a9)
{
  int v9
  uint v10
  int v11
  int v12
  int *v13
  int v14
  ushort *v15
  int v16
  int *v17
  int v18
  ushort *v19
  uint v20
  int v21
  char *v22
  char *v23
  int v25
  int v26
  char *v27
  char *v28
  int v29
  int v30
  uint v31
  ushort *v32
  char *v33
  int v34
  int v35
  int v36
  int v37
  uchar v38
  char v39
  short v40
  char v41
  short v42
  char v43
  char v44

  v29 = a1;
  v31 = a3;
  v30 = a2;
  v32 = a4;
  v34 = 0;
  if ( a5 > 4u )
    ErrorHandler();
  v9 = 0;
  v35 = 0;
  if ( a5 )
  {
    v33 = &v44;
    while ( 1 )
    {
      v10 = Function_204aec0(v29);
      s32_div_f(v10, *(ushort *)(v30 + 2));
      v36 = *(ushort *)(v30 + (2 * v11 & 0x1FF) + 4);
      LoadFromNARC_PlBtdpm((int)&v39, v36);
      v12 = 0;
      if ( v9 > 0 )
      {
        v13 = (int *)&v44;
        do
        {
          LoadFromNARC_PlBtdpm((int)&v41, *v13);
          if ( *(ushort *)&v41 == *(ushort *)&v39 )
            break;
          ++v12;
          ++v13;
        }
        while ( v12 < v9 );
      }
      if ( v12 != v9 )
        goto LABEL_33;
      if ( a6 )
      {
        v14 = 0;
        if ( (int)a5 > 0 )
        {
          v15 = a6;
          do
          {
            if ( *(ushort *)&v39 == *v15 )
              break;
            ++v14;
            ++v15;
          }
          while ( v14 < a5 );
        }
        if ( v14 != a5 )
          goto LABEL_33;
      }
      if ( v35 >= 50 )
        break;
      v16 = 0;
      if ( v9 > 0 )
      {
        v17 = (int *)&v44;
        do
        {
          LoadFromNARC_PlBtdpm((int)&v41, *v17);
          if ( v42 && v42 == v40 )
            break;
          ++v16;
          ++v17;
        }
        while ( v16 < v9 );
      }
      if ( v16 == v9 )
      {
        if ( !a7 )
          break;
        v18 = 0;
        if ( (int)a5 > 0 )
        {
          v19 = a7;
          do
          {
            if ( v40 == *v19 && *v19 )
              break;
            ++v18;
            ++v19;
          }
          while ( v18 < a5 );
        }
        if ( v18 == a5 )
          break;
        ++v35;
      }
      else
      {
        ++v35;
      }
LABEL_33:
      if ( v9 == a5 )
        goto LABEL_34;
    }
    ++v9;
    *(uint *)v33 = v36;
    v33 += 4;
    goto LABEL_33;
  }
LABEL_34:
  v38 = Function_204ae84(v31);
  v20 = Function_204aec0(v29);
  v37 = (Function_204aec0(v29) << 16) | v20;
  if ( v35 >= 50 )
    v34 = 1;
  v21 = 0;
  if ( v9 > 0 )
  {
    v22 = &v44;
    v23 = &v43;
    do
    {
      *(uint *)v23 = Function_204b1e8(v29, v32, *(uint *)v22 & 0xFFFF, v37, 0, v38, v21, v34, a9);
      v23 += 4;
      ++v21;
      v22 += 4;
      v32 += 28;
    }
    while ( v21 < v9 );
  }
  if ( !a8 )
    return v34;
  v25 = a8;
  *(uint *)a8 = v37;
  v26 = 0;
  v27 = &v44;
  v28 = &v43;
  do
  {
    ++v26;
    *(ushort *)(a8 + 4) = *(uint *)v27;
    v27 += 4;
    *(uint *)(v25 + 8) = *(uint *)v28;
    v28 += 4;
    v25 += 4;
    a8 += 2;
  }
  while ( v26 < 2 );
  return v34;
}

//----- (0204B630) --------------------------------------------------------
int __fastcall LoadFromNARC_PlBtdtr(int a1, uint a2)
{
  return LoadFromNARC_2(178, a1, a2);
}

//----- (0204B640) --------------------------------------------------------
int __fastcall LoadFromNARC_PlBtdpm(int a1, int a2)
{
  return LoadFromNARC(a1, 179, a2);
}

//----- (0204B64C) --------------------------------------------------------
int __fastcall Function_204b64c(int a1)
{
  int v1
  int v2
  ushort *v3
  uint **v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = (uint **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xAu);
  *v3 = Function_2055f00(*(uint *)(v1 + 128), *v4);
  return 0;
}

//----- (0204B680) --------------------------------------------------------
int __fastcall Function_204b680(int a1)
{
  int v1
  uint **v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2055f40(*(uint *)(v1 + 128), *v2);
  return 0;
}

//----- (0204B6B4) --------------------------------------------------------
int __fastcall Function_204b6b4(int a1)
{
  int v1
  uint **v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2055f64(*(uint *)(v1 + 128), *v2);
  return 0;
}

//----- (0204B6E8) --------------------------------------------------------
int __fastcall Function_204b6e8(int a1)
{
  int v1
  uint **v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2055f88(*(uint *)(v1 + 128), *v2);
  return 0;
}

//----- (0204B71C) --------------------------------------------------------
int __fastcall Function_204b71c(int a1)
{
  int v1
  uint **v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = Function_2055fa8(*(uint *)(v1 + 128), *v2);
  return 0;
}

//----- (0204B750) --------------------------------------------------------
int __fastcall ScriptCmd_CheckDeoxis(int a1)
{
  int v1
  uint **v2
  int v3
  int v4

  v1 = a1;
  v2 = (uint **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  Function_2055e80(*(uint *)(v1 + 128), *v2, v4);
  return 0;
}

//----- (0204B784) --------------------------------------------------------
int __fastcall Function_204b784(int a1)
{
  int v1
  uint **v2
  int v3
  int v4
  int v5

  v1 = a1;
  v2 = (uint **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xAu);
  v3 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v1 + 128) + 12));
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  Function_2055eac(*(uint *)(v1 + 128), *v2, v5);
  Function_202cf28(v3, 4);
  return 0;
}

//----- (0204B7CC) --------------------------------------------------------
int __fastcall Function_204b7cc(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  if ( v2 )
  {
    if ( v2 == 1 )
      Function_20562d8(*(uint *)(v1 + 128));
    else
      ErrorHandler();
  }
  else
  {
    Function_20562ac(*(uint *)(v1 + 128));
  }
  return 1;
}

//----- (0204B7FC) --------------------------------------------------------
int __fastcall Function_204b7fc(int a1)
{
  int v1
  int v2
  uint **v3

  v1 = a1;
  v2 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = (uint **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0xAu);
  Function_2055e00(*(uint *)(v1 + 128), *v3);
  Function_202cfec(v2, 0);
  return 0;
}

//----- (0204B830) --------------------------------------------------------
uint *__fastcall Function_204b830(uint *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  return result;
}

//----- (0204B838) --------------------------------------------------------
int Function_204b838()
{
  int v0

  v0 = Function_202df18();
  return Function_202df40(v0);
}

//----- (0204B844) --------------------------------------------------------
int Function_204b844()
{
  int v0

  v0 = Function_202df18();
  return Function_202df5c(v0);
}

//----- (0204B850) --------------------------------------------------------
int Function_204b850()
{
  int v0

  v0 = Function_202df18();
  return Function_202df78(v0);
}

//----- (0204B85C) --------------------------------------------------------
int __fastcall Function_204b85c(int a1, int a2, int a3, int a4)
{
  int v4
  uint v5
  int v6
  int v7
  int v8
  ushort *v9
  int v10
  int v11
  ushort *v12
  int v13
  int v14
  ushort *v15
  int v16
  int v17
  int v18
  int v19
  int v20
  void **v21
  int v22
  int v23
  int v24
  int v25
  void **v26
  int *v27
  int v28
  int v29
  int v30
  int v31
  int v32
  int v33
  int v34
  void **v35
  int *v36
  int v37
  int v38
  int v39
  int v40
  int v41
  int v42
  char v44
  char v45
  int v46

  v46 = a4;
  v4 = a1;
  v5 = ScriptHandler_LoadHWord(a1);
  if ( v5 <= 8 )
    JUMPOUT(__CS__, *((short *)&off_204B878 + v5) + 33863802);
  switch ( (uchar)v5 )
  {
    case 0:
      Function_202dee4(*(uint *)(*(uint *)(v4 + 128) + 12));
      break;
    case 1:
      v8 = ScriptHandler_LoadHWord(v4);
      v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v8);
      v10 = *(uint *)(v4 + 128);
      if ( Function_204b838() )
        *v9 = 1;
      else
        *v9 = 0;
      break;
    case 2:
      v11 = ScriptHandler_LoadHWord(v4);
      v12 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v11);
      v13 = *(uint *)(v4 + 128);
      *v12 = Function_204b838();
      break;
    case 3:
      v14 = ScriptHandler_LoadHWord(v4);
      v15 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v14);
      v16 = *(uint *)(v4 + 128);
      v17 = 16 * (Function_204b838() - 1);
      v18 = *(uint *)(v4 + 128);
      v19 = Function_204b844();
      *v15 = (*(int (__fastcall **)(uint, int))((char *)&JumpTable_20ebe94 + v17))(*(uint *)(v4 + 128), v19);
      break;
    case 4:
      v20 = *(uint *)(v4 + 128);
      v21 = &JumpTable_20ebe94 + 4 * (Function_204b838() - 1);
      v22 = *(uint *)(v4 + 128);
      v23 = Function_204b844();
      ((void (__fastcall *)(uint, int))v21[1])(*(uint *)(v4 + 128), v23);
      v24 = *(uint *)(v4 + 128);
      Function_204b850();
      break;
    case 5:
      v25 = *(uint *)(v4 + 128);
      v26 = &JumpTable_20ebe94 + 4 * (Function_204b838() - 1);
      v27 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v4 + 128), 0xFu);
      v28 = ScriptHandler_LoadHWord(v4);
      v29 = ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v28);
      v30 = ScriptHandler_LoadHWord(v4);
      v31 = ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v30);
      v32 = *(uint *)(v4 + 128);
      v33 = Function_204b844();
      Function_204b830(&v45, *(uint *)(v4 + 128), *v27, v33);
      ((void (__fastcall *)(char *, int, int))v26[2])(&v45, v29, v31);
      break;
    case 6:
      v34 = *(uint *)(v4 + 128);
      v35 = &JumpTable_20ebe94 + 4 * (Function_204b838() - 1);
      v36 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v4 + 128), 0xFu);
      v37 = ScriptHandler_LoadHWord(v4);
      v38 = ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v37);
      v39 = ScriptHandler_LoadHWord(v4);
      v40 = ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v39);
      v41 = *(uint *)(v4 + 128);
      v42 = Function_204b844();
      Function_204b830(&v44, *(uint *)(v4 + 128), *v36, v42);
      ((void (__fastcall *)(char *, int, int))v35[3])(&v44, v38, v40);
      break;
    case 7:
      v6 = *(uint *)(*(uint *)(v4 + 128) + 12);
      Function_202df04();
      break;
    case 8:
      v7 = *(uint *)(*(uint *)(v4 + 128) + 12);
      Function_202df04();
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (0204BA50) --------------------------------------------------------
BOOL __fastcall Function_204ba50(int a1)
{
  int v1

  v1 = LoadPokePartyAdress(*(uint *)(a1 + 12));
  return GetNrOfPkmnInParty(v1) < 6;
}

//----- (0204BA68) --------------------------------------------------------
int __fastcall Function_204ba68(int a1)
{
  return Function_2054930(32, *(uint *)(a1 + 12), 490, 1, 2, 1);
}

//----- (0204BA88) --------------------------------------------------------
uint __fastcall Function_204ba88(int a1, ushort *a2, ushort *a3)
{
  int v3

  v3 = a1;
  *a2 = 379;
  *a3 = 13;
  LoadTrainerDataAdress(*(uint *)(*(uint *)a1 + 12));
  return Function_200b498(*(uint *)(v3 + 4), 0);
}

//----- (0204BAAC) --------------------------------------------------------
int __fastcall Function_204baac(int a1)
{
  int v1
  int *v2
  int v3
  int v4
  int v5
  uint v6
  uint v7
  uint v8
  uint v9
  uint v10
  short v11
  short v12
  int v13
  ushort *v14
  int v15
  int v16
  uint *v17
  int result
  int v19
  int *v20
  int v21
  ushort *v22
  int v23
  uint v24
  int v25
  int v26
  int v27
  int v28

  v1 = a1;
  v23 = Function_204b844();
  v22 = (ushort *)LoadTrainerDataAdress(*(uint *)(v1 + 12));
  v21 = LoadFlagAdress(*(uint *)(v1 + 12));
  v20 = 0;
  v2 = (int *)(v23 + 4);
  v19 = GetPkmnData((int *)(v23 + 4), 0x98u, 0);
  v24 = GetPkmnData((int *)(v23 + 4), 0, 0);
  v3 = GetPkmnData((int *)(v23 + 4), 7u, 0);
  v4 = OS_GetTick();
  v5 = Function_201d30c(v4);
  v28 = v5;
  if ( v24 )
  {
    if ( v24 == 1 )
    {
      if ( CheckIfShinyPkmn(v3, v5) )
      {
        do
          v28 = Function_201d30c(v28);
        while ( CheckIfShinyPkmn(v3, v28) );
      }
    }
    else
    {
      v28 = v24;
    }
  }
  CopyPkmnData((int)v2, v28);
  v27 = Call_DecidePkmnGender((int)v2);
  SetPkmnData((int)v2, 111, (ushort *)&v27);
  v6 = GetPkmnData(v2, 0x4Bu, 0);
  v7 = GetPkmnData(v2, 0x4Au, 0);
  v8 = GetPkmnData(v2, 0x49u, 0);
  v9 = GetPkmnData(v2, 0x48u, 0);
  v10 = GetPkmnData(v2, 0x46u, 0);
  v27 = v6 + v7 + v8 + v9 + v10 + GetPkmnData(v2, 0x47u, 0);
  if ( !v27 )
  {
    v11 = PRNG();
    v28 = v11 & 0x1F;
    SetPkmnData((int)v2, 70, (ushort *)&v28);
    v28 = (v11 & 0x3E0u) >> 5;
    SetPkmnData((int)v2, 71, (ushort *)&v28);
    v28 = (v11 & 0x7C00u) >> 10;
    SetPkmnData((int)v2, 72, (ushort *)&v28);
    v12 = PRNG();
    v28 = v12 & 0x1F;
    SetPkmnData((int)v2, 73, (ushort *)&v28);
    v28 = (v12 & 0x3E0u) >> 5;
    SetPkmnData((int)v2, 74, (ushort *)&v28);
    v28 = (v12 & 0x7C00u) >> 10;
    SetPkmnData((int)v2, 75, (ushort *)&v28);
  }
  v13 = LoadVariableAreaAdress_18(*(uint *)(v1 + 12));
  if ( GetPkmnData(v2, 0x2Eu, 0) )
    *(uchar *)(v13 + Function_2092444(73)) = *(uchar *)(v23 + 240);
  if ( GetPkmnData(v2, 0x2Fu, 0) )
    *(uchar *)(v13 + Function_2092444(74)) = *(uchar *)(v23 + 241);
  if ( GetPkmnData(v2, 0x30u, 0) )
    *(uchar *)(v13 + Function_2092444(75)) = *(uchar *)(v23 + 242);
  if ( GetPkmnData(v2, 0x31u, 0) )
    *(uchar *)(v13 + Function_2092444(76)) = *(uchar *)(v23 + 243);
  if ( GetPkmnData(v2, 0x32u, 0) )
    *(uchar *)(v13 + Function_2092444(77)) = *(uchar *)(v23 + 244);
  if ( GetPkmnData(v2, 0x33u, 0) )
    *(uchar *)(v13 + Function_2092444(78)) = *(uchar *)(v23 + 245);
  if ( GetPkmnData(v2, 0x34u, 0) )
    *(uchar *)(v13 + Function_2092444(79)) = *(uchar *)(v23 + 246);
  if ( GetPkmnData(v2, 0x67u, 0) )
    *(uchar *)(v13 + Function_2092444(25)) = *(uchar *)(v23 + 247);
  if ( GetPkmnData(v2, 0x68u, 0) )
    *(uchar *)(v13 + Function_2092444(26)) = *(uchar *)(v23 + 248);
  if ( GetPkmnData(v2, 0x69u, 0) )
    *(uchar *)(v13 + Function_2092444(27)) = *(uchar *)(v23 + 249);
  if ( !*(uint *)v23 )
  {
    v14 = Function_2025f04(v22, 0x20u);
    v26 = GetTrainerID((int)v22);
    v25 = GetGender((int)v22);
    v20 = AllocPkmnData(0x20u);
    Function_20775ec(v2, v20);
    SetPkmnData((int)v20, 145, v14);
    SetPkmnData((int)v20, 7, (ushort *)&v26);
    SetPkmnData((int)v20, 157, (ushort *)&v25);
    v2 = v20;
    Function_20237bc_FreeMsg((int)v14, v15);
  }
  v16 = Function_2017070(2, v19);
  Function_209304c((int)v2, (int)v22, 4u, v16, 0x20u);
  if ( GetPkmnData(v2, 5u, 0) == 493 && GetPkmnData(v2, 0x6Eu, 0) == 1 && !Function_206b5f8(v21) )
    Function_206b608(v21, 1);
  Function_207418c(v2);
  v17 = (uint *)LoadPokePartyAdress(*(uint *)(v1 + 12));
  if ( CopyPkmnDataToParty(v17, v2) )
    Function_202f180(*(uint *)(v1 + 12), v2);
  result = (int)v20;
  if ( v20 )
    result = free((int)v20);
  return result;
}

//----- (0204BDEC) --------------------------------------------------------
ushort *__fastcall Function_204bdec(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  int v4
  ushort *v5
  ushort *v6
  int v7

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  Function_204b844();
  *v5 = 379;
  *v6 = 7;
  LoadTrainerDataAdress(*(uint *)(*v3 + 12));
  Function_200b498(v3[1], 0);
  Function_2076b10_Dummy();
  return Function_200b578(v3[1], 1u, v7);
}

//----- (0204BE2C) --------------------------------------------------------
int __fastcall Function_204be2c(int a1, ushort *a2, ushort *a3)
{
  int result

  *a2 = 379;
  result = 4;
  *a3 = 4;
  return result;
}

//----- (0204BE3C) --------------------------------------------------------
int __fastcall Function_204be3c(int a1)
{
  return Function_204baac(a1);
}

//----- (0204BE44) --------------------------------------------------------
ushort *__fastcall Function_204be44(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  int v4
  ushort *v5
  ushort *v6
  int v7

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  Function_204b844();
  *v5 = 379;
  *v6 = 8;
  LoadTrainerDataAdress(*(uint *)(*v3 + 12));
  Function_200b498(v3[1], 0);
  Function_2076b10_Dummy();
  return Function_200b538(v3[1], 1u, v7);
}

//----- (0204BE84) --------------------------------------------------------
BOOL __fastcall Function_204be84(int a1)
{
  int v1
  uint *v2

  v1 = LoadVariableAreaAdressItemList(*(uint *)(a1 + 12));
  v2 = (uint *)Function_204b844();
  return CheckStoreItem(v1, *v2 & 0xFFFF, 1, 0x20u);
}

//----- (0204BEAC) --------------------------------------------------------
int __fastcall Function_204beac(int a1)
{
  int v1
  uint *v2

  v1 = LoadVariableAreaAdressItemList(*(uint *)(a1 + 12));
  v2 = (uint *)Function_204b844();
  return TakeItem(v1, *v2 & 0xFFFF, 1, 0x20u);
}

//----- (0204BED4) --------------------------------------------------------
ushort *__fastcall Function_204bed4(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  int v4
  ushort *v5
  ushort *v6
  int v7

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  v7 = *(uint *)Function_204b844() & 0xFFFF;
  *v5 = 379;
  *v6 = 9;
  LoadTrainerDataAdress(*(uint *)(*v3 + 12));
  Function_200b498(v3[1], 0);
  return Function_200b70c(v3[1], 1u, v7);
}

//----- (0204BF14) --------------------------------------------------------
ushort *__fastcall Function_204bf14(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  ushort *v4
  ushort *v5
  int v6
  int v7

  v3 = a1;
  v4 = a2;
  v5 = a3;
  LoadVariableAreaAdressItemList(*(uint *)(*a1 + 12));
  v6 = *v3;
  v7 = *(uint *)Function_204b844() & 0xFFFF;
  *v4 = 379;
  *v5 = 5;
  return Function_200b70c(v3[1], 0, v7);
}

//----- (0204BF48) --------------------------------------------------------
int Function_204bf48()
{
  return 1;
}

//----- (0204BF4C) --------------------------------------------------------
int __fastcall Function_204bf4c(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = Function_204b844();
  return Function_202613c(*(uint *)(v1 + 12), v2);
}

//----- (0204BF60) --------------------------------------------------------
int __fastcall Function_204bf60(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  int v4
  ushort *v5
  ushort *v6
  ushort *v7
  ushort *v8
  int v9

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  v7 = (ushort *)Function_204b844();
  *v5 = 379;
  *v6 = 10;
  LoadTrainerDataAdress(*(uint *)(*v3 + 12));
  Function_200b498(v3[1], 0);
  v8 = Function_202605c(v7, 0x20u);
  Function_200b48c((int *)v3[1], 1u, (int)v8);
  return Function_20237bc_FreeMsg((int)v8, v9);
}

//----- (0204BFB8) --------------------------------------------------------
int __fastcall Function_204bfb8(int a1, ushort *a2, ushort *a3)
{
  int result

  *a2 = 379;
  result = 6;
  *a3 = 6;
  return result;
}

//----- (0204BFC8) --------------------------------------------------------
BOOL __fastcall Function_204bfc8(int a1)
{
  int v1

  v1 = LoadVariableAreaAdress_c(*(uint *)(a1 + 12));
  return Function_20289a0(v1) < 200;
}

//----- (0204BFE0) --------------------------------------------------------
int __fastcall Function_204bfe0(int a1)
{
  int v1
  uint *v2
  int v3

  v1 = a1;
  v2 = (uint *)Function_204b844();
  v3 = LoadVariableAreaAdress_c(*(uint *)(v1 + 12));
  return Function_202895c(v3, *v2);
}

//----- (0204BFF8) --------------------------------------------------------
ushort *__fastcall Function_204bff8(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  int v4
  ushort *v5
  ushort *v6
  uint v7

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  v7 = *(uint *)Function_204b844();
  *v5 = 379;
  *v6 = 11;
  LoadTrainerDataAdress(*(uint *)(*v3 + 12));
  Function_200b498(v3[1], 0);
  return Function_200bc80(v3[1], 1u, v7);
}

//----- (0204C034) --------------------------------------------------------
int __fastcall Function_204c034(int a1, ushort *a2, ushort *a3)
{
  int result

  *a2 = 379;
  result = 6;
  *a3 = 6;
  return result;
}

//----- (0204C044) --------------------------------------------------------
BOOL __fastcall Function_204c044(int a1)
{
  int v1
  int *v2
  int v3
  int v4
  BOOL result
  uchar *v6

  v1 = a1;
  v2 = (int *)Function_204b844();
  v3 = v2[1];
  v4 = *v2;
  if ( v4 == 1 )
  {
    v6 = (uchar *)LoadVariableAreaAdress_15(*(uint *)(v1 + 12));
    result = Function_202cb70(v6, v3, 1);
  }
  else if ( v4 == 2 )
  {
    result = 1;
  }
  else
  {
    result = v4 == 3;
  }
  return result;
}

//----- (0204C07C) --------------------------------------------------------
int __fastcall Function_204c07c(int a1)
{
  int v1
  int *v2
  uint v3
  int result
  uchar *v5
  int v6
  int v7
  int v8
  int v9

  v1 = a1;
  v2 = (int *)Function_204b844();
  v3 = v2[1];
  result = *v2;
  switch ( result )
  {
    case 1:
      v5 = (uchar *)LoadVariableAreaAdress_15(*(uint *)(v1 + 12));
      result = Function_202cae0(v5, v3, 1);
      break;
    case 2:
      v6 = LoadVariableAreaAdress_e(*(uint *)(v1 + 12));
      v7 = Function_2029d04(v6);
      result = Function_2029e2c(v7, v3, 1);
      break;
    case 3:
      v8 = LoadVariableAreaAdress_e(*(uint *)(v1 + 12));
      v9 = Function_2029d04(v8);
      result = Function_2029efc(v9, v3);
      break;
  }
  return result;
}

//----- (0204C0CC) --------------------------------------------------------
uint __fastcall Function_204c0cc(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  int v4
  ushort *v5
  ushort *v6
  int *v7
  uint v8
  int v9

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  v7 = (int *)Function_204b844();
  v8 = v7[1];
  v9 = *v7;
  switch ( v9 )
  {
    case 1:
      Function_200be64(v3[1], 1u, v8);
      break;
    case 2:
      Function_200bfac(v3[1], 1u, v8);
      break;
    case 3:
      Function_200c01c(v3[1], 1u, v8);
      break;
  }
  *v5 = 379;
  *v6 = 12;
  LoadTrainerDataAdress(*(uint *)(*v3 + 12));
  return Function_200b498(v3[1], 0);
}

//----- (0204C128) --------------------------------------------------------
int __fastcall Function_204c128(int a1, ushort *a2, ushort *a3)
{
  int result

  *a2 = 379;
  result = 6;
  *a3 = 6;
  return result;
}

//----- (0204C138) --------------------------------------------------------
BOOL __fastcall Function_204c138(int a1)
{
  int v1

  v1 = LoadVariableAreaAdressItemList(*(uint *)(a1 + 12));
  Function_204b844();
  return CheckStoreItem(v1, 0x1C6u, 1, 0x20u);
}

//----- (0204C15C) --------------------------------------------------------
int __fastcall Function_204c15c(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = LoadVariableAreaAdressItemList(*(uint *)(a1 + 12));
  Function_204b844();
  v3 = LoadFlagAdress(*(uint *)(v1 + 12));
  TakeItem(v2, 0x1C6u, 1, 0x20u);
  return Function_206b144(v3, 0);
}

//----- (0204C190) --------------------------------------------------------
ushort *__fastcall Function_204c190(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  int v4
  ushort *v5
  ushort *v6

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  Function_204b844();
  *v5 = 379;
  *v6 = 14;
  LoadTrainerDataAdress(*(uint *)(*v3 + 12));
  Function_200b498(v3[1], 0);
  return Function_200b70c(v3[1], 1u, 0x1C6u);
}

//----- (0204C1CC) --------------------------------------------------------
ushort *__fastcall Function_204c1cc(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  ushort *v4
  ushort *v5
  int v6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  LoadVariableAreaAdressItemList(*(uint *)(*a1 + 12));
  v6 = *v3;
  Function_204b844();
  *v4 = 379;
  *v5 = 5;
  return Function_200b70c(v3[1], 0, 0x1C6u);
}

//----- (0204C1FC) --------------------------------------------------------
BOOL __fastcall Function_204c1fc(int a1)
{
  int v1

  v1 = LoadVariableAreaAdressItemList(*(uint *)(a1 + 12));
  Function_204b844();
  return CheckStoreItem(v1, 0x1C4u, 1, 0x20u);
}

//----- (0204C220) --------------------------------------------------------
int __fastcall Function_204c220(int a1)
{
  int v1
  int v2
  int v3
  int result

  v1 = a1;
  v2 = LoadVariableAreaAdressItemList(*(uint *)(a1 + 12));
  Function_204b844();
  v3 = LoadFlagAdress(*(uint *)(v1 + 12));
  TakeItem(v2, 0x1C4u, 1, 0x20u);
  Function_206b144(v3, 1u);
  result = Function_206b618(v3);
  if ( !result )
    result = Function_206b628(v3, 1);
  return result;
}

//----- (0204C264) --------------------------------------------------------
ushort *__fastcall Function_204c264(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  int v4
  ushort *v5
  ushort *v6

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  Function_204b844();
  *v5 = 379;
  *v6 = 15;
  LoadTrainerDataAdress(*(uint *)(*v3 + 12));
  Function_200b498(v3[1], 0);
  return Function_200b70c(v3[1], 1u, 0x1C4u);
}

//----- (0204C2A0) --------------------------------------------------------
ushort *__fastcall Function_204c2a0(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  ushort *v4
  ushort *v5
  int v6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  LoadVariableAreaAdressItemList(*(uint *)(*a1 + 12));
  v6 = *v3;
  Function_204b844();
  *v4 = 379;
  *v5 = 5;
  return Function_200b70c(v3[1], 0, 0x1C4u);
}

//----- (0204C2D0) --------------------------------------------------------
BOOL __fastcall Function_204c2d0(int a1)
{
  int v1

  v1 = LoadVariableAreaAdressItemList(*(uint *)(a1 + 12));
  Function_204b844();
  return CheckStoreItem(v1, 0x1D3u, 1, 0x20u);
}

//----- (0204C2F4) --------------------------------------------------------
int __fastcall Function_204c2f4(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = LoadVariableAreaAdressItemList(*(uint *)(a1 + 12));
  Function_204b844();
  v3 = LoadFlagAdress(*(uint *)(v1 + 12));
  TakeItem(v2, 0x1D3u, 1, 0x20u);
  return Function_206b144(v3, 3u);
}

//----- (0204C328) --------------------------------------------------------
ushort *__fastcall Function_204c328(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  int v4
  ushort *v5
  ushort *v6

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  Function_204b844();
  *v5 = 379;
  *v6 = 17;
  LoadTrainerDataAdress(*(uint *)(*v3 + 12));
  Function_200b498(v3[1], 0);
  return Function_200b70c(v3[1], 1u, 0x1D3u);
}

//----- (0204C364) --------------------------------------------------------
ushort *__fastcall Function_204c364(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  ushort *v4
  ushort *v5
  int v6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  LoadVariableAreaAdressItemList(*(uint *)(*a1 + 12));
  v6 = *v3;
  Function_204b844();
  *v4 = 379;
  *v5 = 5;
  return Function_200b70c(v3[1], 0, 0x1D3u);
}

//----- (0204C394) --------------------------------------------------------
BOOL __fastcall Function_204c394(int a1)
{
  int v1

  v1 = LoadVariableAreaAdressItemList(*(uint *)(a1 + 12));
  Function_204b844();
  return CheckStoreItem(v1, 0x1C7u, 1, 0x20u);
}

//----- (0204C3B8) --------------------------------------------------------
int __fastcall Function_204c3b8(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = LoadVariableAreaAdressItemList(*(uint *)(a1 + 12));
  Function_204b844();
  v3 = LoadFlagAdress(*(uint *)(v1 + 12));
  TakeItem(v2, 0x1C7u, 1, 0x20u);
  return Function_206b144(v3, 2u);
}

//----- (0204C3EC) --------------------------------------------------------
ushort *__fastcall Function_204c3ec(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  int v4
  ushort *v5
  ushort *v6

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  Function_204b844();
  *v5 = 379;
  *v6 = 16;
  LoadTrainerDataAdress(*(uint *)(*v3 + 12));
  Function_200b498(v3[1], 0);
  return Function_200b70c(v3[1], 1u, 0x1C7u);
}

//----- (0204C428) --------------------------------------------------------
ushort *__fastcall Function_204c428(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  ushort *v4
  ushort *v5
  int v6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  LoadVariableAreaAdressItemList(*(uint *)(*a1 + 12));
  v6 = *v3;
  Function_204b844();
  *v4 = 379;
  *v5 = 5;
  return Function_200b70c(v3[1], 0, 0x1C7u);
}

//----- (0204C458) --------------------------------------------------------
int __fastcall Function_204c458(int a1)
{
  uchar *v1

  v1 = (uchar *)LoadVariableAreaAdress_5(*(uint *)(a1 + 12));
  Function_204b844();
  return Function_20567e0(v1);
}

//----- (0204C474) --------------------------------------------------------
int __fastcall Function_204c474(int a1)
{
  uchar *v1
  int *v2

  v1 = (uchar *)LoadVariableAreaAdress_5(*(uint *)(a1 + 12));
  v2 = (int *)Function_204b844();
  return Function_20567f0(v1, *v2);
}

//----- (0204C494) --------------------------------------------------------
ushort *__fastcall Function_204c494(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  int v4
  ushort *v5
  ushort *v6
  uint *v7

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  v7 = (uint *)Function_204b844();
  *v5 = 379;
  *v6 = 19;
  LoadTrainerDataAdress(*(uint *)(*v3 + 12));
  Function_200b498(v3[1], 0);
  return Function_200b928(v3[1], 1u, *v7);
}

//----- (0204C4D0) --------------------------------------------------------
uint __fastcall Function_204c4d0(int *a1, ushort *a2, ushort *a3)
{
  int *v3
  int v4
  ushort *v5
  ushort *v6

  v3 = a1;
  v4 = *a1;
  v5 = a2;
  v6 = a3;
  Function_204b844();
  *v5 = 379;
  *v6 = 20;
  LoadTrainerDataAdress(*(uint *)(*v3 + 12));
  return Function_200b498(v3[1], 0);
}

//----- (0204C500) --------------------------------------------------------
int __fastcall ScriptCmd_StopGreatMarsh(int a1)
{
  int v1
  int v2
  int v3
  uint v4

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      Function_206ae7c(v2);
      Function_2056328(*(uint *)(v1 + 128));
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    Function_206ae6c(v2);
    Function_20562f8(*(uint *)(v1 + 128));
  }
  return 0;
}

//----- (0204C554) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokeCatchingShow(int a1)
{
  int v1
  int *v2
  int *v3
  int v4
  ushort *v5

  v1 = a1;
  v2 = (int *)LoadVariableAreaAdress_20(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = AllocPkmnData(0x20u);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  *v5 = Function_202f028(v2) == 6;
  free((int)v3);
  return 0;
}

//----- (0204C59C) --------------------------------------------------------
int __fastcall ScriptCmd_CloseCatchingShow(int a1)
{
  int v1
  int *v2
  int *v3
  int v4
  int v5
  int v6
  int v7
  int v9
  int *v10

  v1 = a1;
  v2 = (int *)LoadVariableAreaAdress_20(*(uint *)(*(uint *)(a1 + 128) + 12));
  v10 = (int *)LoadVariableAreaAdress_25(*(uint *)(*(uint *)(v1 + 128) + 12));
  v3 = AllocPkmnData(0x20u);
  v9 = LoadTrainerDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  LoadPokedexDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v4 = 0;
  do
  {
    Function_202f000((int)v2, v4, v3);
    Function_209304c((int)v3, v9, 2u, 0, 0x20u);
    Function_2076b10_Dummy();
    if ( !Function_2079868(v10, v5, v6, v7) )
      ErrorHandler();
    Function_202f180(*(uint *)(*(uint *)(v1 + 128) + 12), v3);
    ++v4;
  }
  while ( v4 < 6 );
  free((int)v3);
  Function_202ef04(v2);
  return 0;
}

//----- (0204C638) --------------------------------------------------------
int __fastcall ScriptCmd_CheckCatchingShowRecords(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  int v6
  int v7
  int v8
  short v9
  int v10
  short v11
  int v12

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  switch ( (uchar)v4 )
  {
    case 0:
      v5 = *(uint *)(v1 + 128);
      *v4 = Function_20563d0();
      break;
    case 1:
      v6 = *(uint *)(v1 + 128);
      *v4 = Function_20563e0();
      break;
    case 2:
      v7 = *(uint *)(v1 + 128);
      *v4 = Function_20563f0();
      break;
    case 3:
      v8 = *(uint *)(v1 + 128);
      v9 = Function_20563e0();
      v10 = *(uint *)(v1 + 128);
      v11 = Function_20563d0();
      v12 = *(uint *)(v1 + 128);
      *v4 = v9 + v11 + Function_20563f0();
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (0204C6C8) --------------------------------------------------------
int __fastcall ScriptCmd_ShowCoins(int a1)
{
  int v1
  int v2
  int v3
  uchar v4
  int v5
  uchar v6
  uint *v7

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = (uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0x26u);
  *v7 = ((int (__fastcall *)(uint, uint, uint))dword_21DD020[0])(*(uint *)(v1 + 128), v4, v6);
  return 0;
}

//----- (0204C718) --------------------------------------------------------
int __fastcall ScriptCmd_HideCoins(int a1)
{
  uint *v1

  v1 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x26u);
  ((void (__fastcall *)(uint))dword_21DD084[0])(*v1);
  return 0;
}

//----- (0204C730) --------------------------------------------------------
int __fastcall ScriptCmd_UpdateCoins(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x26u);
  ((void (__fastcall *)(uint, uint))dword_21DD098[0])(*(uint *)(v1 + 128), *v2);
  return 0;
}

//----- (0204C750) --------------------------------------------------------
int __fastcall ScriptCmd_CheckCoins(int a1)
{
  int v1
  ushort *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (ushort *)LoadPlayerDataAdress_24(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = CheckCoins(v2);
  return 0;
}

//----- (0204C780) --------------------------------------------------------
int __fastcall ScriptCmd_GiveCoins(int a1)
{
  int v1
  ushort *v2
  int v3
  short v4

  v1 = a1;
  v2 = (ushort *)LoadPlayerDataAdress_24(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  GiveCoins(v2, v4);
  return 0;
}

//----- (0204C7AC) --------------------------------------------------------
int __fastcall ScriptCmd_TakeCoins(int a1)
{
  int v1
  ushort *v2
  int v3
  uint v4

  v1 = a1;
  v2 = (ushort *)LoadPlayerDataAdress_24(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  TakeCoins(v2, v4);
  return 0;
}

//----- (0204C7D8) --------------------------------------------------------
int __fastcall ScriptCmd_TakeCoinsCasino(int a1)
{
  int v1
  ushort *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (ushort *)LoadPlayerDataAdress_24(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  TakeCoins(v2, *v4);
  return 0;
}

//----- (0204C808) --------------------------------------------------------
int __fastcall Function_204c808(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  ushort *v6
  uint v7

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  LoadTrainerDataAdress(v3);
  v4 = (ushort *)LoadPlayerDataAdress_24(*(uint *)(v2 + 12));
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadWord(v1);
  *v6 = CheckCoins(v4) >= v7;
  return 0;
}

//----- (0204C854) --------------------------------------------------------
int __fastcall ScriptCmd_CheckCoinsCasino(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  ushort *v6
  int v7
  uint v8

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  LoadTrainerDataAdress(v3);
  v4 = (ushort *)LoadPlayerDataAdress_24(*(uint *)(v2 + 12));
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  *v6 = CheckCoins(v4) >= v8;
  return 0;
}

//----- (0204C8AC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckCoinsCasino2(int a1)
{
  int v1
  ushort *v2
  int v3
  ushort *v4
  int v5
  int v6

  v1 = a1;
  v2 = (ushort *)LoadPlayerDataAdress_24(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  *v4 = Function_202b5d8(v2, v6);
  return 0;
}

//----- (0204C8F0) --------------------------------------------------------
int __fastcall ScriptCmd_GiveMoney(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v3 = LoadTrainerDataAdress(v2);
  v4 = ScriptHandler_LoadWord(v1);
  GiveMoney(v3, v4);
  return 0;
}

//----- (0204C914) --------------------------------------------------------
int __fastcall ScriptCmd_TakeMoney(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v3 = LoadTrainerDataAdress(v2);
  v4 = ScriptHandler_LoadWord(v1);
  TakeMoney(v3, v4);
  return 0;
}

//----- (0204C938) --------------------------------------------------------
int __fastcall ScriptCmd_TakeMoneyDCare(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint v5

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v3 = LoadTrainerDataAdress(v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  TakeMoney(v3, v5);
  return 0;
}

//----- (0204C968) --------------------------------------------------------
int __fastcall ScriptCmd_CheckMoney(int a1)
{
  int v1
  int v2
  int v3
  int v4
  ushort *v5
  uint v6

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v3 = LoadTrainerDataAdress(v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadWord(v1);
  *v5 = GetMoney(v3) >= v6;
  return 0;
}

//----- (0204C9AC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckMoneyDCare(int a1)
{
  int v1
  int v2
  int v3
  int v4
  ushort *v5
  int v6
  uint v7

  v1 = a1;
  v2 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v3 = LoadTrainerDataAdress(v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  *v5 = GetMoney(v3) >= v7;
  return 0;
}

//----- (0204C9FC) --------------------------------------------------------
int __fastcall ScriptCmd_ShowMoney(int a1)
{
  int v1
  int v2
  int v3
  uchar v4
  int v5
  uchar v6
  uint *v7

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = (uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0x27u);
  *v7 = ((int (__fastcall *)(uint, uint, uint))dword_21DCEB0[0])(*(uint *)(v1 + 128), v4, v6);
  return 0;
}

//----- (0204CA4C) --------------------------------------------------------
int __fastcall ScriptCmd_HideMoney(int a1)
{
  uint *v1

  v1 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x27u);
  ((void (__fastcall *)(uint))dword_21DCF58[0])(*v1);
  return 0;
}

//----- (0204CA64) --------------------------------------------------------
int __fastcall ScriptCmd_UpdateMoney(int a1)
{
  int v1
  uint *v2

  v1 = a1;
  v2 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x27u);
  ((void (__fastcall *)(uint, uint))dword_21DCF6C[0])(*(uint *)(v1 + 128), *v2);
  return 0;
}

//----- (0204CA84) --------------------------------------------------------
int __fastcall ScriptCmd_ActDcareFunction(int a1)
{
  int v1
  int v2
  uint *v3
  int v4

  v1 = *(uint *)(a1 + 128);
  v2 = *(uint *)(v1 + 12);
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(v1, 0xFu);
  v4 = LoadVariableAreaAdress_8(v2);
  ((void (__fastcall *)(int, uint))dword_21E72BC[0])(v4, *v3);
  return 0;
}

//----- (0204CAA4) --------------------------------------------------------
int __fastcall ScriptCmd_StorePDCareNum(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = LoadVariableAreaAdress(v2, 8);
  *v4 = ((int (__fastcall *)(int))dword_21E73C8[0])(v5);
  return 0;
}

//----- (0204CAD4) --------------------------------------------------------
int __fastcall ScriptCmd_ActEggDayCMan(int a1)
{
  int v1

  v1 = LoadVariableAreaAdress(*(uint *)(*(uint *)(a1 + 128) + 12), 8);
  ((void (__fastcall *)(int))dword_21E6B40[0])(v1);
  return 0;
}

//----- (0204CAEC) --------------------------------------------------------
int __fastcall ScriptCmd_DeactEggDayCMan(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = LoadVariableAreaAdress(*(uint *)(v2 + 12), 8);
  v4 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  v5 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v1 + 128));
  v6 = LoadTrainerDataAdress(v5);
  ((void (__fastcall *)(int, int, int))dword_21E6EA8[0])(v3, v4, v6);
  return 0;
}

//----- (0204CB20) --------------------------------------------------------
int __fastcall ScriptCmd_TakePokemonDCare(int a1)
{
  int v1
  int v2
  uint *v3
  int v4
  int v5
  ushort *v6
  int v7
  int v8
  int v9

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v4 = *(uint *)(v2 + 12);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  LOBYTE(v1) = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v8 = LoadVariableAreaAdress(v4, 8);
  v9 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  *v6 = ((int (__fastcall *)(int, uint, int, uint))dword_21E64F8[0])(v9, *v3, v8, (uchar)v1);
  return 0;
}

//----- (0204CB80) --------------------------------------------------------
int __fastcall ScriptCmd_SetVarPokeAndMoneyDCare(int a1)
{
  int v1
  int v2
  uint *v3
  int v4
  int v5
  ushort *v6
  int v7
  int v8

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v4 = *(uint *)(v2 + 12);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  LOBYTE(v1) = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v8 = LoadVariableAreaAdress(v4, 8);
  *v6 = ((int (__fastcall *)(int, uint, uint))dword_21E6630[0])(v8, (uchar)v1, *v3);
  return 0;
}

//----- (0204CBD4) --------------------------------------------------------
int __fastcall ScriptCmd_SetVarPokeAndLevelDCare(int a1)
{
  int v1
  int v2
  int v3
  uint *v4
  int v5
  ushort *v6
  int v7
  uint v8
  int v9

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = *(uint *)(v2 + 12);
  v4 = (uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0xFu);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v9 = LoadVariableAreaAdress(v3, 8);
  *v6 = ((int (__fastcall *)(int, uint, uint))dword_21E6640[0])(v9, v8, *v4);
  return 0;
}

//----- (0204CC24) --------------------------------------------------------
int __fastcall ScriptCmd_SetVarPokeChosenDCare(int a1)
{
  int v1
  int v2
  uint *v3
  int v4
  uint v5
  int v6
  ushort *v7
  int v8

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = (uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  *v7 = ((int (__fastcall *)(int, uint, uint))dword_21E73A0[0])(v8, v5, *v3);
  return 0;
}

//----- (0204CC78) --------------------------------------------------------
int __fastcall ScriptCmd_GivePokeDCare(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  LOBYTE(v1) = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = LoadPokePartyAdress(v2);
  v5 = LoadVariableAreaAdress(v2, 8);
  ((void (__fastcall *)(int, uint, int, int))dword_21E6358[0])(v4, (uchar)v1, v5, v2);
  return 0;
}

//----- (0204CCB8) --------------------------------------------------------
int __fastcall ScriptCmd_SetVarDataDayCare(int a1)
{
  int v1
  int v2
  int v3
  uint *v4
  int v5
  uchar v6
  int v7
  uchar v8
  int v9
  uchar v10
  int v11
  int v12

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = *(uint *)(v2 + 12);
  v4 = (uint *)ScriptHandler_GetSomeScriptAddresses(v2, 0xFu);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v9 = ScriptHandler_LoadHWord(v1);
  v10 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v9);
  v11 = ScriptHandler_LoadHWord(v1);
  LOBYTE(v1) = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v11);
  v12 = LoadVariableAreaAdress_8(v3);
  ((void (__fastcall *)(int, uint, uint, uint, uint, uint))dword_21E7308[0])(
    v12,
    v6,
    v8,
    v10,
    (uchar)v1,
    *v4);
  return 0;
}

//----- (0204CD44) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokeDCareLove(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = LoadVariableAreaAdress(v2, 8);
  *v4 = ((int (__fastcall *)(int))dword_21E7420[0])(v5);
  return 0;
}

//----- (0204CD74) --------------------------------------------------------
int __fastcall ScriptCmd_CheckStatusSolaceonEvent(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = LoadVariableAreaAdress(v2, 8);
  *v4 = Function_2026234(v5);
  return 0;
}

//----- (0204CDA4) --------------------------------------------------------
int __fastcall Function_204cda4(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  return 0;
}

//----- (0204CDBC) --------------------------------------------------------
int Function_204cdbc()
{
  return 0;
}

//----- (0204CDC0) --------------------------------------------------------
int Function_204cdc0()
{
  return 0;
}

//----- (0204CDC4) --------------------------------------------------------
int __fastcall Function_204cdc4(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  return 0;
}

//----- (0204CDDC) --------------------------------------------------------
int __fastcall ScriptCmd_StartAmity(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_206b218(v1);
  return 0;
}

//----- (0204CDF0) --------------------------------------------------------
int __fastcall Function_204cdf0(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_206b228(v4);
  return 0;
}

//----- (0204CE1C) --------------------------------------------------------
int __fastcall Function_204ce1c(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5
  uint v6
  ushort v7
  int v8
  int v9

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = PRNG();
  s32_div_f(v6, 100);
  if ( v7 >= 0xFu )
  {
    if ( v7 >= 0x1Eu )
    {
      if ( v7 >= 0x2Du )
      {
        if ( v7 >= 0x3Cu )
        {
          if ( v7 >= 0x46u )
          {
            if ( v7 >= 0x50u )
            {
              if ( v7 >= 0x58u )
              {
                if ( v7 >= 0x5Du )
                {
                  if ( v7 >= 0x62u )
                    v8 = 9;
                  else
                    v8 = 8;
                }
                else
                {
                  v8 = 7;
                }
              }
              else
              {
                v8 = 6;
              }
            }
            else
            {
              v8 = 5;
            }
          }
          else
          {
            v8 = 4;
          }
        }
        else
        {
          v8 = 3;
        }
      }
      else
      {
        v8 = 2;
      }
    }
    else
    {
      v8 = 1;
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v5 <= 300 )
  {
    if ( v5 < 300 )
    {
      if ( v5 <= 54 )
      {
        if ( v5 < 54 )
        {
          if ( v5 <= 25 )
          {
            if ( v5 != 25 )
              goto LABEL_55;
            goto LABEL_53;
          }
          if ( v5 > 39 || v5 < 35 )
            goto LABEL_55;
          if ( v5 != 35 )
          {
            if ( v5 != 39 )
              goto LABEL_55;
            goto LABEL_54;
          }
LABEL_53:
          v9 = 4;
          goto LABEL_56;
        }
        goto LABEL_52;
      }
      if ( v5 > 255 )
      {
        if ( v5 != 285 )
          goto LABEL_55;
      }
      else if ( v5 != 255 )
      {
        goto LABEL_55;
      }
    }
LABEL_54:
    v9 = 5;
    goto LABEL_56;
  }
  if ( v5 > 417 )
  {
    if ( v5 > 427 )
    {
      if ( v5 != 440 )
        goto LABEL_55;
      goto LABEL_53;
    }
    if ( v5 < 427 && v5 != 425 )
      goto LABEL_55;
LABEL_52:
    v9 = 3;
    goto LABEL_56;
  }
  if ( v5 >= 417 )
    goto LABEL_53;
  if ( v5 > 387 )
  {
    switch ( (uchar)v5 + 124 )
    {
      case 0:
      case 1:
        goto LABEL_51;
      case 2:
      case 3:
      case 4:
        v9 = 0;
        goto LABEL_56;
      case 5:
      case 6:
      case 7:
        v9 = 1;
        goto LABEL_56;
      default:
        goto LABEL_55;
    }
    goto LABEL_55;
  }
  if ( v5 != 387 )
  {
LABEL_55:
    v9 = 0;
    goto LABEL_56;
  }
LABEL_51:
  v9 = 2;
LABEL_56:
  *v3 = *((ushort *)&Unknown_20ebf84[5 * v9] + v8);
  return 0;
}

//----- (0204CF68) --------------------------------------------------------
int __fastcall Function_204cf68(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = PRNG() & 0xF;
  return 0;
}

//----- (0204CF8C) --------------------------------------------------------
int __fastcall Function_204cf8c(int a1)
{
  int v1
  int v2
  uint v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4) = v3 >= 9;
  return 0;
}

//----- (0204CFC4) --------------------------------------------------------
int __fastcall Function_204cfc4(int a1)
{
  int v1
  int v2
  uint v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  *(ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4) = *((ushort *)Unknown_20ebf64 + v3);
  return 0;
}

//----- (0204CFFC) --------------------------------------------------------
int __fastcall ScriptCmd_GivePokemon(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  uchar v7
  int v8
  ushort v9
  int v10
  ushort *v11

  v1 = a1;
  v2 = GetMapName(**(uint **)(*(uint *)(a1 + 128) + 28));
  v3 = *(uint *)(v1 + 128);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = ScriptHandler_LoadHWord(v1);
  v9 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v8);
  v10 = ScriptHandler_LoadHWord(v1);
  v11 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v10);
  LoadPokePartyAdress(*(uint *)(v3 + 12));
  *v11 = GivePokemon(0xBu, *(uint *)(v3 + 12), v5, v7, v9, v2);
  return 0;
}

//----- (0204D08C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokeEgg(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  ushort *v6
  uint *v7
  int *v8
  short v9

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v8 = GetAdrOfPkmnInParty(v7, *v4);
  if ( GetPkmnData(v8, 0x4Cu, 0) )
    v9 = 0;
  else
    v9 = GetPkmnData(v8, 5u, 0);
  *v6 = v9;
  return 0;
}

//----- (0204D0E8) --------------------------------------------------------
int __fastcall ScriptCmd_ComparePokeNick(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  ushort *v6
  int v7
  ushort *v8
  uint *v9
  int *v10
  int v11

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = GetOverWorldData_VariableAreaAdresses(*(uint *)(a1 + 128));
  v4 = LoadTrainerDataAdress(v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v10 = GetAdrOfPkmnInParty(v9, *v6);
  v11 = (ushort)GetPkmnData(v10, 7u, 0);
  *v8 = v11 != (ushort)GetTrainerID(v4);
  return 0;
}

//----- (0204D154) --------------------------------------------------------
int __fastcall ScriptCmd_GiveEgg(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  uint *v8
  int *v9
  int v10
  uint v12

  v1 = a1;
  v2 = a1 + 128;
  v3 = *(uint *)v2;
  v4 = LoadTrainerDataAdress(*(uint *)(*(uint *)v2 + 12));
  v5 = ScriptHandler_LoadHWord(v1);
  v12 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = (uint *)LoadPokePartyAdress(*(uint *)(v3 + 12));
  if ( (uchar)GetNrOfPkmnInParty((int)v8) < 6u )
  {
    v9 = AllocPkmnData(0xBu);
    ClearCompletePkmnDataStructure(v9);
    v10 = Function_2017070(1, v7);
    ((void (__fastcall *)(int *, uint, int, int, int, int))dword_21E6CF0[0])(
      v9,
      v12,
      1,
      v4,
      3,
      v10);
    CopyPkmnDataToParty(v8, v9);
    free((int)v9);
  }
  return 0;
}

//----- (0204D1DC) --------------------------------------------------------
int __fastcall ScriptCmd_98(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uchar v5
  int v6
  int v7
  uint *v8

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_2054988(v8, v3, v5, v7);
  return 0;
}

//----- (0204D234) --------------------------------------------------------
int __fastcall ScriptCmd_CheckMove(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  uint v6
  int v7
  int v8
  uint *v9
  int *v10

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v9 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v10 = GetAdrOfPkmnInParty(v9, v8);
  *v4 = 0;
  if ( GetPkmnData(v10, 0x4Cu, 0) )
    return 0;
  if ( v6 == GetPkmnData(v10, 0x36u, 0)
    || v6 == GetPkmnData(v10, 0x37u, 0)
    || v6 == GetPkmnData(v10, 0x38u, 0)
    || v6 == GetPkmnData(v10, 0x39u, 0) )
  {
    *v4 = 1;
  }
  return 0;
}

//----- (0204D2D8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPlaceStored(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  int v5
  uint v6
  uint v7
  uint *v8
  int *v9
  ushort *v11
  int v12

  v1 = a1;
  v12 = *(uint *)(a1 + 128);
  v2 = ScriptHandler_LoadHWord(a1);
  v11 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = LoadPokePartyAdress(*(uint *)(v12 + 12));
  v6 = (uchar)GetNrOfPkmnInParty(v5);
  v7 = 0;
  *v11 = 6;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = (uint *)LoadPokePartyAdress(*(uint *)(v12 + 12));
      v9 = GetAdrOfPkmnInParty(v8, v7);
      if ( !GetPkmnData(v9, 0x4Cu, 0)
        && (v4 == GetPkmnData(v9, 0x36u, 0)
         || v4 == GetPkmnData(v9, 0x37u, 0)
         || v4 == GetPkmnData(v9, 0x38u, 0)
         || v4 == GetPkmnData(v9, 0x39u, 0)) )
      {
        break;
      }
      v7 = (v7 + 1) & 0xFF;
      if ( v7 >= v6 )
        return 0;
    }
    *v11 = v7;
  }
  return 0;
}

//----- (0204D398) --------------------------------------------------------
int __fastcall ScriptCmd_CheckIsPokemonPoisoned(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5
  uint *v6
  int *v7
  int v8
  int v9
  int v10

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = GetAdrOfPkmnInParty(v6, v5);
  *v3 = CheckIsPokemonPoisoned(v7, v8, v9, v10);
  return 0;
}

//----- (0204D3DC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokemonLevel(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  uint v6
  int v7
  uint *v8
  int *v9
  uint v11
  ushort *v12
  uint v13

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v12 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  v13 = (uchar)GetNrOfPkmnInParty(v5);
  v6 = 0;
  v7 = 0;
  *v12 = 0;
  if ( v13 )
  {
    do
    {
      v8 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
      v9 = GetAdrOfPkmnInParty(v8, v6);
      if ( !GetPkmnData(v9, 0x4Cu, 0) && GetPkmnData(v9, 0xA1u, 0) <= v11 )
        v7 = (v7 + 1) & 0xFF;
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 < v13 );
  }
  *v12 = v7;
  return 0;
}

//----- (0204D470) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokeLevel(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  int v6
  uint *v7
  int *v8

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v8 = GetAdrOfPkmnInParty(v7, v6);
  *v4 = 0;
  if ( !GetPkmnData(v8, 0x4Cu, 0) )
    *v4 = GetPkmnData(v8, 0xA1u, 0);
  return 0;
}

//----- (0204D4CC) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokeNature(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  int v6
  int v7
  int result
  uint *v9
  int *v10

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  if ( v6 < (uchar)GetNrOfPkmnInParty(v7) )
  {
    v9 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
    v10 = GetAdrOfPkmnInParty(v9, v6);
    if ( GetPkmnData(v10, 0x4Cu, 0) )
    {
      result = 0;
      *v4 = 0;
    }
    else
    {
      *v4 = Function_2075bcc((int)v10);
      result = 0;
    }
  }
  else
  {
    result = 0;
    *v4 = 0;
  }
  return result;
}

//----- (0204D540) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokeNature(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  uint v6
  uint v7
  uint *v8
  int *v9
  uint v11
  ushort *v12

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v12 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  v6 = (uchar)GetNrOfPkmnInParty(v5);
  v7 = 0;
  *v12 = 255;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
      v9 = GetAdrOfPkmnInParty(v8, v7);
      if ( !GetPkmnData(v9, 0x4Cu, 0) && v11 == Function_2075bcc((int)v9) )
        break;
      v7 = (v7 + 1) & 0xFF;
      if ( v7 >= v6 )
        return 0;
    }
    *v12 = v7;
  }
  return 0;
}

//----- (0204D5CC) --------------------------------------------------------
int __fastcall ScriptCmd_StoreHappyPoke(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  int v6
  uint *v7
  int *v8

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v8 = GetAdrOfPkmnInParty(v7, v6);
  *v4 = GetPkmnData(v8, 9u, 0);
  return 0;
}

//----- (0204D614) --------------------------------------------------------
int __fastcall ScriptCmd_StoreHappyStatus(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  uint v7
  int v8
  int v9
  int v10
  uint *v11
  int *v12
  ushort v13
  ushort v15
  int v16

  v16 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 128);
  v6 = ScriptHandler_LoadHWord(a1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v6);
  v8 = ScriptHandler_LoadHWord(v4);
  v9 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v8);
  v10 = GetMapName(**(uint **)(*(uint *)(v4 + 128) + 28));
  v11 = (uint *)LoadPokePartyAdress(*(uint *)(v5 + 12));
  v12 = GetAdrOfPkmnInParty(v11, v9);
  v15 = GetPkmnData(v12, 9u, 0);
  if ( v7 )
  {
    v13 = GetPkmnData(v12, 6u, 0);
    if ( GetItemData(v13, 1u, 0xBu) == 53 )
      v7 = s32_div_f(150 * v7, 100) & 0xFFFF;
    if ( GetPkmnData(v12, 0x9Bu, 0) == 11 )
      v7 = (v7 + 1) & 0xFFFF;
    if ( v10 == GetPkmnData(v12, 0x98u, 0) )
      v7 = (v7 + 1) & 0xFFFF;
  }
  v15 += v7;
  if ( v15 > 0xFFu )
    v15 = 255;
  SetPkmnData((int)v12, 9, &v15);
  return 0;
}

//----- (0204D6E4) --------------------------------------------------------
int __fastcall Function_204d6e4(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  uint v7
  int v8
  int v9
  uint *v10
  int *v11
  int v12
  uint v13
  short v14
  short v16
  int v17

  v17 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 128);
  v6 = ScriptHandler_LoadHWord(a1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v6);
  v8 = ScriptHandler_LoadHWord(v4);
  v9 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v8);
  v10 = (uint *)LoadPokePartyAdress(*(uint *)(v5 + 12));
  v11 = GetAdrOfPkmnInParty(v10, v9);
  v12 = (int)v11;
  v13 = (ushort)GetPkmnData(v11, 9u, 0);
  if ( v7 <= v13 )
    v14 = v13 - v7;
  else
    v14 = 0;
  v16 = v14;
  SetPkmnData(v12, 9, (ushort *)&v16);
  return 0;
}

//----- (0204D74C) --------------------------------------------------------
int __fastcall Function_204d74c(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint v5
  int v6
  ushort *v7
  uint *v8
  int *v9

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v9 = GetAdrOfPkmnInParty(v8, v3);
  *v7 = GetPkmnData(v9, v5 + 19, 0);
  return 0;
}

//----- (0204D7AC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckFirstPokeParty(int a1)
{
  int v1
  int v2
  ushort *v3

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  *v3 = Function_205e1b4(*(uint *)(*(uint *)(v1 + 128) + 12));
  return 0;
}

//----- (0204D7D4) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokeType(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  ushort *v6
  int v7
  int v8
  uint *v9
  int *v10

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v9 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v10 = GetAdrOfPkmnInParty(v9, v8);
  *v4 = GetPkmnData(v10, 0xB1u, 0);
  *v6 = GetPkmnData(v10, 0xB2u, 0);
  return 0;
}

//----- (0204D840) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPartyNumber(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  *v4 = GetNrOfPkmnInParty(v5);
  return 0;
}

//----- (0204D86C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPartyNumberUnion(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  short v7
  uint *v8
  int *v9
  ushort *v11

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v11 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v4 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  v5 = 0;
  v6 = GetNrOfPkmnInParty(v4);
  v7 = 0;
  if ( v6 > 0 )
  {
    do
    {
      v8 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
      v9 = GetAdrOfPkmnInParty(v8, v5);
      if ( !GetPkmnData(v9, 0x4Cu, 0) )
        ++v7;
      ++v5;
    }
    while ( v5 < v6 );
  }
  *v11 = v7;
  return 0;
}

//----- (0204D8C4) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokePartyHealth(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  short v7
  uint *v8
  int *v9
  uint v11
  ushort *v12
  int v13

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v12 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  v6 = 0;
  v7 = 0;
  v13 = GetNrOfPkmnInParty(v5);
  if ( v13 > 0 )
  {
    do
    {
      if ( v6 != v11 )
      {
        v8 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
        v9 = GetAdrOfPkmnInParty(v8, v6);
        if ( !GetPkmnData(v9, 0x4Cu, 0) )
        {
          if ( GetPkmnData(v9, 0xA3u, 0) )
            ++v7;
        }
      }
      ++v6;
    }
    while ( v6 < v13 );
  }
  *v12 = v7;
  return 0;
}

//----- (0204D94C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokePartyNumDCare(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  short v6
  uint *v7
  int *v8
  ushort *v10
  uint *v11
  int v12

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v10 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v11 = (uint *)LoadVariableAreaAdress_25(*(uint *)(v2 + 12));
  v4 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  v5 = 0;
  v6 = 0;
  v12 = GetNrOfPkmnInParty(v4);
  if ( v12 > 0 )
  {
    do
    {
      v7 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
      v8 = GetAdrOfPkmnInParty(v7, v5);
      if ( !GetPkmnData(v8, 0x4Cu, 0) && GetPkmnData(v8, 0xA3u, 0) )
        ++v6;
      ++v5;
    }
    while ( v5 < v12 );
  }
  *v10 = v6 + Function_2079bec(v11);
  return 0;
}

//----- (0204D9C8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckEggUnion(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  short v7
  uint *v8
  int *v9
  ushort *v11

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v11 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v4 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  v5 = 0;
  v6 = GetNrOfPkmnInParty(v4);
  v7 = 0;
  if ( v6 > 0 )
  {
    do
    {
      v8 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
      v9 = GetAdrOfPkmnInParty(v8, v5);
      if ( GetPkmnData(v9, 0x4Cu, 0) )
        ++v7;
      ++v5;
    }
    while ( v5 < v6 );
  }
  *v11 = v7;
  return 0;
}

//----- (0204DA20) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokerus(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint v5
  uint v6
  uint *v7
  int *v8
  ushort *v10

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v10 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v4 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  v5 = (ushort)GetNrOfPkmnInParty(v4);
  v6 = 0;
  *v10 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
      v8 = GetAdrOfPkmnInParty(v7, v6);
      if ( GetPkmnData(v8, 0x9Au, 0) )
        break;
      v6 = (v6 + 1) & 0xFFFF;
      if ( v6 >= v5 )
        return 0;
    }
    *v10 = 1;
  }
  return 0;
}

//----- (0204DA84) --------------------------------------------------------
int __fastcall Function_204da84(int a1)
{
  int v1
  int v2
  int v3
  int v4
  ushort *v5
  uint *v6
  int *v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = GetAdrOfPkmnInParty(v6, v3);
  *v5 = GetPkmnData(v7, 0x6Fu, 0);
  return 0;
}

//----- (0204DACC) --------------------------------------------------------
int __fastcall ScriptCmd_CheckMoveNumDelete(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  int v6
  uint *v7
  int *v8
  int result
  int v10

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v8 = GetAdrOfPkmnInParty(v7, v6);
  if ( GetPkmnData(v8, 0x4Cu, 0) )
  {
    result = 0;
    *v4 = 0;
  }
  else
  {
    v10 = 0;
    if ( GetPkmnData(v8, 0x36u, 0) )
      v10 = 1;
    if ( GetPkmnData(v8, 0x37u, 0) )
      v10 = (v10 + 1) & 0xFF;
    if ( GetPkmnData(v8, 0x38u, 0) )
      v10 = (v10 + 1) & 0xFF;
    if ( GetPkmnData(v8, 0x39u, 0) )
      v10 = (v10 + 1) & 0xFF;
    *v4 = v10;
    result = 0;
  }
  return result;
}

//----- (0204DB74) --------------------------------------------------------
int __fastcall ScriptCmd_StoreDeleteMove(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  uint v6
  uint *v7
  int *v8
  int v9
  int v10

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v8 = GetAdrOfPkmnInParty(v7, v4);
  Function_2077408(v8, v6, v9, v10);
  return 0;
}

//----- (0204DBB8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckDeleteMove(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  int v6
  int v7
  uint v8
  uint *v9
  int *v10

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v7);
  v9 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v10 = GetAdrOfPkmnInParty(v9, v6);
  *v4 = GetPkmnData(v10, v8 + 54, 0);
  return 0;
}

//----- (0204DC18) --------------------------------------------------------
int __fastcall Function_204dc18(int a1)
{
  int v1
  int v2
  int v3
  ushort *v4
  int v5
  int v6
  uint *v7
  int *v8

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
  v8 = GetAdrOfPkmnInParty(v7, v6);
  *v4 = GetPkmnData(v8, 6u, 0);
  return 0;
}

//----- (0204DC60) --------------------------------------------------------
int __fastcall ScriptCmd_1f0(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  uint *v8
  int *v9
  int v11

  v11 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 128);
  v6 = ScriptHandler_LoadHWord(a1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v6);
  v8 = (uint *)LoadPokePartyAdress(*(uint *)(v5 + 12));
  v9 = GetAdrOfPkmnInParty(v8, v7);
  LOWORD(v11) = 0;
  SetPkmnData((int)v9, 6, (ushort *)&v11);
  return 0;
}

//----- (0204DC98) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokemonParty2(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  uint v6
  uint v7
  uint *v8
  int *v9
  uint v11
  ushort *v12

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v12 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  v6 = (uchar)GetNrOfPkmnInParty(v5);
  v7 = 0;
  *v12 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
      v9 = GetAdrOfPkmnInParty(v8, v7);
      if ( !GetPkmnData(v9, 0x4Cu, 0) && v11 == (ushort)GetPkmnData(v9, 5u, 0) )
        break;
      v7 = (v7 + 1) & 0xFF;
      if ( v7 >= v6 )
        return 0;
    }
    *v12 = 1;
  }
  return 0;
}

//----- (0204DD28) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokeParty2(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  ushort *v6
  int v7
  uint v8
  uint v9
  uint v10
  int v11
  uint v12
  uint *v13
  int v14
  uint v15
  uint v17
  int v18
  int *v19
  char v20[12]
  int v21

  v21 = a4;
  v4 = a1;
  v18 = *(uint *)(a1 + 128);
  v5 = ScriptHandler_LoadHWord(a1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v4);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v7);
  v9 = 0;
  v10 = v8;
  do
  {
    *(ushort *)&v20[2 * v9] = 0;
    v9 = (v9 + 1) & 0xFF;
  }
  while ( v9 < 6 );
  v11 = LoadPokePartyAdress(*(uint *)(v18 + 12));
  v17 = (uchar)GetNrOfPkmnInParty(v11);
  v12 = 0;
  *v6 = 0;
  if ( !v17 )
    return 0;
  while ( 1 )
  {
    v13 = (uint *)LoadPokePartyAdress(*(uint *)(v18 + 12));
    v19 = GetAdrOfPkmnInParty(v13, v12);
    if ( !GetPkmnData(v19, 0x4Cu, 0) )
    {
      v14 = (ushort)GetPkmnData(v19, 5u, 0);
      if ( v10 )
      {
        if ( v10 == v14 )
          ++*v6;
        goto LABEL_13;
      }
      *(ushort *)&v20[2 * v12] = v14;
      v15 = 0;
      if ( v12 )
        break;
    }
LABEL_13:
    v12 = (v12 + 1) & 0xFF;
    if ( v12 >= v17 )
      return 0;
  }
  while ( *(ushort *)&v20[2 * v15] != *(ushort *)&v20[2 * v12] )
  {
    v15 = (v15 + 1) & 0xFF;
    if ( v15 >= v12 )
      goto LABEL_13;
  }
  *v6 = 1;
  return 0;
}

//----- (0204DE00) --------------------------------------------------------
int __fastcall Function_204de00(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  uint v6
  uint v7
  uint *v8
  int *v9
  uint v11
  ushort *v12

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v12 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  v6 = (uchar)GetNrOfPkmnInParty(v5);
  v7 = 0;
  *v12 = 255;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
      v9 = GetAdrOfPkmnInParty(v8, v7);
      if ( !GetPkmnData(v9, 0x4Cu, 0) && v11 == (ushort)GetPkmnData(v9, 5u, 0) )
        break;
      v7 = (v7 + 1) & 0xFF;
      if ( v7 >= v6 )
        return 0;
    }
    *v12 = v7;
  }
  return 0;
}

//----- (0204DE94) --------------------------------------------------------
int __fastcall Function_204de94(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint *v5
  int *v6
  uint v7
  int *v8
  int v9
  int v10
  ushort *v12

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v12 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v6 = GetAdrOfPkmnInParty(v5, v4);
  v7 = 0;
  v8 = v6;
  v9 = 0;
  do
  {
    v10 = Function_20923c0((uchar)v7, 0);
    if ( GetPkmnData(v8, v10, 0) )
      v9 = (v9 + 1) & 0xFFFF;
    v7 = (v7 + 1) & 0xFFFF;
  }
  while ( v7 < 0x50 );
  *v12 = v9;
  return 0;
}

//----- (0204DF08) --------------------------------------------------------
int __fastcall ScriptCmd_CheckRiboonNumber(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  uint v5
  int *v6
  int v7
  ushort *v9
  int v10
  uint v11
  uint *v12

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v3 = LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v4 = (ushort)GetNrOfPkmnInParty(v3);
  v12 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v11 = 0;
  v10 = 0;
  do
  {
    v5 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        v6 = GetAdrOfPkmnInParty(v12, v5);
        if ( !GetPkmnData(v6, 0x4Cu, 0) )
        {
          v7 = Function_20923c0((uchar)v11, 0);
          if ( GetPkmnData(v6, v7, 0) )
            break;
        }
        v5 = (v5 + 1) & 0xFFFF;
        if ( v5 >= v4 )
          goto LABEL_7;
      }
      v10 = (v10 + 1) & 0xFFFF;
    }
LABEL_7:
    v11 = (v11 + 1) & 0xFFFF;
  }
  while ( v11 < 0x50 );
  *v9 = v10;
  return 0;
}

//----- (0204DFB0) --------------------------------------------------------
int __fastcall ScriptCmd_CheckRibbon(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5
  int v6
  uchar v7
  uint *v8
  int *v9
  int v10

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v6);
  v8 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v9 = GetAdrOfPkmnInParty(v8, v5);
  v10 = Function_20923c0(v7, 0);
  *v3 = GetPkmnData(v9, v10, 0);
  return 0;
}

//----- (0204E01C) --------------------------------------------------------
int __fastcall ScriptCmd_GiveRibbon(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  uchar v8
  uint *v9
  int *v10
  int v11
  int v12
  ushort v14[2]
  int v15

  v15 = a4;
  v4 = a1;
  v5 = ScriptHandler_LoadHWord(a1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v4);
  v8 = ScriptHandler_CheckSaveParameter(*(uint *)(v4 + 128), v7);
  LOBYTE(v14[0]) = 1;
  v9 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v4 + 128) + 12));
  v10 = GetAdrOfPkmnInParty(v9, v6);
  v11 = Function_20923c0(v8, 0);
  SetPkmnData((int)v10, v11, v14);
  v12 = Function_20923c0(v8, 0);
  Function_206ddb8(*(uint *)(*(uint *)(v4 + 128) + 12), v10, v12);
  return 0;
}

//----- (0204E094) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokeNumParty(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  uint *v5
  uint v6
  int *v7
  int result
  ushort *v9
  uint v10

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v3 = LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v4 = (ushort)GetNrOfPkmnInParty(v3);
  v5 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v10 = 0;
  while ( 1 )
  {
    v6 = 0;
    if ( v4 )
      break;
LABEL_7:
    v10 = (v10 + 1) & 0xFFFF;
    if ( v10 >= 0x50 )
    {
      result = 0;
      *v9 = 0;
      return result;
    }
  }
  while ( 1 )
  {
    v7 = GetAdrOfPkmnInParty(v5, v6);
    if ( GetPkmnData(v7, 0x4Cu, 0) )
    {
      if ( GetPkmnData(v7, 3u, 0) )
        break;
    }
    v6 = (v6 + 1) & 0xFFFF;
    if ( v6 >= v4 )
      goto LABEL_7;
  }
  *v9 = 1;
  return 0;
}

//----- (0204E128) --------------------------------------------------------
int ScriptCmd_a0()
{
  return 0;
}

//----- (0204E12C) --------------------------------------------------------
int __fastcall ScriptCmd_31c(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  uint v6
  uint v7
  uint *v8
  int *v9
  uint v11
  ushort *v12

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v12 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  v11 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  v6 = (uchar)GetNrOfPkmnInParty(v5);
  v7 = 0;
  *v12 = 255;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
      v9 = GetAdrOfPkmnInParty(v8, v7);
      if ( !GetPkmnData(v9, 0x4Cu, 0)
        && v11 == (ushort)GetPkmnData(v9, 5u, 0)
        && GetPkmnData(v9, 0x6Eu, 0) == 1 )
      {
        break;
      }
      v7 = (v7 + 1) & 0xFF;
      if ( v7 >= v6 )
        return 0;
    }
    *v12 = v7;
  }
  return 0;
}

//----- (0204E1D0) --------------------------------------------------------
int __fastcall ScriptCmd_32f(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  int v5
  int v6
  int v7
  int v8
  uint *v9
  int *v10
  ushort *v12

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v12 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v6 = LoadPokePartyAdress(*(uint *)(v2 + 12));
  v7 = GetNrOfPkmnInParty(v6);
  v8 = 0;
  *v12 = 0;
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v9 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 12));
      v10 = GetAdrOfPkmnInParty(v9, v8);
      if ( v4 == GetPkmnData(v10, 6u, 0) )
        break;
      if ( ++v8 >= v7 )
        return 0;
    }
    *v12 = 1;
  }
  return 0;
}

//----- (0204E240) --------------------------------------------------------
int __fastcall ScriptCmd_CheckFossil(int a1)
{
  int v1
  int v2
  int v3
  int v4
  uint v5
  int v6
  int v7
  ushort *v9

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v5 = 0;
  v9 = (ushort *)v4;
  v6 = 0;
  do
  {
    v7 = LoadVariableAreaAdressItemList(*(uint *)(v2 + 12));
    v6 = (v6 + Function_207d730(v7, LOWORD(Unknown_20ebffc[v5]), 4u)) & 0xFFFF;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 < 7 );
  *v9 = v6;
  return 0;
}

//----- (0204E28C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckItemChosen(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  uint v5
  uint v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = 0;
  *v3 = 0;
  while ( v5 != LOWORD(Unknown_20ebffc[v6]) )
  {
    v6 = (v6 + 1) & 0xFFFF;
    if ( v6 >= 7 )
      return 0;
  }
  *v3 = HIWORD(Unknown_20ebffc[v6]);
  return 0;
}

//----- (0204E2E0) --------------------------------------------------------
int __fastcall ScriptCmd_CompareItemPokeFossil(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  uint v6
  uint v7
  int v8
  uint v10
  ushort *v11
  ushort *v12

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v12 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  v11 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v5 = ScriptHandler_LoadHWord(v1);
  v10 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v6 = 0;
  v7 = 0;
  *v12 = 0;
  *v11 = 0;
  while ( 1 )
  {
    v8 = LoadVariableAreaAdressItemList(*(uint *)(v2 + 12));
    v7 = (v7 + Function_207d730(v8, LOWORD(Unknown_20ebffc[v6]), 4u)) & 0xFFFF;
    if ( v7 >= v10 )
      break;
    v6 = (v6 + 1) & 0xFF;
    if ( v6 >= 7 )
      return 0;
  }
  *v12 = Unknown_20ebffc[v6];
  *v11 = v6;
  return 0;
}

//----- (0204E370) --------------------------------------------------------
int ScriptCmd_1f2()
{
  return 0;
}

//----- (0204E374) --------------------------------------------------------
int ScriptCmd_1f3()
{
  return 0;
}

//----- (0204E378) --------------------------------------------------------
int __fastcall ScriptCmd_ChoosePrizeCasino(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  ushort *v5
  int v6
  ushort *v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  *v5 = Unknown_20ec018[v3];
  *v7 = HIWORD(Unknown_20ec018[v3]);
  return 0;
}

//----- (0204E3CC) --------------------------------------------------------
int __fastcall ScriptCmd_157(int a1)
{
  int v1
  uint *v2
  int v3
  ushort *v4

  v1 = a1;
  v2 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = ScriptHandler_LoadHWord(v1);
  v4 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  *v4 = CheckActPokedex(v2);
  return 0;
}

//----- (0204E3FC) --------------------------------------------------------
int __fastcall ScriptCmd_ActivatePokedex(int a1)
{
  uint *v1

  v1 = (uint *)LoadPokedexDataAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  ActivatePokedex(v1);
  return 0;
}

//----- (0204E410) --------------------------------------------------------
int __fastcall ScriptCmd_159(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_6(*(uint *)(*(uint *)(v1 + 128) + 12));
  v5 = AddVariableAreaAdress_6_8c(v4);
  *v3 = Function_205ec40(v5);
  return 0;
}

//----- (0204E440) --------------------------------------------------------
int __fastcall ScriptCmd_GiveRunningShoes(int a1)
{
  int v1
  int v2

  v1 = LoadVariableAreaAdress_6(*(uint *)(*(uint *)(a1 + 128) + 12));
  v2 = AddVariableAreaAdress_6_8c(v1);
  SetRunningShoes(v2, 1);
  return 0;
}

//----- (0204E45C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckBadge(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  ushort *v5
  int v6

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  if ( v3 >= 8 )
    ErrorHandler();
  v6 = LoadTrainerDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v5 = CheckBadge(v6, v3);
  return 0;
}

//----- (0204E4A4) --------------------------------------------------------
int __fastcall ScriptCmd_EnableBadge(int a1)
{
  int v1
  int v2
  uint v3
  char v4
  int v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = v3;
  if ( v3 >= 8 )
    ErrorHandler();
  v5 = LoadTrainerDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  EnableBadge(v5, v4);
  return 0;
}

//----- (0204E4D8) --------------------------------------------------------
int __fastcall ScriptCmd_15e(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = CheckFlag_Flag960(v4);
  return 0;
}

//----- (0204E504) --------------------------------------------------------
int __fastcall ScriptCmd_DisableBadge(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  int v5
  ushort *v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = 0;
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = 0;
  do
  {
    v5 = LoadTrainerDataAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
    if ( CheckBadge(v5, *((uchar *)Unknown_20ec064 + v3)) == 1 )
      v4 = (v4 + 1) & 0xFFFF;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 < 8 );
  *v7 = v4;
  return 0;
}

//----- (0204E554) --------------------------------------------------------
int __fastcall ScriptCmd_15f(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  SetFlag_Flag960(v1);
  return 0;
}

//----- (0204E568) --------------------------------------------------------
int __fastcall ScriptCmd_CheckFollow(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_206a984(v4);
  return 0;
}

//----- (0204E594) --------------------------------------------------------
int __fastcall ScriptCmd_StartFollow(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_206a964(v1);
  return 0;
}

//----- (0204E5A8) --------------------------------------------------------
int __fastcall ScriptCmd_StopFollow2(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_206a974(v1);
  return 0;
}

//----- (0204E5BC) --------------------------------------------------------
int __fastcall ScriptCmd_163(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_206a9b4(v4);
  return 0;
}

//----- (0204E5E8) --------------------------------------------------------
int __fastcall ScriptCmd_164(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_206a994(v1);
  return 0;
}

//----- (0204E5FC) --------------------------------------------------------
int __fastcall ScriptCmd_165(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_206a9a4(v1);
  return 0;
}

//----- (0204E610) --------------------------------------------------------
int __fastcall ScriptCmd_166(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadFlagAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  *v3 = Function_206a954(v4);
  return 0;
}

//----- (0204E63C) --------------------------------------------------------
int __fastcall ScriptCmd_167(int a1)
{
  int v1

  v1 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  Function_206a944(v1);
  return 0;
}

//----- (0204E650) --------------------------------------------------------
int __fastcall ScriptCmd_HmFunctions(int a1)
{
  int v1
  int v2
  uchar *v3
  int v4
  int v5
  int v6
  ushort *v7

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = *(uchar **)(v1 + 8);
  v4 = v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = (uchar)*v3;
  if ( *v3 )
  {
    if ( v5 == 1 )
    {
      Function_206aeac(v2, 1);
    }
    else if ( v5 == 2 )
    {
      v6 = ScriptHandler_LoadHWord(v1);
      v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
      *v7 = Function_206aeac(v4, 2);
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    Function_206aeac(v2, 0);
  }
  return 0;
}

//----- (0204E6AC) --------------------------------------------------------
int __fastcall ScriptCmd_FlashDuration(int a1)
{
  int v1
  int v2
  uchar *v3
  int v4
  int v5
  int v6
  ushort *v7

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = *(uchar **)(v1 + 8);
  v4 = v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = (uchar)*v3;
  if ( *v3 )
  {
    if ( v5 == 1 )
    {
      Function_206aebc(v2);
    }
    else if ( v5 == 2 )
    {
      v6 = ScriptHandler_LoadHWord(v1);
      v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
      *v7 = Function_206aedc(v4);
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    Function_206aecc(v2);
  }
  return 0;
}

//----- (0204E704) --------------------------------------------------------
int __fastcall ScriptCmd_DefogDuration(int a1)
{
  int v1
  int v2
  uchar *v3
  int v4
  int v5
  int v6
  ushort *v7

  v1 = a1;
  v2 = LoadFlagAdress(*(uint *)(*(uint *)(a1 + 128) + 12));
  v3 = *(uchar **)(v1 + 8);
  v4 = v2;
  *(uint *)(v1 + 8) = v3 + 1;
  v5 = (uchar)*v3;
  if ( *v3 )
  {
    if ( v5 == 1 )
    {
      Function_206aeec(v2);
    }
    else if ( v5 == 2 )
    {
      v6 = ScriptHandler_LoadHWord(v1);
      v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
      *v7 = Function_206af0c(v4);
    }
    else
    {
      ErrorHandler();
    }
  }
  else
  {
    Function_206aefc(v2);
  }
  return 0;
}

//----- (0204E75C) --------------------------------------------------------
int __fastcall ScriptCmd_TakeItem(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  int v5
  int v6
  int v7
  ushort *v8
  int v9

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = LoadVariableAreaAdressItemList(*(uint *)(v2 + 12));
  *v8 = TakeItem(v9, v4, v6, 4u);
  return 0;
}

//----- (0204E7B4) --------------------------------------------------------
int __fastcall ScriptCmd_GiveItem(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  int v5
  uint v6
  int v7
  ushort *v8
  int v9

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = LoadVariableAreaAdressItemList(*(uint *)(v2 + 12));
  *v8 = GiveItem(v9, v4, v6, 4u);
  return 0;
}

//----- (0204E80C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckStoreItem(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  int v5
  int v6
  int v7
  ushort *v8
  int v9

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = LoadVariableAreaAdressItemList(*(uint *)(v2 + 12));
  *v8 = CheckStoreItem(v9, v4, v6, 4u);
  return 0;
}

//----- (0204E864) --------------------------------------------------------
int __fastcall ScriptCmd_CheckItem(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  int v5
  uint v6
  int v7
  ushort *v8
  int v9

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = LoadVariableAreaAdressItemList(*(uint *)(v2 + 12));
  *v8 = CheckItem(v9, v4, v6, 0xBu);
  return 0;
}

//----- (0204E8BC) --------------------------------------------------------
int __fastcall ScriptCmd_2fe(int a1)
{
  int v1
  int v2
  int v3
  uint v4
  int v5
  ushort *v6
  int v7

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = LoadVariableAreaAdressItemList(*(uint *)(v2 + 12));
  *v6 = Function_207d730(v7, v4, 0xBu);
  return 0;
}

//----- (0204E900) --------------------------------------------------------
int __fastcall ScriptCmd_StoreItemTaken(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  ushort *v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  *v5 = StoreItemTaken(v3);
  return 0;
}

//----- (0204E934) --------------------------------------------------------
int __fastcall ScriptCmd_StoreItemType(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  ushort *v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  *v5 = GetItemData(v3, 5u, 0xBu);
  return 0;
}

//----- (0204E96C) --------------------------------------------------------
int Function_204e96c()
{
  return 0;
}

//----- (0204E970) --------------------------------------------------------
int Function_204e970()
{
  return 0;
}

//----- (0204E974) --------------------------------------------------------
int __fastcall ScriptCmd_SendItemType1(int a1)
{
  int v1
  int v2
  int v3
  char v4
  int v5
  int v6
  ushort *v7
  int v8

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = LoadVariableAreaAdress_c(v2);
  *v7 = Function_202895c(v8, v4);
  return 0;
}

//----- (0204E9C8) --------------------------------------------------------
int __fastcall Function_204e9c8(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0204EA04) --------------------------------------------------------
int __fastcall ScriptCmd_CheckUndergroundPCStatus(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  ushort *v6
  int v7

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  v7 = LoadVariableAreaAdress_c(v2);
  *v6 = Function_2028984(v7);
  return 0;
}

//----- (0204EA58) --------------------------------------------------------
int __fastcall Function_204ea58(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0204EA94) --------------------------------------------------------
int __fastcall ScriptCmd_SendItemType2(int a1)
{
  int v1
  int v2
  int v3
  char v4
  int v5
  int v6
  ushort *v7
  int v8

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  v8 = LoadVariableAreaAdress_c(v2);
  *v7 = Function_2028e84(v8, v4);
  return 0;
}

//----- (0204EAE8) --------------------------------------------------------
int __fastcall Function_204eae8(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0204EB24) --------------------------------------------------------
int __fastcall Function_204eb24(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0204EB60) --------------------------------------------------------
int __fastcall Function_204eb60(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0204EB9C) --------------------------------------------------------
int __fastcall Function_204eb9c(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v5 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v5);
  LoadVariableAreaAdress_c(v2);
  return 0;
}

//----- (0204EBE4) --------------------------------------------------------
int __fastcall Function_204ebe4(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0204EC20) --------------------------------------------------------
int __fastcall Function_204ec20(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0204EC5C) --------------------------------------------------------
int __fastcall Function_204ec5c(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0204EC98) --------------------------------------------------------
int __fastcall ScriptCmd_SendItemType3(int a1)
{
  int v1
  int v2
  int v3
  char v4
  int v5
  char v6
  int v7
  ushort *v8
  int v9

  v1 = a1;
  v2 = *(uint *)(*(uint *)(a1 + 128) + 12);
  v3 = ScriptHandler_LoadHWord(a1);
  v4 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v5 = ScriptHandler_LoadHWord(v1);
  v6 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v5);
  v7 = ScriptHandler_LoadHWord(v1);
  v8 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v7);
  v9 = LoadVariableAreaAdress_c(v2);
  *v8 = Function_2028cb0(v9, v4, v6);
  return 0;
}

//----- (0204ECF0) --------------------------------------------------------
int __fastcall ScriptCmd_90(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0204ED2C) --------------------------------------------------------
int __fastcall ScriptCmd_91(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0204ED68) --------------------------------------------------------
int __fastcall ScriptCmd_92(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v3 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v3);
  v4 = ScriptHandler_LoadHWord(v1);
  ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  return 0;
}

//----- (0204EDA4) --------------------------------------------------------
int __fastcall ScriptCmd_StorePokeDelete(int a1)
{
  int v1
  int v2
  char v3
  int *v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  *v4 = Function_203d6e4(0x20u, *(uint *)(v1 + 128), v3);
  ScriptHandler_AddFunction(v1, (int)Function_2041d60);
  return 1;
}

//----- (0204EDEC) --------------------------------------------------------
int __fastcall ScriptCmd_StoreMoveDelete(int a1)
{
  int v1
  int v2
  ushort *v3
  int *v4
  int result

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  if ( !*v4 )
    ErrorHandler();
  *v3 = Function_203d750(*v4);
  if ( *v3 == 4 )
    *v3 = 255;
  free(*v4);
  result = 0;
  *v4 = 0;
  return result;
}

//----- (0204EE38) --------------------------------------------------------
int ScriptCmd_21e()
{
  return 0;
}

//----- (0204EE3C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckMoveRemember(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5
  uint *v6
  int *v7
  int v8
  int v9
  ushort *v10

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = GetAdrOfPkmnInParty(v6, v5);
  v10 = (ushort *)Function_20997d8(v7, 0x20u, v8, v9);
  *v3 = Function_20998d8(v10);
  free((int)v10);
  return 0;
}

//----- (0204EE90) --------------------------------------------------------
int __fastcall Function_204ee90(int a1, char a2, int a3, int a4)
{
  int v4
  char v5
  int v6
  int v7
  int **v8
  int *v9
  int v10
  int v11

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (int **)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0x13u);
  v9 = (int *)Function_20997b8(0x20u);
  v10 = (int)v9;
  *v8 = v9;
  *v9 = v6;
  v11 = GetOverWorldData_VariableAreaAdresses(*(uint *)(v4 + 128));
  *(uint *)(v10 + 4) = LoadTrainerDataAdress(v11);
  *(uint *)(v10 + 8) = LoadPlayerDataAdress(*(uint *)(*(uint *)(v4 + 128) + 12));
  *(uint *)(v10 + 12) = v7;
  *(uchar *)(v10 + 21) = v5;
  Function_203e284(*(uint *)(v4 + 128), v10);
  ScriptHandler_AddFunction(v4, (int)Function_2041d60);
  return free(v7);
}

//----- (0204EEFC) --------------------------------------------------------
int ScriptCmd_220()
{
  return 1;
}

//----- (0204EF00) --------------------------------------------------------
int __fastcall ScriptCmd_RememberMove(int a1)
{
  int v1
  int v2
  int v3
  uint *v4
  int *v5
  int v6
  int v7
  int v8
  int v9

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v5 = GetAdrOfPkmnInParty(v4, v3);
  v6 = (int)v5;
  v9 = Function_20997d8(v5, 0x20u, v7, v8);
  Function_204ee90(v1, 1, v6, v9);
  return 1;
}

//----- (0204EF40) --------------------------------------------------------
int __fastcall ScriptCmd_TeachMove(int a1)
{
  int v1
  int v2
  int v3
  int v4
  short v5
  uint *v6
  int *v7
  ushort *v8

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = (uint *)LoadPokePartyAdress(*(uint *)(*(uint *)(v1 + 128) + 12));
  v7 = GetAdrOfPkmnInParty(v6, v3);
  v8 = (ushort *)malloc(0x20u, 4);
  *v8 = v5;
  v8[1] = -1;
  Function_204ee90(v1, 0, (int)v7, (int)v8);
  return 1;
}

//----- (0204EFA0) --------------------------------------------------------
int ScriptCmd_222()
{
  return 0;
}

//----- (0204EFA4) --------------------------------------------------------
int __fastcall ScriptCmd_StoreRememberMove(int a1)
{
  int v1
  int v2
  short *v3
  int v4
  short v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (short *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = *(uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  if ( !v4 )
    ErrorHandler();
  if ( *(uchar *)(v4 + 22) )
    v5 = 255;
  else
    v5 = 0;
  *v3 = v5;
  Call_free17(v4);
  return 0;
}

//----- (0204EFE8) --------------------------------------------------------
int __fastcall ScriptCmd_CheckTeachMove(int a1)
{
  int v1
  int v2
  short *v3
  int v4
  short v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (short *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = *(uint *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  if ( !v4 )
    ErrorHandler();
  if ( *(uchar *)(v4 + 22) )
    v5 = 255;
  else
    v5 = 0;
  *v3 = v5;
  Call_free17(v4);
  return 0;
}

//----- (0204F02C) --------------------------------------------------------
int ScriptCmd_23f()
{
  ErrorHandler();
  return 0;
}

//----- (0204F038) --------------------------------------------------------
int ScriptCmd_240()
{
  ErrorHandler();
  return 0;
}

//----- (0204F044) --------------------------------------------------------
int ScriptCmd_241()
{
  return 0;
}

//----- (0204F048) --------------------------------------------------------
int ScriptCmd_242()
{
  return 0;
}

//----- (0204F04C) --------------------------------------------------------
int __fastcall ScriptCmd_DeleteSavesBFactory(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  uint v5
  uchar *v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17
  int v18
  int v19
  int v20
  int v21
  char v23

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = (uchar *)Function_20300f4(*(uint *)(*(uint *)(v1 + 128) + 12));
  v23 = 0;
  Function_20300b0(v6, 10, v3 + 4 * v5, (uchar *)&v23);
  if ( v3 == 3 )
  {
    if ( v5 )
      v7 = 104;
    else
      v7 = 102;
    v8 = LoadVariableAreaAdress_17(*(uint *)(*(uint *)(v1 + 128) + 12));
    v9 = Function_205e6a8(v7);
    Function_20306e4(v8, v7, v9, 0);
  }
  v10 = LoadVariableAreaAdress_17(*(uint *)(*(uint *)(v1 + 128) + 12));
  v12 = Function_205e430((uchar)v5, (uchar)v3, v11);
  v14 = Function_205e430((uchar)v5, (uchar)v3, v13);
  v15 = Function_205e6a8(v14);
  Function_20306e4(v10, v12, v15, 0);
  v16 = LoadVariableAreaAdress_17(*(uint *)(*(uint *)(v1 + 128) + 12));
  v18 = Function_205e488((uchar)v5, (uchar)v3, v17);
  v20 = Function_205e488((uchar)v5, (uchar)v3, v19);
  v21 = Function_205e6a8(v20);
  Function_20306e4(v16, v18, v21, 0);
  return 0;
}

//----- (0204F13C) --------------------------------------------------------
int __fastcall ScriptCmd_CheckPokeCastle(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  ushort *v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  uint v12
  int v13
  char v14
  int result
  uchar *v16

  v1 = a1;
  ScriptHandler_LoadHWord(a1);
  v2 = ScriptHandler_LoadHWord(v1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  Function_2030114(*(uint *)(*(uint *)(v1 + 128) + 12));
  v16 = (uchar *)Function_203026c(*(uint *)(*(uint *)(v1 + 128) + 12));
  v6 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  switch ( (uchar)v6 )
  {
    case 0:
      *v5 = Function_204f268(v3, *(uint *)(*(uint *)(v1 + 128) + 12));
      goto LABEL_15;
    case 1:
      if ( v3 == 3 )
      {
        v7 = LoadVariableAreaAdress_17(*(uint *)(*(uint *)(v1 + 128) + 12));
        v8 = Function_205e6a8(0x6Au);
        *v5 = Function_2030698(v7, 106, v8);
      }
      else
      {
        *v5 = Function_20302b4(v16, 5, v3);
      }
      goto LABEL_15;
    case 2:
      v9 = LoadVariableAreaAdress_17(*(uint *)(*(uint *)(v1 + 128) + 12));
      Function_205e55c((uchar)v3);
      v11 = v10;
      Function_205e55c((uchar)v3);
      v13 = Function_205e6a8(v12);
      *v5 = Function_2030698(v9, v11, v13);
      goto LABEL_15;
    case 3:
      Function_204fa50(*(uint *)(*(uint *)(v1 + 128) + 12), v16, (uchar)v3);
      goto LABEL_15;
    case 4:
      if ( v3 )
      {
        if ( v3 == 1 )
          v14 = 1;
        else
          v14 = 2;
      }
      else
      {
        v14 = 0;
      }
      Function_204f470(*(uint *)(v1 + 116), v6, v14);
      result = 1;
      break;
    default:
      ErrorHandler();
      *v5 = 0;
LABEL_15:
      result = 0;
      break;
  }
  return result;
}

//----- (0204F268) --------------------------------------------------------
BOOL __fastcall Function_204f268(int a1, int a2)
{
  uint v2
  uint v4
  uint v5
  int *v6
  int v7
  uint v8
  uint v9
  int v10
  uint *v11
  uint v12
  int v13
  ushort v14[1]

  v10 = a1;
  v11 = (uint *)LoadPokePartyAdress(a2);
  v2 = (uchar)GetNrOfPkmnInParty((int)v11);
  if ( (int)v2 < v10 )
    return 0;
  v4 = 0;
  v5 = 0;
  do
  {
    v14[v4] = 0;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 6 );
  v13 = 0;
  if ( v2 )
  {
    do
    {
      v6 = GetAdrOfPkmnInParty(v11, v5);
      v7 = (ushort)GetPkmnData(v6, 5u, 0);
      v12 = (ushort)GetPkmnData(v6, 0xA1u, 0);
      if ( !GetPkmnData(v6, 0x4Cu, 0) && v12 >= 0x1E && Function_2078804(v7) != 1 )
      {
        v13 = (v13 + 1) & 0xFF;
        v14[v5] = v7;
      }
      v5 = (v5 + 1) & 0xFF;
    }
    while ( v5 < v2 );
  }
  if ( v10 != 2 )
    return v13 >= v10;
  v8 = 0;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v9 = 0;
    if ( v2 )
      break;
LABEL_19:
    v8 = (v8 + 1) & 0xFF;
    if ( v8 >= v2 )
      return 0;
  }
  while ( v8 == v9 || !v14[v8] || v14[v8] != v14[v9] )
  {
    v9 = (v9 + 1) & 0xFF;
    if ( v9 >= v2 )
      goto LABEL_19;
  }
  return 1;
}

//----- (0204F360) --------------------------------------------------------
int __fastcall ScriptCmd_2d1(int a1)
{
  int v1
  int v2
  uchar v3
  uchar *v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = (uchar *)Function_203026c(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_204fa50(*(uint *)(*(uint *)(v1 + 128) + 12), v4, v3);
  return 0;
}

//----- (0204F398) --------------------------------------------------------
int __fastcall ScriptCmd_ChooseWirePokeBCastle(int a1)
{
  int v1
  int v2
  short v3
  int v4
  int v5

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  Function_204f3d0(*(uint *)(v1 + 116), v3, v5);
  return 1;
}

//----- (0204F3D0) --------------------------------------------------------
uint *__fastcall Function_204f3d0(int a1, short a2, int a3)
{
  int v3
  short v4
  int v5
  uchar *v6
  int v7

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (uchar *)malloc(0xBu, 12);
  v7 = (int)v6;
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
  *((ushort *)v6 + 2) = v4;
  *((uint *)v6 + 2) = v5;
  Function_2099514((int)v6);
  return Function_2050944(v3, (int)Function_204f414, v7);
}

//----- (0204F414) --------------------------------------------------------
int __fastcall Function_204f414(int a1)
{
  uchar *v1
  uchar *v2
  int v3

  v1 = (uchar *)GetUnknownStruct01_c(a1);
  v2 = v1;
  v3 = *v1;
  if ( *v1 )
  {
    if ( v3 == 1 )
    {
      if ( v1[1] >= 2u )
      {
        **((ushort **)v1 + 2) = *((ushort *)v1 + 2) != *((ushort *)v1 + 3);
        ++*v1;
      }
    }
    else if ( v3 == 2 )
    {
      free((int)v1);
      return 1;
    }
  }
  else if ( Function_20359dc(132, (int)v1, 12) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (0204F470) --------------------------------------------------------
uint *__fastcall Function_204f470(int a1, int a2, char a3)
{
  int v3
  char v4
  int v5
  int v6

  v3 = a2;
  v4 = a3;
  v5 = LoadOverWorldDataAdress(a1);
  v6 = malloc(0xBu, 12);
  MI_CpuFill8((ushort *)v6, 0, 0xCu);
  *(uchar *)(v6 + 4) = v4;
  *(uint *)(v6 + 8) = v3;
  return Function_2050944(*(uint *)(v5 + 16), (int)Function_204f4a4, v6);
}

//----- (0204F4A4) --------------------------------------------------------
int __fastcall Function_204f4a4(int a1)
{
  int v1
  uint **v2
  int *v3
  int result

  v1 = a1;
  v2 = (uint **)LoadOverWorldDataAdress(a1);
  v3 = (int *)GetUnknownStruct01_c(v1);
  switch ( (uchar)*v3 )
  {
    case 0u:
      *v3 = Function_204f50c((int)v3, (int)v2);
      goto LABEL_7;
    case 1u:
      *v3 = Function_204f5d8((int)v3, v2);
      goto LABEL_7;
    case 2u:
      *v3 = Function_204f628((int)v3, (int)v2, 0xBu);
      goto LABEL_7;
    case 3u:
      *v3 = Function_204f6b0((int)v3, v2);
      goto LABEL_7;
    case 4u:
      free((int)v3);
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (0204F50C) --------------------------------------------------------
int __fastcall Function_204f50c(int a1, int a2)
{
  int v2
  int v3
  int v4
  uint v5
  char v6
  uchar *v7
  uchar *v8

  v2 = a1;
  v3 = a2;
  v4 = malloc(0xBu, 64);
  MIi_CpuClearFast(0, (uint *)v4, 0x40u);
  *(uint *)v4 = LoadPokePartyAdress(*(uint *)(v3 + 12));
  *(uint *)(v4 + 4) = LoadVariableAreaAdressItemList(*(uint *)(v3 + 12));
  *(uint *)(v4 + 8) = LoadVariableAreaAdress_f(*(uint *)(v3 + 12));
  *(uint *)(v4 + 12) = LoadPlayerDataAdress(*(uint *)(v3 + 12));
  v5 = 0;
  *(uchar *)(v4 + 33) = 0;
  *(uchar *)(v4 + 32) = 22;
  *(uint *)(v4 + 28) = v3;
  *(uchar *)(v4 + 34) = *(uchar *)(v2 + 5);
  do
  {
    v6 = *(uchar *)(v2 + v5 + 6);
    v7 = (uchar *)(v4 + v5 + 44);
    v5 = (v5 + 1) & 0xFF;
    *v7 = v6;
  }
  while ( v5 < 2 );
  *(uchar *)(v4 + 51) = 30;
  *(uchar *)(v4 + 50) = *(uchar *)(v4 + 50) & 0xF0 | 1;
  *(uchar *)(v4 + 50) = *(uchar *)(v4 + 50) & 0xF | 0x10;
  v8 = (uchar *)(v4 + 50);
  if ( *(uchar *)(v2 + 4) == 1 )
  {
    *v8 = *v8 & 0xF0 | 2;
    *v8 = *v8 & 0xF | 0x20;
  }
  OverWorldData_AllocAndInitOverlayData(v3, (int *)&Unknown_20f1e88, v4);
  **(uint **)(v2 + 8) = v4;
  return 1;
}

//----- (0204F5D8) --------------------------------------------------------
int __fastcall Function_204f5d8(int a1, uint **a2)
{
  int v2
  uint v3
  int v5
  int v6

  v2 = a1;
  if ( Function_20509b4(a2) )
    return 1;
  v5 = **(uint **)(v2 + 8);
  v6 = *(uchar *)(**(uint **)(v2 + 8) + 34);
  if ( v6 == 6 )
    return 4;
  if ( v6 == 7 )
    return 4;
  MI_CpuCopy8(v5 + 44, v2 + 6, 2u, v3);
  *(uchar *)(v2 + 5) = *(uchar *)(v5 + 34);
  free(v5);
  **(uint **)(v2 + 8) = 0;
  return 2;
}

//----- (0204F628) --------------------------------------------------------
int __fastcall Function_204f628(int a1, int a2, uint a3)
{
  int v3
  int v4
  int v5
  int v6
  int v7

  v3 = a2;
  v4 = a1;
  v5 = *(uint *)(a2 + 12);
  v6 = malloc2(a3, 48);
  MI_CpuFill8((ushort *)v6, 0, 0x30u);
  *(uint *)(v6 + 4) = LoadPlayerDataAdress(v5);
  *(uint *)v6 = LoadPokePartyAdress(v5);
  *(uint *)(v6 + 28) = Function_207a274(v5);
  *(uint *)(v6 + 44) = Function_208c324(v5);
  *(uchar *)(v6 + 17) = 1;
  *(uchar *)(v6 + 20) = *(uchar *)(v4 + 5);
  *(uchar *)(v6 + 19) = GetNrOfPkmnInParty(*(uint *)v6);
  *(ushort *)(v6 + 24) = 0;
  *(uchar *)(v6 + 18) = 0;
  *(uint *)(v6 + 32) = LoadVariableAreaAdress_18(v5);
  Function_208d720(v6, (int)Unknown_20ec06c);
  v7 = LoadTrainerDataAdress(v5);
  Function_208e9c0(v6, v7);
  OverWorldData_AllocAndInitOverlayData(v3, (int *)&Unknown_20f410c, v6);
  **(uint **)(v4 + 8) = v6;
  return 3;
}

//----- (0204F6B0) --------------------------------------------------------
int __fastcall Function_204f6b0(int a1, uint **a2)
{
  int v2
  int result
  int v4

  v2 = a1;
  if ( Function_20509b4(a2) )
    return 3;
  v4 = **(uint **)(v2 + 8);
  *(uchar *)(v2 + 5) = *(uchar *)(v4 + 20);
  free(v4);
  result = 0;
  **(uint **)(v2 + 8) = 0;
  return result;
}

//----- (0204F6D8) --------------------------------------------------------
int __fastcall ScriptCmd_324(int a1, int a2, int a3, int a4)
{
  int v4
  uchar *v5
  uchar *v6
  uint v7
  int v8
  ushort *v9
  int v10
  uint v11
  int result
  uint v13
  int v14
  uint v15
  int v16
  uint v17
  int *v18
  int v19
  ushort *v20
  short v21
  short *v22
  int v23
  int v24
  int v25
  int v26
  int v27
  uint v28
  short *v29
  uint v30
  uint v31
  uint v32
  uint v33
  int *v34
  uchar *v35
  int v36
  int v37

  v37 = a4;
  v27 = a1;
  v4 = *(uint *)(a1 + 128);
  v34 = (int *)ScriptHandler_GetSomeScriptAddresses(*(uint *)(a1 + 128), 0xFu);
  v5 = *(uchar **)(v27 + 8);
  v6 = v5 + 1;
  *(uint *)(v27 + 8) = v5 + 1;
  v7 = *v5;
  v5 += 2;
  v33 = v7;
  *(uint *)(v27 + 8) = v5;
  v32 = *v6;
  *(uint *)(v27 + 8) = v5 + 1;
  v31 = *v5;
  *(uint *)(v27 + 8) = v5 + 2;
  v30 = v5[1];
  v8 = ScriptHandler_LoadHWord(v27);
  v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v27 + 128), v8);
  v10 = ScriptHandler_LoadHWord(v27);
  v29 = (short *)ScriptHandler_CheckLoadParameter(*(uint *)(v27 + 128), v10);
  v36 = 1;
  v11 = 0;
  if ( !Function_20247c8(*(uint *)(v4 + 12)) )
  {
    result = 0;
    *v29 = 0;
    return result;
  }
  v35 = Function_20308a0(*(uint *)(v4 + 12), 0x20u, (int)&v36);
  if ( v36 == 1 )
  {
    v13 = 0;
    do
      v11 += Function_20308bc(*(uint *)(v4 + 12), (int)v35, 0, v13++);
    while ( v13 < 0x1ED );
  }
  if ( v35 )
    free((int)v35);
  v14 = Function_205dfc4(v11);
  Function_200b60c(*v34, v33, v11, v14, 1, 1);
  v15 = (ushort)*v9;
  v16 = 0;
  v17 = 0;
  v28 = (ushort)*v9;
  if ( v28 < 0x2F )
  {
    v18 = &Unknown_20ec078[2 * v28];
    do
    {
      if ( *v18 <= v11 )
      {
        v17 = v15;
        v16 = (v16 + v18[1]) & 0xFFFF;
        ++*v9;
      }
      ++v15;
      v18 += 2;
    }
    while ( v15 < 0x2F );
  }
  v19 = LoadVariableAreaAdress_14(*(uint *)(*(uint *)(v27 + 128) + 12));
  Function_202cf70(v19, 68, v16);
  if ( v16 )
  {
    v20 = (ushort *)Function_202d750(*(uint *)(*(uint *)(v27 + 128) + 12));
    Function_202d230(v20, v16, 5u);
  }
  if ( v11 )
  {
    if ( v28 == (ushort)*v9 )
    {
      v22 = v29;
      v21 = 2;
    }
    else
    {
      v21 = 1;
      v22 = v29;
    }
    *v22 = v21;
    if ( v28 >= 0x2F )
    {
      *v29 = 3;
      return 0;
    }
  }
  else
  {
    *v29 = 0;
  }
  v23 = Unknown_20ec078[2 * v17];
  v24 = Function_205dfc4(Unknown_20ec078[2 * v17]);
  Function_200b60c(*v34, v32, v23, v24, 1, 1);
  v25 = Function_205dfc4(Unknown_20ec078[2 * (ushort)*v9]);
  Function_200b60c(*v34, v31, Unknown_20ec078[2 * (ushort)*v9], v25, 1, 1);
  v26 = Function_205dfc4(v16);
  Function_200b60c(*v34, v30, v16, v26, 1, 1);
  return 0;
}

//----- (0204F8A8) --------------------------------------------------------
int __fastcall ScriptCmd_325(int a1)
{
  int v1
  int v2
  int v3
  int result
  uchar *v5
  uint v6
  int v7
  int v8
  ushort *v9
  short v10
  int v11

  v1 = a1;
  v2 = *(uint *)(a1 + 128);
  v3 = ScriptHandler_LoadHWord(a1);
  v9 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v3);
  v10 = 0;
  v11 = 1;
  if ( Function_20247c8(*(uint *)(v2 + 12)) )
  {
    v5 = Function_20308a0(*(uint *)(v2 + 12), 0x20u, (int)&v11);
    if ( v11 == 1 )
    {
      v6 = 0;
      do
      {
        v7 = Function_20308bc(*(uint *)(v2 + 12), (int)v5, 0, v6);
        v8 = v7 + Function_20308bc(*(uint *)(v2 + 12), (int)v5, 1, v6);
        if ( v8 + Function_20308bc(*(uint *)(v2 + 12), (int)v5, 2, v6) )
          ++v10;
        ++v6;
      }
      while ( v6 < 0x1ED );
    }
    else
    {
      v10 = 0;
    }
    if ( v5 )
      free((int)v5);
    *v9 = v10;
    result = 0;
  }
  else
  {
    result = 0;
    *v9 = 0;
  }
  return result;
}

//----- (0204F950) --------------------------------------------------------
int __fastcall ScriptCmd_326(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  uint v7
  int result
  uchar *v9
  uint v10
  ushort *v11
  int v12
  int v13

  v13 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 128);
  v6 = ScriptHandler_LoadHWord(a1);
  v11 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v4 + 128), v6);
  v12 = 1;
  v7 = 0;
  if ( Function_20247c8(*(uint *)(v5 + 12)) )
  {
    v9 = Function_20308a0(*(uint *)(v5 + 12), 0x20u, (int)&v12);
    if ( v12 == 1 )
    {
      v10 = 0;
      do
        v7 += Function_20308bc(*(uint *)(v5 + 12), (int)v9, 0, v10++);
      while ( v10 < 0x1ED );
    }
    if ( v9 )
      free((int)v9);
    if ( v7 > 0x2710 )
      LOWORD(v7) = 10000;
    *v11 = v7;
    result = 0;
  }
  else
  {
    result = 0;
    *v11 = 0;
  }
  return result;
}

//----- (0204F9D4) --------------------------------------------------------
int __fastcall ScriptCmd_32a(int a1)
{
  int v1
  int v2
  ushort *v3
  int v4
  int v5
  int v6
  int v7
  int v8

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v2);
  v4 = LoadVariableAreaAdress_17(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_205e55c(0);
  Function_2030698(v4, v5, 255);
  v6 = LoadVariableAreaAdress_17(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_205e50c(0);
  v8 = Function_2030698(v6, v7, 255);
  *v3 = 0;
  if ( v8 == 50 )
    *v3 = 1;
  return 0;
}

//----- (0204FA34) --------------------------------------------------------
int __fastcall Function_204fa34(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int result

  v4 = a4;
  v5 = a1;
  v6 = a3;
  ++*(uchar *)(a4 + 1);
  result = Function_203608c();
  if ( v5 != result )
  {
    result = *(ushort *)(v6 + 4);
    *(ushort *)(v4 + 6) = result;
  }
  return result;
}

//----- (0204FA50) --------------------------------------------------------
uint __fastcall Function_204fa50(int a1, uchar *a2, uint a3)
{
  int v3
  uint v4
  int v5
  int v6
  int v7
  int v8
  int v9
  uint v10
  int v11
  char v13

  v3 = a1;
  v13 = 0;
  v4 = a3;
  Function_2030280(a2, 5, a3, 0, (uchar *)&v13);
  if ( v4 == 3 )
  {
    v5 = LoadVariableAreaAdress_17(v3);
    v6 = Function_205e6a8(0x6Au);
    Function_20306e4(v5, 106, v6, 0);
  }
  v7 = LoadVariableAreaAdress_17(v3);
  Function_205e50c(v4);
  v9 = v8;
  Function_205e50c(v4);
  v11 = Function_205e6a8(v10);
  return Function_20306e4(v7, v9, v11, 0);
}

//----- (0204FAB4) --------------------------------------------------------
int __fastcall ScriptCmd_2d2(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  ushort *v5
  int v6
  int v7
  int v8
  char v9
  int result
  uchar *v11

  v1 = a1;
  ScriptHandler_LoadHWord(a1);
  v2 = ScriptHandler_LoadHWord(v1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  Function_20302dc(*(uint *)(*(uint *)(v1 + 128) + 12));
  v11 = (uchar *)Function_203041c(*(uint *)(*(uint *)(v1 + 128) + 12));
  v6 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  switch ( (uchar)v6 )
  {
    case 0:
      *v5 = Function_2049ec4(v3, *(uint *)(*(uint *)(v1 + 128) + 12), 0);
      goto LABEL_14;
    case 1:
      if ( v3 == 3 )
      {
        v7 = LoadVariableAreaAdress_17(*(uint *)(*(uint *)(v1 + 128) + 12));
        v8 = Function_205e6a8(0x6Cu);
        *v5 = Function_2030698(v7, 108, v8);
      }
      else
      {
        *v5 = Function_2030470(v11, 9, v3);
      }
      goto LABEL_14;
    case 3:
      Function_204fbec(*(uint *)(*(uint *)(v1 + 128) + 12), v11, (uchar)v3);
      goto LABEL_14;
    case 4:
      if ( v3 )
      {
        if ( v3 == 1 )
          v9 = 1;
        else
          v9 = 2;
      }
      else
      {
        v9 = 0;
      }
      Function_204fdb4(*(uint *)(v1 + 116), v6, v9);
      result = 1;
      break;
    default:
      ErrorHandler();
      *v5 = 0;
LABEL_14:
      result = 0;
      break;
  }
  return result;
}

//----- (0204FBB4) --------------------------------------------------------
int __fastcall ScriptCmd_2d5(int a1)
{
  int v1
  int v2
  uchar v3
  uchar *v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = (uchar *)Function_203041c(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_204fbec(*(uint *)(*(uint *)(v1 + 128) + 12), v4, v3);
  return 0;
}

//----- (0204FBEC) --------------------------------------------------------
uint __fastcall Function_204fbec(int a1, uchar *a2, uint a3)
{
  uint v3
  int v4
  int v5
  int v6
  int v7
  int v8
  uint v9
  int v10
  int v11
  int v12
  int v13
  uint v14
  int v15
  int v16
  int v17
  int v18
  int v19
  int v20
  int v21
  int v22
  uint result
  int v24
  char v25

  v24 = a1;
  v25 = 0;
  v3 = a3;
  Function_2030430(a2, 9, a3, 0, (uchar *)&v25);
  if ( v3 == 3 )
  {
    v4 = LoadVariableAreaAdress_17(v24);
    v5 = Function_205e6a8(0x6Cu);
    Function_20306e4(v4, 108, v5, 0);
  }
  v6 = LoadVariableAreaAdress_17(v24);
  Function_205e5e0(v3);
  v8 = v7;
  Function_205e5e0(v3);
  v10 = Function_205e6a8(v9);
  Function_20306e4(v6, v8, v10, 0);
  v11 = LoadVariableAreaAdress_17(v24);
  Function_205e630(v3);
  v13 = v12;
  Function_205e630(v3);
  v15 = Function_205e6a8(v14);
  Function_20306e4(v11, v13, v15, 0);
  v16 = 0;
  do
  {
    v17 = LoadVariableAreaAdress_17(v24);
    v19 = Function_205e5b4(v3, (uchar)v16, v18);
    v21 = Function_205e5b4(v3, (uchar)v16, v20);
    v22 = Function_205e6a8(v21);
    result = Function_20306e4(v17, v19, v22, 1u);
    ++v16;
  }
  while ( v16 < 3 );
  return result;
}

//----- (0204FCAC) --------------------------------------------------------
int __fastcall ScriptCmd_2d3(int a1)
{
  int v1
  int v2
  short v3
  int v4
  short v5
  int v6
  int v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  Function_204fcf8(*(uint *)(v1 + 116), v3, v5, v7);
  return 1;
}

//----- (0204FCF8) --------------------------------------------------------
uint *__fastcall Function_204fcf8(int a1, short a2, short a3, int a4)
{
  short v4
  short v5
  int v6
  int v7
  uchar *v8
  int v9
  int v11

  v11 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = malloc(0xBu, 16);
  v8 = (uchar *)v7;
  v9 = 16;
  do
  {
    *v8++ = 0;
    --v9;
  }
  while ( v9 );
  *(ushort *)(v7 + 4) = v4;
  *(ushort *)(v7 + 6) = v5;
  *(uint *)(v7 + 12) = v6;
  Function_2099514(v7);
  return Function_2050944(v11, (int)Function_204fd38, v7);
}

//----- (0204FD38) --------------------------------------------------------
int __fastcall Function_204fd38(int a1)
{
  uchar *v1
  uchar *v2
  int v3
  int v4
  int v5

  v1 = (uchar *)GetUnknownStruct01_c(a1);
  v2 = v1;
  v3 = *v1;
  if ( *v1 )
  {
    if ( v3 == 1 )
    {
      if ( v1[1] >= 2u )
      {
        **((ushort **)v1 + 3) = 0;
        v4 = *((ushort *)v1 + 2);
        if ( v4 == *((ushort *)v1 + 4) || v4 == *((ushort *)v1 + 5) )
          ++**((ushort **)v1 + 3);
        v5 = *((ushort *)v1 + 3);
        if ( v5 == *((ushort *)v1 + 4) || v5 == *((ushort *)v1 + 5) )
          **((ushort **)v1 + 3) += 2;
        ++*v1;
      }
    }
    else if ( v3 == 2 )
    {
      free((int)v1);
      return 1;
    }
  }
  else if ( Function_20359dc(133, (int)v1, 16) == 1 )
  {
    ++*v2;
  }
  return 0;
}

//----- (0204FDB4) --------------------------------------------------------
uint *__fastcall Function_204fdb4(int a1, int a2, char a3)
{
  int v3
  char v4
  int v5
  int v6

  v3 = a2;
  v4 = a3;
  v5 = LoadOverWorldDataAdress(a1);
  v6 = malloc(0xBu, 16);
  MI_CpuFill8((ushort *)v6, 0, 0x10u);
  *(uchar *)(v6 + 4) = v4;
  *(uint *)(v6 + 12) = v3;
  return Function_2050944(*(uint *)(v5 + 16), (int)Function_204fde8, v6);
}

//----- (0204FDE8) --------------------------------------------------------
int __fastcall Function_204fde8(int a1)
{
  int v1
  uint **v2
  int *v3
  int result

  v1 = a1;
  v2 = (uint **)LoadOverWorldDataAdress(a1);
  v3 = (int *)GetUnknownStruct01_c(v1);
  switch ( (uchar)*v3 )
  {
    case 0u:
      *v3 = Function_204fe50((int)v3, (int)v2);
      goto LABEL_7;
    case 1u:
      *v3 = Function_204ff1c((int)v3, v2);
      goto LABEL_7;
    case 2u:
      *v3 = Function_204ff6c((int)v3, (int)v2, 0xBu);
      goto LABEL_7;
    case 3u:
      *v3 = Function_204fff4((int)v3, v2);
      goto LABEL_7;
    case 4u:
      free((int)v3);
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

//----- (0204FE50) --------------------------------------------------------
int __fastcall Function_204fe50(int a1, int a2)
{
  int v2
  int v3
  int v4
  uint v5
  char v6
  uchar *v7
  uchar *v8

  v2 = a1;
  v3 = a2;
  v4 = malloc(0xBu, 64);
  MIi_CpuClearFast(0, (uint *)v4, 0x40u);
  *(uint *)v4 = LoadPokePartyAdress(*(uint *)(v3 + 12));
  *(uint *)(v4 + 4) = LoadVariableAreaAdressItemList(*(uint *)(v3 + 12));
  *(uint *)(v4 + 8) = LoadVariableAreaAdress_f(*(uint *)(v3 + 12));
  *(uint *)(v4 + 12) = LoadPlayerDataAdress(*(uint *)(v3 + 12));
  v5 = 0;
  *(uchar *)(v4 + 33) = 0;
  *(uchar *)(v4 + 32) = 23;
  *(uint *)(v4 + 28) = v3;
  *(uchar *)(v4 + 34) = *(uchar *)(v2 + 5);
  do
  {
    v6 = *(uchar *)(v2 + v5 + 6);
    v7 = (uchar *)(v4 + v5 + 44);
    v5 = (v5 + 1) & 0xFF;
    *v7 = v6;
  }
  while ( v5 < 3 );
  *(uchar *)(v4 + 51) = 100;
  *(uchar *)(v4 + 50) = *(uchar *)(v4 + 50) & 0xF0 | 3;
  *(uchar *)(v4 + 50) = *(uchar *)(v4 + 50) & 0xF | 0x30;
  v8 = (uchar *)(v4 + 50);
  if ( *(uchar *)(v2 + 4) == 2 )
  {
    *v8 = *v8 & 0xF0 | 2;
    *v8 = *v8 & 0xF | 0x20;
  }
  OverWorldData_AllocAndInitOverlayData(v3, (int *)&Unknown_20f1e88, v4);
  **(uint **)(v2 + 12) = v4;
  return 1;
}

//----- (0204FF1C) --------------------------------------------------------
int __fastcall Function_204ff1c(int a1, uint **a2)
{
  int v2
  uint v3
  int v5
  int v6

  v2 = a1;
  if ( Function_20509b4(a2) )
    return 1;
  v5 = **(uint **)(v2 + 12);
  v6 = *(uchar *)(**(uint **)(v2 + 12) + 34);
  if ( v6 == 6 )
    return 4;
  if ( v6 == 7 )
    return 4;
  MI_CpuCopy8(v5 + 44, v2 + 6, 3u, v3);
  *(uchar *)(v2 + 5) = *(uchar *)(v5 + 34);
  free(v5);
  **(uint **)(v2 + 12) = 0;
  return 2;
}

//----- (0204FF6C) --------------------------------------------------------
int __fastcall Function_204ff6c(int a1, int a2, uint a3)
{
  int v3
  int v4
  int v5
  int v6
  int v7

  v3 = a2;
  v4 = a1;
  v5 = *(uint *)(a2 + 12);
  v6 = malloc2(a3, 48);
  MI_CpuFill8((ushort *)v6, 0, 0x30u);
  *(uint *)(v6 + 4) = LoadPlayerDataAdress(v5);
  *(uint *)v6 = LoadPokePartyAdress(v5);
  *(uint *)(v6 + 28) = Function_207a274(v5);
  *(uint *)(v6 + 44) = Function_208c324(v5);
  *(uchar *)(v6 + 17) = 1;
  *(uchar *)(v6 + 20) = *(uchar *)(v4 + 5);
  *(uchar *)(v6 + 19) = GetNrOfPkmnInParty(*(uint *)v6);
  *(ushort *)(v6 + 24) = 0;
  *(uchar *)(v6 + 18) = 0;
  *(uint *)(v6 + 32) = LoadVariableAreaAdress_18(v5);
  Function_208d720(v6, (int)Unknown_20ec1f0);
  v7 = LoadTrainerDataAdress(v5);
  Function_208e9c0(v6, v7);
  OverWorldData_AllocAndInitOverlayData(v3, (int *)&Unknown_20f410c, v6);
  **(uint **)(v4 + 12) = v6;
  return 3;
}

//----- (0204FFF4) --------------------------------------------------------
int __fastcall Function_204fff4(int a1, uint **a2)
{
  int v2
  int result
  int v4

  v2 = a1;
  if ( Function_20509b4(a2) )
    return 3;
  v4 = **(uint **)(v2 + 12);
  *(uchar *)(v2 + 5) = *(uchar *)(v4 + 20);
  free(v4);
  result = 0;
  **(uint **)(v2 + 12) = 0;
  return result;
}

//----- (0205001C) --------------------------------------------------------
int __fastcall Function_205001c(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int result

  v4 = a4;
  v5 = a1;
  v6 = a3;
  ++*(uchar *)(a4 + 1);
  result = Function_203608c();
  if ( v5 != result )
  {
    *(ushort *)(v4 + 8) = *(ushort *)(v6 + 4);
    result = *(ushort *)(v6 + 6);
    *(ushort *)(v4 + 10) = result;
  }
  return result;
}

//----- (0205003C) --------------------------------------------------------
int __fastcall ScriptCmd_2d9(int a1)
{
  int v1
  int v2
  uint v3
  int v4
  ushort *v5
  int v6
  int v7
  int v8
  char v9
  int result
  uchar *v11

  v1 = a1;
  ScriptHandler_LoadHWord(a1);
  v2 = ScriptHandler_LoadHWord(v1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = (ushort *)ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v4);
  Function_20304a0(*(uint *)(*(uint *)(v1 + 128) + 12));
  v11 = (uchar *)Function_20305b8(*(uint *)(*(uint *)(v1 + 128) + 12));
  v6 = ScriptHandler_GetSomeScriptAddresses(*(uint *)(v1 + 128), 0x13u);
  switch ( (uchar)v6 )
  {
    case 0:
      *v5 = Function_2049ec4(v3, *(uint *)(*(uint *)(v1 + 128) + 12), 0);
      goto LABEL_14;
    case 1:
      if ( v3 == 3 )
      {
        v7 = LoadVariableAreaAdress_17(*(uint *)(*(uint *)(v1 + 128) + 12));
        v8 = Function_205e6a8(0x6Eu);
        *v5 = Function_2030698(v7, 110, v8);
      }
      else
      {
        *v5 = Function_2030600(v11, 8, v3);
      }
      goto LABEL_14;
    case 3:
      Function_2050174(*(uint *)(*(uint *)(v1 + 128) + 12), v11, (uchar)v3);
      goto LABEL_14;
    case 4:
      if ( v3 )
      {
        if ( v3 == 1 )
          v9 = 1;
        else
          v9 = 2;
      }
      else
      {
        v9 = 0;
      }
      Function_20502e0(*(uint *)(v1 + 116), v6, v9);
      result = 1;
      break;
    default:
      ErrorHandler();
      *v5 = 0;
LABEL_14:
      result = 0;
      break;
  }
  return result;
}

//----- (0205013C) --------------------------------------------------------
int __fastcall ScriptCmd_2dc(int a1)
{
  int v1
  int v2
  uchar v3
  uchar *v4

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = (uchar *)Function_20305b8(*(uint *)(*(uint *)(v1 + 128) + 12));
  Function_2050174(*(uint *)(*(uint *)(v1 + 128) + 12), v4, v3);
  return 0;
}

//----- (02050174) --------------------------------------------------------
uint __fastcall Function_2050174(int a1, uchar *a2, uint a3)
{
  int v3
  uint v4
  int v5
  int v6
  int v7
  int v8
  int v9
  uint v10
  int v11
  char v13

  v3 = a1;
  v13 = 0;
  v4 = a3;
  Function_20305cc(a2, 8, a3, 0, (uchar *)&v13);
  if ( v4 == 3 )
  {
    v5 = LoadVariableAreaAdress_17(v3);
    v6 = Function_205e6a8(0x6Eu);
    Function_20306e4(v5, 110, v6, 0);
  }
  v7 = LoadVariableAreaAdress_17(v3);
  Function_205e700(v4);
  v9 = v8;
  Function_205e700(v4);
  v11 = Function_205e6a8(v10);
  return Function_20306e4(v7, v9, v11, 0);
}

//----- (020501D8) --------------------------------------------------------
int __fastcall ScriptCmd_2da(int a1)
{
  int v1
  int v2
  short v3
  int v4
  short v5
  int v6
  int v7

  v1 = a1;
  v2 = ScriptHandler_LoadHWord(a1);
  v3 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v2);
  v4 = ScriptHandler_LoadHWord(v1);
  v5 = ScriptHandler_CheckSaveParameter(*(uint *)(v1 + 128), v4);
  v6 = ScriptHandler_LoadHWord(v1);
  v7 = ScriptHandler_CheckLoadParameter(*(uint *)(v1 + 128), v6);
  Function_2050224(*(uint *)(v1 + 116), v3, v5, v7);
  return 1;
}