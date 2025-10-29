// Alternative name is '_ZN100_$LT$alloc..ffi..c_str..CString$u20$as$u20$core..convert..From$LT$$RF$core..ffi..c_str..CStr$GT$$GT$4from17h78da305aae4edffaE'
// Alternative name is '_ZN5alloc3ffi5c_str131_$LT$impl$u20$core..convert..From$LT$$RF$core..ffi..c_str..CStr$GT$$u20$for$u20$alloc..boxed..Box$LT$core..ffi..c_str..CStr$GT$$GT$4from17h35a5042ad5eb3ba8E'
int __fastcall alloc::ffi::c_str::<impl alloc::borrow::ToOwned for core::ffi::c_str::CStr>::to_owned(
        const void *a1,
        signed int size)
{
  int v4; // r6

  if ( size )
  {
    if ( size <= -1 )
      alloc::raw_vec::capacity_overflow();
    v4 = _rust_alloc(size);
    if ( !v4 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v4 = 1;
  }
  memcpy((void *)v4, a1, size);
  return v4;
}
