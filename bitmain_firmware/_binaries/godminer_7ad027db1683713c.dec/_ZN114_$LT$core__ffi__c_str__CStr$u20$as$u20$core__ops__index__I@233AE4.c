int __fastcall <core::ffi::c_str::CStr as core::ops::index::Index<core::ops::range::RangeFrom<usize>>>::index(
        int a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  unsigned int v5; // [sp+0h] [bp-30h] BYREF
  _DWORD v6[6]; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v7[4]; // [sp+1Ch] [bp-14h] BYREF
  unsigned int v8; // [sp+2Ch] [bp-4h] BYREF

  v5 = a3;
  if ( a2 <= a3 )
  {
    v6[3] = 2;
    v6[5] = 2;
    v6[4] = v7;
    v6[0] = 0;
    v7[2] = &v5;
    v7[0] = &v8;
    v8 = a2;
    v7[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v7[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v6[2] = &off_2CF004;
    core::panicking::panic_fmt((int)v6, a4);
  }
  return a1 + a3;
}
