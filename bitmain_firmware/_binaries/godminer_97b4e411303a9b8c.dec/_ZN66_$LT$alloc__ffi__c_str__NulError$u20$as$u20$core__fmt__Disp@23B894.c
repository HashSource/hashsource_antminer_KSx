int __fastcall <alloc::ffi::c_str::NulError as core::fmt::Display>::fmt(int a1, int a2)
{
  _DWORD v3[6]; // [sp+0h] [bp-20h] BYREF
  _DWORD v4[2]; // [sp+18h] [bp-8h] BYREF

  v3[3] = 1;
  v3[5] = 1;
  v3[4] = v4;
  v3[0] = 0;
  v4[0] = a1;
  v3[2] = &off_2E47F0;
  v4[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  return core::fmt::Formatter::write_fmt(a2, v3);
}
