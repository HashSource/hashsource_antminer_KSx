int <alloc::ffi::c_str::CString as core::default::Default>::default()
{
  __int64 v0; // r0
  __int64 v1; // kr00_8
  int v2; // r6

  v0 = <&core::ffi::c_str::CStr as core::default::Default>::default();
  v1 = v0;
  if ( HIDWORD(v0) )
  {
    if ( SHIDWORD(v0) <= -1 )
      alloc::raw_vec::capacity_overflow();
    v2 = _rust_alloc(HIDWORD(v0));
    if ( !v2 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v2 = 1;
  }
  memcpy((void *)v2, (const void *)v1, HIDWORD(v1));
  return v2;
}
