//----- (021D0D80) --------------------------------------------------------
int __fastcall Function_21d0d80(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( *(uint *)(a1 + 2876) )
    ErrorHandler();
  *(uint *)(v1 + 2876) = malloc(0xCu, 28);
  MI_CpuFill8(*(ushort **)(v1 + 2876), 0, 0x1Cu);
  result = *(uint *)(v1 + 2876);
  *(uint *)(result + 20) = *(uchar *)(v1 + 2857);
  return result;
}

//----- (021D0DBC) --------------------------------------------------------
int __fastcall Function_21d0dbc(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  uint v8;
  BOOL v9;
  int v10;
  uint *v11;
  int v12;
  uint v13;
  ushort *v14;
  int v15;
  int v16;
  int result;

  v1 = a1;
  v2 = *(int **)(a1 + 2876);
  v3 = GetAdrOfPkmnInParty(**(uint ***)(a1 + 1444), *(uchar *)(a1 + 2857));
  v6 = *v2;
  v7 = v3;
  if ( (uint)*v2 <= 0xA )
    JUMPOUT(__CS__, (char *)&off_21D0DE8 + *((short *)&off_21D0DE8 + v6) + 2);
  switch ( (uchar)v4 )
  {
    case 0:
      v8 = GetPkmnData(v3, 5u, 0);
      v2[3] = v8;
      switch ( v8 )
      {
        case 0x1DFu:
          goto LABEL_10;
        case 0x1E7u:
          Function_2077a00((int)v7, 487, 479, v9);
          v2[2] = 65;
          v2[4] = 0;
          break;
        case 0x1ECu:
          Function_2077acc((int)v7, 1, 492, v9);
          v2[2] = 35;
          v2[4] = 1;
          break;
        default:
LABEL_10:
          ErrorHandler();
          break;
      }
      v10 = GetOverWorldData_VariableAreaAdresses(*(uint *)(*(uint *)(v1 + 1444) + 28));
      v11 = (uint *)LoadPokedexDataAdress(v10);
      Function_202736c(v11, v7);
      ++*v2;
      goto LABEL_27;
    case 1:
    case 2:
      *v2 = v6 + 1;
      goto LABEL_27;
    case 3:
      Function_21d0f88(v1);
      ++*v2;
      goto LABEL_27;
    case 4:
      Function_201ff0c(1u, 1);
      Function_21d1028(v2);
      ++*v2;
      goto LABEL_27;
    case 5:
      v12 = v2[1] + 1;
      v2[1] = v12;
      v13 = v2[2];
      if ( v12 == v13 )
        v13 = Function_2082da8(v1, *(uchar *)(v1 + 2857), v4, v5);
      Function_21d10e8(v13);
      if ( v2[1] > v2[2] && !Function_2014710(v2[6]) )
        ++*v2;
      goto LABEL_27;
    case 6:
      Function_21d0fb8(v1);
      ++*v2;
      goto LABEL_27;
    case 7:
      Function_2077e3c(v3);
      ++*v2;
      goto LABEL_27;
    case 8:
      if ( !Function_200598c() )
        ++*v2;
      goto LABEL_27;
    case 9:
      v14 = Function_200b1ec_CallMsgDecrypt(*(ushort ***)(v1 + 1692), 0xCAu);
      Function_2076b10_Dummy();
      Function_200b5cc(*(int **)(v1 + 1696), 0, v15);
      Function_200c388(*(uint **)(v1 + 1696), *(uint *)(v1 + 1700), (int)v14);
      Function_20237bc_FreeMsg((int)v14, v16);
      Function_2082708(v1, 0xFFFFFFFF, 1);
      ++*v2;
      goto LABEL_27;
    case 0xA:
      if ( Function_201d724(*(uchar *)(v1 + 2856)) )
        goto LABEL_27;
      Function_21d0f70(v1);
      *(uchar *)(*(uint *)(v1 + 1444) + 35) = 0;
      result = 1;
      break;
    default:
LABEL_27:
      result = 0;
      break;
  }
  return result;
}

//----- (021D0F70) --------------------------------------------------------
int __fastcall Function_21d0f70(int a1)
{
  int v1;
  int result;

  v1 = a1;
  free(*(uint *)(a1 + 2876));
  result = 2876;
  *(uint *)(v1 + 2876) = 0;
  return result;
}

//----- (021D0F88) --------------------------------------------------------
int *__fastcall Function_21d0f88(int a1)
{
  int v1;

  v1 = a1;
  Function_207ea74(a1, 0);
  Function_21d0fdc(*(uint *)(v1 + 2876));
  return G2x_SetBlendAlpha_((int *)&REG_BLDCNT, 0, 63, 31, 0);
}

//----- (021D0FB8) --------------------------------------------------------
short *__fastcall Function_21d0fb8(int a1)
{
  int v1;
  short *result;

  v1 = a1;
  Function_21d110c(*(uint *)(a1 + 2876));
  Function_207ea74(v1, 1);
  result = &REG_BLDCNT;
  REG_BLDCNT = 0;
  return result;
}

//----- (021D0FDC) --------------------------------------------------------
int *__fastcall Function_21d0fdc(int a1)
{
  int v1;
  int *v2;
  int v3;
  int v4;

  v1 = a1;
  Function_2014000();
  v2 = (int *)malloc(0xCu, 18432);
  v3 = Function_2014014((int)Function_21d1128, (int)Function_21d114c, v2, 0x4800u, 1, 0xCu);
  *(uint *)(v1 + 24) = v3;
  v4 = Function_2014784(v3);
  return Function_20206bc(4096, 3686400, v4);
}

//----- (021D1028) --------------------------------------------------------
int __fastcall Function_21d1028(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1;
  v2 = Call2_LoadFromNARC_2(185, *(uint *)(a1 + 16), 0xCu);
  Function_20144cc(*(uint **)(v1 + 24), v2, 10, 1);
  v3 = *(uint *)(v1 + 12);
  if ( v3 == 487 )
  {
    Function_20146f4(*(int **)(v1 + 24), 0, (void (__fastcall *)(int))Function_21d10b0, v1);
    Function_20146f4(*(int **)(v1 + 24), 1, (void (__fastcall *)(int))Function_21d10b0, v1);
    Function_20146f4(*(int **)(v1 + 24), 2, (void (__fastcall *)(int))Function_21d10b0, v1);
    result = Function_2005748(0x553u);
  }
  else
  {
    result = 492;
    if ( v3 == 492 )
    {
      Function_20146f4(*(int **)(v1 + 24), 0, (void (__fastcall *)(int))Function_21d10b0, v1);
      Function_20146f4(*(int **)(v1 + 24), 1, (void (__fastcall *)(int))Function_21d10b0, v1);
      result = Function_2005748(0x554u);
    }
  }
  return result;
}

//----- (021D10B0) --------------------------------------------------------
int __fastcall Function_21d10b0(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = a1;
  v2 = Function_2014764();
  *(uint *)(v1 + 40) = dword_21D1170[2 * *(uint *)(v2 + 20)] + *(uint *)(**(uint **)(v1 + 32) + 4);
  result = dword_21D1170[2 * *(uint *)(v2 + 20) + 1] + *(uint *)(**(uint **)(v1 + 32) + 8);
  *(uint *)(v1 + 44) = result;
  return result;
}

//----- (021D10E8) --------------------------------------------------------
int Function_21d10e8()
{
  int v0;

  Call_G3X_Reset();
  v0 = Function_201469c();
  if ( v0 > 0 )
    Call_G3X_Reset();
  Function_20146c0();
  Function_20241bc(1, 0);
  return v0;
}

//----- (021D110C) --------------------------------------------------------
uint __fastcall Function_21d110c(int a1)
{
  int v1;
  int v2;

  v1 = a1;
  v2 = Function_2014730(*(uint *)(a1 + 24));
  Function_201411c(*(uint ***)(v1 + 24));
  return free(v2);
}

//----- (021D1128) --------------------------------------------------------
int Function_21d1128()
{
  int v0;

  v0 = Function_20a5a2c();
  if ( !v0 )
    ErrorHandler();
  Function_20145b4(v0);
  return 8 * v0 & 0x7FFFF;
}

//----- (021D114C) --------------------------------------------------------
int Function_21d114c()
{
  int v0;

  v0 = Function_20a5a3c();
  if ( !v0 )
    ErrorHandler();
  Function_20145f4(v0);
  return 8 * v0 & 0x7FFFF;
}

