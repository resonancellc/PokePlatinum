//----- (020067E8) --------------------------------------------------------
uint *__fastcall AllocAndInitOverlayData(int *a1, int a2, uint a3)
{
  int *v3
  int v4
  int v5
  uint *v6
  int *v7
  int v8
  int v9
  int v10

  v3 = a1;
  v4 = a2;
  v5 = malloc(a3, 40);
  v6 = (uint *)v5;
  v7 = (int *)v5;
  v8 = *v3;
  v9 = v3[1];
  v3 += 2;
  *v7 = v8;
  v7[1] = v9;
  v7 += 2;
  v10 = v3[1];
  *v7 = *v3;
  v7[1] = v10;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = v4;
  v6[7] = 0;
  v6[8] = 0;
  v6[9] = 0;
  return v6;
}

//----- (02006814) --------------------------------------------------------
int __fastcall Call_free2(int a1)
{
  return free(a1);
}

//----- (0200681C) --------------------------------------------------------
int __fastcall MallocSomeDataAndStorePtrInOverlayData1c(int a1, int a2, uint a3)
{
  int v3
  int result

  v3 = a1;
  result = malloc(a3, a2);
  *(uint *)(v3 + 28) = result;
  return result;
}

//----- (0200682C) --------------------------------------------------------
int __fastcall LoadOverlayData1c(int a1)
{
  return *(uint *)(a1 + 28);
}

//----- (02006830) --------------------------------------------------------
int __fastcall FreeSomeDataAndStore0InOverlayData1c(int a1)
{
  int v1
  int result

  v1 = a1;
  free(*(uint *)(a1 + 28));
  result = 0;
  *(uint *)(v1 + 28) = 0;
  return result;
}

//----- (02006840) --------------------------------------------------------
int __fastcall LoadPtrToOverWorldDataIn18(int a1)
{
  return *(uint *)(a1 + 24);
}

//----- (02006844) --------------------------------------------------------
int __fastcall CallOverlayDataJumpTable(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v8
  int result

  v4 = a1;
  switch ( (uchar)*(uint *)(a1 + 16) )
  {
    case 0u:
      v5 = *(uint *)(a1 + 12);
      if ( v5 != -1 )
        LoadOverlay(v5, 2, a3, a4);
      *(uint *)(v4 + 16) = 1;
      goto callOverlayDataFirstFunction;
    case 1u:
callOverlayDataFirstFunction:
      if ( (*(int (__fastcall **)(int, int))v4)(v4, v4 + 20) == 1 )
      {
        *(uint *)(v4 + 16) = 2;
        *(uint *)(v4 + 20) = 0;
      }
      goto endCallOverlayDataJumpTable;
    case 2u:
      if ( (*(int (**)(void))(a1 + 4))() == 1 )
      {
        *(uint *)(v4 + 16) = 3;
        *(uint *)(v4 + 20) = 0;
      }
      goto endCallOverlayDataJumpTable;
    case 3u:
      if ( (*(int (**)(void))(a1 + 8))() != 1 )
        goto endCallOverlayDataJumpTable;
      v8 = *(uint *)(v4 + 12);
      if ( v8 != -1 )
        UnloadOverlay(v8, -1, v6, v7);
      result = 1;
      break;
    default:
endCallOverlayDataJumpTable:
      result = 0;
      break;
  }
  return result;
}