//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_59_21d0d80(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int *v8;
  int *v9;
  int v10;
  int v11;

  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      LoadOverlayData1c(a1);
      *v2 = 0;
      return 1;
    }
  }
  else
  {
    SetMainLoopFunctionCall(0, 0);
    Function_20177a4();
    Function_201ff00();
    Function_201ff68();
    REG_DISPCNT &= 0xFFFFE0FF;
    REG_DISPCNT_SUB &= 0xFFFFE0FF;
    Function_2017fc8(3, 51, 266240);
    v7 = LoadFromNARC_8(86, 0x33u, v5, v6);
    v8 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v4, 19124, 0x33u);
    Call_FillMemWithValue(v8, 0, 0x4AB4u);
    *v8 = Function_2018340(0x33u);
    v9 = (int *)LoadPtrToOverWorldDataIn18(v4);
    v8[2] = (int)v9;
    v8[4750] = *v9;
    v8[9] = (int)Function_200b358(0x33u);
    v8[10] = LoadFromMsgNARC(0, 26, 533, 0x33u);
    v10 = Function_2017dd4(4, 8);
    Function_21d1128(v10);
    Function_21d1148(*v8);
    Function_200f338(0);
    Function_200f338(1);
    Function_200f174(0, 17, 17, 0, 16, 1, 51);
    Function_21d1388(v8, v7);
    SetMainLoopFunctionCall((int)Function_21d1100, (int)v8);
    v11 = Function_21d1250(v8, v7);
    Function_21d1474(v11);
    Function_21d14a4(v8, v7);
    Function_21d1598(v8);
    Function_21d16a0(v8, v4);
    Function_2004550(0x34u, 0);
    Function_20961e8((int)v8);
    Function_2037878();
    Function_2037b58(3);
    if ( !Function_203608c() )
      Function_205bea8(2u);
    Function_2039734();
    Function_21d30e0(v8[4750], v8 + 237);
    v8[8] = (int)AddTaskToTaskList2((int)Function_21d109c, (int)v8, 5u);
    Call_FS_CloseFile(v7);
    ++*v2;
  }
  return 0;
}

//----- (021D0F00) --------------------------------------------------------
int __fastcall Function_59_21d0f00(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int (__fastcall *v6)(int);
  int v7;
  int (__fastcall *v8)(int);
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = Function_203608c();
  if ( !v4 )
  {
    v4 = *(uint *)(v3 + 19024);
    if ( v4 )
    {
      v4 = Function_20318ec() & *(uint *)(v3 + 19024);
      *(uint *)(v3 + 19024) = v4;
    }
  }
  v5 = *v2;
  switch ( (uchar)v4 )
  {
    case 0:
      if ( Function_200f2ac() )
      {
        *v2 = 1;
        if ( Function_203608c() )
        {
          if ( Function_21d2528() > 2 )
            Function_20359dc(114, 0, 0);
        }
      }
      goto LABEL_20;
    case 1:
      v6 = (int (__fastcall *)(int))*(&off_21D3480 + *(uint *)(v3 + 836));
      if ( v6 )
        *v2 = v6(v3);
      if ( !*(uchar *)(v3 + 19008) )
        Function_21d2418(v3 + 664, 0, 66304, v3);
      Function_21d26e8(v3);
      if ( !Function_203608c() )
      {
        v7 = Function_21d292c(v3, 1);
        if ( *v2 == 1 )
          *v2 = v7;
      }
      goto LABEL_20;
    case 2:
      v8 = (int (__fastcall *)(int))*(&off_21D3480 + *(uint *)(v3 + 836));
      if ( v8 )
        *v2 = v8(v3);
      goto LABEL_20;
    case 3:
      if ( !Function_200f2ac() )
        goto LABEL_20;
      result = 1;
      break;
    default:
LABEL_20:
      Function_20219f8(*(uint *)(v3 + 80));
      result = 0;
      break;
  }
  return result;
}

//----- (021D0FF4) --------------------------------------------------------
int __fastcall Function_59_21d0ff4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;

  v6 = a1;
  v1 = LoadOverlayData1c(a1);
  Call_RemoveTaskFromTaskList(*(int **)(v1 + 32));
  Function_200a4e4(*(int **)(v1 + 428));
  Function_200a6dc(*(int **)(v1 + 432));
  v2 = 0;
  v3 = v1;
  do
  {
    Function_2009754(*(int **)(v3 + 380));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 4 );
  Function_2021964(*(int **)(v1 + 80));
  Function_200a878();
  Function_201e958();
  Function_201f8b4();
  Function_21d17c8(v1);
  Function_21d1354(*(uint *)v1);
  Function_2037b58(2);
  Function_2036ac4();
  Function_205c2c8(*(uchar **)(*(uint *)(v1 + 8) + 4));
  Function_200b190(*(ushort **)(v1 + 40));
  Function_200b3f0(*(uint **)(v1 + 36), v4);
  Function_21d131c(v1);
  FreeSomeDataAndStore0InOverlayData1c(v6);
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  Function_205bea8(0);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(51);
  return 1;
}

//----- (021D109C) --------------------------------------------------------
int __fastcall Function_21d109c(int a1, int a2)
{
  int v2;
  int result;
  uint *v4;
  int v5;

  v2 = a2;
  result = *(uint *)(a2 + 12);
  v4 = (uint *)(a2 + 12);
  if ( result )
  {
    if ( v4[2] <= (int)*((uchar *)&dword_21D3290[2] + 2 * v4[1] + 2) )
    {
      ++*(uint *)(v2 + 20);
    }
    else
    {
      v4[2] = 0;
      v5 = v4[1] + 1;
      v4[1] = v5;
      if ( *((uchar *)&dword_21D3290[2] + 2 * v5 + 3) == 255 )
        v4[1] = 0;
      GX_LoadOBJPltt(*(uint *)(v4[4] + 12) + 32 * *((uchar *)&dword_21D3290[2] + 2 * v4[1] + 3), 0, 0x20u);
    }
    result = Function_21d23b0(v2 + 932);
  }
  return result;
}

//----- (021D1100) --------------------------------------------------------
int __fastcall Function_21d1100(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201dcac();
  Function_200a858();
  Function_201c2b8(v1);
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (021D1128) --------------------------------------------------------
char *Function_21d1128()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_21D3368;
  v1 = &v6;
  v2 = 5;
  do
  {
    v3 = *v0;
    v4 = v0[1];
    v0 += 2;
    *(uint *)v1 = v3;
    *((uint *)v1 + 1) = v4;
    v1 += 8;
    --v2;
  }
  while ( v2 );
  return GX_SetBanks((int *)&v6);
}

//----- (021D1148) --------------------------------------------------------
uint __fastcall Function_21d1148(uint *a1)
{
  uint *v1;
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
  int v31;
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

  v1 = a1;
  v38 = 1;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  SetGraphicsModes(&v38);
  v31 = 0;
  v32 = 0;
  v33 = 2048;
  v34 = 0;
  v35 = 69074945;
  v36 = 0;
  v37 = 0;
  Function_20183c4(v1, 4u, &v31, 0);
  Function_2019ebc(v1, 4u);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 2031617;
  v29 = 256;
  v30 = 0;
  Function_20183c4(v1, 5u, &v24, 0);
  Function_2019ebc(v1, 5u);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 35323905;
  v22 = 512;
  v23 = 0;
  Function_20183c4(v1, 6u, &v17, 0);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 2031617;
  v15 = 0;
  v16 = 0;
  Function_20183c4(v1, 0, &v10, 0);
  Function_2019ebc(v1, 0);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 35520513;
  v8 = 256;
  v9 = 0;
  Function_20183c4(v1, 1u, &v3, 0);
  Function_2019690(0, 32, 0, 0x33u);
  return Function_2019690(4u, 32, 0, 0x33u);
}

//----- (021D1250) --------------------------------------------------------
uint *__fastcall Function_21d1250(uint *a1, int a2)
{
  int v2;
  uint *v3;
  uint *v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  uint *result;
  uint *v10;
  int v11;

  v10 = a1;
  v11 = a2;
  v2 = 0;
  v3 = a1;
  v4 = a1;
  v5 = a1;
  do
  {
    v3[11] = Function_2023790(8, 0x33u);
    v4[217] = 0;
    v4[218] = 0;
    ++v2;
    v5[4761] = 0;
    v5[4762] = 0;
    v4 += 2;
    v5[4763] = 0;
    v5[4764] = 0;
    v3[227] = 0;
    ++v3;
    v5 += 4;
  }
  while ( v2 < 5 );
  v10[17] = Function_2023790(180, 0x33u);
  v10[18] = Function_2023790(40, 0x33u);
  v10[209] = 0;
  Function_200b1b8_CallMsgDecrypt((ushort **)v10[10], 0x11u, (ushort *)v10[18]);
  Function_21d27fc(v10, v11);
  v10[234] = Function_205ca4c(51, v6, v7, v8);
  v10[3] = 0;
  v10[5] = 0;
  v10[4] = 0;
  v10[6] = Function_20071ec(v11, 1u, v10 + 7, 51);
  result = v10;
  v10[4753] = 0;
  v10[200] = 0;
  v10[4754] = 2;
  return result;
}

//----- (021D131C) --------------------------------------------------------
uint __fastcall Function_21d131c(int *a1)
{
  int *v1;
  int v2;
  int v3;
  int *v4;
  int v5;

  v1 = a1;
  Function_21d28a4();
  free(v1[6]);
  free(v1[234]);
  v3 = 0;
  v4 = v1;
  do
  {
    Function_20237bc_FreeMsg(v4[11], v2);
    ++v3;
    ++v4;
  }
  while ( v3 < 5 );
  Function_20237bc_FreeMsg(v1[18], v2);
  return Function_20237bc_FreeMsg(v1[17], v5);
}

//----- (021D1354) --------------------------------------------------------
uint __fastcall Function_21d1354(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 6);
  Function_2019044(v1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 1);
  Function_2019044(v1, 0);
  return free(v1);
}

//----- (021D1388) --------------------------------------------------------
int __fastcall Function_21d1388(uint **a1, int a2)
{
  uint **v2;
  uint *v3;
  int v4;
  uchar v5;

  v2 = a1;
  v3 = *a1;
  v4 = a2;
  Function_2007130(a2, 0, 0, 0, 512, 51);
  Call_LoadFromNARC_RLCN(12, 12, 4u, 0, 32, 51);
  LoadFromNARC_PlFont2(0, 416, 51);
  LoadFromNARC_PlFont2(4u, 416, 51);
  LoadFromNARC_RGCN(12, 10, v3, 6u, 0, 0, 1, 51);
  LoadFromNARC_RCSN(12, 11, v3, 6u, 0, 0, 1, 51);
  Function_20070e8(v4, 2u, v3, 1u, 0, 0x2000, 1, 51);
  Function_200710c(v4, 3u, v3, 1u, 0, 1536, 1, 51);
  v5 = Function_2027b50((ushort *)v2[2][2]);
  Function_200dd0c(v3, 0, 1, 10, v5, 51);
  return Function_200daa4(v3, 0, 31, 11, 0, 51);
}

//----- (021D1474) --------------------------------------------------------
int Function_21d1474()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 20;
  v2 = 2048;
  v3 = 2048;
  v4 = 51;
  Function_201e86c(&v1);
  Function_201f834(20, 0x33u);
  Function_201e994();
  return Function_201f8e4();
}

//----- (021D14A4) --------------------------------------------------------
int __fastcall Function_21d14a4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v8;

  v2 = a1;
  v8 = a2;
  Function_20a7944();
  Function_200a784(0, 126, 0, 32, 0, 0x7Eu, 0, 0x20u, 0x33u);
  *(uint *)(v2 + 80) = Function_20095c4(30, v2 + 84, 51, v3);
  Function_200964c(v2 + 84, 0, 0x100000, v4);
  v5 = 0;
  v6 = v2;
  do
  {
    *(uint *)(v6 + 380) = Function_2009714(3, v5, 0x33u);
    v5 = (int *)((char *)v5 + 1);
    v6 += 4;
  }
  while ( (int)v5 < 4 );
  *(uint *)(v2 + 428) = Function_2009a4c(*(uint *)(v2 + 380), v8, 0xCu, 1, 2, 1, 0x33u);
  *(uint *)(v2 + 432) = Function_2009b04(*(uint *)(v2 + 384), v8, 1u, 0, 2, 1, 15, 0x33u);
  *(uint *)(v2 + 436) = Function_2009bc4(*(uint *)(v2 + 388), v8, 0xDu, 1, 2, 2u, 0x33u);
  *(uint *)(v2 + 440) = Function_2009bc4(*(uint *)(v2 + 392), v8, 0xEu, 1, 2, 3u, 0x33u);
  Function_200a328(*(int **)(v2 + 428));
  return Function_200a5c8(*(int **)(v2 + 432));
}

//----- (021D1598) --------------------------------------------------------
uint __fastcall Function_21d1598(int *a1)
{
  int *v1;
  int *v2;
  int v3;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  short v13;
  int v14;
  int v15;
  int v16;

  v1 = a1;
  Function_20093b4((int)(a1 + 129), 2, 2, 2, 2, -1, -1, 0, 1, a1[95], a1[96], a1[97], a1[98], 0, 0);
  v5 = v1[20];
  v6 = v1 + 129;
  v9 = 0;
  v10 = 4096;
  v11 = 4096;
  v12 = 4096;
  v13 = 0;
  v14 = 1;
  v15 = 1;
  v16 = 51;
  v7 = 835584;
  v8 = 344064;
  v1[138] = Function_2021aa0((uint **)&v5);
  Function_2021cc8(v1[138], 1);
  Function_2021cac(v1[138], 1);
  v2 = &dword_21D32C4;
  v3 = 0;
  do
  {
    v7 = *((ushort *)v2 + 2) << 12;
    v8 = *((ushort *)v2 + 3) << 12;
    v1[139] = Function_2021aa0((uint **)&v5);
    Function_2021cc8(v1[139], 1);
    Function_2021d6c(v1[139], 2 * (v3 - 1) + 27);
    Function_2021cac(v1[139], 0);
    ++v3;
    ++v2;
    ++v1;
  }
  while ( v3 < 5 );
  v7 = 98304;
  v8 = 1703936;
  Function_201ff0c(0x10u, 1);
  return Function_201ff74(0x10u, 1);
}

//----- (021D16A0) --------------------------------------------------------
int __fastcall Function_21d16a0(uint **a1)
{
  uint **v1;

  v1 = a1;
  Function_201a7e8(*a1, (int)(a1 + 190), 5, 26, 20, 6u, 2u, 13, 451);
  Function_201ada4_ClearTextBox((int)(v1 + 190), 0);
  Function_201a7e8(*v1, (int)(v1 + 186), 0, 2, 19, 0x1Bu, 4u, 13, 40);
  Function_201ada4_ClearTextBox((int)(v1 + 186), 15);
  Function_201a7e8(*v1, (int)(v1 + 194), 0, 3, 1, 0x1Au, 2u, 15, 148);
  Function_21d1784(v1 + 194, v1[18], 0);
  Function_201a7e8(*v1, (int)(v1 + 166), 0, 2, 6, 0x10u, 0xBu, 15, 200);
  Function_201ada4_ClearTextBox((int)(v1 + 166), 0);
  return Function_21d2418(v1 + 166, 0, 66304, v1);
}

//----- (021D1784) --------------------------------------------------------
int __fastcall Function_21d1784(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2002d7c(1, a2, 0);
  Function_201ada4_ClearTextBox(v2, 0);
  return Function_201d78c(v2, 1);
}

//----- (021D17C8) --------------------------------------------------------
uint __fastcall Function_21d17c8(int a1)
{
  int v1;

  v1 = a1;
  Function_201a8fc(a1 + 664);
  Function_201a8fc(v1 + 776);
  Function_201a8fc(v1 + 760);
  return Function_201a8fc(v1 + 744);
}

//----- (021D17F8) --------------------------------------------------------
int __fastcall Function_21d17f8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_20388f4(0, 1);
  if ( Function_203608c() )
  {
    Function_21d2628(v2, 8, 0);
  }
  else if ( Function_2035e18() >= 2 )
  {
    Function_21d2628(v2, 2, 0);
  }
  Function_21d19b0(v2, 3);
  return v3;
}

//----- (021D1838) --------------------------------------------------------
int __fastcall Function_21d1838(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21d1864();
  if ( Function_203608c() )
  {
    Function_21d2524(v2);
  }
  else if ( Function_21d23fc() != 1 )
  {
    Function_21d2524(v2);
  }
  return v3;
}

//----- (021D1864) --------------------------------------------------------
int __fastcall Function_21d1864(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int result;
  char v6;
  char v7;
  char v8;
  int v9;

  v9 = a4;
  v4 = a1;
  if ( dword_21BF6C4 & 1 )
  {
    result = Function_203608c();
    if ( !result )
    {
      if ( v4[4754] != Function_21d2528() || v4[4756] )
      {
        result = Function_2005748(0x5F2u);
      }
      else
      {
        v8 = 1;
        Function_21d2628(v4, 3, 0);
        Function_21d19b0(v4, 22);
        Function_20359dc(117, (int)&v8, 1);
        result = Function_21d28d8(v4, 0);
      }
    }
  }
  else if ( dword_21BF6C4 & 2 )
  {
    if ( Function_203608c() )
    {
      if ( v4[4751] )
      {
        result = Function_2005748(0x5F2u);
      }
      else
      {
        Function_21d2628(v4, 4, 0);
        result = Function_21d19b0(v4, 4);
      }
    }
    else if ( v4[4754] != Function_2035e18() || v4[4756] )
    {
      result = Function_2005748(0x5F2u);
    }
    else
    {
      v7 = 1;
      Function_21d2628(v4, 4, 0);
      Function_21d19b0(v4, 4);
      Function_20359dc(117, (int)&v7, 1);
      result = Function_21d28d8(v4, 0);
    }
  }
  else
  {
    result = a1[4755];
    if ( !result )
    {
      result = Function_203608c();
      if ( !result )
      {
        result = Function_2035e18();
        if ( v4[4754] == result )
        {
          v6 = 0;
          result = Function_20359dc(117, (int)&v6, 1);
        }
      }
    }
  }
  return result;
}

//----- (021D1994) --------------------------------------------------------
void Function_21d1994()
{
  ;
}

//----- (021D1998) --------------------------------------------------------
int __fastcall Function_21d1998(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_21d19b0(a1, 2);
  Function_21d1994();
  return v2;
}

//----- (021D19B0) --------------------------------------------------------
int __fastcall Function_21d19b0(int result, int a2)
{
  *(uint *)(result + 836) = 30;
  *(uint *)(result + 840) = a2;
  return result;
}

//----- (021D19C0) --------------------------------------------------------
int __fastcall Function_21d19c0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_21d26b8(*(uint *)(a1 + 76)) )
    *(uint *)(v2 + 836) = *(uint *)(v2 + 840);
  Function_21d1994();
  return v3;
}

//----- (021D19E4) --------------------------------------------------------
int __fastcall Function_21d19e4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;

  v7 = a4;
  v4 = a1;
  v5 = a2;
  if ( !Function_203608c() )
  {
    v7 = 0;
    Function_20359dc(117, (int)&v7, 1);
  }
  *(uint *)(v4 + 836) = 3;
  Function_21d1994();
  return v5;
}

//----- (021D1A14) --------------------------------------------------------
int __fastcall Function_21d1a14(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  *(uint *)(a1 + 800) = Function_2002100(*(uint **)a1, (uchar *)dword_21D3288, 31, 11, 0x33u);
  *(uint *)(v2 + 836) = 5;
  Function_21d1994();
  return v3;
}

//----- (021D1A44) --------------------------------------------------------
int __fastcall Function_21d1a44(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  char v7;
  char v8;
  int v9;

  v2 = a1;
  v3 = a2;
  if ( Function_203608c() )
  {
    if ( *(uint *)(v2 + 19004) )
    {
      if ( dword_21BF6C4 & 0xC3 )
        Function_2005748(0x5F2u);
      Function_21d1994();
      return v3;
    }
    goto LABEL_10;
  }
  if ( !*(uint *)(v2 + 19024) )
  {
LABEL_10:
    v5 = Function_21d2528();
    if ( v5 == Function_2035e18() )
    {
      v6 = Function_2002114(*(uint *)(v2 + 800), 0x33u);
      if ( v6 != -1 )
      {
        if ( v6 == -2 )
        {
          if ( !Function_203608c() )
          {
            v9 = 0;
            Function_20359dc(117, (int)&v9, 1);
            Function_21d28d8(v2, 1);
          }
          Function_21d19b0(v2, 0);
        }
        else if ( Function_203608c() )
        {
          MI_CpuFill8(&v7, 0, 4u);
          v8 = 0;
          v7 = Function_203608c();
          *(uchar *)(v2 + 19028) = 1;
          *(ushort *)(v2 + 19038) = 0;
          *(uint *)(v2 + 836) = 6;
          Function_20359dc(112, (int)&v7, 4);
        }
        else
        {
          Function_21d19b0(v2, 11);
          Function_21d2628(v2, 14, 0);
        }
        *(uint *)(v2 + 800) = 0;
      }
      Function_21d1994();
      result = v3;
    }
    else
    {
      Function_21d1994();
      result = v3;
    }
    return result;
  }
  if ( dword_21BF6C4 & 0xC3 )
    Function_2005748(0x5F2u);
  Function_21d1994();
  return v3;
}

//----- (021D1B74) --------------------------------------------------------
int __fastcall Function_21d1b74(int a1, int a2)
{
  int v2;

  v2 = a2;
  *(ushort *)(a1 + 19038) = 0;
  Function_21d1994();
  return v2;
}

//----- (021D1B8C) --------------------------------------------------------
int __fastcall Function_21d1b8c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;

  v8 = a4;
  v4 = a1;
  v5 = a2;
  v6 = Function_2035e18();
  if ( *(ushort *)(v4 + 19036) == v6 && *(ushort *)(v4 + 19036) == Function_21d2528(v6) )
  {
    if ( (short)++*(ushort *)(v4 + 19038) > 30 )
    {
      MI_CpuFill8(&v8, 0, 4u);
      BYTE2(v8) = 1;
      LOBYTE(v8) = Function_203608c();
      Function_20359dc(112, (int)&v8, 4);
      *(ushort *)(v4 + 19038) = 0;
      *(uint *)(v4 + 836) = 9;
    }
    Function_21d1994();
    result = v5;
  }
  else
  {
    *(ushort *)(v4 + 19038) = 0;
    *(uint *)(v4 + 836) = 8;
    Function_21d1994();
    result = v5;
  }
  return result;
}

//----- (021D1C14) --------------------------------------------------------
int __fastcall Function_21d1c14(int a1, int a2)
{
  int v2;

  v2 = a2;
  *(uchar *)(a1 + 19028) = 0;
  Function_21d19b0(a1, 0);
  Function_21d1994();
  return v2;
}

//----- (021D1C34) --------------------------------------------------------
int __fastcall Function_21d1c34(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  *(uint *)(a1 + 800) = Function_2002100(*(uint **)a1, (uchar *)dword_21D3288, 31, 11, 0x33u);
  *(uint *)(v2 + 836) = 23;
  Function_21d1994();
  return v3;
}

//----- (021D1C64) --------------------------------------------------------
int __fastcall Function_21d1c64(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  v5 = a2;
  if ( *(uint *)(a1 + 19016) != Function_21d2528(a1) || *(uint *)(v4 + 19024) )
  {
    if ( dword_21BF6C4 & 0xC3 )
      Function_2005748(0x5F2u);
    Function_21d1994();
    result = v5;
  }
  else
  {
    v7 = Function_2002114(*(uint *)(v4 + 800), 0x33u);
    if ( v7 != -1 )
    {
      if ( v7 == -2 )
      {
        v8 = 0;
        Function_20359dc(117, (int)&v8, 1);
        Function_21d28d8(v4, 1);
        Function_21d19b0(v4, 0);
      }
      else if ( Function_203608c() )
      {
        ErrorHandler();
      }
      else
      {
        *(uint *)(v4 + 836) = 24;
        *(uchar *)(v4 + 19030) = Function_21d2528(836);
      }
      *(uint *)(v4 + 800) = 0;
    }
    Function_21d1994();
    result = v5;
  }
  return result;
}

//----- (021D1D14) --------------------------------------------------------
int __fastcall Function_21d1d14(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !*(uchar *)(a1 + 19031) && Function_20359dc(115, 0, 0) == 1 )
    *(uchar *)(v2 + 19031) = 1;
  return v3;
}

//----- (021D1D40) --------------------------------------------------------
int __fastcall Function_21d1d40(int a1)
{
  uint *v1;
  int result;

  v1 = (uint *)a1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 40), 0x12u, *(ushort **)(a1 + 72));
  Function_21d1784((int)(v1 + 194), v1[18]);
  Function_2021d6c(v1[138], 0x25u);
  result = 1;
  v1[3] = 1;
  return result;
}

//----- (021D1D70) --------------------------------------------------------
int __fastcall Function_21d1d70(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_203608c() )
    Function_2035e18();
  if ( *(uint *)(v2 + 18996) == Function_2035e18() )
    *(uint *)(v2 + 836) = 26;
  return v3;
}

//----- (021D1DA0) --------------------------------------------------------
int __fastcall Function_21d1da0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_21d313c(*(uint *)(a1 + 19000), a1 + 3956);
  *(uint *)(v2 + 836) = 27;
  return v3;
}

//----- (021D1DC8) --------------------------------------------------------
int __fastcall Function_21d1dc8(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int *v4;

  v2 = a1;
  v3 = a2;
  byte_21BF6E4 = 1;
  v4 = Function_202c1b4(0x33u);
  Function_202b758(*(uint *)(v2[2] + 16), (int)v4, 4u);
  Function_202cfec(*(uint *)(v2[2] + 12), 20);
  Function_2038ed4(v2 + 232);
  v2[209] = 28;
  return v3;
}

//----- (021D1E0C) --------------------------------------------------------
int __fastcall Function_21d1e0c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( !Function_203608c() )
    Function_2035e18();
  if ( Function_2038edc(**(uint **)(v2 + 8), 2, (uint *)(v2 + 928), v4) )
  {
    Function_20057a4(1624, 8);
    Function_21d2628(v2, 13, 0);
    Function_21d19b0(v2, 29);
    Function_2021d6c(*(uint *)(v2 + 552), 0);
    *(uint *)(v2 + 12) = 0;
    *(uint *)(v2 + 848) = 0;
    byte_21BF6E4 = 0;
    *(uchar *)(v2 + 19008) = byte_21BF6E4;
  }
  return v3;
}

//----- (021D1E7C) --------------------------------------------------------
int __fastcall Function_21d1e7c(int a1, int a2)
{
  int v2;

  v2 = *(uint *)(a1 + 848);
  *(uint *)(a1 + 848) = v2 + 1;
  if ( v2 > 60 )
    *(uint *)(a1 + 836) = 15;
  return a2;
}

//----- (021D1E98) --------------------------------------------------------
int __fastcall Function_21d1e98(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  Function_21d2628(a1, 5, 0);
  Function_21d19b0(v3, 10);
  Function_21d1994();
  return v2;
}

//----- (021D1EB8) --------------------------------------------------------
int __fastcall Function_21d1eb8(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( ++*(uint *)(a1 + 848) > 60 )
  {
    Function_200f174(0, 16, 16, 0, 16, 1, 51);
    v2 = 3;
  }
  Function_21d1994();
  return v2;
}

//----- (021D1EF4) --------------------------------------------------------
int __fastcall Function_21d1ef4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  *(uint *)(a1 + 800) = Function_2002100(*(uint **)a1, (uchar *)dword_21D3288, 31, 11, 0x33u);
  *(uint *)(v2 + 836) = 12;
  Function_21d1994();
  return v3;
}

//----- (021D1F24) --------------------------------------------------------
int __fastcall Function_21d1f24(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int result;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  v5 = a2;
  if ( a1[4754] != Function_21d2528(a1) || v4[4756] )
  {
    if ( dword_21BF6C4 & 0xC3 )
      Function_2005748(0x5F2u);
    Function_21d1994();
    result = v5;
  }
  else
  {
    v7 = Function_2002114(v4[200], 0x33u);
    if ( v7 != -1 )
    {
      if ( v7 == -2 )
      {
        v8 = 0;
        v4[209] = 0;
        Function_20359dc(117, (int)&v8, 1);
        Function_21d28d8(v4, 1);
      }
      else
      {
        v4[209] = 13;
        Function_20359dc(113, 0, 0);
        Function_2032ee8(0);
        Function_200b498(v4[9], 0);
      }
      v4[200] = 0;
    }
    Function_21d1994();
    result = v5;
  }
  return result;
}

//----- (021D1FD0) --------------------------------------------------------
int __fastcall Function_21d1fd0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_203608c() )
  {
    Function_2032ee8(0);
    Function_200b498(*(uint *)(v2 + 36), 0);
    Function_21d2628(v2, 16, 0);
  }
  else
  {
    Function_21d2628(v2, 5, 0);
  }
  Function_21d19b0(v2, 14);
  *(uint *)(v2 + 848) = 0;
  Function_21d1994();
  return v3;
}

//----- (021D2020) --------------------------------------------------------
int __fastcall Function_21d2020(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( ++*(uint *)(a1 + 848) > 45 )
    *(uint *)(a1 + 836) = 15;
  Function_21d1994();
  return v2;
}

//----- (021D2044) --------------------------------------------------------
int __fastcall Function_21d2044(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_20364f0(201);
  *(uint *)(v2 + 836) = 16;
  Function_21d1994();
  return v3;
}

//----- (021D2064) --------------------------------------------------------
int __fastcall Function_21d2064(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( Function_2036540(201) )
  {
    Function_20388f4(0, 0);
    Function_200f174(0, 16, 16, 0, 16, 1, 51);
    v2 = 3;
  }
  Function_21d1994();
  return v2;
}

//----- (021D20A4) --------------------------------------------------------
int __fastcall Function_21d20a4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_21d26b8(*(uint *)(a1 + 76)) )
    Function_21d2628(v2, 9, 0);
  *(uint *)(v2 + 836) = 18;
  Function_21d1994();
  return v3;
}

//----- (021D20D0) --------------------------------------------------------
int __fastcall Function_21d20d0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_21d26b8(*(uint *)(a1 + 76)) )
    *(uint *)(v2 + 836) = 10;
  Function_21d1994();
  return v3;
}

//----- (021D20F4) --------------------------------------------------------
int __fastcall Function_21d20f4(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a1[19];
  v4 = a2;
  if ( v3 != 255 && !Function_21d26b8(v3) )
    Call_RemoveTextInterpreterTaskFromTaskList(v2[19] & 0xFF);
  Function_21d2628(v2, 15, 1);
  v2[209] = 20;
  if ( !Function_203608c() )
    Function_21d28d8(v2, 0);
  v2[4758] = Function_2035e18();
  v2[4760] = 300;
  Function_21d1994();
  return v4;
}

//----- (021D2154) --------------------------------------------------------
int __fastcall Function_21d2154(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( a1[4758] && a1[4758] != Function_2035e18() )
    v2[4758] = 0;
  v2[209] = 21;
  v2[212] = 0;
  Function_21d1994();
  return v3;
}

//----- (021D2190) --------------------------------------------------------
int __fastcall Function_21d2190(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( a1[4758] && a1[4758] != Function_2035e18() )
    v2[4758] = 0;
  if ( --v2[4760] < 0 )
    v2[4758] = 0;
  if ( ++v2[212] > 60 && !v2[4758] )
  {
    v2[209] = 0;
    if ( !Function_203608c() )
      Function_21d28d8(v2, 1);
  }
  Function_21d1994();
  return v3;
}

//----- (021D2204) --------------------------------------------------------
int __fastcall Function_21d2204(int result, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = a2;
  v4 = (int *)result;
  v5 = a3;
  if ( a2 > 13 )
  {
    if ( a2 > 19 )
    {
      if ( a2 != 25 )
        return result;
      if ( !Function_21d26b8(*(uint *)(result + 76)) )
        Call_RemoveTextInterpreterTaskFromTaskList(v4[19] & 0xFF);
      Function_21d2628(v4, 12, 0);
      v7 = v4[200];
      if ( v7 )
      {
        Function_2002154(v7, 0x33u);
        v4[200] = 0;
      }
      goto LABEL_27;
    }
    if ( a2 == 19 )
    {
      result = *(uchar *)(result + 19028);
      if ( result != 1 )
      {
        Function_2032ee8(a3);
        Function_200b498(v4[9], 0);
        result = Function_203608c();
        if ( v5 != result )
        {
          v8 = v4[200];
          if ( v8 )
          {
            Function_2002154(v8, 0x33u);
            v4[200] = 0;
          }
          if ( !Function_203608c() )
            v4[4756] &= v5 ^ 0xFFFF;
          goto LABEL_27;
        }
      }
    }
  }
  else
  {
    if ( a2 >= 13 )
    {
      v6 = *(uint *)(result + 800);
      if ( v6 )
      {
        Function_2002154(v6, 0x33u);
        v4[200] = 0;
      }
      goto LABEL_27;
    }
    if ( a2 <= 8 && a2 >= 2 )
    {
      if ( a2 == 2 )
      {
        Function_21d26d8();
      }
      else if ( a2 != 7 && a2 != 8 )
      {
        return result;
      }
LABEL_27:
      result = 836;
      v4[209] = v3;
      return result;
    }
  }
  return result;
}

//----- (021D22EC) --------------------------------------------------------
int __fastcall Function_21d22ec(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int result;
  int v6;
  int v7;
  int v8;

  v8 = a4;
  v4 = a1;
  result = a1[209];
  v6 = a3;
  if ( result == 3 )
  {
    if ( a2 == 1 )
    {
      Function_2032ee8(a3);
      Function_200b498(v4[9], 0);
      Function_21d28d8(v4, 1);
      v4[209] = 1;
      v4[4754] = Function_2035e18();
      v4[4756] = 0;
      result = Function_203608c();
      if ( !result )
      {
        v7 = 1;
        result = Function_20359dc(117, (int)&v7, 1);
      }
    }
    else if ( a2 == 19 )
    {
      Function_2032ee8(a3);
      Function_200b498(v4[9], 0);
      result = Function_203608c();
      if ( v6 != result )
      {
        if ( !Function_203608c() )
          v4[4756] &= v6 ^ 0xFFFF;
        result = 836;
        v4[209] = 19;
      }
    }
    else
    {
      result = ErrorHandler();
    }
  }
  else if ( a2 == 1 )
  {
    v4[4756] = 0;
    result = Function_2035e18();
    v4[4754] = result;
  }
  return result;
}

//----- (021D23B0) --------------------------------------------------------
uint __fastcall Function_21d23b0(ushort *a1, int a2, int a3, int a4)
{
  int v5;

  v5 = a4;
  *a1 += 10;
  if ( (ushort)*a1 > 0x168u )
    *a1 = 0;
  LOWORD(v5) = 32 * ((int)(10 * Function_201d250((ushort)*a1)) / 4096 + 15) | 0x1D;
  GX_LoadOBJPltt((int)&v5, 10, 2u);
  return GX_LoadOBJPltt((int)&v5, 42, 2u);
}

//----- (021D23FC) --------------------------------------------------------
int Function_21d23fc()
{
  int v0;
  int v1;

  v0 = 0;
  v1 = 0;
  do
  {
    if ( Function_2032ee8(v1) )
      ++v0;
    ++v1;
  }
  while ( v1 < 5 );
  return v0;
}

//----- (021D2418) --------------------------------------------------------
int __fastcall Function_21d2418(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
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

  v15 = a4;
  v4 = a1;
  Function_203608c();
  if ( !Function_21d254c(v15) )
    return 0;
  Function_201ada4_ClearTextBox(v4, 0);
  v7 = v15;
  v16 = 0;
  v8 = v15;
  v9 = 1;
  do
  {
    v10 = *(uint *)(v7 + 868);
    if ( v10 )
    {
      v11 = GetSecretTrainerID(v10);
      Function_2025ef4(*(ushort **)(v7 + 868), *(ushort **)(v8 + 44));
      Function_200b60c(*(uint *)(v15 + 36), 0, v11, 5, 2, 1);
      v12 = Function_200b29c(*(uint **)(v15 + 36), *(ushort ***)(v15 + 40), 1u, 0x33u);
      v13 = *(uint *)(v8 + 44);
      Function_201d78c(v4, 0);
      Function_201d78c(v4, 0);
      Function_20237bc_FreeMsg((int)v12, v14);
    }
    v7 += 8;
    v8 += 4;
    v9 += 18;
    ++v16;
  }
  while ( v16 < 5 );
  Function_201a954(v4, v6);
  return 1;
}

//----- (021D2524) --------------------------------------------------------
void Function_21d2524()
{
  ;
}

//----- (021D2528) --------------------------------------------------------
int Function_21d2528()
{
  int v0;
  int v1;

  v0 = 0;
  v1 = 0;
  do
  {
    if ( Function_2032ee8(v1) )
      ++v0;
    ++v1;
  }
  while ( v1 < 5 );
  return v0;
}

//----- (021D2544) --------------------------------------------------------
int Function_21d2544()
{
  return Function_21d2528();
}

//----- (021D254C) --------------------------------------------------------
int __fastcall Function_21d254c(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  uint *v10;
  int v11;
  int v13;

  v1 = a1;
  v2 = 0;
  v13 = 0;
  v3 = a1;
  v4 = a1;
  do
  {
    v3[218] = v3[217];
    v3[217] = Function_2032ee8(v2);
    v5 = v4[4762];
    v4[4763] = v4[4761];
    v4[4764] = v5;
    v6 = v3[217];
    if ( v6 )
    {
      v4[4761] = GetTrainerID(v6);
      v7 = 1;
    }
    else
    {
      v7 = 0;
      v4[4761] = 0;
    }
    ++v2;
    v4[4762] = v7;
    v3 += 2;
    v4 += 4;
  }
  while ( v2 < 5 );
  v8 = 0;
  v9 = v1;
  v10 = v1;
  do
  {
    v11 = v1[217];
    if ( v1[218] == v11 )
    {
      if ( *(ull *)(v10 + 4763) != *(ull *)(v10 + 4761) )
      {
        v13 = 1;
        if ( v10[4762] )
          v9[227] = 1;
        else
          v9[227] = 3;
      }
    }
    else
    {
      v13 = 1;
      if ( v11 )
        v9[227] = 1;
      else
        v9[227] = 3;
    }
    ++v8;
    v1 += 2;
    ++v9;
    v10 += 4;
  }
  while ( v8 < 5 );
  return v13;
}

//----- (021D2628) --------------------------------------------------------
int __fastcall Function_21d2628(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  int result;
  int v10;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (ushort *)Function_2023790(180, 0x33u);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v3 + 40), v4, v6);
  Function_200c388(*(uint **)(v3 + 36), *(uint *)(v3 + 68), (int)v6);
  Function_20237bc_FreeMsg((int)v6, v7);
  Function_201ada4_ClearTextBox(v3 + 744, 15);
  Function_200e060(v3 + 744, 0, 1, 0xAu);
  if ( v5 )
  {
    v10 = *(uint *)(v3 + 68);
    Function_201d738_CallInitTextInterpreter(v3 + 744, 1);
    result = 255;
    *(uint *)(v3 + 76) = 255;
  }
  else
  {
    Function_21d28d4(v3);
    v8 = *(uint *)(v3 + 68);
    result = Function_201d738_CallInitTextInterpreter(v3 + 744, 1);
    *(uint *)(v3 + 76) = result;
  }
  return result;
}

//----- (021D26B8) --------------------------------------------------------
BOOL __fastcall Function_21d26b8(int a1)
{
  BOOL result;

  if ( a1 == 255 )
    result = 1;
  else
    result = Function_201d724((uchar)a1) == 0;
  return result;
}

//----- (021D26D8) --------------------------------------------------------
char *__fastcall Function_21d26d8(int a1)
{
  return Function_200e084(a1 + 744, 0);
}

//----- (021D26E8) --------------------------------------------------------
int __fastcall Function_21d26e8(int a1)
{
  int v1;
  int v2;
  int v3;
  uint v4;
  int v5;
  int result;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v1 = a1;
  v7 = 27;
  v11 = a1 + 812;
  v2 = 0;
  v8 = 0;
  v3 = a1;
  v4 = 28;
  v12 = a1 + 828;
  do
  {
    switch ( (uchar)*(uint *)(v1 + 908) )
    {
      case 1u:
        if ( !*(uint *)(v3 + 868) )
          ErrorHandler();
        v9 = GetGender(*(uint *)(v3 + 868));
        v10 = Function_2025f8c(*(uint *)(v3 + 868));
        if ( v2 == Function_203608c() )
        {
          Function_2021d6c(*(uint *)(v1 + 556), 2 * v9 + 38);
        }
        else
        {
          Function_21d2860(v11, v12, v2, v10, v9);
          Function_2021d6c(*(uint *)(v1 + 556), v7);
        }
        Function_2021cac(*(uint *)(v1 + 556), 1);
        *(uint *)(v1 + 908) = 2;
        v8 = 1;
        break;
      case 3u:
        if ( v2 == Function_203608c() )
        {
          v5 = GetGender(*(uint *)(v3 + 868));
          Function_2021d6c(*(uint *)(v1 + 556), 2 * v5 + 39);
        }
        else
        {
          Function_2021d6c(*(uint *)(v1 + 556), v4);
        }
        *(uint *)(v1 + 908) = 0;
        break;
      default:
        break;
    }
    ++v2;
    v1 += 4;
    v3 += 8;
    v4 += 2;
    v7 += 2;
  }
  while ( v2 < 5 );
  result = v8;
  if ( v8 )
    result = Function_2005748(0x64Fu);
  return result;
}

//----- (021D27FC) --------------------------------------------------------
int __fastcall Function_21d27fc(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  a1[205] = Function_2006f88(104, 8, a1 + 207, 51);
  v2[206] = Function_20071ec(v3, 7u, v2 + 208, 51);
  v2[201] = Function_2006f50(104, 32, 1, v2 + 203, 51);
  result = Function_20071b4(v3, 9u, 1, v2 + 204, 51);
  v2[202] = result;
  return result;
}

//----- (021D2860) --------------------------------------------------------
uint __fastcall Function_21d2860(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = Function_205ca0c(a5, a4);
  v9 = *(uint *)(*(uint *)(v6 + 4) + 12);
  GX_LoadOBJ(
    (int *)(*(uint *)(*(uint *)(v5 + 4) + 20) + 1536 * v8),
    *((ushort *)dword_21D3290 + v7),
    0x600u);
  return GX_LoadOBJPltt(v9 + 32 * v8, 32 * (v7 + 7), 0x20u);
}

//----- (021D28A4) --------------------------------------------------------
uint __fastcall Function_21d28a4(int *a1)
{
  int *v1;

  v1 = a1;
  free(a1[205]);
  free(v1[206]);
  free(v1[201]);
  return free(v1[202]);
}

//----- (021D28D4) --------------------------------------------------------
int Function_21d28d4()
{
  return 1;
}

//----- (021D28D8) --------------------------------------------------------
int __fastcall Function_21d28d8(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = a1;
  v3 = a2;
  result = Function_203608c();
  if ( !result )
  {
    if ( v3 == -1 )
    {
      Function_2037b58(1);
    }
    else
    {
      v5 = v3 + Function_2035e18();
      if ( v5 > 5 )
        v5 = 5;
      Function_2037b58(v5);
    }
    result = 19029;
    if ( v3 == -1 )
    {
      *(uchar *)(v2 + 19029) = 2;
    }
    else if ( v3 )
    {
      *(uchar *)(v2 + 19029) = 0;
    }
    else
    {
      *(uchar *)(v2 + 19029) = 1;
    }
  }
  return result;
}

//----- (021D292C) --------------------------------------------------------
int __fastcall Function_21d292c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  char v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a2;
  v6 = Function_21d2528();
  if ( v6 <= *(uint *)(v4 + 19016) )
  {
    v7 = 0;
  }
  else
  {
    v11 = 1;
    Function_20359dc(117, (int)&v11, 1);
    v7 = 1;
  }
  *(uint *)(v4 + 19020) = v7;
  v8 = *(uint *)(v4 + 19012);
  if ( v6 == v8 )
    return 1;
  switch ( (uchar)v8 )
  {
    case 1:
      if ( Function_2035e18() > 1 || (uint)Function_20318ec() > 1 )
        return 1;
      *(uint *)(v4 + 836) = 17;
      Function_21d28d8(v4, -1);
      v10 = *(uint *)(v4 + 800);
      if ( v10 )
      {
        Function_2002154(v10, 0x33u);
        *(uint *)(v4 + 800) = 0;
      }
      return 2;
    case 2:
    case 3:
    case 4:
      Function_205bea8(2u);
      if ( v6 < *(uint *)(v4 + 19012) )
      {
        if ( *(uchar *)(v4 + 19029) )
        {
          if ( *(uchar *)(v4 + 19029) == 1 )
            Function_21d28d8(v4, 0);
        }
        else
        {
          Function_21d28d8(v4, v5);
        }
        *(uint *)(v4 + 19016) = Function_2035e18();
      }
      break;
    case 5:
      Function_205bea8(9u);
      Function_21d28d8(v4, v5);
      break;
    default:
      break;
  }
  *(uint *)(v4 + 19012) = Function_21d2528();
  return 1;
}

//----- (021D2A2C) --------------------------------------------------------
int Function_21d2a2c()
{
  return 44;
}

//----- (021D2A30) --------------------------------------------------------
int __fastcall Function_21d2a30(int a1)
{
  return a1 + 44;
}

//----- (021D2A34) --------------------------------------------------------
int __fastcall Function_21d2a34(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = 5;
  v5 = a1 + 220;
  do
  {
    v6 = (int *)(v5 - 44);
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
    --v4;
    v5 -= 44;
    *v7 = *v6;
  }
  while ( v4 > 2 );
  v11 = (int *)(v2 + 88);
  v12 = 5;
  do
  {
    v13 = *v3;
    v14 = v3[1];
    v3 += 2;
    *v11 = v13;
    v11[1] = v14;
    v11 += 2;
    --v12;
  }
  while ( v12 );
  result = *v3;
  *v11 = *v3;
  return result;
}

//----- (021D2A78) --------------------------------------------------------
int __fastcall Function_21d2a78(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int result;

  v2 = a2;
  v3 = a1;
  if ( a2 < 2 || a2 > 5 )
    ErrorHandler();
  v4 = v2 + 1;
  if ( v2 + 1 <= 5 )
  {
    v5 = v3 + 44 * v4;
    do
    {
      v6 = (int *)v5;
      v7 = (int *)(v5 - 44);
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
      ++v4;
      v5 += 44;
      *v7 = *v6;
    }
    while ( v4 <= 5 );
  }
  result = 0xFFFF;
  *(ushort *)(v3 + 220) = -1;
  *(ushort *)(v3 + 236) = -1;
  return result;
}

//----- (021D2AC4) --------------------------------------------------------
void __fastcall __spoils<R1,R2,R3,R12> Function_21d2ac4(int a1, int a2, int a3, ushort **a4)
{
  int v4;
  ushort *v5;
  int v6;
  int v7;
  int v8;
  ushort **v9;
  int v10;

  v10 = 0;
  v4 = a3;
  v8 = a2;
  v9 = a4;
  if ( a1 > 0 )
  {
    do
    {
      v5 = *v9;
      if ( v10 != v8 && v5 && Function_202b510(*v9) != 1 && !Function_202b530((int)v5, v4) )
      {
        v6 = 0;
        do
        {
          if ( Function_202b530((int)v5, v4 + 44 * (v6 + 2)) )
            Function_21d2a78(v4, v6 + 2);
          ++v6;
        }
        while ( v6 < 4 );
        Function_21d2a34(v4, (int *)v5);
      }
      ++v9;
      ++v10;
    }
    while ( v10 < v7 );
  }
}

//----- (021D2B44) --------------------------------------------------------
int Function_21d2b44()
{
  return 288;
}

//----- (021D2B4C) --------------------------------------------------------
int Function_21d2b4c()
{
  return 288;
}

//----- (021D2B54) --------------------------------------------------------
int Function_21d2b54()
{
  return 288;
}

//----- (021D2B5C) --------------------------------------------------------
int __fastcall Function_21d2b5c(int a1, int a2)
{
  uchar *v2;
  int v3;
  uchar *v4;

  v2 = (uchar *)*(&off_21D33E4 + a1);
  v3 = 0;
  if ( *v2 == 255 )
    return 0;
  v4 = v2;
  while ( a2 != *v2 )
  {
    ++v3;
    ++v2;
    if ( v4[v3] == 255 )
      return 0;
  }
  return 1;
}

//----- (021D2B90) --------------------------------------------------------
int __fastcall Function_21d2b90(int a1, int a2, int *a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int result;
  short *v10;
  int *v11;
  uint *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v6 = a2;
  v7 = a3;
  v18 = a4;
  v8 = LoadTrainerDataAdress(a1);
  v19 = 0;
  result = v18;
  if ( v18 > 0 )
  {
    do
    {
      MIi_CpuClearFast(0, (uint *)v6, 0x48u);
      *(uint *)v6 = GetTrainerID(v8);
      *(uchar *)(v6 + 4) = GetGender(v8);
      *(uchar *)(v6 + 5) = 12;
      *(uchar *)(v6 + 6) = 2;
      Function_2025ef0_Dummy();
      Function_20021d0((ushort *)(v6 + 8), v10, 8u);
      v11 = v7;
      v12 = (uint *)(v6 + 24);
      v13 = 6;
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
      *(uchar *)(v6 + 25) = 0;
      if ( a5 == 1 && !Function_21d2b5c(a6, *(uchar *)(v6 + 24)) )
        *(uchar *)(v6 + 24) = 0;
      v7 += 12;
      v16 = v19 + 1;
      v19 = v16;
      v17 = v16;
      result = v18;
      v6 += 72;
    }
    while ( v17 < v18 );
  }
  return result;
}

//----- (021D2C28) --------------------------------------------------------
int __fastcall Function_21d2c28(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a3;
  v4 = a1;
  v5 = malloc2(a2, a3);
  v6 = Function_202440c(v4);
  if ( v3 != Function_21d2b44() )
    ErrorHandler();
  Function_21d2b90(v4, v5, (int *)(v6 + 396), 4, 1, 3);
  return v5;
}

//----- (021D2C70) --------------------------------------------------------
int __fastcall Function_21d2c70(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a3;
  v4 = a1;
  v5 = malloc2(a2, a3);
  v6 = Function_202440c(v4);
  if ( v3 != Function_21d2b4c() )
    ErrorHandler();
  Function_21d2b90(v4, v5, (int *)(v6 + 12), 4, 1, 4);
  return v5;
}

//----- (021D2CB4) --------------------------------------------------------
int __fastcall Function_21d2cb4(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a3;
  v4 = a1;
  v5 = malloc2(a2, a3);
  v6 = Function_202440c(v4);
  if ( v3 != Function_21d2b54() )
    ErrorHandler();
  Function_21d2b90(v4, v5, (int *)(v6 + 204), 4, 1, 5);
  return v5;
}

//----- (021D2CF8) --------------------------------------------------------
int __fastcall Function_21d2cf8(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a3;
  v4 = a1;
  v5 = malloc2(a2, a3);
  v6 = Function_202440c(v4);
  if ( v3 != Function_21d2b44() )
    ErrorHandler();
  Function_21d2b90(v4, v5, (int *)(v6 + 396), 4, 0, 0);
  return v5;
}

//----- (021D2D3C) --------------------------------------------------------
int __fastcall Function_21d2d3c(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a3;
  v4 = a1;
  v5 = malloc2(a2, a3);
  v6 = Function_202440c(v4);
  if ( v3 != Function_21d2b4c() )
    ErrorHandler();
  Function_21d2b90(v4, v5, (int *)(v6 + 12), 4, 0, 1);
  return v5;
}

//----- (021D2D80) --------------------------------------------------------
int __fastcall Function_21d2d80(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a3;
  v4 = a1;
  v5 = malloc2(a2, a3);
  v6 = Function_202440c(v4);
  if ( v3 != Function_21d2b54() )
    ErrorHandler();
  Function_21d2b90(v4, v5, (int *)(v6 + 204), 4, 0, 2);
  return v5;
}

//----- (021D2DC4) --------------------------------------------------------
int __fastcall Function_21d2dc4(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  uint *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint *v16;
  int v17;
  int v18;
  int v19;

  v4 = (int *)a3;
  v5 = a2;
  v6 = a1;
  if ( !*(uchar *)(a3 + 24) )
    return 0;
  if ( !Function_21d2b5c(a4, *(uchar *)(a3 + 24)) )
    return -1;
  v8 = 0;
  if ( v5 <= 0 )
  {
LABEL_12:
    v14 = 0;
    if ( v5 <= 0 )
    {
LABEL_19:
      result = 0;
    }
    else
    {
      v15 = v6;
      while ( *(uchar *)(v15 + 25) < 3u )
      {
        ++v14;
        v15 += 72;
        if ( v14 >= v5 )
          goto LABEL_19;
      }
      v16 = (uint *)(v6 + 72 * v14);
      v17 = 9;
      do
      {
        v18 = *v4;
        v19 = v4[1];
        v4 += 2;
        *v16 = v18;
        v16[1] = v19;
        v16 += 2;
        --v17;
      }
      while ( v17 );
      result = 1;
    }
  }
  else
  {
    v9 = v6;
    while ( *(uchar *)(v9 + 24) )
    {
      ++v8;
      v9 += 72;
      if ( v8 >= v5 )
        goto LABEL_12;
    }
    v10 = (uint *)(v6 + 72 * v8);
    v11 = 9;
    do
    {
      v12 = *v4;
      v13 = v4[1];
      v4 += 2;
      *v10 = v12;
      v10[1] = v13;
      v10 += 2;
      --v11;
    }
    while ( v11 );
    result = 1;
  }
  return result;
}

//----- (021D2E40) --------------------------------------------------------
int __fastcall Function_21d2e40(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a3;
  v5 = Function_2032ee8(a1);
  if ( !v5 )
    return 0;
  if ( Function_2025fcc(v5) )
    v4 = v3;
  return v4;
}

//----- (021D2E60) --------------------------------------------------------
int __fastcall Function_21d2e60(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  int v15;
  int v16;
  int v17;
  uint *v18;
  int v19;
  char v20[36];

  v14 = a1;
  v15 = a2;
  v7 = a3;
  v16 = a4;
  MI_CpuFill8(v20, 0, 0x10u);
  v8 = 0;
  v9 = 0;
  if ( v7 > 0 )
  {
    v18 = (uint *)a5;
    do
    {
      if ( *v18 )
      {
        v19 = 0;
        v17 = 0;
        while ( v19 < 4 )
        {
          while ( 1 )
          {
            if ( *(uint *)(a5 + 4 * v8) )
            {
              if ( v8 != v9 )
              {
                v11 = (uchar)v20[v8];
                if ( v11 != 4 )
                  break;
              }
            }
            s32_div_f(v8 + 1, v7);
            v8 = v10;
          }
          v20[v8] = v11 + 1;
          if ( v8 != v16 )
          {
            v12 = Function_21d2e40(v8, a5, a6);
            if ( v12 )
              Function_21d2dc4(v14, v15, *(uint *)(v12 + 4 * v8) + v17, a7);
          }
          v17 += 72;
          ++v19;
        }
      }
      ++v9;
      ++v18;
    }
    while ( v9 < v7 );
  }
  return Function_2025c84(27);
}

//----- (021D2F10) --------------------------------------------------------
int __fastcall Function_21d2f10(int a1, int a2, int a3, int a4, int a5)
{
  return Function_21d2e60(a1 + 588, 16, a2, a3, a4, a5, 1);
}

//----- (021D2F38) --------------------------------------------------------
int __fastcall Function_21d2f38(int a1, int a2, int a3, int a4, int a5)
{
  return Function_21d2e60(a1 + 1740, 8, a2, a3, a4, a5, 2);
}

//----- (021D2F60) --------------------------------------------------------
int __fastcall Function_21d2f60(int a1, int a2, int a3, int a4, int a5)
{
  return Function_21d2e60(a1 + 2316, 8, a2, a3, a4, a5, 0);
}

//----- (021D2F88) --------------------------------------------------------
int __fastcall Function_21d2f88(int a1)
{
  LoadVariableAreaAdress_11(a1);
  return Function_21d2a2c();
}

//----- (021D2F94) --------------------------------------------------------
uint *__fastcall Function_21d2f94(int a1, uint a2, uint a3)
{
  uint v3;
  uint v4;
  int v5;
  uint *v6;
  uint *v7;
  uint v8;

  v3 = a2;
  v4 = a3;
  v5 = LoadVariableAreaAdress_11(a1);
  v6 = (uint *)malloc2(v3, v4);
  v7 = (uint *)Function_21d2a30(v5);
  MIi_CpuCopyFast(v7, v6, v4, v8);
  return v6;
}

//----- (021D2FBC) --------------------------------------------------------
int __fastcall Function_21d2fbc(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = LoadVariableAreaAdress_11(*(uint *)(a1 + 4));
  result = *(uint *)(v1 + 8);
  Function_21d2ac4(result, *(uint *)(v1 + 12), v2, *(ushort ***)(v1 + 16));
  return result;
}

//----- (021D2FD4) --------------------------------------------------------
int __fastcall Function_21d2fd4(int a1)
{
  LoadVariableAreaAdress_e(a1);
  return Function_2029c60();
}

//----- (021D2FE0) --------------------------------------------------------
uint *__fastcall Function_21d2fe0(int a1, uint a2, uint a3)
{
  uint v3;
  uint v4;
  int v5;
  uint *v6;
  uint *v7;
  uint v8;

  v3 = a2;
  v4 = a3;
  v5 = LoadVariableAreaAdress_e(a1);
  v6 = (uint *)malloc2(v3, v4);
  v7 = (uint *)Function_2029ca8(v5, 0);
  MIi_CpuCopyFast(v7, v6, v4, v8);
  return v6;
}

//----- (021D300C) --------------------------------------------------------
int __fastcall Function_21d300c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = LoadVariableAreaAdress_e(*(uint *)(a1 + 4));
  return Function_202a6a8(*(uint *)(v1 + 8) & 0xFF, *(uint *)(v1 + 12), v2, *(int ***)(v1 + 16));
}

//----- (021D3028) --------------------------------------------------------
int __fastcall Function_21d3028(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = Function_202440c(a1[1]);
  return Function_21d2f10(v2, v1[2], v1[3], v1[4], v1[5]);
}

//----- (021D3048) --------------------------------------------------------
int __fastcall Function_21d3048(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = Function_202440c(a1[1]);
  return Function_21d2f38(v2, v1[2], v1[3], v1[4], v1[5]);
}

//----- (021D3068) --------------------------------------------------------
int __fastcall Function_21d3068(int *a1)
{
  int *v1;
  int v2;

  v1 = a1;
  v2 = Function_202440c(a1[1]);
  return Function_21d2f60(v2, v1[2], v1[3], v1[4], v1[5]);
}

//----- (021D3088) --------------------------------------------------------
ushort *__fastcall Function_21d3088(int a1, uint a2)
{
  return Function_202e9fc(a1, a2);
}

//----- (021D3090) --------------------------------------------------------
uint __fastcall Function_21d3090(uint *a1)
{
  uint *v1;

  v1 = a1;
  Function_202e8c0(a1[1]);
  return Function_202ed0c(v1[1], v1[3], v1[2] & 0xFF, v1[4], *v1);
}

//----- (021D30B4) --------------------------------------------------------
ushort *__fastcall Function_21d30b4(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  ushort *v5;

  v3 = a3;
  v4 = a1;
  v5 = (ushort *)malloc2(a2, a3);
  MI_CpuFill8(v5, 0, v3);
  Function_2073700(v4, 0, (uint)v5);
  return v5;
}

//----- (021D30DC) --------------------------------------------------------
void Function_21d30dc()
{
  ;
}

//----- (021D30E0) --------------------------------------------------------
int __fastcall Function_21d30e0(int a1, uint *a2)
{
  uint v2;
  void **v3;
  uint v4;
  uint v5;
  uint *v6;
  int result;
  int v8;
  uint *v9;
  int v10;

  v8 = a1;
  v2 = 3000;
  v3 = &off_21D33FC;
  v9 = a2;
  v10 = 0;
  do
  {
    v4 = ((int (__fastcall *)(int))*v3)(v8);
    v6 = (uint *)((int (__fastcall *)(int, int, uint))v3[1])(v8, 51, v4);
    if ( v2 <= v4 )
      ErrorHandler();
    MIi_CpuCopyFast(v6, v9, v4, v5);
    free((int)v6);
    v2 -= v4;
    v9 = (uint *)((char *)v9 + v4);
    v3 += 3;
    result = v10 + 1;
    v10 = result;
  }
  while ( result < 10 );
  return result;
}

//----- (021D313C) --------------------------------------------------------
int __fastcall Function_21d313c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  void **v6;
  int v7;
  void **v8;
  int v9;
  int v10;
  void **v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  void (__fastcall *v20)(int *);
  int v21;
  int v23;
  int v24;
  uint v25;
  int *v26;
  void **v27;
  uint v28;
  uint v29;
  int v30;
  int v31;
  int v32;
  char v33;
  char v34;
  int v35;
  int v36;
  int v37;
  int v38;
  char *v39;
  char *v40;
  int v41;

  v41 = a4;
  v23 = a1;
  v24 = a2;
  v28 = 3000;
  v35 = 51;
  v4 = 0;
  v36 = a1;
  v5 = 0;
  v38 = Function_203608c();
  v37 = 5;
  v39 = &v34;
  v6 = &off_21D33FC;
  v40 = &v33;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  do
  {
    v7 = ((int (__fastcall *)(int))*v6)(v23);
    ++v5;
    v6 += 3;
    v30 += v7;
  }
  while ( v5 < 2 );
  v8 = &off_21D33FC;
  v9 = 0;
  do
  {
    v10 = ((int (__fastcall *)(int))*v8)(v23);
    ++v9;
    v8 += 3;
    v31 += v10;
  }
  while ( v9 < 3 );
  v11 = &off_21D33FC;
  v12 = 0;
  do
  {
    v13 = ((int (__fastcall *)(int))*v11)(v23);
    ++v12;
    v11 += 3;
    v32 += v13;
  }
  while ( v12 < 4 );
  v25 = 0;
  v27 = &off_21D33FC;
  v26 = &v30;
  do
  {
    v29 = ((int (__fastcall *)(int))*v27)(v23);
    if ( v28 <= v29 )
      ErrorHandler();
    v14 = 0;
    v15 = v24;
    v16 = 0;
    do
    {
      if ( Function_2032ee8(v14) )
        *(uint *)&v39[v16] = v15 + v4;
      else
        *(uint *)&v39[v16] = 0;
      ++v14;
      v15 += 3008;
      v16 += 4;
    }
    while ( v14 < 5 );
    if ( v25 == 7 || v25 == 8 || v25 == 9 )
    {
      v17 = 0;
      v18 = v24;
      v19 = 0;
      do
      {
        if ( Function_2032ee8(v17) )
          *(uint *)&v40[v19] = v18 + *(v26 - 7);
        else
          *(uint *)&v40[v19] = 0;
        ++v17;
        v18 += 3008;
        v19 += 4;
      }
      while ( v17 < 5 );
    }
    v20 = (void (__fastcall *)(int *))v27[2];
    if ( v20 )
      v20(&v35);
    v4 += v29;
    v28 -= v29;
    v27 += 3;
    ++v26;
    ++v25;
  }
  while ( v25 < 0xA );
  v21 = Function_202440c(v23);
  Function_202e2ec(v21);
  return Function_202e35c(v21);
}

