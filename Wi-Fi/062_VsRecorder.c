//----- (0222F2C0) --------------------------------------------------------
int __fastcall Function_62_222f2c0(int a1, int a2, int a3, int a4)
{
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
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  int *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int *v26;
  int *v27;
  int v28;
  int v29;
  int v30;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;

  v42 = a4;
  v4 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  Function_201dbec(4, 0x66u);
  *(uint *)(v4 + 20) = LoadFromNARC_8(162, 0x66u, v5, v6);
  *(uint *)(v4 + 36) = Function_2018340(0x66u);
  *(uint *)(v4 + 40) = MallocFill120(0x66u);
  *(uint *)(v4 + 96) = Function_2024220(0x66u, 0, 1, 0, 4, 0);
  v10 = Function_200762c(0x66u, v7, v8, v9);
  *(uint *)(v4 + 100) = v10;
  Function_20a73c0(v10, v11, v12, v13);
  Function_2003858(*(uint *)(v4 + 40), 1);
  Function_2002f70(*(uint *)(v4 + 40), 0, 512, 0x66u);
  Function_2002f70(*(uint *)(v4 + 40), 1, 512, 0x66u);
  Function_2002f70(*(uint *)(v4 + 40), 2, 512, 0x66u);
  Function_2002f70(*(uint *)(v4 + 40), 3, 512, 0x66u);
  Function_222f670(*(uint *)(v4 + 36));
  Function_222f848(v4);
  Function_201e3d8();
  Function_201e450(4u);
  *(uint *)(v4 + 68) = 1;
  Function_222ff40(v4);
  Function_2002b20(1u);
  SetMainLoopFunctionCall((int)Function_222f8e4, v4);
  if ( *(uint *)v4 )
  {
    Function_2241130(v4);
    Function_200966c(1, 2097168, v14, v15);
    Function_2009704(1);
    Function_200966c(2, 2097168, v16, v17);
    Function_2009704(2);
    Function_2039734();
    Function_20397c8(1, 0x66u);
    v18 = Function_20394a8(0x66u);
    Function_20a71b0(v18, &v36);
    Function_2002fbc(*(uint *)(v4 + 40), *(uint *)(v36 + 12), 2, 224, 0x20u);
    Function_2002fbc(*(uint *)(v4 + 40), *(uint *)(v36 + 12), 3, 224, 0x20u);
    free(v18);
  }
  v37 = 12;
  v38 = 102;
  v40 = *(uint *)v4;
  v41 = 0x100000;
  v33 = *(uint *)(v4 + 24);
  v34 = *(uint *)(v4 + 28);
  v19 = *(uint *)(v4 + 40);
  v39 = 1;
  v35 = v19;
  v20 = &v32 - 4;
  *v20 = 12;
  v20[1] = 102;
  v21 = &v32 - 2;
  v22 = v40;
  *v21 = v39;
  v21[1] = v22;
  v32 = v41;
  *(uint *)(v4 + 1776) = Function_208b284(*(&v32 - 4), *(&v32 - 3), *(&v32 - 2), *(&v32 - 1), v41, v33, v34, v35);
  Function_208b878(*(int **)(v4 + 1776), *(uchar *)(v4 + 92), v23, v24);
  Function_208b8b0(*(uint *)(v4 + 1776), 0);
  Function_208b9e0(*(uint *)(v4 + 1776), 0);
  v39 = 2;
  v41 = 0x100000;
  v33 = *(uint *)(v4 + 24);
  v34 = *(uint *)(v4 + 28);
  v35 = *(uint *)(v4 + 40);
  v25 = v38;
  v26 = &v32 - 4;
  *v26 = v37;
  v26[1] = v25;
  v27 = &v32 - 2;
  v28 = v40;
  *v27 = v39;
  v27[1] = v28;
  v32 = v41;
  *(uint *)(v4 + 1780) = Function_208b284(*(&v32 - 4), *(&v32 - 3), *(&v32 - 2), *(&v32 - 1), v41, v33, v34, v35);
  Function_208b878(*(int **)(v4 + 1780), *(uchar *)(v4 + 92), v29, v30);
  Function_208b8b0(*(uint *)(v4 + 1780), 0);
  Function_208b9e0(*(uint *)(v4 + 1780), 0);
  *(uint *)(v4 + 80) = Function_2012744(20, 0x66u);
  *(uint *)(v4 + 72) = LoadFromMsgNARC(0, 26, 10, 0x66u);
  *(uint *)(v4 + 76) = LoadFromMsgNARC(0, 26, 20, 0x66u);
  Function_22338a8(v4);
  Function_208c06c(v4);
  Function_22300d8(v4);
  return Function_22337d4(v4);
}

//----- (0222F514) --------------------------------------------------------
int *__fastcall Function_62_222f514(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 0);
  Function_201ff0c(4u, 0);
  Function_201ff0c(8u, 0);
  Function_201ff74(1u, 0);
  Function_201ff74(2u, 0);
  Function_201ff74(4u, 0);
  Function_201ff74(8u, 0);
  Function_2019044(*(uint *)(v1 + 36), 0);
  Function_2019044(*(uint *)(v1 + 36), 1);
  Function_2019044(*(uint *)(v1 + 36), 2);
  Function_2019044(*(uint *)(v1 + 36), 3);
  Function_2019044(*(uint *)(v1 + 36), 4);
  Function_2019044(*(uint *)(v1 + 36), 5);
  Function_2019044(*(uint *)(v1 + 36), 6);
  Function_2019044(*(uint *)(v1 + 36), 7);
  free(*(uint *)(v1 + 36));
  Function_2002fa0(*(uint *)(v1 + 40), 0);
  Function_2002fa0(*(uint *)(v1 + 40), 1);
  Function_2002fa0(*(uint *)(v1 + 40), 2);
  Function_2002fa0(*(uint *)(v1 + 40), 3);
  Call_free1(*(uint *)(v1 + 40));
  if ( !*(uint *)v1 )
  {
    v2 = LoadVariableAreaAdress_a_3(*(uint *)(v1 + 2096));
    Function_202798c(v2, *(uchar *)(v1 + 92));
  }
  Call_FS_CloseFile(*(int **)(v1 + 20));
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 16748));
  Function_200d0b0(*(uint *)(v1 + 24), *(int ***)(v1 + 28));
  Function_200c8d4(*(uint *)(v1 + 24));
  Function_2039794();
  Function_201e530();
  Function_2024034(*(uint *)(v1 + 44));
  Function_2002b20(0);
  v3 = 0;
  v4 = v1;
  do
  {
    v5 = *(uint *)(v4 + 2172);
    if ( v5 )
      free(v5);
    v6 = *(uint *)(v4 + 2188);
    if ( v6 )
      free(v6);
    ++v3;
    v4 += 4;
  }
  while ( v3 < 4 );
  Function_20127bc(*(uint *)(v1 + 80));
  Function_200b190(*(ushort **)(v1 + 72));
  Function_200b190(*(ushort **)(v1 + 76));
  Function_20242c4(*(uint *)(v1 + 96));
  Function_2007b6c(*(uint *)(v1 + 100));
  Function_22411ec(v1);
  SetMainLoopFunctionCall(0, 0);
  return Function_201dc3c();
}

//----- (0222F670) --------------------------------------------------------
int *__fastcall Function_222f670(uint *a1)
{
  uint *v1;
  int *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  Function_201ff00();
  v9 = 1;
  v10 = 0;
  v11 = 0;
  v12 = 1;
  SetGraphicsModes(&v9);
  v2 = dword_2248788;
  v3 = &v8;
  v4 = 5;
  do
  {
    v5 = *v2;
    v6 = v2[1];
    v2 += 2;
    *(uint *)v3 = v5;
    *((uint *)v3 + 1) = v6;
    v3 += 8;
    --v4;
  }
  while ( v4 );
  GX_SetBanks((int *)&v8);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  Function_20183c4(v1, 0, dword_22487B0, 0);
  Function_20183c4(v1, 1u, dword_22487CC, 0);
  Function_20183c4(v1, 2u, dword_22487E8, 0);
  Function_20183c4(v1, 3u, dword_2248804, 0);
  Function_2019ebc(v1, 0);
  Function_2019ebc(v1, 1u);
  Function_2019ebc(v1, 2u);
  Function_2019ebc(v1, 3u);
  Function_20183c4(v1, 4u, dword_2248820, 0);
  Function_20183c4(v1, 5u, dword_224883C, 0);
  Function_20183c4(v1, 6u, dword_2248858, 0);
  Function_20183c4(v1, 7u, dword_2248874, 0);
  Function_2019ebc(v1, 4u);
  Function_2019ebc(v1, 5u);
  Function_2019ebc(v1, 6u);
  Function_2019ebc(v1, 7u);
  Function_201ff0c(1u, 0);
  Function_201ff0c(2u, 1);
  Function_201ff0c(4u, 0);
  Function_201ff0c(8u, 0);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(1u, 0);
  Function_201ff74(2u, 1);
  Function_201ff74(4u, 0);
  Function_201ff74(8u, 0);
  Function_201ff74(0x10u, 1);
  Function_222f824(1);
  G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 18, 7, 8);
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 4, 18, 7, 8);
}

//----- (0222F824) --------------------------------------------------------
uint __fastcall Function_222f824(char a1)
{
  byte_21BF6E1 = a1;
  return Function_201ffe8();
}

//----- (0222F834) --------------------------------------------------------
void __fastcall Function_222f834(int a1)
{
  Function_20183c4(*(uint **)(a1 + 36), 2u, dword_22487E8, 0);
}

//----- (0222F848) --------------------------------------------------------
int __fastcall Function_222f848(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
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
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v27 = a4;
  v4 = a1;
  *(uint *)(a1 + 24) = Function_200c6e4(0x66u);
  v19 = 0;
  v20 = 128;
  v21 = 0;
  v22 = 32;
  v23 = 4;
  v24 = 124;
  v25 = 0;
  v26 = 32;
  v14 = 128;
  v15 = 0x10000;
  v16 = 0x4000;
  v17 = 2097168;
  v18 = 2097168;
  Function_200c73c(*(uint **)(v4 + 24), &v19, &v14, 32);
  v8 = 128;
  v9 = 32;
  v10 = 128;
  v11 = 128;
  v12 = 16;
  v13 = 16;
  *(uint *)(v4 + 28) = Function_200c704(*(uint **)(v4 + 24));
  if ( !Function_200c7c0(*(int **)(v4 + 24), *(int ***)(v4 + 28), 192) )
    ErrorHandler();
  if ( !Function_200cb30(*(uint **)(v4 + 24), *(uint *)(v4 + 28), &v8) )
    ErrorHandler();
  v5 = Function_200c738(*(uint *)(v4 + 24));
  return Function_200964c(v5, 0, 0x100000, v6);
}

//----- (0222F8E4) --------------------------------------------------------
int __fastcall Function_222f8e4(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201dcac();
  Function_2003694(*(uint *)(v1 + 40));
  Function_201c2b8(*(uint *)(v1 + 36));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0222F910) --------------------------------------------------------
int __fastcall Function_62_222f910(int a1, uint *a2)
{
  uint *v2;
  uint v3;
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
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int result;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( v3 <= 0x12 )
    JUMPOUT(__CS__, *((short *)&off_222F92A + v3) + 35846444);
  switch ( (uchar)v3 )
  {
    case 0:
      v5 = ((int (*)(void))*(&off_2248BD8 + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 1, v5, v2);
      if ( v5 )
      {
        if ( *(uint *)(v4 + 68) == 1 )
          Function_222fb60(v4, 0);
        else
          Function_222fb60(v4, 1);
      }
      goto LABEL_25;
    case 1:
      v6 = ((int (*)(void))*(&off_2248BF0 + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v6, v2);
      goto LABEL_25;
    case 2:
      v7 = ((int (*)(void))*(&off_2248C28 + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v7, v2);
      goto LABEL_25;
    case 3:
      v8 = ((int (*)(void))*(&off_2248C50 + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v8, v2);
      goto LABEL_25;
    case 4:
      v9 = ((int (*)(void))*(&off_2248D08 + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v9, v2);
      goto LABEL_25;
    case 5:
      v10 = ((int (*)(void))*(&off_2248D20 + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v10, v2);
      goto LABEL_25;
    case 6:
      v11 = ((int (*)(void))*(&off_2248E24 + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v11, v2);
      goto LABEL_25;
    case 7:
      v12 = (*((int (**)(void))&loc_2248E50 + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v12, v2);
      goto LABEL_25;
    case 8:
    case 9:
      v13 = ((int (*)(void))*(&off_2248F58 + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v13, v2);
      goto LABEL_25;
    case 0xA:
    case 0xB:
      v14 = ((int (*)(void))*(&off_22490DC + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v14, v2);
      goto LABEL_25;
    case 0xC:
      v15 = ((int (*)(void))*(&off_22490DC + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v15, v2);
      goto LABEL_25;
    case 0xD:
      v16 = ((int (*)(void))*(&off_2249680 + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v16, v2);
      goto LABEL_25;
    case 0xE:
      v17 = ((int (*)(void))*(&off_224962C + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v17, v2);
      goto LABEL_25;
    case 0xF:
      v18 = ((int (*)(void))*(&off_2249618 + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v18, v2);
      goto LABEL_25;
    case 0x10:
      Function_222fb44(a1, 255, 1, v2);
      goto LABEL_25;
    case 0x11:
      v19 = ((int (*)(void))*(&off_2249790 + *(uint *)(a1 + 4)))();
      Function_222fb44(v4, 16, v19, v2);
      goto LABEL_25;
    case 0x12:
      Function_22348fc();
LABEL_25:
      Call_G3X_Reset();
      Function_2007768(*(uint *)(v4 + 100));
      Function_20241bc(1, 0);
      Function_22411d4(v4);
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (0222FB44) --------------------------------------------------------
int __fastcall Function_222fb44(int result, int a2, int a3, uint *a4)
{
  int v4;

  v4 = result;
  if ( a3 )
  {
    *a4 = a2;
    Function_222fb60(result, 0);
    result = Function_222fb6c(v4, 0);
  }
  return result;
}

//----- (0222FB60) --------------------------------------------------------
uint *__fastcall Function_222fb60(uint *result, int a2)
{
  result[1] = a2;
  result[2] = 0;
  result[3] = 0;
  return result;
}

//----- (0222FB6C) --------------------------------------------------------
int __fastcall Function_222fb6c(int result, int a2)
{
  *(uint *)(result + 8) = a2;
  *(uint *)(result + 12) = 0;
  return result;
}

//----- (0222FB74) --------------------------------------------------------
int __fastcall Function_222fb74(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_208c06c(a1);
  Function_2230a5c(v1);
  result = 1764;
  *(uint *)(v1 + 1764) = 0;
  return result;
}

//----- (0222FB90) --------------------------------------------------------
int __fastcall Function_222fb90(uint *a1)
{
  a1[a1[438] + 519] = a1[518];
  a1[a1[438] + 433] = a1[518] + 36 * a1[441];
  a1[518] = *(uint *)(a1[518] + 36 * a1[441] + 32);
  ++a1[438];
  a1[441] = 0;
  if ( !a1[518] )
    return 0;
  Function_222fb74((int)a1);
  return 1;
}

//----- (0222FBF8) --------------------------------------------------------
int __fastcall Function_222fbf8(int a1)
{
  *(uint *)(a1 + 2072) = *(uint *)(a1 + 4 * *(uint *)(a1 + 1752) + 2076);
  Function_222fb74(a1);
  return 1;
}

//----- (0222FC1C) --------------------------------------------------------
uint *__fastcall Function_222fc1c(uint *result)
{
  uint *v1;

  v1 = result;
  switch ( (uchar)*(uint *)(result[518] + 36 * result[441] + 16) )
  {
    case 2u:
      Function_208ba84((uint *)result[538], 0, 0);
      result = Function_222fb60(v1, 2);
      break;
    case 4u:
      result = (uint *)Function_222fb44((int)result, 2, 1, (uint *)result[4]);
      break;
    case 5u:
      result = (uint *)Function_222fb44((int)result, 3, 1, (uint *)result[4]);
      break;
    case 7u:
      result = (uint *)Function_222fb44((int)result, 17, 1, (uint *)result[4]);
      break;
    case 8u:
      result = (uint *)Function_222fb44((int)result, 4, 1, (uint *)result[4]);
      break;
    case 9u:
      result = (uint *)Function_222fb44((int)result, 5, 1, (uint *)result[4]);
      break;
    case 0xAu:
      result = (uint *)Function_222fb44((int)result, 6, 1, (uint *)result[4]);
      break;
    case 0xBu:
      result = (uint *)Function_222fb44((int)result, 7, 1, (uint *)result[4]);
      break;
    case 0xCu:
      result = (uint *)Function_222fb44((int)result, 8, 1, (uint *)result[4]);
      break;
    case 0xDu:
      result = (uint *)Function_222fb44((int)result, 9, 1, (uint *)result[4]);
      break;
    case 0xEu:
      result = (uint *)Function_222fb44((int)result, 10, 1, (uint *)result[4]);
      break;
    case 0xFu:
      result = (uint *)Function_222fb44((int)result, 11, 1, (uint *)result[4]);
      break;
    case 0x10u:
      result = (uint *)Function_222fb44((int)result, 12, 1, (uint *)result[4]);
      break;
    case 0x11u:
      result = (uint *)Function_222fb44((int)result, 13, 1, (uint *)result[4]);
      break;
    case 0x12u:
      result = (uint *)Function_222fb44((int)result, 14, 1, (uint *)result[4]);
      break;
    case 0x13u:
      result = (uint *)Function_222fb44((int)result, 15, 1, (uint *)result[4]);
      break;
    default:
      return result;
  }
  return result;
}

//----- (0222FD3C) --------------------------------------------------------
BOOL __fastcall Function_222fd3c(uint *a1)
{
  uint *v1;
  uint v2;
  BOOL v3;
  int v4;
  int *v5;

  v1 = a1;
  v2 = *(uint *)(a1[518] + 36 * a1[441] + 24);
  v3 = 1;
  switch ( (uchar)*a1 )
  {
    case 2u:
      if ( v2 == 9999 && !a1[543] )
      {
        ((void (*)(void))Function_223197c)();
        v3 = 0;
      }
      break;
    case 3u:
    case 4u:
      break;
    case 5u:
      if ( !v2 )
      {
        v4 = LoadVariableAreaAdress_e(a1[524]);
        v5 = (int *)Function_2029ca8(v4, 0);
        v3 = Function_2029f34(v5);
        if ( !v3 )
          Function_223197c(v1, 290);
      }
      break;
    case 6u:
      if ( v2 == 100 && Function_2231974() )
      {
        Function_223197c(v1, 273);
        v3 = 0;
      }
      break;
    default:
      if ( v2 <= 3 && !a1[v2 + 543] )
      {
        Function_223197c(a1, 269);
        v3 = 0;
      }
      break;
  }
  if ( v3 )
    Function_2005748(0x563u);
  else
    Function_2005748(0x564u);
  return v3;
}

//----- (0222FE1C) --------------------------------------------------------
int __fastcall Function_222fe1c(int result, int a2, uint *a3, int a4)
{
  uint v4;
  uint *v5;
  int v6;
  short v7[2];
  short v8[2];
  int v9;

  v9 = a4;
  v4 = result;
  v5 = a3;
  if ( !a2 )
  {
    a3[441] = result;
    result = Function_222fd3c(a3);
    if ( result )
    {
      if ( v4 <= 4 )
      {
        Function_2230e74(v5[10 * v4 + 383], v8, v7);
        Function_208b948((uint *)v5[444], (short)(v8[0] + 16), v7[0]);
        Function_208b8b8(v5[444], v8[0] + 16, v7[0]);
        v5[539] = *(uint *)(v5[518] + 36 * v5[441] + 24);
        Function_222fb60(v5, *(uint *)(v5[518] + 36 * v5[441] + 20));
        if ( *(uint *)(v5[518] + 36 * v5[441] + 20) == 2 )
        {
          Function_208ba84((uint *)v5[538], 0, 0);
        }
        else
        {
          Function_2230014(v5);
          Function_208b9e0(v5[444], 1);
        }
        v6 = v5[539];
        if ( v6 == 999 )
        {
          result = Function_2231bc4(v5, 193);
        }
        else if ( v6 == 9999 )
        {
          result = Function_2231bc4(v5, 301);
        }
        else
        {
          result = v5[551];
          if ( result )
          {
            Function_2231a1c(v5);
            result = 2204;
            v5[551] = 0;
          }
        }
      }
    }
  }
  return result;
}

//----- (0222FF40) --------------------------------------------------------
int __fastcall Function_222ff40(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 48;
  v4 = a1;
  do
  {
    ++v2;
    *(uint *)(v4 + 1548) = v3;
    v3 += 4;
    v4 += 40;
  }
  while ( v2 < 5 );
  result = Function_2023fcc(a1 + 48, 5u, (int)Function_222fe1c, a1, 0x66u);
  *(uint *)(v1 + 44) = result;
  return result;
}

//----- (0222FF7C) --------------------------------------------------------
int __fastcall Function_222ff7c(int a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  char v6;
  char v7;

  v4 = a1;
  result = *(uint *)(a1 + 2072);
  if ( result )
  {
    v2 = 0;
    v3 = v4;
    v5 = 0;
    do
    {
      if ( *(uint *)(*(uint *)(v4 + 2072) + v2) )
      {
        Function_200d550(*(int **)(v3 + 1532), &v7, &v6);
        **(uchar **)(v3 + 1548) = v6 - 16;
        *(uchar *)(*(uint *)(v3 + 1548) + 1) = v6 + 16;
        *(uchar *)(*(uint *)(v3 + 1548) + 2) = v7;
        *(uchar *)(*(uint *)(v3 + 1548) + 3) = v7 - 96;
      }
      else
      {
        **(uchar **)(v3 + 1548) = 0;
        *(uchar *)(*(uint *)(v3 + 1548) + 1) = 0;
        *(uchar *)(*(uint *)(v3 + 1548) + 2) = 0;
        *(uchar *)(*(uint *)(v3 + 1548) + 3) = 0;
      }
      v2 += 36;
      result = v5 + 1;
      v3 += 40;
      v5 = result;
    }
    while ( result < 5 );
  }
  return result;
}

//----- (02230014) --------------------------------------------------------
int __fastcall Function_2230014(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;

  v7 = a4;
  v4 = 0;
  v5 = a1;
  do
  {
    Function_200d550(*(int **)(v5 + 1532), (ushort *)&v7 + 1, &v7);
    ++v4;
    **(uchar **)(v5 + 1548) = 0;
    *(uchar *)(*(uint *)(v5 + 1548) + 1) = 0;
    *(uchar *)(*(uint *)(v5 + 1548) + 2) = 0;
    result = *(uint *)(v5 + 1548);
    v5 += 40;
    *(uchar *)(result + 3) = 0;
  }
  while ( v4 < 5 );
  return result;
}

//----- (02230054) --------------------------------------------------------
uint __fastcall Function_2230054(int a1)
{
  return Function_202404c(*(int **)(a1 + 44));
}

//----- (02230060) --------------------------------------------------------
int __fastcall Function_2230060(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 1752);
  if ( v2 <= 0 )
  {
    if ( v2 )
    {
      *(uint *)(a1 + 1752) = 0;
      ErrorHandler();
    }
  }
  else
  {
    *(uint *)(a1 + 1752) = v2 - 1;
  }
  result = 2072;
  *(uint *)(v1 + 2072) = *(uint *)(v1 + 4 * *(uint *)(v1 + 1752) + 2076);
  return result;
}

//----- (02230098) --------------------------------------------------------
uint *__fastcall Function_2230098(uint *result)
{
  int v1;

  v1 = 0;
  result[526] = 0;
  result[527] = 255;
  do
  {
    ++v1;
    result[528] = 0;
    ++result;
  }
  while ( v1 < 8 );
  return result;
}

//----- (022300BC) --------------------------------------------------------
int __fastcall Function_22300bc(int a1)
{
  return *(uint *)(a1 + 2104);
}

//----- (022300C8) --------------------------------------------------------
int __fastcall Function_22300c8(int result, int a2)
{
  *(uint *)(result + 2104) = 1;
  *(uint *)(result + 2108) = a2;
  return result;
}

//----- (022300D8) --------------------------------------------------------
uint __fastcall Function_22300d8(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = a1[5];
  v3 = (uint *)a1[9];
  v4 = a1[10];
  if ( *a1 )
  {
    Function_20070e8(v2, 0x36u, v3, 1u, 0, 0, 0, 102);
    Function_20070e8(v2, 0x36u, v3, 5u, 0, 0, 0, 102);
    Function_200710c(v2, 0x37u, v3, 5u, 0, 0, 0, 102);
    Function_2003050(v4, 162, 53, 102, 0, 288, 0);
    Function_2003050(v4, 162, 53, 102, 1, 288, 0);
    Function_2003050(v4, 162, 52, 102, 0, 32, 0xE0u);
    Function_2003050(v4, 162, 52, 102, 1, 32, 0xE0u);
  }
  else
  {
    Function_20070e8(v2, 0x43u, v3, 1u, 0, 0, 0, 102);
    Function_20070e8(v2, 0x43u, v3, 5u, 0, 0, 0, 102);
    Function_200710c(v2, 0x45u, v3, 5u, 0, 0, 0, 102);
    v5 = Function_2231710(v1, 3);
    Function_2003050(v4, 162, v5, 102, 0, 288, 0);
    v6 = Function_2231710(v1, 3);
    Function_2003050(v4, 162, v6, 102, 1, 288, 0);
    v7 = Function_2231710(v1, 0);
    Function_2003050(v4, 162, v7, 102, 0, 32, 0xE0u);
    v8 = Function_2231710(v1, 0);
    Function_2003050(v4, 162, v8, 102, 1, 32, 0xE0u);
  }
  Function_200710c(v2, 0x46u, v3, 5u, 0, 0, 0, 102);
  Function_200710c(v2, 0x46u, v3, 1u, 0, 0, 0, 102);
  return Function_2003a2c(v4, 1, 2u, 0x10u, v1[22]);
}

//----- (022302A8) --------------------------------------------------------
int __fastcall Function_22302a8(int a1, uchar a2, int a3)
{
  uchar v3;
  uint v4;
  int v5;
  uint *v6;

  v3 = a2;
  v4 = 2;
  v5 = *(uint *)(a1 + 20);
  v6 = *(uint **)(a1 + 36);
  if ( a3 )
    v4 = 0;
  Function_20070e8(v5, 0x2Du, v6, a2, 0, 0, 0, 102);
  return Function_200710c(v5, v4, v6, v3, 0, 0, 0, 102);
}

//----- (022302F0) --------------------------------------------------------
int __fastcall Function_22302f0(int a1, uchar a2)
{
  uint *v2;
  int v3;
  uchar v4;

  v2 = *(uint **)(a1 + 36);
  v3 = *(uint *)(a1 + 20);
  v4 = a2;
  Function_20070e8(*(uint *)(a1 + 20), 0x2Du, v2, a2, 0, 0, 0, 102);
  return Function_200710c(v3, 1u, v2, v4, 0, 0, 0, 102);
}

//----- (02230330) --------------------------------------------------------
int __fastcall Function_2230330(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  uint v5;
  uint v6;
  uint *v8;

  v1 = (uint *)a1[6];
  v2 = a1[7];
  v3 = a1[10];
  v8 = a1;
  v4 = a1[5];
  if ( *a1 )
  {
    Function_200cdc4(v3, 2u, v1, v2, a1[5], 0x33u, 0, 3, 1, 9999);
    Function_200cdc4(v3, 3u, v1, v2, v4, 0x33u, 0, 3, 2, 10000);
  }
  else
  {
    v5 = Function_2231710(a1, 2);
    Function_200cdc4(v3, 2u, v1, v2, v4, v5, 0, 3, 1, 9999);
    v6 = Function_2231710(v8, 2);
    Function_200cdc4(v3, 3u, v1, v2, v4, v6, 0, 3, 2, 10000);
  }
  Function_200cc3c(v1, v2, v4, 0x41u, 0, 1, 9999);
  Function_200cc3c(v1, v2, v4, 0x41u, 0, 2, 10000);
  Function_200ce24(v1, v2, v4, 0x2Eu, 0, 9999);
  Function_200ce54(v1, v2, v4, 0x2Fu, 0, 9999);
  Function_200ce24(v1, v2, v4, 0x2Eu, 0, 10000);
  return Function_200ce54(v1, v2, v4, 0x2Fu, 0, 10000);
}

//----- (02230464) --------------------------------------------------------
int __fastcall Function_2230464(int a1, int a2, int a3, int a4)
{
  char *v4;
  int v5;
  int v6;
  int v7;
  char v8;
  char v9;
  int result;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint *v16;
  char *v17;
  int v18;
  int v19;
  uint *v20;
  char v21;
  char v22;
  char v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  char v34;
  short v35;
  short v36;
  short v37;
  short v38;
  short v39;
  short v40;
  short v41;
  short v42;
  short v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;

  v55 = a4;
  v14 = a1;
  v20 = *(uint **)(a1 + 24);
  v19 = *(uint *)(a1 + 28);
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v18 = 0;
  v44 = 0;
  v46 = 1;
  v54 = 0;
  v45 = 0;
  v53 = 2;
  v47 = 9999;
  v48 = 9999;
  v49 = 9999;
  v50 = 9999;
  v51 = -1;
  v52 = -1;
  v17 = &v34;
  v16 = (uint *)&v28;
  *(ushort *)&v34 = 82;
  v4 = &v22;
  v35 = 178;
  v36 = 118;
  v37 = 42;
  v38 = 150;
  v39 = 210;
  *(uint *)&v28 = 1068708659;
  v29 = 1072064102;
  v30 = 0x40000000;
  v31 = 1070386381;
  v32 = 1068708659;
  v33 = 1070386381;
  v5 = a1;
  v22 = -1;
  v23 = -3;
  v24 = 2;
  v25 = -1;
  v26 = -3;
  v27 = 2;
  v15 = a1 + 1784;
  do
  {
    v6 = 0;
    v7 = v5;
    s32_div_f(v18, 3);
    v21 = v8;
    do
    {
      if ( v6 )
      {
        v46 = 2;
        v47 = 10000;
        v48 = 10000;
        v49 = 10000;
        v50 = 10000;
      }
      else
      {
        v46 = 1;
        v47 = 9999;
        v48 = 9999;
        v49 = 9999;
        v50 = 9999;
      }
      *(uint *)(v7 + 1784) = Function_200ce6c(v20, v19, &v40);
      Function_2230e68(*(uint *)(v7 + 1784), *(short *)v17, 96);
      Function_200d330(*(int **)(v7 + 1784));
      Function_200d6a4(*(uint **)(v7 + 1784), 2);
      Function_200d6e8(*(int **)(v7 + 1784), *v16, 0x3F800000u);
      *(uint *)(v5 + 1824) = 0;
      *(uchar *)(v5 + 1809) = v21;
      *(uint *)(v5 + 1828) = 0;
      *(uint *)(v5 + 1800) = *v16;
      *(uint *)(v5 + 1820) = 2 * *v4 + 10;
      if ( v18 >= 3 )
      {
        *(uint *)(v5 + 1816) = 0;
        *(ushort *)(v5 + 1806) = 247 - *v4;
        v9 = 1;
      }
      else
      {
        *(uint *)(v5 + 1816) = 0;
        *(ushort *)(v5 + 1806) = *v4 + 8;
        v9 = -1;
      }
      ++v6;
      v7 += 4;
      *(uchar *)(v5 + 1808) = v9;
    }
    while ( v6 < 2 );
    *(uint *)(v5 + 1792) = AddTaskToTaskList2((int)Function_2230c28, v15, 5u);
    v5 += 48;
    v17 += 2;
    ++v4;
    ++v16;
    v15 += 48;
    ++v18;
  }
  while ( v18 < 6 );
  result = *(uint *)(v14 + 1752);
  while ( result )
  {
    v11 = v14;
    result = 0;
    v12 = 0;
    v13 = v14 + 1784;
    do
    {
      if ( *(uint *)(v11 + 1828) != 3 )
      {
        Function_2230c28(*(uint *)(v11 + 1792), v13);
        result = 1;
      }
      ++v12;
      v11 += 48;
      v13 += 48;
    }
    while ( v12 < 6 );
  }
  return result;
}

//----- (0223066C) --------------------------------------------------------
int __fastcall Function_223066c(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;

  v1 = a1;
  v5 = 0;
  do
  {
    v2 = 0;
    v3 = v1;
    do
    {
      Function_200d0f4(*(uint *)(v3 + 1784));
      ++v2;
      v3 += 4;
    }
    while ( v2 < 2 );
    v1 += 48;
    result = v5 + 1;
    v5 = result;
  }
  while ( result < 6 );
  return result;
}

//----- (0223069C) --------------------------------------------------------
int __fastcall Function_223069c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = Call_RemoveTaskFromTaskList(*(int **)(v1 + 1792));
    ++v2;
    v1 += 48;
  }
  while ( v2 < 6 );
  return result;
}

//----- (022306B8) --------------------------------------------------------
int __fastcall Function_22306b8(uint *a1)
{
  int v1;
  uint v2;
  uint v3;
  uint v4;
  uint *v6;
  int v7;

  v1 = a1[7];
  v7 = a1[5];
  v6 = (uint *)a1[6];
  switch ( (uchar)*a1 )
  {
    case 0u:
      v2 = 63;
      v3 = 24;
      v4 = 25;
      break;
    case 2u:
      v2 = 17;
      v3 = 18;
      v4 = 19;
      break;
    case 3u:
      v2 = 14;
      v3 = 15;
      v4 = 16;
      break;
    case 4u:
      v2 = 11;
      v3 = 12;
      v4 = 13;
      break;
    case 5u:
    case 6u:
      v2 = 8;
      v3 = 9;
      v4 = 10;
      break;
    default:
      v2 = 48;
      v3 = 22;
      v4 = 23;
      break;
  }
  Function_200cc3c(v6, v1, v7, v2, 0, 1, 10001);
  Function_200cc3c(v6, v1, v7, v2, 0, 2, 10002);
  Function_200ce24(v6, v1, v7, v3, 0, 10001);
  Function_200ce24(v6, v1, v7, v3, 0, 10002);
  Function_200ce54(v6, v1, v7, v4, 0, 10001);
  return Function_200ce54(v6, v1, v7, v4, 0, 10002);
}

//----- (022307A0) --------------------------------------------------------
int __fastcall Function_22307a0(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(*(uint *)(a1 + 28), 10001);
  return Function_200d070(*(uint *)(v1 + 28), 10002);
}

//----- (022307C0) --------------------------------------------------------
int __fastcall Function_22307c0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v5 = 0;
  v6 = (uint *)(a1 + 1332);
  v7 = a1;
  do
  {
    Function_2230e68(*v6, 50, (short)(16 * (5 - *(ushort *)(v4 + 1760)) + 217));
    Function_20128c4(*(uint **)(v7 + 1352), 36, -8, v8);
    ++v5;
    v6 += 10;
    v7 += 40;
  }
  while ( v5 < 5 );
  v9 = 0;
  v10 = v4;
  do
  {
    result = *(uint *)(v4 + 1752);
    if ( !result )
      break;
    Function_2230e74(*(uint *)(v10 + 1332), (char *)&v13 + 2, &v13);
    v12 = *(uint *)(v4 + 1752);
    if ( v12 - 1 == v9 )
    {
      LOWORD(v13) = 169;
      Function_200d430(*(int **)(v10 + 1332), 1);
    }
    else
    {
      HIWORD(v13) -= 4 * (v12 - v9);
      LOWORD(v13) = 16 * (*(ushort *)(v4 + 1752) - v9 - 1) + 36 * (5 - (*(ushort *)(v4 + 1752) - v9)) + 25;
      Function_200d430(*(int **)(v10 + 1332), 2);
    }
    Function_2230e68(*(uint *)(v10 + 1332), SHIWORD(v13), (short)v13);
    ++v9;
    result = *(uint *)(v4 + 1752);
    v10 += 40;
  }
  while ( v9 < result );
  return result;
}

//----- (0223088C) --------------------------------------------------------
uint __fastcall Function_223088c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int **v5;
  char *v6;
  int v7;
  int *v8;
  int v9;
  uint *v10;
  int v11;
  int v13;
  int v14;
  uint *v15;
  int v16;
  short v17[2];
  short v18[2];
  short v19;
  short v20;
  short v21;
  short v22;
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
  int v33;
  int v34;

  v34 = a4;
  v4 = a1;
  v5 = (int **)(a1 + 333);
  v15 = (uint *)a1[6];
  v14 = a1[7];
  v13 = a1[10];
  v19 = 42;
  v20 = 16 * (5 - a1[440]) + 201;
  if ( a1[440] == 2 )
    v20 = 233;
  v16 = 0;
  v21 = 0;
  v22 = 0;
  v33 = 0;
  v23 = 0;
  v26 = 10001;
  v32 = 3;
  v27 = 9999;
  v6 = &byte_22488A8;
  v7 = 0;
  v25 = 1;
  v24 = 1;
  v28 = 10001;
  v29 = 10001;
  v30 = -1;
  v31 = -1;
  do
  {
    v25 = 2;
    v26 = 10002;
    v27 = 10000;
    v28 = 10002;
    v29 = 10002;
    v23 = (uchar)v6[5];
    v8 = Function_200ce6c(v15, v14, &v19);
    *v5 = v8;
    Function_200d330(v8);
    Function_200d3f4((uint *)*v5, 1);
    Function_2230e68(*v5, (short)(v19 + 8), v20);
    v25 = 1;
    v26 = 10001;
    v27 = 9999;
    v28 = 10001;
    v29 = 10001;
    v23 = (uchar)*v6;
    v5[50] = Function_200ce6c(v15, v14, &v19);
    Function_200d330(v5[50]);
    Function_2230e68(v5[50], v19, v20);
    Function_200d3f4((uint *)v5[50], *(uint *)(v4[518] + v7));
    ++v6;
    v5 += 10;
    v7 += 36;
    ++v16;
  }
  while ( v16 < 5 );
  v9 = 0;
  v10 = v4;
  do
  {
    if ( !v4[438] )
      break;
    Function_2230e74(v10[333], v18, v17);
    v11 = v4[438];
    if ( v11 - 1 == v9 )
    {
      v17[0] = 169;
      Function_200d430((int *)v10[333], 1);
    }
    else
    {
      v18[0] -= 4 * (v11 - v9);
      v17[0] = 16 * (*((ushort *)v4 + 876) - v9 - 1) + 36 * (5 - (*((ushort *)v4 + 876) - v9)) + 25;
      Function_200d430((int *)v10[333], 2);
    }
    Function_2230e68(v10[333], v18[0], v17[0]);
    ++v9;
    v10 += 10;
  }
  while ( v9 < v4[438] );
  return Function_2003a2c(v13, 2, 0xCu, 0x10u, v4[22]);
}

//----- (02230A5C) --------------------------------------------------------
int __fastcall Function_2230a5c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint *v5;
  int result;
  int v7;

  v1 = a1;
  v2 = 0;
  v7 = 0;
  v3 = a1;
  v4 = a1 + 1532;
  do
  {
    Function_200d3f4(*(uint **)(v3 + 1532), *(uint *)(*(uint *)(v1 + 2072) + v2));
    v5 = (uint *)(*(uint *)(v1 + 2072) + v2);
    if ( *v5 )
    {
      Function_200d364(*(int **)(v3 + 1532), v5[3]);
      Function_2230fc8(v1, v4, *(uint *)(*(uint *)(v1 + 2072) + v2 + 8));
    }
    v2 += 36;
    result = v7 + 1;
    v3 += 40;
    v4 += 40;
    v7 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (02230AB8) --------------------------------------------------------
int __fastcall Function_2230ab8(int **a1, int a2, int a3)
{
  int **v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = 0;
  do
  {
    Function_20131e0(v3[388], *v3[383], a3);
    result = Function_20131e0(v3[338], *v3[333], v5);
    ++v4;
    v3 += 10;
  }
  while ( v4 < 5 );
  return result;
}

//----- (02230AF0) --------------------------------------------------------
int __fastcall Function_2230af0(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  result = 1752;
  v3 = *(uint *)(v1 + 1752);
  if ( v3 )
  {
    result = 0;
    v8 = 0;
    if ( v3 > 0 )
    {
      v4 = v1;
      v5 = v1;
      v6 = v1 + 1332;
      do
      {
        Function_200d364(*(int **)(v5 + 1332), *(uint *)(*(uint *)(v4 + 1732) + 12));
        Function_2230fc8(v1, v6, *(uint *)(*(uint *)(v4 + 1732) + 8));
        Function_20128c4(*(uint **)(v5 + 1352), 36, -8, v7);
        Function_20129d0(*(uint **)(v5 + 1352), 1);
        Function_200d3f4(*(uint **)(v5 + 1332), 1);
        v4 += 4;
        ++v8;
        v5 += 40;
        result = v8;
        v6 += 40;
      }
      while ( v8 < *(uint *)(v1 + 1752) );
    }
  }
  return result;
}

//----- (02230B74) --------------------------------------------------------
uint __fastcall Function_2230b74(int a1)
{
  int v1;
  int *v2;
  uint result;

  v1 = 0;
  v2 = (int *)(a1 + 1332);
  do
  {
    Function_200d0f4(*v2);
    result = Function_200d0f4(v2[50]);
    ++v1;
    v2 += 10;
  }
  while ( v1 < 5 );
  return result;
}

//----- (02230B9C) --------------------------------------------------------
uint __fastcall Function_2230b9c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( *(uint *)(v2 + 1344) )
    {
      Function_20129d0(*(uint **)(v2 + 1352), v3);
      Function_200d3f4(*(uint **)(v2 + 1332), v3);
    }
    else
    {
      Function_20129d0(*(uint **)(v2 + 1352), 0);
      Function_200d3f4(*(uint **)(v2 + 1332), 0);
    }
    if ( *(uint *)(v2 + 1544) )
    {
      Function_20129d0(*(uint **)(v2 + 1552), v3);
      result = Function_200d3f4(*(uint **)(v2 + 1532), v3);
    }
    else
    {
      Function_20129d0(*(uint **)(v2 + 1552), 0);
      result = Function_200d3f4(*(uint **)(v2 + 1532), 0);
    }
    ++v4;
    v2 += 40;
  }
  while ( v4 < 5 );
  return result;
}

//----- (02230C28) --------------------------------------------------------
int __fastcall Function_2230c28(int a1, int a2)
{
  int **v2;
  uint v3;
  int v4;
  int result;
  uint v6;
  int *v7;
  ushort v8;
  uint v9;
  int *v10;
  int v11;
  int v12;
  int *v13;
  ushort v14;
  uint v15;
  int *v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  uchar v21;
  char v22;
  short v23[2];
  int v24;
  short v25;
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
  int v36;
  int v37;
  int v38;
  int v39;

  v2 = (int **)a2;
  v3 = *(uint *)(a2 + 28) + 1;
  v4 = __ROR4__((v3 << 31) - (v3 >> 31), 31);
  result = (v3 >> 31) + v4;
  v2[7] = (int *)result;
  if ( !result )
  {
    v6 = (uint)v2[11];
    if ( v6 <= 3 )
      JUMPOUT(__CS__, (char *)&off_2230C58 + *((short *)&off_2230C58 + v6) + 2);
    switch ( (uchar)v4 )
    {
      case 0:
        v7 = v2[10];
        if ( v7 == (int *)3 )
        {
          v2[11] = (int *)(v6 + 1);
          v2[10] = 0;
        }
        else
        {
          v2[10] = (int *)((char *)v7 + 1);
        }
        break;
      case 1:
        if ( v2[10] == (int *)4 )
        {
          v2[11] = (int *)(v6 + 1);
          v2[10] = 0;
        }
        else
        {
          Function_200d638(*v2, &v33, &v32);
          Function_200d638(v2[1], &v31, &v30);
          v8 = s32_div_f(0xFFFF * (uint)v2[8], 360);
          v33 += Function_201d250(v8) * -*((char *)v2 + 24);
          v31 = v33;
          v9 = (uint)(v2[8] + 8);
          v2[8] = (int *)v9;
          s32_div_f(v9, 360);
          v2[8] = v10;
          Function_200d614(*v2, v33, v32, v11);
          Function_200d614(v2[1], v31, v30, v12);
          v2[10] = (int *)((char *)v2[10] + 1);
        }
        break;
      case 2:
        v34 = 90;
        v35 = 135;
        v36 = 270;
        v37 = 45;
        v38 = 225;
        v39 = 0;
        Function_200d550(*v2, &v25, &v24);
        Function_200d550(v2[1], &v25, v23);
        v13 = v2[10];
        if ( v13 )
        {
          if ( v13 == (int *)((char *)v2[9] + 1) )
          {
            v25 = *((ushort *)v2 + 11);
            v2[8] = (int *)*(&v34 + *((uchar *)v2 + 25));
            v2[11] = (int *)((char *)v2[11] + 1);
            v2[10] = 0;
          }
          else
          {
            v25 += *((ushort *)v2 + 10);
            v2[10] = (int *)((char *)v2[10] + 1);
          }
        }
        else
        {
          *((ushort *)v2 + 10) = *((ushort *)v2 + 11) - v25;
          *((ushort *)v2 + 10) = s32_div_f(*((short *)v2 + 10), (int)v2[9]);
          v2[10] = (int *)((char *)v2[10] + 1);
        }
        Function_200d4c4(*v2, v25, (short)v24);
        Function_200d4c4(v2[1], v25, v23[0]);
        break;
      case 3:
        if ( !v2[10] )
        {
          Function_200d638(*v2, v2 + 3, &v28);
          v2[10] = (int *)((char *)v2[10] + 1);
        }
        Function_200d638(*v2, &v29, &v28);
        Function_200d638(v2[1], &v27, &v26);
        v14 = s32_div_f(0xFFFF * (uint)v2[8], 360);
        v15 = (uint)v2[3] + 3 * Function_201d250(v14) * -*((char *)v2 + 24);
        v29 = v15;
        v27 = v15;
        v16 = v2[8];
        if ( ((uint)*((uchar *)v2 + 25) >> 31)
           + __ROR4__((*((uchar *)v2 + 25) << 31) - ((uint)*((uchar *)v2 + 25) >> 31), 31) )
        {
          v17 = (int)(v16 - 1);
        }
        else
        {
          v17 = (int)(v16 + 1);
        }
        v2[8] = (int *)v17;
        s32_div_f((uint)v2[8], 360);
        v2[8] = v18;
        Function_200d614(*v2, v29, v28, v19);
        Function_200d614(v2[1], v27, v26, v20);
        break;
      default:
        break;
    }
    result = (int)v2[11];
    if ( result >= 2 )
    {
      result = Function_20e1108((int)v2[4], 1036831949);
      if ( !v22 & v21 )
      {
        v2[4] = (int *)fsub((uint)v2[4], 1036831949);
        Function_200d6e8(*v2, (uint)v2[4], 0x3F800000u);
        result = Function_200d6e8(v2[1], (uint)v2[4], 0x3F800000u);
      }
    }
  }
  return result;
}

//----- (02230E68) --------------------------------------------------------
int __fastcall Function_2230e68(int *a1, int a2, int a3)
{
  return Function_200d500(a1, a2, a3, 0x100000);
}

//----- (02230E74) --------------------------------------------------------
int __fastcall Function_2230e74(int *a1, ushort *a2, ushort *a3)
{
  return Function_200d5a0(a1, a2, a3, 0x100000);
}

//----- (02230E80) --------------------------------------------------------
int __fastcall Function_2230e80(int a1)
{
  int v1;
  int ***v2;
  int *v3;
  int v4;
  int v5;
  int result;
  char *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  short v13[2];
  short v14[2];
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int *v23;
  int v24;
  uchar *v25;
  int v26;
  int *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;

  v1 = a1;
  v17 = 1;
  v18 = 2;
  v15 = 9999;
  v16 = 10000;
  v12 = 0;
  v10 = a1 + 1532;
  v9 = a1 + 1332;
  do
  {
    v19 = v10;
    v2 = (int ***)&v19;
    v20 = v9;
    v11 = 0;
    v8 = &v15;
    v3 = &v17;
    v7 = &byte_22488A8[v12];
    do
    {
      Function_201a7a0((int)&v21);
      Function_201a870(*(uint **)(v1 + 36), (int)&v21, 20, 2, 0, 0);
      (*v2)[6] = Function_2012b20((int)&v21, 0x66u);
      v4 = Function_2012898((int)&v21, *v3, 0x66u);
      Function_201ed94(v4, 1, *v3, (int)(*v2 + 7));
      Function_200d550(**v2, v14, v13);
      v5 = *(uint *)(v1 + 80);
      v23 = &v21;
      v22 = v5;
      v24 = Function_200d9b0(*(uint *)(v1 + 28));
      v25 = Function_200d04c(*(uint *)(v1 + 28), *v8);
      v26 = ***v2;
      v27 = (*v2)[8];
      v28 = v14[0] + 36;
      v29 = v13[0] - 8;
      v30 = 3;
      v31 = (uchar)*v7 - 1;
      v32 = *v3;
      v33 = 102;
      (*v2)[5] = Function_2012b60(&v22, (*v2)[6]);
      Function_2012ac0((*v2)[5], 1);
      Function_201a8fc((int)&v21);
      Function_20129d0((*v2)[5], 0);
      ++v2;
      ++v8;
      ++v3;
      v7 += 5;
      ++v11;
    }
    while ( v11 < 2 );
    v10 += 40;
    v9 += 40;
    result = v12 + 1;
    v12 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (02230FC8) --------------------------------------------------------
uint __fastcall Function_2230fc8(int a1, int a2, uint a3, int a4)
{
  int v4;
  int v5;
  ushort **v6;
  ushort *v7;
  int *v8;
  ushort *v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  ushort *v15;
  ushort *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v22;
  char v23;

  v4 = a1;
  v5 = a4;
  v22 = a2;
  v6 = *(ushort ***)(a1 + 72);
  if ( a3 == 8 )
  {
    if ( *(uint *)(v4 + 4 * *(uint *)(a4 + 24) + 2188) )
    {
      v8 = (int *)Function_2231690(102);
      v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 72), 7u);
      v10 = Function_2030b94(*(char **)(v4 + 4 * *(uint *)(v5 + 24) + 2188), 0x66u);
      Function_22349a8(v4, v10);
      v7 = (ushort *)Function_2023790(255, 0x66u);
      Function_200b48c(v8, 0, (int)v10);
      Function_200c388((uint *)v8, (int)v7, (int)v9);
      Function_20237bc_FreeMsg((int)v9, v11);
      Function_20237bc_FreeMsg((int)v10, v12);
      Function_200b3f0((uint *)v8, v13);
    }
    else
    {
      v7 = Function_200b1ec_CallMsgDecrypt(v6, 8u);
    }
  }
  else if ( a3 == 41 )
  {
    if ( *(uint *)(v4 + 4 * *(uint *)(a4 + 24) + 2188) )
    {
      v14 = (int *)Function_2231690(102);
      v15 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 72), 7u);
      v16 = Function_2030b94(*(char **)(v4 + 4 * *(uint *)(v5 + 24) + 2188), 0x66u);
      Function_22349a8(v4, v16);
      v7 = (ushort *)Function_2023790(255, 0x66u);
      Function_200b48c(v14, 0, (int)v16);
      Function_200c388((uint *)v14, (int)v7, (int)v15);
      Function_20237bc_FreeMsg((int)v15, v17);
      Function_20237bc_FreeMsg((int)v16, v18);
      Function_200b3f0((uint *)v14, v19);
    }
    else
    {
      v7 = Function_200b1ec_CallMsgDecrypt(v6, 0x29u);
    }
  }
  else
  {
    v7 = Function_200b1ec_CallMsgDecrypt(v6, a3);
  }
  Function_201a7a0((int)&v23);
  Function_201a870(*(uint **)(v4 + 36), (int)&v23, 20, 2, 0, 0);
  Function_201d78c((int)&v23, 0);
  Function_2012be0(*(int ***)(v22 + 20), *(uint *)(v22 + 24), (int)&v23, 0x66u);
  Function_20237bc_FreeMsg((int)v7, v20);
  return Function_201a8fc((int)&v23);
}

//----- (0223113C) --------------------------------------------------------
int __fastcall Function_223113c(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int result;
  int v6;
  int v7;
  int v8;

  v6 = 0;
  v1 = a1 + 1532;
  v2 = a1 + 1332;
  do
  {
    v7 = v1;
    v8 = v2;
    v3 = 0;
    v4 = &v7;
    do
    {
      Function_2012b48(*(uint *)(*v4 + 24));
      Function_2012bd8(*(int **)(*v4 + 20));
      Function_201ee28(*v4 + 28);
      ++v3;
      ++v4;
    }
    while ( v3 < 2 );
    v1 += 40;
    result = v6 + 1;
    v2 += 40;
    v6 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (0223118C) --------------------------------------------------------
int __fastcall Function_223118c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  short v10[2];
  short v11[2];
  char v12;
  int v13;
  char *v14;
  int v15;
  uchar *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = 9999;
  if ( a3 == 2 )
    v6 = 10000;
  Function_201a7a0((int)&v12);
  Function_201a870(*(uint **)(v5 + 16), (int)&v12, 20, 2, 0, 0);
  *(uint *)(v4 + 12) = Function_2012b20((int)&v12, 0x66u);
  v7 = Function_2012898((int)&v12, v3, 0x66u);
  Function_201ed94(v7, 1, v3, v4 + 16);
  Function_200d550(*(int **)(v4 + 4), v11, v10);
  v13 = *(uint *)(v5 + 60);
  v14 = &v12;
  v15 = Function_200d9b0(*(uint *)(v5 + 8));
  v16 = Function_200d04c(*(uint *)(v5 + 8), v6);
  v17 = **(uint **)(v4 + 4);
  v18 = *(uint *)(v4 + 20);
  v19 = v11[0] + 36;
  v22 = 0;
  v20 = v10[0] - 8;
  v24 = 102;
  v23 = v3;
  v21 = 3;
  v8 = Function_2012b60(&v13, *(uint **)(v4 + 12));
  *(uint *)(v4 + 8) = v8;
  Function_2012ac0(v8, 1);
  Function_201a8fc((int)&v12);
  return Function_20129d0(*(uint **)(v4 + 8), 0);
}

//----- (0223124C) --------------------------------------------------------
uint __fastcall Function_223124c(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  ushort *v5;
  int v6;
  char v8;

  v3 = a2;
  v4 = a1;
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a2 + 52), a3);
  Function_201a7a0((int)&v8);
  Function_201a870(*(uint **)(v3 + 16), (int)&v8, 20, 2, 0, 0);
  Function_201d78c((int)&v8, 0);
  Function_2012be0(*(int ***)(v4 + 8), *(uint *)(v4 + 12), (int)&v8, 0x66u);
  Function_20237bc_FreeMsg((int)v5, v6);
  return Function_201a8fc((int)&v8);
}

//----- (022312B0) --------------------------------------------------------
uint __fastcall Function_22312b0(int a1)
{
  int v1;

  v1 = a1;
  Function_2012b48(*(uint *)(a1 + 12));
  Function_2012bd8(*(int **)(v1 + 8));
  return Function_201ee28(v1 + 16);
}

//----- (022312CC) --------------------------------------------------------
int __fastcall Function_22312cc(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = *(uint *)(a1 + 20);
  v3 = *(uint **)(a1 + 24);
  v4 = *(uint *)(a1 + 28);
  Function_200cc3c(*(uint **)(a1 + 24), *(uint *)(a1 + 28), v2, 0x31u, 0, a2, 11924);
  Function_200ce24(v3, v4, v2, 0x1Au, 0, 11924);
  return Function_200ce54(v3, v4, v2, 0x1Bu, 0, 11924);
}

//----- (0223131C) --------------------------------------------------------
int __fastcall Function_223131c(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = *(uint *)(a1 + 20);
  v3 = *(uint **)(a1 + 24);
  v4 = *(uint *)(a1 + 28);
  Function_200cc3c(*(uint **)(a1 + 24), *(uint *)(a1 + 28), v2, 0x7Au, 0, a2, 11924);
  Function_200ce24(v3, v4, v2, 0x7Bu, 0, 11924);
  return Function_200ce54(v3, v4, v2, 0x7Cu, 0, 11924);
}

//----- (0223136C) --------------------------------------------------------
int __fastcall Function_223136c(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = *(uint *)(a1 + 20);
  v3 = *(uint **)(a1 + 24);
  v4 = *(uint *)(a1 + 28);
  Function_200cc3c(*(uint **)(a1 + 24), *(uint *)(a1 + 28), v2, 0x1Eu, 0, a2, 11924);
  Function_200ce24(v3, v4, v2, 0x20u, 0, 11924);
  return Function_200ce54(v3, v4, v2, 0x1Fu, 0, 11924);
}

//----- (022313BC) --------------------------------------------------------
int __fastcall Function_22313bc(int a1)
{
  int v1;

  v1 = a1;
  Function_200d070(*(uint *)(a1 + 28), 11924);
  Function_200d090(*(uint *)(v1 + 28), 11924);
  return Function_200d0a0(*(uint *)(v1 + 28), 11924);
}

//----- (022313E0) --------------------------------------------------------
int *__fastcall Function_22313e0(int a1, int a2, int a3, int a4)
{
  int *v4;
  short v6;
  short v7;
  short v8;
  short v9;
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
  int v21;

  v21 = a4;
  v6 = 128;
  v7 = 96;
  v8 = 0;
  v9 = 0;
  v10 = 1;
  v19 = 3;
  v17 = -1;
  v18 = -1;
  v11 = 0;
  v12 = a2;
  v20 = 0;
  v13 = 11924;
  v15 = 11924;
  v16 = 11924;
  if ( a2 == 1 )
    v14 = 9999;
  else
    v14 = 10000;
  v4 = Function_200ce6c(*(uint **)(a1 + 24), *(uint *)(a1 + 28), &v6);
  Function_200d41c(v4, 2);
  Function_200d364(v4, 0);
  Function_200d330(v4);
  return v4;
}

//----- (02231454) --------------------------------------------------------
int __fastcall Function_2231454(int a1)
{
  int v1;

  v1 = a1;
  Function_2230b9c(a1, 0);
  Function_2230b74(v1);
  return Function_22307a0(v1);
}

//----- (0223146C) --------------------------------------------------------
int __fastcall Function_223146c(int **a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  Function_22306b8(a1);
  Function_2230060((int)v1);
  Function_208c06c((int)v1);
  Function_223088c(v1, v2, v3, v4);
  Function_2230b9c((int)v1, 1);
  Function_2230a5c((int)v1);
  Function_2230ab8(v1, v5, v6);
  Function_22307c0((int)v1, v7, v8, v9);
  return Function_2230af0((int)v1);
}

//----- (022314A8) --------------------------------------------------------
int __fastcall Function_22314a8(int **a1)
{
  int **v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v1 = a1;
  Function_22306b8(a1);
  Function_2230060((int)v1);
  Function_208c06c((int)v1);
  Function_223088c(v1, v2, v3, v4);
  Function_2230b9c((int)v1, 1);
  Function_2230a5c((int)v1);
  Function_2230ab8(v1, v5, v6);
  Function_22307c0((int)v1, v7, v8, v9);
  Function_2230af0((int)v1);
  result = 1752;
  v1[438] = (int *)((char *)v1[438] + 1);
  return result;
}

//----- (022314F0) --------------------------------------------------------
int *__fastcall Function_22314f0(int *a1, int *a2, int a3, int a4, int a5, int a6, int *a7)
{
  int *v7;
  int *v8;
  int v9;
  int v10;
  int *result;

  v7 = a1;
  *a1 = 0;
  v8 = a2;
  *a2 = 31;
  v9 = a3;
  v10 = a4;
  if ( !a7 )
  {
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, a3, a4, *a1, *a2);
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, a5, a6, *v7, *v8);
  }
  if ( a7 == (int *)1 )
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, v9, v10, *v7, *v8);
  result = a7;
  if ( a7 == (int *)2 )
    result = G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, a5, a6, *v7, *v8);
  return result;
}

//----- (02231560) --------------------------------------------------------
int *__fastcall Function_2231560(int *a1, int *a2, int a3, int a4, int a5, int a6, int *a7)
{
  int *v7;
  int *v8;
  int v9;
  int v10;
  int *result;

  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  if ( !a7 )
  {
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, a3, a4, *a1, *a2);
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, a5, a6, *v7, *v8);
  }
  if ( a7 == (int *)1 )
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, v9, v10, *v7, *v8);
  result = a7;
  if ( a7 == (int *)2 )
    result = G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, a5, a6, *v7, *v8);
  return result;
}

//----- (022315C8) --------------------------------------------------------
int *__fastcall Function_22315c8(int *a1, int *a2, int *a3)
{
  return Function_22314f0(a1, a2, 8, 18, 8, 18, a3);
}

//----- (022315E0) --------------------------------------------------------
int __fastcall Function_22315e0(int *a1, uint *a2, int a3, int a4)
{
  int v4;
  bool v5;
  int v6;

  v4 = 1;
  v5 = a3 == 0;
  v6 = *a1;
  if ( v5 )
  {
    if ( v6 < 8 )
    {
      *a1 = v6 + 1;
      v4 = 0;
    }
    if ( *a2 > 7 )
    {
      *a2 -= 3;
      v4 = 0;
    }
  }
  else
  {
    if ( v6 > 0 )
    {
      *a1 = v6 - 1;
      v4 = 0;
    }
    if ( *a2 < 31 )
    {
      *a2 += 3;
      v4 = 0;
    }
  }
  if ( !a4 )
  {
    REG_BLDALPHA = *a1 | (*(ushort *)a2 << 8);
    REG_BLDALPHA_SUB = *(ushort *)a1 | (*(ushort *)a2 << 8);
  }
  if ( a4 == 1 )
    REG_BLDALPHA = *(ushort *)a1 | (*(ushort *)a2 << 8);
  if ( a4 == 2 )
    REG_BLDALPHA_SUB = *(ushort *)a1 | (*(ushort *)a2 << 8);
  return v4;
}

//----- (02231664) --------------------------------------------------------
int __fastcall Function_2231664(int *a1, int a2)
{
  int v2;
  bool v3;
  int v4;

  v2 = 1;
  v3 = a2 == 1;
  v4 = *a1;
  if ( v3 )
  {
    if ( v4 < 16 )
    {
      *a1 = v4 + 2;
      v2 = 0;
    }
  }
  else if ( v4 > 0 )
  {
    *a1 = v4 - 2;
    v2 = 0;
  }
  return v2;
}

//----- (02231688) --------------------------------------------------------
uint *__fastcall Function_2231688(uint *result)
{
  *result = 16;
  return result;
}

//----- (02231690) --------------------------------------------------------
uint *__fastcall Function_2231690(uint a1)
{
  return Function_200b368(4u, 64, a1);
}

//----- (022316A0) --------------------------------------------------------
int __fastcall Function_22316a0(int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v5 = 29690;
  v6 = 30495;
  v7 = 28539;
  v8 = 28671;
  v9 = 20159;
  v10 = 22366;
  v11 = 23455;
  return *(&v5 + *(uchar *)(a1 + 92));
}

//----- (022316D0) --------------------------------------------------------
int __fastcall Function_22316d0(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v5 = 5698;
  v6 = 13695;
  v7 = 15855;
  v8 = 799;
  v9 = 188;
  v10 = 305;
  v11 = 575;
  if ( *(uint *)a1 )
    result = 32261;
  else
    result = *(&v5 + *(uchar *)(a1 + 92));
  return result;
}

//----- (02231710) --------------------------------------------------------
int __fastcall Function_2231710(int a1)
{
  int v1;
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
  int v13;
  int v14;
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
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;

  v24 = 102;
  v25 = 103;
  v26 = 104;
  v27 = 105;
  v28 = 106;
  v29 = 129;
  v30 = 134;
  v17 = 107;
  v18 = 108;
  v19 = 109;
  v20 = 110;
  v21 = 111;
  v22 = 130;
  v23 = 135;
  v10 = 117;
  v11 = 118;
  v12 = 119;
  v13 = 120;
  v14 = 121;
  v15 = 132;
  v16 = 137;
  v3 = 112;
  v4 = 113;
  v5 = 114;
  v6 = 115;
  v7 = 116;
  v8 = 131;
  v9 = 136;
  v1 = *(uchar *)(a1 + 92);
  switch ( -125 )
  {
    case 0:
      result = *(&v24 + v1);
      break;
    case 1:
      result = *(&v17 + v1);
      break;
    case 2:
      result = *(&v10 + v1);
      break;
    case 3:
      result = *(&v3 + v1);
      break;
    default:
      ErrorHandler();
      result = v24;
      break;
  }
  return result;
}

//----- (022317CC) --------------------------------------------------------
int __fastcall Function_22317cc(uint *a1)
{
  int v1;
  int v2;
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = (int)a1;
  v2 = a1[10];
  v3 = (uint *)a1[6];
  v4 = a1[7];
  v5 = a1[5];
  v6 = Function_2231710((int)a1);
  Function_2003050(v2, 162, v6, 102, 0, 288, 0);
  v7 = Function_2231710(v1);
  Function_2003050(v2, 162, v7, 102, 1, 288, 0);
  v8 = Function_2231710(v1);
  Function_2003050(v2, 162, v8, 102, 0, 32, 0xE0u);
  v9 = Function_2231710(v1);
  Function_2003050(v2, 162, v9, 102, 1, 32, 0xE0u);
  Function_208b63c(*(int **)(v1 + 1776), *(uchar *)(v1 + 92));
  Function_208b63c(*(int **)(v1 + 1776), *(uchar *)(v1 + 92));
  Function_200d080(v4, 9999);
  Function_200d080(v4, 10000);
  v10 = Function_2231710(v1);
  Function_200cdc4(v2, 2u, v3, v4, v5, v10, 0, 3, 1, 9999);
  v11 = Function_2231710(v1);
  return Function_200cdc4(v2, 3u, v3, v4, v5, v11, 0, 3, 2, 10000);
}

//----- (022318E8) --------------------------------------------------------
uint __fastcall Function_22318e8(int a1)
{
  int v1;

  v1 = a1;
  Function_2003a2c(*(uint *)(a1 + 40), 2, 0xFFFFu, 0, *(uint *)(a1 + 88));
  Function_2003a2c(*(uint *)(v1 + 40), 0, 0xFFFFu, 0, *(uint *)(v1 + 88));
  Function_2003a2c(*(uint *)(v1 + 40), 3, 0xFFFFu, 0, *(uint *)(v1 + 88));
  return Function_2003a2c(*(uint *)(v1 + 40), 1, 0xFFFFu, 0, *(uint *)(v1 + 88));
}

//----- (02231948) --------------------------------------------------------
uint *__fastcall Function_2231948(int a1, int a2, uint *a3, int a4)
{
  uint *v4;
  uint *result;
  uint v6;
  int v7;

  v7 = a4;
  v4 = a3;
  result = Function_2007068(75, 13, 0, a1, 0, (int *)&v6);
  *v4 = v6 >> 1;
  return result;
}

//----- (0223196C) --------------------------------------------------------
int __fastcall Function_223196c(int result, int a2)
{
  *(uint *)(result + 2160) = a2;
  return result;
}

//----- (02231974) --------------------------------------------------------
int __fastcall Function_2231974(int a1)
{
  return *(uint *)(a1 + 2160);
}

//----- (0223197C) --------------------------------------------------------
int __fastcall Function_223197c(int result, uint a2)
{
  uint v2;
  int v3;
  ushort *v4;
  int v5;

  v2 = a2;
  v3 = result;
  if ( *(uint *)(result + 2208) != 1 )
  {
    *(uint *)(result + 2208) = 1;
    Function_22302a8(result, 6u, 0);
    Function_201ff74(4u, 1);
    REG_BLDCNT_SUB = 0;
    Function_2019060(6u, 0);
    Function_201a7a0(v3 + 2212);
    Function_201a7e8(*(uint **)(v3 + 36), v3 + 2212, 6, 1, 19, 0x1Eu, 4u, 14, 32);
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), v2);
    Function_201ada4_ClearTextBox(v3 + 2212, 204);
    Function_201d78c(v3 + 2212, 0);
    Function_201a9a4(v3 + 2212);
    result = Function_20237bc_FreeMsg((int)v4, v5);
  }
  return result;
}

//----- (02231A1C) --------------------------------------------------------
int *__fastcall Function_2231a1c(int a1)
{
  int v1;
  int *result;

  v1 = a1;
  result = (int *)2208;
  if ( *(uint *)(v1 + 2208) )
  {
    *(uint *)(v1 + 2208) = 0;
    Function_201acf4(v1 + 2212);
    Function_201a8fc(v1 + 2212);
    Function_2019ebc(*(uint **)(v1 + 36), 6u);
    Function_201ff74(4u, 0);
    Function_2019060(6u, 2);
    G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 18, 7, 8);
    result = G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 4, 18, 7, 8);
  }
  return result;
}

//----- (02231A88) --------------------------------------------------------
uint __fastcall Function_2231a88(int a1)
{
  int v1;

  v1 = a1;
  Function_201acf4(a1 + 2212);
  Function_201a8fc(v1 + 2212);
  return Function_201ff0c(4u, 0);
}

//----- (02231AAC) --------------------------------------------------------
int __fastcall Function_2231aac(int result, uint a2)
{
  uint v2;
  int v3;
  ushort *v4;
  int v5;

  v2 = a2;
  v3 = result;
  if ( *(uint *)(result + 2208) != 1 )
  {
    *(uint *)(result + 2208) = 1;
    Function_22302a8(result, 2u, 0);
    Function_201ff0c(4u, 1);
    Function_201a7a0(v3 + 2212);
    Function_201a7e8(*(uint **)(v3 + 36), v3 + 2212, 2, 1, 19, 0x1Eu, 4u, 14, 32);
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), v2);
    Function_201ada4_ClearTextBox(v3 + 2212, 204);
    Function_201d78c(v3 + 2212, 0);
    Function_201a9a4(v3 + 2212);
    result = Function_20237bc_FreeMsg((int)v4, v5);
  }
  return result;
}

//----- (02231B3C) --------------------------------------------------------
uint __fastcall Function_2231b3c(int a1, uint a2)
{
  int v2;
  uint result;
  ushort *v4;
  int v5;

  v2 = a1;
  result = *(uint *)(a1 + 2208);
  if ( result )
  {
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 72), a2);
    Function_201ada4_ClearTextBox(v2 + 2212, 204);
    Function_201d78c(v2 + 2212, 0);
    Function_201a9a4(v2 + 2212);
    result = Function_20237bc_FreeMsg((int)v4, v5);
  }
  return result;
}

//----- (02231B8C) --------------------------------------------------------
uint __fastcall Function_2231b8c(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  result = 2208;
  if ( *(uint *)(v1 + 2208) )
  {
    *(uint *)(v1 + 2208) = 0;
    Function_201acf4(v1 + 2212);
    Function_201a8fc(v1 + 2212);
    Function_2019ebc(*(uint **)(v1 + 36), 2u);
    result = Function_201ff0c(4u, 0);
  }
  return result;
}

//----- (02231BC4) --------------------------------------------------------
uint __fastcall Function_2231bc4(int a1, uint a2)
{
  int v2;
  uint result;
  uint v4;
  ushort *v5;
  int v6;

  v2 = a1;
  result = *(uint *)(a1 + 2208);
  v4 = a2;
  if ( result != 1 )
  {
    result = *(uint *)(v2 + 2204);
    if ( result != 1 )
    {
      *(uint *)(v2 + 2208) = 1;
      *(uint *)(v2 + 2204) = 1;
      REG_BLDCNT_SUB = 0;
      Function_2019060(6u, 0);
      Function_22302a8(v2, 6u, 0);
      Function_201ff74(4u, 1);
      Function_201a7a0(v2 + 2212);
      Function_201a7e8(*(uint **)(v2 + 36), v2 + 2212, 6, 1, 19, 0x1Eu, 4u, 14, 32);
      v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 72), v4);
      Function_201ada4_ClearTextBox(v2 + 2212, 204);
      Function_201d78c(v2 + 2212, 0);
      Function_201a9a4(v2 + 2212);
      result = Function_20237bc_FreeMsg((int)v5, v6);
    }
  }
  return result;
}

//----- (02231C78) --------------------------------------------------------
uint __fastcall Function_2231c78(char **a1, int a2, int a3, int a4)
{
  short *v4;
  int v5;
  char *v6;
  int v7;
  short v8;
  int *v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  ushort *v16;
  int *v17;
  ushort *v18;
  ushort *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint v25;
  ushort *v26;
  ushort *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  ushort *v33;
  int v34;
  uint v35;
  int v36;
  ushort *v37;
  int v38;
  int v39;
  int v40;
  ushort *v41;
  int v42;
  int v43;
  int v44;
  ushort *v45;
  int v46;
  int v47;
  ushort *v48;
  int v49;
  ushort *v50;
  int v51;
  int v52;
  char **v54;
  int v55;
  uint *v56;
  char *v57;
  int v58;
  int v59;
  uint v60;
  char v61;
  char v62;
  char v63;
  int v64;

  v64 = a4;
  v4 = &word_2248A28;
  v5 = a2;
  v54 = a1;
  v6 = &v63;
  v7 = 40;
  do
  {
    v8 = *v4;
    ++v4;
    *(ushort *)v6 = v8;
    v6 += 2;
    --v7;
  }
  while ( v7 );
  v9 = dword_22489F8;
  v10 = &v62;
  v11 = 6;
  do
  {
    v12 = *v9;
    v13 = v9[1];
    v9 += 2;
    *(uint *)v10 = v12;
    *((uint *)v10 + 1) = v13;
    v10 += 8;
    --v11;
  }
  while ( v11 );
  v58 = 1;
  v59 = 0;
  v14 = (int)(v54 + 3);
  v56 = (uint *)&v62;
  v15 = &v63;
  do
  {
    v16 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 72), *v56);
    Function_201a7a0(v14);
    Function_201a7e8(
      *(uint **)(v5 + 36),
      v14,
      2,
      *(ushort *)v15,
      *((ushort *)v15 + 1),
      *((ushort *)v15 + 2),
      *((ushort *)v15 + 3),
      14,
      v58);
    Function_201ada4_ClearTextBox(v14, 0);
    Function_223429c(v14, v16);
    Function_201d78c(v14, 0);
    Function_201a9a4(v14);
    v58 += *((short *)v15 + 2) * *((short *)v15 + 3);
    Function_20237bc_FreeMsg((int)v16, *((short *)v15 + 2));
    v14 += 16;
    ++v56;
    v15 += 8;
    ++v59;
  }
  while ( v59 < 8 );
  v57 = *v54;
  v17 = (int *)Function_2231690(0x66u);
  v18 = Function_2030b94(v57, 0x66u);
  Function_22349a8(v5, v18);
  v19 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 72), 0xDu);
  v20 = Function_2023790(255, 0x66u);
  Function_200b48c(v17, 0, (int)v18);
  Function_200c388((uint *)v17, v20, (int)v19);
  Function_201ada4_ClearTextBox((int)(v54 + 3), 0);
  Function_223429c(v54 + 3, v20);
  Function_201d78c((int)(v54 + 3), 0);
  Function_201a9a4((int)(v54 + 3));
  Function_20237bc_FreeMsg((int)v18, v21);
  Function_20237bc_FreeMsg((int)v19, v22);
  Function_20237bc_FreeMsg(v20, v23);
  Function_200c41c((uint *)v17, v24);
  v25 = Function_2030ccc((int)v57);
  v26 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 72), 0xFu);
  v27 = Function_2030b94(v57, 0x66u);
  Function_22349a8(v5, v27);
  v28 = Function_2023790(255, 0x66u);
  Function_200c2e0((int)v17, 0, v25);
  Function_200c388((uint *)v17, v28, (int)v26);
  Function_201ada4_ClearTextBox((int)(v54 + 11), 0);
  Function_223429c(v54 + 11, v28);
  Function_201d78c((int)(v54 + 11), 0);
  Function_201a9a4((int)(v54 + 11));
  Function_20237bc_FreeMsg((int)v26, v29);
  Function_20237bc_FreeMsg((int)v27, v30);
  Function_20237bc_FreeMsg(v28, v31);
  Function_200c41c((uint *)v17, v32);
  v33 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 72), 0x10u);
  Function_201ada4_ClearTextBox((int)(v54 + 15), 0);
  Function_223429c(v54 + 15, v33);
  Function_201d78c((int)(v54 + 15), 0);
  Function_201a9a4((int)(v54 + 15));
  Function_20237bc_FreeMsg((int)v33, v34);
  v35 = Function_2030bfc((int)v57);
  v60 = Function_2030c08((int)v57);
  v36 = (int)(v54 + 19);
  Function_201ada4_ClearTextBox((int)(v54 + 19), 0);
  if ( v35 )
  {
    v40 = Function_2023790(255, 0x66u);
    v41 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 72), 0x16u);
    Function_200bdd0((int)v17, 0, v35);
    Function_200c388((uint *)v17, v40, (int)v41);
    Function_201d78c(v36, 0);
    Function_201a9a4(v36);
    Function_20237bc_FreeMsg(v40, v42);
    Function_20237bc_FreeMsg((int)v41, v43);
    if ( v60 )
    {
      Function_201ada4_ClearTextBox((int)(v54 + 23), 0);
      v44 = Function_2023790(255, 0x66u);
      v45 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 72), 0x17u);
      Function_200be08((int)v17, 0, v35, v60);
      Function_200c388((uint *)v17, v44, (int)v45);
      Function_201d78c((int)(v54 + 23), 0);
      Function_201a9a4((int)(v54 + 23));
      Function_20237bc_FreeMsg(v44, v46);
      Function_20237bc_FreeMsg((int)v45, v47);
    }
  }
  else
  {
    v37 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 72), 0x15u);
    Function_201d78c(v36, 0);
    Function_201a9a4(v36);
    Function_20237bc_FreeMsg((int)v37, v38);
  }
  Function_200c41c((uint *)v17, v39);
  v48 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v5 + 72), 0x11u);
  Function_201ada4_ClearTextBox((int)(v54 + 27), 0);
  Function_223429c(v54 + 27, v48);
  Function_201d78c((int)(v54 + 27), 0);
  Function_201a9a4((int)(v54 + 27));
  Function_20237bc_FreeMsg((int)v48, v49);
  v55 = (int)(v54 + 31);
  v50 = Function_2030c28((int)v57, (ushort *)&v61, 0x66u);
  if ( !v50 )
    v50 = Function_2014b34((ushort *)&v61, 0x66u);
  Function_201ada4_ClearTextBox(v55, 0);
  Function_201d78c(v55, 0);
  Function_201a9a4(v55);
  Function_20237bc_FreeMsg((int)v50, v51);
  return Function_200b3f0((uint *)v17, v52);
}

//----- (02232080) --------------------------------------------------------
uint __fastcall Function_2232080(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1 + 12;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 8 );
  return result;
}

//----- (022320A0) --------------------------------------------------------
uint *__fastcall Function_22320a0(int a1, int a2)
{
  uint *result;

  result = *(uint **)(a1 + 4);
  if ( result )
    result = (uint *)Function_200d3f4(result, a2);
  return result;
}

//----- (022320B0) --------------------------------------------------------
int __fastcall Function_22320b0(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  v3 = a1;
  Function_200d070(*(uint *)(a2 + 28), 100000);
  Function_200d080(*(uint *)(v2 + 28), 100000);
  Function_200d090(*(uint *)(v2 + 28), 100000);
  Function_200d0a0(*(uint *)(v2 + 28), 100000);
  result = *(uint *)(v3 + 4);
  if ( result )
  {
    Function_200d0f4(result);
    result = 0;
    *(uint *)(v3 + 4) = 0;
  }
  return result;
}

//----- (022320EC) --------------------------------------------------------
int __fastcall Function_22320ec(int a1, uint *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int result;
  int v11;
  char v12;
  uint *v13;
  char v14;
  uint v15;
  int v16;
  short v17;
  short v18;
  short v19;
  short v20;
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

  v2 = a1;
  v3 = (int *)a2[6];
  v4 = a2[7];
  v5 = a2[10];
  v13 = a2;
  v6 = Function_2079fd0();
  v14 = Function_200cd7c(v5, 2u, v3, v4, 19, v6, 0, 3, 1, 100000);
  v7 = Function_2079fdc();
  Function_200ce0c(v3, v4, 19, v7, 0, 100000);
  v8 = Function_2079fe8();
  Function_200ce3c(v3, v4, 19, v8, 0, 100000);
  v9 = Function_2030bbc(*(uint *)v2);
  v15 = Function_2030bcc(*(uint *)v2);
  result = Function_2030bec(*(uint *)v2);
  v16 = result;
  if ( v9 )
  {
    v11 = Function_2079d8c(v9, result, v15);
    Function_200d888(v3, v4, 19, v11, 0, 1, 100000);
    v17 = 76;
    v18 = 60;
    v19 = 0;
    v20 = 0;
    v24 = 100000;
    v25 = 100000;
    v26 = 100000;
    v27 = 100000;
    v23 = 1;
    v28 = -1;
    v29 = -1;
    v21 = 0;
    v22 = 0;
    v30 = 0;
    v31 = 0;
    *(uint *)(v2 + 4) = Function_200ce6c((uint *)v13[6], v13[7], &v17);
    v12 = Function_2079edc(v9, v15, v16);
    Function_200d430(*(int **)(v2 + 4), v14 + v12);
    result = Function_200d364(*(int **)(v2 + 4), 1u);
  }
  return result;
}

//----- (022321F4) --------------------------------------------------------
uint __fastcall Function_22321f4(int a1, int a2)
{
  return Function_200d3f4(*(uint **)(a1 + 8), a2);
}

//----- (02232200) --------------------------------------------------------
uint __fastcall Function_2232200(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_200d070(*(uint *)(a2 + 28), 165535);
  Function_200d080(*(uint *)(v2 + 28), 165535);
  Function_200d090(*(uint *)(v2 + 28), 165535);
  Function_200d0a0(*(uint *)(v2 + 28), 165535);
  return Function_200d0f4(*(uint *)(v3 + 8));
}

//----- (02232234) --------------------------------------------------------
int __fastcall Function_2232234(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( a1 > 16 || a1 < 0 )
  {
    ErrorHandler();
    a1 = 0;
  }
  if ( v2 == 4 )
    return a1 + 316;
  if ( v2 < 5 )
    return dword_2248AD8[4 * a1 + v2];
  return 0;
}

//----- (0223226C) --------------------------------------------------------
uint __fastcall Function_223226c(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;
  int v9;
  int v10;
  int v11;
  int v12;
  short v13;
  short v14;
  short v15;
  short v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v2 = a1;
  v11 = 14;
  v9 = a2;
  v3 = 13;
  v4 = Function_2030bac(*a1);
  v5 = *(int **)(v9 + 24);
  v6 = *(uint *)(v9 + 28);
  v12 = *(uint *)(v9 + 40);
  if ( *(uint *)(v9 + 2156) )
  {
    v10 = Function_2030cdc(*v2);
    if ( v10 >= 16 )
      v10 = 0;
    v3 = Function_2232234(v10, 2);
    v11 = Function_2232234(v10, 3);
  }
  else if ( v4 == 1 )
  {
    v3 = 15;
    v11 = 16;
  }
  Function_200cd7c(v12, 2u, v5, v6, 146, v3, 0, 1, 1, 165535);
  Function_200ce0c(v5, v6, 146, 9, 0, 165535);
  Function_200ce3c(v5, v6, 146, 10, 0, 165535);
  Function_200d888(v5, v6, 146, v11, 0, 1, 165535);
  v13 = 40;
  v14 = 60;
  v15 = 0;
  v16 = 0;
  v20 = 165535;
  v21 = 165535;
  v22 = 165535;
  v23 = 165535;
  v19 = 1;
  v24 = -1;
  v25 = -1;
  v17 = 0;
  v18 = 0;
  v26 = 0;
  v27 = 0;
  v7 = Function_200ce6c(*(uint **)(v9 + 24), *(uint *)(v9 + 28), &v13);
  v2[2] = (int)v7;
  Function_200d364(v7, 1u);
  return Function_200d330((int *)v2[2]);
}

//----- (02232378) --------------------------------------------------------
int __fastcall Function_2232378(char **a1, int a2, int a3, int a4)
{
  int *v4;
  uint *v5;

  v4 = (int *)a1;
  v5 = (uint *)a2;
  Function_2231c78(a1, a2, a3, a4);
  Function_223226c(v4, (int)v5);
  return Function_22320ec((int)v4, v5);
}

//----- (02232394) --------------------------------------------------------
int __fastcall Function_2232394(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2232080(a1);
  Function_22323b8(v2, 0);
  Function_2232200(v2, v3);
  return Function_22320b0(v2, v3);
}

//----- (022323B8) --------------------------------------------------------
uint __fastcall Function_22323b8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_22320a0(a1, a2);
  return Function_22321f4(v2, v3);
}

//----- (022323CC) --------------------------------------------------------
uint __fastcall Function_22323cc(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  uint *v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  uint v12;
  ushort *v13;

  v2 = a1;
  v3 = a2;
  v12 = Function_2030bfc(*(uint *)(a2 + 2188));
  v4 = Function_2030c08(*(uint *)(v3 + 2188));
  v5 = v2 + 24;
  if ( v12 || v4 )
  {
    v6 = Function_2231690(0x66u);
    if ( v4 )
    {
      v13 = (ushort *)Function_2023790(255, 0x66u);
      v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 0x17u);
      Function_200be08((int)v6, 0, v12, v4);
    }
    else
    {
      v13 = (ushort *)Function_2023790(255, 0x66u);
      v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 0x16u);
      Function_200bdd0((int)v6, 0, v12);
    }
    Function_200c388(v6, (int)v13, (int)v7);
    Function_20237bc_FreeMsg((int)v7, v8);
    Function_200b3f0(v6, v9);
  }
  else
  {
    v13 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 0x7Du);
  }
  Function_201d78c(v5, 0);
  Function_201a9a4(v5);
  return Function_20237bc_FreeMsg((int)v13, v10);
}

//----- (022324A0) --------------------------------------------------------
int __fastcall Function_22324a0(uint *a1, int a2, uint *a3)
{
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  int v10;
  int v12;
  int v13;

  v3 = (int)a1;
  v4 = a3;
  v13 = (int)(a1 + 6);
  v12 = a2;
  a1[1] = a3[1];
  *a1 = 0;
  a1[3] = 0;
  a1[4] = a3[9];
  a1[10] = a3;
  a1[13] = *(uint *)(a2 + 72);
  a1[5] = s32_div_f(a1[1], a1[4]) + 1;
  v5 = *(uint *)(v3 + 4);
  if ( v5 < *(uint *)(v3 + 16) )
  {
    *(uint *)(v3 + 16) = v5;
    *(uint *)(v3 + 64) = v5 - 1;
    *(uint *)(v3 + 68) = *(uint *)(v3 + 16) - 1;
  }
  Function_201a7a0(v13);
  Function_201a7e8(*(uint **)(v12 + 36), v13, v4[8] & 0xFF, v4[3], v4[4], v4[5], v4[6], 14, v4[7]);
  Function_201ada4_ClearTextBox(v13, 0);
  v6 = 0;
  if ( *(uint *)(v3 + 16) > 0 )
  {
    v7 = 0;
    do
    {
      v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 52), *(uint *)(*v4 + v7));
      v9 = 16 * v4[2] * v6;
      Function_201d78c(v13, 0);
      Function_20237bc_FreeMsg((int)v8, v10);
      if ( *(uint *)(*v4 + v7) == 16 )
        Function_22323cc(v3, v12);
      ++v6;
      v7 += 16;
    }
    while ( v6 < *(uint *)(v3 + 16) );
  }
  return Function_201a9a4(v13);
}

//----- (02232594) --------------------------------------------------------
int __fastcall Function_2232594(uint *a1, int a2, int a3, uint *a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  ushort *v9;
  int v10;
  int v11;
  int v12;
  ushort *v13;
  ushort *v14;
  ushort *v15;
  int v16;
  int v17;
  int v18;
  int v20;
  int v21;
  int v22;
  int v23;

  v4 = a1;
  v5 = a4;
  v23 = (int)(a1 + 6);
  v20 = a2;
  a1[1] = a4[1];
  *a1 = 0;
  a1[3] = 0;
  a1[4] = a4[9];
  a1[10] = a4;
  if ( a3 )
    a1[13] = a3;
  else
    a1[13] = *(uint *)(a2 + 72);
  a1[5] = s32_div_f(a1[1], a1[4]) + 1;
  v4[16] = v4[4] / 2;
  v4[17] = v4[4] / 2;
  v6 = v4[1];
  if ( v6 < v4[4] )
  {
    v4[4] = v6;
    v4[16] = v6 - 1;
    v4[17] = v4[4] - 1;
  }
  Function_201a7a0(v23);
  Function_201a7e8(*(uint **)(v20 + 36), v23, v5[8] & 0xFF, v5[3], v5[4], v5[5], v5[6], 14, v5[7]);
  Function_201ada4_ClearTextBox(v23, 0);
  if ( *v5 )
  {
    v7 = 0;
    if ( v4[4] > 0 )
    {
      v8 = 0;
      do
      {
        v9 = Function_200b1ec_CallMsgDecrypt((ushort **)v4[13], *(uint *)(*v5 + v8));
        v10 = 16 * v5[2] * v7;
        Function_201d78c(v23, 0);
        Function_20237bc_FreeMsg((int)v9, v11);
        ++v7;
        v8 += 16;
      }
      while ( v7 < v4[4] );
    }
  }
  else
  {
    v21 = 0;
    if ( v4[4] > 0 )
    {
      v12 = 4;
      v22 = v20;
      do
      {
        v13 = (ushort *)Function_2023790(255, 0x66u);
        v14 = (ushort *)Function_2023790(255, 0x66u);
        v15 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v20 + 72), 0x63u);
        Function_20238a0(v14, v21 + 1, 2, 1, 1);
        Function_2023d28(v13, *(ushort **)(v22 + 9736));
        Function_22349a8(v20, v13);
        Function_2002d7c(0, (int)v14, 0);
        Function_201d78c(v23, 0);
        Function_201d78c(v23, 0);
        Function_201d78c(v23, 0);
        Function_20237bc_FreeMsg((int)v13, v16);
        Function_20237bc_FreeMsg((int)v14, v17);
        Function_20237bc_FreeMsg((int)v15, v18);
        v22 += 4;
        v12 += 24;
        ++v21;
      }
      while ( v21 < v4[4] );
    }
  }
  return Function_201a9a4(v23);
}

//----- (02232778) --------------------------------------------------------
uint __fastcall Function_2232778(uint *a1, int a2, int a3, uint *a4, int a5, int a6, int a7)
{
  uint *v7;
  uint *v8;
  int *v9;
  int v10;
  uint *v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint v21;
  uint v22;
  int v23;
  uint v24;
  uint v25;
  uint v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v37;
  int v38;
  int *v39;
  ushort *v40;
  long long v41;
  int v42;
  ushort *v43;
  ushort *v44;
  ushort *v45;
  int v46;
  int v47;
  int v48;
  int v49;
  ushort v50[256];
  int v51;
  char v52;

  v7 = a1;
  v8 = a4;
  v37 = a2;
  v42 = 0;
  v9 = &v51;
  v10 = 7;
  do
  {
    *v9 = 0;
    v9[1] = 0;
    v11 = v9 + 2;
    *v11 = 0;
    v11[1] = 0;
    v9 = v11 + 2;
    --v10;
  }
  while ( v10 );
  *v9 = 0;
  v9[1] = 0;
  v46 = (int)(a1 + 6);
  a1[1] = v8[1];
  *a1 = 0;
  a1[3] = 0;
  a1[4] = v8[9];
  a1[10] = v8;
  if ( a3 )
    a1[13] = a3;
  else
    a1[13] = *(uint *)(a2 + 72);
  a1[5] = s32_div_f(a1[1], a1[4]) + 1;
  v12 = v7[1];
  if ( v12 < v7[4] )
  {
    v7[4] = v12;
    v7[16] = v12 - 1;
    v7[17] = v7[4] - 1;
  }
  v7[16] = v7[4] / 2;
  v7[17] = v7[4] / 2;
  Function_201a7a0(v46);
  Function_201a7e8(*(uint **)(v37 + 36), v46, v8[8] & 0xFF, v8[3], v8[4], v8[5], v8[6], 14, v8[7]);
  Function_201ada4_ClearTextBox(v46, 0);
  v13 = (int *)Function_2231690(0x66u);
  v47 = 16;
  v48 = 12;
  v14 = 1;
  v49 = 20;
  v41 = *(ull *)(*(uint *)v7[10] + 8);
  v51 = 0;
  if ( *(&v47 + a6) > 1 )
  {
    v15 = 16;
    v16 = &v52;
    v17 = *(&v47 + a6);
    do
    {
      v18 = *(uint *)v7[10] + v15;
      if ( v41 == *(ull *)(v18 + 8) )
      {
        *(uint *)v16 = v42;
      }
      else
      {
        v41 = *(ull *)(v18 + 8);
        *(uint *)v16 = v14;
        v42 = v14;
      }
      ++v14;
      v15 += 16;
      v16 += 4;
    }
    while ( v14 < v17 );
  }
  v38 = 0;
  if ( v7[4] > 0 )
  {
    v39 = &v51;
    v19 = 0;
    do
    {
      v45 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v37 + 72), a6 + 88);
      v44 = (ushort *)Function_2023790(255, 0x66u);
      v20 = Function_2023790(255, 0x66u);
      v40 = (ushort *)Function_2023790(255, 0x66u);
      if ( a6 )
      {
        if ( a6 == 1 )
        {
          v21 = *(uint *)(*(uint *)v7[10] + v19 + 4);
          v43 = (ushort *)Function_2023790(255, 0x66u);
          Function_200c2e0((int)v13, 1u, v21);
        }
        else if ( a6 == 2 )
        {
          v22 = *(uint *)(*(uint *)v7[10] + v19 + 4);
          v43 = (ushort *)Function_2023790(255, 0x66u);
          Function_200b274(v22, 0x66u, v50);
          Function_2023d28(v43, v50);
          Function_200b48c(v13, 1u, (int)v43);
        }
      }
      else
      {
        v43 = Function_200b1ec_CallMsgDecrypt((ushort **)v7[13], *(uint *)(*(uint *)v7[10] + v19 + 4));
        Function_200b48c(v13, 1u, (int)v43);
      }
      v23 = *(uint *)v7[10];
      v24 = *(uint *)(v23 + v19 + 8);
      v25 = *(uint *)(v23 + v19 + 12);
      v26 = Function_223438c(*(uint *)(v23 + v19 + 8), v25);
      Function_20239d4(v40, v24, v25, v26, 0, 1);
      Function_20238a0(v44, *v39 + 1, 2, 1, 1);
      Function_200b48c(v13, 0, (int)v44);
      Function_200c388((uint *)v13, v20, (int)v45);
      v27 = 16 * *(uint *)(v7[10] + 8) * v38;
      Function_201d78c(v46, 0);
      if ( *(uint *)(v7[10] + 8) == 2 && a7 )
      {
        Function_200b48c(v13, 2u, (int)v40);
        Function_200c388((uint *)v13, v20, a7);
        v29 = 16 * *(uint *)(v7[10] + 8) * v38 + 16;
        Function_201d78c(v46, 0);
      }
      Function_20237bc_FreeMsg((int)v45, v28);
      Function_20237bc_FreeMsg((int)v44, v30);
      Function_20237bc_FreeMsg((int)v43, v31);
      Function_20237bc_FreeMsg(v20, v32);
      Function_20237bc_FreeMsg((int)v40, v33);
      Function_200c41c((uint *)v13, v34);
      ++v39;
      v19 += 16;
      ++v38;
    }
    while ( v38 < v7[4] );
  }
  Function_201a9a4(v46);
  return Function_200b3f0((uint *)v13, v35);
}

//----- (02232AAC) --------------------------------------------------------
int __fastcall Function_2232aac(uint *a1, int a2, uint *a3, int *a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int *v7;
  int v8;
  int i;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;

  v4 = a1;
  v5 = a3;
  v15 = (int)(a1 + 6);
  v6 = a2;
  a1[1] = a3[1];
  *a1 = 0;
  a1[3] = 0;
  v7 = a4;
  a1[4] = a3[9];
  a1[10] = a3;
  a1[13] = *(uint *)(a2 + 72);
  a1[5] = s32_div_f(a1[1], a1[4]) + 1;
  v4[16] = v4[4] / 2;
  v4[17] = v4[4] / 2;
  v8 = v4[1];
  if ( v8 < v4[4] )
  {
    v4[4] = v8;
    v4[16] = v8 - 1;
    v4[17] = v4[4] - 1;
  }
  v4[18] = 1;
  Function_201a7a0(v15);
  Function_201a7e8(*(uint **)(v6 + 36), v15, v5[8] & 0xFF, v5[3], v5[4], v5[5], v5[6], 14, v5[7]);
  Function_201ada4_ClearTextBox(v15, 0);
  for ( i = 0; i < v4[4]; v7 += 2 )
  {
    v10 = 8 * v5[2] * i + 4;
    v11 = *v7;
    Function_201d78c(v15, 0);
    v12 = 8 * v5[2] * i + 4;
    v13 = v7[1];
    Function_201d78c(v15, 0);
    ++i;
  }
  return Function_201a9a4(v15);
}

//----- (02232BB4) --------------------------------------------------------
int __fastcall Function_2232bb4(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  int v14;
  int v15;

  v3 = a1;
  v4 = a3;
  if ( a1[14] == a1[3] )
    return 0;
  if ( a1[4] == a1[1] )
    return 0;
  Function_201ada4_ClearTextBox((int)(a1 + 6), 0);
  v6 = v3[16];
  v7 = 0;
  if ( v3[15] >= v6 )
  {
    v8 = v3[14];
    v9 = v3[1];
    v7 = v8 - v6;
    if ( v8 >= v9 - (v6 + 1) )
      v7 = v9 - v3[4];
  }
  v10 = v3[4];
  v11 = 0;
  if ( v10 > 0 )
  {
    v12 = (uint *)(v4 + 8 * v7);
    do
    {
      if ( *v12 )
      {
        v13 = 8 * *(uint *)(v3[10] + 8) * v11 + 4;
        Function_201d78c((int)(v3 + 6), 0);
        v14 = 8 * *(uint *)(v3[10] + 8) * v11 + 4;
        v15 = v12[1];
        Function_201d78c((int)(v3 + 6), 0);
      }
      ++v11;
      v12 += 2;
    }
    while ( v11 < v3[4] );
  }
  Function_201a954((int)(v3 + 6), v10);
  v3[3] = v3[14];
  return 0;
}

//----- (02232C78) --------------------------------------------------------
int __fastcall Function_2232c78(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int *v7;
  int *v8;
  int v9;
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  int v18;
  uint v19;
  uint v20;
  int v21;
  uint v22;
  uint v23;
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
  int v36;
  int *v37;
  int v38;
  long long v39;
  int v40;
  int v41;
  ushort *v42;
  ushort *v43;
  ushort *v44;
  ushort *v45;
  int v46;
  int v47;
  int v48;
  int v49;
  ushort v50[256];
  int v51;
  char v52;

  v5 = a1;
  v34 = a2;
  v35 = a4;
  if ( *(short *)(a1 + 8) == *(uint *)(a1 + 12) )
    return 0;
  if ( *(uint *)(a1 + 16) == *(uint *)(a1 + 4) )
    return 0;
  v46 = a1 + 24;
  v7 = (int *)Function_2231690(0x66u);
  Function_201ada4_ClearTextBox(v5 + 24, 0);
  v41 = 0;
  v40 = 0;
  v8 = &v51;
  v36 = *(short *)(v5 + 8);
  v38 = v36 + *(uint *)(v5 + 16);
  v9 = 7;
  do
  {
    *v8 = 0;
    v8[1] = 0;
    v10 = v8 + 2;
    *v10 = 0;
    v10[1] = 0;
    v8 = v10 + 2;
    --v9;
  }
  while ( v9 );
  *v8 = 0;
  v8[1] = 0;
  v11 = *(uint *)(v5 + 4);
  if ( v38 >= v11 )
  {
    v38 = *(uint *)(v5 + 4);
    v36 = v11 - *(uint *)(v5 + 16);
  }
  v47 = 16;
  v48 = 12;
  v12 = 1;
  v49 = 20;
  v39 = *(ull *)(**(uint **)(v5 + 40) + 8);
  v51 = 0;
  v13 = *(&v47 + v35);
  if ( v13 > 1 )
  {
    v14 = 16;
    v15 = &v52;
    do
    {
      v16 = **(uint **)(v5 + 40) + v14;
      if ( v39 == *(ull *)(v16 + 8) )
      {
        *(uint *)v15 = v40;
      }
      else
      {
        v39 = *(ull *)(v16 + 8);
        *(uint *)v15 = v12;
        v40 = v12;
      }
      ++v12;
      v14 += 16;
      v15 += 4;
    }
    while ( v12 < v13 );
  }
  if ( v36 < v38 )
  {
    v17 = 16 * v36;
    v37 = &v51 + v36;
    do
    {
      v45 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v34 + 72), v35 + 88);
      v44 = (ushort *)Function_2023790(255, 0x66u);
      v18 = Function_2023790(255, 0x66u);
      v42 = (ushort *)Function_2023790(255, 0x66u);
      if ( v35 )
      {
        if ( v35 == 1 )
        {
          v19 = *(uint *)(**(uint **)(v5 + 40) + v17 + 4);
          v43 = (ushort *)Function_2023790(255, 0x66u);
          Function_200c2e0((int)v7, 1u, v19);
        }
        else if ( v35 == 2 )
        {
          v20 = *(uint *)(**(uint **)(v5 + 40) + v17 + 4);
          v43 = (ushort *)Function_2023790(255, 0x66u);
          Function_200b274(v20, 0x66u, v50);
          Function_2023d28(v43, v50);
          Function_200b48c(v7, 1u, (int)v43);
        }
      }
      else
      {
        v43 = Function_200b1ec_CallMsgDecrypt(
                *(ushort ***)(v5 + 52),
                *(uint *)(**(uint **)(v5 + 40) + v17 + 4));
        Function_200b48c(v7, 1u, (int)v43);
      }
      v21 = **(uint **)(v5 + 40);
      v22 = *(uint *)(v21 + v17 + 8);
      v23 = *(uint *)(v21 + v17 + 12);
      v24 = Function_223438c(*(uint *)(v21 + v17 + 8), v23);
      Function_20239d4(v42, v22, v23, v24, 0, 1);
      Function_20238a0(v44, *v37 + 1, 2, 1, 1);
      Function_200b48c(v7, 0, (int)v44);
      Function_200c388((uint *)v7, v18, (int)v45);
      v25 = 16 * *(uint *)(*(uint *)(v5 + 40) + 8) * v41;
      Function_201d78c(v46, 0);
      if ( *(uint *)(*(uint *)(v5 + 40) + 8) == 2 )
      {
        if ( a5 )
        {
          Function_200b48c(v7, 2u, (int)v42);
          Function_200c388((uint *)v7, v18, a5);
          v27 = 16 * *(uint *)(*(uint *)(v5 + 40) + 8) * v41 + 16;
          Function_201d78c(v46, 0);
        }
      }
      ++v41;
      Function_20237bc_FreeMsg((int)v45, v26);
      Function_20237bc_FreeMsg((int)v44, v28);
      Function_20237bc_FreeMsg((int)v43, v29);
      Function_20237bc_FreeMsg(v18, v30);
      Function_20237bc_FreeMsg((int)v42, v31);
      Function_200c41c((uint *)v7, v32);
      v17 += 16;
      ++v37;
      ++v36;
    }
    while ( v36 < v38 );
  }
  Function_201a9a4(v46);
  Function_200b3f0((uint *)v7, v33);
  *(uint *)(v5 + 12) = *(short *)(v5 + 8);
  return 0;
}

//----- (02232F68) --------------------------------------------------------
int __fastcall Function_2232f68(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  ushort *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v2 = a1;
  v18 = 0;
  v3 = a2;
  if ( *(uint *)(*(uint *)(a1 + 40) + 40) )
  {
    v4 = 0;
    if ( *(uint *)(a1 + 16) > 0 )
    {
      v5 = 0;
      do
      {
        if ( Function_2022760((uchar *)(*(uint *)(*(uint *)(v2 + 40) + 40) + v5)) )
        {
          Function_2234520(v3);
          v18 = *(uint *)(**(uint **)(v2 + 40) + 16 * (*(short *)(v2 + 8) + v4) + 4);
        }
        ++v4;
        v5 += 4;
      }
      while ( v4 < *(uint *)(v2 + 16) );
    }
  }
  if ( *(short *)(v2 + 8) == *(uint *)(v2 + 12) )
    return v18;
  if ( *(uint *)(v2 + 16) == *(uint *)(v2 + 4) )
    return v18;
  v17 = v2 + 24;
  Function_201ada4_ClearTextBox(v2 + 24, 0);
  v7 = *(uint *)(v2 + 16);
  v8 = *(uint *)(v2 + 4);
  v15 = *(short *)(v2 + 8);
  v9 = 0;
  v16 = v15 + v7;
  if ( v15 + v7 >= v8 )
  {
    v15 = v8 - v7;
    v16 = *(uint *)(v2 + 4);
  }
  v10 = v15;
  if ( v15 < v16 )
  {
    v11 = 16 * v15;
    do
    {
      v12 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 52), *(uint *)(**(uint **)(v2 + 40) + v11));
      v13 = 16 * *(uint *)(*(uint *)(v2 + 40) + 8) * v9;
      Function_201d78c(v17, 0);
      Function_20237bc_FreeMsg((int)v12, v14);
      ++v9;
      v10 = v15 + 1;
      v11 += 16;
      v15 = v10;
    }
    while ( v10 < v16 );
  }
  Function_201a954(v17, v10);
  *(uint *)(v2 + 12) = *(short *)(v2 + 8);
  return v18;
}

//----- (02233064) --------------------------------------------------------
int __fastcall Function_2233064(uint *a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  ushort *v7;
  ushort *v8;
  ushort *v9;
  int v10;
  int v11;
  int v12;
  uint *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v14 = a2;
  v13 = a1;
  if ( a1[14] == a1[3] )
    return 0;
  if ( a1[4] == a1[1] )
    return 0;
  v18 = (int)(a1 + 6);
  Function_201ada4_ClearTextBox((int)(a1 + 6), 0);
  v16 = 0;
  v3 = v13[16];
  v4 = v13[15];
  if ( v4 >= v3 )
  {
    v5 = v13[14];
    v16 = v5 - v3;
    v4 = v13[1];
    if ( v5 >= v4 - (v3 + 1) )
      v16 = v4 - v13[4];
  }
  v17 = 0;
  if ( v13[4] > 0 )
  {
    v6 = 4;
    v15 = v14 + 4 * v16;
    do
    {
      v7 = (ushort *)Function_2023790(255, 0x66u);
      v8 = (ushort *)Function_2023790(255, 0x66u);
      v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v14 + 72), 0x63u);
      Function_20238a0(v8, v16 + v17 + 1, 2, 1, 1);
      Function_2023d28(v7, *(ushort **)(v15 + 9736));
      Function_22349a8(v14, v7);
      Function_2002d7c(0, (int)v8, 0);
      Function_201d78c(v18, 0);
      Function_201d78c(v18, 0);
      Function_201d78c(v18, 0);
      Function_20237bc_FreeMsg((int)v7, v10);
      Function_20237bc_FreeMsg((int)v8, v11);
      Function_20237bc_FreeMsg((int)v9, v12);
      v6 += 24;
      v15 += 4;
      ++v17;
      v4 = v13[4];
    }
    while ( v17 < v4 );
  }
  Function_201a954(v18, v4);
  v13[3] = v13[14];
  return 0;
}

//----- (022331C8) --------------------------------------------------------
int __fastcall Function_22331c8(int a1, int a2)
{
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
  int v12;
  int v13;
  short v14;
  int v15;
  int v16;

  v2 = a1;
  v3 = 0;
  v4 = 255;
  if ( a2 >= 0 )
  {
    if ( a2 > 0 )
    {
      v6 = *(uint *)(a1 + 56);
      if ( v6 < *(uint *)(a1 + 4) - 1 )
      {
        *(uint *)(a1 + 56) = v6 + 1;
        v4 = 1;
        Function_2005748(0x55Au);
      }
    }
  }
  else
  {
    v5 = *(uint *)(a1 + 56);
    if ( v5 > 0 )
    {
      *(uint *)(v2 + 56) = v5 - 1;
      v4 = 0;
      Function_2005748(0x55Au);
    }
  }
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v10 = *(uint *)(v2 + 56);
      v11 = *(uint *)(v2 + 64);
      if ( v10 > v11 )
      {
        v3 = (short)v11;
        v12 = *(uint *)(v2 + 4) - v11;
        if ( v10 >= v12 )
          v3 = (short)(v11 + v10 - (v12 - 1));
      }
      else
      {
        v3 = (short)v10;
      }
    }
  }
  else
  {
    v7 = *(uint *)(v2 + 68);
    v8 = *(uint *)(v2 + 56);
    if ( v8 >= v7 )
    {
      v9 = *(uint *)(v2 + 4) - v7;
      if ( v8 < v9 )
      {
        v3 = (short)v7;
        if ( v8 <= v7 )
          v3 = (short)v8;
      }
      else
      {
        v3 = (short)(v7 + 1);
        if ( v8 >= v9 )
          v3 = (short)(v3 + v8 - v9);
      }
    }
    else
    {
      v3 = (short)v8;
    }
  }
  if ( v3 < 0 )
    ErrorHandler();
  if ( v4 != 255 )
    *(uint *)(v2 + 60) = v3;
  v13 = *(uint *)(v2 + 64);
  v14 = 0;
  if ( *(uint *)(v2 + 60) >= v13 )
  {
    v15 = *(uint *)(v2 + 56);
    v14 = v15 - v13;
    v16 = *(uint *)(v2 + 4);
    if ( v15 >= v16 - (v13 + 1) )
      v14 = v16 - *(ushort *)(v2 + 16);
  }
  *(ushort *)(v2 + 8) = v14;
  return Function_223349c(v2);
}

//----- (022332AC) --------------------------------------------------------
int __fastcall Function_22332ac(int a1, short a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = *(short *)(a1 + 8);
  *(ushort *)(v2 + 8) = v3 + a2;
  if ( *(short *)(v2 + 8) < 0 )
    *(ushort *)(v2 + 8) = 0;
  if ( *(uint *)(v2 + 16) == *(uint *)(v2 + 4) )
    *(ushort *)(v2 + 8) = 0;
  v4 = *(uint *)(v2 + 16);
  v5 = *(uint *)(v2 + 4);
  if ( *(short *)(v2 + 8) + v4 > v5 )
    *(ushort *)(v2 + 8) = v5 - v4;
  if ( v3 != *(short *)(v2 + 8) )
    Function_2005748(0x55Au);
  return Function_2233454(v2);
}

//----- (022332FC) --------------------------------------------------------
uint __fastcall Function_22332fc(int a1)
{
  int v1;

  v1 = a1;
  Function_201acf4(a1 + 24);
  return Function_201a8fc(v1 + 24);
}

//----- (02233310) --------------------------------------------------------
int *__fastcall Function_2233310(int *a1)
{
  return Call_FillMemWithValue(a1, 0, 0x50u);
}

//----- (0223331C) --------------------------------------------------------
int __fastcall Function_223331c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int *v10;
  short v12;
  short v13;
  short v14;
  short v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v27 = a4;
  v4 = a2;
  v5 = a1;
  v6 = *(uint *)(a2 + 28);
  v7 = *(uint *)(a2 + 20);
  v8 = a3;
  v9 = *(uint **)(a2 + 24);
  Function_200cc3c(*(uint **)(a2 + 24), *(uint *)(a2 + 28), *(uint *)(a2 + 20), 0x7Fu, 0, a3, 200000);
  Function_200ce24(v9, v6, v7, 0x7Eu, 0, 200000);
  Function_200ce54(v9, v6, v7, 0x7Du, 0, 200000);
  v12 = 128;
  v13 = 96;
  v14 = 0;
  v15 = 0;
  v16 = 1;
  v25 = 1;
  v23 = -1;
  v24 = -1;
  v17 = 0;
  v18 = v8;
  v26 = 0;
  v19 = 200000;
  v21 = 200000;
  v22 = 200000;
  if ( v8 == 1 )
    v20 = 9999;
  else
    v20 = 10000;
  *(uint *)(v5 + 44) = Function_200ce6c(*(uint **)(v4 + 24), *(uint *)(v4 + 28), &v12);
  *(uint *)(v5 + 48) = Function_200ce6c(*(uint **)(v4 + 24), *(uint *)(v4 + 28), &v12);
  Function_200d41c(*(int **)(v5 + 44), 2);
  Function_200d41c(*(int **)(v5 + 48), 2);
  Function_200d364(*(int **)(v5 + 44), 0);
  Function_200d364(*(int **)(v5 + 48), 0);
  Function_200d330(*(int **)(v5 + 44));
  Function_200d330(*(int **)(v5 + 48));
  Function_200d7d4(*(int **)(v5 + 48), 2);
  v10 = *(int **)(v5 + 44);
  if ( v8 == 1 )
  {
    Function_200d4c4(v10, 128, 24);
    Function_200d4c4(*(int **)(v5 + 48), 128, 120);
  }
  else
  {
    Function_200d4c4(v10, 128, 88);
    Function_200d4c4(*(int **)(v5 + 48), 128, 184);
  }
  return Function_2233454(v5);
}

//----- (02233434) --------------------------------------------------------
int __fastcall Function_2233434(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a3;
  Function_200d4c4(*(int **)(a1 + 44), 128, a2);
  return Function_200d4c4(*(int **)(v3 + 48), 128, v4);
}

//----- (02233454) --------------------------------------------------------
uint __fastcall Function_2233454(int a1)
{
  int v1;

  v1 = a1;
  Function_200d3f4(*(uint **)(a1 + 44), 1);
  Function_200d3f4(*(uint **)(v1 + 48), 1);
  if ( !*(ushort *)(v1 + 8) )
    Function_200d3f4(*(uint **)(v1 + 44), 0);
  if ( (int)*(short *)(v1 + 8) + *(uint *)(v1 + 16) >= *(uint *)(v1 + 4) )
    Function_200d3f4(*(uint **)(v1 + 48), 0);
  Function_200d33c(*(int **)(v1 + 44));
  return Function_200d33c(*(int **)(v1 + 48));
}

//----- (0223349C) --------------------------------------------------------
uint __fastcall Function_223349c(int a1)
{
  int v1;

  v1 = a1;
  Function_200d3f4(*(uint **)(a1 + 44), 1);
  Function_200d3f4(*(uint **)(v1 + 48), 1);
  if ( !*(ushort *)(v1 + 8) )
    Function_200d3f4(*(uint **)(v1 + 44), 0);
  if ( (int)*(short *)(v1 + 8) + *(uint *)(v1 + 16) >= *(uint *)(v1 + 4) )
    Function_200d3f4(*(uint **)(v1 + 48), 0);
  if ( *(uint *)(v1 + 16) >= *(uint *)(v1 + 4) )
  {
    Function_200d3f4(*(uint **)(v1 + 44), 0);
    Function_200d3f4(*(uint **)(v1 + 48), 0);
  }
  Function_200d33c(*(int **)(v1 + 44));
  return Function_200d33c(*(int **)(v1 + 48));
}

//----- (022334FC) --------------------------------------------------------
uint __fastcall Function_22334fc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_200d070(*(uint *)(a2 + 28), 200000);
  Function_200d090(*(uint *)(v2 + 28), 200000);
  Function_200d0a0(*(uint *)(v2 + 28), 200000);
  Function_200d0f4(*(uint *)(v3 + 44));
  return Function_200d0f4(*(uint *)(v3 + 48));
}

//----- (0223352C) --------------------------------------------------------
int *__fastcall Function_223352c(int a1, int a2, int a3, uint a4)
{
  uint v4;
  int *v5;
  short v7;
  short v8;
  short v9;
  short v10;
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
  int v21;

  v4 = a4;
  v7 = 128;
  v8 = 96;
  v9 = 0;
  v10 = 0;
  v11 = 1;
  v20 = 1;
  v18 = -1;
  v19 = -1;
  v12 = 0;
  v13 = a3;
  v21 = 0;
  v14 = 11924;
  v16 = 11924;
  v17 = 11924;
  if ( a3 == 1 )
    v15 = 9999;
  else
    v15 = 10000;
  v5 = Function_200ce6c(*(uint **)(a2 + 24), *(uint *)(a2 + 28), &v7);
  Function_200d41c(v5, 2);
  Function_200d364(v5, v4);
  Function_200d330(v5);
  return v5;
}

//----- (0223359C) --------------------------------------------------------
uint __fastcall Function_223359c(int a1)
{
  int v1;

  v1 = a1;
  Function_200d0f4(*(uint *)(a1 + 24));
  return Function_200d0f4(*(uint *)(v1 + 28));
}

//----- (022335B0) --------------------------------------------------------
int __fastcall Function_22335b0(int a1, int a2)
{
  return Function_22335bc(a1, a2, 5);
}

//----- (022335BC) --------------------------------------------------------
int __fastcall Function_22335bc(int a1, int a2, uint a3)
{
  uint v3;
  int v4;
  int v5;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  *(uint *)(a1 + 24) = Function_223352c(a1, a2, 2, a3);
  *(uint *)(v4 + 28) = Function_223352c(v4, v5, 2, v3);
  Function_200d4c4(*(int **)(v4 + 24), 24, 136);
  return Function_200d4c4(*(int **)(v4 + 28), 232, 136);
}

//----- (022335F4) --------------------------------------------------------
int *__fastcall Function_22335f4(int *a1)
{
  return Call_FillMemWithValue(a1, 0, 0x20u);
}

//----- (02233600) --------------------------------------------------------
uint __fastcall Function_2233600(int a1)
{
  return Function_223359c(a1);
}

//----- (02233608) --------------------------------------------------------
int __fastcall Function_2233608(int result, int a2)
{
  int v2;
  short v3;

  v2 = a2 - *(uint *)(result + 12);
  if ( v2 * v2 < 256 )
  {
    *(ushort *)(result + 16) = 0;
  }
  else
  {
    if ( v2 < 0 )
      v3 = -1;
    else
      v3 = 1;
    *(ushort *)(result + 16) = v3;
    *(uint *)(result + 12) = a2;
  }
  return result;
}

//----- (02233638) --------------------------------------------------------
int __fastcall Function_2233638(int result, uint *a2)
{
  if ( a2[18] )
    *(uint *)(result + 20) = a2[1] >= 2;
  else
    *(uint *)(result + 20) = a2[4] < a2[1];
  return result;
}

//----- (02233664) --------------------------------------------------------
int __fastcall Function_2233664(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  v1 = a1;
  v2 = 0;
  v3 = Function_20227a4(&v6, &v5);
  if ( *(uint *)(v1 + 20) )
  {
    Function_200d33c(*(int **)(v1 + 24));
    Function_200d33c(*(int **)(v1 + 28));
  }
  if ( *(uint *)(v1 + 4) || v3 )
  {
    if ( Function_2022734((uchar *)&dword_22488F0) || Function_2022734((uchar *)&dword_22488F4) )
      v2 = 1;
    result = *(uint *)(v1 + 4);
    if ( v2 )
    {
      if ( result )
      {
        --*(uint *)v1;
        result = Function_2233608(v1, v5);
      }
      else
      {
        *(uint *)(v1 + 4) = 1;
        *(uint *)(v1 + 8) = v6;
        *(uint *)(v1 + 12) = v5;
        result = 2;
        *(uint *)v1 = 2;
      }
    }
    else if ( result )
    {
      result = 0;
      *(uint *)(v1 + 4) = 0;
      *(uint *)v1 = 0;
      *(uint *)(v1 + 8) = 0;
      *(uint *)(v1 + 12) = 0;
    }
  }
  else
  {
    result = 0;
    *(uint *)(v1 + 4) = 0;
    *(uint *)v1 = 0;
    *(uint *)(v1 + 8) = 0;
    *(uint *)(v1 + 12) = 0;
    *(ushort *)(v1 + 16) = 0;
  }
  return result;
}

//----- (02233704) --------------------------------------------------------
int __fastcall Function_2233704(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = LoadVariableAreaAdress_14(*(uint *)(a1 + 2096));
  return Function_202cfec(v3, v2);
}

//----- (0223371C) --------------------------------------------------------
int __fastcall Function_223371c(int a1)
{
  int v1;
  char v3;

  v1 = a1;
  Function_202f1f8(*(uint *)(a1 + 2096), 0x77u, (int)&v3);
  return Function_202fe20(
           *(uint *)(v1 + 2228),
           *(uint *)(v1 + 2228) + 128,
           *(uint *)(v1 + 2228) + 228,
           0,
           *(uint *)(v1 + 2096));
}

//----- (02233750) --------------------------------------------------------
int __fastcall Function_2233750(int *a1, uint *a2)
{
  uint *v2;
  int *v3;

  v2 = a2;
  v3 = a1;
  Function_222f824(*a2);
  Function_2039720();
  v2[1] = 1;
  return Call_RemoveTaskFromTaskList(v3);
}

//----- (0223376C) --------------------------------------------------------
uint *__fastcall Function_223376c(int a1, int a2)
{
  *(uint *)(a1 + 1324) = a2;
  *(uint *)(a1 + 1328) = 0;
  return AddTaskToTaskList2((int)Function_2233750, a1 + 1324, 4u);
}

//----- (02233790) --------------------------------------------------------
int __fastcall Function_2233790(int a1)
{
  return *(uint *)(a1 + 1328);
}

//----- (02233798) --------------------------------------------------------
int __fastcall Function_2233798(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 28);
  if ( result )
  {
    result = Function_2234534(a2);
    if ( result != 1 )
    {
      result = 1316;
      if ( *(uint *)(v2 + 1316) != 1 )
      {
        *(uint *)(v2 + 1316) = 1;
        Function_2008a94(*(uint *)(v2 + 100));
        Function_200c7ec(*(int **)(v2 + 28));
        Function_200c800();
        result = 1316;
        *(uint *)(v2 + 1316) = 0;
      }
    }
  }
  return result;
}

//----- (022337D4) --------------------------------------------------------
uint *__fastcall Function_22337d4(int a1)
{
  int v1;
  uint *result;

  v1 = a1;
  result = AddTaskToTaskList2((int)Function_2233798, a1, 5u);
  *(uint *)(v1 + 16748) = result;
  return result;
}

//----- (022337F0) --------------------------------------------------------
BOOL __fastcall Function_22337f0(int a1, int a2, int a3)
{
  return (uint)Function_2248598(*(uint *)(a1 + 2096), a2, a3, a1 + 2100, a1 + 2102) > 1;
}

//----- (0223381C) --------------------------------------------------------
int __fastcall Function_223381c(int result, int a2)
{
  *(uint *)(result + 2164) = a2;
  return result;
}

//----- (02233828) --------------------------------------------------------
int __fastcall Function_2233828(int result, uint *a2)
{
  int v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  uint v7;
  int v8;
  int v9;

  v2 = result + 2228;
  v9 = result;
  if ( *a2 != 1 )
  {
    v3 = Function_224112c();
    v4 = 0;
    *(uint *)(v2 + 14468) = ((int (__fastcall *)(int, int, int))dword_222BE20[0])(v3, v2 + 7508, 30);
    result = *(uint *)(v2 + 14468);
    if ( result > 0 )
    {
      v6 = v9;
      v7 = v9 + 9856;
      do
      {
        if ( !*(uint *)(v6 + 9736) )
          ErrorHandler();
        MI_CpuCopy8(*(uint *)(v6 + 9736), v7, 0xE4u, v5);
        v8 = v9 + v4++;
        *(uchar *)(v8 + 16700) = *(uchar *)(*(uint *)(v6 + 9736) + 167);
        v6 += 4;
        result = *(uint *)(v2 + 14468);
        v7 += 228;
      }
      while ( v4 < result );
    }
  }
  return result;
}

//----- (022338A8) --------------------------------------------------------
int *__fastcall Function_22338a8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *result;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = 0;
  v6 = a1;
  do
  {
    Function_202f298(*(uint *)(v4 + 2096), 0x66u, &v8, 0, v5);
    switch ( (uchar)v8 )
    {
      case 0:
        *(uint *)(v6 + 2172) = 0;
        *(uint *)(v6 + 2188) = 0;
        if ( !v5 )
        {
          *(uint *)(v6 + 2188) = Function_2030a80(0x66u);
          Function_2030aa0(*(uint *)(v6 + 2188), *(uint *)(v4 + 2096));
        }
        break;
      case 1:
        *(uint *)(v6 + 2172) = Function_202fd88(0x66u);
        if ( v5 )
        {
          *(uint *)(v6 + 2188) = Function_202fdb8(0x66u);
        }
        else
        {
          *(uint *)(v6 + 2188) = Function_2030a80(0x66u);
          Function_2030aa0(*(uint *)(v6 + 2188), *(uint *)(v4 + 2096));
        }
        break;
      case 2:
        *(uint *)(v6 + 2172) = 0;
        *(uint *)(v6 + 2188) = 0;
        if ( !v5 )
        {
          *(uint *)(v6 + 2188) = Function_2030a80(0x66u);
          Function_2030aa0(*(uint *)(v6 + 2188), *(uint *)(v4 + 2096));
        }
        break;
      case 3:
        *(uint *)(v6 + 2172) = 0;
        *(uint *)(v6 + 2188) = 0;
        if ( !v5 )
        {
          *(uint *)(v6 + 2188) = Function_2030a80(0x66u);
          Function_2030aa0(*(uint *)(v6 + 2188), *(uint *)(v4 + 2096));
        }
        break;
      default:
        break;
    }
    result = (int *)Function_202f250();
    if ( result == (int *)1 )
      result = Function_202f22c();
    ++v5;
    v6 += 4;
  }
  while ( v5 < 4 );
  return result;
}

//----- (022339A0) --------------------------------------------------------
int __fastcall Function_22339a0(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = 0;
  v2 = a1;
  do
  {
    v3 = *(uint *)(v2 + 2172);
    if ( v3 )
    {
      free(v3);
      *(uint *)(v2 + 2172) = 0;
    }
    result = *(uint *)(v2 + 2188);
    if ( result )
    {
      free(result);
      result = 2188;
      *(uint *)(v2 + 2188) = 0;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 < 4 );
  return result;
}

//----- (022339DC) --------------------------------------------------------
int __fastcall Function_22339dc(uint *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = (int *)a1[6];
  v2 = a1[7];
  v3 = a1[10];
  v4 = Function_2079fd0();
  Function_200cd7c(v3, 2u, v1, v2, 19, v4, 0, 3, 1, 100000);
  v5 = Function_2079fdc();
  Function_200ce0c(v1, v2, 19, v5, 0, 100000);
  v6 = Function_2079fe8();
  return Function_200ce3c(v1, v2, 19, v6, 0, 100000);
}

//----- (02233A44) --------------------------------------------------------
int __fastcall Function_2233a44(int a1)
{
  int v1;

  v1 = a1;
  Function_200d080(*(uint *)(a1 + 28), 100000);
  Function_200d090(*(uint *)(v1 + 28), 100000);
  return Function_200d0a0(*(uint *)(v1 + 28), 100000);
}

//----- (02233A68) --------------------------------------------------------
int *__fastcall Function_2233a68(int a1, int a2, int a3)
{
  return LoadFromNARC_8(19, 0x66u, a3, (int)LoadFromNARC_8);
}

//----- (02233A74) --------------------------------------------------------
uint __fastcall Function_2233a74(int *a1)
{
  return Call_FS_CloseFile(a1);
}

//----- (02233A7C) --------------------------------------------------------
int *__fastcall Function_2233a7c(int a1, int a2, int a3, uint a4, int a5, int a6)
{
  int v6;
  uint v7;
  uint *v8;
  int v9;
  uint v11;
  int *v12;
  char v13;
  int v14;
  short v15;
  short v16;
  short v17;
  short v18;
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

  v6 = a3;
  v14 = a2;
  v7 = a4;
  v8 = *(uint **)(a1 + 24);
  v9 = *(uint *)(a1 + 28);
  if ( !a4 )
    return 0;
  v11 = Function_2079d8c(a4, a6, a5);
  Function_200d8e8(v8, v9, v14, v11, 0, 1, v6 + 100000);
  v15 = 0;
  v16 = -48;
  v17 = 0;
  v18 = 0;
  v21 = 1;
  v19 = 0;
  v20 = 0;
  v28 = 0;
  v29 = 0;
  v26 = -1;
  v22 = v6 + 100000;
  v27 = -1;
  v23 = 100000;
  v24 = 100000;
  v25 = 100000;
  v12 = Function_200ce6c(v8, v9, &v15);
  v13 = Function_2079edc(v7, a5, a6);
  Function_200d430(v12, v13 + 4);
  Function_200d364(v12, 1u);
  Function_200d330(v12);
  return v12;
}

//----- (02233B24) --------------------------------------------------------
uint __fastcall Function_2233b24(uint result, int a2, int a3)
{
  int v3;

  v3 = a3;
  if ( a3 )
  {
    Function_200d070(*(uint *)(result + 28), a2 + 100000);
    result = Function_200d0f4(v3);
  }
  return result;
}

//----- (02233B40) --------------------------------------------------------
uint __fastcall Function_2233b40(int a1, int a2, int a3)
{
  uint result;

  if ( a3 )
    result = Function_200d0f4(a3);
  return result;
}

//----- (02233B50) --------------------------------------------------------
uint __fastcall Function_2233b50(int a1, int a2)
{
  short *v2;
  int v3;
  char *v4;
  int v5;
  short v6;
  char *v7;
  int v8;
  ushort *v9;
  char *v10;
  int *v11;
  ushort *v12;
  ushort *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint v19;
  ushort *v20;
  int v21;
  int v22;
  ushort *v23;
  ushort *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  uint v30;
  int v31;
  uint v32;
  int v33;
  int v34;
  int v35;
  int v36;
  ushort *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v47;
  int v48;
  int v49;
  uint *v50;
  int v51;
  int v52;
  int v53;
  ushort *v54;
  ushort *v55;
  ushort *v56;
  int v57;
  int v58;
  int v59;
  char v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  char v66;

  v2 = &word_22489D0;
  v3 = a2;
  v47 = a1;
  v4 = &v66;
  v5 = 20;
  do
  {
    v6 = *v2;
    ++v2;
    *(ushort *)v4 = v6;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v50 = (uint *)&v60;
  *(uint *)&v60 = 20;
  v61 = 20;
  v62 = 20;
  v63 = 10;
  v64 = 20;
  v65 = 20;
  v57 = 1;
  v58 = 0;
  v7 = &v66;
  v8 = v47 + 60;
  do
  {
    if ( *(ushort *)v7 == 255 )
      break;
    v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), *v50);
    Function_201a7a0(v8);
    Function_201a7e8(
      *(uint **)(v3 + 36),
      v8,
      2,
      *(ushort *)v7,
      *((ushort *)v7 + 1),
      *((ushort *)v7 + 2),
      *((ushort *)v7 + 3),
      14,
      v57);
    Function_201ada4_ClearTextBox(v8, 0);
    Function_223429c(v8, v9);
    Function_201d78c(v8, 0);
    Function_201a9a4(v8);
    v57 += *((short *)v7 + 2) * *((short *)v7 + 3);
    Function_20237bc_FreeMsg((int)v9, *((short *)v7 + 2));
    v7 += 8;
    ++v50;
    v8 += 16;
    ++v58;
  }
  while ( v58 < 5 );
  v10 = *(char **)v47;
  v11 = (int *)Function_2231690(0x66u);
  v12 = Function_2030b94(v10, 0x66u);
  Function_22349a8(v3, v12);
  v13 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 7u);
  v14 = Function_2023790(255, 0x66u);
  Function_200b48c(v11, 0, (int)v12);
  Function_200c388((uint *)v11, v14, (int)v13);
  Function_201ada4_ClearTextBox(v47 + 60, 0);
  Function_223429c(v47 + 60, v14);
  Function_201d78c(v47 + 60, 0);
  Function_201a9a4(v47 + 60);
  Function_20237bc_FreeMsg((int)v12, v15);
  Function_20237bc_FreeMsg((int)v13, v16);
  Function_20237bc_FreeMsg(v14, v17);
  Function_200c41c((uint *)v11, v18);
  v19 = Function_202fe98(*(uint *)(v47 + 4), 3u, 0);
  v20 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), v19 + 132);
  Function_201ada4_ClearTextBox(v47 + 76, 0);
  Function_201d78c(v47 + 76, 0);
  Function_201a9a4(v47 + 76);
  Function_20237bc_FreeMsg((int)v20, v21);
  Function_200c41c((uint *)v11, v22);
  v59 = Function_202fe98(*(uint *)(v47 + 4), 2u, 0);
  if ( v59 )
  {
    v23 = (ushort *)Function_2023790(255, 0x66u);
    v24 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 9u);
    v25 = Function_2023790(255, 0x66u);
    Function_20238a0(v23, v59, 4, 0, 1);
    Function_200b48c(v11, 0, (int)v23);
    Function_200c388((uint *)v11, v25, (int)v24);
    Function_201ada4_ClearTextBox(v47 + 92, 0);
    Function_223429c(v47 + 92, v25);
    Function_201d78c(v47 + 92, 0);
    Function_201a9a4(v47 + 92);
    Function_20237bc_FreeMsg((int)v23, v26);
    Function_20237bc_FreeMsg((int)v24, v27);
    Function_20237bc_FreeMsg(v25, v28);
    Function_200c41c((uint *)v11, v29);
  }
  else
  {
    Function_201ada4_ClearTextBox(v47 + 108, 0);
    Function_201a9a4(v47 + 108);
  }
  v30 = Function_202fe98(*(uint *)(v47 + 4), 4u, 0);
  v49 = v31;
  v56 = (ushort *)Function_2023790(255, 0x66u);
  v55 = (ushort *)Function_2023790(255, 0x66u);
  v54 = (ushort *)Function_2023790(255, 0x66u);
  v48 = v47 + 124;
  v53 = ull_mod(v30, v49, 100000LL);
  ll_udiv();
  v52 = ull_mod(v32, v33, 100000LL);
  ll_udiv();
  v51 = v34;
  v35 = u32_div_f(v34, 10);
  u32_div_f(v35, 10);
  if ( v36 || !(v30 | v49) )
    v37 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 0xBu);
  else
    v37 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 0xCu);
  v38 = Function_2023790(255, 0x66u);
  Function_20238a0(v56, v53, 5, 2, 1);
  Function_20238a0(v55, v52, 5, 2, 1);
  Function_20238a0(v54, v51, 2, 2, 1);
  Function_200b48c(v11, 2u, (int)v56);
  Function_200b48c(v11, 1u, (int)v55);
  Function_200b48c(v11, 0, (int)v54);
  Function_200c388((uint *)v11, v38, (int)v37);
  Function_201ada4_ClearTextBox(v48, 0);
  Function_223429c(v48, v38);
  Function_201d78c(v48, 0);
  Function_201a9a4(v48);
  Function_20237bc_FreeMsg((int)v56, v39);
  Function_20237bc_FreeMsg((int)v55, v40);
  Function_20237bc_FreeMsg((int)v54, v41);
  Function_20237bc_FreeMsg((int)v37, v42);
  Function_20237bc_FreeMsg(v38, v43);
  Function_200c41c((uint *)v11, v44);
  return Function_200b3f0((uint *)v11, v45);
}

//----- (02233F74) --------------------------------------------------------
uint __fastcall Function_2233f74(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = a1 + 60;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 5 );
  return result;
}

//----- (02233F94) --------------------------------------------------------
int __fastcall Function_2233f94(int a1)
{
  int v1;

  v1 = Function_202fe98(a1, 3u, 0);
  if ( v1 <= 26 )
  {
    if ( v1 < 26 )
    {
      switch ( (uchar)v1 )
      {
        case 0xE:
        case 0x11:
        case 0x14:
        case 0x17:
          return 1;
        default:
          return 0;
      }
      return 0;
    }
    return 1;
  }
  if ( v1 > 29 )
  {
    if ( v1 == 32 )
      return 1;
  }
  else if ( v1 == 29 )
  {
    return 1;
  }
  return 0;
}

//----- (02233FE0) --------------------------------------------------------
int __fastcall Function_2233fe0(int a1)
{
  return Function_2233f94(*(uint *)(a1 + 4));
}

//----- (02233FEC) --------------------------------------------------------
int __fastcall Function_2233fec(int a1)
{
  int result;

  if ( Function_2233fe0(a1) == 1 )
    result = 81;
  else
    result = 82;
  return result;
}

//----- (02234000) --------------------------------------------------------
int __fastcall Function_2234000(int a1, int a2, int a3, int a4)
{
  const short *v4;
  char *v5;
  int v6;
  short v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  char *v15;
  uint v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  int v21;
  int *v22;
  char *v23;
  int v24;
  int v25;
  char v26;
  int result;
  int v28;
  int v29;
  uint v30;
  uint *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int *v36;
  int v37;
  int v38;
  uint v39;
  char v40[48];
  char v41[48];
  short v42;
  short v43;
  short v44;
  short v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  char v57[96];
  int v58;

  v58 = a4;
  v28 = a1;
  v29 = a2;
  v4 = aXhph;
  v38 = 0;
  v5 = v57;
  v6 = 48;
  do
  {
    v7 = *v4;
    ++v4;
    *(ushort *)v5 = v7;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  v36 = *(int **)(v29 + 24);
  v35 = *(uint *)(v29 + 28);
  v8 = *(uint *)(v29 + 40);
  v9 = Function_2079fd0();
  Function_200cd7c(v8, 2u, v36, v35, 19, v9, 0, 3, 1, 100000);
  v10 = Function_2079fdc();
  Function_200ce0c(v36, v35, 19, v10, 0, 100000);
  v11 = Function_2079fe8();
  Function_200ce3c(v36, v35, 19, v11, 0, 100000);
  v12 = 0;
  v34 = 6;
  v32 = 6;
  v33 = 0;
  v37 = 0;
  if ( Function_2233fe0(v28) == 1 )
  {
    v34 = 3;
    v32 = 3;
    v37 = 1;
  }
  do
  {
    v13 = v33;
    if ( v33 < v32 )
    {
      v14 = &v41[4 * v12];
      v15 = &v40[4 * v12];
      do
      {
        *(uint *)v14 = 255;
        v39 = Function_202fe98(*(uint *)(v28 + 4), 0, v13);
        v16 = Function_202fe98(*(uint *)(v28 + 4), 1u, v13);
        if ( v39 )
        {
          *(uint *)v14 = v39;
          v14 += 4;
          *(uint *)v15 = v16;
          v15 += 4;
          ++v12;
        }
        ++v13;
      }
      while ( v13 < v32 );
    }
    v17 = v12;
    if ( v12 < v32 )
    {
      v18 = &v41[4 * v12];
      v19 = &v40[4 * v12];
      do
      {
        *(uint *)v18 = 0;
        v18 += 4;
        ++v17;
        *(uint *)v19 = 0;
        v19 += 4;
        ++v12;
      }
      while ( v17 < v32 );
    }
    v33 += v34;
    v32 += v34;
  }
  while ( v32 <= 12 );
  v31 = (uint *)v41;
  v20 = v28;
  v21 = 0;
  v22 = (int *)v40;
  v23 = &v57[48 * v37];
  do
  {
    *(uint *)(v28 + 12) = 0;
    v30 = *v31;
    if ( *v31 )
    {
      v24 = *v22;
      v25 = Function_2079d8c(v30, 0, *v22);
      Function_200d888(v36, v35, 19, v25, 0, 1, v38 + 100000);
      v42 = *(ushort *)v23 + 8;
      v43 = *((ushort *)v23 + 1) - 12;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 1;
      v55 = 0;
      v56 = 0;
      v49 = v38 + 100000;
      v50 = 100000;
      v51 = 100000;
      v52 = 100000;
      v53 = -1;
      v54 = -1;
      *(uint *)(v20 + 12) = Function_200ce6c(*(uint **)(v29 + 24), *(uint *)(v29 + 28), &v42);
      v26 = Function_2079edc(v30, v24, 0);
      Function_200d430(*(int **)(v20 + 12), v26 + 4);
      Function_200d364(*(int **)(v20 + 12), 1u);
      Function_200d330(*(int **)(v20 + 12));
      Function_200d474(*(int **)(v20 + 12), 12 - v21);
      v20 += 4;
      ++v38;
    }
    ++v21;
    v28 += 4;
    ++v22;
    result = (int)(v31 + 1);
    v23 += 4;
    ++v31;
  }
  while ( v21 < 12 );
  return result;
}

//----- (02234214) --------------------------------------------------------
int __fastcall Function_2234214(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  Function_2233b50(a1, a2);
  return Function_2234000(v2, v3, v4, v5);
}

//----- (02234228) --------------------------------------------------------
uint __fastcall Function_2234228(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v2 = a2;
  v6 = a1;
  Function_200d080(*(uint *)(a2 + 28), 100000);
  Function_200d090(*(uint *)(v2 + 28), 100000);
  Function_200d0a0(*(uint *)(v2 + 28), 100000);
  v3 = 0;
  v4 = v6;
  do
  {
    if ( *(uint *)(v4 + 12) )
    {
      Function_200d070(*(uint *)(v2 + 28), v3 + 100000);
      Function_200d0f4(*(uint *)(v4 + 12));
      *(uint *)(v4 + 12) = 0;
    }
    ++v3;
    v4 += 4;
  }
  while ( v3 < 12 );
  return Function_2233f74(v6);
}

//----- (0223427C) --------------------------------------------------------
uint *__fastcall Function_223427c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *result;

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    result = *(uint **)(v2 + 12);
    if ( result )
      result = (uint *)Function_200d3f4(result, v3);
    ++v4;
    v2 += 4;
  }
  while ( v4 < 12 );
  return result;
}

//----- (0223429C) --------------------------------------------------------
int __fastcall Function_223429c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = Function_2002d7c(0, a2, 0);
  return (8 * Function_201c294(v2) - v3) / 2;
}

//----- (022342BC) --------------------------------------------------------
int __fastcall Function_22342bc(int result)
{
  *(ushort *)(result + 2100) = 0;
  *(ushort *)(result + 2102) = 0;
  return result;
}

//----- (022342CC) --------------------------------------------------------
int __fastcall Function_22342cc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char v7;
  char v8;
  char v9;
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = LoadVariableAreaAdress_a_3(*(uint *)(a1 + 2096));
  Function_20279a8(v5, *(uint *)(v4 + 2156) + 2, &v9, &v8, &v7);
  Function_20279d0(v5, *(uint *)(v4 + 2156) + 2, -1, -1, v7);
  return 1;
}

//----- (02234314) --------------------------------------------------------
uint Function_2234314()
{
  Function_2019060(0, 1);
  Function_2019060(1u, 3);
  Function_2019060(2u, 0);
  Function_2019060(3u, 1);
  Function_2019060(4u, 1);
  Function_2019060(5u, 3);
  Function_2019060(6u, 0);
  return Function_2019060(7u, 1);
}

//----- (02234358) --------------------------------------------------------
int __fastcall Function_2234358(int a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;

  v4 = (uint *)a2;
  v5 = a3;
  v6 = a4;
  if ( !*(uint *)(a1 + 68) )
    Function_208b9e0(a2, 1);
  Function_208b8b0((int)v4, 1);
  Function_208b948(v4, v5, v6);
  return Function_208b8b8((int)v4, v5, v6);
}

//----- (0223438C) --------------------------------------------------------
int __fastcall Function_223438c(ull a1)
{
  int v1;
  ull v2;

  v1 = 1;
  if ( a1 > 1 )
  {
    do
    {
      ll_udiv();
      ++v1;
    }
    while ( v2 > 1 );
  }
  return v1;
}

//----- (022343B8) --------------------------------------------------------
int __fastcall Function_22343b8(int a1, uint a2, uchar a3)
{
  return Function_200710c(*(uint *)(a1 + 20), a2, *(uint **)(a1 + 36), a3, 0, 0, 0, 102);
}

//----- (022343D8) --------------------------------------------------------
int __fastcall Function_22343d8(int *a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = ++a2[4184];
  if ( v3 < 7 )
    return Function_208ba08(v2[4185], (short)(2 * v3 + 6), (short)(2 * v3 + 6));
  Call_RemoveTaskFromTaskList(a1);
  v2[4184] = 0;
  v2[4183] = 0;
  Function_208ba54(v2[4185]);
  Function_208ba08(v2[4185], 0, 0);
  Function_208b8b0(v2[4185], 0);
  return Function_208b9e0(v2[4185], 0);
}

//----- (02234440) --------------------------------------------------------
int __fastcall Function_2234440(int a1)
{
  uint *v1;
  int *v2;
  int v3;
  int *v4;
  int v6;
  int v7;

  v1 = (uint *)a1;
  if ( *(uint *)(a1 + 16732) == 1 )
  {
    v2 = *(int **)(a1 + 16744);
    if ( v2 )
      Call_RemoveTaskFromTaskList(v2);
    v1[4186] = 0;
  }
  if ( byte_21BF6E1 )
    v3 = 444;
  else
    v3 = 445;
  v1[4185] = v1[v3];
  v1[4183] = 1;
  v1[4184] = 0;
  Function_20227c0(&v7, &v6);
  Function_208ba30(v1[4185]);
  Function_208b8b0(v1[4185], 1);
  Function_208b9e0(v1[4185], 1);
  Function_208b8b8(v1[4185], v7, v6);
  Function_208b948((uint *)v1[4185], (short)v7, (short)v6);
  v1[4186] = AddTaskToTaskList1((int)Function_22343d8, (int)v1, 0x1000u);
  v4 = (int *)v1[4186];
  if ( v4 )
    return Function_22343d8(v4, v1);
  v1[4183] = 0;
  Function_208b9e0(v1[4185], 0);
  return ErrorHandler();
}

//----- (02234520) --------------------------------------------------------
int __fastcall Function_2234520(int a1)
{
  Function_2234440(a1);
  return Function_2005748(0x563u);
}

//----- (02234534) --------------------------------------------------------
int __fastcall Function_2234534(int a1)
{
  return *(uint *)(a1 + 1320);
}

//----- (02234540) --------------------------------------------------------
int __fastcall Function_2234540(int result, int a2)
{
  *(uint *)(result + 1320) = a2;
  return result;
}

//----- (0223454C) --------------------------------------------------------
int __fastcall Function_223454c(int a1, int a2, int a3, int a4, short a5, short a6, short a7, short a8, uint a9, int a10)
{
  int v10;
  int v11;
  int v12;
  uint v13;
  char v15;

  v10 = a3;
  v11 = a2;
  v12 = a1;
  v13 = a4;
  *(uint *)(a2 + 4) = Function_22313e0(a1, a3, a3, a4);
  Function_223118c(v11, v12 + 20, v10);
  Function_223124c(v11, v12 + 20, v13);
  Function_200d4c4(*(int **)(v11 + 4), a5, a6);
  Function_20128c4(*(uint **)(v11 + 8), a7, a8, (int)&v15);
  Function_20129d0(*(uint **)(v11 + 8), a10);
  return Function_200d364(*(int **)(v11 + 4), a9);
}

//----- (022345A8) --------------------------------------------------------
uint __fastcall Function_22345a8(int a1)
{
  int v1;

  v1 = a1;
  Function_22312b0(a1);
  return Function_200d0f4(*(uint *)(v1 + 4));
}

//----- (022345B8) --------------------------------------------------------
int __fastcall Function_22345b8(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = a1;
  *(uint *)(v4 + 1284) = *(uint *)(v4 + 4);
  *(uint *)(v4 + 1288) = *(uint *)(v4 + 8);
  *(uint *)(v4 + 1292) = **(uint **)(v4 + 16);
  v5 = 194;
  *(uint *)(a1 + 1308) = 1;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      switch ( 1 )
      {
        case 0:
          v5 = 259;
          break;
        case 1:
          v5 = 260;
          break;
        case 2:
          v5 = 261;
          break;
        case 3:
          v5 = 262;
          break;
        case 4:
          v5 = 263;
          break;
        case 5:
          v5 = 264;
          break;
        case 6:
          v5 = 265;
          break;
        case 7:
          v5 = 266;
          break;
        case 8:
          v5 = 267;
          break;
        case 9:
          v5 = 268;
          break;
        default:
          ErrorHandler();
          break;
      }
    }
    else if ( a4 == 2 )
    {
      if ( a2 <= 8 )
        JUMPOUT(__CS__, (char *)&off_22346C2 + *((short *)&off_22346C2 + a2) + 2);
      switch ( 2 )
      {
        case 0:
          switch ( 2 )
          {
            case 0:
              goto LABEL_103;
            case 1:
              v5 = 195;
              break;
            case 2:
              v5 = 196;
              break;
            case 3:
              v5 = 197;
              break;
            case 4:
              v5 = 198;
              break;
            case 5:
              v5 = 199;
              break;
            default:
              ErrorHandler();
              break;
          }
          break;
        case 1:
          switch ( 2 )
          {
            case 0:
              v5 = 200;
              break;
            case 1:
              v5 = 201;
              break;
            case 2:
              v5 = 202;
              break;
            case 3:
              v5 = 203;
              break;
            default:
              ErrorHandler();
              break;
          }
          break;
        case 2:
          switch ( 2 )
          {
            case 0:
              v5 = 204;
              break;
            case 1:
              v5 = 205;
              break;
            case 2:
              v5 = 206;
              break;
            case 3:
              v5 = 207;
              break;
            case 4:
              v5 = 208;
              break;
            case 5:
              v5 = 209;
              break;
            case 6:
              v5 = 210;
              break;
            default:
              ErrorHandler();
              break;
          }
          break;
        case 3:
          switch ( 2 )
          {
            case 0:
              v5 = 211;
              break;
            case 1:
              v5 = 212;
              break;
            case 2:
              v5 = 213;
              break;
            case 3:
              v5 = 214;
              break;
            default:
              ErrorHandler();
              break;
          }
          break;
        case 4:
          if ( a3 )
          {
            if ( a3 == 1 )
            {
              v5 = 216;
            }
            else if ( a3 == 2 )
            {
              v5 = 217;
            }
            else
            {
              ErrorHandler();
            }
          }
          else
          {
            v5 = 215;
          }
          break;
        case 5:
          switch ( 2 )
          {
            case 0:
              v5 = 218;
              break;
            case 1:
              v5 = 219;
              break;
            case 2:
              v5 = 220;
              break;
            case 3:
              v5 = 221;
              break;
            case 4:
              v5 = 222;
              break;
            case 5:
              v5 = 223;
              break;
            default:
              ErrorHandler();
              break;
          }
          break;
        case 6:
          switch ( 2 )
          {
            case 0:
              v5 = 224;
              break;
            case 1:
              v5 = 225;
              break;
            case 2:
              v5 = 226;
              break;
            case 3:
              v5 = 227;
              break;
            case 4:
              v5 = 228;
              break;
            case 5:
              v5 = 229;
              break;
            case 6:
              v5 = 230;
              break;
            case 7:
              v5 = 231;
              break;
            default:
              ErrorHandler();
              break;
          }
          break;
        case 7:
          switch ( 2 )
          {
            case 0:
              v5 = 232;
              break;
            case 1:
              v5 = 233;
              break;
            case 2:
              v5 = 234;
              break;
            case 3:
              v5 = 235;
              break;
            default:
              ErrorHandler();
              break;
          }
          break;
        case 8:
          switch ( 2 )
          {
            case 0:
              v5 = 236;
              break;
            case 1:
              v5 = 237;
              break;
            case 2:
              v5 = 238;
              break;
            case 3:
              v5 = 239;
              break;
            default:
              ErrorHandler();
              break;
          }
          break;
        default:
          ErrorHandler();
          break;
      }
    }
  }
  else
  {
    switch ( 0 )
    {
      case 0:
        v5 = 244;
        break;
      case 1:
        v5 = 245;
        break;
      case 2:
        v5 = 246;
        break;
      case 3:
        v5 = 247;
        break;
      case 4:
        v5 = 248;
        break;
      case 5:
        v5 = 249;
        break;
      case 6:
        v5 = 250;
        break;
      case 7:
        v5 = 251;
        break;
      case 8:
        v5 = 252;
        break;
      case 9:
        v5 = 253;
        break;
      case 10:
        v5 = 254;
        break;
      case 11:
        v5 = 255;
        break;
      case 12:
        v5 = 256;
        break;
      case 13:
        v5 = 257;
        break;
      case 14:
        v5 = 258;
        break;
      default:
        ErrorHandler();
        break;
    }
  }
LABEL_103:
  *(uint *)(v4 + 1296) = v5;
  return *(uint *)(v4 + 1296);
}

//----- (022348B8) --------------------------------------------------------
uint *__fastcall Function_22348b8(int a1, uint a2, int a3, int a4)
{
  int v4;
  uint *result;

  v4 = a1;
  *(uint *)(a1 + 1284) = *(uint *)(a1 + 4);
  *(uint *)(a1 + 1288) = *(uint *)(a1 + 8);
  *(uint *)(a1 + 1292) = **(uint **)(a1 + 16);
  *(uint *)(a1 + 1300) = 0;
  *(uint *)(a1 + 1304) = 0;
  *(uint *)(a1 + 1296) = Function_22345b8(a1, a2, a3, a4);
  *(uint *)(v4 + 1308) = 1;
  result = *(uint **)(v4 + 16);
  *result = 18;
  return result;
}

//----- (022348FC) --------------------------------------------------------
uint *__fastcall Function_22348fc(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint *result;

  v1 = a1;
  v2 = a1[325];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      result = (uint *)Function_2022798();
      if ( result )
      {
        Function_2231b8c((int)v1);
        result = (uint *)1300;
        ++v1[325];
      }
    }
    else if ( a1[326] <= 0 )
    {
      result = (uint *)a1[4];
      *result = v1[323];
    }
    else
    {
      result = (uint *)1304;
      --v1[326];
    }
  }
  else if ( a1[326] >= 8 )
  {
    Function_2231aac((int)a1, a1[324]);
    result = (uint *)1300;
    ++v1[325];
  }
  else
  {
    v3 = a1[326] + 1;
    result = (uint *)1304;
    v1[326] = v3;
  }
  return result;
}

//----- (02234970) --------------------------------------------------------
int __fastcall Function_2234970(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  long long v8;
  int v9;

  v3 = a2;
  v4 = a3;
  v5 = 1;
  v6 = a1 + 4;
  do
  {
    v7 = *(uint *)(v6 + 2172);
    if ( v7 )
    {
      LODWORD(v8) = Function_202fe98(v7, 4u, 0);
      HIDWORD(v8) = v9 ^ v4;
      if ( v8 == v3 )
        return 1;
    }
    ++v5;
    v6 += 4;
  }
  while ( v5 < 4 );
  return 0;
}

//----- (022349A8) --------------------------------------------------------
uint __fastcall Function_22349a8(int a1, int a2)
{
  int v2;
  int v3;
  ushort *v4;
  int v5;

  v2 = a2;
  v3 = Function_224112c();
  v4 = (ushort *)Function_2023790(64, *(uint *)(v3 + 324));
  if ( !Function_2002db4(0, v2, v4) )
    Function_22349e4(v2, *(uint *)(v3 + 324));
  return Function_20237bc_FreeMsg((int)v4, v5);
}

//----- (022349E4) --------------------------------------------------------
ushort *__fastcall Function_22349e4(int a1, int a2)
{
  uint v2;
  ushort *v3;
  ushort **v4;

  v2 = a2;
  v3 = (ushort *)a1;
  Function_20237e8(a1, a2);
  v4 = (ushort **)LoadFromMsgNARC(1, 26, 10, v2);
  Function_200b1b8_CallMsgDecrypt(v4, 0x14Cu, v3);
  return Function_200b190((ushort *)v4);
}

//----- (02234A10) --------------------------------------------------------
uint __fastcall Function_2234a10(int a1)
{
  int v1;
  ushort *v2;
  int v3;

  v1 = a1;
  Function_201a7a0(a1 + 2212);
  Function_201a7e8(*(uint **)(v1 + 36), v1 + 2212, 2, 8, 16, 0x10u, 2u, 14, 300);
  Function_201ada4_ClearTextBox(v1 + 2212, 0);
  v2 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0xC0u);
  Function_223429c(v1 + 2212, (int)v2);
  Function_201d78c(v1 + 2212, 0);
  Function_20237bc_FreeMsg((int)v2, v3);
  Function_201a9a4(v1 + 2212);
  return Function_201ff0c(4u, 1);
}

//----- (02234A90) --------------------------------------------------------
uint __fastcall Function_2234a90(int a1)
{
  int v1;

  v1 = a1;
  Function_201acf4(a1 + 2212);
  Function_201a8fc(v1 + 2212);
  return Function_201ff0c(4u, 0);
}

//----- (02234AB4) --------------------------------------------------------
int __fastcall Function_2234ab4(uint *a1, int a2, char a3)
{
  uint *v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  ushort v8;
  int v9;
  int v10;
  int v11;
  ushort v12;
  int v13;
  int v14;
  int v15;
  ushort v16;
  int v17;
  int v18;
  int v19;
  ushort v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v3 = a1;
  v4 = a1[2];
  if ( v4 <= 6 )
    JUMPOUT(__CS__, (char *)&off_2234ACE + *((short *)&off_2234ACE + v4) + 2);
  switch ( a3 )
  {
    case 0:
      if ( Function_22300bc((int)a1) == 1 )
      {
        Function_222fb60(v3, 1);
      }
      else
      {
        Function_200f174(0, 1, 1, 0, 6, 1, 102);
        v8 = Function_22316d0((int)v3, v5, v6, v7);
        Function_2003a2c(v3[10], 2, 0xFFFEu, 0x10u, v8);
        v12 = Function_22316d0((int)v3, v9, v10, v11);
        Function_2003a2c(v3[10], 0, 0xBFFFu, 0x10u, v12);
        v16 = Function_22316d0((int)v3, v13, v14, v15);
        Function_2003a2c(v3[10], 3, 0x3FFEu, 0x10u, v16);
        v20 = Function_22316d0((int)v3, v17, v18, v19);
        Function_2003a2c(v3[10], 1, 0xFFFFu, 0x10u, v20);
        Function_208ba30(v3[445]);
        Function_208ba30(v3[444]);
        ++v3[2];
      }
      break;
    case 1:
      if ( Function_200f2ac() )
      {
        Function_208b948((uint *)v3[445], 128, 16);
        Function_208b8b8(v3[445], 128, 216);
        Function_208b9e0(v3[445], 1);
        Function_208b8b0(v3[445], 1);
        Function_2005748(0x55Eu);
        ++v3[2];
      }
      break;
    case 2:
      v21 = a1[3] + 1;
      v3[3] = v21;
      if ( v21 >= 25 )
      {
        v3[3] = 0;
        Function_208b948((uint *)v3[444], 128, -16);
        Function_208b8b8(v3[444], 128, 96);
        Function_208b9e0(v3[444], 1);
        Function_208b8b0(v3[444], 1);
        ++v3[2];
      }
      break;
    case 3:
      v22 = a1[3] + 1;
      a1[3] = v22;
      if ( v22 >= 18 )
      {
        Function_2234a10((int)a1);
        Function_208b9e0(v3[445], 0);
        v3[3] = 0;
        ++v3[2];
      }
      break;
    case 4:
      v23 = a1[3];
      if ( v23 >= 16 )
      {
        v3[2] = v4 + 1;
      }
      else
      {
        v3[3] = v23 + 4;
        Function_2003a2c(v3[10], 0, 0xF000u, v3[3], 0xFFFFu);
      }
      break;
    case 5:
      v24 = a1[3];
      if ( v24 <= 0 )
      {
        v3[2] = v4 + 1;
      }
      else
      {
        v3[3] = v24 - 4;
        Function_2003a2c(v3[10], 0, 0xF000u, v3[3], 0xFFFFu);
      }
      break;
    case 6:
      if ( Function_202278c() == 1 )
      {
        Function_2234a90((int)v3);
        Function_208b9e0(v3[444], 0);
        Function_208ba54(v3[445]);
        Function_208ba54(v3[444]);
        ++v3[2];
      }
      break;
    default:
      Function_222fb60(a1, 1);
      break;
  }
  return 0;
}

//----- (02234CDC) --------------------------------------------------------
int __fastcall Function_2234cdc(int a1)
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
  int v12;
  ushort v13;
  int v14;
  int v15;
  int v16;
  ushort v17;
  int v18;
  int v19;
  int v20;
  ushort v21;
  int v22;
  int v23;
  int v24;
  ushort v25;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( Function_22300bc(a1) == 1 )
      {
        if ( Function_200f2ac() == 1 )
          ++*(uint *)(v1 + 8);
      }
      else
      {
        v12 = *(uint *)(v1 + 12);
        if ( v12 )
        {
          *(uint *)(v1 + 12) = v12 - 2;
          v13 = Function_22316d0(v1, v9, v10, v11);
          Function_2003a2c(*(uint *)(v1 + 40), 2, 0xFFFEu, *(uint *)(v1 + 12), v13);
          v17 = Function_22316d0(v1, v14, v15, v16);
          Function_2003a2c(*(uint *)(v1 + 40), 0, 0xFFFFu, *(uint *)(v1 + 12), v17);
          v21 = Function_22316d0(v1, v18, v19, v20);
          Function_2003a2c(*(uint *)(v1 + 40), 3, 0x3FFEu, *(uint *)(v1 + 12), v21);
          v25 = Function_22316d0(v1, v22, v23, v24);
          Function_2003a2c(*(uint *)(v1 + 40), 1, 0xFFFFu, *(uint *)(v1 + 12), v25);
        }
        else
        {
          Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, 0x10u, *(uint *)(v1 + 88));
          Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
          ++*(uint *)(v1 + 8);
        }
      }
    }
    else if ( v2 == 2 )
    {
      if ( *(uint *)a1 )
        Function_200710c(*(uint *)(a1 + 20), 0x37u, *(uint **)(a1 + 36), 5u, 0, 0, 0, 102);
      else
        Function_200710c(*(uint *)(a1 + 20), 0x45u, *(uint **)(a1 + 36), 5u, 0, 0, 0, 102);
      ++*(uint *)(v1 + 8);
    }
    else if ( *(uint *)(a1 + 1828) >= 3 )
    {
      Function_222fb60((uint *)a1, 2);
    }
  }
  else
  {
    Function_2234540(a1, 1);
    Function_2230330((uint *)v1);
    Function_2230464(v1, v3, v4, v5);
    Function_22306b8((uint *)v1);
    Function_223088c((uint *)v1, v6, v7, v8);
    Function_2230e80(v1);
    Function_2230a5c(v1);
    Function_2230af0(v1);
    Function_2234540(v1, 0);
    if ( Function_22300bc(v1) == 1 )
    {
      if ( *(uint *)v1 )
        Function_200710c(*(uint *)(v1 + 20), 0x37u, *(uint **)(v1 + 36), 5u, 0, 0, 0, 102);
      else
        Function_200710c(*(uint *)(v1 + 20), 0x45u, *(uint **)(v1 + 36), 5u, 0, 0, 0, 102);
      Function_208b948(*(uint **)(v1 + 1776), 128, 224);
      Function_208b8b8(*(uint *)(v1 + 1776), 128, 224);
      Function_208b9e0(*(uint *)(v1 + 1776), 0);
      Function_208b8b0(*(uint *)(v1 + 1776), 1);
      Function_222fb44(v1, *(uint *)(v1 + 2108), 1, *(uint **)(v1 + 16));
    }
    else
    {
      Function_2005748(0x55Bu);
      *(uint *)(v1 + 12) = 16;
      ++*(uint *)(v1 + 8);
    }
  }
  return 0;
}

//----- (02234EF8) --------------------------------------------------------
int __fastcall Function_2234ef8(int a1)
{
  uint *v1;
  int v2;

  v1 = (uint *)a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_2003a2c(*(uint *)(a1 + 40), 1, 2u, *(uint *)(a1 + 12), *(uint *)(a1 + 88));
      ++v1[2];
    }
    else if ( v2 == 2 )
    {
      Function_2003a2c(*(uint *)(a1 + 40), 1, 2u, --*(uint *)(a1 + 12), *(uint *)(a1 + 88));
      if ( !v1[3] )
        ++v1[2];
    }
    else
    {
      Function_222fb60((uint *)a1, 3);
    }
  }
  else
  {
    Function_208b948(*(uint **)(a1 + 1776), 128, 96);
    Function_208b8b8(v1[444], 128, 96);
    Function_208b9e0(v1[444], 1);
    Function_208b8b0(v1[444], 1);
    ++v1[3];
    Function_2003a2c(v1[10], 1, 2u, 16 - *((uchar *)v1 + 12), v1[22]);
    if ( v1[3] == 2 )
    {
      v1[3] = 15;
      ++v1[2];
    }
  }
  return 0;
}

//----- (02234FCC) --------------------------------------------------------
int __fastcall Function_2234fcc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;

  v7 = a4;
  v4 = a1;
  v5 = Function_2235008();
  Function_2230e74(*(int **)(v4 + 1532), (ushort *)&v7 + 1, &v7);
  Function_208b8b8(*(uint *)(v4 + 1776), HIWORD(v7) + 16, v7);
  return v5;
}

//----- (02235008) --------------------------------------------------------
int __fastcall Function_2235008(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  short v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  ushort v12;
  uint v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v19;
  int v20;
  int v21;
  int v22;
  short v23[2];
  short v24[2];
  short v25[2];
  short v26[2];
  char v27;

  v1 = a1;
  v2 = a1[2];
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      v17 = v1[536];
      Function_2230e74((int *)v1[10 * v1[441] + 383], v24, v23);
      Function_208b948((uint *)v1[444], (short)(v24[0] + 16), v23[0]);
      Function_208b8b8(v1[444], v24[0] + 16, v23[0]);
      Function_208b9e0(v1[444], 0);
      Function_222ff7c((int)v1);
      free(v17);
      return 1;
    }
    v7 = v1[536];
    if ( *(uchar *)(v1[536] + 80) )
      Function_2003a2c(v1[10], 2, 0xCu, --*(uchar *)(v7 + 80), v1[22]);
    v20 = 0;
    v21 = 0;
    v8 = v1[440];
    if ( v8 > 0 )
    {
      v9 = v1;
      do
      {
        if ( *(uint *)v7 )
        {
          --*(uint *)v7;
        }
        else
        {
          Function_2230e74((int *)v9[383], v26, v25);
          v10 = *(short *)(v7 + 8);
          if ( v25[0] == v10 )
          {
            ++v20;
          }
          else
          {
            if ( v25[0] - 8 <= v10 )
              v25[0] = *(ushort *)(v7 + 8);
            else
              v25[0] -= 8;
            v11 = v25[0] << 12;
            v12 = s32_div_f(0xFFFF * *(uint *)(v7 + 4), 360);
            v13 = Function_201d250(v12);
            v14 = *(uint *)(v7 + 12);
            *(uint *)(v7 + 4) -= 4;
            Function_200d614((uint *)v9[383], v14 + 16 * v13, v11, v15);
            Function_20128c4((uint *)v9[388], 36, -8, v16);
          }
        }
        v7 += 16;
        ++v21;
        v8 = v1[440];
        v9 += 10;
      }
      while ( v21 < v8 );
    }
    if ( v20 == v8 )
      ++v1[2];
  }
  else
  {
    v3 = malloc(0x66u, 84);
    MI_CpuFill8((ushort *)v3, 0, 0x54u);
    v1[536] = v3;
    *(uchar *)(v3 + 80) = 16;
    Function_2003a2c(v1[10], 2, 0xCu, *(uchar *)(v3 + 80), v1[22]);
    v22 = 0;
    if ( v1[440] > 0 )
    {
      v4 = 25;
      v19 = 0;
      v5 = v1;
      do
      {
        *(uint *)v3 = v19;
        *(uint *)(v3 + 4) = 90;
        *(ushort *)(v3 + 8) = v4 + 16 * (5 - *((ushort *)v1 + 880));
        Function_2230e68((int *)v5[383], 42, (short)(16 * (5 - *((ushort *)v1 + 880)) + 169));
        Function_200d638((int *)v5[383], (uint *)(v3 + 12), &v27);
        Function_200d614((uint *)v5[383], *(uint *)(v3 + 12), (16 * (5 - v1[440]) + 169) << 12, v1[440]);
        Function_20128c4((uint *)v5[388], 36, -8, v6);
        Function_20129d0((uint *)v5[388], 1);
        v3 += 16;
        v19 += 4;
        v4 += 36;
        ++v22;
        v5 += 10;
      }
      while ( v22 < v1[440] );
    }
    ++v1[2];
  }
  return 0;
}

//----- (02235278) --------------------------------------------------------
int __fastcall Function_2235278(uint *a1)
{
  uint *v1;
  int v2;
  int result;

  v1 = a1;
  if ( Function_2022798() )
  {
    if ( !v1[551] )
      Function_2231a1c((int)v1);
  }
  if ( *v1 )
    goto LABEL_13;
  v2 = Function_22352dc();
  if ( v2 == 1 )
  {
    Function_2005748(0x563u);
    Function_222fb60(v1, 7);
    return 0;
  }
  if ( v2 != 2 )
  {
LABEL_13:
    Function_2230054((int)v1);
    result = 0;
  }
  else
  {
    Function_2005748(0x563u);
    Function_222fb60(v1, 8);
    result = 0;
  }
  return result;
}

//----- (022352DC) --------------------------------------------------------
int Function_22352dc()
{
  if ( Function_2022734((uchar *)&dword_2248BE8) )
    return 1;
  if ( Function_2022734((uchar *)&dword_2248BEC) )
    return 2;
  return 0;
}

//----- (02235308) --------------------------------------------------------
int __fastcall Function_2235308(uint *a1)
{
  uint *v1;

  v1 = a1;
  ErrorHandler();
  v1[17] = 1;
  Function_222fb60(v1, 0);
  return Function_2235278(v1);
}

//----- (02235324) --------------------------------------------------------
int __fastcall Function_2235324(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  ushort v8;
  int v9;
  int v10;
  int v11;
  ushort v12;
  int v13;
  int v14;
  int v15;
  ushort v16;
  int v17;
  int v18;
  int v19;
  ushort v20;
  int v21;

  v4 = a1;
  v5 = a1[2];
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = a1[3];
      if ( v6 == 16 )
      {
        a1[3] = 16;
        ++a1[2];
      }
      else
      {
        v7 = v6 + 2;
        a1[3] = v7;
        v8 = Function_22316d0((int)a1, v7, a3, a4);
        Function_2003a2c(v4[10], 2, 0xFFFEu, v4[3], v8);
        v12 = Function_22316d0((int)v4, v9, v10, v11);
        Function_2003a2c(v4[10], 0, 0xFFFFu, v4[3], v12);
        v16 = Function_22316d0((int)v4, v13, v14, v15);
        Function_2003a2c(v4[10], 3, 0x3FFEu, v4[3], v16);
        v20 = Function_22316d0((int)v4, v17, v18, v19);
        Function_2003a2c(v4[10], 1, 0xFFFFu, v4[3], v20);
      }
    }
    else if ( v5 == 2 )
    {
      v21 = a1[3];
      if ( v21 )
      {
        v4[3] = v21 - 4;
      }
      else
      {
        Function_200f174(0, 0, 0, 0, 6, 1, 102);
        ++v4[2];
      }
    }
    else if ( Function_200f2ac() == 1 )
    {
      Function_2234540((int)v4, 0);
      return 1;
    }
  }
  else
  {
    a1[21] = 0;
    a1[3] = 0;
    Function_208b9e0(a1[444], 0);
    Function_208b9e0(v4[445], 0);
    Function_2234540((int)v4, 1);
    ++v4[2];
  }
  return 0;
}

//----- (02235444) --------------------------------------------------------
int __fastcall Function_2235444(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2235008(a1) )
  {
    if ( v1[17] == 1 )
    {
      Function_208b9e0(v1[444], 0);
      Function_222fb60(v1, 0);
    }
    else
    {
      Function_222fb60(v1, 1);
    }
  }
  return 0;
}

//----- (02235478) --------------------------------------------------------
int __fastcall Function_2235478(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( a1[17] == 1 )
  {
    Function_208b9e0(a1[444], 0);
    Function_222fb60(v1, 0);
  }
  else
  {
    Function_222fb60(a1, 1);
  }
  return 0;
}

//----- (022354A4) --------------------------------------------------------
uint *__fastcall Function_22354a4(int *a1, short *a2, int a3, int a4)
{
  short *v4;
  int *v5;
  int v6;
  int v7;
  uint *result;
  int v9;

  v9 = a4;
  v4 = a2;
  v5 = a1;
  if ( *((uchar *)a2 + 29) )
  {
    if ( *((uchar *)a2 + 29) != 1 )
    {
      free((int)a2);
      return (uint *)Call_RemoveTaskFromTaskList(v5);
    }
  }
  else
  {
    a2[4] = s32_div_f(a2[2] - *a2, *((uchar *)a2 + 28));
    v4[5] = s32_div_f(v4[3] - v4[1], *((uchar *)v4 + 28));
    ++*((uchar *)v4 + 29);
  }
  Function_2230e74(*((int **)v4 + 8), (ushort *)&v9 + 1, &v9);
  if ( --*((uchar *)v4 + 28) )
  {
    HIWORD(v9) += v4[4];
    LOWORD(v9) = v9 + v4[5];
  }
  else
  {
    HIWORD(v9) = v4[2];
    LOWORD(v9) = v4[3];
    ++*((uchar *)v4 + 29);
  }
  v6 = *((uint *)v4 + 10);
  if ( v6 )
  {
    Function_208b8b8(v6, HIWORD(v9) + 16, v9);
    if ( *((uchar *)v4 + 28) == 2 )
      **((uint **)v4 + 12) = 1;
  }
  Function_2230e68(*((int **)v4 + 8), SHIWORD(v9), (short)v9);
  Function_20128c4(*((uint **)v4 + 9), 36, -8, v7);
  result = (uint *)*((uint *)v4 + 11);
  *result = 1;
  return result;
}

//----- (02235580) --------------------------------------------------------
int __fastcall Function_2235580(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint *v14;
  int v16;
  uint *v17;

  v1 = a1;
  v2 = a1[2];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v6 = (uint *)a1[536];
      v17 = v6;
      v7 = *v6;
      if ( v7 != 16 )
      {
        *v17 = v7 + 2;
        Function_2003a2c(v1[10], 2, 0xCu, *v17, v1[22]);
      }
      if ( v17[3] == 1 )
      {
        v8 = 0;
        if ( !v17[2] )
        {
          v17[2] = 1;
          v9 = v1;
          do
          {
            v10 = malloc(0x66u, 52);
            Call_FillMemWithValue((int *)v10, 0, 0x34u);
            Function_2230e74((int *)v9[333], (ushort *)v10, (ushort *)(v10 + 2));
            *(uint *)(v10 + 32) = v9[333];
            *(uint *)(v10 + 36) = v9[338];
            *(uint *)(v10 + 44) = v17 + 1;
            *(uint *)(v10 + 40) = 0;
            *(ushort *)(v10 + 4) = *(ushort *)v10;
            if ( v1[438] == v8 )
            {
              *(ushort *)(v10 + 4) = *(ushort *)v10;
              *(ushort *)(v10 + 6) = 169;
              Function_200d364((int *)v9[333], *(uint *)(v1[518] + 36 * v1[441] + 12));
              v11 = v1[518] + 36 * v1[441];
              Function_2230fc8((int)v1, (int)&v1[10 * v1[438] + 333], *(uint *)(v11 + 8), v11);
              Function_20129d0((uint *)v1[10 * v1[438] + 338], 1);
              Function_200d3f4((uint *)v9[333], 1);
            }
            else
            {
              *(ushort *)(v10 + 4) = *(ushort *)v10 - 4;
              *(ushort *)(v10 + 6) = 16 * (*((ushort *)v1 + 876) - v8) + 36 * (4 - (*((ushort *)v1 + 876) - v8)) + 25;
            }
            *(uchar *)(v10 + 28) = 4;
            AddTaskToTaskList1((int)Function_22354a4, v10, 0x2000u);
            ++v8;
            v9 += 10;
          }
          while ( v8 <= v1[438] );
        }
        v17[1] = v17[3];
        v17[3] = 0;
      }
      v12 = 0;
      v13 = v1[438];
      if ( v13 > 0 )
      {
        v14 = v1;
        do
        {
          if ( v12 == v13 )
            Function_200d430((int *)v14[333], 1);
          else
            Function_200d430((int *)v14[333], 2);
          ++v12;
          v13 = v1[438];
          v14 += 10;
        }
        while ( v12 < v13 );
      }
      if ( !v17[1] )
        ++v1[2];
      v17[1] = 0;
    }
    else if ( v2 == 2 )
    {
      if ( *(uint *)(a1[518] + 36 * a1[441] + 32) )
        Function_222fb60(a1, 5);
      else
        Function_222fc1c(a1);
      Function_222fb90(v1);
      free(v1[536]);
    }
  }
  else
  {
    v16 = malloc(0x66u, 16);
    MI_CpuFill8((ushort *)v16, 0, 0x10u);
    v1[536] = v16;
    v3 = 0;
    *(uint *)(v16 + 8) = 0;
    if ( v1[440] > 0 )
    {
      v4 = v1;
      do
      {
        v5 = malloc(0x66u, 52);
        Call_FillMemWithValue((int *)v5, 0, 0x34u);
        Function_2230e74((int *)v4[383], (ushort *)v5, (ushort *)(v5 + 2));
        *(uint *)(v5 + 32) = v4[383];
        *(uint *)(v5 + 36) = v4[388];
        *(uint *)(v5 + 44) = v16 + 4;
        *(uint *)(v5 + 48) = v16 + 12;
        if ( v3 == v1[441] )
        {
          *(uint *)(v5 + 40) = v1[444];
          *(ushort *)(v5 + 4) = *(ushort *)v5;
          *(ushort *)(v5 + 6) = -48;
          *(uchar *)(v5 + 28) = 8;
        }
        else
        {
          *(uint *)(v5 + 40) = 0;
          *(ushort *)(v5 + 4) = *(ushort *)v5;
          *(ushort *)(v5 + 6) = 16 * (5 - v1[440]) + 205;
          if ( *(short *)(v5 + 6) >= 221 )
            *(ushort *)(v5 + 6) = 221;
          *(uchar *)(v5 + 28) = 8;
        }
        AddTaskToTaskList1((int)Function_22354a4, v5, 0x2000u);
        ++v3;
        v4 += 10;
      }
      while ( v3 < v1[440] );
    }
    *(uint *)v16 = 0;
    ++v1[2];
  }
  return 0;
}

//----- (02235854) --------------------------------------------------------
int __fastcall Function_2235854(uint *a1)
{
  uint *v1;
  int v2;
  ushort *v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  int v12;
  uint *v13;
  uint *v14;
  uint *v16;
  int v17;
  int v18;

  v1 = a1;
  v2 = a1[2];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v16 = (uint *)a1[536];
      if ( v16[3] == 1 )
      {
        v8 = 0;
        if ( a1[440] > 0 )
        {
          v9 = a1;
          do
          {
            v10 = malloc(0x66u, 52);
            Call_FillMemWithValue((int *)v10, 0, 0x34u);
            Function_2230e74((int *)v9[383], (ushort *)v10, (ushort *)(v10 + 2));
            *(uint *)(v10 + 32) = v9[383];
            *(uint *)(v10 + 36) = v9[388];
            *(uint *)(v10 + 44) = v16 + 1;
            *(uint *)(v10 + 48) = v16 + 3;
            *(uint *)(v10 + 40) = 0;
            *(ushort *)(v10 + 4) = *(ushort *)v10;
            *(ushort *)(v10 + 6) = 16 * (5 - v1[440]) + 205;
            if ( *(short *)(v10 + 6) >= 221 )
              *(ushort *)(v10 + 6) = 221;
            *(uchar *)(v10 + 28) = 8;
            AddTaskToTaskList1((int)Function_22354a4, v10, 0x2000u);
            ++v8;
            v9 += 10;
          }
          while ( v8 < v1[440] );
        }
        v11 = 0;
        *v16 = 0;
        ++v1[2];
        v12 = --v1[438];
        if ( v12 > 0 )
        {
          v13 = v1;
          do
          {
            if ( v11 == v12 - 1 )
              Function_200d430((int *)v13[333], 1);
            else
              Function_200d430((int *)v13[333], 2);
            ++v11;
            v12 = v1[438];
            v13 += 10;
          }
          while ( v11 < v12 );
        }
      }
    }
    else if ( v2 == 2 )
    {
      v14 = (uint *)a1[536];
      if ( *v14 != 16 )
      {
        *v14 += 2;
        Function_2003a2c(a1[10], 2, 0xCu, *v14, a1[22]);
      }
      if ( !v14[1] )
        ++v1[2];
      v14[1] = 0;
    }
    else
    {
      Function_222fbf8((int)a1);
      free(v1[536]);
      Function_222fb60(v1, 5);
    }
  }
  else
  {
    v3 = (ushort *)malloc(0x66u, 16);
    MI_CpuFill8(v3, 0, 0x10u);
    v1[536] = v3;
    v18 = (int)(v3 + 2);
    v4 = 0;
    v5 = v1;
    v17 = (int)(v3 + 6);
    do
    {
      v6 = malloc(0x66u, 52);
      Call_FillMemWithValue((int *)v6, 0, 0x34u);
      Function_2230e74((int *)v5[333], (ushort *)v6, (ushort *)(v6 + 2));
      *(uint *)(v6 + 32) = v5[333];
      *(uint *)(v6 + 36) = v5[338];
      *(uint *)(v6 + 44) = v18;
      *(uint *)(v6 + 48) = v17;
      *(uint *)(v6 + 40) = 0;
      *(ushort *)(v6 + 4) = *(ushort *)v6;
      if ( v1[438] - 1 == v4 )
      {
        *(uint *)(v6 + 40) = v1[444];
        *(ushort *)(v6 + 4) = *(ushort *)v6;
        LOWORD(v7) = 217;
      }
      else
      {
        *(ushort *)(v6 + 4) = *(ushort *)v6 + 4;
        v7 = 36 * (5 - (v1[438] - v4)) + 29 + 16 * (v1[438] - v4);
      }
      *(ushort *)(v6 + 6) = v7;
      *(uchar *)(v6 + 28) = 4;
      AddTaskToTaskList1((int)Function_22354a4, v6, 0x2000u);
      ++v4;
      v5 += 10;
    }
    while ( v4 <= v1[438] - 1 );
    ++v1[2];
  }
  return 0;
}

//----- (02235A80) --------------------------------------------------------
int __fastcall Function_2235a80(int a1, int a2, int a3, int a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = *(uint *)(a1 + 8);
  if ( v5 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2235A9A + v5) + 35871388);
  switch ( (uchar)v5 )
  {
    case 0:
      *(uint *)(v4 + 84) = 0;
      if ( *(uchar *)(v4 + 92) )
        v6 = *(uchar *)(v4 + 92) - 1;
      else
        v6 = 6;
      *(uchar *)(v4 + 92) = v6;
      *(uint *)(v4 + 88) = Function_22316a0(v4, v6, a3, a4);
      ++*(uint *)(v4 + 8);
      break;
    case 1:
      if ( Function_2231664((int *)(v4 + 84), 1) )
        ++*(uint *)(v4 + 8);
      Function_2003a2c(*(uint *)(v4 + 40), 2, 0xFFFFu, *(uint *)(v4 + 84), *(uint *)(v4 + 88));
      Function_2003a2c(*(uint *)(v4 + 40), 0, 0xFFFFu, *(uint *)(v4 + 84), *(uint *)(v4 + 88));
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xFFFFu, *(uint *)(v4 + 84), *(uint *)(v4 + 88));
      Function_2003a2c(*(uint *)(v4 + 40), 1, 0xFFFFu, *(uint *)(v4 + 84), *(uint *)(v4 + 88));
      break;
    case 2:
      Function_201ff0c(0x10u, 0);
      Function_201ff74(0x10u, 0);
      v7 = *(uchar *)(v4 + 92);
      Function_22317cc((uint *)v4);
      Function_2003a2c(*(uint *)(v4 + 40), 2, 0xFFFFu, *(uint *)(v4 + 84), *(uint *)(v4 + 88));
      Function_2003a2c(*(uint *)(v4 + 40), 0, 0xFFFFu, *(uint *)(v4 + 84), *(uint *)(v4 + 88));
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xFFFFu, *(uint *)(v4 + 84), *(uint *)(v4 + 88));
      Function_2003a2c(*(uint *)(v4 + 40), 1, 0xFFFFu, *(uint *)(v4 + 84), *(uint *)(v4 + 88));
      ++*(uint *)(v4 + 8);
      break;
    case 3:
      Function_201ff0c(0x10u, 1);
      Function_201ff74(0x10u, 1);
      ++*(uint *)(v4 + 8);
      break;
    case 4:
      if ( Function_2231664((int *)(v4 + 84), 0) )
        ++*(uint *)(v4 + 8);
      Function_2003a2c(*(uint *)(v4 + 40), 2, 0xFFFFu, *(uint *)(v4 + 84), *(uint *)(v4 + 88));
      Function_2003a2c(*(uint *)(v4 + 40), 0, 0xFFFFu, *(uint *)(v4 + 84), *(uint *)(v4 + 88));
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xFFFFu, *(uint *)(v4 + 84), *(uint *)(v4 + 88));
      Function_2003a2c(*(uint *)(v4 + 40), 1, 0xFFFFu, *(uint *)(v4 + 84), *(uint *)(v4 + 88));
      break;
    default:
      Function_222fb60((uint *)v4, 0);
      break;
  }
  return 0;
}

//----- (02235C70) --------------------------------------------------------
int __fastcall Function_2235c70(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2235C8A + v2) + 35871884);
  switch ( (uchar)v2 )
  {
    case 0:
      *(uint *)(v1 + 84) = 0;
      s32_div_f((uchar)++*(uchar *)(v1 + 92), 7);
      *(uchar *)(v1 + 92) = v3;
      *(uint *)(v1 + 88) = Function_22316a0(v1, v3, v4, v5);
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      if ( Function_2231664((int *)(v1 + 84), 1) )
        ++*(uint *)(v1 + 8);
      Function_2003a2c(*(uint *)(v1 + 40), 2, 0xFFFFu, *(uint *)(v1 + 84), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 0, 0xFFFFu, *(uint *)(v1 + 84), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xFFFFu, *(uint *)(v1 + 84), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 1, 0xFFFFu, *(uint *)(v1 + 84), *(uint *)(v1 + 88));
      break;
    case 2:
      Function_201ff0c(0x10u, 0);
      Function_201ff74(0x10u, 0);
      v6 = *(uchar *)(v1 + 92);
      Function_22317cc((uint *)v1);
      Function_2003a2c(*(uint *)(v1 + 40), 2, 0xFFFFu, *(uint *)(v1 + 84), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 0, 0xFFFFu, *(uint *)(v1 + 84), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xFFFFu, *(uint *)(v1 + 84), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 1, 0xFFFFu, *(uint *)(v1 + 84), *(uint *)(v1 + 88));
      ++*(uint *)(v1 + 8);
      break;
    case 3:
      Function_201ff0c(0x10u, 1);
      Function_201ff74(0x10u, 1);
      ++*(uint *)(v1 + 8);
      break;
    case 4:
      if ( Function_2231664((int *)(v1 + 84), 0) )
        ++*(uint *)(v1 + 8);
      Function_2003a2c(*(uint *)(v1 + 40), 2, 0xFFFFu, *(uint *)(v1 + 84), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 0, 0xFFFFu, *(uint *)(v1 + 84), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xFFFFu, *(uint *)(v1 + 84), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 1, 0xFFFFu, *(uint *)(v1 + 84), *(uint *)(v1 + 88));
      break;
    default:
      *(uint *)(v1 + 84) = 0;
      Function_222fb60((uint *)v1, 0);
      break;
  }
  return 0;
}

//----- (02235E64) --------------------------------------------------------
int __fastcall Function_2235e64(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc(0x66u, 412);
  Call_FillMemWithValue(v2, 0, 0x19Cu);
  *(uint *)(v1 + 2144) = v2;
  Function_2019ebc(*(uint **)(v1 + 36), 2u);
  Function_2019ebc(*(uint **)(v1 + 36), 3u);
  Function_2019ebc(*(uint **)(v1 + 36), 6u);
  Function_2019ebc(*(uint **)(v1 + 36), 7u);
  Function_22315c8(v2, v2 + 1, 0);
  Function_222fb60((uint *)v1, 1);
  return 0;
}

//----- (02235EBC) --------------------------------------------------------
int __fastcall Function_2235ebc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  long long v6;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2234540(a1, 1);
      Function_2231454(v1);
      Function_2234540(v1, 0);
      Function_2019060(0, 0);
      Function_2019060(1u, 3);
      Function_2019060(2u, 0);
      Function_2019060(3u, 2);
      Function_2019060(4u, 0);
      Function_2019060(5u, 3);
      Function_2019060(6u, 1);
      Function_2019060(7u, 2);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      ++*(uint *)(v1 + 8);
    }
    else
    {
      Function_223376c(a1, 0);
      if ( Function_22300bc(v1) == 1 )
      {
        v4 = 0;
        v5 = *(uint *)(v1 + 2156);
        if ( v5 )
        {
          LODWORD(v6) = Function_202fe98(*(uint *)(v1 + 4 * v5 + 2172), 5u, 0);
          if ( v6 == 1 )
          {
            v4 = 1;
          }
          else if ( *(uint *)(v1 + 2164) == 1 )
          {
            v4 = 1;
          }
        }
        else
        {
          v4 = 1;
        }
        if ( v4 )
        {
          Function_2236c20(v1);
          *(uint *)(v2 + 408) = 0;
          Function_222fb60((uint *)v1, 9);
        }
        else
        {
          *(uint *)(v2 + 408) = 1;
          Function_222fb60((uint *)v1, 6);
        }
      }
      else
      {
        Function_222fb60((uint *)v1, 2);
      }
    }
  }
  else
  {
    if ( Function_2231664((int *)(v2 + 8), 1) )
      ++*(uint *)(v1 + 8);
    Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
    Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
    Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
  }
  return 0;
}

//----- (0223604C) --------------------------------------------------------
int __fastcall Function_223604c(uint *a1)
{
  uint *v1;
  int *v2;
  uint v3;
  int v4;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_223606A + v3) + 35872876);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2236c20(a1);
      Function_22343b8((int)v1, 6u, 7u);
      ++v1[2];
      break;
    case 1:
      Function_2236b2c();
      v2[93] = Function_2023fcc((int)dword_2248C1C, 3u, (int)Function_2236ab0, (int)v1, 0x66u);
      ++v1[2];
      break;
    case 2:
      Function_2234540((int)a1, 1);
      Function_2234214((int)(v2 + 39), (int)v1);
      v4 = Function_2233fec((int)(v2 + 39));
      Function_22343b8((int)v1, v4, 3u);
      Function_223427c((int)(v2 + 39), 0);
      Function_2234540((int)v1, 0);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      Function_201ff0c(4u, 0);
      Function_201ff74(4u, 0);
      ++v1[2];
      break;
    case 3:
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 0) )
      {
        Function_223427c((int)(v2 + 39), 1);
        Function_2236b64(v1);
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, v2[2], v1[22]);
      break;
    default:
      Function_222fb60(a1, 3);
      break;
  }
  return 0;
}

//----- (02236174) --------------------------------------------------------
int __fastcall Function_2236174(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 372));
  return 0;
}

//----- (0223618C) --------------------------------------------------------
int __fastcall Function_223618c(int a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = (uint *)a1;
  v2 = *(uint *)(a1 + 2144);
  switch ( (uchar)*(uint *)(a1 + 8) )
  {
    case 0u:
      if ( *(uint *)(v2 + 12) )
        Function_2232394(v2 + 16, a1);
      else
        Function_2234228(v2 + 156, a1);
      Function_201ff0c(4u, 0);
      ++v1[2];
      break;
    case 1u:
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 1, 1) )
        ++v1[2];
      break;
    case 2u:
      Function_2234540(a1, 1);
      if ( *(uint *)(v2 + 12) )
      {
        Function_2234214(v2 + 156, (int)v1);
        Function_223427c(v2 + 156, 0);
        v5 = Function_2233fec(v2 + 156);
        Function_22343b8((int)v1, v5, 3u);
      }
      else
      {
        Function_2232378((char **)(v2 + 16), (int)v1, v3, v4);
        Function_22323b8(v2 + 16, 0);
        Function_22343b8((int)v1, 0x50u, 3u);
      }
      Function_2234540((int)v1, 0);
      ++v1[2];
      break;
    case 3u:
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 0, 1) )
      {
        if ( *(uint *)(v2 + 12) )
          Function_223427c(v2 + 156, 1);
        else
          Function_22323b8(v2 + 16, 1);
        Function_201ff74(4u, 1);
        Function_201ff0c(4u, 1);
        ++v1[2];
      }
      break;
    default:
      *(uint *)(v2 + 12) ^= 1u;
      Function_2236bc8();
      Function_222fb60(v1, 3);
      break;
  }
  return 0;
}

//----- (022362B8) --------------------------------------------------------
int __fastcall Function_22362b8(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;
  ushort *v5;
  int v6;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_201a7a0(v2 + 376);
  Function_201a7e8(*(uint **)(v1 + 36), v2 + 376, 6, 4, 6, 0xAu, 2u, 14, 1);
  Function_201ada4_ClearTextBox(v2 + 376, 0);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x82u);
  Function_223429c(v2 + 376, (int)v3);
  Function_201d78c(v2 + 376, 0);
  Function_20237bc_FreeMsg((int)v3, v4);
  Function_201a9a4(v2 + 376);
  Function_201a7a0(v2 + 392);
  Function_201a7e8(*(uint **)(v1 + 36), v2 + 392, 6, 18, 6, 0xAu, 2u, 14, 21);
  Function_201ada4_ClearTextBox(v2 + 392, 0);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x83u);
  Function_223429c(v2 + 392, (int)v5);
  Function_201d78c(v2 + 392, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  return Function_201a9a4(v2 + 392);
}

//----- (02236398) --------------------------------------------------------
uint __fastcall Function_2236398(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  Function_201acf4(v1 + 376);
  Function_201a8fc(v1 + 376);
  Function_201acf4(v1 + 392);
  return Function_201a8fc(v1 + 392);
}

//----- (022363CC) --------------------------------------------------------
int __fastcall Function_22363cc(int a1)
{
  int v1;
  uint v2;
  int *v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  v3 = *(int **)(a1 + 2144);
  if ( v2 <= 7 )
    JUMPOUT(__CS__, *((short *)&off_22363EC + v2) + 35873774);
  switch ( (uchar)v2 )
  {
    case 0:
      Function_2024034(v3[93]);
      Function_201ff74(4u, 0);
      Function_201ff0c(4u, 0);
      Function_2234540(v1, 1);
      if ( v3[3] )
        Function_2232394((int)(v3 + 4), v1);
      else
        Function_2234228((int)(v3 + 39), v1);
      Function_2234540(v1, 0);
      Function_2236ba8(v1);
      v3[102] = 0;
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      Function_2231664(v3 + 2, 1);
      if ( Function_22315e0(v3, v3 + 1, 1, 0) )
      {
        Function_2234540(v1, 1);
        Function_2236c94(v1);
        Function_2234540(v1, 0);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v3[2], *(uint *)(v1 + 88));
      break;
    case 2:
      Function_22362b8(a1);
      Function_2231aac(v1, 0x128u);
      Function_200710c(*(uint *)(v1 + 20), 0x54u, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      ++*(uint *)(v1 + 8);
      break;
    case 3:
      Function_2231664(v3 + 2, 0);
      if ( Function_22315e0(v3, v3 + 1, 0, 2) )
      {
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v3[2], *(uint *)(v1 + 88));
      break;
    case 4:
      if ( Function_2022760((uchar *)&dword_2248C14) )
      {
        v3[102] = 1;
        Function_2234520(v1);
        if ( Function_2024800(*(uint *)(v1 + 2096)) )
          Function_2231b3c(v1, 0x12Au);
        else
          Function_2231b3c(v1, 0x12Bu);
        ++*(uint *)(v1 + 8);
      }
      else if ( Function_2022760((uchar *)&dword_2248C18) )
      {
        v3[102] = 2;
        Function_2234520(v1);
        *(uint *)(v1 + 8) = 6;
      }
      break;
    case 5:
      Function_20246e0(*(uint **)(a1 + 2096));
      ++*(uint *)(v1 + 8);
      break;
    case 6:
      Function_2231b8c(a1);
      Function_2236398(v1);
      ++*(uint *)(v1 + 8);
      break;
    case 7:
      Function_2231664(v3 + 2, 1);
      if ( Function_22315e0(v3, v3 + 1, 1, 2) )
        ++*(uint *)(v1 + 8);
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v3[2], *(uint *)(v1 + 88));
      break;
    default:
      if ( v3[102] == 1 )
      {
        Function_222fb60((uint *)a1, 7);
      }
      else
      {
        v3[102] = 0;
        v3[3] = 0;
        Function_222fb60((uint *)a1, 2);
      }
      break;
  }
  return 0;
}

//----- (02236624) --------------------------------------------------------
int __fastcall Function_2236624(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  char v7;

  v1 = a1;
  v2 = a1[2];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( Function_200f2ac() == 1 )
        ++v1[2];
    }
    else if ( v2 == 2 )
    {
      if ( !a1[541] )
      {
        Function_202f298(a1[524], 0x66u, &v7, 0, a1[539]);
        Function_22486a4(v1[524], v1[539]);
        Function_202f22c();
        Function_22339a0((int)v1);
        Function_22338a8((int)v1, v3, v4, v5);
      }
      ++v1[2];
    }
    else
    {
      Function_2231b8c((int)a1);
      Function_2236c20(v1);
      Function_222fb60(v1, 9);
    }
  }
  else
  {
    Function_2231aac((int)a1, 0x12Bu);
    Function_200f174(0, 1, 1, 0, 6, 1, 102);
    ++v1[2];
  }
  return 0;
}

//----- (022366D4) --------------------------------------------------------
int __fastcall Function_22366d4(int a1)
{
  int v1;
  uint *v2;
  int v3;

  v1 = a1;
  v2 = *(uint **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( Function_200f2ac() == 1 )
        ++*(uint *)(v1 + 8);
    }
    else
    {
      if ( v3 != 2 )
      {
        free(*(uint *)(a1 + 2144));
        return 1;
      }
      if ( !v2[102] )
      {
        Function_2234540(a1, 1);
        if ( v2[3] )
          Function_2232394((int)(v2 + 4), v1);
        else
          Function_2234228((int)(v2 + 39), v1);
        Function_2234540(v1, 0);
        Function_2024034(v2[93]);
        Function_2236ba8(v1);
        Function_2236c94(v1);
      }
      Function_2234540(v1, 1);
      Function_22314a8((int **)v1);
      Function_2234540(v1, 0);
      Function_22300c8(v1, **(uint **)(v1 + 16));
      Function_208ba84(*(uint **)(v1 + 2152), 1, 0);
      ++*(uint *)(v1 + 8);
    }
  }
  else
  {
    Function_200f174(0, 0, 0, 0, 6, 1, 102);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (022367B4) --------------------------------------------------------
int __fastcall Function_22367b4(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 1);
      if ( Function_22315e0(v2, v2 + 1, 1, 0) )
      {
        Function_2236c94(v1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
    }
    else if ( v3 == 2 )
    {
      Function_223376c(a1, 1);
      Function_2234540(v1, 1);
      Function_223146c((int **)v1);
      Function_2234540(v1, 0);
      Function_2019ebc(*(uint **)(v1 + 36), 2u);
      Function_2019ebc(*(uint **)(v1 + 36), 6u);
      Function_2019ebc(*(uint **)(v1 + 36), 3u);
      Function_2019ebc(*(uint **)(v1 + 36), 7u);
      ++*(uint *)(v1 + 8);
    }
    else if ( Function_2233790(a1) )
    {
      if ( Function_2231664(v2 + 2, 0) )
      {
        Function_22318e8(v1);
        Function_2231688(v2 + 2);
        Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
        Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
        Function_222fb60((uint *)v1, 5);
        free((int)v2);
      }
      else
      {
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
        Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, v2[2], *(uint *)(v1 + 88));
      }
    }
  }
  else
  {
    Function_2024034(v2[93]);
    Function_201ff74(4u, 0);
    Function_201ff0c(4u, 0);
    if ( v2[3] )
      Function_2232394((int)(v2 + 4), v1);
    else
      Function_2234228((int)(v2 + 39), v1);
    Function_2236ba8(v1);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (02236920) --------------------------------------------------------
int __fastcall Function_2236920(uint *a1)
{
  uint *v1;
  int *v2;
  uint v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_2236940 + v3) + 35875138);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_22343b8((int)a1, 6u, 7u);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      ++v1[2];
      break;
    case 1:
      Function_2236b2c();
      v2[93] = Function_2023fcc((int)dword_2248C1C, 3u, (int)Function_2236ab0, (int)v1, 0x66u);
      ++v1[2];
      break;
    case 2:
      Function_2234540((int)a1, 1);
      Function_2234214((int)(v2 + 39), (int)v1);
      v4 = Function_2233fec((int)(v2 + 39));
      Function_22343b8((int)v1, v4, 3u);
      Function_223427c((int)(v2 + 39), 0);
      Function_2234540((int)v1, 0);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      Function_201ff0c(4u, 0);
      Function_201ff74(4u, 0);
      ++v1[2];
      break;
    case 3:
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 0) )
      {
        Function_223427c((int)(v2 + 39), 1);
        Function_2236b64(v1);
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        if ( v2[102] == 1 )
          v5 = 255;
        else
          v5 = v1[2] + 1;
        v1[2] = v5;
        v2[102] = 0;
      }
      Function_2003a2c(v1[10], 3, 0xCu, v2[2], v1[22]);
      break;
    case 4:
      Function_200f174(0, 1, 1, 0, 6, 1, 102);
      ++v1[2];
      break;
    case 5:
      if ( Function_200f2ac() == 1 )
        ++v1[2];
      break;
    default:
      ++a1[438];
      Function_2230098(a1);
      Function_222fb60(v1, 3);
      break;
  }
  return 0;
}

//----- (02236AB0) --------------------------------------------------------
uint *__fastcall Function_2236ab0(uint *result, int a2, int a3)
{
  uint *v3;
  int v4;
  long long v5;

  v3 = (uint *)a3;
  v4 = *(uint *)(a3 + 2144);
  if ( !a2 )
  {
    if ( result )
    {
      if ( result == (uint *)1 )
      {
        Function_2234520(a3);
        if ( v3[539] && (LODWORD(v5) = Function_202fe98(*(uint *)(v4 + 160), 5u, 0), v5 != 1) )
          result = Function_222fb60(v3, 5);
        else
          result = Function_222fb60(v3, 7);
      }
      else if ( result == (uint *)2 )
      {
        Function_2234520(a3);
        result = Function_222fb60(v3, 8);
      }
    }
    else
    {
      Function_2234520(a3);
      result = Function_222fb60(v3, 4);
    }
  }
  return result;
}

//----- (02236B2C) --------------------------------------------------------
int __fastcall Function_2236b2c(int a1)
{
  uint *v1;
  int v2;
  int result;

  v1 = *(uint **)(a1 + 2144);
  v2 = *(uint *)(a1 + 4 * *(uint *)(a1 + 2156) + 2188);
  v1[4] = v2;
  v1[39] = v2;
  result = *(uint *)(a1 + 4 * *(uint *)(a1 + 2156) + 2172);
  v1[40] = result;
  return result;
}

//----- (02236B64) --------------------------------------------------------
int __fastcall Function_2236b64(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_201a7a0(v2 + 376);
  Function_201a7e8(*(uint **)(v1 + 36), v2 + 376, 6, 8, 3, 0x10u, 2u, 14, 1);
  return Function_2236bc8(v1, 121);
}

//----- (02236BA8) --------------------------------------------------------
uint __fastcall Function_2236ba8(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  Function_201acf4(v1 + 376);
  return Function_201a8fc(v1 + 376);
}

//----- (02236BC8) --------------------------------------------------------
int __fastcall Function_2236bc8(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  ushort *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 2144);
  Function_201ada4_ClearTextBox(v4 + 376, 0);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 72), v3);
  Function_223429c(v4 + 376, (int)v5);
  Function_201d78c(v4 + 376, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  return Function_201a9a4(v4 + 376);
}

//----- (02236C20) --------------------------------------------------------
int __fastcall Function_2236c20(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_22312cc(a1, 2);
  *(uint *)(v2 + 348) = Function_22313e0(v1, 2, v3, v4);
  Function_223118c(v2 + 344, v1 + 20, 2);
  Function_223124c(v2 + 344, v1 + 20, 3u);
  Function_200d364(*(int **)(v2 + 348), 0);
  Function_200d4c4(*(int **)(v2 + 348), 80, 232);
  Function_20128c4(*(uint **)(v2 + 352), 36, -8, v5);
  return Function_20129d0(*(uint **)(v2 + 352), 1);
}

//----- (02236C94) --------------------------------------------------------
int __fastcall Function_2236c94(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_22312b0(v2 + 344);
  Function_200d0f4(*(uint *)(v2 + 348));
  return Function_22313bc(v1);
}

//----- (02236CBC) --------------------------------------------------------
int __fastcall Function_2236cbc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = *(uint *)(a1 + 2144);
  if ( a2 )
    Function_200d4c4(*(int **)(v2 + 188), 80, 232);
  else
    Function_200d4c4(*(int **)(v2 + 188), 128, 232);
  return Function_20128c4(*(uint **)(v2 + 192), 36, -8, v3);
}

//----- (02236CF8) --------------------------------------------------------
int __fastcall Function_2236cf8(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = *(uint *)(a1 + 20);
  v3 = *(uint **)(a1 + 24);
  v4 = *(uint *)(a1 + 28);
  Function_200cc3c(*(uint **)(a1 + 24), *(uint *)(a1 + 28), v2, 0x32u, 0, a2, 11924);
  Function_200ce24(v3, v4, v2, 0x1Cu, 0, 11924);
  return Function_200ce54(v3, v4, v2, 0x1Du, 0, 11924);
}

//----- (02236D48) --------------------------------------------------------
int __fastcall Function_2236d48(int a1)
{
  int v1;
  int **v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = *(int ***)(a1 + 2144);
  Function_2236cf8(a1, 2);
  v2[47] = Function_22313e0(v1, 2, v3, v4);
  Function_223118c((int)(v2 + 46), v1 + 20, 2);
  Function_223124c((int)(v2 + 46), v1 + 20, 3u);
  Function_200d4c4(v2[47], 128, 232);
  Function_20128c4(v2[48], 36, -8, v5);
  Function_20129d0(v2[48], 1);
  v2[38] = Function_22313e0(v1, 2, v6, v7);
  Function_200d4c4(v2[38], 220, 224);
  Function_200d364(v2[38], 2u);
  Function_200d3f4((uint *)v2[38], 0);
  return Function_2236cbc(v1, 1);
}

//----- (02236DE8) --------------------------------------------------------
int __fastcall Function_2236de8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_22312b0(*(uint *)(a1 + 2144) + 184);
  Function_200d0f4(*(uint *)(v2 + 188));
  Function_200d0f4(*(uint *)(v2 + 152));
  return Function_22313bc(v1);
}

//----- (02236E14) --------------------------------------------------------
BOOL __fastcall Function_2236e14(int *a1, int a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int *v17;
  int *v18;
  int *v19;
  int v20;
  char v21;
  int v22;
  int v23;
  int v24;
  int v25;
  char v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;

  v31 = a4;
  v4 = (uint *)a1[9];
  v17 = a1;
  v5 = a1[5];
  v6 = (uint *)a1[6];
  v7 = a1[7];
  v20 = a1[10];
  Function_20070e8(a1[5], 0x3Eu, v4, 6u, 0, 0, 0, 102);
  Function_200710c(v5, 0x44u, v4, 6u, 0, 0, 0, 102);
  v8 = Function_2231710((int)v17);
  Function_200cdc4(v20, 3u, v6, v7, v5, v8, 0, 1, 2, 29292);
  Function_200cc3c(v6, v7, v5, 0x42u, 0, 2, 29292);
  Function_200ce24(v6, v7, v5, 0x47u, 0, 29292);
  Function_200ce54(v6, v7, v5, 0x48u, 0, 29292);
  v9 = Function_2231710((int)v17);
  Function_200cdc4(v20, 2u, v6, v7, v5, v9, 0, 6, 1, 28282);
  Function_200cc3c(v6, v7, v5, 0x40u, 0, 1, 28282);
  Function_200ce24(v6, v7, v5, 0x26u, 0, 28282);
  Function_200ce54(v6, v7, v5, 0x27u, 0, 28282);
  v19 = (int *)&v26;
  *(uint *)&v26 = 125;
  v27 = 291;
  v28 = 297;
  v29 = 295;
  v30 = 293;
  v18 = (int *)&v21;
  *(uint *)&v21 = 126;
  v22 = 292;
  v23 = 298;
  v24 = 296;
  v10 = 0;
  v25 = 294;
  do
  {
    if ( v10 == 3 )
    {
      Function_200cdc4(v20, 2u, v6, v7, v5, 0x5Cu, 0, 1, 1, 18184);
      Function_200cc3c(v6, v7, v5, 0x5Bu, 0, 1, 18184);
    }
    else
    {
      Function_200cd7c(v20, 2u, (int *)v6, v7, 146, *v19, 0, 1, 1, v10 + 18181);
      Function_200d888((int *)v6, v7, 146, *v18, 0, 1, v10 + 18181);
    }
    ++v10;
    ++v19;
    ++v18;
  }
  while ( v10 < 5 );
  Function_200ce0c((int *)v6, v7, 146, 9, 0, 18181);
  Function_200ce3c((int *)v6, v7, 146, 10, 0, 18181);
  Function_200ce24(v6, v7, v5, 0x59u, 0, 18182);
  Function_200ce54(v6, v7, v5, 0x5Au, 0, 18182);
  v11 = 13;
  v12 = 14;
  v13 = Function_2030bac(v17[547]);
  v14 = (int *)v17[6];
  v15 = v17[7];
  if ( v13 )
  {
    v11 = 15;
    v12 = 16;
  }
  Function_200cd7c(v17[10], 2u, v14, v15, 146, v11, 0, 1, 1, 165535);
  Function_200ce0c(v14, v15, 146, 9, 0, 165535);
  Function_200ce3c(v14, v15, 146, 10, 0, 165535);
  return Function_200d888(v14, v15, 146, v12, 0, 1, 165535);
}

//----- (022370D4) --------------------------------------------------------
int __fastcall Function_22370d4(ushort *a1, int a2, int a3)
{
  ushort *v3;
  int result;
  int v5;

  v3 = a1;
  for ( result = 0; result < a2; ++v3 )
    ++result;
  for ( ; result < a2 + a3; ++v3 )
  {
    ++result;
    v5 = (29 * (((int)(ushort)*v3 >> 10) & 0x1F)
        + 76 * (*v3 & 0x1F)
        + 151 * (((int)(ushort)*v3 >> 5) & 0x1F)) >> 8;
    *v3 = 32 * v5 | ((ushort)v5 << 10) | v5;
  }
  return result;
}

//----- (0223712C) --------------------------------------------------------
int __fastcall Function_223712c(int a1)
{
  int v1;
  int v2;
  int *v3;
  char *v4;
  int v5;
  ushort *v6;
  int v8;
  int v9;
  char v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v8 = a1;
  v9 = *(uint *)(a1 + 40);
  v1 = LoadFlagAdress(*(uint *)(a1 + 2096));
  v15 = Function_206b5c8(v1);
  v16 = Function_206b588(v1);
  v17 = Function_206b5b8(v1);
  v18 = Function_206b5a8(v1);
  v19 = Function_206b598(v1);
  v2 = 0;
  v3 = &v15;
  v4 = &v10;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      *(uint *)&v10 = 0;
      v11 = 1;
      v12 = 4;
      v13 = 3;
      v14 = 2;
      if ( v5 == 2 )
      {
        v6 = (ushort *)Function_200316c(*(uint *)(v8 + 40), 2);
        Function_22370d4(v6, 16 * (*(uint *)v4 + 4) & 0xFFFF, 16);
      }
    }
    ++v2;
    ++v3;
    v4 += 4;
  }
  while ( v2 < 5 );
  return Function_2003858(v9, 1);
}

//----- (022371CC) --------------------------------------------------------
uint __fastcall Function_22371cc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  uint *v11;
  int v12;
  char *v13;
  uint v14;
  int v15;
  uint *v16;
  int v17;
  uint result;
  uint v19;
  int v20;
  int v21;
  int v22;
  int *v23;
  int v24;
  int v25;
  int v26;
  char v27;
  int v28;
  int v29;
  int v30;
  int v31;
  short v32;
  short v33;
  short v34;
  short v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  char v52;
  int v53;

  v1 = a1;
  v26 = 0;
  v2 = *(uint *)(a1 + 2144);
  v32 = 0;
  v33 = 256;
  v3 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 10;
  v37 = 0;
  v45 = 0;
  v46 = 0;
  v43 = -1;
  v44 = -1;
  v38 = 1;
  v39 = 165535;
  v40 = 165535;
  v41 = 165535;
  v42 = 165535;
  v4 = v2;
  do
  {
    v5 = Function_200ce6c(*(uint **)(v1 + 24), *(uint *)(v1 + 28), &v32);
    *(uint *)(v4 + 64) = v5;
    Function_200d364(v5, 1u);
    Function_200d330(*(int **)(v4 + 64));
    Function_200d6e8(*(int **)(v4 + 64), *(uint *)(v4 + 4), *(uint *)(v4 + 4));
    ++v3;
    v4 += 4;
  }
  while ( v3 < 5 );
  v6 = 0;
  v7 = v2;
  do
  {
    v39 = v6 + 18181;
    v40 = v6 + 18181;
    if ( v6 == 3 )
    {
      v41 = 18182;
      v42 = 18182;
    }
    else
    {
      v41 = 18181;
      v42 = 18181;
    }
    *(uint *)(v7 + 84) = Function_200ce6c(*(uint **)(v1 + 24), *(uint *)(v1 + 28), &v32);
    v8 = *(int **)(v7 + 84);
    if ( v6 == 3 )
      Function_200d364(v8, 0);
    else
      Function_200d364(v8, 1u);
    Function_200d330(*(int **)(v7 + 84));
    Function_200d6e8(*(int **)(v7 + 84), *(uint *)(v7 + 4), *(uint *)(v7 + 4));
    Function_200d41c(*(int **)(v7 + 84), v6++ + 10);
    v7 += 4;
  }
  while ( v6 < 5 );
  v39 = 28282;
  v40 = 28282;
  v41 = 28282;
  v42 = 28282;
  v43 = -1;
  v44 = -1;
  v36 = 20;
  v9 = LoadFlagAdress(*(uint *)(v1 + 2096));
  v47 = Function_206b5c8(v9);
  v48 = Function_206b588(v9);
  v49 = Function_206b5b8(v9);
  v50 = Function_206b5a8(v9);
  v51 = Function_206b598(v9);
  v20 = 0;
  v23 = &v47;
  v10 = v2;
  v11 = (uint *)&v27;
  do
  {
    *(uint *)(v10 + 104) = Function_200ce6c(*(uint **)(v1 + 24), *(uint *)(v1 + 28), &v32);
    if ( *v23 )
    {
      *(uint *)&v27 = 0;
      v28 = 1;
      v29 = 4;
      v30 = 3;
      v31 = 2;
      Function_200d364(*(int **)(v10 + 104), *v11);
      Function_200d41c(*(int **)(v10 + 104), *(uchar *)v11 + 4);
    }
    else
    {
      Function_200d364(*(int **)(v10 + 104), 5u);
      Function_200d41c(*(int **)(v10 + 104), 9);
      Function_200d3f4(*(uint **)(v10 + 84), 0);
      Function_200d3f4(*(uint **)(v10 + 64), 0);
    }
    Function_200d330(*(int **)(v10 + 104));
    Function_200d6e8(*(int **)(v10 + 104), *(uint *)(v10 + 4), *(uint *)(v10 + 4));
    v10 += 4;
    ++v23;
    ++v11;
    ++v20;
  }
  while ( v20 < 5 );
  v39 = 29292;
  v40 = 29292;
  v41 = 29292;
  v42 = 29292;
  v43 = -1;
  v44 = -1;
  v38 = 2;
  v25 = 0;
  v36 = 0;
  v12 = 1000;
  v19 = *(uint *)(v2 + 144);
  v13 = &v52;
  v21 = 0;
  do
  {
    *(uint *)v13 = s32_div_f(v19, v12);
    s32_div_f(v19, v12);
    v19 = v14;
    v12 = s32_div_f(v12, 10);
    if ( *(uint *)v13 || v25 )
      v25 = 1;
    else
      ++v26;
    v13 += 4;
    ++v21;
  }
  while ( v21 < 4 );
  v53 = 10;
  v22 = 0;
  v15 = v2;
  v16 = (uint *)&v52;
  v24 = 88;
  do
  {
    *(uint *)(v15 + 124) = Function_200ce6c(*(uint **)(v1 + 24), *(uint *)(v1 + 28), &v32);
    if ( !*v16 && v22 < v26 )
      Function_200d3f4(*(uint **)(v15 + 124), 0);
    Function_200d364(*(int **)(v15 + 124), *v16);
    Function_2230e68(*(int **)(v15 + 124), (short)v24, 72);
    Function_200d330(*(int **)(v15 + 124));
    v15 += 4;
    v24 += 16;
    ++v16;
    ++v22;
  }
  while ( v22 < 5 );
  Function_200d3f4(*(uint **)(v2 + 136), 1);
  Function_200d3f4(*(uint **)(v2 + 140), 1);
  v17 = 0;
  do
  {
    Function_200d6a4(*(uint **)(v2 + 64), 2);
    Function_200d6a4(*(uint **)(v2 + 84), 2);
    result = Function_200d6a4(*(uint **)(v2 + 104), 2);
    ++v17;
    v2 += 4;
  }
  while ( v17 < 5 );
  return result;
}

//----- (022374A8) --------------------------------------------------------
int __fastcall Function_22374a8(int a1)
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

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = 0;
  v4 = *(uint *)(a1 + 2144);
  do
  {
    Function_200d070(*(uint *)(v1 + 28), v3 + 18181);
    Function_200d080(*(uint *)(v1 + 28), v3 + 18181);
    Function_200d0f4(*(uint *)(v4 + 84));
    ++v3;
    v4 += 4;
  }
  while ( v3 < 5 );
  Function_200d090(*(uint *)(v1 + 28), 18181);
  Function_200d0a0(*(uint *)(v1 + 28), 18181);
  Function_200d090(*(uint *)(v1 + 28), 18182);
  Function_200d0a0(*(uint *)(v1 + 28), 18182);
  v5 = 0;
  v6 = v2;
  do
  {
    Function_200d0f4(*(uint *)(v6 + 64));
    ++v5;
    v6 += 4;
  }
  while ( v5 < 5 );
  Function_200d070(*(uint *)(v1 + 28), 165535);
  Function_200d080(*(uint *)(v1 + 28), 165535);
  Function_200d090(*(uint *)(v1 + 28), 165535);
  Function_200d0a0(*(uint *)(v1 + 28), 165535);
  v7 = 0;
  v8 = v2;
  do
  {
    Function_200d0f4(*(uint *)(v8 + 104));
    ++v7;
    v8 += 4;
  }
  while ( v7 < 5 );
  Function_200d070(*(uint *)(v1 + 28), 28282);
  Function_200d080(*(uint *)(v1 + 28), 28282);
  Function_200d090(*(uint *)(v1 + 28), 28282);
  Function_200d0a0(*(uint *)(v1 + 28), 28282);
  v9 = 0;
  do
  {
    Function_200d0f4(*(uint *)(v2 + 124));
    ++v9;
    v2 += 4;
  }
  while ( v9 < 5 );
  Function_200d070(*(uint *)(v1 + 28), 29292);
  Function_200d080(*(uint *)(v1 + 28), 29292);
  Function_200d090(*(uint *)(v1 + 28), 29292);
  return Function_200d0a0(*(uint *)(v1 + 28), 29292);
}

//----- (022375A4) --------------------------------------------------------
BOOL __fastcall Function_22375a4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  uint *v8;
  int v9;
  uint v10;
  uint v11;
  uint v12;
  int v13;
  uint *v15;
  char v16;
  short v17;
  int v18;

  v18 = a4;
  v15 = *(uint **)(a1 + 2144);
  v4 = 0;
  v5 = *(uint *)(a1 + 2144);
  do
  {
    v6 = *(uint *)(v5 + 44) + 20;
    *(uint *)(v5 + 44) = v6;
    s32_div_f(v6, 360);
    *(uint *)(v5 + 44) = v7;
    ++v4;
    v5 += 4;
  }
  while ( v4 < 5 );
  Function_22315e0(v15 + 53, v15 + 54, 0, 0);
  v8 = v15;
  v9 = 0;
  do
  {
    if ( v15[11] )
    {
      v10 = fadd(v8[1], 1028443341);
    }
    else
    {
      Function_200d6a4((uint *)v8[16], 0);
      Function_200d6a4((uint *)v8[21], 0);
      Function_200d6a4((uint *)v8[26], 0);
      v10 = 1065353216;
    }
    v8[1] = v10;
    v11 = v8[6] * Function_201d250(v8[11] & 0xFFFF);
    v12 = Function_201d264(v8[11] & 0xFFFF);
    Function_200d614((uint *)v8[26], v11 + 0x80000, 434176 - v8[6] * v12, v13);
    Function_200d550((int *)v8[26], &v17, &v16);
    Function_200d4c4((int *)v8[16], (short)(v17 - 32), (short)(*(ushort *)&v16 - 2));
    Function_200d4c4((int *)v8[21], (short)(v17 + 16), (short)(*(ushort *)&v16 - 2));
    Function_200d6e8((int *)v8[26], v8[1], v8[1]);
    Function_200d6e8((int *)v8[16], v8[1], v8[1]);
    Function_200d6e8((int *)v8[21], v8[1], v8[1]);
    ++v9;
    ++v8;
  }
  while ( v9 < 5 );
  return v15[11] != 0;
}

//----- (022376C4) --------------------------------------------------------
BOOL __fastcall Function_22376c4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  int v7;
  uint **v8;
  int v9;
  uint *v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  uint *v16;
  char v17;
  short v18;
  int v19;

  v19 = a4;
  v16 = *(uint **)(a1 + 2144);
  v4 = 0;
  v5 = *(uint *)(a1 + 2144);
  do
  {
    v6 = *(uint *)(v5 + 44) + 20;
    *(uint *)(v5 + 44) = v6;
    s32_div_f(v6, 360);
    *(uint *)(v5 + 44) = v7;
    ++v4;
    v5 += 4;
  }
  while ( v4 < 5 );
  if ( v16[11] == 20 )
  {
    v8 = (uint **)v16;
    v9 = 0;
    do
    {
      Function_200d6a4(v8[16], 2);
      Function_200d6a4(v8[21], 2);
      Function_200d6a4(v8[26], 2);
      ++v9;
      ++v8;
    }
    while ( v9 < 5 );
  }
  Function_22315e0(v16 + 53, v16 + 54, 1, 0);
  v10 = v16;
  v11 = 0;
  do
  {
    if ( v16[11] )
    {
      v10[1] = fsub(v10[1], 1028443341);
    }
    else
    {
      Function_200d3f4((uint *)v10[26], 0);
      Function_200d3f4((uint *)v10[16], 0);
      Function_200d3f4((uint *)v10[21], 0);
    }
    v12 = 0x80000 - v10[6] * Function_201d250(v10[11] & 0xFFFF);
    v13 = Function_201d264(v10[11] & 0xFFFF);
    Function_200d614((uint *)v10[26], v12, 434176 - v10[6] * v13, v14);
    Function_200d550((int *)v10[26], &v18, &v17);
    Function_200d4c4((int *)v10[16], (short)(v18 - 32), (short)(*(ushort *)&v17 - 2));
    Function_200d4c4((int *)v10[21], (short)(v18 + 16), (short)(*(ushort *)&v17 - 2));
    Function_200d6e8((int *)v10[26], v10[1], v10[1]);
    Function_200d6e8((int *)v10[16], v10[1], v10[1]);
    Function_200d6e8((int *)v10[21], v10[1], v10[1]);
    ++v11;
    ++v10;
  }
  while ( v11 < 5 );
  return v16[11] != 0;
}

//----- (02237814) --------------------------------------------------------
int __fastcall Function_2237814(int a1, int a2, int a3, int a4)
{
  short *v4;
  int **v5;
  int v6;
  int result;
  int v8;

  v8 = a4;
  v4 = &word_22497C0;
  v5 = *(int ***)(a1 + 2144);
  v6 = 0;
  do
  {
    Function_200d614(v5[26], *v4 << 12, v4[1] << 12, a4);
    Function_200d550(v5[26], (ushort *)&v8 + 1, &v8);
    Function_200d4c4(v5[16], (short)(HIWORD(v8) - 32), (short)(v8 - 2));
    result = Function_200d4c4(v5[21], (short)(HIWORD(v8) + 16), (short)(v8 - 2));
    ++v6;
    v4 += 2;
    ++v5;
  }
  while ( v6 < 5 );
  return result;
}

//----- (02237884) --------------------------------------------------------
int __fastcall Function_2237884(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  uint v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  BOOL v14;
  int v15;
  int v16;
  int v17;

  v4 = a1;
  if ( *(uint *)(a1 + 8) )
  {
    v5 = *(uint *)(a1 + 2144);
  }
  else
  {
    v5 = malloc(0x66u, 220);
    MI_CpuFill8((ushort *)v5, 0, 0xDCu);
    *(uint *)(v4 + 2144) = v5;
    v6 = 0;
    *(uint *)v5 = 0;
    v7 = (uint *)v5;
    v8 = 0;
    do
    {
      if ( (uint)(v6 - 2) > 1 )
        v7[6] = 64;
      else
        v7[6] = 52;
      v7[11] = v8;
      v7[1] = 1045220557;
      ++v6;
      ++v7;
      v8 += 72;
    }
    while ( v6 < 5 );
    Function_2019ebc(*(uint **)(v4 + 36), 3u);
    Function_2019ebc(*(uint **)(v4 + 36), 2u);
    Function_2019ebc(*(uint **)(v4 + 36), 7u);
    Function_2019ebc(*(uint **)(v4 + 36), 6u);
    Function_22315c8((int *)(v5 + 212), (int *)(v5 + 216), 0);
    Function_2231560((int *)(v5 + 212), (int *)(v5 + 216), 0, 0, 4, 2, 0);
    Function_2005748(0x561u);
    ++*(uint *)(v4 + 8);
  }
  v9 = *(uint *)(v4 + 8);
  if ( v9 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2237940 + v9) + 35879234);
  switch ( (uchar)v9 )
  {
    case 1:
      if ( Function_2231664((int *)v5, 1) )
      {
        v10 = (ushort *)Function_202d750(*(uint *)(v4 + 2096));
        *(uint *)(v5 + 144) = Function_202d230(v10, 0, 0);
        ++*(uint *)(v4 + 8);
      }
      Function_2003a2c(*(uint *)(v4 + 40), 2, 0xCu, *(uint *)v5, *(uint *)(v4 + 88));
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, *(uint *)v5, *(uint *)(v4 + 88));
      Function_2003a2c(*(uint *)(v4 + 40), 1, 2u, *(uint *)v5, *(uint *)(v4 + 88));
      break;
    case 2:
      Function_2234540(v4, 1);
      Function_2231454(v4);
      Function_2234540(v4, 0);
      Function_223376c(v4, 0);
      Function_208b9e0(*(uint *)(v4 + 1776), 0);
      Function_2234314();
      Function_2019060(6u, 2);
      Function_2236e14((int *)v4, v11, v12, v13);
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0x1Cu, *(uint *)v5, *(uint *)(v4 + 88));
      ++*(uint *)(v4 + 8);
      break;
    case 3:
      if ( Function_2233790(v4) )
      {
        Function_2234540(v4, 1);
        Function_2236d48(v4);
        Function_22371cc(v4);
        Function_223712c(v4);
        Function_2234540(v4, 0);
        Function_201ff74(8u, 1);
        Function_201ff74(4u, 1);
        ++*(uint *)(v4 + 8);
      }
      break;
    case 4:
      v14 = Function_22375a4(v4, a2, a3, a4);
      Function_22315e0((int *)(v5 + 212), (uint *)(v5 + 216), 0, 0);
      Function_2231664((int *)v5, 0);
      if ( !v14 )
      {
        ++*(uint *)(v4 + 8);
        Function_2237814(v4, v15, v16, v17);
      }
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0x1Cu, *(uint *)v5, *(uint *)(v4 + 88));
      break;
    default:
      Function_222fb60((uint *)v4, 1);
      break;
  }
  return 0;
}

//----- (02237AC0) --------------------------------------------------------
int __fastcall Function_2237ac0(uint *a1)
{
  uint *v1;
  uint v3;
  uint v4;

  v1 = a1;
  if ( Function_20227c0(&v4, &v3) && v4 > 0x50 && v4 < 0xB0 && v3 > 0x98 && v3 < 0xB0 )
  {
    Function_2005748(0x563u);
    Function_222fb60(v1, 2);
  }
  return 0;
}

//----- (02237B00) --------------------------------------------------------
int __fastcall Function_2237b00(int a1, char a2)
{
  int v2;
  int *v3;
  uint v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = *(int **)(a1 + 2144);
  v4 = *(uint *)(a1 + 8);
  if ( v4 <= 4 )
    JUMPOUT(__CS__, (char *)&off_2237B1E + *((short *)&off_2237B1E + v4) + 2);
  switch ( a2 )
  {
    case 0:
      if ( !*v3 )
        Function_2005748(0x562u);
      if ( *v3 != 16 )
        *v3 += 2;
      Function_2003a2c(*(uint *)(v2 + 40), 3, 0x1Cu, *v3, *(uint *)(v2 + 88));
      Function_2003a2c(*(uint *)(v2 + 40), 1, 0x4018u, *v3, *(uint *)(v2 + 88));
      if ( !Function_22376c4(v2, v5, v6, v7) )
      {
        *v3 = 0;
        ++*(uint *)(v2 + 8);
      }
      break;
    case 1:
      *(uint *)(v2 + 8) = v4 + 1;
      goto LABEL_11;
    case 2:
LABEL_11:
      Function_2234540(v2, 1);
      Function_22374a8(v2);
      Function_2236de8(v2);
      Function_2234540(v2, 0);
      Function_201ff0c(8u, 0);
      Function_201ff0c(4u, 0);
      Function_201ff74(8u, 0);
      Function_201ff74(4u, 0);
      *v3 = 0;
      ++*(uint *)(v2 + 8);
      break;
    case 3:
      Function_222f824(1);
      Function_2234540(v2, 1);
      Function_223146c((int **)v2);
      Function_2234540(v2, 0);
      Function_2019ebc(*(uint **)(v2 + 36), 2u);
      Function_2019ebc(*(uint **)(v2 + 36), 6u);
      Function_2019ebc(*(uint **)(v2 + 36), 3u);
      Function_2019ebc(*(uint **)(v2 + 36), 7u);
      ++*(uint *)(v2 + 8);
      break;
    case 4:
      if ( *v3 )
      {
        *v3 -= 2;
      }
      else
      {
        *(uint *)(v2 + 8) = v4 + 1;
        Function_2231688(v3);
        Function_2003a2c(*(uint *)(v2 + 40), 2, 0xCu, *v3, *(uint *)(v2 + 88));
        Function_2003a2c(*(uint *)(v2 + 40), 3, 0x1Cu, *v3, *(uint *)(v2 + 88));
        Function_2003a2c(*(uint *)(v2 + 40), 1, 2u, *v3, *(uint *)(v2 + 88));
      }
      break;
    default:
      if ( Function_2231664(v3, 0) )
      {
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 4, 18, 7, 8);
        G2x_SetBlendAlpha_((int *)&REG_BLDCNT_SUB, 4, 18, 7, 8);
        free((int)v3);
        Function_22318e8(v2);
        Function_2231688(v3);
        Function_2003a2c(*(uint *)(v2 + 40), 2, 0xCu, 0x10u, *(uint *)(v2 + 88));
        Function_222fb44(v2, 1, 1, *(uint **)(v2 + 16));
        Function_222fb60((uint *)v2, 5);
      }
      else
      {
        Function_2003a2c(*(uint *)(v2 + 40), 3, 0xCu, *v3, *(uint *)(v2 + 88));
        Function_2003a2c(*(uint *)(v2 + 40), 1, 2u, *v3, *(uint *)(v2 + 88));
      }
      break;
  }
  return 0;
}

//----- (02237D24) --------------------------------------------------------
int __fastcall Function_2237d24(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = (int *)malloc(0x66u, 744);
  Call_FillMemWithValue(v2, 0, 0x2E8u);
  *(uint *)(v1 + 2144) = v2;
  LoadOverlay(22, 2, v3, v4);
  v2[134] = *(uint *)(v1 + 36);
  v2[135] = 72;
  v2[136] = 16;
  v2[137] = 102;
  v2[142] = (int)Function_2029c68(0x66u);
  v2[148] = (int)Function_2030a80(0x66u);
  Function_2019ebc(*(uint **)(v1 + 36), 2u);
  Function_2019ebc(*(uint **)(v1 + 36), 3u);
  Function_2019ebc(*(uint **)(v1 + 36), 6u);
  Function_2019ebc(*(uint **)(v1 + 36), 7u);
  Function_22315c8(v2, v2 + 1, 0);
  Function_222fb60((uint *)v1, 1);
  return 0;
}

//----- (02237DB8) --------------------------------------------------------
int __fastcall Function_2237db8(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2019060(0, 0);
      Function_2019060(2u, 0);
      Function_2019060(1u, 3);
      Function_2019060(3u, 2);
      Function_2019060(4u, 0);
      Function_2019060(6u, 1);
      Function_2019060(5u, 3);
      Function_2019060(7u, 2);
      Function_208b9e0(*(uint *)(v1 + 1776), 0);
      ++*(uint *)(v1 + 8);
    }
    else if ( v3 == 2 )
    {
      Function_223376c(a1, 0);
      Function_2234540(v1, 1);
      ++*(uint *)(v1 + 8);
    }
    else if ( Function_2233790(a1) )
    {
      Function_2234540(v1, 0);
      Function_2234540(v1, 1);
      Function_2231454(v1);
      Function_2239608(v1);
      Function_2234540(v1, 0);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_222fb60((uint *)v1, 2);
    }
  }
  else
  {
    if ( Function_2231664((int *)(v2 + 8), 1) )
      ++*(uint *)(v1 + 8);
    Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
    Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
    Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
  }
  return 0;
}

//----- (02237F08) --------------------------------------------------------
int __fastcall Function_2237f08(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      GetPaletteAdresses(a1[10], 0, 0, 512);
      ++v1[2];
    }
    else if ( v3 == 2 )
    {
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 0) )
      {
        Function_201ff0c(4u, 1);
        Function_201ff0c(1u, 1);
        Function_2239724(v1);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, v2[2], v1[22]);
    }
    else
    {
      Function_222fb60(a1, 3);
    }
  }
  else
  {
    Function_2239518();
    Function_22343b8((int)v1, 0x23u, 3u);
    Function_22343b8((int)v1, 0x25u, 7u);
    Function_201ff74(8u, 1);
    Function_201ff0c(8u, 1);
    Function_2234540((int)v1, 1);
    v4 = LoadVariableAreaAdress_e(v1[524]);
    v2[139] = Function_2029ca8(v4, 0);
    if ( !v2[138] )
    {
      v2[138] = ((int (__fastcall *)(int *, int))dword_225AF8C[0])(v2 + 134, v2[139]);
      ((void (__fastcall *)(int, int))dword_225B074[0])(v2[138], 1);
    }
    Function_2234540((int)v1, 0);
    Function_201ff0c(4u, 0);
    Function_201ff0c(1u, 0);
    SetMainLoopFunctionCall((int)Function_22394d8, (int)v1);
    ++v1[2];
  }
  if ( v2[138] )
  {
    Call_G3X_Reset();
    ((void (__fastcall *)(int))dword_225AFF8[0])(v2[138]);
    Function_20241bc(0, 0);
  }
  return 0;
}

//----- (02238048) --------------------------------------------------------
int __fastcall Function_2238048(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[536];
  if ( Function_2022760((uchar *)&dword_2248CB0) )
  {
    Function_2234520((int)v1);
    Function_222fb60(v1, 5);
  }
  if ( Function_2022760((uchar *)&dword_2248CB4) )
  {
    Function_2234520((int)v1);
    Function_222fb60(v1, 4);
  }
  if ( *(uint *)(v2 + 552) )
  {
    Call_G3X_Reset();
    ((void (__fastcall *)(uint))dword_225AFF8[0])(*(uint *)(v2 + 552));
    Function_20241bc(0, 0);
  }
  return 0;
}

//----- (022380B0) --------------------------------------------------------
int __fastcall Function_22380b0(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = *(int **)(a1 + 2144);
  if ( !Function_22411b8() )
    return 0;
  v7 = *(uint *)(v4 + 8);
  if ( v7 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_22380DE + v7) + 35881184);
  switch ( (uchar)v7 )
  {
    case 0:
      Function_2019060(0, 1);
      Function_2019060(1u, 3);
      Function_2019060(2u, 2);
      Function_2019060(3u, 1);
      Function_2019060(4u, 1);
      Function_2019060(5u, 3);
      Function_2019060(6u, 2);
      Function_2019060(7u, 1);
      free(v5[142]);
      Call_free7(v5[148]);
      Function_2019ebc(*(uint **)(v4 + 36), 2u);
      Function_2019ebc(*(uint **)(v4 + 36), 6u);
      Function_2239d0c(v4);
      ++*(uint *)(v4 + 8);
      break;
    case 1:
      Function_2231664(v5 + 2, 1);
      if ( Function_22315e0(v5, v5 + 1, 1, 0) )
      {
        Function_2234540(v4, 1);
        Function_22396e8(v4);
        Function_2234540(v4, 0);
        Function_2019ebc(*(uint **)(v4 + 36), 3u);
        Function_2019ebc(*(uint **)(v4 + 36), 7u);
        Function_2019184(*(uint *)(v4 + 36), 2u, 0, 0);
        Function_2019060(2u, 0);
        ++*(uint *)(v4 + 8);
      }
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, v5[2], *(uint *)(v4 + 88));
      break;
    case 2:
      Function_2234358(v4, *(uint *)(v4 + 1776), 128, 96);
      Function_208b9e0(*(uint *)(v4 + 1776), 1);
      Function_208ba08(*(uint *)(v4 + 1776), 24, 24);
      Function_2231aac(v4, 0x11Eu);
      v5[183] = (int)Function_2030a80(0x66u);
      Function_2030aa0(v5[183], *(uint *)(v4 + 2096));
      Function_2005748(0x565u);
      ++*(uint *)(v4 + 8);
      break;
    case 3:
      v8 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, int, int))dword_222B1B4[0])(v8, v5[183], v5[139]) == 1 )
      {
        Call_free7(v5[183]);
        ++*(uint *)(v4 + 8);
      }
      break;
    case 4:
      Function_2231b8c(v4);
      v9 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v9, &v14) == 1 )
      {
        Function_20057a4(1381, 0);
        Function_22348b8(v4, 0, *(uint *)(v14 + 12), *(uint *)(v14 + 4));
      }
      else
      {
        Function_20057a4(1381, 0);
        Function_2233704(v4, 47);
        Function_2005748(0x55Fu);
      }
      ++*(uint *)(v4 + 8);
      break;
    case 5:
      Function_208b9e0(*(uint *)(v4 + 1776), 0);
      Function_208ba08(*(uint *)(v4 + 1776), 0, 0);
      ++*(uint *)(v4 + 8);
      break;
    case 6:
      Function_2234540(v4, 1);
      Function_2231688(v5 + 2);
      Function_223146c((int **)v4);
      Function_2234540(v4, 0);
      Function_2019ebc(*(uint **)(v4 + 36), 2u);
      Function_2019ebc(*(uint **)(v4 + 36), 6u);
      Function_2019ebc(*(uint **)(v4 + 36), 3u);
      Function_2019ebc(*(uint **)(v4 + 36), 7u);
      Function_223376c(v4, 1);
      ++*(uint *)(v4 + 8);
      break;
    default:
      if ( Function_2233790(v4) )
      {
        if ( Function_2231664(v5 + 2, 0) )
        {
          if ( v5[138] )
          {
            ((void (*)(void))dword_225B020[0])();
            Function_222f834(v4);
            v10 = Function_2019060(2u, 0);
            Function_223956c(v10);
          }
          Function_22318e8(v4);
          Function_2231688(v5 + 2);
          Function_2003a2c(*(uint *)(v4 + 40), 2, 0xCu, 0x10u, *(uint *)(v4 + 88));
          Function_222fb44(v4, 1, 1, *(uint **)(v4 + 16));
          Function_222fb60((uint *)v4, 5);
          free((int)v5);
          UnloadOverlay(22, v11, v12, v13);
          SetMainLoopFunctionCall((int)Function_222f8e4, v4);
        }
        else
        {
          Function_2003a2c(*(uint *)(v4 + 40), 1, 2u, v5[2], *(uint *)(v4 + 88));
          Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, v5[2], *(uint *)(v4 + 88));
        }
      }
      break;
  }
  return 0;
}

//----- (022383E4) --------------------------------------------------------
int __fastcall Function_22383e4(int a1)
{
  int v1;
  int *v2;
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 1);
      if ( Function_22315e0(v2, v2 + 1, 1, 0) )
      {
        Function_2234540(v1, 1);
        Function_22396e8(v1);
        Function_2234540(v1, 0);
        Function_2019ebc(*(uint **)(v1 + 36), 3u);
        Function_2019ebc(*(uint **)(v1 + 36), 7u);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
    }
    else if ( v3 == 2 )
    {
      Function_2231688(v2 + 2);
      Function_2234540(v1, 1);
      Function_223146c((int **)v1);
      Function_2234540(v1, 0);
      Function_2019ebc(*(uint **)(v1 + 36), 2u);
      Function_2019ebc(*(uint **)(v1 + 36), 6u);
      Function_2019ebc(*(uint **)(v1 + 36), 3u);
      Function_2019ebc(*(uint **)(v1 + 36), 7u);
      Function_223376c(v1, 1);
      ++*(uint *)(v1 + 8);
    }
    else if ( Function_2233790(a1) )
    {
      if ( Function_2231664(v2 + 2, 0) )
      {
        Function_2234540(v1, 1);
        if ( v2[138] )
        {
          ((void (*)(void))dword_225B020[0])();
          Function_222f834(v1);
          v4 = Function_2019060(2u, 0);
          Function_223956c(v4);
        }
        Function_2234540(v1, 0);
        Function_22318e8(v1);
        Function_2231688(v2 + 2);
        Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
        Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
        Function_222fb60((uint *)v1, 5);
        free((int)v2);
        UnloadOverlay(22, v5, v6, v7);
        SetMainLoopFunctionCall((int)Function_222f8e4, v1);
      }
      else
      {
        Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, v2[2], *(uint *)(v1 + 88));
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
      }
    }
  }
  else
  {
    Function_2019060(0, 1);
    Function_2019060(1u, 3);
    Function_2019060(2u, 2);
    Function_2019060(3u, 1);
    Function_2019060(4u, 1);
    Function_2019060(5u, 3);
    Function_2019060(6u, 2);
    Function_2019060(7u, 1);
    free(v2[142]);
    Call_free7(v2[148]);
    Function_2019ebc(*(uint **)(v1 + 36), 2u);
    Function_2019ebc(*(uint **)(v1 + 36), 6u);
    Function_2239d0c(v1);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (022385EC) --------------------------------------------------------
int __fastcall Function_22385ec(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( a1[2] )
  {
    Function_222fb60(a1, 3);
  }
  else
  {
    Function_223958c();
    ++v1[2];
  }
  return 0;
}

//----- (02238610) --------------------------------------------------------
int __fastcall Function_2238610(uint *a1)
{
  uint *v1;
  int v2;
  uint v3;

  v1 = a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_223862E + v3) + 35882544);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_22343b8((int)a1, 0x3Cu, 7u);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      Function_201ff0c(4u, 1);
      Function_201ff74(4u, 1);
      *(uint *)(v2 + 464) = Function_2023fcc((int)&byte_22491F0, 9u, (int)Function_2239bac, (int)v1, 0x66u);
      ++v1[2];
      break;
    case 1:
      Function_2231664((int *)(v2 + 8), 0);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 0) )
      {
        Function_2231aac((int)v1, 0x72u);
        Function_2239bd8(v1);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, *(uint *)(v2 + 8), v1[22]);
      break;
    case 2:
      Function_202404c(*(int **)(v2 + 464));
      if ( Function_2022760((uchar *)&dword_2248CAC) || *(uint *)(v2 + 484) == 1 )
      {
        Function_2234520((int)v1);
        ++v1[2];
      }
      break;
    case 3:
      Function_2239ce8();
      Function_2024034(*(uint *)(v2 + 464));
      Function_2231b8c((int)v1);
      ++v1[2];
      goto LABEL_12;
    case 4:
LABEL_12:
      if ( *(uint *)(v2 + 484) == 1 )
      {
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 2) )
          ++v1[2];
      }
      else
      {
        Function_2231664((int *)(v2 + 8), 1);
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 2) )
          ++v1[2];
        Function_2003a2c(v1[10], 3, 0xCu, *(uint *)(v2 + 8), v1[22]);
      }
      break;
    default:
      if ( *(uint *)(v2 + 484) == 1 )
        Function_222fb60(a1, 4);
      else
        Function_222fb60(a1, 5);
      break;
  }
  return 0;
}

//----- (02238794) --------------------------------------------------------
int __fastcall Function_2238794(int a1)
{
  int v1;
  int *v2;
  uint v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_22387B4 + v3) + 35882934);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_223958c();
      Function_22343b8(v1, 0x3Au, 7u);
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      if ( Function_22315e0(*(int **)(a1 + 2144), v2 + 1, 0, 2) )
      {
        Function_2231aac(v1, 0x72u);
        Function_2234540(v1, 1);
        Function_22335b0(v1 + 1148, v1);
        v4 = dword_2248CDC;
        v5 = v2 + 123;
        v6 = 5;
        do
        {
          v7 = *v4;
          v8 = v4[1];
          v4 += 2;
          *v5 = v7;
          v5[1] = v8;
          v5 += 2;
          --v6;
        }
        while ( v6 );
        *v5 = *v4;
        v2[123] = v2[122];
        v2[124] = v2[117];
        Function_2233310((int *)(v1 + 1180));
        Function_2232594((uint *)(v1 + 1180), v1, v2[120], v2 + 123);
        Function_2233638(v1 + 1148, (uint *)(v1 + 1180));
        Function_223331c(v1 + 1180, v1, 2, v9);
        Function_2234540(v1, 0);
        v2[184] = 0;
        ++*(uint *)(v1 + 8);
      }
      break;
    case 2:
      Function_2233664(a1 + 1148);
      Function_22332ac(v1 + 1180, *(ushort *)(v1 + 1164));
      v10 = Function_2232f68(v1 + 1180, v1);
      if ( v10 )
      {
        v2[184] = v10;
        Function_2234520(v1);
        ++*(uint *)(v1 + 8);
      }
      if ( Function_2022760((uchar *)&dword_2248CAC) )
      {
        Function_2234520(v1);
        ++*(uint *)(v1 + 8);
      }
      break;
    case 3:
      Function_2231b8c(a1);
      Function_2234540(v1, 1);
      Function_2233600(v1 + 1148);
      Function_22332fc(v1 + 1180);
      Function_22334fc(v1 + 1180, v1);
      Function_2234540(v1, 0);
      ++*(uint *)(v1 + 8);
      goto LABEL_14;
    case 4:
LABEL_14:
      Function_2231664(v2 + 2, 1);
      if ( Function_22315e0(v2, v2 + 1, 1, 0) )
        ++*(uint *)(v1 + 8);
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
      break;
    default:
      Function_2239b7c();
      if ( v2[184] )
        Function_222fb60((uint *)v1, 6);
      else
        Function_222fb60((uint *)v1, 3);
      break;
  }
  return 0;
}

//----- (0223896C) --------------------------------------------------------
int __fastcall Function_223896c(int a1)
{
  int v1;
  int *v2;
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 1);
      if ( Function_22315e0(v2, v2 + 1, 1, 0) )
      {
        Function_2234540(v1, 1);
        Function_22396e8(v1);
        Function_2234540(v1, 0);
        Function_2019ebc(*(uint **)(v1 + 36), 3u);
        Function_2019ebc(*(uint **)(v1 + 36), 7u);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
    }
    else if ( v3 == 2 )
    {
      Function_2231688(v2 + 2);
      Function_2234540(v1, 1);
      Function_223146c((int **)v1);
      Function_2234540(v1, 0);
      Function_2019ebc(*(uint **)(v1 + 36), 2u);
      Function_2019ebc(*(uint **)(v1 + 36), 6u);
      Function_2019ebc(*(uint **)(v1 + 36), 3u);
      Function_2019ebc(*(uint **)(v1 + 36), 7u);
      Function_223376c(v1, 1);
      ++*(uint *)(v1 + 8);
    }
    else if ( Function_2233790(a1) )
    {
      if ( Function_2231664(v2 + 2, 0) )
      {
        Function_2234540(v1, 1);
        if ( v2[138] )
        {
          ((void (*)(void))dword_225B020[0])();
          Function_222f834(v1);
          v4 = Function_2019060(2u, 0);
          Function_223956c(v4);
        }
        Function_2234540(v1, 0);
        Function_22318e8(v1);
        Function_2231688(v2 + 2);
        Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
        Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
        Function_222fb60((uint *)v1, 5);
        free((int)v2);
        UnloadOverlay(22, v5, v6, v7);
        SetMainLoopFunctionCall((int)Function_222f8e4, v1);
      }
      else
      {
        Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, v2[2], *(uint *)(v1 + 88));
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
      }
    }
  }
  else
  {
    Function_2019060(0, 1);
    Function_2019060(1u, 3);
    Function_2019060(2u, 2);
    Function_2019060(3u, 1);
    Function_2019060(4u, 1);
    Function_2019060(5u, 3);
    Function_2019060(6u, 2);
    Function_2019060(7u, 1);
    free(v2[142]);
    Call_free7(v2[148]);
    Function_2019ebc(*(uint **)(v1 + 36), 2u);
    Function_2019ebc(*(uint **)(v1 + 36), 6u);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (02238B70) --------------------------------------------------------
int __fastcall Function_2238b70(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = (uint *)a1[536];
  if ( !Function_22411b8() )
    return 0;
  v7 = v4[2];
  if ( v7 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2238B9A + v7) + 35883932);
  switch ( (uchar)v7 )
  {
    case 0:
      Function_2234358((int)v4, v4[444], 128, 96);
      Function_208b9e0(v4[444], 1);
      Function_208ba08(v4[444], 24, 24);
      Function_2231aac((int)v4, 0x11Fu);
      Function_2005748(0x565u);
      ++v4[2];
      break;
    case 1:
      v8 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, uint))dword_222B1FC[0])(v8, v5[184]) == 1 )
        ++v4[2];
      break;
    case 2:
      Function_2231b8c((int)v4);
      v9 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v9, &v11) == 1 )
      {
        Function_20057a4(1381, 0);
        Function_22348b8((int)v4, 1u, *(uint *)(v11 + 12), *(uint *)(v11 + 4));
        v5[185] = 0;
        v4[3] = 0;
        Function_208b9e0(v4[444], 0);
        Function_222fb60(v4, 3);
      }
      else
      {
        Function_20057a4(1381, 0);
        Function_2005748(0x55Fu);
        ++v4[2];
      }
      break;
    case 3:
      Function_201ff0c(1u, 0);
      Function_201ff0c(4u, 0);
      Function_201ff74(4u, 0);
      Function_208b9e0(v4[444], 0);
      Function_208ba08(v4[444], 0, 0);
      ++v4[2];
      break;
    case 4:
      if ( v5[185] )
      {
        v5[141] = 0;
        v5[140] = 0;
        Function_222fb60(v4, 7);
      }
      else
      {
        Function_2231aac((int)v4, 0x125u);
        ++v4[2];
        v4[3] = 0;
      }
      break;
    default:
      v10 = v4[3] + 1;
      v4[3] = v10;
      if ( v10 >= 60 || Function_2022798() == 1 )
      {
        v4[3] = 0;
        Function_2231b8c((int)v4);
        Function_222fb60(v4, 3);
      }
      break;
  }
  return 0;
}

//----- (02238D04) --------------------------------------------------------
int __fastcall Function_2238d04(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      GetPaletteAdresses(a1[10], 0, 0, 512);
      ++v1[2];
    }
    else if ( v3 == 2 )
    {
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 0) )
      {
        ((void (__fastcall *)(int, int))dword_225B074[0])(v2[138], 1);
        Function_201ff0c(4u, 1);
        Function_201ff0c(1u, 1);
        Function_2239854(v1, v2[141]);
        Function_2239498(v1);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, v2[2], v1[22]);
    }
    else
    {
      Function_222fb60(a1, 8);
    }
  }
  else
  {
    v2[3] = 0;
    ((void (__fastcall *)(int, int))dword_222AE80[0])(v2[v2[141] + 143] + 128, v2[142]);
    v2[138] = ((int (__fastcall *)(int *, int))dword_225AF8C[0])(v2 + 134, v2[142]);
    v4 = ((int (__fastcall *)(int, uint))dword_225B074[0])(v2[138], 0);
    Function_2239518(v4);
    Function_22343b8((int)v1, 0x23u, 3u);
    Function_22343b8((int)v1, 0x24u, 7u);
    Function_201ff74(8u, 1);
    Function_201ff74(4u, 1);
    Function_201ff0c(8u, 1);
    Function_201ff0c(4u, 0);
    Function_201ff0c(1u, 0);
    SetMainLoopFunctionCall((int)Function_22394d8, (int)v1);
    ++v1[2];
  }
  if ( v2[138] )
  {
    Call_G3X_Reset();
    ((void (__fastcall *)(int))dword_225AFF8[0])(v2[138]);
    Function_20241bc(0, 0);
  }
  return 0;
}

//----- (02238E54) --------------------------------------------------------
int __fastcall Function_2238e54(uint *a1)
{
  uint *v1;
  uint *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = (uint *)a1[536];
  if ( Function_2022760((uchar *)&dword_2248CAC) )
  {
    Function_2234520((int)v1);
    Function_222fb60(v1, 9);
  }
  if ( Function_2022760((uchar *)&dword_2248CB8) )
  {
    Function_2234520((int)v1);
    Function_222fb60(v1, 10);
  }
  if ( Function_2022760((uchar *)&dword_2248CBC) )
  {
    v3 = v2[141];
    if ( !v3 )
      v3 = v2[185];
    v2[141] = v3 - 1;
    Function_2234520((int)v1);
    Function_222fb60(v1, 11);
  }
  if ( Function_2022760((uchar *)dword_2248CC0) )
  {
    s32_div_f(++v2[141], v2[185]);
    v2[141] = v4;
    Function_2234520((int)v1);
    Function_222fb60(v1, 11);
  }
  if ( v2[138] )
  {
    Call_G3X_Reset();
    ((void (__fastcall *)(uint))dword_225AFF8[0])(v2[138]);
    Function_20241bc(0, 0);
  }
  return 0;
}

//----- (02238F24) --------------------------------------------------------
int __fastcall Function_2238f24(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 1);
      if ( Function_22315e0(v2, v2 + 1, 1, 0) )
      {
        if ( v2[138] )
        {
          ((void (*)(void))dword_225B020[0])();
          Function_222f834(v1);
          Function_2019060(2u, 0);
          v2[138] = 0;
          Function_223956c(552);
        }
        Function_2019ebc(*(uint **)(v1 + 36), 3u);
        Function_2019ebc(*(uint **)(v1 + 36), 7u);
        Function_2019ebc(*(uint **)(v1 + 36), 2u);
        Function_2019ebc(*(uint **)(v1 + 36), 6u);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
    }
    else
    {
      Function_222fb60((uint *)a1, 3);
    }
  }
  else
  {
    if ( v2[3] )
    {
      Function_2234540(a1, 1);
      Function_2232394((int)(v2 + 148), v1);
      Function_2234540(v1, 0);
    }
    else
    {
      Function_2019ebc(*(uint **)(a1 + 36), 2u);
      Function_2019ebc(*(uint **)(v1 + 36), 6u);
      Function_2239d0c(v1);
    }
    Function_2239424(v1);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223900C) --------------------------------------------------------
int __fastcall Function_223900c(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_223902A + v3) + 35885100);
  switch ( (uchar)v3 )
  {
    case 0:
      if ( *(uint *)(v2 + 12) )
      {
        Function_2234540(a1, 1);
        Function_2232394(v2 + 592, v1);
        Function_2234540(v1, 0);
      }
      else
      {
        Function_2239d0c(a1);
        Function_2019ebc(*(uint **)(v1 + 36), 2u);
      }
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 1, 1) )
      {
        if ( !*(uint *)(v2 + 12) )
        {
          if ( *(uint *)(v2 + 552) )
          {
            ((void (*)(void))dword_225B020[0])();
            Function_222f834(v1);
            Function_2019060(2u, 0);
            *(uint *)(v2 + 552) = 0;
            Function_223956c(552);
          }
          Function_2019ebc(*(uint **)(v1 + 36), 2u);
          Function_2019ebc(*(uint **)(v1 + 36), 3u);
          Function_201ff0c(4u, 0);
        }
        ++*(uint *)(v1 + 8);
      }
      break;
    case 2:
      if ( *(uint *)(v2 + 12) )
      {
        ((void (__fastcall *)(int, uint))dword_222AE80[0])(
          *(uint *)(v2 + 4 * *(uint *)(v2 + 564) + 572) + 128,
          *(uint *)(v2 + 568));
        *(uint *)(v2 + 552) = ((int (__fastcall *)(int, uint))dword_225AF8C[0])(v2 + 536, *(uint *)(v2 + 568));
        v6 = ((int (__fastcall *)(uint, uint))dword_225B074[0])(*(uint *)(v2 + 552), 0);
        Function_2239518(v6);
        Function_22343b8(v1, 0x23u, 3u);
        Function_201ff74(8u, 1);
        Function_201ff0c(8u, 1);
        Function_201ff0c(4u, 0);
        Function_201ff0c(1u, 0);
      }
      else
      {
        Function_2234540(a1, 1);
        ((void (__fastcall *)(uint, uint))dword_222AFC0[0])(
          *(uint *)(v2 + 4 * *(uint *)(v2 + 564) + 572),
          *(uint *)(v2 + 592));
        Function_2232378((char **)(v2 + 592), v1, v4, v5);
        Function_22323b8(v2 + 592, 0);
        Function_2234540(v1, 0);
        Function_22343b8(v1, 0x50u, 3u);
      }
      ++*(uint *)(v1 + 8);
      break;
    case 3:
      if ( *(uint *)(v2 + 12) )
        GetPaletteAdresses(*(uint *)(a1 + 40), 0, 0, 512);
      ++*(uint *)(v1 + 8);
      break;
    case 4:
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 0, 1) )
      {
        if ( *(uint *)(v2 + 12) )
        {
          Function_2239854(v1, *(uint *)(v2 + 564));
          ((void (__fastcall *)(uint, int))dword_225B074[0])(*(uint *)(v2 + 552), 1);
          Function_201ff0c(4u, 1);
          Function_201ff0c(1u, 1);
        }
        else
        {
          Function_22323b8(v2 + 592, 1);
          Function_201ff0c(4u, 1);
        }
        ++*(uint *)(v1 + 8);
      }
      break;
    default:
      *(uint *)(v2 + 12) ^= 1u;
      Function_2239440();
      Function_222fb60((uint *)v1, 8);
      break;
  }
  return 0;
}

//----- (0223921C) --------------------------------------------------------
int __fastcall Function_223921c(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_223923A + v3) + 35885628);
  switch ( (uchar)v3 )
  {
    case 0:
      if ( *(uint *)(v2 + 12) )
      {
        Function_2234540(a1, 1);
        Function_2232394(v2 + 592, v1);
        Function_2234540(v1, 0);
      }
      else
      {
        Function_2239d0c(a1);
        Function_2019ebc(*(uint **)(v1 + 36), 2u);
      }
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 1, 1) )
      {
        if ( !*(uint *)(v2 + 12) )
        {
          if ( *(uint *)(v2 + 552) )
          {
            ((void (*)(void))dword_225B020[0])();
            Function_222f834(v1);
            Function_2019060(2u, 0);
            *(uint *)(v2 + 552) = 0;
            Function_223956c(552);
          }
          Function_2019ebc(*(uint **)(v1 + 36), 2u);
          Function_2019ebc(*(uint **)(v1 + 36), 3u);
          Function_201ff0c(4u, 0);
        }
        ++*(uint *)(v1 + 8);
      }
      break;
    case 2:
      Function_2234540(a1, 1);
      if ( *(uint *)(v2 + 12) )
      {
        ((void (__fastcall *)(uint, uint))dword_222AFC0[0])(
          *(uint *)(v2 + 4 * *(uint *)(v2 + 564) + 572),
          *(uint *)(v2 + 592));
        Function_2232378((char **)(v2 + 592), v1, v5, v6);
        Function_22323b8(v2 + 592, 0);
        Function_22343b8(v1, 0x50u, 3u);
        Function_201ff0c(4u, 0);
      }
      else
      {
        ((void (__fastcall *)(int, uint))dword_222AE80[0])(
          *(uint *)(v2 + 4 * *(uint *)(v2 + 564) + 572) + 128,
          *(uint *)(v2 + 568));
        *(uint *)(v2 + 552) = ((int (__fastcall *)(int, uint))dword_225AF8C[0])(v2 + 536, *(uint *)(v2 + 568));
        v4 = ((int (__fastcall *)(uint, uint))dword_225B074[0])(*(uint *)(v2 + 552), 0);
        Function_2239518(v4);
        Function_22343b8(v1, 0x23u, 3u);
        Function_201ff74(8u, 1);
        Function_201ff0c(8u, 1);
        Function_201ff0c(4u, 0);
        Function_201ff0c(1u, 0);
      }
      Function_2234540(v1, 0);
      ++*(uint *)(v1 + 8);
      break;
    case 3:
      if ( !*(uint *)(v2 + 12) )
        GetPaletteAdresses(*(uint *)(a1 + 40), 0, 0, 512);
      ++*(uint *)(v1 + 8);
      break;
    case 4:
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 0, 1) )
      {
        if ( *(uint *)(v2 + 12) )
        {
          Function_22323b8(v2 + 592, 1);
          Function_201ff0c(4u, 1);
        }
        else
        {
          Function_2239854(v1, *(uint *)(v2 + 564));
          ((void (__fastcall *)(uint, int))dword_225B074[0])(*(uint *)(v2 + 552), 1);
          Function_201ff0c(4u, 1);
          Function_201ff0c(1u, 1);
        }
        ++*(uint *)(v1 + 8);
      }
      break;
    default:
      Function_222fb60((uint *)a1, 8);
      break;
  }
  return 0;
}

//----- (02239424) --------------------------------------------------------
uint __fastcall Function_2239424(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  Function_201acf4(*(uint *)(a1 + 2144) + 208);
  return Function_201a8fc(v1 + 208);
}

//----- (02239440) --------------------------------------------------------
int __fastcall Function_2239440(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  ushort *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 2144) + 208;
  Function_201ada4_ClearTextBox(v4, 0);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 72), v3);
  Function_223429c(v4, (int)v5);
  Function_201d78c(v4, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  return Function_201a9a4(v4);
}

//----- (02239498) --------------------------------------------------------
int __fastcall Function_2239498(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144) + 208;
  Function_201a7a0(v2);
  Function_201a7e8(*(uint **)(v1 + 36), v2, 6, 8, 3, 0x10u, 2u, 14, 1);
  return Function_2239440(v1, 0x79u);
}

//----- (022394D8) --------------------------------------------------------
int __fastcall Function_22394d8(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(*(uint *)(a1 + 2144) + 552) )
    ((void (*)(void))dword_225B06C[0])();
  Function_201dcac();
  Function_2003694(*(uint *)(v1 + 40));
  Function_201c2b8(*(uint *)(v1 + 36));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (02239518) --------------------------------------------------------
int Function_2239518()
{
  int result;

  REG_DISPCNT = REG_DISPCNT & 0xFFFF1FFF | 0x2000;
  WIN_IN = WIN_IN & 0xFFC0 | 0x3F;
  WIN_OUT = WIN_OUT & 0xFFC0 | 0x3E;
  WIN0_X1 = 18616;
  result = 67108932;
  WIN0_Y1 = 4240;
  return result;
}

//----- (0223956C) --------------------------------------------------------
uint Function_223956c()
{
  uint result;

  REG_DISPCNT &= 0xFFFF1FFF;
  result = REG_DISPCNT_SUB & 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  return result;
}

//----- (0223958C) --------------------------------------------------------
int __fastcall Function_223958c(int a1, int a2)
{
  uint **v2;
  int v3;
  int v4;

  v2 = *(uint ***)(a1 + 2144);
  if ( a2 )
  {
    Function_200d3f4(v2[110], 0);
    Function_20129d0(v2[111], 0);
    Function_200d4c4(v2[103], 80, 232);
  }
  else
  {
    Function_200d3f4(v2[110], 1);
    Function_20129d0(v2[111], 1);
    Function_200d4c4(v2[103], 32, 232);
  }
  Function_20128c4(v2[104], 36, -8, v3);
  return Function_20128c4(v2[111], 36, -8, v4);
}

//----- (02239608) --------------------------------------------------------
int __fastcall Function_2239608(int a1)
{
  int v1;
  int **v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = *(int ***)(a1 + 2144);
  Function_22312cc(a1, 2);
  v2[103] = Function_22313e0(v1, 2, v3, v4);
  v2[110] = Function_22313e0(v1, 2, v5, v6);
  Function_223118c((int)(v2 + 102), v1 + 20, 2);
  Function_223118c((int)(v2 + 109), v1 + 20, 2);
  Function_223124c((int)(v2 + 102), v1 + 20, 3u);
  Function_223124c((int)(v2 + 109), v1 + 20, 0x35u);
  Function_200d364(v2[103], 0);
  Function_200d364(v2[110], 4u);
  Function_200d4c4(v2[103], 32, 232);
  Function_200d4c4(v2[110], 128, 232);
  Function_20128c4(v2[104], 36, -8, v7);
  Function_20128c4(v2[111], 36, -8, v8);
  Function_20129d0(v2[104], 1);
  Function_20129d0(v2[111], 1);
  return Function_223958c(v1, 0);
}

//----- (022396E8) --------------------------------------------------------
int __fastcall Function_22396e8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_22312b0(v2 + 408);
  Function_22312b0(v2 + 436);
  Function_200d0f4(*(uint *)(v2 + 412));
  Function_200d0f4(*(uint *)(v2 + 440));
  return Function_22313bc(v1);
}

//----- (02239724) --------------------------------------------------------
uint __fastcall Function_2239724(int a1)
{
  int v1;
  int v2;
  uint result;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint v14;
  int *v15;
  ushort *v16;
  int v17;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  result = Function_201a7cc(*(uint *)(a1 + 2144) + 16);
  if ( result != 1 )
  {
    v17 = v2 + 16;
    Function_201a7a0(v2 + 16);
    Function_201a7e8(*(uint **)(v1 + 36), v2 + 16, 2, 16, 19, 0x10u, 4u, 14, 300);
    Function_201ada4_ClearTextBox(v2 + 16, 0);
    v15 = (int *)Function_2231690(0x66u);
    v4 = Function_2023790(255, 0x66u);
    v16 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x38u);
    v5 = (ushort *)Function_2023790(255, 0x66u);
    Function_202a1a0(*(int **)(v2 + 556), v5);
    Function_22349a8(v1, (int)v5);
    v6 = Function_202a1f4(*(uint *)(v2 + 556));
    Function_200b48c(v15, 0, (int)v5);
    Function_200be48(v15, 1u, v6, v7);
    Function_200c388((uint *)v15, v4, (int)v16);
    v8 = 0;
    v14 = Function_2023c5c(v4);
    if ( v14 )
    {
      v9 = 0;
      do
      {
        Function_2023c9c((int)v5, v4, v8);
        Function_2002d7c(0, (int)v5, 0);
        Function_201d78c(v17, 0);
        ++v8;
        v9 += 16;
      }
      while ( v8 < v14 );
    }
    Function_201a9a4(v17);
    Function_20237bc_FreeMsg((int)v5, v10);
    Function_20237bc_FreeMsg((int)v16, v11);
    Function_20237bc_FreeMsg(v4, v12);
    result = Function_200b3f0((uint *)v15, v13);
  }
  return result;
}

//----- (02239854) --------------------------------------------------------
uint __fastcall Function_2239854(int a1)
{
  int v1;
  int v2;
  uint result;
  int v4;
  ushort *v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint v14;
  int *v15;
  ushort *v16;
  int v17;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  result = Function_201a7cc(*(uint *)(a1 + 2144) + 16);
  if ( result != 1 )
  {
    v17 = v2 + 16;
    Function_201a7a0(v2 + 16);
    Function_201a7e8(*(uint **)(v1 + 36), v2 + 16, 2, 16, 19, 0x10u, 4u, 14, 300);
    Function_201ada4_ClearTextBox(v2 + 16, 0);
    v15 = (int *)Function_2231690(0x66u);
    v4 = Function_2023790(255, 0x66u);
    v16 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x38u);
    v5 = (ushort *)Function_2023790(255, 0x66u);
    Function_202a1a0(*(int **)(v2 + 568), v5);
    Function_22349a8(v1, (int)v5);
    v6 = Function_202a1f4(*(uint *)(v2 + 568));
    Function_200b48c(v15, 0, (int)v5);
    Function_200be48(v15, 1u, v6, v7);
    Function_200c388((uint *)v15, v4, (int)v16);
    v8 = 0;
    v14 = Function_2023c5c(v4);
    if ( v14 )
    {
      v9 = 0;
      do
      {
        Function_2023c9c((int)v5, v4, v8);
        Function_2002d7c(0, (int)v5, 0);
        Function_201d78c(v17, 0);
        ++v8;
        v9 += 16;
      }
      while ( v8 < v14 );
    }
    Function_201a9a4(v17);
    Function_20237bc_FreeMsg((int)v5, v10);
    Function_20237bc_FreeMsg((int)v16, v11);
    Function_20237bc_FreeMsg(v4, v12);
    result = Function_200b3f0((uint *)v15, v13);
  }
  return result;
}

//----- (02239984) --------------------------------------------------------
int __fastcall Function_2239984(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  ushort *v8;
  ushort *v9;
  uint *v11;
  uint *v12;
  int v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v13 = 0;
  v5 = *((ushort *)dword_22497D4 + a2 + 1);
  v6 = *((ushort *)dword_22497D4 + a2);
  v12 = Function_2231948(102, 0, (uint *)&v14, a4);
  v11 = (uint *)LoadPokedexDataAdress(*(uint *)(v4 + 2096));
  v7 = v6;
  if ( v6 < v5 )
  {
    v8 = (ushort *)((char *)v12 + 2 * v6);
    do
    {
      if ( !WasPkmnSeen(v11, (ushort)*v8) )
        *v8 = -1;
      ++v7;
      ++v8;
    }
    while ( v7 < v5 );
  }
  if ( v6 < v5 )
  {
    v9 = (ushort *)((char *)v12 + 2 * v6);
    while ( *v9 == 0xFFFF )
    {
      ++v6;
      ++v9;
      if ( v6 >= v5 )
        goto LABEL_11;
    }
    v13 = 1;
  }
LABEL_11:
  free((int)v12);
  return v13;
}

//----- (02239A0C) --------------------------------------------------------
int __fastcall Function_2239a0c(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  ushort *v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  ushort *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int result;
  int v21;
  uint *v22;
  uint *v23;

  v4 = a1;
  v5 = *(uint **)(a1 + 2144);
  v6 = *((ushort *)dword_22497D4 + a2 + 1);
  v21 = *((ushort *)dword_22497D4 + a2);
  v5[119] = Function_2231948(102, 0, v5 + 118, a4);
  v23 = Function_2231948(102, 0, v5 + 118, v7);
  v22 = (uint *)LoadPokedexDataAdress(*(uint *)(v4 + 2096));
  v8 = v21;
  v5[117] = 0;
  if ( v21 < v6 )
  {
    v9 = (ushort *)((char *)v23 + 2 * v21);
    do
    {
      if ( WasPkmnSeen(v22, (ushort)*v9) )
        ++v5[117];
      else
        *v9 = -1;
      ++v8;
      ++v9;
    }
    while ( v8 < v6 );
  }
  v10 = 0;
  if ( v21 < v6 )
  {
    v11 = (ushort *)((char *)v23 + 2 * v21);
    v12 = 0;
    do
    {
      v13 = *v11;
      if ( v13 != 0xFFFF )
      {
        ++v10;
        *(ushort *)(v5[119] + v12) = v13;
        v12 += 2;
      }
      ++v11;
      ++v21;
    }
    while ( v21 < v6 );
  }
  if ( v10 < v5[118] )
  {
    v14 = 2 * v10;
    v15 = (ushort *)((char *)v23 + 2 * v10);
    do
    {
      ++v10;
      *(ushort *)(v5[119] + v14) = *v15;
      ++v15;
      v14 += 2;
    }
    while ( v10 < v5[118] );
  }
  free((int)v23);
  v5[122] = malloc(0x66u, 16 * v5[117]);
  MI_CpuFill8((ushort *)v5[122], 0, 16 * v5[117]);
  v16 = 0;
  if ( v5[117] > 0 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      ++v16;
      *(uint *)(v5[122] + v18) = *(ushort *)(v5[119] + v17);
      v19 = *(ushort *)(v5[119] + v17);
      v17 += 2;
      *(uint *)(v5[122] + v18 + 4) = v19;
      v18 += 16;
    }
    while ( v16 < v5[117] );
  }
  v5[120] = LoadFromMsgNARC(0, 26, 412, 0x66u);
  result = 484;
  v5[121] = 1;
  return result;
}

//----- (02239B7C) --------------------------------------------------------
int __fastcall Function_2239b7c(int a1)
{
  int v1;
  int result;

  v1 = *(uint *)(a1 + 2144);
  Function_200b190(*(ushort **)(v1 + 480));
  free(*(uint *)(v1 + 488));
  free(*(uint *)(v1 + 476));
  result = 484;
  *(uint *)(v1 + 484) = 0;
  return result;
}

//----- (02239BAC) --------------------------------------------------------
int __fastcall Function_2239bac(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = result;
  v5 = a3;
  if ( !a2 )
  {
    if ( Function_2239984(a3, result, a3, a4) )
      result = Function_2239a0c(v5, v4, v6, v7);
    else
      result = Function_2005748(0x564u);
  }
  return result;
}

//----- (02239BD8) --------------------------------------------------------
int __fastcall Function_2239bd8(int a1)
{
  uchar *v1;
  uint v2;
  int v3;
  uint v4;
  uint v5;
  uint v6;
  uint v7;
  ushort *v8;
  int v9;
  int v10;
  int v11;
  int result;
  int v13;
  int v14;

  v13 = a1;
  v14 = 1;
  v1 = (uchar *)&byte_22491F0;
  v2 = 0;
  v3 = *(uint *)(a1 + 2144) + 208;
  do
  {
    v4 = (uint)v1[2] << 21 >> 24;
    v5 = (uint)*v1 << 21 >> 24;
    v6 = (((uint)v1[3] >> 3) - v4) & 0xFF;
    v7 = (((uint)v1[1] >> 3) - v5) & 0xFF;
    Function_201a7a0(v3);
    Function_201a7e8(*(uint **)(v13 + 36), v3, 6, v4, v5, v6, v7, 14, v14);
    Function_201ada4_ClearTextBox(v3, 0);
    v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v13 + 72), v2 + 68);
    Function_223429c(v3, (int)v8);
    Function_2239984(v13, v2, v9, v10);
    Function_201d78c(v3, 0);
    Function_201a9a4(v3);
    Function_20237bc_FreeMsg((int)v8, v11);
    ++v2;
    result = v14 + v6 * v7;
    v14 += v6 * v7;
    v3 += 16;
    v1 += 4;
  }
  while ( v2 < 9 );
  return result;
}

//----- (02239CE8) --------------------------------------------------------
uint __fastcall Function_2239ce8(int a1)
{
  uint v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = *(uint *)(a1 + 2144) + 208;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 9 );
  return result;
}

//----- (02239D0C) --------------------------------------------------------
uint __fastcall Function_2239d0c(int a1)
{
  int v1;
  uint result;

  v1 = *(uint *)(a1 + 2144);
  result = Function_201a7cc(*(uint *)(a1 + 2144) + 16);
  if ( result == 1 )
  {
    Function_201acf4(v1 + 16);
    result = Function_201a8fc(v1 + 16);
  }
  return result;
}

//----- (02239D34) --------------------------------------------------------
void Function_2239d34()
{
  ;
}

//----- (02239D38) --------------------------------------------------------
int __fastcall Function_2239d38(int result, uint *a2)
{
  int v2;
  int v3;

  v2 = *(uint *)(result + 2144);
  if ( *a2 != 1 )
  {
    v3 = Function_224112c(result);
    result = ((int (__fastcall *)(int, int, int))dword_222BBBC[53])(v3, v2 + 572, 5);
    *(uint *)(v2 + 740) = result;
  }
  return result;
}

//----- (02239D60) --------------------------------------------------------
int __fastcall Function_2239d60(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = *(uint *)(a1 + 2144);
  *(uint *)(v3 + 11992) = Function_2030a80(0x66u);
  return ((int (__fastcall *)(uint, uint))dword_222AFC0[0])(*(uint *)(v3 + 4 * v2 + 908), *(uint *)(v3 + 11992));
}

//----- (02239D8C) --------------------------------------------------------
uint __fastcall Function_2239d8c(int a1)
{
  return Call_free7(*(uint *)(*(uint *)(a1 + 2144) + 11992));
}

//----- (02239DA4) --------------------------------------------------------
int __fastcall Function_2239da4(int a1)
{
  int v1;

  v1 = 0;
  do
  {
    if ( *(ushort *)(a1 + 40) )
      return 1;
    ++v1;
    a1 += 2;
  }
  while ( v1 < 30 );
  return 0;
}

//----- (02239DBC) --------------------------------------------------------
int __fastcall Function_2239dbc(int result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = *(uint *)(result + 432);
  v2 = v1;
  if ( v1 >= 30 )
  {
LABEL_6:
    v4 = 0;
    if ( v1 > 0 )
    {
      v5 = result;
      while ( !*(ushort *)(v5 + 44) )
      {
        ++v4;
        v5 += 2;
        if ( v4 >= v1 )
          return result;
      }
      *(uint *)(result + 432) = v4;
    }
  }
  else
  {
    v3 = result + 2 * v1;
    while ( !*(ushort *)(v3 + 44) )
    {
      ++v2;
      v3 += 2;
      if ( v2 >= 30 )
        goto LABEL_6;
    }
    *(uint *)(result + 432) = v2;
  }
  return result;
}

//----- (02239E0C) --------------------------------------------------------
uint *__fastcall Function_2239e0c(uint *result, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = (uint *)a3;
  v4 = *(uint *)(a3 + 2144);
  switch ( (uchar)result )
  {
    case 0:
      if ( a2 == 2 )
      {
        Function_2234520(a3);
        v5 = *(uint *)(v4 + 416);
        if ( v5 <= 0 )
          v6 = 17;
        else
          v6 = v5 - 1;
        *(uint *)(v4 + 416) = v6;
        result = Function_222fb60(v3, 4);
      }
      break;
    case 1:
      if ( a2 == 2 )
      {
        Function_2234520(a3);
        s32_div_f(++*(uint *)(v4 + 416), 18);
        *(uint *)(v4 + 416) = v7;
        result = Function_222fb60(v3, 4);
      }
      break;
    case 2:
      if ( !a2 )
      {
        Function_2234520(a3);
        result = Function_222fb60(v3, 9);
      }
      break;
    case 3:
      if ( !a2 )
      {
        Function_2234520(a3);
        if ( Function_2239da4(v4 + 4) )
          result = Function_222fb60(v3, 5);
        else
          result = (uint *)Function_223ac0c(v3, 271);
      }
      break;
    default:
      return result;
  }
  return result;
}

//----- (02239EC0) --------------------------------------------------------
uint *__fastcall Function_2239ec0(int a1, int a2, int a3)
{
  int v3;
  uint *v4;
  uint *result;
  int v6;

  v3 = a1;
  v4 = (uint *)a3;
  result = (uint *)2144;
  v6 = *(uint *)(a3 + 2144);
  if ( !a2 )
  {
    if ( v3 == 6 )
    {
      Function_2234520(a3);
      result = Function_222fb60(v4, 7);
    }
    else
    {
      Function_2234520(a3);
      *(uint *)(v6 + 896) = v3;
      result = Function_222fb60(v4, 8);
    }
  }
  return result;
}

//----- (02239EFC) --------------------------------------------------------
uint *__fastcall Function_2239efc(int a1, int a2, int a3)
{
  int v3;
  uint *v4;
  uint *result;
  int v6;

  v3 = a1;
  v4 = (uint *)a3;
  result = (uint *)2144;
  v6 = *(uint *)(a3 + 2144);
  if ( !a2 )
  {
    if ( v3 == 6 )
    {
      Function_2234520(a3);
      result = Function_222fb60(v4, 12);
    }
    else
    {
      Function_2234520(a3);
      *(uint *)(v6 + 896) = v3;
      result = Function_222fb60(v4, 4);
    }
  }
  return result;
}

//----- (02239F38) --------------------------------------------------------
uint *__fastcall Function_2239f38(uint *result, int a2, int a3)
{
  uint *v3;
  int v4;

  v3 = (uint *)a3;
  v4 = *(uint *)(a3 + 2144);
  if ( !a2 )
  {
    if ( !result )
      goto LABEL_13;
    if ( result == (uint *)1 )
    {
      Function_2234520(a3);
      return Function_222fb60(v3, 9);
    }
    if ( result == (uint *)2 )
    {
      Function_2234520(a3);
      result = Function_222fb60(v3, 6);
    }
    else
    {
LABEL_13:
      Function_2234520(a3);
      if ( *(uint *)(v4 + 12132) )
        result = Function_222fb60(v3, 8);
      else
        result = Function_222fb60(v3, 7);
    }
  }
  return result;
}

//----- (02239F98) --------------------------------------------------------
uint *__fastcall Function_2239f98(uint *result, int a2, int a3)
{
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;

  v3 = (uint *)a3;
  v4 = *(uint **)(a3 + 2144);
  if ( !a2 )
  {
    if ( result )
    {
      if ( result == (uint *)1 )
      {
        Function_2234520(a3);
        Function_208b9e0(v3[444], 0);
        Function_208ba08(v3[444], 0, 0);
        result = Function_222fb60(v3, 11);
      }
    }
    else
    {
      Function_2234520(a3);
      s32_div_f(++v4[108], 30);
      v4[108] = v5;
      Function_2239dbc((int)v4);
      s32_div_f(v4[108], 6);
      v4[3034] = v6;
      v4[3035] = s32_div_f(v4[108], 6);
      Function_208b8b8(v3[444], 24 * *((ushort *)v4 + 6068) + 110, 22 * v4[3035] + 52);
      Function_2234540((int)v3, 1);
      Function_223b140(v3);
      Function_223b050(v3);
      Function_2234540((int)v3, 0);
      Function_223adc0(v3, v4[108]);
      result = (uint *)432;
      v7 = v4[108];
      if ( *((ushort *)v4 + v7 + 22) )
      {
        result = (uint *)Function_223adb0(v4[86], 1 << v7);
        if ( result != (uint *)1 )
          result = (uint *)Function_2005844(
                               *((ushort *)v4 + v4[108] + 22),
                               *((uchar *)v4 + v4[108] + 348));
      }
    }
  }
  return result;
}

//----- (0223A0AC) --------------------------------------------------------
int __fastcall Function_223a0ac(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_223131c(a1, 2);
  Function_223454c(v1, v2 + 840, 2, 3, 32, 232, 36, -8, 0, 1);
  return Function_223454c(v1, v2 + 868, 2, 53, 128, 232, 36, -8, 1u, 1);
}

//----- (0223A110) --------------------------------------------------------
int __fastcall Function_223a110(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_22345a8(v2 + 840);
  Function_22345a8(v2 + 868);
  return Function_22313bc(v1);
}

//----- (0223A138) --------------------------------------------------------
int __fastcall Function_223a138(int result)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = result;
  while ( !*(ushort *)(v2 + 44) )
  {
    ++v1;
    v2 += 2;
    if ( v1 >= 30 )
      return result;
  }
  *(uint *)(result + 432) = v1;
  return result;
}

//----- (0223A154) --------------------------------------------------------
int __fastcall Function_223a154(int a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;

  v4 = a3;
  v5 = a2;
  v6 = a4;
  v7 = a1;
  Call_FillMemWithValue(a4, 0, 0x19Cu);
  return ((int (__fastcall *)(int, int, int, int *))dword_222AE80[2])(v7, v5, v4, v6);
}

//----- (0223A17C) --------------------------------------------------------
int __fastcall Function_223a17c(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc(0x66u, 12144);
  Call_FillMemWithValue(v2, 0, 0x2F70u);
  *(uint *)(v1 + 2144) = v2;
  Function_2019ebc(*(uint **)(v1 + 36), 2u);
  Function_2019ebc(*(uint **)(v1 + 36), 3u);
  Function_2019ebc(*(uint **)(v1 + 36), 6u);
  Function_2019ebc(*(uint **)(v1 + 36), 7u);
  *v2 = LoadVariableAreaAdress_25(*(uint *)(v1 + 2096));
  Function_223a154(*(uint *)(v1 + 2096), *v2, v2[104], v2 + 1);
  Function_223a138((int)v2);
  Function_22315c8(v2 + 105, v2 + 106, 0);
  v2[204] = Function_2023fcc((int)dword_2248DB4, 4u, (int)Function_2239e0c, v1, 0x66u);
  v2[205] = Function_2023fcc((int)dword_2248DDC, 7u, (int)Function_2239ec0, v1, 0x66u);
  v2[206] = Function_2023fcc((int)dword_2248DDC, 7u, (int)Function_2239efc, v1, 0x66u);
  v2[207] = Function_2023fcc((int)dword_2248D6C, 3u, (int)Function_2239f38, v1, 0x66u);
  v2[208] = Function_2023fcc((int)dword_2248D54, 2u, (int)Function_2239f98, v1, 0x66u);
  v2[225] = (int)Function_2030a80(0x66u);
  Function_2030aa0(v2[225], *(uint *)(v1 + 2096));
  Function_222fb60((uint *)v1, 1);
  return 0;
}

//----- (0223A2A8) --------------------------------------------------------
int __fastcall Function_223a2a8(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2234540((int)a1, 1);
      Function_2231454((int)v1);
      Function_2234540((int)v1, 0);
      Function_223376c((int)v1, 0);
      Function_208b9e0(v1[444], 0);
      ++v1[2];
    }
    else if ( v3 == 2 )
    {
      if ( Function_2233790((int)a1) )
      {
        Function_2234540((int)v1, 1);
        Function_223a0ac((int)v1);
        Function_2234540((int)v1, 0);
        Function_2234314();
        ++v1[2];
      }
    }
    else
    {
      Function_222fb60(a1, 2);
    }
  }
  else
  {
    if ( Function_2231664((int *)(v2 + 428), 1) )
      ++v1[2];
    Function_2003a2c(v1[10], 2, 0xCu, *(uint *)(v2 + 428), v1[22]);
    Function_2003a2c(v1[10], 3, 0xCu, *(uint *)(v2 + 428), v1[22]);
    Function_2003a2c(v1[10], 1, 2u, *(uint *)(v2 + 428), v1[22]);
  }
  return 0;
}

//----- (0223A394) --------------------------------------------------------
int __fastcall Function_223a394(int a1)
{
  uint *v1;
  int *v2;
  uint v3;

  v1 = (uint *)a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_223A3B4 + v3) + 35890102);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2231560(v2 + 105, v2 + 106, 8, 18, 8, 18, (int *)1);
      Function_2234540((int)v1, 1);
      Function_223b140(v1);
      Function_223afec(v1);
      Function_223ad7c(v1);
      Function_2234540((int)v1, 0);
      ++v1[2];
      goto LABEL_5;
    case 1:
LABEL_5:
      if ( Function_22315e0(v2 + 105, v2 + 106, 1, 1) )
      {
        Function_223a154(v1[524], *v2, v2[104], v2 + 1);
        Function_223a138((int)v2);
        ++v1[2];
      }
      break;
    case 2:
      Function_2234540(a1, 1);
      Function_223b230(v1);
      Function_223b124(v1, 1);
      Function_223afc0(v1, 0);
      Function_2234540((int)v1, 0);
      ++v1[2];
      break;
    case 3:
      if ( Function_22315e0(v2 + 105, v2 + 106, 0, 1) )
      {
        Function_223adc0(v1, v2[108]);
        Function_223ad20(v1);
        Function_223ac0c(v1, 270);
        Function_223b124(v1, 0);
        Function_223afc0(v1, 1);
        Function_201ff0c(1u, 1);
        REG_BLDCNT = 0;
        Function_222fb60(v1, 3);
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (0223A4C8) --------------------------------------------------------
int __fastcall Function_223a4c8(int a1, int a2)
{
  uint **v2;
  int v3;
  int v4;

  v2 = *(uint ***)(a1 + 2144);
  if ( a2 )
  {
    Function_200d3f4(v2[218], 0);
    Function_20129d0(v2[219], 0);
    Function_200d4c4(v2[211], 80, 232);
  }
  else
  {
    Function_200d3f4(v2[218], 1);
    Function_20129d0(v2[219], 1);
    Function_200d4c4(v2[211], 32, 232);
  }
  Function_20128c4(v2[212], 36, -8, v3);
  return Function_20128c4(v2[219], 36, -8, v4);
}

//----- (0223A544) --------------------------------------------------------
int __fastcall Function_223a544(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 107, 0);
      if ( Function_22315e0(v2 + 105, v2 + 106, 0, 2) )
      {
        Function_201ff74(4u, 1);
        Function_222fb60((uint *)v1, 6);
        Function_223ac0c(v1, 272);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[107], *(uint *)(v1 + 88));
    }
  }
  else
  {
    Function_208b9e0(*(uint *)(v1 + 1780), 0);
    Function_2231664(v2 + 107, 1);
    if ( Function_22315e0(v2 + 105, v2 + 106, 1, 2) )
    {
      Function_200710c(*(uint *)(v1 + 20), 0x4Fu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_223ab14(v1);
      Function_223a4c8(v1, 1);
      ++*(uint *)(v1 + 8);
    }
    Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[107], *(uint *)(v1 + 88));
  }
  return 0;
}

//----- (0223A634) --------------------------------------------------------
int __fastcall Function_223a634(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 820));
  return 0;
}

//----- (0223A64C) --------------------------------------------------------
int __fastcall Function_223a64c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  char v6;
  uint v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = (uint *)a1[536];
  if ( !Function_22411b8() )
    return 0;
  v8 = v4[2];
  if ( v8 <= 7 )
    JUMPOUT(__CS__, (char *)&off_223A67A + *((short *)&off_223A67A + v8) + 2);
  switch ( v6 )
  {
    case 0:
      Function_223abbc(v4);
      Function_208b9e0(v4[445], 0);
      Function_201ff74(4u, 0);
      ++v4[2];
      goto LABEL_7;
    case 1:
LABEL_7:
      Function_2231560(v5 + 105, v5 + 106, 8, 18, 8, 18, (int *)1);
      Function_223b140(v4);
      Function_2234540((int)v4, 1);
      Function_223afec(v4);
      Function_2234540((int)v4, 0);
      Function_223ad7c(v4);
      Function_201ff0c(4u, 0);
      ++v4[2];
      return 0;
    case 2:
      Function_2231664(v5 + 107, 1);
      if ( Function_22315e0(v5 + 105, v5 + 106, 1, 0) )
        ++v4[2];
      Function_2003a2c(v4[10], 3, 0xCu, v5[107], v4[22]);
      return 0;
    case 3:
      v4[2] = v8 + 1;
      goto LABEL_12;
    case 4:
LABEL_12:
      Function_2234358((int)v4, v4[444], 128, 96);
      Function_208b9e0(v4[444], 1);
      Function_208ba08(v4[444], 24, 24);
      Function_2231aac((int)v4, 0x120u);
      Function_2005748(0x565u);
      ++v4[2];
      break;
    case 5:
      v9 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, uint, uint, uint, uint))dword_222B224[0])(
             v9,
             v5[224],
             v5[225],
             *v5,
             v5[104]) == 1 )
        ++v4[2];
      break;
    case 6:
      Function_2231b8c((int)v4);
      v10 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v10, &v11) == 1 )
      {
        Function_20057a4(1381, 0);
        Function_22348b8((int)v4, 2u, *(uint *)(v11 + 12), *(uint *)(v11 + 4));
      }
      else
      {
        Function_20057a4(1381, 0);
        Function_2233704((int)v4, 48);
        Function_223196c((int)v4, 1);
        Function_2005748(0x55Fu);
      }
      ++v4[2];
      break;
    case 7:
      Function_208b9e0(v4[444], 0);
      Function_208ba08(v4[444], 0, 0);
      ++v4[2];
      break;
    default:
      Function_222fb60(v4, 10);
      break;
  }
  return 0;
}

//----- (0223A840) --------------------------------------------------------
int __fastcall Function_223a840(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      if ( v3 == 2 )
      {
        Function_2231664(v2 + 107, 0);
        if ( Function_22315e0(v2 + 105, v2 + 106, 0, 2) )
        {
          Function_223ac0c(v1, 270);
          Function_222fb60((uint *)v1, 3);
        }
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[107], *(uint *)(v1 + 88));
      }
      return 0;
    }
  }
  else
  {
    Function_208b9e0(*(uint *)(v1 + 1780), 0);
    Function_223abbc(v1);
    Function_201ff74(4u, 0);
    ++*(uint *)(v1 + 8);
  }
  Function_2231664(v2 + 107, 1);
  if ( Function_22315e0(v2 + 105, v2 + 106, 1, 2) )
  {
    Function_223a4c8(v1, 0);
    Function_200710c(*(uint *)(v1 + 20), 0x4Du, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
    ++*(uint *)(v1 + 8);
  }
  Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[107], *(uint *)(v1 + 88));
  return 0;
}

//----- (0223A93C) --------------------------------------------------------
int __fastcall Function_223a93c(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      if ( v3 == 2 )
        Function_222fb60(a1, 10);
      return 0;
    }
  }
  else
  {
    Function_2231560(v2 + 105, v2 + 106, 8, 18, 8, 18, (int *)1);
    Function_2234540((int)v1, 1);
    Function_223b140(v1);
    Function_223afec(v1);
    Function_223ad7c(v1);
    Function_2234540((int)v1, 0);
    Function_201ff0c(4u, 0);
    ++v1[2];
  }
  Function_2231664(v2 + 107, 1);
  if ( Function_22315e0(v2 + 105, v2 + 106, 1, 0) )
    ++v1[2];
  Function_2003a2c(v1[10], 3, 0xCu, v2[107], v1[22]);
  return 0;
}

//----- (0223A9F4) --------------------------------------------------------
int __fastcall Function_223a9f4(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      if ( v3 == 2 )
        Function_222fb60(a1, 13);
      return 0;
    }
  }
  else
  {
    Function_223abbc(a1);
    Function_2231560(v2 + 105, v2 + 106, 8, 18, 8, 18, (int *)1);
    Function_201ff0c(4u, 0);
    ++v1[2];
  }
  Function_2231664(v2 + 107, 1);
  if ( Function_22315e0(v2 + 105, v2 + 106, 1, 0) )
    ++v1[2];
  Function_2003a2c(v1[10], 3, 0xCu, v2[107], v1[22]);
  return 0;
}

//----- (0223AA90) --------------------------------------------------------
int __fastcall Function_223aa90(int a1)
{
  int v1;
  char *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;

  v8 = a1;
  v9 = 0;
  v1 = 257;
  v2 = &byte_2248D9C;
  v3 = &dword_2248D78;
  v4 = *(uint *)(a1 + 2144) + 436;
  do
  {
    Function_201a7a0(v4);
    Function_201a7e8(*(uint **)(v8 + 36), v4, 2, *v2, v2[1], v2[2], v2[3], 14, v1);
    Function_201ada4_ClearTextBox(v4, *v3 & 0xFF);
    Function_201a9a4(v4);
    v5 = (uchar)v2[2];
    v6 = (uchar)v2[3];
    v4 += 16;
    v2 += 4;
    v1 += v6 * v5;
    ++v3;
    result = v9 + 1;
    v9 = result;
  }
  while ( result < 3 );
  return result;
}

//----- (0223AB14) --------------------------------------------------------
int __fastcall Function_223ab14(int a1)
{
  char *v1;
  short v2;
  uint v3;
  int v4;
  ushort *v5;
  int v6;
  int result;
  int v8;

  v8 = a1;
  v1 = &byte_2248DC4;
  v2 = 1;
  v3 = 0;
  v4 = *(uint *)(a1 + 2144) + 564;
  do
  {
    Function_201a7a0(v4);
    Function_201a7e8(*(uint **)(v8 + 36), v4, 6, *v1, v1[1], v1[2], v1[3], 14, v2);
    v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v8 + 72), v3 + 60);
    Function_223429c(v4, (int)v5);
    Function_201ada4_ClearTextBox(v4, 0);
    Function_201d78c(v4, 0);
    Function_201a9a4(v4);
    Function_20237bc_FreeMsg((int)v5, v6);
    ++v3;
    v4 += 16;
    result = (uchar)v1[3] * (uchar)v1[2];
    v2 += result;
    v1 += 4;
  }
  while ( v3 < 6 );
  return result;
}

//----- (0223ABBC) --------------------------------------------------------
uint __fastcall Function_223abbc(int a1)
{
  uint v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = *(uint *)(a1 + 2144) + 564;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 6 );
  return result;
}

//----- (0223ABE4) --------------------------------------------------------
uint __fastcall Function_223abe4(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = *(uint *)(a1 + 2144) + 436;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 3 );
  return result;
}

//----- (0223AC0C) --------------------------------------------------------
uint __fastcall Function_223ac0c(int a1, uint a2)
{
  int v2;
  ushort *v3;
  int v4;

  v2 = *(uint *)(a1 + 2144);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 72), a2);
  Function_201ada4_ClearTextBox(v2 + 468, 204);
  Function_201d78c(v2 + 468, 0);
  Function_201a9a4(v2 + 468);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (0223AC58) --------------------------------------------------------
uint __fastcall Function_223ac58(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  ushort *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 72), *(uint *)(v2 + 896) + 28);
  v4 = (ushort *)Function_2023790(255, 0x66u);
  v5 = Function_2023790(255, 0x66u);
  v6 = (int *)Function_2231690(0x66u);
  Function_2023d28(v4, *(ushort **)(v2 + 4 * *(uint *)(v1 + 1236) + 908));
  Function_22349a8(v1, (int)v4);
  Function_200b48c(v6, 0, (int)v4);
  Function_200c388((uint *)v6, v5, (int)v3);
  Function_201ada4_ClearTextBox(v2 + 468, 204);
  Function_201d78c(v2 + 468, 0);
  Function_201a9a4(v2 + 468);
  Function_20237bc_FreeMsg((int)v3, v7);
  Function_20237bc_FreeMsg((int)v4, v8);
  Function_20237bc_FreeMsg(v5, v9);
  return Function_200b3f0((uint *)v6, v10);
}

//----- (0223AD20) --------------------------------------------------------
uint __fastcall Function_223ad20(int a1)
{
  int v1;
  ushort *v2;
  int v3;

  v1 = *(uint *)(a1 + 2144);
  v2 = (ushort *)Function_2023790(255, 0x66u);
  Function_2023d28(v2, (ushort *)(v1 + 4));
  Function_201ada4_ClearTextBox(v1 + 452, 0);
  Function_223429c(v1 + 452, (int)v2);
  Function_201d78c(v1 + 452, 0);
  Function_201a9a4(v1 + 452);
  return Function_20237bc_FreeMsg((int)v2, v3);
}

//----- (0223AD7C) --------------------------------------------------------
int __fastcall Function_223ad7c(int a1)
{
  int *v1;
  int v2;
  int v3;
  int result;

  v1 = &dword_2248D78;
  v2 = 0;
  v3 = *(uint *)(a1 + 2144) + 436;
  do
  {
    Function_201ada4_ClearTextBox(v3, *v1 & 0xFF);
    result = Function_201a9a4(v3);
    ++v2;
    v3 += 16;
    ++v1;
  }
  while ( v2 < 2 );
  return result;
}

//----- (0223ADB0) --------------------------------------------------------
BOOL __fastcall Function_223adb0(int a1, int a2)
{
  return a2 == (a1 & a2);
}

//----- (0223ADC0) --------------------------------------------------------
int __fastcall Function_223adc0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  ushort *v9;
  int v10;
  ushort v11[256];
  int v12;

  v12 = a4;
  v4 = a2;
  v5 = *(uint *)(a1 + 2144);
  Function_201ada4_ClearTextBox(v5 + 436, 0);
  v6 = v5 + 2 * v4;
  v7 = *(ushort *)(v6 + 44);
  if ( !*(ushort *)(v6 + 44) )
    return Function_201a9a4(v5 + 436);
  v9 = (ushort *)Function_2023790(255, 0x66u);
  if ( Function_223adb0(*(uint *)(v5 + 344), 1 << *(uint *)(v5 + 432)) == 1 )
    v7 = 494;
  Function_200b274(v7, 0x66u, v11);
  Function_2023d28(v9, v11);
  Function_223429c(v5 + 436, (int)v9);
  Function_201d78c(v5 + 436, 0);
  Function_201a9a4(v5 + 436);
  return Function_20237bc_FreeMsg((int)v9, v10);
}

//----- (0223AE60) --------------------------------------------------------
int __fastcall Function_223ae60(uint *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  int result;
  int v13;
  short v14;
  char v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  short v21;
  short v22;
  short v23;
  short v24;
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
  int v36;

  v36 = a4;
  v4 = a1[10];
  v19 = a1[536];
  v18 = (int *)a1[6];
  v17 = a1[7];
  v5 = Function_2079fd0();
  Function_200cd7c(v4, 2u, v18, v17, 19, v5, 0, 3, 1, 100000);
  v6 = Function_2079fdc();
  Function_200ce0c(v18, v17, 19, v6, 0, 100000);
  v7 = Function_2079fe8();
  Function_200ce3c(v18, v17, 19, v7, 0, 100000);
  v8 = v19;
  v9 = 0;
  v10 = v19;
  do
  {
    v11 = *(ushort *)(v8 + 44);
    v16 = *(uchar *)(v19 + v9 + 348);
    result = Function_223adb0(*(uint *)(v19 + 344), 1 << v9);
    v20 = result;
    if ( v11 )
    {
      v13 = Function_2079d8c(v11, result, v16);
      Function_200d888(v18, v17, 19, v13, 0, 1, v9 + 100000);
      s32_div_f(v9, 6);
      v21 = 24 * v14 + 110;
      v22 = 22 * s32_div_f(v9, 6) + 48;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 1;
      v34 = 0;
      v35 = 0;
      v28 = v9 + 100000;
      v29 = 100000;
      v30 = 100000;
      v31 = 100000;
      v32 = -1;
      v33 = -1;
      *(uint *)(v10 + 692) = Function_200ce6c((uint *)v18, v17, &v21);
      v15 = Function_2079edc(v11, v16, v20);
      Function_200d430(*(int **)(v10 + 692), v15 + 4);
      Function_200d364(*(int **)(v10 + 692), 1u);
      result = Function_200d474(*(int **)(v10 + 692), 30 - v9);
    }
    ++v9;
    v8 += 2;
    v10 += 4;
  }
  while ( v9 < 30 );
  return result;
}

//----- (0223AFC0) --------------------------------------------------------
uint __fastcall Function_223afc0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint result;

  v2 = a2;
  v3 = *(uint *)(a1 + 2144);
  v4 = 0;
  v5 = *(uint *)(a1 + 2144);
  do
  {
    result = *(ushort *)(v3 + 44);
    if ( *(ushort *)(v3 + 44) )
      result = Function_200d3f4(*(uint **)(v5 + 692), v2);
    ++v4;
    v3 += 2;
    v5 += 4;
  }
  while ( v4 < 30 );
  return result;
}

//----- (0223AFEC) --------------------------------------------------------
int __fastcall Function_223afec(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_200d080(*(uint *)(a1 + 28), 100000);
  Function_200d090(*(uint *)(v1 + 28), 100000);
  Function_200d0a0(*(uint *)(v1 + 28), 100000);
  v3 = 0;
  v4 = v2;
  do
  {
    result = *(ushort *)(v2 + 44);
    if ( *(ushort *)(v2 + 44) )
    {
      result = *(uint *)(v4 + 692);
      if ( result )
      {
        Function_200d070(*(uint *)(v1 + 28), v3 + 100000);
        Function_200d0f4(*(uint *)(v4 + 692));
        result = 692;
        *(uint *)(v4 + 692) = 0;
      }
    }
    ++v3;
    v2 += 2;
    v4 += 4;
  }
  while ( v3 < 30 );
  return result;
}

//----- (0223B050) --------------------------------------------------------
uint __fastcall Function_223b050(int a1)
{
  int *v1;
  int v2;
  uchar v3;
  int v4;
  int v5;
  int v6;
  uint result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13;

  v11 = a1;
  v1 = *(int **)(a1 + 2144);
  v2 = v1[108];
  v12 = v1[v2 + 56];
  v3 = *((uchar *)v1 + v2 + 348);
  v4 = (int)v1 + 2 * v2;
  v5 = *(ushort *)(v4 + 44);
  v6 = v1[v2 + 26];
  if ( *(ushort *)(v4 + 44) )
  {
    if ( Function_223adb0(v1[86], 1 << v2) == 1 )
    {
      v3 = v5 == 490;
      v5 = 494;
    }
    v8 = Load_PlPersonal1(v5, 0x66u);
    v9 = Function_2075dac(v5, v6);
    v10 = CheckIfShinyPkmn(v12, v6);
    Function_2076648(v5, v9, 2u, v3);
    Function_2075fb4((int)&v13, v5, v9, 2u, v10, v3, v6);
    v1[203] = Function_2007c34(*(uint **)(v11 + 100), &v13, 42, 91, 0, 0, 0, 0);
    result = free_PkmnData(v8);
  }
  else
  {
    result = 812;
    v1[203] = 0;
  }
  return result;
}

//----- (0223B124) --------------------------------------------------------
int __fastcall Function_223b124(int a1, int a2)
{
  int result;

  result = *(uint *)(*(uint *)(a1 + 2144) + 812);
  if ( result )
    result = Function_2007dec(result, 6u, a2);
  return result;
}

//----- (0223B140) --------------------------------------------------------
uint *__fastcall Function_223b140(int a1)
{
  uint *result;

  result = *(uint **)(*(uint *)(a1 + 2144) + 812);
  if ( result )
    result = Function_2007dc8(result);
  return result;
}

//----- (0223B158) --------------------------------------------------------
uint __fastcall Function_223b158(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = LoadVariableAreaAdress_25(*(uint *)(a1 + 2096));
  v4 = *(uchar *)(v2 + 378);
  if ( v4 >= 0x10 && v4 < 0x18 )
    *(uchar *)(v2 + 378) = 0;
  v5 = *(uchar *)(v2 + 378);
  if ( v5 >= 0x18 && v5 < 0x20 )
    Function_2079cfc(v3, v5 - 24);
  if ( *(uchar *)(v2 + 378) >= 0x20u )
    *(uchar *)(v2 + 378) = 0;
  Function_20070e8(
    *(uint *)(v1 + 20),
    3 * *(uchar *)(v2 + 378) + 138,
    *(uint **)(v1 + 36),
    3u,
    0,
    0,
    0,
    102);
  Function_200710c(
    *(uint *)(v1 + 20),
    3 * *(uchar *)(v2 + 378) + 140,
    *(uint **)(v1 + 36),
    3u,
    0,
    0,
    0,
    102);
  Function_2002fec(*(uint *)(v1 + 40), 162, 3 * *(uchar *)(v2 + 378) + 139, 102, 0, 64, 0xC0u, 0xC0u);
  Function_223b050(v1);
  Function_223ae60((uint *)v1, v6, v7, v8);
  Function_223adc0(v1, *(uint *)(v2 + 432), v9, v10);
  Function_223ad20(v1);
  return Function_223ac0c(v1, 0x10Eu);
}

//----- (0223B230) --------------------------------------------------------
int __fastcall Function_223b230(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v4;
  uint v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = LoadVariableAreaAdress_25(*(uint *)(a1 + 2096));
  v4 = *(uchar *)(v2 + 378);
  if ( v4 >= 0x10 && v4 < 0x18 )
    *(uchar *)(v2 + 378) = 0;
  v5 = *(uchar *)(v2 + 378);
  if ( v5 >= 0x18 && v5 < 0x20 && !Function_2079cfc(v3, v5 - 24) )
    *(uchar *)(v2 + 378) = 0;
  Function_20070e8(
    *(uint *)(v1 + 20),
    3 * *(uchar *)(v2 + 378) + 138,
    *(uint **)(v1 + 36),
    3u,
    0,
    0,
    0,
    102);
  Function_200710c(
    *(uint *)(v1 + 20),
    3 * *(uchar *)(v2 + 378) + 140,
    *(uint **)(v1 + 36),
    3u,
    0,
    0,
    0,
    102);
  Function_2002fec(*(uint *)(v1 + 40), 162, 3 * *(uchar *)(v2 + 378) + 139, 102, 0, 64, 0xC0u, 0xC0u);
  Function_223b050(v1);
  return Function_223ae60((uint *)v1, v6, v7, v8);
}

//----- (0223B2E8) --------------------------------------------------------
int __fastcall Function_223b2e8(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( Function_22315e0(v2 + 105, v2 + 106, 0, 0) )
      {
        Function_223b124(v1, 0);
        Function_223afc0(v1, 1);
        Function_201ff0c(1u, 1);
        Function_201ff0c(4u, 1);
        REG_BLDCNT = 0;
        ++*(uint *)(v1 + 8);
      }
    }
    else if ( v3 == 2 )
    {
      if ( Function_2231664(v2 + 107, 0) )
      {
        v2[209] = v2[204];
        Function_222fb60((uint *)v1, 3);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[107], *(uint *)(v1 + 88));
    }
  }
  else
  {
    Function_22302f0(a1, 2u);
    Function_2234540(v1, 1);
    Function_223aa90(v1);
    Function_223b158(v1);
    Function_223b124(v1, 1);
    Function_223afc0(v1, 0);
    Function_2234540(v1, 0);
    Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
    Function_200710c(*(uint *)(v1 + 20), 0x4Du, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
    Function_201ff0c(8u, 1);
    Function_201ff74(8u, 1);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223B40C) --------------------------------------------------------
int __fastcall Function_223b40c(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 836));
  return 0;
}

//----- (0223B424) --------------------------------------------------------
int __fastcall Function_223b424(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( Function_2233790(a1) )
      {
        v4 = 0;
        v5 = v2;
        do
        {
          Function_2024034(*(uint *)(v5 + 816));
          ++v4;
          v5 += 4;
        }
        while ( v4 < 5 );
        Function_2231688((uint *)(v2 + 428));
        Function_223146c((int **)v1);
        Function_2019ebc(*(uint **)(v1 + 36), 2u);
        Function_2019ebc(*(uint **)(v1 + 36), 6u);
        Function_2019ebc(*(uint **)(v1 + 36), 3u);
        Function_2019ebc(*(uint **)(v1 + 36), 7u);
        ++*(uint *)(v1 + 8);
      }
    }
    else if ( Function_2231664((int *)(v2 + 428), 0) )
    {
      Function_22318e8(v1);
      Function_2231688((uint *)(v2 + 428));
      Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
      Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
      Function_222fb60((uint *)v1, 5);
      Call_free7(*(uint *)(v2 + 900));
      free(v2);
    }
    else
    {
      Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, *(uint *)(v2 + 428), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 428), *(uint *)(v1 + 88));
    }
  }
  else
  {
    Function_223afec(a1);
    Function_223b140(v1);
    Function_223abe4(v1);
    Function_223a110(v1);
    Function_208b8b0(*(uint *)(v1 + 1780), 0);
    Function_208b9e0(*(uint *)(v1 + 1780), 0);
    Function_223376c(v1, 1);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223B564) --------------------------------------------------------
int __fastcall Function_223b564(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( Function_22315e0(v2 + 105, v2 + 106, 0, 0) )
      {
        Function_201ff0c(1u, 1);
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        REG_BLDCNT = 0;
        ++*(uint *)(v1 + 8);
      }
    }
    else if ( v3 == 2 )
    {
      if ( Function_2231664(v2 + 107, 0) )
      {
        v2[209] = v2[206];
        Function_222fb60((uint *)v1, 3);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[107], *(uint *)(v1 + 88));
    }
  }
  else
  {
    Function_2234540(a1, 1);
    Function_22302f0(v1, 2u);
    Function_223aa90(v1);
    Function_223ac0c(v1, 0x113u);
    Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
    Function_200710c(*(uint *)(v1 + 20), 0x4Fu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
    Function_223ab14(v1);
    Function_223a4c8(v1, 1);
    Function_2234540(v1, 0);
    Function_201ff0c(8u, 1);
    Function_201ff74(8u, 1);
    Function_201ff0c(4u, 0);
    Function_201ff74(4u, 0);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223B694) --------------------------------------------------------
int __fastcall Function_223b694(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 824));
  return 0;
}

//----- (0223B6AC) --------------------------------------------------------
int __fastcall Function_223b6ac(int a1, int a2, int a3, int a4)
{
  int v4;
  char *v5;
  int v6;
  uint *v7;
  int v8;
  ushort *v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v12 = a1;
  v4 = *(uint *)(a1 + 2144);
  v5 = &byte_2248D5C;
  v6 = 1;
  v15 = 59;
  v13 = 0;
  v7 = (uint *)&v14;
  v14 = 121;
  v8 = v4 + 564;
  do
  {
    Function_201a7a0(v8);
    Function_201a7e8(*(uint **)(v12 + 36), v8, 6, *v5, v5[1], v5[2], v5[3], 14, v6);
    Function_201ada4_ClearTextBox(v8, 0);
    v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v12 + 72), *v7);
    Function_223429c(v8, (int)v9);
    Function_201d78c(v8, 0);
    Function_201a9a4(v8);
    v10 = (uchar)v5[2];
    v6 += (uchar)v5[3] * v10;
    Function_20237bc_FreeMsg((int)v9, v10);
    v8 += 16;
    result = v13 + 1;
    v5 += 4;
    ++v7;
    v13 = result;
  }
  while ( result < 2 );
  return result;
}

//----- (0223B768) --------------------------------------------------------
int __fastcall Function_223b768(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  ushort *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 2144);
  Function_201ada4_ClearTextBox(v4 + 564, 0);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 72), v3);
  Function_223429c(v4 + 564, (int)v5);
  Function_201d78c(v4 + 564, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  return Function_201a9a4(v4 + 564);
}

//----- (0223B7C0) --------------------------------------------------------
uint __fastcall Function_223b7c0(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_201a7a0(v2 + 564);
  Function_201a7e8(*(uint **)(v1 + 36), v2 + 564, 6, 12, 6, 8u, 4u, 14, 1);
  Function_201ada4_ClearTextBox(v2 + 564, 0);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x22u);
  Function_2002eb4(0, (int)v3, 0);
  Function_201d78c(v2 + 564, 0);
  Function_201a9a4(v2 + 564);
  return Function_20237bc_FreeMsg((int)v3, v4);
}

//----- (0223B840) --------------------------------------------------------
uint __fastcall Function_223b840(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  Function_201acf4(v1 + 564);
  return Function_201a8fc(v1 + 564);
}

//----- (0223B860) --------------------------------------------------------
uint __fastcall Function_223b860(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = *(uint *)(a1 + 2144) + 564;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 2 );
  return result;
}

//----- (0223B888) --------------------------------------------------------
int __fastcall Function_223b888(int a1)
{
  ushort *v1;
  char *v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;

  v8 = a1;
  v10 = *(uint *)(a1 + 2144);
  v9 = 1;
  v2 = &byte_2248D50;
  v3 = 0;
  v4 = v10 + 436;
  do
  {
    Function_201a7a0(v4);
    Function_201a7e8(*(uint **)(v8 + 36), v4, 2, *v2, v2[1], v2[2], v2[3], 14, v9);
    Function_201ada4_ClearTextBox(v4, 0);
    if ( !v3 )
    {
      v1 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v8 + 72), *(uint *)(v10 + 896) + 310);
      Function_223429c(v4, (int)v1);
    }
    if ( v1 )
    {
      Function_201d78c(v4, 0);
      Function_20237bc_FreeMsg((int)v1, v5);
    }
    Function_201a9a4(v4);
    ++v3;
    v6 = (uchar)v2[2] * (uchar)v2[3];
    v4 += 16;
    result = v9 + v6;
    v2 += 4;
    v9 += v6;
  }
  while ( v3 < 1 );
  return result;
}

//----- (0223B958) --------------------------------------------------------
uint __fastcall Function_223b958(int a1)
{
  uint v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = *(uint *)(a1 + 2144) + 436;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 1 );
  return result;
}

//----- (0223B980) --------------------------------------------------------
int __fastcall Function_223b980(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v21 = a4;
  v4 = a1;
  v5 = *(int **)(a1 + 2144);
  if ( !Function_22411b8() )
    return 0;
  v7 = *(uint *)(v4 + 8);
  if ( v7 <= 8 )
    JUMPOUT(__CS__, *((short *)&off_223B9AE + v7) + 35895728);
  switch ( (uchar)v7 )
  {
    case 0:
      Function_208b9e0(*(uint *)(v4 + 1780), 0);
      Function_223abe4(v4);
      Function_223abbc(v4);
      Function_2019ebc(*(uint **)(v4 + 36), 2u);
      Function_2231560(v5 + 105, v5 + 106, 8, 18, 8, 18, (int *)1);
      Function_201ff0c(4u, 0);
      ++*(uint *)(v4 + 8);
      goto LABEL_7;
    case 1:
LABEL_7:
      Function_2231664(v5 + 107, 1);
      if ( Function_22315e0(v5 + 105, v5 + 106, 1, 0) )
      {
        Function_20070e8(*(uint *)(v4 + 20), 0x3Eu, *(uint **)(v4 + 36), 3u, 0, 0, 0, 102);
        Function_200710c(*(uint *)(v4 + 20), 3u, *(uint **)(v4 + 36), 3u, 0, 0, 0, 102);
        Function_200710c(*(uint *)(v4 + 20), 0x4Eu, *(uint **)(v4 + 36), 7u, 0, 0, 0, 102);
        ++*(uint *)(v4 + 8);
      }
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, v5[107], *(uint *)(v4 + 88));
      break;
    case 2:
      Function_2234358(v4, *(uint *)(v4 + 1776), 128, 96);
      Function_208b9e0(*(uint *)(v4 + 1776), 1);
      Function_208ba08(*(uint *)(v4 + 1776), 24, 24);
      Function_2231aac(v4, 0x121u);
      Function_2005748(0x565u);
      ++*(uint *)(v4 + 8);
      break;
    case 3:
      v8 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, int))dword_222B290[0])(v8, v5[224]) == 1 )
        ++*(uint *)(v4 + 8);
      break;
    case 4:
      Function_2231b8c(v4);
      v9 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v9, &v20) == 1 )
      {
        Function_20057a4(1381, 0);
        Function_22348b8(v4, 3u, *(uint *)(v20 + 12), *(uint *)(v20 + 4));
        v5[226] = 0;
        v5[3033] = 0;
        Function_2234540(v4, 1);
        Function_223aa90(v4);
        Function_208b9e0(*(uint *)(v4 + 1780), 0);
        Function_208b8b0(*(uint *)(v4 + 1776), 0);
        Function_208b9e0(*(uint *)(v4 + 1776), 0);
        Function_208ba08(*(uint *)(v4 + 1776), 0, 0);
        Function_201ff0c(4u, 0);
        Function_2019ebc(*(uint **)(v4 + 36), 3u);
        Function_2234540(v4, 0);
        *(uint *)(v4 + 8) = 7;
      }
      else
      {
        Function_20057a4(1381, 0);
        Function_2005748(0x55Fu);
        ++*(uint *)(v4 + 8);
      }
      break;
    case 5:
      Function_208b9e0(*(uint *)(v4 + 1776), 0);
      Function_208ba08(*(uint *)(v4 + 1776), 0, 0);
      if ( v5[226] )
      {
        *(uint *)(v4 + 8) = 255;
      }
      else
      {
        ++*(uint *)(v4 + 8);
        *(uint *)(v4 + 12) = 0;
        Function_2231aac(v4, 0x126u);
      }
      break;
    case 6:
      v10 = *(uint *)(v4 + 12) + 1;
      *(uint *)(v4 + 12) = v10;
      if ( v10 >= 60 || Function_2022798() == 1 )
      {
        *(uint *)(v4 + 12) = 0;
        Function_2231b8c(v4);
        v5[3033] = 0;
        Function_2234540(v4, 1);
        Function_223aa90(v4);
        Function_208b9e0(*(uint *)(v4 + 1780), 0);
        Function_208b8b0(*(uint *)(v4 + 1776), 0);
        Function_208b9e0(*(uint *)(v4 + 1776), 0);
        Function_208ba08(*(uint *)(v4 + 1776), 0, 0);
        Function_201ff0c(4u, 0);
        Function_2019ebc(*(uint **)(v4 + 36), 3u);
        Function_2234540(v4, 0);
        ++*(uint *)(v4 + 8);
      }
      break;
    case 7:
      if ( Function_22315e0(v5 + 105, v5 + 106, 1, 0) )
      {
        Function_201ff0c(4u, 0);
        Function_201ff74(4u, 0);
        Function_200710c(*(uint *)(v4 + 20), 0x4Fu, *(uint **)(v4 + 36), 7u, 0, 0, 0, 102);
        ++*(uint *)(v4 + 8);
      }
      break;
    case 8:
      Function_2231664(v5 + 107, 0);
      if ( Function_22315e0(v5 + 105, v5 + 106, 0, 2) )
      {
        Function_22302f0(v4, 2u);
        Function_223ac0c(v4, 0x113u);
        Function_223ab14(v4);
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        Function_222fb60((uint *)v4, 3);
      }
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, v5[107], *(uint *)(v4 + 88));
      break;
    default:
      Function_2231664(v5 + 107, 0);
      if ( Function_22315e0(v5 + 105, v5 + 106, 0, 0) )
      {
        Function_223b888(v4);
        Function_223be7c(v4);
        Function_2234540(v4, 1);
        v11 = dword_2248DF8;
        v12 = v5 + 2987;
        v13 = 5;
        do
        {
          v14 = *v11;
          v15 = v11[1];
          v11 += 2;
          *v12 = v14;
          v12[1] = v15;
          v12 += 2;
          --v13;
        }
        while ( v13 );
        *v12 = *v11;
        v5[2988] = v5[226];
        Function_22335bc(v4 + 1148, v4, 2u);
        Function_2233310((int *)(v4 + 1180));
        Function_2232aac((uint *)(v4 + 1180), v4, v5 + 2987, v5 + 2947);
        Function_2233638(v4 + 1148, (uint *)(v4 + 1180));
        Function_223331c(v4 + 1180, v4, 1, v16);
        Function_2233434(v4 + 1180, 56, 176);
        Function_2234540(v4, 0);
        Function_223b6ac(v4, v17, v18, v19);
        Function_201ff74(4u, 1);
        Function_201ff0c(4u, 1);
        Function_2234358(v4, *(uint *)(v4 + 1776), 16, (short)(24 * *(uint *)(v4 + 1240) + 68));
        Function_208b9e0(*(uint *)(v4 + 1776), 1);
        Function_208ba08(*(uint *)(v4 + 1776), 12, 12);
        Function_222fb60((uint *)v4, 5);
      }
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, v5[107], *(uint *)(v4 + 88));
      Function_2003a2c(*(uint *)(v4 + 40), 2, 0xCu, v5[107], *(uint *)(v4 + 88));
      break;
  }
  return 0;
}

//----- (0223BE7C) --------------------------------------------------------
int __fastcall Function_223be7c(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;

  v6 = a1;
  v1 = *(uint *)(a1 + 2144);
  result = *(uint *)(v1 + 904);
  v3 = 0;
  if ( result > 0 )
  {
    v4 = v1;
    v5 = v1;
    do
    {
      *(uint *)(v4 + 11792) = Function_2023790(20, 0x66u);
      Function_2023d28(*(ushort **)(v4 + 11792), *(ushort **)(v5 + 908));
      Function_22349a8(v6, *(uint *)(v4 + 11792));
      *(uint *)(v4 + 11788) = Function_2023790(30, 0x66u);
      Function_2023d28(*(ushort **)(v4 + 11788), (ushort *)(*(uint *)(v5 + 908) + 128));
      result = *(uint *)(v1 + 904);
      ++v3;
      v4 += 8;
      v5 += 4;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (0223BEF0) --------------------------------------------------------
int __fastcall Function_223bef0(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = 2144;
  v2 = *(uint *)(a1 + 2144);
  result = *(uint *)(v2 + 904);
  v4 = 0;
  if ( result > 0 )
  {
    v5 = v2;
    do
    {
      v6 = *(uint *)(v5 + 11788);
      if ( v6 )
      {
        Function_20237bc_FreeMsg(v6, v1);
        *(uint *)(v5 + 11788) = 0;
      }
      v7 = *(uint *)(v5 + 11792);
      if ( v7 )
      {
        Function_20237bc_FreeMsg(v7, v1);
        v1 = 0;
        *(uint *)(v5 + 11792) = 0;
      }
      result = *(uint *)(v2 + 904);
      ++v4;
      v5 += 8;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (0223BF44) --------------------------------------------------------
int __fastcall Function_223bf44(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  if ( !*(uint *)(v2 + 12132) )
  {
    Function_2233664(a1 + 1148);
    Function_22331c8(v1 + 1180, *(short *)(v1 + 1164));
    Function_2232bb4((uint *)(v1 + 1180), v1, v2 + 11788);
    Function_208b8ec(*(uint *)(v1 + 1776), 16, (short)(24 * *(uint *)(v1 + 1240) + 68));
  }
  Function_202404c(*(int **)(v2 + 828));
  return 0;
}

//----- (0223BFB4) --------------------------------------------------------
int __fastcall Function_223bfb4(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      if ( v3 == 2 && Function_22315e0(v2 + 105, v2 + 106, 0, 2) )
      {
        Function_22302f0(v1, 2u);
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        Function_223ac0c(v1, 0x113u);
        Function_223ab14(v1);
        Function_222fb60((uint *)v1, 3);
      }
      return 0;
    }
  }
  else
  {
    Function_223bef0(a1);
    Function_223b860(v1);
    if ( v2[3033] )
    {
      Function_2234540(v1, 1);
      Function_2232394((int)(v2 + 2998), v1);
      Function_2239d8c(v1);
    }
    else
    {
      Function_223b958(v1);
      Function_2234540(v1, 1);
      Function_2233600(v1 + 1148);
      Function_22332fc(v1 + 1180);
      Function_22334fc(v1 + 1180, v1);
    }
    Function_2234540(v1, 0);
    v2[3033] = 0;
    Function_2234540(v1, 1);
    Function_223aa90(v1);
    Function_223ac58(v1);
    Function_208b9e0(*(uint *)(v1 + 1780), 0);
    Function_208b8b0(*(uint *)(v1 + 1776), 0);
    Function_208b9e0(*(uint *)(v1 + 1776), 0);
    Function_208ba08(*(uint *)(v1 + 1776), 0, 0);
    Function_201ff0c(4u, 0);
    Function_2019ebc(*(uint **)(v1 + 36), 3u);
    Function_2234540(v1, 0);
    ++*(uint *)(v1 + 8);
  }
  if ( Function_22315e0(v2 + 105, v2 + 106, 1, 0) )
  {
    Function_200710c(*(uint *)(v1 + 20), 0x4Fu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223C138) --------------------------------------------------------
int __fastcall Function_223c138(int a1)
{
  int v1;
  uint *v2;
  uint v3;
  int *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v2 = *(uint **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_223C158 + v3) + 35897690);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_223b860(a1);
      if ( v2[3033] )
      {
        Function_2234540(v1, 1);
        Function_2232394((int)(v2 + 2998), v1);
        Function_2239d8c(v1);
      }
      else
      {
        Function_223b958(v1);
        Function_2234540(v1, 1);
        Function_2233600(v1 + 1148);
        Function_22332fc(v1 + 1180);
        Function_22334fc(v1 + 1180, v1);
      }
      Function_2234540(v1, 0);
      Function_208b9e0(*(uint *)(v1 + 1780), 0);
      Function_208b8b0(*(uint *)(v1 + 1776), 0);
      Function_208b9e0(*(uint *)(v1 + 1776), 0);
      Function_208ba08(*(uint *)(v1 + 1776), 0, 0);
      Function_201ff0c(4u, 0);
      ++*(uint *)(v1 + 8);
      goto LABEL_8;
    case 1:
LABEL_8:
      if ( Function_22315e0(v2 + 105, v2 + 106, 1, 0) )
        ++*(uint *)(v1 + 8);
      break;
    case 2:
      Function_2234540(a1, 1);
      v4 = v2 + 1;
      v5 = 51;
      v6 = (int *)(v2[*(uint *)(v1 + 1236) + 227] + 128);
      do
      {
        v7 = *v6;
        v8 = v6[1];
        v6 += 2;
        *v4 = v7;
        v4[1] = v8;
        v4 += 2;
        --v5;
      }
      while ( v5 );
      *v4 = *v6;
      Function_223a138((int)v2);
      Function_22302f0(v1, 2u);
      Function_223aa90(v1);
      Function_223b158(v1);
      Function_223ac58(v1);
      Function_223b124(v1, 1);
      Function_223afc0(v1, 0);
      Function_2234540(v1, 0);
      Function_201ff74(4u, 0);
      Function_200710c(*(uint *)(v1 + 20), 0x4Bu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      ++*(uint *)(v1 + 8);
      break;
    case 3:
      if ( Function_22315e0(v2 + 105, v2 + 106, 0, 0) )
      {
        Function_223b124(v1, 0);
        Function_223afc0(v1, 1);
        Function_223b7c0(v1);
        Function_201ff74(4u, 1);
        Function_201ff0c(1u, 1);
        Function_201ff0c(4u, 1);
        REG_BLDCNT = 0;
        ++*(uint *)(v1 + 8);
      }
      break;
    default:
      if ( Function_2231664(v2 + 107, 0) )
      {
        v2[209] = v2[204];
        Function_223a138((int)v2);
        s32_div_f(v2[108], 6);
        v2[3034] = v9;
        v2[3035] = s32_div_f(v2[108], 6);
        Function_2234358(
          v1,
          *(uint *)(v1 + 1776),
          (short)(24 * *((ushort *)v2 + 6068) + 110),
          (short)(22 * v2[3035] + 52));
        Function_208b9e0(*(uint *)(v1 + 1776), 1);
        Function_208ba08(*(uint *)(v1 + 1776), 12, 12);
        v10 = v2[108];
        if ( *((ushort *)v2 + v10 + 22) && Function_223adb0(v2[86], 1 << v10) != 1 )
          Function_2005844(*((ushort *)v2 + v2[108] + 22), *((uchar *)v2 + v2[108] + 348));
        Function_222fb60((uint *)v1, 10);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[107], *(uint *)(v1 + 88));
      break;
  }
  return 0;
}

//----- (0223C40C) --------------------------------------------------------
int __fastcall Function_223c40c(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 832));
  return 0;
}

//----- (0223C424) --------------------------------------------------------
int __fastcall Function_223c424(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( !v3 )
  {
    Function_2231560(v2 + 105, v2 + 106, 8, 18, 8, 18, (int *)1);
    Function_223b140(v1);
    Function_223afec(v1);
    Function_223ad7c(v1);
    Function_2019ebc(*(uint **)(v1 + 36), 2u);
    Function_223abe4(v1);
    Function_223b840(v1);
    ++*(uint *)(v1 + 8);
    goto LABEL_6;
  }
  if ( v3 == 1 )
  {
LABEL_6:
    v2[3033] = 0;
    ++*(uint *)(v1 + 8);
    goto LABEL_7;
  }
  if ( v3 != 2 )
  {
    if ( Function_22315e0(v2 + 105, v2 + 106, 0, 0) )
    {
      Function_2234540(v1, 1);
      Function_208b9e0(*(uint *)(v1 + 1776), 1);
      Function_223b888(v1);
      Function_223b6ac(v1, v4, v5, v6);
      Function_22335bc(v1 + 1148, v1, 2u);
      Function_2232aac((uint *)(v1 + 1180), v1, v2 + 2987, v2 + 2947);
      Function_2233638(v1 + 1148, (uint *)(v1 + 1180));
      Function_223331c(v1 + 1180, v1, 1, v7);
      Function_2233434(v1 + 1180, 56, 176);
      Function_2234358(v1, *(uint *)(v1 + 1776), 16, (short)(24 * *(uint *)(v1 + 1240) + 68));
      Function_208b9e0(*(uint *)(v1 + 1776), 1);
      Function_208ba08(*(uint *)(v1 + 1776), 12, 12);
      if ( !v2[3033] )
      {
        Function_2233664(v1 + 1148);
        Function_22331c8(v1 + 1180, *(short *)(v1 + 1164));
        Function_2232bb4((uint *)(v1 + 1180), v1, (int)(v2 + 2947));
        Function_208b8ec(*(uint *)(v1 + 1776), 16, (short)(24 * *(uint *)(v1 + 1240) + 68));
      }
      Function_2234540(v1, 0);
      Function_201ff0c(4u, 1);
      Function_201ff74(4u, 1);
      Function_222fb60((uint *)v1, 5);
    }
    return 0;
  }
LABEL_7:
  if ( Function_22315e0(v2 + 105, v2 + 106, 1, 0) )
  {
    Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
    Function_200710c(*(uint *)(v1 + 20), 3u, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
    Function_200710c(*(uint *)(v1 + 20), 0x4Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
    Function_201ff74(4u, 0);
    Function_201ff0c(4u, 0);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223C63C) --------------------------------------------------------
int __fastcall Function_223c63c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      if ( v3 == 2 && Function_22315e0((int *)(v2 + 420), (uint *)(v2 + 424), 0, 1) )
      {
        Function_22323b8(v2 + 11992, 1);
        Function_223b768(v1, *(uint *)(v2 + 12132) + 121);
        Function_201ff74(4u, 1);
        Function_201ff0c(4u, 1);
        Function_222fb60((uint *)v1, 5);
      }
      return 0;
    }
  }
  else
  {
    Function_208b9e0(*(uint *)(v1 + 1776), 0);
    if ( !*(uint *)(v2 + 12132) )
      Function_223b958(v1);
    Function_2233600(v1 + 1148);
    Function_22332fc(v1 + 1180);
    Function_22334fc(v1 + 1180, v1);
    *(uint *)(v2 + 12132) = 1;
    Function_2019ebc(*(uint **)(v1 + 36), 2u);
    Function_2231560((int *)(v2 + 420), (int *)(v2 + 424), 8, 18, 8, 18, (int *)1);
    Function_201ff0c(4u, 0);
    ++*(uint *)(v1 + 8);
  }
  if ( Function_22315e0((int *)(v2 + 420), (uint *)(v2 + 424), 1, 1) )
  {
    Function_2239d60(v1, *(uint *)(v1 + 1236));
    Function_2234540(v1, 1);
    Function_2232378((char **)(v2 + 11992), v1, v4, v5);
    Function_22323b8(v2 + 11992, 0);
    Function_2234540(v1, 0);
    Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
    Function_200710c(*(uint *)(v1 + 20), 0x50u, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223C79C) --------------------------------------------------------
int __fastcall Function_223c79c(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  switch ( v3 )
  {
    case 0:
      v2[3033] = 0;
      ++*(uint *)(a1 + 8);
      return 0;
    case 1:
      Function_2234540(a1, 1);
      Function_2232394((int)(v2 + 2998), v1);
      Function_2239d8c(v1);
      Function_2234540(v1, 0);
      ++*(uint *)(v1 + 8);
      break;
    case 2:
      break;
    default:
      if ( Function_22315e0(v2 + 105, v2 + 106, 0, 1) )
      {
        Function_2234540(v1, 1);
        Function_223b768(v1, v2[3033] + 121);
        Function_223b888(v1);
        Function_22335bc(v1 + 1148, v1, 2u);
        Function_2232aac((uint *)(v1 + 1180), v1, v2 + 2987, v2 + 2947);
        Function_2233638(v1 + 1148, (uint *)(v1 + 1180));
        Function_223331c(v1 + 1180, v1, 1, v4);
        Function_2233434(v1 + 1180, 56, 176);
        if ( !v2[3033] )
        {
          Function_2233664(v1 + 1148);
          Function_22331c8(v1 + 1180, *(short *)(v1 + 1164));
          Function_2232bb4((uint *)(v1 + 1180), v1, (int)(v2 + 2947));
          Function_208b8ec(*(uint *)(v1 + 1776), 16, (short)(24 * *(uint *)(v1 + 1240) + 68));
        }
        Function_208b9e0(*(uint *)(v1 + 1776), 1);
        Function_201ff0c(4u, 1);
        Function_2234540(v1, 0);
        Function_222fb60((uint *)v1, 5);
      }
      return 0;
  }
  if ( Function_22315e0(v2 + 105, v2 + 106, 1, 1) )
  {
    Function_2019ebc(*(uint **)(v1 + 36), 2u);
    Function_201ff0c(4u, 0);
    Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
    Function_200710c(*(uint *)(v1 + 20), 3u, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223C948) --------------------------------------------------------
int __fastcall Function_223c948(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( Function_2233790(a1) )
      {
        v4 = 0;
        v5 = v2;
        do
        {
          Function_2024034(*(uint *)(v5 + 816));
          ++v4;
          v5 += 4;
        }
        while ( v4 < 5 );
        Function_2231688((uint *)(v2 + 428));
        Function_223146c((int **)v1);
        Function_2019ebc(*(uint **)(v1 + 36), 2u);
        Function_2019ebc(*(uint **)(v1 + 36), 6u);
        Function_2019ebc(*(uint **)(v1 + 36), 3u);
        Function_2019ebc(*(uint **)(v1 + 36), 7u);
        ++*(uint *)(v1 + 8);
      }
    }
    else if ( Function_2231664((int *)(v2 + 428), 0) )
    {
      Function_22318e8(v1);
      Function_2231688((uint *)(v2 + 428));
      Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
      Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
      Function_222fb60((uint *)v1, 5);
      Call_free7(*(uint *)(v2 + 900));
      free(v2);
    }
    else
    {
      Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, *(uint *)(v2 + 428), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 428), *(uint *)(v1 + 88));
    }
  }
  else
  {
    Function_2234540(a1, 1);
    Function_223abe4(v1);
    Function_223a110(v1);
    Function_208b8b0(*(uint *)(v1 + 1780), 0);
    Function_208b9e0(*(uint *)(v1 + 1780), 0);
    Function_208b8b0(*(uint *)(v1 + 1776), 1);
    Function_208b9e0(*(uint *)(v1 + 1776), 0);
    Function_2234540(v1, 0);
    Function_223376c(v1, 1);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223CAA4) --------------------------------------------------------
void Function_223caa4()
{
  ;
}

//----- (0223CAA8) --------------------------------------------------------
int __fastcall Function_223caa8(int a1, uint *a2)
{
  int v2;
  int result;
  int v4;
  uint v5;

  v2 = *(uint *)(a1 + 2144);
  if ( *a2 == 1 )
  {
    result = 904;
    *(uint *)(v2 + 904) = 0;
  }
  else
  {
    v4 = Function_224112c(a1);
    *(uint *)(v2 + 904) = ((int (__fastcall *)(int, int, int))dword_222BBBC[87])(v4, v2 + 908, 20);
    result = MI_CpuCopy8(v2 + 908, v2 + 988, 0x2A30u, v5);
  }
  return result;
}

//----- (0223CAEC) --------------------------------------------------------
int __fastcall Function_223caec(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  if ( v2[7] )
  {
    v8 = &dword_2248F2C;
    v9 = v2 + 707;
    v10 = 5;
    do
    {
      v11 = *v8;
      v12 = v8[1];
      v8 += 2;
      *v9 = v11;
      v9[1] = v12;
      v9 += 2;
      --v10;
    }
    while ( v10 );
    *v9 = *v8;
    v2[466] = (int)Function_200b1ec_CallMsgDecrypt(
                     *(ushort ***)(v1 + 76),
                     *(uchar *)(v2[453] + 456 * v2[3]) + 94);
  }
  else
  {
    v3 = &dword_2248F00;
    v4 = v2 + 707;
    v5 = 5;
    do
    {
      v6 = *v3;
      v7 = v3[1];
      v3 += 2;
      *v4 = v6;
      v4[1] = v7;
      v4 += 2;
      --v5;
    }
    while ( v5 );
    *v4 = *v3;
    v2[466] = 0;
  }
  v2[708] = v2[8];
  v2[707] = (int)&v2[80 * v2[3] + 467];
  Function_2234540(v1, 1);
  Function_2233310((int *)(v1 + 1180));
  Function_2232778((uint *)(v1 + 1180), v1, v2[465], v2 + 707, v2[3], v2[5], v2[466]);
  Function_2233638(v1 + 1148, (uint *)(v1 + 1180));
  Function_223331c(v1 + 1180, v1, 1, v13);
  Function_2233434(v1 + 1180, 112, 184);
  return Function_2234540(v1, 0);
}

//----- (0223CBE0) --------------------------------------------------------
int __fastcall Function_223cbe0(int a1)
{
  uint *v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint *v8;
  int v9;
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint *v17;
  int v18;
  uint *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  uint *v27;
  int v28;
  int v29;
  int v30;

  v1 = *(uint **)(a1 + 2144);
  v1[453] = v1 + 56;
  v1[454] = v1 + 398;
  result = v1[5];
  if ( result )
  {
    if ( result == 1 )
    {
      v12 = 0;
      result = 0;
      v13 = 0;
      do
      {
        v14 = v1[3];
        if ( v1[7] )
        {
          *(uint *)((char *)&v1[80 * v14 + 467] + result) = 40000;
          *(uint *)((char *)&v1[80 * v1[3] + 468] + result) = *(uchar *)(v12 + v1[453] + 456 * v1[3] + 148);
          v16 = v1[3];
          v17 = (uint *)(v13 + v1[453] + 456 * v16 + 160);
          v18 = *(uint *)(v13 + v1[453] + 456 * v16 + 164);
          v19 = (uint *)((char *)&v1[80 * v16 + 469] + result);
          *v19 = *v17;
          v19[1] = v18;
          v20 = (int)&v1[80 * v1[3]] + result;
          if ( *(uint *)(v20 + 1880) >= (uint)(*(uint *)(v20 + 1876) < 0x89E7FFFF) - 1966660860 )
          {
            *(uint *)(v20 + 1876) = -1981284353;
            *(uint *)(v20 + 1880) = -1966660860;
          }
        }
        else
        {
          *(uint *)((char *)&v1[80 * v14 + 467] + result) = 30000;
          *(uint *)((char *)&v1[80 * v1[3] + 468] + result) = *(uchar *)(v12 + v1[454] + 72 * v1[3] + 20);
          v15 = (int)&v1[80 * v1[3]] + result;
          *(uint *)(v15 + 1876) = v12;
          *(uint *)(v15 + 1880) = v12 >> 31;
        }
        ++v12;
        result += 16;
        v13 += 8;
      }
      while ( v12 < 12 );
    }
    else if ( result == 2 )
    {
      v21 = 0;
      result = 0;
      v22 = 0;
      v30 = 0;
      do
      {
        v23 = v1[3];
        if ( v1[7] )
        {
          *(uint *)((char *)&v1[80 * v23 + 467] + result) = 60000;
          *(uint *)((char *)&v1[80 * v1[3] + 468] + result) = *(ushort *)(v22 + v1[453] + 456 * v1[3] + 256);
          v25 = v1[3];
          v26 = *(uint *)(v30 + v1[453] + 456 * v25 + 300);
          v27 = (uint *)((char *)&v1[80 * v25 + 469] + result);
          *v27 = *(uint *)(v30 + v1[453] + 456 * v25 + 296);
          v27[1] = v26;
          v29 = (int)&v1[80 * v1[3]] + result;
          if ( *(uint *)(v29 + 1880) >= (uint)(*(uint *)(v29 + 1876) < 0x89E7FFFF) - 1966660860 )
          {
            *(uint *)(v29 + 1876) = -1981284353;
            *(uint *)(v29 + 1880) = -1966660860;
          }
        }
        else
        {
          *(uint *)((char *)&v1[80 * v23 + 467] + result) = 50000;
          *(uint *)((char *)&v1[80 * v1[3] + 468] + result) = *(ushort *)(v22 + v1[454] + 72 * v1[3] + 32);
          v24 = (int)&v1[80 * v1[3]] + result;
          *(uint *)(v24 + 1876) = v21;
          *(uint *)(v24 + 1880) = v21 >> 31;
        }
        ++v21;
        result += 16;
        v22 += 2;
        v30 += 8;
      }
      while ( v21 < 20 );
    }
  }
  else
  {
    v3 = 0;
    v4 = 0;
    v28 = 0;
    do
    {
      v5 = v1[3];
      if ( v1[7] )
      {
        v1[80 * v5 + 467 + v4] = 20000;
        v1[80 * v1[3] + 468 + v4] = Function_2232234(*(uchar *)(v3 + v1[453] + 456 * v1[3] + 4), 4);
        v7 = v1[3];
        v8 = (uint *)(v28 + v1[453] + 456 * v7 + 20);
        v9 = *(uint *)(v28 + v1[453] + 456 * v7 + 24);
        v10 = &v1[80 * v7 + 469 + v4];
        *v10 = *v8;
        v10[1] = v9;
        v11 = (int)&v1[80 * v1[3] + v4];
        if ( *(uint *)(v11 + 1880) >= (uint)(*(uint *)(v11 + 1876) < 0x89E7FFFF) - 1966660860 )
        {
          *(uint *)(v11 + 1876) = -1981284353;
          *(uint *)(v11 + 1880) = -1966660860;
        }
      }
      else
      {
        v1[80 * v5 + 467 + v4] = 10000;
        v1[80 * v1[3] + 468 + v4] = Function_2232234(*(uchar *)(v3 + v1[454] + 72 * v1[3] + 4), 4);
        v6 = (int)&v1[80 * v1[3] + v4];
        *(uint *)(v6 + 1876) = v3;
        *(uint *)(v6 + 1880) = v3 >> 31;
      }
      ++v3;
      result = v28 + 8;
      v4 += 4;
      v28 += 8;
    }
    while ( v3 < 16 );
  }
  return result;
}

//----- (0223CF2C) --------------------------------------------------------
int __fastcall Function_223cf2c(int a1)
{
  int *v1;
  int v2;
  int v3;
  ushort *v4;
  int v5;
  int result;
  int v7;
  int v8;

  v7 = a1;
  v8 = 0;
  v1 = &dword_2248EA0;
  v2 = 1;
  v3 = *(uint *)(a1 + 2144) + 132;
  do
  {
    Function_201a7e8(*(uint **)(v7 + 36), v3, 6, *v1, v1[1], v1[2], v1[3], 14, v2);
    v2 += v1[3] * v1[2];
    Function_201ada4_ClearTextBox(v3, 0);
    v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v7 + 72), v8 + 80);
    Function_223429c(v3, (int)v4);
    Function_201d78c(v3, 0);
    Function_201a9a4(v3);
    Function_20237bc_FreeMsg((int)v4, v5);
    v3 += 16;
    result = v8 + 1;
    v1 += 4;
    v8 = result;
  }
  while ( result < 2 );
  return result;
}

//----- (0223CFE0) --------------------------------------------------------
uint __fastcall Function_223cfe0(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = *(uint *)(a1 + 2144) + 132;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 2 );
  return result;
}

//----- (0223D004) --------------------------------------------------------
int __fastcall Function_223d004(int a1)
{
  int *v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  ushort *v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;

  v10 = a1;
  v1 = &dword_2248EC0;
  v12 = *(uint *)(a1 + 2144);
  v2 = &dword_2248EE0;
  v3 = 1;
  v11 = 0;
  v4 = v12 + 36;
  do
  {
    Function_201a7a0(v4);
    if ( *(uint *)(v12 + 28) )
    {
      Function_201a7e8(*(uint **)(v10 + 36), v4, 2, *v2, v2[1], v2[2], v2[3], 14, v3);
      v5 = v2[2];
      v6 = v2[3];
    }
    else
    {
      Function_201a7e8(*(uint **)(v10 + 36), v4, 2, *v1, v1[1], v1[2], v1[3], 14, v3);
      v5 = v1[2];
      v6 = v1[3];
    }
    v3 += v6 * v5;
    Function_201ada4_ClearTextBox(v4, 0);
    v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v10 + 72), 0x43u);
    Function_201d78c(v4, 0);
    Function_201a9a4(v4);
    Function_20237bc_FreeMsg((int)v7, v8);
    v4 += 16;
    result = v11 + 1;
    v1 += 4;
    v2 += 4;
    v11 = result;
  }
  while ( result < 2 );
  return result;
}

//----- (0223D100) --------------------------------------------------------
uint __fastcall Function_223d100(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = *(uint *)(a1 + 2144) + 36;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 2 );
  return result;
}

//----- (0223D124) --------------------------------------------------------
uint __fastcall Function_223d124(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 87 )
  {
    v2 = 0;
    ErrorHandler();
  }
  v4 = v2;
  if ( dword_22497E8[v4] == 0xFFFF )
    ErrorHandler();
  v5 = LoadVariableAreaAdress_14(*(uint *)(v3 + 2096));
  return Function_202cfb8(v5, dword_22497E8[v4]);
}

//----- (0223D160) --------------------------------------------------------
uint __fastcall Function_223d160(int a1)
{
  int v1;
  int v2;
  int *v3;
  ushort **v4;
  ushort *v5;
  int v6;
  int v7;
  ushort **v8;
  ushort *v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  uint v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v24;
  int v25;
  ushort *v26;
  ushort *v27;
  char v28;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v25 = Function_2023790(255, 0x66u);
  v3 = (int *)Function_2231690(0x66u);
  Function_201ada4_ClearTextBox(v2 + 36, 0);
  v4 = *(ushort ***)(v1 + 76);
  if ( *(uint *)(v2 + 28) )
    v5 = Function_200b1ec_CallMsgDecrypt(
           v4,
           *(uchar *)(*(uint *)(v2 + 1812) + 456 * *(uint *)(v2 + 12)) - 1);
  else
    v5 = Function_200b1ec_CallMsgDecrypt(
           v4,
           *(uchar *)(*(uint *)(v2 + 1816) + 72 * *(uint *)(v2 + 12)) - 1);
  v6 = (int)v5;
  Function_201d78c(v2 + 36, 0);
  Function_201a9a4(v2 + 36);
  Function_20237bc_FreeMsg(v6, v7);
  Function_201ada4_ClearTextBox(v2 + 52, 0);
  v8 = *(ushort ***)(v1 + 72);
  if ( *(uint *)(v2 + 28) )
    v9 = Function_200b1ec_CallMsgDecrypt(v8, 0x5Bu);
  else
    v9 = Function_200b1ec_CallMsgDecrypt(v8, *(uint *)(v2 + 20) + 82);
  v10 = v9;
  Function_201d78c(v2 + 52, 0);
  Function_201a9a4(v2 + 52);
  Function_20237bc_FreeMsg((int)v10, v11);
  v26 = Function_2030b94(*(char **)(v1 + 2188), 0x66u);
  Function_22349a8(v1, (int)v26);
  v12 = *(uint *)(v2 + 20);
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v15 = Function_2030ccc(*(uint *)(v1 + 2188));
      v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x56u);
      v27 = (ushort *)Function_2023790(255, 0x66u);
      Function_200c2e0((int)v3, 0, v15);
    }
    else if ( v12 == 2 )
    {
      v24 = Function_2030bbc(*(uint *)(v1 + 2188));
      v16 = Function_2030bec(*(uint *)(v1 + 2188));
      v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x57u);
      if ( v16 )
        v24 = 494;
      if ( v24 )
      {
        v27 = (ushort *)Function_2023790(255, 0x66u);
        Function_200b274(v24, 0x66u, &v28);
        Function_2023d28(v27, (ushort *)&v28);
      }
      else
      {
        v27 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x15u);
      }
      Function_200b48c(v3, 0, (int)v27);
    }
  }
  else
  {
    v13 = Function_2030cdc(*(uint *)(v1 + 2188));
    v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x55u);
    v14 = Function_2232234(v13, 4);
    v27 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 1860), v14);
    Function_200b48c(v3, 0, (int)v27);
  }
  Function_200b48c(v3, 1u, (int)v26);
  Function_200c388((uint *)v3, v25, (int)v10);
  Function_201d78c(v2 + 52, 0);
  Function_201a9a4(v2 + 52);
  Function_20237bc_FreeMsg((int)v10, v17);
  Function_20237bc_FreeMsg((int)v27, v18);
  Function_20237bc_FreeMsg(v25, v19);
  Function_20237bc_FreeMsg((int)v26, v20);
  Function_200c41c((uint *)v3, v21);
  return Function_200b3f0((uint *)v3, v22);
}

//----- (0223D3A8) --------------------------------------------------------
int __fastcall Function_223d3a8(int a1, int a2)
{
  uint **v2;
  int v3;
  int v4;

  v2 = *(uint ***)(a1 + 2144);
  if ( a2 )
  {
    Function_200d3f4(v2[42], 0);
    Function_20129d0(v2[43], 0);
    Function_200d4c4(v2[49], 80, 232);
  }
  else
  {
    Function_200d3f4(v2[42], 1);
    Function_20129d0(v2[43], 1);
    Function_200d4c4(v2[49], 128, 232);
  }
  Function_20128c4(v2[43], 36, -8, v3);
  return Function_20128c4(v2[50], 36, -8, v4);
}

//----- (0223D424) --------------------------------------------------------
int __fastcall Function_223d424(int a1)
{
  int v1;
  int **v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = *(int ***)(a1 + 2144);
  Function_223131c(a1, 2);
  v2[42] = Function_22313e0(v1, 2, v3, v4);
  v2[49] = Function_22313e0(v1, 2, v5, v6);
  Function_223118c((int)(v2 + 41), v1 + 20, 2);
  Function_223118c((int)(v2 + 48), v1 + 20, 2);
  Function_223124c((int)(v2 + 41), v1 + 20, 0x35u);
  Function_223124c((int)(v2 + 48), v1 + 20, 3u);
  Function_200d4c4(v2[42], 32, 232);
  Function_200d4c4(v2[49], 128, 232);
  Function_20128c4(v2[43], 36, -8, v7);
  Function_20128c4(v2[50], 36, -8, v8);
  Function_20129d0(v2[43], 0);
  Function_20129d0(v2[50], 1);
  return Function_223d3a8(v1, 1);
}

//----- (0223D4E4) --------------------------------------------------------
int __fastcall Function_223d4e4(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_22312b0(*(uint *)(a1 + 2144) + 164);
  Function_22312b0(v2 + 192);
  Function_200d0f4(*(uint *)(v2 + 168));
  Function_200d0f4(*(uint *)(v2 + 196));
  return Function_22313bc(v1);
}

//----- (0223D518) --------------------------------------------------------
int __fastcall Function_223d518(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v6 = 16;
  v7 = 12;
  v8 = 20;
  result = *(&v6 + *(uint *)(a1 + 20));
  *(uint *)(v4 + 32) = result;
  return result;
}

//----- (0223D540) --------------------------------------------------------
uint *__fastcall Function_223d540(uint *result, int a2, int a3)
{
  uint *v3;
  uint *v4;
  uint v5;
  int v6;
  uint v7;
  int v8;

  v3 = (uint *)a3;
  v4 = *(uint **)(a3 + 2144);
  if ( !a2 )
  {
    if ( result )
    {
      if ( result == (uint *)1 )
      {
        Function_2234520(a3);
        v7 = v4[5] + 1;
        v4[5] = v7;
        s32_div_f(v7, v4[6]);
        v4[5] = v8;
        result = Function_222fb60(v3, 4);
      }
      else
      {
        Function_2234520(a3);
        result = Function_222fb60(v3, 7);
      }
    }
    else
    {
      Function_2234520(a3);
      v5 = v4[3] + 1;
      v4[3] = v5;
      s32_div_f(v5, v4[4]);
      v4[3] = v6;
      result = Function_222fb60(v3, 4);
    }
  }
  return result;
}

//----- (0223D5A4) --------------------------------------------------------
int __fastcall Function_223d5a4(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = (int *)malloc(0x66u, 2872);
  Call_FillMemWithValue(v2, 0, 0xB38u);
  *(uint *)(v1 + 2144) = v2;
  v2[7] = *(uint *)(v1 + 2156);
  v2[4] = 3;
  if ( !Function_208be68(v1) )
    --v2[4];
  v2[6] = 3;
  Function_223d518((int)v2, v3, v4, v5);
  v2[465] = *(uint *)(v1 + 72);
  Function_2019ebc(*(uint **)(v1 + 36), 2u);
  Function_2019ebc(*(uint **)(v1 + 36), 3u);
  Function_2019ebc(*(uint **)(v1 + 36), 6u);
  Function_2019ebc(*(uint **)(v1 + 36), 7u);
  Function_22315c8(v2, v2 + 1, 0);
  v2[55] = Function_2023fcc((int)dword_2248E94, 3u, (int)Function_223d540, v1, 0x66u);
  Function_222fb60((uint *)v1, 1);
  return 0;
}

//----- (0223D644) --------------------------------------------------------
int __fastcall Function_223d644(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2234540(a1, 1);
      Function_2231454(v1);
      Function_223d424(v1);
      Function_2234540(v1, 0);
      Function_2019060(0, 1);
      Function_2019060(1u, 3);
      Function_2019060(2u, 0);
      Function_2019060(3u, 1);
      Function_2019060(4u, 1);
      Function_2019060(5u, 3);
      Function_2019060(6u, 0);
      Function_2019060(7u, 2);
      Function_223376c(v1, 0);
      Function_208b9e0(*(uint *)(v1 + 1776), 0);
      ++*(uint *)(v1 + 8);
    }
    else if ( Function_2233790(a1) )
    {
      Function_222fb60((uint *)v1, 2);
    }
  }
  else
  {
    if ( Function_2231664((int *)(v2 + 8), 1) )
      ++*(uint *)(v1 + 8);
    Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, *(uint *)(v2 + 8), *(ushort *)(v1 + 88));
    Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
    Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
  }
  return 0;
}

//----- (0223D744) --------------------------------------------------------
int __fastcall Function_223d744(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v7;
  int v8;
  int v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uchar *v16;
  uchar *v17;
  int v18;
  int v19;

  v19 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 2144);
  if ( !Function_22411b8() )
    return 0;
  v7 = *(uint *)(v4 + 8);
  if ( v7 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_223D772 + v7) + 35903348);
  switch ( (uchar)v7 )
  {
    case 0:
      Function_2234358(v4, *(uint *)(v4 + 1776), 128, 96);
      Function_208b9e0(*(uint *)(v4 + 1776), 1);
      Function_208ba08(*(uint *)(v4 + 1776), 24, 24);
      Function_2231aac(v4, 0x117u);
      Function_2005748(0x565u);
      ++*(uint *)(v4 + 8);
      break;
    case 1:
      v8 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int))dword_222B2B8[0])(v8) == 1 )
        ++*(uint *)(v4 + 8);
      break;
    case 2:
      v9 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v9, &v18) == 1 )
      {
        Function_20057a4(1381, 0);
        Function_2231b8c(v4);
        Function_22348b8(v4, 4u, *(uint *)(v18 + 12), *(uint *)(v18 + 4));
        Function_208b9e0(*(uint *)(v4 + 1776), 0);
        *(uint *)(v4 + 8) = 5;
      }
      else
      {
        *(uint *)(v5 + 1820) = v5 + 1808;
        v10 = (ushort *)LoadPlayerDataAdress_26(*(uint *)(v4 + 2096));
        *(ushort *)(v5 + 1832) = Function_202cc58(v10);
        v11 = LoadPlayerDataAdress_26(*(uint *)(v4 + 2096));
        *(uchar *)(v5 + 1834) = Function_202cc5c(v11);
        v12 = LoadPlayerDataAdress_26(*(uint *)(v4 + 2096));
        *(uchar *)(v5 + 1835) = Function_202cc60(v12);
        *(uchar *)(v5 + 1836) = **(uchar **)(v5 + 1820);
        *(uchar *)(v5 + 1844) = *(uchar *)(*(uint *)(v5 + 1820) + 1);
        *(uchar *)(v5 + 1852) = *(uchar *)(*(uint *)(v5 + 1820) + 2);
        *(uint *)(v5 + 1840) = Function_223d124(v4, *(uchar *)(v5 + 1836) - 1);
        *(uint *)(v5 + 1848) = Function_223d124(v4, *(uchar *)(v5 + 1844) - 1);
        *(uint *)(v5 + 1856) = Function_223d124(v4, *(uchar *)(v5 + 1852) - 1);
        Function_20057a4(1381, 0);
        ++*(uint *)(v4 + 8);
      }
      break;
    case 3:
      v13 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, uint, int))dword_222B2D8[0])(v13, *(uint *)(v4 + 2188), v5 + 1836) == 1 )
        ++*(uint *)(v4 + 8);
      break;
    case 4:
      Function_2231b8c(v4);
      v14 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v14, &v18) == 1 )
      {
        Function_20057a4(1381, 0);
        Function_22348b8(v4, 5u, *(uint *)(v18 + 12), *(uint *)(v18 + 4));
        Function_208b9e0(*(uint *)(v4 + 1776), 0);
        *(uint *)(v4 + 8) = 5;
      }
      else
      {
        v15 = 0;
        if ( *(uint *)(v5 + 28) )
        {
          v17 = *(uchar **)(v5 + 1812);
          if ( !*v17 || !v17[456] || !v17[912] )
            v15 = 1;
        }
        else
        {
          v16 = *(uchar **)(v5 + 1816);
          if ( !*v16 || !v16[72] || !v16[144] )
            v15 = 1;
        }
        if ( v15 )
        {
          Function_22348b8(v4, 5u, 0, 0);
          *(uint *)(v4 + 1296) = 300;
          Function_208b9e0(*(uint *)(v4 + 1776), 0);
          *(uint *)(v4 + 8) = 5;
        }
        else
        {
          Function_20057a4(1381, 0);
          Function_2005748(0x55Fu);
          *(uint *)(v4 + 8) = 255;
        }
      }
      break;
    case 5:
      Function_2234540(v4, 1);
      Function_223d4e4(v4);
      Function_2024034(*(uint *)(v5 + 220));
      Function_2231688((uint *)(v5 + 8));
      Function_223146c((int **)v4);
      Function_2234540(v4, 0);
      Function_2019ebc(*(uint **)(v4 + 36), 2u);
      Function_2019ebc(*(uint **)(v4 + 36), 6u);
      Function_2019ebc(*(uint **)(v4 + 36), 3u);
      Function_2019ebc(*(uint **)(v4 + 36), 7u);
      Function_223376c(v4, 1);
      ++*(uint *)(v4 + 8);
      break;
    case 6:
      if ( Function_2233790(v4) )
      {
        if ( Function_2231664((int *)(v5 + 8), 0) )
        {
          Function_22318e8(v4);
          Function_2231688((uint *)(v5 + 8));
          Function_2003a2c(*(uint *)(v4 + 40), 2, 0xCu, 0x10u, *(uint *)(v4 + 88));
          Function_222fb44(v4, 1, 1, *(uint **)(v4 + 16));
          Function_222fb60((uint *)v4, 5);
          free(v5);
        }
        else
        {
          Function_2003a2c(*(uint *)(v4 + 40), 1, 2u, *(uint *)(v5 + 8), *(uint *)(v4 + 88));
          Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, *(uint *)(v5 + 8), *(uint *)(v4 + 88));
        }
      }
      break;
    default:
      Function_223cbe0(v4);
      Function_208b9e0(*(uint *)(v4 + 1776), 0);
      Function_208ba08(*(uint *)(v4 + 1776), 0, 0);
      Function_222fb60((uint *)v4, 5);
      break;
  }
  return 0;
}

//----- (0223DAE8) --------------------------------------------------------
int __fastcall Function_223dae8(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 0) )
      {
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, v2[2], *(uint *)(v1 + 88));
    }
    else
    {
      Function_222fb60((uint *)a1, 6);
    }
  }
  else
  {
    Function_20070e8(*(uint *)(a1 + 20), 0x3Eu, *(uint **)(a1 + 36), 3u, 0, 0, 0, 102);
    Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
    Function_200710c(*(uint *)(v1 + 20), 0x21u, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
    Function_200710c(*(uint *)(v1 + 20), 0x22u, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
    Function_223d004(v1);
    Function_223d160(v1);
    Function_2234540(v1, 1);
    Function_22335bc(v1 + 1148, v1, 2u);
    Function_223caec(v1);
    Function_2234540(v1, 0);
    Function_223cf2c(v1);
    Function_201ff0c(8u, 1);
    Function_201ff74(8u, 1);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223DC20) --------------------------------------------------------
int __fastcall Function_223dc20(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_2233664(a1 + 1148);
  Function_22332ac(v1 + 1180, *(ushort *)(v1 + 1164));
  Function_2232c78(v1 + 1180, v1, *(uint *)(v2 + 12), *(uint *)(v2 + 20), *(uint *)(v2 + 1864));
  Function_202404c(*(int **)(v2 + 220));
  return 0;
}

//----- (0223DC6C) --------------------------------------------------------
int __fastcall Function_223dc6c(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 1);
      if ( Function_22315e0(v2, v2 + 1, 1, 0) )
        ++v1[2];
      Function_2003a2c(v1[10], 3, 0xCu, v2[2], v1[22]);
      Function_2003a2c(v1[10], 2, 0xCu, v2[2], v1[22]);
    }
    else
    {
      Function_222fb60(a1, 8);
    }
  }
  else
  {
    Function_2234540((int)a1, 1);
    Function_2233600((int)(v1 + 287));
    Function_22332fc((int)(v1 + 295));
    v5 = v2[466];
    if ( v5 )
      Function_20237bc_FreeMsg(v5, v4);
    Function_22334fc((int)(v1 + 295), (int)v1);
    Function_2234540((int)v1, 0);
    Function_208b9e0(v1[445], 0);
    Function_201ff74(4u, 0);
    Function_201ff0c(4u, 0);
    ++v1[2];
  }
  return 0;
}

//----- (0223DD44) --------------------------------------------------------
int __fastcall Function_223dd44(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2234540(a1, 1);
      Function_2231688((uint *)(v2 + 8));
      Function_223146c((int **)v1);
      Function_2234540(v1, 0);
      Function_2019ebc(*(uint **)(v1 + 36), 2u);
      Function_2019ebc(*(uint **)(v1 + 36), 6u);
      Function_2019ebc(*(uint **)(v1 + 36), 3u);
      Function_2019ebc(*(uint **)(v1 + 36), 7u);
      Function_223376c(v1, 1);
      ++*(uint *)(v1 + 8);
    }
    else if ( Function_2233790(a1) )
    {
      if ( Function_2231664((int *)(v2 + 8), 0) )
      {
        Function_22318e8(v1);
        Function_2231688((uint *)(v2 + 8));
        Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
        Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
        Function_222fb60((uint *)v1, 5);
        free(v2);
      }
      else
      {
        Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      }
    }
  }
  else
  {
    Function_223cfe0(a1);
    Function_223d100(v1);
    Function_2234540(v1, 1);
    Function_223d4e4(v1);
    Function_2234540(v1, 0);
    Function_2024034(*(uint *)(v2 + 220));
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223DE60) --------------------------------------------------------
int Function_223de60()
{
  ErrorHandler();
  return 0;
}

//----- (0223DE6C) --------------------------------------------------------
int __fastcall Function_223de6c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 1, 1) )
        ++*(uint *)(v1 + 8);
    }
    else if ( v3 == 2 )
    {
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 0, 1) )
      {
        Function_223d004(v1);
        Function_223d160(v1);
        Function_223caec(v1);
        ++*(uint *)(v1 + 8);
      }
    }
    else
    {
      Function_222fb60((uint *)a1, 6);
    }
  }
  else
  {
    Function_223cbe0(a1);
    Function_223d518(v2, v4, v5, v6);
    Function_223d100(v1);
    Function_22332fc(v1 + 1180);
    v8 = *(uint *)(v2 + 1864);
    if ( v8 )
      Function_20237bc_FreeMsg(v8, v7);
    Function_22334fc(v1 + 1180, v1);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223DF10) --------------------------------------------------------
int __fastcall Function_223df10(int a1, uint *a2)
{
  int v2;
  int result;
  int v4;
  uint v5;

  v2 = *(uint *)(a1 + 2144);
  if ( *a2 == 1 )
  {
    result = 1820;
    *(uint *)(v2 + 1820) = v2 + 1808;
  }
  else
  {
    v4 = Function_224112c(a1);
    ((void (__fastcall *)(int, int))dword_222BBBC[111])(v4, v2 + 1820);
    result = MI_CpuCopy8(*(uint *)(v2 + 1820), v2 + 1808, 4u, v5);
  }
  return result;
}

//----- (0223DF4C) --------------------------------------------------------
int __fastcall Function_223df4c(int a1, uint *a2)
{
  int v2;
  int result;
  int v4;
  uint v5;
  uint v6;

  v2 = *(uint *)(a1 + 2144);
  if ( *a2 == 1 )
  {
    *(uint *)(v2 + 1812) = v2 + 224;
    result = 1816;
    *(uint *)(v2 + 1816) = v2 + 1592;
  }
  else
  {
    v4 = Function_224112c(a1);
    ((void (__fastcall *)(int, int, int))dword_222BBBC[124])(v4, v2 + 1812, v2 + 1816);
    MI_CpuCopy8(*(uint *)(v2 + 1812), v2 + 224, 0x558u, v5);
    result = MI_CpuCopy8(*(uint *)(v2 + 1816), v2 + 1592, 0xD8u, v6);
  }
  return result;
}

//----- (0223DFA8) --------------------------------------------------------
int __fastcall Function_223dfa8(int a1)
{
  short *v1;
  char *v2;
  int v3;
  short v4;
  int v5;
  int v6;
  char *v7;
  int *v8;
  int result;
  int v10;
  int v11;
  int v12;
  char v13;

  v1 = &word_2249064;
  v2 = &v13;
  v3 = 60;
  do
  {
    v4 = *v1;
    ++v1;
    *(ushort *)v2 = v4;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  v12 = 0;
  v11 = *(uint *)(a1 + 2144);
  v10 = 0;
  do
  {
    v5 = v11;
    v6 = 0;
    v7 = &v13 + 4 * v10;
    do
    {
      v8 = *(int **)(v5 + 8336);
      if ( v8 )
        Function_200d4c4(v8, *(short *)v7, *((short *)v7 + 1));
      ++v6;
      v5 += 8;
      v7 += 4;
    }
    while ( v6 < 6 );
    v11 += 48;
    v10 += 6;
    result = v12 + 1;
    v12 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (0223E01C) --------------------------------------------------------
int __fastcall Function_223e01c(int a1)
{
  int v1;
  int **v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = *(int ***)(a1 + 2144);
  Function_22312cc(a1, 2);
  v2[70] = Function_22313e0(v1, 2, v3, v4);
  v2[77] = Function_22313e0(v1, 2, v5, v6);
  Function_223118c((int)(v2 + 69), v1 + 20, 2);
  Function_223118c((int)(v2 + 76), v1 + 20, 2);
  Function_223124c((int)(v2 + 69), v1 + 20, 3u);
  Function_223124c((int)(v2 + 76), v1 + 20, 0x5Eu);
  Function_200d364(v2[70], 0);
  Function_200d364(v2[77], 3u);
  Function_200d4c4(v2[70], 32, 232);
  Function_200d4c4(v2[77], 128, 232);
  Function_20128c4(v2[71], 36, -8, v7);
  Function_20128c4(v2[78], 36, -8, v8);
  Function_20129d0(v2[71], 1);
  Function_20129d0(v2[78], 1);
  return Function_223f0a8(v1, 0);
}

//----- (0223E0FC) --------------------------------------------------------
uint __fastcall Function_223e0fc(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  char *v5;
  int *v6;
  ushort *v7;
  ushort *v8;
  ushort *v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  int *v14;
  ushort *v15;
  ushort *v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v3 = a1;
  v4 = a2;
  if ( a2 == 100 )
  {
    v5 = *(char **)(*(uint *)(a1 + 2144) + 404);
    v6 = (int *)Function_2231690(0x66u);
    v7 = (ushort *)Function_2023790(255, 0x66u);
    v8 = Function_2030b94(v5, 0x66u);
    Function_22349a8(v3, (int)v8);
    v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), v4);
    Function_200b48c(v6, 0, (int)v8);
    Function_200c388((uint *)v6, (int)v7, (int)v9);
    Function_20237bc_FreeMsg((int)v8, v10);
    Function_20237bc_FreeMsg((int)v9, v11);
    Function_200b3f0((uint *)v6, v12);
  }
  else if ( a2 == 102 )
  {
    v13 = *(char **)(a1 + 4 * a3 + 2188);
    v14 = (int *)Function_2231690(0x66u);
    v7 = (ushort *)Function_2023790(255, 0x66u);
    v15 = Function_2030b94(v13, 0x66u);
    Function_22349a8(v3, (int)v15);
    v16 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 0x66u);
    Function_200b48c(v14, 0, (int)v15);
    Function_200c388((uint *)v14, (int)v7, (int)v16);
    Function_20237bc_FreeMsg((int)v15, v17);
    Function_20237bc_FreeMsg((int)v16, v18);
    Function_200b3f0((uint *)v14, v19);
  }
  else
  {
    v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 72), a2);
  }
  Function_201ada4_ClearTextBox(v3 + 2212, 204);
  Function_201d78c(v3 + 2212, 0);
  Function_201a9a4(v3 + 2212);
  return Function_20237bc_FreeMsg((int)v7, v20);
}

//----- (0223E22C) --------------------------------------------------------
int __fastcall Function_223e22c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = *(int **)(a1 + 2144);
  if ( !Function_22411b8() )
    return 0;
  v7 = *(uint *)(v4 + 8);
  if ( v7 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_223E25A + v7) + 35906140);
  switch ( (uchar)v7 )
  {
    case 0:
      Function_2019ebc(*(uint **)(v4 + 36), 2u);
      Function_2019ebc(*(uint **)(v4 + 36), 6u);
      if ( v5[4] )
        Function_22323b8((int)(v5 + 101), 0);
      else
        Function_223427c((int)(v5 + 136), 0);
      ++*(uint *)(v4 + 8);
      goto LABEL_10;
    case 1:
LABEL_10:
      Function_2231664(v5 + 2, 1);
      if ( Function_22315e0(v5, v5 + 1, 1, 0) )
        ++*(uint *)(v4 + 8);
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, v5[2], *(uint *)(v4 + 88));
      break;
    case 2:
      Function_2231aac(v4, 0x75u);
      Function_2234358(v4, *(uint *)(v4 + 1776), 128, 96);
      Function_208b9e0(*(uint *)(v4 + 1776), 1);
      Function_208ba08(*(uint *)(v4 + 1776), 24, 24);
      v5[2062] = 0;
      Function_2005748(0x565u);
      ++*(uint *)(v4 + 8);
      break;
    case 3:
      v8 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, uint, uint))dword_222B524[0])(
             v8,
             *(uint *)(*(uint *)(v4 + 4 * *(uint *)(v4 + 1236) + 9736) + 216),
             *(uint *)(*(uint *)(v4 + 4 * *(uint *)(v4 + 1236) + 9736) + 220)) == 1 )
        ++*(uint *)(v4 + 8);
      break;
    case 4:
      Function_2231b8c(v4);
      v9 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v9, &v11) == 1 )
      {
        Function_20057a4(1381, 0);
        Function_22348b8(v4, 8u, *(uint *)(v11 + 12), *(uint *)(v11 + 4));
        ++*(uint *)(v4 + 8);
        v5[2062] = 0;
      }
      else
      {
        Function_20057a4(1381, 0);
        *(uint *)(v4 + 8) = 255;
        v5[2062] = 1;
        *(uint *)(v4 + 2168) = v4 + 16700 + *(uint *)(v4 + 1236);
        v10 = *(uint *)(v4 + 2228);
        v5[97] = v10;
        MI_CpuCopy8(v5[97], v4 + 2232, 0x1D4Cu, v10);
      }
      Function_208b9e0(*(uint *)(v4 + 1776), 0);
      Function_208ba08(*(uint *)(v4 + 1776), 0, 0);
      break;
    default:
      if ( v5[2062] )
      {
        Function_2005748(0x55Fu);
        Function_222fb60((uint *)v4, v5[2061]);
        Function_223381c(v4, 1);
      }
      else
      {
        Function_222fb60((uint *)v4, 20);
      }
      break;
  }
  return 0;
}

//----- (0223E428) --------------------------------------------------------
uint __fastcall Function_223e428(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  Call_free6(*(uint *)(v1 + 548));
  return Call_free7(*(uint *)(v1 + 404));
}

//----- (0223E448) --------------------------------------------------------
int __fastcall Function_223e448(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 400));
  return 0;
}

//----- (0223E460) --------------------------------------------------------
int __fastcall Function_223e460(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( Function_22315e0(*(int **)(a1 + 2144), v2 + 1, 1, 2) )
      {
        Function_2240a24(v1);
        Function_2019ebc(*(uint **)(v1 + 36), 6u);
        Function_2019ebc(*(uint **)(v1 + 36), 7u);
        ++*(uint *)(v1 + 8);
      }
    }
    else if ( v3 == 2 )
    {
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 2) )
      {
        Function_223e0fc(v1, 0x64u, 0);
        Function_201ff74(4u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
    }
    else
    {
      Function_222fb60((uint *)a1, 12);
    }
  }
  else
  {
    Function_201ff74(4u, 0);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223E510) --------------------------------------------------------
int __fastcall Function_223e510(uint *a1)
{
  int v1;
  int *v2;
  uint v3;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v1 = (int)a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 <= 7 )
    JUMPOUT(__CS__, *((short *)&off_223E530 + v3) + 35906866);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_201ff74(4u, 0);
      ++*(uint *)(v1 + 8);
      return 0;
    case 1:
      Function_2231664(v2 + 2, 1);
      if ( Function_22315e0(v2, v2 + 1, 1, 2) )
      {
        Function_2019ebc(*(uint **)(v1 + 36), 6u);
        Function_223e0fc(v1, 0x116u, 0);
        Function_22342bc(v1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
      return 0;
    case 2:
      if ( Function_22337f0((int)a1, v2[2058], *((uchar *)a1 + a1[309] + 16700)) )
        ++*(uint *)(v1 + 8);
      return 0;
    case 3:
      Function_2234358((int)a1, a1[444], 128, 96);
      Function_208b9e0(*(uint *)(v1 + 1776), 1);
      Function_208ba08(*(uint *)(v1 + 1776), 24, 24);
      ++*(uint *)(v1 + 8);
      Function_2005748(0x565u);
      return 0;
    case 4:
      if ( !Function_22411b8() )
        return 0;
      Function_223e0fc(v1, 0x118u, 0);
      v5 = Function_202fe04();
      v6 = Function_202fe98(v5, 4u, 0);
      v8 = v7;
      v9 = Function_224112c(v1);
      if ( ((int (__fastcall *)(int, uint, int))dword_222B550[0])(v9, v6, v8) == 1 )
        ++*(uint *)(v1 + 8);
      return 0;
    case 5:
      if ( !Function_22411b8() )
        return 0;
      v10 = Function_224112c(v1);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v10, &v14) == 1 )
      {
        Function_20057a4(1381, 0);
      }
      else
      {
        Function_20057a4(1381, 0);
        Function_2005748(0x55Fu);
      }
      ++*(uint *)(v1 + 8);
      Function_223e0fc(v1, 0x119u, 0);
      return 0;
    case 6:
      if ( Function_2022798() )
      {
        Function_2231a88(v1);
        Function_2234540(v1, 1);
        Function_223f038(v1);
        Function_2234540(v1, 0);
        Function_208b9e0(*(uint *)(v1 + 1776), 0);
        Function_208ba08(*(uint *)(v1 + 1776), 0, 0);
        Function_22339a0(v1);
        Function_22338a8(v1, v11, v12, v13);
        Function_2233310((int *)(v1 + 1180));
        ++*(uint *)(v1 + 8);
      }
      return 0;
    case 7:
      Function_2024034(v2[98]);
      Function_2024034(v2[99]);
      Function_2024034(v2[100]);
      Function_223e428(v1);
      Function_2231688(v2 + 2);
      Function_2234540(v1, 1);
      Function_223146c((int **)v1);
      Function_2234540(v1, 0);
      Function_20397c8(1, 0x66u);
      Function_223376c(v1, 1);
      ++*(uint *)(v1 + 8);
      return 0;
    default:
      if ( Function_2233790((int)a1) )
      {
        if ( Function_2231664(v2 + 2, 0) )
        {
          Function_22318e8(v1);
          Function_2231688(v2 + 2);
          Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
          Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
          Function_222fb60((uint *)v1, 5);
          Function_2019ebc(*(uint **)(v1 + 36), 2u);
          Function_2019ebc(*(uint **)(v1 + 36), 6u);
          Function_2019ebc(*(uint **)(v1 + 36), 3u);
          Function_2019ebc(*(uint **)(v1 + 36), 7u);
          free((int)v2);
          if ( Function_202f250() == 1 )
            Function_202f22c();
        }
        else
        {
          Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, v2[2], *(uint *)(v1 + 88));
          Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
        }
      }
      return 0;
  }
}

//----- (0223E810) --------------------------------------------------------
int __fastcall Function_223e810(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( Function_22315e0(*(int **)(a1 + 2144), v2 + 1, 0, 2) )
      {
        Function_2240944(v1);
        Function_201ff74(4u, 1);
        ++*(uint *)(v1 + 8);
      }
    }
    else
    {
      Function_222fb60((uint *)a1, 15);
    }
  }
  else
  {
    Function_2231664(v2 + 2, 1);
    if ( Function_22315e0(v2, v2 + 1, 1, 2) )
    {
      Function_200710c(*(uint *)(v1 + 20), 0x54u, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_223e0fc(v1, 0x66u, v2[2058]);
      ++*(uint *)(v1 + 8);
    }
    Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
  }
  return 0;
}

//----- (0223E8BC) --------------------------------------------------------
int __fastcall Function_223e8bc(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  v3 = *(uint *)(a1 + 2144);
  if ( v2 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_223E8DC + v2) + 35907806);
  switch ( (uchar)v2 )
  {
    case 0:
      Function_2019ebc(*(uint **)(a1 + 36), 2u);
      Function_2019ebc(*(uint **)(v1 + 36), 6u);
      Function_201ff74(4u, 0);
      Function_201ff0c(4u, 0);
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      Function_2231664((int *)(v3 + 8), 1);
      if ( Function_22315e0((int *)v3, (uint *)(v3 + 4), 1, 0) )
        ++*(uint *)(v1 + 8);
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v3 + 8), *(uint *)(v1 + 88));
      break;
    case 2:
      if ( *(uint *)(a1 + 2156) == 210 )
      {
        Function_223124c(v3 + 276, a1 + 20, 3u);
        Function_223124c(v3 + 304, v1 + 20, 0x5Eu);
        Function_200d364(*(int **)(v3 + 280), 0);
        Function_200d364(*(int **)(v3 + 308), 3u);
      }
      Function_224088c(v1);
      Function_2240900(v1);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_2234540(v1, 1);
      if ( *(uint *)(v3 + 16) )
      {
        Function_2232394(v3 + 404, v1);
        Function_2232378((char **)(v3 + 404), v1, v5, v6);
        Function_22323b8(v3 + 404, 0);
        Function_200710c(*(uint *)(v1 + 20), 0x50u, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      }
      else
      {
        Function_2234228(v3 + 544, v1);
        Function_2234214(v3 + 544, v1);
        Function_223427c(v3 + 544, 0);
        v4 = Function_2233fec(v3 + 544);
        Function_22343b8(v1, v4, 3u);
      }
      Function_2234540(v1, 0);
      Function_200710c(*(uint *)(v1 + 20), 6u, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      ++*(uint *)(v1 + 8);
      break;
    case 3:
      Function_2231664((int *)(v3 + 8), 0);
      if ( Function_22315e0((int *)v3, (uint *)(v3 + 4), 0, 0) )
      {
        if ( *(uint *)(v3 + 16) )
          Function_22323b8(v3 + 404, 1);
        else
          Function_223427c(v3 + 544, 1);
        Function_201ff74(4u, 1);
        Function_201ff0c(4u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v3 + 8), *(uint *)(v1 + 88));
      break;
    default:
      v7 = 0;
      if ( *(uint *)(v1 + 16696) > 0 )
      {
        v8 = v1 + 9856;
        v9 = v1;
        do
        {
          *(uint *)(v9 + 9736) = v8;
          ++v7;
          v8 += 228;
          v9 += 4;
        }
        while ( v7 < *(uint *)(v1 + 16696) );
      }
      Function_222fb60((uint *)v1, 7);
      break;
  }
  return 0;
}

//----- (0223EB10) --------------------------------------------------------
int __fastcall Function_223eb10(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 396));
  return 0;
}

//----- (0223EB28) --------------------------------------------------------
int __fastcall Function_223eb28(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_223EB48 + v3) + 35908426);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2019ebc(*(uint **)(a1 + 36), 2u);
      Function_2019ebc(*(uint **)(v1 + 36), 6u);
      Function_201ff74(4u, 0);
      Function_201ff0c(4u, 0);
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      Function_2231664((int *)(v2 + 8), 1);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 0) )
      {
        Function_2234540(v1, 1);
        Function_223f038(v1);
        Function_2234540(v1, 0);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      break;
    case 2:
      Function_223e01c(a1);
      if ( *(uint *)(v1 + 2156) == 210 )
      {
        Function_223124c(v2 + 276, v1 + 20, 3u);
        Function_223124c(v2 + 304, v1 + 20, 0x5Eu);
        Function_200d364(*(int **)(v2 + 280), 0);
        Function_200d364(*(int **)(v2 + 308), 3u);
      }
      Function_2240900(v1);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_2234540(v1, 1);
      if ( *(uint *)(v2 + 16) )
      {
        Function_2232378((char **)(v2 + 404), v1, v4, v5);
        Function_22323b8(v2 + 404, 0);
        Function_200710c(*(uint *)(v1 + 20), 0x50u, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      }
      else
      {
        Function_2234214(v2 + 544, v1);
        Function_223427c(v2 + 544, 0);
        v6 = Function_2233fec(v2 + 544);
        Function_22343b8(v1, v6, 3u);
      }
      Function_2234540(v1, 0);
      Function_200710c(*(uint *)(v1 + 20), 6u, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      ++*(uint *)(v1 + 8);
      break;
    case 3:
      Function_2231664((int *)(v2 + 8), 0);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 0) )
      {
        if ( *(uint *)(v2 + 16) )
          Function_22323b8(v2 + 404, 1);
        else
          Function_223427c(v2 + 544, 1);
        Function_201ff74(4u, 1);
        Function_201ff0c(4u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      break;
    default:
      v7 = 0;
      if ( *(uint *)(v1 + 16696) > 0 )
      {
        v8 = v1 + 9856;
        v9 = v1;
        do
        {
          *(uint *)(v9 + 9736) = v8;
          ++v7;
          v8 += 228;
          v9 += 4;
        }
        while ( v7 < *(uint *)(v1 + 16696) );
      }
      Function_222fb60((uint *)v1, 7);
      break;
  }
  return 0;
}

//----- (0223ED7C) --------------------------------------------------------
int __fastcall Function_223ed7c(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664((int *)(v2 + 8), 1);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 0) )
      {
        Function_223124c(v2 + 276, (int)(v1 + 5), 3u);
        Function_223124c(v2 + 304, (int)(v1 + 5), 0x6Fu);
        Function_200d364(*(int **)(v2 + 280), 0);
        Function_200d364(*(int **)(v2 + 308), 1u);
        Function_223f0a8(v1, 1);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, *(uint *)(v2 + 8), v1[22]);
    }
    else
    {
      Function_222fb60(a1, 3);
    }
  }
  else
  {
    Function_2024034(*(uint *)(v2 + 392));
    Function_2024034(*(uint *)(v2 + 396));
    Function_2024034(*(uint *)(v2 + 400));
    Function_201ff74(4u, 0);
    Function_201ff0c(4u, 0);
    Function_223e428((int)v1);
    Function_2234540((int)v1, 1);
    if ( *(uint *)(v2 + 16) )
      Function_2232394(v2 + 404, (int)v1);
    else
      Function_2234228(v2 + 544, (int)v1);
    Function_2234540((int)v1, 0);
    Function_224088c(v1);
    ++v1[2];
  }
  return 0;
}

//----- (0223EE88) --------------------------------------------------------
uint __fastcall Function_223ee88(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  ushort *v7;
  int *v8;
  ushort *v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  char v17;
  int v18;

  v18 = a4;
  v4 = a2;
  v5 = 4 * a3;
  v6 = a2 + 2188;
  v16 = a1;
  if ( *(uint *)(a2 + 2188 + 4 * a3) )
  {
    v8 = (int *)Function_2231690(0x66u);
    v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 72), 7u);
    v10 = Function_2030b94(*(char **)(v6 + v5), 0x66u);
    Function_22349a8(v4, (int)v10);
    v7 = (ushort *)Function_2023790(255, 0x66u);
    Function_200b48c(v8, 0, (int)v10);
    Function_200c388((uint *)v8, (int)v7, (int)v9);
    Function_20237bc_FreeMsg((int)v9, v11);
    Function_20237bc_FreeMsg((int)v10, v12);
    Function_200b3f0((uint *)v8, v13);
  }
  else
  {
    v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a2 + 72), 8u);
  }
  Function_201a7a0((int)&v17);
  Function_201a870(*(uint **)(v4 + 36), (int)&v17, 20, 2, 0, 0);
  Function_201d78c((int)&v17, 0);
  Function_2012be0(*(int ***)(v16 + 8), *(uint *)(v16 + 12), (int)&v17, 0x66u);
  Function_20237bc_FreeMsg((int)v7, v14);
  return Function_201a8fc((int)&v17);
}

//----- (0223EF60) --------------------------------------------------------
int __fastcall Function_223ef60(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  int result;
  int v13;
  int v14;
  uint *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v25 = a4;
  v4 = *(uint *)(a1 + 2144);
  v13 = a1;
  v21 = 8;
  v22 = 8;
  v23 = 8;
  v24 = 3;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 1;
  Function_223136c(a1, 2);
  v7 = v4 + 276;
  v15 = (uint *)&v21;
  v14 = 105;
  v8 = 0;
  v9 = (uint *)&v17;
  v16 = v13 + 20;
  do
  {
    *(uint *)(v4 + 280) = Function_22313e0(v13, 2, v5, v6);
    Function_223118c(v7, v16, 2);
    Function_223124c(v7, v16, *v15);
    if ( v8 != 3 )
      Function_223ee88(v7, v13, v8 + 1, v10);
    Function_200d4c4(*(int **)(v4 + 280), 50, (short)v14);
    Function_200d364(*(int **)(v4 + 280), *v9);
    Function_20128c4(*(uint **)(v4 + 284), 36, -8, v11);
    Function_20129d0(*(uint **)(v4 + 284), 1);
    ++v8;
    ++v15;
    v4 += 28;
    result = v14 + 36;
    v7 += 28;
    ++v9;
    v14 += 36;
  }
  while ( v8 < 4 );
  return result;
}

//----- (0223F038) --------------------------------------------------------
int __fastcall Function_223f038(int a1)
{
  int v1;
  int v2;
  int v3;
  int v5;

  v5 = a1;
  v1 = *(uint *)(a1 + 2144);
  v2 = 0;
  v3 = v1 + 276;
  do
  {
    Function_22312b0(v3);
    Function_200d0f4(*(uint *)(v1 + 280));
    ++v2;
    v3 += 28;
    v1 += 28;
  }
  while ( v2 < 4 );
  return Function_22313bc(v5);
}

//----- (0223F06C) --------------------------------------------------------
int __fastcall Function_223f06c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_22312b0(v2 + 276);
  Function_22312b0(v2 + 304);
  Function_200d0f4(*(uint *)(v2 + 280));
  Function_200d0f4(*(uint *)(v2 + 308));
  return Function_22313bc(v1);
}

//----- (0223F0A8) --------------------------------------------------------
int __fastcall Function_223f0a8(int a1, int a2)
{
  uint **v2;
  int v3;
  int v4;

  v2 = *(uint ***)(a1 + 2144);
  if ( a2 )
  {
    Function_200d3f4(v2[77], 0);
    Function_20129d0(v2[78], 0);
    Function_200d4c4(v2[70], 80, 232);
  }
  else
  {
    Function_200d3f4(v2[77], 1);
    Function_20129d0(v2[78], 1);
    Function_200d4c4(v2[70], 32, 232);
  }
  Function_20128c4(v2[71], 36, -8, v3);
  return Function_20128c4(v2[78], 36, -8, v4);
}

//----- (0223F124) --------------------------------------------------------
int __fastcall Function_223f124(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = *(uint *)(a1 + 2144);
  v2 = 0;
  if ( *(uint *)(v1 + 8240) > 0 )
  {
    v3 = v1 + 20;
    do
    {
      Function_201acf4(v3);
      Function_201a8fc(v3);
      ++v2;
      v3 += 16;
    }
    while ( v2 < *(uint *)(v1 + 8240) );
  }
  result = 8240;
  *(uint *)(v1 + 8240) = 0;
  return result;
}

//----- (0223F160) --------------------------------------------------------
int __fastcall Function_223f160(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = *(uint *)(a1 + 2144);
  v2 = 0;
  if ( *(uint *)(v1 + 8236) > 0 )
  {
    v3 = v1 + 148;
    do
    {
      Function_201acf4(v3);
      Function_201a8fc(v3);
      ++v2;
      v3 += 16;
    }
    while ( v2 < *(uint *)(v1 + 8236) );
  }
  result = 8236;
  *(uint *)(v1 + 8236) = 0;
  return result;
}

//----- (0223F19C) --------------------------------------------------------
int __fastcall Function_223f19c(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = (int *)malloc(0x66u, 8572);
  Call_FillMemWithValue(v2, 0, 0x217Cu);
  *(uint *)(v1 + 2144) = v2;
  v3 = *(uint *)(v1 + 2156);
  switch ( v3 )
  {
    case 300:
      v2[3] = 0;
      break;
    case 301:
      v2[3] = 1;
      break;
    case 200:
      v2[3] = 2;
      break;
  }
  Function_2019ebc(*(uint **)(v1 + 36), 2u);
  Function_2019ebc(*(uint **)(v1 + 36), 3u);
  Function_2019ebc(*(uint **)(v1 + 36), 6u);
  Function_2019ebc(*(uint **)(v1 + 36), 7u);
  Function_22315c8(v2, v2 + 1, 0);
  Function_222fb60((uint *)v1, 1);
  return 0;
}

//----- (0223F218) --------------------------------------------------------
int __fastcall Function_223f218(int a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = (uint *)a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2019060(0, 1);
      Function_2019060(1u, 3);
      Function_2019060(2u, 0);
      Function_2019060(3u, 1);
      Function_2019060(4u, 1);
      Function_2019060(5u, 3);
      Function_2019060(6u, 0);
      Function_2019060(7u, 2);
      Function_223376c((int)v1, 0);
      Function_208b9e0(v1[444], 0);
      ++v1[2];
    }
    else if ( v3 == 2 )
    {
      if ( Function_2233790(a1) )
      {
        Function_2234540((int)v1, 1);
        Function_2231454((int)v1);
        Function_2234540((int)v1, 0);
        Function_2234540((int)v1, 1);
        Function_223e01c((int)v1);
        Function_2234540((int)v1, 0);
        ++v1[2];
      }
    }
    else if ( Function_22300bc(a1) == 1 )
    {
      Function_222fb60(v1, 19);
    }
    else
    {
      Function_222fb60(v1, 2);
    }
  }
  else
  {
    if ( Function_2231664((int *)(v2 + 8), 1) )
      ++v1[2];
    Function_2003a2c(v1[10], 2, 0xCu, *(uint *)(v2 + 8), v1[22]);
    Function_2003a2c(v1[10], 3, 0xCu, *(uint *)(v2 + 8), v1[22]);
    Function_2003a2c(v1[10], 1, 2u, *(uint *)(v2 + 8), v1[22]);
  }
  return 0;
}

//----- (0223F348) --------------------------------------------------------
int __fastcall Function_223f348(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v5 = *(int **)(a1 + 2144);
  if ( !Function_22411b8() )
    return 0;
  v7 = *(uint *)(v4 + 8);
  if ( v7 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_223F376 + v7) + 35910520);
  switch ( (uchar)v7 )
  {
    case 0:
      Function_2234358(v4, *(uint *)(v4 + 1776), 128, 96);
      Function_208b9e0(*(uint *)(v4 + 1776), 1);
      Function_208ba08(*(uint *)(v4 + 1776), 24, 24);
      if ( (uint)(*(uint *)(v4 + 2156) - 300) > 1 )
        Function_2231aac(v4, 0x124u);
      else
        Function_2231aac(v4, 0x117u);
      Function_2005748(0x565u);
      ++*(uint *)(v4 + 8);
      break;
    case 1:
      v8 = *(uint *)(v4 + 2156);
      switch ( v8 )
      {
        case 300:
          v5[3] = 0;
          v9 = Function_224112c(v4);
          if ( ((int (__fastcall *)(int))dword_222B4A8[0])(v9) == 1 )
            ++*(uint *)(v4 + 8);
          break;
        case 301:
          v5[3] = 1;
          v10 = Function_224112c(v4);
          if ( ((int (__fastcall *)(int))dword_222B4E4[0])(v10) == 1 )
            ++*(uint *)(v4 + 8);
          break;
        case 200:
          v5[3] = 2;
          if ( Function_208be68(v4) == 1 )
          {
            v11 = Function_224112c(v4);
            if ( ((int (__fastcall *)(int))dword_222B44C[0])(v11) == 1 )
              ++*(uint *)(v4 + 8);
          }
          else
          {
            v12 = Function_224112c(v4);
            if ( ((int (__fastcall *)(int))dword_222B3EC[0])(v12) == 1 )
              ++*(uint *)(v4 + 8);
          }
          break;
        default:
          ErrorHandler();
          break;
      }
      break;
    case 2:
      Function_2231b8c(v4);
      v13 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v13, &v15) == 1 )
      {
        Function_20057a4(1381, 0);
        Function_22348b8(v4, 7u, *(uint *)(v15 + 12), *(uint *)(v15 + 4));
        ++*(uint *)(v4 + 8);
      }
      else
      {
        Function_20057a4(1381, 0);
        Function_2005748(0x55Fu);
        if ( *(uint *)(v4 + 16696) )
        {
          *(uint *)(v4 + 8) = 255;
        }
        else
        {
          Function_22348b8(v4, 5u, 0, 0);
          if ( v5[3] == 2 )
            v14 = 118;
          else
            v14 = 300;
          *(uint *)(v4 + 1296) = v14;
          Function_208b9e0(*(uint *)(v4 + 1776), 0);
          ++*(uint *)(v4 + 8);
        }
      }
      break;
    case 3:
      Function_208b9e0(*(uint *)(v4 + 1776), 0);
      Function_208ba08(*(uint *)(v4 + 1776), 0, 0);
      ++*(uint *)(v4 + 8);
      break;
    case 4:
      Function_2231664(v5 + 2, 1);
      if ( Function_22315e0(v5, v5 + 1, 1, 0) )
        ++*(uint *)(v4 + 8);
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, v5[2], *(uint *)(v4 + 88));
      break;
    case 5:
      Function_2234540(v4, 1);
      Function_223f06c(v4);
      Function_223146c((int **)v4);
      Function_2234540(v4, 0);
      Function_20397c8(1, 0x66u);
      Function_223376c(v4, 1);
      ++*(uint *)(v4 + 8);
      break;
    case 6:
      if ( Function_2233790(v4) )
      {
        if ( Function_2231664(v5 + 2, 0) )
        {
          Function_22318e8(v4);
          Function_2231688(v5 + 2);
          Function_2003a2c(*(uint *)(v4 + 40), 2, 0xCu, 0x10u, *(uint *)(v4 + 88));
          Function_222fb44(v4, 1, 1, *(uint **)(v4 + 16));
          Function_222fb60((uint *)v4, 5);
          Function_2019ebc(*(uint **)(v4 + 36), 2u);
          Function_2019ebc(*(uint **)(v4 + 36), 6u);
          Function_2019ebc(*(uint **)(v4 + 36), 3u);
          Function_2019ebc(*(uint **)(v4 + 36), 7u);
          free((int)v5);
        }
        else
        {
          Function_2003a2c(*(uint *)(v4 + 40), 1, 2u, v5[2], *(uint *)(v4 + 88));
          Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, v5[2], *(uint *)(v4 + 88));
        }
      }
      break;
    default:
      Function_208b9e0(*(uint *)(v4 + 1776), 0);
      Function_208ba08(*(uint *)(v4 + 1776), 0, 0);
      Function_222fb60((uint *)v4, 3);
      break;
  }
  return 0;
}

//----- (0223F65C) --------------------------------------------------------
int __fastcall Function_223f65c(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  ushort *v7;
  int v8;
  ushort *v9;
  int v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = *(uint **)(a1 + 2144);
  v6 = *(uint *)(a1 + 2144);
  v12 = 97;
  v13 = 98;
  v6 += 20;
  v14 = 123;
  Function_201a7a0(v6);
  Function_201a7e8(*(uint **)(v4 + 36), v6, 2, 3, 3, 0x14u, 4u, 14, 32);
  Function_201ada4_ClearTextBox(v6, 0);
  v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 72), *(&v12 + v5[3]));
  Function_201d78c(v6, 0);
  Function_201a9a4(v6);
  Function_20237bc_FreeMsg((int)v7, v8);
  Function_201a7a0((int)(v5 + 37));
  Function_201a7e8(*(uint **)(v4 + 36), (int)(v5 + 37), 6, 11, 6, 0xAu, 4u, 14, 256);
  Function_201ada4_ClearTextBox((int)(v5 + 37), 0);
  v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 72), 0x5Fu);
  Function_2002eb4(0, (int)v9, 0);
  Function_201d78c((int)(v5 + 37), 0);
  Function_201a9a4((int)(v5 + 37));
  Function_20237bc_FreeMsg((int)v9, v10);
  v5[2059] = 1;
  result = 8240;
  v5[2060] = 1;
  return result;
}

//----- (0223F760) --------------------------------------------------------
int __fastcall Function_223f760(uint *a1)
{
  int v1;
  int *v2;
  int v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v1 = (int)a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 0) )
      {
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        Function_2240d98(v1, 1);
        Function_2234358(v1, *(uint *)(v1 + 1776), 16, (short)(24 * *(uint *)(v1 + 1240) + 76));
        Function_208b9e0(*(uint *)(v1 + 1776), 1);
        Function_208ba08(*(uint *)(v1 + 1776), 12, 12);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, v2[2], *(uint *)(v1 + 88));
    }
    else
    {
      Function_222fb60(a1, 4);
    }
  }
  else
  {
    if ( Function_202f250() )
      Function_202f22c();
    v4 = &dword_2248FD8;
    v5 = v2 + 2069;
    v6 = 5;
    do
    {
      v7 = *v4;
      v8 = v4[1];
      v4 += 2;
      *v5 = v7;
      v5[1] = v8;
      v5 += 2;
      --v6;
    }
    while ( v6 );
    *v5 = *v4;
    v2[2069] = 0;
    v2[2070] = *(uint *)(v1 + 16696);
    Function_22339dc((uint *)v1);
    v2[2080] = (int)Function_2233a68(102, v9, v10);
    v2[2082] = 500;
    Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
    Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
    Function_22343b8(v1, 4u, 3u);
    Function_22343b8(v1, 7u, 7u);
    Function_201ff74(8u, 1);
    Function_201ff0c(8u, 1);
    Function_201ff0c(4u, 0);
    Function_201ff74(4u, 0);
    Function_223f0a8(v1, 1);
    Function_223f65c(v1, v11, v12, v13);
    Function_2234540(v1, 1);
    Function_22335b0(v1 + 1148, v1);
    Function_2232594((uint *)(v1 + 1180), v1, 0, v2 + 2069);
    *(uint *)(v1 + 1252) = 1;
    Function_2233638(v1 + 1148, (uint *)(v1 + 1180));
    Function_223331c(v1 + 1180, v1, 1, v14);
    Function_2233434(v1 + 1180, 64, 184);
    Function_2233064((uint *)(v1 + 1180), v1);
    Function_2234540(v1, 0);
    Function_2234540(v1, 1);
    Function_2240bf4(v1);
    Function_2240d98(v1, 0);
    Function_2234540(v1, 0);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223F984) --------------------------------------------------------
int __fastcall Function_223f984(uint *a1)
{
  int v1;
  int v2;
  int v3;

  v1 = (int)a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2233600((int)(a1 + 287));
      Function_22332fc(v1 + 1180);
      Function_22334fc(v1 + 1180, v1);
      Function_2233a74(*(int **)(v2 + 8320));
      Function_2240ddc(v1);
      Function_2233a44(v1);
      Function_223f124(v1);
      Function_223f160(v1);
      Function_208b9e0(*(uint *)(v1 + 1776), 0);
      Function_208ba08(*(uint *)(v1 + 1776), 0, 0);
      if ( *(uint *)(v2 + 8244) == 5 )
      {
        Function_22335f4((int *)(v1 + 1148));
        Function_2233310((int *)(v1 + 1180));
        *(uint *)(v2 + 8324) = 0;
      }
      ++*(uint *)(v1 + 8);
    }
    else if ( v3 != 2 )
    {
      Function_222fb60(a1, *(uint *)(v2 + 8244));
      return 0;
    }
    Function_2231664((int *)(v2 + 8), 1);
    if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 0) )
    {
      Function_223f0a8(v1, 0);
      if ( *(uint *)(v2 + 8244) == 6 )
      {
        Function_223124c(v2 + 276, v1 + 20, 3u);
        Function_223124c(v2 + 304, v1 + 20, 0x5Eu);
        Function_200d364(*(int **)(v2 + 280), 0);
        Function_200d364(*(int **)(v2 + 308), 3u);
      }
      ++*(uint *)(v1 + 8);
    }
    Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
    Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
  }
  else
  {
    Function_2233664((int)(a1 + 287));
    Function_22331c8(v1 + 1180, *(short *)(v1 + 1164));
    Function_2233064((uint *)(v1 + 1180), v1);
    Function_208b8ec(*(uint *)(v1 + 1776), 16, (short)(24 * *(uint *)(v1 + 1240) + 76));
    Function_2240e30(v1);
    if ( Function_2022760((uchar *)&dword_2248F7C) )
    {
      Function_2234520(v1);
      if ( *(uint *)(v1 + 4 * *(uint *)(v1 + 1236) + 9736) )
      {
        *(uint *)(v2 + 8244) = 6;
        *(uint *)(v2 + 16) = 0;
        ++*(uint *)(v1 + 8);
      }
    }
    if ( Function_2022760((uchar *)&dword_2248F80) )
    {
      Function_2234520(v1);
      *(uint *)(v2 + 8244) = 5;
      ++*(uint *)(v1 + 8);
    }
  }
  return 0;
}

//----- (0223FB74) --------------------------------------------------------
int __fastcall Function_223fb74(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 1);
      if ( Function_22315e0(v2, v2 + 1, 1, 0) )
      {
        Function_2234540(v1, 1);
        Function_223f06c(v1);
        Function_2234540(v1, 0);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
    }
    else if ( v3 == 2 )
    {
      Function_2231688(v2 + 2);
      Function_223146c((int **)v1);
      Function_20397c8(1, 0x66u);
      Function_223376c(v1, 1);
      ++*(uint *)(v1 + 8);
    }
    else if ( Function_2233790(a1) )
    {
      if ( Function_2231664(v2 + 2, 0) )
      {
        Function_22318e8(v1);
        Function_2231688(v2 + 2);
        Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
        Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
        Function_222fb60((uint *)v1, 5);
        Function_2019ebc(*(uint **)(v1 + 36), 2u);
        Function_2019ebc(*(uint **)(v1 + 36), 6u);
        Function_2019ebc(*(uint **)(v1 + 36), 3u);
        Function_2019ebc(*(uint **)(v1 + 36), 7u);
        free((int)v2);
      }
      else
      {
        Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, v2[2], *(uint *)(v1 + 88));
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
      }
    }
  }
  else
  {
    Function_223f124(a1);
    Function_223f160(v1);
    Function_2231b8c(v1);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0223FCC4) --------------------------------------------------------
int __fastcall Function_223fcc4(uint *a1)
{
  uint *v1;
  int *v2;
  uint v3;
  int v4;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_223FCE2 + v3) + 35912932);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_22343b8((int)a1, 6u, 7u);
      ++v1[2];
      break;
    case 1:
      Function_2240b94();
      v2[98] = Function_2023fcc((int)dword_2248FC8, 4u, (int)Function_2240a50, (int)v1, 0x66u);
      v2[99] = Function_2023fcc((int)dword_2248F98, 4u, (int)Function_2240aec, (int)v1, 0x66u);
      v2[100] = Function_2023fcc((int)dword_2248F84, 2u, (int)Function_2240b5c, (int)v1, 0x66u);
      ++v1[2];
      break;
    case 2:
      Function_2234540((int)a1, 1);
      Function_2234214((int)(v2 + 136), (int)v1);
      v4 = Function_2233fec((int)(v2 + 136));
      Function_22343b8((int)v1, v4, 3u);
      Function_223427c((int)(v2 + 136), 0);
      Function_2234540((int)v1, 0);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      Function_201ff0c(4u, 0);
      Function_201ff74(4u, 0);
      ++v1[2];
      break;
    case 3:
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 0) )
      {
        Function_223427c((int)(v2 + 136), 1);
        Function_2240900(v1);
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, v2[2], v1[22]);
      break;
    default:
      Function_222fb60(a1, 7);
      break;
  }
  return 0;
}

//----- (0223FE2C) --------------------------------------------------------
int __fastcall Function_223fe2c(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 392));
  return 0;
}

//----- (0223FE44) --------------------------------------------------------
int __fastcall Function_223fe44(int a1)
{
  uint *v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;

  v1 = (uint *)a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_223FE62 + v3) + 35913316);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2234540(a1, 1);
      if ( *(uint *)(v2 + 16) )
        Function_2232394(v2 + 404, (int)v1);
      else
        Function_2234228(v2 + 544, (int)v1);
      Function_201ff0c(4u, 0);
      Function_2234540((int)v1, 0);
      ++v1[2];
      break;
    case 1:
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 1, 1) )
        ++v1[2];
      break;
    case 2:
      Function_2234540(a1, 1);
      if ( *(uint *)(v2 + 16) )
      {
        Function_2234214(v2 + 544, (int)v1);
        Function_223427c(v2 + 544, 0);
        v6 = Function_2233fec(v2 + 544);
        Function_22343b8((int)v1, v6, 3u);
      }
      else
      {
        Function_2232378((char **)(v2 + 404), (int)v1, v4, v5);
        Function_22323b8(v2 + 404, 0);
        Function_22343b8((int)v1, 0x50u, 3u);
      }
      Function_2234540((int)v1, 0);
      ++v1[2];
      break;
    case 3:
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 0, 1) )
      {
        if ( *(uint *)(v2 + 16) )
          Function_223427c(v2 + 544, 1);
        else
          Function_22323b8(v2 + 404, 1);
        Function_201ff74(4u, 1);
        Function_201ff0c(4u, 1);
        ++v1[2];
      }
      break;
    default:
      *(uint *)(v2 + 16) ^= 1u;
      Function_22408a8();
      Function_222fb60(v1, 7);
      break;
  }
  return 0;
}

//----- (0223FF90) --------------------------------------------------------
int __fastcall Function_223ff90(int a1)
{
  int v1;
  uint *v2;
  int v3;

  v1 = a1;
  v2 = *(uint **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( Function_200f2ac() == 1 )
        ++*(uint *)(v1 + 8);
    }
    else
    {
      if ( v3 != 2 )
      {
        free(*(uint *)(a1 + 2144));
        return 1;
      }
      Function_2234540(a1, 1);
      if ( v2[4] )
        Function_2232394((int)(v2 + 101), v1);
      else
        Function_2234228((int)(v2 + 136), v1);
      Function_2024034(v2[98]);
      Function_2024034(v2[99]);
      Function_2024034(v2[100]);
      Function_223e428(v1);
      Function_224088c(v1);
      Function_22410f0(v1);
      Function_2234540(v1, 0);
      Function_2234540(v1, 1);
      Function_22314a8((int **)v1);
      Function_2234540(v1, 0);
      Function_22300c8(v1, **(uint **)(v1 + 16));
      Function_208ba84(*(uint **)(v1 + 2152), 1, 0);
      ++*(uint *)(v1 + 8);
    }
  }
  else
  {
    Function_200f174(0, 0, 0, 0, 6, 1, 102);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (02240084) --------------------------------------------------------
int __fastcall Function_2240084(uint *a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = (int)a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_22400A4 + v3) + 35913894);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2234314();
      Function_22315c8((int *)v2, (int *)(v2 + 4), 0);
      v4 = 0;
      if ( *(uint *)(v1 + 16696) > 0 )
      {
        v5 = v1 + 9856;
        v6 = v1;
        do
        {
          *(uint *)(v6 + 9736) = v5;
          ++v4;
          v5 += 228;
          v6 += 4;
        }
        while ( v4 < *(uint *)(v1 + 16696) );
      }
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_22343b8(v1, 6u, 7u);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      Function_223124c(v2 + 276, v1 + 20, 3u);
      Function_223124c(v2 + 304, v1 + 20, 0x5Eu);
      Function_200d364(*(int **)(v2 + 280), 0);
      Function_200d364(*(int **)(v2 + 308), 3u);
      *(uint *)(v2 + 8328) = 500;
      *(uint *)(v2 + 8324) = *(short *)(v1 + 1188);
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      Function_2240b94();
      *(uint *)(v2 + 392) = Function_2023fcc((int)dword_2248FC8, 4u, (int)Function_2240a50, v1, 0x66u);
      *(uint *)(v2 + 396) = Function_2023fcc((int)dword_2248F98, 4u, (int)Function_2240aec, v1, 0x66u);
      *(uint *)(v2 + 400) = Function_2023fcc((int)dword_2248F84, 2u, (int)Function_2240b5c, v1, 0x66u);
      ++*(uint *)(v1 + 8);
      break;
    case 2:
      Function_2234540((int)a1, 1);
      Function_2234214(v2 + 544, v1);
      v7 = Function_2233fec(v2 + 544);
      Function_22343b8(v1, v7, 3u);
      Function_223427c(v2 + 544, 0);
      Function_2234540(v1, 0);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      Function_201ff0c(4u, 0);
      Function_201ff74(4u, 0);
      ++*(uint *)(v1 + 8);
      break;
    case 3:
      Function_2231664((int *)(v2 + 8), 0);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 0) )
      {
        Function_223427c(v2 + 544, 1);
        Function_2240900(v1);
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      break;
    case 4:
      Function_200f174(0, 1, 1, 0, 6, 1, 102);
      ++*(uint *)(v1 + 8);
      break;
    case 5:
      if ( Function_200f2ac() == 1 )
        ++*(uint *)(v1 + 8);
      break;
    default:
      ++a1[438];
      Function_2230098(a1);
      Function_222fb60((uint *)v1, 7);
      break;
  }
  return 0;
}

//----- (022402FC) --------------------------------------------------------
uint __fastcall Function_22402fc(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  char *v6;
  int *v7;
  ushort *v8;
  ushort *v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v3 = a2;
  v4 = a1;
  v5 = *(uint *)(a1 + 2144);
  Function_22302a8(a1, 2u, a3);
  Function_201ff0c(4u, 1);
  Function_201a7a0(v4 + 2212);
  Function_201a7e8(*(uint **)(v4 + 36), v4 + 2212, 2, 1, 19, 0x1Eu, 4u, 14, 300);
  if ( v3 == 100 )
  {
    v6 = *(char **)(v5 + 404);
    v7 = (int *)Function_2231690(0x66u);
    v8 = (ushort *)Function_2023790(255, 0x66u);
    v9 = Function_2030b94(v6, 0x66u);
    Function_22349a8(v4, (int)v9);
    v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 72), 0x64u);
    Function_200b48c(v7, 0, (int)v9);
    Function_200c388((uint *)v7, (int)v8, (int)v10);
    Function_20237bc_FreeMsg((int)v9, v11);
    Function_20237bc_FreeMsg((int)v10, v12);
    Function_200b3f0((uint *)v7, v13);
  }
  else
  {
    v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 72), v3);
  }
  Function_201ada4_ClearTextBox(v4 + 2212, 204);
  Function_201d78c(v4 + 2212, 0);
  Function_201a9a4(v4 + 2212);
  return Function_20237bc_FreeMsg((int)v8, v14);
}

//----- (022403F8) --------------------------------------------------------
int __fastcall Function_22403f8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  bool v6;
  uint v7;
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

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = Function_202fe04();
  v4 = Function_202fe98(v3, 4u, 0);
  v6 = Function_2234970(v1, v4, v5) == 0;
  v7 = *(uint *)(v1 + 8);
  if ( v6 )
  {
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        Function_2231664((int *)(v2 + 8), 1);
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 0) )
        {
          Function_2234540(v1, 1);
          Function_223ef60(v1, v17, v18, v19);
          Function_2234540(v1, 0);
          Function_2019ebc(*(uint **)(v1 + 36), 3u);
          Function_2019ebc(*(uint **)(v1 + 36), 7u);
          ++*(uint *)(v1 + 8);
        }
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      }
      else if ( v7 == 2 )
      {
        Function_2231664((int *)(v2 + 8), 0);
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 1) )
        {
          Function_22402fc(v1, 0x64u, 0);
          ++*(uint *)(v1 + 8);
        }
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      }
      else
      {
        Function_222fb60((uint *)v1, 12);
      }
    }
    else
    {
      Function_2234540(v1, 1);
      if ( *(uint *)(v2 + 16) )
        Function_2232394(v2 + 404, v1);
      else
        Function_2234228(v2 + 544, v1);
      Function_2234540(v1, 0);
      Function_2234540(v1, 1);
      Function_22410f0(v1);
      Function_2234540(v1, 0);
      Function_224088c(v1);
      Function_201ff0c(4u, 0);
      Function_201ff74(4u, 0);
      ++*(uint *)(v1 + 8);
    }
  }
  else
  {
    if ( v7 <= 6 )
      JUMPOUT(__CS__, *((short *)&off_2240436 + v7) + 35914808);
    switch ( (uchar)v7 )
    {
      case 0:
        Function_2234540(v1, 1);
        if ( *(uint *)(v2 + 16) )
          Function_2232394(v2 + 404, v1);
        else
          Function_2234228(v2 + 544, v1);
        Function_224088c(v1);
        Function_2234540(v1, 0);
        Function_2234540(v1, 1);
        Function_22410f0(v1);
        Function_2234540(v1, 0);
        Function_201ff0c(4u, 0);
        Function_201ff74(4u, 0);
        ++*(uint *)(v1 + 8);
        break;
      case 1:
        Function_2231664((int *)(v2 + 8), 1);
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 0) )
        {
          Function_2234540(v1, 1);
          Function_223ef60(v1, v8, v9, v10);
          Function_2234540(v1, 0);
          Function_2019ebc(*(uint **)(v1 + 36), 3u);
          Function_2019ebc(*(uint **)(v1 + 36), 7u);
          ++*(uint *)(v1 + 8);
        }
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
        break;
      case 2:
        Function_2231aac(v1, 0x115u);
        ++*(uint *)(v1 + 8);
        break;
      case 3:
        if ( Function_2022798() )
        {
          Function_2231b8c(v1);
          Function_2019ebc(*(uint **)(v1 + 36), 2u);
          Function_2019ebc(*(uint **)(v1 + 36), 6u);
          Function_201ff74(4u, 0);
          Function_201ff0c(4u, 0);
          ++*(uint *)(v1 + 8);
        }
        break;
      case 4:
        Function_2231664((int *)(v2 + 8), 1);
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 0) )
        {
          Function_2234540(v1, 1);
          Function_223f038(v1);
          Function_2234540(v1, 0);
          ++*(uint *)(v1 + 8);
        }
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
        break;
      case 5:
        Function_2234540(v1, 1);
        Function_223e01c(v1);
        Function_2234540(v1, 0);
        if ( *(uint *)(v1 + 2156) == 210 )
        {
          Function_223124c(v2 + 276, v1 + 20, 3u);
          Function_223124c(v2 + 304, v1 + 20, 0x5Eu);
          Function_200d364(*(int **)(v2 + 280), 0);
          Function_200d364(*(int **)(v2 + 308), 3u);
        }
        Function_2240900(v1);
        Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
        Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
        Function_2234540(v1, 1);
        if ( *(uint *)(v2 + 16) )
        {
          Function_2232378((char **)(v2 + 404), v1, v11, v12);
          Function_22323b8(v2 + 404, 0);
          Function_200710c(*(uint *)(v1 + 20), 0x50u, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
        }
        else
        {
          Function_2234214(v2 + 544, v1);
          Function_223427c(v2 + 544, 0);
          v13 = Function_2233fec(v2 + 544);
          Function_22343b8(v1, v13, 3u);
        }
        Function_2234540(v1, 0);
        Function_200710c(*(uint *)(v1 + 20), 6u, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
        ++*(uint *)(v1 + 8);
        break;
      case 6:
        Function_2231664((int *)(v2 + 8), 0);
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 0) )
        {
          if ( *(uint *)(v2 + 16) )
            Function_22323b8(v2 + 404, 1);
          else
            Function_223427c(v2 + 544, 1);
          Function_201ff74(4u, 1);
          Function_201ff0c(4u, 1);
          ++*(uint *)(v1 + 8);
        }
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
        break;
      default:
        v14 = 0;
        if ( *(uint *)(v1 + 16696) > 0 )
        {
          v15 = v1 + 9856;
          v16 = v1;
          do
          {
            *(uint *)(v16 + 9736) = v15;
            ++v14;
            v15 += 228;
            v16 += 4;
          }
          while ( v14 < *(uint *)(v1 + 16696) );
        }
        Function_222fb60((uint *)v1, 7);
        break;
    }
  }
  return 0;
}

//----- (0224088C) --------------------------------------------------------
uint __fastcall Function_224088c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  Function_201acf4(*(uint *)(a1 + 2144) + 148);
  return Function_201a8fc(v1 + 148);
}

//----- (022408A8) --------------------------------------------------------
int __fastcall Function_22408a8(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  ushort *v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 2144) + 148;
  Function_201ada4_ClearTextBox(v4, 0);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 72), v3);
  Function_223429c(v4, (int)v5);
  Function_201d78c(v4, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  return Function_201a9a4(v4);
}

//----- (02240900) --------------------------------------------------------
int __fastcall Function_2240900(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 2144) + 148;
  Function_201a7a0(v3);
  Function_201a7e8(*(uint **)(v1 + 36), v3, 6, 8, 3, 0x10u, 2u, 14, 1);
  return Function_22408a8(v1, *(uint *)(v2 + 16) + 121);
}

//----- (02240944) --------------------------------------------------------
int __fastcall Function_2240944(int a1)
{
  int v1;
  int v2;
  int v3;
  ushort *v4;
  int v5;
  ushort *v6;
  int v7;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 2144) + 148;
  Function_201a7a0(v3);
  Function_201a7e8(*(uint **)(v1 + 36), v3, 6, 4, 6, 0xAu, 2u, 14, 1);
  Function_201ada4_ClearTextBox(v3, 0);
  v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x82u);
  Function_223429c(v3, (int)v4);
  Function_201d78c(v3, 0);
  Function_20237bc_FreeMsg((int)v4, v5);
  Function_201a9a4(v3);
  v2 += 164;
  Function_201a7a0(v2);
  Function_201a7e8(*(uint **)(v1 + 36), v2, 6, 18, 6, 0xAu, 2u, 14, 21);
  Function_201ada4_ClearTextBox(v2, 0);
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x83u);
  Function_223429c(v2, (int)v6);
  Function_201d78c(v2, 0);
  Function_20237bc_FreeMsg((int)v6, v7);
  return Function_201a9a4(v2);
}

//----- (02240A24) --------------------------------------------------------
uint __fastcall Function_2240a24(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  Function_201acf4(*(uint *)(a1 + 2144) + 148);
  Function_201a8fc(v1 + 148);
  Function_201acf4(v1 + 164);
  return Function_201a8fc(v1 + 164);
}

//----- (02240A50) --------------------------------------------------------
uint *__fastcall Function_2240a50(uint *result, int a2, int a3)
{
  uint *v3;
  int v4;

  v3 = (uint *)a3;
  v4 = *(uint *)(a3 + 2144);
  if ( !a2 )
  {
    switch ( (uchar)result )
    {
      case 0:
        Function_2234520(a3);
        result = Function_222fb60(v3, 8);
        break;
      case 1:
        Function_2234520(a3);
        if ( Function_202f250() )
        {
          result = Function_222fb60(v3, 9);
        }
        else
        {
          *(uint *)(v4 + 8244) = 9;
          result = Function_222fb60(v3, 18);
        }
        break;
      case 2:
        Function_2234520(a3);
        if ( Function_202f250() )
        {
          result = Function_222fb60(v3, 11);
        }
        else
        {
          *(uint *)(v4 + 8244) = 11;
          result = Function_222fb60(v3, 18);
        }
        break;
      case 3:
        Function_2234520(a3);
        result = Function_222fb60(v3, 10);
        break;
      default:
        return result;
    }
  }
  return result;
}

//----- (02240AEC) --------------------------------------------------------
uint *__fastcall Function_2240aec(uint *result, int a2, uint *a3)
{
  uint *v3;
  int v4;

  v3 = a3;
  v4 = a3[536];
  if ( !a2 )
  {
    switch ( 0 )
    {
      case 0:
      case 1:
      case 2:
        *(uint *)(v4 + 8232) = (char *)result + 1;
        if ( a3[*(uint *)(v4 + 8232) + 547] )
          Function_222fb60(a3, 14);
        else
          Function_222fb60(a3, 17);
        result = (uint *)Function_2234520((int)v3);
        break;
      case 3:
        Function_2234520((int)a3);
        Function_2231a88((int)v3);
        result = Function_222fb60(v3, 13);
        break;
      default:
        return result;
    }
  }
  return result;
}

//----- (02240B5C) --------------------------------------------------------
uint *__fastcall Function_2240b5c(uint *result, int a2, int a3)
{
  uint *v3;

  v3 = (uint *)a3;
  if ( !a2 )
  {
    if ( result )
    {
      if ( result == (uint *)1 )
      {
        Function_2234520(a3);
        result = Function_222fb60(v3, 16);
      }
    }
    else
    {
      Function_2234520(a3);
      Function_2240a24((int)v3);
      result = Function_222fb60(v3, 17);
    }
  }
  return result;
}

//----- (02240B94) --------------------------------------------------------
int __fastcall Function_2240b94(int a1)
{
  int v1;
  uint *v2;
  uint v3;

  v1 = a1;
  v2 = *(uint **)(a1 + 2144);
  v2[101] = Function_2030a80(0x66u);
  ((void (__fastcall *)(uint, uint))dword_222AFC0[0])(*(uint *)(v1 + 4 * *(uint *)(v1 + 1236) + 9736), v2[101]);
  v2[136] = v2[101];
  v2[137] = Function_202ff2c(0x66u);
  return MI_CpuCopy8(*(uint *)(v1 + 4 * *(uint *)(v1 + 1236) + 9736) + 128, v2[137], 0x64u, v3);
}

//----- (02240BF4) --------------------------------------------------------
int __fastcall Function_2240bf4(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  BOOL v11;
  int v12;
  int v13;
  int *v14;
  int *v15;
  int v16;
  char *v17;
  int *v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  char *v23;
  int *v24;
  int *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  uint *v30;
  int *v31;
  uint v32;
  int v33;
  int *v34;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  char v54[48];
  int v55;

  v55 = a4;
  v36 = a1;
  v39 = *(uint *)(a1 + 2144);
  v4 = &dword_2249034;
  v5 = *(short *)(a1 + 1188);
  v6 = v54;
  v7 = 6;
  do
  {
    v8 = *v4;
    v9 = v4[1];
    v4 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v40 = 0;
  v38 = v36 + 4 * v5;
  v37 = v39;
  do
  {
    v10 = *(uint *)(v38 + 9736);
    if ( v10 )
    {
      v11 = Function_2233f94(v10 + 128) != 0;
      v12 = 0;
      v13 = 0;
      v14 = &v48;
      v15 = &v42;
      v16 = 0;
      do
      {
        *v14 = 0;
        ++v14;
        ++v13;
        *v15 = 0;
        ++v15;
      }
      while ( v13 < 6 );
      v41 = 24 * v11;
      v17 = &v54[24 * v11];
      v18 = &v48;
      v19 = &v42;
      do
      {
        v20 = *(uint *)v17;
        v21 = *(uint *)(v38 + 9736);
        if ( *(ushort *)(v21 + 2 * *(uint *)v17 + 128) )
        {
          *v18 = *(ushort *)(v21 + 2 * *(uint *)v17 + 128);
          ++v18;
          ++v12;
          *v19 = *(uchar *)(*(uint *)(v38 + 9736) + v20 + 152);
          ++v19;
        }
        ++v16;
        v17 += 4;
      }
      while ( v16 < 3 );
      if ( Function_2233f94(*(uint *)(v38 + 9736) + 128) )
        v12 = 3;
      v22 = 3;
      v23 = &v54[v41 + 12];
      v24 = &v48 + v12;
      v25 = &v42 + v12;
      do
      {
        v26 = *(uint *)v23;
        v27 = *(uint *)(v38 + 9736);
        if ( *(ushort *)(v27 + 2 * *(uint *)v23 + 128) )
        {
          *v24 = *(ushort *)(v27 + 2 * *(uint *)v23 + 128);
          ++v24;
          ++v12;
          *v25 = *(uchar *)(*(uint *)(v38 + 9736) + v26 + 152);
          ++v25;
        }
        ++v22;
        v23 += 4;
      }
      while ( v22 < 6 );
      v28 = v37;
      v29 = 0;
      v30 = (uint *)&v48;
      v31 = &v42;
      do
      {
        v32 = *v30;
        v33 = *v31;
        *(uint *)(v28 + 8332) = *(uint *)(v39 + 8328);
        *(uint *)(v28 + 8336) = Function_2233a7c(v36, *(uint *)(v39 + 8320), *(uint *)(v28 + 8332), v32, v33, 0);
        v34 = *(int **)(v28 + 8336);
        if ( v34 )
          Function_200d474(v34, 6 - v29);
        ++v29;
        ++v30;
        ++v31;
        v28 += 8;
        ++*(uint *)(v39 + 8328);
      }
      while ( v29 < 6 );
    }
    v38 += 4;
    v37 += 48;
    ++v40;
  }
  while ( v40 < 5 );
  return Function_223dfa8(v36);
}

//----- (02240D98) --------------------------------------------------------
int __fastcall Function_2240d98(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *v5;
  int result;
  int v7;
  int v8;

  v2 = a2;
  v8 = 0;
  v7 = *(uint *)(a1 + 2144);
  do
  {
    v3 = v7;
    v4 = 0;
    do
    {
      v5 = *(uint **)(v3 + 8336);
      if ( v5 )
        Function_200d3f4(v5, v2);
      ++v4;
      v3 += 8;
    }
    while ( v4 < 6 );
    v7 += 48;
    result = v8 + 1;
    v8 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (02240DDC) --------------------------------------------------------
int __fastcall Function_2240ddc(uint a1)
{
  uint v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;

  v1 = a1;
  v7 = 0;
  v6 = *(uint *)(a1 + 2144);
  do
  {
    v2 = v6;
    v3 = 0;
    do
    {
      v4 = *(uint *)(v2 + 8336);
      if ( v4 )
      {
        Function_2233b24(v1, *(uint *)(v2 + 8332), v4);
        *(uint *)(v2 + 8336) = 0;
      }
      ++v3;
      v2 += 8;
    }
    while ( v3 < 6 );
    v6 += 48;
    result = v7 + 1;
    v7 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (02240E30) --------------------------------------------------------
int __fastcall Function_2240e30(int result)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  uint *v11;
  int *v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  int *v21;
  int v22;
  char *v23;
  int *v24;
  int *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int *v30;
  char *v31;
  int *v32;
  int v33;
  int v34;
  int v35;
  uint *v36;
  int *v37;
  int v38;
  uint v39;
  int v40;
  int *v41;
  int v42;
  int *v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  char v64[48];
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;

  v50 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v49 = *(int **)(result + 2144);
  v44 = result;
  if ( v49[2081] != *(short *)(result + 1188) )
  {
    Function_2234540(result, 1);
    if ( v49[2081] > *(short *)(v44 + 1188) )
      v50 = 4;
    v1 = 0;
    v2 = (int)&v49[12 * v50];
    v3 = &v65;
    do
    {
      v4 = *(uint *)(v2 + 8336);
      if ( v4 )
      {
        Function_2233b40(v44, *(uint *)(v2 + 8332), v4);
        *v3 = *(uint *)(v2 + 8332);
        *(uint *)(v2 + 8336) = 0;
      }
      ++v1;
      v2 += 8;
      ++v3;
    }
    while ( v1 < 6 );
    if ( v50 )
    {
      v45 = 4;
      v5 = (int)(v49 + 48);
      do
      {
        v6 = 0;
        v7 = (uint *)v5;
        do
        {
          ++v6;
          v7[2084] = v7[2072];
          v7[2083] = v7[2071];
          v7 += 2;
        }
        while ( v6 < 6 );
        v5 -= 48;
        --v45;
      }
      while ( v45 >= 1 );
      v46 = 0;
    }
    else
    {
      v8 = 1;
      v9 = (int)(v49 + 12);
      do
      {
        v10 = 0;
        v11 = (uint *)v9;
        do
        {
          ++v10;
          v11[2072] = v11[2084];
          v11[2071] = v11[2083];
          v11 += 2;
        }
        while ( v10 < 6 );
        v9 += 48;
        ++v8;
      }
      while ( v8 < 5 );
      v46 = 4;
    }
    v12 = &dword_2249004;
    v13 = v64;
    v14 = *(short *)(v44 + 1188) + v46;
    v15 = 6;
    do
    {
      v16 = *v12;
      v17 = v12[1];
      v12 += 2;
      *(uint *)v13 = v16;
      *((uint *)v13 + 1) = v17;
      v13 += 8;
      --v15;
    }
    while ( v15 );
    v18 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v47 = 4 * v14;
    if ( Function_2233f94(*(uint *)(v44 + 9736 + 4 * v14) + 128) )
      v18 = 1;
    v19 = 0;
    v48 = 0;
    v20 = &v58;
    v21 = &v52;
    v22 = 0;
    do
    {
      *v20 = 0;
      ++v20;
      ++v19;
      *v21 = 0;
      ++v21;
    }
    while ( v19 < 6 );
    v23 = &v64[24 * v18];
    v51 = 24 * v18;
    v24 = &v58;
    v25 = &v52;
    v26 = v44 + v47;
    do
    {
      v27 = *(uint *)v23;
      v28 = *(uint *)(v26 + 9736);
      if ( *(ushort *)(v28 + 2 * *(uint *)v23 + 128) )
      {
        *v24 = *(ushort *)(v28 + 2 * *(uint *)v23 + 128);
        ++v24;
        *v25 = *(uchar *)(*(uint *)(v26 + 9736) + v27 + 152);
        ++v25;
        ++v48;
      }
      ++v22;
      v23 += 4;
    }
    while ( v22 < 3 );
    if ( Function_2233f94(*(uint *)(v44 + 9736 + v47) + 128) )
      v48 = 3;
    v29 = 3;
    v30 = &v58 + v48;
    v31 = &v64[v51 + 12];
    v32 = &v52 + v48;
    do
    {
      v33 = *(uint *)v31;
      v34 = *(uint *)(v26 + 9736);
      if ( *(ushort *)(v34 + 2 * *(uint *)v31 + 128) )
      {
        *v30 = *(ushort *)(v34 + 2 * *(uint *)v31 + 128);
        ++v30;
        *v32 = *(uchar *)(*(uint *)(v26 + 9736) + v33 + 152);
        ++v32;
        ++v48;
      }
      ++v29;
      v31 += 4;
    }
    while ( v29 < 6 );
    v35 = 0;
    v36 = (uint *)&v58;
    v37 = &v52;
    v38 = (int)&v49[12 * v46];
    do
    {
      v39 = *v36;
      v40 = *v37;
      *(uint *)(v38 + 8332) = v49[2082];
      *(uint *)(v38 + 8336) = Function_2233a7c(v44, v49[2080], *(uint *)(v38 + 8332), v39, v40, 0);
      v41 = *(int **)(v38 + 8336);
      if ( v41 )
        Function_200d474(v41, 6 - v35);
      ++v35;
      ++v36;
      ++v37;
      v38 += 8;
      ++v49[2082];
    }
    while ( v35 < 6 );
    Function_223dfa8(v44);
    v42 = 0;
    v49[2081] = *(short *)(v44 + 1188);
    v43 = &v65;
    do
    {
      if ( *v43 )
        Function_200d070(*(uint *)(v44 + 28), *v43 + 100000);
      ++v42;
      ++v43;
    }
    while ( v42 < 6 );
    result = Function_2234540(v44, 0);
  }
  return result;
}

//----- (022410F0) --------------------------------------------------------
int __fastcall Function_22410f0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_22312b0(v2 + 276);
  Function_22312b0(v2 + 304);
  Function_200d0f4(*(uint *)(v2 + 280));
  Function_200d0f4(*(uint *)(v2 + 308));
  return Function_22313bc(v1);
}

//----- (0224112C) --------------------------------------------------------
int __fastcall Function_224112c(int a1)
{
  return a1 + 104;
}

//----- (02241130) --------------------------------------------------------
int __fastcall Function_2241130(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  int v6;
  int v7;
  void (*v8)();
  int (__fastcall *v9)(int, uint *);
  void (*v10)();
  int (__fastcall *v11)(int, uint *);
  int (__fastcall *v12)(int, uint *);
  int (__fastcall *v13)(int, uint *);
  int (*v14)();
  int (__fastcall *v15)(int, uint *);
  int (*v16)();
  int (*v17)();
  int v18;
  int v19;

  v1 = a1;
  v2 = LoadVariableAreaAdress_0(*(uint *)(a1 + 2096));
  v4 = Function_2025d74(v2);
  v5 = 102;
  v6 = *(uint *)(v1 + 2096);
  v7 = v1;
  v8 = Function_2239d34;
  v19 = v1;
  v9 = Function_2239d38;
  v10 = Function_223caa4;
  v11 = Function_223caa8;
  v12 = Function_223df10;
  v13 = Function_223df4c;
  v14 = Function_2246944;
  v15 = Function_2233828;
  v16 = Function_2246968;
  v17 = Function_224699c;
  v18 = 0;
  return ((int (__fastcall *)(int, int *))dword_222B008[0])(v1 + 104, &v4);
}

//----- (022411B8) --------------------------------------------------------
int __fastcall Function_22411b8(int a1)
{
  int v2;

  if ( !*(uint *)(a1 + 1056) )
    return 0;
  v2 = Function_224112c(a1);
  return ((int (__fastcall *)(int))dword_222BBBC[0])(v2);
}

//----- (022411D4) --------------------------------------------------------
int __fastcall Function_22411d4(int result)
{
  int v1;

  if ( *(uint *)(result + 1056) )
  {
    v1 = Function_224112c(result);
    result = ((int (__fastcall *)(int))dword_222B57C[0])(v1);
  }
  return result;
}

//----- (022411EC) --------------------------------------------------------
int __fastcall Function_22411ec(int result)
{
  int v1;

  if ( *(uint *)(result + 1056) )
  {
    v1 = Function_224112c(result);
    result = ((int (__fastcall *)(int))dword_222B0F0[0])(v1);
  }
  return result;
}

//----- (02241204) --------------------------------------------------------
int __fastcall Function_2241204(int a1)
{
  short *v1;
  char *v2;
  int v3;
  short v4;
  int v5;
  int v6;
  char *v7;
  int *v8;
  int result;
  int v10;
  int v11;
  int v12;
  char v13;

  v1 = &word_2249430;
  v2 = &v13;
  v3 = 60;
  do
  {
    v4 = *v1;
    ++v1;
    *(ushort *)v2 = v4;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  v12 = 0;
  v11 = *(uint *)(a1 + 2144);
  v10 = 0;
  do
  {
    v5 = v11;
    v6 = 0;
    v7 = &v13 + 4 * v10;
    do
    {
      v8 = *(int **)(v5 + 1308);
      if ( v8 )
        Function_200d4c4(v8, *(short *)v7, *((short *)v7 + 1));
      ++v6;
      v5 += 8;
      v7 += 4;
    }
    while ( v6 < 6 );
    v11 += 48;
    v10 += 6;
    result = v12 + 1;
    v12 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (02241278) --------------------------------------------------------
int __fastcall Function_2241278(int a1, int a2, int a3, int a4)
{
  int *v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  BOOL v10;
  int v11;
  int v12;
  int *v13;
  int *v14;
  int v15;
  char *v16;
  int *v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  char *v22;
  int *v23;
  int *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint *v29;
  int *v30;
  uint v31;
  int v32;
  int *v33;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  char v53[48];
  int v54;

  v54 = a4;
  v35 = a1;
  v4 = &dword_22492F0;
  v38 = *(uint *)(a1 + 2144);
  v5 = v53;
  v6 = 6;
  do
  {
    v7 = *v4;
    v8 = v4[1];
    v4 += 2;
    *(uint *)v5 = v7;
    *((uint *)v5 + 1) = v8;
    v5 += 8;
    --v6;
  }
  while ( v6 );
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v39 = 0;
  v37 = v35 + 4 * *(short *)(v35 + 1188);
  v36 = v38;
  do
  {
    v9 = *(uint *)(v37 + 9736);
    if ( v9 )
    {
      v10 = Function_2233f94(v9 + 128) != 0;
      v11 = 0;
      v12 = 0;
      v13 = &v47;
      v14 = &v41;
      v15 = 0;
      do
      {
        *v13 = 0;
        ++v13;
        ++v12;
        *v14 = 0;
        ++v14;
      }
      while ( v12 < 6 );
      v40 = 24 * v10;
      v16 = &v53[24 * v10];
      v17 = &v47;
      v18 = &v41;
      do
      {
        v19 = *(uint *)v16;
        v20 = *(uint *)(v37 + 9736);
        if ( *(ushort *)(v20 + 2 * *(uint *)v16 + 128) )
        {
          *v17 = *(ushort *)(v20 + 2 * *(uint *)v16 + 128);
          ++v17;
          ++v11;
          *v18 = *(uchar *)(*(uint *)(v37 + 9736) + v19 + 152);
          ++v18;
        }
        ++v15;
        v16 += 4;
      }
      while ( v15 < 3 );
      if ( Function_2233f94(*(uint *)(v37 + 9736) + 128) )
        v11 = 3;
      v21 = 3;
      v22 = &v53[v40 + 12];
      v23 = &v47 + v11;
      v24 = &v41 + v11;
      do
      {
        v25 = *(uint *)v22;
        v26 = *(uint *)(v37 + 9736);
        if ( *(ushort *)(v26 + 2 * *(uint *)v22 + 128) )
        {
          *v23 = *(ushort *)(v26 + 2 * *(uint *)v22 + 128);
          ++v23;
          ++v11;
          *v24 = *(uchar *)(*(uint *)(v37 + 9736) + v25 + 152);
          ++v24;
        }
        ++v21;
        v22 += 4;
      }
      while ( v21 < 6 );
      v27 = v36;
      v28 = 0;
      v29 = (uint *)&v47;
      v30 = &v41;
      do
      {
        v31 = *v29;
        v32 = *v30;
        *(uint *)(v27 + 1304) = *(uint *)(v38 + 1300);
        *(uint *)(v27 + 1308) = Function_2233a7c(v35, *(uint *)(v38 + 1292), *(uint *)(v27 + 1304), v31, v32, 0);
        v33 = *(int **)(v27 + 1308);
        if ( v33 )
          Function_200d474(v33, 6 - v28);
        ++v28;
        ++v29;
        ++v30;
        v27 += 8;
        ++*(uint *)(v38 + 1300);
      }
      while ( v28 < 6 );
    }
    v37 += 4;
    v36 += 48;
    ++v39;
  }
  while ( v39 < 5 );
  return Function_2241204(v35);
}

//----- (0224141C) --------------------------------------------------------
int __fastcall Function_224141c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint *v5;
  int result;
  int v7;
  int v8;

  v2 = a2;
  v8 = 0;
  v7 = *(uint *)(a1 + 2144);
  do
  {
    v3 = v7;
    v4 = 0;
    do
    {
      v5 = *(uint **)(v3 + 1308);
      if ( v5 )
        Function_200d3f4(v5, v2);
      ++v4;
      v3 += 8;
    }
    while ( v4 < 6 );
    v7 += 48;
    result = v8 + 1;
    v8 = result;
  }
  while ( result < 5 );
  return result;
}

//----- (02241460) --------------------------------------------------------
int __fastcall Function_2241460(int a1)
{
  uint v1;
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;

  v1 = a1;
  v6 = *(uint *)(a1 + 2144);
  Function_2234540(a1, 1);
  v7 = 0;
  do
  {
    v2 = v6;
    v3 = 0;
    do
    {
      v4 = *(uint *)(v2 + 1308);
      if ( v4 )
      {
        Function_2233b24(v1, *(uint *)(v2 + 1304), v4);
        *(uint *)(v2 + 1308) = 0;
      }
      ++v3;
      v2 += 8;
    }
    while ( v3 < 6 );
    v6 += 48;
    ++v7;
  }
  while ( v7 < 5 );
  return Function_2234540(v1, 0);
}

//----- (022414C0) --------------------------------------------------------
int __fastcall Function_22414c0(int result)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  uint *v11;
  int *v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  int *v21;
  int v22;
  char *v23;
  int *v24;
  int *v25;
  int v26;
  int v27;
  int v28;
  int *v29;
  char *v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  uint *v35;
  int *v36;
  int v37;
  uint v38;
  int v39;
  int *v40;
  int v41;
  int *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int *v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  char v63[48];
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;

  v49 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v48 = *(int **)(result + 2144);
  v43 = result;
  if ( *(uint *)(*(uint *)(result + 2144) + 1296) != *(short *)(result + 1188) )
  {
    Function_2234540(result, 1);
    if ( v48[324] > *(short *)(v43 + 1188) )
      v49 = 4;
    v1 = 0;
    v2 = (int)&v48[12 * v49];
    v3 = &v64;
    do
    {
      v4 = *(uint *)(v2 + 1308);
      if ( v4 )
      {
        Function_2233b40(v43, *(uint *)(v2 + 1304), v4);
        *v3 = *(uint *)(v2 + 1304);
        *(uint *)(v2 + 1308) = 0;
      }
      ++v1;
      v2 += 8;
      ++v3;
    }
    while ( v1 < 6 );
    if ( v49 )
    {
      v44 = 4;
      v5 = (int)(v48 + 48);
      do
      {
        v6 = 0;
        v7 = (uint *)v5;
        do
        {
          ++v6;
          v7[327] = v7[315];
          v7[326] = v7[314];
          v7 += 2;
        }
        while ( v6 < 6 );
        v5 -= 48;
        --v44;
      }
      while ( v44 >= 1 );
      v45 = 0;
    }
    else
    {
      v8 = 1;
      v9 = (int)(v48 + 12);
      do
      {
        v10 = 0;
        v11 = (uint *)v9;
        do
        {
          ++v10;
          v11[315] = v11[327];
          v11[314] = v11[326];
          v11 += 2;
        }
        while ( v10 < 6 );
        v9 += 48;
        ++v8;
      }
      while ( v8 < 5 );
      v45 = 4;
    }
    v12 = &dword_2249320;
    v13 = v63;
    v14 = *(short *)(v43 + 1188) + v45;
    v15 = 6;
    do
    {
      v16 = *v12;
      v17 = v12[1];
      v12 += 2;
      *(uint *)v13 = v16;
      *((uint *)v13 + 1) = v17;
      v13 += 8;
      --v15;
    }
    while ( v15 );
    v18 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v46 = 4 * v14;
    if ( Function_2233f94(*(uint *)(v43 + 9736 + 4 * v14) + 128) )
      v18 = 1;
    v19 = 0;
    v47 = 0;
    v20 = &v57;
    v21 = &v51;
    v22 = 0;
    do
    {
      *v20 = 0;
      ++v20;
      ++v19;
      *v21 = 0;
      ++v21;
    }
    while ( v19 < 6 );
    v23 = &v63[24 * v18];
    v50 = 24 * v18;
    v24 = &v57;
    v25 = &v51;
    v26 = v43 + v46;
    do
    {
      v27 = *(uint *)v23;
      if ( *(ushort *)(*(uint *)(v26 + 9736) + 2 * *(uint *)v23 + 128) )
      {
        *v24 = *(ushort *)(*(uint *)(v26 + 9736) + 2 * *(uint *)v23 + 128);
        ++v24;
        *v25 = *(uchar *)(*(uint *)(v26 + 9736) + v27 + 152);
        ++v25;
        ++v47;
      }
      ++v22;
      v23 += 4;
    }
    while ( v22 < 3 );
    if ( Function_2233f94(*(uint *)(v43 + 9736 + v46) + 128) )
      v47 = 3;
    v28 = 3;
    v29 = &v57 + v47;
    v30 = &v63[v50 + 12];
    v31 = &v51 + v47;
    do
    {
      v32 = *(uint *)v30;
      v33 = *(uint *)(v26 + 9736);
      if ( *(ushort *)(v33 + 2 * *(uint *)v30 + 128) )
      {
        *v29 = *(ushort *)(v33 + 2 * *(uint *)v30 + 128);
        ++v29;
        *v31 = *(uchar *)(*(uint *)(v26 + 9736) + v32 + 152);
        ++v31;
        ++v47;
      }
      ++v28;
      v30 += 4;
    }
    while ( v28 < 6 );
    v34 = 0;
    v35 = (uint *)&v57;
    v36 = &v51;
    v37 = (int)&v48[12 * v45];
    do
    {
      v38 = *v35;
      v39 = *v36;
      *(uint *)(v37 + 1304) = v48[325];
      *(uint *)(v37 + 1308) = Function_2233a7c(v43, v48[323], *(uint *)(v37 + 1304), v38, v39, 0);
      v40 = *(int **)(v37 + 1308);
      if ( v40 )
        Function_200d474(v40, 6 - v34);
      ++v34;
      ++v35;
      ++v36;
      v37 += 8;
      ++v48[325];
    }
    while ( v34 < 6 );
    Function_2241204(v43);
    v48[324] = *(short *)(v43 + 1188);
    v41 = 0;
    v42 = &v64;
    do
    {
      if ( *v42 )
        Function_200d070(*(uint *)(v43 + 28), *v42 + 100000);
      ++v41;
      ++v42;
    }
    while ( v41 < 6 );
    result = Function_2234540(v43, 0);
  }
  return result;
}

//----- (02241780) --------------------------------------------------------
int __fastcall Function_2241780(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  if ( *(ushort *)(v1 + 1216) != 0xFFFF )
    return 1;
  if ( *(uchar *)(v1 + 1218) != 255 )
    return 1;
  if ( *(uchar *)(v1 + 1219) == 255 && *(uchar *)(v1 + 1220) == 255 )
    return 0;
  return 1;
}

//----- (022417C0) --------------------------------------------------------
int __fastcall Function_22417c0(int a1, int a2)
{
  char *v2;
  int v3;
  int *v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  ushort *v12;
  int v13;
  int v14;
  uint *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char v24;

  v3 = a2;
  v14 = a1;
  v4 = dword_22493D0;
  v17 = *(uint *)(a1 + 2144);
  v5 = &v24;
  v6 = 12;
  do
  {
    v7 = *v4;
    v8 = v4[1];
    v4 += 2;
    *(uint *)v5 = v7;
    *((uint *)v5 + 1) = v8;
    v5 += 8;
    --v6;
  }
  while ( v6 );
  v18 = 48;
  v19 = 49;
  v20 = 50;
  v21 = 125;
  v22 = 125;
  v23 = 125;
  if ( !v3 )
  {
    *(uint *)(v17 + 1940) = 6;
    v2 = &v24;
    v15 = (uint *)&v18;
  }
  v16 = 0;
  result = *(uint *)(v17 + 1940);
  v10 = 256;
  if ( result > 0 )
  {
    v11 = v17 + 1556;
    do
    {
      Function_201a7a0(v11);
      Function_201a7e8(
        *(uint **)(v14 + 36),
        v11,
        2,
        *(uint *)v2,
        *((uint *)v2 + 1),
        *((uint *)v2 + 2),
        *((uint *)v2 + 3),
        14,
        v10);
      Function_201ada4_ClearTextBox(v11, 0);
      v12 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v14 + 72), *v15);
      v10 += *((uint *)v2 + 3) * *((uint *)v2 + 2);
      Function_201d78c(v11, 0);
      Function_201a9a4(v11);
      Function_20237bc_FreeMsg((int)v12, v13);
      ++v15;
      v11 += 16;
      ++v16;
      v2 += 16;
      result = v16;
    }
    while ( v16 < *(uint *)(v17 + 1940) );
  }
  return result;
}

//----- (022418DC) --------------------------------------------------------
uint __fastcall Function_22418dc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  ushort *v5;
  ushort **v6;
  int v7;

  v2 = a1;
  v3 = *(uint *)(a1 + 2144);
  v4 = a2;
  Function_201ada4_ClearTextBox(v3 + 1604, 0);
  if ( v4 == 255 )
  {
    v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 72), 0x7Du);
  }
  else
  {
    v6 = *(ushort ***)(v2 + 72);
    if ( (uint)(v4 - 250) > 3 )
      v5 = Function_200b1ec_CallMsgDecrypt(v6, v4 + 132);
    else
      v5 = Function_200b1ec_CallMsgDecrypt(v6, v4 - 85);
  }
  Function_201d78c(v3 + 1604, 0);
  Function_201a9a4(v3 + 1604);
  return Function_20237bc_FreeMsg((int)v5, v7);
}

//----- (02241954) --------------------------------------------------------
uint __fastcall Function_2241954(int a1, uint a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  ushort *v7;
  int v8;
  ushort v10[256];
  int v11;

  v11 = a4;
  v4 = a1;
  v5 = *(uint *)(a1 + 2144);
  v6 = a2;
  Function_201ada4_ClearTextBox(v5 + 1620, 0);
  if ( v6 == 0xFFFF )
  {
    v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 72), 0x7Du);
  }
  else
  {
    v7 = (ushort *)Function_2023790(255, 0x66u);
    Function_200b274(v6, 0x66u, v10);
    Function_2023d28(v7, v10);
  }
  Function_201d78c(v5 + 1620, 0);
  Function_201a9a4(v5 + 1620);
  return Function_20237bc_FreeMsg((int)v7, v8);
}

//----- (022419D4) --------------------------------------------------------
uint __fastcall Function_22419d4(int a1, uint a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  uint *v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  uint v12;
  ushort *v13;

  v3 = a1;
  v4 = *(uint *)(a1 + 2144);
  v12 = a2;
  v5 = a3;
  Function_201ada4_ClearTextBox(v4 + 1636, 0);
  if ( v12 != 255 || v5 != 255 )
  {
    v6 = Function_2231690(0x66u);
    if ( v5 )
    {
      v13 = (ushort *)Function_2023790(255, 0x66u);
      v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 0x17u);
      Function_200be08((int)v6, 0, v12, v5);
    }
    else
    {
      v13 = (ushort *)Function_2023790(255, 0x66u);
      v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 0x16u);
      Function_200bdd0((int)v6, 0, v12);
    }
    Function_200c388(v6, (int)v13, (int)v7);
    Function_20237bc_FreeMsg((int)v7, v8);
    Function_200b3f0(v6, v9);
  }
  else
  {
    v13 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 0x7Du);
  }
  Function_201d78c(v4 + 1636, 0);
  Function_201a9a4(v4 + 1636);
  return Function_20237bc_FreeMsg((int)v13, v10);
}

//----- (02241AA4) --------------------------------------------------------
int __fastcall Function_2241aa4(int a1, int a2, int a3, int a4)
{
  char *v4;
  int v5;
  int *v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  ushort *v14;
  int v15;
  int v16;
  uint *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char v23;
  int v24;

  v24 = a4;
  v5 = a2;
  v16 = a1;
  v6 = dword_2249350;
  v19 = *(uint *)(a1 + 2144);
  v7 = &v23;
  v8 = 6;
  do
  {
    v9 = *v6;
    v10 = v6[1];
    v6 += 2;
    *(uint *)v7 = v9;
    *((uint *)v7 + 1) = v10;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  v20 = 48;
  v21 = 49;
  v22 = 50;
  if ( !v5 )
  {
    *(uint *)(v19 + 1944) = 3;
    v4 = &v23;
    v17 = (uint *)&v20;
  }
  v18 = 0;
  result = *(uint *)(v19 + 1944);
  v12 = 256;
  if ( result > 0 )
  {
    v13 = v19 + 1748;
    do
    {
      Function_201a7a0(v13);
      Function_201a7e8(
        *(uint **)(v16 + 36),
        v13,
        6,
        *(uint *)v4,
        *((uint *)v4 + 1),
        *((uint *)v4 + 2),
        *((uint *)v4 + 3),
        14,
        v12);
      Function_201ada4_ClearTextBox(v13, 0);
      v14 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v16 + 72), *v17);
      v12 += *((uint *)v4 + 3) * *((uint *)v4 + 2);
      Function_201d78c(v13, 0);
      Function_201a9a4(v13);
      Function_20237bc_FreeMsg((int)v14, v15);
      ++v17;
      v13 += 16;
      ++v18;
      v4 += 16;
      result = v18;
    }
    while ( v18 < *(uint *)(v19 + 1944) );
  }
  return result;
}

//----- (02241BB8) --------------------------------------------------------
int __fastcall Function_2241bb8(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = *(uint *)(a1 + 2144);
  v2 = 0;
  if ( *(uint *)(v1 + 1940) > 0 )
  {
    v3 = v1 + 1556;
    do
    {
      Function_201acf4(v3);
      Function_201a8fc(v3);
      ++v2;
      v3 += 16;
    }
    while ( v2 < *(uint *)(v1 + 1940) );
  }
  result = 1940;
  *(uint *)(v1 + 1940) = 0;
  return result;
}

//----- (02241BF8) --------------------------------------------------------
int __fastcall Function_2241bf8(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = *(uint *)(a1 + 2144);
  v2 = 0;
  if ( *(uint *)(v1 + 1944) > 0 )
  {
    v3 = v1 + 1748;
    do
    {
      Function_201acf4(v3);
      Function_201a8fc(v3);
      ++v2;
      v3 += 16;
    }
    while ( v2 < *(uint *)(v1 + 1944) );
  }
  result = 1944;
  *(uint *)(v1 + 1944) = 0;
  return result;
}

//----- (02241C38) --------------------------------------------------------
int __fastcall Function_2241c38(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;
  ushort *v5;
  int v6;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_201a7a0(v2 + 1556);
  Function_201a7e8(*(uint **)(v1 + 36), v2 + 1556, 2, 3, 3, 0x14u, 4u, 14, 32);
  Function_201ada4_ClearTextBox(v2 + 1556, 0);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x7Eu);
  Function_201d78c(v2 + 1556, 0);
  Function_201a9a4(v2 + 1556);
  Function_20237bc_FreeMsg((int)v3, v4);
  Function_201a7a0(v2 + 1748);
  Function_201a7e8(*(uint **)(v1 + 36), v2 + 1748, 6, 11, 6, 0xAu, 4u, 14, 256);
  Function_201ada4_ClearTextBox(v2 + 1748, 0);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x5Fu);
  Function_2002eb4(0, (int)v5, 0);
  Function_201d78c(v2 + 1748, 0);
  Function_201a9a4(v2 + 1748);
  Function_20237bc_FreeMsg((int)v5, v6);
  *(uint *)(v2 + 1944) = 1;
  result = 1940;
  *(uint *)(v2 + 1940) = 1;
  return result;
}

//----- (02241D24) --------------------------------------------------------
int __fastcall Function_2241d24(uint *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = (int)a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664((int *)(v2 + 8), 0);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 0) )
      {
        Function_2231aac(v1, 0x7Cu);
        Function_22417c0(v1, 0);
        Function_2241aa4(v1, 0, v4, v5);
        *(ushort *)(v2 + 1216) = -1;
        *(uchar *)(v2 + 1218) = -1;
        *(uchar *)(v2 + 1219) = -1;
        *(uchar *)(v2 + 1220) = -1;
        Function_2241954(v1, *(ushort *)(v2 + 1216), 255, v6);
        Function_22418dc(v1, *(uchar *)(v2 + 1218));
        Function_22419d4(v1, *(uchar *)(v2 + 1219), *(uchar *)(v2 + 1220));
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
    }
    else
    {
      Function_222fb60(a1, 3);
    }
  }
  else
  {
    Function_2234314();
    Function_22315c8((int *)v2, (int *)(v2 + 4), 0);
    Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
    Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
    Function_22343b8(v1, 0x38u, 3u);
    Function_22343b8(v1, 0x3Bu, 7u);
    Function_201ff0c(8u, 1);
    Function_201ff74(8u, 1);
    Function_2245c64(v1);
    Function_2245c08(v1, 0);
    *(uint *)(v2 + 1300) = 500;
    *(uint *)(v2 + 1544) = Function_2023fcc((int)dword_22491AC, 5u, (int)Function_22458a0, v1, 0x66u);
    *(uint *)(v2 + 1548) = Function_2023fcc((int)&byte_22491F0, 9u, (int)Function_2245968, v1, 0x66u);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (02241EB4) --------------------------------------------------------
int __fastcall Function_2241eb4(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 1544));
  return 0;
}

//----- (02241ECC) --------------------------------------------------------
int __fastcall Function_2241ecc(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 1);
      if ( Function_22315e0(v2, v2 + 1, 1, 0) )
        ++*(uint *)(v1 + 8);
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
    }
    else if ( v3 == 2 )
    {
      Function_2234540(a1, 1);
      Function_2245d50(v1);
      Function_223146c((int **)v1);
      Function_2234540(v1, 0);
      Function_223376c(v1, 1);
      ++*(uint *)(v1 + 8);
    }
    else if ( Function_2233790(a1) )
    {
      if ( Function_2231664(v2 + 2, 0) )
      {
        Function_22318e8(v1);
        Function_2231688(v2 + 2);
        Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
        Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
        Function_222fb60((uint *)v1, 5);
        Function_2019ebc(*(uint **)(v1 + 36), 2u);
        Function_2019ebc(*(uint **)(v1 + 36), 6u);
        Function_2019ebc(*(uint **)(v1 + 36), 3u);
        Function_2019ebc(*(uint **)(v1 + 36), 7u);
        free((int)v2);
      }
      else
      {
        Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, v2[2], *(uint *)(v1 + 88));
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
      }
    }
  }
  else
  {
    Function_2241bb8(a1);
    Function_2241bf8(v1);
    Function_2231b8c(v1);
    Function_2024034(v2[386]);
    Function_2024034(v2[387]);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (02242024) --------------------------------------------------------
int __fastcall Function_2242024(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      v4 = *(uchar *)(v2 + 1221);
      if ( *(uchar *)(v2 + 1221) )
      {
        if ( v4 == 1 )
        {
          Function_222fb60(a1, 7);
        }
        else if ( v4 == 2 )
        {
          Function_222fb60(a1, 10);
        }
      }
      else
      {
        Function_222fb60(a1, 6);
      }
      return 0;
    }
  }
  else
  {
    Function_2241bf8((int)a1);
    ++v1[2];
  }
  Function_2231664((int *)(v2 + 8), 1);
  if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 2) )
    ++v1[2];
  Function_2003a2c(v1[10], 3, 0xCu, *(uint *)(v2 + 8), v1[22]);
  return 0;
}

//----- (022420B0) --------------------------------------------------------
int __fastcall Function_22420b0(uint *a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;

  v1 = (int)a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_22420CE + v3) + 35922128);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2231b3c((int)a1, 0x71u);
      *(uchar *)(v2 + 1218) = -1;
      Function_22418dc(v1, *(uchar *)(v2 + 1218));
      Function_2245c08(v1, 1);
      Function_22343b8(v1, 0x3Du, 7u);
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      Function_2231664((int *)(v2 + 8), 0);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 2) )
      {
        Function_2234540(v1, 1);
        Function_22335b0(v1 + 1148, v1);
        Function_2233310((int *)(v1 + 1180));
        if ( Function_208be68(v1) == 1 )
          Function_22324a0((uint *)(v1 + 1180), v1, &off_224926C);
        else
          Function_22324a0((uint *)(v1 + 1180), v1, &off_2249240);
        Function_2233638(v1 + 1148, (uint *)(v1 + 1180));
        Function_223331c(v1 + 1180, v1, 2, v4);
        Function_2234540(v1, 0);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      break;
    case 2:
      Function_2233664((int)(a1 + 287));
      Function_22332ac(v1 + 1180, *(ushort *)(v1 + 1164));
      v5 = Function_2232f68(v1 + 1180, v1);
      if ( v5 )
      {
        *(uchar *)(v2 + 1218) = v5;
        Function_22418dc(v1, v5);
        ++*(uint *)(v1 + 8);
      }
      if ( Function_2022760((uchar *)&dword_2249138) )
      {
        Function_2234520(v1);
        ++*(uint *)(v1 + 8);
      }
      break;
    case 3:
      Function_2233600((int)(a1 + 287));
      Function_22332fc(v1 + 1180);
      Function_22334fc(v1 + 1180, v1);
      Function_22335f4((int *)(v1 + 1148));
      Function_2233310((int *)(v1 + 1180));
      ++*(uint *)(v1 + 8);
      goto LABEL_16;
    case 4:
LABEL_16:
      Function_2231664((int *)(v2 + 8), 1);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 2) )
      {
        Function_2245c08(v1, 0);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      break;
    default:
      Function_222fb60(a1, 11);
      break;
  }
  return 0;
}

//----- (0224227C) --------------------------------------------------------
int __fastcall Function_224227c(int a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;

  v1 = (uint *)a1;
  v2 = *(uint *)(a1 + 2144);
  if ( !*(uint *)(a1 + 8) )
  {
    Function_2231b3c(a1, 0x72u);
    *(ushort *)(v2 + 1216) = -1;
    Function_2241954((int)v1, *(ushort *)(v2 + 1216), v3, v4);
    Function_2245c08(v1, 1);
    ++v1[2];
  }
  Function_222fb60(v1, 8);
  return 0;
}

//----- (022422C0) --------------------------------------------------------
int __fastcall Function_22422c0(int a1)
{
  uchar *v1;
  uint v2;
  int v3;
  uint v4;
  uint v5;
  uint v6;
  uint v7;
  ushort *v8;
  int v9;
  int result;
  int v11;
  int v12;

  v11 = a1;
  v12 = 1;
  v1 = (uchar *)&byte_22491F0;
  v2 = 0;
  v3 = *(uint *)(a1 + 2144) + 1748;
  do
  {
    v4 = (uint)v1[2] << 21 >> 24;
    v5 = (uint)*v1 << 21 >> 24;
    v6 = (((uint)v1[3] >> 3) - v4) & 0xFF;
    v7 = (((uint)v1[1] >> 3) - v5) & 0xFF;
    Function_201a7a0(v3);
    Function_201a7e8(*(uint **)(v11 + 36), v3, 6, v4, v5, v6, v7, 14, v12);
    Function_201ada4_ClearTextBox(v3, 0);
    v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v11 + 72), v2 + 68);
    Function_223429c(v3, (int)v8);
    Function_2242748(v11, v2);
    Function_201d78c(v3, 0);
    Function_201a9a4(v3);
    Function_20237bc_FreeMsg((int)v8, v9);
    ++v2;
    result = v12 + v6 * v7;
    v12 += v6 * v7;
    v3 += 16;
    v1 += 4;
  }
  while ( v2 < 9 );
  return result;
}

//----- (022423D8) --------------------------------------------------------
uint __fastcall Function_22423d8(int a1)
{
  uint v1;
  int v2;
  uint result;

  v1 = 0;
  v2 = *(uint *)(a1 + 2144) + 1748;
  do
  {
    Function_201acf4(v2);
    result = Function_201a8fc(v2);
    ++v1;
    v2 += 16;
  }
  while ( v1 < 9 );
  return result;
}

//----- (02242400) --------------------------------------------------------
int __fastcall Function_2242400(uint *a1)
{
  uint *v1;
  int v2;

  v1 = a1;
  v2 = a1[536];
  switch ( (uchar)a1[2] )
  {
    case 0u:
      Function_22343b8((int)a1, 0x3Cu, 7u);
      ++v1[2];
      break;
    case 1u:
      Function_2231664((int *)(v2 + 8), 0);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 2) )
      {
        Function_22422c0((int)v1);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, *(uint *)(v2 + 8), v1[22]);
      break;
    case 2u:
      Function_202404c(*(int **)(v2 + 1548));
      if ( Function_2022760((uchar *)&dword_2249138) || *(uint *)(v2 + 1240) == 1 )
      {
        Function_2234520((int)v1);
        ++v1[2];
      }
      break;
    case 3u:
      Function_22423d8((int)a1);
      ++v1[2];
      goto LABEL_10;
    case 4u:
LABEL_10:
      if ( *(uint *)(v2 + 1240) == 1 )
      {
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 2) )
          ++v1[2];
      }
      else
      {
        Function_2231664((int *)(v2 + 8), 1);
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 2) )
        {
          Function_2245c08(v1, 0);
          ++v1[2];
        }
        Function_2003a2c(v1[10], 3, 0xCu, *(uint *)(v2 + 8), v1[22]);
      }
      break;
    default:
      if ( *(uint *)(v2 + 1240) == 1 )
        Function_222fb60(a1, 9);
      else
        Function_222fb60(a1, 11);
      break;
  }
  return 0;
}

//----- (02242534) --------------------------------------------------------
int __fastcall Function_2242534(int a1)
{
  int v1;
  int v2;
  uint v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2242554 + v3) + 35923286);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2231b3c(a1, 0x72u);
      Function_2245c08(v1, 1);
      Function_22343b8(v1, 0x3Au, 7u);
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 0, 2) )
      {
        Function_2234540(v1, 1);
        Function_22335b0(v1 + 1148, v1);
        v4 = dword_22492C4;
        v5 = (int *)(v2 + 1248);
        v6 = 5;
        do
        {
          v7 = *v4;
          v8 = v4[1];
          v4 += 2;
          *v5 = v7;
          v5[1] = v8;
          v5 += 2;
          --v6;
        }
        while ( v6 );
        *v5 = *v4;
        *(uint *)(v2 + 1248) = *(uint *)(v2 + 1244);
        *(uint *)(v2 + 1252) = *(uint *)(v2 + 1224);
        Function_2233310((int *)(v1 + 1180));
        Function_2232594((uint *)(v1 + 1180), v1, *(uint *)(v2 + 1236), (uint *)(v2 + 1248));
        *(uint *)(v1 + 1252) = 0;
        Function_2233638(v1 + 1148, (uint *)(v1 + 1180));
        Function_223331c(v1 + 1180, v1, 2, v9);
        Function_2234540(v1, 0);
        ++*(uint *)(v1 + 8);
      }
      break;
    case 2:
      Function_2233664(a1 + 1148);
      Function_22332ac(v1 + 1180, *(ushort *)(v1 + 1164));
      v10 = Function_2232f68(v1 + 1180, v1);
      if ( v10 )
      {
        *(ushort *)(v2 + 1216) = v10;
        Function_2241954(v1, v10, v11, v12);
        ++*(uint *)(v1 + 8);
      }
      if ( Function_2022760((uchar *)&dword_2249138) )
      {
        *(ushort *)(v2 + 1216) = -1;
        Function_2234520(v1);
        ++*(uint *)(v1 + 8);
      }
      break;
    case 3:
      Function_2233600(a1 + 1148);
      Function_22332fc(v1 + 1180);
      Function_22334fc(v1 + 1180, v1);
      Function_22335f4((int *)(v1 + 1148));
      Function_2233310((int *)(v1 + 1180));
      ++*(uint *)(v1 + 8);
      goto LABEL_14;
    case 4:
LABEL_14:
      if ( *(ushort *)(v2 + 1216) == 0xFFFF )
      {
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 2) )
          ++*(uint *)(v1 + 8);
      }
      else
      {
        Function_2231664((int *)(v2 + 8), 1);
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 2) )
        {
          Function_2245c08(v1, 0);
          ++*(uint *)(v1 + 8);
        }
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      }
      break;
    default:
      Function_2242938();
      if ( *(ushort *)(v2 + 1216) == 0xFFFF )
        Function_222fb60((uint *)v1, 8);
      else
        Function_222fb60((uint *)v1, 11);
      break;
  }
  return 0;
}

//----- (02242748) --------------------------------------------------------
int __fastcall Function_2242748(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  ushort *v8;
  ushort *v9;
  uint *v11;
  uint *v12;
  int v13;
  char v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v13 = 0;
  v5 = *((ushort *)dword_2249944 + a2 + 1);
  v6 = *((ushort *)dword_2249944 + a2);
  v12 = Function_2231948(102, 0, (uint *)&v14, a4);
  v11 = (uint *)LoadPokedexDataAdress(*(uint *)(v4 + 2096));
  v7 = v6;
  if ( v6 < v5 )
  {
    v8 = (ushort *)((char *)v12 + 2 * v6);
    do
    {
      if ( !WasPkmnSeen(v11, (ushort)*v8) )
        *v8 = -1;
      ++v7;
      ++v8;
    }
    while ( v7 < v5 );
  }
  if ( v6 < v5 )
  {
    v9 = (ushort *)((char *)v12 + 2 * v6);
    while ( *v9 == 0xFFFF )
    {
      ++v6;
      ++v9;
      if ( v6 >= v5 )
        goto LABEL_11;
    }
    v13 = 1;
  }
LABEL_11:
  free((int)v12);
  return v13;
}

//----- (022427D0) --------------------------------------------------------
int __fastcall Function_22427d0(int a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  ushort *v9;
  int v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  ushort *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int result;
  int v21;
  uint *v22;
  uint *v23;

  v4 = a1;
  v5 = *(uint **)(a1 + 2144);
  v6 = *((ushort *)dword_2249944 + a2 + 1);
  v21 = *((ushort *)dword_2249944 + a2);
  v5[308] = Function_2231948(102, 0, v5 + 307, a4);
  v23 = Function_2231948(102, 0, v5 + 307, v7);
  v22 = (uint *)LoadPokedexDataAdress(*(uint *)(v4 + 2096));
  v8 = v21;
  v5[306] = 0;
  if ( v21 < v6 )
  {
    v9 = (ushort *)((char *)v23 + 2 * v21);
    do
    {
      if ( WasPkmnSeen(v22, (ushort)*v9) )
        ++v5[306];
      else
        *v9 = -1;
      ++v8;
      ++v9;
    }
    while ( v8 < v6 );
  }
  v10 = 0;
  if ( v21 < v6 )
  {
    v11 = (ushort *)((char *)v23 + 2 * v21);
    v12 = 0;
    do
    {
      v13 = *v11;
      if ( v13 != 0xFFFF )
      {
        ++v10;
        *(ushort *)(v5[308] + v12) = v13;
        v12 += 2;
      }
      ++v11;
      ++v21;
    }
    while ( v21 < v6 );
  }
  if ( v10 < v5[307] )
  {
    v14 = 2 * v10;
    v15 = (ushort *)((char *)v23 + 2 * v10);
    do
    {
      ++v10;
      *(ushort *)(v5[308] + v14) = *v15;
      ++v15;
      v14 += 2;
    }
    while ( v10 < v5[307] );
  }
  free((int)v23);
  v5[311] = malloc(0x66u, 16 * v5[306]);
  MI_CpuFill8((ushort *)v5[311], 0, 16 * v5[306]);
  v16 = 0;
  if ( v5[306] > 0 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      ++v16;
      *(uint *)(v5[311] + v18) = *(ushort *)(v5[308] + v17);
      v19 = *(ushort *)(v5[308] + v17);
      v17 += 2;
      *(uint *)(v5[311] + v18 + 4) = v19;
      v18 += 16;
    }
    while ( v16 < v5[306] );
  }
  v5[309] = LoadFromMsgNARC(0, 26, 412, 0x66u);
  result = 1240;
  v5[310] = 1;
  return result;
}

//----- (02242938) --------------------------------------------------------
int __fastcall Function_2242938(int a1)
{
  int v1;
  int result;

  v1 = *(uint *)(a1 + 2144);
  Function_200b190(*(ushort **)(v1 + 1236));
  free(*(uint *)(v1 + 1244));
  free(*(uint *)(v1 + 1232));
  result = 1240;
  *(uint *)(v1 + 1240) = 0;
  return result;
}

//----- (02242970) --------------------------------------------------------
int __fastcall Function_2242970(uint *a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;

  v1 = (int)a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 <= 4 )
  {
    v4 = 2 * v3;
    JUMPOUT(__CS__, *(short *)(v4 + 35924366) + 35924368);
  }
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2231b3c((int)a1, 0x73u);
      *(uchar *)(v2 + 1219) = -1;
      *(uchar *)(v2 + 1220) = -1;
      Function_22419d4(v1, *(uchar *)(v2 + 1219), *(uchar *)(v2 + 1220));
      Function_2245c08(v1, 1);
      Function_22343b8(v1, 0x39u, 7u);
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      Function_2231664((int *)(v2 + 8), 0);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 2) )
      {
        Function_2234540(v1, 1);
        Function_22335b0(v1 + 1148, v1);
        Function_22324a0((uint *)(v1 + 1180), v1, &off_2249214);
        Function_2233638(v1 + 1148, (uint *)(v1 + 1180));
        Function_223331c(v1 + 1180, v1, 2, v5);
        Function_2234540(v1, 0);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      break;
    case 2:
      Function_2233664((int)(a1 + 287));
      Function_22332ac(v1 + 1180, *(ushort *)(v1 + 1164));
      if ( Function_2232f68(v1 + 1180, v1) )
      {
        *(uchar *)(v2 + 1219) = Function_2030bfc(*(uint *)(v1 + 2188));
        *(uchar *)(v2 + 1220) = Function_2030c08(*(uint *)(v1 + 2188));
        Function_22419d4(v1, *(uchar *)(v2 + 1219), *(uchar *)(v2 + 1220));
        ++*(uint *)(v1 + 8);
      }
      if ( Function_2022760((uchar *)&dword_2249138) )
      {
        Function_2234520(v1);
        ++*(uint *)(v1 + 8);
      }
      break;
    case 3:
      Function_2233600((int)(a1 + 287));
      Function_22332fc(v1 + 1180);
      Function_22334fc(v1 + 1180, v1);
      ++*(uint *)(v1 + 8);
      goto LABEL_14;
    case 4:
LABEL_14:
      Function_2231664((int *)(v2 + 8), 1);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 2) )
      {
        Function_2245c08(v1, 0);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      break;
    default:
      Function_222fb60(a1, 11);
      break;
  }
  return 0;
}

//----- (02242B34) --------------------------------------------------------
int __fastcall Function_2242b34(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 2) )
      {
        Function_2231b3c((int)v1, 0x7Cu);
        Function_2241aa4((int)v1, 0, v4, v5);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, v2[2], v1[22]);
    }
    else
    {
      Function_222fb60(a1, 3);
    }
  }
  else
  {
    Function_22343b8((int)a1, 0x38u, 3u);
    Function_22343b8((int)v1, 0x3Bu, 7u);
    ++v1[2];
  }
  return 0;
}

//----- (02242BB8) --------------------------------------------------------
int __fastcall Function_2242bb8(int a1)
{
  uint *v1;
  int v2;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = (uint *)a1;
  v2 = *(uint *)(a1 + 2144);
  if ( !Function_22411b8(a1) )
    return 0;
  switch ( (uchar)v1[2] )
  {
    case 0u:
      Function_2231b3c((int)v1, 0x75u);
      Function_2005748(0x565u);
      ++v1[2];
      break;
    case 1u:
      v4 = *(uchar *)(v2 + 1218);
      if ( v4 == 255 )
      {
        if ( Function_208be68((int)v1) == 1 )
          LOBYTE(v4) = -1;
        else
          LOBYTE(v4) = -2;
      }
      v5 = Function_224112c((int)v1);
      if ( ((int (__fastcall *)(int, uint, uint, uint, uint))dword_222B394[0])(
             v5,
             *(ushort *)(v2 + 1216),
             (uchar)v4,
             *(uchar *)(v2 + 1219),
             *(uchar *)(v2 + 1220)) == 1 )
        ++v1[2];
      break;
    case 2u:
      v6 = Function_224112c((int)v1);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v6, &v7) == 1 )
      {
        Function_20057a4(1381, 0);
        Function_22345b8((int)v1, 7u, *(uint *)(v7 + 12), *(uint *)(v7 + 4));
        v1[4174] = 0;
      }
      else
      {
        Function_20057a4(1381, 0);
        v1[324] = 118;
      }
      ++v1[2];
      break;
    case 3u:
      if ( v1[4174] )
      {
        Function_2005748(0x55Fu);
      }
      else
      {
        Function_2231b3c((int)v1, v1[324]);
        Function_2005748(0x564u);
      }
      ++v1[2];
      break;
    default:
      Function_2233310(v1 + 295);
      if ( v1[4174] )
        Function_222fb60(v1, 13);
      else
        Function_222fb60(v1, 3);
      break;
  }
  return 0;
}

//----- (02242CFC) --------------------------------------------------------
int __fastcall Function_2242cfc(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 1);
      if ( Function_22315e0(v2, v2 + 1, 1, 0) )
      {
        Function_2245c08(v1, 1);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, v2[2], v1[22]);
    }
    else
    {
      Function_222fb60(a1, 14);
    }
  }
  else
  {
    Function_2241bb8((int)a1);
    Function_2241bf8((int)v1);
    Function_2231b8c((int)v1);
    Function_2024034(v2[386]);
    Function_2024034(v2[387]);
    ++v1[2];
  }
  return 0;
}

//----- (02242D90) --------------------------------------------------------
int __fastcall Function_2242d90(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;
  int (**v4)[4];
  int (**v5)[4];
  int v6;
  int (*v7)[4];
  int (*v8)[4];
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 0) )
      {
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        Function_224141c((int)v1, 1);
        Function_2234358((int)v1, v1[444], 16, (short)(24 * v1[310] + 76));
        Function_208b9e0(v1[444], 1);
        Function_208ba08(v1[444], 12, 12);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, v2[2], v1[22]);
      Function_2003a2c(v1[10], 2, 0xCu, v2[2], v1[22]);
    }
    else
    {
      Function_222fb60(a1, 15);
    }
  }
  else
  {
    if ( Function_202f250() )
      Function_202f22c();
    v4 = &off_2249298;
    v5 = (int (**)[4])(v2 + 312);
    v6 = 5;
    do
    {
      v7 = *v4;
      v8 = v4[1];
      v4 += 2;
      *v5 = v7;
      v5[1] = v8;
      v5 += 2;
      --v6;
    }
    while ( v6 );
    *v5 = *v4;
    v2[312] = 0;
    v2[313] = v1[4174];
    Function_22339dc(v1);
    v2[323] = (int)Function_2233a68(102, v9, v10);
    Function_22343b8((int)v1, 4u, 3u);
    Function_22343b8((int)v1, 7u, 7u);
    Function_201ff0c(4u, 0);
    Function_201ff74(4u, 0);
    Function_2241c38((int)v1);
    Function_2234540((int)v1, 1);
    Function_22335b0((int)(v1 + 287), (int)v1);
    Function_2232594(v1 + 295, (int)v1, 0, v2 + 312);
    v1[313] = 1;
    Function_2233638((int)(v1 + 287), v1 + 295);
    Function_2234540((int)v1, 0);
    Function_2234540((int)v1, 1);
    Function_223331c((int)(v1 + 295), (int)v1, 1, v11);
    Function_2233434((int)(v1 + 295), 64, 184);
    Function_2233064(v1 + 295, (int)v1);
    Function_2234540((int)v1, 0);
    Function_2234540((int)v1, 1);
    Function_2241278((int)v1, v12, v13, v14);
    Function_224141c((int)v1, 0);
    Function_2234540((int)v1, 0);
    ++v1[2];
  }
  return 0;
}

//----- (02242F74) --------------------------------------------------------
int __fastcall Function_2242f74(uint *a1)
{
  int v1;
  int v2;
  int v3;

  v1 = (int)a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2233600((int)(a1 + 287));
      Function_22332fc(v1 + 1180);
      Function_22334fc(v1 + 1180, v1);
      Function_2233a74(*(int **)(v2 + 1292));
      Function_2241460(v1);
      Function_2233a44(v1);
      Function_2241bb8(v1);
      Function_2241bf8(v1);
      Function_208b9e0(*(uint *)(v1 + 1776), 0);
      Function_208ba08(*(uint *)(v1 + 1776), 0, 0);
      if ( *(uint *)(v2 + 12) == 16 )
      {
        Function_22335f4((int *)(v1 + 1148));
        Function_2233310((int *)(v1 + 1180));
        *(uint *)(v2 + 1296) = 0;
      }
      ++*(uint *)(v1 + 8);
    }
    else if ( v3 != 2 )
    {
      Function_222fb60(a1, *(uint *)(v2 + 12));
      return 0;
    }
    Function_2231664((int *)(v2 + 8), 1);
    if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 0) )
    {
      Function_2245c08(v1, 0);
      if ( *(uint *)(v2 + 12) == 17 )
      {
        Function_223124c(v2 + 16, v1 + 20, 3u);
        Function_223124c(v2 + 44, v1 + 20, 0x5Eu);
        Function_200d364(*(int **)(v2 + 20), 0);
        Function_200d364(*(int **)(v2 + 48), 3u);
      }
      ++*(uint *)(v1 + 8);
    }
    Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
    Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
  }
  else
  {
    Function_2233664((int)(a1 + 287));
    Function_22331c8(v1 + 1180, *(short *)(v1 + 1164));
    Function_2233064((uint *)(v1 + 1180), v1);
    Function_208b8ec(*(uint *)(v1 + 1776), 16, (short)(24 * *(uint *)(v1 + 1240) + 76));
    Function_22414c0(v1);
    if ( Function_2022760((uchar *)&dword_2249134) )
    {
      Function_2234520(v1);
      *(uint *)(v2 + 12) = 17;
      ++*(uint *)(v1 + 8);
    }
    if ( Function_2022760((uchar *)&dword_2249138) )
    {
      Function_2234520(v1);
      *(uint *)(v2 + 12) = 16;
      ++*(uint *)(v1 + 8);
    }
  }
  return 0;
}

//----- (0224312C) --------------------------------------------------------
int __fastcall Function_224312c(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664((int *)(v2 + 8), 0);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 0) )
      {
        Function_2231aac((int)v1, 0x7Cu);
        Function_22417c0((int)v1, 0);
        Function_2241954((int)v1, *(ushort *)(v2 + 1216), v6, v7);
        Function_22418dc((int)v1, *(uchar *)(v2 + 1218));
        Function_22419d4((int)v1, *(uchar *)(v2 + 1219), *(uchar *)(v2 + 1220));
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, *(uint *)(v2 + 8), v1[22]);
    }
    else
    {
      Function_222fb60(a1, 3);
    }
  }
  else
  {
    Function_22343b8((int)a1, 0x38u, 3u);
    Function_22343b8((int)v1, 0x3Bu, 7u);
    Function_2245c08(v1, 0);
    *(uint *)(v2 + 1544) = Function_2023fcc((int)dword_22491AC, 5u, (int)Function_22458a0, (int)v1, 0x66u);
    *(uint *)(v2 + 1548) = Function_2023fcc((int)&byte_22491F0, 9u, (int)Function_2245968, (int)v1, 0x66u);
    Function_2241aa4((int)v1, 0, v4, v5);
    Function_201ff0c(4u, 0);
    Function_201ff74(4u, 0);
    ++v1[2];
  }
  return 0;
}

//----- (0224324C) --------------------------------------------------------
int __fastcall Function_224324c(uint *a1)
{
  uint *v1;
  int *v2;
  uint v3;
  int v4;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_224326A + v3) + 35926636);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_22343b8((int)a1, 6u, 7u);
      ++v1[2];
      break;
    case 1:
      Function_224443c();
      v2[386] = Function_2023fcc((int)dword_224919C, 4u, (int)Function_2245994, (int)v1, 0x66u);
      v2[387] = Function_2023fcc((int)dword_224915C, 4u, (int)Function_2245a28, (int)v1, 0x66u);
      v2[388] = Function_2023fcc((int)dword_224913C, 2u, (int)Function_2245a90, (int)v1, 0x66u);
      ++v1[2];
      break;
    case 2:
      v2[115] = 0;
      Function_2234540((int)a1, 1);
      Function_2234214((int)(v2 + 67), (int)v1);
      v4 = Function_2233fec((int)(v2 + 67));
      Function_22343b8((int)v1, v4, 3u);
      Function_223427c((int)(v2 + 67), 0);
      Function_2234540((int)v1, 0);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      Function_201ff0c(4u, 0);
      Function_201ff74(4u, 0);
      ++v1[2];
      break;
    case 3:
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 0) )
      {
        Function_223427c((int)(v2 + 67), 1);
        Function_2245640(v1);
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, v2[2], v1[22]);
      break;
    default:
      Function_222fb60(a1, 18);
      break;
  }
  return 0;
}

//----- (022433C0) --------------------------------------------------------
int __fastcall Function_22433c0(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 1544));
  return 0;
}

//----- (022433D8) --------------------------------------------------------
int __fastcall Function_22433d8(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2245d80() )
    Function_222fb60(v1, 18);
  return 0;
}

//----- (022433F0) --------------------------------------------------------
int __fastcall Function_22433f0(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  if ( !Function_2246850() )
    return 0;
  free(v1);
  return 1;
}

//----- (02243410) --------------------------------------------------------
int __fastcall Function_2243410(uint *a1)
{
  uint *v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664((int *)(v2 + 8), 1);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 0) )
      {
        Function_223124c(v2 + 16, (int)(v1 + 5), 3u);
        Function_223124c(v2 + 44, (int)(v1 + 5), 0x6Fu);
        Function_200d364(*(int **)(v2 + 20), 0);
        Function_200d364(*(int **)(v2 + 48), 1u);
        Function_2245c08(v1, 1);
        ++v1[2];
      }
      Function_2003a2c(v1[10], 3, 0xCu, *(uint *)(v2 + 8), v1[22]);
    }
    else
    {
      Function_222fb60(a1, 14);
    }
  }
  else
  {
    Function_2024034(*(uint *)(v2 + 1544));
    Function_2024034(*(uint *)(v2 + 1548));
    Function_2024034(*(uint *)(v2 + 1552));
    Function_201ff74(4u, 0);
    Function_201ff0c(4u, 0);
    Function_22444a0(v1);
    Function_2234540((int)v1, 1);
    if ( *(uint *)(v2 + 460) )
      Function_2232394(v2 + 128, (int)v1);
    else
      Function_2234228(v2 + 268, (int)v1);
    Function_2234540((int)v1, 0);
    Function_22455c4(v1);
    ++v1[2];
  }
  return 0;
}

//----- (02243514) --------------------------------------------------------
int __fastcall Function_2243514(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = Function_202fe04();
  v4 = Function_202fe98(v3, 4u, 0);
  if ( Function_2234970(v1, v4, v5) )
  {
    v6 = *(uint *)(v1 + 8);
    if ( v6 <= 5 )
      JUMPOUT(__CS__, *((short *)&off_2243552 + v6) + 35927380);
    switch ( (uchar)v6 )
    {
      case 0:
        Function_2234540(v1, 1);
        if ( *(uint *)(v2 + 460) )
          Function_2232394(v2 + 128, v1);
        else
          Function_2234228(v2 + 268, v1);
        Function_22455c4(v1);
        Function_2234540(v1, 0);
        Function_201ff0c(4u, 0);
        Function_201ff74(4u, 0);
        ++*(uint *)(v1 + 8);
        break;
      case 1:
        Function_2231664((int *)(v2 + 8), 1);
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 0) )
        {
          Function_2234540(v1, 1);
          Function_2245d50(v1);
          Function_2244be4(v1);
          Function_2234540(v1, 0);
          Function_2019ebc(*(uint **)(v1 + 36), 3u);
          Function_2019ebc(*(uint **)(v1 + 36), 7u);
          ++*(uint *)(v1 + 8);
        }
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
        break;
      case 2:
        Function_2231aac(v1, 0x115u);
        ++*(uint *)(v1 + 8);
        break;
      case 3:
        if ( Function_2022798() )
        {
          Function_2244ca4(v1);
          Function_2231b8c(v1);
          Function_2019ebc(*(uint **)(v1 + 36), 2u);
          Function_2019ebc(*(uint **)(v1 + 36), 6u);
          Function_201ff74(4u, 0);
          Function_201ff0c(4u, 0);
          ++*(uint *)(v1 + 8);
        }
        break;
      case 4:
        Function_2234540(v1, 1);
        Function_2245c64(v1);
        if ( *(uint *)(v1 + 2156) == 210 )
        {
          Function_223124c(v2 + 16, v1 + 20, 3u);
          Function_223124c(v2 + 44, v1 + 20, 0x5Eu);
          Function_200d364(*(int **)(v2 + 20), 0);
          Function_200d364(*(int **)(v2 + 48), 3u);
        }
        Function_2234540(v1, 0);
        Function_2245640(v1);
        Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
        Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
        Function_2234540(v1, 1);
        if ( *(uint *)(v2 + 460) )
        {
          Function_2232378((char **)(v2 + 128), v1, v7, v8);
          Function_22323b8(v2 + 128, 0);
          Function_200710c(*(uint *)(v1 + 20), 0x50u, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
        }
        else
        {
          Function_2234214(v2 + 268, v1);
          Function_223427c(v2 + 268, 0);
          v9 = Function_2233fec(v2 + 268);
          Function_22343b8(v1, v9, 3u);
        }
        Function_2234540(v1, 0);
        Function_200710c(*(uint *)(v1 + 20), 6u, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
        ++*(uint *)(v1 + 8);
        break;
      case 5:
        Function_2231664((int *)(v2 + 8), 0);
        if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 0) )
        {
          if ( *(uint *)(v2 + 460) )
            Function_22323b8(v2 + 128, 1);
          else
            Function_223427c(v2 + 268, 1);
          Function_201ff74(4u, 1);
          Function_201ff0c(4u, 1);
          ++*(uint *)(v1 + 8);
        }
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
        break;
      default:
        v10 = 0;
        if ( *(uint *)(v1 + 16696) > 0 )
        {
          v11 = v1 + 9856;
          v12 = v1;
          do
          {
            *(uint *)(v12 + 9736) = v11;
            ++v10;
            v11 += 228;
            v12 += 4;
          }
          while ( v10 < *(uint *)(v1 + 16696) );
        }
        Function_222fb60((uint *)v1, 18);
        break;
    }
  }
  else if ( Function_2245ecc(v1) )
  {
    Function_222fb60((uint *)v1, 23);
  }
  return 0;
}

//----- (02243830) --------------------------------------------------------
int __fastcall Function_2243830(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 1548));
  return 0;
}

//----- (02243848) --------------------------------------------------------
int __fastcall Function_2243848(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint *v4;

  v1 = a1;
  if ( Function_2246640() )
  {
    v2 = 0;
    if ( v1[4174] > 0 )
    {
      v3 = (int)(v1 + 2464);
      v4 = v1;
      do
      {
        v4[2434] = v3;
        ++v2;
        v3 += 228;
        ++v4;
      }
      while ( v2 < v1[4174] );
    }
    Function_222fb60(v1, 18);
  }
  return 0;
}

//----- (02243888) --------------------------------------------------------
int __fastcall Function_2243888(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint *v4;

  v1 = a1;
  if ( Function_2246428() )
  {
    v2 = 0;
    if ( v1[4174] > 0 )
    {
      v3 = (int)(v1 + 2464);
      v4 = v1;
      do
      {
        v4[2434] = v3;
        ++v2;
        v3 += 228;
        ++v4;
      }
      while ( v2 < v1[4174] );
    }
    Function_222fb60(v1, 18);
  }
  return 0;
}

//----- (022438C8) --------------------------------------------------------
int __fastcall Function_22438c8(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2245fe4() )
    Function_222fb60(v1, 26);
  return 0;
}

//----- (022438E0) --------------------------------------------------------
int __fastcall Function_22438e0(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 1552));
  return 0;
}

//----- (022438F8) --------------------------------------------------------
int __fastcall Function_22438f8(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2246090() )
    Function_222fb60(v1, 23);
  return 0;
}

//----- (02243910) --------------------------------------------------------
int Function_2243910()
{
  Function_224613c();
  return 0;
}

//----- (0224391C) --------------------------------------------------------
int __fastcall Function_224391c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = *(int **)(a1 + 2144);
  if ( !Function_22411b8(a1) )
    return 0;
  v7 = *(uint *)(v4 + 8);
  if ( v7 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_224394A + v7) + 35928396);
  switch ( (uchar)v7 )
  {
    case 0:
      Function_2019ebc(*(uint **)(v4 + 36), 2u);
      Function_2019ebc(*(uint **)(v4 + 36), 6u);
      if ( v5[115] )
        Function_22323b8((int)(v5 + 32), 0);
      else
        Function_223427c((int)(v5 + 67), 0);
      ++*(uint *)(v4 + 8);
      goto LABEL_10;
    case 1:
LABEL_10:
      Function_2231664(v5 + 2, 1);
      if ( Function_22315e0(v5, v5 + 1, 1, 0) )
        ++*(uint *)(v4 + 8);
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, v5[2], *(uint *)(v4 + 88));
      break;
    case 2:
      Function_2231aac(v4, 0x75u);
      Function_2234358(v4, *(uint *)(v4 + 1776), 128, 96);
      Function_208b9e0(*(uint *)(v4 + 1776), 1);
      Function_208ba08(*(uint *)(v4 + 1776), 24, 24);
      v5[302] = 0;
      Function_2005748(0x565u);
      ++*(uint *)(v4 + 8);
      break;
    case 3:
      v8 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, uint, uint))dword_222B524[0])(
             v8,
             *(uint *)(*(uint *)(v4 + 4 * *(uint *)(v4 + 1236) + 9736) + 216),
             *(uint *)(*(uint *)(v4 + 4 * *(uint *)(v4 + 1236) + 9736) + 220)) == 1 )
        ++*(uint *)(v4 + 8);
      break;
    case 4:
      v9 = Function_224112c(v4);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v9, &v11) == 1 )
      {
        Function_20057a4(1381, 0);
        Function_2231b8c(v4);
        Function_22348b8(v4, 8u, *(uint *)(v11 + 12), *(uint *)(v11 + 4));
        ++*(uint *)(v4 + 8);
        v5[302] = 0;
      }
      else
      {
        Function_20057a4(1381, 0);
        *(uint *)(v4 + 8) = 255;
        v5[302] = 1;
        *(uint *)(v4 + 2168) = v4 + 16700 + *(uint *)(v4 + 1236);
        v10 = *(uint *)(v4 + 2228);
        v5[303] = v10;
        MI_CpuCopy8(v5[303], v4 + 2232, 0x1D4Cu, v10);
      }
      Function_208b9e0(*(uint *)(v4 + 1776), 0);
      Function_208ba08(*(uint *)(v4 + 1776), 0, 0);
      break;
    default:
      if ( v5[302] )
      {
        Function_2005748(0x55Fu);
        Function_2231b8c(v4);
        Function_222fb60((uint *)v4, v5[3]);
        Function_223381c(v4, 1);
      }
      else
      {
        Function_2231b8c(v4);
        Function_222fb60((uint *)v4, 31);
      }
      break;
  }
  return 0;
}

//----- (02243B1C) --------------------------------------------------------
int __fastcall Function_2243b1c(uint *a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = (int)a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_2243B3C + v3) + 35928894);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2234314();
      Function_22315c8((int *)v2, (int *)(v2 + 4), 0);
      v4 = 0;
      if ( *(uint *)(v1 + 16696) > 0 )
      {
        v5 = v1 + 9856;
        v6 = v1;
        do
        {
          *(uint *)(v6 + 9736) = v5;
          ++v4;
          v5 += 228;
          v6 += 4;
        }
        while ( v4 < *(uint *)(v1 + 16696) );
      }
      *(uchar *)(v2 + 1948) = *(uchar *)(v1 + *(uint *)(v1 + 1236) + 16700);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_22343b8(v1, 6u, 7u);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      Function_2245c64(v1);
      Function_2245c08(v1, 0);
      Function_223124c(v2 + 16, v1 + 20, 3u);
      Function_223124c(v2 + 44, v1 + 20, 0x5Eu);
      Function_200d364(*(int **)(v2 + 20), 0);
      Function_200d364(*(int **)(v2 + 48), 3u);
      *(ushort *)(v2 + 1216) = -1;
      *(uchar *)(v2 + 1218) = -1;
      *(uchar *)(v2 + 1219) = -1;
      *(uchar *)(v2 + 1220) = -1;
      *(uint *)(v2 + 1300) = 500;
      *(uint *)(v2 + 1296) = *(short *)(v1 + 1188);
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      Function_224443c();
      *(uint *)(v2 + 1544) = Function_2023fcc((int)dword_224919C, 4u, (int)Function_2245994, v1, 0x66u);
      *(uint *)(v2 + 1548) = Function_2023fcc((int)dword_224915C, 4u, (int)Function_2245a28, v1, 0x66u);
      *(uint *)(v2 + 1552) = Function_2023fcc((int)dword_224913C, 2u, (int)Function_2245a90, v1, 0x66u);
      ++*(uint *)(v1 + 8);
      break;
    case 2:
      Function_2234540((int)a1, 1);
      Function_2234214(v2 + 268, v1);
      v7 = Function_2233fec(v2 + 268);
      Function_22343b8(v1, v7, 3u);
      Function_223427c(v2 + 268, 0);
      Function_2234540(v1, 0);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      Function_201ff0c(4u, 0);
      Function_201ff74(4u, 0);
      ++*(uint *)(v1 + 8);
      break;
    case 3:
      Function_2231664((int *)(v2 + 8), 0);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 0) )
      {
        Function_223427c(v2 + 268, 1);
        Function_2245640(v1);
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      break;
    case 4:
      Function_200f174(0, 1, 1, 0, 6, 1, 102);
      ++*(uint *)(v1 + 8);
      break;
    case 5:
      if ( Function_200f2ac() == 1 )
        ++*(uint *)(v1 + 8);
      break;
    default:
      ++a1[438];
      Function_2230098(a1);
      Function_222fb60((uint *)v1, 18);
      break;
  }
  return 0;
}

//----- (02243DC8) --------------------------------------------------------
int __fastcall Function_2243dc8(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc(0x66u, 1952);
  Call_FillMemWithValue(v2, 0, 0x7A0u);
  *(uint *)(v1 + 2144) = v2;
  Function_2019ebc(*(uint **)(v1 + 36), 2u);
  Function_2019ebc(*(uint **)(v1 + 36), 3u);
  Function_2019ebc(*(uint **)(v1 + 36), 6u);
  Function_2019ebc(*(uint **)(v1 + 36), 7u);
  Function_22315c8(v2, v2 + 1, 0);
  Function_222fb60((uint *)v1, 1);
  return 0;
}

//----- (02243E20) --------------------------------------------------------
int __fastcall Function_2243e20(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = a1[2];
  v3 = a1[536];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Function_2234540((int)a1, 1);
      Function_2231454((int)v1);
      Function_2234540((int)v1, 0);
      Function_2019060(0, 0);
      Function_2019060(1u, 3);
      Function_2019060(2u, 0);
      Function_2019060(3u, 2);
      Function_2019060(4u, 0);
      Function_2019060(5u, 3);
      Function_2019060(6u, 1);
      Function_2019060(7u, 2);
      ++v1[2];
    }
    else
    {
      v4 = a1[539];
      switch ( v4 )
      {
        case 200:
          Function_223376c((int)a1, 0);
          Function_208b9e0(v1[444], 0);
          if ( Function_22300bc((int)v1) == 1 )
            Function_222fb60(v1, 6);
          else
            Function_222fb60(v1, 2);
          break;
        case 210:
          Function_223376c((int)a1, 0);
          Function_208b9e0(v1[444], 0);
          if ( Function_22300bc((int)v1) == 1 )
            Function_222fb60(v1, 30);
          else
            Function_222fb60(v1, 2);
          break;
        case 220:
          if ( Function_22300bc((int)a1) == 1 )
            Function_222fb60(v1, 19);
          else
            Function_222fb60(v1, 2);
          Function_208b9e0(v1[444], 0);
          break;
        default:
          Function_223376c((int)a1, 0);
          Function_208b9e0(v1[444], 0);
          Function_222fb60(v1, 2);
          break;
      }
    }
  }
  else
  {
    if ( Function_2231664((int *)(v3 + 8), 1) )
      ++v1[2];
    Function_2003a2c(v1[10], 2, 0xCu, *(uint *)(v3 + 8), v1[22]);
    Function_2003a2c(v1[10], 3, 0xCu, *(uint *)(v3 + 8), v1[22]);
    Function_2003a2c(v1[10], 1, 2u, *(uint *)(v3 + 8), v1[22]);
  }
  return 0;
}

//----- (02243FA8) --------------------------------------------------------
int __fastcall Function_2243fa8(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  int v6;
  int v7;
  int *v8;
  uint *v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  int v14;
  uint *v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int v21;
  int v22;
  int v23;
  int v24;

  v24 = a4;
  v4 = a1;
  v5 = (int *)a1[536];
  v6 = a1[2];
  switch ( v6 )
  {
    case 0:
      v21 = 2;
      v22 = 5;
      v23 = 5;
      v7 = LoadPlayerDataAdress(a1[524]);
      v5[299] = Function_2246b00(102, 12, &v21, v7);
      v5[253] = v4[5];
      v5[254] = v4[6];
      v5[255] = v4[7];
      v5[256] = v4[9];
      v5[257] = v4[10];
      v8 = (int *)v5[299];
      v9 = v5 + 287;
      v10 = *v8;
      v11 = v8[1];
      v8 += 2;
      *v9 = v10;
      v9[1] = v11;
      v12 = v5 + 289;
      v13 = *v8;
      v14 = v8[1];
      v8 += 2;
      *v12 = v13;
      v12[1] = v14;
      v15 = v5 + 291;
      v16 = *v8;
      v17 = v8[1];
      v8 += 2;
      *v15 = v16;
      v15[1] = v17;
      v18 = v5 + 293;
      v19 = v8[1];
      *v18 = *v8;
      v18[1] = v19;
      v5[298] = (int)v4;
      Function_2245b24(v4);
      ++v4[2];
      goto LABEL_6;
    case 1:
LABEL_6:
      Function_22314f0(v5, v5 + 1, 8, 18, 8, 18, 0);
      Function_201ff0c(8u, 1);
      ++v4[2];
      return 0;
    case 2:
      Function_2231664(v5 + 2, 0);
      if ( Function_22315e0(v5, v5 + 1, 0, 0) )
      {
        Function_223197c((int)v4, 0x70u);
        ++v4[2];
      }
      Function_2003a2c(v4[10], 2, 0xCu, v5[2], v4[22]);
      break;
    default:
      Function_222fb60(a1, 3);
      break;
  }
  return 0;
}

//----- (022440B0) --------------------------------------------------------
int __fastcall Function_22440b0(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2247084(a1[536] + 468) == 1 )
    Function_222fb60(v1, 4);
  return 0;
}

//----- (022440D4) --------------------------------------------------------
int __fastcall Function_22440d4(uint *a1)
{
  uint *v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      if ( v2[295] )
        Function_222fb60(a1, 6);
      else
        Function_222fb60(a1, 5);
      return 0;
    }
  }
  else
  {
    Function_2231a1c((int)a1);
    Function_2231560(v2, v2 + 1, 8, 18, 8, 18, 0);
    Function_2246b4c(v2[299]);
    ++v1[2];
  }
  Function_2231664(v2 + 2, 1);
  if ( Function_22315e0(v2, v2 + 1, 1, 0) )
  {
    Function_201ff0c(8u, 0);
    Function_2245bd8(v1);
    ++v1[2];
  }
  Function_2003a2c(v1[10], 2, 0xCu, v2[2], v1[22]);
  return 0;
}

//----- (02244180) --------------------------------------------------------
int __fastcall Function_2244180(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  if ( *(uint *)(a1 + 8) )
  {
    if ( Function_2231664((int *)(v2 + 8), 0) )
    {
      Function_22318e8(v1);
      Function_2231688((uint *)(v2 + 8));
      Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
      Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
      Function_222fb60((uint *)v1, 5);
      Function_2019ebc(*(uint **)(v1 + 36), 2u);
      Function_2019ebc(*(uint **)(v1 + 36), 6u);
      Function_2019ebc(*(uint **)(v1 + 36), 3u);
      Function_2019ebc(*(uint **)(v1 + 36), 7u);
      free(v2);
    }
    else
    {
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
    }
  }
  else
  {
    Function_2231688((uint *)(v2 + 8));
    Function_2234540(v1, 1);
    Function_223146c((int **)v1);
    Function_2234540(v1, 0);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (02244258) --------------------------------------------------------
int __fastcall Function_2244258(uint *a1, int a2, char a3, int a4)
{
  uint *v4;
  uint *v5;
  uint v6;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = (uint *)a1[536];
  v6 = a1[2];
  if ( v6 <= 4 )
    JUMPOUT(__CS__, (char *)&off_224427E + *((short *)&off_224427E + v6) + 2);
  switch ( a3 )
  {
    case 0:
      Function_223197c((int)a1, 0x75u);
      Function_2234358((int)v4, v4[445], 128, 96);
      Function_208b9e0(v4[445], 1);
      Function_208ba08(v4[445], 24, 24);
      v5[302] = 0;
      Function_2005748(0x565u);
      ++v4[2];
      return 0;
    case 1:
      if ( !Function_22411b8((int)a1) )
        return 0;
      v8 = Function_224112c((int)v4);
      if ( ((int (__fastcall *)(int, uint, uint))dword_222B524[0])(v8, v5[296], v5[297]) == 1 )
        ++v4[2];
      return 0;
    case 2:
      if ( !Function_22411b8((int)a1) )
        return 0;
      Function_2231a1c((int)v4);
      v9 = Function_224112c((int)v4);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v9, &v11) == 1 )
      {
        Function_20057a4(1381, 0);
        REG_BLDCNT = 0;
        Function_22348b8((int)v4, 8u, *(uint *)(v11 + 12), *(uint *)(v11 + 4));
        Function_223376c((int)v4, 0);
        ++v4[2];
        v5[302] = 0;
      }
      else
      {
        Function_20057a4(1381, 0);
        v4[2] = 255;
        v5[302] = 1;
        Function_2005748(0x55Fu);
        v4[542] = v4 + 2433;
        v5[303] = v4[557];
        MI_CpuCopy8(v5[303], (uint)(v4 + 558), 0x1D4Cu, v10);
      }
      Function_208b9e0(v4[445], 0);
      Function_208ba08(v4[445], 0, 0);
      return 0;
    case 3:
      Function_223376c((int)a1, 1);
      ++v4[2];
      return 0;
    case 4:
      a1[2] = v6 + 1;
      return 0;
    default:
      if ( v5[302] )
        Function_222fb60(a1, 7);
      else
        Function_222fb60(a1, 5);
      return 0;
  }
}

//----- (022443EC) --------------------------------------------------------
int __fastcall Function_22443ec(int a1)
{
  uint *v1;
  uint v2;

  v1 = *(uint **)(a1 + 2144);
  v1[32] = Function_2030a80(0x66u);
  ((void (__fastcall *)(uint, uint))dword_222AFC0[0])(v1[303], v1[32]);
  v1[67] = v1[32];
  v1[68] = Function_202ff2c(0x66u);
  return MI_CpuCopy8(v1[303] + 128, v1[68], 0x64u, v2);
}

//----- (0224443C) --------------------------------------------------------
int __fastcall Function_224443c(int a1)
{
  int v1;
  uint *v2;
  uint v3;

  v1 = a1;
  v2 = *(uint **)(a1 + 2144);
  v2[32] = Function_2030a80(0x66u);
  ((void (__fastcall *)(uint, uint))dword_222AFC0[0])(*(uint *)(v1 + 4 * *(uint *)(v1 + 1236) + 9736), v2[32]);
  v2[67] = v2[32];
  v2[68] = Function_202ff2c(0x66u);
  return MI_CpuCopy8(*(uint *)(v1 + 4 * *(uint *)(v1 + 1236) + 9736) + 128, v2[68], 0x64u, v3);
}

//----- (022444A0) --------------------------------------------------------
uint __fastcall Function_22444a0(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  Call_free6(*(uint *)(v1 + 272));
  return Call_free7(*(uint *)(v1 + 128));
}

//----- (022444BC) --------------------------------------------------------
int __fastcall Function_22444bc(uint *a1)
{
  int v1;
  int *v2;
  uint v3;
  int v4;

  v1 = (int)a1;
  v2 = (int *)a1[536];
  v3 = a1[2];
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_22444DC + v3) + 35931358);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_223376c((int)a1, 0);
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      if ( Function_2233790((int)a1) )
      {
        Function_2231560(v2, v2 + 1, 8, 18, 8, 18, 0);
        Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
        Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
        Function_22343b8(v1, 6u, 7u);
        Function_2019060(0, 1);
        Function_2019060(1u, 3);
        Function_2019060(2u, 0);
        Function_2019060(3u, 1);
        Function_2019060(4u, 1);
        Function_2019060(5u, 3);
        Function_2019060(6u, 0);
        Function_2019060(7u, 2);
        Function_22443ec(v1);
        Function_2245c64(v1);
        v2[386] = Function_2023fcc((int)dword_224919C, 4u, (int)Function_22457a0, v1, 0x66u);
        v2[387] = Function_2023fcc((int)dword_224915C, 4u, (int)Function_2245800, v1, 0x66u);
        v2[388] = Function_2023fcc((int)dword_224913C, 2u, (int)Function_2245868, v1, 0x66u);
        ++*(uint *)(v1 + 8);
      }
      break;
    case 2:
      Function_2234540((int)a1, 1);
      v2[115] = 0;
      Function_2234214((int)(v2 + 67), v1);
      v4 = Function_2233fec((int)(v2 + 67));
      Function_22343b8(v1, v4, 3u);
      Function_223427c((int)(v2 + 67), 0);
      Function_2234540(v1, 0);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      Function_201ff0c(4u, 0);
      Function_201ff74(4u, 0);
      ++*(uint *)(v1 + 8);
      break;
    case 3:
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 0) )
      {
        Function_223427c((int)(v2 + 67), 1);
        Function_2245640(v1);
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
      break;
    default:
      Function_222fb60(a1, 8);
      break;
  }
  return 0;
}

//----- (022446D0) --------------------------------------------------------
int __fastcall Function_22446d0(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 1544));
  return 0;
}

//----- (022446E8) --------------------------------------------------------
int __fastcall Function_22446e8(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2245d80() )
    Function_222fb60(v1, 8);
  return 0;
}

//----- (02244700) --------------------------------------------------------
int __fastcall Function_2244700(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  if ( !Function_2246850() )
    return 0;
  free(v1);
  return 1;
}

//----- (02244720) --------------------------------------------------------
int __fastcall Function_2244720(int a1)
{
  int v1;
  int *v2;
  uint v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_224473E + v3) + 35931968);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2024034(v2[386]);
      Function_2024034(v2[387]);
      Function_2024034(v2[388]);
      Function_201ff74(4u, 0);
      Function_201ff0c(4u, 0);
      Function_22444a0(v1);
      Function_2234540(v1, 1);
      if ( v2[115] )
        Function_2232394((int)(v2 + 32), v1);
      else
        Function_2234228((int)(v2 + 67), v1);
      Function_2234540(v1, 0);
      Function_22455c4(v1);
      ++*(uint *)(v1 + 8);
      break;
    case 1:
      Function_2231664(v2 + 2, 1);
      if ( Function_22315e0(v2, v2 + 1, 1, 0) )
      {
        Function_2245d50(v1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
      break;
    case 2:
      Function_2231688(v2 + 2);
      Function_2234540(v1, 1);
      Function_223146c((int **)v1);
      Function_2234540(v1, 0);
      Function_223376c(v1, 1);
      ++*(uint *)(v1 + 8);
      break;
    case 3:
      if ( Function_2233790(a1) )
      {
        if ( Function_2231664(v2 + 2, 0) )
        {
          Function_22318e8(v1);
          Function_2231688(v2 + 2);
          Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
          Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
          Function_222fb60((uint *)v1, 5);
          free((int)v2);
          Function_2019ebc(*(uint **)(v1 + 36), 2u);
          Function_2019ebc(*(uint **)(v1 + 36), 6u);
          Function_2019ebc(*(uint **)(v1 + 36), 3u);
          Function_2019ebc(*(uint **)(v1 + 36), 7u);
          if ( Function_202f250() == 1 )
            Function_202f22c();
        }
        else
        {
          Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, v2[2], *(uint *)(v1 + 88));
          Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
        }
      }
      break;
    default:
      return 0;
  }
  return 0;
}

//----- (022448E0) --------------------------------------------------------
uint __fastcall Function_22448e0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  ushort *v7;
  int *v8;
  ushort *v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  char v17;
  int v18;

  v18 = a4;
  v4 = a2;
  v5 = 4 * a3;
  v6 = a2 + 2188;
  v16 = a1;
  if ( *(uint *)(a2 + 2188 + 4 * a3) )
  {
    v8 = (int *)Function_2231690(0x66u);
    v9 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 72), 7u);
    v10 = Function_2030b94(*(char **)(v6 + v5), 0x66u);
    Function_22349a8(v4, (int)v10);
    v7 = (ushort *)Function_2023790(255, 0x66u);
    Function_200b48c(v8, 0, (int)v10);
    Function_200c388((uint *)v8, (int)v7, (int)v9);
    Function_20237bc_FreeMsg((int)v9, v11);
    Function_20237bc_FreeMsg((int)v10, v12);
    Function_200b3f0((uint *)v8, v13);
  }
  else
  {
    v7 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a2 + 72), 8u);
  }
  Function_201a7a0((int)&v17);
  Function_201a870(*(uint **)(v4 + 36), (int)&v17, 20, 2, 0, 0);
  Function_201d78c((int)&v17, 0);
  Function_2012be0(*(int ***)(v16 + 8), *(uint *)(v16 + 12), (int)&v17, 0x66u);
  Function_20237bc_FreeMsg((int)v7, v14);
  return Function_201a8fc((int)&v17);
}

//----- (022449B8) --------------------------------------------------------
uint __fastcall Function_22449b8(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  char *v6;
  int *v7;
  ushort *v8;
  ushort *v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v3 = a2;
  v4 = a1;
  v5 = *(uint *)(a1 + 2144);
  Function_22302a8(a1, 2u, a3);
  Function_201ff0c(4u, 1);
  Function_201a7a0(v4 + 2212);
  Function_201a7e8(*(uint **)(v4 + 36), v4 + 2212, 2, 1, 19, 0x1Eu, 4u, 14, 300);
  if ( v3 == 100 )
  {
    v6 = *(char **)(v5 + 128);
    v7 = (int *)Function_2231690(0x66u);
    v8 = (ushort *)Function_2023790(255, 0x66u);
    v9 = Function_2030b94(v6, 0x66u);
    Function_22349a8(v4, (int)v9);
    v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 72), 0x64u);
    Function_200b48c(v7, 0, (int)v9);
    Function_200c388((uint *)v7, (int)v8, (int)v10);
    Function_20237bc_FreeMsg((int)v9, v11);
    Function_20237bc_FreeMsg((int)v10, v12);
    Function_200b3f0((uint *)v7, v13);
  }
  else
  {
    v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v4 + 72), v3);
  }
  Function_201ada4_ClearTextBox(v4 + 2212, 204);
  Function_201d78c(v4 + 2212, 0);
  Function_201a9a4(v4 + 2212);
  return Function_20237bc_FreeMsg((int)v8, v14);
}

//----- (02244AB4) --------------------------------------------------------
uint __fastcall Function_2244ab4(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  char *v6;
  int *v7;
  ushort *v8;
  ushort *v9;
  ushort *v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  int *v15;
  ushort *v16;
  ushort *v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v3 = a1;
  v4 = a2;
  v5 = *(uint *)(a1 + 2144);
  if ( a2 == 100 )
  {
    v6 = *(char **)(v5 + 128);
    v7 = (int *)Function_2231690(0x66u);
    v8 = (ushort *)Function_2023790(255, 0x66u);
    v9 = Function_2030b94(v6, 0x66u);
    Function_22349a8(v3, (int)v9);
    v10 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), v4);
    Function_200b48c(v7, 0, (int)v9);
    Function_200c388((uint *)v7, (int)v8, (int)v10);
    Function_20237bc_FreeMsg((int)v9, v11);
    Function_20237bc_FreeMsg((int)v10, v12);
    Function_200b3f0((uint *)v7, v13);
  }
  else if ( a2 == 102 )
  {
    v14 = *(char **)(v3 + 4 * a3 + 2188);
    v15 = (int *)Function_2231690(0x66u);
    v8 = (ushort *)Function_2023790(255, 0x66u);
    v16 = Function_2030b94(v14, 0x66u);
    Function_22349a8(v3, (int)v16);
    v17 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 0x66u);
    Function_200b48c(v15, 0, (int)v16);
    Function_200c388((uint *)v15, (int)v8, (int)v17);
    Function_20237bc_FreeMsg((int)v16, v18);
    Function_20237bc_FreeMsg((int)v17, v19);
    Function_200b3f0((uint *)v15, v20);
  }
  else
  {
    v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), a2);
  }
  Function_201ada4_ClearTextBox(v3 + 2212, 204);
  Function_201d78c(v3 + 2212, 0);
  Function_201a9a4(v3 + 2212);
  return Function_20237bc_FreeMsg((int)v8, v21);
}

//----- (02244BE4) --------------------------------------------------------
int __fastcall Function_2244be4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  int result;
  int v13;
  int v14;
  uint *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v25 = a4;
  v4 = *(uint *)(a1 + 2144);
  v13 = a1;
  v21 = 8;
  v22 = 8;
  v23 = 8;
  v24 = 3;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 1;
  Function_223136c(a1, 2);
  v15 = (uint *)&v21;
  v14 = 105;
  v7 = 0;
  v8 = v4 + 16;
  v9 = (uint *)&v17;
  v16 = v13 + 20;
  do
  {
    *(uint *)(v4 + 20) = Function_22313e0(v13, 2, v5, v6);
    Function_223118c(v8, v16, 2);
    Function_223124c(v8, v16, *v15);
    if ( v7 != 3 )
      Function_22448e0(v8, v13, v7 + 1, v10);
    Function_200d4c4(*(int **)(v4 + 20), 50, (short)v14);
    Function_200d364(*(int **)(v4 + 20), *v9);
    Function_20128c4(*(uint **)(v4 + 24), 36, -8, v11);
    Function_20129d0(*(uint **)(v4 + 24), 1);
    ++v7;
    ++v15;
    v4 += 28;
    result = v14 + 36;
    v8 += 28;
    ++v9;
    v14 += 36;
  }
  while ( v7 < 4 );
  return result;
}

//----- (02244CA4) --------------------------------------------------------
int __fastcall Function_2244ca4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = 0;
  v4 = *(uint *)(a1 + 2144) + 16;
  do
  {
    Function_22312b0(v4);
    Function_200d0f4(*(uint *)(v2 + 20));
    ++v3;
    v4 += 28;
    v2 += 28;
  }
  while ( v3 < 4 );
  return Function_22313bc(v1);
}

//----- (02244CD4) --------------------------------------------------------
int __fastcall Function_2244cd4(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  int v9;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = Function_202fe04();
  v4 = Function_202fe98(v3, 4u, 0);
  if ( Function_2234970(v1, v4, v5) )
  {
    v6 = *(uint *)(v1 + 8);
    if ( v6 <= 5 )
      JUMPOUT(__CS__, *((short *)&off_2244D10 + v6) + 35933458);
    switch ( (uchar)v6 )
    {
      case 0:
        Function_2234540(v1, 1);
        if ( v2[115] )
          Function_2232394((int)(v2 + 32), v1);
        else
          Function_2234228((int)(v2 + 67), v1);
        Function_2234540(v1, 0);
        Function_22455c4(v1);
        Function_201ff0c(4u, 0);
        Function_201ff74(4u, 0);
        ++*(uint *)(v1 + 8);
        break;
      case 1:
        Function_2231664(v2 + 2, 1);
        if ( Function_22315e0(v2, v2 + 1, 1, 0) )
        {
          Function_2234540(v1, 1);
          Function_2245d50(v1);
          Function_2244be4(v1, v7, v8, v9);
          Function_2234540(v1, 0);
          Function_2019ebc(*(uint **)(v1 + 36), 3u);
          Function_2019ebc(*(uint **)(v1 + 36), 7u);
          ++*(uint *)(v1 + 8);
        }
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
        break;
      case 2:
        Function_2231aac(v1, 0x115u);
        ++*(uint *)(v1 + 8);
        break;
      case 3:
        if ( Function_2022798() )
        {
          Function_2231b8c(v1);
          Function_2019ebc(*(uint **)(v1 + 36), 2u);
          Function_2019ebc(*(uint **)(v1 + 36), 6u);
          Function_201ff74(4u, 0);
          Function_201ff0c(4u, 0);
          ++*(uint *)(v1 + 8);
        }
        break;
      case 4:
        Function_2231664(v2 + 2, 1);
        if ( Function_22315e0(v2, v2 + 1, 1, 0) )
        {
          Function_2244ca4(v1);
          ++*(uint *)(v1 + 8);
        }
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
        break;
      case 5:
        Function_2024034(v2[386]);
        Function_2024034(v2[387]);
        Function_2024034(v2[388]);
        Function_2231688(v2 + 2);
        Function_2234540(v1, 1);
        Function_22444a0(v1);
        Function_223146c((int **)v1);
        Function_2234540(v1, 0);
        Function_223376c(v1, 1);
        ++*(uint *)(v1 + 8);
        break;
      default:
        if ( Function_2233790(v1) )
        {
          if ( Function_2231664(v2 + 2, 0) )
          {
            Function_22318e8(v1);
            Function_2231688(v2 + 2);
            Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
            Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
            Function_222fb60((uint *)v1, 5);
            free((int)v2);
            Function_2019ebc(*(uint **)(v1 + 36), 2u);
            Function_2019ebc(*(uint **)(v1 + 36), 6u);
            Function_2019ebc(*(uint **)(v1 + 36), 3u);
            Function_2019ebc(*(uint **)(v1 + 36), 7u);
            if ( Function_202f250() == 1 )
              Function_202f22c();
          }
          else
          {
            Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, v2[2], *(uint *)(v1 + 88));
            Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
          }
        }
        break;
    }
  }
  else if ( Function_2245ecc(v1) )
  {
    Function_222fb60((uint *)v1, 13);
  }
  return 0;
}

//----- (02244F7C) --------------------------------------------------------
int __fastcall Function_2244f7c(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 1548));
  return 0;
}

//----- (02244F94) --------------------------------------------------------
int __fastcall Function_2244f94(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2246640() )
    Function_222fb60(v1, 8);
  return 0;
}

//----- (02244FAC) --------------------------------------------------------
int __fastcall Function_2244fac(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2246428() )
    Function_222fb60(v1, 8);
  return 0;
}

//----- (02244FC4) --------------------------------------------------------
int __fastcall Function_2244fc4(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2245fe4() )
    Function_222fb60(v1, 16);
  return 0;
}

//----- (02244FDC) --------------------------------------------------------
int __fastcall Function_2244fdc(int a1)
{
  Function_202404c(*(int **)(*(uint *)(a1 + 2144) + 1552));
  return 0;
}

//----- (02244FF4) --------------------------------------------------------
int __fastcall Function_2244ff4(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_2246090() )
    Function_222fb60(v1, 13);
  return 0;
}

//----- (0224500C) --------------------------------------------------------
int Function_224500c()
{
  Function_224613c();
  return 0;
}

//----- (02245018) --------------------------------------------------------
int __fastcall Function_2245018(uint *a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int *v7;

  v1 = (int)a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 <= 5 )
    JUMPOUT(__CS__, *((short *)&off_2245038 + v3) + 35934266);
  switch ( (uchar)v3 )
  {
    case 0:
      if ( Function_2233790((int)a1) )
      {
        Function_22315c8((int *)v2, (int *)(v2 + 4), 0);
        *(uchar *)(v2 + 1948) = *(uchar *)(v1 + 9732);
        *(uint *)(v2 + 1212) = v1 + 2232;
        *(uint *)(v1 + 2228) = *(uint *)(v2 + 1212);
        Function_223371c(v1);
        Function_22443ec(v1);
        Function_2019ebc(*(uint **)(v1 + 36), 2u);
        Function_2019ebc(*(uint **)(v1 + 36), 6u);
        Function_201ff74(4u, 0);
        Function_201ff0c(4u, 0);
        Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
        Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
        Function_223376c(v1, 0);
        ++*(uint *)(v1 + 8);
      }
      break;
    case 1:
      if ( Function_2233790((int)a1) && Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 1) )
      {
        Function_2019060(0, 1);
        Function_2019060(1u, 3);
        Function_2019060(2u, 0);
        Function_2019060(3u, 1);
        Function_2019060(4u, 1);
        Function_2019060(5u, 3);
        Function_2019060(6u, 0);
        Function_2019060(7u, 2);
        *(uint *)(v2 + 1544) = Function_2023fcc((int)dword_224919C, 4u, (int)Function_22457a0, v1, 0x66u);
        *(uint *)(v2 + 1548) = Function_2023fcc((int)dword_224915C, 4u, (int)Function_2245800, v1, 0x66u);
        *(uint *)(v2 + 1552) = Function_2023fcc((int)dword_224913C, 2u, (int)Function_2245868, v1, 0x66u);
        ++*(uint *)(v1 + 8);
      }
      break;
    case 2:
      Function_2245c64(a1);
      Function_2245640(v1);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_2234540(v1, 1);
      if ( *(uint *)(v2 + 460) )
      {
        Function_2232378((char **)(v2 + 128), v1, v4, v5);
        Function_22323b8(v2 + 128, 0);
        Function_200710c(*(uint *)(v1 + 20), 0x50u, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      }
      else
      {
        Function_2234214(v2 + 268, v1);
        Function_223427c(v2 + 268, 0);
        v6 = Function_2233fec(v2 + 268);
        Function_22343b8(v1, v6, 3u);
      }
      Function_2234540(v1, 0);
      Function_200710c(*(uint *)(v1 + 20), 6u, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      ++*(uint *)(v1 + 8);
      break;
    case 3:
      v7 = (int *)a1[536];
      *(uint *)(v2 + 8) = 0;
      if ( Function_22315e0(v7, (uint *)(v2 + 4), 0, 0) )
      {
        if ( *(uint *)(v2 + 460) )
          Function_22323b8(v2 + 128, 1);
        else
          Function_223427c(v2 + 268, 1);
        Function_201ff74(4u, 1);
        Function_201ff0c(4u, 1);
        Function_201ff74(8u, 1);
        Function_201ff0c(8u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      break;
    case 4:
      Function_200f174(0, 1, 1, 0, 6, 1, 102);
      ++*(uint *)(v1 + 8);
      break;
    case 5:
      if ( Function_200f2ac() == 1 )
        ++*(uint *)(v1 + 8);
      break;
    default:
      ++a1[438];
      Function_2230098(a1);
      Function_222fb60((uint *)v1, 8);
      break;
  }
  return 0;
}

//----- (02245334) --------------------------------------------------------
int __fastcall Function_2245334(int a1)
{
  uint *v1;

  v1 = (uint *)a1;
  Function_2234358(a1, *(uint *)(a1 + 1776), 128, 96);
  Function_208b9e0(v1[444], 1);
  Function_208ba08(v1[444], 24, 24);
  Function_222fb60(v1, 3);
  return 0;
}

//----- (0224536C) --------------------------------------------------------
int __fastcall Function_224536c(uint *a1)
{
  uint *v1;
  int v2;
  uint v3;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = a1[536];
  v3 = a1[2];
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_224538C + v3) + 35935118);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2231aac((int)a1, 0x77u);
      Function_2005748(0x565u);
      ++v1[2];
      return 0;
    case 1:
      if ( !Function_22411b8((int)a1) )
        return 0;
      Function_202f298(v1[524], 0x66u, &v7, 0, 0);
      *(uint *)(v2 + 464) = Function_2030a80(0x66u);
      Function_2030aa0(*(uint *)(v2 + 464), v1[524]);
      v5 = Function_224112c((int)v1);
      if ( ((int (__fastcall *)(int, uint))dword_222B338[0])(v5, *(uint *)(v2 + 464)) == 1 )
      {
        Call_free7(*(uint *)(v2 + 464));
        ++v1[2];
      }
      return 0;
    case 2:
      if ( !Function_22411b8((int)a1) )
        return 0;
      Function_202f22c();
      Function_2231b8c((int)v1);
      v6 = Function_224112c((int)v1);
      if ( ((int (__fastcall *)(int, int *))dword_222BB48[0])(v6, &v8) == 1 )
      {
        Function_20057a4(1381, 0);
        Function_22348b8((int)v1, 6u, *(uint *)(v8 + 12), *(uint *)(v8 + 4));
        Function_208b9e0(v1[444], 0);
        Function_208ba08(v1[444], 0, 0);
        v1[2] = 255;
      }
      else
      {
        Function_2231aac((int)v1, 0x77u);
        Function_22469a0(v2, v1);
        Function_20057a4(1381, 0);
        Function_2005748(0x55Fu);
        ++v1[2];
      }
      return 0;
    case 3:
      if ( Function_2022798() )
      {
        Function_2231b8c((int)v1);
        ++v1[2];
      }
      return 0;
    default:
      Function_208b9e0(a1[444], 0);
      Function_208ba08(v1[444], 0, 0);
      Function_2233704((int)v1, 46);
      Function_222fb60(v1, 4);
      return 0;
  }
}

//----- (022454D8) --------------------------------------------------------
int __fastcall Function_22454d8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  if ( *(uint *)(a1 + 8) )
  {
    if ( Function_2233790(a1) )
    {
      if ( Function_2231664((int *)(v2 + 8), 0) )
      {
        Function_22318e8(v1);
        Function_2231688((uint *)(v2 + 8));
        Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
        Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
        Function_222fb60((uint *)v1, 5);
        free(v2);
        Function_2019ebc(*(uint **)(v1 + 36), 2u);
        Function_2019ebc(*(uint **)(v1 + 36), 6u);
        Function_2019ebc(*(uint **)(v1 + 36), 3u);
        Function_2019ebc(*(uint **)(v1 + 36), 7u);
      }
      else
      {
        Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
        Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      }
    }
  }
  else
  {
    Function_2231688((uint *)(v2 + 8));
    Function_2230060(v1);
    Function_2234540(v1, 1);
    Function_223146c((int **)v1);
    Function_2234540(v1, 0);
    Function_223376c(v1, 1);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (022455C4) --------------------------------------------------------
uint __fastcall Function_22455c4(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  Function_201acf4(v1 + 1748);
  return Function_201a8fc(v1 + 1748);
}

//----- (022455E4) --------------------------------------------------------
int __fastcall Function_22455e4(int a1, uint a2)
{
  int v2;
  int v3;
  uint v4;
  ushort *v5;
  int v6;

  v2 = a1;
  v3 = *(uint *)(a1 + 2144);
  v4 = a2;
  Function_201ada4_ClearTextBox(v3 + 1748, 0);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 72), v4);
  Function_223429c(v3 + 1748, (int)v5);
  Function_201d78c(v3 + 1748, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  return Function_201a9a4(v3 + 1748);
}

//----- (02245640) --------------------------------------------------------
int __fastcall Function_2245640(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_201a7a0(v2 + 1748);
  Function_201a7e8(*(uint **)(v1 + 36), v2 + 1748, 6, 8, 3, 0x10u, 2u, 14, 1);
  return Function_22455e4(v1, *(uint *)(v2 + 460) + 121);
}

//----- (0224568C) --------------------------------------------------------
int __fastcall Function_224568c(int a1)
{
  int v1;
  int v2;
  ushort *v3;
  int v4;
  ushort *v5;
  int v6;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_201a7a0(v2 + 1748);
  Function_201a7e8(*(uint **)(v1 + 36), v2 + 1748, 6, 4, 6, 0xAu, 2u, 14, 1);
  Function_201ada4_ClearTextBox(v2 + 1748, 0);
  v3 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x82u);
  Function_223429c(v2 + 1748, (int)v3);
  Function_201d78c(v2 + 1748, 0);
  Function_20237bc_FreeMsg((int)v3, v4);
  Function_201a9a4(v2 + 1748);
  Function_201a7a0(v2 + 1764);
  Function_201a7e8(*(uint **)(v1 + 36), v2 + 1764, 6, 18, 6, 0xAu, 2u, 14, 21);
  Function_201ada4_ClearTextBox(v2 + 1764, 0);
  v5 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x83u);
  Function_223429c(v2 + 1764, (int)v5);
  Function_201d78c(v2 + 1764, 0);
  Function_20237bc_FreeMsg((int)v5, v6);
  return Function_201a9a4(v2 + 1764);
}

//----- (0224576C) --------------------------------------------------------
uint __fastcall Function_224576c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  Function_201acf4(v1 + 1748);
  Function_201a8fc(v1 + 1748);
  Function_201acf4(v1 + 1764);
  return Function_201a8fc(v1 + 1764);
}

//----- (022457A0) --------------------------------------------------------
uint *__fastcall Function_22457a0(uint *result, int a2, int a3)
{
  uint *v3;

  v3 = (uint *)a3;
  if ( !a2 )
  {
    switch ( (uchar)result )
    {
      case 0:
        Function_2234520(a3);
        result = Function_222fb60(v3, 9);
        break;
      case 1:
        Function_2234520(a3);
        result = Function_222fb60(v3, 10);
        break;
      case 2:
        Function_2234520(a3);
        result = Function_222fb60(v3, 12);
        break;
      case 3:
        Function_2234520(a3);
        result = Function_222fb60(v3, 11);
        break;
      default:
        return result;
    }
  }
  return result;
}

//----- (02245800) --------------------------------------------------------
uint *__fastcall Function_2245800(uint *result, int a2, uint *a3)
{
  uint *v3;
  int v4;

  v3 = a3;
  v4 = a3[536];
  if ( !a2 )
  {
    switch ( 0 )
    {
      case 0:
      case 1:
      case 2:
        *(uint *)(v4 + 456) = (char *)result + 1;
        if ( a3[*(uint *)(v4 + 456) + 547] )
          Function_222fb60(a3, 15);
        else
          Function_222fb60(a3, 18);
        result = (uint *)Function_2234520((int)v3);
        break;
      case 3:
        Function_2234520((int)a3);
        result = Function_222fb60(v3, 14);
        break;
      default:
        return result;
    }
  }
  return result;
}

//----- (02245868) --------------------------------------------------------
uint *__fastcall Function_2245868(uint *result, int a2, int a3)
{
  uint *v3;

  v3 = (uint *)a3;
  if ( !a2 )
  {
    if ( result )
    {
      if ( result == (uint *)1 )
      {
        Function_2234520(a3);
        result = Function_222fb60(v3, 17);
      }
    }
    else
    {
      Function_2234520(a3);
      Function_224576c((int)v3);
      result = Function_222fb60(v3, 18);
    }
  }
  return result;
}

//----- (022458A0) --------------------------------------------------------
uint *__fastcall Function_22458a0(char a1, int a2, int a3)
{
  char v3;
  uint *v4;
  uint *result;
  int v6;
  uint v7;

  v3 = a1;
  v4 = (uint *)a3;
  result = (uint *)2144;
  v6 = *(uint *)(a3 + 2144);
  if ( !a2 )
  {
    switch ( 0 )
    {
      case 0:
        Function_2234520(a3);
        *(uchar *)(v6 + 1221) = v3;
        result = Function_222fb60(v4, 5);
        break;
      case 1:
        Function_2234520(a3);
        *(uchar *)(v6 + 1221) = v3;
        result = Function_222fb60(v4, 5);
        break;
      case 2:
        v7 = Function_2030bfc(*(uint *)(a3 + 2188));
        Function_2234520((int)v4);
        if ( v7 )
        {
          *(uchar *)(v6 + 1221) = v3;
          result = Function_222fb60(v4, 5);
        }
        else
        {
          Function_2005748(0x564u);
          result = (uint *)Function_2231b3c((int)v4, 0x80u);
        }
        break;
      case 3:
        Function_2234520(a3);
        result = Function_222fb60(v4, 4);
        break;
      case 4:
        Function_2234520(a3);
        if ( Function_2241780((int)v4) )
        {
          result = Function_222fb60(v4, 12);
        }
        else
        {
          Function_2005748(0x564u);
          result = (uint *)Function_2231b3c((int)v4, 0x74u);
        }
        break;
      default:
        return result;
    }
  }
  return result;
}

//----- (02245968) --------------------------------------------------------
int __fastcall Function_2245968(int result, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = result;
  v5 = a3;
  if ( !a2 )
  {
    if ( Function_2242748(a3, result, a3, a4) )
      result = Function_22427d0(v5, v4, v6, v7);
    else
      result = Function_2005748(0x564u);
  }
  return result;
}

//----- (02245994) --------------------------------------------------------
uint *__fastcall Function_2245994(uint *result, int a2, int a3)
{
  uint *v3;
  int v4;

  v3 = (uint *)a3;
  v4 = *(uint *)(a3 + 2144);
  if ( !a2 )
  {
    switch ( (uchar)result )
    {
      case 0:
        Function_2234520(a3);
        result = Function_222fb60(v3, 19);
        break;
      case 1:
        Function_2234520(a3);
        if ( Function_202f250() )
        {
          result = Function_222fb60(v3, 20);
        }
        else
        {
          *(uint *)(v4 + 12) = 20;
          result = Function_222fb60(v3, 29);
        }
        break;
      case 2:
        Function_2234520(a3);
        if ( Function_202f250() )
        {
          result = Function_222fb60(v3, 22);
        }
        else
        {
          *(uint *)(v4 + 12) = 22;
          result = Function_222fb60(v3, 29);
        }
        break;
      case 3:
        Function_2234520(a3);
        result = Function_222fb60(v3, 21);
        break;
      default:
        return result;
    }
  }
  return result;
}

//----- (02245A28) --------------------------------------------------------
uint *__fastcall Function_2245a28(uint *result, int a2, uint *a3)
{
  uint *v3;
  int v4;

  v3 = a3;
  v4 = a3[536];
  if ( !a2 )
  {
    switch ( 0 )
    {
      case 0:
      case 1:
      case 2:
        *(uint *)(v4 + 456) = (char *)result + 1;
        if ( a3[*(uint *)(v4 + 456) + 547] )
          Function_222fb60(a3, 25);
        else
          Function_222fb60(a3, 28);
        result = (uint *)Function_2234520((int)v3);
        break;
      case 3:
        Function_2234520((int)a3);
        result = Function_222fb60(v3, 24);
        break;
      default:
        return result;
    }
  }
  return result;
}

//----- (02245A90) --------------------------------------------------------
uint *__fastcall Function_2245a90(uint *result, int a2, int a3)
{
  uint *v3;

  v3 = (uint *)a3;
  if ( !a2 )
  {
    if ( result )
    {
      if ( result == (uint *)1 )
      {
        Function_2234520(a3);
        result = Function_222fb60(v3, 27);
      }
    }
    else
    {
      Function_2234520(a3);
      Function_224576c((int)v3);
      result = Function_222fb60(v3, 28);
    }
  }
  return result;
}

//----- (02245AC8) --------------------------------------------------------
int __fastcall Function_2245ac8(int a1, int a2)
{
  uint **v2;
  uint *v3;
  int v4;
  int v5;

  v2 = *(uint ***)(a1 + 2144);
  v3 = v2[5];
  if ( a2 )
  {
    Function_200d3f4(v3, 0);
    Function_20129d0(v2[6], 0);
    Function_200d4c4(v2[12], 80, 168);
  }
  else
  {
    Function_200d3f4(v3, 1);
    Function_20129d0(v2[6], 1);
    Function_200d4c4(v2[12], 128, 168);
  }
  Function_20128c4(v2[6], 36, -8, v4);
  return Function_20128c4(v2[13], 36, -8, v5);
}

//----- (02245B24) --------------------------------------------------------
int __fastcall Function_2245b24(int a1)
{
  int v1;
  int **v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = *(int ***)(a1 + 2144);
  Function_22312cc(a1, 1);
  v2[5] = Function_22313e0(v1, 1, v3, v4);
  v2[12] = Function_22313e0(v1, 1, v5, v6);
  Function_223118c((int)(v2 + 4), v1 + 20, 1);
  Function_223118c((int)(v2 + 11), v1 + 20, 1);
  Function_223124c((int)(v2 + 4), v1 + 20, 3u);
  Function_223124c((int)(v2 + 11), v1 + 20, 0x6Fu);
  Function_200d4c4(v2[5], 32, 168);
  Function_200d4c4(v2[12], 128, 168);
  Function_20128c4(v2[6], 36, -8, v7);
  Function_20128c4(v2[13], 36, -8, v8);
  Function_20129d0(v2[6], 1);
  Function_20129d0(v2[13], 1);
  Function_200d364(v2[5], 0);
  Function_200d364(v2[12], 1u);
  return Function_2245ac8(v1, 0);
}

//----- (02245BD8) --------------------------------------------------------
int __fastcall Function_2245bd8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_22312b0(*(uint *)(a1 + 2144) + 16);
  Function_22312b0(v2 + 44);
  Function_200d0f4(*(uint *)(v2 + 20));
  Function_200d0f4(*(uint *)(v2 + 48));
  return Function_22313bc(v1);
}

//----- (02245C08) --------------------------------------------------------
int __fastcall Function_2245c08(int a1, int a2)
{
  uint **v2;
  uint *v3;
  int v4;
  int v5;

  v2 = *(uint ***)(a1 + 2144);
  v3 = v2[12];
  if ( a2 )
  {
    Function_200d3f4(v3, 0);
    Function_20129d0(v2[13], 0);
    Function_200d4c4(v2[5], 80, 232);
  }
  else
  {
    Function_200d3f4(v3, 1);
    Function_20129d0(v2[13], 1);
    Function_200d4c4(v2[5], 32, 232);
  }
  Function_20128c4(v2[6], 36, -8, v4);
  return Function_20128c4(v2[13], 36, -8, v5);
}

//----- (02245C64) --------------------------------------------------------
int __fastcall Function_2245c64(int a1)
{
  int v1;
  int **v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = *(int ***)(a1 + 2144);
  Function_22312cc(a1, 2);
  v2[5] = Function_22313e0(v1, 2, v3, v4);
  v2[12] = Function_22313e0(v1, 2, v5, v6);
  Function_223118c((int)(v2 + 4), v1 + 20, 2);
  Function_223118c((int)(v2 + 11), v1 + 20, 2);
  if ( *(uint *)(v1 + 2156) == 210 )
  {
    Function_223124c((int)(v2 + 4), v1 + 20, 3u);
    Function_223124c((int)(v2 + 11), v1 + 20, 0x6Fu);
    Function_200d364(v2[5], 0);
    Function_200d364(v2[12], 1u);
  }
  else
  {
    Function_223124c((int)(v2 + 4), v1 + 20, 3u);
    Function_223124c((int)(v2 + 11), v1 + 20, 0x5Eu);
    Function_200d364(v2[5], 0);
    Function_200d364(v2[12], 3u);
  }
  Function_200d4c4(v2[5], 32, 232);
  Function_200d4c4(v2[12], 128, 232);
  Function_20128c4(v2[6], 36, -8, v7);
  Function_20128c4(v2[13], 36, -8, v8);
  Function_20129d0(v2[6], 1);
  Function_20129d0(v2[13], 1);
  return Function_2245c08(v1, 0);
}

//----- (02245D50) --------------------------------------------------------
int __fastcall Function_2245d50(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  Function_22312b0(*(uint *)(a1 + 2144) + 16);
  Function_22312b0(v2 + 44);
  Function_200d0f4(*(uint *)(v2 + 20));
  Function_200d0f4(*(uint *)(v2 + 48));
  return Function_22313bc(v1);
}

//----- (02245D80) --------------------------------------------------------
int __fastcall Function_2245d80(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_2245D9E + v3) + 35937696);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2234540(a1, 1);
      if ( *(uint *)(v2 + 460) )
        Function_2232394(v2 + 128, v1);
      else
        Function_2234228(v2 + 268, v1);
      Function_2234540(v1, 0);
      Function_201ff0c(4u, 0);
      ++*(uint *)(v1 + 8);
      goto LABEL_20;
    case 1:
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 1, 1) )
        ++*(uint *)(v1 + 8);
      goto LABEL_20;
    case 2:
      Function_2234540(a1, 1);
      if ( *(uint *)(v2 + 460) )
      {
        Function_2234214(v2 + 268, v1);
        Function_223427c(v2 + 268, 0);
        v6 = Function_2233fec(v2 + 268);
        Function_22343b8(v1, v6, 3u);
      }
      else
      {
        Function_2232378((char **)(v2 + 128), v1, v4, v5);
        Function_22323b8(v2 + 128, 0);
        Function_22343b8(v1, 0x50u, 3u);
      }
      Function_2234540(v1, 0);
      ++*(uint *)(v1 + 8);
      goto LABEL_20;
    case 3:
      if ( Function_22315e0(*(int **)(a1 + 2144), (uint *)(v2 + 4), 0, 1) )
      {
        if ( *(uint *)(v2 + 460) )
          Function_223427c(v2 + 268, 1);
        else
          Function_22323b8(v2 + 128, 1);
        Function_201ff74(4u, 1);
        Function_201ff0c(4u, 1);
        ++*(uint *)(v1 + 8);
      }
LABEL_20:
      result = 0;
      break;
    default:
      *(uint *)(v2 + 460) ^= 1u;
      Function_22455e4(a1, *(uint *)(v2 + 460) + 121);
      result = 1;
      break;
  }
  return result;
}

//----- (02245ECC) --------------------------------------------------------
int __fastcall Function_2245ecc(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2231664(v2 + 2, 1);
      if ( Function_22315e0(v2, v2 + 1, 1, 0) )
      {
        Function_2234540(v1, 1);
        Function_2245d50(v1);
        Function_2244be4(v1, v4, v5, v6);
        Function_2234540(v1, 0);
        Function_2019ebc(*(uint **)(v1 + 36), 3u);
        Function_2019ebc(*(uint **)(v1 + 36), 7u);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
    }
    else
    {
      if ( v3 != 2 )
        return 1;
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 1) )
      {
        Function_22449b8(v1, 0x64u, 0);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
    }
  }
  else
  {
    Function_2234540(a1, 1);
    if ( v2[115] )
      Function_2232394((int)(v2 + 32), v1);
    else
      Function_2234228((int)(v2 + 67), v1);
    Function_2234540(v1, 0);
    Function_22455c4(v1);
    Function_201ff0c(4u, 0);
    Function_201ff74(4u, 0);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (02245FE4) --------------------------------------------------------
int __fastcall Function_2245fe4(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 != 1 )
      return 1;
    if ( Function_22315e0(v2, v2 + 1, 0, 2) )
    {
      Function_224568c(v1);
      Function_201ff74(4u, 1);
      ++*(uint *)(v1 + 8);
    }
  }
  else
  {
    Function_2231664(v2 + 2, 1);
    if ( Function_22315e0(v2, v2 + 1, 1, 2) )
    {
      Function_200710c(*(uint *)(v1 + 20), 0x54u, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_2244ab4(v1, 0x66u, v2[114]);
      ++*(uint *)(v1 + 8);
    }
    Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
  }
  return 0;
}

//----- (02246090) --------------------------------------------------------
int __fastcall Function_2246090(int a1)
{
  int v1;
  int *v2;
  int v3;

  v1 = a1;
  v2 = *(int **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( Function_22315e0(v2, v2 + 1, 1, 2) )
      {
        Function_224576c(v1);
        Function_2019ebc(*(uint **)(v1 + 36), 6u);
        Function_2019ebc(*(uint **)(v1 + 36), 7u);
        ++*(uint *)(v1 + 8);
      }
    }
    else
    {
      if ( v3 != 2 )
        return 1;
      Function_2231664(v2 + 2, 0);
      if ( Function_22315e0(v2, v2 + 1, 0, 2) )
      {
        Function_2244ab4(v1, 0x64u, 0);
        Function_201ff74(4u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, v2[2], *(uint *)(v1 + 88));
    }
  }
  else
  {
    Function_201ff74(4u, 0);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (0224613C) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02246428) --------------------------------------------------------
int __fastcall Function_2246428(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  v3 = *(uint *)(a1 + 2144);
  if ( v2 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_2246448 + v2) + 35939402);
  switch ( (uchar)v2 )
  {
    case 0:
      Function_2019ebc(*(uint **)(a1 + 36), 2u);
      Function_2019ebc(*(uint **)(v1 + 36), 6u);
      Function_201ff74(4u, 0);
      Function_201ff0c(4u, 0);
      ++*(uint *)(v1 + 8);
      goto LABEL_21;
    case 1:
      Function_2231664((int *)(v3 + 8), 1);
      if ( Function_22315e0((int *)v3, (uint *)(v3 + 4), 1, 0) )
        ++*(uint *)(v1 + 8);
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v3 + 8), *(uint *)(v1 + 88));
      goto LABEL_21;
    case 2:
      if ( *(uint *)(a1 + 2156) == 210 )
      {
        Function_223124c(v3 + 16, a1 + 20, 3u);
        Function_223124c(v3 + 44, v1 + 20, 0x5Eu);
        Function_200d364(*(int **)(v3 + 20), 0);
        Function_200d364(*(int **)(v3 + 48), 3u);
      }
      Function_22455c4(v1);
      Function_2245640(v1);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_2234540(v1, 1);
      if ( *(uint *)(v3 + 460) )
      {
        Function_2232394(v3 + 128, v1);
        Function_2232378((char **)(v3 + 128), v1, v5, v6);
        Function_22323b8(v3 + 128, 0);
        Function_200710c(*(uint *)(v1 + 20), 0x50u, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      }
      else
      {
        Function_2234228(v3 + 268, v1);
        Function_2234214(v3 + 268, v1);
        Function_223427c(v3 + 268, 0);
        v4 = Function_2233fec(v3 + 268);
        Function_22343b8(v1, v4, 3u);
      }
      Function_2234540(v1, 0);
      Function_200710c(*(uint *)(v1 + 20), 6u, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      ++*(uint *)(v1 + 8);
      goto LABEL_21;
    case 3:
      Function_2231664((int *)(v3 + 8), 0);
      if ( Function_22315e0((int *)v3, (uint *)(v3 + 4), 0, 0) )
      {
        if ( *(uint *)(v3 + 460) )
          Function_22323b8(v3 + 128, 1);
        else
          Function_223427c(v3 + 268, 1);
        Function_201ff74(4u, 1);
        Function_201ff0c(4u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v3 + 8), *(uint *)(v1 + 88));
LABEL_21:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (02246640) --------------------------------------------------------
int __fastcall Function_2246640(int a1)
{
  int v1;
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_2246660 + v3) + 35939938);
  switch ( (uchar)v3 )
  {
    case 0:
      Function_2231a88(a1);
      Function_2019ebc(*(uint **)(v1 + 36), 2u);
      Function_2019ebc(*(uint **)(v1 + 36), 6u);
      Function_201ff74(4u, 0);
      Function_201ff0c(4u, 0);
      ++*(uint *)(v1 + 8);
      goto LABEL_21;
    case 1:
      Function_2231664((int *)(v2 + 8), 1);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 1, 0) )
      {
        Function_2244ca4(v1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      goto LABEL_21;
    case 2:
      Function_2245c64(a1);
      if ( *(uint *)(v1 + 2156) == 210 )
      {
        Function_223124c(v2 + 16, v1 + 20, 3u);
        Function_223124c(v2 + 44, v1 + 20, 0x5Eu);
        Function_200d364(*(int **)(v2 + 20), 0);
        Function_200d364(*(int **)(v2 + 48), 3u);
      }
      Function_2245640(v1);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_2234540(v1, 1);
      if ( *(uint *)(v2 + 460) )
      {
        Function_2232378((char **)(v2 + 128), v1, v4, v5);
        Function_22323b8(v2 + 128, 0);
        Function_200710c(*(uint *)(v1 + 20), 0x50u, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      }
      else
      {
        Function_2234214(v2 + 268, v1);
        Function_223427c(v2 + 268, 0);
        v6 = Function_2233fec(v2 + 268);
        Function_22343b8(v1, v6, 3u);
      }
      Function_2234540(v1, 0);
      Function_200710c(*(uint *)(v1 + 20), 6u, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      ++*(uint *)(v1 + 8);
      goto LABEL_21;
    case 3:
      Function_2231664((int *)(v2 + 8), 0);
      if ( Function_22315e0((int *)v2, (uint *)(v2 + 4), 0, 0) )
      {
        if ( *(uint *)(v2 + 460) )
          Function_22323b8(v2 + 128, 1);
        else
          Function_223427c(v2 + 268, 1);
        Function_201ff74(4u, 1);
        Function_201ff0c(4u, 1);
        ++*(uint *)(v1 + 8);
      }
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
LABEL_21:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

//----- (02246850) --------------------------------------------------------
int __fastcall Function_2246850(int a1)
{
  int v1;
  uint *v2;
  int v3;

  v1 = a1;
  v2 = *(uint **)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( Function_200f2ac() == 1 )
        ++*(uint *)(v1 + 8);
    }
    else
    {
      if ( v3 != 2 )
        return 1;
      Function_2234540(a1, 1);
      if ( v2[115] )
        Function_2232394((int)(v2 + 32), v1);
      else
        Function_2234228((int)(v2 + 67), v1);
      Function_2234540(v1, 0);
      Function_2024034(v2[386]);
      Function_2024034(v2[387]);
      Function_2024034(v2[388]);
      Function_2234540(v1, 1);
      Function_22444a0(v1);
      Function_22455c4(v1);
      Function_2245d50(v1);
      Function_22314a8((int **)v1);
      Function_2234540(v1, 0);
      Function_22300c8(v1, **(uint **)(v1 + 16));
      Function_208ba84(*(uint **)(v1 + 2152), 1, 0);
      ++*(uint *)(v1 + 8);
    }
  }
  else
  {
    Function_200f174(0, 0, 0, 0, 6, 1, 102);
    ++*(uint *)(v1 + 8);
  }
  return 0;
}

//----- (02246944) --------------------------------------------------------
int __fastcall Function_2246944(int result, uint *a2)
{
  int v2;
  int v3;
  int v4;

  v2 = *(uint *)(result + 2144);
  if ( *a2 != 1 )
  {
    v3 = Function_224112c(result);
    *(uint *)(v2 + 1200) = ((int (__fastcall *)(int))dword_222BBBC[141])(v3);
    result = 1204;
    *(uint *)(v2 + 1204) = v4;
  }
  return result;
}

//----- (02246968) --------------------------------------------------------
int __fastcall Function_2246968(int result, uint *a2)
{
  int v2;
  int v3;

  v2 = result;
  if ( *a2 != 1 )
  {
    v3 = Function_224112c(result);
    ((void (__fastcall *)(int, int))dword_222BE20[46])(v3, v2 + 2228);
    Function_223371c(v2);
    result = 9732;
    *(uchar *)(v2 + 9732) = *(uchar *)(*(uint *)(v2 + 2228) + 167);
  }
  return result;
}

//----- (0224699C) --------------------------------------------------------
void Function_224699c()
{
  ;
}

//----- (022469A0) --------------------------------------------------------
uint __fastcall Function_22469a0(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  uint v5;
  int v6;
  ushort *v7;
  ushort *v8;
  ushort *v9;
  uint v10;
  uint v11;
  int v12;
  int v13;
  ushort *v14;
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
  int v25;

  v2 = a1;
  v3 = a2;
  v4 = (int *)Function_2231690(0x66u);
  v5 = *(uint *)(v2 + 1200);
  v6 = *(uint *)(v2 + 1204);
  v7 = (ushort *)Function_2023790(255, 0x66u);
  v8 = (ushort *)Function_2023790(255, 0x66u);
  v9 = (ushort *)Function_2023790(255, 0x66u);
  ll_udiv();
  v11 = v10;
  v13 = v12;
  v14 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), 0x127u);
  v15 = Function_2023790(255, 0x66u);
  v16 = ull_mod(v5, v6, 100000LL);
  Function_20238a0(v7, v16, 5, 2, 1);
  v17 = ull_mod(v11, v13, 100000LL);
  Function_20238a0(v8, v17, 5, 2, 1);
  ll_udiv();
  Function_20238a0(v9, v18, 2, 2, 1);
  Function_200b48c(v4, 2u, (int)v7);
  Function_200b48c(v4, 1u, (int)v8);
  Function_200b48c(v4, 0, (int)v9);
  Function_200c388((uint *)v4, v15, (int)v14);
  Function_201ada4_ClearTextBox(v3 + 2212, 204);
  Function_201d78c(v3 + 2212, 0);
  Function_201a9a4(v3 + 2212);
  Function_20237bc_FreeMsg((int)v7, v19);
  Function_20237bc_FreeMsg((int)v8, v20);
  Function_20237bc_FreeMsg((int)v9, v21);
  Function_20237bc_FreeMsg((int)v14, v22);
  Function_20237bc_FreeMsg(v15, v23);
  Function_200c41c((uint *)v4, v24);
  return Function_200b3f0((uint *)v4, v25);
}

//----- (02246B00) --------------------------------------------------------
int __fastcall Function_2246b00(uint a1, int a2, uint *a3, int a4)
{
  int v4;
  uint v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  uint *v10;
  int v11;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = malloc(a1, 32);
  MI_CpuFill8((ushort *)v8, 0, 0x20u);
  *(uint *)v8 = v4;
  *(uint *)(v8 + 24) = Function_2023790(v4 + 1, v5);
  *(uint *)(v8 + 28) = v7;
  v9 = 0;
  v10 = v6;
  v11 = v8;
  do
  {
    ++v9;
    *(uint *)(v11 + 4) = *v10;
    ++v10;
    v11 += 4;
  }
  while ( v9 < 3 );
  *(uint *)(v8 + 4 * v9 + 4) = v6[v9 - 1];
  return v8;
}

//----- (02246B4C) --------------------------------------------------------
uint __fastcall Function_2246b4c(int a1, int a2)
{
  int v2;

  v2 = a1;
  if ( !*(uint *)(a1 + 24) )
    ErrorHandler();
  if ( !v2 )
    ErrorHandler();
  Function_20237bc_FreeMsg(*(uint *)(v2 + 24), a2);
  return free(v2);
}

//----- (02246B70) --------------------------------------------------------
uint *__fastcall Function_2246b70(uint *result, int a2)
{
  int v2;
  int v3;

  result[131] = result[130];
  result[130] = a2;
  result[132] = 0;
  result[133] = 0;
  result[134] = 0;
  result[135] = 0;
  v2 = result[130];
  if ( v2 )
  {
    result[132] = LOWORD(result[v2 + 120]);
    result[133] = HIWORD(result[result[130] + 120]);
  }
  v3 = result[131];
  if ( v3 )
  {
    result[134] = LOWORD(result[v3 + 120]);
    result[135] = HIWORD(result[result[131] + 120]);
  }
  return result;
}

//----- (02246BF4) --------------------------------------------------------
int __fastcall Function_2246bf4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int result;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;

  v29 = a4;
  *(uint *)(a1 + 664) = 1;
  *(ushort *)(a1 + 484) = 0;
  *(ushort *)(a1 + 486) = *(uint *)(a1 + 684);
  *(ushort *)(a1 + 488) = *(uint *)(a1 + 684);
  *(ushort *)(a1 + 490) = *(uint *)(a1 + 684) + *(uint *)(a1 + 688);
  *(ushort *)(a1 + 492) = *(uint *)(a1 + 684) + *(uint *)(a1 + 688);
  v21 = a1;
  *(ushort *)(a1 + 494) = *(ushort *)(a1 + 692) + *(ushort *)(a1 + 684) + *(ushort *)(a1 + 688);
  Function_2246b70((uint *)a1, 1);
  v4 = v21;
  v5 = 0;
  do
  {
    ++v5;
    v6 = *(uint *)(v4 + 684);
    v4 += 4;
    *(uint *)(v21 + 516) += v6;
  }
  while ( v5 < 3 );
  v23 = 56;
  v24 = 20;
  v25 = 8;
  v26 = 56;
  v27 = 12;
  v28 = 0;
  v7 = 0;
  if ( *(uint *)(v21 + 684) != 4 )
    v7 = 1;
  v8 = v21;
  v9 = 0;
  v10 = &v23 + 3 * v7;
  do
  {
    ++v9;
    *(ushort *)(v8 + 476) = *v10;
    ++v10;
    v8 += 2;
  }
  while ( v9 < 3 );
  *(ushort *)(v21 + 2 * v9 + 476) = *(&v23 + 3 * v7 + v9 - 1);
  v11 = v21;
  v12 = 0;
  v13 = 0;
  v14 = v21;
  do
  {
    ++v13;
    v12 += *(uint *)(v11 + 684);
    *(uint *)(v14 + 336) = v12 - 1;
    v11 += 4;
    v14 += 28;
  }
  while ( v13 < 2 );
  v15 = 0;
  v16 = 0;
  v22 = v21;
  v17 = v21;
  do
  {
    v18 = 0;
    if ( *(uint *)(v22 + 684) > 0 )
    {
      v19 = v17;
      do
      {
        *(uint *)(v19 + 4) = v16 + 1;
        ++v18;
        v19 += 28;
        v17 += 28;
        ++v15;
      }
      while ( v18 < *(uint *)(v21 + 4 * v16 + 684) );
    }
    v22 += 4;
    ++v16;
    result = *(uint *)(v21 + 516);
  }
  while ( v15 < result );
  return result;
}

//----- (02246D60) --------------------------------------------------------
uint *__fastcall Function_2246d60(uint *result, int a2)
{
  result[125] = a2;
  result[126] = 0;
  result[127] = 0;
  result[128] = 0;
  return result;
}

//----- (02246D78) --------------------------------------------------------
int __fastcall Function_2246d78(int a1, int a2, int a3, int a4)
{
  uint *v4;

  v4 = (uint *)a1;
  Function_2246bf4(a1, a2, a3, a4);
  Function_2247220(v4);
  Function_2247574(v4);
  Function_2247b48(v4);
  Function_2247754(v4);
  Function_2247b88(v4, 0);
  Function_224784c(v4);
  Function_2247ce0(v4);
  Function_2246d60(v4, 1);
  return 0;
}

//----- (02246DB8) --------------------------------------------------------
int __fastcall Function_2246db8(int a1)
{
  int v1;

  v1 = a1;
  Function_2024034(*(uint *)(a1 + 564));
  Function_2247694(v1);
  return 1;
}

//----- (02246DD0) --------------------------------------------------------
int __fastcall Function_2246dd0(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 508) )
  {
    Function_22474a8();
    Function_202404c(*(int **)(v1 + 564));
  }
  else
  {
    *(uint *)(a1 + 508) = 1;
  }
  return 0;
}

//----- (02246DF8) --------------------------------------------------------
int __fastcall Function_2246df8(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  uint *v4;
  uint v5;
  uint v6;
  int v7;
  uint *v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v1 = a1;
  v2 = a1[127];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v15 = a1[132];
      if ( v15 < a1[133] )
      {
        v16 = (int)&a1[7 * v15];
        do
        {
          v17 = *(uchar *)(v16 + 25);
          if ( v17 == 6 )
          {
            Function_200d6a4(*(uint **)(v16 + 12), 1);
          }
          else
          {
            Function_200d6e8(*(int **)(v16 + 12), dword_2249974[v17], dword_2249974[v17]);
            ++*(uchar *)(v16 + 25);
          }
          ++v15;
          v16 += 28;
        }
        while ( v15 < v1[133] );
      }
      v18 = v1[134];
      if ( v18 < v1[135] )
      {
        v19 = (int)&v1[7 * v18];
        do
        {
          v20 = *(uchar *)(v19 + 25);
          if ( v20 == 6 )
          {
            Function_200d6a4(*(uint **)(v19 + 12), 1);
          }
          else
          {
            Function_200d6e8(*(int **)(v19 + 12), dword_2249958[v20], dword_2249958[v20]);
            ++*(uchar *)(v19 + 25);
          }
          ++v18;
          v19 += 28;
        }
        while ( v18 < v1[135] );
      }
      if ( ++v1[128] == 6 )
        ++v1[127];
    }
    else
    {
      Function_2247ce0(a1);
      if ( v1[169] )
        v21 = Function_2247540(v1, v1[168]);
      else
        v21 = Function_2247518(v1, v1[168]);
      Function_2247998(v1, v21);
      if ( v1[130] )
        Function_2247968(v1, 0, 1);
      Function_2247504(v1);
      Function_2246d60(v1, 1);
    }
  }
  else
  {
    ((void (*)(void))Function_2247968)();
    v3 = 0;
    if ( v1[129] > 0 )
    {
      v4 = v1;
      do
      {
        if ( *((uchar *)v4 + 24) )
        {
          Function_200d5dc((uint **)v4[3], *((short *)v4 + 10), *((short *)v4 + 11));
          --*((uchar *)v4 + 24);
          if ( v3 >= v1[132] && v3 < v1[133] )
          {
            v5 = dword_2249974[*((uchar *)v4 + 25)];
            Function_200d6e8((int *)v4[3], v5, v5);
            ++*((uchar *)v4 + 25);
            Function_200d6a4((uint *)v4[3], 2);
          }
          if ( v3 >= v1[134] && v3 < v1[135] )
          {
            v6 = dword_2249958[*((uchar *)v4 + 25)];
            Function_200d6e8((int *)v4[3], v6, v6);
            ++*((uchar *)v4 + 25);
            Function_200d6a4((uint *)v4[3], 2);
          }
        }
        ++v3;
        v4 += 7;
      }
      while ( v3 < v1[129] );
    }
    v7 = 0;
    v8 = v1;
    do
    {
      if ( *((uchar *)v8 + 360) )
      {
        Function_200d5dc((uint **)v8[87], *((short *)v8 + 178), *((short *)v8 + 179));
        --*((uchar *)v8 + 360);
      }
      ++v7;
      v8 += 7;
    }
    while ( v7 < 2 );
    if ( !*((uchar *)v1 + 24) )
    {
      v9 = v1[132];
      if ( v9 < v1[133] )
      {
        v10 = (int)&v1[7 * v9];
        do
        {
          v11 = Function_2247b3c(*(uint *)v10, *(uint *)(v10 + 8));
          Function_200d364(*(int **)(v10 + 12), v11);
          Function_200d330(*(int **)(v10 + 12));
          ++v9;
          v10 += 28;
        }
        while ( v9 < v1[133] );
      }
      v12 = v1[134];
      if ( v12 < v1[135] )
      {
        v13 = (int)&v1[7 * v12];
        do
        {
          v14 = Function_2247b3c(*(uint *)v13, *(uint *)(v13 + 8));
          Function_200d364(*(int **)(v13 + 12), v14);
          Function_200d330(*(int **)(v13 + 12));
          ++v12;
          v13 += 28;
        }
        while ( v12 < v1[135] );
      }
      ++v1[127];
    }
    ++v1[128];
  }
  return 0;
}

//----- (02247084) --------------------------------------------------------
int __fastcall Function_2247084(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = ((int (*)(void))*(&off_2249700 + *(uint *)(a1 + 500)))();
  if ( !v2 )
    Function_2247a70(v1);
  return v2;
}

//----- (022470A8) --------------------------------------------------------
uint *__fastcall Function_22470a8(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint *v5;
  uint v6;
  long long v7;
  long long v8;
  int v9;
  uchar v10;
  ushort *v12;
  int v13;

  v1 = a1;
  v12 = (ushort *)Function_2023790(100, 0x66u);
  *(uint *)(v1 + 712) = 1;
  v2 = 0;
  *(uint *)(v1 + 716) = 0;
  v3 = 516;
  *(uint *)(v1 + 720) = 0;
  if ( *(uint *)(v1 + 516) > 0 )
  {
    v4 = v1;
    v5 = (uint *)(v1 + 716);
    do
    {
      if ( !*(uint *)v4 )
      {
        *(uint *)v4 = 1;
        v6 = Function_2247b3c(1, *(uint *)(v4 + 8));
        Function_200d364(*(int **)(v4 + 12), v6);
      }
      v13 = *(uint *)v4 - 1;
      if ( v2 )
      {
        LODWORD(v7) = *v5;
        HIDWORD(v7) = *(uint *)(v1 + 720);
        v8 = ll_mul(v7, 10LL);
        *v5 = v8;
        *(uint *)(v1 + 720) = HIDWORD(v8);
      }
      v9 = *(uint *)(v1 + 720);
      v10 = __CFADD__(*v5, v13);
      *v5 += v13;
      *(uint *)(v1 + 720) = v10 + v9;
      Function_20238a0(v12, v13, 1, 1, 1);
      Function_2023e4c(*(ushort **)(v1 + 704), (int)v12);
      ++v2;
      v4 += 28;
    }
    while ( v2 < *(uint *)(v1 + 516) );
  }
  Function_20237bc_FreeMsg((int)v12, v3);
  return Function_2246d60((uint *)v1, 3);
}

//----- (02247160) --------------------------------------------------------
uint *__fastcall Function_2247160(uint *a1)
{
  uint *v1;
  int v2;
  uint *result;
  int v4;
  uint v5;
  int v6;
  int v7;
  uint v8;
  int v9;

  v1 = a1;
  if ( a1[130] )
  {
    v4 = a1[98];
    a1[7 * v4] = 0;
    v5 = Function_2247b3c(a1[7 * v4], a1[7 * v4 + 2]);
    Function_200d364((int *)v1[7 * v4 + 3], v5);
    v6 = v1[7 * v4 + 1];
    if ( v4 <= 0 )
    {
      v1[178] = 0;
      result = Function_2246d60(v1, 3);
    }
    else
    {
      v7 = 7 * (v4 - 1);
      v8 = Function_2247b3c(v1[v7], v1[v7 + 2]);
      Function_200d364((int *)v1[v7 + 3], v8);
      v9 = v1[v7 + 1];
      if ( v6 == v9 )
      {
        v1[167] = 2;
        result = (uint *)672;
        v1[168] = v4 - 1;
      }
      else
      {
        v1[167] = 1;
        result = (uint *)672;
        v1[168] = v9;
        v1[169] = 1;
      }
    }
  }
  else
  {
    a1[98] = a1[129] - 1;
    v2 = a1[7 * a1[98] + 1];
    a1[167] = 1;
    a1[168] = v2;
    result = (uint *)676;
    v1[169] = 1;
  }
  return result;
}

//----- (02247220) --------------------------------------------------------
int __fastcall Function_2247220(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  short *v5;
  char *v6;
  int v7;
  short v8;
  char *v9;
  uchar *v10;
  short v11;
  short v12;
  int result;
  char v14;

  v1 = a1;
  v2 = 0;
  v3 = v1 + 568;
  v4 = v1;
  do
  {
    ++v2;
    *(uint *)(v4 + 16) = v3;
    v3 += 4;
    v4 += 28;
  }
  while ( v2 < 12 );
  v5 = &word_2249728;
  v6 = &v14;
  v7 = 48;
  do
  {
    v8 = *v5;
    ++v5;
    *(ushort *)v6 = v8;
    v6 += 2;
    --v7;
  }
  while ( v7 );
  if ( v2 < 24 )
  {
    v9 = &v14 + 8 * v2;
    v10 = (uchar *)(v1 + 4 * v2);
    do
    {
      ++v2;
      v10[568] = *((ushort *)v9 - 47) - *((ushort *)v9 - 45);
      v10[570] = *((ushort *)v9 - 48) - *((ushort *)v9 - 46);
      v10[569] = *((ushort *)v9 - 47) + *((ushort *)v9 - 45);
      v11 = *((ushort *)v9 - 48);
      v12 = *((ushort *)v9 - 46);
      v9 += 8;
      v10[571] = v11 + v12;
      v10 += 4;
    }
    while ( v2 < 24 );
  }
  *(uchar *)(v1 + 656) = -104;
  *(uchar *)(v1 + 658) = 32;
  *(uchar *)(v1 + 657) = -72;
  *(uchar *)(v1 + 659) = -128;
  *(uchar *)(v1 + 660) = -104;
  *(uchar *)(v1 + 662) = -128;
  *(uchar *)(v1 + 661) = -72;
  *(uchar *)(v1 + 663) = -32;
  result = Function_2023fcc(v1 + 568, 0x18u, (int)Function_224730c, v1, 0x66u);
  *(uint *)(v1 + 564) = result;
  return result;
}

//----- (0224730C) --------------------------------------------------------
uint *__fastcall Function_224730c(uint a1, int a2, int a3)
{
  int v3;
  uint v4;
  uint *result;
  int v6;
  short v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;

  v3 = a3;
  v4 = a1;
  result = *(uint **)(a3 + 500);
  if ( result == (uint *)1 )
  {
    result = *(uint **)(a3 + 664);
    if ( result != (uint *)1 )
    {
      result = (uint *)1;
      *(uint *)(a3 + 664) = 1;
    }
    if ( !a2 )
    {
      if ( v4 > 0xB )
      {
        if ( v4 == 22 )
        {
          *(ushort *)(a3 + 440) = 0;
          *(ushort *)(a3 + 442) = 2;
        }
        else if ( v4 == 23 )
        {
          *(ushort *)(a3 + 440) = 3;
          *(ushort *)(a3 + 442) = 2;
        }
        else
        {
          u32_div_f(v4 - 12, 5);
          *(ushort *)(v3 + 440) = v7;
          *(ushort *)(v3 + 442) = u32_div_f(v4 - 12, 5);
        }
        if ( v4 < 0xC || v4 > 0x15 )
        {
          if ( v4 == 22 )
          {
            Function_2005748(0x563u);
            result = Function_2247160((uint *)v3);
          }
          else
          {
            Function_2005748(0x563u);
            result = Function_22470a8(v3);
          }
        }
        else
        {
          result = *(uint **)(v3 + 520);
          if ( result )
          {
            Function_2005748(0x563u);
            v8 = *(uint *)(v3 + 392);
            v9 = 28 * *(uint *)(v3 + 392);
            *(uint *)(v3 + v9) = v4 - 11;
            v10 = Function_2247b3c(*(uint *)(v3 + v9), *(uint *)(v3 + v9 + 8));
            Function_200d364(*(int **)(v3 + v9 + 12), v10);
            Function_2247968(v3, 1, 1);
            v11 = v4 - 12;
            Function_22479d4(v3, v11);
            Function_2247968(v3, 1, 0);
            Function_2247968(v3, 2, 1);
            Function_2247a20(v3, v11, 2);
            Function_200d364(*(int **)(v3 + 460), 3u);
            v12 = v8 + 1;
            if ( v8 + 1 == *(uint *)(v3 + 516) )
            {
              *(uint *)(v3 + 668) = 1;
              *(uint *)(v3 + 672) = 0;
              result = (uint *)676;
              *(uint *)(v3 + 676) = 0;
            }
            else
            {
              v13 = *(uint *)(v3 + 28 * v12 + 4);
              if ( *(uint *)(v3 + v9 + 4) == v13 )
              {
                *(uint *)(v3 + 668) = 2;
                result = (uint *)672;
                *(uint *)(v3 + 672) = v12;
              }
              else
              {
                *(uint *)(v3 + 668) = 1;
                *(uint *)(v3 + 672) = v13;
                result = (uint *)676;
                *(uint *)(v3 + 676) = 0;
              }
            }
          }
        }
      }
      else
      {
        v6 = a3 + 28 * v4;
        if ( *(uint *)(v6 + 8) == 1 )
        {
          *(uint *)(v3 + 668) = 2;
          *(uint *)(v3 + 672) = v4;
        }
        else
        {
          *(uint *)(v3 + 668) = 1;
          *(uint *)(v3 + 672) = *(uint *)(v6 + 4);
        }
        result = (uint *)Function_2005748(0x563u);
      }
    }
  }
  return result;
}

//----- (022474A8) --------------------------------------------------------
uint *__fastcall Function_22474a8(uint *result)
{
  uint *v1;
  int v2;

  v1 = result;
  v2 = result[167];
  if ( v2 <= 2 && v2 >= 0 && v2 )
  {
    if ( v2 == 1 )
    {
      Function_2246b70(result, result[168]);
      Function_2247b48(v1);
      Function_2247b88(v1, 1);
      Function_2246d60(v1, 2);
      result = (uint *)668;
      v1[167] = 255;
    }
    else if ( v2 == 2 )
    {
      Function_2247998(result, result[168]);
      result = (uint *)Function_2247504(v1);
    }
  }
  return result;
}

//----- (02247504) --------------------------------------------------------
uint *__fastcall Function_2247504(uint *result)
{
  result[167] = 0;
  result[168] = 0;
  result[169] = 0;
  return result;
}

//----- (02247518) --------------------------------------------------------
int __fastcall Function_2247518(int a1, int a2)
{
  int v2;
  int v3;

  v2 = *(uint *)(a1 + 516);
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  while ( a2 != *(uint *)(a1 + 4) )
  {
    ++v3;
    a1 += 28;
    if ( v3 >= v2 )
      return 0;
  }
  return v3;
}

//----- (02247540) --------------------------------------------------------
int __fastcall Function_2247540(int a1, int a2)
{
  int v2;
  int v3;
  int i;

  v2 = *(uint *)(a1 + 516);
  v3 = 0;
  for ( i = 0; i < v2; a1 += 28 )
  {
    if ( a2 == *(uint *)(a1 + 4) )
    {
      v3 = 1;
    }
    else if ( v3 == 1 )
    {
      return i - 1;
    }
    ++i;
  }
  return v2 - 1;
}

//----- (02247574) --------------------------------------------------------
int __fastcall Function_2247574(int *a1)
{
  int v1;
  uint *v2;
  int v3;
  uint *v4;
  int v5;

  v1 = a1[138];
  v2 = (uint *)a1[137];
  v3 = a1[140];
  v4 = (uint *)a1[139];
  v5 = a1[136];
  Function_20070e8(a1[136], 0x36u, v4, 3u, 0, 0, 0, 102);
  Function_200710c(v5, 0x2Bu, v4, 3u, 0, 0, 0, 102);
  Function_200cdc4(v3, 2u, v2, v1, v5, 0x2Cu, 0, 1, 1, 1000);
  Function_200cc3c(v2, v1, v5, 0x28u, 0, 1, 1000);
  Function_200ce24(v2, v1, v5, 0x29u, 0, 1000);
  Function_200ce54(v2, v1, v5, 0x2Au, 0, 1000);
  Function_200cdc4(v3, 2u, v2, v1, v5, 0x58u, 0, 1, 1, 1001);
  Function_200cc3c(v2, v1, v5, 0x57u, 0, 1, 1001);
  Function_200ce24(v2, v1, v5, 0x55u, 0, 1001);
  return Function_200ce54(v2, v1, v5, 0x56u, 0, 1001);
}

//----- (02247694) --------------------------------------------------------
int __fastcall Function_2247694(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  v2 = 0;
  if ( *(uint *)(a1 + 516) > 0 )
  {
    v3 = a1;
    do
    {
      Function_200d0f4(*(uint *)(v3 + 12));
      ++v2;
      v3 += 28;
    }
    while ( v2 < *(uint *)(v1 + 516) );
  }
  v4 = 0;
  v5 = v1;
  do
  {
    Function_200d0f4(*(uint *)(v5 + 348));
    ++v4;
    v5 += 28;
  }
  while ( v4 < 2 );
  v6 = 0;
  v7 = v1;
  do
  {
    Function_200d0f4(*(uint *)(v7 + 404));
    ++v6;
    v7 += 28;
  }
  while ( v6 < 3 );
  Function_200d070(*(uint *)(v1 + 552), 1000);
  Function_200d080(*(uint *)(v1 + 552), 1000);
  Function_200d090(*(uint *)(v1 + 552), 1000);
  Function_200d0a0(*(uint *)(v1 + 552), 1000);
  Function_200d070(*(uint *)(v1 + 552), 1001);
  Function_200d080(*(uint *)(v1 + 552), 1001);
  Function_200d090(*(uint *)(v1 + 552), 1001);
  return Function_200d0a0(*(uint *)(v1 + 552), 1001);
}

//----- (02247754) --------------------------------------------------------
int __fastcall Function_2247754(uint *a1)
{
  int v1;
  uint *v2;
  int result;
  uint *v4;
  short v5;
  uint *v6;
  int *v7;
  uint v8;
  uint *v9;
  int v10;
  uint *v11;
  int v12;
  short v13;
  short v14;
  short v15;
  short v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v9 = a1;
  v12 = 0;
  v11 = (uint *)a1[137];
  v1 = 0;
  v10 = a1[138];
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 10;
  v26 = 0;
  v27 = 0;
  v18 = 0;
  v20 = 1000;
  v21 = 1000;
  v22 = 1000;
  v23 = 1000;
  v24 = -1;
  v25 = -1;
  v2 = a1;
  v19 = 1;
  result = a1[129] + 2;
  if ( result > 0 )
  {
    v4 = v2;
    v5 = 76;
    v6 = v2;
    do
    {
      if ( v1 == v12 + v4[84] + 1 )
      {
        v4[87] = Function_200ce6c(v11, v10, &v13);
        Function_200d4c4((int *)v4[87], v5, 24);
        Function_200d364((int *)v4[87], 0x16u);
        Function_200d330((int *)v4[87]);
        v4 += 7;
        ++v12;
      }
      else
      {
        v7 = Function_200ce6c(v11, v10, &v13);
        v6[3] = v7;
        Function_200d4c4(v7, v5, 24);
        v8 = Function_2247b3c(*v6, v6[2]);
        Function_200d364((int *)v6[3], v8);
        Function_200d6a4((uint *)v6[3], 0);
        Function_200d330((int *)v6[3]);
        v6 += 7;
      }
      ++v1;
      result = v9[129] + 2;
      v5 += 8;
    }
    while ( v1 < result );
  }
  return result;
}

//----- (0224784C) --------------------------------------------------------
int __fastcall Function_224784c(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  short v8;
  short v9;
  short v10;
  short v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v23 = a4;
  v4 = a1;
  v5 = (uint *)a1[137];
  v6 = a1[138];
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v15 = 1001;
  v16 = 1001;
  v17 = 1001;
  v18 = 1001;
  v14 = 1;
  v12 = 0;
  v21 = 0;
  v22 = 0;
  v13 = 0;
  v19 = -1;
  v20 = -1;
  a1[101] = Function_200ce6c(v5, v6, &v8);
  v4[108] = Function_200ce6c(v5, v6, &v8);
  v4[115] = Function_200ce6c(v5, v6, &v8);
  Function_2247998(v4, 0);
  Function_200d364((int *)v4[101], 0);
  Function_200d330((int *)v4[101]);
  *((ushort *)v4 + 220) = 0;
  *((ushort *)v4 + 221) = 0;
  v4[105] = 1;
  Function_22479d4(v4, 0);
  Function_200d364((int *)v4[108], v4[105]);
  Function_200d330((int *)v4[108]);
  Function_200d810((int *)v4[108], 1);
  *((ushort *)v4 + 234) = 0;
  *((ushort *)v4 + 235) = 0;
  v4[112] = 1;
  Function_22479d4(v4, 0);
  Function_200d364((int *)v4[115], v4[112]);
  Function_200d330((int *)v4[115]);
  Function_200d810((int *)v4[115], 1);
  Function_2247968(v4, 1, 0);
  return Function_2247968(v4, 2, 0);
}

//----- (02247968) --------------------------------------------------------
uint __fastcall Function_2247968(int a1, int a2, int a3)
{
  uint result;

  if ( a3 == 1 )
    result = Function_200d3f4(*(uint **)(a1 + 28 * a2 + 404), 1);
  else
    result = Function_200d3f4(*(uint **)(a1 + 28 * a2 + 404), 0);
  return result;
}

//----- (02247998) --------------------------------------------------------
int __fastcall Function_2247998(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  char v7;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = *(int **)(a1 + 28 * a2 + 12);
  *(uint *)(v4 + 392) = a2;
  Function_200d550(v5, &v8, &v7);
  return Function_200d4c4(*(int **)(v4 + 404), (short)v8, (short)(*(ushort *)&v7 + 16));
}

//----- (022479D4) --------------------------------------------------------
int __fastcall Function_22479d4(int a1, int a2)
{
  uchar *v2;
  uint v3;
  uint v4;

  v2 = (uchar *)(a1 + 4 * (a2 + 12));
  v3 = v2[570] + v2[571];
  v4 = v2[568] + v2[569];
  return Function_200d4c4(
           *(int **)(a1 + 432),
           (short)((v3 + (v3 >> 31)) >> 1),
           (short)(((v4 + (v4 >> 31)) >> 1) - 8));
}

//----- (02247A20) --------------------------------------------------------
int __fastcall Function_2247a20(int a1, int a2, int a3)
{
  uchar *v3;
  uint v4;
  uint v5;

  v3 = (uchar *)(a1 + 4 * (a2 + 12));
  v4 = v3[570] + v3[571];
  v5 = v3[568] + v3[569];
  return Function_200d4c4(
           *(int **)(a1 + 28 * a3 + 404),
           (short)((v4 + (v4 >> 31)) >> 1),
           (short)(((v5 + (v5 >> 31)) >> 1) - 8));
}

//----- (02247A70) --------------------------------------------------------
uint __fastcall Function_2247a70(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint result;
  uint v6;

  v1 = a1;
  Function_200d330(*(int **)(a1 + 404));
  Function_200d330(*(int **)(v1 + 432));
  Function_200d330(*(int **)(v1 + 460));
  v2 = 1;
  v3 = v1 + 28;
  do
  {
    v4 = Function_200d37c(*(int **)(v3 + 404));
    if ( v4 == 3 )
    {
      result = Function_200d3b8(*(int **)(v3 + 404));
      if ( !result )
      {
        Function_200d364(*(int **)(v3 + 404), *(uint *)(v3 + 392));
        if ( *(uint *)(v1 + 664) == 1 )
          Function_2247968(v1, 1, 0);
        else
          Function_2247968(v1, 1, 1);
        result = Function_2247968(v1, 2, 0);
      }
    }
    else
    {
      v6 = *(uint *)(v3 + 392);
      if ( v4 != v6 )
        Function_200d364(*(int **)(v3 + 404), v6);
      result = Function_200d37c(*(int **)(v1 + 460));
      if ( result != 3 )
      {
        if ( *(uint *)(v1 + 664) == 1 )
          result = Function_2247968(v1, 1, 0);
        else
          result = Function_2247968(v1, 1, 1);
      }
    }
    ++v2;
    v3 += 28;
  }
  while ( v2 < 3 );
  return result;
}

//----- (02247B3C) --------------------------------------------------------
int __fastcall Function_2247b3c(int a1, int a2)
{
  int v2;

  v2 = 0;
  if ( !a2 )
    v2 = 11;
  return v2 + a1;
}

//----- (02247B48) --------------------------------------------------------
uint *__fastcall Function_2247b48(uint *result)
{
  int v1;
  uint *v2;

  v1 = 0;
  if ( result[129] > 0 )
  {
    v2 = result;
    do
    {
      v2[2] = v1 >= result[132] && v1 < result[133];
      ++v1;
      v2 += 7;
    }
    while ( v1 < result[129] );
  }
  return result;
}

//----- (02247B88) --------------------------------------------------------
int __fastcall Function_2247b88(uint *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  uint *v7;
  uint *v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int v13;
  int v14;
  short v15;
  short v16;
  int v17;

  v17 = a4;
  v13 = a2;
  v12 = a1;
  v4 = 0;
  v14 = 0;
  LOWORD(v5) = *((ushort *)a1 + a1[130] + 238);
  result = a1[129];
  if ( result > 0 )
  {
    v7 = v12;
    v8 = v12;
    do
    {
      v9 = v12[132];
      if ( v4 < v9 || v4 >= v12[133] )
      {
        if ( v4 )
          v5 = (short)(v5 + 8);
        else
          v5 = (short)(v5 + 20);
      }
      else if ( v4 == v9 )
      {
        v5 = (short)(v5 + 20);
      }
      else
      {
        v5 = (short)(v5 + 32);
      }
      Function_200d550((int *)v7[3], &v16, &v15);
      if ( v13 )
      {
        *((ushort *)v7 + 10) = (v5 - v16) / 2;
        *((ushort *)v7 + 11) = 0;
        *((uchar *)v7 + 24) = 2;
        *((uchar *)v7 + 25) = 0;
      }
      else
      {
        Function_200d4c4((int *)v7[3], v5, v15);
      }
      if ( v4 == v8[84] && v14 != 2 )
      {
        Function_200d550((int *)v8[87], &v16, &v15);
        v10 = v12[133];
        v11 = v12[132];
        if ( v11 == v10 )
        {
          v5 = (short)(v5 + 8);
        }
        else if ( v4 <= v11 || v4 >= v10 )
        {
          v5 = (short)(v5 + 8);
        }
        else
        {
          v5 = (short)(v5 + 20);
        }
        if ( v13 )
        {
          *((ushort *)v8 + 178) = (v5 - v16) / 2;
          *((ushort *)v8 + 179) = 0;
          *((uchar *)v8 + 360) = 2;
        }
        else
        {
          Function_200d4c4((int *)v8[87], v5, v15);
        }
        v8 += 7;
        ++v14;
      }
      result = v12[129];
      ++v4;
      v7 += 7;
    }
    while ( v4 < result );
  }
  return result;
}

//----- (02247CE0) --------------------------------------------------------
int __fastcall Function_2247ce0(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int result;
  int v6;
  uint *v7;
  char v8;
  char v9;
  char v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  result = a1[129];
  v6 = 0;
  if ( result > 0 )
  {
    v7 = v4;
    do
    {
      if ( v6 < v4[132] || v6 >= v4[133] )
      {
        v9 = 4;
        v8 = 8;
      }
      else
      {
        v9 = 16;
        v8 = 16;
      }
      Function_200d550((int *)v7[3], &v10, &v11);
      *(uchar *)v7[4] = v11 - v8;
      *(uchar *)(v7[4] + 2) = v10 - v9;
      *(uchar *)(v7[4] + 1) = v11 + v8;
      *(uchar *)(v7[4] + 3) = v10 + v9;
      if ( !v6 )
        *(uchar *)(v7[4] + 2) -= 4;
      result = v4[129];
      ++v6;
      v7 += 7;
    }
    while ( v6 < result );
  }
  return result;
}

//----- (02247D74) --------------------------------------------------------
int __fastcall Function_2247d74(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_22302a8(a1, 2u, a2);
  Function_201a7a0(v2 + 2212);
  return Function_201a7e8(*(uint **)(v2 + 36), v2 + 2212, 2, 1, 19, 0x1Eu, 4u, 14, 300);
}

//----- (02247DB4) --------------------------------------------------------
uint __fastcall Function_2247db4(int a1)
{
  int v1;

  v1 = a1;
  Function_201acf4(a1 + 2212);
  Function_201a8fc(v1 + 2212);
  return Function_201ff0c(4u, 0);
}

//----- (02247DD8) --------------------------------------------------------
uint __fastcall Function_2247dd8(int a1, uint a2, int a3)
{
  int v3;
  char *v4;
  int *v5;
  ushort *v6;
  ushort *v7;
  ushort *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint v14;

  v3 = a1;
  v14 = a2;
  if ( a2 == 282 )
  {
    v4 = *(char **)(a1 + 4 * a3 + 2188);
    v5 = (int *)Function_2231690(0x66u);
    v6 = (ushort *)Function_2023790(255, 0x66u);
    v7 = Function_2030b94(v4, 0x66u);
    Function_22349a8(v3, (int)v7);
    v8 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v3 + 72), v14);
    Function_200b48c(v5, 0, (int)v7);
    Function_200c388((uint *)v5, (int)v6, (int)v8);
    Function_20237bc_FreeMsg((int)v7, v9);
    Function_20237bc_FreeMsg((int)v8, v10);
    Function_200b3f0((uint *)v5, v11);
  }
  else
  {
    v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(a1 + 72), a2);
  }
  Function_201ada4_ClearTextBox(v3 + 2212, 204);
  Function_201d78c(v3 + 2212, 0);
  Function_201a9a4(v3 + 2212);
  return Function_20237bc_FreeMsg((int)v6, v12);
}

//----- (02247E9C) --------------------------------------------------------
int __fastcall Function_2247e9c(int a1)
{
  int v1;
  int v2;
  int v3;
  ushort *v4;
  int v5;
  ushort *v6;
  int v7;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 2144) + 16;
  Function_201a7a0(v3);
  Function_201a7e8(*(uint **)(v1 + 36), v3, 6, 4, 6, 0xAu, 2u, 14, 1);
  Function_201ada4_ClearTextBox(v3, 0);
  v4 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x82u);
  Function_223429c(v3, (int)v4);
  Function_201d78c(v3, 0);
  Function_20237bc_FreeMsg((int)v4, v5);
  Function_201a9a4(v3);
  v2 += 32;
  Function_201a7a0(v2);
  Function_201a7e8(*(uint **)(v1 + 36), v2, 6, 18, 6, 0xAu, 2u, 14, 21);
  Function_201ada4_ClearTextBox(v2, 0);
  v6 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 72), 0x83u);
  Function_223429c(v2, (int)v6);
  Function_201d78c(v2, 0);
  Function_20237bc_FreeMsg((int)v6, v7);
  return Function_201a9a4(v2);
}

//----- (02247F7C) --------------------------------------------------------
uint __fastcall Function_2247f7c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 2144);
  Function_201acf4(*(uint *)(a1 + 2144) + 16);
  Function_201a8fc(v1 + 16);
  Function_201acf4(v1 + 32);
  return Function_201a8fc(v1 + 32);
}

//----- (02247FA8) --------------------------------------------------------
int __fastcall Function_2247fa8(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  v2 = (int *)malloc(0x66u, 48);
  Call_FillMemWithValue(v2, 0, 0x30u);
  *(uint *)(v1 + 2144) = v2;
  Function_2019ebc(*(uint **)(v1 + 36), 2u);
  Function_2019ebc(*(uint **)(v1 + 36), 3u);
  Function_2019ebc(*(uint **)(v1 + 36), 6u);
  Function_2019ebc(*(uint **)(v1 + 36), 7u);
  Function_22315c8(v2, v2 + 1, 0);
  Function_222fb60((uint *)v1, 1);
  return 0;
}

//----- (02247FFC) --------------------------------------------------------
int __fastcall Function_2247ffc(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      Function_2019060(0, 0);
      Function_2019060(1u, 3);
      Function_2019060(2u, 0);
      Function_2019060(3u, 2);
      Function_2019060(4u, 0);
      Function_2019060(5u, 3);
      Function_2019060(6u, 1);
      Function_2019060(7u, 2);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 3u, 0, 0, 0, 102);
      Function_20070e8(*(uint *)(v1 + 20), 0x3Eu, *(uint **)(v1 + 36), 7u, 0, 0, 0, 102);
      Function_2234540(v1, 1);
      Function_2231454(v1);
      Function_2234540(v1, 0);
      ++*(uint *)(v1 + 8);
    }
    else
    {
      Function_223376c(a1, 0);
      Function_222fb60((uint *)v1, 2);
    }
  }
  else
  {
    if ( Function_2231664((int *)(v2 + 8), 1) )
      ++*(uint *)(v1 + 8);
    Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
    Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
    Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
  }
  return 0;
}

//----- (02248114) --------------------------------------------------------
int __fastcall Function_2248114(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v6;
  int v7;
  int v8;
  int v9;

  v4 = a1;
  v5 = *(int **)(a1 + 2144);
  v6 = *(uint *)(a1 + 8);
  if ( v6 <= 6 )
    JUMPOUT(__CS__, *((short *)&off_2248134 + v6) + 35946806);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_2247e9c(a1);
      Function_2247d74(v4, 0);
      Function_200710c(*(uint *)(v4 + 20), 0x54u, *(uint **)(v4 + 36), 7u, 0, 0, 0, 102);
      Function_201ff0c(8u, 1);
      Function_201ff74(8u, 1);
      Function_201ff0c(4u, 0);
      Function_201ff74(4u, 0);
      ++*(uint *)(v4 + 8);
      break;
    case 1:
      Function_2231664(v5 + 2, 0);
      if ( Function_22315e0(v5, v5 + 1, 0, 2) )
      {
        Function_2247dd8(v4, 0x11Au, *(uint *)(v4 + 2156));
        Function_201ff0c(4u, 1);
        Function_201ff74(4u, 1);
        ++*(uint *)(v4 + 8);
      }
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, v5[2], *(uint *)(v4 + 88));
      break;
    case 2:
      if ( Function_2022760((uchar *)&dword_2249788) )
      {
        Function_2234520(v4);
        Function_2247dd8(v4, 0x11Bu, 0);
        ++*(uint *)(v4 + 8);
      }
      else if ( Function_2022760((uchar *)&dword_224978C) )
      {
        Function_2234520(v4);
        v5[3] = 1;
        Function_2247db4(v4);
        *(uint *)(v4 + 8) = 4;
      }
      break;
    case 3:
      if ( Function_2022760((uchar *)&dword_2249788) )
      {
        Function_2234520(v4);
        Function_22342bc(v4);
        v5[3] = 0;
        ++*(uint *)(v4 + 8);
      }
      else if ( Function_2022760((uchar *)&dword_224978C) )
      {
        Function_2234520(v4);
        Function_2247db4(v4);
        v5[3] = 1;
        ++*(uint *)(v4 + 8);
      }
      break;
    case 4:
      Function_2247f7c(a1);
      ++*(uint *)(v4 + 8);
      break;
    case 5:
      Function_2231664(v5 + 2, 1);
      if ( Function_22315e0(v5, v5 + 1, 1, 0) )
      {
        if ( v5[3] == 1 )
          Function_222fb60((uint *)v4, 3);
        else
          ++*(uint *)(v4 + 8);
      }
      Function_2003a2c(*(uint *)(v4 + 40), 3, 0xCu, v5[2], *(uint *)(v4 + 88));
      break;
    case 6:
      if ( Function_22342cc(a1, v6, a3, a4) )
      {
        Function_22339a0(v4);
        Function_22338a8(v4, v7, v8, v9);
        Function_2247dd8(v4, 0x11Du, 0);
        ++*(uint *)(v4 + 8);
      }
      else
      {
        Function_222fb60((uint *)v4, 3);
      }
      break;
    default:
      if ( Function_2022798() )
      {
        Function_2247db4(v4);
        Function_222fb60((uint *)v4, 3);
      }
      break;
  }
  return 0;
}

//----- (02248324) --------------------------------------------------------
int __fastcall Function_2248324(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = *(uint *)(a1 + 2144);
  v3 = *(uint *)(a1 + 8);
  switch ( v3 )
  {
    case 0:
      *(uint *)(a1 + 8) = 1;
      goto LABEL_6;
    case 1:
LABEL_6:
      ++*(uint *)(a1 + 8);
      goto LABEL_7;
    case 2:
LABEL_7:
      Function_223146c((int **)a1);
      Function_2019ebc(*(uint **)(v1 + 36), 2u);
      Function_2019ebc(*(uint **)(v1 + 36), 6u);
      Function_2019ebc(*(uint **)(v1 + 36), 3u);
      Function_2019ebc(*(uint **)(v1 + 36), 7u);
      Function_223376c(v1, 1);
      ++*(uint *)(v1 + 8);
      return 0;
  }
  if ( Function_2233790(a1) )
  {
    if ( Function_2231664((int *)(v2 + 8), 0) )
    {
      Function_22318e8(v1);
      Function_2231688((uint *)(v2 + 8));
      Function_2003a2c(*(uint *)(v1 + 40), 2, 0xCu, 0x10u, *(uint *)(v1 + 88));
      Function_222fb44(v1, 1, 1, *(uint **)(v1 + 16));
      Function_222fb60((uint *)v1, 5);
      free(v2);
    }
    else
    {
      Function_2003a2c(*(uint *)(v1 + 40), 1, 2u, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
      Function_2003a2c(*(uint *)(v1 + 40), 3, 0xCu, *(uint *)(v2 + 8), *(uint *)(v1 + 88));
    }
  }
  return 0;
}

//----- (02248408) --------------------------------------------------------
uint __fastcall Function_2248408(int a1, int a2, uint a3)
{
  ushort *v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v13;
  uint v14;
  int v15;
  ushort *v16;
  uchar *v17;
  int v18;
  int v19;
  ushort *v20;
  int v21;
  char v22;
  int v23;

  v13 = a2;
  v14 = a3;
  Function_202f4c0(*(uchar *)(a1 + 170), &v23, &v22);
  v3 = (ushort *)Function_2023790(64, v14);
  v20 = (ushort *)Function_2023790(64, v14);
  v4 = (ushort *)malloc(v14, 128);
  v5 = v23;
  v21 = 0;
  if ( v23 > 0 )
  {
    v18 = v13;
    v17 = (uchar *)(v13 + 60);
    v16 = (ushort *)(v13 + 60);
    do
    {
      v6 = 7;
      v7 = v18 + 14;
      do
      {
        if ( *(ushort *)(v7 + 60) == 0xFFFF )
          break;
        --v6;
        v7 -= 2;
      }
      while ( v6 > -1 );
      if ( v6 == -1 )
      {
        Function_224856c(v20, v14);
        Function_2023df0((int)v20, v17, 8u);
      }
      else
      {
        Function_20237e8((int)v3, v6);
        Function_2023d28(v3, v16);
        if ( !Function_2002db4(0, (int)v3, v20) )
        {
          Function_224856c(v20, v14);
          Function_2023df0((int)v20, v17, 8u);
        }
      }
      v5 = v23;
      v18 += 52;
      v17 += 52;
      v16 += 26;
      ++v21;
    }
    while ( v21 < v23 );
  }
  v15 = 0;
  if ( v5 > 0 )
  {
    do
    {
      v8 = 0;
      v19 = GetNrOfPkmnInParty(*(uint *)(v13 + 4));
      if ( v19 > 0 )
      {
        do
        {
          v9 = GetAdrOfPkmnInParty(*(uint **)(v13 + 4), v8);
          if ( !GetPkmnData(v9, 0xACu, 0) )
            break;
          MIi_CpuClear16(0, (int)v4, 128);
          GetPkmnData(v9, 0x75u, v4);
          Function_20237e8((int)v3, v10);
          Function_2023d28(v3, v4);
          if ( !Function_2002db4(0, (int)v3, v20) )
            SetPkmnData((int)v9, 179, 0);
          ++v8;
        }
        while ( v8 < v19 );
      }
      v5 = v23;
      v13 += 4;
      ++v15;
    }
    while ( v15 < v23 );
  }
  Function_20237bc_FreeMsg((int)v3, v5);
  Function_20237bc_FreeMsg((int)v20, v11);
  return free((int)v4);
}

//----- (0224856C) --------------------------------------------------------
ushort *__fastcall Function_224856c(int a1, int a2)
{
  uint v2;
  ushort *v3;
  ushort **v4;

  v2 = a2;
  v3 = (ushort *)a1;
  Function_20237e8(a1, a2);
  v4 = (ushort **)LoadFromMsgNARC(1, 26, 10, v2);
  Function_200b1b8_CallMsgDecrypt(v4, 0x14Cu, v3);
  return Function_200b190((ushort *)v4);
}

//----- (02248598) --------------------------------------------------------
int __fastcall Function_2248598(int a1, int a2, int a3, ushort *a4, ushort *a5)
{
  ushort *v5;
  int v6;
  int v7;
  int v8;

  v5 = a4;
  v6 = a1;
  v7 = a3;
  if ( *a4 )
  {
    if ( *a4 == 1 )
      return Function_202f3ac(a1, (uchar *)dword_21C07A4, a2, a5);
  }
  else
  {
    if ( !dword_21C07A4 )
      ErrorHandler();
    if ( v7 == 1 )
    {
      *(uchar *)(dword_21C07A4 + 171) = 1;
      *(ushort *)(dword_21C07A4 + 204) = -7551;
      *(ushort *)(dword_21C07A4 + 228) = Function_202486c(v6, (uchar *)(dword_21C07A4 + 132), 0x58u);
    }
    v8 = *(ushort *)(dword_21C07A4 + 7500);
    Function_202f858(dword_21C07A4 + 232, 0x1C64u);
    ++*v5;
  }
  return 0;
}

//----- (02248624) --------------------------------------------------------
int Function_2248624()
{
  int v0;

  if ( !dword_21C07A4 )
    ErrorHandler();
  v0 = *(ushort *)(dword_21C07A4 + 7500);
  return Function_202f858(dword_21C07A4 + 232, 0x1C64u);
}

//----- (02248658) --------------------------------------------------------
int __fastcall Function_2248658(int a1, int a2, int a3, ushort *a4, ushort *a5)
{
  ushort *v5;
  int v6;
  int v7;

  v5 = a4;
  v6 = a2;
  v7 = a3;
  if ( *a4 )
  {
    if ( *a4 == 1 )
      return Function_202f3ac(a1, (uchar *)dword_21C07A4, 0, a5);
  }
  else
  {
    if ( !dword_21C07A4 )
      ErrorHandler();
    *(uint *)(dword_21C07A4 + 220) = v6;
    *(uint *)(dword_21C07A4 + 224) = v7;
    ++*v5;
  }
  return 0;
}

//----- (022486A4) --------------------------------------------------------
int __fastcall Function_22486a4(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  if ( !dword_21C07A4 )
    ErrorHandler();
  *(uchar *)(dword_21C07A4 + 171) = 1;
  *(ushort *)(dword_21C07A4 + 204) = -7551;
  *(ushort *)(dword_21C07A4 + 228) = Function_202486c((int)v2, (uchar *)(dword_21C07A4 + 132), 0x58u);
  v4 = *(ushort *)(dword_21C07A4 + 7500);
  Function_202f858(dword_21C07A4 + 232, 0x1C64u);
  Function_2017de0(8);
  v5 = Function_202447c((int)v2, (uchar *)dword_21C07A4, v3);
  if ( v5 == 2 )
    v5 = Function_20246e0(v2);
  Function_2017df0(8);
  return v5;
}

