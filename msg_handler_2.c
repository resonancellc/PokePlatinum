//----- (0201D670) --------------------------------------------------------
int __fastcall Function_201d670(int result)
{
  Unknown_2100840 = result;
  return result;
}

//----- (0201D67C) --------------------------------------------------------
int __fastcall InitExecuteTextInterpreter(int a1, int a2, uint a3)
{
  int *v3
  int v4

  v3 = dword_21C04E0;
  v4 = 0;
  while ( *v3 )
  {
    ++v4;
    ++v3;
    if ( v4 >= 8 )
      return (uchar)v4;
  }
  dword_21C04E0[v4] = (int)AddTaskToTaskList4(a1, a2, a3);
  if ( !dword_21C04E0[v4] )
    LOBYTE(v4) = 8;
  return (uchar)v4;
}

//----- (0201D6B0) --------------------------------------------------------
int __fastcall RemoveTextInterpreterTaskFromTaskList(uint a1)
{
  uint v1
  uint v2
  int result
  int v4
  int v5

  v1 = a1;
  if ( a1 >= 8 )
    ErrorHandler();
  v2 = v1;
  result = dword_21C04E0[v1];
  if ( !result )
    result = ErrorHandler();
  if ( v1 < 8 )
  {
    result = dword_21C04E0[v2];
    if ( result )
    {
      v4 = Function_201ced0(result);
      v5 = v4;
      if ( v4 )
      {
        Function_201dbd8(v4);
        free(v5);
      }
      Call_RemoveTaskFromTaskList((int *)dword_21C04E0[v2]);
      result = 0;
      dword_21C04E0[v2] = 0;
    }
  }
  return result;
}

//----- (0201D6F8) --------------------------------------------------------
BOOL __fastcall Function_201d6f8(int a1)
{
  return dword_21C04E0[a1] != 0;
}

//----- (0201D710) --------------------------------------------------------
int Function_201d710()
{
  int v0
  int *v1
  int result

  v0 = 0;
  v1 = dword_21C04E0;
  result = 0;
  do
  {
    ++v0;
    *v1 = 0;
    ++v1;
  }
  while ( v0 < 8 );
  return result;
}

//----- (0201D724) --------------------------------------------------------
int __fastcall Function_201d724(int a1)
{
  return (uchar)Function_201d6f8(a1);
}

//----- (0201D730) --------------------------------------------------------
int __fastcall Call_RemoveTextInterpreterTaskFromTaskList(uint a1)
{
  return RemoveTextInterpreterTaskFromTaskList(a1);
}

//----- (0201D738) --------------------------------------------------------
int __fastcall Function_201d738_CallInitTextInterpreter(int a1, int a2)
{
  uchar *v2
  short v3
  short v4
  uchar v5
  uchar v6
  uchar v7
  uchar v8

  v2 = (uchar *)(8 * a2);
  v3 = v2[2];
  v4 = v2[3];
  v5 = v2[4];
  v6 = v2[5];
  v7 = v2[6];
  v8 = v2[7];
  return InitTextInterpreter();
}

//----- (0201D78C) --------------------------------------------------------
int __fastcall Function_201d78c(int a1, int a2)
{
  uchar *v2
  short v3
  short v4
  uchar v5

  v2 = (uchar *)(8 * a2);
  v3 = v2[2];
  v4 = v2[3];
  v5 = v2[4];
  return InitTextInterpreter();
}

//----- (0201D7E0) --------------------------------------------------------
int __fastcall Function_201d7e0(int a1, int a2)
{
  char v2

  v2 = *(uchar *)(8 * a2 + 4);
  return InitTextInterpreter();
}

//----- (0201D834) --------------------------------------------------------
int InitTextInterpreter()
{
  return 255;
}

//----- (0201D97C) --------------------------------------------------------
void __fastcall ExecuteTextInterpreter(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int (__fastcall *v7)(int, uint)

  v4 = a2;
  if ( byte_21C04D8 )
    return;
  if ( *(uchar *)(a2 + 45) )
  {
    *(uchar *)(a2 + 45) = (*(int (__fastcall **)(int, uint))(a2 + 28))(a2, *(ushort *)(a2 + 46));
    return;
  }
  *(ushort *)(a2 + 46) = 0;
  Function_201d9fc(*(uchar *)(a2 + 21), *(uchar *)(a2 + 22), *(uchar *)(a2 + 23), a4);
  Call_Call_TextInterpreter(v4);
  switch ( v5 )
  {
    case 0:
      Function_201a954(*(uint *)(v4 + 4), v6);
LABEL_8:
      v7 = *(int (__fastcall **)(int, uint))(v4 + 28);
      if ( v7 )
        *(uchar *)(v4 + 45) = v7(v4, *(ushort *)(v4 + 46));
      return;
    case 1:
      RemoveTextInterpreterTaskFromTaskList(*(uchar *)(v4 + 44));
      return;
    case 3:
      goto LABEL_8;
  }
}

//----- (0201D9E8) --------------------------------------------------------
void __fastcall Call_Call_TextInterpreter(int a1)
{
  int v1
  int v2

  v1 = a1;
  do
    Call_TextInterpreter(*(uchar *)(v1 + 9), v1);
  while ( v2 == 2 );
}