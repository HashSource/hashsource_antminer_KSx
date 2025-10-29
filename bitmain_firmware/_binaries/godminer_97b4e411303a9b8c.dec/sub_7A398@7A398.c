void __fastcall sub_7A398(_DWORD *a1, int a2, int a3, __uid_t a4, __gid_t group)
{
  void *v7; // r0
  bool v8; // zf
  char *v9; // r5
  int v10; // r6
  int v11; // r0
  char *v12; // [sp+0h] [bp-10h] BYREF
  int v13; // [sp+4h] [bp-Ch]
  void *ptr; // [sp+8h] [bp-8h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v12);
  v7 = ptr;
  if ( !ptr )
  {
    v9 = v12;
    v10 = v13;
    if ( chown(v12, a4, group) == -1 )
    {
      v11 = *_errno_location();
      *a1 = 0;
      a1[1] = v11;
      *v9 = 0;
      if ( !v10 )
        return;
    }
    else
    {
      *(_BYTE *)a1 = 4;
      *v9 = 0;
      if ( !v10 )
        return;
    }
    _rust_dealloc(v9);
    return;
  }
  v8 = v13 == 0;
  *a1 = dword_2E0158;
  a1[1] = &off_2E014C;
  if ( !v8 )
    _rust_dealloc(v7);
}
