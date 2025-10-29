__int64 __fastcall alloc::ffi::c_str::CString::from_vec_unchecked(int *a1)
{
  int v1; // r1
  int v2; // r2
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v1 = *a1;
  v2 = a1[1];
  v4[2] = a1[2];
  v4[0] = v1;
  v4[1] = v2;
  return alloc::ffi::c_str::CString::_from_vec_unchecked(v4);
}
