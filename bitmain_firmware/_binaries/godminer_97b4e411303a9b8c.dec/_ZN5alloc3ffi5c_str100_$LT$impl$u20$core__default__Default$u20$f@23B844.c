_BYTE *alloc::ffi::c_str::<impl core::default::Default for alloc::boxed::Box<core::ffi::c_str::CStr>>::default()
{
  _BYTE *result; // r0

  result = (_BYTE *)_rust_alloc(1u);
  if ( !result )
    alloc::alloc::handle_alloc_error();
  *result = 0;
  return result;
}
