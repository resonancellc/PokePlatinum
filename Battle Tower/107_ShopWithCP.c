//----- (02241AE0) --------------------------------------------------------
int __fastcall Function_2241ae0(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char v11;
  char v12;

  v4 = a1;
  v5 = a2;
  v6 = LoadOverlay(104, 2, a3, a4);
  Function_2242f24(v6);
  Function_2017fc8(3, 100, 151552);
  v7 = MallocSomeDataAndStorePtrInOverlayData1c(v4, 1084, 0x64u);
  Call_FillMemWithValue((int *)v7, 0, 0x43Cu);
  *(uint *)(v7 + 76) = Function_2018340(0x64u);
  *(uint *)v7 = v4;
  v8 = LoadPtrToOverWorldDataIn18(v4);
  *(uint *)(v7 + 460) = *(uint *)v8;
  *(uint *)(v7 + 464) = Function_20302dc(*(uint *)(v7 + 460));
  *(uint *)(v7 + 468) = Function_203041c(*(uint *)(v7 + 460));
  *(uchar *)(v7 + 9) = *(uchar *)(v8 + 4);
  *(uint *)(v7 + 980) = v8 + 32;
  *(uint *)(v7 + 456) = LoadPlayerDataAdress(*(uint *)(v7 + 460));
  *(uint *)(v7 + 984) = *(uint *)(v8 + 24);
  *(uchar *)(v7 + 18) = -1;
  *(ushort *)(v7 + 1078) = *(ushort *)(v8 + 40);
  *(uint *)(v7 + 4) = LoadVariableAreaAdress_17(*(uint *)(v7 + 460));
  v9 = 0;
  do
  {
    v10 = v7 + v9++;
    *(uchar *)(v10 + 1075) = 1;
  }
  while ( v9 < 3 );
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v7 + 9)) )
    v11 = 4;
  else
    v11 = 3;
  *(uchar *)(v7 + 20) = v11;
  v12 = *(uchar *)(v7 + 20);
  *(uchar *)(v7 + 21) = v12;
  *(uchar *)(v7 + 12) = v12 - 1;
  Function_2242f5c(v7);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v7 + 9)) == 1 )
    Function_209ba80(v7);
  *v5 = 0;
  return 1;
}

//----- (02241BD4) --------------------------------------------------------
int __fastcall Function_2241bd4(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  uint v5;
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = v3;
  if ( *(uchar *)(v3 + 1074) == 1 )
  {
    if ( *v2 == 1 )
    {
      *(uchar *)(v3 + 1074) = 0;
      Function_22451d8(v3);
      if ( *(uint *)(v4 + 944) )
      {
        Function_2249b8c();
        *(uchar *)(v4 + 14) &= 0xFBu;
      }
      v5 = Function_2027b50(*(ushort **)(v4 + 456));
      Function_2249dbc(v4 + 176, v5);
      ((void (__fastcall *)(uint, uint))dword_221F800[15220])(*(uint *)(v4 + 36), 0);
      *(uchar *)(v4 + 10) = Function_2243918(v4, 8, 1);
      Function_2244bd0(v4, v2, 3);
    }
  }
  else if ( *(uchar *)(v3 + 18) != 255 && (*v2 == 1 || *v2 == 3) )
  {
    *(uchar *)(v3 + 1074) = 0;
    Function_22451d8(v3);
    Function_2244bd0(v4, v2, 2);
  }
  switch ( (uchar)*v2 )
  {
    case 0u:
      if ( Function_2241d6c(v4) == 1 )
        Function_2244bd0(v4, v2, 1);
      goto LABEL_25;
    case 1u:
      if ( Function_2241ec8(v4) == 1 )
      {
        if ( (uint)*(uchar *)(v4 + 14) << 30 >> 31 == 1 )
        {
          Function_2244bd0(v4, v2, 2);
        }
        else if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v4 + 9)) == 1 )
        {
          Function_2244bd0(v4, v2, 3);
        }
        else
        {
          Function_2244bd0(v4, v2, 4);
        }
      }
      goto LABEL_25;
    case 2u:
      if ( Function_2242c64(v4) == 1 )
        Function_2244bd0(v4, v2, 1);
      goto LABEL_25;
    case 3u:
      if ( Function_2242d60(v4) == 1 )
        Function_2244bd0(v4, v2, 4);
      goto LABEL_25;
    case 4u:
      if ( Function_2242dcc(v4) != 1 )
        goto LABEL_25;
      result = 1;
      break;
    default:
LABEL_25:
      Function_2245c00(v4);
      Function_20219f8(*(uint *)(v4 + 472));
      result = 0;
      break;
  }
  return result;
}

//----- (02241D2C) --------------------------------------------------------
int __fastcall Function_2241d2c(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = v2;
  **(ushort **)(v2 + 980) = *(uchar *)(v2 + 13);
  Function_201dc3c();
  Function_2242e14(v3);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(100);
  UnloadOverlay(104, v4, v5, v6);
  return 1;
}

//----- (02241D6C) --------------------------------------------------------
int __fastcall Function_2241d6c(int a1)
{
  int v1;
  int result;

  v1 = a1;
  switch ( *(uchar *)(a1 + 8) )
  {
    case 0:
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        Function_20365f4();
        Function_20364f0(215);
      }
      ++*(uchar *)(v1 + 8);
      goto LABEL_19;
    case 1:
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        if ( Function_2036540(215) == 1 )
        {
          Function_20365f4();
          ++*(uchar *)(v1 + 8);
        }
      }
      else
      {
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_19;
    case 2:
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        if ( Function_224529c(v1, 10, 0) == 1 )
          ++*(uchar *)(v1 + 8);
      }
      else
      {
        Function_2241e70(v1);
        Function_200f174(0, 1, 1, 0, 6, 3, 100);
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_19;
    case 3:
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        if ( *(uchar *)(v1 + 15) >= 2u )
        {
          *(uchar *)(v1 + 15) = 0;
          Function_2241e70(v1);
          Function_200f174(0, 1, 1, 0, 6, 3, 100);
          ++*(uchar *)(v1 + 8);
        }
      }
      else
      {
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_19;
    case 4:
      if ( Function_200f2ac() != 1 )
        goto LABEL_19;
      result = 1;
      break;
    default:
LABEL_19:
      result = 0;
      break;
  }
  return result;
}

//----- (02241E70) --------------------------------------------------------
int __fastcall Function_2241e70(int a1)
{
  int v1;

  v1 = a1;
  Function_2244e14(a1);
  Function_201ada4_ClearTextBox(v1 + 80, 0);
  Function_2245464(v1, v1 + 80);
  Function_2245780(v1, v1 + 80);
  Function_2243cc0(v1, v1 + 128);
  Function_2243db0(v1, v1 + 112);
  Function_2243fa4(v1);
  return Function_201ffd0();
}

//----- (02241EC8) --------------------------------------------------------
int __fastcall Function_2241ec8(int a1)
{
  int v1;
  int v2;
  uint v3;
  int result;
  uint v5;
  uint v6;
  uint v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint v12;
  int v13;
  int v14;
  uint v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  uint v20;
  int v21;
  uint v22;
  uint v23;
  int v24;
  uint v25;
  uint v26;
  uint v27;
  uint v28;
  uint v29;
  int v30;
  int v31;
  uint v32;
  int v33;
  uint v34;
  uint v35;
  uint v36;
  uint v37;
  int v38;
  int v39;
  int v40;
  uint v41;
  int v42;
  int *v43;
  uint v44;
  int v45;
  int v46;
  uint v47;
  int v48;
  uint v49;
  uint v50;
  uint v51;
  int v52;
  int v53;
  int v54;
  uint v55;
  uint v56;
  int v57;
  int v58;
  uint v59;
  int v60;
  uint v61;
  uint v62;
  uint v63;
  uint v64;
  int v65;
  int v66;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  switch ( (uchar)v2 )
  {
    case 0:
      v3 = (uint)*(uchar *)(a1 + 14) << 25 >> 30;
      if ( v3 == 1 )
      {
        Function_2244064(a1);
        Function_2249c60(*(uint *)(v1 + 972), 204, 100);
        *(uchar *)(v1 + 8) = 2;
        *(uchar *)(v1 + 14) &= 0x9Fu;
        return 0;
      }
      if ( (uint)*(uchar *)(a1 + 14) << 25 >> 30 == 2 )
      {
        Function_224409c(a1);
        Function_2249c60(*(uint *)(v1 + 972), 211, 106);
        *(uchar *)(v1 + 8) = 8;
        *(uchar *)(v1 + 14) &= 0x9Fu;
        return 0;
      }
      Function_2244bd8();
      if ( dword_21BF6C4 & 1 )
      {
        Function_2005748(0x5DCu);
        if ( *(uchar *)(v1 + 13) >= (uint)*(uchar *)(v1 + 21) )
          return 1;
        Function_224400c(v1);
        Function_2244018(v1);
        *(uchar *)(v1 + 8) = 1;
      }
      else if ( dword_21BF6C4 & 2 )
      {
        if ( *(uchar *)(v1 + 13) != *(uchar *)(v1 + 21) )
        {
          Function_2005748(0x5DCu);
          *(uchar *)(v1 + 13) = *(uchar *)(v1 + 21);
          Function_2244c70(v1);
        }
      }
      return 0;
    case 1:
      v5 = Function_2001288(*(uint *)(a1 + 408));
      Function_2249ce0();
      if ( v5 <= 0xFFFFFFFE )
      {
        if ( v5 >= 0xFFFFFFFE )
        {
          Function_224403c(v1);
          Function_2243fa4(v1);
          *(uchar *)(v1 + 8) = 0;
        }
        else
        {
          switch ( -2 )
          {
            case 0:
              Function_224403c(v1);
              Function_2244064(v1);
              *(uchar *)(v1 + 8) = 2;
              break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 6:
            case 7:
            case 8:
              return 0;
            case 5:
              Function_224403c(v1);
              Function_224409c(v1);
              *(uchar *)(v1 + 8) = 8;
              break;
            case 9:
              Function_224403c(v1);
              Function_2245b40(v1, *(uchar *)(v1 + 13));
              *(uchar *)(v1 + 8) = 20;
              break;
            case 10:
              Function_224403c(v1);
              Function_2245b90(v1, *(uchar *)(v1 + 13));
              *(uchar *)(v1 + 8) = 21;
              break;
            case 11:
              Function_224403c(v1);
              Function_2243fa4(v1);
              *(uchar *)(v1 + 8) = 0;
              break;
            default:
              JUMPOUT(__CS__, (char *)&off_2241FF2 + *((short *)&off_2241FF2 + v5) + 2);
              return result;
          }
        }
      }
      return 0;
    case 2:
      Function_20014d0(*(uint *)(a1 + 408), (ushort *)(a1 + 22));
      if ( dword_21BF6C4 & 0x40 )
      {
        if ( !*(ushort *)(v1 + 22) )
        {
          Function_2001408(*(uint *)(v1 + 408), (uint *)(v1 + 416), 0, 4, 1u, 128, 0, 0);
          Function_20013ac(*(uint *)(v1 + 408));
          Function_2005748(0x5DCu);
          Function_224379c(v1, v1 + 176, 28);
          return 0;
        }
      }
      else if ( dword_21BF6C4 & 0x80 && *(ushort *)(v1 + 22) == 4 )
      {
        Function_2001408(*(uint *)(v1 + 408), (uint *)(v1 + 416), 0, 0, 1u, 64, 0, 0);
        Function_20013ac(*(uint *)(v1 + 408));
        Function_2005748(0x5DCu);
        Function_224379c(v1, v1 + 176, 24);
        return 0;
      }
      v6 = Function_2001288(*(uint *)(v1 + 408));
      Function_2249ce0();
      Function_20014d0(*(uint *)(v1 + 408), (ushort *)(v1 + 22));
      if ( v6 <= 0xFFFFFFFE )
      {
        if ( v6 >= 0xFFFFFFFE )
        {
          Function_2245288(v1 + 176);
          Function_2244094(v1);
          Function_2244018(v1);
          *(uchar *)(v1 + 8) = 1;
        }
        else
        {
          switch ( -2 )
          {
            case 0:
              return 0;
            case 1:
            case 2:
            case 3:
              *(uchar *)(v1 + 19) = v6;
              Function_2244094(v1);
              v7 = Function_2027b50(*(ushort **)(v1 + 456));
              Function_2249dbc(v1 + 176, v7);
              if ( Function_2249cac(*(uint *)(v1 + 460), *(uchar *)(v1 + 9), 0) >= (uint)dword_2249FF0[3 * *(ushort *)(v1 + 22)] )
              {
                v8 = *((ushort *)dword_2249E0C + *(ushort *)(v1 + 22));
                Function_2244a74(v1);
                *(uchar *)(v1 + 10) = Function_2243918(v1, 55, 1);
                Function_22441dc(v1);
                *(uchar *)(v1 + 8) = 3;
              }
              else
              {
                *(uchar *)(v1 + 10) = Function_2243918(v1, 33, 1);
                *(uchar *)(v1 + 8) = 7;
              }
              break;
            case 4:
              v9 = Function_2249cac(*(uint *)(v1 + 460), *(uchar *)(v1 + 9), 0);
              if ( v9 == 3 )
              {
                Function_20057a4(1500, 0);
                Function_2005748(0x5F3u);
              }
              else
              {
                *(uchar *)(v1 + 19) = v6;
                Function_2244094(v1);
                Function_205e630(*(uchar *)(v1 + 9));
                v11 = v10;
                Function_205e630(*(uchar *)(v1 + 9));
                v13 = Function_205e6a8(v12);
                Function_2030698(*(uint *)(v1 + 4), v11, v13);
                v14 = *((ushort *)&dword_2249E34[4] + v9 + 1);
                Function_2244a74(v1);
                *(uchar *)(v1 + 10) = Function_2243918(v1, 38, 1);
                Function_22441dc(v1);
                *(uchar *)(v1 + 8) = 4;
              }
              break;
            default:
              JUMPOUT(__CS__, (char *)&off_22421A0 + *((short *)&off_22421A0 + v6) + 2);
              return result;
          }
        }
      }
      return 0;
    case 3:
      v15 = Function_2001be0(*(uint *)(a1 + 380));
      if ( v15 > 0xFFFFFFFE )
        return 0;
      if ( v15 >= 0xFFFFFFFE )
        goto LABEL_49;
      if ( v15 > 1 )
        return 0;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
LABEL_49:
          Function_2245618(v1);
          Function_2245288(v1 + 176);
          Function_2244064(v1);
          *(uchar *)(v1 + 8) = 2;
        }
        return 0;
      }
      v16 = Function_2249c98(*(uchar *)(v1 + 20), *(uchar *)(v1 + 13));
      v17 = GetAdrOfPkmnInParty(*(uint **)(v1 + 984), v16);
      Function_2245618(v1);
      Function_205e630(*(uchar *)(v1 + 9));
      v19 = v18;
      Function_205e630(*(uchar *)(v1 + 9));
      v21 = Function_205e6a8(v20);
      v22 = Function_2030698(*(uint *)(v1 + 4), v19, v21);
      v23 = Function_2249cac(*(uint *)(v1 + 460), *(uchar *)(v1 + 9), 0);
      v24 = *(ushort *)(v1 + 22);
      if ( v23 < dword_2249FF0[3 * v24] )
      {
        v25 = Function_2027b50(*(ushort **)(v1 + 456));
        Function_2249dbc(v1 + 176, v25);
        *(uchar *)(v1 + 10) = Function_2243918(v1, 33, 1);
        *(uchar *)(v1 + 8) = 7;
        return 0;
      }
      if ( v22 < *((ushort *)dword_2249E0C + v24) )
      {
        v26 = Function_2027b50(*(ushort **)(v1 + 456));
        Function_2249dbc(v1 + 176, v26);
        *(uchar *)(v1 + 10) = Function_2243918(v1, 32, 1);
        *(uchar *)(v1 + 8) = 7;
        return 0;
      }
      if ( *(ushort *)(v1 + 22) )
      {
        if ( v24 == 1 )
        {
          if ( !Function_2245210(v17) )
          {
            *(uchar *)(v1 + 10) = Function_2243918(v1, 37, 1);
            *(uchar *)(v1 + 8) = 7;
            return 0;
          }
        }
        else
        {
          v28 = GetPkmnData(v17, 0xA3u, 0);
          if ( v28 == GetPkmnData(v17, 0xA4u, 0) && !Function_2245210(v17) )
          {
            *(uchar *)(v1 + 10) = Function_2243918(v1, 37, 1);
            *(uchar *)(v1 + 8) = 7;
            return 0;
          }
        }
      }
      else
      {
        v27 = GetPkmnData(v17, 0xA3u, 0);
        if ( v27 == GetPkmnData(v17, 0xA4u, 0) )
        {
          *(uchar *)(v1 + 10) = Function_2243918(v1, 37, 1);
          *(uchar *)(v1 + 8) = 7;
          return 0;
        }
      }
      Function_2245288(v1 + 176);
      if ( !((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v1 + 9)) )
      {
        ((void (__fastcall *)(uint, uint, uint))dword_223BA14[134])(
          *(uint *)(v1 + 4),
          *(uchar *)(v1 + 9),
          *((ushort *)dword_2249E0C + *(uchar *)(v1 + 19) - 1));
        Function_2245780(v1, v1 + 80);
        Function_22454f8(v1, *(uchar *)(v1 + 13), *(uchar *)(v1 + 19));
        *(uchar *)(v1 + 8) = 18;
        return 0;
      }
      *(uchar *)(v1 + 14) |= 2u;
      return 1;
    case 4:
      v29 = Function_2001be0(*(uint *)(a1 + 380));
      if ( v29 > 0xFFFFFFFE )
        return 0;
      if ( v29 >= 0xFFFFFFFE )
        goto LABEL_80;
      if ( v29 > 1 )
        return 0;
      if ( v29 )
      {
        if ( v29 == 1 )
        {
LABEL_80:
          Function_2245618(v1);
          Function_2245288(v1 + 176);
          Function_2244064(v1);
          *(uchar *)(v1 + 8) = 2;
        }
        return 0;
      }
      Function_2245618(v1);
      Function_205e630(*(uchar *)(v1 + 9));
      v31 = v30;
      Function_205e630(*(uchar *)(v1 + 9));
      v33 = Function_205e6a8(v32);
      v34 = Function_2030698(*(uint *)(v1 + 4), v31, v33);
      if ( v34 < *((ushort *)&dword_2249E34[4]
                 + Function_2249cac(*(uint *)(v1 + 460), *(uchar *)(v1 + 9), 0)
                 + 1) )
      {
        Function_2245618(v1);
        v35 = Function_2027b50(*(ushort **)(v1 + 456));
        Function_2249dbc(v1 + 176, v35);
        *(uchar *)(v1 + 10) = Function_2243918(v1, 41, 1);
        *(uchar *)(v1 + 8) = 7;
        return 0;
      }
      if ( !((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v1 + 9)) )
      {
        Function_2245c94(v1, *(uchar *)(v1 + 13), 4);
        *(uchar *)(v1 + 8) = 5;
        return 0;
      }
      *(uchar *)(v1 + 14) |= 2u;
      return 1;
    case 5:
      if ( Function_2244e44(a1, *(uchar *)(a1 + 13), *(uchar *)(a1 + 19)) == 1 )
        *(uchar *)(v1 + 8) = 6;
      return 0;
    case 6:
      if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        Function_2245618(v1);
        Function_2244064(v1);
        Function_2249c60(*(uint *)(v1 + 972), 204, 100);
        *(uchar *)(v1 + 8) = 2;
      }
      return 0;
    case 7:
      if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        Function_2245288(v1 + 176);
        Function_2244064(v1);
        *(uchar *)(v1 + 8) = 2;
      }
      return 0;
    case 8:
      Function_201ff0c(4u, 0);
      v36 = Function_2001288(*(uint *)(v1 + 408));
      Function_2249ce0();
      Function_20014d0(*(uint *)(v1 + 408), (ushort *)(v1 + 22));
      if ( v36 > 0xFFFFFFFE )
        return 0;
      if ( v36 >= 0xFFFFFFFE )
      {
        Function_2245288(v1 + 176);
        Function_22440c0(v1);
        Function_2244018(v1);
        *(uchar *)(v1 + 8) = 1;
        return 0;
      }
      if ( v36 > 8 || v36 < 6 )
        return 0;
      switch ( v36 )
      {
        case 6u:
          *(uchar *)(v1 + 19) = 6;
          Function_2245288(v1 + 176);
          Function_22440c0(v1);
          Function_22440c8(v1, 6);
          *(uchar *)(v1 + 8) = 9;
          return 0;
        case 7u:
          *(uchar *)(v1 + 19) = 7;
          Function_2245288(v1 + 176);
          Function_22440c0(v1);
          if ( Function_2249cac(*(uint *)(v1 + 460), *(uchar *)(v1 + 9), 1) == 1 )
          {
            v37 = Function_2027b50(*(ushort **)(v1 + 456));
            Function_2249dbc(v1 + 176, v37);
            *(uchar *)(v1 + 10) = Function_2243918(v1, 54, 1);
            *(uchar *)(v1 + 8) = 14;
            return 0;
          }
          Function_22440c8(v1, 7);
          *(uchar *)(v1 + 8) = 9;
          break;
        case 8u:
          v38 = Function_2249cac(*(uint *)(v1 + 460), *(uchar *)(v1 + 9), 1);
          if ( v38 == 3 )
          {
            Function_20057a4(1500, 0);
            Function_2005748(0x5F3u);
          }
          else
          {
            *(uchar *)(v1 + 19) = 8;
            Function_22440c0(v1);
            v39 = (ushort)aDd[v38 + 2];
            Function_2244a74(v1);
            *(uchar *)(v1 + 10) = Function_2243918(v1, 38, 1);
            Function_22441dc(v1);
            *(uchar *)(v1 + 8) = 11;
          }
          break;
      }
      return 0;
    case 9:
      v40 = Function_2001288(*(uint *)(a1 + 408));
      Function_2249ce0();
      Function_20014d0(*(uint *)(v1 + 408), (ushort *)(v1 + 22));
      if ( v40 == -2 )
      {
        Function_2244120(v1);
        Function_224409c(v1);
        *(uchar *)(v1 + 8) = 8;
      }
      else if ( v40 != -1 )
      {
        Function_201ad10(v1 + 272);
        v41 = Function_2027b50(*(ushort **)(v1 + 456));
        Function_2249dbc(v1 + 176, v41);
        Function_2244d5c(v1, *(ushort *)(v1 + 22), *(uchar *)(v1 + 19));
        Function_2244a74(v1);
        *(uchar *)(v1 + 10) = Function_2243918(v1, 55, 1);
        Function_22441dc(v1);
        Function_2249bac(*(uint *)(v1 + 908), 0);
        *(uchar *)(v1 + 8) = 10;
      }
      return 0;
    case 0xA:
      v42 = Function_2249c98(*(uchar *)(a1 + 20), *(uchar *)(a1 + 13));
      v43 = GetAdrOfPkmnInParty(*(uint **)(v1 + 984), v42);
      v44 = Function_2001be0(*(uint *)(v1 + 380));
      if ( v44 > 0xFFFFFFFE )
        return 0;
      if ( v44 >= 0xFFFFFFFE )
        goto LABEL_113;
      if ( v44 > 1 )
        return 0;
      if ( v44 )
      {
        if ( v44 == 1 )
        {
LABEL_113:
          Function_2245618(v1);
          Function_22456e4(v1);
          *(uchar *)(v1 + 8) = 9;
        }
        return 0;
      }
      Function_2245618(v1);
      Function_205e630(*(uchar *)(v1 + 9));
      v46 = v45;
      Function_205e630(*(uchar *)(v1 + 9));
      v48 = Function_205e6a8(v47);
      v49 = Function_2030698(*(uint *)(v1 + 4), v46, v48);
      if ( v49 < Function_2244d5c(v1, *(ushort *)(v1 + 22), *(uchar *)(v1 + 19)) )
      {
        v50 = Function_2027b50(*(ushort **)(v1 + 456));
        Function_2249dbc(v1 + 176, v50);
        *(uchar *)(v1 + 10) = Function_2243918(v1, 32, 1);
        Function_2249bac(*(uint *)(v1 + 908), 0);
        *(uchar *)(v1 + 8) = 15;
        return 0;
      }
      if ( GetPkmnData(v43, 6u, 0) )
      {
        Function_2076b10_Dummy();
        Function_2244a8c(v1, 0, v54);
        v55 = GetPkmnData(v43, 6u, 0);
        Function_200b744(*(uint *)(v1 + 36), 1u, v55);
        *(uchar *)(v1 + 10) = Function_2243918(v1, 60, 1);
        *(uchar *)(v1 + 8) = 16;
        return 0;
      }
      if ( !((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v1 + 9)) )
      {
        Function_2244120(v1);
        v51 = Function_2027b50(*(ushort **)(v1 + 456));
        Function_2249dbc(v1 + 176, v51);
        v52 = Function_2244d5c(v1, *(ushort *)(v1 + 22), *(uchar *)(v1 + 19));
        ((void (__fastcall *)(uint, uint, int))dword_223BA14[134])(
          *(uint *)(v1 + 4),
          *(uchar *)(v1 + 9),
          v52);
        Function_2245780(v1, v1 + 80);
        v53 = Function_2244de0(v1, *(ushort *)(v1 + 22), *(uchar *)(v1 + 19));
        Function_22455a0(v1, *(uchar *)(v1 + 13), v53);
        *(uchar *)(v1 + 8) = 18;
        return 0;
      }
      *(ushort *)(v1 + 16) = Function_2244de0(v1, *(ushort *)(v1 + 22), *(uchar *)(v1 + 19));
      Function_2244120(v1);
      Function_2245288(v1 + 176);
      *(uchar *)(v1 + 14) |= 2u;
      return 1;
    case 0xB:
      v56 = Function_2001be0(*(uint *)(a1 + 380));
      if ( v56 > 0xFFFFFFFE )
        return 0;
      if ( v56 >= 0xFFFFFFFE )
        goto LABEL_135;
      if ( v56 > 1 )
        return 0;
      if ( v56 )
      {
        if ( v56 == 1 )
        {
LABEL_135:
          Function_2245618(v1);
          Function_2245288(v1 + 176);
          Function_224409c(v1);
          *(uchar *)(v1 + 8) = 8;
        }
        return 0;
      }
      Function_2245618(v1);
      Function_205e630(*(uchar *)(v1 + 9));
      v58 = v57;
      Function_205e630(*(uchar *)(v1 + 9));
      v60 = Function_205e6a8(v59);
      v61 = Function_2030698(*(uint *)(v1 + 4), v58, v60);
      if ( v61 < (ushort)aDd[Function_2249cac(*(uint *)(v1 + 460), *(uchar *)(v1 + 9), 1) + 2] )
      {
        Function_2245618(v1);
        v62 = Function_2027b50(*(ushort **)(v1 + 456));
        Function_2249dbc(v1 + 176, v62);
        *(uchar *)(v1 + 10) = Function_2243918(v1, 41, 1);
        *(uchar *)(v1 + 8) = 14;
        return 0;
      }
      if ( !((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v1 + 9)) )
      {
        Function_2245c94(v1, *(uchar *)(v1 + 13), 8);
        *(uchar *)(v1 + 8) = 12;
        return 0;
      }
      *(uchar *)(v1 + 14) |= 2u;
      return 1;
    case 0xC:
      if ( Function_2244e44(a1, *(uchar *)(a1 + 13), *(uchar *)(a1 + 19)) == 1 )
        *(uchar *)(v1 + 8) = 13;
      return 0;
    case 0xD:
      if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        Function_2245618(v1);
        Function_224409c(v1);
        Function_2249c60(*(uint *)(v1 + 972), 211, 106);
        *(uchar *)(v1 + 8) = 8;
      }
      return 0;
    case 0xE:
      if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        Function_2245288(v1 + 176);
        Function_224409c(v1);
        *(uchar *)(v1 + 8) = 8;
      }
      return 0;
    case 0xF:
      if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        Function_22456e4(v1);
        *(uchar *)(v1 + 8) = 9;
      }
      return 0;
    case 0x10:
      if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        *(uchar *)(v1 + 10) = Function_2243918(v1, 61, 1);
        Function_22441dc(v1);
        *(uchar *)(v1 + 8) = 17;
      }
      return 0;
    case 0x11:
      v63 = Function_2001be0(*(uint *)(a1 + 380));
      if ( v63 > 0xFFFFFFFE )
        return 0;
      if ( v63 >= 0xFFFFFFFE )
        goto LABEL_156;
      if ( v63 > 1 )
        return 0;
      if ( v63 )
      {
        if ( v63 == 1 )
        {
LABEL_156:
          Function_2245618(v1);
          Function_22456e4(v1);
          *(uchar *)(v1 + 8) = 9;
        }
      }
      else
      {
        Function_2245618(v1);
        if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v1 + 9)) )
        {
          *(ushort *)(v1 + 16) = Function_2244de0(v1, *(ushort *)(v1 + 22), *(uchar *)(v1 + 19));
          Function_2244120(v1);
          Function_2245288(v1 + 176);
          *(uchar *)(v1 + 14) |= 2u;
          return 1;
        }
        Function_2244120(v1);
        v64 = Function_2027b50(*(ushort **)(v1 + 456));
        Function_2249dbc(v1 + 176, v64);
        v65 = Function_2244d5c(v1, *(ushort *)(v1 + 22), *(uchar *)(v1 + 19));
        ((void (__fastcall *)(uint, uint, int))dword_223BA14[134])(
          *(uint *)(v1 + 4),
          *(uchar *)(v1 + 9),
          v65);
        Function_2245780(v1, v1 + 80);
        v66 = Function_2244de0(v1, *(ushort *)(v1 + 22), *(uchar *)(v1 + 19));
        Function_22455a0(v1, *(uchar *)(v1 + 13), v66);
        *(uchar *)(v1 + 8) = 18;
      }
      return 0;
    case 0x12:
      Function_201ff0c(4u, 0);
      if ( Function_2244e44(v1, *(uchar *)(v1 + 13), *(uchar *)(v1 + 19)) == 1 )
        *(uchar *)(v1 + 8) = 19;
      return 0;
    case 0x13:
      if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        Function_2245288(v1 + 176);
        Function_2243fa4(v1);
        *(uchar *)(v1 + 8) = 0;
      }
      return 0;
    case 0x14:
      if ( dword_21BF6C4 & 0x20 )
      {
        Function_2245140();
      }
      else if ( dword_21BF6C4 & 0x10 )
      {
        Function_2245140();
      }
      else if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        Function_2245be0(v1);
        Function_2244018(v1);
        *(uchar *)(v1 + 8) = 1;
      }
      return 0;
    case 0x15:
      if ( dword_21BF6C4 & 0x20 )
      {
        Function_224518c();
      }
      else if ( dword_21BF6C4 & 0x10 )
      {
        Function_224518c();
      }
      else if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        Function_2245be0(v1);
        Function_2244018(v1);
        *(uchar *)(v1 + 8) = 1;
      }
      return 0;
    default:
      JUMPOUT(__CS__, *((short *)&off_2241EE4 + v2) + 35921638);
      return result;
  }
}

//----- (02242C64) --------------------------------------------------------
int __fastcall Function_2242c64(uchar *a1)
{
  uchar *v1;
  int v2;
  int v3;
  int v4;
  int result;

  v1 = a1;
  switch ( a1[8] )
  {
    case 0:
      a1[14] &= 0x9Fu;
      Function_201ff0c(4u, 0);
      if ( Function_224529c(v1, 11, (uchar)v1[13]) == 1 )
      {
        v1[14] &= 0xFDu;
        ++v1[8];
      }
      goto LABEL_18;
    case 1:
      if ( (uchar)a1[18] != 255 )
      {
        a1[15] = 0;
        v2 = (uchar)a1[19];
        if ( v2 != 4 && v2 != 8 )
        {
          v3 = (uchar)a1[18];
          Function_22459d0();
        }
        else
        {
          Function_2245c94(a1, (uchar)a1[18], v2);
        }
        ++v1[8];
      }
      goto LABEL_18;
    case 2:
      v4 = Function_2249c9c((uchar)a1[21], (uchar)a1[18]);
      if ( Function_2244e44(v1, v4, (uchar)v1[19]) == 1 )
      {
        v1[11] = 30;
        ++v1[8];
      }
      goto LABEL_18;
    case 3:
      if ( !--a1[11] )
      {
        Function_20365f4();
        Function_20364f0(130);
        ++v1[8];
      }
      goto LABEL_18;
    case 4:
      if ( Function_2036540(130) != 1 )
        goto LABEL_18;
      Function_20365f4();
      Function_20363e8(0x64u);
      v1[18] = -1;
      if ( !((uint)(uchar)v1[14] << 25 >> 30) )
      {
        Function_2245288(v1 + 176);
        Function_2243fa4(v1);
      }
      v1[1074] = 0;
      result = 1;
      break;
    default:
LABEL_18:
      result = 0;
      break;
  }
  return result;
}

//----- (02242D60) --------------------------------------------------------
int __fastcall Function_2242d60(int a1)
{
  int v1;
  int v2;
  char v3;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( *(uchar *)(a1 + 8) )
  {
    if ( v2 == 1 )
    {
      v3 = *(uchar *)(a1 + 11);
      if ( *(uchar *)(v1 + 11) )
        *(uchar *)(v1 + 11) = v3 - 1;
      if ( !*(uchar *)(v1 + 11) )
      {
        Function_20365f4();
        Function_20364f0(131);
        ++*(uchar *)(v1 + 8);
      }
    }
    else if ( v2 == 2 && Function_2036540(131) == 1 )
    {
      Function_20365f4();
      Function_2245288(v1 + 176);
      return 1;
    }
  }
  else if ( Function_224529c(a1, 13, 0) == 1 )
  {
    *(uchar *)(v1 + 11) = 30;
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (02242DCC) --------------------------------------------------------
int __fastcall Function_2242dcc(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 && Function_200f2ac() == 1 )
      return 1;
  }
  else
  {
    Function_200f174(0, 0, 0, 0, 6, 1, 100);
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (02242E14) --------------------------------------------------------
uint __fastcall Function_2242e14(int a1)
{
  int v1;
  int v2;
  int v3;
  uint *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  Function_2249b8c(*(uint *)(a1 + 900));
  Function_2249b8c(*(uint *)(v1 + 904));
  Function_2249b8c(*(uint *)(v1 + 908));
  Function_2249b8c(*(uint *)(v1 + 972));
  Function_2249b8c(*(uint *)(v1 + 948));
  Function_2249b8c(*(uint *)(v1 + 952));
  Function_2249b8c(*(uint *)(v1 + 976));
  v2 = ((int (__fastcall *)(uint, int))dword_223B7A8[0])(*(uchar *)(v1 + 9), 1);
  v3 = 0;
  if ( v2 > 0 )
  {
    v4 = (uint *)v1;
    do
    {
      Function_2249b8c(v4[228]);
      Function_2249b8c(v4[232]);
      Function_2249b8c(v4[239]);
      ++v3;
      ++v4;
    }
    while ( v3 < v2 );
  }
  Function_2039794();
  Function_2002fa0(*(uint *)(v1 + 448), 2);
  Function_2002fa0(*(uint *)(v1 + 448), 0);
  Call_free1(*(uint *)(v1 + 448));
  *(uint *)(v1 + 448) = 0;
  Function_2249954(v1 + 472);
  Function_200b190(*(ushort **)(v1 + 32));
  Function_200b190(*(ushort **)(v1 + 28));
  Function_200b3f0(*(uint **)(v1 + 36), v5);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 40), v6);
  Function_20237bc_FreeMsg(*(uint *)(v1 + 44), v7);
  Function_200c560(*(int **)(v1 + 452));
  v9 = 0;
  v10 = v1;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v10 + 48), v8);
    ++v9;
    v10 += 4;
  }
  while ( v9 < 3 );
  Function_2249d5c(v1 + 80, 0);
  Function_22433a8(*(uint *)(v1 + 76));
  return Call_FS_CloseFile(*(int **)(v1 + 988));
}

//----- (02242F24) --------------------------------------------------------
uint Function_2242f24()
{
  uint result;

  SetMainLoopFunctionCall(0, 0);
  Function_20177bc(0, 0);
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  result = REG_DISPCNT_SUB & 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  return result;
}

//----- (02242F5C) --------------------------------------------------------
int __fastcall Function_2242f5c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint *v9;
  ushort v10;
  ushort v11;
  ushort v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  int v17;
  int v19;
  short v20;
  int *v21;
  int v22;
  int v23;

  v4 = a1;
  *(uint *)(a1 + 988) = LoadFromNARC_8(150, 0x64u, a3, a4);
  Function_2243324(v4);
  Function_2243384(v4);
  *(uint *)(v4 + 32) = LoadFromMsgNARC(1, 26, 199, 0x64u);
  *(uint *)(v4 + 28) = LoadFromMsgNARC(1, 26, 391, 0x64u);
  *(uint *)(v4 + 36) = Function_200b358(0x64u);
  *(uint *)(v4 + 40) = Function_2023790(600, 0x64u);
  *(uint *)(v4 + 44) = Function_2023790(600, 0x64u);
  v5 = 0;
  v6 = v4;
  do
  {
    *(uint *)(v6 + 48) = Function_2023790(32, 0x64u);
    ++v5;
    v6 += 4;
  }
  while ( v5 < 3 );
  LoadFromNARC_PlFont1(0, 416, 100);
  LoadFromNARC_PlFont2(0, 384, 100);
  *(uint *)(v4 + 452) = Function_200c440(1, 2, 0, 0x64u);
  Function_2249d14(*(uint *)(v4 + 76), v4 + 80, 0);
  Function_2244e14(v4);
  *(uint *)(v4 + 900) = Function_2249b1c(v4 + 472);
  *(uint *)(v4 + 904) = Function_2249b1c(v4 + 472);
  Function_2249bac(*(uint *)(v4 + 900), 0);
  Function_2249bac(*(uint *)(v4 + 904), 0);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v4 + 9)) )
  {
    v7 = 32;
    v20 = 40;
  }
  else
  {
    v7 = 64;
    v20 = 72;
  }
  v8 = 0;
  v19 = ((int (__fastcall *)(uint, int))dword_223B7A8[0])(*(uchar *)(v4 + 9), 1);
  if ( v19 > 0 )
  {
    v9 = (uint *)v4;
    do
    {
      v9[232] = Function_2249b1c(v4 + 472);
      v21 = GetAdrOfPkmnInParty(*(uint **)(v4 + 984), v8);
      if ( !GetPkmnData(v21, 6u, 0) )
        Function_2249bac(v9[232], 0);
      v10 = GetPkmnData(v21, 0xA3u, 0);
      v11 = GetPkmnData(v21, 0xA4u, 0);
      v12 = v11;
      v13 = Function_208c104(v10, v11, 48);
      Function_22450e8(v4, v13);
      v14 = Function_208c104(v10, v12, 48);
      Function_2245114(v4, v14);
      v9[239] = Function_2249b1c(v4 + 472);
      v9[228] = Function_2249b1c(v4 + 472);
      v15 = GetAdrOfPkmnInParty(*(uint **)(v4 + 984), v8);
      Function_2249c08(v9[228], v15);
      ++v8;
      v20 += 64;
      ++v9;
      v7 += 64;
    }
    while ( v8 < v19 );
  }
  *(uint *)(v4 + 908) = Function_2249b1c(v4 + 472);
  Function_22499bc(v4 + 472, 17);
  Function_22499fc(v4 + 472, 17);
  Function_2249bac(*(uint *)(v4 + 908), 0);
  Function_2244d08(v4, &v23, &v22, 0);
  *(uint *)(v4 + 948) = Function_2249b1c(v4 + 472);
  *(uint *)(v4 + 952) = Function_2249b1c(v4 + 472);
  if ( !((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v4 + 9)) )
    Function_2249bac(*(uint *)(v4 + 952), 0);
  *(uint *)(v4 + 972) = Function_2249b1c(v4 + 472);
  Function_2249bac(*(uint *)(v4 + 972), 0);
  *(uint *)(v4 + 976) = Function_2249b1c(v4 + 472);
  Function_2249bac(*(uint *)(v4 + 976), 0);
  if ( Function_2035e38() )
  {
    Function_200966c(1, 16, v16, v17);
    Function_2009704(1);
    Function_2039734();
  }
  return SetMainLoopFunctionCall((int)Function_22433ec, v4);
}

//----- (02243324) --------------------------------------------------------
int __fastcall Function_2243324(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_2243424();
  Function_2243444(*(uint *)(v1 + 76));
  *(uint *)(v1 + 448) = MallocFill120(0x64u);
  Function_2002f70(*(uint *)(v1 + 448), 2, 512, 0x64u);
  Function_2002f70(*(uint *)(v1 + 448), 0, 512, 0x64u);
  v2 = Function_2243588(v1, 3);
  Function_22435fc(v2);
  v3 = Function_2243630(v1, 2);
  Function_2243678(v3);
  Function_201ff0c(4u, 0);
  return Function_224373c(v1, 4);
}

//----- (02243384) --------------------------------------------------------
int __fastcall Function_2243384(int a1)
{
  int v1;
  uchar v2;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9));
  return Function_2249604(v1 + 472, *(uint *)(v1 + 984), v2);
}

//----- (022433A8) --------------------------------------------------------
uint __fastcall Function_22433a8(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x1Fu, 0);
  Function_201ff74(0x1Fu, 0);
  Function_2019044(v1, 3);
  Function_2019044(v1, 2);
  Function_2019044(v1, 0);
  Function_2019044(v1, 1);
  Function_2019044(v1, 4);
  return free(v1);
}

//----- (022433EC) --------------------------------------------------------
int __fastcall Function_22433ec(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 448);
  if ( v2 )
    Function_2003694(v2);
  Function_201c2b8(*(uint *)(v1 + 76));
  Function_201dcac();
  Function_200a858();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (02243424) --------------------------------------------------------
char *Function_2243424()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_2249F04;
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

//----- (02243444) --------------------------------------------------------
uint __fastcall Function_2243444(uint *a1)
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
  v35 = 16777217;
  v36 = 512;
  v37 = 0;
  Function_20183c4(v1, 1u, &v31, 0);
  Function_2019690(1u, 32, 0, 0x64u);
  Function_2019ebc(v1, 1u);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 50397185;
  v29 = 0;
  v30 = 0;
  Function_20183c4(v1, 0, &v24, 0);
  Function_2019690(0, 32, 0, 0x64u);
  Function_2019ebc(v1, 0);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 84017153;
  v22 = 256;
  v23 = 0;
  Function_20183c4(v1, 2u, &v17, 0);
  Function_2019690(2u, 32, 0, 0x64u);
  Function_2019ebc(v1, 2u);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 33816577;
  v15 = 768;
  v16 = 0;
  Function_20183c4(v1, 3u, &v10, 0);
  Function_2019690(3u, 32, 0, 0x64u);
  Function_2019ebc(v1, 3u);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 67502081;
  v8 = 0;
  v9 = 0;
  Function_20183c4(v1, 4u, &v3, 0);
  Function_2019ebc(v1, 4u);
  REG_BG0CNT &= 0xFFFCu;
  return Function_201ff0c(2u, 1);
}

//----- (02243588) --------------------------------------------------------
int __fastcall Function_2243588(int a1, uchar a2)
{
  int v2;
  uchar v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 988), 0x22u, *(uint **)(a1 + 76), a2, 0, 0, 1, 100);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v2 + 9)) )
    result = Function_200710c(*(uint *)(v2 + 988), 0x24u, *(uint **)(v2 + 76), v3, 0, 0, 1, 100);
  else
    result = Function_200710c(*(uint *)(v2 + 988), 0x23u, *(uint **)(v2 + 76), v3, 0, 0, 1, 100);
  return result;
}

//----- (022435FC) --------------------------------------------------------
uint __fastcall Function_22435fc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;

  v7 = a4;
  v4 = Function_2006f88(150, 137, &v6, 100);
  DC_FlushRange(*(uint *)(v6 + 12), 128);
  GX_LoadBGPltt(*(uint *)(v6 + 12), 0, 0x80u);
  return free(v4);
}

//----- (02243630) --------------------------------------------------------
int __fastcall Function_2243630(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 988), 0x22u, *(uint **)(a1 + 76), a2, 0, 0, 1, 100);
  return Function_200710c(*(uint *)(v2 + 988), 0x26u, *(uint **)(v2 + 76), v3, 0, 0, 1, 100);
}

//----- (02243678) --------------------------------------------------------
uint __fastcall Function_2243678(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;

  v7 = a4;
  v4 = Function_2006f88(150, 137, &v6, 100);
  DC_FlushRange(*(uint *)(v6 + 12), 128);
  GX_LoadBGPltt(*(uint *)(v6 + 12), 0, 0x80u);
  return free(v4);
}

//----- (022436AC) --------------------------------------------------------
int __fastcall Function_22436ac(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 988), 0x22u, *(uint **)(a1 + 76), a2, 0, 0, 1, 100);
  return Function_200710c(*(uint *)(v2 + 988), 0x27u, *(uint **)(v2 + 76), v3, 0, 0, 1, 100);
}

//----- (022436F4) --------------------------------------------------------
int __fastcall Function_22436f4(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 988), 0x22u, *(uint **)(a1 + 76), a2, 0, 0, 1, 100);
  return Function_200710c(*(uint *)(v2 + 988), 0x25u, *(uint **)(v2 + 76), v3, 0, 0, 1, 100);
}

//----- (0224373C) --------------------------------------------------------
int __fastcall Function_224373c(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 988), 0x7Du, *(uint **)(a1 + 76), a2, 0, 0, 1, 100);
  Function_200710c(*(uint *)(v2 + 988), 0x7Eu, *(uint **)(v2 + 76), v3, 0, 0, 1, 100);
  return Function_2007130(*(uint *)(v2 + 988), 0xABu, 4u, 0, 32, 100);
}

//----- (0224379C) --------------------------------------------------------
int __fastcall Function_224379c(int a1, int a2, int a3, int a4, int a5, int a6, uchar a7)
{
  return Function_22437cc(a1, a2, a3, a4, a5, a6, a7);
}

//----- (022437CC) --------------------------------------------------------
int __fastcall Function_22437cc(int a1, int a2, uint a3, int a4, int a5, int a6, int a7, int a8, uchar a9, uchar a10, int a11)
{
  int v11;
  int v12;
  uint v13;
  int v14;
  int v15;

  v11 = a2;
  v12 = a1;
  v13 = a3;
  Function_201ada4_ClearTextBox(a2, a9);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v12 + 32), v13, *(ushort **)(v12 + 44));
  Function_200c388(*(uint **)(v12 + 36), *(uint *)(v12 + 40), *(uint *)(v12 + 44));
  if ( a11 == 1 )
  {
    Function_2002d7c(0, *(uint *)(v12 + 40), 0);
  }
  else if ( a11 == 2 )
  {
    Function_2002d7c(0, *(uint *)(v12 + 40), 0);
  }
  v14 = *(uint *)(v12 + 40);
  v15 = Function_201d78c(v11, a10);
  Function_201a9a4(v11);
  return v15;
}

//----- (02243860) --------------------------------------------------------
int __fastcall Function_2243860(int a1, int a2, int a3, int a4, int a5, int a6, uchar a7)
{
  return Function_2243890(a1, a2, a3, a4, a5, a6, a7);
}

//----- (02243890) --------------------------------------------------------
int __fastcall Function_2243890(int a1, int a2, uint a3, int a4, int a5, int a6, int a7, int a8, int a9, uchar a10, int a11)
{
  int v11;
  int v12;
  int v13;
  int v14;

  v11 = a1;
  v12 = a2;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 32), a3, *(ushort **)(a1 + 44));
  Function_200c388(*(uint **)(v11 + 36), *(uint *)(v11 + 40), *(uint *)(v11 + 44));
  if ( a11 == 1 )
  {
    Function_2002d7c(0, *(uint *)(v11 + 40), 0);
  }
  else if ( a11 == 2 )
  {
    Function_2002d7c(0, *(uint *)(v11 + 40), 0);
  }
  v13 = *(uint *)(v11 + 40);
  v14 = Function_201d78c(v12, a10);
  Function_201a9a4(v12);
  return v14;
}

//----- (02243918) --------------------------------------------------------
int __fastcall Function_2243918(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = Function_224379c(a1, a1 + 176, a2, 1, 1, 255, 1u);
  Function_201a9a4(v2 + 176);
  return v3;
}

//----- (02243950) --------------------------------------------------------
int __fastcall Function_2243950(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  int *v5;
  uint v6;
  int v7;
  uint v8;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_201ada4_ClearTextBox(a2, 0);
  v6 = GetPkmnData(v5, 6u, 0);
  Function_200b70c(*(uint *)(v4 + 36), 0, v6);
  Function_2243b5c(v4, v3, 70);
  Function_2243b5c(v4, v3, 71);
  v7 = Function_2075bcc((int)v5);
  Function_200b6d8(*(uint *)(v4 + 36), 0, v7);
  Function_2243b5c(v4, v3, 72);
  Function_2243b5c(v4, v3, 73);
  v8 = GetPkmnData(v5, 0xAu, 0);
  Function_200b6a0(*(uint *)(v4 + 36), 0, v8);
  Function_2243b5c(v4, v3, 74);
  Function_2243b5c(v4, v3, 75);
  GetPkmnData(v5, 0xA5u, 0);
  Function_2244a74(v4);
  Function_2243b5c(v4, v3, 76);
  Function_2243b5c(v4, v3, 77);
  GetPkmnData(v5, 0xA6u, 0);
  Function_2244a74(v4);
  Function_2243b5c(v4, v3, 78);
  Function_2243b5c(v4, v3, 79);
  GetPkmnData(v5, 0xA8u, 0);
  Function_2244a74(v4);
  Function_2243b5c(v4, v3, 80);
  Function_2243b5c(v4, v3, 81);
  GetPkmnData(v5, 0xA9u, 0);
  Function_2244a74(v4);
  Function_2243b5c(v4, v3, 82);
  Function_2243b5c(v4, v3, 83);
  GetPkmnData(v5, 0xA7u, 0);
  Function_2244a74(v4);
  Function_2243b5c(v4, v3, 84);
  Function_2243b5c(v4, v3, 85);
  return Function_201a9a4(v3);
}

//----- (02243B5C) --------------------------------------------------------
int __fastcall Function_2243b5c(int a1, int a2, uint a3, int a4, ushort a5, int a6)
{
  return Function_2243890(a1, a2, a3, a4, a5, 255, 1, 2, 0, 0, a6);
}

//----- (02243B84) --------------------------------------------------------
int __fastcall Function_2243b84(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_201ada4_ClearTextBox(a2, 0);
  Function_2243c18(v4, v3, 0, 88, 92, v5, 54, 58, 66);
  Function_2243c18(v4, v3, 1, 89, 92, v5, 55, 59, 67);
  Function_2243c18(v4, v3, 2, 90, 92, v5, 56, 60, 68);
  Function_2243c18(v4, v3, 3, 91, 92, v5, 57, 61, 69);
  return Function_201a9a4(v3);
}

//----- (02243C18) --------------------------------------------------------
int __fastcall Function_2243c18(int a1, int a2, uint a3, int a4, uint a5, int *a6, uint a7, uint a8, uint a9)
{
  int v9;
  int v10;
  uint v11;
  int v12;
  uint v13;
  int v14;
  int result;

  v9 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  v13 = GetPkmnData(a6, a7, 0);
  Function_200b630(*(uint *)(v9 + 36), v11, v13);
  v14 = (24 * v11 + 12) & 0xFFFF;
  *(uchar *)(v9 + 10) = Function_2243860(v9, v10, v12, 24, v14, 255, 1u);
  GetPkmnData(a6, a8, 0);
  Function_2244a74(v9);
  GetPkmnData(a6, a9, 0);
  Function_2244a74(v9);
  result = Function_2243890(v9, v10, a5, 137, v14, 255, 1, 2, 0, 0, 1);
  *(uchar *)(v9 + 10) = result;
  return result;
}

//----- (02243CC0) --------------------------------------------------------
int __fastcall Function_2243cc0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int i;

  v2 = a2;
  v3 = a1;
  Function_201ada4_ClearTextBox(a2, 0);
  v4 = ((int (__fastcall *)(uint, int))dword_223B7A8[0])(*(uchar *)(v3 + 9), 1);
  for ( i = 0; i < v4; ++i )
    Function_2243cfc(v3, v2, (uchar)i, 0);
  return Function_201a9a4(v2);
}

//----- (02243CFC) --------------------------------------------------------
int __fastcall Function_2243cfc(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  ushort v12;
  int v13;
  int v14;
  int *v16;
  ushort v17;
  uint v18;

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  v16 = GetAdrOfPkmnInParty(*(uint **)(a1 + 984), a3);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v4 + 9)) )
    v8 = 4;
  else
    v8 = 36;
  if ( v7 )
  {
    v17 = 28;
    LOWORD(v9) = 4;
    v12 = 0;
    LOWORD(v18) = 36;
  }
  else
  {
    v9 = (v8 + (v5 << 6)) & 0xFFFF;
    v10 = v8 + 24 + (v5 << 6);
    v11 = (v8 + 32 + (v5 << 6)) << 16;
    v17 = v10;
    v12 = 1;
    v18 = v11 >> 16;
  }
  v13 = GetPkmnData(v16, 0xA3u, 0);
  Function_200c5bc(*(uint *)(v4 + 452), v13, 3, 1, v6, v9, v12);
  Function_200c578(*(uint *)(v4 + 452), 0, v6, v17, v12);
  v14 = GetPkmnData(v16, 0xA4u, 0);
  return Function_200c5bc(*(uint *)(v4 + 452), v14, 3, 0, v6, v18, v12);
}

//----- (02243DB0) --------------------------------------------------------
int __fastcall Function_2243db0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int i;

  v2 = a1;
  v3 = a2;
  v4 = ((int (__fastcall *)(uint, int))dword_223B7A8[0])(*(uchar *)(a1 + 9), 1);
  for ( i = 0; i < v4; ++i )
    Function_2243de4(v2, v3, (uchar)i, 0);
  return Function_201a9a4(v3);
}

//----- (02243DE4) --------------------------------------------------------
int __fastcall Function_2243de4(int a1, int a2, int a3, int a4)
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
  uchar v13;
  int v15;
  int v16;
  int *v17;

  v4 = a1;
  v16 = a4;
  v15 = a2;
  v5 = a3;
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) )
  {
    v6 = 8;
    v7 = 48;
  }
  else
  {
    v6 = 40;
    v7 = 80;
  }
  v17 = GetAdrOfPkmnInParty(*(uint **)(v4 + 984), v5);
  if ( v16 )
  {
    LOWORD(v9) = 4;
    v10 = 0;
    v11 = 48;
  }
  else
  {
    v8 = v5 << 6;
    v9 = v6 + (v5 << 6);
    v10 = 1;
    v11 = v7 + v8;
  }
  v12 = GetPkmnData(v17, 0xA1u, 0);
  Function_200c648(*(uint *)(v4 + 452), 1, v12, 3, 0, v15, v9, v10);
  v13 = GetPkmnData(v17, 0x6Fu, 0);
  return Function_2244b8c(v4, v15, v11, v10, 0, v13);
}

//----- (02243E74) --------------------------------------------------------
int __fastcall Function_2243e74(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int v7;

  v2 = a1;
  v3 = a2;
  Function_205e630(*(uchar *)(a1 + 9));
  v5 = v4;
  Function_205e630(*(uchar *)(v2 + 9));
  v7 = Function_205e6a8(v6);
  Function_2030698(*(uint *)(v2 + 4), v5, v7);
  Function_2249d84(*(uint *)(v2 + 76), v3);
  Function_201ada4_ClearTextBox(v3, 15);
  Function_2244ab4(v2, v3);
  Function_2244a74(v2);
  *(uchar *)(v2 + 10) = Function_2243860(v2, v3, 4, 16, 16, 255, 1u);
  return Function_201a9a4(v3);
}

//----- (02243EF8) --------------------------------------------------------
int __fastcall Function_2243ef8(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_201ada4_ClearTextBox(a2, 0);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v4 + 28), v5, *(ushort **)(v4 + 44));
  Function_200c388(*(uint **)(v4 + 36), *(uint *)(v4 + 40), *(uint *)(v4 + 44));
  v6 = *(uint *)(v4 + 40);
  v7 = Function_201d78c(v3, 0);
  Function_201a9a4(v3);
  return v7;
}

//----- (02243F4C) --------------------------------------------------------
int __fastcall Function_2243f4c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) )
    v8 = 4;
  else
    v8 = 36;
  v9 = v8 + (v6 << 6);
  Function_201ae78(v5, 0, (ushort)v9, 0, 0x18u, 9u);
  Function_200c5bc(*(uint *)(v4 + 452), v7, 3, 1, v5, v9, 1u);
  return Function_201a9a4(v5);
}

//----- (02243FA4) --------------------------------------------------------
int __fastcall Function_2243fa4(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  *(uchar *)(a1 + 10) = Function_22437cc(a1, a1 + 96, 6u, 16, 5, 255, 1, 2, 0, 0, 1);
  v2 = Function_2027b50(*(ushort **)(v1 + 456));
  Function_2249dbc(v1 + 192, v2);
  result = Function_224379c(v1, v1 + 192, 5, 1, 1, 255, 1u);
  *(uchar *)(v1 + 10) = result;
  return result;
}

//----- (0224400C) --------------------------------------------------------
int __fastcall Function_224400c(int a1)
{
  return Function_2245288(a1 + 192);
}

//----- (02244018) --------------------------------------------------------
int __fastcall Function_2244018(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  v2 = Function_2027b50(*(ushort **)(a1 + 456));
  Function_2249dbc(v1 + 208, v2);
  *(ushort *)(v1 + 22) = 0;
  return Function_2244944(v1);
}

//----- (0224403C) --------------------------------------------------------
int __fastcall Function_224403c(int a1)
{
  int v1;

  v1 = a1;
  Function_20014dc(*(uint *)(a1 + 408), (ushort *)(v1 + 24), (ushort *)(v1 + 26));
  Function_2245288(v1 + 208);
  return Function_2245730(v1);
}

//----- (02244064) --------------------------------------------------------
int __fastcall Function_2244064(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  v2 = Function_2027b50(*(ushort **)(a1 + 456));
  Function_2249dbc(v1 + 176, v2);
  *(uchar *)(v1 + 10) = Function_2243918(v1, 24);
  *(ushort *)(v1 + 22) = 0;
  return Function_22445c4(v1);
}

//----- (02244094) --------------------------------------------------------
int __fastcall Function_2244094(int a1)
{
  return Function_2245730(a1);
}

//----- (0224409C) --------------------------------------------------------
int __fastcall Function_224409c(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  v2 = Function_2027b50(*(ushort **)(a1 + 456));
  Function_2249dbc(v1 + 176, v2);
  *(ushort *)(v1 + 22) = 0;
  return Function_2244780(v1);
}

//----- (022440C0) --------------------------------------------------------
int __fastcall Function_22440c0(int a1)
{
  return Function_2245730(a1);
}

//----- (022440C8) --------------------------------------------------------
int __fastcall Function_22440c8(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = a2;
  *(uchar *)(a1 + 14) |= 8u;
  Function_2245288(a1 + 176);
  Function_201acf4(v2 + 176);
  Function_201acf4(v2 + 224);
  Function_22436f4(v2, 2u);
  Function_201ff0c(4u, 1);
  Function_201ad10(v2 + 144);
  *(ushort *)(v2 + 22) = 0;
  Function_2244240(v2, v3);
  return Function_2243e74(v2, v2 + 320);
}

//----- (02244120) --------------------------------------------------------
int __fastcall Function_2244120(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 14);
  result = (uint)(v2 << 28) >> 31;
  if ( result == 1 )
  {
    *(uchar *)(v1 + 14) = v2 & 0xF7;
    Function_201ad10(v1 + 272);
    Function_2245730(v1);
    result = Function_2245660(v1);
  }
  return result;
}

//----- (0224414C) --------------------------------------------------------
int __fastcall Function_224414c(int result, int a2, char a3)
{
  int v3;
  int v4;

  v3 = 0;
  v4 = result;
  do
  {
    *(uint *)(v4 + 384) = 0;
    *(uint *)(v4 + 388) = 0;
    ++v3;
    v4 += 8;
  }
  while ( v3 < 3 );
  *(uint *)(result + 368) = result + 384;
  *(uint *)(result + 372) = a2;
  *(uchar *)(result + 376) = 0;
  *(uchar *)(result + 377) = 1;
  *(uchar *)(result + 378) = a3;
  *(uchar *)(result + 379) &= 0xF0u;
  *(uchar *)(result + 379) &= 0xCFu;
  *(uchar *)(result + 379) = *(uchar *)(result + 379) & 0x3F | 0x40;
  return result;
}

//----- (022441B0) --------------------------------------------------------
int __fastcall Function_22441b0(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a1 + 48;
  v8 = 4 * a2;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 32), a4, *(ushort **)(a1 + 48 + 4 * a2));
  v9 = v4 + 8 * v5;
  *(uint *)(v9 + 384) = *(uint *)(v7 + v8);
  result = v6;
  *(uint *)(v9 + 388) = v6;
  return result;
}

//----- (022441DC) --------------------------------------------------------
int __fastcall Function_22441dc(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_2249d84(*(uint *)(a1 + 76), a1 + 288);
  Function_224414c(v1, v1 + 288, 2);
  Function_22441b0(v1, 0, 0, 0x1Eu);
  Function_22441b0(v1, 1, 1, 0x1Fu);
  *(uint *)(v1 + 380) = Function_2001b7c((uint *)(v1 + 368), 8, 0, 0, 0x64u, 2);
  v2 = *(uchar *)(v1 + 14);
  result = v2 | 0x10;
  *(uchar *)(v1 + 14) = v2 | 0x10;
  return result;
}

//----- (02244240) --------------------------------------------------------
ushort *__fastcall Function_2244240(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  short *v7;
  short *v8;
  uint v9;
  uint *v10;
  uint *v11;
  uint *v12;
  uint *v13;
  int v15;
  int v16;
  ushort **v17;

  v2 = a1;
  v15 = a2;
  v3 = *(uchar *)(a1 + 13);
  Function_224503c();
  v4 = Function_2249c98(*(uchar *)(v2 + 20), *(uchar *)(v2 + 13));
  Function_2243cfc(v2, v2 + 352, v4, 1);
  Function_201a9a4(v2 + 352);
  Function_2243de4(v2, v2 + 336, v4, 1);
  Function_201a9a4(v2 + 336);
  Function_2249bac(*(uint *)(v2 + 908), 1);
  Function_2249bac(*(uint *)(v2 + 900), 1);
  Function_2249bac(*(uint *)(v2 + 904), 1);
  Function_2249bac(*(uint *)(v2 + 976), 1);
  v17 = (ushort **)LoadFromMsgNARC(1, 26, 392, 0x64u);
  v5 = Function_2249cac(*(uint *)(v2 + 460), *(uchar *)(v2 + 9), 1);
  if ( v15 == 6 )
    v16 = *((ushort *)&dword_2249E0C[1] + v5 - 1 + 1) & 0xFF;
  else
    v16 = word_2249E06[v5 - 1] & 0xFF;
  *(uint *)(v2 + 412) = Function_2013a04(v16 + 1, 0x64u);
  v6 = 0;
  if ( v16 > 0 )
  {
    v7 = &word_224A02C;
    v8 = &word_2249F84;
    do
    {
      if ( v15 == 6 )
        v9 = (ushort)*v7;
      else
        v9 = (ushort)*v8;
      Function_2013a4c(*(uint **)(v2 + 412), v17, v9, v6++);
      ++v7;
      ++v8;
    }
    while ( v6 < v16 );
  }
  Function_2013a4c(*(uint **)(v2 + 412), *(ushort ***)(v2 + 32), 0xDu, -2);
  v10 = (uint *)(v2 + 416);
  *v10 = 0;
  v10[1] = Function_224440c;
  v11 = (uint *)(v2 + 424);
  *v11 = Function_2244560;
  v11[1] = 0;
  v12 = (uint *)(v2 + 432);
  *v12 = 458812;
  v12[1] = 268437504;
  v13 = (uint *)(v2 + 440);
  *v13 = 32;
  v13[1] = 0;
  *v10 = *(uint *)(v2 + 412);
  *(uint *)(v2 + 428) = v2 + 160;
  *(uint *)(v2 + 444) = v2;
  *(uint *)(v2 + 420) = Function_224440c;
  *(uint *)(v2 + 424) = Function_2244560;
  *(ushort *)(v2 + 432) = v16 + 1;
  *(uchar *)(v2 + 440) &= 0xF0u;
  *(ushort *)(v2 + 434) = 6;
  *(uchar *)(v2 + 437) = 0;
  *(ushort *)(v2 + 442) |= 0x8000u;
  *(uint *)(v2 + 408) = Function_200112c((uint *)(v2 + 416), 0, 0, 0x64u);
  Function_2245650(v2, v2 + 160);
  return Function_200b190((ushort *)v17);
}

//----- (0224440C) --------------------------------------------------------
int __fastcall Function_224440c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint v6;
  uint v7;
  uint v8;
  int v9;
  int v10;
  int result;
  int v12;
  ushort v13[2];
  ushort v14[2];
  char v15;

  v12 = a2;
  v3 = a1;
  v4 = a3;
  v5 = Function_2001504(a1, 0x13u);
  if ( v4 )
  {
    v13[0] = 0;
  }
  else
  {
    Function_2005748(0x5DCu);
    Function_20014d0(*(uint *)(v5 + 408), v13);
  }
  v6 = Function_2001504(v3, 2u);
  v7 = Function_2001504(v3, 3u);
  Function_20014dc(v3, &v15, v14);
  if ( *(ushort *)&v15 )
  {
    if ( *(ushort *)&v15 == v6 - v7 )
    {
      Function_2249bac(*(uint *)(v5 + 900), 1);
      Function_2249bac(*(uint *)(v5 + 904), 0);
    }
    else
    {
      Function_2249bac(*(uint *)(v5 + 900), 1);
      Function_2249bac(*(uint *)(v5 + 904), 1);
    }
  }
  else
  {
    Function_2249bac(*(uint *)(v5 + 900), 0);
    Function_2249bac(*(uint *)(v5 + 904), 1);
  }
  Function_2249bb8(*(uint *)(v5 + 976), 158, (16 * v14[0] + 24) & 0xFFFF);
  if ( v12 == -2 )
  {
    Function_22499bc(v5 + 472, 0xFFFF);
    Function_22499fc(v5 + 472, 0xFFFF);
    Function_201ada4_ClearTextBox(v5 + 272, 0);
    result = Function_201a9a4(v5 + 272);
  }
  else
  {
    v8 = Function_2244de0(v5, v13[0], *(uchar *)(v5 + 19));
    Function_2243ef8(v5, v5 + 272, v8);
    v9 = Function_2244de0(v5, v13[0], *(uchar *)(v5 + 19));
    Function_22499bc(v5 + 472, v9);
    v10 = Function_2244de0(v5, v13[0], *(uchar *)(v5 + 19));
    result = Function_22499fc(v5 + 472, v10);
  }
  return result;
}

//----- (02244560) --------------------------------------------------------
uint __fastcall Function_2244560(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint result;
  int v6;

  v3 = a2;
  v4 = a3;
  result = Function_2001504(a1, 0x13u);
  v6 = result;
  if ( v3 != -2 )
  {
    Function_2244d5c(result, (ushort)v3, *(uchar *)(result + 19));
    Function_2244a74(v6);
    *(uchar *)(v6 + 10) = Function_2243890(v6, v6 + 160, 4u, 128, v4, 255, 1, 2, 0, 0, 2);
    result = Function_201a9a4(v6 + 160);
  }
  return result;
}

//----- (022445C4) --------------------------------------------------------
int __fastcall Function_22445c4(int a1)
{
  int v1;
  int *v2;
  uint v3;
  uint *v4;
  uint (__fastcall **v5)(int, int, int);
  uint *v6;
  uint *v7;

  v1 = a1;
  Function_2249d84(*(uint *)(a1 + 76), a1 + 240);
  Function_201ada4_ClearTextBox(v1 + 240, 15);
  v2 = dword_2249FF0;
  *(uint *)(v1 + 412) = Function_2013a04(5u, 0x64u);
  v3 = 0;
  do
  {
    Function_2013a4c(*(uint **)(v1 + 412), *(ushort ***)(v1 + 32), v2[1], v2[2]);
    ++v3;
    v2 += 3;
  }
  while ( v3 < 5 );
  v4 = (uint *)(v1 + 416);
  *v4 = 0;
  v4[1] = Function_224440c;
  v5 = (uint (__fastcall **)(int, int, int))(v1 + 424);
  *v5 = Function_2244560;
  v5[1] = 0;
  v6 = (uint *)(v1 + 432);
  *v6 = 458812;
  v6[1] = 268437504;
  v7 = (uint *)(v1 + 440);
  *v7 = 32;
  v7[1] = 0;
  *v4 = *(uint *)(v1 + 412);
  *(uint *)(v1 + 428) = v1 + 240;
  *(uint *)(v1 + 444) = v1;
  *(uint *)(v1 + 420) = Function_2244690;
  *(uint *)(v1 + 424) = Function_2244708;
  *(ushort *)(v1 + 432) = 5;
  *(ushort *)(v1 + 434) = 5;
  *(uchar *)(v1 + 440) = *(uchar *)(v1 + 440) & 0xF0 | 0xF;
  *(uint *)(v1 + 408) = Function_200112c((uint *)(v1 + 416), 0, 0, 0x64u);
  return Function_2245650(v1, v1 + 240);
}

//----- (02244690) --------------------------------------------------------
int __fastcall Function_2244690(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a2;
  v4 = a3;
  v5 = Function_2001504(a1, 0x13u);
  if ( !v4 )
    Function_2005748(0x5DCu);
  v6 = Function_2249cac(*(uint *)(v5 + 460), *(uchar *)(v5 + 9), 0);
  if ( v3 == 4 )
  {
    if ( v6 == 3 )
    {
      v7 = 27;
    }
    else if ( v6 == 1 )
    {
      v7 = 25;
    }
    else
    {
      v7 = 26;
    }
  }
  else if ( v3 == -2 )
  {
    v7 = 28;
  }
  else
  {
    v7 = 24;
  }
  return Function_224379c(v5, v5 + 176, v7, 1, 1, 255, 1u);
}

//----- (02244708) --------------------------------------------------------
int __fastcall Function_2244708(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint v6;
  uint v7;
  char v8;
  char v9;
  char v11;
  int v12;

  v12 = a4;
  v4 = a2;
  v5 = a1;
  v6 = Function_2001504(a1, 0x13u);
  Function_20014d0(v5, &v11);
  v7 = Function_2249cac(*(uint *)(v6 + 460), *(uchar *)(v6 + 9), 0);
  switch ( v8 )
  {
    case 1:
    case 2:
    case 3:
      if ( v7 < dword_2249FE4[3 * v4] )
        v9 = 2;
      else
        v9 = 1;
      break;
    case 4:
      if ( v7 == 3 )
        v9 = 2;
      else
        v9 = 1;
      break;
    default:
      v9 = 1;
      break;
  }
  return Function_20013d8(v5, v9, 15, 2);
}

//----- (02244780) --------------------------------------------------------
uint __fastcall Function_2244780(int a1)
{
  int v1;
  int *v2;
  uint v3;
  uint *v4;
  uint (__fastcall **v5)(int, int, int);
  uint *v6;
  uint *v7;

  v1 = a1;
  Function_2019120(0, 0);
  Function_2249d84(*(uint *)(v1 + 76), v1 + 256);
  Function_201ada4_ClearTextBox(v1 + 256, 15);
  v2 = &dword_2249F54;
  *(uint *)(v1 + 412) = Function_2013a04(4u, 0x64u);
  v3 = 0;
  do
  {
    Function_2013a4c(*(uint **)(v1 + 412), *(ushort ***)(v1 + 32), v2[1], v2[2]);
    ++v3;
    v2 += 3;
  }
  while ( v3 < 4 );
  v4 = (uint *)(v1 + 416);
  *v4 = 0;
  v4[1] = Function_224440c;
  v5 = (uint (__fastcall **)(int, int, int))(v1 + 424);
  *v5 = Function_2244560;
  v5[1] = 0;
  v6 = (uint *)(v1 + 432);
  *v6 = 458812;
  v6[1] = 268437504;
  v7 = (uint *)(v1 + 440);
  *v7 = 32;
  v7[1] = 0;
  *v4 = *(uint *)(v1 + 412);
  *(uint *)(v1 + 428) = v1 + 256;
  *(uint *)(v1 + 444) = v1;
  *(uint *)(v1 + 420) = Function_224486c;
  *(uint *)(v1 + 424) = Function_22448e8;
  *(ushort *)(v1 + 432) = 4;
  *(ushort *)(v1 + 434) = 4;
  *(uchar *)(v1 + 440) = *(uchar *)(v1 + 440) & 0xF0 | 0xF;
  *(uint *)(v1 + 408) = Function_200112c((uint *)(v1 + 416), 0, 0, 0x64u);
  Function_2245650(v1, v1 + 256);
  Function_201a9a4(v1 + 256);
  return Function_2019120(0, 1);
}

//----- (0224486C) --------------------------------------------------------
int __fastcall Function_224486c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a2;
  v4 = a3;
  v5 = Function_2001504(a1, 0x13u);
  if ( !v4 )
    Function_2005748(0x5DCu);
  v6 = Function_2249cac(*(uint *)(v5 + 460), *(uchar *)(v5 + 9), 1);
  switch ( v3 )
  {
    case 6:
      v7 = 48;
      break;
    case 7:
      v7 = 49;
      break;
    case 8:
      if ( v6 == 3 )
      {
        v7 = 52;
      }
      else if ( v6 == 1 )
      {
        v7 = 50;
      }
      else
      {
        v7 = 51;
      }
      break;
    default:
      v7 = 53;
      break;
  }
  return Function_224379c(v5, v5 + 176, v7, 1, 1, 255, 1u);
}

//----- (022448E8) --------------------------------------------------------
int __fastcall Function_22448e8(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  uint v5;
  char v6;

  v2 = a2;
  v3 = a1;
  v4 = Function_2001504(a1, 0x13u);
  v5 = Function_2249cac(*(uint *)(v4 + 460), *(uchar *)(v4 + 9), 1);
  if ( v2 == 7 )
  {
    if ( v5 < 2 )
      v6 = 2;
    else
      v6 = 1;
  }
  else if ( v2 == 8 )
  {
    if ( v5 == 3 )
      v6 = 2;
    else
      v6 = 1;
  }
  else
  {
    v6 = 1;
  }
  return Function_20013d8(v3, v6, 15, 2);
}

//----- (02244944) --------------------------------------------------------
int __fastcall Function_2244944(int a1)
{
  int v1;
  int *v2;
  int v3;
  uint *v4;
  uint (__fastcall **v5)(int, int, int);
  uint *v6;
  uint *v7;

  v1 = a1;
  Function_2249d84(*(uint *)(a1 + 76), a1 + 224);
  Function_201ada4_ClearTextBox(v1 + 224, 15);
  v2 = &dword_2249F2C;
  *(uint *)(v1 + 412) = Function_2013a04(5u, 0x64u);
  v3 = 0;
  do
  {
    Function_2013a4c(*(uint **)(v1 + 412), *(ushort ***)(v1 + 32), *v2, v2[1]);
    ++v3;
    v2 += 2;
  }
  while ( v3 < 5 );
  v4 = (uint *)(v1 + 416);
  *v4 = 0;
  v4[1] = Function_224440c;
  v5 = (uint (__fastcall **)(int, int, int))(v1 + 424);
  *v5 = Function_2244560;
  v5[1] = 0;
  v6 = (uint *)(v1 + 432);
  *v6 = 458812;
  v6[1] = 268437504;
  v7 = (uint *)(v1 + 440);
  *v7 = 32;
  v7[1] = 0;
  *v4 = *(uint *)(v1 + 412);
  *(uint *)(v1 + 428) = v1 + 224;
  *(uint *)(v1 + 444) = v1;
  *(uint *)(v1 + 420) = Function_2244a1c;
  *(uint *)(v1 + 424) = 0;
  *(ushort *)(v1 + 432) = 5;
  *(ushort *)(v1 + 434) = 5;
  *(uchar *)(v1 + 440) = *(uchar *)(v1 + 440) & 0xF0 | 0xF;
  *(uint *)(v1 + 444) = v1;
  *(uint *)(v1 + 408) = Function_200112c((uint *)(v1 + 416), *(ushort *)(v1 + 24), *(ushort *)(v1 + 26), 0x64u);
  Function_2245650(v1, v1 + 224);
  return Function_201a9a4(v1 + 224);
}

//----- (02244A1C) --------------------------------------------------------
int __fastcall Function_2244a1c(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  ushort v8[2];
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a3;
  v6 = Function_2001504(a1, 0x13u);
  if ( !v5 )
    Function_2005748(0x5DCu);
  Function_20014d0(v4, v8);
  return Function_224379c(v6, v6 + 208, *((ushort *)dword_2249E18 + v8[0]), 1, 1, 255, 1u);
}

//----- (02244A74) --------------------------------------------------------
uint __fastcall Function_2244a74(int a1, uint a2, int a3, int a4, int a5)
{
  return Function_200b60c(*(uint *)(a1 + 36), a2, a3, a4, a5, 1);
}

//----- (02244A8C) --------------------------------------------------------
ushort *__fastcall Function_2244a8c(int a1, uint a2, int a3)
{
  return Function_200b538(*(uint *)(a1 + 36), a2, a3);
}

//----- (02244A98) --------------------------------------------------------
uint __fastcall Function_2244a98(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  LoadTrainerDataAdress(*(uint *)(a1 + 460));
  return Function_200b498(*(uint *)(v2 + 36), v3);
}

//----- (02244AB4) --------------------------------------------------------
uint __fastcall Function_2244ab4(int a1, int a2, int a3, int a4, uchar a5)
{
  int v5;
  int v6;
  ushort *v7;
  ushort *v8;
  int v9;

  v5 = a2;
  v6 = LoadTrainerDataAdress(*(uint *)(a1 + 460));
  v7 = (ushort *)Function_2023790(8, 0x64u);
  Function_2025ef0_Dummy();
  Function_2023d28(v7, v8);
  GetGender(v6);
  Function_201d78c(v5, a5);
  Function_201a9a4(v5);
  return Function_20237bc_FreeMsg((int)v7, v9);
}

//----- (02244B24) --------------------------------------------------------
int __fastcall Function_2244b24(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uchar v9;
  int v11;

  v4 = a1;
  v5 = a2;
  v11 = a3;
  v6 = a4;
  v7 = Function_203608c();
  v8 = Function_2032ee8(v7 ^ 1);
  if ( GetGender(v8) )
    v9 = 3;
  else
    v9 = 7;
  Function_200b498(*(uint *)(v4 + 36), 0);
  return Function_2243860(v4, v5, 1, v11, v6, 255, v9);
}

//----- (02244B8C) --------------------------------------------------------
int __fastcall Function_2244b8c(int result, int a2, int a3, int a4, int a5, char a6)
{
  int v6;
  int v7;
  int v8;
  uchar v9;

  v6 = a3;
  v7 = a4;
  if ( a6 )
  {
    if ( a6 != 1 )
      return result;
    v8 = 87;
    v9 = 3;
  }
  else
  {
    v8 = 86;
    v9 = 7;
  }
  return Function_2243860(result, a2, v8, v6, v7, 255, v9);
}

//----- (02244BD0) --------------------------------------------------------
int __fastcall Function_2244bd0(int result, uint *a2, int a3)
{
  *(uchar *)(result + 8) = 0;
  *a2 = a3;
  return result;
}

//----- (02244BD8) --------------------------------------------------------
uint __fastcall Function_2244bd8(uchar *a1)
{
  uchar *v1;
  int v2;
  uint result;
  int v4;
  char v5;
  int v6;
  int v7;
  char v8;
  uint v9;

  v1 = a1;
  v2 = 0;
  result = Function_2249c98((uchar)a1[20], (uchar)a1[13]);
  if ( dword_21BF6C4 & 0x20 )
  {
    v4 = (uchar)v1[13];
    if ( v4 == (uchar)v1[21] )
      return result;
    if ( result )
      v5 = v4 - 1;
    else
      v5 = v4 + v1[20] - 1;
    v1[13] = v5;
    v2 = 1;
  }
  if ( dword_21BF6C4 & 0x10 )
  {
    v6 = (uchar)v1[13];
    if ( v6 == (uchar)v1[21] )
      return result;
    v7 = (uchar)v1[20] - 1;
    if ( result == v7 )
      v8 = v6 - v7;
    else
      v8 = v6 + 1;
    v1[13] = v8;
    v2 = 1;
  }
  if ( dword_21BF6C4 & 0x40 )
  {
    result = (uchar)v1[20];
    if ( (uchar)v1[13] < result )
      return result;
    v2 = 1;
    v1[13] = v1[12];
  }
  result = 128;
  if ( dword_21BF6C4 & 0x80 )
  {
    v9 = (uchar)v1[13];
    result = (uchar)v1[21];
    if ( v9 >= result )
      return result;
    v1[12] = v9;
    result = (uchar)v1[21];
    v2 = 1;
    v1[13] = result;
  }
  if ( v2 == 1 )
    result = Function_2244c70(v1);
  return result;
}

//----- (02244C70) --------------------------------------------------------
int __fastcall Function_2244c70(int a1)
{
  int v1;

  v1 = a1;
  Function_2005748(0x5DCu);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v1 + 9)) == 1 )
    Function_224529c(v1, 12, *(uchar *)(v1 + 13));
  return Function_2244ca0(v1, *(uchar *)(v1 + 13), 0);
}

//----- (02244CA0) --------------------------------------------------------
int __fastcall Function_2244ca0(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;

  v3 = a1;
  v4 = a2;
  if ( a3 )
  {
    v5 = *(uint *)(a1 + 952);
    v6 = 2;
    v7 = 17;
  }
  else
  {
    v5 = *(uint *)(a1 + 948);
    v6 = 1;
    v7 = 0;
  }
  if ( v4 < *(uchar *)(a1 + 21) )
  {
    Function_2249bec(v5, v6);
    Function_2244d08(v3, &v10, &v9, v4);
    result = Function_2249bb8(v5, (ushort)v10, (ushort)v9);
  }
  else
  {
    Function_2249bec(v5, v7);
    result = Function_2249bb8(v5, 224, 160);
  }
  return result;
}

//----- (02244D08) --------------------------------------------------------
int __fastcall Function_2244d08(int a1, uint *a2, uint *a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int result;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) == 1 )
  {
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        *v4 = 104;
      }
      else if ( v6 == 2 )
      {
        *v4 = 168;
      }
      else
      {
        *v4 = 232;
      }
    }
    else
    {
      *v4 = 40;
    }
  }
  else if ( v6 )
  {
    if ( v6 == 1 )
      *v4 = 136;
    else
      *v4 = 200;
  }
  else
  {
    *v4 = 72;
  }
  result = 88;
  *v5 = 88;
  return result;
}

//----- (02244D5C) --------------------------------------------------------
int __fastcall Function_2244d5c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a2;
  v4 = a3;
  Function_2249cac(*(uint *)(a1 + 460), *(uchar *)(a1 + 9), 1);
  if ( v4 == 6 )
    result = *((ushort *)dword_224A06C + v3);
  else
    result = *((ushort *)dword_2249FB8 + v3 + 1);
  return result;
}

//----- (02244D90) --------------------------------------------------------
int __fastcall Function_2244d90(int a1)
{
  short *v1;
  uint v2;
  short *v4;
  uint v5;

  v1 = &word_2249F84;
  v2 = 0;
  do
  {
    if ( a1 == (ushort)*v1 )
      return *((ushort *)dword_2249FB8 + v2 + 1);
    ++v2;
    ++v1;
  }
  while ( v2 < 0x1B );
  v4 = &word_224A02C;
  v5 = 0;
  do
  {
    if ( a1 == (ushort)*v4 )
      return *((ushort *)dword_224A06C + v5);
    ++v5;
    ++v4;
  }
  while ( v5 < 0x20 );
  ErrorHandler();
  return 0;
}

//----- (02244DE0) --------------------------------------------------------
int __fastcall Function_2244de0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a2;
  v4 = a3;
  Function_2249cac(*(uint *)(a1 + 460), *(uchar *)(a1 + 9), 1);
  if ( v4 == 6 )
    result = (ushort)word_224A02C[v3];
  else
    result = (ushort)word_2249F84[v3];
  return result;
}

//----- (02244E14) --------------------------------------------------------
int __fastcall Function_2244e14(int a1, ushort *a2, ushort *a3, ushort *a4, ushort *a5)
{
  ushort *v5;
  ushort *v6;
  ushort *v7;
  int result;

  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) )
  {
    *v5 = 0;
    *v6 = 0;
    result = 120;
    *v7 = 120;
  }
  else
  {
    *v5 = 28;
    result = 0;
    *v6 = 0;
    *v7 = 0;
  }
  *a5 = 0;
  return result;
}

//----- (02244E44) --------------------------------------------------------
int __fastcall Function_2244e44(int a1, int a2, uint a3)
{
  int v3;
  uint v4;
  int v5;
  ushort v6;
  ushort v7;
  ushort v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int result;
  int v14;
  int v15;
  int v16;
  int *v17;
  uchar v18;

  v3 = a1;
  v4 = a3;
  v5 = Function_2249c98(*(uchar *)(a1 + 20), a2);
  v17 = GetAdrOfPkmnInParty(*(uint **)(v3 + 984), v5);
  v6 = GetPkmnData(v17, 0xA3u, 0);
  v7 = GetPkmnData(v17, 0xA4u, 0);
  v8 = v7;
  v9 = Function_208c104(v6, v7, 48);
  v18 = Function_22450e8(v3, v9);
  v10 = Function_208c104(v6, v8, 48);
  v11 = Function_2245114(v3, v10);
  v12 = v11;
  if ( v4 <= 0xA )
    JUMPOUT(__CS__, (char *)&off_2244EBE + *((short *)&off_2244EBE + v4) + 2);
  switch ( (uchar)v11 )
  {
    case 1:
    case 2:
    case 3:
      if ( !(*(uchar *)(v3 + 14) & 4) )
      {
        *(uchar *)(v3 + 14) |= 4u;
        ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v3 + 9));
        *(uint *)(v3 + 944) = Function_2249b1c(v3 + 472);
      }
      v14 = *(uint *)(v3 + 944);
      if ( v14 )
      {
        if ( !Function_2249c40(v14) )
        {
          Function_2249b8c(*(uint *)(v3 + 944));
          *(uint *)(v3 + 944) = 0;
        }
      }
      if ( *(uint *)(v3 + 944) )
        goto LABEL_18;
      v15 = GetPkmnData(v17, 0xA3u, 0);
      Function_2243f4c(v3, v3 + 128, v5, v15);
      v16 = 4 * v5;
      Function_2249bec(*(uint *)(v3 + v16 + 956), v12);
      Function_2249c1c(*(uint *)(v3 + v16 + 912), v18);
      *(uchar *)(v3 + 14) &= 0xFBu;
      result = 1;
      break;
    case 4:
    case 8:
      *(uchar *)(v3 + 14) &= 0xFBu;
      result = 1;
      break;
    case 6:
    case 7:
      if ( !(*(uchar *)(v3 + 14) & 4) )
      {
        *(uchar *)(v3 + 14) |= 4u;
        ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v3 + 9));
        *(uint *)(v3 + 944) = Function_2249b1c(v3 + 472);
      }
      if ( Function_2249c40(*(uint *)(v3 + 944)) )
        goto LABEL_18;
      Function_2249b8c(*(uint *)(v3 + 944));
      *(uint *)(v3 + 944) = 0;
      *(uchar *)(v3 + 14) &= 0xFBu;
      result = 1;
      break;
    case 9:
      *(uchar *)(v3 + 14) &= 0xFBu;
      result = 1;
      break;
    case 0xA:
      *(uchar *)(v3 + 14) &= 0xFBu;
      result = 1;
      break;
    default:
LABEL_18:
      result = 0;
      break;
  }
  return result;
}

//----- (0224503C) --------------------------------------------------------
int __fastcall Function_224503c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  short v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;

  v3 = a1;
  v4 = a3;
  v5 = Function_2249c98(*(uchar *)(a1 + 20), a2);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v3 + 9)) )
    v6 = 32;
  else
    v6 = 64;
  if ( v4 == 1 )
  {
    v7 = 40;
    v8 = 80;
    v12 = 0;
  }
  else
  {
    v7 = (short)(v6 + ((ushort)v5 << 6));
    v8 = 58;
    v12 = 2;
  }
  v9 = 4 * v5;
  Function_2249c58(*(uint *)(v3 + 928 + v9), (short)(v7 + 8), (short)(v8 + 4));
  Function_2249bb8(*(uint *)(v3 + 928 + v9), ((ushort)v7 + 8) & 0xFFFF, ((ushort)v8 + 4) & 0xFFFF);
  Function_2249c4c(*(uint *)(v3 + 928 + v9), v12);
  v10 = v3 + 912;
  Function_2249c58(*(uint *)(v10 + v9), v7, v8);
  Function_2249bb8(*(uint *)(v10 + v9), (ushort)v7, (ushort)v8);
  return Function_2249c4c(*(uint *)(v10 + v9), v12);
}

//----- (022450E8) --------------------------------------------------------
int __fastcall Function_22450e8(int a1, char a2)
{
  int result;

  switch ( a2 )
  {
    case 1:
      result = 4;
      break;
    case 2:
      result = 3;
      break;
    case 3:
      result = 2;
      break;
    case 4:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}

//----- (02245114) --------------------------------------------------------
int __fastcall Function_2245114(int a1, char a2)
{
  int result;

  switch ( a2 )
  {
    case 1:
      result = 13;
      break;
    case 2:
      result = 14;
      break;
    case 3:
      result = 15;
      break;
    case 4:
      result = 15;
      break;
    default:
      return result;
  }
  return result;
}

//----- (02245140) --------------------------------------------------------
int __fastcall Function_2245140(int a1, int a2)
{
  int v2;
  int v3;
  bool v4;
  int v5;
  int v6;
  int v7;
  int *v8;

  v2 = a1;
  v3 = (*(char *)(a1 + 13) + a2) << 24;
  v5 = v3 >> 24;
  v4 = v3 >> 24 < 0;
  v6 = *(uchar *)(v2 + 20);
  if ( v4 )
  {
    LOBYTE(v5) = v6 - 1;
  }
  else if ( v5 >= v6 )
  {
    LOBYTE(v5) = 0;
  }
  *(uchar *)(v2 + 13) = v5;
  Function_2244c70(v2);
  v7 = Function_2249c98(*(uchar *)(v2 + 20), *(uchar *)(v2 + 13));
  v8 = GetAdrOfPkmnInParty(*(uint **)(v2 + 984), v7);
  return Function_2243950(v2, v2 + 144, v8);
}

//----- (0224518C) --------------------------------------------------------
int __fastcall Function_224518c(int a1, int a2)
{
  int v2;
  int v3;
  bool v4;
  int v5;
  int v6;
  int v7;
  int *v8;

  v2 = a1;
  v3 = (*(char *)(a1 + 13) + a2) << 24;
  v5 = v3 >> 24;
  v4 = v3 >> 24 < 0;
  v6 = *(uchar *)(v2 + 20);
  if ( v4 )
  {
    LOBYTE(v5) = v6 - 1;
  }
  else if ( v5 >= v6 )
  {
    LOBYTE(v5) = 0;
  }
  *(uchar *)(v2 + 13) = v5;
  Function_2244c70(v2);
  v7 = Function_2249c98(*(uchar *)(v2 + 20), *(uchar *)(v2 + 13));
  v8 = GetAdrOfPkmnInParty(*(uint **)(v2 + 984), v7);
  return Function_2243b84(v2, v2 + 144, (int)v8);
}

//----- (022451D8) --------------------------------------------------------
int __fastcall Function_22451d8(int a1)
{
  int v1;

  v1 = a1;
  Function_2245618(a1);
  Function_2245730(v1);
  Function_2244120(v1);
  Function_2245288(v1 + 176);
  Function_2245be0(v1);
  Function_201ff0c(4u, 0);
  return Function_2249bac(*(uint *)(v1 + 972), 0);
}

//----- (02245210) --------------------------------------------------------
int __fastcall Function_2245210(int *a1)
{
  int v1;
  int *v2;
  uint v3;
  uint v4;
  uint v5;
  uint v6;

  v1 = 0;
  v2 = a1;
  v3 = GetPkmnData(a1, 0x3Au, 0);
  if ( v3 != GetPkmnData(v2, 0x42u, 0) )
    v1 = 1;
  v4 = GetPkmnData(v2, 0x3Bu, 0);
  if ( v4 != GetPkmnData(v2, 0x43u, 0) )
    v1 = 1;
  v5 = GetPkmnData(v2, 0x3Cu, 0);
  if ( v5 != GetPkmnData(v2, 0x44u, 0) )
    v1 = 1;
  v6 = GetPkmnData(v2, 0x3Du, 0);
  if ( v6 != GetPkmnData(v2, 0x45u, 0) )
    v1 = 1;
  return v1;
}

//----- (02245288) --------------------------------------------------------
int __fastcall Function_2245288(int a1)
{
  int v1;

  v1 = a1;
  Function_200e084(a1, 1);
  return Function_201ad10(v1);
}

//----- (0224529C) --------------------------------------------------------
BOOL __fastcall Function_224529c(int a1, char a2)
{
  int v2;
  int v3;

  v3 = a1;
  switch ( a2 )
  {
    case 10:
      v2 = 49;
      Function_22452f4();
      break;
    case 11:
      v2 = 50;
      Function_2245368();
      break;
    case 12:
      v2 = 51;
      Function_22453f8();
      break;
    case 13:
      v2 = 52;
      Function_224542c();
      break;
    default:
      return Function_20359dc(v2, v3 + 992, 40) == 1;
  }
  return Function_20359dc(v2, v3 + 992, 40) == 1;
}

//----- (022452F4) --------------------------------------------------------
int __fastcall Function_22452f4(int a1, short a2)
{
  int v2;
  short v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = LoadTrainerDataAdress(*(uint *)(a1 + 460));
  *(ushort *)(v2 + 992) = v3;
  v5 = 0;
  *(ushort *)(v2 + 994) = GetGender(v4);
  v6 = v2 + 4;
  do
  {
    result = Function_2249cac(*(uint *)(v2 + 460), *(uchar *)(v2 + 9), (uchar)v5);
    *(ushort *)(v6 + 992) = result;
    ++v5;
    v6 += 2;
  }
  while ( v5 < 3 );
  return result;
}

//----- (02245338) --------------------------------------------------------
int __fastcall Function_107_2245338(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  short *v9;
  short v10;
  int v11;

  v4 = a4;
  v5 = a1;
  v6 = a3;
  ++*(uchar *)(a4 + 15);
  result = Function_203608c();
  if ( v5 != result )
  {
    result = 1075;
    v8 = 0;
    v9 = (short *)(v6 + 4);
    do
    {
      v10 = *v9;
      v11 = v4 + v8++;
      ++v9;
      *(uchar *)(v11 + 1075) = v10;
    }
    while ( v8 < 3 );
  }
  return result;
}

//----- (02245368) --------------------------------------------------------
int __fastcall Function_2245368(int a1, short a2, short a3)
{
  int v3;
  char v4;
  int result;

  v3 = a1;
  *(ushort *)(a1 + 992) = a2;
  v4 = a3;
  *(ushort *)(a1 + 994) = a3;
  if ( !Function_203608c() && *(uchar *)(v3 + 18) == 255 )
    *(uchar *)(v3 + 18) = v4;
  *(ushort *)(v3 + 996) = *(uchar *)(v3 + 18);
  result = 1002;
  *(ushort *)(v3 + 1000) = *(ushort *)(v3 + 16);
  *(ushort *)(v3 + 1002) = *(uchar *)(v3 + 19);
  return result;
}

//----- (022453A0) --------------------------------------------------------
int __fastcall Function_107_22453a0(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  int v5;
  ushort *v6;
  int result;

  v4 = a4;
  v5 = a1;
  v6 = a3;
  ++*(uchar *)(a4 + 15);
  result = Function_203608c();
  if ( v5 != result )
  {
    *(uchar *)(v4 + 1073) = v6[1];
    if ( Function_203608c() )
    {
      *(uchar *)(v4 + 18) = v6[2];
      *(ushort *)(v4 + 16) = v6[4];
      result = (ushort)v6[5];
      *(uchar *)(v4 + 19) = result;
    }
    else
    {
      result = 1073;
      if ( *(uchar *)(v4 + 18) == 255 )
      {
        *(uchar *)(v4 + 18) = *(uchar *)(v4 + 1073) + *(uchar *)(v4 + 21);
        *(ushort *)(v4 + 16) = v6[4];
        result = (ushort)v6[5];
        *(uchar *)(v4 + 19) = result;
      }
      else
      {
        *(uchar *)(v4 + 1073) = 0;
      }
    }
  }
  return result;
}

//----- (022453F8) --------------------------------------------------------
int __fastcall Function_22453f8(int result, short a2)
{
  *(ushort *)(result + 992) = a2;
  *(ushort *)(result + 994) = *(uchar *)(result + 13);
  return result;
}

//----- (02245408) --------------------------------------------------------
int __fastcall Function_107_2245408(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  result = Function_203608c();
  if ( v4 != result )
  {
    *(uchar *)(v6 + 1072) = *(ushort *)(v5 + 2);
    result = Function_2244ca0(v6, *(uchar *)(v6 + 1072), 1);
  }
  return result;
}

//----- (0224542C) --------------------------------------------------------
int __fastcall Function_224542c(int result)
{
  *(ushort *)(result + 992) = 1;
  return result;
}

//----- (02245438) --------------------------------------------------------
int __fastcall Function_107_2245438(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  result = Function_203608c();
  if ( v4 != result )
  {
    result = 1074;
    *(uchar *)(v6 + 1074) = *v5;
  }
  return result;
}

//----- (02245454) --------------------------------------------------------
int __fastcall Function_2245454(int *a1, uint a2)
{
  return Function_2096954(a1, a2, 0, 0, 0x64u);
}

//----- (02245464) --------------------------------------------------------
int __fastcall Function_2245464(int a1, int a2)
{
  int v2;
  int v3;
  ushort v5[2];
  ushort v6[2];
  char v7;
  ushort v8;

  v2 = a2;
  v3 = a1;
  Function_2244e14(a1, &v8, &v7, v6, v5);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v3 + 9)) )
  {
    if ( Function_203608c() )
    {
      Function_2244b24(v3, v2, v8, *(ushort *)&v7);
      Function_2244ab4(v3, v2, v6[0], v5[0], 0);
    }
    else
    {
      Function_2244ab4(v3, v2, v8, *(ushort *)&v7, 0);
      Function_2244b24(v3, v2, v6[0], v5[0]);
    }
  }
  else
  {
    Function_2244ab4(v3, v2, v8, *(ushort *)&v7, 0);
  }
  return Function_201a9a4(v2);
}

//----- (022454F8) --------------------------------------------------------
int __fastcall Function_22454f8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  uint v8;

  v3 = a1;
  v4 = a3;
  v5 = Function_2249c98(*(uchar *)(a1 + 20), a2);
  v6 = GetAdrOfPkmnInParty(*(uint **)(v3 + 984), v5);
  Function_2249cac(*(uint *)(v3 + 460), *(uchar *)(v3 + 9), 0);
  Function_2076b10_Dummy();
  Function_2244a8c(v3, 0, v7);
  v8 = Function_2027b50(*(ushort **)(v3 + 456));
  Function_2249dbc(v3 + 176, v8);
  *(uchar *)(v3 + 10) = Function_2243918(v3, (ushort)asc_2249E00[v4 - 1]);
  switch ( v4 )
  {
    case 1:
      Function_2245454(v6, 0x18u);
      break;
    case 2:
      Function_2245454(v6, 0x29u);
      break;
    case 3:
      Function_2245454(v6, 0x18u);
      Function_2245454(v6, 0x29u);
      break;
    default:
      ErrorHandler();
      break;
  }
  return Function_2005748(0x5ECu);
}

//----- (022455A0) --------------------------------------------------------
int Function_22455a0()
{
  return Function_22455a2();
}

//----- (022455A2) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02245618) --------------------------------------------------------
uint __fastcall Function_2245618(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 14);
  result = (uint)(v2 << 27) >> 31;
  if ( result == 1 )
  {
    *(uchar *)(v1 + 14) = v2 & 0xEF;
    Function_2001bc4(*(uint *)(v1 + 380), 0);
    Function_200dc9c(*(uint *)(v1 + 372), 1);
    result = Function_201ad10(*(uint *)(v1 + 372));
  }
  return result;
}

//----- (02245650) --------------------------------------------------------
int __fastcall Function_2245650(int result)
{
  *(uchar *)(result + 14) = *(uchar *)(result + 14) & 0xFE | 1;
  return result;
}

//----- (02245660) --------------------------------------------------------
int __fastcall Function_2245660(int a1)
{
  int v1;

  v1 = a1;
  Function_2249bac(*(uint *)(a1 + 908), 0);
  Function_2249bac(*(uint *)(v1 + 900), 0);
  Function_2249bac(*(uint *)(v1 + 904), 0);
  Function_2249bac(*(uint *)(v1 + 976), 0);
  Function_200dc9c(v1 + 320, 1);
  Function_201ad10(v1 + 320);
  Function_224503c(v1, *(uchar *)(v1 + 13), 0);
  Function_201ada4_ClearTextBox(v1 + 352, 0);
  Function_201ad10(v1 + 352);
  Function_201ada4_ClearTextBox(v1 + 336, 0);
  return Function_201ad10(v1 + 336);
}

//----- (022456E4) --------------------------------------------------------
int __fastcall Function_22456e4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  ushort v7;
  int v8;

  v8 = a4;
  v4 = a1;
  Function_2245288(a1 + 176);
  Function_2249bac(*(uint *)(v4 + 908), 1);
  Function_20013ac(*(uint *)(v4 + 408));
  Function_20014d0(*(uint *)(v4 + 408), &v7);
  v5 = Function_2244de0(v4, v7, *(uchar *)(v4 + 19));
  return Function_2243ef8(v4, v4 + 272, v5);
}

//----- (02245730) --------------------------------------------------------
uint __fastcall Function_2245730(int a1)
{
  int v1;
  char v2;
  uint result;
  int v4;

  v1 = a1;
  v2 = *(uchar *)(a1 + 14);
  result = v2 & 1;
  if ( result == 1 )
  {
    *(uchar *)(v1 + 14) = v2 & 0xFE;
    v4 = Function_2001504(*(uint *)(v1 + 408), 0x12u);
    Function_200dc9c(v4, 1);
    Function_201ada4_ClearTextBox(v4, 0);
    Function_201ad10(v4);
    Function_2013a3c(*(int **)(v1 + 412));
    result = Function_2001384(*(uint *)(v1 + 408), 0, 0);
  }
  return result;
}

//----- (02245780) --------------------------------------------------------
int __fastcall Function_2245780(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint v17;
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
  uint v28;
  int v29;
  int v30;
  ushort v32[2];
  ushort v33[2];
  ushort v34[2];
  ushort v35[2];
  int v36;

  v36 = a4;
  v4 = a2;
  v5 = a1;
  Function_2244e14(a1, v35, v34, v33, v32);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v5 + 9)) )
  {
    if ( Function_203608c() )
    {
      v22 = v34[0];
      v23 = (v35[0] + 104) & 0xFFFF;
      Function_201ae78(v4, 0, (v23 - 48) & 0xFFFF, v34[0], 0x30u, 0x10u);
      Function_2244a74(v5, 0, *(ushort *)(v5 + 1078), 4, 1);
      *(uchar *)(v5 + 10) = Function_2243890(v5, v4, 3u, v23, v22, 255, 1, 2, 0, 0, 2);
      v24 = v32[0];
      v25 = (v33[0] + 104) & 0xFFFF;
      Function_201ae78(v4, 0, (v25 - 48) & 0xFFFF, v32[0], 0x30u, 0x10u);
      Function_205e630(*(uchar *)(v5 + 9));
      v27 = v26;
      Function_205e630(*(uchar *)(v5 + 9));
      v29 = Function_205e6a8(v28);
      v30 = Function_2030698(*(uint *)(v5 + 4), v27, v29);
      Function_2244a74(v5, 0, v30, 4, 1);
      *(uchar *)(v5 + 10) = Function_2243890(v5, v4, 2u, v25, v24, 255, 1, 2, 0, 0, 2);
    }
    else
    {
      v13 = v34[0];
      v14 = (v35[0] + 104) & 0xFFFF;
      Function_201ae78(v4, 0, (v14 - 48) & 0xFFFF, v34[0], 0x30u, 0x10u);
      Function_205e630(*(uchar *)(v5 + 9));
      v16 = v15;
      Function_205e630(*(uchar *)(v5 + 9));
      v18 = Function_205e6a8(v17);
      v19 = Function_2030698(*(uint *)(v5 + 4), v16, v18);
      Function_2244a74(v5, 0, v19, 4, 1);
      *(uchar *)(v5 + 10) = Function_2243890(v5, v4, 2u, v14, v13, 255, 1, 2, 0, 0, 2);
      v20 = v32[0];
      v21 = (v33[0] + 104) & 0xFFFF;
      Function_201ae78(v4, 0, (v21 - 48) & 0xFFFF, v32[0], 0x30u, 0x10u);
      Function_2244a74(v5, 0, *(ushort *)(v5 + 1078), 4, 1);
      *(uchar *)(v5 + 10) = Function_2243890(v5, v4, 3u, v21, v20, 255, 1, 2, 0, 0, 2);
    }
  }
  else
  {
    v6 = v34[0];
    v7 = (v35[0] + 104) & 0xFFFF;
    Function_201ae78(v4, 0, (v7 - 48) & 0xFFFF, v34[0], 0x30u, 0x10u);
    Function_205e630(*(uchar *)(v5 + 9));
    v9 = v8;
    Function_205e630(*(uchar *)(v5 + 9));
    v11 = Function_205e6a8(v10);
    v12 = Function_2030698(*(uint *)(v5 + 4), v9, v11);
    Function_2244a74(v5, 0, v12, 4, 1);
    *(uchar *)(v5 + 10) = Function_2243890(v5, v4, 2u, v7, v6, 255, 1, 2, 0, 0, 2);
  }
  return Function_201a9a4(v4);
}

//----- (022459D0) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02245B40) --------------------------------------------------------
uint __fastcall Function_2245b40(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;

  v2 = a2;
  v3 = a1;
  Function_2243630(a1, 2u);
  Function_201ad10(v3 + 176);
  Function_201ad10(v3 + 160);
  Function_201ad10(v3 + 320);
  v4 = Function_2249c98(*(uchar *)(v3 + 20), v2);
  v5 = GetAdrOfPkmnInParty(*(uint **)(v3 + 984), v4);
  Function_2243950(v3, v3 + 144, v5);
  return Function_201ff0c(4u, 1);
}

//----- (02245B90) --------------------------------------------------------
uint __fastcall Function_2245b90(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;

  v2 = a2;
  v3 = a1;
  Function_22436ac(a1, 2u);
  Function_201ad10(v3 + 176);
  Function_201ad10(v3 + 160);
  Function_201ad10(v3 + 320);
  v4 = Function_2249c98(*(uchar *)(v3 + 20), v2);
  v5 = GetAdrOfPkmnInParty(*(uint **)(v3 + 984), v4);
  Function_2243b84(v3, v3 + 144, (int)v5);
  return Function_201ff0c(4u, 1);
}

//----- (02245BE0) --------------------------------------------------------
uint __fastcall Function_2245be0(int a1)
{
  int v1;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 144, 0);
  Function_201acf4(v1 + 144);
  return Function_201ff0c(4u, 0);
}

//----- (02245C00) --------------------------------------------------------
int __fastcall Function_2245c00(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int *v5;
  ushort v6;
  ushort v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  result = ((int (__fastcall *)(uint, int))dword_223B7A8[0])(*(uchar *)(a1 + 9), 1);
  v3 = 0;
  v10 = result;
  if ( result > 0 )
  {
    v4 = v1;
    do
    {
      v5 = GetAdrOfPkmnInParty(*(uint **)(v1 + 984), v3);
      v6 = GetPkmnData(v5, 0xA3u, 0);
      v7 = GetPkmnData(v5, 0xA4u, 0);
      v8 = ((int (__fastcall *)(uint, uint))dword_221F800[14992])(v6, v7);
      v9 = *(uint *)(v4 + 912);
      if ( v9 )
      {
        Function_2249c1c(v9, v8);
        if ( v3 == Function_2249c98(*(uchar *)(v1 + 20), *(uchar *)(v1 + 13))
          && *(uchar *)(v1 + 13) < (uint)*(uchar *)(v1 + 21) )
        {
          Function_2249c28(*(uint *)(v4 + 912), 1);
        }
        else
        {
          Function_2249c28(*(uint *)(v4 + 912), 0);
        }
      }
      result = v10;
      ++v3;
      v4 += 4;
    }
    while ( v3 < v10 );
  }
  return result;
}

//----- (02245C94) --------------------------------------------------------
int __fastcall Function_2245c94(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  uint v5;
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
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char v24;
  int v25;
  int v26;
  uint v27;
  int result;
  int v29;

  v3 = a1;
  v29 = a3;
  v4 = a2;
  ((void (__fastcall *)(uint, uint))dword_223B7A8[0])(*(uchar *)(a1 + 9), 0);
  v5 = *(uchar *)(v3 + 21);
  v6 = v29 != 4;
  Function_2249c9c(v5, v4);
  if ( Function_203608c() )
  {
    if ( v4 >= v5 )
    {
      Function_2244a98(v3, 5u);
      v17 = Function_2249cac(*(uint *)(v3 + 460), *(uchar *)(v3 + 9), v6);
      v7 = 6 * v6;
      ((void (__fastcall *)(uint, uint, uint))dword_223BA14[134])(
        *(uint *)(v3 + 4),
        *(uchar *)(v3 + 9),
        *((ushort *)&dword_2249E34[4] + 3 * v6 + v17 + 1));
      v9 = Function_2249cac(*(uint *)(v3 + 460), *(uchar *)(v3 + 9), v6);
      v18 = LoadVariableAreaAdress_17(*(uint *)(v3 + 460));
      v20 = Function_205e5b4(*(uchar *)(v3 + 9), v6, v19);
      v22 = Function_205e5b4(*(uchar *)(v3 + 9), v6, v21);
      v23 = Function_205e6a8(v22);
      Function_20306e4(v18, v20, v23, (v9 + 1) & 0xFFFF);
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v3 + 9)) == 1 )
      {
        v24 = *(uchar *)(v3 + 14);
        if ( v29 == 4 )
          *(uchar *)(v3 + 14) = v24 & 0x9F | 0x20;
        else
          *(uchar *)(v3 + 14) = v24 & 0x9F | 0x40;
      }
    }
    else
    {
      Function_2249cf4(*(uint *)(v3 + 36), 5);
      v9 = *(uchar *)(v3 + 1075 + v6);
      v7 = 6 * v6;
      *(ushort *)(v3 + 1078) -= *((ushort *)&dword_2249E34[4] + 3 * v6 + v9 + 1);
      ++*(uchar *)(v3 + 1075 + v6);
    }
  }
  else if ( v4 >= v5 )
  {
    Function_2249cf4(*(uint *)(v3 + 36), 5);
    v9 = *(uchar *)(v3 + 1075 + v6);
    v7 = 6 * v6;
    *(ushort *)(v3 + 1078) -= *((ushort *)&dword_2249E34[4] + 3 * v6 + v9 + 1);
    ++*(uchar *)(v3 + 1075 + v6);
  }
  else
  {
    Function_2244a98(v3, 5u);
    v7 = 6 * v6;
    v8 = 2 * Function_2249cac(*(uint *)(v3 + 460), *(uchar *)(v3 + 9), v6);
    ((void (__fastcall *)(uint, uint, uint))dword_223BA14[134])(
      *(uint *)(v3 + 4),
      *(uchar *)(v3 + 9),
      *(ushort *)(v8 + 6 * v6 + 35954246));
    v9 = Function_2249cac(*(uint *)(v3 + 460), *(uchar *)(v3 + 9), v6);
    v10 = LoadVariableAreaAdress_17(*(uint *)(v3 + 460));
    v12 = Function_205e5b4(*(uchar *)(v3 + 9), v6, v11);
    v14 = Function_205e5b4(*(uchar *)(v3 + 9), v6, v13);
    v15 = Function_205e6a8(v14);
    Function_20306e4(v10, v12, v15, (v9 + 1) & 0xFFFF);
    if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v3 + 9)) == 1 )
    {
      v16 = *(uchar *)(v3 + 14);
      if ( v29 == 4 )
        *(uchar *)(v3 + 14) = v16 & 0x9F | 0x20;
      else
        *(uchar *)(v3 + 14) = v16 & 0x9F | 0x40;
    }
  }
  Function_2245618(v3);
  Function_2245780(v3, v3 + 80, v25, v26);
  v27 = Function_2027b50(*(ushort **)(v3 + 456));
  Function_2249dbc(v3 + 176, v27);
  result = Function_2243918(v3, *(ushort *)((char *)dword_2249E34 + 2 * v9 + v7));
  *(uchar *)(v3 + 10) = result;
  return result;
}

//----- (02245EB0) --------------------------------------------------------
int __fastcall Function_2245eb0(int a1, uint *a2, int a3, int a4)
{
  int v4;
  uint *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char v11;
  char v12;

  v4 = a1;
  v5 = a2;
  v6 = LoadOverlay(104, 2, a3, a4);
  Function_2246eac(v6);
  Function_2017fc8(3, 100, 0x20000);
  v7 = MallocSomeDataAndStorePtrInOverlayData1c(v4, 988, 0x64u);
  Call_FillMemWithValue((int *)v7, 0, 0x3DCu);
  *(uint *)(v7 + 76) = Function_2018340(0x64u);
  *(uint *)v7 = v4;
  v8 = LoadPtrToOverWorldDataIn18(v4);
  *(uint *)(v7 + 332) = *(uint *)v8;
  *(uint *)(v7 + 336) = Function_20302dc(*(uint *)(v7 + 332));
  *(uint *)(v7 + 340) = Function_203041c(*(uint *)(v7 + 332));
  *(uchar *)(v7 + 9) = *(uchar *)(v8 + 4);
  *(uint *)(v7 + 868) = v8 + 32;
  *(uint *)(v7 + 328) = LoadPlayerDataAdress(*(uint *)(v7 + 332));
  *(uint *)(v7 + 888) = *(uint *)(v8 + 28);
  *(uint *)(v7 + 872) = v8 + 8;
  *(uint *)(v7 + 876) = v8 + 12;
  *(uint *)(v7 + 880) = v8 + 16;
  *(uint *)(v7 + 884) = v8 + 20;
  *(uchar *)(v7 + 17) = -1;
  *(ushort *)(v7 + 982) = *(ushort *)(v8 + 40);
  *(uint *)(v7 + 4) = LoadVariableAreaAdress_17(*(uint *)(v7 + 332));
  v9 = 0;
  do
  {
    v10 = v7 + v9++;
    *(uchar *)(v10 + 979) = 1;
  }
  while ( v9 < 3 );
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v7 + 9)) )
    v11 = 4;
  else
    v11 = 3;
  *(uchar *)(v7 + 20) = v11;
  v12 = *(uchar *)(v7 + 20);
  *(uchar *)(v7 + 21) = v12;
  *(uchar *)(v7 + 12) = v12 - 1;
  *(uchar *)(v7 + 976) = 0;
  Function_2246ee4(v7);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v7 + 9)) == 1 )
    Function_209ba80(v7);
  *v5 = 0;
  return 1;
}

//----- (02245FD0) --------------------------------------------------------
int __fastcall Function_2245fd0(int a1, uint *a2)
{
  uint *v2;
  int v3;
  int v4;
  int v5;
  uint v6;
  int result;

  v2 = a2;
  v3 = LoadOverlayData1c(a1);
  v4 = v3;
  if ( *(uchar *)(v3 + 978) == 1 )
  {
    if ( *v2 == 1 )
    {
      *(uchar *)(v3 + 978) = 0;
      Function_224883c(v3);
      Function_2249238(v4);
      v5 = *(uint *)(v4 + 804);
      if ( v5 )
      {
        Function_2249b8c(v5);
        *(uchar *)(v4 + 15) &= 0xFEu;
      }
      v6 = Function_2027b50(*(ushort **)(v4 + 328));
      Function_2249dbc(v4 + 192, v6);
      ((void (__fastcall *)(uint, uint))dword_221F800[15220])(*(uint *)(v4 + 36), 0);
      *(uchar *)(v4 + 10) = Function_22477cc(v4, 7, 1);
      Function_2248350(v4, v2, 3);
    }
  }
  else if ( *(uchar *)(v3 + 17) != 255 && (*v2 == 1 || *v2 == 3) )
  {
    *(uchar *)(v3 + 978) = 0;
    Function_224883c(v3);
    Function_2249238(v4);
    Function_2248350(v4, v2, 2);
  }
  switch ( (uchar)*v2 )
  {
    case 0u:
      if ( Function_2246170(v4) == 1 )
        Function_2248350(v4, v2, 1);
      goto LABEL_25;
    case 1u:
      if ( Function_22462cc(v4) == 1 )
      {
        if ( *(uchar *)(v4 + 16) == 1 )
        {
          Function_2248350(v4, v2, 2);
        }
        else if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v4 + 9)) == 1 )
        {
          Function_2248350(v4, v2, 3);
        }
        else
        {
          Function_2248350(v4, v2, 4);
        }
      }
      goto LABEL_25;
    case 2u:
      if ( Function_2246bdc(v4) == 1 )
        Function_2248350(v4, v2, 1);
      goto LABEL_25;
    case 3u:
      if ( Function_2246cd0(v4) == 1 )
        Function_2248350(v4, v2, 4);
      goto LABEL_25;
    case 4u:
      if ( Function_2246d3c(v4) != 1 )
        goto LABEL_25;
      result = 1;
      break;
    default:
LABEL_25:
      Function_22492a8(v4);
      Function_20219f8(*(uint *)(v4 + 344));
      result = 0;
      break;
  }
  return result;
}

//----- (02246130) --------------------------------------------------------
int __fastcall Function_2246130(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = a1;
  v2 = LoadOverlayData1c(a1);
  v3 = v2;
  **(ushort **)(v2 + 868) = *(uchar *)(v2 + 13);
  Function_201dc3c();
  Function_2246d84(v3);
  FreeSomeDataAndStore0InOverlayData1c(v1);
  SetMainLoopFunctionCall(0, 0);
  Function_201807c(100);
  UnloadOverlay(104, v4, v5, v6);
  return 1;
}

//----- (02246170) --------------------------------------------------------
int __fastcall Function_2246170(int a1)
{
  int v1;
  int result;

  v1 = a1;
  switch ( *(uchar *)(a1 + 8) )
  {
    case 0:
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        Function_20365f4();
        Function_20364f0(216);
      }
      ++*(uchar *)(v1 + 8);
      goto LABEL_19;
    case 1:
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        if ( Function_2036540(216) == 1 )
        {
          Function_20365f4();
          ++*(uchar *)(v1 + 8);
        }
      }
      else
      {
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_19;
    case 2:
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        if ( Function_2248874(v1, 20, 0) == 1 )
          ++*(uchar *)(v1 + 8);
      }
      else
      {
        Function_2246274(v1);
        Function_200f174(0, 1, 1, 0, 6, 3, 100);
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_19;
    case 3:
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) == 1 )
      {
        if ( *(uchar *)(v1 + 23) >= 2u )
        {
          *(uchar *)(v1 + 23) = 0;
          Function_2246274(v1);
          Function_200f174(0, 1, 1, 0, 6, 3, 100);
          ++*(uchar *)(v1 + 8);
        }
      }
      else
      {
        ++*(uchar *)(v1 + 8);
      }
      goto LABEL_19;
    case 4:
      if ( Function_200f2ac() != 1 )
        goto LABEL_19;
      result = 1;
      break;
    default:
LABEL_19:
      result = 0;
      break;
  }
  return result;
}

//----- (02246274) --------------------------------------------------------
int __fastcall Function_2246274(int a1)
{
  int v1;

  v1 = a1;
  Function_22484dc(a1);
  Function_201ada4_ClearTextBox(v1 + 80, 0);
  Function_2248e84(v1, v1 + 80);
  Function_2248c08(v1, v1 + 80);
  Function_2247b78(v1, v1 + 128);
  Function_2247c64(v1, v1 + 112);
  Function_2248240(v1);
  return Function_201ffd0();
}

//----- (022462CC) --------------------------------------------------------
int __fastcall Function_22462cc(int a1)
{
  uint v1;
  int v2;
  int v3;
  uint v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint v11;
  int v12;
  int v13;
  uint v14;
  int v15;
  uint v16;
  int v17;
  int v18;
  uint v19;
  int v20;
  int v21;
  int v22;
  uint v23;
  int v24;
  uint v25;
  int v26;
  int v27;
  uint v28;
  int v29;
  uint v30;
  int v31;
  uint v32;
  int v33;
  int v34;
  uint v35;
  int v36;
  uint v37;
  uint v38;
  uint v39;
  int v40;
  int v41;
  uint v42;
  int v43;
  uint v44;
  uint v45;
  int v46;
  int v47;
  int v48;
  int v49;

  v2 = a1;
  v3 = *(uchar *)(a1 + 8);
  switch ( (uchar)v3 )
  {
    case 0:
      *(uchar *)(a1 + 11) = 0;
      *(uchar *)(a1 + 8) = 1;
      v4 = (uint)*(uchar *)(a1 + 15) << 24 >> 27;
      switch ( v4 )
      {
        case 1u:
          Function_2248860(v2 + 192);
          Function_2248240(v2);
          break;
        case 2u:
          Function_2248860(v2 + 192);
          Function_22482fc(v2);
          Function_2249c60(*(uint *)(v2 + 864), 211, 105);
          *(uchar *)(v2 + 8) = 6;
          break;
        case 3u:
          *(uchar *)(v2 + 8) = 13;
          break;
      }
      *(uchar *)(v2 + 15) &= 7u;
      return 0;
    case 1:
      Function_2248358();
      if ( dword_21BF6C4 & 1 )
      {
        Function_2005748(0x5DCu);
        if ( *(uchar *)(v2 + 13) >= (uint)*(uchar *)(v2 + 21) )
          return 1;
        Function_22482a4(v2);
        Function_22482b0(v2);
        *(uchar *)(v2 + 8) = 2;
        return 0;
      }
      LOBYTE(v6) = 2;
      if ( dword_21BF6C4 & 2 )
      {
        v6 = *(uchar *)(v2 + 21);
        if ( *(uchar *)(v2 + 13) != v6 )
        {
          Function_2005748(0x5DCu);
          *(uchar *)(v2 + 13) = *(uchar *)(v2 + 21);
          Function_22483f0(v2);
          return 0;
        }
      }
      goto LABEL_20;
    case 2:
      v1 = Function_2001288(*(uint *)(a1 + 312));
      Function_2249ce0();
      Function_20014d0(*(uint *)(v2 + 312), (ushort *)(v2 + 24));
      LOBYTE(v6) = -2;
      if ( v1 > 0xFFFFFFFE )
        return 0;
      if ( v1 >= 0xFFFFFFFE )
      {
        Function_22482d4(v2);
        Function_2248240(v2);
        *(uchar *)(v2 + 8) = 0;
      }
      else
      {
        if ( v1 <= 6 )
          JUMPOUT(__CS__, (char *)&off_22463FC + *((short *)&off_22463FC + v1) + 2);
LABEL_20:
        switch ( (uchar)v6 )
        {
          case 0:
            *(uchar *)(v2 + 19) = v1;
            if ( *(uchar *)(*(uint *)(v2 + 872)
                          + Function_2249c98(*(uchar *)(v2 + 20), *(uchar *)(v2 + 13))) )
            {
              Function_22482d4(v2);
              v7 = Function_2249c98(*(uchar *)(v2 + 20), *(uchar *)(v2 + 13));
              GetAdrOfPkmnInParty(*(uint **)(v2 + 888), v7);
              Function_2248bec(v2);
              Function_2076b10_Dummy();
              Function_2248104(v2, 0, v8);
              *(uchar *)(v2 + 10) = Function_22477cc(v2, 20, 1);
              *(uchar *)(v2 + 8) = 15;
            }
            else
            {
              Function_22482d4(v2);
              Function_2248bec(v2);
              Function_22480ec(v2);
              *(uchar *)(v2 + 10) = Function_22477cc(v2, 16, 1);
              Function_2247d94(v2);
              *(uchar *)(v2 + 8) = 3;
            }
            break;
          case 1:
            *(uchar *)(v2 + 19) = v1;
            Function_22482d4(v2);
            v9 = Function_2249c98(*(uchar *)(v2 + 20), *(uchar *)(v2 + 13));
            GetAdrOfPkmnInParty(*(uint **)(v2 + 888), v9);
            Function_2248bec(v2);
            Function_2076b10_Dummy();
            Function_2248104(v2, 0, v10);
            *(uchar *)(v2 + 10) = Function_22477cc(v2, 21, 1);
            Function_2247df0(v2);
            *(uchar *)(v2 + 8) = 4;
            break;
          case 2:
            Function_22482d4(v2);
            Function_22482fc(v2);
            *(uchar *)(v2 + 8) = 6;
            break;
          case 6:
            Function_22482d4(v2);
            Function_2248240(v2);
            *(uchar *)(v2 + 8) = 0;
            break;
          default:
            return 0;
        }
      }
      return 0;
    case 3:
      v11 = Function_2001be0(*(uint *)(a1 + 284));
      if ( v11 > 0xFFFFFFFE )
        return 0;
      if ( v11 >= 0xFFFFFFFE )
        goto LABEL_42;
      if ( v11 > 1 )
        return 0;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
LABEL_42:
          Function_2248bb4(v2);
          Function_2248860(v2 + 192);
          Function_22482b0(v2);
          *(uchar *)(v2 + 8) = 2;
        }
        return 0;
      }
      Function_2248bb4(v2);
      Function_2248860(v2 + 192);
      Function_205e630(*(uchar *)(v2 + 9));
      v13 = v12;
      Function_205e630(*(uchar *)(v2 + 9));
      v15 = Function_205e6a8(v14);
      if ( (uint)Function_2030698(*(uint *)(v2 + 4), v13, v15) < 1 )
      {
        Function_2248bec(v2);
        *(uchar *)(v2 + 10) = Function_22477cc(v2, 28, 1);
        *(uchar *)(v2 + 8) = 15;
        return 0;
      }
      if ( !((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v2 + 9)) )
      {
        ((void (__fastcall *)(uint, uint, int))dword_223BA14[134])(
          *(uint *)(v2 + 4),
          *(uchar *)(v2 + 9),
          1);
        Function_2248c08(v2, v2 + 80);
        Function_2249024(v2, *(uchar *)(v2 + 13));
        *(uchar *)(v2 + 8) = 11;
        return 0;
      }
      result = 1;
      *(uchar *)(v2 + 16) = 1;
      return result;
    case 4:
      v16 = Function_2001be0(*(uint *)(a1 + 284));
      if ( v16 > 0xFFFFFFFE )
        return 0;
      if ( v16 >= 0xFFFFFFFE )
        goto LABEL_57;
      if ( v16 <= 2 )
      {
        if ( v16 )
        {
          if ( v16 == 1 )
          {
            Function_2248bb4(v2);
            Function_205e630(*(uchar *)(v2 + 9));
            v22 = v21;
            Function_205e630(*(uchar *)(v2 + 9));
            v24 = Function_205e6a8(v23);
            Function_2030698(*(uint *)(v2 + 4), v22, v24);
            if ( *(uchar *)(*(uint *)(v2 + 876)
                          + Function_2249c98(*(uchar *)(v2 + 20), *(uchar *)(v2 + 13))) == 2 )
            {
              Function_2248bec(v2);
              *(uchar *)(v2 + 10) = Function_22477cc(v2, 30, 1);
              *(uchar *)(v2 + 8) = 15;
            }
            else
            {
              Function_2248e54(v2, 2);
              *(uchar *)(v2 + 8) = 5;
            }
          }
          else if ( v16 == 2 )
          {
LABEL_57:
            Function_2248bb4(v2);
            Function_2248860(v2 + 192);
            Function_22482b0(v2);
            *(uchar *)(v2 + 8) = 2;
          }
        }
        else
        {
          Function_2248bb4(v2);
          Function_205e630(*(uchar *)(v2 + 9));
          v18 = v17;
          Function_205e630(*(uchar *)(v2 + 9));
          v20 = Function_205e6a8(v19);
          Function_2030698(*(uint *)(v2 + 4), v18, v20);
          if ( *(uchar *)(*(uint *)(v2 + 876)
                        + Function_2249c98(*(uchar *)(v2 + 20), *(uchar *)(v2 + 13))) == 1 )
          {
            Function_2248bec(v2);
            *(uchar *)(v2 + 10) = Function_22477cc(v2, 29, 1);
            *(uchar *)(v2 + 8) = 15;
          }
          else
          {
            Function_2248e54(v2, 1);
            *(uchar *)(v2 + 8) = 5;
          }
        }
      }
      return 0;
    case 5:
      v25 = Function_2001be0(*(uint *)(a1 + 284));
      if ( v25 > 0xFFFFFFFE )
        return 0;
      if ( v25 >= 0xFFFFFFFE )
        goto LABEL_70;
      if ( v25 > 1 )
        return 0;
      if ( v25 )
      {
        if ( v25 == 1 )
        {
LABEL_70:
          Function_2248bb4(v2);
          Function_2248860(v2 + 192);
          Function_22482b0(v2);
          *(uchar *)(v2 + 8) = 2;
        }
        return 0;
      }
      Function_2248bb4(v2);
      Function_205e630(*(uchar *)(v2 + 9));
      v27 = v26;
      Function_205e630(*(uchar *)(v2 + 9));
      v29 = Function_205e6a8(v28);
      v30 = Function_2030698(*(uint *)(v2 + 4), v27, v29);
      if ( v30 < Function_2248770(*(uchar *)(v2 + 14)) )
      {
        Function_2248bec(v2);
        *(uchar *)(v2 + 10) = Function_22477cc(v2, 28, 1);
        *(uchar *)(v2 + 8) = 15;
        return 0;
      }
      *(uchar *)(v2 + 18) = *(uchar *)(v2 + 14);
      if ( !((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v2 + 9)) )
      {
        Function_2248860(v2 + 192);
        v31 = Function_2248770(*(uchar *)(v2 + 14));
        ((void (__fastcall *)(uint, uint, int))dword_223BA14[134])(
          *(uint *)(v2 + 4),
          *(uchar *)(v2 + 9),
          v31);
        Function_2248c08(v2, v2 + 80);
        Function_22490e8(v2, *(uchar *)(v2 + 13), *(uchar *)(v2 + 14));
        *(uchar *)(v2 + 8) = 11;
        return 0;
      }
      result = 1;
      *(uchar *)(v2 + 16) = 1;
      return result;
    case 6:
      v32 = Function_2001288(*(uint *)(a1 + 312));
      Function_2249ce0();
      Function_20014d0(*(uint *)(v2 + 312), (ushort *)(v2 + 24));
      if ( v32 > 0xFFFFFFFE )
        return 0;
      if ( v32 >= 0xFFFFFFFE )
      {
        Function_2248860(v2 + 192);
        Function_2248348(v2);
        Function_22482b0(v2);
        *(uchar *)(v2 + 8) = 2;
        return 0;
      }
      if ( v32 > 5 || v32 < 3 )
        return 0;
      switch ( v32 )
      {
        case 3u:
          *(uchar *)(v2 + 19) = 3;
          Function_2248348(v2);
          if ( *(uchar *)(*(uint *)(v2 + 880)
                        + Function_2249c98(*(uchar *)(v2 + 20), *(uchar *)(v2 + 13))) )
          {
            Function_2248a2c(v2, *(uchar *)(v2 + 13));
            *(uchar *)(v2 + 8) = 16;
          }
          else
          {
            Function_2248bec(v2);
            Function_22480ec(v2);
            *(uchar *)(v2 + 10) = Function_22477cc(v2, 43, 1);
            Function_2247d94(v2);
            *(uchar *)(v2 + 8) = 7;
          }
          break;
        case 4u:
          *(uchar *)(v2 + 19) = 4;
          Function_2248348(v2);
          if ( Function_2249cac(*(uint *)(v2 + 332), *(uchar *)(v2 + 9), 2) == 1 )
          {
            *(uchar *)(v2 + 10) = Function_22477cc(v2, 42, 1);
            *(uchar *)(v2 + 8) = 14;
            return 0;
          }
          if ( *(uchar *)(*(uint *)(v2 + 884)
                        + Function_2249c98(*(uchar *)(v2 + 20), *(uchar *)(v2 + 13))) )
          {
            BeSeq_AddToPointer(v2, *(uchar *)(v2 + 13));
            *(uchar *)(v2 + 8) = 17;
          }
          else
          {
            Function_2248bec(v2);
            Function_22480ec(v2);
            *(uchar *)(v2 + 10) = Function_22477cc(v2, 66, 1);
            Function_2247d94(v2);
            *(uchar *)(v2 + 8) = 8;
          }
          break;
        case 5u:
          if ( Function_2249cac(*(uint *)(v2 + 332), *(uchar *)(v2 + 9), 2) == 2 )
          {
            Function_20057a4(1500, 0);
            Function_2005748(0x5F3u);
          }
          else
          {
            *(uchar *)(v2 + 19) = 5;
            Function_2248348(v2);
            Function_205e630(*(uchar *)(v2 + 9));
            v34 = v33;
            Function_205e630(*(uchar *)(v2 + 9));
            v36 = Function_205e6a8(v35);
            Function_2030698(*(uint *)(v2 + 4), v34, v36);
            Function_22480ec(v2);
            *(uchar *)(v2 + 10) = Function_22477cc(v2, 76, 1);
            Function_2247d94(v2);
            *(uchar *)(v2 + 8) = 9;
          }
          break;
      }
      return 0;
    case 7:
      v37 = Function_2001be0(*(uint *)(a1 + 284));
      if ( v37 > 0xFFFFFFFE )
        return 0;
      if ( v37 >= 0xFFFFFFFE )
        goto LABEL_101;
      if ( v37 > 1 )
        return 0;
      if ( v37 )
      {
        if ( v37 == 1 )
        {
LABEL_101:
          Function_2248bb4(v2);
          Function_22482fc(v2);
          *(uchar *)(v2 + 8) = 6;
        }
        return 0;
      }
      if ( Function_224933c(v2, 2, 46) != 1 )
        return 0;
      return 1;
    case 8:
      v38 = Function_2001be0(*(uint *)(a1 + 284));
      if ( v38 > 0xFFFFFFFE )
        return 0;
      if ( v38 >= 0xFFFFFFFE )
        goto LABEL_111;
      if ( v38 > 1 )
        return 0;
      if ( v38 )
      {
        if ( v38 == 1 )
        {
LABEL_111:
          Function_2248bb4(v2);
          Function_22482fc(v2);
          *(uchar *)(v2 + 8) = 6;
        }
        return 0;
      }
      if ( Function_224933c(v2, 5, 69) != 1 )
        return 0;
      return 1;
    case 9:
      v39 = Function_2001be0(*(uint *)(a1 + 284));
      if ( v39 > 0xFFFFFFFE )
        return 0;
      if ( v39 >= 0xFFFFFFFE )
        goto LABEL_124;
      if ( v39 > 1 )
        return 0;
      if ( v39 )
      {
        if ( v39 == 1 )
        {
LABEL_124:
          Function_2248bb4(v2);
          Function_22482fc(v2);
          *(uchar *)(v2 + 8) = 6;
        }
      }
      else
      {
        Function_2248bb4(v2);
        Function_205e630(*(uchar *)(v2 + 9));
        v41 = v40;
        Function_205e630(*(uchar *)(v2 + 9));
        v43 = Function_205e6a8(v42);
        v44 = Function_2030698(*(uint *)(v2 + 4), v41, v43);
        Function_2249cac(*(uint *)(v2 + 332), *(uchar *)(v2 + 9), 2);
        if ( v44 >= 0x32 )
        {
          if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v2 + 9)) )
          {
            result = 1;
            *(uchar *)(v2 + 16) = 1;
            return result;
          }
          Function_22493cc(v2, *(uchar *)(v2 + 13), 5);
          *(uchar *)(v2 + 8) = 10;
        }
        else
        {
          Function_2248bb4(v2);
          v45 = Function_2027b50(*(ushort **)(v2 + 328));
          Function_2249dbc(v2 + 192, v45);
          *(uchar *)(v2 + 10) = Function_22477cc(v2, 69, 1);
          *(uchar *)(v2 + 8) = 14;
        }
      }
      return 0;
    case 0xA:
      if ( dword_21BF6C4 & 3 )
      {
        ((void (*)(void))Function_2248bb4)();
        Function_22482fc(v2);
        Function_2249c60(*(uint *)(v2 + 864), 211, 105);
        *(uchar *)(v2 + 8) = 6;
      }
      return 0;
    case 0xB:
      v46 = *(uchar *)(a1 + 13);
      v47 = *(uchar *)(a1 + 19);
      if ( Function_224850c() == 1 )
        *(uchar *)(v2 + 8) = 15;
      return 0;
    case 0xC:
      v48 = *(uchar *)(a1 + 13);
      v49 = *(uchar *)(a1 + 19);
      if ( Function_224850c() == 1 )
        *(uchar *)(v2 + 8) = 13;
      return 0;
    case 0xD:
      if ( *(uchar *)(a1 + 19) == 3 )
        *(uchar *)(a1 + 8) = 16;
      else
        *(uchar *)(a1 + 8) = 17;
      return 0;
    case 0xE:
      if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        Function_22482fc(v2);
        *(uchar *)(v2 + 8) = 6;
      }
      return 0;
    case 0xF:
      if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        Function_2248860(v2 + 192);
        Function_2248240(v2);
        *(uchar *)(v2 + 8) = 0;
      }
      return 0;
    case 0x10:
      if ( dword_21BF6C4 & 0x20 )
      {
        Function_224877c();
      }
      else if ( dword_21BF6C4 & 0x10 )
      {
        Function_224877c();
      }
      else if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        Function_2249238(v2);
        Function_22482b0(v2);
        *(uchar *)(v2 + 8) = 2;
      }
      return 0;
    case 0x11:
      if ( dword_21BF6C4 & 0x20 )
      {
        Function_22487dc();
      }
      else if ( dword_21BF6C4 & 0x10 )
      {
        Function_22487dc();
      }
      else if ( dword_21BF6C4 & 3 )
      {
        Function_2005748(0x5DCu);
        Function_2249238(v2);
        Function_22482b0(v2);
        *(uchar *)(v2 + 8) = 2;
      }
      return 0;
    default:
      JUMPOUT(__CS__, *((short *)&off_22462E6 + v3) + 35939048);
      return result;
  }
}

//----- (02246BDC) --------------------------------------------------------
int __fastcall Function_2246bdc(uchar *a1)
{
  uchar *v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  switch ( a1[8] )
  {
    case 0:
      a1[15] = a1[15] & 7 | 8;
      if ( Function_2248874(a1, 21, (uchar)a1[13]) == 1 )
      {
        v1[16] = 0;
        ++v1[8];
      }
      goto LABEL_17;
    case 1:
      if ( (uchar)a1[17] != 255 )
      {
        a1[23] = 0;
        if ( a1[19] == 5 )
          Function_22493cc(a1, (uchar)a1[17], 5);
        else
          Function_2248f18();
        ++v1[8];
      }
      goto LABEL_17;
    case 2:
      v2 = Function_2249c9c((uchar)a1[21], (uchar)a1[17]);
      if ( Function_224850c(v1, v2, (uchar)v1[19]) == 1 )
      {
        v1[22] = 30;
        ++v1[8];
      }
      goto LABEL_17;
    case 3:
      if ( !--a1[22] )
      {
        Function_20365f4();
        Function_20364f0(133);
        ++v1[8];
      }
      goto LABEL_17;
    case 4:
      if ( Function_2036540(133) == 1 )
        ++v1[8];
      goto LABEL_17;
    case 5:
      v3 = Function_2249c9c((uchar)a1[21], (uchar)a1[17]);
      if ( Function_2248674(v1, v3, (uchar)v1[19]) != 1 )
        goto LABEL_17;
      Function_20365f4();
      Function_20363e8(0x64u);
      v1[17] = -1;
      v1[978] = 0;
      result = 1;
      break;
    default:
LABEL_17:
      result = 0;
      break;
  }
  return result;
}

//----- (02246CD0) --------------------------------------------------------
int __fastcall Function_2246cd0(int a1)
{
  int v1;
  int v2;
  char v3;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( *(uchar *)(a1 + 8) )
  {
    if ( v2 == 1 )
    {
      v3 = *(uchar *)(a1 + 22);
      if ( *(uchar *)(v1 + 22) )
        *(uchar *)(v1 + 22) = v3 - 1;
      if ( !*(uchar *)(v1 + 22) )
      {
        Function_20365f4();
        Function_20364f0(134);
        ++*(uchar *)(v1 + 8);
      }
    }
    else if ( v2 == 2 && Function_2036540(134) == 1 )
    {
      Function_20365f4();
      Function_2248860(v1 + 192);
      return 1;
    }
  }
  else if ( Function_2248874(a1, 23, 0) == 1 )
  {
    *(uchar *)(v1 + 22) = 30;
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (02246D3C) --------------------------------------------------------
int __fastcall Function_2246d3c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = *(uchar *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 == 1 && Function_200f2ac() == 1 )
      return 1;
  }
  else
  {
    Function_200f174(0, 0, 0, 0, 6, 1, 100);
    ++*(uchar *)(v1 + 8);
  }
  return 0;
}

//----- (02246D84) --------------------------------------------------------
uint __fastcall Function_2246d84(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  int v15;

  v14 = a1;
  Function_2249b8c(*(uint *)(a1 + 808));
  Function_2249b8c(*(uint *)(v14 + 812));
  Function_2249b8c(*(uint *)(v14 + 864));
  v1 = v14;
  v15 = 0;
  do
  {
    v2 = 0;
    v3 = v1;
    do
    {
      Function_2249b8c(*(uint *)(v3 + 832));
      ++v2;
      v3 += 4;
    }
    while ( v2 < 2 );
    v1 += 8;
    ++v15;
  }
  while ( v15 < 4 );
  v4 = ((int (__fastcall *)(uint, int))dword_223B7DC[0])(*(uchar *)(v14 + 9), 1);
  v5 = 0;
  if ( v4 > 0 )
  {
    v6 = (uint *)v14;
    do
    {
      Function_2249b8c(v6[197]);
      Function_2249b8c(v6[193]);
      Function_2249b8c(v6[204]);
      ++v5;
      ++v6;
    }
    while ( v5 < v4 );
  }
  Function_2039794();
  Function_2002fa0(*(uint *)(v14 + 320), 2);
  Function_2002fa0(*(uint *)(v14 + 320), 0);
  Call_free1(*(uint *)(v14 + 320));
  *(uint *)(v14 + 320) = 0;
  Function_2249954(v14 + 344);
  Function_200b190(*(ushort **)(v14 + 32));
  Function_200b3f0(*(uint **)(v14 + 36), v7);
  Function_20237bc_FreeMsg(*(uint *)(v14 + 40), v8);
  Function_20237bc_FreeMsg(*(uint *)(v14 + 44), v9);
  Function_200c560(*(int **)(v14 + 324));
  v11 = v14;
  v12 = 0;
  do
  {
    Function_20237bc_FreeMsg(*(uint *)(v11 + 48), v10);
    ++v12;
    v11 += 4;
  }
  while ( v12 < 3 );
  Function_2249d5c(v14 + 80, 1);
  Function_22472a4(*(uint *)(v14 + 76));
  return Call_FS_CloseFile(*(int **)(v14 + 892));
}

//----- (02246EAC) --------------------------------------------------------
uint Function_2246eac()
{
  uint result;

  SetMainLoopFunctionCall(0, 0);
  Function_20177bc(0, 0);
  Function_201ff00();
  Function_201ff68();
  REG_DISPCNT &= 0xFFFFE0FF;
  result = REG_DISPCNT_SUB & 0xFFFFE0FF;
  REG_DISPCNT_SUB &= 0xFFFFE0FF;
  return result;
}

//----- (02246EE4) --------------------------------------------------------
int __fastcall Function_2246ee4(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  short v7;
  int v8;
  uint *v9;
  int *v10;
  int v11;
  int v12;
  short v13;
  int v14;
  int v15;
  char *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  short v25;
  int v26;
  char v27;
  int v28;
  int v29;
  int v30;

  v30 = a4;
  v4 = a1;
  *(uint *)(a1 + 892) = LoadFromNARC_8(150, 0x64u, a3, a4);
  Function_2247220(v4);
  Function_2247280(v4);
  *(uint *)(v4 + 32) = LoadFromMsgNARC(1, 26, 201, 0x64u);
  *(uint *)(v4 + 36) = Function_200b358(0x64u);
  *(uint *)(v4 + 40) = Function_2023790(600, 0x64u);
  *(uint *)(v4 + 44) = Function_2023790(600, 0x64u);
  v5 = 0;
  v6 = v4;
  do
  {
    *(uint *)(v6 + 48) = Function_2023790(32, 0x64u);
    ++v5;
    v6 += 4;
  }
  while ( v5 < 3 );
  LoadFromNARC_PlFont1(0, 416, 100);
  LoadFromNARC_PlFont2(0, 384, 100);
  *(uint *)(v4 + 324) = Function_200c440(1, 2, 0, 0x64u);
  Function_2249d14(*(uint *)(v4 + 76), v4 + 80, 1);
  v17 = &v27;
  Function_22484dc(v4);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v4 + 9)) )
  {
    v7 = 32;
    v24 = 28;
  }
  else
  {
    v7 = 64;
    v24 = 60;
  }
  v8 = 0;
  v23 = ((int (__fastcall *)(uint, int))dword_223B7DC[0])(*(uchar *)(v4 + 9), 1);
  if ( v23 > 0 )
  {
    v9 = (uint *)v4;
    do
    {
      v9[197] = Function_2249b1c(v4 + 344);
      v9[204] = Function_2249b1c(v4 + 344);
      v17 = (char *)1;
      v18 = v7;
      v19 = 58;
      v20 = 2;
      v21 = 0;
      v9[193] = Function_2249b1c(v4 + 344);
      v10 = GetAdrOfPkmnInParty(*(uint **)(v4 + 888), v8);
      Function_2249c08(v9[193], v10);
      if ( *(uchar *)(*(uint *)(v4 + 872) + v8) )
      {
        Function_2249bac(v9[197], 0);
        Function_2249bac(v9[193], 1);
        Function_2249bac(v9[204], 1);
      }
      else
      {
        Function_2249bac(v9[197], 1);
        Function_2249bac(v9[193], 0);
        Function_2249bac(v9[204], 0);
      }
      ++v8;
      v24 += 64;
      ++v9;
      v7 += 64;
    }
    while ( v8 < v23 );
  }
  Function_2248488(v4, &v29, &v28, 0, v17, v18, v19, v20, v21);
  *(uint *)(v4 + 808) = Function_2249b1c(v4 + 344);
  *(uint *)(v4 + 812) = Function_2249b1c(v4 + 344);
  if ( !((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v4 + 9)) )
    Function_2249bac(*(uint *)(v4 + 812), 0);
  v22 = 0;
  v25 = 0;
  v26 = v4;
  do
  {
    v11 = 0;
    v12 = v26;
    v13 = 0;
    do
    {
      Function_22495e4(v4, &v29, &v28);
      *(uint *)(v12 + 832) = Function_2249b1c(v4 + 344);
      Function_2249bac(*(uint *)(v12 + 832), 0);
      ++v11;
      v13 += 12;
      v12 += 4;
    }
    while ( v11 < 2 );
    v25 += 64;
    v26 += 8;
    ++v22;
  }
  while ( v22 < 4 );
  Function_2249580(v4);
  *(uint *)(v4 + 864) = Function_2249b1c(v4 + 344);
  Function_2249bac(*(uint *)(v4 + 864), 0);
  if ( Function_2035e38() )
  {
    Function_200966c(1, 16, v14, v15);
    Function_2009704(1);
    Function_2039734();
  }
  return SetMainLoopFunctionCall((int)Function_22472e8, v4);
}

//----- (02247220) --------------------------------------------------------
int __fastcall Function_2247220(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1;
  Function_2247320();
  Function_2247340(*(uint *)(v1 + 76));
  *(uint *)(v1 + 320) = MallocFill120(0x64u);
  Function_2002f70(*(uint *)(v1 + 320), 2, 512, 0x64u);
  Function_2002f70(*(uint *)(v1 + 320), 0, 512, 0x64u);
  v2 = Function_2247484(v1, 3);
  Function_22474f8(v2);
  v3 = Function_224752c(v1, 2);
  Function_2247574(v3);
  Function_201ff0c(4u, 0);
  return Function_22475f0(v1, 4);
}

//----- (02247280) --------------------------------------------------------
int __fastcall Function_2247280(int a1)
{
  int v1;
  uchar v2;

  v1 = a1;
  v2 = ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9));
  return Function_2249604(v1 + 344, *(uint *)(v1 + 888), v2);
}

//----- (022472A4) --------------------------------------------------------
uint __fastcall Function_22472a4(int a1)
{
  int v1;

  v1 = a1;
  Function_201ff0c(0x1Fu, 0);
  Function_201ff74(0x1Fu, 0);
  Function_2019044(v1, 3);
  Function_2019044(v1, 2);
  Function_2019044(v1, 0);
  Function_2019044(v1, 1);
  Function_2019044(v1, 4);
  return free(v1);
}

//----- (022472E8) --------------------------------------------------------
int __fastcall Function_22472e8(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = *(uint *)(a1 + 320);
  if ( v2 )
    Function_2003694(v2);
  Function_201c2b8(*(uint *)(v1 + 76));
  Function_201dcac();
  Function_200a858();
  result = dword_27E3FF8 | 1;
  dword_27E3FF8 |= 1u;
  return result;
}

//----- (02247320) --------------------------------------------------------
char *Function_2247320()
{
  int *v0;
  char *v1;
  int v2;
  int v3;
  int v4;
  char v6;

  v0 = dword_224A1DC;
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

//----- (02247340) --------------------------------------------------------
uint __fastcall Function_2247340(uint *a1)
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
  v35 = 16777217;
  v36 = 512;
  v37 = 0;
  Function_20183c4(v1, 1u, &v31, 0);
  Function_2019690(1u, 32, 0, 0x64u);
  Function_2019ebc(v1, 1u);
  v24 = 0;
  v25 = 0;
  v26 = 2048;
  v27 = 0;
  v28 = 50397185;
  v29 = 0;
  v30 = 0;
  Function_20183c4(v1, 0, &v24, 0);
  Function_2019690(0, 32, 0, 0x64u);
  Function_2019ebc(v1, 0);
  v17 = 0;
  v18 = 0;
  v19 = 2048;
  v20 = 0;
  v21 = 84017153;
  v22 = 256;
  v23 = 0;
  Function_20183c4(v1, 2u, &v17, 0);
  Function_2019690(2u, 32, 0, 0x64u);
  Function_2019ebc(v1, 2u);
  v10 = 0;
  v11 = 0;
  v12 = 2048;
  v13 = 0;
  v14 = 33816577;
  v15 = 768;
  v16 = 0;
  Function_20183c4(v1, 3u, &v10, 0);
  Function_2019690(3u, 32, 0, 0x64u);
  Function_2019ebc(v1, 3u);
  v3 = 0;
  v4 = 0;
  v5 = 2048;
  v6 = 0;
  v7 = 67502081;
  v8 = 0;
  v9 = 0;
  Function_20183c4(v1, 4u, &v3, 0);
  Function_2019ebc(v1, 4u);
  REG_BG0CNT &= 0xFFFCu;
  return Function_201ff0c(2u, 1);
}

//----- (02247484) --------------------------------------------------------
int __fastcall Function_2247484(int a1, uchar a2)
{
  int v2;
  uchar v3;
  int result;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 892), 0x2Cu, *(uint **)(a1 + 76), a2, 0, 0, 1, 100);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v2 + 9)) )
    result = Function_200710c(*(uint *)(v2 + 892), 0x29u, *(uint **)(v2 + 76), v3, 0, 0, 1, 100);
  else
    result = Function_200710c(*(uint *)(v2 + 892), 0x28u, *(uint **)(v2 + 76), v3, 0, 0, 1, 100);
  return result;
}

//----- (022474F8) --------------------------------------------------------
uint __fastcall Function_22474f8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;

  v7 = a4;
  v4 = Function_2006f88(150, 138, &v6, 100);
  DC_FlushRange(*(uint *)(v6 + 12), 128);
  GX_LoadBGPltt(*(uint *)(v6 + 12), 0, 0x80u);
  return free(v4);
}

//----- (0224752C) --------------------------------------------------------
int __fastcall Function_224752c(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 892), 0x2Cu, *(uint **)(a1 + 76), a2, 0, 0, 1, 100);
  return Function_200710c(*(uint *)(v2 + 892), 0x2Au, *(uint **)(v2 + 76), v3, 0, 0, 1, 100);
}

//----- (02247574) --------------------------------------------------------
uint __fastcall Function_2247574(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;

  v7 = a4;
  v4 = Function_2006f88(150, 138, &v6, 100);
  DC_FlushRange(*(uint *)(v6 + 12), 128);
  GX_LoadBGPltt(*(uint *)(v6 + 12), 0, 0x80u);
  return free(v4);
}

//----- (022475A8) --------------------------------------------------------
int __fastcall Function_22475a8(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(v2 + 892), 0x2Cu, *(uint **)(v2 + 76), a2, 0, 0, 1, 100);
  return Function_200710c(*(uint *)(v2 + 892), 0x2Bu, *(uint **)(v2 + 76), v3, 0, 0, 1, 100);
}

//----- (022475F0) --------------------------------------------------------
int __fastcall Function_22475f0(int a1, uchar a2)
{
  int v2;
  uchar v3;

  v2 = a1;
  v3 = a2;
  Function_20070e8(*(uint *)(a1 + 892), 0x7Du, *(uint **)(a1 + 76), a2, 0, 0, 1, 100);
  Function_200710c(*(uint *)(v2 + 892), 0x7Eu, *(uint **)(v2 + 76), v3, 0, 0, 1, 100);
  return Function_2007130(*(uint *)(v2 + 892), 0xABu, 4u, 0, 32, 100);
}

//----- (02247650) --------------------------------------------------------
int __fastcall Function_2247650(int a1, int a2, int a3, int a4, int a5, int a6, uchar a7)
{
  return Function_2247680(a1, a2, a3, a4, a5, a6, a7);
}

//----- (02247680) --------------------------------------------------------
int __fastcall Function_2247680(int a1, int a2, uint a3, int a4, int a5, int a6, int a7, int a8, uchar a9, uchar a10, int a11)
{
  int v11;
  int v12;
  uint v13;
  int v14;
  int v15;

  v11 = a2;
  v12 = a1;
  v13 = a3;
  Function_201ada4_ClearTextBox(a2, a9);
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(v12 + 32), v13, *(ushort **)(v12 + 44));
  Function_200c388(*(uint **)(v12 + 36), *(uint *)(v12 + 40), *(uint *)(v12 + 44));
  if ( a11 == 1 )
  {
    Function_2002d7c(0, *(uint *)(v12 + 40), 0);
  }
  else if ( a11 == 2 )
  {
    Function_2002d7c(0, *(uint *)(v12 + 40), 0);
  }
  v14 = *(uint *)(v12 + 40);
  v15 = Function_201d78c(v11, a10);
  Function_201a9a4(v11);
  return v15;
}

//----- (02247714) --------------------------------------------------------
int __fastcall Function_2247714(int a1, int a2, int a3, int a4, int a5, int a6, uchar a7)
{
  return Function_2247744(a1, a2, a3, a4, a5, a6, a7);
}

//----- (02247744) --------------------------------------------------------
int __fastcall Function_2247744(int a1, int a2, uint a3, int a4, int a5, int a6, int a7, int a8, int a9, uchar a10, int a11)
{
  int v11;
  int v12;
  int v13;
  int v14;

  v11 = a1;
  v12 = a2;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 32), a3, *(ushort **)(a1 + 44));
  Function_200c388(*(uint **)(v11 + 36), *(uint *)(v11 + 40), *(uint *)(v11 + 44));
  if ( a11 == 1 )
  {
    Function_2002d7c(0, *(uint *)(v11 + 40), 0);
  }
  else if ( a11 == 2 )
  {
    Function_2002d7c(0, *(uint *)(v11 + 40), 0);
  }
  v13 = *(uint *)(v11 + 40);
  v14 = Function_201d78c(v12, a10);
  Function_201a9a4(v12);
  return v14;
}

//----- (022477CC) --------------------------------------------------------
int __fastcall Function_22477cc(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1;
  v3 = Function_2247650(a1, a1 + 192, a2, 1, 1, 255, 1u);
  Function_201a9a4(v2 + 192);
  return v3;
}

//----- (02247804) --------------------------------------------------------
int __fastcall Function_2247804(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  int *v5;
  uint v6;
  int v7;
  uint v8;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_201ada4_ClearTextBox(a2, 0);
  v6 = GetPkmnData(v5, 6u, 0);
  Function_200b70c(*(uint *)(v4 + 36), 0, v6);
  Function_2247a14(v4, v3, 48);
  Function_2247a14(v4, v3, 49);
  v7 = Function_2075bcc((int)v5);
  Function_200b6d8(*(uint *)(v4 + 36), 0, v7);
  Function_2247a14(v4, v3, 50);
  Function_2247a14(v4, v3, 51);
  v8 = GetPkmnData(v5, 0xAu, 0);
  Function_200b6a0(*(uint *)(v4 + 36), 0, v8);
  Function_2247a14(v4, v3, 52);
  Function_2247a14(v4, v3, 53);
  GetPkmnData(v5, 0xA5u, 0);
  Function_22480ec(v4);
  Function_2247a14(v4, v3, 54);
  Function_2247a14(v4, v3, 55);
  GetPkmnData(v5, 0xA6u, 0);
  Function_22480ec(v4);
  Function_2247a14(v4, v3, 56);
  Function_2247a14(v4, v3, 57);
  GetPkmnData(v5, 0xA8u, 0);
  Function_22480ec(v4);
  Function_2247a14(v4, v3, 58);
  Function_2247a14(v4, v3, 59);
  GetPkmnData(v5, 0xA9u, 0);
  Function_22480ec(v4);
  Function_2247a14(v4, v3, 60);
  Function_2247a14(v4, v3, 61);
  GetPkmnData(v5, 0xA7u, 0);
  Function_22480ec(v4);
  Function_2247a14(v4, v3, 62);
  Function_2247a14(v4, v3, 63);
  return Function_201a9a4(v3);
}

//----- (02247A14) --------------------------------------------------------
int __fastcall Function_2247a14(int a1, int a2, uint a3, int a4, ushort a5, int a6)
{
  return Function_2247744(a1, a2, a3, a4, a5, 255, 1, 2, 0, 0, a6);
}

//----- (02247A3C) --------------------------------------------------------
int __fastcall Function_2247a3c(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_201ada4_ClearTextBox(a2, 0);
  Function_2247ad0(v4, v3, 0, 71, 75, v5, 54, 58, 66);
  Function_2247ad0(v4, v3, 1, 72, 75, v5, 55, 59, 67);
  Function_2247ad0(v4, v3, 2, 73, 75, v5, 56, 60, 68);
  Function_2247ad0(v4, v3, 3, 74, 75, v5, 57, 61, 69);
  return Function_201a9a4(v3);
}

//----- (02247AD0) --------------------------------------------------------
int __fastcall Function_2247ad0(int a1, int a2, uint a3, int a4, uint a5, int *a6, uint a7, uint a8, uint a9)
{
  int v9;
  int v10;
  uint v11;
  int v12;
  uint v13;
  int v14;
  int result;

  v9 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  v13 = GetPkmnData(a6, a7, 0);
  Function_200b630(*(uint *)(v9 + 36), v11, v13);
  v14 = (24 * v11 + 12) & 0xFFFF;
  *(uchar *)(v9 + 10) = Function_2247714(v9, v10, v12, 32, v14, 255, 1u);
  GetPkmnData(a6, a8, 0);
  Function_22480ec(v9);
  GetPkmnData(a6, a9, 0);
  Function_22480ec(v9);
  result = Function_2247744(v9, v10, a5, 145, v14, 255, 1, 2, 0, 0, 1);
  *(uchar *)(v9 + 10) = result;
  return result;
}

//----- (02247B78) --------------------------------------------------------
int __fastcall Function_2247b78(int a1, int a2)
{
  int v2;
  int v3;
  ushort v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int v9;
  int v11;
  ushort v12;
  ushort v13;

  v2 = a2;
  v3 = a1;
  Function_201ada4_ClearTextBox(a2, 0);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v3 + 9)) )
    v4 = 4;
  else
    v4 = 36;
  v5 = 0;
  v11 = ((int (__fastcall *)(uint, int))dword_223B7DC[0])(*(uchar *)(v3 + 9), 1);
  if ( v11 > 0 )
  {
    v13 = v4 + 24;
    v12 = v4 + 32;
    do
    {
      if ( *(uchar *)(*(uint *)(v3 + 872) + v5) )
      {
        v6 = GetAdrOfPkmnInParty(*(uint **)(v3 + 888), v5);
        v7 = v6;
        v8 = GetPkmnData(v6, 0xA3u, 0);
        Function_200c5bc(*(uint *)(v3 + 324), v8, 3, 1, v2, v4, 1u);
        Function_200c578(*(uint *)(v3 + 324), 0, v2, v13, 1u);
        v9 = GetPkmnData(v7, 0xA4u, 0);
        Function_200c5bc(*(uint *)(v3 + 324), v9, 3, 0, v2, v12, 1u);
      }
      else
      {
        Function_201ae78(v2, 0, v4, 1, 0x40u, 0x10u);
      }
      ++v5;
      v13 += 64;
      v4 += 64;
      v12 += 64;
    }
    while ( v5 < v11 );
  }
  return Function_201a9a4(v2);
}

//----- (02247C64) --------------------------------------------------------
int __fastcall Function_2247c64(int a1, int a2)
{
  int v2;
  ushort v3;
  int v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  uchar v9;
  int v11;
  int v12;

  v2 = a1;
  v11 = a2;
  Function_201ada4_ClearTextBox(a2, 0);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v2 + 9)) )
  {
    v3 = 8;
    v4 = 48;
  }
  else
  {
    v3 = 40;
    v4 = 80;
  }
  v5 = 0;
  v12 = ((int (__fastcall *)(uint, int))dword_223B7DC[0])(*(uchar *)(v2 + 9), 1);
  if ( v12 > 0 )
  {
    do
    {
      v6 = GetAdrOfPkmnInParty(*(uint **)(v2 + 888), v5);
      v7 = v6;
      v8 = GetPkmnData(v6, 0xA1u, 0);
      Function_200c648(*(uint *)(v2 + 324), 1, v8, 3, 0, v11, v3, 1u);
      v9 = GetPkmnData(v7, 0x6Fu, 0);
      Function_22481fc(v2, v11, v4, 1, 0, v9);
      ++v5;
      v3 += 64;
      v4 += 64;
    }
    while ( v5 < v12 );
  }
  return Function_201a9a4(v11);
}

//----- (02247D04) --------------------------------------------------------
int __fastcall Function_2247d04(int result, int a2, char a3)
{
  int v3;
  int v4;

  v3 = 0;
  v4 = result;
  do
  {
    *(uint *)(v4 + 288) = 0;
    *(uint *)(v4 + 292) = 0;
    ++v3;
    v4 += 8;
  }
  while ( v3 < 3 );
  *(uint *)(result + 272) = result + 288;
  *(uint *)(result + 276) = a2;
  *(uchar *)(result + 280) = 0;
  *(uchar *)(result + 281) = 1;
  *(uchar *)(result + 282) = a3;
  *(uchar *)(result + 283) &= 0xF0u;
  *(uchar *)(result + 283) &= 0xCFu;
  *(uchar *)(result + 283) = *(uchar *)(result + 283) & 0x3F | 0x40;
  return result;
}

//----- (02247D68) --------------------------------------------------------
int __fastcall Function_2247d68(int a1, int a2, int a3, uint a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a1 + 48;
  v8 = 4 * a2;
  Function_200b1b8_CallMsgDecrypt(*(ushort ***)(a1 + 32), a4, *(ushort **)(a1 + 48 + 4 * a2));
  v9 = v4 + 8 * v5;
  *(uint *)(v9 + 288) = *(uint *)(v7 + v8);
  result = v6;
  *(uint *)(v9 + 292) = v6;
  return result;
}

//----- (02247D94) --------------------------------------------------------
int __fastcall Function_2247d94(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_2249d84(*(uint *)(a1 + 76), a1 + 240);
  Function_2247d04(v1, v1 + 240, 2);
  Function_2247d68(v1, 0, 0, 0x1Au);
  Function_2247d68(v1, 1, 1, 0x1Bu);
  *(uint *)(v1 + 284) = Function_2001b7c((uint *)(v1 + 272), 8, 0, 0, 0x64u, 2);
  v2 = *(uchar *)(v1 + 15);
  result = v2 | 4;
  *(uchar *)(v1 + 15) = v2 | 4;
  return result;
}

//----- (02247DF0) --------------------------------------------------------
int __fastcall Function_2247df0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  Function_2249d84(*(uint *)(a1 + 76), a1 + 256);
  Function_2247d04(v1, v1 + 256, 3);
  Function_2247d68(v1, 0, 0, 0x16u);
  Function_2247d68(v1, 1, 1, 0x17u);
  Function_2247d68(v1, 2, 2, 0x18u);
  *(uint *)(v1 + 284) = Function_2001b7c((uint *)(v1 + 272), 8, 0, 0, 0x64u, 2);
  v2 = *(uchar *)(v1 + 15);
  result = v2 | 4;
  *(uchar *)(v1 + 15) = v2 | 4;
  return result;
}

//----- (02247E5C) --------------------------------------------------------
int __fastcall Function_2247e5c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v6;
  int v8;
  int (*v9)();
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a1;
  Function_2249d84(*(uint *)(a1 + 76), a1 + 160);
  Function_201ada4_ClearTextBox(v4 + 160, 15);
  v5 = &dword_224A1BC;
  *(uint *)(v4 + 316) = Function_2013a04(4u, 0x64u);
  v6 = 0;
  do
  {
    Function_2013a4c(*(uint **)(v4 + 316), *(ushort ***)(v4 + 32), *v5, v5[1]);
    ++v6;
    v5 += 2;
  }
  while ( v6 < 4 );
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 268437504;
  v14 = 32;
  v15 = 0;
  v8 = *(uint *)(v4 + 316);
  v11 = v4 + 160;
  v15 = v4;
  v9 = Function_2247f14;
  v10 = 0;
  v12 = 262148;
  LOBYTE(v14) = 47;
  *(uint *)(v4 + 312) = Function_200112c(&v8, *(ushort *)(v4 + 28), *(ushort *)(v4 + 30), 0x64u);
  *(uchar *)(v4 + 15) |= 2u;
  return Function_201a9a4(v4 + 160);
}

//----- (02247F14) --------------------------------------------------------
int __fastcall Function_2247f14(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  ushort v8[2];
  int v9;

  v9 = a4;
  v4 = a1;
  v5 = a3;
  v6 = Function_2001504(a1, 0x13u);
  if ( !v5 )
    Function_2005748(0x5DCu);
  Function_20014d0(v4, v8);
  return Function_2247650(v6, v6 + 224, dword_224A0CC[v8[0]], 1, 1, 255, 1u);
}

//----- (02247F6C) --------------------------------------------------------
int __fastcall Function_2247f6c(int a1, int a2, int a3, int a4)
{
  int v4;
  int *v5;
  uint v6;
  int v8;
  int (*v9)();
  int (*v10)();
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v16 = a4;
  v4 = a1;
  Function_2249d84(*(uint *)(a1 + 76), a1 + 176);
  Function_201ada4_ClearTextBox(v4 + 176, 15);
  v5 = &dword_224A19C;
  *(uint *)(v4 + 316) = Function_2013a04(4u, 0x64u);
  v6 = 0;
  do
  {
    Function_2013a4c(*(uint **)(v4 + 316), *(ushort ***)(v4 + 32), *v5, v5[1]);
    ++v6;
    v5 += 2;
  }
  while ( v6 < 4 );
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 268437504;
  v14 = 32;
  v15 = 0;
  v8 = *(uint *)(v4 + 316);
  v11 = v4 + 176;
  v15 = v4;
  v9 = Function_2248028;
  v10 = Function_22480a0;
  v12 = 262148;
  v14 = 47;
  *(uint *)(v4 + 312) = Function_200112c(&v8, 0, 0, 0x64u);
  *(uchar *)(v4 + 15) |= 2u;
  return Function_201a9a4(v4 + 176);
}

//----- (02248028) --------------------------------------------------------
int __fastcall Function_2248028(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  BOOL v7;
  ushort v9[2];
  int v10;

  v10 = a4;
  v4 = a1;
  v5 = a3;
  v6 = Function_2001504(a1, 0x13u);
  if ( !v5 )
    Function_2005748(0x5DCu);
  Function_20014d0(v4, v9);
  v7 = Function_2249cac(*(uint *)(v6 + 332), *(uchar *)(v6 + 9), 2) != 1;
  return Function_2247650(
           v6,
           v6 + 192,
           *(ushort *)((char *)&asc_224A0AC[2 * v9[0]] + (2 * v7 & 0x1FF)),
           1,
           1,
           255,
           1u);
}

//----- (022480A0) --------------------------------------------------------
int __fastcall Function_22480a0(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  char v6;

  v2 = a2;
  v3 = a1;
  v4 = Function_2001504(a1, 0x13u);
  v5 = Function_2249cac(*(uint *)(v4 + 332), *(uchar *)(v4 + 9), 2);
  if ( v2 == 4 )
  {
    if ( v5 == 1 )
      v6 = 2;
    else
      v6 = 1;
  }
  else if ( v2 == 5 )
  {
    if ( v5 == 2 )
      v6 = 2;
    else
      v6 = 1;
  }
  else
  {
    v6 = 1;
  }
  return Function_20013d8(v3, v6, 15, 2);
}

//----- (022480EC) --------------------------------------------------------
uint __fastcall Function_22480ec(int a1, uint a2, int a3, int a4, int a5)
{
  return Function_200b60c(*(uint *)(a1 + 36), a2, a3, a4, a5, 1);
}

//----- (02248104) --------------------------------------------------------
ushort *__fastcall Function_2248104(int a1, uint a2, int a3)
{
  return Function_200b538(*(uint *)(a1 + 36), a2, a3);
}

//----- (02248110) --------------------------------------------------------
uint __fastcall Function_2248110(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  LoadTrainerDataAdress(*(uint *)(a1 + 332));
  return Function_200b498(*(uint *)(v2 + 36), v3);
}

//----- (0224812C) --------------------------------------------------------
uint __fastcall Function_224812c(int a1, int a2, int a3, int a4, uchar a5)
{
  int v5;
  int v6;
  ushort *v7;
  ushort *v8;
  int v9;

  v5 = a2;
  v6 = LoadTrainerDataAdress(*(uint *)(a1 + 332));
  v7 = (ushort *)Function_2023790(8, 0x64u);
  Function_2025ef0_Dummy();
  Function_2023d28(v7, v8);
  GetGender(v6);
  Function_201d78c(v5, a5);
  return Function_20237bc_FreeMsg((int)v7, v9);
}

//----- (02248194) --------------------------------------------------------
int __fastcall Function_2248194(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uchar v9;
  int v11;

  v4 = a1;
  v5 = a2;
  v11 = a3;
  v6 = a4;
  v7 = Function_203608c();
  v8 = Function_2032ee8(v7 ^ 1);
  if ( GetGender(v8) )
    v9 = 3;
  else
    v9 = 7;
  Function_200b498(*(uint *)(v4 + 36), 0);
  return Function_2247714(v4, v5, 1, v11, v6, 255, v9);
}

//----- (022481FC) --------------------------------------------------------
int __fastcall Function_22481fc(int result, int a2, int a3, int a4, int a5, char a6)
{
  int v6;
  int v7;
  int v8;
  uchar v9;

  v6 = a3;
  v7 = a4;
  if ( a6 )
  {
    if ( a6 != 1 )
      return result;
    v8 = 65;
    v9 = 3;
  }
  else
  {
    v8 = 64;
    v9 = 7;
  }
  return Function_2247714(result, a2, v8, v6, v7, 255, v9);
}

//----- (02248240) --------------------------------------------------------
int __fastcall Function_2248240(int a1)
{
  int v1;
  uint v2;
  int result;

  v1 = a1;
  *(uchar *)(a1 + 10) = Function_2247680(a1, a1 + 96, 5u, 16, 5, 255, 1, 2, 0, 0, 1);
  v2 = Function_2027b50(*(ushort **)(v1 + 328));
  Function_2249dbc(v1 + 208, v2);
  result = Function_2247650(v1, v1 + 208, 4, 1, 1, 255, 1u);
  *(uchar *)(v1 + 10) = result;
  return result;
}

//----- (022482A4) --------------------------------------------------------
int __fastcall Function_22482a4(int a1)
{
  return Function_2248860(a1 + 208);
}

//----- (022482B0) --------------------------------------------------------
int __fastcall Function_22482b0(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_2027b50(*(ushort **)(a1 + 328));
  Function_2249dbc(v1 + 224, v2);
  *(ushort *)(v1 + 24) = 0;
  return Function_2247e5c(v1, v3, v4, v5);
}

//----- (022482D4) --------------------------------------------------------
int __fastcall Function_22482d4(int a1)
{
  int v1;

  v1 = a1;
  Function_20014dc(*(uint *)(a1 + 312), (ushort *)(v1 + 28), (ushort *)(v1 + 30));
  Function_2248860(v1 + 224);
  return Function_2249258(v1);
}

//----- (022482FC) --------------------------------------------------------
int __fastcall Function_22482fc(int a1)
{
  int v1;
  uint v2;
  int v3;
  int v4;
  int v5;

  v1 = a1;
  v2 = Function_2027b50(*(ushort **)(a1 + 328));
  Function_2249dbc(v1 + 192, v2);
  *(uchar *)(v1 + 10) = Function_2247650(v1, v1 + 192, 37, 1, 1, 255, 1u);
  *(ushort *)(v1 + 24) = 0;
  return Function_2247f6c(v1, v3, v4, v5);
}

//----- (02248348) --------------------------------------------------------
int __fastcall Function_2248348(int a1)
{
  return Function_2249258(a1);
}

//----- (02248350) --------------------------------------------------------
int __fastcall Function_2248350(int result, uint *a2, int a3)
{
  *(uchar *)(result + 8) = 0;
  *a2 = a3;
  return result;
}

//----- (02248358) --------------------------------------------------------
uint __fastcall Function_2248358(uchar *a1)
{
  uchar *v1;
  int v2;
  uint result;
  int v4;
  char v5;
  int v6;
  int v7;
  char v8;
  uint v9;

  v1 = a1;
  v2 = 0;
  result = Function_2249c98((uchar)a1[20], (uchar)a1[13]);
  if ( dword_21BF6C4 & 0x20 )
  {
    v4 = (uchar)v1[13];
    if ( v4 == (uchar)v1[21] )
      return result;
    if ( result )
      v5 = v4 - 1;
    else
      v5 = v4 + v1[20] - 1;
    v1[13] = v5;
    v2 = 1;
  }
  if ( dword_21BF6C4 & 0x10 )
  {
    v6 = (uchar)v1[13];
    if ( v6 == (uchar)v1[21] )
      return result;
    v7 = (uchar)v1[20] - 1;
    if ( result == v7 )
      v8 = v6 - v7;
    else
      v8 = v6 + 1;
    v1[13] = v8;
    v2 = 1;
  }
  if ( dword_21BF6C4 & 0x40 )
  {
    result = (uchar)v1[20];
    if ( (uchar)v1[13] < result )
      return result;
    v2 = 1;
    v1[13] = v1[12];
  }
  result = 128;
  if ( dword_21BF6C4 & 0x80 )
  {
    v9 = (uchar)v1[13];
    result = (uchar)v1[21];
    if ( v9 >= result )
      return result;
    v1[12] = v9;
    result = (uchar)v1[21];
    v2 = 1;
    v1[13] = result;
  }
  if ( v2 == 1 )
    result = Function_22483f0(v1);
  return result;
}

//----- (022483F0) --------------------------------------------------------
int __fastcall Function_22483f0(int a1)
{
  int v1;

  v1 = a1;
  Function_2005748(0x5DCu);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v1 + 9)) == 1 )
    Function_2248874(v1, 22, *(uchar *)(v1 + 13));
  return Function_2248420(v1, *(uchar *)(v1 + 13), 0);
}

//----- (02248420) --------------------------------------------------------
int __fastcall Function_2248420(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v3 = a1;
  v4 = a2;
  if ( a3 )
  {
    v5 = *(uint *)(a1 + 812);
    v6 = 2;
    v7 = 17;
  }
  else
  {
    v5 = *(uint *)(a1 + 808);
    v6 = 1;
    v7 = 0;
  }
  if ( v4 < *(uchar *)(a1 + 21) )
  {
    Function_2249bec(v5, v6);
    Function_2248488(v3, &v10, &v9, v4, v9, v10, v11, v12, v13);
    result = Function_2249bb8(v5, (ushort)v10, (ushort)v9);
  }
  else
  {
    Function_2249bec(v5, v7);
    result = Function_2249bb8(v5, 224, 160);
  }
  return result;
}

//----- (02248488) --------------------------------------------------------
int __fastcall Function_2248488(int a1, uint *a2, uint *a3, int a4)
{
  uint *v4;
  uint *v5;
  int v6;
  int result;

  v4 = a2;
  v5 = a3;
  v6 = a4;
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) == 1 )
  {
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        *v4 = 104;
      }
      else if ( v6 == 2 )
      {
        *v4 = 168;
      }
      else
      {
        *v4 = 232;
      }
    }
    else
    {
      *v4 = 40;
    }
  }
  else if ( v6 )
  {
    if ( v6 == 1 )
      *v4 = 136;
    else
      *v4 = 200;
  }
  else
  {
    *v4 = 72;
  }
  result = 88;
  *v5 = 88;
  return result;
}

//----- (022484DC) --------------------------------------------------------
int __fastcall Function_22484dc(int a1, ushort *a2, ushort *a3, ushort *a4, ushort *a5)
{
  ushort *v5;
  ushort *v6;
  ushort *v7;
  int result;

  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) )
  {
    *v5 = 0;
    *v6 = 0;
    result = 120;
    *v7 = 120;
  }
  else
  {
    *v5 = 32;
    result = 0;
    *v6 = 0;
    *v7 = 0;
  }
  *a5 = 0;
  return result;
}

//----- (0224850C) --------------------------------------------------------
int __fastcall Function_224850c(int a1, int a2, uint a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;
  char v7;
  int result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = Function_2249c98(*(uchar *)(a1 + 20), a2);
  v7 = (uint)GetAdrOfPkmnInParty(*(uint **)(v3 + 888), v6);
  if ( v5 <= 5 )
    JUMPOUT(__CS__, (char *)&off_224853C + *((short *)&off_224853C + v5) + 2);
  switch ( v7 )
  {
    case 0:
      *(uchar *)(v3 + 15) &= 0xFEu;
      result = 1;
      break;
    case 1:
      if ( !(*(uchar *)(v3 + 15) & 1) )
      {
        *(uchar *)(v3 + 15) = *(uchar *)(v3 + 15) & 0xFE | 1;
        *(uchar *)(v3 + 18);
        ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v3 + 9));
        *(uint *)(v3 + 804) = Function_2249b1c(v3 + 344);
      }
      if ( Function_2249c40(*(uint *)(v3 + 804)) )
        goto LABEL_18;
      Function_2249b8c(*(uint *)(v3 + 804));
      *(uint *)(v3 + 804) = 0;
      *(uchar *)(v3 + 15) &= 0xFEu;
      result = 1;
      break;
    case 3:
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v3 + 9)) )
      {
        *(uchar *)(v3 + 15) &= 0xFEu;
        result = 1;
      }
      else
      {
        if ( !(dword_21BF6C4 & 3) )
          goto LABEL_18;
        Function_2005748(0x5DCu);
        Function_2248a2c(v3, v4);
        *(uchar *)(v3 + 15) &= 0xFEu;
        result = 1;
      }
      break;
    case 4:
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v3 + 9)) )
      {
        *(uchar *)(v3 + 15) &= 0xFEu;
        result = 1;
      }
      else
      {
        if ( !(dword_21BF6C4 & 3) )
          goto LABEL_18;
        Function_2005748(0x5DCu);
        BeSeq_AddToPointer(v3, v4);
        *(uchar *)(v3 + 15) &= 0xFEu;
        result = 1;
      }
      break;
    case 5:
      *(uchar *)(v3 + 15) &= 0xFEu;
      result = 1;
      break;
    default:
LABEL_18:
      result = 0;
      break;
  }
  return result;
}

//----- (02248674) --------------------------------------------------------
int __fastcall Function_2248674(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  bool v7;
  uint v8;
  uint v9;

  v2 = a1;
  v3 = a2;
  v4 = *(uchar *)(a1 + 21);
  v5 = Function_2249c98(*(uchar *)(a1 + 20), a2);
  switch ( (uchar)GetAdrOfPkmnInParty(*(uint **)(v2 + 888), v5) )
  {
    case 0u:
    case 1u:
    case 5u:
      *(uchar *)(v2 + 15) &= 0xFEu;
      return 1;
    case 3u:
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v2 + 9)) != 1 )
        goto LABEL_10;
      v7 = Function_203608c() == 0;
      v8 = *(uchar *)(v2 + 17);
      if ( v7 )
      {
        if ( v8 >= v4 )
        {
          *(uchar *)(v2 + 15) &= 0xFEu;
          return 1;
        }
      }
      else if ( v8 < v4 )
      {
        *(uchar *)(v2 + 15) &= 0xFEu;
        return 1;
      }
LABEL_10:
      if ( *(uchar *)(v2 + 15) & 1 )
        return 0;
      *(uchar *)(v2 + 15) = *(uchar *)(v2 + 15) & 7 | 0x18;
      Function_2248a2c(v2, v3);
      *(uchar *)(v2 + 15) &= 0xFEu;
      return 1;
    case 4u:
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v2 + 9)) != 1 )
        goto LABEL_19;
      v7 = Function_203608c() == 0;
      v9 = *(uchar *)(v2 + 17);
      if ( v7 )
      {
        if ( v9 >= v4 )
        {
          *(uchar *)(v2 + 15) &= 0xFEu;
          return 1;
        }
      }
      else if ( v9 < v4 )
      {
        *(uchar *)(v2 + 15) &= 0xFEu;
        return 1;
      }
LABEL_19:
      if ( *(uchar *)(v2 + 15) & 1 )
        return 0;
      *(uchar *)(v2 + 15) = *(uchar *)(v2 + 15) & 7 | 0x18;
      BeSeq_AddToPointer(v2, v3);
      *(uchar *)(v2 + 15) &= 0xFEu;
      return 1;
    default:
      return 0;
  }
}

//----- (02248770) --------------------------------------------------------
int __fastcall Function_2248770(int a1)
{
  int result;

  if ( a1 == 1 )
    result = 1;
  else
    result = 15;
  return result;
}

//----- (0224877C) --------------------------------------------------------
int __fastcall Function_224877c(int a1, char a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int *v7;

  v2 = a1;
  v3 = *(uchar *)(a1 + 13);
  LOBYTE(v4) = *(uchar *)(a1 + 13);
  result = 0;
  while ( 1 )
  {
    v4 = (char)(v4 + a2);
    if ( v4 >= 0 )
    {
      if ( v4 >= *(uchar *)(v2 + 20) )
        v4 = 0;
    }
    else
    {
      v4 = (char)(*(uchar *)(v2 + 20) - 1);
    }
    if ( v4 == v3 )
      break;
    if ( *(uchar *)(*(uint *)(v2 + 880) + v4) == 1 )
    {
      *(uchar *)(v2 + 13) = v4;
      Function_22483f0(v2);
      v6 = Function_2249c98(*(uchar *)(v2 + 20), *(uchar *)(v2 + 13));
      v7 = GetAdrOfPkmnInParty(*(uint **)(v2 + 888), v6);
      return Function_2247804(v2, v2 + 144, v7);
    }
  }
  return result;
}

//----- (022487DC) --------------------------------------------------------
int __fastcall Function_22487dc(int a1, char a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int *v7;

  v2 = a1;
  v3 = *(uchar *)(a1 + 13);
  LOBYTE(v4) = *(uchar *)(a1 + 13);
  result = 0;
  while ( 1 )
  {
    v4 = (char)(v4 + a2);
    if ( v4 >= 0 )
    {
      if ( v4 >= *(uchar *)(v2 + 20) )
        v4 = 0;
    }
    else
    {
      v4 = (char)(*(uchar *)(v2 + 20) - 1);
    }
    if ( v4 == v3 )
      break;
    if ( *(uchar *)(*(uint *)(v2 + 884) + v4) == 1 )
    {
      *(uchar *)(v2 + 13) = v4;
      Function_22483f0(v2);
      v6 = Function_2249c98(*(uchar *)(v2 + 20), *(uchar *)(v2 + 13));
      v7 = GetAdrOfPkmnInParty(*(uint **)(v2 + 888), v6);
      return Function_2247a3c(v2, v2 + 144, (int)v7);
    }
  }
  return result;
}

//----- (0224883C) --------------------------------------------------------
int __fastcall Function_224883c(int a1)
{
  int v1;

  v1 = a1;
  Function_2248bb4(a1);
  Function_2249258(v1);
  Function_2248860(v1 + 192);
  return Function_2249bac(*(uint *)(v1 + 864), 0);
}

//----- (02248860) --------------------------------------------------------
int __fastcall Function_2248860(int a1)
{
  int v1;

  v1 = a1;
  Function_200e084(a1, 1);
  return Function_201ad10(v1);
}

//----- (02248874) --------------------------------------------------------
BOOL __fastcall Function_2248874(int a1, char a2)
{
  int v2;
  int v3;

  v3 = a1;
  switch ( a2 )
  {
    case 20:
      v2 = 53;
      Function_22488cc();
      break;
    case 21:
      v2 = 54;
      Function_2248940();
      break;
    case 22:
      v2 = 55;
      Function_22489d0();
      break;
    case 23:
      v2 = 56;
      Function_2248a04();
      break;
    default:
      return Function_20359dc(v2, v3 + 896, 40) == 1;
  }
  return Function_20359dc(v2, v3 + 896, 40) == 1;
}

//----- (022488CC) --------------------------------------------------------
int __fastcall Function_22488cc(int a1, short a2)
{
  int v2;
  short v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = a1;
  v3 = a2;
  v4 = LoadTrainerDataAdress(*(uint *)(a1 + 332));
  *(ushort *)(v2 + 896) = v3;
  v5 = 0;
  *(ushort *)(v2 + 898) = GetGender(v4);
  v6 = v2 + 4;
  do
  {
    result = Function_2249cac(*(uint *)(v2 + 332), *(uchar *)(v2 + 9), (uchar)v5);
    *(ushort *)(v6 + 896) = result;
    ++v5;
    v6 += 2;
  }
  while ( v5 < 3 );
  return result;
}

//----- (02248910) --------------------------------------------------------
int __fastcall Function_107_2248910(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  short *v9;
  short v10;
  int v11;

  v4 = a4;
  v5 = a1;
  v6 = a3;
  ++*(uchar *)(a4 + 23);
  result = Function_203608c();
  if ( v5 != result )
  {
    result = 979;
    v8 = 0;
    v9 = (short *)(v6 + 4);
    do
    {
      v10 = *v9;
      v11 = v4 + v8++;
      ++v9;
      *(uchar *)(v11 + 979) = v10;
    }
    while ( v8 < 3 );
  }
  return result;
}

//----- (02248940) --------------------------------------------------------
int __fastcall Function_2248940(int a1, short a2, short a3)
{
  int v3;
  char v4;
  int result;

  v3 = a1;
  *(ushort *)(a1 + 896) = a2;
  v4 = a3;
  *(ushort *)(a1 + 898) = a3;
  if ( !Function_203608c() && *(uchar *)(v3 + 17) == 255 )
    *(uchar *)(v3 + 17) = v4;
  *(ushort *)(v3 + 900) = *(uchar *)(v3 + 17);
  result = 906;
  *(ushort *)(v3 + 904) = *(uchar *)(v3 + 18);
  *(ushort *)(v3 + 906) = *(uchar *)(v3 + 19);
  return result;
}

//----- (02248978) --------------------------------------------------------
int __fastcall Function_107_2248978(int a1, int a2, ushort *a3, uchar *a4)
{
  uchar *v4;
  int v5;
  ushort *v6;
  int result;

  v4 = a4;
  v5 = a1;
  v6 = a3;
  ++a4[23];
  result = Function_203608c();
  if ( v5 != result )
  {
    v4[977] = v6[1];
    if ( Function_203608c() )
    {
      v4[17] = v6[2];
      v4[18] = v6[4];
      result = (ushort)v6[5];
      v4[19] = result;
    }
    else
    {
      result = 977;
      if ( (uchar)v4[17] == 255 )
      {
        v4[17] = v4[977] + v4[21];
        v4[18] = v6[4];
        result = (ushort)v6[5];
        v4[19] = result;
      }
      else
      {
        v4[977] = 0;
      }
    }
  }
  return result;
}

//----- (022489D0) --------------------------------------------------------
int __fastcall Function_22489d0(int result, short a2)
{
  *(ushort *)(result + 896) = a2;
  *(ushort *)(result + 898) = *(uchar *)(result + 13);
  return result;
}

//----- (022489E0) --------------------------------------------------------
int __fastcall Function_107_22489e0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  result = Function_203608c();
  if ( v4 != result )
  {
    *(uchar *)(v6 + 976) = *(ushort *)(v5 + 2);
    result = Function_2248420(v6, *(uchar *)(v6 + 976), 1);
  }
  return result;
}

//----- (02248A04) --------------------------------------------------------
int __fastcall Function_2248a04(int result)
{
  *(ushort *)(result + 896) = 1;
  return result;
}

//----- (02248A10) --------------------------------------------------------
int __fastcall Function_107_2248a10(int a1, int a2, ushort *a3, int a4)
{
  int v4;
  ushort *v5;
  int v6;
  int result;

  v4 = a1;
  v5 = a3;
  v6 = a4;
  result = Function_203608c();
  if ( v4 != result )
  {
    result = 978;
    *(uchar *)(v6 + 978) = *v5;
  }
  return result;
}

//----- (02248A2C) --------------------------------------------------------
uint __fastcall Function_2248a2c(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;

  v2 = a2;
  v3 = a1;
  Function_224752c(a1, 2u);
  Function_2248860(v3 + 192);
  Function_201ad10(v3 + 192);
  v4 = Function_2249c98(*(uchar *)(v3 + 20), v2);
  v5 = GetAdrOfPkmnInParty(*(uint **)(v3 + 888), v4);
  Function_2247804(v3, v3 + 144, v5);
  return Function_201ff0c(4u, 1);
}

//----- (02248A74) --------------------------------------------------------
int __fastcall Function_2248a74(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  result = Function_2249c98(*(uchar *)(a1 + 20), a2);
  *(uchar *)(*(uint *)(v2 + 880) + result) = 1;
  return result;
}

//----- (02248A8C) --------------------------------------------------------
int __fastcall Function_2248a8c(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_2027b50(*(ushort **)(a1 + 328));
  Function_2249dbc(v2 + 192, v4);
  v5 = Function_2249c98(*(uchar *)(v2 + 20), v3);
  GetAdrOfPkmnInParty(*(uint **)(v2 + 888), v5);
  Function_2076b10_Dummy();
  Function_2248104(v2, 0, v6);
  *(uchar *)(v2 + 10) = Function_22477cc(v2, 47);
  Function_2248a74(v2, v3);
  Function_2249580(v2);
  return Function_2005748(0x624u);
}

//----- (02248AF0) --------------------------------------------------------
uint __fastcall BeSeq_AddToPointer(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;

  v2 = a2;
  v3 = a1;
  Function_22475a8(a1, 2u);
  Function_2248860(v3 + 192);
  Function_201ad10(v3 + 192);
  v4 = Function_2249c98(*(uchar *)(v3 + 20), v2);
  v5 = GetAdrOfPkmnInParty(*(uint **)(v3 + 888), v4);
  Function_2247a3c(v3, v3 + 144, (int)v5);
  return Function_201ff0c(4u, 1);
}

//----- (02248B38) --------------------------------------------------------
int __fastcall Function_2248b38(int a1, int a2)
{
  int v2;
  int result;

  v2 = a1;
  result = Function_2249c98(*(uchar *)(a1 + 20), a2);
  *(uchar *)(*(uint *)(v2 + 884) + result) = 1;
  return result;
}

//----- (02248B50) --------------------------------------------------------
int __fastcall Function_2248b50(int a1, int a2)
{
  int v2;
  int v3;
  uint v4;
  int v5;
  int v6;

  v2 = a1;
  v3 = a2;
  v4 = Function_2027b50(*(ushort **)(a1 + 328));
  Function_2249dbc(v2 + 192, v4);
  v5 = Function_2249c98(*(uchar *)(v2 + 20), v3);
  GetAdrOfPkmnInParty(*(uint **)(v2 + 888), v5);
  Function_2076b10_Dummy();
  Function_2248104(v2, 0, v6);
  *(uchar *)(v2 + 10) = Function_22477cc(v2, 70);
  Function_2248b38(v2, v3);
  Function_2249580(v2);
  return Function_2005748(0x624u);
}

//----- (02248BB4) --------------------------------------------------------
uint __fastcall Function_2248bb4(int a1)
{
  int v1;
  int v2;
  uint result;

  v1 = a1;
  v2 = *(uchar *)(a1 + 15);
  result = (uint)(v2 << 29) >> 31;
  if ( result == 1 )
  {
    *(uchar *)(v1 + 15) = v2 & 0xFB;
    Function_2001bc4(*(uint *)(v1 + 284), 0);
    Function_200dc9c(*(uint *)(v1 + 276), 1);
    result = Function_201ad10(*(uint *)(v1 + 276));
  }
  return result;
}

//----- (02248BEC) --------------------------------------------------------
int __fastcall Function_2248bec(int a1)
{
  int v1;
  uint v2;

  v1 = a1;
  v2 = Function_2027b50(*(ushort **)(a1 + 328));
  return Function_2249dbc(v1 + 192, v2);
}

//----- (02248C08) --------------------------------------------------------
int __fastcall Function_2248c08(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint v26;
  int v27;
  int v28;
  ushort v30[2];
  ushort v31[2];
  ushort v32[2];
  ushort v33[2];
  int v34;

  v34 = a4;
  v4 = a2;
  v5 = a1;
  Function_22484dc(a1, v33, v32, v31, v30);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v5 + 9)) )
  {
    if ( Function_203608c() )
    {
      v22 = v32[0];
      v23 = (v33[0] + 104) & 0xFFFF;
      Function_201ae78(v4, 0, (v23 - 48) & 0xFFFF, v32[0], 0x30u, 0x10u);
      Function_22480ec(v5, 0, *(ushort *)(v5 + 982), 4, 1);
      *(uchar *)(v5 + 10) = Function_2247744(v5, v4, 2u, v23, v22, 255, 1, 2, 0, 0, 2);
      v20 = v30[0];
      v21 = (v31[0] + 104) & 0xFFFF;
      Function_201ae78(v4, 0, (v21 - 48) & 0xFFFF, v30[0], 0x30u, 0x10u);
      Function_205e630(*(uchar *)(v5 + 9));
      v25 = v24;
      Function_205e630(*(uchar *)(v5 + 9));
      v27 = Function_205e6a8(v26);
      v28 = Function_2030698(*(uint *)(v5 + 4), v25, v27);
      Function_22480ec(v5, 0, v28, 4, 1);
    }
    else
    {
      v13 = v32[0];
      v14 = (v33[0] + 104) & 0xFFFF;
      Function_201ae78(v4, 0, (v14 - 48) & 0xFFFF, v32[0], 0x30u, 0x10u);
      Function_205e630(*(uchar *)(v5 + 9));
      v16 = v15;
      Function_205e630(*(uchar *)(v5 + 9));
      v18 = Function_205e6a8(v17);
      v19 = Function_2030698(*(uint *)(v5 + 4), v16, v18);
      Function_22480ec(v5, 0, v19, 4, 1);
      *(uchar *)(v5 + 10) = Function_2247744(v5, v4, 2u, v14, v13, 255, 1, 2, 0, 0, 2);
      v20 = v30[0];
      v21 = (v31[0] + 104) & 0xFFFF;
      Function_201ae78(v4, 0, (v21 - 48) & 0xFFFF, v30[0], 0x30u, 0x10u);
      Function_22480ec(v5, 0, *(ushort *)(v5 + 982), 4, 1);
    }
    *(uchar *)(v5 + 10) = Function_2247744(v5, v4, 2u, v21, v20, 255, 1, 2, 0, 0, 2);
  }
  else
  {
    v6 = v32[0];
    v7 = (v33[0] + 104) & 0xFFFF;
    Function_201ae78(v4, 0, (v7 - 48) & 0xFFFF, v32[0], 0x30u, 0x10u);
    Function_205e630(*(uchar *)(v5 + 9));
    v9 = v8;
    Function_205e630(*(uchar *)(v5 + 9));
    v11 = Function_205e6a8(v10);
    v12 = Function_2030698(*(uint *)(v5 + 4), v9, v11);
    Function_22480ec(v5, 0, v12, 4, 1);
    *(uchar *)(v5 + 10) = Function_2247744(v5, v4, 2u, v7, v6, 255, 1, 2, 0, 0, 2);
  }
  return Function_201a9a4(v4);
}

//----- (02248E54) --------------------------------------------------------
int __fastcall Function_2248e54(int a1, int a2)
{
  char v2;
  int v3;
  int v4;
  int result;

  v2 = a2;
  v3 = a1;
  v4 = Function_2248770(a2);
  Function_22480ec(v3, 0, v4, 4, 0);
  *(uchar *)(v3 + 10) = Function_22477cc(v3, 25);
  result = Function_2247d94(v3);
  *(uchar *)(v3 + 14) = v2;
  return result;
}

//----- (02248E84) --------------------------------------------------------
int __fastcall Function_2248e84(int a1, int a2)
{
  int v2;
  int v3;
  ushort v5[2];
  ushort v6[2];
  char v7;
  ushort v8;

  v2 = a2;
  v3 = a1;
  Function_22484dc(a1, &v8, &v7, v6, v5);
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v3 + 9)) )
  {
    if ( Function_203608c() )
    {
      Function_2248194(v3, v2, v8, *(ushort *)&v7);
      Function_224812c(v3, v2, v6[0], v5[0], 0);
    }
    else
    {
      Function_224812c(v3, v2, v8, *(ushort *)&v7, 0);
      Function_2248194(v3, v2, v6[0], v5[0]);
    }
  }
  else
  {
    Function_224812c(v3, v2, v8, *(ushort *)&v7, 0);
  }
  return Function_201a9a4(v2);
}

//----- (02248F18) --------------------------------------------------------
#error "Failed to decompile function. "

//----- (02249024) --------------------------------------------------------
int __fastcall Function_2249024(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a1;
  v3 = a2;
  v4 = Function_2249c98(*(uchar *)(a1 + 20), a2);
  GetAdrOfPkmnInParty(*(uint **)(v2 + 888), v4);
  v5 = Function_2027b50(*(ushort **)(v2 + 328));
  Function_2249dbc(v2 + 192, v5);
  Function_2076b10_Dummy();
  Function_2248104(v2, 0, v6);
  *(uchar *)(v2 + 10) = Function_22477cc(v2, 20);
  *(uchar *)(*(uint *)(v2 + 872) + Function_2249c98(*(uchar *)(v2 + 20), v3)) = 1;
  v7 = Function_2249c98(*(uchar *)(v2 + 20), v3);
  Function_2249bac(*(uint *)(v2 + 4 * v7 + 788), 0);
  v8 = Function_2249c98(*(uchar *)(v2 + 20), v3);
  Function_2249bac(*(uint *)(v2 + 4 * v8 + 772), 1);
  Function_2247b78(v2, v2 + 128);
  Function_2247c64(v2, v2 + 112);
  v9 = Function_2249c98(*(uchar *)(v2 + 20), v3);
  Function_2249bac(*(uint *)(v2 + 4 * v9 + 816), 1);
  return Function_2005748(0x624u);
}

//----- (022490E8) --------------------------------------------------------
int __fastcall Function_22490e8(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint v7;
  int v8;
  int *v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v17;

  v17 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = Function_2027b50(*(ushort **)(a1 + 328));
  Function_2249dbc(v4 + 192, v7);
  v8 = Function_2249c98(*(uchar *)(v4 + 20), v5);
  v9 = GetAdrOfPkmnInParty(*(uint **)(v4 + 888), v8);
  Function_2076b10_Dummy();
  Function_2248104(v4, 0, v10);
  if ( v6 == 1 )
  {
    *(uchar *)(v4 + 10) = Function_22477cc(v4, 31);
    Function_2005748(0x633u);
  }
  else
  {
    *(uchar *)(v4 + 10) = Function_22477cc(v4, 32);
    Function_2005748(0x634u);
  }
  v11 = *(uchar *)(*(uint *)(v4 + 876) + Function_2249c98(*(uchar *)(v4 + 20), v5)) == 0;
  v12 = *(uchar *)(v4 + 20);
  if ( v11 )
    *(uchar *)(*(uint *)(v4 + 876) + Function_2249c98(v12, v5)) = v6;
  else
    *(uchar *)(*(uint *)(v4 + 876) + Function_2249c98(v12, v5)) = 0;
  if ( *(uchar *)(*(uint *)(v4 + 876) + Function_2249c98(*(uchar *)(v4 + 20), v5)) )
  {
    if ( *(uchar *)(*(uint *)(v4 + 876) + Function_2249c98(*(uchar *)(v4 + 20), v5)) == 1 )
    {
      v14 = GetPkmnData(v9, 5u, 0);
      v17 = GetBaseExpPts(v14, 55);
    }
    else
    {
      v15 = GetPkmnData(v9, 5u, 0);
      v17 = GetBaseExpPts(v15, 45);
    }
    SetPkmnData((int)v9, 8, (ushort *)&v17);
    Function_207418c(v9);
  }
  else
  {
    v13 = GetPkmnData(v9, 5u, 0);
    v17 = GetBaseExpPts(v13, 50);
    SetPkmnData((int)v9, 8, (ushort *)&v17);
    Function_207418c(v9);
  }
  Function_2247b78(v4, v4 + 128);
  return Function_2247c64(v4, v4 + 112);
}

//----- (02249238) --------------------------------------------------------
uint __fastcall Function_2249238(int a1)
{
  int v1;

  v1 = a1;
  Function_201ada4_ClearTextBox(a1 + 144, 0);
  Function_201acf4(v1 + 144);
  return Function_201ff0c(4u, 0);
}

//----- (02249258) --------------------------------------------------------
uint __fastcall Function_2249258(int a1)
{
  int v1;
  int v2;
  uint result;
  int v4;

  v1 = a1;
  v2 = *(uchar *)(a1 + 15);
  result = (uint)(v2 << 30) >> 31;
  if ( result == 1 )
  {
    *(uchar *)(v1 + 15) = v2 & 0xFD;
    v4 = Function_2001504(*(uint *)(v1 + 312), 0x12u);
    Function_200dc9c(v4, 1);
    Function_201ada4_ClearTextBox(v4, 0);
    Function_201ad10(v4);
    Function_2013a3c(*(int **)(v1 + 316));
    result = Function_2001384(*(uint *)(v1 + 312), 0, 0);
  }
  return result;
}

//----- (022492A8) --------------------------------------------------------
int __fastcall Function_22492a8(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int *v5;
  ushort v6;
  ushort v7;
  int v8;
  int v9;
  int v10;

  v1 = a1;
  result = ((int (__fastcall *)(uint, int))dword_223B7A8[0])(*(uchar *)(a1 + 9), 1);
  v3 = 0;
  v10 = result;
  if ( result > 0 )
  {
    v4 = v1;
    do
    {
      v5 = GetAdrOfPkmnInParty(*(uint **)(v1 + 888), v3);
      v6 = GetPkmnData(v5, 0xA3u, 0);
      v7 = GetPkmnData(v5, 0xA4u, 0);
      v8 = ((int (__fastcall *)(uint, uint))dword_221F800[14992])(v6, v7);
      v9 = *(uint *)(v4 + 772);
      if ( v9 )
      {
        Function_2249c1c(v9, v8);
        if ( v3 == Function_2249c98(*(uchar *)(v1 + 20), *(uchar *)(v1 + 13))
          && *(uchar *)(v1 + 13) < (uint)*(uchar *)(v1 + 21) )
        {
          Function_2249c28(*(uint *)(v4 + 772), 1);
        }
        else
        {
          Function_2249c28(*(uint *)(v4 + 772), 0);
        }
      }
      result = v10;
      ++v3;
      v4 += 4;
    }
    while ( v3 < v10 );
  }
  return result;
}

//----- (0224933C) --------------------------------------------------------
int __fastcall Function_224933c(int a1, uint a2, int a3)
{
  int v3;
  uint v4;
  int v5;
  int v6;
  int v7;
  uint v8;
  int v9;
  int result;
  int v11;
  int v12;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_2248bb4(a1);
  Function_205e630(*(uchar *)(v3 + 9));
  v7 = v6;
  Function_205e630(*(uchar *)(v3 + 9));
  v9 = Function_205e6a8(v8);
  if ( Function_2030698(*(uint *)(v3 + 4), v7, v9) >= v4 )
  {
    if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v3 + 9)) )
    {
      result = 1;
      *(uchar *)(v3 + 16) = 1;
    }
    else
    {
      Function_2248860(v3 + 192);
      ((void (__fastcall *)(uint, uint, uint))dword_223BA14[134])(
        *(uint *)(v3 + 4),
        *(uchar *)(v3 + 9),
        v4);
      Function_2248c08(v3, v3 + 80, v11, v12);
      if ( v4 == 2 )
        Function_2248a8c(v3, *(uchar *)(v3 + 13));
      else
        Function_2248b50(v3, *(uchar *)(v3 + 13));
      *(uchar *)(v3 + 8) = 12;
      result = 0;
    }
  }
  else
  {
    Function_2248bec(v3);
    *(uchar *)(v3 + 10) = Function_22477cc(v3, v5);
    *(uchar *)(v3 + 8) = 15;
    result = 0;
  }
  return result;
}

//----- (022493CC) --------------------------------------------------------
int __fastcall Function_22493cc(int a1, uint a2, int a3)
{
  int v3;
  int v4;
  uint v5;
  int v6;
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
  int v20;
  int v21;
  int v22;
  uint v23;
  int result;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  ((void (__fastcall *)(uint, uint))dword_223B7A8[0])(*(uchar *)(a1 + 9), 0);
  if ( v6 == 5 )
    v3 = 2;
  else
    ErrorHandler();
  v7 = *(uchar *)(v4 + 21);
  Function_2249c9c(v7, v5);
  if ( Function_203608c() )
  {
    if ( v5 >= v7 )
    {
      Function_2248110(v4, 5u);
      Function_2249cac(*(uint *)(v4 + 332), *(uchar *)(v4 + 9), v3);
      ((void (__fastcall *)(uint, uint, int))dword_223BA14[134])(
        *(uint *)(v4 + 4),
        *(uchar *)(v4 + 9),
        50);
      v8 = Function_2249cac(*(uint *)(v4 + 332), *(uchar *)(v4 + 9), v3);
      v15 = LoadVariableAreaAdress_17(*(uint *)(v4 + 332));
      v17 = Function_205e5b4(*(uchar *)(v4 + 9), v3, v16);
      v19 = Function_205e5b4(*(uchar *)(v4 + 9), v3, v18);
      v20 = Function_205e6a8(v19);
      Function_20306e4(v15, v17, v20, (v8 + 1) & 0xFFFF);
      if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v4 + 9)) == 1 )
        *(uchar *)(v4 + 15) = *(uchar *)(v4 + 15) & 7 | 0x10;
    }
    else
    {
      Function_2249cf4(*(uint *)(v4 + 36), 5);
      v8 = *(uchar *)(v4 + 979 + v3);
      *(ushort *)(v4 + 982) -= 50;
      ++*(uchar *)(v4 + 979 + v3);
    }
  }
  else if ( v5 >= v7 )
  {
    Function_2249cf4(*(uint *)(v4 + 36), 5);
    v8 = *(uchar *)(v4 + 979 + v3);
    *(ushort *)(v4 + 982) -= 50;
    ++*(uchar *)(v4 + 979 + v3);
  }
  else
  {
    Function_2248110(v4, 5u);
    Function_2249cac(*(uint *)(v4 + 332), *(uchar *)(v4 + 9), v3);
    ((void (__fastcall *)(uint, uint, int))dword_223BA14[134])(
      *(uint *)(v4 + 4),
      *(uchar *)(v4 + 9),
      50);
    v8 = Function_2249cac(*(uint *)(v4 + 332), *(uchar *)(v4 + 9), v3);
    v9 = LoadVariableAreaAdress_17(*(uint *)(v4 + 332));
    v11 = Function_205e5b4(*(uchar *)(v4 + 9), v3, v10);
    v13 = Function_205e5b4(*(uchar *)(v4 + 9), v3, v12);
    v14 = Function_205e6a8(v13);
    Function_20306e4(v9, v11, v14, (v8 + 1) & 0xFFFF);
    if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(v4 + 9)) == 1 )
      *(uchar *)(v4 + 15) = *(uchar *)(v4 + 15) & 7 | 0x10;
  }
  Function_2248bb4(v4);
  Function_2248c08(v4, v4 + 80, v21, v22);
  v23 = Function_2027b50(*(ushort **)(v4 + 328));
  Function_2249dbc(v4 + 192, v23);
  result = Function_22477cc(v4, *((ushort *)&dword_224A0DC[6 * v3 / 4u] + v8));
  *(uchar *)(v4 + 10) = result;
  return result;
}

//----- (02249580) --------------------------------------------------------
int __fastcall Function_2249580(int a1)
{
  int v1;
  int result;
  int v3;
  int i;

  v1 = a1;
  result = ((int (__fastcall *)(uint, int))dword_223B7DC[0])(*(uchar *)(a1 + 9), 1);
  v3 = result;
  for ( i = 0; i < v3; ++i )
    result = Function_22495a8(v1, (uchar)i);
  return result;
}

//----- (022495A8) --------------------------------------------------------
int __fastcall Function_22495a8(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a1;
  v3 = a2;
  if ( *(uchar *)(*(uint *)(a1 + 880) + a2) == 1 )
    Function_2249bac(*(uint *)(a1 + 8 * a2 + 832), 1);
  result = 884;
  if ( *(uchar *)(*(uint *)(v2 + 884) + v3) == 1 )
    result = Function_2249bac(*(uint *)(v2 + 8 * v3 + 836), 1);
  return result;
}

//----- (022495E4) --------------------------------------------------------
int __fastcall Function_22495e4(int a1, int *a2, uint *a3)
{
  int *v3;
  uint *v4;
  int v5;
  int result;

  v3 = a2;
  v4 = a3;
  if ( ((int (__fastcall *)(uint))dword_223BA14[0])(*(uchar *)(a1 + 9)) == 1 )
    v5 = 64;
  else
    v5 = 96;
  *v3 = v5;
  result = 60;
  *v4 = 60;
  return result;
}

//----- (02249604) --------------------------------------------------------
uint __fastcall Function_2249604(int a1, uint *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  char *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint v24;
  int v25;
  int v26;
  int v27;
  uint *v29;
  int v30;

  v3 = a1;
  v29 = a2;
  v30 = a3;
  v4 = Function_201dbec(32, 0x64u);
  Function_2249a3c(v4);
  Function_20a7944();
  Function_200a784(0, 128, 0, 32, 0, 0x80u, 0, 0x20u, 0x64u);
  v6 = &byte_224A204;
  *(uint *)v3 = Function_20095c4(40, v3 + 4, 100, v5);
  v7 = 0;
  v8 = v3;
  do
  {
    *(uint *)(v8 + 300) = Function_2009714((uchar)*v6, v7, 0x64u);
    v7 = (int *)((char *)v7 + 1);
    ++v6;
    v8 += 4;
  }
  while ( (int)v7 < 4 );
  *(uint *)(v3 + 316) = Function_200985c(*(uint *)(v3 + 300), 151, 15, 1, 0, 1, 100);
  *(uint *)(v3 + 320) = Function_20098b8(*(uint *)(v3 + 304), 151, 39, 0, 0, 1, 4, 100);
  *(uint *)(v3 + 324) = Function_2009918(*(uint *)(v3 + 308), 151, 17, 1, 0, 2u, 100);
  *(uint *)(v3 + 328) = Function_2009918(*(uint *)(v3 + 312), 151, 16, 1, 0, 3u, 100);
  v11 = LoadFromNARC_8(16, 0x64u, v9, v10);
  v12 = Function_207ce78(0, 1u);
  *(uint *)(v3 + 332) = Function_2009a4c(*(uint *)(v3 + 300), (int)v11, v12, 0, 1, 1, 0x64u);
  v13 = Function_207ce78(0, 2u);
  *(uint *)(v3 + 336) = Function_20098b8(*(uint *)(v3 + 304), 16, v13, 0, 1, 1, 3, 100);
  v14 = Function_207cf40();
  *(uint *)(v3 + 340) = Function_2009bc4(*(uint *)(v3 + 308), (int)v11, v14, 0, 1, 2u, 0x64u);
  v15 = Function_207cf44();
  *(uint *)(v3 + 344) = Function_2009bc4(*(uint *)(v3 + 312), (int)v11, v15, 0, 1, 3u, 0x64u);
  Call_FS_CloseFile(v11);
  Function_2249a70(v3);
  v18 = LoadFromNARC_8(19, 0x64u, v16, v17);
  v19 = Function_2079fd0();
  *(uint *)(v3 + 368) = Function_20098b8(*(uint *)(v3 + 304), 19, v19, 0, 3, 1, 3, 100);
  v20 = Function_2079fd8();
  *(uint *)(v3 + 372) = Function_2009bc4(*(uint *)(v3 + 308), (int)v18, v20, 0, 3, 2u, 0x64u);
  v21 = Function_2079fe4();
  *(uint *)(v3 + 376) = Function_2009bc4(*(uint *)(v3 + 312), (int)v18, v21, 0, 3, 3u, 0x64u);
  v22 = 0;
  v23 = v3;
  do
  {
    if ( v22 == 3 )
    {
      if ( v30 )
        GetAdrOfPkmnInParty(v29, 3);
      else
        GetAdrOfPkmnInParty(v29, 0);
    }
    else
    {
      GetAdrOfPkmnInParty(v29, v22);
    }
    v24 = Function_2079d80();
    *(uint *)(v23 + 364) = Function_2009a4c(*(uint *)(v3 + 300), (int)v18, v24, 0, v22++ + 3, 1, 0x64u);
    v23 += 16;
  }
  while ( v22 < 4 );
  Call_FS_CloseFile(v18);
  v25 = 0;
  v26 = v3;
  do
  {
    Function_200a328(*(int **)(v26 + 316));
    ++v25;
    v26 += 16;
  }
  while ( v25 < 7 );
  v27 = 0;
  do
  {
    Function_200a5c8(*(int **)(v3 + 320));
    ++v27;
    v3 += 16;
  }
  while ( v27 < 4 );
  Function_201ff74(0x10u, 1);
  return Function_201ff0c(0x10u, 1);
}

//----- (022498A4) --------------------------------------------------------
int __fastcall Function_22498a4(int *a1, int a2, int a3, int a4, uint a5, int a6, int a7, char a8)
{
  int *v8;
  int v9;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  short v19;
  int v20;
  int v21;
  int v22;
  char v23;

  v8 = a1;
  Function_20093b4((int)&v23, a2, a3, a4, a4, -1, -1, 0, a7, a1[75], a1[76], a1[77], a1[78], 0, 0);
  v11 = *v8;
  v12 = &v23;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 4096;
  v17 = 4096;
  v18 = 4096;
  v19 = 0;
  v20 = a6;
  if ( a8 )
    v21 = 2;
  else
    v21 = 1;
  v22 = 100;
  if ( a8 == 1 )
    v14 += 786432;
  v9 = Function_2021aa0((uint **)&v11);
  Function_2021cc8(v9, 1);
  Function_2021ce4(v9, 4096);
  Function_2021d6c(v9, a5);
  return v9;
}

//----- (02249954) --------------------------------------------------------
int *__fastcall Function_2249954(int **a1)
{
  int **v1;
  uint v2;
  uint v3;
  uint v4;

  v1 = a1;
  v2 = 0;
  do
  {
    Function_200a4e4(v1[4 * v2 + 79]);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 < 7 );
  v3 = 0;
  do
  {
    Function_200a6dc(v1[4 * v3 + 80]);
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 < 4 );
  v4 = 0;
  do
  {
    Function_2009754(v1[v4 + 75]);
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 < 4 );
  Function_2021964(*v1);
  Function_200a878();
  Function_201e958();
  return Function_201f8b4();
}

//----- (022499BC) --------------------------------------------------------
int __fastcall Function_22499bc(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = (int *)Function_2009dc8(*(uint *)(a1 + 300), 1);
  v5 = Function_207ce78(v3, 1u);
  Function_2009968(*(int **)(v2 + 300), v4, 16, v5, 0, 100);
  return Function_200a4c0(v4);
}

//----- (022499FC) --------------------------------------------------------
int __fastcall Function_22499fc(int a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;

  v2 = a1;
  v3 = a2;
  v4 = (int *)Function_2009dc8(*(uint *)(a1 + 304), 1);
  v5 = Function_207ce78(v3, 2u);
  Function_20099d4(*(int **)(v2 + 304), v4, 16, v5, 0, 100);
  return Function_200a6b8(v4);
}

//----- (02249A3C) --------------------------------------------------------
int Function_2249a3c()
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 32;
  v2 = 1024;
  v3 = 1024;
  v4 = 100;
  Function_201e88c(&v1, 16, 16);
  Function_201f834(8, 0x64u);
  Function_201e994();
  return Function_201f8e4();
}

//----- (02249A70) --------------------------------------------------------
uint __fastcall Function_2249a70(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = a1;
  v5 = LoadFromNARC_8(20, 0x64u, a3, a4);
  v6 = Function_2081930();
  v4[87] = (int)Function_2009a4c(v4[75], (int)v5, v6, 0, 2, 1, 0x64u);
  v7 = Function_2081934();
  v4[88] = (int)Function_20098b8(v4[76], 20, v7, 0, 2, 1, 3, 100);
  v8 = Function_2081938();
  v4[89] = (int)Function_2009bc4(v4[77], (int)v5, v8, 0, 2, 2u, 0x64u);
  v9 = Function_208193c();
  v4[90] = (int)Function_2009bc4(v4[78], (int)v5, v9, 0, 2, 3u, 0x64u);
  return Call_FS_CloseFile(v5);
}

//----- (02249B1C) --------------------------------------------------------
uchar *__fastcall Function_2249b1c(int *a1, int a2, int a3, int a4, uint a5, short a6, short a7, int a8)
{
  int *v8;
  int v9;
  int v10;
  int v11;
  uchar *v12;
  uchar *v13;
  int v15;
  int v16;
  int v17;

  v17 = a4;
  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v12 = (uchar *)malloc(0x64u, 8);
  v13 = v12;
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v12[7] = 0;
  *(ushort *)v12 = a6;
  *((ushort *)v12 + 1) = a7;
  *((uint *)v12 + 1) = Function_22498a4(v8, v9, v10, v11, a5, 0, a8, 0);
  v15 = a6 << 12;
  v16 = a7 << 12;
  Function_2021c50(*((uint **)v13 + 1), &v15);
  return v13;
}

//----- (02249B8C) --------------------------------------------------------
int __fastcall Function_2249b8c(int a1)
{
  int v1;

  v1 = a1;
  if ( a1 )
  {
    Function_2021bd4(*(uint *)(a1 + 4));
    free(v1);
  }
  else
  {
    ErrorHandler();
  }
  return 0;
}

//----- (02249BAC) --------------------------------------------------------
uint __fastcall Function_2249bac(int a1, int a2)
{
  return Function_2021cac(*(uint *)(a1 + 4), a2);
}

//----- (02249BB8) --------------------------------------------------------
int __fastcall Function_2249bb8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v10;
  int v11;
  int v12;

  v3 = a1;
  v4 = *(uint *)(a1 + 4);
  v5 = a2;
  v6 = a3;
  Function_2021d28();
  v8 = v7[1];
  v10 = *v7;
  v11 = v8;
  v12 = v7[2];
  v10 = v5 << 12;
  v11 = v6 << 12;
  return Function_2021c50(*(uint **)(v3 + 4), &v10);
}

//----- (02249BEC) --------------------------------------------------------
int __fastcall Function_2249bec(int a1, uint a2)
{
  int v2;
  uint v3;

  v2 = a1;
  v3 = a2;
  Function_2021ce4(*(uint *)(a1 + 4), 4096);
  return Function_2021d6c(*(uint *)(v2 + 4), v3);
}

//----- (02249C08) --------------------------------------------------------
int __fastcall Function_2249c08(int a1)
{
  int v1;
  char v2;

  v1 = a1;
  v2 = Function_2079fc4();
  return Function_2021f24(*(uint *)(v1 + 4), v2);
}

//----- (02249C1C) --------------------------------------------------------
void __fastcall Function_2249c1c(int a1)
{
  int v1;

  v1 = *(uint *)(a1 + 4);
  JUMPOUT(&dword_221F800[14966]);
}

//----- (02249C28) --------------------------------------------------------
int __fastcall Function_2249c28(short *a1, int a2)
{
  return ((int (__fastcall *)(uint, uint, uint, int))dword_221F800[14977])(*((uint *)a1 + 1), *a1, a1[1], a2);
}

//----- (02249C40) --------------------------------------------------------
int __fastcall Function_2249c40(int a1)
{
  return Function_2021fd0(*(uint *)(a1 + 4));
}

//----- (02249C4C) --------------------------------------------------------
char *__fastcall Function_2249c4c(int a1, char a2)
{
  return Function_2021e80(*(uint *)(a1 + 4), a2);
}

//----- (02249C58) --------------------------------------------------------
ushort *__fastcall Function_2249c58(ushort *result, short a2, short a3)
{
  *result = a2;
  result[1] = a3;
  return result;
}

//----- (02249C60) --------------------------------------------------------
int __fastcall Function_2249c60(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a1;
  v5 = a3;
  Function_2249bec(a1, 0xBu);
  Function_2249bb8(v4, v3, v5);
  Function_2249bac(v4, 1);
  Function_2005748(0x5E3u);
  return Function_2005748(0x656u);
}

//----- (02249C98) --------------------------------------------------------
int __fastcall Function_2249c98(int a1, int a2)
{
  return a2;
}

//----- (02249C9C) --------------------------------------------------------
uint __fastcall Function_2249c9c(uint a1, uint a2)
{
  if ( a2 >= a1 )
    a2 = (a2 - a1) & 0xFF;
  return a2;
}

//----- (02249CAC) --------------------------------------------------------
int __fastcall Function_2249cac(int a1, uint a2, int a3)
{
  uint v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v3 = a2;
  v4 = a3;
  v5 = LoadVariableAreaAdress_17(a1);
  v7 = Function_205e5b4(v3, v4, v6);
  v9 = Function_205e5b4(v3, v4, v8);
  v10 = Function_205e6a8(v9);
  return (uchar)Function_2030698(v5, v7, v10);
}

//----- (02249CE0) --------------------------------------------------------
int __fastcall Function_2249ce0(int result, uint a2)
{
  if ( result != -1 )
    result = Function_2005748(a2);
  return result;
}

//----- (02249CF4) --------------------------------------------------------
uint __fastcall Function_2249cf4(int a1, uint a2)
{
  int v2;
  uint v3;
  int v4;

  v2 = a1;
  v3 = a2;
  v4 = Function_203608c();
  Function_2032ee8(v4 ^ 1);
  return Function_200b498(v2, v3);
}

//----- (02249D14) --------------------------------------------------------
int *__fastcall Function_2249d14(uint *a1, int a2, int a3)
{
  int v3;
  uint v4;
  int *result;
  uint v6;
  uint *v7;
  int v8;

  v7 = a1;
  v3 = a2;
  v4 = 0;
  v8 = (int)*(&off_224A218 + 2 * a3);
  result = dword_224A21C;
  v6 = dword_224A21C[2 * a3];
  if ( v6 )
  {
    do
    {
      Function_201a8d4(v7, v3 + 16 * v4, (uchar *)(v8 + 8 * v4));
      Function_201ada4_ClearTextBox(v3 + 16 * v4, 0);
      result = (int *)((v4 + 1) << 24);
      v4 = (v4 + 1) & 0xFF;
    }
    while ( v4 < v6 );
  }
  return result;
}

//----- (02249D5C) --------------------------------------------------------
int *__fastcall Function_2249d5c(int a1, int a2)
{
  int v2;
  int *result;
  uint v4;
  uint v5;

  v2 = a1;
  result = dword_224A21C;
  v4 = dword_224A21C[2 * a2];
  v5 = 0;
  if ( v4 )
  {
    do
    {
      Function_201a8fc(v2 + 16 * v5);
      result = (int *)((v5 + 1) << 16);
      v5 = (v5 + 1) & 0xFFFF;
    }
    while ( v5 < v4 );
  }
  return result;
}

//----- (02249D84) --------------------------------------------------------
char *__fastcall Function_2249d84(uint *a1, int a2)
{
  int v2;
  uint *v3;
  int v4;

  v2 = a2;
  v3 = a1;
  v4 = Function_201c290(a2);
  Function_200daa4(v3, v4, 1015, 11, 0, 100);
  return Function_200dc48(v2, 1, 1015, 0xBu);
}

//----- (02249DBC) --------------------------------------------------------
int __fastcall Function_2249dbc(int a1, uchar a2)
{
  uchar v2;
  uint **v3;
  int v4;

  v2 = a2;
  v3 = (uint **)a1;
  v4 = Function_201c290(a1);
  Function_200dd0c(*v3, v4, 985, 10, v2, 100);
  Function_201ada4_ClearTextBox((int)v3, 15);
  Function_200e060((int)v3, 1, 985, 0xAu);
  return Function_201a9a4((int)v3);
}

