void __fastcall std::env::current_dir(_DWORD *a1)
{
  unsigned int v2; // r5
  char *v3; // r0
  char *v4; // r6
  size_t v5; // r0
  size_t v6; // r7
  int v7; // r8
  int v8; // r0
  size_t v9; // r0
  char *v10; // r1
  size_t v11; // r2
  size_t v12; // [sp+0h] [bp-10h] BYREF
  char *v13; // [sp+4h] [bp-Ch]
  size_t v14; // [sp+8h] [bp-8h]

  v2 = 512;
  v3 = (char *)_rust_alloc(0x200u);
  if ( !v3 )
    alloc::alloc::handle_alloc_error();
  v4 = v3;
  v14 = 0;
  v12 = 512;
  v13 = v3;
  if ( getcwd(v3, 0x200u) )
  {
LABEL_3:
    v5 = core::ffi::c_str::CStr::from_ptr::strlen_rt(v4);
    v6 = v5;
    v14 = v5;
    if ( v2 > v5 )
    {
      if ( v5 )
      {
        v7 = _rust_realloc(v4, v2, 1, v5);
        if ( !v7 )
          alloc::alloc::handle_alloc_error();
      }
      else
      {
        v7 = 1;
        _rust_dealloc(v4);
      }
      v12 = v6;
      v13 = (char *)v7;
    }
    v9 = v12;
    v10 = v13;
    v11 = v14;
    *a1 = 0;
    a1[1] = v9;
    a1[2] = v10;
    a1[3] = v11;
    return;
  }
  v8 = *_errno_location();
  v2 = 512;
  if ( v8 == 34 )
  {
    v2 = 512;
    do
    {
      v14 = v2;
      sub_79590(&v12, v2, 1);
      v2 = v12;
      v4 = v13;
      if ( getcwd(v13, v12) )
        goto LABEL_3;
      v8 = *_errno_location();
    }
    while ( v8 == 34 );
  }
  *a1 = 1;
  a1[1] = 0;
  a1[2] = v8;
  if ( v2 )
    _rust_dealloc(v4);
}
