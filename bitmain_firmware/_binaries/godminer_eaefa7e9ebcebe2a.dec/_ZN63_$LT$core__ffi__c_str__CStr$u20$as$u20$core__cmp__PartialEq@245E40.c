bool __fastcall <core::ffi::c_str::CStr as core::cmp::PartialEq>::eq(const void *a1, int a2, void *s2, int a4)
{
  int v4; // r12

  v4 = 0;
  if ( a2 == a4 )
    return bcmp(a1, s2, a2 - 1) == 0;
  return v4;
}
