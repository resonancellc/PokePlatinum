//----- (0225C700) --------------------------------------------------------
int __fastcall Function_225c700(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int *v4;

  v1 = a1;
  Function_2017fc8(3, 112, 0x20000);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 1024, 0x70u);
  Call_FillMemWithValue(v2, 0, 0x400u);
  v3 = (int *)LoadPtrToOverWorldDataIn18(v1);
  v4 = v3;
  *v2 = *v3;
  Function_2004550(0xBu, 0x497u);
  v4[4] = 0;
  Function_225ce30(v2, 112);
  Function_225d188(v2 + 16, v2[3], 1, 674, 2, 19, 27, 4, 40, *v2, 112);
  Function_225d188(v2 + 28, v2[3], 1, 695, 2, 19, 27, 4, 40, *v2, 112);
  Function_225d188(v2 + 40, v2[3], 0, 695, 4, 4, 23, 16, 148, *v2, 112);
  Function_225d188(v2 + 4, v2[3], 1, 674, 5, 1, 22, 2, 540, *v2, 112);
  Function_225d37c(v2 + 4, 21);
  SetMainLoopFunctionCall((int)Function_225ce28, (int)v2);
  Function_20177a4();
  return 1;
}

//----- (0225C820) --------------------------------------------------------
int __fastcall Function_225c820(int a1, int *a2)
{
  int v2;
  int *v3;
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  uint *v16;
  int v17;
  int v19;

  v2 = a1;
  v3 = a2;
  v4 = LoadOverlayData1c(a1);
  v5 = (uint *)LoadPtrToOverWorldDataIn18(v2);
  v6 = *v3;
  if ( (uint)*v3 <= 0xF )
    JUMPOUT(__CS__, *((short *)&off_225C84A + v6) + 36030540);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_200f174(0, 1, 1, 0xFFFF, 6, 1, 112);
      ++*v3;
      return 0;
    case 1:
      if ( Function_200f2ac() )
        ++*v3;
      return 0;
    case 2:
      if ( v5[2] )
      {
        *v3 = 4;
      }
      else
      {
        Function_225d210(v4 + 112, 17);
        *(uint *)(v4 + 208) = Function_2002100(
                                  *(uint **)(v4 + 12),
                                  (uchar *)dword_225D3EC,
                                  31,
                                  14,
                                  0x70u);
        ++*v3;
      }
      return 0;
    case 3:
      v7 = Function_2002114(*(uint *)(v4 + 208), 0x70u);
      if ( v7 )
      {
        if ( v7 == -2 )
        {
          Function_225d294(v4 + 64);
          *v3 = 7;
        }
      }
      else
      {
        *v3 = 4;
      }
      return 0;
    case 4:
      v8 = ((int (__fastcall *)(uint))dword_222E3BC[0])(v5[1]);
      Function_203878c(*(uint *)v4, v8);
      Function_225d210(v4 + 112, 23);
      Function_225d2ec(v4 + 112);
      ++*v3;
      return 0;
    case 5:
      if ( Function_20383e8() || Function_203881c() )
      {
        Function_225d310(v4 + 112);
        *v3 = 9;
      }
      if ( Function_2038804() == 1 )
      {
        ((void (__fastcall *)(uint))dword_222F16C[0])(v5[1]);
        ++*v3;
      }
      return 0;
    case 6:
      if ( Function_20383e8() || Function_203881c() )
      {
        Function_225d310(v4 + 112);
        *v3 = 9;
      }
      if ( Function_2038294() )
      {
        Function_225d310(v4 + 112);
        v9 = LoadVariableAreaAdress_14(*(uint *)v4);
        Function_202cfec(v9, 44);
        v10 = Function_20138ec();
        v11 = (int *)v5[3];
        *v11 = v10;
        v11[1] = v12;
        v5[4] = 1;
        ++*v3;
      }
      return 0;
    case 7:
      Function_200f174(0, 0, 0, 0, 6, 1, 112);
      ++*v3;
      return 0;
    case 8:
      if ( !Function_200f2ac() )
        return 0;
      return 1;
    case 9:
      if ( Function_20383e8() )
      {
        v13 = (int *)Function_20382f8();
        v19 = ((int (__fastcall *)(int, int))dword_22316F4[0])(*v13, v13[1]);
        v14 = *v13;
      }
      else
      {
        v15 = ((int (*)(void))dword_22326DC[0])();
        v14 = ((int (__fastcall *)(int))dword_223270C[0])(v15);
        v19 = 32;
      }
      ((void (__fastcall *)(uint))dword_222F198[0])(v5[1]);
      Function_225d294(v4 + 64);
      Function_225d294(v4 + 112);
      Function_225d3d0(v4 + 160, v14);
      Function_225d210(v4 + 160, v19);
      ++*v3;
      break;
    case 0xA:
      if ( dword_21BF6C4 & 1 )
      {
        if ( Function_20383e8() )
        {
          v16 = (uint *)Function_20382f8();
          if ( ((int (__fastcall *)(uint, uint))dword_2231718[0])(*v16, v16[1]) )
            *v3 = 14;
          else
            *v3 = 11;
        }
        else
        {
          *v3 = 11;
        }
      }
      break;
    case 0xB:
      Function_225d294(v4 + 160);
      Function_225d210(v4 + 64, 88);
      *(uint *)(v4 + 208) = Function_2002100(
                                *(uint **)(v4 + 12),
                                (uchar *)dword_225D3EC,
                                31,
                                14,
                                0x70u);
      ++*v3;
      break;
    case 0xC:
      v17 = Function_2002114(*(uint *)(v4 + 208), 0x70u);
      if ( v17 )
      {
        if ( v17 == -2 )
          *v3 = 14;
      }
      else
      {
        Function_20387e8();
        *v3 = 13;
      }
      break;
    case 0xD:
      if ( !Function_2036780() )
        *v3 = 4;
      break;
    case 0xE:
      Function_225d294(v4 + 64);
      Function_225d294(v4 + 112);
      Function_225d294(v4 + 160);
      Function_20387e8();
      ++*v3;
      break;
    case 0xF:
      if ( !Function_2036780() )
      {
        Function_225d294(v4 + 64);
        Function_225d294(v4 + 112);
        *v3 = 7;
      }
      break;
    default:
      ErrorHandler();
      break;
  }
  return 0;
}

//----- (0225CB1C) --------------------------------------------------------
int __fastcall Function_225cb1c(int a1)
{
  int v1;
  int *v2;

  v1 = LoadOverlayData1c(a1);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  v2 = *(int **)(v1 + 212);
  if ( v2 )
  {
    Call_RemoveTaskFromTaskList(v2);
    *(uint *)(v1 + 212) = 0;
    *(uint *)(v1 + 216) = 0;
  }
  Function_225d330(v1 + 64);
  Function_225d330(v1 + 112);
  Function_225d330(v1 + 160);
  Function_225d330(v1 + 16);
  Function_225d154(v1);
  *(uint *)(v1 + 216) = 0;
  free(v1);
  Function_201807c(112);
  return 1;
}

//----- (0225CB8C) --------------------------------------------------------
int __fastcall Function_225cb8c(int a1)
{
  int v1;
  int *v2;

  v1 = a1;
  Function_2017fc8(3, 112, 0x20000);
  v2 = (int *)MallocSomeDataAndStorePtrInOverlayData1c(v1, 1024, 0x70u);
  Call_FillMemWithValue(v2, 0, 0x400u);
  *v2 = *(uint *)LoadPtrToOverWorldDataIn18(v1);
  Function_225ce30(v2, 112);
  Function_225d188(v2 + 16, v2[3], 1, 695, 2, 19, 27, 4, 40, *v2, 112);
  Function_225d188(v2 + 40, v2[3], 0, 695, 4, 4, 23, 16, 148, *v2, 112);
  Function_225d188(v2 + 4, v2[3], 1, 674, 5, 1, 22, 2, 540, *v2, 112);
  Function_225d37c(v2 + 4, 21);
  Function_2039734();
  SetMainLoopFunctionCall((int)Function_225ce28, (int)v2);
  Function_20177a4();
  return 1;
}

//----- (0225CC6C) --------------------------------------------------------
int __fastcall Function_225cc6c(int a1, int *a2)
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
  if ( (uint)*v3 <= 0xA )
    JUMPOUT(__CS__, *((short *)&off_225CC96 + v6) + 36031640);
  switch ( (uchar)v6 )
  {
    case 0:
      Function_200f174(0, 1, 1, 0xFFFF, 6, 1, 112);
      ++*v3;
      goto LABEL_24;
    case 1:
      if ( Function_200f2ac() )
        *v3 = 2;
      goto LABEL_24;
    case 2:
      Function_225d210(v4 + 64, 26);
      if ( Function_20383e8() || Function_203881c() )
      {
        *v3 = 5;
        Function_225d2ec(v4 + 64);
      }
      else
      {
        *v3 = 3;
        Function_225d2ec(v4 + 64);
      }
      goto LABEL_24;
    case 3:
      ((void (*)(void))dword_2232C8C[0])();
      *(uint *)(v4 + 8) = 900;
      *v3 = 4;
      goto LABEL_24;
    case 4:
      --*(uint *)(v4 + 8);
      if ( ((int (*)(void))dword_2232CB8[0])() || !*(uint *)(v4 + 8) )
        *v3 = 5;
      goto LABEL_24;
    case 5:
      Function_20387e8();
      *v3 = 6;
      goto LABEL_24;
    case 6:
      if ( !Function_2036780() )
      {
        Function_225d310(v4 + 112);
        ((void (__fastcall *)(uint))dword_222F198[0])(*(uint *)(v5 + 4));
        *v3 = 7;
      }
      goto LABEL_24;
    case 7:
      Function_225d210(v4 + 64, 27);
      *(uint *)(v4 + 8) = 90;
      *v3 = 8;
      goto LABEL_24;
    case 8:
      v7 = *(uint *)(v4 + 8) - 1;
      *(uint *)(v4 + 8) = v7;
      if ( !v7 )
        *v3 = 9;
      goto LABEL_24;
    case 9:
      Function_200f174(0, 0, 0, 0, 6, 1, 112);
      ++*v3;
      goto LABEL_24;
    case 0xA:
      if ( !Function_200f2ac() )
        goto LABEL_24;
      Function_225d310(v4 + 64);
      result = 1;
      break;
    default:
LABEL_24:
      result = 0;
      break;
  }
  return result;
}

//----- (0225CDC0) --------------------------------------------------------
int __fastcall Function_225cdc0(int a1)
{
  int v1;
  int *v2;

  v1 = LoadOverlayData1c(a1);
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  v2 = *(int **)(v1 + 212);
  if ( v2 )
  {
    Call_RemoveTaskFromTaskList(v2);
    *(uint *)(v1 + 212) = 0;
    *(uint *)(v1 + 216) = 0;
  }
  Function_225d330(v1 + 64);
  Function_225d330(v1 + 160);
  Function_225d330(v1 + 16);
  Function_225d154(v1);
  *(uint *)(v1 + 216) = 0;
  free(v1);
  Function_201807c(112);
  return 1;
}

//----- (0225CE28) --------------------------------------------------------
int Function_225ce28()
{
  return Function_225d17c();
}

//----- (0225CE30) --------------------------------------------------------
uint __fastcall Function_225ce30(int a1, uint a2)
{
  uint v2;
  int *v3;
  int *v4;
  int v5;
  ushort *v6;
  uchar v7;
  int v8;
  int v9;
  int v10;
  short v11;
  short v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int *v25;
  int v26;

  v18 = a1;
  v2 = a2;
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  GX_SetBanks(dword_225D410);
  Function_201975c(0, 0);
  SetGraphicsModes(dword_225D400);
  v3 = dword_225D438;
  v4 = &dword_225D3F4;
  *(uint *)(v18 + 12) = Function_2018340(v2);
  v5 = 0;
  do
  {
    Function_20183c4(*(uint **)(v18 + 12), *v4 & 0xFF, v3, 0);
    Function_2019690(*v4 & 0xFF, 32, 0, v2);
    Function_2019ebc(*(uint **)(v18 + 12), *v4 & 0xFF);
    ++v5;
    v3 += 7;
    ++v4;
  }
  while ( v5 < 3 );
  v6 = (ushort *)LoadPlayerDataAdress(*(uint *)v18);
  v7 = Function_2027b50(v6);
  LoadFromNARC_PlFont1(0, 384, v2);
  LoadFromNARC_PlFont2(0, 352, v2);
  Function_200daa4(*(uint **)(v18 + 12), 1u, 31, 14, 0, v2);
  Function_200dd0c(*(uint **)(v18 + 12), 1u, 1, 13, v7, v2);
  Call_LoadFromNARC_RLCN(92, 3, 0, 0, 352, v2);
  Call_LoadFromNARC_RLCN(92, 3, 4u, 0, 352, v2);
  LoadFromNARC_RGCN(92, 2, *(uint **)(v18 + 12), 0, 0, 0, 0, v2);
  LoadFromNARC_RGCN(92, 10, *(uint **)(v18 + 12), 4u, 0, 0, 0, v2);
  LoadFromNARC_RCSN(92, 5, *(uint **)(v18 + 12), 0, 0, 0, 0, v2);
  LoadFromNARC_RCSN(92, 11, *(uint **)(v18 + 12), 4u, 0, 0, 0, v2);
  Function_201ff0c(0x10u, 1);
  v25 = LoadFromNARC_8(92, v2, v8, v9);
  MI_CpuFill8((ushort *)(v18 + 212), 0, 0x32Cu);
  v10 = Function_20071ec((int)v25, 4u, &v26, v2);
  MIi_CpuCopy16(*(uint *)(v26 + 12), v18 + 220, 128, v11);
  MIi_CpuCopy16(*(uint *)(v26 + 12), v18 + 348, 128, v12);
  free(v10);
  v23 = 0;
  v24 = 0;
  v20 = v18 + 348;
  v19 = v18 + 220;
  do
  {
    v22 = 0;
    v21 = 0;
    while ( 1 )
    {
      if ( v23 >= 21 )
        ErrorHandler();
      v13 = 1;
      v14 = v18 + 32 * (v24 + 1) + 2;
      v15 = v20 + 2;
      v16 = v19 + 2;
      do
      {
        Function_200393c(v16, v15, 1u, (v22 >> 8) & 0xFF, *(ushort *)(v14 + 220));
        ++v13;
        v14 += 2;
        v15 += 2;
        v16 += 2;
      }
      while ( v13 < 16 );
      v20 += 32;
      ++v23;
      if ( v21 == 1 )
        break;
      v22 += 768;
      if ( v22 >= 4096 )
      {
        v22 = 4096;
        v21 = 1;
      }
    }
    v19 += 32;
    ++v24;
  }
  while ( v24 < 3 );
  DC_FlushRange(v18 + 348, 672);
  *(uint *)(v18 + 216) = 1;
  *(uint *)(v18 + 212) = AddTaskToTaskList2((int)Function_225d0c0, v18 + 212, 0x14u);
  return Call_FS_CloseFile(v25);
}

//----- (0225D0C0) --------------------------------------------------------
int __fastcall Function_225d0c0(int a1, int a2)
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

//----- (0225D154) --------------------------------------------------------
uint __fastcall Function_225d154(int a1)
{
  int *v1;
  int v2;
  int v3;

  v1 = &dword_225D3F4;
  v2 = a1;
  v3 = 0;
  do
  {
    Function_2019044(*(uint *)(v2 + 12), *v1 & 0xFF);
    ++v3;
    ++v1;
  }
  while ( v3 < 3 );
  return free(*(uint *)(v2 + 12));
}

//----- (0225D17C) --------------------------------------------------------
int __fastcall Function_225d17c(int a1)
{
  return Function_201c2b8(*(uint *)(a1 + 12));
}

//----- (0225D188) --------------------------------------------------------
int __fastcall Function_225d188(uint **a1, uint *a2, uint *a3, int a4, char a5, char a6, uchar a7, uchar a8, short a9, int a10, uint a11)
{
  uint **v11;
  int v12;
  uint *v13;
  uint *v14;
  ushort *v15;

  v11 = a1;
  v12 = a4;
  v13 = a2;
  v14 = a3;
  *a1 = Function_200b358(a11);
  v11[1] = (uint *)LoadFromMsgNARC(0, 26, v12, a11);
  v11[6] = (uint *)Function_2023790(256, a11);
  v11[7] = (uint *)Function_2023790(256, a11);
  v11[8] = v14;
  v15 = (ushort *)LoadPlayerDataAdress(a10);
  v11[10] = (uint *)Function_2027ac0(v15);
  v11[11] = 0;
  return Function_201a7e8(v13, (int)(v11 + 2), 1, a5, a6, a7, a8, 11, a9);
}

//----- (0225D210) --------------------------------------------------------
int __fastcall Function_225d210(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;

  v2 = a1;
  v3 = a2;
  if ( Function_201d724(*(uint *)(a1 + 44) & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v2 + 44) & 0xFF);
  Function_201ada4_ClearTextBox(v2 + 8, 15);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 4), v3, *(ushort **)(v2 + 28));
  Function_200c388(*(uint **)v2, *(uint *)(v2 + 24), *(uint *)(v2 + 28));
  v4 = *(uint *)(v2 + 24);
  Function_201d738_CallInitTextInterpreter(v2 + 8, 1);
  if ( *(uint *)(v2 + 32) )
    Function_200e060(v2 + 8, 1, 1, 0xDu);
  else
    Function_200dc48(v2 + 8, 1, 31, 0xEu);
  return Function_201a9a4(v2 + 8);
}

//----- (0225D294) --------------------------------------------------------
int __fastcall Function_225d294(uint *a1)
{
  uint *v1;
  int result;

  v1 = a1;
  if ( Function_201d724(a1[11] & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(v1[11] & 0xFF);
  if ( v1[8] )
  {
    if ( v1[9] )
      Function_225d310(v1);
    Function_200e084((int)(v1 + 2), 1);
    result = Function_201ad10((int)(v1 + 2));
  }
  else
  {
    Function_200dc9c((int)(v1 + 2), 1);
    result = Function_201ad10((int)(v1 + 2));
  }
  return result;
}

//----- (0225D2EC) --------------------------------------------------------
int __fastcall Function_225d2ec(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 32);
  if ( result == 1 )
  {
    if ( *(uint *)(v1 + 36) )
      ErrorHandler();
    result = Function_200e7fc((int *)(v1 + 8), 1);
    *(uint *)(v1 + 36) = result;
  }
  return result;
}

//----- (0225D310) --------------------------------------------------------
int __fastcall Function_225d310(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = *(uint *)(a1 + 32);
  if ( result == 1 )
  {
    if ( !*(uint *)(v1 + 36) )
      ErrorHandler();
    Function_200eba0(*(uint *)(v1 + 36));
    result = 0;
    *(uint *)(v1 + 36) = 0;
  }
  return result;
}

//----- (0225D330) --------------------------------------------------------
uint __fastcall Function_225d330(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  if ( Function_201d724(*(uint *)(a1 + 44) & 0xFF) )
    Call_RemoveTextInterpreterTaskFromTaskList(*(uint *)(v1 + 44) & 0xFF);
  if ( *(uint *)(v1 + 36) )
    Function_225d310(v1);
  Function_201a8fc(v1 + 8);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 28), v2);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 24), v3);
  Function_200b190(*(ushort **)(v1 + 4));
  return Function_200b3f0(*(uint **)v1, v4);
}

//----- (0225D37C) --------------------------------------------------------
int __fastcall Function_225d37c(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;

  v2 = a1;
  v3 = a2;
  Function_201ada4_ClearTextBox(a1 + 8, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v2 + 4), v3, *(ushort **)(v2 + 28));
  Function_200c388(*(uint **)v2, *(uint *)(v2 + 24), *(uint *)(v2 + 28));
  Function_2002eec(0, *(uint *)(v2 + 24), 0, 0xB0u);
  v4 = *(uint *)(v2 + 24);
  return Function_201d78c(v2 + 8, 1);
}

//----- (0225D3D0) --------------------------------------------------------
uint __fastcall Function_225d3d0(int *a1, int a2)
{
  return Function_200b60c(*a1, 0, a2, 5, 2, 1);
}

