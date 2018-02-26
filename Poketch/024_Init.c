//----- (02253CE0) --------------------------------------------------------
uint __fastcall Function_24_2253ce0(uint *a1)
{
  uint *v1;
  int v2;
  int v3;
  int *v4;
  uint result;

  v1 = a1;
  Function_2017fc8(3, 8, 98304);
  GXS_SetGraphicsMode(0);
  GX_SetBankForSubBG(128);
  GX_SetBankForSubOBJ(256);
  REG_DISPCNT_SUB = REG_DISPCNT_SUB & 0xFFCFFFEF | 0x10;
  Function_20183c4(v1, 4u, dword_2253DB8, 0);
  v4 = LoadFromNARC_8(12, 8u, v2, v3);
  Function_20070e8((int)v4, 0xAu, v1, 4u, 0, 0, 1, 8);
  Function_200710c((int)v4, 0xBu, v1, 4u, 0, 0, 1, 8);
  Function_2007130((int)v4, 0xCu, 4u, 0, 32, 8);
  Call_FS_CloseFile(v4);
  REG_DISPCNT_SUB &= 0xFFFF1FFF;
  result = ((uint)&REG_DISPCNT_SUB >> 18) | REG_DISPCNT_SUB & 0xFFFFE0FF;
  REG_DISPCNT_SUB = ((uint)&REG_DISPCNT_SUB >> 18) | REG_DISPCNT_SUB & 0xFFFFE0FF;
  return result;
}

//----- (02253DA4) --------------------------------------------------------
uint __fastcall Function_24_2253da4(int a1)
{
  Function_2019044(a1, 4);
  return Function_201807c(8);
}

