int __fastcall <core::ffi::c_str::CStr as core::fmt::Debug>::fmt(int a1, int a2, int *a3)
{
  int v3; // r0
  int v4; // r3
  int v5; // r1
  _DWORD v7[2]; // [sp+0h] [bp-38h] BYREF
  _DWORD v8[2]; // [sp+8h] [bp-30h] BYREF
  char v9; // [sp+10h] [bp-28h]
  char v10; // [sp+17h] [bp-21h]
  _DWORD v11[6]; // [sp+20h] [bp-18h] BYREF

  v8[1] = a1;
  v7[1] = <core::slice::ascii::EscapeAscii as core::fmt::Display>::fmt;
  v3 = a2 + a1 - 1;
  v7[0] = v8;
  v4 = *a3;
  v5 = a3[1];
  v8[0] = v3;
  v11[5] = 1;
  v11[4] = v7;
  v10 = 0;
  v9 = 0;
  v11[0] = 0;
  v11[3] = 2;
  v11[2] = &off_2E2F8C;
  return core::fmt::write(v4, v5, v11);
}
