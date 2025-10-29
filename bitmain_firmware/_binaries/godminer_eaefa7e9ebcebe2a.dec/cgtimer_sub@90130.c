int __fastcall cgtimer_sub(int *a1, int *a2, _DWORD *a3)
{
  int v3; // r3
  int result; // r0
  int v5; // r3
  int v6; // r1
  bool v7; // nf
  int v8; // r1
  int v9; // r3

  v3 = a1[1];
  result = *a1;
  v5 = v3 - a2[1];
  v6 = *a2;
  v7 = v5 < 0;
  a3[1] = v5;
  v8 = result - v6;
  v9 = v5 + (v5 < 0 ? 0xF4000 : 0);
  *a3 = v8;
  if ( v7 )
  {
    *a3 = v8 - 1;
    a3[1] = v9 + 576;
  }
  return result;
}
