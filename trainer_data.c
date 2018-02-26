//----- (02079160) --------------------------------------------------------
int __fastcall LoadFromNarc_PlWazaTbl(int a1, int a2)
{
  return LoadFromNARC(a2, 9, a1);
}

//----- (02079170) --------------------------------------------------------
ushort *__fastcall LoadNPCTrainerData(uint *a1, int a2, uint a3, int a4)
{
  int v4
  int v5
  uint *v6
  int v7
  ushort *v8
  int v9
  char *v10
  uint *v11
  int v12
  int v13
  int v14
  int v15
  ushort *v16
  int v17
  uint *v19
  uint v20
  uint *v21
  ushort *v22
  ushort **v23
  char v24
  char v25
  int v26
  int v27

  v27 = a4;
  v20 = a3;
  v19 = a1;
  v4 = a2;
  v23 = (ushort **)LoadFromMsgNARC(1, 26, 618, a3);
  v5 = LoadVariableAreaAdress_a_2(v4);
  v6 = v19;
  v22 = (ushort *)Function_2027870(v5);
  v7 = 0;
  v21 = v19;
  v8 = v19 + 15;
  do
  {
    v9 = v6[6];
    if ( v9 )
    {
      LoadFromNARC_Trdata(v9, (int)&v24);
      v10 = &v24;
      v11 = v21 + 10;
      v12 = 6;
      do
      {
        v13 = *(uint *)v10;
        v14 = *((uint *)v10 + 1);
        v10 += 8;
        *v11 = v13;
        v11[1] = v14;
        v11 += 2;
        --v12;
      }
      while ( v12 );
      *v11 = *(uint *)v10;
      if ( v25 == 63 )
      {
        Function_20021b0(v8, v22);
      }
      else
      {
        v16 = Function_200b1ec_CallMsgDecrypt(v23, v6[6]);
        Function_2023df0((int)v16, v8, 8u);
        Function_20237bc_FreeMsg((int)v16, v17);
      }
      LoadNPCTrainerPokemon((int)v19, v7, v20, v15);
    }
    ++v7;
    ++v6;
    v8 += 26;
    v21 += 13;
  }
  while ( v7 < 4 );
  *v19 |= v26;
  return Function_200b190((ushort *)v23);
}

//----- (02079220) --------------------------------------------------------
void __fastcall GetNPCTrainerData(int a1, uint a2)
{
  uint v2
  int v3
  char v4
  char v5[8]

  v2 = a2;
  switch ( (uchar)LoadFromNARC_Trdata(a1, (int)&v4) )
  {
    case 0u:
    case 1u:
    case 2u:
    case 3u:
    case 8u:
    case 9u:
      return;
    case 4u:
    case 5u:
    case 6u:
    case 7u:
      v3 = *(ushort *)&v5[2 * (v2 - 4)];
      break;
  }
}

//----- (02079280) --------------------------------------------------------
int __fastcall LoadNPCTrainerTbl(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int *v10
  int v11
  int v13
  int *v14
  ushort v15[2]
  ushort v16

  v4 = a1;
  v13 = 0;
  v5 = a2;
  v6 = a3;
  v7 = LoadFromNARC_7(59, 0, a3, a4);
  LoadFromNARC_3((int)v15, 137, 0, 2 * v4, 2);
  v10 = LoadFromNARC_8(59, v6, v8, v9);
  v11 = v15[0];
  v14 = v10;
  if ( v15[0] != v7 )
  {
    while ( 1 )
    {
      Function_2006dc8((int)v14, 0, v11, 4, (int)&v15[1]);
      if ( v15[1] == v4 && v16 == v5 )
        break;
      if ( v15[1] == v4 )
      {
        v15[0] += 4;
        v11 = v15[0];
        if ( v15[0] != v7 )
          continue;
      }
      goto LABEL_7;
    }
    v13 = 1;
  }
LABEL_7:
  Call_FS_CloseFile(v14);
  return v13;
}

//----- (020792F8) --------------------------------------------------------
int __fastcall LoadNPCTrainerTbl_2(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v8
  int *v9
  int v10
  int v11
  int result
  ushort *v13
  int v14
  int *v15
  ushort v16[2]
  ushort v17
  int v18

  v18 = a4;
  v4 = a1;
  v5 = a2;
  v13 = (ushort *)a3;
  v14 = a4;
  v6 = LoadFromNARC_7(59, 0, a3, a4);
  LoadFromNARC_3((int)v16, 137, 0, 2 * v4, 2);
  v9 = LoadFromNARC_8(59, v14, v7, v8);
  v10 = v16[0];
  v15 = v9;
  if ( v16[0] != v6 )
  {
    while ( 1 )
    {
      Function_2006dc8((int)v15, 0, v10, 4, (int)&v16[1]);
      if ( v16[1] == v4 && v17 == v5 )
        break;
      v16[0] += 4;
      v10 = v16[0];
      if ( v16[0] == v6 )
        goto LABEL_6;
    }
    Function_200af20(26, 0x269u, (uint)v16[0] >> 2, v14, v13);
  }
LABEL_6:
  Call_FS_CloseFile(v15);
  result = v16[0];
  if ( v16[0] == v6 )
    result = Function_20237e8((int)v13, v11);
  return result;
}

//----- (0207938C) --------------------------------------------------------
int __fastcall LoadFromNARC_Trdata(int a1, int a2)
{
  return LoadFromNARC(a2, 57, a1);
}

//----- (0207939C) --------------------------------------------------------
int __fastcall LoadFromNARC_Trpoke(int a1, int a2)
{
  return LoadFromNARC(a2, 58, a1);
}

//----- (020793AC) --------------------------------------------------------
int __fastcall Function_20793ac(int a1)
{
  return *((uchar *)Unknown_20f0714 + a1);
}

//----- (020793B8) --------------------------------------------------------
int __fastcall LoadNPCTrainerPokemon(int a1, int a2, uint a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  ushort *v8
  ushort v9
  int i
  uchar v11
  int v12
  ushort v13
  int v14
  int j
  uchar v16
  ushort *v17
  int v18
  int v19
  ushort *v20
  ushort v21
  int k
  uchar v23
  int v24
  ushort v25
  int v26
  int l
  uchar v28
  ushort *v29
  int v30
  int v31
  uint v33
  int v34
  int v35
  int v36
  int v37
  int v38
  int v39
  int v40
  int v41
  int v42
  int v43
  int v44
  ushort *v45
  int v46
  int v47
  ushort *v48
  int *v49
  int v50
  int v51
  int v52
  int v53
  char v54
  char v55
  char v56
  char v57
  int v58

  v58 = a4;
  v4 = a2;
  v5 = a1;
  v33 = a3;
  v6 = 4 * a2;
  v50 = GetPRNGSeed();
  ZeroFillPkmnPartyStructure(*(int **)(v5 + v6 + 4), 6);
  v53 = malloc(v33, 108);
  v49 = AllocPkmnData(v33);
  LoadFromNARC_Trpoke(*(uint *)(v5 + v6 + 24), v53);
  v7 = 52 * v4;
  if ( Function_20793ac(*(uchar *)(v5 + 52 * v4 + 41)) == 1 )
    v34 = 120;
  else
    v34 = 136;
  switch ( *(uchar *)(v5 + v7 + 40) )
  {
    case 0:
      v52 = 0;
      if ( (int)*(uchar *)(v5 + v7 + 43) > 0 )
      {
        v8 = (ushort *)v53;
        v43 = v5 + v6;
        do
        {
          v9 = v8[2];
          v57 = (v9 & 0xFC00) >> 10;
          v42 = v9 & 0x3FF;
          v51 = *(uint *)(v43 + 24) + v42 + *v8 + v8[1];
          SetPRNGSeed(v51);
          for ( i = 0; i < *(uchar *)(v5 + v7 + 41); ++i )
            v51 = PRNG();
          v11 = s32_div_f(31 * *v8, 255);
          InitPkmnData(v49, v42, v8[1], v11, 1, (v51 << 8) + v34, 2, 0);
          SetPokeballSeal(v8[3], (int)v49, v33, v12);
          SetPkmnData((int)v49, 112, (ushort *)&v57);
          CopyPkmnDataToParty(*(uint **)(v43 + 4), v49);
          v8 += 4;
          ++v52;
        }
        while ( v52 < *(uchar *)(v5 + v7 + 43) );
      }
      break;
    case 1:
      v36 = 0;
      if ( (int)*(uchar *)(v5 + v7 + 43) > 0 )
      {
        v45 = (ushort *)v53;
        v44 = v5 + v6;
        do
        {
          v13 = v45[2];
          v56 = (v13 & 0xFC00) >> 10;
          v41 = v13 & 0x3FF;
          v14 = *(uint *)(v44 + 24) + v41 + *v45 + v45[1];
          SetPRNGSeed(v14);
          for ( j = 0; j < *(uchar *)(v5 + v7 + 41); ++j )
            v14 = PRNG();
          v16 = s32_div_f(31 * *v45, 255);
          InitPkmnData(v49, v41, v45[1], v16, 1, (v14 << 8) + v34, 2, 0);
          v17 = v45;
          v18 = 0;
          do
          {
            Call_SetPkmnDataMove((int)v49, v17[3], (uchar)v18++);
            ++v17;
          }
          while ( v18 < 4 );
          SetPokeballSeal(v45[7], (int)v49, v33, v19);
          SetPkmnData((int)v49, 112, (ushort *)&v56);
          CopyPkmnDataToParty(*(uint **)(v44 + 4), v49);
          v45 += 8;
          ++v36;
        }
        while ( v36 < *(uchar *)(v5 + v7 + 43) );
      }
      break;
    case 2:
      v37 = 0;
      if ( (int)*(uchar *)(v5 + v7 + 43) > 0 )
      {
        v20 = (ushort *)v53;
        v46 = v5 + v6;
        do
        {
          v21 = v20[2];
          v55 = (v21 & 0xFC00) >> 10;
          v40 = v21 & 0x3FF;
          v35 = *(uint *)(v46 + 24) + v40 + *v20 + v20[1];
          SetPRNGSeed(v35);
          for ( k = 0; k < *(uchar *)(v5 + v7 + 41); ++k )
            v35 = PRNG();
          v23 = s32_div_f(31 * *v20, 255);
          InitPkmnData(v49, v40, v20[1], v23, 1, (v35 << 8) + v34, 2, 0);
          SetPkmnData((int)v49, 6, v20 + 3);
          SetPokeballSeal(v20[4], (int)v49, v33, v24);
          SetPkmnData((int)v49, 112, (ushort *)&v55);
          CopyPkmnDataToParty(*(uint **)(v46 + 4), v49);
          v20 += 5;
          ++v37;
        }
        while ( v37 < *(uchar *)(v5 + v7 + 43) );
      }
      break;
    case 3:
      v38 = 0;
      if ( (int)*(uchar *)(v5 + v7 + 43) > 0 )
      {
        v48 = (ushort *)v53;
        v47 = v5 + v6;
        do
        {
          v25 = v48[2];
          v54 = (v25 & 0xFC00) >> 10;
          v39 = v25 & 0x3FF;
          v26 = *(uint *)(v47 + 24) + v39 + *v48 + v48[1];
          SetPRNGSeed(v26);
          for ( l = 0; l < *(uchar *)(v5 + v7 + 41); ++l )
            v26 = PRNG();
          v28 = s32_div_f(31 * *v48, 255);
          InitPkmnData(v49, v39, v48[1], v28, 1, (v26 << 8) + v34, 2, 0);
          SetPkmnData((int)v49, 6, v48 + 3);
          v29 = v48;
          v30 = 0;
          do
          {
            Call_SetPkmnDataMove((int)v49, v29[4], (uchar)v30++);
            ++v29;
          }
          while ( v30 < 4 );
          SetPokeballSeal(v48[8], (int)v49, v33, v31);
          SetPkmnData((int)v49, 112, (ushort *)&v54);
          CopyPkmnDataToParty(*(uint **)(v47 + 4), v49);
          v48 += 9;
          ++v38;
        }
        while ( v38 < *(uchar *)(v5 + v7 + 43) );
      }
      break;
    default:
      break;
  }
  free(v53);
  free((int)v49);
  return SetPRNGSeed(v50);
}