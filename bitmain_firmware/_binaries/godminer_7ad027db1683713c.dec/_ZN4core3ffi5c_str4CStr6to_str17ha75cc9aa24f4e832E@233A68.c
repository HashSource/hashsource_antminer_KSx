int __fastcall core::ffi::c_str::CStr::to_str(int a1, int a2, int a3)
{
  return core::str::converts::from_utf8(a1, a2, a3 - 1);
}
