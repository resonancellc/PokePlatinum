//----- (0201CCF0) --------------------------------------------------------
int __fastcall InitSingleTask(int a1, uint *a2)
{
  int v2
  int result

  *a2 = a1;
  v2 = a1 + 4;
  a2[2] = v2;
  a2[1] = v2;
  result = 0;
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  return result;
}

//----- (0201CD04) --------------------------------------------------------
int __fastcall InitAllTasksInTaskList(ushort *a1)
{
  ushort *v1
  int v2
  int v3
  int v4
  int v5
  int result

  v1 = a1;
  v2 = 0;
  if ( (int)*a1 > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      InitSingleTask((int)v1, (uint *)(*((uint *)v1 + 9) + v3));
      ++v2;
      v5 = *((uint *)v1 + 9) + v3;
      v3 += 28;
      *(uint *)(*((uint *)v1 + 8) + v4) = v5;
      v4 += 4;
    }
    while ( v2 < *v1 );
  }
  result = 0;
  v1[1] = 0;
  return result;
}

//----- (0201CD38) --------------------------------------------------------
int __fastcall GetAdrOfFreeTask(ushort *a1)
{
  int v1
  int v3

  v1 = a1[1];
  if ( v1 == *a1 )
    return 0;
  v3 = *(uint *)(*((uint *)a1 + 8) + 4 * v1);
  a1[1] = v1 + 1;
  return v3;
}

//----- (0201CD54) --------------------------------------------------------
int __fastcall ClearTaskStruct(int a1, uint *a2)
{
  if ( !*(ushort *)(a1 + 2) )
    return 0;
  *a2 = a1;
  a2[2] = a1 + 4;
  a2[1] = a1 + 4;
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  *(uint *)(*(uint *)(a1 + 32) + 4 * (ushort)--*(ushort *)(a1 + 2)) = a2;
  return 1;
}

//----- (0201CD80) --------------------------------------------------------
int __fastcall GetAllocSizeForTasks(int a1)
{
  return 32 * a1 + 52;
}

//----- (0201CD88) --------------------------------------------------------
int __fastcall InitTaskList(int a1, int a2)
{
  int v2
  int v3

  v2 = a1;
  v3 = a2;
  if ( !a2 )
    ErrorHandler();
  *(uint *)(v3 + 32) = v3 + 52;
  *(uint *)(v3 + 36) = v3 + 52 + 4 * v2;
  *(ushort *)v3 = v2;
  *(ushort *)(v3 + 2) = 0;
  *(uint *)(v3 + 40) = 0;
  InitTaskList2((ushort *)v3);
  return v3;
}

//----- (0201CDB4) --------------------------------------------------------
int __fastcall InitTaskList2(ushort *a1)
{
  ushort *v1
  int result

  v1 = a1;
  InitAllTasksInTaskList(a1);
  *((uint *)v1 + 1) = v1;
  *((uint *)v1 + 3) = v1 + 2;
  *((uint *)v1 + 2) = v1 + 2;
  *((uint *)v1 + 4) = 0;
  *((uint *)v1 + 5) = 0;
  *((uint *)v1 + 6) = 0;
  result = *((uint *)v1 + 3);
  *((uint *)v1 + 11) = result;
  return result;
}

//----- (0201CDD4) --------------------------------------------------------
int __fastcall RunTasks(uint *a1)
{
  uint *v1
  int result
  uint *v3
  uint *v4
  void (*v5)(void)
  int v6

  v1 = a1;
  result = a1[10];
  if ( !result )
  {
    v3 = (uint *)v1[3];
    for ( v1[11] = v3; v3 != v1 + 1; v1[11] = v3 )
    {
      v1[12] = v3[2];
      v4 = (uint *)v1[11];
      if ( v4[6] )
      {
        v4[6] = 0;
      }
      else
      {
        v5 = (void (*)(void))v4[5];
        if ( v5 )
        {
          v6 = v4[4];
          v5();
        }
      }
      v3 = (uint *)v1[12];
    }
    result = 0;
    v3[5] = 0;
  }
  return result;
}

//----- (0201CE14) --------------------------------------------------------
uint *__fastcall AddTaskToTaskList(int a1, int a2, int a3, uint a4)
{
  int v4
  uint *result

  v4 = a1;
  *(uint *)(a1 + 40) = 1;
  result = AddTask((ushort *)a1, a2, a3, a4);
  *(uint *)(v4 + 40) = 0;
  return result;
}

//----- (0201CE28) --------------------------------------------------------
uint *__fastcall AddTask(ushort *a1, int a2, int a3, uint a4)
{
  ushort *v4
  int v5
  int v6
  uint v7
  uint *result
  int v9
  ushort *v10

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  result = (uint *)GetAdrOfFreeTask(a1);
  if ( !result )
    return 0;
  result[3] = v7;
  result[4] = v6;
  result[5] = v5;
  v9 = *((uint *)v4 + 11);
  if ( *(uint *)(v9 + 20) )
    result[6] = *(uint *)(v9 + 12) <= v7;
  else
    result[6] = 0;
  v10 = (ushort *)*((uint *)v4 + 3);
  if ( v10 == v4 + 2 )
  {
LABEL_13:
    if ( *((ushort **)v4 + 12) == v4 + 2 )
      *((uint *)v4 + 12) = result;
    result[1] = *((uint *)v4 + 2);
    result[2] = v4 + 2;
    *(uint *)(*((uint *)v4 + 2) + 8) = result;
    *((uint *)v4 + 2) = result;
  }
  else
  {
    while ( *((uint *)v10 + 3) <= result[3] )
    {
      v10 = (ushort *)*((uint *)v10 + 2);
      if ( v10 == v4 + 2 )
        goto LABEL_13;
    }
    result[1] = *((uint *)v10 + 1);
    result[2] = v10;
    *(uint *)(*((uint *)v10 + 1) + 8) = result;
    *((uint *)v10 + 1) = result;
    if ( v10 == *((ushort **)v4 + 12) )
      *((uint *)v4 + 12) = result;
  }
  return result;
}