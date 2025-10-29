void __noreturn sub_1AE138()
{
  int v0; // r0
  _BYTE v1[8]; // [sp+4h] [bp-44h] BYREF
  _DWORD v2[6]; // [sp+Ch] [bp-3Ch] BYREF
  _DWORD v3[2]; // [sp+24h] [bp-24h] BYREF
  _DWORD v4[6]; // [sp+2Ch] [bp-1Ch] BYREF
  _BYTE v5[4]; // [sp+44h] [bp-4h] BYREF

  v2[3] = 2;
  v2[2] = &off_2DD6F8;
  v2[4] = v3;
  v2[5] = 1;
  v2[0] = 0;
  v3[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
  v3[0] = v4;
  v4[3] = 1;
  v4[4] = aRustc9eb3afe9e;
  v4[2] = &off_2DD798;
  v4[5] = 0;
  v4[0] = 0;
  sub_1D6424(v1, v5, v2);
  v0 = sub_1AEE00(v1);
  std::sys::unix::abort_internal(v0);
}
