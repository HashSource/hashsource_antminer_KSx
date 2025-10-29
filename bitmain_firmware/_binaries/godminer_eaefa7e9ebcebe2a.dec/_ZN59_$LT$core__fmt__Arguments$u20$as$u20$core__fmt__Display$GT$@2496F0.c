int __fastcall <core::fmt::Arguments as core::fmt::Display>::fmt(_DWORD *a1, int *a2)
{
  int v2; // r12
  int v3; // r1
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // r8
  int v8; // lr
  _DWORD v10[6]; // [sp+0h] [bp-18h] BYREF

  v2 = *a2;
  v3 = a2[1];
  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  v7 = a1[4];
  v8 = a1[5];
  v10[0] = *a1;
  v10[1] = v4;
  v10[2] = v5;
  v10[3] = v6;
  v10[4] = v7;
  v10[5] = v8;
  return core::fmt::write(v2, v3, v10);
}
