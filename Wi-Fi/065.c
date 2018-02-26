//----- (0222DCE0) --------------------------------------------------------
int __fastcall Function_222dce0(int a1)
{
  int v1;

  v1 = LoadFlagAdress(*(uint *)(a1 + 352));
  return Function_206af3c(v1, 2, 0x35u);
}

//----- (0222DCF8) --------------------------------------------------------
BOOL __fastcall Function_222dcf8(int a1)
{
  int v1;

  v1 = LoadVariableAreaAdressItemList(*(uint *)(a1 + 352));
  return Function_207d730(v1, 0x1C1u, 0x36u) != 0;
}

//----- (0222DD1C) --------------------------------------------------------
int Function_222dd1c()
{
  return 1;
}

//----- (0222DD20) --------------------------------------------------------
int __fastcall Function_222dd20(int a1, int a2)
{
  int v2;
  int v3;

  v2 = *(uchar *)(a2 + 27);
  v3 = a1;
  if ( (uint)(v2 - 20) <= 1 && !Function_222dce0(a1) )
    v2 = 29;
  if ( (uint)(v2 - 22) <= 5 && !Function_222dd1c() )
    v2 = 29;
  if ( (uint)(v2 - 18) <= 1 && !Function_222dcf8(v3) )
    v2 = 29;
  return v2;
}

//----- (0222DD64) --------------------------------------------------------
int __fastcall Function_222dd64(char a1)
{
  int result;

  switch ( a1 )
  {
    case 18:
    case 19:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0222DD94) --------------------------------------------------------
int __fastcall Function_222dd94(char a1)
{
  int result;

  switch ( a1 )
  {
    case 18:
    case 19:
      result = 11;
      break;
    case 22:
    case 23:
      result = 13;
      break;
    case 24:
    case 25:
      result = 14;
      break;
    case 26:
    case 27:
      result = 15;
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (0222DDD4) --------------------------------------------------------
int __fastcall Function_222ddd4(char a1)
{
  int result;

  switch ( a1 )
  {
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0222DDFC) --------------------------------------------------------
int __fastcall Function_222ddfc(char a1)
{
  int result;

  if ( Function_222ddd4(a1) )
    return 1;
  switch ( 0 )
  {
    case 0:
    case 4:
    case 6:
    case 8:
    case 10:
    case 12:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0222DE40) --------------------------------------------------------
int __fastcall Function_222de40(char a1)
{
  int result;

  switch ( a1 )
  {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0222DE68) --------------------------------------------------------
int __fastcall Function_222de68(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_222de40(a1) )
    return 1;
  if ( v1 > 8 )
  {
    switch ( 0 )
    {
      case 0:
      case 2:
      case 4:
      case 6:
      case 8:
        return 1;
      default:
        return 0;
    }
  }
  else if ( v1 >= 8 || v1 == 1 )
  {
    return 1;
  }
  return 0;
}

//----- (0222DEB0) --------------------------------------------------------
int __fastcall Function_222deb0(char a1)
{
  int result;

  switch ( a1 )
  {
    case 12:
    case 13:
    case 14:
    case 15:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (0222DED4) --------------------------------------------------------
int __fastcall Function_222ded4(char a1)
{
  int v1;

  v1 = 29;
  switch ( a1 )
  {
    case 1:
      v1 = 16;
      break;
    case 2:
      v1 = 9;
      break;
    case 3:
      v1 = 10;
      break;
    case 4:
      v1 = 11;
      break;
    case 5:
      v1 = 12;
      break;
    case 6:
      v1 = 13;
      break;
    case 7:
      v1 = 14;
      break;
    case 8:
      v1 = 15;
      break;
    case 9:
      v1 = 2;
      break;
    case 10:
      v1 = 3;
      break;
    case 11:
      v1 = 4;
      break;
    case 12:
      v1 = 5;
      break;
    case 13:
      v1 = 6;
      break;
    case 14:
      v1 = 7;
      break;
    case 15:
      v1 = 8;
      break;
    case 16:
      v1 = 1;
      break;
    case 18:
      v1 = 19;
      break;
    case 19:
      v1 = 18;
      break;
    case 20:
      v1 = 21;
      break;
    case 21:
      v1 = 20;
      break;
    case 22:
      v1 = 23;
      break;
    case 23:
      v1 = 22;
      break;
    case 24:
      v1 = 25;
      break;
    case 25:
      v1 = 24;
      break;
    case 26:
      v1 = 27;
      break;
    case 27:
      v1 = 26;
      break;
    default:
      return v1;
  }
  return v1;
}

//----- (0222DF88) --------------------------------------------------------
int __fastcall Function_222df88(int a1)
{
  int v1;
  int v2;
  int i;
  int *v4;
  uint *v6;

  v6 = (uint *)LoadPokePartyAdress(*(uint *)(a1 + 352));
  v1 = 0;
  v2 = GetNrOfPkmnInParty((int)v6);
  for ( i = 0; i < v2; ++i )
  {
    v4 = GetAdrOfPkmnInParty(v6, i);
    if ( GetPkmnData(v4, 0xA3u, 0) && !GetPkmnData(v4, 0x4Cu, 0) )
      ++v1;
  }
  return v1;
}

//----- (0222DFD4) --------------------------------------------------------
int __fastcall Function_222dfd4(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = a1;
  if ( (uint)(a1 - 18) <= 1 )
    return Function_2038b00();
  if ( Function_222dd64(a1) )
    return Function_2038b20();
  if ( v1 == 16 )
    return Function_2038b60();
  if ( (uint)(v1 - 20) > 1 )
  {
    v3 = Function_203632c(1);
    result = Function_2038b84(v3);
  }
  else
  {
    Function_203632c(0);
    result = Function_2038ea4();
  }
  return result;
}

//----- (0222E01C) --------------------------------------------------------
uint __fastcall Function_222e01c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  short v7;
  short v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  int v24;

  v24 = a4;
  v15 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  Function_2017dd4(4, 8);
  v22 = LoadFromNARC_8(92, 0x36u, v4, v5);
  *(uint *)(v15 + 348) = Function_2018340(0x36u);
  *(uint *)(v15 + 356) = Function_200b358(0x36u);
  *(uint *)(v15 + 360) = LoadFromMsgNARC(0, 26, 674, 0x36u);
  *(uint *)(v15 + 364) = LoadFromMsgNARC(0, 26, 695, 0x36u);
  Function_222e618();
  Function_222e638(*(uint *)(v15 + 348));
  Function_222eca8(v15, v22);
  MI_CpuFill8((ushort *)(v15 + 3428), 0, 0x32Cu);
  v6 = Function_20071ec((int)v22, 4u, &v23, 54);
  MIi_CpuCopy16(*(uint *)(v23 + 12), v15 + 3436, 128, v7);
  MIi_CpuCopy16(*(uint *)(v23 + 12), v15 + 3564, 128, v8);
  free(v6);
  v20 = 0;
  v21 = 0;
  v17 = v15 + 3564;
  v16 = v15 + 3436;
  do
  {
    v19 = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( v20 >= 21 )
        ErrorHandler();
      v9 = 1;
      v10 = v15 + 32 * (v21 + 1) + 2;
      v11 = v17 + 2;
      v12 = v16 + 2;
      do
      {
        Function_200393c(v12, v11, 1u, (v19 >> 8) & 0xFF, *(ushort *)(v10 + 3436));
        ++v9;
        v10 += 2;
        v11 += 2;
        v12 += 2;
      }
      while ( v9 < 16 );
      v17 += 32;
      ++v20;
      if ( v18 == 1 )
        break;
      v19 += 768;
      if ( v19 >= 4096 )
      {
        v19 = 4096;
        v18 = 1;
      }
    }
    v16 += 32;
    ++v21;
  }
  while ( v21 < 3 );
  DC_FlushRange(v15 + 3564, 672);
  *(uint *)(v15 + 3432) = 1;
  *(uint *)(v15 + 3428) = AddTaskToTaskList2((int)Function_222e214, v15 + 3428, 0x14u);
  v13 = SetMainLoopFunctionCall((int)Function_222e5e0, v15);
  Function_222edd0(v13);
  Function_222ee18(v15, v22);
  Function_222ee8c(v15);
  return Call_FS_CloseFile(v22);
}

//----- (0222E214) --------------------------------------------------------
int __fastcall Function_222e214(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  result = *(uint *)(a2 + 4);
  if ( result )
  {
    result = 811;
    *(uchar *)(a2 + 811) ^= 1u;
    if ( !(*(uchar *)(a2 + 811) & 1) )
    {
      GX_LoadBGPltt(a2 + 136 + 32 * *(short *)(a2 + 808), 0, 0x20u);
      GXS_LoadBGPltt(v2 + 136 + 32 * *(short *)(v2 + 808), 0, 0x20u);
      result = 810;
      if ( *(uchar *)(v2 + 810) )
      {
        if ( (short)--*(ushort *)(v2 + 808) < 0 )
        {
          *(ushort *)(v2 + 808) = 1;
          *(uchar *)(v2 + 810) ^= 1u;
        }
      }
      else if ( (short)++*(ushort *)(v2 + 808) >= 21 )
      {
        *(ushort *)(v2 + 808) = 19;
        *(uchar *)(v2 + 810) ^= 1u;
      }
    }
  }
  return result;
}

//----- (0222E2A8) --------------------------------------------------------
int __fastcall Function_65_222e2a8(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

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
    v5 = (uint *)LoadPtrToOverWorldDataIn18(a1);
    if ( Function_20389b8() )
    {
      switch ( (uchar)v5[1] )
      {
        case 1u:
        case 2u:
        case 3u:
        case 4u:
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0xCu:
          Function_2017fc8(3, 121, 0x10000);
          break;
        default:
          break;
      }
    }
    else
    {
      Function_2017fc8(3, 121, 0x10000);
    }
    LoadOverlay(63, 2, v6, v7);
    if ( v5[1] == 1 )
      Function_2017fc8(3, 54, 458752);
    else
      Function_2017fc8(3, 54, 655360);
    v8 = MallocSomeDataAndStorePtrInOverlayData1c(v4, 4244, 0x36u);
    MI_CpuFill8((ushort *)v8, 0, 0x1094u);
    Function_201dbec(32, 0x36u);
    *(uint *)(v8 + 384) = 8;
    *(uint *)(v8 + 352) = *v5;
    *(uint *)v8 = LoadVariableAreaAdress_1d(*(uint *)(v8 + 352));
    *(uint *)(v8 + 848) = v5[1];
    *(uint *)(v8 + 840) = 8;
    *(uint *)(v8 + 876) = -1;
    Function_201ff0c(0xFu, 0);
    Function_201ff74(0xFu, 0);
    Function_222ebe0(v8);
    Function_222e01c(v8, v9, v10, v11);
    Function_200f174(0, 1, 1, 0, 6, 1, 54);
    if ( Function_20389b8() )
      Function_2039734();
    else
      LoadOverlay4(0, v12, v13);
    if ( Function_201e450(4u) != 1 )
      ErrorHandler();
    ++*v2;
  }
  return 0;
}

//----- (0222E3FC) --------------------------------------------------------
int __fastcall Function_65_222e3fc(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int (*v6)(void);
  int v8;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = *v2;
  v5 = v3;
  if ( *v2 )
  {
    if ( v4 == 1 )
    {
      v6 = (int (*)(void))*(&off_2239D2C + *(uint *)(v3 + 836));
      if ( v6 )
      {
        dword_2239E60[0] = *(uint *)(v3 + 836);
        *v2 = v6();
      }
    }
    else if ( v4 == 2 && Function_200f2ac() )
    {
      return 1;
    }
  }
  else if ( Function_200f2ac() )
  {
    *v2 = 1;
  }
  v8 = *(uint *)(v5 + 396);
  if ( v8 )
    Function_20219f8(v8);
  if ( Function_2235194(v5 + 904) == 1 )
    Function_2235244(v5 + 904);
  return 0;
}

//----- (0222E47C) --------------------------------------------------------
int *__fastcall Function_222e47c(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  v2 = *(int **)(v1 + 3428);
  if ( v2 )
  {
    Call_RemoveTaskFromTaskList(v2);
    *(uint *)(v1 + 3428) = 0;
    *(uint *)(v1 + 3432) = 0;
  }
  if ( Function_2235194(v1 + 904) == 1 )
    Function_2235130(v1 + 904);
  if ( Function_2232fcc(v1) == 1 )
    Function_2233068(v1);
  Function_222e99c(v1 + 2824);
  Function_20127bc(*(uint *)(v1 + 712));
  v3 = 0;
  v4 = v1;
  do
  {
    Function_2009754(*(int **)(v4 + 696));
    ++v3;
    v4 += 4;
  }
  while ( v3 < 4 );
  Function_2021964(*(int **)(v1 + 396));
  Function_200a878();
  Function_201e958();
  Function_201f8b4();
  Function_222ef4c(v1);
  Function_222ec5c(*(uint *)(v1 + 348));
  Function_200b190(*(ushort **)(v1 + 364));
  Function_200b190(*(ushort **)(v1 + 360));
  Function_200b3f0(*(uint **)(v1 + 356), v5);
  return UnloadOverlay(63, v6, v7, v8);
}

//----- (0222E548) --------------------------------------------------------
int __fastcall Function_65_222e548(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Function_222e47c(v2);
  v3 = LoadPtrToOverWorldDataIn18(v1);
  v5 = v3;
  v6 = *(uint *)(v2 + 840);
  *(uint *)(v3 + 4) = v6;
  v7 = *(uint *)(v2 + 840);
  if ( v7 != 8 && v7 != 10 )
    *(uint *)(v5 + 8) = ((int (*)(void))dword_21D2388[0])();
  else
    UnloadOverlay4(v7, v6, v4);
  Function_222ec2c(v2);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201e530();
  Function_201dc3c();
  Function_201807c(54);
  v8 = *(uint *)(v2 + 840);
  switch ( (uchar)v8 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xC:
      v8 = Function_201807c(121);
      break;
    default:
      break;
  }
  if ( Function_2231a54(v8) == 1 )
    Function_2004a68(0, 120);
  return 1;
}

//----- (0222E5E0) --------------------------------------------------------
int __fastcall Function_222e5e0(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_201c2b8(*(uint *)(a1 + 348));
  Function_201dcac();
  Function_200a858();
  result = *(ushort *)(v1 + 4240);
  if ( result == 1 )
  {
    Function_200f338(0);
    Function_200f338(1);
    result = 4240;
    *(ushort *)(v1 + 4240) = 0;
  }
  return result;
}

//----- (0222E618) --------------------------------------------------------
char *Function_222e618()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_2238B10;
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

//----- (0222E638) --------------------------------------------------------
short *__fastcall Function_222e638(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  short *result;
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
  int v64;
  int v65;
  int v66;

  v66 = a4;
  v4 = a1;
  v62 = 1;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  SetGraphicsModes(&v62);
  v55 = 0;
  v56 = 0;
  v57 = 4096;
  v58 = 0;
  v59 = 1835011;
  v60 = 0;
  v61 = 0;
  Function_20183c4(v4, 0, &v55, 0);
  Function_2019690(0, 32, 0, 0x36u);
  Function_2019ebc(v4, 0);
  v48 = 0;
  v49 = 0;
  v50 = 2048;
  v51 = 0;
  v52 = 68812801;
  v53 = 256;
  v54 = 0;
  Function_20183c4(v4, 1u, &v48, 0);
  Function_2019690(1u, 32, 0, 0x36u);
  Function_2019ebc(v4, 1u);
  v41 = 0;
  v42 = 0;
  v43 = 2048;
  v44 = 0;
  v45 = 35323905;
  v46 = 513;
  v47 = 0;
  Function_20183c4(v4, 2u, &v41, 0);
  Function_2019690(2u, 32, 0, 0x36u);
  Function_2019ebc(v4, 2u);
  v34 = 0;
  v35 = 0;
  v36 = 2048;
  v37 = 0;
  v38 = 102629377;
  v39 = 769;
  v40 = 0;
  Function_20183c4(v4, 3u, &v34, 0);
  Function_2019690(3u, 32, 0, 0x36u);
  Function_2019ebc(v4, 3u);
  v27 = 0;
  v28 = 0;
  v29 = 2048;
  v30 = 0;
  v31 = 1835009;
  v32 = 768;
  v33 = 0;
  Function_20183c4(v4, 4u, &v27, 0);
  Function_2019ebc(v4, 4u);
  v20 = 0;
  v21 = 0;
  v22 = 2048;
  v23 = 0;
  v24 = 35454977;
  v25 = 0;
  v26 = 0;
  Function_20183c4(v4, 5u, &v20, 0);
  Function_2019ebc(v4, 5u);
  v13 = 0;
  v14 = 0;
  v15 = 2048;
  v16 = 0;
  v17 = 69074945;
  v18 = 512;
  v19 = 0;
  Function_20183c4(v4, 6u, &v13, 0);
  Function_2019ebc(v4, 6u);
  v6 = 0;
  v7 = 0;
  v8 = 2048;
  v9 = 0;
  v10 = 102694913;
  v11 = 0;
  v12 = 0;
  Function_20183c4(v4, 7u, &v6, 0);
  Function_2019ebc(v4, 7u);
  Function_2019690(0, 32, 0, 0x36u);
  Function_2019690(1u, 32, 0, 0x36u);
  Function_2019690(2u, 32, 0, 0x36u);
  Function_2019690(3u, 32, 0, 0x36u);
  Function_2019690(4u, 32, 0, 0x36u);
  Function_2019690(5u, 32, 0, 0x36u);
  Function_2019690(6u, 32, 0, 0x36u);
  Function_2019690(7u, 32, 0, 0x36u);
  Function_2019060(0, 3);
  Function_2019060(1u, 1);
  Function_2019060(3u, 0);
  Function_2019060(2u, 0);
  REG_BLDCNT = 0;
  result = &REG_BLDCNT_SUB;
  REG_BLDCNT_SUB = 0;
  return result;
}

//----- (0222E87C) --------------------------------------------------------
uint __fastcall Function_222e87c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = 0;
  v3 = a1;
  do
  {
    if ( !*(uint *)(v3 + 2692) )
    {
      v4 = a1 + 4 * v2;
      result = 2692;
      *(uint *)(v4 + 2692) = a2;
      return result;
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 33 );
  return ErrorHandler();
}

//----- (0222E8A8) --------------------------------------------------------
uint __fastcall Function_222e8a8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint result;

  v2 = 0;
  v3 = a1;
  do
  {
    if ( *(uint *)(v3 + 2692) == a2 )
    {
      v4 = a1 + 4 * v2;
      result = 2692;
      *(uint *)(v4 + 2692) = 0;
      return result;
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 33 );
  return ErrorHandler();
}

//----- (0222E8D4) --------------------------------------------------------
int __fastcall Function_222e8d4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v6 = a1;
  v2 = a2;
  v3 = 0;
  v4 = a1;
  do
  {
    if ( *(uint *)(v4 + 2692) && v2 == Function_22354d8() )
      return *(uint *)(v6 + 4 * v3 + 2692);
    ++v3;
    v4 += 4;
  }
  while ( v3 < 33 );
  return 0;
}

//----- (0222E90C) --------------------------------------------------------
int __fastcall Function_222e90c(uint *a1, int *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int *v7;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = a2;
  Function_2007130(a3, 0xDu, 0, 256, 64, a4);
  Function_2007130(v5, 0xDu, 4u, 416, 64, v6);
  Function_20070e8(v5, 0xCu, v4, 1u, 0, 0, 0, v6);
  Function_20070e8(v5, 0xCu, v4, 6u, 0, 0, 0, v6);
  if ( !v7[2] )
    v7[2] = Function_20071b4(v5, 0xCu, 0, v7 + 3, v6);
  result = *v7;
  if ( !*v7 )
  {
    result = Function_20071d0(v5, 0xEu, 0, v7 + 1, v6);
    *v7 = result;
  }
  return result;
}

//----- (0222E99C) --------------------------------------------------------
int __fastcall Function_222e99c(int *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *a1;
  if ( v2 )
  {
    free(v2);
    *v1 = 0;
  }
  result = v1[2];
  if ( result )
  {
    free(result);
    result = 0;
    v1[2] = 0;
  }
  return result;
}

//----- (0222E9C0) --------------------------------------------------------
int __fastcall Function_222e9c0(int a1, int a2, int a3, int a4, uchar a5, char a6, char a7)
{
  int v7;
  uint v8;
  int v9;
  char v10;

  v7 = a3;
  v8 = a4;
  v9 = a1;
  Function_20198e8(
    a1,
    (uchar)a3,
    a4,
    a5,
    2u,
    2u,
    *(uint *)(a2 + 4) + 12,
    2 * a6,
    0,
    (uint)**(ushort **)(a2 + 4) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(a2 + 4) + 2) << 21 >> 24);
  v10 = Function_222ebac(v7);
  Function_2019e2c(v9, (uchar)v7, v8, a5, 2u, 2u, v10 + a7);
  return Function_201c3c0(v9, v7);
}

//----- (0222EA38) --------------------------------------------------------
int __fastcall Function_222ea38(int a1, int a2, int a3, int a4, uchar a5, char a6)
{
  char v6;
  char v7;

  v6 = 0;
  switch ( a6 )
  {
    case 0:
      v7 = 8;
      return Function_222e9c0(a1, a2, a3, a4, a5, v7, v6);
    case 1:
      v7 = 3;
      return Function_222e9c0(a1, a2, a3, a4, a5, v7, v6);
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      goto LABEL_4;
    case 8:
      goto LABEL_6;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
      v6 = 1;
LABEL_4:
      v7 = 6;
      return Function_222e9c0(a1, a2, a3, a4, a5, v7, v6);
    case 15:
      v6 = 1;
LABEL_6:
      v7 = 7;
      return Function_222e9c0(a1, a2, a3, a4, a5, v7, v6);
    case 16:
      v7 = 4;
      return Function_222e9c0(a1, a2, a3, a4, a5, v7, v6);
    case 18:
      goto LABEL_10;
    case 19:
      v6 = 1;
LABEL_10:
      v7 = 9;
      return Function_222e9c0(a1, a2, a3, a4, a5, v7, v6);
    case 20:
      goto LABEL_12;
    case 21:
      v6 = 1;
LABEL_12:
      v7 = 11;
      return Function_222e9c0(a1, a2, a3, a4, a5, v7, v6);
    case 22:
    case 24:
    case 26:
      goto LABEL_8;
    case 23:
    case 25:
    case 27:
      v6 = 1;
LABEL_8:
      v7 = 10;
      break;
    case 28:
    case 29:
      v7 = 5;
      break;
    default:
      v7 = 5;
      break;
  }
  return Function_222e9c0(a1, a2, a3, a4, a5, v7, v6);
}

//----- (0222EAD0) --------------------------------------------------------
int __fastcall Function_222ead0(int a1, int a2, ushort a3, ushort a4, int a5, char a6)
{
  int v6;
  char v7;

  v6 = a1;
  Function_201addc(
    a1,
    *(uint *)(*(uint *)(a2 + 12) + 20),
    16 * a5 & 0xFFFF,
    0,
    8 * *(ushort *)(*(uint *)(a2 + 12) + 2),
    8 * **(ushort **)(a2 + 12),
    a3,
    a4,
    0x10u,
    0x10u);
  v7 = Function_222ebac(*(uchar *)(v6 + 4));
  return Function_201c2b4(v6, v7 + a6);
}

//----- (0222EB1C) --------------------------------------------------------
int __fastcall Function_222eb1c(int a1, int a2, ushort a3, ushort a4, char a5)
{
  char v5;
  int v6;

  v5 = 0;
  switch ( a5 )
  {
    case 0:
      v6 = 8;
      return Function_222ead0(a1, a2, a3, a4, v6, v5);
    case 1:
      v6 = 3;
      return Function_222ead0(a1, a2, a3, a4, v6, v5);
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      goto LABEL_4;
    case 8:
      goto LABEL_6;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
      v5 = 1;
LABEL_4:
      v6 = 6;
      return Function_222ead0(a1, a2, a3, a4, v6, v5);
    case 15:
      v5 = 1;
LABEL_6:
      v6 = 7;
      return Function_222ead0(a1, a2, a3, a4, v6, v5);
    case 16:
      v6 = 4;
      return Function_222ead0(a1, a2, a3, a4, v6, v5);
    case 18:
      goto LABEL_10;
    case 19:
      v5 = 1;
LABEL_10:
      v6 = 9;
      return Function_222ead0(a1, a2, a3, a4, v6, v5);
    case 20:
      goto LABEL_12;
    case 21:
      v5 = 1;
LABEL_12:
      v6 = 11;
      return Function_222ead0(a1, a2, a3, a4, v6, v5);
    case 22:
    case 24:
    case 26:
      goto LABEL_8;
    case 23:
    case 25:
    case 27:
      v5 = 1;
LABEL_8:
      v6 = 10;
      break;
    case 28:
    case 29:
      v6 = 5;
      break;
    default:
      v6 = 5;
      break;
  }
  return Function_222ead0(a1, a2, a3, a4, v6, v5);
}

//----- (0222EBAC) --------------------------------------------------------
int __fastcall Function_222ebac(uint a1)
{
  int result;

  if ( a1 >= 4 )
    result = 13;
  else
    result = 8;
  return result;
}

//----- (0222EBB8) --------------------------------------------------------
int Function_222ebb8()
{
  int *v0;

  v0 = Function_200f174(0, 0, 0, 0, 6, 1, 54);
  Function_2231a0c(v0);
  return 18;
}

//----- (0222EBE0) --------------------------------------------------------
int __fastcall Function_222ebe0(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  a1[93] = Function_2023790(380, 0x36u);
  v1[95] = Function_2023790(380, 0x36u);
  v1[92] = Function_2023790(380, 0x36u);
  v1[94] = Function_2023790(180, 0x36u);
  result = 836;
  v1[209] = 0;
  return result;
}

//----- (0222EC2C) --------------------------------------------------------
uint __fastcall Function_222ec2c(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  Function_20237bc_FreeMsg(a1[94], a2);
  Function_20237bc_FreeMsg(v2[93], v3);
  Function_20237bc_FreeMsg(v2[95], v4);
  return Function_20237bc_FreeMsg(v2[92], v5);
}

//----- (0222EC5C) --------------------------------------------------------
uint __fastcall Function_222ec5c(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 7);
  Function_2019044(v1, 6);
  Function_2019044(v1, 5);
  Function_2019044(v1, 4);
  Function_2019044(v1, 3);
  Function_2019044(v1, 2);
  Function_2019044(v1, 1);
  Function_2019044(v1, 0);
  return free(v1);
}

//----- (0222ECA8) --------------------------------------------------------
int __fastcall Function_222eca8(int a1, int a2)
{
  int v2;
  uint *v3;
  int v4;
  ushort *v5;
  uchar v6;

  v2 = a1;
  v3 = *(uint **)(a1 + 348);
  v4 = a2;
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 1);
  Function_201ff0c(4u, 1);
  Function_201ff0c(8u, 1);
  Function_201ff74(1u, 1);
  Function_2007130(v4, 3u, 0, 0, 0, 54);
  Function_2007130(v4, 3u, 4u, 0, 0, 54);
  LoadFromNARC_PlFont2(0, 416, 54);
  LoadFromNARC_PlFont2(0, 384, 54);
  Function_20070e8(v4, 2u, v3, 0, 0, 0, 0, 54);
  Function_200710c(v4, 5u, v3, 0, 0, 0, 0, 54);
  Function_20070e8(v4, 0xAu, v3, 4u, 0, 0, 0, 54);
  Function_200710c(v4, 0xBu, v3, 4u, 0, 0, 0, 54);
  v5 = (ushort *)LoadPlayerDataAdress(*(uint *)(v2 + 352));
  v6 = Function_2027b50(v5);
  Function_200dd0c(v3, 2u, 482, 10, v6, 54);
  Function_200daa4(v3, 2u, 473, 11, 0, 54);
  return Function_200daa4(v3, 1u, 473, 11, 0, 54);
}

//----- (0222EDD0) --------------------------------------------------------
int Function_222edd0()
{
  int v0;
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = 20;
  v4 = 0x20000;
  v5 = 0x4000;
  v6 = 54;
  Function_201e88c(&v3, 2097168, 16);
  Function_201f834(20, 0x36u);
  Function_201e994();
  Function_201f8e4();
  Function_200966c(1, 2097168, v0, v1);
  return Function_2009704(1);
}

//----- (0222EE18) --------------------------------------------------------
int __fastcall Function_222ee18(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  int result;

  v1 = a1;
  Function_20a7944();
  Function_200a784(0, 126, 0, 32, 0, 0x7Eu, 0, 0x20u, 0x36u);
  *(uint *)(v1 + 396) = Function_20095c4(8, v1 + 400, 54, v2);
  Function_200964c(v1 + 400, 0, 0x100000, v3);
  v4 = 0;
  v5 = v1;
  do
  {
    *(uint *)(v5 + 696) = Function_2009714(1, v4, 0x36u);
    v4 = (int *)((char *)v4 + 1);
    v5 += 4;
  }
  while ( (int)v4 < 4 );
  result = Function_2012744(1, 0x36u);
  *(uint *)(v1 + 712) = result;
  return result;
}

//----- (0222EE8C) --------------------------------------------------------
uint Function_222ee8c()
{
  return Function_201ff0c(0x10u, 1);
}

//----- (0222EE98) --------------------------------------------------------
int __fastcall Function_222ee98(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( Function_201a7cc(a1 + 748) )
  {
    Function_200dc9c(v1 + 748, 0);
    Function_201a8fc(v1 + 748);
  }
  Function_201a7e8(*(uint **)(v1 + 348), v1 + 748, 3, 5, 1, 0x16u, 2u, 13, 458);
  Function_201ada4_ClearTextBox(v1 + 748, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x15u, *(ushort **)(v1 + 376));
  Function_2002eec(0, *(uint *)(v1 + 376), 0, 0xB0u);
  v2 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 748, 1);
  return Function_201a9a4(v1 + 748);
}

//----- (0222EF4C) --------------------------------------------------------
uint __fastcall Function_222ef4c(int a1)
{
  int v1;
  int v2;
  int *v3;
  uint result;

  v1 = a1;
  Function_2232dfc();
  if ( Function_201a7cc(v1 + 748) )
    Function_201a8fc(v1 + 748);
  if ( Function_201a7cc(v1 + 716) )
    Function_201a8fc(v1 + 716);
  if ( Function_201a7cc(v1 + 812) )
    Function_201a8fc(v1 + 812);
  if ( Function_201a7cc(v1 + 732) )
    Function_201a8fc(v1 + 732);
  if ( Function_201a7cc(v1 + 780) )
    Function_201a8fc(v1 + 780);
  v2 = *(uint *)(v1 + 336);
  if ( v2 )
    Function_2001384(v2, 0, 0);
  v3 = *(int **)(v1 + 332);
  if ( v3 )
  {
    Function_2013a3c(v3);
    *(uint *)(v1 + 332) = 0;
  }
  result = Function_201a7cc(v1 + 764);
  if ( result )
    result = Function_201a8fc(v1 + 764);
  return result;
}

//----- (0222F010) --------------------------------------------------------
int __fastcall Function_222f010(int a1, int a2)
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
  int v14;

  v2 = a1;
  v3 = a2;
  if ( Function_20389b8() )
  {
    v4 = ((int (*)(void))dword_21D2388[0])();
    Function_2232dc0(v2, v4);
    v5 = Function_20388e8();
    *(uint *)(v2 + 4) = v5;
    *(uchar *)(v5 + 33) = *(uchar *)(v5 + 34);
    v6 = Function_222dd20(v2, *(uint *)(v2 + 4));
    if ( v6 != 8
      && v6 != 18
      && v6 != 20
      && v6 != 22
      && v6 != 23
      && v6 != 24
      && v6 != 25
      && v6 != 26
      && v6 != 27
      && v6 != 19 )
    {
      Function_2232b58(v2, 77, 0);
      Function_20388f4(1, 1);
      Function_20364f0(16);
      *(uint *)(v2 + 836) = 61;
    }
    else
    {
      Function_2232e58(v2, 16);
      Function_2032a70();
      Function_2038398();
      v7 = Function_20388e8();
      *(uint *)(v2 + 4) = v7;
      *(uchar *)(v7 + 33) = *(uchar *)(v7 + 34);
      *(uint *)(v2 + 856) = 20;
      *(uint *)(v2 + 836) = 65;
    }
  }
  else
  {
    Function_2004550(0xBu, 0x497u);
    Function_222ee98(v2);
    v8 = *(uint *)v2;
    Function_202ad28();
    if ( Function_20a450c(v9) )
    {
      v10 = *(uint *)v2;
      Function_202ad28();
      if ( Function_20a453c(v11, v12, v13, v14) )
      {
        Function_2232b58(v2, 17, 1);
        *(uint *)(v2 + 836) = 1;
      }
      else
      {
        Function_2232ca8(v2, 20);
        *(uint *)(v2 + 836) = 3;
      }
    }
    else
    {
      Function_2019060(0, 3);
      Function_2019060(1u, 0);
      Function_2019060(3u, 0);
      Function_2019060(2u, 1);
      Function_2232ca8(v2, 18);
      *(uint *)(v2 + 388) = Function_2002100(
                                *(uint **)(v2 + 348),
                                (uchar *)&dword_223894C[2],
                                473,
                                11,
                                0x36u);
      *(uint *)(v2 + 836) = 6;
    }
  }
  return v3;
}

//----- (0222F164) --------------------------------------------------------
int __fastcall Function_222f164(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_201d724(*(uint *)(a1 + 384) & 0xFF) )
  {
    *(uint *)(v2 + 388) = Function_2002100(
                              *(uint **)(v2 + 348),
                              (uchar *)&dword_223893C[2],
                              473,
                              11,
                              0x36u);
    *(uint *)(v2 + 836) = 2;
  }
  return v3;
}

//----- (0222F1A8) --------------------------------------------------------
int __fastcall Function_222f1a8(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_2002114(a1[97], 0x36u);
  if ( v4 == -1 )
    return v3;
  if ( v4 )
  {
    v2[209] = 34;
  }
  else
  {
    v2[1] = Function_203871c(v2[88], 0x4A4u);
    Function_2232b58(v2, 23, 1);
    if ( v2[98] )
      ErrorHandler();
    v2[98] = Function_200e7fc(v2 + 179, 482);
    v2[209] = 14;
  }
  return v3;
}

//----- (0222F21C) --------------------------------------------------------
int __fastcall Function_222f21c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( dword_21BF6C4 & 3 )
  {
    Function_2232ca8(a1, 21);
    Function_2019060(3u, 0);
    Function_2019060(2u, 1);
    Function_2019060(1u, 0);
    Function_2019060(0, 3);
    *(uint *)(v3 + 388) = Function_2002054(
                              *(uint **)(v3 + 348),
                              (uchar *)&dword_223894C[2],
                              473,
                              11,
                              1,
                              0x36u);
    *(uint *)(v3 + 836) = 4;
  }
  return v2;
}

//----- (0222F288) --------------------------------------------------------
int __fastcall Function_222f288(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_2002114(*(uint *)(a1 + 388), 0x36u);
  if ( v4 == -1 )
    return v3;
  Function_200e084(v2 + 764, 0);
  Function_201a8fc(v2 + 764);
  if ( v4 )
  {
    v6 = 34;
  }
  else
  {
    Function_2232ca8(v2, 22);
    *(uint *)(v2 + 388) = Function_2002054(
                              *(uint **)(v2 + 348),
                              (uchar *)&dword_223894C[2],
                              473,
                              11,
                              1,
                              0x36u);
    v6 = 5;
  }
  *(uint *)(v2 + 836) = v6;
  return v3;
}

//----- (0222F304) --------------------------------------------------------
int __fastcall Function_222f304(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = Function_2002114(*(uint *)(a1 + 388), 0x36u);
  if ( v4 == -1 )
    return v3;
  Function_2019060(3u, 0);
  Function_2019060(2u, 0);
  Function_2019060(1u, 1);
  Function_2019060(0, 3);
  Function_200e084(v2 + 764, 0);
  Function_201a8fc(v2 + 764);
  if ( v4 )
  {
    *(uint *)(v2 + 836) = 34;
  }
  else
  {
    Function_202ace8(*(uint **)v2);
    v6 = (int *)LoadVariableAreaAdress(*(uint *)(v2 + 352), 35);
    Function_2030cec(v6);
    v7 = LoadVariableAreaAdress_17(*(uint *)(v2 + 352));
    Function_2030764(v7);
    *(uint *)(v2 + 836) = 14;
    *(uint *)(v2 + 4) = Function_203871c(*(uint *)(v2 + 352), 0x4A4u);
    Function_2232b58(v2, 23, 1);
    if ( *(uint *)(v2 + 392) )
      ErrorHandler();
    *(uint *)(v2 + 392) = Function_200e7fc((int *)(v2 + 716), 482);
    *(uint *)(v2 + 868) = 1;
  }
  return v3;
}

//----- (0222F3DC) --------------------------------------------------------
int __fastcall Function_222f3dc(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_2002114(a1[97], 0x36u);
  if ( v4 == -1 )
    return v3;
  Function_2019060(0, 3);
  Function_2019060(1u, 1);
  Function_2019060(3u, 0);
  Function_2019060(2u, 0);
  Function_200e084((int)(v2 + 191), 0);
  Function_201a8fc((int)(v2 + 191));
  if ( v4 )
  {
    v2[209] = 34;
  }
  else
  {
    v2[209] = 14;
    v2[1] = Function_203871c(v2[88], 0x4A4u);
    Function_2232b58(v2, 23, 1);
    if ( v2[98] )
      ErrorHandler();
    v2[98] = Function_200e7fc(v2 + 179, 482);
    v2[217] = 1;
  }
  return v3;
}

//----- (0222F490) --------------------------------------------------------
int __fastcall Function_222f490(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2019060(0, 3);
  Function_2019060(1u, 1);
  Function_2019060(3u, 0);
  Function_2019060(2u, 0);
  *(uint *)(v2 + 836) = 15;
  return v3;
}

//----- (0222F4C4) --------------------------------------------------------
int __fastcall Function_222f4c4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int v7;
  int v8;
  int v9;
  uint *v10;
  uint *v11;
  int v12;

  v2 = a1;
  v7 = a2;
  v12 = LoadTrainerDataAdress(*(uint *)(a1 + 352));
  v11 = (uint *)LoadPokedexDataAdress(*(uint *)(v2 + 352));
  v10 = (uint *)LoadPokePartyAdress(*(uint *)(v2 + 352));
  v9 = Function_202c878(*(uint *)(v2 + 352));
  v3 = 0;
  v8 = GetNrOfPkmnInParty((int)v10);
  if ( v8 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = GetAdrOfPkmnInParty(v10, v3);
      *(ushort *)(*(uint *)(v2 + 4) + v4) = GetPkmnData(v5, 5u, 0);
      ++v3;
      *(ushort *)(*(uint *)(v2 + 4) + v4 + 12) = GetPkmnData(v5, 6u, 0);
      v4 += 2;
    }
    while ( v3 < v8 );
  }
  *(uchar *)(*(uint *)(v2 + 4) + 24) = Function_2025fcc(v12);
  *(uchar *)(*(uint *)(v2 + 4) + 25) = Function_2025fd8(v12);
  *(uchar *)(*(uint *)(v2 + 4) + 26) = Function_2027474(v11);
  *(uchar *)(*(uint *)(v2 + 4) + 27) = 29;
  Function_2232e70(v2, v7);
  *(uchar *)(*(uint *)(v2 + 4) + 28) = 0;
  *(uchar *)(*(uint *)(v2 + 4) + 29) = Function_2025f8c(v12);
  *(uchar *)(*(uint *)(v2 + 4) + 30) = GetGender(v12);
  *(uchar *)(*(uint *)(v2 + 4) + 31) = Function_202c8c0(v9);
  *(uchar *)(*(uint *)(v2 + 4) + 32) = Function_202c8c4(v9);
  *(uchar *)(*(uint *)(v2 + 4) + 33) = 1;
  *(uchar *)(*(uint *)(v2 + 4) + 34) = 1;
  ((void (__fastcall *)(uint, int))byte_21D222C)(*(uint *)(v2 + 4), 36);
  return ((int (__fastcall *)(int, int))dword_21D2184[5])(*(uint *)(v2 + 4) + 36, 36);
}

//----- (0222F5BC) --------------------------------------------------------
int __fastcall Function_222f5bc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = 0;
  v2 = a1;
  v3 = 0;
  do
  {
    *(uchar *)(v2 + v3 + 12) = 0;
    if ( *(ushort *)(v2 + 4242) > v3 && Function_2234fc4(v3) )
    {
      v4 = Function_2234fa8(v2, v3);
      v5 = v4;
      v6 = Function_222dd20(v2, v4);
      if ( v6 && v6 != 28 && *(uchar *)(v5 + 29) )
      {
        *(uchar *)(v2 + v1++ + 12) = v3 + 1;
      }
      else if ( v6 == 28 && Function_223368c(v2, v3 + 1) )
      {
        Function_223366c(v2, v3 + 1);
      }
    }
    ++v3;
  }
  while ( v3 < 32 );
  return v1;
}

//----- (0222F62C) --------------------------------------------------------
int __fastcall Function_222f62c(uint *a1)
{
  uint *v1;
  int v2;
  uint *v3;
  uchar *v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v2 = 0;
  v10 = 0;
  v3 = a1;
  do
  {
    v4 = (uchar *)Function_2234fa8(v1, v2);
    v7 = Function_222dd20((int)v1, (int)v4);
    if ( v7 != v3[19] || v4[33] != v3[51] )
    {
      v8 = Function_222e8d4((int)v1, v2 + 1);
      if ( v8 )
      {
        v9 = Function_222ddfc(v3[19]);
        v5 = Function_222ddfc(v7);
        if ( v9 != 1 || v5 )
        {
          if ( !v9 && v5 == 1 )
            Function_223558c(v1 + 226, v8, 1);
        }
        else
        {
          Function_223558c(v1 + 226, v8, 0);
        }
        v3[19] = v7;
        v3[51] = v4[33];
        Function_202ae2c(*v1, v2, 7u, v4[29]);
        Function_202ae2c(*v1, v2, 8u, v4[30]);
        ++v10;
      }
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 32 );
  return v10;
}

//----- (0222F6EC) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x222F77C for case 1"

//----- (0222F7AC) --------------------------------------------------------
int __fastcall Function_222f7ac(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( dword_21BF6C4 & 3 )
  {
    if ( Function_201a7cc(a1 + 764) )
    {
      Function_200e084(v2 + 764, 0);
      Function_201a8fc(v2 + 764);
    }
    *(uint *)(v2 + 836) = 8;
  }
  return v3;
}

//----- (0222F7F0) --------------------------------------------------------
int __fastcall Function_222f7f0(int a1, int a2)
{
  *(uint *)(a1 + 836) = 9;
  return a2;
}

//----- (0222F7FC) --------------------------------------------------------
int __fastcall Function_222f7fc(int a1, int a2)
{
  *(uint *)(a1 + 836) = 11;
  return a2;
}

//----- (0222F808) --------------------------------------------------------
int __fastcall Function_222f808(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a1 + 856);
  if ( v4 <= 0 )
  {
    if ( dword_21BF6C4 & 3 )
    {
      if ( Function_201a7cc(v3 + 764) )
      {
        Function_200e084(v3 + 764, 0);
        Function_201a8fc(v3 + 764);
      }
      Function_2232b58(v3, 88, 0);
      *(uint *)(v3 + 836) = 11;
    }
    result = v2;
  }
  else
  {
    *(uint *)(v3 + 856) = v4 - 1;
    result = a2;
  }
  return result;
}

//----- (0222F868) --------------------------------------------------------
int __fastcall Function_222f868(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_201d724(*(uint *)(a1 + 384) & 0xFF) )
  {
    *(uint *)(v2 + 388) = Function_2002100(
                              *(uint **)(v2 + 348),
                              (uchar *)dword_223894C,
                              473,
                              11,
                              0x36u);
    *(uint *)(v2 + 836) = 12;
  }
  return v3;
}

//----- (0222F8AC) --------------------------------------------------------
int __fastcall Function_222f8ac(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_2002114(*(uint *)(a1 + 388), 0x36u);
  if ( v4 == -1 )
    return v3;
  if ( v4 )
  {
    Function_2232e58(v2, 16);
    Function_2038350();
    Function_2032a70();
    *(uint *)(v2 + 840) = 8;
    v6 = 34;
  }
  else
  {
    Function_2038350();
    Function_2232e58(v2, 16);
    v6 = 13;
  }
  *(uint *)(v2 + 836) = v6;
  Function_2232dfc(v2);
  return v3;
}

//----- (0222F90C) --------------------------------------------------------
int __fastcall Function_222f90c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;

  v2 = a1;
  v3 = a2;
  if ( !Function_20334a4() )
  {
    if ( Function_2235194(v2 + 904) == 1 )
    {
      SetBrightnessWithValue(0, 0);
      SetBrightnessWithValue(1, 0);
      Function_2235130(v2 + 904);
      v4 = 0;
      v5 = v2;
      do
      {
        ++v4;
        *(uint *)(v5 + 2692) = 0;
        v5 += 4;
      }
      while ( v4 < 33 );
      Function_200a93c(0x36u);
      Function_200a944(0x36u);
    }
    if ( Function_2232fcc(v2) == 1 )
      Function_2233068(v2);
    if ( Function_201a7cc(v2 + 748) )
    {
      Function_200dc9c(v2 + 748, 0);
      Function_201a8fc(v2 + 748);
    }
    if ( Function_201a7cc(v2 + 732) )
      Function_201a8fc(v2 + 732);
    Function_2019ebc(*(uint **)(v2 + 348), 3u);
    v8 = LoadFromNARC_8(92, 0x36u, v6, v7);
    Function_222eca8(v2, (int)v8);
    Call_FS_CloseFile(v8);
    *(uint *)(v2 + 3432) = 1;
    *(ushort *)(v2 + 4240) = 1;
    if ( *(uint *)(v2 + 332) )
    {
      Function_201a8fc(v2 + 780);
      Function_2001384(*(uint *)(v2 + 336), 0, 0);
      *(uint *)(v2 + 336) = 0;
      Function_2013a3c(*(int **)(v2 + 332));
      *(uint *)(v2 + 332) = 0;
    }
    MI_CpuFill8((ushort *)(v2 + 12), 0, 0x20u);
    MI_CpuFill8((ushort *)(v2 + 44), 0, 0x20u);
    MI_CpuFill8((ushort *)(v2 + 76), 0, 0x80u);
    MI_CpuFill8((ushort *)(v2 + 204), 0, 0x80u);
    Function_222ee98(v2);
    *(uint *)(v2 + 4) = Function_203871c(*(uint *)(v2 + 352), 0x4A4u);
    Function_2232b58(v2, 23, 1);
    if ( *(uint *)(v2 + 392) )
      ErrorHandler();
    *(uint *)(v2 + 392) = Function_200e7fc((int *)(v2 + 716), 482);
    *(uint *)(v2 + 836) = 14;
  }
  return v3;
}

//----- (0222FAA0) --------------------------------------------------------
int __fastcall Function_222faa0(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(a1[96] & 0xFF) )
    return v3;
  if ( ((int (*)(void))dword_21D2598[146])() )
  {
    v2[209] = 69;
    Function_2232b58(v2, 30, 1);
    if ( v2[98] )
      ErrorHandler();
    v2[98] = Function_200e7fc(v2 + 179, 482);
  }
  if ( Function_2038294() )
  {
    if ( v2[217] )
    {
      v2[209] = 16;
    }
    else
    {
      Function_222f4c4((int)v2, 16);
      Function_222f5bc((int)v2);
      v2[209] = Function_222ebb8();
    }
  }
  else if ( Function_20383e8() || Function_20380e4() == 3 )
  {
    Function_222f6ec(v2);
  }
  return v3;
}

//----- (0222FB44) --------------------------------------------------------
int __fastcall Function_222fb44(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(a1[96] & 0xFF) )
    return v3;
  if ( ((int (*)(void))dword_21D2598[146])() )
  {
    Function_2024814(v2[88], 0);
    v2[209] = 71;
    result = v3;
  }
  else
  {
    if ( Function_2038294() )
    {
      if ( v2[217] )
      {
        v2[209] = 16;
      }
      else
      {
        Function_222f4c4((int)v2, 16);
        Function_222f5bc((int)v2);
        v2[209] = Function_222ebb8();
      }
    }
    else if ( Function_20383e8() || Function_20380e4() == 3 )
    {
      Function_222f6ec(v2);
    }
    result = v3;
  }
  return result;
}

//----- (0222FBD0) --------------------------------------------------------
int __fastcall Function_222fbd0(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  if ( ((int (*)(void))dword_21D2598[146])() )
  {
    v7 = Function_2024828(v2[88], v4, v5, v6);
    if ( !v7 || v7 == 1 )
      return v3;
    ((void (*)(void))dword_21D2598[151])();
  }
  if ( Function_2038294() )
  {
    if ( v2[217] )
    {
      v2[209] = 16;
    }
    else
    {
      Function_222f4c4((int)v2, 16);
      Function_222f5bc((int)v2);
      v2[209] = Function_222ebb8();
    }
  }
  else if ( Function_20383e8() || Function_20380e4() == 3 )
  {
    Function_222f6ec(v2);
  }
  return v3;
}

//----- (0222FC48) --------------------------------------------------------
int __fastcall Function_222fc48(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = *(uint *)(a1 + 856);
  if ( v4 <= 0 )
  {
    if ( Function_20382c0() )
    {
      *(uint *)(v2 + 836) = Function_222ebb8();
    }
    else if ( Function_20383e8() || Function_20380e4() == 3 )
    {
      Function_222f6ec(v2);
    }
    else if ( Function_20380e4() >= 4 || Function_2038284() || !Function_2035d78(0) )
    {
      Function_2038378();
      *(uint *)(v2 + 836) = Function_222ebb8();
    }
    result = v3;
  }
  else
  {
    *(uint *)(a1 + 856) = v4 - 1;
    result = v3;
  }
  return result;
}

//----- (0222FCB8) --------------------------------------------------------
int __fastcall Function_222fcb8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2232dfc(a1);
  Function_2232ca8(v2, 19);
  *(uint *)(v2 + 836) = 17;
  *(uint *)(v2 + 868) = 0;
  return v3;
}

//----- (0222FCDC) --------------------------------------------------------
int __fastcall Function_222fcdc(int *a1, int a2)
{
  int v2;
  int v3;

  v2 = (int)a1;
  v3 = a2;
  if ( dword_21BF6C4 & 3 )
  {
    if ( a1[212] == 1 )
    {
      a1[210] = 10;
      a1[209] = 34;
      Function_2038350();
    }
    else if ( Function_202af94(*a1) )
    {
      Function_222f4c4(v2, 16);
      Function_222f5bc(v2);
      *(uint *)(v2 + 836) = Function_222ebb8();
      if ( Function_201a7cc(v2 + 764) )
      {
        Function_200e084(v2 + 764, 0);
        Function_201a8fc(v2 + 764);
      }
    }
    else
    {
      Function_2232b58(v2, 26, 1);
      *(uint *)(v2 + 836) = 59;
      *(uint *)(v2 + 856) = 1;
    }
  }
  return v3;
}

//----- (0222FD70) --------------------------------------------------------
int __fastcall Function_222fd70(int a1, int a2, int a3, int a4)
{
  int v4;
  ushort *v5;
  ushort *v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  int v17;
  int v18;
  uint v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  ushort *v29;
  int v30;
  char v31;
  int v32;
  int v33;

  v33 = a4;
  v4 = a1;
  v5 = (ushort *)LoadTrainerDataAdress(*(uint *)(a1 + 352));
  v6 = Function_2025f04(v5, 0x36u);
  if ( !Function_201a7cc(v4 + 732) )
    return Function_20237bc_FreeMsg((int)v6, v7);
  Function_201ada4_ClearTextBox(v4 + 732, 0);
  if ( GetGender((int)v5) )
    v9 = 197632;
  else
    v9 = 329216;
  v32 = v9;
  Function_201d78c(v4 + 732, 0);
  Function_20237bc_FreeMsg((int)v6, v10);
  v11 = Function_222dd20(v4, *(uint *)(v4 + 4));
  v12 = v11;
  v15 = Function_223484c(v11, &v32, v13, v14);
  v19 = v15;
  if ( v12 == 1 )
  {
    v20 = ((int (__cdecl *)(uint, int, int, int))dword_21D2388[0])(v15, v16, v17, v18);
    if ( v20 == -1 )
    {
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), v19, *(ushort **)(v4 + 368));
    }
    else
    {
      v23 = ((int (__cdecl *)(int, int, int, int))dword_21D2388[0])(v20, -1, v21, v22);
      v24 = Function_202ad2c(*(uint *)v4, v23, 8u);
      if ( v24 )
      {
        if ( v24 == 1 )
        {
          v24 = 197632;
          v32 = 197632;
        }
      }
      else
      {
        v24 = 329216;
        v32 = 329216;
      }
      v28 = ((int (__cdecl *)(int, int, int, int))dword_21D2388[0])(v24, v25, v26, v27);
      v29 = (ushort *)Function_202aef0(*(uint *)v4, v28);
      Function_2023d28(*(ushort **)(v4 + 368), v29);
    }
  }
  else
  {
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), v15, *(ushort **)(v4 + 368));
  }
  v30 = *(uint *)(v4 + 368);
  Function_201d78c(v4 + 732, 0);
  Function_222ea38(*(uint *)(v4 + 348), v4 + 2824, 1, 2, 1u, v12);
  if ( *(uchar *)(*(uint *)(v4 + 4) + 33) )
    v31 = 8;
  else
    v31 = 1;
  Function_222e9c0(*(uint *)(v4 + 348), v4 + 2824, 1, 26, 1u, v31, 0);
  return Function_201a9a4(v4 + 732);
}

//----- (0222FED8) --------------------------------------------------------
int __fastcall Function_222fed8(int a1, int a2, int a3)
{
  int result;

  if ( !a3 )
    result = Function_2005748(0x5DCu);
  return result;
}

//----- (0222FEEC) --------------------------------------------------------
char *__fastcall Function_222feec(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_201a7cc(a1 + 732) )
    Function_201a8fc(v1 + 732);
  if ( Function_201a7cc(v1 + 748) )
  {
    Function_200dc9c(v1 + 748, 0);
    Function_201a8fc(v1 + 748);
  }
  Function_201a7e8(*(uint **)(v1 + 348), v1 + 732, 3, 1, 1, 0x1Cu, 2u, 13, 402);
  Function_201a7e8(*(uint **)(v1 + 348), v1 + 748, 1, 1, 1, 0x1Cu, 2u, 13, 417);
  Function_201ada4_ClearTextBox(v1 + 748, 15);
  Function_201a9a4(v1 + 748);
  return Function_200dc48(v1 + 748, 0, 473, 0xBu);
}

//----- (0222FFAC) --------------------------------------------------------
int __fastcall Function_222ffac(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  v3 = a2;
  if ( !Function_200f2ac() )
    return v3;
  if ( !Function_20383e8() && !Function_20382c0() )
    return v3;
  ((void (__fastcall *)(int (__fastcall *)(int)))dword_21D1108[13])(Function_207dfac);
  *(uint *)(v2 + 3432) = 0;
  v7 = LoadFromNARC_8(92, 0x36u, v5, v6);
  Function_222e90c(*(uint **)(v2 + 348), (int *)(v2 + 2824), (int)v7, 54);
  Function_2232f30(v2);
  Function_2232dfc(v2);
  Function_2019ebc(*(uint **)(v2 + 348), 3u);
  if ( *(uint *)(v2 + 332) )
  {
    Function_201a8fc(v2 + 780);
    Function_2001384(*(uint *)(v2 + 336), 0, 0);
    *(uint *)(v2 + 336) = 0;
    Function_2013a3c(*(int **)(v2 + 332));
    *(uint *)(v2 + 332) = 0;
  }
  if ( !Function_2235194(v2 + 904) )
  {
    if ( *(uchar *)(*(uint *)(v2 + 4) + 30) )
      v8 = 97;
    else
      v8 = 0;
    *(ushort *)(v2 + 4242) = Function_202afb4(*(uint *)v2);
    Function_2235060(v2 + 904, 54, v7, *(uint *)(v2 + 348), v8, *(ushort *)(v2 + 4242));
    v9 = Function_2235380(v2 + 904, v8);
    Function_222e87c(v2, v9);
  }
  if ( !Function_2232fcc(v2) )
    Function_2232fe0(v2, v7, 54);
  Function_22336a4(v2, 54);
  Function_2232dfc(v2);
  Function_222f5bc(v2);
  Function_222feec(v2);
  v10 = Function_2232e58(v2, 16);
  Function_2038b60(v10);
  *(uint *)(v2 + 876) = -1;
  Call_FS_CloseFile(v7);
  Function_200f174(0, 1, 1, 0, 6, 1, 54);
  *(uint *)(v2 + 836) = 19;
  Function_20388f4(0, 0);
  return v3;
}

//----- (0223012C) --------------------------------------------------------
BOOL Function_223012c()
{
  return Function_20380e4() == 1;
}

//----- (02230140) --------------------------------------------------------
int __fastcall Function_2230140(int a1)
{
  int v1;

  v1 = a1;
  if ( ((int (*)(void))dword_21D254C[7])() == -1 )
    return 0;
  ((void (__fastcall *)(uint))dword_21D2584[0])(*(uchar *)(*(uint *)(v1 + 4) + 33));
  return 1;
}

//----- (02230164) --------------------------------------------------------
int __fastcall Function_2230164(int a1)
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
  int v13;
  int v14;
  int v15;
  int v16;

  v1 = a1;
  v15 = Function_222f5bc(a1);
  v14 = 0;
  v13 = 0;
  if ( Function_20d5190((uchar *)(v1 + 12), (uchar *)(v1 + 44), 32) )
  {
    v2 = 0;
    do
    {
      v3 = v1 + v2;
      v4 = *(uchar *)(v1 + v2 + 44);
      v5 = 0;
      v6 = 0;
      while ( *(uchar *)(v1 + v6 + 12) != v4 )
      {
        if ( ++v6 >= 32 )
          goto LABEL_7;
      }
      v5 = 1;
LABEL_7:
      if ( !v5 )
      {
        if ( *(uchar *)(v1 + v2 + 44) )
        {
          v7 = Function_222e8d4(v1, v4);
          if ( v7 )
          {
            Function_2235478(v1 + 904, v7);
            Function_222e8a8(v1, v7);
            Function_223366c(v1, *(uchar *)(v1 + v2 + 44));
            Function_2232fb0(v1, *(uchar *)(v1 + v2 + 44), 54);
            v13 = 1;
          }
        }
      }
      v8 = 0;
      v9 = 0;
      while ( *(uchar *)(v3 + 12) != *(uchar *)(v1 + v9 + 44) )
      {
        if ( ++v9 >= 32 )
          goto LABEL_15;
      }
      v8 = 1;
LABEL_15:
      if ( !v8 && *(uchar *)(v3 + 12) )
      {
        v10 = Function_2234fa8(v1, *(uchar *)(v3 + 12) - 1);
        v11 = v1 + v2;
        v16 = Function_22353ec(v1 + 904, *(uchar *)(v10 + 29), *(uchar *)(v1 + v2 + 12));
        if ( v16 )
        {
          Function_2233638(v1, *(uchar *)(v3 + 12), 2);
          Function_222e87c(v1, v16);
          v14 = 1;
        }
        else
        {
          Function_2233638(v1, *(uchar *)(v11 + 12), 1);
          *(uchar *)(v11 + 12) = 0;
        }
      }
      ++v2;
    }
    while ( v2 < 32 );
    memcpy((uchar *)(v1 + 44), (char *)(v1 + 12), 32);
    Function_22336c4(v1);
    if ( v14 == 1 )
    {
      Function_2005748(0x64Fu);
    }
    else if ( v13 == 1 )
    {
      Function_2005748(0x64Fu);
    }
  }
  return v15;
}

//----- (02230298) --------------------------------------------------------
int __fastcall Function_2230298(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  result = Function_222f62c(a1);
  if ( result > 0 )
    result = Function_22336a4(v2, v3);
  return result;
}

//----- (022302B0) --------------------------------------------------------
int __fastcall Function_22302b0(int a1, int a2)
{
  uint *v2;
  int v3;

  v2 = (uint *)a1;
  v3 = a2;
  Function_2230164(a1);
  return Function_2230298(v2, v3);
}

//----- (022302C4) --------------------------------------------------------
int __fastcall Function_22302c4(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a1;
  v3 = a2;
  if ( !Function_200f2ac() )
    return v3;
  if ( Function_20383e8() )
  {
    Function_222f6ec(v2);
    return v3;
  }
  if ( Function_20380e4() == 4 )
  {
    v5 = ((int (*)(void))dword_21D2388[0])();
    Function_2232dc0(v2, v5);
    Function_2232b58(v2, 18, 0);
    v2[209] = 29;
    Function_2232e58(v2, 16);
    Function_2038378();
    return v3;
  }
  Function_22302b0((int)v2, 54);
  Function_22331e0(v2);
  Function_22355ec(v2 + 226);
  if ( !Function_223537c(v2 + 226) )
  {
    if ( ((int (*)(void))dword_21D254C[7])() == -1 && dword_21BF6C4 & 0x400 )
    {
      if ( Function_2232f00(v2) )
        Function_2232b58(v2, 90, 0);
      else
        Function_2232b58(v2, 91, 0);
      Function_2005748(0x5DDu);
      Function_222fd70((int)v2, v6, v7, v8);
      v2[209] = 20;
      Function_2232f90(v2, 54);
      return v3;
    }
    v9 = Function_22330c0(v2, 54);
    v10 = Function_222e8d4((int)v2, v9);
    if ( v9 )
    {
      if ( v10 )
        Function_223532c(v2 + 226, v10);
      else
        Function_2235370(v2 + 226, 0);
    }
    else
    {
      Function_2235370(v2 + 226, v10);
    }
  }
  if ( Function_223012c() && v2[219] != -1 )
  {
    Function_2005748(0x624u);
    v2[209] = 48;
    return v3;
  }
  if ( v2[219] != -1 || ((int (*)(void))dword_21D254C[7])() == -1 )
  {
    if ( v2[219] != -1 && ((int (*)(void))dword_21D254C[7])() == -1 )
    {
      ((void (__fastcall *)(uint))dword_21D2584[0])(0);
      Function_2232dc0(v2, v2[219]);
      Function_2232b58(v2, 18, 0);
      Function_2038378();
      v2[209] = 27;
      return v3;
    }
  }
  else
  {
    v2[219] = ((int (*)(void))dword_21D254C[7])();
    Function_2232dc0(v2, v2[219]);
    Function_2232b58(v2, 76, 0);
    ((void (__fastcall *)(uint))dword_21D2584[0])(*(uchar *)(v2[1] + 33));
    v2[208] = 0;
  }
  if ( ((int (*)(void))dword_21D254C[0])() == 1 && ((int (*)(void))dword_21D254C[7])() == -1 )
    ((void (__fastcall *)(uint))dword_21D2584[0])(0);
  v11 = Function_222dd20((int)v2, v2[1]);
  v12 = v11;
  if ( v2[219] == -1 )
  {
    if ( dword_21BF6C4 & 2 && Function_222ddfc(v11) )
    {
      Function_2005748(0x5DDu);
      v2[209] = 39;
      Function_2232f90(v2, 54);
      return v3;
    }
    Function_2235198(v2 + 226);
    LOBYTE(v11) = Function_22355fc(v2 + 226);
  }
  switch ( (uchar)v11 )
  {
    case 0:
      result = v3;
      break;
    case 1:
      Function_2005748(0x5DDu);
      if ( Function_222ddfc(v12) )
      {
        v2[209] = 39;
      }
      else
      {
        v2[210] = 8;
        v2[209] = 57;
        Function_2232b58(v2, 25, 1);
      }
      Function_2232f90(v2, 54);
      result = v3;
      break;
    case 2:
      Function_2005748(0x5DDu);
      if ( Function_222ddfc(v12) )
        v13 = 39;
      else
        v13 = 42;
      v2[209] = v13;
      Function_2232f90(v2, 54);
      result = v3;
      break;
    case 3:
      Function_2005748(0x5DDu);
      if ( Function_222ddfc(v12) )
      {
        Function_22355b0(v2 + 226);
        v2[209] = 39;
      }
      else if ( v12 == 16 && Function_20382c0() == 1 )
      {
        Function_22355b0(v2 + 226);
        v2[209] = 36;
      }
      Function_2232f90(v2, 54);
      result = v3;
      break;
    default:
      ErrorHandler();
      result = v3;
      break;
  }
  return result;
}

//----- (022305EC) --------------------------------------------------------
int __fastcall Function_22305ec(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_2230140(a1) )
  {
    *(uint *)(v2 + 836) = 19;
    Function_223503c(v2);
  }
  else if ( !Function_201d724(*(uint *)(v2 + 384) & 0xFF) )
  {
    *(uint *)(v2 + 836) = 19;
    Function_223503c(v2);
    Function_2232dfc(v2);
  }
  return v3;
}

//----- (02230634) --------------------------------------------------------
int __fastcall Function_2230634(int a1, int a2)
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

  v2 = a2;
  v3 = a1;
  v4 = Function_2234fa8(a1, *(ushort *)(a1 + 894) - 1);
  v5 = *(uchar *)(v4 + 33);
  v6 = Function_222dd20(v3, v4);
  if ( --*(uint *)(v3 + 828) >= 0 )
  {
    if ( Function_20380e4() == 5 )
    {
      v7 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v3, v7);
      Function_2232b58(v3, 15, 0);
      *(uint *)(v3 + 836) = 27;
    }
    else if ( Function_20380e4() == 3 )
    {
      v8 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v3, v8);
      Function_2232b58(v3, 18, 0);
      *(uint *)(v3 + 836) = 27;
    }
    else if ( Function_20380e4() == 4 || Function_2038284() )
    {
      v9 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v3, v9);
      Function_2232b58(v3, 19, 0);
      *(uint *)(v3 + 836) = 27;
    }
    else if ( Function_20383e8() )
    {
      Function_222f6ec(v3);
    }
    else if ( v5 )
    {
      if ( v6 == 16 )
      {
        if ( Function_20380e4() == 1 )
        {
          Function_2232dfc(v3);
          Function_2232e58(v3, 1);
          *(uint *)(v3 + 836) = 24;
          Function_202b13c(*(uint *)v3, *(ushort *)(v3 + 894) - 1, v12, v13);
        }
      }
      else
      {
        v11 = ((int (*)(void))dword_21D2388[0])();
        Function_2232dc0(v3, v11);
        Function_2232b58(v3, 16, 0);
        *(uint *)(v3 + 836) = 27;
      }
    }
    else
    {
      v10 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v3, v10);
      Function_2232b58(v3, 16, 0);
      *(uint *)(v3 + 836) = 27;
    }
  }
  else
  {
    *(uint *)(v3 + 836) = 70;
  }
  return v2;
}

//----- (02230774) --------------------------------------------------------
int __fastcall Function_2230774(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  v4 = ((int (*)(void))dword_21D2388[0])();
  Function_2232dc0(v2, v4);
  Function_2232b58(v2, 14, 0);
  Function_2232e58(v2, 1);
  v2[209] = 23;
  v5 = ((int (*)(void))dword_21D2388[0])();
  Function_202b13c(*v2, v5, v6, v7);
  return v3;
}

//----- (022307B0) --------------------------------------------------------
int __fastcall Function_22307b0(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  if ( Function_20383e8() )
  {
    Function_222f6ec(v2);
    result = v3;
  }
  else if ( ((int (*)(void))dword_21D2388[0])() >= 0 )
  {
    v5 = ((int (*)(void))dword_21D2388[0])();
    v6 = Function_2234fa8(v2, v5);
    v7 = Function_222dd20(v2, v6);
    if ( v7 == 16 || v7 == 1 )
    {
      if ( !Function_201d724(*(uint *)(v2 + 384) & 0xFF) )
      {
        if ( dword_21BF6C4 & 3 )
        {
          Function_2232dfc(v2);
          *(uint *)(v2 + 836) = 24;
        }
        else
        {
          Function_2230860(v2, v3);
        }
      }
      result = v3;
    }
    else
    {
      v8 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v2, v8);
      Function_2232b58(v2, 16, 0);
      *(uint *)(v2 + 836) = 27;
      result = v3;
    }
  }
  else
  {
    Function_2232b58(v2, 19, 0);
    *(uint *)(v2 + 836) = 27;
    result = v3;
  }
  return result;
}

//----- (02230860) --------------------------------------------------------
int __fastcall Function_2230860(int a1, int a2)
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
  int v11;

  v2 = a1;
  v3 = a2;
  if ( ((int (*)(void))dword_21D2388[0])() >= 0 )
  {
    v5 = ((int (*)(void))dword_21D2388[0])();
    v6 = Function_2234fa8(v2, v5);
    v7 = Function_222dd20(v2, v6);
    Function_22302b0(v2, 54);
    Function_22331e0(v2);
    if ( Function_20380e4() == 5 )
    {
      v8 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v2, v8);
      Function_2232b58(v2, 15, 0);
      *(uint *)(v2 + 836) = 27;
    }
    else if ( Function_20380e4() == 3 )
    {
      v9 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v2, v9);
      Function_2232b58(v2, 18, 0);
      *(uint *)(v2 + 836) = 27;
    }
    else if ( Function_20380e4() == 4 || Function_2038284() )
    {
      v10 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v2, v10);
      Function_2232b58(v2, 19, 0);
      *(uint *)(v2 + 836) = 27;
    }
    else if ( Function_20383e8() )
    {
      Function_222f6ec(v2);
    }
    else if ( v7 == 16 || v7 == 1 )
    {
      if ( dword_21BF6C4 & 3 )
      {
        Function_2232b58(v2, 20, 0);
        *(uint *)(v2 + 836) = 25;
      }
      else if ( ((int (*)(void))dword_21D2544[0])() )
      {
        Function_222e9c0(*(uint *)(v2 + 348), v2 + 2824, 1, 2, 1u, 2, 0);
      }
      else
      {
        Function_222e9c0(*(uint *)(v2 + 348), v2 + 2824, 1, 2, 1u, 3, 0);
      }
    }
    else
    {
      v11 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v2, v11);
      Function_2232b58(v2, 16, 0);
      *(uint *)(v2 + 836) = 27;
    }
    result = v3;
  }
  else
  {
    Function_2232b58(v2, 19, 0);
    *(uint *)(v2 + 836) = 27;
    result = v3;
  }
  return result;
}

//----- (022309D0) --------------------------------------------------------
int __fastcall Function_22309d0(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  if ( Function_20383e8() )
  {
    Function_222f6ec(v2);
    result = v3;
  }
  else
  {
    if ( !Function_201d724(*(uint *)(v2 + 384) & 0xFF) )
    {
      v5 = ((int (*)(void))dword_21D2388[0])();
      Function_202b13c(*(uint *)v2, v5, v6, v7);
      *(uint *)(v2 + 388) = Function_2002100(
                                *(uint **)(v2 + 348),
                                (uchar *)dword_223894C,
                                473,
                                11,
                                0x36u);
      *(uint *)(v2 + 836) = 26;
    }
    result = v3;
  }
  return result;
}

//----- (02230A30) --------------------------------------------------------
int __fastcall Function_2230a30(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  v4 = Function_2002114(a1[97], 0x36u);
  if ( v4 == -1 )
  {
    if ( Function_20380e4() < 4 && !Function_2038284() && Function_2035d78(0) )
    {
      if ( Function_20383e8() )
        Function_222f6ec(v2);
    }
    else
    {
      Function_2232dfc(v2);
      Function_2232e58(v2, 16);
      Function_2002154(v2[97], 0x36u);
      v2[219] = -1;
      v2[214] = 20;
      v2[209] = 65;
    }
    result = v3;
  }
  else
  {
    if ( v4 )
    {
      v2[209] = 24;
    }
    else if ( Function_20383e8() )
    {
      Function_222f6ec(v2);
    }
    else
    {
      v6 = Function_2232e58(v2, 16);
      Function_20383d4(v6, v7, v8, v9);
      v2[219] = -1;
      v2[214] = 20;
      v2[209] = 65;
    }
    Function_2232dfc(v2);
    result = v3;
  }
  return result;
}

//----- (02230AF8) --------------------------------------------------------
int __fastcall Function_2230af8(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  if ( Function_20383e8() )
  {
    Function_222f6ec(v2);
    result = v3;
  }
  else
  {
    if ( Function_222dd20((int)v2, v2[1]) != 16 )
      Function_2232e58(v2, 16);
    if ( Function_201d724(v2[96] & 0xFF) )
    {
      v2[214] = 30;
      result = v3;
    }
    else
    {
      --v2[214];
      if ( dword_21BF6C4 & 3 || !v2[214] )
      {
        Function_2232dfc(v2);
        v5 = Function_2038378();
        Function_2038b60(v5);
        if ( Function_2235194(v2 + 226) )
        {
          Function_2232f30(v2);
          Function_222fd70((int)v2, v6, v7, v8);
          v2[219] = -1;
          v2[209] = 19;
          Function_223503c(v2);
        }
        else
        {
          v2[214] = 20;
          v2[209] = 65;
        }
      }
      result = v3;
    }
  }
  return result;
}

//----- (02230BB4) --------------------------------------------------------
int __fastcall Function_2230bb4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(*(uint *)(a1 + 384) & 0xFF) )
    return v3;
  if ( dword_21BF6C4 & 3 )
  {
    Function_2232dfc(v2);
    Function_2232e58(v2, 16);
    Function_2038378();
    *(uint *)(v2 + 856) = 20;
    *(uint *)(v2 + 836) = 65;
  }
  return v3;
}

//----- (02230C04) --------------------------------------------------------
int __fastcall Function_2230c04(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  if ( Function_20383e8() )
  {
    Function_222f6ec(v2);
    result = v3;
  }
  else if ( Function_201d724(v2[96] & 0xFF) )
  {
    v2[214] = 30;
    result = v3;
  }
  else
  {
    --v2[214];
    if ( dword_21BF6C4 & 3 || !v2[214] )
    {
      Function_2232dfc(v2);
      v5 = Function_2232e58(v2, 16);
      Function_2038b60(v5);
      if ( Function_2235194(v2 + 226) )
      {
        Function_2232f30(v2);
        Function_222fd70((int)v2, v6, v7, v8);
        v2[219] = -1;
        v2[209] = 19;
        Function_223503c(v2);
      }
      else
      {
        v2[209] = Function_222ebb8();
      }
    }
    result = v3;
  }
  return result;
}

//----- (02230CAC) --------------------------------------------------------
int __fastcall Function_2230cac(int a1, int a2)
{
  return a2;
}

//----- (02230CB0) --------------------------------------------------------
int __fastcall Function_2230cb0(int a1, int a2)
{
  return a2;
}

//----- (02230CB4) --------------------------------------------------------
int __fastcall Function_2230cb4(int a1, int a2)
{
  return a2;
}

//----- (02230CB8) --------------------------------------------------------
int __fastcall Function_2230cb8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = *(uint *)(a1 + 856);
  if ( v4 <= 0 )
  {
    if ( dword_21BF6C4 & 3 )
    {
      Function_2232b58(a1, 26, 1);
      *(uint *)(v3 + 836) = 59;
      *(uint *)(v3 + 856) = 1;
    }
    result = v2;
  }
  else
  {
    *(uint *)(a1 + 856) = v4 - 1;
    result = a2;
  }
  return result;
}

//----- (02230CF8) --------------------------------------------------------
int __fastcall Function_2230cf8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_22355fc(a1 + 904);
  Function_2232b58(v2, 10, 0);
  *(uint *)(v2 + 836) = 40;
  return v3;
}

//----- (02230D20) --------------------------------------------------------
int __fastcall Function_2230d20(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_22355fc(a1 + 904);
  if ( !Function_201d724(*(uint *)(v2 + 384) & 0xFF) )
  {
    *(uint *)(v2 + 388) = Function_2002100(
                              *(uint **)(v2 + 348),
                              (uchar *)dword_223894C,
                              473,
                              11,
                              0x36u);
    *(uint *)(v2 + 836) = 41;
  }
  return v3;
}

//----- (02230D6C) --------------------------------------------------------
int __fastcall Function_2230d6c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_2002114(a1[97], 0x36u);
  Function_22355fc(v2 + 226);
  if ( v2[219] == -1 && ((int (*)(void))dword_21D254C[7])() != -1 )
  {
    ((void (__fastcall *)(uint))dword_21D2584[0])(*(uchar *)(v2[1] + 33));
    if ( v4 == -1 )
      Function_2002154(v2[97], 0x36u);
    v4 = 1;
  }
  if ( v4 == -1 )
    return v3;
  if ( v4 )
  {
    Function_223503c(v2);
    Function_223500c(v2, 1);
  }
  else
  {
    v6 = Function_2232e58(v2, 16);
    Function_2038b60(v6);
    Function_223503c(v2);
  }
  v2[209] = 19;
  return v3;
}

//----- (02230E04) --------------------------------------------------------
int __fastcall Function_2230e04(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int i;
  int v9;
  int v10;
  int (__fastcall *v11)(int, int, int);
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v2 = a1;
  v9 = a2;
  v10 = 0;
  v11 = Function_222fed8;
  v12 = 0;
  v13 = 0;
  v14 = 196611;
  v15 = 268437504;
  v16 = 47;
  v17 = 0;
  v3 = 3;
  v4 = dword_2239CDC;
  if ( Function_222dcf8(a1) == 1 )
  {
    v3 = 4;
    LOWORD(v14) = v14 + 1;
    ++HIWORD(v14);
    dword_2239CE4[4] = 30;
    dword_2239CF8 = 19;
  }
  if ( Function_222dce0(v2) == 1 )
  {
    ++v3;
    LOWORD(v14) = v14 + 1;
    ++HIWORD(v14);
    v5 = 2 * (v3 - 1);
    dword_2239CDC[v5] = 32;
    dword_2239CDC[v5 + 1] = 21;
  }
  if ( Function_222dd1c() == 1 )
  {
    ++v3;
    LOWORD(v14) = v14 + 1;
    ++HIWORD(v14);
    v6 = 2 * (v3 - 1);
    dword_2239CDC[v6] = 34;
    dword_2239CDC[v6 + 1] = 29;
  }
  LOWORD(v14) = v14 + 1;
  ++HIWORD(v14);
  dword_2239CDC[2 * v3] = 41;
  dword_2239CDC[2 * v3 + 1] = -2;
  *(uint *)(v2 + 340) = Function_2013a04(v3 + 1, 0x36u);
  for ( i = 0; i < v3 + 1; v4 += 2 )
  {
    Function_2013a4c(*(uint **)(v2 + 340), *(ushort ***)(v2 + 360), *v4, v4[1]);
    ++i;
  }
  if ( Function_201a7cc(v2 + 796) )
  {
    Function_200dc9c(v2 + 796, 0);
    Function_201a8fc(v2 + 796);
  }
  Function_201a7e8(*(uint **)(v2 + 348), v2 + 796, 2, 16, 3, 0xFu, 2 * (v3 + 1), 13, 59 - 2 * (v3 + 1));
  Function_200dc48(v2 + 796, 1, 473, 0xBu);
  v10 = *(uint *)(v2 + 340);
  v13 = v2 + 796;
  *(uint *)(v2 + 344) = Function_200112c(&v10, 0, *(ushort *)(v2 + 880), 0x36u);
  Function_201a9a4(v2 + 796);
  Function_2232b58(v2, 8, 0);
  Function_22355fc(v2 + 904);
  *(uint *)(v2 + 836) = 37;
  return v9;
}

//----- (02230FBC) --------------------------------------------------------
int __fastcall Function_2230fbc(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  v8 = Function_222df88(a1);
  v4 = Function_22319b8(v2);
  Function_22355fc(v2 + 904);
  if ( Function_201d724(*(uint *)(v2 + 384) & 0xFF) )
  {
    if ( Function_2230140(v2) )
    {
      *(uint *)(v2 + 836) = 19;
      Function_200dc9c(v2 + 796, 0);
      Function_201a8fc(v2 + 796);
      Function_2001384(*(uint *)(v2 + 344), 0, (ushort *)(v2 + 880));
      Function_2013a3c(*(int **)(v2 + 340));
      Function_2232dfc(v2);
    }
    result = v3;
  }
  else
  {
    v6 = Function_2001288(*(uint *)(v2 + 344));
    if ( Function_2230140(v2) )
      v6 = -2;
    if ( v6 == -2 )
    {
      *(uint *)(v2 + 836) = 19;
      Function_2232dfc(v2);
      Function_2005748(0x5DDu);
    }
    else
    {
      if ( v6 == -1 )
        return v3;
      Function_2005748(0x5DDu);
      if ( v6 == 19 && v4 )
      {
        if ( v4 == 1 )
        {
          Function_2232b58(v2, 104, 0);
        }
        else if ( v4 == 3 )
        {
          Function_2232b58(v2, 106, 0);
        }
        else
        {
          Function_2232b58(v2, 105, 0);
        }
        *(uint *)(v2 + 836) = 29;
      }
      else if ( v6 != 15 || v8 >= 2 )
      {
        if ( v6 != 1 || v8 >= 2 )
        {
          if ( !v6 || v6 == 1 || v6 == 29 )
          {
            Function_200dc9c(v2 + 796, 0);
            Function_201a8fc(v2 + 796);
            Function_2001384(*(uint *)(v2 + 344), 0, (ushort *)(v2 + 880));
            Function_2013a3c(*(int **)(v2 + 340));
            Function_223128c(v2, v6);
            *(uint *)(v2 + 836) = 38;
            return v3;
          }
          Function_2232e58(v2, v6);
          *(uint *)(v2 + 836) = 19;
          Function_2232dfc(v2);
        }
        else
        {
          Function_2232b58(v2, 103, 0);
          *(uint *)(v2 + 836) = 29;
        }
      }
      else
      {
        Function_2232b58(v2, 89, 0);
        *(uint *)(v2 + 836) = 29;
      }
      v7 = 1;
      if ( Function_222dd64(v6) && *(uint *)(v2 + 836) == 19 )
      {
        *(uint *)(v2 + 836) = 68;
        Function_2234fcc(v2, -1, v6);
        Function_222dfd4(v6);
        Function_2232e58(v2, v6);
        *(uint *)(v2 + 840) = Function_222dd94(v6);
        v7 = 0;
      }
      else
      {
        Function_2234fcc(v2, -1, v6);
        Function_222dfd4(v6);
      }
      if ( *(uint *)(v2 + 836) == 19 )
        Function_223500c(v2, v7);
    }
    Function_200dc9c(v2 + 796, 0);
    Function_201a8fc(v2 + 796);
    Function_2001384(*(uint *)(v2 + 344), 0, (ushort *)(v2 + 880));
    Function_2013a3c(*(int **)(v2 + 340));
    result = v3;
  }
  return result;
}

//----- (02231200) --------------------------------------------------------
int __fastcall Function_2231200(int *a1, int a2)
{
  int *v2;
  int v3;
  int result;
  int v5;

  v2 = a1;
  v3 = a2;
  if ( Function_20383e8() )
  {
    Function_222f6ec(v2);
    result = v3;
  }
  else
  {
    Function_22355fc(v2 + 226);
    if ( Function_2230140((int)v2) )
      v2[209] = 19;
    if ( Function_20382c0() )
    {
      Function_20388f4(0, 1);
      Function_203632c(0);
      Function_200f174(0, 0, 0, 0, 6, 1, 54);
      v2[224] = 0;
      Function_20329e0(v2[88], 0);
      Function_2032ac0();
      v5 = Function_203608c();
      Function_2032e1c(v5);
      v3 = 2;
    }
    result = v3;
  }
  return result;
}

//----- (0223128C) --------------------------------------------------------
int __fastcall Function_223128c(int a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int (__fastcall *v9)(int, int, int);
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v4 = a1;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      *(ushort *)(a1 + 888) = 0;
      v8 = 0;
      v9 = Function_222fed8;
      v10 = 0;
      v11 = 0;
      v12 = 262148;
      v13 = 268437504;
      v2 = &dword_2239C9C;
      v3 = 4;
      v14 = 47;
      v15 = 0;
    }
    else if ( a2 == 29 )
    {
      v8 = 0;
      v9 = Function_222fed8;
      v10 = 0;
      v11 = 0;
      v12 = 262148;
      v13 = 268437504;
      v14 = 47;
      v15 = 0;
      v2 = &dword_2239C5C;
      v3 = 4;
      *(ushort *)(a1 + 888) = 2;
    }
  }
  else
  {
    *(ushort *)(a1 + 888) = 1;
    v8 = 0;
    v9 = Function_222fed8;
    v10 = 0;
    v11 = 0;
    v12 = 262148;
    v13 = 268437504;
    v2 = &dword_2239C7C;
    v3 = 4;
    v14 = 47;
    v15 = 0;
  }
  v5 = 0;
  for ( *(uint *)(a1 + 340) = Function_2013a04(v3, 0x36u); v5 < v3; v2 += 2 )
  {
    if ( *v2 == 71 )
    {
      Function_200c0b0(*(uint *)(v4 + 356), 0, v5);
      Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), *v2, *(ushort **)(v4 + 368));
      Function_200c388(*(uint **)(v4 + 356), *(uint *)(v4 + 376), *(uint *)(v4 + 368));
      Function_2013a6c(*(uint **)(v4 + 340), *(uint *)(v4 + 376), v2[1], v6);
    }
    else
    {
      Function_2013a4c(*(uint **)(v4 + 340), *(ushort ***)(v4 + 360), *v2, v2[1]);
    }
    ++v5;
  }
  if ( Function_201a7cc(v4 + 796) )
  {
    Function_200dc9c(v4 + 796, 0);
    Function_201a8fc(v4 + 796);
  }
  Function_201a7e8(*(uint **)(v4 + 348), v4 + 796, 2, 16, 9, 0xFu, 2 * v3, 13, 59 - 2 * v3);
  Function_200dc48(v4 + 796, 1, 473, 0xBu);
  v8 = *(uint *)(v4 + 340);
  v11 = v4 + 796;
  *(uint *)(v4 + 344) = Function_200112c(&v8, 0, *(ushort *)(v4 + 2 * *(ushort *)(v4 + 888) + 882), 0x36u);
  Function_201a9a4(v4 + 796);
  return 1;
}

//----- (02231440) --------------------------------------------------------
int __fastcall Function_2231440(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_22355fc(a1 + 904);
  if ( Function_2230140(v2) )
  {
    *(uint *)(v2 + 836) = 19;
    Function_200dc9c(v2 + 796, 0);
    Function_201a8fc(v2 + 796);
    Function_2001384(*(uint *)(v2 + 344), 0, (ushort *)(v2 + 882 + 2 * *(ushort *)(v2 + 888)));
    Function_2013a3c(*(int **)(v2 + 340));
    Function_2232dfc(v2);
    return v3;
  }
  if ( Function_201d724(*(uint *)(v2 + 384) & 0xFF) )
    return v3;
  v5 = Function_2001288(*(uint *)(v2 + 344));
  if ( v5 == -2 )
  {
    Function_2005748(0x5DDu);
    *(uint *)(v2 + 836) = 36;
  }
  else
  {
    if ( v5 == -1 )
      return v3;
    Function_2005748(0x5DDu);
    Function_2232e58(v2, v5);
    *(uint *)(v2 + 836) = 19;
    Function_2232dfc(v2);
  }
  if ( *(uint *)(v2 + 836) == 19 )
  {
    v6 = 1;
    if ( Function_222dd64(v5) )
    {
      *(uint *)(v2 + 836) = 68;
      Function_2234fcc(v2, -1, v5);
      Function_222dfd4(v5);
      Function_2232e58(v2, v5);
      *(uint *)(v2 + 840) = Function_222dd94(v5);
      v6 = 0;
    }
    else
    {
      v7 = Function_2234fcc(v2, -1, v5);
      Function_2038b84(v7);
    }
    Function_223500c(v2, v6);
  }
  Function_200dc9c(v2 + 796, 0);
  Function_201a8fc(v2 + 796);
  Function_2001384(*(uint *)(v2 + 344), 0, (ushort *)(v2 + 882 + 2 * *(ushort *)(v2 + 888)));
  Function_2013a3c(*(int **)(v2 + 340));
  return v3;
}

//----- (022315A4) --------------------------------------------------------
int __fastcall Function_22315a4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  uint v10;
  uint v11;
  int v12;
  int v13;

  v2 = a1;
  v3 = a2;
  v4 = Function_2235254(a1 + 904);
  v5 = Function_222e8d4(v2, 0);
  if ( !v5 )
    ErrorHandler();
  v13 = Function_222e8d4(v2, v4);
  if ( v13 )
  {
    v7 = Function_22354e8(v5);
    Function_22354f8(v2 + 904, v13, v7);
    v8 = v4 - 1;
    v9 = Function_2234fa8(v2, v4 - 1);
    v10 = Function_222dd20(v2, v9) << 16;
    v11 = v10 >> 16;
    *(ushort *)(v2 + 890) = HIWORD(v10);
    Function_2232dc0(v2, v8);
    switch ( v11 )
    {
      case 0xFu:
        v12 = 3;
        break;
      case 0x13u:
        v12 = 4;
        break;
      case 0x12u:
        v12 = 83;
        break;
      case 0x15u:
        v12 = 5;
        break;
      case 0x14u:
        v12 = 84;
        break;
      case 0x17u:
        Function_200c0b0(*(uint *)(v2 + 356), 1u, 0);
        v12 = 6;
        break;
      case 0x16u:
        v12 = 85;
        break;
      case 0x19u:
        Function_200c0b0(*(uint *)(v2 + 356), 1u, 1u);
        v12 = 6;
        break;
      case 0x18u:
        v12 = 85;
        break;
      case 0x1Bu:
        Function_200c0b0(*(uint *)(v2 + 356), 1u, 2u);
        v12 = 6;
        break;
      case 0x1Au:
        v12 = 85;
        break;
      default:
        if ( Function_222ddd4(v11) )
        {
          v12 = 2;
        }
        else if ( v11 == 8 )
        {
          v12 = 82;
        }
        else if ( Function_222de40(v11) )
        {
          v12 = 81;
        }
        else if ( v11 == 1 )
        {
          v12 = 86;
        }
        else
        {
          v12 = 7;
        }
        break;
    }
    Function_2232b58(v2, v12, 0);
    *(uint *)(v2 + 836) = 43;
    result = v3;
  }
  else
  {
    Function_2232dc0(v2, v4 - 1);
    Function_2232b58(v2, 16, 0);
    *(uint *)(v2 + 836) = 29;
    result = v3;
  }
  return result;
}

//----- (022316F0) --------------------------------------------------------
int __fastcall Function_22316f0(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  int (__fastcall *v17)(int, int, int);
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v2 = a1;
  v12 = a2;
  if ( Function_20383e8() )
  {
    Function_222f6ec(v2);
    result = v12;
  }
  else
  {
    v4 = Function_2235254(v2 + 904);
    v5 = Function_222e8d4(v2, v4);
    if ( Function_2230140(v2) )
    {
      Function_223556c(v2 + 904, v5);
      Function_2232dfc(v2);
      *(uint *)(v2 + 836) = 19;
      result = v12;
    }
    else if ( v5 )
    {
      v6 = Function_2234fa8(v2, v4 - 1);
      if ( *(ushort *)(v2 + 890) == Function_222dd20(v2, v6) )
      {
        if ( Function_201d724(*(uint *)(v2 + 384) & 0xFF) )
        {
          result = v12;
        }
        else
        {
          v14 = 2;
          v16 = 0;
          v17 = Function_222fed8;
          v18 = 0;
          v19 = 0;
          v20 = 131074;
          v21 = 268437504;
          v22 = 47;
          v23 = 0;
          v7 = Function_2235254(v2 + 904);
          v8 = Function_2234fa8(v2, v7 - 1);
          v9 = (ushort)Function_222dd20(v2, v8);
          v10 = *(uchar *)(v8 + 33);
          *(ushort *)(v2 + 892) = v10;
          v13 = (v10 + *(uchar *)(*(uint *)(v2 + 4) + 33)) & 0xFFFF;
          *(uint *)(v2 + 340) = Function_2013a04(2u, 0x36u);
          v11 = &dword_2238968;
          v15 = 0;
          do
          {
            if ( v15 )
            {
              Function_2013a4c(*(uint **)(v2 + 340), *(ushort ***)(v2 + 360), *v11, v11[1]);
            }
            else if ( !Function_222de68(v9) && v9 && v9 != 28 && v9 < 0x1D )
            {
              if ( v9 == 16 )
              {
                if ( v13 == 2 )
                {
                  Function_2013a4c(*(uint **)(v2 + 340), *(ushort ***)(v2 + 360), 0x24u, v11[1]);
                }
                else
                {
                  --HIWORD(v20);
                  LOWORD(v20) = v20 - 1;
                  --v14;
                }
              }
              else
              {
                Function_2013a4c(*(uint **)(v2 + 340), *(ushort ***)(v2 + 360), *v11, v11[1]);
              }
            }
            else
            {
              --HIWORD(v20);
              LOWORD(v20) = v20 - 1;
              --v14;
            }
            v11 += 2;
            ++v15;
          }
          while ( v15 < 2 );
          Function_201a7e8(*(uint **)(v2 + 348), v2 + 796, 2, 16, 2 * (3 - v14) + 11, 0xFu, 2 * v14, 13, 59);
          Function_200dc48(v2 + 796, 1, 473, 0xBu);
          v16 = *(uint *)(v2 + 340);
          v19 = v2 + 796;
          *(uint *)(v2 + 344) = Function_200112c(&v16, 0, 0, 0x36u);
          Function_201a9a4(v2 + 796);
          *(uint *)(v2 + 836) = 44;
          result = v12;
        }
      }
      else
      {
        Function_223556c(v2 + 904, v5);
        Function_2232dc0(v2, v4 - 1);
        Function_2232b58(v2, 16, 0);
        *(uint *)(v2 + 836) = 29;
        result = v12;
      }
    }
    else
    {
      Function_223556c(v2 + 904, 0);
      Function_2001384(*(uint *)(v2 + 344), 0, 0);
      Function_2232dc0(v2, v4 - 1);
      Function_2232b58(v2, 16, 0);
      *(uint *)(v2 + 836) = 29;
      result = v12;
    }
  }
  return result;
}

//----- (02231978) --------------------------------------------------------
int __fastcall Function_2231978(ushort *a1)
{
  int v1;
  uint v2;

  v1 = 0;
  do
  {
    v2 = *a1;
    if ( v2 == 495 )
      return 0;
    if ( v2 > 0x1EF )
      return 0;
    if ( a1[6] > 0x1D3u )
      return 0;
    ++v1;
    ++a1;
  }
  while ( v1 < 6 );
  return 1;
}

//----- (022319B8) --------------------------------------------------------
int __fastcall Function_22319b8(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;

  v1 = a1;
  v2 = LoadVariableAreaAdressItemList(*(uint *)(a1 + 352));
  if ( !Function_207d69c(v2, 4u) )
    return 1;
  v4 = LoadVariableAreaAdressItemList(*(uint *)(v1 + 352));
  if ( !Function_207d730(v4, 0x1C1u, 0x36u) )
    return 3;
  v5 = LoadVariableAreaAdress_10(*(uint *)(v1 + 352));
  if ( (uint)Function_202ac98(v5) < 0x64 )
    result = 0;
  else
    result = 2;
  return result;
}

//----- (02231A0C) --------------------------------------------------------
int *Function_2231a0c()
{
  int v0;
  ushort v1;
  int *result;
  int v3;

  v0 = ((int (__fastcall *)(uint))dword_21D2584[0])(0);
  if ( Function_2231a54(v0) )
  {
    v3 = Function_20041fc();
    result = Function_2004ad4(v3, 120);
  }
  else
  {
    if ( Function_2013948() )
      v1 = 1086;
    else
      v1 = 1085;
    Function_2004234(0);
    result = (int *)Function_2004550(0xBu, v1);
  }
  return result;
}

//----- (02231A54) --------------------------------------------------------
BOOL Function_2231a54()
{
  int v0;

  v0 = Function_20041fc();
  return v0 == 1085 || v0 == 1086;
}

//----- (02231A74) --------------------------------------------------------
uint __fastcall Function_2231a74(int a1)
{
  int v1;
  int *v2;

  v1 = LoadVariableAreaAdress_12(*(uint *)(a1 + 352));
  v2 = Function_202c244(0x36u, 29);
  return Function_202b758(v1, (int)v2, 4u);
}

//----- (02231A98) --------------------------------------------------------
int __fastcall Function_2231a98(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
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

  v2 = a1;
  v17 = a2;
  v3 = 0;
  v4 = Function_2001288(*(uint *)(a1 + 344));
  if ( Function_2230140(v2) )
    v4 = -2;
  v5 = Function_2235254(v2 + 904);
  v22 = Function_222e8d4(v2, v5);
  if ( Function_20383e8() )
  {
    Function_200dc9c(v2 + 796, 0);
    Function_201a8fc(v2 + 796);
    Function_2001384(*(uint *)(v2 + 344), 0, 0);
    Function_2013a3c(*(int **)(v2 + 340));
    if ( v22 )
      Function_223556c(v2 + 904, v22);
    Function_222f6ec(v2);
    result = v17;
  }
  else
  {
    if ( v4 == -2 )
    {
      Function_2005748(0x5DDu);
      *(uint *)(v2 + 836) = 19;
    }
    else if ( v4 == -1 )
    {
      if ( v22 )
      {
        v7 = Function_2234fa8(v2, v5 - 1);
        v8 = v7;
        v9 = Function_222dd20(v2, v7);
        v10 = *(uchar *)(v8 + 33);
        if ( *(ushort *)(v2 + 890) == v9 && (Function_222dd64(v9) || *(ushort *)(v2 + 892) == v10) )
          return v17;
        Function_2232dc0(v2, v5 - 1);
        Function_2232b58(v2, 16, 0);
        *(uint *)(v2 + 836) = 29;
        v3 = 1;
      }
      else
      {
        Function_2001384(*(uint *)(v2 + 344), 0, 0);
        Function_2232dc0(v2, v5 - 1);
        Function_2232b58(v2, 16, 0);
        *(uint *)(v2 + 836) = 29;
        v3 = 1;
      }
    }
    else
    {
      Function_2005748(0x5DDu);
      if ( v4 == 1 )
      {
        *(uint *)(v2 + 836) = 19;
        *(ushort *)(v2 + 894) = v5;
        if ( v5 )
        {
          v21 = Function_222df88(v2);
          v20 = Function_22319b8(v2);
          v11 = Function_2234fa8(v2, v5 - 1);
          v19 = v11;
          v12 = Function_222dd20(v2, v11);
          v13 = v12;
          v18 = *(uchar *)(v19 + 33);
          if ( *(ushort *)(v2 + 890) == v12
            && (Function_222dd64(v12) || *(ushort *)(v2 + 892) == v18) )
          {
            if ( Function_2231978((ushort *)v19) )
            {
              if ( Function_222deb0(v13) && v21 < 2 )
              {
                if ( v13 == 15 )
                  Function_2232b58(v2, 89, 0);
                else
                  Function_2232b58(v2, 103, 0);
                *(uint *)(v2 + 836) = 29;
                v3 = 1;
              }
              else if ( v13 == 19 && v20 )
              {
                if ( v20 == 1 )
                {
                  Function_2232b58(v2, 104, 0);
                }
                else if ( v20 == 3 )
                {
                  Function_2232b58(v2, 106, 0);
                }
                else
                {
                  Function_2232b58(v2, 105, 0);
                }
                *(uint *)(v2 + 836) = 29;
                v3 = 1;
              }
              else if ( Function_222dd64(v13) || v18 == *(uchar *)(*(uint *)(v2 + 4) + 33) )
              {
                v15 = Function_222ded4(v13);
                if ( v15 != 29 )
                {
                  if ( Function_2234fc4(v5 - 1) == 6 )
                  {
                    if ( Function_2234fcc(v2, v5 - 1, v15) )
                    {
                      *(uint *)(v2 + 828) = 1800;
                      Function_222dfd4(v15);
                      Function_2232e58(v2, v15);
                      Function_2232dc0(v2, v5 - 1);
                      Function_2232b58(v2, 17, 0);
                      if ( *(uint *)(v2 + 392) )
                        ErrorHandler();
                      *(uint *)(v2 + 392) = Function_200e7fc((int *)(v2 + 716), 482);
                      if ( v15 == 1 )
                      {
                        *(uint *)(v2 + 828) = 1800;
                        v16 = 21;
                      }
                      else
                      {
                        v16 = 45;
                      }
                      *(uint *)(v2 + 836) = v16;
                      v3 = 1;
                    }
                    else
                    {
                      Function_2232dc0(v2, v5 - 1);
                      Function_2232b58(v2, 16, 0);
                      *(uint *)(v2 + 836) = 29;
                      v3 = 1;
                    }
                  }
                  else
                  {
                    Function_2232dc0(v2, v5 - 1);
                    Function_2232b58(v2, 16, 0);
                    *(uint *)(v2 + 836) = 29;
                    v3 = 1;
                  }
                }
              }
              else
              {
                if ( v18 )
                  Function_2232b58(v2, 134, 0);
                else
                  Function_2232b58(v2, 135, 0);
                v14 = Function_222ded4(v13);
                Function_2232e58(v2, v14);
                *(uint *)(v2 + 836) = 63;
                v3 = 1;
              }
            }
            else
            {
              Function_2232dc0(v2, v5 - 1);
              Function_2232b58(v2, 16, 0);
              *(uint *)(v2 + 836) = 29;
              v3 = 1;
            }
          }
          else
          {
            Function_2232dc0(v2, v5 - 1);
            Function_2232b58(v2, 16, 0);
            *(uint *)(v2 + 836) = 29;
            v3 = 1;
          }
        }
      }
      else if ( v4 == 2 )
      {
        *(uint *)(v2 + 836) = 54;
      }
    }
    if ( !v3 )
      Function_2232dfc(v2);
    Function_200dc9c(v2 + 796, 0);
    Function_201a8fc(v2 + 796);
    Function_2001384(*(uint *)(v2 + 344), 0, 0);
    Function_2013a3c(*(int **)(v2 + 340));
    if ( v22 )
      Function_223556c(v2 + 904, v22);
    result = v17;
  }
  return result;
}

//----- (02231E64) --------------------------------------------------------
int __fastcall Function_2231e64(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  --v2[207];
  if ( a1[207] >= 0 )
  {
    if ( Function_20380e4() == 3 )
    {
      v4 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v2, v4);
      Function_2232b58(v2, 18, 0);
      v2[209] = 27;
    }
    else if ( Function_20380e4() == 5 )
    {
      v5 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v2, v5);
      Function_2232b58(v2, 15, 0);
      v2[209] = 27;
    }
    else if ( Function_20380e4() == 4 || Function_2038284() )
    {
      v6 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v2, v6);
      Function_2232b58(v2, 18, 0);
      v2[209] = 27;
    }
    else if ( Function_20383e8() )
    {
      Function_222f6ec(v2);
    }
    else if ( Function_20380e4() == 1 )
    {
      v7 = Function_222dd20((int)v2, v2[1]);
      if ( Function_222dd64(v7) )
      {
        if ( Function_2035d78(0) == 1 )
        {
          Function_2232dfc(v2);
          Function_20329e0(v2[88], 0);
          Function_20388f4(0, 1);
          Function_222dfd4(v7);
          v2[210] = Function_222dd94(v7);
          Function_203632c(0);
          Function_200f174(0, 0, 0, 0, 6, 1, 54);
          v2[224] = 0;
          v3 = 2;
        }
        else if ( Function_20362c8() == 1 )
        {
          v8 = ((int (*)(void))dword_21D2388[0])();
          Function_2232dc0(v2, v8);
          Function_2232b58(v2, 18, 0);
          v2[209] = 27;
        }
      }
      else
      {
        v2[209] = 49;
        Function_2232dfc(v2);
        Function_20329e0(v2[88], 0);
        v2[214] = 30;
      }
    }
  }
  else
  {
    a1[209] = 70;
  }
  return v3;
}

//----- (02231FE0) --------------------------------------------------------
int __fastcall Function_2231fe0(int a1, int a2)
{
  return a2;
}

//----- (02231FE4) --------------------------------------------------------
int __fastcall Function_2231fe4(int a1, int a2)
{
  return a2;
}

//----- (02231FE8) --------------------------------------------------------
int __fastcall Function_2231fe8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2232f30(a1);
  Function_2232e58(v2, 16);
  Function_2038378();
  *(uint *)(v2 + 876) = -1;
  *(uint *)(v2 + 836) = 19;
  Function_223503c(v2);
  Function_2232dfc(v2);
  return v3;
}

//----- (02232020) --------------------------------------------------------
int __fastcall Function_2232020(int a1, int a2)
{
  return a2;
}

//----- (02232024) --------------------------------------------------------
int __fastcall Function_2232024(int a1, int a2)
{
  return a2;
}

//----- (02232028) --------------------------------------------------------
int __fastcall Function_2232028(int *a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;

  v2 = a1;
  v3 = a2;
  v4 = ((int (*)(void))dword_21D2388[0])();
  v5 = Function_2234fa8(v2, v4);
  v6 = Function_222dd20((int)v2, v2[1]);
  v7 = Function_222dd20((int)v2, v5);
  v8 = *(uchar *)(v2[1] + 33);
  if ( v6 == 12 && v7 == 5 )
  {
    v2[209] = 49;
LABEL_42:
    v11 = ((int (*)(void))dword_21D2388[0])();
    Function_2232dc0(v2, v11);
    Function_2232b58(v2, 11, 0);
    Function_20329e0(v2[88], 0);
    v2[209] = 49;
    v2[214] = 30;
    return v3;
  }
  if ( v6 == 13 && v7 == 6 )
  {
    v2[209] = 49;
    goto LABEL_42;
  }
  if ( v6 == 14 && v7 == 7 )
  {
    v2[209] = 49;
    goto LABEL_42;
  }
  if ( v6 == 9 && v7 == 2 )
  {
    v2[209] = 49;
    goto LABEL_42;
  }
  if ( v6 == 10 && v7 == 3 )
  {
    v2[209] = 49;
    goto LABEL_42;
  }
  if ( v6 == 11 && v7 == 4 )
  {
    v2[209] = 49;
    goto LABEL_42;
  }
  if ( v6 == 15 && v7 == 8 )
  {
    v2[209] = 49;
    goto LABEL_42;
  }
  if ( v6 == 19 && v7 == 18 )
  {
    v2[209] = 49;
    goto LABEL_42;
  }
  if ( v6 == 21 && v7 == 20 )
  {
    v2[209] = 49;
    goto LABEL_42;
  }
  if ( v6 == 23 && v7 == 22 )
  {
    v2[209] = 49;
    goto LABEL_42;
  }
  if ( v6 == 25 && v7 == 24 )
  {
    v2[209] = 49;
    goto LABEL_42;
  }
  if ( v6 == 27 && v7 == 26 )
  {
    v2[209] = 49;
    goto LABEL_42;
  }
  if ( v6 != 16 || v7 != 1 || v8 <= 0 )
  {
    v10 = ((int (__fastcall *)(int, int))dword_21D2388[0])(v7, v8);
    Function_2232dc0(v2, v10);
    Function_2232b58(v2, 18, 0);
    v2[209] = 29;
    Function_2232e58(v2, 16);
    Function_2038378();
    result = v3;
  }
  else
  {
    v2[209] = 22;
    result = v3;
  }
  return result;
}

//----- (022321A8) --------------------------------------------------------
int __fastcall Function_22321a8(uint *a1)
{
  uint *v1;

  v1 = a1;
  if ( Function_20380e4() < 3 )
  {
    if ( !Function_20383e8() )
      return 0;
    Function_222f6ec(v1);
  }
  else
  {
    Function_2232dc0(v1, v1[219]);
    Function_2232b58(v1, 18, 0);
    v1[209] = 27;
  }
  v1[224] = 0;
  return 1;
}

//----- (022321F4) --------------------------------------------------------
int __fastcall Function_22321f4(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( Function_20380e4() < 4 && !Function_2038284() && Function_2035d78(0) )
  {
    if ( !Function_22321a8(v2) )
    {
      v4 = v2[214];
      if ( v4 )
      {
        v2[214] = v4 - 1;
        if ( !v2[214] )
          Function_20364f0(13);
      }
      else if ( Function_2036540(13) )
      {
        Function_20365f4();
        Function_20364f0(14);
        v2[224] = 0;
        v2[209] = 50;
      }
    }
  }
  else
  {
    if ( v2[224] )
    {
      Function_2232b58(v2, 101, 0);
    }
    else
    {
      Function_2232dc0(v2, v2[219]);
      Function_2232b58(v2, 18, 0);
    }
    v2[224] = 0;
    v2[209] = 27;
  }
  return v3;
}

//----- (0223229C) --------------------------------------------------------
int __fastcall Function_223229c(uint *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;

  v8 = a4;
  v4 = (int)a1;
  v5 = a2;
  if ( !Function_22321a8(a1) )
  {
    if ( Function_2036540(14) )
    {
      LOWORD(v8) = Function_222dd20(v4, *(uint *)(v4 + 4));
      v6 = Function_203608c();
      if ( Function_2036614(v6, (int)&v8) )
        *(uint *)(v4 + 836) = 51;
    }
  }
  return v5;
}

//----- (022322DC) --------------------------------------------------------
int __fastcall Function_22322dc(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  ushort *v5;
  uint v6;
  uint v7;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  v3 = a2;
  v4 = Function_203608c() == 0;
  v5 = (ushort *)Function_203664c(v4);
  if ( !Function_22321a8(v2) && v5 )
  {
    v6 = Function_222dd20((int)v2, v2[1]) << 16;
    v7 = v6 >> 16;
    v8 = (ushort)Function_222ded4(SBYTE2(v6));
    v9 = *v5;
    if ( v9 != v8 && v9 != v7 )
    {
      v10 = ((int (*)(void))dword_21D2388[0])();
      Function_2232dc0(v2, v10);
      Function_2232b58(v2, 16, 0);
      v2[209] = 27;
    }
    else
    {
      Function_20364f0(15);
      v2[209] = 52;
    }
  }
  return v3;
}

//----- (02232358) --------------------------------------------------------
int __fastcall Function_2232358(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_22321a8(a1) && Function_2036540(15) )
  {
    Function_2032ac0();
    Function_20388f4(1, 1);
    Function_20364f0(18);
    v2[209] = 53;
  }
  return v3;
}

//----- (02232390) --------------------------------------------------------
BOOL __fastcall Function_2232390(int a1)
{
  int v1;
  BOOL result;

  v1 = a1;
  if ( Function_201d724(*(uint *)(a1 + 384) & 0xFF) )
    result = Function_201a7cc(v1 + 716) == 0;
  else
    result = 1;
  return result;
}

//----- (022323C0) --------------------------------------------------------
int __fastcall Function_22323c0(uint *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v10;

  v2 = (int)a1;
  v3 = a2;
  if ( !Function_22321a8(a1) && Function_2036540(18) && Function_2232390(v2) == 1 )
  {
    Function_20391dc(*(uint *)(v2 + 352), (int *)&v10, 0x36u);
    v4 = Function_2232dfc(v2);
    v5 = ((int (__fastcall *)(int))dword_21D2388[0])(v4);
    v6 = Function_2234fa8(v2, v5);
    v7 = Function_222dd20(v2, v6);
    v8 = v7;
    if ( v7 != 15 && v7 != 8 )
    {
      if ( (uint)(v7 - 18) > 1 )
      {
        if ( (uint)(v7 - 20) > 1 )
        {
          if ( (uint)(v7 - 22) > 1 )
          {
            if ( (uint)(v7 - 24) > 1 )
            {
              if ( (uint)(v7 - 26) > 1 )
              {
                if ( v7 != 9 && v7 != 2 )
                {
                  if ( v7 != 10 && v7 != 3 )
                  {
                    if ( v7 != 11 && v7 != 4 )
                    {
                      if ( v7 != 12 && v7 != 5 )
                      {
                        if ( v7 != 13 && v7 != 6 )
                        {
                          if ( v7 == 14 || v7 == 7 )
                          {
                            v8 = 7;
                            *(uint *)(v2 + 840) = 6;
                          }
                        }
                        else
                        {
                          v8 = 6;
                          *(uint *)(v2 + 840) = 5;
                        }
                      }
                      else
                      {
                        v8 = 5;
                        *(uint *)(v2 + 840) = 4;
                      }
                    }
                    else
                    {
                      v8 = 4;
                      *(uint *)(v2 + 840) = 3;
                    }
                  }
                  else
                  {
                    v8 = 3;
                    *(uint *)(v2 + 840) = 2;
                  }
                }
                else
                {
                  v8 = 2;
                  *(uint *)(v2 + 840) = 1;
                }
              }
              else
              {
                v8 = 26;
                *(uint *)(v2 + 840) = 15;
              }
            }
            else
            {
              v8 = 24;
              *(uint *)(v2 + 840) = 14;
            }
          }
          else
          {
            v8 = 22;
            *(uint *)(v2 + 840) = 13;
          }
        }
        else
        {
          v8 = 20;
          *(uint *)(v2 + 840) = 12;
        }
      }
      else
      {
        v8 = 18;
        *(uint *)(v2 + 840) = 11;
      }
    }
    else
    {
      v8 = 8;
      *(uint *)(v2 + 840) = 7;
    }
    ((void (*)(void))dword_21D2388[0])();
    Function_2231a74(v2);
    Function_2232e58(v2, v8);
    Function_200f174(0, 0, 0, 0, 6, 1, 54);
    v3 = 2;
  }
  return v3;
}

//----- (02232530) --------------------------------------------------------
int __fastcall Function_2232530(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2019ebc(*(uint **)(a1 + 348), 3u);
  *(uchar *)(v2 + 864) = 0;
  *(uint *)(v2 + 836) = Function_222ebb8();
  return v3;
}

//----- (02232558) --------------------------------------------------------
int __fastcall Function_2232558(int a1, int a2)
{
  *(uint *)(a1 + 836) = 55;
  return a2;
}

//----- (02232564) --------------------------------------------------------
int __fastcall Function_2232564(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(*(uint *)(a1 + 384) & 0xFF) )
    return v3;
  if ( Function_223012c() )
    *(uint *)(v2 + 836) = 56;
  if ( dword_21BF6C4 & 3 )
    *(uint *)(v2 + 836) = 56;
  return v3;
}

//----- (022325AC) --------------------------------------------------------
int __fastcall Function_22325ac(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2232dfc(a1);
  *(uint *)(v2 + 836) = 19;
  return v3;
}

//----- (022325C4) --------------------------------------------------------
int __fastcall Function_22325c4(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_201d724(*(uint *)(a1 + 384) & 0xFF) )
  {
    *(uint *)(v2 + 388) = Function_2002100(
                              *(uint **)(v2 + 348),
                              (uchar *)dword_223894C,
                              473,
                              11,
                              0x36u);
    *(uint *)(v2 + 836) = 58;
  }
  return v3;
}

//----- (02232608) --------------------------------------------------------
int __fastcall Function_2232608(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_2002114(a1[97], 0x36u);
  if ( Function_201d724(v2[96] & 0xFF) )
    return v3;
  if ( Function_2230140((int)v2) )
  {
    if ( v4 == -1 )
      Function_2002154(v2[97], 0x36u);
    v4 = -2;
  }
  if ( v4 == -1 )
    return v3;
  if ( v4 )
  {
    Function_2232dfc(v2);
    v2[209] = 19;
    Function_223503c(v2);
  }
  else
  {
    Function_2232b58(v2, 26, 1);
    v2[209] = 59;
    v2[214] = 1;
  }
  return v3;
}

//----- (02232698) --------------------------------------------------------
int __fastcall Function_2232698(int *a1, int a2)
{
  int *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(a1[96] & 0xFF) )
    return v3;
  if ( v2[214] == 1 )
  {
    v2[214] = 0;
    Function_2038350();
  }
  if ( !Function_2036780() )
  {
    Function_202b0f8(*v2);
    Function_2232b58(v2, 27, 1);
    v2[209] = 60;
    v2[214] = 30;
  }
  return v3;
}

//----- (022326F0) --------------------------------------------------------
int __fastcall Function_22326f0(uint *a1, int a2)
{
  uint *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(a1[96] & 0xFF) )
    return v3;
  if ( !--v2[214] )
  {
    v2[210] = 8;
    v2[209] = 34;
    Function_2232dfc(v2);
  }
  return v3;
}

//----- (02232734) --------------------------------------------------------
int __fastcall Function_2232734(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !Function_2036540(16) )
    return v3;
  Function_20388f4(0, 1);
  if ( !Function_201d724(*(uint *)(v2 + 384) & 0xFF) )
  {
    *(uint *)(v2 + 388) = Function_2002100(
                              *(uint **)(v2 + 348),
                              (uchar *)dword_223894C,
                              473,
                              11,
                              0x36u);
    *(uint *)(v2 + 836) = 62;
  }
  return v3;
}

//----- (0223278C) --------------------------------------------------------
int __fastcall Function_223278c(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(a1[96] & 0xFF) )
    return v3;
  if ( Function_2038294() || Function_2038284() || Function_20380e4() >= 3 )
  {
    Function_2002154(v2[97], 0x36u);
    Function_2232b58(v2, 101, 0);
    v2[209] = 28;
  }
  else if ( Function_20383e8() )
  {
    Function_2002154(v2[97], 0x36u);
    Function_222f6ec(v2);
  }
  else
  {
    v5 = Function_2002114(v2[97], 0x36u);
    if ( v5 == -1 )
      return v3;
    if ( v5 )
    {
      Function_2232dfc(v2);
      v6 = Function_2032a70();
      Function_20383d4((int)v6, v7, v8, v9);
      v2[214] = 20;
      v2[209] = 65;
    }
    else
    {
      Function_2232b58(v2, 138, 0);
      if ( v2[98] )
        ErrorHandler();
      v2[98] = Function_200e7fc(v2 + 179, 482);
      v2[224] = 1;
      v2[209] = 49;
      v2[214] = 30;
    }
    v10 = Function_20388e8();
    v2[1] = v10;
    *(uchar *)(v10 + 33) = *(uchar *)(v10 + 34);
  }
  return v3;
}

//----- (0223288C) --------------------------------------------------------
int __fastcall Function_223288c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_2235254(a1 + 904);
  if ( Function_222e8d4(v2, v4) )
  {
    v6 = Function_2234fa8(v2, v4 - 1);
    if ( *(ushort *)(v2 + 890) == Function_222dd20(v2, v6)
      && *(ushort *)(v2 + 892) == *(uchar *)(v6 + 33) )
    {
      if ( !Function_201d724(*(uint *)(v2 + 384) & 0xFF) )
      {
        *(uint *)(v2 + 388) = Function_2002100(
                                  *(uint **)(v2 + 348),
                                  (uchar *)dword_223894C,
                                  473,
                                  11,
                                  0x36u);
        *(uint *)(v2 + 836) = 64;
      }
      result = v3;
    }
    else
    {
      Function_2232dc0(v2, v4 - 1);
      Function_2232b58(v2, 16, 0);
      *(uint *)(v2 + 836) = 29;
      result = v3;
    }
  }
  else
  {
    Function_2232dc0(v2, v4 - 1);
    Function_2232b58(v2, 16, 0);
    *(uint *)(v2 + 836) = 29;
    result = v3;
  }
  return result;
}

//----- (0223294C) --------------------------------------------------------
int __fastcall Function_223294c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = a1;
  v3 = a2;
  v4 = Function_2235254(a1 + 904);
  if ( Function_222e8d4(v2, v4) )
  {
    v6 = Function_2234fa8(v2, v4 - 1);
    if ( *(ushort *)(v2 + 890) == Function_222dd20(v2, v6)
      && *(ushort *)(v2 + 892) == *(uchar *)(v6 + 33) )
    {
      if ( Function_20380e4() < 3 )
      {
        if ( Function_20383e8() )
        {
          Function_2002154(*(uint *)(v2 + 388), 0x36u);
          Function_222f6ec(v2);
          result = v3;
        }
        else
        {
          v7 = Function_2002114(*(uint *)(v2 + 388), 0x36u);
          if ( v7 == -1 )
          {
            result = v3;
          }
          else if ( v7
                 || (v8 = Function_222ded4(*(ushort *)(v2 + 890)), v8 == 29)
                 || Function_2234fc4(*(ushort *)(v2 + 894) - 1) != 6
                 || (Function_2232edc(v2), !Function_2234fcc(v2, *(ushort *)(v2 + 894) - 1, v8)) )
          {
            Function_2232dfc(v2);
            Function_2232e58(v2, 16);
            Function_2232f30(v2);
            Function_222fd70(v2, v9, v10, v11);
            *(uint *)(v2 + 836) = 19;
            result = v3;
          }
          else
          {
            *(uint *)(v2 + 828) = 1800;
            Function_222dfd4(v8);
            Function_203632c(0);
            Function_2232e58(v2, v8);
            Function_2232dc0(v2, *(ushort *)(v2 + 894) - 1);
            Function_2232b58(v2, 17, 0);
            if ( *(uint *)(v2 + 392) )
              ErrorHandler();
            *(uint *)(v2 + 392) = Function_200e7fc((int *)(v2 + 716), 482);
            if ( v8 == 1 )
            {
              *(uint *)(v2 + 828) = 1800;
              *(uint *)(v2 + 836) = 21;
            }
            else
            {
              *(uint *)(v2 + 836) = 45;
            }
            result = v3;
          }
        }
      }
      else
      {
        Function_2002154(*(uint *)(v2 + 388), 0x36u);
        Function_2232b58(v2, 18, 0);
        Function_2038378();
        *(uint *)(v2 + 836) = 29;
        result = v3;
      }
    }
    else
    {
      Function_2002154(*(uint *)(v2 + 388), 0x36u);
      Function_2232dc0(v2, v4 - 1);
      Function_2232b58(v2, 16, 0);
      *(uint *)(v2 + 836) = 29;
      result = v3;
    }
  }
  else
  {
    Function_2002154(*(uint *)(v2 + 388), 0x36u);
    Function_2232dc0(v2, v4 - 1);
    Function_2232b58(v2, 16, 0);
    *(uint *)(v2 + 836) = 29;
    result = v3;
  }
  return result;
}

//----- (02232B28) --------------------------------------------------------
int __fastcall Function_2232b28(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( !Function_2036780() )
  {
    Function_200f174(0, 0, 0, 0, 6, 1, 54);
    v2 = 2;
  }
  return v2;
}

//----- (02232B58) --------------------------------------------------------
int __fastcall Function_2232b58(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (ushort *)LoadPlayerDataAdress(*(uint *)(a1 + 352));
  Function_2027ac0(v6);
  Function_2232f50(v3);
  if ( Function_201a7cc(v3 + 764) )
  {
    Function_200e084(v3 + 764, 0);
    Function_201a8fc(v3 + 764);
  }
  if ( Function_201a7cc(v3 + 716) )
  {
    Function_200e084(v3 + 716, 0);
    Function_201a8fc(v3 + 716);
  }
  v7 = *(uint *)(v3 + 384);
  if ( v7 != 8 && Function_201d724((uchar)v7) )
  {
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v3 + 384) & 0xFF);
    *(uint *)(v3 + 384) = 8;
  }
  Function_201a7e8(*(uint **)(v3 + 348), v3 + 716, 2, 2, 19, 0x1Bu, 4u, 12, 301);
  if ( v5 )
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v3 + 364), v4, *(ushort **)(v3 + 368));
  else
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v3 + 360), v4, *(ushort **)(v3 + 368));
  Function_200c388(*(uint **)(v3 + 356), *(uint *)(v3 + 372), *(uint *)(v3 + 368));
  Function_201ada4_ClearTextBox(v3 + 716, 15);
  Function_200e060(v3 + 716, 1, 482, 0xAu);
  Function_2002ac8(1);
  Function_2002ae4(0);
  v8 = *(uint *)(v3 + 372);
  *(uint *)(v3 + 384) = Function_201d738_CallInitTextInterpreter(v3 + 716, 1);
  return Function_201a9a4(v3 + 716);
}

//----- (02232CA8) --------------------------------------------------------
int __fastcall Function_2232ca8(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = a2;
  Function_2232f50(a1);
  if ( Function_201a7cc(v2 + 764) )
  {
    Function_200e084(v2 + 764, 0);
    Function_201a8fc(v2 + 764);
  }
  if ( Function_201a7cc(v2 + 716) )
  {
    Function_200e084(v2 + 716, 0);
    Function_201a8fc(v2 + 716);
  }
  v4 = *(uint *)(v2 + 384);
  if ( v4 != 8 && Function_201d724((uchar)v4) )
  {
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v2 + 384) & 0xFF);
    *(uint *)(v2 + 384) = 8;
  }
  Function_201a7e8(*(uint **)(v2 + 348), v2 + 764, 2, 4, 4, 0x17u, 0x10u, 12, 105);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 364), v3, *(ushort **)(v2 + 368));
  Function_200c388(*(uint **)(v2 + 356), *(uint *)(v2 + 372), *(uint *)(v2 + 368));
  Function_201ada4_ClearTextBox(v2 + 764, 15);
  Function_200dc48(v2 + 764, 1, 473, 0xBu);
  v5 = *(uint *)(v2 + 372);
  *(uint *)(v2 + 384) = Function_201d738_CallInitTextInterpreter(v2 + 764, 1);
  return Function_201a9a4(v2 + 764);
}

//----- (02232DC0) --------------------------------------------------------
uint __fastcall Function_2232dc0(int *a1, int a2)
{
  int *v2;
  int v3;
  uint result;
  int *v5;
  ushort *v6;

  v2 = a1;
  v3 = a2;
  result = -1;
  if ( a2 != -1 )
  {
    v5 = AllocTrainerData(0x36u);
    v6 = (ushort *)Function_202aef0(*v2, v3);
    Function_2025ec0(v5, v6);
    Function_200b498(v2[89], 0);
    result = free((int)v5);
  }
  return result;
}

//----- (02232DFC) --------------------------------------------------------
uint __fastcall Function_2232dfc(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  Function_2232f50(a1);
  v2 = *(uint *)(v1 + 384);
  if ( v2 != 8 && Function_201d724((uchar)v2) )
  {
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v1 + 384) & 0xFF);
    *(uint *)(v1 + 384) = 8;
  }
  result = Function_201a7cc(v1 + 716);
  if ( result )
  {
    Function_200e084(v1 + 716, 0);
    result = Function_201a8fc(v1 + 716);
  }
  return result;
}

//----- (02232E58) --------------------------------------------------------
int __fastcall Function_2232e58(int result, int a2)
{
  int v2;

  v2 = result;
  if ( *(uint *)(result + 4) )
  {
    Function_2232e70(result, a2);
    result = ((int (__fastcall *)(uint, int))byte_21D222C)(*(uint *)(v2 + 4), 36);
  }
  return result;
}

//----- (02232E70) --------------------------------------------------------
int __fastcall Function_2232e70(int result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = result;
  v3 = a2;
  v4 = *(uint *)(result + 4);
  if ( v4 )
  {
    if ( Function_222dd20(result, v4) != v3 )
    {
      *(uchar *)(*(uint *)(v2 + 4) + 27) = v3;
      if ( !Function_222de40(v3) && v3 != 8 && v3 != 20 && v3 != 22 && v3 != 24 && v3 != 26 && v3 != 18 )
      {
        if ( v3 == 1 )
        {
          Function_200564c(0, 30);
        }
        else if ( v3 == 16 )
        {
          ((void (__fastcall *)(uint))dword_21D2584[0])(0);
          if ( Function_2231a54() == 1 )
            Function_200560c(120, 30, 1);
        }
      }
    }
    result = Function_222fd70(v2, v5, v6, v7);
  }
  return result;
}

//----- (02232EDC) --------------------------------------------------------
int __fastcall Function_2232edc(int a1)
{
  int v1;

  v1 = a1;
  *(uchar *)(*(uint *)(a1 + 4) + 33) = 1 - *(uchar *)(*(uint *)(a1 + 4) + 33);
  ((void (__fastcall *)(uint, int))byte_21D222C)(*(uint *)(a1 + 4), 36);
  return *(uchar *)(*(uint *)(v1 + 4) + 33);
}

//----- (02232F00) --------------------------------------------------------
int __fastcall Function_2232f00(int a1)
{
  int v1;

  v1 = a1;
  *(uchar *)(*(uint *)(a1 + 4) + 34) = 1 - *(uchar *)(*(uint *)(a1 + 4) + 34);
  *(uchar *)(*(uint *)(a1 + 4) + 33) = *(uchar *)(*(uint *)(a1 + 4) + 34);
  ((void (__fastcall *)(uint, int))byte_21D222C)(*(uint *)(a1 + 4), 36);
  return *(uchar *)(*(uint *)(v1 + 4) + 34);
}

//----- (02232F30) --------------------------------------------------------
int __fastcall Function_2232f30(int a1)
{
  int v1;

  v1 = a1;
  *(uchar *)(*(uint *)(a1 + 4) + 33) = *(uchar *)(*(uint *)(a1 + 4) + 34);
  ((void (__fastcall *)(uint, int))byte_21D222C)(*(uint *)(a1 + 4), 36);
  return *(uchar *)(*(uint *)(v1 + 4) + 34);
}

//----- (02232F50) --------------------------------------------------------
int __fastcall Function_2232f50(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 392);
  if ( result )
  {
    Function_200ebc8(result);
    *(uint *)(v1 + 392) = 0;
    result = Function_201a7cc(v1 + 716);
    if ( result )
    {
      Function_200e084(v1 + 716, 0);
      result = Function_201a8fc(v1 + 716);
    }
  }
  return result;
}

//----- (02232F90) --------------------------------------------------------
int __fastcall Function_2232f90(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  Function_223324c();
  Function_2235370(v2 + 904, v4);
  return Function_22336a4(v2, v3);
}

//----- (02232FB0) --------------------------------------------------------
int __fastcall Function_2232fb0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  result = Function_2233240();
  if ( v4 == result )
    result = Function_2232f90(v3, v5);
  return result;
}

//----- (02232FCC) --------------------------------------------------------
BOOL __fastcall Function_2232fcc(int a1)
{
  return *(uint *)(a1 + 2916) != 0;
}

//----- (02232FE0) --------------------------------------------------------
int __fastcall Function_2232fe0(uint *a1, int a2, uint a3)
{
  uint *v3;
  uint v4;
  int v5;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Call_FillMemWithValue(a1 + 710, 0, 0x248u);
  Function_201ff74(1u, 1);
  Function_201ff74(2u, 1);
  Function_201ff74(4u, 1);
  Function_201ff74(8u, 0);
  v3[729] = Function_2023fcc((int)dword_2238AB0, 8u, (int)Function_22332c4, (int)v3, v4);
  v3[710] = Function_200b358(v4);
  Function_22332fc(v3, v5, v4);
  v3[740] = 1;
  Function_22336d4(v3);
  return Function_223370c(v3);
}

//----- (02233068) --------------------------------------------------------
uint __fastcall Function_2233068(int a1)
{
  int v1;
  uint result;

  v1 = a1;
  result = Function_2232fcc(a1);
  if ( result )
  {
    Function_2233570(v1);
    Function_2024034(*(uint *)(v1 + 2916));
    *(uint *)(v1 + 2916) = 0;
    Function_200b3f0(*(uint **)(v1 + 2840), 0);
    *(uint *)(v1 + 2840) = 0;
    Function_201ff74(1u, 1);
    Function_201ff74(2u, 0);
    Function_201ff74(4u, 0);
    result = Function_201ff74(8u, 0);
  }
  return result;
}

//----- (022330C0) --------------------------------------------------------
int __fastcall Function_22330c0(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  uint v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_2235270(a1 + 904);
  v5 = Function_22352cc(v2 + 904);
  if ( v5 >= 3 && v5 <= 6 )
    v4 = v5;
  if ( v4 >= 3 && v4 <= 6 && *(uchar *)(v2 + 2952) != v4 - 3 )
  {
    *(uchar *)(v2 + 2952) = v4 - 3;
    Function_2005748(0x5E1u);
    Function_22336d4(v2);
    *(uchar *)(v2 + 2957) = 1;
    *(uint *)(v2 + 2960) = 1;
  }
  if ( *(uchar *)(v2 + 2955) == 1 )
  {
    *(uchar *)(v2 + 2955) = 2;
    *(uchar *)(v2 + 2956) = 0;
    Function_2233874(v2, v3);
    Function_2234d6c(v2);
  }
  if ( !*(uchar *)(v2 + 2955) )
  {
    Function_202404c(*(int **)(v2 + 2916));
    Function_2234a10(v2);
    if ( *(uchar *)(v2 + 2957) == 1 )
    {
      Function_223370c(v2);
      *(uchar *)(v2 + 2957) = 0;
    }
  }
  if ( ((*(uchar *)(v2 + 2955) + 254) & 0xFFu) <= 1 )
  {
    v6 = Function_2234dd8(v2);
    if ( Function_2233208(v2, v6) == 1 )
    {
      *(uchar *)(v2 + 2959) = *(uchar *)(v2 + 2953);
      *(uchar *)(v2 + 2953) = 0;
      *(uchar *)(v2 + 2954) = 0;
      *(uchar *)(v2 + 2957) = 1;
      *(uint *)(v2 + 2960) = 1;
      *(uchar *)(v2 + 2955) = 0;
      Function_2234da0(v2);
      Function_2005748(0x5DDu);
    }
    else if ( v6 )
    {
      Function_2005748(0x5DDu);
      Function_223327c(v2, v6);
      Function_2233874(v2, v3);
    }
  }
  return *(uchar *)(v2 + 2953);
}

//----- (022331E0) --------------------------------------------------------
int __fastcall Function_22331e0(int result)
{
  int v1;

  v1 = result;
  if ( !*(uchar *)(result + 2955) && *(uchar *)(result + 2957) == 1 )
  {
    Function_223370c(result);
    result = 2957;
    *(uchar *)(v1 + 2957) = 0;
  }
  return result;
}

//----- (02233208) --------------------------------------------------------
int __fastcall Function_2233208(int a1, int a2)
{
  if ( *(uchar *)(a1 + 2955) == 3 )
    return 0;
  if ( dword_21BF6C0 & 0xF0 || dword_21BF6C4 & 0x403 || a2 == 2 )
    return 1;
  return 0;
}

//----- (02233240) --------------------------------------------------------
int __fastcall Function_2233240(int a1)
{
  return *(uchar *)(a1 + 2953);
}

//----- (0223324C) --------------------------------------------------------
int __fastcall Function_223324c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = Function_2232fcc(a1);
  if ( result == 1 )
  {
    *(uchar *)(v1 + 2953) = 0;
    *(uchar *)(v1 + 2954) = 0;
    *(uchar *)(v1 + 2955) = 0;
    *(uchar *)(v1 + 2957) = 1;
    *(uint *)(v1 + 2960) = 1;
    result = Function_2234da0(v1);
  }
  return result;
}

//----- (0223327C) --------------------------------------------------------
uchar *__fastcall Function_223327c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uchar *result;
  char v6;

  v2 = a1;
  v3 = a2;
  if ( Function_222dce0(a1) == 1 )
    v4 = 7;
  else
    v4 = 2;
  if ( v3 == 3 )
  {
    u32_div_f(*(char *)(v2 + 2956) + 1, v4);
    result = (uchar *)2956;
    *(uchar *)(v2 + 2956) = v6;
  }
  else
  {
    result = (uchar *)(v2 + 2956);
    if ( (char)--*(uchar *)(v2 + 2956) < 0 )
      *result += v4;
  }
  return result;
}

//----- (022332C4) --------------------------------------------------------
int __fastcall Function_22332c4(int a1, int a2, int a3)
{
  int result;

  result = a1 + 8 * *(uchar *)(a3 + 2952);
  if ( *(uchar *)(a3 + result + 2920) == 2 && !*(uchar *)(a3 + 2953) && !a2 )
  {
    *(uchar *)(a3 + 2953) = result + 1;
    result = Function_2005748(0x5DDu);
  }
  return result;
}

//----- (022332FC) --------------------------------------------------------
int __fastcall Function_22332fc(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v10;
  int v12;
  int v13;
  int v14;
  short v15;
  int v16;
  short v17;
  int v18;
  int v19;

  v3 = a1;
  v12 = a2;
  v13 = a3;
  Function_2019ebc(*(uint **)(a1 + 348), 4u);
  Function_2007130(v12, 0x10u, 4u, 0, 128, v13);
  Function_2007130(v12, 0x13u, 4u, 128, 160, v13);
  Function_20070e8(v12, 0xFu, *(uint **)(v3 + 348), 4u, 0, 0, 0, v13);
  Function_20070e8(v12, 0x12u, *(uint **)(v3 + 348), 6u, 48, 0, 0, v13);
  Function_200710c(v12, 0x11u, *(uint **)(v3 + 348), 4u, 0, 0, 0, v13);
  *(uint *)(v3 + 2844) = Function_20071d0(v12, 0x14u, 0, (uint *)(v3 + 2848), v13);
  Function_22335f8(*(uint *)(v3 + 2848), 48);
  v4 = 0;
  v5 = (uint *)(v3 + 2880);
  v6 = v3;
  do
  {
    *(uint *)(v6 + 2852) = Function_20071d0(v12, v4 + 21, 0, v5, v13);
    Function_22335f8(*(uint *)(v6 + 2880), 48);
    ++v4;
    ++v5;
    v6 += 4;
  }
  while ( v4 < 7 );
  *(uint *)(v3 + 2908) = Function_20071d0(v12, 0x1Cu, 0, (uint *)(v3 + 2912), v13);
  Function_22335f8(*(uint *)(v3 + 2912), 48);
  LoadFromNARC_PlFont2(4u, 480, v13);
  v14 = 0;
  v18 = v3 + 2964;
  v17 = 1;
  v16 = v3 + 3092;
  v15 = 0;
  do
  {
    Function_201a7a0(v18);
    v7 = 16 * (v14 / 4);
    Function_201a7e8(
      *(uint **)(v3 + 348),
      v18,
      5,
      v7 + 4,
      6 * ((v14 < 0) + __ROR4__((v14 << 30) - ((uint)v14 >> 31), 30)) + 1,
      9u,
      3u,
      15,
      v17);
    Function_201ada4_ClearTextBox(v18, 0);
    Function_201a9a4(v18);
    v8 = v16;
    v9 = 0;
    v10 = v7 + 1;
    v19 = (6 * (((uint)v14 >> 31) + __ROR4__((v14 << 30) - ((uint)v14 >> 31), 30)) + 1) & 0xFF;
    do
    {
      Function_201a7a0(v8);
      Function_201a7e8(*(uint **)(v3 + 348), v8, 5, v10, v19, 2u, 3u, 13, 6 * (v9 + v15) + 218);
      Function_201ada4_ClearTextBox(v8, 0);
      Function_201a9a4(v8);
      ++v9;
      v8 += 16;
      v10 += 12;
    }
    while ( v9 < 2 );
    v18 += 16;
    v17 += 27;
    v16 += 32;
    v15 += 2;
    ++v14;
  }
  while ( v14 < 8 );
  Function_201a7e8(*(uint **)(v3 + 348), v3 + 3348, 7, 1, 1, 0x1Eu, 0x15u, 15, 1);
  Function_201ada4_ClearTextBox(v3 + 3348, 0);
  Function_201a9a4(v3 + 3348);
  return Function_2234a68(v3, v12, v13);
}

//----- (02233570) --------------------------------------------------------
uint __fastcall Function_2233570(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  v8 = a1;
  Function_2234cfc();
  v9 = 0;
  v1 = v8 + 2964;
  v2 = v8 + 3092;
  do
  {
    Function_201a8fc(v1);
    v3 = 0;
    v4 = v2;
    do
    {
      Function_201a8fc(v4);
      ++v3;
      v4 += 16;
    }
    while ( v3 < 2 );
    v1 += 16;
    v2 += 32;
    ++v9;
  }
  while ( v9 < 8 );
  Function_201a8fc(v8 + 3348);
  free(*(uint *)(v8 + 2844));
  v5 = v8;
  v6 = 0;
  do
  {
    free(*(uint *)(v5 + 2852));
    ++v6;
    v5 += 4;
  }
  while ( v6 < 7 );
  return free(*(uint *)(v8 + 2908));
}

//----- (022335F8) --------------------------------------------------------
int __fastcall Function_22335f8(ushort *a1, short a2)
{
  short v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  ushort *v9;

  v2 = a2;
  v3 = (int)(a1 + 6);
  v4 = (uint)*a1 >> 3;
  v5 = (uint)a1[1] >> 3;
  result = 0;
  if ( v5 > 0 )
  {
    v7 = 0;
    do
    {
      v8 = 0;
      if ( v4 > 0 )
      {
        v9 = (ushort *)(v3 + 2 * v7);
        do
        {
          ++v8;
          *v9 += v2;
          ++v9;
        }
        while ( v8 < v4 );
      }
      ++result;
      v7 += v4;
    }
    while ( result < v5 );
  }
  return result;
}

//----- (02233638) --------------------------------------------------------
int __fastcall Function_2233638(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( !a2 )
    ErrorHandler();
  if ( !v5 )
    ErrorHandler();
  if ( v5 >= 3 )
    ErrorHandler();
  *(uchar *)(v4 + v3 + 2919) = v5;
  result = 2957;
  *(uchar *)(v4 + 2957) = 1;
  return result;
}

//----- (0223366C) --------------------------------------------------------
int __fastcall Function_223366c(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( !a2 )
    ErrorHandler();
  *(uchar *)(v2 + v3 + 2919) = 0;
  result = 2957;
  *(uchar *)(v2 + 2957) = 1;
  return result;
}

//----- (0223368C) --------------------------------------------------------
int __fastcall Function_223368c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( !a2 )
    ErrorHandler();
  return *(uchar *)(v2 + v3 + 2919);
}

//----- (022336A4) --------------------------------------------------------
int __fastcall Function_22336a4(int a1, int a2)
{
  if ( *(uchar *)(a1 + 2955) )
    return Function_2233874(a1, a2);
  *(uint *)(a1 + 2960) = 1;
  return Function_223370c(a1);
}

//----- (022336C4) --------------------------------------------------------
int __fastcall Function_22336c4(int result)
{
  *(uint *)(result + 2960) = 1;
  *(uchar *)(result + 2957) = 1;
  return result;
}

//----- (022336D4) --------------------------------------------------------
int __fastcall Function_22336d4(int a1)
{
  int v1;

  v1 = a1;
  Function_2019e2c(*(uint *)(a1 + 348), 4, 0, 0, 0x20u, 0x18u, *(uchar *)(a1 + 2952));
  return Function_201c3c0(*(uint *)(v1 + 348), 4);
}

//----- (0223370C) --------------------------------------------------------
uint __fastcall Function_223370c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  BOOL v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;

  v1 = a1;
  if ( *(uint *)(a1 + 2960) == 1 )
  {
    *(uint *)(a1 + 2960) = 0;
    v12 = 1;
    Function_2019cb8(*(uint *)(a1 + 348), 6, 0, 0, 0, 0x20u, 0x18u, 0);
  }
  else
  {
    v12 = 0;
  }
  v2 = 0;
  v11 = v1 + 2964;
  v10 = v1 + 3092;
  do
  {
    v3 = v2 + 8 * *(uchar *)(v1 + 2952) + 1;
    if ( *(uchar *)(v1 + v3 + 2919) )
      v13 = Function_202ad2c(*(uint *)v1, v2 + 8 * *(uchar *)(v1 + 2952), 8u) == 0;
    else
      v13 = 2;
    v4 = *(uchar *)(v1 + 2953);
    if ( v3 == v4 )
      v5 = *(uchar *)(v1 + 2954);
    else
      v5 = 0;
    v6 = v3 == v4 || v3 == *(uchar *)(v1 + 2959);
    if ( v12 == 1 || v6 == 1 )
    {
      Function_2234788(
        v1,
        16 * (v2 / 4) & 0xFF,
        6 * (((uint)v2 >> 31) + __ROR4__((v2 << 30) - ((uint)v2 >> 31), 30)) & 0xFF,
        (uchar)v13,
        (uchar)v5);
      if ( v13 == 2 )
      {
        Function_201ada4_ClearTextBox(v11, 0);
        Function_201a9a4(v11);
        v7 = v10;
        v8 = 0;
        do
        {
          Function_201ada4_ClearTextBox(v7, 0);
          Function_201a9a4(v7);
          ++v8;
          v7 += 16;
        }
        while ( v8 < 2 );
      }
      else
      {
        Function_2234900(v1, v11, v3, v5, v2);
        Function_223498c(v1, v10, v3, v5, v2);
      }
    }
    ++v2;
    v11 += 16;
    v10 += 32;
  }
  while ( v2 < 8 );
  Function_201c3c0(*(uint *)(v1 + 348), 6);
  Function_201ff74(2u, 1);
  return Function_201ff74(8u, 0);
}

//----- (02233874) --------------------------------------------------------
uint __fastcall Function_2233874(int a1, int a2)
{
  int v2;
  int v3;
  uchar v4;
  int v5;

  v2 = a2;
  v3 = a1;
  if ( Function_202ad2c(*(uint *)a1, *(uchar *)(a1 + 2953) - 1, 8u) == 1 )
    v4 = 7;
  else
    v4 = 8;
  v5 = *(uint *)(v3 + 4 * *(char *)(v3 + 2956) + 2880);
  Function_2019574(*(uint *)(v3 + 348), 6, (int *)(v5 + 12), *(uint *)(v5 + 8));
  Function_2019e2c(*(uint *)(v3 + 348), 6, 0, 0, 0x20u, 0x18u, v4);
  Function_2019ebc(*(uint **)(v3 + 348), 7u);
  if ( !Function_222dce0(v3) )
    Function_2234628(v3);
  Function_201ada4_ClearTextBox(v3 + 3348, 0);
  ((void (__fastcall *)(int, int))*(&off_2239C40 + *(char *)(v3 + 2956)))(v3, v2);
  Function_201c3c0(*(uint *)(v3 + 348), 6);
  Function_201a9a4(v3 + 3348);
  Function_201ff74(2u, 0);
  return Function_201ff74(8u, 1);
}

//----- (02233940) --------------------------------------------------------
int __fastcall Function_2233940(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v10;
  int v11;
  int v12;
  uint v13;
  int v14;
  int *v15;
  ushort *v16;
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
  char v35;
  int v37;
  int v38;
  int v39;

  v39 = a4;
  v4 = a1;
  v5 = *(uchar *)(a1 + 2953) - 1;
  if ( Function_202ad2c(*(uint *)a1, v5, 8u) )
    v6 = 197632;
  else
    v6 = 329216;
  v38 = v6;
  Function_2234f68(v4, v5);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x2Au, *(ushort **)(v4 + 368));
  Function_200c388(*(uint **)(v4 + 2840), *(uint *)(v4 + 376), *(uint *)(v4 + 368));
  v7 = *(uint *)(v4 + 376);
  Function_201d78c(v4 + 3348, 1);
  v8 = Function_2234fa8(v4, v5);
  v37 = v8;
  v9 = Function_222dd20(v4, v8);
  v10 = v9;
  v13 = Function_223484c(v9, &v38, v11, v12);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), v13, *(ushort **)(v4 + 368));
  v14 = *(uint *)(v4 + 368);
  Function_201d78c(v4 + 3348, 0);
  v15 = AllocTrainerData(0x36u);
  v16 = (ushort *)Function_202af34(*(uint *)v4, v5);
  Function_2025ec0(v15, v16);
  Function_200b498(*(uint *)(v4 + 2840), 0);
  free((int)v15);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x2Bu, *(ushort **)(v4 + 376));
  v17 = *(uint *)(v4 + 376);
  Function_201d78c(v4 + 3348, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x96u, *(ushort **)(v4 + 368));
  Function_200c388(*(uint **)(v4 + 2840), *(uint *)(v4 + 376), *(uint *)(v4 + 368));
  Function_2002d7c(0, *(uint *)(v4 + 376), 0);
  v18 = *(uint *)(v4 + 376);
  Function_201d78c(v4 + 3348, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x2Cu, *(ushort **)(v4 + 376));
  v19 = *(uint *)(v4 + 376);
  Function_201d78c(v4 + 3348, 0);
  v20 = Function_202ad2c(*(uint *)v4, v5, 1u);
  Function_200b60c(*(uint *)(v4 + 2840), 0, v20, 4, 1, 1);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x2Du, *(ushort **)(v4 + 368));
  Function_200c388(*(uint **)(v4 + 2840), *(uint *)(v4 + 376), *(uint *)(v4 + 368));
  v21 = *(uint *)(v4 + 376);
  Function_201d78c(v4 + 3348, 0);
  v22 = Function_202ad2c(*(uint *)v4, v5, 2u);
  Function_200b60c(*(uint *)(v4 + 2840), 0, v22, 4, 1, 1);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x2Eu, *(ushort **)(v4 + 368));
  Function_200c388(*(uint **)(v4 + 2840), *(uint *)(v4 + 376), *(uint *)(v4 + 368));
  Function_2002d7c(0, *(uint *)(v4 + 376), 0);
  v23 = *(uint *)(v4 + 376);
  Function_201d78c(v4 + 3348, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x2Fu, *(ushort **)(v4 + 376));
  v24 = *(uint *)(v4 + 376);
  Function_201d78c(v4 + 3348, 0);
  v25 = Function_202ad2c(*(uint *)v4, v5, 3u);
  Function_200b60c(*(uint *)(v4 + 2840), 0, v25, 4, 1, 1);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x30u, *(ushort **)(v4 + 368));
  Function_200c388(*(uint **)(v4 + 2840), *(uint *)(v4 + 376), *(uint *)(v4 + 368));
  Function_2002d7c(0, *(uint *)(v4 + 376), 0);
  v26 = *(uint *)(v4 + 376);
  Function_201d78c(v4 + 3348, 0);
  if ( Function_222dcf8(v4) == 1 )
  {
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x31u, *(ushort **)(v4 + 376));
    v27 = *(uint *)(v4 + 376);
    Function_201d78c(v4 + 3348, 0);
    v28 = Function_202ad2c(*(uint *)v4, v5, 9u);
    Function_200b60c(*(uint *)(v4 + 2840), 0, v28, 4, 1, 1);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x32u, *(ushort **)(v4 + 368));
    Function_200c388(*(uint **)(v4 + 2840), *(uint *)(v4 + 376), *(uint *)(v4 + 368));
    Function_2002d7c(0, *(uint *)(v4 + 376), 0);
    v29 = *(uint *)(v4 + 376);
    Function_201d78c(v4 + 3348, 0);
  }
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x33u, *(ushort **)(v4 + 376));
  v30 = *(uint *)(v4 + 376);
  Function_201d78c(v4 + 3348, 0);
  v31 = Function_202ad2c(*(uint *)v4, v5, 6u);
  if ( v31 )
  {
    Function_200b60c(*(uint *)(v4 + 2840), 2u, v31, 2, 0, 1);
    v32 = Function_202ad2c(*(uint *)v4, v5, 4u);
    Function_200b60c(*(uint *)(v4 + 2840), 0, v32, 4, 0, 1);
    v33 = Function_202ad2c(*(uint *)v4, v5, 5u);
    Function_200c2e0(*(uint *)(v4 + 2840), 1u, v33);
    Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x4Au, *(ushort **)(v4 + 368));
    Function_200c388(*(uint **)(v4 + 2840), *(uint *)(v4 + 376), *(uint *)(v4 + 368));
    Function_2002d7c(0, *(uint *)(v4 + 376), 0);
    v34 = *(uint *)(v4 + 376);
    Function_201d78c(v4 + 3348, 0);
  }
  Function_222ea38(*(uint *)(v4 + 348), v4 + 2824, 6, 2, 2u, v10);
  if ( *(uchar *)(v37 + 33) )
    v35 = 8;
  else
    v35 = 1;
  return Function_222e9c0(*(uint *)(v4 + 348), v4 + 2824, 6, 28, 2u, v35, 0);
}

//----- (02233E20) --------------------------------------------------------
int __fastcall Function_2233e20(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = *(uchar *)(a1 + 2953) - 1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 360), 0x34u, *(ushort **)(a1 + 376));
  v3 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_22346c4(v1, *(uint *)(v1 + 376), 0, v2, 0, 255, 986624, 0);
  v4 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_2234694(v1, 65, 113, v2, 120, 24, 66048, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x3Bu, *(ushort **)(v1 + 376));
  v5 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  return Function_2234694(v1, 65, 112, v2, 120, 48, 66048, 0);
}

//----- (02233EF0) --------------------------------------------------------
int __fastcall Function_2233ef0(int a1)
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
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v1 = a1;
  v2 = *(uchar *)(a1 + 2953) - 1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 360), 0x35u, *(ushort **)(a1 + 376));
  v3 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x3Cu, *(ushort **)(v1 + 376));
  v4 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x3Eu, *(ushort **)(v1 + 376));
  Function_2002d7c(0, *(uint *)(v1 + 376), 0);
  v5 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_22346c4(v1, *(uint *)(v1 + 376), 1, v2, 24, 255, 66048, 0);
  v6 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_2234694(v1, 65, 115, v2, 104, 48, 66048, 0);
  Function_2234694(v1, 66, 117, v2, 212, 48, v7, v8);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x3Bu, *(ushort **)(v1 + 376));
  v9 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_2234694(v1, 65, 114, v2, 104, 64, 66048, 0);
  Function_2234694(v1, 66, 116, v2, 212, 64, v10, v11);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x3Du, *(ushort **)(v1 + 376));
  v12 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x3Eu, *(ushort **)(v1 + 376));
  Function_2002d7c(0, *(uint *)(v1 + 376), 0);
  v13 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_22346c4(v1, *(uint *)(v1 + 376), 2, v2, 88, 255, 66048, 0);
  v14 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_2234694(v1, 65, 119, v2, 104, 112, 66048, 0);
  Function_2234694(v1, 66, 121, v2, 212, 112, v15, v16);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x3Bu, *(ushort **)(v1 + 376));
  v17 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_2234694(v1, 65, 118, v2, 104, 128, 66048, 0);
  return Function_2234694(v1, 66, 120, v2, 212, 128, v18, v19);
}

//----- (0223416C) --------------------------------------------------------
int __fastcall Function_223416c(int a1)
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

  v1 = a1;
  v2 = *(uchar *)(a1 + 2953) - 1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 360), 0x36u, *(ushort **)(a1 + 376));
  v3 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x3Fu, *(ushort **)(v1 + 376));
  Function_2002d7c(0, *(uint *)(v1 + 376), 0);
  v4 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_22346c4(v1, *(uint *)(v1 + 376), 3, v2, 24, 255, 66048, 0);
  v5 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_2234694(v1, 68, 135, v2, 104, 48, 66048, 0);
  Function_2234694(v1, 67, 136, v2, 212, 48, v6, v7);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x3Bu, *(ushort **)(v1 + 376));
  v8 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_2234694(v1, 68, 134, v2, 104, 80, 66048, 0);
  return Function_2234694(v1, 67, 138, v2, 212, 80, v9, v10);
}

//----- (022342A8) --------------------------------------------------------
int __fastcall Function_22342a8(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  int v10;
  int v11;

  v2 = a1;
  v3 = a2;
  v4 = LoadVariableAreaAdress_17(*(uint *)(a1 + 352));
  v5 = *(uchar *)(v2 + 2953) - 1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 360), 0x37u, *(ushort **)(v2 + 376));
  v6 = *(uint *)(v2 + 376);
  Function_201d78c(v2 + 3348, 0);
  v7 = Function_2030698(v4, 124, v5);
  v8 = Function_200b32c(v7, v3);
  Function_2002d7c(0, (int)v8, 0);
  Function_201d78c(v2 + 3348, 0);
  Function_20237bc_FreeMsg((int)v8, v9);
  Function_22346c4(v2, *(uint *)(v2 + 376), 4, v5, 24, 255, 66048, 0);
  v10 = *(uint *)(v2 + 376);
  Function_201d78c(v2 + 3348, 0);
  Function_2234694(v2, 65, 123, v5, 108, 48, 66048, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 360), 0x3Bu, *(ushort **)(v2 + 376));
  v11 = *(uint *)(v2 + 376);
  Function_201d78c(v2 + 3348, 0);
  return Function_2234694(v2, 65, 122, v5, 108, 80, 66048, 0);
}

//----- (022343CC) --------------------------------------------------------
int __fastcall Function_22343cc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = *(uchar *)(a1 + 2953) - 1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 360), 0x38u, *(ushort **)(a1 + 376));
  v3 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_22346c4(v1, *(uint *)(v1 + 376), 5, v2, 0, 255, 986624, 0);
  v4 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_2234694(v1, 69, 143, v2, 112, 24, 66048, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x3Bu, *(ushort **)(v1 + 376));
  v5 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  return Function_2234694(v1, 69, 142, v2, 112, 48, 66048, 0);
}

//----- (0223449C) --------------------------------------------------------
int __fastcall Function_223449c(int a1)
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

  v1 = a1;
  v2 = LoadVariableAreaAdress_1d(*(uint *)(a1 + 352));
  v3 = *(uchar *)(v1 + 2953) - 1;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x46u, *(ushort **)(v1 + 376));
  v4 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  Function_200c0b0(*(uint *)(v1 + 2840), 0, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x47u, *(ushort **)(v1 + 368));
  Function_200c388(*(uint **)(v1 + 2840), *(uint *)(v1 + 376), *(uint *)(v1 + 368));
  v5 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  v6 = Function_202ad2c(v2, v3, 0xAu);
  Function_2234708(v1, 72, v6, 164, 24, 255, 66048, 0);
  Function_200c0b0(*(uint *)(v1 + 2840), 0, 1u);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x47u, *(ushort **)(v1 + 368));
  Function_200c388(*(uint **)(v1 + 2840), *(uint *)(v1 + 376), *(uint *)(v1 + 368));
  v7 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  v8 = Function_202ad2c(v2, v3, 0xBu);
  Function_2234708(v1, 72, v8, 164, 48, 255, 66048, 0);
  Function_200c0b0(*(uint *)(v1 + 2840), 0, 2u);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v1 + 360), 0x47u, *(ushort **)(v1 + 368));
  Function_200c388(*(uint **)(v1 + 2840), *(uint *)(v1 + 376), *(uint *)(v1 + 368));
  v9 = *(uint *)(v1 + 376);
  Function_201d78c(v1 + 3348, 0);
  v10 = Function_202ad2c(v2, v3, 0xCu);
  return Function_2234708(v1, 72, v10, 164, 72, 255, 66048, 0);
}

//----- (02234628) --------------------------------------------------------
int __fastcall Function_2234628(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = a1;
  do
    Function_20198e8(
      *(uint *)(v2 + 348),
      6,
      (v1++ + 26) & 0xFF,
      0,
      1u,
      1u,
      *(uint *)(v2 + 2912) + 12,
      0,
      0,
      (uint)**(ushort **)(v2 + 2912) << 21 >> 24,
      (uint)*(ushort *)(*(uint *)(v2 + 2912) + 2) << 21 >> 24);
  while ( v1 < 5 );
  return Function_2019e2c(*(uint *)(v2 + 348), 6, 0x1Au, 0, 5u, 1u, 6u);
}

//----- (02234694) --------------------------------------------------------
int __fastcall Function_2234694(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v6 = a1;
  v7 = a3;
  v8 = a4;
  v9 = a2;
  v10 = LoadVariableAreaAdress_17(*(uint *)(a1 + 352));
  v11 = Function_2030698(v10, v7, v8);
  return Function_2234708(v6, v9, v11, a5, a6);
}

//----- (022346C4) --------------------------------------------------------
char *__fastcall Function_22346c4(int a1, ushort *a2, uint a3, int a4)
{
  uint v4;
  int v5;
  ushort *v6;
  int v7;
  int v8;
  uint v9;

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  if ( a3 >= 6 )
    ErrorHandler();
  v8 = LoadVariableAreaAdress_17(*(uint *)(v5 + 352));
  if ( Function_2030698(v8, dword_2238998[v4], v7) )
    v9 = 58;
  else
    v9 = 57;
  return Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v5 + 360), v9, v6);
}

//----- (02234708) --------------------------------------------------------
int __fastcall Function_2234708(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  uint v6;
  int v7;

  v5 = a1;
  v6 = a2;
  Function_200b60c(*(uint *)(a1 + 2840), 0, a3, 4, 1, 1);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v5 + 360), v6, *(ushort **)(v5 + 368));
  Function_200c388(*(uint **)(v5 + 2840), *(uint *)(v5 + 376), *(uint *)(v5 + 368));
  Function_2002d7c(0, *(uint *)(v5 + 376), 0);
  v7 = *(uint *)(v5 + 376);
  return Function_201d78c(v5 + 3348, 0);
}

//----- (02234788) --------------------------------------------------------
int __fastcall Function_2234788(int a1, uint a2, int a3, char a4, uint a5)
{
  uint v5;
  int v6;
  uint v7;
  char v8;
  int v10;

  v10 = a3;
  v5 = a5;
  v6 = a1;
  v7 = a2;
  v8 = a4;
  if ( a5 >= 4 )
    ErrorHandler();
  if ( a5 == 3 )
    v5 = 1;
  if ( v5 >= 2 )
    Function_20198e8(
      *(uint *)(v6 + 348),
      6,
      v7,
      v10,
      0x10u,
      6u,
      *(uint *)(v6 + 2848) + 1164,
      0,
      6 * v8,
      0x10u,
      0x12u);
  else
    Function_20198e8(
      *(uint *)(v6 + 348),
      6,
      v7,
      v10,
      0x10u,
      6u,
      *(uint *)(v6 + 2848) + 12,
      16 * v5,
      6 * v8,
      0x20u,
      0x12u);
  return Function_2019e2c(*(uint *)(v6 + 348), 6, v7, v10, 0x10u, 6u, v8 + 4);
}

//----- (0223484C) --------------------------------------------------------
int __fastcall Function_223484c(char a1, uint *a2)
{
  int result;

  *a2 = 66048;
  switch ( a1 )
  {
    case 1:
      result = 36;
      *a2 = 134656;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      result = 27;
      *a2 = 134656;
      break;
    case 8:
      result = 29;
      *a2 = 134656;
      break;
    case 9:
      result = 96;
      break;
    case 10:
      result = 97;
      break;
    case 11:
      result = 95;
      break;
    case 12:
      result = 99;
      break;
    case 13:
      result = 100;
      break;
    case 14:
      result = 98;
      break;
    case 15:
      result = 28;
      break;
    case 16:
      result = 79;
      break;
    case 18:
      result = 31;
      *a2 = 134656;
      break;
    case 19:
      result = 30;
      break;
    case 20:
      result = 33;
      *a2 = 134656;
      break;
    case 21:
      result = 32;
      break;
    case 22:
    case 24:
    case 26:
      result = 35;
      *a2 = 134656;
      break;
    case 23:
    case 25:
    case 27:
      result = 34;
      break;
    default:
      result = 92;
      break;
  }
  return result;
}

//----- (02234900) --------------------------------------------------------
int __fastcall Function_2234900(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  Function_201ada4_ClearTextBox(a2, 0);
  v8 = *((uchar *)&dword_2238934 + v7);
  Function_202ad2c(*(uint *)v5, v6 - 1, 8u);
  Function_2234f68(v5, v6 - 1);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v5 + 360), 0x2Au, *(ushort **)(v5 + 368));
  Function_200c388(*(uint **)(v5 + 2840), *(uint *)(v5 + 376), *(uint *)(v5 + 368));
  v9 = *(uint *)(v5 + 376);
  Function_201d78c(v4, 1);
  return Function_201a9a4(v4);
}

//----- (0223498C) --------------------------------------------------------
int __fastcall Function_223498c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  ushort v7;
  int v8;
  ushort v9;
  int v10;
  int result;
  char v12;
  int v13;

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v13 = Function_2234fa8(a1, a3 - 1);
  v12 = Function_222dd20(v5, v13);
  v7 = *((uchar *)&dword_2238934 + v6);
  v8 = 0;
  v9 = v7;
  do
  {
    Function_201ada4_ClearTextBox(v4, 0);
    if ( v8 )
    {
      if ( *(uchar *)(v13 + 33) )
        v10 = 8;
      else
        v10 = 1;
      Function_222ead0(v4, v5 + 2824, 0, v9, v10, 0);
    }
    else
    {
      Function_222eb1c(v4, v5 + 2824, 0, v9, v12);
    }
    result = Function_201a9a4(v4);
    ++v8;
    v4 += 16;
  }
  while ( v8 < 2 );
  return result;
}

//----- (02234A10) --------------------------------------------------------
uchar *__fastcall Function_2234a10(uchar *result)
{
  if ( result[2953] )
  {
    if ( (uchar)++result[2958] >= (uint)*((uchar *)&dword_2238938
                                                          + (uchar)result[2954]) )
    {
      result[2958] = 0;
      ++result[2954];
      result[2957] = 1;
      if ( (uchar)result[2954] >= 4u )
      {
        result[2958] = 0;
        result[2954] = 0;
        result[2955] = 1;
      }
    }
  }
  return result;
}

//----- (02234A68) --------------------------------------------------------
int __fastcall Function_2234a68(int a1, int a2, uint a3)
{
  int *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  char *v11;
  int v12;
  ushort *v13;
  uint v14;
  int v15;
  uint *v16;
  uint *v17;
  int v18;
  int result;
  uint v20;
  char *v21;
  int v22;
  int v23;
  char *v24;
  int v25;
  uchar *v26;
  int v27;
  int v28;
  uint v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint v34;
  char v35;
  char v36;
  char v37;

  v3 = dword_2238B38;
  v20 = a3;
  v4 = a1;
  v5 = a2;
  v6 = &v37;
  v7 = 18;
  do
  {
    v8 = *v3;
    v9 = v3[1];
    v3 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  Function_201ff74(0x10u, 0);
  *(uint *)(v4 + 3364) = Function_2009a4c(*(uint *)(v4 + 696), v5, 0x2Au, 0, 30, 2, v20);
  *(uint *)(v4 + 3368) = Function_2009b04(*(uint *)(v4 + 700), v5, 0x2Bu, 0, 30, 2, 8, v20);
  *(uint *)(v4 + 3372) = Function_2009bc4(*(uint *)(v4 + 704), v5, 0x28u, 0, 30, 2u, v20);
  *(uint *)(v4 + 3376) = Function_2009bc4(*(uint *)(v4 + 708), v5, 0x29u, 0, 30, 3u, v20);
  if ( !Function_200a450(*(int **)(v4 + 3364)) )
    ErrorHandler();
  if ( !Function_200a640(*(int **)(v4 + 3368)) )
    ErrorHandler();
  Function_2009d4c(*(int **)(v4 + 3364));
  Function_2009d4c(*(int **)(v4 + 3368));
  Function_20093b4(
    (int)&v36,
    30,
    30,
    30,
    30,
    -1,
    -1,
    0,
    0,
    *(uint *)(v4 + 696),
    *(uint *)(v4 + 700),
    *(uint *)(v4 + 704),
    *(uint *)(v4 + 708),
    0,
    0);
  v10 = &v37;
  v11 = &byte_2238930;
  v22 = 0;
  v21 = &v37;
  v12 = v4;
  do
  {
    *(uint *)v10 = *(uint *)(v4 + 396);
    *((uint *)v10 + 1) = &v36;
    *((uint *)v10 + 11) = v20;
    *(uint *)(v12 + 3380) = Function_2021aa0((uint **)v21);
    Function_2021d6c(*(uint *)(v12 + 3380), (uchar)*v11);
    v10 += 48;
    v21 += 48;
    v12 += 4;
    ++v11;
    ++v22;
  }
  while ( v22 < 3 );
  Function_2002bb8(2, v20);
  Function_201a7a0((int)&v35);
  Function_201a870(*(uint **)(v4 + 348), (int)&v35, 8, 2, 0, 0);
  v13 = (ushort *)Function_2023790(64, v20);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 360), 0x49u, v13);
  v14 = -((uint)(Function_2002d7c(0, *(uint *)(v4 + 376), 0) + 1) >> 1);
  Function_201d78c((int)&v35, 2);
  Function_20237bc_FreeMsg((int)v13, v15);
  v16 = Function_2012b20((int)&v35, v20);
  v17 = v16;
  v18 = Function_2012b58((int)v16, 2);
  if ( !Function_201ed94(v18, 1, 2, v4 + 3392) )
    ErrorHandler();
  v23 = *(uint *)(v4 + 712);
  v24 = &v35;
  v25 = *(uint *)(v4 + 396);
  v26 = Function_200a72c(*(int **)(v4 + 3368), 0);
  v27 = *(uint *)(v4 + 3384);
  v28 = *(uint *)(v4 + 3396);
  v30 = -8;
  v31 = 0;
  v32 = 0;
  v33 = 2;
  v29 = v14;
  v34 = v20;
  *(uint *)(v4 + 3404) = Function_2012b60(&v23, v17);
  Function_2012b48((int)v17);
  Function_201a8fc((int)&v35);
  Function_2002c60(2);
  result = Function_2023fcc((int)dword_223895C, 3u, (int)Function_2234e40, v4, v20);
  *(uint *)(v4 + 3420) = result;
  return result;
}

//----- (02234CFC) --------------------------------------------------------
int __fastcall Function_2234cfc(int a1)
{
  int **v1;
  int v2;
  int **v3;
  int v4;
  int result;

  v1 = (int **)a1;
  Function_2024034(*(uint *)(a1 + 3420));
  Function_2012bd8(v1[851]);
  Function_201ee28((int)(v1 + 848));
  v2 = 0;
  v3 = v1;
  do
  {
    Function_2021bd4((int)v3[845]);
    ++v2;
    ++v3;
  }
  while ( v2 < 3 );
  Function_200a4e4(v1[841]);
  Function_200a6dc(v1[842]);
  v4 = 0;
  do
  {
    result = Function_2009d68(v1[174], (uint **)v1[841]);
    ++v4;
    ++v1;
  }
  while ( v4 < 4 );
  return result;
}

//----- (02234D6C) --------------------------------------------------------
int __fastcall Function_2234d6c(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  *(uint *)(a1 + 3408) = 1;
  Function_201ff74(0x10u, 1);
  v2 = 0;
  *(uint *)(v1 + 3412) = 0;
  do
    result = Function_2234e50(v1 + 2840, v2++);
  while ( v2 < 3 );
  return result;
}

//----- (02234DA0) --------------------------------------------------------
uint __fastcall Function_2234da0(int a1)
{
  int v1;

  v1 = a1;
  if ( *(uint *)(a1 + 3408) == 2 )
  {
    Function_2021cac(*(uint *)(a1 + 3384), 1);
    Function_20129d0(*(uint **)(v1 + 3404), 1);
  }
  *(uint *)(v1 + 3408) = 0;
  return Function_201ff74(0x10u, 0);
}

//----- (02234DD8) --------------------------------------------------------
int __fastcall Function_2234dd8(int a1)
{
  uint *v1;
  int v3;

  v1 = (uint *)a1;
  if ( !*(uint *)(a1 + 3408) )
    return 0;
  *(uint *)(a1 + 3412) = 3;
  *(uint *)(a1 + 3416) = 255;
  Function_202404c(*(int **)(a1 + 3420));
  v3 = 0;
  do
  {
    if ( (v1[852] != 2 || v3 != 1) && Function_2234e8c(v1 + 710, v3, v1[853], v1[854]) == 1 )
      return v3 + 1;
    ++v3;
  }
  while ( v3 < 3 );
  return 0;
}

//----- (02234E40) --------------------------------------------------------
int __fastcall Function_2234e40(int a1, int a2, int a3)
{
  int result;

  *(uint *)(a3 + 3412) = a1;
  result = 3416;
  *(uint *)(a3 + 3416) = a2;
  return result;
}

//----- (02234E50) --------------------------------------------------------
uint __fastcall Function_2234e50(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint result;
  int v7;

  v2 = a2;
  v3 = a1;
  v4 = a1 + 540;
  v5 = 4 * a2;
  Function_2021d6c(*(uint *)(a1 + 540 + 4 * a2), (uchar)byte_2238930[a2]);
  result = Function_2021e50(*(uint *)(v4 + v5), 4u);
  if ( v2 == 1 )
    result = Function_20128c4(*(uint **)(v3 + 564), -18, -8, v7);
  return result;
}

//----- (02234E8C) --------------------------------------------------------
int __fastcall Function_2234e8c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;
  int v15;
  uint v16;
  int v17;
  uint v18;

  v15 = a1;
  v4 = a2;
  v5 = a4;
  v17 = 0;
  if ( a3 == a2 )
  {
    v6 = 4 * a2;
    v7 = a1 + 540;
    v8 = Function_2021e74(*(uint *)(a1 + 540 + 4 * a2));
    v16 = v8;
    if ( v5 && v5 != 2 )
    {
      if ( v5 == 1 && v8 < 3 )
        v17 = 1;
    }
    else
    {
      if ( !v5 )
        Function_2021d6c(*(uint *)(v7 + v6), *((uchar *)&dword_223892C + v4));
      if ( v16 < 3 )
      {
        Function_2021e2c(*(uint *)(v7 + v6), 0x2000);
        v10 = Function_2021e74(*(uint *)(v7 + v6));
        if ( v4 == 1 )
          Function_20128c4(*(uint **)(v15 + 564), -18, *((char *)dword_223893C + v10), v9);
        if ( v10 >= 3 )
          v17 = 1;
      }
    }
  }
  else
  {
    v11 = 4 * a2;
    v12 = a1 + 540;
    v13 = Function_2021e24(*(uint *)(a1 + 540 + 4 * a2));
    v18 = Function_2021e74(*(uint *)(v15 + 540 + 4 * v4));
    if ( v13 == *((uchar *)&dword_223892C + v4) )
    {
      Function_2021d6c(*(uint *)(v12 + v11), (uchar)byte_2238930[v4]);
      Function_2021e50(*(uint *)(v12 + v11), (4 - v18) & 0xFFFF);
    }
    Function_2021e2c(*(uint *)(v12 + v11), 0x2000);
  }
  return v17;
}

//----- (02234F68) --------------------------------------------------------
uint __fastcall Function_2234f68(int *a1, int a2)
{
  int *v2;
  int v3;
  uint result;
  int *v5;
  ushort *v6;

  v2 = a1;
  v3 = a2;
  result = -1;
  if ( a2 != -1 )
  {
    v5 = AllocTrainerData(0x36u);
    v6 = (ushort *)Function_202aef0(*v2, v3);
    Function_2025ec0(v5, v6);
    Function_200b498(v2[710], 0);
    result = free((int)v5);
  }
  return result;
}

//----- (02234FA8) --------------------------------------------------------
int __fastcall Function_2234fa8(int a1, uint a2)
{
  uint v2;
  int v3;

  v2 = a2;
  v3 = a1;
  if ( a2 >= 0x20 )
    ErrorHandler();
  return *(uint *)(v3 + 4) + 36 + 36 * v2;
}

//----- (02234FC4) --------------------------------------------------------
void Function_2234fc4()
{
  JUMPOUT(&byte_21D2234);
}

//----- (02234FCC) --------------------------------------------------------
int __fastcall Function_2234fcc(int a1, char a2, char a3)
{
  int v3;
  char v4;
  char v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_20363e8(0xFu);
  ((void (__fastcall *)(uint))dword_21D2584[0])(*(uchar *)(*(uint *)(v3 + 4) + 33));
  if ( Function_222dd64(v5) == 1 )
    ((void (__fastcall *)(int, int))dword_21D2598[32])(1, 121);
  else
    ((void (__fastcall *)(uint, int))dword_21D2598[32])(0, 121);
  Function_209c3ac();
  return Function_20380a0(v4);
}

//----- (0223500C) --------------------------------------------------------
int __fastcall Function_223500c(int a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1;
  result = 3424;
  v4 = a2;
  if ( !*(uint *)(v2 + 3424) )
  {
    *(uint *)(v2 + 3424) = 1;
    result = Function_2235378(v2 + 904);
    if ( v4 == 1 )
      result = Function_2232b58(v2, 9u, 0);
  }
  return result;
}

//----- (0223503C) --------------------------------------------------------
int __fastcall Function_223503c(int result)
{
  int v1;

  v1 = result;
  if ( *(uint *)(result + 3424) == 1 )
  {
    *(uint *)(result + 3424) = 0;
    Function_2232dfc(result);
    result = Function_2235378(v1 + 904);
  }
  return result;
}

//----- (02235060) --------------------------------------------------------
int __fastcall Function_2235060(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int *v8;
  int v9;
  uint v10;
  ushort v11;
  int v12;
  int result;

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = a4;
  Call_FillMemWithValue(a1, 0, 0x6FCu);
  v8[1] = v7;
  v10 = (uint)(a6 - 1) >> 3;
  v8[4] = v9;
  Function_223587c(v8 + 5, v8[1], v6);
  Function_2235918(v8[4], v7);
  v11 = Function_2236474(v10);
  v8[441] = ((int (__fastcall *)(uint))dword_222BCE8[0])(v11);
  v12 = Function_2236480(v10);
  ((void (__fastcall *)(int, int))dword_222BD50[0])(v8[441], v12);
  v8[442] = ((int (__fastcall *)(int, int))dword_222BE18[0])(48, v7);
  Function_22357e8(v8, a5, v7);
  ((void (__fastcall *)(int *))dword_222D19C[0])(v8 + 444);
  Function_223582c(v8, v7, v6, v10);
  Function_2235920(v8[4], v7, v6);
  Function_22362b0(v8, v8 + 436, v6);
  v8[446] = ((int (__fastcall *)(int, int))dword_222D848[0])(128, v7);
  result = 1;
  *v8 = 1;
  return result;
}

//----- (02235130) --------------------------------------------------------
int *__fastcall Function_2235130(int *a1)
{
  int *v1;

  v1 = a1;
  ((void (__fastcall *)(int))dword_222D880[0])(a1[446]);
  Function_223586c(v1);
  Function_22362ec(v1, v1 + 436);
  Function_223560c(v1);
  Function_223581c(v1);
  ((void (__fastcall *)(int))dword_222BE58[0])(v1[442]);
  ((void (__fastcall *)(int))dword_222BD30[0])(v1[441]);
  Function_22358cc(v1 + 5);
  Function_223591c(v1[4]);
  return Call_FillMemWithValue(v1, 0, 0x6FCu);
}

//----- (02235194) --------------------------------------------------------
int __fastcall Function_2235194(int a1)
{
  return *(uint *)a1;
}

//----- (02235198) --------------------------------------------------------
int __fastcall Function_2235198(int a1)
{
  int v1;
  int result;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_222BE84[0])(*(uint *)(a1 + 1768));
  Function_223573c(v1);
  Function_22356e8(v1);
  ((void (__fastcall *)(int, uint))dword_222D160[0])(v1 + 1776, **(uint **)(v1 + 1740));
  ((void (__fastcall *)(uint, int))dword_222D228[0])(*(uint *)(v1 + 1780), v1 + 1776);
  ((void (__fastcall *)(uint))dword_222CEE4[0])(*(uint *)(v1 + 1772));
  Function_2235778(v1);
  Function_2235b78(v1);
  if ( Function_2235634(v1) != 1 )
    goto LABEL_13;
  if ( Function_2235be8(v1) == 1 )
  {
    Function_2235b30(v1);
    if ( dword_21BF6C0 & 0x80 )
      return 1;
  }
  if ( !(dword_21BF6C4 & 1) )
    goto LABEL_13;
  if ( Function_2235254(v1) )
    return 2;
  if ( Function_2235654(v1) == 1 )
    result = 3;
  else
LABEL_13:
    result = 0;
  return result;
}

//----- (02235244) --------------------------------------------------------
uint *__fastcall Function_2235244(uint *result)
{
  if ( *result )
    result = (uint *)Function_20219f8(result[5]);
  return result;
}

//----- (02235254) --------------------------------------------------------
int __fastcall Function_2235254(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uint *)(a1 + 1740) )
    ErrorHandler();
  return *(uchar *)(*(uint *)(v1 + 1740) + 10);
}

//----- (02235270) --------------------------------------------------------
int __fastcall Function_2235270(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( !*(uint *)(a1 + 1740) )
    ErrorHandler();
  v2 = ((int (__fastcall *)(uint))dword_222C0E4[0])(**(uint **)(v1 + 1740));
  return ((int (__fastcall *)(uint, uint, uint))dword_222BDE4[0])(
           *(uint *)(v1 + 1764),
           ((short)v2 + ((uint)((short)v2 >> 3) >> 28)) << 12 >> 16,
           (SHIWORD(v2) + ((uint)(SHIWORD(v2) >> 3) >> 28)) << 12 >> 16);
}

//----- (022352CC) --------------------------------------------------------
int __fastcall Function_22352cc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( !*(uint *)(a1 + 1740) )
    ErrorHandler();
  v2 = ((int (__fastcall *)(uint))dword_222C0E4[0])(**(uint **)(v1 + 1740));
  return ((int (__fastcall *)(uint, uint, int))dword_222BDE4[0])(
           *(uint *)(v1 + 1764),
           ((short)v2 + ((uint)((short)v2 >> 3) >> 28)) << 12 >> 16,
           (SHIWORD(v2) / 16 + 1) & 0xFFFF);
}

//----- (0223532C) --------------------------------------------------------
int __fastcall Function_223532c(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  uint v6;
  int v7;
  int v8;
  short *v9;
  short v11;
  short v12;
  short v13;
  short v14;
  int v15;

  v15 = a4;
  v4 = a2;
  v5 = a1;
  v6 = ((int (__fastcall *)(uint))dword_222C0E4[0])(*a2);
  v11 = v6;
  v6 >>= 16;
  v12 = v6;
  v13 = v11;
  v14 = v6;
  v7 = ((int (__fastcall *)(uint))dword_222D014[0])(v4[1]);
  v8 = v5;
  v9 = &v11 - 2;
  *v9 = v13;
  v9[1] = v14;
  return Function_2235b88(v8, *((uint *)&v11 - 1), v7 - 2);
}

//----- (02235370) --------------------------------------------------------
int Function_2235370()
{
  return Function_2235bd8();
}

//----- (02235378) --------------------------------------------------------
int __fastcall Function_2235378(int result, int a2)
{
  *(uint *)(result + 12) = a2;
  return result;
}

//----- (0223537C) --------------------------------------------------------
int __fastcall Function_223537c(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (02235380) --------------------------------------------------------
int __fastcall Function_2235380(int a1)
{
  int v1;
  int v2;
  int v3;
  char v5;

  v1 = a1;
  v2 = Function_2235d7c();
  v3 = v2;
  *(uint *)(v1 + 1740) = v2;
  Function_2235d08(v1, &v5);
  Function_2235de4(v1, v3, &v5);
  Function_2235e48(v1, v3);
  Function_2235dac(v1, v3, 1);
  ((void (__fastcall *)(int, uint))dword_222D160[0])(v1 + 1776, **(uint **)(v1 + 1740));
  ((void (__fastcall *)(uint, int))dword_222D228[0])(*(uint *)(v1 + 1780), v1 + 1776);
  return v3;
}

//----- (022353EC) --------------------------------------------------------
int __fastcall Function_22353ec(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint *v7;
  int v8;
  char v10;
  short v11;
  int v12;

  v12 = a4;
  v4 = a1;
  v5 = a3;
  v6 = Function_2235d7c();
  Function_2235c64(v4, &v10, v5 - 1);
  v7 = *(uint **)(v4 + 1740);
  if ( v7 )
  {
    v8 = ((int (__fastcall *)(uint))dword_222C0E4[0])(*v7);
    if ( (short)v8 == *(short *)&v10 && SHIWORD(v8) == v11 )
      return 0;
  }
  Function_2235de4(v4, v6, &v10);
  Function_2235e68(v4, v6);
  Function_2235dac(v4, v6, 0);
  return v6;
}

//----- (02235478) --------------------------------------------------------
int __fastcall Function_2235478(int a1, uint *a2)
{
  uint *v2;
  int v3;

  v2 = a2;
  v3 = a1;
  ((void (__fastcall *)(uint, int))dword_222BF90[0])(*a2, 6);
  v2[4] = Function_22361b0;
  v2[6] = Function_2235ef8;
  *((ushort *)v2 + 6) = 2;
  *((ushort *)v2 + 4) = 0;
  ((void (__fastcall *)(uint))dword_222CFA4)(v2[1]);
  ((void (__fastcall *)(uint))dword_222CFA8[0])(v2[1]);
  return Function_2236250(v3, 4, v2);
}

//----- (022354B8) --------------------------------------------------------
int __fastcall Function_22354b8(uint *a1)
{
  uint *v1;
  int v2;
  int result;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_222CECC[0])(a1[1]);
  ((void (__fastcall *)(uint))dword_222BF08[0])(*v1);
  v2 = 28;
  result = 0;
  do
  {
    *(uchar *)v1 = 0;
    v1 = (uint *)((char *)v1 + 1);
    --v2;
  }
  while ( v2 );
  return result;
}

//----- (022354D8) --------------------------------------------------------
int __fastcall Function_22354d8(uint *a1)
{
  return ((uchar (__fastcall *)(uint, int))dword_222BF90[0])(*a1, 4);
}

//----- (022354E8) --------------------------------------------------------
int __fastcall Function_22354e8(uint *a1)
{
  int v1;

  v1 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*a1, 6);
  return ((int (__fastcall *)(int))dword_222C0AC[0])(v1);
}

//----- (022354F8) --------------------------------------------------------
int __fastcall Function_22354f8(int a1, uint *a2, int a3, int a4)
{
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  short *v9;
  short v11;
  short v12;
  int v13;

  v13 = a4;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  a2[5] = a2[4];
  a2[4] = Function_223622c;
  *((ushort *)v4 + 7) = *((ushort *)v4 + 6);
  *((ushort *)a2 + 6) = 5;
  v7 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*a2, 4);
  Function_2236230(v5, 0, v6, v7);
  ((void (__fastcall *)(uint, uint))dword_222CFA4)(v4[1], 0);
  ((void (__fastcall *)(uint, int))dword_222D020[0])(v4[1], v6);
  v11 = ((int (__fastcall *)(uint, uint))dword_222BF90[0])(*v4, 0);
  v12 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v4, 1);
  v8 = v4[1];
  v9 = &v11 - 2;
  *v9 = v11;
  v9[1] = v12;
  return ((int (__fastcall *)(int, uint))dword_222CFE0[0])(v8, *((uint *)&v11 - 1));
}

//----- (0223556C) --------------------------------------------------------
void __fastcall Function_223556c(int a1, int a2)
{
  int v2;

  if ( a2 )
  {
    v2 = *(uint *)(a2 + 20);
    if ( v2 )
    {
      *(uint *)(a2 + 16) = v2;
      *(uint *)(a2 + 20) = 0;
      *(ushort *)(a2 + 12) = *(ushort *)(a2 + 14);
      ((void (__fastcall *)(uint, int))dword_222CFA4)(*(uint *)(a2 + 4), 1);
    }
  }
}

//----- (0223558C) --------------------------------------------------------
int __fastcall Function_223558c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  result = Function_2236278(a2);
  if ( result )
    return Function_223628c(v4, v3, v5);
  *(uchar *)(v3 + 11) = v5;
  return result;
}

//----- (022355B0) --------------------------------------------------------
uint __fastcall Function_22355b0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  if ( Function_2235654(a1) != 1 )
    return ErrorHandler();
  v2 = (char)(Function_22352cc(v1) - 3);
  if ( v2 < 0 || v2 >= 4 )
    ErrorHandler();
  return Function_2236440(v1 + 1744, (uchar)v2);
}

//----- (022355EC) --------------------------------------------------------
int __fastcall Function_22355ec(int a1)
{
  return Function_2236464(a1 + 1744);
}

//----- (022355FC) --------------------------------------------------------
int Function_22355fc()
{
  return Function_2236304();
}

//----- (0223560C) --------------------------------------------------------
int __fastcall Function_223560c(int a1)
{
  int v1;
  int v2;
  uint *v3;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = (uint *)(a1 + 396);
  do
  {
    result = *(uint *)(v1 + 396);
    if ( result )
      result = Function_22354b8(v3);
    ++v2;
    v1 += 28;
    v3 += 7;
  }
  while ( v2 < 48 );
  return result;
}

//----- (02235634) --------------------------------------------------------
BOOL __fastcall Function_2235634(int a1)
{
  return ((int (__fastcall *)(uint, int))dword_222BF90[0])(**(uint **)(a1 + 1740), 5) == 0;
}

//----- (02235654) --------------------------------------------------------
BOOL __fastcall Function_2235654(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v4 = a1;
  v5 = ((int (__fastcall *)(uint))dword_222C0E4[0])(**(uint **)(a1 + 1740));
  v12 = v5;
  v14 = v5;
  v6 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(**(uint **)(v4 + 1740), 6);
  v7 = v6;
  *(&v11 - 1) = v14;
  v8 = ((int (__fastcall *)(uint, int))dword_222C078[0])(*(&v11 - 1), v6);
  v11 = v8;
  v13 = v8;
  v9 = ((int (__fastcall *)(uint, uint, uint))dword_222BDE4[0])(
         *(uint *)(v4 + 1764),
         ((short)v13 + ((uint)((short)v13 >> 3) >> 28)) << 12 >> 16,
         (SHIWORD(v8) + ((uint)(SHIWORD(v8) >> 3) >> 28)) << 12 >> 16);
  return !v7 && v9 == 2;
}

//----- (022356E8) --------------------------------------------------------
int __fastcall Function_22356e8(uint *a1)
{
  uint *v1;
  int result;
  char v3;
  char v4;

  v1 = a1;
  for ( result = ((int (__fastcall *)(uint, char *))dword_222D8D0[0])(a1[446], &v4);
        result == 1;
        result = ((int (__fastcall *)(uint, char *))dword_222D8D0[0])(v1[446], &v4) )
  {
    if ( ((int (__fastcall *)(uint, uint, char *, char *))dword_222CA88[0])(v1[441], v1[442], &v4, &v3) == 1 )
      ((void (__fastcall *)(uint, char *))dword_222BE70[0])(v1[442], &v3);
  }
  return result;
}

//----- (0223573C) --------------------------------------------------------
int __fastcall Function_223573c(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  v4 = (uint *)(a1 + 396);
  do
  {
    result = *(uint *)(v3 + 396);
    if ( result )
    {
      result = (*(int (__fastcall **)(int, uint *))(v3 + 412))(v1, v4);
      if ( result == 1 )
        result = Function_22354b8(v4);
    }
    ++v2;
    v3 += 28;
    v4 += 7;
  }
  while ( v2 < 48 );
  return result;
}

//----- (02235778) --------------------------------------------------------
int __fastcall Function_2235778(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  v2 = 0;
  v3 = a1;
  v4 = a1 + 396;
  do
  {
    result = *(uint *)(v3 + 396);
    if ( result )
      result = (*(int (__fastcall **)(int, int))(v3 + 420))(v1, v4);
    ++v2;
    v3 += 28;
    v4 += 28;
  }
  while ( v2 < 48 );
  return result;
}

//----- (022357A8) --------------------------------------------------------
int __fastcall Function_22357a8(int a1, uint *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = ((int (__fastcall *)(uint, uint))dword_222C1C4[0])(*a2, *(uint *)(a1 + 1768));
  if ( !v3 )
    return 0;
  v4 = 0;
  v5 = v2;
  while ( *(uint *)(v5 + 396) != v3 )
  {
    ++v4;
    v5 += 28;
    if ( v4 >= 48 )
      return 0;
  }
  return v2 + 396 + 28 * v4;
}

//----- (022357E8) --------------------------------------------------------
int __fastcall Function_22357e8(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a3;
  *(uint *)(a1 + 1772) = ((int (__fastcall *)(uint))dword_222CD2C[0])(*(uint *)(a1 + 20));
  return ((int (__fastcall *)(uint, int, int))dword_222CE30[0])(*(uint *)(v3 + 1772), 2, v4);
}

//----- (0223581C) --------------------------------------------------------
void __fastcall Function_223581c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 1772);
  JUMPOUT(&byte_222CD9C);
}

//----- (0223582C) --------------------------------------------------------
int __fastcall Function_223582c(int a1, int a2, int a3, int a4)
{
  char *v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  char v9;
  int result;
  char v11;
  char v12;
  int v13;

  v13 = a4;
  v4 = &byte_2238BCC;
  v5 = a2;
  v6 = a1;
  v7 = &v11;
  v8 = 11;
  do
  {
    v9 = *v4++;
    *v7++ = v9;
    --v8;
  }
  while ( v8 );
  v12 += a4;
  result = ((int (__fastcall *)(int, uint, char *, int))dword_222D1C0[0])(v6 + 24, *(uint *)(v6 + 16), &v11, v5);
  *(uint *)(v6 + 1780) = result;
  return result;
}

//----- (0223586C) --------------------------------------------------------
void __fastcall Function_223586c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 1780);
  JUMPOUT(&byte_222D214);
}

//----- (0223587C) --------------------------------------------------------
int __fastcall Function_223587c(int **a1, int a2, int a3, int a4)
{
  int **v4;
  uint v5;
  int v6;
  int *v7;
  int **v8;
  int v10;

  v4 = a1;
  v5 = a2;
  v10 = a3;
  *a1 = Function_20095c4(96, (int)(a1 + 1), a2, a4);
  Function_200964c((int)(v4 + 1), 0, 3276800, v6);
  v7 = 0;
  v8 = v4;
  do
  {
    v8[75] = (int *)Function_2009714(16, v7, v5);
    v7 = (int *)((char *)v7 + 1);
    ++v8;
  }
  while ( (int)v7 < 4 );
  Function_22358f8(v4, v5, v10);
  return Function_2235908(v4, v5);
}

//----- (022358CC) --------------------------------------------------------
int __fastcall Function_22358cc(int **a1)
{
  int **v1;
  int v2;
  int **v3;

  v1 = a1;
  Function_2235910();
  Function_2235900(v1);
  v2 = 0;
  v3 = v1;
  do
  {
    Function_2009754(v3[75]);
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  return Function_2021964(*v1);
}

//----- (022358F8) --------------------------------------------------------
int Function_22358f8()
{
  return Function_2235960();
}

//----- (02235900) --------------------------------------------------------
int Function_2235900()
{
  return Function_2235a60();
}

//----- (02235908) --------------------------------------------------------
int Function_2235908()
{
  return Function_2235a94();
}

//----- (02235910) --------------------------------------------------------
int Function_2235910()
{
  return Function_2235b14();
}

//----- (02235918) --------------------------------------------------------
void Function_2235918()
{
  ;
}

//----- (0223591C) --------------------------------------------------------
void Function_223591c()
{
  ;
}

//----- (02235920) --------------------------------------------------------
int __fastcall Function_2235920(uint *a1, int a2, int a3)
{
  uint *v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Function_2007130(a3, 0x1Eu, 0, 0, 256, a2);
  Function_201975c(0, 0);
  return Function_20070e8(v4, 0x1Du, v3, 0, 0, 0, 0, v5);
}

//----- (02235960) --------------------------------------------------------
int __fastcall Function_2235960(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  *(uint *)(a1 + 316) = Function_2009a4c(*(uint *)(a1 + 300), a3, 0x25u, 0, 50, 1, a2);
  *(uint *)(v4 + 320) = Function_2009b04(*(uint *)(v4 + 304), v5, 0x24u, 0, 50, 1, 1, v3);
  *(uint *)(v4 + 324) = Function_2009bc4(*(uint *)(v4 + 308), v5, 0x26u, 0, 50, 2u, v3);
  *(uint *)(v4 + 328) = Function_2009bc4(*(uint *)(v4 + 312), v5, 0x27u, 0, 50, 3u, v3);
  if ( Function_200a3dc(*(int **)(v4 + 316)) != 1 )
    ErrorHandler();
  if ( Function_200a640(*(int **)(v4 + 320)) != 1 )
    ErrorHandler();
  Function_2009d4c(*(int **)(v4 + 316));
  Function_2009d4c(*(int **)(v4 + 320));
  return Function_20093b4(
           v4 + 332,
           50,
           50,
           50,
           50,
           -1,
           -1,
           0,
           2,
           *(uint *)(v4 + 300),
           *(uint *)(v4 + 304),
           *(uint *)(v4 + 308),
           *(uint *)(v4 + 312),
           0,
           0);
}

//----- (02235A60) --------------------------------------------------------
int __fastcall Function_2235a60(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_200a4e4(*(int **)(a1 + 316));
  Function_200a6dc(*(int **)(v1 + 320));
  v2 = 0;
  do
  {
    result = Function_2009d68(*(int **)(v1 + 300), *(uint ***)(v1 + 316));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  return result;
}

//----- (02235A94) --------------------------------------------------------
int __fastcall Function_2235a94(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v6;
  int *v7;
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

  v18 = a4;
  v4 = a1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v6 = *a1;
  v7 = a1 + 83;
  v16 = 1;
  v15 = 0;
  v11 = 4096;
  v12 = 4096;
  v17 = a2;
  a1[92] = Function_2021aa0((uint **)&v6);
  v4[93] = Function_2021aa0((uint **)&v6);
  Function_2021cac(v4[92], 0);
  Function_2021cac(v4[93], 0);
  Function_2021cc8(v4[92], 1);
  return Function_2021d6c(v4[93], 1u);
}

//----- (02235B14) --------------------------------------------------------
int __fastcall Function_2235b14(int a1)
{
  int v1;

  v1 = a1;
  Function_2021bd4(*(uint *)(a1 + 368));
  return Function_2021bd4(*(uint *)(v1 + 372));
}

//----- (02235B30) --------------------------------------------------------
uint __fastcall Function_2235b30(int a1)
{
  int v1;
  short v3;
  short v4;
  int v5;
  int v6;

  v1 = a1;
  Function_2235d08(a1, &v3);
  v3 += 8;
  v4 += 32;
  v5 = v3 << 12;
  v6 = v4 << 12;
  Function_2021c50(*(uint **)(v1 + 388), &v5);
  return Function_2021cac(*(uint *)(v1 + 388), 1);
}

//----- (02235B78) --------------------------------------------------------
uint __fastcall Function_2235b78(int a1)
{
  return Function_2021cac(*(uint *)(a1 + 388), 0);
}

//----- (02235B88) --------------------------------------------------------
int Function_2235b88()
{
  return Function_2235b8a();
}

//----- (02235B8A) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02235BD8) --------------------------------------------------------
uint __fastcall Function_2235bd8(int a1)
{
  return Function_2021cac(*(uint *)(a1 + 392), 0);
}

//----- (02235BE8) --------------------------------------------------------
BOOL __fastcall Function_2235be8(int a1)
{
  int v1;
  uint *v2;
  int v4;
  int v5;

  v1 = a1;
  v2 = *(uint **)(a1 + 1740);
  if ( !v2 )
    return 0;
  v4 = ((int (__fastcall *)(uint))dword_222C0E4[0])(*v2);
  v5 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(**(uint **)(v1 + 1740), 6);
  return ((int (__fastcall *)(uint, uint, uint))dword_222BDE4[0])(
           *(uint *)(v1 + 1764),
           ((short)v4 + ((uint)((short)v4 >> 3) >> 28)) << 12 >> 16,
           (SHIWORD(v4) + ((uint)(SHIWORD(v4) >> 3) >> 28)) << 12 >> 16) == 15
      && v5 == 1;
}

//----- (02235C64) --------------------------------------------------------
uint __fastcall Function_2235c64(int a1, ushort *a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  uint v6;
  int v7;
  uint result;
  ushort *v9;
  uint v10;
  int v11;
  int v12;

  v3 = a1;
  v4 = a3 & 7;
  v9 = a2;
  v5 = a3 >> 3;
  v6 = ((int (__fastcall *)(uint))dword_222BD48)(*(uint *)(a1 + 1764));
  v10 = ((int (__fastcall *)(uint))dword_222BD4C)(*(uint *)(v3 + 1764));
  v11 = 0;
  if ( !v10 )
    return ErrorHandler();
  v12 = v4 + 7;
  while ( 1 )
  {
    v7 = 0;
    if ( v6 )
      break;
LABEL_8:
    if ( ++v11 >= v10 )
      return ErrorHandler();
  }
  while ( ((int (__fastcall *)(uint, uint, uint))dword_222BDE4[0])(
            *(uint *)(v3 + 1764),
            (ushort)v7,
            (ushort)v11) != v12
       || ((int (__fastcall *)(uint, uint, int))dword_222BDE4[0])(
            *(uint *)(v3 + 1764),
            (ushort)v7,
            (v11 + 1) & 0xFFFF) != v5 + 3 )
  {
    if ( ++v7 >= v6 )
      goto LABEL_8;
  }
  *v9 = 16 * v7;
  result = (uint)v9;
  v9[1] = 16 * v11;
  return result;
}

//----- (02235D08) --------------------------------------------------------
uint __fastcall Function_2235d08(int a1, ushort *a2)
{
  int v2;
  uint v3;
  int v4;
  uint result;
  ushort *v6;
  uint v7;
  int v8;

  v2 = a1;
  v6 = a2;
  v3 = ((int (__fastcall *)(uint))dword_222BD48)(*(uint *)(a1 + 1764));
  v7 = ((int (__fastcall *)(uint))dword_222BD4C)(*(uint *)(v2 + 1764));
  v8 = 0;
  if ( !v7 )
    return ErrorHandler();
  while ( 1 )
  {
    v4 = 0;
    if ( v3 )
      break;
LABEL_6:
    if ( ++v8 >= v7 )
      return ErrorHandler();
  }
  while ( ((int (__fastcall *)(uint, uint, uint))dword_222BDE4[0])(
            *(uint *)(v2 + 1764),
            (ushort)v4,
            (ushort)v8) != 15 )
  {
    if ( ++v4 >= v3 )
      goto LABEL_6;
  }
  *v6 = 16 * v4;
  result = (uint)v6;
  v6[1] = 16 * v8;
  return result;
}

//----- (02235D7C) --------------------------------------------------------
int __fastcall Function_2235d7c(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = a1;
  do
  {
    if ( !*(uint *)(v2 + 396) )
      return a1 + 396 + 28 * v1;
    ++v1;
    v2 += 28;
  }
  while ( v1 < 48 );
  ErrorHandler();
  return 0;
}

//----- (02235DAC) --------------------------------------------------------
int __fastcall Function_2235dac(int a1, uint *a2, int a3)
{
  uint *v3;
  int v4;
  int v5;
  int result;

  v3 = a2;
  v4 = *(uint *)(a1 + 4);
  v5 = a3;
  result = ((int (__fastcall *)(uint, uint))dword_222CE44[0])(*(uint *)(a1 + 1772), *a2);
  v3[1] = result;
  if ( !v5 )
  {
    ((void (__fastcall *)(uint, uint))dword_222CFA4)(v3[1], 0);
    ((void (__fastcall *)(uint))dword_222CFA8[0])(v3[1]);
    result = ((int (__fastcall *)(uint, uint))dword_222D008[0])(v3[1], 0);
  }
  return result;
}

//----- (02235DE4) --------------------------------------------------------
int __fastcall Function_2235de4(int a1, int *a2, short *a3, short a4, short a5, uchar a6, short a7)
{
  int *v7;
  int result;
  short v9;
  short v10;
  short v11;
  short v12;
  short v13;
  short v14;

  v7 = a2;
  v9 = *a3;
  v10 = a3[1];
  v11 = a4;
  v12 = a7;
  v13 = a6;
  v14 = a5;
  result = ((int (__fastcall *)(uint, short *))dword_222BEC0[0])(*(uint *)(a1 + 1768), &v9);
  *v7 = result;
  return result;
}

//----- (02235E1C) --------------------------------------------------------
int __fastcall Function_2235e1c(int a1)
{
  int result;

  switch ( (uchar)*(ushort *)(a1 + 12) )
  {
    case 0u:
    case 3u:
    case 4u:
      result = 1;
      break;
    case 1u:
    case 2u:
    case 5u:
      result = 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02235E48) --------------------------------------------------------
int __fastcall Function_2235e48(int a1, int a2)
{
  *(uint *)(a2 + 16) = Function_2236044;
  *(uint *)(a2 + 24) = Function_2235ef4;
  *(ushort *)(a2 + 12) = 0;
  return Function_2236250(a1, 0, a2);
}

//----- (02235E68) --------------------------------------------------------
int __fastcall Function_2235e68(int a1, int a2)
{
  int result;

  *(uint *)(a2 + 16) = Function_2236158;
  *(uint *)(a2 + 24) = Function_2235ef8;
  *(ushort *)(a2 + 8) = 45;
  result = 1;
  *(ushort *)(a2 + 12) = 1;
  return result;
}

//----- (02235E84) --------------------------------------------------------
int __fastcall Function_2235e84(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  *(uint *)(a2 + 16) = Function_22361c8;
  *(uint *)(a2 + 24) = Function_2235ef4;
  *(ushort *)(a2 + 8) = (Function_201d35c() & 0x3FF) + 256;
  *(ushort *)(v3 + 12) = 3;
  Function_2236250(v2, 0, v3);
  return ((int (__fastcall *)(uint, int))dword_222CFA4)(*(uint *)(v3 + 4), 1);
}

//----- (02235EC8) --------------------------------------------------------
int __fastcall Function_2235ec8(int a1, int a2)
{
  int v2;

  v2 = a2;
  *(uint *)(a2 + 16) = Function_2236214;
  *(uint *)(a2 + 24) = Function_2235f94;
  *(ushort *)(a2 + 8) = 28;
  *(ushort *)(a2 + 12) = 4;
  Function_2236250(a1, 4, a2);
  return ((int (__fastcall *)(uint, uint))dword_222CFA4)(*(uint *)(v2 + 4), 0);
}

//----- (02235EF4) --------------------------------------------------------
void Function_2235ef4()
{
  ;
}

//----- (02235EF8) --------------------------------------------------------
int __fastcall Function_2235ef8(int a1, uint *a2)
{
  uint *v2;
  short v3;
  int v4;
  int v5;
  short *v6;
  int v7;
  short *v8;
  short v10;
  short v11;
  short v12;
  short v13;

  v2 = a2;
  ((void (__fastcall *)(uint))dword_222CFB4[0])(a2[1]);
  if ( !((int (__fastcall *)(uint))dword_222CFFC[0])(v2[1]) )
    ((void (__fastcall *)(uint, int))dword_222D008[0])(v2[1], 1);
  v12 = ((int (__fastcall *)(uint, uint))dword_222BF90[0])(*v2, 0);
  v3 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v2, 1);
  v13 = v3;
  v10 = v12;
  v11 = v3;
  v4 = Function_201d15c(*((ushort *)v2 + 4));
  v13 += (int)((ll_mul(v4, -786432LL) + 2048) >> 12) >> 12;
  v5 = v2[1];
  v6 = &v10 - 2;
  *v6 = v12;
  v6[1] = v13;
  ((void (__fastcall *)(int, uint))dword_222CFE0[0])(v5, *((uint *)&v10 - 1));
  v7 = v2[1];
  v8 = &v10 - 2;
  *v8 = v10;
  v8[1] = v11;
  return ((int (__fastcall *)(int, uint))dword_222D060[0])(v7, *((uint *)&v10 - 1));
}

//----- (02235F94) --------------------------------------------------------
int __fastcall Function_2235f94(int a1, uint *a2)
{
  uint *v2;
  short v3;
  int v4;
  short v5;
  ushort v6;
  int v7;
  short *v8;
  int v9;
  short *v10;
  short v12;
  short v13;
  short v14;
  short v15;

  v2 = a2;
  v14 = ((int (__fastcall *)(uint, uint))dword_222BF90[0])(*a2, 0);
  v3 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v2, 1);
  v15 = v3;
  v12 = v14;
  v13 = v3;
  v4 = (short)(*((ushort *)v2 + 4) - 16);
  if ( v4 > 0 )
  {
    s32_div_f(v4, 6);
    v6 = s32_div_f(180 * v5, 6);
    v15 -= (int)((((ll)(int)Function_201d15c(v6) << 14) + 2048) >> 12) >> 12;
  }
  v7 = v2[1];
  v8 = &v12 - 2;
  *v8 = v14;
  v8[1] = v15;
  ((void (__fastcall *)(int, uint))dword_222CFE0[0])(v7, *((uint *)&v12 - 1));
  v9 = v2[1];
  v10 = &v12 - 2;
  *v10 = v12;
  v10[1] = v13;
  ((void (__fastcall *)(int, uint))dword_222D060[0])(v9, *((uint *)&v12 - 1));
  return ((int (__fastcall *)(uint, int))dword_222D020[0])(v2[1], 1);
}

//----- (02236044) --------------------------------------------------------
int __fastcall Function_2236044(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  uint *v9;

  v2 = a2;
  v3 = a1;
  v4 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*a2, 6);
  v5 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v2, 4);
  if ( ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v2, 5) )
    return 0;
  if ( dword_21BF6C4 & 1 )
  {
    v7 = Function_22357a8(v3, v2);
    v9 = (uint *)v7;
    if ( v7 )
    {
      if ( Function_2235e1c(v7) == 1 )
        *((uchar *)v2 + 10) = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v9, 4);
      else
        *((uchar *)v2 + 10) = 0;
    }
    else
    {
      *((uchar *)v2 + 10) = 0;
    }
  }
  if ( *(uint *)(v3 + 12) == 1 )
    return 0;
  v8 = 2;
  if ( dword_21BF6C0 & 2 )
    v8 = 3;
  if ( dword_21BF6C0 & 0x40 )
  {
    if ( v4 )
      Function_2236230(v3, 1, 0, v5);
    else
      Function_2236230(v3, v8, 0, v5);
  }
  else if ( dword_21BF6C0 & 0x80 )
  {
    if ( v4 == 1 )
      Function_2236230(v3, v8, 1, v5);
    else
      Function_2236230(v3, 1, 1, v5);
  }
  else if ( dword_21BF6C0 & 0x20 )
  {
    if ( v4 == 2 )
      Function_2236230(v3, v8, 2, v5);
    else
      Function_2236230(v3, 1, 2, v5);
  }
  else if ( dword_21BF6C0 & 0x10 )
  {
    if ( v4 == 3 )
      Function_2236230(v3, v8, 3, v5);
    else
      Function_2236230(v3, 1, 3, v5);
  }
  return 0;
}

//----- (02236158) --------------------------------------------------------
int __fastcall Function_2236158(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( (short)--*(ushort *)(a2 + 8) <= 0 )
  {
    ((void (__fastcall *)(uint))dword_222CFC0[0])(*(uint *)(a2 + 4));
    ((void (__fastcall *)(uint, int))dword_222CFA4)(*(uint *)(v3 + 4), 1);
    v4 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(**(uint **)(v2 + 1740), 4);
    if ( ((int (__fastcall *)(uint, int))dword_222BF90[0])(*(uint *)v3, 4) == v4 )
      Function_2235e48(v2, v3);
    else
      Function_223628c(v2, v3, *(uchar *)(v3 + 11));
  }
  return 0;
}

//----- (022361B0) --------------------------------------------------------
BOOL __fastcall Function_22361b0(int a1, int a2)
{
  return (short)++*(ushort *)(a2 + 8) > 45;
}

//----- (022361C8) --------------------------------------------------------
int __fastcall Function_22361c8(int a1, int a2)
{
  int v2;
  uint *v3;
  uint v4;
  int v5;

  v2 = a1;
  v3 = (uint *)a2;
  if ( (short)--*(ushort *)(a2 + 8) <= 0 )
  {
    *(ushort *)(a2 + 8) = (Function_201d35c() & 0x3FF) + 256;
    v4 = Function_201d35c() & 3;
    v5 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v3, 4);
    Function_2236230(v2, 0, v4, v5);
  }
  return 0;
}

//----- (02236214) --------------------------------------------------------
int __fastcall Function_2236214(int a1, int a2)
{
  if ( (short)--*(ushort *)(a2 + 8) < 0 )
    *(ushort *)(a2 + 8) = 28;
  return 0;
}

//----- (0223622C) --------------------------------------------------------
int Function_223622c()
{
  return 0;
}

//----- (02236230) --------------------------------------------------------
int __fastcall Function_2236230(int a1, short a2, char a3, int a4)
{
  short v5;
  char v6;
  char v7;
  int v8;

  v8 = a4;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  return ((int (__fastcall *)(uint, short *))dword_222D894[0])(*(uint *)(a1 + 1784), &v5);
}

//----- (02236250) --------------------------------------------------------
int __fastcall Function_2236250(int a1, short a2, uint *a3)
{
  uint *v3;
  int v4;
  short v5;
  char v6;
  int v7;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*a3, 6);
  v7 = ((int (__fastcall *)(uint, int))dword_222BF90[0])(*v3, 4);
  return Function_2236230(v4, v5, v6, v7);
}

//----- (02236278) --------------------------------------------------------
BOOL __fastcall Function_2236278(int a1)
{
  return *(uint *)(a1 + 24) != (uint)Function_2235ef8;
}

//----- (0223628C) --------------------------------------------------------
uint __fastcall Function_223628c(int a1, int a2, int a3)
{
  int v3;
  char v4;
  uint result;

  v3 = a2;
  v4 = a3;
  if ( a3 )
  {
    if ( a3 == 1 )
      result = Function_2235ec8(a1, a2);
    else
      result = ErrorHandler();
  }
  else
  {
    result = Function_2235e84(a1, a2);
  }
  *(uchar *)(v3 + 11) = v4;
  return result;
}

//----- (022362B0) --------------------------------------------------------
int __fastcall Function_22362b0(int a1, uchar *a2, int a3)
{
  uchar *v3;
  uchar *v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a2;
  v5 = 20;
  do
  {
    *v4++ = 0;
    --v5;
  }
  while ( v5 );
  *(uint *)v3 = Function_20071ec(a3, 0x1Fu, (uint *)v3 + 1, *(uint *)(a1 + 4));
  v3[8] = 15;
  v3[9] = 0;
  result = *((ushort *)&dword_2238BC8 + (uchar)v3[9]);
  *((ushort *)v3 + 5) = result;
  return result;
}

//----- (022362EC) --------------------------------------------------------
int __fastcall Function_22362ec(int a1, int *a2)
{
  int *v2;
  int v3;
  int result;

  v2 = a2;
  free(*a2);
  v3 = 20;
  result = 0;
  do
  {
    *(uchar *)v2 = 0;
    v2 = (int *)((char *)v2 + 1);
    --v3;
  }
  while ( v3 );
  return result;
}

//----- (02236304) --------------------------------------------------------
int __fastcall Function_2236304(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_2236318(a2);
  return Function_2236384(v2);
}

//----- (02236318) --------------------------------------------------------
int __fastcall Function_2236318(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  result = (short)--*(ushort *)(a1 + 10);
  if ( result <= 0 )
  {
    *(uchar *)(v1 + 9) = (*(uchar *)(v1 + 9) + 1 < 0)
                       + __ROR4__(
                           ((*(uchar *)(v1 + 9) + 1) << 31)
                         - (((uint)*(uchar *)(v1 + 9) + 1) >> 31),
                           31);
    *(ushort *)(v1 + 10) = *((ushort *)&dword_2238BC8 + *(uchar *)(v1 + 9));
    if ( *(uchar *)(v1 + 9) == 1 )
      v3 = 2;
    else
      v3 = 1;
    v4 = 0;
    do
    {
      result = 1 << v4;
      if ( (1 << v4) & *(uchar *)(v1 + 8) )
      {
        v5 = Function_2236410(v1, v3);
        result = Function_201dc68(15, 2 * (v4 + 1) + 224, v5, 2);
      }
      ++v4;
    }
    while ( v4 < 4 );
  }
  return result;
}

//----- (02236384) --------------------------------------------------------
int __fastcall Function_2236384(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;
  uint v6;
  int v7;
  int v8;

  v1 = a1;
  v2 = *(uchar *)(a1 + 13);
  result = 0;
  v4 = 0;
  v5 = 0;
  if ( HIBYTE(dword_2238BD0[v2 + 1]) == 1 )
  {
    if ( (short)--*(ushort *)(v1 + 14) <= 0 )
      v5 = 1;
  }
  else if ( *(uchar *)(v1 + 16) )
  {
    *(uchar *)(v1 + 16) = 0;
    v5 = 1;
  }
  if ( v5 )
  {
    v6 = (uchar)++*(uchar *)(v1 + 13);
    if ( v6 >= 8 )
      return Function_223641c(v1, 0);
    *(ushort *)(v1 + 14) = LOBYTE(dword_2238BD8[v6]);
    v7 = *(uchar *)(v1 + 13);
    v4 = BYTE2(dword_2238BD8[v7]);
    result = BYTE1(dword_2238BD8[v7]);
  }
  if ( result )
  {
    v8 = Function_2236410(v1, v4);
    result = Function_201dc68(15, 2 * (*(uchar *)(v1 + 12) + 1) + 224, v8, 2);
  }
  return result;
}

//----- (02236410) --------------------------------------------------------
int __fastcall Function_2236410(int a1, int a2)
{
  return *(uint *)(*(uint *)(a1 + 4) + 12) + 2 * (a2 + 1);
}

//----- (0223641C) --------------------------------------------------------
int __fastcall Function_223641c(int result)
{
  *(uchar *)(result + 8) |= 1 << *(uchar *)(result + 12);
  *(uchar *)(result + 12) = 0;
  *(uchar *)(result + 13) = 0;
  *(ushort *)(result + 14) = 0;
  *(uchar *)(result + 16) = 0;
  return result;
}

//----- (02236438) --------------------------------------------------------
int __fastcall Function_2236438(int result)
{
  *(uchar *)(result + 16) = 1;
  return result;
}

//----- (02236440) --------------------------------------------------------
int __fastcall Function_2236440(int a1, char a2)
{
  int v2;
  char v3;

  v2 = a1;
  v3 = a2;
  if ( *(uchar *)(a1 + 13) )
    Function_223641c(a1);
  *(uchar *)(v2 + 8) ^= 1 << v3;
  *(uchar *)(v2 + 12) = v3;
  return Function_2236438(v2);
}

//----- (02236464) --------------------------------------------------------
int __fastcall Function_2236464(int result)
{
  if ( *(uchar *)(result + 13) )
    result = Function_2236438(result);
  return result;
}

//----- (02236474) --------------------------------------------------------
int __fastcall Function_2236474(int a1)
{
  return dword_2238BF8[a1];
}

//----- (02236480) --------------------------------------------------------
int __fastcall Function_2236480(int a1)
{
  return (int)*(&off_2239E4C + a1);
}

//----- (0223648C) --------------------------------------------------------
int __fastcall Function_65_223648c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v1 = a1;
  v2 = LoadPtrToOverWorldDataIn18(a1);
  LoadOverlay(63, 2, v3, v4);
  if ( Function_20389b8() != 1 )
    ErrorHandler();
  Function_2017fc8(3, 96, 98304);
  Function_2017fc8(3, 97, 40960);
  v5 = MallocSomeDataAndStorePtrInOverlayData1c(v1, 552, 0x60u);
  MI_CpuFill8((ushort *)v5, 0, 0x228u);
  MI_CpuFill8((ushort *)(v5 + 28), 1, 4u);
  MI_CpuFill8((ushort *)(v5 + 32), 1, 4u);
  Function_201dbec(16, 0x60u);
  v6 = Function_20388e8();
  *(uint *)v5 = v6;
  *(uchar *)(v6 + 33) = *(uchar *)(v6 + 34);
  *(uchar *)(v5 + 4) = Function_2236794(v5);
  *(uchar *)(v5 + 6) = -1;
  Function_209c390(v5);
  Function_223760c(v5);
  Function_22367a8(v5, v2, 96);
  SetMainLoopFunctionCall((int)Function_2236780, v5);
  Function_2039734();
  result = 1;
  *(uchar *)(v5 + 39) = 1;
  return result;
}

//----- (02236548) --------------------------------------------------------
int __fastcall Function_65_2236548(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  v5 = LoadPtrToOverWorldDataIn18(v2);
  v6 = *v3;
  if ( (uint)*v3 <= 4 )
    JUMPOUT(__CS__, *((short *)&off_2236572 + v6) + 35874164);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_200f174(3u, 1, 1, 0, 6, 1, 96);
      ++*v3;
      goto LABEL_22;
    case 1:
      if ( Function_200f2ac() )
        ++*v3;
      goto LABEL_22;
    case 2:
      if ( *(uchar *)(v4 + 39) )
        Function_2237370(v4, v5, 96);
      if ( *(uchar *)(v4 + 4) )
      {
        if ( Function_2032aac() == 1 )
        {
          Function_2237970(v4);
          Function_2032ce8();
          Function_223782c(v4);
        }
        v7 = ((int (__fastcall *)(int, int, int))*(&off_2239B80 + *(uchar *)(v4 + 5)))(v4, v5, 96);
      }
      else
      {
        v7 = ((int (__fastcall *)(int, int, int))*(&off_2239B08 + *(uchar *)(v4 + 5)))(v4, v5, 96);
        if ( Function_2032aac() == 1 )
          Function_2237860(v4, 96);
      }
      if ( Function_2237660(v4) )
        Function_2237034(v4, v5, 96);
      Function_22377a4(v4);
      if ( v7 == 1 )
      {
        *(uchar *)(v5 + 3) = *(uchar *)(v4 + 7);
        *(uchar *)(v5 + 4) = *(uchar *)(v4 + 17);
        ++*v3;
      }
      goto LABEL_22;
    case 3:
      Function_200f174(3u, 0, 0, 0, 6, 1, 96);
      ++*v3;
      goto LABEL_22;
    case 4:
      if ( !Function_200f2ac() )
        goto LABEL_22;
      result = 1;
      break;
    default:
LABEL_22:
      Function_22372b0(v4 + 48);
      Function_20219f8(*(uint *)(v4 + 72));
      result = 0;
      break;
  }
  return result;
}

//----- (0223668C) --------------------------------------------------------
int __fastcall Function_65_223668c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  LoadPtrToOverWorldDataIn18(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_223761c(v2);
  Function_22377e8(v2);
  Function_2237504(v2);
  Function_22367f8(v2, 96);
  Function_201dc3c();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(97);
  Function_201807c(96);
  UnloadOverlay(63, v3, v4, v5);
  return 1;
}

//----- (022366E4) --------------------------------------------------------
int __fastcall Function_65_22366e4(int a1, ushort *a2)
{
  int v2;
  int result;
  ushort *v4;
  int v5;
  bool v6;

  v2 = a1;
  result = *(uchar *)(a1 + 4);
  v4 = a2;
  if ( !result )
  {
    v5 = *a2;
    v6 = v5 == Function_203608c();
    result = *((uint *)v4 + 1);
    if ( v6 )
    {
      if ( result )
      {
        if ( result == 1 )
        {
          result = 1;
          *(uchar *)(v2 + 19) = 1;
        }
        else if ( result == 2 )
        {
          result = 3;
          *(uchar *)(v2 + 19) = 3;
        }
      }
      else
      {
        result = 2;
        *(uchar *)(v2 + 19) = 2;
      }
    }
    else
    {
      switch ( result )
      {
        case 0:
          goto LABEL_20;
        case 1:
          result = v2 + v5 + 40;
          *(uchar *)result = 1;
          return result;
        case 2:
LABEL_20:
          result = Function_2032aac();
          if ( result == 1 )
            result = Function_2032d98(*v4);
          break;
      }
    }
  }
  return result;
}

//----- (02236744) --------------------------------------------------------
int __fastcall Function_2236744(int result)
{
  if ( !*(uchar *)(result + 44) )
  {
    *(uchar *)(result + 44) = 1;
    result = Function_20364f0(13);
  }
  return result;
}

//----- (02236760) --------------------------------------------------------
int __fastcall Function_2236760(int result, uchar *a2)
{
  uchar *v2;

  if ( *(uchar *)(result + 4) != 1 )
  {
    *(uchar *)(result + 32) = *a2;
    v2 = (uchar *)(result + 32);
    v2[1] = a2[1];
    v2[2] = a2[2];
    result = (uchar)a2[3];
    v2[3] = result;
  }
  return result;
}

//----- (02236780) --------------------------------------------------------
int __fastcall Function_2236780(int a1)
{
  Function_201c2b8(*(uint *)(a1 + 48));
  Function_201dcac();
  return Function_200a858();
}

//----- (02236794) --------------------------------------------------------
BOOL Function_2236794()
{
  return Function_203608c() == 0;
}

//----- (022367A8) --------------------------------------------------------
int __fastcall Function_22367a8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_2236820();
  Function_2236840(v3 + 48, v5);
  Function_2236a28(v3 + 48, v4, v5);
  Function_2236c10(v3 + 48, v4, v5);
  Function_2236c7c(v3 + 48, v4, v5);
  Function_2237034(v3, v4, v5);
  return Function_2236d50(v3 + 48, v5);
}

//----- (022367F8) --------------------------------------------------------
int __fastcall Function_22367f8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  Function_2236e04(a1 + 48);
  Function_2236c5c(v2 + 48);
  Function_2236b90(v2 + 48, v3);
  return Function_22369f0(v2 + 48);
}

//----- (02236820) --------------------------------------------------------
char *Function_2236820()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_2239AB0;
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

//----- (02236840) --------------------------------------------------------
uint __fastcall Function_2236840(int *a1, uint a2, int a3, int a4)
{
  uint v4;
  int *v5;
  int v6;
  int v7;
  int *v8;
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

  v35 = a4;
  v4 = a2;
  v5 = a1;
  *a1 = Function_2018340(a2);
  v31 = 1;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  SetGraphicsModes(&v31);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 1835009;
  v29 = 512;
  v30 = 0;
  Function_20183c4((uint *)*v5, 0, &v24, 0);
  Function_2019690(0, 32, 0, v4);
  Function_2019ebc((uint *)*v5, 0);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 68812801;
  v22 = 256;
  v23 = 0;
  Function_20183c4((uint *)*v5, 1u, &v17, 0);
  Function_2019690(1u, 32, 0, v4);
  Function_2019ebc((uint *)*v5, 1u);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 35323905;
  v15 = 1;
  v16 = 0;
  Function_20183c4((uint *)*v5, 2u, &v10, 0);
  Function_2019690(2u, 32, 0, v4);
  Function_2019ebc((uint *)*v5, 2u);
  Function_201ff0c(8u, 0);
  Function_201ff0c(0x10u, 1);
  Function_201ff74(1u, 0);
  Function_201ff74(2u, 0);
  Function_201ff74(4u, 0);
  Function_201ff74(8u, 0);
  Function_201ff74(0x10u, 0);
  v8 = LoadFromNARC_8(92, v4, v6, v7);
  Function_2007130((int)v8, 0xDu, 0, 160, 32, v4);
  Function_20070e8((int)v8, 0xCu, (uint *)*v5, 2u, 0, 1536, 0, v4);
  v5[120] = Function_20071d0((int)v8, 0xEu, 0, v5 + 121, v4);
  v5[123] = Function_20071ec((int)v8, 0x2Cu, v5 + 124, v4);
  Function_20070e8((int)v8, 0x2Du, (uint *)*v5, 0, 0, 0, 0, v4);
  Function_200710c((int)v8, 0x2Eu, (uint *)*v5, 0, 0, 0, 0, v4);
  Function_22372ec(v5, 0);
  *((ushort *)v5 + 250) = 3;
  *((ushort *)v5 + 251) = 1;
  return Call_FS_CloseFile(v8);
}

//----- (022369F0) --------------------------------------------------------
uint __fastcall Function_22369f0(int *a1)
{
  int *v1;

  v1 = a1;
  free(a1[120]);
  free(v1[123]);
  Function_2019044(*v1, 2);
  Function_2019044(*v1, 1);
  Function_2019044(*v1, 0);
  return free(*v1);
}

//----- (02236A28) --------------------------------------------------------
int __fastcall Function_2236a28(uint **a1, int a2, int a3)
{
  uint **v3;
  int v4;
  int v5;
  ushort *v6;
  uchar v7;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  LoadFromNARC_PlFont2(0, 32, a3);
  v6 = (ushort *)LoadPlayerDataAdress(*(uint *)(v4 + 8));
  v7 = Function_2027b50(v6);
  Function_200dd0c(*v3, 1u, 1, 2, v7, v5);
  Function_200daa4(*v3, 1u, 31, 3, 0, v5);
  Function_200daa4(*v3, 2u, 48, 4, 0, v5);
  Function_201a7e8(*v3, (int)(v3 + 99), 1, 2, 19, 0x1Bu, 4u, 1, 40);
  Function_201ada4_ClearTextBox((int)(v3 + 99), 15);
  Function_200e060((int)(v3 + 99), 1, 1, 2u);
  Function_201a7e8(*v3, (int)(v3 + 103), 1, 1, 1, 0x1Bu, 2u, 1, 148);
  Function_201ada4_ClearTextBox((int)(v3 + 103), 15);
  Function_200dc48((int)(v3 + 103), 1, 31, 3u);
  Function_201a7e8(*v3, (int)(v3 + 107), 1, 2, 16, 0x1Cu, 2u, 1, 202);
  Function_201ada4_ClearTextBox((int)(v3 + 107), 0);
  Function_201a7e8(*v3, (int)(v3 + 111), 1, 1, 5, 0x14u, 8u, 1, 258);
  Function_201ada4_ClearTextBox((int)(v3 + 111), 15);
  Function_200dc48((int)(v3 + 111), 1, 31, 3u);
  Function_201a7e8(*v3, (int)(v3 + 115), 1, 23, 5, 7u, 5u, 1, 418);
  return Function_201ada4_ClearTextBox((int)(v3 + 115), 15);
}

//----- (02236B90) --------------------------------------------------------
int __fastcall Function_2236b90(int a1, uint a2)
{
  int v2;
  uint v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_2236f38();
  Function_200e084(v2 + 396, 0);
  Function_201a8fc(v2 + 396);
  Function_200dc9c(v2 + 412, 0);
  Function_201a8fc(v2 + 412);
  Function_201a8fc(v2 + 428);
  Function_200dc9c(v2 + 444, 0);
  Function_201a8fc(v2 + 444);
  Function_200dc9c(v2 + 460, 0);
  Function_201a8fc(v2 + 460);
  result = *(uint *)(v2 + 476);
  if ( result )
    result = Function_2002154(result, v3);
  return result;
}

//----- (02236C10) --------------------------------------------------------
int __fastcall Function_2236c10(int a1, int a2, uint a3)
{
  uint v3;
  int v4;
  int v5;
  ushort *v6;
  int result;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  *(uint *)(a1 + 4) = Function_200b358(a3);
  *(uint *)(v4 + 8) = LoadFromMsgNARC(0, 26, 674, v3);
  *(uint *)(v4 + 12) = Function_2023790(256, v3);
  *(uint *)(v4 + 16) = Function_2023790(256, v3);
  *(uchar *)(v4 + 20) = -1;
  v6 = (ushort *)LoadPlayerDataAdress(*(uint *)(v5 + 8));
  result = Function_2027ac0(v6);
  *(ushort *)(v4 + 22) = result;
  return result;
}

//----- (02236C5C) --------------------------------------------------------
uint __fastcall Function_2236c5c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  Function_20237bc_FreeMsg(*(uint *)(a1 + 16), a2);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 12), v3);
  Function_200b190(*(ushort **)(v2 + 8));
  return Function_200b3f0(*(uint **)(v2 + 4), v4);
}

//----- (02236C7C) --------------------------------------------------------
int __fastcall Function_2236c7c(int a1, uchar *a2)
{
  uchar *v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a1;
  switch ( *a2 )
  {
    case 1u:
      Function_200c0b0(*(uint *)(a1 + 4), 0, 0);
      break;
    case 2u:
      Function_200c0b0(*(uint *)(a1 + 4), 0, 1u);
      break;
    case 3u:
      Function_200c0b0(*(uint *)(a1 + 4), 0, 2u);
      break;
    default:
      break;
  }
  Function_200b1b8_CallMsgDecrypt(
    *(ushort ***)(v3 + 8),
    *((uchar *)&dword_2239E5C + *v2),
    *(ushort **)(v3 + 16));
  Function_200c388(*(uint **)(v3 + 4), *(uint *)(v3 + 12), *(uint *)(v3 + 16));
  v4 = *(uint *)(v3 + 12);
  Function_201d78c(v3 + 412, 0);
  Function_201a9a4(v3 + 412);
  Function_201a9a4(v3 + 444);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v3 + 8), 0x80u, *(ushort **)(v3 + 12));
  v5 = *(uint *)(v3 + 12);
  Function_201d78c(v3 + 428, 0);
  Function_201a9a4(v3 + 428);
  return Function_201a9a4(v3 + 396);
}

//----- (02236D50) --------------------------------------------------------
int __fastcall Function_2236d50(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  uint *v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a1;
  v3 = a2;
  Function_20a7944();
  Function_200a784(0, 126, 0, 31, 0, 0x7Eu, 0, 0x1Fu, v3);
  v10 = 4;
  v11 = 0x20000;
  v12 = 0x4000;
  v13 = v3;
  Function_201e88c(&v10, 2097168, 16);
  Function_201f834(4, v3);
  Function_201e994();
  Function_201f8e4();
  Function_200966c(1, 2097168, v4, v5);
  Function_2009704(1);
  v2[6] = Function_20095c4(4, (int)(v2 + 7), v3, v6);
  v7 = 0;
  v8 = v2;
  do
  {
    v8[81] = Function_2009714(4, v7, v3);
    v7 = (int *)((char *)v7 + 1);
    ++v8;
  }
  while ( (int)v7 < 4 );
  v2[85] = ((int (__fastcall *)(int, int))dword_222BE18[0])(4, v3);
  result = ((int (__fastcall *)(uint, uint, int, int, int))dword_222CCE4[0])(v2[6], 0, 4, 1, v3);
  v2[86] = result;
  return result;
}

//----- (02236E04) --------------------------------------------------------
int *__fastcall Function_2236e04(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  ((void (__fastcall *)(uint))byte_222CD9C)(*(uint *)(a1 + 344));
  ((void (__fastcall *)(uint))dword_222BE58[0])(*(uint *)(v1 + 340));
  Function_2021964(*(int **)(v1 + 24));
  v2 = 0;
  do
  {
    Function_2009754(*(int **)(v1 + 324));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 4 );
  Function_201e958();
  Function_201f8b4();
  return Function_200a878();
}

//----- (02236E44) --------------------------------------------------------
int __fastcall Function_2236e44(int a1, int a2, int a3)
{
  return Function_2236e50(a1, a2, a3, 0);
}

//----- (02236E50) --------------------------------------------------------
int __fastcall Function_2236e50(int a1, int a2, uint a3, char a4, uint a5)
{
  int v5;
  int v6;
  int v7;
  char v8;
  ushort *v9;
  int v10;
  int v11;
  int v12;
  ushort *v13;
  uchar v14;
  int result;
  uint v16;

  v5 = a1;
  v6 = *(uchar *)(a1 + 20);
  v7 = a2;
  v8 = a4;
  v16 = a3;
  if ( v6 != 255 && Function_201d724(v6) )
  {
    Call_RemoveTextInterpreterTaskFromTaskList(*(uchar *)(v5 + 20));
    *(uchar *)(v5 + 20) = -1;
  }
  Function_201ada4_ClearTextBox(v5 + 396, 15);
  v9 = (ushort *)Function_2023790(256, a5);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v5 + 8), v16, v9);
  Function_200c388(*(uint **)(v5 + 4), *(uint *)(v5 + 12), (int)v9);
  v10 = *(ushort *)(v5 + 22);
  v11 = *(uint *)(v5 + 12);
  *(uchar *)(v5 + 20) = Function_201d78c(v5 + 396, 1);
  Function_201a9a4(v5 + 396);
  Function_20237bc_FreeMsg((int)v9, v12);
  v13 = (ushort *)LoadPlayerDataAdress(*(uint *)(v7 + 8));
  v14 = Function_2027b50(v13);
  result = Function_200dd0c(*(uint **)v5, 1u, 1, 2, v14, a5);
  *(uchar *)(v5 + 21) = v8;
  return result;
}

//----- (02236EF8) --------------------------------------------------------
BOOL __fastcall Function_2236ef8(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 20);
  if ( v2 == 255 )
  {
    if ( *(uchar *)(v1 + 21) )
    {
      --*(uchar *)(v1 + 21);
      return 0;
    }
  }
  else if ( !Function_201d724(v2) && *(uchar *)(v1 + 20) != 255 )
  {
    *(uchar *)(v1 + 20) = -1;
  }
  return *(uchar *)(v1 + 20) == 255 && !*(uchar *)(v1 + 21);
}

//----- (02236F38) --------------------------------------------------------
int __fastcall Function_2236f38(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 20);
  if ( v2 != 255 )
  {
    if ( Function_201d724(v2) )
      Call_RemoveTextInterpreterTaskFromTaskList(*(uchar *)(v1 + 20));
    *(uchar *)(v1 + 20) = -1;
  }
  Function_201ada4_ClearTextBox(v1 + 396, 15);
  Function_201a9a4(v1 + 396);
  result = 0;
  *(uchar *)(v1 + 21) = 0;
  return result;
}

//----- (02236F70) --------------------------------------------------------
uint __fastcall Function_2236f70(int a1, int a2, int a3, uint a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;
  ushort *v8;
  int v9;
  int v10;
  int v11;

  v4 = a1;
  v5 = a4;
  v6 = a2;
  v7 = a3;
  v8 = (ushort *)Function_2023790(256, a4);
  v9 = Function_2023790(256, v5);
  Function_223726c(v4, v6, v7, 0, v5);
  Function_2237284(v4, v6, v7, 1, v5);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 8), 0x83u, v8);
  Function_200c388(*(uint **)(v4 + 4), v9, (int)v8);
  Function_201ada4_ClearTextBox(v4 + 460, 15);
  Function_201d78c(v4 + 460, 0);
  Function_200dc48(v4 + 460, 1, 31, 3u);
  Function_201a9a4(v4 + 460);
  Function_20237bc_FreeMsg((int)v8, v10);
  return Function_20237bc_FreeMsg(v9, v11);
}

//----- (02237018) --------------------------------------------------------
int __fastcall Function_2237018(int a1)
{
  int v1;

  v1 = a1;
  Function_200dc9c(a1 + 460, 1);
  return Function_201ad10(v1 + 460);
}

//----- (02237034) --------------------------------------------------------
int __fastcall Function_2237034(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v8 = a1;
  v3 = a2;
  v4 = a3;
  result = Function_2032aac();
  if ( result )
  {
    v6 = 0;
    v7 = v8 + 48;
    do
    {
      if ( v6 || Function_2032de0(0) != 1 )
      {
        if ( Function_2032e00(v6) == 1 )
          result = Function_223709c(v8, v7, v3, v6, v4);
        else
          result = Function_22371fc(v7, v3, v6, v4);
      }
      else
      {
        result = Function_223709c(v8, v7, v3, 0, v4);
      }
      ++v6;
    }
    while ( v6 < 4 );
  }
  return result;
}

//----- (0223709C) --------------------------------------------------------
uint __fastcall Function_223709c(int a1, int a2, int a3, int a4, uint a5)
{
  int v5;
  int v6;
  int v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;
  ushort *v15;

  v13 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v15 = (ushort *)Function_2023790(256, a5);
  v14 = Function_2023790(256, a5);
  Function_223726c(v5, v6, v7, 0, a5);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v5 + 8), 0x81u, v15);
  Function_200c388(*(uint **)(v5 + 4), v14, (int)v15);
  Function_201ae78(v5 + 444, 15, 0, 16 * v7 & 0xFFFF, 0xA0u, 0x10u);
  Function_201d78c(v5 + 444, 0);
  Function_2237284(v5, v6, v7, 0, a5);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v5 + 8), 0x82u, v15);
  Function_200c388(*(uint **)(v5 + 4), v14, (int)v15);
  Function_201d78c(v5 + 444, 0);
  Function_201a9a4(v5 + 444);
  if ( v7 == Function_203608c() )
  {
    if ( *(uchar *)(*(uint *)v13 + 33) )
      v8 = 2;
    else
      v8 = 1;
  }
  else if ( *(uchar *)(v13 + v7 + 32) )
  {
    v8 = 2;
  }
  else
  {
    v8 = 1;
  }
  v9 = 2 * v7 + 5;
  Function_20198e8(
    *(uint *)v5,
    2,
    18,
    (uchar)v9,
    2u,
    2u,
    *(uint *)(v5 + 484) + 12,
    2 * v8,
    0,
    (uint)**(ushort **)(v5 + 484) << 21 >> 24,
    (uint)*(ushort *)(*(uint *)(v5 + 484) + 2) << 21 >> 24);
  Function_2019e2c(*(uint *)v5, 2, 0x12u, (uchar)v9, 2u, 2u, 5u);
  Function_201c3c0(*(uint *)v5, 2);
  Function_20237bc_FreeMsg((int)v15, v10);
  return Function_20237bc_FreeMsg(v14, v11);
}

//----- (022371FC) --------------------------------------------------------
int __fastcall Function_22371fc(int *a1, int a2, int a3)
{
  int *v3;
  int v4;

  v3 = a1;
  v4 = a3;
  Function_201ae78((int)(a1 + 111), 15, 0, 16 * a3 & 0xFFFF, 0xA0u, 0x10u);
  Function_20198e8(
    *v3,
    2,
    18,
    (2 * v4 + 5) & 0xFF,
    2u,
    2u,
    v3[121] + 12,
    0,
    0,
    (uint)*(ushort *)v3[121] << 21 >> 24,
    (uint)*(ushort *)(v3[121] + 2) << 21 >> 24);
  Function_201c3c0(*v3, 2);
  return Function_201a9a4((int)(v3 + 111));
}

//----- (0223726C) --------------------------------------------------------
uint __fastcall Function_223726c(int a1, int a2, int a3, uint a4)
{
  int v4;
  uint v5;

  v4 = a1;
  v5 = a4;
  Function_2032ee8(a3);
  return Function_200b498(*(uint *)(v4 + 4), v5);
}

//----- (02237284) --------------------------------------------------------
uint __fastcall Function_2237284(int a1, int a2, int a3, uint a4)
{
  int v4;
  uint v5;
  int v6;
  int v7;

  v4 = a1;
  v5 = a4;
  v6 = Function_2032ee8(a3);
  v7 = GetSecretTrainerID(v6);
  return Function_200b60c(*(uint *)(v4 + 4), v5, v7, 5, 2, 1);
}

//----- (022372B0) --------------------------------------------------------
int __fastcall Function_22372b0(int a1)
{
  int v1;
  int v2;
  int result;
  short v4;

  v1 = a1;
  v2 = *(short *)(a1 + 500);
  if ( v2 > 0 )
  {
    result = v2 - 1;
    *(ushort *)(v1 + 500) = v2 - 1;
  }
  else
  {
    Function_22372ec(a1, *(short *)(a1 + 502));
    *(ushort *)(v1 + 500) = 3;
    s32_div_f(*(short *)(v1 + 502) + 1, 18);
    result = 502;
    *(ushort *)(v1 + 502) = v4;
  }
  return result;
}

//----- (022372EC) --------------------------------------------------------
uint __fastcall Function_22372ec(int a1, int a2)
{
  uint result;

  result = Function_201dc68(
             15,
             0,
             *(uint *)(*(uint *)(a1 + 496) + 12) + 32 * *((uchar *)dword_2239C04 + a2),
             32);
  if ( !result )
    result = ErrorHandler();
  return result;
}

//----- (0223731C) --------------------------------------------------------
int __fastcall Function_223731c(uint *a1)
{
  uint *v1;

  v1 = a1;
  *(uchar *)(*a1 + 34) = 1 - *(uchar *)(*a1 + 34);
  *(uchar *)(*a1 + 33) = *(uchar *)(*a1 + 34);
  ((void (__fastcall *)(uint))dword_21D2584[0])(*(uchar *)(*a1 + 33));
  ((void (__fastcall *)(uint, int))byte_21D222C)(*v1, 36);
  if ( *(uchar *)(*v1 + 33) == 1 )
    Function_2237520(v1);
  else
    Function_2237534(v1);
  return *(uchar *)(*v1 + 34);
}

//----- (02237370) --------------------------------------------------------
uint __fastcall Function_2237370(int a1)
{
  int v1;
  bool v2;
  uint result;
  int v4;
  int v5;
  int v6;
  BOOL v7;

  v1 = a1;
  v2 = *(uchar *)(a1 + 4) == 0;
  result = *(uchar *)(a1 + 5);
  if ( v2 )
  {
    switch ( result )
    {
      case 0xFu:
        return result;
      case 0x10u:
        return result;
      case 0x11u:
        return result;
    }
    result = (result + 250) & 0xFF;
    if ( result <= 1 )
      return result;
  }
  else
  {
    result = (result + 229) & 0xFF;
    if ( result <= 2 )
      return result;
    if ( Function_20380e4() <= 2 && Function_2237548(v1) <= 1 )
    {
      result = Function_2237450(v1);
      if ( !result )
        return result;
    }
  }
  v4 = Function_2237a54(v1);
  v5 = Function_2237628(v1);
  v6 = Function_2237548(v1);
  v7 = v6 > Function_2035e18();
  if ( Function_20380e4() >= 3
    || Function_20383e8()
    || Function_2038284()
    || !Function_2035d78(0)
    || (result = Function_2237450(v1)) == 0
    || v7 == 1
    || v4 == 1
    || v5 == 1 )
  {
    if ( *(uchar *)(v1 + 4) )
    {
      result = 27;
      *(uchar *)(v1 + 5) = 27;
    }
    else
    {
      result = 15;
      *(uchar *)(v1 + 5) = 15;
    }
  }
  return result;
}

//----- (0223742C) --------------------------------------------------------
int __fastcall Function_223742c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( Function_20380e4() > 3 || Function_2038284() || (result = Function_20383e8()) != 0 )
  {
    result = 15;
    *(uchar *)(v1 + 5) = 15;
  }
  return result;
}

//----- (02237450) --------------------------------------------------------
BOOL Function_2237450()
{
  return Function_2035e18() > 0;
}

//----- (02237464) --------------------------------------------------------
int __fastcall Function_2237464(char a1)
{
  int v1;

  v1 = Function_20380a0(a1);
  if ( v1 == 1 )
  {
    switch ( 1 )
    {
      case 0:
        Function_2038b00();
        break;
      case 1:
      case 2:
      case 3:
        Function_2038b20();
        break;
      default:
        return v1;
    }
  }
  return v1;
}

//----- (02237498) --------------------------------------------------------
#error "Failed to decompile function. bad target 0x22395F6 for case 2"

//----- (022374DC) --------------------------------------------------------
int __fastcall Function_22374dc(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uchar *)(a1 + 17) == 1 )
    return 0;
  if ( Function_2237450() != 1 )
    return 0;
  ((void (__fastcall *)(int))dword_21D1E30[17])(97);
  result = 1;
  *(uchar *)(v1 + 17) = 1;
  return result;
}

//----- (02237504) --------------------------------------------------------
int __fastcall Function_2237504(int a1)
{
  int v1;

  v1 = a1;
  if ( !*(uchar *)(a1 + 17) )
    return 0;
  ((void (*)(void))dword_21D1E30[58])();
  *(uchar *)(v1 + 17) = 0;
  return 1;
}

//----- (02237520) --------------------------------------------------------
int *__fastcall Function_2237520(int a1)
{
  int *result;
  int v2;

  result = (int *)Function_22374dc(a1);
  if ( result )
  {
    v2 = Function_20041fc();
    result = Function_2004a84(v2);
  }
  return result;
}

//----- (02237534) --------------------------------------------------------
int *__fastcall Function_2237534(int a1)
{
  int *result;

  result = (int *)Function_2237504(a1);
  if ( result )
    result = Function_2004a68(0, 120);
  return result;
}

//----- (02237548) --------------------------------------------------------
int Function_2237548()
{
  return Function_2032e64();
}

//----- (02237550) --------------------------------------------------------
int __fastcall Function_2237550(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int i;

  v2 = a1;
  v3 = a2;
  v4 = 1;
  for ( i = Function_203608c() - 1; i >= 0; --i )
  {
    if ( Function_2032dc4(i) == 1 )
    {
      Function_22376a0(v2, i, v3);
    }
    else if ( !Function_2032e00(i) )
    {
      v4 = 0;
    }
  }
  return v4;
}

//----- (0223758C) --------------------------------------------------------
int __fastcall Function_223758c(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  short v6;
  int v7;
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v7 = 0;
  v4 = 1;
  do
  {
    result = Function_2032dc4(v4);
    if ( result == 1 )
    {
      v6 = v4;
      if ( Function_20359dc(22, (int)&v6, 8) != 1 )
        ErrorHandler();
      result = Function_2032d98(v4);
    }
    ++v4;
  }
  while ( v4 < 4 );
  return result;
}

//----- (022375CC) --------------------------------------------------------
int __fastcall Function_22375cc(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  short v6;
  int v7;
  uchar savedregs[24];

  *(uint *)savedregs = a4;
  v7 = 0;
  v4 = 1;
  do
  {
    result = Function_2032de0(v4);
    if ( result == 1 )
    {
      v6 = v4;
      if ( Function_20359dc(22, (int)&v6, 8) != 1 )
        ErrorHandler();
      result = Function_2032d98(v4);
    }
    ++v4;
  }
  while ( v4 < 4 );
  return result;
}

//----- (0223760C) --------------------------------------------------------
void Function_223760c()
{
  JUMPOUT(&dword_21D1108[6]);
}

//----- (0223761C) --------------------------------------------------------
void Function_223761c()
{
  JUMPOUT(&dword_21D1108[6]);
}

//----- (02237628) --------------------------------------------------------
int __fastcall Function_2237628(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 0;
  v2 = a1;
  v3 = 0;
  do
  {
    v4 = v2 + v3;
    if ( *(uchar *)(v2 + v3 + 20) == 1 )
    {
      if ( Function_2032e00(*(uchar *)(v4 + 24)) == 1 )
        v1 = 1;
      *(uchar *)(v4 + 20) = 0;
      *(uchar *)(v4 + 24) = 0;
    }
    ++v3;
  }
  while ( v3 < 4 );
  return v1;
}

//----- (02237654) --------------------------------------------------------
int __fastcall Function_2237654(int result, int a2)
{
  int v2;

  v2 = a2 + result;
  *(uchar *)(v2 + 20) = 1;
  *(uchar *)(v2 + 24) = result;
  return result;
}

//----- (02237660) --------------------------------------------------------
int __fastcall Function_2237660(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 0;
  v2 = 0;
  do
  {
    v3 = a1 + v2;
    v4 = *(uchar *)(a1 + v2 + 32);
    if ( *(uchar *)(a1 + v2 + 28) != v4 )
      v1 = 1;
    ++v2;
    *(uchar *)(v3 + 28) = v4;
  }
  while ( v2 < 4 );
  if ( *(uchar *)(a1 + 36) )
  {
    *(uchar *)(a1 + 36) = 0;
    v1 = 1;
  }
  return v1;
}

//----- (02237698) --------------------------------------------------------
uchar *__fastcall Function_2237698(int a1)
{
  uchar *result;

  result = (uchar *)(a1 + 36);
  *result = 1;
  return result;
}

//----- (022376A0) --------------------------------------------------------
uchar *__fastcall Function_22376a0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uchar *result;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  result = (uchar *)Function_2032e00(a2);
  if ( !result )
  {
    Function_2032e1c(v3);
    *(uchar *)(v4 + 37) = v3;
    Function_22376d0(v4, v3, v5);
    result = Function_2237698(v4);
  }
  return result;
}

//----- (022376D0) --------------------------------------------------------
int __fastcall Function_22376d0(uint *a1, int a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  short v11;
  short v12;
  short v13;
  short v14;
  short v15;
  ushort v16;
  int v17;

  v17 = a4;
  v4 = a2;
  v5 = a1;
  v6 = 3 * a2;
  v7 = (int)(a1 + 99);
  result = a1[3 * a2 + 99];
  v10 = a3;
  if ( !result )
  {
    v11 = dword_2239AD8[v6];
    v12 = HIWORD(dword_2239AD8[v6]);
    v13 = dword_2239AD8[v6 + 1];
    v14 = HIWORD(dword_2239AD8[v6 + 1]);
    v15 = dword_2239AD8[v6 + 2];
    v16 = HIWORD(dword_2239AD8[v6 + 2]);
    if ( a2 == Function_203608c() )
    {
      if ( *(uchar *)(*v5 + 30) )
        v16 = 97;
      else
        v16 = 0;
    }
    else
    {
      v9 = Function_2032ee8(v4);
      if ( !v9 )
        ErrorHandler();
      v16 = Function_2025f8c(v9);
    }
    *(uint *)(v7 + v6 * 4) = ((int (__fastcall *)(uint, short *))dword_222BEC0[0])(v5[97], &v11);
    if ( !((int (__fastcall *)(uint, uint))dword_222CE18[0])(v5[98], v16) )
      ((void (__fastcall *)(uint, uint, int, int))dword_222CDE8[0])(v5[98], v16, 2, v10);
    v5[v6 + 100] = ((int (__fastcall *)(uint, uint, uint, int))dword_222CE44[0])(
                     v5[98],
                     *(uint *)(v7 + v6 * 4),
                     0,
                     v10);
    ((void (__fastcall *)(uint, uint))dword_222D008[0])(v5[v6 + 100], 0);
    result = LOWORD(v5[v6 + 101]) + 1;
    LOWORD(v5[v6 + 101]) = result;
  }
  return result;
}

//----- (022377A4) --------------------------------------------------------
int __fastcall Function_22377a4(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = 0;
  v3 = a1 + 396;
  v4 = a1;
  do
  {
    ((void (__fastcall *)(int, int))*(&off_2239A2C + *(ushort *)(v4 + 404)))(v1, v3);
    ++v2;
    v3 += 12;
    v4 += 12;
  }
  while ( v2 < 4 );
  ((void (__fastcall *)(uint))dword_222BE84[0])(*(uint *)(v1 + 388));
  return ((int (__fastcall *)(uint))dword_222CEE4[0])(*(uint *)(v1 + 392));
}

//----- (022377E8) --------------------------------------------------------
int *__fastcall Function_22377e8(int a1)
{
  int v1;

  v1 = a1;
  ((void (__fastcall *)(uint))dword_222CE18[3])(*(uint *)(a1 + 392));
  return Call_FillMemWithValue((int *)(v1 + 396), 0, 0x30u);
}

//----- (02237808) --------------------------------------------------------
uint __fastcall Function_2237808(int a1, short a2, int a3, int a4)
{
  uint result;
  short v5;
  int v6;
  int v7;

  v7 = a4;
  v5 = a2;
  v6 = 2;
  result = Function_20359dc(22, (int)&v5, 8);
  if ( result != 1 )
    result = ErrorHandler();
  return result;
}

//----- (0223782C) --------------------------------------------------------
int __fastcall Function_223782c(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;

  v1 = a1;
  v2 = 0;
  do
  {
    result = *(uchar *)(v1 + 37) + 1;
    if ( result < v2 )
    {
      result = Function_2032dc4(v2);
      if ( result == 1 )
      {
        Function_2237808(v1, v2, v4, v5);
        result = Function_2032d98(v2);
      }
    }
    ++v2;
  }
  while ( v2 < 4 );
  return result;
}

//----- (02237860) --------------------------------------------------------
int __fastcall Function_2237860(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = 0;
  v3 = a1;
  v4 = a2;
  do
  {
    result = *(uchar *)(v3 + v2 + 40);
    if ( result == 1 )
    {
      result = Function_2032de0(v2);
      if ( result == 1 )
      {
        Function_22376a0(v3, v2, v4);
        *(uchar *)(v3 + v2 + 40) = 0;
        result = 1;
        *(uchar *)(v3 + 18) = 1;
      }
    }
    ++v2;
  }
  while ( v2 < 4 );
  return result;
}

//----- (0223789C) --------------------------------------------------------
int __fastcall Function_223789c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 536) )
    ErrorHandler();
  result = Function_200e7fc((int *)(v1 + 444), 1);
  *(uint *)(v1 + 536) = result;
  return result;
}

//----- (022378C4) --------------------------------------------------------
int __fastcall Function_22378c4(int a1, int a2, int a3)
{
  int v3;
  int result;
  int v5;
  int v6;
  ushort *v7;
  uchar v8;

  v3 = a1;
  result = *(uint *)(a1 + 536);
  v5 = a2;
  v6 = a3;
  if ( result )
  {
    Function_200eba0(result);
    *(uint *)(v3 + 536) = 0;
    v7 = (ushort *)LoadPlayerDataAdress(*(uint *)(v5 + 8));
    v8 = Function_2027b50(v7);
    result = Function_200dd0c(*(uint **)(v3 + 48), 1u, 1, 2, v8, v6);
  }
  return result;
}

//----- (02237908) --------------------------------------------------------
void Function_2237908()
{
  ;
}

//----- (0223790C) --------------------------------------------------------
int __fastcall Function_223790c(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  ((void (__fastcall *)(uint, uint))dword_222CFA4)(*(uint *)(a2 + 4), 0);
  ((void (__fastcall *)(uint))dword_222CFA8[0])(*(uint *)(v2 + 4));
  ((void (__fastcall *)(uint, int))dword_222D008[0])(*(uint *)(v2 + 4), 1);
  *(ushort *)(v2 + 8) = 2;
  result = *((uchar *)&dword_2239A20
           + ((int (__fastcall *)(uint, int))dword_222BF90[0])(*(uint *)v2, 6))
         + 16;
  *(ushort *)(v2 + 10) = result;
  return result;
}

//----- (02237940) --------------------------------------------------------
int __fastcall Function_2237940(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  ((void (__fastcall *)(uint))dword_222CFB4[0])(*(uint *)(a2 + 4));
  result = (short)--*(ushort *)(v2 + 10);
  if ( result <= 0 )
  {
    ((void (__fastcall *)(uint))dword_222CFC0[0])(*(uint *)(v2 + 4));
    ((void (__fastcall *)(uint, int))dword_222CFA4)(*(uint *)(v2 + 4), 1);
    result = 3;
    *(ushort *)(v2 + 8) = 3;
  }
  return result;
}

//----- (0223796C) --------------------------------------------------------
void Function_223796c()
{
  ;
}

//----- (02237970) --------------------------------------------------------
int __fastcall Function_2237970(uchar *a1, int a2, int a3, int a4)
{
  uchar *v4;
  int result;
  int v6;
  int i;
  int v8;
  int v9;
  uchar *v10;
  int v11;
  char v12;
  char v13;
  char v14;
  char v15;
  int v16;

  v16 = a4;
  v4 = a1;
  v11 = 0;
  result = Function_2032aac();
  if ( result )
  {
    v6 = Function_2032e64();
    if ( Function_2032d84() && !Function_2036254(5) )
      v11 = 1;
    for ( i = 0; i < v6; *v10 = v8 )
    {
      if ( i )
      {
        v9 = Function_2032f40(i);
        if ( v9 == 32 )
          ErrorHandler();
        v8 = *(uchar *)(*(uint *)v4 + 36 * v9 + 69);
      }
      else
      {
        v8 = *(uchar *)(*(uint *)v4 + 33);
      }
      if ( v8 != (uchar)v4[i + 32] )
        v11 = 1;
      v10 = &v4[i++ + 32];
    }
    result = v11;
    if ( v11 == 1 )
    {
      v12 = v4[32];
      v13 = v4[33];
      v14 = v4[34];
      v15 = v4[35];
      result = Function_20359dc(24, (int)&v12, 4);
    }
  }
  return result;
}

//----- (02237A10) --------------------------------------------------------
BOOL Function_2237a10()
{
  return Function_2036540(13) != 0;
}

//----- (02237A24) --------------------------------------------------------
uint __fastcall Function_2237a24(int a1, uint a2)
{
  uint v2;
  int v3;
  int *v4;

  v2 = a2;
  v3 = LoadVariableAreaAdress_12(*(uint *)(a1 + 8));
  v4 = Function_202c244(v2, 29);
  return Function_202b758(v3, (int)v4, 4u);
}

//----- (02237A44) --------------------------------------------------------
int __fastcall Function_2237a44(int result)
{
  *(uchar *)(result + 16) = 1;
  *(uint *)(result + 12) = 1800;
  return result;
}

//----- (02237A54) --------------------------------------------------------
int __fastcall Function_2237a54(int a1)
{
  int v2;

  if ( !*(uchar *)(a1 + 16) )
    return 0;
  v2 = *(uint *)(a1 + 12);
  if ( v2 <= 0 )
    return 1;
  *(uint *)(a1 + 12) = v2 - 1;
  return 0;
}

//----- (02237A70) --------------------------------------------------------
int __fastcall Function_2237a70(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a1;
  v4 = a3;
  if ( *(uchar *)(*(uint *)a1 + 33) == 1 )
    Function_2237520(a1);
  ((void (__fastcall *)(uint))dword_21D2598[85])(0);
  Function_20388f4(0, 1);
  v5 = Function_203608c();
  Function_22376d0((uint *)v3, v5, v4, v6);
  *(uchar *)(v3 + 5) = 1;
  return 0;
}

//----- (02237AA8) --------------------------------------------------------
int __fastcall Function_2237aa8(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2236e44(a1 + 48, a2, 107);
  *(uchar *)(v2 + 5) = 2;
  return 0;
}

//----- (02237AC0) --------------------------------------------------------
int __fastcall Function_2237ac0(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  short v7;
  int v8;

  v2 = a1;
  v3 = a2;
  if ( !Function_2236ef8(a1 + 48) )
    return 0;
  if ( Function_2237450() == 1 )
  {
    v5 = Function_2032e44();
    v6 = v5;
    if ( v5 != 255 )
    {
      if ( *(uchar *)(v2 + 6) )
      {
        if ( Function_2032f40(v5) == 32 )
        {
          v7 = v6;
          v8 = 0;
          Function_2032d98(v6);
          if ( Function_20359dc(22, (int)&v7, 8) != 1 )
            ErrorHandler();
        }
        else
        {
          *(uchar *)(v2 + 6) = v6;
        }
      }
    }
  }
  if ( dword_21BF6C4 & 1 )
  {
    Function_2005748(0x5DDu);
    if ( Function_2237450() )
    {
      if ( *(uchar *)(v3 + 1) > Function_2237548() )
        *(uchar *)(v2 + 5) = 6;
      else
        *(uchar *)(v2 + 5) = 8;
    }
    else
    {
      *(uchar *)(v2 + 5) = 6;
    }
  }
  else if ( dword_21BF6C4 & 2 )
  {
    Function_2005748(0x5DDu);
    *(uchar *)(v2 + 5) = 22;
  }
  else if ( *(uchar *)(v2 + 6) == 255 )
  {
    if ( dword_21BF6C4 & 0x400 )
    {
      *(uchar *)(v2 + 5) = 30;
      Function_2005748(0x5DDu);
    }
  }
  else
  {
    Function_2005748(0x5DDu);
    *(uchar *)(v2 + 5) = 3;
  }
  return 0;
}

//----- (02237B9C) --------------------------------------------------------
int __fastcall Function_2237b9c(int a1, int a2, uint a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = a2;
  Function_2236f70(a1 + 48, a2, *(uchar *)(a1 + 6), a3);
  Function_2236e44(v3 + 48, v4, 108);
  *(uchar *)(v3 + 5) = 4;
  return 0;
}

//----- (02237BC4) --------------------------------------------------------
int __fastcall Function_2237bc4(int a1, int a2, uint a3)
{
  int v3;
  uint v4;

  v3 = a1;
  v4 = a3;
  if ( Function_2236ef8(a1 + 48) )
  {
    *(uint *)(v3 + 524) = Function_2002100(*(uint **)(v3 + 48), (uchar *)dword_2239A24, 48, 4, v4);
    *(uchar *)(v3 + 5) = 5;
  }
  return 0;
}

//----- (02237BF8) --------------------------------------------------------
int __fastcall Function_2237bf8(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  short v8;
  int v9;

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Function_2002114(*(uint *)(a1 + 524), a3);
  if ( v6 != -1 )
  {
    v8 = *(uchar *)(v3 + 6);
    if ( v6 )
    {
      v9 = 0;
      Function_2032d98(*(uchar *)(v3 + 6));
      *(uchar *)(v3 + 5) = 1;
    }
    else
    {
      v9 = 1;
      Function_22376a0(v3, *(uchar *)(v3 + 6), v4);
      if ( *(uchar *)(*(uint *)v3 + 33) == 1 )
      {
        Function_2237504(v3);
        Function_2237520(v3);
      }
      if ( *(uchar *)(v5 + 2) > Function_2237548() )
        *(uchar *)(v3 + 5) = 1;
      else
        *(uchar *)(v3 + 5) = 8;
    }
    if ( Function_20359dc(22, (int)&v8, 8) != 1 )
      ErrorHandler();
    *(uchar *)(v3 + 6) = -1;
    Function_2237018(v3 + 48);
    *(uint *)(v3 + 524) = 0;
  }
  return 0;
}

//----- (02237C98) --------------------------------------------------------
int __fastcall Function_2237c98(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2236e44(a1 + 48, a2, 119);
  *(uchar *)(v2 + 5) = 7;
  return 0;
}

//----- (02237CB0) --------------------------------------------------------
int __fastcall Function_2237cb0(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_2236ef8(a1 + 48) )
    *(uchar *)(v1 + 5) = 19;
  return 0;
}

//----- (02237CCC) --------------------------------------------------------
int __fastcall Function_2237ccc(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2236e44(a1 + 48, a2, 111);
  *(uchar *)(v2 + 5) = 9;
  return 0;
}

//----- (02237CE4) --------------------------------------------------------
int __fastcall Function_2237ce4(int a1, int a2, uint a3)
{
  int v3;
  uint v4;

  v3 = a1;
  v4 = a3;
  if ( Function_2236ef8(a1 + 48) )
  {
    *(uint *)(v3 + 524) = Function_2002100(*(uint **)(v3 + 48), (uchar *)dword_2239A24, 48, 4, v4);
    *(uchar *)(v3 + 5) = 10;
  }
  return 0;
}

//----- (02237D18) --------------------------------------------------------
int __fastcall Function_2237d18(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = Function_2002114(*(uint *)(a1 + 524), a3);
  if ( v5 != -1 )
  {
    if ( v5 )
    {
      if ( *(uchar *)(v4 + 2) > Function_2237548() )
        *(uchar *)(v3 + 5) = 1;
      else
        *(uchar *)(v3 + 5) = 19;
    }
    else
    {
      *(uchar *)(v3 + 5) = 11;
    }
    *(uint *)(v3 + 524) = 0;
  }
  return 0;
}

//----- (02237D60) --------------------------------------------------------
int __fastcall Function_2237d60(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = a2;
  v5 = a1;
  *(uint *)(a1 + 8) = 30;
  Function_223758c(a1, 30, a3, a4);
  Function_2236e44(v5 + 48, v4, 102);
  Function_223789c(v5);
  Function_2237a44(v5);
  *(uchar *)(v5 + 5) = 12;
  ((void (*)(void))dword_21D2598[25])();
  return 0;
}

//----- (02237D98) --------------------------------------------------------
int __fastcall Function_2237d98(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = a1;
  v2 = Function_2035e18();
  if ( v2 == Function_2032e64() )
  {
    if ( ((int (*)(void))dword_21D2598[10])() )
    {
      ((void (__fastcall *)(int))dword_21D2598[85])(1);
      *(uchar *)(v1 + 5) = 13;
    }
    result = 0;
  }
  else
  {
    Function_223758c(v1, v3, v4, v5);
    result = 0;
  }
  return result;
}

//----- (02237DD0) --------------------------------------------------------
int __fastcall Function_2237dd0(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uint *)(a1 + 8);
  if ( v2 )
  {
    *(uint *)(v1 + 8) = v2 - 1;
  }
  else if ( Function_20359dc(23, 0, 0) )
  {
    *(uchar *)(v1 + 5) = 14;
  }
  return 0;
}

//----- (02237DF8) --------------------------------------------------------
int __fastcall Function_2237df8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  if ( Function_2036540(13) )
  {
    Function_2237498(v2, v3);
    Function_20365f4();
    Function_20364f0(14);
    *(uchar *)(v2 + 5) = 15;
  }
  return 0;
}

//----- (02237E24) --------------------------------------------------------
int __fastcall Function_2237e24(uchar *a1, int a2, int a3, int a4)
{
  uchar *v4;
  int v5;
  short v7;
  int v8;

  v8 = a4;
  v4 = a1;
  if ( Function_2036540(14) )
  {
    v7 = *(uchar *)(*(uint *)v4 + 27);
    v5 = Function_203608c();
    if ( Function_2036614(v5, (int)&v7) == 1 )
      v4[5] = 16;
  }
  return 0;
}

//----- (02237E54) --------------------------------------------------------
int __fastcall Function_2237e54(uchar *a1)
{
  uchar *v1;
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int i;

  v1 = a1;
  v2 = Function_2237548();
  v3 = 0;
  v4 = 0;
  for ( i = Function_203608c(); v4 < v2; ++v4 )
  {
    if ( i == v4 )
    {
      ++v3;
    }
    else
    {
      v5 = (ushort *)Function_203664c(v4);
      if ( v5 )
      {
        if ( *v5 == *(uchar *)(*(uint *)v1 + 27) )
          ++v3;
        else
          v1[5] = 27;
      }
    }
  }
  if ( v3 == v2 )
    v1[5] = 17;
  return 0;
}

//----- (02237EA4) --------------------------------------------------------
int __fastcall Function_2237ea4(int a1)
{
  int v1;

  v1 = a1;
  Function_20388f4(1, 1);
  Function_20364f0(18);
  *(uchar *)(v1 + 5) = 18;
  return 0;
}

//----- (02237EC0) --------------------------------------------------------
int __fastcall Function_2237ec0(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !Function_2036540(18) )
    return 0;
  *(uchar *)(v3 + 7) = 1;
  Function_2237a24(v4, v5);
  Function_22378c4(v3, v4, v5);
  return 1;
}

//----- (02237EF0) --------------------------------------------------------
int __fastcall Function_2237ef0(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2236e44(a1 + 48, a2, 120);
  *(uchar *)(v2 + 5) = 20;
  return 0;
}

//----- (02237F08) --------------------------------------------------------
int __fastcall Function_2237f08(int a1, int a2, uint a3)
{
  int v3;
  uint v4;

  v3 = a1;
  v4 = a3;
  if ( Function_2236ef8(a1 + 48) )
  {
    *(uint *)(v3 + 524) = Function_2002054(
                              *(uint **)(v3 + 48),
                              (uchar *)dword_2239A24,
                              48,
                              4,
                              1,
                              v4);
    *(uchar *)(v3 + 5) = 21;
  }
  return 0;
}

//----- (02237F48) --------------------------------------------------------
int __fastcall Function_2237f48(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = Function_2002114(*(uint *)(a1 + 524), a3);
  if ( v5 != -1 )
  {
    if ( v5 )
    {
      if ( Function_2237450() )
      {
        if ( *(uchar *)(v4 + 2) > Function_2237548() )
          *(uchar *)(v3 + 5) = 1;
        else
          *(uchar *)(v3 + 5) = 8;
      }
      else
      {
        *(uchar *)(v3 + 5) = 1;
      }
    }
    else
    {
      *(uchar *)(v3 + 5) = 22;
    }
    *(uint *)(v3 + 524) = 0;
  }
  return 0;
}

//----- (02237FA0) --------------------------------------------------------
int __fastcall Function_2237fa0(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2236e44(a1 + 48, a2, 121);
  *(uchar *)(v2 + 5) = 23;
  return 0;
}

//----- (02237FB8) --------------------------------------------------------
int __fastcall Function_2237fb8(int a1, int a2, uint a3)
{
  int v3;
  uint v4;

  v3 = a1;
  v4 = a3;
  if ( Function_2236ef8(a1 + 48) )
  {
    *(uint *)(v3 + 524) = Function_2002054(
                              *(uint **)(v3 + 48),
                              (uchar *)dword_2239A24,
                              48,
                              4,
                              1,
                              v4);
    *(uchar *)(v3 + 5) = 24;
  }
  return 0;
}

//----- (02237FF8) --------------------------------------------------------
int __fastcall Function_2237ff8(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = Function_2002114(*(uint *)(a1 + 524), a3);
  if ( v5 != -1 )
  {
    if ( v5 )
    {
      if ( Function_2237450() )
      {
        if ( *(uchar *)(v4 + 2) > Function_2237548() )
          *(uchar *)(v3 + 5) = 1;
        else
          *(uchar *)(v3 + 5) = 8;
      }
      else
      {
        *(uchar *)(v3 + 5) = 1;
      }
    }
    else
    {
      *(uchar *)(v3 + 5) = 25;
    }
    *(uint *)(v3 + 524) = 0;
  }
  return 0;
}

//----- (02238050) --------------------------------------------------------
int __fastcall Function_2238050(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2236e44(a1 + 48, a2, 122);
  *(uint *)(v2 + 8) = 30;
  *(uchar *)(v2 + 5) = 26;
  return 0;
}

//----- (0223806C) --------------------------------------------------------
int __fastcall Function_223806c(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = a1;
  if ( !Function_2236ef8(a1 + 48) )
    return 0;
  v3 = *(uint *)(v1 + 8) - 1;
  *(uint *)(v1 + 8) = v3;
  if ( v3 > 0 )
    return 0;
  *(uchar *)(v1 + 7) = 0;
  Function_2038378();
  v7 = Function_22375cc(v1, v4, v5, v6);
  Function_2038b60(v7);
  Function_20388f4(0, 1);
  return 1;
}

//----- (022380AC) --------------------------------------------------------
int __fastcall Function_22380ac(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a1;
  v4 = *(uint *)(a1 + 524);
  v5 = a2;
  v6 = a3;
  if ( v4 )
  {
    Function_2002154(v4, a3);
    *(uint *)(v3 + 524) = 0;
  }
  Function_2237018(v3 + 48);
  Function_22378c4(v3, v5, v6);
  *(uchar *)(v3 + 5) = 28;
  return 0;
}

//----- (022380E8) --------------------------------------------------------
int __fastcall Function_22380e8(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a1;
  Function_2236e44(a1 + 48, a2, 118);
  *(uchar *)(v2 + 5) = 29;
  Function_22375cc(v2, v3, v4, v5);
  return 0;
}

//----- (02238104) --------------------------------------------------------
int __fastcall Function_2238104(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  if ( !Function_2236ef8(a1 + 48) )
    return 0;
  v3 = Function_2038378();
  Function_2038b60(v3);
  Function_22375cc(v1, v4, v5, v6);
  *(uchar *)(v1 + 7) = 0;
  Function_20388f4(0, 1);
  return 1;
}

//----- (02238134) --------------------------------------------------------
int __fastcall Function_2238134(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  if ( *(uchar *)(*(uint *)a1 + 33) == 1 )
    v3 = 125;
  else
    v3 = 124;
  Function_2236e44(a1 + 48, a2, v3);
  *(uchar *)(v2 + 5) = 31;
  return 0;
}

//----- (0223815C) --------------------------------------------------------
int __fastcall Function_223815c(int a1, int a2, uint a3)
{
  int v3;
  uint v4;

  v3 = a1;
  v4 = a3;
  if ( Function_2236ef8(a1 + 48) )
  {
    *(uint *)(v3 + 524) = Function_2002100(*(uint **)(v3 + 48), (uchar *)dword_2239A24, 48, 4, v4);
    *(uchar *)(v3 + 5) = 32;
  }
  return 0;
}

//----- (02238190) --------------------------------------------------------
int __fastcall Function_2238190(int a1, int a2, uint a3)
{
  int v3;
  int v4;

  v3 = a1;
  v4 = Function_2002114(*(uint *)(a1 + 524), a3);
  if ( v4 != -1 )
  {
    if ( !v4 )
    {
      Function_223731c((uint *)v3);
      Function_2237698(v3);
    }
    *(uchar *)(v3 + 5) = 1;
    *(uint *)(v3 + 524) = 0;
  }
  return 0;
}

//----- (022381CC) --------------------------------------------------------
int __fastcall Function_22381cc(int a1)
{
  int v1;

  v1 = a1;
  Function_2032ac0();
  Function_20388f4(0, 1);
  *(uchar *)(v1 + 5) = 1;
  return 0;
}

//----- (022381E4) --------------------------------------------------------
int __fastcall Function_22381e4(int a1, int a2, int a3)
{
  int v3;

  v3 = a1;
  Function_2237550(a1, a3);
  if ( Function_2035d78(0) )
  {
    if ( Function_2032e00(0) )
      *(uchar *)(v3 + 5) = 2;
  }
  else
  {
    *(uchar *)(v3 + 5) = 15;
  }
  return 0;
}

//----- (02238210) --------------------------------------------------------
int __fastcall Function_2238210(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a2;
  v4 = a1;
  Function_2237550(a1, a3);
  Function_223726c(v4 + 48, v3, 0, 0);
  Function_2236e44(v4 + 48, v3, 114);
  Function_223789c(v4);
  *(uchar *)(v4 + 5) = 3;
  return 0;
}

//----- (02238250) --------------------------------------------------------
int __fastcall Function_2238250(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uchar *v5;
  int v7;

  v3 = a3;
  v4 = a2;
  v5 = (uchar *)a1;
  Function_2237550(a1, a3);
  if ( !Function_2236ef8((int)(v5 + 48)) )
    return 0;
  if ( v5[19] )
  {
    Function_22378c4((int)v5, v4, v3);
    v7 = (uchar)v5[19];
    switch ( v7 )
    {
      case 1:
        v5[5] = 4;
        break;
      case 2:
        v5[5] = 6;
        v5[45] = 116;
        break;
      case 3:
        v5[5] = 6;
        v5[45] = -124;
        break;
    }
  }
  return 0;
}

//----- (022382B0) --------------------------------------------------------
int __fastcall Function_22382b0(int a1, int a2, uint a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;

  v3 = a3;
  v4 = a1;
  v5 = a2;
  Function_223726c(a1 + 48, a2, 0, 0);
  Function_2236e50(v4 + 48, v5, 0x73u, 30, v3);
  *(uchar *)(v4 + 5) = 5;
  v6 = Function_203608c();
  Function_22376a0(v4, v6, 96);
  return 0;
}

//----- (022382F0) --------------------------------------------------------
int __fastcall Function_22382f0(int a1, int a2, int a3)
{
  int v3;

  v3 = a1;
  Function_2237550(a1, a3);
  if ( Function_2236ef8(v3 + 48) )
    *(uchar *)(v3 + 5) = 8;
  return 0;
}

//----- (02238314) --------------------------------------------------------
int __fastcall Function_2238314(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  Function_223726c(a1 + 48, a2, 0, 0);
  Function_2236e44(v2 + 48, v3, *(uchar *)(v2 + 45));
  *(uchar *)(v2 + 5) = 7;
  v4 = Function_2038378();
  Function_2038b60(v4);
  return 0;
}

//----- (02238350) --------------------------------------------------------
int __fastcall Function_2238350(int a1)
{
  int v1;

  v1 = a1;
  if ( !Function_2236ef8(a1 + 48) )
    return 0;
  *(uchar *)(v1 + 7) = 0;
  Function_20388f4(0, 1);
  return 1;
}

//----- (02238370) --------------------------------------------------------
int __fastcall Function_2238370(int a1, int a2, int a3)
{
  int v3;
  uchar *v4;

  v3 = a2;
  v4 = (uchar *)a1;
  Function_2237550(a1, a3);
  Function_2236e44((int)(v4 + 48), v3, 123);
  Function_223789c((int)v4);
  v4[5] = 9;
  if ( *(uchar *)(*(uint *)v4 + 33) == 1 )
    Function_2237520((int)v4);
  return 0;
}

//----- (022383AC) --------------------------------------------------------
int __fastcall Function_22383ac(int a1, int a2, int a3)
{
  int v3;

  v3 = a1;
  Function_2237550(a1, a3);
  if ( Function_2236ef8(v3 + 48) )
    *(uchar *)(v3 + 5) = 10;
  return 0;
}

//----- (022383D0) --------------------------------------------------------
int __fastcall Function_22383d0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a3;
  v4 = a2;
  v5 = a1;
  Function_2237550(a1, a3);
  if ( *(uchar *)(v5 + 18) )
  {
    *(uchar *)(v5 + 18) = 0;
    if ( *(uchar *)(*(uint *)v5 + 33) == 1 )
    {
      Function_2237504(v5);
      Function_2237520(v5);
    }
    Function_2237698(v5);
  }
  if ( Function_2237a10() == 1 )
  {
    Function_20365f4();
    Function_20364f0(14);
    Function_22378c4(v5, v4, v3);
    Function_2236e44(v5 + 48, v4, 102);
    Function_2237a44(v5);
    *(uint *)(v5 + 8) = 300;
    Function_223789c(v5);
    *(uchar *)(v5 + 5) = 11;
  }
  else if ( dword_21BF6C4 & 0x400 )
  {
    Function_22378c4(v5, v4, v3);
    *(uchar *)(v5 + 5) = 18;
  }
  return 0;
}

//----- (0223846C) --------------------------------------------------------
int __fastcall Function_223846c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  v9 = a4;
  v4 = a1;
  if ( !Function_2036540(14) )
    return 0;
  LOWORD(v9) = *(uchar *)(*(uint *)v4 + 27);
  v5 = Function_2237548();
  if ( v5 == Function_2035e18() )
  {
    v8 = Function_203608c();
    if ( Function_2036614(v8, (int)&v9) == 1 )
      *(uchar *)(v4 + 5) = 12;
    return 0;
  }
  v6 = *(uint *)(v4 + 8) - 1;
  *(uint *)(v4 + 8) = v6;
  if ( v6 <= 0 )
    *(uchar *)(v4 + 5) = 15;
  return 0;
}

//----- (022384BC) --------------------------------------------------------
int __fastcall Function_22384bc(uchar *a1)
{
  uchar *v1;
  int v2;
  int v3;
  int v4;
  ushort *v5;
  int i;

  v1 = a1;
  v2 = Function_2237548();
  v3 = 0;
  v4 = 0;
  for ( i = Function_203608c(); v4 < v2; ++v4 )
  {
    if ( i == v4 )
    {
      ++v3;
    }
    else
    {
      v5 = (ushort *)Function_203664c(v4);
      if ( v5 )
      {
        if ( *v5 == *(uchar *)(*(uint *)v1 + 27) )
          ++v3;
        else
          v1[5] = 15;
      }
    }
  }
  if ( v3 == v2 )
    v1[5] = 13;
  return 0;
}

//----- (0223850C) --------------------------------------------------------
int __fastcall Function_223850c(int a1)
{
  int v1;

  v1 = a1;
  Function_20388f4(1, 1);
  Function_20364f0(18);
  *(uchar *)(v1 + 5) = 14;
  return 0;
}

//----- (02238528) --------------------------------------------------------
int __fastcall Function_2238528(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !Function_2036540(18) )
    return 0;
  Function_22378c4(v3, v4, v5);
  *(uchar *)(v3 + 7) = 1;
  Function_2237a24(v4, v5);
  return 1;
}

//----- (02238558) --------------------------------------------------------
int __fastcall Function_2238558(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = a1;
  v4 = *(uint *)(a1 + 524);
  v5 = a2;
  v6 = a3;
  if ( v4 )
  {
    Function_2002154(v4, a3);
    *(uint *)(v3 + 524) = 0;
  }
  Function_2237018(v3 + 48);
  Function_22378c4(v3, v5, v6);
  *(uchar *)(v3 + 5) = 16;
  return 0;
}

//----- (02238594) --------------------------------------------------------
int __fastcall Function_2238594(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2236e44(a1 + 48, a2, 118);
  *(uchar *)(v2 + 5) = 17;
  return 0;
}

//----- (022385AC) --------------------------------------------------------
int __fastcall Function_22385ac(int a1)
{
  int v1;
  int v3;

  v1 = a1;
  if ( !Function_2236ef8(a1 + 48) )
    return 0;
  v3 = Function_2038378();
  Function_2038b60(v3);
  *(uchar *)(v1 + 7) = 0;
  Function_20388f4(0, 1);
  return 1;
}

//----- (022385D4) --------------------------------------------------------
int __fastcall Function_22385d4(int a1, int a2, int a3)
{
  int v3;
  uchar *v4;
  int v5;

  v3 = a2;
  v4 = (uchar *)a1;
  Function_2237550(a1, a3);
  if ( *(uchar *)(*(uint *)v4 + 33) == 1 )
    v5 = 125;
  else
    v5 = 124;
  Function_2236e44((int)(v4 + 48), v3, v5);
  v4[5] = 19;
  return 0;
}

//----- (02238608) --------------------------------------------------------
int __fastcall Function_2238608(int a1, int a2, int a3)
{
  uint v3;
  int v4;
  int result;

  v3 = a3;
  v4 = a1;
  Function_2237550(a1, a3);
  if ( Function_2237a10() == 1 )
  {
    *(uchar *)(v4 + 5) = 10;
    Function_2236f38(v4 + 48);
    result = 0;
  }
  else
  {
    if ( Function_2236ef8(v4 + 48) )
    {
      *(uint *)(v4 + 524) = Function_2002100(*(uint **)(v4 + 48), (uchar *)dword_2239A24, 48, 4, v3);
      *(uchar *)(v4 + 5) = 20;
    }
    result = 0;
  }
  return result;
}

//----- (02238660) --------------------------------------------------------
int __fastcall Function_2238660(int a1, int a2, int a3)
{
  uint v3;
  int v4;
  int result;
  int v6;

  v3 = a3;
  v4 = a1;
  Function_2237550(a1, a3);
  if ( Function_2237a10() == 1 )
  {
    *(uchar *)(v4 + 5) = 10;
    Function_2236f38(v4 + 48);
    Function_2002154(*(uint *)(v4 + 524), v3);
    result = 0;
    *(uint *)(v4 + 524) = 0;
  }
  else
  {
    v6 = Function_2002114(*(uint *)(v4 + 524), v3);
    if ( v6 != -1 )
    {
      if ( !v6 )
      {
        Function_223731c((uint *)v4);
        Function_2237698(v4);
      }
      *(uchar *)(v4 + 5) = 8;
      *(uint *)(v4 + 524) = 0;
    }
    result = 0;
  }
  return result;
}

//----- (022386D0) --------------------------------------------------------
int __fastcall Function_22386d0(uchar *a1, int a2)
{
  uchar *v2;
  int v3;

  v2 = a1;
  v3 = a2;
  a1[38] = Function_2032f40(0);
  if ( v2[38] == 32 )
    ErrorHandler();
  Function_223726c((int)(v2 + 48), v3, 0, 0);
  Function_2038378();
  v2[39] = 0;
  Function_2236e44((int)(v2 + 48), v3, 132);
  v2[5] = 22;
  return 0;
}

//----- (02238728) --------------------------------------------------------
int __fastcall Function_2238728(int a1, int a2, uint a3)
{
  int v3;
  uint v4;

  v3 = a1;
  v4 = a3;
  if ( Function_2236ef8(a1 + 48) )
  {
    *(uint *)(v3 + 524) = Function_2002100(*(uint **)(v3 + 48), (uchar *)dword_2239A24, 48, 4, v4);
    *(uchar *)(v3 + 5) = 23;
  }
  return 0;
}

//----- (0223875C) --------------------------------------------------------
int __fastcall Function_223875c(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  char v5;

  v3 = a1;
  v4 = Function_2002114(*(uint *)(a1 + 524), a3);
  if ( v4 != -1 )
  {
    if ( v4 )
      v5 = 29;
    else
      v5 = 24;
    *(uchar *)(v3 + 5) = v5;
    *(uint *)(v3 + 524) = 0;
  }
  return 0;
}

//----- (0223878C) --------------------------------------------------------
int __fastcall Function_223878c(int a1, int a2)
{
  int v2;

  v2 = a1;
  Function_2236e44(a1 + 48, a2, 17);
  Function_223789c(v2);
  *(uint *)(v2 + 8) = 90;
  *(uchar *)(v2 + 5) = 25;
  return 0;
}

//----- (022387AC) --------------------------------------------------------
int __fastcall Function_22387ac(int a1, uchar *a2)
{
  int v2;
  int v3;
  uchar *v4;
  int result;
  int v6;

  v2 = a1;
  v3 = *(uint *)(a1 + 8);
  v4 = a2;
  if ( v3 <= 0 )
  {
    if ( Function_2236ef8(v2 + 48) )
    {
      v6 = *v4;
      if ( Function_2237464(*(uchar *)(v2 + 38)) )
        *(uchar *)(v2 + 5) = 26;
      result = 0;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    *(uint *)(v2 + 8) = v3 - 1;
    result = 0;
  }
  return result;
}

//----- (022387E8) --------------------------------------------------------
int __fastcall Function_22387e8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_223742c(a1);
  if ( Function_20380e4() == 1 && Function_2035d78(0) == 1 )
  {
    Function_203632c(0);
    Function_22378c4(v3, v4, v5);
    Function_200f174(3u, 0, 0, 0, 6, 1, v5);
    *(uchar *)(v3 + 5) = 27;
  }
  return 0;
}

//----- (02238838) --------------------------------------------------------
int __fastcall Function_2238838(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uchar *v6;
  uchar *v7;
  uchar *v8;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( Function_200f2ac() )
  {
    Function_20329e0(*(uint *)(v4 + 8), 0);
    *(uchar *)(v3 + 39) = 1;
    Function_22377e8(v3);
    Function_22367f8(v3, v5);
    Call_FillMemWithValue((int *)(v3 + 48), 0, 0x1F8u);
    Function_223760c();
    Function_22367a8(v3, v4, v5);
    Function_2039734();
    *(uchar *)(v3 + 18) = 0;
    *(uchar *)(v3 + 19) = 0;
    v6 = (uchar *)(v3 + 20);
    *(uchar *)(v3 + 20) = 0;
    v6[1] = 0;
    v6[2] = 0;
    v6[3] = 0;
    v7 = (uchar *)(v3 + 24);
    *(uchar *)(v3 + 24) = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    MI_CpuFill8((ushort *)(v3 + 28), 1, 4u);
    MI_CpuFill8((ushort *)(v3 + 32), 1, 4u);
    *(uchar *)(v3 + 36) = 0;
    *(uchar *)(v3 + 38) = 0;
    *(uchar *)(v3 + 40) = 0;
    v8 = (uchar *)(v3 + 40);
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    Function_200f174(3u, 1, 1, 0, 6, 1, v5);
    *(uchar *)(v3 + 5) = 28;
  }
  return 0;
}

//----- (022388FC) --------------------------------------------------------
int __fastcall Function_22388fc(int a1)
{
  int v1;

  v1 = a1;
  if ( Function_200f2ac() )
    *(uchar *)(v1 + 5) = 0;
  return 0;
}

//----- (02238910) --------------------------------------------------------
int __fastcall Function_2238910(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2038378();
  Function_2038b60(v2);
  *(uchar *)(v1 + 7) = 0;
  Function_20388f4(0, 1);
  return 1;
}

