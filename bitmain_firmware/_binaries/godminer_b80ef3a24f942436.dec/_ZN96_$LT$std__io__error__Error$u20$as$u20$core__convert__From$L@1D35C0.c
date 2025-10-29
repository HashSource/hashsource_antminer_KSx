void __fastcall <std::io::error::Error as core::convert::From<alloc::ffi::c_str::NulError>>::from(_DWORD *a1, int a2)
{
  int v3; // r1

  v3 = *(_DWORD *)(a2 + 4);
  *a1 = 2;
  a1[1] = &off_2E9A30;
  if ( v3 )
    _rust_dealloc(*(void **)(a2 + 8));
}
