int __fastcall rustc_demangle::try_demangle(_DWORD *a1, char *a2, unsigned int a3)
{
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int *v7; // r4
  int result; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12[4]; // [sp+0h] [bp-20h] BYREF
  int v13; // [sp+10h] [bp-10h]
  int v14; // [sp+14h] [bp-Ch]
  int v15; // [sp+18h] [bp-8h]
  int v16; // [sp+1Ch] [bp-4h]

  rustc_demangle::demangle(v12, a2, a3);
  if ( v12[0] == 1 )
  {
    v4 = v12[1];
    v5 = v12[2];
    v6 = v12[3];
    *a1 = 1;
    a1[1] = v4;
    a1[2] = v5;
    a1[3] = v6;
    v7 = a1 + 4;
    result = v13;
    v9 = v14;
    v10 = v15;
    v11 = v16;
    *v7 = v13;
    v7[1] = v9;
    v7[2] = v10;
    v7[3] = v11;
  }
  else
  {
    *a1 = 2;
    return 2;
  }
  return result;
}
