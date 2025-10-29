void __noreturn sub_1B4E7C()
{
  _DWORD v0[2]; // [sp+4h] [bp-44h] BYREF
  int v1[6]; // [sp+Ch] [bp-3Ch] BYREF
  _DWORD v2[2]; // [sp+24h] [bp-24h] BYREF
  _DWORD v3[6]; // [sp+2Ch] [bp-1Ch] BYREF
  _BYTE v4[4]; // [sp+44h] [bp-4h] BYREF

  v1[3] = 2;
  v1[2] = (int)&off_2C96F8;
  v1[4] = (int)v2;
  v1[5] = 1;
  v1[0] = 0;
  v2[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
  v2[0] = v3;
  v3[3] = 1;
  v3[4] = aRustc9eb3afe9e;
  v3[2] = &off_2C9728;
  v3[5] = 0;
  v3[0] = 0;
  sub_1C4540(v0, (int)v4, v1);
  sub_19CF1C((int)v0);
  std::sys::unix::abort_internal();
}
