int <alloc::ffi::c_str::CString as core::default::Default>::default()
{
  signed int v0; // r1
  const char *v1; // r5
  size_t v2; // r4
  int v3; // r6

  v1 = <&core::ffi::c_str::CStr as core::default::Default>::default();
  v2 = v0;
  if ( v0 )
  {
    if ( v0 <= -1 )
      alloc::raw_vec::capacity_overflow();
    v3 = _rust_alloc(v0);
    if ( !v3 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v3 = 1;
  }
  memcpy((void *)v3, v1, v2);
  return v3;
}
