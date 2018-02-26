//----- (0206A8DC) --------------------------------------------------------
char *__fastcall Call_SetFlag(int a1, uint a2)
{
  return SetFlag(a1, a2);
}

//----- (0206A8E4) --------------------------------------------------------
char *__fastcall Call_ClearFlag(int a1, uint a2)
{
  return ClearFlag(a1, a2);
}

//----- (0206A8EC) --------------------------------------------------------
int __fastcall Call_CheckFlag(int a1, uint a2)
{
  return CheckFlag(a1, a2);
}

//----- (0206A8F4) --------------------------------------------------------
int __fastcall SetClearCheckFlag(int a1, int a2, ushort a3)
{
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      Call_SetFlag(a1, a3);
    }
    else
    {
      if ( a2 == 2 )
        return Call_CheckFlag(a1, a3);
      ErrorHandler();
    }
  }
  else
  {
    Call_ClearFlag(a1, a3);
  }
  return 0;
}

//----- (0206A92C) --------------------------------------------------------
char *__fastcall SetFlag_Flag960(int a1)
{
  return Call_SetFlag(a1, 0x960u);
}

//----- (0206A938) --------------------------------------------------------
int __fastcall CheckFlag_Flag960(int a1)
{
  return Call_CheckFlag(a1, 0x960u);
}

//----- (0206A944) --------------------------------------------------------
char *__fastcall Function_206a944(int a1)
{
  return Call_SetFlag(a1, 0x964u);
}

//----- (0206A954) --------------------------------------------------------
int __fastcall Function_206a954(int a1)
{
  return Call_CheckFlag(a1, 0x964u);
}

//----- (0206A964) --------------------------------------------------------
char *__fastcall Function_206a964(int a1)
{
  return Call_SetFlag(a1, 0x961u);
}

//----- (0206A974) --------------------------------------------------------
char *__fastcall Function_206a974(int a1)
{
  return Call_ClearFlag(a1, 0x961u);
}

//----- (0206A984) --------------------------------------------------------
int __fastcall Function_206a984(int a1)
{
  return Call_CheckFlag(a1, 0x961u);
}

//----- (0206A994) --------------------------------------------------------
char *__fastcall Function_206a994(int a1)
{
  return Call_SetFlag(a1, 0x965u);
}

//----- (0206A9A4) --------------------------------------------------------
char *__fastcall Function_206a9a4(int a1)
{
  return Call_ClearFlag(a1, 0x965u);
}

//----- (0206A9B4) --------------------------------------------------------
int __fastcall Function_206a9b4(int a1)
{
  return Call_CheckFlag(a1, 0x965u);
}

//----- (0206A9C4) --------------------------------------------------------
char *__fastcall Function_206a9c4(int a1)
{
  return Call_SetFlag(a1, 0x96Du);
}

//----- (0206A9D4) --------------------------------------------------------
char *__fastcall Function_206a9d4(int a1)
{
  return Call_ClearFlag(a1, 0x96Du);
}

//----- (0206A9E4) --------------------------------------------------------
int __fastcall Function_206a9e4(int a1)
{
  return Call_CheckFlag(a1, 0x96Du);
}

//----- (0206A9F4) --------------------------------------------------------
char *__fastcall Function_206a9f4(int a1)
{
  return Call_SetFlag(a1, 0x96Eu);
}

//----- (0206AA04) --------------------------------------------------------
char *__fastcall Function_206aa04(int a1)
{
  return Call_SetFlag(a1, 0x96Fu);
}

//----- (0206AA14) --------------------------------------------------------
char *__fastcall Function_206aa14(int a1)
{
  return Call_SetFlag(a1, 0x970u);
}

//----- (0206AA20) --------------------------------------------------------
char *__fastcall Function_206aa20(int a1)
{
  return Call_SetFlag(a1, 0x971u);
}

//----- (0206AA30) --------------------------------------------------------
char *__fastcall Function_206aa30(int a1)
{
  return Call_SetFlag(a1, 0x972u);
}

//----- (0206AA40) --------------------------------------------------------
char *__fastcall Function_206aa40(int a1)
{
  return Call_SetFlag(a1, 0x973u);
}

//----- (0206AA50) --------------------------------------------------------
void __fastcall Function_206aa50(int a1, uint a2)
{
  switch ( (uchar)a2 )
  {
    case 0:
      Call_SetFlag(a1, 0x968u);
      break;
    case 1:
      Call_SetFlag(a1, 0x969u);
      break;
    case 2:
      Call_SetFlag(a1, 0x96Au);
      break;
    case 3:
      Call_SetFlag(a1, 0x96Bu);
      break;
    case 4:
      Call_SetFlag(a1, 0x96Cu);
      break;
    default:
      return;
  }
}

//----- (0206AAA8) --------------------------------------------------------
void __fastcall Function_206aaa8(int a1, uint a2)
{
  switch ( (uchar)a2 )
  {
    case 0:
      Call_CheckFlag(a1, 0x968u);
      break;
    case 1:
      Call_CheckFlag(a1, 0x969u);
      break;
    case 2:
      Call_CheckFlag(a1, 0x96Au);
      break;
    case 3:
      Call_CheckFlag(a1, 0x96Bu);
      break;
    case 4:
      Call_CheckFlag(a1, 0x96Cu);
      break;
    default:
      return;
  }
}

//----- (0206AB00) --------------------------------------------------------
int __fastcall Function_206ab00(int a1, uint a2)
{
  int v2

  v2 = 0;
  switch ( (uchar)a2 )
  {
    case 1:
      v2 = Call_CheckFlag(a1, 0x97Fu);
      break;
    case 2:
      v2 = Call_CheckFlag(a1, 0x980u);
      break;
    case 3:
      v2 = Call_CheckFlag(a1, 0x981u);
      break;
    case 4:
      v2 = Call_CheckFlag(a1, 0x982u);
      break;
    case 5:
      v2 = Call_CheckFlag(a1, 0x983u);
      break;
    default:
      return v2;
  }
  return v2;
}

//----- (0206AB68) --------------------------------------------------------
int __fastcall Function_206ab68(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5

  v2 = a2;
  v3 = a1;
  v4 = 0;
  if ( a2 > 306 )
    JUMPOUT((char *)&off_206AB98 + 46);
  if ( a2 >= 306 )
  {
    if ( Call_CheckFlag(a1, 0x985u) == 1 )
    {
      if ( Function_2013948() )
        v4 = 1045;
      else
        v4 = 1016;
    }
    else if ( v2 == 305 && Call_CheckFlag(v3, 0x986u) == 1 )
    {
      v4 = 1067;
    }
  }
  else
  {
    if ( a2 > 201 )
      JUMPOUT((char *)&off_206AB98 + 16);
    if ( a2 < 201 )
    {
      if ( a2 > 75 )
        JUMPOUT((char *)&off_206AB98 + 8);
      v5 = a2 - 72;
      if ( v2 - 72 < 0 )
        JUMPOUT((char *)&off_206AB98 + 14);
      JUMPOUT(__CS__, *((short *)&off_206AB98 + v5) + 33991578);
    }
    if ( Call_CheckFlag(a1, 0x988u) == 1 )
    {
      if ( Function_2013948() )
        v4 = 1052;
      else
        v4 = 1023;
    }
  }
  return v4;
}

//----- (0206AD9C) --------------------------------------------------------
char *__fastcall Function_206ad9c(int a1)
{
  return Call_SetFlag(a1, 0x966u);
}

//----- (0206ADAC) --------------------------------------------------------
char *__fastcall Function_206adac(int a1)
{
  return Call_ClearFlag(a1, 0x966u);
}

//----- (0206ADBC) --------------------------------------------------------
int __fastcall Function_206adbc(int a1)
{
  return Call_CheckFlag(a1, 0x966u);
}

//----- (0206ADCC) --------------------------------------------------------
int __fastcall Function_206adcc(int a1)
{
  return Call_CheckFlag(a1, 0x978u);
}

//----- (0206ADDC) --------------------------------------------------------
int __fastcall Function_206addc(int a1)
{
  return Call_CheckFlag(a1, 0x992u);
}

//----- (0206ADEC) --------------------------------------------------------
int __fastcall Function_206adec(int a1)
{
  return Call_CheckFlag(a1, 0x97Du);
}

//----- (0206ADFC) --------------------------------------------------------
int __fastcall Function_206adfc(int a1)
{
  return Call_CheckFlag(a1, 0x97Eu);
}

//----- (0206AE0C) --------------------------------------------------------
char *__fastcall Function_206ae0c(int a1)
{
  return Call_SetFlag(a1, 0x97Cu);
}

//----- (0206AE1C) --------------------------------------------------------
char *__fastcall Function_206ae1c(int a1)
{
  return Call_ClearFlag(a1, 0x97Cu);
}

//----- (0206AE2C) --------------------------------------------------------
int __fastcall Function_206ae2c(int a1)
{
  return Call_CheckFlag(a1, 0x97Cu);
}

//----- (0206AE3C) --------------------------------------------------------
char *__fastcall Function_206ae3c(int a1)
{
  return Call_SetFlag(a1, 0x967u);
}

//----- (0206AE4C) --------------------------------------------------------
char *__fastcall Function_206ae4c(int a1)
{
  return Call_ClearFlag(a1, 0x967u);
}

//----- (0206AE5C) --------------------------------------------------------
int __fastcall Function_206ae5c(int a1)
{
  return Call_CheckFlag(a1, 0x967u);
}

//----- (0206AE6C) --------------------------------------------------------
char *__fastcall Function_206ae6c(int a1)
{
  return Call_SetFlag(a1, 0x979u);
}

//----- (0206AE7C) --------------------------------------------------------
char *__fastcall Function_206ae7c(int a1)
{
  return Call_ClearFlag(a1, 0x979u);
}

//----- (0206AE8C) --------------------------------------------------------
int __fastcall Function_206ae8c(int a1)
{
  return Call_CheckFlag(a1, 0x979u);
}

//----- (0206AE9C) --------------------------------------------------------
char *__fastcall Function_206ae9c(int a1)
{
  return Call_ClearFlag(a1, 0x994u);
}

//----- (0206AEAC) --------------------------------------------------------
int __fastcall Function_206aeac(int a1, int a2)
{
  return SetClearCheckFlag(a1, a2, 0x962u);
}

//----- (0206AEBC) --------------------------------------------------------
char *__fastcall Function_206aebc(int a1)
{
  return Call_SetFlag(a1, 0x97Au);
}

//----- (0206AECC) --------------------------------------------------------
char *__fastcall Function_206aecc(int a1)
{
  return Call_ClearFlag(a1, 0x97Au);
}

//----- (0206AEDC) --------------------------------------------------------
int __fastcall Function_206aedc(int a1)
{
  return Call_CheckFlag(a1, 0x97Au);
}

//----- (0206AEEC) --------------------------------------------------------
char *__fastcall Function_206aeec(int a1)
{
  return Call_SetFlag(a1, 0x97Bu);
}

//----- (0206AEFC) --------------------------------------------------------
char *__fastcall Function_206aefc(int a1)
{
  return Call_ClearFlag(a1, 0x97Bu);
}

//----- (0206AF0C) --------------------------------------------------------
int __fastcall Function_206af0c(int a1)
{
  return Call_CheckFlag(a1, 0x97Bu);
}

//----- (0206AF1C) --------------------------------------------------------
int __fastcall Function_206af1c(int a1, int a2)
{
  return SetClearCheckFlag(a1, a2, 0x996u);
}

//----- (0206AF2C) --------------------------------------------------------
int __fastcall Function_206af2c(int a1, int a2)
{
  return SetClearCheckFlag(a1, a2, 0x963u);
}

//----- (0206AF3C) --------------------------------------------------------
int __fastcall Function_206af3c(int a1, int a2, uint a3)
{
  short v3
  int v4
  int v5

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 >= 0x45 )
    ErrorHandler();
  return SetClearCheckFlag(v4, v5, v3 + 2480);
}

//----- (0206AF5C) --------------------------------------------------------
char *__fastcall Function_206af5c(int a1)
{
  return Call_SetFlag(a1, 0x98Cu);
}

//----- (0206AF6C) --------------------------------------------------------
int __fastcall Function_206af6c(int a1, int a2, int a3)
{
  short v3
  int v4
  int v5

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( a3 >= 20 )
    ErrorHandler();
  return SetClearCheckFlag(v4, v5, v3 + 2455);
}

//----- (0206AF90) --------------------------------------------------------
char *__fastcall Function_206af90(int a1)
{
  return Call_ClearFlag(a1, 0x9ABu);
}

//----- (0206AFA0) --------------------------------------------------------
char *__fastcall Function_206afa0(int a1)
{
  return Call_ClearFlag(a1, 0x9ACu);
}

//----- (0206AFB0) --------------------------------------------------------
int __fastcall Function_206afb0(int a1, int a2, short a3)
{
  return SetClearCheckFlag(a1, a2, a3 + 2478);
}

//----- (0206AFC0) --------------------------------------------------------
int __fastcall Function_206afc0(int a1, int a2)
{
  return SetClearCheckFlag(a1, a2, 0x9ADu);
}

//----- (0206AFD0) --------------------------------------------------------
int __fastcall Function_206afd0(int a1)
{
  return SetClearCheckFlag(a1, 2, 0x977u);
}