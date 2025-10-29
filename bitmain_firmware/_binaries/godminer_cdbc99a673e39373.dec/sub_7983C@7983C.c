void __fastcall sub_7983C(_DWORD *a1)
{
  void *v2; // r0
  bool v3; // zf
  char *v4; // r5
  int v5; // r6
  int v6; // r0
  char *v7; // [sp+0h] [bp-10h] BYREF
  int v8; // [sp+4h] [bp-Ch]
  void *ptr; // [sp+8h] [bp-8h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v7);
  v2 = ptr;
  if ( !ptr )
  {
    v4 = v7;
    v5 = v8;
    if ( rmdir(v7) == -1 )
    {
      v6 = *_errno_location();
      *a1 = 0;
      a1[1] = v6;
      *v4 = 0;
      if ( !v5 )
        return;
    }
    else
    {
      *(_BYTE *)a1 = 4;
      *v4 = 0;
      if ( !v5 )
        return;
    }
    _rust_dealloc(v4);
    return;
  }
  v3 = v8 == 0;
  *a1 = dword_2CB158;
  a1[1] = &off_2CB14C;
  if ( !v3 )
    _rust_dealloc(v2);
}
