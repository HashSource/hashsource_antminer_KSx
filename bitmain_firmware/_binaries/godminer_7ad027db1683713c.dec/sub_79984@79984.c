void __fastcall sub_79984(_DWORD *a1, _BYTE *a2, size_t a3, __mode_t a4)
{
  void *v6; // r0
  bool v7; // zf
  char *v8; // r5
  int v9; // r6
  int v10; // r0
  char *v11; // [sp+0h] [bp-10h] BYREF
  int v12; // [sp+4h] [bp-Ch]
  void *ptr; // [sp+8h] [bp-8h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v11, a2, a3);
  v6 = ptr;
  if ( !ptr )
  {
    v8 = v11;
    v9 = v12;
    if ( mkdir(v11, a4) == -1 )
    {
      v10 = *_errno_location();
      *a1 = 0;
      a1[1] = v10;
      *v8 = 0;
      if ( !v9 )
        return;
    }
    else
    {
      *(_BYTE *)a1 = 4;
      *v8 = 0;
      if ( !v9 )
        return;
    }
    _rust_dealloc(v8);
    return;
  }
  v7 = v12 == 0;
  *a1 = dword_2CA158;
  a1[1] = &off_2CA14C;
  if ( !v7 )
    _rust_dealloc(v6);
}
