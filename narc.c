//----- (020068C8) --------------------------------------------------------
int __fastcall ReadNARCFile(int a1, uchar *a2, int a3, int a4, int a5)
{
  uchar *v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v14
  int v15
  ushort v16
  int v17
  int v18
  int v19
  int v20[18]
  int v21

  v21 = a4;
  v5 = a2;
  v14 = a1;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v6 = a3;
  v15 = a4;
  FS_InitFile(v20);
  FS_OpenFile(v20, v5, v7, v8);
  FS_SeekFile(v20, 12, 0);
  FS_ReadFile(v20, (int)&v19, 2);
  v9 = v19;
  FS_SeekFile(v20, v19 + 4, 0);
  FS_ReadFile(v20, (int)&v19, 4);
  FS_ReadFile(v20, (int)&v16, 2);
  if ( v16 <= v6 )
    ErrorHandler();
  v10 = v9 + v19;
  FS_SeekFile(v20, v9 + v19 + 4, 0);
  FS_ReadFile(v20, (int)&v19, 4);
  v11 = v19;
  FS_SeekFile(v20, v9 + 12 + 8 * v6, 0);
  FS_ReadFile(v20, (int)&v18, 4);
  FS_ReadFile(v20, (int)&v17, 4);
  FS_SeekFile(v20, v15 + v10 + v11 + 8 + v18, 0);
  v12 = a5;
  if ( !a5 )
    v12 = v17 - v18;
  v19 = v12;
  if ( !v12 )
    ErrorHandler();
  FS_ReadFile(v20, v14, v19);
  return FS_CloseFile(v20);
}

//----- (020069A8) --------------------------------------------------------
int __fastcall LoadFileIntoMemory(uchar *a1, int a2, uint a3, int a4, int a5, int a6)
{
  int v6
  uchar *v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  uint v17
  int v18
  ushort v19
  int v20
  int v21
  int v22
  int v23[18]
  int v24

  v24 = a4;
  v6 = a2;
  v7 = a1;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v17 = a3;
  v18 = a4;
  FS_InitFile(v23);
  FS_OpenFile(v23, v7, v8, v9);
  FS_SeekFile(v23, 12, 0);
  FS_ReadFile(v23, (int)&v22, 2);
  v10 = v22;
  FS_SeekFile(v23, v22 + 4, 0);
  FS_ReadFile(v23, (int)&v22, 4);
  FS_ReadFile(v23, (int)&v19, 2);
  if ( v19 <= v6 )
    ErrorHandler();
  v11 = v10 + v22;
  FS_SeekFile(v23, v10 + v22 + 4, 0);
  FS_ReadFile(v23, (int)&v22, 4);
  v12 = v22;
  FS_SeekFile(v23, v10 + 12 + 8 * v6, 0);
  FS_ReadFile(v23, (int)&v21, 4);
  FS_ReadFile(v23, (int)&v20, 4);
  FS_SeekFile(v23, v18 + v11 + v12 + 8 + v21, 0);
  v13 = a5;
  if ( !a5 )
    v13 = v20 - v21;
  v22 = v13;
  if ( !v13 )
    ErrorHandler();
  if ( a6 )
    v14 = malloc2(v17, v22);
  else
    v14 = malloc(v17, v22);
  v15 = v14;
  FS_ReadFile(v23, v14, v22);
  FS_CloseFile(v23);
  return v15;
}

//----- (02006AA4) --------------------------------------------------------
int __fastcall LoadFromNARC(int a1, int a2, int a3)
{
  return ReadNARCFile(a1, (uchar *)NARCStringPointer[a2], a3, 0, 0);
}

//----- (02006AC0) --------------------------------------------------------
int __fastcall LoadFromNARC_2(int a1, int a2, uint a3)
{
  return LoadFileIntoMemory((uchar *)NARCStringPointer[a1], a2, a3, 0, 0, 0);
}

//----- (02006ADC) --------------------------------------------------------
int __fastcall LoadFromNARC_4(int a1, int a2, uint a3)
{
  return LoadFileIntoMemory((uchar *)NARCStringPointer[a1], a2, a3, 0, 0, 1);
}

//----- (02006AFC) --------------------------------------------------------
int __fastcall LoadFromNARC_3(int a1, int a2, int a3, int a4, int a5)
{
  return ReadNARCFile(a1, (uchar *)NARCStringPointer[a2], a3, a4, a5);
}

//----- (02006B18) --------------------------------------------------------
int __fastcall LoadFromNARC_5(int a1, int a2, uint a3, int a4, int a5)
{
  return LoadFileIntoMemory((uchar *)NARCStringPointer[a1], a2, a3, a4, a5, 0);
}

//----- (02006B38) --------------------------------------------------------
int __fastcall LoadFromNARC_6(int a1, int a2, uint a3, int a4, int a5)
{
  return LoadFileIntoMemory((uchar *)NARCStringPointer[a1], a2, a3, a4, a5, 1);
}

//----- (02006B58) --------------------------------------------------------
int __fastcall LoadFromNARC_7(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  ushort v11
  int v12
  int v13
  int v14
  int v15[18]
  int v16

  v16 = a4;
  v4 = a2;
  v5 = a1;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  FS_InitFile(v15);
  FS_OpenFile(v15, (uchar *)NARCStringPointer[v5], 4 * v5, v6);
  FS_SeekFile(v15, 12, 0);
  FS_ReadFile(v15, (int)&v14, 2);
  v7 = v14;
  FS_SeekFile(v15, v14 + 4, 0);
  FS_ReadFile(v15, (int)&v14, 4);
  FS_ReadFile(v15, (int)&v11, 2);
  if ( v11 <= v4 )
    ErrorHandler();
  v8 = v7 + v14;
  FS_SeekFile(v15, v7 + v14 + 4, 0);
  FS_ReadFile(v15, (int)&v14, 4);
  v9 = v14;
  FS_SeekFile(v15, v7 + 12 + 8 * v4, 0);
  FS_ReadFile(v15, (int)&v13, 4);
  FS_ReadFile(v15, (int)&v12, 4);
  FS_SeekFile(v15, v8 + v9 + 8 + v13, 0);
  v14 = v12 - v13;
  if ( v12 == v13 )
    ErrorHandler();
  return v14;
}

//----- (02006C24) --------------------------------------------------------
int *__fastcall LoadFromNARC_8(int a1, uint a2, int a3, int a4)
{
  int v4
  int *v5
  int *v6
  int v7
  int v8
  int v10

  v10 = a4;
  v4 = a1;
  v5 = (int *)malloc(a2, 84);
  v6 = v5;
  if ( v5 )
  {
    v5[18] = 0;
    FS_InitFile(v5);
    FS_OpenFile(v6, (uchar *)NARCStringPointer[v4], 4 * v4, v7);
    FS_SeekFile(v6, 12, 0);
    FS_ReadFile(v6, (int)(v6 + 18), 2);
    FS_SeekFile(v6, v6[18] + 4, 0);
    FS_ReadFile(v6, (int)&v10, 4);
    FS_ReadFile(v6, (int)(v6 + 20), 2);
    v8 = v6[18] + v10;
    FS_SeekFile(v6, v8 + 4, 0);
    FS_ReadFile(v6, (int)&v10, 4);
    v6[19] = v8 + v10;
  }
  return v6;
}

//----- (02006CA8) --------------------------------------------------------
int __fastcall Call_FS_CloseFile(int *a1)
{
  int *v1

  v1 = a1;
  FS_CloseFile(a1);
  return free((int)v1);
}

//----- (02006CB8) --------------------------------------------------------
int __fastcall Function_2006cb8_LoadFileInMemory(int a1, uint a2, uint a3)
{
  int *v3
  uint v4
  uint v5
  int v6
  int v8
  int v9

  v3 = (int *)a1;
  v4 = a2;
  v5 = a3;
  if ( *(ushort *)(a1 + 80) <= a2 )
    ErrorHandler();
  FS_SeekFile(v3, v3[18] + 12 + 8 * v4, 0);
  FS_ReadFile(v3, (int)&v9, 4);
  FS_ReadFile(v3, (int)&v8, 4);
  FS_SeekFile(v3, v3[19] + 8 + v9, 0);
  v6 = malloc(v5, v8 - v9);
  if ( v6 )
    FS_ReadFile(v3, v6, v8 - v9);
  return v6;
}

//----- (02006D28) --------------------------------------------------------
int __fastcall LoadFileFromNARCFileHandler(int a1, uint a2, int a3)
{
  int *v3
  uint v4
  int v5
  int v7
  int v8

  v3 = (int *)a1;
  v4 = a2;
  v5 = a3;
  if ( *(ushort *)(a1 + 80) <= a2 )
    ErrorHandler();
  FS_SeekFile(v3, v3[18] + 12 + 8 * v4, 0);
  FS_ReadFile(v3, (int)&v8, 4);
  FS_ReadFile(v3, (int)&v7, 4);
  FS_SeekFile(v3, v3[19] + 8 + v8, 0);
  return FS_ReadFile(v3, v5, v7 - v8);
}

//----- (02006D84) --------------------------------------------------------
int __fastcall Function_2006d84_GetFilesize(int a1, uint a2, int a3, int a4)
{
  int *v4
  uint v5
  int v7
  int v8
  int v9

  v9 = a4;
  v4 = (int *)a1;
  v5 = a2;
  if ( *(ushort *)(a1 + 80) <= a2 )
    ErrorHandler();
  FS_SeekFile(v4, v4[18] + 12 + 8 * v5, 0);
  FS_ReadFile(v4, (int)&v8, 4);
  FS_ReadFile(v4, (int)&v7, 4);
  return v7 - v8;
}

//----- (02006DC8) --------------------------------------------------------
int __fastcall Function_2006dc8(int a1, uint a2, int a3, int a4, int a5)
{
  int *v5
  uint v6
  int v7
  int v8
  int v10

  v10 = a4;
  v5 = (int *)a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( *(ushort *)(a1 + 80) <= a2 )
    ErrorHandler();
  FS_SeekFile(v5, v5[18] + 12 + 8 * v6, 0);
  FS_ReadFile(v5, (int)&v10, 4);
  FS_SeekFile(v5, v7 + v5[19] + 8 + v10, 0);
  return FS_ReadFile(v5, a5, v8);
}

//----- (02006E18) --------------------------------------------------------
int __fastcall Call_FS_ReadFile(int *a1, int a2, int a3)
{
  return FS_ReadFile(a1, a3, a2);
}

//----- (02006E28) --------------------------------------------------------
int __fastcall Call_FS_SeekFile(uint *a1, int a2)
{
  return FS_SeekFile(a1, a2, 1);
}

//----- (02006E34) --------------------------------------------------------
int __fastcall Function_2006e34(int a1)
{
  return *(ushort *)(a1 + 80);
}

//----- (02006E3C) --------------------------------------------------------
int __fastcall LoadFromNARC_RGCN(int a1, int a2, uint *a3, uchar a4, int a5, int a6, int a7, int a8)
{
  uint *v8
  uchar v9
  uint *v10

  v8 = a3;
  v9 = a4;
  v10 = Function_2006fe8_LoadFromNARC_UncompressLZ8(a1, a2, a7, a8, 0);
  return Function_20072d0((int)v10, v8, v9, a5, a6);
}

//----- (02006E60) --------------------------------------------------------
int __fastcall LoadFromNARC_RCSN(int a1, int a2, uint *a3, uchar a4, int a5, int a6, int a7, int a8)
{
  uint *v8
  uchar v9
  uint *v10

  v8 = a3;
  v9 = a4;
  v10 = Function_2006fe8_LoadFromNARC_UncompressLZ8(a1, a2, a7, a8, 1);
  return Function_2007314((int)v10, v8, v9, a5, a6);
}

//----- (02006E84) --------------------------------------------------------
int __fastcall Call_LoadFromNARC_RLCN(int a1, int a2, uint a3, int a4, int a5, int a6)
{
  return LoadFromNARC_RLCN(a1, a2, a3, 0, a4, a5, a6);
}

//----- (02006E9C) --------------------------------------------------------
int __fastcall LoadFromNARC_RLCN(int a1, int a2, uint a3, int a4, int a5, int a6, int a7)
{
  uint v7
  int v8
  uint *v9

  v7 = a3;
  v8 = a4;
  v9 = Function_2006fe8_LoadFromNARC_UncompressLZ8(a1, a2, 0, a7, 1);
  return Function_20073bc((int)v9, v7, v8, a5, a6);
}

//----- (02006EC0) --------------------------------------------------------
int __fastcall Function_2006ec0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7
  int v8
  uint *v9

  v7 = a3;
  v8 = a4;
  v9 = Function_2006fe8_LoadFromNARC_UncompressLZ8(a1, a2, a6, a7, 1);
  return Function_2007374((int)v9, v7, v8, a5);
}