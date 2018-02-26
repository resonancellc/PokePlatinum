//----- (0221F800) --------------------------------------------------------
int *__fastcall Function_221f800(int a1)
{
  int *result;

  if ( a1 == -1 )
    result = dword_221F96C;
  else
    result = (int *)*(&off_221FBD0 + a1);
  return result;
}

//----- (0221F81C) --------------------------------------------------------
int __fastcall Function_11_221f81c(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int *v7;

  v5 = a1;
  v6 = a4;
  v7 = Function_221f800(a2);
  return Function_2002fbc(v5, (int)v7, v6, 16 * a5 & 0xFFFF, 0x20u);
}

//----- (0221F840) --------------------------------------------------------
int __fastcall Function_11_221f840(uint a1)
{
  uint v1;
  int *v2;
  int v3;
  int v4;

  v1 = a1;
  v2 = (int *)malloc(a1, 18432);
  v3 = Function_2014014((int)Function_221f914, (int)Function_221f930, v2, 0x4800u, 1, v1);
  v4 = Function_2014784(v3);
  if ( v4 )
    Function_20206bc(4096, 3686400, v4);
  return v3;
}

//----- (0221F888) --------------------------------------------------------
int __fastcall Function_11_221f888(uint a1)
{
  uint v1;
  int *v2;
  int v4;
  int v5;

  v1 = a1;
  v2 = (int *)malloc(a1, 16896);
  if ( !v2 )
    return 0;
  v4 = Function_2014014((int)Function_221f914, (int)Function_221f930, v2, 0x4200u, 1, v1);
  v5 = Function_2014784(v4);
  if ( v5 )
    Function_20206bc(4096, 3686400, v5);
  return v4;
}

//----- (0221F8D8) --------------------------------------------------------
uint __fastcall Function_221f8d8(int a1)
{
  uint **v1;
  int v2;

  v1 = (uint **)a1;
  v2 = Function_2014730(a1);
  Function_201411c(v1);
  return free(v2);
}

//----- (0221F8F0) --------------------------------------------------------
int Function_11_221f8f0()
{
  int result;
  int v1;
  int v2;
  int v3;
  int v4;

  Call_G3X_Reset();
  result = Function_2014680();
  if ( result )
  {
    if ( Function_201469c() > 0 )
    {
      v1 = Call_G3X_Reset();
      Function_20a73c0(v1, v2, v3, v4);
    }
    result = Function_20146c0();
  }
  return result;
}

//----- (0221F914) --------------------------------------------------------
int Function_221f914()
{
  int v0;

  v0 = Function_20a5a2c();
  Function_20145b4(v0);
  return 8 * v0 & 0x7FFFF;
}

//----- (0221F930) --------------------------------------------------------
int Function_221f930()
{
  int v0;

  v0 = Function_20a5a3c();
  Function_20145f4(v0);
  return 8 * v0 & 0x7FFFF;
}

