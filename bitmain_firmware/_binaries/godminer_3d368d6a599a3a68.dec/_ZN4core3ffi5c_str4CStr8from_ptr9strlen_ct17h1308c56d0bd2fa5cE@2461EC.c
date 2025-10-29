int __fastcall core::ffi::c_str::CStr::from_ptr::strlen_ct(int a1)
{
  int v1; // r1

  v1 = 0;
  while ( *(unsigned __int8 *)(a1 + v1++) )
    ;
  return v1 - 1;
}
