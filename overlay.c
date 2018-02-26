//----- (020064F0) --------------------------------------------------------
int __fastcall Call_FS_UnloadOverlay(int *a1)
{
  int *v1
  int result

  v1 = a1;
  if ( a1[1] != 1 )
    ErrorHandler();
  if ( FS_UnloadOverlay(0, *v1) != 1 )
    ErrorHandler();
  result = 0;
  v1[1] = 0;
  return result;
}

//----- (02006514) --------------------------------------------------------
int *__fastcall UnloadOverlay(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int *result
  int v7
  int *v8

  v4 = a1;
  v5 = Call_FS_LoadOverlayInfo(a1, a2, a3, a4);
  result = Function_20066c0(v5);
  v7 = 0;
  v8 = result;
  while ( v8[1] != 1 || v4 != *v8 )
  {
    ++v7;
    v8 += 2;
    if ( v7 >= 8 )
      return result;
  }
  return (int *)Call_FS_UnloadOverlay(&result[2 * v7]);
}

//----- (02006544) --------------------------------------------------------
int __fastcall Call_FS_LoadOverlayInfo(int a1, int a2, int a3, int a4)
{
  char v5
  uint v6

  if ( FS_LoadOverlayInfo(&v5, 0, a1, a4) != 1 )
    ErrorHandler();
  if ( v6 <= 0x2000000 && v6 >= 0x1000000 )
    return 1;
  if ( v6 > (uint)dword_27E4000 || v6 < (uint)dword_27E0000 )
    return 0;
  return 2;
}

//----- (02006590) --------------------------------------------------------
int __fastcall LoadOverlay(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v8
  int v10
  int *v11
  int v12
  int *v13
  int *v14
  int v15
  int v16

  v4 = a2;
  v5 = a1;
  v16 = -1;
  if ( !Function_2006644(a1, -1, a3, a4) )
    return 0;
  v10 = Call_FS_LoadOverlayInfo(v5, v6, v7, v8);
  v11 = Function_20066c0(v10);
  v12 = 0;
  v13 = v11;
  while ( v13[1] )
  {
    ++v12;
    v13 += 2;
    if ( v12 >= 8 )
      goto LABEL_7;
  }
  v14 = &v11[2 * v12];
  v14[1] = 1;
  *v14 = v5;
LABEL_7:
  if ( v12 >= 8 )
  {
    ErrorHandler();
    return 0;
  }
  if ( (uint)(v10 - 1) <= 1 )
    v16 = FS_SetDefaultDMA(-1);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v15 = LoadOverlayAndStart(0, v5);
    }
    else
    {
      if ( v4 != 2 )
      {
        ErrorHandler();
        return 0;
      }
      v15 = LoadOverlayAsyncAndStart(0, v5);
    }
  }
  else
  {
    v15 = Call_FS_LoadOverlay(0, v5);
  }
  if ( (uint)(v10 - 1) <= 1 )
    FS_SetDefaultDMA(v16);
  if ( v15 )
    return 1;
  ErrorHandler();
  return 0;
}

//----- (02006644) --------------------------------------------------------
int __fastcall Function_2006644(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v9
  int *v10
  int v11
  uint v12
  uint v13
  uint v14
  uint v15
  int v16

  v16 = a4;
  v4 = a1;
  if ( !Function_20066e4(a1, &v15, &v14) )
    return 0;
  v9 = Call_FS_LoadOverlayInfo(v4, v5, v6, v7);
  v10 = Function_20066c0(v9);
  v11 = 0;
  do
  {
    if ( v10[1] == 1
      && Function_20066e4(*v10, &v13, &v12) == 1
      && (v15 >= v13 && v15 < v12 || v14 > v13 && v14 <= v12 || v15 <= v13 && v14 >= v12) )
    {
      ErrorHandler();
      return 0;
    }
    ++v11;
    v10 += 2;
  }
  while ( v11 < 8 );
  return 1;
}

//----- (020066C0) --------------------------------------------------------
int *__fastcall Function_20066c0(int a1)
{
  if ( !a1 )
    return dword_21BF370;
  if ( a1 == 1 )
    return dword_21BF3B0;
  if ( a1 != 2 )
    return dword_21BF370;
  return dword_21BF3F0;
}

//----- (020066E4) --------------------------------------------------------
int __fastcall Function_20066e4(int a1, uint *a2, uint *a3)
{
  uint *v3
  uint *v4
  int result
  int v6
  char v7
  int v8
  int v9
  int v10

  v3 = a2;
  v4 = a3;
  if ( FS_LoadOverlayInfo(&v7, 0, a1, a1) )
  {
    v6 = v8;
    *v3 = v8;
    *v4 = v6 + v9 + v10;
    result = 1;
  }
  else
  {
    ErrorHandler();
    result = 0;
  }
  return result;
}

//----- (0200671C) --------------------------------------------------------
int __fastcall Call_FS_LoadOverlay(int a1, int a2)
{
  return FS_LoadOverlay(a1, a2);
}

//----- (02006724) --------------------------------------------------------
int __fastcall LoadOverlayAndStart(int a1, int a2)
{
  int v2
  int v3
  int v4
  char v6

  if ( !FS_LoadOverlayInfo(&v6, a1, a2, a1) )
    return 0;
  if ( !FS_LoadOverlayImage((int *)&v6, v2, v3, v4) )
    return 0;
  FS_StartOverlay((int)&v6);
  return 1;
}

//----- (0200675C) --------------------------------------------------------
int __fastcall LoadOverlayAsyncAndStart(int a1, int a2)
{
  int v3[11]
  char v4

  if ( !FS_LoadOverlayInfo(v3, a1, a2, a1) )
    return 0;
  FS_InitFile(&v4);
  FS_LoadOverlayImageAsync(v3, (int *)&v4);
  FS_WaitAsync((int *)&v4);
  FS_CloseFile((int *)&v4);
  FS_StartOverlay((int)v3);
  return 1;
}