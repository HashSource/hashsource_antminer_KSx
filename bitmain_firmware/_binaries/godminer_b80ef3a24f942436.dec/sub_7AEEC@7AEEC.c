void __fastcall sub_7AEEC(_DWORD *a1, _BYTE *a2, size_t a3)
{
  void *v4; // r0
  bool v5; // zf
  char *v6; // r5
  int v7; // r6
  int v8; // r0
  char *v9; // [sp+0h] [bp-10h] BYREF
  int v10; // [sp+4h] [bp-Ch]
  void *ptr; // [sp+8h] [bp-8h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v9, a2, a3);
  v4 = ptr;
  if ( !ptr )
  {
    v6 = v9;
    v7 = v10;
    if ( rmdir(v9) == -1 )
    {
      v8 = *_errno_location();
      *a1 = 0;
      a1[1] = v8;
      *v6 = 0;
      if ( !v7 )
        return;
    }
    else
    {
      *(_BYTE *)a1 = 4;
      *v6 = 0;
      if ( !v7 )
        return;
    }
    _rust_dealloc(v6);
    return;
  }
  v5 = v10 == 0;
  *a1 = dword_2EA158;
  a1[1] = &off_2EA14C;
  if ( !v5 )
    _rust_dealloc(v4);
}
