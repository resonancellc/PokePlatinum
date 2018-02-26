//----- (0205E820) --------------------------------------------------------
int *__fastcall Function_205e820(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int *v6
  int v7
  int v8
  int v9
  int v10
  uint *v11
  int v12

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = Function_205e8fc();
  v7 = Function_205ec94(v3);
  Function_205e91c((int)v6, v7, v5, v3);
  v11 = (uint *)Function_205ea64(v4, v8, v9, v10);
  v12 = Function_205ed6c(v7, v5);
  SetSpriteGraphic((int)v11, v12);
  SetSpriteFlags(v11, 9216);
  UnsetSpriteFlags(v11, 384);
  SetUnsetSpriteFlags20000000(v11, 1);
  Function_205eb38((int)v6, (int)v11);
  return v6;
}

//----- (0205E884) --------------------------------------------------------
int __fastcall Function_205e884(int a1, int a2)
{
  int v2
  int v3
  int v4
  int result
  int v6
  int v7
  int v8
  int v9

  v2 = a1;
  v3 = a2;
  v4 = Function_205eb3c(a1);
  if ( !v4 )
    ErrorHandler();
  GetSpriteSpriteList(v4);
  ((void (__fastcall *)(int))dword_21F6218[0])(v2);
  result = Function_205eb74(v2);
  if ( result == 2 && v3 != 9 )
  {
    v6 = GetSpritePositionX(v2);
    v7 = GetSpritePositionY(v2);
    v8 = GetSpriteFaceDirection(v2);
    v9 = ((int (__fastcall *)(int, int, int, int))dword_21F261C[0])(v4, v6, v7, v8);
    result = Function_205ec00(v2, v9);
  }
  return result;
}

//----- (0205E8E0) --------------------------------------------------------
int __fastcall Call_free9(int a1)
{
  return free(a1);
}

//----- (0205E8E8) --------------------------------------------------------
int __fastcall Function_205e8e8(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = Function_205eb3c(a1);
  Function_2061af4(v2);
  return Call_free9(v1);
}

//----- (0205E8FC) --------------------------------------------------------
int *Function_205e8fc()
{
  int *v0

  v0 = (int *)malloc(0xBu, 64);
  if ( !v0 )
    ErrorHandler();
  Call_FillMemWithValue(v0, 0, 0x40u);
  return v0;
}

//----- (0205E91C) --------------------------------------------------------
uint *__fastcall Function_205e91c(int a1, int a2, int a3, int a4)
{
  int v4
  uint *v5
  int v6

  v4 = a2;
  v5 = (uint *)a1;
  v6 = a3;
  Function_205ec08(a1, a4);
  Function_205eb08((int)v5, 0);
  Function_205eb10((int)v5, 0);
  Function_205eb58((int)v5, v4);
  Function_205eb94((int)v5, v6);
  Function_205eb8c((int)v5, 0);
  Function_205ebc0(v5);
  Function_205ebdc((int)v5, -1);
  Function_205ebe4((int)v5, -1);
  Function_205ec20((int)v5, 255, 0);
  Function_205ef6c(v5, 1);
  return Function_205eff0(v5, 1);
}

//----- (0205E988) --------------------------------------------------------
int __fastcall Init2SpriteStruct(int a1, int a2, short a3, int a4, short a5, short a6)
{
  int v6
  uint *v7

  v6 = a1;
  v7 = InitSpriteStruct(a2, a5, a6, a4, a3, 1, 1);
  if ( !v7 )
    ErrorHandler();
  SetSpriteID((int)v7, 255);
  SetSpriteTrainer((int)v7, 0);
  SetSpriteFlag((int)v7, 0);
  SetSpriteScript((int)v7, 0);
  Function_20629b4(v7, 0, 0);
  Function_20629b4(v7, 0, 1);
  Function_20629b4(v7, 0, 2);
  SetSpriteMovementWidth((int)v7, -1);
  SetSpriteMovementLength((int)v7, -1);
  SetSpriteFlags(v7, 9216);
  UnsetSpriteFlags(v7, 384);
  SetUnsetSpriteFlags20000000(v7, 1);
  return Function_205eb38(v6, (int)v7);
}

//----- (0205EA24) --------------------------------------------------------
int __fastcall Function_205ea24(int a1, int a2, int a3, int a4)
{
  int v4
  int v6
  int v7
  int v8

  v8 = a4;
  v7 = 0;
  v6 = 0;
  v4 = a1;
  if ( Function_20625b0(a1, &v6, &v7, 1) )
  {
    while ( GetSpriteMovement(v6) != 1 && Function_20625b0(v4, &v6, &v7, 1) )
      ;
  }
  return v6;
}

//----- (0205EA64) --------------------------------------------------------
int __fastcall Function_205ea64(int a1, int a2, int a3, int a4)
{
  int v4

  v4 = Function_205ea24(a1, a2, a3, a4);
  if ( !v4 )
    ErrorHandler();
  return v4;
}

//----- (0205EA78) --------------------------------------------------------
int __fastcall GetSpriteFaceDirection(int a1)
{
  int v1

  v1 = Function_205eb3c(a1);
  return LoadSpriteFaceDirection(v1);
}

//----- (0205EA84) --------------------------------------------------------
int __fastcall Function_205ea84(int a1, int a2)
{
  int v2
  uint *v3

  v2 = a2;
  v3 = (uint *)Function_205eb3c(a1);
  return ChangeSpriteFaceDirection_WithCheck(v3, v2);
}

//----- (0205EA94) --------------------------------------------------------
int __fastcall Function_205ea94(int a1)
{
  int v1

  v1 = Function_205eb3c(a1);
  return LoadSpriteFace2Direction(v1);
}

//----- (0205EAA0) --------------------------------------------------------
int __fastcall Function_205eaa0(uint *a1)
{
  uint *v1
  int result

  v1 = a1;
  if ( Function_205f16c(a1) == 1 )
    result = GetSpriteFaceDirection((int)v1);
  else
    result = Function_205ea94((int)v1);
  return result;
}

//----- (0205EABC) --------------------------------------------------------
int __fastcall GetSpritePositionX(int a1)
{
  int v1

  v1 = Function_205eb3c(a1);
  return LoadSpritePositionX(v1);
}

//----- (0205EAC8) --------------------------------------------------------
int __fastcall GetSpritePositionY(int a1)
{
  int v1

  v1 = Function_205eb3c(a1);
  return LoadSpritePositionY(v1);
}

//----- (0205EAD4) --------------------------------------------------------
int __fastcall Function_205ead4(int a1)
{
  int v1

  v1 = Function_205eb3c(a1);
  return GetSpriteX2(v1);
}

//----- (0205EAE0) --------------------------------------------------------
int __fastcall Function_205eae0(int a1)
{
  int v1

  v1 = Function_205eb3c(a1);
  return GetSpriteY2(v1);
}

//----- (0205EAEC) --------------------------------------------------------
int __fastcall Function_205eaec(int a1, uint *a2)
{
  uint *v2
  uint *v3

  v2 = a2;
  v3 = (uint *)Function_205eb3c(a1);
  return CopySprite70Struct(v3, v2);
}

//----- (0205EAFC) --------------------------------------------------------
int __fastcall Function_205eafc(int a1)
{
  int v1

  v1 = Function_205eb54(a1);
  return GetSpriteAdr70(v1);
}

//----- (0205EB08) --------------------------------------------------------
int __fastcall Function_205eb08(int result, int a2)
{
  *(uint *)(result + 20) = a2;
  return result;
}

//----- (0205EB0C) --------------------------------------------------------
int __fastcall Function_205eb0c(int a1)
{
  return *(uint *)(a1 + 20);
}

//----- (0205EB10) --------------------------------------------------------
int __fastcall Function_205eb10(int result, int a2)
{
  *(uint *)(result + 24) = a2;
  return result;
}

//----- (0205EB14) --------------------------------------------------------
int __fastcall Function_205eb14(int a1)
{
  return *(uint *)(a1 + 24);
}

//----- (0205EB18) --------------------------------------------------------
uint *__fastcall Function_205eb18(int a1, int a2)
{
  int v2
  uint *v3
  uint *result

  v2 = a2;
  v3 = (uint *)Function_205eb3c(a1);
  if ( v2 == 1 )
    result = UnsetSpriteFlags(v3, 512);
  else
    result = SetSpriteFlags(v3, 512);
  return result;
}

//----- (0205EB38) --------------------------------------------------------
int __fastcall Function_205eb38(int result, int a2)
{
  *(uint *)(result + 48) = a2;
  return result;
}

//----- (0205EB3C) --------------------------------------------------------
int __fastcall Function_205eb3c(int a1)
{
  int v1

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  if ( !*(uint *)(v1 + 48) )
    ErrorHandler();
  return *(uint *)(v1 + 48);
}

//----- (0205EB54) --------------------------------------------------------
int __fastcall Function_205eb54(int a1)
{
  return *(uint *)(a1 + 48);
}

//----- (0205EB58) --------------------------------------------------------
int __fastcall Function_205eb58(int a1, int a2)
{
  int v2
  int v3

  v2 = a2;
  v3 = a1;
  if ( a2 >= 6 )
    ErrorHandler();
  *(uint *)(v3 + 28) = v2;
  return Function_205eca8(v3, v2);
}

//----- (0205EB74) --------------------------------------------------------
int __fastcall Function_205eb74(int a1)
{
  int v1

  v1 = a1;
  if ( !a1 )
    ErrorHandler();
  return *(uint *)(v1 + 28);
}

//----- (0205EB84) --------------------------------------------------------
int __fastcall Function_205eb84(int result, int a2)
{
  *(uint *)(result + 4) |= a2;
  return result;
}

//----- (0205EB8C) --------------------------------------------------------
int __fastcall Function_205eb8c(int result, int a2)
{
  *(uint *)(result + 4) = a2;
  return result;
}

//----- (0205EB90) --------------------------------------------------------
int __fastcall Function_205eb90(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (0205EB94) --------------------------------------------------------
int __fastcall Function_205eb94(int result, int a2)
{
  *(uint *)(result + 32) = a2;
  return result;
}

//----- (0205EB98) --------------------------------------------------------
int __fastcall Function_205eb98(int a1)
{
  return *(uint *)(a1 + 32);
}

//----- (0205EB9C) --------------------------------------------------------
uint *__fastcall Function_205eb9c(uint *result, int a2)
{
  *result |= a2;
  return result;
}

//----- (0205EBA4) --------------------------------------------------------
uint *__fastcall Function_205eba4(uint *result, int a2)
{
  *result &= ~a2;
  return result;
}

//----- (0205EBB0) --------------------------------------------------------
int __fastcall Function_205ebb0(uint *a1, int a2)
{
  return *a1 & a2;
}

//----- (0205EBB8) --------------------------------------------------------
int __fastcall Function_205ebb8(int a1)
{
  return *(uint *)(a1 + 36);
}

//----- (0205EBBC) --------------------------------------------------------
int __fastcall Function_205ebbc(int result, int a2)
{
  *(uint *)(result + 36) = a2;
  return result;
}

//----- (0205EBC0) --------------------------------------------------------
uint *__fastcall Function_205ebc0(uint *a1)
{
  a1[9] = 0;
  return Function_205ef98(a1, 0);
}

//----- (0205EBCC) --------------------------------------------------------
int __fastcall Function_205ebcc(int a1, int a2, int a3)
{
  int v3

  v3 = *(uint *)(a1 + 36) + a2;
  *(uint *)(a1 + 36) = v3;
  if ( v3 > a3 )
    *(uint *)(a1 + 36) = a3;
  return *(uint *)(a1 + 36);
}

//----- (0205EBDC) --------------------------------------------------------
int __fastcall Function_205ebdc(int result, int a2)
{
  *(uint *)(result + 40) = a2;
  return result;
}

//----- (0205EBE0) --------------------------------------------------------
int __fastcall Function_205ebe0(int a1)
{
  return *(uint *)(a1 + 40);
}

//----- (0205EBE4) --------------------------------------------------------
int __fastcall Function_205ebe4(int result, int a2)
{
  *(uint *)(result + 44) = a2;
  return result;
}

//----- (0205EBE8) --------------------------------------------------------
int __fastcall Function_205ebe8(int a1)
{
  return *(uint *)(a1 + 44);
}

//----- (0205EBEC) --------------------------------------------------------
int __fastcall Function_205ebec(int a1, int a2, int a3)
{
  int v3
  int v4

  v3 = a1;
  v4 = a3;
  Function_205ebdc(a1, a2);
  return Function_205ebe4(v3, v4);
}

//----- (0205EC00) --------------------------------------------------------
int __fastcall Function_205ec00(int result, int a2)
{
  *(uint *)(result + 52) = a2;
  return result;
}

//----- (0205EC04) --------------------------------------------------------
int __fastcall Function_205ec04(int a1)
{
  return *(uint *)(a1 + 52);
}

//----- (0205EC08) --------------------------------------------------------
int __fastcall Function_205ec08(int result, int a2)
{
  *(uint *)(result + 56) = a2;
  return result;
}

//----- (0205EC0C) --------------------------------------------------------
int __fastcall Function_205ec0c(int a1)
{
  return *(uint *)(a1 + 56);
}

//----- (0205EC10) --------------------------------------------------------
int __fastcall Function_205ec10(int result, int a2)
{
  *(uint *)(result + 8) = a2;
  return result;
}

//----- (0205EC14) --------------------------------------------------------
int __fastcall Function_205ec14(int a1)
{
  return *(uint *)(a1 + 8);
}

//----- (0205EC18) --------------------------------------------------------
int __fastcall Function_205ec18(int result, int a2)
{
  *(uint *)(result + 12) = a2;
  return result;
}

//----- (0205EC1C) --------------------------------------------------------
int __fastcall Function_205ec1c(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (0205EC20) --------------------------------------------------------
int __fastcall Function_205ec20(int a1, int a2, int a3)
{
  int v3
  int v4

  v3 = a1;
  v4 = a3;
  Function_205ec10(a1, a2);
  return Function_205ec18(v3, v4);
}

//----- (0205EC34) --------------------------------------------------------
int __fastcall Function_205ec34(int result)
{
  *(ushort *)result = 0;
  *(ushort *)(result + 2) = 0;
  *(uint *)(result + 4) = 0;
  return result;
}

//----- (0205EC40) --------------------------------------------------------
BOOL __fastcall Function_205ec40(int a1)
{
  return a1 && *(ushort *)(a1 + 2) == 1;
}

//----- (0205EC54) --------------------------------------------------------
int __fastcall SetRunningShoes(int result, int a2)
{
  *(ushort *)(result + 2) = a2 == 1;
  return result;
}

//----- (0205EC64) --------------------------------------------------------
int __fastcall Function_205ec64(ushort *a1)
{
  int result

  if ( a1 )
    result = *a1;
  else
    result = 0;
  return result;
}

//----- (0205EC70) --------------------------------------------------------
ushort *__fastcall Function_205ec70(ushort *result, short a2)
{
  if ( result )
    *result = a2;
  return result;
}

//----- (0205EC78) --------------------------------------------------------
ushort *__fastcall Function_205ec78(int a1, short a2)
{
  short v2
  ushort *v3

  v2 = a2;
  v3 = (ushort *)Function_205ec0c(a1);
  return Function_205ec70(v3, v2);
}

//----- (0205EC88) --------------------------------------------------------
int __fastcall Function_205ec88(int a1)
{
  ushort *v1

  v1 = (ushort *)Function_205ec0c(a1);
  return Function_205ec64(v1);
}

//----- (0205EC94) --------------------------------------------------------
int __fastcall Function_205ec94(int a1)
{
  int result

  if ( a1 )
    result = *(uint *)(a1 + 4);
  else
    result = 0;
  return result;
}

//----- (0205ECA0) --------------------------------------------------------
int __fastcall Function_205eca0(int result, int a2)
{
  if ( result )
    *(uint *)(result + 4) = a2;
  return result;
}

//----- (0205ECA8) --------------------------------------------------------
int __fastcall Function_205eca8(int a1, int a2)
{
  int v2
  int v3

  v2 = a2;
  v3 = Function_205ec0c(a1);
  return Function_205eca0(v3, v2);
}

//----- (0205ECB8) --------------------------------------------------------
int __fastcall Function_205ecb8(int a1, int *a2, int a3)
{
  int *v3
  int v4
  int v5
  int v6

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = Function_205eb3c(a1);
  Function_20632d4(v6, v3, v4);
  Function_205eb08(v5, 0);
  return Function_205eb10(v5, 0);
}

//----- (0205ECE0) --------------------------------------------------------
int __fastcall Function_205ece0(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v8

  v4 = a2;
  v5 = a3;
  v6 = a1;
  v7 = a4;
  v8 = Function_205eb3c(a1);
  Function_2063340(v8, v4, 0, v5, v7);
  Function_205eb08(v6, 0);
  return Function_205eb10(v6, 0);
}

//----- (0205ED0C) --------------------------------------------------------
int __fastcall Function_205ed0c(int a1, int a2)
{
  int v2
  uint *v3
  int v5
  int v6

  v2 = a2;
  v3 = (uint *)Function_205eb3c(a1);
  CopySprite70Struct(v3, &v5);
  v6 = v2;
  return CopyToSprite70Struct(v3, &v5);
}

//----- (0205ED2C) --------------------------------------------------------
uint *__fastcall Function_205ed2c(int a1, int a2)
{
  int v2
  uint *v3
  uint *result

  v2 = a2;
  v3 = (uint *)Function_205eb3c(a1);
  if ( v2 == 1 )
    result = SetUnsetSpriteFlags800000(v3, 0);
  else
    result = SetUnsetSpriteFlags800000(v3, 1);
  return result;
}

//----- (0205ED48) --------------------------------------------------------
uint *__fastcall Function_205ed48(int a1, int a2)
{
  int v2
  uint *v3
  uint *v4
  int v5
  int v6
  int v7

  v2 = a2;
  v3 = (uint *)Function_205eb3c(a1);
  v4 = v3;
  if ( v2 != 1 )
    return SetUnsetSpriteFlags800000(v3, 1);
  SetUnsetSpriteFlags800000(v3, 0);
  return (uint *)Function_20642f8(v4, v5, v6, v7);
}

//----- (0205ED6C) --------------------------------------------------------
int __fastcall Function_205ed6c(uint a1, int a2)
{
  int result

  if ( a2 )
  {
    switch ( (uchar)a1 )
    {
      case 0:
        result = 97;
        break;
      case 1:
        result = 98;
        break;
      case 2:
        result = 179;
        break;
      case 0x10:
        result = 177;
        break;
      case 0x11:
        result = 181;
        break;
      case 0x12:
        result = 187;
        break;
      case 0x13:
        result = 189;
        break;
      case 0x14:
        result = 197;
        break;
      case 0x15:
        result = 199;
        break;
      case 0x16:
        result = 201;
        break;
      case 0x17:
        result = 257;
        break;
      case 0x18:
        result = 263;
        break;
      case 0x19:
        result = 259;
        break;
      case 0x1A:
        result = 269;
        break;
      case 0x1B:
        result = 271;
        break;
      case 0x1C:
        result = 211;
        break;
      case 0x1D:
        result = 273;
        break;
      case 0x1E:
        result = 275;
        break;
      default:
LABEL_42:
        ErrorHandler();
        result = 0;
        break;
    }
  }
  else
  {
    if ( a1 <= 0x1E )
      JUMPOUT(__CS__, *((short *)&off_205ED84 + a1) + 33942918);
    switch ( (uchar)a1 )
    {
      case 0:
        result = 0;
        break;
      case 1:
        result = 21;
        break;
      case 2:
        result = 178;
        break;
      case 0x10:
        result = 176;
        break;
      case 0x11:
        result = 180;
        break;
      case 0x12:
        result = 186;
        break;
      case 0x13:
        result = 188;
        break;
      case 0x14:
        result = 196;
        break;
      case 0x15:
        result = 198;
        break;
      case 0x16:
        result = 200;
        break;
      case 0x17:
        result = 256;
        break;
      case 0x18:
        result = 212;
        break;
      case 0x19:
        result = 258;
        break;
      case 0x1A:
        result = 268;
        break;
      case 0x1B:
        result = 270;
        break;
      case 0x1C:
        result = 210;
        break;
      case 0x1D:
        result = 272;
        break;
      case 0x1E:
        result = 274;
        break;
      default:
        goto LABEL_42;
    }
  }
  return result;
}

//----- (0205EED8) --------------------------------------------------------
int __fastcall Function_205eed8(int a1)
{
  if ( a1 > 17 )
  {
    if ( a1 > 19 )
    {
      if ( a1 <= 22 && a1 >= 20 )
      {
        switch ( a1 )
        {
          case 20:
            return 64;
          case 21:
            return 128;
          case 22:
            return 256;
        }
      }
    }
    else if ( a1 == 19 )
    {
      return 32;
    }
  }
  else
  {
    if ( a1 >= 17 )
      return 16;
    if ( a1 <= 2 && a1 >= 0 )
    {
      switch ( a1 )
      {
        case 0:
          return 1;
        case 1:
          return 2;
        case 2:
          return 4;
      }
    }
  }
  ErrorHandler();
  return 1;
}

//----- (0205EF3C) --------------------------------------------------------
int __fastcall Function_205ef3c(int a1)
{
  return *(uint *)(a1 + 60);
}

//----- (0205EF40) --------------------------------------------------------
uint *__fastcall Function_205ef40(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = Function_205eb9c(a1, 1);
  else
    result = Function_205eba4(a1, 1);
  return result;
}

//----- (0205EF58) --------------------------------------------------------
BOOL __fastcall Function_205ef58(uint *a1)
{
  return Function_205ebb0(a1, 1) != 0;
}

//----- (0205EF6C) --------------------------------------------------------
uint *__fastcall Function_205ef6c(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = Function_205eb9c(a1, 2);
  else
    result = Function_205eba4(a1, 2);
  return result;
}

//----- (0205EF84) --------------------------------------------------------
BOOL __fastcall Function_205ef84(uint *a1)
{
  return Function_205ebb0(a1, 2) != 0;
}

//----- (0205EF98) --------------------------------------------------------
uint *__fastcall Function_205ef98(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = Function_205eb9c(a1, 4);
  else
    result = Function_205eba4(a1, 4);
  return result;
}

//----- (0205EFB0) --------------------------------------------------------
BOOL __fastcall Function_205efb0(uint *a1)
{
  return Function_205ebb0(a1, 4) != 0;
}

//----- (0205EFC4) --------------------------------------------------------
uint *__fastcall Function_205efc4(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = Function_205eb9c(a1, 8);
  else
    result = Function_205eba4(a1, 8);
  return result;
}

//----- (0205EFDC) --------------------------------------------------------
BOOL __fastcall Function_205efdc(uint *a1)
{
  return Function_205ebb0(a1, 8) != 0;
}

//----- (0205EFF0) --------------------------------------------------------
uint *__fastcall Function_205eff0(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = Function_205eb9c(a1, 16);
  else
    result = Function_205eba4(a1, 16);
  return result;
}

//----- (0205F008) --------------------------------------------------------
BOOL __fastcall Function_205f008(uint *a1)
{
  return Function_205ebb0(a1, 16) != 0;
}

//----- (0205F01C) --------------------------------------------------------
uint *__fastcall Function_205f01c(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = Function_205eb9c(a1, 32);
  else
    result = Function_205eba4(a1, 32);
  return result;
}

//----- (0205F034) --------------------------------------------------------
BOOL __fastcall Function_205f034(uint *a1)
{
  return Function_205ebb0(a1, 32) != 0;
}

//----- (0205F048) --------------------------------------------------------
uint *__fastcall Function_205f048(uint *a1)
{
  return Function_205eb9c(a1, 64);
}

//----- (0205F054) --------------------------------------------------------
uint *__fastcall Function_205f054(uint *a1)
{
  return Function_205eba4(a1, 64);
}

//----- (0205F060) --------------------------------------------------------
BOOL __fastcall Function_205f060(uint *a1)
{
  return Function_205ebb0(a1, 64) != 0;
}

//----- (0205F074) --------------------------------------------------------
uint *__fastcall Function_205f074(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = Function_205eb9c(a1, 128);
  else
    result = Function_205eba4(a1, 128);
  return result;
}

//----- (0205F08C) --------------------------------------------------------
int __fastcall Function_205f08c(uint *a1)
{
  return Function_205ebb0(a1, 128);
}

//----- (0205F098) --------------------------------------------------------
uint *__fastcall Function_205f098(uint *a1, uint a2)
{
  uint *v2
  uint *result

  v2 = a1;
  result = Function_205eba4(a1, 7936);
  switch ( (uchar)result )
  {
    case 0:
      return result;
    case 1:
      result = Function_205eb9c(v2, 256);
      break;
    case 2:
      result = Function_205eb9c(v2, 512);
      break;
    case 3:
      result = Function_205eb9c(v2, 1024);
      break;
    case 4:
      result = Function_205eb9c(v2, 2048);
      break;
    case 5:
      result = Function_205eb9c(v2, 4096);
      break;
    default:
      result = (uint *)ErrorHandler();
      break;
  }
  return result;
}

//----- (0205F108) --------------------------------------------------------
int __fastcall Function_205f108(uint *a1)
{
  int v1
  uint v2

  v1 = 0;
  v2 = Function_205ebb0(a1, 7936);
  if ( v2 > 0x400 )
  {
    if ( v2 > 0x800 )
    {
      if ( v2 == 4096 )
        v1 = 5;
    }
    else if ( v2 == 2048 )
    {
      v1 = 4;
    }
  }
  else if ( v2 >= 0x400 )
  {
    v1 = 3;
  }
  else if ( v2 > 0x100 )
  {
    if ( v2 == 512 )
      v1 = 2;
  }
  else if ( v2 == 256 )
  {
    v1 = 1;
  }
  return v1;
}

//----- (0205F158) --------------------------------------------------------
BOOL __fastcall Function_205f158(uint *a1)
{
  return (uint)Function_205f108(a1) > 1;
}

//----- (0205F16C) --------------------------------------------------------
BOOL __fastcall Function_205f16c(uint *a1)
{
  return (uint)Function_205f108(a1) <= 2;
}

//----- (0205F180) --------------------------------------------------------
int __fastcall Function_205f180(int a1, int a2, int a3, int a4, char a5, int a6)
{
  int v6
  int v7
  uint *v8
  int v9
  int result

  v6 = a2;
  v7 = a3;
  v8 = (uint *)a1;
  v9 = a4;
  if ( a3 == -1 )
    v7 = Function_2061348(a1, a4, a5);
  Function_2060324((int)v8, v9);
  result = Function_205f22c((int)v8, v7);
  if ( result )
  {
    Function_205f350(v8, v7, v9, a5);
    ((void (__fastcall *)(uint *))dword_21DFB5C[0])(v8);
    if ( Function_205f62c((int)v8, v7) == 1 )
    {
      result = ((int (__fastcall *)(uint *))dword_21E0EEC[0])(v8);
    }
    else
    {
      if ( !Function_205eb74((int)v8) )
      {
        if ( Function_205fc48((int)v8, v7) )
        {
          ((void (__fastcall *)(uint *))dword_21E0EEC[0])(v8);
        }
        else if ( a6 == 1 )
        {
          ((void (__fastcall *)(uint *))dword_21E0E94[0])(v8);
        }
      }
      Function_205fb88((int)v8, v6, v7, v9, a5);
      Function_205f378(v8);
      result = Function_205f3b8((int)v8);
    }
  }
  return result;
}

//----- (0205F224) --------------------------------------------------------
int __fastcall Function_205f224(int a1, uint a2)
{
  return Function_205f22c(a1, a2);
}

//----- (0205F22C) --------------------------------------------------------
int __fastcall Function_205f22c(int a1, uint a2)
{
  uint *v2
  uint v3
  uint *v4
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15

  v2 = (uint *)a1;
  v3 = a2;
  v4 = (uint *)Function_205eb3c(a1);
  if ( IsSpriteMovable(v4) == 1 )
    return 1;
  if ( v3 == -1 )
    return 0;
  v6 = GetSpriteMovementNr((int)v4);
  if ( Function_20613d8(v6) != 1 )
    return 0;
  if ( Function_205f158(v2) == 1 )
  {
    v9 = Function_20611fc(v2, (int)v4, v3);
    if ( v9 & 0xFFFFFF7F )
    {
      if ( Function_205f108(v2) == 2 )
      {
        v8 = GetSpriteSpriteListFirstSprite((int)v4);
        v10 = LoadSpritePositionX((int)v4);
        v11 = LoadSpritePositionZ((int)v4);
        v12 = LoadSpritePositionY((int)v4);
        v15 = v10;
        v14 = v11 / 2;
        v13 = v12;
        Function_2061674(v2, v3, &v15, &v14, &v13);
        if ( !((int (__fastcall *)(int, int, int, int))dword_2250FBC[0])(v8, v15, v14, v13)
          && ((int (__fastcall *)(int, int, int, int))dword_2250FD8[0])(v8, v15, v14, v13) == 1 )
        {
          ((void (__fastcall *)(int, int, int, int))dword_2251000[0])(v8, v15, v14, v13);
          v9 = Function_20611fc(v2, (int)v4, v3);
          ((void (__fastcall *)(int, int, int, int))dword_2251000[0])(v8, v10, v11 / 2, v12);
        }
      }
    }
  }
  else
  {
    v9 = Function_2060b7c((int)v2, (int)v4, v3, v7);
  }
  if ( !v9 )
    return 1;
  if ( v9 != 32 || Function_205eb74((int)v2) != 2 )
    return 0;
  return 1;
}

//----- (0205F350) --------------------------------------------------------
uint *__fastcall Function_205f350(uint *a1, int a2, int a3, char a4)
{
  char v4
  uint *v5
  int v6
  int v7

  v4 = a4;
  v5 = a1;
  v6 = Function_2061310(a4);
  v7 = Function_206132c(v4);
  Function_205ebec((int)v5, v6, v7);
  return Function_205f054(v5);
}

//----- (0205F378) --------------------------------------------------------
uint *__fastcall Function_205f378(uint *a1)
{
  uint *v1
  uint *result
  uint *v3

  v1 = a1;
  result = (uint *)Function_205f060(a1);
  if ( result == (uint *)1 )
  {
    result = (uint *)Function_205eb0c((int)v1);
    if ( result == (uint *)1 )
    {
      Function_205ef6c(v1, 0);
      result = (uint *)Function_205f008(v1);
      if ( result == (uint *)1 )
      {
        Function_205eff0(v1, 0);
        v3 = (uint *)Function_205eb3c((int)v1);
        result = Function_2062ee0(v3, 0);
      }
    }
  }
  return result;
}

//----- (0205F3B8) --------------------------------------------------------
int __fastcall Function_205f3b8(int a1)
{
  int v1
  int result
  uint *v3
  int v4
  int v5
  int v6
  int v7
  int v8

  v1 = a1;
  result = Function_205eb0c(a1);
  if ( result == 1 )
  {
    v3 = (uint *)Function_205eb3c(v1);
    v4 = (uchar)Function_2062be8((int)v3);
    v5 = GetSpriteMovementNr((int)v3);
    v6 = Function_206587c(v5);
    if ( v6 == -1 )
      v7 = v4;
    else
      v7 = Function_2064238((int)v3, v6) & 0xFF;
    if ( Function_20640d4(v3, v4) == 1 || Function_205dfac(v4) == 1 )
      Function_2005748(0x549u);
    if ( Function_205de5c(v4) == 1 )
      Function_2005748(0x641u);
    if ( Function_205db78(v4) == 1 )
      Function_2005748(0x642u);
    Function_205db6c(v4);
    if ( Function_205dce0(v4) == 1 && Function_205dcf0(v4) != 1 )
      Function_2005748(0x655u);
    v8 = GetSpriteMovementNr((int)v3);
    result = Function_20613d8(v8);
    if ( !result )
    {
      if ( Function_205dad4(v4) == 1 || (result = Function_205dad4(v7), result == 1) )
        result = Function_2005748(0x653u);
    }
  }
  return result;
}

//----- (0205F490) --------------------------------------------------------
int __fastcall Function_205f490(int a1)
{
  int v1
  int v2
  int v3
  uint *v4
  int v5
  int result
  int v7

  v1 = a1;
  v2 = Function_205eb0c(a1);
  v3 = Function_205eb14(v1);
  v4 = (uint *)Function_205eb3c(v1);
  Function_205eb10(v1, 0);
  v5 = Function_205f644(v1, -1);
  if ( v5 && v5 != 5 )
    return Function_205eb10(v1, 2);
  result = IsSpriteMovable(v4);
  if ( result )
  {
    result = Function_2065684(v4);
    if ( result == 1 && v2 )
    {
      if ( v2 == 1 )
      {
        if ( v3 )
        {
          if ( v3 == 3 )
            result = Function_205eb10(v1, 0);
          else
            result = Function_205eb10(v1, 3);
        }
      }
      else if ( v2 == 2 && v3 )
      {
        if ( v3 == 3 )
          result = Function_205eb10(v1, 0);
        else
          result = Function_205eb10(v1, 3);
      }
    }
  }
  else if ( v2 )
  {
    if ( v2 == 1 )
    {
      v7 = GetSpriteMovementNr((int)v4);
      result = Function_20613d8(v7);
      if ( result != 1 )
      {
        if ( v3 && v3 != 3 )
          result = Function_205eb10(v1, 2);
        else
          result = Function_205eb10(v1, 1);
      }
    }
    else if ( v2 == 2 )
    {
      result = Function_205eb10(v1, 2);
    }
  }
  return result;
}

//----- (0205F56C) --------------------------------------------------------
uint *__fastcall Function_205f56c(int a1)
{
  uint *v1

  v1 = (uint *)a1;
  Function_205eb08(a1, 0);
  Function_205eb10((int)v1, 0);
  return Function_205ebc0(v1);
}

//----- (0205F588) --------------------------------------------------------
int __fastcall Function_205f588(int a1)
{
  int v1
  int v2
  int v3
  int result
  uint *v5
  int v6

  v1 = a1;
  v2 = Function_205eb0c(a1);
  v3 = Function_205eb14(v1);
  if ( !v2 )
    return 1;
  if ( v2 == 2 )
    return 1;
  if ( v2 != 1 )
    goto LABEL_16;
  if ( !v3 || v3 == 3 )
    return 1;
  v5 = (uint *)Function_205eb3c(v1);
  if ( IsSpriteMovable(v5) == 1 )
    return 1;
  v6 = GetSpriteMovementNr((int)v5);
  if ( Function_20613d8(v6) != 1 )
LABEL_16:
    result = 0;
  else
    result = 1;
  return result;
}

//----- (0205F5E4) --------------------------------------------------------
uint *__fastcall Function_205f5e4(int a1, int a2)
{
  int v2
  int v3
  uint *v4
  int v5

  v2 = a2;
  v3 = a1;
  Function_205eb08(a1, 0);
  Function_205eb10(v3, 0);
  v4 = (uint *)Function_205eb3c(v3);
  ChangeSpriteFaceDirection_WithCheck(v4, v2);
  SetSpritea0((int)v4, 0);
  CopySpritePositionsFromOldToNew((int)v4);
  Function_20656dc(v4);
  v5 = Function_2065838(v2, 0);
  return Function_2065638(v4, v5);
}

//----- (0205F62C) --------------------------------------------------------
BOOL __fastcall Function_205f62c(int a1, int a2)
{
  int v2
  int v3
  int v4

  v2 = a1;
  v3 = a2;
  v4 = Function_205f644(a1, a2);
  return Function_205f6a4(v2, v4, v3);
}

//----- (0205F644) --------------------------------------------------------
int __fastcall Function_205f644(int a1, int a2)
{
  uint *v2
  int v3
  int v4
  int v5
  uchar v6
  BOOL (__fastcall **v8)(int)

  v2 = (uint *)a1;
  v3 = a2;
  v4 = 0;
  v5 = Function_205eb3c(a1);
  v6 = Function_2062be8(v5);
  if ( Function_2061630((int)v2, v6, v3) == 1 )
    return 5;
  if ( Function_205ef84(v2) == 1 )
    return 0;
  v8 = (BOOL (__fastcall **)(int))&off_20EDB84;
  do
  {
    if ( (*v8)(v6) == 1 )
      return Unknown_20edb88[2 * v4];
    v8 += 2;
    ++v4;
  }
  while ( *v8 );
  return 0;
}

//----- (0205F6A4) --------------------------------------------------------
BOOL __fastcall Function_205f6a4(int a1, int a2, int a3)
{
  return ((int (__fastcall *)(int, int))*(&JumpTable_20edaec + a2))(a1, a3) == 1;
}

//----- (0205F6C4) --------------------------------------------------------
int __fastcall Function_205f6c4(uint *a1)
{
  Function_205fa6c(a1);
  return 0;
}

//----- (0205F6D0) --------------------------------------------------------
int __fastcall Function_205f6d0(int a1)
{
  uint *v1
  uint *v2
  int v3
  int v4
  int v5
  int v6
  int result
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13

  v1 = (uint *)a1;
  v2 = (uint *)Function_205eb3c(a1);
  v3 = LoadSpriteFace2Direction((int)v2);
  v4 = Function_205fab0((int)v1, v3);
  v6 = Function_2060b7c((int)v1, (int)v2, v3, v5);
  Function_205ef40(v1, 1);
  if ( v6 )
  {
    Function_205fa6c(v1);
    if ( v4 == 1 )
    {
      v8 = GetOppositeFaceDirection(v3);
      if ( Function_2060b7c((int)v1, (int)v2, v8, v9) )
      {
        result = 0;
      }
      else
      {
        SetSpriteFlags(v2, 384);
        v10 = Function_2065838(v8, 8);
        Function_2060b64((int)v1, v2, v10, 3);
        Function_205ef6c(v1, 1);
        Function_205ef40(v1, 1);
        Function_205ebec((int)v1, -1, -1);
        Function_205eb08((int)v1, 1);
        result = 1;
      }
    }
    else
    {
      Function_205ef6c(v1, 1);
      Function_205eb08((int)v1, 0);
      result = 0;
    }
  }
  else
  {
    if ( Function_205fb10((int)v1, v4) )
    {
      SetSpriteFlags(v2, 384);
      Function_205fb40((int)v1, v3);
    }
    else
    {
      Function_205fa6c(v1);
      v11 = GetOppositeFaceDirection(v3);
      if ( Function_2060b7c((int)v1, (int)v2, v11, v12) )
        return 0;
      SetSpriteFlags(v2, 384);
      v13 = Function_2065838(v11, 8);
      Function_2060b64((int)v1, v2, v13, 3);
      Function_205ef6c(v1, 1);
      Function_205ef40(v1, 1);
      Function_205ebec((int)v1, -1, -1);
    }
    Function_205eb08((int)v1, 1);
    result = 1;
  }
  return result;
}

//----- (0205F808) --------------------------------------------------------
int __fastcall Function_205f808(int a1, int a2)
{
  uint *v2
  int v3
  uint *v4
  int v5
  int v6
  int result
  int v8
  int v9
  int v10
  int v11
  int v12

  v2 = (uint *)a1;
  v3 = a2;
  v4 = (uint *)Function_205eb3c(a1);
  v5 = LoadSpriteFace2Direction((int)v4);
  Function_2005748(0x654u);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( Function_205f034(v2) )
      {
        SetSpriteFlags(v4, 384);
        v12 = Function_2065838(1, 8);
        Function_2060b64((int)v2, v4, v12, 3);
        Function_205ef40(v2, 1);
        Function_205eb08((int)v2, 1);
        Function_205f01c(v2, 1);
        Function_205ebec((int)v2, -1, -1);
        result = 1;
      }
      else
      {
        v11 = Function_2065838(1, 21);
        Function_2060b64((int)v2, v4, v11, 6);
        Function_205eb08((int)v2, 1);
        if ( Function_205ec88((int)v2) == 1 )
          Function_205ebbc((int)v2, 3);
        Function_205ebec((int)v2, -1, -1);
        result = 1;
      }
    }
    else
    {
      result = 0;
    }
  }
  else if ( Function_205eb74((int)v2) != 1 || Function_205ebb8((int)v2) < 3 || v3 )
  {
    v8 = GetOppositeFaceDirection(0);
    if ( Function_2060b7c((int)v2, (int)v4, v8, v9) )
    {
      result = 0;
    }
    else
    {
      SetSpriteFlags(v4, 384);
      v10 = Function_2065838(v8, 8);
      Function_2060b64((int)v2, v4, v10, 3);
      Function_205ebc0(v2);
      Function_205ef40(v2, 1);
      Function_205eb08((int)v2, 1);
      Function_205f01c(v2, 1);
      Function_205ebec((int)v2, -1, -1);
      result = 1;
    }
  }
  else
  {
    v6 = Function_2065838(0, 21);
    Function_2060b64((int)v2, v4, v6, 6);
    Function_205eb08((int)v2, 1);
    result = 1;
  }
  return result;
}

//----- (0205F95C) --------------------------------------------------------
int __fastcall Function_205f95c(int a1)
{
  uint *v1
  uint *v2

  v1 = (uint *)a1;
  v2 = (uint *)Function_205eb3c(a1);
  LoadSpriteFace2Direction((int)v2);
  if ( Function_205ec88((int)v1) == 1 )
  {
    Function_2005748(0x656u);
    Function_2060b64((int)v1, v2, 95, 2);
  }
  else
  {
    Function_2060b64((int)v1, v2, 93, 3);
  }
  Function_205ef40(v1, 1);
  Function_205f074(v1, 1);
  return 1;
}

//----- (0205F9AC) --------------------------------------------------------
int __fastcall Function_205f9ac(int a1)
{
  uint *v1
  uint *v2

  v1 = (uint *)a1;
  v2 = (uint *)Function_205eb3c(a1);
  LoadSpriteFace2Direction((int)v2);
  if ( Function_205ec88((int)v1) == 1 )
  {
    Function_2005748(0x656u);
    Function_2060b64((int)v1, v2, 94, 2);
  }
  else
  {
    Function_2060b64((int)v1, v2, 92, 2);
  }
  Function_205ef40(v1, 1);
  Function_205f074(v1, 1);
  return 1;
}

//----- (0205F9FC) --------------------------------------------------------
int __fastcall Function_205f9fc(int a1)
{
  uint *v1
  uint *v2
  int v3
  int v4
  int v6

  v1 = (uint *)a1;
  v2 = (uint *)Function_205eb3c(a1);
  if ( Function_2060b7c((int)v1, (int)v2, 1, v3) )
  {
    v6 = Function_2065838(1, 1);
    Function_2060b64((int)v1, v2, v6, 1);
    Function_205ebc0(v1);
    Function_205eb08((int)v1, 0);
    Function_205ef98(v1, 0);
  }
  else
  {
    v4 = Function_2065838(1, 20);
    Function_2060b64((int)v1, v2, v4, 6);
    Function_205eb08((int)v1, 1);
    Function_205ebbc((int)v1, 3);
  }
  return 1;
}

//----- (0205FA6C) --------------------------------------------------------
uint *__fastcall Function_205fa6c(uint *a1)
{
  uint *v1
  uint *result
  uint *v3

  v1 = a1;
  result = (uint *)Function_205ef58(a1);
  if ( result == (uint *)1 )
  {
    v3 = (uint *)Function_205eb3c((int)v1);
    UnsetSpriteFlags(v3, 384);
    if ( !Function_205f08c(v1) )
      Function_205ebc0(v1);
    Function_205ef40(v1, 0);
    Function_205f074(v1, 0);
    result = Function_205f01c(v1, 0);
  }
  return result;
}

//----- (0205FAB0) --------------------------------------------------------
int __fastcall Function_205fab0(int a1, uint a2)
{
  uint v2
  uint *v3
  int v4
  int v6
  int v7
  int v8
  char v9
  int v10
  int v11

  v2 = a2;
  v3 = (uint *)Function_205eb3c(a1);
  v4 = GetSpriteSpriteListFirstSprite((int)v3);
  CopySprite70Struct(v3, &v9);
  v6 = *(uint *)&v9;
  v7 = v10;
  v8 = v11;
  Function_2064418(v2, (uint *)&v6, 0x4000);
  if ( !Function_20644a4(v4, &v6) || v10 == v7 )
    return 0;
  if ( v10 <= v7 )
    return 1;
  return 2;
}

//----- (0205FB10) --------------------------------------------------------
int __fastcall Function_205fb10(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5

  v2 = a1;
  v3 = a2;
  v4 = Function_205ebb8(a1);
  v5 = v4;
  if ( v3 == 1 )
  {
    v5 = v4 - 1;
    if ( v4 - 1 < 0 )
      return 0;
  }
  else if ( v3 == 2 )
  {
    v5 = v4 + 1;
    if ( v4 + 1 > 3 )
      v5 = 3;
  }
  Function_205ebbc(v2, v5);
  return 1;
}

//----- (0205FB40) --------------------------------------------------------
uint *__fastcall Function_205fb40(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  uint *v9

  v2 = a1;
  v3 = a2;
  v9 = (uint *)Function_205eb3c(a1);
  v4 = 16;
  v5 = Function_205ebb8(v2);
  v6 = 5;
  switch ( v5 )
  {
    case 1:
      v4 = 80;
      break;
    case 2:
      v4 = 20;
      v6 = 6;
      break;
    case 3:
      v4 = 20;
      v6 = 6;
      break;
  }
  v7 = Function_2065838(v3, v4);
  return Function_2060b64(v2, v9, v7, v6);
}

//----- (0205FB88) --------------------------------------------------------
uint *__fastcall Function_205fb88(int a1, int a2, int a3, ushort a4, char a5)
{
  int v5
  int v6
  ushort v7
  int v8
  uint *v9
  int v11

  v5 = a1;
  v6 = a2;
  v11 = a3;
  v7 = a4;
  v8 = Function_205eb74(a1);
  v9 = (uint *)Function_205eb3c(v5);
  switch ( v8 )
  {
    case 0:
      return Function_205fbe4(v5, v9, v6, v11, v7, a5);
    case 1:
      return Function_20602dc(v5, (int)v9, v6, v11, v7);
    case 2:
      return Function_205fbe4(v5, v9, v6, v11, v7, a5);
  }
  return (uint *)ErrorHandler();
}

//----- (0205FBE4) --------------------------------------------------------
uint *__fastcall Function_205fbe4(int a1, uint *a2, int a3, int a4, ushort a5, char a6)
{
  int v6
  uint *v7
  uint *v8
  uint *result

  v6 = a4;
  v7 = a2;
  v8 = (uint *)a1;
  result = (uint *)Function_205fc48(a1, a4);
  if ( !result )
    return Function_205fd20((int)v8, (int)v7);
  if ( result == (uint *)1 )
    return Function_205fd40(v8, (int)v7, v6, a5, a6);
  if ( result == (uint *)2 )
    result = (uint *)Function_2060258(v8, v7, v6, a5);
  return result;
}

//----- (0205FC48) --------------------------------------------------------
int __fastcall Function_205fc48(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5

  v2 = a1;
  v3 = Function_205fcc0(a1, a2);
  v4 = v3;
  v5 = Function_205fc64(v3);
  Function_205eb08(v2, v5);
  return v4;
}

//----- (0205FC64) --------------------------------------------------------
int __fastcall Function_205fc64(int a1)
{
  switch ( a1 )
  {
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return 2;
  }
  ErrorHandler();
  return 0;
}

//----- (0205FC88) --------------------------------------------------------
int __fastcall Function_205fc88(int a1, int a2, int a3)
{
  int v3
  int v4

  v3 = a2;
  v4 = a3;
  if ( Function_205dd5c(a2) == 1 )
    return 4;
  if ( Function_205dd50(v3) == 1 )
    return 8;
  if ( Function_205dd44(v3) == 1 )
    v4 = 12;
  return v4;
}

//----- (0205FCBC) --------------------------------------------------------
int __fastcall Function_205fcbc(int a1, int a2, int a3)
{
  return a3;
}

//----- (0205FCC0) --------------------------------------------------------
int __fastcall Function_205fcc0(int a1, int a2)
{
  int v2
  uint *v3
  int result
  int v5
  int v6

  v2 = a2;
  v3 = (uint *)a1;
  if ( a2 == -1 )
  {
    Function_205eb08(a1, 0);
    result = 0;
  }
  else
  {
    v5 = GetSpriteFaceDirection(a1);
    v6 = Function_205f108(v3);
    if ( v6 && v6 != 1 && v6 != 2 )
      v5 = Function_205ea94((int)v3);
    if ( v5 == v2 || Function_205eb0c((int)v3) == 1 )
    {
      Function_205eb08((int)v3, 1);
      result = 1;
    }
    else
    {
      Function_205eb08((int)v3, 2);
      result = 2;
    }
  }
  return result;
}

//----- (0205FD20) --------------------------------------------------------
uint *__fastcall Function_205fd20(int a1, int a2)
{
  uint *v2
  int v3
  int v4
  int v5

  v2 = (uint *)a2;
  v3 = a1;
  v4 = LoadSpriteFaceDirection(a2);
  v5 = Function_2065838(v4, 0);
  return Function_2060b64(v3, v2, v5, 1);
}

//----- (0205FD40) --------------------------------------------------------
uint *__fastcall Function_205fd40(uint *a1, int a2, int a3, int a4, char a5)
{
  uint *v5
  int v6
  int v7
  uint *result
  char v9
  int v10

  v10 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  switch ( (uchar)Function_205f108(a1) )
  {
    case 2u:
      result = Function_205fecc(v5, v6, v7, v10, a5);
      break;
    case 3u:
      result = Function_20600cc(v5, v6, v7, v10, v9);
      break;
    case 4u:
      result = Function_2060150(v5, v6, v7, v10, a5);
      break;
    case 5u:
      result = Function_20601d4(v5, v6, v7, v10, a5);
      break;
    default:
      result = Function_205fdc8((int)v5, v6, v7, v10, a5);
      break;
  }
  return result;
}

//----- (0205FDC8) --------------------------------------------------------
uint *__fastcall Function_205fdc8(int a1, int a2, int a3, int a4, char a5)
{
  uint *v5
  uint *v6
  int v7
  int v8
  int v9
  int v10
  int v11
  uchar v12
  uchar v13
  int v15
  int v16

  v5 = (uint *)a1;
  v6 = (uint *)a2;
  v15 = a3;
  v7 = Function_2060b7c(a1, a2, a3, a4);
  if ( Function_205eb74((int)v5) == 2 )
  {
    if ( v7 && v7 != 32 )
    {
      v16 = 28;
      v8 = 1;
      if ( !(v7 & 8) )
        Function_2005748(0x601u);
      ChangeSpriteFace2Direction((int)v6, v15);
    }
    else
    {
      v8 = 5;
      v13 = Function_2062be8((int)v6);
      v16 = Function_205fcbc((int)v6, v13, 16);
      Function_20615c8((int)v5);
      Function_205f048(v5);
    }
    goto LABEL_20;
  }
  v8 = 4;
  if ( !(v7 & 4) )
  {
    if ( v7 & 0x80 )
    {
      v8 = 2;
      v9 = Function_2065838(v15, 117);
      return Function_2060b64((int)v5, v6, v9, v8);
    }
    if ( v7 )
    {
      v16 = 28;
      v8 = 1;
      if ( !(v7 & 8) )
        Function_2005748(0x601u);
      ChangeSpriteFace2Direction((int)v6, v15);
    }
    else
    {
      v10 = 12;
      v11 = Function_205ec0c((int)v5);
      if ( Function_205ec40(v11) == 1 && Function_20613fc((int)v5, a5) == 1 )
      {
        v10 = 88;
        v8 = 5;
      }
      v12 = Function_2062be8((int)v6);
      v16 = Function_205fc88((int)v6, v12, v10);
      Function_20615c8((int)v5);
      Function_205f048(v5);
    }
LABEL_20:
    v9 = Function_2065838(v15, v16);
    return Function_2060b64((int)v5, v6, v9, v8);
  }
  v8 = 3;
  v9 = Function_2065838(v15, 56);
  return Function_2060b64((int)v5, v6, v9, v8);
}

//----- (0205FECC) --------------------------------------------------------
uint *__fastcall Function_205fecc(uint *a1, int a2, uint a3, int a4, char a5)
{
  uint *v5
  uint *v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  uint v14
  int v15
  int v16
  int v17

  v5 = a1;
  v6 = (uint *)a2;
  v14 = a3;
  v7 = Function_20611fc(a1, a2, a3);
  if ( v7 & 0xFFFFFF7F )
  {
    v8 = GetSpriteSpriteListFirstSprite((int)v6);
    v17 = LoadSpritePositionX((int)v6);
    v16 = LoadSpritePositionZ((int)v6);
    v15 = LoadSpritePositionY((int)v6);
    v16 /= 2;
    Function_2061674(v5, v14, &v17, &v16, &v15);
    if ( !((int (__fastcall *)(int, int, int, int))dword_2250FBC[0])(v8, v17, v16, v15)
      && ((int (__fastcall *)(int, int, int, int))dword_2250FD8[0])(v8, v17, v16, v15) == 1 )
    {
      ((void (__fastcall *)(int, int, int, int))dword_2251000[0])(v8, v17, v16, v15);
      v7 = Function_20611fc(v5, (int)v6, v14);
    }
  }
  if ( Function_205eb74((int)v5) == 2 )
  {
    if ( v7 && v7 != 32 )
    {
      v9 = 28;
      v10 = 1;
      Function_2005748(0x601u);
      ChangeSpriteFace2Direction((int)v6, v14);
    }
    else
    {
      v10 = 5;
      v9 = 16;
      Function_20615c8((int)v5);
      Function_205f048(v5);
    }
  }
  else if ( v7 & 0x80 )
  {
    v9 = 117;
    v10 = 2;
    Function_20615c8((int)v5);
    Function_205f048(v5);
  }
  else if ( v7 )
  {
    v9 = 28;
    v10 = 1;
    Function_2005748(0x601u);
    ChangeSpriteFace2Direction((int)v6, v14);
  }
  else
  {
    v9 = 12;
    v10 = 4;
    v11 = Function_205ec0c((int)v5);
    if ( Function_205ec40(v11) == 1 && Function_20613fc((int)v5, a5) == 1 )
    {
      v9 = 88;
      v10 = 5;
    }
    Function_20615c8((int)v5);
    Function_205f048(v5);
  }
  v12 = Function_2065838(v14, v9);
  return Function_2060b64((int)v5, v6, v12, v10);
}

//----- (0206000C) --------------------------------------------------------
uint *__fastcall Function_206000c(uint *a1, int a2, uint a3, int a4, char a5, int a6, int a7, int a8, int a9, int a10)
{
  uint *v10
  uint v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17
  int v18
  uint *v20

  v10 = a1;
  v20 = (uint *)a2;
  v11 = a3;
  v12 = Function_20611fc(a1, a2, a3);
  if ( Function_205eb74((int)v10) == 2 )
  {
    if ( v12 && v12 != 32 )
    {
      v18 = 4 * v11;
      v14 = *(uint *)(a9 + 4 * v11);
      v15 = 1;
      Function_2005748(0x601u);
      ChangeSpriteFace2Direction((int)v20, *(uint *)(a10 + v18));
    }
    else
    {
      v14 = *(uint *)(a8 + 4 * v11);
      v15 = 4;
      Function_20615c8((int)v10);
      Function_205f048(v10);
    }
  }
  else if ( v12 )
  {
    v13 = 4 * v11;
    v14 = *(uint *)(a9 + 4 * v11);
    v15 = 1;
    Function_2005748(0x601u);
    ChangeSpriteFace2Direction((int)v20, *(uint *)(a10 + v13));
  }
  else
  {
    v16 = 4 * v11;
    v14 = *(uint *)(a6 + 4 * v11);
    v15 = 4;
    v17 = Function_205ec0c((int)v10);
    if ( Function_205ec40(v17) == 1 && Function_20613fc((int)v10, a5) == 1 )
    {
      v15 = 5;
      v14 = *(uint *)(a7 + v16);
    }
    Function_20615c8((int)v10);
  }
  return Function_2060b64((int)v10, v20, v14, v15);
}

//----- (020600CC) --------------------------------------------------------
uint *__fastcall Function_20600cc(uint *a1, int a2, uint a3, int a4, char a5)
{
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17
  int v18
  int v19
  int v20
  int v21
  int v22
  int v23
  int v24
  int v25
  int v26

  v26 = a4;
  v22 = 105;
  v23 = 106;
  v24 = 107;
  v25 = 108;
  v18 = 121;
  v19 = 122;
  v20 = 123;
  v21 = 124;
  v14 = 105;
  v15 = 106;
  v16 = 107;
  v17 = 108;
  v10 = 30;
  v11 = 31;
  v12 = 29;
  v13 = 28;
  v6 = 0;
  v7 = 1;
  v8 = 2;
  v9 = 3;
  return Function_206000c(a1, a2, a3, a4, a5, (int)&v22, (int)&v18, (int)&v14, (int)&v10, (int)&v6);
}

//----- (02060150) --------------------------------------------------------
uint *__fastcall Function_2060150(uint *a1, int a2, uint a3, int a4, char a5)
{
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17
  int v18
  int v19
  int v20
  int v21
  int v22
  int v23
  int v24
  int v25
  int v26

  v26 = a4;
  v22 = 109;
  v23 = 110;
  v24 = 111;
  v25 = 112;
  v18 = 125;
  v19 = 126;
  v20 = 127;
  v21 = 128;
  v14 = 109;
  v15 = 110;
  v16 = 111;
  v17 = 112;
  v10 = 31;
  v11 = 30;
  v12 = 28;
  v13 = 29;
  v6 = 0;
  v7 = 1;
  v8 = 2;
  v9 = 3;
  return Function_206000c(a1, a2, a3, a4, a5, (int)&v22, (int)&v18, (int)&v14, (int)&v10, (int)&v6);
}

//----- (020601D4) --------------------------------------------------------
uint *__fastcall Function_20601d4(uint *a1, int a2, uint a3, int a4, char a5)
{
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17
  int v18
  int v19
  int v20
  int v21
  int v22
  int v23
  int v24
  int v25
  int v26

  v26 = a4;
  v22 = 113;
  v23 = 114;
  v24 = 115;
  v25 = 116;
  v18 = 129;
  v19 = 130;
  v20 = 131;
  v21 = 132;
  v14 = 113;
  v15 = 114;
  v16 = 115;
  v17 = 116;
  v10 = 29;
  v11 = 28;
  v12 = 31;
  v13 = 30;
  v6 = 0;
  v7 = 1;
  v8 = 2;
  v9 = 3;
  return Function_206000c(a1, a2, a3, a4, a5, (int)&v22, (int)&v18, (int)&v14, (int)&v10, (int)&v6);
}

//----- (02060258) --------------------------------------------------------
int __fastcall Function_2060258(uint *a1, uint *a2, int a3, int a4)
{
  int v4
  uint *v5
  uint *v6
  int v7
  int v8
  int v9
  int v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17
  int v18
  int v19
  int v20
  int v21
  int v22
  int v23

  v23 = a4;
  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = Function_205f108(a1);
  switch ( v8 )
  {
    case 3:
      v19 = 2;
      v20 = 3;
      v21 = 1;
      v22 = 0;
      v7 = *(&v19 + v4);
      break;
    case 4:
      v15 = 3;
      v16 = 2;
      v17 = 0;
      v18 = 1;
      v7 = *(&v15 + v4);
      break;
    case 5:
      v11 = 1;
      v12 = 0;
      v13 = 3;
      v14 = 2;
      v7 = *(&v11 + v4);
      break;
  }
  v9 = Function_2065838(v7, 40);
  Function_2060b64((int)v5, v6, v9, 1);
  return ChangeSpriteFace2Direction((int)v6, v4);
}

//----- (020602DC) --------------------------------------------------------
uint *__fastcall Function_20602dc(int a1, int a2, int a3, int a4, ushort a5)
{
  uint *v5
  int v6
  int v7
  int v8
  uint *result

  v5 = (uint *)a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( Function_205ec88(a1) == 1 )
    result = Function_206078c((int)v5, v6, v7, v8, a5);
  else
    result = Function_2060420(v5, v6, v7, v8, a5);
  return result;
}

//----- (02060324) --------------------------------------------------------
int __fastcall Function_2060324(int a1, char a2)
{
  int v2
  char v3
  int result
  int v5
  uchar v6
  uchar v7
  int v8

  v2 = a1;
  v3 = a2;
  result = Function_205eb74(a1);
  if ( result == 1 )
  {
    result = 2;
    if ( v3 & 2 )
    {
      v5 = Function_205eb3c(v2);
      v6 = Function_2062be8(v5);
      v7 = v6;
      result = Function_205dd90(v6);
      if ( !result )
      {
        result = Function_205dd9c(v7);
        if ( !result )
        {
          v8 = 1;
          if ( Function_205ec88(v2) == 1 )
            v8 = 0;
          Function_205ec78(v2, v8);
          if ( v8 )
            result = Function_2005748(0x619u);
          else
            result = Function_2005748(0x61Cu);
        }
      }
    }
  }
  return result;
}

//----- (02060390) --------------------------------------------------------
int __fastcall Function_2060390(int a1, int a2)
{
  int v2
  int v3
  int v4

  v2 = a2;
  v3 = 76;
  v4 = Function_205ebb8(a1);
  switch ( v4 )
  {
    case 1:
      v3 = 16;
      break;
    case 2:
      v3 = 80;
      break;
    case 3:
      v3 = 20;
      break;
  }
  return Function_2065838(v2, v3);
}

//----- (020603BC) --------------------------------------------------------
BOOL __fastcall Function_20603bc(int a1)
{
  uint *v1
  int v2

  v1 = (uint *)a1;
  v2 = Function_205ebcc(a1, 1, 3);
  if ( !Function_205efb0(v1) && v2 >= 2 )
    Function_205ef98(v1, 1);
  return v2 == 3;
}

//----- (020603EC) --------------------------------------------------------
int __fastcall Function_20603ec(int a1)
{
  uint *v1
  int v2
  int v3

  v1 = (uint *)a1;
  v2 = 1;
  v3 = Function_205ebb8(a1) - 1;
  if ( v3 < 0 )
  {
    v3 = 0;
    v2 = 0;
  }
  Function_205ebbc((int)v1, v3);
  if ( Function_205efb0(v1) == 1 && !v3 )
    Function_205ef98(v1, 0);
  return v2;
}

//----- (02060420) --------------------------------------------------------
uint *__fastcall Function_2060420(uint *a1, int a2, int a3, int a4, int a5)
{
  uint *v5
  uint *v6
  uint *result
  int v8
  int v9

  v5 = (uint *)a2;
  v6 = a1;
  v9 = a4;
  result = (uint *)Function_2060494(a1, a4);
  switch ( (uchar)result )
  {
    case 0:
      result = Function_2060548(v6, (int)v5);
      break;
    case 1:
      result = Function_2060570((int)v6, (int)v5, v8, a5);
      break;
    case 2:
      result = Function_2060688(v6, v5, v9);
      break;
    case 3:
      result = Function_20606c8((int)v6, v5);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02060494) --------------------------------------------------------
int __fastcall Function_2060494(uint *a1, int a2)
{
  uint *v2
  int v3
  int v4
  int v5

  v2 = a1;
  v3 = Function_20604e4(a1, a2);
  v4 = v3;
  v5 = Function_20604b0(v3);
  Function_205eb08((int)v2, v5);
  return v4;
}

//----- (020604B0) --------------------------------------------------------
int __fastcall Function_20604b0(uint a1)
{
  int result

  switch ( (uchar)a1 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      result = 1;
      break;
    case 2:
      result = 2;
      break;
    case 3:
      result = 1;
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (020604E4) --------------------------------------------------------
int __fastcall Function_20604e4(uint *a1, int a2)
{
  int v2
  uint *v3
  int result
  int v5

  v2 = a2;
  v3 = a1;
  if ( a2 == -1 )
  {
    if ( Function_205efb0(a1) == 1 )
    {
      Function_205eb08((int)v3, 1);
      result = 3;
    }
    else
    {
      Function_205eb08((int)v3, 0);
      result = 0;
    }
  }
  else
  {
    v5 = GetSpriteFaceDirection((int)a1);
    Function_205ef98(v3, 0);
    if ( v5 == v2 || Function_205eb0c((int)v3) == 1 )
    {
      Function_205eb08((int)v3, 1);
      result = 1;
    }
    else
    {
      Function_205eb08((int)v3, 2);
      result = 2;
    }
  }
  return result;
}

//----- (02060548) --------------------------------------------------------
uint *__fastcall Function_2060548(uint *a1, int a2)
{
  uint *v2
  uint *v3
  int v4
  int v5

  v2 = (uint *)a2;
  v3 = a1;
  v4 = LoadSpriteFaceDirection(a2);
  v5 = Function_2065838(v4, 0);
  Function_2060b64((int)v3, v2, v5, 1);
  return Function_205ebc0(v3);
}

//----- (02060570) --------------------------------------------------------
uint *__fastcall Function_2060570(int a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  int v6
  int v7
  int v8
  uint *v10
  int v11

  v4 = (uint *)a1;
  v10 = (uint *)a2;
  v11 = a3;
  v5 = Function_2060b7c(a1, a2, a3, a4);
  if ( v5 & 4 )
  {
    v6 = 56;
    v7 = 3;
    Function_20615c8((int)v4);
    Function_205f048(v4);
  }
  else if ( v5 & 0x80 )
  {
    v6 = 117;
    v7 = 2;
    Function_20615c8((int)v4);
    Function_205f048(v4);
  }
  else if ( v5 & 0x10 )
  {
    v6 = 80;
    v7 = 5;
    Function_20615c8((int)v4);
    Function_205f048(v4);
    Function_205ef40(v4, 1);
  }
  else if ( v5 & 0x40 )
  {
    v6 = 0;
    v7 = 1;
    v11 = LoadSpriteFace2Direction((int)v10);
    ChangeSpriteFace2Direction((int)v10, v11);
    Function_205ebc0(v4);
    Function_205ebec((int)v4, -1, -1);
  }
  else if ( v5 )
  {
    if ( Function_20615e0((int)v4, (int)v10, v11) )
    {
      v6 = 0;
      v7 = 1;
      v11 = LoadSpriteFace2Direction((int)v10);
      ChangeSpriteFace2Direction((int)v10, v11);
      Function_205ebc0(v4);
      Function_205ebec((int)v4, -1, -1);
    }
    else
    {
      v6 = 28;
      v7 = 1;
      if ( !(v5 & 8) )
        Function_2005748(0x601u);
      ChangeSpriteFace2Direction((int)v10, v11);
      Function_205ebc0(v4);
    }
  }
  else
  {
    v6 = 80;
    v7 = 5;
    Function_20615c8((int)v4);
    Function_205f048(v4);
    Function_205ebbc((int)v4, 2);
  }
  v8 = Function_2065838(v11, v6);
  return Function_2060b64((int)v4, v10, v8, v7);
}

//----- (02060688) --------------------------------------------------------
uint *__fastcall Function_2060688(uint *a1, uint *a2, uint a3)
{
  uint *v3
  uint *v4
  uint v5
  uint *result
  int v7

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_205ebc0(a1);
  result = (uint *)Function_20615e0((int)v3, (int)v4, v5);
  if ( result != (uint *)1 )
  {
    v7 = Function_2065838(v5, 40);
    Function_2060b64((int)v3, v4, v7, 1);
    ChangeSpriteFace2Direction((int)v4, v5);
    result = Function_205ebc0(v3);
  }
  return result;
}

//----- (020606C8) --------------------------------------------------------
uint *__fastcall Function_20606c8(int a1, uint *a2)
{
  uint *v2
  int v3
  int v4
  int v5
  int v6
  uint *v8
  int v9
  int v10

  v2 = (uint *)a1;
  v8 = a2;
  v9 = Function_20603ec(a1);
  v3 = Function_205ea94((int)v2);
  v5 = Function_2060b7c((int)v2, (int)v8, v3, v4);
  if ( v5 & 4 )
  {
    v10 = Function_2065838(v3, 56);
    v6 = 3;
  }
  else if ( v5 & 0x80 )
  {
    v10 = Function_2065838(v3, 117);
    v6 = 2;
  }
  else if ( v5 & 0x40 )
  {
    v10 = Function_2065838(v3, 0);
    v6 = 1;
    Function_205ebc0(v2);
  }
  else if ( v5 )
  {
    v9 = 0;
    v10 = Function_2065838(v3, 28);
    v6 = 1;
    if ( !(v5 & 8) )
      Function_2005748(0x601u);
    ChangeSpriteFace2Direction((int)v8, v3);
    Function_205ebc0(v2);
  }
  else
  {
    v10 = Function_2060390((int)v2, v3);
    v6 = 5;
  }
  if ( !v9 )
    Function_205ef98(v2, 0);
  return Function_2060b64((int)v2, v8, v10, v6);
}

//----- (0206078C) --------------------------------------------------------
uint *__fastcall Function_206078c(int a1, int a2, int a3, int a4, int a5)
{
  uint *v5
  uint *v6
  uint *result
  int v8
  int v9

  v5 = (uint *)a2;
  v6 = (uint *)a1;
  v9 = a4;
  result = (uint *)Function_2060800(a1, a4);
  switch ( (uchar)result )
  {
    case 0:
      result = Function_20608bc(v6, (int)v5);
      break;
    case 1:
      result = Function_20608e4((int)v6, (int)v5, v8, a5);
      break;
    case 2:
      result = Function_2060a60(v6, v5, v9);
      break;
    case 3:
      result = Function_2060aa0((int)v6, v5);
      break;
    default:
      return result;
  }
  return result;
}

//----- (02060800) --------------------------------------------------------
int __fastcall Function_2060800(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5

  v2 = a1;
  v3 = Function_2060850(a1, a2);
  v4 = v3;
  v5 = Function_206081c(v3);
  Function_205eb08(v2, v5);
  return v4;
}

//----- (0206081C) --------------------------------------------------------
int __fastcall Function_206081c(uint a1)
{
  int result

  switch ( (uchar)a1 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      result = 1;
      break;
    case 2:
      result = 2;
      break;
    case 3:
      result = 1;
      break;
    default:
      ErrorHandler();
      result = 0;
      break;
  }
  return result;
}

//----- (02060850) --------------------------------------------------------
int __fastcall Function_2060850(int a1, int a2)
{
  int v2
  int v3
  int v4
  int result

  v2 = a1;
  v3 = a2;
  v4 = Function_205ebb8(a1);
  if ( v3 == -1 )
  {
    if ( v4 >= 2 )
    {
      Function_205eb08(v2, 1);
      result = 3;
    }
    else
    {
      Function_205eb08(v2, 0);
      result = 0;
    }
  }
  else if ( GetSpriteFaceDirection(v2) == v3 || Function_205eb0c(v2) == 1 )
  {
    Function_205eb08(v2, 1);
    result = 1;
  }
  else if ( v4 >= 2 )
  {
    Function_205eb08(v2, 1);
    result = 3;
  }
  else
  {
    Function_205eb08(v2, 2);
    result = 2;
  }
  return result;
}

//----- (020608BC) --------------------------------------------------------
uint *__fastcall Function_20608bc(uint *a1, int a2)
{
  uint *v2
  uint *v3
  int v4
  int v5

  v2 = (uint *)a2;
  v3 = a1;
  v4 = LoadSpriteFaceDirection(a2);
  v5 = Function_2065838(v4, 0);
  Function_2060b64((int)v3, v2, v5, 1);
  return Function_205ebc0(v3);
}

//----- (020608E4) --------------------------------------------------------
uint *__fastcall Function_20608e4(int a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  int v6
  int v7
  int v8
  int v9
  uint *v11
  int v12

  v4 = (uint *)a1;
  v11 = (uint *)a2;
  v5 = a3;
  v6 = Function_2060b7c(a1, a2, a3, a4);
  if ( v6 & 4 )
  {
    v12 = Function_2065838(v5, 56);
    v7 = 3;
    Function_20603bc((int)v4);
    Function_20615c8((int)v4);
    Function_205f048(v4);
  }
  else if ( v6 & 0x80 )
  {
    v12 = Function_2065838(v5, 117);
    v7 = 2;
    Function_20603bc((int)v4);
    Function_20615c8((int)v4);
    Function_205f048(v4);
  }
  else if ( v6 & 0x10 )
  {
    if ( Function_205ebb8((int)v4) < 3 )
    {
      v12 = Function_2065838(v5, 28);
      v7 = 1;
      if ( !(v6 & 8) )
        Function_2005748(0x601u);
      ChangeSpriteFace2Direction((int)v11, v5);
      Function_205ebc0(v4);
    }
    else
    {
      v12 = Function_2060390((int)v4, v5);
      v7 = 5;
      Function_205f048(v4);
      Function_205ef40(v4, 1);
    }
  }
  else if ( v6 & 0x40 )
  {
    v8 = LoadSpriteFace2Direction((int)v11);
    v12 = Function_2065838(v8, 0);
    v7 = 1;
    ChangeSpriteFace2Direction((int)v11, v8);
    Function_205ebc0(v4);
    Function_205ebec((int)v4, -1, -1);
  }
  else if ( v6 )
  {
    if ( Function_20615e0((int)v4, (int)v11, v5) )
    {
      v7 = 1;
      v9 = LoadSpriteFace2Direction((int)v11);
      v12 = Function_2065838(v9, 0);
      ChangeSpriteFace2Direction((int)v11, v9);
      Function_205ebc0(v4);
      Function_205ebec((int)v4, -1, -1);
    }
    else
    {
      v12 = Function_2065838(v5, 28);
      v7 = 1;
      if ( !(v6 & 8) )
        Function_2005748(0x601u);
      ChangeSpriteFace2Direction((int)v11, v5);
      Function_205ebc0(v4);
    }
  }
  else
  {
    v7 = 5;
    v12 = Function_2060390((int)v4, v5);
    Function_20603bc((int)v4);
    Function_20615c8((int)v4);
    Function_205f048(v4);
  }
  return Function_2060b64((int)v4, v11, v12, v7);
}

//----- (02060A60) --------------------------------------------------------
uint *__fastcall Function_2060a60(uint *a1, uint *a2, uint a3)
{
  uint *v3
  uint *v4
  uint v5
  uint *result
  int v7

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Function_205ebc0(a1);
  result = (uint *)Function_20615e0((int)v3, (int)v4, v5);
  if ( result != (uint *)1 )
  {
    v7 = Function_2065838(v5, 40);
    Function_2060b64((int)v3, v4, v7, 1);
    ChangeSpriteFace2Direction((int)v4, v5);
    result = Function_205ebc0(v3);
  }
  return result;
}

//----- (02060AA0) --------------------------------------------------------
uint *__fastcall Function_2060aa0(int a1, uint *a2)
{
  uint *v2
  int v3
  int v4
  int v5
  int v6
  uint *v8
  int v9
  int v10

  v2 = (uint *)a1;
  v8 = a2;
  v9 = Function_20603ec(a1);
  v3 = Function_205ea94((int)v2);
  v5 = Function_2060b7c((int)v2, (int)v8, v3, v4);
  if ( v5 & 4 )
  {
    v10 = Function_2065838(v3, 56);
    v6 = 3;
  }
  else if ( v5 & 0x80 )
  {
    v10 = Function_2065838(v3, 117);
    v6 = 2;
  }
  else if ( v5 & 0x40 )
  {
    v10 = Function_2065838(v3, 0);
    v6 = 1;
    Function_205ebc0(v2);
  }
  else if ( v5 )
  {
    v9 = 0;
    v6 = 1;
    v10 = Function_2065838(v3, 28);
    if ( !(v5 & 8) )
      Function_2005748(0x601u);
    ChangeSpriteFace2Direction((int)v8, v3);
    Function_205ebc0(v2);
  }
  else
  {
    v10 = Function_2060390((int)v2, v3);
    v6 = 5;
  }
  if ( !v9 )
    Function_205ef98(v2, 0);
  return Function_2060b64((int)v2, v8, v10, v6);
}

//----- (02060B64) --------------------------------------------------------
uint *__fastcall Function_2060b64(int a1, uint *a2, int a3, int a4)
{
  int v4
  uint *v5

  v4 = a3;
  v5 = a2;
  Function_205ec20(a1, a3, a4);
  return Function_2065638(v5, v4);
}

//----- (02060B7C) --------------------------------------------------------
int __fastcall Function_2060b7c(int a1, int a2, int a3, int a4)
{
  int v4
  uint *v5
  int v6
  int v7
  char v9

  v4 = a1;
  v5 = (uint *)a2;
  v6 = a3;
  v7 = 0;
  v9 = Function_2060c24(a1, a2, a3, a4);
  if ( v9 & 0xA )
  {
    v7 = 1;
    if ( Function_2060e40(v4, (int)v5, v6) )
      v7 = 9;
  }
  if ( v9 & 4 )
    v7 |= 2u;
  if ( Function_2060ce4(v4, (int)v5, v6) )
    v7 |= 4u;
  if ( Function_2060d98(v4, (int)v5, v6) )
    v7 |= 0x80u;
  if ( Function_2060ee4(v4, (int)v5, v6) == 1 )
    v7 |= 0x10u;
  if ( Function_2060f4c(v4, (int)v5, v6) == 1 )
    v7 |= 0x20u;
  if ( Function_2060fa8(v4, (int)v5, v6) == 1 )
    v7 |= 0x41u;
  if ( Function_2061058(v4, v5, v6) == 1 )
    v7 |= 1u;
  return v7;
}

//----- (02060C24) --------------------------------------------------------
int __fastcall Function_2060c24(int a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  int v6
  int v7
  int v9
  int v10
  int v11
  int v12
  int v13
  char v14
  char v15
  int v16

  v16 = a4;
  v4 = (uint *)a2;
  v9 = a3;
  v5 = LoadSpritePositionX(a2);
  v13 = GetWalkPositionXChange(v9);
  v10 = LoadSpritePositionZ((int)v4);
  v11 = LoadSpritePositionY((int)v4);
  v12 = GetWalkPositionYChange(v9);
  CopySprite70Struct(v4, &v15);
  v6 = 0;
  if ( Function_2063fac((int)v4, v5 + v13, v10, v11 + v12) == 1 )
    v6 = 1;
  v7 = GetSpriteSpriteListFirstSprite((int)v4);
  if ( Function_205507c(v7, (int)&v15, v5 + v13, v11 + v12, &v14) == 1 )
  {
    v6 |= 2u;
    if ( v14 )
      v6 |= 8u;
  }
  if ( Function_2064004((int)v4, v5 + v13, v11 + v12, v9) == 1 )
    v6 |= 2u;
  if ( Function_2063f00((int)v4, v5 + v13, v10, v11 + v12) == 1 )
    v6 |= 4u;
  return v6;
}

//----- (02060CE4) --------------------------------------------------------
int __fastcall Function_2060ce4(int a1, int a2, uint a3)
{
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int result
  int v10
  char v11
  int v12
  int v13

  v3 = a3;
  v4 = a2;
  if ( a3 == -1 )
    return 0;
  v12 = GetSpriteSpriteListFirstSprite(a2);
  v5 = LoadSpritePositionX(v4);
  v6 = GetWalkPositionXChange(v3);
  v7 = LoadSpritePositionY(v4);
  v13 = GetWalkPositionYChange(v3);
  if ( Function_20683d8(v12) == 1 )
    return 1;
  v10 = Function_2054f94(v12, v5 + v6, v7 + v13, v8);
  switch ( v11 )
  {
    case 0:
      if ( Function_205db84(v10) != 1 )
        return 0;
      result = 1;
      break;
    case 1:
      if ( Function_205db90(v10) != 1 )
        return 0;
      result = 1;
      break;
    case 2:
      if ( Function_205db9c(v10) != 1 )
        return 0;
      result = 1;
      break;
    case 3:
      if ( Function_205dba8(v10) != 1 )
        return 0;
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}

//----- (02060D98) --------------------------------------------------------
BOOL __fastcall Function_2060d98(int a1, int a2, uint a3)
{
  BOOL v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  char v10
  int v12
  int v13
  int v14

  v3 = 0;
  v4 = a3;
  v5 = a2;
  if ( a3 != -1 )
  {
    v12 = GetSpriteSpriteListFirstSprite(a2);
    v6 = LoadSpritePositionX(v5);
    v13 = GetWalkPositionXChange(v4);
    v7 = LoadSpritePositionY(v5);
    v14 = GetWalkPositionYChange(v4);
    v9 = Function_2054f94(v12, v6 + v13, v7 + v14, v8);
    switch ( v10 )
    {
      case 0:
        v3 = Function_205dbb4(v9);
        break;
      case 1:
        v3 = Function_205dbc0(v9);
        break;
      case 2:
        v3 = Function_205dbcc(v9);
        break;
      case 3:
        v3 = Function_205dbd8(v9);
        break;
      default:
        break;
    }
    if ( v3 == 1
      && Function_2071cb4(v12, 9) == 1
      && ((int (__fastcall *)(int, int, int, int))dword_22511A0[0])(v12, v6 + v13, v7 + v14, v4) == 1 )
    {
      v3 = 0;
    }
  }
  return v3;
}

//----- (02060E40) --------------------------------------------------------
int __fastcall Function_2060e40(int a1, int a2, uint a3)
{
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  char v9
  int result
  int v11
  int v12
  int v13
  int v14

  v3 = a3;
  v4 = a2;
  if ( a3 == -1 )
    return 0;
  v5 = GetSpriteSpriteListFirstSprite(a2);
  v6 = LoadSpritePositionX(v4);
  v14 = LoadSpritePositionY(v4);
  v8 = Function_2054f94(v5, v6, v14, v7);
  switch ( v9 )
  {
    case 0:
      if ( Function_205db10(v8) != 1 )
        goto LABEL_11;
      result = 1;
      break;
    case 1:
      if ( Function_205db1c(v8) != 1 )
        goto LABEL_11;
      result = 1;
      break;
    case 2:
      if ( Function_205db04(v8) != 1 )
        goto LABEL_11;
      result = 1;
      break;
    case 3:
      if ( Function_205daf8(v8) != 1 )
        goto LABEL_11;
      result = 1;
      break;
    default:
LABEL_11:
      v11 = GetWalkPositionXChange(v3);
      v12 = GetWalkPositionYChange(v3);
      v13 = Function_2054f94(v5, v6 + v11, v14 + v12, v12);
      if ( Function_205daec(v13) != 1 )
        return 0;
      result = 1;
      break;
  }
  return result;
}

//----- (02060EE4) --------------------------------------------------------
int __fastcall Function_2060ee4(int a1, int a2, int a3)
{
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
  int result

  v3 = a3;
  v4 = a2;
  if ( a3 == -1 )
    goto LABEL_11;
  v5 = GetSpriteSpriteListFirstSprite(a2);
  v6 = LoadSpritePositionX(v4);
  v7 = GetWalkPositionXChange(v3);
  v8 = LoadSpritePositionY(v4);
  v9 = GetWalkPositionYChange(v3);
  v11 = Function_2054f94(v5, v6 + v7, v8 + v9, v10);
  v12 = v11;
  if ( v3 == 3 && Function_205dd90(v11) )
    return 1;
  if ( v3 == 2 && Function_205dd9c(v12) )
    result = 1;
  else
LABEL_11:
    result = 0;
  return result;
}

//----- (02060F4C) --------------------------------------------------------
BOOL __fastcall Function_2060f4c(int a1, int a2, int a3)
{
  int v3
  uint *v4
  int v5
  int v6
  int v7
  int v8
  int v9
  uchar v10
  BOOL result

  v3 = a3;
  v4 = (uint *)a2;
  result = 0;
  if ( a3 != -1 )
  {
    v5 = GetSpriteSpriteListFirstSprite(a2);
    v6 = LoadSpritePositionX((int)v4);
    v7 = GetWalkPositionXChange(v3);
    v8 = LoadSpritePositionY((int)v4);
    v9 = GetWalkPositionYChange(v3);
    v10 = Function_2054f94(v5, v6 + v7, v8 + v9, v9);
    if ( Function_206406c(v4, v10) )
      result = 1;
  }
  return result;
}

//----- (02060FA8) --------------------------------------------------------
int __fastcall Function_2060fa8(int a1, int a2, uint a3)
{
  uint v3
  uint *v4
  int v5
  int v6
  int v7
  int v8
  int v9
  uchar v10
  int v12

  v12 = a1;
  v3 = a3;
  v4 = (uint *)a2;
  if ( a3 != -1 )
  {
    v5 = GetSpriteSpriteListFirstSprite(a2);
    v6 = LoadSpritePositionX((int)v4);
    v7 = GetWalkPositionXChange(v3);
    v8 = LoadSpritePositionY((int)v4);
    v9 = GetWalkPositionYChange(v3);
    v10 = Function_2054f94(v5, v6 + v7, v8 + v9, v8);
    if ( Function_205eb74(v12) == 1 )
    {
      if ( Function_206415c(v4, v10) == 1 )
        return v3 > 1;
      if ( Function_206417c(v4, v10) == 1 )
        return v3 - 2 > 1;
    }
    else if ( Function_206415c(v4, v10) == 1 || Function_206417c(v4, v10) == 1 )
    {
      return 1;
    }
  }
  return 0;
}

//----- (02061058) --------------------------------------------------------
int __fastcall Function_2061058(int a1, uint *a2, int a3)
{
  uint *v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int result

  v3 = a2;
  v4 = a3;
  if ( a3 == -1 || Function_205eb74(a1) != 1 )
    goto LABEL_16;
  v5 = GetSpriteSpriteListFirstSprite((int)v3);
  v6 = LoadSpritePositionX((int)v3);
  v7 = GetWalkPositionXChange(v4);
  v8 = LoadSpritePositionY((int)v3);
  v9 = GetWalkPositionYChange(v4);
  v10 = Function_2054f94(v5, v6 + v7, v8 + v9, v9);
  if ( Function_206406c(v3, v10) )
    return 1;
  if ( Function_20640d4(v3, v10) )
    return 1;
  if ( Function_205dad4(v10) )
    return 1;
  if ( Function_205dce0(v10) )
    return 1;
  if ( Function_205dcfc(v10) )
    result = 1;
  else
LABEL_16:
    result = 0;
  return result;
}

//----- (02061100) --------------------------------------------------------
int __fastcall Function_2061100(uint *a1, int a2, int a3)
{
  int v3
  uint *v4
  int v5
  int v6
  int v8
  int v9
  int v10
  int v11

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = 0;
  v8 = GetSpriteSpriteListFirstSprite(a2);
  if ( Function_2071cb4(v8, 9) == 1 )
  {
    v11 = LoadSpritePositionX(v3);
    v10 = LoadSpritePositionZ(v3) / 2;
    v9 = LoadSpritePositionY(v3);
    Function_2061674(v4, v5, &v11, &v10, &v9);
    if ( ((int (__fastcall *)(int, int, int, int))dword_2250F90[0])(v8, v11, v10, v9) == 1 )
      v6 = 2;
    v10 *= 2;
    if ( Function_2063f00(v3, v11, v10, v9) == 1 )
      v6 |= 4u;
  }
  return v6;
}

//----- (02061180) --------------------------------------------------------
BOOL __fastcall Function_2061180(uint *a1, int a2, int a3)
{
  uint *v3
  int v4
  int v5
  int v6
  BOOL result
  int v8
  int v9
  int v10
  int v11

  v3 = a1;
  v4 = a3;
  v5 = a2;
  result = 0;
  if ( a3 != -1 )
  {
    v6 = GetSpriteSpriteListFirstSprite(a2);
    if ( Function_2071cb4(v6, 9) == 1 )
    {
      v10 = LoadSpritePositionX(v5);
      v9 = LoadSpritePositionZ(v5) / 2;
      v8 = LoadSpritePositionY(v5);
      Function_2061674(v3, v4, &v10, &v9, &v8);
      ((void (__fastcall *)(int, int, int, int, int *))dword_2251044[0])(v6, v10, v9, v8, &v11);
      if ( Function_205db58((uchar)v11) )
        result = 1;
    }
  }
  return result;
}

//----- (020611FC) --------------------------------------------------------
int __fastcall Function_20611fc(uint *a1, int a2, uint a3)
{
  uint *v3
  int v4
  uint v5
  int v6
  char v7
  int v8

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  v7 = Function_2061100(a1, a2, a3);
  if ( v7 & 0xA )
    v6 = 1;
  if ( v7 & 4 )
    v6 |= 2u;
  if ( Function_2061180(v3, v4, v5) == 1 )
    v6 |= 0x20u;
  if ( Function_2061248(v3, v4, v5, v8) == 1 )
    v6 |= 0x80u;
  return v6;
}

//----- (02061248) --------------------------------------------------------
int __fastcall Function_2061248(uint *a1, int a2, uint a3, int a4)
{
  int v4
  int v5
  int v6
  uint *v7
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14

  v14 = a4;
  v4 = 0;
  v5 = a2;
  v6 = a3;
  v7 = a1;
  if ( a3 != -1 && Function_205f108(a1) == 2 )
  {
    v9 = GetSpriteSpriteListFirstSprite(v5);
    if ( Function_2071cb4(v9, 9) == 1 )
    {
      v12 = LoadSpritePositionX(v5);
      v11 = LoadSpritePositionZ(v5) / 2;
      v10 = LoadSpritePositionY(v5);
      Function_2061674(v7, v6, &v12, &v11, &v10);
      v4 = ((int (__fastcall *)(int, int, int, int, int *))dword_2251044[0])(v9, v12, v11, v10, &v13);
      switch ( (uchar)v4 )
      {
        case 0:
          v4 = Function_205dbb4((uchar)v13);
          break;
        case 1:
          v4 = Function_205dbc0((uchar)v13);
          break;
        case 2:
          v4 = Function_205dbcc((uchar)v13);
          break;
        case 3:
          v4 = Function_205dbd8((uchar)v13);
          break;
        default:
          return v4;
      }
    }
  }
  return v4;
}

//----- (02061308) --------------------------------------------------------
int __fastcall Function_2061308(int a1, int a2, char a3)
{
  return Function_2061348(a1, a2, a3);
}

//----- (02061310) --------------------------------------------------------
int __fastcall Function_2061310(char a1)
{
  int v2

  if ( a1 & 0x20 )
    return 2;
  if ( a1 & 0x10 )
    v2 = 3;
  else
    v2 = -1;
  return v2;
}

//----- (0206132C) --------------------------------------------------------
int __fastcall Function_206132c(char a1)
{
  int v2

  if ( a1 & 0x40 )
    return 0;
  if ( a1 & 0x80 )
    v2 = 1;
  else
    v2 = -1;
  return v2;
}

//----- (02061348) --------------------------------------------------------
int __fastcall Function_2061348(int a1, int a2, char a3)
{
  char v3
  int v4
  int v5
  int result
  int v7
  int v8
  int v9
  int v10

  v3 = a3;
  v4 = a1;
  v5 = Function_2061310(a3);
  result = Function_206132c(v3);
  v7 = result;
  if ( v5 != -1 )
  {
    if ( result == -1 )
    {
      result = v5;
    }
    else
    {
      v8 = Function_205ea94(v4);
      v10 = Function_205ebe0(v4);
      v9 = Function_205ebe8(v4);
      if ( v8 == -1 )
      {
        result = v7;
      }
      else if ( v5 != v10 || v7 != v9 )
      {
        if ( v7 == v9 )
          result = v5;
        else
          result = v7;
      }
      else
      {
        result = v8;
      }
    }
  }
  return result;
}

//----- (020613AC) --------------------------------------------------------
BOOL __fastcall Function_20613ac(int a1)
{
  uint *v1
  int v3

  v1 = (uint *)Function_205eb3c(a1);
  if ( IsSpriteMovable(v1) == 1 )
    return 1;
  v3 = GetSpriteMovementNr((int)v1);
  return Function_20613d8(v3) == 1;
}

//----- (020613D8) --------------------------------------------------------
int __fastcall Function_20613d8(int a1)
{
  int result

  switch ( (uchar)a1 )
  {
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (020613FC) --------------------------------------------------------
BOOL __fastcall Function_20613fc(int a1, char a2)
{
  return (a2 & 2) != 0;
}

//----- (0206140C) --------------------------------------------------------
int __fastcall Function_206140c(int a1)
{
  int result

  switch ( (uchar)Function_205ec14(a1) )
  {
    case 0x58u:
    case 0x59u:
    case 0x5Au:
    case 0x5Bu:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (02061434) --------------------------------------------------------
int __fastcall Function_2061434(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7

  v2 = a1;
  v3 = a2;
  v4 = Function_205eb74(a1);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      Function_205ec88(v2);
      v7 = Function_2060850(v2, v3);
      return Function_206081c(v7);
    }
    if ( v4 != 2 )
    {
      v6 = 0;
      ErrorHandler();
      return v6;
    }
  }
  v5 = Function_205fcc0(v2, v3);
  return Function_205fc64(v5);
}

//----- (0206147C) --------------------------------------------------------
int __fastcall Function_206147c(int a1, int a2, char a3, uint a4, int a5, int a6)
{
  int v6
  char v7
  int v8
  int v9
  int result
  int v11
  int v12

  v6 = a1;
  v7 = a3;
  v12 = Function_2061348(a1, a2, a3);
  v8 = Function_2061434(v6, v12);
  Function_205eb08(v6, v8);
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      result = Function_2065838(v12, 40);
    }
    else
    {
      Function_205eb3c(v6);
      v11 = 4;
      if ( a6 & 4 )
      {
        v11 = 56;
      }
      else if ( a6 & 0x80 )
      {
        v11 = 117;
      }
      else if ( a6 )
      {
        v11 = 28;
        if ( !(a6 & 8) )
          Function_2005748(0x601u);
      }
      else
      {
        switch ( 0 )
        {
          case 0:
            break;
          case 1:
            v11 = 8;
            break;
          case 2:
            v11 = 12;
            break;
          case 3:
            v11 = 76;
            break;
          case 4:
            v11 = 16;
            break;
          case 5:
            v11 = 20;
            break;
          default:
            v11 = 4;
            break;
        }
        if ( a5 == 1 && Function_20613fc(v6, v7) == 1 )
          v11 = 88;
      }
      result = Function_2065838(v12, v11);
    }
  }
  else
  {
    v9 = GetSpriteFaceDirection(v6);
    result = Function_2065838(v9, 0);
  }
  return result;
}

//----- (02061544) --------------------------------------------------------
int __fastcall Function_2061544(int a1)
{
  uint *v1

  v1 = (uint *)Function_205eb3c(a1);
  return IsSpriteMovable(v1);
}

//----- (02061550) --------------------------------------------------------
uint *__fastcall Function_2061550(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  uint *v6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (uint *)Function_205eb3c(a1);
  return Function_2060b64(v3, v6, v4, v5);
}

//----- (0206156C) --------------------------------------------------------
int __fastcall Function_206156c(int a1, int a2)
{
  int v2
  int v3

  v2 = a2;
  v3 = Function_205eb3c(a1);
  return Function_2064238(v3, v2);
}

//----- (0206157C) --------------------------------------------------------
int __fastcall CalcNewSpritePositionXY(int a1, int a2, uint *a3, int *a4)
{
  int v4
  int v5
  uint *v6
  int *v7
  int v8
  int v9
  int result

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = GetSpritePositionX(a1);
  *v6 = v8 + GetWalkPositionXChange(v4);
  v9 = GetSpritePositionY(v5);
  result = v9 + GetWalkPositionYChange(v4);
  *v7 = result;
  return result;
}

//----- (020615AC) --------------------------------------------------------
int __fastcall CalcNewSpritePositionXYWithFaceDirection(int a1, uint *a2, int *a3)
{
  int v3
  uint *v4
  int *v5
  int v6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = GetSpriteFaceDirection(a1);
  return CalcNewSpritePositionXY(v3, v6, v4, v5);
}

//----- (020615C8) --------------------------------------------------------
int __fastcall Function_20615c8(int a1)
{
  int v1
  int v2
  int v3

  v1 = Function_205eb3c(a1);
  v2 = GetSpriteSpriteListFirstSprite(v1);
  v3 = LoadVariableAreaAdress_14(*(uint *)(v2 + 12));
  return Function_202cf28(v3, 0);
}

//----- (020615E0) --------------------------------------------------------
BOOL __fastcall Function_20615e0(int a1, int a2, uint a3)
{
  uint v3
  uint *v4
  uchar v5
  BOOL result

  v3 = a3;
  v4 = (uint *)a2;
  if ( a3 == -1 )
    goto LABEL_9;
  v5 = Function_2062be8(a2);
  if ( Function_206415c(v4, v5) == 1 )
    return v3 > 1;
  if ( Function_206417c(v4, v5) != 1 )
LABEL_9:
    result = 0;
  else
    result = v3 - 2 > 1;
  return result;
}

//----- (02061630) --------------------------------------------------------
BOOL __fastcall Function_2061630(int a1, uchar a2, int a3)
{
  uchar v3
  uint *v4
  uint *v6

  v3 = a2;
  v4 = (uint *)a1;
  if ( a3 != -1 )
    return 0;
  if ( Function_205eb74(a1) != 1 )
    return 0;
  if ( !Function_205efdc(v4) )
    return 0;
  v6 = (uint *)Function_205eb3c((int)v4);
  return Function_206413c(v6, v3) == 1;
}

//----- (02061674) --------------------------------------------------------
int __fastcall Function_2061674(uint *a1, int a2, uint *a3, uint *a4, int *a5)
{
  int v5
  uint *v6
  uint *v7
  int result
  int *v9

  v5 = a2;
  v6 = a3;
  v7 = a4;
  result = Function_205f108(a1);
  switch ( (uchar)result )
  {
    case 0:
    case 1:
    case 2:
      v9 = &Unknown_20edb04[2 * v5];
      goto LABEL_6;
    case 3:
      v9 = &Unknown_20edb24[2 * v5];
      goto LABEL_6;
    case 4:
      v9 = &Unknown_20edb44[2 * v5];
      goto LABEL_6;
    case 5:
      v9 = &Unknown_20edb64[2 * v5];
LABEL_6:
      *v6 += *(short *)v9;
      *v7 += *((short *)v9 + 1);
      result = *a5 + *((short *)v9 + 2);
      *a5 = result;
      break;
    default:
      return result;
  }
  return result;
}

//----- (020616F0) --------------------------------------------------------
int __fastcall Function_20616f0(uint *a1, int a2)
{
  uint *v2
  int v3
  int v4
  int v5
  int v7
  int v8
  int v9
  int v10

  v2 = a1;
  v3 = a2;
  if ( !Function_205f158(a1) )
    return Function_206156c((int)v2, v3);
  v4 = Function_205eb3c((int)v2);
  v5 = GetSpriteSpriteListFirstSprite(v4);
  v9 = LoadSpritePositionX(v4);
  v8 = LoadSpritePositionZ(v4) / 2;
  v7 = LoadSpritePositionY(v4);
  Function_2061674(v2, v3, &v9, &v8, &v7);
  ((void (__fastcall *)(int, int, int, int, int *))dword_2251044[0])(v5, v9, v8, v7, &v10);
  return v10;
}

//----- (02061760) --------------------------------------------------------
int __fastcall Function_2061760(int a1)
{
  uint *v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  int v9

  v1 = (uint *)a1;
  v2 = Function_205eb3c(a1);
  v3 = GetSpriteSpriteListFirstSprite(v2);
  v4 = LoadSpritePositionX(v2);
  v5 = LoadSpritePositionZ(v2);
  v6 = LoadSpritePositionY(v2);
  if ( !Function_205f158(v1) )
    return Function_2054f94(v3, v4, v6, v7);
  ((void (__fastcall *)(int, int, int, int, int *))dword_2251044[0])(v3, v4, v5 / 2, v6, &v9);
  return v9;
}

//----- (020617BC) --------------------------------------------------------
int __fastcall Function_20617bc(uint *a1, int *a2, int *a3, int *a4)
{
  uint *v4
  int *v5
  int *v6
  int *v7
  int v8
  int v9

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = Function_205eaa0(a1);
  v9 = Function_205eb3c((int)v4);
  *v5 = LoadSpritePositionX(v9);
  *v6 = LoadSpritePositionZ(v9) / 2;
  *v7 = LoadSpritePositionY(v9);
  return Function_2061674(v4, v8, v5, v6, v7);
}

//----- (02061804) --------------------------------------------------------
int *__fastcall InitSpriteListAndSprites(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int *v6

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = CallocSpriteListAndSprites(a2);
  SetSpriteListFirstSprite((int)v6, v4);
  SetNrOfSpritesInList((int)v6, v3);
  SetSpriteListc((int)v6, v5);
  return v6;
}

//----- (02061830) --------------------------------------------------------
uint __fastcall Function_2061830(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = GetSpriteList_124_3(a1);
  Function_2018238(0xBu, v2);
  return Function_2018238(0xBu, v1);
}

//----- (0206184C) --------------------------------------------------------
int __fastcall Function_206184c(int a1, int a2, int a3, int a4, ushort *a5)
{
  int v5
  int v6
  uint *i
  int v8
  int v10
  int v11

  v10 = a1;
  v5 = a3;
  v11 = a4;
  v6 = GetNrOfSpritesInList(a1);
  for ( i = (uint *)GetSpriteList_124_3(v10); v6; --v6 )
  {
    if ( CheckSpriteFlag_Locked(i) == 1
      && !Function_206244c(i, v5, v11, a5)
      && v5 != GetSprite_c((int)i)
      && !CheckSpriteFlags(i, 1024) )
    {
      Function_2061af4((int)i);
    }
    i += 74;
  }
  v8 = GetSpriteListAdr18(v10);
  return ((int (__fastcall *)(int, int))dword_21EDA38[0])(v10, v8);
}

//----- (020618C8) --------------------------------------------------------
int *__fastcall CallocSpriteListAndSprites(int a1)
{
  int v1
  int *v2
  uint v3
  int *v4

  v1 = a1;
  v2 = (int *)malloc(0xBu, 300);
  if ( !v2 )
    ErrorHandler();
  Call_FillMemWithValue(v2, 0, 0x12Cu);
  v3 = 296 * v1;
  v4 = (int *)malloc(0xBu, 296 * v1);
  if ( !v4 )
    ErrorHandler();
  Call_FillMemWithValue(v4, 0, v3);
  SetSpriteList_124((int)v2, (int)v4);
  return v2;
}

//----- (02061918) --------------------------------------------------------
uint *__fastcall CopySpriteStruct(int a1, int *a2, int a3, int a4)
{
  int v4
  int *v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  uint *v16
  uint *v17
  uint *result
  int v19
  int v20
  uint *v21
  uint *v22
  uint *v23
  int v24
  int v25
  int v26
  int v27
  int v28
  int v29
  int v30
  int v31
  int v32
  int v33
  int v34

  v34 = a4;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = *a2;
  v8 = a2[1];
  v5 += 2;
  v26 = v7;
  v27 = v8;
  v9 = *v5;
  v10 = v5[1];
  v5 += 2;
  v28 = v9;
  v29 = v10;
  v11 = *v5;
  v12 = v5[1];
  v5 += 2;
  v30 = v11;
  v31 = v12;
  v13 = v5[1];
  v32 = *v5;
  v33 = v13;
  v14 = GetOverworldsID((ushort *)&v26);
  if ( HasOverworldsNoScript((int)&v26) )
  {
    v19 = GetOverworldsFlagWithoutScript((int)&v26);
    v21 = (uint *)Function_20624cc(v6, v14, v19, v20);
    v22 = v21;
    if ( v21 )
    {
      Function_2062714(v21, v4, (int)&v26);
      return v22;
    }
  }
  else
  {
    v16 = Function_2062154(v6, v14, v4, v15);
    v17 = v16;
    if ( v16 )
    {
      Function_20626d0(v16, (int)&v26, v4);
      return v17;
    }
  }
  result = FindUnlockedSpriteInSpriteList(v6);
  v23 = result;
  if ( result )
  {
    v24 = GetSpriteListFirstSprite(v6);
    Function_20621e8(v23, (ushort *)&v26, v24);
    Function_206234c(v23, v6);
    SetSprite_c((int)v23, v4);
    Function_2062660((int)v23);
    Function_2062670((int)v23);
    SetSpriteFlags(v23, 4);
    Function_20621ac(v6, (int)v23);
    Function_206281c_Dummy();
    IncreaseSpriteList8(v25);
    result = v23;
  }
  return result;
}

//----- (020619DC) --------------------------------------------------------
uint *__fastcall InitSpriteStruct(int a1, short a2, short a3, int a4, short a5, short a6, int a7)
{
  int v7
  short v8
  short v9
  short v10
  int v11
  int v13[8]
  int v14

  v14 = a4;
  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  SetOverworldsID(v13, 0);
  SetOverworldsSprite((int)v13, a5);
  SetOverworldsMovement((int)v13, a6);
  SetOverworldsTrainer((int)v13, 0);
  SetOverworldsFlag((int)v13, 0);
  SetOverworldsScript((int)v13, 0);
  SetOverworldsOrientation((int)v13, v10);
  Function_206312c(v13, 0, 0);
  Function_206312c(v13, 0, 1);
  Function_206312c(v13, 0, 2);
  SetOverworldsMovementWidth((int)v13, 0);
  SetOverworldsMovementLength((int)v13, 0);
  SetOverworldsX((int)v13, v8);
  SetOverworldsY((int)v13, v9);
  SetOverworldsZ((int)v13, 0);
  return CopySpriteStruct(v7, v13, a7, v11);
}

//----- (02061A74) --------------------------------------------------------
uint *__fastcall Sprite_AddPeople(int a1, int a2, int a3, int a4, ushort *a5)
{
  int v5
  int v6
  uint *v7
  ushort *v8
  ushort v9
  int v10
  int v11
  int *v13

  v5 = a1;
  v6 = a4;
  v7 = 0;
  v8 = FindOverworldsIDWithoutScript(a2, a3, a5);
  v13 = (int *)v8;
  if ( v8 )
  {
    v9 = GetOverworldsFlag((int)v8);
    v10 = GetSpriteListFirstSprite(v5);
    if ( !LoadFlagAdressAndCheckFlag(v10, v9) )
      v7 = CopySpriteStruct(v5, v13, v6, v11);
  }
  return v7;
}

//----- (02061AB4) --------------------------------------------------------
uint *__fastcall Function_2061ab4(int a1, int a2)
{
  uint *v2

  v2 = (uint *)a1;
  SetSpriteGraphic(a1, a2);
  Function_2062604(v2);
  UnsetSpriteFlags(v2, 0x4000);
  return Function_2062670((int)v2);
}

//----- (02061AD4) --------------------------------------------------------
uint *__fastcall Function_2061ad4(int a1, int a2)
{
  int v2
  int v3

  v2 = a1;
  v3 = a2;
  if ( Function_2062dfc(a1) == 1 )
    Function_2061b48(v2);
  return Function_2061ab4(v2, v3);
}

//----- (02061AF4) --------------------------------------------------------
int *__fastcall Function_2061af4(int a1)
{
  int *v1
  uint *v2
  int v3

  v1 = (int *)a1;
  v2 = (uint *)GetSpriteSpriteList(a1);
  if ( Function_2062ca8(v2) == 1 )
    Function_2062b7c((int)v1);
  CallSprite_c0Callback((int)v1);
  Function_2062a2c((int)v1);
  GetSpriteSpriteList2((int)v1);
  DecreaseSpriteList8(v3);
  return Function_206243c(v1);
}

//----- (02061B28) --------------------------------------------------------
int *__fastcall Sprite_RemovePeople(int a1)
{
  int v1
  ushort v2
  int v3

  v1 = a1;
  v2 = GetSpriteFlag(a1);
  v3 = GetSpriteSpriteListFirstSprite(v1);
  LoadFlagAdressAndSetFlag(v3, v2);
  return Function_2061af4(v1);
}

//----- (02061B48) --------------------------------------------------------
int *__fastcall Function_2061b48(int a1)
{
  uint *v1
  uint *v2

  v1 = (uint *)a1;
  v2 = (uint *)GetSpriteSpriteList(a1);
  if ( Function_2062ca8(v2) == 1 )
  {
    if ( MaskSpriteFlags(v1, 0x4000) )
      Function_2062b7c((int)v1);
    UnsetSpriteFlags(v1, 0x4000);
  }
  SetSpriteGraphic((int)v1, 0xFFFF);
  Function_2062b4c((int)v1, (int)Function_20633f0_Dummy);
  Function_2062b60((int)v1, (int)Function_20633f4_Dummy);
  Function_2062b74((int)v1, (int)Function_20633f4_Dummy);
  Function_2062b88((int)v1, (int)Function_20633f8_Dummy);
  return Function_2062b9c((int)v1, (int)Function_20633fc_Dummy);
}

//----- (02061BBC) --------------------------------------------------------
int *__fastcall Function_2061bbc(int a1)
{
  int v1
  int v2
  int v3
  uint *v4
  int *result

  v1 = a1;
  v2 = 0;
  v3 = GetNrOfSpritesInList(a1);
  v4 = (uint *)GetSpriteList_124_3(v1);
  do
  {
    result = (int *)MaskSpriteFlags(v4, 1);
    if ( result )
      result = Function_2061af4((int)v4);
    ++v2;
    v4 += 74;
  }
  while ( v2 < v3 );
  return result;
}

//----- (02061BF0) --------------------------------------------------------
void __fastcall Function_2061bf0(uint *a1)
{
  uint *v1
  int v2
  int v3
  uint *v4

  v1 = a1;
  if ( Function_2062ca8(a1) != 1 )
    ErrorHandler();
  v2 = 0;
  v3 = GetNrOfSpritesInList((int)v1);
  v4 = (uint *)GetSpriteList_124_3((int)v1);
  do
  {
    if ( MaskSpriteFlags(v4, 1) )
    {
      if ( MaskSpriteFlags(v4, 0x4000) )
      {
        Function_2062b90((int)v4);
        Function_2062628_Dummy();
      }
    }
    ++v2;
    v4 += 74;
  }
  while ( v2 < v3 );
}

//----- (02061C48) --------------------------------------------------------
uint __fastcall Function_2061c48(uint *a1)
{
  uint *v1
  int v2
  int v3
  uint *v4
  uint result

  v1 = a1;
  if ( Function_2062ca8(a1) != 1 )
    ErrorHandler();
  v2 = 0;
  v3 = GetNrOfSpritesInList((int)v1);
  v4 = (uint *)GetSpriteList_124_3((int)v1);
  do
  {
    result = CheckSpriteFlag_Locked(v4);
    if ( result == 1 )
    {
      if ( CheckSpriteFlag_4000(v4) == 1 )
        Function_2062ba4((int)v4);
      else
        Function_2062670((int)v4);
      Function_2062604(v4);
      result = Function_2064464((int)v4);
    }
    ++v2;
    v4 += 74;
  }
  while ( v2 < v3 );
  return result;
}

//----- (02061CA8) --------------------------------------------------------
int *__fastcall Function_2061ca8(int a1, int a2, int *a3, int a4)
{
  int v4
  int v5
  int *v6
  int v7
  int *result
  int v9
  int v10
  int v11
  int v12

  v12 = a4;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v11 = 0;
  for ( result = (int *)Function_20625b0(a2, &v10, &v11, 1); result; result = (int *)Function_20625b0(v5, &v10, &v11, 1) )
  {
    CopySpriteToSprite2(v4, v10, v6, v9);
    --v7;
    v6 += 20;
    if ( v7 <= 0 )
      ErrorHandler();
  }
  if ( v7 )
    result = Call_FillMemWithValue(v6, 0, 80 * v7);
  return result;
}

//----- (02061D04) --------------------------------------------------------
int __fastcall Function_2061d04(int result, int *a2, int a3)
{
  int v3
  int *v4
  int i
  uint *v6

  v3 = result;
  v4 = a2;
  for ( i = a3; i; --i )
  {
    result = 1;
    if ( *v4 & 1 )
    {
      v6 = FindUnlockedSpriteInSpriteList(v3);
      if ( !v6 )
        ErrorHandler();
      CopySprite2ToSprite(v6, v4);
      result = Function_2061fa8(v3, v6);
    }
    v4 += 20;
  }
  return result;
}

//----- (02061D3C) --------------------------------------------------------
char *__fastcall CopySpriteToSprite2(int a1, int a2, int *a3, int a4)
{
  uint *v4
  int v5
  int *v6
  int v7
  int v8
  char *v9
  uchar *v10
  int v11
  char v12
  char *result
  uchar *v14
  int v15
  char v16
  int v17
  int v18
  int v19

  v19 = a4;
  v4 = (uint *)a2;
  v5 = a1;
  v6 = a3;
  *a3 = LoadSpriteFlags(a2);
  v6[1] = GetSprite_4((int)v4);
  *((uchar *)v6 + 8) = GetSpriteID((int)v4);
  *((ushort *)v6 + 8) = GetSprite_c((int)v4);
  *((ushort *)v6 + 9) = GetSpriteGraphic((int)v4);
  *((uchar *)v6 + 9) = GetSpriteMovement((int)v4);
  *((ushort *)v6 + 10) = GetSpriteTrainer((int)v4);
  *((ushort *)v6 + 11) = GetSpriteFlag((int)v4);
  *((ushort *)v6 + 12) = GetSpriteScript((int)v4);
  *((uchar *)v6 + 12) = GetSpriteInitOrientation((int)v4);
  *((uchar *)v6 + 13) = LoadSpriteFaceDirection((int)v4);
  *((uchar *)v6 + 14) = LoadSpriteFace2Direction((int)v4);
  *((ushort *)v6 + 13) = Function_20629d8(v4, 0);
  *((ushort *)v6 + 14) = Function_20629d8(v4, 1);
  *((ushort *)v6 + 15) = Function_20629d8(v4, 2);
  *((uchar *)v6 + 10) = GetSpriteMovementWidth((int)v4);
  *((uchar *)v6 + 11) = GetSpriteMovementLength((int)v4);
  *((ushort *)v6 + 16) = Function_2062ff0((int)v4);
  *((ushort *)v6 + 17) = Function_2062ff8((int)v4);
  *((ushort *)v6 + 18) = Function_2063000((int)v4);
  *((ushort *)v6 + 19) = LoadSpritePositionX((int)v4);
  *((ushort *)v6 + 20) = LoadSpritePositionZ((int)v4);
  *((ushort *)v6 + 21) = LoadSpritePositionY((int)v4);
  Function_2064450(*((short *)v6 + 19), *((short *)v6 + 21), &v17);
  v18 = GetSprite74((int)v4);
  v7 = IsSetSpriteFlags20000000(v4);
  if ( Function_20644d0(v5, &v17, v7, v8) )
  {
    if ( IsSetSpriteFlags800000(v4) == 1 )
      v18 = GetSprite74((int)v4);
    v6[11] = v18;
  }
  else
  {
    v6[11] = GetSprite74((int)v4);
  }
  v9 = (char *)Function_2062a78((int)v4);
  v10 = v6 + 12;
  v11 = 16;
  do
  {
    v12 = *v9++;
    *v10++ = v12;
    --v11;
  }
  while ( v11 );
  result = (char *)GetSpriteAdre8((int)v4);
  v14 = v6 + 16;
  v15 = 16;
  do
  {
    v16 = *result++;
    *v14++ = v16;
    --v15;
  }
  while ( v15 );
  return result;
}

//----- (02061E80) --------------------------------------------------------
uchar *__fastcall CopySprite2ToSprite(uint *a1, int *a2)
{
  int *v2
  uint *v3
  uchar *v4
  char *v5
  int v6
  char v7
  uchar *result
  char *v9
  int v10
  char v11
  int v12
  int v13
  int v14

  v2 = a2;
  v3 = a1;
  SaveSpriteFlags(a1, *a2);
  SetSprite_4((int)v3, v2[1]);
  SetSpriteID((int)v3, *((uchar *)v2 + 8));
  SetSprite_c((int)v3, *((ushort *)v2 + 8));
  SetSpriteGraphic((int)v3, *((ushort *)v2 + 9));
  SetSpriteMovement((int)v3, *((uchar *)v2 + 9));
  SetSpriteTrainer((int)v3, *((ushort *)v2 + 10));
  SetSpriteFlag((int)v3, *((ushort *)v2 + 11));
  SetSpriteScript((int)v3, *((ushort *)v2 + 12));
  SetSpriteInitOrientation((int)v3, *((char *)v2 + 12));
  ChangeSpriteFaceDirection((int)v3, *((char *)v2 + 13));
  ChangeSpriteFace2Direction((int)v3, *((char *)v2 + 14));
  Function_20629b4(v3, *((short *)v2 + 13), 0);
  Function_20629b4(v3, *((short *)v2 + 14), 1);
  Function_20629b4(v3, *((short *)v2 + 15), 2);
  SetSpriteMovementWidth((int)v3, *((char *)v2 + 10));
  SetSpriteMovementLength((int)v3, *((char *)v2 + 11));
  Function_2062ff4((int)v3, *((short *)v2 + 16));
  Function_2062ffc((int)v3, *((short *)v2 + 17));
  Function_2063004((int)v3, *((short *)v2 + 18));
  SaveSpritePositionX((int)v3, *((short *)v2 + 19));
  SaveSpritePositionZ((int)v3, *((short *)v2 + 20));
  SaveSpritePositionY((int)v3, *((short *)v2 + 21));
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v13 = v2[11];
  CopyToSprite70Struct(v3, &v12);
  v4 = (uchar *)Function_2062a78((int)v3);
  v5 = (char *)(v2 + 12);
  v6 = 16;
  do
  {
    v7 = *v5++;
    *v4++ = v7;
    --v6;
  }
  while ( v6 );
  result = (uchar *)GetSpriteAdre8((int)v3);
  v9 = (char *)(v2 + 16);
  v10 = 16;
  do
  {
    v11 = *v9++;
    *result++ = v11;
    --v10;
  }
  while ( v10 );
  return result;
}

//----- (02061FA8) --------------------------------------------------------
int __fastcall Function_2061fa8(int a1, uint *a2)
{
  uint *v2
  int v3
  int v4
  int v5
  int v6
  int v7

  v2 = a2;
  v3 = a1;
  Function_2061ff0(a2);
  Function_2062010(v2, v4, v5, v6);
  SetSpriteSpriteList((int)v2, v3);
  Function_206239c((int)v2);
  Function_20656dc(v2);
  Function_2062670((int)v2);
  Function_20621ac(v3, (int)v2);
  Function_2062b34((int)v2);
  Function_206281c_Dummy();
  return IncreaseSpriteList8(v7);
}

//----- (02061FF0) --------------------------------------------------------
uint *__fastcall Function_2061ff0(uint *a1)
{
  uint *v1

  v1 = a1;
  SetSpriteFlags(a1, 5);
  UnsetSpriteFlags(v1, 15680072);
  return UnsetSpriteMainFlags(v1);
}

//----- (02062010) --------------------------------------------------------
int __fastcall Function_2062010(uint *a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  int v6
  int v7
  int v9
  int v10
  int v11

  v11 = a4;
  v4 = a1;
  CopySprite70Struct(a1, &v9);
  v5 = LoadSpritePositionX((int)v4);
  v9 = (v5 << 16) + 0x8000;
  SetSpriteX2((int)v4, v5);
  v6 = LoadSpritePositionZ((int)v4);
  SetSpriteZ2((int)v4, v6);
  v7 = LoadSpritePositionY((int)v4);
  v10 = (v7 << 16) + 0x8000;
  SetSpriteY2((int)v4, v7);
  return CopyToSprite70Struct(v4, &v9);
}

//----- (02062068) --------------------------------------------------------
uint __fastcall Function_2062068(int a1, int a2, int a3, char *a4)
{
  int v4
  int v5
  char *v6
  uchar *v7
  int *v8
  int v10

  v4 = a3;
  v5 = a1;
  v6 = a4;
  v10 = a2;
  if ( !a3 )
    ErrorHandler();
  v7 = (uchar *)malloc2(0xBu, 32 * v4);
  if ( !v7 )
    ErrorHandler();
  memcpy(v7, v6, 32 * v4);
  v8 = (int *)malloc2(0xBu, 20);
  if ( !v8 )
    ErrorHandler();
  *v8 = v10;
  v8[1] = v4;
  v8[2] = 0;
  v8[3] = v5;
  v8[4] = (int)v7;
  return CopyOverworldsDataIntoSpriteList(v8);
}

//----- (020620C4) --------------------------------------------------------
uint __fastcall CopyOverworldsDataIntoSpriteList(int *a1)
{
  int *v1
  int v2
  int v3
  int v4
  int v5

  v1 = a1;
  v2 = GetSpriteListFirstSprite(a1[3]);
  v3 = v1[4];
  v4 = v2;
  do
  {
    if ( (HasOverworldsNoScript(v3) == 1 || !LoadFlagAdressAndCheckFlag(v4, *(ushort *)(v3 + 8)))
      && !CopySpriteStruct(v1[3], (int *)v3, *v1, v5) )
    {
      ErrorHandler();
    }
    v3 += 32;
    ++v1[2];
  }
  while ( v1[2] < v1[1] );
  Function_2018238(0xBu, v1[4]);
  return Function_2018238(0xBu, (int)v1);
}

//----- (02062120) --------------------------------------------------------
uint *__fastcall FindUnlockedSpriteInSpriteList(int a1)
{
  int v1
  int v2
  int v3
  uint *v4

  v1 = a1;
  v2 = 0;
  v3 = GetNrOfSpritesInList(a1);
  v4 = (uint *)GetSpriteList_124_3(v1);
  do
  {
    if ( !MaskSpriteFlags(v4, 1) )
      return v4;
    ++v2;
    v4 += 74;
  }
  while ( v2 < v3 );
  return 0;
}

//----- (02062154) --------------------------------------------------------
uint *__fastcall Function_2062154(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  uint *v8
  int v9
  int v10

  v10 = a4;
  v4 = a2;
  v5 = a3;
  v9 = 0;
  v6 = a1;
  if ( Function_20625b0(a1, &v8, &v9, 1) != 1 )
    return 0;
  while ( Function_2062e94(v8) != 1 || v4 != GetSpriteID((int)v8) || v5 != Function_2062c18(v8) )
  {
    if ( Function_20625b0(v6, &v8, &v9, 1) != 1 )
      return 0;
  }
  return v8;
}

//----- (020621AC) --------------------------------------------------------
int *__fastcall Function_20621ac(int a1, int a2)
{
  int v2
  int v3
  int v4
  uint *v5

  v2 = a2;
  v3 = GetSpriteListc(a1);
  v4 = GetSpriteMovement(v2);
  if ( v4 == 48 || v4 == 50 )
    v3 += 2;
  v5 = AddTaskToTaskList1((int)Function_20627e8, v2, v3);
  if ( !v5 )
    ErrorHandler();
  return Function_2062a1c(v2, (int)v5);
}

//----- (020621E8) --------------------------------------------------------
int __fastcall Function_20621e8(uint *a1, ushort *a2, int a3)
{
  ushort *v3
  uint *v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17
  int v18
  int v19
  int v20

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = GetOverworldsID(a2);
  SetSpriteID((int)v4, v6);
  v7 = GetOverworldsSprite((int)v3);
  v8 = ConvertOverworldSpriteToSpriteGraphicID(v5, v7);
  SetSpriteGraphic((int)v4, v8);
  v9 = GetOverworldsMovement((int)v3);
  SetSpriteMovement((int)v4, v9);
  v10 = GetOverworldsTrainer((int)v3);
  SetSpriteTrainer((int)v4, v10);
  v11 = GetOverworldsFlag((int)v3);
  SetSpriteFlag((int)v4, v11);
  v12 = GetOverworldsScript((int)v3);
  SetSpriteScript((int)v4, v12);
  v13 = GetOverworldsOrientation((int)v3);
  SetSpriteInitOrientation((int)v4, v13);
  v14 = Function_2063150(v3, 0);
  Function_20629b4(v4, v14, 0);
  v15 = Function_2063150(v3, 1);
  Function_20629b4(v4, v15, 1);
  v16 = Function_2063150(v3, 2);
  Function_20629b4(v4, v16, 2);
  v17 = GetOverworldsMovementWidth((int)v3);
  SetSpriteMovementWidth((int)v4, v17);
  v18 = GetOverworldsMovementLength((int)v3);
  SetSpriteMovementLength((int)v4, v18);
  return Function_20622b8(v4, (int)v3, v19, v20);
}

//----- (020622B8) --------------------------------------------------------
int __fastcall Function_20622b8(uint *a1, int a2, int a3, int a4)
{
  int v4
  uint *v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v13
  int v14
  int v15
  int v16

  v16 = a4;
  v4 = a2;
  v5 = a1;
  v6 = GetOverworldsX(a2);
  v7 = v6;
  v13 = (v6 << 16) + 0x8000;
  Function_2062ff4((int)v5, v6);
  SetSpriteX2((int)v5, v7);
  SaveSpritePositionX((int)v5, v7);
  v8 = GetOverworldsZ(v4);
  v14 = v8;
  v9 = (int)((v8 >> 3) + ((uint)(v8 >> 14) >> 20)) >> 12;
  Function_2062ffc((int)v5, v9);
  SetSpriteZ2((int)v5, v9);
  SaveSpritePositionZ((int)v5, v9);
  v10 = GetOverworldsY(v4);
  v11 = v10;
  v15 = (v10 << 16) + 0x8000;
  Function_2063004((int)v5, v10);
  SetSpriteY2((int)v5, v11);
  SaveSpritePositionY((int)v5, v11);
  return CopyToSprite70Struct(v5, &v13);
}

//----- (0206234C) --------------------------------------------------------
int *__fastcall Function_206234c(uint *a1, int a2)
{
  int v2
  uint *v3
  int v4
  int v5

  v2 = a2;
  v3 = a1;
  SetSpriteFlags(a1, 6145);
  if ( IsSpriteScriptFFFF((int)v3) == 1 )
    Function_2062e78(v3, 1);
  SetSpriteSpriteList((int)v3, v2);
  v4 = GetSpriteInitOrientation((int)v3);
  ChangeSpriteFaceDirection((int)v3, v4);
  v5 = GetSpriteInitOrientation((int)v3);
  ChangeSpriteFace2Direction((int)v3, v5);
  return Function_20656dc(v3);
}

//----- (0206239C) --------------------------------------------------------
int *__fastcall Function_206239c(int a1)
{
  int v1
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7

  v1 = a1;
  v2 = GetSpriteMovement(a1);
  v3 = Function_206320c(v2);
  v4 = v3;
  v5 = Function_2063224(v3);
  SetSprite_b8Callback(v1, v5);
  v6 = Function_2063228(v4);
  SetSprite_bcCallback(v1, v6);
  v7 = Function_206322c(v4);
  return SetSprite_c0Callback(v1, v7);
}

//----- (020623D4) --------------------------------------------------------
int *__fastcall Function_20623d4(int a1)
{
  int v1
  int v2
  int *v3
  int v4
  int v5
  int v6
  int v7
  int v8

  v1 = a1;
  v2 = GetSpriteGraphic(a1);
  if ( v2 == 0x2000 )
    v3 = dword_21FB470;
  else
    v3 = (int *)Function_2063244(v2);
  v4 = Function_2063230((int)v3);
  Function_2062b4c(v1, v4);
  v5 = Function_2063234((int)v3);
  Function_2062b60(v1, v5);
  v6 = Function_2063238((int)v3);
  Function_2062b74(v1, v6);
  v7 = Function_206323c((int)v3);
  Function_2062b88(v1, v7);
  v8 = Function_2063240((int)v3);
  return Function_2062b9c(v1, v8);
}

//----- (0206243C) --------------------------------------------------------
int *__fastcall Function_206243c(int *a1)
{
  return Call_FillMemWithValue(a1, 0, 0x128u);
}

//----- (0206244C) --------------------------------------------------------
int __fastcall Function_206244c(uint *a1, int a2, int a3, ushort *a4)
{
  int v4
  uint *v5
  ushort *v6
  int v7
  int v8
  int i

  v4 = a3;
  v5 = a1;
  v6 = a4;
  for ( i = a2; v4; v6 += 16 )
  {
    v7 = GetOverworldsID(v6);
    if ( v7 == GetSpriteID((int)v5) )
    {
      if ( HasOverworldsNoScript((int)v6) == 1 )
      {
        v8 = GetOverworldsFlagWithoutScript((int)v6);
        if ( Function_2062e94(v5) == 1 )
        {
          if ( v8 == Function_2062c18(v5) )
            return 1;
        }
        else if ( v8 == GetSprite_c((int)v5) )
        {
          return 2;
        }
      }
      else if ( Function_2062e94(v5) == 1 && i == Function_2062c18(v5) )
      {
        return 2;
      }
    }
    --v4;
  }
  return 0;
}

//----- (020624CC) --------------------------------------------------------
int __fastcall Function_20624cc(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v8
  int v9
  int v10

  v10 = a4;
  v4 = a2;
  v5 = a3;
  v9 = 0;
  v6 = a1;
  if ( Function_20625b0(a1, &v8, &v9, 1) != 1 )
    return 0;
  while ( v4 != GetSpriteID(v8) || v5 != GetSprite_c(v8) )
  {
    if ( Function_20625b0(v6, &v8, &v9, 1) != 1 )
      return 0;
  }
  return v8;
}

//----- (0206251C) --------------------------------------------------------
uint *__fastcall GetAdressOfSpriteID(int a1, int a2)
{
  int v2
  int v3
  int v4
  uint *v5

  v2 = a1;
  v3 = a2;
  if ( !a1 )
    ErrorHandler();
  v4 = GetNrOfSpritesInList(v2);
  v5 = (uint *)GetSpriteList_124_2(v2);
  do
  {
    if ( CheckSpriteFlags(v5, 1) == 1 && !Function_2062e94(v5) && v3 == GetSpriteID((int)v5) )
      return v5;
    --v4;
    v5 += 74;
  }
  while ( v4 > 0 );
  return 0;
}

//----- (02062570) --------------------------------------------------------
uint *__fastcall GetSpriteAdrWithMovementNr(int a1, int a2)
{
  int v2
  int v3
  int v4
  uint *v5

  v2 = a1;
  v3 = a2;
  v4 = GetNrOfSpritesInList(a1);
  v5 = (uint *)GetSpriteList_124_2(v2);
  do
  {
    if ( CheckSpriteFlags(v5, 1) == 1 && v3 == GetSpriteMovement((int)v5) )
      return v5;
    --v4;
    v5 += 74;
  }
  while ( v4 > 0 );
  return 0;
}

//----- (020625B0) --------------------------------------------------------
int __fastcall Function_20625b0(int a1, uint *a2, int *a3, int a4)
{
  int *v4
  int v5
  int v6
  int v7
  uint *v9
  uint *v10

  v4 = a3;
  v5 = a1;
  v10 = a2;
  v6 = a4;
  v7 = GetNrOfSpritesInList(a1);
  if ( *v4 >= v7 )
    return 0;
  v9 = (uint *)(GetSpriteList_124_2(v5) + 296 * *v4);
  do
  {
    ++*v4;
    if ( v6 == MaskSpriteFlags(v9, v6) )
    {
      *v10 = v9;
      return 1;
    }
    v9 += 74;
  }
  while ( *v4 < v7 );
  return 0;
}

//----- (02062604) --------------------------------------------------------
uint *__fastcall Function_2062604(uint *a1)
{
  uint *v1

  v1 = a1;
  SetSpriteFlags(a1, 4);
  return UnsetSpriteMainFlags(v1);
}

//----- (02062618) --------------------------------------------------------
uint *__fastcall UnsetSpriteMainFlags(uint *a1)
{
  return UnsetSpriteFlags(a1, 84967424);
}

//----- (02062628) --------------------------------------------------------
void Function_2062628_Dummy()
{
  ;
}

//----- (0206262C) --------------------------------------------------------
int __fastcall ConvertOverworldSpriteToSpriteGraphicID(int a1, int a2)
{
  if ( a2 >= 101 && a2 <= 116 )
    a2 = Function_203f164(a1, (a2 - 101) & 0xFFFF);
  return a2;
}

//----- (02062648) --------------------------------------------------------
int __fastcall Function_2062648(uint *a1)
{
  uint *v1
  int result
  int v3
  int v4
  int v5

  v1 = a1;
  result = MaskSpriteFlags(a1, 4096);
  if ( result )
    result = Function_20642f8(v1, v3, v4, v5);
  return result;
}

//----- (02062660) --------------------------------------------------------
int __fastcall Function_2062660(int a1)
{
  int v1

  v1 = a1;
  Function_206239c(a1);
  return Function_2063400(v1);
}

//----- (02062670) --------------------------------------------------------
uint *__fastcall Function_2062670(int a1)
{
  uint *v1
  uint *v2
  uint *result

  v1 = (uint *)a1;
  v2 = (uint *)GetSpriteSpriteList(a1);
  result = (uint *)Function_2062ca8(v2);
  if ( result )
  {
    Function_2062648(v1);
    SetSpritea0((int)v1, 0);
    ((void (__fastcall *)(uint *, uint))dword_21EDD78[0])(v1, 0);
    result = (uint *)CheckSpriteFlag_4000(v1);
    if ( !result )
    {
      Function_20623d4((int)v1);
      Function_2062b54((int)v1);
      result = SetSpriteFlag_4000(v1);
    }
  }
  return result;
}

//----- (020626B4) --------------------------------------------------------
BOOL __fastcall IsSpriteScriptFFFF(int a1)
{
  return (ushort)GetSpriteScript(a1) == 0xFFFF;
}

//----- (020626D0) --------------------------------------------------------
int __fastcall Function_20626d0(uint *a1, int a2, int a3)
{
  uint *v3
  int v4
  int v5
  int v6
  int v7

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( Function_2062e94(a1) != 1 )
    ErrorHandler();
  Function_2062e78(v3, 0);
  SetSprite_c((int)v3, v5);
  v6 = GetOverworldsScript(v4);
  SetSpriteScript((int)v3, v6);
  v7 = GetOverworldsFlag(v4);
  return SetSpriteFlag((int)v3, v7);
}

//----- (02062714) --------------------------------------------------------
int __fastcall Function_2062714(uint *a1, int a2, int a3)
{
  int v3
  uint *v4
  int v5
  int v6
  int v7

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( HasOverworldsNoScript(a3) != 1 )
    ErrorHandler();
  Function_2062e78(v4, 1);
  v6 = GetOverworldsScript(v3);
  SetSpriteScript((int)v4, v6);
  v7 = GetOverworldsFlagWithoutScript(v3);
  SetSpriteFlag((int)v4, v7);
  return SetSprite_c((int)v4, v5);
}

//----- (02062758) --------------------------------------------------------
int __fastcall Function_2062758(int a1, int a2)
{
  return GetSpriteSpriteListc(a1) + a2;
}

//----- (02062764) --------------------------------------------------------
int __fastcall Function_2062764(uint *a1, int a2, int a3)
{
  int v3
  uint *v4
  int v5
  int result

  v3 = a2;
  v4 = a1;
  v5 = a3;
  if ( !CheckSpriteFlags(a1, 1) )
    return 0;
  if ( v3 != GetSpriteID((int)v4) )
    return 0;
  if ( v5 == GetSprite_c((int)v4) )
    goto LABEL_13;
  if ( !Function_2062e94(v4) )
    return 0;
  if ( v5 == Function_2062c18(v4) )
LABEL_13:
    result = 1;
  else
    result = 0;
  return result;
}

//----- (020627B4) --------------------------------------------------------
int __fastcall Function_20627b4(uint *a1, int a2, int a3, int a4)
{
  int v4
  uint *v5
  int v6
  int v7

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  if ( !CheckSpriteFlags(a1, 1) )
    return 0;
  if ( Function_2062924((int)v5) == v4 )
    return Function_2062764(v5, v6, v7);
  return 0;
}

//----- (020627E8) --------------------------------------------------------
int __fastcall Function_20627e8(int a1, int a2)
{
  uint *v2
  int result

  v2 = (uint *)a2;
  Function_2063410(a2);
  result = CheckSpriteFlag_Locked(v2);
  if ( result )
    result = Function_2062804((int)v2);
  return result;
}

//----- (02062804) --------------------------------------------------------
int __fastcall Function_2062804(int a1)
{
  int v1
  uint *v2
  int result

  v1 = a1;
  v2 = (uint *)GetSpriteSpriteList(a1);
  result = Function_2062ca8(v2);
  if ( result == 1 )
    result = ((int (__fastcall *)(int))dword_21ECCC8[0])(v1);
  return result;
}

//----- (0206281C) --------------------------------------------------------
void Function_206281c_Dummy()
{
  ;
}

//----- (02062820) --------------------------------------------------------
int __fastcall SetNrOfSpritesInList(int result, int a2)
{
  *(uint *)(result + 4) = a2;
  return result;
}

//----- (02062824) --------------------------------------------------------
int __fastcall GetNrOfSpritesInList(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (02062828) --------------------------------------------------------
int __fastcall IncreaseSpriteList8(int result)
{
  ++*(uint *)(result + 8);
  return result;
}

//----- (02062830) --------------------------------------------------------
int __fastcall DecreaseSpriteList8(int result)
{
  --*(uint *)(result + 8);
  return result;
}

//----- (02062838) --------------------------------------------------------
uint *__fastcall SetBitsInSpriteList0(uint *result, int a2)
{
  *result |= a2;
  return result;
}

//----- (02062840) --------------------------------------------------------
uint *__fastcall UnsetBitsInSpriteList0(uint *result, int a2)
{
  *result &= ~a2;
  return result;
}

//----- (0206284C) --------------------------------------------------------
int __fastcall MaskBitsInSpriteList0(uint *a1, int a2)
{
  return *a1 & a2;
}

//----- (02062854) --------------------------------------------------------
int __fastcall SetSpriteListc(int result, int a2)
{
  *(uint *)(result + 12) = a2;
  return result;
}

//----- (02062858) --------------------------------------------------------
int __fastcall GetSpriteListc(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (0206285C) --------------------------------------------------------
int __fastcall GetSpriteListAdr18(int a1)
{
  return a1 + 24;
}

//----- (02062860) --------------------------------------------------------
int __fastcall SetSpriteList_124(int result, int a2)
{
  *(uint *)(result + 292) = a2;
  return result;
}

//----- (02062868) --------------------------------------------------------
int __fastcall GetSpriteList_124_1(int a1)
{
  return *(uint *)(a1 + 292);
}

//----- (02062870) --------------------------------------------------------
int __fastcall GetSpriteList_124_2(int a1)
{
  return *(uint *)(a1 + 292);
}

//----- (02062878) --------------------------------------------------------
int __fastcall GetSpriteList_124_3(int a1)
{
  return *(uint *)(a1 + 292);
}

//----- (02062880) --------------------------------------------------------
uint *__fastcall GetAdrOfNextSprite(uint *result)
{
  *result += 296;
  return result;
}

//----- (0206288C) --------------------------------------------------------
int __fastcall SetSpriteListFirstSprite(int result, int a2)
{
  *(uint *)(result + 296) = a2;
  return result;
}

//----- (02062894) --------------------------------------------------------
int __fastcall GetSpriteListFirstSprite(int a1)
{
  return *(uint *)(a1 + 296);
}

//----- (0206289C) --------------------------------------------------------
int __fastcall SetSpriteListNARCFileHandlerOfMModel(int result, int a2)
{
  *(uint *)(result + 20) = a2;
  return result;
}

//----- (020628A0) --------------------------------------------------------
int __fastcall GetSpriteListNARCFileHandlerOfMModel(int a1)
{
  int v1

  v1 = a1;
  if ( !*(uint *)(a1 + 20) )
    ErrorHandler();
  return *(uint *)(v1 + 20);
}

//----- (020628B4) --------------------------------------------------------
uint *__fastcall SaveSpriteFlags(uint *result, int a2)
{
  *result = a2;
  return result;
}

//----- (020628B8) --------------------------------------------------------
int __fastcall LoadSpriteFlags(int a1)
{
  return *(uint *)a1;
}

//----- (020628BC) --------------------------------------------------------
uint *__fastcall SetSpriteFlags(uint *result, int a2)
{
  *result |= a2;
  return result;
}

//----- (020628C4) --------------------------------------------------------
uint *__fastcall UnsetSpriteFlags(uint *result, int a2)
{
  *result &= ~a2;
  return result;
}

//----- (020628D0) --------------------------------------------------------
int __fastcall MaskSpriteFlags(uint *a1, int a2)
{
  return *a1 & a2;
}

//----- (020628D8) --------------------------------------------------------
BOOL __fastcall CheckSpriteFlags(uint *a1, int a2)
{
  return (*a1 & a2) != 0;
}

//----- (020628E8) --------------------------------------------------------
int __fastcall SetSprite_4(int result, int a2)
{
  *(uint *)(result + 4) = a2;
  return result;
}

//----- (020628EC) --------------------------------------------------------
int __fastcall GetSprite_4(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (020628F0) --------------------------------------------------------
int __fastcall SetBitsSprite_4(int result, int a2)
{
  *(uint *)(result + 4) |= a2;
  return result;
}

//----- (020628F8) --------------------------------------------------------
int __fastcall UnsetBitsSprite_4(int result, int a2)
{
  *(uint *)(result + 4) &= ~a2;
  return result;
}

//----- (02062904) --------------------------------------------------------
int __fastcall MaskBitsSprite_4(int a1, int a2)
{
  return *(uint *)(a1 + 4) & a2;
}

//----- (0206290C) --------------------------------------------------------
int __fastcall SetSpriteID(int result, int a2)
{
  *(uint *)(result + 8) = a2;
  return result;
}

//----- (02062910) --------------------------------------------------------
int __fastcall GetSpriteID(int a1)
{
  return *(uint *)(a1 + 8);
}

//----- (02062914) --------------------------------------------------------
int __fastcall SetSprite_c(int result, int a2)
{
  *(uint *)(result + 12) = a2;
  return result;
}

//----- (02062918) --------------------------------------------------------
int __fastcall GetSprite_c(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (0206291C) --------------------------------------------------------
int __fastcall SetSpriteGraphic(int result, int a2)
{
  *(uint *)(result + 16) = a2;
  return result;
}

//----- (02062920) --------------------------------------------------------
int __fastcall GetSpriteGraphic(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (02062924) --------------------------------------------------------
int __fastcall Function_2062924(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = GetSpriteGraphic(a1);
  if ( IsValueSpriteBerrytree(v2) == 1 )
    v2 = Function_2067800(v1);
  return v2;
}

//----- (02062944) --------------------------------------------------------
int __fastcall SetSpriteMovement(int result, int a2)
{
  *(uint *)(result + 20) = a2;
  return result;
}

//----- (02062948) --------------------------------------------------------
int __fastcall GetSpriteMovement(int a1)
{
  return *(uint *)(a1 + 20);
}

//----- (0206294C) --------------------------------------------------------
int __fastcall SetSpriteTrainer(int result, int a2)
{
  *(uint *)(result + 24) = a2;
  return result;
}

//----- (02062950) --------------------------------------------------------
int __fastcall GetSpriteTrainer(int a1)
{
  return *(uint *)(a1 + 24);
}

//----- (02062954) --------------------------------------------------------
int __fastcall SetSpriteFlag(int result, int a2)
{
  *(uint *)(result + 28) = a2;
  return result;
}

//----- (02062958) --------------------------------------------------------
int __fastcall GetSpriteFlag(int a1)
{
  return *(uint *)(a1 + 28);
}

//----- (0206295C) --------------------------------------------------------
int __fastcall SetSpriteScript(int result, int a2)
{
  *(uint *)(result + 32) = a2;
  return result;
}

//----- (02062960) --------------------------------------------------------
int __fastcall GetSpriteScript(int a1)
{
  return *(uint *)(a1 + 32);
}

//----- (02062964) --------------------------------------------------------
int __fastcall SetSpriteInitOrientation(int result, int a2)
{
  *(uint *)(result + 36) = a2;
  return result;
}

//----- (02062968) --------------------------------------------------------
int __fastcall GetSpriteInitOrientation(int a1)
{
  return *(uint *)(a1 + 36);
}

//----- (0206296C) --------------------------------------------------------
int __fastcall ChangeSpriteFaceDirection(int result, int a2)
{
  *(uint *)(result + 48) = *(uint *)(result + 40);
  *(uint *)(result + 40) = a2;
  return result;
}

//----- (02062974) --------------------------------------------------------
int __fastcall ChangeSpriteFaceDirection_WithCheck(uint *a1, int a2)
{
  int v2
  uint *v3
  int result

  v2 = a2;
  v3 = a1;
  result = MaskSpriteFlags(a1, 128);
  if ( !result )
  {
    result = v3[10];
    v3[12] = result;
    v3[10] = v2;
  }
  return result;
}

//----- (0206298C) --------------------------------------------------------
int __fastcall LoadSpriteFaceDirection(int a1)
{
  return *(uint *)(a1 + 40);
}

//----- (02062990) --------------------------------------------------------
int __fastcall LoadSpriteOldFaceDirection(int a1)
{
  return *(uint *)(a1 + 48);
}

//----- (02062994) --------------------------------------------------------
int __fastcall ChangeSpriteFace2Direction(int result, int a2)
{
  *(uint *)(result + 52) = *(uint *)(result + 44);
  *(uint *)(result + 44) = a2;
  return result;
}

//----- (0206299C) --------------------------------------------------------
int __fastcall LoadSpriteFace2Direction(int a1)
{
  return *(uint *)(a1 + 44);
}

//----- (020629A0) --------------------------------------------------------
int __fastcall ChangeBothSpriteFaceDirections(uint *a1, int a2)
{
  uint *v2
  int v3

  v2 = a1;
  v3 = a2;
  ChangeSpriteFaceDirection_WithCheck(a1, a2);
  return ChangeSpriteFace2Direction((int)v2, v3);
}

//----- (020629B4) --------------------------------------------------------
uint *__fastcall Function_20629b4(uint *result, int a2, int a3)
{
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      result[15] = a2;
    }
    else if ( a3 == 2 )
    {
      result[16] = a2;
    }
    else
    {
      result = (uint *)ErrorHandler();
    }
  }
  else
  {
    result[14] = a2;
  }
  return result;
}

//----- (020629D8) --------------------------------------------------------
int __fastcall Function_20629d8(uint *a1, int a2)
{
  switch ( a2 )
  {
    case 0:
      return a1[14];
    case 1:
      return a1[15];
    case 2:
      return a1[16];
  }
  ErrorHandler();
  return 0;
}

//----- (020629FC) --------------------------------------------------------
int __fastcall SetSpriteMovementWidth(int result, int a2)
{
  *(uint *)(result + 68) = a2;
  return result;
}

//----- (02062A00) --------------------------------------------------------
int __fastcall GetSpriteMovementWidth(int a1)
{
  return *(uint *)(a1 + 68);
}

//----- (02062A04) --------------------------------------------------------
int __fastcall SetSpriteMovementLength(int result, int a2)
{
  *(uint *)(result + 72) = a2;
  return result;
}

//----- (02062A08) --------------------------------------------------------
int __fastcall GetSpriteMovementLength(int a1)
{
  return *(uint *)(a1 + 72);
}

//----- (02062A0C) --------------------------------------------------------
int *__fastcall SetSpritea0(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 160);
  *result = a2;
  return result;
}

//----- (02062A14) --------------------------------------------------------
int __fastcall GetSpritea0(int a1)
{
  return *(uint *)(a1 + 160);
}

//----- (02062A1C) --------------------------------------------------------
int *__fastcall Function_2062a1c(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 176);
  *result = a2;
  return result;
}

//----- (02062A24) --------------------------------------------------------
int __fastcall Function_2062a24(int a1)
{
  return *(uint *)(a1 + 176);
}

//----- (02062A2C) --------------------------------------------------------
int __fastcall Function_2062a2c(int a1)
{
  int *v1

  v1 = (int *)Function_2062a24(a1);
  return Call_RemoveTaskFromTaskList(v1);
}

//----- (02062A38) --------------------------------------------------------
int *__fastcall SetSpriteSpriteList(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 180);
  *result = a2;
  return result;
}

//----- (02062A40) --------------------------------------------------------
int __fastcall GetSpriteSpriteList(int a1)
{
  return *(uint *)(a1 + 180);
}

//----- (02062A48) --------------------------------------------------------
void __fastcall GetSpriteSpriteList2(int a1)
{
  int v1

  v1 = *(uint *)(a1 + 180);
  Function_206281c_Dummy();
}

//----- (02062A54) --------------------------------------------------------
int *__fastcall Function_2062a54(int a1, int a2)
{
  int v2
  int v3
  int *v4

  v2 = a2;
  v3 = a1;
  if ( a2 > 16 )
    ErrorHandler();
  v4 = (int *)Function_2062a78(v3);
  Call_FillMemWithValue(v4, 0, v2);
  return v4;
}

//----- (02062A78) --------------------------------------------------------
int __fastcall Function_2062a78(int a1)
{
  return a1 + 216;
}

//----- (02062A7C) --------------------------------------------------------
int *__fastcall Function_2062a7c(int a1, int a2)
{
  int v2
  int v3
  int *v4

  v2 = a2;
  v3 = a1;
  if ( a2 > 16 )
    ErrorHandler();
  v4 = (int *)GetSpriteAdre8(v3);
  Call_FillMemWithValue(v4, 0, v2);
  return v4;
}

//----- (02062AA0) --------------------------------------------------------
int __fastcall GetSpriteAdre8(int a1)
{
  return a1 + 232;
}

//----- (02062AA4) --------------------------------------------------------
int *__fastcall GetSpriteAdrf8AndClearMem(int a1, int a2)
{
  int v2
  int v3
  int *v4

  v2 = a2;
  v3 = a1;
  if ( a2 > 16 )
    ErrorHandler();
  v4 = (int *)GetSpriteAdrf8(v3);
  Call_FillMemWithValue(v4, 0, v2);
  return v4;
}

//----- (02062AC8) --------------------------------------------------------
int __fastcall GetSpriteAdrf8(int a1)
{
  return a1 + 248;
}

//----- (02062ACC) --------------------------------------------------------
int *__fastcall Function_2062acc(int a1, int a2)
{
  int v2
  int v3
  int *v4

  v2 = a2;
  v3 = a1;
  if ( a2 > 32 )
    ErrorHandler();
  v4 = (int *)Function_2062af0(v3);
  Call_FillMemWithValue(v4, 0, v2);
  return v4;
}

//----- (02062AF0) --------------------------------------------------------
int __fastcall Function_2062af0(int a1)
{
  return a1 + 264;
}

//----- (02062AF8) --------------------------------------------------------
int *__fastcall SetSprite_b8Callback(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 184);
  *result = a2;
  return result;
}

//----- (02062B00) --------------------------------------------------------
int __fastcall CallSprite_b8Callback(int a1)
{
  return (*(int (**)(void))(a1 + 184))();
}

//----- (02062B0C) --------------------------------------------------------
int *__fastcall SetSprite_bcCallback(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 188);
  *result = a2;
  return result;
}

//----- (02062B14) --------------------------------------------------------
int __fastcall CallSprite_bcCallback(int a1)
{
  return (*(int (**)(void))(a1 + 188))();
}

//----- (02062B20) --------------------------------------------------------
int *__fastcall SetSprite_c0Callback(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 192);
  *result = a2;
  return result;
}

//----- (02062B28) --------------------------------------------------------
int __fastcall CallSprite_c0Callback(int a1)
{
  return (*(int (**)(void))(a1 + 192))();
}

//----- (02062B34) --------------------------------------------------------
int __fastcall Function_2062b34(int a1)
{
  int v1
  int v2
  int v3

  v1 = a1;
  v2 = GetSpriteMovement(a1);
  v3 = Function_206320c(v2);
  return (*(int (__fastcall **)(int))(v3 + 16))(v1);
}

//----- (02062B4C) --------------------------------------------------------
int *__fastcall Function_2062b4c(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 196);
  *result = a2;
  return result;
}

//----- (02062B54) --------------------------------------------------------
int __fastcall Function_2062b54(int a1)
{
  return (*(int (**)(void))(a1 + 196))();
}

//----- (02062B60) --------------------------------------------------------
int *__fastcall Function_2062b60(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 200);
  *result = a2;
  return result;
}

//----- (02062B68) --------------------------------------------------------
int __fastcall Function_2062b68(int a1)
{
  return (*(int (**)(void))(a1 + 200))();
}

//----- (02062B74) --------------------------------------------------------
int *__fastcall Function_2062b74(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 204);
  *result = a2;
  return result;
}

//----- (02062B7C) --------------------------------------------------------
int __fastcall Function_2062b7c(int a1)
{
  return (*(int (**)(void))(a1 + 204))();
}

//----- (02062B88) --------------------------------------------------------
int *__fastcall Function_2062b88(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 208);
  *result = a2;
  return result;
}

//----- (02062B90) --------------------------------------------------------
int __fastcall Function_2062b90(int a1)
{
  return (*(int (**)(void))(a1 + 208))();
}

//----- (02062B9C) --------------------------------------------------------
int *__fastcall Function_2062b9c(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 212);
  *result = a2;
  return result;
}

//----- (02062BA4) --------------------------------------------------------
int __fastcall Function_2062ba4(int a1)
{
  return (*(int (**)(void))(a1 + 212))();
}

//----- (02062BB0) --------------------------------------------------------
int *__fastcall SetSpriteMovementNr(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 164);
  *result = a2;
  return result;
}

//----- (02062BB8) --------------------------------------------------------
int __fastcall GetSpriteMovementNr(int a1)
{
  return *(uint *)(a1 + 164);
}

//----- (02062BC0) --------------------------------------------------------
int *__fastcall SetSpriteMovementState(int a1, int a2)
{
  int *result

  result = (int *)(a1 + 168);
  *result = a2;
  return result;
}

//----- (02062BC8) --------------------------------------------------------
uint *__fastcall IncreaseSpriteMovementState(int a1)
{
  int v1
  uint *result

  v1 = *(uint *)(a1 + 168);
  result = (uint *)(a1 + 168);
  *result = v1 + 1;
  return result;
}

//----- (02062BD8) --------------------------------------------------------
int __fastcall GetSpriteMovementState(int a1)
{
  return *(uint *)(a1 + 168);
}

//----- (02062BE0) --------------------------------------------------------
short *__fastcall Function_2062be0(int a1, short a2)
{
  short *result

  result = (short *)(a1 + 172);
  *result = a2;
  return result;
}

//----- (02062BE8) --------------------------------------------------------
int __fastcall Function_2062be8(int a1)
{
  return *(ushort *)(a1 + 172);
}

//----- (02062BF0) --------------------------------------------------------
short *__fastcall Function_2062bf0(int a1, short a2)
{
  short *result

  result = (short *)(a1 + 174);
  *result = a2;
  return result;
}

//----- (02062BF8) --------------------------------------------------------
int __fastcall Function_2062bf8(int a1)
{
  return *(ushort *)(a1 + 174);
}

//----- (02062C00) --------------------------------------------------------
int __fastcall GetSpriteSpriteListFirstSprite(int a1)
{
  int v1

  GetSpriteSpriteList2(a1);
  return GetSpriteListFirstSprite(v1);
}

//----- (02062C0C) --------------------------------------------------------
int __fastcall GetSpriteSpriteListc(int a1)
{
  int v1

  v1 = GetSpriteSpriteList(a1);
  return GetSpriteListc(v1);
}

//----- (02062C18) --------------------------------------------------------
int __fastcall Function_2062c18(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( Function_2062e94(a1) != 1 )
    ErrorHandler();
  return GetSpriteFlag((int)v1);
}

//----- (02062C30) --------------------------------------------------------
uint *__fastcall Function_2062c30(uint *a1)
{
  return SetBitsInSpriteList0(a1, 6);
}

//----- (02062C3C) --------------------------------------------------------
uint *__fastcall Function_2062c3c(uint *a1)
{
  return UnsetBitsInSpriteList0(a1, 6);
}

//----- (02062C48) --------------------------------------------------------
uint *__fastcall Function_2062c48(int a1)
{
  int v1
  int v2
  uint *v3
  uint *result

  v1 = a1;
  v2 = GetNrOfSpritesInList(a1);
  v3 = (uint *)GetSpriteList_124_3(v1);
  do
  {
    result = (uint *)CheckSpriteFlag_Locked(v3);
    if ( result )
      result = SetSpriteFlag_Lock(v3);
    v3 += 74;
    --v2;
  }
  while ( v2 );
  return result;
}

//----- (02062C78) --------------------------------------------------------
uint *__fastcall Sprite_ReleaseAll(int a1)
{
  int v1
  int v2
  uint *v3
  uint *result

  v1 = a1;
  v2 = GetNrOfSpritesInList(a1);
  v3 = (uint *)GetSpriteList_124_3(v1);
  do
  {
    result = (uint *)CheckSpriteFlag_Locked(v3);
    if ( result )
      result = UnsetSpriteFlag_Lock(v3);
    v3 += 74;
    --v2;
  }
  while ( v2 );
  return result;
}

//----- (02062CA8) --------------------------------------------------------
BOOL __fastcall Function_2062ca8(uint *a1)
{
  return MaskBitsInSpriteList0(a1, 1) != 0;
}

//----- (02062CBC) --------------------------------------------------------
int __fastcall Function_2062cbc(int a1, int a2)
{
  int v2
  uint *v3

  v2 = a2;
  v3 = (uint *)GetSpriteSpriteList(a1);
  return MaskBitsInSpriteList0(v3, v2);
}

//----- (02062CCC) --------------------------------------------------------
uint *__fastcall Function_2062ccc(uint *a1, int a2)
{
  uint *result

  if ( a2 )
    result = UnsetBitsInSpriteList0(a1, 8);
  else
    result = SetBitsInSpriteList0(a1, 8);
  return result;
}

//----- (02062CE4) --------------------------------------------------------
BOOL __fastcall Function_2062ce4(uint *a1)
{
  return MaskBitsInSpriteList0(a1, 8) == 0;
}

//----- (02062CF8) --------------------------------------------------------
BOOL __fastcall CheckSpriteFlag_Locked(uint *a1)
{
  return CheckSpriteFlags(a1, 1);
}

//----- (02062D04) --------------------------------------------------------
uint *__fastcall SetSpriteFlag_2(uint *a1)
{
  return SetSpriteFlags(a1, 2);
}

//----- (02062D10) --------------------------------------------------------
uint *__fastcall UnsetSpriteFlag_2(uint *a1)
{
  return UnsetSpriteFlags(a1, 2);
}

//----- (02062D1C) --------------------------------------------------------
BOOL __fastcall CheckSpriteFlag_2(uint *a1)
{
  return CheckSpriteFlags(a1, 2);
}

//----- (02062D28) --------------------------------------------------------
uint *__fastcall SetSpriteFlag_4(uint *a1)
{
  return SetSpriteFlags(a1, 4);
}

//----- (02062D34) --------------------------------------------------------
uint *__fastcall UnsetSpriteFlag_8(uint *a1)
{
  return UnsetSpriteFlags(a1, 8);
}

//----- (02062D40) --------------------------------------------------------
uint *__fastcall SetSpriteFlag_4000(uint *a1)
{
  return SetSpriteFlags(a1, 0x4000);
}

//----- (02062D4C) --------------------------------------------------------
BOOL __fastcall CheckSpriteFlag_4000(uint *a1)
{
  return CheckSpriteFlags(a1, 0x4000);
}

//----- (02062D58) --------------------------------------------------------
BOOL __fastcall CheckSpriteFlag_200(uint *a1)
{
  return CheckSpriteFlags(a1, 512);
}

//----- (02062D64) --------------------------------------------------------
uint *__fastcall Function_2062d64(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = SetSpriteFlags(a1, 512);
  else
    result = UnsetSpriteFlags(a1, 512);
  return result;
}

//----- (02062D80) --------------------------------------------------------
uint *__fastcall Function_2062d80(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = UnsetSpriteFlags(a1, 0x40000);
  else
    result = SetSpriteFlags(a1, 0x40000);
  return result;
}

//----- (02062D9C) --------------------------------------------------------
BOOL __fastcall Function_2062d9c(uint *a1)
{
  return CheckSpriteFlags(a1, 0x80000) != 1;
}

//----- (02062DB4) --------------------------------------------------------
uint *__fastcall Function_2062db4(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = SetSpriteFlags(a1, 0x80000);
  else
    result = UnsetSpriteFlags(a1, 0x80000);
  return result;
}

//----- (02062DD0) --------------------------------------------------------
uint *__fastcall SetSpriteFlag_Lock(uint *a1)
{
  return SetSpriteFlags(a1, 64);
}

//----- (02062DDC) --------------------------------------------------------
uint *__fastcall UnsetSpriteFlag_Lock(uint *a1)
{
  return UnsetSpriteFlags(a1, 64);
}

//----- (02062DE8) --------------------------------------------------------
BOOL __fastcall CheckSpriteFlag_Lock(uint *a1)
{
  return CheckSpriteFlags(a1, 64) == 1;
}

//----- (02062DFC) --------------------------------------------------------
BOOL __fastcall Function_2062dfc(int a1)
{
  uint *v1
  uint *v2
  BOOL result

  v1 = (uint *)a1;
  v2 = (uint *)GetSpriteSpriteList(a1);
  if ( Function_2062ca8(v2) )
    result = MaskSpriteFlags(v1, 0x4000) != 0;
  else
    result = 0;
  return result;
}

//----- (02062E28) --------------------------------------------------------
uint *__fastcall SetUnsetSpriteFlags800000(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = SetSpriteFlags(a1, 0x800000);
  else
    result = UnsetSpriteFlags(a1, 0x800000);
  return result;
}

//----- (02062E44) --------------------------------------------------------
BOOL __fastcall IsSetSpriteFlags800000(uint *a1)
{
  return MaskSpriteFlags(a1, 0x800000) != 0;
}

//----- (02062E5C) --------------------------------------------------------
uint *__fastcall UnSetSpriteFlag_Follow(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = SetSpriteFlags(a1, 1024);
  else
    result = UnsetSpriteFlags(a1, 1024);
  return result;
}

//----- (02062E78) --------------------------------------------------------
uint *__fastcall Function_2062e78(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = SetSpriteFlags(a1, 0x2000000);
  else
    result = UnsetSpriteFlags(a1, 0x2000000);
  return result;
}

//----- (02062E94) --------------------------------------------------------
BOOL __fastcall Function_2062e94(uint *a1)
{
  return MaskSpriteFlags(a1, 0x2000000) != 0;
}

//----- (02062EAC) --------------------------------------------------------
uint *__fastcall Function_2062eac(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = SetSpriteFlags(a1, 0x4000000);
  else
    result = UnsetSpriteFlags(a1, 0x4000000);
  return result;
}

//----- (02062EC8) --------------------------------------------------------
BOOL __fastcall Function_2062ec8(uint *a1)
{
  return MaskSpriteFlags(a1, 0x4000000) != 0;
}

//----- (02062EE0) --------------------------------------------------------
uint *__fastcall Function_2062ee0(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = SetSpriteFlags(a1, 0x8000000);
  else
    result = UnsetSpriteFlags(a1, 0x8000000);
  return result;
}

//----- (02062EFC) --------------------------------------------------------
BOOL __fastcall Function_2062efc(uint *a1)
{
  return MaskSpriteFlags(a1, 0x8000000) != 0;
}

//----- (02062F14) --------------------------------------------------------
uint *__fastcall Function_2062f14(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = SetSpriteFlags(a1, 0x10000000);
  else
    result = UnsetSpriteFlags(a1, 0x10000000);
  return result;
}

//----- (02062F30) --------------------------------------------------------
BOOL __fastcall Function_2062f30(uint *a1)
{
  return MaskSpriteFlags(a1, 0x10000000) != 0;
}

//----- (02062F48) --------------------------------------------------------
uint *__fastcall SetUnsetSpriteFlags1000000(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = SetSpriteFlags(a1, 0x1000000);
  else
    result = UnsetSpriteFlags(a1, 0x1000000);
  return result;
}

//----- (02062F64) --------------------------------------------------------
BOOL __fastcall IsSetSpriteFlags1000000(uint *a1)
{
  return MaskSpriteFlags(a1, 0x1000000) != 0;
}

//----- (02062F7C) --------------------------------------------------------
BOOL __fastcall IsSetSpriteFlags10(uint *a1)
{
  return MaskSpriteFlags(a1, 16) != 0;
}

//----- (02062F90) --------------------------------------------------------
uint *__fastcall SetUnsetSpriteFlags20000000(uint *a1, int a2)
{
  uint *result

  if ( a2 == 1 )
    result = SetSpriteFlags(a1, 0x20000000);
  else
    result = UnsetSpriteFlags(a1, 0x20000000);
  return result;
}

//----- (02062FAC) --------------------------------------------------------
BOOL __fastcall IsSetSpriteFlags20000000(uint *a1)
{
  return MaskSpriteFlags(a1, 0x20000000) != 0;
}

//----- (02062FC4) --------------------------------------------------------
int __fastcall Function_2062fc4(int a1, int a2)
{
  int result

  if ( a2 == 1 )
    result = SetBitsSprite_4(a1, 4);
  else
    result = UnsetBitsSprite_4(a1, 4);
  return result;
}

//----- (02062FDC) --------------------------------------------------------
BOOL __fastcall Function_2062fdc(int a1)
{
  return MaskBitsSprite_4(a1, 4) != 0;
}

//----- (02062FF0) --------------------------------------------------------
int __fastcall Function_2062ff0(int a1)
{
  return *(uint *)(a1 + 76);
}

//----- (02062FF4) --------------------------------------------------------
int __fastcall Function_2062ff4(int result, int a2)
{
  *(uint *)(result + 76) = a2;
  return result;
}

//----- (02062FF8) --------------------------------------------------------
int __fastcall Function_2062ff8(int a1)
{
  return *(uint *)(a1 + 80);
}

//----- (02062FFC) --------------------------------------------------------
int __fastcall Function_2062ffc(int result, int a2)
{
  *(uint *)(result + 80) = a2;
  return result;
}

//----- (02063000) --------------------------------------------------------
int __fastcall Function_2063000(int a1)
{
  return *(uint *)(a1 + 84);
}

//----- (02063004) --------------------------------------------------------
int __fastcall Function_2063004(int result, int a2)
{
  *(uint *)(result + 84) = a2;
  return result;
}

//----- (02063008) --------------------------------------------------------
int __fastcall GetSpriteX2(int a1)
{
  return *(uint *)(a1 + 88);
}

//----- (0206300C) --------------------------------------------------------
int __fastcall SetSpriteX2(int result, int a2)
{
  *(uint *)(result + 88) = a2;
  return result;
}

//----- (02063010) --------------------------------------------------------
int __fastcall GetSpriteZ2(int a1)
{
  return *(uint *)(a1 + 92);
}

//----- (02063014) --------------------------------------------------------
int __fastcall SetSpriteZ2(int result, int a2)
{
  *(uint *)(result + 92) = a2;
  return result;
}

//----- (02063018) --------------------------------------------------------
int __fastcall GetSpriteY2(int a1)
{
  return *(uint *)(a1 + 96);
}

//----- (0206301C) --------------------------------------------------------
int __fastcall SetSpriteY2(int result, int a2)
{
  *(uint *)(result + 96) = a2;
  return result;
}

//----- (02063020) --------------------------------------------------------
int __fastcall LoadSpritePositionX(int a1)
{
  return *(uint *)(a1 + 100);
}

//----- (02063024) --------------------------------------------------------
int __fastcall SaveSpritePositionX(int result, int a2)
{
  *(uint *)(result + 100) = a2;
  return result;
}

//----- (02063028) --------------------------------------------------------
int __fastcall AddSpritePositionX(int result, int a2)
{
  *(uint *)(result + 100) += a2;
  return result;
}

//----- (02063030) --------------------------------------------------------
int __fastcall LoadSpritePositionZ(int a1)
{
  return *(uint *)(a1 + 104);
}

//----- (02063034) --------------------------------------------------------
int __fastcall SaveSpritePositionZ(int result, int a2)
{
  *(uint *)(result + 104) = a2;
  return result;
}

//----- (02063038) --------------------------------------------------------
int __fastcall AddSpritePositionZ(int result, int a2)
{
  *(uint *)(result + 104) += a2;
  return result;
}

//----- (02063040) --------------------------------------------------------
int __fastcall LoadSpritePositionY(int a1)
{
  return *(uint *)(a1 + 108);
}

//----- (02063044) --------------------------------------------------------
int __fastcall SaveSpritePositionY(int result, int a2)
{
  *(uint *)(result + 108) = a2;
  return result;
}

//----- (02063048) --------------------------------------------------------
int __fastcall AddSpritePositionY(int result, int a2)
{
  *(uint *)(result + 108) += a2;
  return result;
}

//----- (02063050) --------------------------------------------------------
int __fastcall CopySprite70Struct(uint *a1, uint *a2)
{
  uint *v2
  uint *v3
  int v4
  int result

  v2 = a2;
  v4 = a1[29];
  v3 = a1 + 30;
  *v2 = a1[28];
  v2[1] = v4;
  result = a1[30];
  v2[2] = *v3;
  return result;
}

//----- (02063060) --------------------------------------------------------
int __fastcall CopyToSprite70Struct(uint *a1, int *a2)
{
  int *v2
  uint *v3
  int v4
  int v5
  int result

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = a2[1];
  v2 += 2;
  v3 += 28;
  *v3 = v4;
  v3[1] = v5;
  result = *v2;
  v3[2] = *v2;
  return result;
}

//----- (02063070) --------------------------------------------------------
int __fastcall GetSpriteAdr70(int a1)
{
  return a1 + 112;
}

//----- (02063074) --------------------------------------------------------
int __fastcall GetSprite74(int a1)
{
  return *(uint *)(a1 + 116);
}

//----- (02063078) --------------------------------------------------------
int __fastcall Function_2063078(uint *a1, uint *a2)
{
  uint *v2
  uint *v3
  int v4
  int result

  v2 = a2;
  v4 = a1[32];
  v3 = a1 + 33;
  *v2 = a1[31];
  v2[1] = v4;
  result = a1[33];
  v2[2] = *v3;
  return result;
}

//----- (02063088) --------------------------------------------------------
int __fastcall Function_2063088(uint *a1, int *a2)
{
  int *v2
  uint *v3
  int v4
  int v5
  int result

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = a2[1];
  v2 += 2;
  v3 += 31;
  *v3 = v4;
  v3[1] = v5;
  result = *v2;
  v3[2] = *v2;
  return result;
}

//----- (02063098) --------------------------------------------------------
int __fastcall GetSpriteAdr7c(int a1)
{
  return a1 + 124;
}

//----- (0206309C) --------------------------------------------------------
int __fastcall Function_206309c(uint *a1, uint *a2)
{
  uint *v2
  uint *v3
  int v4
  int result

  v2 = a2;
  v4 = a1[35];
  v3 = a1 + 36;
  *v2 = a1[34];
  v2[1] = v4;
  result = a1[36];
  v2[2] = *v3;
  return result;
}

//----- (020630AC) --------------------------------------------------------
int __fastcall Function_20630ac(uint *a1, int *a2)
{
  int *v2
  uint *v3
  int v4
  int v5
  int result

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = a2[1];
  v2 += 2;
  v3 += 34;
  *v3 = v4;
  v3[1] = v5;
  result = *v2;
  v3[2] = *v2;
  return result;
}

//----- (020630BC) --------------------------------------------------------
int __fastcall Function_20630bc(uint *a1, uint *a2)
{
  uint *v2
  uint *v3
  int v4
  int result

  v2 = a2;
  v4 = a1[38];
  v3 = a1 + 39;
  *v2 = a1[37];
  v2[1] = v4;
  result = a1[39];
  v2[2] = *v3;
  return result;
}

//----- (020630CC) --------------------------------------------------------
int __fastcall Function_20630cc(uint *a1, int *a2)
{
  int *v2
  uint *v3
  int v4
  int v5
  int result

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = a2[1];
  v2 += 2;
  v3 += 37;
  *v3 = v4;
  v3[1] = v5;
  result = *v2;
  v3[2] = *v2;
  return result;
}

//----- (020630DC) --------------------------------------------------------
int __fastcall Function_20630dc(int a1)
{
  int v1

  v1 = GetSprite74(a1);
  return (int)((v1 >> 3) + ((uint)(v1 >> 14) >> 20)) >> 12;
}

//----- (020630F0) --------------------------------------------------------
ushort *__fastcall SetOverworldsID(ushort *result, short a2)
{
  *result = a2;
  return result;
}

//----- (020630F4) --------------------------------------------------------
int __fastcall GetOverworldsID(ushort *a1)
{
  return *a1;
}

//----- (020630F8) --------------------------------------------------------
int __fastcall SetOverworldsSprite(int result, short a2)
{
  *(ushort *)(result + 2) = a2;
  return result;
}

//----- (020630FC) --------------------------------------------------------
int __fastcall GetOverworldsSprite(int a1)
{
  return *(ushort *)(a1 + 2);
}

//----- (02063100) --------------------------------------------------------
int __fastcall SetOverworldsMovement(int result, short a2)
{
  *(ushort *)(result + 4) = a2;
  return result;
}

//----- (02063104) --------------------------------------------------------
int __fastcall GetOverworldsMovement(int a1)
{
  return *(ushort *)(a1 + 4);
}

//----- (02063108) --------------------------------------------------------
int __fastcall SetOverworldsTrainer(int result, short a2)
{
  *(ushort *)(result + 6) = a2;
  return result;
}

//----- (0206310C) --------------------------------------------------------
int __fastcall GetOverworldsTrainer(int a1)
{
  return *(ushort *)(a1 + 6);
}

//----- (02063110) --------------------------------------------------------
int __fastcall SetOverworldsFlag(int result, short a2)
{
  *(ushort *)(result + 8) = a2;
  return result;
}

//----- (02063114) --------------------------------------------------------
int __fastcall GetOverworldsFlag(int a1)
{
  return *(ushort *)(a1 + 8);
}

//----- (02063118) --------------------------------------------------------
int __fastcall SetOverworldsScript(int result, short a2)
{
  *(ushort *)(result + 10) = a2;
  return result;
}

//----- (0206311C) --------------------------------------------------------
int __fastcall GetOverworldsScript(int a1)
{
  return *(ushort *)(a1 + 10);
}

//----- (02063120) --------------------------------------------------------
int __fastcall SetOverworldsOrientation(int result, short a2)
{
  *(ushort *)(result + 12) = a2;
  return result;
}

//----- (02063124) --------------------------------------------------------
int __fastcall GetOverworldsOrientation(int a1)
{
  return *(short *)(a1 + 12);
}

//----- (0206312C) --------------------------------------------------------
ushort *__fastcall Function_206312c(ushort *result, short a2, int a3)
{
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      result[8] = a2;
    }
    else if ( a3 == 2 )
    {
      result[9] = a2;
    }
    else
    {
      result = (ushort *)ErrorHandler();
    }
  }
  else
  {
    result[7] = a2;
  }
  return result;
}

//----- (02063150) --------------------------------------------------------
int __fastcall Function_2063150(ushort *a1, int a2)
{
  switch ( a2 )
  {
    case 0:
      return a1[7];
    case 1:
      return a1[8];
    case 2:
      return a1[9];
  }
  ErrorHandler();
  return 0;
}

//----- (02063174) --------------------------------------------------------
int __fastcall SetOverworldsMovementWidth(int result, short a2)
{
  *(ushort *)(result + 20) = a2;
  return result;
}

//----- (02063178) --------------------------------------------------------
int __fastcall GetOverworldsMovementWidth(int a1)
{
  return *(short *)(a1 + 20);
}

//----- (02063180) --------------------------------------------------------
int __fastcall SetOverworldsMovementLength(int result, short a2)
{
  *(ushort *)(result + 22) = a2;
  return result;
}

//----- (02063184) --------------------------------------------------------
int __fastcall GetOverworldsMovementLength(int a1)
{
  return *(short *)(a1 + 22);
}

//----- (0206318C) --------------------------------------------------------
int __fastcall SetOverworldsX(int result, short a2)
{
  *(ushort *)(result + 24) = a2;
  return result;
}

//----- (02063190) --------------------------------------------------------
int __fastcall GetOverworldsX(int a1)
{
  return *(ushort *)(a1 + 24);
}

//----- (02063194) --------------------------------------------------------
int __fastcall SetOverworldsZ(int result, int a2)
{
  *(uint *)(result + 28) = a2;
  return result;
}

//----- (02063198) --------------------------------------------------------
int __fastcall GetOverworldsZ(int a1)
{
  return *(uint *)(a1 + 28);
}

//----- (0206319C) --------------------------------------------------------
int __fastcall SetOverworldsY(int result, short a2)
{
  *(ushort *)(result + 26) = a2;
  return result;
}

//----- (020631A0) --------------------------------------------------------
int __fastcall GetOverworldsY(int a1)
{
  return *(ushort *)(a1 + 26);
}

//----- (020631A4) --------------------------------------------------------
ushort *__fastcall FindOverworldsIDWithoutScript(int a1, int a2, ushort *a3)
{
  int v3
  int v4
  int v5
  ushort *v6
  ushort *v8

  v3 = a1;
  v4 = a2;
  v8 = a3;
  v5 = 0;
  v6 = a3;
  do
  {
    if ( !HasOverworldsNoScript((int)v6) && v3 == GetOverworldsID(v6) )
      return &v8[16 * v5];
    ++v5;
    v6 += 16;
  }
  while ( v5 < v4 );
  return 0;
}

//----- (020631D8) --------------------------------------------------------
BOOL __fastcall HasOverworldsNoScript(int a1)
{
  return (ushort)GetOverworldsScript(a1) == 0xFFFF;
}

//----- (020631F4) --------------------------------------------------------
int __fastcall GetOverworldsFlagWithoutScript(int a1)
{
  int v1

  v1 = a1;
  if ( HasOverworldsNoScript(a1) != 1 )
    ErrorHandler();
  return GetOverworldsFlag(v1);
}

//----- (0206320C) --------------------------------------------------------
int __fastcall Function_206320c(uint a1)
{
  uint v1

  v1 = a1;
  if ( a1 >= 0x44 )
    ErrorHandler();
  return (int)*(&Unknown_20ee3a8 + v1);
}

//----- (02063224) --------------------------------------------------------
int __fastcall Function_2063224(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (02063228) --------------------------------------------------------
int __fastcall Function_2063228(int a1)
{
  return *(uint *)(a1 + 8);
}

//----- (0206322C) --------------------------------------------------------
int __fastcall Function_206322c(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (02063230) --------------------------------------------------------
int __fastcall Function_2063230(int a1)
{
  return *(uint *)a1;
}

//----- (02063234) --------------------------------------------------------
int __fastcall Function_2063234(int a1)
{
  return *(uint *)(a1 + 4);
}

//----- (02063238) --------------------------------------------------------
int __fastcall Function_2063238(int a1)
{
  return *(uint *)(a1 + 8);
}

//----- (0206323C) --------------------------------------------------------
int __fastcall Function_206323c(int a1)
{
  return *(uint *)(a1 + 12);
}

//----- (02063240) --------------------------------------------------------
int __fastcall Function_2063240(int a1)
{
  return *(uint *)(a1 + 16);
}

//----- (02063244) --------------------------------------------------------
int __fastcall Function_2063244(int a1)
{
  int *v1

  v1 = &dword_21FB97C;
  do
  {
    if ( *v1 == a1 )
      return v1[1];
    v1 += 2;
  }
  while ( *v1 != 0xFFFF );
  ErrorHandler();
  return 0;
}

//----- (0206326C) --------------------------------------------------------
uint *__fastcall Function_206326c(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  uint *v8
  int v10

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v10 = a4;
  v7 = GetNrOfSpritesInList(a1);
  v8 = (uint *)GetSpriteList_124_3(v4);
  do
  {
    if ( MaskSpriteFlags(v8, 1) )
    {
      if ( v10 && v5 == GetSpriteX2((int)v8) && v6 == GetSpriteY2((int)v8) )
        return v8;
      if ( v5 == LoadSpritePositionX((int)v8) && v6 == LoadSpritePositionY((int)v8) )
        return v8;
    }
    v8 += 74;
    --v7;
  }
  while ( v7 );
  return 0;
}

//----- (020632D4) --------------------------------------------------------
uint *__fastcall Function_20632d4(int a1, int *a2, int a3)
{
  int *v3
  int v4
  uint *v5

  v3 = a2;
  v4 = a3;
  v5 = (uint *)a1;
  SaveSpritePositionX(a1, (*a2 >> 4) / 4096);
  SaveSpritePositionZ((int)v5, (v3[1] >> 3) / 4096);
  SaveSpritePositionY((int)v5, (v3[2] >> 4) / 4096);
  CopyToSprite70Struct(v5, v3);
  CopySpritePositionsFromOldToNew((int)v5);
  ChangeSpriteFaceDirection((int)v5, v4);
  Function_20656dc(v5);
  SetSpriteFlags(v5, 4);
  return UnsetSpriteFlags(v5, 10);
}

//----- (02063340) --------------------------------------------------------
int *__fastcall Function_2063340(int a1, int a2, int a3, int a4, int a5)
{
  int v5
  int v6
  uint *v7
  int v9
  int v10
  int v11
  int v12

  v12 = a4;
  v5 = a3;
  v6 = a4;
  v7 = (uint *)a1;
  v9 = (a2 << 16) + 0x8000;
  SaveSpritePositionX(a1, a2);
  v10 = v5 << 15;
  SaveSpritePositionZ((int)v7, v5);
  v11 = (v6 << 16) + 0x8000;
  SaveSpritePositionY((int)v7, v6);
  CopyToSprite70Struct(v7, &v9);
  CopySpritePositionsFromOldToNew((int)v7);
  ChangeSpriteFaceDirection((int)v7, a5);
  SetSpriteFlags(v7, 4);
  UnsetSpriteFlags(v7, 10);
  return Function_20656dc(v7);
}

//----- (020633A8) --------------------------------------------------------
int __fastcall SetSpriteFollowHero(int a1, int a2)
{
  int v2
  int v3

  v2 = a1;
  v3 = a2;
  CallSprite_c0Callback(a1);
  SetSpriteMovement(v2, v3);
  Function_206239c(v2);
  return Function_2063400(v2);
}

//----- (020633C8) --------------------------------------------------------
uint *__fastcall Function_20633c8(int a1, int a2)
{
  uint *v2

  v2 = (uint *)a1;
  SetSpriteID(a1, a2);
  SetSpriteFlag_4(v2);
  return UnsetSpriteMainFlags(v2);
}

//----- (020633E0) --------------------------------------------------------
void Function_20633e0_Dummy()
{
  ;
}

//----- (020633E4) --------------------------------------------------------
void Function_20633e4_Dummy()
{
  ;
}

//----- (020633E8) --------------------------------------------------------
void Function_20633e8_Dummy()
{
  ;
}

//----- (020633EC) --------------------------------------------------------
void Function_20633ec_Dummy()
{
  ;
}

//----- (020633F0) --------------------------------------------------------
void Function_20633f0_Dummy()
{
  ;
}

//----- (020633F4) --------------------------------------------------------
void Function_20633f4_Dummy()
{
  ;
}

//----- (020633F8) --------------------------------------------------------
void Function_20633f8_Dummy()
{
  ;
}

//----- (020633FC) --------------------------------------------------------
void Function_20633fc_Dummy()
{
  ;
}

//----- (02063400) --------------------------------------------------------
int __fastcall Function_2063400(int a1)
{
  int v1

  v1 = a1;
  CallSprite_b8Callback(a1);
  return Function_20673b8(v1);
}

//----- (02063410) --------------------------------------------------------
uint *__fastcall Function_2063410(int a1)
{
  uint *v1
  uint *result

  v1 = (uint *)a1;
  result = (uint *)Function_2062cbc(a1, 2);
  if ( !result )
  {
    Function_20634dc(v1);
    Function_20634f4(v1);
    Function_2063518(v1);
    if ( MaskSpriteFlags(v1, 16) )
    {
      ExecuteMovementFunctions((int)v1);
    }
    else if ( !CheckSpriteFlag_Lock(v1) && Function_2063478(v1) == 1 && !Function_20673c0((int)v1) )
    {
      CallSprite_bcCallback((int)v1);
    }
    Function_206353c(v1);
    result = Function_2063574(v1);
  }
  return result;
}

//----- (02063478) --------------------------------------------------------
int __fastcall Function_2063478(uint *a1)
{
  uint *v1
  int v3

  v1 = a1;
  if ( CheckSpriteFlag_2(a1) == 1 )
    return 1;
  if ( !MaskSpriteFlags(v1, 6144) )
    return 1;
  if ( GetSpriteMovement((int)v1) == 50 )
    return 1;
  v3 = LoadSpriteFlags((int)v1);
  if ( v3 & 0x1000 && !(v3 & 0x800000) )
    return 0;
  if ( !(v3 & 0x800) || Function_2062fdc((int)v1) )
    return 1;
  return 0;
}

//----- (020634DC) --------------------------------------------------------
int __fastcall Function_20634dc(uint *a1)
{
  uint *v1
  int result
  int v3
  int v4
  int v5

  v1 = a1;
  result = MaskSpriteFlags(a1, 4096);
  if ( result )
    result = Function_20642f8(v1, v3, v4, v5);
  return result;
}

//----- (020634F4) --------------------------------------------------------
uint *__fastcall Function_20634f4(uint *a1)
{
  uint *v1
  uint *result

  v1 = a1;
  result = (uint *)MaskSpriteFlags(a1, 2048);
  if ( result )
  {
    result = (uint *)Function_2064390(v1);
    if ( result == (uint *)1 )
      result = SetSpriteFlag_4(v1);
  }
  return result;
}

//----- (02063518) --------------------------------------------------------
uint *__fastcall Function_2063518(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( MaskSpriteFlags(a1, 4) )
    Function_20635ac(v1);
  return UnsetSpriteFlags(v1, 65540);
}

//----- (0206353C) --------------------------------------------------------
uint *__fastcall Function_206353c(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( MaskSpriteFlags(a1, 0x10000) )
  {
    Function_20636f0(v1);
  }
  else if ( MaskSpriteFlags(v1, 4) )
  {
    Function_206363c(v1);
  }
  return UnsetSpriteFlags(v1, 65540);
}

//----- (02063574) --------------------------------------------------------
uint *__fastcall Function_2063574(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( MaskSpriteFlags(a1, 0x20000) )
  {
    Function_20637d4(v1);
  }
  else if ( MaskSpriteFlags(v1, 8) )
  {
    Function_206375c(v1);
  }
  return UnsetSpriteFlags(v1, 131080);
}

//----- (020635AC) --------------------------------------------------------
uint *__fastcall Function_20635ac(uint *a1)
{
  uint *v1
  uint *result
  int v3
  int v4
  int v5

  v1 = a1;
  Function_2064390(a1);
  result = (uint *)Function_2062dfc((int)v1);
  if ( result == (uint *)1 )
  {
    v3 = (uchar)Function_2062be8((int)v1);
    v4 = (uchar)Function_2062bf8((int)v1);
    v5 = ((int (__fastcall *)(uint *))dword_21ECD04[0])(v1);
    Function_2063ddc(v1, v3);
    Function_2063964((int)v1, v3);
    Function_2063a30(v1, v3);
    Function_2063a70((int)v1, v3, v4, v5);
    Function_2063864(v1, v3, v4, v5);
    Function_2063c00((int)v1, v3);
    Function_2063c30((int)v1, v3);
    result = Function_2063d30(v1, v3, v4, v5);
  }
  return result;
}

//----- (0206363C) --------------------------------------------------------
void __fastcall Function_206363c(uint *a1)
{
  uint *v1
  int v2
  int v3
  int v4

  v1 = a1;
  Function_2064390(a1);
  if ( Function_2062dfc((int)v1) == 1 )
  {
    v2 = (uchar)Function_2062be8((int)v1);
    v3 = (uchar)Function_2062bf8((int)v1);
    v4 = ((int (__fastcall *)(uint *))dword_21ECD04[0])(v1);
    Function_2063ddc(v1, v2);
    Function_206397c((int)v1, v2);
    Function_2063994(v1, v2, v3, v4);
    Function_2063a30(v1, v2);
    Function_2063a78((int)v1, v2, v3, v4);
    Function_2063c18((int)v1, v2);
    Function_2063c48((int)v1, v2);
    Function_2063c60((int)v1, v2, v3);
    Function_2063cc8((int)v1, v2, v3);
    Function_2063d30(v1, v2, v3, v4);
    Function_2063e14();
  }
}

//----- (020636F0) --------------------------------------------------------
void __fastcall Function_20636f0(uint *a1)
{
  uint *v1
  int v2
  int v3
  int v4

  v1 = a1;
  Function_2064390(a1);
  if ( Function_2062dfc((int)v1) == 1 )
  {
    v2 = (uchar)Function_2062be8((int)v1);
    v3 = (uchar)Function_2062bf8((int)v1);
    v4 = ((int (__fastcall *)(uint *))dword_21ECD04[0])(v1);
    Function_2063ddc(v1, v2);
    Function_2063a78((int)v1, v2, v3, v4);
    Function_2063d30(v1, v2, v3, v4);
    Function_2063a64(v1);
    Function_2063e14();
  }
}

//----- (0206375C) --------------------------------------------------------
uint *__fastcall Function_206375c(uint *a1)
{
  uint *v1
  uint *result
  int v3
  int v4
  int v5

  v1 = a1;
  Function_2064390(a1);
  result = (uint *)Function_2062dfc((int)v1);
  if ( result == (uint *)1 )
  {
    v3 = (uchar)Function_2062be8((int)v1);
    v4 = (uchar)Function_2062bf8((int)v1);
    v5 = ((int (__fastcall *)(uint *))dword_21ECD04[0])(v1);
    Function_2063864(v1, v3, v4, v5);
    Function_2063c94((int)v1, v3);
    Function_2063cfc((int)v1, v3);
    Function_2063a30(v1, v3);
    Function_2063da8(v1, v3, v4, v5);
    result = Function_2063b20((int)v1, v3, v4, v5);
  }
  return result;
}

//----- (020637D4) --------------------------------------------------------
int __fastcall Function_20637d4(uint *a1)
{
  uint *v1
  int result
  int v3
  int v4
  int v5

  v1 = a1;
  Function_2064390(a1);
  result = Function_2062dfc((int)v1);
  if ( result == 1 )
  {
    v3 = (uchar)Function_2062be8((int)v1);
    v4 = (uchar)Function_2062bf8((int)v1);
    v5 = ((int (__fastcall *)(uint *))dword_21ECD04[0])(v1);
    Function_2063864(v1, v3, v4, v5);
    Function_2063c94((int)v1, v3);
    Function_2063cfc((int)v1, v3);
    Function_2063a30(v1, v3);
    Function_2063da8(v1, v3, v4, v5);
    Function_2063b20((int)v1, v3, v4, v5);
    Function_206397c((int)v1, v3);
    result = Function_2063bb4(v1, v3);
  }
  return result;
}

//----- (02063864) --------------------------------------------------------
int __fastcall Function_2063864(uint *a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  int result
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17
  int v18
  int v19
  int v20
  int v21
  int v22
  int v23
  int v24
  int v25

  v25 = a4;
  v4 = a1;
  v5 = a2;
  if ( Function_2062efc(a1) )
    goto LABEL_17;
  if ( Function_205dcf0(v5) == 1 || Function_205dd0c(v5) == 1 )
  {
    v22 = 0;
    v23 = -57344;
    v24 = 0;
    return Function_20630cc(v4, &v22);
  }
  if ( Function_205dce0(v5) == 1 || Function_205dcfc(v5) == 1 )
  {
    v19 = 0;
    v20 = -49152;
    v21 = 0;
    return Function_20630cc(v4, &v19);
  }
  if ( Function_205dd5c(v5) == 1 )
  {
    v16 = 0;
    v17 = -65536;
    v18 = 0;
    return Function_20630cc(v4, &v16);
  }
  if ( Function_205dd50(v5) == 1 )
  {
    v13 = 0;
    v14 = -57344;
    v15 = 0;
    return Function_20630cc(v4, &v13);
  }
  if ( Function_205dd44(v5) != 1 )
  {
LABEL_17:
    v7 = 0;
    v8 = 0;
    v9 = 0;
    result = Function_20630cc(v4, &v7);
  }
  else
  {
    v10 = 0;
    v11 = -49152;
    v12 = 0;
    result = Function_20630cc(v4, &v10);
  }
  return result;
}

//----- (02063964) --------------------------------------------------------
int __fastcall Function_2063964(int a1, int a2)
{
  int v2
  int result

  v2 = a1;
  result = Function_205dac8(a2);
  if ( result == 1 )
    result = ((int (__fastcall *)(int, uint))dword_21F2EA4[0])(v2, 0);
  return result;
}

//----- (0206397C) --------------------------------------------------------
int __fastcall Function_206397c(int a1, int a2)
{
  int v2
  int result

  v2 = a1;
  result = Function_205dac8(a2);
  if ( result == 1 )
    result = ((int (__fastcall *)(int, int))dword_21F2EA4[0])(v2, 1);
  return result;
}

//----- (02063994) --------------------------------------------------------
int __fastcall Function_2063994(uint *a1, int a2, int a3, int a4)
{
  int v4
  uint *v5
  int v6
  int result
  int v8

  v4 = a4;
  v5 = a1;
  v6 = a3;
  result = *(uint *)(a4 + 4) << 22 >> 28;
  if ( result )
  {
    if ( Function_205dfac(a3) == 1 )
    {
      v8 = *(uint *)(v4 + 4) << 22 >> 28;
      if ( v8 == 1 )
      {
        ((void (__fastcall *)(uint *))dword_21F1EBC[0])(v5);
      }
      else if ( v8 == 2 )
      {
        ((void (__fastcall *)(uint *))dword_21F1EC8[0])(v5);
      }
    }
    if ( Function_20640a0(v5, v6) == 1 )
    {
      result = *(uint *)(v4 + 4) << 22 >> 28;
      if ( result == 1 )
      {
        result = ((int (__fastcall *)(uint *))dword_21F1E8C[0])(v5);
      }
      else if ( result == 2 )
      {
        result = ((int (__fastcall *)(uint *))dword_21F1E98[0])(v5);
      }
    }
    else if ( Function_205dd50(v6) == 1 || Function_205dd5c(v6) == 1 || Function_205dd44(v6) )
    {
      result = ((int (__fastcall *)(uint *))dword_21F1EB0[0])(v5);
    }
    else
    {
      result = Function_2064108(v5, v6);
      if ( result == 1 )
        result = ((int (__fastcall *)(uint *))dword_21F1EA4[0])(v5);
    }
  }
  return result;
}

//----- (02063A30) --------------------------------------------------------
uint *__fastcall Function_2063a30(uint *a1, int a2)
{
  uint *v2
  uint *result

  v2 = a1;
  if ( Function_205db78(a2) != 1 )
    return Function_2062eac(v2, 0);
  result = (uint *)Function_2062ec8(v2);
  if ( !result )
  {
    ((void (__fastcall *)(uint *, int))dword_21F331C[0])(v2, 1);
    result = Function_2062eac(v2, 1);
  }
  return result;
}

//----- (02063A64) --------------------------------------------------------
uint *__fastcall Function_2063a64(uint *a1)
{
  return Function_2062eac(a1, 0);
}

//----- (02063A70) --------------------------------------------------------
uint *__fastcall Function_2063a70(int a1, int a2, int a3, int a4)
{
  return Function_2063a78(a1, a2, a3, a4);
}

//----- (02063A78) --------------------------------------------------------
uint *__fastcall Function_2063a78(int a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  int v6
  uint *v7
  uint *result

  v4 = (uint *)a1;
  v5 = a2;
  v6 = a4;
  v7 = (uint *)GetSpriteSpriteList(a1);
  result = (uint *)Function_2062ce4(v7);
  if ( result )
  {
    result = (uint *)(*(uint *)(v6 + 4) << 26 >> 30);
    if ( result )
    {
      if ( Function_205dac8(v5) == 1
        || Function_205dad4(v5) == 1
        || Function_206406c(v4, v5) == 1
        || Function_205de5c(v5) == 1
        || Function_205db78(v5) == 1
        || Function_20640d4(v4, v5) == 1
        || Function_205dce0(v5) == 1
        || Function_205dcfc(v5) == 1
        || Function_205df9c(v5) )
      {
        result = SetSpriteFlags(v4, 0x100000);
      }
      else
      {
        result = (uint *)MaskSpriteFlags(v4, 0x8000);
        if ( !result )
        {
          ((void (__fastcall *)(uint *))dword_21F1570[0])(v4);
          result = SetSpriteFlags(v4, 0x8000);
        }
      }
    }
  }
  return result;
}

//----- (02063B20) --------------------------------------------------------
uint *__fastcall Function_2063b20(int a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  int v6
  uint *v7
  uint *result

  v4 = (uint *)a1;
  v5 = a2;
  v6 = a4;
  v7 = (uint *)GetSpriteSpriteList(a1);
  result = (uint *)Function_2062ce4(v7);
  if ( result )
  {
    result = (uint *)(*(uint *)(v6 + 4) << 26 >> 30);
    if ( result )
    {
      if ( Function_205dac8(v5) == 1
        || Function_205dad4(v5) == 1
        || Function_206406c(v4, v5) == 1
        || Function_205de5c(v5) == 1
        || Function_205db78(v5) == 1
        || Function_20640d4(v4, v5) == 1
        || Function_205dce0(v5) == 1
        || Function_205dcfc(v5) == 1
        || Function_205df9c(v5) )
      {
        result = SetSpriteFlags(v4, 0x100000);
      }
      else
      {
        result = UnsetSpriteFlags(v4, 0x100000);
      }
    }
  }
  return result;
}

//----- (02063BB4) --------------------------------------------------------
int __fastcall Function_2063bb4(uint *a1, int a2)
{
  uint *v2
  int v3
  int result

  v2 = a1;
  v3 = a2;
  result = Function_206406c(a1, a2);
  if ( result != 1 )
  {
    result = Function_205db78(v3);
    if ( result != 1 )
    {
      result = Function_205dc5c(v3);
      if ( result != 1 )
      {
        result = Function_205dce0(v3);
        if ( result != 1 )
        {
          result = Function_205dcfc(v3);
          if ( result != 1 )
          {
            result = Function_20640d4(v2, v3);
            if ( result != 1 )
              result = ((int (__fastcall *)(uint *))dword_21F3638[0])(v2);
          }
        }
      }
    }
  }
  return result;
}

//----- (02063C00) --------------------------------------------------------
int __fastcall Function_2063c00(int a1, int a2)
{
  int v2
  int result

  v2 = a1;
  result = Function_205dad4(a2);
  if ( result == 1 )
    result = ((int (__fastcall *)(int, uint))dword_21F3844[0])(v2, 0);
  return result;
}

//----- (02063C18) --------------------------------------------------------
int __fastcall Function_2063c18(int a1, int a2)
{
  int v2
  int result

  v2 = a1;
  result = Function_205dad4(a2);
  if ( result == 1 )
    result = ((int (__fastcall *)(int, int))dword_21F3844[0])(v2, 1);
  return result;
}

//----- (02063C30) --------------------------------------------------------
int __fastcall Function_2063c30(int a1, int a2)
{
  int v2
  int result

  v2 = a1;
  result = Function_205dcfc(a2);
  if ( result == 1 )
    result = ((int (__fastcall *)(int, uint))dword_21F3AEC[0])(v2, 0);
  return result;
}

//----- (02063C48) --------------------------------------------------------
int __fastcall Function_2063c48(int a1, int a2)
{
  int v2
  int result

  v2 = a1;
  result = Function_205dcfc(a2);
  if ( result == 1 )
    result = ((int (__fastcall *)(int, int))dword_21F3AEC[0])(v2, 1);
  return result;
}

//----- (02063C60) --------------------------------------------------------
int __fastcall Function_2063c60(int a1, int a2, int a3)
{
  int v3
  int result
  int v5
  int v6
  int v7

  v3 = a1;
  result = Function_205de5c(a3);
  if ( result == 1 )
  {
    v5 = GetSpriteX2(v3);
    v6 = GetSpriteZ2(v3);
    v7 = GetSpriteY2(v3);
    result = ((int (__fastcall *)(int, int, int, int))dword_21F2AE4[0])(v3, v5, v6, v7);
  }
  return result;
}

//----- (02063C94) --------------------------------------------------------
int __fastcall Function_2063c94(int a1, int a2)
{
  int v2
  int result
  int v4
  int v5
  int v6

  v2 = a1;
  result = Function_205de5c(a2);
  if ( result == 1 )
  {
    v4 = LoadSpritePositionX(v2);
    v5 = LoadSpritePositionZ(v2);
    v6 = LoadSpritePositionY(v2);
    result = ((int (__fastcall *)(int, int, int, int))dword_21F2AE4[0])(v2, v4, v5, v6);
  }
  return result;
}

//----- (02063CC8) --------------------------------------------------------
int __fastcall Function_2063cc8(int a1, int a2, int a3)
{
  int v3
  int result
  int v5
  int v6
  int v7

  v3 = a1;
  result = Function_205dce0(a3);
  if ( result == 1 )
  {
    v5 = GetSpriteX2(v3);
    v6 = GetSpriteZ2(v3);
    v7 = GetSpriteY2(v3);
    result = ((int (__fastcall *)(int, int, int, int))dword_21F2C38[0])(v3, v5, v6, v7);
  }
  return result;
}

//----- (02063CFC) --------------------------------------------------------
int __fastcall Function_2063cfc(int a1, int a2)
{
  int v2
  int result
  int v4
  int v5
  int v6

  v2 = a1;
  result = Function_205dce0(a2);
  if ( result == 1 )
  {
    v4 = LoadSpritePositionX(v2);
    v5 = LoadSpritePositionZ(v2);
    v6 = LoadSpritePositionY(v2);
    result = ((int (__fastcall *)(int, int, int, int))dword_21F2C38[0])(v2, v4, v5, v6);
  }
  return result;
}

//----- (02063D30) --------------------------------------------------------
uint *__fastcall Function_2063d30(uint *result, int a2, int a3, int a4)
{
  int v4
  uint *v5
  uint *v6
  int v7
  int v8

  v4 = a2;
  v5 = result;
  if ( *(uint *)(a4 + 4) << 20 >> 30 )
  {
    result = (uint *)IsSetSpriteFlags1000000(result);
    if ( !result )
    {
      v6 = (uint *)Function_205df98();
      if ( Function_205de90(v4) == 1 )
      {
        v6 = (uint *)v4;
      }
      else
      {
        v7 = (uchar)Function_2064238((int)v5, 1);
        if ( Function_205de90(v7) == 1 )
          v6 = (uint *)v7;
      }
      result = (uint *)Function_205df98();
      if ( v6 != result )
      {
        SetUnsetSpriteFlags1000000(v5, 1);
        if ( Function_205df9c((int)v6) == 1 )
          v8 = 2;
        else
          v8 = Function_205de5c((int)v6) != 1;
        result = (uint *)((int (__fastcall *)(uint *, int))dword_21F1800[0])(v5, v8);
      }
    }
  }
  return result;
}

//----- (02063DA8) --------------------------------------------------------
uint *__fastcall Function_2063da8(uint *result, int a2, int a3, int a4)
{
  uint *v4
  uchar v5

  v4 = result;
  if ( *(uint *)(a4 + 4) << 20 >> 30 )
  {
    result = (uint *)IsSetSpriteFlags1000000(result);
    if ( result )
    {
      v5 = Function_2064238((int)v4, 1);
      result = (uint *)Function_205de90(v5);
      if ( !result )
        result = SetUnsetSpriteFlags1000000(v4, 0);
    }
  }
  return result;
}

//----- (02063DDC) --------------------------------------------------------
uint *__fastcall Function_2063ddc(uint *a1, int a2)
{
  int v2
  uint *v3
  uint *result

  v2 = a2;
  v3 = a1;
  if ( Function_205def0(a2) == 1 )
    return Function_2062f14(v3, 1);
  result = (uint *)Function_2062f30(v3);
  if ( result == (uint *)1 )
  {
    result = (uint *)Function_205defc(v2);
    if ( !result )
      result = Function_2062f14(v3, 0);
  }
  return result;
}

//----- (02063E14) --------------------------------------------------------
void Function_2063e14()
{
  ;
}

//----- (02063E18) --------------------------------------------------------
int __fastcall Function_2063e18(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6
  int v7
  int v8
  int v9
  int v11
  int v12
  char v13
  int v14

  v14 = a4;
  v6 = a3;
  v11 = a2;
  v12 = a4;
  v7 = a1;
  v8 = 0;
  if ( Function_2063fac(a1, a3, a4, a5) == 1 )
    v8 = 1;
  v9 = GetSpriteSpriteListFirstSprite(v7);
  if ( Function_2055024(v9, v11, v6, a5, &v13) == 1 )
  {
    v8 |= 2u;
    if ( v13 )
      v8 |= 8u;
  }
  if ( Function_2064004(v7, v6, a5, a6) == 1 )
    v8 |= 2u;
  if ( Function_2063f00(v7, v6, v12, a5) == 1 )
    v8 |= 4u;
  return v8;
}

//----- (02063E94) --------------------------------------------------------
int __fastcall Function_2063e94(uint *a1, int a2, int a3, int a4, int a5)
{
  int v5
  uint *v6
  int v7
  int v8
  char v10

  v5 = a2;
  v6 = a1;
  v7 = a3;
  v8 = a4;
  CopySprite70Struct(a1, &v10);
  return Function_2063e18((int)v6, (int)&v10, v5, v7, v8, a5);
}

//----- (02063EBC) --------------------------------------------------------
int __fastcall Function_2063ebc(int a1, int a2)
{
  int v2
  uint *v3
  int v4
  int v5
  int v6
  int v7
  int v8

  v2 = a2;
  v3 = (uint *)a1;
  v4 = LoadSpritePositionX(a1);
  v5 = GetWalkPositionXChange(v2);
  v6 = LoadSpritePositionZ((int)v3);
  v7 = LoadSpritePositionY((int)v3);
  v8 = GetWalkPositionYChange(v2);
  return Function_2063e94(v3, v4 + v5, v6, v7 + v8, v2);
}

//----- (02063F00) --------------------------------------------------------
int __fastcall Function_2063f00(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v12
  int v13
  int v14
  int v15
  int v16
  uint *v17

  v15 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = GetSpriteSpriteList(a1);
  v17 = (uint *)GetSpriteList_124_1(v7);
  v16 = GetNrOfSpritesInList(v7);
  do
  {
    if ( v17 != (uint *)v15 && MaskSpriteFlags(v17, 1) && !MaskSpriteFlags(v17, 0x40000) )
    {
      v8 = LoadSpritePositionX((int)v17);
      v9 = LoadSpritePositionY((int)v17);
      if ( v8 == v4 && v9 == v6 )
      {
        v10 = LoadSpritePositionZ((int)v17) - v5;
        if ( v10 < 0 )
          v10 = -v10;
        if ( v10 < 2 )
          return 1;
      }
      v12 = GetSpriteX2((int)v17);
      v13 = GetSpriteY2((int)v17);
      if ( v12 == v4 && v13 == v6 )
      {
        v14 = LoadSpritePositionZ((int)v17) - v5;
        if ( v14 < 0 )
          v14 = -v14;
        if ( v14 < 2 )
          return 1;
      }
    }
    GetAdrOfNextSprite(&v17);
    --v16;
  }
  while ( v16 );
  return 0;
}

//----- (02063FAC) --------------------------------------------------------
BOOL __fastcall Function_2063fac(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v8
  int v10
  int v11

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = Function_2062ff0(a1);
  v8 = GetSpriteMovementWidth(v4);
  if ( v8 != -1 && (v7 - v8 > v5 || v7 + v8 < v5) )
    return 1;
  v10 = Function_2063000(v4);
  v11 = GetSpriteMovementLength(v4);
  return v11 != -1 && (v10 - v11 > v6 || v10 + v11 < v6);
}

//----- (02064004) --------------------------------------------------------
int __fastcall Function_2064004(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int result
  int v13

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( Function_2062fdc(a1) )
    goto LABEL_10;
  v8 = GetSpriteSpriteListFirstSprite(v4);
  v9 = (uchar)Function_2062be8(v4);
  v11 = Function_2054f94(v8, v5, v6, v10);
  if ( v11 == Function_205df98() )
    return 1;
  v13 = 4 * v7;
  if ( (*(int (__fastcall **)(int))((char *)&JumpTable_20ee76c + v13))(v9) != 1
    && (*(int (__fastcall **)(int))((char *)&JumpTable_20ee77c + v13))(v11) != 1 )
  {
LABEL_10:
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}

//----- (0206406C) --------------------------------------------------------
int __fastcall Function_206406c(uint *a1, uchar a2)
{
  uchar v2
  uint *v3

  v2 = a2;
  v3 = a1;
  if ( Function_205df10(a2) )
  {
    if ( !Function_2062f30(v3) )
      return 1;
  }
  else if ( Function_205db58(v2) )
  {
    return 1;
  }
  return 0;
}

//----- (020640A0) --------------------------------------------------------
int __fastcall Function_20640a0(uint *a1, uchar a2)
{
  uchar v2
  uint *v3

  v2 = a2;
  v3 = a1;
  if ( Function_205df34(a2) )
  {
    if ( !Function_2062f30(v3) )
      return 1;
  }
  else if ( Function_205db6c(v2) )
  {
    return 1;
  }
  return 0;
}

//----- (020640D4) --------------------------------------------------------
int __fastcall Function_20640d4(uint *a1, uchar a2)
{
  uchar v2
  uint *v3

  v2 = a2;
  v3 = a1;
  if ( Function_205df58(a2) )
  {
    if ( !Function_2062f30(v3) )
      return 1;
  }
  else if ( Function_205dd18(v2) )
  {
    return 1;
  }
  return 0;
}

//----- (02064108) --------------------------------------------------------
int __fastcall Function_2064108(uint *a1, uchar a2)
{
  uchar v2
  uint *v3

  v2 = a2;
  v3 = a1;
  if ( Function_205df58(a2) )
  {
    if ( !Function_2062f30(v3) )
      return 1;
  }
  else if ( Function_205dd38(v2) )
  {
    return 1;
  }
  return 0;
}

//----- (0206413C) --------------------------------------------------------
BOOL __fastcall Function_206413c(uint *a1, uchar a2)
{
  uchar v2

  v2 = a2;
  return Function_2062f30(a1) == 1 && Function_205defc(v2) == 1;
}

//----- (0206415C) --------------------------------------------------------
BOOL __fastcall Function_206415c(uint *a1, uchar a2)
{
  uchar v2

  v2 = a2;
  return Function_2062f30(a1) == 1 && Function_205df64(v2) == 1;
}

//----- (0206417C) --------------------------------------------------------
BOOL __fastcall Function_206417c(uint *a1, uchar a2)
{
  uchar v2

  v2 = a2;
  return Function_2062f30(a1) == 1 && Function_205df78(v2) == 1;
}

//----- (0206419C) --------------------------------------------------------
int __fastcall GetWalkPositionXChange(int a1)
{
  return dword_20EE75C[a1];
}

//----- (020641A8) --------------------------------------------------------
int __fastcall GetWalkPositionYChange(int a1)
{
  return WalkPositionYChangeValues[a1];
}

//----- (020641B4) --------------------------------------------------------
int __fastcall MoveSpriteForWalk(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8

  v2 = a1;
  v3 = a2;
  v4 = LoadSpritePositionX(a1);
  SetSpriteX2(v2, v4);
  v5 = LoadSpritePositionZ(v2);
  SetSpriteZ2(v2, v5);
  v6 = LoadSpritePositionY(v2);
  SetSpriteY2(v2, v6);
  v7 = GetWalkPositionXChange(v3);
  AddSpritePositionX(v2, v7);
  AddSpritePositionZ(v2, 0);
  v8 = GetWalkPositionYChange(v3);
  return AddSpritePositionY(v2, v8);
}

//----- (02064208) --------------------------------------------------------
int __fastcall CopySpritePositionsFromOldToNew(int a1)
{
  int v1
  int v2
  int v3
  int v4

  v1 = a1;
  v2 = LoadSpritePositionX(a1);
  SetSpriteX2(v1, v2);
  v3 = LoadSpritePositionZ(v1);
  SetSpriteZ2(v1, v3);
  v4 = LoadSpritePositionY(v1);
  return SetSpriteY2(v1, v4);
}

//----- (02064238) --------------------------------------------------------
int __fastcall Function_2064238(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9

  v2 = a2;
  v3 = a1;
  v4 = LoadSpritePositionX(a1);
  v5 = GetWalkPositionXChange(v2);
  v6 = LoadSpritePositionY(v3);
  v7 = GetWalkPositionYChange(v2);
  v8 = GetSpriteSpriteListFirstSprite(v3);
  return Function_2054f94(v8, v4 + v5, v6 + v7, v9);
}

//----- (02064270) --------------------------------------------------------
int __fastcall Function_2064270(uint *a1, uint *a2)
{
  uint *v2
  uint *v3
  int v5
  int v6
  int v7

  v2 = a2;
  v3 = a1;
  CopySprite70Struct(a1, &v5);
  v5 += *v2;
  v6 += v2[1];
  v7 += v2[2];
  return CopyToSprite70Struct(v3, &v5);
}

//----- (020642A4) --------------------------------------------------------
void __fastcall Movement_AddDeltaPositionToSprite70(uint *a1, uint a2, int a3, int a4)
{
  uint *v4
  int v5
  int v6
  int v7
  int v8

  v8 = a4;
  v4 = a1;
  v5 = a3;
  switch ( (uchar)CopySprite70Struct(a1, &v6) )
  {
    case 0u:
      v7 -= v5;
      break;
    case 1u:
      v7 += v5;
      break;
    case 2u:
      v6 -= v5;
      break;
    case 3u:
      v6 += v5;
      break;
    default:
      break;
  }
  CopyToSprite70Struct(v4, &v6);
}

//----- (020642F8) --------------------------------------------------------
int __fastcall Function_20642f8(uint *a1, int a2, int a3, int a4)
{
  uint *v4
  int result
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17

  v17 = a4;
  v4 = a1;
  CopySprite70Struct(a1, &v14);
  v11 = v14;
  v12 = v15;
  v13 = v16;
  if ( IsSetSpriteFlags800000(v4) == 1 )
  {
    UnsetSpriteFlags(v4, 4096);
    result = 0;
  }
  else
  {
    v6 = IsSetSpriteFlags20000000(v4);
    v7 = GetSpriteSpriteListFirstSprite((int)v4);
    v9 = Function_20644d0(v7, &v11, v6, v8);
    if ( v9 == 1 )
    {
      v15 = v12;
      CopyToSprite70Struct(v4, &v14);
      v10 = LoadSpritePositionZ((int)v4);
      SetSpriteZ2((int)v4, v10);
      SaveSpritePositionZ((int)v4, (int)((v15 >> 3) + ((uint)(v15 >> 14) >> 20)) >> 12);
      UnsetSpriteFlags(v4, 4096);
    }
    else
    {
      SetSpriteFlags(v4, 4096);
    }
    result = v9;
  }
  return result;
}

//----- (02064390) --------------------------------------------------------
int __fastcall Function_2064390(uint *a1)
{
  uint *v1
  int v2
  short v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int result

  v1 = a1;
  v2 = Function_205df98();
  v3 = v2;
  v4 = v2;
  if ( !Function_2062fdc((int)v1) )
  {
    v5 = GetSpriteX2((int)v1);
    v6 = GetSpriteY2((int)v1);
    v7 = GetSpriteSpriteListFirstSprite((int)v1);
    v3 = Function_2054f94(v7, v5, v6, v8);
    v9 = LoadSpritePositionX((int)v1);
    v10 = LoadSpritePositionY((int)v1);
    v4 = Function_2054f94(v7, v9, v10, v11);
  }
  Function_2062bf0((int)v1, v3);
  Function_2062be0((int)v1, v4);
  if ( Function_205df8c(v4) == 1 )
  {
    SetSpriteFlags(v1, 2048);
    result = 0;
  }
  else
  {
    UnsetSpriteFlags(v1, 2048);
    result = 1;
  }
  return result;
}

//----- (02064418) --------------------------------------------------------
uint __fastcall Function_2064418(uint result, uint *a2, int a3)
{
  switch ( (uchar)result )
  {
    case 0:
      result = a2[2] - a3;
      a2[2] = result;
      break;
    case 1:
      result = a2[2] + a3;
      a2[2] = result;
      break;
    case 2:
      result = *a2 - a3;
      *a2 = result;
      break;
    case 3:
      result = *a2 + a3;
      *a2 = result;
      break;
    default:
      return result;
  }
  return result;
}

//----- (02064450) --------------------------------------------------------
int __fastcall Function_2064450(int a1, int a2, uint *a3)
{
  int result

  *a3 = (a1 << 16) + 0x8000;
  result = (a2 << 16) + 0x8000;
  a3[2] = result;
  return result;
}

//----- (02064464) --------------------------------------------------------
uint __fastcall Function_2064464(int a1)
{
  int v1
  uint result

  v1 = a1;
  result = GetSpriteMovement(a1) - 51;
  if ( result <= 3 )
    result = CallSprite_bcCallback(v1);
  return result;
}

//----- (0206447C) --------------------------------------------------------
int __fastcall GetOppositeFaceDirection(int a1)
{
  return OppositeFaceDirection_Data[a1];
}

//----- (02064488) --------------------------------------------------------
int __fastcall Function_2064488(int a1, int a2, int a3, int a4)
{
  if ( a1 > a3 )
    return 2;
  if ( a1 >= a3 )
    return a2 <= a4;
  return 3;
}

//----- (020644A4) --------------------------------------------------------
int __fastcall Function_20644a4(int a1, int *a2)
{
  int *v2
  int v3
  int v4
  int v5
  int v6
  char v8

  v2 = a2;
  v3 = a2[1];
  v4 = *v2;
  v5 = v2[2];
  v6 = Function_2054fbc(a1);
  if ( !v8 )
    return 0;
  v2[1] = v6;
  return 1;
}

//----- (020644D0) --------------------------------------------------------
int __fastcall Function_20644d0(int a1, int *a2, int a3, int a4)
{
  int *v4
  int v5
  int v6
  int v7
  int v8
  int v9
  char v11
  int v12

  v12 = a4;
  v4 = a2;
  v5 = a3;
  v6 = a2[1];
  v7 = *v4;
  v8 = v4[2];
  v9 = Function_2054fbc(a1);
  if ( !v11 )
    return 0;
  if ( v11 == 2 && !v5 )
    return 0;
  v4[1] = v9;
  return 1;
}

//----- (0206450C) --------------------------------------------------------
uint *__fastcall Function_206450c(int a1, int a2)
{
  int v2
  uint *v3
  int *v4

  v2 = a2;
  v3 = (uint *)a1;
  v4 = Function_2062a54(a1, 8);
  *((ushort *)v4 + 1) = Function_206530c(Unknown_20eea88, -1);
  v4[1] = v2;
  SetSpritea0((int)v3, 0);
  return UnsetSpriteFlag_2(v3);
}

//----- (0206453C) --------------------------------------------------------
uint *__fastcall Function_206453c(int a1)
{
  return Function_206450c(a1, 0);
}

//----- (02064548) --------------------------------------------------------
uint *__fastcall Function_2064548(int a1)
{
  return Function_206450c(a1, 1);
}

//----- (02064554) --------------------------------------------------------
uint *__fastcall Function_2064554(int a1)
{
  return Function_206450c(a1, 2);
}

//----- (02064560) --------------------------------------------------------
uint *__fastcall Function_2064560(int a1)
{
  return Function_206450c(a1, 3);
}

//----- (0206456C) --------------------------------------------------------
uint *__fastcall Function_206456c(int a1)
{
  return Function_206450c(a1, 4);
}

//----- (02064578) --------------------------------------------------------
uint *__fastcall Function_2064578(int a1)
{
  return Function_206450c(a1, 5);
}

//----- (02064584) --------------------------------------------------------
uint *__fastcall Function_2064584(int a1)
{
  return Function_206450c(a1, 6);
}

//----- (02064590) --------------------------------------------------------
uint *__fastcall Function_2064590(int a1)
{
  return Function_206450c(a1, 7);
}

//----- (0206459C) --------------------------------------------------------
uint *__fastcall Function_206459c(int a1)
{
  return Function_206450c(a1, 8);
}

//----- (020645A8) --------------------------------------------------------
uint *__fastcall Function_20645a8(int a1)
{
  return Function_206450c(a1, 9);
}

//----- (020645B4) --------------------------------------------------------
uint *__fastcall Function_20645b4(int a1)
{
  return Function_206450c(a1, 10);
}

//----- (020645C0) --------------------------------------------------------
int __fastcall Function_20645c0(int a1)
{
  uint *v1
  int v2
  int v3
  int v4

  v1 = (uint *)a1;
  v2 = Function_2062a78(a1);
  v3 = Function_2065448((int)v1, *(uint *)(v2 + 4), -1);
  if ( v3 == -1 )
  {
    if ( !*(ushort *)v2 && (short)--*(ushort *)(v2 + 2) <= 0 )
    {
      *(ushort *)(v2 + 2) = Function_206530c(Unknown_20eea88, -1);
      v4 = Function_2065330(*(uint *)(v2 + 4), -1);
      ChangeSpriteFaceDirection_WithCheck(v1, v4);
    }
  }
  else
  {
    ChangeSpriteFaceDirection_WithCheck(v1, v3);
  }
  return CopySpritePositionsFromOldToNew((int)v1);
}

//----- (02064624) --------------------------------------------------------
void Function_2064624()
{
  ;
}

//----- (02064628) --------------------------------------------------------
uint *__fastcall Function_2064628(int a1)
{
  return Function_2064668(a1, 12, 11, 0);
}

//----- (02064638) --------------------------------------------------------
uint *__fastcall Function_2064638(int a1)
{
  return Function_2064668(a1, 12, 12, 0);
}

//----- (02064648) --------------------------------------------------------
uint *__fastcall Function_2064648(int a1)
{
  return Function_2064668(a1, 12, 13, 0);
}

//----- (02064658) --------------------------------------------------------
uint *__fastcall Function_2064658(int a1)
{
  return Function_2064668(a1, 12, 13, 2);
}

//----- (02064668) --------------------------------------------------------
uint *__fastcall Function_2064668(int a1, int a2, int a3, int a4)
{
  int v4
  int v5
  uint *v6
  int v7
  int *v8

  v4 = a2;
  v5 = a4;
  v6 = (uint *)a1;
  v7 = a3;
  v8 = Function_2062a54(a1, 16);
  v8[1] = v5;
  v8[2] = v4;
  v8[3] = v7;
  SetSpritea0((int)v6, 0);
  return UnsetSpriteFlag_2(v6);
}

//----- (02064690) --------------------------------------------------------
int __fastcall Function_2064690(int a1)
{
  uint *v1
  short *v2
  short *v3
  int result
  int v5
  int v6
  int v7
  int v8
  int v9

  v1 = (uint *)a1;
  v2 = (short *)Function_2062a78(a1);
  v3 = v2;
  result = *v2;
  switch ( (uchar)result )
  {
    case 0:
      UnsetSpriteFlag_2(v1);
      UnsetSpriteFlag_8(v1);
      v5 = LoadSpriteFaceDirection((int)v1);
      v6 = Function_2065838(v5, 0);
      Function_2065668((int)v1, v6);
      result = *v3 + 1;
      *v3 = result;
      return result;
    case 1:
      result = ExecuteMovement((int)v1);
      if ( result )
      {
        v3[1] = Function_206530c(Unknown_20eea88, -1);
        ++*v3;
        goto LABEL_5;
      }
      return result;
    case 2:
LABEL_5:
      result = --v3[1];
      if ( !v3[1] )
      {
        ++*v3;
        goto LABEL_7;
      }
      return result;
    case 3:
LABEL_7:
      v7 = Function_2065330(*((uint *)v3 + 3), -1);
      ChangeBothSpriteFaceDirections(v1, v7);
      if ( *((uint *)v3 + 1) == 1 && !Function_206489c((int)v1, v7) )
      {
        result = 0;
        *v3 = 0;
        return result;
      }
      v8 = Function_2063ebc((int)v1, v7);
      if ( !v8 )
        goto LABEL_15;
      if ( *((uint *)v3 + 1) == 2 )
      {
        if ( !(v8 & 1) )
        {
LABEL_15:
          v9 = Function_2065838(v7, *((uint *)v3 + 2));
          Function_2065668((int)v1, v9);
          SetSpriteFlag_2(v1);
          ++*v3;
          goto LABEL_16;
        }
        result = 0;
        *v3 = 0;
      }
      else
      {
        result = 0;
        *v3 = 0;
      }
      return result;
    case 4:
LABEL_16:
      result = ExecuteMovement((int)v1);
      if ( result )
      {
        UnsetSpriteFlag_2(v1);
        result = 0;
        *v3 = 0;
      }
      return result;
    default:
      return result;
  }
}

//----- (020647A0) --------------------------------------------------------
uint __fastcall Function_20647a0(int a1, int *a2)
{
  int v2
  int *v3
  int v4
  int v5
  int v6
  uint result
  int v8

  v2 = a1;
  v3 = a2;
  v4 = Function_2062ff0(a1);
  v5 = Function_2063000(v2);
  v6 = GetSpriteMovementWidth(v2);
  v8 = GetSpriteMovementLength(v2);
  switch ( (uchar)GetSpriteMovement(v2) )
  {
    case 6u:
      *v3 = v4 - v6;
      v3[2] = v4;
      result = v5 - v8;
      v3[1] = v5 - v8;
      v3[3] = v5;
      break;
    case 7u:
      *v3 = v4;
      v3[2] = v4 + v6;
      result = v5 - v8;
      v3[1] = v5 - v8;
      v3[3] = v5;
      break;
    case 8u:
      *v3 = v4 - v6;
      v3[2] = v4;
      v3[1] = v5;
      result = v5 + v8;
      v3[3] = v5 + v8;
      break;
    case 9u:
      *v3 = v4;
      v3[2] = v4 + v6;
      v3[1] = v5;
      result = v5 + v8;
      v3[3] = v5 + v8;
      break;
    case 0xAu:
      *v3 = v4 - v6;
      v3[2] = v4;
      v3[1] = v5 - v8;
      result = v5 + v8;
      v3[3] = v5 + v8;
      break;
    case 0xBu:
      *v3 = v4;
      v3[2] = v4 + v6;
      v3[1] = v5 - v8;
      result = v5 + v8;
      v3[3] = v5 + v8;
      break;
    case 0xCu:
      *v3 = v4 - v6;
      v3[2] = v4 + v6;
      result = v5 - v8;
      v3[1] = v5 - v8;
      v3[3] = v5;
      break;
    case 0xDu:
      *v3 = v4 - v6;
      v3[2] = v4 + v6;
      v3[1] = v5;
      result = v5 + v8;
      v3[3] = v5 + v8;
      break;
    default:
      result = ErrorHandler();
      break;
  }
  return result;
}

//----- (0206489C) --------------------------------------------------------
int __fastcall Function_206489c(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5
  int v6
  int v7
  int v9
  int v10
  int v11
  int v12

  v2 = a2;
  v3 = a1;
  Function_20647a0(a1, &v9);
  v4 = LoadSpritePositionX(v3);
  v5 = v4 + GetWalkPositionXChange(v2);
  v6 = LoadSpritePositionY(v3);
  v7 = v6 + GetWalkPositionYChange(v2);
  if ( v9 > v5 || v11 < v5 )
    return 0;
  if ( v10 <= v7 && v12 >= v7 )
    return 1;
  return 0;
}

//----- (020648F4) --------------------------------------------------------
int __fastcall Function_20648f4(int a1, int a2)
{
  uint *v2

  v2 = (uint *)a1;
  *Function_2062a54(a1, 8) = a2;
  SetSpritea0((int)v2, 0);
  UnsetSpriteFlag_2(v2);
  return CopySpritePositionsFromOldToNew((int)v2);
}

//----- (02064918) --------------------------------------------------------
int __fastcall Function_2064918(int a1)
{
  uint *v1
  int v2
  int *v3
  int result

  v1 = (uint *)a1;
  v2 = Function_2062a78(a1);
  v3 = (int *)v2;
  result = *(uint *)(v2 + 4);
  if ( !result )
  {
    ChangeSpriteFaceDirection_WithCheck(v1, *v3);
    result = v3[1] + 1;
    v3[1] = result;
  }
  return result;
}

//----- (0206493C) --------------------------------------------------------
int __fastcall Function_206493c(int a1)
{
  return Function_20648f4(a1, 0);
}

//----- (02064948) --------------------------------------------------------
int __fastcall Function_2064948(int a1)
{
  return Function_20648f4(a1, 1);
}

//----- (02064954) --------------------------------------------------------
int __fastcall Function_2064954(int a1)
{
  return Function_20648f4(a1, 2);
}

//----- (02064960) --------------------------------------------------------
int __fastcall Function_2064960(int a1)
{
  return Function_20648f4(a1, 3);
}

//----- (0206496C) --------------------------------------------------------
int __fastcall Function_206496c(int a1, char a2)
{
  uint *v2

  v2 = (uint *)a1;
  *(uchar *)Function_2062a54(a1, 8) = a2;
  SetSpritea0((int)v2, 0);
  UnsetSpriteFlag_2(v2);
  return CopySpritePositionsFromOldToNew((int)v2);
}

//----- (02064990) --------------------------------------------------------
int __fastcall Function_2064990(int a1)
{
  return Function_206496c(a1, 2);
}

//----- (0206499C) --------------------------------------------------------
int __fastcall Function_206499c(int a1)
{
  return Function_206496c(a1, 3);
}

//----- (020649A8) --------------------------------------------------------
int __fastcall Function_20649a8(int a1)
{
  int v1
  int v2
  int result

  v1 = a1;
  v2 = Function_2062a78(a1);
  do
    result = ((int (__fastcall *)(int, int))*(&JumpTable_20ee900 + *(char *)(v2 + 2)))(v1, v2);
  while ( result == 1 );
  return result;
}

//----- (020649CC) --------------------------------------------------------
int __fastcall Function_20649cc(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5
  int result

  v2 = a2;
  v3 = a1;
  v4 = Function_2065448(a1, 38, -1);
  if ( v4 == -1 )
    v4 = LoadSpriteFaceDirection(v3);
  v5 = Function_2065838(v4, 0);
  Function_2065668(v3, v5);
  result = 1;
  *(uchar *)(v2 + 2) = 1;
  return result;
}

//----- (02064A00) --------------------------------------------------------
int __fastcall Function_2064a00(int a1, int a2)
{
  int v2

  v2 = a2;
  if ( !ExecuteMovement(a1) )
    return 0;
  *(uint *)(v2 + 4) = 0;
  *(uchar *)(v2 + 2) = 2;
  return 1;
}

//----- (02064A1C) --------------------------------------------------------
int __fastcall Function_2064a1c(int a1, int a2)
{
  int v2
  int result
  int v4

  v2 = a2;
  if ( *(uint *)(a2 + 4) && Function_2065448(a1, 38, -1) != -1 )
  {
    *(uchar *)(v2 + 2) = 0;
    result = 1;
  }
  else
  {
    v4 = *(uint *)(v2 + 4) + 1;
    *(uint *)(v2 + 4) = v4;
    if ( v4 >= 24 )
    {
      *(uchar *)(v2 + 2) = 3;
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  return result;
}

//----- (02064A58) --------------------------------------------------------
int __fastcall Function_2064a58(int a1, uchar *a2, int a3, int a4)
{
  uint *v4
  uchar *v5
  int *v6
  int v7
  int v8
  int *v9
  int v10
  int v12
  int v13
  int v14
  int v15
  int v16
  char v17
  int v18
  int v19
  int v20
  int v21
  int v22

  v22 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  v6 = (int *)&v17;
  *(uint *)&v17 = 0;
  v18 = 2;
  v19 = 1;
  v20 = 3;
  v21 = -1;
  v12 = 0;
  v13 = 3;
  v14 = 1;
  v15 = 2;
  v16 = -1;
  if ( *a2 != 2 )
    v6 = &v12;
  v7 = LoadSpriteFaceDirection(a1);
  v8 = 0;
  if ( *v6 != -1 )
  {
    v9 = v6;
    do
    {
      if ( v7 == *v9 )
        break;
      ++v9;
      ++v8;
    }
    while ( *v9 != -1 );
  }
  if ( v6[v8] == -1 )
    ErrorHandler();
  v10 = v8 + 1;
  if ( v6[v10] == -1 )
    v10 = 0;
  ChangeSpriteFaceDirection_WithCheck(v4, v6[v10]);
  v5[2] = 0;
  return 1;
}

//----- (02064AF0) --------------------------------------------------------
int __fastcall Function_2064af0(int a1)
{
  return Function_206496c(a1, 3);
}

//----- (02064AFC) --------------------------------------------------------
int __fastcall Function_2064afc(int a1)
{
  int v1
  int v2
  int result

  v1 = a1;
  v2 = Function_2062a78(a1);
  do
    result = ((int (__fastcall *)(int, int))*(&JumpTable_20ee870 + *(char *)(v2 + 2)))(v1, v2);
  while ( result == 1 );
  return result;
}

//----- (02064B20) --------------------------------------------------------
int __fastcall Function_2064b20(int a1, int a2)
{
  int v2
  int v3
  int v4
  int v5
  int result

  v2 = a1;
  v3 = a2;
  v4 = LoadSpriteFaceDirection(a1);
  v5 = Function_2065838(v4, 0);
  Function_2065668(v2, v5);
  result = 1;
  *(uchar *)(v3 + 2) = 1;
  return result;
}

//----- (02064B40) --------------------------------------------------------
int __fastcall Function_2064b40(int a1, int a2)
{
  int v2

  v2 = a2;
  if ( !ExecuteMovement(a1) )
    return 0;
  *(uint *)(v2 + 4) = 0;
  *(uchar *)(v2 + 2) = 2;
  return 1;
}

//----- (02064B5C) --------------------------------------------------------
int __fastcall Function_2064b5c(int a1, int a2)
{
  int v2

  v2 = *(uint *)(a2 + 4) + 1;
  *(uint *)(a2 + 4) = v2;
  if ( v2 < 24 )
    return 0;
  *(uchar *)(a2 + 2) = 3;
  return 1;
}

//----- (02064B74) --------------------------------------------------------
int __fastcall Function_2064b74(int a1, char *a2, int a3, int a4)
{
  uint *v4
  char *v5
  int *v6
  int v7
  int v8
  int *v9
  int v10
  int v11
  int v13
  int v14
  int v15
  int v16
  int v17
  char v18
  int v19
  int v20
  int v21
  int v22
  int v23

  v23 = a4;
  v4 = (uint *)a1;
  v5 = a2;
  v6 = (int *)&v18;
  *(uint *)&v18 = 0;
  v19 = 2;
  v20 = 1;
  v21 = 3;
  v22 = -1;
  v13 = 0;
  v14 = 3;
  v15 = 1;
  v16 = 2;
  v17 = -1;
  if ( *a2 != 2 )
    v6 = &v13;
  v7 = LoadSpriteFaceDirection(a1);
  v8 = 0;
  if ( *v6 != -1 )
  {
    v9 = v6;
    do
    {
      if ( v7 == *v9 )
        break;
      ++v9;
      ++v8;
    }
    while ( *v9 != -1 );
  }
  if ( v6[v8] == -1 )
    ErrorHandler();
  v10 = v8 + 1;
  if ( v6[v10] == -1 )
    v10 = 0;
  ChangeSpriteFaceDirection_WithCheck(v4, v6[v10]);
  v11 = LoadSpriteFaceDirection((int)v4);
  if ( v11 == GetSpriteInitOrientation((int)v4) )
    *v5 = GetOppositeFaceDirection(*v5);
  v5[2] = 0;
  return 1;
}

//----- (02064C28) --------------------------------------------------------
int __fastcall Function_2064c28(int a1)
{
  int v1
  int *v2
  int result

  v1 = a1;
  v2 = Function_2062a54(a1, 8);
  result = Function_206553c(v1);
  if ( result == 1 )
    result = Function_2065550(v1, (int)(v2 + 1));
  return result;
}

//----- (02064C48) --------------------------------------------------------
int __fastcall Function_2064c48(int a1)
{
  int v1
  short *v2
  int result

  v1 = a1;
  v2 = (short *)Function_2062a78(a1);
  do
    result = ((int (__fastcall *)(int, short *))*(&JumpTable_20ee814 + *v2))(v1, v2);
  while ( result == 1 );
  return result;
}

//----- (02064C6C) --------------------------------------------------------
int __fastcall Function_2064c6c(int a1, ushort *a2)
{
  uint *v2
  ushort *v3
  int v4
  int v5
  int result

  v2 = (uint *)a1;
  v3 = a2;
  v4 = GetSpriteInitOrientation(a1);
  v5 = v4;
  if ( v3[1] == 1 )
    v5 = GetOppositeFaceDirection(v4);
  ChangeSpriteFace2Direction((int)v2, v5);
  if ( !Function_206553c((int)v2) )
    ChangeSpriteFaceDirection_WithCheck(v2, v5);
  result = 1;
  *v3 = 1;
  return result;
}

//----- (02064CA8) --------------------------------------------------------
int __fastcall Function_2064ca8(int a1, int a2)
{
  int v2
  uint *v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v15

  v2 = a2;
  v3 = (uint *)a1;
  if ( *(ushort *)(a2 + 2) )
  {
    v4 = Function_2062ff0(a1);
    v15 = Function_2063000((int)v3);
    v5 = LoadSpritePositionX((int)v3);
    v6 = LoadSpritePositionY((int)v3);
    if ( v4 == v5 && v15 == v6 )
    {
      v7 = LoadSpriteFace2Direction((int)v3);
      v8 = GetOppositeFaceDirection(v7);
      ChangeSpriteFace2Direction((int)v3, v8);
      if ( !Function_206553c((int)v3) )
        ChangeSpriteFaceDirection_WithCheck(v3, v8);
      *(ushort *)(v2 + 2) = 0;
    }
  }
  v9 = LoadSpriteFace2Direction((int)v3);
  v10 = v9;
  v11 = Function_2063ebc((int)v3, v9);
  if ( v11 & 1 )
  {
    *(ushort *)(v2 + 2) = 1;
    v10 = GetOppositeFaceDirection(v10);
    v11 = Function_2063ebc((int)v3, v10);
  }
  v12 = 12;
  if ( v11 )
    v12 = 32;
  v13 = Function_2065838(v10, v12);
  Function_2065668((int)v3, v13);
  if ( Function_206553c((int)v3) == 1 )
    Function_2065568((int)v3, (uchar *)(v2 + 4));
  SetSpriteFlag_2(v3);
  *(ushort *)v2 = 2;
  return 1;
}

//----- (02064D68) --------------------------------------------------------
int __fastcall Function_2064d68(int a1, ushort *a2)
{
  uint *v2
  ushort *v3

  v2 = (uint *)a1;
  v3 = a2;
  if ( ExecuteMovement(a1) == 1 )
  {
    UnsetSpriteFlag_2(v2);
    if ( Function_206553c((int)v2) == 1 )
      Function_20655e4(v2, (int)(v3 + 2));
    *v3 = 0;
  }
  return 0;
}

//----- (02064D98) --------------------------------------------------------
int __fastcall Function_2064d98(int a1, char a2, char a3, int a4)
{
  char v4
  int v5
  char v6
  int v7
  int *v8
  int *v9
  int result

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_2062a54(a1, 12);
  v9 = v8;
  *((uchar *)v8 + 2) = v4;
  *((uchar *)v8 + 3) = v6;
  v8[1] = v7;
  result = Function_206553c(v5);
  if ( result == 1 )
    result = Function_2065550(v5, (int)(v9 + 2));
  return result;
}

//----- (02064DC8) --------------------------------------------------------
int __fastcall Function_2064dc8(int a1)
{
  return Function_2064d98(a1, 2, 0, 14);
}

//----- (02064DD8) --------------------------------------------------------
int __fastcall Function_2064dd8(int a1)
{
  return Function_2064d98(a1, 2, 0, 15);
}

//----- (02064DE8) --------------------------------------------------------
int __fastcall Function_2064de8(int a1)
{
  return Function_2064d98(a1, 2, 1, 16);
}

//----- (02064DF8) --------------------------------------------------------
int __fastcall Function_2064df8(int a1)
{
  return Function_2064d98(a1, 2, 1, 17);
}

//----- (02064E08) --------------------------------------------------------
int __fastcall Function_2064e08(int a1)
{
  return Function_2064d98(a1, 2, 0, 18);
}

//----- (02064E18) --------------------------------------------------------
int __fastcall Function_2064e18(int a1)
{
  return Function_2064d98(a1, 2, 0, 19);
}

//----- (02064E28) --------------------------------------------------------
int __fastcall Function_2064e28(int a1)
{
  return Function_2064d98(a1, 2, 1, 20);
}

//----- (02064E38) --------------------------------------------------------
int __fastcall Function_2064e38(int a1)
{
  return Function_2064d98(a1, 2, 1, 21);
}

//----- (02064E48) --------------------------------------------------------
int __fastcall Function_2064e48(int a1)
{
  return Function_2064d98(a1, 2, 1, 22);
}

//----- (02064E58) --------------------------------------------------------
int __fastcall Function_2064e58(int a1)
{
  return Function_2064d98(a1, 2, 1, 23);
}

//----- (02064E68) --------------------------------------------------------
int __fastcall Function_2064e68(int a1)
{
  return Function_2064d98(a1, 2, 0, 24);
}

//----- (02064E78) --------------------------------------------------------
int __fastcall Function_2064e78(int a1)
{
  return Function_2064d98(a1, 2, 0, 25);
}

//----- (02064E88) --------------------------------------------------------
int __fastcall Function_2064e88(int a1)
{
  return Function_2064d98(a1, 2, 1, 26);
}

//----- (02064E98) --------------------------------------------------------
int __fastcall Function_2064e98(int a1)
{
  return Function_2064d98(a1, 2, 1, 27);
}

//----- (02064EA8) --------------------------------------------------------
int __fastcall Function_2064ea8(int a1)
{
  return Function_2064d98(a1, 2, 0, 28);
}

//----- (02064EB8) --------------------------------------------------------
int __fastcall Function_2064eb8(int a1)
{
  return Function_2064d98(a1, 2, 0, 29);
}

//----- (02064EC8) --------------------------------------------------------
int __fastcall Function_2064ec8(int a1)
{
  int v1
  uchar *v2
  int result

  v1 = a1;
  v2 = (uchar *)Function_2062a78(a1);
  do
    result = ((int (__fastcall *)(int, uchar *))*(&JumpTable_20ee7ac + *v2))(v1, v2);
  while ( result == 1 );
  return result;
}

//----- (02064EEC) --------------------------------------------------------
int __fastcall Function_2064eec(int a1, uchar *a2)
{
  uchar *v2
  uint *v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int result
  int v15

  v2 = a2;
  v3 = (uint *)a1;
  if ( a2[1] == a2[2] )
  {
    if ( a2[3] )
    {
      v5 = Function_2063000(a1);
      if ( v5 == LoadSpritePositionY((int)v3) )
        ++v2[1];
    }
    else
    {
      v4 = Function_2062ff0(a1);
      if ( v4 == LoadSpritePositionX((int)v3) )
        ++v2[1];
    }
  }
  if ( v2[1] == 3 )
  {
    v6 = Function_2062ff0((int)v3);
    v15 = Function_2063000((int)v3);
    v7 = LoadSpritePositionX((int)v3);
    v8 = LoadSpritePositionY((int)v3);
    if ( v6 == v7 && v15 == v8 )
      v2[1] = 0;
  }
  v9 = Function_2065358(*((uint *)v2 + 1));
  v10 = *(uint *)(v9 + 4 * v2[1]);
  ChangeSpriteFace2Direction((int)v3, v10);
  if ( !Function_206553c((int)v3) )
    ChangeSpriteFaceDirection_WithCheck(v3, v10);
  v11 = Function_2063ebc((int)v3, v10);
  if ( v11 & 1 )
  {
    v10 = *(uint *)(v9 + 4 * ++v2[1]);
    ChangeSpriteFace2Direction((int)v3, *(uint *)(v9 + 4 * v2[1]));
    if ( !Function_206553c((int)v3) )
      ChangeSpriteFaceDirection_WithCheck(v3, v10);
    v11 = Function_2063ebc((int)v3, v10);
  }
  v12 = 12;
  if ( v11 )
    v12 = 32;
  v13 = Function_2065838(v10, v12);
  Function_2065668((int)v3, v13);
  if ( Function_206553c((int)v3) == 1 )
    Function_2065568((int)v3, v2 + 8);
  SetSpriteFlag_2(v3);
  result = 1;
  *v2 = 1;
  return result;
}

//----- (02064FFC) --------------------------------------------------------
int __fastcall Function_2064ffc(int a1, uchar *a2)
{
  uint *v2
  uchar *v3

  v2 = (uint *)a1;
  v3 = a2;
  if ( ExecuteMovement(a1) == 1 )
  {
    UnsetSpriteFlag_2(v2);
    if ( Function_206553c((int)v2) == 1 )
      Function_20655e4(v2, (int)(v3 + 8));
    *v3 = 0;
  }
  return 0;
}

//----- (0206502C) --------------------------------------------------------
int __fastcall Function_206502c(int a1, char a2, char a3, char a4)
{
  char v4
  int v5
  char v6
  char v7
  int *v8
  int *v9
  int result

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = Function_2062a54(a1, 12);
  v9 = v8;
  *((uchar *)v8 + 2) = v4;
  *((uchar *)v8 + 3) = v6;
  *((uchar *)v8 + 4) = v7;
  result = Function_206553c(v5);
  if ( result == 1 )
    result = Function_2065550(v5, (int)(v9 + 2));
  return result;
}

//----- (0206505C) --------------------------------------------------------
int __fastcall Function_206505c(int a1)
{
  return Function_206502c(a1, 2, 1, 30);
}

//----- (0206506C) --------------------------------------------------------
int __fastcall Function_206506c(int a1)
{
  return Function_206502c(a1, 2, 1, 31);
}

//----- (0206507C) --------------------------------------------------------
int __fastcall Function_206507c(int a1)
{
  return Function_206502c(a1, 2, 0, 32);
}

//----- (0206508C) --------------------------------------------------------
int __fastcall Function_206508c(int a1)
{
  return Function_206502c(a1, 2, 0, 33);
}

//----- (0206509C) --------------------------------------------------------
int __fastcall Function_206509c(int a1)
{
  return Function_206502c(a1, 2, 1, 34);
}

//----- (020650AC) --------------------------------------------------------
int __fastcall Function_20650ac(int a1)
{
  return Function_206502c(a1, 2, 1, 35);
}

//----- (020650BC) --------------------------------------------------------
int __fastcall Function_20650bc(int a1)
{
  return Function_206502c(a1, 2, 0, 36);
}

//----- (020650CC) --------------------------------------------------------
int __fastcall Function_20650cc(int a1)
{
  return Function_206502c(a1, 2, 0, 37);
}

//----- (020650DC) --------------------------------------------------------
int __fastcall Function_20650dc(int a1)
{
  int v1
  uchar *v2
  int result

  v1 = a1;
  v2 = (uchar *)Function_2062a78(a1);
  do
    result = ((int (__fastcall *)(int, uchar *))*(&JumpTable_20ee820 + *v2))(v1, v2);
  while ( result == 1 );
  return result;
}

//----- (02065100) --------------------------------------------------------
int __fastcall Function_2065100(int result)
{
  if ( *(uchar *)(result + 5) == 1 )
  {
    if ( (char)--*(uchar *)(result + 1) < 0 )
      *(uchar *)(result + 1) = 3;
  }
  else
  {
    ++*(uchar *)(result + 1);
  }
  return result;
}

//----- (02065124) --------------------------------------------------------
int __fastcall Function_2065124(int a1, uchar *a2)
{
  uint *v2
  uchar *v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int result

  v2 = (uint *)a1;
  v3 = a2;
  if ( GetSpriteTrainer(a1) != 10
    || (v4 = GetSpriteSpriteListFirstSprite((int)v2),
        v5 = Function_205ef3c(v4),
        v6 = LoadSpriteFaceDirection((int)v2),
        v7 = Function_20629d8(v2, 0),
        v8 = Function_2067d58((int)v2, v5, v6, v7),
        v8 == -1) )
  {
    *v3 = 2;
    result = 1;
  }
  else
  {
    Function_2065838(v6, 48);
    Function_2065668((int)v2, v8);
    SetSpriteFlag_2(v2);
    result = 1;
    *v3 = 1;
  }
  return result;
}

//----- (02065188) --------------------------------------------------------
int __fastcall Function_2065188(int a1, uchar *a2)
{
  uint *v2
  uchar *v3

  v2 = (uint *)a1;
  v3 = a2;
  if ( ExecuteMovement(a1) == 1 )
  {
    UnsetSpriteFlag_2(v2);
    *v3 = 2;
  }
  return 0;
}

//----- (020651A4) --------------------------------------------------------
int __fastcall Function_20651a4(int a1, uchar *a2)
{
  uchar *v2
  uint *v3
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v15

  v2 = a2;
  v3 = (uint *)a1;
  if ( (char)a2[1] == (uchar)a2[2] )
  {
    if ( a2[3] )
    {
      v5 = Function_2063000(a1);
      if ( v5 == LoadSpritePositionY((int)v3) )
        Function_2065100((int)v2);
    }
    else
    {
      v4 = Function_2062ff0(a1);
      if ( v4 == LoadSpritePositionX((int)v3) )
        Function_2065100((int)v2);
    }
  }
  if ( v2[1] == 3 )
  {
    v6 = Function_2062ff0((int)v3);
    v15 = Function_2063000((int)v3);
    v7 = LoadSpritePositionX((int)v3);
    v8 = LoadSpritePositionY((int)v3);
    if ( v6 == v7 && v15 == v8 )
      v2[1] = 0;
  }
  v9 = Function_2065358((uchar)v2[4]);
  v10 = *(uint *)(v9 + 4 * (char)v2[1]);
  ChangeSpriteFace2Direction((int)v3, v10);
  if ( !Function_206553c((int)v3) )
    ChangeSpriteFaceDirection_WithCheck(v3, v10);
  v11 = Function_2063ebc((int)v3, v10);
  if ( v11 & 1 )
  {
    Function_2065100((int)v2);
    v10 = *(uint *)(v9 + 4 * (char)v2[1]);
    ChangeSpriteFace2Direction((int)v3, *(uint *)(v9 + 4 * (char)v2[1]));
    if ( !Function_206553c((int)v3) )
      ChangeSpriteFaceDirection_WithCheck(v3, v10);
    v11 = Function_2063ebc((int)v3, v10);
  }
  v12 = 12;
  if ( v11 )
    v12 = 32;
  v13 = Function_2065838(v10, v12);
  Function_2065668((int)v3, v13);
  if ( Function_206553c((int)v3) == 1 )
    Function_2065568((int)v3, v2 + 8);
  SetSpriteFlag_2(v3);
  *v2 = 3;
  return 1;
}

//----- (020652BC) --------------------------------------------------------
int __fastcall Function_20652bc(int a1, uchar *a2)
{
  uint *v2
  uchar *v3

  v2 = (uint *)a1;
  v3 = a2;
  if ( ExecuteMovement(a1) == 1 )
  {
    UnsetSpriteFlag_2(v2);
    if ( Function_206553c((int)v2) == 1 )
      Function_20655e4(v2, (int)(v3 + 8));
    *v3 = 0;
  }
  return 0;
}

//----- (020652EC) --------------------------------------------------------
int __fastcall Function_20652ec(uint *a1, int a2)
{
  int i

  for ( i = 0; a2 != *a1; ++i )
    ++a1;
  if ( !i )
    ErrorHandler();
  return i;
}

//----- (0206530C) --------------------------------------------------------
int __fastcall Function_206530c(uint *a1, int a2)
{
  uint *v2
  int v3
  uint v4
  int v5
  int v6

  v2 = a1;
  v3 = a2;
  v4 = PRNG();
  v5 = Function_20652ec(v2, v3);
  s32_div_f(v4, v5);
  return v2[v6];
}

//----- (02065330) --------------------------------------------------------
int __fastcall Function_2065330(int a1, int a2)
{
  int v2
  uint *v3
  uint v4
  int v5
  int v6

  v2 = a2;
  v3 = (uint *)Function_2065358(a1);
  v4 = PRNG();
  v5 = Function_20652ec(v3, v2);
  s32_div_f(v4, v5);
  return v3[v6];
}

//----- (02065358) --------------------------------------------------------
int __fastcall Function_2065358(int a1)
{
  int *v1
  int v2

  v1 = &Unknown_20eeb08;
  v2 = 0;
  do
  {
    if ( v2 == a1 )
      return v1[1];
    v1 += 2;
    v2 = *v1;
  }
  while ( *v1 != 39 );
  ErrorHandler();
  return 0;
}

//----- (0206537C) --------------------------------------------------------
int __fastcall Function_206537c(int a1)
{
  uint *v1
  int v2
  int result
  int v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15

  v1 = (uint *)a1;
  v2 = GetSpriteTrainer(a1);
  if ( v2 != 1 && v2 != 2 )
    return -1;
  v4 = GetSpriteSpriteListFirstSprite((int)v1);
  v5 = Function_205ef3c(v4);
  if ( !Function_206140c(v5) )
    return -1;
  v6 = 0;
  v7 = GetSpriteMovement((int)v1);
  do
    v8 = Unknown_20eead0[v6++];
  while ( v8 != v7 && v8 != 255 );
  if ( v7 != v8 )
    return -1;
  v9 = Function_205eb3c(v5);
  v10 = Function_20630dc(v9);
  if ( v10 != Function_20630dc((int)v1) )
    return -1;
  v11 = GetSpritePositionX(v5);
  v12 = GetSpritePositionY(v5);
  v15 = Function_20629d8(v1, 0);
  v13 = LoadSpritePositionX((int)v1);
  v14 = LoadSpritePositionY((int)v1);
  if ( v14 - v15 > v12 || v14 + v15 < v12 || v13 - v15 > v11 || v13 + v15 < v11 )
    result = -1;
  else
    result = Function_2064488(v13, v14, v11, v12);
  return result;
}

//----- (02065448) --------------------------------------------------------
int __fastcall Function_2065448(int a1, int a2, int a3)
{
  int v3
  uint *v4
  int v5
  int result
  int v7
  uint *v8
  int v9
  int v10
  int v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17
  int v18

  v15 = a1;
  v3 = a3;
  v4 = (uint *)Function_2065358(a2);
  v5 = Function_20652ec(v4, v3);
  if ( v5 == 1 )
    return -1;
  result = Function_206537c(v15);
  if ( result != -1 )
  {
    v7 = 0;
    v8 = v4;
    while ( result != *v8 )
    {
      ++v7;
      ++v8;
      if ( v7 >= v5 )
      {
        v9 = -1;
        v10 = -1;
        v17 = LoadSpritePositionX(v15);
        v16 = LoadSpritePositionY(v15);
        v11 = GetSpriteSpriteListFirstSprite(v15);
        v12 = Function_205ef3c(v11);
        v18 = GetSpritePositionX(v12);
        v13 = GetSpritePositionY(v12);
        if ( v17 <= v18 )
        {
          if ( v17 < v18 )
            v9 = 3;
        }
        else
        {
          v9 = 2;
        }
        if ( v16 <= v13 )
        {
          if ( v16 < v13 )
            v10 = 1;
        }
        else
        {
          v10 = 0;
        }
        v14 = 0;
        if ( v9 == -1 )
        {
          while ( v10 != *v4 )
          {
            ++v14;
            ++v4;
            if ( v14 >= v5 )
              goto LABEL_30;
          }
          result = v10;
        }
        else if ( v10 == -1 )
        {
          while ( v9 != *v4 )
          {
            ++v14;
            ++v4;
            if ( v14 >= v5 )
              goto LABEL_30;
          }
          result = v9;
        }
        else
        {
          do
          {
            if ( v9 == *v4 )
              return v9;
            if ( v10 == *v4 )
              return v10;
            ++v14;
            ++v4;
          }
          while ( v14 < v5 );
LABEL_30:
          result = -1;
        }
        return result;
      }
    }
  }
  return result;
}

//----- (0206553C) --------------------------------------------------------
BOOL __fastcall Function_206553c(int a1)
{
  return (uint)(GetSpriteTrainer(a1) - 7) <= 1;
}

//----- (02065550) --------------------------------------------------------
int __fastcall Function_2065550(int a1, int a2)
{
  int v2
  int result

  v2 = a2;
  if ( GetSpriteTrainer(a1) == 7 )
  {
    result = 0;
    *(uchar *)(v2 + 1) = 0;
  }
  else
  {
    result = 1;
    *(uchar *)(v2 + 1) = 1;
  }
  return result;
}

//----- (02065568) --------------------------------------------------------
uint *__fastcall Function_2065568(int a1, uchar *a2)
{
  uint *v2
  uchar *v3
  int v4
  int v5
  int v6
  int v7

  v2 = (uint *)a1;
  v3 = a2;
  v4 = 0;
  v5 = LoadSpriteFaceDirection(a1);
  v6 = 0;
  while ( v4 < 4 && v5 != Unknown_20eeab0[4 * (char)v3[1] + v6] )
  {
    ++v6;
    ++v4;
  }
  if ( v4 >= 4 )
    ErrorHandler();
  *v3 = v5;
  v7 = Unknown_20eeab0[4 * (char)v3[1]
                     + ((uint)(v4 + 1) >> 31)
                     + __ROR4__(((v4 + 1) << 30) - ((uint)(v4 + 1) >> 31), 30)];
  v3[2] = MaskSpriteFlags(v2, 128) != 0;
  ChangeSpriteFaceDirection_WithCheck(v2, v7);
  return SetSpriteFlags(v2, 128);
}

//----- (020655E4) --------------------------------------------------------
uint *__fastcall Function_20655e4(uint *result, int a2)
{
  if ( !*(uchar *)(a2 + 2) )
    result = UnsetSpriteFlags(result, 128);
  return result;
}

//----- (020655F4) --------------------------------------------------------
int __fastcall IsSpriteMovable(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( !CheckSpriteFlags(a1, 1) )
    return 0;
  if ( CheckSpriteFlags(v1, 2) == 1 )
    return 0;
  if ( CheckSpriteFlags(v1, 16) != 1 || CheckSpriteFlags(v1, 32) )
    return 1;
  return 0;
}

//----- (02065638) --------------------------------------------------------
uint *__fastcall Function_2065638(uint *a1, int a2)
{
  int v2
  uint *v3

  v2 = a2;
  v3 = a1;
  if ( a2 >= 154 )
    ErrorHandler();
  SetSpriteMovementNr((int)v3, v2);
  SetSpriteMovementState((int)v3, 0);
  SetSpriteFlags(v3, 16);
  return UnsetSpriteFlags(v3, 32);
}

//----- (02065668) --------------------------------------------------------
uint *__fastcall Function_2065668(int a1, int a2)
{
  uint *v2

  v2 = (uint *)a1;
  SetSpriteMovementNr(a1, a2);
  SetSpriteMovementState((int)v2, 0);
  return UnsetSpriteFlags(v2, 32);
}

//----- (02065684) --------------------------------------------------------
BOOL __fastcall Function_2065684(uint *a1)
{
  uint *v1
  BOOL result

  v1 = a1;
  if ( CheckSpriteFlags(a1, 16) )
    result = CheckSpriteFlags(v1, 32) != 0;
  else
    result = 1;
  return result;
}

//----- (020656AC) --------------------------------------------------------
int __fastcall Function_20656ac(uint *a1)
{
  uint *v1

  v1 = a1;
  if ( !CheckSpriteFlags(a1, 16) )
    return 1;
  if ( !CheckSpriteFlags(v1, 32) )
    return 0;
  UnsetSpriteFlags(v1, 48);
  return 1;
}