//----- (02017850) --------------------------------------------------------
int *__fastcall InitMainAreasOfMemory(int a1, int a2, int a3, int a4)
{
  int i
  uint v5
  char *v6
  char v7
  char v9
  char v10
  int v11

  v11 = a4;
  OS_GetLowEntropyData((int *)&v10);
  Function_20d3028((uint)&v9, (int)&v10, 0x20u);
  LOBYTE(i) = 0;
  v5 = 0;
  v6 = &v9;
  do
  {
    v7 = *v6;
    ++v5;
    ++v6;
    LOBYTE(i) = i + v7;
  }
  while ( v5 < 0x10 );
  for ( i = (uchar)i; i & 3; ++i )
    ;
  return AllocateAreasOfMemory(Unknown_20e5674, 4u, 0x7Bu, i);
}

//----- (0201789C) --------------------------------------------------------
int InitSystemForTheGame()
{
  int v0
  short *v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  uint v13
  int v14

  v0 = OS_Init();
  InitDummy(v0);
  REG_POWERCNT = REG_POWERCNT & 0xFDF1 | 0x20E;
  GX_Init();
  v1 = OS_InitTick();
  InitMainAreasOfMemory((int)v1, v2, v3, v4);
  v5 = GetAllocSizeForTasks(160);
  v6 = OS_AllocFromArenaLo(0, v5, 4);
  dword_21BF694 = InitTaskList(160, v6);
  v7 = GetAllocSizeForTasks(32);
  v8 = OS_AllocFromArenaLo(0, v7, 4);
  dword_21BF698 = InitTaskList(32, v8);
  v9 = GetAllocSizeForTasks(32);
  v10 = OS_AllocFromArenaLo(0, v9, 4);
  dword_21BF69C = InitTaskList(32, v10);
  v11 = GetAllocSizeForTasks(4);
  v12 = OS_AllocFromArenaLo(0, v11, 4);
  dword_21BF6A0 = InitTaskList(4, v12);
  GX_DispOff();
  REG_DISPCNT_SUB &= 0xFFFEFFFF;
  REG_POWERCNT |= (uint)&REG_POWERCNT >> 11;
  OS_SetIrqFunction(1u, (int)Function_2017728_IrqVBlank);
  OS_EnableIrqMask(1);
  OS_EnableIrqMask(0x40000);
  LOWORD(REG_IME) = 1;
  GX_VBlankIntr(1, (uint)&REG_IME);
  FS_Init(1);
  Function_2024358();
  v13 = FS_TryLoadTable(0, 0);
  v14 = OS_AllocFromArenaLo(0, v13, 4);
  if ( !v14 )
    ErrorHandler();
  FS_TryLoadTable(v14, v13);
  dword_21BF67C = 0;
  dword_21BF684 = 0;
  dword_21BF68C = 0;
  dword_21BF690 = 0;
  dword_21BF6EC = 0;
  dword_21BF6A8 = 0;
  byte_21BF6E1 = 0;
  CARD_SetCacheFlushThreshold(1280, 9216);
  return Function_201d640(0);
}

//----- (020179E4) --------------------------------------------------------
int InitGraphicMemory()
{
  GX_SetBankForLCDC((char *)0x1FF);
  MIi_CpuClearFast(0, (uint *)0x6800000, 0xA4000u);
  Function_20bef60();
  MIi_CpuClearFast(192, (uint *)0x7000000, 0x400u);
  MIi_CpuClearFast(192, (uint *)0x7000400, 0x400u);
  MIi_CpuClearFast(0, (uint *)0x5000000, 0x400u);
  return MIi_CpuClearFast(0, (uint *)0x5000400, 0x400u);
}