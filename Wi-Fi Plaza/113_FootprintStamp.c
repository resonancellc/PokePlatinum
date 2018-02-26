//----- (0225C700) --------------------------------------------------------
int __fastcall Function_225c700(int a1)
{
  int v1;
  uint **v2;
  uint *v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v1 = a1;
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  REG_DISPCNT &= 0xFFFF1FFF;
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  REG_BLDCNT = 0;
  REG_BLDCNT_SUB = 0;
  Function_2017fc8(3, 118, 327680);
  v2 = (uint **)MallocSomeDataAndStorePtrInOverlayData1c(v1, 6628, 0x76u);
  MI_CpuFill8(v2, 0, 0x19E4u);
  v3 = (uint *)LoadPtrToOverWorldDataIn18(v1);
  *v2 = v3;
  v2[1] = (uint *)((int (__fastcall *)(uint))dword_222E0C4)(*v3);
  v2[1656] = (uint *)((int (__fastcall *)(uint))dword_222E0C8[0])(**v2);
  Function_225dd14(v2);
  Function_225dd4c(*((uchar *)*v2 + 4), v2[1], v2 + 566);
  v2[1653] = (uint *)0x2000;
  v2[1654] = v2[1653];
  v2[5] = (uint *)Function_225dc6c(118);
  v4 = MallocFill120(0x76u);
  v2[3] = v4;
  Function_2003858((int)v4, 1);
  Function_2002f70((int)v2[3], 0, 512, 0x76u);
  Function_2002f70((int)v2[3], 1, 512, 0x76u);
  Function_2002f70((int)v2[3], 2, 448, 0x76u);
  Function_2002f70((int)v2[3], 3, 512, 0x76u);
  Function_2003858((int)v2[3], 1);
  v2[2] = (uint *)Function_2018340(0x76u);
  Function_201dbec(64, 0x76u);
  Function_2017dd4(4, 8);
  Function_225cf58(v2[2]);
  Function_201e3d8();
  Function_201e450(4u);
  Function_2002bb8(2, 0x76u);
  v2[11] = Function_200b358(0x76u);
  v2[12] = (uint *)LoadFromMsgNARC(0, 26, 650, 0x76u);
  v2[4] = (uint *)Function_2012744(4, 0x76u);
  v2[88] = LoadFromNARC_8(187, 0x76u, v5, v6);
  v2[89] = LoadFromNARC_8(70, 0x76u, v7, v8);
  Function_225d160(v2, v2[88]);
  Function_225daa8(v2, v2[88]);
  Function_225d9fc(v2);
  Function_225dbcc(v2);
  v2[49] = (uint *)Function_2023790(256, 0x76u);
  v9 = Function_200c6e4(0x76u);
  v2[7] = v9;
  Function_200c73c(v9, &dword_2260954, dword_22608E8, 32);
  Function_200966c(1, 2097168, v10, v11);
  Function_2009704(1);
  v2[8] = (uint *)Function_200c704(v2[7]);
  Function_200c7c0(v2[7], (int **)v2[8], 128);
  Function_200cb30(v2[7], (int)v2[8], dword_22608FC);
  v12 = Function_200c738((int)v2[7]);
  Function_200964c(v12, 0, 1114112, v13);
  Function_2039734();
  Function_225e368(v2 + 101, v2[1656]);
  Function_225d304(v2, v2[88]);
  Function_225d630(v2, v2[88]);
  Function_225d484(v2);
  Function_225d6f8(v2);
  Function_225d7cc(v2);
  v2[9] = Function_2015920(0x76u);
  Function_200f174(0, 1, 1, 0, 6, 1, 118);
  if ( **v2 )
    ((void (*)(void))dword_222E31C[0])();
  Function_201ff0c(1u, 1);
  Function_201ff0c(2u, 1);
  Function_201ff0c(4u, 1);
  Function_201ff0c(8u, 1);
  Function_201ff74(2u, 1);
  Function_201ff74(4u, 1);
  byte_21BF6E1 = 1;
  Function_201ffe8();
  Function_201ffd0();
  Function_201ff0c(0x10u, 1);
  Function_201ff74(0x10u, 1);
  Function_2002ac8(1);
  Function_2002ae4(0);
  Function_2002b20(0);
  v2[6] = AddTaskToTaskList1((int)Function_225cef0, (int)v2, 0xEA60u);
  SetMainLoopFunctionCall((int)Function_225cf18, (int)v2);
  return 1;
}

//----- (0225CA04) --------------------------------------------------------
int __fastcall Function_225ca04(int a1, int *a2)
{
  int *v2;
  uint **v3;
  int v4;
  int v5;
  ushort *v6;
  uint *v7;
  int v8;
  ushort *v9;
  uint *v10;
  int result;
  int v12;
  int v13;
  uint *v14;
  int v15;
  int v16;
  int v17;
  char v18;
  char v19;
  char v20;

  v2 = a2;
  v3 = (uint **)LoadOverlayData1c(a1);
  Function_225e3f0(v3 + 101, v3[51], v3[623], *((uchar *)*v3 + 4));
  v4 = *v2;
  if ( (uint)*v2 <= 0xA )
    JUMPOUT(__CS__, *((short *)&off_225CA3C + v4) + 36031038);
  switch ( (uchar)v4 )
  {
    case 0:
      v3[90] = (uint *)1;
      Function_22607d8(v3);
      Function_225dd24(v3, &v20);
      ++*v2;
      goto LABEL_35;
    case 1:
      if ( Function_200f2ac() == 1 )
      {
        v3[623] = (uint *)1;
        ++*v2;
      }
      goto LABEL_35;
    case 2:
      if ( word_21BF6DC && (ushort)word_21BF6DA < 0xA0u && Function_225e318(v3, 1365) == 1 )
      {
        BYTE1(v3[3 * *((uchar *)v3 + 2336) + 568]) = word_21BF6D8;
        BYTE2(v3[3 * *((uchar *)v3 + 2336) + 568]) = word_21BF6DA;
        Function_225ddc0(v3, &v3[3 * *((uchar *)v3 + 2336) + 566], v3[91]);
        Function_2260818(&v3[3 * *((uchar *)v3 + 2336) + 566]);
      }
      v5 = Function_2260748(v3 + 566, *((uchar *)v3 + 2336));
      if ( v5 >= 6 )
      {
        if ( *v2 == 2 && v5 == 254 )
        {
          Function_2005748(0x5E5u);
          Function_20039b0((int)v3[3], 0, 9, 1u, 8u, 0);
          Function_20039b0((int)v3[3], 2, (ushort)(16 * *((uchar *)v3 + 2337)), 0x10u, 8u, 0);
          *v2 = 3;
        }
      }
      else
      {
        *((uchar *)v3 + 2336) = v5;
        Function_225e068(v3);
      }
      goto LABEL_35;
    case 3:
      Function_201ada4_ClearTextBox((int)(v3 + 45), 15);
      Function_200e060((int)(v3 + 45), 0, 1, 0xEu);
      Function_200b1b8_CallMsgDecrypt((ushort **)v3[12], 2u, (ushort *)v3[49]);
      v6 = (ushort *)LoadPlayerDataAdress((int)v3[1]);
      Function_2027ac0(v6);
      v7 = v3[49];
      *((uchar *)v3 + 200) = Function_201d738_CallInitTextInterpreter((int)(v3 + 45), 1);
      ++*v2;
      goto LABEL_35;
    case 4:
      if ( !Function_201d724(*((uchar *)v3 + 200)) )
      {
        v14 = v3[2];
        v15 = 1;
        v16 = 31;
        v17 = 11;
        v18 = 25;
        v19 = 6;
        Function_2015958((int)v3[9], (int)&v14);
        *((uchar *)v3 + 40) = 1;
        ++*v2;
      }
      goto LABEL_35;
    case 5:
      GetPaletteAdresses((int)v3[3], 0, 176, 64);
      v8 = Function_20159fc((int)v3[9]);
      if ( v8 == 1 )
      {
        Function_2015a54(v3[9]);
        *((uchar *)v3 + 40) = 0;
        Function_200e084((int)(v3 + 45), 0);
        v3[90] = 0;
        v3[623] = (uint *)3;
        *v2 = 9;
      }
      else if ( v8 == 2 )
      {
        Function_2015a54(v3[9]);
        *((uchar *)v3 + 40) = 0;
        Function_200e084((int)(v3 + 45), 0);
        Function_20039b0((int)v3[3], 0, 9, 1u, 0, 0);
        Function_20039b0((int)v3[3], 2, (ushort)(16 * *((uchar *)v3 + 2337)), 0x10u, 0, 0);
        *v2 = 2;
      }
      goto LABEL_35;
    case 6:
      Function_201ada4_ClearTextBox((int)(v3 + 45), 15);
      Function_200e060((int)(v3 + 45), 0, 1, 0xEu);
      Function_200b1b8_CallMsgDecrypt((ushort **)v3[12], 3u, (ushort *)v3[49]);
      v9 = (ushort *)LoadPlayerDataAdress((int)v3[1]);
      Function_2027ac0(v9);
      v10 = v3[49];
      *((uchar *)v3 + 200) = Function_201d738_CallInitTextInterpreter((int)(v3 + 45), 1);
      ++*v2;
      goto LABEL_35;
    case 7:
      if ( !Function_201d724(*((uchar *)v3 + 200)) )
        ++*v2;
      goto LABEL_35;
    case 8:
      if ( (uchar)++*((uchar *)v3 + 41) > 0x5Au )
        *v2 = 9;
      goto LABEL_35;
    case 9:
      if ( !Function_200f2ac() )
        Function_200f2c0();
      Function_200f174(0, 0, 0, 0, 6, 1, 118);
      ++*v2;
      goto LABEL_35;
    case 0xA:
      if ( Function_200f2ac() == 1 )
        ++*v2;
LABEL_35:
      Function_225e118(v3);
      Function_225e294(v3);
      if ( v3[623] == (uint *)1 )
      {
        v12 = 400;
        v3[100] = (uint *)((char *)v3[100] + 1);
        if ( (int)v3[100] > 30 )
        {
          v3[100] = 0;
          v12 = Function_225de98(v3);
        }
        if ( (((int (__fastcall *)(int))dword_2231760[0])(v12) == 1
           || ((int (__fastcall *)(uint))dword_222E12C[0])(**v3) == 1)
          && *v2 != 4 )
        {
          if ( *((uchar *)v3 + 40) == 1 )
            Function_2015a54(v3[9]);
          v3[90] = 0;
          v3[623] = (uint *)3;
          if ( ((int (__cdecl *)(int, int, int))dword_2231760[0])(2492, 3, v13) == 1 )
          {
            *v2 = 9;
          }
          else
          {
            Function_2005748(0x5F1u);
            ((void (__fastcall *)(uint))dword_222E2A4[0])(**v3);
            *v2 = 6;
          }
        }
      }
      Function_225e364(v3);
      result = 0;
      break;
    default:
      ((void (*)(void))dword_2232DC8[0])();
      result = 1;
      break;
  }
  return result;
}

//----- (0225CDFC) --------------------------------------------------------
int __fastcall Function_225cdfc(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  Call_RemoveTaskFromTaskList(*(int **)(v2 + 24));
  Function_225d5d8(v2);
  Function_225d7a4(v2);
  Function_2015938(*(uint *)(v2 + 36));
  Function_225e378(v2 + 404);
  Function_20237bc_FreeMsg(*(uint *)(v2 + 196), v3);
  Function_2002c60(2);
  Function_20127bc(*(uint *)(v2 + 16));
  Function_200b190(*(ushort **)(v2 + 48));
  Function_200b3f0(*(uint **)(v2 + 44), v4);
  Function_225dc4c(v2);
  Function_225d12c(*(uint *)(v2 + 8));
  free(*(uint *)(v2 + 8));
  Function_200d0b0(*(uint *)(v2 + 28), *(int ***)(v2 + 32));
  Function_200c8d4(*(uint *)(v2 + 28));
  Function_2002fa0(*(uint *)(v2 + 12), 0);
  Function_2002fa0(*(uint *)(v2 + 12), 1);
  Function_2002fa0(*(uint *)(v2 + 12), 2);
  Function_2002fa0(*(uint *)(v2 + 12), 3);
  Call_free1(*(uint *)(v2 + 12));
  Function_225dafc(v2);
  Function_225da9c(v2);
  Function_225dd0c(*(uint *)(v2 + 20));
  Call_FS_CloseFile(*(int **)(v2 + 352));
  Call_FS_CloseFile(*(int **)(v2 + 356));
  SetMainLoopFunctionCall(0, 0);
  Function_20177a4();
  Function_201dc3c();
  Function_201e530();
  Function_2002ac8(0);
  Function_2002ae4(0);
  Function_2002b20(0);
  Function_2039794();
  FreeSomeDataAndStore0InOverlayData1c(v1);
  Function_201807c(118);
  return 1;
}

//----- (0225CEF0) --------------------------------------------------------
int __fastcall Function_225cef0(int a1, int a2)
{
  int v2;

  v2 = a2;
  Function_225e4e8(a2 + 404);
  Function_225db08(v2);
  Function_200c7ec(*(int **)(v2 + 32));
  Function_200c808();
  return Function_20241bc(0, 0);
}

//----- (0225CF18) --------------------------------------------------------
int __fastcall Function_225cf18(int a1)
{
  int v1;
  int result;

  v1 = a1;
  Function_225e65c(a1 + 404, *(uint *)(a1 + 2492));
  Function_201dcac();
  Function_200c800();
  Function_2003694(*(uint *)(v1 + 12));
  Function_201c2b8(*(uint *)(v1 + 8));
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (0225CF58) --------------------------------------------------------
uint __fastcall Function_225cf58(uint *a1, int a2, int a3, int a4)
{
  uint *v4;
  int *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v21;
  int v22;
  int v23;
  int v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;
  char v30;
  char v31;
  int v32;

  v32 = a4;
  v4 = a1;
  Function_201ff00();
  Function_201ff68();
  v5 = dword_2260974;
  v6 = &v25;
  v7 = 5;
  do
  {
    v8 = *v5;
    v9 = v5[1];
    v5 += 2;
    *(uint *)v6 = v8;
    *((uint *)v6 + 1) = v9;
    v6 += 8;
    --v7;
  }
  while ( v7 );
  GX_SetBanks((int *)&v25);
  MIi_CpuClear32(0, (uint *)0x6000000, 0x80000);
  MIi_CpuClear32(0, (uint *)0x6200000, 0x20000);
  MIi_CpuClear32(0, (uint *)0x6400000, 0x40000);
  MIi_CpuClear32(0, (uint *)0x6600000, 0x20000);
  v21 = 1;
  v22 = 0;
  v23 = 0;
  v24 = 1;
  SetGraphicsModes(&v21);
  v10 = dword_2260B14;
  v11 = &v29;
  v12 = 10;
  do
  {
    v13 = *v10;
    v14 = v10[1];
    v10 += 2;
    *(uint *)v11 = v13;
    *((uint *)v11 + 1) = v14;
    v11 += 8;
    --v12;
  }
  while ( v12 );
  *(uint *)v11 = *v10;
  Function_20183c4(v4, 1u, (int *)&v29, 0);
  Function_2019ebc(v4, 1u);
  Function_2019184((int)v4, 1u, 0, 0);
  Function_2019184((int)v4, 1u, 3u, 0);
  Function_20183c4(v4, 2u, (int *)&v30, 0);
  Function_2019ebc(v4, 2u);
  Function_2019184((int)v4, 2u, 0, 0);
  Function_2019184((int)v4, 2u, 3u, 0);
  Function_20183c4(v4, 3u, (int *)&v31, 0);
  Function_2019ebc(v4, 3u);
  Function_2019184((int)v4, 3u, 0, 0);
  Function_2019184((int)v4, 3u, 3u, 0);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 2;
  Function_201ff0c(1u, 1);
  v15 = dword_2260B68;
  v16 = &v26;
  v17 = 10;
  do
  {
    v18 = *v15;
    v19 = v15[1];
    v15 += 2;
    *(uint *)v16 = v18;
    *((uint *)v16 + 1) = v19;
    v16 += 8;
    --v17;
  }
  while ( v17 );
  *(uint *)v16 = *v15;
  Function_20183c4(v4, 5u, (int *)&v26, 0);
  Function_2019ebc(v4, 5u);
  Function_2019184((int)v4, 5u, 0, 0);
  Function_2019184((int)v4, 5u, 3u, 0);
  Function_20183c4(v4, 6u, (int *)&v27, 0);
  Function_2019ebc(v4, 6u);
  Function_2019184((int)v4, 6u, 0, 0);
  Function_2019184((int)v4, 6u, 3u, 0);
  Function_20183c4(v4, 7u, (int *)&v28, 0);
  Function_2019ebc(v4, 7u);
  Function_2019184((int)v4, 7u, 0, 0);
  Function_2019184((int)v4, 7u, 3u, 0);
  return Function_2019690(5u, 32, 0, 0x76u);
}

//----- (0225D12C) --------------------------------------------------------
int __fastcall Function_225d12c(int a1)
{
  int v1;

  v1 = a1;
  Function_2019044(a1, 6);
  Function_2019044(v1, 5);
  Function_2019044(v1, 7);
  Function_2019044(v1, 3);
  Function_2019044(v1, 2);
  return Function_2019044(v1, 1);
}

//----- (0225D160) --------------------------------------------------------
int __fastcall Function_225d160(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  short v5;
  ushort *v6;
  int v7;
  int v8;

  v2 = a1;
  v3 = a2;
  Function_2003050(*(uint *)(a1 + 12), 187, 19, 118, 0, 448, 0);
  Function_20070e8(v3, 0x12u, *(uint **)(v2 + 8), 2u, 0, 0, 0, 118);
  Function_200710c(v3, 0x11u, *(uint **)(v2 + 8), 2u, 0, 0, 0, 118);
  Function_200710c(v3, 0x14u, *(uint **)(v2 + 8), 3u, 0, 0, 0, 118);
  Function_2003050(*(uint *)(v2 + 12), 187, 23, 118, 1, 0, 0);
  if ( !*(uchar *)(*(uint *)v2 + 4) )
    Function_2003120(*(uint *)(v2 + 12), 1, 16, 1, 0, 0x20u);
  Function_20070e8(v3, 0x16u, *(uint **)(v2 + 8), 6u, 0, 0, 0, 118);
  Function_200710c(v3, 0x15u, *(uint **)(v2 + 8), 6u, 0, 0, 0, 118);
  Function_200710c(v3, 0x18u, *(uint **)(v2 + 8), 7u, 0, 0, 0, 118);
  v4 = Function_2019fe4(*(uint *)(v2 + 8), 6);
  MIi_CpuCopy16(v4, v2 + 2496, 2048, v5);
  MIi_CpuClear16(0, v4, 2048);
  v6 = (ushort *)LoadPlayerDataAdress(*(uint *)(v2 + 4));
  v7 = Function_2027b50(v6);
  LOBYTE(v4) = v7;
  v8 = Function_200dd08(v7);
  Function_2003050(*(uint *)(v2 + 12), 38, v8, 118, 0, 32, 0xE0u);
  Function_200dd0c(*(uint **)(v2 + 8), 1u, 1, 14, v4, 118);
  Function_2003050(*(uint *)(v2 + 12), 14, 6, 118, 0, 32, 0xD0u);
  if ( *(uchar *)(*(uint *)v2 + 4) )
    Function_2003050(*(uint *)(v2 + 12), 187, 25, 118, 1, 32, 0xD0u);
  else
    Function_2003050(*(uint *)(v2 + 12), 14, 6, 118, 1, 32, 0xD0u);
  return Function_201c3c0(*(uint *)(v2 + 8), 6);
}

//----- (0225D304) --------------------------------------------------------
int __fastcall Function_225d304(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a2;
  v3 = a1;
  Function_200cdc4(*(uint *)(a1 + 12), 2u, *(uint **)(v3 + 28), *(uint *)(v3 + 32), a2, 3u, 0, 3, 1, 10001);
  Function_200cc3c(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 4u, 0, 1, 10007);
  Function_200ce24(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 5u, 0, 10002);
  Function_200ce54(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 6u, 0, 10002);
  v4 = 0;
  do
    Function_200cc3c(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 0x10u, 0, 1, v4++ + 10001);
  while ( v4 < 6 );
  Function_200ce24(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 0xFu, 0, 10001);
  Function_200ce54(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 0xEu, 0, 10001);
  v5 = Function_200cdc4(
         *(uint *)(v3 + 12),
         2u,
         *(uint **)(v3 + 28),
         *(uint *)(v3 + 32),
         v2,
         3u,
         0,
         1,
         1,
         10002);
  if ( *(uchar *)(*(uint *)v3 + 4) )
    v6 = 0x7FFF;
  else
    v6 = 0;
  Function_20038b0(*(uint *)(v3 + 12), 2, 2, v6, 16 * v5 & 0xFFFF, 16 * v5 + 16);
  Function_200cc3c(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 2u, 0, 1, 10008);
  Function_200ce24(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 1u, 0, 10003);
  Function_200ce54(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 0, 0, 10003);
  result = Function_200cd7c(*(uint *)(v3 + 12), 2u, *(int **)(v3 + 28), *(uint *)(v3 + 32), 187, 26, 0, 1, 1, 10003);
  *(uchar *)(v3 + 2337) = result;
  return result;
}

//----- (0225D484) --------------------------------------------------------
uint __fastcall Function_225d484(int a1)
{
  int *v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  short v8;
  int v9;
  int *v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  short v16;
  int v17;
  int *v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  short v24;
  int v25;
  ushort *v26;
  int v27;
  short v29;
  short v30;
  int v31;

  v1 = dword_2260A04;
  v2 = a1;
  v3 = (char *)&v29;
  v4 = 6;
  do
  {
    v5 = *v1;
    v6 = v1[1];
    v1 += 2;
    *(uint *)v3 = v5;
    *((uint *)v3 + 1) = v6;
    v3 += 8;
    --v4;
  }
  while ( v4 );
  v7 = 0;
  *(uint *)v3 = *v1;
  v8 = 16;
  v9 = v2;
  do
  {
    v29 = v8;
    v30 = 176;
    *(uint *)(v9 + 2340) = Function_200ce6c(*(uint **)(v2 + 28), *(uint *)(v2 + 32), &v29);
    Function_200d364(*(int **)(v9 + 2340), v7);
    Function_200d324(**(uint **)(v9 + 2340));
    ++v7;
    v8 += 32;
    v9 += 4;
  }
  while ( v7 < 6 );
  v10 = dword_2260A38;
  v11 = (char *)&v29;
  v12 = 6;
  do
  {
    v13 = *v10;
    v14 = v10[1];
    v10 += 2;
    *(uint *)v11 = v13;
    *((uint *)v11 + 1) = v14;
    v11 += 8;
    --v12;
  }
  while ( v12 );
  v15 = 0;
  *(uint *)v11 = *v10;
  v16 = 16;
  v17 = v2;
  do
  {
    v29 = v16;
    v30 = 176;
    *(uint *)(v17 + 2364) = Function_200ce6c(*(uint **)(v2 + 28), *(uint *)(v2 + 32), &v29);
    Function_200d364(*(int **)(v17 + 2364), v15);
    Function_200d324(**(uint **)(v17 + 2364));
    ++v15;
    v16 += 32;
    v17 += 4;
  }
  while ( v15 < 6 );
  v18 = dword_2260A6C;
  v19 = (char *)&v29;
  v20 = 6;
  do
  {
    v21 = *v18;
    v22 = v18[1];
    v18 += 2;
    *(uint *)v19 = v21;
    *((uint *)v19 + 1) = v22;
    v19 += 8;
    --v20;
  }
  while ( v20 );
  v23 = 0;
  *(uint *)v19 = *v18;
  v24 = 16;
  v25 = v2;
  do
  {
    v29 = v24;
    v30 = 176;
    v31 = v23 + 10001;
    *(uint *)(v25 + 2388) = Function_200ce6c(*(uint **)(v2 + 28), *(uint *)(v2 + 32), &v29);
    Function_200d324(**(uint **)(v25 + 2388));
    ++v23;
    v24 += 32;
    v25 += 4;
  }
  while ( v23 < 6 );
  v26 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v2 + 48), 1u);
  Function_225e15c(v2, v2 + 6592, v26, 2, 66051, 0, 10003, 224, 176, 1);
  Function_20129d0(*(uint **)(v2 + 6592), 1);
  return Function_20237bc_FreeMsg((int)v26, v27);
}

//----- (0225D5D8) --------------------------------------------------------
int __fastcall Function_225d5d8(int a1)
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
  v3 = a1;
  do
  {
    Function_200d0f4(*(uint *)(v3 + 2340));
    ++v2;
    v3 += 4;
  }
  while ( v2 < 6 );
  v4 = 0;
  v5 = v1;
  do
  {
    Function_200d0f4(*(uint *)(v5 + 2364));
    ++v4;
    v5 += 4;
  }
  while ( v4 < 6 );
  v6 = 0;
  v7 = v1;
  do
  {
    Function_200d0f4(*(uint *)(v7 + 2388));
    ++v6;
    v7 += 4;
  }
  while ( v6 < 6 );
  return Function_225e250(v1 + 6592);
}

//----- (0225D630) --------------------------------------------------------
int __fastcall Function_225d630(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a1;
  Function_200cdc4(
    *(uint *)(a1 + 12),
    3u,
    *(uint **)(v3 + 28),
    *(uint *)(v3 + 32),
    a2,
    0xAu,
    0,
    1,
    2,
    10004);
  Function_200cc3c(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 9u, 0, 2, 10009);
  Function_200ce24(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 8u, 0, 10004);
  Function_200ce54(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 7u, 0, 10004);
  v4 = 0;
  do
    Function_200cc3c(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 0xDu, 0, 2, v4++ + 10010);
  while ( v4 < 8 );
  Function_200ce24(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 0xCu, 0, 10005);
  return Function_200ce54(*(uint **)(v3 + 28), *(uint *)(v3 + 32), v2, 0xBu, 0, 10005);
}

//----- (0225D6F8) --------------------------------------------------------
uint __fastcall Function_225d6f8(int a1)
{
  int v1;
  int *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  uint result;
  int i;
  int *v9;
  int v10;
  char v11;
  int v12;

  v1 = a1;
  *(uint *)(a1 + 2412) = Function_200ce6c(
                             *(uint **)(a1 + 28),
                             *(uint *)(a1 + 32),
                             (short *)dword_226099C);
  Function_200d324(**(uint **)(v1 + 2412));
  Function_200d3f4(*(uint **)(v1 + 2412), 0);
  v2 = dword_22609D0;
  v3 = &v11;
  v4 = 6;
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
  result = *v2;
  *(uint *)v3 = *v2;
  for ( i = 0; i < 8; ++i )
  {
    v12 = i + 10010;
    v9 = Function_200ce6c(*(uint **)(v1 + 28), *(uint *)(v1 + 32), (short *)&v11);
    v10 = v1 + 4 * i;
    *(uint *)(v10 + 2416) = v9;
    Function_200d500(*(int **)(v10 + 2416), SLOWORD(dword_2260934[i]), SHIWORD(dword_2260934[i]), 1114112);
    Function_200d324(**(uint **)(v1 + 4 * i + 2416));
    result = Function_200d3f4(*(uint **)(v1 + 4 * i + 2416), 0);
  }
  return result;
}

//----- (0225D7A4) --------------------------------------------------------
uint __fastcall Function_225d7a4(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  Function_200d0f4(*(uint *)(a1 + 2412));
  v2 = 0;
  do
  {
    result = Function_200d0f4(*(uint *)(v1 + 2416));
    ++v2;
    v1 += 4;
  }
  while ( v2 < 8 );
  return result;
}

//----- (0225D7CC) --------------------------------------------------------
int __fastcall Function_225d7cc(int a1)
{
  int v1;
  uint v2;
  short *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  uchar v11;
  uint **v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v1 = a1;
  v14 = 0;
  v15 = Function_2003164(*(uint *)(a1 + 12), 2);
  v9 = Function_200316c(*(uint *)(v1 + 12), 2);
  v16 = 0;
  v11 = 0;
  v13 = v1;
  v12 = (uint **)v1;
  v10 = v15;
  do
  {
    v2 = *(ushort *)(v13 + 2266);
    if ( *(ushort *)(v13 + 2266) && v2 <= 0x1ED )
    {
      v5 = *(uint *)(v1 + 356);
      v6 = *(uint *)(v1 + 6624);
      v7 = *(uint *)(v1 + 352);
      Function_225d938(v2, *(uchar *)(v13 + 2272), v12[597]);
      *(ushort *)(v10 + 34) = *(ushort *)(v13 + 2264);
      *(ushort *)(v9 + 34) = *(ushort *)(v13 + 2264);
      Function_200393c(v15 + 2 * (v16 + 17), v15 + 2 * (v16 + 33), 1u, 12, 0);
      *(ushort *)(v9 + 66) = *(ushort *)(v10 + 66);
      if ( !v14 )
      {
        v14 = 1;
        *(uchar *)(v1 + 2336) = v16;
      }
    }
    else
    {
      Function_200d3f4(v12[585], 0);
      Function_200d3f4(v12[591], 0);
      Function_200d3f4(v12[597], 0);
      v3 = &word_22608AC;
      v4 = 0;
      do
      {
        Function_2019cb8(*(uint *)(v1 + 8), 2, *v3, v11, v4++ + 20, 4u, 1u, 0x11u);
        ++v3;
      }
      while ( v4 < 4 );
    }
    v13 += 12;
    ++v12;
    v11 += 4;
    v10 += 2;
    v9 += 2;
    ++v16;
  }
  while ( v16 < 6 );
  Function_225e0d4(v1, 0);
  return Function_201c3c0(*(uint *)(v1 + 8), 2);
}

//----- (0225D938) --------------------------------------------------------
int __fastcall Function_225d938(int a1, int a2, int *a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v10;
  int v11;
  int v12;
  short v13;
  short v14;
  int v15;
  uint *v16;
  int v17;
  int v18;

  v18 = a4;
  v6 = a1;
  v7 = a3;
  v8 = a4;
  if ( !a1 || a1 > 493 )
    return 0;
  if ( Function_2260788() == 1 )
  {
    v16 = Function_200723c(a5, v6 + 3, 1, 118, 1);
    NNS_G2dGetUnpackedPaletteData((int)v16, &v17);
    DC_FlushRange(*(uint *)(v17 + 20), 256);
    v10 = *(uint *)(v17 + 20);
    v15 = *(uint *)(v17 + 20) + 128;
  }
  else
  {
    v16 = Function_200723c(v8, 0x10u, 0, 118, 1);
    NNS_G2dGetUnpackedPaletteData((int)v16, &v17);
    DC_FlushRange(*(uint *)(v17 + 20), 128);
    v15 = *(uint *)(v17 + 20);
    v10 = v15 + 64;
  }
  if ( a6 == 1 )
    v11 = 104857600;
  else
    v11 = 106954752;
  v12 = Function_2021f98(*v7);
  MIi_CpuCopy16(v15, v11 + *(uint *)(v12 + 4 * a6), 64, v13);
  MIi_CpuCopy16(v10, v11 + 64 + *(uint *)(v12 + 4 * a6), 64, v14);
  free((int)v16);
  return 1;
}

//----- (0225D9FC) --------------------------------------------------------
int __fastcall Function_225d9fc(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v13 = a4;
  v4 = a1;
  v10 = 0;
  v11 = -32768;
  v12 = 0;
  a1[51] = Function_20203ac(0x76u);
  Function_20206d0(&v10, 507904, L"", 4004, 0, 0, v4[51]);
  Function_20206bc(4096, 3686400, v4[51]);
  Function_20203d4(v4[51]);
  v5 = Function_2020a88(v4[51]);
  v6 = Function_2020a90(v4[51]);
  Function_201e34c(v5, v6, 5461, &v9, &v8);
  v4[52] = v9;
  result = v8;
  v4[53] = v8;
  return result;
}

//----- (0225DA9C) --------------------------------------------------------
uint __fastcall Function_225da9c(int a1)
{
  return Call_free5(*(uint *)(a1 + 204));
}

//----- (0225DAA8) --------------------------------------------------------
int __fastcall Function_225daa8(int *a1, int a2)
{
  int *v2;
  uint v3;

  v2 = a1;
  if ( *(uchar *)(*a1 + 4) )
    v3 = 27;
  else
    v3 = 28;
  Function_20170d8(a1 + 54, a2, v3, 118);
  Function_2017258(v2 + 58, (int)(v2 + 54));
  Function_2017350(v2 + 58, 0, 0, 0);
  Function_201736c(v2 + 58, 4096, 4096, 4096);
  return Function_2017348((int)(v2 + 58), 1);
}

//----- (0225DAFC) --------------------------------------------------------
int __fastcall Function_225dafc(int a1)
{
  return Function_2017110((int *)(a1 + 216));
}

//----- (0225DB08) --------------------------------------------------------
int *__fastcall Function_225db08(int a1)
{
  int v1;
  int v3;
  int v4[9];
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  v8 = 4096;
  v9 = 4096;
  v10 = 4096;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  MTX_Identity33_(v4);
  Call_G3X_Reset();
  Function_20203d4(*(uint *)(v1 + 204));
  Function_2020854(0, *(int **)(v1 + 204));
  Function_20203ec();
  Function_20af51c(0, 0, -4096, 0);
  Function_20af558(0, 29596);
  Function_20af56c(0x7FFF, 0x7FFF, 0);
  Function_20af590(0x7FFF, 0x7FFF, 0);
  Function_20af4bc(&v5);
  MI_Copy36B(v4, dword_21C5B48);
  dword_21C5B88 &= 0xFFFFFF5B;
  Function_20af4ec(&v8);
  Function_20b275c(17, 0, 0);
  Function_2017294(v1 + 232);
  Function_225e4a0(v1 + 404);
  v3 = 1;
  return Function_20b275c(18, (int)&v3, 1);
}

//----- (0225DBCC) --------------------------------------------------------
int __fastcall Function_225dbcc(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  v1 = a1;
  Function_201a7e8(*(uint **)(a1 + 8), a1 + 180, 1, 2, 1, 0x1Bu, 4u, 13, 147);
  result = Function_201ada4_ClearTextBox(v1 + 180, 15);
  v3 = 0;
  v4 = v1 + 52;
  while ( v3 < 8 )
  {
    Function_201a7e8(
      *(uint **)(v1 + 8),
      v4 + 16 * v3,
      5,
      *((uchar *)dword_22608C8 + 2 * v3),
      *((uchar *)dword_22608C8 + 2 * v3 + 1),
      8u,
      2u,
      13,
      16 * v3 + 512);
    result = Function_201ada4_ClearTextBox(v4 + 16 * v3++, 0);
  }
  return result;
}

//----- (0225DC4C) --------------------------------------------------------
uint __fastcall Function_225dc4c(int a1)
{
  int v1;
  int v2;
  int v3;
  uint result;

  v1 = a1;
  Function_201a8fc(a1 + 180);
  v2 = 0;
  v3 = v1 + 52;
  do
  {
    result = Function_201a8fc(v3);
    ++v2;
    v3 += 16;
  }
  while ( v2 < 8 );
  return result;
}

//----- (0225DC6C) --------------------------------------------------------
int __fastcall Function_225dc6c(uint a1)
{
  return Function_2024220(a1, 0, 2, 0, 2, (void (*)(void))Function_225dc88);
}

//----- (0225DC88) --------------------------------------------------------
int *Function_225dc88()
{
  int *result;

  Function_201ff0c(1u, 1);
  REG_BG0CNT = REG_BG0CNT & 0xFFFC | 1;
  GFX_CONTROL &= 0xCFFDu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 0x10;
  GFX_CONTROL &= 0xCFFBu;
  GFX_CONTROL = GFX_CONTROL & 0xCFFF | 8;
  GFX_CONTROL &= 0xCFDFu;
  G3X_SetFog(0, 0, 0, 0);
  G3X_SetClearColor(0, 0, 0x7FFF, 63, 0);
  result = &GFX_VIEWPORT;
  GFX_VIEWPORT = -1073807360;
  return result;
}

//----- (0225DD0C) --------------------------------------------------------
uint __fastcall Function_225dd0c(int a1)
{
  return Function_20242c4(a1);
}

//----- (0225DD14) --------------------------------------------------------
int __fastcall Function_225dd14(int a1)
{
  int v1;
  int result;

  v1 = a1;
  result = ((int (*)(void))dword_22328F0[0])();
  *(uint *)(v1 + 364) = result;
  return result;
}

//----- (0225DD24) --------------------------------------------------------
int __fastcall Function_225dd24(int a1, ushort *a2)
{
  ushort *v2;
  int result;

  v2 = a2;
  MI_CpuFill8(a2, 0, 0xCu);
  v2[1] = 150;
  *v2 = 31;
  *((uint *)v2 + 1) = 257;
  result = 0;
  *((uchar *)v2 + 8) = 0;
  return result;
}

//----- (0225DD44) --------------------------------------------------------
int __fastcall Function_225dd44(int a1)
{
  return a1 + 360;
}

//----- (0225DD4C) --------------------------------------------------------
int __fastcall Function_225dd4c(int a1, int a2, ushort *a3)
{
  ushort *v3;
  int v4;
  int v5;
  int result;
  int v7;
  int i;
  int *v9;
  uint v10;
  int v11;
  uint *v12;

  v3 = a3;
  v11 = a1;
  v4 = a2;
  MI_CpuFill8(a3, 0, 0x48u);
  v5 = LoadPokePartyAdress(v4);
  v12 = (uint *)v5;
  result = GetNrOfPkmnInParty(v5);
  v7 = result;
  for ( i = 0; i < v7; v3 += 6 )
  {
    v9 = GetAdrOfPkmnInParty(v12, i);
    v3[1] = GetPkmnData(v9, 0xAEu, 0);
    *((uint *)v3 + 1) = GetPkmnData(v9, 0, 0);
    *((uchar *)v3 + 8) = GetPkmnData(v9, 0x70u, 0);
    v10 = GetPkmnData(v9, 7u, 0);
    result = Function_226072c(v11, v10);
    *v3 = result;
    ++i;
  }
  return result;
}

//----- (0225DDC0) --------------------------------------------------------
int __fastcall Function_225ddc0(int *a1, ushort *a2, int a3)
{
  int *v3;
  ushort *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a1[89];
  v7 = a1[1656];
  v8 = a1[88];
  v14 = Function_225e398(a1, a1 + 101);
  if ( v14 == 1 )
  {
    v9 = ((int (__fastcall *)(int))dword_2232B8C[0])(v5);
    if ( v9 != -1 )
    {
      v10 = 2 * v9;
      v11 = v4[1];
      if ( v11 != *((ushort *)v3 + v9 + 1230) || *v4 != *(ushort *)((char *)v3 + v10 + 2476) )
      {
        *(ushort *)((char *)v3 + v10 + 2460) = v11;
        *(ushort *)((char *)v3 + v10 + 2476) = *v4;
        v12 = v3[1656];
        Function_225d938(v4[1], *((uchar *)v4 + 8), (int *)v3[v9 + 604], v3[88], v3[89], 2);
        Function_200d3f4((uint *)v3[v9 + 604], 1);
        Function_20038b0(v3[3], 1, 2, *v4, (v9 + 33) & 0xFFFF, v9 + 34);
      }
    }
    Function_2005748(0x5EBu);
  }
  return v14;
}

//----- (0225DE98) --------------------------------------------------------
int __fastcall Function_225de98(int a1)
{
  int v1;
  int i;
  int v3;
  ushort *v4;
  int j;
  int v6;
  int v7;
  char v8;
  int k;
  int result;
  int v11;
  int v12;
  int v13;
  char v14;
  int v15;

  v1 = a1;
  v13 = 0;
  v12 = 0;
  ((void (__fastcall *)(char *))dword_2232B4C[0])(&v14);
  for ( i = 0; i < 8; ++i )
  {
    v3 = *(uint *)(v15 + 4 * i);
    if ( *(uint *)(v1 + 4 * i + 368) != v3 )
    {
      if ( v3 == -1 )
      {
        Function_2260714(v1 + 52, i);
        v7 = v1 + 2 * i;
        *(ushort *)(v7 + 2460) = 0;
        *(ushort *)(v7 + 2476) = 0;
        Function_200d3f4(*(uint **)(v1 + 4 * i + 2416), 0);
        Function_2019cb8(
          *(uint *)(v1 + 8),
          6,
          0,
          dword_2260AD4[2 * i] & 0xFF,
          HIWORD(dword_2260AD4[2 * i]),
          dword_2260AD4[2 * i + 1],
          HIWORD(dword_2260AD4[2 * i + 1]),
          0x10u);
        Function_201c3c0(*(uint *)(v1 + 8), 6);
        ++v12;
      }
      else
      {
        Function_2260620(*(uint *)(v1 + 48), *(uint *)(v1 + 44), v1 + 52, **(uint **)v1, *(uint *)(v15 + 4 * i));
        v11 = Function_2019fe4(*(uint *)(v1 + 8), 6);
        v4 = (ushort *)&dword_2260AD4[2 * i];
        for ( j = v4[1]; j < v4[1] + v4[3]; ++j )
        {
          v6 = 2 * (32 * j + LOWORD(dword_2260AD4[2 * i]));
          MIi_CpuCopy16(v1 + 2496 + v6, v11 + v6, 2 * v4[2], v6);
        }
        Function_201c3c0(*(uint *)(v1 + 8), 6);
        ++v13;
      }
      if ( *(uint *)(v1 + 364) == *(uint *)(v15 + 4 * i) )
      {
        Function_200d500(*(int **)(v1 + 2412), SLOWORD(dword_2260914[i]), SHIWORD(dword_2260914[i]), 1114112);
        Function_200d3f4(*(uint **)(v1 + 2412), 1);
      }
    }
    *(uint *)(v1 + 4 * i + 368) = *(uint *)(v15 + 4 * i);
  }
  v8 = 0;
  for ( k = 0; k < 8; ++k )
  {
    if ( *(uint *)(v1 + 4 * k + 368) != -1 )
      ++v8;
  }
  *(uchar *)(v1 + 2259) = v8;
  if ( v13 <= 0 )
  {
    if ( v12 <= 0 )
    {
      result = 0;
    }
    else
    {
      Function_2005748(0x5E4u);
      result = 2;
    }
  }
  else
  {
    Function_2005748(0x5E4u);
    result = 1;
  }
  return result;
}

//----- (0225E044) --------------------------------------------------------
int __fastcall Function_225e044(int a1, int a2)
{
  return Function_2260620(*(uint *)(a1 + 48), *(uint *)(a1 + 44), a1 + 52, **(uint **)a1, a2);
}

//----- (0225E05C) --------------------------------------------------------
int __fastcall Function_225e05c(int a1, int a2)
{
  return Function_2260714(a1 + 52, a2);
}

//----- (0225E068) --------------------------------------------------------
int __fastcall Function_225e068(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  short *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  short v15;
  short v16;
  int v17;

  v17 = a4;
  v4 = dword_2260AA0;
  v5 = a1;
  v6 = a2;
  v7 = &v15;
  v8 = 6;
  do
  {
    v9 = *v4;
    v10 = v4[1];
    v4 += 2;
    *(uint *)v7 = v9;
    *((uint *)v7 + 1) = v10;
    v7 += 4;
    --v8;
  }
  while ( v8 );
  v11 = *v4;
  v12 = 0;
  *(uint *)v7 = v11;
  v13 = v5;
  while ( *(uint *)(v13 + 2448) )
  {
    ++v12;
    v13 += 4;
    if ( v12 >= 3 )
      goto LABEL_7;
  }
  v15 = 32 * v6 + 16;
  v16 = 176;
  *(uint *)(v5 + 4 * v12 + 2448) = Function_200ce6c(*(uint **)(v5 + 28), *(uint *)(v5 + 32), &v15);
LABEL_7:
  Function_225e0d4(v5, v6);
  return Function_2005748(0x5E5u);
}

//----- (0225E0D4) --------------------------------------------------------
uint __fastcall Function_225e0d4(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  short v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_2003164(*(uint *)(a1 + 12), 2);
  v5 = Function_200316c(*(uint *)(v2 + 12), 2);
  MIi_CpuCopy16(v4 + 34, v5 + 34, 12, v6);
  return Function_200393c(v4 + 2 * (v3 + 17), v5 + 2 * (v3 + 17), 1u, 6, 0);
}

//----- (0225E118) --------------------------------------------------------
int *__fastcall Function_225e118(int a1)
{
  int v1;
  int v2;
  int *result;

  v1 = 0;
  v2 = a1;
  do
  {
    result = *(int **)(v2 + 2448);
    if ( result )
    {
      if ( Function_200d3b8(result) )
      {
        result = (int *)Function_200d324(**(uint **)(v2 + 2448));
      }
      else
      {
        Function_200d0f4(*(uint *)(v2 + 2448));
        result = (int *)2448;
        *(uint *)(v2 + 2448) = 0;
      }
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 < 3 );
  return result;
}

//----- (0225E15C) --------------------------------------------------------
int __fastcall Function_225e15c(uint *a1, int **a2, int a3, int a4, int a5, char a6, int a7, int a8, int a9, int a10)
{
  int **v10;
  uint *v11;
  int v12;
  uint *v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  uint *v19;
  int result;
  int v21;
  int v22;
  int v23;
  int v24;
  char v25;
  int v26;
  int *v27;
  char v28;
  int v29;
  char *v30;
  int v31;
  uchar *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;

  v41 = a4;
  v10 = a2;
  v11 = a1;
  v21 = a3;
  v22 = a4;
  v12 = a8;
  if ( *a2 )
    ErrorHandler();
  v13 = (uint *)v11[2];
  v14 = v11[8];
  Function_225e264(v21, v22, &v24, &v23);
  Function_201a7a0((int)&v28);
  Function_201a870(v13, (int)&v28, (uchar)v23, 2, 0, 0);
  Function_201d7e0((int)&v28, v22);
  v15 = Function_2012898((int)&v28, 1, 0x76u);
  Function_201ed94(v15, 1, 1, (int)&v25);
  if ( a10 == 1 )
    v12 = a8 - v24 / 2;
  v29 = v11[4];
  v30 = &v28;
  v31 = Function_200d9b0(v14);
  v32 = Function_200d04c(v14, a7);
  v33 = 0;
  v34 = v26;
  v35 = v12;
  v36 = a9 - 8;
  v38 = 51;
  v39 = 1;
  v40 = 118;
  v37 = 0;
  v16 = Function_20127e8(&v29);
  Function_2012ac0(v16, a6);
  Function_20128c4(v16, v12, a9 - 8, v17);
  Function_201a8fc((int)&v28);
  *v10 = v16;
  v18 = v26;
  v19 = v10 + 1;
  *v19 = *(uint *)&v25;
  v19[1] = v18;
  v10[3] = v27;
  result = v24;
  *((ushort *)v10 + 8) = v24;
  return result;
}

//----- (0225E250) --------------------------------------------------------
uint __fastcall Function_225e250(int **a1)
{
  int **v1;

  v1 = a1;
  Function_2012870(*a1);
  return Function_201ee28((int)(v1 + 1));
}

//----- (0225E264) --------------------------------------------------------
int __fastcall Function_225e264(int a1, int a2, int *a3, int *a4)
{
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int result;

  v4 = a3;
  v5 = a4;
  v6 = Function_2002d7c(a2, a1, 0);
  v7 = v6;
  v8 = v6 / 8;
  result = Function_20bd140(v6, 8);
  if ( result )
    ++v8;
  *v4 = v7;
  *v5 = v8;
  return result;
}

//----- (0225E294) --------------------------------------------------------
int __fastcall Function_225e294(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int v4;
  short v5;
  int v6;
  int result;

  v1 = a1;
  v2 = a1[1653];
  if ( v2 == a1[1654] )
  {
    a1[1653] = v2 + 136;
    if ( a1[1653] > 0x2000 )
      a1[1653] = 0x2000;
    a1[1654] = a1[1653];
  }
  else
  {
    a1[1654] -= a1[1655];
    v3 = a1[1653];
    if ( a1[1654] < v3 )
      a1[1654] = v3;
  }
  v4 = 0;
  v5 = 16;
  v6 = (short)(208 - (a1[1654] >> 8));
  do
  {
    result = Function_200d500((int *)v1[585], v5, v6, 1114112);
    ++v4;
    v5 += 32;
    ++v1;
  }
  while ( v4 < 6 );
  return result;
}

//----- (0225E318) --------------------------------------------------------
int __fastcall Function_225e318(uint *a1, int a2)
{
  uint *v2;
  int v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = a1[1653];
  if ( v4 < v3 )
    return 0;
  if ( a1[1654] < v4 )
  {
    ErrorHandler();
    v2[1654] = v2[1653];
  }
  v2[1653] -= v3;
  v2[1655] = (v2[1654] - v2[1653]) / 4;
  return 1;
}

//----- (0225E364) --------------------------------------------------------
void Function_225e364()
{
  ;
}

//----- (0225E368) --------------------------------------------------------
ushort *__fastcall Function_225e368(ushort *a1)
{
  return MI_CpuFill8(a1, 0, 0x744u);
}

//----- (0225E378) --------------------------------------------------------
int __fastcall Function_225e378(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = 0;
  do
  {
    result = *(uint *)(v1 + 180);
    if ( result )
      result = Function_225eb0c();
    ++v2;
    v1 += 4;
  }
  while ( v2 < 128 );
  return result;
}

//----- (0225E398) --------------------------------------------------------
BOOL __fastcall Function_225e398(int a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;

  if ( *(uchar *)(a2 + 1852) )
    return 0;
  v3 = 0;
  v4 = a2;
  do
  {
    if ( !*(uint *)(v4 + 180) )
    {
      v5 = a2 + 180;
      v6 = 4 * v3;
      *(uint *)(v5 + v6) = Function_225e6b8(a1, a2);
      return *(uint *)(v5 + v6) != 0;
    }
    ++v3;
    v4 += 4;
  }
  while ( v3 < 128 );
  return 0;
}

//----- (0225E3F0) --------------------------------------------------------
int __fastcall Function_225e3f0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  uint v9;

  v2 = a2;
  v3 = a1;
  if ( *(uchar *)(a1 + 1853) )
    Function_225fd80();
  if ( *(uchar *)(v3 + 1852)
    && ((int (__fastcall *)(int, int, int))dword_2260C0C[*(uchar *)(v3 + 1852)])(v3, v3, v2) == 1 )
  {
    *(uchar *)(v3 + 1852) = 0;
  }
  v4 = 0;
  v5 = v3;
  do
  {
    result = v5 + 180;
    v7 = *(uint *)(v5 + 180);
    if ( v7 )
    {
      v8 = *(uint *)(v7 + 576);
      if ( !((uint)(v8 << 16) >> 24) )
      {
        v9 = v8 << 8;
        if ( v9 >> 24 )
          *(uint *)(v7 + 576) = (v9 >> 24 << 8) & 0xFFFF | *(uint *)(v7 + 576) & 0xFFFF00FF;
      }
      result = ((int (__fastcall *)(int, int))*(&off_2260CAC + 3 * (*(uint *)(v7 + 576) << 16 >> 24)))(v3, v7);
      if ( result == 1 )
        result = Function_225eb20(v3, v7, v4);
    }
    ++v4;
    v5 += 4;
  }
  while ( v4 < 128 );
  return result;
}

//----- (0225E4A0) --------------------------------------------------------
int *__fastcall Function_225e4a0(int a1)
{
  int v1;
  int v2;
  int v3;
  int *result;
  int v5;
  int (__fastcall *v6)(int);

  v1 = a1;
  v2 = 0;
  v3 = a1;
  do
  {
    result = (int *)(v3 + 180);
    v5 = *(uint *)(v3 + 180);
    if ( v5 )
    {
      v6 = (int (__fastcall *)(int))*(&off_2260CAC + 3 * (*(uint *)(v5 + 576) << 16 >> 24) + 1);
      if ( v6 )
        result = (int *)v6(v1);
      else
        result = Function_2017294(v5 + 28);
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 128 );
  return result;
}

//----- (0225E4E8) --------------------------------------------------------
int __fastcall Function_225e4e8(int a1)
{
  int v1;
  int v2;
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
  int v13;
  int v14;
  int i;
  int v16;
  int v17;
  int v18;

  v1 = a1;
  v18 = 0;
  v17 = 0;
  v2 = 0;
  v3 = a1;
  v4 = a1;
  do
  {
    v5 = *(uint *)(v3 + 180);
    if ( v5 )
    {
      if ( *(uint *)(v5 + 576) << 16 >> 24 )
      {
        *(uint *)(v4 + 692) = v5;
        v4 += 4;
        ++v18;
      }
      else
      {
        *(uint *)(v1 + 4 * (127 - v17++) + 692) = v5;
      }
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 128 );
  for ( i = 0; i < v17; ++i )
  {
    v6 = *(uint *)(v1 + 4 * (127 - i) + 692);
    v16 = 0;
    if ( v18 > 0 )
    {
      v7 = v1;
      while ( 1 )
      {
        v14 = *(uint *)(v7 + 692);
        if ( ((int (__fastcall *)(int))*(&off_2260CAC + 3 * (*(uint *)(v14 + 576) << 16 >> 24) + 2))(v1) == 1
          && Function_225eebc(v6, *(uint *)(v14 + 576) << 16 >> 24) == 1
          && *(uint *)(v6 + 576) >> 24 == 255 )
        {
          break;
        }
        v7 += 4;
        if ( ++v16 >= v18 )
          goto LABEL_15;
      }
      *(uint *)(v6 + 576) = *(uint *)(v6 + 576) & 0xFFFFFF | (*(uint *)(v14 + 576) >> 24 << 24);
      Function_225ee0c(v1, *(uint *)(v14 + 576) >> 24, *(uint *)(v14 + 576) << 16 >> 24);
    }
LABEL_15:
    ;
  }
  result = 1853;
  if ( *(uchar *)(v1 + 1853) )
  {
    result = *(uchar *)(v1 + 1854);
    if ( result == 1 )
    {
      v9 = 0;
      v10 = v1;
      do
      {
        v11 = *(uint *)(v10 + 180);
        if ( v11 )
        {
          v12 = *(uchar *)(v1 + 1853);
          v13 = *(uint *)(v11 + 576);
          if ( (uint)(v13 << 16) >> 24 != v12
            && (uint)(v13 << 8) >> 24 != v12
            && !Function_225eebc(*(uint *)(v10 + 180), v12) )
          {
            Function_225eb20(v1, v11, v9);
          }
        }
        ++v9;
        v10 += 4;
      }
      while ( v9 < 128 );
      result = Function_225ee98(v1);
    }
  }
  return result;
}

//----- (0225E65C) --------------------------------------------------------
int __fastcall Function_225e65c(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int result;
  int v6;

  v2 = a1;
  v3 = 0;
  v6 = a2;
  v4 = (int *)(a1 + 1204);
  do
  {
    if ( *v4 )
    {
      DC_FlushRange(*v4, *(uint *)(*v4 + 4));
      Function_20ae900(*v4, 1);
      Function_20aea20(*v4, 1);
      *v4 = 0;
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 32 );
  result = *(uchar *)(v2 + 1856);
  if ( *(uchar *)(v2 + 1856) )
  {
    result = v6;
    if ( v6 != 3 )
    {
      SetBrightness(0, *(short *)(v2 + 1858));
      result = 1856;
      *(uchar *)(v2 + 1856) = 0;
    }
  }
  return result;
}

//----- (0225E6B8) --------------------------------------------------------
int __fastcall Function_225e6b8(int a1, int a2, int a3, int a4, int a5, int a6)
{
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
  v11 = a2;
  v6 = a1;
  v7 = a3;
  v12 = a4;
  v8 = malloc(0x76u, 580);
  MI_CpuFill8((ushort *)v8, 0, 0x244u);
  *(uint *)(v8 + 576) = *(uint *)(v8 + 576) & 0xFFFFFF | 0xFF000000;
  v9 = *(uint *)(v7 + 4);
  *(uint *)v8 = *(uint *)v7;
  *(uint *)(v8 + 4) = v9;
  *(uint *)(v8 + 8) = *(uint *)(v7 + 8);
  if ( *(ushort *)(v8 + 2) > 0x1EDu )
  {
    ErrorHandler();
    *(ushort *)(v8 + 2) = 132;
  }
  if ( !Function_225e774(v11, v8 + 12, v12, a5, v8, a6) )
    return 0;
  Function_2017258((int *)(v8 + 28), v8 + 12);
  Function_225eb64(v6, *(uchar *)(v7 + 9), *(uchar *)(v7 + 10), &v14, &v13);
  Function_2017350((uint *)(v8 + 28), v14, v13, 0x10000);
  Function_201736c((uint *)(v8 + 28), 4096, 4096, 4096);
  Function_2017348(v8 + 28, 0);
  return v8;
}

//----- (0225E774) --------------------------------------------------------
int __fastcall Function_225e774(int a1, int *a2, int a3)
{
  int v3;
  int *v4;
  uint *v5;
  int v6;
  uint *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;

  v3 = a1;
  v4 = a2;
  v5 = Function_200723c(a3, 0x1Du, 0, 118, 0);
  *v4 = (int)v5;
  if ( !v5 )
    ErrorHandler();
  v6 = Function_20b3c0c_GetAdrOfDataPart(*v4);
  v4[1] = v6;
  if ( v6
    && (v6 == -8 || !*(uchar *)(v6 + 9) ? (v7 = 0) : (v7 = (uint *)(v6 + 8 + *(ushort *)(v6 + 14) + 4)), v7) )
  {
    v8 = v6 + *v7;
  }
  else
  {
    v8 = 0;
  }
  v4[2] = v8;
  v9 = Function_20b3c1c_GetTexOffsets(*v4);
  v4[3] = v9;
  if ( !v9 )
    return 1;
  Function_225e920(v9);
  v10 = Function_225e8b0(v4[3]);
  if ( v10 && Function_225e854(v3, v4[3]) )
  {
    Function_201cbb0(*v4, v4[3]);
    return 1;
  }
  if ( v10 == 1 )
  {
    Function_20ae9b8(v4[3], &v14, &v13);
    Function_20a5a34();
    Function_20a5a34();
    Function_20aea70(v4[3]);
    Function_20a5a44();
  }
  if ( *v4 )
    free(*v4);
  v11 = 16;
  do
  {
    *(uchar *)v4 = 0;
    v4 = (int *)((char *)v4 + 1);
    --v11;
  }
  while ( v11 );
  return 0;
}

//----- (0225E854) --------------------------------------------------------
int __fastcall Function_225e854(int a1, int a2)
{
  int v2;
  int v3;

  v2 = 0;
  v3 = a1;
  do
  {
    if ( !*(uint *)(v3 + 1204) )
    {
      *(uint *)(a1 + 4 * v2 + 1204) = a2;
      return 1;
    }
    ++v2;
    v3 += 4;
  }
  while ( v2 < 32 );
  return 0;
}

//----- (0225E884) --------------------------------------------------------
int __fastcall Function_225e884(int result, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = 0;
  v3 = result;
  while ( *(uint *)(v3 + 1204) != a2 )
  {
    ++v2;
    v3 += 4;
    if ( v2 >= 32 )
      return result;
  }
  v4 = result + 4 * v2;
  result = 1204;
  *(uint *)(v4 + 1204) = 0;
  return result;
}

//----- (0225E8B0) --------------------------------------------------------
int __fastcall Function_225e8b0(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;

  v1 = a1;
  *(uint *)(a1 + 8) = 0;
  Function_20ae8c4(a1);
  Function_20aea04(v1);
  v2 = Function_20a5a2c();
  if ( !v2 )
    return 0;
  v4 = *(ushort *)(v1 + 32) & 0x8000;
  v5 = Function_20a5a3c();
  if ( v5 )
  {
    Function_20ae8ec(v1, v2, 0);
    Function_20aea18(v1, v5);
    result = 1;
  }
  else
  {
    Function_20a5a34();
    result = 0;
  }
  return result;
}

//----- (0225E920) --------------------------------------------------------
uint __fastcall Function_225e920(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  ushort *v7;
  int v8;
  int v9;
  int v10;
  char v11;
  int v12;
  int v14;
  ushort *v15;
  int v16;
  int v17;
  int v18;
  uint *v19;
  int v20;
  int v21;

  v5 = a2;
  v14 = a1;
  v6 = a3;
  v15 = (ushort *)a4;
  v18 = Function_2260788(*(ushort *)(a4 + 2), *(uchar *)(a4 + 8), a5);
  v20 = v14 + *(uint *)(v14 + 20);
  if ( v18 == 1 )
    v19 = Function_200723c(v6, (ushort)v15[1] + 3, 1, 118, 1);
  else
    v19 = Function_200723c(v5, 0x10u, 0, 118, 1);
  NNS_G2dGetUnpackedPaletteData((int)v19, &v21);
  MIi_CpuClear16(0, v20, 64);
  v7 = (ushort *)v20;
  v8 = *(uint *)(v21 + 20);
  v16 = *(uint *)(v21 + 20);
  v17 = 0;
  do
  {
    switch ( (uchar)v17 )
    {
      case 0:
        if ( v18 == 1 )
          v8 = v16 + 128;
        else
          v8 = v16;
        v7 = (ushort *)v20;
        break;
      case 1:
        if ( v18 == 1 )
          v8 = v16 + 160;
        else
          v8 = v16 + 32;
        v7 = (ushort *)(v20 + 2);
        break;
      case 2:
        if ( v18 == 1 )
          v8 = v16;
        else
          v8 = v16 + 64;
        v7 = (ushort *)(v20 + 32);
        break;
      case 3:
        if ( v18 == 1 )
          v8 = v16 + 32;
        else
          v8 = v16 + 96;
        v7 = (ushort *)(v20 + 34);
        break;
      default:
        break;
    }
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = 0;
      v12 = 0;
      do
      {
        if ( *(uchar *)(v8 + v9) & 0xF )
          *v7 |= 1 << v11;
        if ( *(uchar *)(v8 + v9) & 0xF0 )
          *v7 |= 1 << (v11 + 2);
        ++v12;
        v11 += 4;
        ++v9;
      }
      while ( v12 < 4 );
      v7 += 2;
      ++v10;
    }
    while ( v10 < 8 );
    ++v17;
  }
  while ( v17 < 4 );
  *(ushort *)(v14 + *(uint *)(v14 + 56) + 2) = *v15;
  return free((int)v19);
}

//----- (0225EA60) --------------------------------------------------------
uint __fastcall Function_225ea60(int a1, int a2)
{
  int v2;
  short v3;
  uint *v4;
  char v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  char v10;
  uint *v11;
  int v12;
  int v13;
  uint *v14;
  int v16;
  int v17;
  int v18;

  v16 = a1;
  v2 = a2;
  v18 = *(uint *)(a1 + 20);
  v17 = malloc(0x76u, 64);
  MIi_CpuCopy16(v16 + v18, v17, 64, v3);
  MIi_CpuClear16(0, v16 + v18, 64);
  if ( v2 == 3 )
  {
    v4 = (uint *)v17;
    v5 = 30;
    v6 = 0;
    do
    {
      v7 = 0;
      v8 = (int *)(v16 + v18);
      do
      {
        v9 = *v8 | (((*v4 >> v7) & 3) << v5);
        v7 += 2;
        *v8 = v9;
        ++v8;
      }
      while ( v7 < 32 );
      ++v6;
      v5 -= 2;
      ++v4;
    }
    while ( v6 < 16 );
  }
  else if ( v2 == 4 )
  {
    v10 = 0;
    v11 = (uint *)v17;
    v12 = 0;
    do
    {
      v13 = 0;
      v14 = (uint *)(v16 + v18 + 60);
      do
      {
        *v14 |= ((*v11 >> v13) & 3) << v10;
        v13 += 2;
        --v14;
      }
      while ( v13 < 32 );
      ++v12;
      v10 += 2;
      ++v11;
    }
    while ( v12 < 16 );
  }
  return free(v17);
}

//----- (0225EB0C) --------------------------------------------------------
uint __fastcall Function_225eb0c(int a1)
{
  int v1;

  v1 = a1;
  Function_2017110((int *)(a1 + 12));
  return free(v1);
}

//----- (0225EB20) --------------------------------------------------------
uint *__fastcall Function_225eb20(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint *result;

  v3 = a1;
  v4 = a2;
  v5 = *(uint *)(a2 + 576);
  v6 = a3;
  if ( !(v5 & 0xF) || *(uint *)(a2 + 576) << 24 >> 28 == 1 )
    Function_225e884(v3, *(uint *)(a2 + 24));
  Function_225ee78(v3, *(uint *)(v4 + 576) >> 24);
  Function_225eb0c(v4);
  result = (uint *)(v3 + 4 * v6 + 180);
  *result = 0;
  return result;
}

//----- (0225EB64) --------------------------------------------------------
int __fastcall Function_225eb64(int a1, uint a2, int a3, int *a4, int *a5)
{
  int result;
  int *v6;
  uint v7;
  int v8;
  uint v9;
  int v10;

  result = a3;
  v6 = a4;
  v7 = (int)a2 / 16;
  if ( (uint)((int)a2 / 16) >= 0x11 )
    v7 = 16;
  v8 = dword_2260C68[v7];
  *v6 = v8;
  if ( v7 < 0x10 )
    *v6 += (dword_2260C68[v7 + 1] - v8) / 16 * ((a2 >> 31) + __ROR4__((a2 << 28) - (a2 >> 31), 28));
  v9 = a3 / 16;
  if ( (uint)(a3 / 16) >= 0xB )
    v9 = 10;
  v10 = dword_2260BE0[v9];
  *a5 = v10;
  if ( v9 < 0xA )
  {
    result = *a5
           + (dword_2260BE0[v9 + 1] - v10)
           / 16
           * (((uint)a3 >> 31) + __ROR4__((a3 << 28) - ((uint)a3 >> 31), 28));
    *a5 = result;
  }
  return result;
}

//----- (0225EBFC) --------------------------------------------------------
int __fastcall Function_225ebfc(int a1)
{
  int v1;
  char v3;

  v1 = 1;
  do
  {
    if ( !(*(uint *)(a1 + 1332) & (1 << v1)) )
    {
      *(uint *)(a1 + 1332) |= 1 << v1;
      return v1;
    }
    ++v1;
  }
  while ( v1 < 32 );
  v3 = 0;
  if ( v1 >= 63 )
    return 255;
  while ( *(uint *)(a1 + 1336) & (1 << v3) )
  {
    ++v1;
    ++v3;
    if ( v1 >= 63 )
      return 255;
  }
  *(uint *)(a1 + 1336) |= 1 << v3;
  return v1;
}

//----- (0225EC60) --------------------------------------------------------
int __fastcall Function_225ec60(int result, int a2)
{
  if ( a2 != 255 )
  {
    if ( a2 >= 32 )
      *(uint *)(result + 1336) &= ~(1 << (a2 - 32));
    else
      *(uint *)(result + 1332) &= ~(1 << a2);
  }
  return result;
}

//----- (0225ECA0) --------------------------------------------------------
int __fastcall Function_225eca0(uint *a1, int a2, uint *a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  uint v7;
  int result;
  int v9;
  long long v10;
  long long v11;
  long long v12;
  long long v13;
  int v14;
  int v15;
  long long v16;
  long long v17;
  long long v18;
  long long v19;
  int v20;
  char v21;
  int v22;
  int v23;
  char v24;
  int v25;
  int v26;
  int v27;

  v27 = a4;
  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = Function_22607b8(*(ushort *)(a2 + 2), *(uchar *)(a2 + 8));
  if ( v7 >= 3 )
    ErrorHandler();
  Function_2017358(v4, &v26, &v25, &v24);
  *v5 = v26 + dword_2260C38[4 * v7];
  v5[1] = v26 + dword_2260C3C[4 * v7];
  v5[2] = v25 + dword_2260C40[4 * v7];
  result = v25 + dword_2260C44[4 * v7];
  v5[3] = result;
  if ( v6 == 1 )
  {
    Function_2017374(v4, &v23, &v22, &v21);
    v9 = v5[1] - *v5;
    v10 = ll_mul(v23, 100LL);
    LODWORD(v11) = ll_sdiv(v10, 4096LL);
    v12 = ll_mul(v11, v9);
    LODWORD(v13) = ll_sdiv(v12, 100LL);
    v14 = ll_sdiv(v13 - v9, 2LL);
    v5[1] += v14;
    *v5 -= v14;
    v15 = v5[2] - v5[3];
    v16 = ll_mul(v22, 100LL);
    LODWORD(v17) = ll_sdiv(v16, 4096LL);
    v18 = ll_mul(v17, v15);
    LODWORD(v19) = ll_sdiv(v18, 100LL);
    v20 = ll_sdiv(v19 - v15, 2LL);
    v5[2] += v20;
    result = v5[3] - v20;
    v5[3] = result;
  }
  return result;
}

//----- (0225EDA4) --------------------------------------------------------
BOOL __fastcall Function_225eda4(uint *a1, uint *a2)
{
  return *a1 <= a2[1] && *a2 <= a1[1] && a1[2] >= a2[3] && a2[2] >= a1[3];
}

//----- (0225EDCC) --------------------------------------------------------
uint __fastcall Function_225edcc(int a1, int a2)
{
  uchar *v2;
  int v3;
  uint result;

  v2 = (uchar *)(a1 + 1340);
  v3 = 0;
  do
  {
    if ( !v2[1] )
    {
      *(uint *)(a2 + 576) = (v3 << 24) | *(uint *)(a2 + 576) & 0xFFFFFF;
      *v2 = 0;
      result = (uchar)v2[1] + 1;
      v2[1] = result;
      return result;
    }
    ++v3;
    v2 += 4;
  }
  while ( v3 < 128 );
  return ErrorHandler();
}

//----- (0225EE0C) --------------------------------------------------------
int __fastcall Function_225ee0c(int a1, int a2, char a3)
{
  int v4;

  if ( a2 == 255 )
    return 0;
  v4 = 4 * a2;
  *(uchar *)(a1 + 1340 + v4) = *(uchar *)(a1 + 1340 + 4 * a2) + 1;
  *(uchar *)(a1 + 1341 + v4) = *(uchar *)(a1 + 1341 + 4 * a2) + 1;
  if ( *(uchar *)(a1 + 1852)
    || *(uchar *)(a1 + 1853)
    || *(uchar *)(a1 + v4 + 1340) < *((short *)dword_2260BCC + *(uchar *)(a1 + 1855)) )
  {
    return 0;
  }
  *(uchar *)(a1 + 1853) = a3;
  MI_CpuFill8((ushort *)(a1 + 176), 0, 4u);
  return 1;
}

//----- (0225EE78) --------------------------------------------------------
int __fastcall Function_225ee78(int result, int a2)
{
  int v2;
  int v3;

  if ( a2 != 255 )
  {
    v2 = 4 * a2;
    v3 = result + 1341;
    result = *(uchar *)(result + 1341 + 4 * a2) - 1;
    if ( result < 0 )
    {
      ErrorHandler();
      result = 0;
    }
    *(uchar *)(v3 + v2) = result;
  }
  return result;
}

//----- (0225EE98) --------------------------------------------------------
int __fastcall Function_225ee98(ushort *a1)
{
  uchar *v1;
  int result;

  v1 = a1;
  MI_CpuFill8(a1, 0, 0xB0u);
  v1[1852] = v1[1853];
  v1[1853] = 0;
  result = 1854;
  v1[1854] = 0;
  return result;
}

//----- (0225EEBC) --------------------------------------------------------
int __fastcall Function_225eebc(int a1, int a2)
{
  int v2;

  v2 = *(uint *)(a1 + 576);
  if ( (uint)(v2 << 16) >> 24 || *(uint *)(a1 + 576) << 8 >> 24 || !(v2 & 0xF) )
    return 0;
  *(uint *)(a1 + 576) = (a2 << 16) & 0xFFFFFF | *(uint *)(a1 + 576) & 0xFF00FFFF;
  MI_CpuFill8((ushort *)(a1 + 148), 0, 0x1ACu);
  return 1;
}

//----- (0225EEF8) --------------------------------------------------------
int __fastcall Function_225eef8(int a1)
{
  return *((uchar *)dword_2260D30 + PkmnData_DivBy25(*(uint *)(a1 + 4)));
}

//----- (0225EF0C) --------------------------------------------------------
int __fastcall Function_225ef0c(int a1, uint *a2)
{
  int v2;
  int v3;
  uint *v4;
  int v5;

  v2 = (int)a2;
  v3 = a1;
  ++a2[37];
  v4 = a2 + 37;
  if ( a2[37] == 2 )
  {
    Function_225eca0(a2 + 7, (int)a2, a2 + 38, 0);
    Function_2017348(v2 + 28, 1);
    *(uint *)(v2 + 576) = *(uint *)(v2 + 576) & 0xFFFFFFF0 | 1;
  }
  if ( *v4 > 40 )
  {
    Function_225edcc(v3, v2);
    v5 = Function_225eef8(v2);
    Function_225eebc(v2, v5);
  }
  return 0;
}

//----- (0225EF74) --------------------------------------------------------
int Function_225ef74()
{
  return 0;
}

//----- (0225EF78) --------------------------------------------------------
int __fastcall Function_225ef78(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = a2 + 148;
  v4 = *(uchar *)(a2 + 156);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      Function_225ec60(a1, *(uchar *)(v3 + 9));
      return 1;
    }
  }
  else
  {
    *(uint *)v3 = 7936;
    *(uchar *)(v3 + 9) = Function_225ebfc(a1);
    *(uint *)(v3 + 4) = 4096;
    ++*(uchar *)(v3 + 8);
  }
  *(uint *)(v3 + 4) += 192;
  if ( *(uint *)v3 - 192 >= 256 )
  {
    *(uint *)v3 -= 192;
    Function_201736c((uint *)(v2 + 28), *(uint *)(v3 + 4), *(uint *)(v3 + 4), 4096);
  }
  else
  {
    Function_2017348(v2 + 28, 0);
    ++*(uchar *)(v3 + 8);
  }
  Function_225eca0((uint *)(v2 + 28), v2, (uint *)(v3 + 12), 1);
  return 0;
}

//----- (0225EFFC) --------------------------------------------------------
int *__fastcall Function_225effc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2;
  v3 = *(uchar *)(a2 + 157);
  if ( v3 != 255 )
  {
    Function_20af5b4(0, 0, 0, v3, *(uint *)(a2 + 148) >> 8, 0);
    Function_20b2d8c(*(uint *)(v2 + 20), 0, 1056964608);
    Function_20b2d8c(*(uint *)(v2 + 20), 0, 2031616);
  }
  return Function_2017294(v2 + 28);
}

//----- (0225F044) --------------------------------------------------------
BOOL __fastcall Function_225f044(int a1, int a2, int a3)
{
  return Function_225eda4((uint *)(a2 + 160), (uint *)(a3 + 152)) == 1;
}

//----- (0225F060) --------------------------------------------------------
int __fastcall Function_225f060(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v14 = a4;
  v4 = a2 + 148;
  v10 = a2;
  if ( *(uchar *)(a2 + 510) )
  {
    if ( *(uchar *)(a2 + 510) != 1 )
      goto LABEL_9;
  }
  else
  {
    Function_2017358((uint *)(a2 + 28), &v13, &v12, &v11);
    v5 = 0;
    v6 = (int *)v4;
    do
    {
      Function_2017258(v6, v10 + 12);
      Function_2017350(v6, v13, v12, v11);
      ++v5;
      v6 += 30;
    }
    while ( v5 < 3 );
    ++*(uchar *)(v4 + 362);
  }
  Function_2017358((uint *)(v10 + 28), &v13, &v12, &v11);
  Function_2017350((uint *)(v10 + 28), v13 - 0x2000, v12 - 0x2000, v11);
  Function_2017358((uint *)v4, &v13, &v12, &v11);
  Function_2017350((uint *)v4, v13 + 0x2000, v12 - 0x2000, v11);
  Function_2017358((uint *)(v4 + 120), &v13, &v12, &v11);
  Function_2017350((uint *)(v4 + 120), v13 - 0x2000, v12 + 0x2000, v11);
  Function_2017358((uint *)(v4 + 240), &v13, &v12, &v11);
  Function_2017350((uint *)(v4 + 240), v13 + 0x2000, v12 + 0x2000, v11);
  if ( (ushort)++*(ushort *)(v4 + 360) > 0x1Eu )
    return 1;
LABEL_9:
  Function_225eca0((uint *)(v10 + 28), v10, (uint *)(v4 + 364), 0);
  v8 = 0;
  v9 = v4 + 364;
  do
  {
    Function_225eca0((uint *)v4, v10, (uint *)(v9 + 16 * (v8++ + 1)), 0);
    v4 += 120;
  }
  while ( v8 < 3 );
  return 0;
}

//----- (0225F194) --------------------------------------------------------
int *__fastcall Function_225f194(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2;
  v3 = 0;
  v4 = a2 + 148;
  do
  {
    Function_2017294(v4);
    ++v3;
    v4 += 120;
  }
  while ( v3 < 3 );
  return Function_2017294(v2 + 28);
}

//----- (0225F1B8) --------------------------------------------------------
int __fastcall Function_225f1b8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;

  v3 = a3 + 148;
  v4 = 0;
  v5 = (uint *)(a2 + 512);
  do
  {
    if ( Function_225eda4(v5, (uint *)(v3 + 4)) == 1 )
      return 1;
    ++v4;
    v5 += 4;
  }
  while ( v4 < 4 );
  return 0;
}

//----- (0225F1E4) --------------------------------------------------------
int __fastcall Function_225f1e4(int a1, int *a2)
{
  int *v2;
  int v3;
  uint v4;
  uint *v5;
  uint v6;
  uint v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a2;
  v3 = a1;
  v4 = a2[37];
  v5 = a2 + 37;
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_225F208 + v4) + 36041226);
  switch ( (uchar)v4 )
  {
    case 0:
      v6 = (Function_2017394((int)(a2 + 7), 2) - 2730) & 0xFFFF;
      if ( v6 <= 0xE000 )
      {
        Function_225ea60(v2[6], (uint)(v2[144] << 16) >> 24);
        Function_225e854(v3, v2[6]);
        v2[144] = v2[144] & 0xFFFFFF0F | 0x10;
        v6 = (v6 + 0x4000) & 0xFFFF;
        ++*v5;
      }
      Function_2017388((int)(v2 + 7), v6, 2);
      goto LABEL_22;
    case 1:
      a2[144] &= 0xFFFFFF0F;
      v7 = (Function_2017394((int)(a2 + 7), 2) - 2730) & 0xFFFF;
      if ( v7 >= 0xC000 )
      {
        LOWORD(v7) = 0;
        ++*v5;
      }
      Function_2017388((int)(v2 + 7), v7, 2);
      goto LABEL_22;
    case 2:
      v8 = a2[38] + 1;
      a2[38] = v8;
      if ( v8 < 4 )
        goto LABEL_22;
      a2[38] = 0;
      ++*v5;
      goto LABEL_12;
    case 3:
LABEL_12:
      Function_2017358(a2 + 7, &v13, &v12, &v11);
      if ( v13 < -327680 || v13 > 327680 || v12 > 196608 || v12 < -196608 )
        return 1;
      if ( v5[2] >= 5 )
        Function_2017350(v2 + 7, v13 + 12288, v12 + 12288, v11);
      else
        Function_2017350(v2 + 7, v13 + 12288, v12 - 12288, v11);
      v10 = v5[2] + 1;
      v5[2] = v10;
      if ( v10 >= 10 )
        v5[2] = 0;
LABEL_22:
      Function_225eca0(v2 + 7, (int)v2, v5 + 3, 0);
      return 0;
    default:
      goto LABEL_22;
  }
}

//----- (0225F34C) --------------------------------------------------------
BOOL __fastcall Function_225f34c(int a1, int a2, int a3)
{
  return Function_225eda4((uint *)(a2 + 160), (uint *)(a3 + 152)) == 1;
}

//----- (0225F368) --------------------------------------------------------
int __fastcall Function_225f368(int a1, int *a2)
{
  int *v2;
  int v3;
  uint v4;
  uint *v5;
  uint v6;
  uint v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v2 = a2;
  v3 = a1;
  v4 = a2[37];
  v5 = a2 + 37;
  if ( v4 <= 3 )
    JUMPOUT(__CS__, *((short *)&off_225F38C + v4) + 36041614);
  switch ( (uchar)v4 )
  {
    case 0:
      v6 = (Function_2017394((int)(a2 + 7), 2) + 2730) & 0xFFFF;
      if ( v6 >= 0x2000 )
      {
        Function_225ea60(v2[6], (uint)(v2[144] << 16) >> 24);
        v6 = (v6 - 0x4000) & 0xFFFF;
        Function_225e854(v3, v2[6]);
        v2[144] = v2[144] & 0xFFFFFF0F | 0x10;
        ++*v5;
      }
      Function_2017388((int)(v2 + 7), v6, 2);
      goto LABEL_20;
    case 1:
      a2[144] &= 0xFFFFFF0F;
      v7 = (Function_2017394((int)(a2 + 7), 2) + 2730) & 0xFFFF;
      if ( v7 < 0x4000 )
      {
        LOWORD(v7) = 0;
        ++*v5;
      }
      Function_2017388((int)(v2 + 7), v7, 2);
      goto LABEL_20;
    case 2:
      v8 = a2[39] + 1;
      a2[39] = v8;
      if ( v8 < 4 )
        goto LABEL_20;
      Function_2017358(a2 + 7, &v14, &v13, &v12);
      v5[3] = v13;
      v5[2] = 0;
      ++*v5;
      goto LABEL_12;
    case 3:
LABEL_12:
      Function_2017358(v2 + 7, &v14, &v13, &v12);
      if ( v14 < -327680 || v14 > 327680 || v13 > 196608 || v13 < -196608 )
        return 1;
      v10 = v5[1] + 0x8000;
      v5[1] = v10;
      if ( v10 >= 1474560 )
        v5[1] -= 1474560;
      v11 = Function_201d2b8(v5[1]);
      Function_2017350(v2 + 7, v14 - 4096, v5[3] + (ull)((((ll)v11 << 15) + 2048) >> 12), v12);
LABEL_20:
      Function_225eca0(v2 + 7, (int)v2, v5 + 4, 0);
      return 0;
    default:
      goto LABEL_20;
  }
}

//----- (0225F500) --------------------------------------------------------
BOOL __fastcall Function_225f500(int a1, int a2, int a3)
{
  return Function_225eda4((uint *)(a2 + 164), (uint *)(a3 + 152)) == 1;
}

//----- (0225F51C) --------------------------------------------------------
int __fastcall Function_225f51c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4;
  v11 = a2;
  v4 = a2 + 148;
  if ( *(uchar *)(a2 + 513) )
  {
    if ( *(uchar *)(a2 + 513) != 1 )
    {
      Function_225ec60(a1, *(uchar *)(a2 + 512));
      return 1;
    }
  }
  else
  {
    *(uchar *)(a2 + 512) = Function_225ebfc(a1);
    Function_2017358((uint *)(v11 + 28), &v14, &v13, &v12);
    v5 = 0;
    v6 = (int *)v4;
    do
    {
      Function_2017258(v6, v11 + 12);
      Function_2017350(v6, v14, v13, v12);
      Function_2017348((int)v6, 0);
      ++v5;
      v6 += 30;
    }
    while ( v5 < 3 );
    ++*(uchar *)(v4 + 365);
  }
  Function_2017358((uint *)(v11 + 28), &v14, &v13, &v12);
  if ( v14 >= -327680 && v14 <= 327680 && v13 <= 196608 && v13 >= -196608 && *(uchar *)(v4 + 363) != 1 )
  {
    Function_2017350((uint *)(v11 + 28), v14, v13 + 10240, v12);
    s32_div_f(*(ushort *)(v4 + 360), 3);
    if ( !v9 )
    {
      Function_2017350((uint *)(v4 + 120 * *(uchar *)(v4 + 362)), v14, v13 + 10240, v12);
      Function_2017348(v4 + 120 * *(uchar *)(v4 + 362), 1);
      if ( (uchar)++*(uchar *)(v4 + 362) >= 3u )
        *(uchar *)(v4 + 362) = 0;
    }
    ++*(ushort *)(v4 + 360);
  }
  else
  {
    v7 = 0;
    v8 = v4;
    do
    {
      Function_2017348(v8, 0);
      ++v7;
      v8 += 120;
    }
    while ( v7 < 3 );
    Function_2017348(v11 + 28, 0);
    ++*(uchar *)(v4 + 365);
  }
  Function_225eca0((uint *)(v11 + 28), v11, (uint *)(v4 + 368), 0);
  return 0;
}

//----- (0225F680) --------------------------------------------------------
int *__fastcall Function_225f680(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  v3 = a2 + 148;
  v4 = *(uchar *)(a2 + 512);
  if ( v4 != 255 )
  {
    Function_20af5b4(0, 0, 0, v4, 8, 0);
    Function_20b2d8c(*(uint *)(v2 + 20), 0, 1056964608);
    Function_20b2d8c(*(uint *)(v2 + 20), 0, 2031616);
  }
  v5 = 0;
  v6 = v3;
  do
  {
    Function_2017294(v6);
    ++v5;
    v6 += 120;
  }
  while ( v5 < 3 );
  v7 = *(uchar *)(v3 + 364);
  if ( v7 != 255 )
  {
    Function_20af5b4(0, 0, 0, v7, 31, 0);
    Function_20b2d8c(*(uint *)(v2 + 20), 0, 1056964608);
    Function_20b2d8c(*(uint *)(v2 + 20), 0, 2031616);
  }
  return Function_2017294(v2 + 28);
}

//----- (0225F70C) --------------------------------------------------------
BOOL __fastcall Function_225f70c(int a1, int a2, int a3)
{
  return Function_225eda4((uint *)(a2 + 516), (uint *)(a3 + 152)) == 1;
}

//----- (0225F728) --------------------------------------------------------
int __fastcall Function_225f728(int a1, int a2)
{
  int v2;
  int v3;
  uint *v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v2 = a2;
  v3 = *(uint *)(a2 + 148);
  v4 = (uint *)(a2 + 148);
  if ( v3 )
  {
    if ( v3 != 1 )
      goto LABEL_13;
  }
  else
  {
    Function_2017358((uint *)(a2 + 28), &v10, &v9, &v8);
    v4[2] = v10;
    ++*v4;
  }
  Function_2017358((uint *)(v2 + 28), &v10, &v9, &v8);
  if ( v10 < -327680 || v10 > 327680 || v9 > 196608 || v9 < -196608 )
    return 1;
  v6 = v4[1] + 0x8000;
  v4[1] = v6;
  if ( v6 >= 1474560 )
    v4[1] -= 1474560;
  v7 = Function_201d2b8(v4[1]);
  Function_2017350(
    (uint *)(v2 + 28),
    v4[2] + (ull)((((ll)v7 << 15) + 2048) >> 12),
    v9 - 4096,
    v8);
LABEL_13:
  Function_225eca0((uint *)(v2 + 28), v2, v4 + 3, 0);
  return 0;
}

//----- (0225F7FC) --------------------------------------------------------
BOOL __fastcall Function_225f7fc(int a1, int a2, int a3)
{
  return Function_225eda4((uint *)(a2 + 160), (uint *)(a3 + 152)) == 1;
}

//----- (0225F818) --------------------------------------------------------
int __fastcall Function_225f818(int a1, int a2)
{
  int v2;
  int *v3;
  int v5;

  v2 = a2;
  v3 = (int *)(a2 + 148);
  if ( *(uchar *)(a2 + 154) )
  {
    if ( *(uchar *)(a2 + 154) != 1 )
      goto LABEL_8;
  }
  else
  {
    *v3 = 4096;
    ++*(uchar *)(a2 + 154);
  }
  if ( (ushort)++*(ushort *)(a2 + 152) > 8u )
    return 1;
  v5 = *v3 + 768;
  *v3 = v5;
  Function_201736c((uint *)(a2 + 28), v5, v5, 4096);
LABEL_8:
  Function_225eca0((uint *)(v2 + 28), v2, v3 + 2, 1);
  return 0;
}

//----- (0225F874) --------------------------------------------------------
BOOL __fastcall Function_225f874(int a1, int a2, int a3)
{
  return Function_225eda4((uint *)(a2 + 156), (uint *)(a3 + 152)) == 1;
}

//----- (0225F890) --------------------------------------------------------
int __fastcall Function_225f890(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a2 + 148;
  v16 = a2;
  v5 = *(uchar *)(a2 + 395);
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      Function_225ec60(a1, *(uchar *)(v4 + 246));
      return 1;
    }
  }
  else
  {
    *(uchar *)(v4 + 246) = Function_225ebfc(a1);
    Function_2017358((uint *)(v16 + 28), &v19, &v18, &v17);
    v6 = 0;
    v7 = (int *)v4;
    do
    {
      Function_2017258(v7, v16 + 12);
      Function_2017350(v7, v19, v18, v17);
      Function_2017348((int)v7, 1);
      ++v6;
      v7 += 30;
    }
    while ( v6 < 2 );
    *(ushort *)(v4 + 244) = 7936;
    ++*(uchar *)(v4 + 247);
  }
  if ( *(ushort *)(v4 + 244) - 160 >= 256 )
  {
    *(ushort *)(v4 + 244) -= 160;
    *(uint *)(v4 + 240) += 0x20000;
    if ( *(uint *)(v4 + 240) >= 1474560 )
      *(uint *)(v4 + 240) -= 1474560;
    v10 = (((ll)(int)Function_201d2b8(*(uint *)(v4 + 240)) << 16) + 2048) >> 12;
    Function_2017358((uint *)(v16 + 28), &v19, &v18, &v17);
    v11 = 0;
    v12 = (uint *)v4;
    do
    {
      if ( v11 & 1 )
        Function_2017350(v12, v19 + v10, v18, v17);
      else
        Function_2017350(v12, v19 - v10, v18, v17);
      ++v11;
      v12 += 30;
    }
    while ( v11 < 2 );
  }
  else
  {
    v8 = 0;
    v9 = v4;
    do
    {
      Function_2017348(v9, 0);
      ++v8;
      v9 += 120;
    }
    while ( v8 < 2 );
    Function_2017348(v16 + 28, 0);
    ++*(uchar *)(v4 + 247);
  }
  Function_225eca0((uint *)(v16 + 28), v16, (uint *)(v4 + 248), 0);
  v14 = 0;
  v15 = v4 + 248;
  do
  {
    Function_225eca0((uint *)v4, v16, (uint *)(v15 + 16 * (v14++ + 1)), 0);
    v4 += 120;
  }
  while ( v14 < 2 );
  return 0;
}

//----- (0225FA24) --------------------------------------------------------
int *__fastcall Function_225fa24(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a2 + 148;
  v4 = *(uchar *)(a2 + 394);
  if ( v4 != 255 )
  {
    Function_20af5b4(0, 0, 0, v4, (int)*(ushort *)(a2 + 392) >> 8, 0);
    Function_20b2d8c(*(uint *)(v2 + 20), 0, 1056964608);
    Function_20b2d8c(*(uint *)(v2 + 20), 0, 2031616);
  }
  v5 = 0;
  do
  {
    Function_2017294(v3);
    ++v5;
    v3 += 120;
  }
  while ( v5 < 2 );
  return Function_2017294(v2 + 28);
}

//----- (0225FA84) --------------------------------------------------------
int __fastcall Function_225fa84(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;

  v3 = a3 + 148;
  v4 = 0;
  v5 = (uint *)(a2 + 396);
  do
  {
    if ( Function_225eda4(v5, (uint *)(v3 + 4)) == 1 )
      return 1;
    ++v4;
    v5 += 4;
  }
  while ( v4 < 3 );
  return 0;
}

//----- (0225FAB0) --------------------------------------------------------
int __fastcall Function_225fab0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint *v12;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = a4;
  v4 = a2 + 148;
  v16 = a2;
  v5 = *(uchar *)(a2 + 395);
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      Function_225ec60(a1, *(uchar *)(v4 + 246));
      return 1;
    }
  }
  else
  {
    *(uchar *)(v4 + 246) = Function_225ebfc(a1);
    Function_2017358((uint *)(v16 + 28), &v19, &v18, &v17);
    v6 = 0;
    v7 = (int *)v4;
    do
    {
      Function_2017258(v7, v16 + 12);
      Function_2017350(v7, v19, v18, v17);
      Function_2017348((int)v7, 1);
      ++v6;
      v7 += 30;
    }
    while ( v6 < 2 );
    *(ushort *)(v4 + 244) = 7936;
    ++*(uchar *)(v4 + 247);
  }
  if ( *(ushort *)(v4 + 244) - 160 >= 256 )
  {
    *(ushort *)(v4 + 244) -= 160;
    *(uint *)(v4 + 240) += 0x20000;
    if ( *(uint *)(v4 + 240) >= 1474560 )
      *(uint *)(v4 + 240) -= 1474560;
    v10 = (((ll)(int)Function_201d2b8(*(uint *)(v4 + 240)) << 16) + 2048) >> 12;
    Function_2017358((uint *)(v16 + 28), &v19, &v18, &v17);
    v11 = 0;
    v12 = (uint *)v4;
    do
    {
      if ( v11 & 1 )
        Function_2017350(v12, v19, v18 + v10, v17);
      else
        Function_2017350(v12, v19, v18 - v10, v17);
      ++v11;
      v12 += 30;
    }
    while ( v11 < 2 );
  }
  else
  {
    v8 = 0;
    v9 = v4;
    do
    {
      Function_2017348(v9, 0);
      ++v8;
      v9 += 120;
    }
    while ( v8 < 2 );
    Function_2017348(v16 + 28, 0);
    ++*(uchar *)(v4 + 247);
  }
  Function_225eca0((uint *)(v16 + 28), v16, (uint *)(v4 + 248), 0);
  v14 = 0;
  v15 = v4 + 248;
  do
  {
    Function_225eca0((uint *)v4, v16, (uint *)(v15 + 16 * (v14++ + 1)), 0);
    v4 += 120;
  }
  while ( v14 < 2 );
  return 0;
}

//----- (0225FC44) --------------------------------------------------------
int *__fastcall Function_225fc44(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = a2;
  v3 = a2 + 148;
  v4 = *(uchar *)(a2 + 394);
  if ( v4 != 255 )
  {
    Function_20af5b4(0, 0, 0, v4, (int)*(ushort *)(a2 + 392) >> 8, 0);
    Function_20b2d8c(*(uint *)(v2 + 20), 0, 1056964608);
    Function_20b2d8c(*(uint *)(v2 + 20), 0, 2031616);
  }
  v5 = 0;
  do
  {
    Function_2017294(v3);
    ++v5;
    v3 += 120;
  }
  while ( v5 < 2 );
  return Function_2017294(v2 + 28);
}

//----- (0225FCA4) --------------------------------------------------------
int __fastcall Function_225fca4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint *v5;

  v3 = a3 + 148;
  v4 = 0;
  v5 = (uint *)(a2 + 396);
  do
  {
    if ( Function_225eda4(v5, (uint *)(v3 + 4)) == 1 )
      return 1;
    ++v4;
    v5 += 4;
  }
  while ( v4 < 3 );
  return 0;
}

//----- (0225FCD0) --------------------------------------------------------
int __fastcall Function_225fcd0(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v12 = a4;
  v4 = a2;
  v5 = (int *)(a2 + 148);
  if ( *(uchar *)(a2 + 154) )
  {
    if ( *(uchar *)(a2 + 154) != 1 )
      goto LABEL_8;
  }
  else
  {
    *v5 = 4096;
    ++*(uchar *)(a2 + 154);
  }
  if ( (ushort)++*(ushort *)(a2 + 152) > 0x1Eu )
    return 1;
  v7 = *v5 + 384;
  *v5 = v7;
  Function_201736c((uint *)(a2 + 28), 4096, v7, 4096);
  v8 = ((*v5 - 4096) << 12) / -4096;
  Function_2017358((uint *)(v4 + 28), &v11, &v10, &v9);
  Function_2017350((uint *)(v4 + 28), v11, v10 + v8, v9);
LABEL_8:
  Function_225eca0((uint *)(v4 + 28), v4, v5 + 2, 1);
  return 0;
}

//----- (0225FD64) --------------------------------------------------------
BOOL __fastcall Function_225fd64(int a1, int a2, int a3)
{
  return Function_225eda4((uint *)(a2 + 156), (uint *)(a3 + 152)) == 1;
}

//----- (0225FD80) --------------------------------------------------------
int __fastcall Function_225fd80(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  short v6;

  v4 = a1;
  if ( a3 == 3 )
    return 0;
  if ( a4 )
    v6 = 1;
  else
    v6 = -1;
  if ( *(uchar *)a2 )
  {
    if ( *(uchar *)a2 != 1 )
    {
      result = 1;
      *(uchar *)(v4 + 1854) = 1;
      return result;
    }
    *(ushort *)(a2 + 2) -= 512;
    if ( *(short *)(a2 + 2) <= 0 )
    {
      *(ushort *)(a2 + 2) = 0;
      if ( (uchar)++*(uchar *)(a2 + 1) >= 2u )
        ++*(uchar *)a2;
      else
        *(uchar *)a2 = 0;
    }
    *(uchar *)(v4 + 1856) = 1;
    *(ushort *)(v4 + 1858) = (*(ushort *)(a2 + 2) >> 8) * v6;
  }
  else
  {
    *(ushort *)(a2 + 2) += 512;
    if ( *(short *)(a2 + 2) >= 2048 )
    {
      *(ushort *)(a2 + 2) = 2048;
      ++*(uchar *)a2;
    }
    *(uchar *)(v4 + 1856) = 1;
    *(ushort *)(v4 + 1858) = (*(ushort *)(a2 + 2) >> 8) * v6;
  }
  return 0;
}

//----- (0225FE30) --------------------------------------------------------
int __fastcall Function_225fe30(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a2;
  v4 = a3;
  switch ( *(uchar *)(a2 + 6) )
  {
    case 0:
      *(uint *)a2 = Function_2020a90(a3);
      ++*(uchar *)(v3 + 6);
      Function_2005748(0x5BEu);
      goto LABEL_3;
    case 1:
LABEL_3:
      Function_2020a78(-6826, v4);
      if ( (short)++*(ushort *)(v3 + 4) >= 30 )
      {
        *(ushort *)(v3 + 4) = 0;
        ++*(uchar *)(v3 + 6);
      }
      goto LABEL_10;
    case 2:
      if ( (short)++*(ushort *)(a2 + 4) > 4 )
      {
        *(ushort *)(a2 + 4) = 0;
        ++*(uchar *)(a2 + 6);
      }
      goto LABEL_10;
    case 3:
      Function_2020a78(34133, a3);
      if ( (short)++*(ushort *)(v3 + 4) < 6 && Function_2020a90(v4) < *(uint *)v3 )
        goto LABEL_10;
      Function_2020a50(*(uint *)v3, v4);
      result = 1;
      break;
    default:
LABEL_10:
      result = 0;
      break;
  }
  return result;
}

//----- (0225FEE0) --------------------------------------------------------
int __fastcall Function_225fee0(int a1, int a2, uint *a3)
{
  int v3;
  uint *v4;
  int v5;
  int v6;

  v3 = a2 + 8;
  v4 = a3;
  if ( *(uchar *)(a2 + 20) )
  {
    if ( *(uchar *)(a2 + 20) != 1 )
      return 1;
  }
  else
  {
    Function_2005748(0x5BEu);
    ++*(uchar *)(v3 + 12);
  }
  v5 = (uchar)++*(uchar *)(v3 + 13) << 10;
  if ( v5 >= 0x2000 )
    v6 = v5 - 12288;
  else
    v6 = 4096 - v5;
  *(uint *)(v3 + 4) = v6;
  if ( v5 >= 4096 )
  {
    if ( v5 >= 0x2000 )
    {
      if ( v5 >= 12288 )
        *(uint *)v3 = v5 - 0x4000;
      else
        *(uint *)v3 = 0x2000 - v5;
    }
    else
    {
      *(uint *)v3 = 0x2000 - v5;
    }
  }
  else
  {
    *(uint *)v3 = v5;
  }
  if ( *(uchar *)(v3 + 13) >= 0x10u )
  {
    *(uint *)(v3 + 4) = 4096;
    *(uint *)v3 = 0;
    *(uchar *)(v3 + 13) = 0;
    if ( (uchar)++*(uchar *)(v3 + 14) >= 2u )
      ++*(uchar *)(v3 + 12);
  }
  Function_2020680((uint *)v3, v4);
  return 0;
}

//----- (0225FF8C) --------------------------------------------------------
int __fastcall Function_225ff8c(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  int result;
  short v7;
  short v8;
  short v9;
  short v10;
  short v11;
  short v12;
  short v13;
  short v14;
  int v15;

  v15 = a4;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4 = a2 + 24;
  v14 = 0;
  v5 = a3;
  switch ( *(uchar *)(a2 + 38) )
  {
    case 0:
      Function_2020a94(&v7, a3);
      *(ushort *)v4 = v7;
      *(ushort *)(v4 + 2) = v8;
      *(ushort *)(v4 + 4) = v9;
      *(ushort *)(v4 + 6) = v10;
      *(uint *)(v4 + 8) = *(ushort *)(v4 + 2);
      ++*(uchar *)(v4 + 14);
      Function_2005748(0x5BEu);
      goto LABEL_3;
    case 1:
LABEL_3:
      v12 -= 4096;
      *(uint *)(v4 + 8) -= 4096;
      Function_2020a24(&v11, v5);
      if ( *(uint *)(v4 + 8) <= *(ushort *)(v4 + 2) - 0x2000 )
        ++*(uchar *)(v4 + 14);
      goto LABEL_9;
    case 2:
      if ( (short)++*(ushort *)(a2 + 36) >= 16 )
        ++*(uchar *)(a2 + 38);
      goto LABEL_9;
    case 3:
      v12 += 512;
      *(uint *)(a2 + 32) += 512;
      Function_2020a24(&v11, a3);
      if ( *(uint *)(v4 + 8) < (int)*(ushort *)(v4 + 2) )
        goto LABEL_9;
      Function_20209d4((ushort *)v4, v5);
      result = 1;
      break;
    default:
LABEL_9:
      result = 0;
      break;
  }
  return result;
}

//----- (02260064) --------------------------------------------------------
int __fastcall Function_2260064(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  int result;
  short v7;
  short v8;
  short v9;
  short v10;
  short v11;
  short v12;
  short v13;
  short v14;
  int v15;

  v15 = a4;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4 = a2 + 40;
  v14 = 0;
  v5 = a3;
  switch ( *(uchar *)(a2 + 54) )
  {
    case 0:
      Function_2020a94(&v7, a3);
      *(ushort *)v4 = v7;
      *(ushort *)(v4 + 2) = v8;
      *(ushort *)(v4 + 4) = v9;
      *(ushort *)(v4 + 6) = v10;
      *(uint *)(v4 + 8) = *(ushort *)(v4 + 2);
      ++*(uchar *)(v4 + 14);
      Function_2005748(0x5BEu);
      goto LABEL_3;
    case 1:
LABEL_3:
      v12 += 4096;
      *(uint *)(v4 + 8) += 4096;
      Function_2020a24(&v11, v5);
      if ( *(uint *)(v4 + 8) >= *(ushort *)(v4 + 2) + 0x2000 )
        ++*(uchar *)(v4 + 14);
      goto LABEL_9;
    case 2:
      if ( (short)++*(ushort *)(a2 + 52) >= 16 )
        ++*(uchar *)(a2 + 54);
      goto LABEL_9;
    case 3:
      v12 -= 512;
      *(uint *)(a2 + 48) -= 512;
      Function_2020a24(&v11, a3);
      if ( *(uint *)(v4 + 8) > (int)*(ushort *)(v4 + 2) )
        goto LABEL_9;
      Function_20209d4((ushort *)v4, v5);
      result = 1;
      break;
    default:
LABEL_9:
      result = 0;
      break;
  }
  return result;
}

//----- (0226013C) --------------------------------------------------------
int __fastcall Function_226013c(int a1, int a2, ushort *a3, int a4)
{
  ushort *v4;
  ushort *v5;
  int result;
  ushort v7;
  ushort v8;
  ushort v9;
  ushort v10;
  short v11;
  short v12;
  short v13;
  short v14;
  int v15;

  v15 = a4;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4 = (ushort *)(a2 + 56);
  v14 = 0;
  v5 = a3;
  switch ( *(uchar *)(a2 + 70) )
  {
    case 0:
      Function_2020a94(&v7, a3);
      *v4 = v7;
      v4[1] = v8;
      v4[2] = v9;
      v4[3] = v10;
      *((uint *)v4 + 2) = *v4;
      Function_2005748(0x5BEu);
      ++*((uchar *)v4 + 14);
      goto LABEL_3;
    case 1:
LABEL_3:
      v11 += 2730;
      *((uint *)v4 + 2) += 2730;
      Function_2020a24(&v11, v5);
      if ( *((uint *)v4 + 2) >= *v4 + 0x2000 )
        ++*((uchar *)v4 + 14);
      goto LABEL_9;
    case 2:
      if ( (short)++*(ushort *)(a2 + 68) >= 16 )
        ++*(uchar *)(a2 + 70);
      goto LABEL_9;
    case 3:
      v11 -= 512;
      *(uint *)(a2 + 64) -= 512;
      Function_2020a24(&v11, a3);
      if ( *((uint *)v4 + 2) > (int)*v4 )
        goto LABEL_9;
      Function_20209d4(v4, v5);
      result = 1;
      break;
    default:
LABEL_9:
      result = 0;
      break;
  }
  return result;
}

//----- (02260218) --------------------------------------------------------
int __fastcall Function_2260218(int a1, int a2, ushort *a3)
{
  int v3;
  ushort *v4;
  int v5;
  int v6;
  short v8;
  short v9;
  short v10;
  short v11;
  short v12;
  short v13;
  short v14;
  short v15;

  v12 = 0;
  v13 = 0;
  v14 = 0;
  v3 = a2 + 72;
  v15 = 0;
  v4 = a3;
  if ( *(uchar *)(a2 + 85) )
  {
    if ( *(uchar *)(a2 + 85) != 1 )
      return 1;
  }
  else
  {
    Function_2020a94(&v8, a3);
    *(ushort *)v3 = v8;
    *(ushort *)(v3 + 2) = v9;
    *(ushort *)(v3 + 4) = v10;
    *(ushort *)(v3 + 6) = v11;
    ++*(uchar *)(v3 + 13);
    Function_2005748(0x5BEu);
  }
  v5 = *(uint *)(v3 + 8) + 98304;
  *(uint *)(v3 + 8) = v5;
  if ( v5 >= 1474560 )
  {
    *(uint *)(v3 + 8) -= 1474560;
    if ( (uchar)++*(uchar *)(v3 + 12) >= 2u )
    {
      ++*(uchar *)(v3 + 13);
      *(uint *)(v3 + 8) = 0;
    }
  }
  v6 = Function_201d2b8(*(uint *)(v3 + 8));
  v12 = *(ushort *)v3;
  v13 = *(ushort *)(v3 + 2);
  v14 = *(ushort *)(v3 + 4);
  v15 = *(ushort *)(v3 + 6);
  v13 = (((ll)v6 << 12) + 2048) >> 12;
  Function_20209b0(&v12, v4);
  return 0;
}

//----- (022602E4) --------------------------------------------------------
int __fastcall Function_22602e4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a2 + 88;
  v4 = a3;
  switch ( *(uchar *)(a2 + 94) )
  {
    case 0:
      *(uint *)v3 = Function_2020a90(a3);
      ++*(uchar *)(v3 + 6);
      Function_2005748(0x5BEu);
      goto LABEL_3;
    case 1:
LABEL_3:
      Function_2020a78(6826, v4);
      if ( (short)++*(ushort *)(v3 + 4) >= 30 )
      {
        *(ushort *)(v3 + 4) = 0;
        ++*(uchar *)(v3 + 6);
      }
      goto LABEL_10;
    case 2:
      if ( (short)++*(ushort *)(a2 + 92) > 4 )
      {
        *(ushort *)(a2 + 92) = 0;
        ++*(uchar *)(a2 + 94);
      }
      goto LABEL_10;
    case 3:
      Function_2020a78(-34133, a3);
      if ( (short)++*(ushort *)(v3 + 4) < 6 && Function_2020a90(v4) > *(uint *)v3 )
        goto LABEL_10;
      Function_2020a50(*(uint *)v3, v4);
      result = 1;
      break;
    default:
LABEL_10:
      result = 0;
      break;
  }
  return result;
}

//----- (02260394) --------------------------------------------------------
int __fastcall Function_2260394(int a1, int a2, int a3)
{
  int v3;
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  long long v11;
  char v13;
  int v14;
  int v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v19 = 0;
  v20 = 0;
  v3 = a2 + 96;
  v21 = 0;
  v4 = (uint *)a3;
  if ( *(uchar *)(a2 + 125) )
  {
    if ( *(uchar *)(a2 + 125) != 1 )
      return 1;
  }
  else
  {
    Function_2020abc(&v16, a3);
    v5 = v17;
    v6 = (uint *)(v3 + 12);
    *v6 = *(uint *)&v16;
    v6[1] = v5;
    *(uint *)(v3 + 20) = v18;
    Function_2020aac(&v13, (int)v4);
    v7 = v14;
    *(uint *)v3 = *(uint *)&v13;
    *(uint *)(v3 + 4) = v7;
    *(uint *)(v3 + 8) = v15;
    ++*(uchar *)(v3 + 29);
    Function_2005748(0x5BEu);
  }
  v8 = *(uint *)(v3 + 24) + 0x20000;
  *(uint *)(v3 + 24) = v8;
  if ( v8 >= 1474560 )
  {
    *(uint *)(v3 + 24) -= 1474560;
    if ( (uchar)++*(uchar *)(v3 + 28) >= 4u )
    {
      ++*(uchar *)(v3 + 29);
      *(uint *)(v3 + 24) = 0;
    }
  }
  v9 = Function_201d2b8(*(uint *)(v3 + 24));
  v10 = v9 << 16;
  HIDWORD(v11) = (ull)v9 >> 16;
  LODWORD(v11) = 2048;
  v19 = ((uint)v10 + v11) >> 12;
  Function_2020acc((uint *)v3, v4);
  Function_2020adc((uint *)(v3 + 12), v4);
  Function_2020990(&v19, (int)v4);
  return 0;
}

//----- (0226046C) --------------------------------------------------------
int __fastcall Function_226046c(int a1, int a2, int a3)
{
  int v3;
  uint *v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  long long v11;
  char v13;
  int v14;
  int v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v19 = 0;
  v20 = 0;
  v3 = a2 + 128;
  v21 = 0;
  v4 = (uint *)a3;
  if ( *(uchar *)(a2 + 157) )
  {
    if ( *(uchar *)(a2 + 157) != 1 )
      return 1;
  }
  else
  {
    Function_2020abc(&v16, a3);
    v5 = v17;
    v6 = (uint *)(v3 + 12);
    *v6 = *(uint *)&v16;
    v6[1] = v5;
    *(uint *)(v3 + 20) = v18;
    Function_2020aac(&v13, (int)v4);
    v7 = v14;
    *(uint *)v3 = *(uint *)&v13;
    *(uint *)(v3 + 4) = v7;
    *(uint *)(v3 + 8) = v15;
    ++*(uchar *)(v3 + 29);
    Function_2005748(0x5BEu);
  }
  v8 = *(uint *)(v3 + 24) + 0x20000;
  *(uint *)(v3 + 24) = v8;
  if ( v8 >= 1474560 )
  {
    *(uint *)(v3 + 24) -= 1474560;
    if ( (uchar)++*(uchar *)(v3 + 28) >= 4u )
    {
      ++*(uchar *)(v3 + 29);
      *(uint *)(v3 + 24) = 0;
    }
  }
  v9 = Function_201d2b8(*(uint *)(v3 + 24));
  v10 = v9 << 15;
  HIDWORD(v11) = (ull)v9 >> 17;
  LODWORD(v11) = 2048;
  v20 = ((uint)v10 + v11) >> 12;
  Function_2020acc((uint *)v3, v4);
  Function_2020adc((uint *)(v3 + 12), v4);
  Function_2020990(&v19, (int)v4);
  return 0;
}

//----- (02260544) --------------------------------------------------------
int __fastcall Function_2260544(int a1, int a2, ushort *a3, int a4)
{
  ushort *v4;
  ushort *v5;
  int result;
  ushort v7;
  ushort v8;
  ushort v9;
  ushort v10;
  short v11;
  short v12;
  short v13;
  short v14;
  int v15;

  v15 = a4;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4 = (ushort *)(a2 + 160);
  v14 = 0;
  v5 = a3;
  switch ( *(uchar *)(a2 + 174) )
  {
    case 0:
      Function_2020a94(&v7, a3);
      *v4 = v7;
      v4[1] = v8;
      v4[2] = v9;
      v4[3] = v10;
      *((uint *)v4 + 2) = *v4;
      ++*((uchar *)v4 + 14);
      Function_2005748(0x5BEu);
      goto LABEL_3;
    case 1:
LABEL_3:
      v11 -= 2730;
      *((uint *)v4 + 2) -= 2730;
      Function_2020a24(&v11, v5);
      if ( *((uint *)v4 + 2) <= *v4 - 0x2000 )
        ++*((uchar *)v4 + 14);
      goto LABEL_9;
    case 2:
      if ( (short)++*(ushort *)(a2 + 172) >= 16 )
        ++*(uchar *)(a2 + 174);
      goto LABEL_9;
    case 3:
      v11 += 512;
      *(uint *)(a2 + 168) += 512;
      Function_2020a24(&v11, a3);
      if ( *((uint *)v4 + 2) < (int)*v4 )
        goto LABEL_9;
      Function_20209d4(v4, v5);
      result = 1;
      break;
    default:
LABEL_9:
      result = 0;
      break;
  }
  return result;
}

//----- (02260620) --------------------------------------------------------
uint __fastcall Function_2260620(ushort **a1, int *a2, int a3, int a4, int a5)
{
  int v5;
  uint v6;
  uint result;
  uint v8;
  int *v9;
  ushort *v10;
  ushort *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  ushort **v18;
  int *v19;
  int v20;
  uint v21;

  v18 = a1;
  v19 = a2;
  v5 = a3;
  v20 = a4;
  v6 = ((int (__fastcall *)(int))dword_2232B8C[0])(a5);
  result = -1;
  if ( v6 != -1 )
  {
    result = ((int (__fastcall *)(int))dword_2232B78[0])(a5);
    v21 = result;
    if ( result != -1 )
    {
      result = ((int (__fastcall *)(int, uint))dword_222E374[0])(v20, result);
      v8 = result;
      if ( result )
      {
        if ( v6 < 8 )
        {
          v9 = AllocTrainerData(0x76u);
          ((void (__fastcall *)(uint, int *, int))dword_222E640[0])(v8, v9, 118);
          v10 = Function_2025f04((ushort *)v9, 0x76u);
          GetGender((int)v9);
          Function_200b48c(v19, 0, (int)v10);
          v11 = Function_200b1ec_CallMsgDecrypt(v18, 0);
          v12 = Function_2023790(64, 0x76u);
          Function_200c388((uint *)v19, v12, (int)v11);
          v13 = 16 * v6;
          Function_201ada4_ClearTextBox(v5 + v13, 0);
          ((int (__fastcall *)(int, uint))dword_222E924[0])(v20, v21);
          Function_201d78c(v5 + v13, 0);
          Function_201a954(v5 + v13, v14);
          Function_20237bc_FreeMsg((int)v10, v15);
          Function_20237bc_FreeMsg((int)v11, v16);
          Function_20237bc_FreeMsg(v12, v17);
          result = free((int)v9);
        }
        else
        {
          result = ErrorHandler();
        }
      }
    }
  }
  return result;
}

//----- (02260714) --------------------------------------------------------
uint __fastcall Function_2260714(int a1, uint a2)
{
  uint result;

  if ( a2 < 8 )
    result = Function_201acf4(a1 + 16 * a2);
  else
    result = ErrorHandler();
  return result;
}

//----- (0226072C) --------------------------------------------------------
int __fastcall Function_226072c(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  u32_div_f(a2, 9);
  return *((ushort *)&dword_2260D6C[v3] + v2);
}

//----- (02260748) --------------------------------------------------------
int __fastcall Function_2260748(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = 255;
  v5 = Function_2022664((uchar *)dword_2260D4C);
  if ( v5 >= 6 )
  {
    if ( v5 != 6 )
      return 255;
    v4 = 254;
  }
  else if ( v3 != v5 )
  {
    v6 = v2 + 12 * v5;
    if ( *(ushort *)(v6 + 2) )
    {
      if ( *(ushort *)(v6 + 2) <= 0x1EDu )
        v4 = v5;
    }
  }
  return v4;
}

//----- (02260788) --------------------------------------------------------
int __fastcall Function_2260788(int a1, int a2, int a3)
{
  if ( a1 == 487 && a2 > 0 )
    return 0;
  if ( a1 != 493 || a3 )
    return LOBYTE(dword_2260D90[a1]);
  return 0;
}

//----- (022607B8) --------------------------------------------------------
int __fastcall Function_22607b8(int a1, int a2)
{
  int result;

  if ( a1 != 487 || a2 <= 0 )
    result = BYTE1(dword_2260D90[a1]);
  else
    result = 2;
  return result;
}

//----- (022607D8) --------------------------------------------------------
void Function_22607d8()
{
  JUMPOUT(&byte_2232D60);
}

//----- (022607EC) --------------------------------------------------------
BOOL __fastcall Function_22607ec(int a1, uint *a2)
{
  if ( a2[1] == a1 )
    return 0;
  if ( *a2 )
    return ((int (*)(void))dword_2232B8C[0])() != -1;
  return 0;
}

//----- (02260818) --------------------------------------------------------
int __fastcall Function_2260818(int a1)
{
  int v1;

  v1 = a1;
  if ( ((int (*)(void))dword_2231760[0])() == 1 )
    return 0;
  ((void (__fastcall *)(int, int, int))dword_2232EBC[0])(2, v1, 12);
  return 1;
}

//----- (02260838) --------------------------------------------------------
int __fastcall Function_2260838(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int result;

  v4 = a4;
  v5 = a1;
  v6 = (uint *)Function_225dd44(a4);
  result = Function_22607ec(v5, v6);
  if ( result )
    result = Function_225e044(v4, v5);
  return result;
}

//----- (0226085C) --------------------------------------------------------
int __fastcall Function_226085c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint *v6;
  int result;
  int v8;

  v4 = a4;
  v5 = a1;
  v6 = (uint *)Function_225dd44(a4);
  result = Function_22607ec(v5, v6);
  if ( result )
  {
    v8 = ((int (__fastcall *)(int))dword_2232B8C[0])(v5);
    result = Function_225e05c(v4, v8);
  }
  return result;
}

//----- (02260884) --------------------------------------------------------
int __fastcall Function_2260884(int a1, ushort *a2, int a3, int a4)
{
  int *v4;
  int v5;
  ushort *v6;
  uint *v7;
  int result;

  v4 = (int *)a4;
  v5 = a1;
  v6 = a2;
  v7 = (uint *)Function_225dd44(a4);
  result = Function_22607ec(v5, v7);
  if ( result )
    result = Function_225ddc0(v4, v6, v5);
  return result;
}

