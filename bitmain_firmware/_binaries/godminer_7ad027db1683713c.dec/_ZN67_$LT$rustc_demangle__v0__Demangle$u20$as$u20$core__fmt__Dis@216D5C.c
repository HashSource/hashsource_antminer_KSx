int __fastcall <rustc_demangle::v0::Demangle as core::fmt::Display>::fmt(int *a1, int a2)
{
  int v2; // r2
  int v3; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  v2 = *a1;
  v3 = a1[1];
  v5[4] = a2;
  v5[1] = v3;
  v5[2] = 0;
  v5[5] = 0;
  v5[3] = 0;
  v5[0] = v2;
  return sub_2191A4((int)v5, 1);
}
