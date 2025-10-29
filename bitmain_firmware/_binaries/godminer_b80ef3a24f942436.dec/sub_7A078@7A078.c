void __fastcall sub_7A078(_DWORD *a1, _BYTE *a2, size_t a3, __uid_t a4, __gid_t group)
{
  void *v7; // r0
  bool v8; // zf
  const char *v9; // r5
  int v10; // r6
  int v11; // r0
  const char *v12; // [sp+0h] [bp-10h] BYREF
  int v13; // [sp+4h] [bp-Ch]
  void *ptr; // [sp+8h] [bp-8h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v12, a2, a3);
  v7 = ptr;
  if ( ptr )
  {
    v8 = v13 == 0;
    *a1 = dword_2EA158;
    a1[1] = &off_2EA14C;
    if ( v8 )
      return;
    goto LABEL_3;
  }
  v9 = v12;
  v10 = v13;
  if ( chown(v12, a4, group) == -1 )
  {
    v11 = *_errno_location();
    *a1 = 0;
    a1[1] = v11;
    *v9 = 0;
    if ( v10 )
      goto LABEL_6;
  }
  else
  {
    *(_BYTE *)a1 = 4;
    *v9 = 0;
    if ( v10 )
    {
LABEL_6:
      v7 = (void *)v9;
LABEL_3:
      _rust_dealloc(v7);
    }
  }
}
