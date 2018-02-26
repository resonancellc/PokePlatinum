//----- (02017AF4) --------------------------------------------------------
short *__fastcall InitInputVariables(int a1, int a2, int a3, int a4)
{
  short v5
  short v6
  short v7
  short v8
  int v9

  v9 = a4;
  dword_21BF6B0 = 0;
  dword_21BF6B4 = 0;
  dword_21BF6B8 = 0;
  dword_21BF6BC = 0;
  dword_21BF6C0 = 0;
  dword_21BF6C4 = 0;
  dword_21BF6C8 = 0;
  dword_21BF6CC = 0;
  dword_21BF6D0 = 4;
  dword_21BF6D4 = 8;
  word_21BF6D8 = 0;
  word_21BF6DA = (uchar)word_21BF6D8;
  word_21BF6DC = 0;
  word_21BF6DE = (uchar)word_21BF6DC;
  byte_21BF6E0 = 0;
  TP_Init();
  if ( TP_GetUserInfo(&v5) != 1 )
  {
    v5 = 686;
    v6 = 1420;
    v7 = 3621;
    v8 = 4616;
  }
  return TP_SetCalibrateParam(&v5);
}

//----- (02017B70) --------------------------------------------------------
int __fastcall Function_2017b70(int result)
{
  byte_21BF6E2 = result;
  return result;
}

//----- (02017B7C) --------------------------------------------------------
int __fastcall Function_2017b7c(int a1)
{
  int result

  result = a1 | (uchar)byte_21BF6E3;
  byte_21BF6E3 = result;
  return result;
}

//----- (02017B8C) --------------------------------------------------------
int __fastcall Function_2017b8c(int a1)
{
  int result

  result = ~a1 & (uchar)byte_21BF6E3;
  byte_21BF6E3 = result;
  return result;
}

//----- (02017B9C) --------------------------------------------------------
int *UpdateInput()
{
  int *result
  int v1
  short v2
  short v3
  short v4
  short v5
  char v6

  if ( (word_27FFFA8 & 0x8000) >> 15 )
  {
    dword_21BF6C4 = 0;
    dword_21BF6C0 = 0;
    dword_21BF6C8 = 0;
    result = &dword_21BF6BC;
    word_21BF6DC = 0;
    word_21BF6DE = (uchar)word_21BF6DC;
  }
  else
  {
    v1 = (((ushort)REG_KEYINPUT | (ushort)word_27FFFA8) ^ 0x2FFF) & 0x2FFF;
    dword_21BF6B8 = (v1 ^ dword_21BF6B4) & v1;
    dword_21BF6BC = (v1 ^ dword_21BF6B4) & v1;
    if ( v1 && dword_21BF6B4 == v1 )
    {
      if ( !--dword_21BF6CC )
      {
        dword_21BF6BC = (((ushort)REG_KEYINPUT | (ushort)word_27FFFA8) ^ 0x2FFF) & 0x2FFF;
        dword_21BF6CC = dword_21BF6D0;
      }
    }
    else
    {
      dword_21BF6CC = dword_21BF6D4;
    }
    dword_21BF6B4 = (((ushort)REG_KEYINPUT | (ushort)word_27FFFA8) ^ 0x2FFF) & 0x2FFF;
    dword_21BF6C4 = dword_21BF6B8;
    dword_21BF6C0 = (((ushort)REG_KEYINPUT | (ushort)word_27FFFA8) ^ 0x2FFF) & 0x2FFF;
    dword_21BF6C8 = dword_21BF6BC;
    Function_2017ca0();
    if ( byte_21BF6E0 )
    {
      TP_GetLatestRawPointInAuto(&v6);
    }
    else
    {
      do
        TP_RequestSamplingAsync();
      while ( TP_WaitRawResult(&v6) );
    }
    TP_GetCalibratedPoint(&v2, (ushort *)&v6);
    if ( v5 )
    {
      if ( word_21BF6DE )
      {
        if ( v5 == 1 )
        {
          word_21BF6DA = v3;
        }
        else if ( v5 == 2 )
        {
          word_21BF6D8 = v2;
        }
      }
      else
      {
        v4 = 0;
      }
    }
    else
    {
      word_21BF6D8 = v2;
      word_21BF6DA = v3;
    }
    result = &dword_21BF6BC;
    word_21BF6DC = (word_21BF6DE ^ v4) & v4;
    word_21BF6DE = v4;
  }
  return result;
}

//----- (02017CA0) --------------------------------------------------------
int *Function_2017ca0()
{
  int *result
  int v1
  int v2
  int v3

  result = (int *)&dword_21BF67C;
  if ( (uint)dword_21BF6B0 <= 3 )
    return (int *)((int (*)(void))((char *)&off_2017CB6 + *((short *)&off_2017CB6 + dword_21BF6B0) + 2))();
  switch ( (uchar)dword_21BF6B0 )
  {
    case 1:
      if ( dword_21BF6C4 & 8 )
        dword_21BF6C4 |= 0x400u;
      if ( dword_21BF6C0 & 8 )
        dword_21BF6C0 |= 0x400u;
      result = (int *)8;
      if ( dword_21BF6C8 & 8 )
      {
        result = (int *)(dword_21BF6C8 | 0x400);
        dword_21BF6C8 |= 0x400u;
      }
      break;
    case 2:
      v1 = 0;
      if ( dword_21BF6C4 & 0x400 )
        v1 = 2048;
      if ( dword_21BF6C4 & 0x800 )
        v1 |= 0x400u;
      dword_21BF6C4 = (ushort)(dword_21BF6C4 & 0xF3FF) | v1;
      v2 = 0;
      if ( dword_21BF6C0 & 0x400 )
        v2 = 2048;
      if ( dword_21BF6C0 & 0x800 )
        v2 |= 0x400u;
      dword_21BF6C0 = v2 | (ushort)(dword_21BF6C0 & 0xF3FF);
      v3 = 0;
      if ( dword_21BF6C8 & 0x400 )
        v3 = 2048;
      if ( dword_21BF6C8 & 0x800 )
        v3 |= 0x400u;
      result = (int *)(v3 | (ushort)(dword_21BF6C8 & 0xF3FF));
      dword_21BF6C8 = (int)result;
      break;
    case 3:
      if ( dword_21BF6C4 & 0x200 )
        dword_21BF6C4 |= 1u;
      if ( dword_21BF6C0 & 0x200 )
        dword_21BF6C0 |= 1u;
      if ( dword_21BF6C8 & 0x200 )
        dword_21BF6C8 |= 1u;
      dword_21BF6C4 &= 0xFCFFu;
      dword_21BF6C0 &= 0xFCFFu;
      result = (int *)(dword_21BF6C8 & 0xFCFF);
      dword_21BF6C8 &= 0xFCFFu;
      break;
    default:
      return result;
  }
  return result;
}

//----- (02017DD4) --------------------------------------------------------
int __fastcall Function_2017dd4(int result, int a2)
{
  dword_21BF6D0 = result;
  dword_21BF6D4 = a2;
  return result;
}