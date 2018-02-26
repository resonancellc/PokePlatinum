//----- (020656DC) --------------------------------------------------------
int *__fastcall Function_20656dc(uint *a1)
{
  uint *v1

  v1 = a1;
  UnsetSpriteFlags(a1, 16);
  SetSpriteFlags(v1, 32);
  SetSpriteMovementNr((int)v1, 255);
  return SetSpriteMovementState((int)v1, 0);
}

//----- (02065700) --------------------------------------------------------
uint *__fastcall Malloc_MovementScript(int a1, int a2)
{
  int v2
  int v3
  int v4
  uchar *v5
  int v6
  int v7
  int v8
  uint *v9

  v2 = a1;
  v3 = a2;
  v4 = malloc2(4u, 20);
  if ( !v4 )
    ErrorHandler();
  v5 = (uchar *)v4;
  v6 = 20;
  do
  {
    *v5++ = 0;
    --v6;
  }
  while ( v6 );
  v7 = GetSpriteSpriteList(v2);
  v8 = GetSpriteListc(v7);
  v9 = AddTaskToTaskList1((int)MovementScript_Initializer, v4, v8 - 1);
  if ( !v9 )
    ErrorHandler();
  *(uint *)(v4 + 12) = v2;
  *(uint *)(v4 + 16) = v3;
  return v9;
}

//----- (0206574C) --------------------------------------------------------
int __fastcall Function_206574c(int a1)
{
  return *(uint *)(Function_201ced0(a1) + 4);
}

//----- (02065758) --------------------------------------------------------
int __fastcall Function_2065758(int a1)
{
  int *v1
  int v2

  v1 = (int *)a1;
  v2 = Function_201ced0(a1);
  if ( Function_2065684(*(uint **)(v2 + 12)) != 1 )
    ErrorHandler();
  Function_20656ac(*(uint **)(v2 + 12));
  Function_2018238(4u, v2);
  return Call_RemoveTaskFromTaskList(v1);
}

//----- (02065788) --------------------------------------------------------
int __fastcall MovementScript_Initializer(int a1, uint *a2)
{
  uint *v2
  int result

  v2 = a2;
  do
    result = ((int (__fastcall *)(uint *))*(&JumpTable_MovementScriptStateFunctions + *v2))(v2);
  while ( result == 1 );
  return result;
}

//----- (020657A4) --------------------------------------------------------
int __fastcall Function_20657a4(uint *a1)
{
  a1[2] = 0;
  *a1 = 1;
  return 1;
}

//----- (020657B0) --------------------------------------------------------
int __fastcall SetSpriteMovementWhenPossible(int a1)
{
  uint *v1

  v1 = (uint *)a1;
  if ( !IsSpriteMovable(*(uint **)(a1 + 12)) )
    return 0;
  *v1 = 2;
  return 1;
}

//----- (020657CC) --------------------------------------------------------
int __fastcall LoadMovementScriptCmdIntoSpriteStruct(int a1)
{
  uint *v1

  v1 = (uint *)a1;
  Function_2065638(*(uint **)(a1 + 12), **(ushort **)(a1 + 16));
  *v1 = 3;
  return 0;
}

//----- (020657E4) --------------------------------------------------------
int __fastcall Function_20657e4(int a1)
{
  uint *v1

  v1 = (uint *)a1;
  if ( !Function_2065684(*(uint **)(a1 + 12)) )
    return 0;
  *v1 = 4;
  return 1;
}

//----- (02065800) --------------------------------------------------------
int __fastcall ExecuteSpriteMovementCmdAsOftenAsSet(uint *a1)
{
  int v1
  int v2
  int result

  v1 = a1[4];
  v2 = a1[2] + 1;
  a1[2] = v2;
  if ( v2 >= *(ushort *)(v1 + 2) )
  {
    a1[4] = v1 + 4;
    if ( *(ushort *)(v1 + 4) == 254 )
    {
      a1[1] = 1;
      *a1 = 5;
      result = 0;
    }
    else
    {
      *a1 = 0;
      result = 1;
    }
  }
  else
  {
    *a1 = 1;
    result = 1;
  }
  return result;
}

//----- (02065834) --------------------------------------------------------
int Function_2065834()
{
  return 0;
}

//----- (02065838) --------------------------------------------------------
int __fastcall Function_2065838(int a1, int a2)
{
  int v2
  int v3
  int **v4
  int *v5
  int v6
  int *v7

  v2 = a1;
  v3 = a2;
  if ( a1 >= 4 )
    ErrorHandler();
  v4 = &Unknown_20ee31c;
  v5 = &Unknown_20edd5c;
  if ( &Unknown_20edd5c )
  {
    do
    {
      v6 = 0;
      v7 = v5;
      do
      {
        if ( v3 == *v7 )
          return v5[v2];
        ++v6;
        ++v7;
      }
      while ( v6 < 4 );
      ++v4;
      v5 = *v4;
    }
    while ( *v4 );
  }
  ErrorHandler();
  return v3;
}

//----- (0206587C) --------------------------------------------------------
int __fastcall Function_206587c(int a1)
{
  int **v1
  int *v2
  int v3

  v1 = &Unknown_20ee31c;
  v2 = &Unknown_20edd5c;
  if ( &Unknown_20edd5c )
  {
    do
    {
      v3 = 0;
      do
      {
        if ( a1 == *v2 )
          return v3;
        ++v3;
        ++v2;
      }
      while ( v3 < 4 );
      ++v1;
      v2 = *v1;
    }
    while ( *v1 );
  }
  return -1;
}

//----- (020658B4) --------------------------------------------------------
int __fastcall ExecuteMovementFunctions(int a1)
{
  int v1
  int result
  int v3
  int v4

  v1 = a1;
  do
  {
    result = GetSpriteMovementNr(v1);
    v3 = result;
    if ( result == 255 )
      break;
    v4 = GetSpriteMovementState(v1);
    result = Call_Movement_JumpTables(v1, v3, v4);
  }
  while ( result );
  return result;
}

//----- (020658DC) --------------------------------------------------------
int __fastcall ExecuteMovement(int a1)
{
  uint *v1

  v1 = (uint *)a1;
  ExecuteMovementFunctions(a1);
  if ( !CheckSpriteFlags(v1, 32) )
    return 0;
  UnsetSpriteFlags(v1, 32);
  SetSpriteMovementNr((int)v1, 255);
  SetSpriteMovementState((int)v1, 0);
  return 1;
}

//----- (02065910) --------------------------------------------------------
int __fastcall Call_Movement_JumpTables(int a1, int a2, int a3)
{
  return ((int (__fastcall *)(int))Movement_JumpTables[a2][a3])(a1);
}

//----- (02065924) --------------------------------------------------------
int __fastcall Movement_EndMovement(uint *a1)
{
  SetSpriteFlags(a1, 32);
  return 0;
}

//----- (02065930) --------------------------------------------------------
uint *__fastcall Movement_ChangeFaceDirection(uint *a1, int a2)
{
  uint *v2

  v2 = a1;
  ChangeSpriteFaceDirection_WithCheck(a1, a2);
  SetSpritea0((int)v2, 0);
  CopySpritePositionsFromOldToNew((int)v2);
  return IncreaseSpriteMovementState((int)v2);
}

//----- (02065950) --------------------------------------------------------
int __fastcall Movement_SeeUp(uint *a1)
{
  Movement_ChangeFaceDirection(a1, 0);
  return 1;
}

//----- (0206595C) --------------------------------------------------------
int __fastcall Movement_SeeDown(uint *a1)
{
  Movement_ChangeFaceDirection(a1, 1);
  return 1;
}

//----- (02065968) --------------------------------------------------------
int __fastcall Movement_SeeLeft(uint *a1)
{
  Movement_ChangeFaceDirection(a1, 2);
  return 1;
}

//----- (02065974) --------------------------------------------------------
int __fastcall Movement_SeeRight(uint *a1)
{
  Movement_ChangeFaceDirection(a1, 3);
  return 1;
}

//----- (02065980) --------------------------------------------------------
uint *__fastcall Movement_WalkMovement(int a1, int a2, int a3, short a4, ushort a5)
{
  int v5
  uint *v6
  int v7
  short v8
  int *v9

  v5 = a2;
  v6 = (uint *)a1;
  v7 = a3;
  v8 = a4;
  v9 = GetSpriteAdrf8AndClearMem(a1, 12);
  *(ushort *)v9 = a5;
  *((ushort *)v9 + 1) = v8;
  v9[1] = v5;
  v9[2] = v7;
  MoveSpriteForWalk((int)v6, v5);
  ChangeBothSpriteFaceDirections(v6, v5);
  SetSpritea0((int)v6, a5);
  SetSpriteFlags(v6, 4);
  return IncreaseSpriteMovementState((int)v6);
}

//----- (020659C8) --------------------------------------------------------
int __fastcall Movement_ContinueWalking(int a1)
{
  uint *v1
  int v2
  int v3
  int v4
  int v5
  int v6

  v1 = (uint *)a1;
  v2 = GetSpriteAdrf8(a1);
  Movement_AddDeltaPositionToSprite70(v1, *(uint *)(v2 + 4), *(uint *)(v2 + 8), v3);
  Function_20642f8(v1, v4, v5, v6);
  if ( (short)--*(ushort *)(v2 + 2) > 0 )
    return 0;
  SetSpriteFlags(v1, 40);
  CopySpritePositionsFromOldToNew((int)v1);
  Function_2062b68((int)v1);
  SetSpritea0((int)v1, 0);
  IncreaseSpriteMovementState((int)v1);
  return 1;
}

//----- (02065A1C) --------------------------------------------------------
int __fastcall Movement_WalkUpSlow(int a1)
{
  Movement_WalkMovement(a1, 0, 2048, 32, 1u);
  return 1;
}

//----- (02065A30) --------------------------------------------------------
int __fastcall Movement_WalkDownSlow(int a1)
{
  Movement_WalkMovement(a1, 1, 2048, 32, 1u);
  return 1;
}

//----- (02065A44) --------------------------------------------------------
int __fastcall Movement_WalkLeftSlow(int a1)
{
  Movement_WalkMovement(a1, 2, 2048, 32, 1u);
  return 1;
}

//----- (02065A58) --------------------------------------------------------
int __fastcall Movement_WalkRightSlow(int a1)
{
  Movement_WalkMovement(a1, 3, 2048, 32, 1u);
  return 1;
}

//----- (02065A6C) --------------------------------------------------------
int __fastcall Movement_WalkUp(int a1)
{
  Movement_WalkMovement(a1, 0, 4096, 16, 2u);
  return 1;
}

//----- (02065A80) --------------------------------------------------------
int __fastcall Movement_WalkDown(int a1)
{
  Movement_WalkMovement(a1, 1, 4096, 16, 2u);
  return 1;
}

//----- (02065A94) --------------------------------------------------------
int __fastcall Movement_WalkLeft(int a1)
{
  Movement_WalkMovement(a1, 2, 4096, 16, 2u);
  return 1;
}

//----- (02065AA8) --------------------------------------------------------
int __fastcall Movement_WalkRight(int a1)
{
  Movement_WalkMovement(a1, 3, 4096, 16, 2u);
  return 1;
}

//----- (02065ABC) --------------------------------------------------------
int __fastcall Movement_WalkUpFast(int a1)
{
  Movement_WalkMovement(a1, 0, 0x2000, 8, 3u);
  return 1;
}

//----- (02065AD4) --------------------------------------------------------
int __fastcall Movement_WalkDownFast(int a1)
{
  Movement_WalkMovement(a1, 1, 0x2000, 8, 3u);
  return 1;
}

//----- (02065AE8) --------------------------------------------------------
int __fastcall Movement_WalkLeftFast(int a1)
{
  Movement_WalkMovement(a1, 2, 0x2000, 8, 3u);
  return 1;
}

//----- (02065AFC) --------------------------------------------------------
int __fastcall Movement_WalkRightFast(int a1)
{
  Movement_WalkMovement(a1, 3, 0x2000, 8, 3u);
  return 1;
}

//----- (02065B10) --------------------------------------------------------
int __fastcall Movement_WalkUpVeryFast(int a1)
{
  Movement_WalkMovement(a1, 0, 0x4000, 4, 4u);
  return 1;
}

//----- (02065B24) --------------------------------------------------------
int __fastcall Movement_WalkDownVeryFast(int a1)
{
  Movement_WalkMovement(a1, 1, 0x4000, 4, 4u);
  return 1;
}

//----- (02065B38) --------------------------------------------------------
int __fastcall Movement_WalkLeftVeryFast(int a1)
{
  Movement_WalkMovement(a1, 2, 0x4000, 4, 4u);
  return 1;
}

//----- (02065B4C) --------------------------------------------------------
int __fastcall Movement_WalkRightVeryFast(int a1)
{
  Movement_WalkMovement(a1, 3, 0x4000, 4, 4u);
  return 1;
}

//----- (02065B60) --------------------------------------------------------
int __fastcall Movement_RunUp(int a1)
{
  Movement_WalkMovement(a1, 0, 0x8000, 2, 5u);
  return 1;
}

//----- (02065B78) --------------------------------------------------------
int __fastcall Movement_RunDown(int a1)
{
  Movement_WalkMovement(a1, 1, 0x8000, 2, 5u);
  return 1;
}

//----- (02065B8C) --------------------------------------------------------
int __fastcall Movement_RunLeft(int a1)
{
  Movement_WalkMovement(a1, 2, 0x8000, 2, 5u);
  return 1;
}

//----- (02065BA0) --------------------------------------------------------
int __fastcall Movement_RunRight(int a1)
{
  Movement_WalkMovement(a1, 3, 0x8000, 2, 5u);
  return 1;
}

//----- (02065BB8) --------------------------------------------------------
int __fastcall Movement_PauseHoverUp(int a1)
{
  Movement_WalkMovement(a1, 0, 0x10000, 1, 0);
  return 1;
}

//----- (02065BCC) --------------------------------------------------------
int __fastcall Movement_PauseHoverDown(int a1)
{
  Movement_WalkMovement(a1, 1, 0x10000, 1, 0);
  return 1;
}

//----- (02065BE0) --------------------------------------------------------
int __fastcall Movement_PauseHoverLeft(int a1)
{
  Movement_WalkMovement(a1, 2, 0x10000, 1, 0);
  return 1;
}

//----- (02065BF4) --------------------------------------------------------
int __fastcall Movement_PauseHoverRight(int a1)
{
  Movement_WalkMovement(a1, 3, 0x10000, 1, 0);
  return 1;
}

//----- (02065C0C) --------------------------------------------------------
int __fastcall Movement_PauseReverseUp(int a1)
{
  Movement_WalkMovement(a1, 0, 0x4000, 4, 9u);
  return 1;
}

//----- (02065C24) --------------------------------------------------------
int __fastcall Movement_PauseReverseDown(int a1)
{
  Movement_WalkMovement(a1, 1, 0x4000, 4, 9u);
  return 1;
}

//----- (02065C38) --------------------------------------------------------
int __fastcall Movement_PauseReverseLeft(int a1)
{
  Movement_WalkMovement(a1, 2, 0x4000, 4, 9u);
  return 1;
}

//----- (02065C4C) --------------------------------------------------------
int __fastcall Movement_PauseReverseRight(int a1)
{
  Movement_WalkMovement(a1, 3, 0x4000, 4, 9u);
  return 1;
}

//----- (02065C64) --------------------------------------------------------
uint *__fastcall Movement_MoveMovement(int a1, int a2, short a3, int a4)
{
  int v4
  short v5
  int v6
  uint *v7
  int *v8

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = (uint *)a1;
  v8 = GetSpriteAdrf8AndClearMem(a1, 12);
  *(ushort *)v8 = v6;
  *((ushort *)v8 + 1) = v5 + 1;
  ChangeSpriteFaceDirection_WithCheck(v7, v4);
  SetSpritea0((int)v7, v6);
  CopySpritePositionsFromOldToNew((int)v7);
  return IncreaseSpriteMovementState((int)v7);
}

//----- (02065C98) --------------------------------------------------------
int __fastcall Movement_ContinueMoving(int a1)
{
  uint *v1
  int v2

  v1 = (uint *)a1;
  v2 = GetSpriteAdrf8(a1);
  if ( (short)--*(ushort *)(v2 + 2) > 0 )
    return 0;
  SetSpriteFlags(v1, 32);
  SetSpritea0((int)v1, 0);
  IncreaseSpriteMovementState((int)v1);
  return 1;
}

//----- (02065CCC) --------------------------------------------------------
int __fastcall Movement_MoveUpSlow(int a1)
{
  Movement_MoveMovement(a1, 0, 32, 1);
  return 1;
}

//----- (02065CDC) --------------------------------------------------------
int __fastcall Movement_MoveDownSlow(int a1)
{
  Movement_MoveMovement(a1, 1, 32, 1);
  return 1;
}

//----- (02065CEC) --------------------------------------------------------
int __fastcall Movement_MoveLeftSlow(int a1)
{
  Movement_MoveMovement(a1, 2, 32, 1);
  return 1;
}

//----- (02065CFC) --------------------------------------------------------
int __fastcall Movement_MoveRightSlow(int a1)
{
  Movement_MoveMovement(a1, 3, 32, 1);
  return 1;
}

//----- (02065D0C) --------------------------------------------------------
int __fastcall Movement_MoveUp(int a1)
{
  Movement_MoveMovement(a1, 0, 16, 2);
  return 1;
}

//----- (02065D1C) --------------------------------------------------------
int __fastcall Movement_MoveDown(int a1)
{
  Movement_MoveMovement(a1, 1, 16, 2);
  return 1;
}

//----- (02065D2C) --------------------------------------------------------
int __fastcall Movement_MoveLeft(int a1)
{
  Movement_MoveMovement(a1, 2, 16, 2);
  return 1;
}

//----- (02065D3C) --------------------------------------------------------
int __fastcall Movement_MoveRight(int a1)
{
  Movement_MoveMovement(a1, 3, 16, 2);
  return 1;
}

//----- (02065D4C) --------------------------------------------------------
int __fastcall Movement_MoveUpFast(int a1)
{
  Movement_MoveMovement(a1, 0, 8, 3);
  return 1;
}

//----- (02065D5C) --------------------------------------------------------
int __fastcall Movement_MoveDownFast(int a1)
{
  Movement_MoveMovement(a1, 1, 8, 3);
  return 1;
}

//----- (02065D6C) --------------------------------------------------------
int __fastcall Movement_MoveLeftFast(int a1)
{
  Movement_MoveMovement(a1, 2, 8, 3);
  return 1;
}

//----- (02065D7C) --------------------------------------------------------
int __fastcall Movement_MoveRightFast(int a1)
{
  Movement_MoveMovement(a1, 3, 8, 3);
  return 1;
}

//----- (02065D8C) --------------------------------------------------------
int __fastcall Movement_MoveUpVeryFast(int a1)
{
  Movement_MoveMovement(a1, 0, 4, 4);
  return 1;
}

//----- (02065D9C) --------------------------------------------------------
int __fastcall Movement_MoveDownVeryFast(int a1)
{
  Movement_MoveMovement(a1, 1, 4, 4);
  return 1;
}

//----- (02065DAC) --------------------------------------------------------
int __fastcall Movement_MoveLeftVeryFast(int a1)
{
  Movement_MoveMovement(a1, 2, 4, 4);
  return 1;
}

//----- (02065DBC) --------------------------------------------------------
int __fastcall Movement_MoveRightVeryFast(int a1)
{
  Movement_MoveMovement(a1, 3, 4, 4);
  return 1;
}

//----- (02065DCC) --------------------------------------------------------
int __fastcall Function_2065dcc(int a1)
{
  Movement_MoveMovement(a1, 0, 2, 5);
  return 1;
}

//----- (02065DDC) --------------------------------------------------------
int __fastcall Function_2065ddc(int a1)
{
  Movement_MoveMovement(a1, 1, 2, 5);
  return 1;
}

//----- (02065DEC) --------------------------------------------------------
int __fastcall Function_2065dec(int a1)
{
  Movement_MoveMovement(a1, 2, 2, 5);
  return 1;
}

//----- (02065DFC) --------------------------------------------------------
int __fastcall Function_2065dfc(int a1)
{
  Movement_MoveMovement(a1, 3, 2, 5);
  return 1;
}

//----- (02065E0C) --------------------------------------------------------
int __fastcall Function_2065e0c(int a1, int a2, int a3, char a4, ushort a5, char a6, short a7, int a8)
{
  int v8
  uint *v9
  int v10
  char v11
  int *v12
  int result

  v8 = a2;
  v9 = (uint *)a1;
  v10 = a3;
  v11 = a4;
  v12 = GetSpriteAdrf8AndClearMem(a1, 16);
  *((uchar *)v12 + 12) = v8;
  *v12 = v10;
  *((uchar *)v12 + 13) = v11;
  *((uchar *)v12 + 14) = a5;
  *((uchar *)v12 + 15) = a6;
  *((ushort *)v12 + 4) = a7;
  if ( v10 )
    MoveSpriteForWalk((int)v9, v8);
  else
    CopySpritePositionsFromOldToNew((int)v9);
  SetSpriteFlags(v9, 65540);
  ChangeBothSpriteFaceDirections(v9, v8);
  SetSpritea0((int)v9, a5);
  IncreaseSpriteMovementState((int)v9);
  result = a8;
  if ( a8 )
    result = Function_2005748((ushort)a8);
  return result;
}

//----- (02065E7C) --------------------------------------------------------
int __fastcall Function_2065e7c(int a1, int a2, int a3, char a4, ushort a5, char a6, short a7)
{
  return Function_2065e0c(a1, a2, a3, a4, a5, a6, a7, 1547);
}

//----- (02065EA0) --------------------------------------------------------
int __fastcall Movement_ContinueJumping(int a1, int a2, int a3, int a4)
{
  uint *v4
  int v5
  int v6
  int v7
  int v8
  int v9
  int v10
  int v11
  uint v12
  int v13
  int v15
  int v16
  int v17
  int v18
  int v19
  int v20
  int v21

  v21 = a4;
  v4 = (uint *)a1;
  v5 = GetSpriteAdrf8(a1);
  v7 = v5;
  if ( *(uint *)v5 )
  {
    Movement_AddDeltaPositionToSprite70(v4, *(char *)(v5 + 12), *(uint *)v5, v6);
    Function_20642f8(v4, v8, v9, v10);
    if ( *(uint *)(v7 + 4) >= 0x10000 )
    {
      *(uint *)(v7 + 4) = 0;
      MoveSpriteForWalk((int)v4, *(char *)(v7 + 12));
      SetSpriteFlags(v4, 4);
    }
    v11 = *(uint *)v7;
    if ( *(uint *)v7 < 0 )
      v11 = -v11;
    *(uint *)(v7 + 4) += v11;
  }
  *(ushort *)(v7 + 10) += *(ushort *)(v7 + 8);
  if ( *(ushort *)(v7 + 10) > 0xF00u )
    *(ushort *)(v7 + 10) = 3840;
  v12 = (uint)*(ushort *)(v7 + 10) >> 8 << 16;
  v13 = (int)*(&Unknown_2100b84 + *(char *)(v7 + 15));
  v18 = 0;
  v19 = *(uint *)(v13 + (v12 >> 14));
  v20 = 0;
  Function_2063088(v4, &v18);
  if ( (char)--*(uchar *)(v7 + 13) > 0 )
    return 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  Function_2063088(v4, &v15);
  SetSpriteFlags(v4, 131112);
  CopySpritePositionsFromOldToNew((int)v4);
  Function_2062b68((int)v4);
  SetSpritea0((int)v4, 0);
  IncreaseSpriteMovementState((int)v4);
  Function_2005748(0x647u);
  return 1;
}

//----- (02065F88) --------------------------------------------------------
int __fastcall Movement_JumpFacingUpSlow(int a1)
{
  Function_2065e7c(a1, 0, 0, 16, 2u, 0, 256);
  return 1;
}

//----- (02065FA8) --------------------------------------------------------
int __fastcall Movement_JumpFacingDownSlow(int a1)
{
  Function_2065e7c(a1, 1, 0, 16, 2u, 0, 256);
  return 1;
}

//----- (02065FC8) --------------------------------------------------------
int __fastcall Movement_JumpFacingLeftSlow(int a1)
{
  Function_2065e7c(a1, 2, 0, 16, 2u, 0, 256);
  return 1;
}

//----- (02065FE8) --------------------------------------------------------
int __fastcall Movement_JumpFacingRightSlow(int a1)
{
  Function_2065e7c(a1, 3, 0, 16, 2u, 0, 256);
  return 1;
}

//----- (02066008) --------------------------------------------------------
int __fastcall Movement_JumpFacingUp(int a1)
{
  Function_2065e7c(a1, 0, 0, 8, 3u, 0, 512);
  return 1;
}

//----- (02066028) --------------------------------------------------------
int __fastcall Movement_JumpFacingDown(int a1)
{
  Function_2065e7c(a1, 1, 0, 8, 3u, 0, 512);
  return 1;
}

//----- (02066048) --------------------------------------------------------
int __fastcall Movement_JumpFacingLeft(int a1)
{
  Function_2065e7c(a1, 2, 0, 8, 3u, 0, 512);
  return 1;
}

//----- (02066068) --------------------------------------------------------
int __fastcall Movement_JumpFacingRight(int a1)
{
  Function_2065e7c(a1, 3, 0, 8, 3u, 0, 512);
  return 1;
}

//----- (02066088) --------------------------------------------------------
int __fastcall Movement_JumpUpOne(int a1)
{
  Function_2065e7c(a1, 0, 0x2000, 8, 3u, 0, 512);
  return 1;
}

//----- (020660A8) --------------------------------------------------------
int __fastcall Movement_JumpDownOne(int a1)
{
  Function_2065e7c(a1, 1, 0x2000, 8, 3u, 0, 512);
  return 1;
}

//----- (020660CC) --------------------------------------------------------
int __fastcall Movement_JumpLeftOne(int a1)
{
  Function_2065e7c(a1, 2, 0x2000, 8, 3u, 0, 512);
  return 1;
}

//----- (020660F0) --------------------------------------------------------
int __fastcall Movement_JumpRightOne(int a1)
{
  Function_2065e7c(a1, 3, 0x2000, 8, 3u, 0, 512);
  return 1;
}

//----- (02066110) --------------------------------------------------------
int __fastcall Movement_JumpUpTwo(int a1)
{
  Function_2065e7c(a1, 0, 0x2000, 16, 3u, 0, 256);
  return 1;
}

//----- (02066130) --------------------------------------------------------
int __fastcall Movement_JumpDownTwo(int a1)
{
  Function_2065e7c(a1, 1, 0x2000, 16, 3u, 0, 256);
  return 1;
}

//----- (02066150) --------------------------------------------------------
int __fastcall Movement_JumpLeftTwo(int a1)
{
  Function_2065e7c(a1, 2, 0x2000, 16, 3u, 0, 256);
  return 1;
}

//----- (02066170) --------------------------------------------------------
int __fastcall Movement_JumpRightTwo(int a1)
{
  Function_2065e7c(a1, 3, 0x2000, 16, 3u, 0, 256);
  return 1;
}

//----- (02066194) --------------------------------------------------------
int __fastcall Movement_PauseJumpLeftOne(int a1)
{
  Function_2065e7c(a1, 2, 4096, 16, 9u, 0, 240);
  return 1;
}

//----- (020661B4) --------------------------------------------------------
int __fastcall Movement_PauseJumpRightOne(int a1)
{
  Function_2065e7c(a1, 3, 4096, 16, 9u, 0, 240);
  return 1;
}

//----- (020661D8) --------------------------------------------------------
int __fastcall Movement_PauseJumpLeftTwo(int a1)
{
  Function_2065e7c(a1, 2, 0x4000, 12, 0xAu, 0, 320);
  return 1;
}

//----- (020661F8) --------------------------------------------------------
int __fastcall Movement_PauseJumpRightTwo(int a1)
{
  Function_2065e7c(a1, 3, 0x4000, 12, 0xAu, 0, 320);
  return 1;
}

//----- (0206621C) --------------------------------------------------------
int __fastcall Function_206621c(int a1)
{
  Function_2065e0c(a1, 0, 0x2000, 24, 3u, 0, 160, 0);
  return 1;
}

//----- (02066240) --------------------------------------------------------
int __fastcall Function_2066240(int a1)
{
  Function_2065e0c(a1, 1, 0x2000, 24, 3u, 0, 160, 0);
  return 1;
}

//----- (02066264) --------------------------------------------------------
int __fastcall Function_2066264(int a1)
{
  Function_2065e0c(a1, 2, 0x2000, 24, 3u, 0, 160, 0);
  return 1;
}

//----- (02066288) --------------------------------------------------------
int __fastcall Function_2066288(int a1)
{
  Function_2065e0c(a1, 3, 0x2000, 24, 3u, 0, 160, 0);
  return 1;
}

//----- (020662AC) --------------------------------------------------------
uint *__fastcall Function_20662ac(int a1, int a2)
{
  int v2

  v2 = a1;
  *GetSpriteAdrf8AndClearMem(a1, 4) = a2;
  return IncreaseSpriteMovementState(v2);
}

//----- (020662C4) --------------------------------------------------------
int __fastcall Function_20662c4(int a1)
{
  int v1
  uint *v2
  int result

  v1 = a1;
  v2 = (uint *)GetSpriteAdrf8(a1);
  if ( *v2 )
  {
    --*v2;
    result = 0;
  }
  else
  {
    IncreaseSpriteMovementState(v1);
    result = 1;
  }
  return result;
}

//----- (020662E4) --------------------------------------------------------
int __fastcall Function_20662e4(int a1)
{
  Function_20662ac(a1, 1);
  return 1;
}

//----- (020662F0) --------------------------------------------------------
int __fastcall Function_20662f0(int a1)
{
  Function_20662ac(a1, 2);
  return 1;
}

//----- (020662FC) --------------------------------------------------------
int __fastcall Function_20662fc(int a1)
{
  Function_20662ac(a1, 4);
  return 1;
}

//----- (02066308) --------------------------------------------------------
int __fastcall Function_2066308(int a1)
{
  Function_20662ac(a1, 8);
  return 1;
}

//----- (02066314) --------------------------------------------------------
int __fastcall Function_2066314(int a1)
{
  Function_20662ac(a1, 15);
  return 1;
}

//----- (02066320) --------------------------------------------------------
int __fastcall Function_2066320(int a1)
{
  Function_20662ac(a1, 16);
  return 1;
}

//----- (0206632C) --------------------------------------------------------
int __fastcall Function_206632c(int a1)
{
  Function_20662ac(a1, 32);
  return 1;
}

//----- (02066338) --------------------------------------------------------
int __fastcall Function_2066338(int a1)
{
  int v1

  v1 = a1;
  GetSpriteAdrf8AndClearMem(a1, 8)[1] = 0x10000;
  SetSpritea0(v1, 0);
  IncreaseSpriteMovementState(v1);
  return 1;
}

//----- (0206635C) --------------------------------------------------------
int __fastcall Function_206635c(int a1)
{
  uint *v1
  int *v2
  int v4
  int v5
  int v6

  v1 = (uint *)a1;
  v2 = (int *)GetSpriteAdrf8(a1);
  *v2 += v2[1];
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v5 = *v2;
  Function_2063088(v1, &v4);
  if ( *v2 / 0x8000 < 40 )
    return 0;
  IncreaseSpriteMovementState((int)v1);
  return 1;
}

//----- (020663A4) --------------------------------------------------------
int __fastcall Function_20663a4(int a1)
{
  int v1
  int *v2

  v1 = a1;
  v2 = GetSpriteAdrf8AndClearMem(a1, 8);
  *v2 = 1310720;
  v2[1] = -65536;
  SetSpritea0(v1, 0);
  IncreaseSpriteMovementState(v1);
  return 1;
}

//----- (020663D0) --------------------------------------------------------
int __fastcall Function_20663d0(int a1)
{
  uint *v1
  int *v2
  int *v3
  int v4
  int v6
  int v7
  int v8

  v1 = (uint *)a1;
  v2 = (int *)GetSpriteAdrf8(a1);
  v3 = v2;
  v4 = *v2 + v2[1];
  *v3 = v4;
  if ( v4 < 0 )
    *v3 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v7 = *v3;
  Function_2063088(v1, &v6);
  if ( *v3 > 0 )
    return 0;
  IncreaseSpriteMovementState((int)v1);
  return 1;
}

//----- (02066418) --------------------------------------------------------
int __fastcall Movement_WaitDisappear(uint *a1)
{
  uint *v1

  v1 = a1;
  SetSpriteFlags(a1, 512);
  IncreaseSpriteMovementState((int)v1);
  return 1;
}

//----- (02066430) --------------------------------------------------------
int __fastcall Function_2066430(uint *a1)
{
  uint *v1

  v1 = a1;
  UnsetSpriteFlags(a1, 512);
  IncreaseSpriteMovementState((int)v1);
  return 1;
}

//----- (02066448) --------------------------------------------------------
int __fastcall Function_2066448(uint *a1)
{
  uint *v1

  v1 = a1;
  SetSpriteFlags(a1, 128);
  IncreaseSpriteMovementState((int)v1);
  return 1;
}

//----- (0206645C) --------------------------------------------------------
int __fastcall Function_206645c(uint *a1)
{
  uint *v1

  v1 = a1;
  UnsetSpriteFlags(a1, 128);
  IncreaseSpriteMovementState((int)v1);
  return 1;
}

//----- (02066470) --------------------------------------------------------
int __fastcall Function_2066470(uint *a1)
{
  uint *v1

  v1 = a1;
  SetSpriteFlags(a1, 256);
  IncreaseSpriteMovementState((int)v1);
  return 1;
}

//----- (02066488) --------------------------------------------------------
int __fastcall Function_2066488(uint *a1)
{
  uint *v1

  v1 = a1;
  UnsetSpriteFlags(a1, 256);
  IncreaseSpriteMovementState((int)v1);
  return 1;
}

//----- (020664A0) --------------------------------------------------------
uint *__fastcall Function_20664a0(int a1, int a2, int a3)
{
  int v3
  int v4
  int v5
  int *v6

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = GetSpriteAdrf8AndClearMem(a1, 8);
  *v6 = v3;
  v6[1] = ((int (__fastcall *)(int, int, int, int))dword_21F5D8C[0])(v4, v3, 1, v5);
  return IncreaseSpriteMovementState(v4);
}

//----- (020664C8) --------------------------------------------------------
int __fastcall Movement_ContinueSpeechBubble(int a1)
{
  int v1
  int v2

  v1 = a1;
  v2 = GetSpriteAdrf8(a1);
  if ( ((int (__fastcall *)(uint))dword_21F5C4C[0])(*(uint *)(v2 + 4)) != 1 )
    return 0;
  Function_207136c(*(int **)(v2 + 4));
  IncreaseSpriteMovementState(v1);
  return 1;
}

//----- (020664F0) --------------------------------------------------------
int __fastcall Movement_Exclamation(int a1)
{
  Function_20664a0(a1, 0, 0);
  return 0;
}

//----- (02066500) --------------------------------------------------------
int __fastcall Function_2066500(int a1)
{
  Function_20664a0(a1, 1, 0);
  return 0;
}

//----- (02066510) --------------------------------------------------------
int __fastcall Function_2066510(int a1)
{
  Function_20664a0(a1, 0, 1);
  return 0;
}

//----- (02066520) --------------------------------------------------------
uint *__fastcall Function_2066520(int a1, int a2, short a3, int a4)
{
  int v4
  uint *v5
  short v6
  int v7
  int *v8

  v4 = a2;
  v5 = (uint *)a1;
  v6 = a3;
  v7 = a4;
  v8 = GetSpriteAdrf8AndClearMem(a1, 8);
  *(ushort *)v8 = v4;
  *((ushort *)v8 + 1) = v7;
  *((ushort *)v8 + 2) = v6;
  MoveSpriteForWalk((int)v5, v4);
  ChangeBothSpriteFaceDirections(v5, v4);
  SetSpritea0((int)v5, v7);
  SetSpriteFlags(v5, 4);
  return IncreaseSpriteMovementState((int)v5);
}

//----- (02066560) --------------------------------------------------------
int __fastcall Function_2066560(int a1, int a2)
{
  uint *v2
  int v3
  short *v4
  int v5
  int v6
  int v7
  int v8

  v2 = (uint *)a1;
  v3 = a2;
  v4 = (short *)GetSpriteAdrf8(a1);
  Movement_AddDeltaPositionToSprite70(v2, *v4, *(uint *)(v3 + 4 * v4[3]), v5);
  Function_20642f8(v2, v6, v7, v8);
  if ( ++v4[3] < v4[2] )
    return 0;
  SetSpriteFlags(v2, 40);
  CopySpritePositionsFromOldToNew((int)v2);
  Function_2062b68((int)v2);
  SetSpritea0((int)v2, 0);
  IncreaseSpriteMovementState((int)v2);
  return 1;
}

//----- (020665C0) --------------------------------------------------------
int __fastcall Movement_PauseWalkUpSlow(int a1)
{
  Function_2066520(a1, 0, 6, 6);
  return 1;
}

//----- (020665D0) --------------------------------------------------------
int __fastcall Movement_PauseWalkDownSlow(int a1)
{
  Function_2066520(a1, 1, 6, 6);
  return 1;
}

//----- (020665E0) --------------------------------------------------------
int __fastcall Movement_PauseWalkLeftSlow(int a1)
{
  Function_2066520(a1, 2, 6, 6);
  return 1;
}

//----- (020665F0) --------------------------------------------------------
int __fastcall Movement_PauseWalkRightSlow(int a1)
{
  Function_2066520(a1, 3, 6, 6);
  return 1;
}

//----- (02066600) --------------------------------------------------------
BOOL __fastcall Movement_ContinuePauseWalkingSlow(int a1)
{
  return Function_2066560(a1, (int)Unknown_20eee6c) == 1;
}

//----- (02066618) --------------------------------------------------------
int __fastcall Movement_PauseWalkUp(int a1)
{
  Function_2066520(a1, 0, 3, 7);
  return 1;
}

//----- (02066628) --------------------------------------------------------
int __fastcall Movement_PauseWalkDown(int a1)
{
  Function_2066520(a1, 1, 3, 7);
  return 1;
}

//----- (02066638) --------------------------------------------------------
int __fastcall Movement_PauseWalkLeft(int a1)
{
  Function_2066520(a1, 2, 3, 7);
  return 1;
}

//----- (02066648) --------------------------------------------------------
int __fastcall Movement_PauseWalkRight(int a1)
{
  Function_2066520(a1, 3, 3, 7);
  return 1;
}

//----- (02066658) --------------------------------------------------------
BOOL __fastcall Movement_ContinuePauseWalking(int a1)
{
  return Function_2066560(a1, (int)dword_20EECEC) == 1;
}

//----- (02066670) --------------------------------------------------------
int __fastcall Function_2066670(int a1)
{
  Function_2066520(a1, 0, 7, 8);
  return 1;
}

//----- (02066680) --------------------------------------------------------
int __fastcall Function_2066680(int a1)
{
  Function_2066520(a1, 1, 7, 8);
  return 1;
}

//----- (02066690) --------------------------------------------------------
int __fastcall Function_2066690(int a1)
{
  Function_2066520(a1, 2, 7, 8);
  return 1;
}

//----- (020666A0) --------------------------------------------------------
int __fastcall Function_20666a0(int a1)
{
  Function_2066520(a1, 3, 7, 8);
  return 1;
}

//----- (020666B0) --------------------------------------------------------
BOOL __fastcall Function_20666b0(int a1)
{
  return Function_2066560(a1, (int)Unknown_20eee84) == 1;
}

//----- (020666C8) --------------------------------------------------------
int __fastcall Function_20666c8(int a1)
{
  int v1

  v1 = a1;
  GetSpriteAdrf8AndClearMem(a1, 4);
  SetSpritea0(v1, 9);
  IncreaseSpriteMovementState(v1);
  return 0;
}

//----- (020666E4) --------------------------------------------------------
int __fastcall Function_20666e4(int a1)
{
  uint *v1
  int *v2
  int v3

  v1 = (uint *)a1;
  v2 = (int *)GetSpriteAdrf8(a1);
  v3 = *v2 + 1;
  *v2 = v3;
  if ( v3 >= 8 )
  {
    ChangeSpriteFaceDirection_WithCheck(v1, 1);
    SetSpritea0((int)v1, 0);
    IncreaseSpriteMovementState((int)v1);
  }
  return 0;
}

//----- (02066710) --------------------------------------------------------
int __fastcall Function_2066710(int a1, int a2, int a3, int a4)
{
  uint *v4
  int *v5
  int v7
  int v8
  int v9
  int v10

  v10 = a4;
  v4 = (uint *)a1;
  GetSpriteAdrf8AndClearMem(a1, 4);
  v5 = (int *)Function_206a224((int)v4);
  if ( v5 )
    Function_207136c(v5);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  Function_2063088(v4, &v7);
  ((void (__fastcall *)(uint *))dword_21F3F10[0])(v4);
  SetSpriteFlags(v4, 65540);
  UnsetSpriteFlags(v4, 0x100000);
  IncreaseSpriteMovementState((int)v4);
  return 0;
}

//----- (02066764) --------------------------------------------------------
int __fastcall Function_2066764(int a1)
{
  uint *v1
  uint *v2
  uint v3
  int v5
  int v6
  int v7

  v1 = (uint *)a1;
  v2 = (uint *)GetSpriteAdrf8(a1);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v6 = Unknown_20eee84[*v2 + 7];
  Function_2063088(v1, &v5);
  v3 = *v2 + 2;
  *v2 = v3;
  if ( v3 < 0x10 )
    return 0;
  v6 = 0;
  Function_2063088(v1, &v5);
  SetSpriteFlags(v1, 131112);
  Function_206a230((int)v1);
  IncreaseSpriteMovementState((int)v1);
  return 1;
}

//----- (020667CC) --------------------------------------------------------
int __fastcall Function_20667cc(int a1)
{
  int v1

  v1 = a1;
  GetSpriteAdrf8AndClearMem(a1, 4);
  SetSpritea0(v1, 0);
  IncreaseSpriteMovementState(v1);
  return 0;
}

//----- (020667E8) --------------------------------------------------------
int __fastcall Function_20667e8(int a1)
{
  int v1

  v1 = a1;
  GetSpriteAdrf8AndClearMem(a1, 4);
  SetSpritea0(v1, 1);
  IncreaseSpriteMovementState(v1);
  return 0;
}

//----- (02066804) --------------------------------------------------------
int __fastcall Function_2066804(int a1)
{
  int v1
  uint *v2
  uint v3

  v1 = a1;
  v2 = (uint *)GetSpriteAdrf8(a1);
  v3 = *v2 + 1;
  *v2 = v3;
  if ( v3 < 0x15 )
    return 0;
  IncreaseSpriteMovementState(v1);
  return 1;
}

//----- (02066824) --------------------------------------------------------
uint *__fastcall Function_2066824(int a1, uint *a2, int a3, int a4, int a5, uchar a6)
{
  uint *v6
  uint *v7
  int v8
  int v9
  int *v10
  uint *v11
  int v12
  int v13
  int v14
  int v15
  int v16
  int v17

  v6 = a2;
  v7 = (uint *)a1;
  v8 = a3;
  v9 = a4;
  v10 = GetSpriteAdrf8AndClearMem(a1, 16);
  *v10 = a5;
  v11 = v10 + 1;
  v12 = v6[1];
  *v11 = *v6;
  v11[1] = v12;
  v10[3] = v6[2];
  ChangeSpriteFaceDirection_WithCheck(v7, v8);
  ChangeSpriteFace2Direction((int)v7, v9);
  SetSpritea0((int)v7, a6);
  SetSpriteFlag_4(v7);
  v13 = LoadSpritePositionX((int)v7);
  SetSpriteX2((int)v7, v13);
  v14 = LoadSpritePositionZ((int)v7);
  SetSpriteZ2((int)v7, v14);
  v15 = LoadSpritePositionY((int)v7);
  SetSpriteY2((int)v7, v15);
  if ( *v6 >= 0 )
  {
    if ( *v6 > 0 )
      AddSpritePositionX((int)v7, 1);
  }
  else
  {
    AddSpritePositionX((int)v7, -1);
  }
  v16 = v6[1];
  if ( v16 >= 0 )
  {
    if ( v16 > 0 )
      AddSpritePositionZ((int)v7, 2);
  }
  else
  {
    AddSpritePositionZ((int)v7, -2);
  }
  v17 = v6[2];
  if ( v17 >= 0 )
  {
    if ( v17 > 0 )
      AddSpritePositionY((int)v7, 1);
  }
  else
  {
    AddSpritePositionY((int)v7, -1);
  }
  return IncreaseSpriteMovementState((int)v7);
}

//----- (020668EC) --------------------------------------------------------
int __fastcall Function_20668ec(int a1)
{
  uint *v1
  int *v2
  int v3

  v1 = (uint *)a1;
  v2 = (int *)GetSpriteAdrf8(a1);
  Function_2064270(v1, v2 + 1);
  v3 = *v2 - 1;
  *v2 = v3;
  if ( v3 > 0 )
    return 0;
  SetSpriteFlags(v1, 40);
  CopySpritePositionsFromOldToNew((int)v1);
  Function_2062b68((int)v1);
  SetSpritea0((int)v1, 0);
  IncreaseSpriteMovementState((int)v1);
  return 1;
}

//----- (02066934) --------------------------------------------------------
int __fastcall Function_2066934(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0x2000;
  v4 = 0;
  Function_2066824(a1, &v2, 2, 0, 8, 3u);
  return 1;
}

//----- (02066968) --------------------------------------------------------
int __fastcall Function_2066968(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = -8192;
  v4 = 0;
  Function_2066824(a1, &v2, 3, 1, 8, 3u);
  return 1;
}

//----- (02066998) --------------------------------------------------------
int __fastcall Function_2066998(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = 0x2000;
  Function_2066824(a1, &v2, 1, 2, 8, 3u);
  return 1;
}

//----- (020669CC) --------------------------------------------------------
int __fastcall Function_20669cc(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = -8192;
  Function_2066824(a1, &v2, 0, 3, 8, 3u);
  return 1;
}

//----- (020669FC) --------------------------------------------------------
int __fastcall Function_20669fc(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0x2000;
  v4 = 0;
  Function_2066824(a1, &v2, 3, 0, 8, 3u);
  return 1;
}

//----- (02066A2C) --------------------------------------------------------
int __fastcall Function_2066a2c(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = -8192;
  v4 = 0;
  Function_2066824(a1, &v2, 2, 1, 8, 3u);
  return 1;
}

//----- (02066A60) --------------------------------------------------------
int __fastcall Function_2066a60(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = -8192;
  Function_2066824(a1, &v2, 0, 2, 8, 3u);
  return 1;
}

//----- (02066A94) --------------------------------------------------------
int __fastcall Function_2066a94(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = 0x2000;
  Function_2066824(a1, &v2, 1, 2, 8, 3u);
  return 1;
}

//----- (02066AC8) --------------------------------------------------------
int __fastcall Function_2066ac8(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = 0x2000;
  Function_2066824(a1, &v2, 1, 0, 8, 3u);
  return 1;
}

//----- (02066AFC) --------------------------------------------------------
int __fastcall Function_2066afc(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = -8192;
  Function_2066824(a1, &v2, 0, 1, 8, 3u);
  return 1;
}

//----- (02066B30) --------------------------------------------------------
int __fastcall Function_2066b30(int a1)
{
  int v2
  int v3
  int v4

  v2 = -8192;
  v3 = 0;
  v4 = 0;
  Function_2066824(a1, &v2, 3, 2, 8, 3u);
  return 1;
}

//----- (02066B60) --------------------------------------------------------
int __fastcall Function_2066b60(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0x2000;
  v3 = 0;
  v4 = 0;
  Function_2066824(a1, &v2, 2, 3, 8, 3u);
  return 1;
}

//----- (02066B90) --------------------------------------------------------
int __fastcall Function_2066b90(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = 0x4000;
  Function_2066824(a1, &v2, 1, 0, 4, 4u);
  return 1;
}

//----- (02066BC0) --------------------------------------------------------
int __fastcall Function_2066bc0(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = -16384;
  Function_2066824(a1, &v2, 0, 1, 4, 4u);
  return 1;
}

//----- (02066BF0) --------------------------------------------------------
int __fastcall Function_2066bf0(int a1)
{
  int v2
  int v3
  int v4

  v2 = -16384;
  v3 = 0;
  v4 = 0;
  Function_2066824(a1, &v2, 3, 2, 4, 4u);
  return 1;
}

//----- (02066C20) --------------------------------------------------------
int __fastcall Function_2066c20(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0x4000;
  v3 = 0;
  v4 = 0;
  Function_2066824(a1, &v2, 2, 3, 4, 4u);
  return 1;
}

//----- (02066C50) --------------------------------------------------------
int __fastcall Function_2066c50(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = 0x8000;
  Function_2066824(a1, &v2, 1, 0, 2, 5u);
  return 1;
}

//----- (02066C84) --------------------------------------------------------
int __fastcall Function_2066c84(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = -32768;
  Function_2066824(a1, &v2, 0, 1, 2, 5u);
  return 1;
}

//----- (02066CB8) --------------------------------------------------------
int __fastcall Function_2066cb8(int a1)
{
  int v2
  int v3
  int v4

  v2 = -32768;
  v3 = 0;
  v4 = 0;
  Function_2066824(a1, &v2, 3, 2, 2, 5u);
  return 1;
}

//----- (02066CE8) --------------------------------------------------------
int __fastcall Function_2066ce8(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0x8000;
  v3 = 0;
  v4 = 0;
  Function_2066824(a1, &v2, 2, 3, 2, 5u);
  return 1;
}

//----- (02066D18) --------------------------------------------------------
int __fastcall Function_2066d18(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0x4000;
  v4 = 0;
  Function_2066824(a1, &v2, 2, 0, 4, 9u);
  return 1;
}

//----- (02066D4C) --------------------------------------------------------
int __fastcall Function_2066d4c(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = -16384;
  v4 = 0;
  Function_2066824(a1, &v2, 3, 1, 4, 9u);
  return 1;
}

//----- (02066D80) --------------------------------------------------------
int __fastcall Function_2066d80(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = 0x4000;
  Function_2066824(a1, &v2, 1, 2, 4, 9u);
  return 1;
}

//----- (02066DB4) --------------------------------------------------------
int __fastcall Function_2066db4(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = -16384;
  Function_2066824(a1, &v2, 0, 3, 4, 9u);
  return 1;
}

//----- (02066DE8) --------------------------------------------------------
int __fastcall Function_2066de8(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0x4000;
  v4 = 0;
  Function_2066824(a1, &v2, 3, 0, 4, 9u);
  return 1;
}

//----- (02066E1C) --------------------------------------------------------
int __fastcall Function_2066e1c(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = -16384;
  v4 = 0;
  Function_2066824(a1, &v2, 2, 1, 4, 9u);
  return 1;
}

//----- (02066E50) --------------------------------------------------------
int __fastcall Function_2066e50(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = -16384;
  Function_2066824(a1, &v2, 0, 2, 4, 9u);
  return 1;
}

//----- (02066E84) --------------------------------------------------------
int __fastcall Function_2066e84(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = 0x4000;
  Function_2066824(a1, &v2, 1, 2, 4, 9u);
  return 1;
}

//----- (02066EB8) --------------------------------------------------------
int __fastcall Function_2066eb8(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = 0x4000;
  Function_2066824(a1, &v2, 1, 0, 4, 9u);
  return 1;
}

//----- (02066EEC) --------------------------------------------------------
int __fastcall Function_2066eec(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0;
  v3 = 0;
  v4 = -16384;
  Function_2066824(a1, &v2, 0, 1, 4, 9u);
  return 1;
}

//----- (02066F20) --------------------------------------------------------
int __fastcall Function_2066f20(int a1)
{
  int v2
  int v3
  int v4

  v2 = -16384;
  v3 = 0;
  v4 = 0;
  Function_2066824(a1, &v2, 3, 2, 4, 9u);
  return 1;
}

//----- (02066F54) --------------------------------------------------------
int __fastcall Function_2066f54(int a1)
{
  int v2
  int v3
  int v4

  v2 = 0x4000;
  v3 = 0;
  v4 = 0;
  Function_2066824(a1, &v2, 2, 3, 4, 9u);
  return 1;
}

//----- (02066F88) --------------------------------------------------------
uint *__fastcall Function_2066f88(int a1, int a2, int a3, int a4, char a5, uchar a6, uchar a7, char a8, char a9)
{
  int v9
  uint *v10
  int v11
  int v12
  int v13
  int *v14
  int v15
  int v16
  int v17

  v9 = a2;
  v10 = (uint *)a1;
  v11 = a3;
  v12 = a4;
  v13 = 1;
  v14 = GetSpriteAdrf8AndClearMem(a1, 16);
  *(uchar *)v14 = a5;
  v14[1] = v9;
  *((uchar *)v14 + 2) = a7;
  *((uchar *)v14 + 1) = a8;
  *((uchar *)v14 + 3) = a9;
  *((ushort *)v14 + 7) = s32_div_f(0x1000u, *(uchar *)v14);
  ChangeSpriteFaceDirection_WithCheck(v10, v11);
  ChangeSpriteFace2Direction((int)v10, v12);
  SetSpritea0((int)v10, a6);
  SetSpriteFlag_4(v10);
  v15 = LoadSpritePositionX((int)v10);
  SetSpriteX2((int)v10, v15);
  v16 = LoadSpritePositionZ((int)v10);
  SetSpriteZ2((int)v10, v16);
  v17 = LoadSpritePositionY((int)v10);
  SetSpriteY2((int)v10, v17);
  if ( a7 > 2u )
    ErrorHandler();
  if ( v9 )
  {
    if ( a7 )
    {
      if ( a7 == 1 )
      {
        if ( v9 < 0 )
          v13 = -1;
        AddSpritePositionZ((int)v10, 2 * v13);
      }
      else if ( a7 == 2 )
      {
        if ( v9 < 0 )
          v13 = -1;
        AddSpritePositionY((int)v10, v13);
      }
    }
    else
    {
      if ( v9 < 0 )
        v13 = -1;
      AddSpritePositionX((int)v10, v13);
    }
  }
  return IncreaseSpriteMovementState((int)v10);
}

//----- (02067068) --------------------------------------------------------
int __fastcall Function_2067068(int a1)
{
  uint *v1
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
  int v13
  int v15
  int v16
  int v17
  int v18
  int v19
  int v20
  int v21
  int v22
  int v23

  v1 = (uint *)a1;
  v2 = GetSpriteAdrf8(a1);
  CopySprite70Struct(v1, &v21);
  v3 = *(uchar *)(v2 + 2);
  if ( *(uchar *)(v2 + 2) )
  {
    if ( v3 == 1 )
    {
      v22 += *(uint *)(v2 + 4);
    }
    else if ( v3 == 2 )
    {
      v23 += *(uint *)(v2 + 4);
    }
  }
  else
  {
    v21 += *(uint *)(v2 + 4);
  }
  CopyToSprite70Struct(v1, &v21);
  v4 = *(uint *)(v2 + 4);
  if ( v4 < 0 )
    v4 = -v4;
  *(uint *)(v2 + 8) += v4;
  *(ushort *)(v2 + 12) += *(ushort *)(v2 + 14);
  if ( *(ushort *)(v2 + 12) > 0xF00u )
    *(ushort *)(v2 + 12) = 3840;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v5 = *(int *)((char *)&Unknown_20eee84[23] + (4 * ((uint)*(ushort *)(v2 + 12) >> 8) & 0x3FFFF));
  if ( *(uchar *)(v2 + 3) == 1 )
    v5 = -v5;
  v6 = *(uchar *)(v2 + 1);
  if ( *(uchar *)(v2 + 1) )
  {
    if ( v6 == 1 )
    {
      v19 = v5;
    }
    else if ( v6 == 2 )
    {
      v20 = v5;
    }
  }
  else
  {
    v18 = v5;
  }
  Function_2063088(v1, &v18);
  --*(uchar *)v2;
  v7 = *(uint *)(v2 + 8);
  if ( v7 >= 0x10000 && *(uchar *)v2 )
  {
    *(uint *)(v2 + 8) = v7 - 0x10000;
    v8 = 1;
    v9 = *(uint *)(v2 + 4);
    v10 = LoadSpritePositionX((int)v1);
    SetSpriteX2((int)v1, v10);
    v11 = LoadSpritePositionZ((int)v1);
    SetSpriteZ2((int)v1, v11);
    v12 = LoadSpritePositionY((int)v1);
    SetSpriteY2((int)v1, v12);
    v13 = *(uchar *)(v2 + 2);
    if ( *(uchar *)(v2 + 2) )
    {
      if ( v13 == 1 )
      {
        if ( v9 < 0 )
          v8 = -1;
        AddSpritePositionZ((int)v1, 2 * v8);
      }
      else if ( v13 == 2 )
      {
        if ( v9 < 0 )
          v8 = -1;
        AddSpritePositionY((int)v1, v8);
      }
    }
    else
    {
      if ( v9 < 0 )
        v8 = -1;
      AddSpritePositionX((int)v1, v8);
    }
  }
  if ( *(uchar *)v2 )
    return 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  Function_2063088(v1, &v15);
  SetSpriteFlags(v1, 131112);
  CopySpritePositionsFromOldToNew((int)v1);
  Function_2062b68((int)v1);
  SetSpritea0((int)v1, 0);
  IncreaseSpriteMovementState((int)v1);
  Function_2005748(0x647u);
  return 1;
}