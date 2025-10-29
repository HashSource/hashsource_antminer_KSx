int __fastcall <core::ffi::VaListImpl as core::fmt::Debug>::fmt(int a1, int *a2)
{
  int v2; // r3
  int v3; // r1
  _DWORD v5[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  v2 = *a2;
  v5[0] = a1;
  v5[1] = sub_24BD88;
  v3 = a2[1];
  v6[4] = v5;
  v6[5] = 1;
  v6[3] = 1;
  v6[0] = 0;
  v6[2] = &off_2E4014;
  return core::fmt::write(v2, v3, v6);
}
